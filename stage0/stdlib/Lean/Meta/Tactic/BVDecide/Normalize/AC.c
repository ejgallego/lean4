// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Normalize.AC
// Imports: import Lean.Meta.Tactic.AC.Main public import Lean.Meta.Tactic.BVDecide.Normalize.Basic
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
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDecLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_AC_rewriteUnnormalizedRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Option_merge___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* lean_io_mono_nanos_now();
extern lean_object* l_Lean_checkEmoji;
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instReprExpr_repr(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType(lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "instMul"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul___closed__0_value),LEAN_SCALAR_PTR_LITERAL(192, 82, 7, 193, 128, 145, 145, 228)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul(lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHMul"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 107, 107, 59, 202, 230, 169, 251)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul(lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(101, 105, 192, 171, 214, 131, 43, 105)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqOp_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqOp_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqOp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqOp_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqOp___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqOp___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqOp = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqOp___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Meta.Tactic.BVDecide.Normalize.Op.mul"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofApp2_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofApp2_x3f___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__1;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__2;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__3;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_neutralElement(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Op_isSameKind___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_isSameKind___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Op_isSameKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_isSameKind___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_instToMessageData___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_Op_instToMessageData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_Op_instToMessageData___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_instToMessageData___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Op_instToMessageData___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_instToMessageData = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_Op_instToMessageData___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_run_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_run_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_run_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "internal error (this is a bug!): index "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__1;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = " out of range, the current state only has "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__3;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " variables:\n\n"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__2___lam__0___boxed(lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__2___closed__0;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Found binary operation '"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__8;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "', expected '"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__12;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "'.Treating as atom."};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__13_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__14;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___closed__0;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "canonicalizeWithSharing"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "Operations mismatch:\n      the left-hand-side has operation "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__1;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "\n        "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__3;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "\n      but the right-hand-side has operation "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__5;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__6;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__7;
static const lean_array_object l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__8_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Canonicalizing with respect to operation: '"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__9 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__10;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "'."};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__11 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__11_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__12;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Failed to recognize operation: "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__13 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__13_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__8___boxed(lean_object**);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3___boxed(lean_object**);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__0___boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__3_value)} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Canonicalizing: "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__2;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__3___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__2___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "BEq"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "beq"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 188, 39, 55, 57, 152, 88, 223)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__1_value),LEAN_SCALAR_PTR_LITERAL(82, 52, 243, 194, 7, 226, 90, 135)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__2_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bv_ac_nf "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__4;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__5;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__6;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = " found `BEq.beq`."};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__8;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__9;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " found `Eq`."};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__10 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__10_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__11;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__12;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__0___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "  ==>  "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___lam__1___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "bv_ac_nf"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___closed__1_value),LEAN_SCALAR_PTR_LITERAL(186, 2, 240, 42, 244, 93, 182, 215)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___closed__2_value),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___boxed(lean_object**);
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType___closed__1));
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType(lean_object* v_w_7_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType___closed__2);
v___x_9_ = l_Lean_Expr_app___override(v___x_8_, v_w_7_);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul___closed__2(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_14_ = lean_box(0);
v___x_15_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul___closed__1));
v___x_16_ = l_Lean_Expr_const___override(v___x_15_, v___x_14_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul(lean_object* v_w_17_){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_18_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul___closed__2);
v___x_19_ = l_Lean_Expr_app___override(v___x_18_, v_w_17_);
return v___x_19_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul___closed__3(void){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_26_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul___closed__2));
v___x_27_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul___closed__1));
v___x_28_ = l_Lean_mkConst(v___x_27_, v___x_26_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul(lean_object* v_w_29_){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_30_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul___closed__3);
lean_inc_ref(v_w_29_);
v___x_31_ = l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType(v_w_29_);
v___x_32_ = l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstMul(v_w_29_);
v___x_33_ = l_Lean_mkAppB(v___x_30_, v___x_31_, v___x_32_);
return v___x_33_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit___closed__2(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_38_ = lean_box(0);
v___x_39_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit___closed__1));
v___x_40_ = l_Lean_mkConst(v___x_39_, v___x_38_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit(lean_object* v_w_41_, lean_object* v_n_42_){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_43_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit___closed__2);
v___x_44_ = l_Lean_mkNatLit(v_n_42_);
v___x_45_ = l_Lean_mkAppB(v___x_43_, v_w_41_, v___x_44_);
return v___x_45_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqOp_beq(lean_object* v_x_46_, lean_object* v_x_47_){
_start:
{
uint8_t v___x_48_; 
v___x_48_ = lean_expr_eqv(v_x_46_, v_x_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqOp_beq___boxed(lean_object* v_x_49_, lean_object* v_x_50_){
_start:
{
uint8_t v_res_51_; lean_object* v_r_52_; 
v_res_51_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instBEqOp_beq(v_x_49_, v_x_50_);
lean_dec_ref(v_x_50_);
lean_dec_ref(v_x_49_);
v_r_52_ = lean_box(v_res_51_);
return v_r_52_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__3(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_unsigned_to_nat(2u);
v___x_62_ = lean_nat_to_int(v___x_61_);
return v___x_62_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__4(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = lean_unsigned_to_nat(1u);
v___x_64_ = lean_nat_to_int(v___x_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr(lean_object* v_x_65_, lean_object* v_prec_66_){
_start:
{
lean_object* v___y_68_; lean_object* v___x_77_; uint8_t v___x_78_; 
v___x_77_ = lean_unsigned_to_nat(1024u);
v___x_78_ = lean_nat_dec_le(v___x_77_, v_prec_66_);
if (v___x_78_ == 0)
{
lean_object* v___x_79_; 
v___x_79_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__3);
v___y_68_ = v___x_79_;
goto v___jp_67_;
}
else
{
lean_object* v___x_80_; 
v___x_80_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__4);
v___y_68_ = v___x_80_;
goto v___jp_67_;
}
v___jp_67_:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; uint8_t v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_69_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___closed__2));
v___x_70_ = lean_unsigned_to_nat(1024u);
v___x_71_ = l_Lean_instReprExpr_repr(v_x_65_, v___x_70_);
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_69_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
lean_inc(v___y_68_);
v___x_73_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_73_, 0, v___y_68_);
lean_ctor_set(v___x_73_, 1, v___x_72_);
v___x_74_ = 0;
v___x_75_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_75_, 0, v___x_73_);
lean_ctor_set_uint8(v___x_75_, sizeof(void*)*1, v___x_74_);
v___x_76_ = l_Repr_addAppParen(v___x_75_, v_prec_66_);
return v___x_76_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr___boxed(lean_object* v_x_81_, lean_object* v_prec_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l_Lean_Meta_Tactic_BVDecide_Normalize_instReprOp_repr(v_x_81_, v_prec_82_);
lean_dec(v_prec_82_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f(lean_object* v_e_91_){
_start:
{
lean_object* v___x_92_; uint8_t v___x_93_; 
v___x_92_ = l_Lean_Expr_cleanupAnnotations(v_e_91_);
v___x_93_ = l_Lean_Expr_isApp(v___x_92_);
if (v___x_93_ == 0)
{
lean_object* v___x_94_; 
lean_dec_ref(v___x_92_);
v___x_94_ = lean_box(0);
return v___x_94_;
}
else
{
lean_object* v___x_95_; uint8_t v___x_96_; 
v___x_95_ = l_Lean_Expr_appFnCleanup___redArg(v___x_92_);
lean_dec_ref(v___x_92_);
v___x_96_ = l_Lean_Expr_isApp(v___x_95_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; 
lean_dec_ref(v___x_95_);
v___x_97_ = lean_box(0);
return v___x_97_;
}
else
{
lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_98_ = l_Lean_Expr_appFnCleanup___redArg(v___x_95_);
lean_dec_ref(v___x_95_);
v___x_99_ = l_Lean_Expr_isApp(v___x_98_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; 
lean_dec_ref(v___x_98_);
v___x_100_ = lean_box(0);
return v___x_100_;
}
else
{
lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_101_ = l_Lean_Expr_appFnCleanup___redArg(v___x_98_);
lean_dec_ref(v___x_98_);
v___x_102_ = l_Lean_Expr_isApp(v___x_101_);
if (v___x_102_ == 0)
{
lean_object* v___x_103_; 
lean_dec_ref(v___x_101_);
v___x_103_ = lean_box(0);
return v___x_103_;
}
else
{
lean_object* v___x_104_; lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_104_ = l_Lean_Expr_appFnCleanup___redArg(v___x_101_);
v___x_105_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f___closed__2));
v___x_106_ = l_Lean_Expr_isConstOf(v___x_104_, v___x_105_);
lean_dec_ref(v___x_104_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; 
lean_dec_ref(v___x_101_);
v___x_107_ = lean_box(0);
return v___x_107_;
}
else
{
lean_object* v_arg_108_; lean_object* v___x_109_; uint8_t v___x_110_; 
v_arg_108_ = lean_ctor_get(v___x_101_, 1);
lean_inc_ref(v_arg_108_);
lean_dec_ref(v___x_101_);
v___x_109_ = l_Lean_Expr_cleanupAnnotations(v_arg_108_);
lean_dec_ref(v_arg_108_);
v___x_110_ = l_Lean_Expr_isApp(v___x_109_);
if (v___x_110_ == 0)
{
lean_object* v___x_111_; 
lean_dec_ref(v___x_109_);
v___x_111_ = lean_box(0);
return v___x_111_;
}
else
{
lean_object* v___x_112_; lean_object* v___x_113_; uint8_t v___x_114_; 
v___x_112_ = l_Lean_Expr_appFnCleanup___redArg(v___x_109_);
v___x_113_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType___closed__1));
v___x_114_ = l_Lean_Expr_isConstOf(v___x_112_, v___x_113_);
lean_dec_ref(v___x_112_);
if (v___x_114_ == 0)
{
lean_object* v___x_115_; 
lean_dec_ref(v___x_109_);
v___x_115_ = lean_box(0);
return v___x_115_;
}
else
{
lean_object* v_arg_116_; lean_object* v___x_117_; 
v_arg_116_ = lean_ctor_get(v___x_109_, 1);
lean_inc_ref(v_arg_116_);
lean_dec_ref(v___x_109_);
v___x_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_117_, 0, v_arg_116_);
return v___x_117_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f___boxed(lean_object* v_e_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f(v_e_118_);
lean_dec_ref(v_e_118_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofApp2_x3f(lean_object* v_x_120_){
_start:
{
if (lean_obj_tag(v_x_120_) == 5)
{
lean_object* v_fn_121_; 
v_fn_121_ = lean_ctor_get(v_x_120_, 0);
if (lean_obj_tag(v_fn_121_) == 5)
{
lean_object* v_fn_122_; lean_object* v___x_123_; 
v_fn_122_ = lean_ctor_get(v_fn_121_, 0);
v___x_123_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f(v_fn_122_);
return v___x_123_;
}
else
{
lean_object* v___x_124_; 
v___x_124_ = lean_box(0);
return v___x_124_;
}
}
else
{
lean_object* v___x_125_; 
v___x_125_ = lean_box(0);
return v___x_125_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofApp2_x3f___boxed(lean_object* v_x_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofApp2_x3f(v_x_126_);
lean_dec_ref(v_x_126_);
return v_res_127_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__0(void){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = lean_unsigned_to_nat(0u);
v___x_129_ = l_Lean_Level_ofNat(v___x_128_);
return v___x_129_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__1(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_130_ = lean_box(0);
v___x_131_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__0);
v___x_132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_132_, 0, v___x_131_);
lean_ctor_set(v___x_132_, 1, v___x_130_);
return v___x_132_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__2(void){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_133_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__1);
v___x_134_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__0);
v___x_135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
lean_ctor_set(v___x_135_, 1, v___x_133_);
return v___x_135_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__3(void){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_136_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__2);
v___x_137_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__0);
v___x_138_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_137_);
lean_ctor_set(v___x_138_, 1, v___x_136_);
return v___x_138_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__4(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_139_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__3);
v___x_140_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f___closed__2));
v___x_141_ = l_Lean_mkConst(v___x_140_, v___x_139_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr(lean_object* v_x_142_){
_start:
{
lean_object* v_bv_143_; lean_object* v_inst_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
lean_inc_ref(v_x_142_);
v_bv_143_ = l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkType(v_x_142_);
v_inst_144_ = l_Lean_Meta_Tactic_BVDecide_Normalize_BitVec_mkInstHMul(v_x_142_);
v___x_145_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr___closed__4);
lean_inc_ref_n(v_bv_143_, 2);
v___x_146_ = l_Lean_mkApp4(v___x_145_, v_bv_143_, v_bv_143_, v_bv_143_, v_inst_144_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_neutralElement(lean_object* v_x_147_){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_148_ = lean_unsigned_to_nat(1u);
v___x_149_ = l_Lean_Meta_Tactic_BVDecide_Normalize_mkBitVecLit(v_x_147_, v___x_148_);
return v___x_149_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Op_isSameKind___redArg(lean_object* v_op_x27_150_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofExpr_x3f(v_op_x27_150_);
if (lean_obj_tag(v___x_151_) == 1)
{
uint8_t v___x_152_; 
lean_dec_ref_known(v___x_151_, 1);
v___x_152_ = 1;
return v___x_152_;
}
else
{
uint8_t v___x_153_; 
lean_dec(v___x_151_);
v___x_153_ = 0;
return v___x_153_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_isSameKind___redArg___boxed(lean_object* v_op_x27_154_){
_start:
{
uint8_t v_res_155_; lean_object* v_r_156_; 
v_res_155_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_isSameKind___redArg(v_op_x27_154_);
lean_dec_ref(v_op_x27_154_);
v_r_156_ = lean_box(v_res_155_);
return v_r_156_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Tactic_BVDecide_Normalize_Op_isSameKind(lean_object* v_op_157_, lean_object* v_op_x27_158_){
_start:
{
uint8_t v___x_159_; 
v___x_159_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_isSameKind___redArg(v_op_x27_158_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_isSameKind___boxed(lean_object* v_op_160_, lean_object* v_op_x27_161_){
_start:
{
uint8_t v_res_162_; lean_object* v_r_163_; 
v_res_162_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_isSameKind(v_op_160_, v_op_x27_161_);
lean_dec_ref(v_op_x27_161_);
lean_dec_ref(v_op_160_);
v_r_163_ = lean_box(v_res_162_);
return v_r_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_Op_instToMessageData___lam__0(lean_object* v_op_164_){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr(v_op_164_);
v___x_166_ = l_Lean_MessageData_ofExpr(v___x_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_run_x27___redArg(lean_object* v_x_169_, lean_object* v_s_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_){
_start:
{
lean_object* v___x_178_; 
lean_inc(v_a_176_);
lean_inc_ref(v_a_175_);
lean_inc(v_a_174_);
lean_inc_ref(v_a_173_);
lean_inc(v_a_172_);
lean_inc_ref(v_a_171_);
v___x_178_ = lean_apply_8(v_x_169_, v_s_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_, v_a_175_, v_a_176_, lean_box(0));
if (lean_obj_tag(v___x_178_) == 0)
{
lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_187_; 
v_a_179_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_187_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_187_ == 0)
{
v___x_181_ = v___x_178_;
v_isShared_182_ = v_isSharedCheck_187_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v___x_178_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_187_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v_fst_183_; lean_object* v___x_185_; 
v_fst_183_ = lean_ctor_get(v_a_179_, 0);
lean_inc(v_fst_183_);
lean_dec(v_a_179_);
if (v_isShared_182_ == 0)
{
lean_ctor_set(v___x_181_, 0, v_fst_183_);
v___x_185_ = v___x_181_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v_fst_183_);
v___x_185_ = v_reuseFailAlloc_186_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
return v___x_185_;
}
}
}
else
{
lean_object* v_a_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_195_; 
v_a_188_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_195_ == 0)
{
v___x_190_ = v___x_178_;
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_a_188_);
lean_dec(v___x_178_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_193_; 
if (v_isShared_191_ == 0)
{
v___x_193_ = v___x_190_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_a_188_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_run_x27___redArg___boxed(lean_object* v_x_196_, lean_object* v_s_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_, lean_object* v_a_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_run_x27___redArg(v_x_196_, v_s_197_, v_a_198_, v_a_199_, v_a_200_, v_a_201_, v_a_202_, v_a_203_);
lean_dec(v_a_203_);
lean_dec_ref(v_a_202_);
lean_dec(v_a_201_);
lean_dec_ref(v_a_200_);
lean_dec(v_a_199_);
lean_dec_ref(v_a_198_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_run_x27(lean_object* v_00_u03b1_206_, lean_object* v_x_207_, lean_object* v_s_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_run_x27___redArg(v_x_207_, v_s_208_, v_a_209_, v_a_210_, v_a_211_, v_a_212_, v_a_213_, v_a_214_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_run_x27___boxed(lean_object* v_00_u03b1_217_, lean_object* v_x_218_, lean_object* v_s_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_run_x27(v_00_u03b1_217_, v_x_218_, v_s_219_, v_a_220_, v_a_221_, v_a_222_, v_a_223_, v_a_224_, v_a_225_);
lean_dec(v_a_225_);
lean_dec_ref(v_a_224_);
lean_dec(v_a_223_);
lean_dec_ref(v_a_222_);
lean_dec(v_a_221_);
lean_dec_ref(v_a_220_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__4___redArg(lean_object* v_a_228_, lean_object* v_b_229_, lean_object* v_x_230_){
_start:
{
if (lean_obj_tag(v_x_230_) == 0)
{
lean_dec(v_b_229_);
lean_dec_ref(v_a_228_);
return v_x_230_;
}
else
{
lean_object* v_key_231_; lean_object* v_value_232_; lean_object* v_tail_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_245_; 
v_key_231_ = lean_ctor_get(v_x_230_, 0);
v_value_232_ = lean_ctor_get(v_x_230_, 1);
v_tail_233_ = lean_ctor_get(v_x_230_, 2);
v_isSharedCheck_245_ = !lean_is_exclusive(v_x_230_);
if (v_isSharedCheck_245_ == 0)
{
v___x_235_ = v_x_230_;
v_isShared_236_ = v_isSharedCheck_245_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_tail_233_);
lean_inc(v_value_232_);
lean_inc(v_key_231_);
lean_dec(v_x_230_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_245_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
uint8_t v___x_237_; 
v___x_237_ = lean_expr_eqv(v_key_231_, v_a_228_);
if (v___x_237_ == 0)
{
lean_object* v___x_238_; lean_object* v___x_240_; 
v___x_238_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__4___redArg(v_a_228_, v_b_229_, v_tail_233_);
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 2, v___x_238_);
v___x_240_ = v___x_235_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_key_231_);
lean_ctor_set(v_reuseFailAlloc_241_, 1, v_value_232_);
lean_ctor_set(v_reuseFailAlloc_241_, 2, v___x_238_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
else
{
lean_object* v___x_243_; 
lean_dec(v_value_232_);
lean_dec(v_key_231_);
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 1, v_b_229_);
lean_ctor_set(v___x_235_, 0, v_a_228_);
v___x_243_ = v___x_235_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_a_228_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v_b_229_);
lean_ctor_set(v_reuseFailAlloc_244_, 2, v_tail_233_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__2___redArg(lean_object* v_a_246_, lean_object* v_x_247_){
_start:
{
if (lean_obj_tag(v_x_247_) == 0)
{
uint8_t v___x_248_; 
v___x_248_ = 0;
return v___x_248_;
}
else
{
lean_object* v_key_249_; lean_object* v_tail_250_; uint8_t v___x_251_; 
v_key_249_ = lean_ctor_get(v_x_247_, 0);
v_tail_250_ = lean_ctor_get(v_x_247_, 2);
v___x_251_ = lean_expr_eqv(v_key_249_, v_a_246_);
if (v___x_251_ == 0)
{
v_x_247_ = v_tail_250_;
goto _start;
}
else
{
return v___x_251_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__2___redArg___boxed(lean_object* v_a_253_, lean_object* v_x_254_){
_start:
{
uint8_t v_res_255_; lean_object* v_r_256_; 
v_res_255_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__2___redArg(v_a_253_, v_x_254_);
lean_dec(v_x_254_);
lean_dec_ref(v_a_253_);
v_r_256_ = lean_box(v_res_255_);
return v_r_256_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_257_, lean_object* v_x_258_){
_start:
{
if (lean_obj_tag(v_x_258_) == 0)
{
return v_x_257_;
}
else
{
lean_object* v_key_259_; lean_object* v_value_260_; lean_object* v_tail_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_284_; 
v_key_259_ = lean_ctor_get(v_x_258_, 0);
v_value_260_ = lean_ctor_get(v_x_258_, 1);
v_tail_261_ = lean_ctor_get(v_x_258_, 2);
v_isSharedCheck_284_ = !lean_is_exclusive(v_x_258_);
if (v_isSharedCheck_284_ == 0)
{
v___x_263_ = v_x_258_;
v_isShared_264_ = v_isSharedCheck_284_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_tail_261_);
lean_inc(v_value_260_);
lean_inc(v_key_259_);
lean_dec(v_x_258_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_284_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_265_; uint64_t v___x_266_; uint64_t v___x_267_; uint64_t v___x_268_; uint64_t v_fold_269_; uint64_t v___x_270_; uint64_t v___x_271_; uint64_t v___x_272_; size_t v___x_273_; size_t v___x_274_; size_t v___x_275_; size_t v___x_276_; size_t v___x_277_; lean_object* v___x_278_; lean_object* v___x_280_; 
v___x_265_ = lean_array_get_size(v_x_257_);
v___x_266_ = l_Lean_Expr_hash(v_key_259_);
v___x_267_ = 32ULL;
v___x_268_ = lean_uint64_shift_right(v___x_266_, v___x_267_);
v_fold_269_ = lean_uint64_xor(v___x_266_, v___x_268_);
v___x_270_ = 16ULL;
v___x_271_ = lean_uint64_shift_right(v_fold_269_, v___x_270_);
v___x_272_ = lean_uint64_xor(v_fold_269_, v___x_271_);
v___x_273_ = lean_uint64_to_usize(v___x_272_);
v___x_274_ = lean_usize_of_nat(v___x_265_);
v___x_275_ = ((size_t)1ULL);
v___x_276_ = lean_usize_sub(v___x_274_, v___x_275_);
v___x_277_ = lean_usize_land(v___x_273_, v___x_276_);
v___x_278_ = lean_array_uget_borrowed(v_x_257_, v___x_277_);
lean_inc(v___x_278_);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 2, v___x_278_);
v___x_280_ = v___x_263_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_key_259_);
lean_ctor_set(v_reuseFailAlloc_283_, 1, v_value_260_);
lean_ctor_set(v_reuseFailAlloc_283_, 2, v___x_278_);
v___x_280_ = v_reuseFailAlloc_283_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
lean_object* v___x_281_; 
v___x_281_ = lean_array_uset(v_x_257_, v___x_277_, v___x_280_);
v_x_257_ = v___x_281_;
v_x_258_ = v_tail_261_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__3_spec__4___redArg(lean_object* v_i_285_, lean_object* v_source_286_, lean_object* v_target_287_){
_start:
{
lean_object* v___x_288_; uint8_t v___x_289_; 
v___x_288_ = lean_array_get_size(v_source_286_);
v___x_289_ = lean_nat_dec_lt(v_i_285_, v___x_288_);
if (v___x_289_ == 0)
{
lean_dec_ref(v_source_286_);
lean_dec(v_i_285_);
return v_target_287_;
}
else
{
lean_object* v_es_290_; lean_object* v___x_291_; lean_object* v_source_292_; lean_object* v_target_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v_es_290_ = lean_array_fget(v_source_286_, v_i_285_);
v___x_291_ = lean_box(0);
v_source_292_ = lean_array_fset(v_source_286_, v_i_285_, v___x_291_);
v_target_293_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__3_spec__4_spec__5___redArg(v_target_287_, v_es_290_);
v___x_294_ = lean_unsigned_to_nat(1u);
v___x_295_ = lean_nat_add(v_i_285_, v___x_294_);
lean_dec(v_i_285_);
v_i_285_ = v___x_295_;
v_source_286_ = v_source_292_;
v_target_287_ = v_target_293_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__3___redArg(lean_object* v_data_297_){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v_nbuckets_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_298_ = lean_array_get_size(v_data_297_);
v___x_299_ = lean_unsigned_to_nat(2u);
v_nbuckets_300_ = lean_nat_mul(v___x_298_, v___x_299_);
v___x_301_ = lean_unsigned_to_nat(0u);
v___x_302_ = lean_box(0);
v___x_303_ = lean_mk_array(v_nbuckets_300_, v___x_302_);
v___x_304_ = lean_array_propagate_mark(v_data_297_, v___x_303_);
v___x_305_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__3_spec__4___redArg(v___x_301_, v_data_297_, v___x_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1___redArg(lean_object* v_m_306_, lean_object* v_a_307_, lean_object* v_b_308_){
_start:
{
lean_object* v_size_309_; lean_object* v_buckets_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_353_; 
v_size_309_ = lean_ctor_get(v_m_306_, 0);
v_buckets_310_ = lean_ctor_get(v_m_306_, 1);
v_isSharedCheck_353_ = !lean_is_exclusive(v_m_306_);
if (v_isSharedCheck_353_ == 0)
{
v___x_312_ = v_m_306_;
v_isShared_313_ = v_isSharedCheck_353_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_buckets_310_);
lean_inc(v_size_309_);
lean_dec(v_m_306_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_353_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_314_; uint64_t v___x_315_; uint64_t v___x_316_; uint64_t v___x_317_; uint64_t v_fold_318_; uint64_t v___x_319_; uint64_t v___x_320_; uint64_t v___x_321_; size_t v___x_322_; size_t v___x_323_; size_t v___x_324_; size_t v___x_325_; size_t v___x_326_; lean_object* v_bkt_327_; uint8_t v___x_328_; 
v___x_314_ = lean_array_get_size(v_buckets_310_);
v___x_315_ = l_Lean_Expr_hash(v_a_307_);
v___x_316_ = 32ULL;
v___x_317_ = lean_uint64_shift_right(v___x_315_, v___x_316_);
v_fold_318_ = lean_uint64_xor(v___x_315_, v___x_317_);
v___x_319_ = 16ULL;
v___x_320_ = lean_uint64_shift_right(v_fold_318_, v___x_319_);
v___x_321_ = lean_uint64_xor(v_fold_318_, v___x_320_);
v___x_322_ = lean_uint64_to_usize(v___x_321_);
v___x_323_ = lean_usize_of_nat(v___x_314_);
v___x_324_ = ((size_t)1ULL);
v___x_325_ = lean_usize_sub(v___x_323_, v___x_324_);
v___x_326_ = lean_usize_land(v___x_322_, v___x_325_);
v_bkt_327_ = lean_array_uget_borrowed(v_buckets_310_, v___x_326_);
v___x_328_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__2___redArg(v_a_307_, v_bkt_327_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; lean_object* v_size_x27_330_; lean_object* v___x_331_; lean_object* v_buckets_x27_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; uint8_t v___x_338_; 
v___x_329_ = lean_unsigned_to_nat(1u);
v_size_x27_330_ = lean_nat_add(v_size_309_, v___x_329_);
lean_dec(v_size_309_);
lean_inc(v_bkt_327_);
v___x_331_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_331_, 0, v_a_307_);
lean_ctor_set(v___x_331_, 1, v_b_308_);
lean_ctor_set(v___x_331_, 2, v_bkt_327_);
v_buckets_x27_332_ = lean_array_uset(v_buckets_310_, v___x_326_, v___x_331_);
v___x_333_ = lean_unsigned_to_nat(4u);
v___x_334_ = lean_nat_mul(v_size_x27_330_, v___x_333_);
v___x_335_ = lean_unsigned_to_nat(3u);
v___x_336_ = lean_nat_div(v___x_334_, v___x_335_);
lean_dec(v___x_334_);
v___x_337_ = lean_array_get_size(v_buckets_x27_332_);
v___x_338_ = lean_nat_dec_le(v___x_336_, v___x_337_);
lean_dec(v___x_336_);
if (v___x_338_ == 0)
{
lean_object* v_val_339_; lean_object* v___x_341_; 
v_val_339_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__3___redArg(v_buckets_x27_332_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 1, v_val_339_);
lean_ctor_set(v___x_312_, 0, v_size_x27_330_);
v___x_341_ = v___x_312_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_size_x27_330_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v_val_339_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
else
{
lean_object* v___x_344_; 
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 1, v_buckets_x27_332_);
lean_ctor_set(v___x_312_, 0, v_size_x27_330_);
v___x_344_ = v___x_312_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_size_x27_330_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v_buckets_x27_332_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
else
{
lean_object* v___x_346_; lean_object* v_buckets_x27_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_351_; 
lean_inc(v_bkt_327_);
v___x_346_ = lean_box(0);
v_buckets_x27_347_ = lean_array_uset(v_buckets_310_, v___x_326_, v___x_346_);
v___x_348_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__4___redArg(v_a_307_, v_b_308_, v_bkt_327_);
v___x_349_ = lean_array_uset(v_buckets_x27_347_, v___x_326_, v___x_348_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 1, v___x_349_);
v___x_351_ = v___x_312_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_size_309_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v___x_349_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0_spec__0___redArg(lean_object* v_a_354_, lean_object* v_x_355_){
_start:
{
if (lean_obj_tag(v_x_355_) == 0)
{
lean_object* v___x_356_; 
v___x_356_ = lean_box(0);
return v___x_356_;
}
else
{
lean_object* v_key_357_; lean_object* v_value_358_; lean_object* v_tail_359_; uint8_t v___x_360_; 
v_key_357_ = lean_ctor_get(v_x_355_, 0);
v_value_358_ = lean_ctor_get(v_x_355_, 1);
v_tail_359_ = lean_ctor_get(v_x_355_, 2);
v___x_360_ = lean_expr_eqv(v_key_357_, v_a_354_);
if (v___x_360_ == 0)
{
v_x_355_ = v_tail_359_;
goto _start;
}
else
{
lean_object* v___x_362_; 
lean_inc(v_value_358_);
v___x_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_362_, 0, v_value_358_);
return v___x_362_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0_spec__0___redArg___boxed(lean_object* v_a_363_, lean_object* v_x_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0_spec__0___redArg(v_a_363_, v_x_364_);
lean_dec(v_x_364_);
lean_dec_ref(v_a_363_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0___redArg(lean_object* v_m_366_, lean_object* v_a_367_){
_start:
{
lean_object* v_buckets_368_; lean_object* v___x_369_; uint64_t v___x_370_; uint64_t v___x_371_; uint64_t v___x_372_; uint64_t v_fold_373_; uint64_t v___x_374_; uint64_t v___x_375_; uint64_t v___x_376_; size_t v___x_377_; size_t v___x_378_; size_t v___x_379_; size_t v___x_380_; size_t v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v_buckets_368_ = lean_ctor_get(v_m_366_, 1);
v___x_369_ = lean_array_get_size(v_buckets_368_);
v___x_370_ = l_Lean_Expr_hash(v_a_367_);
v___x_371_ = 32ULL;
v___x_372_ = lean_uint64_shift_right(v___x_370_, v___x_371_);
v_fold_373_ = lean_uint64_xor(v___x_370_, v___x_372_);
v___x_374_ = 16ULL;
v___x_375_ = lean_uint64_shift_right(v_fold_373_, v___x_374_);
v___x_376_ = lean_uint64_xor(v_fold_373_, v___x_375_);
v___x_377_ = lean_uint64_to_usize(v___x_376_);
v___x_378_ = lean_usize_of_nat(v___x_369_);
v___x_379_ = ((size_t)1ULL);
v___x_380_ = lean_usize_sub(v___x_378_, v___x_379_);
v___x_381_ = lean_usize_land(v___x_377_, v___x_380_);
v___x_382_ = lean_array_uget_borrowed(v_buckets_368_, v___x_381_);
v___x_383_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0_spec__0___redArg(v_a_367_, v___x_382_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0___redArg___boxed(lean_object* v_m_384_, lean_object* v_a_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0___redArg(v_m_384_, v_a_385_);
lean_dec_ref(v_a_385_);
lean_dec_ref(v_m_384_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar___redArg(lean_object* v_e_387_, lean_object* v_a_388_){
_start:
{
lean_object* v_op_390_; lean_object* v_exprToVarIndex_391_; lean_object* v_varToExpr_392_; lean_object* v___x_393_; 
v_op_390_ = lean_ctor_get(v_a_388_, 0);
v_exprToVarIndex_391_ = lean_ctor_get(v_a_388_, 1);
v_varToExpr_392_ = lean_ctor_get(v_a_388_, 2);
v___x_393_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0___redArg(v_exprToVarIndex_391_, v_e_387_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_405_; 
lean_inc_ref(v_varToExpr_392_);
lean_inc_ref(v_exprToVarIndex_391_);
lean_inc_ref(v_op_390_);
v_isSharedCheck_405_ = !lean_is_exclusive(v_a_388_);
if (v_isSharedCheck_405_ == 0)
{
lean_object* v_unused_406_; lean_object* v_unused_407_; lean_object* v_unused_408_; 
v_unused_406_ = lean_ctor_get(v_a_388_, 2);
lean_dec(v_unused_406_);
v_unused_407_ = lean_ctor_get(v_a_388_, 1);
lean_dec(v_unused_407_);
v_unused_408_ = lean_ctor_get(v_a_388_, 0);
lean_dec(v_unused_408_);
v___x_395_ = v_a_388_;
v_isShared_396_ = v_isSharedCheck_405_;
goto v_resetjp_394_;
}
else
{
lean_dec(v_a_388_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_405_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v_size_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_401_; 
v_size_397_ = lean_ctor_get(v_exprToVarIndex_391_, 0);
lean_inc_n(v_size_397_, 2);
lean_inc_ref(v_e_387_);
v___x_398_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1___redArg(v_exprToVarIndex_391_, v_e_387_, v_size_397_);
v___x_399_ = lean_array_push(v_varToExpr_392_, v_e_387_);
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 2, v___x_399_);
lean_ctor_set(v___x_395_, 1, v___x_398_);
v___x_401_ = v___x_395_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_op_390_);
lean_ctor_set(v_reuseFailAlloc_404_, 1, v___x_398_);
lean_ctor_set(v_reuseFailAlloc_404_, 2, v___x_399_);
v___x_401_ = v_reuseFailAlloc_404_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_402_, 0, v_size_397_);
lean_ctor_set(v___x_402_, 1, v___x_401_);
v___x_403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_403_, 0, v___x_402_);
return v___x_403_;
}
}
}
else
{
lean_object* v_val_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_417_; 
lean_dec_ref(v_e_387_);
v_val_409_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_417_ == 0)
{
v___x_411_ = v___x_393_;
v_isShared_412_ = v_isSharedCheck_417_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_val_409_);
lean_dec(v___x_393_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_417_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_413_; lean_object* v___x_415_; 
v___x_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_413_, 0, v_val_409_);
lean_ctor_set(v___x_413_, 1, v_a_388_);
if (v_isShared_412_ == 0)
{
lean_ctor_set_tag(v___x_411_, 0);
lean_ctor_set(v___x_411_, 0, v___x_413_);
v___x_415_ = v___x_411_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v___x_413_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar___redArg___boxed(lean_object* v_e_418_, lean_object* v_a_419_, lean_object* v_a_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar___redArg(v_e_418_, v_a_419_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar(lean_object* v_e_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_){
_start:
{
lean_object* v___x_431_; 
v___x_431_ = l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar___redArg(v_e_422_, v_a_423_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar___boxed(lean_object* v_e_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar(v_e_432_, v_a_433_, v_a_434_, v_a_435_, v_a_436_, v_a_437_, v_a_438_, v_a_439_);
lean_dec(v_a_439_);
lean_dec_ref(v_a_438_);
lean_dec(v_a_437_);
lean_dec_ref(v_a_436_);
lean_dec(v_a_435_);
lean_dec_ref(v_a_434_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0(lean_object* v_00_u03b2_442_, lean_object* v_m_443_, lean_object* v_a_444_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0___redArg(v_m_443_, v_a_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0___boxed(lean_object* v_00_u03b2_446_, lean_object* v_m_447_, lean_object* v_a_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0(v_00_u03b2_446_, v_m_447_, v_a_448_);
lean_dec_ref(v_a_448_);
lean_dec_ref(v_m_447_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1(lean_object* v_00_u03b2_450_, lean_object* v_m_451_, lean_object* v_a_452_, lean_object* v_b_453_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1___redArg(v_m_451_, v_a_452_, v_b_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0_spec__0(lean_object* v_00_u03b2_455_, lean_object* v_a_456_, lean_object* v_x_457_){
_start:
{
lean_object* v___x_458_; 
v___x_458_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0_spec__0___redArg(v_a_456_, v_x_457_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0_spec__0___boxed(lean_object* v_00_u03b2_459_, lean_object* v_a_460_, lean_object* v_x_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__0_spec__0(v_00_u03b2_459_, v_a_460_, v_x_461_);
lean_dec(v_x_461_);
lean_dec_ref(v_a_460_);
return v_res_462_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__2(lean_object* v_00_u03b2_463_, lean_object* v_a_464_, lean_object* v_x_465_){
_start:
{
uint8_t v___x_466_; 
v___x_466_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__2___redArg(v_a_464_, v_x_465_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__2___boxed(lean_object* v_00_u03b2_467_, lean_object* v_a_468_, lean_object* v_x_469_){
_start:
{
uint8_t v_res_470_; lean_object* v_r_471_; 
v_res_470_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__2(v_00_u03b2_467_, v_a_468_, v_x_469_);
lean_dec(v_x_469_);
lean_dec_ref(v_a_468_);
v_r_471_ = lean_box(v_res_470_);
return v_r_471_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__3(lean_object* v_00_u03b2_472_, lean_object* v_data_473_){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__3___redArg(v_data_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__4(lean_object* v_00_u03b2_475_, lean_object* v_a_476_, lean_object* v_b_477_, lean_object* v_x_478_){
_start:
{
lean_object* v___x_479_; 
v___x_479_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__4___redArg(v_a_476_, v_b_477_, v_x_478_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_480_, lean_object* v_i_481_, lean_object* v_source_482_, lean_object* v_target_483_){
_start:
{
lean_object* v___x_484_; 
v___x_484_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__3_spec__4___redArg(v_i_481_, v_source_482_, v_target_483_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_485_, lean_object* v_x_486_, lean_object* v_x_487_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar_spec__1_spec__3_spec__4_spec__5___redArg(v_x_486_, v_x_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1_spec__1(lean_object* v_msgData_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_){
_start:
{
lean_object* v___x_495_; lean_object* v_env_496_; uint8_t v___x_497_; lean_object* v_env_498_; lean_object* v___x_499_; lean_object* v_toCold_500_; lean_object* v_mctx_501_; lean_object* v_lctx_502_; lean_object* v_options_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_495_ = lean_st_ref_get(v___y_493_);
v_env_496_ = lean_ctor_get(v___x_495_, 0);
lean_inc_ref(v_env_496_);
lean_dec(v___x_495_);
v___x_497_ = 0;
v_env_498_ = l_Lean_Environment_setRecordingDeps(v_env_496_, v___x_497_);
v___x_499_ = lean_st_ref_get(v___y_491_);
v_toCold_500_ = lean_ctor_get(v___y_492_, 0);
v_mctx_501_ = lean_ctor_get(v___x_499_, 0);
lean_inc_ref(v_mctx_501_);
lean_dec(v___x_499_);
v_lctx_502_ = lean_ctor_get(v___y_490_, 2);
v_options_503_ = lean_ctor_get(v_toCold_500_, 2);
lean_inc_ref(v_options_503_);
lean_inc_ref(v_lctx_502_);
v___x_504_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_504_, 0, v_env_498_);
lean_ctor_set(v___x_504_, 1, v_mctx_501_);
lean_ctor_set(v___x_504_, 2, v_lctx_502_);
lean_ctor_set(v___x_504_, 3, v_options_503_);
v___x_505_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_505_, 0, v___x_504_);
lean_ctor_set(v___x_505_, 1, v_msgData_489_);
v___x_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_506_, 0, v___x_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1_spec__1___boxed(lean_object* v_msgData_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1_spec__1(v_msgData_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_);
lean_dec(v___y_511_);
lean_dec_ref(v___y_510_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1___redArg(lean_object* v_msg_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_){
_start:
{
lean_object* v_ref_520_; lean_object* v___x_521_; lean_object* v_a_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_530_; 
v_ref_520_ = lean_ctor_get(v___y_517_, 2);
v___x_521_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1_spec__1(v_msg_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_);
v_a_522_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_530_ == 0)
{
v___x_524_ = v___x_521_;
v_isShared_525_ = v_isSharedCheck_530_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_a_522_);
lean_dec(v___x_521_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_530_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_526_; lean_object* v___x_528_; 
lean_inc(v_ref_520_);
v___x_526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_526_, 0, v_ref_520_);
lean_ctor_set(v___x_526_, 1, v_a_522_);
if (v_isShared_525_ == 0)
{
lean_ctor_set_tag(v___x_524_, 1);
lean_ctor_set(v___x_524_, 0, v___x_526_);
v___x_528_ = v___x_524_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v___x_526_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1___redArg___boxed(lean_object* v_msg_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1___redArg(v_msg_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_);
lean_dec(v___y_535_);
lean_dec_ref(v___y_534_);
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__0(lean_object* v_a_538_, lean_object* v_a_539_){
_start:
{
if (lean_obj_tag(v_a_538_) == 0)
{
lean_object* v___x_540_; 
v___x_540_ = l_List_reverse___redArg(v_a_539_);
return v___x_540_;
}
else
{
lean_object* v_head_541_; lean_object* v_tail_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_551_; 
v_head_541_ = lean_ctor_get(v_a_538_, 0);
v_tail_542_ = lean_ctor_get(v_a_538_, 1);
v_isSharedCheck_551_ = !lean_is_exclusive(v_a_538_);
if (v_isSharedCheck_551_ == 0)
{
v___x_544_ = v_a_538_;
v_isShared_545_ = v_isSharedCheck_551_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_tail_542_);
lean_inc(v_head_541_);
lean_dec(v_a_538_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_551_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_546_; lean_object* v___x_548_; 
v___x_546_ = l_Lean_MessageData_ofExpr(v_head_541_);
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 1, v_a_539_);
lean_ctor_set(v___x_544_, 0, v___x_546_);
v___x_548_ = v___x_544_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_546_);
lean_ctor_set(v_reuseFailAlloc_550_, 1, v_a_539_);
v___x_548_ = v_reuseFailAlloc_550_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
v_a_538_ = v_tail_542_;
v_a_539_ = v___x_548_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__1(void){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__0));
v___x_554_ = l_Lean_stringToMessageData(v___x_553_);
return v___x_554_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__3(void){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_556_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__2));
v___x_557_ = l_Lean_stringToMessageData(v___x_556_);
return v___x_557_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__5(void){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_559_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__4));
v___x_560_ = l_Lean_stringToMessageData(v___x_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr(lean_object* v_idx_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_){
_start:
{
lean_object* v_varToExpr_570_; lean_object* v___x_571_; uint8_t v___x_572_; 
v_varToExpr_570_ = lean_ctor_get(v_a_562_, 2);
v___x_571_ = lean_array_get_size(v_varToExpr_570_);
v___x_572_ = lean_nat_dec_lt(v_idx_561_, v___x_571_);
if (v___x_572_ == 0)
{
lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
lean_inc_ref(v_varToExpr_570_);
lean_dec_ref(v_a_562_);
v___x_573_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__1);
v___x_574_ = l_Nat_reprFast(v_idx_561_);
v___x_575_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
v___x_576_ = l_Lean_MessageData_ofFormat(v___x_575_);
v___x_577_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_577_, 0, v___x_573_);
lean_ctor_set(v___x_577_, 1, v___x_576_);
v___x_578_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__3);
v___x_579_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_579_, 0, v___x_577_);
lean_ctor_set(v___x_579_, 1, v___x_578_);
v___x_580_ = l_Nat_reprFast(v___x_571_);
v___x_581_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
v___x_582_ = l_Lean_MessageData_ofFormat(v___x_581_);
v___x_583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_579_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___closed__5);
v___x_585_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_583_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
v___x_586_ = lean_array_to_list(v_varToExpr_570_);
v___x_587_ = lean_box(0);
v___x_588_ = l_List_mapTR_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__0(v___x_586_, v___x_587_);
v___x_589_ = l_Lean_MessageData_ofList(v___x_588_);
v___x_590_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_590_, 0, v___x_585_);
lean_ctor_set(v___x_590_, 1, v___x_589_);
v___x_591_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1___redArg(v___x_590_, v_a_565_, v_a_566_, v_a_567_, v_a_568_);
return v___x_591_;
}
else
{
lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_592_ = lean_array_fget(v_varToExpr_570_, v_idx_561_);
lean_dec(v_idx_561_);
v___x_593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_593_, 0, v___x_592_);
lean_ctor_set(v___x_593_, 1, v_a_562_);
v___x_594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_594_, 0, v___x_593_);
return v___x_594_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr___boxed(lean_object* v_idx_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_){
_start:
{
lean_object* v_res_604_; 
v_res_604_ = l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr(v_idx_595_, v_a_596_, v_a_597_, v_a_598_, v_a_599_, v_a_600_, v_a_601_, v_a_602_);
lean_dec(v_a_602_);
lean_dec_ref(v_a_601_);
lean_dec(v_a_600_);
lean_dec_ref(v_a_599_);
lean_dec(v_a_598_);
lean_dec_ref(v_a_597_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1(lean_object* v_00_u03b1_605_, lean_object* v_msg_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_){
_start:
{
lean_object* v___x_615_; 
v___x_615_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1___redArg(v_msg_606_, v___y_610_, v___y_611_, v___y_612_, v___y_613_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1___boxed(lean_object* v_00_u03b1_616_, lean_object* v_msg_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_){
_start:
{
lean_object* v_res_626_; 
v_res_626_ = l_Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1(v_00_u03b1_616_, v_msg_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_, v___y_624_);
lean_dec(v___y_624_);
lean_dec_ref(v___y_623_);
lean_dec(v___y_622_);
lean_dec_ref(v___y_621_);
lean_dec(v___y_620_);
lean_dec_ref(v___y_619_);
lean_dec_ref(v___y_618_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__2___lam__0(lean_object* v_c_627_){
_start:
{
lean_object* v___y_629_; 
if (lean_obj_tag(v_c_627_) == 0)
{
lean_object* v___x_633_; 
v___x_633_ = lean_unsigned_to_nat(0u);
v___y_629_ = v___x_633_;
goto v___jp_628_;
}
else
{
lean_object* v_val_634_; 
v_val_634_ = lean_ctor_get(v_c_627_, 0);
v___y_629_ = v_val_634_;
goto v___jp_628_;
}
v___jp_628_:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_630_ = lean_unsigned_to_nat(1u);
v___x_631_ = lean_nat_add(v___y_629_, v___x_630_);
v___x_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_632_, 0, v___x_631_);
return v___x_632_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__2___lam__0___boxed(lean_object* v_c_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__2___lam__0(v_c_635_);
lean_dec(v_c_635_);
return v_res_636_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = lean_box(0);
v___x_638_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__2___lam__0(v___x_637_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__2(lean_object* v_a_639_, lean_object* v_x_640_){
_start:
{
if (lean_obj_tag(v_x_640_) == 0)
{
lean_object* v___x_641_; lean_object* v_val_642_; lean_object* v___x_643_; 
v___x_641_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__2___closed__0, &l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__2___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__2___closed__0);
v_val_642_ = lean_ctor_get(v___x_641_, 0);
lean_inc(v_val_642_);
v___x_643_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_643_, 0, v_a_639_);
lean_ctor_set(v___x_643_, 1, v_val_642_);
lean_ctor_set(v___x_643_, 2, v_x_640_);
return v___x_643_;
}
else
{
lean_object* v_key_644_; lean_object* v_value_645_; lean_object* v_tail_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_661_; 
v_key_644_ = lean_ctor_get(v_x_640_, 0);
v_value_645_ = lean_ctor_get(v_x_640_, 1);
v_tail_646_ = lean_ctor_get(v_x_640_, 2);
v_isSharedCheck_661_ = !lean_is_exclusive(v_x_640_);
if (v_isSharedCheck_661_ == 0)
{
v___x_648_ = v_x_640_;
v_isShared_649_ = v_isSharedCheck_661_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_tail_646_);
lean_inc(v_value_645_);
lean_inc(v_key_644_);
lean_dec(v_x_640_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_661_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
uint8_t v___x_650_; 
v___x_650_ = lean_nat_dec_eq(v_key_644_, v_a_639_);
if (v___x_650_ == 0)
{
lean_object* v_tail_651_; lean_object* v___x_653_; 
v_tail_651_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__2(v_a_639_, v_tail_646_);
if (v_isShared_649_ == 0)
{
lean_ctor_set(v___x_648_, 2, v_tail_651_);
v___x_653_ = v___x_648_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_key_644_);
lean_ctor_set(v_reuseFailAlloc_654_, 1, v_value_645_);
lean_ctor_set(v_reuseFailAlloc_654_, 2, v_tail_651_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
else
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v_val_657_; lean_object* v___x_659_; 
lean_dec(v_key_644_);
v___x_655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_655_, 0, v_value_645_);
v___x_656_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__2___lam__0(v___x_655_);
lean_dec_ref_known(v___x_655_, 1);
v_val_657_ = lean_ctor_get(v___x_656_, 0);
lean_inc(v_val_657_);
lean_dec(v___x_656_);
if (v_isShared_649_ == 0)
{
lean_ctor_set(v___x_648_, 1, v_val_657_);
lean_ctor_set(v___x_648_, 0, v_a_639_);
v___x_659_ = v___x_648_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_639_);
lean_ctor_set(v_reuseFailAlloc_660_, 1, v_val_657_);
lean_ctor_set(v_reuseFailAlloc_660_, 2, v_tail_646_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_662_, lean_object* v_x_663_){
_start:
{
if (lean_obj_tag(v_x_663_) == 0)
{
return v_x_662_;
}
else
{
lean_object* v_key_664_; lean_object* v_value_665_; lean_object* v_tail_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_689_; 
v_key_664_ = lean_ctor_get(v_x_663_, 0);
v_value_665_ = lean_ctor_get(v_x_663_, 1);
v_tail_666_ = lean_ctor_get(v_x_663_, 2);
v_isSharedCheck_689_ = !lean_is_exclusive(v_x_663_);
if (v_isSharedCheck_689_ == 0)
{
v___x_668_ = v_x_663_;
v_isShared_669_ = v_isSharedCheck_689_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_tail_666_);
lean_inc(v_value_665_);
lean_inc(v_key_664_);
lean_dec(v_x_663_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_689_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_670_; uint64_t v___x_671_; uint64_t v___x_672_; uint64_t v___x_673_; uint64_t v_fold_674_; uint64_t v___x_675_; uint64_t v___x_676_; uint64_t v___x_677_; size_t v___x_678_; size_t v___x_679_; size_t v___x_680_; size_t v___x_681_; size_t v___x_682_; lean_object* v___x_683_; lean_object* v___x_685_; 
v___x_670_ = lean_array_get_size(v_x_662_);
v___x_671_ = lean_uint64_of_nat(v_key_664_);
v___x_672_ = 32ULL;
v___x_673_ = lean_uint64_shift_right(v___x_671_, v___x_672_);
v_fold_674_ = lean_uint64_xor(v___x_671_, v___x_673_);
v___x_675_ = 16ULL;
v___x_676_ = lean_uint64_shift_right(v_fold_674_, v___x_675_);
v___x_677_ = lean_uint64_xor(v_fold_674_, v___x_676_);
v___x_678_ = lean_uint64_to_usize(v___x_677_);
v___x_679_ = lean_usize_of_nat(v___x_670_);
v___x_680_ = ((size_t)1ULL);
v___x_681_ = lean_usize_sub(v___x_679_, v___x_680_);
v___x_682_ = lean_usize_land(v___x_678_, v___x_681_);
v___x_683_ = lean_array_uget_borrowed(v_x_662_, v___x_682_);
lean_inc(v___x_683_);
if (v_isShared_669_ == 0)
{
lean_ctor_set(v___x_668_, 2, v___x_683_);
v___x_685_ = v___x_668_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_key_664_);
lean_ctor_set(v_reuseFailAlloc_688_, 1, v_value_665_);
lean_ctor_set(v_reuseFailAlloc_688_, 2, v___x_683_);
v___x_685_ = v_reuseFailAlloc_688_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
lean_object* v___x_686_; 
v___x_686_ = lean_array_uset(v_x_662_, v___x_682_, v___x_685_);
v_x_662_ = v___x_686_;
v_x_663_ = v_tail_666_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1_spec__2___redArg(lean_object* v_i_690_, lean_object* v_source_691_, lean_object* v_target_692_){
_start:
{
lean_object* v___x_693_; uint8_t v___x_694_; 
v___x_693_ = lean_array_get_size(v_source_691_);
v___x_694_ = lean_nat_dec_lt(v_i_690_, v___x_693_);
if (v___x_694_ == 0)
{
lean_dec_ref(v_source_691_);
lean_dec(v_i_690_);
return v_target_692_;
}
else
{
lean_object* v_es_695_; lean_object* v___x_696_; lean_object* v_source_697_; lean_object* v_target_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v_es_695_ = lean_array_fget(v_source_691_, v_i_690_);
v___x_696_ = lean_box(0);
v_source_697_ = lean_array_fset(v_source_691_, v_i_690_, v___x_696_);
v_target_698_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1_spec__2_spec__3___redArg(v_target_692_, v_es_695_);
v___x_699_ = lean_unsigned_to_nat(1u);
v___x_700_ = lean_nat_add(v_i_690_, v___x_699_);
lean_dec(v_i_690_);
v_i_690_ = v___x_700_;
v_source_691_ = v_source_697_;
v_target_692_ = v_target_698_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1___redArg(lean_object* v_data_702_){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v_nbuckets_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_703_ = lean_array_get_size(v_data_702_);
v___x_704_ = lean_unsigned_to_nat(2u);
v_nbuckets_705_ = lean_nat_mul(v___x_703_, v___x_704_);
v___x_706_ = lean_unsigned_to_nat(0u);
v___x_707_ = lean_box(0);
v___x_708_ = lean_mk_array(v_nbuckets_705_, v___x_707_);
v___x_709_ = lean_array_propagate_mark(v_data_702_, v___x_708_);
v___x_710_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1_spec__2___redArg(v___x_706_, v_data_702_, v___x_709_);
return v___x_710_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__0___redArg(lean_object* v_a_711_, lean_object* v_x_712_){
_start:
{
if (lean_obj_tag(v_x_712_) == 0)
{
uint8_t v___x_713_; 
v___x_713_ = 0;
return v___x_713_;
}
else
{
lean_object* v_key_714_; lean_object* v_tail_715_; uint8_t v___x_716_; 
v_key_714_ = lean_ctor_get(v_x_712_, 0);
v_tail_715_ = lean_ctor_get(v_x_712_, 2);
v___x_716_ = lean_nat_dec_eq(v_key_714_, v_a_711_);
if (v___x_716_ == 0)
{
v_x_712_ = v_tail_715_;
goto _start;
}
else
{
return v___x_716_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__0___redArg___boxed(lean_object* v_a_718_, lean_object* v_x_719_){
_start:
{
uint8_t v_res_720_; lean_object* v_r_721_; 
v_res_720_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__0___redArg(v_a_718_, v_x_719_);
lean_dec(v_x_719_);
lean_dec(v_a_718_);
v_r_721_ = lean_box(v_res_720_);
return v_r_721_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0(lean_object* v_m_722_, lean_object* v_a_723_){
_start:
{
lean_object* v_size_724_; lean_object* v_buckets_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_773_; 
v_size_724_ = lean_ctor_get(v_m_722_, 0);
v_buckets_725_ = lean_ctor_get(v_m_722_, 1);
v_isSharedCheck_773_ = !lean_is_exclusive(v_m_722_);
if (v_isSharedCheck_773_ == 0)
{
v___x_727_ = v_m_722_;
v_isShared_728_ = v_isSharedCheck_773_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_buckets_725_);
lean_inc(v_size_724_);
lean_dec(v_m_722_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_773_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_729_; uint64_t v___x_730_; uint64_t v___x_731_; uint64_t v___x_732_; uint64_t v_fold_733_; uint64_t v___x_734_; uint64_t v___x_735_; uint64_t v___x_736_; size_t v___x_737_; size_t v___x_738_; size_t v___x_739_; size_t v___x_740_; size_t v___x_741_; lean_object* v_bkt_742_; uint8_t v___x_743_; 
v___x_729_ = lean_array_get_size(v_buckets_725_);
v___x_730_ = lean_uint64_of_nat(v_a_723_);
v___x_731_ = 32ULL;
v___x_732_ = lean_uint64_shift_right(v___x_730_, v___x_731_);
v_fold_733_ = lean_uint64_xor(v___x_730_, v___x_732_);
v___x_734_ = 16ULL;
v___x_735_ = lean_uint64_shift_right(v_fold_733_, v___x_734_);
v___x_736_ = lean_uint64_xor(v_fold_733_, v___x_735_);
v___x_737_ = lean_uint64_to_usize(v___x_736_);
v___x_738_ = lean_usize_of_nat(v___x_729_);
v___x_739_ = ((size_t)1ULL);
v___x_740_ = lean_usize_sub(v___x_738_, v___x_739_);
v___x_741_ = lean_usize_land(v___x_737_, v___x_740_);
v_bkt_742_ = lean_array_uget_borrowed(v_buckets_725_, v___x_741_);
v___x_743_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__0___redArg(v_a_723_, v_bkt_742_);
if (v___x_743_ == 0)
{
lean_object* v___x_744_; lean_object* v_size_x27_745_; lean_object* v___x_746_; lean_object* v_buckets_x27_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; uint8_t v___x_753_; 
v___x_744_ = lean_unsigned_to_nat(1u);
v_size_x27_745_ = lean_nat_add(v_size_724_, v___x_744_);
lean_dec(v_size_724_);
lean_inc(v_bkt_742_);
v___x_746_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_746_, 0, v_a_723_);
lean_ctor_set(v___x_746_, 1, v___x_744_);
lean_ctor_set(v___x_746_, 2, v_bkt_742_);
v_buckets_x27_747_ = lean_array_uset(v_buckets_725_, v___x_741_, v___x_746_);
v___x_748_ = lean_unsigned_to_nat(4u);
v___x_749_ = lean_nat_mul(v_size_x27_745_, v___x_748_);
v___x_750_ = lean_unsigned_to_nat(3u);
v___x_751_ = lean_nat_div(v___x_749_, v___x_750_);
lean_dec(v___x_749_);
v___x_752_ = lean_array_get_size(v_buckets_x27_747_);
v___x_753_ = lean_nat_dec_le(v___x_751_, v___x_752_);
lean_dec(v___x_751_);
if (v___x_753_ == 0)
{
lean_object* v_val_754_; lean_object* v___x_756_; 
v_val_754_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1___redArg(v_buckets_x27_747_);
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 1, v_val_754_);
lean_ctor_set(v___x_727_, 0, v_size_x27_745_);
v___x_756_ = v___x_727_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_size_x27_745_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_val_754_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
else
{
lean_object* v___x_759_; 
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 1, v_buckets_x27_747_);
lean_ctor_set(v___x_727_, 0, v_size_x27_745_);
v___x_759_ = v___x_727_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_size_x27_745_);
lean_ctor_set(v_reuseFailAlloc_760_, 1, v_buckets_x27_747_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
else
{
lean_object* v___x_761_; lean_object* v_buckets_x27_762_; lean_object* v_bkt_x27_763_; lean_object* v___y_765_; uint8_t v___x_770_; 
lean_inc(v_bkt_742_);
v___x_761_ = lean_box(0);
v_buckets_x27_762_ = lean_array_uset(v_buckets_725_, v___x_741_, v___x_761_);
lean_inc(v_a_723_);
v_bkt_x27_763_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__2(v_a_723_, v_bkt_742_);
v___x_770_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__0___redArg(v_a_723_, v_bkt_x27_763_);
lean_dec(v_a_723_);
if (v___x_770_ == 0)
{
lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_771_ = lean_unsigned_to_nat(1u);
v___x_772_ = lean_nat_sub(v_size_724_, v___x_771_);
lean_dec(v_size_724_);
v___y_765_ = v___x_772_;
goto v___jp_764_;
}
else
{
v___y_765_ = v_size_724_;
goto v___jp_764_;
}
v___jp_764_:
{
lean_object* v___x_766_; lean_object* v___x_768_; 
v___x_766_ = lean_array_uset(v_buckets_x27_762_, v___x_741_, v_bkt_x27_763_);
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 1, v___x_766_);
lean_ctor_set(v___x_727_, 0, v___y_765_);
v___x_768_ = v___x_727_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v___y_765_);
lean_ctor_set(v_reuseFailAlloc_769_, 1, v___x_766_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar___redArg(lean_object* v_coeff_774_, lean_object* v_e_775_, lean_object* v_a_776_){
_start:
{
lean_object* v___x_778_; lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_796_; 
v___x_778_ = l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_exprToVar___redArg(v_e_775_, v_a_776_);
v_a_779_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_796_ == 0)
{
v___x_781_ = v___x_778_;
v_isShared_782_ = v_isSharedCheck_796_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_778_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_796_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v_fst_783_; lean_object* v_snd_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_795_; 
v_fst_783_ = lean_ctor_get(v_a_779_, 0);
v_snd_784_ = lean_ctor_get(v_a_779_, 1);
v_isSharedCheck_795_ = !lean_is_exclusive(v_a_779_);
if (v_isSharedCheck_795_ == 0)
{
v___x_786_ = v_a_779_;
v_isShared_787_ = v_isSharedCheck_795_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_snd_784_);
lean_inc(v_fst_783_);
lean_dec(v_a_779_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_795_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_788_; lean_object* v___x_790_; 
v___x_788_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0(v_coeff_774_, v_fst_783_);
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 0, v___x_788_);
v___x_790_ = v___x_786_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v___x_788_);
lean_ctor_set(v_reuseFailAlloc_794_, 1, v_snd_784_);
v___x_790_ = v_reuseFailAlloc_794_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
lean_object* v___x_792_; 
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 0, v___x_790_);
v___x_792_ = v___x_781_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v___x_790_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar___redArg___boxed(lean_object* v_coeff_797_, lean_object* v_e_798_, lean_object* v_a_799_, lean_object* v_a_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar___redArg(v_coeff_797_, v_e_798_, v_a_799_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar(lean_object* v_coeff_802_, lean_object* v_e_803_, lean_object* v_a_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_, lean_object* v_a_809_, lean_object* v_a_810_){
_start:
{
lean_object* v___x_812_; 
v___x_812_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar___redArg(v_coeff_802_, v_e_803_, v_a_804_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar___boxed(lean_object* v_coeff_813_, lean_object* v_e_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar(v_coeff_813_, v_e_814_, v_a_815_, v_a_816_, v_a_817_, v_a_818_, v_a_819_, v_a_820_, v_a_821_);
lean_dec(v_a_821_);
lean_dec_ref(v_a_820_);
lean_dec(v_a_819_);
lean_dec_ref(v_a_818_);
lean_dec(v_a_817_);
lean_dec_ref(v_a_816_);
return v_res_823_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__0(lean_object* v_00_u03b2_824_, lean_object* v_a_825_, lean_object* v_x_826_){
_start:
{
uint8_t v___x_827_; 
v___x_827_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__0___redArg(v_a_825_, v_x_826_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__0___boxed(lean_object* v_00_u03b2_828_, lean_object* v_a_829_, lean_object* v_x_830_){
_start:
{
uint8_t v_res_831_; lean_object* v_r_832_; 
v_res_831_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__0(v_00_u03b2_828_, v_a_829_, v_x_830_);
lean_dec(v_x_830_);
lean_dec(v_a_829_);
v_r_832_ = lean_box(v_res_831_);
return v_r_832_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1(lean_object* v_00_u03b2_833_, lean_object* v_data_834_){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1___redArg(v_data_834_);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_836_, lean_object* v_i_837_, lean_object* v_source_838_, lean_object* v_target_839_){
_start:
{
lean_object* v___x_840_; 
v___x_840_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1_spec__2___redArg(v_i_837_, v_source_838_, v_target_839_);
return v___x_840_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_841_, lean_object* v_x_842_, lean_object* v_x_843_){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1_spec__2_spec__3___redArg(v_x_842_, v_x_843_);
return v___x_844_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_845_; double v___x_846_; 
v___x_845_ = lean_unsigned_to_nat(0u);
v___x_846_ = lean_float_of_nat(v___x_845_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg(lean_object* v_cls_850_, lean_object* v_msg_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
lean_object* v_ref_858_; lean_object* v___x_859_; lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_906_; 
v_ref_858_ = lean_ctor_get(v___y_855_, 2);
v___x_859_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1_spec__1(v_msg_851_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
v_a_860_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_906_ == 0)
{
v___x_862_ = v___x_859_;
v_isShared_863_ = v_isSharedCheck_906_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_dec(v___x_859_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_906_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_864_; lean_object* v_traceState_865_; lean_object* v_env_866_; lean_object* v_nextMacroScope_867_; lean_object* v_ngen_868_; lean_object* v_auxDeclNGen_869_; lean_object* v_cache_870_; lean_object* v_recordedDeps_871_; lean_object* v_messages_872_; lean_object* v_infoState_873_; lean_object* v_snapshotTasks_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_905_; 
v___x_864_ = lean_st_ref_take(v___y_856_);
v_traceState_865_ = lean_ctor_get(v___x_864_, 4);
v_env_866_ = lean_ctor_get(v___x_864_, 0);
v_nextMacroScope_867_ = lean_ctor_get(v___x_864_, 1);
v_ngen_868_ = lean_ctor_get(v___x_864_, 2);
v_auxDeclNGen_869_ = lean_ctor_get(v___x_864_, 3);
v_cache_870_ = lean_ctor_get(v___x_864_, 5);
v_recordedDeps_871_ = lean_ctor_get(v___x_864_, 6);
v_messages_872_ = lean_ctor_get(v___x_864_, 7);
v_infoState_873_ = lean_ctor_get(v___x_864_, 8);
v_snapshotTasks_874_ = lean_ctor_get(v___x_864_, 9);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_905_ == 0)
{
v___x_876_ = v___x_864_;
v_isShared_877_ = v_isSharedCheck_905_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_snapshotTasks_874_);
lean_inc(v_infoState_873_);
lean_inc(v_messages_872_);
lean_inc(v_recordedDeps_871_);
lean_inc(v_cache_870_);
lean_inc(v_traceState_865_);
lean_inc(v_auxDeclNGen_869_);
lean_inc(v_ngen_868_);
lean_inc(v_nextMacroScope_867_);
lean_inc(v_env_866_);
lean_dec(v___x_864_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_905_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
uint64_t v_tid_878_; lean_object* v_traces_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_904_; 
v_tid_878_ = lean_ctor_get_uint64(v_traceState_865_, sizeof(void*)*1);
v_traces_879_ = lean_ctor_get(v_traceState_865_, 0);
v_isSharedCheck_904_ = !lean_is_exclusive(v_traceState_865_);
if (v_isSharedCheck_904_ == 0)
{
v___x_881_ = v_traceState_865_;
v_isShared_882_ = v_isSharedCheck_904_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_traces_879_);
lean_dec(v_traceState_865_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_904_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_883_; lean_object* v___x_884_; double v___x_885_; uint8_t v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_894_; 
v___x_883_ = lean_box(0);
v___x_884_ = lean_box(0);
v___x_885_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__0);
v___x_886_ = 0;
v___x_887_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__1));
v___x_888_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_888_, 0, v_cls_850_);
lean_ctor_set(v___x_888_, 1, v___x_884_);
lean_ctor_set(v___x_888_, 2, v___x_887_);
lean_ctor_set_float(v___x_888_, sizeof(void*)*3, v___x_885_);
lean_ctor_set_float(v___x_888_, sizeof(void*)*3 + 8, v___x_885_);
lean_ctor_set_uint8(v___x_888_, sizeof(void*)*3 + 16, v___x_886_);
v___x_889_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__2));
v___x_890_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_890_, 0, v___x_888_);
lean_ctor_set(v___x_890_, 1, v_a_860_);
lean_ctor_set(v___x_890_, 2, v___x_889_);
lean_inc(v_ref_858_);
v___x_891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_891_, 0, v_ref_858_);
lean_ctor_set(v___x_891_, 1, v___x_890_);
v___x_892_ = l_Lean_PersistentArray_push___redArg(v_traces_879_, v___x_891_);
if (v_isShared_882_ == 0)
{
lean_ctor_set(v___x_881_, 0, v___x_892_);
v___x_894_ = v___x_881_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v___x_892_);
lean_ctor_set_uint64(v_reuseFailAlloc_903_, sizeof(void*)*1, v_tid_878_);
v___x_894_ = v_reuseFailAlloc_903_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
lean_object* v___x_896_; 
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 4, v___x_894_);
v___x_896_ = v___x_876_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_env_866_);
lean_ctor_set(v_reuseFailAlloc_902_, 1, v_nextMacroScope_867_);
lean_ctor_set(v_reuseFailAlloc_902_, 2, v_ngen_868_);
lean_ctor_set(v_reuseFailAlloc_902_, 3, v_auxDeclNGen_869_);
lean_ctor_set(v_reuseFailAlloc_902_, 4, v___x_894_);
lean_ctor_set(v_reuseFailAlloc_902_, 5, v_cache_870_);
lean_ctor_set(v_reuseFailAlloc_902_, 6, v_recordedDeps_871_);
lean_ctor_set(v_reuseFailAlloc_902_, 7, v_messages_872_);
lean_ctor_set(v_reuseFailAlloc_902_, 8, v_infoState_873_);
lean_ctor_set(v_reuseFailAlloc_902_, 9, v_snapshotTasks_874_);
v___x_896_ = v_reuseFailAlloc_902_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_900_; 
v___x_897_ = lean_st_ref_put(v___y_856_, v___x_896_);
v___x_898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_898_, 0, v___x_883_);
lean_ctor_set(v___x_898_, 1, v___y_852_);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 0, v___x_898_);
v___x_900_ = v___x_862_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v___x_898_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___boxed(lean_object* v_cls_907_, lean_object* v_msg_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg(v_cls_907_, v_msg_908_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_);
lean_dec(v___y_913_);
lean_dec_ref(v___y_912_);
lean_dec(v___y_911_);
lean_dec_ref(v___y_910_);
return v_res_915_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6(void){
_start:
{
lean_object* v_cls_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v_cls_926_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__3));
v___x_927_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__5));
v___x_928_ = l_Lean_Name_append(v___x_927_, v_cls_926_);
return v___x_928_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__8(void){
_start:
{
lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_930_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__7));
v___x_931_ = l_Lean_stringToMessageData(v___x_930_);
return v___x_931_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__10(void){
_start:
{
lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_933_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__9));
v___x_934_ = l_Lean_stringToMessageData(v___x_933_);
return v___x_934_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__12(void){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_936_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__11));
v___x_937_ = l_Lean_stringToMessageData(v___x_936_);
return v___x_937_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__14(void){
_start:
{
lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_939_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__13));
v___x_940_ = l_Lean_stringToMessageData(v___x_939_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go(lean_object* v_op_941_, lean_object* v_coeff_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_){
_start:
{
if (lean_obj_tag(v_a_943_) == 5)
{
lean_object* v_fn_952_; 
v_fn_952_ = lean_ctor_get(v_a_943_, 0);
if (lean_obj_tag(v_fn_952_) == 5)
{
lean_object* v_arg_953_; lean_object* v_fn_954_; lean_object* v_arg_955_; uint8_t v___x_956_; 
v_arg_953_ = lean_ctor_get(v_a_943_, 1);
v_fn_954_ = lean_ctor_get(v_fn_952_, 0);
v_arg_955_ = lean_ctor_get(v_fn_952_, 1);
v___x_956_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_isSameKind___redArg(v_fn_954_);
if (v___x_956_ == 0)
{
lean_object* v_toCold_957_; lean_object* v_options_958_; uint8_t v_hasTrace_959_; 
v_toCold_957_ = lean_ctor_get(v_a_949_, 0);
v_options_958_ = lean_ctor_get(v_toCold_957_, 2);
v_hasTrace_959_ = lean_ctor_get_uint8(v_options_958_, sizeof(void*)*1);
if (v_hasTrace_959_ == 0)
{
lean_object* v___x_960_; 
lean_dec_ref(v_op_941_);
v___x_960_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar___redArg(v_coeff_942_, v_a_943_, v_a_944_);
return v___x_960_;
}
else
{
lean_object* v_inheritedTraceOptions_961_; lean_object* v_cls_962_; lean_object* v___x_963_; uint8_t v___x_964_; 
v_inheritedTraceOptions_961_ = lean_ctor_get(v_toCold_957_, 11);
v_cls_962_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__3));
v___x_963_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6);
v___x_964_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_961_, v_options_958_, v___x_963_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; 
lean_dec_ref(v_op_941_);
v___x_965_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar___redArg(v_coeff_942_, v_a_943_, v_a_944_);
return v___x_965_;
}
else
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_966_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__8, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__8_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__8);
lean_inc_ref(v_fn_954_);
v___x_967_ = l_Lean_MessageData_ofExpr(v_fn_954_);
v___x_968_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_966_);
lean_ctor_set(v___x_968_, 1, v___x_967_);
v___x_969_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__10, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__10_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__10);
v___x_970_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_968_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
lean_inc_ref(v_arg_955_);
v___x_971_ = l_Lean_MessageData_ofExpr(v_arg_955_);
v___x_972_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_972_, 0, v___x_970_);
lean_ctor_set(v___x_972_, 1, v___x_971_);
v___x_973_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_973_, 0, v___x_972_);
lean_ctor_set(v___x_973_, 1, v___x_969_);
lean_inc_ref(v_arg_953_);
v___x_974_ = l_Lean_MessageData_ofExpr(v_arg_953_);
v___x_975_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_975_, 0, v___x_973_);
lean_ctor_set(v___x_975_, 1, v___x_974_);
v___x_976_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__12);
v___x_977_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_977_, 0, v___x_975_);
lean_ctor_set(v___x_977_, 1, v___x_976_);
v___x_978_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr(v_op_941_);
v___x_979_ = l_Lean_MessageData_ofExpr(v___x_978_);
v___x_980_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_977_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v___x_981_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__14, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__14_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__14);
v___x_982_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_980_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
v___x_983_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg(v_cls_962_, v___x_982_, v_a_944_, v_a_947_, v_a_948_, v_a_949_, v_a_950_);
if (lean_obj_tag(v___x_983_) == 0)
{
lean_object* v_a_984_; lean_object* v_snd_985_; lean_object* v___x_986_; 
v_a_984_ = lean_ctor_get(v___x_983_, 0);
lean_inc(v_a_984_);
lean_dec_ref_known(v___x_983_, 1);
v_snd_985_ = lean_ctor_get(v_a_984_, 1);
lean_inc(v_snd_985_);
lean_dec(v_a_984_);
v___x_986_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar___redArg(v_coeff_942_, v_a_943_, v_snd_985_);
return v___x_986_;
}
else
{
lean_object* v_a_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_994_; 
lean_dec_ref_known(v_a_943_, 2);
lean_dec_ref(v_coeff_942_);
v_a_987_ = lean_ctor_get(v___x_983_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_994_ == 0)
{
v___x_989_ = v___x_983_;
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_a_987_);
lean_dec(v___x_983_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_992_; 
if (v_isShared_990_ == 0)
{
v___x_992_ = v___x_989_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v_a_987_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
return v___x_992_;
}
}
}
}
}
}
else
{
lean_object* v___x_995_; 
lean_inc_ref(v_arg_955_);
lean_inc_ref(v_arg_953_);
lean_dec_ref_known(v_a_943_, 2);
lean_inc_ref(v_op_941_);
v___x_995_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go(v_op_941_, v_coeff_942_, v_arg_955_, v_a_944_, v_a_945_, v_a_946_, v_a_947_, v_a_948_, v_a_949_, v_a_950_);
if (lean_obj_tag(v___x_995_) == 0)
{
lean_object* v_a_996_; lean_object* v_fst_997_; lean_object* v_snd_998_; 
v_a_996_ = lean_ctor_get(v___x_995_, 0);
lean_inc(v_a_996_);
lean_dec_ref_known(v___x_995_, 1);
v_fst_997_ = lean_ctor_get(v_a_996_, 0);
lean_inc(v_fst_997_);
v_snd_998_ = lean_ctor_get(v_a_996_, 1);
lean_inc(v_snd_998_);
lean_dec(v_a_996_);
v_coeff_942_ = v_fst_997_;
v_a_943_ = v_arg_953_;
v_a_944_ = v_snd_998_;
goto _start;
}
else
{
lean_dec_ref(v_arg_953_);
lean_dec_ref(v_op_941_);
return v___x_995_;
}
}
}
else
{
lean_object* v___x_1000_; 
lean_dec_ref(v_op_941_);
v___x_1000_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar___redArg(v_coeff_942_, v_a_943_, v_a_944_);
return v___x_1000_;
}
}
else
{
lean_object* v___x_1001_; 
lean_dec_ref(v_op_941_);
v___x_1001_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar___redArg(v_coeff_942_, v_a_943_, v_a_944_);
return v___x_1001_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___boxed(lean_object* v_op_1002_, lean_object* v_coeff_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go(v_op_1002_, v_coeff_1003_, v_a_1004_, v_a_1005_, v_a_1006_, v_a_1007_, v_a_1008_, v_a_1009_, v_a_1010_, v_a_1011_);
lean_dec(v_a_1011_);
lean_dec_ref(v_a_1010_);
lean_dec(v_a_1009_);
lean_dec_ref(v_a_1008_);
lean_dec(v_a_1007_);
lean_dec_ref(v_a_1006_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0(lean_object* v_cls_1014_, lean_object* v_msg_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_){
_start:
{
lean_object* v___x_1024_; 
v___x_1024_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg(v_cls_1014_, v_msg_1015_, v___y_1016_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___boxed(lean_object* v_cls_1025_, lean_object* v_msg_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
lean_object* v_res_1035_; 
v_res_1035_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0(v_cls_1025_, v_msg_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1032_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
return v_res_1035_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___closed__0(void){
_start:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1036_ = lean_box(0);
v___x_1037_ = lean_unsigned_to_nat(16u);
v___x_1038_ = lean_mk_array(v___x_1037_, v___x_1036_);
return v___x_1038_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___closed__1(void){
_start:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1039_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___closed__0);
v___x_1040_ = lean_unsigned_to_nat(0u);
v___x_1041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1040_);
lean_ctor_set(v___x_1041_, 1, v___x_1039_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients(lean_object* v_op_1042_, lean_object* v_e_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_){
_start:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1052_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___closed__1);
v___x_1053_ = l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go(v_op_1042_, v___x_1052_, v_e_1043_, v_a_1044_, v_a_1045_, v_a_1046_, v_a_1047_, v_a_1048_, v_a_1049_, v_a_1050_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___boxed(lean_object* v_op_1054_, lean_object* v_e_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients(v_op_1054_, v_e_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_, v_a_1060_, v_a_1061_, v_a_1062_);
lean_dec(v_a_1062_);
lean_dec_ref(v_a_1061_);
lean_dec(v_a_1060_);
lean_dec_ref(v_a_1059_);
lean_dec(v_a_1058_);
lean_dec_ref(v_a_1057_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4_spec__7___redArg(lean_object* v_a_1065_, lean_object* v_x_1066_){
_start:
{
if (lean_obj_tag(v_x_1066_) == 0)
{
lean_object* v___x_1067_; 
v___x_1067_ = lean_box(0);
return v___x_1067_;
}
else
{
lean_object* v_key_1068_; lean_object* v_value_1069_; lean_object* v_tail_1070_; uint8_t v___x_1071_; 
v_key_1068_ = lean_ctor_get(v_x_1066_, 0);
v_value_1069_ = lean_ctor_get(v_x_1066_, 1);
v_tail_1070_ = lean_ctor_get(v_x_1066_, 2);
v___x_1071_ = lean_nat_dec_eq(v_key_1068_, v_a_1065_);
if (v___x_1071_ == 0)
{
v_x_1066_ = v_tail_1070_;
goto _start;
}
else
{
lean_object* v___x_1073_; 
lean_inc(v_value_1069_);
v___x_1073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1073_, 0, v_value_1069_);
return v___x_1073_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4_spec__7___redArg___boxed(lean_object* v_a_1074_, lean_object* v_x_1075_){
_start:
{
lean_object* v_res_1076_; 
v_res_1076_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4_spec__7___redArg(v_a_1074_, v_x_1075_);
lean_dec(v_x_1075_);
lean_dec(v_a_1074_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4___redArg(lean_object* v_m_1077_, lean_object* v_a_1078_){
_start:
{
lean_object* v_buckets_1079_; lean_object* v___x_1080_; uint64_t v___x_1081_; uint64_t v___x_1082_; uint64_t v___x_1083_; uint64_t v_fold_1084_; uint64_t v___x_1085_; uint64_t v___x_1086_; uint64_t v___x_1087_; size_t v___x_1088_; size_t v___x_1089_; size_t v___x_1090_; size_t v___x_1091_; size_t v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v_buckets_1079_ = lean_ctor_get(v_m_1077_, 1);
v___x_1080_ = lean_array_get_size(v_buckets_1079_);
v___x_1081_ = lean_uint64_of_nat(v_a_1078_);
v___x_1082_ = 32ULL;
v___x_1083_ = lean_uint64_shift_right(v___x_1081_, v___x_1082_);
v_fold_1084_ = lean_uint64_xor(v___x_1081_, v___x_1083_);
v___x_1085_ = 16ULL;
v___x_1086_ = lean_uint64_shift_right(v_fold_1084_, v___x_1085_);
v___x_1087_ = lean_uint64_xor(v_fold_1084_, v___x_1086_);
v___x_1088_ = lean_uint64_to_usize(v___x_1087_);
v___x_1089_ = lean_usize_of_nat(v___x_1080_);
v___x_1090_ = ((size_t)1ULL);
v___x_1091_ = lean_usize_sub(v___x_1089_, v___x_1090_);
v___x_1092_ = lean_usize_land(v___x_1088_, v___x_1091_);
v___x_1093_ = lean_array_uget_borrowed(v_buckets_1079_, v___x_1092_);
v___x_1094_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4_spec__7___redArg(v_a_1078_, v___x_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4___redArg___boxed(lean_object* v_m_1095_, lean_object* v_a_1096_){
_start:
{
lean_object* v_res_1097_; 
v_res_1097_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4___redArg(v_m_1095_, v_a_1096_);
lean_dec(v_a_1096_);
lean_dec_ref(v_m_1095_);
return v_res_1097_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__3_spec__5___redArg(lean_object* v_a_1098_, lean_object* v_b_1099_, lean_object* v_x_1100_){
_start:
{
if (lean_obj_tag(v_x_1100_) == 0)
{
lean_dec(v_b_1099_);
lean_dec(v_a_1098_);
return v_x_1100_;
}
else
{
lean_object* v_key_1101_; lean_object* v_value_1102_; lean_object* v_tail_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1115_; 
v_key_1101_ = lean_ctor_get(v_x_1100_, 0);
v_value_1102_ = lean_ctor_get(v_x_1100_, 1);
v_tail_1103_ = lean_ctor_get(v_x_1100_, 2);
v_isSharedCheck_1115_ = !lean_is_exclusive(v_x_1100_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1105_ = v_x_1100_;
v_isShared_1106_ = v_isSharedCheck_1115_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_tail_1103_);
lean_inc(v_value_1102_);
lean_inc(v_key_1101_);
lean_dec(v_x_1100_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1115_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
uint8_t v___x_1107_; 
v___x_1107_ = lean_nat_dec_eq(v_key_1101_, v_a_1098_);
if (v___x_1107_ == 0)
{
lean_object* v___x_1108_; lean_object* v___x_1110_; 
v___x_1108_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__3_spec__5___redArg(v_a_1098_, v_b_1099_, v_tail_1103_);
if (v_isShared_1106_ == 0)
{
lean_ctor_set(v___x_1105_, 2, v___x_1108_);
v___x_1110_ = v___x_1105_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v_key_1101_);
lean_ctor_set(v_reuseFailAlloc_1111_, 1, v_value_1102_);
lean_ctor_set(v_reuseFailAlloc_1111_, 2, v___x_1108_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
else
{
lean_object* v___x_1113_; 
lean_dec(v_value_1102_);
lean_dec(v_key_1101_);
if (v_isShared_1106_ == 0)
{
lean_ctor_set(v___x_1105_, 1, v_b_1099_);
lean_ctor_set(v___x_1105_, 0, v_a_1098_);
v___x_1113_ = v___x_1105_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_a_1098_);
lean_ctor_set(v_reuseFailAlloc_1114_, 1, v_b_1099_);
lean_ctor_set(v_reuseFailAlloc_1114_, 2, v_tail_1103_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__3___redArg(lean_object* v_m_1116_, lean_object* v_a_1117_, lean_object* v_b_1118_){
_start:
{
lean_object* v_size_1119_; lean_object* v_buckets_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1163_; 
v_size_1119_ = lean_ctor_get(v_m_1116_, 0);
v_buckets_1120_ = lean_ctor_get(v_m_1116_, 1);
v_isSharedCheck_1163_ = !lean_is_exclusive(v_m_1116_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1122_ = v_m_1116_;
v_isShared_1123_ = v_isSharedCheck_1163_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_buckets_1120_);
lean_inc(v_size_1119_);
lean_dec(v_m_1116_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1163_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1124_; uint64_t v___x_1125_; uint64_t v___x_1126_; uint64_t v___x_1127_; uint64_t v_fold_1128_; uint64_t v___x_1129_; uint64_t v___x_1130_; uint64_t v___x_1131_; size_t v___x_1132_; size_t v___x_1133_; size_t v___x_1134_; size_t v___x_1135_; size_t v___x_1136_; lean_object* v_bkt_1137_; uint8_t v___x_1138_; 
v___x_1124_ = lean_array_get_size(v_buckets_1120_);
v___x_1125_ = lean_uint64_of_nat(v_a_1117_);
v___x_1126_ = 32ULL;
v___x_1127_ = lean_uint64_shift_right(v___x_1125_, v___x_1126_);
v_fold_1128_ = lean_uint64_xor(v___x_1125_, v___x_1127_);
v___x_1129_ = 16ULL;
v___x_1130_ = lean_uint64_shift_right(v_fold_1128_, v___x_1129_);
v___x_1131_ = lean_uint64_xor(v_fold_1128_, v___x_1130_);
v___x_1132_ = lean_uint64_to_usize(v___x_1131_);
v___x_1133_ = lean_usize_of_nat(v___x_1124_);
v___x_1134_ = ((size_t)1ULL);
v___x_1135_ = lean_usize_sub(v___x_1133_, v___x_1134_);
v___x_1136_ = lean_usize_land(v___x_1132_, v___x_1135_);
v_bkt_1137_ = lean_array_uget_borrowed(v_buckets_1120_, v___x_1136_);
v___x_1138_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__0___redArg(v_a_1117_, v_bkt_1137_);
if (v___x_1138_ == 0)
{
lean_object* v___x_1139_; lean_object* v_size_x27_1140_; lean_object* v___x_1141_; lean_object* v_buckets_x27_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; uint8_t v___x_1148_; 
v___x_1139_ = lean_unsigned_to_nat(1u);
v_size_x27_1140_ = lean_nat_add(v_size_1119_, v___x_1139_);
lean_dec(v_size_1119_);
lean_inc(v_bkt_1137_);
v___x_1141_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1141_, 0, v_a_1117_);
lean_ctor_set(v___x_1141_, 1, v_b_1118_);
lean_ctor_set(v___x_1141_, 2, v_bkt_1137_);
v_buckets_x27_1142_ = lean_array_uset(v_buckets_1120_, v___x_1136_, v___x_1141_);
v___x_1143_ = lean_unsigned_to_nat(4u);
v___x_1144_ = lean_nat_mul(v_size_x27_1140_, v___x_1143_);
v___x_1145_ = lean_unsigned_to_nat(3u);
v___x_1146_ = lean_nat_div(v___x_1144_, v___x_1145_);
lean_dec(v___x_1144_);
v___x_1147_ = lean_array_get_size(v_buckets_x27_1142_);
v___x_1148_ = lean_nat_dec_le(v___x_1146_, v___x_1147_);
lean_dec(v___x_1146_);
if (v___x_1148_ == 0)
{
lean_object* v_val_1149_; lean_object* v___x_1151_; 
v_val_1149_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__1___redArg(v_buckets_x27_1142_);
if (v_isShared_1123_ == 0)
{
lean_ctor_set(v___x_1122_, 1, v_val_1149_);
lean_ctor_set(v___x_1122_, 0, v_size_x27_1140_);
v___x_1151_ = v___x_1122_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_size_x27_1140_);
lean_ctor_set(v_reuseFailAlloc_1152_, 1, v_val_1149_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
return v___x_1151_;
}
}
else
{
lean_object* v___x_1154_; 
if (v_isShared_1123_ == 0)
{
lean_ctor_set(v___x_1122_, 1, v_buckets_x27_1142_);
lean_ctor_set(v___x_1122_, 0, v_size_x27_1140_);
v___x_1154_ = v___x_1122_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v_size_x27_1140_);
lean_ctor_set(v_reuseFailAlloc_1155_, 1, v_buckets_x27_1142_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
}
else
{
lean_object* v___x_1156_; lean_object* v_buckets_x27_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1161_; 
lean_inc(v_bkt_1137_);
v___x_1156_ = lean_box(0);
v_buckets_x27_1157_ = lean_array_uset(v_buckets_1120_, v___x_1136_, v___x_1156_);
v___x_1158_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__3_spec__5___redArg(v_a_1117_, v_b_1118_, v_bkt_1137_);
v___x_1159_ = lean_array_uset(v_buckets_x27_1157_, v___x_1136_, v___x_1158_);
if (v_isShared_1123_ == 0)
{
lean_ctor_set(v___x_1122_, 1, v___x_1159_);
v___x_1161_ = v___x_1122_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v_size_1119_);
lean_ctor_set(v_reuseFailAlloc_1162_, 1, v___x_1159_);
v___x_1161_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
return v___x_1161_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__5(lean_object* v_snd_1164_, lean_object* v_x_1165_, lean_object* v_x_1166_){
_start:
{
if (lean_obj_tag(v_x_1166_) == 0)
{
return v_x_1165_;
}
else
{
lean_object* v_key_1167_; lean_object* v_value_1168_; lean_object* v_tail_1169_; lean_object* v___y_1171_; lean_object* v___x_1174_; 
v_key_1167_ = lean_ctor_get(v_x_1166_, 0);
lean_inc(v_key_1167_);
v_value_1168_ = lean_ctor_get(v_x_1166_, 1);
lean_inc(v_value_1168_);
v_tail_1169_ = lean_ctor_get(v_x_1166_, 2);
lean_inc(v_tail_1169_);
lean_dec_ref_known(v_x_1166_, 3);
v___x_1174_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4___redArg(v_snd_1164_, v_key_1167_);
if (lean_obj_tag(v___x_1174_) == 1)
{
lean_object* v_val_1175_; uint8_t v___x_1176_; 
v_val_1175_ = lean_ctor_get(v___x_1174_, 0);
lean_inc(v_val_1175_);
lean_dec_ref_known(v___x_1174_, 1);
v___x_1176_ = lean_nat_dec_le(v_value_1168_, v_val_1175_);
if (v___x_1176_ == 0)
{
lean_dec(v_value_1168_);
v___y_1171_ = v_val_1175_;
goto v___jp_1170_;
}
else
{
lean_dec(v_val_1175_);
v___y_1171_ = v_value_1168_;
goto v___jp_1170_;
}
}
else
{
lean_dec(v___x_1174_);
lean_dec(v_value_1168_);
lean_dec(v_key_1167_);
v_x_1166_ = v_tail_1169_;
goto _start;
}
v___jp_1170_:
{
lean_object* v___x_1172_; 
v___x_1172_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__3___redArg(v_x_1165_, v_key_1167_, v___y_1171_);
v_x_1165_ = v___x_1172_;
v_x_1166_ = v_tail_1169_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__5___boxed(lean_object* v_snd_1178_, lean_object* v_x_1179_, lean_object* v_x_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__5(v_snd_1178_, v_x_1179_, v_x_1180_);
lean_dec_ref(v_snd_1178_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__6(lean_object* v_snd_1182_, lean_object* v_as_1183_, size_t v_i_1184_, size_t v_stop_1185_, lean_object* v_b_1186_){
_start:
{
uint8_t v___x_1187_; 
v___x_1187_ = lean_usize_dec_eq(v_i_1184_, v_stop_1185_);
if (v___x_1187_ == 0)
{
lean_object* v___x_1188_; lean_object* v___x_1189_; size_t v___x_1190_; size_t v___x_1191_; 
v___x_1188_ = lean_array_uget_borrowed(v_as_1183_, v_i_1184_);
lean_inc(v___x_1188_);
v___x_1189_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__5(v_snd_1182_, v_b_1186_, v___x_1188_);
v___x_1190_ = ((size_t)1ULL);
v___x_1191_ = lean_usize_add(v_i_1184_, v___x_1190_);
v_i_1184_ = v___x_1191_;
v_b_1186_ = v___x_1189_;
goto _start;
}
else
{
return v_b_1186_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__6___boxed(lean_object* v_snd_1193_, lean_object* v_as_1194_, lean_object* v_i_1195_, lean_object* v_stop_1196_, lean_object* v_b_1197_){
_start:
{
size_t v_i_boxed_1198_; size_t v_stop_boxed_1199_; lean_object* v_res_1200_; 
v_i_boxed_1198_ = lean_unbox_usize(v_i_1195_);
lean_dec(v_i_1195_);
v_stop_boxed_1199_ = lean_unbox_usize(v_stop_1196_);
lean_dec(v_stop_1196_);
v_res_1200_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__6(v_snd_1193_, v_as_1194_, v_i_boxed_1198_, v_stop_boxed_1199_, v_b_1197_);
lean_dec_ref(v_as_1194_);
lean_dec_ref(v_snd_1193_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__0_spec__0(lean_object* v_commonCnt_1201_, lean_object* v_a_1202_, lean_object* v_x_1203_){
_start:
{
if (lean_obj_tag(v_x_1203_) == 0)
{
lean_dec(v_a_1202_);
return v_x_1203_;
}
else
{
lean_object* v_key_1204_; lean_object* v_value_1205_; lean_object* v_tail_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1219_; 
v_key_1204_ = lean_ctor_get(v_x_1203_, 0);
v_value_1205_ = lean_ctor_get(v_x_1203_, 1);
v_tail_1206_ = lean_ctor_get(v_x_1203_, 2);
v_isSharedCheck_1219_ = !lean_is_exclusive(v_x_1203_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1208_ = v_x_1203_;
v_isShared_1209_ = v_isSharedCheck_1219_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_tail_1206_);
lean_inc(v_value_1205_);
lean_inc(v_key_1204_);
lean_dec(v_x_1203_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1219_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
uint8_t v___x_1210_; 
v___x_1210_ = lean_nat_dec_eq(v_key_1204_, v_a_1202_);
if (v___x_1210_ == 0)
{
lean_object* v___x_1211_; lean_object* v___x_1213_; 
v___x_1211_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__0_spec__0(v_commonCnt_1201_, v_a_1202_, v_tail_1206_);
if (v_isShared_1209_ == 0)
{
lean_ctor_set(v___x_1208_, 2, v___x_1211_);
v___x_1213_ = v___x_1208_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_key_1204_);
lean_ctor_set(v_reuseFailAlloc_1214_, 1, v_value_1205_);
lean_ctor_set(v_reuseFailAlloc_1214_, 2, v___x_1211_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
return v___x_1213_;
}
}
else
{
lean_object* v___x_1215_; lean_object* v___x_1217_; 
lean_dec(v_key_1204_);
v___x_1215_ = lean_nat_sub(v_value_1205_, v_commonCnt_1201_);
lean_dec(v_value_1205_);
if (v_isShared_1209_ == 0)
{
lean_ctor_set(v___x_1208_, 1, v___x_1215_);
lean_ctor_set(v___x_1208_, 0, v_a_1202_);
v___x_1217_ = v___x_1208_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_a_1202_);
lean_ctor_set(v_reuseFailAlloc_1218_, 1, v___x_1215_);
lean_ctor_set(v_reuseFailAlloc_1218_, 2, v_tail_1206_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__0_spec__0___boxed(lean_object* v_commonCnt_1220_, lean_object* v_a_1221_, lean_object* v_x_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__0_spec__0(v_commonCnt_1220_, v_a_1221_, v_x_1222_);
lean_dec(v_commonCnt_1220_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__0(lean_object* v_commonCnt_1224_, lean_object* v_m_1225_, lean_object* v_a_1226_){
_start:
{
lean_object* v_size_1227_; lean_object* v_buckets_1228_; lean_object* v___x_1229_; uint64_t v___x_1230_; uint64_t v___x_1231_; uint64_t v___x_1232_; uint64_t v_fold_1233_; uint64_t v___x_1234_; uint64_t v___x_1235_; uint64_t v___x_1236_; size_t v___x_1237_; size_t v___x_1238_; size_t v___x_1239_; size_t v___x_1240_; size_t v___x_1241_; lean_object* v_bucket_1242_; uint8_t v___x_1243_; 
v_size_1227_ = lean_ctor_get(v_m_1225_, 0);
v_buckets_1228_ = lean_ctor_get(v_m_1225_, 1);
v___x_1229_ = lean_array_get_size(v_buckets_1228_);
v___x_1230_ = lean_uint64_of_nat(v_a_1226_);
v___x_1231_ = 32ULL;
v___x_1232_ = lean_uint64_shift_right(v___x_1230_, v___x_1231_);
v_fold_1233_ = lean_uint64_xor(v___x_1230_, v___x_1232_);
v___x_1234_ = 16ULL;
v___x_1235_ = lean_uint64_shift_right(v_fold_1233_, v___x_1234_);
v___x_1236_ = lean_uint64_xor(v_fold_1233_, v___x_1235_);
v___x_1237_ = lean_uint64_to_usize(v___x_1236_);
v___x_1238_ = lean_usize_of_nat(v___x_1229_);
v___x_1239_ = ((size_t)1ULL);
v___x_1240_ = lean_usize_sub(v___x_1238_, v___x_1239_);
v___x_1241_ = lean_usize_land(v___x_1237_, v___x_1240_);
v_bucket_1242_ = lean_array_uget_borrowed(v_buckets_1228_, v___x_1241_);
v___x_1243_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_incrVar_spec__0_spec__0___redArg(v_a_1226_, v_bucket_1242_);
if (v___x_1243_ == 0)
{
lean_dec(v_a_1226_);
return v_m_1225_;
}
else
{
lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1254_; 
lean_inc(v_bucket_1242_);
lean_inc_ref(v_buckets_1228_);
lean_inc(v_size_1227_);
v_isSharedCheck_1254_ = !lean_is_exclusive(v_m_1225_);
if (v_isSharedCheck_1254_ == 0)
{
lean_object* v_unused_1255_; lean_object* v_unused_1256_; 
v_unused_1255_ = lean_ctor_get(v_m_1225_, 1);
lean_dec(v_unused_1255_);
v_unused_1256_ = lean_ctor_get(v_m_1225_, 0);
lean_dec(v_unused_1256_);
v___x_1245_ = v_m_1225_;
v_isShared_1246_ = v_isSharedCheck_1254_;
goto v_resetjp_1244_;
}
else
{
lean_dec(v_m_1225_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1254_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1247_; lean_object* v_buckets_1248_; lean_object* v_bucket_1249_; lean_object* v___x_1250_; lean_object* v___x_1252_; 
v___x_1247_ = lean_box(0);
v_buckets_1248_ = lean_array_uset(v_buckets_1228_, v___x_1241_, v___x_1247_);
v_bucket_1249_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__0_spec__0(v_commonCnt_1224_, v_a_1226_, v_bucket_1242_);
v___x_1250_ = lean_array_uset(v_buckets_1248_, v___x_1241_, v_bucket_1249_);
if (v_isShared_1246_ == 0)
{
lean_ctor_set(v___x_1245_, 1, v___x_1250_);
v___x_1252_ = v___x_1245_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_size_1227_);
lean_ctor_set(v_reuseFailAlloc_1253_, 1, v___x_1250_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__0___boxed(lean_object* v_commonCnt_1257_, lean_object* v_m_1258_, lean_object* v_a_1259_){
_start:
{
lean_object* v_res_1260_; 
v_res_1260_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__0(v_commonCnt_1257_, v_m_1258_, v_a_1259_);
lean_dec(v_commonCnt_1257_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__1_spec__2(lean_object* v_x_1261_, lean_object* v_x_1262_){
_start:
{
if (lean_obj_tag(v_x_1262_) == 0)
{
return v_x_1261_;
}
else
{
lean_object* v_key_1263_; lean_object* v_value_1264_; lean_object* v_tail_1265_; lean_object* v___x_1266_; 
v_key_1263_ = lean_ctor_get(v_x_1262_, 0);
lean_inc(v_key_1263_);
v_value_1264_ = lean_ctor_get(v_x_1262_, 1);
lean_inc(v_value_1264_);
v_tail_1265_ = lean_ctor_get(v_x_1262_, 2);
lean_inc(v_tail_1265_);
lean_dec_ref_known(v_x_1262_, 3);
v___x_1266_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__0(v_value_1264_, v_x_1261_, v_key_1263_);
lean_dec(v_value_1264_);
v_x_1261_ = v___x_1266_;
v_x_1262_ = v_tail_1265_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__1(lean_object* v_x_1268_, lean_object* v_x_1269_){
_start:
{
if (lean_obj_tag(v_x_1269_) == 0)
{
return v_x_1268_;
}
else
{
lean_object* v_key_1270_; lean_object* v_value_1271_; lean_object* v_tail_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v_key_1270_ = lean_ctor_get(v_x_1269_, 0);
lean_inc(v_key_1270_);
v_value_1271_ = lean_ctor_get(v_x_1269_, 1);
lean_inc(v_value_1271_);
v_tail_1272_ = lean_ctor_get(v_x_1269_, 2);
lean_inc(v_tail_1272_);
lean_dec_ref_known(v_x_1269_, 3);
v___x_1273_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__0(v_value_1271_, v_x_1268_, v_key_1270_);
lean_dec(v_value_1271_);
v___x_1274_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__1_spec__2(v___x_1273_, v_tail_1272_);
return v___x_1274_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__2(lean_object* v_as_1275_, size_t v_i_1276_, size_t v_stop_1277_, lean_object* v_b_1278_){
_start:
{
uint8_t v___x_1279_; 
v___x_1279_ = lean_usize_dec_eq(v_i_1276_, v_stop_1277_);
if (v___x_1279_ == 0)
{
lean_object* v___x_1280_; lean_object* v___x_1281_; size_t v___x_1282_; size_t v___x_1283_; 
v___x_1280_ = lean_array_uget_borrowed(v_as_1275_, v_i_1276_);
lean_inc(v___x_1280_);
v___x_1281_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__1(v_b_1278_, v___x_1280_);
v___x_1282_ = ((size_t)1ULL);
v___x_1283_ = lean_usize_add(v_i_1276_, v___x_1282_);
v_i_1276_ = v___x_1283_;
v_b_1278_ = v___x_1281_;
goto _start;
}
else
{
return v_b_1278_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__2___boxed(lean_object* v_as_1285_, lean_object* v_i_1286_, lean_object* v_stop_1287_, lean_object* v_b_1288_){
_start:
{
size_t v_i_boxed_1289_; size_t v_stop_boxed_1290_; lean_object* v_res_1291_; 
v_i_boxed_1289_ = lean_unbox_usize(v_i_1286_);
lean_dec(v_i_1286_);
v_stop_boxed_1290_ = lean_unbox_usize(v_stop_1287_);
lean_dec(v_stop_1287_);
v_res_1291_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__2(v_as_1285_, v_i_boxed_1289_, v_stop_boxed_1290_, v_b_1288_);
lean_dec_ref(v_as_1285_);
return v_res_1291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute___redArg(lean_object* v_x_1292_, lean_object* v_y_1293_, lean_object* v_a_1294_){
_start:
{
lean_object* v___y_1297_; lean_object* v_fst_1298_; lean_object* v_snd_1299_; lean_object* v_size_1303_; lean_object* v_buckets_1304_; lean_object* v_size_1305_; lean_object* v_buckets_1306_; lean_object* v___y_1308_; lean_object* v___y_1309_; lean_object* v___y_1310_; lean_object* v___y_1313_; lean_object* v___y_1314_; lean_object* v_buckets_1315_; lean_object* v___y_1316_; lean_object* v___y_1324_; lean_object* v___y_1325_; lean_object* v___y_1326_; lean_object* v_buckets_1327_; lean_object* v_fst_1335_; lean_object* v_buckets_1336_; lean_object* v_snd_1337_; uint8_t v___x_1347_; 
v_size_1303_ = lean_ctor_get(v_y_1293_, 0);
lean_inc(v_size_1303_);
v_buckets_1304_ = lean_ctor_get(v_y_1293_, 1);
v_size_1305_ = lean_ctor_get(v_x_1292_, 0);
lean_inc(v_size_1305_);
v_buckets_1306_ = lean_ctor_get(v_x_1292_, 1);
v___x_1347_ = lean_nat_dec_lt(v_size_1303_, v_size_1305_);
if (v___x_1347_ == 0)
{
lean_inc_ref(v_buckets_1306_);
v_fst_1335_ = v_x_1292_;
v_buckets_1336_ = v_buckets_1306_;
v_snd_1337_ = v_y_1293_;
goto v___jp_1334_;
}
else
{
lean_inc_ref(v_buckets_1304_);
v_fst_1335_ = v_y_1293_;
v_buckets_1336_ = v_buckets_1304_;
v_snd_1337_ = v_x_1292_;
goto v___jp_1334_;
}
v___jp_1296_:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1300_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1300_, 0, v___y_1297_);
lean_ctor_set(v___x_1300_, 1, v_fst_1298_);
lean_ctor_set(v___x_1300_, 2, v_snd_1299_);
v___x_1301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1300_);
lean_ctor_set(v___x_1301_, 1, v_a_1294_);
v___x_1302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1301_);
return v___x_1302_;
}
v___jp_1307_:
{
uint8_t v___x_1311_; 
v___x_1311_ = lean_nat_dec_lt(v_size_1303_, v_size_1305_);
lean_dec(v_size_1305_);
lean_dec(v_size_1303_);
if (v___x_1311_ == 0)
{
v___y_1297_ = v___y_1308_;
v_fst_1298_ = v___y_1309_;
v_snd_1299_ = v___y_1310_;
goto v___jp_1296_;
}
else
{
v___y_1297_ = v___y_1308_;
v_fst_1298_ = v___y_1310_;
v_snd_1299_ = v___y_1309_;
goto v___jp_1296_;
}
}
v___jp_1312_:
{
lean_object* v___x_1317_; lean_object* v___x_1318_; uint8_t v___x_1319_; 
v___x_1317_ = lean_unsigned_to_nat(0u);
v___x_1318_ = lean_array_get_size(v_buckets_1315_);
v___x_1319_ = lean_nat_dec_lt(v___x_1317_, v___x_1318_);
if (v___x_1319_ == 0)
{
lean_dec_ref(v_buckets_1315_);
v___y_1308_ = v___y_1314_;
v___y_1309_ = v___y_1316_;
v___y_1310_ = v___y_1313_;
goto v___jp_1307_;
}
else
{
size_t v___x_1320_; size_t v___x_1321_; lean_object* v___x_1322_; 
v___x_1320_ = ((size_t)0ULL);
v___x_1321_ = lean_usize_of_nat(v___x_1318_);
v___x_1322_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__2(v_buckets_1315_, v___x_1320_, v___x_1321_, v___y_1313_);
lean_dec_ref(v_buckets_1315_);
v___y_1308_ = v___y_1314_;
v___y_1309_ = v___y_1316_;
v___y_1310_ = v___x_1322_;
goto v___jp_1307_;
}
}
v___jp_1323_:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; uint8_t v___x_1330_; 
v___x_1328_ = lean_unsigned_to_nat(0u);
v___x_1329_ = lean_array_get_size(v_buckets_1327_);
v___x_1330_ = lean_nat_dec_lt(v___x_1328_, v___x_1329_);
if (v___x_1330_ == 0)
{
v___y_1313_ = v___y_1324_;
v___y_1314_ = v___y_1326_;
v_buckets_1315_ = v_buckets_1327_;
v___y_1316_ = v___y_1325_;
goto v___jp_1312_;
}
else
{
size_t v___x_1331_; size_t v___x_1332_; lean_object* v___x_1333_; 
v___x_1331_ = ((size_t)0ULL);
v___x_1332_ = lean_usize_of_nat(v___x_1329_);
v___x_1333_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__2(v_buckets_1327_, v___x_1331_, v___x_1332_, v___y_1325_);
v___y_1313_ = v___y_1324_;
v___y_1314_ = v___y_1326_;
v_buckets_1315_ = v_buckets_1327_;
v___y_1316_ = v___x_1333_;
goto v___jp_1312_;
}
}
v___jp_1334_:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; uint8_t v___x_1342_; 
v___x_1338_ = lean_unsigned_to_nat(0u);
v___x_1339_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___closed__0, &l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___closed__0_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___closed__0);
v___x_1340_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients___closed__1);
v___x_1341_ = lean_array_get_size(v_buckets_1336_);
v___x_1342_ = lean_nat_dec_lt(v___x_1338_, v___x_1341_);
if (v___x_1342_ == 0)
{
lean_dec_ref(v_buckets_1336_);
v___y_1324_ = v_snd_1337_;
v___y_1325_ = v_fst_1335_;
v___y_1326_ = v___x_1340_;
v_buckets_1327_ = v___x_1339_;
goto v___jp_1323_;
}
else
{
size_t v___x_1343_; size_t v___x_1344_; lean_object* v___x_1345_; lean_object* v_buckets_1346_; 
v___x_1343_ = ((size_t)0ULL);
v___x_1344_ = lean_usize_of_nat(v___x_1341_);
v___x_1345_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__6(v_snd_1337_, v_buckets_1336_, v___x_1343_, v___x_1344_, v___x_1340_);
lean_dec_ref(v_buckets_1336_);
v_buckets_1346_ = lean_ctor_get(v___x_1345_, 1);
lean_inc_ref(v_buckets_1346_);
v___y_1324_ = v_snd_1337_;
v___y_1325_ = v_fst_1335_;
v___y_1326_ = v___x_1345_;
v_buckets_1327_ = v_buckets_1346_;
goto v___jp_1323_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute___redArg___boxed(lean_object* v_x_1348_, lean_object* v_y_1349_, lean_object* v_a_1350_, lean_object* v_a_1351_){
_start:
{
lean_object* v_res_1352_; 
v_res_1352_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute___redArg(v_x_1348_, v_y_1349_, v_a_1350_);
return v_res_1352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute(lean_object* v_x_1353_, lean_object* v_y_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_, lean_object* v_a_1357_, lean_object* v_a_1358_, lean_object* v_a_1359_, lean_object* v_a_1360_, lean_object* v_a_1361_){
_start:
{
lean_object* v___x_1363_; 
v___x_1363_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute___redArg(v_x_1353_, v_y_1354_, v_a_1355_);
return v___x_1363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute___boxed(lean_object* v_x_1364_, lean_object* v_y_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_){
_start:
{
lean_object* v_res_1374_; 
v_res_1374_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute(v_x_1364_, v_y_1365_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_, v_a_1372_);
lean_dec(v_a_1372_);
lean_dec_ref(v_a_1371_);
lean_dec(v_a_1370_);
lean_dec_ref(v_a_1369_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__3(lean_object* v_00_u03b2_1375_, lean_object* v_m_1376_, lean_object* v_a_1377_, lean_object* v_b_1378_){
_start:
{
lean_object* v___x_1379_; 
v___x_1379_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__3___redArg(v_m_1376_, v_a_1377_, v_b_1378_);
return v___x_1379_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4(lean_object* v_00_u03b2_1380_, lean_object* v_m_1381_, lean_object* v_a_1382_){
_start:
{
lean_object* v___x_1383_; 
v___x_1383_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4___redArg(v_m_1381_, v_a_1382_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4___boxed(lean_object* v_00_u03b2_1384_, lean_object* v_m_1385_, lean_object* v_a_1386_){
_start:
{
lean_object* v_res_1387_; 
v_res_1387_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4(v_00_u03b2_1384_, v_m_1385_, v_a_1386_);
lean_dec(v_a_1386_);
lean_dec_ref(v_m_1385_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__3_spec__5(lean_object* v_00_u03b2_1388_, lean_object* v_a_1389_, lean_object* v_b_1390_, lean_object* v_x_1391_){
_start:
{
lean_object* v___x_1392_; 
v___x_1392_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__3_spec__5___redArg(v_a_1389_, v_b_1390_, v_x_1391_);
return v___x_1392_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4_spec__7(lean_object* v_00_u03b2_1393_, lean_object* v_a_1394_, lean_object* v_x_1395_){
_start:
{
lean_object* v___x_1396_; 
v___x_1396_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4_spec__7___redArg(v_a_1394_, v_x_1395_);
return v___x_1396_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4_spec__7___boxed(lean_object* v_00_u03b2_1397_, lean_object* v_a_1398_, lean_object* v_x_1399_){
_start:
{
lean_object* v_res_1400_; 
v_res_1400_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute_spec__4_spec__7(v_00_u03b2_1397_, v_a_1398_, v_x_1399_);
lean_dec(v_x_1399_);
lean_dec(v_a_1398_);
return v_res_1400_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__3(lean_object* v_x_1401_, lean_object* v_x_1402_){
_start:
{
if (lean_obj_tag(v_x_1402_) == 0)
{
return v_x_1401_;
}
else
{
lean_object* v_key_1403_; lean_object* v_value_1404_; lean_object* v_tail_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v_key_1403_ = lean_ctor_get(v_x_1402_, 0);
v_value_1404_ = lean_ctor_get(v_x_1402_, 1);
v_tail_1405_ = lean_ctor_get(v_x_1402_, 2);
lean_inc(v_value_1404_);
lean_inc(v_key_1403_);
v___x_1406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1406_, 0, v_key_1403_);
lean_ctor_set(v___x_1406_, 1, v_value_1404_);
v___x_1407_ = lean_array_push(v_x_1401_, v___x_1406_);
v_x_1401_ = v___x_1407_;
v_x_1402_ = v_tail_1405_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__3___boxed(lean_object* v_x_1409_, lean_object* v_x_1410_){
_start:
{
lean_object* v_res_1411_; 
v_res_1411_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__3(v_x_1409_, v_x_1410_);
lean_dec(v_x_1410_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__4(lean_object* v_as_1412_, size_t v_i_1413_, size_t v_stop_1414_, lean_object* v_b_1415_){
_start:
{
uint8_t v___x_1416_; 
v___x_1416_ = lean_usize_dec_eq(v_i_1413_, v_stop_1414_);
if (v___x_1416_ == 0)
{
lean_object* v___x_1417_; lean_object* v___x_1418_; size_t v___x_1419_; size_t v___x_1420_; 
v___x_1417_ = lean_array_uget_borrowed(v_as_1412_, v_i_1413_);
v___x_1418_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__3(v_b_1415_, v___x_1417_);
v___x_1419_ = ((size_t)1ULL);
v___x_1420_ = lean_usize_add(v_i_1413_, v___x_1419_);
v_i_1413_ = v___x_1420_;
v_b_1415_ = v___x_1418_;
goto _start;
}
else
{
return v_b_1415_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__4___boxed(lean_object* v_as_1422_, lean_object* v_i_1423_, lean_object* v_stop_1424_, lean_object* v_b_1425_){
_start:
{
size_t v_i_boxed_1426_; size_t v_stop_boxed_1427_; lean_object* v_res_1428_; 
v_i_boxed_1426_ = lean_unbox_usize(v_i_1423_);
lean_dec(v_i_1423_);
v_stop_boxed_1427_ = lean_unbox_usize(v_stop_1424_);
lean_dec(v_stop_1424_);
v_res_1428_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__4(v_as_1422_, v_i_boxed_1426_, v_stop_boxed_1427_, v_b_1425_);
lean_dec_ref(v_as_1422_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__0___redArg(lean_object* v_upperBound_1429_, lean_object* v___x_1430_, lean_object* v_op_1431_, lean_object* v_a_1432_, lean_object* v_b_1433_, lean_object* v___y_1434_){
_start:
{
lean_object* v___y_1437_; uint8_t v___x_1441_; 
v___x_1441_ = lean_nat_dec_lt(v_a_1432_, v_upperBound_1429_);
if (v___x_1441_ == 0)
{
lean_object* v___x_1442_; lean_object* v___x_1443_; 
lean_dec(v_a_1432_);
lean_dec_ref(v_op_1431_);
lean_dec_ref(v___x_1430_);
v___x_1442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1442_, 0, v_b_1433_);
lean_ctor_set(v___x_1442_, 1, v___y_1434_);
v___x_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1442_);
return v___x_1443_;
}
else
{
if (lean_obj_tag(v_b_1433_) == 0)
{
lean_object* v___x_1444_; 
lean_inc_ref(v___x_1430_);
v___x_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1430_);
v___y_1437_ = v___x_1444_;
goto v___jp_1436_;
}
else
{
lean_object* v_val_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1454_; 
v_val_1445_ = lean_ctor_get(v_b_1433_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v_b_1433_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1447_ = v_b_1433_;
v_isShared_1448_ = v_isSharedCheck_1454_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_val_1445_);
lean_dec(v_b_1433_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1454_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1452_; 
lean_inc_ref(v_op_1431_);
v___x_1449_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr(v_op_1431_);
lean_inc_ref(v___x_1430_);
v___x_1450_ = l_Lean_mkAppB(v___x_1449_, v_val_1445_, v___x_1430_);
if (v_isShared_1448_ == 0)
{
lean_ctor_set(v___x_1447_, 0, v___x_1450_);
v___x_1452_ = v___x_1447_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v___x_1450_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
v___y_1437_ = v___x_1452_;
goto v___jp_1436_;
}
}
}
}
v___jp_1436_:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1438_ = lean_unsigned_to_nat(1u);
v___x_1439_ = lean_nat_add(v_a_1432_, v___x_1438_);
lean_dec(v_a_1432_);
v_a_1432_ = v___x_1439_;
v_b_1433_ = v___y_1437_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__0___redArg___boxed(lean_object* v_upperBound_1455_, lean_object* v___x_1456_, lean_object* v_op_1457_, lean_object* v_a_1458_, lean_object* v_b_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
lean_object* v_res_1462_; 
v_res_1462_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__0___redArg(v_upperBound_1455_, v___x_1456_, v_op_1457_, v_a_1458_, v_b_1459_, v___y_1460_);
lean_dec(v_upperBound_1455_);
return v_res_1462_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__1(lean_object* v_op_1463_, lean_object* v_as_1464_, size_t v_sz_1465_, size_t v_i_1466_, lean_object* v_b_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
uint8_t v___x_1476_; 
v___x_1476_ = lean_usize_dec_lt(v_i_1466_, v_sz_1465_);
if (v___x_1476_ == 0)
{
lean_object* v___x_1477_; lean_object* v___x_1478_; 
lean_dec_ref(v_op_1463_);
v___x_1477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1477_, 0, v_b_1467_);
lean_ctor_set(v___x_1477_, 1, v___y_1468_);
v___x_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1477_);
return v___x_1478_;
}
else
{
lean_object* v_a_1479_; lean_object* v_fst_1480_; lean_object* v_snd_1481_; lean_object* v_varToExpr_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; 
v_a_1479_ = lean_array_uget_borrowed(v_as_1464_, v_i_1466_);
v_fst_1480_ = lean_ctor_get(v_a_1479_, 0);
v_snd_1481_ = lean_ctor_get(v_a_1479_, 1);
v_varToExpr_1482_ = lean_ctor_get(v___y_1468_, 2);
v___x_1483_ = l_Lean_instInhabitedExpr;
v___x_1484_ = lean_unsigned_to_nat(0u);
v___x_1485_ = lean_array_get(v___x_1483_, v_varToExpr_1482_, v_fst_1480_);
lean_inc_ref(v_op_1463_);
v___x_1486_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__0___redArg(v_snd_1481_, v___x_1485_, v_op_1463_, v___x_1484_, v_b_1467_, v___y_1468_);
if (lean_obj_tag(v___x_1486_) == 0)
{
lean_object* v_a_1487_; lean_object* v_fst_1488_; lean_object* v_snd_1489_; size_t v___x_1490_; size_t v___x_1491_; 
v_a_1487_ = lean_ctor_get(v___x_1486_, 0);
lean_inc(v_a_1487_);
lean_dec_ref_known(v___x_1486_, 1);
v_fst_1488_ = lean_ctor_get(v_a_1487_, 0);
lean_inc(v_fst_1488_);
v_snd_1489_ = lean_ctor_get(v_a_1487_, 1);
lean_inc(v_snd_1489_);
lean_dec(v_a_1487_);
v___x_1490_ = ((size_t)1ULL);
v___x_1491_ = lean_usize_add(v_i_1466_, v___x_1490_);
v_i_1466_ = v___x_1491_;
v_b_1467_ = v_fst_1488_;
v___y_1468_ = v_snd_1489_;
goto _start;
}
else
{
lean_dec_ref(v_op_1463_);
return v___x_1486_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__1___boxed(lean_object* v_op_1493_, lean_object* v_as_1494_, lean_object* v_sz_1495_, lean_object* v_i_1496_, lean_object* v_b_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
size_t v_sz_boxed_1506_; size_t v_i_boxed_1507_; lean_object* v_res_1508_; 
v_sz_boxed_1506_ = lean_unbox_usize(v_sz_1495_);
lean_dec(v_sz_1495_);
v_i_boxed_1507_ = lean_unbox_usize(v_i_1496_);
lean_dec(v_i_1496_);
v_res_1508_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__1(v_op_1493_, v_as_1494_, v_sz_boxed_1506_, v_i_boxed_1507_, v_b_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_);
lean_dec(v___y_1504_);
lean_dec_ref(v___y_1503_);
lean_dec(v___y_1502_);
lean_dec_ref(v___y_1501_);
lean_dec(v___y_1500_);
lean_dec_ref(v___y_1499_);
lean_dec_ref(v_as_1494_);
return v_res_1508_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2___redArg___lam__0(lean_object* v_x1_1509_, lean_object* v_x2_1510_){
_start:
{
lean_object* v_fst_1511_; lean_object* v_fst_1512_; uint8_t v___x_1513_; 
v_fst_1511_ = lean_ctor_get(v_x1_1509_, 0);
v_fst_1512_ = lean_ctor_get(v_x2_1510_, 0);
v___x_1513_ = lean_nat_dec_lt(v_fst_1511_, v_fst_1512_);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2___redArg___lam__0___boxed(lean_object* v_x1_1514_, lean_object* v_x2_1515_){
_start:
{
uint8_t v_res_1516_; lean_object* v_r_1517_; 
v_res_1516_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2___redArg___lam__0(v_x1_1514_, v_x2_1515_);
lean_dec_ref(v_x2_1515_);
lean_dec_ref(v_x1_1514_);
v_r_1517_ = lean_box(v_res_1516_);
return v_r_1517_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2_spec__2___redArg(lean_object* v_hi_1518_, lean_object* v_pivot_1519_, lean_object* v_as_1520_, lean_object* v_i_1521_, lean_object* v_k_1522_){
_start:
{
uint8_t v___x_1523_; 
v___x_1523_ = lean_nat_dec_lt(v_k_1522_, v_hi_1518_);
if (v___x_1523_ == 0)
{
lean_object* v___x_1524_; lean_object* v___x_1525_; 
lean_dec(v_k_1522_);
v___x_1524_ = lean_array_fswap(v_as_1520_, v_i_1521_, v_hi_1518_);
v___x_1525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1525_, 0, v_i_1521_);
lean_ctor_set(v___x_1525_, 1, v___x_1524_);
return v___x_1525_;
}
else
{
lean_object* v___x_1526_; lean_object* v_fst_1527_; lean_object* v_fst_1528_; uint8_t v___x_1529_; 
v___x_1526_ = lean_array_fget_borrowed(v_as_1520_, v_k_1522_);
v_fst_1527_ = lean_ctor_get(v___x_1526_, 0);
v_fst_1528_ = lean_ctor_get(v_pivot_1519_, 0);
v___x_1529_ = lean_nat_dec_lt(v_fst_1527_, v_fst_1528_);
if (v___x_1529_ == 0)
{
lean_object* v___x_1530_; lean_object* v___x_1531_; 
v___x_1530_ = lean_unsigned_to_nat(1u);
v___x_1531_ = lean_nat_add(v_k_1522_, v___x_1530_);
lean_dec(v_k_1522_);
v_k_1522_ = v___x_1531_;
goto _start;
}
else
{
lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1533_ = lean_array_fswap(v_as_1520_, v_i_1521_, v_k_1522_);
v___x_1534_ = lean_unsigned_to_nat(1u);
v___x_1535_ = lean_nat_add(v_i_1521_, v___x_1534_);
lean_dec(v_i_1521_);
v___x_1536_ = lean_nat_add(v_k_1522_, v___x_1534_);
lean_dec(v_k_1522_);
v_as_1520_ = v___x_1533_;
v_i_1521_ = v___x_1535_;
v_k_1522_ = v___x_1536_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2_spec__2___redArg___boxed(lean_object* v_hi_1538_, lean_object* v_pivot_1539_, lean_object* v_as_1540_, lean_object* v_i_1541_, lean_object* v_k_1542_){
_start:
{
lean_object* v_res_1543_; 
v_res_1543_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2_spec__2___redArg(v_hi_1538_, v_pivot_1539_, v_as_1540_, v_i_1541_, v_k_1542_);
lean_dec_ref(v_pivot_1539_);
lean_dec(v_hi_1538_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2___redArg(lean_object* v_n_1544_, lean_object* v_as_1545_, lean_object* v_lo_1546_, lean_object* v_hi_1547_){
_start:
{
lean_object* v___y_1549_; uint8_t v___x_1559_; 
v___x_1559_ = lean_nat_dec_lt(v_lo_1546_, v_hi_1547_);
if (v___x_1559_ == 0)
{
lean_dec(v_lo_1546_);
return v_as_1545_;
}
else
{
lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v_mid_1562_; lean_object* v___y_1564_; lean_object* v___y_1570_; lean_object* v___x_1575_; lean_object* v___x_1576_; uint8_t v___x_1577_; 
v___x_1560_ = lean_nat_add(v_lo_1546_, v_hi_1547_);
v___x_1561_ = lean_unsigned_to_nat(1u);
v_mid_1562_ = lean_nat_shiftr(v___x_1560_, v___x_1561_);
lean_dec(v___x_1560_);
v___x_1575_ = lean_array_fget_borrowed(v_as_1545_, v_mid_1562_);
v___x_1576_ = lean_array_fget_borrowed(v_as_1545_, v_lo_1546_);
v___x_1577_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2___redArg___lam__0(v___x_1575_, v___x_1576_);
if (v___x_1577_ == 0)
{
v___y_1570_ = v_as_1545_;
goto v___jp_1569_;
}
else
{
lean_object* v___x_1578_; 
v___x_1578_ = lean_array_fswap(v_as_1545_, v_lo_1546_, v_mid_1562_);
v___y_1570_ = v___x_1578_;
goto v___jp_1569_;
}
v___jp_1563_:
{
lean_object* v___x_1565_; lean_object* v___x_1566_; uint8_t v___x_1567_; 
v___x_1565_ = lean_array_fget_borrowed(v___y_1564_, v_mid_1562_);
v___x_1566_ = lean_array_fget_borrowed(v___y_1564_, v_hi_1547_);
v___x_1567_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2___redArg___lam__0(v___x_1565_, v___x_1566_);
if (v___x_1567_ == 0)
{
lean_dec(v_mid_1562_);
v___y_1549_ = v___y_1564_;
goto v___jp_1548_;
}
else
{
lean_object* v___x_1568_; 
v___x_1568_ = lean_array_fswap(v___y_1564_, v_mid_1562_, v_hi_1547_);
lean_dec(v_mid_1562_);
v___y_1549_ = v___x_1568_;
goto v___jp_1548_;
}
}
v___jp_1569_:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; uint8_t v___x_1573_; 
v___x_1571_ = lean_array_fget_borrowed(v___y_1570_, v_hi_1547_);
v___x_1572_ = lean_array_fget_borrowed(v___y_1570_, v_lo_1546_);
v___x_1573_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2___redArg___lam__0(v___x_1571_, v___x_1572_);
if (v___x_1573_ == 0)
{
v___y_1564_ = v___y_1570_;
goto v___jp_1563_;
}
else
{
lean_object* v___x_1574_; 
v___x_1574_ = lean_array_fswap(v___y_1570_, v_lo_1546_, v_hi_1547_);
v___y_1564_ = v___x_1574_;
goto v___jp_1563_;
}
}
}
v___jp_1548_:
{
lean_object* v_pivot_1550_; lean_object* v___x_1551_; lean_object* v_fst_1552_; lean_object* v_snd_1553_; uint8_t v___x_1554_; 
v_pivot_1550_ = lean_array_fget(v___y_1549_, v_hi_1547_);
lean_inc_n(v_lo_1546_, 2);
v___x_1551_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2_spec__2___redArg(v_hi_1547_, v_pivot_1550_, v___y_1549_, v_lo_1546_, v_lo_1546_);
lean_dec(v_pivot_1550_);
v_fst_1552_ = lean_ctor_get(v___x_1551_, 0);
lean_inc(v_fst_1552_);
v_snd_1553_ = lean_ctor_get(v___x_1551_, 1);
lean_inc(v_snd_1553_);
lean_dec_ref(v___x_1551_);
v___x_1554_ = lean_nat_dec_le(v_hi_1547_, v_fst_1552_);
if (v___x_1554_ == 0)
{
lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1555_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2___redArg(v_n_1544_, v_snd_1553_, v_lo_1546_, v_fst_1552_);
v___x_1556_ = lean_unsigned_to_nat(1u);
v___x_1557_ = lean_nat_add(v_fst_1552_, v___x_1556_);
lean_dec(v_fst_1552_);
v_as_1545_ = v___x_1555_;
v_lo_1546_ = v___x_1557_;
goto _start;
}
else
{
lean_dec(v_fst_1552_);
lean_dec(v_lo_1546_);
return v_snd_1553_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2___redArg___boxed(lean_object* v_n_1579_, lean_object* v_as_1580_, lean_object* v_lo_1581_, lean_object* v_hi_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2___redArg(v_n_1579_, v_as_1580_, v_lo_1581_, v_hi_1582_);
lean_dec(v_hi_1582_);
lean_dec(v_n_1579_);
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr(lean_object* v_coeff_1584_, lean_object* v_op_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_){
_start:
{
lean_object* v___y_1595_; lean_object* v___y_1601_; lean_object* v___y_1602_; lean_object* v___y_1603_; lean_object* v___y_1604_; lean_object* v___y_1607_; lean_object* v___y_1608_; lean_object* v___y_1609_; lean_object* v___y_1610_; lean_object* v___y_1613_; lean_object* v_size_1620_; lean_object* v_buckets_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; uint8_t v___x_1625_; 
v_size_1620_ = lean_ctor_get(v_coeff_1584_, 0);
v_buckets_1621_ = lean_ctor_get(v_coeff_1584_, 1);
v___x_1622_ = lean_mk_empty_array_with_capacity(v_size_1620_);
v___x_1623_ = lean_unsigned_to_nat(0u);
v___x_1624_ = lean_array_get_size(v_buckets_1621_);
v___x_1625_ = lean_nat_dec_lt(v___x_1623_, v___x_1624_);
if (v___x_1625_ == 0)
{
v___y_1613_ = v___x_1622_;
goto v___jp_1612_;
}
else
{
size_t v___x_1626_; size_t v___x_1627_; lean_object* v___x_1628_; 
v___x_1626_ = ((size_t)0ULL);
v___x_1627_ = lean_usize_of_nat(v___x_1624_);
v___x_1628_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__4(v_buckets_1621_, v___x_1626_, v___x_1627_, v___x_1622_);
v___y_1613_ = v___x_1628_;
goto v___jp_1612_;
}
v___jp_1594_:
{
lean_object* v_acc_1596_; size_t v_sz_1597_; size_t v___x_1598_; lean_object* v___x_1599_; 
v_acc_1596_ = lean_box(0);
v_sz_1597_ = lean_array_size(v___y_1595_);
v___x_1598_ = ((size_t)0ULL);
v___x_1599_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__1(v_op_1585_, v___y_1595_, v_sz_1597_, v___x_1598_, v_acc_1596_, v_a_1586_, v_a_1587_, v_a_1588_, v_a_1589_, v_a_1590_, v_a_1591_, v_a_1592_);
lean_dec_ref(v___y_1595_);
return v___x_1599_;
}
v___jp_1600_:
{
lean_object* v___x_1605_; 
v___x_1605_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2___redArg(v___y_1601_, v___y_1603_, v___y_1602_, v___y_1604_);
lean_dec(v___y_1604_);
lean_dec(v___y_1601_);
v___y_1595_ = v___x_1605_;
goto v___jp_1594_;
}
v___jp_1606_:
{
uint8_t v___x_1611_; 
v___x_1611_ = lean_nat_dec_le(v___y_1610_, v___y_1608_);
if (v___x_1611_ == 0)
{
lean_dec(v___y_1608_);
lean_inc(v___y_1610_);
v___y_1601_ = v___y_1607_;
v___y_1602_ = v___y_1610_;
v___y_1603_ = v___y_1609_;
v___y_1604_ = v___y_1610_;
goto v___jp_1600_;
}
else
{
v___y_1601_ = v___y_1607_;
v___y_1602_ = v___y_1610_;
v___y_1603_ = v___y_1609_;
v___y_1604_ = v___y_1608_;
goto v___jp_1600_;
}
}
v___jp_1612_:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; uint8_t v___x_1616_; 
v___x_1614_ = lean_array_get_size(v___y_1613_);
v___x_1615_ = lean_unsigned_to_nat(0u);
v___x_1616_ = lean_nat_dec_eq(v___x_1614_, v___x_1615_);
if (v___x_1616_ == 0)
{
lean_object* v___x_1617_; lean_object* v___x_1618_; uint8_t v___x_1619_; 
v___x_1617_ = lean_unsigned_to_nat(1u);
v___x_1618_ = lean_nat_sub(v___x_1614_, v___x_1617_);
v___x_1619_ = lean_nat_dec_le(v___x_1615_, v___x_1618_);
if (v___x_1619_ == 0)
{
lean_inc(v___x_1618_);
v___y_1607_ = v___x_1614_;
v___y_1608_ = v___x_1618_;
v___y_1609_ = v___y_1613_;
v___y_1610_ = v___x_1618_;
goto v___jp_1606_;
}
else
{
v___y_1607_ = v___x_1614_;
v___y_1608_ = v___x_1618_;
v___y_1609_ = v___y_1613_;
v___y_1610_ = v___x_1615_;
goto v___jp_1606_;
}
}
else
{
v___y_1595_ = v___y_1613_;
goto v___jp_1594_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr___boxed(lean_object* v_coeff_1629_, lean_object* v_op_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_){
_start:
{
lean_object* v_res_1639_; 
v_res_1639_ = l_Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr(v_coeff_1629_, v_op_1630_, v_a_1631_, v_a_1632_, v_a_1633_, v_a_1634_, v_a_1635_, v_a_1636_, v_a_1637_);
lean_dec(v_a_1637_);
lean_dec_ref(v_a_1636_);
lean_dec(v_a_1635_);
lean_dec_ref(v_a_1634_);
lean_dec(v_a_1633_);
lean_dec_ref(v_a_1632_);
lean_dec_ref(v_coeff_1629_);
return v_res_1639_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__0(lean_object* v_upperBound_1640_, lean_object* v___x_1641_, lean_object* v_op_1642_, lean_object* v_inst_1643_, lean_object* v_R_1644_, lean_object* v_a_1645_, lean_object* v_b_1646_, lean_object* v_c_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_){
_start:
{
lean_object* v___x_1656_; 
v___x_1656_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__0___redArg(v_upperBound_1640_, v___x_1641_, v_op_1642_, v_a_1645_, v_b_1646_, v___y_1648_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__0___boxed(lean_object* v_upperBound_1657_, lean_object* v___x_1658_, lean_object* v_op_1659_, lean_object* v_inst_1660_, lean_object* v_R_1661_, lean_object* v_a_1662_, lean_object* v_b_1663_, lean_object* v_c_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_){
_start:
{
lean_object* v_res_1673_; 
v_res_1673_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__0(v_upperBound_1657_, v___x_1658_, v_op_1659_, v_inst_1660_, v_R_1661_, v_a_1662_, v_b_1663_, v_c_1664_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_);
lean_dec(v___y_1671_);
lean_dec_ref(v___y_1670_);
lean_dec(v___y_1669_);
lean_dec_ref(v___y_1668_);
lean_dec(v___y_1667_);
lean_dec_ref(v___y_1666_);
lean_dec(v_upperBound_1657_);
return v_res_1673_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2(lean_object* v_n_1674_, lean_object* v_as_1675_, lean_object* v_lo_1676_, lean_object* v_hi_1677_, lean_object* v_w_1678_, lean_object* v_hlo_1679_, lean_object* v_hhi_1680_){
_start:
{
lean_object* v___x_1681_; 
v___x_1681_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2___redArg(v_n_1674_, v_as_1675_, v_lo_1676_, v_hi_1677_);
return v___x_1681_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2___boxed(lean_object* v_n_1682_, lean_object* v_as_1683_, lean_object* v_lo_1684_, lean_object* v_hi_1685_, lean_object* v_w_1686_, lean_object* v_hlo_1687_, lean_object* v_hhi_1688_){
_start:
{
lean_object* v_res_1689_; 
v_res_1689_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2(v_n_1682_, v_as_1683_, v_lo_1684_, v_hi_1685_, v_w_1686_, v_hlo_1687_, v_hhi_1688_);
lean_dec(v_hi_1685_);
lean_dec(v_n_1682_);
return v_res_1689_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2_spec__2(lean_object* v_n_1690_, lean_object* v_lo_1691_, lean_object* v_hi_1692_, lean_object* v_hhi_1693_, lean_object* v_pivot_1694_, lean_object* v_as_1695_, lean_object* v_i_1696_, lean_object* v_k_1697_, lean_object* v_ilo_1698_, lean_object* v_ik_1699_, lean_object* v_w_1700_){
_start:
{
lean_object* v___x_1701_; 
v___x_1701_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2_spec__2___redArg(v_hi_1692_, v_pivot_1694_, v_as_1695_, v_i_1696_, v_k_1697_);
return v___x_1701_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2_spec__2___boxed(lean_object* v_n_1702_, lean_object* v_lo_1703_, lean_object* v_hi_1704_, lean_object* v_hhi_1705_, lean_object* v_pivot_1706_, lean_object* v_as_1707_, lean_object* v_i_1708_, lean_object* v_k_1709_, lean_object* v_ilo_1710_, lean_object* v_ik_1711_, lean_object* v_w_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr_spec__2_spec__2(v_n_1702_, v_lo_1703_, v_hi_1704_, v_hhi_1705_, v_pivot_1706_, v_as_1707_, v_i_1708_, v_k_1709_, v_ilo_1710_, v_ik_1711_, v_w_1712_);
lean_dec_ref(v_pivot_1706_);
lean_dec(v_hi_1704_);
lean_dec(v_lo_1703_);
lean_dec(v_n_1702_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC_spec__0___redArg(lean_object* v_e_1714_, lean_object* v___y_1715_){
_start:
{
uint8_t v___x_1717_; 
v___x_1717_ = l_Lean_Expr_hasMVar(v_e_1714_);
if (v___x_1717_ == 0)
{
lean_object* v___x_1718_; 
v___x_1718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1718_, 0, v_e_1714_);
return v___x_1718_;
}
else
{
lean_object* v___x_1719_; lean_object* v_mctx_1720_; lean_object* v___x_1721_; lean_object* v_fst_1722_; lean_object* v_snd_1723_; lean_object* v___x_1724_; lean_object* v_cache_1725_; lean_object* v_zetaDeltaFVarIds_1726_; lean_object* v_postponed_1727_; lean_object* v_diag_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1737_; 
v___x_1719_ = lean_st_ref_get(v___y_1715_);
v_mctx_1720_ = lean_ctor_get(v___x_1719_, 0);
lean_inc_ref(v_mctx_1720_);
lean_dec(v___x_1719_);
v___x_1721_ = l_Lean_instantiateMVarsCore(v_mctx_1720_, v_e_1714_);
v_fst_1722_ = lean_ctor_get(v___x_1721_, 0);
lean_inc(v_fst_1722_);
v_snd_1723_ = lean_ctor_get(v___x_1721_, 1);
lean_inc(v_snd_1723_);
lean_dec_ref(v___x_1721_);
v___x_1724_ = lean_st_ref_take(v___y_1715_);
v_cache_1725_ = lean_ctor_get(v___x_1724_, 1);
v_zetaDeltaFVarIds_1726_ = lean_ctor_get(v___x_1724_, 2);
v_postponed_1727_ = lean_ctor_get(v___x_1724_, 3);
v_diag_1728_ = lean_ctor_get(v___x_1724_, 4);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___x_1724_);
if (v_isSharedCheck_1737_ == 0)
{
lean_object* v_unused_1738_; 
v_unused_1738_ = lean_ctor_get(v___x_1724_, 0);
lean_dec(v_unused_1738_);
v___x_1730_ = v___x_1724_;
v_isShared_1731_ = v_isSharedCheck_1737_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_diag_1728_);
lean_inc(v_postponed_1727_);
lean_inc(v_zetaDeltaFVarIds_1726_);
lean_inc(v_cache_1725_);
lean_dec(v___x_1724_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1737_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1733_; 
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 0, v_snd_1723_);
v___x_1733_ = v___x_1730_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v_snd_1723_);
lean_ctor_set(v_reuseFailAlloc_1736_, 1, v_cache_1725_);
lean_ctor_set(v_reuseFailAlloc_1736_, 2, v_zetaDeltaFVarIds_1726_);
lean_ctor_set(v_reuseFailAlloc_1736_, 3, v_postponed_1727_);
lean_ctor_set(v_reuseFailAlloc_1736_, 4, v_diag_1728_);
v___x_1733_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1734_ = lean_st_ref_put(v___y_1715_, v___x_1733_);
v___x_1735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1735_, 0, v_fst_1722_);
return v___x_1735_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC_spec__0___redArg___boxed(lean_object* v_e_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_){
_start:
{
lean_object* v_res_1742_; 
v_res_1742_ = l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC_spec__0___redArg(v_e_1739_, v___y_1740_);
lean_dec(v___y_1740_);
return v_res_1742_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC_spec__0(lean_object* v_e_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_){
_start:
{
lean_object* v___x_1749_; 
v___x_1749_ = l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC_spec__0___redArg(v_e_1743_, v___y_1745_);
return v___x_1749_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC_spec__0___boxed(lean_object* v_e_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_){
_start:
{
lean_object* v_res_1756_; 
v_res_1756_ = l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC_spec__0(v_e_1750_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_);
lean_dec(v___y_1754_);
lean_dec_ref(v___y_1753_);
lean_dec(v___y_1752_);
lean_dec_ref(v___y_1751_);
return v_res_1756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC(lean_object* v_x_1757_, lean_object* v_y_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_, lean_object* v_a_1762_){
_start:
{
lean_object* v___x_1764_; 
v___x_1764_ = l_Lean_Meta_mkEq(v_x_1757_, v_y_1758_, v_a_1759_, v_a_1760_, v_a_1761_, v_a_1762_);
if (lean_obj_tag(v___x_1764_) == 0)
{
lean_object* v_a_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1787_; 
v_a_1765_ = lean_ctor_get(v___x_1764_, 0);
v_isSharedCheck_1787_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1787_ == 0)
{
v___x_1767_ = v___x_1764_;
v_isShared_1768_ = v_isSharedCheck_1787_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_a_1765_);
lean_dec(v___x_1764_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1787_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v___x_1770_; 
if (v_isShared_1768_ == 0)
{
lean_ctor_set_tag(v___x_1767_, 1);
v___x_1770_ = v___x_1767_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v_a_1765_);
v___x_1770_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
uint8_t v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1771_ = 0;
v___x_1772_ = lean_box(0);
v___x_1773_ = l_Lean_Meta_mkFreshExprMVar(v___x_1770_, v___x_1771_, v___x_1772_, v_a_1759_, v_a_1760_, v_a_1761_, v_a_1762_);
if (lean_obj_tag(v___x_1773_) == 0)
{
lean_object* v_a_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v_a_1774_ = lean_ctor_get(v___x_1773_, 0);
lean_inc(v_a_1774_);
lean_dec_ref_known(v___x_1773_, 1);
v___x_1775_ = l_Lean_Expr_mvarId_x21(v_a_1774_);
v___x_1776_ = l_Lean_Meta_AC_rewriteUnnormalizedRefl(v___x_1775_, v_a_1759_, v_a_1760_, v_a_1761_, v_a_1762_);
if (lean_obj_tag(v___x_1776_) == 0)
{
lean_object* v___x_1777_; 
lean_dec_ref_known(v___x_1776_, 1);
v___x_1777_ = l_Lean_instantiateMVars___at___00Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC_spec__0___redArg(v_a_1774_, v_a_1760_);
return v___x_1777_;
}
else
{
lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1785_; 
lean_dec(v_a_1774_);
v_a_1778_ = lean_ctor_get(v___x_1776_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1780_ = v___x_1776_;
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1778_);
lean_dec(v___x_1776_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1783_; 
if (v_isShared_1781_ == 0)
{
v___x_1783_ = v___x_1780_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_a_1778_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
return v___x_1783_;
}
}
}
}
else
{
return v___x_1773_;
}
}
}
}
else
{
return v___x_1764_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC___boxed(lean_object* v_x_1788_, lean_object* v_y_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_, lean_object* v_a_1794_){
_start:
{
lean_object* v_res_1795_; 
v_res_1795_ = l_Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC(v_x_1788_, v_y_1789_, v_a_1790_, v_a_1791_, v_a_1792_, v_a_1793_);
lean_dec(v_a_1793_);
lean_dec_ref(v_a_1792_);
lean_dec(v_a_1791_);
lean_dec_ref(v_a_1790_);
return v_res_1795_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1796_ = lean_unsigned_to_nat(32u);
v___x_1797_ = lean_mk_empty_array_with_capacity(v___x_1796_);
v___x_1798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1797_);
return v___x_1798_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1799_ = ((size_t)5ULL);
v___x_1800_ = lean_unsigned_to_nat(0u);
v___x_1801_ = lean_unsigned_to_nat(32u);
v___x_1802_ = lean_mk_empty_array_with_capacity(v___x_1801_);
v___x_1803_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg___closed__0);
v___x_1804_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1804_, 0, v___x_1803_);
lean_ctor_set(v___x_1804_, 1, v___x_1802_);
lean_ctor_set(v___x_1804_, 2, v___x_1800_);
lean_ctor_set(v___x_1804_, 3, v___x_1800_);
lean_ctor_set_usize(v___x_1804_, 4, v___x_1799_);
return v___x_1804_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg(lean_object* v___y_1805_){
_start:
{
lean_object* v___x_1807_; lean_object* v_traceState_1808_; lean_object* v_traces_1809_; lean_object* v___x_1810_; lean_object* v_traceState_1811_; lean_object* v_env_1812_; lean_object* v_nextMacroScope_1813_; lean_object* v_ngen_1814_; lean_object* v_auxDeclNGen_1815_; lean_object* v_cache_1816_; lean_object* v_recordedDeps_1817_; lean_object* v_messages_1818_; lean_object* v_infoState_1819_; lean_object* v_snapshotTasks_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1839_; 
v___x_1807_ = lean_st_ref_get(v___y_1805_);
v_traceState_1808_ = lean_ctor_get(v___x_1807_, 4);
lean_inc_ref(v_traceState_1808_);
lean_dec(v___x_1807_);
v_traces_1809_ = lean_ctor_get(v_traceState_1808_, 0);
lean_inc_ref(v_traces_1809_);
lean_dec_ref(v_traceState_1808_);
v___x_1810_ = lean_st_ref_take(v___y_1805_);
v_traceState_1811_ = lean_ctor_get(v___x_1810_, 4);
v_env_1812_ = lean_ctor_get(v___x_1810_, 0);
v_nextMacroScope_1813_ = lean_ctor_get(v___x_1810_, 1);
v_ngen_1814_ = lean_ctor_get(v___x_1810_, 2);
v_auxDeclNGen_1815_ = lean_ctor_get(v___x_1810_, 3);
v_cache_1816_ = lean_ctor_get(v___x_1810_, 5);
v_recordedDeps_1817_ = lean_ctor_get(v___x_1810_, 6);
v_messages_1818_ = lean_ctor_get(v___x_1810_, 7);
v_infoState_1819_ = lean_ctor_get(v___x_1810_, 8);
v_snapshotTasks_1820_ = lean_ctor_get(v___x_1810_, 9);
v_isSharedCheck_1839_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1839_ == 0)
{
v___x_1822_ = v___x_1810_;
v_isShared_1823_ = v_isSharedCheck_1839_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_snapshotTasks_1820_);
lean_inc(v_infoState_1819_);
lean_inc(v_messages_1818_);
lean_inc(v_recordedDeps_1817_);
lean_inc(v_cache_1816_);
lean_inc(v_traceState_1811_);
lean_inc(v_auxDeclNGen_1815_);
lean_inc(v_ngen_1814_);
lean_inc(v_nextMacroScope_1813_);
lean_inc(v_env_1812_);
lean_dec(v___x_1810_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1839_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
uint64_t v_tid_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1837_; 
v_tid_1824_ = lean_ctor_get_uint64(v_traceState_1811_, sizeof(void*)*1);
v_isSharedCheck_1837_ = !lean_is_exclusive(v_traceState_1811_);
if (v_isSharedCheck_1837_ == 0)
{
lean_object* v_unused_1838_; 
v_unused_1838_ = lean_ctor_get(v_traceState_1811_, 0);
lean_dec(v_unused_1838_);
v___x_1826_ = v_traceState_1811_;
v_isShared_1827_ = v_isSharedCheck_1837_;
goto v_resetjp_1825_;
}
else
{
lean_dec(v_traceState_1811_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1837_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v___x_1828_; lean_object* v___x_1830_; 
v___x_1828_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg___closed__1);
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 0, v___x_1828_);
v___x_1830_ = v___x_1826_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v___x_1828_);
lean_ctor_set_uint64(v_reuseFailAlloc_1836_, sizeof(void*)*1, v_tid_1824_);
v___x_1830_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
lean_object* v___x_1832_; 
if (v_isShared_1823_ == 0)
{
lean_ctor_set(v___x_1822_, 4, v___x_1830_);
v___x_1832_ = v___x_1822_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_env_1812_);
lean_ctor_set(v_reuseFailAlloc_1835_, 1, v_nextMacroScope_1813_);
lean_ctor_set(v_reuseFailAlloc_1835_, 2, v_ngen_1814_);
lean_ctor_set(v_reuseFailAlloc_1835_, 3, v_auxDeclNGen_1815_);
lean_ctor_set(v_reuseFailAlloc_1835_, 4, v___x_1830_);
lean_ctor_set(v_reuseFailAlloc_1835_, 5, v_cache_1816_);
lean_ctor_set(v_reuseFailAlloc_1835_, 6, v_recordedDeps_1817_);
lean_ctor_set(v_reuseFailAlloc_1835_, 7, v_messages_1818_);
lean_ctor_set(v_reuseFailAlloc_1835_, 8, v_infoState_1819_);
lean_ctor_set(v_reuseFailAlloc_1835_, 9, v_snapshotTasks_1820_);
v___x_1832_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1833_ = lean_st_ref_put(v___y_1805_, v___x_1832_);
v___x_1834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1834_, 0, v_traces_1809_);
return v___x_1834_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg___boxed(lean_object* v___y_1840_, lean_object* v___y_1841_){
_start:
{
lean_object* v_res_1842_; 
v_res_1842_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg(v___y_1840_);
lean_dec(v___y_1840_);
return v_res_1842_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1(lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_){
_start:
{
lean_object* v___x_1853_; 
v___x_1853_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg(v___y_1851_);
return v___x_1853_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___boxed(lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_){
_start:
{
lean_object* v_res_1864_; 
v_res_1864_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1(v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_);
lean_dec(v___y_1862_);
lean_dec_ref(v___y_1861_);
lean_dec(v___y_1860_);
lean_dec_ref(v___y_1859_);
lean_dec(v___y_1858_);
lean_dec_ref(v___y_1857_);
lean_dec(v___y_1856_);
lean_dec_ref(v___y_1855_);
lean_dec(v___y_1854_);
return v_res_1864_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__2(lean_object* v_opts_1865_, lean_object* v_opt_1866_){
_start:
{
lean_object* v_name_1867_; lean_object* v_defValue_1868_; lean_object* v_map_1869_; lean_object* v___x_1870_; 
v_name_1867_ = lean_ctor_get(v_opt_1866_, 0);
v_defValue_1868_ = lean_ctor_get(v_opt_1866_, 1);
v_map_1869_ = lean_ctor_get(v_opts_1865_, 0);
v___x_1870_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1869_, v_name_1867_);
if (lean_obj_tag(v___x_1870_) == 0)
{
uint8_t v___x_1871_; 
v___x_1871_ = lean_unbox(v_defValue_1868_);
return v___x_1871_;
}
else
{
lean_object* v_val_1872_; 
v_val_1872_ = lean_ctor_get(v___x_1870_, 0);
lean_inc(v_val_1872_);
lean_dec_ref_known(v___x_1870_, 1);
if (lean_obj_tag(v_val_1872_) == 1)
{
uint8_t v_v_1873_; 
v_v_1873_ = lean_ctor_get_uint8(v_val_1872_, 0);
lean_dec_ref_known(v_val_1872_, 0);
return v_v_1873_;
}
else
{
uint8_t v___x_1874_; 
lean_dec(v_val_1872_);
v___x_1874_ = lean_unbox(v_defValue_1868_);
return v___x_1874_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__2___boxed(lean_object* v_opts_1875_, lean_object* v_opt_1876_){
_start:
{
uint8_t v_res_1877_; lean_object* v_r_1878_; 
v_res_1877_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__2(v_opts_1875_, v_opt_1876_);
lean_dec_ref(v_opt_1876_);
lean_dec_ref(v_opts_1875_);
v_r_1878_ = lean_box(v_res_1877_);
return v_r_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__0(lean_object* v_cls_1879_, lean_object* v_____do__lift_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_){
_start:
{
lean_object* v_toCold_1891_; lean_object* v_options_1892_; uint8_t v_hasTrace_1893_; 
v_toCold_1891_ = lean_ctor_get(v___y_1888_, 0);
v_options_1892_ = lean_ctor_get(v_toCold_1891_, 2);
v_hasTrace_1893_ = lean_ctor_get_uint8(v_options_1892_, sizeof(void*)*1);
if (v_hasTrace_1893_ == 0)
{
lean_object* v___x_1894_; lean_object* v___x_1895_; 
lean_dec(v_cls_1879_);
v___x_1894_ = lean_box(v_hasTrace_1893_);
v___x_1895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1895_, 0, v___x_1894_);
return v___x_1895_;
}
else
{
lean_object* v___x_1896_; lean_object* v___x_1897_; uint8_t v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1896_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__5));
v___x_1897_ = l_Lean_Name_append(v___x_1896_, v_cls_1879_);
v___x_1898_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_1880_, v_options_1892_, v___x_1897_);
lean_dec(v___x_1897_);
v___x_1899_ = lean_box(v___x_1898_);
v___x_1900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1899_);
return v___x_1900_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__0___boxed(lean_object* v_cls_1901_, lean_object* v_____do__lift_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_){
_start:
{
lean_object* v_res_1913_; 
v_res_1913_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__0(v_cls_1901_, v_____do__lift_1902_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
lean_dec(v___y_1911_);
lean_dec_ref(v___y_1910_);
lean_dec(v___y_1909_);
lean_dec_ref(v___y_1908_);
lean_dec(v___y_1907_);
lean_dec_ref(v___y_1906_);
lean_dec(v___y_1905_);
lean_dec_ref(v___y_1904_);
lean_dec(v___y_1903_);
lean_dec_ref(v_____do__lift_1902_);
return v_res_1913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__1(lean_object* v___x_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_){
_start:
{
lean_object* v___x_1917_; 
v___x_1917_ = l_Lean_mkAppB(v___x_1914_, v___y_1915_, v___y_1916_);
return v___x_1917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__2(lean_object* v_val_1920_, lean_object* v_lhs_1921_, lean_object* v_rhs_1922_, lean_object* v_P_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_){
_start:
{
lean_object* v___x_1932_; 
lean_inc_ref(v_lhs_1921_);
lean_inc_ref(v_val_1920_);
v___x_1932_ = l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients(v_val_1920_, v_lhs_1921_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_);
if (lean_obj_tag(v___x_1932_) == 0)
{
lean_object* v_a_1933_; lean_object* v_fst_1934_; lean_object* v_snd_1935_; lean_object* v___x_1936_; 
v_a_1933_ = lean_ctor_get(v___x_1932_, 0);
lean_inc(v_a_1933_);
lean_dec_ref_known(v___x_1932_, 1);
v_fst_1934_ = lean_ctor_get(v_a_1933_, 0);
lean_inc(v_fst_1934_);
v_snd_1935_ = lean_ctor_get(v_a_1933_, 1);
lean_inc(v_snd_1935_);
lean_dec(v_a_1933_);
lean_inc_ref(v_rhs_1922_);
lean_inc_ref(v_val_1920_);
v___x_1936_ = l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients(v_val_1920_, v_rhs_1922_, v_snd_1935_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_);
if (lean_obj_tag(v___x_1936_) == 0)
{
lean_object* v_a_1937_; lean_object* v_fst_1938_; lean_object* v_snd_1939_; lean_object* v___x_1940_; lean_object* v_a_1941_; lean_object* v_fst_1942_; lean_object* v_snd_1943_; lean_object* v_common_1944_; lean_object* v_x_1945_; lean_object* v_y_1946_; lean_object* v___x_1947_; 
v_a_1937_ = lean_ctor_get(v___x_1936_, 0);
lean_inc(v_a_1937_);
lean_dec_ref_known(v___x_1936_, 1);
v_fst_1938_ = lean_ctor_get(v_a_1937_, 0);
lean_inc(v_fst_1938_);
v_snd_1939_ = lean_ctor_get(v_a_1937_, 1);
lean_inc(v_snd_1939_);
lean_dec(v_a_1937_);
v___x_1940_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute___redArg(v_fst_1934_, v_fst_1938_, v_snd_1939_);
v_a_1941_ = lean_ctor_get(v___x_1940_, 0);
lean_inc(v_a_1941_);
lean_dec_ref(v___x_1940_);
v_fst_1942_ = lean_ctor_get(v_a_1941_, 0);
lean_inc(v_fst_1942_);
v_snd_1943_ = lean_ctor_get(v_a_1941_, 1);
lean_inc(v_snd_1943_);
lean_dec(v_a_1941_);
v_common_1944_ = lean_ctor_get(v_fst_1942_, 0);
lean_inc_ref(v_common_1944_);
v_x_1945_ = lean_ctor_get(v_fst_1942_, 1);
lean_inc_ref(v_x_1945_);
v_y_1946_ = lean_ctor_get(v_fst_1942_, 2);
lean_inc_ref(v_y_1946_);
lean_dec(v_fst_1942_);
lean_inc_ref(v_val_1920_);
v___x_1947_ = l_Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr(v_common_1944_, v_val_1920_, v_snd_1943_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_);
lean_dec_ref(v_common_1944_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v_a_1948_; lean_object* v_fst_1949_; lean_object* v_snd_1950_; lean_object* v___x_1951_; 
v_a_1948_ = lean_ctor_get(v___x_1947_, 0);
lean_inc(v_a_1948_);
lean_dec_ref_known(v___x_1947_, 1);
v_fst_1949_ = lean_ctor_get(v_a_1948_, 0);
lean_inc(v_fst_1949_);
v_snd_1950_ = lean_ctor_get(v_a_1948_, 1);
lean_inc(v_snd_1950_);
lean_dec(v_a_1948_);
lean_inc_ref(v_val_1920_);
v___x_1951_ = l_Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr(v_x_1945_, v_val_1920_, v_snd_1950_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_);
lean_dec_ref(v_x_1945_);
if (lean_obj_tag(v___x_1951_) == 0)
{
lean_object* v_a_1952_; lean_object* v_fst_1953_; lean_object* v_snd_1954_; lean_object* v___x_1955_; 
v_a_1952_ = lean_ctor_get(v___x_1951_, 0);
lean_inc(v_a_1952_);
lean_dec_ref_known(v___x_1951_, 1);
v_fst_1953_ = lean_ctor_get(v_a_1952_, 0);
lean_inc(v_fst_1953_);
v_snd_1954_ = lean_ctor_get(v_a_1952_, 1);
lean_inc(v_snd_1954_);
lean_dec(v_a_1952_);
lean_inc_ref(v_val_1920_);
v___x_1955_ = l_Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr(v_y_1946_, v_val_1920_, v_snd_1954_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_);
lean_dec_ref(v_y_1946_);
if (lean_obj_tag(v___x_1955_) == 0)
{
lean_object* v_a_1956_; lean_object* v___x_1958_; uint8_t v_isShared_1959_; uint8_t v_isSharedCheck_2020_; 
v_a_1956_ = lean_ctor_get(v___x_1955_, 0);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_1958_ = v___x_1955_;
v_isShared_1959_ = v_isSharedCheck_2020_;
goto v_resetjp_1957_;
}
else
{
lean_inc(v_a_1956_);
lean_dec(v___x_1955_);
v___x_1958_ = lean_box(0);
v_isShared_1959_ = v_isSharedCheck_2020_;
goto v_resetjp_1957_;
}
v_resetjp_1957_:
{
lean_object* v_fst_1960_; lean_object* v_snd_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_2019_; 
v_fst_1960_ = lean_ctor_get(v_a_1956_, 0);
v_snd_1961_ = lean_ctor_get(v_a_1956_, 1);
v_isSharedCheck_2019_ = !lean_is_exclusive(v_a_1956_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_1963_ = v_a_1956_;
v_isShared_1964_ = v_isSharedCheck_2019_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_snd_1961_);
lean_inc(v_fst_1960_);
lean_dec(v_a_1956_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_2019_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v___y_1966_; lean_object* v___y_1967_; lean_object* v___x_2009_; lean_object* v___f_2010_; lean_object* v___y_2012_; lean_object* v___x_2016_; 
lean_inc_ref(v_val_1920_);
v___x_2009_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr(v_val_1920_);
v___f_2010_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__1), 3, 1);
lean_closure_set(v___f_2010_, 0, v___x_2009_);
lean_inc(v_fst_1949_);
lean_inc_ref(v___f_2010_);
v___x_2016_ = l_Option_merge___redArg(v___f_2010_, v_fst_1949_, v_fst_1953_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v___x_2017_; 
lean_inc_ref(v_val_1920_);
v___x_2017_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_neutralElement(v_val_1920_);
v___y_2012_ = v___x_2017_;
goto v___jp_2011_;
}
else
{
lean_object* v_val_2018_; 
v_val_2018_ = lean_ctor_get(v___x_2016_, 0);
lean_inc(v_val_2018_);
lean_dec_ref_known(v___x_2016_, 1);
v___y_2012_ = v_val_2018_;
goto v___jp_2011_;
}
v___jp_1965_:
{
lean_object* v___x_1968_; lean_object* v___x_1969_; uint8_t v___x_1970_; 
lean_inc_ref(v_P_1923_);
v___x_1968_ = l_Lean_mkAppB(v_P_1923_, v_lhs_1921_, v_rhs_1922_);
v___x_1969_ = l_Lean_mkAppB(v_P_1923_, v___y_1966_, v___y_1967_);
v___x_1970_ = lean_expr_eqv(v___x_1968_, v___x_1969_);
if (v___x_1970_ == 0)
{
lean_object* v___x_1971_; 
lean_del_object(v___x_1958_);
lean_inc_ref(v___x_1969_);
v___x_1971_ = l_Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC(v___x_1968_, v___x_1969_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_);
if (lean_obj_tag(v___x_1971_) == 0)
{
lean_object* v_a_1972_; lean_object* v___x_1973_; 
v_a_1972_ = lean_ctor_get(v___x_1971_, 0);
lean_inc(v_a_1972_);
lean_dec_ref_known(v___x_1971_, 1);
v___x_1973_ = l_Lean_Meta_Sym_shareCommonInc(v___x_1969_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_);
if (lean_obj_tag(v___x_1973_) == 0)
{
lean_object* v_a_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_1985_; 
v_a_1974_ = lean_ctor_get(v___x_1973_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1976_ = v___x_1973_;
v_isShared_1977_ = v_isSharedCheck_1985_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_a_1974_);
lean_dec(v___x_1973_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_1985_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
lean_object* v___x_1978_; lean_object* v___x_1980_; 
v___x_1978_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1978_, 0, v_a_1974_);
lean_ctor_set(v___x_1978_, 1, v_a_1972_);
lean_ctor_set_uint8(v___x_1978_, sizeof(void*)*2, v___x_1970_);
lean_ctor_set_uint8(v___x_1978_, sizeof(void*)*2 + 1, v___x_1970_);
if (v_isShared_1964_ == 0)
{
lean_ctor_set(v___x_1963_, 0, v___x_1978_);
v___x_1980_ = v___x_1963_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v___x_1978_);
lean_ctor_set(v_reuseFailAlloc_1984_, 1, v_snd_1961_);
v___x_1980_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
lean_object* v___x_1982_; 
if (v_isShared_1977_ == 0)
{
lean_ctor_set(v___x_1976_, 0, v___x_1980_);
v___x_1982_ = v___x_1976_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v___x_1980_);
v___x_1982_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
return v___x_1982_;
}
}
}
}
else
{
lean_object* v_a_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_1993_; 
lean_dec(v_a_1972_);
lean_del_object(v___x_1963_);
lean_dec(v_snd_1961_);
v_a_1986_ = lean_ctor_get(v___x_1973_, 0);
v_isSharedCheck_1993_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1988_ = v___x_1973_;
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_a_1986_);
lean_dec(v___x_1973_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1991_; 
if (v_isShared_1989_ == 0)
{
v___x_1991_ = v___x_1988_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_a_1986_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
return v___x_1991_;
}
}
}
}
else
{
lean_object* v_a_1994_; lean_object* v___x_1996_; uint8_t v_isShared_1997_; uint8_t v_isSharedCheck_2001_; 
lean_dec_ref(v___x_1969_);
lean_del_object(v___x_1963_);
lean_dec(v_snd_1961_);
v_a_1994_ = lean_ctor_get(v___x_1971_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v___x_1971_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1996_ = v___x_1971_;
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
else
{
lean_inc(v_a_1994_);
lean_dec(v___x_1971_);
v___x_1996_ = lean_box(0);
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
v_resetjp_1995_:
{
lean_object* v___x_1999_; 
if (v_isShared_1997_ == 0)
{
v___x_1999_ = v___x_1996_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v_a_1994_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
}
else
{
lean_object* v___x_2002_; lean_object* v___x_2004_; 
lean_dec_ref(v___x_1969_);
lean_dec_ref(v___x_1968_);
v___x_2002_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__2___closed__0));
if (v_isShared_1964_ == 0)
{
lean_ctor_set(v___x_1963_, 0, v___x_2002_);
v___x_2004_ = v___x_1963_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v___x_2002_);
lean_ctor_set(v_reuseFailAlloc_2008_, 1, v_snd_1961_);
v___x_2004_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
lean_object* v___x_2006_; 
if (v_isShared_1959_ == 0)
{
lean_ctor_set(v___x_1958_, 0, v___x_2004_);
v___x_2006_ = v___x_1958_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v___x_2004_);
v___x_2006_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
return v___x_2006_;
}
}
}
}
v___jp_2011_:
{
lean_object* v___x_2013_; 
v___x_2013_ = l_Option_merge___redArg(v___f_2010_, v_fst_1949_, v_fst_1960_);
if (lean_obj_tag(v___x_2013_) == 0)
{
lean_object* v___x_2014_; 
v___x_2014_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_neutralElement(v_val_1920_);
v___y_1966_ = v___y_2012_;
v___y_1967_ = v___x_2014_;
goto v___jp_1965_;
}
else
{
lean_object* v_val_2015_; 
lean_dec_ref(v_val_1920_);
v_val_2015_ = lean_ctor_get(v___x_2013_, 0);
lean_inc(v_val_2015_);
lean_dec_ref_known(v___x_2013_, 1);
v___y_1966_ = v___y_2012_;
v___y_1967_ = v_val_2015_;
goto v___jp_1965_;
}
}
}
}
}
else
{
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2028_; 
lean_dec(v_fst_1953_);
lean_dec(v_fst_1949_);
lean_dec_ref(v_P_1923_);
lean_dec_ref(v_rhs_1922_);
lean_dec_ref(v_lhs_1921_);
lean_dec_ref(v_val_1920_);
v_a_2021_ = lean_ctor_get(v___x_1955_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2023_ = v___x_1955_;
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_1955_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v___x_2026_; 
if (v_isShared_2024_ == 0)
{
v___x_2026_ = v___x_2023_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_a_2021_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
}
else
{
lean_object* v_a_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2036_; 
lean_dec(v_fst_1949_);
lean_dec_ref(v_y_1946_);
lean_dec_ref(v_P_1923_);
lean_dec_ref(v_rhs_1922_);
lean_dec_ref(v_lhs_1921_);
lean_dec_ref(v_val_1920_);
v_a_2029_ = lean_ctor_get(v___x_1951_, 0);
v_isSharedCheck_2036_ = !lean_is_exclusive(v___x_1951_);
if (v_isSharedCheck_2036_ == 0)
{
v___x_2031_ = v___x_1951_;
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_a_2029_);
lean_dec(v___x_1951_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2034_; 
if (v_isShared_2032_ == 0)
{
v___x_2034_ = v___x_2031_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v_a_2029_);
v___x_2034_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
return v___x_2034_;
}
}
}
}
else
{
lean_object* v_a_2037_; lean_object* v___x_2039_; uint8_t v_isShared_2040_; uint8_t v_isSharedCheck_2044_; 
lean_dec_ref(v_y_1946_);
lean_dec_ref(v_x_1945_);
lean_dec_ref(v_P_1923_);
lean_dec_ref(v_rhs_1922_);
lean_dec_ref(v_lhs_1921_);
lean_dec_ref(v_val_1920_);
v_a_2037_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_2044_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_2044_ == 0)
{
v___x_2039_ = v___x_1947_;
v_isShared_2040_ = v_isSharedCheck_2044_;
goto v_resetjp_2038_;
}
else
{
lean_inc(v_a_2037_);
lean_dec(v___x_1947_);
v___x_2039_ = lean_box(0);
v_isShared_2040_ = v_isSharedCheck_2044_;
goto v_resetjp_2038_;
}
v_resetjp_2038_:
{
lean_object* v___x_2042_; 
if (v_isShared_2040_ == 0)
{
v___x_2042_ = v___x_2039_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2043_; 
v_reuseFailAlloc_2043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2043_, 0, v_a_2037_);
v___x_2042_ = v_reuseFailAlloc_2043_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
return v___x_2042_;
}
}
}
}
else
{
lean_object* v_a_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2052_; 
lean_dec(v_fst_1934_);
lean_dec_ref(v_P_1923_);
lean_dec_ref(v_rhs_1922_);
lean_dec_ref(v_lhs_1921_);
lean_dec_ref(v_val_1920_);
v_a_2045_ = lean_ctor_get(v___x_1936_, 0);
v_isSharedCheck_2052_ = !lean_is_exclusive(v___x_1936_);
if (v_isSharedCheck_2052_ == 0)
{
v___x_2047_ = v___x_1936_;
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
else
{
lean_inc(v_a_2045_);
lean_dec(v___x_1936_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
lean_object* v___x_2050_; 
if (v_isShared_2048_ == 0)
{
v___x_2050_ = v___x_2047_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v_a_2045_);
v___x_2050_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
return v___x_2050_;
}
}
}
}
else
{
lean_object* v_a_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2060_; 
lean_dec_ref(v_P_1923_);
lean_dec_ref(v_rhs_1922_);
lean_dec_ref(v_lhs_1921_);
lean_dec_ref(v_val_1920_);
v_a_2053_ = lean_ctor_get(v___x_1932_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v___x_1932_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2055_ = v___x_1932_;
v_isShared_2056_ = v_isSharedCheck_2060_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_a_2053_);
lean_dec(v___x_1932_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2060_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___x_2058_; 
if (v_isShared_2056_ == 0)
{
v___x_2058_ = v___x_2055_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_a_2053_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
return v___x_2058_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__2___boxed(lean_object* v_val_2061_, lean_object* v_lhs_2062_, lean_object* v_rhs_2063_, lean_object* v_P_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_){
_start:
{
lean_object* v_res_2073_; 
v_res_2073_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__2(v_val_2061_, v_lhs_2062_, v_rhs_2063_, v_P_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_);
lean_dec(v___y_2071_);
lean_dec_ref(v___y_2070_);
lean_dec(v___y_2069_);
lean_dec_ref(v___y_2068_);
lean_dec(v___y_2067_);
lean_dec_ref(v___y_2066_);
return v_res_2073_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__3___closed__1(void){
_start:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; 
v___x_2075_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__3___closed__0));
v___x_2076_ = l_Lean_stringToMessageData(v___x_2075_);
return v___x_2076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__3(lean_object* v_x_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_){
_start:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; 
v___x_2088_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__3___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__3___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__3___closed__1);
v___x_2089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2089_, 0, v___x_2088_);
return v___x_2089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__3___boxed(lean_object* v_x_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_){
_start:
{
lean_object* v_res_2101_; 
v_res_2101_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__3(v_x_2090_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_);
lean_dec(v___y_2099_);
lean_dec_ref(v___y_2098_);
lean_dec(v___y_2097_);
lean_dec_ref(v___y_2096_);
lean_dec(v___y_2095_);
lean_dec_ref(v___y_2094_);
lean_dec(v___y_2093_);
lean_dec_ref(v___y_2092_);
lean_dec(v___y_2091_);
lean_dec_ref(v_x_2090_);
return v_res_2101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__5(lean_object* v_val_2102_, lean_object* v_lhs_2103_, lean_object* v_rhs_2104_, lean_object* v_P_2105_, uint8_t v___x_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_){
_start:
{
lean_object* v___x_2115_; 
lean_inc_ref(v_lhs_2103_);
lean_inc_ref(v_val_2102_);
v___x_2115_ = l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients(v_val_2102_, v_lhs_2103_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
if (lean_obj_tag(v___x_2115_) == 0)
{
lean_object* v_a_2116_; lean_object* v_fst_2117_; lean_object* v_snd_2118_; lean_object* v___x_2119_; 
v_a_2116_ = lean_ctor_get(v___x_2115_, 0);
lean_inc(v_a_2116_);
lean_dec_ref_known(v___x_2115_, 1);
v_fst_2117_ = lean_ctor_get(v_a_2116_, 0);
lean_inc(v_fst_2117_);
v_snd_2118_ = lean_ctor_get(v_a_2116_, 1);
lean_inc(v_snd_2118_);
lean_dec(v_a_2116_);
lean_inc_ref(v_rhs_2104_);
lean_inc_ref(v_val_2102_);
v___x_2119_ = l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients(v_val_2102_, v_rhs_2104_, v_snd_2118_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
if (lean_obj_tag(v___x_2119_) == 0)
{
lean_object* v_a_2120_; lean_object* v_fst_2121_; lean_object* v_snd_2122_; lean_object* v___x_2123_; lean_object* v_a_2124_; lean_object* v_fst_2125_; lean_object* v_snd_2126_; lean_object* v_common_2127_; lean_object* v_x_2128_; lean_object* v_y_2129_; lean_object* v___x_2130_; 
v_a_2120_ = lean_ctor_get(v___x_2119_, 0);
lean_inc(v_a_2120_);
lean_dec_ref_known(v___x_2119_, 1);
v_fst_2121_ = lean_ctor_get(v_a_2120_, 0);
lean_inc(v_fst_2121_);
v_snd_2122_ = lean_ctor_get(v_a_2120_, 1);
lean_inc(v_snd_2122_);
lean_dec(v_a_2120_);
v___x_2123_ = l_Lean_Meta_Tactic_BVDecide_Normalize_SharedCoefficients_compute___redArg(v_fst_2117_, v_fst_2121_, v_snd_2122_);
v_a_2124_ = lean_ctor_get(v___x_2123_, 0);
lean_inc(v_a_2124_);
lean_dec_ref(v___x_2123_);
v_fst_2125_ = lean_ctor_get(v_a_2124_, 0);
lean_inc(v_fst_2125_);
v_snd_2126_ = lean_ctor_get(v_a_2124_, 1);
lean_inc(v_snd_2126_);
lean_dec(v_a_2124_);
v_common_2127_ = lean_ctor_get(v_fst_2125_, 0);
lean_inc_ref(v_common_2127_);
v_x_2128_ = lean_ctor_get(v_fst_2125_, 1);
lean_inc_ref(v_x_2128_);
v_y_2129_ = lean_ctor_get(v_fst_2125_, 2);
lean_inc_ref(v_y_2129_);
lean_dec(v_fst_2125_);
lean_inc_ref(v_val_2102_);
v___x_2130_ = l_Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr(v_common_2127_, v_val_2102_, v_snd_2126_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
lean_dec_ref(v_common_2127_);
if (lean_obj_tag(v___x_2130_) == 0)
{
lean_object* v_a_2131_; lean_object* v_fst_2132_; lean_object* v_snd_2133_; lean_object* v___x_2134_; 
v_a_2131_ = lean_ctor_get(v___x_2130_, 0);
lean_inc(v_a_2131_);
lean_dec_ref_known(v___x_2130_, 1);
v_fst_2132_ = lean_ctor_get(v_a_2131_, 0);
lean_inc(v_fst_2132_);
v_snd_2133_ = lean_ctor_get(v_a_2131_, 1);
lean_inc(v_snd_2133_);
lean_dec(v_a_2131_);
lean_inc_ref(v_val_2102_);
v___x_2134_ = l_Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr(v_x_2128_, v_val_2102_, v_snd_2133_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
lean_dec_ref(v_x_2128_);
if (lean_obj_tag(v___x_2134_) == 0)
{
lean_object* v_a_2135_; lean_object* v_fst_2136_; lean_object* v_snd_2137_; lean_object* v___x_2138_; 
v_a_2135_ = lean_ctor_get(v___x_2134_, 0);
lean_inc(v_a_2135_);
lean_dec_ref_known(v___x_2134_, 1);
v_fst_2136_ = lean_ctor_get(v_a_2135_, 0);
lean_inc(v_fst_2136_);
v_snd_2137_ = lean_ctor_get(v_a_2135_, 1);
lean_inc(v_snd_2137_);
lean_dec(v_a_2135_);
lean_inc_ref(v_val_2102_);
v___x_2138_ = l_Lean_Meta_Tactic_BVDecide_Normalize_CoefficientsMap_toExpr(v_y_2129_, v_val_2102_, v_snd_2137_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
lean_dec_ref(v_y_2129_);
if (lean_obj_tag(v___x_2138_) == 0)
{
lean_object* v_a_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2203_; 
v_a_2139_ = lean_ctor_get(v___x_2138_, 0);
v_isSharedCheck_2203_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2203_ == 0)
{
v___x_2141_ = v___x_2138_;
v_isShared_2142_ = v_isSharedCheck_2203_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_a_2139_);
lean_dec(v___x_2138_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2203_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v_fst_2143_; lean_object* v_snd_2144_; lean_object* v___x_2146_; uint8_t v_isShared_2147_; uint8_t v_isSharedCheck_2202_; 
v_fst_2143_ = lean_ctor_get(v_a_2139_, 0);
v_snd_2144_ = lean_ctor_get(v_a_2139_, 1);
v_isSharedCheck_2202_ = !lean_is_exclusive(v_a_2139_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2146_ = v_a_2139_;
v_isShared_2147_ = v_isSharedCheck_2202_;
goto v_resetjp_2145_;
}
else
{
lean_inc(v_snd_2144_);
lean_inc(v_fst_2143_);
lean_dec(v_a_2139_);
v___x_2146_ = lean_box(0);
v_isShared_2147_ = v_isSharedCheck_2202_;
goto v_resetjp_2145_;
}
v_resetjp_2145_:
{
lean_object* v___y_2149_; lean_object* v___y_2150_; lean_object* v___x_2192_; lean_object* v___f_2193_; lean_object* v___y_2195_; lean_object* v___x_2199_; 
lean_inc_ref(v_val_2102_);
v___x_2192_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr(v_val_2102_);
v___f_2193_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__1), 3, 1);
lean_closure_set(v___f_2193_, 0, v___x_2192_);
lean_inc(v_fst_2132_);
lean_inc_ref(v___f_2193_);
v___x_2199_ = l_Option_merge___redArg(v___f_2193_, v_fst_2132_, v_fst_2136_);
if (lean_obj_tag(v___x_2199_) == 0)
{
lean_object* v___x_2200_; 
lean_inc_ref(v_val_2102_);
v___x_2200_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_neutralElement(v_val_2102_);
v___y_2195_ = v___x_2200_;
goto v___jp_2194_;
}
else
{
lean_object* v_val_2201_; 
v_val_2201_ = lean_ctor_get(v___x_2199_, 0);
lean_inc(v_val_2201_);
lean_dec_ref_known(v___x_2199_, 1);
v___y_2195_ = v_val_2201_;
goto v___jp_2194_;
}
v___jp_2148_:
{
lean_object* v___x_2151_; lean_object* v___x_2152_; uint8_t v___x_2153_; 
lean_inc_ref(v_P_2105_);
v___x_2151_ = l_Lean_mkAppB(v_P_2105_, v_lhs_2103_, v_rhs_2104_);
v___x_2152_ = l_Lean_mkAppB(v_P_2105_, v___y_2149_, v___y_2150_);
v___x_2153_ = lean_expr_eqv(v___x_2151_, v___x_2152_);
if (v___x_2153_ == 0)
{
lean_object* v___x_2154_; 
lean_del_object(v___x_2141_);
lean_inc_ref(v___x_2152_);
v___x_2154_ = l_Lean_Meta_Tactic_BVDecide_Normalize_proveEqualityByAC(v___x_2151_, v___x_2152_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
if (lean_obj_tag(v___x_2154_) == 0)
{
lean_object* v_a_2155_; lean_object* v___x_2156_; 
v_a_2155_ = lean_ctor_get(v___x_2154_, 0);
lean_inc(v_a_2155_);
lean_dec_ref_known(v___x_2154_, 1);
v___x_2156_ = l_Lean_Meta_Sym_shareCommonInc(v___x_2152_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
if (lean_obj_tag(v___x_2156_) == 0)
{
lean_object* v_a_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2168_; 
v_a_2157_ = lean_ctor_get(v___x_2156_, 0);
v_isSharedCheck_2168_ = !lean_is_exclusive(v___x_2156_);
if (v_isSharedCheck_2168_ == 0)
{
v___x_2159_ = v___x_2156_;
v_isShared_2160_ = v_isSharedCheck_2168_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_a_2157_);
lean_dec(v___x_2156_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2168_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v___x_2161_; lean_object* v___x_2163_; 
v___x_2161_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_2161_, 0, v_a_2157_);
lean_ctor_set(v___x_2161_, 1, v_a_2155_);
lean_ctor_set_uint8(v___x_2161_, sizeof(void*)*2, v___x_2153_);
lean_ctor_set_uint8(v___x_2161_, sizeof(void*)*2 + 1, v___x_2153_);
if (v_isShared_2147_ == 0)
{
lean_ctor_set(v___x_2146_, 0, v___x_2161_);
v___x_2163_ = v___x_2146_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v___x_2161_);
lean_ctor_set(v_reuseFailAlloc_2167_, 1, v_snd_2144_);
v___x_2163_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
lean_object* v___x_2165_; 
if (v_isShared_2160_ == 0)
{
lean_ctor_set(v___x_2159_, 0, v___x_2163_);
v___x_2165_ = v___x_2159_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v___x_2163_);
v___x_2165_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
return v___x_2165_;
}
}
}
}
else
{
lean_object* v_a_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2176_; 
lean_dec(v_a_2155_);
lean_del_object(v___x_2146_);
lean_dec(v_snd_2144_);
v_a_2169_ = lean_ctor_get(v___x_2156_, 0);
v_isSharedCheck_2176_ = !lean_is_exclusive(v___x_2156_);
if (v_isSharedCheck_2176_ == 0)
{
v___x_2171_ = v___x_2156_;
v_isShared_2172_ = v_isSharedCheck_2176_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_a_2169_);
lean_dec(v___x_2156_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2176_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v___x_2174_; 
if (v_isShared_2172_ == 0)
{
v___x_2174_ = v___x_2171_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v_a_2169_);
v___x_2174_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
return v___x_2174_;
}
}
}
}
else
{
lean_object* v_a_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2184_; 
lean_dec_ref(v___x_2152_);
lean_del_object(v___x_2146_);
lean_dec(v_snd_2144_);
v_a_2177_ = lean_ctor_get(v___x_2154_, 0);
v_isSharedCheck_2184_ = !lean_is_exclusive(v___x_2154_);
if (v_isSharedCheck_2184_ == 0)
{
v___x_2179_ = v___x_2154_;
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
else
{
lean_inc(v_a_2177_);
lean_dec(v___x_2154_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v___x_2182_; 
if (v_isShared_2180_ == 0)
{
v___x_2182_ = v___x_2179_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v_a_2177_);
v___x_2182_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
return v___x_2182_;
}
}
}
}
else
{
lean_object* v___x_2185_; lean_object* v___x_2187_; 
lean_dec_ref(v___x_2152_);
lean_dec_ref(v___x_2151_);
v___x_2185_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_2185_, 0, v___x_2106_);
lean_ctor_set_uint8(v___x_2185_, 1, v___x_2106_);
if (v_isShared_2147_ == 0)
{
lean_ctor_set(v___x_2146_, 0, v___x_2185_);
v___x_2187_ = v___x_2146_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v___x_2185_);
lean_ctor_set(v_reuseFailAlloc_2191_, 1, v_snd_2144_);
v___x_2187_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
lean_object* v___x_2189_; 
if (v_isShared_2142_ == 0)
{
lean_ctor_set(v___x_2141_, 0, v___x_2187_);
v___x_2189_ = v___x_2141_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v___x_2187_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
}
}
v___jp_2194_:
{
lean_object* v___x_2196_; 
v___x_2196_ = l_Option_merge___redArg(v___f_2193_, v_fst_2132_, v_fst_2143_);
if (lean_obj_tag(v___x_2196_) == 0)
{
lean_object* v___x_2197_; 
v___x_2197_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_neutralElement(v_val_2102_);
v___y_2149_ = v___y_2195_;
v___y_2150_ = v___x_2197_;
goto v___jp_2148_;
}
else
{
lean_object* v_val_2198_; 
lean_dec_ref(v_val_2102_);
v_val_2198_ = lean_ctor_get(v___x_2196_, 0);
lean_inc(v_val_2198_);
lean_dec_ref_known(v___x_2196_, 1);
v___y_2149_ = v___y_2195_;
v___y_2150_ = v_val_2198_;
goto v___jp_2148_;
}
}
}
}
}
else
{
lean_object* v_a_2204_; lean_object* v___x_2206_; uint8_t v_isShared_2207_; uint8_t v_isSharedCheck_2211_; 
lean_dec(v_fst_2136_);
lean_dec(v_fst_2132_);
lean_dec_ref(v_P_2105_);
lean_dec_ref(v_rhs_2104_);
lean_dec_ref(v_lhs_2103_);
lean_dec_ref(v_val_2102_);
v_a_2204_ = lean_ctor_get(v___x_2138_, 0);
v_isSharedCheck_2211_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2211_ == 0)
{
v___x_2206_ = v___x_2138_;
v_isShared_2207_ = v_isSharedCheck_2211_;
goto v_resetjp_2205_;
}
else
{
lean_inc(v_a_2204_);
lean_dec(v___x_2138_);
v___x_2206_ = lean_box(0);
v_isShared_2207_ = v_isSharedCheck_2211_;
goto v_resetjp_2205_;
}
v_resetjp_2205_:
{
lean_object* v___x_2209_; 
if (v_isShared_2207_ == 0)
{
v___x_2209_ = v___x_2206_;
goto v_reusejp_2208_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v_a_2204_);
v___x_2209_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2208_;
}
v_reusejp_2208_:
{
return v___x_2209_;
}
}
}
}
else
{
lean_object* v_a_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2219_; 
lean_dec(v_fst_2132_);
lean_dec_ref(v_y_2129_);
lean_dec_ref(v_P_2105_);
lean_dec_ref(v_rhs_2104_);
lean_dec_ref(v_lhs_2103_);
lean_dec_ref(v_val_2102_);
v_a_2212_ = lean_ctor_get(v___x_2134_, 0);
v_isSharedCheck_2219_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2219_ == 0)
{
v___x_2214_ = v___x_2134_;
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_a_2212_);
lean_dec(v___x_2134_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2217_; 
if (v_isShared_2215_ == 0)
{
v___x_2217_ = v___x_2214_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_a_2212_);
v___x_2217_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
return v___x_2217_;
}
}
}
}
else
{
lean_object* v_a_2220_; lean_object* v___x_2222_; uint8_t v_isShared_2223_; uint8_t v_isSharedCheck_2227_; 
lean_dec_ref(v_y_2129_);
lean_dec_ref(v_x_2128_);
lean_dec_ref(v_P_2105_);
lean_dec_ref(v_rhs_2104_);
lean_dec_ref(v_lhs_2103_);
lean_dec_ref(v_val_2102_);
v_a_2220_ = lean_ctor_get(v___x_2130_, 0);
v_isSharedCheck_2227_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2227_ == 0)
{
v___x_2222_ = v___x_2130_;
v_isShared_2223_ = v_isSharedCheck_2227_;
goto v_resetjp_2221_;
}
else
{
lean_inc(v_a_2220_);
lean_dec(v___x_2130_);
v___x_2222_ = lean_box(0);
v_isShared_2223_ = v_isSharedCheck_2227_;
goto v_resetjp_2221_;
}
v_resetjp_2221_:
{
lean_object* v___x_2225_; 
if (v_isShared_2223_ == 0)
{
v___x_2225_ = v___x_2222_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v_a_2220_);
v___x_2225_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
return v___x_2225_;
}
}
}
}
else
{
lean_object* v_a_2228_; lean_object* v___x_2230_; uint8_t v_isShared_2231_; uint8_t v_isSharedCheck_2235_; 
lean_dec(v_fst_2117_);
lean_dec_ref(v_P_2105_);
lean_dec_ref(v_rhs_2104_);
lean_dec_ref(v_lhs_2103_);
lean_dec_ref(v_val_2102_);
v_a_2228_ = lean_ctor_get(v___x_2119_, 0);
v_isSharedCheck_2235_ = !lean_is_exclusive(v___x_2119_);
if (v_isSharedCheck_2235_ == 0)
{
v___x_2230_ = v___x_2119_;
v_isShared_2231_ = v_isSharedCheck_2235_;
goto v_resetjp_2229_;
}
else
{
lean_inc(v_a_2228_);
lean_dec(v___x_2119_);
v___x_2230_ = lean_box(0);
v_isShared_2231_ = v_isSharedCheck_2235_;
goto v_resetjp_2229_;
}
v_resetjp_2229_:
{
lean_object* v___x_2233_; 
if (v_isShared_2231_ == 0)
{
v___x_2233_ = v___x_2230_;
goto v_reusejp_2232_;
}
else
{
lean_object* v_reuseFailAlloc_2234_; 
v_reuseFailAlloc_2234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2234_, 0, v_a_2228_);
v___x_2233_ = v_reuseFailAlloc_2234_;
goto v_reusejp_2232_;
}
v_reusejp_2232_:
{
return v___x_2233_;
}
}
}
}
else
{
lean_object* v_a_2236_; lean_object* v___x_2238_; uint8_t v_isShared_2239_; uint8_t v_isSharedCheck_2243_; 
lean_dec_ref(v_P_2105_);
lean_dec_ref(v_rhs_2104_);
lean_dec_ref(v_lhs_2103_);
lean_dec_ref(v_val_2102_);
v_a_2236_ = lean_ctor_get(v___x_2115_, 0);
v_isSharedCheck_2243_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2243_ == 0)
{
v___x_2238_ = v___x_2115_;
v_isShared_2239_ = v_isSharedCheck_2243_;
goto v_resetjp_2237_;
}
else
{
lean_inc(v_a_2236_);
lean_dec(v___x_2115_);
v___x_2238_ = lean_box(0);
v_isShared_2239_ = v_isSharedCheck_2243_;
goto v_resetjp_2237_;
}
v_resetjp_2237_:
{
lean_object* v___x_2241_; 
if (v_isShared_2239_ == 0)
{
v___x_2241_ = v___x_2238_;
goto v_reusejp_2240_;
}
else
{
lean_object* v_reuseFailAlloc_2242_; 
v_reuseFailAlloc_2242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2242_, 0, v_a_2236_);
v___x_2241_ = v_reuseFailAlloc_2242_;
goto v_reusejp_2240_;
}
v_reusejp_2240_:
{
return v___x_2241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__5___boxed(lean_object* v_val_2244_, lean_object* v_lhs_2245_, lean_object* v_rhs_2246_, lean_object* v_P_2247_, lean_object* v___x_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_){
_start:
{
uint8_t v___x_190966__boxed_2257_; lean_object* v_res_2258_; 
v___x_190966__boxed_2257_ = lean_unbox(v___x_2248_);
v_res_2258_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__5(v_val_2244_, v_lhs_2245_, v_rhs_2246_, v_P_2247_, v___x_190966__boxed_2257_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_);
lean_dec(v___y_2255_);
lean_dec_ref(v___y_2254_);
lean_dec(v___y_2253_);
lean_dec_ref(v___y_2252_);
lean_dec(v___y_2251_);
lean_dec_ref(v___y_2250_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(lean_object* v_cls_2259_, lean_object* v_msg_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_){
_start:
{
lean_object* v_ref_2266_; lean_object* v___x_2267_; lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2313_; 
v_ref_2266_ = lean_ctor_get(v___y_2263_, 2);
v___x_2267_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1_spec__1(v_msg_2260_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_);
v_a_2268_ = lean_ctor_get(v___x_2267_, 0);
v_isSharedCheck_2313_ = !lean_is_exclusive(v___x_2267_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2270_ = v___x_2267_;
v_isShared_2271_ = v_isSharedCheck_2313_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_dec(v___x_2267_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2313_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v___x_2272_; lean_object* v_traceState_2273_; lean_object* v_env_2274_; lean_object* v_nextMacroScope_2275_; lean_object* v_ngen_2276_; lean_object* v_auxDeclNGen_2277_; lean_object* v_cache_2278_; lean_object* v_recordedDeps_2279_; lean_object* v_messages_2280_; lean_object* v_infoState_2281_; lean_object* v_snapshotTasks_2282_; lean_object* v___x_2284_; uint8_t v_isShared_2285_; uint8_t v_isSharedCheck_2312_; 
v___x_2272_ = lean_st_ref_take(v___y_2264_);
v_traceState_2273_ = lean_ctor_get(v___x_2272_, 4);
v_env_2274_ = lean_ctor_get(v___x_2272_, 0);
v_nextMacroScope_2275_ = lean_ctor_get(v___x_2272_, 1);
v_ngen_2276_ = lean_ctor_get(v___x_2272_, 2);
v_auxDeclNGen_2277_ = lean_ctor_get(v___x_2272_, 3);
v_cache_2278_ = lean_ctor_get(v___x_2272_, 5);
v_recordedDeps_2279_ = lean_ctor_get(v___x_2272_, 6);
v_messages_2280_ = lean_ctor_get(v___x_2272_, 7);
v_infoState_2281_ = lean_ctor_get(v___x_2272_, 8);
v_snapshotTasks_2282_ = lean_ctor_get(v___x_2272_, 9);
v_isSharedCheck_2312_ = !lean_is_exclusive(v___x_2272_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2284_ = v___x_2272_;
v_isShared_2285_ = v_isSharedCheck_2312_;
goto v_resetjp_2283_;
}
else
{
lean_inc(v_snapshotTasks_2282_);
lean_inc(v_infoState_2281_);
lean_inc(v_messages_2280_);
lean_inc(v_recordedDeps_2279_);
lean_inc(v_cache_2278_);
lean_inc(v_traceState_2273_);
lean_inc(v_auxDeclNGen_2277_);
lean_inc(v_ngen_2276_);
lean_inc(v_nextMacroScope_2275_);
lean_inc(v_env_2274_);
lean_dec(v___x_2272_);
v___x_2284_ = lean_box(0);
v_isShared_2285_ = v_isSharedCheck_2312_;
goto v_resetjp_2283_;
}
v_resetjp_2283_:
{
uint64_t v_tid_2286_; lean_object* v_traces_2287_; lean_object* v___x_2289_; uint8_t v_isShared_2290_; uint8_t v_isSharedCheck_2311_; 
v_tid_2286_ = lean_ctor_get_uint64(v_traceState_2273_, sizeof(void*)*1);
v_traces_2287_ = lean_ctor_get(v_traceState_2273_, 0);
v_isSharedCheck_2311_ = !lean_is_exclusive(v_traceState_2273_);
if (v_isSharedCheck_2311_ == 0)
{
v___x_2289_ = v_traceState_2273_;
v_isShared_2290_ = v_isSharedCheck_2311_;
goto v_resetjp_2288_;
}
else
{
lean_inc(v_traces_2287_);
lean_dec(v_traceState_2273_);
v___x_2289_ = lean_box(0);
v_isShared_2290_ = v_isSharedCheck_2311_;
goto v_resetjp_2288_;
}
v_resetjp_2288_:
{
lean_object* v___x_2291_; lean_object* v___x_2292_; double v___x_2293_; uint8_t v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2302_; 
v___x_2291_ = lean_box(0);
v___x_2292_ = lean_box(0);
v___x_2293_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__0);
v___x_2294_ = 0;
v___x_2295_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__1));
v___x_2296_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2296_, 0, v_cls_2259_);
lean_ctor_set(v___x_2296_, 1, v___x_2292_);
lean_ctor_set(v___x_2296_, 2, v___x_2295_);
lean_ctor_set_float(v___x_2296_, sizeof(void*)*3, v___x_2293_);
lean_ctor_set_float(v___x_2296_, sizeof(void*)*3 + 8, v___x_2293_);
lean_ctor_set_uint8(v___x_2296_, sizeof(void*)*3 + 16, v___x_2294_);
v___x_2297_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__2));
v___x_2298_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2296_);
lean_ctor_set(v___x_2298_, 1, v_a_2268_);
lean_ctor_set(v___x_2298_, 2, v___x_2297_);
lean_inc(v_ref_2266_);
v___x_2299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2299_, 0, v_ref_2266_);
lean_ctor_set(v___x_2299_, 1, v___x_2298_);
v___x_2300_ = l_Lean_PersistentArray_push___redArg(v_traces_2287_, v___x_2299_);
if (v_isShared_2290_ == 0)
{
lean_ctor_set(v___x_2289_, 0, v___x_2300_);
v___x_2302_ = v___x_2289_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v___x_2300_);
lean_ctor_set_uint64(v_reuseFailAlloc_2310_, sizeof(void*)*1, v_tid_2286_);
v___x_2302_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
lean_object* v___x_2304_; 
if (v_isShared_2285_ == 0)
{
lean_ctor_set(v___x_2284_, 4, v___x_2302_);
v___x_2304_ = v___x_2284_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_env_2274_);
lean_ctor_set(v_reuseFailAlloc_2309_, 1, v_nextMacroScope_2275_);
lean_ctor_set(v_reuseFailAlloc_2309_, 2, v_ngen_2276_);
lean_ctor_set(v_reuseFailAlloc_2309_, 3, v_auxDeclNGen_2277_);
lean_ctor_set(v_reuseFailAlloc_2309_, 4, v___x_2302_);
lean_ctor_set(v_reuseFailAlloc_2309_, 5, v_cache_2278_);
lean_ctor_set(v_reuseFailAlloc_2309_, 6, v_recordedDeps_2279_);
lean_ctor_set(v_reuseFailAlloc_2309_, 7, v_messages_2280_);
lean_ctor_set(v_reuseFailAlloc_2309_, 8, v_infoState_2281_);
lean_ctor_set(v_reuseFailAlloc_2309_, 9, v_snapshotTasks_2282_);
v___x_2304_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
lean_object* v___x_2305_; lean_object* v___x_2307_; 
v___x_2305_ = lean_st_ref_put(v___y_2264_, v___x_2304_);
if (v_isShared_2271_ == 0)
{
lean_ctor_set(v___x_2270_, 0, v___x_2291_);
v___x_2307_ = v___x_2270_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v___x_2291_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg___boxed(lean_object* v_cls_2314_, lean_object* v_msg_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_){
_start:
{
lean_object* v_res_2321_; 
v_res_2321_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v_cls_2314_, v_msg_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_);
lean_dec(v___y_2319_);
lean_dec_ref(v___y_2318_);
lean_dec(v___y_2317_);
lean_dec_ref(v___y_2316_);
return v_res_2321_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__1(void){
_start:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; 
v___x_2323_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__0));
v___x_2324_ = l_Lean_stringToMessageData(v___x_2323_);
return v___x_2324_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__3(void){
_start:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2326_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__2));
v___x_2327_ = l_Lean_stringToMessageData(v___x_2326_);
return v___x_2327_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__5(void){
_start:
{
lean_object* v___x_2329_; lean_object* v___x_2330_; 
v___x_2329_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__4));
v___x_2330_ = l_Lean_stringToMessageData(v___x_2329_);
return v___x_2330_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__6(void){
_start:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; 
v___x_2331_ = lean_box(0);
v___x_2332_ = lean_unsigned_to_nat(16u);
v___x_2333_ = lean_mk_array(v___x_2332_, v___x_2331_);
return v___x_2333_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__7(void){
_start:
{
lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; 
v___x_2334_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__6);
v___x_2335_ = lean_unsigned_to_nat(0u);
v___x_2336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2336_, 0, v___x_2335_);
lean_ctor_set(v___x_2336_, 1, v___x_2334_);
return v___x_2336_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__10(void){
_start:
{
lean_object* v___x_2340_; lean_object* v___x_2341_; 
v___x_2340_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__9));
v___x_2341_ = l_Lean_stringToMessageData(v___x_2340_);
return v___x_2341_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__12(void){
_start:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2343_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__11));
v___x_2344_ = l_Lean_stringToMessageData(v___x_2343_);
return v___x_2344_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14(void){
_start:
{
lean_object* v___x_2346_; lean_object* v___x_2347_; 
v___x_2346_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__13));
v___x_2347_ = l_Lean_stringToMessageData(v___x_2346_);
return v___x_2347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4(lean_object* v_lhs_2348_, lean_object* v_rhs_2349_, lean_object* v_cls_2350_, lean_object* v_P_2351_, lean_object* v___f_2352_, lean_object* v_____r_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_){
_start:
{
lean_object* v___x_2370_; 
v___x_2370_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofApp2_x3f(v_lhs_2348_);
if (lean_obj_tag(v___x_2370_) == 1)
{
lean_object* v_val_2371_; lean_object* v___x_2372_; 
v_val_2371_ = lean_ctor_get(v___x_2370_, 0);
lean_inc(v_val_2371_);
lean_dec_ref_known(v___x_2370_, 1);
v___x_2372_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofApp2_x3f(v_rhs_2349_);
if (lean_obj_tag(v___x_2372_) == 1)
{
lean_object* v_val_2373_; lean_object* v___x_2375_; uint8_t v_isShared_2376_; uint8_t v_isSharedCheck_2457_; 
v_val_2373_ = lean_ctor_get(v___x_2372_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2372_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2375_ = v___x_2372_;
v_isShared_2376_ = v_isSharedCheck_2457_;
goto v_resetjp_2374_;
}
else
{
lean_inc(v_val_2373_);
lean_dec(v___x_2372_);
v___x_2375_ = lean_box(0);
v_isShared_2376_ = v_isSharedCheck_2457_;
goto v_resetjp_2374_;
}
v_resetjp_2374_:
{
uint8_t v___x_2377_; 
v___x_2377_ = lean_expr_eqv(v_val_2371_, v_val_2373_);
if (v___x_2377_ == 0)
{
lean_object* v_toCold_2383_; lean_object* v_options_2384_; uint8_t v_hasTrace_2385_; 
lean_dec_ref(v___f_2352_);
lean_dec_ref(v_P_2351_);
v_toCold_2383_ = lean_ctor_get(v___y_2361_, 0);
v_options_2384_ = lean_ctor_get(v_toCold_2383_, 2);
v_hasTrace_2385_ = lean_ctor_get_uint8(v_options_2384_, sizeof(void*)*1);
if (v_hasTrace_2385_ == 0)
{
lean_dec(v_val_2373_);
lean_dec(v_val_2371_);
lean_dec(v_cls_2350_);
lean_dec_ref(v_rhs_2349_);
lean_dec_ref(v_lhs_2348_);
goto v___jp_2378_;
}
else
{
lean_object* v_inheritedTraceOptions_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; uint8_t v___x_2389_; 
v_inheritedTraceOptions_2386_ = lean_ctor_get(v_toCold_2383_, 11);
v___x_2387_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__5));
lean_inc(v_cls_2350_);
v___x_2388_ = l_Lean_Name_append(v___x_2387_, v_cls_2350_);
v___x_2389_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2386_, v_options_2384_, v___x_2388_);
lean_dec(v___x_2388_);
if (v___x_2389_ == 0)
{
lean_dec(v_val_2373_);
lean_dec(v_val_2371_);
lean_dec(v_cls_2350_);
lean_dec_ref(v_rhs_2349_);
lean_dec_ref(v_lhs_2348_);
goto v___jp_2378_;
}
else
{
lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; 
v___x_2390_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__1);
v___x_2391_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr(v_val_2371_);
v___x_2392_ = l_Lean_MessageData_ofExpr(v___x_2391_);
v___x_2393_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2393_, 0, v___x_2390_);
lean_ctor_set(v___x_2393_, 1, v___x_2392_);
v___x_2394_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__3);
v___x_2395_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2393_);
lean_ctor_set(v___x_2395_, 1, v___x_2394_);
v___x_2396_ = l_Lean_indentExpr(v_lhs_2348_);
v___x_2397_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2397_, 0, v___x_2395_);
lean_ctor_set(v___x_2397_, 1, v___x_2396_);
v___x_2398_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__5);
v___x_2399_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2399_, 0, v___x_2397_);
lean_ctor_set(v___x_2399_, 1, v___x_2398_);
v___x_2400_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr(v_val_2373_);
v___x_2401_ = l_Lean_MessageData_ofExpr(v___x_2400_);
v___x_2402_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2402_, 0, v___x_2399_);
lean_ctor_set(v___x_2402_, 1, v___x_2401_);
v___x_2403_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2403_, 0, v___x_2402_);
lean_ctor_set(v___x_2403_, 1, v___x_2394_);
v___x_2404_ = l_Lean_indentExpr(v_rhs_2349_);
v___x_2405_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2405_, 0, v___x_2403_);
lean_ctor_set(v___x_2405_, 1, v___x_2404_);
v___x_2406_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v_cls_2350_, v___x_2405_, v___y_2359_, v___y_2360_, v___y_2361_, v___y_2362_);
if (lean_obj_tag(v___x_2406_) == 0)
{
lean_dec_ref_known(v___x_2406_, 1);
goto v___jp_2378_;
}
else
{
lean_object* v_a_2407_; lean_object* v___x_2409_; uint8_t v_isShared_2410_; uint8_t v_isSharedCheck_2414_; 
lean_del_object(v___x_2375_);
v_a_2407_ = lean_ctor_get(v___x_2406_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2406_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2409_ = v___x_2406_;
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
else
{
lean_inc(v_a_2407_);
lean_dec(v___x_2406_);
v___x_2409_ = lean_box(0);
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
v_resetjp_2408_:
{
lean_object* v___x_2412_; 
if (v_isShared_2410_ == 0)
{
v___x_2412_ = v___x_2409_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v_a_2407_);
v___x_2412_ = v_reuseFailAlloc_2413_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
return v___x_2412_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_2415_; lean_object* v_inheritedTraceOptions_2416_; uint8_t v___x_2417_; lean_object* v___x_2418_; lean_object* v___f_2419_; lean_object* v___y_2421_; lean_object* v___y_2422_; lean_object* v___y_2423_; lean_object* v___y_2424_; lean_object* v___y_2425_; lean_object* v___y_2426_; lean_object* v___x_2431_; 
lean_del_object(v___x_2375_);
lean_dec(v_val_2373_);
v_toCold_2415_ = lean_ctor_get(v___y_2361_, 0);
v_inheritedTraceOptions_2416_ = lean_ctor_get(v_toCold_2415_, 11);
v___x_2417_ = 0;
v___x_2418_ = lean_box(v___x_2417_);
lean_inc(v_val_2371_);
v___f_2419_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__5___boxed), 13, 5);
lean_closure_set(v___f_2419_, 0, v_val_2371_);
lean_closure_set(v___f_2419_, 1, v_lhs_2348_);
lean_closure_set(v___f_2419_, 2, v_rhs_2349_);
lean_closure_set(v___f_2419_, 3, v_P_2351_);
lean_closure_set(v___f_2419_, 4, v___x_2418_);
lean_inc(v___y_2362_);
lean_inc_ref(v___y_2361_);
lean_inc(v___y_2360_);
lean_inc_ref(v___y_2359_);
lean_inc(v___y_2358_);
lean_inc_ref(v___y_2357_);
lean_inc(v___y_2356_);
lean_inc_ref(v___y_2355_);
lean_inc(v___y_2354_);
lean_inc_ref(v_inheritedTraceOptions_2416_);
v___x_2431_ = lean_apply_11(v___f_2352_, v_inheritedTraceOptions_2416_, v___y_2354_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_, v___y_2362_, lean_box(0));
if (lean_obj_tag(v___x_2431_) == 0)
{
lean_object* v_a_2432_; uint8_t v___x_2433_; 
v_a_2432_ = lean_ctor_get(v___x_2431_, 0);
lean_inc(v_a_2432_);
lean_dec_ref_known(v___x_2431_, 1);
v___x_2433_ = lean_unbox(v_a_2432_);
lean_dec(v_a_2432_);
if (v___x_2433_ == 0)
{
lean_dec(v_cls_2350_);
v___y_2421_ = v___y_2357_;
v___y_2422_ = v___y_2358_;
v___y_2423_ = v___y_2359_;
v___y_2424_ = v___y_2360_;
v___y_2425_ = v___y_2361_;
v___y_2426_ = v___y_2362_;
goto v___jp_2420_;
}
else
{
lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
v___x_2434_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__10);
lean_inc(v_val_2371_);
v___x_2435_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr(v_val_2371_);
v___x_2436_ = l_Lean_MessageData_ofExpr(v___x_2435_);
v___x_2437_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2437_, 0, v___x_2434_);
lean_ctor_set(v___x_2437_, 1, v___x_2436_);
v___x_2438_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__12, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__12_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__12);
v___x_2439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2439_, 0, v___x_2437_);
lean_ctor_set(v___x_2439_, 1, v___x_2438_);
v___x_2440_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v_cls_2350_, v___x_2439_, v___y_2359_, v___y_2360_, v___y_2361_, v___y_2362_);
if (lean_obj_tag(v___x_2440_) == 0)
{
lean_dec_ref_known(v___x_2440_, 1);
v___y_2421_ = v___y_2357_;
v___y_2422_ = v___y_2358_;
v___y_2423_ = v___y_2359_;
v___y_2424_ = v___y_2360_;
v___y_2425_ = v___y_2361_;
v___y_2426_ = v___y_2362_;
goto v___jp_2420_;
}
else
{
lean_object* v_a_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2448_; 
lean_dec_ref(v___f_2419_);
lean_dec(v_val_2371_);
v_a_2441_ = lean_ctor_get(v___x_2440_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___x_2440_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2443_ = v___x_2440_;
v_isShared_2444_ = v_isSharedCheck_2448_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_a_2441_);
lean_dec(v___x_2440_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2448_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v___x_2446_; 
if (v_isShared_2444_ == 0)
{
v___x_2446_ = v___x_2443_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2447_; 
v_reuseFailAlloc_2447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2447_, 0, v_a_2441_);
v___x_2446_ = v_reuseFailAlloc_2447_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
return v___x_2446_;
}
}
}
}
}
else
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2456_; 
lean_dec_ref(v___f_2419_);
lean_dec(v_val_2371_);
lean_dec(v_cls_2350_);
v_a_2449_ = lean_ctor_get(v___x_2431_, 0);
v_isSharedCheck_2456_ = !lean_is_exclusive(v___x_2431_);
if (v_isSharedCheck_2456_ == 0)
{
v___x_2451_ = v___x_2431_;
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v___x_2431_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v___x_2454_; 
if (v_isShared_2452_ == 0)
{
v___x_2454_ = v___x_2451_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2455_; 
v_reuseFailAlloc_2455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2455_, 0, v_a_2449_);
v___x_2454_ = v_reuseFailAlloc_2455_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
return v___x_2454_;
}
}
}
v___jp_2420_:
{
lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; 
v___x_2427_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__7);
v___x_2428_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__8));
v___x_2429_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2429_, 0, v_val_2371_);
lean_ctor_set(v___x_2429_, 1, v___x_2427_);
lean_ctor_set(v___x_2429_, 2, v___x_2428_);
v___x_2430_ = l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_run_x27___redArg(v___f_2419_, v___x_2429_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_);
return v___x_2430_;
}
}
v___jp_2378_:
{
lean_object* v___x_2379_; lean_object* v___x_2381_; 
v___x_2379_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_2379_, 0, v___x_2377_);
lean_ctor_set_uint8(v___x_2379_, 1, v___x_2377_);
if (v_isShared_2376_ == 0)
{
lean_ctor_set_tag(v___x_2375_, 0);
lean_ctor_set(v___x_2375_, 0, v___x_2379_);
v___x_2381_ = v___x_2375_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v___x_2379_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
}
else
{
lean_object* v_toCold_2458_; lean_object* v_inheritedTraceOptions_2459_; lean_object* v___x_2460_; 
lean_dec(v___x_2372_);
lean_dec(v_val_2371_);
lean_dec_ref(v_P_2351_);
lean_dec_ref(v_lhs_2348_);
v_toCold_2458_ = lean_ctor_get(v___y_2361_, 0);
v_inheritedTraceOptions_2459_ = lean_ctor_get(v_toCold_2458_, 11);
lean_inc(v___y_2362_);
lean_inc_ref(v___y_2361_);
lean_inc(v___y_2360_);
lean_inc_ref(v___y_2359_);
lean_inc(v___y_2358_);
lean_inc_ref(v___y_2357_);
lean_inc(v___y_2356_);
lean_inc_ref(v___y_2355_);
lean_inc(v___y_2354_);
lean_inc_ref(v_inheritedTraceOptions_2459_);
v___x_2460_ = lean_apply_11(v___f_2352_, v_inheritedTraceOptions_2459_, v___y_2354_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_, v___y_2362_, lean_box(0));
if (lean_obj_tag(v___x_2460_) == 0)
{
lean_object* v_a_2461_; uint8_t v___x_2462_; 
v_a_2461_ = lean_ctor_get(v___x_2460_, 0);
lean_inc(v_a_2461_);
lean_dec_ref_known(v___x_2460_, 1);
v___x_2462_ = lean_unbox(v_a_2461_);
lean_dec(v_a_2461_);
if (v___x_2462_ == 0)
{
lean_dec(v_cls_2350_);
lean_dec_ref(v_rhs_2349_);
goto v___jp_2364_;
}
else
{
lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; 
v___x_2463_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14);
v___x_2464_ = l_Lean_indentExpr(v_rhs_2349_);
v___x_2465_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2465_, 0, v___x_2463_);
lean_ctor_set(v___x_2465_, 1, v___x_2464_);
v___x_2466_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v_cls_2350_, v___x_2465_, v___y_2359_, v___y_2360_, v___y_2361_, v___y_2362_);
if (lean_obj_tag(v___x_2466_) == 0)
{
lean_dec_ref_known(v___x_2466_, 1);
goto v___jp_2364_;
}
else
{
lean_object* v_a_2467_; lean_object* v___x_2469_; uint8_t v_isShared_2470_; uint8_t v_isSharedCheck_2474_; 
v_a_2467_ = lean_ctor_get(v___x_2466_, 0);
v_isSharedCheck_2474_ = !lean_is_exclusive(v___x_2466_);
if (v_isSharedCheck_2474_ == 0)
{
v___x_2469_ = v___x_2466_;
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
else
{
lean_inc(v_a_2467_);
lean_dec(v___x_2466_);
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
else
{
lean_object* v_a_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2482_; 
lean_dec(v_cls_2350_);
lean_dec_ref(v_rhs_2349_);
v_a_2475_ = lean_ctor_get(v___x_2460_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2477_ = v___x_2460_;
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_a_2475_);
lean_dec(v___x_2460_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2480_; 
if (v_isShared_2478_ == 0)
{
v___x_2480_ = v___x_2477_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_a_2475_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
}
}
}
else
{
lean_object* v_toCold_2483_; lean_object* v_inheritedTraceOptions_2484_; lean_object* v___x_2485_; 
lean_dec(v___x_2370_);
lean_dec_ref(v_P_2351_);
lean_dec_ref(v_rhs_2349_);
v_toCold_2483_ = lean_ctor_get(v___y_2361_, 0);
v_inheritedTraceOptions_2484_ = lean_ctor_get(v_toCold_2483_, 11);
lean_inc(v___y_2362_);
lean_inc_ref(v___y_2361_);
lean_inc(v___y_2360_);
lean_inc_ref(v___y_2359_);
lean_inc(v___y_2358_);
lean_inc_ref(v___y_2357_);
lean_inc(v___y_2356_);
lean_inc_ref(v___y_2355_);
lean_inc(v___y_2354_);
lean_inc_ref(v_inheritedTraceOptions_2484_);
v___x_2485_ = lean_apply_11(v___f_2352_, v_inheritedTraceOptions_2484_, v___y_2354_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_, v___y_2362_, lean_box(0));
if (lean_obj_tag(v___x_2485_) == 0)
{
lean_object* v_a_2486_; uint8_t v___x_2487_; 
v_a_2486_ = lean_ctor_get(v___x_2485_, 0);
lean_inc(v_a_2486_);
lean_dec_ref_known(v___x_2485_, 1);
v___x_2487_ = lean_unbox(v_a_2486_);
lean_dec(v_a_2486_);
if (v___x_2487_ == 0)
{
lean_dec(v_cls_2350_);
lean_dec_ref(v_lhs_2348_);
goto v___jp_2367_;
}
else
{
lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; 
v___x_2488_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14);
v___x_2489_ = l_Lean_indentExpr(v_lhs_2348_);
v___x_2490_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2490_, 0, v___x_2488_);
lean_ctor_set(v___x_2490_, 1, v___x_2489_);
v___x_2491_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v_cls_2350_, v___x_2490_, v___y_2359_, v___y_2360_, v___y_2361_, v___y_2362_);
if (lean_obj_tag(v___x_2491_) == 0)
{
lean_dec_ref_known(v___x_2491_, 1);
goto v___jp_2367_;
}
else
{
lean_object* v_a_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2499_; 
v_a_2492_ = lean_ctor_get(v___x_2491_, 0);
v_isSharedCheck_2499_ = !lean_is_exclusive(v___x_2491_);
if (v_isSharedCheck_2499_ == 0)
{
v___x_2494_ = v___x_2491_;
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_a_2492_);
lean_dec(v___x_2491_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v___x_2497_; 
if (v_isShared_2495_ == 0)
{
v___x_2497_ = v___x_2494_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v_a_2492_);
v___x_2497_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
return v___x_2497_;
}
}
}
}
}
else
{
lean_object* v_a_2500_; lean_object* v___x_2502_; uint8_t v_isShared_2503_; uint8_t v_isSharedCheck_2507_; 
lean_dec(v_cls_2350_);
lean_dec_ref(v_lhs_2348_);
v_a_2500_ = lean_ctor_get(v___x_2485_, 0);
v_isSharedCheck_2507_ = !lean_is_exclusive(v___x_2485_);
if (v_isSharedCheck_2507_ == 0)
{
v___x_2502_ = v___x_2485_;
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
else
{
lean_inc(v_a_2500_);
lean_dec(v___x_2485_);
v___x_2502_ = lean_box(0);
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
v_resetjp_2501_:
{
lean_object* v___x_2505_; 
if (v_isShared_2503_ == 0)
{
v___x_2505_ = v___x_2502_;
goto v_reusejp_2504_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v_a_2500_);
v___x_2505_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2504_;
}
v_reusejp_2504_:
{
return v___x_2505_;
}
}
}
}
v___jp_2364_:
{
lean_object* v___x_2365_; lean_object* v___x_2366_; 
v___x_2365_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__2___closed__0));
v___x_2366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2366_, 0, v___x_2365_);
return v___x_2366_;
}
v___jp_2367_:
{
lean_object* v___x_2368_; lean_object* v___x_2369_; 
v___x_2368_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__2___closed__0));
v___x_2369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2369_, 0, v___x_2368_);
return v___x_2369_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___boxed(lean_object* v_lhs_2508_, lean_object* v_rhs_2509_, lean_object* v_cls_2510_, lean_object* v_P_2511_, lean_object* v___f_2512_, lean_object* v_____r_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_){
_start:
{
lean_object* v_res_2524_; 
v_res_2524_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4(v_lhs_2508_, v_rhs_2509_, v_cls_2510_, v_P_2511_, v___f_2512_, v_____r_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_);
lean_dec(v___y_2522_);
lean_dec_ref(v___y_2521_);
lean_dec(v___y_2520_);
lean_dec_ref(v___y_2519_);
lean_dec(v___y_2518_);
lean_dec_ref(v___y_2517_);
lean_dec(v___y_2516_);
lean_dec_ref(v___y_2515_);
lean_dec(v___y_2514_);
return v_res_2524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__8(lean_object* v_lhs_2525_, lean_object* v_rhs_2526_, uint8_t v___x_2527_, lean_object* v_cls_2528_, lean_object* v_P_2529_, lean_object* v___f_2530_, lean_object* v_____r_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_){
_start:
{
lean_object* v___x_2551_; 
v___x_2551_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofApp2_x3f(v_lhs_2525_);
if (lean_obj_tag(v___x_2551_) == 1)
{
lean_object* v_val_2552_; lean_object* v___x_2553_; 
v_val_2552_ = lean_ctor_get(v___x_2551_, 0);
lean_inc(v_val_2552_);
lean_dec_ref_known(v___x_2551_, 1);
v___x_2553_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofApp2_x3f(v_rhs_2526_);
if (lean_obj_tag(v___x_2553_) == 1)
{
lean_object* v_val_2554_; uint8_t v___x_2555_; 
v_val_2554_ = lean_ctor_get(v___x_2553_, 0);
lean_inc(v_val_2554_);
lean_dec_ref_known(v___x_2553_, 1);
v___x_2555_ = lean_expr_eqv(v_val_2552_, v_val_2554_);
if (v___x_2555_ == 0)
{
lean_object* v_toCold_2556_; lean_object* v_options_2557_; uint8_t v_hasTrace_2558_; 
lean_dec_ref(v___f_2530_);
lean_dec_ref(v_P_2529_);
v_toCold_2556_ = lean_ctor_get(v___y_2539_, 0);
v_options_2557_ = lean_ctor_get(v_toCold_2556_, 2);
v_hasTrace_2558_ = lean_ctor_get_uint8(v_options_2557_, sizeof(void*)*1);
if (v_hasTrace_2558_ == 0)
{
lean_dec(v_val_2554_);
lean_dec(v_val_2552_);
lean_dec(v_cls_2528_);
lean_dec_ref(v_rhs_2526_);
lean_dec_ref(v_lhs_2525_);
goto v___jp_2542_;
}
else
{
lean_object* v_inheritedTraceOptions_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; uint8_t v___x_2562_; 
v_inheritedTraceOptions_2559_ = lean_ctor_get(v_toCold_2556_, 11);
v___x_2560_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__5));
lean_inc(v_cls_2528_);
v___x_2561_ = l_Lean_Name_append(v___x_2560_, v_cls_2528_);
v___x_2562_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2559_, v_options_2557_, v___x_2561_);
lean_dec(v___x_2561_);
if (v___x_2562_ == 0)
{
lean_dec(v_val_2554_);
lean_dec(v_val_2552_);
lean_dec(v_cls_2528_);
lean_dec_ref(v_rhs_2526_);
lean_dec_ref(v_lhs_2525_);
goto v___jp_2542_;
}
else
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; 
v___x_2563_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__1);
v___x_2564_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr(v_val_2552_);
v___x_2565_ = l_Lean_MessageData_ofExpr(v___x_2564_);
v___x_2566_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2566_, 0, v___x_2563_);
lean_ctor_set(v___x_2566_, 1, v___x_2565_);
v___x_2567_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__3);
v___x_2568_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2568_, 0, v___x_2566_);
lean_ctor_set(v___x_2568_, 1, v___x_2567_);
v___x_2569_ = l_Lean_indentExpr(v_lhs_2525_);
v___x_2570_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2568_);
lean_ctor_set(v___x_2570_, 1, v___x_2569_);
v___x_2571_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__5);
v___x_2572_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2572_, 0, v___x_2570_);
lean_ctor_set(v___x_2572_, 1, v___x_2571_);
v___x_2573_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr(v_val_2554_);
v___x_2574_ = l_Lean_MessageData_ofExpr(v___x_2573_);
v___x_2575_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2575_, 0, v___x_2572_);
lean_ctor_set(v___x_2575_, 1, v___x_2574_);
v___x_2576_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2575_);
lean_ctor_set(v___x_2576_, 1, v___x_2567_);
v___x_2577_ = l_Lean_indentExpr(v_rhs_2526_);
v___x_2578_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2578_, 0, v___x_2576_);
lean_ctor_set(v___x_2578_, 1, v___x_2577_);
v___x_2579_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v_cls_2528_, v___x_2578_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_);
if (lean_obj_tag(v___x_2579_) == 0)
{
lean_dec_ref_known(v___x_2579_, 1);
goto v___jp_2542_;
}
else
{
lean_object* v_a_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2587_; 
v_a_2580_ = lean_ctor_get(v___x_2579_, 0);
v_isSharedCheck_2587_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2587_ == 0)
{
v___x_2582_ = v___x_2579_;
v_isShared_2583_ = v_isSharedCheck_2587_;
goto v_resetjp_2581_;
}
else
{
lean_inc(v_a_2580_);
lean_dec(v___x_2579_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2587_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v___x_2585_; 
if (v_isShared_2583_ == 0)
{
v___x_2585_ = v___x_2582_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2586_; 
v_reuseFailAlloc_2586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2586_, 0, v_a_2580_);
v___x_2585_ = v_reuseFailAlloc_2586_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
return v___x_2585_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_2588_; lean_object* v_inheritedTraceOptions_2589_; lean_object* v___x_2590_; lean_object* v___f_2591_; lean_object* v___y_2593_; lean_object* v___y_2594_; lean_object* v___y_2595_; lean_object* v___y_2596_; lean_object* v___y_2597_; lean_object* v___y_2598_; lean_object* v___x_2603_; 
lean_dec(v_val_2554_);
v_toCold_2588_ = lean_ctor_get(v___y_2539_, 0);
v_inheritedTraceOptions_2589_ = lean_ctor_get(v_toCold_2588_, 11);
v___x_2590_ = lean_box(v___x_2527_);
lean_inc(v_val_2552_);
v___f_2591_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__5___boxed), 13, 5);
lean_closure_set(v___f_2591_, 0, v_val_2552_);
lean_closure_set(v___f_2591_, 1, v_lhs_2525_);
lean_closure_set(v___f_2591_, 2, v_rhs_2526_);
lean_closure_set(v___f_2591_, 3, v_P_2529_);
lean_closure_set(v___f_2591_, 4, v___x_2590_);
lean_inc(v___y_2540_);
lean_inc_ref(v___y_2539_);
lean_inc(v___y_2538_);
lean_inc_ref(v___y_2537_);
lean_inc(v___y_2536_);
lean_inc_ref(v___y_2535_);
lean_inc(v___y_2534_);
lean_inc_ref(v___y_2533_);
lean_inc(v___y_2532_);
lean_inc_ref(v_inheritedTraceOptions_2589_);
v___x_2603_ = lean_apply_11(v___f_2530_, v_inheritedTraceOptions_2589_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, lean_box(0));
if (lean_obj_tag(v___x_2603_) == 0)
{
lean_object* v_a_2604_; uint8_t v___x_2605_; 
v_a_2604_ = lean_ctor_get(v___x_2603_, 0);
lean_inc(v_a_2604_);
lean_dec_ref_known(v___x_2603_, 1);
v___x_2605_ = lean_unbox(v_a_2604_);
lean_dec(v_a_2604_);
if (v___x_2605_ == 0)
{
lean_dec(v_cls_2528_);
v___y_2593_ = v___y_2535_;
v___y_2594_ = v___y_2536_;
v___y_2595_ = v___y_2537_;
v___y_2596_ = v___y_2538_;
v___y_2597_ = v___y_2539_;
v___y_2598_ = v___y_2540_;
goto v___jp_2592_;
}
else
{
lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; 
v___x_2606_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__10);
lean_inc(v_val_2552_);
v___x_2607_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr(v_val_2552_);
v___x_2608_ = l_Lean_MessageData_ofExpr(v___x_2607_);
v___x_2609_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2609_, 0, v___x_2606_);
lean_ctor_set(v___x_2609_, 1, v___x_2608_);
v___x_2610_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__12, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__12_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__12);
v___x_2611_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2611_, 0, v___x_2609_);
lean_ctor_set(v___x_2611_, 1, v___x_2610_);
v___x_2612_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v_cls_2528_, v___x_2611_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_);
if (lean_obj_tag(v___x_2612_) == 0)
{
lean_dec_ref_known(v___x_2612_, 1);
v___y_2593_ = v___y_2535_;
v___y_2594_ = v___y_2536_;
v___y_2595_ = v___y_2537_;
v___y_2596_ = v___y_2538_;
v___y_2597_ = v___y_2539_;
v___y_2598_ = v___y_2540_;
goto v___jp_2592_;
}
else
{
lean_object* v_a_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2620_; 
lean_dec_ref(v___f_2591_);
lean_dec(v_val_2552_);
v_a_2613_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2620_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2620_ == 0)
{
v___x_2615_ = v___x_2612_;
v_isShared_2616_ = v_isSharedCheck_2620_;
goto v_resetjp_2614_;
}
else
{
lean_inc(v_a_2613_);
lean_dec(v___x_2612_);
v___x_2615_ = lean_box(0);
v_isShared_2616_ = v_isSharedCheck_2620_;
goto v_resetjp_2614_;
}
v_resetjp_2614_:
{
lean_object* v___x_2618_; 
if (v_isShared_2616_ == 0)
{
v___x_2618_ = v___x_2615_;
goto v_reusejp_2617_;
}
else
{
lean_object* v_reuseFailAlloc_2619_; 
v_reuseFailAlloc_2619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2619_, 0, v_a_2613_);
v___x_2618_ = v_reuseFailAlloc_2619_;
goto v_reusejp_2617_;
}
v_reusejp_2617_:
{
return v___x_2618_;
}
}
}
}
}
else
{
lean_object* v_a_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2628_; 
lean_dec_ref(v___f_2591_);
lean_dec(v_val_2552_);
lean_dec(v_cls_2528_);
v_a_2621_ = lean_ctor_get(v___x_2603_, 0);
v_isSharedCheck_2628_ = !lean_is_exclusive(v___x_2603_);
if (v_isSharedCheck_2628_ == 0)
{
v___x_2623_ = v___x_2603_;
v_isShared_2624_ = v_isSharedCheck_2628_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_a_2621_);
lean_dec(v___x_2603_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2628_;
goto v_resetjp_2622_;
}
v_resetjp_2622_:
{
lean_object* v___x_2626_; 
if (v_isShared_2624_ == 0)
{
v___x_2626_ = v___x_2623_;
goto v_reusejp_2625_;
}
else
{
lean_object* v_reuseFailAlloc_2627_; 
v_reuseFailAlloc_2627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2627_, 0, v_a_2621_);
v___x_2626_ = v_reuseFailAlloc_2627_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
return v___x_2626_;
}
}
}
v___jp_2592_:
{
lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; 
v___x_2599_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__7);
v___x_2600_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__8));
v___x_2601_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2601_, 0, v_val_2552_);
lean_ctor_set(v___x_2601_, 1, v___x_2599_);
lean_ctor_set(v___x_2601_, 2, v___x_2600_);
v___x_2602_ = l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_run_x27___redArg(v___f_2591_, v___x_2601_, v___y_2593_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_);
return v___x_2602_;
}
}
}
else
{
lean_object* v_toCold_2629_; lean_object* v_inheritedTraceOptions_2630_; lean_object* v___x_2631_; 
lean_dec(v___x_2553_);
lean_dec(v_val_2552_);
lean_dec_ref(v_P_2529_);
lean_dec_ref(v_lhs_2525_);
v_toCold_2629_ = lean_ctor_get(v___y_2539_, 0);
v_inheritedTraceOptions_2630_ = lean_ctor_get(v_toCold_2629_, 11);
lean_inc(v___y_2540_);
lean_inc_ref(v___y_2539_);
lean_inc(v___y_2538_);
lean_inc_ref(v___y_2537_);
lean_inc(v___y_2536_);
lean_inc_ref(v___y_2535_);
lean_inc(v___y_2534_);
lean_inc_ref(v___y_2533_);
lean_inc(v___y_2532_);
lean_inc_ref(v_inheritedTraceOptions_2630_);
v___x_2631_ = lean_apply_11(v___f_2530_, v_inheritedTraceOptions_2630_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, lean_box(0));
if (lean_obj_tag(v___x_2631_) == 0)
{
lean_object* v_a_2632_; uint8_t v___x_2633_; 
v_a_2632_ = lean_ctor_get(v___x_2631_, 0);
lean_inc(v_a_2632_);
lean_dec_ref_known(v___x_2631_, 1);
v___x_2633_ = lean_unbox(v_a_2632_);
lean_dec(v_a_2632_);
if (v___x_2633_ == 0)
{
lean_dec(v_cls_2528_);
lean_dec_ref(v_rhs_2526_);
goto v___jp_2545_;
}
else
{
lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; 
v___x_2634_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14);
v___x_2635_ = l_Lean_indentExpr(v_rhs_2526_);
v___x_2636_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2636_, 0, v___x_2634_);
lean_ctor_set(v___x_2636_, 1, v___x_2635_);
v___x_2637_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v_cls_2528_, v___x_2636_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_);
if (lean_obj_tag(v___x_2637_) == 0)
{
lean_dec_ref_known(v___x_2637_, 1);
goto v___jp_2545_;
}
else
{
lean_object* v_a_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2645_; 
v_a_2638_ = lean_ctor_get(v___x_2637_, 0);
v_isSharedCheck_2645_ = !lean_is_exclusive(v___x_2637_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2640_ = v___x_2637_;
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
else
{
lean_inc(v_a_2638_);
lean_dec(v___x_2637_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___x_2643_; 
if (v_isShared_2641_ == 0)
{
v___x_2643_ = v___x_2640_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v_a_2638_);
v___x_2643_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
return v___x_2643_;
}
}
}
}
}
else
{
lean_object* v_a_2646_; lean_object* v___x_2648_; uint8_t v_isShared_2649_; uint8_t v_isSharedCheck_2653_; 
lean_dec(v_cls_2528_);
lean_dec_ref(v_rhs_2526_);
v_a_2646_ = lean_ctor_get(v___x_2631_, 0);
v_isSharedCheck_2653_ = !lean_is_exclusive(v___x_2631_);
if (v_isSharedCheck_2653_ == 0)
{
v___x_2648_ = v___x_2631_;
v_isShared_2649_ = v_isSharedCheck_2653_;
goto v_resetjp_2647_;
}
else
{
lean_inc(v_a_2646_);
lean_dec(v___x_2631_);
v___x_2648_ = lean_box(0);
v_isShared_2649_ = v_isSharedCheck_2653_;
goto v_resetjp_2647_;
}
v_resetjp_2647_:
{
lean_object* v___x_2651_; 
if (v_isShared_2649_ == 0)
{
v___x_2651_ = v___x_2648_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2652_; 
v_reuseFailAlloc_2652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2652_, 0, v_a_2646_);
v___x_2651_ = v_reuseFailAlloc_2652_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
return v___x_2651_;
}
}
}
}
}
else
{
lean_object* v_toCold_2654_; lean_object* v_inheritedTraceOptions_2655_; lean_object* v___x_2656_; 
lean_dec(v___x_2551_);
lean_dec_ref(v_P_2529_);
lean_dec_ref(v_rhs_2526_);
v_toCold_2654_ = lean_ctor_get(v___y_2539_, 0);
v_inheritedTraceOptions_2655_ = lean_ctor_get(v_toCold_2654_, 11);
lean_inc(v___y_2540_);
lean_inc_ref(v___y_2539_);
lean_inc(v___y_2538_);
lean_inc_ref(v___y_2537_);
lean_inc(v___y_2536_);
lean_inc_ref(v___y_2535_);
lean_inc(v___y_2534_);
lean_inc_ref(v___y_2533_);
lean_inc(v___y_2532_);
lean_inc_ref(v_inheritedTraceOptions_2655_);
v___x_2656_ = lean_apply_11(v___f_2530_, v_inheritedTraceOptions_2655_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, lean_box(0));
if (lean_obj_tag(v___x_2656_) == 0)
{
lean_object* v_a_2657_; uint8_t v___x_2658_; 
v_a_2657_ = lean_ctor_get(v___x_2656_, 0);
lean_inc(v_a_2657_);
lean_dec_ref_known(v___x_2656_, 1);
v___x_2658_ = lean_unbox(v_a_2657_);
lean_dec(v_a_2657_);
if (v___x_2658_ == 0)
{
lean_dec(v_cls_2528_);
lean_dec_ref(v_lhs_2525_);
goto v___jp_2548_;
}
else
{
lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; 
v___x_2659_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14);
v___x_2660_ = l_Lean_indentExpr(v_lhs_2525_);
v___x_2661_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2661_, 0, v___x_2659_);
lean_ctor_set(v___x_2661_, 1, v___x_2660_);
v___x_2662_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v_cls_2528_, v___x_2661_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_);
if (lean_obj_tag(v___x_2662_) == 0)
{
lean_dec_ref_known(v___x_2662_, 1);
goto v___jp_2548_;
}
else
{
lean_object* v_a_2663_; lean_object* v___x_2665_; uint8_t v_isShared_2666_; uint8_t v_isSharedCheck_2670_; 
v_a_2663_ = lean_ctor_get(v___x_2662_, 0);
v_isSharedCheck_2670_ = !lean_is_exclusive(v___x_2662_);
if (v_isSharedCheck_2670_ == 0)
{
v___x_2665_ = v___x_2662_;
v_isShared_2666_ = v_isSharedCheck_2670_;
goto v_resetjp_2664_;
}
else
{
lean_inc(v_a_2663_);
lean_dec(v___x_2662_);
v___x_2665_ = lean_box(0);
v_isShared_2666_ = v_isSharedCheck_2670_;
goto v_resetjp_2664_;
}
v_resetjp_2664_:
{
lean_object* v___x_2668_; 
if (v_isShared_2666_ == 0)
{
v___x_2668_ = v___x_2665_;
goto v_reusejp_2667_;
}
else
{
lean_object* v_reuseFailAlloc_2669_; 
v_reuseFailAlloc_2669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2669_, 0, v_a_2663_);
v___x_2668_ = v_reuseFailAlloc_2669_;
goto v_reusejp_2667_;
}
v_reusejp_2667_:
{
return v___x_2668_;
}
}
}
}
}
else
{
lean_object* v_a_2671_; lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2678_; 
lean_dec(v_cls_2528_);
lean_dec_ref(v_lhs_2525_);
v_a_2671_ = lean_ctor_get(v___x_2656_, 0);
v_isSharedCheck_2678_ = !lean_is_exclusive(v___x_2656_);
if (v_isSharedCheck_2678_ == 0)
{
v___x_2673_ = v___x_2656_;
v_isShared_2674_ = v_isSharedCheck_2678_;
goto v_resetjp_2672_;
}
else
{
lean_inc(v_a_2671_);
lean_dec(v___x_2656_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2678_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
lean_object* v___x_2676_; 
if (v_isShared_2674_ == 0)
{
v___x_2676_ = v___x_2673_;
goto v_reusejp_2675_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v_a_2671_);
v___x_2676_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2675_;
}
v_reusejp_2675_:
{
return v___x_2676_;
}
}
}
}
v___jp_2542_:
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2543_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_2543_, 0, v___x_2527_);
lean_ctor_set_uint8(v___x_2543_, 1, v___x_2527_);
v___x_2544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2543_);
return v___x_2544_;
}
v___jp_2545_:
{
lean_object* v___x_2546_; lean_object* v___x_2547_; 
v___x_2546_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_2546_, 0, v___x_2527_);
lean_ctor_set_uint8(v___x_2546_, 1, v___x_2527_);
v___x_2547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2547_, 0, v___x_2546_);
return v___x_2547_;
}
v___jp_2548_:
{
lean_object* v___x_2549_; lean_object* v___x_2550_; 
v___x_2549_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_2549_, 0, v___x_2527_);
lean_ctor_set_uint8(v___x_2549_, 1, v___x_2527_);
v___x_2550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2550_, 0, v___x_2549_);
return v___x_2550_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__8___boxed(lean_object** _args){
lean_object* v_lhs_2679_ = _args[0];
lean_object* v_rhs_2680_ = _args[1];
lean_object* v___x_2681_ = _args[2];
lean_object* v_cls_2682_ = _args[3];
lean_object* v_P_2683_ = _args[4];
lean_object* v___f_2684_ = _args[5];
lean_object* v_____r_2685_ = _args[6];
lean_object* v___y_2686_ = _args[7];
lean_object* v___y_2687_ = _args[8];
lean_object* v___y_2688_ = _args[9];
lean_object* v___y_2689_ = _args[10];
lean_object* v___y_2690_ = _args[11];
lean_object* v___y_2691_ = _args[12];
lean_object* v___y_2692_ = _args[13];
lean_object* v___y_2693_ = _args[14];
lean_object* v___y_2694_ = _args[15];
lean_object* v___y_2695_ = _args[16];
_start:
{
uint8_t v___x_191779__boxed_2696_; lean_object* v_res_2697_; 
v___x_191779__boxed_2696_ = lean_unbox(v___x_2681_);
v_res_2697_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__8(v_lhs_2679_, v_rhs_2680_, v___x_191779__boxed_2696_, v_cls_2682_, v_P_2683_, v___f_2684_, v_____r_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_);
lean_dec(v___y_2694_);
lean_dec_ref(v___y_2693_);
lean_dec(v___y_2692_);
lean_dec_ref(v___y_2691_);
lean_dec(v___y_2690_);
lean_dec_ref(v___y_2689_);
lean_dec(v___y_2688_);
lean_dec_ref(v___y_2687_);
lean_dec(v___y_2686_);
return v_res_2697_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__5(lean_object* v_e_2698_){
_start:
{
if (lean_obj_tag(v_e_2698_) == 0)
{
uint8_t v___x_2699_; 
v___x_2699_ = 2;
return v___x_2699_;
}
else
{
uint8_t v___x_2700_; 
v___x_2700_ = 0;
return v___x_2700_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__5___boxed(lean_object* v_e_2701_){
_start:
{
uint8_t v_res_2702_; lean_object* v_r_2703_; 
v_res_2702_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__5(v_e_2701_);
lean_dec_ref(v_e_2701_);
v_r_2703_ = lean_box(v_res_2702_);
return v_r_2703_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__4___redArg(lean_object* v_x_2704_){
_start:
{
if (lean_obj_tag(v_x_2704_) == 0)
{
lean_object* v_a_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2713_; 
v_a_2706_ = lean_ctor_get(v_x_2704_, 0);
v_isSharedCheck_2713_ = !lean_is_exclusive(v_x_2704_);
if (v_isSharedCheck_2713_ == 0)
{
v___x_2708_ = v_x_2704_;
v_isShared_2709_ = v_isSharedCheck_2713_;
goto v_resetjp_2707_;
}
else
{
lean_inc(v_a_2706_);
lean_dec(v_x_2704_);
v___x_2708_ = lean_box(0);
v_isShared_2709_ = v_isSharedCheck_2713_;
goto v_resetjp_2707_;
}
v_resetjp_2707_:
{
lean_object* v___x_2711_; 
if (v_isShared_2709_ == 0)
{
lean_ctor_set_tag(v___x_2708_, 1);
v___x_2711_ = v___x_2708_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v_a_2706_);
v___x_2711_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
return v___x_2711_;
}
}
}
else
{
lean_object* v_a_2714_; lean_object* v___x_2716_; uint8_t v_isShared_2717_; uint8_t v_isSharedCheck_2721_; 
v_a_2714_ = lean_ctor_get(v_x_2704_, 0);
v_isSharedCheck_2721_ = !lean_is_exclusive(v_x_2704_);
if (v_isSharedCheck_2721_ == 0)
{
v___x_2716_ = v_x_2704_;
v_isShared_2717_ = v_isSharedCheck_2721_;
goto v_resetjp_2715_;
}
else
{
lean_inc(v_a_2714_);
lean_dec(v_x_2704_);
v___x_2716_ = lean_box(0);
v_isShared_2717_ = v_isSharedCheck_2721_;
goto v_resetjp_2715_;
}
v_resetjp_2715_:
{
lean_object* v___x_2719_; 
if (v_isShared_2717_ == 0)
{
lean_ctor_set_tag(v___x_2716_, 0);
v___x_2719_ = v___x_2716_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v_a_2714_);
v___x_2719_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
return v___x_2719_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__4___redArg___boxed(lean_object* v_x_2722_, lean_object* v___y_2723_){
_start:
{
lean_object* v_res_2724_; 
v_res_2724_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__4___redArg(v_x_2722_);
return v_res_2724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__6(lean_object* v_opts_2725_, lean_object* v_opt_2726_){
_start:
{
lean_object* v_name_2727_; lean_object* v_defValue_2728_; lean_object* v_map_2729_; lean_object* v___x_2730_; 
v_name_2727_ = lean_ctor_get(v_opt_2726_, 0);
v_defValue_2728_ = lean_ctor_get(v_opt_2726_, 1);
v_map_2729_ = lean_ctor_get(v_opts_2725_, 0);
v___x_2730_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2729_, v_name_2727_);
if (lean_obj_tag(v___x_2730_) == 0)
{
lean_inc(v_defValue_2728_);
return v_defValue_2728_;
}
else
{
lean_object* v_val_2731_; 
v_val_2731_ = lean_ctor_get(v___x_2730_, 0);
lean_inc(v_val_2731_);
lean_dec_ref_known(v___x_2730_, 1);
if (lean_obj_tag(v_val_2731_) == 3)
{
lean_object* v_v_2732_; 
v_v_2732_ = lean_ctor_get(v_val_2731_, 0);
lean_inc(v_v_2732_);
lean_dec_ref_known(v_val_2731_, 1);
return v_v_2732_;
}
else
{
lean_dec(v_val_2731_);
lean_inc(v_defValue_2728_);
return v_defValue_2728_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__6___boxed(lean_object* v_opts_2733_, lean_object* v_opt_2734_){
_start:
{
lean_object* v_res_2735_; 
v_res_2735_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__6(v_opts_2733_, v_opt_2734_);
lean_dec_ref(v_opt_2734_);
lean_dec_ref(v_opts_2733_);
return v_res_2735_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__3_spec__4(size_t v_sz_2736_, size_t v_i_2737_, lean_object* v_bs_2738_){
_start:
{
uint8_t v___x_2739_; 
v___x_2739_ = lean_usize_dec_lt(v_i_2737_, v_sz_2736_);
if (v___x_2739_ == 0)
{
return v_bs_2738_;
}
else
{
lean_object* v_v_2740_; lean_object* v_msg_2741_; lean_object* v___x_2742_; lean_object* v_bs_x27_2743_; size_t v___x_2744_; size_t v___x_2745_; lean_object* v___x_2746_; 
v_v_2740_ = lean_array_uget_borrowed(v_bs_2738_, v_i_2737_);
v_msg_2741_ = lean_ctor_get(v_v_2740_, 1);
lean_inc_ref(v_msg_2741_);
v___x_2742_ = lean_unsigned_to_nat(0u);
v_bs_x27_2743_ = lean_array_uset(v_bs_2738_, v_i_2737_, v___x_2742_);
v___x_2744_ = ((size_t)1ULL);
v___x_2745_ = lean_usize_add(v_i_2737_, v___x_2744_);
v___x_2746_ = lean_array_uset(v_bs_x27_2743_, v_i_2737_, v_msg_2741_);
v_i_2737_ = v___x_2745_;
v_bs_2738_ = v___x_2746_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__3_spec__4___boxed(lean_object* v_sz_2748_, lean_object* v_i_2749_, lean_object* v_bs_2750_){
_start:
{
size_t v_sz_boxed_2751_; size_t v_i_boxed_2752_; lean_object* v_res_2753_; 
v_sz_boxed_2751_ = lean_unbox_usize(v_sz_2748_);
lean_dec(v_sz_2748_);
v_i_boxed_2752_ = lean_unbox_usize(v_i_2749_);
lean_dec(v_i_2749_);
v_res_2753_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__3_spec__4(v_sz_boxed_2751_, v_i_boxed_2752_, v_bs_2750_);
return v_res_2753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__3___redArg(lean_object* v_oldTraces_2754_, lean_object* v_data_2755_, lean_object* v_ref_2756_, lean_object* v_msg_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_){
_start:
{
lean_object* v_toCold_2763_; lean_object* v_currRecDepth_2764_; lean_object* v_ref_2765_; uint16_t v_optionFlags_2766_; uint8_t v_suppressElabErrors_2767_; uint8_t v_checkDeprecated_2768_; uint8_t v_isRecordingDeps_2769_; lean_object* v_ref_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v_traceState_2773_; lean_object* v_traces_2774_; lean_object* v___x_2775_; size_t v_sz_2776_; size_t v___x_2777_; lean_object* v___x_2778_; lean_object* v_msg_2779_; lean_object* v___x_2780_; lean_object* v_a_2781_; lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2819_; 
v_toCold_2763_ = lean_ctor_get(v___y_2760_, 0);
v_currRecDepth_2764_ = lean_ctor_get(v___y_2760_, 1);
v_ref_2765_ = lean_ctor_get(v___y_2760_, 2);
v_optionFlags_2766_ = lean_ctor_get_uint16(v___y_2760_, sizeof(void*)*3);
v_suppressElabErrors_2767_ = lean_ctor_get_uint8(v___y_2760_, sizeof(void*)*3 + 2);
v_checkDeprecated_2768_ = lean_ctor_get_uint8(v___y_2760_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2769_ = lean_ctor_get_uint8(v___y_2760_, sizeof(void*)*3 + 4);
v_ref_2770_ = l_Lean_replaceRef(v_ref_2756_, v_ref_2765_);
lean_inc(v_currRecDepth_2764_);
lean_inc_ref(v_toCold_2763_);
v___x_2771_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2771_, 0, v_toCold_2763_);
lean_ctor_set(v___x_2771_, 1, v_currRecDepth_2764_);
lean_ctor_set(v___x_2771_, 2, v_ref_2770_);
lean_ctor_set_uint16(v___x_2771_, sizeof(void*)*3, v_optionFlags_2766_);
lean_ctor_set_uint8(v___x_2771_, sizeof(void*)*3 + 2, v_suppressElabErrors_2767_);
lean_ctor_set_uint8(v___x_2771_, sizeof(void*)*3 + 3, v_checkDeprecated_2768_);
lean_ctor_set_uint8(v___x_2771_, sizeof(void*)*3 + 4, v_isRecordingDeps_2769_);
v___x_2772_ = lean_st_ref_get(v___y_2761_);
v_traceState_2773_ = lean_ctor_get(v___x_2772_, 4);
lean_inc_ref(v_traceState_2773_);
lean_dec(v___x_2772_);
v_traces_2774_ = lean_ctor_get(v_traceState_2773_, 0);
lean_inc_ref(v_traces_2774_);
lean_dec_ref(v_traceState_2773_);
v___x_2775_ = l_Lean_PersistentArray_toArray___redArg(v_traces_2774_);
lean_dec_ref(v_traces_2774_);
v_sz_2776_ = lean_array_size(v___x_2775_);
v___x_2777_ = ((size_t)0ULL);
v___x_2778_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__3_spec__4(v_sz_2776_, v___x_2777_, v___x_2775_);
v_msg_2779_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_2779_, 0, v_data_2755_);
lean_ctor_set(v_msg_2779_, 1, v_msg_2757_);
lean_ctor_set(v_msg_2779_, 2, v___x_2778_);
v___x_2780_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1_spec__1(v_msg_2779_, v___y_2758_, v___y_2759_, v___x_2771_, v___y_2761_);
lean_dec_ref_known(v___x_2771_, 3);
v_a_2781_ = lean_ctor_get(v___x_2780_, 0);
v_isSharedCheck_2819_ = !lean_is_exclusive(v___x_2780_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2783_ = v___x_2780_;
v_isShared_2784_ = v_isSharedCheck_2819_;
goto v_resetjp_2782_;
}
else
{
lean_inc(v_a_2781_);
lean_dec(v___x_2780_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2819_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
lean_object* v___x_2785_; lean_object* v_traceState_2786_; lean_object* v_env_2787_; lean_object* v_nextMacroScope_2788_; lean_object* v_ngen_2789_; lean_object* v_auxDeclNGen_2790_; lean_object* v_cache_2791_; lean_object* v_recordedDeps_2792_; lean_object* v_messages_2793_; lean_object* v_infoState_2794_; lean_object* v_snapshotTasks_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2818_; 
v___x_2785_ = lean_st_ref_take(v___y_2761_);
v_traceState_2786_ = lean_ctor_get(v___x_2785_, 4);
v_env_2787_ = lean_ctor_get(v___x_2785_, 0);
v_nextMacroScope_2788_ = lean_ctor_get(v___x_2785_, 1);
v_ngen_2789_ = lean_ctor_get(v___x_2785_, 2);
v_auxDeclNGen_2790_ = lean_ctor_get(v___x_2785_, 3);
v_cache_2791_ = lean_ctor_get(v___x_2785_, 5);
v_recordedDeps_2792_ = lean_ctor_get(v___x_2785_, 6);
v_messages_2793_ = lean_ctor_get(v___x_2785_, 7);
v_infoState_2794_ = lean_ctor_get(v___x_2785_, 8);
v_snapshotTasks_2795_ = lean_ctor_get(v___x_2785_, 9);
v_isSharedCheck_2818_ = !lean_is_exclusive(v___x_2785_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2797_ = v___x_2785_;
v_isShared_2798_ = v_isSharedCheck_2818_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_snapshotTasks_2795_);
lean_inc(v_infoState_2794_);
lean_inc(v_messages_2793_);
lean_inc(v_recordedDeps_2792_);
lean_inc(v_cache_2791_);
lean_inc(v_traceState_2786_);
lean_inc(v_auxDeclNGen_2790_);
lean_inc(v_ngen_2789_);
lean_inc(v_nextMacroScope_2788_);
lean_inc(v_env_2787_);
lean_dec(v___x_2785_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2818_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
uint64_t v_tid_2799_; lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2816_; 
v_tid_2799_ = lean_ctor_get_uint64(v_traceState_2786_, sizeof(void*)*1);
v_isSharedCheck_2816_ = !lean_is_exclusive(v_traceState_2786_);
if (v_isSharedCheck_2816_ == 0)
{
lean_object* v_unused_2817_; 
v_unused_2817_ = lean_ctor_get(v_traceState_2786_, 0);
lean_dec(v_unused_2817_);
v___x_2801_ = v_traceState_2786_;
v_isShared_2802_ = v_isSharedCheck_2816_;
goto v_resetjp_2800_;
}
else
{
lean_dec(v_traceState_2786_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2816_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2807_; 
v___x_2803_ = lean_box(0);
v___x_2804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2804_, 0, v_ref_2756_);
lean_ctor_set(v___x_2804_, 1, v_a_2781_);
v___x_2805_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_2754_, v___x_2804_);
if (v_isShared_2802_ == 0)
{
lean_ctor_set(v___x_2801_, 0, v___x_2805_);
v___x_2807_ = v___x_2801_;
goto v_reusejp_2806_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v___x_2805_);
lean_ctor_set_uint64(v_reuseFailAlloc_2815_, sizeof(void*)*1, v_tid_2799_);
v___x_2807_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2806_;
}
v_reusejp_2806_:
{
lean_object* v___x_2809_; 
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 4, v___x_2807_);
v___x_2809_ = v___x_2797_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v_env_2787_);
lean_ctor_set(v_reuseFailAlloc_2814_, 1, v_nextMacroScope_2788_);
lean_ctor_set(v_reuseFailAlloc_2814_, 2, v_ngen_2789_);
lean_ctor_set(v_reuseFailAlloc_2814_, 3, v_auxDeclNGen_2790_);
lean_ctor_set(v_reuseFailAlloc_2814_, 4, v___x_2807_);
lean_ctor_set(v_reuseFailAlloc_2814_, 5, v_cache_2791_);
lean_ctor_set(v_reuseFailAlloc_2814_, 6, v_recordedDeps_2792_);
lean_ctor_set(v_reuseFailAlloc_2814_, 7, v_messages_2793_);
lean_ctor_set(v_reuseFailAlloc_2814_, 8, v_infoState_2794_);
lean_ctor_set(v_reuseFailAlloc_2814_, 9, v_snapshotTasks_2795_);
v___x_2809_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
lean_object* v___x_2810_; lean_object* v___x_2812_; 
v___x_2810_ = lean_st_ref_put(v___y_2761_, v___x_2809_);
if (v_isShared_2784_ == 0)
{
lean_ctor_set(v___x_2783_, 0, v___x_2803_);
v___x_2812_ = v___x_2783_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v___x_2803_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
return v___x_2812_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__3___redArg___boxed(lean_object* v_oldTraces_2820_, lean_object* v_data_2821_, lean_object* v_ref_2822_, lean_object* v_msg_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_){
_start:
{
lean_object* v_res_2829_; 
v_res_2829_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__3___redArg(v_oldTraces_2820_, v_data_2821_, v_ref_2822_, v_msg_2823_, v___y_2824_, v___y_2825_, v___y_2826_, v___y_2827_);
lean_dec(v___y_2827_);
lean_dec_ref(v___y_2826_);
lean_dec(v___y_2825_);
lean_dec_ref(v___y_2824_);
return v_res_2829_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3___closed__1(void){
_start:
{
lean_object* v___x_2831_; lean_object* v___x_2832_; 
v___x_2831_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3___closed__0));
v___x_2832_ = l_Lean_stringToMessageData(v___x_2831_);
return v___x_2832_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3___closed__2(void){
_start:
{
lean_object* v___x_2833_; double v___x_2834_; 
v___x_2833_ = lean_unsigned_to_nat(1000u);
v___x_2834_ = lean_float_of_nat(v___x_2833_);
return v___x_2834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3(lean_object* v_cls_2835_, uint8_t v_collapsed_2836_, lean_object* v_tag_2837_, lean_object* v_opts_2838_, uint8_t v_clsEnabled_2839_, lean_object* v_oldTraces_2840_, lean_object* v_msg_2841_, lean_object* v_resStartStop_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_){
_start:
{
lean_object* v_fst_2853_; lean_object* v_snd_2854_; lean_object* v___y_2856_; lean_object* v___y_2857_; lean_object* v_data_2858_; lean_object* v_fst_2869_; lean_object* v_snd_2870_; lean_object* v___x_2871_; uint8_t v___x_2872_; lean_object* v___y_2874_; lean_object* v_a_2875_; uint8_t v___y_2890_; double v___y_2922_; 
v_fst_2853_ = lean_ctor_get(v_resStartStop_2842_, 0);
lean_inc(v_fst_2853_);
v_snd_2854_ = lean_ctor_get(v_resStartStop_2842_, 1);
lean_inc(v_snd_2854_);
lean_dec_ref(v_resStartStop_2842_);
v_fst_2869_ = lean_ctor_get(v_snd_2854_, 0);
lean_inc(v_fst_2869_);
v_snd_2870_ = lean_ctor_get(v_snd_2854_, 1);
lean_inc(v_snd_2870_);
lean_dec(v_snd_2854_);
v___x_2871_ = l_Lean_trace_profiler;
v___x_2872_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__2(v_opts_2838_, v___x_2871_);
if (v___x_2872_ == 0)
{
v___y_2890_ = v___x_2872_;
goto v___jp_2889_;
}
else
{
lean_object* v___x_2927_; uint8_t v___x_2928_; 
v___x_2927_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2928_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__2(v_opts_2838_, v___x_2927_);
if (v___x_2928_ == 0)
{
lean_object* v___x_2929_; lean_object* v___x_2930_; double v___x_2931_; double v___x_2932_; double v___x_2933_; 
v___x_2929_ = l_Lean_trace_profiler_threshold;
v___x_2930_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__6(v_opts_2838_, v___x_2929_);
v___x_2931_ = lean_float_of_nat(v___x_2930_);
v___x_2932_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3___closed__2);
v___x_2933_ = lean_float_div(v___x_2931_, v___x_2932_);
v___y_2922_ = v___x_2933_;
goto v___jp_2921_;
}
else
{
lean_object* v___x_2934_; lean_object* v___x_2935_; double v___x_2936_; 
v___x_2934_ = l_Lean_trace_profiler_threshold;
v___x_2935_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__6(v_opts_2838_, v___x_2934_);
v___x_2936_ = lean_float_of_nat(v___x_2935_);
v___y_2922_ = v___x_2936_;
goto v___jp_2921_;
}
}
v___jp_2855_:
{
lean_object* v___x_2859_; 
lean_inc(v___y_2857_);
v___x_2859_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__3___redArg(v_oldTraces_2840_, v_data_2858_, v___y_2857_, v___y_2856_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_);
if (lean_obj_tag(v___x_2859_) == 0)
{
lean_object* v___x_2860_; 
lean_dec_ref_known(v___x_2859_, 1);
v___x_2860_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__4___redArg(v_fst_2853_);
return v___x_2860_;
}
else
{
lean_object* v_a_2861_; lean_object* v___x_2863_; uint8_t v_isShared_2864_; uint8_t v_isSharedCheck_2868_; 
lean_dec(v_fst_2853_);
v_a_2861_ = lean_ctor_get(v___x_2859_, 0);
v_isSharedCheck_2868_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_2868_ == 0)
{
v___x_2863_ = v___x_2859_;
v_isShared_2864_ = v_isSharedCheck_2868_;
goto v_resetjp_2862_;
}
else
{
lean_inc(v_a_2861_);
lean_dec(v___x_2859_);
v___x_2863_ = lean_box(0);
v_isShared_2864_ = v_isSharedCheck_2868_;
goto v_resetjp_2862_;
}
v_resetjp_2862_:
{
lean_object* v___x_2866_; 
if (v_isShared_2864_ == 0)
{
v___x_2866_ = v___x_2863_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v_a_2861_);
v___x_2866_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
return v___x_2866_;
}
}
}
}
v___jp_2873_:
{
uint8_t v_result_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; double v___x_2879_; lean_object* v_data_2880_; 
v_result_2876_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__5(v_fst_2853_);
v___x_2877_ = lean_box(v_result_2876_);
v___x_2878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2878_, 0, v___x_2877_);
v___x_2879_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__0);
lean_inc_ref(v_tag_2837_);
lean_inc_ref(v___x_2878_);
lean_inc(v_cls_2835_);
v_data_2880_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2880_, 0, v_cls_2835_);
lean_ctor_set(v_data_2880_, 1, v___x_2878_);
lean_ctor_set(v_data_2880_, 2, v_tag_2837_);
lean_ctor_set_float(v_data_2880_, sizeof(void*)*3, v___x_2879_);
lean_ctor_set_float(v_data_2880_, sizeof(void*)*3 + 8, v___x_2879_);
lean_ctor_set_uint8(v_data_2880_, sizeof(void*)*3 + 16, v_collapsed_2836_);
if (v___x_2872_ == 0)
{
lean_dec_ref_known(v___x_2878_, 1);
lean_dec(v_snd_2870_);
lean_dec(v_fst_2869_);
lean_dec_ref(v_tag_2837_);
lean_dec(v_cls_2835_);
v___y_2856_ = v_a_2875_;
v___y_2857_ = v___y_2874_;
v_data_2858_ = v_data_2880_;
goto v___jp_2855_;
}
else
{
lean_object* v_data_2881_; double v___x_2882_; double v___x_2883_; 
lean_dec_ref_known(v_data_2880_, 3);
v_data_2881_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2881_, 0, v_cls_2835_);
lean_ctor_set(v_data_2881_, 1, v___x_2878_);
lean_ctor_set(v_data_2881_, 2, v_tag_2837_);
v___x_2882_ = lean_unbox_float(v_fst_2869_);
lean_dec(v_fst_2869_);
lean_ctor_set_float(v_data_2881_, sizeof(void*)*3, v___x_2882_);
v___x_2883_ = lean_unbox_float(v_snd_2870_);
lean_dec(v_snd_2870_);
lean_ctor_set_float(v_data_2881_, sizeof(void*)*3 + 8, v___x_2883_);
lean_ctor_set_uint8(v_data_2881_, sizeof(void*)*3 + 16, v_collapsed_2836_);
v___y_2856_ = v_a_2875_;
v___y_2857_ = v___y_2874_;
v_data_2858_ = v_data_2881_;
goto v___jp_2855_;
}
}
v___jp_2884_:
{
lean_object* v_ref_2885_; lean_object* v___x_2886_; 
v_ref_2885_ = lean_ctor_get(v___y_2850_, 2);
lean_inc(v___y_2851_);
lean_inc_ref(v___y_2850_);
lean_inc(v___y_2849_);
lean_inc_ref(v___y_2848_);
lean_inc(v___y_2847_);
lean_inc_ref(v___y_2846_);
lean_inc(v___y_2845_);
lean_inc_ref(v___y_2844_);
lean_inc(v___y_2843_);
lean_inc(v_fst_2853_);
v___x_2886_ = lean_apply_11(v_msg_2841_, v_fst_2853_, v___y_2843_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_, lean_box(0));
if (lean_obj_tag(v___x_2886_) == 0)
{
lean_object* v_a_2887_; 
v_a_2887_ = lean_ctor_get(v___x_2886_, 0);
lean_inc(v_a_2887_);
lean_dec_ref_known(v___x_2886_, 1);
v___y_2874_ = v_ref_2885_;
v_a_2875_ = v_a_2887_;
goto v___jp_2873_;
}
else
{
lean_object* v___x_2888_; 
lean_dec_ref_known(v___x_2886_, 1);
v___x_2888_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3___closed__1);
v___y_2874_ = v_ref_2885_;
v_a_2875_ = v___x_2888_;
goto v___jp_2873_;
}
}
v___jp_2889_:
{
if (v_clsEnabled_2839_ == 0)
{
if (v___y_2890_ == 0)
{
lean_object* v___x_2891_; lean_object* v_traceState_2892_; lean_object* v_env_2893_; lean_object* v_nextMacroScope_2894_; lean_object* v_ngen_2895_; lean_object* v_auxDeclNGen_2896_; lean_object* v_cache_2897_; lean_object* v_recordedDeps_2898_; lean_object* v_messages_2899_; lean_object* v_infoState_2900_; lean_object* v_snapshotTasks_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2920_; 
lean_dec(v_snd_2870_);
lean_dec(v_fst_2869_);
lean_dec_ref(v_msg_2841_);
lean_dec_ref(v_tag_2837_);
lean_dec(v_cls_2835_);
v___x_2891_ = lean_st_ref_take(v___y_2851_);
v_traceState_2892_ = lean_ctor_get(v___x_2891_, 4);
v_env_2893_ = lean_ctor_get(v___x_2891_, 0);
v_nextMacroScope_2894_ = lean_ctor_get(v___x_2891_, 1);
v_ngen_2895_ = lean_ctor_get(v___x_2891_, 2);
v_auxDeclNGen_2896_ = lean_ctor_get(v___x_2891_, 3);
v_cache_2897_ = lean_ctor_get(v___x_2891_, 5);
v_recordedDeps_2898_ = lean_ctor_get(v___x_2891_, 6);
v_messages_2899_ = lean_ctor_get(v___x_2891_, 7);
v_infoState_2900_ = lean_ctor_get(v___x_2891_, 8);
v_snapshotTasks_2901_ = lean_ctor_get(v___x_2891_, 9);
v_isSharedCheck_2920_ = !lean_is_exclusive(v___x_2891_);
if (v_isSharedCheck_2920_ == 0)
{
v___x_2903_ = v___x_2891_;
v_isShared_2904_ = v_isSharedCheck_2920_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_snapshotTasks_2901_);
lean_inc(v_infoState_2900_);
lean_inc(v_messages_2899_);
lean_inc(v_recordedDeps_2898_);
lean_inc(v_cache_2897_);
lean_inc(v_traceState_2892_);
lean_inc(v_auxDeclNGen_2896_);
lean_inc(v_ngen_2895_);
lean_inc(v_nextMacroScope_2894_);
lean_inc(v_env_2893_);
lean_dec(v___x_2891_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2920_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
uint64_t v_tid_2905_; lean_object* v_traces_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2919_; 
v_tid_2905_ = lean_ctor_get_uint64(v_traceState_2892_, sizeof(void*)*1);
v_traces_2906_ = lean_ctor_get(v_traceState_2892_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v_traceState_2892_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2908_ = v_traceState_2892_;
v_isShared_2909_ = v_isSharedCheck_2919_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_traces_2906_);
lean_dec(v_traceState_2892_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2919_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v___x_2910_; lean_object* v___x_2912_; 
v___x_2910_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2840_, v_traces_2906_);
lean_dec_ref(v_traces_2906_);
if (v_isShared_2909_ == 0)
{
lean_ctor_set(v___x_2908_, 0, v___x_2910_);
v___x_2912_ = v___x_2908_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v___x_2910_);
lean_ctor_set_uint64(v_reuseFailAlloc_2918_, sizeof(void*)*1, v_tid_2905_);
v___x_2912_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
lean_object* v___x_2914_; 
if (v_isShared_2904_ == 0)
{
lean_ctor_set(v___x_2903_, 4, v___x_2912_);
v___x_2914_ = v___x_2903_;
goto v_reusejp_2913_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v_env_2893_);
lean_ctor_set(v_reuseFailAlloc_2917_, 1, v_nextMacroScope_2894_);
lean_ctor_set(v_reuseFailAlloc_2917_, 2, v_ngen_2895_);
lean_ctor_set(v_reuseFailAlloc_2917_, 3, v_auxDeclNGen_2896_);
lean_ctor_set(v_reuseFailAlloc_2917_, 4, v___x_2912_);
lean_ctor_set(v_reuseFailAlloc_2917_, 5, v_cache_2897_);
lean_ctor_set(v_reuseFailAlloc_2917_, 6, v_recordedDeps_2898_);
lean_ctor_set(v_reuseFailAlloc_2917_, 7, v_messages_2899_);
lean_ctor_set(v_reuseFailAlloc_2917_, 8, v_infoState_2900_);
lean_ctor_set(v_reuseFailAlloc_2917_, 9, v_snapshotTasks_2901_);
v___x_2914_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2913_;
}
v_reusejp_2913_:
{
lean_object* v___x_2915_; lean_object* v___x_2916_; 
v___x_2915_ = lean_st_ref_put(v___y_2851_, v___x_2914_);
v___x_2916_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__4___redArg(v_fst_2853_);
return v___x_2916_;
}
}
}
}
}
else
{
goto v___jp_2884_;
}
}
else
{
goto v___jp_2884_;
}
}
v___jp_2921_:
{
double v___x_2923_; double v___x_2924_; double v___x_2925_; uint8_t v___x_2926_; 
v___x_2923_ = lean_unbox_float(v_snd_2870_);
v___x_2924_ = lean_unbox_float(v_fst_2869_);
v___x_2925_ = lean_float_sub(v___x_2923_, v___x_2924_);
v___x_2926_ = lean_float_decLt(v___y_2922_, v___x_2925_);
v___y_2890_ = v___x_2926_;
goto v___jp_2889_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3___boxed(lean_object** _args){
lean_object* v_cls_2937_ = _args[0];
lean_object* v_collapsed_2938_ = _args[1];
lean_object* v_tag_2939_ = _args[2];
lean_object* v_opts_2940_ = _args[3];
lean_object* v_clsEnabled_2941_ = _args[4];
lean_object* v_oldTraces_2942_ = _args[5];
lean_object* v_msg_2943_ = _args[6];
lean_object* v_resStartStop_2944_ = _args[7];
lean_object* v___y_2945_ = _args[8];
lean_object* v___y_2946_ = _args[9];
lean_object* v___y_2947_ = _args[10];
lean_object* v___y_2948_ = _args[11];
lean_object* v___y_2949_ = _args[12];
lean_object* v___y_2950_ = _args[13];
lean_object* v___y_2951_ = _args[14];
lean_object* v___y_2952_ = _args[15];
lean_object* v___y_2953_ = _args[16];
lean_object* v___y_2954_ = _args[17];
_start:
{
uint8_t v_collapsed_boxed_2955_; uint8_t v_clsEnabled_boxed_2956_; lean_object* v_res_2957_; 
v_collapsed_boxed_2955_ = lean_unbox(v_collapsed_2938_);
v_clsEnabled_boxed_2956_ = lean_unbox(v_clsEnabled_2941_);
v_res_2957_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3(v_cls_2937_, v_collapsed_boxed_2955_, v_tag_2939_, v_opts_2940_, v_clsEnabled_boxed_2956_, v_oldTraces_2942_, v_msg_2943_, v_resStartStop_2944_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_);
lean_dec(v___y_2953_);
lean_dec_ref(v___y_2952_);
lean_dec(v___y_2951_);
lean_dec_ref(v___y_2950_);
lean_dec(v___y_2949_);
lean_dec_ref(v___y_2948_);
lean_dec(v___y_2947_);
lean_dec_ref(v___y_2946_);
lean_dec(v___y_2945_);
lean_dec_ref(v_opts_2940_);
return v_res_2957_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__2(void){
_start:
{
lean_object* v___x_2961_; lean_object* v___x_2962_; 
v___x_2961_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__1));
v___x_2962_ = l_Lean_stringToMessageData(v___x_2961_);
return v___x_2962_;
}
}
static double _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__4(void){
_start:
{
lean_object* v___x_2964_; double v___x_2965_; 
v___x_2964_ = lean_unsigned_to_nat(1000000000u);
v___x_2965_ = lean_float_of_nat(v___x_2964_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing(lean_object* v_P_2966_, lean_object* v_lhs_2967_, lean_object* v_rhs_2968_, lean_object* v_a_2969_, lean_object* v_a_2970_, lean_object* v_a_2971_, lean_object* v_a_2972_, lean_object* v_a_2973_, lean_object* v_a_2974_, lean_object* v_a_2975_, lean_object* v_a_2976_, lean_object* v_a_2977_){
_start:
{
uint8_t v___y_2980_; lean_object* v___y_2990_; lean_object* v___y_2991_; lean_object* v___y_2992_; lean_object* v___y_2993_; lean_object* v___y_2994_; lean_object* v___y_2995_; lean_object* v___y_2996_; lean_object* v___y_2997_; lean_object* v_toCold_3002_; lean_object* v_options_3003_; lean_object* v_inheritedTraceOptions_3004_; uint8_t v_hasTrace_3005_; lean_object* v_cls_3006_; lean_object* v___f_3007_; lean_object* v___y_3009_; lean_object* v___y_3010_; lean_object* v___y_3011_; lean_object* v___y_3012_; lean_object* v___y_3013_; lean_object* v___y_3014_; lean_object* v___y_3015_; lean_object* v___y_3016_; lean_object* v___y_3017_; uint8_t v_____do__lift_3110_; lean_object* v___y_3111_; lean_object* v___y_3112_; lean_object* v___y_3113_; lean_object* v___y_3114_; lean_object* v___y_3115_; lean_object* v___y_3116_; lean_object* v___y_3117_; lean_object* v___y_3118_; lean_object* v___y_3119_; 
v_toCold_3002_ = lean_ctor_get(v_a_2976_, 0);
v_options_3003_ = lean_ctor_get(v_toCold_3002_, 2);
v_inheritedTraceOptions_3004_ = lean_ctor_get(v_toCold_3002_, 11);
v_hasTrace_3005_ = lean_ctor_get_uint8(v_options_3003_, sizeof(void*)*1);
v_cls_3006_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__3));
v___f_3007_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__0));
if (v_hasTrace_3005_ == 0)
{
lean_object* v___x_3133_; lean_object* v_a_3134_; uint8_t v___x_3135_; 
v___x_3133_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__0(v_cls_3006_, v_inheritedTraceOptions_3004_, v_a_2969_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
v_a_3134_ = lean_ctor_get(v___x_3133_, 0);
lean_inc(v_a_3134_);
lean_dec_ref(v___x_3133_);
v___x_3135_ = lean_unbox(v_a_3134_);
lean_dec(v_a_3134_);
v_____do__lift_3110_ = v___x_3135_;
v___y_3111_ = v_a_2969_;
v___y_3112_ = v_a_2970_;
v___y_3113_ = v_a_2971_;
v___y_3114_ = v_a_2972_;
v___y_3115_ = v_a_2973_;
v___y_3116_ = v_a_2974_;
v___y_3117_ = v_a_2975_;
v___y_3118_ = v_a_2976_;
v___y_3119_ = v_a_2977_;
goto v___jp_3109_;
}
else
{
lean_object* v___f_3136_; uint8_t v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; uint8_t v___x_3140_; lean_object* v___y_3142_; lean_object* v___y_3143_; lean_object* v_a_3144_; lean_object* v___y_3154_; lean_object* v___y_3155_; lean_object* v_a_3156_; lean_object* v___y_3159_; lean_object* v___y_3160_; lean_object* v___y_3161_; lean_object* v___y_3172_; lean_object* v___y_3173_; lean_object* v_a_3174_; lean_object* v___y_3187_; lean_object* v___y_3188_; lean_object* v_a_3189_; lean_object* v___y_3192_; lean_object* v___y_3193_; lean_object* v___y_3194_; 
v___f_3136_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__3));
v___x_3137_ = 0;
v___x_3138_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__1));
v___x_3139_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6);
v___x_3140_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3004_, v_options_3003_, v___x_3139_);
if (v___x_3140_ == 0)
{
lean_object* v___x_3237_; uint8_t v___x_3238_; 
v___x_3237_ = l_Lean_trace_profiler;
v___x_3238_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__2(v_options_3003_, v___x_3237_);
if (v___x_3238_ == 0)
{
lean_object* v___x_3239_; lean_object* v_a_3240_; uint8_t v___x_3241_; 
v___x_3239_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__0(v_cls_3006_, v_inheritedTraceOptions_3004_, v_a_2969_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
v_a_3240_ = lean_ctor_get(v___x_3239_, 0);
lean_inc(v_a_3240_);
lean_dec_ref(v___x_3239_);
v___x_3241_ = lean_unbox(v_a_3240_);
lean_dec(v_a_3240_);
v_____do__lift_3110_ = v___x_3241_;
v___y_3111_ = v_a_2969_;
v___y_3112_ = v_a_2970_;
v___y_3113_ = v_a_2971_;
v___y_3114_ = v_a_2972_;
v___y_3115_ = v_a_2973_;
v___y_3116_ = v_a_2974_;
v___y_3117_ = v_a_2975_;
v___y_3118_ = v_a_2976_;
v___y_3119_ = v_a_2977_;
goto v___jp_3109_;
}
else
{
goto v___jp_3204_;
}
}
else
{
goto v___jp_3204_;
}
v___jp_3141_:
{
lean_object* v___x_3145_; double v___x_3146_; double v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; 
v___x_3145_ = lean_io_get_num_heartbeats();
v___x_3146_ = lean_float_of_nat(v___y_3143_);
v___x_3147_ = lean_float_of_nat(v___x_3145_);
v___x_3148_ = lean_box_float(v___x_3146_);
v___x_3149_ = lean_box_float(v___x_3147_);
v___x_3150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3150_, 0, v___x_3148_);
lean_ctor_set(v___x_3150_, 1, v___x_3149_);
v___x_3151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3151_, 0, v_a_3144_);
lean_ctor_set(v___x_3151_, 1, v___x_3150_);
v___x_3152_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3(v_cls_3006_, v___x_3137_, v___x_3138_, v_options_3003_, v___x_3140_, v___y_3142_, v___f_3136_, v___x_3151_, v_a_2969_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
return v___x_3152_;
}
v___jp_3153_:
{
lean_object* v___x_3157_; 
v___x_3157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3157_, 0, v_a_3156_);
v___y_3142_ = v___y_3154_;
v___y_3143_ = v___y_3155_;
v_a_3144_ = v___x_3157_;
goto v___jp_3141_;
}
v___jp_3158_:
{
if (lean_obj_tag(v___y_3161_) == 0)
{
lean_object* v_a_3162_; lean_object* v___x_3164_; uint8_t v_isShared_3165_; uint8_t v_isSharedCheck_3169_; 
v_a_3162_ = lean_ctor_get(v___y_3161_, 0);
v_isSharedCheck_3169_ = !lean_is_exclusive(v___y_3161_);
if (v_isSharedCheck_3169_ == 0)
{
v___x_3164_ = v___y_3161_;
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
else
{
lean_inc(v_a_3162_);
lean_dec(v___y_3161_);
v___x_3164_ = lean_box(0);
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
v_resetjp_3163_:
{
lean_object* v___x_3167_; 
if (v_isShared_3165_ == 0)
{
lean_ctor_set_tag(v___x_3164_, 1);
v___x_3167_ = v___x_3164_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v_a_3162_);
v___x_3167_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3166_;
}
v_reusejp_3166_:
{
v___y_3142_ = v___y_3159_;
v___y_3143_ = v___y_3160_;
v_a_3144_ = v___x_3167_;
goto v___jp_3141_;
}
}
}
else
{
lean_object* v_a_3170_; 
v_a_3170_ = lean_ctor_get(v___y_3161_, 0);
lean_inc(v_a_3170_);
lean_dec_ref_known(v___y_3161_, 1);
v___y_3154_ = v___y_3159_;
v___y_3155_ = v___y_3160_;
v_a_3156_ = v_a_3170_;
goto v___jp_3153_;
}
}
v___jp_3171_:
{
lean_object* v___x_3175_; double v___x_3176_; double v___x_3177_; double v___x_3178_; double v___x_3179_; double v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; 
v___x_3175_ = lean_io_mono_nanos_now();
v___x_3176_ = lean_float_of_nat(v___y_3173_);
v___x_3177_ = lean_float_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__4);
v___x_3178_ = lean_float_div(v___x_3176_, v___x_3177_);
v___x_3179_ = lean_float_of_nat(v___x_3175_);
v___x_3180_ = lean_float_div(v___x_3179_, v___x_3177_);
v___x_3181_ = lean_box_float(v___x_3178_);
v___x_3182_ = lean_box_float(v___x_3180_);
v___x_3183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3183_, 0, v___x_3181_);
lean_ctor_set(v___x_3183_, 1, v___x_3182_);
v___x_3184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3184_, 0, v_a_3174_);
lean_ctor_set(v___x_3184_, 1, v___x_3183_);
v___x_3185_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3(v_cls_3006_, v___x_3137_, v___x_3138_, v_options_3003_, v___x_3140_, v___y_3172_, v___f_3136_, v___x_3184_, v_a_2969_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
return v___x_3185_;
}
v___jp_3186_:
{
lean_object* v___x_3190_; 
v___x_3190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3190_, 0, v_a_3189_);
v___y_3172_ = v___y_3187_;
v___y_3173_ = v___y_3188_;
v_a_3174_ = v___x_3190_;
goto v___jp_3171_;
}
v___jp_3191_:
{
if (lean_obj_tag(v___y_3194_) == 0)
{
lean_object* v_a_3195_; lean_object* v___x_3197_; uint8_t v_isShared_3198_; uint8_t v_isSharedCheck_3202_; 
v_a_3195_ = lean_ctor_get(v___y_3194_, 0);
v_isSharedCheck_3202_ = !lean_is_exclusive(v___y_3194_);
if (v_isSharedCheck_3202_ == 0)
{
v___x_3197_ = v___y_3194_;
v_isShared_3198_ = v_isSharedCheck_3202_;
goto v_resetjp_3196_;
}
else
{
lean_inc(v_a_3195_);
lean_dec(v___y_3194_);
v___x_3197_ = lean_box(0);
v_isShared_3198_ = v_isSharedCheck_3202_;
goto v_resetjp_3196_;
}
v_resetjp_3196_:
{
lean_object* v___x_3200_; 
if (v_isShared_3198_ == 0)
{
lean_ctor_set_tag(v___x_3197_, 1);
v___x_3200_ = v___x_3197_;
goto v_reusejp_3199_;
}
else
{
lean_object* v_reuseFailAlloc_3201_; 
v_reuseFailAlloc_3201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3201_, 0, v_a_3195_);
v___x_3200_ = v_reuseFailAlloc_3201_;
goto v_reusejp_3199_;
}
v_reusejp_3199_:
{
v___y_3172_ = v___y_3192_;
v___y_3173_ = v___y_3193_;
v_a_3174_ = v___x_3200_;
goto v___jp_3171_;
}
}
}
else
{
lean_object* v_a_3203_; 
v_a_3203_ = lean_ctor_get(v___y_3194_, 0);
lean_inc(v_a_3203_);
lean_dec_ref_known(v___y_3194_, 1);
v___y_3187_ = v___y_3192_;
v___y_3188_ = v___y_3193_;
v_a_3189_ = v_a_3203_;
goto v___jp_3186_;
}
}
v___jp_3204_:
{
lean_object* v___x_3205_; lean_object* v_a_3206_; lean_object* v___x_3207_; uint8_t v___x_3208_; 
v___x_3205_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__1___redArg(v_a_2977_);
v_a_3206_ = lean_ctor_get(v___x_3205_, 0);
lean_inc(v_a_3206_);
lean_dec_ref(v___x_3205_);
v___x_3207_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3208_ = l_Lean_Option_get___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__2(v_options_3003_, v___x_3207_);
if (v___x_3208_ == 0)
{
lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v_a_3211_; uint8_t v___x_3212_; 
v___x_3209_ = lean_io_mono_nanos_now();
v___x_3210_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__0(v_cls_3006_, v_inheritedTraceOptions_3004_, v_a_2969_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
v_a_3211_ = lean_ctor_get(v___x_3210_, 0);
lean_inc(v_a_3211_);
lean_dec_ref(v___x_3210_);
v___x_3212_ = lean_unbox(v_a_3211_);
lean_dec(v_a_3211_);
if (v___x_3212_ == 0)
{
lean_object* v___x_3213_; lean_object* v___x_3214_; 
v___x_3213_ = lean_box(0);
v___x_3214_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__8(v_lhs_2967_, v_rhs_2968_, v___x_3208_, v_cls_3006_, v_P_2966_, v___f_3007_, v___x_3213_, v_a_2969_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
v___y_3192_ = v_a_3206_;
v___y_3193_ = v___x_3209_;
v___y_3194_ = v___x_3214_;
goto v___jp_3191_;
}
else
{
lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3215_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__2);
lean_inc_ref(v_rhs_2968_);
lean_inc_ref(v_lhs_2967_);
lean_inc_ref(v_P_2966_);
v___x_3216_ = l_Lean_mkAppB(v_P_2966_, v_lhs_2967_, v_rhs_2968_);
v___x_3217_ = l_Lean_indentExpr(v___x_3216_);
v___x_3218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3218_, 0, v___x_3215_);
lean_ctor_set(v___x_3218_, 1, v___x_3217_);
v___x_3219_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v_cls_3006_, v___x_3218_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
if (lean_obj_tag(v___x_3219_) == 0)
{
lean_object* v_a_3220_; lean_object* v___x_3221_; 
v_a_3220_ = lean_ctor_get(v___x_3219_, 0);
lean_inc(v_a_3220_);
lean_dec_ref_known(v___x_3219_, 1);
v___x_3221_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__8(v_lhs_2967_, v_rhs_2968_, v___x_3208_, v_cls_3006_, v_P_2966_, v___f_3007_, v_a_3220_, v_a_2969_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
v___y_3192_ = v_a_3206_;
v___y_3193_ = v___x_3209_;
v___y_3194_ = v___x_3221_;
goto v___jp_3191_;
}
else
{
lean_object* v_a_3222_; 
lean_dec_ref(v_rhs_2968_);
lean_dec_ref(v_lhs_2967_);
lean_dec_ref(v_P_2966_);
v_a_3222_ = lean_ctor_get(v___x_3219_, 0);
lean_inc(v_a_3222_);
lean_dec_ref_known(v___x_3219_, 1);
v___y_3187_ = v_a_3206_;
v___y_3188_ = v___x_3209_;
v_a_3189_ = v_a_3222_;
goto v___jp_3186_;
}
}
}
else
{
lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v_a_3225_; uint8_t v___x_3226_; 
v___x_3223_ = lean_io_get_num_heartbeats();
v___x_3224_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__0(v_cls_3006_, v_inheritedTraceOptions_3004_, v_a_2969_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
v_a_3225_ = lean_ctor_get(v___x_3224_, 0);
lean_inc(v_a_3225_);
lean_dec_ref(v___x_3224_);
v___x_3226_ = lean_unbox(v_a_3225_);
lean_dec(v_a_3225_);
if (v___x_3226_ == 0)
{
lean_object* v___x_3227_; lean_object* v___x_3228_; 
v___x_3227_ = lean_box(0);
v___x_3228_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4(v_lhs_2967_, v_rhs_2968_, v_cls_3006_, v_P_2966_, v___f_3007_, v___x_3227_, v_a_2969_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
v___y_3159_ = v_a_3206_;
v___y_3160_ = v___x_3223_;
v___y_3161_ = v___x_3228_;
goto v___jp_3158_;
}
else
{
lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; 
v___x_3229_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__2);
lean_inc_ref(v_rhs_2968_);
lean_inc_ref(v_lhs_2967_);
lean_inc_ref(v_P_2966_);
v___x_3230_ = l_Lean_mkAppB(v_P_2966_, v_lhs_2967_, v_rhs_2968_);
v___x_3231_ = l_Lean_indentExpr(v___x_3230_);
v___x_3232_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3232_, 0, v___x_3229_);
lean_ctor_set(v___x_3232_, 1, v___x_3231_);
v___x_3233_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v_cls_3006_, v___x_3232_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
if (lean_obj_tag(v___x_3233_) == 0)
{
lean_object* v_a_3234_; lean_object* v___x_3235_; 
v_a_3234_ = lean_ctor_get(v___x_3233_, 0);
lean_inc(v_a_3234_);
lean_dec_ref_known(v___x_3233_, 1);
v___x_3235_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4(v_lhs_2967_, v_rhs_2968_, v_cls_3006_, v_P_2966_, v___f_3007_, v_a_3234_, v_a_2969_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_);
v___y_3159_ = v_a_3206_;
v___y_3160_ = v___x_3223_;
v___y_3161_ = v___x_3235_;
goto v___jp_3158_;
}
else
{
lean_object* v_a_3236_; 
lean_dec_ref(v_rhs_2968_);
lean_dec_ref(v_lhs_2967_);
lean_dec_ref(v_P_2966_);
v_a_3236_ = lean_ctor_get(v___x_3233_, 0);
lean_inc(v_a_3236_);
lean_dec_ref_known(v___x_3233_, 1);
v___y_3154_ = v_a_3206_;
v___y_3155_ = v___x_3223_;
v_a_3156_ = v_a_3236_;
goto v___jp_3153_;
}
}
}
}
}
v___jp_2979_:
{
lean_object* v___x_2981_; lean_object* v___x_2982_; 
v___x_2981_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_2981_, 0, v___y_2980_);
lean_ctor_set_uint8(v___x_2981_, 1, v___y_2980_);
v___x_2982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2982_, 0, v___x_2981_);
return v___x_2982_;
}
v___jp_2983_:
{
lean_object* v___x_2984_; lean_object* v___x_2985_; 
v___x_2984_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__2___closed__0));
v___x_2985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2985_, 0, v___x_2984_);
return v___x_2985_;
}
v___jp_2986_:
{
lean_object* v___x_2987_; lean_object* v___x_2988_; 
v___x_2987_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__2___closed__0));
v___x_2988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2988_, 0, v___x_2987_);
return v___x_2988_;
}
v___jp_2989_:
{
lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; 
v___x_2998_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__7, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__7);
v___x_2999_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__8));
v___x_3000_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3000_, 0, v___y_2991_);
lean_ctor_set(v___x_3000_, 1, v___x_2998_);
lean_ctor_set(v___x_3000_, 2, v___x_2999_);
v___x_3001_ = l_Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_run_x27___redArg(v___y_2990_, v___x_3000_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_);
return v___x_3001_;
}
v___jp_3008_:
{
lean_object* v___x_3018_; 
v___x_3018_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofApp2_x3f(v_lhs_2967_);
if (lean_obj_tag(v___x_3018_) == 1)
{
lean_object* v_val_3019_; lean_object* v___x_3020_; 
v_val_3019_ = lean_ctor_get(v___x_3018_, 0);
lean_inc(v_val_3019_);
lean_dec_ref_known(v___x_3018_, 1);
v___x_3020_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_ofApp2_x3f(v_rhs_2968_);
if (lean_obj_tag(v___x_3020_) == 1)
{
lean_object* v_val_3021_; uint8_t v___x_3022_; 
v_val_3021_ = lean_ctor_get(v___x_3020_, 0);
lean_inc(v_val_3021_);
lean_dec_ref_known(v___x_3020_, 1);
v___x_3022_ = lean_expr_eqv(v_val_3019_, v_val_3021_);
if (v___x_3022_ == 0)
{
lean_object* v_toCold_3023_; lean_object* v_options_3024_; uint8_t v_hasTrace_3025_; 
lean_dec_ref(v_P_2966_);
v_toCold_3023_ = lean_ctor_get(v___y_3016_, 0);
v_options_3024_ = lean_ctor_get(v_toCold_3023_, 2);
v_hasTrace_3025_ = lean_ctor_get_uint8(v_options_3024_, sizeof(void*)*1);
if (v_hasTrace_3025_ == 0)
{
lean_dec(v_val_3021_);
lean_dec(v_val_3019_);
lean_dec_ref(v_rhs_2968_);
lean_dec_ref(v_lhs_2967_);
v___y_2980_ = v___x_3022_;
goto v___jp_2979_;
}
else
{
lean_object* v_inheritedTraceOptions_3026_; lean_object* v___x_3027_; uint8_t v___x_3028_; 
v_inheritedTraceOptions_3026_ = lean_ctor_get(v_toCold_3023_, 11);
v___x_3027_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6);
v___x_3028_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3026_, v_options_3024_, v___x_3027_);
if (v___x_3028_ == 0)
{
lean_dec(v_val_3021_);
lean_dec(v_val_3019_);
lean_dec_ref(v_rhs_2968_);
lean_dec_ref(v_lhs_2967_);
v___y_2980_ = v___x_3022_;
goto v___jp_2979_;
}
else
{
lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; 
v___x_3029_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__1, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__1_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__1);
v___x_3030_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr(v_val_3019_);
v___x_3031_ = l_Lean_MessageData_ofExpr(v___x_3030_);
v___x_3032_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3032_, 0, v___x_3029_);
lean_ctor_set(v___x_3032_, 1, v___x_3031_);
v___x_3033_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__3, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__3_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__3);
v___x_3034_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3034_, 0, v___x_3032_);
lean_ctor_set(v___x_3034_, 1, v___x_3033_);
v___x_3035_ = l_Lean_indentExpr(v_lhs_2967_);
v___x_3036_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3036_, 0, v___x_3034_);
lean_ctor_set(v___x_3036_, 1, v___x_3035_);
v___x_3037_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__5);
v___x_3038_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3038_, 0, v___x_3036_);
lean_ctor_set(v___x_3038_, 1, v___x_3037_);
v___x_3039_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr(v_val_3021_);
v___x_3040_ = l_Lean_MessageData_ofExpr(v___x_3039_);
v___x_3041_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3041_, 0, v___x_3038_);
lean_ctor_set(v___x_3041_, 1, v___x_3040_);
v___x_3042_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3042_, 0, v___x_3041_);
lean_ctor_set(v___x_3042_, 1, v___x_3033_);
v___x_3043_ = l_Lean_indentExpr(v_rhs_2968_);
v___x_3044_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3044_, 0, v___x_3042_);
lean_ctor_set(v___x_3044_, 1, v___x_3043_);
v___x_3045_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v_cls_3006_, v___x_3044_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_);
if (lean_obj_tag(v___x_3045_) == 0)
{
lean_dec_ref_known(v___x_3045_, 1);
v___y_2980_ = v___x_3022_;
goto v___jp_2979_;
}
else
{
lean_object* v_a_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3053_; 
v_a_3046_ = lean_ctor_get(v___x_3045_, 0);
v_isSharedCheck_3053_ = !lean_is_exclusive(v___x_3045_);
if (v_isSharedCheck_3053_ == 0)
{
v___x_3048_ = v___x_3045_;
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_a_3046_);
lean_dec(v___x_3045_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
lean_object* v___x_3051_; 
if (v_isShared_3049_ == 0)
{
v___x_3051_ = v___x_3048_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v_a_3046_);
v___x_3051_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
return v___x_3051_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_3054_; lean_object* v_inheritedTraceOptions_3055_; lean_object* v___f_3056_; lean_object* v___x_3057_; lean_object* v_a_3058_; uint8_t v___x_3059_; 
lean_dec(v_val_3021_);
v_toCold_3054_ = lean_ctor_get(v___y_3016_, 0);
v_inheritedTraceOptions_3055_ = lean_ctor_get(v_toCold_3054_, 11);
lean_inc(v_val_3019_);
v___f_3056_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__2___boxed), 12, 4);
lean_closure_set(v___f_3056_, 0, v_val_3019_);
lean_closure_set(v___f_3056_, 1, v_lhs_2967_);
lean_closure_set(v___f_3056_, 2, v_rhs_2968_);
lean_closure_set(v___f_3056_, 3, v_P_2966_);
v___x_3057_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__0(v_cls_3006_, v_inheritedTraceOptions_3055_, v___y_3009_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_);
v_a_3058_ = lean_ctor_get(v___x_3057_, 0);
lean_inc(v_a_3058_);
lean_dec_ref(v___x_3057_);
v___x_3059_ = lean_unbox(v_a_3058_);
lean_dec(v_a_3058_);
if (v___x_3059_ == 0)
{
v___y_2990_ = v___f_3056_;
v___y_2991_ = v_val_3019_;
v___y_2992_ = v___y_3012_;
v___y_2993_ = v___y_3013_;
v___y_2994_ = v___y_3014_;
v___y_2995_ = v___y_3015_;
v___y_2996_ = v___y_3016_;
v___y_2997_ = v___y_3017_;
goto v___jp_2989_;
}
else
{
lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; 
v___x_3060_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__10, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__10_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__10);
lean_inc(v_val_3019_);
v___x_3061_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Op_toExpr(v_val_3019_);
v___x_3062_ = l_Lean_MessageData_ofExpr(v___x_3061_);
v___x_3063_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3063_, 0, v___x_3060_);
lean_ctor_set(v___x_3063_, 1, v___x_3062_);
v___x_3064_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__12, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__12_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__12);
v___x_3065_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3065_, 0, v___x_3063_);
lean_ctor_set(v___x_3065_, 1, v___x_3064_);
v___x_3066_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v_cls_3006_, v___x_3065_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_);
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_dec_ref_known(v___x_3066_, 1);
v___y_2990_ = v___f_3056_;
v___y_2991_ = v_val_3019_;
v___y_2992_ = v___y_3012_;
v___y_2993_ = v___y_3013_;
v___y_2994_ = v___y_3014_;
v___y_2995_ = v___y_3015_;
v___y_2996_ = v___y_3016_;
v___y_2997_ = v___y_3017_;
goto v___jp_2989_;
}
else
{
lean_object* v_a_3067_; lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3074_; 
lean_dec_ref(v___f_3056_);
lean_dec(v_val_3019_);
v_a_3067_ = lean_ctor_get(v___x_3066_, 0);
v_isSharedCheck_3074_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3074_ == 0)
{
v___x_3069_ = v___x_3066_;
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
else
{
lean_inc(v_a_3067_);
lean_dec(v___x_3066_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v___x_3072_; 
if (v_isShared_3070_ == 0)
{
v___x_3072_ = v___x_3069_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v_a_3067_);
v___x_3072_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
return v___x_3072_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_3075_; lean_object* v_inheritedTraceOptions_3076_; lean_object* v___x_3077_; lean_object* v_a_3078_; uint8_t v___x_3079_; 
lean_dec(v___x_3020_);
lean_dec(v_val_3019_);
lean_dec_ref(v_lhs_2967_);
lean_dec_ref(v_P_2966_);
v_toCold_3075_ = lean_ctor_get(v___y_3016_, 0);
v_inheritedTraceOptions_3076_ = lean_ctor_get(v_toCold_3075_, 11);
v___x_3077_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__0(v_cls_3006_, v_inheritedTraceOptions_3076_, v___y_3009_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_);
v_a_3078_ = lean_ctor_get(v___x_3077_, 0);
lean_inc(v_a_3078_);
lean_dec_ref(v___x_3077_);
v___x_3079_ = lean_unbox(v_a_3078_);
lean_dec(v_a_3078_);
if (v___x_3079_ == 0)
{
lean_dec_ref(v_rhs_2968_);
goto v___jp_2986_;
}
else
{
lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; 
v___x_3080_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14);
v___x_3081_ = l_Lean_indentExpr(v_rhs_2968_);
v___x_3082_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3082_, 0, v___x_3080_);
lean_ctor_set(v___x_3082_, 1, v___x_3081_);
v___x_3083_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v_cls_3006_, v___x_3082_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_);
if (lean_obj_tag(v___x_3083_) == 0)
{
lean_dec_ref_known(v___x_3083_, 1);
goto v___jp_2986_;
}
else
{
lean_object* v_a_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3091_; 
v_a_3084_ = lean_ctor_get(v___x_3083_, 0);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_3083_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3086_ = v___x_3083_;
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_a_3084_);
lean_dec(v___x_3083_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3089_; 
if (v_isShared_3087_ == 0)
{
v___x_3089_ = v___x_3086_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_a_3084_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
return v___x_3089_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_3092_; lean_object* v_inheritedTraceOptions_3093_; lean_object* v___x_3094_; lean_object* v_a_3095_; uint8_t v___x_3096_; 
lean_dec(v___x_3018_);
lean_dec_ref(v_rhs_2968_);
lean_dec_ref(v_P_2966_);
v_toCold_3092_ = lean_ctor_get(v___y_3016_, 0);
v_inheritedTraceOptions_3093_ = lean_ctor_get(v_toCold_3092_, 11);
v___x_3094_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__0(v_cls_3006_, v_inheritedTraceOptions_3093_, v___y_3009_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_);
v_a_3095_ = lean_ctor_get(v___x_3094_, 0);
lean_inc(v_a_3095_);
lean_dec_ref(v___x_3094_);
v___x_3096_ = lean_unbox(v_a_3095_);
lean_dec(v_a_3095_);
if (v___x_3096_ == 0)
{
lean_dec_ref(v_lhs_2967_);
goto v___jp_2983_;
}
else
{
lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; 
v___x_3097_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__4___closed__14);
v___x_3098_ = l_Lean_indentExpr(v_lhs_2967_);
v___x_3099_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3099_, 0, v___x_3097_);
lean_ctor_set(v___x_3099_, 1, v___x_3098_);
v___x_3100_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v_cls_3006_, v___x_3099_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_);
if (lean_obj_tag(v___x_3100_) == 0)
{
lean_dec_ref_known(v___x_3100_, 1);
goto v___jp_2983_;
}
else
{
lean_object* v_a_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3108_; 
v_a_3101_ = lean_ctor_get(v___x_3100_, 0);
v_isSharedCheck_3108_ = !lean_is_exclusive(v___x_3100_);
if (v_isSharedCheck_3108_ == 0)
{
v___x_3103_ = v___x_3100_;
v_isShared_3104_ = v_isSharedCheck_3108_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_a_3101_);
lean_dec(v___x_3100_);
v___x_3103_ = lean_box(0);
v_isShared_3104_ = v_isSharedCheck_3108_;
goto v_resetjp_3102_;
}
v_resetjp_3102_:
{
lean_object* v___x_3106_; 
if (v_isShared_3104_ == 0)
{
v___x_3106_ = v___x_3103_;
goto v_reusejp_3105_;
}
else
{
lean_object* v_reuseFailAlloc_3107_; 
v_reuseFailAlloc_3107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3107_, 0, v_a_3101_);
v___x_3106_ = v_reuseFailAlloc_3107_;
goto v_reusejp_3105_;
}
v_reusejp_3105_:
{
return v___x_3106_;
}
}
}
}
}
}
v___jp_3109_:
{
if (v_____do__lift_3110_ == 0)
{
v___y_3009_ = v___y_3111_;
v___y_3010_ = v___y_3112_;
v___y_3011_ = v___y_3113_;
v___y_3012_ = v___y_3114_;
v___y_3013_ = v___y_3115_;
v___y_3014_ = v___y_3116_;
v___y_3015_ = v___y_3117_;
v___y_3016_ = v___y_3118_;
v___y_3017_ = v___y_3119_;
goto v___jp_3008_;
}
else
{
lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3120_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__2, &l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___closed__2);
lean_inc_ref(v_rhs_2968_);
lean_inc_ref(v_lhs_2967_);
lean_inc_ref(v_P_2966_);
v___x_3121_ = l_Lean_mkAppB(v_P_2966_, v_lhs_2967_, v_rhs_2968_);
v___x_3122_ = l_Lean_indentExpr(v___x_3121_);
v___x_3123_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3120_);
lean_ctor_set(v___x_3123_, 1, v___x_3122_);
v___x_3124_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v_cls_3006_, v___x_3123_, v___y_3116_, v___y_3117_, v___y_3118_, v___y_3119_);
if (lean_obj_tag(v___x_3124_) == 0)
{
lean_dec_ref_known(v___x_3124_, 1);
v___y_3009_ = v___y_3111_;
v___y_3010_ = v___y_3112_;
v___y_3011_ = v___y_3113_;
v___y_3012_ = v___y_3114_;
v___y_3013_ = v___y_3115_;
v___y_3014_ = v___y_3116_;
v___y_3015_ = v___y_3117_;
v___y_3016_ = v___y_3118_;
v___y_3017_ = v___y_3119_;
goto v___jp_3008_;
}
else
{
lean_object* v_a_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3132_; 
lean_dec_ref(v_rhs_2968_);
lean_dec_ref(v_lhs_2967_);
lean_dec_ref(v_P_2966_);
v_a_3125_ = lean_ctor_get(v___x_3124_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v___x_3124_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_3127_ = v___x_3124_;
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_a_3125_);
lean_dec(v___x_3124_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
lean_object* v___x_3130_; 
if (v_isShared_3128_ == 0)
{
v___x_3130_ = v___x_3127_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v_a_3125_);
v___x_3130_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
return v___x_3130_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___boxed(lean_object* v_P_3242_, lean_object* v_lhs_3243_, lean_object* v_rhs_3244_, lean_object* v_a_3245_, lean_object* v_a_3246_, lean_object* v_a_3247_, lean_object* v_a_3248_, lean_object* v_a_3249_, lean_object* v_a_3250_, lean_object* v_a_3251_, lean_object* v_a_3252_, lean_object* v_a_3253_, lean_object* v_a_3254_){
_start:
{
lean_object* v_res_3255_; 
v_res_3255_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing(v_P_3242_, v_lhs_3243_, v_rhs_3244_, v_a_3245_, v_a_3246_, v_a_3247_, v_a_3248_, v_a_3249_, v_a_3250_, v_a_3251_, v_a_3252_, v_a_3253_);
lean_dec(v_a_3253_);
lean_dec_ref(v_a_3252_);
lean_dec(v_a_3251_);
lean_dec_ref(v_a_3250_);
lean_dec(v_a_3249_);
lean_dec_ref(v_a_3248_);
lean_dec(v_a_3247_);
lean_dec_ref(v_a_3246_);
lean_dec(v_a_3245_);
return v_res_3255_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0(lean_object* v_cls_3256_, lean_object* v_msg_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_){
_start:
{
lean_object* v___x_3268_; 
v___x_3268_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v_cls_3256_, v_msg_3257_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
return v___x_3268_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___boxed(lean_object* v_cls_3269_, lean_object* v_msg_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_){
_start:
{
lean_object* v_res_3281_; 
v_res_3281_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0(v_cls_3269_, v_msg_3270_, v___y_3271_, v___y_3272_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_);
lean_dec(v___y_3279_);
lean_dec_ref(v___y_3278_);
lean_dec(v___y_3277_);
lean_dec_ref(v___y_3276_);
lean_dec(v___y_3275_);
lean_dec_ref(v___y_3274_);
lean_dec(v___y_3273_);
lean_dec_ref(v___y_3272_);
lean_dec(v___y_3271_);
return v_res_3281_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__4(lean_object* v_00_u03b1_3282_, lean_object* v_x_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_){
_start:
{
lean_object* v___x_3294_; 
v___x_3294_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__4___redArg(v_x_3283_);
return v___x_3294_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__4___boxed(lean_object* v_00_u03b1_3295_, lean_object* v_x_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_){
_start:
{
lean_object* v_res_3307_; 
v_res_3307_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__4(v_00_u03b1_3295_, v_x_3296_, v___y_3297_, v___y_3298_, v___y_3299_, v___y_3300_, v___y_3301_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_);
lean_dec(v___y_3305_);
lean_dec_ref(v___y_3304_);
lean_dec(v___y_3303_);
lean_dec_ref(v___y_3302_);
lean_dec(v___y_3301_);
lean_dec_ref(v___y_3300_);
lean_dec(v___y_3299_);
lean_dec_ref(v___y_3298_);
lean_dec(v___y_3297_);
return v_res_3307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__3(lean_object* v_oldTraces_3308_, lean_object* v_data_3309_, lean_object* v_ref_3310_, lean_object* v_msg_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_){
_start:
{
lean_object* v___x_3322_; 
v___x_3322_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__3___redArg(v_oldTraces_3308_, v_data_3309_, v_ref_3310_, v_msg_3311_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_);
return v___x_3322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__3___boxed(lean_object* v_oldTraces_3323_, lean_object* v_data_3324_, lean_object* v_ref_3325_, lean_object* v_msg_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_){
_start:
{
lean_object* v_res_3337_; 
v_res_3337_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__3_spec__3(v_oldTraces_3323_, v_data_3324_, v_ref_3325_, v_msg_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_);
lean_dec(v___y_3335_);
lean_dec_ref(v___y_3334_);
lean_dec(v___y_3333_);
lean_dec_ref(v___y_3332_);
lean_dec(v___y_3331_);
lean_dec_ref(v___y_3330_);
lean_dec(v___y_3329_);
lean_dec_ref(v___y_3328_);
lean_dec(v___y_3327_);
return v_res_3337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__0(lean_object* v_x_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_){
_start:
{
lean_object* v___x_3349_; lean_object* v___x_3350_; 
v___x_3349_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__2___closed__0));
v___x_3350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3350_, 0, v___x_3349_);
return v___x_3350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__0___boxed(lean_object* v_x_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_){
_start:
{
lean_object* v_res_3362_; 
v_res_3362_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__0(v_x_3351_, v___y_3352_, v___y_3353_, v___y_3354_, v___y_3355_, v___y_3356_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
lean_dec(v___y_3360_);
lean_dec_ref(v___y_3359_);
lean_dec(v___y_3358_);
lean_dec_ref(v___y_3357_);
lean_dec(v___y_3356_);
lean_dec_ref(v___y_3355_);
lean_dec(v___y_3354_);
lean_dec_ref(v___y_3353_);
lean_dec(v___y_3352_);
return v_res_3362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__1(lean_object* v_arg_3363_, lean_object* v___x_3364_, lean_object* v_arg_3365_, lean_object* v_arg_3366_, lean_object* v_arg_3367_, lean_object* v_____r_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_){
_start:
{
lean_object* v___x_3379_; 
lean_inc_ref(v_arg_3363_);
v___x_3379_ = l_Lean_Meta_getDecLevel(v_arg_3363_, v___y_3374_, v___y_3375_, v___y_3376_, v___y_3377_);
if (lean_obj_tag(v___x_3379_) == 0)
{
lean_object* v_a_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; 
v_a_3380_ = lean_ctor_get(v___x_3379_, 0);
lean_inc(v_a_3380_);
lean_dec_ref_known(v___x_3379_, 1);
v___x_3381_ = lean_box(0);
v___x_3382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3382_, 0, v_a_3380_);
lean_ctor_set(v___x_3382_, 1, v___x_3381_);
v___x_3383_ = l_Lean_Expr_const___override(v___x_3364_, v___x_3382_);
v___x_3384_ = l_Lean_mkAppB(v___x_3383_, v_arg_3363_, v_arg_3365_);
v___x_3385_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing(v___x_3384_, v_arg_3366_, v_arg_3367_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_, v___y_3376_, v___y_3377_);
return v___x_3385_;
}
else
{
lean_object* v_a_3386_; lean_object* v___x_3388_; uint8_t v_isShared_3389_; uint8_t v_isSharedCheck_3393_; 
lean_dec_ref(v_arg_3367_);
lean_dec_ref(v_arg_3366_);
lean_dec_ref(v_arg_3365_);
lean_dec(v___x_3364_);
lean_dec_ref(v_arg_3363_);
v_a_3386_ = lean_ctor_get(v___x_3379_, 0);
v_isSharedCheck_3393_ = !lean_is_exclusive(v___x_3379_);
if (v_isSharedCheck_3393_ == 0)
{
v___x_3388_ = v___x_3379_;
v_isShared_3389_ = v_isSharedCheck_3393_;
goto v_resetjp_3387_;
}
else
{
lean_inc(v_a_3386_);
lean_dec(v___x_3379_);
v___x_3388_ = lean_box(0);
v_isShared_3389_ = v_isSharedCheck_3393_;
goto v_resetjp_3387_;
}
v_resetjp_3387_:
{
lean_object* v___x_3391_; 
if (v_isShared_3389_ == 0)
{
v___x_3391_ = v___x_3388_;
goto v_reusejp_3390_;
}
else
{
lean_object* v_reuseFailAlloc_3392_; 
v_reuseFailAlloc_3392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3392_, 0, v_a_3386_);
v___x_3391_ = v_reuseFailAlloc_3392_;
goto v_reusejp_3390_;
}
v_reusejp_3390_:
{
return v___x_3391_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__1___boxed(lean_object* v_arg_3394_, lean_object* v___x_3395_, lean_object* v_arg_3396_, lean_object* v_arg_3397_, lean_object* v_arg_3398_, lean_object* v_____r_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_){
_start:
{
lean_object* v_res_3410_; 
v_res_3410_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__1(v_arg_3394_, v___x_3395_, v_arg_3396_, v_arg_3397_, v_arg_3398_, v_____r_3399_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_, v___y_3404_, v___y_3405_, v___y_3406_, v___y_3407_, v___y_3408_);
lean_dec(v___y_3408_);
lean_dec_ref(v___y_3407_);
lean_dec(v___y_3406_);
lean_dec_ref(v___y_3405_);
lean_dec(v___y_3404_);
lean_dec_ref(v___y_3403_);
lean_dec(v___y_3402_);
lean_dec_ref(v___y_3401_);
lean_dec(v___y_3400_);
return v_res_3410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__2(lean_object* v_arg_3414_, lean_object* v_arg_3415_, lean_object* v_arg_3416_, lean_object* v_____r_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_){
_start:
{
lean_object* v___x_3428_; 
lean_inc_ref(v_arg_3414_);
v___x_3428_ = l_Lean_Meta_getLevel(v_arg_3414_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_);
if (lean_obj_tag(v___x_3428_) == 0)
{
lean_object* v_a_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; 
v_a_3429_ = lean_ctor_get(v___x_3428_, 0);
lean_inc(v_a_3429_);
lean_dec_ref_known(v___x_3428_, 1);
v___x_3430_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__2___closed__1));
v___x_3431_ = lean_box(0);
v___x_3432_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3432_, 0, v_a_3429_);
lean_ctor_set(v___x_3432_, 1, v___x_3431_);
v___x_3433_ = l_Lean_Expr_const___override(v___x_3430_, v___x_3432_);
v___x_3434_ = l_Lean_Expr_app___override(v___x_3433_, v_arg_3414_);
v___x_3435_ = l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing(v___x_3434_, v_arg_3415_, v_arg_3416_, v___y_3418_, v___y_3419_, v___y_3420_, v___y_3421_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_);
return v___x_3435_;
}
else
{
lean_object* v_a_3436_; lean_object* v___x_3438_; uint8_t v_isShared_3439_; uint8_t v_isSharedCheck_3443_; 
lean_dec_ref(v_arg_3416_);
lean_dec_ref(v_arg_3415_);
lean_dec_ref(v_arg_3414_);
v_a_3436_ = lean_ctor_get(v___x_3428_, 0);
v_isSharedCheck_3443_ = !lean_is_exclusive(v___x_3428_);
if (v_isSharedCheck_3443_ == 0)
{
v___x_3438_ = v___x_3428_;
v_isShared_3439_ = v_isSharedCheck_3443_;
goto v_resetjp_3437_;
}
else
{
lean_inc(v_a_3436_);
lean_dec(v___x_3428_);
v___x_3438_ = lean_box(0);
v_isShared_3439_ = v_isSharedCheck_3443_;
goto v_resetjp_3437_;
}
v_resetjp_3437_:
{
lean_object* v___x_3441_; 
if (v_isShared_3439_ == 0)
{
v___x_3441_ = v___x_3438_;
goto v_reusejp_3440_;
}
else
{
lean_object* v_reuseFailAlloc_3442_; 
v_reuseFailAlloc_3442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3442_, 0, v_a_3436_);
v___x_3441_ = v_reuseFailAlloc_3442_;
goto v_reusejp_3440_;
}
v_reusejp_3440_:
{
return v___x_3441_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__2___boxed(lean_object* v_arg_3444_, lean_object* v_arg_3445_, lean_object* v_arg_3446_, lean_object* v_____r_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_){
_start:
{
lean_object* v_res_3458_; 
v_res_3458_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__2(v_arg_3444_, v_arg_3445_, v_arg_3446_, v_____r_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_);
lean_dec(v___y_3456_);
lean_dec_ref(v___y_3455_);
lean_dec(v___y_3454_);
lean_dec_ref(v___y_3453_);
lean_dec(v___y_3452_);
lean_dec_ref(v___y_3451_);
lean_dec(v___y_3450_);
lean_dec_ref(v___y_3449_);
lean_dec(v___y_3448_);
return v_res_3458_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__4(void){
_start:
{
lean_object* v___x_3465_; lean_object* v___x_3466_; 
v___x_3465_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__3));
v___x_3466_ = l_Lean_stringToMessageData(v___x_3465_);
return v___x_3466_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__5(void){
_start:
{
lean_object* v___x_3467_; lean_object* v___x_3468_; 
v___x_3467_ = l_Lean_checkEmoji;
v___x_3468_ = l_Lean_stringToMessageData(v___x_3467_);
return v___x_3468_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__6(void){
_start:
{
lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; 
v___x_3469_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__5, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__5_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__5);
v___x_3470_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__4, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__4);
v___x_3471_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3471_, 0, v___x_3470_);
lean_ctor_set(v___x_3471_, 1, v___x_3469_);
return v___x_3471_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__8(void){
_start:
{
lean_object* v___x_3473_; lean_object* v___x_3474_; 
v___x_3473_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__7));
v___x_3474_ = l_Lean_stringToMessageData(v___x_3473_);
return v___x_3474_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__9(void){
_start:
{
lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; 
v___x_3475_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__8, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__8_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__8);
v___x_3476_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__6);
v___x_3477_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3477_, 0, v___x_3476_);
lean_ctor_set(v___x_3477_, 1, v___x_3475_);
return v___x_3477_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__11(void){
_start:
{
lean_object* v___x_3479_; lean_object* v___x_3480_; 
v___x_3479_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__10));
v___x_3480_ = l_Lean_stringToMessageData(v___x_3479_);
return v___x_3480_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__12(void){
_start:
{
lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; 
v___x_3481_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__11, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__11_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__11);
v___x_3482_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__6, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__6);
v___x_3483_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3483_, 0, v___x_3482_);
lean_ctor_set(v___x_3483_, 1, v___x_3481_);
return v___x_3483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost(lean_object* v_e_3484_, lean_object* v_a_3485_, lean_object* v_a_3486_, lean_object* v_a_3487_, lean_object* v_a_3488_, lean_object* v_a_3489_, lean_object* v_a_3490_, lean_object* v_a_3491_, lean_object* v_a_3492_, lean_object* v_a_3493_){
_start:
{
lean_object* v___y_3496_; lean_object* v___x_3528_; 
v___x_3528_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_3484_, v_a_3491_);
if (lean_obj_tag(v___x_3528_) == 0)
{
lean_object* v_a_3529_; lean_object* v___x_3530_; uint8_t v___x_3531_; 
v_a_3529_ = lean_ctor_get(v___x_3528_, 0);
lean_inc(v_a_3529_);
lean_dec_ref_known(v___x_3528_, 1);
v___x_3530_ = l_Lean_Expr_cleanupAnnotations(v_a_3529_);
lean_dec(v_a_3529_);
v___x_3531_ = l_Lean_Expr_isApp(v___x_3530_);
if (v___x_3531_ == 0)
{
lean_object* v___x_3532_; lean_object* v___x_3533_; 
lean_dec_ref(v___x_3530_);
v___x_3532_ = lean_box(0);
v___x_3533_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__0(v___x_3532_, v_a_3485_, v_a_3486_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_, v_a_3493_);
v___y_3496_ = v___x_3533_;
goto v___jp_3495_;
}
else
{
lean_object* v___x_3534_; uint8_t v___x_3535_; 
v___x_3534_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3530_);
v___x_3535_ = l_Lean_Expr_isApp(v___x_3534_);
if (v___x_3535_ == 0)
{
lean_object* v___x_3536_; lean_object* v___x_3537_; 
lean_dec_ref(v___x_3534_);
lean_dec_ref(v___x_3530_);
v___x_3536_ = lean_box(0);
v___x_3537_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__0(v___x_3536_, v_a_3485_, v_a_3486_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_, v_a_3493_);
v___y_3496_ = v___x_3537_;
goto v___jp_3495_;
}
else
{
lean_object* v___x_3538_; uint8_t v___x_3539_; 
v___x_3538_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3534_);
v___x_3539_ = l_Lean_Expr_isApp(v___x_3538_);
if (v___x_3539_ == 0)
{
lean_object* v___x_3540_; lean_object* v___x_3541_; 
lean_dec_ref(v___x_3538_);
lean_dec_ref(v___x_3534_);
lean_dec_ref(v___x_3530_);
v___x_3540_ = lean_box(0);
v___x_3541_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__0(v___x_3540_, v_a_3485_, v_a_3486_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_, v_a_3493_);
v___y_3496_ = v___x_3541_;
goto v___jp_3495_;
}
else
{
lean_object* v_arg_3542_; lean_object* v_arg_3543_; lean_object* v_arg_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; uint8_t v___x_3547_; 
v_arg_3542_ = lean_ctor_get(v___x_3530_, 1);
lean_inc_ref(v_arg_3542_);
lean_dec_ref(v___x_3530_);
v_arg_3543_ = lean_ctor_get(v___x_3534_, 1);
lean_inc_ref(v_arg_3543_);
lean_dec_ref(v___x_3534_);
v_arg_3544_ = lean_ctor_get(v___x_3538_, 1);
lean_inc_ref(v_arg_3544_);
v___x_3545_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3538_);
lean_dec_ref(v___x_3538_);
v___x_3546_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__2___closed__1));
v___x_3547_ = l_Lean_Expr_isConstOf(v___x_3545_, v___x_3546_);
if (v___x_3547_ == 0)
{
uint8_t v___x_3548_; 
v___x_3548_ = l_Lean_Expr_isApp(v___x_3545_);
if (v___x_3548_ == 0)
{
lean_object* v___x_3549_; lean_object* v___x_3550_; 
lean_dec_ref(v___x_3545_);
lean_dec_ref(v_arg_3544_);
lean_dec_ref(v_arg_3543_);
lean_dec_ref(v_arg_3542_);
v___x_3549_ = lean_box(0);
v___x_3550_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__0(v___x_3549_, v_a_3485_, v_a_3486_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_, v_a_3493_);
v___y_3496_ = v___x_3550_;
goto v___jp_3495_;
}
else
{
lean_object* v___x_3551_; lean_object* v___x_3552_; uint8_t v___x_3553_; 
v___x_3551_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3545_);
v___x_3552_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__2));
v___x_3553_ = l_Lean_Expr_isConstOf(v___x_3551_, v___x_3552_);
lean_dec_ref(v___x_3551_);
if (v___x_3553_ == 0)
{
lean_object* v___x_3554_; lean_object* v___x_3555_; 
lean_dec_ref(v___x_3545_);
lean_dec_ref(v_arg_3544_);
lean_dec_ref(v_arg_3543_);
lean_dec_ref(v_arg_3542_);
v___x_3554_ = lean_box(0);
v___x_3555_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__0(v___x_3554_, v_a_3485_, v_a_3486_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_, v_a_3493_);
v___y_3496_ = v___x_3555_;
goto v___jp_3495_;
}
else
{
lean_object* v_toCold_3556_; lean_object* v_options_3557_; lean_object* v_arg_3558_; lean_object* v_inheritedTraceOptions_3559_; uint8_t v_hasTrace_3560_; 
v_toCold_3556_ = lean_ctor_get(v_a_3492_, 0);
v_options_3557_ = lean_ctor_get(v_toCold_3556_, 2);
v_arg_3558_ = lean_ctor_get(v___x_3545_, 1);
lean_inc_ref(v_arg_3558_);
lean_dec_ref(v___x_3545_);
v_inheritedTraceOptions_3559_ = lean_ctor_get(v_toCold_3556_, 11);
v_hasTrace_3560_ = lean_ctor_get_uint8(v_options_3557_, sizeof(void*)*1);
if (v_hasTrace_3560_ == 0)
{
goto v___jp_3561_;
}
else
{
lean_object* v___x_3564_; lean_object* v___x_3565_; uint8_t v___x_3566_; 
v___x_3564_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__3));
v___x_3565_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6);
v___x_3566_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3559_, v_options_3557_, v___x_3565_);
if (v___x_3566_ == 0)
{
goto v___jp_3561_;
}
else
{
lean_object* v___x_3567_; lean_object* v___x_3568_; 
v___x_3567_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__9, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__9_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__9);
v___x_3568_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v___x_3564_, v___x_3567_, v_a_3490_, v_a_3491_, v_a_3492_, v_a_3493_);
if (lean_obj_tag(v___x_3568_) == 0)
{
lean_object* v_a_3569_; lean_object* v___x_3570_; 
v_a_3569_ = lean_ctor_get(v___x_3568_, 0);
lean_inc(v_a_3569_);
lean_dec_ref_known(v___x_3568_, 1);
v___x_3570_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__1(v_arg_3558_, v___x_3552_, v_arg_3544_, v_arg_3543_, v_arg_3542_, v_a_3569_, v_a_3485_, v_a_3486_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_, v_a_3493_);
v___y_3496_ = v___x_3570_;
goto v___jp_3495_;
}
else
{
lean_object* v_a_3571_; lean_object* v___x_3573_; uint8_t v_isShared_3574_; uint8_t v_isSharedCheck_3578_; 
lean_dec_ref(v_arg_3558_);
lean_dec_ref(v_arg_3544_);
lean_dec_ref(v_arg_3543_);
lean_dec_ref(v_arg_3542_);
v_a_3571_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3578_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3578_ == 0)
{
v___x_3573_ = v___x_3568_;
v_isShared_3574_ = v_isSharedCheck_3578_;
goto v_resetjp_3572_;
}
else
{
lean_inc(v_a_3571_);
lean_dec(v___x_3568_);
v___x_3573_ = lean_box(0);
v_isShared_3574_ = v_isSharedCheck_3578_;
goto v_resetjp_3572_;
}
v_resetjp_3572_:
{
lean_object* v___x_3576_; 
if (v_isShared_3574_ == 0)
{
v___x_3576_ = v___x_3573_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v_a_3571_);
v___x_3576_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
return v___x_3576_;
}
}
}
}
}
v___jp_3561_:
{
lean_object* v___x_3562_; lean_object* v___x_3563_; 
v___x_3562_ = lean_box(0);
v___x_3563_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__1(v_arg_3558_, v___x_3552_, v_arg_3544_, v_arg_3543_, v_arg_3542_, v___x_3562_, v_a_3485_, v_a_3486_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_, v_a_3493_);
v___y_3496_ = v___x_3563_;
goto v___jp_3495_;
}
}
}
}
else
{
lean_object* v_toCold_3579_; lean_object* v_options_3580_; lean_object* v_inheritedTraceOptions_3581_; uint8_t v_hasTrace_3582_; 
lean_dec_ref(v___x_3545_);
v_toCold_3579_ = lean_ctor_get(v_a_3492_, 0);
v_options_3580_ = lean_ctor_get(v_toCold_3579_, 2);
v_inheritedTraceOptions_3581_ = lean_ctor_get(v_toCold_3579_, 11);
v_hasTrace_3582_ = lean_ctor_get_uint8(v_options_3580_, sizeof(void*)*1);
if (v_hasTrace_3582_ == 0)
{
goto v___jp_3583_;
}
else
{
lean_object* v___x_3586_; lean_object* v___x_3587_; uint8_t v___x_3588_; 
v___x_3586_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__3));
v___x_3587_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6);
v___x_3588_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3581_, v_options_3580_, v___x_3587_);
if (v___x_3588_ == 0)
{
goto v___jp_3583_;
}
else
{
lean_object* v___x_3589_; lean_object* v___x_3590_; 
v___x_3589_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__12, &l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__12_once, _init_l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___closed__12);
v___x_3590_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing_spec__0___redArg(v___x_3586_, v___x_3589_, v_a_3490_, v_a_3491_, v_a_3492_, v_a_3493_);
if (lean_obj_tag(v___x_3590_) == 0)
{
lean_object* v_a_3591_; lean_object* v___x_3592_; 
v_a_3591_ = lean_ctor_get(v___x_3590_, 0);
lean_inc(v_a_3591_);
lean_dec_ref_known(v___x_3590_, 1);
v___x_3592_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__2(v_arg_3544_, v_arg_3543_, v_arg_3542_, v_a_3591_, v_a_3485_, v_a_3486_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_, v_a_3493_);
v___y_3496_ = v___x_3592_;
goto v___jp_3495_;
}
else
{
lean_object* v_a_3593_; lean_object* v___x_3595_; uint8_t v_isShared_3596_; uint8_t v_isSharedCheck_3600_; 
lean_dec_ref(v_arg_3544_);
lean_dec_ref(v_arg_3543_);
lean_dec_ref(v_arg_3542_);
v_a_3593_ = lean_ctor_get(v___x_3590_, 0);
v_isSharedCheck_3600_ = !lean_is_exclusive(v___x_3590_);
if (v_isSharedCheck_3600_ == 0)
{
v___x_3595_ = v___x_3590_;
v_isShared_3596_ = v_isSharedCheck_3600_;
goto v_resetjp_3594_;
}
else
{
lean_inc(v_a_3593_);
lean_dec(v___x_3590_);
v___x_3595_ = lean_box(0);
v_isShared_3596_ = v_isSharedCheck_3600_;
goto v_resetjp_3594_;
}
v_resetjp_3594_:
{
lean_object* v___x_3598_; 
if (v_isShared_3596_ == 0)
{
v___x_3598_ = v___x_3595_;
goto v_reusejp_3597_;
}
else
{
lean_object* v_reuseFailAlloc_3599_; 
v_reuseFailAlloc_3599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3599_, 0, v_a_3593_);
v___x_3598_ = v_reuseFailAlloc_3599_;
goto v_reusejp_3597_;
}
v_reusejp_3597_:
{
return v___x_3598_;
}
}
}
}
}
v___jp_3583_:
{
lean_object* v___x_3584_; lean_object* v___x_3585_; 
v___x_3584_ = lean_box(0);
v___x_3585_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___lam__2(v_arg_3544_, v_arg_3543_, v_arg_3542_, v___x_3584_, v_a_3485_, v_a_3486_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_, v_a_3493_);
v___y_3496_ = v___x_3585_;
goto v___jp_3495_;
}
}
}
}
}
}
else
{
lean_object* v_a_3601_; lean_object* v___x_3603_; uint8_t v_isShared_3604_; uint8_t v_isSharedCheck_3608_; 
v_a_3601_ = lean_ctor_get(v___x_3528_, 0);
v_isSharedCheck_3608_ = !lean_is_exclusive(v___x_3528_);
if (v_isSharedCheck_3608_ == 0)
{
v___x_3603_ = v___x_3528_;
v_isShared_3604_ = v_isSharedCheck_3608_;
goto v_resetjp_3602_;
}
else
{
lean_inc(v_a_3601_);
lean_dec(v___x_3528_);
v___x_3603_ = lean_box(0);
v_isShared_3604_ = v_isSharedCheck_3608_;
goto v_resetjp_3602_;
}
v_resetjp_3602_:
{
lean_object* v___x_3606_; 
if (v_isShared_3604_ == 0)
{
v___x_3606_ = v___x_3603_;
goto v_reusejp_3605_;
}
else
{
lean_object* v_reuseFailAlloc_3607_; 
v_reuseFailAlloc_3607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3607_, 0, v_a_3601_);
v___x_3606_ = v_reuseFailAlloc_3607_;
goto v_reusejp_3605_;
}
v_reusejp_3605_:
{
return v___x_3606_;
}
}
}
v___jp_3495_:
{
if (lean_obj_tag(v___y_3496_) == 0)
{
lean_object* v_a_3497_; lean_object* v___x_3499_; uint8_t v_isShared_3500_; uint8_t v_isSharedCheck_3527_; 
v_a_3497_ = lean_ctor_get(v___y_3496_, 0);
v_isSharedCheck_3527_ = !lean_is_exclusive(v___y_3496_);
if (v_isSharedCheck_3527_ == 0)
{
v___x_3499_ = v___y_3496_;
v_isShared_3500_ = v_isSharedCheck_3527_;
goto v_resetjp_3498_;
}
else
{
lean_inc(v_a_3497_);
lean_dec(v___y_3496_);
v___x_3499_ = lean_box(0);
v_isShared_3500_ = v_isSharedCheck_3527_;
goto v_resetjp_3498_;
}
v_resetjp_3498_:
{
if (lean_obj_tag(v_a_3497_) == 0)
{
uint8_t v_contextDependent_3501_; lean_object* v___x_3503_; uint8_t v_isShared_3504_; uint8_t v_isSharedCheck_3512_; 
v_contextDependent_3501_ = lean_ctor_get_uint8(v_a_3497_, 1);
v_isSharedCheck_3512_ = !lean_is_exclusive(v_a_3497_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3503_ = v_a_3497_;
v_isShared_3504_ = v_isSharedCheck_3512_;
goto v_resetjp_3502_;
}
else
{
lean_dec(v_a_3497_);
v___x_3503_ = lean_box(0);
v_isShared_3504_ = v_isSharedCheck_3512_;
goto v_resetjp_3502_;
}
v_resetjp_3502_:
{
uint8_t v___x_3505_; lean_object* v___x_3507_; 
v___x_3505_ = 1;
if (v_isShared_3504_ == 0)
{
v___x_3507_ = v___x_3503_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v_reuseFailAlloc_3511_, 1, v_contextDependent_3501_);
v___x_3507_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
lean_object* v___x_3509_; 
lean_ctor_set_uint8(v___x_3507_, 0, v___x_3505_);
if (v_isShared_3500_ == 0)
{
lean_ctor_set(v___x_3499_, 0, v___x_3507_);
v___x_3509_ = v___x_3499_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v___x_3507_);
v___x_3509_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
return v___x_3509_;
}
}
}
}
else
{
lean_object* v_e_x27_3513_; lean_object* v_proof_3514_; uint8_t v_contextDependent_3515_; lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3526_; 
v_e_x27_3513_ = lean_ctor_get(v_a_3497_, 0);
v_proof_3514_ = lean_ctor_get(v_a_3497_, 1);
v_contextDependent_3515_ = lean_ctor_get_uint8(v_a_3497_, sizeof(void*)*2 + 1);
v_isSharedCheck_3526_ = !lean_is_exclusive(v_a_3497_);
if (v_isSharedCheck_3526_ == 0)
{
v___x_3517_ = v_a_3497_;
v_isShared_3518_ = v_isSharedCheck_3526_;
goto v_resetjp_3516_;
}
else
{
lean_inc(v_proof_3514_);
lean_inc(v_e_x27_3513_);
lean_dec(v_a_3497_);
v___x_3517_ = lean_box(0);
v_isShared_3518_ = v_isSharedCheck_3526_;
goto v_resetjp_3516_;
}
v_resetjp_3516_:
{
uint8_t v___x_3519_; lean_object* v___x_3521_; 
v___x_3519_ = 1;
if (v_isShared_3518_ == 0)
{
v___x_3521_ = v___x_3517_;
goto v_reusejp_3520_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v_e_x27_3513_);
lean_ctor_set(v_reuseFailAlloc_3525_, 1, v_proof_3514_);
lean_ctor_set_uint8(v_reuseFailAlloc_3525_, sizeof(void*)*2 + 1, v_contextDependent_3515_);
v___x_3521_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3520_;
}
v_reusejp_3520_:
{
lean_object* v___x_3523_; 
lean_ctor_set_uint8(v___x_3521_, sizeof(void*)*2, v___x_3519_);
if (v_isShared_3500_ == 0)
{
lean_ctor_set(v___x_3499_, 0, v___x_3521_);
v___x_3523_ = v___x_3499_;
goto v_reusejp_3522_;
}
else
{
lean_object* v_reuseFailAlloc_3524_; 
v_reuseFailAlloc_3524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3524_, 0, v___x_3521_);
v___x_3523_ = v_reuseFailAlloc_3524_;
goto v_reusejp_3522_;
}
v_reusejp_3522_:
{
return v___x_3523_;
}
}
}
}
}
}
else
{
return v___y_3496_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___boxed(lean_object* v_e_3609_, lean_object* v_a_3610_, lean_object* v_a_3611_, lean_object* v_a_3612_, lean_object* v_a_3613_, lean_object* v_a_3614_, lean_object* v_a_3615_, lean_object* v_a_3616_, lean_object* v_a_3617_, lean_object* v_a_3618_, lean_object* v_a_3619_){
_start:
{
lean_object* v_res_3620_; 
v_res_3620_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost(v_e_3609_, v_a_3610_, v_a_3611_, v_a_3612_, v_a_3613_, v_a_3614_, v_a_3615_, v_a_3616_, v_a_3617_, v_a_3618_);
lean_dec(v_a_3618_);
lean_dec_ref(v_a_3617_);
lean_dec(v_a_3616_);
lean_dec_ref(v_a_3615_);
lean_dec(v_a_3614_);
lean_dec_ref(v_a_3613_);
lean_dec(v_a_3612_);
lean_dec_ref(v_a_3611_);
lean_dec(v_a_3610_);
return v_res_3620_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__2___redArg___lam__0(lean_object* v_x_3621_, lean_object* v___y_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_){
_start:
{
lean_object* v___x_3634_; 
lean_inc(v___y_3628_);
lean_inc_ref(v___y_3627_);
lean_inc(v___y_3626_);
lean_inc_ref(v___y_3625_);
lean_inc(v___y_3624_);
lean_inc(v___y_3623_);
lean_inc_ref(v___y_3622_);
v___x_3634_ = lean_apply_12(v_x_3621_, v___y_3622_, v___y_3623_, v___y_3624_, v___y_3625_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_, v___y_3630_, v___y_3631_, v___y_3632_, lean_box(0));
return v___x_3634_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__2___redArg___lam__0___boxed(lean_object* v_x_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_){
_start:
{
lean_object* v_res_3648_; 
v_res_3648_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__2___redArg___lam__0(v_x_3635_, v___y_3636_, v___y_3637_, v___y_3638_, v___y_3639_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_, v___y_3644_, v___y_3645_, v___y_3646_);
lean_dec(v___y_3642_);
lean_dec_ref(v___y_3641_);
lean_dec(v___y_3640_);
lean_dec_ref(v___y_3639_);
lean_dec(v___y_3638_);
lean_dec(v___y_3637_);
lean_dec_ref(v___y_3636_);
return v_res_3648_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__2___redArg(lean_object* v_mvarId_3649_, lean_object* v_x_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_){
_start:
{
lean_object* v___f_3663_; lean_object* v___x_3664_; 
lean_inc(v___y_3657_);
lean_inc_ref(v___y_3656_);
lean_inc(v___y_3655_);
lean_inc_ref(v___y_3654_);
lean_inc(v___y_3653_);
lean_inc(v___y_3652_);
lean_inc_ref(v___y_3651_);
v___f_3663_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__2___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_3663_, 0, v_x_3650_);
lean_closure_set(v___f_3663_, 1, v___y_3651_);
lean_closure_set(v___f_3663_, 2, v___y_3652_);
lean_closure_set(v___f_3663_, 3, v___y_3653_);
lean_closure_set(v___f_3663_, 4, v___y_3654_);
lean_closure_set(v___f_3663_, 5, v___y_3655_);
lean_closure_set(v___f_3663_, 6, v___y_3656_);
lean_closure_set(v___f_3663_, 7, v___y_3657_);
v___x_3664_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_3649_, v___f_3663_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_);
if (lean_obj_tag(v___x_3664_) == 0)
{
return v___x_3664_;
}
else
{
lean_object* v_a_3665_; lean_object* v___x_3667_; uint8_t v_isShared_3668_; uint8_t v_isSharedCheck_3672_; 
v_a_3665_ = lean_ctor_get(v___x_3664_, 0);
v_isSharedCheck_3672_ = !lean_is_exclusive(v___x_3664_);
if (v_isSharedCheck_3672_ == 0)
{
v___x_3667_ = v___x_3664_;
v_isShared_3668_ = v_isSharedCheck_3672_;
goto v_resetjp_3666_;
}
else
{
lean_inc(v_a_3665_);
lean_dec(v___x_3664_);
v___x_3667_ = lean_box(0);
v_isShared_3668_ = v_isSharedCheck_3672_;
goto v_resetjp_3666_;
}
v_resetjp_3666_:
{
lean_object* v___x_3670_; 
if (v_isShared_3668_ == 0)
{
v___x_3670_ = v___x_3667_;
goto v_reusejp_3669_;
}
else
{
lean_object* v_reuseFailAlloc_3671_; 
v_reuseFailAlloc_3671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3671_, 0, v_a_3665_);
v___x_3670_ = v_reuseFailAlloc_3671_;
goto v_reusejp_3669_;
}
v_reusejp_3669_:
{
return v___x_3670_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__2___redArg___boxed(lean_object* v_mvarId_3673_, lean_object* v_x_3674_, lean_object* v___y_3675_, lean_object* v___y_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_){
_start:
{
lean_object* v_res_3687_; 
v_res_3687_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__2___redArg(v_mvarId_3673_, v_x_3674_, v___y_3675_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_, v___y_3680_, v___y_3681_, v___y_3682_, v___y_3683_, v___y_3684_, v___y_3685_);
lean_dec(v___y_3685_);
lean_dec_ref(v___y_3684_);
lean_dec(v___y_3683_);
lean_dec_ref(v___y_3682_);
lean_dec(v___y_3681_);
lean_dec_ref(v___y_3680_);
lean_dec(v___y_3679_);
lean_dec_ref(v___y_3678_);
lean_dec(v___y_3677_);
lean_dec(v___y_3676_);
lean_dec_ref(v___y_3675_);
return v_res_3687_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__2(lean_object* v_00_u03b1_3688_, lean_object* v_mvarId_3689_, lean_object* v_x_3690_, lean_object* v___y_3691_, lean_object* v___y_3692_, lean_object* v___y_3693_, lean_object* v___y_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_){
_start:
{
lean_object* v___x_3703_; 
v___x_3703_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__2___redArg(v_mvarId_3689_, v_x_3690_, v___y_3691_, v___y_3692_, v___y_3693_, v___y_3694_, v___y_3695_, v___y_3696_, v___y_3697_, v___y_3698_, v___y_3699_, v___y_3700_, v___y_3701_);
return v___x_3703_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__2___boxed(lean_object* v_00_u03b1_3704_, lean_object* v_mvarId_3705_, lean_object* v_x_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_){
_start:
{
lean_object* v_res_3719_; 
v_res_3719_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__2(v_00_u03b1_3704_, v_mvarId_3705_, v_x_3706_, v___y_3707_, v___y_3708_, v___y_3709_, v___y_3710_, v___y_3711_, v___y_3712_, v___y_3713_, v___y_3714_, v___y_3715_, v___y_3716_, v___y_3717_);
lean_dec(v___y_3717_);
lean_dec_ref(v___y_3716_);
lean_dec(v___y_3715_);
lean_dec_ref(v___y_3714_);
lean_dec(v___y_3713_);
lean_dec_ref(v___y_3712_);
lean_dec(v___y_3711_);
lean_dec_ref(v___y_3710_);
lean_dec(v___y_3709_);
lean_dec(v___y_3708_);
lean_dec_ref(v___y_3707_);
return v_res_3719_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__0(lean_object* v_x_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_, lean_object* v___y_3725_, lean_object* v___y_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_){
_start:
{
lean_object* v___x_3731_; lean_object* v___x_3732_; 
v___x_3731_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_Normalize_canonicalizeWithSharing___lam__2___closed__0));
v___x_3732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3732_, 0, v___x_3731_);
return v___x_3732_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__0___boxed(lean_object* v_x_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_){
_start:
{
lean_object* v_res_3744_; 
v_res_3744_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__0(v_x_3733_, v___y_3734_, v___y_3735_, v___y_3736_, v___y_3737_, v___y_3738_, v___y_3739_, v___y_3740_, v___y_3741_, v___y_3742_);
lean_dec(v___y_3742_);
lean_dec_ref(v___y_3741_);
lean_dec(v___y_3740_);
lean_dec_ref(v___y_3739_);
lean_dec(v___y_3738_);
lean_dec_ref(v___y_3737_);
lean_dec(v___y_3736_);
lean_dec_ref(v___y_3735_);
lean_dec(v___y_3734_);
lean_dec_ref(v_x_3733_);
return v_res_3744_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__1(lean_object* v_snd_3745_, lean_object* v_a_3746_, lean_object* v___x_3747_, lean_object* v_____r_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_, lean_object* v___y_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_){
_start:
{
lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; 
v___x_3761_ = lean_array_push(v_snd_3745_, v_a_3746_);
v___x_3762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3762_, 0, v___x_3747_);
lean_ctor_set(v___x_3762_, 1, v___x_3761_);
v___x_3763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3763_, 0, v___x_3762_);
v___x_3764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3764_, 0, v___x_3763_);
return v___x_3764_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__1___boxed(lean_object* v_snd_3765_, lean_object* v_a_3766_, lean_object* v___x_3767_, lean_object* v_____r_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_, lean_object* v___y_3774_, lean_object* v___y_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_){
_start:
{
lean_object* v_res_3781_; 
v_res_3781_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__1(v_snd_3765_, v_a_3766_, v___x_3767_, v_____r_3768_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_, v___y_3773_, v___y_3774_, v___y_3775_, v___y_3776_, v___y_3777_, v___y_3778_, v___y_3779_);
lean_dec(v___y_3779_);
lean_dec_ref(v___y_3778_);
lean_dec(v___y_3777_);
lean_dec_ref(v___y_3776_);
lean_dec(v___y_3775_);
lean_dec_ref(v___y_3774_);
lean_dec(v___y_3773_);
lean_dec_ref(v___y_3772_);
lean_dec(v___y_3771_);
lean_dec(v___y_3770_);
lean_dec_ref(v___y_3769_);
return v_res_3781_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__0___redArg(lean_object* v_cls_3782_, lean_object* v_msg_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_){
_start:
{
lean_object* v_ref_3789_; lean_object* v___x_3790_; lean_object* v_a_3791_; lean_object* v___x_3793_; uint8_t v_isShared_3794_; uint8_t v_isSharedCheck_3836_; 
v_ref_3789_ = lean_ctor_get(v___y_3786_, 2);
v___x_3790_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_varToExpr_spec__1_spec__1(v_msg_3783_, v___y_3784_, v___y_3785_, v___y_3786_, v___y_3787_);
v_a_3791_ = lean_ctor_get(v___x_3790_, 0);
v_isSharedCheck_3836_ = !lean_is_exclusive(v___x_3790_);
if (v_isSharedCheck_3836_ == 0)
{
v___x_3793_ = v___x_3790_;
v_isShared_3794_ = v_isSharedCheck_3836_;
goto v_resetjp_3792_;
}
else
{
lean_inc(v_a_3791_);
lean_dec(v___x_3790_);
v___x_3793_ = lean_box(0);
v_isShared_3794_ = v_isSharedCheck_3836_;
goto v_resetjp_3792_;
}
v_resetjp_3792_:
{
lean_object* v___x_3795_; lean_object* v_traceState_3796_; lean_object* v_env_3797_; lean_object* v_nextMacroScope_3798_; lean_object* v_ngen_3799_; lean_object* v_auxDeclNGen_3800_; lean_object* v_cache_3801_; lean_object* v_recordedDeps_3802_; lean_object* v_messages_3803_; lean_object* v_infoState_3804_; lean_object* v_snapshotTasks_3805_; lean_object* v___x_3807_; uint8_t v_isShared_3808_; uint8_t v_isSharedCheck_3835_; 
v___x_3795_ = lean_st_ref_take(v___y_3787_);
v_traceState_3796_ = lean_ctor_get(v___x_3795_, 4);
v_env_3797_ = lean_ctor_get(v___x_3795_, 0);
v_nextMacroScope_3798_ = lean_ctor_get(v___x_3795_, 1);
v_ngen_3799_ = lean_ctor_get(v___x_3795_, 2);
v_auxDeclNGen_3800_ = lean_ctor_get(v___x_3795_, 3);
v_cache_3801_ = lean_ctor_get(v___x_3795_, 5);
v_recordedDeps_3802_ = lean_ctor_get(v___x_3795_, 6);
v_messages_3803_ = lean_ctor_get(v___x_3795_, 7);
v_infoState_3804_ = lean_ctor_get(v___x_3795_, 8);
v_snapshotTasks_3805_ = lean_ctor_get(v___x_3795_, 9);
v_isSharedCheck_3835_ = !lean_is_exclusive(v___x_3795_);
if (v_isSharedCheck_3835_ == 0)
{
v___x_3807_ = v___x_3795_;
v_isShared_3808_ = v_isSharedCheck_3835_;
goto v_resetjp_3806_;
}
else
{
lean_inc(v_snapshotTasks_3805_);
lean_inc(v_infoState_3804_);
lean_inc(v_messages_3803_);
lean_inc(v_recordedDeps_3802_);
lean_inc(v_cache_3801_);
lean_inc(v_traceState_3796_);
lean_inc(v_auxDeclNGen_3800_);
lean_inc(v_ngen_3799_);
lean_inc(v_nextMacroScope_3798_);
lean_inc(v_env_3797_);
lean_dec(v___x_3795_);
v___x_3807_ = lean_box(0);
v_isShared_3808_ = v_isSharedCheck_3835_;
goto v_resetjp_3806_;
}
v_resetjp_3806_:
{
uint64_t v_tid_3809_; lean_object* v_traces_3810_; lean_object* v___x_3812_; uint8_t v_isShared_3813_; uint8_t v_isSharedCheck_3834_; 
v_tid_3809_ = lean_ctor_get_uint64(v_traceState_3796_, sizeof(void*)*1);
v_traces_3810_ = lean_ctor_get(v_traceState_3796_, 0);
v_isSharedCheck_3834_ = !lean_is_exclusive(v_traceState_3796_);
if (v_isSharedCheck_3834_ == 0)
{
v___x_3812_ = v_traceState_3796_;
v_isShared_3813_ = v_isSharedCheck_3834_;
goto v_resetjp_3811_;
}
else
{
lean_inc(v_traces_3810_);
lean_dec(v_traceState_3796_);
v___x_3812_ = lean_box(0);
v_isShared_3813_ = v_isSharedCheck_3834_;
goto v_resetjp_3811_;
}
v_resetjp_3811_:
{
lean_object* v___x_3814_; lean_object* v___x_3815_; double v___x_3816_; uint8_t v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3825_; 
v___x_3814_ = lean_box(0);
v___x_3815_ = lean_box(0);
v___x_3816_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__0);
v___x_3817_ = 0;
v___x_3818_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__1));
v___x_3819_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3819_, 0, v_cls_3782_);
lean_ctor_set(v___x_3819_, 1, v___x_3815_);
lean_ctor_set(v___x_3819_, 2, v___x_3818_);
lean_ctor_set_float(v___x_3819_, sizeof(void*)*3, v___x_3816_);
lean_ctor_set_float(v___x_3819_, sizeof(void*)*3 + 8, v___x_3816_);
lean_ctor_set_uint8(v___x_3819_, sizeof(void*)*3 + 16, v___x_3817_);
v___x_3820_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go_spec__0___redArg___closed__2));
v___x_3821_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3821_, 0, v___x_3819_);
lean_ctor_set(v___x_3821_, 1, v_a_3791_);
lean_ctor_set(v___x_3821_, 2, v___x_3820_);
lean_inc(v_ref_3789_);
v___x_3822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3822_, 0, v_ref_3789_);
lean_ctor_set(v___x_3822_, 1, v___x_3821_);
v___x_3823_ = l_Lean_PersistentArray_push___redArg(v_traces_3810_, v___x_3822_);
if (v_isShared_3813_ == 0)
{
lean_ctor_set(v___x_3812_, 0, v___x_3823_);
v___x_3825_ = v___x_3812_;
goto v_reusejp_3824_;
}
else
{
lean_object* v_reuseFailAlloc_3833_; 
v_reuseFailAlloc_3833_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3833_, 0, v___x_3823_);
lean_ctor_set_uint64(v_reuseFailAlloc_3833_, sizeof(void*)*1, v_tid_3809_);
v___x_3825_ = v_reuseFailAlloc_3833_;
goto v_reusejp_3824_;
}
v_reusejp_3824_:
{
lean_object* v___x_3827_; 
if (v_isShared_3808_ == 0)
{
lean_ctor_set(v___x_3807_, 4, v___x_3825_);
v___x_3827_ = v___x_3807_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3832_; 
v_reuseFailAlloc_3832_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3832_, 0, v_env_3797_);
lean_ctor_set(v_reuseFailAlloc_3832_, 1, v_nextMacroScope_3798_);
lean_ctor_set(v_reuseFailAlloc_3832_, 2, v_ngen_3799_);
lean_ctor_set(v_reuseFailAlloc_3832_, 3, v_auxDeclNGen_3800_);
lean_ctor_set(v_reuseFailAlloc_3832_, 4, v___x_3825_);
lean_ctor_set(v_reuseFailAlloc_3832_, 5, v_cache_3801_);
lean_ctor_set(v_reuseFailAlloc_3832_, 6, v_recordedDeps_3802_);
lean_ctor_set(v_reuseFailAlloc_3832_, 7, v_messages_3803_);
lean_ctor_set(v_reuseFailAlloc_3832_, 8, v_infoState_3804_);
lean_ctor_set(v_reuseFailAlloc_3832_, 9, v_snapshotTasks_3805_);
v___x_3827_ = v_reuseFailAlloc_3832_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
lean_object* v___x_3828_; lean_object* v___x_3830_; 
v___x_3828_ = lean_st_ref_put(v___y_3787_, v___x_3827_);
if (v_isShared_3794_ == 0)
{
lean_ctor_set(v___x_3793_, 0, v___x_3814_);
v___x_3830_ = v___x_3793_;
goto v_reusejp_3829_;
}
else
{
lean_object* v_reuseFailAlloc_3831_; 
v_reuseFailAlloc_3831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3831_, 0, v___x_3814_);
v___x_3830_ = v_reuseFailAlloc_3831_;
goto v_reusejp_3829_;
}
v_reusejp_3829_:
{
return v___x_3830_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__0___redArg___boxed(lean_object* v_cls_3837_, lean_object* v_msg_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_){
_start:
{
lean_object* v_res_3844_; 
v_res_3844_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__0___redArg(v_cls_3837_, v_msg_3838_, v___y_3839_, v___y_3840_, v___y_3841_, v___y_3842_);
lean_dec(v___y_3842_);
lean_dec_ref(v___y_3841_);
lean_dec(v___y_3840_);
lean_dec_ref(v___y_3839_);
return v_res_3844_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__2(uint8_t v___x_3845_, lean_object* v___f_3846_, lean_object* v_____r_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_){
_start:
{
lean_object* v___x_3860_; lean_object* v_caches_3861_; lean_object* v_typeAnalysis_3862_; lean_object* v_target_3863_; lean_object* v_hypotheses_3864_; lean_object* v___x_3866_; uint8_t v_isShared_3867_; uint8_t v_isSharedCheck_3874_; 
v___x_3860_ = lean_st_ref_take(v___y_3849_);
v_caches_3861_ = lean_ctor_get(v___x_3860_, 0);
v_typeAnalysis_3862_ = lean_ctor_get(v___x_3860_, 1);
v_target_3863_ = lean_ctor_get(v___x_3860_, 2);
v_hypotheses_3864_ = lean_ctor_get(v___x_3860_, 3);
v_isSharedCheck_3874_ = !lean_is_exclusive(v___x_3860_);
if (v_isSharedCheck_3874_ == 0)
{
v___x_3866_ = v___x_3860_;
v_isShared_3867_ = v_isSharedCheck_3874_;
goto v_resetjp_3865_;
}
else
{
lean_inc(v_hypotheses_3864_);
lean_inc(v_target_3863_);
lean_inc(v_typeAnalysis_3862_);
lean_inc(v_caches_3861_);
lean_dec(v___x_3860_);
v___x_3866_ = lean_box(0);
v_isShared_3867_ = v_isSharedCheck_3874_;
goto v_resetjp_3865_;
}
v_resetjp_3865_:
{
lean_object* v___x_3868_; lean_object* v___x_3870_; 
v___x_3868_ = lean_box(0);
if (v_isShared_3867_ == 0)
{
v___x_3870_ = v___x_3866_;
goto v_reusejp_3869_;
}
else
{
lean_object* v_reuseFailAlloc_3873_; 
v_reuseFailAlloc_3873_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_3873_, 0, v_caches_3861_);
lean_ctor_set(v_reuseFailAlloc_3873_, 1, v_typeAnalysis_3862_);
lean_ctor_set(v_reuseFailAlloc_3873_, 2, v_target_3863_);
lean_ctor_set(v_reuseFailAlloc_3873_, 3, v_hypotheses_3864_);
v___x_3870_ = v_reuseFailAlloc_3873_;
goto v_reusejp_3869_;
}
v_reusejp_3869_:
{
lean_object* v___x_3871_; lean_object* v___x_3872_; 
lean_ctor_set_uint8(v___x_3870_, sizeof(void*)*4, v___x_3845_);
v___x_3871_ = lean_st_ref_put(v___y_3849_, v___x_3870_);
lean_inc(v___y_3858_);
lean_inc_ref(v___y_3857_);
lean_inc(v___y_3856_);
lean_inc_ref(v___y_3855_);
lean_inc(v___y_3854_);
lean_inc_ref(v___y_3853_);
lean_inc(v___y_3852_);
lean_inc_ref(v___y_3851_);
lean_inc(v___y_3850_);
lean_inc(v___y_3849_);
lean_inc_ref(v___y_3848_);
v___x_3872_ = lean_apply_13(v___f_3846_, v___x_3868_, v___y_3848_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_, v___y_3856_, v___y_3857_, v___y_3858_, lean_box(0));
return v___x_3872_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__2___boxed(lean_object* v___x_3875_, lean_object* v___f_3876_, lean_object* v_____r_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_){
_start:
{
uint8_t v___x_10093__boxed_3890_; lean_object* v_res_3891_; 
v___x_10093__boxed_3890_ = lean_unbox(v___x_3875_);
v_res_3891_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__2(v___x_10093__boxed_3890_, v___f_3876_, v_____r_3877_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_, v___y_3886_, v___y_3887_, v___y_3888_);
lean_dec(v___y_3888_);
lean_dec_ref(v___y_3887_);
lean_dec(v___y_3886_);
lean_dec_ref(v___y_3885_);
lean_dec(v___y_3884_);
lean_dec_ref(v___y_3883_);
lean_dec(v___y_3882_);
lean_dec_ref(v___y_3881_);
lean_dec(v___y_3880_);
lean_dec(v___y_3879_);
lean_dec_ref(v___y_3878_);
return v_res_3891_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_3893_; lean_object* v___f_3894_; lean_object* v_methods_3895_; 
v___x_3893_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNfpost___boxed), 11, 0);
v___f_3894_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__0));
v_methods_3895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_methods_3895_, 0, v___f_3894_);
lean_ctor_set(v_methods_3895_, 1, v___x_3893_);
return v_methods_3895_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_3897_; lean_object* v___x_3898_; 
v___x_3897_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__2));
v___x_3898_ = l_Lean_stringToMessageData(v___x_3897_);
return v___x_3898_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg(lean_object* v_upperBound_3899_, lean_object* v___x_3900_, lean_object* v_config_3901_, lean_object* v_a_3902_, lean_object* v_b_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_, lean_object* v___y_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_){
_start:
{
lean_object* v___y_3917_; uint8_t v___x_3939_; 
v___x_3939_ = lean_nat_dec_lt(v_a_3902_, v_upperBound_3899_);
if (v___x_3939_ == 0)
{
lean_object* v___x_3940_; 
lean_dec(v_a_3902_);
lean_dec_ref(v_config_3901_);
v___x_3940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3940_, 0, v_b_3903_);
return v___x_3940_;
}
else
{
lean_object* v_snd_3941_; lean_object* v___x_3943_; uint8_t v_isShared_3944_; uint8_t v_isSharedCheck_4015_; 
v_snd_3941_ = lean_ctor_get(v_b_3903_, 1);
v_isSharedCheck_4015_ = !lean_is_exclusive(v_b_3903_);
if (v_isSharedCheck_4015_ == 0)
{
lean_object* v_unused_4016_; 
v_unused_4016_ = lean_ctor_get(v_b_3903_, 0);
lean_dec(v_unused_4016_);
v___x_3943_ = v_b_3903_;
v_isShared_3944_ = v_isSharedCheck_4015_;
goto v_resetjp_3942_;
}
else
{
lean_inc(v_snd_3941_);
lean_dec(v_b_3903_);
v___x_3943_ = lean_box(0);
v_isShared_3944_ = v_isSharedCheck_4015_;
goto v_resetjp_3942_;
}
v_resetjp_3942_:
{
uint8_t v___x_3945_; lean_object* v_methods_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; 
v___x_3945_ = 1;
v_methods_3946_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__1);
v___x_3947_ = lean_box(0);
v___x_3948_ = lean_array_fget_borrowed(v___x_3900_, v_a_3902_);
lean_inc(v___x_3948_);
lean_inc_ref(v_config_3901_);
v___x_3949_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_simpHyp___redArg(v___x_3945_, v_methods_3946_, v_config_3901_, v___x_3948_, v___y_3905_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_);
if (lean_obj_tag(v___x_3949_) == 0)
{
lean_object* v_a_3950_; lean_object* v_type_3951_; lean_object* v_value_3952_; uint8_t v___x_3953_; 
v_a_3950_ = lean_ctor_get(v___x_3949_, 0);
lean_inc(v_a_3950_);
lean_dec_ref_known(v___x_3949_, 1);
v_type_3951_ = lean_ctor_get(v_a_3950_, 1);
v_value_3952_ = lean_ctor_get(v_a_3950_, 2);
v___x_3953_ = l_Lean_Expr_isFalse(v_type_3951_);
if (v___x_3953_ == 0)
{
lean_object* v_type_3954_; lean_object* v___f_3955_; uint8_t v___x_3956_; 
lean_del_object(v___x_3943_);
v_type_3954_ = lean_ctor_get(v___x_3948_, 1);
lean_inc(v_a_3950_);
lean_inc(v_snd_3941_);
v___f_3955_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__1___boxed), 16, 3);
lean_closure_set(v___f_3955_, 0, v_snd_3941_);
lean_closure_set(v___f_3955_, 1, v_a_3950_);
lean_closure_set(v___f_3955_, 2, v___x_3947_);
v___x_3956_ = lean_expr_eqv(v_type_3954_, v_type_3951_);
if (v___x_3956_ == 0)
{
lean_object* v_toCold_3957_; lean_object* v_options_3958_; lean_object* v_inheritedTraceOptions_3959_; uint8_t v_hasTrace_3960_; 
lean_inc_ref(v_type_3951_);
lean_dec(v_a_3950_);
lean_dec(v_snd_3941_);
v_toCold_3957_ = lean_ctor_get(v___y_3913_, 0);
v_options_3958_ = lean_ctor_get(v_toCold_3957_, 2);
v_inheritedTraceOptions_3959_ = lean_ctor_get(v_toCold_3957_, 11);
v_hasTrace_3960_ = lean_ctor_get_uint8(v_options_3958_, sizeof(void*)*1);
if (v_hasTrace_3960_ == 0)
{
lean_dec_ref(v_type_3951_);
goto v___jp_3961_;
}
else
{
lean_object* v___x_3964_; lean_object* v___x_3965_; uint8_t v___x_3966_; 
v___x_3964_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__3));
v___x_3965_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6, &l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Normalize_AC_0__Lean_Meta_Tactic_BVDecide_Normalize_VarStateM_computeCoefficients_go___closed__6);
v___x_3966_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3959_, v_options_3958_, v___x_3965_);
if (v___x_3966_ == 0)
{
lean_dec_ref(v_type_3951_);
goto v___jp_3961_;
}
else
{
lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; 
lean_inc_ref(v_type_3954_);
v___x_3967_ = l_Lean_MessageData_ofExpr(v_type_3954_);
v___x_3968_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___closed__3);
v___x_3969_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3969_, 0, v___x_3967_);
lean_ctor_set(v___x_3969_, 1, v___x_3968_);
v___x_3970_ = l_Lean_MessageData_ofExpr(v_type_3951_);
v___x_3971_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3971_, 0, v___x_3969_);
lean_ctor_set(v___x_3971_, 1, v___x_3970_);
v___x_3972_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__0___redArg(v___x_3964_, v___x_3971_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_);
if (lean_obj_tag(v___x_3972_) == 0)
{
lean_object* v_a_3973_; lean_object* v___x_3974_; 
v_a_3973_ = lean_ctor_get(v___x_3972_, 0);
lean_inc(v_a_3973_);
lean_dec_ref_known(v___x_3972_, 1);
v___x_3974_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__2(v___x_3939_, v___f_3955_, v_a_3973_, v___y_3904_, v___y_3905_, v___y_3906_, v___y_3907_, v___y_3908_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_);
v___y_3917_ = v___x_3974_;
goto v___jp_3916_;
}
else
{
lean_object* v_a_3975_; lean_object* v___x_3977_; uint8_t v_isShared_3978_; uint8_t v_isSharedCheck_3982_; 
lean_dec_ref(v___f_3955_);
lean_dec(v_a_3902_);
lean_dec_ref(v_config_3901_);
v_a_3975_ = lean_ctor_get(v___x_3972_, 0);
v_isSharedCheck_3982_ = !lean_is_exclusive(v___x_3972_);
if (v_isSharedCheck_3982_ == 0)
{
v___x_3977_ = v___x_3972_;
v_isShared_3978_ = v_isSharedCheck_3982_;
goto v_resetjp_3976_;
}
else
{
lean_inc(v_a_3975_);
lean_dec(v___x_3972_);
v___x_3977_ = lean_box(0);
v_isShared_3978_ = v_isSharedCheck_3982_;
goto v_resetjp_3976_;
}
v_resetjp_3976_:
{
lean_object* v___x_3980_; 
if (v_isShared_3978_ == 0)
{
v___x_3980_ = v___x_3977_;
goto v_reusejp_3979_;
}
else
{
lean_object* v_reuseFailAlloc_3981_; 
v_reuseFailAlloc_3981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3981_, 0, v_a_3975_);
v___x_3980_ = v_reuseFailAlloc_3981_;
goto v_reusejp_3979_;
}
v_reusejp_3979_:
{
return v___x_3980_;
}
}
}
}
}
v___jp_3961_:
{
lean_object* v___x_3962_; lean_object* v___x_3963_; 
v___x_3962_ = lean_box(0);
v___x_3963_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__2(v___x_3939_, v___f_3955_, v___x_3962_, v___y_3904_, v___y_3905_, v___y_3906_, v___y_3907_, v___y_3908_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_);
v___y_3917_ = v___x_3963_;
goto v___jp_3916_;
}
}
else
{
lean_object* v___x_3983_; lean_object* v___x_3984_; 
lean_dec_ref(v___f_3955_);
v___x_3983_ = lean_box(0);
v___x_3984_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___lam__1(v_snd_3941_, v_a_3950_, v___x_3947_, v___x_3983_, v___y_3904_, v___y_3905_, v___y_3906_, v___y_3907_, v___y_3908_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_);
v___y_3917_ = v___x_3984_;
goto v___jp_3916_;
}
}
else
{
lean_object* v___x_3985_; 
lean_inc_ref(v_value_3952_);
lean_dec(v_a_3950_);
lean_dec(v_a_3902_);
lean_dec_ref(v_config_3901_);
v___x_3985_ = l_Lean_Meta_Tactic_BVDecide_Normalize_PreProcessM_closeTarget___redArg(v_value_3952_, v___y_3905_, v___y_3906_, v___y_3907_, v___y_3908_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_);
if (lean_obj_tag(v___x_3985_) == 0)
{
lean_object* v___x_3987_; uint8_t v_isShared_3988_; uint8_t v_isSharedCheck_3997_; 
v_isSharedCheck_3997_ = !lean_is_exclusive(v___x_3985_);
if (v_isSharedCheck_3997_ == 0)
{
lean_object* v_unused_3998_; 
v_unused_3998_ = lean_ctor_get(v___x_3985_, 0);
lean_dec(v_unused_3998_);
v___x_3987_ = v___x_3985_;
v_isShared_3988_ = v_isSharedCheck_3997_;
goto v_resetjp_3986_;
}
else
{
lean_dec(v___x_3985_);
v___x_3987_ = lean_box(0);
v_isShared_3988_ = v_isSharedCheck_3997_;
goto v_resetjp_3986_;
}
v_resetjp_3986_:
{
lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3992_; 
v___x_3989_ = lean_box(v___x_3953_);
v___x_3990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3990_, 0, v___x_3989_);
if (v_isShared_3944_ == 0)
{
lean_ctor_set(v___x_3943_, 0, v___x_3990_);
v___x_3992_ = v___x_3943_;
goto v_reusejp_3991_;
}
else
{
lean_object* v_reuseFailAlloc_3996_; 
v_reuseFailAlloc_3996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3996_, 0, v___x_3990_);
lean_ctor_set(v_reuseFailAlloc_3996_, 1, v_snd_3941_);
v___x_3992_ = v_reuseFailAlloc_3996_;
goto v_reusejp_3991_;
}
v_reusejp_3991_:
{
lean_object* v___x_3994_; 
if (v_isShared_3988_ == 0)
{
lean_ctor_set(v___x_3987_, 0, v___x_3992_);
v___x_3994_ = v___x_3987_;
goto v_reusejp_3993_;
}
else
{
lean_object* v_reuseFailAlloc_3995_; 
v_reuseFailAlloc_3995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3995_, 0, v___x_3992_);
v___x_3994_ = v_reuseFailAlloc_3995_;
goto v_reusejp_3993_;
}
v_reusejp_3993_:
{
return v___x_3994_;
}
}
}
}
else
{
lean_object* v_a_3999_; lean_object* v___x_4001_; uint8_t v_isShared_4002_; uint8_t v_isSharedCheck_4006_; 
lean_del_object(v___x_3943_);
lean_dec(v_snd_3941_);
v_a_3999_ = lean_ctor_get(v___x_3985_, 0);
v_isSharedCheck_4006_ = !lean_is_exclusive(v___x_3985_);
if (v_isSharedCheck_4006_ == 0)
{
v___x_4001_ = v___x_3985_;
v_isShared_4002_ = v_isSharedCheck_4006_;
goto v_resetjp_4000_;
}
else
{
lean_inc(v_a_3999_);
lean_dec(v___x_3985_);
v___x_4001_ = lean_box(0);
v_isShared_4002_ = v_isSharedCheck_4006_;
goto v_resetjp_4000_;
}
v_resetjp_4000_:
{
lean_object* v___x_4004_; 
if (v_isShared_4002_ == 0)
{
v___x_4004_ = v___x_4001_;
goto v_reusejp_4003_;
}
else
{
lean_object* v_reuseFailAlloc_4005_; 
v_reuseFailAlloc_4005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4005_, 0, v_a_3999_);
v___x_4004_ = v_reuseFailAlloc_4005_;
goto v_reusejp_4003_;
}
v_reusejp_4003_:
{
return v___x_4004_;
}
}
}
}
}
else
{
lean_object* v_a_4007_; lean_object* v___x_4009_; uint8_t v_isShared_4010_; uint8_t v_isSharedCheck_4014_; 
lean_del_object(v___x_3943_);
lean_dec(v_snd_3941_);
lean_dec(v_a_3902_);
lean_dec_ref(v_config_3901_);
v_a_4007_ = lean_ctor_get(v___x_3949_, 0);
v_isSharedCheck_4014_ = !lean_is_exclusive(v___x_3949_);
if (v_isSharedCheck_4014_ == 0)
{
v___x_4009_ = v___x_3949_;
v_isShared_4010_ = v_isSharedCheck_4014_;
goto v_resetjp_4008_;
}
else
{
lean_inc(v_a_4007_);
lean_dec(v___x_3949_);
v___x_4009_ = lean_box(0);
v_isShared_4010_ = v_isSharedCheck_4014_;
goto v_resetjp_4008_;
}
v_resetjp_4008_:
{
lean_object* v___x_4012_; 
if (v_isShared_4010_ == 0)
{
v___x_4012_ = v___x_4009_;
goto v_reusejp_4011_;
}
else
{
lean_object* v_reuseFailAlloc_4013_; 
v_reuseFailAlloc_4013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4013_, 0, v_a_4007_);
v___x_4012_ = v_reuseFailAlloc_4013_;
goto v_reusejp_4011_;
}
v_reusejp_4011_:
{
return v___x_4012_;
}
}
}
}
}
v___jp_3916_:
{
if (lean_obj_tag(v___y_3917_) == 0)
{
lean_object* v_a_3918_; lean_object* v___x_3920_; uint8_t v_isShared_3921_; uint8_t v_isSharedCheck_3930_; 
v_a_3918_ = lean_ctor_get(v___y_3917_, 0);
v_isSharedCheck_3930_ = !lean_is_exclusive(v___y_3917_);
if (v_isSharedCheck_3930_ == 0)
{
v___x_3920_ = v___y_3917_;
v_isShared_3921_ = v_isSharedCheck_3930_;
goto v_resetjp_3919_;
}
else
{
lean_inc(v_a_3918_);
lean_dec(v___y_3917_);
v___x_3920_ = lean_box(0);
v_isShared_3921_ = v_isSharedCheck_3930_;
goto v_resetjp_3919_;
}
v_resetjp_3919_:
{
if (lean_obj_tag(v_a_3918_) == 0)
{
lean_object* v_a_3922_; lean_object* v___x_3924_; 
lean_dec(v_a_3902_);
lean_dec_ref(v_config_3901_);
v_a_3922_ = lean_ctor_get(v_a_3918_, 0);
lean_inc(v_a_3922_);
lean_dec_ref_known(v_a_3918_, 1);
if (v_isShared_3921_ == 0)
{
lean_ctor_set(v___x_3920_, 0, v_a_3922_);
v___x_3924_ = v___x_3920_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v_a_3922_);
v___x_3924_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
return v___x_3924_;
}
}
else
{
lean_object* v_a_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; 
lean_del_object(v___x_3920_);
v_a_3926_ = lean_ctor_get(v_a_3918_, 0);
lean_inc(v_a_3926_);
lean_dec_ref_known(v_a_3918_, 1);
v___x_3927_ = lean_unsigned_to_nat(1u);
v___x_3928_ = lean_nat_add(v_a_3902_, v___x_3927_);
lean_dec(v_a_3902_);
v_a_3902_ = v___x_3928_;
v_b_3903_ = v_a_3926_;
goto _start;
}
}
}
else
{
lean_object* v_a_3931_; lean_object* v___x_3933_; uint8_t v_isShared_3934_; uint8_t v_isSharedCheck_3938_; 
lean_dec(v_a_3902_);
lean_dec_ref(v_config_3901_);
v_a_3931_ = lean_ctor_get(v___y_3917_, 0);
v_isSharedCheck_3938_ = !lean_is_exclusive(v___y_3917_);
if (v_isSharedCheck_3938_ == 0)
{
v___x_3933_ = v___y_3917_;
v_isShared_3934_ = v_isSharedCheck_3938_;
goto v_resetjp_3932_;
}
else
{
lean_inc(v_a_3931_);
lean_dec(v___y_3917_);
v___x_3933_ = lean_box(0);
v_isShared_3934_ = v_isSharedCheck_3938_;
goto v_resetjp_3932_;
}
v_resetjp_3932_:
{
lean_object* v___x_3936_; 
if (v_isShared_3934_ == 0)
{
v___x_3936_ = v___x_3933_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3937_; 
v_reuseFailAlloc_3937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3937_, 0, v_a_3931_);
v___x_3936_ = v_reuseFailAlloc_3937_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
return v___x_3936_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_4017_ = _args[0];
lean_object* v___x_4018_ = _args[1];
lean_object* v_config_4019_ = _args[2];
lean_object* v_a_4020_ = _args[3];
lean_object* v_b_4021_ = _args[4];
lean_object* v___y_4022_ = _args[5];
lean_object* v___y_4023_ = _args[6];
lean_object* v___y_4024_ = _args[7];
lean_object* v___y_4025_ = _args[8];
lean_object* v___y_4026_ = _args[9];
lean_object* v___y_4027_ = _args[10];
lean_object* v___y_4028_ = _args[11];
lean_object* v___y_4029_ = _args[12];
lean_object* v___y_4030_ = _args[13];
lean_object* v___y_4031_ = _args[14];
lean_object* v___y_4032_ = _args[15];
lean_object* v___y_4033_ = _args[16];
_start:
{
lean_object* v_res_4034_; 
v_res_4034_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg(v_upperBound_4017_, v___x_4018_, v_config_4019_, v_a_4020_, v_b_4021_, v___y_4022_, v___y_4023_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_, v___y_4029_, v___y_4030_, v___y_4031_, v___y_4032_);
lean_dec(v___y_4032_);
lean_dec_ref(v___y_4031_);
lean_dec(v___y_4030_);
lean_dec_ref(v___y_4029_);
lean_dec(v___y_4028_);
lean_dec_ref(v___y_4027_);
lean_dec(v___y_4026_);
lean_dec_ref(v___y_4025_);
lean_dec(v___y_4024_);
lean_dec(v___y_4023_);
lean_dec_ref(v___y_4022_);
lean_dec_ref(v___x_4018_);
lean_dec(v_upperBound_4017_);
return v_res_4034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___lam__0(lean_object* v_config_4035_, lean_object* v___y_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_){
_start:
{
lean_object* v___x_4048_; lean_object* v_hypotheses_4049_; lean_object* v___x_4050_; lean_object* v_newHyps_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; 
v___x_4048_ = lean_st_ref_get(v___y_4037_);
v_hypotheses_4049_ = lean_ctor_get(v___x_4048_, 3);
lean_inc_ref(v_hypotheses_4049_);
lean_dec(v___x_4048_);
v___x_4050_ = lean_array_get_size(v_hypotheses_4049_);
v_newHyps_4051_ = lean_mk_empty_array_with_capacity(v___x_4050_);
v___x_4052_ = lean_unsigned_to_nat(0u);
v___x_4053_ = lean_box(0);
v___x_4054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4054_, 0, v___x_4053_);
lean_ctor_set(v___x_4054_, 1, v_newHyps_4051_);
v___x_4055_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg(v___x_4050_, v_hypotheses_4049_, v_config_4035_, v___x_4052_, v___x_4054_, v___y_4036_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_, v___y_4041_, v___y_4042_, v___y_4043_, v___y_4044_, v___y_4045_, v___y_4046_);
lean_dec_ref(v_hypotheses_4049_);
if (lean_obj_tag(v___x_4055_) == 0)
{
lean_object* v_a_4056_; lean_object* v___x_4058_; uint8_t v_isShared_4059_; uint8_t v_isSharedCheck_4085_; 
v_a_4056_ = lean_ctor_get(v___x_4055_, 0);
v_isSharedCheck_4085_ = !lean_is_exclusive(v___x_4055_);
if (v_isSharedCheck_4085_ == 0)
{
v___x_4058_ = v___x_4055_;
v_isShared_4059_ = v_isSharedCheck_4085_;
goto v_resetjp_4057_;
}
else
{
lean_inc(v_a_4056_);
lean_dec(v___x_4055_);
v___x_4058_ = lean_box(0);
v_isShared_4059_ = v_isSharedCheck_4085_;
goto v_resetjp_4057_;
}
v_resetjp_4057_:
{
lean_object* v_fst_4060_; 
v_fst_4060_ = lean_ctor_get(v_a_4056_, 0);
if (lean_obj_tag(v_fst_4060_) == 0)
{
lean_object* v_snd_4061_; lean_object* v___x_4062_; lean_object* v_caches_4063_; lean_object* v_typeAnalysis_4064_; lean_object* v_target_4065_; uint8_t v_didChange_4066_; lean_object* v___x_4068_; uint8_t v_isShared_4069_; uint8_t v_isSharedCheck_4079_; 
v_snd_4061_ = lean_ctor_get(v_a_4056_, 1);
lean_inc(v_snd_4061_);
lean_dec(v_a_4056_);
v___x_4062_ = lean_st_ref_take(v___y_4037_);
v_caches_4063_ = lean_ctor_get(v___x_4062_, 0);
v_typeAnalysis_4064_ = lean_ctor_get(v___x_4062_, 1);
v_target_4065_ = lean_ctor_get(v___x_4062_, 2);
v_didChange_4066_ = lean_ctor_get_uint8(v___x_4062_, sizeof(void*)*4);
v_isSharedCheck_4079_ = !lean_is_exclusive(v___x_4062_);
if (v_isSharedCheck_4079_ == 0)
{
lean_object* v_unused_4080_; 
v_unused_4080_ = lean_ctor_get(v___x_4062_, 3);
lean_dec(v_unused_4080_);
v___x_4068_ = v___x_4062_;
v_isShared_4069_ = v_isSharedCheck_4079_;
goto v_resetjp_4067_;
}
else
{
lean_inc(v_target_4065_);
lean_inc(v_typeAnalysis_4064_);
lean_inc(v_caches_4063_);
lean_dec(v___x_4062_);
v___x_4068_ = lean_box(0);
v_isShared_4069_ = v_isSharedCheck_4079_;
goto v_resetjp_4067_;
}
v_resetjp_4067_:
{
lean_object* v___x_4071_; 
if (v_isShared_4069_ == 0)
{
lean_ctor_set(v___x_4068_, 3, v_snd_4061_);
v___x_4071_ = v___x_4068_;
goto v_reusejp_4070_;
}
else
{
lean_object* v_reuseFailAlloc_4078_; 
v_reuseFailAlloc_4078_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4078_, 0, v_caches_4063_);
lean_ctor_set(v_reuseFailAlloc_4078_, 1, v_typeAnalysis_4064_);
lean_ctor_set(v_reuseFailAlloc_4078_, 2, v_target_4065_);
lean_ctor_set(v_reuseFailAlloc_4078_, 3, v_snd_4061_);
lean_ctor_set_uint8(v_reuseFailAlloc_4078_, sizeof(void*)*4, v_didChange_4066_);
v___x_4071_ = v_reuseFailAlloc_4078_;
goto v_reusejp_4070_;
}
v_reusejp_4070_:
{
lean_object* v___x_4072_; uint8_t v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4076_; 
v___x_4072_ = lean_st_ref_put(v___y_4037_, v___x_4071_);
v___x_4073_ = 0;
v___x_4074_ = lean_box(v___x_4073_);
if (v_isShared_4059_ == 0)
{
lean_ctor_set(v___x_4058_, 0, v___x_4074_);
v___x_4076_ = v___x_4058_;
goto v_reusejp_4075_;
}
else
{
lean_object* v_reuseFailAlloc_4077_; 
v_reuseFailAlloc_4077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4077_, 0, v___x_4074_);
v___x_4076_ = v_reuseFailAlloc_4077_;
goto v_reusejp_4075_;
}
v_reusejp_4075_:
{
return v___x_4076_;
}
}
}
}
else
{
lean_object* v_val_4081_; lean_object* v___x_4083_; 
lean_inc_ref(v_fst_4060_);
lean_dec(v_a_4056_);
v_val_4081_ = lean_ctor_get(v_fst_4060_, 0);
lean_inc(v_val_4081_);
lean_dec_ref_known(v_fst_4060_, 1);
if (v_isShared_4059_ == 0)
{
lean_ctor_set(v___x_4058_, 0, v_val_4081_);
v___x_4083_ = v___x_4058_;
goto v_reusejp_4082_;
}
else
{
lean_object* v_reuseFailAlloc_4084_; 
v_reuseFailAlloc_4084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4084_, 0, v_val_4081_);
v___x_4083_ = v_reuseFailAlloc_4084_;
goto v_reusejp_4082_;
}
v_reusejp_4082_:
{
return v___x_4083_;
}
}
}
}
else
{
lean_object* v_a_4086_; lean_object* v___x_4088_; uint8_t v_isShared_4089_; uint8_t v_isSharedCheck_4093_; 
v_a_4086_ = lean_ctor_get(v___x_4055_, 0);
v_isSharedCheck_4093_ = !lean_is_exclusive(v___x_4055_);
if (v_isSharedCheck_4093_ == 0)
{
v___x_4088_ = v___x_4055_;
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
else
{
lean_inc(v_a_4086_);
lean_dec(v___x_4055_);
v___x_4088_ = lean_box(0);
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
v_resetjp_4087_:
{
lean_object* v___x_4091_; 
if (v_isShared_4089_ == 0)
{
v___x_4091_ = v___x_4088_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v_a_4086_);
v___x_4091_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
return v___x_4091_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___lam__0___boxed(lean_object* v_config_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_){
_start:
{
lean_object* v_res_4107_; 
v_res_4107_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___lam__0(v_config_4094_, v___y_4095_, v___y_4096_, v___y_4097_, v___y_4098_, v___y_4099_, v___y_4100_, v___y_4101_, v___y_4102_, v___y_4103_, v___y_4104_, v___y_4105_);
lean_dec(v___y_4105_);
lean_dec_ref(v___y_4104_);
lean_dec(v___y_4103_);
lean_dec_ref(v___y_4102_);
lean_dec(v___y_4101_);
lean_dec_ref(v___y_4100_);
lean_dec(v___y_4099_);
lean_dec_ref(v___y_4098_);
lean_dec(v___y_4097_);
lean_dec(v___y_4096_);
lean_dec_ref(v___y_4095_);
return v_res_4107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___lam__1(lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_){
_start:
{
lean_object* v_config_4120_; lean_object* v_maxSteps_4121_; lean_object* v___x_4122_; lean_object* v_config_4123_; lean_object* v___f_4124_; lean_object* v___x_4125_; lean_object* v_target_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; 
v_config_4120_ = lean_ctor_get(v___y_4108_, 0);
v_maxSteps_4121_ = lean_ctor_get(v_config_4120_, 1);
v___x_4122_ = lean_unsigned_to_nat(2u);
lean_inc(v_maxSteps_4121_);
v_config_4123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_config_4123_, 0, v_maxSteps_4121_);
lean_ctor_set(v_config_4123_, 1, v___x_4122_);
v___f_4124_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___lam__0___boxed), 13, 1);
lean_closure_set(v___f_4124_, 0, v_config_4123_);
v___x_4125_ = lean_st_ref_get(v___y_4109_);
v_target_4126_ = lean_ctor_get(v___x_4125_, 2);
lean_inc_ref(v_target_4126_);
lean_dec(v___x_4125_);
v___x_4127_ = l_Lean_Meta_Tactic_BVDecide_Normalize_Target_mvarId(v_target_4126_);
lean_dec_ref(v_target_4126_);
v___x_4128_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__2___redArg(v___x_4127_, v___f_4124_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_);
return v___x_4128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___lam__1___boxed(lean_object* v___y_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_){
_start:
{
lean_object* v_res_4141_; 
v_res_4141_ = l_Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass___lam__1(v___y_4129_, v___y_4130_, v___y_4131_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_, v___y_4136_, v___y_4137_, v___y_4138_, v___y_4139_);
lean_dec(v___y_4139_);
lean_dec_ref(v___y_4138_);
lean_dec(v___y_4137_);
lean_dec_ref(v___y_4136_);
lean_dec(v___y_4135_);
lean_dec_ref(v___y_4134_);
lean_dec(v___y_4133_);
lean_dec_ref(v___y_4132_);
lean_dec(v___y_4131_);
lean_dec(v___y_4130_);
lean_dec_ref(v___y_4129_);
return v_res_4141_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__0(lean_object* v_cls_4150_, lean_object* v_msg_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_){
_start:
{
lean_object* v___x_4164_; 
v___x_4164_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__0___redArg(v_cls_4150_, v_msg_4151_, v___y_4159_, v___y_4160_, v___y_4161_, v___y_4162_);
return v___x_4164_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__0___boxed(lean_object* v_cls_4165_, lean_object* v_msg_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_){
_start:
{
lean_object* v_res_4179_; 
v_res_4179_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__0(v_cls_4165_, v_msg_4166_, v___y_4167_, v___y_4168_, v___y_4169_, v___y_4170_, v___y_4171_, v___y_4172_, v___y_4173_, v___y_4174_, v___y_4175_, v___y_4176_, v___y_4177_);
lean_dec(v___y_4177_);
lean_dec_ref(v___y_4176_);
lean_dec(v___y_4175_);
lean_dec_ref(v___y_4174_);
lean_dec(v___y_4173_);
lean_dec_ref(v___y_4172_);
lean_dec(v___y_4171_);
lean_dec_ref(v___y_4170_);
lean_dec(v___y_4169_);
lean_dec(v___y_4168_);
lean_dec_ref(v___y_4167_);
return v_res_4179_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1(lean_object* v_upperBound_4180_, lean_object* v___x_4181_, lean_object* v_config_4182_, lean_object* v_inst_4183_, lean_object* v_R_4184_, lean_object* v_a_4185_, lean_object* v_b_4186_, lean_object* v_c_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_, lean_object* v___y_4195_, lean_object* v___y_4196_, lean_object* v___y_4197_, lean_object* v___y_4198_){
_start:
{
lean_object* v___x_4200_; 
v___x_4200_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___redArg(v_upperBound_4180_, v___x_4181_, v_config_4182_, v_a_4185_, v_b_4186_, v___y_4188_, v___y_4189_, v___y_4190_, v___y_4191_, v___y_4192_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_, v___y_4197_, v___y_4198_);
return v___x_4200_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_4201_ = _args[0];
lean_object* v___x_4202_ = _args[1];
lean_object* v_config_4203_ = _args[2];
lean_object* v_inst_4204_ = _args[3];
lean_object* v_R_4205_ = _args[4];
lean_object* v_a_4206_ = _args[5];
lean_object* v_b_4207_ = _args[6];
lean_object* v_c_4208_ = _args[7];
lean_object* v___y_4209_ = _args[8];
lean_object* v___y_4210_ = _args[9];
lean_object* v___y_4211_ = _args[10];
lean_object* v___y_4212_ = _args[11];
lean_object* v___y_4213_ = _args[12];
lean_object* v___y_4214_ = _args[13];
lean_object* v___y_4215_ = _args[14];
lean_object* v___y_4216_ = _args[15];
lean_object* v___y_4217_ = _args[16];
lean_object* v___y_4218_ = _args[17];
lean_object* v___y_4219_ = _args[18];
lean_object* v___y_4220_ = _args[19];
_start:
{
lean_object* v_res_4221_; 
v_res_4221_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Tactic_BVDecide_Normalize_bvAcNormalizePass_spec__1(v_upperBound_4201_, v___x_4202_, v_config_4203_, v_inst_4204_, v_R_4205_, v_a_4206_, v_b_4207_, v_c_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_, v___y_4213_, v___y_4214_, v___y_4215_, v___y_4216_, v___y_4217_, v___y_4218_, v___y_4219_);
lean_dec(v___y_4219_);
lean_dec_ref(v___y_4218_);
lean_dec(v___y_4217_);
lean_dec_ref(v___y_4216_);
lean_dec(v___y_4215_);
lean_dec_ref(v___y_4214_);
lean_dec(v___y_4213_);
lean_dec_ref(v___y_4212_);
lean_dec(v___y_4211_);
lean_dec(v___y_4210_);
lean_dec_ref(v___y_4209_);
lean_dec_ref(v___x_4202_);
lean_dec(v_upperBound_4201_);
return v_res_4221_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_AC_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_AC(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_AC_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_AC(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_AC_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Normalize_AC(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_AC_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_Normalize_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Normalize_AC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Normalize_AC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Normalize_AC(builtin);
}
#ifdef __cplusplus
}
#endif
