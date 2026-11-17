// Lean compiler output
// Module: Lean.Meta.Tactic.Cbv.CbvSimproc
// Imports: public import Lean.Compiler.InitAttr public import Lean.ScopedEnvExtension public import Lean.Meta.Sym.Simp.SimpM public import Lean.Meta.Sym.Simp.Result public import Lean.Meta.Sym.Simp.App public import Lean.Meta.Sym.Simp.DiscrTree public import Lean.Meta.Sym.Pattern
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_instBEqKey_beq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t l_Lean_Meta_DiscrTree_Key_hash(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_ToExpr_0__Lean_Name_toExprAux(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_declareBuiltin(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instInhabited___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_ensureAttrDeclIsMeta(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t l_Lean_initializing();
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_Sym_Simp_simpOverApplied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_of_nat(lean_object*);
double lean_float_div(double, double);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_Meta_Sym_getMatchWithExtra___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_pre_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_pre_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_pre_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_pre_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_eval_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_eval_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_eval_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_eval_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_post_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_post_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_post_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_post_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocPhase_default;
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocPhase;
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocPhase_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocPhase_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocPhase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocPhase_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocPhase___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocPhase___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocPhase = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocPhase___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Meta_Tactic_Cbv_instHashableCbvSimprocPhase_hash(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instHashableCbvSimprocPhase_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_Cbv_instHashableCbvSimprocPhase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_Cbv_instHashableCbvSimprocPhase_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_Cbv_instHashableCbvSimprocPhase___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instHashableCbvSimprocPhase___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_Cbv_instHashableCbvSimprocPhase = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instHashableCbvSimprocPhase___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Meta.Tactic.Cbv.CbvSimprocPhase.pre"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__1_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lean.Meta.Tactic.Cbv.CbvSimprocPhase.eval"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__2_value)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__3_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lean.Meta.Tactic.Cbv.CbvSimprocPhase.post"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__4_value)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__6;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__1_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__2_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Cbv"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__3_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "CbvSimprocPhase"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__4_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pre"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(7, 212, 55, 101, 104, 194, 19, 213)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__6_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__6_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(113, 161, 104, 89, 81, 29, 125, 142)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__6_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__6_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(15, 16, 153, 141, 221, 202, 206, 69)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__6_value_aux_4),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(174, 198, 190, 17, 0, 62, 186, 92)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__7;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "eval"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(7, 212, 55, 101, 104, 194, 19, 213)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__9_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__9_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(113, 161, 104, 89, 81, 29, 125, 142)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__9_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__9_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(15, 16, 153, 141, 221, 202, 206, 69)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__9_value_aux_4),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(136, 145, 164, 233, 233, 175, 160, 110)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__9 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__10;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "post"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__11 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__12_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__12_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(7, 212, 55, 101, 104, 194, 19, 213)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__12_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__12_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(113, 161, 104, 89, 81, 29, 125, 142)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__12_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__12_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(15, 16, 153, 141, 221, 202, 206, 69)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__12_value_aux_4),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(119, 117, 11, 53, 165, 217, 228, 6)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__12 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__12_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(7, 212, 55, 101, 104, 194, 19, 213)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(113, 161, 104, 89, 81, 29, 125, 142)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__1_value_aux_3),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(15, 16, 153, 141, 221, 202, 206, 69)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase;
static const lean_array_object l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocOLeanEntry_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocOLeanEntry_default___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocOLeanEntry_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocOLeanEntry_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocOLeanEntry_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocOLeanEntry_default___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocOLeanEntry_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocOLeanEntry_default = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocOLeanEntry_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocOLeanEntry = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocOLeanEntry_default___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocEntry___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocEntry___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocEntry___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocEntry___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocEntry___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocEntry = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocEntry___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instToFormatCbvSimprocEntry___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_Cbv_instToFormatCbvSimprocEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_Cbv_instToFormatCbvSimprocEntry___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_Cbv_instToFormatCbvSimprocEntry___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instToFormatCbvSimprocEntry___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_Cbv_instToFormatCbvSimprocEntry = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instToFormatCbvSimprocEntry___closed__0_value;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0(lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__15_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__15___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__16___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__2_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0___closed__0_value),((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__5_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__5_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__2(lean_object*);
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Meta.DiscrTree.Basic"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___closed__0_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.DiscrTree.insertKeyValue"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___closed__1_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid key sequence"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(16, 96, 65, 173, 152, 155, 4, 222)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__2_value),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__3_value;
static const lean_array_object l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__5;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__7_value;
static const lean_array_object l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__7_value)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7_spec__15_spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7_spec__15_spec__23___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7_spec__15___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__11_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__12___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__12(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__16(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__11_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__15_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_erase(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_404265556____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_404265556____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_builtinCbvSimprocDeclsRef;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 89, .m_capacity = 89, .m_length = 88, .m_data = "Invalid builtin cbv simproc declaration: It can only be registered during initialization"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__1;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Invalid builtin cbv simproc declaration `"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__2_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "`: It has already been declared"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDecl_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDecl_default___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDecl_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDecl_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDecl_default___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDecl_default___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDecl_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDecl_default = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDecl_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDecl = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDecl_default___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_CbvSimprocDecl_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocDecl_lt___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__2___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__2___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__2___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "cbvSimprocDeclExt"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(7, 212, 55, 101, 104, 194, 19, 213)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(113, 161, 104, 89, 81, 29, 125, 142)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(19, 182, 205, 129, 188, 54, 74, 13)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_cbvSimprocDeclExt;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isCbvSimproc___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isCbvSimproc___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isCbvSimproc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isCbvSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isBuiltinCbvSimproc___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isBuiltinCbvSimproc___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isBuiltinCbvSimproc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isBuiltinCbvSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__1;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Invalid cbv simproc declaration `"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__4;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "`: It is declared in an imported module"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_registerCbvSimproc(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__1_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Cbv simproc `"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__2_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "` has an unexpected type: Expected `Simproc`, but found `"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__3_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Sym"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__4_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Simp"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__5_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Simproc"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_toCbvSimprocEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_toCbvSimprocEntry___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1269018163____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1269018163____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_builtinCbvSimprocsRef;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "cbvSimprocExt"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(155, 184, 164, 42, 54, 246, 220, 149)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_cbvSimprocExtension;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___closed__0;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "` does not have a [cbv_simproc] attribute"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Invalid `[cbv_simproc]` attribute: `"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__1;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a cbv simproc"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "simpPre"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__1_value),LEAN_SCALAR_PTR_LITERAL(197, 59, 48, 6, 36, 81, 149, 152)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__2_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "cbvSimprocEval"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__3_value),LEAN_SCALAR_PTR_LITERAL(246, 221, 189, 14, 79, 87, 225, 132)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__4_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0_spec__0___redArg___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "cbvSimprocAttr"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 104, 242, 136, 13, 73, 193, 222)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__5;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__6;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__7;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__8;
static lean_once_cell_t l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0(lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttrCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Invalid `[builtin_cbv_simproc]` attribute: `"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttrCore___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttrCore___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttrCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "` is not a builtin cbv simproc"};
static const lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttrCore___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttrCore___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttrCore(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttrCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttr(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "addCbvSimprocBuiltinAttr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(7, 212, 55, 101, 104, 194, 19, 213)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(113, 161, 104, 89, 81, 29, 125, 142)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__0_value),LEAN_SCALAR_PTR_LITERAL(46, 46, 19, 141, 119, 105, 81, 83)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declare"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__3_value),LEAN_SCALAR_PTR_LITERAL(12, 217, 76, 92, 115, 157, 174, 191)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(93, 144, 236, 69, 149, 78, 215, 228)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "CbvSimproc"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(102, 246, 233, 32, 144, 0, 48, 172)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(111, 195, 33, 67, 227, 201, 233, 178)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 80, 153, 5, 12, 193, 47, 210)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(86, 121, 100, 52, 100, 248, 58, 230)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__13_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(43, 53, 62, 250, 213, 135, 222, 83)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__13_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__13_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__13_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(213, 6, 85, 205, 253, 185, 83, 243)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__15_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__15_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__15_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__15_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(124, 49, 121, 44, 210, 159, 116, 74)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(117, 89, 200, 112, 232, 34, 102, 136)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(224, 228, 129, 159, 189, 107, 203, 70)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(204, 188, 21, 86, 205, 70, 6, 105)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(137, 176, 116, 134, 116, 89, 199, 133)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(31, 64, 46, 173, 247, 116, 204, 252)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(252, 173, 236, 92, 177, 72, 11, 215)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)(((size_t)(735115364) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(127, 15, 195, 174, 145, 172, 96, 182)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__26_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(20, 75, 147, 248, 238, 192, 151, 95)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__26_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__26_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__27_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__27_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__27_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__28_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__26_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__27_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(64, 247, 227, 4, 148, 191, 156, 205)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__28_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__28_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__29_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__28_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(113, 151, 92, 207, 210, 188, 39, 240)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__29_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__29_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__30_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Cbv simplification procedure"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__30_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__30_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__31_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__29_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__1_value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__30_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__31_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__31_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__32_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__31_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__32_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__32_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Not implemented yet, [-builtin_cbv_simproc]"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2____boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "cbvSimprocBuiltinAttr"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(55, 176, 240, 9, 13, 93, 32, 75)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Builtin cbv simplification procedure"};
static const lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocs___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocs___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocs___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__4___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___boxed(lean_object**);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simproc "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ": done"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": no change"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__7;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__9;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "\n==>"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__10_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__11;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__4_value),LEAN_SCALAR_PTR_LITERAL(243, 157, 148, 19, 62, 70, 252, 55)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__5_value),LEAN_SCALAR_PTR_LITERAL(27, 118, 156, 162, 140, 167, 154, 191)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(7, 212, 55, 101, 104, 194, 19, 213)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(113, 161, 104, 89, 81, 29, 125, 142)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cbv"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simprocs"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__5_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(180, 58, 216, 170, 2, 199, 127, 134)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__5_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(61, 69, 90, 123, 228, 205, 71, 22)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__9;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__10;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Tactic_Cbv_cbvSimprocDispatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Tactic_Cbv_cbvSimprocDispatch___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_Cbv_cbvSimprocDispatch___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_cbvSimprocDispatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_cbvSimprocDispatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_pre_elim___redArg(lean_object* v_pre_22_){
_start:
{
lean_inc(v_pre_22_);
return v_pre_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_pre_elim___redArg___boxed(lean_object* v_pre_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_pre_elim___redArg(v_pre_23_);
lean_dec(v_pre_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_pre_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_pre_28_){
_start:
{
lean_inc(v_pre_28_);
return v_pre_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_pre_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_pre_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_pre_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_pre_32_);
lean_dec(v_pre_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_eval_elim___redArg(lean_object* v_eval_35_){
_start:
{
lean_inc(v_eval_35_);
return v_eval_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_eval_elim___redArg___boxed(lean_object* v_eval_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_eval_elim___redArg(v_eval_36_);
lean_dec(v_eval_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_eval_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_eval_41_){
_start:
{
lean_inc(v_eval_41_);
return v_eval_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_eval_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_eval_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_eval_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_eval_45_);
lean_dec(v_eval_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_post_elim___redArg(lean_object* v_post_48_){
_start:
{
lean_inc(v_post_48_);
return v_post_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_post_elim___redArg___boxed(lean_object* v_post_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_post_elim___redArg(v_post_49_);
lean_dec(v_post_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_post_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_post_54_){
_start:
{
lean_inc(v_post_54_);
return v_post_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_post_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_post_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocPhase_post_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_post_58_);
lean_dec(v_post_58_);
return v_res_60_;
}
}
static uint8_t _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocPhase_default(void){
_start:
{
uint8_t v___x_61_; 
v___x_61_ = 0;
return v___x_61_;
}
}
static uint8_t _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocPhase(void){
_start:
{
uint8_t v___x_62_; 
v___x_62_ = 0;
return v___x_62_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocPhase_beq(uint8_t v_x_63_, uint8_t v_y_64_){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; uint8_t v___x_69_; 
v___x_65_ = lean_box(v_x_63_);
v___x_66_ = lean_obj_tag_nat(v___x_65_);
lean_dec(v___x_65_);
v___x_67_ = lean_box(v_y_64_);
v___x_68_ = lean_obj_tag_nat(v___x_67_);
lean_dec(v___x_67_);
v___x_69_ = lean_nat_dec_eq(v___x_66_, v___x_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocPhase_beq___boxed(lean_object* v_x_70_, lean_object* v_y_71_){
_start:
{
uint8_t v_x_24__boxed_72_; uint8_t v_y_25__boxed_73_; uint8_t v_res_74_; lean_object* v_r_75_; 
v_x_24__boxed_72_ = lean_unbox(v_x_70_);
v_y_25__boxed_73_ = lean_unbox(v_y_71_);
v_res_74_ = l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocPhase_beq(v_x_24__boxed_72_, v_y_25__boxed_73_);
v_r_75_ = lean_box(v_res_74_);
return v_r_75_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Tactic_Cbv_instHashableCbvSimprocPhase_hash(uint8_t v_x_78_){
_start:
{
switch(v_x_78_)
{
case 0:
{
uint64_t v___x_79_; 
v___x_79_ = 0ULL;
return v___x_79_;
}
case 1:
{
uint64_t v___x_80_; 
v___x_80_ = 1ULL;
return v___x_80_;
}
default: 
{
uint64_t v___x_81_; 
v___x_81_ = 2ULL;
return v___x_81_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instHashableCbvSimprocPhase_hash___boxed(lean_object* v_x_82_){
_start:
{
uint8_t v_x_40__boxed_83_; uint64_t v_res_84_; lean_object* v_r_85_; 
v_x_40__boxed_83_ = lean_unbox(v_x_82_);
v_res_84_ = l_Lean_Meta_Tactic_Cbv_instHashableCbvSimprocPhase_hash(v_x_40__boxed_83_);
v_r_85_ = lean_box_uint64(v_res_84_);
return v_r_85_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__6(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = lean_unsigned_to_nat(2u);
v___x_98_ = lean_nat_to_int(v___x_97_);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__7(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = lean_unsigned_to_nat(1u);
v___x_100_ = lean_nat_to_int(v___x_99_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr(uint8_t v_x_101_, lean_object* v_prec_102_){
_start:
{
lean_object* v___y_104_; lean_object* v___y_111_; lean_object* v___y_118_; 
switch(v_x_101_)
{
case 0:
{
lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_124_ = lean_unsigned_to_nat(1024u);
v___x_125_ = lean_nat_dec_le(v___x_124_, v_prec_102_);
if (v___x_125_ == 0)
{
lean_object* v___x_126_; 
v___x_126_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__6, &l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__6_once, _init_l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__6);
v___y_104_ = v___x_126_;
goto v___jp_103_;
}
else
{
lean_object* v___x_127_; 
v___x_127_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__7, &l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__7_once, _init_l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__7);
v___y_104_ = v___x_127_;
goto v___jp_103_;
}
}
case 1:
{
lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_128_ = lean_unsigned_to_nat(1024u);
v___x_129_ = lean_nat_dec_le(v___x_128_, v_prec_102_);
if (v___x_129_ == 0)
{
lean_object* v___x_130_; 
v___x_130_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__6, &l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__6_once, _init_l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__6);
v___y_111_ = v___x_130_;
goto v___jp_110_;
}
else
{
lean_object* v___x_131_; 
v___x_131_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__7, &l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__7_once, _init_l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__7);
v___y_111_ = v___x_131_;
goto v___jp_110_;
}
}
default: 
{
lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_132_ = lean_unsigned_to_nat(1024u);
v___x_133_ = lean_nat_dec_le(v___x_132_, v_prec_102_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; 
v___x_134_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__6, &l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__6_once, _init_l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__6);
v___y_118_ = v___x_134_;
goto v___jp_117_;
}
else
{
lean_object* v___x_135_; 
v___x_135_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__7, &l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__7_once, _init_l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__7);
v___y_118_ = v___x_135_;
goto v___jp_117_;
}
}
}
v___jp_103_:
{
lean_object* v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_105_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__1));
lean_inc(v___y_104_);
v___x_106_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_106_, 0, v___y_104_);
lean_ctor_set(v___x_106_, 1, v___x_105_);
v___x_107_ = 0;
v___x_108_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_108_, 0, v___x_106_);
lean_ctor_set_uint8(v___x_108_, sizeof(void*)*1, v___x_107_);
v___x_109_ = l_Repr_addAppParen(v___x_108_, v_prec_102_);
return v___x_109_;
}
v___jp_110_:
{
lean_object* v___x_112_; lean_object* v___x_113_; uint8_t v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_112_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__3));
lean_inc(v___y_111_);
v___x_113_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_113_, 0, v___y_111_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
v___x_114_ = 0;
v___x_115_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_115_, 0, v___x_113_);
lean_ctor_set_uint8(v___x_115_, sizeof(void*)*1, v___x_114_);
v___x_116_ = l_Repr_addAppParen(v___x_115_, v_prec_102_);
return v___x_116_;
}
v___jp_117_:
{
lean_object* v___x_119_; lean_object* v___x_120_; uint8_t v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_119_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___closed__5));
lean_inc(v___y_118_);
v___x_120_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_120_, 0, v___y_118_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
v___x_121_ = 0;
v___x_122_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_122_, 0, v___x_120_);
lean_ctor_set_uint8(v___x_122_, sizeof(void*)*1, v___x_121_);
v___x_123_ = l_Repr_addAppParen(v___x_122_, v_prec_102_);
return v___x_123_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr___boxed(lean_object* v_x_136_, lean_object* v_prec_137_){
_start:
{
uint8_t v_x_255__boxed_138_; lean_object* v_res_139_; 
v_x_255__boxed_138_ = lean_unbox(v_x_136_);
v_res_139_ = l_Lean_Meta_Tactic_Cbv_instReprCbvSimprocPhase_repr(v_x_255__boxed_138_, v_prec_137_);
lean_dec(v_prec_137_);
return v_res_139_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__7(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_155_ = lean_box(0);
v___x_156_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__6));
v___x_157_ = l_Lean_mkConst(v___x_156_, v___x_155_);
return v___x_157_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__10(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_166_ = lean_box(0);
v___x_167_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__9));
v___x_168_ = l_Lean_mkConst(v___x_167_, v___x_166_);
return v___x_168_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__13(void){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_177_ = lean_box(0);
v___x_178_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__12));
v___x_179_ = l_Lean_mkConst(v___x_178_, v___x_177_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0(uint8_t v_x_180_){
_start:
{
switch(v_x_180_)
{
case 0:
{
lean_object* v___x_181_; 
v___x_181_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__7, &l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__7_once, _init_l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__7);
return v___x_181_;
}
case 1:
{
lean_object* v___x_182_; 
v___x_182_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__10, &l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__10_once, _init_l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__10);
return v___x_182_;
}
default: 
{
lean_object* v___x_183_; 
v___x_183_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__13, &l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__13_once, _init_l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__13);
return v___x_183_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___boxed(lean_object* v_x_184_){
_start:
{
uint8_t v_x_196__boxed_185_; lean_object* v_res_186_; 
v_x_196__boxed_185_ = lean_unbox(v_x_184_);
v_res_186_ = l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0(v_x_196__boxed_185_);
return v_res_186_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__2(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_194_ = lean_box(0);
v___x_195_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__1));
v___x_196_ = l_Lean_mkConst(v___x_195_, v___x_194_);
return v___x_196_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__3(void){
_start:
{
lean_object* v___x_197_; lean_object* v___f_198_; lean_object* v___x_199_; 
v___x_197_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__2, &l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__2_once, _init_l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__2);
v___f_198_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__0));
v___x_199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_199_, 0, v___f_198_);
lean_ctor_set(v___x_199_, 1, v___x_197_);
return v___x_199_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase(void){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__3, &l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__3_once, _init_l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___closed__3);
return v___x_200_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocEntry___lam__0(lean_object* v_e_u2081_209_, lean_object* v_e_u2082_210_){
_start:
{
lean_object* v_toCbvSimprocOLeanEntry_211_; lean_object* v_toCbvSimprocOLeanEntry_212_; lean_object* v_declName_213_; lean_object* v_declName_214_; uint8_t v___x_215_; 
v_toCbvSimprocOLeanEntry_211_ = lean_ctor_get(v_e_u2081_209_, 0);
v_toCbvSimprocOLeanEntry_212_ = lean_ctor_get(v_e_u2082_210_, 0);
v_declName_213_ = lean_ctor_get(v_toCbvSimprocOLeanEntry_211_, 0);
v_declName_214_ = lean_ctor_get(v_toCbvSimprocOLeanEntry_212_, 0);
v___x_215_ = lean_name_eq(v_declName_213_, v_declName_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocEntry___lam__0___boxed(lean_object* v_e_u2081_216_, lean_object* v_e_u2082_217_){
_start:
{
uint8_t v_res_218_; lean_object* v_r_219_; 
v_res_218_ = l_Lean_Meta_Tactic_Cbv_instBEqCbvSimprocEntry___lam__0(v_e_u2081_216_, v_e_u2082_217_);
lean_dec_ref(v_e_u2082_217_);
lean_dec_ref(v_e_u2081_216_);
v_r_219_ = lean_box(v_res_218_);
return v_r_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_instToFormatCbvSimprocEntry___lam__0(lean_object* v_e_222_){
_start:
{
lean_object* v_toCbvSimprocOLeanEntry_223_; lean_object* v_declName_224_; uint8_t v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v_toCbvSimprocOLeanEntry_223_ = lean_ctor_get(v_e_222_, 0);
lean_inc_ref(v_toCbvSimprocOLeanEntry_223_);
lean_dec_ref(v_e_222_);
v_declName_224_ = lean_ctor_get(v_toCbvSimprocOLeanEntry_223_, 0);
lean_inc(v_declName_224_);
lean_dec_ref(v_toCbvSimprocOLeanEntry_223_);
v___x_225_ = 1;
v___x_226_ = l_Lean_Name_toString(v_declName_224_, v___x_225_);
v___x_227_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
return v___x_227_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_230_; 
v___x_230_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_230_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_231_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0);
v___x_232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_232_, 0, v___x_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg(){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__1);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___boxed(lean_object* v___dummy_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg();
return v_res_236_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___closed__0(void){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg();
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0(lean_object* v_00_u03b2_238_){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___closed__0);
return v___x_239_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default___closed__0(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0);
v___x_241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
return v___x_241_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default___closed__1(void){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_242_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___closed__0);
v___x_243_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default___closed__0, &l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default___closed__0_once, _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default___closed__0);
v___x_244_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
lean_ctor_set(v___x_244_, 2, v___x_243_);
lean_ctor_set(v___x_244_, 3, v___x_242_);
lean_ctor_set(v___x_244_, 4, v___x_242_);
return v___x_244_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default(void){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default___closed__1, &l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default___closed__1);
return v___x_245_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs(void){
_start:
{
lean_object* v___x_246_; 
v___x_246_ = l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default;
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__15_spec__18___redArg(lean_object* v_x_247_, lean_object* v_x_248_, lean_object* v_x_249_, lean_object* v_x_250_){
_start:
{
lean_object* v_ks_251_; lean_object* v_vs_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_276_; 
v_ks_251_ = lean_ctor_get(v_x_247_, 0);
v_vs_252_ = lean_ctor_get(v_x_247_, 1);
v_isSharedCheck_276_ = !lean_is_exclusive(v_x_247_);
if (v_isSharedCheck_276_ == 0)
{
v___x_254_ = v_x_247_;
v_isShared_255_ = v_isSharedCheck_276_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_vs_252_);
lean_inc(v_ks_251_);
lean_dec(v_x_247_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_276_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_256_; uint8_t v___x_257_; 
v___x_256_ = lean_array_get_size(v_ks_251_);
v___x_257_ = lean_nat_dec_lt(v_x_248_, v___x_256_);
if (v___x_257_ == 0)
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_261_; 
lean_dec(v_x_248_);
v___x_258_ = lean_array_push(v_ks_251_, v_x_249_);
v___x_259_ = lean_array_push(v_vs_252_, v_x_250_);
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 1, v___x_259_);
lean_ctor_set(v___x_254_, 0, v___x_258_);
v___x_261_ = v___x_254_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___x_258_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v___x_259_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
else
{
lean_object* v_k_x27_263_; uint8_t v___x_264_; 
v_k_x27_263_ = lean_array_fget_borrowed(v_ks_251_, v_x_248_);
v___x_264_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_249_, v_k_x27_263_);
if (v___x_264_ == 0)
{
lean_object* v___x_266_; 
if (v_isShared_255_ == 0)
{
v___x_266_ = v___x_254_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_ks_251_);
lean_ctor_set(v_reuseFailAlloc_270_, 1, v_vs_252_);
v___x_266_ = v_reuseFailAlloc_270_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_unsigned_to_nat(1u);
v___x_268_ = lean_nat_add(v_x_248_, v___x_267_);
lean_dec(v_x_248_);
v_x_247_ = v___x_266_;
v_x_248_ = v___x_268_;
goto _start;
}
}
else
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_274_; 
v___x_271_ = lean_array_fset(v_ks_251_, v_x_248_, v_x_249_);
v___x_272_ = lean_array_fset(v_vs_252_, v_x_248_, v_x_250_);
lean_dec(v_x_248_);
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 1, v___x_272_);
lean_ctor_set(v___x_254_, 0, v___x_271_);
v___x_274_ = v___x_254_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_271_);
lean_ctor_set(v_reuseFailAlloc_275_, 1, v___x_272_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__15___redArg(lean_object* v_n_277_, lean_object* v_k_278_, lean_object* v_v_279_){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = lean_unsigned_to_nat(0u);
v___x_281_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__15_spec__18___redArg(v_n_277_, v___x_280_, v_k_278_, v_v_279_);
return v___x_281_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_282_; 
v___x_282_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___redArg(lean_object* v_x_283_, size_t v_x_284_, size_t v_x_285_, lean_object* v_x_286_, lean_object* v_x_287_){
_start:
{
if (lean_obj_tag(v_x_283_) == 0)
{
lean_object* v_es_288_; size_t v___x_289_; size_t v___x_290_; lean_object* v_j_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v_es_288_ = lean_ctor_get(v_x_283_, 0);
v___x_289_ = ((size_t)31ULL);
v___x_290_ = lean_usize_land(v_x_284_, v___x_289_);
v_j_291_ = lean_usize_to_nat(v___x_290_);
v___x_292_ = lean_array_get_size(v_es_288_);
v___x_293_ = lean_nat_dec_lt(v_j_291_, v___x_292_);
if (v___x_293_ == 0)
{
lean_dec(v_j_291_);
lean_dec(v_x_287_);
lean_dec(v_x_286_);
return v_x_283_;
}
else
{
lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_332_; 
lean_inc_ref(v_es_288_);
v_isSharedCheck_332_ = !lean_is_exclusive(v_x_283_);
if (v_isSharedCheck_332_ == 0)
{
lean_object* v_unused_333_; 
v_unused_333_ = lean_ctor_get(v_x_283_, 0);
lean_dec(v_unused_333_);
v___x_295_ = v_x_283_;
v_isShared_296_ = v_isSharedCheck_332_;
goto v_resetjp_294_;
}
else
{
lean_dec(v_x_283_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_332_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v_v_297_; lean_object* v___x_298_; lean_object* v_xs_x27_299_; lean_object* v___y_301_; 
v_v_297_ = lean_array_fget(v_es_288_, v_j_291_);
v___x_298_ = lean_box(0);
v_xs_x27_299_ = lean_array_fset(v_es_288_, v_j_291_, v___x_298_);
switch(lean_obj_tag(v_v_297_))
{
case 0:
{
lean_object* v_key_306_; lean_object* v_val_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_317_; 
v_key_306_ = lean_ctor_get(v_v_297_, 0);
v_val_307_ = lean_ctor_get(v_v_297_, 1);
v_isSharedCheck_317_ = !lean_is_exclusive(v_v_297_);
if (v_isSharedCheck_317_ == 0)
{
v___x_309_ = v_v_297_;
v_isShared_310_ = v_isSharedCheck_317_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_val_307_);
lean_inc(v_key_306_);
lean_dec(v_v_297_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_317_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
uint8_t v___x_311_; 
v___x_311_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_286_, v_key_306_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; lean_object* v___x_313_; 
lean_del_object(v___x_309_);
v___x_312_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_306_, v_val_307_, v_x_286_, v_x_287_);
v___x_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
v___y_301_ = v___x_313_;
goto v___jp_300_;
}
else
{
lean_object* v___x_315_; 
lean_dec(v_val_307_);
lean_dec(v_key_306_);
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 1, v_x_287_);
lean_ctor_set(v___x_309_, 0, v_x_286_);
v___x_315_ = v___x_309_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_x_286_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v_x_287_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
v___y_301_ = v___x_315_;
goto v___jp_300_;
}
}
}
}
case 1:
{
lean_object* v_node_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_330_; 
v_node_318_ = lean_ctor_get(v_v_297_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v_v_297_);
if (v_isSharedCheck_330_ == 0)
{
v___x_320_ = v_v_297_;
v_isShared_321_ = v_isSharedCheck_330_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_node_318_);
lean_dec(v_v_297_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_330_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
size_t v___x_322_; size_t v___x_323_; size_t v___x_324_; size_t v___x_325_; lean_object* v___x_326_; lean_object* v___x_328_; 
v___x_322_ = ((size_t)5ULL);
v___x_323_ = lean_usize_shift_right(v_x_284_, v___x_322_);
v___x_324_ = ((size_t)1ULL);
v___x_325_ = lean_usize_add(v_x_285_, v___x_324_);
v___x_326_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___redArg(v_node_318_, v___x_323_, v___x_325_, v_x_286_, v_x_287_);
if (v_isShared_321_ == 0)
{
lean_ctor_set(v___x_320_, 0, v___x_326_);
v___x_328_ = v___x_320_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v___x_326_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
v___y_301_ = v___x_328_;
goto v___jp_300_;
}
}
}
default: 
{
lean_object* v___x_331_; 
v___x_331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_331_, 0, v_x_286_);
lean_ctor_set(v___x_331_, 1, v_x_287_);
v___y_301_ = v___x_331_;
goto v___jp_300_;
}
}
v___jp_300_:
{
lean_object* v___x_302_; lean_object* v___x_304_; 
v___x_302_ = lean_array_fset(v_xs_x27_299_, v_j_291_, v___y_301_);
lean_dec(v_j_291_);
if (v_isShared_296_ == 0)
{
lean_ctor_set(v___x_295_, 0, v___x_302_);
v___x_304_ = v___x_295_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_302_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
}
}
}
else
{
lean_object* v_ks_334_; lean_object* v_vs_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_353_; 
v_ks_334_ = lean_ctor_get(v_x_283_, 0);
v_vs_335_ = lean_ctor_get(v_x_283_, 1);
v_isSharedCheck_353_ = !lean_is_exclusive(v_x_283_);
if (v_isSharedCheck_353_ == 0)
{
v___x_337_ = v_x_283_;
v_isShared_338_ = v_isSharedCheck_353_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_vs_335_);
lean_inc(v_ks_334_);
lean_dec(v_x_283_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_353_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_340_; 
if (v_isShared_338_ == 0)
{
v___x_340_ = v___x_337_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_ks_334_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v_vs_335_);
v___x_340_ = v_reuseFailAlloc_352_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
lean_object* v_newNode_341_; size_t v___x_342_; uint8_t v___x_343_; 
v_newNode_341_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__15___redArg(v___x_340_, v_x_286_, v_x_287_);
v___x_342_ = ((size_t)7ULL);
v___x_343_ = lean_usize_dec_le(v___x_342_, v_x_285_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; lean_object* v___x_345_; uint8_t v___x_346_; 
v___x_344_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_341_);
v___x_345_ = lean_unsigned_to_nat(4u);
v___x_346_ = lean_nat_dec_lt(v___x_344_, v___x_345_);
lean_dec(v___x_344_);
if (v___x_346_ == 0)
{
lean_object* v_ks_347_; lean_object* v_vs_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v_ks_347_ = lean_ctor_get(v_newNode_341_, 0);
lean_inc_ref(v_ks_347_);
v_vs_348_ = lean_ctor_get(v_newNode_341_, 1);
lean_inc_ref(v_vs_348_);
lean_dec_ref(v_newNode_341_);
v___x_349_ = lean_unsigned_to_nat(0u);
v___x_350_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___redArg___closed__0);
v___x_351_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__16___redArg(v_x_285_, v_ks_347_, v_vs_348_, v___x_349_, v___x_350_);
lean_dec_ref(v_vs_348_);
lean_dec_ref(v_ks_347_);
return v___x_351_;
}
else
{
return v_newNode_341_;
}
}
else
{
return v_newNode_341_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__16___redArg(size_t v_depth_354_, lean_object* v_keys_355_, lean_object* v_vals_356_, lean_object* v_i_357_, lean_object* v_entries_358_){
_start:
{
lean_object* v___x_359_; uint8_t v___x_360_; 
v___x_359_ = lean_array_get_size(v_keys_355_);
v___x_360_ = lean_nat_dec_lt(v_i_357_, v___x_359_);
if (v___x_360_ == 0)
{
lean_dec(v_i_357_);
return v_entries_358_;
}
else
{
lean_object* v_k_361_; lean_object* v_v_362_; uint64_t v___x_363_; size_t v_h_364_; size_t v___x_365_; lean_object* v___x_366_; size_t v___x_367_; size_t v___x_368_; size_t v___x_369_; size_t v_h_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v_k_361_ = lean_array_fget_borrowed(v_keys_355_, v_i_357_);
v_v_362_ = lean_array_fget_borrowed(v_vals_356_, v_i_357_);
v___x_363_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_361_);
v_h_364_ = lean_uint64_to_usize(v___x_363_);
v___x_365_ = ((size_t)5ULL);
v___x_366_ = lean_unsigned_to_nat(1u);
v___x_367_ = ((size_t)1ULL);
v___x_368_ = lean_usize_sub(v_depth_354_, v___x_367_);
v___x_369_ = lean_usize_mul(v___x_365_, v___x_368_);
v_h_370_ = lean_usize_shift_right(v_h_364_, v___x_369_);
v___x_371_ = lean_nat_add(v_i_357_, v___x_366_);
lean_dec(v_i_357_);
lean_inc(v_v_362_);
lean_inc(v_k_361_);
v___x_372_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___redArg(v_entries_358_, v_h_370_, v_depth_354_, v_k_361_, v_v_362_);
v_i_357_ = v___x_371_;
v_entries_358_ = v___x_372_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__16___redArg___boxed(lean_object* v_depth_374_, lean_object* v_keys_375_, lean_object* v_vals_376_, lean_object* v_i_377_, lean_object* v_entries_378_){
_start:
{
size_t v_depth_boxed_379_; lean_object* v_res_380_; 
v_depth_boxed_379_ = lean_unbox_usize(v_depth_374_);
lean_dec(v_depth_374_);
v_res_380_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__16___redArg(v_depth_boxed_379_, v_keys_375_, v_vals_376_, v_i_377_, v_entries_378_);
lean_dec_ref(v_vals_376_);
lean_dec_ref(v_keys_375_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___redArg___boxed(lean_object* v_x_381_, lean_object* v_x_382_, lean_object* v_x_383_, lean_object* v_x_384_, lean_object* v_x_385_){
_start:
{
size_t v_x_3355__boxed_386_; size_t v_x_3356__boxed_387_; lean_object* v_res_388_; 
v_x_3355__boxed_386_ = lean_unbox_usize(v_x_382_);
lean_dec(v_x_382_);
v_x_3356__boxed_387_ = lean_unbox_usize(v_x_383_);
lean_dec(v_x_383_);
v_res_388_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___redArg(v_x_381_, v_x_3355__boxed_386_, v_x_3356__boxed_387_, v_x_384_, v_x_385_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__2_spec__8(lean_object* v_vs_389_, lean_object* v_v_390_, lean_object* v_i_391_){
_start:
{
lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_392_ = lean_array_get_size(v_vs_389_);
v___x_393_ = lean_nat_dec_lt(v_i_391_, v___x_392_);
if (v___x_393_ == 0)
{
lean_object* v___x_394_; 
lean_dec(v_i_391_);
v___x_394_ = lean_array_push(v_vs_389_, v_v_390_);
return v___x_394_;
}
else
{
lean_object* v_toCbvSimprocOLeanEntry_395_; lean_object* v_declName_396_; lean_object* v___x_397_; lean_object* v_toCbvSimprocOLeanEntry_398_; lean_object* v_declName_399_; uint8_t v___x_400_; 
v_toCbvSimprocOLeanEntry_395_ = lean_ctor_get(v_v_390_, 0);
v_declName_396_ = lean_ctor_get(v_toCbvSimprocOLeanEntry_395_, 0);
v___x_397_ = lean_array_fget_borrowed(v_vs_389_, v_i_391_);
v_toCbvSimprocOLeanEntry_398_ = lean_ctor_get(v___x_397_, 0);
v_declName_399_ = lean_ctor_get(v_toCbvSimprocOLeanEntry_398_, 0);
v___x_400_ = lean_name_eq(v_declName_396_, v_declName_399_);
if (v___x_400_ == 0)
{
lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_401_ = lean_unsigned_to_nat(1u);
v___x_402_ = lean_nat_add(v_i_391_, v___x_401_);
lean_dec(v_i_391_);
v_i_391_ = v___x_402_;
goto _start;
}
else
{
lean_object* v___x_404_; 
v___x_404_ = lean_array_fset(v_vs_389_, v_i_391_, v_v_390_);
lean_dec(v_i_391_);
return v___x_404_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__2(lean_object* v_vs_405_, lean_object* v_v_406_){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = lean_unsigned_to_nat(0u);
v___x_408_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__2_spec__8(v_vs_405_, v_v_406_, v___x_407_);
return v___x_408_;
}
}
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___lam__0(lean_object* v_a_409_, lean_object* v_b_410_){
_start:
{
lean_object* v_fst_411_; lean_object* v_fst_412_; uint8_t v___x_413_; 
v_fst_411_ = lean_ctor_get(v_a_409_, 0);
v_fst_412_ = lean_ctor_get(v_b_410_, 0);
v___x_413_ = l_Lean_Meta_DiscrTree_Key_lt(v_fst_411_, v_fst_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v_a_414_, lean_object* v_b_415_){
_start:
{
uint8_t v_res_416_; lean_object* v_r_417_; 
v_res_416_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___lam__0(v_a_414_, v_b_415_);
lean_dec_ref(v_b_415_);
lean_dec_ref(v_a_414_);
v_r_417_ = lean_box(v_res_416_);
return v_r_417_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1_spec__6___redArg(lean_object* v___x_418_, lean_object* v_as_419_, lean_object* v_k_420_, lean_object* v_x_421_, lean_object* v_x_422_){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v_mid_425_; lean_object* v_midVal_426_; uint8_t v___x_427_; 
v___x_423_ = lean_nat_add(v_x_421_, v_x_422_);
v___x_424_ = lean_unsigned_to_nat(1u);
v_mid_425_ = lean_nat_shiftr(v___x_423_, v___x_424_);
lean_dec(v___x_423_);
v_midVal_426_ = lean_array_fget_borrowed(v_as_419_, v_mid_425_);
v___x_427_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___lam__0(v_midVal_426_, v_k_420_);
if (v___x_427_ == 0)
{
uint8_t v___x_428_; 
lean_dec(v_x_422_);
v___x_428_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___lam__0(v_k_420_, v_midVal_426_);
if (v___x_428_ == 0)
{
lean_object* v___x_429_; uint8_t v___x_430_; 
lean_dec(v_x_421_);
v___x_429_ = lean_array_get_size(v_as_419_);
v___x_430_ = lean_nat_dec_lt(v_mid_425_, v___x_429_);
if (v___x_430_ == 0)
{
lean_dec(v_mid_425_);
lean_dec_ref(v___x_418_);
return v_as_419_;
}
else
{
lean_object* v___x_431_; lean_object* v_xs_x27_432_; lean_object* v___x_433_; 
v___x_431_ = lean_box(0);
v_xs_x27_432_ = lean_array_fset(v_as_419_, v_mid_425_, v___x_431_);
v___x_433_ = lean_array_fset(v_xs_x27_432_, v_mid_425_, v___x_418_);
lean_dec(v_mid_425_);
return v___x_433_;
}
}
else
{
v_x_422_ = v_mid_425_;
goto _start;
}
}
else
{
uint8_t v___x_435_; 
v___x_435_ = lean_nat_dec_eq(v_mid_425_, v_x_421_);
if (v___x_435_ == 0)
{
lean_dec(v_x_421_);
v_x_421_ = v_mid_425_;
goto _start;
}
else
{
lean_object* v___x_437_; lean_object* v_j_438_; lean_object* v_as_439_; lean_object* v___x_440_; 
lean_dec(v_mid_425_);
lean_dec(v_x_422_);
v___x_437_ = lean_nat_add(v_x_421_, v___x_424_);
lean_dec(v_x_421_);
v_j_438_ = lean_array_get_size(v_as_419_);
v_as_439_ = lean_array_push(v_as_419_, v___x_418_);
v___x_440_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_437_, v_as_439_, v_j_438_);
lean_dec(v___x_437_);
return v___x_440_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1_spec__6___redArg___boxed(lean_object* v___x_441_, lean_object* v_as_442_, lean_object* v_k_443_, lean_object* v_x_444_, lean_object* v_x_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1_spec__6___redArg(v___x_441_, v_as_442_, v_k_443_, v_x_444_, v_x_445_);
lean_dec_ref(v_k_443_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1(lean_object* v___x_447_, lean_object* v_as_448_, lean_object* v_k_449_){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; uint8_t v___x_452_; 
v___x_450_ = lean_array_get_size(v_as_448_);
v___x_451_ = lean_unsigned_to_nat(0u);
v___x_452_ = lean_nat_dec_eq(v___x_450_, v___x_451_);
if (v___x_452_ == 0)
{
lean_object* v___x_453_; uint8_t v___x_454_; 
v___x_453_ = lean_array_fget_borrowed(v_as_448_, v___x_451_);
v___x_454_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___lam__0(v_k_449_, v___x_453_);
if (v___x_454_ == 0)
{
uint8_t v___x_455_; 
v___x_455_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___lam__0(v___x_453_, v_k_449_);
if (v___x_455_ == 0)
{
uint8_t v___x_456_; 
v___x_456_ = lean_nat_dec_lt(v___x_451_, v___x_450_);
if (v___x_456_ == 0)
{
lean_dec_ref(v___x_447_);
return v_as_448_;
}
else
{
lean_object* v___x_457_; lean_object* v_xs_x27_458_; lean_object* v___x_459_; 
v___x_457_ = lean_box(0);
v_xs_x27_458_ = lean_array_fset(v_as_448_, v___x_451_, v___x_457_);
v___x_459_ = lean_array_fset(v_xs_x27_458_, v___x_451_, v___x_447_);
return v___x_459_;
}
}
else
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; uint8_t v___x_463_; 
v___x_460_ = lean_unsigned_to_nat(1u);
v___x_461_ = lean_nat_sub(v___x_450_, v___x_460_);
v___x_462_ = lean_array_fget_borrowed(v_as_448_, v___x_461_);
v___x_463_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___lam__0(v___x_462_, v_k_449_);
if (v___x_463_ == 0)
{
uint8_t v___x_464_; 
v___x_464_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___lam__0(v_k_449_, v___x_462_);
if (v___x_464_ == 0)
{
uint8_t v___x_465_; 
v___x_465_ = lean_nat_dec_lt(v___x_461_, v___x_450_);
if (v___x_465_ == 0)
{
lean_dec(v___x_461_);
lean_dec_ref(v___x_447_);
return v_as_448_;
}
else
{
lean_object* v___x_466_; lean_object* v_xs_x27_467_; lean_object* v___x_468_; 
v___x_466_ = lean_box(0);
v_xs_x27_467_ = lean_array_fset(v_as_448_, v___x_461_, v___x_466_);
v___x_468_ = lean_array_fset(v_xs_x27_467_, v___x_461_, v___x_447_);
lean_dec(v___x_461_);
return v___x_468_;
}
}
else
{
lean_object* v___x_469_; 
v___x_469_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1_spec__6___redArg(v___x_447_, v_as_448_, v_k_449_, v___x_451_, v___x_461_);
return v___x_469_;
}
}
else
{
lean_object* v___x_470_; 
lean_dec(v___x_461_);
v___x_470_ = lean_array_push(v_as_448_, v___x_447_);
return v___x_470_;
}
}
}
else
{
lean_object* v_as_471_; lean_object* v___x_472_; 
v_as_471_ = lean_array_push(v_as_448_, v___x_447_);
v___x_472_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_451_, v_as_471_, v___x_450_);
return v___x_472_;
}
}
else
{
lean_object* v___x_473_; 
v___x_473_ = lean_array_push(v_as_448_, v___x_447_);
return v___x_473_;
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___boxed(lean_object* v___x_474_, lean_object* v_as_475_, lean_object* v_k_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1(v___x_474_, v_as_475_, v_k_476_);
lean_dec_ref(v_k_476_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3___lam__0(lean_object* v_x_478_, lean_object* v_keys_479_, lean_object* v_v_480_, lean_object* v_k_481_, lean_object* v_x_482_){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v_c_485_; lean_object* v___x_486_; 
v___x_483_ = lean_unsigned_to_nat(1u);
v___x_484_ = lean_nat_add(v_x_478_, v___x_483_);
v_c_485_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_479_, v_v_480_, v___x_484_);
lean_dec(v___x_484_);
v___x_486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_486_, 0, v_k_481_);
lean_ctor_set(v___x_486_, 1, v_c_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3___lam__0___boxed(lean_object* v_x_487_, lean_object* v_keys_488_, lean_object* v_v_489_, lean_object* v_k_490_, lean_object* v_x_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3___lam__0(v_x_487_, v_keys_488_, v_v_489_, v_k_490_, v_x_491_);
lean_dec_ref(v_keys_488_);
lean_dec(v_x_487_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3_spec__10___redArg(lean_object* v_x_497_, lean_object* v_keys_498_, lean_object* v_v_499_, lean_object* v_k_500_, lean_object* v_as_501_, lean_object* v_k_502_, lean_object* v_x_503_, lean_object* v_x_504_){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v_mid_507_; lean_object* v_midVal_508_; uint8_t v___x_509_; 
v___x_505_ = lean_nat_add(v_x_503_, v_x_504_);
v___x_506_ = lean_unsigned_to_nat(1u);
v_mid_507_ = lean_nat_shiftr(v___x_505_, v___x_506_);
lean_dec(v___x_505_);
v_midVal_508_ = lean_array_fget(v_as_501_, v_mid_507_);
v___x_509_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___lam__0(v_midVal_508_, v_k_502_);
if (v___x_509_ == 0)
{
uint8_t v___x_510_; 
lean_dec(v_x_504_);
v___x_510_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___lam__0(v_k_502_, v_midVal_508_);
if (v___x_510_ == 0)
{
lean_object* v___x_511_; uint8_t v___x_512_; 
lean_dec(v_x_503_);
v___x_511_ = lean_array_get_size(v_as_501_);
v___x_512_ = lean_nat_dec_lt(v_mid_507_, v___x_511_);
if (v___x_512_ == 0)
{
lean_dec(v_midVal_508_);
lean_dec(v_mid_507_);
lean_dec(v_k_500_);
lean_dec_ref(v_v_499_);
return v_as_501_;
}
else
{
lean_object* v_snd_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_525_; 
v_snd_513_ = lean_ctor_get(v_midVal_508_, 1);
v_isSharedCheck_525_ = !lean_is_exclusive(v_midVal_508_);
if (v_isSharedCheck_525_ == 0)
{
lean_object* v_unused_526_; 
v_unused_526_ = lean_ctor_get(v_midVal_508_, 0);
lean_dec(v_unused_526_);
v___x_515_ = v_midVal_508_;
v_isShared_516_ = v_isSharedCheck_525_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_snd_513_);
lean_dec(v_midVal_508_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_525_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_517_; lean_object* v_xs_x27_518_; lean_object* v___x_519_; lean_object* v_c_520_; lean_object* v___x_522_; 
v___x_517_ = lean_box(0);
v_xs_x27_518_ = lean_array_fset(v_as_501_, v_mid_507_, v___x_517_);
v___x_519_ = lean_nat_add(v_x_497_, v___x_506_);
v_c_520_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0(v_keys_498_, v_v_499_, v___x_519_, v_snd_513_);
lean_dec(v___x_519_);
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 1, v_c_520_);
lean_ctor_set(v___x_515_, 0, v_k_500_);
v___x_522_ = v___x_515_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_k_500_);
lean_ctor_set(v_reuseFailAlloc_524_, 1, v_c_520_);
v___x_522_ = v_reuseFailAlloc_524_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
lean_object* v___x_523_; 
v___x_523_ = lean_array_fset(v_xs_x27_518_, v_mid_507_, v___x_522_);
lean_dec(v_mid_507_);
return v___x_523_;
}
}
}
}
else
{
lean_dec(v_midVal_508_);
v_x_504_ = v_mid_507_;
goto _start;
}
}
else
{
uint8_t v___x_528_; 
lean_dec(v_midVal_508_);
v___x_528_ = lean_nat_dec_eq(v_mid_507_, v_x_503_);
if (v___x_528_ == 0)
{
lean_dec(v_x_503_);
v_x_503_ = v_mid_507_;
goto _start;
}
else
{
lean_object* v___x_530_; lean_object* v_c_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v_j_534_; lean_object* v_as_535_; lean_object* v___x_536_; 
lean_dec(v_mid_507_);
lean_dec(v_x_504_);
v___x_530_ = lean_nat_add(v_x_497_, v___x_506_);
v_c_531_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_498_, v_v_499_, v___x_530_);
lean_dec(v___x_530_);
v___x_532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_532_, 0, v_k_500_);
lean_ctor_set(v___x_532_, 1, v_c_531_);
v___x_533_ = lean_nat_add(v_x_503_, v___x_506_);
lean_dec(v_x_503_);
v_j_534_ = lean_array_get_size(v_as_501_);
v_as_535_ = lean_array_push(v_as_501_, v___x_532_);
v___x_536_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_533_, v_as_535_, v_j_534_);
lean_dec(v___x_533_);
return v___x_536_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3(lean_object* v_x_537_, lean_object* v_keys_538_, lean_object* v_v_539_, lean_object* v_k_540_, lean_object* v_as_541_, lean_object* v_k_542_){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; uint8_t v___x_545_; 
v___x_543_ = lean_array_get_size(v_as_541_);
v___x_544_ = lean_unsigned_to_nat(0u);
v___x_545_ = lean_nat_dec_eq(v___x_543_, v___x_544_);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; uint8_t v___x_547_; 
v___x_546_ = lean_array_fget_borrowed(v_as_541_, v___x_544_);
v___x_547_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___lam__0(v_k_542_, v___x_546_);
if (v___x_547_ == 0)
{
uint8_t v___x_548_; 
v___x_548_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___lam__0(v___x_546_, v_k_542_);
if (v___x_548_ == 0)
{
uint8_t v___x_549_; 
v___x_549_ = lean_nat_dec_lt(v___x_544_, v___x_543_);
if (v___x_549_ == 0)
{
lean_dec(v_k_540_);
lean_dec_ref(v_v_539_);
return v_as_541_;
}
else
{
lean_object* v___x_550_; lean_object* v_xs_x27_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
lean_inc(v___x_546_);
v___x_550_ = lean_box(0);
v_xs_x27_551_ = lean_array_fset(v_as_541_, v___x_544_, v___x_550_);
v___x_552_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3___lam__2(v_x_537_, v_keys_538_, v_v_539_, v_k_540_, v___x_546_);
v___x_553_ = lean_array_fset(v_xs_x27_551_, v___x_544_, v___x_552_);
return v___x_553_;
}
}
else
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; uint8_t v___x_557_; 
v___x_554_ = lean_unsigned_to_nat(1u);
v___x_555_ = lean_nat_sub(v___x_543_, v___x_554_);
v___x_556_ = lean_array_fget_borrowed(v_as_541_, v___x_555_);
v___x_557_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___lam__0(v___x_556_, v_k_542_);
if (v___x_557_ == 0)
{
uint8_t v___x_558_; 
v___x_558_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1___lam__0(v_k_542_, v___x_556_);
if (v___x_558_ == 0)
{
uint8_t v___x_559_; 
v___x_559_ = lean_nat_dec_lt(v___x_555_, v___x_543_);
if (v___x_559_ == 0)
{
lean_dec(v___x_555_);
lean_dec(v_k_540_);
lean_dec_ref(v_v_539_);
return v_as_541_;
}
else
{
lean_object* v___x_560_; lean_object* v_xs_x27_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
lean_inc(v___x_556_);
v___x_560_ = lean_box(0);
v_xs_x27_561_ = lean_array_fset(v_as_541_, v___x_555_, v___x_560_);
v___x_562_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3___lam__2(v_x_537_, v_keys_538_, v_v_539_, v_k_540_, v___x_556_);
v___x_563_ = lean_array_fset(v_xs_x27_561_, v___x_555_, v___x_562_);
lean_dec(v___x_555_);
return v___x_563_;
}
}
else
{
lean_object* v___x_564_; 
v___x_564_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3_spec__10___redArg(v_x_537_, v_keys_538_, v_v_539_, v_k_540_, v_as_541_, v_k_542_, v___x_544_, v___x_555_);
return v___x_564_;
}
}
else
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
lean_dec(v___x_555_);
v___x_565_ = lean_box(0);
v___x_566_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3___lam__0(v_x_537_, v_keys_538_, v_v_539_, v_k_540_, v___x_565_);
v___x_567_ = lean_array_push(v_as_541_, v___x_566_);
return v___x_567_;
}
}
}
else
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v_as_570_; lean_object* v___x_571_; 
v___x_568_ = lean_box(0);
v___x_569_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3___lam__0(v_x_537_, v_keys_538_, v_v_539_, v_k_540_, v___x_568_);
v_as_570_ = lean_array_push(v_as_541_, v___x_569_);
v___x_571_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_544_, v_as_570_, v___x_543_);
return v___x_571_;
}
}
else
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_572_ = lean_box(0);
v___x_573_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3___lam__0(v_x_537_, v_keys_538_, v_v_539_, v_k_540_, v___x_572_);
v___x_574_ = lean_array_push(v_as_541_, v___x_573_);
return v___x_574_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0(lean_object* v_keys_575_, lean_object* v_v_576_, lean_object* v_x_577_, lean_object* v_x_578_){
_start:
{
if (lean_obj_tag(v_x_578_) == 0)
{
lean_object* v_key_579_; lean_object* v_child_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_614_; 
v_key_579_ = lean_ctor_get(v_x_578_, 0);
v_child_580_ = lean_ctor_get(v_x_578_, 1);
v_isSharedCheck_614_ = !lean_is_exclusive(v_x_578_);
if (v_isSharedCheck_614_ == 0)
{
v___x_582_ = v_x_578_;
v_isShared_583_ = v_isSharedCheck_614_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_child_580_);
lean_inc(v_key_579_);
lean_dec(v_x_578_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_614_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_584_; uint8_t v___x_585_; 
v___x_584_ = lean_array_get_size(v_keys_575_);
v___x_585_ = lean_nat_dec_lt(v_x_577_, v___x_584_);
if (v___x_585_ == 0)
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_592_; 
v___x_586_ = lean_unsigned_to_nat(1u);
v___x_587_ = lean_mk_empty_array_with_capacity(v___x_586_);
lean_inc_ref(v___x_587_);
v___x_588_ = lean_array_push(v___x_587_, v_v_576_);
v___x_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_589_, 0, v_key_579_);
lean_ctor_set(v___x_589_, 1, v_child_580_);
v___x_590_ = lean_array_push(v___x_587_, v___x_589_);
if (v_isShared_583_ == 0)
{
lean_ctor_set_tag(v___x_582_, 1);
lean_ctor_set(v___x_582_, 1, v___x_590_);
lean_ctor_set(v___x_582_, 0, v___x_588_);
v___x_592_ = v___x_582_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v___x_588_);
lean_ctor_set(v_reuseFailAlloc_593_, 1, v___x_590_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
else
{
lean_object* v___x_594_; uint8_t v___x_595_; 
v___x_594_ = lean_array_fget_borrowed(v_keys_575_, v_x_577_);
v___x_595_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v___x_594_, v_key_579_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_606_; 
v___x_596_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0___closed__0));
v___x_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_597_, 0, v_key_579_);
lean_ctor_set(v___x_597_, 1, v_child_580_);
v___x_598_ = lean_unsigned_to_nat(1u);
v___x_599_ = lean_mk_empty_array_with_capacity(v___x_598_);
v___x_600_ = lean_array_push(v___x_599_, v___x_597_);
v___x_601_ = lean_nat_add(v_x_577_, v___x_598_);
v___x_602_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_575_, v_v_576_, v___x_601_);
lean_dec(v___x_601_);
lean_inc(v___x_594_);
v___x_603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_603_, 0, v___x_594_);
lean_ctor_set(v___x_603_, 1, v___x_602_);
lean_inc_ref(v___x_603_);
v___x_604_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1(v___x_603_, v___x_600_, v___x_603_);
lean_dec_ref_known(v___x_603_, 2);
if (v_isShared_583_ == 0)
{
lean_ctor_set_tag(v___x_582_, 1);
lean_ctor_set(v___x_582_, 1, v___x_604_);
lean_ctor_set(v___x_582_, 0, v___x_596_);
v___x_606_ = v___x_582_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_596_);
lean_ctor_set(v_reuseFailAlloc_607_, 1, v___x_604_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
else
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_612_; 
v___x_608_ = lean_unsigned_to_nat(1u);
v___x_609_ = lean_nat_add(v_x_577_, v___x_608_);
v___x_610_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0(v_keys_575_, v_v_576_, v___x_609_, v_child_580_);
lean_dec(v___x_609_);
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 1, v___x_610_);
v___x_612_ = v___x_582_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_key_579_);
lean_ctor_set(v_reuseFailAlloc_613_, 1, v___x_610_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
}
}
else
{
lean_object* v_vs_615_; lean_object* v_children_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_633_; 
v_vs_615_ = lean_ctor_get(v_x_578_, 0);
v_children_616_ = lean_ctor_get(v_x_578_, 1);
v_isSharedCheck_633_ = !lean_is_exclusive(v_x_578_);
if (v_isSharedCheck_633_ == 0)
{
v___x_618_ = v_x_578_;
v_isShared_619_ = v_isSharedCheck_633_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_children_616_);
lean_inc(v_vs_615_);
lean_dec(v_x_578_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_633_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_620_; uint8_t v___x_621_; 
v___x_620_ = lean_array_get_size(v_keys_575_);
v___x_621_ = lean_nat_dec_lt(v_x_577_, v___x_620_);
if (v___x_621_ == 0)
{
lean_object* v___x_622_; lean_object* v___x_624_; 
v___x_622_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__2(v_vs_615_, v_v_576_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 0, v___x_622_);
v___x_624_ = v___x_618_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v___x_622_);
lean_ctor_set(v_reuseFailAlloc_625_, 1, v_children_616_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
else
{
lean_object* v_k_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v_c_629_; lean_object* v___x_631_; 
v_k_626_ = lean_array_fget_borrowed(v_keys_575_, v_x_577_);
v___x_627_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0___closed__1));
lean_inc_n(v_k_626_, 2);
v___x_628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_628_, 0, v_k_626_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
v_c_629_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3(v_x_577_, v_keys_575_, v_v_576_, v_k_626_, v_children_616_, v___x_628_);
lean_dec_ref_known(v___x_628_, 2);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 1, v_c_629_);
v___x_631_ = v___x_618_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_vs_615_);
lean_ctor_set(v_reuseFailAlloc_632_, 1, v_c_629_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3___lam__2(lean_object* v_x_634_, lean_object* v_keys_635_, lean_object* v_v_636_, lean_object* v_k_637_, lean_object* v_x_638_){
_start:
{
lean_object* v_snd_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_649_; 
v_snd_639_ = lean_ctor_get(v_x_638_, 1);
v_isSharedCheck_649_ = !lean_is_exclusive(v_x_638_);
if (v_isSharedCheck_649_ == 0)
{
lean_object* v_unused_650_; 
v_unused_650_ = lean_ctor_get(v_x_638_, 0);
lean_dec(v_unused_650_);
v___x_641_ = v_x_638_;
v_isShared_642_ = v_isSharedCheck_649_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_snd_639_);
lean_dec(v_x_638_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_649_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v_c_645_; lean_object* v___x_647_; 
v___x_643_ = lean_unsigned_to_nat(1u);
v___x_644_ = lean_nat_add(v_x_634_, v___x_643_);
v_c_645_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0(v_keys_635_, v_v_636_, v___x_644_, v_snd_639_);
lean_dec(v___x_644_);
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 1, v_c_645_);
lean_ctor_set(v___x_641_, 0, v_k_637_);
v___x_647_ = v___x_641_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_k_637_);
lean_ctor_set(v_reuseFailAlloc_648_, 1, v_c_645_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3___lam__2___boxed(lean_object* v_x_651_, lean_object* v_keys_652_, lean_object* v_v_653_, lean_object* v_k_654_, lean_object* v_x_655_){
_start:
{
lean_object* v_res_656_; 
v_res_656_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3___lam__2(v_x_651_, v_keys_652_, v_v_653_, v_k_654_, v_x_655_);
lean_dec_ref(v_keys_652_);
lean_dec(v_x_651_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3_spec__10___redArg___boxed(lean_object* v_x_657_, lean_object* v_keys_658_, lean_object* v_v_659_, lean_object* v_k_660_, lean_object* v_as_661_, lean_object* v_k_662_, lean_object* v_x_663_, lean_object* v_x_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3_spec__10___redArg(v_x_657_, v_keys_658_, v_v_659_, v_k_660_, v_as_661_, v_k_662_, v_x_663_, v_x_664_);
lean_dec_ref(v_k_662_);
lean_dec_ref(v_keys_658_);
lean_dec(v_x_657_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0___boxed(lean_object* v_keys_666_, lean_object* v_v_667_, lean_object* v_x_668_, lean_object* v_x_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0(v_keys_666_, v_v_667_, v_x_668_, v_x_669_);
lean_dec(v_x_668_);
lean_dec_ref(v_keys_666_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3___boxed(lean_object* v_x_671_, lean_object* v_keys_672_, lean_object* v_v_673_, lean_object* v_k_674_, lean_object* v_as_675_, lean_object* v_k_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3(v_x_671_, v_keys_672_, v_v_673_, v_k_674_, v_as_675_, v_k_676_);
lean_dec_ref(v_k_676_);
lean_dec_ref(v_keys_672_);
lean_dec(v_x_671_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1___lam__0(lean_object* v_keys_678_, lean_object* v_v_679_, lean_object* v_x_680_){
_start:
{
if (lean_obj_tag(v_x_680_) == 0)
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_681_ = lean_unsigned_to_nat(1u);
v___x_682_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_678_, v_v_679_, v___x_681_);
v___x_683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_683_, 0, v___x_682_);
return v___x_683_;
}
else
{
lean_object* v_val_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_693_; 
v_val_684_ = lean_ctor_get(v_x_680_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v_x_680_);
if (v_isSharedCheck_693_ == 0)
{
v___x_686_ = v_x_680_;
v_isShared_687_ = v_isSharedCheck_693_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_val_684_);
lean_dec(v_x_680_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_693_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_691_; 
v___x_688_ = lean_unsigned_to_nat(1u);
v___x_689_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0(v_keys_678_, v_v_679_, v___x_688_, v_val_684_);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 0, v___x_689_);
v___x_691_ = v___x_686_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v___x_689_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1___lam__0___boxed(lean_object* v_keys_694_, lean_object* v_v_695_, lean_object* v_x_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1___lam__0(v_keys_694_, v_v_695_, v_x_696_);
lean_dec_ref(v_keys_694_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__5_spec__13(lean_object* v_xs_698_, lean_object* v_v_699_, lean_object* v_i_700_){
_start:
{
lean_object* v___x_701_; uint8_t v___x_702_; 
v___x_701_ = lean_array_get_size(v_xs_698_);
v___x_702_ = lean_nat_dec_lt(v_i_700_, v___x_701_);
if (v___x_702_ == 0)
{
lean_object* v___x_703_; 
lean_dec(v_i_700_);
v___x_703_ = lean_box(0);
return v___x_703_;
}
else
{
lean_object* v___x_704_; uint8_t v___x_705_; 
v___x_704_ = lean_array_fget_borrowed(v_xs_698_, v_i_700_);
v___x_705_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v___x_704_, v_v_699_);
if (v___x_705_ == 0)
{
lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_706_ = lean_unsigned_to_nat(1u);
v___x_707_ = lean_nat_add(v_i_700_, v___x_706_);
lean_dec(v_i_700_);
v_i_700_ = v___x_707_;
goto _start;
}
else
{
lean_object* v___x_709_; 
v___x_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_709_, 0, v_i_700_);
return v___x_709_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__5_spec__13___boxed(lean_object* v_xs_710_, lean_object* v_v_711_, lean_object* v_i_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__5_spec__13(v_xs_710_, v_v_711_, v_i_712_);
lean_dec(v_v_711_);
lean_dec_ref(v_xs_710_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__5(lean_object* v_xs_714_, lean_object* v_v_715_){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_716_ = lean_unsigned_to_nat(0u);
v___x_717_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__5_spec__13(v_xs_714_, v_v_715_, v___x_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__5___boxed(lean_object* v_xs_718_, lean_object* v_v_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__5(v_xs_718_, v_v_719_);
lean_dec(v_v_719_);
lean_dec_ref(v_xs_718_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1(lean_object* v_keys_721_, lean_object* v_v_722_, lean_object* v_x_723_, size_t v_x_724_, size_t v_x_725_, lean_object* v_x_726_){
_start:
{
if (lean_obj_tag(v_x_723_) == 0)
{
lean_object* v_es_727_; size_t v___x_728_; size_t v___x_729_; lean_object* v_j_730_; lean_object* v___x_731_; uint8_t v___x_732_; 
v_es_727_ = lean_ctor_get(v_x_723_, 0);
v___x_728_ = ((size_t)31ULL);
v___x_729_ = lean_usize_land(v_x_724_, v___x_728_);
v_j_730_ = lean_usize_to_nat(v___x_729_);
v___x_731_ = lean_array_get_size(v_es_727_);
v___x_732_ = lean_nat_dec_lt(v_j_730_, v___x_731_);
if (v___x_732_ == 0)
{
lean_dec(v_j_730_);
lean_dec(v_x_726_);
lean_dec_ref(v_v_722_);
return v_x_723_;
}
else
{
lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_800_; 
lean_inc_ref(v_es_727_);
v_isSharedCheck_800_ = !lean_is_exclusive(v_x_723_);
if (v_isSharedCheck_800_ == 0)
{
lean_object* v_unused_801_; 
v_unused_801_ = lean_ctor_get(v_x_723_, 0);
lean_dec(v_unused_801_);
v___x_734_ = v_x_723_;
v_isShared_735_ = v_isSharedCheck_800_;
goto v_resetjp_733_;
}
else
{
lean_dec(v_x_723_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_800_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v_v_736_; lean_object* v___x_737_; lean_object* v_xs_x27_738_; lean_object* v___y_740_; 
v_v_736_ = lean_array_fget(v_es_727_, v_j_730_);
v___x_737_ = lean_box(0);
v_xs_x27_738_ = lean_array_fset(v_es_727_, v_j_730_, v___x_737_);
switch(lean_obj_tag(v_v_736_))
{
case 0:
{
lean_object* v_key_745_; lean_object* v_val_746_; uint8_t v___x_747_; 
v_key_745_ = lean_ctor_get(v_v_736_, 0);
v_val_746_ = lean_ctor_get(v_v_736_, 1);
v___x_747_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_726_, v_key_745_);
if (v___x_747_ == 0)
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = lean_box(0);
v___x_749_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1___lam__0(v_keys_721_, v_v_722_, v___x_748_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_dec(v_x_726_);
v___y_740_ = v_v_736_;
goto v___jp_739_;
}
else
{
lean_object* v_val_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_758_; 
lean_inc(v_val_746_);
lean_inc(v_key_745_);
lean_dec_ref_known(v_v_736_, 2);
v_val_750_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_758_ == 0)
{
v___x_752_ = v___x_749_;
v_isShared_753_ = v_isSharedCheck_758_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_val_750_);
lean_dec(v___x_749_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_758_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_754_; lean_object* v___x_756_; 
v___x_754_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_745_, v_val_746_, v_x_726_, v_val_750_);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 0, v___x_754_);
v___x_756_ = v___x_752_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v___x_754_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
v___y_740_ = v___x_756_;
goto v___jp_739_;
}
}
}
}
else
{
lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_769_; 
lean_inc(v_val_746_);
v_isSharedCheck_769_ = !lean_is_exclusive(v_v_736_);
if (v_isSharedCheck_769_ == 0)
{
lean_object* v_unused_770_; lean_object* v_unused_771_; 
v_unused_770_ = lean_ctor_get(v_v_736_, 1);
lean_dec(v_unused_770_);
v_unused_771_ = lean_ctor_get(v_v_736_, 0);
lean_dec(v_unused_771_);
v___x_760_ = v_v_736_;
v_isShared_761_ = v_isSharedCheck_769_;
goto v_resetjp_759_;
}
else
{
lean_dec(v_v_736_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_769_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_762_, 0, v_val_746_);
v___x_763_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1___lam__0(v_keys_721_, v_v_722_, v___x_762_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_object* v___x_764_; 
lean_del_object(v___x_760_);
lean_dec(v_x_726_);
v___x_764_ = lean_box(2);
v___y_740_ = v___x_764_;
goto v___jp_739_;
}
else
{
lean_object* v_val_765_; lean_object* v___x_767_; 
v_val_765_ = lean_ctor_get(v___x_763_, 0);
lean_inc(v_val_765_);
lean_dec_ref_known(v___x_763_, 1);
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 1, v_val_765_);
lean_ctor_set(v___x_760_, 0, v_x_726_);
v___x_767_ = v___x_760_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_x_726_);
lean_ctor_set(v_reuseFailAlloc_768_, 1, v_val_765_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
v___y_740_ = v___x_767_;
goto v___jp_739_;
}
}
}
}
}
case 1:
{
lean_object* v_node_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_795_; 
v_node_772_ = lean_ctor_get(v_v_736_, 0);
v_isSharedCheck_795_ = !lean_is_exclusive(v_v_736_);
if (v_isSharedCheck_795_ == 0)
{
v___x_774_ = v_v_736_;
v_isShared_775_ = v_isSharedCheck_795_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_node_772_);
lean_dec(v_v_736_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_795_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
size_t v___x_776_; size_t v___x_777_; size_t v___x_778_; size_t v___x_779_; lean_object* v_newNode_780_; lean_object* v___x_781_; 
v___x_776_ = ((size_t)5ULL);
v___x_777_ = lean_usize_shift_right(v_x_724_, v___x_776_);
v___x_778_ = ((size_t)1ULL);
v___x_779_ = lean_usize_add(v_x_725_, v___x_778_);
v_newNode_780_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1(v_keys_721_, v_v_722_, v_node_772_, v___x_777_, v___x_779_, v_x_726_);
lean_inc_ref(v_newNode_780_);
v___x_781_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_780_);
if (lean_obj_tag(v___x_781_) == 0)
{
lean_object* v___x_783_; 
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 0, v_newNode_780_);
v___x_783_ = v___x_774_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_newNode_780_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
v___y_740_ = v___x_783_;
goto v___jp_739_;
}
}
else
{
lean_object* v_val_785_; lean_object* v_fst_786_; lean_object* v_snd_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_794_; 
lean_dec_ref(v_newNode_780_);
lean_del_object(v___x_774_);
v_val_785_ = lean_ctor_get(v___x_781_, 0);
lean_inc(v_val_785_);
lean_dec_ref_known(v___x_781_, 1);
v_fst_786_ = lean_ctor_get(v_val_785_, 0);
v_snd_787_ = lean_ctor_get(v_val_785_, 1);
v_isSharedCheck_794_ = !lean_is_exclusive(v_val_785_);
if (v_isSharedCheck_794_ == 0)
{
v___x_789_ = v_val_785_;
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_snd_787_);
lean_inc(v_fst_786_);
lean_dec(v_val_785_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_792_; 
if (v_isShared_790_ == 0)
{
v___x_792_ = v___x_789_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_fst_786_);
lean_ctor_set(v_reuseFailAlloc_793_, 1, v_snd_787_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
v___y_740_ = v___x_792_;
goto v___jp_739_;
}
}
}
}
}
default: 
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = lean_box(0);
v___x_797_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1___lam__0(v_keys_721_, v_v_722_, v___x_796_);
if (lean_obj_tag(v___x_797_) == 0)
{
lean_dec(v_x_726_);
v___y_740_ = v_v_736_;
goto v___jp_739_;
}
else
{
lean_object* v_val_798_; lean_object* v___x_799_; 
v_val_798_ = lean_ctor_get(v___x_797_, 0);
lean_inc(v_val_798_);
lean_dec_ref_known(v___x_797_, 1);
v___x_799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_799_, 0, v_x_726_);
lean_ctor_set(v___x_799_, 1, v_val_798_);
v___y_740_ = v___x_799_;
goto v___jp_739_;
}
}
}
v___jp_739_:
{
lean_object* v___x_741_; lean_object* v___x_743_; 
v___x_741_ = lean_array_fset(v_xs_x27_738_, v_j_730_, v___y_740_);
lean_dec(v_j_730_);
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 0, v___x_741_);
v___x_743_ = v___x_734_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___x_741_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
}
}
else
{
lean_object* v_ks_802_; lean_object* v_vs_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_836_; 
v_ks_802_ = lean_ctor_get(v_x_723_, 0);
v_vs_803_ = lean_ctor_get(v_x_723_, 1);
v_isSharedCheck_836_ = !lean_is_exclusive(v_x_723_);
if (v_isSharedCheck_836_ == 0)
{
v___x_805_ = v_x_723_;
v_isShared_806_ = v_isSharedCheck_836_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_vs_803_);
lean_inc(v_ks_802_);
lean_dec(v_x_723_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_836_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v___x_807_; 
v___x_807_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__5(v_ks_802_, v_x_726_);
if (lean_obj_tag(v___x_807_) == 0)
{
lean_object* v___x_809_; 
if (v_isShared_806_ == 0)
{
v___x_809_ = v___x_805_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_ks_802_);
lean_ctor_set(v_reuseFailAlloc_814_, 1, v_vs_803_);
v___x_809_ = v_reuseFailAlloc_814_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_810_ = lean_box(0);
v___x_811_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1___lam__0(v_keys_721_, v_v_722_, v___x_810_);
if (lean_obj_tag(v___x_811_) == 0)
{
lean_dec(v_x_726_);
return v___x_809_;
}
else
{
lean_object* v_val_812_; lean_object* v___x_813_; 
v_val_812_ = lean_ctor_get(v___x_811_, 0);
lean_inc(v_val_812_);
lean_dec_ref_known(v___x_811_, 1);
v___x_813_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___redArg(v___x_809_, v_x_724_, v_x_725_, v_x_726_, v_val_812_);
return v___x_813_;
}
}
}
else
{
lean_object* v_val_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_835_; 
v_val_815_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_835_ == 0)
{
v___x_817_ = v___x_807_;
v_isShared_818_ = v_isSharedCheck_835_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_val_815_);
lean_dec(v___x_807_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_835_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v_v_x27_819_; lean_object* v_keys_820_; lean_object* v_vals_821_; lean_object* v___x_823_; 
v_v_x27_819_ = lean_array_fget(v_vs_803_, v_val_815_);
lean_inc(v_val_815_);
v_keys_820_ = l_Array_eraseIdx___redArg(v_ks_802_, v_val_815_);
v_vals_821_ = l_Array_eraseIdx___redArg(v_vs_803_, v_val_815_);
if (v_isShared_818_ == 0)
{
lean_ctor_set(v___x_817_, 0, v_v_x27_819_);
v___x_823_ = v___x_817_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_v_x27_819_);
v___x_823_ = v_reuseFailAlloc_834_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
lean_object* v___x_824_; 
v___x_824_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1___lam__0(v_keys_721_, v_v_722_, v___x_823_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v___x_826_; 
lean_dec(v_x_726_);
if (v_isShared_806_ == 0)
{
lean_ctor_set(v___x_805_, 1, v_vals_821_);
lean_ctor_set(v___x_805_, 0, v_keys_820_);
v___x_826_ = v___x_805_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v_keys_820_);
lean_ctor_set(v_reuseFailAlloc_827_, 1, v_vals_821_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
else
{
lean_object* v_val_828_; lean_object* v_keys_829_; lean_object* v_vals_830_; lean_object* v___x_832_; 
v_val_828_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_val_828_);
lean_dec_ref_known(v___x_824_, 1);
v_keys_829_ = lean_array_push(v_keys_820_, v_x_726_);
v_vals_830_ = lean_array_push(v_vals_821_, v_val_828_);
if (v_isShared_806_ == 0)
{
lean_ctor_set(v___x_805_, 1, v_vals_830_);
lean_ctor_set(v___x_805_, 0, v_keys_829_);
v___x_832_ = v___x_805_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_keys_829_);
lean_ctor_set(v_reuseFailAlloc_833_, 1, v_vals_830_);
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
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1___boxed(lean_object* v_keys_837_, lean_object* v_v_838_, lean_object* v_x_839_, lean_object* v_x_840_, lean_object* v_x_841_, lean_object* v_x_842_){
_start:
{
size_t v_x_3952__boxed_843_; size_t v_x_3953__boxed_844_; lean_object* v_res_845_; 
v_x_3952__boxed_843_ = lean_unbox_usize(v_x_840_);
lean_dec(v_x_840_);
v_x_3953__boxed_844_ = lean_unbox_usize(v_x_841_);
lean_dec(v_x_841_);
v_res_845_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1(v_keys_837_, v_v_838_, v_x_839_, v_x_3952__boxed_843_, v_x_3953__boxed_844_, v_x_842_);
lean_dec_ref(v_keys_837_);
return v_res_845_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_846_; 
v___x_846_ = l_Lean_Meta_DiscrTree_instInhabited___redArg();
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__2(lean_object* v_msg_847_){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_848_ = lean_obj_once(&l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__2___closed__0, &l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__2___closed__0_once, _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__2___closed__0);
v___x_849_ = lean_panic_fn_borrowed(v___x_848_, v_msg_847_);
return v___x_849_;
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___closed__3(void){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_853_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___closed__2));
v___x_854_ = lean_unsigned_to_nat(23u);
v___x_855_ = lean_unsigned_to_nat(179u);
v___x_856_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___closed__1));
v___x_857_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___closed__0));
v___x_858_ = l_mkPanicMessageWithDecl(v___x_857_, v___x_856_, v___x_855_, v___x_854_, v___x_853_);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0(lean_object* v_d_859_, lean_object* v_keys_860_, lean_object* v_v_861_){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; uint8_t v___x_864_; 
v___x_862_ = lean_array_get_size(v_keys_860_);
v___x_863_ = lean_unsigned_to_nat(0u);
v___x_864_ = lean_nat_dec_eq(v___x_862_, v___x_863_);
if (v___x_864_ == 0)
{
lean_object* v___x_865_; lean_object* v_k_866_; uint64_t v___x_867_; size_t v_h_868_; size_t v___x_869_; lean_object* v___x_870_; 
v___x_865_ = lean_box(0);
v_k_866_ = lean_array_get_borrowed(v___x_865_, v_keys_860_, v___x_863_);
v___x_867_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_866_);
v_h_868_ = lean_uint64_to_usize(v___x_867_);
v___x_869_ = ((size_t)1ULL);
lean_inc(v_k_866_);
v___x_870_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1(v_keys_860_, v_v_861_, v_d_859_, v_h_868_, v___x_869_, v_k_866_);
return v___x_870_;
}
else
{
lean_object* v___x_871_; lean_object* v___x_872_; 
lean_dec_ref(v_v_861_);
lean_dec_ref(v_d_859_);
v___x_871_ = lean_obj_once(&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___closed__3, &l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___closed__3_once, _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___closed__3);
v___x_872_ = l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__2(v___x_871_);
return v___x_872_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0___boxed(lean_object* v_d_873_, lean_object* v_keys_874_, lean_object* v_v_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0(v_d_873_, v_keys_874_, v_v_875_);
lean_dec_ref(v_keys_874_);
return v_res_876_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__1___redArg(lean_object* v_xs_877_, lean_object* v_ys_878_, lean_object* v_x_879_){
_start:
{
lean_object* v_zero_880_; uint8_t v_isZero_881_; 
v_zero_880_ = lean_unsigned_to_nat(0u);
v_isZero_881_ = lean_nat_dec_eq(v_x_879_, v_zero_880_);
if (v_isZero_881_ == 1)
{
lean_dec(v_x_879_);
return v_isZero_881_;
}
else
{
lean_object* v_one_882_; lean_object* v_n_883_; lean_object* v___x_884_; lean_object* v___x_885_; uint8_t v___x_886_; 
v_one_882_ = lean_unsigned_to_nat(1u);
v_n_883_ = lean_nat_sub(v_x_879_, v_one_882_);
lean_dec(v_x_879_);
v___x_884_ = lean_array_fget_borrowed(v_xs_877_, v_n_883_);
v___x_885_ = lean_array_fget_borrowed(v_ys_878_, v_n_883_);
v___x_886_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v___x_884_, v___x_885_);
if (v___x_886_ == 0)
{
lean_dec(v_n_883_);
return v___x_886_;
}
else
{
v_x_879_ = v_n_883_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__1___redArg___boxed(lean_object* v_xs_888_, lean_object* v_ys_889_, lean_object* v_x_890_){
_start:
{
uint8_t v_res_891_; lean_object* v_r_892_; 
v_res_891_ = l_Array_isEqvAux___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__1___redArg(v_xs_888_, v_ys_889_, v_x_890_);
lean_dec_ref(v_ys_889_);
lean_dec_ref(v_xs_888_);
v_r_892_ = lean_box(v_res_891_);
return v_r_892_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__5(void){
_start:
{
lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_908_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__4));
v___x_909_ = lean_array_get_size(v___x_908_);
return v___x_909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0(lean_object* v_keys_919_, lean_object* v_entry_920_, lean_object* v_tree_921_){
_start:
{
lean_object* v_tree_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; uint8_t v___x_926_; 
lean_inc_ref(v_entry_920_);
v_tree_922_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0(v_tree_921_, v_keys_919_, v_entry_920_);
v___x_923_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__4));
v___x_924_ = lean_array_get_size(v_keys_919_);
v___x_925_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__5, &l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__5_once, _init_l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__5);
v___x_926_ = lean_nat_dec_eq(v___x_924_, v___x_925_);
if (v___x_926_ == 0)
{
lean_dec_ref(v_entry_920_);
return v_tree_922_;
}
else
{
uint8_t v___x_927_; 
v___x_927_ = l_Array_isEqvAux___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__1___redArg(v_keys_919_, v___x_923_, v___x_924_);
if (v___x_927_ == 0)
{
lean_dec_ref(v_entry_920_);
return v_tree_922_;
}
else
{
lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_928_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___closed__8));
v___x_929_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0(v_tree_922_, v___x_928_, v_entry_920_);
return v___x_929_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0___boxed(lean_object* v_keys_930_, lean_object* v_entry_931_, lean_object* v_tree_932_){
_start:
{
lean_object* v_res_933_; 
v_res_933_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0(v_keys_930_, v_entry_931_, v_tree_932_);
lean_dec_ref(v_keys_930_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7_spec__15_spec__23(lean_object* v_xs_934_, lean_object* v_v_935_, lean_object* v_i_936_){
_start:
{
lean_object* v___x_937_; uint8_t v___x_938_; 
v___x_937_ = lean_array_get_size(v_xs_934_);
v___x_938_ = lean_nat_dec_lt(v_i_936_, v___x_937_);
if (v___x_938_ == 0)
{
lean_object* v___x_939_; 
lean_dec(v_i_936_);
v___x_939_ = lean_box(0);
return v___x_939_;
}
else
{
lean_object* v___x_940_; uint8_t v___x_941_; 
v___x_940_ = lean_array_fget_borrowed(v_xs_934_, v_i_936_);
v___x_941_ = lean_name_eq(v___x_940_, v_v_935_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_942_ = lean_unsigned_to_nat(1u);
v___x_943_ = lean_nat_add(v_i_936_, v___x_942_);
lean_dec(v_i_936_);
v_i_936_ = v___x_943_;
goto _start;
}
else
{
lean_object* v___x_945_; 
v___x_945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_945_, 0, v_i_936_);
return v___x_945_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7_spec__15_spec__23___boxed(lean_object* v_xs_946_, lean_object* v_v_947_, lean_object* v_i_948_){
_start:
{
lean_object* v_res_949_; 
v_res_949_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7_spec__15_spec__23(v_xs_946_, v_v_947_, v_i_948_);
lean_dec(v_v_947_);
lean_dec_ref(v_xs_946_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7_spec__15(lean_object* v_xs_950_, lean_object* v_v_951_){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_952_ = lean_unsigned_to_nat(0u);
v___x_953_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7_spec__15_spec__23(v_xs_950_, v_v_951_, v___x_952_);
return v___x_953_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7_spec__15___boxed(lean_object* v_xs_954_, lean_object* v_v_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7_spec__15(v_xs_954_, v_v_955_);
lean_dec(v_v_955_);
lean_dec_ref(v_xs_954_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7___redArg(lean_object* v_x_957_, size_t v_x_958_, lean_object* v_x_959_){
_start:
{
if (lean_obj_tag(v_x_957_) == 0)
{
lean_object* v_es_960_; lean_object* v___x_961_; size_t v___x_962_; size_t v___x_963_; lean_object* v_j_964_; lean_object* v_entry_965_; 
v_es_960_ = lean_ctor_get(v_x_957_, 0);
v___x_961_ = lean_box(2);
v___x_962_ = ((size_t)31ULL);
v___x_963_ = lean_usize_land(v_x_958_, v___x_962_);
v_j_964_ = lean_usize_to_nat(v___x_963_);
v_entry_965_ = lean_array_get(v___x_961_, v_es_960_, v_j_964_);
switch(lean_obj_tag(v_entry_965_))
{
case 0:
{
lean_object* v_key_966_; uint8_t v___x_967_; 
v_key_966_ = lean_ctor_get(v_entry_965_, 0);
lean_inc(v_key_966_);
lean_dec_ref_known(v_entry_965_, 2);
v___x_967_ = lean_name_eq(v_x_959_, v_key_966_);
lean_dec(v_key_966_);
if (v___x_967_ == 0)
{
lean_dec(v_j_964_);
return v_x_957_;
}
else
{
lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_975_; 
lean_inc_ref(v_es_960_);
v_isSharedCheck_975_ = !lean_is_exclusive(v_x_957_);
if (v_isSharedCheck_975_ == 0)
{
lean_object* v_unused_976_; 
v_unused_976_ = lean_ctor_get(v_x_957_, 0);
lean_dec(v_unused_976_);
v___x_969_ = v_x_957_;
v_isShared_970_ = v_isSharedCheck_975_;
goto v_resetjp_968_;
}
else
{
lean_dec(v_x_957_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_975_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_971_; lean_object* v___x_973_; 
v___x_971_ = lean_array_set(v_es_960_, v_j_964_, v___x_961_);
lean_dec(v_j_964_);
if (v_isShared_970_ == 0)
{
lean_ctor_set(v___x_969_, 0, v___x_971_);
v___x_973_ = v___x_969_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v___x_971_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
}
case 1:
{
lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_1011_; 
lean_inc_ref(v_es_960_);
v_isSharedCheck_1011_ = !lean_is_exclusive(v_x_957_);
if (v_isSharedCheck_1011_ == 0)
{
lean_object* v_unused_1012_; 
v_unused_1012_ = lean_ctor_get(v_x_957_, 0);
lean_dec(v_unused_1012_);
v___x_978_ = v_x_957_;
v_isShared_979_ = v_isSharedCheck_1011_;
goto v_resetjp_977_;
}
else
{
lean_dec(v_x_957_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_1011_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v_node_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_1010_; 
v_node_980_ = lean_ctor_get(v_entry_965_, 0);
v_isSharedCheck_1010_ = !lean_is_exclusive(v_entry_965_);
if (v_isSharedCheck_1010_ == 0)
{
v___x_982_ = v_entry_965_;
v_isShared_983_ = v_isSharedCheck_1010_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_node_980_);
lean_dec(v_entry_965_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_1010_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
size_t v___x_984_; lean_object* v_entries_985_; size_t v___x_986_; lean_object* v_newNode_987_; lean_object* v___x_988_; 
v___x_984_ = ((size_t)5ULL);
v_entries_985_ = lean_array_set(v_es_960_, v_j_964_, v___x_961_);
v___x_986_ = lean_usize_shift_right(v_x_958_, v___x_984_);
v_newNode_987_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7___redArg(v_node_980_, v___x_986_, v_x_959_);
lean_inc_ref(v_newNode_987_);
v___x_988_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_987_);
if (lean_obj_tag(v___x_988_) == 0)
{
lean_object* v___x_990_; 
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 0, v_newNode_987_);
v___x_990_ = v___x_982_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_newNode_987_);
v___x_990_ = v_reuseFailAlloc_995_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
lean_object* v___x_991_; lean_object* v___x_993_; 
v___x_991_ = lean_array_set(v_entries_985_, v_j_964_, v___x_990_);
lean_dec(v_j_964_);
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 0, v___x_991_);
v___x_993_ = v___x_978_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v___x_991_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
else
{
lean_object* v_val_996_; lean_object* v_fst_997_; lean_object* v_snd_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1009_; 
lean_dec_ref(v_newNode_987_);
lean_del_object(v___x_982_);
v_val_996_ = lean_ctor_get(v___x_988_, 0);
lean_inc(v_val_996_);
lean_dec_ref_known(v___x_988_, 1);
v_fst_997_ = lean_ctor_get(v_val_996_, 0);
v_snd_998_ = lean_ctor_get(v_val_996_, 1);
v_isSharedCheck_1009_ = !lean_is_exclusive(v_val_996_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1000_ = v_val_996_;
v_isShared_1001_ = v_isSharedCheck_1009_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_snd_998_);
lean_inc(v_fst_997_);
lean_dec(v_val_996_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1009_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1003_; 
if (v_isShared_1001_ == 0)
{
v___x_1003_ = v___x_1000_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_fst_997_);
lean_ctor_set(v_reuseFailAlloc_1008_, 1, v_snd_998_);
v___x_1003_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
lean_object* v___x_1004_; lean_object* v___x_1006_; 
v___x_1004_ = lean_array_set(v_entries_985_, v_j_964_, v___x_1003_);
lean_dec(v_j_964_);
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 0, v___x_1004_);
v___x_1006_ = v___x_978_;
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
}
}
}
default: 
{
lean_dec(v_j_964_);
return v_x_957_;
}
}
}
else
{
lean_object* v_ks_1013_; lean_object* v_vs_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1028_; 
v_ks_1013_ = lean_ctor_get(v_x_957_, 0);
v_vs_1014_ = lean_ctor_get(v_x_957_, 1);
v_isSharedCheck_1028_ = !lean_is_exclusive(v_x_957_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1016_ = v_x_957_;
v_isShared_1017_ = v_isSharedCheck_1028_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_vs_1014_);
lean_inc(v_ks_1013_);
lean_dec(v_x_957_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1028_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1018_; 
v___x_1018_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7_spec__15(v_ks_1013_, v_x_959_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v___x_1020_; 
if (v_isShared_1017_ == 0)
{
v___x_1020_ = v___x_1016_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_ks_1013_);
lean_ctor_set(v_reuseFailAlloc_1021_, 1, v_vs_1014_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
else
{
lean_object* v_val_1022_; lean_object* v_keys_x27_1023_; lean_object* v_vals_x27_1024_; lean_object* v___x_1026_; 
v_val_1022_ = lean_ctor_get(v___x_1018_, 0);
lean_inc_n(v_val_1022_, 2);
lean_dec_ref_known(v___x_1018_, 1);
v_keys_x27_1023_ = l_Array_eraseIdx___redArg(v_ks_1013_, v_val_1022_);
v_vals_x27_1024_ = l_Array_eraseIdx___redArg(v_vs_1014_, v_val_1022_);
if (v_isShared_1017_ == 0)
{
lean_ctor_set(v___x_1016_, 1, v_vals_x27_1024_);
lean_ctor_set(v___x_1016_, 0, v_keys_x27_1023_);
v___x_1026_ = v___x_1016_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_keys_x27_1023_);
lean_ctor_set(v_reuseFailAlloc_1027_, 1, v_vals_x27_1024_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7___redArg___boxed(lean_object* v_x_1029_, lean_object* v_x_1030_, lean_object* v_x_1031_){
_start:
{
size_t v_x_4349__boxed_1032_; lean_object* v_res_1033_; 
v_x_4349__boxed_1032_ = lean_unbox_usize(v_x_1030_);
lean_dec(v_x_1030_);
v_res_1033_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7___redArg(v_x_1029_, v_x_4349__boxed_1032_, v_x_1031_);
lean_dec(v_x_1031_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3___redArg(lean_object* v_x_1034_, lean_object* v_x_1035_){
_start:
{
uint64_t v___y_1037_; 
if (lean_obj_tag(v_x_1035_) == 0)
{
uint64_t v___x_1040_; 
v___x_1040_ = 1723ULL;
v___y_1037_ = v___x_1040_;
goto v___jp_1036_;
}
else
{
uint64_t v_hash_1041_; 
v_hash_1041_ = lean_ctor_get_uint64(v_x_1035_, sizeof(void*)*2);
v___y_1037_ = v_hash_1041_;
goto v___jp_1036_;
}
v___jp_1036_:
{
size_t v_h_1038_; lean_object* v___x_1039_; 
v_h_1038_ = lean_uint64_to_usize(v___y_1037_);
v___x_1039_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7___redArg(v_x_1034_, v_h_1038_, v_x_1035_);
return v___x_1039_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3___redArg___boxed(lean_object* v_x_1042_, lean_object* v_x_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3___redArg(v_x_1042_, v_x_1043_);
lean_dec(v_x_1043_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__11_spec__19___redArg(lean_object* v_x_1045_, lean_object* v_x_1046_, lean_object* v_x_1047_, lean_object* v_x_1048_){
_start:
{
lean_object* v_ks_1049_; lean_object* v_vs_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1074_; 
v_ks_1049_ = lean_ctor_get(v_x_1045_, 0);
v_vs_1050_ = lean_ctor_get(v_x_1045_, 1);
v_isSharedCheck_1074_ = !lean_is_exclusive(v_x_1045_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1052_ = v_x_1045_;
v_isShared_1053_ = v_isSharedCheck_1074_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_vs_1050_);
lean_inc(v_ks_1049_);
lean_dec(v_x_1045_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1074_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1054_; uint8_t v___x_1055_; 
v___x_1054_ = lean_array_get_size(v_ks_1049_);
v___x_1055_ = lean_nat_dec_lt(v_x_1046_, v___x_1054_);
if (v___x_1055_ == 0)
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1059_; 
lean_dec(v_x_1046_);
v___x_1056_ = lean_array_push(v_ks_1049_, v_x_1047_);
v___x_1057_ = lean_array_push(v_vs_1050_, v_x_1048_);
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 1, v___x_1057_);
lean_ctor_set(v___x_1052_, 0, v___x_1056_);
v___x_1059_ = v___x_1052_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v___x_1056_);
lean_ctor_set(v_reuseFailAlloc_1060_, 1, v___x_1057_);
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
lean_object* v_k_x27_1061_; uint8_t v___x_1062_; 
v_k_x27_1061_ = lean_array_fget_borrowed(v_ks_1049_, v_x_1046_);
v___x_1062_ = lean_name_eq(v_x_1047_, v_k_x27_1061_);
if (v___x_1062_ == 0)
{
lean_object* v___x_1064_; 
if (v_isShared_1053_ == 0)
{
v___x_1064_ = v___x_1052_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v_ks_1049_);
lean_ctor_set(v_reuseFailAlloc_1068_, 1, v_vs_1050_);
v___x_1064_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1065_ = lean_unsigned_to_nat(1u);
v___x_1066_ = lean_nat_add(v_x_1046_, v___x_1065_);
lean_dec(v_x_1046_);
v_x_1045_ = v___x_1064_;
v_x_1046_ = v___x_1066_;
goto _start;
}
}
else
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1072_; 
v___x_1069_ = lean_array_fset(v_ks_1049_, v_x_1046_, v_x_1047_);
v___x_1070_ = lean_array_fset(v_vs_1050_, v_x_1046_, v_x_1048_);
lean_dec(v_x_1046_);
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 1, v___x_1070_);
lean_ctor_set(v___x_1052_, 0, v___x_1069_);
v___x_1072_ = v___x_1052_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v___x_1069_);
lean_ctor_set(v_reuseFailAlloc_1073_, 1, v___x_1070_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
return v___x_1072_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__11___redArg(lean_object* v_n_1075_, lean_object* v_k_1076_, lean_object* v_v_1077_){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1078_ = lean_unsigned_to_nat(0u);
v___x_1079_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__11_spec__19___redArg(v_n_1075_, v___x_1078_, v_k_1076_, v_v_1077_);
return v___x_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5___redArg(lean_object* v_x_1080_, size_t v_x_1081_, size_t v_x_1082_, lean_object* v_x_1083_, lean_object* v_x_1084_){
_start:
{
if (lean_obj_tag(v_x_1080_) == 0)
{
lean_object* v_es_1085_; size_t v___x_1086_; size_t v___x_1087_; lean_object* v_j_1088_; lean_object* v___x_1089_; uint8_t v___x_1090_; 
v_es_1085_ = lean_ctor_get(v_x_1080_, 0);
v___x_1086_ = ((size_t)31ULL);
v___x_1087_ = lean_usize_land(v_x_1081_, v___x_1086_);
v_j_1088_ = lean_usize_to_nat(v___x_1087_);
v___x_1089_ = lean_array_get_size(v_es_1085_);
v___x_1090_ = lean_nat_dec_lt(v_j_1088_, v___x_1089_);
if (v___x_1090_ == 0)
{
lean_dec(v_j_1088_);
lean_dec(v_x_1084_);
lean_dec(v_x_1083_);
return v_x_1080_;
}
else
{
lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1129_; 
lean_inc_ref(v_es_1085_);
v_isSharedCheck_1129_ = !lean_is_exclusive(v_x_1080_);
if (v_isSharedCheck_1129_ == 0)
{
lean_object* v_unused_1130_; 
v_unused_1130_ = lean_ctor_get(v_x_1080_, 0);
lean_dec(v_unused_1130_);
v___x_1092_ = v_x_1080_;
v_isShared_1093_ = v_isSharedCheck_1129_;
goto v_resetjp_1091_;
}
else
{
lean_dec(v_x_1080_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1129_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v_v_1094_; lean_object* v___x_1095_; lean_object* v_xs_x27_1096_; lean_object* v___y_1098_; 
v_v_1094_ = lean_array_fget(v_es_1085_, v_j_1088_);
v___x_1095_ = lean_box(0);
v_xs_x27_1096_ = lean_array_fset(v_es_1085_, v_j_1088_, v___x_1095_);
switch(lean_obj_tag(v_v_1094_))
{
case 0:
{
lean_object* v_key_1103_; lean_object* v_val_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1114_; 
v_key_1103_ = lean_ctor_get(v_v_1094_, 0);
v_val_1104_ = lean_ctor_get(v_v_1094_, 1);
v_isSharedCheck_1114_ = !lean_is_exclusive(v_v_1094_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1106_ = v_v_1094_;
v_isShared_1107_ = v_isSharedCheck_1114_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_val_1104_);
lean_inc(v_key_1103_);
lean_dec(v_v_1094_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1114_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
uint8_t v___x_1108_; 
v___x_1108_ = lean_name_eq(v_x_1083_, v_key_1103_);
if (v___x_1108_ == 0)
{
lean_object* v___x_1109_; lean_object* v___x_1110_; 
lean_del_object(v___x_1106_);
v___x_1109_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1103_, v_val_1104_, v_x_1083_, v_x_1084_);
v___x_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1109_);
v___y_1098_ = v___x_1110_;
goto v___jp_1097_;
}
else
{
lean_object* v___x_1112_; 
lean_dec(v_val_1104_);
lean_dec(v_key_1103_);
if (v_isShared_1107_ == 0)
{
lean_ctor_set(v___x_1106_, 1, v_x_1084_);
lean_ctor_set(v___x_1106_, 0, v_x_1083_);
v___x_1112_ = v___x_1106_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_x_1083_);
lean_ctor_set(v_reuseFailAlloc_1113_, 1, v_x_1084_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
v___y_1098_ = v___x_1112_;
goto v___jp_1097_;
}
}
}
}
case 1:
{
lean_object* v_node_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1127_; 
v_node_1115_ = lean_ctor_get(v_v_1094_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v_v_1094_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1117_ = v_v_1094_;
v_isShared_1118_ = v_isSharedCheck_1127_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_node_1115_);
lean_dec(v_v_1094_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1127_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
size_t v___x_1119_; size_t v___x_1120_; size_t v___x_1121_; size_t v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1125_; 
v___x_1119_ = ((size_t)5ULL);
v___x_1120_ = lean_usize_shift_right(v_x_1081_, v___x_1119_);
v___x_1121_ = ((size_t)1ULL);
v___x_1122_ = lean_usize_add(v_x_1082_, v___x_1121_);
v___x_1123_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5___redArg(v_node_1115_, v___x_1120_, v___x_1122_, v_x_1083_, v_x_1084_);
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 0, v___x_1123_);
v___x_1125_ = v___x_1117_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v___x_1123_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
v___y_1098_ = v___x_1125_;
goto v___jp_1097_;
}
}
}
default: 
{
lean_object* v___x_1128_; 
v___x_1128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1128_, 0, v_x_1083_);
lean_ctor_set(v___x_1128_, 1, v_x_1084_);
v___y_1098_ = v___x_1128_;
goto v___jp_1097_;
}
}
v___jp_1097_:
{
lean_object* v___x_1099_; lean_object* v___x_1101_; 
v___x_1099_ = lean_array_fset(v_xs_x27_1096_, v_j_1088_, v___y_1098_);
lean_dec(v_j_1088_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 0, v___x_1099_);
v___x_1101_ = v___x_1092_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v___x_1099_);
v___x_1101_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
return v___x_1101_;
}
}
}
}
}
else
{
lean_object* v_ks_1131_; lean_object* v_vs_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1150_; 
v_ks_1131_ = lean_ctor_get(v_x_1080_, 0);
v_vs_1132_ = lean_ctor_get(v_x_1080_, 1);
v_isSharedCheck_1150_ = !lean_is_exclusive(v_x_1080_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1134_ = v_x_1080_;
v_isShared_1135_ = v_isSharedCheck_1150_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_vs_1132_);
lean_inc(v_ks_1131_);
lean_dec(v_x_1080_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1150_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___x_1137_; 
if (v_isShared_1135_ == 0)
{
v___x_1137_ = v___x_1134_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_ks_1131_);
lean_ctor_set(v_reuseFailAlloc_1149_, 1, v_vs_1132_);
v___x_1137_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
lean_object* v_newNode_1138_; size_t v___x_1139_; uint8_t v___x_1140_; 
v_newNode_1138_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__11___redArg(v___x_1137_, v_x_1083_, v_x_1084_);
v___x_1139_ = ((size_t)7ULL);
v___x_1140_ = lean_usize_dec_le(v___x_1139_, v_x_1082_);
if (v___x_1140_ == 0)
{
lean_object* v___x_1141_; lean_object* v___x_1142_; uint8_t v___x_1143_; 
v___x_1141_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1138_);
v___x_1142_ = lean_unsigned_to_nat(4u);
v___x_1143_ = lean_nat_dec_lt(v___x_1141_, v___x_1142_);
lean_dec(v___x_1141_);
if (v___x_1143_ == 0)
{
lean_object* v_ks_1144_; lean_object* v_vs_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
v_ks_1144_ = lean_ctor_get(v_newNode_1138_, 0);
lean_inc_ref(v_ks_1144_);
v_vs_1145_ = lean_ctor_get(v_newNode_1138_, 1);
lean_inc_ref(v_vs_1145_);
lean_dec_ref(v_newNode_1138_);
v___x_1146_ = lean_unsigned_to_nat(0u);
v___x_1147_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___redArg___closed__0);
v___x_1148_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__12___redArg(v_x_1082_, v_ks_1144_, v_vs_1145_, v___x_1146_, v___x_1147_);
lean_dec_ref(v_vs_1145_);
lean_dec_ref(v_ks_1144_);
return v___x_1148_;
}
else
{
return v_newNode_1138_;
}
}
else
{
return v_newNode_1138_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__12___redArg(size_t v_depth_1151_, lean_object* v_keys_1152_, lean_object* v_vals_1153_, lean_object* v_i_1154_, lean_object* v_entries_1155_){
_start:
{
lean_object* v___x_1156_; uint8_t v___x_1157_; 
v___x_1156_ = lean_array_get_size(v_keys_1152_);
v___x_1157_ = lean_nat_dec_lt(v_i_1154_, v___x_1156_);
if (v___x_1157_ == 0)
{
lean_dec(v_i_1154_);
return v_entries_1155_;
}
else
{
lean_object* v_k_1158_; lean_object* v_v_1159_; uint64_t v___y_1161_; 
v_k_1158_ = lean_array_fget_borrowed(v_keys_1152_, v_i_1154_);
v_v_1159_ = lean_array_fget_borrowed(v_vals_1153_, v_i_1154_);
if (lean_obj_tag(v_k_1158_) == 0)
{
uint64_t v___x_1172_; 
v___x_1172_ = 1723ULL;
v___y_1161_ = v___x_1172_;
goto v___jp_1160_;
}
else
{
uint64_t v_hash_1173_; 
v_hash_1173_ = lean_ctor_get_uint64(v_k_1158_, sizeof(void*)*2);
v___y_1161_ = v_hash_1173_;
goto v___jp_1160_;
}
v___jp_1160_:
{
size_t v_h_1162_; size_t v___x_1163_; lean_object* v___x_1164_; size_t v___x_1165_; size_t v___x_1166_; size_t v___x_1167_; size_t v_h_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v_h_1162_ = lean_uint64_to_usize(v___y_1161_);
v___x_1163_ = ((size_t)5ULL);
v___x_1164_ = lean_unsigned_to_nat(1u);
v___x_1165_ = ((size_t)1ULL);
v___x_1166_ = lean_usize_sub(v_depth_1151_, v___x_1165_);
v___x_1167_ = lean_usize_mul(v___x_1163_, v___x_1166_);
v_h_1168_ = lean_usize_shift_right(v_h_1162_, v___x_1167_);
v___x_1169_ = lean_nat_add(v_i_1154_, v___x_1164_);
lean_dec(v_i_1154_);
lean_inc(v_v_1159_);
lean_inc(v_k_1158_);
v___x_1170_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5___redArg(v_entries_1155_, v_h_1168_, v_depth_1151_, v_k_1158_, v_v_1159_);
v_i_1154_ = v___x_1169_;
v_entries_1155_ = v___x_1170_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__12___redArg___boxed(lean_object* v_depth_1174_, lean_object* v_keys_1175_, lean_object* v_vals_1176_, lean_object* v_i_1177_, lean_object* v_entries_1178_){
_start:
{
size_t v_depth_boxed_1179_; lean_object* v_res_1180_; 
v_depth_boxed_1179_ = lean_unbox_usize(v_depth_1174_);
lean_dec(v_depth_1174_);
v_res_1180_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__12___redArg(v_depth_boxed_1179_, v_keys_1175_, v_vals_1176_, v_i_1177_, v_entries_1178_);
lean_dec_ref(v_vals_1176_);
lean_dec_ref(v_keys_1175_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5___redArg___boxed(lean_object* v_x_1181_, lean_object* v_x_1182_, lean_object* v_x_1183_, lean_object* v_x_1184_, lean_object* v_x_1185_){
_start:
{
size_t v_x_4576__boxed_1186_; size_t v_x_4577__boxed_1187_; lean_object* v_res_1188_; 
v_x_4576__boxed_1186_ = lean_unbox_usize(v_x_1182_);
lean_dec(v_x_1182_);
v_x_4577__boxed_1187_ = lean_unbox_usize(v_x_1183_);
lean_dec(v_x_1183_);
v_res_1188_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5___redArg(v_x_1181_, v_x_4576__boxed_1186_, v_x_4577__boxed_1187_, v_x_1184_, v_x_1185_);
return v_res_1188_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2___redArg(lean_object* v_x_1189_, lean_object* v_x_1190_, lean_object* v_x_1191_){
_start:
{
uint64_t v___y_1193_; 
if (lean_obj_tag(v_x_1190_) == 0)
{
uint64_t v___x_1197_; 
v___x_1197_ = 1723ULL;
v___y_1193_ = v___x_1197_;
goto v___jp_1192_;
}
else
{
uint64_t v_hash_1198_; 
v_hash_1198_ = lean_ctor_get_uint64(v_x_1190_, sizeof(void*)*2);
v___y_1193_ = v_hash_1198_;
goto v___jp_1192_;
}
v___jp_1192_:
{
size_t v___x_1194_; size_t v___x_1195_; lean_object* v___x_1196_; 
v___x_1194_ = lean_uint64_to_usize(v___y_1193_);
v___x_1195_ = ((size_t)1ULL);
v___x_1196_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5___redArg(v_x_1189_, v___x_1194_, v___x_1195_, v_x_1190_, v_x_1191_);
return v___x_1196_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore(lean_object* v_s_1199_, lean_object* v_keys_1200_, lean_object* v_declName_1201_, uint8_t v_phase_1202_, lean_object* v_proc_1203_){
_start:
{
lean_object* v_pre_1204_; lean_object* v_eval_1205_; lean_object* v_post_1206_; lean_object* v_simprocNames_1207_; lean_object* v_erased_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1229_; 
v_pre_1204_ = lean_ctor_get(v_s_1199_, 0);
v_eval_1205_ = lean_ctor_get(v_s_1199_, 1);
v_post_1206_ = lean_ctor_get(v_s_1199_, 2);
v_simprocNames_1207_ = lean_ctor_get(v_s_1199_, 3);
v_erased_1208_ = lean_ctor_get(v_s_1199_, 4);
v_isSharedCheck_1229_ = !lean_is_exclusive(v_s_1199_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1210_ = v_s_1199_;
v_isShared_1211_ = v_isSharedCheck_1229_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_erased_1208_);
lean_inc(v_simprocNames_1207_);
lean_inc(v_post_1206_);
lean_inc(v_eval_1205_);
lean_inc(v_pre_1204_);
lean_dec(v_s_1199_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1229_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1212_; lean_object* v_entry_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
lean_inc_ref(v_keys_1200_);
lean_inc_n(v_declName_1201_, 2);
v___x_1212_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1212_, 0, v_declName_1201_);
lean_ctor_set(v___x_1212_, 1, v_keys_1200_);
lean_ctor_set_uint8(v___x_1212_, sizeof(void*)*2, v_phase_1202_);
v_entry_1213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_entry_1213_, 0, v___x_1212_);
lean_ctor_set(v_entry_1213_, 1, v_proc_1203_);
v___x_1214_ = lean_box(0);
v___x_1215_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2___redArg(v_simprocNames_1207_, v_declName_1201_, v___x_1214_);
v___x_1216_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3___redArg(v_erased_1208_, v_declName_1201_);
lean_dec(v_declName_1201_);
switch(v_phase_1202_)
{
case 0:
{
lean_object* v___x_1217_; lean_object* v___x_1219_; 
v___x_1217_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0(v_keys_1200_, v_entry_1213_, v_pre_1204_);
lean_dec_ref(v_keys_1200_);
if (v_isShared_1211_ == 0)
{
lean_ctor_set(v___x_1210_, 4, v___x_1216_);
lean_ctor_set(v___x_1210_, 3, v___x_1215_);
lean_ctor_set(v___x_1210_, 0, v___x_1217_);
v___x_1219_ = v___x_1210_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v___x_1217_);
lean_ctor_set(v_reuseFailAlloc_1220_, 1, v_eval_1205_);
lean_ctor_set(v_reuseFailAlloc_1220_, 2, v_post_1206_);
lean_ctor_set(v_reuseFailAlloc_1220_, 3, v___x_1215_);
lean_ctor_set(v_reuseFailAlloc_1220_, 4, v___x_1216_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
case 1:
{
lean_object* v___x_1221_; lean_object* v___x_1223_; 
v___x_1221_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0(v_keys_1200_, v_entry_1213_, v_eval_1205_);
lean_dec_ref(v_keys_1200_);
if (v_isShared_1211_ == 0)
{
lean_ctor_set(v___x_1210_, 4, v___x_1216_);
lean_ctor_set(v___x_1210_, 3, v___x_1215_);
lean_ctor_set(v___x_1210_, 1, v___x_1221_);
v___x_1223_ = v___x_1210_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_pre_1204_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v___x_1221_);
lean_ctor_set(v_reuseFailAlloc_1224_, 2, v_post_1206_);
lean_ctor_set(v_reuseFailAlloc_1224_, 3, v___x_1215_);
lean_ctor_set(v_reuseFailAlloc_1224_, 4, v___x_1216_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
default: 
{
lean_object* v___x_1225_; lean_object* v___x_1227_; 
v___x_1225_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___lam__0(v_keys_1200_, v_entry_1213_, v_post_1206_);
lean_dec_ref(v_keys_1200_);
if (v_isShared_1211_ == 0)
{
lean_ctor_set(v___x_1210_, 4, v___x_1216_);
lean_ctor_set(v___x_1210_, 3, v___x_1215_);
lean_ctor_set(v___x_1210_, 2, v___x_1225_);
v___x_1227_ = v___x_1210_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v_pre_1204_);
lean_ctor_set(v_reuseFailAlloc_1228_, 1, v_eval_1205_);
lean_ctor_set(v_reuseFailAlloc_1228_, 2, v___x_1225_);
lean_ctor_set(v_reuseFailAlloc_1228_, 3, v___x_1215_);
lean_ctor_set(v_reuseFailAlloc_1228_, 4, v___x_1216_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore___boxed(lean_object* v_s_1230_, lean_object* v_keys_1231_, lean_object* v_declName_1232_, lean_object* v_phase_1233_, lean_object* v_proc_1234_){
_start:
{
uint8_t v_phase_boxed_1235_; lean_object* v_res_1236_; 
v_phase_boxed_1235_ = lean_unbox(v_phase_1233_);
v_res_1236_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore(v_s_1230_, v_keys_1231_, v_declName_1232_, v_phase_boxed_1235_, v_proc_1234_);
return v_res_1236_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__1(lean_object* v_xs_1237_, lean_object* v_ys_1238_, lean_object* v_hsz_1239_, lean_object* v_x_1240_, lean_object* v_x_1241_){
_start:
{
uint8_t v___x_1242_; 
v___x_1242_ = l_Array_isEqvAux___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__1___redArg(v_xs_1237_, v_ys_1238_, v_x_1240_);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__1___boxed(lean_object* v_xs_1243_, lean_object* v_ys_1244_, lean_object* v_hsz_1245_, lean_object* v_x_1246_, lean_object* v_x_1247_){
_start:
{
uint8_t v_res_1248_; lean_object* v_r_1249_; 
v_res_1248_ = l_Array_isEqvAux___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__1(v_xs_1243_, v_ys_1244_, v_hsz_1245_, v_x_1246_, v_x_1247_);
lean_dec_ref(v_ys_1244_);
lean_dec_ref(v_xs_1243_);
v_r_1249_ = lean_box(v_res_1248_);
return v_r_1249_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2(lean_object* v_00_u03b2_1250_, lean_object* v_x_1251_, lean_object* v_x_1252_, lean_object* v_x_1253_){
_start:
{
lean_object* v___x_1254_; 
v___x_1254_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2___redArg(v_x_1251_, v_x_1252_, v_x_1253_);
return v___x_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3(lean_object* v_00_u03b2_1255_, lean_object* v_x_1256_, lean_object* v_x_1257_){
_start:
{
lean_object* v___x_1258_; 
v___x_1258_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3___redArg(v_x_1256_, v_x_1257_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3___boxed(lean_object* v_00_u03b2_1259_, lean_object* v_x_1260_, lean_object* v_x_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3(v_00_u03b2_1259_, v_x_1260_, v_x_1261_);
lean_dec(v_x_1261_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5(lean_object* v_00_u03b2_1263_, lean_object* v_x_1264_, size_t v_x_1265_, size_t v_x_1266_, lean_object* v_x_1267_, lean_object* v_x_1268_){
_start:
{
lean_object* v___x_1269_; 
v___x_1269_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5___redArg(v_x_1264_, v_x_1265_, v_x_1266_, v_x_1267_, v_x_1268_);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5___boxed(lean_object* v_00_u03b2_1270_, lean_object* v_x_1271_, lean_object* v_x_1272_, lean_object* v_x_1273_, lean_object* v_x_1274_, lean_object* v_x_1275_){
_start:
{
size_t v_x_4811__boxed_1276_; size_t v_x_4812__boxed_1277_; lean_object* v_res_1278_; 
v_x_4811__boxed_1276_ = lean_unbox_usize(v_x_1272_);
lean_dec(v_x_1272_);
v_x_4812__boxed_1277_ = lean_unbox_usize(v_x_1273_);
lean_dec(v_x_1273_);
v_res_1278_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5(v_00_u03b2_1270_, v_x_1271_, v_x_4811__boxed_1276_, v_x_4812__boxed_1277_, v_x_1274_, v_x_1275_);
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7(lean_object* v_00_u03b2_1279_, lean_object* v_x_1280_, size_t v_x_1281_, lean_object* v_x_1282_){
_start:
{
lean_object* v___x_1283_; 
v___x_1283_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7___redArg(v_x_1280_, v_x_1281_, v_x_1282_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7___boxed(lean_object* v_00_u03b2_1284_, lean_object* v_x_1285_, lean_object* v_x_1286_, lean_object* v_x_1287_){
_start:
{
size_t v_x_4828__boxed_1288_; lean_object* v_res_1289_; 
v_x_4828__boxed_1288_ = lean_unbox_usize(v_x_1286_);
lean_dec(v_x_1286_);
v_res_1289_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3_spec__7(v_00_u03b2_1284_, v_x_1285_, v_x_4828__boxed_1288_, v_x_1287_);
lean_dec(v_x_1287_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6(lean_object* v_00_u03b2_1290_, lean_object* v_x_1291_, size_t v_x_1292_, size_t v_x_1293_, lean_object* v_x_1294_, lean_object* v_x_1295_){
_start:
{
lean_object* v___x_1296_; 
v___x_1296_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___redArg(v_x_1291_, v_x_1292_, v_x_1293_, v_x_1294_, v_x_1295_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6___boxed(lean_object* v_00_u03b2_1297_, lean_object* v_x_1298_, lean_object* v_x_1299_, lean_object* v_x_1300_, lean_object* v_x_1301_, lean_object* v_x_1302_){
_start:
{
size_t v_x_4839__boxed_1303_; size_t v_x_4840__boxed_1304_; lean_object* v_res_1305_; 
v_x_4839__boxed_1303_ = lean_unbox_usize(v_x_1299_);
lean_dec(v_x_1299_);
v_x_4840__boxed_1304_ = lean_unbox_usize(v_x_1300_);
lean_dec(v_x_1300_);
v_res_1305_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6(v_00_u03b2_1297_, v_x_1298_, v_x_4839__boxed_1303_, v_x_4840__boxed_1304_, v_x_1301_, v_x_1302_);
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__11(lean_object* v_00_u03b2_1306_, lean_object* v_n_1307_, lean_object* v_k_1308_, lean_object* v_v_1309_){
_start:
{
lean_object* v___x_1310_; 
v___x_1310_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__11___redArg(v_n_1307_, v_k_1308_, v_v_1309_);
return v___x_1310_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__12(lean_object* v_00_u03b2_1311_, size_t v_depth_1312_, lean_object* v_keys_1313_, lean_object* v_vals_1314_, lean_object* v_heq_1315_, lean_object* v_i_1316_, lean_object* v_entries_1317_){
_start:
{
lean_object* v___x_1318_; 
v___x_1318_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__12___redArg(v_depth_1312_, v_keys_1313_, v_vals_1314_, v_i_1316_, v_entries_1317_);
return v___x_1318_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__12___boxed(lean_object* v_00_u03b2_1319_, lean_object* v_depth_1320_, lean_object* v_keys_1321_, lean_object* v_vals_1322_, lean_object* v_heq_1323_, lean_object* v_i_1324_, lean_object* v_entries_1325_){
_start:
{
size_t v_depth_boxed_1326_; lean_object* v_res_1327_; 
v_depth_boxed_1326_ = lean_unbox_usize(v_depth_1320_);
lean_dec(v_depth_1320_);
v_res_1327_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__12(v_00_u03b2_1319_, v_depth_boxed_1326_, v_keys_1321_, v_vals_1322_, v_heq_1323_, v_i_1324_, v_entries_1325_);
lean_dec_ref(v_vals_1322_);
lean_dec_ref(v_keys_1321_);
return v_res_1327_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1_spec__6(lean_object* v___x_1328_, lean_object* v_as_1329_, lean_object* v_k_1330_, lean_object* v_x_1331_, lean_object* v_x_1332_, lean_object* v_x_1333_, lean_object* v_x_1334_){
_start:
{
lean_object* v___x_1335_; 
v___x_1335_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1_spec__6___redArg(v___x_1328_, v_as_1329_, v_k_1330_, v_x_1331_, v_x_1332_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1_spec__6___boxed(lean_object* v___x_1336_, lean_object* v_as_1337_, lean_object* v_k_1338_, lean_object* v_x_1339_, lean_object* v_x_1340_, lean_object* v_x_1341_, lean_object* v_x_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__1_spec__6(v___x_1336_, v_as_1337_, v_k_1338_, v_x_1339_, v_x_1340_, v_x_1341_, v_x_1342_);
lean_dec_ref(v_k_1338_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3_spec__10(lean_object* v_x_1344_, lean_object* v_keys_1345_, lean_object* v_v_1346_, lean_object* v_k_1347_, lean_object* v_as_1348_, lean_object* v_k_1349_, lean_object* v_x_1350_, lean_object* v_x_1351_, lean_object* v_x_1352_, lean_object* v_x_1353_){
_start:
{
lean_object* v___x_1354_; 
v___x_1354_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3_spec__10___redArg(v_x_1344_, v_keys_1345_, v_v_1346_, v_k_1347_, v_as_1348_, v_k_1349_, v_x_1350_, v_x_1351_);
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3_spec__10___boxed(lean_object* v_x_1355_, lean_object* v_keys_1356_, lean_object* v_v_1357_, lean_object* v_k_1358_, lean_object* v_as_1359_, lean_object* v_k_1360_, lean_object* v_x_1361_, lean_object* v_x_1362_, lean_object* v_x_1363_, lean_object* v_x_1364_){
_start:
{
lean_object* v_res_1365_; 
v_res_1365_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__0_spec__3_spec__10(v_x_1355_, v_keys_1356_, v_v_1357_, v_k_1358_, v_as_1359_, v_k_1360_, v_x_1361_, v_x_1362_, v_x_1363_, v_x_1364_);
lean_dec_ref(v_k_1360_);
lean_dec_ref(v_keys_1356_);
lean_dec(v_x_1355_);
return v_res_1365_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__15(lean_object* v_00_u03b2_1366_, lean_object* v_n_1367_, lean_object* v_k_1368_, lean_object* v_v_1369_){
_start:
{
lean_object* v___x_1370_; 
v___x_1370_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__15___redArg(v_n_1367_, v_k_1368_, v_v_1369_);
return v___x_1370_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__16(lean_object* v_00_u03b2_1371_, size_t v_depth_1372_, lean_object* v_keys_1373_, lean_object* v_vals_1374_, lean_object* v_heq_1375_, lean_object* v_i_1376_, lean_object* v_entries_1377_){
_start:
{
lean_object* v___x_1378_; 
v___x_1378_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__16___redArg(v_depth_1372_, v_keys_1373_, v_vals_1374_, v_i_1376_, v_entries_1377_);
return v___x_1378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__16___boxed(lean_object* v_00_u03b2_1379_, lean_object* v_depth_1380_, lean_object* v_keys_1381_, lean_object* v_vals_1382_, lean_object* v_heq_1383_, lean_object* v_i_1384_, lean_object* v_entries_1385_){
_start:
{
size_t v_depth_boxed_1386_; lean_object* v_res_1387_; 
v_depth_boxed_1386_ = lean_unbox_usize(v_depth_1380_);
lean_dec(v_depth_1380_);
v_res_1387_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__16(v_00_u03b2_1379_, v_depth_boxed_1386_, v_keys_1381_, v_vals_1382_, v_heq_1383_, v_i_1384_, v_entries_1385_);
lean_dec_ref(v_vals_1382_);
lean_dec_ref(v_keys_1381_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__11_spec__19(lean_object* v_00_u03b2_1388_, lean_object* v_x_1389_, lean_object* v_x_1390_, lean_object* v_x_1391_, lean_object* v_x_1392_){
_start:
{
lean_object* v___x_1393_; 
v___x_1393_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2_spec__5_spec__11_spec__19___redArg(v_x_1389_, v_x_1390_, v_x_1391_, v_x_1392_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__15_spec__18(lean_object* v_00_u03b2_1394_, lean_object* v_x_1395_, lean_object* v_x_1396_, lean_object* v_x_1397_, lean_object* v_x_1398_){
_start:
{
lean_object* v___x_1399_; 
v___x_1399_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__0_spec__1_spec__6_spec__15_spec__18___redArg(v_x_1395_, v_x_1396_, v_x_1397_, v_x_1398_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocs_erase(lean_object* v_s_1400_, lean_object* v_declName_1401_){
_start:
{
lean_object* v_pre_1402_; lean_object* v_eval_1403_; lean_object* v_post_1404_; lean_object* v_simprocNames_1405_; lean_object* v_erased_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1416_; 
v_pre_1402_ = lean_ctor_get(v_s_1400_, 0);
v_eval_1403_ = lean_ctor_get(v_s_1400_, 1);
v_post_1404_ = lean_ctor_get(v_s_1400_, 2);
v_simprocNames_1405_ = lean_ctor_get(v_s_1400_, 3);
v_erased_1406_ = lean_ctor_get(v_s_1400_, 4);
v_isSharedCheck_1416_ = !lean_is_exclusive(v_s_1400_);
if (v_isSharedCheck_1416_ == 0)
{
v___x_1408_ = v_s_1400_;
v_isShared_1409_ = v_isSharedCheck_1416_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_erased_1406_);
lean_inc(v_simprocNames_1405_);
lean_inc(v_post_1404_);
lean_inc(v_eval_1403_);
lean_inc(v_pre_1402_);
lean_dec(v_s_1400_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1416_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1414_; 
v___x_1410_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__3___redArg(v_simprocNames_1405_, v_declName_1401_);
v___x_1411_ = lean_box(0);
v___x_1412_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2___redArg(v_erased_1406_, v_declName_1401_, v___x_1411_);
if (v_isShared_1409_ == 0)
{
lean_ctor_set(v___x_1408_, 4, v___x_1412_);
lean_ctor_set(v___x_1408_, 3, v___x_1410_);
v___x_1414_ = v___x_1408_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_pre_1402_);
lean_ctor_set(v_reuseFailAlloc_1415_, 1, v_eval_1403_);
lean_ctor_set(v_reuseFailAlloc_1415_, 2, v_post_1404_);
lean_ctor_set(v_reuseFailAlloc_1415_, 3, v___x_1410_);
lean_ctor_set(v_reuseFailAlloc_1415_, 4, v___x_1412_);
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
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__0(void){
_start:
{
lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1417_ = lean_box(0);
v___x_1418_ = lean_unsigned_to_nat(16u);
v___x_1419_ = lean_mk_array(v___x_1418_, v___x_1417_);
return v___x_1419_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__1(void){
_start:
{
lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1420_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__0, &l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__0_once, _init_l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__0);
v___x_1421_ = lean_unsigned_to_nat(0u);
v___x_1422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1421_);
lean_ctor_set(v___x_1422_, 1, v___x_1420_);
return v___x_1422_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__2(void){
_start:
{
lean_object* v___x_1423_; lean_object* v___x_1424_; 
v___x_1423_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__1, &l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__1);
v___x_1424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1423_);
lean_ctor_set(v___x_1424_, 1, v___x_1423_);
return v___x_1424_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default(void){
_start:
{
lean_object* v___x_1425_; 
v___x_1425_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__2, &l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__2_once, _init_l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__2);
return v___x_1425_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs(void){
_start:
{
lean_object* v___x_1426_; 
v___x_1426_ = l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default;
return v___x_1426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_404265556____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1428_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__2, &l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__2_once, _init_l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__2);
v___x_1429_ = lean_st_mk_ref(v___x_1428_);
v___x_1430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1430_, 0, v___x_1429_);
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_404265556____hygCtx___hyg_2____boxed(lean_object* v_a_1431_){
_start:
{
lean_object* v_res_1432_; 
v_res_1432_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_404265556____hygCtx___hyg_2_();
return v_res_1432_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0_spec__0___redArg(lean_object* v_a_1433_, lean_object* v_x_1434_){
_start:
{
if (lean_obj_tag(v_x_1434_) == 0)
{
uint8_t v___x_1435_; 
v___x_1435_ = 0;
return v___x_1435_;
}
else
{
lean_object* v_key_1436_; lean_object* v_tail_1437_; uint8_t v___x_1438_; 
v_key_1436_ = lean_ctor_get(v_x_1434_, 0);
v_tail_1437_ = lean_ctor_get(v_x_1434_, 2);
v___x_1438_ = lean_name_eq(v_key_1436_, v_a_1433_);
if (v___x_1438_ == 0)
{
v_x_1434_ = v_tail_1437_;
goto _start;
}
else
{
return v___x_1438_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0_spec__0___redArg___boxed(lean_object* v_a_1440_, lean_object* v_x_1441_){
_start:
{
uint8_t v_res_1442_; lean_object* v_r_1443_; 
v_res_1442_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0_spec__0___redArg(v_a_1440_, v_x_1441_);
lean_dec(v_x_1441_);
lean_dec(v_a_1440_);
v_r_1443_ = lean_box(v_res_1442_);
return v_r_1443_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0___redArg(lean_object* v_m_1444_, lean_object* v_a_1445_){
_start:
{
lean_object* v_buckets_1446_; lean_object* v___x_1447_; uint64_t v___y_1449_; 
v_buckets_1446_ = lean_ctor_get(v_m_1444_, 1);
v___x_1447_ = lean_array_get_size(v_buckets_1446_);
if (lean_obj_tag(v_a_1445_) == 0)
{
uint64_t v___x_1463_; 
v___x_1463_ = 1723ULL;
v___y_1449_ = v___x_1463_;
goto v___jp_1448_;
}
else
{
uint64_t v_hash_1464_; 
v_hash_1464_ = lean_ctor_get_uint64(v_a_1445_, sizeof(void*)*2);
v___y_1449_ = v_hash_1464_;
goto v___jp_1448_;
}
v___jp_1448_:
{
uint64_t v___x_1450_; uint64_t v___x_1451_; uint64_t v_fold_1452_; uint64_t v___x_1453_; uint64_t v___x_1454_; uint64_t v___x_1455_; size_t v___x_1456_; size_t v___x_1457_; size_t v___x_1458_; size_t v___x_1459_; size_t v___x_1460_; lean_object* v___x_1461_; uint8_t v___x_1462_; 
v___x_1450_ = 32ULL;
v___x_1451_ = lean_uint64_shift_right(v___y_1449_, v___x_1450_);
v_fold_1452_ = lean_uint64_xor(v___y_1449_, v___x_1451_);
v___x_1453_ = 16ULL;
v___x_1454_ = lean_uint64_shift_right(v_fold_1452_, v___x_1453_);
v___x_1455_ = lean_uint64_xor(v_fold_1452_, v___x_1454_);
v___x_1456_ = lean_uint64_to_usize(v___x_1455_);
v___x_1457_ = lean_usize_of_nat(v___x_1447_);
v___x_1458_ = ((size_t)1ULL);
v___x_1459_ = lean_usize_sub(v___x_1457_, v___x_1458_);
v___x_1460_ = lean_usize_land(v___x_1456_, v___x_1459_);
v___x_1461_ = lean_array_uget_borrowed(v_buckets_1446_, v___x_1460_);
v___x_1462_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0_spec__0___redArg(v_a_1445_, v___x_1461_);
return v___x_1462_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0___redArg___boxed(lean_object* v_m_1465_, lean_object* v_a_1466_){
_start:
{
uint8_t v_res_1467_; lean_object* v_r_1468_; 
v_res_1467_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0___redArg(v_m_1465_, v_a_1466_);
lean_dec(v_a_1466_);
lean_dec_ref(v_m_1465_);
v_r_1468_ = lean_box(v_res_1467_);
return v_r_1468_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__3___redArg(lean_object* v_a_1469_, lean_object* v_b_1470_, lean_object* v_x_1471_){
_start:
{
if (lean_obj_tag(v_x_1471_) == 0)
{
lean_dec(v_b_1470_);
lean_dec(v_a_1469_);
return v_x_1471_;
}
else
{
lean_object* v_key_1472_; lean_object* v_value_1473_; lean_object* v_tail_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1486_; 
v_key_1472_ = lean_ctor_get(v_x_1471_, 0);
v_value_1473_ = lean_ctor_get(v_x_1471_, 1);
v_tail_1474_ = lean_ctor_get(v_x_1471_, 2);
v_isSharedCheck_1486_ = !lean_is_exclusive(v_x_1471_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1476_ = v_x_1471_;
v_isShared_1477_ = v_isSharedCheck_1486_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_tail_1474_);
lean_inc(v_value_1473_);
lean_inc(v_key_1472_);
lean_dec(v_x_1471_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1486_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
uint8_t v___x_1478_; 
v___x_1478_ = lean_name_eq(v_key_1472_, v_a_1469_);
if (v___x_1478_ == 0)
{
lean_object* v___x_1479_; lean_object* v___x_1481_; 
v___x_1479_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__3___redArg(v_a_1469_, v_b_1470_, v_tail_1474_);
if (v_isShared_1477_ == 0)
{
lean_ctor_set(v___x_1476_, 2, v___x_1479_);
v___x_1481_ = v___x_1476_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v_key_1472_);
lean_ctor_set(v_reuseFailAlloc_1482_, 1, v_value_1473_);
lean_ctor_set(v_reuseFailAlloc_1482_, 2, v___x_1479_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
else
{
lean_object* v___x_1484_; 
lean_dec(v_value_1473_);
lean_dec(v_key_1472_);
if (v_isShared_1477_ == 0)
{
lean_ctor_set(v___x_1476_, 1, v_b_1470_);
lean_ctor_set(v___x_1476_, 0, v_a_1469_);
v___x_1484_ = v___x_1476_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_a_1469_);
lean_ctor_set(v_reuseFailAlloc_1485_, 1, v_b_1470_);
lean_ctor_set(v_reuseFailAlloc_1485_, 2, v_tail_1474_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
return v___x_1484_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_1487_, lean_object* v_x_1488_){
_start:
{
if (lean_obj_tag(v_x_1488_) == 0)
{
return v_x_1487_;
}
else
{
lean_object* v_key_1489_; lean_object* v_value_1490_; lean_object* v_tail_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1517_; 
v_key_1489_ = lean_ctor_get(v_x_1488_, 0);
v_value_1490_ = lean_ctor_get(v_x_1488_, 1);
v_tail_1491_ = lean_ctor_get(v_x_1488_, 2);
v_isSharedCheck_1517_ = !lean_is_exclusive(v_x_1488_);
if (v_isSharedCheck_1517_ == 0)
{
v___x_1493_ = v_x_1488_;
v_isShared_1494_ = v_isSharedCheck_1517_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_tail_1491_);
lean_inc(v_value_1490_);
lean_inc(v_key_1489_);
lean_dec(v_x_1488_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1517_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1495_; uint64_t v___y_1497_; 
v___x_1495_ = lean_array_get_size(v_x_1487_);
if (lean_obj_tag(v_key_1489_) == 0)
{
uint64_t v___x_1515_; 
v___x_1515_ = 1723ULL;
v___y_1497_ = v___x_1515_;
goto v___jp_1496_;
}
else
{
uint64_t v_hash_1516_; 
v_hash_1516_ = lean_ctor_get_uint64(v_key_1489_, sizeof(void*)*2);
v___y_1497_ = v_hash_1516_;
goto v___jp_1496_;
}
v___jp_1496_:
{
uint64_t v___x_1498_; uint64_t v___x_1499_; uint64_t v_fold_1500_; uint64_t v___x_1501_; uint64_t v___x_1502_; uint64_t v___x_1503_; size_t v___x_1504_; size_t v___x_1505_; size_t v___x_1506_; size_t v___x_1507_; size_t v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1511_; 
v___x_1498_ = 32ULL;
v___x_1499_ = lean_uint64_shift_right(v___y_1497_, v___x_1498_);
v_fold_1500_ = lean_uint64_xor(v___y_1497_, v___x_1499_);
v___x_1501_ = 16ULL;
v___x_1502_ = lean_uint64_shift_right(v_fold_1500_, v___x_1501_);
v___x_1503_ = lean_uint64_xor(v_fold_1500_, v___x_1502_);
v___x_1504_ = lean_uint64_to_usize(v___x_1503_);
v___x_1505_ = lean_usize_of_nat(v___x_1495_);
v___x_1506_ = ((size_t)1ULL);
v___x_1507_ = lean_usize_sub(v___x_1505_, v___x_1506_);
v___x_1508_ = lean_usize_land(v___x_1504_, v___x_1507_);
v___x_1509_ = lean_array_uget_borrowed(v_x_1487_, v___x_1508_);
lean_inc(v___x_1509_);
if (v_isShared_1494_ == 0)
{
lean_ctor_set(v___x_1493_, 2, v___x_1509_);
v___x_1511_ = v___x_1493_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v_key_1489_);
lean_ctor_set(v_reuseFailAlloc_1514_, 1, v_value_1490_);
lean_ctor_set(v_reuseFailAlloc_1514_, 2, v___x_1509_);
v___x_1511_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
lean_object* v___x_1512_; 
v___x_1512_ = lean_array_uset(v_x_1487_, v___x_1508_, v___x_1511_);
v_x_1487_ = v___x_1512_;
v_x_1488_ = v_tail_1491_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__2_spec__3___redArg(lean_object* v_i_1518_, lean_object* v_source_1519_, lean_object* v_target_1520_){
_start:
{
lean_object* v___x_1521_; uint8_t v___x_1522_; 
v___x_1521_ = lean_array_get_size(v_source_1519_);
v___x_1522_ = lean_nat_dec_lt(v_i_1518_, v___x_1521_);
if (v___x_1522_ == 0)
{
lean_dec_ref(v_source_1519_);
lean_dec(v_i_1518_);
return v_target_1520_;
}
else
{
lean_object* v_es_1523_; lean_object* v___x_1524_; lean_object* v_source_1525_; lean_object* v_target_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
v_es_1523_ = lean_array_fget(v_source_1519_, v_i_1518_);
v___x_1524_ = lean_box(0);
v_source_1525_ = lean_array_fset(v_source_1519_, v_i_1518_, v___x_1524_);
v_target_1526_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__2_spec__3_spec__4___redArg(v_target_1520_, v_es_1523_);
v___x_1527_ = lean_unsigned_to_nat(1u);
v___x_1528_ = lean_nat_add(v_i_1518_, v___x_1527_);
lean_dec(v_i_1518_);
v_i_1518_ = v___x_1528_;
v_source_1519_ = v_source_1525_;
v_target_1520_ = v_target_1526_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__2___redArg(lean_object* v_data_1530_){
_start:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v_nbuckets_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1531_ = lean_array_get_size(v_data_1530_);
v___x_1532_ = lean_unsigned_to_nat(2u);
v_nbuckets_1533_ = lean_nat_mul(v___x_1531_, v___x_1532_);
v___x_1534_ = lean_unsigned_to_nat(0u);
v___x_1535_ = lean_box(0);
v___x_1536_ = lean_mk_array(v_nbuckets_1533_, v___x_1535_);
v___x_1537_ = lean_array_propagate_mark(v_data_1530_, v___x_1536_);
v___x_1538_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__2_spec__3___redArg(v___x_1534_, v_data_1530_, v___x_1537_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1___redArg(lean_object* v_m_1539_, lean_object* v_a_1540_, lean_object* v_b_1541_){
_start:
{
lean_object* v_size_1542_; lean_object* v_buckets_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1589_; 
v_size_1542_ = lean_ctor_get(v_m_1539_, 0);
v_buckets_1543_ = lean_ctor_get(v_m_1539_, 1);
v_isSharedCheck_1589_ = !lean_is_exclusive(v_m_1539_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1545_ = v_m_1539_;
v_isShared_1546_ = v_isSharedCheck_1589_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_buckets_1543_);
lean_inc(v_size_1542_);
lean_dec(v_m_1539_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1589_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v___x_1547_; uint64_t v___y_1549_; 
v___x_1547_ = lean_array_get_size(v_buckets_1543_);
if (lean_obj_tag(v_a_1540_) == 0)
{
uint64_t v___x_1587_; 
v___x_1587_ = 1723ULL;
v___y_1549_ = v___x_1587_;
goto v___jp_1548_;
}
else
{
uint64_t v_hash_1588_; 
v_hash_1588_ = lean_ctor_get_uint64(v_a_1540_, sizeof(void*)*2);
v___y_1549_ = v_hash_1588_;
goto v___jp_1548_;
}
v___jp_1548_:
{
uint64_t v___x_1550_; uint64_t v___x_1551_; uint64_t v_fold_1552_; uint64_t v___x_1553_; uint64_t v___x_1554_; uint64_t v___x_1555_; size_t v___x_1556_; size_t v___x_1557_; size_t v___x_1558_; size_t v___x_1559_; size_t v___x_1560_; lean_object* v_bkt_1561_; uint8_t v___x_1562_; 
v___x_1550_ = 32ULL;
v___x_1551_ = lean_uint64_shift_right(v___y_1549_, v___x_1550_);
v_fold_1552_ = lean_uint64_xor(v___y_1549_, v___x_1551_);
v___x_1553_ = 16ULL;
v___x_1554_ = lean_uint64_shift_right(v_fold_1552_, v___x_1553_);
v___x_1555_ = lean_uint64_xor(v_fold_1552_, v___x_1554_);
v___x_1556_ = lean_uint64_to_usize(v___x_1555_);
v___x_1557_ = lean_usize_of_nat(v___x_1547_);
v___x_1558_ = ((size_t)1ULL);
v___x_1559_ = lean_usize_sub(v___x_1557_, v___x_1558_);
v___x_1560_ = lean_usize_land(v___x_1556_, v___x_1559_);
v_bkt_1561_ = lean_array_uget_borrowed(v_buckets_1543_, v___x_1560_);
v___x_1562_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0_spec__0___redArg(v_a_1540_, v_bkt_1561_);
if (v___x_1562_ == 0)
{
lean_object* v___x_1563_; lean_object* v_size_x27_1564_; lean_object* v___x_1565_; lean_object* v_buckets_x27_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; uint8_t v___x_1572_; 
v___x_1563_ = lean_unsigned_to_nat(1u);
v_size_x27_1564_ = lean_nat_add(v_size_1542_, v___x_1563_);
lean_dec(v_size_1542_);
lean_inc(v_bkt_1561_);
v___x_1565_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1565_, 0, v_a_1540_);
lean_ctor_set(v___x_1565_, 1, v_b_1541_);
lean_ctor_set(v___x_1565_, 2, v_bkt_1561_);
v_buckets_x27_1566_ = lean_array_uset(v_buckets_1543_, v___x_1560_, v___x_1565_);
v___x_1567_ = lean_unsigned_to_nat(4u);
v___x_1568_ = lean_nat_mul(v_size_x27_1564_, v___x_1567_);
v___x_1569_ = lean_unsigned_to_nat(3u);
v___x_1570_ = lean_nat_div(v___x_1568_, v___x_1569_);
lean_dec(v___x_1568_);
v___x_1571_ = lean_array_get_size(v_buckets_x27_1566_);
v___x_1572_ = lean_nat_dec_le(v___x_1570_, v___x_1571_);
lean_dec(v___x_1570_);
if (v___x_1572_ == 0)
{
lean_object* v_val_1573_; lean_object* v___x_1575_; 
v_val_1573_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__2___redArg(v_buckets_x27_1566_);
if (v_isShared_1546_ == 0)
{
lean_ctor_set(v___x_1545_, 1, v_val_1573_);
lean_ctor_set(v___x_1545_, 0, v_size_x27_1564_);
v___x_1575_ = v___x_1545_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v_size_x27_1564_);
lean_ctor_set(v_reuseFailAlloc_1576_, 1, v_val_1573_);
v___x_1575_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
return v___x_1575_;
}
}
else
{
lean_object* v___x_1578_; 
if (v_isShared_1546_ == 0)
{
lean_ctor_set(v___x_1545_, 1, v_buckets_x27_1566_);
lean_ctor_set(v___x_1545_, 0, v_size_x27_1564_);
v___x_1578_ = v___x_1545_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_size_x27_1564_);
lean_ctor_set(v_reuseFailAlloc_1579_, 1, v_buckets_x27_1566_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
}
else
{
lean_object* v___x_1580_; lean_object* v_buckets_x27_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1585_; 
lean_inc(v_bkt_1561_);
v___x_1580_ = lean_box(0);
v_buckets_x27_1581_ = lean_array_uset(v_buckets_1543_, v___x_1560_, v___x_1580_);
v___x_1582_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__3___redArg(v_a_1540_, v_b_1541_, v_bkt_1561_);
v___x_1583_ = lean_array_uset(v_buckets_x27_1581_, v___x_1560_, v___x_1582_);
if (v_isShared_1546_ == 0)
{
lean_ctor_set(v___x_1545_, 1, v___x_1583_);
v___x_1585_ = v___x_1545_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v_size_1542_);
lean_ctor_set(v_reuseFailAlloc_1586_, 1, v___x_1583_);
v___x_1585_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
return v___x_1585_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__1(void){
_start:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1591_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__0));
v___x_1592_ = lean_mk_io_user_error(v___x_1591_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc(lean_object* v_declName_1595_, lean_object* v_keys_1596_, lean_object* v_proc_1597_){
_start:
{
uint8_t v___x_1599_; 
v___x_1599_ = l_Lean_initializing();
if (v___x_1599_ == 0)
{
lean_object* v___x_1600_; lean_object* v___x_1601_; 
lean_dec_ref(v_proc_1597_);
lean_dec_ref(v_keys_1596_);
lean_dec(v_declName_1595_);
v___x_1600_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__1, &l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__1);
v___x_1601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1601_, 0, v___x_1600_);
return v___x_1601_;
}
else
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v_keys_1604_; uint8_t v___x_1605_; 
v___x_1602_ = l_Lean_Meta_Tactic_Cbv_builtinCbvSimprocDeclsRef;
v___x_1603_ = lean_st_ref_get(v___x_1602_);
v_keys_1604_ = lean_ctor_get(v___x_1603_, 0);
lean_inc_ref(v_keys_1604_);
lean_dec(v___x_1603_);
v___x_1605_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0___redArg(v_keys_1604_, v_declName_1595_);
lean_dec_ref(v_keys_1604_);
if (v___x_1605_ == 0)
{
lean_object* v___x_1606_; lean_object* v_keys_1607_; lean_object* v_procs_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1619_; 
v___x_1606_ = lean_st_ref_take(v___x_1602_);
v_keys_1607_ = lean_ctor_get(v___x_1606_, 0);
v_procs_1608_ = lean_ctor_get(v___x_1606_, 1);
v_isSharedCheck_1619_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1610_ = v___x_1606_;
v_isShared_1611_ = v_isSharedCheck_1619_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_procs_1608_);
lean_inc(v_keys_1607_);
lean_dec(v___x_1606_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1619_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1615_; 
lean_inc(v_declName_1595_);
v___x_1612_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1___redArg(v_keys_1607_, v_declName_1595_, v_keys_1596_);
v___x_1613_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1___redArg(v_procs_1608_, v_declName_1595_, v_proc_1597_);
if (v_isShared_1611_ == 0)
{
lean_ctor_set(v___x_1610_, 1, v___x_1613_);
lean_ctor_set(v___x_1610_, 0, v___x_1612_);
v___x_1615_ = v___x_1610_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v___x_1612_);
lean_ctor_set(v_reuseFailAlloc_1618_, 1, v___x_1613_);
v___x_1615_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; 
v___x_1616_ = lean_st_ref_put(v___x_1602_, v___x_1615_);
v___x_1617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1616_);
return v___x_1617_;
}
}
}
else
{
lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
lean_dec_ref(v_proc_1597_);
lean_dec_ref(v_keys_1596_);
v___x_1620_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__2));
v___x_1621_ = l_Lean_privateToUserName(v_declName_1595_);
v___x_1622_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1621_, v___x_1605_);
v___x_1623_ = lean_string_append(v___x_1620_, v___x_1622_);
lean_dec_ref(v___x_1622_);
v___x_1624_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__3));
v___x_1625_ = lean_string_append(v___x_1623_, v___x_1624_);
v___x_1626_ = lean_mk_io_user_error(v___x_1625_);
v___x_1627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1626_);
return v___x_1627_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___boxed(lean_object* v_declName_1628_, lean_object* v_keys_1629_, lean_object* v_proc_1630_, lean_object* v_a_1631_){
_start:
{
lean_object* v_res_1632_; 
v_res_1632_ = l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc(v_declName_1628_, v_keys_1629_, v_proc_1630_);
return v_res_1632_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0(lean_object* v_00_u03b2_1633_, lean_object* v_m_1634_, lean_object* v_a_1635_){
_start:
{
uint8_t v___x_1636_; 
v___x_1636_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0___redArg(v_m_1634_, v_a_1635_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0___boxed(lean_object* v_00_u03b2_1637_, lean_object* v_m_1638_, lean_object* v_a_1639_){
_start:
{
uint8_t v_res_1640_; lean_object* v_r_1641_; 
v_res_1640_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0(v_00_u03b2_1637_, v_m_1638_, v_a_1639_);
lean_dec(v_a_1639_);
lean_dec_ref(v_m_1638_);
v_r_1641_ = lean_box(v_res_1640_);
return v_r_1641_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1(lean_object* v_00_u03b2_1642_, lean_object* v_m_1643_, lean_object* v_a_1644_, lean_object* v_b_1645_){
_start:
{
lean_object* v___x_1646_; 
v___x_1646_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1___redArg(v_m_1643_, v_a_1644_, v_b_1645_);
return v___x_1646_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0_spec__0(lean_object* v_00_u03b2_1647_, lean_object* v_a_1648_, lean_object* v_x_1649_){
_start:
{
uint8_t v___x_1650_; 
v___x_1650_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0_spec__0___redArg(v_a_1648_, v_x_1649_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1651_, lean_object* v_a_1652_, lean_object* v_x_1653_){
_start:
{
uint8_t v_res_1654_; lean_object* v_r_1655_; 
v_res_1654_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0_spec__0(v_00_u03b2_1651_, v_a_1652_, v_x_1653_);
lean_dec(v_x_1653_);
lean_dec(v_a_1652_);
v_r_1655_ = lean_box(v_res_1654_);
return v_r_1655_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__2(lean_object* v_00_u03b2_1656_, lean_object* v_data_1657_){
_start:
{
lean_object* v___x_1658_; 
v___x_1658_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__2___redArg(v_data_1657_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__3(lean_object* v_00_u03b2_1659_, lean_object* v_a_1660_, lean_object* v_b_1661_, lean_object* v_x_1662_){
_start:
{
lean_object* v___x_1663_; 
v___x_1663_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__3___redArg(v_a_1660_, v_b_1661_, v_x_1662_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_1664_, lean_object* v_i_1665_, lean_object* v_source_1666_, lean_object* v_target_1667_){
_start:
{
lean_object* v___x_1668_; 
v___x_1668_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__2_spec__3___redArg(v_i_1665_, v_source_1666_, v_target_1667_);
return v___x_1668_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_1669_, lean_object* v_x_1670_, lean_object* v_x_1671_){
_start:
{
lean_object* v___x_1672_; 
v___x_1672_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__1_spec__2_spec__3_spec__4___redArg(v_x_1670_, v_x_1671_);
return v___x_1672_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_CbvSimprocDecl_lt(lean_object* v_d_u2081_1680_, lean_object* v_d_u2082_1681_){
_start:
{
lean_object* v_declName_1682_; lean_object* v_declName_1683_; uint8_t v___x_1684_; 
v_declName_1682_ = lean_ctor_get(v_d_u2081_1680_, 0);
v_declName_1683_ = lean_ctor_get(v_d_u2082_1681_, 0);
v___x_1684_ = l_Lean_Name_quickLt(v_declName_1682_, v_declName_1683_);
return v___x_1684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_CbvSimprocDecl_lt___boxed(lean_object* v_d_u2081_1685_, lean_object* v_d_u2082_1686_){
_start:
{
uint8_t v_res_1687_; lean_object* v_r_1688_; 
v_res_1687_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocDecl_lt(v_d_u2081_1685_, v_d_u2082_1686_);
lean_dec_ref(v_d_u2082_1686_);
lean_dec_ref(v_d_u2081_1685_);
v_r_1688_ = lean_box(v_res_1687_);
return v_r_1688_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default___closed__0(void){
_start:
{
lean_object* v___x_1689_; lean_object* v___x_1690_; 
v___x_1689_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0);
v___x_1690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1689_);
return v___x_1690_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default___closed__1(void){
_start:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1691_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default___closed__0, &l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default___closed__0_once, _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default___closed__0);
v___x_1692_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__1, &l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default___closed__1);
v___x_1693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1693_, 0, v___x_1692_);
lean_ctor_set(v___x_1693_, 1, v___x_1691_);
return v___x_1693_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default(void){
_start:
{
lean_object* v___x_1694_; 
v___x_1694_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default___closed__1, &l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default___closed__1);
return v___x_1694_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState(void){
_start:
{
lean_object* v___x_1695_; 
v___x_1695_ = l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default;
return v___x_1695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(lean_object* v_s_1696_, lean_object* v_d_1697_){
_start:
{
lean_object* v_builtin_1698_; lean_object* v_newEntries_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1709_; 
v_builtin_1698_ = lean_ctor_get(v_s_1696_, 0);
v_newEntries_1699_ = lean_ctor_get(v_s_1696_, 1);
v_isSharedCheck_1709_ = !lean_is_exclusive(v_s_1696_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1701_ = v_s_1696_;
v_isShared_1702_ = v_isSharedCheck_1709_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_newEntries_1699_);
lean_inc(v_builtin_1698_);
lean_dec(v_s_1696_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1709_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v_declName_1703_; lean_object* v_keys_1704_; lean_object* v___x_1705_; lean_object* v___x_1707_; 
v_declName_1703_ = lean_ctor_get(v_d_1697_, 0);
lean_inc(v_declName_1703_);
v_keys_1704_ = lean_ctor_get(v_d_1697_, 1);
lean_inc_ref(v_keys_1704_);
lean_dec_ref(v_d_1697_);
v___x_1705_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2___redArg(v_newEntries_1699_, v_declName_1703_, v_keys_1704_);
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 1, v___x_1705_);
v___x_1707_ = v___x_1701_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_builtin_1698_);
lean_ctor_set(v_reuseFailAlloc_1708_, 1, v___x_1705_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(lean_object* v_result_1710_, lean_object* v_declName_1711_, lean_object* v_keys_1712_){
_start:
{
lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1713_, 0, v_declName_1711_);
lean_ctor_set(v___x_1713_, 1, v_keys_1712_);
v___x_1714_ = lean_array_push(v_result_1710_, v___x_1713_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0___redArg___lam__0(lean_object* v_f_1715_, lean_object* v_x1_1716_, lean_object* v_x2_1717_, lean_object* v_x3_1718_){
_start:
{
lean_object* v___x_1719_; 
v___x_1719_ = lean_apply_3(v_f_1715_, v_x1_1716_, v_x2_1717_, v_x3_1718_);
return v___x_1719_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_f_1720_, lean_object* v_keys_1721_, lean_object* v_vals_1722_, lean_object* v_i_1723_, lean_object* v_acc_1724_){
_start:
{
lean_object* v___x_1725_; uint8_t v___x_1726_; 
v___x_1725_ = lean_array_get_size(v_keys_1721_);
v___x_1726_ = lean_nat_dec_lt(v_i_1723_, v___x_1725_);
if (v___x_1726_ == 0)
{
lean_dec(v_i_1723_);
lean_dec(v_f_1720_);
return v_acc_1724_;
}
else
{
lean_object* v_k_1727_; lean_object* v_v_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
v_k_1727_ = lean_array_fget_borrowed(v_keys_1721_, v_i_1723_);
v_v_1728_ = lean_array_fget_borrowed(v_vals_1722_, v_i_1723_);
lean_inc(v_f_1720_);
lean_inc(v_v_1728_);
lean_inc(v_k_1727_);
v___x_1729_ = lean_apply_3(v_f_1720_, v_acc_1724_, v_k_1727_, v_v_1728_);
v___x_1730_ = lean_unsigned_to_nat(1u);
v___x_1731_ = lean_nat_add(v_i_1723_, v___x_1730_);
lean_dec(v_i_1723_);
v_i_1723_ = v___x_1731_;
v_acc_1724_ = v___x_1729_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_f_1733_, lean_object* v_keys_1734_, lean_object* v_vals_1735_, lean_object* v_i_1736_, lean_object* v_acc_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(v_f_1733_, v_keys_1734_, v_vals_1735_, v_i_1736_, v_acc_1737_);
lean_dec_ref(v_vals_1735_);
lean_dec_ref(v_keys_1734_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_f_1739_, lean_object* v_as_1740_, size_t v_i_1741_, size_t v_stop_1742_, lean_object* v_b_1743_){
_start:
{
lean_object* v___y_1745_; uint8_t v___x_1749_; 
v___x_1749_ = lean_usize_dec_eq(v_i_1741_, v_stop_1742_);
if (v___x_1749_ == 0)
{
lean_object* v___x_1750_; 
v___x_1750_ = lean_array_uget_borrowed(v_as_1740_, v_i_1741_);
switch(lean_obj_tag(v___x_1750_))
{
case 0:
{
lean_object* v_key_1751_; lean_object* v_val_1752_; lean_object* v___x_1753_; 
v_key_1751_ = lean_ctor_get(v___x_1750_, 0);
v_val_1752_ = lean_ctor_get(v___x_1750_, 1);
lean_inc(v_f_1739_);
lean_inc(v_val_1752_);
lean_inc(v_key_1751_);
v___x_1753_ = lean_apply_3(v_f_1739_, v_b_1743_, v_key_1751_, v_val_1752_);
v___y_1745_ = v___x_1753_;
goto v___jp_1744_;
}
case 1:
{
lean_object* v_node_1754_; lean_object* v___x_1755_; 
v_node_1754_ = lean_ctor_get(v___x_1750_, 0);
lean_inc(v_f_1739_);
v___x_1755_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_f_1739_, v_node_1754_, v_b_1743_);
v___y_1745_ = v___x_1755_;
goto v___jp_1744_;
}
default: 
{
v___y_1745_ = v_b_1743_;
goto v___jp_1744_;
}
}
}
else
{
lean_dec(v_f_1739_);
return v_b_1743_;
}
v___jp_1744_:
{
size_t v___x_1746_; size_t v___x_1747_; 
v___x_1746_ = ((size_t)1ULL);
v___x_1747_ = lean_usize_add(v_i_1741_, v___x_1746_);
v_i_1741_ = v___x_1747_;
v_b_1743_ = v___y_1745_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object* v_f_1756_, lean_object* v_x_1757_, lean_object* v_x_1758_){
_start:
{
if (lean_obj_tag(v_x_1757_) == 0)
{
lean_object* v_es_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; uint8_t v___x_1762_; 
v_es_1759_ = lean_ctor_get(v_x_1757_, 0);
v___x_1760_ = lean_unsigned_to_nat(0u);
v___x_1761_ = lean_array_get_size(v_es_1759_);
v___x_1762_ = lean_nat_dec_lt(v___x_1760_, v___x_1761_);
if (v___x_1762_ == 0)
{
lean_dec(v_f_1756_);
return v_x_1758_;
}
else
{
size_t v___x_1763_; size_t v___x_1764_; lean_object* v___x_1765_; 
v___x_1763_ = ((size_t)0ULL);
v___x_1764_ = lean_usize_of_nat(v___x_1761_);
v___x_1765_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg(v_f_1756_, v_es_1759_, v___x_1763_, v___x_1764_, v_x_1758_);
return v___x_1765_;
}
}
else
{
lean_object* v_ks_1766_; lean_object* v_vs_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
v_ks_1766_ = lean_ctor_get(v_x_1757_, 0);
v_vs_1767_ = lean_ctor_get(v_x_1757_, 1);
v___x_1768_ = lean_unsigned_to_nat(0u);
v___x_1769_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(v_f_1756_, v_ks_1766_, v_vs_1767_, v___x_1768_, v_x_1758_);
return v___x_1769_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_1770_, lean_object* v_x_1771_, lean_object* v_x_1772_){
_start:
{
lean_object* v_res_1773_; 
v_res_1773_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_f_1770_, v_x_1771_, v_x_1772_);
lean_dec_ref(v_x_1771_);
return v_res_1773_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_f_1774_, lean_object* v_as_1775_, lean_object* v_i_1776_, lean_object* v_stop_1777_, lean_object* v_b_1778_){
_start:
{
size_t v_i_boxed_1779_; size_t v_stop_boxed_1780_; lean_object* v_res_1781_; 
v_i_boxed_1779_ = lean_unbox_usize(v_i_1776_);
lean_dec(v_i_1776_);
v_stop_boxed_1780_ = lean_unbox_usize(v_stop_1777_);
lean_dec(v_stop_1777_);
v_res_1781_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg(v_f_1774_, v_as_1775_, v_i_boxed_1779_, v_stop_boxed_1780_, v_b_1778_);
lean_dec_ref(v_as_1775_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0___redArg(lean_object* v_map_1782_, lean_object* v_f_1783_, lean_object* v_init_1784_){
_start:
{
lean_object* v___f_1785_; lean_object* v___x_1786_; 
v___f_1785_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1785_, 0, v_f_1783_);
v___x_1786_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v___f_1785_, v_map_1782_, v_init_1784_);
return v___x_1786_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_map_1787_, lean_object* v_f_1788_, lean_object* v_init_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0___redArg(v_map_1787_, v_f_1788_, v_init_1789_);
lean_dec_ref(v_map_1787_);
return v_res_1790_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_hi_1791_, lean_object* v_pivot_1792_, lean_object* v_as_1793_, lean_object* v_i_1794_, lean_object* v_k_1795_){
_start:
{
uint8_t v___x_1796_; 
v___x_1796_ = lean_nat_dec_lt(v_k_1795_, v_hi_1791_);
if (v___x_1796_ == 0)
{
lean_object* v___x_1797_; lean_object* v___x_1798_; 
lean_dec(v_k_1795_);
v___x_1797_ = lean_array_fswap(v_as_1793_, v_i_1794_, v_hi_1791_);
v___x_1798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1798_, 0, v_i_1794_);
lean_ctor_set(v___x_1798_, 1, v___x_1797_);
return v___x_1798_;
}
else
{
lean_object* v___x_1799_; uint8_t v___x_1800_; 
v___x_1799_ = lean_array_fget_borrowed(v_as_1793_, v_k_1795_);
v___x_1800_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocDecl_lt(v___x_1799_, v_pivot_1792_);
if (v___x_1800_ == 0)
{
lean_object* v___x_1801_; lean_object* v___x_1802_; 
v___x_1801_ = lean_unsigned_to_nat(1u);
v___x_1802_ = lean_nat_add(v_k_1795_, v___x_1801_);
lean_dec(v_k_1795_);
v_k_1795_ = v___x_1802_;
goto _start;
}
else
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1804_ = lean_array_fswap(v_as_1793_, v_i_1794_, v_k_1795_);
v___x_1805_ = lean_unsigned_to_nat(1u);
v___x_1806_ = lean_nat_add(v_i_1794_, v___x_1805_);
lean_dec(v_i_1794_);
v___x_1807_ = lean_nat_add(v_k_1795_, v___x_1805_);
lean_dec(v_k_1795_);
v_as_1793_ = v___x_1804_;
v_i_1794_ = v___x_1806_;
v_k_1795_ = v___x_1807_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_hi_1809_, lean_object* v_pivot_1810_, lean_object* v_as_1811_, lean_object* v_i_1812_, lean_object* v_k_1813_){
_start:
{
lean_object* v_res_1814_; 
v_res_1814_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_1809_, v_pivot_1810_, v_as_1811_, v_i_1812_, v_k_1813_);
lean_dec_ref(v_pivot_1810_);
lean_dec(v_hi_1809_);
return v_res_1814_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1___redArg(lean_object* v_n_1815_, lean_object* v_as_1816_, lean_object* v_lo_1817_, lean_object* v_hi_1818_){
_start:
{
lean_object* v___y_1820_; uint8_t v___x_1830_; 
v___x_1830_ = lean_nat_dec_lt(v_lo_1817_, v_hi_1818_);
if (v___x_1830_ == 0)
{
lean_dec(v_lo_1817_);
return v_as_1816_;
}
else
{
lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v_mid_1833_; lean_object* v___y_1835_; lean_object* v___y_1841_; lean_object* v___x_1846_; lean_object* v___x_1847_; uint8_t v___x_1848_; 
v___x_1831_ = lean_nat_add(v_lo_1817_, v_hi_1818_);
v___x_1832_ = lean_unsigned_to_nat(1u);
v_mid_1833_ = lean_nat_shiftr(v___x_1831_, v___x_1832_);
lean_dec(v___x_1831_);
v___x_1846_ = lean_array_fget_borrowed(v_as_1816_, v_mid_1833_);
v___x_1847_ = lean_array_fget_borrowed(v_as_1816_, v_lo_1817_);
v___x_1848_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocDecl_lt(v___x_1846_, v___x_1847_);
if (v___x_1848_ == 0)
{
v___y_1841_ = v_as_1816_;
goto v___jp_1840_;
}
else
{
lean_object* v___x_1849_; 
v___x_1849_ = lean_array_fswap(v_as_1816_, v_lo_1817_, v_mid_1833_);
v___y_1841_ = v___x_1849_;
goto v___jp_1840_;
}
v___jp_1834_:
{
lean_object* v___x_1836_; lean_object* v___x_1837_; uint8_t v___x_1838_; 
v___x_1836_ = lean_array_fget_borrowed(v___y_1835_, v_mid_1833_);
v___x_1837_ = lean_array_fget_borrowed(v___y_1835_, v_hi_1818_);
v___x_1838_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocDecl_lt(v___x_1836_, v___x_1837_);
if (v___x_1838_ == 0)
{
lean_dec(v_mid_1833_);
v___y_1820_ = v___y_1835_;
goto v___jp_1819_;
}
else
{
lean_object* v___x_1839_; 
v___x_1839_ = lean_array_fswap(v___y_1835_, v_mid_1833_, v_hi_1818_);
lean_dec(v_mid_1833_);
v___y_1820_ = v___x_1839_;
goto v___jp_1819_;
}
}
v___jp_1840_:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; uint8_t v___x_1844_; 
v___x_1842_ = lean_array_fget_borrowed(v___y_1841_, v_hi_1818_);
v___x_1843_ = lean_array_fget_borrowed(v___y_1841_, v_lo_1817_);
v___x_1844_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocDecl_lt(v___x_1842_, v___x_1843_);
if (v___x_1844_ == 0)
{
v___y_1835_ = v___y_1841_;
goto v___jp_1834_;
}
else
{
lean_object* v___x_1845_; 
v___x_1845_ = lean_array_fswap(v___y_1841_, v_lo_1817_, v_hi_1818_);
v___y_1835_ = v___x_1845_;
goto v___jp_1834_;
}
}
}
v___jp_1819_:
{
lean_object* v_pivot_1821_; lean_object* v___x_1822_; lean_object* v_fst_1823_; lean_object* v_snd_1824_; uint8_t v___x_1825_; 
v_pivot_1821_ = lean_array_fget(v___y_1820_, v_hi_1818_);
lean_inc_n(v_lo_1817_, 2);
v___x_1822_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_1818_, v_pivot_1821_, v___y_1820_, v_lo_1817_, v_lo_1817_);
lean_dec(v_pivot_1821_);
v_fst_1823_ = lean_ctor_get(v___x_1822_, 0);
lean_inc(v_fst_1823_);
v_snd_1824_ = lean_ctor_get(v___x_1822_, 1);
lean_inc(v_snd_1824_);
lean_dec_ref(v___x_1822_);
v___x_1825_ = lean_nat_dec_le(v_hi_1818_, v_fst_1823_);
if (v___x_1825_ == 0)
{
lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
v___x_1826_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1___redArg(v_n_1815_, v_snd_1824_, v_lo_1817_, v_fst_1823_);
v___x_1827_ = lean_unsigned_to_nat(1u);
v___x_1828_ = lean_nat_add(v_fst_1823_, v___x_1827_);
lean_dec(v_fst_1823_);
v_as_1816_ = v___x_1826_;
v_lo_1817_ = v___x_1828_;
goto _start;
}
else
{
lean_dec(v_fst_1823_);
lean_dec(v_lo_1817_);
return v_snd_1824_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_n_1850_, lean_object* v_as_1851_, lean_object* v_lo_1852_, lean_object* v_hi_1853_){
_start:
{
lean_object* v_res_1854_; 
v_res_1854_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1___redArg(v_n_1850_, v_as_1851_, v_lo_1852_, v_hi_1853_);
lean_dec(v_hi_1853_);
lean_dec(v_n_1850_);
return v_res_1854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(lean_object* v___f_1857_, lean_object* v_s_1858_){
_start:
{
lean_object* v_newEntries_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v_result_1862_; lean_object* v___x_1863_; uint8_t v___x_1864_; 
v_newEntries_1859_ = lean_ctor_get(v_s_1858_, 1);
v___x_1860_ = lean_unsigned_to_nat(0u);
v___x_1861_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__2___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_));
v_result_1862_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0___redArg(v_newEntries_1859_, v___f_1857_, v___x_1861_);
v___x_1863_ = lean_array_get_size(v_result_1862_);
v___x_1864_ = lean_nat_dec_eq(v___x_1863_, v___x_1860_);
if (v___x_1864_ == 0)
{
lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___y_1868_; uint8_t v___x_1872_; 
v___x_1865_ = lean_unsigned_to_nat(1u);
v___x_1866_ = lean_nat_sub(v___x_1863_, v___x_1865_);
v___x_1872_ = lean_nat_dec_le(v___x_1860_, v___x_1866_);
if (v___x_1872_ == 0)
{
lean_inc(v___x_1866_);
v___y_1868_ = v___x_1866_;
goto v___jp_1867_;
}
else
{
v___y_1868_ = v___x_1860_;
goto v___jp_1867_;
}
v___jp_1867_:
{
uint8_t v___x_1869_; 
v___x_1869_ = lean_nat_dec_le(v___y_1868_, v___x_1866_);
if (v___x_1869_ == 0)
{
lean_object* v___x_1870_; 
lean_dec(v___x_1866_);
lean_inc(v___y_1868_);
v___x_1870_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1___redArg(v___x_1863_, v_result_1862_, v___y_1868_, v___y_1868_);
lean_dec(v___y_1868_);
return v___x_1870_;
}
else
{
lean_object* v___x_1871_; 
v___x_1871_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1___redArg(v___x_1863_, v_result_1862_, v___y_1868_, v___x_1866_);
lean_dec(v___x_1866_);
return v___x_1871_;
}
}
}
else
{
return v_result_1862_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2____boxed(lean_object* v___f_1873_, lean_object* v_s_1874_){
_start:
{
lean_object* v_res_1875_; 
v_res_1875_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(v___f_1873_, v_s_1874_);
lean_dec_ref(v_s_1874_);
return v_res_1875_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(lean_object* v_x_1876_){
_start:
{
lean_object* v___x_1877_; 
v___x_1877_ = lean_box(0);
return v___x_1877_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2____boxed(lean_object* v_x_1878_){
_start:
{
lean_object* v_res_1879_; 
v_res_1879_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(v_x_1878_);
lean_dec_ref(v_x_1878_);
return v_res_1879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(lean_object* v___f_1880_, lean_object* v_x_1881_, lean_object* v_s_1882_){
_start:
{
lean_object* v_newEntries_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v_result_1886_; lean_object* v___x_1887_; lean_object* v___y_1889_; lean_object* v___y_1890_; uint8_t v___x_1893_; 
v_newEntries_1883_ = lean_ctor_get(v_s_1882_, 1);
v___x_1884_ = lean_unsigned_to_nat(0u);
v___x_1885_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__2___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_));
v_result_1886_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0___redArg(v_newEntries_1883_, v___f_1880_, v___x_1885_);
v___x_1887_ = lean_array_get_size(v_result_1886_);
v___x_1893_ = lean_nat_dec_eq(v___x_1887_, v___x_1884_);
if (v___x_1893_ == 0)
{
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___y_1897_; uint8_t v___x_1899_; 
v___x_1894_ = lean_unsigned_to_nat(1u);
v___x_1895_ = lean_nat_sub(v___x_1887_, v___x_1894_);
v___x_1899_ = lean_nat_dec_le(v___x_1884_, v___x_1895_);
if (v___x_1899_ == 0)
{
lean_inc(v___x_1895_);
v___y_1897_ = v___x_1895_;
goto v___jp_1896_;
}
else
{
v___y_1897_ = v___x_1884_;
goto v___jp_1896_;
}
v___jp_1896_:
{
uint8_t v___x_1898_; 
v___x_1898_ = lean_nat_dec_le(v___y_1897_, v___x_1895_);
if (v___x_1898_ == 0)
{
lean_dec(v___x_1895_);
lean_inc(v___y_1897_);
v___y_1889_ = v___y_1897_;
v___y_1890_ = v___y_1897_;
goto v___jp_1888_;
}
else
{
v___y_1889_ = v___y_1897_;
v___y_1890_ = v___x_1895_;
goto v___jp_1888_;
}
}
}
else
{
lean_object* v___x_1900_; 
lean_inc_n(v_result_1886_, 2);
v___x_1900_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1900_, 0, v_result_1886_);
lean_ctor_set(v___x_1900_, 1, v_result_1886_);
lean_ctor_set(v___x_1900_, 2, v_result_1886_);
return v___x_1900_;
}
v___jp_1888_:
{
lean_object* v___x_1891_; lean_object* v___x_1892_; 
v___x_1891_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1___redArg(v___x_1887_, v_result_1886_, v___y_1889_, v___y_1890_);
lean_dec(v___y_1890_);
lean_inc_ref_n(v___x_1891_, 2);
v___x_1892_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1892_, 0, v___x_1891_);
lean_ctor_set(v___x_1892_, 1, v___x_1891_);
lean_ctor_set(v___x_1892_, 2, v___x_1891_);
return v___x_1892_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2____boxed(lean_object* v___f_1901_, lean_object* v_x_1902_, lean_object* v_s_1903_){
_start:
{
lean_object* v_res_1904_; 
v_res_1904_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(v___f_1901_, v_x_1902_, v_s_1903_);
lean_dec_ref(v_s_1903_);
lean_dec_ref(v_x_1902_);
return v_res_1904_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(lean_object* v___x_1905_){
_start:
{
lean_object* v___x_1907_; lean_object* v_keys_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1917_; 
v___x_1907_ = lean_st_ref_get(v___x_1905_);
v_keys_1908_ = lean_ctor_get(v___x_1907_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1907_);
if (v_isSharedCheck_1917_ == 0)
{
lean_object* v_unused_1918_; 
v_unused_1918_ = lean_ctor_get(v___x_1907_, 1);
lean_dec(v_unused_1918_);
v___x_1910_ = v___x_1907_;
v_isShared_1911_ = v_isSharedCheck_1917_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_keys_1908_);
lean_dec(v___x_1907_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1917_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v___x_1912_; lean_object* v___x_1914_; 
v___x_1912_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default___closed__0, &l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default___closed__0_once, _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default___closed__0);
if (v_isShared_1911_ == 0)
{
lean_ctor_set(v___x_1910_, 1, v___x_1912_);
v___x_1914_ = v___x_1910_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_keys_1908_);
lean_ctor_set(v_reuseFailAlloc_1916_, 1, v___x_1912_);
v___x_1914_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
lean_object* v___x_1915_; 
v___x_1915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1915_, 0, v___x_1914_);
return v___x_1915_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2____boxed(lean_object* v___x_1919_, lean_object* v___y_1920_){
_start:
{
lean_object* v_res_1921_; 
v_res_1921_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(v___x_1919_);
lean_dec(v___x_1919_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(lean_object* v___x_1922_, lean_object* v_x_1923_, lean_object* v___y_1924_){
_start:
{
lean_object* v___x_1926_; lean_object* v_keys_1927_; lean_object* v___x_1929_; uint8_t v_isShared_1930_; uint8_t v_isSharedCheck_1936_; 
v___x_1926_ = lean_st_ref_get(v___x_1922_);
v_keys_1927_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1936_ == 0)
{
lean_object* v_unused_1937_; 
v_unused_1937_ = lean_ctor_get(v___x_1926_, 1);
lean_dec(v_unused_1937_);
v___x_1929_ = v___x_1926_;
v_isShared_1930_ = v_isSharedCheck_1936_;
goto v_resetjp_1928_;
}
else
{
lean_inc(v_keys_1927_);
lean_dec(v___x_1926_);
v___x_1929_ = lean_box(0);
v_isShared_1930_ = v_isSharedCheck_1936_;
goto v_resetjp_1928_;
}
v_resetjp_1928_:
{
lean_object* v___x_1931_; lean_object* v___x_1933_; 
v___x_1931_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default___closed__0, &l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default___closed__0_once, _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default___closed__0);
if (v_isShared_1930_ == 0)
{
lean_ctor_set(v___x_1929_, 1, v___x_1931_);
v___x_1933_ = v___x_1929_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v_keys_1927_);
lean_ctor_set(v_reuseFailAlloc_1935_, 1, v___x_1931_);
v___x_1933_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
lean_object* v___x_1934_; 
v___x_1934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1934_, 0, v___x_1933_);
return v___x_1934_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2____boxed(lean_object* v___x_1938_, lean_object* v_x_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_){
_start:
{
lean_object* v_res_1942_; 
v_res_1942_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(v___x_1938_, v_x_1939_, v___y_1940_);
lean_dec_ref(v___y_1940_);
lean_dec_ref(v_x_1939_);
lean_dec(v___x_1938_);
return v_res_1942_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1957_; lean_object* v___f_1958_; 
v___x_1957_ = l_Lean_Meta_Tactic_Cbv_builtinCbvSimprocDeclsRef;
v___f_1958_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_1958_, 0, v___x_1957_);
return v___f_1958_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1959_; lean_object* v___f_1960_; 
v___x_1959_ = l_Lean_Meta_Tactic_Cbv_builtinCbvSimprocDeclsRef;
v___f_1960_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2____boxed), 4, 1);
lean_closure_set(v___f_1960_, 0, v___x_1959_);
return v___f_1960_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___f_1964_; lean_object* v___f_1965_; lean_object* v___f_1966_; lean_object* v___f_1967_; lean_object* v___f_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; 
v___x_1961_ = 0;
v___x_1962_ = lean_box(0);
v___x_1963_ = lean_box(2);
v___f_1964_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_));
v___f_1965_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_));
v___f_1966_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_));
v___f_1967_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_);
v___f_1968_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_);
v___x_1969_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_));
v___x_1970_ = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(v___x_1970_, 0, v___x_1969_);
lean_ctor_set(v___x_1970_, 1, v___f_1968_);
lean_ctor_set(v___x_1970_, 2, v___f_1967_);
lean_ctor_set(v___x_1970_, 3, v___f_1966_);
lean_ctor_set(v___x_1970_, 4, v___f_1965_);
lean_ctor_set(v___x_1970_, 5, v___f_1964_);
lean_ctor_set(v___x_1970_, 6, v___x_1963_);
lean_ctor_set(v___x_1970_, 7, v___x_1962_);
lean_ctor_set_uint8(v___x_1970_, sizeof(void*)*8, v___x_1961_);
lean_ctor_set_uint8(v___x_1970_, sizeof(void*)*8 + 1, v___x_1961_);
return v___x_1970_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; 
v___f_1971_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_));
v___x_1972_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_);
v___x_1973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1973_, 0, v___x_1972_);
lean_ctor_set(v___x_1973_, 1, v___f_1971_);
return v___x_1973_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1975_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_);
v___x_1976_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_1975_);
return v___x_1976_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2____boxed(lean_object* v_a_1977_){
_start:
{
lean_object* v_res_1978_; 
v_res_1978_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_();
return v_res_1978_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0(lean_object* v_00_u03c3_1979_, lean_object* v_00_u03b2_1980_, lean_object* v_map_1981_, lean_object* v_f_1982_, lean_object* v_init_1983_){
_start:
{
lean_object* v___x_1984_; 
v___x_1984_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0___redArg(v_map_1981_, v_f_1982_, v_init_1983_);
return v___x_1984_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03c3_1985_, lean_object* v_00_u03b2_1986_, lean_object* v_map_1987_, lean_object* v_f_1988_, lean_object* v_init_1989_){
_start:
{
lean_object* v_res_1990_; 
v_res_1990_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0(v_00_u03c3_1985_, v_00_u03b2_1986_, v_map_1987_, v_f_1988_, v_init_1989_);
lean_dec_ref(v_map_1987_);
return v_res_1990_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1(lean_object* v_n_1991_, lean_object* v_as_1992_, lean_object* v_lo_1993_, lean_object* v_hi_1994_, lean_object* v_w_1995_, lean_object* v_hlo_1996_, lean_object* v_hhi_1997_){
_start:
{
lean_object* v___x_1998_; 
v___x_1998_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1___redArg(v_n_1991_, v_as_1992_, v_lo_1993_, v_hi_1994_);
return v___x_1998_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1___boxed(lean_object* v_n_1999_, lean_object* v_as_2000_, lean_object* v_lo_2001_, lean_object* v_hi_2002_, lean_object* v_w_2003_, lean_object* v_hlo_2004_, lean_object* v_hhi_2005_){
_start:
{
lean_object* v_res_2006_; 
v_res_2006_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1(v_n_1999_, v_as_2000_, v_lo_2001_, v_hi_2002_, v_w_2003_, v_hlo_2004_, v_hhi_2005_);
lean_dec(v_hi_2002_);
lean_dec(v_n_1999_);
return v_res_2006_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_map_2007_, lean_object* v_f_2008_, lean_object* v_init_2009_){
_start:
{
lean_object* v___x_2010_; 
v___x_2010_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_f_2008_, v_map_2007_, v_init_2009_);
return v___x_2010_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_map_2011_, lean_object* v_f_2012_, lean_object* v_init_2013_){
_start:
{
lean_object* v_res_2014_; 
v_res_2014_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0___redArg(v_map_2011_, v_f_2012_, v_init_2013_);
lean_dec_ref(v_map_2011_);
return v_res_2014_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03c3_2015_, lean_object* v_00_u03b2_2016_, lean_object* v_map_2017_, lean_object* v_f_2018_, lean_object* v_init_2019_){
_start:
{
lean_object* v___x_2020_; 
v___x_2020_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_f_2018_, v_map_2017_, v_init_2019_);
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03c3_2021_, lean_object* v_00_u03b2_2022_, lean_object* v_map_2023_, lean_object* v_f_2024_, lean_object* v_init_2025_){
_start:
{
lean_object* v_res_2026_; 
v_res_2026_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0(v_00_u03c3_2021_, v_00_u03b2_2022_, v_map_2023_, v_f_2024_, v_init_2025_);
lean_dec_ref(v_map_2023_);
return v_res_2026_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_n_2027_, lean_object* v_lo_2028_, lean_object* v_hi_2029_, lean_object* v_hhi_2030_, lean_object* v_pivot_2031_, lean_object* v_as_2032_, lean_object* v_i_2033_, lean_object* v_k_2034_, lean_object* v_ilo_2035_, lean_object* v_ik_2036_, lean_object* v_w_2037_){
_start:
{
lean_object* v___x_2038_; 
v___x_2038_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1_spec__2___redArg(v_hi_2029_, v_pivot_2031_, v_as_2032_, v_i_2033_, v_k_2034_);
return v___x_2038_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_n_2039_, lean_object* v_lo_2040_, lean_object* v_hi_2041_, lean_object* v_hhi_2042_, lean_object* v_pivot_2043_, lean_object* v_as_2044_, lean_object* v_i_2045_, lean_object* v_k_2046_, lean_object* v_ilo_2047_, lean_object* v_ik_2048_, lean_object* v_w_2049_){
_start:
{
lean_object* v_res_2050_; 
v_res_2050_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__1_spec__2(v_n_2039_, v_lo_2040_, v_hi_2041_, v_hhi_2042_, v_pivot_2043_, v_as_2044_, v_i_2045_, v_k_2046_, v_ilo_2047_, v_ik_2048_, v_w_2049_);
lean_dec_ref(v_pivot_2043_);
lean_dec(v_hi_2041_);
lean_dec(v_lo_2040_);
lean_dec(v_n_2039_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_00_u03c3_2051_, lean_object* v_00_u03b1_2052_, lean_object* v_00_u03b2_2053_, lean_object* v_f_2054_, lean_object* v_x_2055_, lean_object* v_x_2056_){
_start:
{
lean_object* v___x_2057_; 
v___x_2057_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_f_2054_, v_x_2055_, v_x_2056_);
return v___x_2057_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03c3_2058_, lean_object* v_00_u03b1_2059_, lean_object* v_00_u03b2_2060_, lean_object* v_f_2061_, lean_object* v_x_2062_, lean_object* v_x_2063_){
_start:
{
lean_object* v_res_2064_; 
v_res_2064_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_00_u03c3_2058_, v_00_u03b1_2059_, v_00_u03b2_2060_, v_f_2061_, v_x_2062_, v_x_2063_);
lean_dec_ref(v_x_2062_);
return v_res_2064_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b1_2065_, lean_object* v_00_u03b2_2066_, lean_object* v_00_u03c3_2067_, lean_object* v_f_2068_, lean_object* v_as_2069_, size_t v_i_2070_, size_t v_stop_2071_, lean_object* v_b_2072_){
_start:
{
lean_object* v___x_2073_; 
v___x_2073_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg(v_f_2068_, v_as_2069_, v_i_2070_, v_stop_2071_, v_b_2072_);
return v___x_2073_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b1_2074_, lean_object* v_00_u03b2_2075_, lean_object* v_00_u03c3_2076_, lean_object* v_f_2077_, lean_object* v_as_2078_, lean_object* v_i_2079_, lean_object* v_stop_2080_, lean_object* v_b_2081_){
_start:
{
size_t v_i_boxed_2082_; size_t v_stop_boxed_2083_; lean_object* v_res_2084_; 
v_i_boxed_2082_ = lean_unbox_usize(v_i_2079_);
lean_dec(v_i_2079_);
v_stop_boxed_2083_ = lean_unbox_usize(v_stop_2080_);
lean_dec(v_stop_2080_);
v_res_2084_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3(v_00_u03b1_2074_, v_00_u03b2_2075_, v_00_u03c3_2076_, v_f_2077_, v_as_2078_, v_i_boxed_2082_, v_stop_boxed_2083_, v_b_2081_);
lean_dec_ref(v_as_2078_);
return v_res_2084_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03c3_2085_, lean_object* v_00_u03b1_2086_, lean_object* v_00_u03b2_2087_, lean_object* v_f_2088_, lean_object* v_keys_2089_, lean_object* v_vals_2090_, lean_object* v_heq_2091_, lean_object* v_i_2092_, lean_object* v_acc_2093_){
_start:
{
lean_object* v___x_2094_; 
v___x_2094_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(v_f_2088_, v_keys_2089_, v_vals_2090_, v_i_2092_, v_acc_2093_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03c3_2095_, lean_object* v_00_u03b1_2096_, lean_object* v_00_u03b2_2097_, lean_object* v_f_2098_, lean_object* v_keys_2099_, lean_object* v_vals_2100_, lean_object* v_heq_2101_, lean_object* v_i_2102_, lean_object* v_acc_2103_){
_start:
{
lean_object* v_res_2104_; 
v_res_2104_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4(v_00_u03c3_2095_, v_00_u03b1_2096_, v_00_u03b2_2097_, v_f_2098_, v_keys_2099_, v_vals_2100_, v_heq_2101_, v_i_2102_, v_acc_2103_);
lean_dec_ref(v_vals_2100_);
lean_dec_ref(v_keys_2099_);
return v_res_2104_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0_spec__0___redArg(lean_object* v_a_2105_, lean_object* v_x_2106_){
_start:
{
if (lean_obj_tag(v_x_2106_) == 0)
{
lean_object* v___x_2107_; 
v___x_2107_ = lean_box(0);
return v___x_2107_;
}
else
{
lean_object* v_key_2108_; lean_object* v_value_2109_; lean_object* v_tail_2110_; uint8_t v___x_2111_; 
v_key_2108_ = lean_ctor_get(v_x_2106_, 0);
v_value_2109_ = lean_ctor_get(v_x_2106_, 1);
v_tail_2110_ = lean_ctor_get(v_x_2106_, 2);
v___x_2111_ = lean_name_eq(v_key_2108_, v_a_2105_);
if (v___x_2111_ == 0)
{
v_x_2106_ = v_tail_2110_;
goto _start;
}
else
{
lean_object* v___x_2113_; 
lean_inc(v_value_2109_);
v___x_2113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2113_, 0, v_value_2109_);
return v___x_2113_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_a_2114_, lean_object* v_x_2115_){
_start:
{
lean_object* v_res_2116_; 
v_res_2116_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0_spec__0___redArg(v_a_2114_, v_x_2115_);
lean_dec(v_x_2115_);
lean_dec(v_a_2114_);
return v_res_2116_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0___redArg(lean_object* v_m_2117_, lean_object* v_a_2118_){
_start:
{
lean_object* v_buckets_2119_; lean_object* v___x_2120_; uint64_t v___y_2122_; 
v_buckets_2119_ = lean_ctor_get(v_m_2117_, 1);
v___x_2120_ = lean_array_get_size(v_buckets_2119_);
if (lean_obj_tag(v_a_2118_) == 0)
{
uint64_t v___x_2136_; 
v___x_2136_ = 1723ULL;
v___y_2122_ = v___x_2136_;
goto v___jp_2121_;
}
else
{
uint64_t v_hash_2137_; 
v_hash_2137_ = lean_ctor_get_uint64(v_a_2118_, sizeof(void*)*2);
v___y_2122_ = v_hash_2137_;
goto v___jp_2121_;
}
v___jp_2121_:
{
uint64_t v___x_2123_; uint64_t v___x_2124_; uint64_t v_fold_2125_; uint64_t v___x_2126_; uint64_t v___x_2127_; uint64_t v___x_2128_; size_t v___x_2129_; size_t v___x_2130_; size_t v___x_2131_; size_t v___x_2132_; size_t v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; 
v___x_2123_ = 32ULL;
v___x_2124_ = lean_uint64_shift_right(v___y_2122_, v___x_2123_);
v_fold_2125_ = lean_uint64_xor(v___y_2122_, v___x_2124_);
v___x_2126_ = 16ULL;
v___x_2127_ = lean_uint64_shift_right(v_fold_2125_, v___x_2126_);
v___x_2128_ = lean_uint64_xor(v_fold_2125_, v___x_2127_);
v___x_2129_ = lean_uint64_to_usize(v___x_2128_);
v___x_2130_ = lean_usize_of_nat(v___x_2120_);
v___x_2131_ = ((size_t)1ULL);
v___x_2132_ = lean_usize_sub(v___x_2130_, v___x_2131_);
v___x_2133_ = lean_usize_land(v___x_2129_, v___x_2132_);
v___x_2134_ = lean_array_uget_borrowed(v_buckets_2119_, v___x_2133_);
v___x_2135_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0_spec__0___redArg(v_a_2118_, v___x_2134_);
return v___x_2135_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0___redArg___boxed(lean_object* v_m_2138_, lean_object* v_a_2139_){
_start:
{
lean_object* v_res_2140_; 
v_res_2140_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0___redArg(v_m_2138_, v_a_2139_);
lean_dec(v_a_2139_);
lean_dec_ref(v_m_2138_);
return v_res_2140_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__2___redArg(lean_object* v_as_2141_, lean_object* v_k_2142_, lean_object* v_x_2143_, lean_object* v_x_2144_){
_start:
{
lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v_m_2147_; lean_object* v_a_2148_; uint8_t v___x_2149_; 
v___x_2145_ = lean_nat_add(v_x_2143_, v_x_2144_);
v___x_2146_ = lean_unsigned_to_nat(1u);
v_m_2147_ = lean_nat_shiftr(v___x_2145_, v___x_2146_);
lean_dec(v___x_2145_);
v_a_2148_ = lean_array_fget_borrowed(v_as_2141_, v_m_2147_);
v___x_2149_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocDecl_lt(v_a_2148_, v_k_2142_);
if (v___x_2149_ == 0)
{
uint8_t v___x_2150_; 
lean_dec(v_x_2144_);
v___x_2150_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocDecl_lt(v_k_2142_, v_a_2148_);
if (v___x_2150_ == 0)
{
lean_object* v___x_2151_; 
lean_dec(v_m_2147_);
lean_dec(v_x_2143_);
lean_inc(v_a_2148_);
v___x_2151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2151_, 0, v_a_2148_);
return v___x_2151_;
}
else
{
lean_object* v___x_2152_; uint8_t v___x_2153_; 
v___x_2152_ = lean_unsigned_to_nat(0u);
v___x_2153_ = lean_nat_dec_eq(v_m_2147_, v___x_2152_);
if (v___x_2153_ == 0)
{
lean_object* v___x_2154_; uint8_t v___x_2155_; 
v___x_2154_ = lean_nat_sub(v_m_2147_, v___x_2146_);
lean_dec(v_m_2147_);
v___x_2155_ = lean_nat_dec_lt(v___x_2154_, v_x_2143_);
if (v___x_2155_ == 0)
{
v_x_2144_ = v___x_2154_;
goto _start;
}
else
{
lean_object* v___x_2157_; 
lean_dec(v___x_2154_);
lean_dec(v_x_2143_);
v___x_2157_ = lean_box(0);
return v___x_2157_;
}
}
else
{
lean_object* v___x_2158_; 
lean_dec(v_m_2147_);
lean_dec(v_x_2143_);
v___x_2158_ = lean_box(0);
return v___x_2158_;
}
}
}
else
{
lean_object* v___x_2159_; uint8_t v___x_2160_; 
lean_dec(v_x_2143_);
v___x_2159_ = lean_nat_add(v_m_2147_, v___x_2146_);
lean_dec(v_m_2147_);
v___x_2160_ = lean_nat_dec_le(v___x_2159_, v_x_2144_);
if (v___x_2160_ == 0)
{
lean_object* v___x_2161_; 
lean_dec(v___x_2159_);
lean_dec(v_x_2144_);
v___x_2161_ = lean_box(0);
return v___x_2161_;
}
else
{
v_x_2143_ = v___x_2159_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__2___redArg___boxed(lean_object* v_as_2163_, lean_object* v_k_2164_, lean_object* v_x_2165_, lean_object* v_x_2166_){
_start:
{
lean_object* v_res_2167_; 
v_res_2167_ = l_Array_binSearchAux___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__2___redArg(v_as_2163_, v_k_2164_, v_x_2165_, v_x_2166_);
lean_dec_ref(v_k_2164_);
lean_dec_ref(v_as_2163_);
return v_res_2167_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2_spec__3___redArg(lean_object* v_keys_2168_, lean_object* v_vals_2169_, lean_object* v_i_2170_, lean_object* v_k_2171_){
_start:
{
lean_object* v___x_2172_; uint8_t v___x_2173_; 
v___x_2172_ = lean_array_get_size(v_keys_2168_);
v___x_2173_ = lean_nat_dec_lt(v_i_2170_, v___x_2172_);
if (v___x_2173_ == 0)
{
lean_object* v___x_2174_; 
lean_dec(v_i_2170_);
v___x_2174_ = lean_box(0);
return v___x_2174_;
}
else
{
lean_object* v_k_x27_2175_; uint8_t v___x_2176_; 
v_k_x27_2175_ = lean_array_fget_borrowed(v_keys_2168_, v_i_2170_);
v___x_2176_ = lean_name_eq(v_k_2171_, v_k_x27_2175_);
if (v___x_2176_ == 0)
{
lean_object* v___x_2177_; lean_object* v___x_2178_; 
v___x_2177_ = lean_unsigned_to_nat(1u);
v___x_2178_ = lean_nat_add(v_i_2170_, v___x_2177_);
lean_dec(v_i_2170_);
v_i_2170_ = v___x_2178_;
goto _start;
}
else
{
lean_object* v___x_2180_; lean_object* v___x_2181_; 
v___x_2180_ = lean_array_fget_borrowed(v_vals_2169_, v_i_2170_);
lean_dec(v_i_2170_);
lean_inc(v___x_2180_);
v___x_2181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2181_, 0, v___x_2180_);
return v___x_2181_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_keys_2182_, lean_object* v_vals_2183_, lean_object* v_i_2184_, lean_object* v_k_2185_){
_start:
{
lean_object* v_res_2186_; 
v_res_2186_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2_spec__3___redArg(v_keys_2182_, v_vals_2183_, v_i_2184_, v_k_2185_);
lean_dec(v_k_2185_);
lean_dec_ref(v_vals_2183_);
lean_dec_ref(v_keys_2182_);
return v_res_2186_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2___redArg(lean_object* v_x_2187_, size_t v_x_2188_, lean_object* v_x_2189_){
_start:
{
if (lean_obj_tag(v_x_2187_) == 0)
{
lean_object* v_es_2190_; lean_object* v___x_2191_; size_t v___x_2192_; size_t v___x_2193_; lean_object* v_j_2194_; lean_object* v___x_2195_; 
v_es_2190_ = lean_ctor_get(v_x_2187_, 0);
v___x_2191_ = lean_box(2);
v___x_2192_ = ((size_t)31ULL);
v___x_2193_ = lean_usize_land(v_x_2188_, v___x_2192_);
v_j_2194_ = lean_usize_to_nat(v___x_2193_);
v___x_2195_ = lean_array_get_borrowed(v___x_2191_, v_es_2190_, v_j_2194_);
lean_dec(v_j_2194_);
switch(lean_obj_tag(v___x_2195_))
{
case 0:
{
lean_object* v_key_2196_; lean_object* v_val_2197_; uint8_t v___x_2198_; 
v_key_2196_ = lean_ctor_get(v___x_2195_, 0);
v_val_2197_ = lean_ctor_get(v___x_2195_, 1);
v___x_2198_ = lean_name_eq(v_x_2189_, v_key_2196_);
if (v___x_2198_ == 0)
{
lean_object* v___x_2199_; 
v___x_2199_ = lean_box(0);
return v___x_2199_;
}
else
{
lean_object* v___x_2200_; 
lean_inc(v_val_2197_);
v___x_2200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2200_, 0, v_val_2197_);
return v___x_2200_;
}
}
case 1:
{
lean_object* v_node_2201_; size_t v___x_2202_; size_t v___x_2203_; 
v_node_2201_ = lean_ctor_get(v___x_2195_, 0);
v___x_2202_ = ((size_t)5ULL);
v___x_2203_ = lean_usize_shift_right(v_x_2188_, v___x_2202_);
v_x_2187_ = v_node_2201_;
v_x_2188_ = v___x_2203_;
goto _start;
}
default: 
{
lean_object* v___x_2205_; 
v___x_2205_ = lean_box(0);
return v___x_2205_;
}
}
}
else
{
lean_object* v_ks_2206_; lean_object* v_vs_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; 
v_ks_2206_ = lean_ctor_get(v_x_2187_, 0);
v_vs_2207_ = lean_ctor_get(v_x_2187_, 1);
v___x_2208_ = lean_unsigned_to_nat(0u);
v___x_2209_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2_spec__3___redArg(v_ks_2206_, v_vs_2207_, v___x_2208_, v_x_2189_);
return v___x_2209_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2___redArg___boxed(lean_object* v_x_2210_, lean_object* v_x_2211_, lean_object* v_x_2212_){
_start:
{
size_t v_x_1446__boxed_2213_; lean_object* v_res_2214_; 
v_x_1446__boxed_2213_ = lean_unbox_usize(v_x_2211_);
lean_dec(v_x_2211_);
v_res_2214_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2___redArg(v_x_2210_, v_x_1446__boxed_2213_, v_x_2212_);
lean_dec(v_x_2212_);
lean_dec_ref(v_x_2210_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1___redArg(lean_object* v_x_2215_, lean_object* v_x_2216_){
_start:
{
uint64_t v___y_2218_; 
if (lean_obj_tag(v_x_2216_) == 0)
{
uint64_t v___x_2221_; 
v___x_2221_ = 1723ULL;
v___y_2218_ = v___x_2221_;
goto v___jp_2217_;
}
else
{
uint64_t v_hash_2222_; 
v_hash_2222_ = lean_ctor_get_uint64(v_x_2216_, sizeof(void*)*2);
v___y_2218_ = v_hash_2222_;
goto v___jp_2217_;
}
v___jp_2217_:
{
size_t v___x_2219_; lean_object* v___x_2220_; 
v___x_2219_ = lean_uint64_to_usize(v___y_2218_);
v___x_2220_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2___redArg(v_x_2215_, v___x_2219_, v_x_2216_);
return v___x_2220_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1___redArg___boxed(lean_object* v_x_2223_, lean_object* v_x_2224_){
_start:
{
lean_object* v_res_2225_; 
v_res_2225_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1___redArg(v_x_2223_, v_x_2224_);
lean_dec(v_x_2224_);
lean_dec_ref(v_x_2223_);
return v_res_2225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f___redArg(lean_object* v_declName_2226_, lean_object* v_a_2227_){
_start:
{
lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v_env_2231_; lean_object* v___x_2242_; 
v___x_2229_ = l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default;
v___x_2230_ = lean_st_ref_get(v_a_2227_);
v_env_2231_ = lean_ctor_get(v___x_2230_, 0);
lean_inc_ref(v_env_2231_);
lean_dec(v___x_2230_);
v___x_2242_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2231_, v_declName_2226_);
if (lean_obj_tag(v___x_2242_) == 0)
{
lean_object* v___x_2243_; lean_object* v_toEnvExtension_2244_; lean_object* v_asyncMode_2245_; lean_object* v___x_2246_; uint8_t v___x_2247_; lean_object* v___x_2248_; lean_object* v_newEntries_2249_; lean_object* v___x_2250_; 
v___x_2243_ = l_Lean_Meta_Tactic_Cbv_cbvSimprocDeclExt;
v_toEnvExtension_2244_ = lean_ctor_get(v___x_2243_, 0);
v_asyncMode_2245_ = lean_ctor_get(v_toEnvExtension_2244_, 2);
v___x_2246_ = lean_box(0);
v___x_2247_ = 0;
lean_inc_ref(v_env_2231_);
v___x_2248_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2229_, v___x_2243_, v_env_2231_, v_asyncMode_2245_, v___x_2246_, v___x_2247_);
v_newEntries_2249_ = lean_ctor_get(v___x_2248_, 1);
lean_inc_ref(v_newEntries_2249_);
lean_dec(v___x_2248_);
v___x_2250_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1___redArg(v_newEntries_2249_, v_declName_2226_);
lean_dec_ref(v_newEntries_2249_);
if (lean_obj_tag(v___x_2250_) == 1)
{
lean_object* v___x_2251_; 
lean_dec_ref(v_env_2231_);
lean_dec(v_declName_2226_);
v___x_2251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2250_);
return v___x_2251_;
}
else
{
lean_dec(v___x_2250_);
goto v___jp_2232_;
}
}
else
{
lean_object* v_val_2252_; lean_object* v___x_2254_; uint8_t v_isShared_2255_; uint8_t v_isSharedCheck_2280_; 
v_val_2252_ = lean_ctor_get(v___x_2242_, 0);
v_isSharedCheck_2280_ = !lean_is_exclusive(v___x_2242_);
if (v_isSharedCheck_2280_ == 0)
{
v___x_2254_ = v___x_2242_;
v_isShared_2255_ = v_isSharedCheck_2280_;
goto v_resetjp_2253_;
}
else
{
lean_inc(v_val_2252_);
lean_dec(v___x_2242_);
v___x_2254_ = lean_box(0);
v_isShared_2255_ = v_isSharedCheck_2280_;
goto v_resetjp_2253_;
}
v_resetjp_2253_:
{
lean_object* v___x_2256_; uint8_t v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; uint8_t v___x_2261_; 
v___x_2256_ = l_Lean_Meta_Tactic_Cbv_cbvSimprocDeclExt;
v___x_2257_ = 0;
v___x_2258_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2229_, v___x_2256_, v_env_2231_, v_val_2252_, v___x_2257_);
lean_dec(v_val_2252_);
v___x_2259_ = lean_unsigned_to_nat(0u);
v___x_2260_ = lean_array_get_size(v___x_2258_);
v___x_2261_ = lean_nat_dec_lt(v___x_2259_, v___x_2260_);
if (v___x_2261_ == 0)
{
lean_dec_ref(v___x_2258_);
lean_del_object(v___x_2254_);
goto v___jp_2232_;
}
else
{
lean_object* v___x_2262_; lean_object* v___x_2263_; uint8_t v___x_2264_; 
v___x_2262_ = lean_unsigned_to_nat(1u);
v___x_2263_ = lean_nat_sub(v___x_2260_, v___x_2262_);
v___x_2264_ = lean_nat_dec_le(v___x_2259_, v___x_2263_);
if (v___x_2264_ == 0)
{
lean_dec(v___x_2263_);
lean_dec_ref(v___x_2258_);
lean_del_object(v___x_2254_);
goto v___jp_2232_;
}
else
{
lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2265_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocOLeanEntry_default___closed__0));
lean_inc(v_declName_2226_);
v___x_2266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2266_, 0, v_declName_2226_);
lean_ctor_set(v___x_2266_, 1, v___x_2265_);
v___x_2267_ = l_Array_binSearchAux___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__2___redArg(v___x_2258_, v___x_2266_, v___x_2259_, v___x_2263_);
lean_dec_ref_known(v___x_2266_, 2);
lean_dec_ref(v___x_2258_);
if (lean_obj_tag(v___x_2267_) == 1)
{
lean_object* v_val_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2279_; 
lean_dec_ref(v_env_2231_);
lean_dec(v_declName_2226_);
v_val_2268_ = lean_ctor_get(v___x_2267_, 0);
v_isSharedCheck_2279_ = !lean_is_exclusive(v___x_2267_);
if (v_isSharedCheck_2279_ == 0)
{
v___x_2270_ = v___x_2267_;
v_isShared_2271_ = v_isSharedCheck_2279_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_val_2268_);
lean_dec(v___x_2267_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2279_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v_keys_2272_; lean_object* v___x_2274_; 
v_keys_2272_ = lean_ctor_get(v_val_2268_, 1);
lean_inc_ref(v_keys_2272_);
lean_dec(v_val_2268_);
if (v_isShared_2271_ == 0)
{
lean_ctor_set(v___x_2270_, 0, v_keys_2272_);
v___x_2274_ = v___x_2270_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v_keys_2272_);
v___x_2274_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
lean_object* v___x_2276_; 
if (v_isShared_2255_ == 0)
{
lean_ctor_set_tag(v___x_2254_, 0);
lean_ctor_set(v___x_2254_, 0, v___x_2274_);
v___x_2276_ = v___x_2254_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v___x_2274_);
v___x_2276_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
return v___x_2276_;
}
}
}
}
else
{
lean_dec(v___x_2267_);
lean_del_object(v___x_2254_);
goto v___jp_2232_;
}
}
}
}
}
v___jp_2232_:
{
lean_object* v___x_2233_; lean_object* v_toEnvExtension_2234_; lean_object* v_asyncMode_2235_; lean_object* v___x_2236_; uint8_t v___x_2237_; lean_object* v___x_2238_; lean_object* v_builtin_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; 
v___x_2233_ = l_Lean_Meta_Tactic_Cbv_cbvSimprocDeclExt;
v_toEnvExtension_2234_ = lean_ctor_get(v___x_2233_, 0);
v_asyncMode_2235_ = lean_ctor_get(v_toEnvExtension_2234_, 2);
v___x_2236_ = lean_box(0);
v___x_2237_ = 0;
v___x_2238_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2229_, v___x_2233_, v_env_2231_, v_asyncMode_2235_, v___x_2236_, v___x_2237_);
v_builtin_2239_ = lean_ctor_get(v___x_2238_, 0);
lean_inc_ref(v_builtin_2239_);
lean_dec(v___x_2238_);
v___x_2240_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0___redArg(v_builtin_2239_, v_declName_2226_);
lean_dec(v_declName_2226_);
lean_dec_ref(v_builtin_2239_);
v___x_2241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2240_);
return v___x_2241_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f___redArg___boxed(lean_object* v_declName_2281_, lean_object* v_a_2282_, lean_object* v_a_2283_){
_start:
{
lean_object* v_res_2284_; 
v_res_2284_ = l_Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f___redArg(v_declName_2281_, v_a_2282_);
lean_dec(v_a_2282_);
return v_res_2284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f(lean_object* v_declName_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_){
_start:
{
lean_object* v___x_2289_; 
v___x_2289_ = l_Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f___redArg(v_declName_2285_, v_a_2287_);
return v___x_2289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f___boxed(lean_object* v_declName_2290_, lean_object* v_a_2291_, lean_object* v_a_2292_, lean_object* v_a_2293_){
_start:
{
lean_object* v_res_2294_; 
v_res_2294_ = l_Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f(v_declName_2290_, v_a_2291_, v_a_2292_);
lean_dec(v_a_2292_);
lean_dec_ref(v_a_2291_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0(lean_object* v_00_u03b2_2295_, lean_object* v_m_2296_, lean_object* v_a_2297_){
_start:
{
lean_object* v___x_2298_; 
v___x_2298_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0___redArg(v_m_2296_, v_a_2297_);
return v___x_2298_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0___boxed(lean_object* v_00_u03b2_2299_, lean_object* v_m_2300_, lean_object* v_a_2301_){
_start:
{
lean_object* v_res_2302_; 
v_res_2302_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0(v_00_u03b2_2299_, v_m_2300_, v_a_2301_);
lean_dec(v_a_2301_);
lean_dec_ref(v_m_2300_);
return v_res_2302_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1(lean_object* v_00_u03b2_2303_, lean_object* v_x_2304_, lean_object* v_x_2305_){
_start:
{
lean_object* v___x_2306_; 
v___x_2306_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1___redArg(v_x_2304_, v_x_2305_);
return v___x_2306_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1___boxed(lean_object* v_00_u03b2_2307_, lean_object* v_x_2308_, lean_object* v_x_2309_){
_start:
{
lean_object* v_res_2310_; 
v_res_2310_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1(v_00_u03b2_2307_, v_x_2308_, v_x_2309_);
lean_dec(v_x_2309_);
lean_dec_ref(v_x_2308_);
return v_res_2310_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__2(lean_object* v_as_2311_, lean_object* v_k_2312_, lean_object* v_x_2313_, lean_object* v_x_2314_, lean_object* v_x_2315_){
_start:
{
lean_object* v___x_2316_; 
v___x_2316_ = l_Array_binSearchAux___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__2___redArg(v_as_2311_, v_k_2312_, v_x_2313_, v_x_2314_);
return v___x_2316_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__2___boxed(lean_object* v_as_2317_, lean_object* v_k_2318_, lean_object* v_x_2319_, lean_object* v_x_2320_, lean_object* v_x_2321_){
_start:
{
lean_object* v_res_2322_; 
v_res_2322_ = l_Array_binSearchAux___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__2(v_as_2317_, v_k_2318_, v_x_2319_, v_x_2320_, v_x_2321_);
lean_dec_ref(v_k_2318_);
lean_dec_ref(v_as_2317_);
return v_res_2322_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0_spec__0(lean_object* v_00_u03b2_2323_, lean_object* v_a_2324_, lean_object* v_x_2325_){
_start:
{
lean_object* v___x_2326_; 
v___x_2326_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0_spec__0___redArg(v_a_2324_, v_x_2325_);
return v___x_2326_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2327_, lean_object* v_a_2328_, lean_object* v_x_2329_){
_start:
{
lean_object* v_res_2330_; 
v_res_2330_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0_spec__0(v_00_u03b2_2327_, v_a_2328_, v_x_2329_);
lean_dec(v_x_2329_);
lean_dec(v_a_2328_);
return v_res_2330_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2(lean_object* v_00_u03b2_2331_, lean_object* v_x_2332_, size_t v_x_2333_, lean_object* v_x_2334_){
_start:
{
lean_object* v___x_2335_; 
v___x_2335_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2___redArg(v_x_2332_, v_x_2333_, v_x_2334_);
return v___x_2335_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2336_, lean_object* v_x_2337_, lean_object* v_x_2338_, lean_object* v_x_2339_){
_start:
{
size_t v_x_1634__boxed_2340_; lean_object* v_res_2341_; 
v_x_1634__boxed_2340_ = lean_unbox_usize(v_x_2338_);
lean_dec(v_x_2338_);
v_res_2341_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2(v_00_u03b2_2336_, v_x_2337_, v_x_1634__boxed_2340_, v_x_2339_);
lean_dec(v_x_2339_);
lean_dec_ref(v_x_2337_);
return v_res_2341_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_2342_, lean_object* v_keys_2343_, lean_object* v_vals_2344_, lean_object* v_heq_2345_, lean_object* v_i_2346_, lean_object* v_k_2347_){
_start:
{
lean_object* v___x_2348_; 
v___x_2348_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2_spec__3___redArg(v_keys_2343_, v_vals_2344_, v_i_2346_, v_k_2347_);
return v___x_2348_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03b2_2349_, lean_object* v_keys_2350_, lean_object* v_vals_2351_, lean_object* v_heq_2352_, lean_object* v_i_2353_, lean_object* v_k_2354_){
_start:
{
lean_object* v_res_2355_; 
v_res_2355_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__1_spec__2_spec__3(v_00_u03b2_2349_, v_keys_2350_, v_vals_2351_, v_heq_2352_, v_i_2353_, v_k_2354_);
lean_dec(v_k_2354_);
lean_dec_ref(v_vals_2351_);
lean_dec_ref(v_keys_2350_);
return v_res_2355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isCbvSimproc___redArg(lean_object* v_declName_2356_, lean_object* v_a_2357_){
_start:
{
lean_object* v___x_2359_; lean_object* v_a_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2374_; 
v___x_2359_ = l_Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f___redArg(v_declName_2356_, v_a_2357_);
v_a_2360_ = lean_ctor_get(v___x_2359_, 0);
v_isSharedCheck_2374_ = !lean_is_exclusive(v___x_2359_);
if (v_isSharedCheck_2374_ == 0)
{
v___x_2362_ = v___x_2359_;
v_isShared_2363_ = v_isSharedCheck_2374_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_dec(v___x_2359_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2374_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
if (lean_obj_tag(v_a_2360_) == 0)
{
uint8_t v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2367_; 
v___x_2364_ = 0;
v___x_2365_ = lean_box(v___x_2364_);
if (v_isShared_2363_ == 0)
{
lean_ctor_set(v___x_2362_, 0, v___x_2365_);
v___x_2367_ = v___x_2362_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v___x_2365_);
v___x_2367_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
return v___x_2367_;
}
}
else
{
uint8_t v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2372_; 
lean_dec_ref_known(v_a_2360_, 1);
v___x_2369_ = 1;
v___x_2370_ = lean_box(v___x_2369_);
if (v_isShared_2363_ == 0)
{
lean_ctor_set(v___x_2362_, 0, v___x_2370_);
v___x_2372_ = v___x_2362_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v___x_2370_);
v___x_2372_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
return v___x_2372_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isCbvSimproc___redArg___boxed(lean_object* v_declName_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_){
_start:
{
lean_object* v_res_2378_; 
v_res_2378_ = l_Lean_Meta_Tactic_Cbv_isCbvSimproc___redArg(v_declName_2375_, v_a_2376_);
lean_dec(v_a_2376_);
return v_res_2378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isCbvSimproc(lean_object* v_declName_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_){
_start:
{
lean_object* v___x_2383_; 
v___x_2383_ = l_Lean_Meta_Tactic_Cbv_isCbvSimproc___redArg(v_declName_2379_, v_a_2381_);
return v___x_2383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isCbvSimproc___boxed(lean_object* v_declName_2384_, lean_object* v_a_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_){
_start:
{
lean_object* v_res_2388_; 
v_res_2388_ = l_Lean_Meta_Tactic_Cbv_isCbvSimproc(v_declName_2384_, v_a_2385_, v_a_2386_);
lean_dec(v_a_2386_);
lean_dec_ref(v_a_2385_);
return v_res_2388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isBuiltinCbvSimproc___redArg(lean_object* v_declName_2389_, lean_object* v_a_2390_){
_start:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v_env_2394_; lean_object* v___x_2395_; lean_object* v_toEnvExtension_2396_; lean_object* v_asyncMode_2397_; lean_object* v___x_2398_; uint8_t v___x_2399_; lean_object* v___x_2400_; lean_object* v_builtin_2401_; uint8_t v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; 
v___x_2392_ = l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default;
v___x_2393_ = lean_st_ref_get(v_a_2390_);
v_env_2394_ = lean_ctor_get(v___x_2393_, 0);
lean_inc_ref(v_env_2394_);
lean_dec(v___x_2393_);
v___x_2395_ = l_Lean_Meta_Tactic_Cbv_cbvSimprocDeclExt;
v_toEnvExtension_2396_ = lean_ctor_get(v___x_2395_, 0);
v_asyncMode_2397_ = lean_ctor_get(v_toEnvExtension_2396_, 2);
v___x_2398_ = lean_box(0);
v___x_2399_ = 0;
v___x_2400_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2392_, v___x_2395_, v_env_2394_, v_asyncMode_2397_, v___x_2398_, v___x_2399_);
v_builtin_2401_ = lean_ctor_get(v___x_2400_, 0);
lean_inc_ref(v_builtin_2401_);
lean_dec(v___x_2400_);
v___x_2402_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc_spec__0___redArg(v_builtin_2401_, v_declName_2389_);
lean_dec_ref(v_builtin_2401_);
v___x_2403_ = lean_box(v___x_2402_);
v___x_2404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2404_, 0, v___x_2403_);
return v___x_2404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isBuiltinCbvSimproc___redArg___boxed(lean_object* v_declName_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_){
_start:
{
lean_object* v_res_2408_; 
v_res_2408_ = l_Lean_Meta_Tactic_Cbv_isBuiltinCbvSimproc___redArg(v_declName_2405_, v_a_2406_);
lean_dec(v_a_2406_);
lean_dec(v_declName_2405_);
return v_res_2408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isBuiltinCbvSimproc(lean_object* v_declName_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_){
_start:
{
lean_object* v___x_2413_; 
v___x_2413_ = l_Lean_Meta_Tactic_Cbv_isBuiltinCbvSimproc___redArg(v_declName_2409_, v_a_2411_);
return v___x_2413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_isBuiltinCbvSimproc___boxed(lean_object* v_declName_2414_, lean_object* v_a_2415_, lean_object* v_a_2416_, lean_object* v_a_2417_){
_start:
{
lean_object* v_res_2418_; 
v_res_2418_ = l_Lean_Meta_Tactic_Cbv_isBuiltinCbvSimproc(v_declName_2414_, v_a_2415_, v_a_2416_);
lean_dec(v_a_2416_);
lean_dec_ref(v_a_2415_);
lean_dec(v_declName_2414_);
return v_res_2418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___lam__0(lean_object* v_declName_2419_, lean_object* v_keys_2420_, lean_object* v_ps_2421_){
_start:
{
lean_object* v_state_2422_; lean_object* v_importedEntries_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2440_; 
v_state_2422_ = lean_ctor_get(v_ps_2421_, 1);
v_importedEntries_2423_ = lean_ctor_get(v_ps_2421_, 0);
v_isSharedCheck_2440_ = !lean_is_exclusive(v_ps_2421_);
if (v_isSharedCheck_2440_ == 0)
{
v___x_2425_ = v_ps_2421_;
v_isShared_2426_ = v_isSharedCheck_2440_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_state_2422_);
lean_inc(v_importedEntries_2423_);
lean_dec(v_ps_2421_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2440_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v_builtin_2427_; lean_object* v_newEntries_2428_; lean_object* v___x_2430_; uint8_t v_isShared_2431_; uint8_t v_isSharedCheck_2439_; 
v_builtin_2427_ = lean_ctor_get(v_state_2422_, 0);
v_newEntries_2428_ = lean_ctor_get(v_state_2422_, 1);
v_isSharedCheck_2439_ = !lean_is_exclusive(v_state_2422_);
if (v_isSharedCheck_2439_ == 0)
{
v___x_2430_ = v_state_2422_;
v_isShared_2431_ = v_isSharedCheck_2439_;
goto v_resetjp_2429_;
}
else
{
lean_inc(v_newEntries_2428_);
lean_inc(v_builtin_2427_);
lean_dec(v_state_2422_);
v___x_2430_ = lean_box(0);
v_isShared_2431_ = v_isSharedCheck_2439_;
goto v_resetjp_2429_;
}
v_resetjp_2429_:
{
lean_object* v___x_2432_; lean_object* v___x_2434_; 
v___x_2432_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore_spec__2___redArg(v_newEntries_2428_, v_declName_2419_, v_keys_2420_);
if (v_isShared_2431_ == 0)
{
lean_ctor_set(v___x_2430_, 1, v___x_2432_);
v___x_2434_ = v___x_2430_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v_builtin_2427_);
lean_ctor_set(v_reuseFailAlloc_2438_, 1, v___x_2432_);
v___x_2434_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
lean_object* v___x_2436_; 
if (v_isShared_2426_ == 0)
{
lean_ctor_set(v___x_2425_, 1, v___x_2434_);
v___x_2436_ = v___x_2425_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v_importedEntries_2423_);
lean_ctor_set(v_reuseFailAlloc_2437_, 1, v___x_2434_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
return v___x_2436_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2441_; lean_object* v___x_2442_; 
v___x_2441_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0);
v___x_2442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2442_, 0, v___x_2441_);
return v___x_2442_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; 
v___x_2443_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0);
v___x_2444_ = lean_unsigned_to_nat(0u);
v___x_2445_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2444_);
lean_ctor_set(v___x_2445_, 1, v___x_2444_);
lean_ctor_set(v___x_2445_, 2, v___x_2444_);
lean_ctor_set(v___x_2445_, 3, v___x_2444_);
lean_ctor_set(v___x_2445_, 4, v___x_2443_);
lean_ctor_set(v___x_2445_, 5, v___x_2443_);
lean_ctor_set(v___x_2445_, 6, v___x_2443_);
lean_ctor_set(v___x_2445_, 7, v___x_2443_);
lean_ctor_set(v___x_2445_, 8, v___x_2443_);
lean_ctor_set(v___x_2445_, 9, v___x_2443_);
lean_ctor_set(v___x_2445_, 10, v___x_2443_);
return v___x_2445_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2446_ = lean_unsigned_to_nat(32u);
v___x_2447_ = lean_mk_empty_array_with_capacity(v___x_2446_);
v___x_2448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2447_);
return v___x_2448_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__3(void){
_start:
{
size_t v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; 
v___x_2449_ = ((size_t)5ULL);
v___x_2450_ = lean_unsigned_to_nat(0u);
v___x_2451_ = lean_unsigned_to_nat(32u);
v___x_2452_ = lean_mk_empty_array_with_capacity(v___x_2451_);
v___x_2453_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__2);
v___x_2454_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2454_, 0, v___x_2453_);
lean_ctor_set(v___x_2454_, 1, v___x_2452_);
lean_ctor_set(v___x_2454_, 2, v___x_2450_);
lean_ctor_set(v___x_2454_, 3, v___x_2450_);
lean_ctor_set_usize(v___x_2454_, 4, v___x_2449_);
return v___x_2454_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
v___x_2455_ = lean_box(1);
v___x_2456_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__3);
v___x_2457_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0);
v___x_2458_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2458_, 0, v___x_2457_);
lean_ctor_set(v___x_2458_, 1, v___x_2456_);
lean_ctor_set(v___x_2458_, 2, v___x_2455_);
return v___x_2458_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0(lean_object* v_msgData_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_){
_start:
{
lean_object* v___x_2463_; lean_object* v_toCold_2464_; lean_object* v_env_2465_; lean_object* v_options_2466_; uint8_t v___x_2467_; lean_object* v_env_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2463_ = lean_st_ref_get(v___y_2461_);
v_toCold_2464_ = lean_ctor_get(v___y_2460_, 0);
v_env_2465_ = lean_ctor_get(v___x_2463_, 0);
lean_inc_ref(v_env_2465_);
lean_dec(v___x_2463_);
v_options_2466_ = lean_ctor_get(v_toCold_2464_, 2);
v___x_2467_ = 0;
v_env_2468_ = l_Lean_Environment_setRecordingDeps(v_env_2465_, v___x_2467_);
v___x_2469_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__1);
v___x_2470_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__4);
lean_inc_ref(v_options_2466_);
v___x_2471_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2471_, 0, v_env_2468_);
lean_ctor_set(v___x_2471_, 1, v___x_2469_);
lean_ctor_set(v___x_2471_, 2, v___x_2470_);
lean_ctor_set(v___x_2471_, 3, v_options_2466_);
v___x_2472_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2472_, 0, v___x_2471_);
lean_ctor_set(v___x_2472_, 1, v_msgData_2459_);
v___x_2473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2473_, 0, v___x_2472_);
return v___x_2473_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___boxed(lean_object* v_msgData_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_){
_start:
{
lean_object* v_res_2478_; 
v_res_2478_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0(v_msgData_2474_, v___y_2475_, v___y_2476_);
lean_dec(v___y_2476_);
lean_dec_ref(v___y_2475_);
return v_res_2478_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0___redArg(lean_object* v_msg_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_){
_start:
{
lean_object* v_ref_2483_; lean_object* v___x_2484_; lean_object* v_a_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2493_; 
v_ref_2483_ = lean_ctor_get(v___y_2480_, 2);
v___x_2484_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0(v_msg_2479_, v___y_2480_, v___y_2481_);
v_a_2485_ = lean_ctor_get(v___x_2484_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2484_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2487_ = v___x_2484_;
v_isShared_2488_ = v_isSharedCheck_2493_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_a_2485_);
lean_dec(v___x_2484_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2493_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___x_2489_; lean_object* v___x_2491_; 
lean_inc(v_ref_2483_);
v___x_2489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2489_, 0, v_ref_2483_);
lean_ctor_set(v___x_2489_, 1, v_a_2485_);
if (v_isShared_2488_ == 0)
{
lean_ctor_set_tag(v___x_2487_, 1);
lean_ctor_set(v___x_2487_, 0, v___x_2489_);
v___x_2491_ = v___x_2487_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v___x_2489_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
return v___x_2491_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0___redArg___boxed(lean_object* v_msg_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_){
_start:
{
lean_object* v_res_2498_; 
v_res_2498_ = l_Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0___redArg(v_msg_2494_, v___y_2495_, v___y_2496_);
lean_dec(v___y_2496_);
lean_dec_ref(v___y_2495_);
return v_res_2498_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__0(void){
_start:
{
lean_object* v___x_2499_; lean_object* v___x_2500_; 
v___x_2499_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0);
v___x_2500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2500_, 0, v___x_2499_);
return v___x_2500_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__1(void){
_start:
{
lean_object* v___x_2501_; lean_object* v___x_2502_; 
v___x_2501_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__0, &l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__0_once, _init_l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__0);
v___x_2502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2502_, 0, v___x_2501_);
lean_ctor_set(v___x_2502_, 1, v___x_2501_);
return v___x_2502_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__3(void){
_start:
{
lean_object* v___x_2504_; lean_object* v___x_2505_; 
v___x_2504_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__2));
v___x_2505_ = l_Lean_stringToMessageData(v___x_2504_);
return v___x_2505_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__4(void){
_start:
{
lean_object* v___x_2506_; lean_object* v___x_2507_; 
v___x_2506_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_registerBuiltinCbvSimproc___closed__3));
v___x_2507_ = l_Lean_stringToMessageData(v___x_2506_);
return v___x_2507_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__6(void){
_start:
{
lean_object* v___x_2509_; lean_object* v___x_2510_; 
v___x_2509_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__5));
v___x_2510_ = l_Lean_stringToMessageData(v___x_2509_);
return v___x_2510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_registerCbvSimproc(lean_object* v_declName_2511_, lean_object* v_keys_2512_, lean_object* v_a_2513_, lean_object* v_a_2514_){
_start:
{
lean_object* v_nextMacroScope_2517_; lean_object* v_ngen_2518_; lean_object* v_auxDeclNGen_2519_; lean_object* v_traceState_2520_; lean_object* v_recordedDeps_2521_; lean_object* v_messages_2522_; lean_object* v_infoState_2523_; lean_object* v_snapshotTasks_2524_; lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v___y_2527_; lean_object* v___f_2532_; lean_object* v___y_2534_; lean_object* v___y_2556_; lean_object* v___y_2557_; lean_object* v___x_2576_; lean_object* v_env_2577_; lean_object* v___x_2578_; 
lean_inc(v_declName_2511_);
v___f_2532_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___lam__0), 3, 2);
lean_closure_set(v___f_2532_, 0, v_declName_2511_);
lean_closure_set(v___f_2532_, 1, v_keys_2512_);
v___x_2576_ = lean_st_ref_get(v_a_2514_);
v_env_2577_ = lean_ctor_get(v___x_2576_, 0);
lean_inc_ref(v_env_2577_);
lean_dec(v___x_2576_);
v___x_2578_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2577_, v_declName_2511_);
lean_dec_ref(v_env_2577_);
if (lean_obj_tag(v___x_2578_) == 0)
{
v___y_2556_ = v_a_2513_;
v___y_2557_ = v_a_2514_;
goto v___jp_2555_;
}
else
{
uint8_t v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
lean_dec_ref_known(v___x_2578_, 1);
lean_dec_ref(v___f_2532_);
v___x_2579_ = 0;
v___x_2580_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__3, &l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__3_once, _init_l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__3);
v___x_2581_ = l_Lean_MessageData_ofConstName(v_declName_2511_, v___x_2579_);
v___x_2582_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2582_, 0, v___x_2580_);
lean_ctor_set(v___x_2582_, 1, v___x_2581_);
v___x_2583_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__6, &l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__6_once, _init_l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__6);
v___x_2584_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2584_, 0, v___x_2582_);
lean_ctor_set(v___x_2584_, 1, v___x_2583_);
v___x_2585_ = l_Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0___redArg(v___x_2584_, v_a_2513_, v_a_2514_);
return v___x_2585_;
}
v___jp_2516_:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2528_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__1, &l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__1);
v___x_2529_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_2529_, 0, v___y_2527_);
lean_ctor_set(v___x_2529_, 1, v_nextMacroScope_2517_);
lean_ctor_set(v___x_2529_, 2, v_ngen_2518_);
lean_ctor_set(v___x_2529_, 3, v_auxDeclNGen_2519_);
lean_ctor_set(v___x_2529_, 4, v_traceState_2520_);
lean_ctor_set(v___x_2529_, 5, v___x_2528_);
lean_ctor_set(v___x_2529_, 6, v_recordedDeps_2521_);
lean_ctor_set(v___x_2529_, 7, v_messages_2522_);
lean_ctor_set(v___x_2529_, 8, v_infoState_2523_);
lean_ctor_set(v___x_2529_, 9, v_snapshotTasks_2524_);
v___x_2530_ = lean_st_ref_put(v___y_2525_, v___x_2529_);
v___x_2531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2531_, 0, v___y_2526_);
return v___x_2531_;
}
v___jp_2533_:
{
lean_object* v___x_2535_; lean_object* v_env_2536_; lean_object* v_nextMacroScope_2537_; lean_object* v_ngen_2538_; lean_object* v_auxDeclNGen_2539_; lean_object* v_traceState_2540_; lean_object* v_recordedDeps_2541_; lean_object* v_messages_2542_; lean_object* v_infoState_2543_; lean_object* v_snapshotTasks_2544_; lean_object* v___x_2545_; lean_object* v_toEnvExtension_2546_; lean_object* v_asyncMode_2547_; uint8_t v_logWrites_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; uint8_t v___x_2551_; 
v___x_2535_ = lean_st_ref_take(v___y_2534_);
v_env_2536_ = lean_ctor_get(v___x_2535_, 0);
lean_inc_ref(v_env_2536_);
v_nextMacroScope_2537_ = lean_ctor_get(v___x_2535_, 1);
lean_inc(v_nextMacroScope_2537_);
v_ngen_2538_ = lean_ctor_get(v___x_2535_, 2);
lean_inc_ref(v_ngen_2538_);
v_auxDeclNGen_2539_ = lean_ctor_get(v___x_2535_, 3);
lean_inc_ref(v_auxDeclNGen_2539_);
v_traceState_2540_ = lean_ctor_get(v___x_2535_, 4);
lean_inc_ref(v_traceState_2540_);
v_recordedDeps_2541_ = lean_ctor_get(v___x_2535_, 6);
lean_inc_ref(v_recordedDeps_2541_);
v_messages_2542_ = lean_ctor_get(v___x_2535_, 7);
lean_inc_ref(v_messages_2542_);
v_infoState_2543_ = lean_ctor_get(v___x_2535_, 8);
lean_inc_ref(v_infoState_2543_);
v_snapshotTasks_2544_ = lean_ctor_get(v___x_2535_, 9);
lean_inc_ref(v_snapshotTasks_2544_);
lean_dec(v___x_2535_);
v___x_2545_ = l_Lean_Meta_Tactic_Cbv_cbvSimprocDeclExt;
v_toEnvExtension_2546_ = lean_ctor_get(v___x_2545_, 0);
v_asyncMode_2547_ = lean_ctor_get(v_toEnvExtension_2546_, 2);
v_logWrites_2548_ = lean_ctor_get_uint8(v_toEnvExtension_2546_, sizeof(void*)*6);
v___x_2549_ = lean_box(0);
v___x_2550_ = lean_box(0);
v___x_2551_ = 1;
if (v_logWrites_2548_ == 0)
{
lean_object* v___x_2552_; 
lean_inc_ref(v_toEnvExtension_2546_);
v___x_2552_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2546_, v_env_2536_, v___f_2532_, v_asyncMode_2547_, v___x_2550_, v___x_2551_);
v_nextMacroScope_2517_ = v_nextMacroScope_2537_;
v_ngen_2518_ = v_ngen_2538_;
v_auxDeclNGen_2519_ = v_auxDeclNGen_2539_;
v_traceState_2520_ = v_traceState_2540_;
v_recordedDeps_2521_ = v_recordedDeps_2541_;
v_messages_2522_ = v_messages_2542_;
v_infoState_2523_ = v_infoState_2543_;
v_snapshotTasks_2524_ = v_snapshotTasks_2544_;
v___y_2525_ = v___y_2534_;
v___y_2526_ = v___x_2549_;
v___y_2527_ = v___x_2552_;
goto v___jp_2516_;
}
else
{
lean_object* v___x_2553_; lean_object* v___x_2554_; 
lean_inc_ref_n(v_toEnvExtension_2546_, 2);
v___x_2553_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_2546_, v_env_2536_);
lean_dec_ref(v_env_2536_);
v___x_2554_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2546_, v___x_2553_, v___f_2532_, v_asyncMode_2547_, v___x_2550_, v___x_2551_);
v_nextMacroScope_2517_ = v_nextMacroScope_2537_;
v_ngen_2518_ = v_ngen_2538_;
v_auxDeclNGen_2519_ = v_auxDeclNGen_2539_;
v_traceState_2520_ = v_traceState_2540_;
v_recordedDeps_2521_ = v_recordedDeps_2541_;
v_messages_2522_ = v_messages_2542_;
v_infoState_2523_ = v_infoState_2543_;
v_snapshotTasks_2524_ = v_snapshotTasks_2544_;
v___y_2525_ = v___y_2534_;
v___y_2526_ = v___x_2549_;
v___y_2527_ = v___x_2554_;
goto v___jp_2516_;
}
}
v___jp_2555_:
{
lean_object* v___x_2558_; 
lean_inc(v_declName_2511_);
v___x_2558_ = l_Lean_Meta_Tactic_Cbv_isCbvSimproc___redArg(v_declName_2511_, v___y_2557_);
if (lean_obj_tag(v___x_2558_) == 0)
{
lean_object* v_a_2559_; uint8_t v___x_2560_; 
v_a_2559_ = lean_ctor_get(v___x_2558_, 0);
lean_inc(v_a_2559_);
lean_dec_ref_known(v___x_2558_, 1);
v___x_2560_ = lean_unbox(v_a_2559_);
lean_dec(v_a_2559_);
if (v___x_2560_ == 0)
{
lean_dec(v_declName_2511_);
v___y_2534_ = v___y_2557_;
goto v___jp_2533_;
}
else
{
lean_object* v___x_2561_; uint8_t v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; 
lean_dec_ref(v___f_2532_);
v___x_2561_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__3, &l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__3_once, _init_l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__3);
v___x_2562_ = 0;
v___x_2563_ = l_Lean_MessageData_ofConstName(v_declName_2511_, v___x_2562_);
v___x_2564_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2564_, 0, v___x_2561_);
lean_ctor_set(v___x_2564_, 1, v___x_2563_);
v___x_2565_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__4, &l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__4_once, _init_l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__4);
v___x_2566_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2566_, 0, v___x_2564_);
lean_ctor_set(v___x_2566_, 1, v___x_2565_);
v___x_2567_ = l_Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0___redArg(v___x_2566_, v___y_2556_, v___y_2557_);
return v___x_2567_;
}
}
else
{
lean_object* v_a_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2575_; 
lean_dec_ref(v___f_2532_);
lean_dec(v_declName_2511_);
v_a_2568_ = lean_ctor_get(v___x_2558_, 0);
v_isSharedCheck_2575_ = !lean_is_exclusive(v___x_2558_);
if (v_isSharedCheck_2575_ == 0)
{
v___x_2570_ = v___x_2558_;
v_isShared_2571_ = v_isSharedCheck_2575_;
goto v_resetjp_2569_;
}
else
{
lean_inc(v_a_2568_);
lean_dec(v___x_2558_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2575_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
lean_object* v___x_2573_; 
if (v_isShared_2571_ == 0)
{
v___x_2573_ = v___x_2570_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v_a_2568_);
v___x_2573_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
return v___x_2573_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___boxed(lean_object* v_declName_2586_, lean_object* v_keys_2587_, lean_object* v_a_2588_, lean_object* v_a_2589_, lean_object* v_a_2590_){
_start:
{
lean_object* v_res_2591_; 
v_res_2591_ = l_Lean_Meta_Tactic_Cbv_registerCbvSimproc(v_declName_2586_, v_keys_2587_, v_a_2588_, v_a_2589_);
lean_dec(v_a_2589_);
lean_dec_ref(v_a_2588_);
return v_res_2591_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0(lean_object* v_00_u03b1_2592_, lean_object* v_msg_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_){
_start:
{
lean_object* v___x_2597_; 
v___x_2597_ = l_Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0___redArg(v_msg_2593_, v___y_2594_, v___y_2595_);
return v___x_2597_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0___boxed(lean_object* v_00_u03b1_2598_, lean_object* v_msg_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_){
_start:
{
lean_object* v_res_2603_; 
v_res_2603_ = l_Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0(v_00_u03b1_2598_, v_msg_2599_, v___y_2600_, v___y_2601_);
lean_dec(v___y_2601_);
lean_dec_ref(v___y_2600_);
return v_res_2603_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl_spec__0___redArg(lean_object* v_e_2604_){
_start:
{
if (lean_obj_tag(v_e_2604_) == 0)
{
lean_object* v_a_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2614_; 
v_a_2606_ = lean_ctor_get(v_e_2604_, 0);
v_isSharedCheck_2614_ = !lean_is_exclusive(v_e_2604_);
if (v_isSharedCheck_2614_ == 0)
{
v___x_2608_ = v_e_2604_;
v_isShared_2609_ = v_isSharedCheck_2614_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_a_2606_);
lean_dec(v_e_2604_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2614_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v___x_2610_; lean_object* v___x_2612_; 
v___x_2610_ = lean_mk_io_user_error(v_a_2606_);
if (v_isShared_2609_ == 0)
{
lean_ctor_set_tag(v___x_2608_, 1);
lean_ctor_set(v___x_2608_, 0, v___x_2610_);
v___x_2612_ = v___x_2608_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v___x_2610_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
else
{
lean_object* v_a_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2622_; 
v_a_2615_ = lean_ctor_get(v_e_2604_, 0);
v_isSharedCheck_2622_ = !lean_is_exclusive(v_e_2604_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2617_ = v_e_2604_;
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_a_2615_);
lean_dec(v_e_2604_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
lean_object* v___x_2620_; 
if (v_isShared_2618_ == 0)
{
lean_ctor_set_tag(v___x_2617_, 0);
v___x_2620_ = v___x_2617_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v_a_2615_);
v___x_2620_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
return v___x_2620_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl_spec__0___redArg___boxed(lean_object* v_e_2623_, lean_object* v_a_2624_){
_start:
{
lean_object* v_res_2625_; 
v_res_2625_ = l_IO_ofExcept___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl_spec__0___redArg(v_e_2623_);
return v_res_2625_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl_spec__0(lean_object* v_00_u03b1_2626_, lean_object* v_e_2627_){
_start:
{
lean_object* v___x_2629_; 
v___x_2629_ = l_IO_ofExcept___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl_spec__0___redArg(v_e_2627_);
return v___x_2629_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl_spec__0___boxed(lean_object* v_00_u03b1_2630_, lean_object* v_e_2631_, lean_object* v_a_2632_){
_start:
{
lean_object* v_res_2633_; 
v_res_2633_ = l_IO_ofExcept___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl_spec__0(v_00_u03b1_2630_, v_e_2631_);
return v_res_2633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl(lean_object* v_declName_2641_, lean_object* v_a_2642_){
_start:
{
lean_object* v_env_2644_; lean_object* v_opts_2645_; uint8_t v___x_2646_; lean_object* v___x_2647_; 
v_env_2644_ = lean_ctor_get(v_a_2642_, 0);
v_opts_2645_ = lean_ctor_get(v_a_2642_, 1);
v___x_2646_ = 0;
lean_inc(v_declName_2641_);
lean_inc_ref(v_env_2644_);
v___x_2647_ = l_Lean_Environment_find_x3f(v_env_2644_, v_declName_2641_, v___x_2646_);
if (lean_obj_tag(v___x_2647_) == 0)
{
lean_object* v___x_2648_; uint8_t v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; 
v___x_2648_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__0));
v___x_2649_ = 1;
v___x_2650_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2641_, v___x_2649_);
v___x_2651_ = lean_string_append(v___x_2648_, v___x_2650_);
lean_dec_ref(v___x_2650_);
v___x_2652_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__1));
v___x_2653_ = lean_string_append(v___x_2651_, v___x_2652_);
v___x_2654_ = lean_mk_io_user_error(v___x_2653_);
v___x_2655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2655_, 0, v___x_2654_);
return v___x_2655_;
}
else
{
lean_object* v_val_2656_; lean_object* v___x_2658_; uint8_t v_isShared_2659_; uint8_t v_isSharedCheck_2701_; 
v_val_2656_ = lean_ctor_get(v___x_2647_, 0);
v_isSharedCheck_2701_ = !lean_is_exclusive(v___x_2647_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2658_ = v___x_2647_;
v_isShared_2659_ = v_isSharedCheck_2701_;
goto v_resetjp_2657_;
}
else
{
lean_inc(v_val_2656_);
lean_dec(v___x_2647_);
v___x_2658_ = lean_box(0);
v_isShared_2659_ = v_isSharedCheck_2701_;
goto v_resetjp_2657_;
}
v_resetjp_2657_:
{
lean_object* v___x_2677_; 
v___x_2677_ = l_Lean_ConstantInfo_type(v_val_2656_);
if (lean_obj_tag(v___x_2677_) == 4)
{
lean_object* v_declName_2678_; 
v_declName_2678_ = lean_ctor_get(v___x_2677_, 0);
lean_inc(v_declName_2678_);
lean_dec_ref_known(v___x_2677_, 2);
if (lean_obj_tag(v_declName_2678_) == 1)
{
lean_object* v_pre_2679_; 
v_pre_2679_ = lean_ctor_get(v_declName_2678_, 0);
lean_inc(v_pre_2679_);
if (lean_obj_tag(v_pre_2679_) == 1)
{
lean_object* v_pre_2680_; 
v_pre_2680_ = lean_ctor_get(v_pre_2679_, 0);
lean_inc(v_pre_2680_);
if (lean_obj_tag(v_pre_2680_) == 1)
{
lean_object* v_pre_2681_; 
v_pre_2681_ = lean_ctor_get(v_pre_2680_, 0);
lean_inc(v_pre_2681_);
if (lean_obj_tag(v_pre_2681_) == 1)
{
lean_object* v_pre_2682_; 
v_pre_2682_ = lean_ctor_get(v_pre_2681_, 0);
lean_inc(v_pre_2682_);
if (lean_obj_tag(v_pre_2682_) == 1)
{
lean_object* v_pre_2683_; 
v_pre_2683_ = lean_ctor_get(v_pre_2682_, 0);
if (lean_obj_tag(v_pre_2683_) == 0)
{
lean_object* v_str_2684_; lean_object* v_str_2685_; lean_object* v_str_2686_; lean_object* v_str_2687_; lean_object* v_str_2688_; lean_object* v___x_2689_; uint8_t v___x_2690_; 
v_str_2684_ = lean_ctor_get(v_declName_2678_, 1);
lean_inc_ref(v_str_2684_);
lean_dec_ref_known(v_declName_2678_, 2);
v_str_2685_ = lean_ctor_get(v_pre_2679_, 1);
lean_inc_ref(v_str_2685_);
lean_dec_ref_known(v_pre_2679_, 2);
v_str_2686_ = lean_ctor_get(v_pre_2680_, 1);
lean_inc_ref(v_str_2686_);
lean_dec_ref_known(v_pre_2680_, 2);
v_str_2687_ = lean_ctor_get(v_pre_2681_, 1);
lean_inc_ref(v_str_2687_);
lean_dec_ref_known(v_pre_2681_, 2);
v_str_2688_ = lean_ctor_get(v_pre_2682_, 1);
lean_inc_ref(v_str_2688_);
lean_dec_ref_known(v_pre_2682_, 2);
v___x_2689_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__0));
v___x_2690_ = lean_string_dec_eq(v_str_2688_, v___x_2689_);
lean_dec_ref(v_str_2688_);
if (v___x_2690_ == 0)
{
lean_dec_ref(v_str_2687_);
lean_dec_ref(v_str_2686_);
lean_dec_ref(v_str_2685_);
lean_dec_ref(v_str_2684_);
goto v___jp_2660_;
}
else
{
lean_object* v___x_2691_; uint8_t v___x_2692_; 
v___x_2691_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__1));
v___x_2692_ = lean_string_dec_eq(v_str_2687_, v___x_2691_);
lean_dec_ref(v_str_2687_);
if (v___x_2692_ == 0)
{
lean_dec_ref(v_str_2686_);
lean_dec_ref(v_str_2685_);
lean_dec_ref(v_str_2684_);
goto v___jp_2660_;
}
else
{
lean_object* v___x_2693_; uint8_t v___x_2694_; 
v___x_2693_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__4));
v___x_2694_ = lean_string_dec_eq(v_str_2686_, v___x_2693_);
lean_dec_ref(v_str_2686_);
if (v___x_2694_ == 0)
{
lean_dec_ref(v_str_2685_);
lean_dec_ref(v_str_2684_);
goto v___jp_2660_;
}
else
{
lean_object* v___x_2695_; uint8_t v___x_2696_; 
v___x_2695_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__5));
v___x_2696_ = lean_string_dec_eq(v_str_2685_, v___x_2695_);
lean_dec_ref(v_str_2685_);
if (v___x_2696_ == 0)
{
lean_dec_ref(v_str_2684_);
goto v___jp_2660_;
}
else
{
lean_object* v___x_2697_; uint8_t v___x_2698_; 
v___x_2697_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__6));
v___x_2698_ = lean_string_dec_eq(v_str_2684_, v___x_2697_);
lean_dec_ref(v_str_2684_);
if (v___x_2698_ == 0)
{
goto v___jp_2660_;
}
else
{
lean_object* v___x_2699_; lean_object* v___x_2700_; 
lean_del_object(v___x_2658_);
lean_dec(v_val_2656_);
v___x_2699_ = l_Lean_Environment_evalConst___redArg(v_env_2644_, v_opts_2645_, v_declName_2641_, v___x_2698_);
lean_dec(v_declName_2641_);
v___x_2700_ = l_IO_ofExcept___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl_spec__0___redArg(v___x_2699_);
return v___x_2700_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_2682_, 2);
lean_dec_ref_known(v_pre_2681_, 2);
lean_dec_ref_known(v_pre_2680_, 2);
lean_dec_ref_known(v_pre_2679_, 2);
lean_dec_ref_known(v_declName_2678_, 2);
goto v___jp_2660_;
}
}
else
{
lean_dec(v_pre_2682_);
lean_dec_ref_known(v_pre_2681_, 2);
lean_dec_ref_known(v_pre_2680_, 2);
lean_dec_ref_known(v_pre_2679_, 2);
lean_dec_ref_known(v_declName_2678_, 2);
goto v___jp_2660_;
}
}
else
{
lean_dec_ref_known(v_pre_2680_, 2);
lean_dec(v_pre_2681_);
lean_dec_ref_known(v_pre_2679_, 2);
lean_dec_ref_known(v_declName_2678_, 2);
goto v___jp_2660_;
}
}
else
{
lean_dec(v_pre_2680_);
lean_dec_ref_known(v_pre_2679_, 2);
lean_dec_ref_known(v_declName_2678_, 2);
goto v___jp_2660_;
}
}
else
{
lean_dec_ref_known(v_declName_2678_, 2);
lean_dec(v_pre_2679_);
goto v___jp_2660_;
}
}
else
{
lean_dec(v_declName_2678_);
goto v___jp_2660_;
}
}
else
{
lean_dec_ref(v___x_2677_);
goto v___jp_2660_;
}
v___jp_2660_:
{
lean_object* v___x_2661_; lean_object* v___x_2662_; uint8_t v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2675_; 
v___x_2661_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__2));
v___x_2662_ = l_Lean_privateToUserName(v_declName_2641_);
v___x_2663_ = 1;
v___x_2664_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2662_, v___x_2663_);
v___x_2665_ = lean_string_append(v___x_2661_, v___x_2664_);
lean_dec_ref(v___x_2664_);
v___x_2666_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__3));
v___x_2667_ = lean_string_append(v___x_2665_, v___x_2666_);
v___x_2668_ = l_Lean_ConstantInfo_type(v_val_2656_);
lean_dec(v_val_2656_);
v___x_2669_ = lean_expr_dbg_to_string(v___x_2668_);
lean_dec_ref(v___x_2668_);
v___x_2670_ = lean_string_append(v___x_2667_, v___x_2669_);
lean_dec_ref(v___x_2669_);
v___x_2671_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__1));
v___x_2672_ = lean_string_append(v___x_2670_, v___x_2671_);
v___x_2673_ = lean_mk_io_user_error(v___x_2672_);
if (v_isShared_2659_ == 0)
{
lean_ctor_set(v___x_2658_, 0, v___x_2673_);
v___x_2675_ = v___x_2658_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v___x_2673_);
v___x_2675_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
return v___x_2675_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___boxed(lean_object* v_declName_2702_, lean_object* v_a_2703_, lean_object* v_a_2704_){
_start:
{
lean_object* v_res_2705_; 
v_res_2705_ = l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl(v_declName_2702_, v_a_2703_);
lean_dec_ref(v_a_2703_);
return v_res_2705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_toCbvSimprocEntry(lean_object* v_e_2706_, lean_object* v_a_2707_){
_start:
{
lean_object* v_declName_2709_; lean_object* v___x_2710_; 
v_declName_2709_ = lean_ctor_get(v_e_2706_, 0);
lean_inc(v_declName_2709_);
v___x_2710_ = l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl(v_declName_2709_, v_a_2707_);
if (lean_obj_tag(v___x_2710_) == 0)
{
lean_object* v_a_2711_; lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2719_; 
v_a_2711_ = lean_ctor_get(v___x_2710_, 0);
v_isSharedCheck_2719_ = !lean_is_exclusive(v___x_2710_);
if (v_isSharedCheck_2719_ == 0)
{
v___x_2713_ = v___x_2710_;
v_isShared_2714_ = v_isSharedCheck_2719_;
goto v_resetjp_2712_;
}
else
{
lean_inc(v_a_2711_);
lean_dec(v___x_2710_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2719_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
lean_object* v___x_2715_; lean_object* v___x_2717_; 
v___x_2715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2715_, 0, v_e_2706_);
lean_ctor_set(v___x_2715_, 1, v_a_2711_);
if (v_isShared_2714_ == 0)
{
lean_ctor_set(v___x_2713_, 0, v___x_2715_);
v___x_2717_ = v___x_2713_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v___x_2715_);
v___x_2717_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
return v___x_2717_;
}
}
}
else
{
lean_object* v_a_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2727_; 
lean_dec_ref(v_e_2706_);
v_a_2720_ = lean_ctor_get(v___x_2710_, 0);
v_isSharedCheck_2727_ = !lean_is_exclusive(v___x_2710_);
if (v_isSharedCheck_2727_ == 0)
{
v___x_2722_ = v___x_2710_;
v_isShared_2723_ = v_isSharedCheck_2727_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_a_2720_);
lean_dec(v___x_2710_);
v___x_2722_ = lean_box(0);
v_isShared_2723_ = v_isSharedCheck_2727_;
goto v_resetjp_2721_;
}
v_resetjp_2721_:
{
lean_object* v___x_2725_; 
if (v_isShared_2723_ == 0)
{
v___x_2725_ = v___x_2722_;
goto v_reusejp_2724_;
}
else
{
lean_object* v_reuseFailAlloc_2726_; 
v_reuseFailAlloc_2726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2726_, 0, v_a_2720_);
v___x_2725_ = v_reuseFailAlloc_2726_;
goto v_reusejp_2724_;
}
v_reusejp_2724_:
{
return v___x_2725_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_toCbvSimprocEntry___boxed(lean_object* v_e_2728_, lean_object* v_a_2729_, lean_object* v_a_2730_){
_start:
{
lean_object* v_res_2731_; 
v_res_2731_ = l_Lean_Meta_Tactic_Cbv_toCbvSimprocEntry(v_e_2728_, v_a_2729_);
lean_dec_ref(v_a_2729_);
return v_res_2731_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1269018163____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; 
v___x_2733_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default___closed__1, &l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default___closed__1);
v___x_2734_ = lean_st_mk_ref(v___x_2733_);
v___x_2735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2735_, 0, v___x_2734_);
return v___x_2735_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1269018163____hygCtx___hyg_2____boxed(lean_object* v_a_2736_){
_start:
{
lean_object* v_res_2737_; 
v_res_2737_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1269018163____hygCtx___hyg_2_();
return v_res_2737_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(lean_object* v___y_2738_){
_start:
{
lean_inc_ref(v___y_2738_);
return v___y_2738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2____boxed(lean_object* v___y_2739_){
_start:
{
lean_object* v_res_2740_; 
v_res_2740_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(v___y_2739_);
lean_dec_ref(v___y_2739_);
return v_res_2740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(lean_object* v_x_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_){
_start:
{
lean_object* v___x_2745_; 
v___x_2745_ = l_Lean_Meta_Tactic_Cbv_toCbvSimprocEntry(v___y_2742_, v___y_2743_);
return v___x_2745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2____boxed(lean_object* v_x_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_){
_start:
{
lean_object* v_res_2750_; 
v_res_2750_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(v_x_2746_, v___y_2747_, v___y_2748_);
lean_dec_ref(v___y_2748_);
lean_dec_ref(v_x_2746_);
return v_res_2750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(lean_object* v_e_2751_){
_start:
{
lean_object* v_toCbvSimprocOLeanEntry_2752_; 
v_toCbvSimprocOLeanEntry_2752_ = lean_ctor_get(v_e_2751_, 0);
lean_inc_ref(v_toCbvSimprocOLeanEntry_2752_);
return v_toCbvSimprocOLeanEntry_2752_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2____boxed(lean_object* v_e_2753_){
_start:
{
lean_object* v_res_2754_; 
v_res_2754_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(v_e_2753_);
lean_dec_ref(v_e_2753_);
return v_res_2754_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(lean_object* v_s_2755_, lean_object* v_e_2756_){
_start:
{
lean_object* v_toCbvSimprocOLeanEntry_2757_; lean_object* v_proc_2758_; lean_object* v_declName_2759_; uint8_t v_phase_2760_; lean_object* v_keys_2761_; lean_object* v___x_2762_; 
v_toCbvSimprocOLeanEntry_2757_ = lean_ctor_get(v_e_2756_, 0);
lean_inc_ref(v_toCbvSimprocOLeanEntry_2757_);
v_proc_2758_ = lean_ctor_get(v_e_2756_, 1);
lean_inc_ref(v_proc_2758_);
lean_dec_ref(v_e_2756_);
v_declName_2759_ = lean_ctor_get(v_toCbvSimprocOLeanEntry_2757_, 0);
lean_inc(v_declName_2759_);
v_phase_2760_ = lean_ctor_get_uint8(v_toCbvSimprocOLeanEntry_2757_, sizeof(void*)*2);
v_keys_2761_ = lean_ctor_get(v_toCbvSimprocOLeanEntry_2757_, 1);
lean_inc_ref(v_keys_2761_);
lean_dec_ref(v_toCbvSimprocOLeanEntry_2757_);
v___x_2762_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore(v_s_2755_, v_keys_2761_, v_declName_2759_, v_phase_2760_, v_proc_2758_);
return v___x_2762_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(lean_object* v_x_2763_, lean_object* v_a_2764_){
_start:
{
lean_object* v___x_2765_; lean_object* v___x_2766_; 
v___x_2765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2765_, 0, v_a_2764_);
lean_inc_ref_n(v___x_2765_, 2);
v___x_2766_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2766_, 0, v___x_2765_);
lean_ctor_set(v___x_2766_, 1, v___x_2765_);
lean_ctor_set(v___x_2766_, 2, v___x_2765_);
return v___x_2766_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2____boxed(lean_object* v_x_2767_, lean_object* v_a_2768_){
_start:
{
lean_object* v_res_2769_; 
v_res_2769_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(v_x_2767_, v_a_2768_);
lean_dec_ref(v_x_2767_);
return v_res_2769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(lean_object* v___x_2770_){
_start:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; 
v___x_2772_ = lean_st_ref_get(v___x_2770_);
v___x_2773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2773_, 0, v___x_2772_);
return v___x_2773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2____boxed(lean_object* v___x_2774_, lean_object* v___y_2775_){
_start:
{
lean_object* v_res_2776_; 
v_res_2776_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(v___x_2774_);
lean_dec(v___x_2774_);
return v_res_2776_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2785_; lean_object* v___f_2786_; 
v___x_2785_ = l_Lean_Meta_Tactic_Cbv_builtinCbvSimprocsRef;
v___f_2786_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_2786_, 0, v___x_2785_);
return v___f_2786_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2787_; uint8_t v___x_2788_; lean_object* v___f_2789_; lean_object* v___f_2790_; lean_object* v___f_2791_; lean_object* v___f_2792_; lean_object* v___f_2793_; lean_object* v___f_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; 
v___x_2787_ = lean_box(0);
v___x_2788_ = 0;
v___f_2789_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_));
v___f_2790_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_));
v___f_2791_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_));
v___f_2792_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_));
v___f_2793_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_));
v___f_2794_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_);
v___x_2795_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_));
v___x_2796_ = lean_alloc_ctor(0, 9, 2);
lean_ctor_set(v___x_2796_, 0, v___x_2795_);
lean_ctor_set(v___x_2796_, 1, v___f_2794_);
lean_ctor_set(v___x_2796_, 2, v___f_2793_);
lean_ctor_set(v___x_2796_, 3, v___f_2792_);
lean_ctor_set(v___x_2796_, 4, v___f_2791_);
lean_ctor_set(v___x_2796_, 5, v___f_2791_);
lean_ctor_set(v___x_2796_, 6, v___f_2790_);
lean_ctor_set(v___x_2796_, 7, v___f_2789_);
lean_ctor_set(v___x_2796_, 8, v___x_2787_);
lean_ctor_set_uint8(v___x_2796_, sizeof(void*)*9, v___x_2788_);
lean_ctor_set_uint8(v___x_2796_, sizeof(void*)*9 + 1, v___x_2788_);
return v___x_2796_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2798_; lean_object* v___x_2799_; 
v___x_2798_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_);
v___x_2799_ = l_Lean_registerScopedEnvExtensionUnsafe___redArg(v___x_2798_);
return v___x_2799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2____boxed(lean_object* v_a_2800_){
_start:
{
lean_object* v_res_2801_; 
v_res_2801_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_();
return v_res_2801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___lam__0(lean_object* v_declName_2802_, lean_object* v_s_2803_){
_start:
{
lean_object* v___x_2804_; 
v___x_2804_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocs_erase(v_s_2803_, v_declName_2802_);
return v___x_2804_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_2805_, lean_object* v_i_2806_, lean_object* v_k_2807_){
_start:
{
lean_object* v___x_2808_; uint8_t v___x_2809_; 
v___x_2808_ = lean_array_get_size(v_keys_2805_);
v___x_2809_ = lean_nat_dec_lt(v_i_2806_, v___x_2808_);
if (v___x_2809_ == 0)
{
lean_dec(v_i_2806_);
return v___x_2809_;
}
else
{
lean_object* v_k_x27_2810_; uint8_t v___x_2811_; 
v_k_x27_2810_ = lean_array_fget_borrowed(v_keys_2805_, v_i_2806_);
v___x_2811_ = lean_name_eq(v_k_2807_, v_k_x27_2810_);
if (v___x_2811_ == 0)
{
lean_object* v___x_2812_; lean_object* v___x_2813_; 
v___x_2812_ = lean_unsigned_to_nat(1u);
v___x_2813_ = lean_nat_add(v_i_2806_, v___x_2812_);
lean_dec(v_i_2806_);
v_i_2806_ = v___x_2813_;
goto _start;
}
else
{
lean_dec(v_i_2806_);
return v___x_2809_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_2815_, lean_object* v_i_2816_, lean_object* v_k_2817_){
_start:
{
uint8_t v_res_2818_; lean_object* v_r_2819_; 
v_res_2818_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0_spec__1___redArg(v_keys_2815_, v_i_2816_, v_k_2817_);
lean_dec(v_k_2817_);
lean_dec_ref(v_keys_2815_);
v_r_2819_ = lean_box(v_res_2818_);
return v_r_2819_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0___redArg(lean_object* v_x_2820_, size_t v_x_2821_, lean_object* v_x_2822_){
_start:
{
if (lean_obj_tag(v_x_2820_) == 0)
{
lean_object* v_es_2823_; lean_object* v___x_2824_; size_t v___x_2825_; size_t v___x_2826_; lean_object* v_j_2827_; lean_object* v___x_2828_; 
v_es_2823_ = lean_ctor_get(v_x_2820_, 0);
v___x_2824_ = lean_box(2);
v___x_2825_ = ((size_t)31ULL);
v___x_2826_ = lean_usize_land(v_x_2821_, v___x_2825_);
v_j_2827_ = lean_usize_to_nat(v___x_2826_);
v___x_2828_ = lean_array_get_borrowed(v___x_2824_, v_es_2823_, v_j_2827_);
lean_dec(v_j_2827_);
switch(lean_obj_tag(v___x_2828_))
{
case 0:
{
lean_object* v_key_2829_; uint8_t v___x_2830_; 
v_key_2829_ = lean_ctor_get(v___x_2828_, 0);
v___x_2830_ = lean_name_eq(v_x_2822_, v_key_2829_);
return v___x_2830_;
}
case 1:
{
lean_object* v_node_2831_; size_t v___x_2832_; size_t v___x_2833_; 
v_node_2831_ = lean_ctor_get(v___x_2828_, 0);
v___x_2832_ = ((size_t)5ULL);
v___x_2833_ = lean_usize_shift_right(v_x_2821_, v___x_2832_);
v_x_2820_ = v_node_2831_;
v_x_2821_ = v___x_2833_;
goto _start;
}
default: 
{
uint8_t v___x_2835_; 
v___x_2835_ = 0;
return v___x_2835_;
}
}
}
else
{
lean_object* v_ks_2836_; lean_object* v___x_2837_; uint8_t v___x_2838_; 
v_ks_2836_ = lean_ctor_get(v_x_2820_, 0);
v___x_2837_ = lean_unsigned_to_nat(0u);
v___x_2838_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0_spec__1___redArg(v_ks_2836_, v___x_2837_, v_x_2822_);
return v___x_2838_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0___redArg___boxed(lean_object* v_x_2839_, lean_object* v_x_2840_, lean_object* v_x_2841_){
_start:
{
size_t v_x_546__boxed_2842_; uint8_t v_res_2843_; lean_object* v_r_2844_; 
v_x_546__boxed_2842_ = lean_unbox_usize(v_x_2840_);
lean_dec(v_x_2840_);
v_res_2843_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0___redArg(v_x_2839_, v_x_546__boxed_2842_, v_x_2841_);
lean_dec(v_x_2841_);
lean_dec_ref(v_x_2839_);
v_r_2844_ = lean_box(v_res_2843_);
return v_r_2844_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0___redArg(lean_object* v_x_2845_, lean_object* v_x_2846_){
_start:
{
uint64_t v___y_2848_; 
if (lean_obj_tag(v_x_2846_) == 0)
{
uint64_t v___x_2851_; 
v___x_2851_ = 1723ULL;
v___y_2848_ = v___x_2851_;
goto v___jp_2847_;
}
else
{
uint64_t v_hash_2852_; 
v_hash_2852_ = lean_ctor_get_uint64(v_x_2846_, sizeof(void*)*2);
v___y_2848_ = v_hash_2852_;
goto v___jp_2847_;
}
v___jp_2847_:
{
size_t v___x_2849_; uint8_t v___x_2850_; 
v___x_2849_ = lean_uint64_to_usize(v___y_2848_);
v___x_2850_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0___redArg(v_x_2845_, v___x_2849_, v_x_2846_);
return v___x_2850_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0___redArg___boxed(lean_object* v_x_2853_, lean_object* v_x_2854_){
_start:
{
uint8_t v_res_2855_; lean_object* v_r_2856_; 
v_res_2855_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0___redArg(v_x_2853_, v_x_2854_);
lean_dec(v_x_2854_);
lean_dec_ref(v_x_2853_);
v_r_2856_ = lean_box(v_res_2855_);
return v_r_2856_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___closed__0(void){
_start:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; 
v___x_2857_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl___closed__1));
v___x_2858_ = l_Lean_stringToMessageData(v___x_2857_);
return v___x_2858_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___closed__2(void){
_start:
{
lean_object* v___x_2860_; lean_object* v___x_2861_; 
v___x_2860_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___closed__1));
v___x_2861_ = l_Lean_stringToMessageData(v___x_2860_);
return v___x_2861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr(lean_object* v_declName_2862_, lean_object* v_a_2863_, lean_object* v_a_2864_){
_start:
{
lean_object* v___f_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v_env_2869_; lean_object* v___x_2870_; lean_object* v___y_2872_; lean_object* v_ext_2896_; lean_object* v_toEnvExtension_2897_; lean_object* v_asyncMode_2898_; uint8_t v___x_2899_; lean_object* v___x_2900_; lean_object* v_simprocNames_2901_; uint8_t v___x_2902_; 
lean_inc(v_declName_2862_);
v___f_2866_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___lam__0), 2, 1);
lean_closure_set(v___f_2866_, 0, v_declName_2862_);
v___x_2867_ = l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default;
v___x_2868_ = lean_st_ref_get(v_a_2864_);
v_env_2869_ = lean_ctor_get(v___x_2868_, 0);
lean_inc_ref(v_env_2869_);
lean_dec(v___x_2868_);
v___x_2870_ = l_Lean_Meta_Tactic_Cbv_cbvSimprocExtension;
v_ext_2896_ = lean_ctor_get(v___x_2870_, 1);
v_toEnvExtension_2897_ = lean_ctor_get(v_ext_2896_, 0);
v_asyncMode_2898_ = lean_ctor_get(v_toEnvExtension_2897_, 2);
v___x_2899_ = 0;
v___x_2900_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2867_, v___x_2870_, v_env_2869_, v_asyncMode_2898_, v___x_2899_);
v_simprocNames_2901_ = lean_ctor_get(v___x_2900_, 3);
lean_inc_ref(v_simprocNames_2901_);
lean_dec(v___x_2900_);
v___x_2902_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0___redArg(v_simprocNames_2901_, v_declName_2862_);
lean_dec_ref(v_simprocNames_2901_);
if (v___x_2902_ == 0)
{
lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; 
lean_dec_ref(v___f_2866_);
v___x_2903_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___closed__0, &l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___closed__0_once, _init_l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___closed__0);
v___x_2904_ = l_Lean_MessageData_ofConstName(v_declName_2862_, v___x_2899_);
v___x_2905_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2905_, 0, v___x_2903_);
lean_ctor_set(v___x_2905_, 1, v___x_2904_);
v___x_2906_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___closed__2, &l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___closed__2_once, _init_l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___closed__2);
v___x_2907_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2907_, 0, v___x_2905_);
lean_ctor_set(v___x_2907_, 1, v___x_2906_);
v___x_2908_ = l_Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0___redArg(v___x_2907_, v_a_2863_, v_a_2864_);
return v___x_2908_;
}
else
{
lean_dec(v_declName_2862_);
v___y_2872_ = v_a_2864_;
goto v___jp_2871_;
}
v___jp_2871_:
{
lean_object* v___x_2873_; lean_object* v_env_2874_; lean_object* v_nextMacroScope_2875_; lean_object* v_ngen_2876_; lean_object* v_auxDeclNGen_2877_; lean_object* v_traceState_2878_; lean_object* v_recordedDeps_2879_; lean_object* v_messages_2880_; lean_object* v_infoState_2881_; lean_object* v_snapshotTasks_2882_; lean_object* v___x_2884_; uint8_t v_isShared_2885_; uint8_t v_isSharedCheck_2894_; 
v___x_2873_ = lean_st_ref_take(v___y_2872_);
v_env_2874_ = lean_ctor_get(v___x_2873_, 0);
v_nextMacroScope_2875_ = lean_ctor_get(v___x_2873_, 1);
v_ngen_2876_ = lean_ctor_get(v___x_2873_, 2);
v_auxDeclNGen_2877_ = lean_ctor_get(v___x_2873_, 3);
v_traceState_2878_ = lean_ctor_get(v___x_2873_, 4);
v_recordedDeps_2879_ = lean_ctor_get(v___x_2873_, 6);
v_messages_2880_ = lean_ctor_get(v___x_2873_, 7);
v_infoState_2881_ = lean_ctor_get(v___x_2873_, 8);
v_snapshotTasks_2882_ = lean_ctor_get(v___x_2873_, 9);
v_isSharedCheck_2894_ = !lean_is_exclusive(v___x_2873_);
if (v_isSharedCheck_2894_ == 0)
{
lean_object* v_unused_2895_; 
v_unused_2895_ = lean_ctor_get(v___x_2873_, 5);
lean_dec(v_unused_2895_);
v___x_2884_ = v___x_2873_;
v_isShared_2885_ = v_isSharedCheck_2894_;
goto v_resetjp_2883_;
}
else
{
lean_inc(v_snapshotTasks_2882_);
lean_inc(v_infoState_2881_);
lean_inc(v_messages_2880_);
lean_inc(v_recordedDeps_2879_);
lean_inc(v_traceState_2878_);
lean_inc(v_auxDeclNGen_2877_);
lean_inc(v_ngen_2876_);
lean_inc(v_nextMacroScope_2875_);
lean_inc(v_env_2874_);
lean_dec(v___x_2873_);
v___x_2884_ = lean_box(0);
v_isShared_2885_ = v_isSharedCheck_2894_;
goto v_resetjp_2883_;
}
v_resetjp_2883_:
{
lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2890_; 
v___x_2886_ = lean_box(0);
v___x_2887_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v___x_2870_, v_env_2874_, v___f_2866_);
v___x_2888_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__1, &l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__1);
if (v_isShared_2885_ == 0)
{
lean_ctor_set(v___x_2884_, 5, v___x_2888_);
lean_ctor_set(v___x_2884_, 0, v___x_2887_);
v___x_2890_ = v___x_2884_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2893_; 
v_reuseFailAlloc_2893_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2893_, 0, v___x_2887_);
lean_ctor_set(v_reuseFailAlloc_2893_, 1, v_nextMacroScope_2875_);
lean_ctor_set(v_reuseFailAlloc_2893_, 2, v_ngen_2876_);
lean_ctor_set(v_reuseFailAlloc_2893_, 3, v_auxDeclNGen_2877_);
lean_ctor_set(v_reuseFailAlloc_2893_, 4, v_traceState_2878_);
lean_ctor_set(v_reuseFailAlloc_2893_, 5, v___x_2888_);
lean_ctor_set(v_reuseFailAlloc_2893_, 6, v_recordedDeps_2879_);
lean_ctor_set(v_reuseFailAlloc_2893_, 7, v_messages_2880_);
lean_ctor_set(v_reuseFailAlloc_2893_, 8, v_infoState_2881_);
lean_ctor_set(v_reuseFailAlloc_2893_, 9, v_snapshotTasks_2882_);
v___x_2890_ = v_reuseFailAlloc_2893_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
lean_object* v___x_2891_; lean_object* v___x_2892_; 
v___x_2891_ = lean_st_ref_put(v___y_2872_, v___x_2890_);
v___x_2892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2892_, 0, v___x_2886_);
return v___x_2892_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr___boxed(lean_object* v_declName_2909_, lean_object* v_a_2910_, lean_object* v_a_2911_, lean_object* v_a_2912_){
_start:
{
lean_object* v_res_2913_; 
v_res_2913_ = l_Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr(v_declName_2909_, v_a_2910_, v_a_2911_);
lean_dec(v_a_2911_);
lean_dec_ref(v_a_2910_);
return v_res_2913_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0(lean_object* v_00_u03b2_2914_, lean_object* v_x_2915_, lean_object* v_x_2916_){
_start:
{
uint8_t v___x_2917_; 
v___x_2917_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0___redArg(v_x_2915_, v_x_2916_);
return v___x_2917_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0___boxed(lean_object* v_00_u03b2_2918_, lean_object* v_x_2919_, lean_object* v_x_2920_){
_start:
{
uint8_t v_res_2921_; lean_object* v_r_2922_; 
v_res_2921_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0(v_00_u03b2_2918_, v_x_2919_, v_x_2920_);
lean_dec(v_x_2920_);
lean_dec_ref(v_x_2919_);
v_r_2922_ = lean_box(v_res_2921_);
return v_r_2922_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0(lean_object* v_00_u03b2_2923_, lean_object* v_x_2924_, size_t v_x_2925_, lean_object* v_x_2926_){
_start:
{
uint8_t v___x_2927_; 
v___x_2927_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0___redArg(v_x_2924_, v_x_2925_, v_x_2926_);
return v___x_2927_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2928_, lean_object* v_x_2929_, lean_object* v_x_2930_, lean_object* v_x_2931_){
_start:
{
size_t v_x_696__boxed_2932_; uint8_t v_res_2933_; lean_object* v_r_2934_; 
v_x_696__boxed_2932_ = lean_unbox_usize(v_x_2930_);
lean_dec(v_x_2930_);
v_res_2933_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0(v_00_u03b2_2928_, v_x_2929_, v_x_696__boxed_2932_, v_x_2931_);
lean_dec(v_x_2931_);
lean_dec_ref(v_x_2929_);
v_r_2934_ = lean_box(v_res_2933_);
return v_r_2934_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2935_, lean_object* v_keys_2936_, lean_object* v_vals_2937_, lean_object* v_heq_2938_, lean_object* v_i_2939_, lean_object* v_k_2940_){
_start:
{
uint8_t v___x_2941_; 
v___x_2941_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0_spec__1___redArg(v_keys_2936_, v_i_2939_, v_k_2940_);
return v___x_2941_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2942_, lean_object* v_keys_2943_, lean_object* v_vals_2944_, lean_object* v_heq_2945_, lean_object* v_i_2946_, lean_object* v_k_2947_){
_start:
{
uint8_t v_res_2948_; lean_object* v_r_2949_; 
v_res_2948_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0_spec__0_spec__1(v_00_u03b2_2942_, v_keys_2943_, v_vals_2944_, v_heq_2945_, v_i_2946_, v_k_2947_);
lean_dec(v_k_2947_);
lean_dec_ref(v_vals_2944_);
lean_dec_ref(v_keys_2943_);
v_r_2949_ = lean_box(v_res_2948_);
return v_r_2949_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore_spec__0___redArg(lean_object* v_ext_2950_, lean_object* v_b_2951_, uint8_t v_kind_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_){
_start:
{
lean_object* v_toCold_2956_; lean_object* v_currNamespace_2957_; lean_object* v___x_2958_; lean_object* v_env_2959_; lean_object* v_nextMacroScope_2960_; lean_object* v_ngen_2961_; lean_object* v_auxDeclNGen_2962_; lean_object* v_traceState_2963_; lean_object* v_recordedDeps_2964_; lean_object* v_messages_2965_; lean_object* v_infoState_2966_; lean_object* v_snapshotTasks_2967_; lean_object* v___x_2969_; uint8_t v_isShared_2970_; uint8_t v_isSharedCheck_2979_; 
v_toCold_2956_ = lean_ctor_get(v___y_2953_, 0);
v_currNamespace_2957_ = lean_ctor_get(v_toCold_2956_, 4);
v___x_2958_ = lean_st_ref_take(v___y_2954_);
v_env_2959_ = lean_ctor_get(v___x_2958_, 0);
v_nextMacroScope_2960_ = lean_ctor_get(v___x_2958_, 1);
v_ngen_2961_ = lean_ctor_get(v___x_2958_, 2);
v_auxDeclNGen_2962_ = lean_ctor_get(v___x_2958_, 3);
v_traceState_2963_ = lean_ctor_get(v___x_2958_, 4);
v_recordedDeps_2964_ = lean_ctor_get(v___x_2958_, 6);
v_messages_2965_ = lean_ctor_get(v___x_2958_, 7);
v_infoState_2966_ = lean_ctor_get(v___x_2958_, 8);
v_snapshotTasks_2967_ = lean_ctor_get(v___x_2958_, 9);
v_isSharedCheck_2979_ = !lean_is_exclusive(v___x_2958_);
if (v_isSharedCheck_2979_ == 0)
{
lean_object* v_unused_2980_; 
v_unused_2980_ = lean_ctor_get(v___x_2958_, 5);
lean_dec(v_unused_2980_);
v___x_2969_ = v___x_2958_;
v_isShared_2970_ = v_isSharedCheck_2979_;
goto v_resetjp_2968_;
}
else
{
lean_inc(v_snapshotTasks_2967_);
lean_inc(v_infoState_2966_);
lean_inc(v_messages_2965_);
lean_inc(v_recordedDeps_2964_);
lean_inc(v_traceState_2963_);
lean_inc(v_auxDeclNGen_2962_);
lean_inc(v_ngen_2961_);
lean_inc(v_nextMacroScope_2960_);
lean_inc(v_env_2959_);
lean_dec(v___x_2958_);
v___x_2969_ = lean_box(0);
v_isShared_2970_ = v_isSharedCheck_2979_;
goto v_resetjp_2968_;
}
v_resetjp_2968_:
{
lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2975_; 
v___x_2971_ = lean_box(0);
lean_inc(v_currNamespace_2957_);
v___x_2972_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_2959_, v_ext_2950_, v_b_2951_, v_kind_2952_, v_currNamespace_2957_);
v___x_2973_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__1, &l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_registerCbvSimproc___closed__1);
if (v_isShared_2970_ == 0)
{
lean_ctor_set(v___x_2969_, 5, v___x_2973_);
lean_ctor_set(v___x_2969_, 0, v___x_2972_);
v___x_2975_ = v___x_2969_;
goto v_reusejp_2974_;
}
else
{
lean_object* v_reuseFailAlloc_2978_; 
v_reuseFailAlloc_2978_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2978_, 0, v___x_2972_);
lean_ctor_set(v_reuseFailAlloc_2978_, 1, v_nextMacroScope_2960_);
lean_ctor_set(v_reuseFailAlloc_2978_, 2, v_ngen_2961_);
lean_ctor_set(v_reuseFailAlloc_2978_, 3, v_auxDeclNGen_2962_);
lean_ctor_set(v_reuseFailAlloc_2978_, 4, v_traceState_2963_);
lean_ctor_set(v_reuseFailAlloc_2978_, 5, v___x_2973_);
lean_ctor_set(v_reuseFailAlloc_2978_, 6, v_recordedDeps_2964_);
lean_ctor_set(v_reuseFailAlloc_2978_, 7, v_messages_2965_);
lean_ctor_set(v_reuseFailAlloc_2978_, 8, v_infoState_2966_);
lean_ctor_set(v_reuseFailAlloc_2978_, 9, v_snapshotTasks_2967_);
v___x_2975_ = v_reuseFailAlloc_2978_;
goto v_reusejp_2974_;
}
v_reusejp_2974_:
{
lean_object* v___x_2976_; lean_object* v___x_2977_; 
v___x_2976_ = lean_st_ref_put(v___y_2954_, v___x_2975_);
v___x_2977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2977_, 0, v___x_2971_);
return v___x_2977_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore_spec__0___redArg___boxed(lean_object* v_ext_2981_, lean_object* v_b_2982_, lean_object* v_kind_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_){
_start:
{
uint8_t v_kind_boxed_2987_; lean_object* v_res_2988_; 
v_kind_boxed_2987_ = lean_unbox(v_kind_2983_);
v_res_2988_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore_spec__0___redArg(v_ext_2981_, v_b_2982_, v_kind_boxed_2987_, v___y_2984_, v___y_2985_);
lean_dec(v___y_2985_);
lean_dec_ref(v___y_2984_);
return v_res_2988_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore_spec__0(lean_object* v_00_u03b1_2989_, lean_object* v_00_u03b2_2990_, lean_object* v_00_u03c3_2991_, lean_object* v_ext_2992_, lean_object* v_b_2993_, uint8_t v_kind_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_){
_start:
{
lean_object* v___x_2998_; 
v___x_2998_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore_spec__0___redArg(v_ext_2992_, v_b_2993_, v_kind_2994_, v___y_2995_, v___y_2996_);
return v___x_2998_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore_spec__0___boxed(lean_object* v_00_u03b1_2999_, lean_object* v_00_u03b2_3000_, lean_object* v_00_u03c3_3001_, lean_object* v_ext_3002_, lean_object* v_b_3003_, lean_object* v_kind_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_){
_start:
{
uint8_t v_kind_boxed_3008_; lean_object* v_res_3009_; 
v_kind_boxed_3008_ = lean_unbox(v_kind_3004_);
v_res_3009_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore_spec__0(v_00_u03b1_2999_, v_00_u03b2_3000_, v_00_u03c3_3001_, v_ext_3002_, v_b_3003_, v_kind_boxed_3008_, v___y_3005_, v___y_3006_);
lean_dec(v___y_3006_);
lean_dec_ref(v___y_3005_);
return v_res_3009_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__1(void){
_start:
{
lean_object* v___x_3011_; lean_object* v___x_3012_; 
v___x_3011_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__0));
v___x_3012_ = l_Lean_stringToMessageData(v___x_3011_);
return v___x_3012_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__3(void){
_start:
{
lean_object* v___x_3014_; lean_object* v___x_3015_; 
v___x_3014_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__2));
v___x_3015_ = l_Lean_stringToMessageData(v___x_3014_);
return v___x_3015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore(lean_object* v_declName_3016_, uint8_t v_kind_3017_, uint8_t v_phase_3018_, lean_object* v_a_3019_, lean_object* v_a_3020_){
_start:
{
lean_object* v___x_3022_; lean_object* v_env_3023_; lean_object* v_ref_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; 
v___x_3022_ = lean_st_ref_get(v_a_3020_);
v_env_3023_ = lean_ctor_get(v___x_3022_, 0);
lean_inc_ref(v_env_3023_);
lean_dec(v___x_3022_);
v_ref_3024_ = lean_ctor_get(v_a_3019_, 2);
v___x_3025_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_3019_);
v___x_3026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3026_, 0, v_env_3023_);
lean_ctor_set(v___x_3026_, 1, v___x_3025_);
lean_inc(v_declName_3016_);
v___x_3027_ = l_Lean_Meta_Tactic_Cbv_getCbvSimprocFromDeclImpl(v_declName_3016_, v___x_3026_);
lean_dec_ref_known(v___x_3026_, 2);
if (lean_obj_tag(v___x_3027_) == 0)
{
lean_object* v_a_3028_; lean_object* v___x_3029_; lean_object* v_a_3030_; 
v_a_3028_ = lean_ctor_get(v___x_3027_, 0);
lean_inc(v_a_3028_);
lean_dec_ref_known(v___x_3027_, 1);
lean_inc(v_declName_3016_);
v___x_3029_ = l_Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f___redArg(v_declName_3016_, v_a_3020_);
v_a_3030_ = lean_ctor_get(v___x_3029_, 0);
lean_inc(v_a_3030_);
lean_dec_ref(v___x_3029_);
if (lean_obj_tag(v_a_3030_) == 1)
{
lean_object* v_val_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; 
v_val_3031_ = lean_ctor_get(v_a_3030_, 0);
lean_inc(v_val_3031_);
lean_dec_ref_known(v_a_3030_, 1);
v___x_3032_ = l_Lean_Meta_Tactic_Cbv_cbvSimprocExtension;
v___x_3033_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3033_, 0, v_declName_3016_);
lean_ctor_set(v___x_3033_, 1, v_val_3031_);
lean_ctor_set_uint8(v___x_3033_, sizeof(void*)*2, v_phase_3018_);
v___x_3034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3034_, 0, v___x_3033_);
lean_ctor_set(v___x_3034_, 1, v_a_3028_);
v___x_3035_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore_spec__0___redArg(v___x_3032_, v___x_3034_, v_kind_3017_, v_a_3019_, v_a_3020_);
return v___x_3035_;
}
else
{
lean_object* v___x_3036_; uint8_t v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; 
lean_dec(v_a_3030_);
lean_dec(v_a_3028_);
v___x_3036_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__1, &l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__1_once, _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__1);
v___x_3037_ = 0;
v___x_3038_ = l_Lean_MessageData_ofConstName(v_declName_3016_, v___x_3037_);
v___x_3039_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3039_, 0, v___x_3036_);
lean_ctor_set(v___x_3039_, 1, v___x_3038_);
v___x_3040_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__3, &l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__3_once, _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___closed__3);
v___x_3041_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3041_, 0, v___x_3039_);
lean_ctor_set(v___x_3041_, 1, v___x_3040_);
v___x_3042_ = l_Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0___redArg(v___x_3041_, v_a_3019_, v_a_3020_);
return v___x_3042_;
}
}
else
{
lean_object* v_a_3043_; lean_object* v___x_3045_; uint8_t v_isShared_3046_; uint8_t v_isSharedCheck_3054_; 
lean_dec(v_declName_3016_);
v_a_3043_ = lean_ctor_get(v___x_3027_, 0);
v_isSharedCheck_3054_ = !lean_is_exclusive(v___x_3027_);
if (v_isSharedCheck_3054_ == 0)
{
v___x_3045_ = v___x_3027_;
v_isShared_3046_ = v_isSharedCheck_3054_;
goto v_resetjp_3044_;
}
else
{
lean_inc(v_a_3043_);
lean_dec(v___x_3027_);
v___x_3045_ = lean_box(0);
v_isShared_3046_ = v_isSharedCheck_3054_;
goto v_resetjp_3044_;
}
v_resetjp_3044_:
{
lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3052_; 
v___x_3047_ = lean_io_error_to_string(v_a_3043_);
v___x_3048_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3048_, 0, v___x_3047_);
v___x_3049_ = l_Lean_MessageData_ofFormat(v___x_3048_);
lean_inc(v_ref_3024_);
v___x_3050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3050_, 0, v_ref_3024_);
lean_ctor_set(v___x_3050_, 1, v___x_3049_);
if (v_isShared_3046_ == 0)
{
lean_ctor_set(v___x_3045_, 0, v___x_3050_);
v___x_3052_ = v___x_3045_;
goto v_reusejp_3051_;
}
else
{
lean_object* v_reuseFailAlloc_3053_; 
v_reuseFailAlloc_3053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3053_, 0, v___x_3050_);
v___x_3052_ = v_reuseFailAlloc_3053_;
goto v_reusejp_3051_;
}
v_reusejp_3051_:
{
return v___x_3052_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore___boxed(lean_object* v_declName_3055_, lean_object* v_kind_3056_, lean_object* v_phase_3057_, lean_object* v_a_3058_, lean_object* v_a_3059_, lean_object* v_a_3060_){
_start:
{
uint8_t v_kind_boxed_3061_; uint8_t v_phase_boxed_3062_; lean_object* v_res_3063_; 
v_kind_boxed_3061_ = lean_unbox(v_kind_3056_);
v_phase_boxed_3062_ = lean_unbox(v_phase_3057_);
v_res_3063_ = l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore(v_declName_3055_, v_kind_boxed_3061_, v_phase_boxed_3062_, v_a_3058_, v_a_3059_);
lean_dec(v_a_3059_);
lean_dec_ref(v_a_3058_);
return v_res_3063_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase(lean_object* v_stx_3076_){
_start:
{
uint8_t v___x_3077_; 
v___x_3077_ = l_Lean_Syntax_isNone(v_stx_3076_);
if (v___x_3077_ == 0)
{
lean_object* v___x_3078_; lean_object* v_inner_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; uint8_t v___x_3082_; 
v___x_3078_ = lean_unsigned_to_nat(0u);
v_inner_3079_ = l_Lean_Syntax_getArg(v_stx_3076_, v___x_3078_);
v___x_3080_ = l_Lean_Syntax_getKind(v_inner_3079_);
v___x_3081_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__2));
v___x_3082_ = lean_name_eq(v___x_3080_, v___x_3081_);
if (v___x_3082_ == 0)
{
lean_object* v___x_3083_; uint8_t v___x_3084_; 
v___x_3083_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___closed__4));
v___x_3084_ = lean_name_eq(v___x_3080_, v___x_3083_);
lean_dec(v___x_3080_);
if (v___x_3084_ == 0)
{
uint8_t v___x_3085_; 
v___x_3085_ = 2;
return v___x_3085_;
}
else
{
uint8_t v___x_3086_; 
v___x_3086_ = 1;
return v___x_3086_;
}
}
else
{
uint8_t v___x_3087_; 
lean_dec(v___x_3080_);
v___x_3087_ = 0;
return v___x_3087_;
}
}
else
{
uint8_t v___x_3088_; 
v___x_3088_ = 2;
return v___x_3088_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase___boxed(lean_object* v_stx_3089_){
_start:
{
uint8_t v_res_3090_; lean_object* v_r_3091_; 
v_res_3090_ = l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase(v_stx_3089_);
lean_dec(v_stx_3089_);
v_r_3091_ = lean_box(v_res_3090_);
return v_r_3091_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_3092_; lean_object* v___x_3093_; 
v___x_3092_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default_spec__0___redArg___closed__0);
v___x_3093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3092_);
return v___x_3093_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_3095_; 
v___x_3095_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0_spec__0___redArg___closed__0);
return v___x_3095_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0_spec__0___redArg___boxed(lean_object* v___dummy_3096_){
_start:
{
lean_object* v_res_3097_; 
v_res_3097_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0_spec__0___redArg();
return v_res_3097_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__2(void){
_start:
{
lean_object* v___x_3101_; 
v___x_3101_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0_spec__0___redArg();
return v___x_3101_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__3(void){
_start:
{
lean_object* v___x_3102_; lean_object* v___x_3103_; 
v___x_3102_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0);
v___x_3103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3103_, 0, v___x_3102_);
lean_ctor_set(v___x_3103_, 1, v___x_3102_);
return v___x_3103_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__4(void){
_start:
{
lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; 
v___x_3104_ = lean_unsigned_to_nat(0u);
v___x_3105_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0);
v___x_3106_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3106_, 0, v___x_3105_);
lean_ctor_set(v___x_3106_, 1, v___x_3105_);
lean_ctor_set(v___x_3106_, 2, v___x_3104_);
return v___x_3106_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__5(void){
_start:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; 
v___x_3107_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__4, &l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__4_once, _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__4);
v___x_3108_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__3, &l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__3_once, _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__3);
v___x_3109_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0);
v___x_3110_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__2, &l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__2_once, _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__2);
v___x_3111_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3111_, 0, v___x_3110_);
lean_ctor_set(v___x_3111_, 1, v___x_3109_);
lean_ctor_set(v___x_3111_, 2, v___x_3108_);
lean_ctor_set(v___x_3111_, 3, v___x_3109_);
lean_ctor_set(v___x_3111_, 4, v___x_3109_);
lean_ctor_set(v___x_3111_, 5, v___x_3109_);
lean_ctor_set(v___x_3111_, 6, v___x_3109_);
lean_ctor_set(v___x_3111_, 7, v___x_3107_);
return v___x_3111_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__6(void){
_start:
{
lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; 
v___x_3112_ = lean_unsigned_to_nat(32u);
v___x_3113_ = lean_mk_empty_array_with_capacity(v___x_3112_);
v___x_3114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3114_, 0, v___x_3113_);
return v___x_3114_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__7(void){
_start:
{
size_t v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; 
v___x_3115_ = ((size_t)5ULL);
v___x_3116_ = lean_unsigned_to_nat(0u);
v___x_3117_ = lean_unsigned_to_nat(32u);
v___x_3118_ = lean_mk_empty_array_with_capacity(v___x_3117_);
v___x_3119_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__6, &l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__6_once, _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__6);
v___x_3120_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3120_, 0, v___x_3119_);
lean_ctor_set(v___x_3120_, 1, v___x_3118_);
lean_ctor_set(v___x_3120_, 2, v___x_3116_);
lean_ctor_set(v___x_3120_, 3, v___x_3116_);
lean_ctor_set_usize(v___x_3120_, 4, v___x_3115_);
return v___x_3120_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__8(void){
_start:
{
lean_object* v___x_3121_; lean_object* v___x_3122_; 
v___x_3121_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__0);
v___x_3122_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3122_, 0, v___x_3121_);
lean_ctor_set(v___x_3122_, 1, v___x_3121_);
lean_ctor_set(v___x_3122_, 2, v___x_3121_);
lean_ctor_set(v___x_3122_, 3, v___x_3121_);
lean_ctor_set(v___x_3122_, 4, v___x_3121_);
return v___x_3122_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__9(void){
_start:
{
lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; 
v___x_3123_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__8, &l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__8_once, _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__8);
v___x_3124_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__7, &l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__7_once, _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__7);
v___x_3125_ = lean_box(1);
v___x_3126_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__5, &l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__5_once, _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__5);
v___x_3127_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0_spec__0___closed__1);
v___x_3128_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3128_, 0, v___x_3127_);
lean_ctor_set(v___x_3128_, 1, v___x_3126_);
lean_ctor_set(v___x_3128_, 2, v___x_3125_);
lean_ctor_set(v___x_3128_, 3, v___x_3124_);
lean_ctor_set(v___x_3128_, 4, v___x_3123_);
return v___x_3128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr(lean_object* v_declName_3129_, lean_object* v_stx_3130_, uint8_t v_attrKind_3131_, lean_object* v_a_3132_, lean_object* v_a_3133_){
_start:
{
lean_object* v___x_3135_; lean_object* v___x_3136_; 
v___x_3135_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__1));
lean_inc(v_declName_3129_);
v___x_3136_ = l_Lean_ensureAttrDeclIsMeta(v___x_3135_, v_declName_3129_, v_attrKind_3131_, v_a_3132_, v_a_3133_);
if (lean_obj_tag(v___x_3136_) == 0)
{
lean_object* v___x_3137_; lean_object* v___x_3138_; uint8_t v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; 
lean_dec_ref_known(v___x_3136_, 1);
v___x_3137_ = lean_unsigned_to_nat(1u);
v___x_3138_ = l_Lean_Syntax_getArg(v_stx_3130_, v___x_3137_);
v___x_3139_ = l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase(v___x_3138_);
lean_dec(v___x_3138_);
v___x_3140_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__9, &l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__9_once, _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__9);
v___x_3141_ = lean_box(0);
v___x_3142_ = lean_st_mk_ref(v___x_3140_);
v___x_3143_ = l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttrCore(v_declName_3129_, v_attrKind_3131_, v___x_3139_, v_a_3132_, v_a_3133_);
if (lean_obj_tag(v___x_3143_) == 0)
{
lean_object* v___x_3145_; uint8_t v_isShared_3146_; uint8_t v_isSharedCheck_3151_; 
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3143_);
if (v_isSharedCheck_3151_ == 0)
{
lean_object* v_unused_3152_; 
v_unused_3152_ = lean_ctor_get(v___x_3143_, 0);
lean_dec(v_unused_3152_);
v___x_3145_ = v___x_3143_;
v_isShared_3146_ = v_isSharedCheck_3151_;
goto v_resetjp_3144_;
}
else
{
lean_dec(v___x_3143_);
v___x_3145_ = lean_box(0);
v_isShared_3146_ = v_isSharedCheck_3151_;
goto v_resetjp_3144_;
}
v_resetjp_3144_:
{
lean_object* v___x_3147_; lean_object* v___x_3149_; 
v___x_3147_ = lean_st_ref_get(v___x_3142_);
lean_dec(v___x_3142_);
lean_dec(v___x_3147_);
if (v_isShared_3146_ == 0)
{
lean_ctor_set(v___x_3145_, 0, v___x_3141_);
v___x_3149_ = v___x_3145_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v___x_3141_);
v___x_3149_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
return v___x_3149_;
}
}
}
else
{
lean_dec(v___x_3142_);
return v___x_3143_;
}
}
else
{
lean_dec(v_declName_3129_);
return v___x_3136_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___boxed(lean_object* v_declName_3153_, lean_object* v_stx_3154_, lean_object* v_attrKind_3155_, lean_object* v_a_3156_, lean_object* v_a_3157_, lean_object* v_a_3158_){
_start:
{
uint8_t v_attrKind_boxed_3159_; lean_object* v_res_3160_; 
v_attrKind_boxed_3159_ = lean_unbox(v_attrKind_3155_);
v_res_3160_ = l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr(v_declName_3153_, v_stx_3154_, v_attrKind_boxed_3159_, v_a_3156_, v_a_3157_);
lean_dec(v_a_3157_);
lean_dec_ref(v_a_3156_);
lean_dec(v_stx_3154_);
return v_res_3160_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0_spec__0(lean_object* v_00_u03b2_3161_){
_start:
{
lean_object* v___x_3162_; 
v___x_3162_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__2, &l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__2_once, _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__2);
return v___x_3162_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0___redArg(){
_start:
{
lean_object* v___x_3164_; 
v___x_3164_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__2, &l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__2_once, _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__2);
return v___x_3164_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0___redArg___boxed(lean_object* v___dummy_3165_){
_start:
{
lean_object* v_res_3166_; 
v_res_3166_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0___redArg();
return v_res_3166_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_Meta_Tactic_Cbv_addCbvSimprocAttr_spec__0(lean_object* v_00_u03b2_3167_){
_start:
{
lean_object* v___x_3168_; 
v___x_3168_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__2, &l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__2_once, _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__2);
return v___x_3168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttrCore(lean_object* v_ref_3171_, lean_object* v_declName_3172_, uint8_t v_phase_3173_, lean_object* v_proc_3174_){
_start:
{
lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v_keys_3178_; lean_object* v___x_3179_; 
v___x_3176_ = l_Lean_Meta_Tactic_Cbv_builtinCbvSimprocDeclsRef;
v___x_3177_ = lean_st_ref_get(v___x_3176_);
v_keys_3178_ = lean_ctor_get(v___x_3177_, 0);
lean_inc_ref(v_keys_3178_);
lean_dec(v___x_3177_);
v___x_3179_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_Cbv_getCbvSimprocDeclKeys_x3f_spec__0___redArg(v_keys_3178_, v_declName_3172_);
lean_dec_ref(v_keys_3178_);
if (lean_obj_tag(v___x_3179_) == 1)
{
lean_object* v_val_3180_; lean_object* v___x_3182_; uint8_t v_isShared_3183_; uint8_t v_isSharedCheck_3190_; 
v_val_3180_ = lean_ctor_get(v___x_3179_, 0);
v_isSharedCheck_3190_ = !lean_is_exclusive(v___x_3179_);
if (v_isSharedCheck_3190_ == 0)
{
v___x_3182_ = v___x_3179_;
v_isShared_3183_ = v_isSharedCheck_3190_;
goto v_resetjp_3181_;
}
else
{
lean_inc(v_val_3180_);
lean_dec(v___x_3179_);
v___x_3182_ = lean_box(0);
v_isShared_3183_ = v_isSharedCheck_3190_;
goto v_resetjp_3181_;
}
v_resetjp_3181_:
{
lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3188_; 
v___x_3184_ = lean_st_ref_take(v_ref_3171_);
v___x_3185_ = l_Lean_Meta_Tactic_Cbv_CbvSimprocs_addCore(v___x_3184_, v_val_3180_, v_declName_3172_, v_phase_3173_, v_proc_3174_);
v___x_3186_ = lean_st_ref_put(v_ref_3171_, v___x_3185_);
if (v_isShared_3183_ == 0)
{
lean_ctor_set_tag(v___x_3182_, 0);
lean_ctor_set(v___x_3182_, 0, v___x_3186_);
v___x_3188_ = v___x_3182_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3189_; 
v_reuseFailAlloc_3189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3189_, 0, v___x_3186_);
v___x_3188_ = v_reuseFailAlloc_3189_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
return v___x_3188_;
}
}
}
else
{
lean_object* v___x_3191_; lean_object* v___x_3192_; uint8_t v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; 
lean_dec(v___x_3179_);
lean_dec_ref(v_proc_3174_);
v___x_3191_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttrCore___closed__0));
v___x_3192_ = l_Lean_privateToUserName(v_declName_3172_);
v___x_3193_ = 1;
v___x_3194_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3192_, v___x_3193_);
v___x_3195_ = lean_string_append(v___x_3191_, v___x_3194_);
lean_dec_ref(v___x_3194_);
v___x_3196_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttrCore___closed__1));
v___x_3197_ = lean_string_append(v___x_3195_, v___x_3196_);
v___x_3198_ = lean_mk_io_user_error(v___x_3197_);
v___x_3199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3199_, 0, v___x_3198_);
return v___x_3199_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttrCore___boxed(lean_object* v_ref_3200_, lean_object* v_declName_3201_, lean_object* v_phase_3202_, lean_object* v_proc_3203_, lean_object* v_a_3204_){
_start:
{
uint8_t v_phase_boxed_3205_; lean_object* v_res_3206_; 
v_phase_boxed_3205_ = lean_unbox(v_phase_3202_);
v_res_3206_ = l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttrCore(v_ref_3200_, v_declName_3201_, v_phase_boxed_3205_, v_proc_3203_);
lean_dec(v_ref_3200_);
return v_res_3206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttr(lean_object* v_declName_3207_, uint8_t v_phase_3208_, lean_object* v_proc_3209_){
_start:
{
lean_object* v___x_3211_; lean_object* v___x_3212_; 
v___x_3211_ = l_Lean_Meta_Tactic_Cbv_builtinCbvSimprocsRef;
v___x_3212_ = l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttrCore(v___x_3211_, v_declName_3207_, v_phase_3208_, v_proc_3209_);
return v___x_3212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttr___boxed(lean_object* v_declName_3213_, lean_object* v_phase_3214_, lean_object* v_proc_3215_, lean_object* v_a_3216_){
_start:
{
uint8_t v_phase_boxed_3217_; lean_object* v_res_3218_; 
v_phase_boxed_3217_ = lean_unbox(v_phase_3214_);
v_res_3218_ = l_Lean_Meta_Tactic_Cbv_addCbvSimprocBuiltinAttr(v_declName_3213_, v_phase_boxed_3217_, v_proc_3215_);
return v_res_3218_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__2(void){
_start:
{
lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; 
v___x_3226_ = lean_box(0);
v___x_3227_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__1));
v___x_3228_ = l_Lean_mkConst(v___x_3227_, v___x_3226_);
return v___x_3228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc(lean_object* v_declName_3232_, lean_object* v_stx_3233_, lean_object* v_a_3234_, lean_object* v_a_3235_){
_start:
{
lean_object* v___x_3237_; lean_object* v___x_3238_; uint8_t v_phase_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___y_3244_; 
v___x_3237_ = lean_unsigned_to_nat(1u);
v___x_3238_ = l_Lean_Syntax_getArg(v_stx_3233_, v___x_3237_);
v_phase_3239_ = l_Lean_Meta_Tactic_Cbv_parseCbvSimprocPhase(v___x_3238_);
lean_dec(v___x_3238_);
v___x_3240_ = lean_box(0);
v___x_3241_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__2, &l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__2_once, _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__2);
lean_inc(v_declName_3232_);
v___x_3242_ = l___private_Lean_ToExpr_0__Lean_Name_toExprAux(v_declName_3232_);
switch(v_phase_3239_)
{
case 0:
{
lean_object* v___x_3276_; 
v___x_3276_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__7, &l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__7_once, _init_l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__7);
v___y_3244_ = v___x_3276_;
goto v___jp_3243_;
}
case 1:
{
lean_object* v___x_3277_; 
v___x_3277_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__10, &l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__10_once, _init_l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__10);
v___y_3244_ = v___x_3277_;
goto v___jp_3243_;
}
default: 
{
lean_object* v___x_3278_; 
v___x_3278_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__13, &l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__13_once, _init_l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase___lam__0___closed__13);
v___y_3244_ = v___x_3278_;
goto v___jp_3243_;
}
}
v___jp_3243_:
{
lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v_val_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; 
lean_inc(v_declName_3232_);
v___x_3245_ = l_Lean_mkConst(v_declName_3232_, v___x_3240_);
v___x_3246_ = lean_unsigned_to_nat(3u);
v___x_3247_ = lean_mk_empty_array_with_capacity(v___x_3246_);
v___x_3248_ = lean_array_push(v___x_3247_, v___x_3242_);
lean_inc_ref(v___y_3244_);
v___x_3249_ = lean_array_push(v___x_3248_, v___y_3244_);
v___x_3250_ = lean_array_push(v___x_3249_, v___x_3245_);
v_val_3251_ = l_Lean_mkAppN(v___x_3241_, v___x_3250_);
lean_dec_ref(v___x_3250_);
v___x_3252_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___closed__4));
v___x_3253_ = l_Lean_Name_append(v_declName_3232_, v___x_3252_);
v___x_3254_ = lean_obj_once(&l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__9, &l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__9_once, _init_l_Lean_Meta_Tactic_Cbv_addCbvSimprocAttr___closed__9);
v___x_3255_ = lean_st_mk_ref(v___x_3254_);
v___x_3256_ = l_Lean_Core_mkFreshUserName(v___x_3253_, v_a_3234_, v_a_3235_);
if (lean_obj_tag(v___x_3256_) == 0)
{
lean_object* v_a_3257_; lean_object* v___x_3258_; 
v_a_3257_ = lean_ctor_get(v___x_3256_, 0);
lean_inc(v_a_3257_);
lean_dec_ref_known(v___x_3256_, 1);
v___x_3258_ = l_Lean_declareBuiltin(v_a_3257_, v_val_3251_, v_a_3234_, v_a_3235_);
if (lean_obj_tag(v___x_3258_) == 0)
{
lean_object* v_a_3259_; lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3267_; 
v_a_3259_ = lean_ctor_get(v___x_3258_, 0);
v_isSharedCheck_3267_ = !lean_is_exclusive(v___x_3258_);
if (v_isSharedCheck_3267_ == 0)
{
v___x_3261_ = v___x_3258_;
v_isShared_3262_ = v_isSharedCheck_3267_;
goto v_resetjp_3260_;
}
else
{
lean_inc(v_a_3259_);
lean_dec(v___x_3258_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3267_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
lean_object* v___x_3263_; lean_object* v___x_3265_; 
v___x_3263_ = lean_st_ref_get(v___x_3255_);
lean_dec(v___x_3255_);
lean_dec(v___x_3263_);
if (v_isShared_3262_ == 0)
{
v___x_3265_ = v___x_3261_;
goto v_reusejp_3264_;
}
else
{
lean_object* v_reuseFailAlloc_3266_; 
v_reuseFailAlloc_3266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3266_, 0, v_a_3259_);
v___x_3265_ = v_reuseFailAlloc_3266_;
goto v_reusejp_3264_;
}
v_reusejp_3264_:
{
return v___x_3265_;
}
}
}
else
{
lean_dec(v___x_3255_);
return v___x_3258_;
}
}
else
{
lean_object* v_a_3268_; lean_object* v___x_3270_; uint8_t v_isShared_3271_; uint8_t v_isSharedCheck_3275_; 
lean_dec(v___x_3255_);
lean_dec_ref(v_val_3251_);
v_a_3268_ = lean_ctor_get(v___x_3256_, 0);
v_isSharedCheck_3275_ = !lean_is_exclusive(v___x_3256_);
if (v_isSharedCheck_3275_ == 0)
{
v___x_3270_ = v___x_3256_;
v_isShared_3271_ = v_isSharedCheck_3275_;
goto v_resetjp_3269_;
}
else
{
lean_inc(v_a_3268_);
lean_dec(v___x_3256_);
v___x_3270_ = lean_box(0);
v_isShared_3271_ = v_isSharedCheck_3275_;
goto v_resetjp_3269_;
}
v_resetjp_3269_:
{
lean_object* v___x_3273_; 
if (v_isShared_3271_ == 0)
{
v___x_3273_ = v___x_3270_;
goto v_reusejp_3272_;
}
else
{
lean_object* v_reuseFailAlloc_3274_; 
v_reuseFailAlloc_3274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3274_, 0, v_a_3268_);
v___x_3273_ = v_reuseFailAlloc_3274_;
goto v_reusejp_3272_;
}
v_reusejp_3272_:
{
return v___x_3273_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc___boxed(lean_object* v_declName_3279_, lean_object* v_stx_3280_, lean_object* v_a_3281_, lean_object* v_a_3282_, lean_object* v_a_3283_){
_start:
{
lean_object* v_res_3284_; 
v_res_3284_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc(v_declName_3279_, v_stx_3280_, v_a_3281_, v_a_3282_);
lean_dec(v_a_3282_);
lean_dec_ref(v_a_3281_);
lean_dec(v_stx_3280_);
return v_res_3284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3370_; lean_object* v___x_3371_; 
v___x_3370_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__32_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_));
v___x_3371_ = l_Lean_registerBuiltinAttribute(v___x_3370_);
return v___x_3371_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2____boxed(lean_object* v_a_3372_){
_start:
{
lean_object* v_res_3373_; 
v_res_3373_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_();
return v_res_3373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_(lean_object* v_declName_3374_, lean_object* v_stx_3375_, uint8_t v_x_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_){
_start:
{
lean_object* v___x_3380_; 
v___x_3380_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_addBuiltinCbvSimproc(v_declName_3374_, v_stx_3375_, v___y_3377_, v___y_3378_);
return v___x_3380_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2____boxed(lean_object* v_declName_3381_, lean_object* v_stx_3382_, lean_object* v_x_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_){
_start:
{
uint8_t v_x_117__boxed_3387_; lean_object* v_res_3388_; 
v_x_117__boxed_3387_ = lean_unbox(v_x_3383_);
v_res_3388_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_(v_declName_3381_, v_stx_3382_, v_x_117__boxed_3387_, v___y_3384_, v___y_3385_);
lean_dec(v___y_3385_);
lean_dec_ref(v___y_3384_);
lean_dec(v_stx_3382_);
return v_res_3388_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3390_; lean_object* v___x_3391_; 
v___x_3390_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_));
v___x_3391_ = l_Lean_stringToMessageData(v___x_3390_);
return v___x_3391_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_(lean_object* v_x_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_){
_start:
{
lean_object* v___x_3396_; lean_object* v___x_3397_; 
v___x_3396_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_);
v___x_3397_ = l_Lean_throwError___at___00Lean_Meta_Tactic_Cbv_registerCbvSimproc_spec__0___redArg(v___x_3396_, v___y_3393_, v___y_3394_);
return v___x_3397_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2____boxed(lean_object* v_x_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_){
_start:
{
lean_object* v_res_3402_; 
v_res_3402_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___lam__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_(v_x_3398_, v___y_3399_, v___y_3400_);
lean_dec(v___y_3400_);
lean_dec_ref(v___y_3399_);
lean_dec(v_x_3398_);
return v_res_3402_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; 
v___x_3405_ = lean_unsigned_to_nat(3124561870u);
v___x_3406_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_));
v___x_3407_ = l_Lean_Name_num___override(v___x_3406_, v___x_3405_);
return v___x_3407_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; 
v___x_3408_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_));
v___x_3409_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_);
v___x_3410_ = l_Lean_Name_str___override(v___x_3409_, v___x_3408_);
return v___x_3410_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; 
v___x_3411_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__27_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_));
v___x_3412_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_);
v___x_3413_ = l_Lean_Name_str___override(v___x_3412_, v___x_3411_);
return v___x_3413_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; 
v___x_3414_ = lean_unsigned_to_nat(2u);
v___x_3415_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_);
v___x_3416_ = l_Lean_Name_num___override(v___x_3415_, v___x_3414_);
return v___x_3416_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; 
v___x_3421_ = 1;
v___x_3422_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_));
v___x_3423_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_));
v___x_3424_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_);
v___x_3425_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3425_, 0, v___x_3424_);
lean_ctor_set(v___x_3425_, 1, v___x_3423_);
lean_ctor_set(v___x_3425_, 2, v___x_3422_);
lean_ctor_set_uint8(v___x_3425_, sizeof(void*)*3, v___x_3421_);
return v___x_3425_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_3426_; lean_object* v___f_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; 
v___f_3426_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_));
v___f_3427_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_));
v___x_3428_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_);
v___x_3429_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3429_, 0, v___x_3428_);
lean_ctor_set(v___x_3429_, 1, v___f_3427_);
lean_ctor_set(v___x_3429_, 2, v___f_3426_);
return v___x_3429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3431_; lean_object* v___x_3432_; 
v___x_3431_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_);
v___x_3432_ = l_Lean_registerBuiltinAttribute(v___x_3431_);
return v___x_3432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2____boxed(lean_object* v_a_3433_){
_start:
{
lean_object* v_res_3434_; 
v_res_3434_ = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_();
return v_res_3434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocs___redArg(lean_object* v_a_3435_){
_start:
{
lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v_env_3439_; lean_object* v___x_3440_; lean_object* v_ext_3441_; lean_object* v_toEnvExtension_3442_; lean_object* v_asyncMode_3443_; uint8_t v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; 
v___x_3437_ = l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default;
v___x_3438_ = lean_st_ref_get(v_a_3435_);
v_env_3439_ = lean_ctor_get(v___x_3438_, 0);
lean_inc_ref(v_env_3439_);
lean_dec(v___x_3438_);
v___x_3440_ = l_Lean_Meta_Tactic_Cbv_cbvSimprocExtension;
v_ext_3441_ = lean_ctor_get(v___x_3440_, 1);
v_toEnvExtension_3442_ = lean_ctor_get(v_ext_3441_, 0);
v_asyncMode_3443_ = lean_ctor_get(v_toEnvExtension_3442_, 2);
v___x_3444_ = 0;
v___x_3445_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_3437_, v___x_3440_, v_env_3439_, v_asyncMode_3443_, v___x_3444_);
v___x_3446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3446_, 0, v___x_3445_);
return v___x_3446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocs___redArg___boxed(lean_object* v_a_3447_, lean_object* v_a_3448_){
_start:
{
lean_object* v_res_3449_; 
v_res_3449_ = l_Lean_Meta_Tactic_Cbv_getCbvSimprocs___redArg(v_a_3447_);
lean_dec(v_a_3447_);
return v_res_3449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocs(lean_object* v_a_3450_, lean_object* v_a_3451_){
_start:
{
lean_object* v___x_3453_; 
v___x_3453_ = l_Lean_Meta_Tactic_Cbv_getCbvSimprocs___redArg(v_a_3451_);
return v___x_3453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_getCbvSimprocs___boxed(lean_object* v_a_3454_, lean_object* v_a_3455_, lean_object* v_a_3456_){
_start:
{
lean_object* v_res_3457_; 
v_res_3457_ = l_Lean_Meta_Tactic_Cbv_getCbvSimprocs(v_a_3454_, v_a_3455_);
lean_dec(v_a_3455_);
lean_dec_ref(v_a_3454_);
return v_res_3457_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; 
v___x_3458_ = lean_unsigned_to_nat(32u);
v___x_3459_ = lean_mk_empty_array_with_capacity(v___x_3458_);
v___x_3460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3459_);
return v___x_3460_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; 
v___x_3461_ = ((size_t)5ULL);
v___x_3462_ = lean_unsigned_to_nat(0u);
v___x_3463_ = lean_unsigned_to_nat(32u);
v___x_3464_ = lean_mk_empty_array_with_capacity(v___x_3463_);
v___x_3465_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg___closed__0);
v___x_3466_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3466_, 0, v___x_3465_);
lean_ctor_set(v___x_3466_, 1, v___x_3464_);
lean_ctor_set(v___x_3466_, 2, v___x_3462_);
lean_ctor_set(v___x_3466_, 3, v___x_3462_);
lean_ctor_set_usize(v___x_3466_, 4, v___x_3461_);
return v___x_3466_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg(lean_object* v___y_3467_){
_start:
{
lean_object* v___x_3469_; lean_object* v_traceState_3470_; lean_object* v_traces_3471_; lean_object* v___x_3472_; lean_object* v_traceState_3473_; lean_object* v_env_3474_; lean_object* v_nextMacroScope_3475_; lean_object* v_ngen_3476_; lean_object* v_auxDeclNGen_3477_; lean_object* v_cache_3478_; lean_object* v_recordedDeps_3479_; lean_object* v_messages_3480_; lean_object* v_infoState_3481_; lean_object* v_snapshotTasks_3482_; lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3501_; 
v___x_3469_ = lean_st_ref_get(v___y_3467_);
v_traceState_3470_ = lean_ctor_get(v___x_3469_, 4);
lean_inc_ref(v_traceState_3470_);
lean_dec(v___x_3469_);
v_traces_3471_ = lean_ctor_get(v_traceState_3470_, 0);
lean_inc_ref(v_traces_3471_);
lean_dec_ref(v_traceState_3470_);
v___x_3472_ = lean_st_ref_take(v___y_3467_);
v_traceState_3473_ = lean_ctor_get(v___x_3472_, 4);
v_env_3474_ = lean_ctor_get(v___x_3472_, 0);
v_nextMacroScope_3475_ = lean_ctor_get(v___x_3472_, 1);
v_ngen_3476_ = lean_ctor_get(v___x_3472_, 2);
v_auxDeclNGen_3477_ = lean_ctor_get(v___x_3472_, 3);
v_cache_3478_ = lean_ctor_get(v___x_3472_, 5);
v_recordedDeps_3479_ = lean_ctor_get(v___x_3472_, 6);
v_messages_3480_ = lean_ctor_get(v___x_3472_, 7);
v_infoState_3481_ = lean_ctor_get(v___x_3472_, 8);
v_snapshotTasks_3482_ = lean_ctor_get(v___x_3472_, 9);
v_isSharedCheck_3501_ = !lean_is_exclusive(v___x_3472_);
if (v_isSharedCheck_3501_ == 0)
{
v___x_3484_ = v___x_3472_;
v_isShared_3485_ = v_isSharedCheck_3501_;
goto v_resetjp_3483_;
}
else
{
lean_inc(v_snapshotTasks_3482_);
lean_inc(v_infoState_3481_);
lean_inc(v_messages_3480_);
lean_inc(v_recordedDeps_3479_);
lean_inc(v_cache_3478_);
lean_inc(v_traceState_3473_);
lean_inc(v_auxDeclNGen_3477_);
lean_inc(v_ngen_3476_);
lean_inc(v_nextMacroScope_3475_);
lean_inc(v_env_3474_);
lean_dec(v___x_3472_);
v___x_3484_ = lean_box(0);
v_isShared_3485_ = v_isSharedCheck_3501_;
goto v_resetjp_3483_;
}
v_resetjp_3483_:
{
uint64_t v_tid_3486_; lean_object* v___x_3488_; uint8_t v_isShared_3489_; uint8_t v_isSharedCheck_3499_; 
v_tid_3486_ = lean_ctor_get_uint64(v_traceState_3473_, sizeof(void*)*1);
v_isSharedCheck_3499_ = !lean_is_exclusive(v_traceState_3473_);
if (v_isSharedCheck_3499_ == 0)
{
lean_object* v_unused_3500_; 
v_unused_3500_ = lean_ctor_get(v_traceState_3473_, 0);
lean_dec(v_unused_3500_);
v___x_3488_ = v_traceState_3473_;
v_isShared_3489_ = v_isSharedCheck_3499_;
goto v_resetjp_3487_;
}
else
{
lean_dec(v_traceState_3473_);
v___x_3488_ = lean_box(0);
v_isShared_3489_ = v_isSharedCheck_3499_;
goto v_resetjp_3487_;
}
v_resetjp_3487_:
{
lean_object* v___x_3490_; lean_object* v___x_3492_; 
v___x_3490_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg___closed__1);
if (v_isShared_3489_ == 0)
{
lean_ctor_set(v___x_3488_, 0, v___x_3490_);
v___x_3492_ = v___x_3488_;
goto v_reusejp_3491_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v___x_3490_);
lean_ctor_set_uint64(v_reuseFailAlloc_3498_, sizeof(void*)*1, v_tid_3486_);
v___x_3492_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3491_;
}
v_reusejp_3491_:
{
lean_object* v___x_3494_; 
if (v_isShared_3485_ == 0)
{
lean_ctor_set(v___x_3484_, 4, v___x_3492_);
v___x_3494_ = v___x_3484_;
goto v_reusejp_3493_;
}
else
{
lean_object* v_reuseFailAlloc_3497_; 
v_reuseFailAlloc_3497_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3497_, 0, v_env_3474_);
lean_ctor_set(v_reuseFailAlloc_3497_, 1, v_nextMacroScope_3475_);
lean_ctor_set(v_reuseFailAlloc_3497_, 2, v_ngen_3476_);
lean_ctor_set(v_reuseFailAlloc_3497_, 3, v_auxDeclNGen_3477_);
lean_ctor_set(v_reuseFailAlloc_3497_, 4, v___x_3492_);
lean_ctor_set(v_reuseFailAlloc_3497_, 5, v_cache_3478_);
lean_ctor_set(v_reuseFailAlloc_3497_, 6, v_recordedDeps_3479_);
lean_ctor_set(v_reuseFailAlloc_3497_, 7, v_messages_3480_);
lean_ctor_set(v_reuseFailAlloc_3497_, 8, v_infoState_3481_);
lean_ctor_set(v_reuseFailAlloc_3497_, 9, v_snapshotTasks_3482_);
v___x_3494_ = v_reuseFailAlloc_3497_;
goto v_reusejp_3493_;
}
v_reusejp_3493_:
{
lean_object* v___x_3495_; lean_object* v___x_3496_; 
v___x_3495_ = lean_st_ref_put(v___y_3467_, v___x_3494_);
v___x_3496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3496_, 0, v_traces_3471_);
return v___x_3496_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg___boxed(lean_object* v___y_3502_, lean_object* v___y_3503_){
_start:
{
lean_object* v_res_3504_; 
v_res_3504_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg(v___y_3502_);
lean_dec(v___y_3502_);
return v_res_3504_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0(lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_){
_start:
{
lean_object* v___x_3515_; 
v___x_3515_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg(v___y_3513_);
return v___x_3515_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___boxed(lean_object* v___y_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_){
_start:
{
lean_object* v_res_3526_; 
v_res_3526_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0(v___y_3516_, v___y_3517_, v___y_3518_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_, v___y_3524_);
lean_dec(v___y_3524_);
lean_dec_ref(v___y_3523_);
lean_dec(v___y_3522_);
lean_dec_ref(v___y_3521_);
lean_dec(v___y_3520_);
lean_dec_ref(v___y_3519_);
lean_dec(v___y_3518_);
lean_dec_ref(v___y_3517_);
lean_dec(v___y_3516_);
return v_res_3526_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__1(lean_object* v_opts_3527_, lean_object* v_opt_3528_){
_start:
{
lean_object* v_name_3529_; lean_object* v_defValue_3530_; lean_object* v_map_3531_; lean_object* v___x_3532_; 
v_name_3529_ = lean_ctor_get(v_opt_3528_, 0);
v_defValue_3530_ = lean_ctor_get(v_opt_3528_, 1);
v_map_3531_ = lean_ctor_get(v_opts_3527_, 0);
v___x_3532_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3531_, v_name_3529_);
if (lean_obj_tag(v___x_3532_) == 0)
{
uint8_t v___x_3533_; 
v___x_3533_ = lean_unbox(v_defValue_3530_);
return v___x_3533_;
}
else
{
lean_object* v_val_3534_; 
v_val_3534_ = lean_ctor_get(v___x_3532_, 0);
lean_inc(v_val_3534_);
lean_dec_ref_known(v___x_3532_, 1);
if (lean_obj_tag(v_val_3534_) == 1)
{
uint8_t v_v_3535_; 
v_v_3535_ = lean_ctor_get_uint8(v_val_3534_, 0);
lean_dec_ref_known(v_val_3534_, 0);
return v_v_3535_;
}
else
{
uint8_t v___x_3536_; 
lean_dec(v_val_3534_);
v___x_3536_ = lean_unbox(v_defValue_3530_);
return v___x_3536_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__1___boxed(lean_object* v_opts_3537_, lean_object* v_opt_3538_){
_start:
{
uint8_t v_res_3539_; lean_object* v_r_3540_; 
v_res_3539_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__1(v_opts_3537_, v_opt_3538_);
lean_dec_ref(v_opt_3538_);
lean_dec_ref(v_opts_3537_);
v_r_3540_ = lean_box(v_res_3539_);
return v_r_3540_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__0(uint8_t v___x_3541_, lean_object* v_e_3542_, lean_object* v_snd_3543_, lean_object* v_proc_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_){
_start:
{
if (v___x_3541_ == 0)
{
lean_object* v___x_3555_; 
v___x_3555_ = l_Lean_Meta_Sym_Simp_simpOverApplied(v_e_3542_, v_snd_3543_, v_proc_3544_, v___y_3545_, v___y_3546_, v___y_3547_, v___y_3548_, v___y_3549_, v___y_3550_, v___y_3551_, v___y_3552_, v___y_3553_);
return v___x_3555_;
}
else
{
lean_object* v___x_3556_; 
lean_inc(v___y_3553_);
lean_inc_ref(v___y_3552_);
lean_inc(v___y_3551_);
lean_inc_ref(v___y_3550_);
lean_inc(v___y_3549_);
lean_inc_ref(v___y_3548_);
lean_inc(v___y_3547_);
lean_inc_ref(v___y_3546_);
lean_inc(v___y_3545_);
v___x_3556_ = lean_apply_11(v_proc_3544_, v_e_3542_, v___y_3545_, v___y_3546_, v___y_3547_, v___y_3548_, v___y_3549_, v___y_3550_, v___y_3551_, v___y_3552_, v___y_3553_, lean_box(0));
return v___x_3556_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__0___boxed(lean_object* v___x_3557_, lean_object* v_e_3558_, lean_object* v_snd_3559_, lean_object* v_proc_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_, lean_object* v___y_3568_, lean_object* v___y_3569_, lean_object* v___y_3570_){
_start:
{
uint8_t v___x_54854__boxed_3571_; lean_object* v_res_3572_; 
v___x_54854__boxed_3571_ = lean_unbox(v___x_3557_);
v_res_3572_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__0(v___x_54854__boxed_3571_, v_e_3558_, v_snd_3559_, v_proc_3560_, v___y_3561_, v___y_3562_, v___y_3563_, v___y_3564_, v___y_3565_, v___y_3566_, v___y_3567_, v___y_3568_, v___y_3569_);
lean_dec(v___y_3569_);
lean_dec_ref(v___y_3568_);
lean_dec(v___y_3567_);
lean_dec_ref(v___y_3566_);
lean_dec(v___y_3565_);
lean_dec_ref(v___y_3564_);
lean_dec(v___y_3563_);
lean_dec_ref(v___y_3562_);
lean_dec(v___y_3561_);
lean_dec(v_snd_3559_);
return v_res_3572_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__3___redArg(lean_object* v_x_3573_){
_start:
{
if (lean_obj_tag(v_x_3573_) == 0)
{
lean_object* v_a_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3582_; 
v_a_3575_ = lean_ctor_get(v_x_3573_, 0);
v_isSharedCheck_3582_ = !lean_is_exclusive(v_x_3573_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3577_ = v_x_3573_;
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_a_3575_);
lean_dec(v_x_3573_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
lean_object* v___x_3580_; 
if (v_isShared_3578_ == 0)
{
lean_ctor_set_tag(v___x_3577_, 1);
v___x_3580_ = v___x_3577_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v_a_3575_);
v___x_3580_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
return v___x_3580_;
}
}
}
else
{
lean_object* v_a_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3590_; 
v_a_3583_ = lean_ctor_get(v_x_3573_, 0);
v_isSharedCheck_3590_ = !lean_is_exclusive(v_x_3573_);
if (v_isSharedCheck_3590_ == 0)
{
v___x_3585_ = v_x_3573_;
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_a_3583_);
lean_dec(v_x_3573_);
v___x_3585_ = lean_box(0);
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
v_resetjp_3584_:
{
lean_object* v___x_3588_; 
if (v_isShared_3586_ == 0)
{
lean_ctor_set_tag(v___x_3585_, 0);
v___x_3588_ = v___x_3585_;
goto v_reusejp_3587_;
}
else
{
lean_object* v_reuseFailAlloc_3589_; 
v_reuseFailAlloc_3589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3589_, 0, v_a_3583_);
v___x_3588_ = v_reuseFailAlloc_3589_;
goto v_reusejp_3587_;
}
v_reusejp_3587_:
{
return v___x_3588_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__3___redArg___boxed(lean_object* v_x_3591_, lean_object* v___y_3592_){
_start:
{
lean_object* v_res_3593_; 
v_res_3593_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__3___redArg(v_x_3591_);
return v_res_3593_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2_spec__3(size_t v_sz_3594_, size_t v_i_3595_, lean_object* v_bs_3596_){
_start:
{
uint8_t v___x_3597_; 
v___x_3597_ = lean_usize_dec_lt(v_i_3595_, v_sz_3594_);
if (v___x_3597_ == 0)
{
return v_bs_3596_;
}
else
{
lean_object* v_v_3598_; lean_object* v_msg_3599_; lean_object* v___x_3600_; lean_object* v_bs_x27_3601_; size_t v___x_3602_; size_t v___x_3603_; lean_object* v___x_3604_; 
v_v_3598_ = lean_array_uget_borrowed(v_bs_3596_, v_i_3595_);
v_msg_3599_ = lean_ctor_get(v_v_3598_, 1);
lean_inc_ref(v_msg_3599_);
v___x_3600_ = lean_unsigned_to_nat(0u);
v_bs_x27_3601_ = lean_array_uset(v_bs_3596_, v_i_3595_, v___x_3600_);
v___x_3602_ = ((size_t)1ULL);
v___x_3603_ = lean_usize_add(v_i_3595_, v___x_3602_);
v___x_3604_ = lean_array_uset(v_bs_x27_3601_, v_i_3595_, v_msg_3599_);
v_i_3595_ = v___x_3603_;
v_bs_3596_ = v___x_3604_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2_spec__3___boxed(lean_object* v_sz_3606_, lean_object* v_i_3607_, lean_object* v_bs_3608_){
_start:
{
size_t v_sz_boxed_3609_; size_t v_i_boxed_3610_; lean_object* v_res_3611_; 
v_sz_boxed_3609_ = lean_unbox_usize(v_sz_3606_);
lean_dec(v_sz_3606_);
v_i_boxed_3610_ = lean_unbox_usize(v_i_3607_);
lean_dec(v_i_3607_);
v_res_3611_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2_spec__3(v_sz_boxed_3609_, v_i_boxed_3610_, v_bs_3608_);
return v_res_3611_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2_spec__4(lean_object* v_msgData_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_){
_start:
{
lean_object* v___x_3618_; lean_object* v_env_3619_; uint8_t v___x_3620_; lean_object* v_env_3621_; lean_object* v___x_3622_; lean_object* v_toCold_3623_; lean_object* v_mctx_3624_; lean_object* v_lctx_3625_; lean_object* v_options_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; 
v___x_3618_ = lean_st_ref_get(v___y_3616_);
v_env_3619_ = lean_ctor_get(v___x_3618_, 0);
lean_inc_ref(v_env_3619_);
lean_dec(v___x_3618_);
v___x_3620_ = 0;
v_env_3621_ = l_Lean_Environment_setRecordingDeps(v_env_3619_, v___x_3620_);
v___x_3622_ = lean_st_ref_get(v___y_3614_);
v_toCold_3623_ = lean_ctor_get(v___y_3615_, 0);
v_mctx_3624_ = lean_ctor_get(v___x_3622_, 0);
lean_inc_ref(v_mctx_3624_);
lean_dec(v___x_3622_);
v_lctx_3625_ = lean_ctor_get(v___y_3613_, 2);
v_options_3626_ = lean_ctor_get(v_toCold_3623_, 2);
lean_inc_ref(v_options_3626_);
lean_inc_ref(v_lctx_3625_);
v___x_3627_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3627_, 0, v_env_3621_);
lean_ctor_set(v___x_3627_, 1, v_mctx_3624_);
lean_ctor_set(v___x_3627_, 2, v_lctx_3625_);
lean_ctor_set(v___x_3627_, 3, v_options_3626_);
v___x_3628_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3628_, 0, v___x_3627_);
lean_ctor_set(v___x_3628_, 1, v_msgData_3612_);
v___x_3629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3629_, 0, v___x_3628_);
return v___x_3629_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2_spec__4___boxed(lean_object* v_msgData_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_){
_start:
{
lean_object* v_res_3636_; 
v_res_3636_ = l_Lean_addMessageContextFull___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2_spec__4(v_msgData_3630_, v___y_3631_, v___y_3632_, v___y_3633_, v___y_3634_);
lean_dec(v___y_3634_);
lean_dec_ref(v___y_3633_);
lean_dec(v___y_3632_);
lean_dec_ref(v___y_3631_);
return v_res_3636_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2___redArg(lean_object* v_oldTraces_3637_, lean_object* v_data_3638_, lean_object* v_ref_3639_, lean_object* v_msg_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_){
_start:
{
lean_object* v_toCold_3646_; lean_object* v_currRecDepth_3647_; lean_object* v_ref_3648_; uint16_t v_optionFlags_3649_; uint8_t v_suppressElabErrors_3650_; uint8_t v_checkDeprecated_3651_; uint8_t v_isRecordingDeps_3652_; lean_object* v_ref_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v_traceState_3656_; lean_object* v_traces_3657_; lean_object* v___x_3658_; size_t v_sz_3659_; size_t v___x_3660_; lean_object* v___x_3661_; lean_object* v_msg_3662_; lean_object* v___x_3663_; lean_object* v_a_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3702_; 
v_toCold_3646_ = lean_ctor_get(v___y_3643_, 0);
v_currRecDepth_3647_ = lean_ctor_get(v___y_3643_, 1);
v_ref_3648_ = lean_ctor_get(v___y_3643_, 2);
v_optionFlags_3649_ = lean_ctor_get_uint16(v___y_3643_, sizeof(void*)*3);
v_suppressElabErrors_3650_ = lean_ctor_get_uint8(v___y_3643_, sizeof(void*)*3 + 2);
v_checkDeprecated_3651_ = lean_ctor_get_uint8(v___y_3643_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3652_ = lean_ctor_get_uint8(v___y_3643_, sizeof(void*)*3 + 4);
v_ref_3653_ = l_Lean_replaceRef(v_ref_3639_, v_ref_3648_);
lean_inc(v_currRecDepth_3647_);
lean_inc_ref(v_toCold_3646_);
v___x_3654_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3654_, 0, v_toCold_3646_);
lean_ctor_set(v___x_3654_, 1, v_currRecDepth_3647_);
lean_ctor_set(v___x_3654_, 2, v_ref_3653_);
lean_ctor_set_uint16(v___x_3654_, sizeof(void*)*3, v_optionFlags_3649_);
lean_ctor_set_uint8(v___x_3654_, sizeof(void*)*3 + 2, v_suppressElabErrors_3650_);
lean_ctor_set_uint8(v___x_3654_, sizeof(void*)*3 + 3, v_checkDeprecated_3651_);
lean_ctor_set_uint8(v___x_3654_, sizeof(void*)*3 + 4, v_isRecordingDeps_3652_);
v___x_3655_ = lean_st_ref_get(v___y_3644_);
v_traceState_3656_ = lean_ctor_get(v___x_3655_, 4);
lean_inc_ref(v_traceState_3656_);
lean_dec(v___x_3655_);
v_traces_3657_ = lean_ctor_get(v_traceState_3656_, 0);
lean_inc_ref(v_traces_3657_);
lean_dec_ref(v_traceState_3656_);
v___x_3658_ = l_Lean_PersistentArray_toArray___redArg(v_traces_3657_);
lean_dec_ref(v_traces_3657_);
v_sz_3659_ = lean_array_size(v___x_3658_);
v___x_3660_ = ((size_t)0ULL);
v___x_3661_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2_spec__3(v_sz_3659_, v___x_3660_, v___x_3658_);
v_msg_3662_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_3662_, 0, v_data_3638_);
lean_ctor_set(v_msg_3662_, 1, v_msg_3640_);
lean_ctor_set(v_msg_3662_, 2, v___x_3661_);
v___x_3663_ = l_Lean_addMessageContextFull___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2_spec__4(v_msg_3662_, v___y_3641_, v___y_3642_, v___x_3654_, v___y_3644_);
lean_dec_ref_known(v___x_3654_, 3);
v_a_3664_ = lean_ctor_get(v___x_3663_, 0);
v_isSharedCheck_3702_ = !lean_is_exclusive(v___x_3663_);
if (v_isSharedCheck_3702_ == 0)
{
v___x_3666_ = v___x_3663_;
v_isShared_3667_ = v_isSharedCheck_3702_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_a_3664_);
lean_dec(v___x_3663_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3702_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v___x_3668_; lean_object* v_traceState_3669_; lean_object* v_env_3670_; lean_object* v_nextMacroScope_3671_; lean_object* v_ngen_3672_; lean_object* v_auxDeclNGen_3673_; lean_object* v_cache_3674_; lean_object* v_recordedDeps_3675_; lean_object* v_messages_3676_; lean_object* v_infoState_3677_; lean_object* v_snapshotTasks_3678_; lean_object* v___x_3680_; uint8_t v_isShared_3681_; uint8_t v_isSharedCheck_3701_; 
v___x_3668_ = lean_st_ref_take(v___y_3644_);
v_traceState_3669_ = lean_ctor_get(v___x_3668_, 4);
v_env_3670_ = lean_ctor_get(v___x_3668_, 0);
v_nextMacroScope_3671_ = lean_ctor_get(v___x_3668_, 1);
v_ngen_3672_ = lean_ctor_get(v___x_3668_, 2);
v_auxDeclNGen_3673_ = lean_ctor_get(v___x_3668_, 3);
v_cache_3674_ = lean_ctor_get(v___x_3668_, 5);
v_recordedDeps_3675_ = lean_ctor_get(v___x_3668_, 6);
v_messages_3676_ = lean_ctor_get(v___x_3668_, 7);
v_infoState_3677_ = lean_ctor_get(v___x_3668_, 8);
v_snapshotTasks_3678_ = lean_ctor_get(v___x_3668_, 9);
v_isSharedCheck_3701_ = !lean_is_exclusive(v___x_3668_);
if (v_isSharedCheck_3701_ == 0)
{
v___x_3680_ = v___x_3668_;
v_isShared_3681_ = v_isSharedCheck_3701_;
goto v_resetjp_3679_;
}
else
{
lean_inc(v_snapshotTasks_3678_);
lean_inc(v_infoState_3677_);
lean_inc(v_messages_3676_);
lean_inc(v_recordedDeps_3675_);
lean_inc(v_cache_3674_);
lean_inc(v_traceState_3669_);
lean_inc(v_auxDeclNGen_3673_);
lean_inc(v_ngen_3672_);
lean_inc(v_nextMacroScope_3671_);
lean_inc(v_env_3670_);
lean_dec(v___x_3668_);
v___x_3680_ = lean_box(0);
v_isShared_3681_ = v_isSharedCheck_3701_;
goto v_resetjp_3679_;
}
v_resetjp_3679_:
{
uint64_t v_tid_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3699_; 
v_tid_3682_ = lean_ctor_get_uint64(v_traceState_3669_, sizeof(void*)*1);
v_isSharedCheck_3699_ = !lean_is_exclusive(v_traceState_3669_);
if (v_isSharedCheck_3699_ == 0)
{
lean_object* v_unused_3700_; 
v_unused_3700_ = lean_ctor_get(v_traceState_3669_, 0);
lean_dec(v_unused_3700_);
v___x_3684_ = v_traceState_3669_;
v_isShared_3685_ = v_isSharedCheck_3699_;
goto v_resetjp_3683_;
}
else
{
lean_dec(v_traceState_3669_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3699_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3690_; 
v___x_3686_ = lean_box(0);
v___x_3687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3687_, 0, v_ref_3639_);
lean_ctor_set(v___x_3687_, 1, v_a_3664_);
v___x_3688_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_3637_, v___x_3687_);
if (v_isShared_3685_ == 0)
{
lean_ctor_set(v___x_3684_, 0, v___x_3688_);
v___x_3690_ = v___x_3684_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3698_; 
v_reuseFailAlloc_3698_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3698_, 0, v___x_3688_);
lean_ctor_set_uint64(v_reuseFailAlloc_3698_, sizeof(void*)*1, v_tid_3682_);
v___x_3690_ = v_reuseFailAlloc_3698_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
lean_object* v___x_3692_; 
if (v_isShared_3681_ == 0)
{
lean_ctor_set(v___x_3680_, 4, v___x_3690_);
v___x_3692_ = v___x_3680_;
goto v_reusejp_3691_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v_env_3670_);
lean_ctor_set(v_reuseFailAlloc_3697_, 1, v_nextMacroScope_3671_);
lean_ctor_set(v_reuseFailAlloc_3697_, 2, v_ngen_3672_);
lean_ctor_set(v_reuseFailAlloc_3697_, 3, v_auxDeclNGen_3673_);
lean_ctor_set(v_reuseFailAlloc_3697_, 4, v___x_3690_);
lean_ctor_set(v_reuseFailAlloc_3697_, 5, v_cache_3674_);
lean_ctor_set(v_reuseFailAlloc_3697_, 6, v_recordedDeps_3675_);
lean_ctor_set(v_reuseFailAlloc_3697_, 7, v_messages_3676_);
lean_ctor_set(v_reuseFailAlloc_3697_, 8, v_infoState_3677_);
lean_ctor_set(v_reuseFailAlloc_3697_, 9, v_snapshotTasks_3678_);
v___x_3692_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3691_;
}
v_reusejp_3691_:
{
lean_object* v___x_3693_; lean_object* v___x_3695_; 
v___x_3693_ = lean_st_ref_put(v___y_3644_, v___x_3692_);
if (v_isShared_3667_ == 0)
{
lean_ctor_set(v___x_3666_, 0, v___x_3686_);
v___x_3695_ = v___x_3666_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v___x_3686_);
v___x_3695_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
return v___x_3695_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2___redArg___boxed(lean_object* v_oldTraces_3703_, lean_object* v_data_3704_, lean_object* v_ref_3705_, lean_object* v_msg_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_){
_start:
{
lean_object* v_res_3712_; 
v_res_3712_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2___redArg(v_oldTraces_3703_, v_data_3704_, v_ref_3705_, v_msg_3706_, v___y_3707_, v___y_3708_, v___y_3709_, v___y_3710_);
lean_dec(v___y_3710_);
lean_dec_ref(v___y_3709_);
lean_dec(v___y_3708_);
lean_dec_ref(v___y_3707_);
return v_res_3712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__5(lean_object* v_opts_3713_, lean_object* v_opt_3714_){
_start:
{
lean_object* v_name_3715_; lean_object* v_defValue_3716_; lean_object* v_map_3717_; lean_object* v___x_3718_; 
v_name_3715_ = lean_ctor_get(v_opt_3714_, 0);
v_defValue_3716_ = lean_ctor_get(v_opt_3714_, 1);
v_map_3717_ = lean_ctor_get(v_opts_3713_, 0);
v___x_3718_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3717_, v_name_3715_);
if (lean_obj_tag(v___x_3718_) == 0)
{
lean_inc(v_defValue_3716_);
return v_defValue_3716_;
}
else
{
lean_object* v_val_3719_; 
v_val_3719_ = lean_ctor_get(v___x_3718_, 0);
lean_inc(v_val_3719_);
lean_dec_ref_known(v___x_3718_, 1);
if (lean_obj_tag(v_val_3719_) == 3)
{
lean_object* v_v_3720_; 
v_v_3720_ = lean_ctor_get(v_val_3719_, 0);
lean_inc(v_v_3720_);
lean_dec_ref_known(v_val_3719_, 1);
return v_v_3720_;
}
else
{
lean_dec(v_val_3719_);
lean_inc(v_defValue_3716_);
return v_defValue_3716_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__5___boxed(lean_object* v_opts_3721_, lean_object* v_opt_3722_){
_start:
{
lean_object* v_res_3723_; 
v_res_3723_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__5(v_opts_3721_, v_opt_3722_);
lean_dec_ref(v_opt_3722_);
lean_dec_ref(v_opts_3721_);
return v_res_3723_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__4(lean_object* v_e_3724_){
_start:
{
if (lean_obj_tag(v_e_3724_) == 0)
{
uint8_t v___x_3725_; 
v___x_3725_ = 2;
return v___x_3725_;
}
else
{
uint8_t v___x_3726_; 
v___x_3726_ = 0;
return v___x_3726_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__4___boxed(lean_object* v_e_3727_){
_start:
{
uint8_t v_res_3728_; lean_object* v_r_3729_; 
v_res_3728_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__4(v_e_3727_);
lean_dec_ref(v_e_3727_);
v_r_3729_ = lean_box(v_res_3728_);
return v_r_3729_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__0(void){
_start:
{
lean_object* v___x_3730_; double v___x_3731_; 
v___x_3730_ = lean_unsigned_to_nat(0u);
v___x_3731_ = lean_float_of_nat(v___x_3730_);
return v___x_3731_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__2(void){
_start:
{
lean_object* v___x_3733_; lean_object* v___x_3734_; 
v___x_3733_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__1));
v___x_3734_ = l_Lean_stringToMessageData(v___x_3733_);
return v___x_3734_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__3(void){
_start:
{
lean_object* v___x_3735_; double v___x_3736_; 
v___x_3735_ = lean_unsigned_to_nat(1000u);
v___x_3736_ = lean_float_of_nat(v___x_3735_);
return v___x_3736_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2(lean_object* v_cls_3737_, uint8_t v_collapsed_3738_, lean_object* v_tag_3739_, lean_object* v_opts_3740_, uint8_t v_clsEnabled_3741_, lean_object* v_oldTraces_3742_, lean_object* v_msg_3743_, lean_object* v_resStartStop_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_){
_start:
{
lean_object* v_fst_3755_; lean_object* v_snd_3756_; lean_object* v___y_3758_; lean_object* v___y_3759_; lean_object* v_data_3760_; lean_object* v_fst_3771_; lean_object* v_snd_3772_; lean_object* v___x_3773_; uint8_t v___x_3774_; lean_object* v___y_3776_; lean_object* v_a_3777_; uint8_t v___y_3792_; double v___y_3824_; 
v_fst_3755_ = lean_ctor_get(v_resStartStop_3744_, 0);
lean_inc(v_fst_3755_);
v_snd_3756_ = lean_ctor_get(v_resStartStop_3744_, 1);
lean_inc(v_snd_3756_);
lean_dec_ref(v_resStartStop_3744_);
v_fst_3771_ = lean_ctor_get(v_snd_3756_, 0);
lean_inc(v_fst_3771_);
v_snd_3772_ = lean_ctor_get(v_snd_3756_, 1);
lean_inc(v_snd_3772_);
lean_dec(v_snd_3756_);
v___x_3773_ = l_Lean_trace_profiler;
v___x_3774_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__1(v_opts_3740_, v___x_3773_);
if (v___x_3774_ == 0)
{
v___y_3792_ = v___x_3774_;
goto v___jp_3791_;
}
else
{
lean_object* v___x_3829_; uint8_t v___x_3830_; 
v___x_3829_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3830_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__1(v_opts_3740_, v___x_3829_);
if (v___x_3830_ == 0)
{
lean_object* v___x_3831_; lean_object* v___x_3832_; double v___x_3833_; double v___x_3834_; double v___x_3835_; 
v___x_3831_ = l_Lean_trace_profiler_threshold;
v___x_3832_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__5(v_opts_3740_, v___x_3831_);
v___x_3833_ = lean_float_of_nat(v___x_3832_);
v___x_3834_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__3);
v___x_3835_ = lean_float_div(v___x_3833_, v___x_3834_);
v___y_3824_ = v___x_3835_;
goto v___jp_3823_;
}
else
{
lean_object* v___x_3836_; lean_object* v___x_3837_; double v___x_3838_; 
v___x_3836_ = l_Lean_trace_profiler_threshold;
v___x_3837_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__5(v_opts_3740_, v___x_3836_);
v___x_3838_ = lean_float_of_nat(v___x_3837_);
v___y_3824_ = v___x_3838_;
goto v___jp_3823_;
}
}
v___jp_3757_:
{
lean_object* v___x_3761_; 
lean_inc(v___y_3759_);
v___x_3761_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2___redArg(v_oldTraces_3742_, v_data_3760_, v___y_3759_, v___y_3758_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_);
if (lean_obj_tag(v___x_3761_) == 0)
{
lean_object* v___x_3762_; 
lean_dec_ref_known(v___x_3761_, 1);
v___x_3762_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__3___redArg(v_fst_3755_);
return v___x_3762_;
}
else
{
lean_object* v_a_3763_; lean_object* v___x_3765_; uint8_t v_isShared_3766_; uint8_t v_isSharedCheck_3770_; 
lean_dec(v_fst_3755_);
v_a_3763_ = lean_ctor_get(v___x_3761_, 0);
v_isSharedCheck_3770_ = !lean_is_exclusive(v___x_3761_);
if (v_isSharedCheck_3770_ == 0)
{
v___x_3765_ = v___x_3761_;
v_isShared_3766_ = v_isSharedCheck_3770_;
goto v_resetjp_3764_;
}
else
{
lean_inc(v_a_3763_);
lean_dec(v___x_3761_);
v___x_3765_ = lean_box(0);
v_isShared_3766_ = v_isSharedCheck_3770_;
goto v_resetjp_3764_;
}
v_resetjp_3764_:
{
lean_object* v___x_3768_; 
if (v_isShared_3766_ == 0)
{
v___x_3768_ = v___x_3765_;
goto v_reusejp_3767_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v_a_3763_);
v___x_3768_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3767_;
}
v_reusejp_3767_:
{
return v___x_3768_;
}
}
}
}
v___jp_3775_:
{
uint8_t v_result_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; double v___x_3781_; lean_object* v_data_3782_; 
v_result_3778_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__4(v_fst_3755_);
v___x_3779_ = lean_box(v_result_3778_);
v___x_3780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3780_, 0, v___x_3779_);
v___x_3781_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__0);
lean_inc_ref(v_tag_3739_);
lean_inc_ref(v___x_3780_);
lean_inc(v_cls_3737_);
v_data_3782_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3782_, 0, v_cls_3737_);
lean_ctor_set(v_data_3782_, 1, v___x_3780_);
lean_ctor_set(v_data_3782_, 2, v_tag_3739_);
lean_ctor_set_float(v_data_3782_, sizeof(void*)*3, v___x_3781_);
lean_ctor_set_float(v_data_3782_, sizeof(void*)*3 + 8, v___x_3781_);
lean_ctor_set_uint8(v_data_3782_, sizeof(void*)*3 + 16, v_collapsed_3738_);
if (v___x_3774_ == 0)
{
lean_dec_ref_known(v___x_3780_, 1);
lean_dec(v_snd_3772_);
lean_dec(v_fst_3771_);
lean_dec_ref(v_tag_3739_);
lean_dec(v_cls_3737_);
v___y_3758_ = v_a_3777_;
v___y_3759_ = v___y_3776_;
v_data_3760_ = v_data_3782_;
goto v___jp_3757_;
}
else
{
lean_object* v_data_3783_; double v___x_3784_; double v___x_3785_; 
lean_dec_ref_known(v_data_3782_, 3);
v_data_3783_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3783_, 0, v_cls_3737_);
lean_ctor_set(v_data_3783_, 1, v___x_3780_);
lean_ctor_set(v_data_3783_, 2, v_tag_3739_);
v___x_3784_ = lean_unbox_float(v_fst_3771_);
lean_dec(v_fst_3771_);
lean_ctor_set_float(v_data_3783_, sizeof(void*)*3, v___x_3784_);
v___x_3785_ = lean_unbox_float(v_snd_3772_);
lean_dec(v_snd_3772_);
lean_ctor_set_float(v_data_3783_, sizeof(void*)*3 + 8, v___x_3785_);
lean_ctor_set_uint8(v_data_3783_, sizeof(void*)*3 + 16, v_collapsed_3738_);
v___y_3758_ = v_a_3777_;
v___y_3759_ = v___y_3776_;
v_data_3760_ = v_data_3783_;
goto v___jp_3757_;
}
}
v___jp_3786_:
{
lean_object* v_ref_3787_; lean_object* v___x_3788_; 
v_ref_3787_ = lean_ctor_get(v___y_3752_, 2);
lean_inc(v___y_3753_);
lean_inc_ref(v___y_3752_);
lean_inc(v___y_3751_);
lean_inc_ref(v___y_3750_);
lean_inc(v___y_3749_);
lean_inc_ref(v___y_3748_);
lean_inc(v___y_3747_);
lean_inc_ref(v___y_3746_);
lean_inc(v___y_3745_);
lean_inc(v_fst_3755_);
v___x_3788_ = lean_apply_11(v_msg_3743_, v_fst_3755_, v___y_3745_, v___y_3746_, v___y_3747_, v___y_3748_, v___y_3749_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_, lean_box(0));
if (lean_obj_tag(v___x_3788_) == 0)
{
lean_object* v_a_3789_; 
v_a_3789_ = lean_ctor_get(v___x_3788_, 0);
lean_inc(v_a_3789_);
lean_dec_ref_known(v___x_3788_, 1);
v___y_3776_ = v_ref_3787_;
v_a_3777_ = v_a_3789_;
goto v___jp_3775_;
}
else
{
lean_object* v___x_3790_; 
lean_dec_ref_known(v___x_3788_, 1);
v___x_3790_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___closed__2);
v___y_3776_ = v_ref_3787_;
v_a_3777_ = v___x_3790_;
goto v___jp_3775_;
}
}
v___jp_3791_:
{
if (v_clsEnabled_3741_ == 0)
{
if (v___y_3792_ == 0)
{
lean_object* v___x_3793_; lean_object* v_traceState_3794_; lean_object* v_env_3795_; lean_object* v_nextMacroScope_3796_; lean_object* v_ngen_3797_; lean_object* v_auxDeclNGen_3798_; lean_object* v_cache_3799_; lean_object* v_recordedDeps_3800_; lean_object* v_messages_3801_; lean_object* v_infoState_3802_; lean_object* v_snapshotTasks_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3822_; 
lean_dec(v_snd_3772_);
lean_dec(v_fst_3771_);
lean_dec_ref(v_msg_3743_);
lean_dec_ref(v_tag_3739_);
lean_dec(v_cls_3737_);
v___x_3793_ = lean_st_ref_take(v___y_3753_);
v_traceState_3794_ = lean_ctor_get(v___x_3793_, 4);
v_env_3795_ = lean_ctor_get(v___x_3793_, 0);
v_nextMacroScope_3796_ = lean_ctor_get(v___x_3793_, 1);
v_ngen_3797_ = lean_ctor_get(v___x_3793_, 2);
v_auxDeclNGen_3798_ = lean_ctor_get(v___x_3793_, 3);
v_cache_3799_ = lean_ctor_get(v___x_3793_, 5);
v_recordedDeps_3800_ = lean_ctor_get(v___x_3793_, 6);
v_messages_3801_ = lean_ctor_get(v___x_3793_, 7);
v_infoState_3802_ = lean_ctor_get(v___x_3793_, 8);
v_snapshotTasks_3803_ = lean_ctor_get(v___x_3793_, 9);
v_isSharedCheck_3822_ = !lean_is_exclusive(v___x_3793_);
if (v_isSharedCheck_3822_ == 0)
{
v___x_3805_ = v___x_3793_;
v_isShared_3806_ = v_isSharedCheck_3822_;
goto v_resetjp_3804_;
}
else
{
lean_inc(v_snapshotTasks_3803_);
lean_inc(v_infoState_3802_);
lean_inc(v_messages_3801_);
lean_inc(v_recordedDeps_3800_);
lean_inc(v_cache_3799_);
lean_inc(v_traceState_3794_);
lean_inc(v_auxDeclNGen_3798_);
lean_inc(v_ngen_3797_);
lean_inc(v_nextMacroScope_3796_);
lean_inc(v_env_3795_);
lean_dec(v___x_3793_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3822_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
uint64_t v_tid_3807_; lean_object* v_traces_3808_; lean_object* v___x_3810_; uint8_t v_isShared_3811_; uint8_t v_isSharedCheck_3821_; 
v_tid_3807_ = lean_ctor_get_uint64(v_traceState_3794_, sizeof(void*)*1);
v_traces_3808_ = lean_ctor_get(v_traceState_3794_, 0);
v_isSharedCheck_3821_ = !lean_is_exclusive(v_traceState_3794_);
if (v_isSharedCheck_3821_ == 0)
{
v___x_3810_ = v_traceState_3794_;
v_isShared_3811_ = v_isSharedCheck_3821_;
goto v_resetjp_3809_;
}
else
{
lean_inc(v_traces_3808_);
lean_dec(v_traceState_3794_);
v___x_3810_ = lean_box(0);
v_isShared_3811_ = v_isSharedCheck_3821_;
goto v_resetjp_3809_;
}
v_resetjp_3809_:
{
lean_object* v___x_3812_; lean_object* v___x_3814_; 
v___x_3812_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_3742_, v_traces_3808_);
lean_dec_ref(v_traces_3808_);
if (v_isShared_3811_ == 0)
{
lean_ctor_set(v___x_3810_, 0, v___x_3812_);
v___x_3814_ = v___x_3810_;
goto v_reusejp_3813_;
}
else
{
lean_object* v_reuseFailAlloc_3820_; 
v_reuseFailAlloc_3820_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3820_, 0, v___x_3812_);
lean_ctor_set_uint64(v_reuseFailAlloc_3820_, sizeof(void*)*1, v_tid_3807_);
v___x_3814_ = v_reuseFailAlloc_3820_;
goto v_reusejp_3813_;
}
v_reusejp_3813_:
{
lean_object* v___x_3816_; 
if (v_isShared_3806_ == 0)
{
lean_ctor_set(v___x_3805_, 4, v___x_3814_);
v___x_3816_ = v___x_3805_;
goto v_reusejp_3815_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v_env_3795_);
lean_ctor_set(v_reuseFailAlloc_3819_, 1, v_nextMacroScope_3796_);
lean_ctor_set(v_reuseFailAlloc_3819_, 2, v_ngen_3797_);
lean_ctor_set(v_reuseFailAlloc_3819_, 3, v_auxDeclNGen_3798_);
lean_ctor_set(v_reuseFailAlloc_3819_, 4, v___x_3814_);
lean_ctor_set(v_reuseFailAlloc_3819_, 5, v_cache_3799_);
lean_ctor_set(v_reuseFailAlloc_3819_, 6, v_recordedDeps_3800_);
lean_ctor_set(v_reuseFailAlloc_3819_, 7, v_messages_3801_);
lean_ctor_set(v_reuseFailAlloc_3819_, 8, v_infoState_3802_);
lean_ctor_set(v_reuseFailAlloc_3819_, 9, v_snapshotTasks_3803_);
v___x_3816_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3815_;
}
v_reusejp_3815_:
{
lean_object* v___x_3817_; lean_object* v___x_3818_; 
v___x_3817_ = lean_st_ref_put(v___y_3753_, v___x_3816_);
v___x_3818_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__3___redArg(v_fst_3755_);
return v___x_3818_;
}
}
}
}
}
else
{
goto v___jp_3786_;
}
}
else
{
goto v___jp_3786_;
}
}
v___jp_3823_:
{
double v___x_3825_; double v___x_3826_; double v___x_3827_; uint8_t v___x_3828_; 
v___x_3825_ = lean_unbox_float(v_snd_3772_);
v___x_3826_ = lean_unbox_float(v_fst_3771_);
v___x_3827_ = lean_float_sub(v___x_3825_, v___x_3826_);
v___x_3828_ = lean_float_decLt(v___y_3824_, v___x_3827_);
v___y_3792_ = v___x_3828_;
goto v___jp_3791_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2___boxed(lean_object** _args){
lean_object* v_cls_3839_ = _args[0];
lean_object* v_collapsed_3840_ = _args[1];
lean_object* v_tag_3841_ = _args[2];
lean_object* v_opts_3842_ = _args[3];
lean_object* v_clsEnabled_3843_ = _args[4];
lean_object* v_oldTraces_3844_ = _args[5];
lean_object* v_msg_3845_ = _args[6];
lean_object* v_resStartStop_3846_ = _args[7];
lean_object* v___y_3847_ = _args[8];
lean_object* v___y_3848_ = _args[9];
lean_object* v___y_3849_ = _args[10];
lean_object* v___y_3850_ = _args[11];
lean_object* v___y_3851_ = _args[12];
lean_object* v___y_3852_ = _args[13];
lean_object* v___y_3853_ = _args[14];
lean_object* v___y_3854_ = _args[15];
lean_object* v___y_3855_ = _args[16];
lean_object* v___y_3856_ = _args[17];
_start:
{
uint8_t v_collapsed_boxed_3857_; uint8_t v_clsEnabled_boxed_3858_; lean_object* v_res_3859_; 
v_collapsed_boxed_3857_ = lean_unbox(v_collapsed_3840_);
v_clsEnabled_boxed_3858_ = lean_unbox(v_clsEnabled_3843_);
v_res_3859_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2(v_cls_3839_, v_collapsed_boxed_3857_, v_tag_3841_, v_opts_3842_, v_clsEnabled_boxed_3858_, v_oldTraces_3844_, v_msg_3845_, v_resStartStop_3846_, v___y_3847_, v___y_3848_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_);
lean_dec(v___y_3855_);
lean_dec_ref(v___y_3854_);
lean_dec(v___y_3853_);
lean_dec_ref(v___y_3852_);
lean_dec(v___y_3851_);
lean_dec_ref(v___y_3850_);
lean_dec(v___y_3849_);
lean_dec_ref(v___y_3848_);
lean_dec(v___y_3847_);
lean_dec_ref(v_opts_3842_);
return v_res_3859_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3861_; lean_object* v___x_3862_; 
v___x_3861_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__0));
v___x_3862_ = l_Lean_stringToMessageData(v___x_3861_);
return v___x_3862_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__3(void){
_start:
{
lean_object* v___x_3864_; lean_object* v___x_3865_; 
v___x_3864_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__2));
v___x_3865_ = l_Lean_stringToMessageData(v___x_3864_);
return v___x_3865_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__5(void){
_start:
{
lean_object* v___x_3867_; lean_object* v___x_3868_; 
v___x_3867_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__4));
v___x_3868_ = l_Lean_stringToMessageData(v___x_3867_);
return v___x_3868_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__7(void){
_start:
{
lean_object* v___x_3870_; lean_object* v___x_3871_; 
v___x_3870_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__6));
v___x_3871_ = l_Lean_stringToMessageData(v___x_3870_);
return v___x_3871_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__9(void){
_start:
{
lean_object* v___x_3873_; lean_object* v___x_3874_; 
v___x_3873_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__8));
v___x_3874_ = l_Lean_stringToMessageData(v___x_3873_);
return v___x_3874_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__11(void){
_start:
{
lean_object* v___x_3876_; lean_object* v___x_3877_; 
v___x_3876_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__10));
v___x_3877_ = l_Lean_stringToMessageData(v___x_3876_);
return v___x_3877_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1(lean_object* v___x_3878_, lean_object* v_e_3879_, lean_object* v_x_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_){
_start:
{
if (lean_obj_tag(v_x_3880_) == 0)
{
lean_object* v_a_3891_; lean_object* v___x_3893_; uint8_t v_isShared_3894_; uint8_t v_isSharedCheck_3905_; 
lean_dec_ref(v_e_3879_);
v_a_3891_ = lean_ctor_get(v_x_3880_, 0);
v_isSharedCheck_3905_ = !lean_is_exclusive(v_x_3880_);
if (v_isSharedCheck_3905_ == 0)
{
v___x_3893_ = v_x_3880_;
v_isShared_3894_ = v_isSharedCheck_3905_;
goto v_resetjp_3892_;
}
else
{
lean_inc(v_a_3891_);
lean_dec(v_x_3880_);
v___x_3893_ = lean_box(0);
v_isShared_3894_ = v_isSharedCheck_3905_;
goto v_resetjp_3892_;
}
v_resetjp_3892_:
{
lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3903_; 
v___x_3895_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__1);
v___x_3896_ = l_Lean_MessageData_ofName(v___x_3878_);
v___x_3897_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3897_, 0, v___x_3895_);
lean_ctor_set(v___x_3897_, 1, v___x_3896_);
v___x_3898_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__3);
v___x_3899_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3899_, 0, v___x_3897_);
lean_ctor_set(v___x_3899_, 1, v___x_3898_);
v___x_3900_ = l_Lean_Exception_toMessageData(v_a_3891_);
v___x_3901_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3901_, 0, v___x_3899_);
lean_ctor_set(v___x_3901_, 1, v___x_3900_);
if (v_isShared_3894_ == 0)
{
lean_ctor_set(v___x_3893_, 0, v___x_3901_);
v___x_3903_ = v___x_3893_;
goto v_reusejp_3902_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v___x_3901_);
v___x_3903_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3902_;
}
v_reusejp_3902_:
{
return v___x_3903_;
}
}
}
else
{
lean_object* v_a_3906_; lean_object* v___x_3908_; uint8_t v_isShared_3909_; uint8_t v_isSharedCheck_3944_; 
v_a_3906_ = lean_ctor_get(v_x_3880_, 0);
v_isSharedCheck_3944_ = !lean_is_exclusive(v_x_3880_);
if (v_isSharedCheck_3944_ == 0)
{
v___x_3908_ = v_x_3880_;
v_isShared_3909_ = v_isSharedCheck_3944_;
goto v_resetjp_3907_;
}
else
{
lean_inc(v_a_3906_);
lean_dec(v_x_3880_);
v___x_3908_ = lean_box(0);
v_isShared_3909_ = v_isSharedCheck_3944_;
goto v_resetjp_3907_;
}
v_resetjp_3907_:
{
if (lean_obj_tag(v_a_3906_) == 0)
{
uint8_t v_done_3910_; 
v_done_3910_ = lean_ctor_get_uint8(v_a_3906_, 0);
lean_dec_ref_known(v_a_3906_, 0);
if (v_done_3910_ == 1)
{
lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3919_; 
v___x_3911_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__1);
v___x_3912_ = l_Lean_MessageData_ofName(v___x_3878_);
v___x_3913_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3913_, 0, v___x_3911_);
lean_ctor_set(v___x_3913_, 1, v___x_3912_);
v___x_3914_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__5);
v___x_3915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3915_, 0, v___x_3913_);
lean_ctor_set(v___x_3915_, 1, v___x_3914_);
v___x_3916_ = l_Lean_indentExpr(v_e_3879_);
v___x_3917_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3917_, 0, v___x_3915_);
lean_ctor_set(v___x_3917_, 1, v___x_3916_);
if (v_isShared_3909_ == 0)
{
lean_ctor_set_tag(v___x_3908_, 0);
lean_ctor_set(v___x_3908_, 0, v___x_3917_);
v___x_3919_ = v___x_3908_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v___x_3917_);
v___x_3919_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3918_;
}
v_reusejp_3918_:
{
return v___x_3919_;
}
}
else
{
lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3927_; 
lean_dec_ref(v_e_3879_);
v___x_3921_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__1);
v___x_3922_ = l_Lean_MessageData_ofName(v___x_3878_);
v___x_3923_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3923_, 0, v___x_3921_);
lean_ctor_set(v___x_3923_, 1, v___x_3922_);
v___x_3924_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__7);
v___x_3925_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3925_, 0, v___x_3923_);
lean_ctor_set(v___x_3925_, 1, v___x_3924_);
if (v_isShared_3909_ == 0)
{
lean_ctor_set_tag(v___x_3908_, 0);
lean_ctor_set(v___x_3908_, 0, v___x_3925_);
v___x_3927_ = v___x_3908_;
goto v_reusejp_3926_;
}
else
{
lean_object* v_reuseFailAlloc_3928_; 
v_reuseFailAlloc_3928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3928_, 0, v___x_3925_);
v___x_3927_ = v_reuseFailAlloc_3928_;
goto v_reusejp_3926_;
}
v_reusejp_3926_:
{
return v___x_3927_;
}
}
}
else
{
lean_object* v_e_x27_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3942_; 
v_e_x27_3929_ = lean_ctor_get(v_a_3906_, 0);
lean_inc_ref(v_e_x27_3929_);
lean_dec_ref_known(v_a_3906_, 2);
v___x_3930_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__1);
v___x_3931_ = l_Lean_MessageData_ofName(v___x_3878_);
v___x_3932_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3932_, 0, v___x_3930_);
lean_ctor_set(v___x_3932_, 1, v___x_3931_);
v___x_3933_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__9);
v___x_3934_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3934_, 0, v___x_3932_);
lean_ctor_set(v___x_3934_, 1, v___x_3933_);
v___x_3935_ = l_Lean_indentExpr(v_e_3879_);
v___x_3936_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3936_, 0, v___x_3934_);
lean_ctor_set(v___x_3936_, 1, v___x_3935_);
v___x_3937_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___closed__11);
v___x_3938_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3938_, 0, v___x_3936_);
lean_ctor_set(v___x_3938_, 1, v___x_3937_);
v___x_3939_ = l_Lean_indentExpr(v_e_x27_3929_);
v___x_3940_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3940_, 0, v___x_3938_);
lean_ctor_set(v___x_3940_, 1, v___x_3939_);
if (v_isShared_3909_ == 0)
{
lean_ctor_set_tag(v___x_3908_, 0);
lean_ctor_set(v___x_3908_, 0, v___x_3940_);
v___x_3942_ = v___x_3908_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3943_; 
v_reuseFailAlloc_3943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3943_, 0, v___x_3940_);
v___x_3942_ = v_reuseFailAlloc_3943_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
return v___x_3942_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___boxed(lean_object* v___x_3945_, lean_object* v_e_3946_, lean_object* v_x_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_){
_start:
{
lean_object* v_res_3958_; 
v_res_3958_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1(v___x_3945_, v_e_3946_, v_x_3947_, v___y_3948_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_);
lean_dec(v___y_3956_);
lean_dec_ref(v___y_3955_);
lean_dec(v___y_3954_);
lean_dec_ref(v___y_3953_);
lean_dec(v___y_3952_);
lean_dec_ref(v___y_3951_);
lean_dec(v___y_3950_);
lean_dec_ref(v___y_3949_);
lean_dec(v___y_3948_);
return v_res_3958_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__9(void){
_start:
{
lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; 
v___x_3983_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__5));
v___x_3984_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__8));
v___x_3985_ = l_Lean_Name_append(v___x_3984_, v___x_3983_);
return v___x_3985_;
}
}
static double _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__10(void){
_start:
{
lean_object* v___x_3986_; double v___x_3987_; 
v___x_3986_ = lean_unsigned_to_nat(1000000000u);
v___x_3987_ = lean_float_of_nat(v___x_3986_);
return v___x_3987_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3(lean_object* v_erased_3988_, lean_object* v_e_3989_, lean_object* v_as_3990_, size_t v_sz_3991_, size_t v_i_3992_, lean_object* v_b_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_){
_start:
{
lean_object* v_a_4005_; uint8_t v___x_4009_; 
v___x_4009_ = lean_usize_dec_lt(v_i_3992_, v_sz_3991_);
if (v___x_4009_ == 0)
{
lean_object* v___x_4010_; 
lean_dec_ref(v_e_3989_);
v___x_4010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4010_, 0, v_b_3993_);
return v___x_4010_;
}
else
{
lean_object* v_a_4011_; lean_object* v_fst_4012_; lean_object* v_toCbvSimprocOLeanEntry_4013_; lean_object* v_snd_4014_; lean_object* v___x_4016_; uint8_t v_isShared_4017_; uint8_t v_isSharedCheck_4147_; 
lean_dec_ref(v_b_3993_);
v_a_4011_ = lean_array_uget(v_as_3990_, v_i_3992_);
v_fst_4012_ = lean_ctor_get(v_a_4011_, 0);
lean_inc(v_fst_4012_);
v_toCbvSimprocOLeanEntry_4013_ = lean_ctor_get(v_fst_4012_, 0);
lean_inc_ref(v_toCbvSimprocOLeanEntry_4013_);
v_snd_4014_ = lean_ctor_get(v_a_4011_, 1);
v_isSharedCheck_4147_ = !lean_is_exclusive(v_a_4011_);
if (v_isSharedCheck_4147_ == 0)
{
lean_object* v_unused_4148_; 
v_unused_4148_ = lean_ctor_get(v_a_4011_, 0);
lean_dec(v_unused_4148_);
v___x_4016_ = v_a_4011_;
v_isShared_4017_ = v_isSharedCheck_4147_;
goto v_resetjp_4015_;
}
else
{
lean_inc(v_snd_4014_);
lean_dec(v_a_4011_);
v___x_4016_ = lean_box(0);
v_isShared_4017_ = v_isSharedCheck_4147_;
goto v_resetjp_4015_;
}
v_resetjp_4015_:
{
lean_object* v_proc_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4145_; 
v_proc_4018_ = lean_ctor_get(v_fst_4012_, 1);
v_isSharedCheck_4145_ = !lean_is_exclusive(v_fst_4012_);
if (v_isSharedCheck_4145_ == 0)
{
lean_object* v_unused_4146_; 
v_unused_4146_ = lean_ctor_get(v_fst_4012_, 0);
lean_dec(v_unused_4146_);
v___x_4020_ = v_fst_4012_;
v_isShared_4021_ = v_isSharedCheck_4145_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_proc_4018_);
lean_dec(v_fst_4012_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4145_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
lean_object* v_declName_4022_; lean_object* v___x_4023_; lean_object* v___y_4025_; lean_object* v___x_4031_; lean_object* v___y_4033_; uint8_t v___x_4045_; 
v_declName_4022_ = lean_ctor_get(v_toCbvSimprocOLeanEntry_4013_, 0);
lean_inc(v_declName_4022_);
lean_dec_ref(v_toCbvSimprocOLeanEntry_4013_);
v___x_4023_ = lean_box(0);
v___x_4031_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__0));
v___x_4045_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Tactic_Cbv_eraseCbvSimprocAttr_spec__0___redArg(v_erased_3988_, v_declName_4022_);
if (v___x_4045_ == 0)
{
lean_object* v_toCold_4046_; lean_object* v_options_4047_; lean_object* v_inheritedTraceOptions_4048_; uint8_t v_hasTrace_4049_; lean_object* v___x_4050_; uint8_t v___x_4051_; 
v_toCold_4046_ = lean_ctor_get(v___y_4001_, 0);
v_options_4047_ = lean_ctor_get(v_toCold_4046_, 2);
v_inheritedTraceOptions_4048_ = lean_ctor_get(v_toCold_4046_, 11);
v_hasTrace_4049_ = lean_ctor_get_uint8(v_options_4047_, sizeof(void*)*1);
v___x_4050_ = lean_unsigned_to_nat(0u);
v___x_4051_ = lean_nat_dec_eq(v_snd_4014_, v___x_4050_);
if (v_hasTrace_4049_ == 0)
{
lean_object* v___x_4052_; 
lean_dec(v_declName_4022_);
lean_del_object(v___x_4020_);
lean_inc_ref(v_e_3989_);
v___x_4052_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__0(v___x_4051_, v_e_3989_, v_snd_4014_, v_proc_4018_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_);
lean_dec(v_snd_4014_);
v___y_4033_ = v___x_4052_;
goto v___jp_4032_;
}
else
{
lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___f_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; uint8_t v___x_4063_; lean_object* v___y_4065_; lean_object* v___y_4066_; lean_object* v_a_4067_; lean_object* v___y_4082_; lean_object* v___y_4083_; lean_object* v_a_4084_; 
v___x_4053_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__1));
v___x_4054_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__2));
v___x_4055_ = l_Lean_privateToUserName(v_declName_4022_);
v___x_4056_ = lean_box(0);
v___x_4057_ = l_Lean_Name_replacePrefix(v___x_4055_, v___x_4053_, v___x_4056_);
v___x_4058_ = l_Lean_Name_replacePrefix(v___x_4057_, v___x_4054_, v___x_4056_);
lean_inc_ref(v_e_3989_);
v___f_4059_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__1___boxed), 13, 2);
lean_closure_set(v___f_4059_, 0, v___x_4058_);
lean_closure_set(v___f_4059_, 1, v_e_3989_);
v___x_4060_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__5));
v___x_4061_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__6));
v___x_4062_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__9);
v___x_4063_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4048_, v_options_4047_, v___x_4062_);
if (v___x_4063_ == 0)
{
lean_object* v___x_4142_; uint8_t v___x_4143_; 
v___x_4142_ = l_Lean_trace_profiler;
v___x_4143_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__1(v_options_4047_, v___x_4142_);
if (v___x_4143_ == 0)
{
lean_object* v___x_4144_; 
lean_dec_ref(v___f_4059_);
lean_del_object(v___x_4020_);
lean_inc_ref(v_e_3989_);
v___x_4144_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__0(v___x_4051_, v_e_3989_, v_snd_4014_, v_proc_4018_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_);
lean_dec(v_snd_4014_);
v___y_4033_ = v___x_4144_;
goto v___jp_4032_;
}
else
{
goto v___jp_4093_;
}
}
else
{
goto v___jp_4093_;
}
v___jp_4064_:
{
lean_object* v___x_4068_; double v___x_4069_; double v___x_4070_; double v___x_4071_; double v___x_4072_; double v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4077_; 
v___x_4068_ = lean_io_mono_nanos_now();
v___x_4069_ = lean_float_of_nat(v___y_4066_);
v___x_4070_ = lean_float_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__10);
v___x_4071_ = lean_float_div(v___x_4069_, v___x_4070_);
v___x_4072_ = lean_float_of_nat(v___x_4068_);
v___x_4073_ = lean_float_div(v___x_4072_, v___x_4070_);
v___x_4074_ = lean_box_float(v___x_4071_);
v___x_4075_ = lean_box_float(v___x_4073_);
if (v_isShared_4021_ == 0)
{
lean_ctor_set(v___x_4020_, 1, v___x_4075_);
lean_ctor_set(v___x_4020_, 0, v___x_4074_);
v___x_4077_ = v___x_4020_;
goto v_reusejp_4076_;
}
else
{
lean_object* v_reuseFailAlloc_4080_; 
v_reuseFailAlloc_4080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4080_, 0, v___x_4074_);
lean_ctor_set(v_reuseFailAlloc_4080_, 1, v___x_4075_);
v___x_4077_ = v_reuseFailAlloc_4080_;
goto v_reusejp_4076_;
}
v_reusejp_4076_:
{
lean_object* v___x_4078_; lean_object* v___x_4079_; 
v___x_4078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4078_, 0, v_a_4067_);
lean_ctor_set(v___x_4078_, 1, v___x_4077_);
v___x_4079_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2(v___x_4060_, v_hasTrace_4049_, v___x_4061_, v_options_4047_, v___x_4063_, v___y_4065_, v___f_4059_, v___x_4078_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_);
v___y_4033_ = v___x_4079_;
goto v___jp_4032_;
}
}
v___jp_4081_:
{
lean_object* v___x_4085_; double v___x_4086_; double v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; 
v___x_4085_ = lean_io_get_num_heartbeats();
v___x_4086_ = lean_float_of_nat(v___y_4083_);
v___x_4087_ = lean_float_of_nat(v___x_4085_);
v___x_4088_ = lean_box_float(v___x_4086_);
v___x_4089_ = lean_box_float(v___x_4087_);
v___x_4090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4090_, 0, v___x_4088_);
lean_ctor_set(v___x_4090_, 1, v___x_4089_);
v___x_4091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4091_, 0, v_a_4084_);
lean_ctor_set(v___x_4091_, 1, v___x_4090_);
v___x_4092_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2(v___x_4060_, v_hasTrace_4049_, v___x_4061_, v_options_4047_, v___x_4063_, v___y_4082_, v___f_4059_, v___x_4091_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_);
v___y_4033_ = v___x_4092_;
goto v___jp_4032_;
}
v___jp_4093_:
{
lean_object* v___x_4094_; 
v___x_4094_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__0___redArg(v___y_4002_);
if (lean_obj_tag(v___x_4094_) == 0)
{
lean_object* v_a_4095_; lean_object* v___x_4096_; uint8_t v___x_4097_; 
v_a_4095_ = lean_ctor_get(v___x_4094_, 0);
lean_inc(v_a_4095_);
lean_dec_ref_known(v___x_4094_, 1);
v___x_4096_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4097_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__1(v_options_4047_, v___x_4096_);
if (v___x_4097_ == 0)
{
lean_object* v___x_4098_; lean_object* v___x_4099_; 
v___x_4098_ = lean_io_mono_nanos_now();
lean_inc_ref(v_e_3989_);
v___x_4099_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__0(v___x_4051_, v_e_3989_, v_snd_4014_, v_proc_4018_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_);
lean_dec(v_snd_4014_);
if (lean_obj_tag(v___x_4099_) == 0)
{
lean_object* v_a_4100_; lean_object* v___x_4102_; uint8_t v_isShared_4103_; uint8_t v_isSharedCheck_4107_; 
v_a_4100_ = lean_ctor_get(v___x_4099_, 0);
v_isSharedCheck_4107_ = !lean_is_exclusive(v___x_4099_);
if (v_isSharedCheck_4107_ == 0)
{
v___x_4102_ = v___x_4099_;
v_isShared_4103_ = v_isSharedCheck_4107_;
goto v_resetjp_4101_;
}
else
{
lean_inc(v_a_4100_);
lean_dec(v___x_4099_);
v___x_4102_ = lean_box(0);
v_isShared_4103_ = v_isSharedCheck_4107_;
goto v_resetjp_4101_;
}
v_resetjp_4101_:
{
lean_object* v___x_4105_; 
if (v_isShared_4103_ == 0)
{
lean_ctor_set_tag(v___x_4102_, 1);
v___x_4105_ = v___x_4102_;
goto v_reusejp_4104_;
}
else
{
lean_object* v_reuseFailAlloc_4106_; 
v_reuseFailAlloc_4106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4106_, 0, v_a_4100_);
v___x_4105_ = v_reuseFailAlloc_4106_;
goto v_reusejp_4104_;
}
v_reusejp_4104_:
{
v___y_4065_ = v_a_4095_;
v___y_4066_ = v___x_4098_;
v_a_4067_ = v___x_4105_;
goto v___jp_4064_;
}
}
}
else
{
lean_object* v_a_4108_; lean_object* v___x_4110_; uint8_t v_isShared_4111_; uint8_t v_isSharedCheck_4115_; 
v_a_4108_ = lean_ctor_get(v___x_4099_, 0);
v_isSharedCheck_4115_ = !lean_is_exclusive(v___x_4099_);
if (v_isSharedCheck_4115_ == 0)
{
v___x_4110_ = v___x_4099_;
v_isShared_4111_ = v_isSharedCheck_4115_;
goto v_resetjp_4109_;
}
else
{
lean_inc(v_a_4108_);
lean_dec(v___x_4099_);
v___x_4110_ = lean_box(0);
v_isShared_4111_ = v_isSharedCheck_4115_;
goto v_resetjp_4109_;
}
v_resetjp_4109_:
{
lean_object* v___x_4113_; 
if (v_isShared_4111_ == 0)
{
lean_ctor_set_tag(v___x_4110_, 0);
v___x_4113_ = v___x_4110_;
goto v_reusejp_4112_;
}
else
{
lean_object* v_reuseFailAlloc_4114_; 
v_reuseFailAlloc_4114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4114_, 0, v_a_4108_);
v___x_4113_ = v_reuseFailAlloc_4114_;
goto v_reusejp_4112_;
}
v_reusejp_4112_:
{
v___y_4065_ = v_a_4095_;
v___y_4066_ = v___x_4098_;
v_a_4067_ = v___x_4113_;
goto v___jp_4064_;
}
}
}
}
else
{
lean_object* v___x_4116_; lean_object* v___x_4117_; 
lean_del_object(v___x_4020_);
v___x_4116_ = lean_io_get_num_heartbeats();
lean_inc_ref(v_e_3989_);
v___x_4117_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___lam__0(v___x_4051_, v_e_3989_, v_snd_4014_, v_proc_4018_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_);
lean_dec(v_snd_4014_);
if (lean_obj_tag(v___x_4117_) == 0)
{
lean_object* v_a_4118_; lean_object* v___x_4120_; uint8_t v_isShared_4121_; uint8_t v_isSharedCheck_4125_; 
v_a_4118_ = lean_ctor_get(v___x_4117_, 0);
v_isSharedCheck_4125_ = !lean_is_exclusive(v___x_4117_);
if (v_isSharedCheck_4125_ == 0)
{
v___x_4120_ = v___x_4117_;
v_isShared_4121_ = v_isSharedCheck_4125_;
goto v_resetjp_4119_;
}
else
{
lean_inc(v_a_4118_);
lean_dec(v___x_4117_);
v___x_4120_ = lean_box(0);
v_isShared_4121_ = v_isSharedCheck_4125_;
goto v_resetjp_4119_;
}
v_resetjp_4119_:
{
lean_object* v___x_4123_; 
if (v_isShared_4121_ == 0)
{
lean_ctor_set_tag(v___x_4120_, 1);
v___x_4123_ = v___x_4120_;
goto v_reusejp_4122_;
}
else
{
lean_object* v_reuseFailAlloc_4124_; 
v_reuseFailAlloc_4124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4124_, 0, v_a_4118_);
v___x_4123_ = v_reuseFailAlloc_4124_;
goto v_reusejp_4122_;
}
v_reusejp_4122_:
{
v___y_4082_ = v_a_4095_;
v___y_4083_ = v___x_4116_;
v_a_4084_ = v___x_4123_;
goto v___jp_4081_;
}
}
}
else
{
lean_object* v_a_4126_; lean_object* v___x_4128_; uint8_t v_isShared_4129_; uint8_t v_isSharedCheck_4133_; 
v_a_4126_ = lean_ctor_get(v___x_4117_, 0);
v_isSharedCheck_4133_ = !lean_is_exclusive(v___x_4117_);
if (v_isSharedCheck_4133_ == 0)
{
v___x_4128_ = v___x_4117_;
v_isShared_4129_ = v_isSharedCheck_4133_;
goto v_resetjp_4127_;
}
else
{
lean_inc(v_a_4126_);
lean_dec(v___x_4117_);
v___x_4128_ = lean_box(0);
v_isShared_4129_ = v_isSharedCheck_4133_;
goto v_resetjp_4127_;
}
v_resetjp_4127_:
{
lean_object* v___x_4131_; 
if (v_isShared_4129_ == 0)
{
lean_ctor_set_tag(v___x_4128_, 0);
v___x_4131_ = v___x_4128_;
goto v_reusejp_4130_;
}
else
{
lean_object* v_reuseFailAlloc_4132_; 
v_reuseFailAlloc_4132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4132_, 0, v_a_4126_);
v___x_4131_ = v_reuseFailAlloc_4132_;
goto v_reusejp_4130_;
}
v_reusejp_4130_:
{
v___y_4082_ = v_a_4095_;
v___y_4083_ = v___x_4116_;
v_a_4084_ = v___x_4131_;
goto v___jp_4081_;
}
}
}
}
}
else
{
lean_object* v_a_4134_; lean_object* v___x_4136_; uint8_t v_isShared_4137_; uint8_t v_isSharedCheck_4141_; 
lean_dec_ref(v___f_4059_);
lean_del_object(v___x_4020_);
lean_dec_ref(v_proc_4018_);
lean_del_object(v___x_4016_);
lean_dec(v_snd_4014_);
lean_dec_ref(v_e_3989_);
v_a_4134_ = lean_ctor_get(v___x_4094_, 0);
v_isSharedCheck_4141_ = !lean_is_exclusive(v___x_4094_);
if (v_isSharedCheck_4141_ == 0)
{
v___x_4136_ = v___x_4094_;
v_isShared_4137_ = v_isSharedCheck_4141_;
goto v_resetjp_4135_;
}
else
{
lean_inc(v_a_4134_);
lean_dec(v___x_4094_);
v___x_4136_ = lean_box(0);
v_isShared_4137_ = v_isSharedCheck_4141_;
goto v_resetjp_4135_;
}
v_resetjp_4135_:
{
lean_object* v___x_4139_; 
if (v_isShared_4137_ == 0)
{
v___x_4139_ = v___x_4136_;
goto v_reusejp_4138_;
}
else
{
lean_object* v_reuseFailAlloc_4140_; 
v_reuseFailAlloc_4140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4140_, 0, v_a_4134_);
v___x_4139_ = v_reuseFailAlloc_4140_;
goto v_reusejp_4138_;
}
v_reusejp_4138_:
{
return v___x_4139_;
}
}
}
}
}
}
else
{
lean_dec(v_declName_4022_);
lean_del_object(v___x_4020_);
lean_dec_ref(v_proc_4018_);
lean_del_object(v___x_4016_);
lean_dec(v_snd_4014_);
v_a_4005_ = v___x_4031_;
goto v___jp_4004_;
}
v___jp_4024_:
{
lean_object* v___x_4026_; lean_object* v___x_4028_; 
v___x_4026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4026_, 0, v___y_4025_);
if (v_isShared_4017_ == 0)
{
lean_ctor_set(v___x_4016_, 1, v___x_4023_);
lean_ctor_set(v___x_4016_, 0, v___x_4026_);
v___x_4028_ = v___x_4016_;
goto v_reusejp_4027_;
}
else
{
lean_object* v_reuseFailAlloc_4030_; 
v_reuseFailAlloc_4030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4030_, 0, v___x_4026_);
lean_ctor_set(v_reuseFailAlloc_4030_, 1, v___x_4023_);
v___x_4028_ = v_reuseFailAlloc_4030_;
goto v_reusejp_4027_;
}
v_reusejp_4027_:
{
lean_object* v___x_4029_; 
v___x_4029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4029_, 0, v___x_4028_);
return v___x_4029_;
}
}
v___jp_4032_:
{
if (lean_obj_tag(v___y_4033_) == 0)
{
lean_object* v_a_4034_; 
v_a_4034_ = lean_ctor_get(v___y_4033_, 0);
lean_inc(v_a_4034_);
lean_dec_ref_known(v___y_4033_, 1);
if (lean_obj_tag(v_a_4034_) == 1)
{
lean_dec_ref(v_e_3989_);
v___y_4025_ = v_a_4034_;
goto v___jp_4024_;
}
else
{
if (lean_obj_tag(v_a_4034_) == 0)
{
uint8_t v_done_4035_; 
v_done_4035_ = lean_ctor_get_uint8(v_a_4034_, 0);
if (v_done_4035_ == 1)
{
uint8_t v_contextDependent_4036_; 
v_contextDependent_4036_ = lean_ctor_get_uint8(v_a_4034_, 1);
if (v_contextDependent_4036_ == 0)
{
lean_dec_ref(v_e_3989_);
v___y_4025_ = v_a_4034_;
goto v___jp_4024_;
}
else
{
lean_dec_ref_known(v_a_4034_, 0);
lean_del_object(v___x_4016_);
v_a_4005_ = v___x_4031_;
goto v___jp_4004_;
}
}
else
{
lean_dec_ref_known(v_a_4034_, 0);
lean_del_object(v___x_4016_);
v_a_4005_ = v___x_4031_;
goto v___jp_4004_;
}
}
else
{
lean_dec(v_a_4034_);
lean_del_object(v___x_4016_);
v_a_4005_ = v___x_4031_;
goto v___jp_4004_;
}
}
}
else
{
lean_object* v_a_4037_; lean_object* v___x_4039_; uint8_t v_isShared_4040_; uint8_t v_isSharedCheck_4044_; 
lean_del_object(v___x_4016_);
lean_dec_ref(v_e_3989_);
v_a_4037_ = lean_ctor_get(v___y_4033_, 0);
v_isSharedCheck_4044_ = !lean_is_exclusive(v___y_4033_);
if (v_isSharedCheck_4044_ == 0)
{
v___x_4039_ = v___y_4033_;
v_isShared_4040_ = v_isSharedCheck_4044_;
goto v_resetjp_4038_;
}
else
{
lean_inc(v_a_4037_);
lean_dec(v___y_4033_);
v___x_4039_ = lean_box(0);
v_isShared_4040_ = v_isSharedCheck_4044_;
goto v_resetjp_4038_;
}
v_resetjp_4038_:
{
lean_object* v___x_4042_; 
if (v_isShared_4040_ == 0)
{
v___x_4042_ = v___x_4039_;
goto v_reusejp_4041_;
}
else
{
lean_object* v_reuseFailAlloc_4043_; 
v_reuseFailAlloc_4043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4043_, 0, v_a_4037_);
v___x_4042_ = v_reuseFailAlloc_4043_;
goto v_reusejp_4041_;
}
v_reusejp_4041_:
{
return v___x_4042_;
}
}
}
}
}
}
}
v___jp_4004_:
{
size_t v___x_4006_; size_t v___x_4007_; 
v___x_4006_ = ((size_t)1ULL);
v___x_4007_ = lean_usize_add(v_i_3992_, v___x_4006_);
lean_inc_ref(v_a_4005_);
v_i_3992_ = v___x_4007_;
v_b_3993_ = v_a_4005_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___boxed(lean_object* v_erased_4149_, lean_object* v_e_4150_, lean_object* v_as_4151_, lean_object* v_sz_4152_, lean_object* v_i_4153_, lean_object* v_b_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_){
_start:
{
size_t v_sz_boxed_4165_; size_t v_i_boxed_4166_; lean_object* v_res_4167_; 
v_sz_boxed_4165_ = lean_unbox_usize(v_sz_4152_);
lean_dec(v_sz_4152_);
v_i_boxed_4166_ = lean_unbox_usize(v_i_4153_);
lean_dec(v_i_4153_);
v_res_4167_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3(v_erased_4149_, v_e_4150_, v_as_4151_, v_sz_boxed_4165_, v_i_boxed_4166_, v_b_4154_, v___y_4155_, v___y_4156_, v___y_4157_, v___y_4158_, v___y_4159_, v___y_4160_, v___y_4161_, v___y_4162_, v___y_4163_);
lean_dec(v___y_4163_);
lean_dec_ref(v___y_4162_);
lean_dec(v___y_4161_);
lean_dec_ref(v___y_4160_);
lean_dec(v___y_4159_);
lean_dec_ref(v___y_4158_);
lean_dec(v___y_4157_);
lean_dec_ref(v___y_4156_);
lean_dec(v___y_4155_);
lean_dec_ref(v_as_4151_);
lean_dec_ref(v_erased_4149_);
return v_res_4167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_cbvSimprocDispatch(lean_object* v_tree_4170_, lean_object* v_erased_4171_, lean_object* v_e_4172_, lean_object* v_a_4173_, lean_object* v_a_4174_, lean_object* v_a_4175_, lean_object* v_a_4176_, lean_object* v_a_4177_, lean_object* v_a_4178_, lean_object* v_a_4179_, lean_object* v_a_4180_, lean_object* v_a_4181_){
_start:
{
lean_object* v___x_4186_; lean_object* v_mctx_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; uint8_t v___x_4191_; 
v___x_4186_ = lean_st_ref_get(v_a_4179_);
v_mctx_4187_ = lean_ctor_get(v___x_4186_, 0);
lean_inc_ref(v_mctx_4187_);
lean_dec(v___x_4186_);
v___x_4188_ = l_Lean_Meta_Sym_getMatchWithExtra___redArg(v_mctx_4187_, v_tree_4170_, v_e_4172_);
lean_dec_ref(v_mctx_4187_);
v___x_4189_ = lean_array_get_size(v___x_4188_);
v___x_4190_ = lean_unsigned_to_nat(0u);
v___x_4191_ = lean_nat_dec_eq(v___x_4189_, v___x_4190_);
if (v___x_4191_ == 0)
{
lean_object* v___x_4192_; size_t v_sz_4193_; size_t v___x_4194_; lean_object* v___x_4195_; 
v___x_4192_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3___closed__0));
v_sz_4193_ = lean_array_size(v___x_4188_);
v___x_4194_ = ((size_t)0ULL);
v___x_4195_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__3(v_erased_4171_, v_e_4172_, v___x_4188_, v_sz_4193_, v___x_4194_, v___x_4192_, v_a_4173_, v_a_4174_, v_a_4175_, v_a_4176_, v_a_4177_, v_a_4178_, v_a_4179_, v_a_4180_, v_a_4181_);
lean_dec_ref(v___x_4188_);
if (lean_obj_tag(v___x_4195_) == 0)
{
lean_object* v_a_4196_; lean_object* v___x_4198_; uint8_t v_isShared_4199_; uint8_t v_isSharedCheck_4205_; 
v_a_4196_ = lean_ctor_get(v___x_4195_, 0);
v_isSharedCheck_4205_ = !lean_is_exclusive(v___x_4195_);
if (v_isSharedCheck_4205_ == 0)
{
v___x_4198_ = v___x_4195_;
v_isShared_4199_ = v_isSharedCheck_4205_;
goto v_resetjp_4197_;
}
else
{
lean_inc(v_a_4196_);
lean_dec(v___x_4195_);
v___x_4198_ = lean_box(0);
v_isShared_4199_ = v_isSharedCheck_4205_;
goto v_resetjp_4197_;
}
v_resetjp_4197_:
{
lean_object* v_fst_4200_; 
v_fst_4200_ = lean_ctor_get(v_a_4196_, 0);
lean_inc(v_fst_4200_);
lean_dec(v_a_4196_);
if (lean_obj_tag(v_fst_4200_) == 0)
{
lean_del_object(v___x_4198_);
goto v___jp_4183_;
}
else
{
lean_object* v_val_4201_; lean_object* v___x_4203_; 
v_val_4201_ = lean_ctor_get(v_fst_4200_, 0);
lean_inc(v_val_4201_);
lean_dec_ref_known(v_fst_4200_, 1);
if (v_isShared_4199_ == 0)
{
lean_ctor_set(v___x_4198_, 0, v_val_4201_);
v___x_4203_ = v___x_4198_;
goto v_reusejp_4202_;
}
else
{
lean_object* v_reuseFailAlloc_4204_; 
v_reuseFailAlloc_4204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4204_, 0, v_val_4201_);
v___x_4203_ = v_reuseFailAlloc_4204_;
goto v_reusejp_4202_;
}
v_reusejp_4202_:
{
return v___x_4203_;
}
}
}
}
else
{
lean_object* v_a_4206_; lean_object* v___x_4208_; uint8_t v_isShared_4209_; uint8_t v_isSharedCheck_4213_; 
v_a_4206_ = lean_ctor_get(v___x_4195_, 0);
v_isSharedCheck_4213_ = !lean_is_exclusive(v___x_4195_);
if (v_isSharedCheck_4213_ == 0)
{
v___x_4208_ = v___x_4195_;
v_isShared_4209_ = v_isSharedCheck_4213_;
goto v_resetjp_4207_;
}
else
{
lean_inc(v_a_4206_);
lean_dec(v___x_4195_);
v___x_4208_ = lean_box(0);
v_isShared_4209_ = v_isSharedCheck_4213_;
goto v_resetjp_4207_;
}
v_resetjp_4207_:
{
lean_object* v___x_4211_; 
if (v_isShared_4209_ == 0)
{
v___x_4211_ = v___x_4208_;
goto v_reusejp_4210_;
}
else
{
lean_object* v_reuseFailAlloc_4212_; 
v_reuseFailAlloc_4212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4212_, 0, v_a_4206_);
v___x_4211_ = v_reuseFailAlloc_4212_;
goto v_reusejp_4210_;
}
v_reusejp_4210_:
{
return v___x_4211_;
}
}
}
}
else
{
lean_dec_ref(v___x_4188_);
lean_dec_ref(v_e_4172_);
goto v___jp_4183_;
}
v___jp_4183_:
{
lean_object* v___x_4184_; lean_object* v___x_4185_; 
v___x_4184_ = ((lean_object*)(l_Lean_Meta_Tactic_Cbv_cbvSimprocDispatch___closed__0));
v___x_4185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4185_, 0, v___x_4184_);
return v___x_4185_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_Cbv_cbvSimprocDispatch___boxed(lean_object* v_tree_4214_, lean_object* v_erased_4215_, lean_object* v_e_4216_, lean_object* v_a_4217_, lean_object* v_a_4218_, lean_object* v_a_4219_, lean_object* v_a_4220_, lean_object* v_a_4221_, lean_object* v_a_4222_, lean_object* v_a_4223_, lean_object* v_a_4224_, lean_object* v_a_4225_, lean_object* v_a_4226_){
_start:
{
lean_object* v_res_4227_; 
v_res_4227_ = l_Lean_Meta_Tactic_Cbv_cbvSimprocDispatch(v_tree_4214_, v_erased_4215_, v_e_4216_, v_a_4217_, v_a_4218_, v_a_4219_, v_a_4220_, v_a_4221_, v_a_4222_, v_a_4223_, v_a_4224_, v_a_4225_);
lean_dec(v_a_4225_);
lean_dec_ref(v_a_4224_);
lean_dec(v_a_4223_);
lean_dec_ref(v_a_4222_);
lean_dec(v_a_4221_);
lean_dec_ref(v_a_4220_);
lean_dec(v_a_4219_);
lean_dec_ref(v_a_4218_);
lean_dec(v_a_4217_);
lean_dec_ref(v_erased_4215_);
lean_dec_ref(v_tree_4214_);
return v_res_4227_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__3(lean_object* v_00_u03b1_4228_, lean_object* v_x_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_, lean_object* v___y_4235_, lean_object* v___y_4236_, lean_object* v___y_4237_, lean_object* v___y_4238_){
_start:
{
lean_object* v___x_4240_; 
v___x_4240_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__3___redArg(v_x_4229_);
return v___x_4240_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__3___boxed(lean_object* v_00_u03b1_4241_, lean_object* v_x_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_){
_start:
{
lean_object* v_res_4253_; 
v_res_4253_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__3(v_00_u03b1_4241_, v_x_4242_, v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_);
lean_dec(v___y_4251_);
lean_dec_ref(v___y_4250_);
lean_dec(v___y_4249_);
lean_dec_ref(v___y_4248_);
lean_dec(v___y_4247_);
lean_dec_ref(v___y_4246_);
lean_dec(v___y_4245_);
lean_dec_ref(v___y_4244_);
lean_dec(v___y_4243_);
return v_res_4253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2(lean_object* v_oldTraces_4254_, lean_object* v_data_4255_, lean_object* v_ref_4256_, lean_object* v_msg_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_, lean_object* v___y_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_){
_start:
{
lean_object* v___x_4268_; 
v___x_4268_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2___redArg(v_oldTraces_4254_, v_data_4255_, v_ref_4256_, v_msg_4257_, v___y_4263_, v___y_4264_, v___y_4265_, v___y_4266_);
return v___x_4268_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2___boxed(lean_object* v_oldTraces_4269_, lean_object* v_data_4270_, lean_object* v_ref_4271_, lean_object* v_msg_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_){
_start:
{
lean_object* v_res_4283_; 
v_res_4283_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_Cbv_cbvSimprocDispatch_spec__2_spec__2(v_oldTraces_4269_, v_data_4270_, v_ref_4271_, v_msg_4272_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_, v___y_4280_, v___y_4281_);
lean_dec(v___y_4281_);
lean_dec_ref(v___y_4280_);
lean_dec(v___y_4279_);
lean_dec_ref(v___y_4278_);
lean_dec(v___y_4277_);
lean_dec_ref(v___y_4276_);
lean_dec(v___y_4275_);
lean_dec_ref(v___y_4274_);
lean_dec(v___y_4273_);
return v_res_4283_;
}
}
lean_object* runtime_initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_ScopedEnvExtension(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Result(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_DiscrTree(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Cbv_CbvSimproc(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ScopedEnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocPhase_default = _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocPhase_default();
l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocPhase = _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocPhase();
l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase = _init_l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase();
lean_mark_persistent(l_Lean_Meta_Tactic_Cbv_instToExprCbvSimprocPhase);
l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default = _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default();
lean_mark_persistent(l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs_default);
l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs = _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs();
lean_mark_persistent(l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocs);
l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default = _init_l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default();
lean_mark_persistent(l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs_default);
l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs = _init_l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs();
lean_mark_persistent(l_Lean_Meta_Tactic_Cbv_instInhabitedBuiltinCbvSimprocs);
res = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_404265556____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Tactic_Cbv_builtinCbvSimprocDeclsRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Tactic_Cbv_builtinCbvSimprocDeclsRef);
lean_dec_ref(res);
l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default = _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default();
lean_mark_persistent(l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState_default);
l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState = _init_l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState();
lean_mark_persistent(l_Lean_Meta_Tactic_Cbv_instInhabitedCbvSimprocDeclExtState);
res = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_2237200659____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Tactic_Cbv_cbvSimprocDeclExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Tactic_Cbv_cbvSimprocDeclExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1269018163____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Tactic_Cbv_builtinCbvSimprocsRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Tactic_Cbv_builtinCbvSimprocsRef);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_1354732816____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Tactic_Cbv_cbvSimprocExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Tactic_Cbv_cbvSimprocExtension);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_735115364____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cbv_CbvSimproc_0__Lean_Meta_Tactic_Cbv_initFn_00___x40_Lean_Meta_Tactic_Cbv_CbvSimproc_3124561870____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Cbv_CbvSimproc(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* initialize_Lean_ScopedEnvExtension(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Result(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_DiscrTree(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Cbv_CbvSimproc(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ScopedEnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Result(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cbv_CbvSimproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Cbv_CbvSimproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Cbv_CbvSimproc(builtin);
}
#ifdef __cplusplus
}
#endif
