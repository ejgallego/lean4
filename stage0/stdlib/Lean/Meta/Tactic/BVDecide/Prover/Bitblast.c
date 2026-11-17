// Lean compiler output
// Module: Lean.Meta.Tactic.BVDecide.Prover.Bitblast
// Imports: public import Lean.Meta.Tactic.BVDecide.Prover.Basic public import Lean.Meta.Tactic.BVDecide.TacticContext import Lean.Meta.Native
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
double lean_float_div(double, double);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Std_Sat_AIG_toGraphviz_invEdgeStyle(uint8_t);
lean_object* lean_nat_land(lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_IO_lazyPure___redArg(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_addAndCompile(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_Meta_nativeEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkStrLit(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_ReifyM_atomsAssignmentMap___redArg(lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_reconstructCounterExample(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_runExternal(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_BVLogicalExpr_bitblast(lean_object*);
lean_object* l_Std_Tactic_BVDecide_instHashableBVBit_hash___boxed(lean_object*);
lean_object* l_Std_Tactic_BVDecide_instDecidableEqBVBit___boxed(lean_object*, lean_object*);
lean_object* l_Std_Sat_AIG_toCNF_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* lean_byte_array_push(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__2;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "compiler"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "extract_closed"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__3_value),LEAN_SCALAR_PTR_LITERAL(25, 100, 103, 244, 164, 70, 204, 201)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__4_value),LEAN_SCALAR_PTR_LITERAL(157, 223, 55, 216, 54, 195, 10, 164)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Compiling proof certificate term"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Compiling and evaluating reflection proof term"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Compiling expr term"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4_spec__8___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sat"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__2_value),LEAN_SCALAR_PTR_LITERAL(174, 199, 37, 233, 64, 174, 173, 134)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "BVDecide"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "BVLogicalExpr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__6_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__7_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__8_value),LEAN_SCALAR_PTR_LITERAL(170, 137, 185, 0, 130, 201, 136, 210)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "bv_decide"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__13_value),LEAN_SCALAR_PTR_LITERAL(33, 50, 202, 5, 86, 233, 189, 240)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "unsat_of_verifyBVExpr_eq_true"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__15_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 119, .m_capacity = 119, .m_length = 118, .m_data = "Tactic `bv_decide` failed: The LRAT certificate could not be verified; evaluating the following term returned `false`:"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__16_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Reflect"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__18_value;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "verifyBVExpr"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__19_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__6_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__7_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__18_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__19_value),LEAN_SCALAR_PTR_LITERAL(98, 197, 94, 16, 136, 54, 174, 95)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__21;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__6_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 161, 28, 104, 237, 118, 82, 71)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__7_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 89, 246, 197, 180, 246, 240)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__18_value),LEAN_SCALAR_PTR_LITERAL(32, 92, 17, 213, 68, 211, 219, 250)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__15_value),LEAN_SCALAR_PTR_LITERAL(39, 247, 82, 233, 7, 29, 35, 28)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__23;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24;
static const lean_string_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__25 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__25_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__25_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__26 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__26_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__27;
static const lean_closure_object l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__28 = (const lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__28_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Obtaining external proof certificate"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Converting AIG to CNF"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Bitblasting BVLogicalExpr to AIG"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__8_spec__19(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__8_spec__19___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__8(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Std_Sat_AIG_CNF_0__Std_Sat_AIG_toCNF_Cache_init___at___00Std_Sat_AIG_toCNF_State_empty___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Sat_AIG_CNF_0__Std_Sat_AIG_toCNF_Cache_init___at___00Std_Sat_AIG_toCNF_State_empty___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0___boxed(lean_object*);
static const lean_array_object l_Std_Sat_AIG_toCNF_State_empty___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Sat_AIG_toCNF_State_empty___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0___closed__0 = (const lean_object*)&l_Std_Sat_AIG_toCNF_State_empty___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toCNF_State_empty___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toCNF_State_empty___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0___boxed(lean_object*);
static const lean_array_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Preparing LRAT reflection term"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6_spec__12(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6_spec__12___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26_spec__30_spec__31___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26_spec__30___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17_spec__24___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17_spec__24___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " -> "};
static const lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg___closed__0 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg___closed__0_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "; "};
static const lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg___closed__1 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg___closed__1_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg___closed__2 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " [label=\""};
static const lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__0 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__0_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__1 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__1_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "\", shape=box];"};
static const lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__2 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__2_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__3 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__3_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__4 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__4_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__5 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__5_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "\", shape=doublecircle];"};
static const lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__6 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__6_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 21, .m_data = " ∧\",shape=trapezium];"};
static const lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__7 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__7_value;
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__17(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__0;
static lean_once_cell_t l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__1;
static const lean_string_object l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Digraph AIG {"};
static const lean_object* l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__2 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__2_value;
static const lean_string_object l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__3 = (const lean_object*)&l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7(lean_object*);
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__10(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__10___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__19_spec__24___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__19___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__20___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__0_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "SAT solver found a counter example."};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__2;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "SAT solver found a proof."};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__4;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__5_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "aig.gv"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__6 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__13___boxed(lean_object**);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__9_spec__21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__9_spec__21___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__9(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__9___boxed(lean_object**);
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0___boxed, .m_arity = 14, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___boxed, .m_arity = 14, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__1_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___boxed, .m_arity = 14, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__2_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Tactic_BVDecide_instHashableBVBit_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__3 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__3_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bv"};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__4 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__4_value),LEAN_SCALAR_PTR_LITERAL(139, 41, 106, 94, 234, 34, 111, 146)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__5 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__6;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "AIG has "};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__7 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__7_value;
static const lean_string_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " nodes."};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__8 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__8_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___boxed, .m_arity = 14, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__9 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__20(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17_spec__24(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__19_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26_spec__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26_spec__30_spec__31(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___lam__0___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___closed__0_value)}};
static const lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(lean_object* v_opts_1_, lean_object* v_opt_2_){
_start:
{
lean_object* v_name_3_; lean_object* v_defValue_4_; lean_object* v_map_5_; lean_object* v___x_6_; 
v_name_3_ = lean_ctor_get(v_opt_2_, 0);
v_defValue_4_ = lean_ctor_get(v_opt_2_, 1);
v_map_5_ = lean_ctor_get(v_opts_1_, 0);
v___x_6_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_5_, v_name_3_);
if (lean_obj_tag(v___x_6_) == 0)
{
lean_inc(v_defValue_4_);
return v_defValue_4_;
}
else
{
lean_object* v_val_7_; 
v_val_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_val_7_);
lean_dec_ref_known(v___x_6_, 1);
if (lean_obj_tag(v_val_7_) == 3)
{
lean_object* v_v_8_; 
v_v_8_ = lean_ctor_get(v_val_7_, 0);
lean_inc(v_v_8_);
lean_dec_ref_known(v_val_7_, 1);
return v_v_8_;
}
else
{
lean_dec(v_val_7_);
lean_inc(v_defValue_4_);
return v_defValue_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0___boxed(lean_object* v_opts_9_, lean_object* v_opt_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v_opts_9_, v_opt_10_);
lean_dec_ref(v_opt_10_);
lean_dec_ref(v_opts_9_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(lean_object* v_o_15_, lean_object* v_k_16_, uint8_t v_v_17_){
_start:
{
lean_object* v_map_18_; uint8_t v_hasTrace_19_; lean_object* v___x_21_; uint8_t v_isShared_22_; uint8_t v_isSharedCheck_33_; 
v_map_18_ = lean_ctor_get(v_o_15_, 0);
v_hasTrace_19_ = lean_ctor_get_uint8(v_o_15_, sizeof(void*)*1);
v_isSharedCheck_33_ = !lean_is_exclusive(v_o_15_);
if (v_isSharedCheck_33_ == 0)
{
v___x_21_ = v_o_15_;
v_isShared_22_ = v_isSharedCheck_33_;
goto v_resetjp_20_;
}
else
{
lean_inc(v_map_18_);
lean_dec(v_o_15_);
v___x_21_ = lean_box(0);
v_isShared_22_ = v_isSharedCheck_33_;
goto v_resetjp_20_;
}
v_resetjp_20_:
{
lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_23_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_23_, 0, v_v_17_);
lean_inc(v_k_16_);
v___x_24_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_16_, v___x_23_, v_map_18_);
if (v_hasTrace_19_ == 0)
{
lean_object* v___x_25_; uint8_t v___x_26_; lean_object* v___x_28_; 
v___x_25_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__1));
v___x_26_ = l_Lean_Name_isPrefixOf(v___x_25_, v_k_16_);
lean_dec(v_k_16_);
if (v_isShared_22_ == 0)
{
lean_ctor_set(v___x_21_, 0, v___x_24_);
v___x_28_ = v___x_21_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v___x_24_);
v___x_28_ = v_reuseFailAlloc_29_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
lean_ctor_set_uint8(v___x_28_, sizeof(void*)*1, v___x_26_);
return v___x_28_;
}
}
else
{
lean_object* v___x_31_; 
lean_dec(v_k_16_);
if (v_isShared_22_ == 0)
{
lean_ctor_set(v___x_21_, 0, v___x_24_);
v___x_31_ = v___x_21_;
goto v_reusejp_30_;
}
else
{
lean_object* v_reuseFailAlloc_32_; 
v_reuseFailAlloc_32_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_32_, 0, v___x_24_);
lean_ctor_set_uint8(v_reuseFailAlloc_32_, sizeof(void*)*1, v_hasTrace_19_);
v___x_31_ = v_reuseFailAlloc_32_;
goto v_reusejp_30_;
}
v_reusejp_30_:
{
return v___x_31_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___boxed(lean_object* v_o_34_, lean_object* v_k_35_, lean_object* v_v_36_){
_start:
{
uint8_t v_v_boxed_37_; lean_object* v_res_38_; 
v_v_boxed_37_ = lean_unbox(v_v_36_);
v_res_38_ = l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_o_34_, v_k_35_, v_v_boxed_37_);
return v_res_38_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__0(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_39_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__1(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__0, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__0_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__0);
v___x_41_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
return v___x_41_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__2(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__1, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__1_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__1);
v___x_43_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
lean_ctor_set(v___x_43_, 1, v___x_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(lean_object* v_name_49_, lean_object* v_value_50_, lean_object* v_type_51_, lean_object* v_a_52_, lean_object* v_a_53_){
_start:
{
lean_object* v_toCold_55_; lean_object* v_currRecDepth_56_; lean_object* v_ref_57_; uint8_t v_suppressElabErrors_58_; uint8_t v_checkDeprecated_59_; uint8_t v_isRecordingDeps_60_; lean_object* v_fileName_61_; lean_object* v_fileMap_62_; lean_object* v_options_63_; lean_object* v_currNamespace_64_; lean_object* v_openDecls_65_; lean_object* v_initHeartbeats_66_; lean_object* v_maxHeartbeats_67_; lean_object* v_quotContext_68_; lean_object* v_currMacroScope_69_; lean_object* v_cancelTk_x3f_70_; lean_object* v_inheritedTraceOptions_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; uint8_t v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; uint8_t v___x_79_; uint8_t v___x_80_; uint16_t v___y_82_; lean_object* v___y_83_; lean_object* v_fileName_84_; lean_object* v_fileMap_85_; lean_object* v_currNamespace_86_; lean_object* v_openDecls_87_; lean_object* v_initHeartbeats_88_; lean_object* v_maxHeartbeats_89_; lean_object* v_quotContext_90_; lean_object* v_currMacroScope_91_; lean_object* v_cancelTk_x3f_92_; lean_object* v_inheritedTraceOptions_93_; lean_object* v_currRecDepth_94_; lean_object* v_ref_95_; uint8_t v_suppressElabErrors_96_; uint8_t v_checkDeprecated_97_; uint8_t v_isRecordingDeps_98_; lean_object* v___y_99_; lean_object* v_nextMacroScope_106_; lean_object* v_ngen_107_; lean_object* v_auxDeclNGen_108_; lean_object* v_traceState_109_; lean_object* v_recordedDeps_110_; lean_object* v_messages_111_; lean_object* v_infoState_112_; lean_object* v_snapshotTasks_113_; lean_object* v___y_114_; uint16_t v___y_115_; lean_object* v___y_116_; uint16_t v___y_121_; lean_object* v___y_122_; uint8_t v___y_123_; lean_object* v___y_141_; 
v_toCold_55_ = lean_ctor_get(v_a_52_, 0);
v_currRecDepth_56_ = lean_ctor_get(v_a_52_, 1);
v_ref_57_ = lean_ctor_get(v_a_52_, 2);
v_suppressElabErrors_58_ = lean_ctor_get_uint8(v_a_52_, sizeof(void*)*3 + 2);
v_checkDeprecated_59_ = lean_ctor_get_uint8(v_a_52_, sizeof(void*)*3 + 3);
v_isRecordingDeps_60_ = lean_ctor_get_uint8(v_a_52_, sizeof(void*)*3 + 4);
v_fileName_61_ = lean_ctor_get(v_toCold_55_, 0);
v_fileMap_62_ = lean_ctor_get(v_toCold_55_, 1);
v_options_63_ = lean_ctor_get(v_toCold_55_, 2);
v_currNamespace_64_ = lean_ctor_get(v_toCold_55_, 4);
v_openDecls_65_ = lean_ctor_get(v_toCold_55_, 5);
v_initHeartbeats_66_ = lean_ctor_get(v_toCold_55_, 6);
v_maxHeartbeats_67_ = lean_ctor_get(v_toCold_55_, 7);
v_quotContext_68_ = lean_ctor_get(v_toCold_55_, 8);
v_currMacroScope_69_ = lean_ctor_get(v_toCold_55_, 9);
v_cancelTk_x3f_70_ = lean_ctor_get(v_toCold_55_, 10);
v_inheritedTraceOptions_71_ = lean_ctor_get(v_toCold_55_, 11);
v___x_72_ = lean_box(0);
lean_inc(v_name_49_);
v___x_73_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_73_, 0, v_name_49_);
lean_ctor_set(v___x_73_, 1, v___x_72_);
lean_ctor_set(v___x_73_, 2, v_type_51_);
v___x_74_ = lean_box(1);
v___x_75_ = 1;
v___x_76_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_76_, 0, v_name_49_);
lean_ctor_set(v___x_76_, 1, v___x_72_);
v___x_77_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_77_, 0, v___x_73_);
lean_ctor_set(v___x_77_, 1, v_value_50_);
lean_ctor_set(v___x_77_, 2, v___x_74_);
lean_ctor_set(v___x_77_, 3, v___x_76_);
lean_ctor_set_uint8(v___x_77_, sizeof(void*)*4, v___x_75_);
v___x_78_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_78_, 0, v___x_77_);
v___x_79_ = 1;
v___x_80_ = 0;
if (v_isRecordingDeps_60_ == 0)
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__5));
lean_inc_ref(v_options_63_);
v___x_151_ = l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1(v_options_63_, v___x_150_, v_isRecordingDeps_60_);
v___y_141_ = v___x_151_;
goto v___jp_140_;
}
else
{
lean_object* v___x_152_; 
lean_inc_ref(v_options_63_);
v___x_152_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_63_);
v___y_141_ = v___x_152_;
goto v___jp_140_;
}
v___jp_81_:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_100_ = l_Lean_maxRecDepth;
v___x_101_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v___y_83_, v___x_100_);
v___x_102_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_102_, 0, v_fileName_84_);
lean_ctor_set(v___x_102_, 1, v_fileMap_85_);
lean_ctor_set(v___x_102_, 2, v___y_83_);
lean_ctor_set(v___x_102_, 3, v___x_101_);
lean_ctor_set(v___x_102_, 4, v_currNamespace_86_);
lean_ctor_set(v___x_102_, 5, v_openDecls_87_);
lean_ctor_set(v___x_102_, 6, v_initHeartbeats_88_);
lean_ctor_set(v___x_102_, 7, v_maxHeartbeats_89_);
lean_ctor_set(v___x_102_, 8, v_quotContext_90_);
lean_ctor_set(v___x_102_, 9, v_currMacroScope_91_);
lean_ctor_set(v___x_102_, 10, v_cancelTk_x3f_92_);
lean_ctor_set(v___x_102_, 11, v_inheritedTraceOptions_93_);
lean_inc(v_ref_95_);
lean_inc(v_currRecDepth_94_);
v___x_103_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_103_, 0, v___x_102_);
lean_ctor_set(v___x_103_, 1, v_currRecDepth_94_);
lean_ctor_set(v___x_103_, 2, v_ref_95_);
lean_ctor_set_uint16(v___x_103_, sizeof(void*)*3, v___y_82_);
lean_ctor_set_uint8(v___x_103_, sizeof(void*)*3 + 2, v_suppressElabErrors_96_);
lean_ctor_set_uint8(v___x_103_, sizeof(void*)*3 + 3, v_checkDeprecated_97_);
lean_ctor_set_uint8(v___x_103_, sizeof(void*)*3 + 4, v_isRecordingDeps_98_);
v___x_104_ = l_Lean_addAndCompile(v___x_78_, v___x_79_, v___x_80_, v___x_103_, v___y_99_);
lean_dec_ref_known(v___x_103_, 3);
return v___x_104_;
}
v___jp_105_:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_117_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___closed__2);
v___x_118_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_118_, 0, v___y_116_);
lean_ctor_set(v___x_118_, 1, v_nextMacroScope_106_);
lean_ctor_set(v___x_118_, 2, v_ngen_107_);
lean_ctor_set(v___x_118_, 3, v_auxDeclNGen_108_);
lean_ctor_set(v___x_118_, 4, v_traceState_109_);
lean_ctor_set(v___x_118_, 5, v___x_117_);
lean_ctor_set(v___x_118_, 6, v_recordedDeps_110_);
lean_ctor_set(v___x_118_, 7, v_messages_111_);
lean_ctor_set(v___x_118_, 8, v_infoState_112_);
lean_ctor_set(v___x_118_, 9, v_snapshotTasks_113_);
v___x_119_ = lean_st_ref_put(v_a_53_, v___x_118_);
lean_inc_ref(v_inheritedTraceOptions_71_);
lean_inc(v_cancelTk_x3f_70_);
lean_inc(v_currMacroScope_69_);
lean_inc(v_quotContext_68_);
lean_inc(v_maxHeartbeats_67_);
lean_inc(v_initHeartbeats_66_);
lean_inc(v_openDecls_65_);
lean_inc(v_currNamespace_64_);
lean_inc_ref(v_fileMap_62_);
lean_inc_ref(v_fileName_61_);
v___y_82_ = v___y_115_;
v___y_83_ = v___y_114_;
v_fileName_84_ = v_fileName_61_;
v_fileMap_85_ = v_fileMap_62_;
v_currNamespace_86_ = v_currNamespace_64_;
v_openDecls_87_ = v_openDecls_65_;
v_initHeartbeats_88_ = v_initHeartbeats_66_;
v_maxHeartbeats_89_ = v_maxHeartbeats_67_;
v_quotContext_90_ = v_quotContext_68_;
v_currMacroScope_91_ = v_currMacroScope_69_;
v_cancelTk_x3f_92_ = v_cancelTk_x3f_70_;
v_inheritedTraceOptions_93_ = v_inheritedTraceOptions_71_;
v_currRecDepth_94_ = v_currRecDepth_56_;
v_ref_95_ = v_ref_57_;
v_suppressElabErrors_96_ = v_suppressElabErrors_58_;
v_checkDeprecated_97_ = v_checkDeprecated_59_;
v_isRecordingDeps_98_ = v_isRecordingDeps_60_;
v___y_99_ = v_a_53_;
goto v___jp_81_;
}
v___jp_120_:
{
lean_object* v___x_124_; lean_object* v_env_125_; lean_object* v_nextMacroScope_126_; lean_object* v_ngen_127_; lean_object* v_auxDeclNGen_128_; lean_object* v_traceState_129_; lean_object* v_recordedDeps_130_; lean_object* v_messages_131_; lean_object* v_infoState_132_; lean_object* v_snapshotTasks_133_; uint16_t v___x_134_; uint16_t v___x_135_; uint16_t v___x_136_; uint8_t v___x_137_; 
v___x_124_ = lean_st_ref_take(v_a_53_);
v_env_125_ = lean_ctor_get(v___x_124_, 0);
lean_inc_ref(v_env_125_);
v_nextMacroScope_126_ = lean_ctor_get(v___x_124_, 1);
lean_inc(v_nextMacroScope_126_);
v_ngen_127_ = lean_ctor_get(v___x_124_, 2);
lean_inc_ref(v_ngen_127_);
v_auxDeclNGen_128_ = lean_ctor_get(v___x_124_, 3);
lean_inc_ref(v_auxDeclNGen_128_);
v_traceState_129_ = lean_ctor_get(v___x_124_, 4);
lean_inc_ref(v_traceState_129_);
v_recordedDeps_130_ = lean_ctor_get(v___x_124_, 6);
lean_inc_ref(v_recordedDeps_130_);
v_messages_131_ = lean_ctor_get(v___x_124_, 7);
lean_inc_ref(v_messages_131_);
v_infoState_132_ = lean_ctor_get(v___x_124_, 8);
lean_inc_ref(v_infoState_132_);
v_snapshotTasks_133_ = lean_ctor_get(v___x_124_, 9);
lean_inc_ref(v_snapshotTasks_133_);
lean_dec(v___x_124_);
v___x_134_ = 512;
v___x_135_ = lean_uint16_land(v___y_121_, v___x_134_);
v___x_136_ = 0;
v___x_137_ = lean_uint16_dec_eq(v___x_135_, v___x_136_);
if (v___x_137_ == 0)
{
lean_object* v___x_138_; 
v___x_138_ = l_Lean_Kernel_enableDiag(v_env_125_, v___x_79_);
v_nextMacroScope_106_ = v_nextMacroScope_126_;
v_ngen_107_ = v_ngen_127_;
v_auxDeclNGen_108_ = v_auxDeclNGen_128_;
v_traceState_109_ = v_traceState_129_;
v_recordedDeps_110_ = v_recordedDeps_130_;
v_messages_111_ = v_messages_131_;
v_infoState_112_ = v_infoState_132_;
v_snapshotTasks_113_ = v_snapshotTasks_133_;
v___y_114_ = v___y_122_;
v___y_115_ = v___y_121_;
v___y_116_ = v___x_138_;
goto v___jp_105_;
}
else
{
lean_object* v___x_139_; 
v___x_139_ = l_Lean_Kernel_enableDiag(v_env_125_, v___y_123_);
v_nextMacroScope_106_ = v_nextMacroScope_126_;
v_ngen_107_ = v_ngen_127_;
v_auxDeclNGen_108_ = v_auxDeclNGen_128_;
v_traceState_109_ = v_traceState_129_;
v_recordedDeps_110_ = v_recordedDeps_130_;
v_messages_111_ = v_messages_131_;
v_infoState_112_ = v_infoState_132_;
v_snapshotTasks_113_ = v_snapshotTasks_133_;
v___y_114_ = v___y_122_;
v___y_115_ = v___y_121_;
v___y_116_ = v___x_139_;
goto v___jp_105_;
}
}
v___jp_140_:
{
uint16_t v___x_142_; lean_object* v___x_143_; lean_object* v_env_144_; uint8_t v___x_145_; uint16_t v___x_146_; uint16_t v___x_147_; uint16_t v___x_148_; uint8_t v___x_149_; 
v___x_142_ = l_Lean_OptionFlags_ofOptions(v___y_141_);
v___x_143_ = lean_st_ref_get(v_a_53_);
v_env_144_ = lean_ctor_get(v___x_143_, 0);
lean_inc_ref(v_env_144_);
lean_dec(v___x_143_);
v___x_145_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_144_);
lean_dec_ref(v_env_144_);
v___x_146_ = 512;
v___x_147_ = lean_uint16_land(v___x_142_, v___x_146_);
v___x_148_ = 0;
v___x_149_ = lean_uint16_dec_eq(v___x_147_, v___x_148_);
if (v___x_149_ == 0)
{
if (v___x_145_ == 0)
{
v___y_121_ = v___x_142_;
v___y_122_ = v___y_141_;
v___y_123_ = v___x_145_;
goto v___jp_120_;
}
else
{
lean_inc_ref(v_inheritedTraceOptions_71_);
lean_inc(v_cancelTk_x3f_70_);
lean_inc(v_currMacroScope_69_);
lean_inc(v_quotContext_68_);
lean_inc(v_maxHeartbeats_67_);
lean_inc(v_initHeartbeats_66_);
lean_inc(v_openDecls_65_);
lean_inc(v_currNamespace_64_);
lean_inc_ref(v_fileMap_62_);
lean_inc_ref(v_fileName_61_);
v___y_82_ = v___x_142_;
v___y_83_ = v___y_141_;
v_fileName_84_ = v_fileName_61_;
v_fileMap_85_ = v_fileMap_62_;
v_currNamespace_86_ = v_currNamespace_64_;
v_openDecls_87_ = v_openDecls_65_;
v_initHeartbeats_88_ = v_initHeartbeats_66_;
v_maxHeartbeats_89_ = v_maxHeartbeats_67_;
v_quotContext_90_ = v_quotContext_68_;
v_currMacroScope_91_ = v_currMacroScope_69_;
v_cancelTk_x3f_92_ = v_cancelTk_x3f_70_;
v_inheritedTraceOptions_93_ = v_inheritedTraceOptions_71_;
v_currRecDepth_94_ = v_currRecDepth_56_;
v_ref_95_ = v_ref_57_;
v_suppressElabErrors_96_ = v_suppressElabErrors_58_;
v_checkDeprecated_97_ = v_checkDeprecated_59_;
v_isRecordingDeps_98_ = v_isRecordingDeps_60_;
v___y_99_ = v_a_53_;
goto v___jp_81_;
}
}
else
{
if (v___x_145_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_71_);
lean_inc(v_cancelTk_x3f_70_);
lean_inc(v_currMacroScope_69_);
lean_inc(v_quotContext_68_);
lean_inc(v_maxHeartbeats_67_);
lean_inc(v_initHeartbeats_66_);
lean_inc(v_openDecls_65_);
lean_inc(v_currNamespace_64_);
lean_inc_ref(v_fileMap_62_);
lean_inc_ref(v_fileName_61_);
v___y_82_ = v___x_142_;
v___y_83_ = v___y_141_;
v_fileName_84_ = v_fileName_61_;
v_fileMap_85_ = v_fileMap_62_;
v_currNamespace_86_ = v_currNamespace_64_;
v_openDecls_87_ = v_openDecls_65_;
v_initHeartbeats_88_ = v_initHeartbeats_66_;
v_maxHeartbeats_89_ = v_maxHeartbeats_67_;
v_quotContext_90_ = v_quotContext_68_;
v_currMacroScope_91_ = v_currMacroScope_69_;
v_cancelTk_x3f_92_ = v_cancelTk_x3f_70_;
v_inheritedTraceOptions_93_ = v_inheritedTraceOptions_71_;
v_currRecDepth_94_ = v_currRecDepth_56_;
v_ref_95_ = v_ref_57_;
v_suppressElabErrors_96_ = v_suppressElabErrors_58_;
v_checkDeprecated_97_ = v_checkDeprecated_59_;
v_isRecordingDeps_98_ = v_isRecordingDeps_60_;
v___y_99_ = v_a_53_;
goto v___jp_81_;
}
else
{
v___y_121_ = v___x_142_;
v___y_122_ = v___y_141_;
v___y_123_ = v___x_80_;
goto v___jp_120_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl___boxed(lean_object* v_name_153_, lean_object* v_value_154_, lean_object* v_type_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(v_name_153_, v_value_154_, v_type_155_, v_a_156_, v_a_157_);
lean_dec(v_a_157_);
lean_dec_ref(v_a_156_);
return v_res_159_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_160_ = lean_unsigned_to_nat(32u);
v___x_161_ = lean_mk_empty_array_with_capacity(v___x_160_);
v___x_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
return v___x_162_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_163_ = ((size_t)5ULL);
v___x_164_ = lean_unsigned_to_nat(0u);
v___x_165_ = lean_unsigned_to_nat(32u);
v___x_166_ = lean_mk_empty_array_with_capacity(v___x_165_);
v___x_167_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__0);
v___x_168_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_168_, 0, v___x_167_);
lean_ctor_set(v___x_168_, 1, v___x_166_);
lean_ctor_set(v___x_168_, 2, v___x_164_);
lean_ctor_set(v___x_168_, 3, v___x_164_);
lean_ctor_set_usize(v___x_168_, 4, v___x_163_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(lean_object* v___y_169_){
_start:
{
lean_object* v___x_171_; lean_object* v_traceState_172_; lean_object* v_traces_173_; lean_object* v___x_174_; lean_object* v_traceState_175_; lean_object* v_env_176_; lean_object* v_nextMacroScope_177_; lean_object* v_ngen_178_; lean_object* v_auxDeclNGen_179_; lean_object* v_cache_180_; lean_object* v_recordedDeps_181_; lean_object* v_messages_182_; lean_object* v_infoState_183_; lean_object* v_snapshotTasks_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_203_; 
v___x_171_ = lean_st_ref_get(v___y_169_);
v_traceState_172_ = lean_ctor_get(v___x_171_, 4);
lean_inc_ref(v_traceState_172_);
lean_dec(v___x_171_);
v_traces_173_ = lean_ctor_get(v_traceState_172_, 0);
lean_inc_ref(v_traces_173_);
lean_dec_ref(v_traceState_172_);
v___x_174_ = lean_st_ref_take(v___y_169_);
v_traceState_175_ = lean_ctor_get(v___x_174_, 4);
v_env_176_ = lean_ctor_get(v___x_174_, 0);
v_nextMacroScope_177_ = lean_ctor_get(v___x_174_, 1);
v_ngen_178_ = lean_ctor_get(v___x_174_, 2);
v_auxDeclNGen_179_ = lean_ctor_get(v___x_174_, 3);
v_cache_180_ = lean_ctor_get(v___x_174_, 5);
v_recordedDeps_181_ = lean_ctor_get(v___x_174_, 6);
v_messages_182_ = lean_ctor_get(v___x_174_, 7);
v_infoState_183_ = lean_ctor_get(v___x_174_, 8);
v_snapshotTasks_184_ = lean_ctor_get(v___x_174_, 9);
v_isSharedCheck_203_ = !lean_is_exclusive(v___x_174_);
if (v_isSharedCheck_203_ == 0)
{
v___x_186_ = v___x_174_;
v_isShared_187_ = v_isSharedCheck_203_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_snapshotTasks_184_);
lean_inc(v_infoState_183_);
lean_inc(v_messages_182_);
lean_inc(v_recordedDeps_181_);
lean_inc(v_cache_180_);
lean_inc(v_traceState_175_);
lean_inc(v_auxDeclNGen_179_);
lean_inc(v_ngen_178_);
lean_inc(v_nextMacroScope_177_);
lean_inc(v_env_176_);
lean_dec(v___x_174_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_203_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
uint64_t v_tid_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_201_; 
v_tid_188_ = lean_ctor_get_uint64(v_traceState_175_, sizeof(void*)*1);
v_isSharedCheck_201_ = !lean_is_exclusive(v_traceState_175_);
if (v_isSharedCheck_201_ == 0)
{
lean_object* v_unused_202_; 
v_unused_202_ = lean_ctor_get(v_traceState_175_, 0);
lean_dec(v_unused_202_);
v___x_190_ = v_traceState_175_;
v_isShared_191_ = v_isSharedCheck_201_;
goto v_resetjp_189_;
}
else
{
lean_dec(v_traceState_175_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_201_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_192_; lean_object* v___x_194_; 
v___x_192_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__1);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 0, v___x_192_);
v___x_194_ = v___x_190_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v___x_192_);
lean_ctor_set_uint64(v_reuseFailAlloc_200_, sizeof(void*)*1, v_tid_188_);
v___x_194_ = v_reuseFailAlloc_200_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
lean_object* v___x_196_; 
if (v_isShared_187_ == 0)
{
lean_ctor_set(v___x_186_, 4, v___x_194_);
v___x_196_ = v___x_186_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_env_176_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v_nextMacroScope_177_);
lean_ctor_set(v_reuseFailAlloc_199_, 2, v_ngen_178_);
lean_ctor_set(v_reuseFailAlloc_199_, 3, v_auxDeclNGen_179_);
lean_ctor_set(v_reuseFailAlloc_199_, 4, v___x_194_);
lean_ctor_set(v_reuseFailAlloc_199_, 5, v_cache_180_);
lean_ctor_set(v_reuseFailAlloc_199_, 6, v_recordedDeps_181_);
lean_ctor_set(v_reuseFailAlloc_199_, 7, v_messages_182_);
lean_ctor_set(v_reuseFailAlloc_199_, 8, v_infoState_183_);
lean_ctor_set(v_reuseFailAlloc_199_, 9, v_snapshotTasks_184_);
v___x_196_ = v_reuseFailAlloc_199_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_197_ = lean_st_ref_put(v___y_169_, v___x_196_);
v___x_198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_198_, 0, v_traces_173_);
return v___x_198_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___boxed(lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v___y_204_);
lean_dec(v___y_204_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0(lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v___y_210_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___boxed(lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0(v___y_213_, v___y_214_, v___y_215_, v___y_216_);
lean_dec(v___y_216_);
lean_dec_ref(v___y_215_);
lean_dec(v___y_214_);
lean_dec_ref(v___y_213_);
return v_res_218_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(lean_object* v_opts_219_, lean_object* v_opt_220_){
_start:
{
lean_object* v_name_221_; lean_object* v_defValue_222_; lean_object* v_map_223_; lean_object* v___x_224_; 
v_name_221_ = lean_ctor_get(v_opt_220_, 0);
v_defValue_222_ = lean_ctor_get(v_opt_220_, 1);
v_map_223_ = lean_ctor_get(v_opts_219_, 0);
v___x_224_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_223_, v_name_221_);
if (lean_obj_tag(v___x_224_) == 0)
{
uint8_t v___x_225_; 
v___x_225_ = lean_unbox(v_defValue_222_);
return v___x_225_;
}
else
{
lean_object* v_val_226_; 
v_val_226_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_val_226_);
lean_dec_ref_known(v___x_224_, 1);
if (lean_obj_tag(v_val_226_) == 1)
{
uint8_t v_v_227_; 
v_v_227_ = lean_ctor_get_uint8(v_val_226_, 0);
lean_dec_ref_known(v_val_226_, 0);
return v_v_227_;
}
else
{
uint8_t v___x_228_; 
lean_dec(v_val_226_);
v___x_228_ = lean_unbox(v_defValue_222_);
return v___x_228_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1___boxed(lean_object* v_opts_229_, lean_object* v_opt_230_){
_start:
{
uint8_t v_res_231_; lean_object* v_r_232_; 
v_res_231_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_opts_229_, v_opt_230_);
lean_dec_ref(v_opt_230_);
lean_dec_ref(v_opts_229_);
v_r_232_ = lean_box(v_res_231_);
return v_r_232_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__2(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_236_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__1));
v___x_237_ = l_Lean_MessageData_ofFormat(v___x_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0(lean_object* v_x_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_244_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___closed__2);
v___x_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0___boxed(lean_object* v_x_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__0(v_x_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_);
lean_dec(v___y_250_);
lean_dec_ref(v___y_249_);
lean_dec(v___y_248_);
lean_dec_ref(v___y_247_);
lean_dec_ref(v_x_246_);
return v_res_252_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__2(void){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_256_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__1));
v___x_257_ = l_Lean_MessageData_ofFormat(v___x_256_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1(lean_object* v_x_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_264_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___closed__2);
v___x_265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1___boxed(lean_object* v_x_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__1(v_x_266_, v___y_267_, v___y_268_, v___y_269_, v___y_270_);
lean_dec(v___y_270_);
lean_dec_ref(v___y_269_);
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
lean_dec_ref(v_x_266_);
return v_res_272_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__2(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_276_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__1));
v___x_277_ = l_Lean_MessageData_ofFormat(v___x_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2(lean_object* v_x_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_284_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__2, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__2_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___closed__2);
v___x_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2___boxed(lean_object* v_x_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___lam__2(v_x_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
lean_dec_ref(v_x_286_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__3___redArg(lean_object* v_x_293_){
_start:
{
if (lean_obj_tag(v_x_293_) == 0)
{
lean_object* v_a_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_302_; 
v_a_295_ = lean_ctor_get(v_x_293_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v_x_293_);
if (v_isSharedCheck_302_ == 0)
{
v___x_297_ = v_x_293_;
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_a_295_);
lean_dec(v_x_293_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_300_; 
if (v_isShared_298_ == 0)
{
lean_ctor_set_tag(v___x_297_, 1);
v___x_300_ = v___x_297_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v_a_295_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
}
else
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_310_; 
v_a_303_ = lean_ctor_get(v_x_293_, 0);
v_isSharedCheck_310_ = !lean_is_exclusive(v_x_293_);
if (v_isSharedCheck_310_ == 0)
{
v___x_305_ = v_x_293_;
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v_x_293_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_308_; 
if (v_isShared_306_ == 0)
{
lean_ctor_set_tag(v___x_305_, 0);
v___x_308_ = v___x_305_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_a_303_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__3___redArg___boxed(lean_object* v_x_311_, lean_object* v___y_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__3___redArg(v_x_311_);
return v_res_313_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4_spec__8(lean_object* v_e_314_){
_start:
{
if (lean_obj_tag(v_e_314_) == 0)
{
uint8_t v___x_315_; 
v___x_315_ = 2;
return v___x_315_;
}
else
{
uint8_t v___x_316_; 
v___x_316_ = 0;
return v___x_316_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4_spec__8___boxed(lean_object* v_e_317_){
_start:
{
uint8_t v_res_318_; lean_object* v_r_319_; 
v_res_318_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4_spec__8(v_e_317_);
lean_dec_ref(v_e_317_);
v_r_319_ = lean_box(v_res_318_);
return v_r_319_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__2_spec__3(size_t v_sz_320_, size_t v_i_321_, lean_object* v_bs_322_){
_start:
{
uint8_t v___x_323_; 
v___x_323_ = lean_usize_dec_lt(v_i_321_, v_sz_320_);
if (v___x_323_ == 0)
{
return v_bs_322_;
}
else
{
lean_object* v_v_324_; lean_object* v_msg_325_; lean_object* v___x_326_; lean_object* v_bs_x27_327_; size_t v___x_328_; size_t v___x_329_; lean_object* v___x_330_; 
v_v_324_ = lean_array_uget_borrowed(v_bs_322_, v_i_321_);
v_msg_325_ = lean_ctor_get(v_v_324_, 1);
lean_inc_ref(v_msg_325_);
v___x_326_ = lean_unsigned_to_nat(0u);
v_bs_x27_327_ = lean_array_uset(v_bs_322_, v_i_321_, v___x_326_);
v___x_328_ = ((size_t)1ULL);
v___x_329_ = lean_usize_add(v_i_321_, v___x_328_);
v___x_330_ = lean_array_uset(v_bs_x27_327_, v_i_321_, v_msg_325_);
v_i_321_ = v___x_329_;
v_bs_322_ = v___x_330_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__2_spec__3___boxed(lean_object* v_sz_332_, lean_object* v_i_333_, lean_object* v_bs_334_){
_start:
{
size_t v_sz_boxed_335_; size_t v_i_boxed_336_; lean_object* v_res_337_; 
v_sz_boxed_335_ = lean_unbox_usize(v_sz_332_);
lean_dec(v_sz_332_);
v_i_boxed_336_ = lean_unbox_usize(v_i_333_);
lean_dec(v_i_333_);
v_res_337_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__2_spec__3(v_sz_boxed_335_, v_i_boxed_336_, v_bs_334_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3_spec__6(lean_object* v_msgData_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_){
_start:
{
lean_object* v___x_344_; lean_object* v_env_345_; uint8_t v___x_346_; lean_object* v_env_347_; lean_object* v___x_348_; lean_object* v_toCold_349_; lean_object* v_mctx_350_; lean_object* v_lctx_351_; lean_object* v_options_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_344_ = lean_st_ref_get(v___y_342_);
v_env_345_ = lean_ctor_get(v___x_344_, 0);
lean_inc_ref(v_env_345_);
lean_dec(v___x_344_);
v___x_346_ = 0;
v_env_347_ = l_Lean_Environment_setRecordingDeps(v_env_345_, v___x_346_);
v___x_348_ = lean_st_ref_get(v___y_340_);
v_toCold_349_ = lean_ctor_get(v___y_341_, 0);
v_mctx_350_ = lean_ctor_get(v___x_348_, 0);
lean_inc_ref(v_mctx_350_);
lean_dec(v___x_348_);
v_lctx_351_ = lean_ctor_get(v___y_339_, 2);
v_options_352_ = lean_ctor_get(v_toCold_349_, 2);
lean_inc_ref(v_options_352_);
lean_inc_ref(v_lctx_351_);
v___x_353_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_353_, 0, v_env_347_);
lean_ctor_set(v___x_353_, 1, v_mctx_350_);
lean_ctor_set(v___x_353_, 2, v_lctx_351_);
lean_ctor_set(v___x_353_, 3, v_options_352_);
v___x_354_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
lean_ctor_set(v___x_354_, 1, v_msgData_338_);
v___x_355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_355_, 0, v___x_354_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3_spec__6___boxed(lean_object* v_msgData_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3_spec__6(v_msgData_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__2(lean_object* v_oldTraces_363_, lean_object* v_data_364_, lean_object* v_ref_365_, lean_object* v_msg_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_){
_start:
{
lean_object* v_toCold_372_; lean_object* v_currRecDepth_373_; lean_object* v_ref_374_; uint16_t v_optionFlags_375_; uint8_t v_suppressElabErrors_376_; uint8_t v_checkDeprecated_377_; uint8_t v_isRecordingDeps_378_; lean_object* v_ref_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v_traceState_382_; lean_object* v_traces_383_; lean_object* v___x_384_; size_t v_sz_385_; size_t v___x_386_; lean_object* v___x_387_; lean_object* v_msg_388_; lean_object* v___x_389_; lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_428_; 
v_toCold_372_ = lean_ctor_get(v___y_369_, 0);
v_currRecDepth_373_ = lean_ctor_get(v___y_369_, 1);
v_ref_374_ = lean_ctor_get(v___y_369_, 2);
v_optionFlags_375_ = lean_ctor_get_uint16(v___y_369_, sizeof(void*)*3);
v_suppressElabErrors_376_ = lean_ctor_get_uint8(v___y_369_, sizeof(void*)*3 + 2);
v_checkDeprecated_377_ = lean_ctor_get_uint8(v___y_369_, sizeof(void*)*3 + 3);
v_isRecordingDeps_378_ = lean_ctor_get_uint8(v___y_369_, sizeof(void*)*3 + 4);
v_ref_379_ = l_Lean_replaceRef(v_ref_365_, v_ref_374_);
lean_inc(v_currRecDepth_373_);
lean_inc_ref(v_toCold_372_);
v___x_380_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_380_, 0, v_toCold_372_);
lean_ctor_set(v___x_380_, 1, v_currRecDepth_373_);
lean_ctor_set(v___x_380_, 2, v_ref_379_);
lean_ctor_set_uint16(v___x_380_, sizeof(void*)*3, v_optionFlags_375_);
lean_ctor_set_uint8(v___x_380_, sizeof(void*)*3 + 2, v_suppressElabErrors_376_);
lean_ctor_set_uint8(v___x_380_, sizeof(void*)*3 + 3, v_checkDeprecated_377_);
lean_ctor_set_uint8(v___x_380_, sizeof(void*)*3 + 4, v_isRecordingDeps_378_);
v___x_381_ = lean_st_ref_get(v___y_370_);
v_traceState_382_ = lean_ctor_get(v___x_381_, 4);
lean_inc_ref(v_traceState_382_);
lean_dec(v___x_381_);
v_traces_383_ = lean_ctor_get(v_traceState_382_, 0);
lean_inc_ref(v_traces_383_);
lean_dec_ref(v_traceState_382_);
v___x_384_ = l_Lean_PersistentArray_toArray___redArg(v_traces_383_);
lean_dec_ref(v_traces_383_);
v_sz_385_ = lean_array_size(v___x_384_);
v___x_386_ = ((size_t)0ULL);
v___x_387_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__2_spec__3(v_sz_385_, v___x_386_, v___x_384_);
v_msg_388_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_388_, 0, v_data_364_);
lean_ctor_set(v_msg_388_, 1, v_msg_366_);
lean_ctor_set(v_msg_388_, 2, v___x_387_);
v___x_389_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3_spec__6(v_msg_388_, v___y_367_, v___y_368_, v___x_380_, v___y_370_);
lean_dec_ref_known(v___x_380_, 3);
v_a_390_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_428_ == 0)
{
v___x_392_ = v___x_389_;
v_isShared_393_ = v_isSharedCheck_428_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_dec(v___x_389_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_428_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_394_; lean_object* v_traceState_395_; lean_object* v_env_396_; lean_object* v_nextMacroScope_397_; lean_object* v_ngen_398_; lean_object* v_auxDeclNGen_399_; lean_object* v_cache_400_; lean_object* v_recordedDeps_401_; lean_object* v_messages_402_; lean_object* v_infoState_403_; lean_object* v_snapshotTasks_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_427_; 
v___x_394_ = lean_st_ref_take(v___y_370_);
v_traceState_395_ = lean_ctor_get(v___x_394_, 4);
v_env_396_ = lean_ctor_get(v___x_394_, 0);
v_nextMacroScope_397_ = lean_ctor_get(v___x_394_, 1);
v_ngen_398_ = lean_ctor_get(v___x_394_, 2);
v_auxDeclNGen_399_ = lean_ctor_get(v___x_394_, 3);
v_cache_400_ = lean_ctor_get(v___x_394_, 5);
v_recordedDeps_401_ = lean_ctor_get(v___x_394_, 6);
v_messages_402_ = lean_ctor_get(v___x_394_, 7);
v_infoState_403_ = lean_ctor_get(v___x_394_, 8);
v_snapshotTasks_404_ = lean_ctor_get(v___x_394_, 9);
v_isSharedCheck_427_ = !lean_is_exclusive(v___x_394_);
if (v_isSharedCheck_427_ == 0)
{
v___x_406_ = v___x_394_;
v_isShared_407_ = v_isSharedCheck_427_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_snapshotTasks_404_);
lean_inc(v_infoState_403_);
lean_inc(v_messages_402_);
lean_inc(v_recordedDeps_401_);
lean_inc(v_cache_400_);
lean_inc(v_traceState_395_);
lean_inc(v_auxDeclNGen_399_);
lean_inc(v_ngen_398_);
lean_inc(v_nextMacroScope_397_);
lean_inc(v_env_396_);
lean_dec(v___x_394_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_427_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
uint64_t v_tid_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_425_; 
v_tid_408_ = lean_ctor_get_uint64(v_traceState_395_, sizeof(void*)*1);
v_isSharedCheck_425_ = !lean_is_exclusive(v_traceState_395_);
if (v_isSharedCheck_425_ == 0)
{
lean_object* v_unused_426_; 
v_unused_426_ = lean_ctor_get(v_traceState_395_, 0);
lean_dec(v_unused_426_);
v___x_410_ = v_traceState_395_;
v_isShared_411_ = v_isSharedCheck_425_;
goto v_resetjp_409_;
}
else
{
lean_dec(v_traceState_395_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_425_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_416_; 
v___x_412_ = lean_box(0);
v___x_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_413_, 0, v_ref_365_);
lean_ctor_set(v___x_413_, 1, v_a_390_);
v___x_414_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_363_, v___x_413_);
if (v_isShared_411_ == 0)
{
lean_ctor_set(v___x_410_, 0, v___x_414_);
v___x_416_ = v___x_410_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v___x_414_);
lean_ctor_set_uint64(v_reuseFailAlloc_424_, sizeof(void*)*1, v_tid_408_);
v___x_416_ = v_reuseFailAlloc_424_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
lean_object* v___x_418_; 
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 4, v___x_416_);
v___x_418_ = v___x_406_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_env_396_);
lean_ctor_set(v_reuseFailAlloc_423_, 1, v_nextMacroScope_397_);
lean_ctor_set(v_reuseFailAlloc_423_, 2, v_ngen_398_);
lean_ctor_set(v_reuseFailAlloc_423_, 3, v_auxDeclNGen_399_);
lean_ctor_set(v_reuseFailAlloc_423_, 4, v___x_416_);
lean_ctor_set(v_reuseFailAlloc_423_, 5, v_cache_400_);
lean_ctor_set(v_reuseFailAlloc_423_, 6, v_recordedDeps_401_);
lean_ctor_set(v_reuseFailAlloc_423_, 7, v_messages_402_);
lean_ctor_set(v_reuseFailAlloc_423_, 8, v_infoState_403_);
lean_ctor_set(v_reuseFailAlloc_423_, 9, v_snapshotTasks_404_);
v___x_418_ = v_reuseFailAlloc_423_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
lean_object* v___x_419_; lean_object* v___x_421_; 
v___x_419_ = lean_st_ref_put(v___y_370_, v___x_418_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 0, v___x_412_);
v___x_421_ = v___x_392_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v___x_412_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
return v___x_421_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__2___boxed(lean_object* v_oldTraces_429_, lean_object* v_data_430_, lean_object* v_ref_431_, lean_object* v_msg_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__2(v_oldTraces_429_, v_data_430_, v_ref_431_, v_msg_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_);
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
lean_dec(v___y_434_);
lean_dec_ref(v___y_433_);
return v_res_438_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0(void){
_start:
{
lean_object* v___x_439_; double v___x_440_; 
v___x_439_ = lean_unsigned_to_nat(0u);
v___x_440_ = lean_float_of_nat(v___x_439_);
return v___x_440_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__1));
v___x_443_ = l_Lean_stringToMessageData(v___x_442_);
return v___x_443_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3(void){
_start:
{
lean_object* v___x_444_; double v___x_445_; 
v___x_444_ = lean_unsigned_to_nat(1000u);
v___x_445_ = lean_float_of_nat(v___x_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4(lean_object* v_cls_446_, uint8_t v_collapsed_447_, lean_object* v_tag_448_, lean_object* v_opts_449_, uint8_t v_clsEnabled_450_, lean_object* v_oldTraces_451_, lean_object* v_msg_452_, lean_object* v_resStartStop_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
lean_object* v_fst_459_; lean_object* v_snd_460_; lean_object* v___y_462_; lean_object* v___y_463_; lean_object* v_data_464_; lean_object* v_fst_467_; lean_object* v_snd_468_; lean_object* v___x_469_; uint8_t v___x_470_; lean_object* v___y_472_; lean_object* v_a_473_; uint8_t v___y_488_; double v___y_520_; 
v_fst_459_ = lean_ctor_get(v_resStartStop_453_, 0);
lean_inc(v_fst_459_);
v_snd_460_ = lean_ctor_get(v_resStartStop_453_, 1);
lean_inc(v_snd_460_);
lean_dec_ref(v_resStartStop_453_);
v_fst_467_ = lean_ctor_get(v_snd_460_, 0);
lean_inc(v_fst_467_);
v_snd_468_ = lean_ctor_get(v_snd_460_, 1);
lean_inc(v_snd_468_);
lean_dec(v_snd_460_);
v___x_469_ = l_Lean_trace_profiler;
v___x_470_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_opts_449_, v___x_469_);
if (v___x_470_ == 0)
{
v___y_488_ = v___x_470_;
goto v___jp_487_;
}
else
{
lean_object* v___x_525_; uint8_t v___x_526_; 
v___x_525_ = l_Lean_trace_profiler_useHeartbeats;
v___x_526_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_opts_449_, v___x_525_);
if (v___x_526_ == 0)
{
lean_object* v___x_527_; lean_object* v___x_528_; double v___x_529_; double v___x_530_; double v___x_531_; 
v___x_527_ = l_Lean_trace_profiler_threshold;
v___x_528_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v_opts_449_, v___x_527_);
v___x_529_ = lean_float_of_nat(v___x_528_);
v___x_530_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3);
v___x_531_ = lean_float_div(v___x_529_, v___x_530_);
v___y_520_ = v___x_531_;
goto v___jp_519_;
}
else
{
lean_object* v___x_532_; lean_object* v___x_533_; double v___x_534_; 
v___x_532_ = l_Lean_trace_profiler_threshold;
v___x_533_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v_opts_449_, v___x_532_);
v___x_534_ = lean_float_of_nat(v___x_533_);
v___y_520_ = v___x_534_;
goto v___jp_519_;
}
}
v___jp_461_:
{
lean_object* v___x_465_; 
lean_inc(v___y_462_);
v___x_465_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__2(v_oldTraces_451_, v_data_464_, v___y_462_, v___y_463_, v___y_454_, v___y_455_, v___y_456_, v___y_457_);
if (lean_obj_tag(v___x_465_) == 0)
{
lean_object* v___x_466_; 
lean_dec_ref_known(v___x_465_, 1);
v___x_466_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__3___redArg(v_fst_459_);
return v___x_466_;
}
else
{
lean_dec(v_fst_459_);
return v___x_465_;
}
}
v___jp_471_:
{
uint8_t v_result_474_; lean_object* v___x_475_; lean_object* v___x_476_; double v___x_477_; lean_object* v_data_478_; 
v_result_474_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4_spec__8(v_fst_459_);
v___x_475_ = lean_box(v_result_474_);
v___x_476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
v___x_477_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0);
lean_inc_ref(v_tag_448_);
lean_inc_ref(v___x_476_);
lean_inc(v_cls_446_);
v_data_478_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_478_, 0, v_cls_446_);
lean_ctor_set(v_data_478_, 1, v___x_476_);
lean_ctor_set(v_data_478_, 2, v_tag_448_);
lean_ctor_set_float(v_data_478_, sizeof(void*)*3, v___x_477_);
lean_ctor_set_float(v_data_478_, sizeof(void*)*3 + 8, v___x_477_);
lean_ctor_set_uint8(v_data_478_, sizeof(void*)*3 + 16, v_collapsed_447_);
if (v___x_470_ == 0)
{
lean_dec_ref_known(v___x_476_, 1);
lean_dec(v_snd_468_);
lean_dec(v_fst_467_);
lean_dec_ref(v_tag_448_);
lean_dec(v_cls_446_);
v___y_462_ = v___y_472_;
v___y_463_ = v_a_473_;
v_data_464_ = v_data_478_;
goto v___jp_461_;
}
else
{
lean_object* v_data_479_; double v___x_480_; double v___x_481_; 
lean_dec_ref_known(v_data_478_, 3);
v_data_479_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_479_, 0, v_cls_446_);
lean_ctor_set(v_data_479_, 1, v___x_476_);
lean_ctor_set(v_data_479_, 2, v_tag_448_);
v___x_480_ = lean_unbox_float(v_fst_467_);
lean_dec(v_fst_467_);
lean_ctor_set_float(v_data_479_, sizeof(void*)*3, v___x_480_);
v___x_481_ = lean_unbox_float(v_snd_468_);
lean_dec(v_snd_468_);
lean_ctor_set_float(v_data_479_, sizeof(void*)*3 + 8, v___x_481_);
lean_ctor_set_uint8(v_data_479_, sizeof(void*)*3 + 16, v_collapsed_447_);
v___y_462_ = v___y_472_;
v___y_463_ = v_a_473_;
v_data_464_ = v_data_479_;
goto v___jp_461_;
}
}
v___jp_482_:
{
lean_object* v_ref_483_; lean_object* v___x_484_; 
v_ref_483_ = lean_ctor_get(v___y_456_, 2);
lean_inc(v___y_457_);
lean_inc_ref(v___y_456_);
lean_inc(v___y_455_);
lean_inc_ref(v___y_454_);
lean_inc(v_fst_459_);
v___x_484_ = lean_apply_6(v_msg_452_, v_fst_459_, v___y_454_, v___y_455_, v___y_456_, v___y_457_, lean_box(0));
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v_a_485_; 
v_a_485_ = lean_ctor_get(v___x_484_, 0);
lean_inc(v_a_485_);
lean_dec_ref_known(v___x_484_, 1);
v___y_472_ = v_ref_483_;
v_a_473_ = v_a_485_;
goto v___jp_471_;
}
else
{
lean_object* v___x_486_; 
lean_dec_ref_known(v___x_484_, 1);
v___x_486_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2);
v___y_472_ = v_ref_483_;
v_a_473_ = v___x_486_;
goto v___jp_471_;
}
}
v___jp_487_:
{
if (v_clsEnabled_450_ == 0)
{
if (v___y_488_ == 0)
{
lean_object* v___x_489_; lean_object* v_traceState_490_; lean_object* v_env_491_; lean_object* v_nextMacroScope_492_; lean_object* v_ngen_493_; lean_object* v_auxDeclNGen_494_; lean_object* v_cache_495_; lean_object* v_recordedDeps_496_; lean_object* v_messages_497_; lean_object* v_infoState_498_; lean_object* v_snapshotTasks_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_518_; 
lean_dec(v_snd_468_);
lean_dec(v_fst_467_);
lean_dec_ref(v_msg_452_);
lean_dec_ref(v_tag_448_);
lean_dec(v_cls_446_);
v___x_489_ = lean_st_ref_take(v___y_457_);
v_traceState_490_ = lean_ctor_get(v___x_489_, 4);
v_env_491_ = lean_ctor_get(v___x_489_, 0);
v_nextMacroScope_492_ = lean_ctor_get(v___x_489_, 1);
v_ngen_493_ = lean_ctor_get(v___x_489_, 2);
v_auxDeclNGen_494_ = lean_ctor_get(v___x_489_, 3);
v_cache_495_ = lean_ctor_get(v___x_489_, 5);
v_recordedDeps_496_ = lean_ctor_get(v___x_489_, 6);
v_messages_497_ = lean_ctor_get(v___x_489_, 7);
v_infoState_498_ = lean_ctor_get(v___x_489_, 8);
v_snapshotTasks_499_ = lean_ctor_get(v___x_489_, 9);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_489_);
if (v_isSharedCheck_518_ == 0)
{
v___x_501_ = v___x_489_;
v_isShared_502_ = v_isSharedCheck_518_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_snapshotTasks_499_);
lean_inc(v_infoState_498_);
lean_inc(v_messages_497_);
lean_inc(v_recordedDeps_496_);
lean_inc(v_cache_495_);
lean_inc(v_traceState_490_);
lean_inc(v_auxDeclNGen_494_);
lean_inc(v_ngen_493_);
lean_inc(v_nextMacroScope_492_);
lean_inc(v_env_491_);
lean_dec(v___x_489_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_518_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
uint64_t v_tid_503_; lean_object* v_traces_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_517_; 
v_tid_503_ = lean_ctor_get_uint64(v_traceState_490_, sizeof(void*)*1);
v_traces_504_ = lean_ctor_get(v_traceState_490_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v_traceState_490_);
if (v_isSharedCheck_517_ == 0)
{
v___x_506_ = v_traceState_490_;
v_isShared_507_ = v_isSharedCheck_517_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_traces_504_);
lean_dec(v_traceState_490_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_517_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_508_; lean_object* v___x_510_; 
v___x_508_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_451_, v_traces_504_);
lean_dec_ref(v_traces_504_);
if (v_isShared_507_ == 0)
{
lean_ctor_set(v___x_506_, 0, v___x_508_);
v___x_510_ = v___x_506_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v___x_508_);
lean_ctor_set_uint64(v_reuseFailAlloc_516_, sizeof(void*)*1, v_tid_503_);
v___x_510_ = v_reuseFailAlloc_516_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
lean_object* v___x_512_; 
if (v_isShared_502_ == 0)
{
lean_ctor_set(v___x_501_, 4, v___x_510_);
v___x_512_ = v___x_501_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v_env_491_);
lean_ctor_set(v_reuseFailAlloc_515_, 1, v_nextMacroScope_492_);
lean_ctor_set(v_reuseFailAlloc_515_, 2, v_ngen_493_);
lean_ctor_set(v_reuseFailAlloc_515_, 3, v_auxDeclNGen_494_);
lean_ctor_set(v_reuseFailAlloc_515_, 4, v___x_510_);
lean_ctor_set(v_reuseFailAlloc_515_, 5, v_cache_495_);
lean_ctor_set(v_reuseFailAlloc_515_, 6, v_recordedDeps_496_);
lean_ctor_set(v_reuseFailAlloc_515_, 7, v_messages_497_);
lean_ctor_set(v_reuseFailAlloc_515_, 8, v_infoState_498_);
lean_ctor_set(v_reuseFailAlloc_515_, 9, v_snapshotTasks_499_);
v___x_512_ = v_reuseFailAlloc_515_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = lean_st_ref_put(v___y_457_, v___x_512_);
v___x_514_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__3___redArg(v_fst_459_);
return v___x_514_;
}
}
}
}
}
else
{
goto v___jp_482_;
}
}
else
{
goto v___jp_482_;
}
}
v___jp_519_:
{
double v___x_521_; double v___x_522_; double v___x_523_; uint8_t v___x_524_; 
v___x_521_ = lean_unbox_float(v_snd_468_);
v___x_522_ = lean_unbox_float(v_fst_467_);
v___x_523_ = lean_float_sub(v___x_521_, v___x_522_);
v___x_524_ = lean_float_decLt(v___y_520_, v___x_523_);
v___y_488_ = v___x_524_;
goto v___jp_487_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___boxed(lean_object* v_cls_535_, lean_object* v_collapsed_536_, lean_object* v_tag_537_, lean_object* v_opts_538_, lean_object* v_clsEnabled_539_, lean_object* v_oldTraces_540_, lean_object* v_msg_541_, lean_object* v_resStartStop_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_){
_start:
{
uint8_t v_collapsed_boxed_548_; uint8_t v_clsEnabled_boxed_549_; lean_object* v_res_550_; 
v_collapsed_boxed_548_ = lean_unbox(v_collapsed_536_);
v_clsEnabled_boxed_549_ = lean_unbox(v_clsEnabled_539_);
v_res_550_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4(v_cls_535_, v_collapsed_boxed_548_, v_tag_537_, v_opts_538_, v_clsEnabled_boxed_549_, v_oldTraces_540_, v_msg_541_, v_resStartStop_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
lean_dec(v___y_546_);
lean_dec_ref(v___y_545_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec_ref(v_opts_538_);
return v_res_550_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__4(lean_object* v_e_551_){
_start:
{
if (lean_obj_tag(v_e_551_) == 0)
{
uint8_t v___x_552_; 
v___x_552_ = 2;
return v___x_552_;
}
else
{
lean_object* v_a_553_; uint8_t v___x_554_; 
v_a_553_ = lean_ctor_get(v_e_551_, 0);
v___x_554_ = l_Lean_Expr_hasSyntheticSorry(v_a_553_);
if (v___x_554_ == 0)
{
uint8_t v___x_555_; 
v___x_555_ = 0;
return v___x_555_;
}
else
{
uint8_t v___x_556_; 
v___x_556_ = 1;
return v___x_556_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__4___boxed(lean_object* v_e_557_){
_start:
{
uint8_t v_res_558_; lean_object* v_r_559_; 
v_res_558_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__4(v_e_557_);
lean_dec_ref(v_e_557_);
v_r_559_ = lean_box(v_res_558_);
return v_r_559_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2(lean_object* v_cls_560_, uint8_t v_collapsed_561_, lean_object* v_tag_562_, lean_object* v_opts_563_, uint8_t v_clsEnabled_564_, lean_object* v_oldTraces_565_, lean_object* v_msg_566_, lean_object* v_resStartStop_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_){
_start:
{
lean_object* v_fst_573_; lean_object* v_snd_574_; lean_object* v___y_576_; lean_object* v___y_577_; lean_object* v_data_578_; lean_object* v_fst_589_; lean_object* v_snd_590_; lean_object* v___x_591_; uint8_t v___x_592_; lean_object* v___y_594_; lean_object* v_a_595_; uint8_t v___y_610_; double v___y_642_; 
v_fst_573_ = lean_ctor_get(v_resStartStop_567_, 0);
lean_inc(v_fst_573_);
v_snd_574_ = lean_ctor_get(v_resStartStop_567_, 1);
lean_inc(v_snd_574_);
lean_dec_ref(v_resStartStop_567_);
v_fst_589_ = lean_ctor_get(v_snd_574_, 0);
lean_inc(v_fst_589_);
v_snd_590_ = lean_ctor_get(v_snd_574_, 1);
lean_inc(v_snd_590_);
lean_dec(v_snd_574_);
v___x_591_ = l_Lean_trace_profiler;
v___x_592_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_opts_563_, v___x_591_);
if (v___x_592_ == 0)
{
v___y_610_ = v___x_592_;
goto v___jp_609_;
}
else
{
lean_object* v___x_647_; uint8_t v___x_648_; 
v___x_647_ = l_Lean_trace_profiler_useHeartbeats;
v___x_648_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_opts_563_, v___x_647_);
if (v___x_648_ == 0)
{
lean_object* v___x_649_; lean_object* v___x_650_; double v___x_651_; double v___x_652_; double v___x_653_; 
v___x_649_ = l_Lean_trace_profiler_threshold;
v___x_650_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v_opts_563_, v___x_649_);
v___x_651_ = lean_float_of_nat(v___x_650_);
v___x_652_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3);
v___x_653_ = lean_float_div(v___x_651_, v___x_652_);
v___y_642_ = v___x_653_;
goto v___jp_641_;
}
else
{
lean_object* v___x_654_; lean_object* v___x_655_; double v___x_656_; 
v___x_654_ = l_Lean_trace_profiler_threshold;
v___x_655_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v_opts_563_, v___x_654_);
v___x_656_ = lean_float_of_nat(v___x_655_);
v___y_642_ = v___x_656_;
goto v___jp_641_;
}
}
v___jp_575_:
{
lean_object* v___x_579_; 
lean_inc(v___y_576_);
v___x_579_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__2(v_oldTraces_565_, v_data_578_, v___y_576_, v___y_577_, v___y_568_, v___y_569_, v___y_570_, v___y_571_);
if (lean_obj_tag(v___x_579_) == 0)
{
lean_object* v___x_580_; 
lean_dec_ref_known(v___x_579_, 1);
v___x_580_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__3___redArg(v_fst_573_);
return v___x_580_;
}
else
{
lean_object* v_a_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_588_; 
lean_dec(v_fst_573_);
v_a_581_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_588_ == 0)
{
v___x_583_ = v___x_579_;
v_isShared_584_ = v_isSharedCheck_588_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_a_581_);
lean_dec(v___x_579_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_588_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_586_; 
if (v_isShared_584_ == 0)
{
v___x_586_ = v___x_583_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_a_581_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
}
}
}
}
v___jp_593_:
{
uint8_t v_result_596_; lean_object* v___x_597_; lean_object* v___x_598_; double v___x_599_; lean_object* v_data_600_; 
v_result_596_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__4(v_fst_573_);
v___x_597_ = lean_box(v_result_596_);
v___x_598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_598_, 0, v___x_597_);
v___x_599_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0);
lean_inc_ref(v_tag_562_);
lean_inc_ref(v___x_598_);
lean_inc(v_cls_560_);
v_data_600_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_600_, 0, v_cls_560_);
lean_ctor_set(v_data_600_, 1, v___x_598_);
lean_ctor_set(v_data_600_, 2, v_tag_562_);
lean_ctor_set_float(v_data_600_, sizeof(void*)*3, v___x_599_);
lean_ctor_set_float(v_data_600_, sizeof(void*)*3 + 8, v___x_599_);
lean_ctor_set_uint8(v_data_600_, sizeof(void*)*3 + 16, v_collapsed_561_);
if (v___x_592_ == 0)
{
lean_dec_ref_known(v___x_598_, 1);
lean_dec(v_snd_590_);
lean_dec(v_fst_589_);
lean_dec_ref(v_tag_562_);
lean_dec(v_cls_560_);
v___y_576_ = v___y_594_;
v___y_577_ = v_a_595_;
v_data_578_ = v_data_600_;
goto v___jp_575_;
}
else
{
lean_object* v_data_601_; double v___x_602_; double v___x_603_; 
lean_dec_ref_known(v_data_600_, 3);
v_data_601_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_601_, 0, v_cls_560_);
lean_ctor_set(v_data_601_, 1, v___x_598_);
lean_ctor_set(v_data_601_, 2, v_tag_562_);
v___x_602_ = lean_unbox_float(v_fst_589_);
lean_dec(v_fst_589_);
lean_ctor_set_float(v_data_601_, sizeof(void*)*3, v___x_602_);
v___x_603_ = lean_unbox_float(v_snd_590_);
lean_dec(v_snd_590_);
lean_ctor_set_float(v_data_601_, sizeof(void*)*3 + 8, v___x_603_);
lean_ctor_set_uint8(v_data_601_, sizeof(void*)*3 + 16, v_collapsed_561_);
v___y_576_ = v___y_594_;
v___y_577_ = v_a_595_;
v_data_578_ = v_data_601_;
goto v___jp_575_;
}
}
v___jp_604_:
{
lean_object* v_ref_605_; lean_object* v___x_606_; 
v_ref_605_ = lean_ctor_get(v___y_570_, 2);
lean_inc(v___y_571_);
lean_inc_ref(v___y_570_);
lean_inc(v___y_569_);
lean_inc_ref(v___y_568_);
lean_inc(v_fst_573_);
v___x_606_ = lean_apply_6(v_msg_566_, v_fst_573_, v___y_568_, v___y_569_, v___y_570_, v___y_571_, lean_box(0));
if (lean_obj_tag(v___x_606_) == 0)
{
lean_object* v_a_607_; 
v_a_607_ = lean_ctor_get(v___x_606_, 0);
lean_inc(v_a_607_);
lean_dec_ref_known(v___x_606_, 1);
v___y_594_ = v_ref_605_;
v_a_595_ = v_a_607_;
goto v___jp_593_;
}
else
{
lean_object* v___x_608_; 
lean_dec_ref_known(v___x_606_, 1);
v___x_608_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2);
v___y_594_ = v_ref_605_;
v_a_595_ = v___x_608_;
goto v___jp_593_;
}
}
v___jp_609_:
{
if (v_clsEnabled_564_ == 0)
{
if (v___y_610_ == 0)
{
lean_object* v___x_611_; lean_object* v_traceState_612_; lean_object* v_env_613_; lean_object* v_nextMacroScope_614_; lean_object* v_ngen_615_; lean_object* v_auxDeclNGen_616_; lean_object* v_cache_617_; lean_object* v_recordedDeps_618_; lean_object* v_messages_619_; lean_object* v_infoState_620_; lean_object* v_snapshotTasks_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_640_; 
lean_dec(v_snd_590_);
lean_dec(v_fst_589_);
lean_dec_ref(v_msg_566_);
lean_dec_ref(v_tag_562_);
lean_dec(v_cls_560_);
v___x_611_ = lean_st_ref_take(v___y_571_);
v_traceState_612_ = lean_ctor_get(v___x_611_, 4);
v_env_613_ = lean_ctor_get(v___x_611_, 0);
v_nextMacroScope_614_ = lean_ctor_get(v___x_611_, 1);
v_ngen_615_ = lean_ctor_get(v___x_611_, 2);
v_auxDeclNGen_616_ = lean_ctor_get(v___x_611_, 3);
v_cache_617_ = lean_ctor_get(v___x_611_, 5);
v_recordedDeps_618_ = lean_ctor_get(v___x_611_, 6);
v_messages_619_ = lean_ctor_get(v___x_611_, 7);
v_infoState_620_ = lean_ctor_get(v___x_611_, 8);
v_snapshotTasks_621_ = lean_ctor_get(v___x_611_, 9);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_640_ == 0)
{
v___x_623_ = v___x_611_;
v_isShared_624_ = v_isSharedCheck_640_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_snapshotTasks_621_);
lean_inc(v_infoState_620_);
lean_inc(v_messages_619_);
lean_inc(v_recordedDeps_618_);
lean_inc(v_cache_617_);
lean_inc(v_traceState_612_);
lean_inc(v_auxDeclNGen_616_);
lean_inc(v_ngen_615_);
lean_inc(v_nextMacroScope_614_);
lean_inc(v_env_613_);
lean_dec(v___x_611_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_640_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
uint64_t v_tid_625_; lean_object* v_traces_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_639_; 
v_tid_625_ = lean_ctor_get_uint64(v_traceState_612_, sizeof(void*)*1);
v_traces_626_ = lean_ctor_get(v_traceState_612_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v_traceState_612_);
if (v_isSharedCheck_639_ == 0)
{
v___x_628_ = v_traceState_612_;
v_isShared_629_ = v_isSharedCheck_639_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_traces_626_);
lean_dec(v_traceState_612_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_639_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_630_; lean_object* v___x_632_; 
v___x_630_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_565_, v_traces_626_);
lean_dec_ref(v_traces_626_);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 0, v___x_630_);
v___x_632_ = v___x_628_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v___x_630_);
lean_ctor_set_uint64(v_reuseFailAlloc_638_, sizeof(void*)*1, v_tid_625_);
v___x_632_ = v_reuseFailAlloc_638_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
lean_object* v___x_634_; 
if (v_isShared_624_ == 0)
{
lean_ctor_set(v___x_623_, 4, v___x_632_);
v___x_634_ = v___x_623_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_env_613_);
lean_ctor_set(v_reuseFailAlloc_637_, 1, v_nextMacroScope_614_);
lean_ctor_set(v_reuseFailAlloc_637_, 2, v_ngen_615_);
lean_ctor_set(v_reuseFailAlloc_637_, 3, v_auxDeclNGen_616_);
lean_ctor_set(v_reuseFailAlloc_637_, 4, v___x_632_);
lean_ctor_set(v_reuseFailAlloc_637_, 5, v_cache_617_);
lean_ctor_set(v_reuseFailAlloc_637_, 6, v_recordedDeps_618_);
lean_ctor_set(v_reuseFailAlloc_637_, 7, v_messages_619_);
lean_ctor_set(v_reuseFailAlloc_637_, 8, v_infoState_620_);
lean_ctor_set(v_reuseFailAlloc_637_, 9, v_snapshotTasks_621_);
v___x_634_ = v_reuseFailAlloc_637_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = lean_st_ref_put(v___y_571_, v___x_634_);
v___x_636_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__3___redArg(v_fst_573_);
return v___x_636_;
}
}
}
}
}
else
{
goto v___jp_604_;
}
}
else
{
goto v___jp_604_;
}
}
v___jp_641_:
{
double v___x_643_; double v___x_644_; double v___x_645_; uint8_t v___x_646_; 
v___x_643_ = lean_unbox_float(v_snd_590_);
v___x_644_ = lean_unbox_float(v_fst_589_);
v___x_645_ = lean_float_sub(v___x_643_, v___x_644_);
v___x_646_ = lean_float_decLt(v___y_642_, v___x_645_);
v___y_610_ = v___x_646_;
goto v___jp_609_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2___boxed(lean_object* v_cls_657_, lean_object* v_collapsed_658_, lean_object* v_tag_659_, lean_object* v_opts_660_, lean_object* v_clsEnabled_661_, lean_object* v_oldTraces_662_, lean_object* v_msg_663_, lean_object* v_resStartStop_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
uint8_t v_collapsed_boxed_670_; uint8_t v_clsEnabled_boxed_671_; lean_object* v_res_672_; 
v_collapsed_boxed_670_ = lean_unbox(v_collapsed_658_);
v_clsEnabled_boxed_671_ = lean_unbox(v_clsEnabled_661_);
v_res_672_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2(v_cls_657_, v_collapsed_boxed_670_, v_tag_659_, v_opts_660_, v_clsEnabled_boxed_671_, v_oldTraces_662_, v_msg_663_, v_resStartStop_664_, v___y_665_, v___y_666_, v___y_667_, v___y_668_);
lean_dec(v___y_668_);
lean_dec_ref(v___y_667_);
lean_dec(v___y_666_);
lean_dec_ref(v___y_665_);
lean_dec_ref(v_opts_660_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3___redArg(lean_object* v_msg_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_){
_start:
{
lean_object* v_ref_679_; lean_object* v___x_680_; lean_object* v_a_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_689_; 
v_ref_679_ = lean_ctor_get(v___y_676_, 2);
v___x_680_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3_spec__6(v_msg_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_);
v_a_681_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_689_ == 0)
{
v___x_683_ = v___x_680_;
v_isShared_684_ = v_isSharedCheck_689_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_a_681_);
lean_dec(v___x_680_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_689_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_685_; lean_object* v___x_687_; 
lean_inc(v_ref_679_);
v___x_685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_685_, 0, v_ref_679_);
lean_ctor_set(v___x_685_, 1, v_a_681_);
if (v_isShared_684_ == 0)
{
lean_ctor_set_tag(v___x_683_, 1);
lean_ctor_set(v___x_683_, 0, v___x_685_);
v___x_687_ = v___x_683_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v___x_685_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3___redArg___boxed(lean_object* v_msg_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3___redArg(v_msg_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_);
lean_dec(v___y_694_);
lean_dec_ref(v___y_693_);
lean_dec(v___y_692_);
lean_dec_ref(v___y_691_);
return v_res_696_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__10(void){
_start:
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_714_ = lean_box(0);
v___x_715_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__9));
v___x_716_ = l_Lean_mkConst(v___x_715_, v___x_714_);
return v___x_716_;
}
}
static double _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12(void){
_start:
{
lean_object* v___x_718_; double v___x_719_; 
v___x_718_ = lean_unsigned_to_nat(1000000000u);
v___x_719_ = lean_float_of_nat(v___x_718_);
return v___x_719_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17(void){
_start:
{
lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_725_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__16));
v___x_726_ = l_Lean_stringToMessageData(v___x_725_);
return v___x_726_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__21(void){
_start:
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_735_ = lean_box(0);
v___x_736_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__20));
v___x_737_ = l_Lean_mkConst(v___x_736_, v___x_735_);
return v___x_737_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__23(void){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_744_ = lean_box(0);
v___x_745_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__22));
v___x_746_ = l_Lean_mkConst(v___x_745_, v___x_744_);
return v___x_746_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24(void){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_747_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3));
v___x_748_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__1));
v___x_749_ = l_Lean_Name_append(v___x_748_, v___x_747_);
return v___x_749_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__27(void){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_753_ = lean_box(0);
v___x_754_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__26));
v___x_755_ = l_Lean_mkConst(v___x_754_, v___x_753_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(lean_object* v_cert_757_, lean_object* v_ctx_758_, lean_object* v_reflectionResult_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_){
_start:
{
lean_object* v_satExpr_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_1140_; 
v_satExpr_765_ = lean_ctor_get(v_reflectionResult_759_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v_reflectionResult_759_);
if (v_isSharedCheck_1140_ == 0)
{
lean_object* v_unused_1141_; 
v_unused_1141_ = lean_ctor_get(v_reflectionResult_759_, 1);
lean_dec(v_unused_1141_);
v___x_767_ = v_reflectionResult_759_;
v_isShared_768_ = v_isSharedCheck_1140_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_satExpr_765_);
lean_dec(v_reflectionResult_759_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_1140_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v_toCold_769_; lean_object* v_options_770_; lean_object* v_exprDef_771_; lean_object* v_certDef_772_; lean_object* v_expr_773_; lean_object* v_ref_774_; lean_object* v_inheritedTraceOptions_775_; uint8_t v_hasTrace_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___f_779_; lean_object* v___f_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; uint8_t v___x_785_; lean_object* v___x_786_; uint8_t v___y_788_; lean_object* v___y_789_; lean_object* v___y_790_; lean_object* v___y_791_; lean_object* v_a_792_; uint8_t v___y_807_; lean_object* v___y_808_; lean_object* v___y_809_; lean_object* v___y_810_; lean_object* v_a_811_; uint8_t v___y_814_; lean_object* v___y_815_; lean_object* v___y_816_; lean_object* v___y_817_; lean_object* v_a_818_; uint8_t v___y_821_; lean_object* v___y_822_; lean_object* v___y_823_; lean_object* v___y_824_; lean_object* v_a_825_; lean_object* v___y_835_; uint8_t v___y_836_; lean_object* v___y_837_; lean_object* v___y_838_; lean_object* v_a_839_; lean_object* v___y_842_; uint8_t v___y_843_; lean_object* v___y_844_; lean_object* v___y_845_; lean_object* v_a_846_; uint8_t v___y_849_; lean_object* v___y_850_; lean_object* v___y_851_; lean_object* v___y_852_; lean_object* v___y_853_; lean_object* v___y_854_; lean_object* v___y_855_; lean_object* v___y_901_; lean_object* v___y_972_; uint8_t v___y_973_; lean_object* v___y_974_; lean_object* v___y_975_; lean_object* v_a_976_; lean_object* v___y_989_; uint8_t v___y_990_; lean_object* v___y_991_; lean_object* v___y_992_; lean_object* v_a_993_; lean_object* v___y_1003_; uint8_t v___y_1004_; lean_object* v___y_1005_; lean_object* v___y_1006_; lean_object* v___y_1048_; 
v_toCold_769_ = lean_ctor_get(v_a_762_, 0);
v_options_770_ = lean_ctor_get(v_toCold_769_, 2);
v_exprDef_771_ = lean_ctor_get(v_ctx_758_, 0);
lean_inc(v_exprDef_771_);
v_certDef_772_ = lean_ctor_get(v_ctx_758_, 1);
lean_inc(v_certDef_772_);
lean_dec_ref(v_ctx_758_);
v_expr_773_ = lean_ctor_get(v_satExpr_765_, 2);
lean_inc_ref(v_expr_773_);
lean_dec_ref(v_satExpr_765_);
v_ref_774_ = lean_ctor_get(v_a_762_, 2);
v_inheritedTraceOptions_775_ = lean_ctor_get(v_toCold_769_, 11);
v_hasTrace_776_ = lean_ctor_get_uint8(v_options_770_, sizeof(void*)*1);
v___x_777_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1));
v___x_778_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3));
v___f_779_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__4));
v___f_780_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__5));
v___x_781_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__6));
v___x_782_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__7));
v___x_783_ = lean_box(0);
v___x_784_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__10, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__10_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__10);
v___x_785_ = 1;
v___x_786_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__11));
if (v_hasTrace_776_ == 0)
{
lean_object* v___x_1065_; 
lean_inc(v_exprDef_771_);
v___x_1065_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(v_exprDef_771_, v_expr_773_, v___x_784_, v_a_762_, v_a_763_);
v___y_1048_ = v___x_1065_;
goto v___jp_1047_;
}
else
{
lean_object* v___f_1066_; lean_object* v___x_1067_; uint8_t v___x_1068_; lean_object* v___y_1070_; lean_object* v___y_1071_; lean_object* v_a_1072_; lean_object* v___y_1085_; lean_object* v___y_1086_; lean_object* v_a_1087_; 
v___f_1066_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__28));
v___x_1067_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24);
v___x_1068_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_775_, v_options_770_, v___x_1067_);
if (v___x_1068_ == 0)
{
lean_object* v___x_1137_; uint8_t v___x_1138_; 
v___x_1137_ = l_Lean_trace_profiler;
v___x_1138_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_options_770_, v___x_1137_);
if (v___x_1138_ == 0)
{
lean_object* v___x_1139_; 
lean_inc(v_exprDef_771_);
v___x_1139_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(v_exprDef_771_, v_expr_773_, v___x_784_, v_a_762_, v_a_763_);
v___y_1048_ = v___x_1139_;
goto v___jp_1047_;
}
else
{
goto v___jp_1096_;
}
}
else
{
goto v___jp_1096_;
}
v___jp_1069_:
{
lean_object* v___x_1073_; double v___x_1074_; double v___x_1075_; double v___x_1076_; double v___x_1077_; double v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1073_ = lean_io_mono_nanos_now();
v___x_1074_ = lean_float_of_nat(v___y_1071_);
v___x_1075_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_1076_ = lean_float_div(v___x_1074_, v___x_1075_);
v___x_1077_ = lean_float_of_nat(v___x_1073_);
v___x_1078_ = lean_float_div(v___x_1077_, v___x_1075_);
v___x_1079_ = lean_box_float(v___x_1076_);
v___x_1080_ = lean_box_float(v___x_1078_);
v___x_1081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1079_);
lean_ctor_set(v___x_1081_, 1, v___x_1080_);
v___x_1082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1082_, 0, v_a_1072_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4(v___x_778_, v___x_785_, v___x_786_, v_options_770_, v___x_1068_, v___y_1070_, v___f_1066_, v___x_1082_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
v___y_1048_ = v___x_1083_;
goto v___jp_1047_;
}
v___jp_1084_:
{
lean_object* v___x_1088_; double v___x_1089_; double v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1088_ = lean_io_get_num_heartbeats();
v___x_1089_ = lean_float_of_nat(v___y_1085_);
v___x_1090_ = lean_float_of_nat(v___x_1088_);
v___x_1091_ = lean_box_float(v___x_1089_);
v___x_1092_ = lean_box_float(v___x_1090_);
v___x_1093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1091_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
v___x_1094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1094_, 0, v_a_1087_);
lean_ctor_set(v___x_1094_, 1, v___x_1093_);
v___x_1095_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4(v___x_778_, v___x_785_, v___x_786_, v_options_770_, v___x_1068_, v___y_1086_, v___f_1066_, v___x_1094_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
v___y_1048_ = v___x_1095_;
goto v___jp_1047_;
}
v___jp_1096_:
{
lean_object* v___x_1097_; lean_object* v_a_1098_; lean_object* v___x_1099_; uint8_t v___x_1100_; 
v___x_1097_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v_a_763_);
v_a_1098_ = lean_ctor_get(v___x_1097_, 0);
lean_inc(v_a_1098_);
lean_dec_ref(v___x_1097_);
v___x_1099_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1100_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_options_770_, v___x_1099_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1101_ = lean_io_mono_nanos_now();
lean_inc(v_exprDef_771_);
v___x_1102_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(v_exprDef_771_, v_expr_773_, v___x_784_, v_a_762_, v_a_763_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
v_a_1103_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1105_ = v___x_1102_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1102_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
lean_ctor_set_tag(v___x_1105_, 1);
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_a_1103_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
v___y_1070_ = v_a_1098_;
v___y_1071_ = v___x_1101_;
v_a_1072_ = v___x_1108_;
goto v___jp_1069_;
}
}
}
else
{
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1118_; 
v_a_1111_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1113_ = v___x_1102_;
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v___x_1102_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1116_; 
if (v_isShared_1114_ == 0)
{
lean_ctor_set_tag(v___x_1113_, 0);
v___x_1116_ = v___x_1113_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_a_1111_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
v___y_1070_ = v_a_1098_;
v___y_1071_ = v___x_1101_;
v_a_1072_ = v___x_1116_;
goto v___jp_1069_;
}
}
}
}
else
{
lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1119_ = lean_io_get_num_heartbeats();
lean_inc(v_exprDef_771_);
v___x_1120_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(v_exprDef_771_, v_expr_773_, v___x_784_, v_a_762_, v_a_763_);
if (lean_obj_tag(v___x_1120_) == 0)
{
lean_object* v_a_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1128_; 
v_a_1121_ = lean_ctor_get(v___x_1120_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1123_ = v___x_1120_;
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_a_1121_);
lean_dec(v___x_1120_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1126_; 
if (v_isShared_1124_ == 0)
{
lean_ctor_set_tag(v___x_1123_, 1);
v___x_1126_ = v___x_1123_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_a_1121_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
v___y_1085_ = v___x_1119_;
v___y_1086_ = v_a_1098_;
v_a_1087_ = v___x_1126_;
goto v___jp_1084_;
}
}
}
else
{
lean_object* v_a_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1136_; 
v_a_1129_ = lean_ctor_get(v___x_1120_, 0);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1131_ = v___x_1120_;
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_a_1129_);
lean_dec(v___x_1120_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1134_; 
if (v_isShared_1132_ == 0)
{
lean_ctor_set_tag(v___x_1131_, 0);
v___x_1134_ = v___x_1131_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_a_1129_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
v___y_1085_ = v___x_1119_;
v___y_1086_ = v_a_1098_;
v_a_1087_ = v___x_1134_;
goto v___jp_1084_;
}
}
}
}
}
}
v___jp_787_:
{
lean_object* v___x_793_; double v___x_794_; double v___x_795_; double v___x_796_; double v___x_797_; double v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_802_; 
v___x_793_ = lean_io_mono_nanos_now();
v___x_794_ = lean_float_of_nat(v___y_789_);
v___x_795_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_796_ = lean_float_div(v___x_794_, v___x_795_);
v___x_797_ = lean_float_of_nat(v___x_793_);
v___x_798_ = lean_float_div(v___x_797_, v___x_795_);
v___x_799_ = lean_box_float(v___x_796_);
v___x_800_ = lean_box_float(v___x_798_);
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 1, v___x_800_);
lean_ctor_set(v___x_767_, 0, v___x_799_);
v___x_802_ = v___x_767_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v___x_799_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v___x_800_);
v___x_802_ = v_reuseFailAlloc_805_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_803_, 0, v_a_792_);
lean_ctor_set(v___x_803_, 1, v___x_802_);
v___x_804_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2(v___x_778_, v___x_785_, v___x_786_, v___y_791_, v___y_788_, v___y_790_, v___f_780_, v___x_803_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
return v___x_804_;
}
}
v___jp_806_:
{
lean_object* v___x_812_; 
v___x_812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_812_, 0, v_a_811_);
v___y_788_ = v___y_807_;
v___y_789_ = v___y_808_;
v___y_790_ = v___y_809_;
v___y_791_ = v___y_810_;
v_a_792_ = v___x_812_;
goto v___jp_787_;
}
v___jp_813_:
{
lean_object* v___x_819_; 
v___x_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_819_, 0, v_a_818_);
v___y_788_ = v___y_814_;
v___y_789_ = v___y_815_;
v___y_790_ = v___y_816_;
v___y_791_ = v___y_817_;
v_a_792_ = v___x_819_;
goto v___jp_787_;
}
v___jp_820_:
{
lean_object* v___x_826_; double v___x_827_; double v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_826_ = lean_io_get_num_heartbeats();
v___x_827_ = lean_float_of_nat(v___y_822_);
v___x_828_ = lean_float_of_nat(v___x_826_);
v___x_829_ = lean_box_float(v___x_827_);
v___x_830_ = lean_box_float(v___x_828_);
v___x_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_831_, 0, v___x_829_);
lean_ctor_set(v___x_831_, 1, v___x_830_);
v___x_832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_832_, 0, v_a_825_);
lean_ctor_set(v___x_832_, 1, v___x_831_);
v___x_833_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2(v___x_778_, v___x_785_, v___x_786_, v___y_824_, v___y_821_, v___y_823_, v___f_780_, v___x_832_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
return v___x_833_;
}
v___jp_834_:
{
lean_object* v___x_840_; 
v___x_840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_840_, 0, v_a_839_);
v___y_821_ = v___y_836_;
v___y_822_ = v___y_835_;
v___y_823_ = v___y_837_;
v___y_824_ = v___y_838_;
v_a_825_ = v___x_840_;
goto v___jp_820_;
}
v___jp_841_:
{
lean_object* v___x_847_; 
v___x_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_847_, 0, v_a_846_);
v___y_821_ = v___y_843_;
v___y_822_ = v___y_842_;
v___y_823_ = v___y_844_;
v___y_824_ = v___y_845_;
v_a_825_ = v___x_847_;
goto v___jp_820_;
}
v___jp_848_:
{
lean_object* v___x_856_; lean_object* v_a_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_899_; 
v___x_856_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v_a_763_);
v_a_857_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_899_ == 0)
{
v___x_859_ = v___x_856_;
v_isShared_860_ = v_isSharedCheck_899_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_a_857_);
lean_dec(v___x_856_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_899_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_861_; uint8_t v___x_862_; 
v___x_861_ = l_Lean_trace_profiler_useHeartbeats;
v___x_862_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v___y_855_, v___x_861_);
if (v___x_862_ == 0)
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_866_; 
v___x_863_ = lean_io_mono_nanos_now();
v___x_864_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__14));
lean_inc(v___y_853_);
if (v_isShared_860_ == 0)
{
lean_ctor_set_tag(v___x_859_, 1);
lean_ctor_set(v___x_859_, 0, v___y_853_);
v___x_866_ = v___x_859_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v___y_853_);
v___x_866_ = v_reuseFailAlloc_880_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
lean_object* v___x_867_; 
lean_inc_ref(v___y_851_);
v___x_867_ = l_Lean_Meta_nativeEqTrue(v___x_864_, v___y_851_, v___x_866_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
lean_dec_ref(v___x_866_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v_a_868_; 
v_a_868_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_a_868_);
lean_dec_ref_known(v___x_867_, 1);
if (lean_obj_tag(v_a_868_) == 0)
{
lean_object* v_prf_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
lean_dec_ref(v___y_851_);
v_prf_869_ = lean_ctor_get(v_a_868_, 0);
lean_inc_ref(v_prf_869_);
lean_dec_ref_known(v_a_868_, 1);
v___x_870_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__15));
lean_inc_ref(v___y_852_);
v___x_871_ = l_Lean_Name_mkStr5(v___x_781_, v___x_777_, v___x_782_, v___y_852_, v___x_870_);
v___x_872_ = l_Lean_mkConst(v___x_871_, v___x_783_);
v___x_873_ = l_Lean_mkApp3(v___x_872_, v___y_850_, v___y_854_, v_prf_869_);
v___y_814_ = v___y_849_;
v___y_815_ = v___x_863_;
v___y_816_ = v_a_857_;
v___y_817_ = v___y_855_;
v_a_818_ = v___x_873_;
goto v___jp_813_;
}
else
{
lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v_a_878_; 
lean_dec_ref(v___y_854_);
lean_dec_ref(v___y_850_);
v___x_874_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17);
v___x_875_ = l_Lean_indentExpr(v___y_851_);
v___x_876_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_876_, 0, v___x_874_);
lean_ctor_set(v___x_876_, 1, v___x_875_);
v___x_877_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3___redArg(v___x_876_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
v_a_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_a_878_);
lean_dec_ref(v___x_877_);
v___y_807_ = v___y_849_;
v___y_808_ = v___x_863_;
v___y_809_ = v_a_857_;
v___y_810_ = v___y_855_;
v_a_811_ = v_a_878_;
goto v___jp_806_;
}
}
else
{
lean_object* v_a_879_; 
lean_dec_ref(v___y_854_);
lean_dec_ref(v___y_851_);
lean_dec_ref(v___y_850_);
v_a_879_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_a_879_);
lean_dec_ref_known(v___x_867_, 1);
v___y_807_ = v___y_849_;
v___y_808_ = v___x_863_;
v___y_809_ = v_a_857_;
v___y_810_ = v___y_855_;
v_a_811_ = v_a_879_;
goto v___jp_806_;
}
}
}
else
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_884_; 
lean_del_object(v___x_767_);
v___x_881_ = lean_io_get_num_heartbeats();
v___x_882_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__14));
lean_inc(v___y_853_);
if (v_isShared_860_ == 0)
{
lean_ctor_set_tag(v___x_859_, 1);
lean_ctor_set(v___x_859_, 0, v___y_853_);
v___x_884_ = v___x_859_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v___y_853_);
v___x_884_ = v_reuseFailAlloc_898_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
lean_object* v___x_885_; 
lean_inc_ref(v___y_851_);
v___x_885_ = l_Lean_Meta_nativeEqTrue(v___x_882_, v___y_851_, v___x_884_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
lean_dec_ref(v___x_884_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_885_, 1);
if (lean_obj_tag(v_a_886_) == 0)
{
lean_object* v_prf_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
lean_dec_ref(v___y_851_);
v_prf_887_ = lean_ctor_get(v_a_886_, 0);
lean_inc_ref(v_prf_887_);
lean_dec_ref_known(v_a_886_, 1);
v___x_888_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__15));
lean_inc_ref(v___y_852_);
v___x_889_ = l_Lean_Name_mkStr5(v___x_781_, v___x_777_, v___x_782_, v___y_852_, v___x_888_);
v___x_890_ = l_Lean_mkConst(v___x_889_, v___x_783_);
v___x_891_ = l_Lean_mkApp3(v___x_890_, v___y_850_, v___y_854_, v_prf_887_);
v___y_842_ = v___x_881_;
v___y_843_ = v___y_849_;
v___y_844_ = v_a_857_;
v___y_845_ = v___y_855_;
v_a_846_ = v___x_891_;
goto v___jp_841_;
}
else
{
lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v_a_896_; 
lean_dec_ref(v___y_854_);
lean_dec_ref(v___y_850_);
v___x_892_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17);
v___x_893_ = l_Lean_indentExpr(v___y_851_);
v___x_894_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_894_, 0, v___x_892_);
lean_ctor_set(v___x_894_, 1, v___x_893_);
v___x_895_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3___redArg(v___x_894_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
v_a_896_ = lean_ctor_get(v___x_895_, 0);
lean_inc(v_a_896_);
lean_dec_ref(v___x_895_);
v___y_835_ = v___x_881_;
v___y_836_ = v___y_849_;
v___y_837_ = v_a_857_;
v___y_838_ = v___y_855_;
v_a_839_ = v_a_896_;
goto v___jp_834_;
}
}
else
{
lean_object* v_a_897_; 
lean_dec_ref(v___y_854_);
lean_dec_ref(v___y_851_);
lean_dec_ref(v___y_850_);
v_a_897_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_897_);
lean_dec_ref_known(v___x_885_, 1);
v___y_835_ = v___x_881_;
v___y_836_ = v___y_849_;
v___y_837_ = v_a_857_;
v___y_838_ = v___y_855_;
v_a_839_ = v_a_897_;
goto v___jp_834_;
}
}
}
}
}
v___jp_900_:
{
if (lean_obj_tag(v___y_901_) == 0)
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
lean_dec_ref_known(v___y_901_, 1);
v___x_902_ = l_Lean_mkConst(v_exprDef_771_, v___x_783_);
v___x_903_ = l_Lean_mkConst(v_certDef_772_, v___x_783_);
v___x_904_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__18));
v___x_905_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__21, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__21_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__21);
lean_inc_ref(v___x_903_);
lean_inc_ref(v___x_902_);
v___x_906_ = l_Lean_mkAppB(v___x_905_, v___x_902_, v___x_903_);
if (v_hasTrace_776_ == 0)
{
lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
lean_del_object(v___x_767_);
v___x_907_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__14));
lean_inc(v_ref_774_);
v___x_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_908_, 0, v_ref_774_);
lean_inc_ref(v___x_906_);
v___x_909_ = l_Lean_Meta_nativeEqTrue(v___x_907_, v___x_906_, v___x_908_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
lean_dec_ref_known(v___x_908_, 1);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_924_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_924_ == 0)
{
v___x_912_ = v___x_909_;
v_isShared_913_ = v_isSharedCheck_924_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v___x_909_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_924_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
if (lean_obj_tag(v_a_910_) == 0)
{
lean_object* v_prf_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_918_; 
lean_dec_ref(v___x_906_);
v_prf_914_ = lean_ctor_get(v_a_910_, 0);
lean_inc_ref(v_prf_914_);
lean_dec_ref_known(v_a_910_, 1);
v___x_915_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__23, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__23_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__23);
v___x_916_ = l_Lean_mkApp3(v___x_915_, v___x_902_, v___x_903_, v_prf_914_);
if (v_isShared_913_ == 0)
{
lean_ctor_set(v___x_912_, 0, v___x_916_);
v___x_918_ = v___x_912_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v___x_916_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
else
{
lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
lean_del_object(v___x_912_);
lean_dec_ref(v___x_903_);
lean_dec_ref(v___x_902_);
v___x_920_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17);
v___x_921_ = l_Lean_indentExpr(v___x_906_);
v___x_922_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_922_, 0, v___x_920_);
lean_ctor_set(v___x_922_, 1, v___x_921_);
v___x_923_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3___redArg(v___x_922_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
return v___x_923_;
}
}
}
else
{
lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_932_; 
lean_dec_ref(v___x_906_);
lean_dec_ref(v___x_903_);
lean_dec_ref(v___x_902_);
v_a_925_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_932_ == 0)
{
v___x_927_ = v___x_909_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v___x_909_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_a_925_);
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
lean_object* v___x_933_; uint8_t v___x_934_; 
v___x_933_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24);
v___x_934_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_775_, v_options_770_, v___x_933_);
if (v___x_934_ == 0)
{
lean_object* v___x_935_; uint8_t v___x_936_; 
v___x_935_ = l_Lean_trace_profiler;
v___x_936_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_options_770_, v___x_935_);
if (v___x_936_ == 0)
{
lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
lean_del_object(v___x_767_);
v___x_937_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__14));
lean_inc(v_ref_774_);
v___x_938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_938_, 0, v_ref_774_);
lean_inc_ref(v___x_906_);
v___x_939_ = l_Lean_Meta_nativeEqTrue(v___x_937_, v___x_906_, v___x_938_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
lean_dec_ref_known(v___x_938_, 1);
if (lean_obj_tag(v___x_939_) == 0)
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_954_; 
v_a_940_ = lean_ctor_get(v___x_939_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_954_ == 0)
{
v___x_942_ = v___x_939_;
v_isShared_943_ = v_isSharedCheck_954_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_939_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_954_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
if (lean_obj_tag(v_a_940_) == 0)
{
lean_object* v_prf_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_948_; 
lean_dec_ref(v___x_906_);
v_prf_944_ = lean_ctor_get(v_a_940_, 0);
lean_inc_ref(v_prf_944_);
lean_dec_ref_known(v_a_940_, 1);
v___x_945_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__23, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__23_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__23);
v___x_946_ = l_Lean_mkApp3(v___x_945_, v___x_902_, v___x_903_, v_prf_944_);
if (v_isShared_943_ == 0)
{
lean_ctor_set(v___x_942_, 0, v___x_946_);
v___x_948_ = v___x_942_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v___x_946_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
return v___x_948_;
}
}
else
{
lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
lean_del_object(v___x_942_);
lean_dec_ref(v___x_903_);
lean_dec_ref(v___x_902_);
v___x_950_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__17);
v___x_951_ = l_Lean_indentExpr(v___x_906_);
v___x_952_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_952_, 0, v___x_950_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
v___x_953_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3___redArg(v___x_952_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
return v___x_953_;
}
}
}
else
{
lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_962_; 
lean_dec_ref(v___x_906_);
lean_dec_ref(v___x_903_);
lean_dec_ref(v___x_902_);
v_a_955_ = lean_ctor_get(v___x_939_, 0);
v_isSharedCheck_962_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_962_ == 0)
{
v___x_957_ = v___x_939_;
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v___x_939_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_960_; 
if (v_isShared_958_ == 0)
{
v___x_960_ = v___x_957_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_a_955_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
}
else
{
v___y_849_ = v___x_934_;
v___y_850_ = v___x_902_;
v___y_851_ = v___x_906_;
v___y_852_ = v___x_904_;
v___y_853_ = v_ref_774_;
v___y_854_ = v___x_903_;
v___y_855_ = v_options_770_;
goto v___jp_848_;
}
}
else
{
v___y_849_ = v___x_934_;
v___y_850_ = v___x_902_;
v___y_851_ = v___x_906_;
v___y_852_ = v___x_904_;
v___y_853_ = v_ref_774_;
v___y_854_ = v___x_903_;
v___y_855_ = v_options_770_;
goto v___jp_848_;
}
}
}
else
{
lean_object* v_a_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_970_; 
lean_dec(v_certDef_772_);
lean_dec(v_exprDef_771_);
lean_del_object(v___x_767_);
v_a_963_ = lean_ctor_get(v___y_901_, 0);
v_isSharedCheck_970_ = !lean_is_exclusive(v___y_901_);
if (v_isSharedCheck_970_ == 0)
{
v___x_965_ = v___y_901_;
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_a_963_);
lean_dec(v___y_901_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_968_; 
if (v_isShared_966_ == 0)
{
v___x_968_ = v___x_965_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_a_963_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
return v___x_968_;
}
}
}
}
v___jp_971_:
{
lean_object* v___x_977_; double v___x_978_; double v___x_979_; double v___x_980_; double v___x_981_; double v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_977_ = lean_io_mono_nanos_now();
v___x_978_ = lean_float_of_nat(v___y_972_);
v___x_979_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_980_ = lean_float_div(v___x_978_, v___x_979_);
v___x_981_ = lean_float_of_nat(v___x_977_);
v___x_982_ = lean_float_div(v___x_981_, v___x_979_);
v___x_983_ = lean_box_float(v___x_980_);
v___x_984_ = lean_box_float(v___x_982_);
v___x_985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_985_, 0, v___x_983_);
lean_ctor_set(v___x_985_, 1, v___x_984_);
v___x_986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_986_, 0, v_a_976_);
lean_ctor_set(v___x_986_, 1, v___x_985_);
v___x_987_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4(v___x_778_, v___x_785_, v___x_786_, v___y_974_, v___y_973_, v___y_975_, v___f_779_, v___x_986_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
v___y_901_ = v___x_987_;
goto v___jp_900_;
}
v___jp_988_:
{
lean_object* v___x_994_; double v___x_995_; double v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_994_ = lean_io_get_num_heartbeats();
v___x_995_ = lean_float_of_nat(v___y_989_);
v___x_996_ = lean_float_of_nat(v___x_994_);
v___x_997_ = lean_box_float(v___x_995_);
v___x_998_ = lean_box_float(v___x_996_);
v___x_999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_997_);
lean_ctor_set(v___x_999_, 1, v___x_998_);
v___x_1000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1000_, 0, v_a_993_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4(v___x_778_, v___x_785_, v___x_786_, v___y_991_, v___y_990_, v___y_992_, v___f_779_, v___x_1000_, v_a_760_, v_a_761_, v_a_762_, v_a_763_);
v___y_901_ = v___x_1001_;
goto v___jp_900_;
}
v___jp_1002_:
{
lean_object* v___x_1007_; lean_object* v_a_1008_; lean_object* v___x_1009_; uint8_t v___x_1010_; 
v___x_1007_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg(v_a_763_);
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
lean_inc(v_a_1008_);
lean_dec_ref(v___x_1007_);
v___x_1009_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1010_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v___y_1006_, v___x_1009_);
if (v___x_1010_ == 0)
{
lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1011_ = lean_io_mono_nanos_now();
lean_inc(v_certDef_772_);
v___x_1012_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(v_certDef_772_, v___y_1005_, v___y_1003_, v_a_762_, v_a_763_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1020_; 
v_a_1013_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1015_ = v___x_1012_;
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_1012_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1018_; 
if (v_isShared_1016_ == 0)
{
lean_ctor_set_tag(v___x_1015_, 1);
v___x_1018_ = v___x_1015_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_a_1013_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
v___y_972_ = v___x_1011_;
v___y_973_ = v___y_1004_;
v___y_974_ = v___y_1006_;
v___y_975_ = v_a_1008_;
v_a_976_ = v___x_1018_;
goto v___jp_971_;
}
}
}
else
{
lean_object* v_a_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1028_; 
v_a_1021_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1028_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1023_ = v___x_1012_;
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_a_1021_);
lean_dec(v___x_1012_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v___x_1026_; 
if (v_isShared_1024_ == 0)
{
lean_ctor_set_tag(v___x_1023_, 0);
v___x_1026_ = v___x_1023_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_a_1021_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
v___y_972_ = v___x_1011_;
v___y_973_ = v___y_1004_;
v___y_974_ = v___y_1006_;
v___y_975_ = v_a_1008_;
v_a_976_ = v___x_1026_;
goto v___jp_971_;
}
}
}
}
else
{
lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1029_ = lean_io_get_num_heartbeats();
lean_inc(v_certDef_772_);
v___x_1030_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(v_certDef_772_, v___y_1005_, v___y_1003_, v_a_762_, v_a_763_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1038_; 
v_a_1031_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1033_ = v___x_1030_;
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_dec(v___x_1030_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1036_; 
if (v_isShared_1034_ == 0)
{
lean_ctor_set_tag(v___x_1033_, 1);
v___x_1036_ = v___x_1033_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v_a_1031_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
v___y_989_ = v___x_1029_;
v___y_990_ = v___y_1004_;
v___y_991_ = v___y_1006_;
v___y_992_ = v_a_1008_;
v_a_993_ = v___x_1036_;
goto v___jp_988_;
}
}
}
else
{
lean_object* v_a_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1046_; 
v_a_1039_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1041_ = v___x_1030_;
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_a_1039_);
lean_dec(v___x_1030_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1044_; 
if (v_isShared_1042_ == 0)
{
lean_ctor_set_tag(v___x_1041_, 0);
v___x_1044_ = v___x_1041_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_a_1039_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
v___y_989_ = v___x_1029_;
v___y_990_ = v___y_1004_;
v___y_991_ = v___y_1006_;
v___y_992_ = v_a_1008_;
v_a_993_ = v___x_1044_;
goto v___jp_988_;
}
}
}
}
}
v___jp_1047_:
{
if (lean_obj_tag(v___y_1048_) == 0)
{
lean_object* v___x_1049_; lean_object* v___x_1050_; 
lean_dec_ref_known(v___y_1048_, 1);
v___x_1049_ = l_Lean_mkStrLit(v_cert_757_);
v___x_1050_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__27, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__27_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__27);
if (v_hasTrace_776_ == 0)
{
lean_object* v___x_1051_; 
lean_inc(v_certDef_772_);
v___x_1051_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(v_certDef_772_, v___x_1049_, v___x_1050_, v_a_762_, v_a_763_);
v___y_901_ = v___x_1051_;
goto v___jp_900_;
}
else
{
lean_object* v___x_1052_; uint8_t v___x_1053_; 
v___x_1052_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24);
v___x_1053_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_775_, v_options_770_, v___x_1052_);
if (v___x_1053_ == 0)
{
lean_object* v___x_1054_; uint8_t v___x_1055_; 
v___x_1054_ = l_Lean_trace_profiler;
v___x_1055_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_options_770_, v___x_1054_);
if (v___x_1055_ == 0)
{
lean_object* v___x_1056_; 
lean_inc(v_certDef_772_);
v___x_1056_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl(v_certDef_772_, v___x_1049_, v___x_1050_, v_a_762_, v_a_763_);
v___y_901_ = v___x_1056_;
goto v___jp_900_;
}
else
{
v___y_1003_ = v___x_1050_;
v___y_1004_ = v___x_1053_;
v___y_1005_ = v___x_1049_;
v___y_1006_ = v_options_770_;
goto v___jp_1002_;
}
}
else
{
v___y_1003_ = v___x_1050_;
v___y_1004_ = v___x_1053_;
v___y_1005_ = v___x_1049_;
v___y_1006_ = v_options_770_;
goto v___jp_1002_;
}
}
}
else
{
lean_object* v_a_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1064_; 
lean_dec(v_certDef_772_);
lean_dec(v_exprDef_771_);
lean_del_object(v___x_767_);
lean_dec_ref(v_cert_757_);
v_a_1057_ = lean_ctor_get(v___y_1048_, 0);
v_isSharedCheck_1064_ = !lean_is_exclusive(v___y_1048_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1059_ = v___y_1048_;
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_a_1057_);
lean_dec(v___y_1048_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1064_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1062_; 
if (v_isShared_1060_ == 0)
{
v___x_1062_ = v___x_1059_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v_a_1057_);
v___x_1062_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
return v___x_1062_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___boxed(lean_object* v_cert_1142_, lean_object* v_ctx_1143_, lean_object* v_reflectionResult_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(v_cert_1142_, v_ctx_1143_, v_reflectionResult_1144_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_);
lean_dec(v_a_1148_);
lean_dec_ref(v_a_1147_);
lean_dec(v_a_1146_);
lean_dec_ref(v_a_1145_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__3(lean_object* v_00_u03b1_1151_, lean_object* v_x_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_){
_start:
{
lean_object* v___x_1158_; 
v___x_1158_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__3___redArg(v_x_1152_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__3___boxed(lean_object* v_00_u03b1_1159_, lean_object* v_x_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__3(v_00_u03b1_1159_, v_x_1160_, v___y_1161_, v___y_1162_, v___y_1163_, v___y_1164_);
lean_dec(v___y_1164_);
lean_dec_ref(v___y_1163_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3(lean_object* v_00_u03b1_1167_, lean_object* v_msg_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
lean_object* v___x_1174_; 
v___x_1174_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3___redArg(v_msg_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_);
return v___x_1174_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3___boxed(lean_object* v_00_u03b1_1175_, lean_object* v_msg_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3(v_00_u03b1_1175_, v_msg_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_);
lean_dec(v___y_1180_);
lean_dec_ref(v___y_1179_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___redArg(lean_object* v___y_1183_){
_start:
{
lean_object* v___x_1185_; lean_object* v_traceState_1186_; lean_object* v_traces_1187_; lean_object* v___x_1188_; lean_object* v_traceState_1189_; lean_object* v_env_1190_; lean_object* v_nextMacroScope_1191_; lean_object* v_ngen_1192_; lean_object* v_auxDeclNGen_1193_; lean_object* v_cache_1194_; lean_object* v_recordedDeps_1195_; lean_object* v_messages_1196_; lean_object* v_infoState_1197_; lean_object* v_snapshotTasks_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1219_; 
v___x_1185_ = lean_st_ref_get(v___y_1183_);
v_traceState_1186_ = lean_ctor_get(v___x_1185_, 4);
lean_inc_ref(v_traceState_1186_);
lean_dec(v___x_1185_);
v_traces_1187_ = lean_ctor_get(v_traceState_1186_, 0);
lean_inc_ref(v_traces_1187_);
lean_dec_ref(v_traceState_1186_);
v___x_1188_ = lean_st_ref_take(v___y_1183_);
v_traceState_1189_ = lean_ctor_get(v___x_1188_, 4);
v_env_1190_ = lean_ctor_get(v___x_1188_, 0);
v_nextMacroScope_1191_ = lean_ctor_get(v___x_1188_, 1);
v_ngen_1192_ = lean_ctor_get(v___x_1188_, 2);
v_auxDeclNGen_1193_ = lean_ctor_get(v___x_1188_, 3);
v_cache_1194_ = lean_ctor_get(v___x_1188_, 5);
v_recordedDeps_1195_ = lean_ctor_get(v___x_1188_, 6);
v_messages_1196_ = lean_ctor_get(v___x_1188_, 7);
v_infoState_1197_ = lean_ctor_get(v___x_1188_, 8);
v_snapshotTasks_1198_ = lean_ctor_get(v___x_1188_, 9);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1188_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1200_ = v___x_1188_;
v_isShared_1201_ = v_isSharedCheck_1219_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_snapshotTasks_1198_);
lean_inc(v_infoState_1197_);
lean_inc(v_messages_1196_);
lean_inc(v_recordedDeps_1195_);
lean_inc(v_cache_1194_);
lean_inc(v_traceState_1189_);
lean_inc(v_auxDeclNGen_1193_);
lean_inc(v_ngen_1192_);
lean_inc(v_nextMacroScope_1191_);
lean_inc(v_env_1190_);
lean_dec(v___x_1188_);
v___x_1200_ = lean_box(0);
v_isShared_1201_ = v_isSharedCheck_1219_;
goto v_resetjp_1199_;
}
v_resetjp_1199_:
{
uint64_t v_tid_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1217_; 
v_tid_1202_ = lean_ctor_get_uint64(v_traceState_1189_, sizeof(void*)*1);
v_isSharedCheck_1217_ = !lean_is_exclusive(v_traceState_1189_);
if (v_isSharedCheck_1217_ == 0)
{
lean_object* v_unused_1218_; 
v_unused_1218_ = lean_ctor_get(v_traceState_1189_, 0);
lean_dec(v_unused_1218_);
v___x_1204_ = v_traceState_1189_;
v_isShared_1205_ = v_isSharedCheck_1217_;
goto v_resetjp_1203_;
}
else
{
lean_dec(v_traceState_1189_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1217_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1210_; 
v___x_1206_ = lean_unsigned_to_nat(32u);
v___x_1207_ = lean_mk_empty_array_with_capacity(v___x_1206_);
lean_dec_ref(v___x_1207_);
v___x_1208_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__1);
if (v_isShared_1205_ == 0)
{
lean_ctor_set(v___x_1204_, 0, v___x_1208_);
v___x_1210_ = v___x_1204_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v___x_1208_);
lean_ctor_set_uint64(v_reuseFailAlloc_1216_, sizeof(void*)*1, v_tid_1202_);
v___x_1210_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
lean_object* v___x_1212_; 
if (v_isShared_1201_ == 0)
{
lean_ctor_set(v___x_1200_, 4, v___x_1210_);
v___x_1212_ = v___x_1200_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_env_1190_);
lean_ctor_set(v_reuseFailAlloc_1215_, 1, v_nextMacroScope_1191_);
lean_ctor_set(v_reuseFailAlloc_1215_, 2, v_ngen_1192_);
lean_ctor_set(v_reuseFailAlloc_1215_, 3, v_auxDeclNGen_1193_);
lean_ctor_set(v_reuseFailAlloc_1215_, 4, v___x_1210_);
lean_ctor_set(v_reuseFailAlloc_1215_, 5, v_cache_1194_);
lean_ctor_set(v_reuseFailAlloc_1215_, 6, v_recordedDeps_1195_);
lean_ctor_set(v_reuseFailAlloc_1215_, 7, v_messages_1196_);
lean_ctor_set(v_reuseFailAlloc_1215_, 8, v_infoState_1197_);
lean_ctor_set(v_reuseFailAlloc_1215_, 9, v_snapshotTasks_1198_);
v___x_1212_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1213_ = lean_st_ref_put(v___y_1183_, v___x_1212_);
v___x_1214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1214_, 0, v_traces_1187_);
return v___x_1214_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___redArg___boxed(lean_object* v___y_1220_, lean_object* v___y_1221_){
_start:
{
lean_object* v_res_1222_; 
v_res_1222_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___redArg(v___y_1220_);
lean_dec(v___y_1220_);
return v_res_1222_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4(lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_){
_start:
{
lean_object* v___x_1236_; 
v___x_1236_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___redArg(v___y_1234_);
return v___x_1236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___boxed(lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_){
_start:
{
lean_object* v_res_1250_; 
v_res_1250_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4(v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_, v___y_1248_);
lean_dec(v___y_1248_);
lean_dec_ref(v___y_1247_);
lean_dec(v___y_1246_);
lean_dec_ref(v___y_1245_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec(v___y_1242_);
lean_dec_ref(v___y_1241_);
lean_dec(v___y_1240_);
lean_dec(v___y_1239_);
lean_dec_ref(v___y_1238_);
lean_dec(v___y_1237_);
return v_res_1250_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1254_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0___closed__1));
v___x_1255_ = l_Lean_MessageData_ofFormat(v___x_1254_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0(lean_object* v_x_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_){
_start:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1270_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0___closed__2, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0___closed__2);
v___x_1271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1270_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0___boxed(lean_object* v_x_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_){
_start:
{
lean_object* v_res_1286_; 
v_res_1286_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__0(v_x_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_);
lean_dec(v___y_1284_);
lean_dec_ref(v___y_1283_);
lean_dec(v___y_1282_);
lean_dec_ref(v___y_1281_);
lean_dec(v___y_1280_);
lean_dec_ref(v___y_1279_);
lean_dec(v___y_1278_);
lean_dec_ref(v___y_1277_);
lean_dec(v___y_1276_);
lean_dec(v___y_1275_);
lean_dec_ref(v___y_1274_);
lean_dec(v___y_1273_);
lean_dec_ref(v_x_1272_);
return v_res_1286_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1290_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__1));
v___x_1291_ = l_Lean_MessageData_ofFormat(v___x_1290_);
return v___x_1291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1(lean_object* v_x_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1306_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__2, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___closed__2);
v___x_1307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1306_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1___boxed(lean_object* v_x_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_){
_start:
{
lean_object* v_res_1322_; 
v_res_1322_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__1(v_x_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_);
lean_dec(v___y_1320_);
lean_dec_ref(v___y_1319_);
lean_dec(v___y_1318_);
lean_dec_ref(v___y_1317_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
lean_dec(v___y_1312_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
lean_dec(v___y_1309_);
lean_dec_ref(v_x_1308_);
return v_res_1322_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__2(void){
_start:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1326_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__1));
v___x_1327_ = l_Lean_MessageData_ofFormat(v___x_1326_);
return v___x_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2(lean_object* v_x_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1342_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__2, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___closed__2);
v___x_1343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1342_);
return v___x_1343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2___boxed(lean_object* v_x_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_){
_start:
{
lean_object* v_res_1358_; 
v_res_1358_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__2(v_x_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
lean_dec(v___y_1350_);
lean_dec_ref(v___y_1349_);
lean_dec(v___y_1348_);
lean_dec(v___y_1347_);
lean_dec_ref(v___y_1346_);
lean_dec(v___y_1345_);
lean_dec_ref(v_x_1344_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__3(lean_object* v_bvExpr_1359_, lean_object* v_x_1360_){
_start:
{
lean_object* v___x_1361_; 
v___x_1361_ = l_Std_Tactic_BVDecide_BVLogicalExpr_bitblast(v_bvExpr_1359_);
return v___x_1361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4(lean_object* v___f_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_){
_start:
{
lean_object* v_ref_1375_; lean_object* v___x_1376_; 
v_ref_1375_ = lean_ctor_get(v___y_1372_, 2);
v___x_1376_ = l_IO_lazyPure___redArg(v___f_1362_);
if (lean_obj_tag(v___x_1376_) == 0)
{
lean_object* v_a_1377_; lean_object* v___x_1379_; uint8_t v_isShared_1380_; uint8_t v_isSharedCheck_1384_; 
v_a_1377_ = lean_ctor_get(v___x_1376_, 0);
v_isSharedCheck_1384_ = !lean_is_exclusive(v___x_1376_);
if (v_isSharedCheck_1384_ == 0)
{
v___x_1379_ = v___x_1376_;
v_isShared_1380_ = v_isSharedCheck_1384_;
goto v_resetjp_1378_;
}
else
{
lean_inc(v_a_1377_);
lean_dec(v___x_1376_);
v___x_1379_ = lean_box(0);
v_isShared_1380_ = v_isSharedCheck_1384_;
goto v_resetjp_1378_;
}
v_resetjp_1378_:
{
lean_object* v___x_1382_; 
if (v_isShared_1380_ == 0)
{
v___x_1382_ = v___x_1379_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v_a_1377_);
v___x_1382_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
return v___x_1382_;
}
}
}
else
{
lean_object* v_a_1385_; lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1396_; 
v_a_1385_ = lean_ctor_get(v___x_1376_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v___x_1376_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1387_ = v___x_1376_;
v_isShared_1388_ = v_isSharedCheck_1396_;
goto v_resetjp_1386_;
}
else
{
lean_inc(v_a_1385_);
lean_dec(v___x_1376_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1396_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1394_; 
v___x_1389_ = lean_io_error_to_string(v_a_1385_);
v___x_1390_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1389_);
v___x_1391_ = l_Lean_MessageData_ofFormat(v___x_1390_);
lean_inc(v_ref_1375_);
v___x_1392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1392_, 0, v_ref_1375_);
lean_ctor_set(v___x_1392_, 1, v___x_1391_);
if (v_isShared_1388_ == 0)
{
lean_ctor_set(v___x_1387_, 0, v___x_1392_);
v___x_1394_ = v___x_1387_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v___x_1392_);
v___x_1394_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
return v___x_1394_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___boxed(lean_object* v___f_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_){
_start:
{
lean_object* v_res_1410_; 
v_res_1410_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4(v___f_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_);
lean_dec(v___y_1408_);
lean_dec_ref(v___y_1407_);
lean_dec(v___y_1406_);
lean_dec_ref(v___y_1405_);
lean_dec(v___y_1404_);
lean_dec_ref(v___y_1403_);
lean_dec(v___y_1402_);
lean_dec_ref(v___y_1401_);
lean_dec(v___y_1400_);
lean_dec(v___y_1399_);
lean_dec_ref(v___y_1398_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9___redArg(lean_object* v_x_1411_){
_start:
{
if (lean_obj_tag(v_x_1411_) == 0)
{
lean_object* v_a_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1420_; 
v_a_1413_ = lean_ctor_get(v_x_1411_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v_x_1411_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1415_ = v_x_1411_;
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_a_1413_);
lean_dec(v_x_1411_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1418_; 
if (v_isShared_1416_ == 0)
{
lean_ctor_set_tag(v___x_1415_, 1);
v___x_1418_ = v___x_1415_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v_a_1413_);
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
v_a_1421_ = lean_ctor_get(v_x_1411_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v_x_1411_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1423_ = v_x_1411_;
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_a_1421_);
lean_dec(v_x_1411_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1426_; 
if (v_isShared_1424_ == 0)
{
lean_ctor_set_tag(v___x_1423_, 0);
v___x_1426_ = v___x_1423_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(0, 1, 0);
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
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9___redArg___boxed(lean_object* v_x_1429_, lean_object* v___y_1430_){
_start:
{
lean_object* v_res_1431_; 
v_res_1431_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9___redArg(v_x_1429_);
return v_res_1431_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__8_spec__19(lean_object* v_e_1432_){
_start:
{
if (lean_obj_tag(v_e_1432_) == 0)
{
uint8_t v___x_1433_; 
v___x_1433_ = 2;
return v___x_1433_;
}
else
{
uint8_t v___x_1434_; 
v___x_1434_ = 0;
return v___x_1434_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__8_spec__19___boxed(lean_object* v_e_1435_){
_start:
{
uint8_t v_res_1436_; lean_object* v_r_1437_; 
v_res_1436_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__8_spec__19(v_e_1435_);
lean_dec_ref(v_e_1435_);
v_r_1437_ = lean_box(v_res_1436_);
return v_r_1437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__8___redArg(lean_object* v_oldTraces_1438_, lean_object* v_data_1439_, lean_object* v_ref_1440_, lean_object* v_msg_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_){
_start:
{
lean_object* v_toCold_1447_; lean_object* v_currRecDepth_1448_; lean_object* v_ref_1449_; uint16_t v_optionFlags_1450_; uint8_t v_suppressElabErrors_1451_; uint8_t v_checkDeprecated_1452_; uint8_t v_isRecordingDeps_1453_; lean_object* v_ref_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v_traceState_1457_; lean_object* v_traces_1458_; lean_object* v___x_1459_; size_t v_sz_1460_; size_t v___x_1461_; lean_object* v___x_1462_; lean_object* v_msg_1463_; lean_object* v___x_1464_; lean_object* v_a_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1503_; 
v_toCold_1447_ = lean_ctor_get(v___y_1444_, 0);
v_currRecDepth_1448_ = lean_ctor_get(v___y_1444_, 1);
v_ref_1449_ = lean_ctor_get(v___y_1444_, 2);
v_optionFlags_1450_ = lean_ctor_get_uint16(v___y_1444_, sizeof(void*)*3);
v_suppressElabErrors_1451_ = lean_ctor_get_uint8(v___y_1444_, sizeof(void*)*3 + 2);
v_checkDeprecated_1452_ = lean_ctor_get_uint8(v___y_1444_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1453_ = lean_ctor_get_uint8(v___y_1444_, sizeof(void*)*3 + 4);
v_ref_1454_ = l_Lean_replaceRef(v_ref_1440_, v_ref_1449_);
lean_inc(v_currRecDepth_1448_);
lean_inc_ref(v_toCold_1447_);
v___x_1455_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1455_, 0, v_toCold_1447_);
lean_ctor_set(v___x_1455_, 1, v_currRecDepth_1448_);
lean_ctor_set(v___x_1455_, 2, v_ref_1454_);
lean_ctor_set_uint16(v___x_1455_, sizeof(void*)*3, v_optionFlags_1450_);
lean_ctor_set_uint8(v___x_1455_, sizeof(void*)*3 + 2, v_suppressElabErrors_1451_);
lean_ctor_set_uint8(v___x_1455_, sizeof(void*)*3 + 3, v_checkDeprecated_1452_);
lean_ctor_set_uint8(v___x_1455_, sizeof(void*)*3 + 4, v_isRecordingDeps_1453_);
v___x_1456_ = lean_st_ref_get(v___y_1445_);
v_traceState_1457_ = lean_ctor_get(v___x_1456_, 4);
lean_inc_ref(v_traceState_1457_);
lean_dec(v___x_1456_);
v_traces_1458_ = lean_ctor_get(v_traceState_1457_, 0);
lean_inc_ref(v_traces_1458_);
lean_dec_ref(v_traceState_1457_);
v___x_1459_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1458_);
lean_dec_ref(v_traces_1458_);
v_sz_1460_ = lean_array_size(v___x_1459_);
v___x_1461_ = ((size_t)0ULL);
v___x_1462_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__2_spec__3(v_sz_1460_, v___x_1461_, v___x_1459_);
v_msg_1463_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1463_, 0, v_data_1439_);
lean_ctor_set(v_msg_1463_, 1, v_msg_1441_);
lean_ctor_set(v_msg_1463_, 2, v___x_1462_);
v___x_1464_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3_spec__6(v_msg_1463_, v___y_1442_, v___y_1443_, v___x_1455_, v___y_1445_);
lean_dec_ref_known(v___x_1455_, 3);
v_a_1465_ = lean_ctor_get(v___x_1464_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1467_ = v___x_1464_;
v_isShared_1468_ = v_isSharedCheck_1503_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_a_1465_);
lean_dec(v___x_1464_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1503_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1469_; lean_object* v_traceState_1470_; lean_object* v_env_1471_; lean_object* v_nextMacroScope_1472_; lean_object* v_ngen_1473_; lean_object* v_auxDeclNGen_1474_; lean_object* v_cache_1475_; lean_object* v_recordedDeps_1476_; lean_object* v_messages_1477_; lean_object* v_infoState_1478_; lean_object* v_snapshotTasks_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1502_; 
v___x_1469_ = lean_st_ref_take(v___y_1445_);
v_traceState_1470_ = lean_ctor_get(v___x_1469_, 4);
v_env_1471_ = lean_ctor_get(v___x_1469_, 0);
v_nextMacroScope_1472_ = lean_ctor_get(v___x_1469_, 1);
v_ngen_1473_ = lean_ctor_get(v___x_1469_, 2);
v_auxDeclNGen_1474_ = lean_ctor_get(v___x_1469_, 3);
v_cache_1475_ = lean_ctor_get(v___x_1469_, 5);
v_recordedDeps_1476_ = lean_ctor_get(v___x_1469_, 6);
v_messages_1477_ = lean_ctor_get(v___x_1469_, 7);
v_infoState_1478_ = lean_ctor_get(v___x_1469_, 8);
v_snapshotTasks_1479_ = lean_ctor_get(v___x_1469_, 9);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1481_ = v___x_1469_;
v_isShared_1482_ = v_isSharedCheck_1502_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_snapshotTasks_1479_);
lean_inc(v_infoState_1478_);
lean_inc(v_messages_1477_);
lean_inc(v_recordedDeps_1476_);
lean_inc(v_cache_1475_);
lean_inc(v_traceState_1470_);
lean_inc(v_auxDeclNGen_1474_);
lean_inc(v_ngen_1473_);
lean_inc(v_nextMacroScope_1472_);
lean_inc(v_env_1471_);
lean_dec(v___x_1469_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1502_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
uint64_t v_tid_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1500_; 
v_tid_1483_ = lean_ctor_get_uint64(v_traceState_1470_, sizeof(void*)*1);
v_isSharedCheck_1500_ = !lean_is_exclusive(v_traceState_1470_);
if (v_isSharedCheck_1500_ == 0)
{
lean_object* v_unused_1501_; 
v_unused_1501_ = lean_ctor_get(v_traceState_1470_, 0);
lean_dec(v_unused_1501_);
v___x_1485_ = v_traceState_1470_;
v_isShared_1486_ = v_isSharedCheck_1500_;
goto v_resetjp_1484_;
}
else
{
lean_dec(v_traceState_1470_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1500_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1491_; 
v___x_1487_ = lean_box(0);
v___x_1488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1488_, 0, v_ref_1440_);
lean_ctor_set(v___x_1488_, 1, v_a_1465_);
v___x_1489_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1438_, v___x_1488_);
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 0, v___x_1489_);
v___x_1491_ = v___x_1485_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v___x_1489_);
lean_ctor_set_uint64(v_reuseFailAlloc_1499_, sizeof(void*)*1, v_tid_1483_);
v___x_1491_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
lean_object* v___x_1493_; 
if (v_isShared_1482_ == 0)
{
lean_ctor_set(v___x_1481_, 4, v___x_1491_);
v___x_1493_ = v___x_1481_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1498_; 
v_reuseFailAlloc_1498_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1498_, 0, v_env_1471_);
lean_ctor_set(v_reuseFailAlloc_1498_, 1, v_nextMacroScope_1472_);
lean_ctor_set(v_reuseFailAlloc_1498_, 2, v_ngen_1473_);
lean_ctor_set(v_reuseFailAlloc_1498_, 3, v_auxDeclNGen_1474_);
lean_ctor_set(v_reuseFailAlloc_1498_, 4, v___x_1491_);
lean_ctor_set(v_reuseFailAlloc_1498_, 5, v_cache_1475_);
lean_ctor_set(v_reuseFailAlloc_1498_, 6, v_recordedDeps_1476_);
lean_ctor_set(v_reuseFailAlloc_1498_, 7, v_messages_1477_);
lean_ctor_set(v_reuseFailAlloc_1498_, 8, v_infoState_1478_);
lean_ctor_set(v_reuseFailAlloc_1498_, 9, v_snapshotTasks_1479_);
v___x_1493_ = v_reuseFailAlloc_1498_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
lean_object* v___x_1494_; lean_object* v___x_1496_; 
v___x_1494_ = lean_st_ref_put(v___y_1445_, v___x_1493_);
if (v_isShared_1468_ == 0)
{
lean_ctor_set(v___x_1467_, 0, v___x_1487_);
v___x_1496_ = v___x_1467_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v___x_1487_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__8___redArg___boxed(lean_object* v_oldTraces_1504_, lean_object* v_data_1505_, lean_object* v_ref_1506_, lean_object* v_msg_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_){
_start:
{
lean_object* v_res_1513_; 
v_res_1513_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__8___redArg(v_oldTraces_1504_, v_data_1505_, v_ref_1506_, v_msg_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_);
lean_dec(v___y_1511_);
lean_dec_ref(v___y_1510_);
lean_dec(v___y_1509_);
lean_dec_ref(v___y_1508_);
return v_res_1513_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__8(lean_object* v_cls_1514_, uint8_t v_collapsed_1515_, lean_object* v_tag_1516_, lean_object* v_opts_1517_, uint8_t v_clsEnabled_1518_, lean_object* v_oldTraces_1519_, lean_object* v_msg_1520_, lean_object* v_resStartStop_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_){
_start:
{
lean_object* v_fst_1535_; lean_object* v_snd_1536_; lean_object* v___y_1538_; lean_object* v___y_1539_; lean_object* v_data_1540_; lean_object* v_fst_1551_; lean_object* v_snd_1552_; lean_object* v___x_1553_; uint8_t v___x_1554_; lean_object* v___y_1556_; lean_object* v_a_1557_; uint8_t v___y_1572_; double v___y_1604_; 
v_fst_1535_ = lean_ctor_get(v_resStartStop_1521_, 0);
lean_inc(v_fst_1535_);
v_snd_1536_ = lean_ctor_get(v_resStartStop_1521_, 1);
lean_inc(v_snd_1536_);
lean_dec_ref(v_resStartStop_1521_);
v_fst_1551_ = lean_ctor_get(v_snd_1536_, 0);
lean_inc(v_fst_1551_);
v_snd_1552_ = lean_ctor_get(v_snd_1536_, 1);
lean_inc(v_snd_1552_);
lean_dec(v_snd_1536_);
v___x_1553_ = l_Lean_trace_profiler;
v___x_1554_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_opts_1517_, v___x_1553_);
if (v___x_1554_ == 0)
{
v___y_1572_ = v___x_1554_;
goto v___jp_1571_;
}
else
{
lean_object* v___x_1609_; uint8_t v___x_1610_; 
v___x_1609_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1610_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_opts_1517_, v___x_1609_);
if (v___x_1610_ == 0)
{
lean_object* v___x_1611_; lean_object* v___x_1612_; double v___x_1613_; double v___x_1614_; double v___x_1615_; 
v___x_1611_ = l_Lean_trace_profiler_threshold;
v___x_1612_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v_opts_1517_, v___x_1611_);
v___x_1613_ = lean_float_of_nat(v___x_1612_);
v___x_1614_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3);
v___x_1615_ = lean_float_div(v___x_1613_, v___x_1614_);
v___y_1604_ = v___x_1615_;
goto v___jp_1603_;
}
else
{
lean_object* v___x_1616_; lean_object* v___x_1617_; double v___x_1618_; 
v___x_1616_ = l_Lean_trace_profiler_threshold;
v___x_1617_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v_opts_1517_, v___x_1616_);
v___x_1618_ = lean_float_of_nat(v___x_1617_);
v___y_1604_ = v___x_1618_;
goto v___jp_1603_;
}
}
v___jp_1537_:
{
lean_object* v___x_1541_; 
lean_inc(v___y_1538_);
v___x_1541_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__8___redArg(v_oldTraces_1519_, v_data_1540_, v___y_1538_, v___y_1539_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_object* v___x_1542_; 
lean_dec_ref_known(v___x_1541_, 1);
v___x_1542_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9___redArg(v_fst_1535_);
return v___x_1542_;
}
else
{
lean_object* v_a_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1550_; 
lean_dec(v_fst_1535_);
v_a_1543_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1550_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1550_ == 0)
{
v___x_1545_ = v___x_1541_;
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_a_1543_);
lean_dec(v___x_1541_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v___x_1548_; 
if (v_isShared_1546_ == 0)
{
v___x_1548_ = v___x_1545_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v_a_1543_);
v___x_1548_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
return v___x_1548_;
}
}
}
}
v___jp_1555_:
{
uint8_t v_result_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; double v___x_1561_; lean_object* v_data_1562_; 
v_result_1558_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__8_spec__19(v_fst_1535_);
v___x_1559_ = lean_box(v_result_1558_);
v___x_1560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1559_);
v___x_1561_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0);
lean_inc_ref(v_tag_1516_);
lean_inc_ref(v___x_1560_);
lean_inc(v_cls_1514_);
v_data_1562_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1562_, 0, v_cls_1514_);
lean_ctor_set(v_data_1562_, 1, v___x_1560_);
lean_ctor_set(v_data_1562_, 2, v_tag_1516_);
lean_ctor_set_float(v_data_1562_, sizeof(void*)*3, v___x_1561_);
lean_ctor_set_float(v_data_1562_, sizeof(void*)*3 + 8, v___x_1561_);
lean_ctor_set_uint8(v_data_1562_, sizeof(void*)*3 + 16, v_collapsed_1515_);
if (v___x_1554_ == 0)
{
lean_dec_ref_known(v___x_1560_, 1);
lean_dec(v_snd_1552_);
lean_dec(v_fst_1551_);
lean_dec_ref(v_tag_1516_);
lean_dec(v_cls_1514_);
v___y_1538_ = v___y_1556_;
v___y_1539_ = v_a_1557_;
v_data_1540_ = v_data_1562_;
goto v___jp_1537_;
}
else
{
lean_object* v_data_1563_; double v___x_1564_; double v___x_1565_; 
lean_dec_ref_known(v_data_1562_, 3);
v_data_1563_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1563_, 0, v_cls_1514_);
lean_ctor_set(v_data_1563_, 1, v___x_1560_);
lean_ctor_set(v_data_1563_, 2, v_tag_1516_);
v___x_1564_ = lean_unbox_float(v_fst_1551_);
lean_dec(v_fst_1551_);
lean_ctor_set_float(v_data_1563_, sizeof(void*)*3, v___x_1564_);
v___x_1565_ = lean_unbox_float(v_snd_1552_);
lean_dec(v_snd_1552_);
lean_ctor_set_float(v_data_1563_, sizeof(void*)*3 + 8, v___x_1565_);
lean_ctor_set_uint8(v_data_1563_, sizeof(void*)*3 + 16, v_collapsed_1515_);
v___y_1538_ = v___y_1556_;
v___y_1539_ = v_a_1557_;
v_data_1540_ = v_data_1563_;
goto v___jp_1537_;
}
}
v___jp_1566_:
{
lean_object* v_ref_1567_; lean_object* v___x_1568_; 
v_ref_1567_ = lean_ctor_get(v___y_1532_, 2);
lean_inc(v___y_1533_);
lean_inc_ref(v___y_1532_);
lean_inc(v___y_1531_);
lean_inc_ref(v___y_1530_);
lean_inc(v___y_1529_);
lean_inc_ref(v___y_1528_);
lean_inc(v___y_1527_);
lean_inc_ref(v___y_1526_);
lean_inc(v___y_1525_);
lean_inc(v___y_1524_);
lean_inc_ref(v___y_1523_);
lean_inc(v___y_1522_);
lean_inc(v_fst_1535_);
v___x_1568_ = lean_apply_14(v_msg_1520_, v_fst_1535_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, lean_box(0));
if (lean_obj_tag(v___x_1568_) == 0)
{
lean_object* v_a_1569_; 
v_a_1569_ = lean_ctor_get(v___x_1568_, 0);
lean_inc(v_a_1569_);
lean_dec_ref_known(v___x_1568_, 1);
v___y_1556_ = v_ref_1567_;
v_a_1557_ = v_a_1569_;
goto v___jp_1555_;
}
else
{
lean_object* v___x_1570_; 
lean_dec_ref_known(v___x_1568_, 1);
v___x_1570_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2);
v___y_1556_ = v_ref_1567_;
v_a_1557_ = v___x_1570_;
goto v___jp_1555_;
}
}
v___jp_1571_:
{
if (v_clsEnabled_1518_ == 0)
{
if (v___y_1572_ == 0)
{
lean_object* v___x_1573_; lean_object* v_traceState_1574_; lean_object* v_env_1575_; lean_object* v_nextMacroScope_1576_; lean_object* v_ngen_1577_; lean_object* v_auxDeclNGen_1578_; lean_object* v_cache_1579_; lean_object* v_recordedDeps_1580_; lean_object* v_messages_1581_; lean_object* v_infoState_1582_; lean_object* v_snapshotTasks_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1602_; 
lean_dec(v_snd_1552_);
lean_dec(v_fst_1551_);
lean_dec_ref(v_msg_1520_);
lean_dec_ref(v_tag_1516_);
lean_dec(v_cls_1514_);
v___x_1573_ = lean_st_ref_take(v___y_1533_);
v_traceState_1574_ = lean_ctor_get(v___x_1573_, 4);
v_env_1575_ = lean_ctor_get(v___x_1573_, 0);
v_nextMacroScope_1576_ = lean_ctor_get(v___x_1573_, 1);
v_ngen_1577_ = lean_ctor_get(v___x_1573_, 2);
v_auxDeclNGen_1578_ = lean_ctor_get(v___x_1573_, 3);
v_cache_1579_ = lean_ctor_get(v___x_1573_, 5);
v_recordedDeps_1580_ = lean_ctor_get(v___x_1573_, 6);
v_messages_1581_ = lean_ctor_get(v___x_1573_, 7);
v_infoState_1582_ = lean_ctor_get(v___x_1573_, 8);
v_snapshotTasks_1583_ = lean_ctor_get(v___x_1573_, 9);
v_isSharedCheck_1602_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1585_ = v___x_1573_;
v_isShared_1586_ = v_isSharedCheck_1602_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_snapshotTasks_1583_);
lean_inc(v_infoState_1582_);
lean_inc(v_messages_1581_);
lean_inc(v_recordedDeps_1580_);
lean_inc(v_cache_1579_);
lean_inc(v_traceState_1574_);
lean_inc(v_auxDeclNGen_1578_);
lean_inc(v_ngen_1577_);
lean_inc(v_nextMacroScope_1576_);
lean_inc(v_env_1575_);
lean_dec(v___x_1573_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1602_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
uint64_t v_tid_1587_; lean_object* v_traces_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1601_; 
v_tid_1587_ = lean_ctor_get_uint64(v_traceState_1574_, sizeof(void*)*1);
v_traces_1588_ = lean_ctor_get(v_traceState_1574_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v_traceState_1574_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1590_ = v_traceState_1574_;
v_isShared_1591_ = v_isSharedCheck_1601_;
goto v_resetjp_1589_;
}
else
{
lean_inc(v_traces_1588_);
lean_dec(v_traceState_1574_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1601_;
goto v_resetjp_1589_;
}
v_resetjp_1589_:
{
lean_object* v___x_1592_; lean_object* v___x_1594_; 
v___x_1592_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1519_, v_traces_1588_);
lean_dec_ref(v_traces_1588_);
if (v_isShared_1591_ == 0)
{
lean_ctor_set(v___x_1590_, 0, v___x_1592_);
v___x_1594_ = v___x_1590_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v___x_1592_);
lean_ctor_set_uint64(v_reuseFailAlloc_1600_, sizeof(void*)*1, v_tid_1587_);
v___x_1594_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
lean_object* v___x_1596_; 
if (v_isShared_1586_ == 0)
{
lean_ctor_set(v___x_1585_, 4, v___x_1594_);
v___x_1596_ = v___x_1585_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v_env_1575_);
lean_ctor_set(v_reuseFailAlloc_1599_, 1, v_nextMacroScope_1576_);
lean_ctor_set(v_reuseFailAlloc_1599_, 2, v_ngen_1577_);
lean_ctor_set(v_reuseFailAlloc_1599_, 3, v_auxDeclNGen_1578_);
lean_ctor_set(v_reuseFailAlloc_1599_, 4, v___x_1594_);
lean_ctor_set(v_reuseFailAlloc_1599_, 5, v_cache_1579_);
lean_ctor_set(v_reuseFailAlloc_1599_, 6, v_recordedDeps_1580_);
lean_ctor_set(v_reuseFailAlloc_1599_, 7, v_messages_1581_);
lean_ctor_set(v_reuseFailAlloc_1599_, 8, v_infoState_1582_);
lean_ctor_set(v_reuseFailAlloc_1599_, 9, v_snapshotTasks_1583_);
v___x_1596_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1597_ = lean_st_ref_put(v___y_1533_, v___x_1596_);
v___x_1598_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9___redArg(v_fst_1535_);
return v___x_1598_;
}
}
}
}
}
else
{
goto v___jp_1566_;
}
}
else
{
goto v___jp_1566_;
}
}
v___jp_1603_:
{
double v___x_1605_; double v___x_1606_; double v___x_1607_; uint8_t v___x_1608_; 
v___x_1605_ = lean_unbox_float(v_snd_1552_);
v___x_1606_ = lean_unbox_float(v_fst_1551_);
v___x_1607_ = lean_float_sub(v___x_1605_, v___x_1606_);
v___x_1608_ = lean_float_decLt(v___y_1604_, v___x_1607_);
v___y_1572_ = v___x_1608_;
goto v___jp_1571_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__8___boxed(lean_object** _args){
lean_object* v_cls_1619_ = _args[0];
lean_object* v_collapsed_1620_ = _args[1];
lean_object* v_tag_1621_ = _args[2];
lean_object* v_opts_1622_ = _args[3];
lean_object* v_clsEnabled_1623_ = _args[4];
lean_object* v_oldTraces_1624_ = _args[5];
lean_object* v_msg_1625_ = _args[6];
lean_object* v_resStartStop_1626_ = _args[7];
lean_object* v___y_1627_ = _args[8];
lean_object* v___y_1628_ = _args[9];
lean_object* v___y_1629_ = _args[10];
lean_object* v___y_1630_ = _args[11];
lean_object* v___y_1631_ = _args[12];
lean_object* v___y_1632_ = _args[13];
lean_object* v___y_1633_ = _args[14];
lean_object* v___y_1634_ = _args[15];
lean_object* v___y_1635_ = _args[16];
lean_object* v___y_1636_ = _args[17];
lean_object* v___y_1637_ = _args[18];
lean_object* v___y_1638_ = _args[19];
lean_object* v___y_1639_ = _args[20];
_start:
{
uint8_t v_collapsed_boxed_1640_; uint8_t v_clsEnabled_boxed_1641_; lean_object* v_res_1642_; 
v_collapsed_boxed_1640_ = lean_unbox(v_collapsed_1620_);
v_clsEnabled_boxed_1641_ = lean_unbox(v_clsEnabled_1623_);
v_res_1642_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__8(v_cls_1619_, v_collapsed_boxed_1640_, v_tag_1621_, v_opts_1622_, v_clsEnabled_boxed_1641_, v_oldTraces_1624_, v_msg_1625_, v_resStartStop_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
lean_dec(v___y_1638_);
lean_dec_ref(v___y_1637_);
lean_dec(v___y_1636_);
lean_dec_ref(v___y_1635_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
lean_dec(v___y_1632_);
lean_dec_ref(v___y_1631_);
lean_dec(v___y_1630_);
lean_dec(v___y_1629_);
lean_dec_ref(v___y_1628_);
lean_dec(v___y_1627_);
lean_dec_ref(v_opts_1622_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__5(lean_object* v___f_1643_, lean_object* v_cls_1644_, uint8_t v___x_1645_, lean_object* v___x_1646_, lean_object* v___f_1647_, lean_object* v___f_1648_, lean_object* v_opts_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_){
_start:
{
lean_object* v___y_1664_; uint8_t v___y_1665_; lean_object* v___y_1666_; lean_object* v_a_1667_; lean_object* v___y_1677_; uint8_t v___y_1678_; lean_object* v___y_1679_; lean_object* v_a_1680_; uint8_t v_hasTrace_1692_; 
v_hasTrace_1692_ = lean_ctor_get_uint8(v_opts_1649_, sizeof(void*)*1);
if (v_hasTrace_1692_ == 0)
{
lean_object* v___x_1693_; 
lean_dec_ref(v___f_1648_);
lean_dec_ref(v___f_1647_);
lean_dec_ref(v___x_1646_);
lean_dec(v_cls_1644_);
lean_inc(v___y_1661_);
lean_inc_ref(v___y_1660_);
lean_inc(v___y_1659_);
lean_inc_ref(v___y_1658_);
lean_inc(v___y_1657_);
lean_inc_ref(v___y_1656_);
lean_inc(v___y_1655_);
lean_inc_ref(v___y_1654_);
lean_inc(v___y_1653_);
lean_inc(v___y_1652_);
lean_inc_ref(v___y_1651_);
v___x_1693_ = lean_apply_12(v___f_1643_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, lean_box(0));
return v___x_1693_;
}
else
{
lean_object* v_toCold_1694_; lean_object* v_ref_1695_; uint8_t v___y_1697_; uint8_t v_a_1755_; lean_object* v_options_1759_; uint8_t v_hasTrace_1760_; 
v_toCold_1694_ = lean_ctor_get(v___y_1660_, 0);
v_ref_1695_ = lean_ctor_get(v___y_1660_, 2);
v_options_1759_ = lean_ctor_get(v_toCold_1694_, 2);
v_hasTrace_1760_ = lean_ctor_get_uint8(v_options_1759_, sizeof(void*)*1);
if (v_hasTrace_1760_ == 0)
{
v_a_1755_ = v_hasTrace_1760_;
goto v___jp_1754_;
}
else
{
lean_object* v_inheritedTraceOptions_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; uint8_t v___x_1764_; 
v_inheritedTraceOptions_1761_ = lean_ctor_get(v_toCold_1694_, 11);
v___x_1762_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__1));
lean_inc(v_cls_1644_);
v___x_1763_ = l_Lean_Name_append(v___x_1762_, v_cls_1644_);
v___x_1764_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1761_, v_options_1759_, v___x_1763_);
lean_dec(v___x_1763_);
if (v___x_1764_ == 0)
{
v_a_1755_ = v___x_1764_;
goto v___jp_1754_;
}
else
{
lean_dec_ref(v___f_1643_);
v___y_1697_ = v___x_1764_;
goto v___jp_1696_;
}
}
v___jp_1696_:
{
lean_object* v___x_1698_; lean_object* v_a_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1753_; 
v___x_1698_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___redArg(v___y_1661_);
v_a_1699_ = lean_ctor_get(v___x_1698_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1698_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1701_ = v___x_1698_;
v_isShared_1702_ = v_isSharedCheck_1753_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_a_1699_);
lean_dec(v___x_1698_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1753_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v___x_1703_; uint8_t v___x_1704_; 
v___x_1703_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1704_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_opts_1649_, v___x_1703_);
if (v___x_1704_ == 0)
{
lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___x_1705_ = lean_io_mono_nanos_now();
v___x_1706_ = l_IO_lazyPure___redArg(v___f_1648_);
if (lean_obj_tag(v___x_1706_) == 0)
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1714_; 
lean_del_object(v___x_1701_);
v_a_1707_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1714_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1714_ == 0)
{
v___x_1709_ = v___x_1706_;
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1706_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1712_; 
if (v_isShared_1710_ == 0)
{
lean_ctor_set_tag(v___x_1709_, 1);
v___x_1712_ = v___x_1709_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v_a_1707_);
v___x_1712_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
v___y_1677_ = v_a_1699_;
v___y_1678_ = v___y_1697_;
v___y_1679_ = v___x_1705_;
v_a_1680_ = v___x_1712_;
goto v___jp_1676_;
}
}
}
else
{
lean_object* v_a_1715_; lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1728_; 
v_a_1715_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1717_ = v___x_1706_;
v_isShared_1718_ = v_isSharedCheck_1728_;
goto v_resetjp_1716_;
}
else
{
lean_inc(v_a_1715_);
lean_dec(v___x_1706_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1728_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v___x_1719_; lean_object* v___x_1721_; 
v___x_1719_ = lean_io_error_to_string(v_a_1715_);
if (v_isShared_1718_ == 0)
{
lean_ctor_set_tag(v___x_1717_, 3);
lean_ctor_set(v___x_1717_, 0, v___x_1719_);
v___x_1721_ = v___x_1717_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v___x_1719_);
v___x_1721_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1725_; 
v___x_1722_ = l_Lean_MessageData_ofFormat(v___x_1721_);
lean_inc(v_ref_1695_);
v___x_1723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1723_, 0, v_ref_1695_);
lean_ctor_set(v___x_1723_, 1, v___x_1722_);
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 0, v___x_1723_);
v___x_1725_ = v___x_1701_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v___x_1723_);
v___x_1725_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
v___y_1677_ = v_a_1699_;
v___y_1678_ = v___y_1697_;
v___y_1679_ = v___x_1705_;
v_a_1680_ = v___x_1725_;
goto v___jp_1676_;
}
}
}
}
}
else
{
lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1729_ = lean_io_get_num_heartbeats();
v___x_1730_ = l_IO_lazyPure___redArg(v___f_1648_);
if (lean_obj_tag(v___x_1730_) == 0)
{
lean_object* v_a_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1738_; 
lean_del_object(v___x_1701_);
v_a_1731_ = lean_ctor_get(v___x_1730_, 0);
v_isSharedCheck_1738_ = !lean_is_exclusive(v___x_1730_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1733_ = v___x_1730_;
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_a_1731_);
lean_dec(v___x_1730_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___x_1736_; 
if (v_isShared_1734_ == 0)
{
lean_ctor_set_tag(v___x_1733_, 1);
v___x_1736_ = v___x_1733_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_a_1731_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
v___y_1664_ = v_a_1699_;
v___y_1665_ = v___y_1697_;
v___y_1666_ = v___x_1729_;
v_a_1667_ = v___x_1736_;
goto v___jp_1663_;
}
}
}
else
{
lean_object* v_a_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1752_; 
v_a_1739_ = lean_ctor_get(v___x_1730_, 0);
v_isSharedCheck_1752_ = !lean_is_exclusive(v___x_1730_);
if (v_isSharedCheck_1752_ == 0)
{
v___x_1741_ = v___x_1730_;
v_isShared_1742_ = v_isSharedCheck_1752_;
goto v_resetjp_1740_;
}
else
{
lean_inc(v_a_1739_);
lean_dec(v___x_1730_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1752_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v___x_1743_; lean_object* v___x_1745_; 
v___x_1743_ = lean_io_error_to_string(v_a_1739_);
if (v_isShared_1742_ == 0)
{
lean_ctor_set_tag(v___x_1741_, 3);
lean_ctor_set(v___x_1741_, 0, v___x_1743_);
v___x_1745_ = v___x_1741_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v___x_1743_);
v___x_1745_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1749_; 
v___x_1746_ = l_Lean_MessageData_ofFormat(v___x_1745_);
lean_inc(v_ref_1695_);
v___x_1747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1747_, 0, v_ref_1695_);
lean_ctor_set(v___x_1747_, 1, v___x_1746_);
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 0, v___x_1747_);
v___x_1749_ = v___x_1701_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v___x_1747_);
v___x_1749_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
v___y_1664_ = v_a_1699_;
v___y_1665_ = v___y_1697_;
v___y_1666_ = v___x_1729_;
v_a_1667_ = v___x_1749_;
goto v___jp_1663_;
}
}
}
}
}
}
}
v___jp_1754_:
{
lean_object* v___x_1756_; uint8_t v___x_1757_; 
v___x_1756_ = l_Lean_trace_profiler;
v___x_1757_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_opts_1649_, v___x_1756_);
if (v___x_1757_ == 0)
{
lean_object* v___x_1758_; 
lean_dec_ref(v___f_1648_);
lean_dec_ref(v___f_1647_);
lean_dec_ref(v___x_1646_);
lean_dec(v_cls_1644_);
lean_inc(v___y_1661_);
lean_inc_ref(v___y_1660_);
lean_inc(v___y_1659_);
lean_inc_ref(v___y_1658_);
lean_inc(v___y_1657_);
lean_inc_ref(v___y_1656_);
lean_inc(v___y_1655_);
lean_inc_ref(v___y_1654_);
lean_inc(v___y_1653_);
lean_inc(v___y_1652_);
lean_inc_ref(v___y_1651_);
v___x_1758_ = lean_apply_12(v___f_1643_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, lean_box(0));
return v___x_1758_;
}
else
{
lean_dec_ref(v___f_1643_);
v___y_1697_ = v_a_1755_;
goto v___jp_1696_;
}
}
}
v___jp_1663_:
{
lean_object* v___x_1668_; double v___x_1669_; double v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___x_1668_ = lean_io_get_num_heartbeats();
v___x_1669_ = lean_float_of_nat(v___y_1666_);
v___x_1670_ = lean_float_of_nat(v___x_1668_);
v___x_1671_ = lean_box_float(v___x_1669_);
v___x_1672_ = lean_box_float(v___x_1670_);
v___x_1673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1671_);
lean_ctor_set(v___x_1673_, 1, v___x_1672_);
v___x_1674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1674_, 0, v_a_1667_);
lean_ctor_set(v___x_1674_, 1, v___x_1673_);
v___x_1675_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__8(v_cls_1644_, v___x_1645_, v___x_1646_, v_opts_1649_, v___y_1665_, v___y_1664_, v___f_1647_, v___x_1674_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_);
return v___x_1675_;
}
v___jp_1676_:
{
lean_object* v___x_1681_; double v___x_1682_; double v___x_1683_; double v___x_1684_; double v___x_1685_; double v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1681_ = lean_io_mono_nanos_now();
v___x_1682_ = lean_float_of_nat(v___y_1679_);
v___x_1683_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_1684_ = lean_float_div(v___x_1682_, v___x_1683_);
v___x_1685_ = lean_float_of_nat(v___x_1681_);
v___x_1686_ = lean_float_div(v___x_1685_, v___x_1683_);
v___x_1687_ = lean_box_float(v___x_1684_);
v___x_1688_ = lean_box_float(v___x_1686_);
v___x_1689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1687_);
lean_ctor_set(v___x_1689_, 1, v___x_1688_);
v___x_1690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1690_, 0, v_a_1680_);
lean_ctor_set(v___x_1690_, 1, v___x_1689_);
v___x_1691_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__8(v_cls_1644_, v___x_1645_, v___x_1646_, v_opts_1649_, v___y_1678_, v___y_1677_, v___f_1647_, v___x_1690_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_);
return v___x_1691_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__5___boxed(lean_object** _args){
lean_object* v___f_1765_ = _args[0];
lean_object* v_cls_1766_ = _args[1];
lean_object* v___x_1767_ = _args[2];
lean_object* v___x_1768_ = _args[3];
lean_object* v___f_1769_ = _args[4];
lean_object* v___f_1770_ = _args[5];
lean_object* v_opts_1771_ = _args[6];
lean_object* v___y_1772_ = _args[7];
lean_object* v___y_1773_ = _args[8];
lean_object* v___y_1774_ = _args[9];
lean_object* v___y_1775_ = _args[10];
lean_object* v___y_1776_ = _args[11];
lean_object* v___y_1777_ = _args[12];
lean_object* v___y_1778_ = _args[13];
lean_object* v___y_1779_ = _args[14];
lean_object* v___y_1780_ = _args[15];
lean_object* v___y_1781_ = _args[16];
lean_object* v___y_1782_ = _args[17];
lean_object* v___y_1783_ = _args[18];
lean_object* v___y_1784_ = _args[19];
_start:
{
uint8_t v___x_653942__boxed_1785_; lean_object* v_res_1786_; 
v___x_653942__boxed_1785_ = lean_unbox(v___x_1767_);
v_res_1786_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__5(v___f_1765_, v_cls_1766_, v___x_653942__boxed_1785_, v___x_1768_, v___f_1769_, v___f_1770_, v_opts_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_);
lean_dec(v___y_1783_);
lean_dec_ref(v___y_1782_);
lean_dec(v___y_1781_);
lean_dec_ref(v___y_1780_);
lean_dec(v___y_1779_);
lean_dec_ref(v___y_1778_);
lean_dec(v___y_1777_);
lean_dec_ref(v___y_1776_);
lean_dec(v___y_1775_);
lean_dec(v___y_1774_);
lean_dec_ref(v___y_1773_);
lean_dec(v___y_1772_);
lean_dec_ref(v_opts_1771_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sat_AIG_CNF_0__Std_Sat_AIG_toCNF_Cache_init___at___00Std_Sat_AIG_toCNF_State_empty___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0(lean_object* v_aig_1787_){
_start:
{
lean_object* v_decls_1788_; lean_object* v___x_1789_; uint8_t v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
v_decls_1788_ = lean_ctor_get(v_aig_1787_, 0);
v___x_1789_ = lean_array_get_size(v_decls_1788_);
v___x_1790_ = 0;
v___x_1791_ = lean_box(v___x_1790_);
v___x_1792_ = lean_mk_array(v___x_1789_, v___x_1791_);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Sat_AIG_CNF_0__Std_Sat_AIG_toCNF_Cache_init___at___00Std_Sat_AIG_toCNF_State_empty___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0___boxed(lean_object* v_aig_1793_){
_start:
{
lean_object* v_res_1794_; 
v_res_1794_ = l___private_Std_Sat_AIG_CNF_0__Std_Sat_AIG_toCNF_Cache_init___at___00Std_Sat_AIG_toCNF_State_empty___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0(v_aig_1793_);
lean_dec_ref(v_aig_1793_);
return v_res_1794_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toCNF_State_empty___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0(lean_object* v_aig_1797_){
_start:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1798_ = ((lean_object*)(l_Std_Sat_AIG_toCNF_State_empty___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0___closed__0));
v___x_1799_ = l___private_Std_Sat_AIG_CNF_0__Std_Sat_AIG_toCNF_Cache_init___at___00Std_Sat_AIG_toCNF_State_empty___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0_spec__0(v_aig_1797_);
v___x_1800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1800_, 0, v___x_1798_);
lean_ctor_set(v___x_1800_, 1, v___x_1799_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toCNF_State_empty___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0___boxed(lean_object* v_aig_1801_){
_start:
{
lean_object* v_res_1802_; 
v_res_1802_ = l_Std_Sat_AIG_toCNF_State_empty___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0(v_aig_1801_);
lean_dec_ref(v_aig_1801_);
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6(lean_object* v_aig_1805_, lean_object* v___x_1806_, lean_object* v_entry_1807_, lean_object* v_ref_1808_, lean_object* v_x_1809_){
_start:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v_state_1812_; lean_object* v_cnf_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1833_; 
v___x_1810_ = lean_alloc_closure((void*)(l_Std_Tactic_BVDecide_instDecidableEqBVBit___boxed), 2, 0);
v___x_1811_ = l_Std_Sat_AIG_toCNF_State_empty___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0(v_aig_1805_);
v_state_1812_ = l_Std_Sat_AIG_toCNF_x27___redArg(v___x_1806_, v___x_1810_, v_entry_1807_, v___x_1811_);
lean_dec_ref(v___x_1810_);
v_cnf_1813_ = lean_ctor_get(v_state_1812_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v_state_1812_);
if (v_isSharedCheck_1833_ == 0)
{
lean_object* v_unused_1834_; 
v_unused_1834_ = lean_ctor_get(v_state_1812_, 1);
lean_dec(v_unused_1834_);
v___x_1815_ = v_state_1812_;
v_isShared_1816_ = v_isSharedCheck_1833_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_cnf_1813_);
lean_dec(v_state_1812_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1833_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v_gate_1817_; uint8_t v_invert_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___y_1822_; uint8_t v___y_1823_; 
v_gate_1817_ = lean_ctor_get(v_ref_1808_, 0);
lean_inc(v_gate_1817_);
v_invert_1818_ = lean_ctor_get_uint8(v_ref_1808_, sizeof(void*)*1);
lean_dec_ref(v_ref_1808_);
v___x_1819_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__0));
v___x_1820_ = l_ByteArray_empty;
if (v_invert_1818_ == 0)
{
lean_object* v___x_1829_; uint8_t v___x_1830_; 
v___x_1829_ = lean_array_push(v___x_1819_, v_gate_1817_);
v___x_1830_ = 1;
v___y_1822_ = v___x_1829_;
v___y_1823_ = v___x_1830_;
goto v___jp_1821_;
}
else
{
lean_object* v___x_1831_; uint8_t v___x_1832_; 
v___x_1831_ = lean_array_push(v___x_1819_, v_gate_1817_);
v___x_1832_ = 0;
v___y_1822_ = v___x_1831_;
v___y_1823_ = v___x_1832_;
goto v___jp_1821_;
}
v___jp_1821_:
{
lean_object* v___x_1824_; lean_object* v___x_1826_; 
v___x_1824_ = lean_byte_array_push(v___x_1820_, v___y_1823_);
if (v_isShared_1816_ == 0)
{
lean_ctor_set(v___x_1815_, 1, v___x_1824_);
lean_ctor_set(v___x_1815_, 0, v___y_1822_);
v___x_1826_ = v___x_1815_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v___y_1822_);
lean_ctor_set(v_reuseFailAlloc_1828_, 1, v___x_1824_);
v___x_1826_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
lean_object* v___x_1827_; 
v___x_1827_ = lean_array_push(v_cnf_1813_, v___x_1826_);
return v___x_1827_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___boxed(lean_object* v_aig_1835_, lean_object* v___x_1836_, lean_object* v_entry_1837_, lean_object* v_ref_1838_, lean_object* v_x_1839_){
_start:
{
lean_object* v_res_1840_; 
v_res_1840_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6(v_aig_1835_, v___x_1836_, v_entry_1837_, v_ref_1838_, v_x_1839_);
lean_dec_ref(v___x_1836_);
lean_dec_ref(v_aig_1835_);
return v_res_1840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__7(lean_object* v___f_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_){
_start:
{
lean_object* v_ref_1854_; lean_object* v___x_1855_; 
v_ref_1854_ = lean_ctor_get(v___y_1851_, 2);
v___x_1855_ = l_IO_lazyPure___redArg(v___f_1841_);
if (lean_obj_tag(v___x_1855_) == 0)
{
lean_object* v_a_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1863_; 
v_a_1856_ = lean_ctor_get(v___x_1855_, 0);
v_isSharedCheck_1863_ = !lean_is_exclusive(v___x_1855_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1858_ = v___x_1855_;
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_a_1856_);
lean_dec(v___x_1855_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v___x_1861_; 
if (v_isShared_1859_ == 0)
{
v___x_1861_ = v___x_1858_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v_a_1856_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
return v___x_1861_;
}
}
}
else
{
lean_object* v_a_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1875_; 
v_a_1864_ = lean_ctor_get(v___x_1855_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1855_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1866_ = v___x_1855_;
v_isShared_1867_ = v_isSharedCheck_1875_;
goto v_resetjp_1865_;
}
else
{
lean_inc(v_a_1864_);
lean_dec(v___x_1855_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1875_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1873_; 
v___x_1868_ = lean_io_error_to_string(v_a_1864_);
v___x_1869_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1869_, 0, v___x_1868_);
v___x_1870_ = l_Lean_MessageData_ofFormat(v___x_1869_);
lean_inc(v_ref_1854_);
v___x_1871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1871_, 0, v_ref_1854_);
lean_ctor_set(v___x_1871_, 1, v___x_1870_);
if (v_isShared_1867_ == 0)
{
lean_ctor_set(v___x_1866_, 0, v___x_1871_);
v___x_1873_ = v___x_1866_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v___x_1871_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
return v___x_1873_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__7___boxed(lean_object* v___f_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__7(v___f_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_);
lean_dec(v___y_1887_);
lean_dec_ref(v___y_1886_);
lean_dec(v___y_1885_);
lean_dec_ref(v___y_1884_);
lean_dec(v___y_1883_);
lean_dec_ref(v___y_1882_);
lean_dec(v___y_1881_);
lean_dec_ref(v___y_1880_);
lean_dec(v___y_1879_);
lean_dec(v___y_1878_);
lean_dec_ref(v___y_1877_);
return v_res_1889_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___closed__2(void){
_start:
{
lean_object* v___x_1893_; lean_object* v___x_1894_; 
v___x_1893_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___closed__1));
v___x_1894_ = l_Lean_MessageData_ofFormat(v___x_1893_);
return v___x_1894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12(lean_object* v_x_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_){
_start:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; 
v___x_1909_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___closed__2, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___closed__2);
v___x_1910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1910_, 0, v___x_1909_);
return v___x_1910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___boxed(lean_object* v_x_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_){
_start:
{
lean_object* v_res_1925_; 
v_res_1925_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12(v_x_1911_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_);
lean_dec(v___y_1923_);
lean_dec_ref(v___y_1922_);
lean_dec(v___y_1921_);
lean_dec_ref(v___y_1920_);
lean_dec(v___y_1919_);
lean_dec_ref(v___y_1918_);
lean_dec(v___y_1917_);
lean_dec_ref(v___y_1916_);
lean_dec(v___y_1915_);
lean_dec(v___y_1914_);
lean_dec_ref(v___y_1913_);
lean_dec(v___y_1912_);
lean_dec_ref(v_x_1911_);
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8(lean_object* v_aig_1926_, lean_object* v___x_1927_, lean_object* v_a_1928_, lean_object* v_ref_1929_, lean_object* v_x_1930_){
_start:
{
lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v_state_1933_; lean_object* v_cnf_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1954_; 
v___x_1931_ = lean_alloc_closure((void*)(l_Std_Tactic_BVDecide_instDecidableEqBVBit___boxed), 2, 0);
v___x_1932_ = l_Std_Sat_AIG_toCNF_State_empty___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__0(v_aig_1926_);
v_state_1933_ = l_Std_Sat_AIG_toCNF_x27___redArg(v___x_1927_, v___x_1931_, v_a_1928_, v___x_1932_);
lean_dec_ref(v___x_1931_);
v_cnf_1934_ = lean_ctor_get(v_state_1933_, 0);
v_isSharedCheck_1954_ = !lean_is_exclusive(v_state_1933_);
if (v_isSharedCheck_1954_ == 0)
{
lean_object* v_unused_1955_; 
v_unused_1955_ = lean_ctor_get(v_state_1933_, 1);
lean_dec(v_unused_1955_);
v___x_1936_ = v_state_1933_;
v_isShared_1937_ = v_isSharedCheck_1954_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_cnf_1934_);
lean_dec(v_state_1933_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1954_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v_gate_1938_; uint8_t v_invert_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___y_1943_; uint8_t v___y_1944_; 
v_gate_1938_ = lean_ctor_get(v_ref_1929_, 0);
lean_inc(v_gate_1938_);
v_invert_1939_ = lean_ctor_get_uint8(v_ref_1929_, sizeof(void*)*1);
lean_dec_ref(v_ref_1929_);
v___x_1940_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___closed__0));
v___x_1941_ = l_ByteArray_empty;
if (v_invert_1939_ == 0)
{
lean_object* v___x_1950_; uint8_t v___x_1951_; 
v___x_1950_ = lean_array_push(v___x_1940_, v_gate_1938_);
v___x_1951_ = 1;
v___y_1943_ = v___x_1950_;
v___y_1944_ = v___x_1951_;
goto v___jp_1942_;
}
else
{
lean_object* v___x_1952_; uint8_t v___x_1953_; 
v___x_1952_ = lean_array_push(v___x_1940_, v_gate_1938_);
v___x_1953_ = 0;
v___y_1943_ = v___x_1952_;
v___y_1944_ = v___x_1953_;
goto v___jp_1942_;
}
v___jp_1942_:
{
lean_object* v___x_1945_; lean_object* v___x_1947_; 
v___x_1945_ = lean_byte_array_push(v___x_1941_, v___y_1944_);
if (v_isShared_1937_ == 0)
{
lean_ctor_set(v___x_1936_, 1, v___x_1945_);
lean_ctor_set(v___x_1936_, 0, v___y_1943_);
v___x_1947_ = v___x_1936_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v___y_1943_);
lean_ctor_set(v_reuseFailAlloc_1949_, 1, v___x_1945_);
v___x_1947_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
lean_object* v___x_1948_; 
v___x_1948_ = lean_array_push(v_cnf_1934_, v___x_1947_);
return v___x_1948_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___boxed(lean_object* v_aig_1956_, lean_object* v___x_1957_, lean_object* v_a_1958_, lean_object* v_ref_1959_, lean_object* v_x_1960_){
_start:
{
lean_object* v_res_1961_; 
v_res_1961_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8(v_aig_1956_, v___x_1957_, v_a_1958_, v_ref_1959_, v_x_1960_);
lean_dec_ref(v___x_1957_);
lean_dec_ref(v_aig_1956_);
return v_res_1961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1_spec__2(lean_object* v_as_1962_, size_t v_i_1963_, size_t v_stop_1964_, lean_object* v_b_1965_){
_start:
{
lean_object* v___y_1967_; uint8_t v___x_1971_; 
v___x_1971_ = lean_usize_dec_eq(v_i_1963_, v_stop_1964_);
if (v___x_1971_ == 0)
{
lean_object* v___x_1972_; lean_object* v_snd_1973_; lean_object* v_fst_1974_; uint8_t v___x_1975_; 
v___x_1972_ = lean_array_uget_borrowed(v_as_1962_, v_i_1963_);
v_snd_1973_ = lean_ctor_get(v___x_1972_, 1);
lean_inc(v_snd_1973_);
v_fst_1974_ = lean_ctor_get(v_snd_1973_, 0);
v___x_1975_ = lean_unbox(v_fst_1974_);
if (v___x_1975_ == 0)
{
lean_object* v_fst_1976_; lean_object* v_snd_1977_; lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1985_; 
v_fst_1976_ = lean_ctor_get(v___x_1972_, 0);
v_snd_1977_ = lean_ctor_get(v_snd_1973_, 1);
v_isSharedCheck_1985_ = !lean_is_exclusive(v_snd_1973_);
if (v_isSharedCheck_1985_ == 0)
{
lean_object* v_unused_1986_; 
v_unused_1986_ = lean_ctor_get(v_snd_1973_, 0);
lean_dec(v_unused_1986_);
v___x_1979_ = v_snd_1973_;
v_isShared_1980_ = v_isSharedCheck_1985_;
goto v_resetjp_1978_;
}
else
{
lean_inc(v_snd_1977_);
lean_dec(v_snd_1973_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1985_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
lean_object* v___x_1982_; 
lean_inc(v_fst_1976_);
if (v_isShared_1980_ == 0)
{
lean_ctor_set(v___x_1979_, 0, v_fst_1976_);
v___x_1982_ = v___x_1979_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_fst_1976_);
lean_ctor_set(v_reuseFailAlloc_1984_, 1, v_snd_1977_);
v___x_1982_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
lean_object* v___x_1983_; 
v___x_1983_ = lean_array_push(v_b_1965_, v___x_1982_);
v___y_1967_ = v___x_1983_;
goto v___jp_1966_;
}
}
}
else
{
lean_dec(v_snd_1973_);
v___y_1967_ = v_b_1965_;
goto v___jp_1966_;
}
}
else
{
return v_b_1965_;
}
v___jp_1966_:
{
size_t v___x_1968_; size_t v___x_1969_; 
v___x_1968_ = ((size_t)1ULL);
v___x_1969_ = lean_usize_add(v_i_1963_, v___x_1968_);
v_i_1963_ = v___x_1969_;
v_b_1965_ = v___y_1967_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1_spec__2___boxed(lean_object* v_as_1987_, lean_object* v_i_1988_, lean_object* v_stop_1989_, lean_object* v_b_1990_){
_start:
{
size_t v_i_boxed_1991_; size_t v_stop_boxed_1992_; lean_object* v_res_1993_; 
v_i_boxed_1991_ = lean_unbox_usize(v_i_1988_);
lean_dec(v_i_1988_);
v_stop_boxed_1992_ = lean_unbox_usize(v_stop_1989_);
lean_dec(v_stop_1989_);
v_res_1993_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1_spec__2(v_as_1987_, v_i_boxed_1991_, v_stop_boxed_1992_, v_b_1990_);
lean_dec_ref(v_as_1987_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(lean_object* v_as_1996_, lean_object* v_start_1997_, lean_object* v_stop_1998_){
_start:
{
lean_object* v___x_1999_; uint8_t v___x_2000_; 
v___x_1999_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1___closed__0));
v___x_2000_ = lean_nat_dec_lt(v_start_1997_, v_stop_1998_);
if (v___x_2000_ == 0)
{
return v___x_1999_;
}
else
{
lean_object* v___x_2001_; uint8_t v___x_2002_; 
v___x_2001_ = lean_array_get_size(v_as_1996_);
v___x_2002_ = lean_nat_dec_le(v_stop_1998_, v___x_2001_);
if (v___x_2002_ == 0)
{
uint8_t v___x_2003_; 
v___x_2003_ = lean_nat_dec_lt(v_start_1997_, v___x_2001_);
if (v___x_2003_ == 0)
{
return v___x_1999_;
}
else
{
size_t v___x_2004_; size_t v___x_2005_; lean_object* v___x_2006_; 
v___x_2004_ = lean_usize_of_nat(v_start_1997_);
v___x_2005_ = lean_usize_of_nat(v___x_2001_);
v___x_2006_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1_spec__2(v_as_1996_, v___x_2004_, v___x_2005_, v___x_1999_);
return v___x_2006_;
}
}
else
{
size_t v___x_2007_; size_t v___x_2008_; lean_object* v___x_2009_; 
v___x_2007_ = lean_usize_of_nat(v_start_1997_);
v___x_2008_ = lean_usize_of_nat(v_stop_1998_);
v___x_2009_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1_spec__2(v_as_1996_, v___x_2007_, v___x_2008_, v___x_1999_);
return v___x_2009_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1___boxed(lean_object* v_as_2010_, lean_object* v_start_2011_, lean_object* v_stop_2012_){
_start:
{
lean_object* v_res_2013_; 
v_res_2013_ = l_Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(v_as_2010_, v_start_2011_, v_stop_2012_);
lean_dec(v_stop_2012_);
lean_dec(v_start_2011_);
lean_dec_ref(v_as_2010_);
return v_res_2013_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6_spec__12(lean_object* v_e_2014_){
_start:
{
if (lean_obj_tag(v_e_2014_) == 0)
{
uint8_t v___x_2015_; 
v___x_2015_ = 2;
return v___x_2015_;
}
else
{
uint8_t v___x_2016_; 
v___x_2016_ = 0;
return v___x_2016_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6_spec__12___boxed(lean_object* v_e_2017_){
_start:
{
uint8_t v_res_2018_; lean_object* v_r_2019_; 
v_res_2018_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6_spec__12(v_e_2017_);
lean_dec_ref(v_e_2017_);
v_r_2019_ = lean_box(v_res_2018_);
return v_r_2019_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(lean_object* v_cls_2020_, uint8_t v_collapsed_2021_, lean_object* v_tag_2022_, lean_object* v_opts_2023_, uint8_t v_clsEnabled_2024_, lean_object* v_oldTraces_2025_, lean_object* v_msg_2026_, lean_object* v_resStartStop_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_){
_start:
{
lean_object* v_fst_2041_; lean_object* v_snd_2042_; lean_object* v___y_2044_; lean_object* v___y_2045_; lean_object* v_data_2046_; lean_object* v_fst_2057_; lean_object* v_snd_2058_; lean_object* v___x_2059_; uint8_t v___x_2060_; lean_object* v___y_2062_; lean_object* v_a_2063_; uint8_t v___y_2078_; double v___y_2110_; 
v_fst_2041_ = lean_ctor_get(v_resStartStop_2027_, 0);
lean_inc(v_fst_2041_);
v_snd_2042_ = lean_ctor_get(v_resStartStop_2027_, 1);
lean_inc(v_snd_2042_);
lean_dec_ref(v_resStartStop_2027_);
v_fst_2057_ = lean_ctor_get(v_snd_2042_, 0);
lean_inc(v_fst_2057_);
v_snd_2058_ = lean_ctor_get(v_snd_2042_, 1);
lean_inc(v_snd_2058_);
lean_dec(v_snd_2042_);
v___x_2059_ = l_Lean_trace_profiler;
v___x_2060_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_opts_2023_, v___x_2059_);
if (v___x_2060_ == 0)
{
v___y_2078_ = v___x_2060_;
goto v___jp_2077_;
}
else
{
lean_object* v___x_2115_; uint8_t v___x_2116_; 
v___x_2115_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2116_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_opts_2023_, v___x_2115_);
if (v___x_2116_ == 0)
{
lean_object* v___x_2117_; lean_object* v___x_2118_; double v___x_2119_; double v___x_2120_; double v___x_2121_; 
v___x_2117_ = l_Lean_trace_profiler_threshold;
v___x_2118_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v_opts_2023_, v___x_2117_);
v___x_2119_ = lean_float_of_nat(v___x_2118_);
v___x_2120_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3);
v___x_2121_ = lean_float_div(v___x_2119_, v___x_2120_);
v___y_2110_ = v___x_2121_;
goto v___jp_2109_;
}
else
{
lean_object* v___x_2122_; lean_object* v___x_2123_; double v___x_2124_; 
v___x_2122_ = l_Lean_trace_profiler_threshold;
v___x_2123_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v_opts_2023_, v___x_2122_);
v___x_2124_ = lean_float_of_nat(v___x_2123_);
v___y_2110_ = v___x_2124_;
goto v___jp_2109_;
}
}
v___jp_2043_:
{
lean_object* v___x_2047_; 
lean_inc(v___y_2044_);
v___x_2047_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__8___redArg(v_oldTraces_2025_, v_data_2046_, v___y_2044_, v___y_2045_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_);
if (lean_obj_tag(v___x_2047_) == 0)
{
lean_object* v___x_2048_; 
lean_dec_ref_known(v___x_2047_, 1);
v___x_2048_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9___redArg(v_fst_2041_);
return v___x_2048_;
}
else
{
lean_object* v_a_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2056_; 
lean_dec(v_fst_2041_);
v_a_2049_ = lean_ctor_get(v___x_2047_, 0);
v_isSharedCheck_2056_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2056_ == 0)
{
v___x_2051_ = v___x_2047_;
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_a_2049_);
lean_dec(v___x_2047_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v___x_2054_; 
if (v_isShared_2052_ == 0)
{
v___x_2054_ = v___x_2051_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v_a_2049_);
v___x_2054_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
return v___x_2054_;
}
}
}
}
v___jp_2061_:
{
uint8_t v_result_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; double v___x_2067_; lean_object* v_data_2068_; 
v_result_2064_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6_spec__12(v_fst_2041_);
v___x_2065_ = lean_box(v_result_2064_);
v___x_2066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2065_);
v___x_2067_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0);
lean_inc_ref(v_tag_2022_);
lean_inc_ref(v___x_2066_);
lean_inc(v_cls_2020_);
v_data_2068_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2068_, 0, v_cls_2020_);
lean_ctor_set(v_data_2068_, 1, v___x_2066_);
lean_ctor_set(v_data_2068_, 2, v_tag_2022_);
lean_ctor_set_float(v_data_2068_, sizeof(void*)*3, v___x_2067_);
lean_ctor_set_float(v_data_2068_, sizeof(void*)*3 + 8, v___x_2067_);
lean_ctor_set_uint8(v_data_2068_, sizeof(void*)*3 + 16, v_collapsed_2021_);
if (v___x_2060_ == 0)
{
lean_dec_ref_known(v___x_2066_, 1);
lean_dec(v_snd_2058_);
lean_dec(v_fst_2057_);
lean_dec_ref(v_tag_2022_);
lean_dec(v_cls_2020_);
v___y_2044_ = v___y_2062_;
v___y_2045_ = v_a_2063_;
v_data_2046_ = v_data_2068_;
goto v___jp_2043_;
}
else
{
lean_object* v_data_2069_; double v___x_2070_; double v___x_2071_; 
lean_dec_ref_known(v_data_2068_, 3);
v_data_2069_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2069_, 0, v_cls_2020_);
lean_ctor_set(v_data_2069_, 1, v___x_2066_);
lean_ctor_set(v_data_2069_, 2, v_tag_2022_);
v___x_2070_ = lean_unbox_float(v_fst_2057_);
lean_dec(v_fst_2057_);
lean_ctor_set_float(v_data_2069_, sizeof(void*)*3, v___x_2070_);
v___x_2071_ = lean_unbox_float(v_snd_2058_);
lean_dec(v_snd_2058_);
lean_ctor_set_float(v_data_2069_, sizeof(void*)*3 + 8, v___x_2071_);
lean_ctor_set_uint8(v_data_2069_, sizeof(void*)*3 + 16, v_collapsed_2021_);
v___y_2044_ = v___y_2062_;
v___y_2045_ = v_a_2063_;
v_data_2046_ = v_data_2069_;
goto v___jp_2043_;
}
}
v___jp_2072_:
{
lean_object* v_ref_2073_; lean_object* v___x_2074_; 
v_ref_2073_ = lean_ctor_get(v___y_2038_, 2);
lean_inc(v___y_2039_);
lean_inc_ref(v___y_2038_);
lean_inc(v___y_2037_);
lean_inc_ref(v___y_2036_);
lean_inc(v___y_2035_);
lean_inc_ref(v___y_2034_);
lean_inc(v___y_2033_);
lean_inc_ref(v___y_2032_);
lean_inc(v___y_2031_);
lean_inc(v___y_2030_);
lean_inc_ref(v___y_2029_);
lean_inc(v___y_2028_);
lean_inc(v_fst_2041_);
v___x_2074_ = lean_apply_14(v_msg_2026_, v_fst_2041_, v___y_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_, lean_box(0));
if (lean_obj_tag(v___x_2074_) == 0)
{
lean_object* v_a_2075_; 
v_a_2075_ = lean_ctor_get(v___x_2074_, 0);
lean_inc(v_a_2075_);
lean_dec_ref_known(v___x_2074_, 1);
v___y_2062_ = v_ref_2073_;
v_a_2063_ = v_a_2075_;
goto v___jp_2061_;
}
else
{
lean_object* v___x_2076_; 
lean_dec_ref_known(v___x_2074_, 1);
v___x_2076_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2);
v___y_2062_ = v_ref_2073_;
v_a_2063_ = v___x_2076_;
goto v___jp_2061_;
}
}
v___jp_2077_:
{
if (v_clsEnabled_2024_ == 0)
{
if (v___y_2078_ == 0)
{
lean_object* v___x_2079_; lean_object* v_traceState_2080_; lean_object* v_env_2081_; lean_object* v_nextMacroScope_2082_; lean_object* v_ngen_2083_; lean_object* v_auxDeclNGen_2084_; lean_object* v_cache_2085_; lean_object* v_recordedDeps_2086_; lean_object* v_messages_2087_; lean_object* v_infoState_2088_; lean_object* v_snapshotTasks_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2108_; 
lean_dec(v_snd_2058_);
lean_dec(v_fst_2057_);
lean_dec_ref(v_msg_2026_);
lean_dec_ref(v_tag_2022_);
lean_dec(v_cls_2020_);
v___x_2079_ = lean_st_ref_take(v___y_2039_);
v_traceState_2080_ = lean_ctor_get(v___x_2079_, 4);
v_env_2081_ = lean_ctor_get(v___x_2079_, 0);
v_nextMacroScope_2082_ = lean_ctor_get(v___x_2079_, 1);
v_ngen_2083_ = lean_ctor_get(v___x_2079_, 2);
v_auxDeclNGen_2084_ = lean_ctor_get(v___x_2079_, 3);
v_cache_2085_ = lean_ctor_get(v___x_2079_, 5);
v_recordedDeps_2086_ = lean_ctor_get(v___x_2079_, 6);
v_messages_2087_ = lean_ctor_get(v___x_2079_, 7);
v_infoState_2088_ = lean_ctor_get(v___x_2079_, 8);
v_snapshotTasks_2089_ = lean_ctor_get(v___x_2079_, 9);
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_2079_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2091_ = v___x_2079_;
v_isShared_2092_ = v_isSharedCheck_2108_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_snapshotTasks_2089_);
lean_inc(v_infoState_2088_);
lean_inc(v_messages_2087_);
lean_inc(v_recordedDeps_2086_);
lean_inc(v_cache_2085_);
lean_inc(v_traceState_2080_);
lean_inc(v_auxDeclNGen_2084_);
lean_inc(v_ngen_2083_);
lean_inc(v_nextMacroScope_2082_);
lean_inc(v_env_2081_);
lean_dec(v___x_2079_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2108_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
uint64_t v_tid_2093_; lean_object* v_traces_2094_; lean_object* v___x_2096_; uint8_t v_isShared_2097_; uint8_t v_isSharedCheck_2107_; 
v_tid_2093_ = lean_ctor_get_uint64(v_traceState_2080_, sizeof(void*)*1);
v_traces_2094_ = lean_ctor_get(v_traceState_2080_, 0);
v_isSharedCheck_2107_ = !lean_is_exclusive(v_traceState_2080_);
if (v_isSharedCheck_2107_ == 0)
{
v___x_2096_ = v_traceState_2080_;
v_isShared_2097_ = v_isSharedCheck_2107_;
goto v_resetjp_2095_;
}
else
{
lean_inc(v_traces_2094_);
lean_dec(v_traceState_2080_);
v___x_2096_ = lean_box(0);
v_isShared_2097_ = v_isSharedCheck_2107_;
goto v_resetjp_2095_;
}
v_resetjp_2095_:
{
lean_object* v___x_2098_; lean_object* v___x_2100_; 
v___x_2098_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2025_, v_traces_2094_);
lean_dec_ref(v_traces_2094_);
if (v_isShared_2097_ == 0)
{
lean_ctor_set(v___x_2096_, 0, v___x_2098_);
v___x_2100_ = v___x_2096_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v___x_2098_);
lean_ctor_set_uint64(v_reuseFailAlloc_2106_, sizeof(void*)*1, v_tid_2093_);
v___x_2100_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
lean_object* v___x_2102_; 
if (v_isShared_2092_ == 0)
{
lean_ctor_set(v___x_2091_, 4, v___x_2100_);
v___x_2102_ = v___x_2091_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v_env_2081_);
lean_ctor_set(v_reuseFailAlloc_2105_, 1, v_nextMacroScope_2082_);
lean_ctor_set(v_reuseFailAlloc_2105_, 2, v_ngen_2083_);
lean_ctor_set(v_reuseFailAlloc_2105_, 3, v_auxDeclNGen_2084_);
lean_ctor_set(v_reuseFailAlloc_2105_, 4, v___x_2100_);
lean_ctor_set(v_reuseFailAlloc_2105_, 5, v_cache_2085_);
lean_ctor_set(v_reuseFailAlloc_2105_, 6, v_recordedDeps_2086_);
lean_ctor_set(v_reuseFailAlloc_2105_, 7, v_messages_2087_);
lean_ctor_set(v_reuseFailAlloc_2105_, 8, v_infoState_2088_);
lean_ctor_set(v_reuseFailAlloc_2105_, 9, v_snapshotTasks_2089_);
v___x_2102_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; 
v___x_2103_ = lean_st_ref_put(v___y_2039_, v___x_2102_);
v___x_2104_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9___redArg(v_fst_2041_);
return v___x_2104_;
}
}
}
}
}
else
{
goto v___jp_2072_;
}
}
else
{
goto v___jp_2072_;
}
}
v___jp_2109_:
{
double v___x_2111_; double v___x_2112_; double v___x_2113_; uint8_t v___x_2114_; 
v___x_2111_ = lean_unbox_float(v_snd_2058_);
v___x_2112_ = lean_unbox_float(v_fst_2057_);
v___x_2113_ = lean_float_sub(v___x_2111_, v___x_2112_);
v___x_2114_ = lean_float_decLt(v___y_2110_, v___x_2113_);
v___y_2078_ = v___x_2114_;
goto v___jp_2077_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6___boxed(lean_object** _args){
lean_object* v_cls_2125_ = _args[0];
lean_object* v_collapsed_2126_ = _args[1];
lean_object* v_tag_2127_ = _args[2];
lean_object* v_opts_2128_ = _args[3];
lean_object* v_clsEnabled_2129_ = _args[4];
lean_object* v_oldTraces_2130_ = _args[5];
lean_object* v_msg_2131_ = _args[6];
lean_object* v_resStartStop_2132_ = _args[7];
lean_object* v___y_2133_ = _args[8];
lean_object* v___y_2134_ = _args[9];
lean_object* v___y_2135_ = _args[10];
lean_object* v___y_2136_ = _args[11];
lean_object* v___y_2137_ = _args[12];
lean_object* v___y_2138_ = _args[13];
lean_object* v___y_2139_ = _args[14];
lean_object* v___y_2140_ = _args[15];
lean_object* v___y_2141_ = _args[16];
lean_object* v___y_2142_ = _args[17];
lean_object* v___y_2143_ = _args[18];
lean_object* v___y_2144_ = _args[19];
lean_object* v___y_2145_ = _args[20];
_start:
{
uint8_t v_collapsed_boxed_2146_; uint8_t v_clsEnabled_boxed_2147_; lean_object* v_res_2148_; 
v_collapsed_boxed_2146_ = lean_unbox(v_collapsed_2126_);
v_clsEnabled_boxed_2147_ = lean_unbox(v_clsEnabled_2129_);
v_res_2148_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v_cls_2125_, v_collapsed_boxed_2146_, v_tag_2127_, v_opts_2128_, v_clsEnabled_boxed_2147_, v_oldTraces_2130_, v_msg_2131_, v_resStartStop_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_, v___y_2139_, v___y_2140_, v___y_2141_, v___y_2142_, v___y_2143_, v___y_2144_);
lean_dec(v___y_2144_);
lean_dec_ref(v___y_2143_);
lean_dec(v___y_2142_);
lean_dec_ref(v___y_2141_);
lean_dec(v___y_2140_);
lean_dec_ref(v___y_2139_);
lean_dec(v___y_2138_);
lean_dec_ref(v___y_2137_);
lean_dec(v___y_2136_);
lean_dec(v___y_2135_);
lean_dec_ref(v___y_2134_);
lean_dec(v___y_2133_);
lean_dec_ref(v_opts_2128_);
return v_res_2148_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26_spec__30_spec__31___redArg(lean_object* v_x_2149_, lean_object* v_x_2150_){
_start:
{
if (lean_obj_tag(v_x_2150_) == 0)
{
return v_x_2149_;
}
else
{
lean_object* v_key_2151_; lean_object* v_value_2152_; lean_object* v_tail_2153_; lean_object* v___x_2155_; uint8_t v_isShared_2156_; uint8_t v_isSharedCheck_2176_; 
v_key_2151_ = lean_ctor_get(v_x_2150_, 0);
v_value_2152_ = lean_ctor_get(v_x_2150_, 1);
v_tail_2153_ = lean_ctor_get(v_x_2150_, 2);
v_isSharedCheck_2176_ = !lean_is_exclusive(v_x_2150_);
if (v_isSharedCheck_2176_ == 0)
{
v___x_2155_ = v_x_2150_;
v_isShared_2156_ = v_isSharedCheck_2176_;
goto v_resetjp_2154_;
}
else
{
lean_inc(v_tail_2153_);
lean_inc(v_value_2152_);
lean_inc(v_key_2151_);
lean_dec(v_x_2150_);
v___x_2155_ = lean_box(0);
v_isShared_2156_ = v_isSharedCheck_2176_;
goto v_resetjp_2154_;
}
v_resetjp_2154_:
{
lean_object* v___x_2157_; uint64_t v___x_2158_; uint64_t v___x_2159_; uint64_t v___x_2160_; uint64_t v_fold_2161_; uint64_t v___x_2162_; uint64_t v___x_2163_; uint64_t v___x_2164_; size_t v___x_2165_; size_t v___x_2166_; size_t v___x_2167_; size_t v___x_2168_; size_t v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2172_; 
v___x_2157_ = lean_array_get_size(v_x_2149_);
v___x_2158_ = lean_uint64_of_nat(v_key_2151_);
v___x_2159_ = 32ULL;
v___x_2160_ = lean_uint64_shift_right(v___x_2158_, v___x_2159_);
v_fold_2161_ = lean_uint64_xor(v___x_2158_, v___x_2160_);
v___x_2162_ = 16ULL;
v___x_2163_ = lean_uint64_shift_right(v_fold_2161_, v___x_2162_);
v___x_2164_ = lean_uint64_xor(v_fold_2161_, v___x_2163_);
v___x_2165_ = lean_uint64_to_usize(v___x_2164_);
v___x_2166_ = lean_usize_of_nat(v___x_2157_);
v___x_2167_ = ((size_t)1ULL);
v___x_2168_ = lean_usize_sub(v___x_2166_, v___x_2167_);
v___x_2169_ = lean_usize_land(v___x_2165_, v___x_2168_);
v___x_2170_ = lean_array_uget_borrowed(v_x_2149_, v___x_2169_);
lean_inc(v___x_2170_);
if (v_isShared_2156_ == 0)
{
lean_ctor_set(v___x_2155_, 2, v___x_2170_);
v___x_2172_ = v___x_2155_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v_key_2151_);
lean_ctor_set(v_reuseFailAlloc_2175_, 1, v_value_2152_);
lean_ctor_set(v_reuseFailAlloc_2175_, 2, v___x_2170_);
v___x_2172_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
lean_object* v___x_2173_; 
v___x_2173_ = lean_array_uset(v_x_2149_, v___x_2169_, v___x_2172_);
v_x_2149_ = v___x_2173_;
v_x_2150_ = v_tail_2153_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26_spec__30___redArg(lean_object* v_i_2177_, lean_object* v_source_2178_, lean_object* v_target_2179_){
_start:
{
lean_object* v___x_2180_; uint8_t v___x_2181_; 
v___x_2180_ = lean_array_get_size(v_source_2178_);
v___x_2181_ = lean_nat_dec_lt(v_i_2177_, v___x_2180_);
if (v___x_2181_ == 0)
{
lean_dec_ref(v_source_2178_);
lean_dec(v_i_2177_);
return v_target_2179_;
}
else
{
lean_object* v_es_2182_; lean_object* v___x_2183_; lean_object* v_source_2184_; lean_object* v_target_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; 
v_es_2182_ = lean_array_fget(v_source_2178_, v_i_2177_);
v___x_2183_ = lean_box(0);
v_source_2184_ = lean_array_fset(v_source_2178_, v_i_2177_, v___x_2183_);
v_target_2185_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26_spec__30_spec__31___redArg(v_target_2179_, v_es_2182_);
v___x_2186_ = lean_unsigned_to_nat(1u);
v___x_2187_ = lean_nat_add(v_i_2177_, v___x_2186_);
lean_dec(v_i_2177_);
v_i_2177_ = v___x_2187_;
v_source_2178_ = v_source_2184_;
v_target_2179_ = v_target_2185_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26___redArg(lean_object* v___x_2189_, lean_object* v_data_2190_){
_start:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v_nbuckets_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; 
v___x_2191_ = lean_array_get_size(v_data_2190_);
v___x_2192_ = lean_unsigned_to_nat(2u);
v_nbuckets_2193_ = lean_nat_mul(v___x_2191_, v___x_2192_);
v___x_2194_ = lean_unsigned_to_nat(0u);
v___x_2195_ = lean_box(0);
v___x_2196_ = lean_mk_array(v_nbuckets_2193_, v___x_2195_);
v___x_2197_ = lean_array_propagate_mark(v_data_2190_, v___x_2196_);
v___x_2198_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26_spec__30___redArg(v___x_2194_, v_data_2190_, v___x_2197_);
return v___x_2198_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26___redArg___boxed(lean_object* v___x_2199_, lean_object* v_data_2200_){
_start:
{
lean_object* v_res_2201_; 
v_res_2201_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26___redArg(v___x_2199_, v_data_2200_);
lean_dec(v___x_2199_);
return v_res_2201_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17_spec__24___redArg(lean_object* v_a_2202_, lean_object* v_x_2203_){
_start:
{
if (lean_obj_tag(v_x_2203_) == 0)
{
uint8_t v___x_2204_; 
v___x_2204_ = 0;
return v___x_2204_;
}
else
{
lean_object* v_key_2205_; lean_object* v_tail_2206_; uint8_t v___x_2207_; 
v_key_2205_ = lean_ctor_get(v_x_2203_, 0);
v_tail_2206_ = lean_ctor_get(v_x_2203_, 2);
v___x_2207_ = lean_nat_dec_eq(v_key_2205_, v_a_2202_);
if (v___x_2207_ == 0)
{
v_x_2203_ = v_tail_2206_;
goto _start;
}
else
{
return v___x_2207_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17_spec__24___redArg___boxed(lean_object* v_a_2209_, lean_object* v_x_2210_){
_start:
{
uint8_t v_res_2211_; lean_object* v_r_2212_; 
v_res_2211_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17_spec__24___redArg(v_a_2209_, v_x_2210_);
lean_dec(v_x_2210_);
lean_dec(v_a_2209_);
v_r_2212_ = lean_box(v_res_2211_);
return v_r_2212_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18___redArg(lean_object* v___x_2213_, lean_object* v_m_2214_, lean_object* v_a_2215_, lean_object* v_b_2216_){
_start:
{
lean_object* v_size_2217_; lean_object* v_buckets_2218_; lean_object* v___x_2219_; uint64_t v___x_2220_; uint64_t v___x_2221_; uint64_t v___x_2222_; uint64_t v_fold_2223_; uint64_t v___x_2224_; uint64_t v___x_2225_; uint64_t v___x_2226_; size_t v___x_2227_; size_t v___x_2228_; size_t v___x_2229_; size_t v___x_2230_; size_t v___x_2231_; lean_object* v_bkt_2232_; uint8_t v___x_2233_; 
v_size_2217_ = lean_ctor_get(v_m_2214_, 0);
v_buckets_2218_ = lean_ctor_get(v_m_2214_, 1);
v___x_2219_ = lean_array_get_size(v_buckets_2218_);
v___x_2220_ = lean_uint64_of_nat(v_a_2215_);
v___x_2221_ = 32ULL;
v___x_2222_ = lean_uint64_shift_right(v___x_2220_, v___x_2221_);
v_fold_2223_ = lean_uint64_xor(v___x_2220_, v___x_2222_);
v___x_2224_ = 16ULL;
v___x_2225_ = lean_uint64_shift_right(v_fold_2223_, v___x_2224_);
v___x_2226_ = lean_uint64_xor(v_fold_2223_, v___x_2225_);
v___x_2227_ = lean_uint64_to_usize(v___x_2226_);
v___x_2228_ = lean_usize_of_nat(v___x_2219_);
v___x_2229_ = ((size_t)1ULL);
v___x_2230_ = lean_usize_sub(v___x_2228_, v___x_2229_);
v___x_2231_ = lean_usize_land(v___x_2227_, v___x_2230_);
v_bkt_2232_ = lean_array_uget_borrowed(v_buckets_2218_, v___x_2231_);
v___x_2233_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17_spec__24___redArg(v_a_2215_, v_bkt_2232_);
if (v___x_2233_ == 0)
{
lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2254_; 
lean_inc_ref(v_buckets_2218_);
lean_inc(v_size_2217_);
v_isSharedCheck_2254_ = !lean_is_exclusive(v_m_2214_);
if (v_isSharedCheck_2254_ == 0)
{
lean_object* v_unused_2255_; lean_object* v_unused_2256_; 
v_unused_2255_ = lean_ctor_get(v_m_2214_, 1);
lean_dec(v_unused_2255_);
v_unused_2256_ = lean_ctor_get(v_m_2214_, 0);
lean_dec(v_unused_2256_);
v___x_2235_ = v_m_2214_;
v_isShared_2236_ = v_isSharedCheck_2254_;
goto v_resetjp_2234_;
}
else
{
lean_dec(v_m_2214_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2254_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
lean_object* v___x_2237_; lean_object* v_size_x27_2238_; lean_object* v___x_2239_; lean_object* v_buckets_x27_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; uint8_t v___x_2246_; 
v___x_2237_ = lean_unsigned_to_nat(1u);
v_size_x27_2238_ = lean_nat_add(v_size_2217_, v___x_2237_);
lean_dec(v_size_2217_);
lean_inc(v_bkt_2232_);
v___x_2239_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2239_, 0, v_a_2215_);
lean_ctor_set(v___x_2239_, 1, v_b_2216_);
lean_ctor_set(v___x_2239_, 2, v_bkt_2232_);
v_buckets_x27_2240_ = lean_array_uset(v_buckets_2218_, v___x_2231_, v___x_2239_);
v___x_2241_ = lean_unsigned_to_nat(4u);
v___x_2242_ = lean_nat_mul(v_size_x27_2238_, v___x_2241_);
v___x_2243_ = lean_unsigned_to_nat(3u);
v___x_2244_ = lean_nat_div(v___x_2242_, v___x_2243_);
lean_dec(v___x_2242_);
v___x_2245_ = lean_array_get_size(v_buckets_x27_2240_);
v___x_2246_ = lean_nat_dec_le(v___x_2244_, v___x_2245_);
lean_dec(v___x_2244_);
if (v___x_2246_ == 0)
{
lean_object* v_val_2247_; lean_object* v___x_2249_; 
v_val_2247_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26___redArg(v___x_2213_, v_buckets_x27_2240_);
if (v_isShared_2236_ == 0)
{
lean_ctor_set(v___x_2235_, 1, v_val_2247_);
lean_ctor_set(v___x_2235_, 0, v_size_x27_2238_);
v___x_2249_ = v___x_2235_;
goto v_reusejp_2248_;
}
else
{
lean_object* v_reuseFailAlloc_2250_; 
v_reuseFailAlloc_2250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2250_, 0, v_size_x27_2238_);
lean_ctor_set(v_reuseFailAlloc_2250_, 1, v_val_2247_);
v___x_2249_ = v_reuseFailAlloc_2250_;
goto v_reusejp_2248_;
}
v_reusejp_2248_:
{
return v___x_2249_;
}
}
else
{
lean_object* v___x_2252_; 
if (v_isShared_2236_ == 0)
{
lean_ctor_set(v___x_2235_, 1, v_buckets_x27_2240_);
lean_ctor_set(v___x_2235_, 0, v_size_x27_2238_);
v___x_2252_ = v___x_2235_;
goto v_reusejp_2251_;
}
else
{
lean_object* v_reuseFailAlloc_2253_; 
v_reuseFailAlloc_2253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2253_, 0, v_size_x27_2238_);
lean_ctor_set(v_reuseFailAlloc_2253_, 1, v_buckets_x27_2240_);
v___x_2252_ = v_reuseFailAlloc_2253_;
goto v_reusejp_2251_;
}
v_reusejp_2251_:
{
return v___x_2252_;
}
}
}
}
else
{
lean_dec(v_b_2216_);
lean_dec(v_a_2215_);
return v_m_2214_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18___redArg___boxed(lean_object* v___x_2257_, lean_object* v_m_2258_, lean_object* v_a_2259_, lean_object* v_b_2260_){
_start:
{
lean_object* v_res_2261_; 
v_res_2261_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18___redArg(v___x_2257_, v_m_2258_, v_a_2259_, v_b_2260_);
lean_dec(v___x_2257_);
return v_res_2261_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17___redArg(lean_object* v___x_2262_, lean_object* v_m_2263_, lean_object* v_a_2264_){
_start:
{
lean_object* v_buckets_2265_; lean_object* v___x_2266_; uint64_t v___x_2267_; uint64_t v___x_2268_; uint64_t v___x_2269_; uint64_t v_fold_2270_; uint64_t v___x_2271_; uint64_t v___x_2272_; uint64_t v___x_2273_; size_t v___x_2274_; size_t v___x_2275_; size_t v___x_2276_; size_t v___x_2277_; size_t v___x_2278_; lean_object* v___x_2279_; uint8_t v___x_2280_; 
v_buckets_2265_ = lean_ctor_get(v_m_2263_, 1);
v___x_2266_ = lean_array_get_size(v_buckets_2265_);
v___x_2267_ = lean_uint64_of_nat(v_a_2264_);
v___x_2268_ = 32ULL;
v___x_2269_ = lean_uint64_shift_right(v___x_2267_, v___x_2268_);
v_fold_2270_ = lean_uint64_xor(v___x_2267_, v___x_2269_);
v___x_2271_ = 16ULL;
v___x_2272_ = lean_uint64_shift_right(v_fold_2270_, v___x_2271_);
v___x_2273_ = lean_uint64_xor(v_fold_2270_, v___x_2272_);
v___x_2274_ = lean_uint64_to_usize(v___x_2273_);
v___x_2275_ = lean_usize_of_nat(v___x_2266_);
v___x_2276_ = ((size_t)1ULL);
v___x_2277_ = lean_usize_sub(v___x_2275_, v___x_2276_);
v___x_2278_ = lean_usize_land(v___x_2274_, v___x_2277_);
v___x_2279_ = lean_array_uget_borrowed(v_buckets_2265_, v___x_2278_);
v___x_2280_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17_spec__24___redArg(v_a_2264_, v___x_2279_);
return v___x_2280_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17___redArg___boxed(lean_object* v___x_2281_, lean_object* v_m_2282_, lean_object* v_a_2283_){
_start:
{
uint8_t v_res_2284_; lean_object* v_r_2285_; 
v_res_2284_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17___redArg(v___x_2281_, v_m_2282_, v_a_2283_);
lean_dec(v_a_2283_);
lean_dec_ref(v_m_2282_);
lean_dec(v___x_2281_);
v_r_2285_ = lean_box(v_res_2284_);
return v_r_2285_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg(lean_object* v_acc_2289_, lean_object* v_decls_2290_, lean_object* v_idx_2291_, lean_object* v_a_2292_){
_start:
{
lean_object* v___x_2293_; uint8_t v___x_2294_; 
v___x_2293_ = lean_array_get_size(v_decls_2290_);
v___x_2294_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17___redArg(v___x_2293_, v_a_2292_, v_idx_2291_);
if (v___x_2294_ == 0)
{
lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2295_ = lean_box(0);
lean_inc(v_idx_2291_);
v___x_2296_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18___redArg(v___x_2293_, v_a_2292_, v_idx_2291_, v___x_2295_);
v___x_2297_ = lean_array_fget_borrowed(v_decls_2290_, v_idx_2291_);
if (lean_obj_tag(v___x_2297_) == 2)
{
lean_object* v_l_2298_; lean_object* v_r_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; uint8_t v___y_2303_; lean_object* v___y_2304_; uint8_t v___y_2305_; uint8_t v___y_2329_; lean_object* v___x_2335_; lean_object* v___x_2336_; uint8_t v___x_2337_; 
v_l_2298_ = lean_ctor_get(v___x_2297_, 0);
v_r_2299_ = lean_ctor_get(v___x_2297_, 1);
v___x_2300_ = lean_unsigned_to_nat(1u);
v___x_2301_ = lean_nat_shiftr(v_l_2298_, v___x_2300_);
v___x_2335_ = lean_nat_land(v___x_2300_, v_l_2298_);
v___x_2336_ = lean_unsigned_to_nat(0u);
v___x_2337_ = lean_nat_dec_eq(v___x_2335_, v___x_2336_);
lean_dec(v___x_2335_);
if (v___x_2337_ == 0)
{
uint8_t v___x_2338_; 
v___x_2338_ = 1;
v___y_2329_ = v___x_2338_;
goto v___jp_2328_;
}
else
{
v___y_2329_ = v___x_2294_;
goto v___jp_2328_;
}
v___jp_2302_:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v_fst_2325_; lean_object* v_snd_2326_; 
v___x_2306_ = l_Nat_reprFast(v_idx_2291_);
v___x_2307_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg___closed__0));
lean_inc_ref(v___x_2306_);
v___x_2308_ = lean_string_append(v___x_2306_, v___x_2307_);
lean_inc(v___x_2301_);
v___x_2309_ = l_Nat_reprFast(v___x_2301_);
v___x_2310_ = lean_string_append(v___x_2308_, v___x_2309_);
lean_dec_ref(v___x_2309_);
v___x_2311_ = l_Std_Sat_AIG_toGraphviz_invEdgeStyle(v___y_2303_);
v___x_2312_ = lean_string_append(v___x_2310_, v___x_2311_);
lean_dec_ref(v___x_2311_);
v___x_2313_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg___closed__1));
v___x_2314_ = lean_string_append(v___x_2312_, v___x_2313_);
v___x_2315_ = lean_string_append(v___x_2314_, v___x_2306_);
lean_dec_ref(v___x_2306_);
v___x_2316_ = lean_string_append(v___x_2315_, v___x_2307_);
lean_inc(v___y_2304_);
v___x_2317_ = l_Nat_reprFast(v___y_2304_);
v___x_2318_ = lean_string_append(v___x_2316_, v___x_2317_);
lean_dec_ref(v___x_2317_);
v___x_2319_ = l_Std_Sat_AIG_toGraphviz_invEdgeStyle(v___y_2305_);
v___x_2320_ = lean_string_append(v___x_2318_, v___x_2319_);
lean_dec_ref(v___x_2319_);
v___x_2321_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg___closed__2));
v___x_2322_ = lean_string_append(v___x_2320_, v___x_2321_);
v___x_2323_ = lean_string_append(v_acc_2289_, v___x_2322_);
lean_dec_ref(v___x_2322_);
v___x_2324_ = l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg(v___x_2323_, v_decls_2290_, v___x_2301_, v___x_2296_);
v_fst_2325_ = lean_ctor_get(v___x_2324_, 0);
lean_inc(v_fst_2325_);
v_snd_2326_ = lean_ctor_get(v___x_2324_, 1);
lean_inc(v_snd_2326_);
lean_dec_ref(v___x_2324_);
v_acc_2289_ = v_fst_2325_;
v_idx_2291_ = v___y_2304_;
v_a_2292_ = v_snd_2326_;
goto _start;
}
v___jp_2328_:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; uint8_t v___x_2333_; 
v___x_2330_ = lean_nat_shiftr(v_r_2299_, v___x_2300_);
v___x_2331_ = lean_nat_land(v___x_2300_, v_r_2299_);
v___x_2332_ = lean_unsigned_to_nat(0u);
v___x_2333_ = lean_nat_dec_eq(v___x_2331_, v___x_2332_);
lean_dec(v___x_2331_);
if (v___x_2333_ == 0)
{
uint8_t v___x_2334_; 
v___x_2334_ = 1;
v___y_2303_ = v___y_2329_;
v___y_2304_ = v___x_2330_;
v___y_2305_ = v___x_2334_;
goto v___jp_2302_;
}
else
{
v___y_2303_ = v___y_2329_;
v___y_2304_ = v___x_2330_;
v___y_2305_ = v___x_2294_;
goto v___jp_2302_;
}
}
}
else
{
lean_object* v___x_2339_; 
lean_dec(v_idx_2291_);
v___x_2339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2339_, 0, v_acc_2289_);
lean_ctor_set(v___x_2339_, 1, v___x_2296_);
return v___x_2339_;
}
}
else
{
lean_object* v___x_2340_; 
lean_dec(v_idx_2291_);
v___x_2340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2340_, 0, v_acc_2289_);
lean_ctor_set(v___x_2340_, 1, v_a_2292_);
return v___x_2340_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg___boxed(lean_object* v_acc_2341_, lean_object* v_decls_2342_, lean_object* v_idx_2343_, lean_object* v_a_2344_){
_start:
{
lean_object* v_res_2345_; 
v_res_2345_ = l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg(v_acc_2341_, v_decls_2342_, v_idx_2343_, v_a_2344_);
lean_dec_ref(v_decls_2342_);
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14(lean_object* v_decls_2354_, lean_object* v_idx_2355_){
_start:
{
lean_object* v___x_2356_; 
v___x_2356_ = lean_array_fget_borrowed(v_decls_2354_, v_idx_2355_);
switch(lean_obj_tag(v___x_2356_))
{
case 0:
{
lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; 
v___x_2357_ = l_Nat_reprFast(v_idx_2355_);
v___x_2358_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__0));
v___x_2359_ = lean_string_append(v___x_2357_, v___x_2358_);
v___x_2360_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__1));
v___x_2361_ = lean_string_append(v___x_2359_, v___x_2360_);
v___x_2362_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__2));
v___x_2363_ = lean_string_append(v___x_2361_, v___x_2362_);
return v___x_2363_;
}
case 1:
{
lean_object* v_idx_2364_; lean_object* v_var_2365_; lean_object* v_idx_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; 
v_idx_2364_ = lean_ctor_get(v___x_2356_, 0);
v_var_2365_ = lean_ctor_get(v_idx_2364_, 0);
v_idx_2366_ = lean_ctor_get(v_idx_2364_, 2);
v___x_2367_ = l_Nat_reprFast(v_idx_2355_);
v___x_2368_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__0));
v___x_2369_ = lean_string_append(v___x_2367_, v___x_2368_);
v___x_2370_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__3));
lean_inc(v_var_2365_);
v___x_2371_ = l_Nat_reprFast(v_var_2365_);
v___x_2372_ = lean_string_append(v___x_2370_, v___x_2371_);
lean_dec_ref(v___x_2371_);
v___x_2373_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__4));
v___x_2374_ = lean_string_append(v___x_2372_, v___x_2373_);
lean_inc(v_idx_2366_);
v___x_2375_ = l_Nat_reprFast(v_idx_2366_);
v___x_2376_ = lean_string_append(v___x_2374_, v___x_2375_);
lean_dec_ref(v___x_2375_);
v___x_2377_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__5));
v___x_2378_ = lean_string_append(v___x_2376_, v___x_2377_);
v___x_2379_ = lean_string_append(v___x_2369_, v___x_2378_);
lean_dec_ref(v___x_2378_);
v___x_2380_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__6));
v___x_2381_ = lean_string_append(v___x_2379_, v___x_2380_);
return v___x_2381_;
}
default: 
{
lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; 
v___x_2382_ = l_Nat_reprFast(v_idx_2355_);
v___x_2383_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__0));
lean_inc_ref(v___x_2382_);
v___x_2384_ = lean_string_append(v___x_2382_, v___x_2383_);
v___x_2385_ = lean_string_append(v___x_2384_, v___x_2382_);
lean_dec_ref(v___x_2382_);
v___x_2386_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___closed__7));
v___x_2387_ = lean_string_append(v___x_2385_, v___x_2386_);
return v___x_2387_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14___boxed(lean_object* v_decls_2388_, lean_object* v_idx_2389_){
_start:
{
lean_object* v_res_2390_; 
v_res_2390_ = l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14(v_decls_2388_, v_idx_2389_);
lean_dec_ref(v_decls_2388_);
return v_res_2390_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__16(lean_object* v_decls_2391_, lean_object* v_x_2392_, lean_object* v_x_2393_){
_start:
{
if (lean_obj_tag(v_x_2393_) == 0)
{
return v_x_2392_;
}
else
{
lean_object* v_key_2394_; lean_object* v_tail_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v_key_2394_ = lean_ctor_get(v_x_2393_, 0);
lean_inc(v_key_2394_);
v_tail_2395_ = lean_ctor_get(v_x_2393_, 2);
lean_inc(v_tail_2395_);
lean_dec_ref_known(v_x_2393_, 3);
v___x_2396_ = l_Std_Sat_AIG_toGraphviz_toGraphvizString___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__14(v_decls_2391_, v_key_2394_);
v___x_2397_ = lean_string_append(v_x_2392_, v___x_2396_);
lean_dec_ref(v___x_2396_);
v_x_2392_ = v___x_2397_;
v_x_2393_ = v_tail_2395_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__16___boxed(lean_object* v_decls_2399_, lean_object* v_x_2400_, lean_object* v_x_2401_){
_start:
{
lean_object* v_res_2402_; 
v_res_2402_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__16(v_decls_2399_, v_x_2400_, v_x_2401_);
lean_dec_ref(v_decls_2399_);
return v_res_2402_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__17(lean_object* v_decls_2403_, lean_object* v_as_2404_, size_t v_i_2405_, size_t v_stop_2406_, lean_object* v_b_2407_){
_start:
{
uint8_t v___x_2408_; 
v___x_2408_ = lean_usize_dec_eq(v_i_2405_, v_stop_2406_);
if (v___x_2408_ == 0)
{
lean_object* v___x_2409_; lean_object* v___x_2410_; size_t v___x_2411_; size_t v___x_2412_; 
v___x_2409_ = lean_array_uget_borrowed(v_as_2404_, v_i_2405_);
lean_inc(v___x_2409_);
v___x_2410_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__16(v_decls_2403_, v_b_2407_, v___x_2409_);
v___x_2411_ = ((size_t)1ULL);
v___x_2412_ = lean_usize_add(v_i_2405_, v___x_2411_);
v_i_2405_ = v___x_2412_;
v_b_2407_ = v___x_2410_;
goto _start;
}
else
{
return v_b_2407_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__17___boxed(lean_object* v_decls_2414_, lean_object* v_as_2415_, lean_object* v_i_2416_, lean_object* v_stop_2417_, lean_object* v_b_2418_){
_start:
{
size_t v_i_boxed_2419_; size_t v_stop_boxed_2420_; lean_object* v_res_2421_; 
v_i_boxed_2419_ = lean_unbox_usize(v_i_2416_);
lean_dec(v_i_2416_);
v_stop_boxed_2420_ = lean_unbox_usize(v_stop_2417_);
lean_dec(v_stop_2417_);
v_res_2421_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__17(v_decls_2414_, v_as_2415_, v_i_boxed_2419_, v_stop_boxed_2420_, v_b_2418_);
lean_dec_ref(v_as_2415_);
lean_dec_ref(v_decls_2414_);
return v_res_2421_;
}
}
static lean_object* _init_l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__0(void){
_start:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2422_ = lean_box(0);
v___x_2423_ = lean_unsigned_to_nat(16u);
v___x_2424_ = lean_mk_array(v___x_2423_, v___x_2422_);
return v___x_2424_;
}
}
static lean_object* _init_l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__1(void){
_start:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; 
v___x_2425_ = lean_obj_once(&l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__0, &l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__0_once, _init_l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__0);
v___x_2426_ = lean_unsigned_to_nat(0u);
v___x_2427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2427_, 0, v___x_2426_);
lean_ctor_set(v___x_2427_, 1, v___x_2425_);
return v___x_2427_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7(lean_object* v_entry_2430_){
_start:
{
lean_object* v_aig_2431_; lean_object* v_ref_2432_; lean_object* v_decls_2433_; lean_object* v_gate_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v_fst_2439_; lean_object* v_snd_2440_; lean_object* v___y_2442_; lean_object* v_buckets_2448_; lean_object* v___x_2449_; uint8_t v___x_2450_; 
v_aig_2431_ = lean_ctor_get(v_entry_2430_, 0);
lean_inc_ref(v_aig_2431_);
v_ref_2432_ = lean_ctor_get(v_entry_2430_, 1);
lean_inc_ref(v_ref_2432_);
lean_dec_ref(v_entry_2430_);
v_decls_2433_ = lean_ctor_get(v_aig_2431_, 0);
lean_inc_ref(v_decls_2433_);
lean_dec_ref(v_aig_2431_);
v_gate_2434_ = lean_ctor_get(v_ref_2432_, 0);
lean_inc(v_gate_2434_);
lean_dec_ref(v_ref_2432_);
v___x_2435_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__11));
v___x_2436_ = lean_unsigned_to_nat(0u);
v___x_2437_ = lean_obj_once(&l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__1, &l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__1_once, _init_l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__1);
v___x_2438_ = l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg(v___x_2435_, v_decls_2433_, v_gate_2434_, v___x_2437_);
v_fst_2439_ = lean_ctor_get(v___x_2438_, 0);
lean_inc(v_fst_2439_);
v_snd_2440_ = lean_ctor_get(v___x_2438_, 1);
lean_inc(v_snd_2440_);
lean_dec_ref(v___x_2438_);
v_buckets_2448_ = lean_ctor_get(v_snd_2440_, 1);
lean_inc_ref(v_buckets_2448_);
lean_dec(v_snd_2440_);
v___x_2449_ = lean_array_get_size(v_buckets_2448_);
v___x_2450_ = lean_nat_dec_lt(v___x_2436_, v___x_2449_);
if (v___x_2450_ == 0)
{
lean_dec_ref(v_buckets_2448_);
lean_dec_ref(v_decls_2433_);
v___y_2442_ = v___x_2435_;
goto v___jp_2441_;
}
else
{
size_t v___x_2451_; size_t v___x_2452_; lean_object* v___x_2453_; 
v___x_2451_ = ((size_t)0ULL);
v___x_2452_ = lean_usize_of_nat(v___x_2449_);
v___x_2453_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__17(v_decls_2433_, v_buckets_2448_, v___x_2451_, v___x_2452_, v___x_2435_);
lean_dec_ref(v_buckets_2448_);
lean_dec_ref(v_decls_2433_);
v___y_2442_ = v___x_2453_;
goto v___jp_2441_;
}
v___jp_2441_:
{
lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; 
v___x_2443_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__2));
v___x_2444_ = lean_string_append(v___x_2443_, v___y_2442_);
lean_dec_ref(v___y_2442_);
v___x_2445_ = lean_string_append(v___x_2444_, v_fst_2439_);
lean_dec(v_fst_2439_);
v___x_2446_ = ((lean_object*)(l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7___closed__3));
v___x_2447_ = lean_string_append(v___x_2445_, v___x_2446_);
return v___x_2447_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg(lean_object* v_cls_2456_, lean_object* v_msg_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_){
_start:
{
lean_object* v_ref_2463_; lean_object* v___x_2464_; lean_object* v_a_2465_; lean_object* v___x_2467_; uint8_t v_isShared_2468_; uint8_t v_isSharedCheck_2510_; 
v_ref_2463_ = lean_ctor_get(v___y_2460_, 2);
v___x_2464_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3_spec__6(v_msg_2457_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_);
v_a_2465_ = lean_ctor_get(v___x_2464_, 0);
v_isSharedCheck_2510_ = !lean_is_exclusive(v___x_2464_);
if (v_isSharedCheck_2510_ == 0)
{
v___x_2467_ = v___x_2464_;
v_isShared_2468_ = v_isSharedCheck_2510_;
goto v_resetjp_2466_;
}
else
{
lean_inc(v_a_2465_);
lean_dec(v___x_2464_);
v___x_2467_ = lean_box(0);
v_isShared_2468_ = v_isSharedCheck_2510_;
goto v_resetjp_2466_;
}
v_resetjp_2466_:
{
lean_object* v___x_2469_; lean_object* v_traceState_2470_; lean_object* v_env_2471_; lean_object* v_nextMacroScope_2472_; lean_object* v_ngen_2473_; lean_object* v_auxDeclNGen_2474_; lean_object* v_cache_2475_; lean_object* v_recordedDeps_2476_; lean_object* v_messages_2477_; lean_object* v_infoState_2478_; lean_object* v_snapshotTasks_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2509_; 
v___x_2469_ = lean_st_ref_take(v___y_2461_);
v_traceState_2470_ = lean_ctor_get(v___x_2469_, 4);
v_env_2471_ = lean_ctor_get(v___x_2469_, 0);
v_nextMacroScope_2472_ = lean_ctor_get(v___x_2469_, 1);
v_ngen_2473_ = lean_ctor_get(v___x_2469_, 2);
v_auxDeclNGen_2474_ = lean_ctor_get(v___x_2469_, 3);
v_cache_2475_ = lean_ctor_get(v___x_2469_, 5);
v_recordedDeps_2476_ = lean_ctor_get(v___x_2469_, 6);
v_messages_2477_ = lean_ctor_get(v___x_2469_, 7);
v_infoState_2478_ = lean_ctor_get(v___x_2469_, 8);
v_snapshotTasks_2479_ = lean_ctor_get(v___x_2469_, 9);
v_isSharedCheck_2509_ = !lean_is_exclusive(v___x_2469_);
if (v_isSharedCheck_2509_ == 0)
{
v___x_2481_ = v___x_2469_;
v_isShared_2482_ = v_isSharedCheck_2509_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_snapshotTasks_2479_);
lean_inc(v_infoState_2478_);
lean_inc(v_messages_2477_);
lean_inc(v_recordedDeps_2476_);
lean_inc(v_cache_2475_);
lean_inc(v_traceState_2470_);
lean_inc(v_auxDeclNGen_2474_);
lean_inc(v_ngen_2473_);
lean_inc(v_nextMacroScope_2472_);
lean_inc(v_env_2471_);
lean_dec(v___x_2469_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2509_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
uint64_t v_tid_2483_; lean_object* v_traces_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2508_; 
v_tid_2483_ = lean_ctor_get_uint64(v_traceState_2470_, sizeof(void*)*1);
v_traces_2484_ = lean_ctor_get(v_traceState_2470_, 0);
v_isSharedCheck_2508_ = !lean_is_exclusive(v_traceState_2470_);
if (v_isSharedCheck_2508_ == 0)
{
v___x_2486_ = v_traceState_2470_;
v_isShared_2487_ = v_isSharedCheck_2508_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_traces_2484_);
lean_dec(v_traceState_2470_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2508_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; double v___x_2490_; uint8_t v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2499_; 
v___x_2488_ = lean_box(0);
v___x_2489_ = lean_box(0);
v___x_2490_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0);
v___x_2491_ = 0;
v___x_2492_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__11));
v___x_2493_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2493_, 0, v_cls_2456_);
lean_ctor_set(v___x_2493_, 1, v___x_2489_);
lean_ctor_set(v___x_2493_, 2, v___x_2492_);
lean_ctor_set_float(v___x_2493_, sizeof(void*)*3, v___x_2490_);
lean_ctor_set_float(v___x_2493_, sizeof(void*)*3 + 8, v___x_2490_);
lean_ctor_set_uint8(v___x_2493_, sizeof(void*)*3 + 16, v___x_2491_);
v___x_2494_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg___closed__0));
v___x_2495_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2495_, 0, v___x_2493_);
lean_ctor_set(v___x_2495_, 1, v_a_2465_);
lean_ctor_set(v___x_2495_, 2, v___x_2494_);
lean_inc(v_ref_2463_);
v___x_2496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2496_, 0, v_ref_2463_);
lean_ctor_set(v___x_2496_, 1, v___x_2495_);
v___x_2497_ = l_Lean_PersistentArray_push___redArg(v_traces_2484_, v___x_2496_);
if (v_isShared_2487_ == 0)
{
lean_ctor_set(v___x_2486_, 0, v___x_2497_);
v___x_2499_ = v___x_2486_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2507_; 
v_reuseFailAlloc_2507_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2507_, 0, v___x_2497_);
lean_ctor_set_uint64(v_reuseFailAlloc_2507_, sizeof(void*)*1, v_tid_2483_);
v___x_2499_ = v_reuseFailAlloc_2507_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
lean_object* v___x_2501_; 
if (v_isShared_2482_ == 0)
{
lean_ctor_set(v___x_2481_, 4, v___x_2499_);
v___x_2501_ = v___x_2481_;
goto v_reusejp_2500_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v_env_2471_);
lean_ctor_set(v_reuseFailAlloc_2506_, 1, v_nextMacroScope_2472_);
lean_ctor_set(v_reuseFailAlloc_2506_, 2, v_ngen_2473_);
lean_ctor_set(v_reuseFailAlloc_2506_, 3, v_auxDeclNGen_2474_);
lean_ctor_set(v_reuseFailAlloc_2506_, 4, v___x_2499_);
lean_ctor_set(v_reuseFailAlloc_2506_, 5, v_cache_2475_);
lean_ctor_set(v_reuseFailAlloc_2506_, 6, v_recordedDeps_2476_);
lean_ctor_set(v_reuseFailAlloc_2506_, 7, v_messages_2477_);
lean_ctor_set(v_reuseFailAlloc_2506_, 8, v_infoState_2478_);
lean_ctor_set(v_reuseFailAlloc_2506_, 9, v_snapshotTasks_2479_);
v___x_2501_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2500_;
}
v_reusejp_2500_:
{
lean_object* v___x_2502_; lean_object* v___x_2504_; 
v___x_2502_ = lean_st_ref_put(v___y_2461_, v___x_2501_);
if (v_isShared_2468_ == 0)
{
lean_ctor_set(v___x_2467_, 0, v___x_2488_);
v___x_2504_ = v___x_2467_;
goto v_reusejp_2503_;
}
else
{
lean_object* v_reuseFailAlloc_2505_; 
v_reuseFailAlloc_2505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2505_, 0, v___x_2488_);
v___x_2504_ = v_reuseFailAlloc_2505_;
goto v_reusejp_2503_;
}
v_reusejp_2503_:
{
return v___x_2504_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg___boxed(lean_object* v_cls_2511_, lean_object* v_msg_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_){
_start:
{
lean_object* v_res_2518_; 
v_res_2518_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg(v_cls_2511_, v_msg_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_);
lean_dec(v___y_2516_);
lean_dec_ref(v___y_2515_);
lean_dec(v___y_2514_);
lean_dec_ref(v___y_2513_);
return v_res_2518_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__10(lean_object* v_e_2519_){
_start:
{
if (lean_obj_tag(v_e_2519_) == 0)
{
uint8_t v___x_2520_; 
v___x_2520_ = 2;
return v___x_2520_;
}
else
{
uint8_t v___x_2521_; 
v___x_2521_ = 0;
return v___x_2521_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__10___boxed(lean_object* v_e_2522_){
_start:
{
uint8_t v_res_2523_; lean_object* v_r_2524_; 
v_res_2523_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__10(v_e_2522_);
lean_dec_ref(v_e_2522_);
v_r_2524_ = lean_box(v_res_2523_);
return v_r_2524_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5(lean_object* v_cls_2525_, uint8_t v_collapsed_2526_, lean_object* v_tag_2527_, lean_object* v_opts_2528_, uint8_t v_clsEnabled_2529_, lean_object* v_oldTraces_2530_, lean_object* v_msg_2531_, lean_object* v_resStartStop_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_){
_start:
{
lean_object* v_fst_2546_; lean_object* v_snd_2547_; lean_object* v___y_2549_; lean_object* v___y_2550_; lean_object* v_data_2551_; lean_object* v_fst_2562_; lean_object* v_snd_2563_; lean_object* v___x_2564_; uint8_t v___x_2565_; lean_object* v___y_2567_; lean_object* v_a_2568_; uint8_t v___y_2583_; double v___y_2615_; 
v_fst_2546_ = lean_ctor_get(v_resStartStop_2532_, 0);
lean_inc(v_fst_2546_);
v_snd_2547_ = lean_ctor_get(v_resStartStop_2532_, 1);
lean_inc(v_snd_2547_);
lean_dec_ref(v_resStartStop_2532_);
v_fst_2562_ = lean_ctor_get(v_snd_2547_, 0);
lean_inc(v_fst_2562_);
v_snd_2563_ = lean_ctor_get(v_snd_2547_, 1);
lean_inc(v_snd_2563_);
lean_dec(v_snd_2547_);
v___x_2564_ = l_Lean_trace_profiler;
v___x_2565_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_opts_2528_, v___x_2564_);
if (v___x_2565_ == 0)
{
v___y_2583_ = v___x_2565_;
goto v___jp_2582_;
}
else
{
lean_object* v___x_2620_; uint8_t v___x_2621_; 
v___x_2620_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2621_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_opts_2528_, v___x_2620_);
if (v___x_2621_ == 0)
{
lean_object* v___x_2622_; lean_object* v___x_2623_; double v___x_2624_; double v___x_2625_; double v___x_2626_; 
v___x_2622_ = l_Lean_trace_profiler_threshold;
v___x_2623_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v_opts_2528_, v___x_2622_);
v___x_2624_ = lean_float_of_nat(v___x_2623_);
v___x_2625_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3);
v___x_2626_ = lean_float_div(v___x_2624_, v___x_2625_);
v___y_2615_ = v___x_2626_;
goto v___jp_2614_;
}
else
{
lean_object* v___x_2627_; lean_object* v___x_2628_; double v___x_2629_; 
v___x_2627_ = l_Lean_trace_profiler_threshold;
v___x_2628_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v_opts_2528_, v___x_2627_);
v___x_2629_ = lean_float_of_nat(v___x_2628_);
v___y_2615_ = v___x_2629_;
goto v___jp_2614_;
}
}
v___jp_2548_:
{
lean_object* v___x_2552_; 
lean_inc(v___y_2549_);
v___x_2552_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__8___redArg(v_oldTraces_2530_, v_data_2551_, v___y_2549_, v___y_2550_, v___y_2541_, v___y_2542_, v___y_2543_, v___y_2544_);
if (lean_obj_tag(v___x_2552_) == 0)
{
lean_object* v___x_2553_; 
lean_dec_ref_known(v___x_2552_, 1);
v___x_2553_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9___redArg(v_fst_2546_);
return v___x_2553_;
}
else
{
lean_object* v_a_2554_; lean_object* v___x_2556_; uint8_t v_isShared_2557_; uint8_t v_isSharedCheck_2561_; 
lean_dec(v_fst_2546_);
v_a_2554_ = lean_ctor_get(v___x_2552_, 0);
v_isSharedCheck_2561_ = !lean_is_exclusive(v___x_2552_);
if (v_isSharedCheck_2561_ == 0)
{
v___x_2556_ = v___x_2552_;
v_isShared_2557_ = v_isSharedCheck_2561_;
goto v_resetjp_2555_;
}
else
{
lean_inc(v_a_2554_);
lean_dec(v___x_2552_);
v___x_2556_ = lean_box(0);
v_isShared_2557_ = v_isSharedCheck_2561_;
goto v_resetjp_2555_;
}
v_resetjp_2555_:
{
lean_object* v___x_2559_; 
if (v_isShared_2557_ == 0)
{
v___x_2559_ = v___x_2556_;
goto v_reusejp_2558_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v_a_2554_);
v___x_2559_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2558_;
}
v_reusejp_2558_:
{
return v___x_2559_;
}
}
}
}
v___jp_2566_:
{
uint8_t v_result_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; double v___x_2572_; lean_object* v_data_2573_; 
v_result_2569_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__10(v_fst_2546_);
v___x_2570_ = lean_box(v_result_2569_);
v___x_2571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2571_, 0, v___x_2570_);
v___x_2572_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0);
lean_inc_ref(v_tag_2527_);
lean_inc_ref(v___x_2571_);
lean_inc(v_cls_2525_);
v_data_2573_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2573_, 0, v_cls_2525_);
lean_ctor_set(v_data_2573_, 1, v___x_2571_);
lean_ctor_set(v_data_2573_, 2, v_tag_2527_);
lean_ctor_set_float(v_data_2573_, sizeof(void*)*3, v___x_2572_);
lean_ctor_set_float(v_data_2573_, sizeof(void*)*3 + 8, v___x_2572_);
lean_ctor_set_uint8(v_data_2573_, sizeof(void*)*3 + 16, v_collapsed_2526_);
if (v___x_2565_ == 0)
{
lean_dec_ref_known(v___x_2571_, 1);
lean_dec(v_snd_2563_);
lean_dec(v_fst_2562_);
lean_dec_ref(v_tag_2527_);
lean_dec(v_cls_2525_);
v___y_2549_ = v___y_2567_;
v___y_2550_ = v_a_2568_;
v_data_2551_ = v_data_2573_;
goto v___jp_2548_;
}
else
{
lean_object* v_data_2574_; double v___x_2575_; double v___x_2576_; 
lean_dec_ref_known(v_data_2573_, 3);
v_data_2574_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2574_, 0, v_cls_2525_);
lean_ctor_set(v_data_2574_, 1, v___x_2571_);
lean_ctor_set(v_data_2574_, 2, v_tag_2527_);
v___x_2575_ = lean_unbox_float(v_fst_2562_);
lean_dec(v_fst_2562_);
lean_ctor_set_float(v_data_2574_, sizeof(void*)*3, v___x_2575_);
v___x_2576_ = lean_unbox_float(v_snd_2563_);
lean_dec(v_snd_2563_);
lean_ctor_set_float(v_data_2574_, sizeof(void*)*3 + 8, v___x_2576_);
lean_ctor_set_uint8(v_data_2574_, sizeof(void*)*3 + 16, v_collapsed_2526_);
v___y_2549_ = v___y_2567_;
v___y_2550_ = v_a_2568_;
v_data_2551_ = v_data_2574_;
goto v___jp_2548_;
}
}
v___jp_2577_:
{
lean_object* v_ref_2578_; lean_object* v___x_2579_; 
v_ref_2578_ = lean_ctor_get(v___y_2543_, 2);
lean_inc(v___y_2544_);
lean_inc_ref(v___y_2543_);
lean_inc(v___y_2542_);
lean_inc_ref(v___y_2541_);
lean_inc(v___y_2540_);
lean_inc_ref(v___y_2539_);
lean_inc(v___y_2538_);
lean_inc_ref(v___y_2537_);
lean_inc(v___y_2536_);
lean_inc(v___y_2535_);
lean_inc_ref(v___y_2534_);
lean_inc(v___y_2533_);
lean_inc(v_fst_2546_);
v___x_2579_ = lean_apply_14(v_msg_2531_, v_fst_2546_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_, v___y_2544_, lean_box(0));
if (lean_obj_tag(v___x_2579_) == 0)
{
lean_object* v_a_2580_; 
v_a_2580_ = lean_ctor_get(v___x_2579_, 0);
lean_inc(v_a_2580_);
lean_dec_ref_known(v___x_2579_, 1);
v___y_2567_ = v_ref_2578_;
v_a_2568_ = v_a_2580_;
goto v___jp_2566_;
}
else
{
lean_object* v___x_2581_; 
lean_dec_ref_known(v___x_2579_, 1);
v___x_2581_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2);
v___y_2567_ = v_ref_2578_;
v_a_2568_ = v___x_2581_;
goto v___jp_2566_;
}
}
v___jp_2582_:
{
if (v_clsEnabled_2529_ == 0)
{
if (v___y_2583_ == 0)
{
lean_object* v___x_2584_; lean_object* v_traceState_2585_; lean_object* v_env_2586_; lean_object* v_nextMacroScope_2587_; lean_object* v_ngen_2588_; lean_object* v_auxDeclNGen_2589_; lean_object* v_cache_2590_; lean_object* v_recordedDeps_2591_; lean_object* v_messages_2592_; lean_object* v_infoState_2593_; lean_object* v_snapshotTasks_2594_; lean_object* v___x_2596_; uint8_t v_isShared_2597_; uint8_t v_isSharedCheck_2613_; 
lean_dec(v_snd_2563_);
lean_dec(v_fst_2562_);
lean_dec_ref(v_msg_2531_);
lean_dec_ref(v_tag_2527_);
lean_dec(v_cls_2525_);
v___x_2584_ = lean_st_ref_take(v___y_2544_);
v_traceState_2585_ = lean_ctor_get(v___x_2584_, 4);
v_env_2586_ = lean_ctor_get(v___x_2584_, 0);
v_nextMacroScope_2587_ = lean_ctor_get(v___x_2584_, 1);
v_ngen_2588_ = lean_ctor_get(v___x_2584_, 2);
v_auxDeclNGen_2589_ = lean_ctor_get(v___x_2584_, 3);
v_cache_2590_ = lean_ctor_get(v___x_2584_, 5);
v_recordedDeps_2591_ = lean_ctor_get(v___x_2584_, 6);
v_messages_2592_ = lean_ctor_get(v___x_2584_, 7);
v_infoState_2593_ = lean_ctor_get(v___x_2584_, 8);
v_snapshotTasks_2594_ = lean_ctor_get(v___x_2584_, 9);
v_isSharedCheck_2613_ = !lean_is_exclusive(v___x_2584_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2596_ = v___x_2584_;
v_isShared_2597_ = v_isSharedCheck_2613_;
goto v_resetjp_2595_;
}
else
{
lean_inc(v_snapshotTasks_2594_);
lean_inc(v_infoState_2593_);
lean_inc(v_messages_2592_);
lean_inc(v_recordedDeps_2591_);
lean_inc(v_cache_2590_);
lean_inc(v_traceState_2585_);
lean_inc(v_auxDeclNGen_2589_);
lean_inc(v_ngen_2588_);
lean_inc(v_nextMacroScope_2587_);
lean_inc(v_env_2586_);
lean_dec(v___x_2584_);
v___x_2596_ = lean_box(0);
v_isShared_2597_ = v_isSharedCheck_2613_;
goto v_resetjp_2595_;
}
v_resetjp_2595_:
{
uint64_t v_tid_2598_; lean_object* v_traces_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2612_; 
v_tid_2598_ = lean_ctor_get_uint64(v_traceState_2585_, sizeof(void*)*1);
v_traces_2599_ = lean_ctor_get(v_traceState_2585_, 0);
v_isSharedCheck_2612_ = !lean_is_exclusive(v_traceState_2585_);
if (v_isSharedCheck_2612_ == 0)
{
v___x_2601_ = v_traceState_2585_;
v_isShared_2602_ = v_isSharedCheck_2612_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_traces_2599_);
lean_dec(v_traceState_2585_);
v___x_2601_ = lean_box(0);
v_isShared_2602_ = v_isSharedCheck_2612_;
goto v_resetjp_2600_;
}
v_resetjp_2600_:
{
lean_object* v___x_2603_; lean_object* v___x_2605_; 
v___x_2603_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_2530_, v_traces_2599_);
lean_dec_ref(v_traces_2599_);
if (v_isShared_2602_ == 0)
{
lean_ctor_set(v___x_2601_, 0, v___x_2603_);
v___x_2605_ = v___x_2601_;
goto v_reusejp_2604_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v___x_2603_);
lean_ctor_set_uint64(v_reuseFailAlloc_2611_, sizeof(void*)*1, v_tid_2598_);
v___x_2605_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2604_;
}
v_reusejp_2604_:
{
lean_object* v___x_2607_; 
if (v_isShared_2597_ == 0)
{
lean_ctor_set(v___x_2596_, 4, v___x_2605_);
v___x_2607_ = v___x_2596_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v_env_2586_);
lean_ctor_set(v_reuseFailAlloc_2610_, 1, v_nextMacroScope_2587_);
lean_ctor_set(v_reuseFailAlloc_2610_, 2, v_ngen_2588_);
lean_ctor_set(v_reuseFailAlloc_2610_, 3, v_auxDeclNGen_2589_);
lean_ctor_set(v_reuseFailAlloc_2610_, 4, v___x_2605_);
lean_ctor_set(v_reuseFailAlloc_2610_, 5, v_cache_2590_);
lean_ctor_set(v_reuseFailAlloc_2610_, 6, v_recordedDeps_2591_);
lean_ctor_set(v_reuseFailAlloc_2610_, 7, v_messages_2592_);
lean_ctor_set(v_reuseFailAlloc_2610_, 8, v_infoState_2593_);
lean_ctor_set(v_reuseFailAlloc_2610_, 9, v_snapshotTasks_2594_);
v___x_2607_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2606_;
}
v_reusejp_2606_:
{
lean_object* v___x_2608_; lean_object* v___x_2609_; 
v___x_2608_ = lean_st_ref_put(v___y_2544_, v___x_2607_);
v___x_2609_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9___redArg(v_fst_2546_);
return v___x_2609_;
}
}
}
}
}
else
{
goto v___jp_2577_;
}
}
else
{
goto v___jp_2577_;
}
}
v___jp_2614_:
{
double v___x_2616_; double v___x_2617_; double v___x_2618_; uint8_t v___x_2619_; 
v___x_2616_ = lean_unbox_float(v_snd_2563_);
v___x_2617_ = lean_unbox_float(v_fst_2562_);
v___x_2618_ = lean_float_sub(v___x_2616_, v___x_2617_);
v___x_2619_ = lean_float_decLt(v___y_2615_, v___x_2618_);
v___y_2583_ = v___x_2619_;
goto v___jp_2582_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5___boxed(lean_object** _args){
lean_object* v_cls_2630_ = _args[0];
lean_object* v_collapsed_2631_ = _args[1];
lean_object* v_tag_2632_ = _args[2];
lean_object* v_opts_2633_ = _args[3];
lean_object* v_clsEnabled_2634_ = _args[4];
lean_object* v_oldTraces_2635_ = _args[5];
lean_object* v_msg_2636_ = _args[6];
lean_object* v_resStartStop_2637_ = _args[7];
lean_object* v___y_2638_ = _args[8];
lean_object* v___y_2639_ = _args[9];
lean_object* v___y_2640_ = _args[10];
lean_object* v___y_2641_ = _args[11];
lean_object* v___y_2642_ = _args[12];
lean_object* v___y_2643_ = _args[13];
lean_object* v___y_2644_ = _args[14];
lean_object* v___y_2645_ = _args[15];
lean_object* v___y_2646_ = _args[16];
lean_object* v___y_2647_ = _args[17];
lean_object* v___y_2648_ = _args[18];
lean_object* v___y_2649_ = _args[19];
lean_object* v___y_2650_ = _args[20];
_start:
{
uint8_t v_collapsed_boxed_2651_; uint8_t v_clsEnabled_boxed_2652_; lean_object* v_res_2653_; 
v_collapsed_boxed_2651_ = lean_unbox(v_collapsed_2631_);
v_clsEnabled_boxed_2652_ = lean_unbox(v_clsEnabled_2634_);
v_res_2653_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5(v_cls_2630_, v_collapsed_boxed_2651_, v_tag_2632_, v_opts_2633_, v_clsEnabled_boxed_2652_, v_oldTraces_2635_, v_msg_2636_, v_resStartStop_2637_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_);
lean_dec(v___y_2649_);
lean_dec_ref(v___y_2648_);
lean_dec(v___y_2647_);
lean_dec_ref(v___y_2646_);
lean_dec(v___y_2645_);
lean_dec_ref(v___y_2644_);
lean_dec(v___y_2643_);
lean_dec_ref(v___y_2642_);
lean_dec(v___y_2641_);
lean_dec(v___y_2640_);
lean_dec_ref(v___y_2639_);
lean_dec(v___y_2638_);
lean_dec_ref(v_opts_2633_);
return v_res_2653_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__19_spec__24___redArg(lean_object* v_x_2654_, lean_object* v_x_2655_, lean_object* v_x_2656_, lean_object* v_x_2657_){
_start:
{
lean_object* v_ks_2658_; lean_object* v_vs_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2683_; 
v_ks_2658_ = lean_ctor_get(v_x_2654_, 0);
v_vs_2659_ = lean_ctor_get(v_x_2654_, 1);
v_isSharedCheck_2683_ = !lean_is_exclusive(v_x_2654_);
if (v_isSharedCheck_2683_ == 0)
{
v___x_2661_ = v_x_2654_;
v_isShared_2662_ = v_isSharedCheck_2683_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_vs_2659_);
lean_inc(v_ks_2658_);
lean_dec(v_x_2654_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2683_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2663_; uint8_t v___x_2664_; 
v___x_2663_ = lean_array_get_size(v_ks_2658_);
v___x_2664_ = lean_nat_dec_lt(v_x_2655_, v___x_2663_);
if (v___x_2664_ == 0)
{
lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2668_; 
lean_dec(v_x_2655_);
v___x_2665_ = lean_array_push(v_ks_2658_, v_x_2656_);
v___x_2666_ = lean_array_push(v_vs_2659_, v_x_2657_);
if (v_isShared_2662_ == 0)
{
lean_ctor_set(v___x_2661_, 1, v___x_2666_);
lean_ctor_set(v___x_2661_, 0, v___x_2665_);
v___x_2668_ = v___x_2661_;
goto v_reusejp_2667_;
}
else
{
lean_object* v_reuseFailAlloc_2669_; 
v_reuseFailAlloc_2669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2669_, 0, v___x_2665_);
lean_ctor_set(v_reuseFailAlloc_2669_, 1, v___x_2666_);
v___x_2668_ = v_reuseFailAlloc_2669_;
goto v_reusejp_2667_;
}
v_reusejp_2667_:
{
return v___x_2668_;
}
}
else
{
lean_object* v_k_x27_2670_; uint8_t v___x_2671_; 
v_k_x27_2670_ = lean_array_fget_borrowed(v_ks_2658_, v_x_2655_);
v___x_2671_ = l_Lean_instBEqMVarId_beq(v_x_2656_, v_k_x27_2670_);
if (v___x_2671_ == 0)
{
lean_object* v___x_2673_; 
if (v_isShared_2662_ == 0)
{
v___x_2673_ = v___x_2661_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v_ks_2658_);
lean_ctor_set(v_reuseFailAlloc_2677_, 1, v_vs_2659_);
v___x_2673_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; 
v___x_2674_ = lean_unsigned_to_nat(1u);
v___x_2675_ = lean_nat_add(v_x_2655_, v___x_2674_);
lean_dec(v_x_2655_);
v_x_2654_ = v___x_2673_;
v_x_2655_ = v___x_2675_;
goto _start;
}
}
else
{
lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2681_; 
v___x_2678_ = lean_array_fset(v_ks_2658_, v_x_2655_, v_x_2656_);
v___x_2679_ = lean_array_fset(v_vs_2659_, v_x_2655_, v_x_2657_);
lean_dec(v_x_2655_);
if (v_isShared_2662_ == 0)
{
lean_ctor_set(v___x_2661_, 1, v___x_2679_);
lean_ctor_set(v___x_2661_, 0, v___x_2678_);
v___x_2681_ = v___x_2661_;
goto v_reusejp_2680_;
}
else
{
lean_object* v_reuseFailAlloc_2682_; 
v_reuseFailAlloc_2682_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2682_, 0, v___x_2678_);
lean_ctor_set(v_reuseFailAlloc_2682_, 1, v___x_2679_);
v___x_2681_ = v_reuseFailAlloc_2682_;
goto v_reusejp_2680_;
}
v_reusejp_2680_:
{
return v___x_2681_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__19___redArg(lean_object* v_n_2684_, lean_object* v_k_2685_, lean_object* v_v_2686_){
_start:
{
lean_object* v___x_2687_; lean_object* v___x_2688_; 
v___x_2687_ = lean_unsigned_to_nat(0u);
v___x_2688_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__19_spec__24___redArg(v_n_2684_, v___x_2687_, v_k_2685_, v_v_2686_);
return v___x_2688_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_2689_; 
v___x_2689_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_2689_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7___redArg(lean_object* v_x_2690_, size_t v_x_2691_, size_t v_x_2692_, lean_object* v_x_2693_, lean_object* v_x_2694_){
_start:
{
if (lean_obj_tag(v_x_2690_) == 0)
{
lean_object* v_es_2695_; size_t v___x_2696_; size_t v___x_2697_; lean_object* v_j_2698_; lean_object* v___x_2699_; uint8_t v___x_2700_; 
v_es_2695_ = lean_ctor_get(v_x_2690_, 0);
v___x_2696_ = ((size_t)31ULL);
v___x_2697_ = lean_usize_land(v_x_2691_, v___x_2696_);
v_j_2698_ = lean_usize_to_nat(v___x_2697_);
v___x_2699_ = lean_array_get_size(v_es_2695_);
v___x_2700_ = lean_nat_dec_lt(v_j_2698_, v___x_2699_);
if (v___x_2700_ == 0)
{
lean_dec(v_j_2698_);
lean_dec(v_x_2694_);
lean_dec(v_x_2693_);
return v_x_2690_;
}
else
{
lean_object* v___x_2702_; uint8_t v_isShared_2703_; uint8_t v_isSharedCheck_2739_; 
lean_inc_ref(v_es_2695_);
v_isSharedCheck_2739_ = !lean_is_exclusive(v_x_2690_);
if (v_isSharedCheck_2739_ == 0)
{
lean_object* v_unused_2740_; 
v_unused_2740_ = lean_ctor_get(v_x_2690_, 0);
lean_dec(v_unused_2740_);
v___x_2702_ = v_x_2690_;
v_isShared_2703_ = v_isSharedCheck_2739_;
goto v_resetjp_2701_;
}
else
{
lean_dec(v_x_2690_);
v___x_2702_ = lean_box(0);
v_isShared_2703_ = v_isSharedCheck_2739_;
goto v_resetjp_2701_;
}
v_resetjp_2701_:
{
lean_object* v_v_2704_; lean_object* v___x_2705_; lean_object* v_xs_x27_2706_; lean_object* v___y_2708_; 
v_v_2704_ = lean_array_fget(v_es_2695_, v_j_2698_);
v___x_2705_ = lean_box(0);
v_xs_x27_2706_ = lean_array_fset(v_es_2695_, v_j_2698_, v___x_2705_);
switch(lean_obj_tag(v_v_2704_))
{
case 0:
{
lean_object* v_key_2713_; lean_object* v_val_2714_; lean_object* v___x_2716_; uint8_t v_isShared_2717_; uint8_t v_isSharedCheck_2724_; 
v_key_2713_ = lean_ctor_get(v_v_2704_, 0);
v_val_2714_ = lean_ctor_get(v_v_2704_, 1);
v_isSharedCheck_2724_ = !lean_is_exclusive(v_v_2704_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2716_ = v_v_2704_;
v_isShared_2717_ = v_isSharedCheck_2724_;
goto v_resetjp_2715_;
}
else
{
lean_inc(v_val_2714_);
lean_inc(v_key_2713_);
lean_dec(v_v_2704_);
v___x_2716_ = lean_box(0);
v_isShared_2717_ = v_isSharedCheck_2724_;
goto v_resetjp_2715_;
}
v_resetjp_2715_:
{
uint8_t v___x_2718_; 
v___x_2718_ = l_Lean_instBEqMVarId_beq(v_x_2693_, v_key_2713_);
if (v___x_2718_ == 0)
{
lean_object* v___x_2719_; lean_object* v___x_2720_; 
lean_del_object(v___x_2716_);
v___x_2719_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2713_, v_val_2714_, v_x_2693_, v_x_2694_);
v___x_2720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2720_, 0, v___x_2719_);
v___y_2708_ = v___x_2720_;
goto v___jp_2707_;
}
else
{
lean_object* v___x_2722_; 
lean_dec(v_val_2714_);
lean_dec(v_key_2713_);
if (v_isShared_2717_ == 0)
{
lean_ctor_set(v___x_2716_, 1, v_x_2694_);
lean_ctor_set(v___x_2716_, 0, v_x_2693_);
v___x_2722_ = v___x_2716_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v_x_2693_);
lean_ctor_set(v_reuseFailAlloc_2723_, 1, v_x_2694_);
v___x_2722_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
v___y_2708_ = v___x_2722_;
goto v___jp_2707_;
}
}
}
}
case 1:
{
lean_object* v_node_2725_; lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2737_; 
v_node_2725_ = lean_ctor_get(v_v_2704_, 0);
v_isSharedCheck_2737_ = !lean_is_exclusive(v_v_2704_);
if (v_isSharedCheck_2737_ == 0)
{
v___x_2727_ = v_v_2704_;
v_isShared_2728_ = v_isSharedCheck_2737_;
goto v_resetjp_2726_;
}
else
{
lean_inc(v_node_2725_);
lean_dec(v_v_2704_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2737_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
size_t v___x_2729_; size_t v___x_2730_; size_t v___x_2731_; size_t v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2735_; 
v___x_2729_ = ((size_t)5ULL);
v___x_2730_ = lean_usize_shift_right(v_x_2691_, v___x_2729_);
v___x_2731_ = ((size_t)1ULL);
v___x_2732_ = lean_usize_add(v_x_2692_, v___x_2731_);
v___x_2733_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7___redArg(v_node_2725_, v___x_2730_, v___x_2732_, v_x_2693_, v_x_2694_);
if (v_isShared_2728_ == 0)
{
lean_ctor_set(v___x_2727_, 0, v___x_2733_);
v___x_2735_ = v___x_2727_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v___x_2733_);
v___x_2735_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
v___y_2708_ = v___x_2735_;
goto v___jp_2707_;
}
}
}
default: 
{
lean_object* v___x_2738_; 
v___x_2738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2738_, 0, v_x_2693_);
lean_ctor_set(v___x_2738_, 1, v_x_2694_);
v___y_2708_ = v___x_2738_;
goto v___jp_2707_;
}
}
v___jp_2707_:
{
lean_object* v___x_2709_; lean_object* v___x_2711_; 
v___x_2709_ = lean_array_fset(v_xs_x27_2706_, v_j_2698_, v___y_2708_);
lean_dec(v_j_2698_);
if (v_isShared_2703_ == 0)
{
lean_ctor_set(v___x_2702_, 0, v___x_2709_);
v___x_2711_ = v___x_2702_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v___x_2709_);
v___x_2711_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
return v___x_2711_;
}
}
}
}
}
else
{
lean_object* v_ks_2741_; lean_object* v_vs_2742_; lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2760_; 
v_ks_2741_ = lean_ctor_get(v_x_2690_, 0);
v_vs_2742_ = lean_ctor_get(v_x_2690_, 1);
v_isSharedCheck_2760_ = !lean_is_exclusive(v_x_2690_);
if (v_isSharedCheck_2760_ == 0)
{
v___x_2744_ = v_x_2690_;
v_isShared_2745_ = v_isSharedCheck_2760_;
goto v_resetjp_2743_;
}
else
{
lean_inc(v_vs_2742_);
lean_inc(v_ks_2741_);
lean_dec(v_x_2690_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2760_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
lean_object* v___x_2747_; 
if (v_isShared_2745_ == 0)
{
v___x_2747_ = v___x_2744_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v_ks_2741_);
lean_ctor_set(v_reuseFailAlloc_2759_, 1, v_vs_2742_);
v___x_2747_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
lean_object* v_newNode_2748_; size_t v___x_2749_; uint8_t v___x_2750_; 
v_newNode_2748_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__19___redArg(v___x_2747_, v_x_2693_, v_x_2694_);
v___x_2749_ = ((size_t)7ULL);
v___x_2750_ = lean_usize_dec_le(v___x_2749_, v_x_2692_);
if (v___x_2750_ == 0)
{
lean_object* v___x_2751_; lean_object* v___x_2752_; uint8_t v___x_2753_; 
v___x_2751_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2748_);
v___x_2752_ = lean_unsigned_to_nat(4u);
v___x_2753_ = lean_nat_dec_lt(v___x_2751_, v___x_2752_);
lean_dec(v___x_2751_);
if (v___x_2753_ == 0)
{
lean_object* v_ks_2754_; lean_object* v_vs_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; 
v_ks_2754_ = lean_ctor_get(v_newNode_2748_, 0);
lean_inc_ref(v_ks_2754_);
v_vs_2755_ = lean_ctor_get(v_newNode_2748_, 1);
lean_inc_ref(v_vs_2755_);
lean_dec_ref(v_newNode_2748_);
v___x_2756_ = lean_unsigned_to_nat(0u);
v___x_2757_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7___redArg___closed__0);
v___x_2758_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__20___redArg(v_x_2692_, v_ks_2754_, v_vs_2755_, v___x_2756_, v___x_2757_);
lean_dec_ref(v_vs_2755_);
lean_dec_ref(v_ks_2754_);
return v___x_2758_;
}
else
{
return v_newNode_2748_;
}
}
else
{
return v_newNode_2748_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__20___redArg(size_t v_depth_2761_, lean_object* v_keys_2762_, lean_object* v_vals_2763_, lean_object* v_i_2764_, lean_object* v_entries_2765_){
_start:
{
lean_object* v___x_2766_; uint8_t v___x_2767_; 
v___x_2766_ = lean_array_get_size(v_keys_2762_);
v___x_2767_ = lean_nat_dec_lt(v_i_2764_, v___x_2766_);
if (v___x_2767_ == 0)
{
lean_dec(v_i_2764_);
return v_entries_2765_;
}
else
{
lean_object* v_k_2768_; lean_object* v_v_2769_; uint64_t v___x_2770_; size_t v_h_2771_; size_t v___x_2772_; lean_object* v___x_2773_; size_t v___x_2774_; size_t v___x_2775_; size_t v___x_2776_; size_t v_h_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; 
v_k_2768_ = lean_array_fget_borrowed(v_keys_2762_, v_i_2764_);
v_v_2769_ = lean_array_fget_borrowed(v_vals_2763_, v_i_2764_);
v___x_2770_ = l_Lean_instHashableMVarId_hash(v_k_2768_);
v_h_2771_ = lean_uint64_to_usize(v___x_2770_);
v___x_2772_ = ((size_t)5ULL);
v___x_2773_ = lean_unsigned_to_nat(1u);
v___x_2774_ = ((size_t)1ULL);
v___x_2775_ = lean_usize_sub(v_depth_2761_, v___x_2774_);
v___x_2776_ = lean_usize_mul(v___x_2772_, v___x_2775_);
v_h_2777_ = lean_usize_shift_right(v_h_2771_, v___x_2776_);
v___x_2778_ = lean_nat_add(v_i_2764_, v___x_2773_);
lean_dec(v_i_2764_);
lean_inc(v_v_2769_);
lean_inc(v_k_2768_);
v___x_2779_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7___redArg(v_entries_2765_, v_h_2777_, v_depth_2761_, v_k_2768_, v_v_2769_);
v_i_2764_ = v___x_2778_;
v_entries_2765_ = v___x_2779_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__20___redArg___boxed(lean_object* v_depth_2781_, lean_object* v_keys_2782_, lean_object* v_vals_2783_, lean_object* v_i_2784_, lean_object* v_entries_2785_){
_start:
{
size_t v_depth_boxed_2786_; lean_object* v_res_2787_; 
v_depth_boxed_2786_ = lean_unbox_usize(v_depth_2781_);
lean_dec(v_depth_2781_);
v_res_2787_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__20___redArg(v_depth_boxed_2786_, v_keys_2782_, v_vals_2783_, v_i_2784_, v_entries_2785_);
lean_dec_ref(v_vals_2783_);
lean_dec_ref(v_keys_2782_);
return v_res_2787_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7___redArg___boxed(lean_object* v_x_2788_, lean_object* v_x_2789_, lean_object* v_x_2790_, lean_object* v_x_2791_, lean_object* v_x_2792_){
_start:
{
size_t v_x_655593__boxed_2793_; size_t v_x_655594__boxed_2794_; lean_object* v_res_2795_; 
v_x_655593__boxed_2793_ = lean_unbox_usize(v_x_2789_);
lean_dec(v_x_2789_);
v_x_655594__boxed_2794_ = lean_unbox_usize(v_x_2790_);
lean_dec(v_x_2790_);
v_res_2795_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7___redArg(v_x_2788_, v_x_655593__boxed_2793_, v_x_655594__boxed_2794_, v_x_2791_, v_x_2792_);
return v_res_2795_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5___redArg(lean_object* v_x_2796_, lean_object* v_x_2797_, lean_object* v_x_2798_){
_start:
{
uint64_t v___x_2799_; size_t v___x_2800_; size_t v___x_2801_; lean_object* v___x_2802_; 
v___x_2799_ = l_Lean_instHashableMVarId_hash(v_x_2797_);
v___x_2800_ = lean_uint64_to_usize(v___x_2799_);
v___x_2801_ = ((size_t)1ULL);
v___x_2802_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7___redArg(v_x_2796_, v___x_2800_, v___x_2801_, v_x_2797_, v_x_2798_);
return v___x_2802_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3___redArg(lean_object* v_mvarId_2803_, lean_object* v_val_2804_, lean_object* v___y_2805_){
_start:
{
lean_object* v___x_2807_; lean_object* v_mctx_2808_; lean_object* v_cache_2809_; lean_object* v_zetaDeltaFVarIds_2810_; lean_object* v_postponed_2811_; lean_object* v_diag_2812_; lean_object* v___x_2814_; uint8_t v_isShared_2815_; uint8_t v_isSharedCheck_2841_; 
v___x_2807_ = lean_st_ref_take(v___y_2805_);
v_mctx_2808_ = lean_ctor_get(v___x_2807_, 0);
v_cache_2809_ = lean_ctor_get(v___x_2807_, 1);
v_zetaDeltaFVarIds_2810_ = lean_ctor_get(v___x_2807_, 2);
v_postponed_2811_ = lean_ctor_get(v___x_2807_, 3);
v_diag_2812_ = lean_ctor_get(v___x_2807_, 4);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2814_ = v___x_2807_;
v_isShared_2815_ = v_isSharedCheck_2841_;
goto v_resetjp_2813_;
}
else
{
lean_inc(v_diag_2812_);
lean_inc(v_postponed_2811_);
lean_inc(v_zetaDeltaFVarIds_2810_);
lean_inc(v_cache_2809_);
lean_inc(v_mctx_2808_);
lean_dec(v___x_2807_);
v___x_2814_ = lean_box(0);
v_isShared_2815_ = v_isSharedCheck_2841_;
goto v_resetjp_2813_;
}
v_resetjp_2813_:
{
lean_object* v_depth_2816_; lean_object* v_levelAssignDepth_2817_; lean_object* v_lmvarCounter_2818_; lean_object* v_mvarCounter_2819_; lean_object* v_lDecls_2820_; lean_object* v_decls_2821_; lean_object* v_userNames_2822_; lean_object* v_lAssignment_2823_; lean_object* v_eAssignment_2824_; lean_object* v_dAssignment_2825_; lean_object* v_instanceTypedMVars_2826_; lean_object* v___x_2828_; uint8_t v_isShared_2829_; uint8_t v_isSharedCheck_2840_; 
v_depth_2816_ = lean_ctor_get(v_mctx_2808_, 0);
v_levelAssignDepth_2817_ = lean_ctor_get(v_mctx_2808_, 1);
v_lmvarCounter_2818_ = lean_ctor_get(v_mctx_2808_, 2);
v_mvarCounter_2819_ = lean_ctor_get(v_mctx_2808_, 3);
v_lDecls_2820_ = lean_ctor_get(v_mctx_2808_, 4);
v_decls_2821_ = lean_ctor_get(v_mctx_2808_, 5);
v_userNames_2822_ = lean_ctor_get(v_mctx_2808_, 6);
v_lAssignment_2823_ = lean_ctor_get(v_mctx_2808_, 7);
v_eAssignment_2824_ = lean_ctor_get(v_mctx_2808_, 8);
v_dAssignment_2825_ = lean_ctor_get(v_mctx_2808_, 9);
v_instanceTypedMVars_2826_ = lean_ctor_get(v_mctx_2808_, 10);
v_isSharedCheck_2840_ = !lean_is_exclusive(v_mctx_2808_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2828_ = v_mctx_2808_;
v_isShared_2829_ = v_isSharedCheck_2840_;
goto v_resetjp_2827_;
}
else
{
lean_inc(v_instanceTypedMVars_2826_);
lean_inc(v_dAssignment_2825_);
lean_inc(v_eAssignment_2824_);
lean_inc(v_lAssignment_2823_);
lean_inc(v_userNames_2822_);
lean_inc(v_decls_2821_);
lean_inc(v_lDecls_2820_);
lean_inc(v_mvarCounter_2819_);
lean_inc(v_lmvarCounter_2818_);
lean_inc(v_levelAssignDepth_2817_);
lean_inc(v_depth_2816_);
lean_dec(v_mctx_2808_);
v___x_2828_ = lean_box(0);
v_isShared_2829_ = v_isSharedCheck_2840_;
goto v_resetjp_2827_;
}
v_resetjp_2827_:
{
lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2833_; 
v___x_2830_ = lean_box(0);
v___x_2831_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5___redArg(v_eAssignment_2824_, v_mvarId_2803_, v_val_2804_);
if (v_isShared_2829_ == 0)
{
lean_ctor_set(v___x_2828_, 8, v___x_2831_);
v___x_2833_ = v___x_2828_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_depth_2816_);
lean_ctor_set(v_reuseFailAlloc_2839_, 1, v_levelAssignDepth_2817_);
lean_ctor_set(v_reuseFailAlloc_2839_, 2, v_lmvarCounter_2818_);
lean_ctor_set(v_reuseFailAlloc_2839_, 3, v_mvarCounter_2819_);
lean_ctor_set(v_reuseFailAlloc_2839_, 4, v_lDecls_2820_);
lean_ctor_set(v_reuseFailAlloc_2839_, 5, v_decls_2821_);
lean_ctor_set(v_reuseFailAlloc_2839_, 6, v_userNames_2822_);
lean_ctor_set(v_reuseFailAlloc_2839_, 7, v_lAssignment_2823_);
lean_ctor_set(v_reuseFailAlloc_2839_, 8, v___x_2831_);
lean_ctor_set(v_reuseFailAlloc_2839_, 9, v_dAssignment_2825_);
lean_ctor_set(v_reuseFailAlloc_2839_, 10, v_instanceTypedMVars_2826_);
v___x_2833_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
lean_object* v___x_2835_; 
if (v_isShared_2815_ == 0)
{
lean_ctor_set(v___x_2814_, 0, v___x_2833_);
v___x_2835_ = v___x_2814_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v___x_2833_);
lean_ctor_set(v_reuseFailAlloc_2838_, 1, v_cache_2809_);
lean_ctor_set(v_reuseFailAlloc_2838_, 2, v_zetaDeltaFVarIds_2810_);
lean_ctor_set(v_reuseFailAlloc_2838_, 3, v_postponed_2811_);
lean_ctor_set(v_reuseFailAlloc_2838_, 4, v_diag_2812_);
v___x_2835_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
lean_object* v___x_2836_; lean_object* v___x_2837_; 
v___x_2836_ = lean_st_ref_put(v___y_2805_, v___x_2835_);
v___x_2837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2837_, 0, v___x_2830_);
return v___x_2837_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3___redArg___boxed(lean_object* v_mvarId_2842_, lean_object* v_val_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_){
_start:
{
lean_object* v_res_2846_; 
v_res_2846_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3___redArg(v_mvarId_2842_, v_val_2843_, v___y_2844_);
lean_dec(v___y_2844_);
return v_res_2846_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__2(void){
_start:
{
lean_object* v___x_2850_; lean_object* v___x_2851_; 
v___x_2850_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__1));
v___x_2851_ = l_Lean_stringToMessageData(v___x_2850_);
return v___x_2851_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__4(void){
_start:
{
lean_object* v___x_2853_; lean_object* v___x_2854_; 
v___x_2853_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__3));
v___x_2854_ = l_Lean_stringToMessageData(v___x_2853_);
return v___x_2854_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__7(void){
_start:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2857_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__6));
v___x_2858_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__5));
v___x_2859_ = l_System_FilePath_join(v___x_2858_, v___x_2857_);
return v___x_2859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10(lean_object* v_ctx_2860_, lean_object* v_aig_2861_, lean_object* v_goal_2862_, lean_object* v_unusedHypotheses_2863_, lean_object* v_reflectionResult_2864_, lean_object* v_satExpr_2865_, uint8_t v___x_2866_, lean_object* v___x_2867_, lean_object* v___f_2868_, lean_object* v___x_2869_, lean_object* v___f_2870_, lean_object* v___f_2871_, lean_object* v___x_2872_, lean_object* v___x_2873_, lean_object* v___f_2874_, lean_object* v_a_2875_, lean_object* v_____r_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_){
_start:
{
lean_object* v___y_2891_; lean_object* v___y_2892_; lean_object* v___y_2893_; lean_object* v___y_2894_; lean_object* v___y_2895_; lean_object* v___y_2896_; lean_object* v___y_2897_; lean_object* v___y_2898_; lean_object* v___y_2899_; lean_object* v___y_2900_; lean_object* v___y_2901_; lean_object* v___y_2902_; lean_object* v___y_2934_; lean_object* v___y_2935_; lean_object* v___y_2961_; lean_object* v___y_2962_; lean_object* v___y_2963_; lean_object* v___y_2964_; lean_object* v___y_2965_; lean_object* v___y_2966_; lean_object* v___y_2967_; lean_object* v___y_2968_; lean_object* v___y_2969_; lean_object* v___y_2970_; lean_object* v___y_2971_; lean_object* v___y_2972_; lean_object* v___y_2973_; lean_object* v___y_3022_; lean_object* v___y_3023_; lean_object* v___y_3024_; lean_object* v___y_3025_; lean_object* v___y_3026_; lean_object* v___y_3027_; lean_object* v___y_3028_; lean_object* v___y_3029_; lean_object* v___y_3030_; lean_object* v___y_3031_; lean_object* v___y_3032_; lean_object* v___y_3033_; lean_object* v___y_3034_; uint8_t v___y_3035_; lean_object* v___y_3036_; lean_object* v___y_3037_; lean_object* v___y_3038_; lean_object* v_a_3039_; lean_object* v___y_3049_; lean_object* v___y_3050_; lean_object* v___y_3051_; lean_object* v___y_3052_; lean_object* v___y_3053_; lean_object* v___y_3054_; lean_object* v___y_3055_; lean_object* v___y_3056_; lean_object* v___y_3057_; lean_object* v___y_3058_; lean_object* v___y_3059_; lean_object* v___y_3060_; lean_object* v___y_3061_; uint8_t v___y_3062_; lean_object* v___y_3063_; lean_object* v___y_3064_; lean_object* v___y_3065_; lean_object* v_a_3066_; lean_object* v___y_3079_; lean_object* v___y_3080_; lean_object* v___y_3081_; lean_object* v___y_3082_; lean_object* v___y_3083_; lean_object* v___y_3084_; lean_object* v___y_3085_; lean_object* v___y_3086_; lean_object* v___y_3087_; uint8_t v___y_3088_; uint8_t v___y_3089_; lean_object* v___y_3090_; lean_object* v___y_3091_; lean_object* v___y_3092_; lean_object* v___y_3093_; lean_object* v___y_3094_; uint8_t v___y_3095_; uint8_t v___y_3096_; lean_object* v___y_3097_; lean_object* v___y_3098_; lean_object* v___y_3099_; lean_object* v___y_3100_; lean_object* v_config_3140_; lean_object* v_solver_3141_; lean_object* v_lratPath_3142_; lean_object* v_timeout_3143_; uint8_t v_trimProofs_3144_; uint8_t v_binaryProofs_3145_; uint8_t v_graphviz_3146_; uint8_t v_solverMode_3147_; lean_object* v___y_3149_; lean_object* v___y_3150_; lean_object* v___y_3151_; lean_object* v___y_3152_; lean_object* v___y_3153_; lean_object* v___y_3154_; lean_object* v___y_3155_; lean_object* v___y_3156_; lean_object* v___y_3157_; lean_object* v___y_3158_; lean_object* v___y_3159_; lean_object* v___y_3160_; lean_object* v___y_3161_; lean_object* v___y_3162_; lean_object* v___y_3185_; lean_object* v___y_3186_; lean_object* v___y_3187_; lean_object* v___y_3188_; lean_object* v___y_3189_; lean_object* v___y_3190_; lean_object* v___y_3191_; lean_object* v___y_3192_; lean_object* v___y_3193_; lean_object* v___y_3194_; lean_object* v___y_3195_; lean_object* v___y_3196_; lean_object* v___y_3197_; uint8_t v___y_3198_; lean_object* v___y_3199_; lean_object* v___y_3200_; lean_object* v___y_3201_; lean_object* v_a_3202_; lean_object* v___y_3215_; lean_object* v___y_3216_; lean_object* v___y_3217_; lean_object* v___y_3218_; lean_object* v___y_3219_; lean_object* v___y_3220_; lean_object* v___y_3221_; lean_object* v___y_3222_; lean_object* v___y_3223_; lean_object* v___y_3224_; lean_object* v___y_3225_; lean_object* v___y_3226_; lean_object* v___y_3227_; uint8_t v___y_3228_; lean_object* v___y_3229_; lean_object* v___y_3230_; lean_object* v___y_3231_; lean_object* v_a_3232_; lean_object* v___y_3242_; lean_object* v___y_3243_; lean_object* v___y_3244_; lean_object* v___y_3245_; lean_object* v___y_3246_; lean_object* v___y_3247_; lean_object* v___y_3248_; lean_object* v___y_3249_; lean_object* v___y_3250_; lean_object* v___y_3251_; lean_object* v___y_3252_; uint8_t v___y_3253_; lean_object* v___y_3254_; lean_object* v___y_3255_; lean_object* v___y_3256_; lean_object* v___y_3257_; lean_object* v___y_3314_; lean_object* v___y_3315_; lean_object* v___y_3316_; lean_object* v___y_3317_; lean_object* v___y_3318_; lean_object* v___y_3319_; lean_object* v___y_3320_; lean_object* v___y_3321_; lean_object* v___y_3322_; lean_object* v___y_3323_; lean_object* v___y_3324_; lean_object* v_toCold_3325_; lean_object* v_ref_3326_; lean_object* v___y_3327_; 
v_config_3140_ = lean_ctor_get(v_ctx_2860_, 5);
v_solver_3141_ = lean_ctor_get(v_ctx_2860_, 3);
v_lratPath_3142_ = lean_ctor_get(v_ctx_2860_, 4);
v_timeout_3143_ = lean_ctor_get(v_config_3140_, 0);
v_trimProofs_3144_ = lean_ctor_get_uint8(v_config_3140_, sizeof(void*)*3);
v_binaryProofs_3145_ = lean_ctor_get_uint8(v_config_3140_, sizeof(void*)*3 + 1);
v_graphviz_3146_ = lean_ctor_get_uint8(v_config_3140_, sizeof(void*)*3 + 8);
v_solverMode_3147_ = lean_ctor_get_uint8(v_config_3140_, sizeof(void*)*3 + 10);
if (v_graphviz_3146_ == 0)
{
lean_object* v_toCold_3340_; lean_object* v_ref_3341_; 
lean_dec_ref(v_a_2875_);
v_toCold_3340_ = lean_ctor_get(v___y_2887_, 0);
v_ref_3341_ = lean_ctor_get(v___y_2887_, 2);
v___y_3314_ = v___y_2877_;
v___y_3315_ = v___y_2878_;
v___y_3316_ = v___y_2879_;
v___y_3317_ = v___y_2880_;
v___y_3318_ = v___y_2881_;
v___y_3319_ = v___y_2882_;
v___y_3320_ = v___y_2883_;
v___y_3321_ = v___y_2884_;
v___y_3322_ = v___y_2885_;
v___y_3323_ = v___y_2886_;
v___y_3324_ = v___y_2887_;
v_toCold_3325_ = v_toCold_3340_;
v_ref_3326_ = v_ref_3341_;
v___y_3327_ = v___y_2888_;
goto v___jp_3313_;
}
else
{
lean_object* v_toCold_3342_; lean_object* v_ref_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; 
v_toCold_3342_ = lean_ctor_get(v___y_2887_, 0);
v_ref_3343_ = lean_ctor_get(v___y_2887_, 2);
v___x_3344_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__7, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__7);
v___x_3345_ = l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7(v_a_2875_);
v___x_3346_ = l_IO_FS_writeFile(v___x_3344_, v___x_3345_);
lean_dec_ref(v___x_3345_);
if (lean_obj_tag(v___x_3346_) == 0)
{
lean_dec_ref_known(v___x_3346_, 1);
v___y_3314_ = v___y_2877_;
v___y_3315_ = v___y_2878_;
v___y_3316_ = v___y_2879_;
v___y_3317_ = v___y_2880_;
v___y_3318_ = v___y_2881_;
v___y_3319_ = v___y_2882_;
v___y_3320_ = v___y_2883_;
v___y_3321_ = v___y_2884_;
v___y_3322_ = v___y_2885_;
v___y_3323_ = v___y_2886_;
v___y_3324_ = v___y_2887_;
v_toCold_3325_ = v_toCold_3342_;
v_ref_3326_ = v_ref_3343_;
v___y_3327_ = v___y_2888_;
goto v___jp_3313_;
}
else
{
lean_object* v_a_3347_; lean_object* v___x_3349_; uint8_t v_isShared_3350_; uint8_t v_isSharedCheck_3358_; 
lean_dec_ref(v___f_2874_);
lean_dec_ref(v___x_2873_);
lean_dec_ref(v___x_2872_);
lean_dec_ref(v___f_2871_);
lean_dec_ref(v___f_2870_);
lean_dec_ref(v___f_2868_);
lean_dec_ref(v___x_2867_);
lean_dec_ref(v_satExpr_2865_);
lean_dec_ref(v_reflectionResult_2864_);
lean_dec_ref(v_unusedHypotheses_2863_);
lean_dec(v_goal_2862_);
lean_dec_ref(v_aig_2861_);
lean_dec_ref(v_ctx_2860_);
v_a_3347_ = lean_ctor_get(v___x_3346_, 0);
v_isSharedCheck_3358_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3358_ == 0)
{
v___x_3349_ = v___x_3346_;
v_isShared_3350_ = v_isSharedCheck_3358_;
goto v_resetjp_3348_;
}
else
{
lean_inc(v_a_3347_);
lean_dec(v___x_3346_);
v___x_3349_ = lean_box(0);
v_isShared_3350_ = v_isSharedCheck_3358_;
goto v_resetjp_3348_;
}
v_resetjp_3348_:
{
lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3356_; 
v___x_3351_ = lean_io_error_to_string(v_a_3347_);
v___x_3352_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3352_, 0, v___x_3351_);
v___x_3353_ = l_Lean_MessageData_ofFormat(v___x_3352_);
lean_inc(v_ref_3343_);
v___x_3354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3354_, 0, v_ref_3343_);
lean_ctor_set(v___x_3354_, 1, v___x_3353_);
if (v_isShared_3350_ == 0)
{
lean_ctor_set(v___x_3349_, 0, v___x_3354_);
v___x_3356_ = v___x_3349_;
goto v_reusejp_3355_;
}
else
{
lean_object* v_reuseFailAlloc_3357_; 
v_reuseFailAlloc_3357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3357_, 0, v___x_3354_);
v___x_3356_ = v_reuseFailAlloc_3357_;
goto v_reusejp_3355_;
}
v_reusejp_3355_:
{
return v___x_3356_;
}
}
}
}
v___jp_2890_:
{
lean_object* v___x_2903_; 
lean_inc_ref(v___y_2891_);
v___x_2903_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(v___y_2891_, v_ctx_2860_, v_reflectionResult_2864_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_);
if (lean_obj_tag(v___x_2903_) == 0)
{
lean_object* v_a_2904_; lean_object* v___x_2905_; 
v_a_2904_ = lean_ctor_get(v___x_2903_, 0);
lean_inc(v_a_2904_);
lean_dec_ref_known(v___x_2903_, 1);
v___x_2905_ = l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse(v_satExpr_2865_, v_a_2904_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_);
if (lean_obj_tag(v___x_2905_) == 0)
{
lean_object* v_a_2906_; lean_object* v___x_2907_; lean_object* v___x_2909_; uint8_t v_isShared_2910_; uint8_t v_isSharedCheck_2915_; 
v_a_2906_ = lean_ctor_get(v___x_2905_, 0);
lean_inc(v_a_2906_);
lean_dec_ref_known(v___x_2905_, 1);
v___x_2907_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3___redArg(v_goal_2862_, v_a_2906_, v___y_2900_);
v_isSharedCheck_2915_ = !lean_is_exclusive(v___x_2907_);
if (v_isSharedCheck_2915_ == 0)
{
lean_object* v_unused_2916_; 
v_unused_2916_ = lean_ctor_get(v___x_2907_, 0);
lean_dec(v_unused_2916_);
v___x_2909_ = v___x_2907_;
v_isShared_2910_ = v_isSharedCheck_2915_;
goto v_resetjp_2908_;
}
else
{
lean_dec(v___x_2907_);
v___x_2909_ = lean_box(0);
v_isShared_2910_ = v_isSharedCheck_2915_;
goto v_resetjp_2908_;
}
v_resetjp_2908_:
{
lean_object* v___x_2911_; lean_object* v___x_2913_; 
v___x_2911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2911_, 0, v___y_2891_);
if (v_isShared_2910_ == 0)
{
lean_ctor_set(v___x_2909_, 0, v___x_2911_);
v___x_2913_ = v___x_2909_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v___x_2911_);
v___x_2913_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
return v___x_2913_;
}
}
}
else
{
lean_object* v_a_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_2924_; 
lean_dec_ref(v___y_2891_);
lean_dec(v_goal_2862_);
v_a_2917_ = lean_ctor_get(v___x_2905_, 0);
v_isSharedCheck_2924_ = !lean_is_exclusive(v___x_2905_);
if (v_isSharedCheck_2924_ == 0)
{
v___x_2919_ = v___x_2905_;
v_isShared_2920_ = v_isSharedCheck_2924_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_a_2917_);
lean_dec(v___x_2905_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_2924_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
lean_object* v___x_2922_; 
if (v_isShared_2920_ == 0)
{
v___x_2922_ = v___x_2919_;
goto v_reusejp_2921_;
}
else
{
lean_object* v_reuseFailAlloc_2923_; 
v_reuseFailAlloc_2923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2923_, 0, v_a_2917_);
v___x_2922_ = v_reuseFailAlloc_2923_;
goto v_reusejp_2921_;
}
v_reusejp_2921_:
{
return v___x_2922_;
}
}
}
}
else
{
lean_object* v_a_2925_; lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_2932_; 
lean_dec_ref(v___y_2891_);
lean_dec_ref(v_satExpr_2865_);
lean_dec(v_goal_2862_);
v_a_2925_ = lean_ctor_get(v___x_2903_, 0);
v_isSharedCheck_2932_ = !lean_is_exclusive(v___x_2903_);
if (v_isSharedCheck_2932_ == 0)
{
v___x_2927_ = v___x_2903_;
v_isShared_2928_ = v_isSharedCheck_2932_;
goto v_resetjp_2926_;
}
else
{
lean_inc(v_a_2925_);
lean_dec(v___x_2903_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_2932_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
lean_object* v___x_2930_; 
if (v_isShared_2928_ == 0)
{
v___x_2930_ = v___x_2927_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v_a_2925_);
v___x_2930_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
return v___x_2930_;
}
}
}
}
v___jp_2933_:
{
lean_object* v___x_2936_; 
v___x_2936_ = l_Lean_Meta_Tactic_BVDecide_ReifyM_atomsAssignmentMap___redArg(v___y_2935_);
if (lean_obj_tag(v___x_2936_) == 0)
{
lean_object* v_a_2937_; lean_object* v___x_2939_; uint8_t v_isShared_2940_; uint8_t v_isSharedCheck_2951_; 
v_a_2937_ = lean_ctor_get(v___x_2936_, 0);
v_isSharedCheck_2951_ = !lean_is_exclusive(v___x_2936_);
if (v_isSharedCheck_2951_ == 0)
{
v___x_2939_ = v___x_2936_;
v_isShared_2940_ = v_isSharedCheck_2951_;
goto v_resetjp_2938_;
}
else
{
lean_inc(v_a_2937_);
lean_dec(v___x_2936_);
v___x_2939_ = lean_box(0);
v_isShared_2940_ = v_isSharedCheck_2951_;
goto v_resetjp_2938_;
}
v_resetjp_2938_:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2949_; 
v___x_2941_ = l_Lean_Meta_Tactic_BVDecide_reconstructCounterExample(v_aig_2861_, v___y_2934_, v_a_2937_);
lean_dec(v_a_2937_);
lean_dec_ref(v___y_2934_);
v___x_2942_ = lean_unsigned_to_nat(0u);
v___x_2943_ = lean_array_get_size(v___x_2941_);
v___x_2944_ = l_Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(v___x_2941_, v___x_2942_, v___x_2943_);
lean_dec_ref(v___x_2941_);
v___x_2945_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__0));
v___x_2946_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2946_, 0, v_goal_2862_);
lean_ctor_set(v___x_2946_, 1, v_unusedHypotheses_2863_);
lean_ctor_set(v___x_2946_, 2, v___x_2944_);
lean_ctor_set(v___x_2946_, 3, v___x_2945_);
v___x_2947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2946_);
if (v_isShared_2940_ == 0)
{
lean_ctor_set(v___x_2939_, 0, v___x_2947_);
v___x_2949_ = v___x_2939_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v___x_2947_);
v___x_2949_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2948_;
}
v_reusejp_2948_:
{
return v___x_2949_;
}
}
}
else
{
lean_object* v_a_2952_; lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_2959_; 
lean_dec_ref(v___y_2934_);
lean_dec_ref(v_unusedHypotheses_2863_);
lean_dec(v_goal_2862_);
lean_dec_ref(v_aig_2861_);
v_a_2952_ = lean_ctor_get(v___x_2936_, 0);
v_isSharedCheck_2959_ = !lean_is_exclusive(v___x_2936_);
if (v_isSharedCheck_2959_ == 0)
{
v___x_2954_ = v___x_2936_;
v_isShared_2955_ = v_isSharedCheck_2959_;
goto v_resetjp_2953_;
}
else
{
lean_inc(v_a_2952_);
lean_dec(v___x_2936_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_2959_;
goto v_resetjp_2953_;
}
v_resetjp_2953_:
{
lean_object* v___x_2957_; 
if (v_isShared_2955_ == 0)
{
v___x_2957_ = v___x_2954_;
goto v_reusejp_2956_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2958_, 0, v_a_2952_);
v___x_2957_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2956_;
}
v_reusejp_2956_:
{
return v___x_2957_;
}
}
}
}
v___jp_2960_:
{
if (lean_obj_tag(v___y_2973_) == 0)
{
lean_object* v_a_2974_; 
v_a_2974_ = lean_ctor_get(v___y_2973_, 0);
lean_inc(v_a_2974_);
lean_dec_ref_known(v___y_2973_, 1);
if (lean_obj_tag(v_a_2974_) == 0)
{
lean_object* v_toCold_2975_; lean_object* v_options_2976_; uint8_t v_hasTrace_2977_; 
lean_dec_ref(v_satExpr_2865_);
lean_dec_ref(v_reflectionResult_2864_);
lean_dec_ref(v_ctx_2860_);
v_toCold_2975_ = lean_ctor_get(v___y_2970_, 0);
v_options_2976_ = lean_ctor_get(v_toCold_2975_, 2);
v_hasTrace_2977_ = lean_ctor_get_uint8(v_options_2976_, sizeof(void*)*1);
if (v_hasTrace_2977_ == 0)
{
lean_object* v_a_2978_; 
lean_dec(v___y_2963_);
v_a_2978_ = lean_ctor_get(v_a_2974_, 0);
lean_inc(v_a_2978_);
lean_dec_ref_known(v_a_2974_, 1);
v___y_2934_ = v_a_2978_;
v___y_2935_ = v___y_2965_;
goto v___jp_2933_;
}
else
{
lean_object* v_a_2979_; lean_object* v_inheritedTraceOptions_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; uint8_t v___x_2983_; 
v_a_2979_ = lean_ctor_get(v_a_2974_, 0);
lean_inc(v_a_2979_);
lean_dec_ref_known(v_a_2974_, 1);
v_inheritedTraceOptions_2980_ = lean_ctor_get(v_toCold_2975_, 11);
v___x_2981_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__1));
lean_inc(v___y_2963_);
v___x_2982_ = l_Lean_Name_append(v___x_2981_, v___y_2963_);
v___x_2983_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2980_, v_options_2976_, v___x_2982_);
lean_dec(v___x_2982_);
if (v___x_2983_ == 0)
{
lean_dec(v___y_2963_);
v___y_2934_ = v_a_2979_;
v___y_2935_ = v___y_2965_;
goto v___jp_2933_;
}
else
{
lean_object* v___x_2984_; lean_object* v___x_2985_; 
v___x_2984_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__2, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__2);
v___x_2985_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg(v___y_2963_, v___x_2984_, v___y_2961_, v___y_2966_, v___y_2970_, v___y_2969_);
if (lean_obj_tag(v___x_2985_) == 0)
{
lean_dec_ref_known(v___x_2985_, 1);
v___y_2934_ = v_a_2979_;
v___y_2935_ = v___y_2965_;
goto v___jp_2933_;
}
else
{
lean_object* v_a_2986_; lean_object* v___x_2988_; uint8_t v_isShared_2989_; uint8_t v_isSharedCheck_2993_; 
lean_dec(v_a_2979_);
lean_dec_ref(v_unusedHypotheses_2863_);
lean_dec(v_goal_2862_);
lean_dec_ref(v_aig_2861_);
v_a_2986_ = lean_ctor_get(v___x_2985_, 0);
v_isSharedCheck_2993_ = !lean_is_exclusive(v___x_2985_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2988_ = v___x_2985_;
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
else
{
lean_inc(v_a_2986_);
lean_dec(v___x_2985_);
v___x_2988_ = lean_box(0);
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
v_resetjp_2987_:
{
lean_object* v___x_2991_; 
if (v_isShared_2989_ == 0)
{
v___x_2991_ = v___x_2988_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v_a_2986_);
v___x_2991_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
return v___x_2991_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_2994_; lean_object* v_options_2995_; uint8_t v_hasTrace_2996_; 
lean_dec_ref(v_unusedHypotheses_2863_);
lean_dec_ref(v_aig_2861_);
v_toCold_2994_ = lean_ctor_get(v___y_2970_, 0);
v_options_2995_ = lean_ctor_get(v_toCold_2994_, 2);
v_hasTrace_2996_ = lean_ctor_get_uint8(v_options_2995_, sizeof(void*)*1);
if (v_hasTrace_2996_ == 0)
{
lean_object* v_a_2997_; 
lean_dec(v___y_2963_);
v_a_2997_ = lean_ctor_get(v_a_2974_, 0);
lean_inc(v_a_2997_);
lean_dec_ref_known(v_a_2974_, 1);
v___y_2891_ = v_a_2997_;
v___y_2892_ = v___y_2962_;
v___y_2893_ = v___y_2965_;
v___y_2894_ = v___y_2964_;
v___y_2895_ = v___y_2971_;
v___y_2896_ = v___y_2967_;
v___y_2897_ = v___y_2968_;
v___y_2898_ = v___y_2972_;
v___y_2899_ = v___y_2961_;
v___y_2900_ = v___y_2966_;
v___y_2901_ = v___y_2970_;
v___y_2902_ = v___y_2969_;
goto v___jp_2890_;
}
else
{
lean_object* v_a_2998_; lean_object* v_inheritedTraceOptions_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; uint8_t v___x_3002_; 
v_a_2998_ = lean_ctor_get(v_a_2974_, 0);
lean_inc(v_a_2998_);
lean_dec_ref_known(v_a_2974_, 1);
v_inheritedTraceOptions_2999_ = lean_ctor_get(v_toCold_2994_, 11);
v___x_3000_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__1));
lean_inc(v___y_2963_);
v___x_3001_ = l_Lean_Name_append(v___x_3000_, v___y_2963_);
v___x_3002_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2999_, v_options_2995_, v___x_3001_);
lean_dec(v___x_3001_);
if (v___x_3002_ == 0)
{
lean_dec(v___y_2963_);
v___y_2891_ = v_a_2998_;
v___y_2892_ = v___y_2962_;
v___y_2893_ = v___y_2965_;
v___y_2894_ = v___y_2964_;
v___y_2895_ = v___y_2971_;
v___y_2896_ = v___y_2967_;
v___y_2897_ = v___y_2968_;
v___y_2898_ = v___y_2972_;
v___y_2899_ = v___y_2961_;
v___y_2900_ = v___y_2966_;
v___y_2901_ = v___y_2970_;
v___y_2902_ = v___y_2969_;
goto v___jp_2890_;
}
else
{
lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_3003_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__4, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__4);
v___x_3004_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg(v___y_2963_, v___x_3003_, v___y_2961_, v___y_2966_, v___y_2970_, v___y_2969_);
if (lean_obj_tag(v___x_3004_) == 0)
{
lean_dec_ref_known(v___x_3004_, 1);
v___y_2891_ = v_a_2998_;
v___y_2892_ = v___y_2962_;
v___y_2893_ = v___y_2965_;
v___y_2894_ = v___y_2964_;
v___y_2895_ = v___y_2971_;
v___y_2896_ = v___y_2967_;
v___y_2897_ = v___y_2968_;
v___y_2898_ = v___y_2972_;
v___y_2899_ = v___y_2961_;
v___y_2900_ = v___y_2966_;
v___y_2901_ = v___y_2970_;
v___y_2902_ = v___y_2969_;
goto v___jp_2890_;
}
else
{
lean_object* v_a_3005_; lean_object* v___x_3007_; uint8_t v_isShared_3008_; uint8_t v_isSharedCheck_3012_; 
lean_dec(v_a_2998_);
lean_dec_ref(v_satExpr_2865_);
lean_dec_ref(v_reflectionResult_2864_);
lean_dec(v_goal_2862_);
lean_dec_ref(v_ctx_2860_);
v_a_3005_ = lean_ctor_get(v___x_3004_, 0);
v_isSharedCheck_3012_ = !lean_is_exclusive(v___x_3004_);
if (v_isSharedCheck_3012_ == 0)
{
v___x_3007_ = v___x_3004_;
v_isShared_3008_ = v_isSharedCheck_3012_;
goto v_resetjp_3006_;
}
else
{
lean_inc(v_a_3005_);
lean_dec(v___x_3004_);
v___x_3007_ = lean_box(0);
v_isShared_3008_ = v_isSharedCheck_3012_;
goto v_resetjp_3006_;
}
v_resetjp_3006_:
{
lean_object* v___x_3010_; 
if (v_isShared_3008_ == 0)
{
v___x_3010_ = v___x_3007_;
goto v_reusejp_3009_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v_a_3005_);
v___x_3010_ = v_reuseFailAlloc_3011_;
goto v_reusejp_3009_;
}
v_reusejp_3009_:
{
return v___x_3010_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3013_; lean_object* v___x_3015_; uint8_t v_isShared_3016_; uint8_t v_isSharedCheck_3020_; 
lean_dec(v___y_2963_);
lean_dec_ref(v_satExpr_2865_);
lean_dec_ref(v_reflectionResult_2864_);
lean_dec_ref(v_unusedHypotheses_2863_);
lean_dec(v_goal_2862_);
lean_dec_ref(v_aig_2861_);
lean_dec_ref(v_ctx_2860_);
v_a_3013_ = lean_ctor_get(v___y_2973_, 0);
v_isSharedCheck_3020_ = !lean_is_exclusive(v___y_2973_);
if (v_isSharedCheck_3020_ == 0)
{
v___x_3015_ = v___y_2973_;
v_isShared_3016_ = v_isSharedCheck_3020_;
goto v_resetjp_3014_;
}
else
{
lean_inc(v_a_3013_);
lean_dec(v___y_2973_);
v___x_3015_ = lean_box(0);
v_isShared_3016_ = v_isSharedCheck_3020_;
goto v_resetjp_3014_;
}
v_resetjp_3014_:
{
lean_object* v___x_3018_; 
if (v_isShared_3016_ == 0)
{
v___x_3018_ = v___x_3015_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v_a_3013_);
v___x_3018_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
return v___x_3018_;
}
}
}
}
v___jp_3021_:
{
lean_object* v___x_3040_; double v___x_3041_; double v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; 
v___x_3040_ = lean_io_get_num_heartbeats();
v___x_3041_ = lean_float_of_nat(v___y_3025_);
v___x_3042_ = lean_float_of_nat(v___x_3040_);
v___x_3043_ = lean_box_float(v___x_3041_);
v___x_3044_ = lean_box_float(v___x_3042_);
v___x_3045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3045_, 0, v___x_3043_);
lean_ctor_set(v___x_3045_, 1, v___x_3044_);
v___x_3046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3046_, 0, v_a_3039_);
lean_ctor_set(v___x_3046_, 1, v___x_3045_);
lean_inc(v___y_3026_);
v___x_3047_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5(v___y_3026_, v___x_2866_, v___x_2867_, v___y_3031_, v___y_3035_, v___y_3023_, v___f_2868_, v___x_3046_, v___y_3037_, v___y_3024_, v___y_3028_, v___y_3027_, v___y_3036_, v___y_3030_, v___y_3033_, v___y_3038_, v___y_3022_, v___y_3029_, v___y_3034_, v___y_3032_);
v___y_2961_ = v___y_3022_;
v___y_2962_ = v___y_3024_;
v___y_2963_ = v___y_3026_;
v___y_2964_ = v___y_3027_;
v___y_2965_ = v___y_3028_;
v___y_2966_ = v___y_3029_;
v___y_2967_ = v___y_3030_;
v___y_2968_ = v___y_3033_;
v___y_2969_ = v___y_3032_;
v___y_2970_ = v___y_3034_;
v___y_2971_ = v___y_3036_;
v___y_2972_ = v___y_3038_;
v___y_2973_ = v___x_3047_;
goto v___jp_2960_;
}
v___jp_3048_:
{
lean_object* v___x_3067_; double v___x_3068_; double v___x_3069_; double v___x_3070_; double v___x_3071_; double v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; 
v___x_3067_ = lean_io_mono_nanos_now();
v___x_3068_ = lean_float_of_nat(v___y_3056_);
v___x_3069_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_3070_ = lean_float_div(v___x_3068_, v___x_3069_);
v___x_3071_ = lean_float_of_nat(v___x_3067_);
v___x_3072_ = lean_float_div(v___x_3071_, v___x_3069_);
v___x_3073_ = lean_box_float(v___x_3070_);
v___x_3074_ = lean_box_float(v___x_3072_);
v___x_3075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3075_, 0, v___x_3073_);
lean_ctor_set(v___x_3075_, 1, v___x_3074_);
v___x_3076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3076_, 0, v_a_3066_);
lean_ctor_set(v___x_3076_, 1, v___x_3075_);
lean_inc(v___y_3052_);
v___x_3077_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5(v___y_3052_, v___x_2866_, v___x_2867_, v___y_3058_, v___y_3062_, v___y_3050_, v___f_2868_, v___x_3076_, v___y_3064_, v___y_3051_, v___y_3054_, v___y_3053_, v___y_3063_, v___y_3057_, v___y_3060_, v___y_3065_, v___y_3049_, v___y_3055_, v___y_3061_, v___y_3059_);
v___y_2961_ = v___y_3049_;
v___y_2962_ = v___y_3051_;
v___y_2963_ = v___y_3052_;
v___y_2964_ = v___y_3053_;
v___y_2965_ = v___y_3054_;
v___y_2966_ = v___y_3055_;
v___y_2967_ = v___y_3057_;
v___y_2968_ = v___y_3060_;
v___y_2969_ = v___y_3059_;
v___y_2970_ = v___y_3061_;
v___y_2971_ = v___y_3063_;
v___y_2972_ = v___y_3065_;
v___y_2973_ = v___x_3077_;
goto v___jp_2960_;
}
v___jp_3078_:
{
lean_object* v___x_3101_; lean_object* v_a_3102_; uint8_t v___x_3103_; 
v___x_3101_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___redArg(v___y_3094_);
v_a_3102_ = lean_ctor_get(v___x_3101_, 0);
lean_inc(v_a_3102_);
lean_dec_ref(v___x_3101_);
v___x_3103_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v___y_3092_, v___x_2869_);
if (v___x_3103_ == 0)
{
lean_object* v___x_3104_; lean_object* v___x_3105_; 
v___x_3104_ = lean_io_mono_nanos_now();
v___x_3105_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_3085_, v___y_3079_, v___y_3091_, v___y_3089_, v___y_3081_, v___y_3088_, v___y_3095_, v___y_3098_, v___y_3094_);
if (lean_obj_tag(v___x_3105_) == 0)
{
lean_object* v_a_3106_; lean_object* v___x_3108_; uint8_t v_isShared_3109_; uint8_t v_isSharedCheck_3113_; 
v_a_3106_ = lean_ctor_get(v___x_3105_, 0);
v_isSharedCheck_3113_ = !lean_is_exclusive(v___x_3105_);
if (v_isSharedCheck_3113_ == 0)
{
v___x_3108_ = v___x_3105_;
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
else
{
lean_inc(v_a_3106_);
lean_dec(v___x_3105_);
v___x_3108_ = lean_box(0);
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
v_resetjp_3107_:
{
lean_object* v___x_3111_; 
if (v_isShared_3109_ == 0)
{
lean_ctor_set_tag(v___x_3108_, 1);
v___x_3111_ = v___x_3108_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v_a_3106_);
v___x_3111_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3110_;
}
v_reusejp_3110_:
{
v___y_3049_ = v___y_3080_;
v___y_3050_ = v_a_3102_;
v___y_3051_ = v___y_3082_;
v___y_3052_ = v___y_3083_;
v___y_3053_ = v___y_3084_;
v___y_3054_ = v___y_3086_;
v___y_3055_ = v___y_3087_;
v___y_3056_ = v___x_3104_;
v___y_3057_ = v___y_3090_;
v___y_3058_ = v___y_3092_;
v___y_3059_ = v___y_3094_;
v___y_3060_ = v___y_3093_;
v___y_3061_ = v___y_3098_;
v___y_3062_ = v___y_3096_;
v___y_3063_ = v___y_3097_;
v___y_3064_ = v___y_3099_;
v___y_3065_ = v___y_3100_;
v_a_3066_ = v___x_3111_;
goto v___jp_3048_;
}
}
}
else
{
lean_object* v_a_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3121_; 
v_a_3114_ = lean_ctor_get(v___x_3105_, 0);
v_isSharedCheck_3121_ = !lean_is_exclusive(v___x_3105_);
if (v_isSharedCheck_3121_ == 0)
{
v___x_3116_ = v___x_3105_;
v_isShared_3117_ = v_isSharedCheck_3121_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_a_3114_);
lean_dec(v___x_3105_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3121_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
lean_object* v___x_3119_; 
if (v_isShared_3117_ == 0)
{
lean_ctor_set_tag(v___x_3116_, 0);
v___x_3119_ = v___x_3116_;
goto v_reusejp_3118_;
}
else
{
lean_object* v_reuseFailAlloc_3120_; 
v_reuseFailAlloc_3120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3120_, 0, v_a_3114_);
v___x_3119_ = v_reuseFailAlloc_3120_;
goto v_reusejp_3118_;
}
v_reusejp_3118_:
{
v___y_3049_ = v___y_3080_;
v___y_3050_ = v_a_3102_;
v___y_3051_ = v___y_3082_;
v___y_3052_ = v___y_3083_;
v___y_3053_ = v___y_3084_;
v___y_3054_ = v___y_3086_;
v___y_3055_ = v___y_3087_;
v___y_3056_ = v___x_3104_;
v___y_3057_ = v___y_3090_;
v___y_3058_ = v___y_3092_;
v___y_3059_ = v___y_3094_;
v___y_3060_ = v___y_3093_;
v___y_3061_ = v___y_3098_;
v___y_3062_ = v___y_3096_;
v___y_3063_ = v___y_3097_;
v___y_3064_ = v___y_3099_;
v___y_3065_ = v___y_3100_;
v_a_3066_ = v___x_3119_;
goto v___jp_3048_;
}
}
}
}
else
{
lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3122_ = lean_io_get_num_heartbeats();
v___x_3123_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_3085_, v___y_3079_, v___y_3091_, v___y_3089_, v___y_3081_, v___y_3088_, v___y_3095_, v___y_3098_, v___y_3094_);
if (lean_obj_tag(v___x_3123_) == 0)
{
lean_object* v_a_3124_; lean_object* v___x_3126_; uint8_t v_isShared_3127_; uint8_t v_isSharedCheck_3131_; 
v_a_3124_ = lean_ctor_get(v___x_3123_, 0);
v_isSharedCheck_3131_ = !lean_is_exclusive(v___x_3123_);
if (v_isSharedCheck_3131_ == 0)
{
v___x_3126_ = v___x_3123_;
v_isShared_3127_ = v_isSharedCheck_3131_;
goto v_resetjp_3125_;
}
else
{
lean_inc(v_a_3124_);
lean_dec(v___x_3123_);
v___x_3126_ = lean_box(0);
v_isShared_3127_ = v_isSharedCheck_3131_;
goto v_resetjp_3125_;
}
v_resetjp_3125_:
{
lean_object* v___x_3129_; 
if (v_isShared_3127_ == 0)
{
lean_ctor_set_tag(v___x_3126_, 1);
v___x_3129_ = v___x_3126_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v_a_3124_);
v___x_3129_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
v___y_3022_ = v___y_3080_;
v___y_3023_ = v_a_3102_;
v___y_3024_ = v___y_3082_;
v___y_3025_ = v___x_3122_;
v___y_3026_ = v___y_3083_;
v___y_3027_ = v___y_3084_;
v___y_3028_ = v___y_3086_;
v___y_3029_ = v___y_3087_;
v___y_3030_ = v___y_3090_;
v___y_3031_ = v___y_3092_;
v___y_3032_ = v___y_3094_;
v___y_3033_ = v___y_3093_;
v___y_3034_ = v___y_3098_;
v___y_3035_ = v___y_3096_;
v___y_3036_ = v___y_3097_;
v___y_3037_ = v___y_3099_;
v___y_3038_ = v___y_3100_;
v_a_3039_ = v___x_3129_;
goto v___jp_3021_;
}
}
}
else
{
lean_object* v_a_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3139_; 
v_a_3132_ = lean_ctor_get(v___x_3123_, 0);
v_isSharedCheck_3139_ = !lean_is_exclusive(v___x_3123_);
if (v_isSharedCheck_3139_ == 0)
{
v___x_3134_ = v___x_3123_;
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_a_3132_);
lean_dec(v___x_3123_);
v___x_3134_ = lean_box(0);
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
v_resetjp_3133_:
{
lean_object* v___x_3137_; 
if (v_isShared_3135_ == 0)
{
lean_ctor_set_tag(v___x_3134_, 0);
v___x_3137_ = v___x_3134_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v_a_3132_);
v___x_3137_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
v___y_3022_ = v___y_3080_;
v___y_3023_ = v_a_3102_;
v___y_3024_ = v___y_3082_;
v___y_3025_ = v___x_3122_;
v___y_3026_ = v___y_3083_;
v___y_3027_ = v___y_3084_;
v___y_3028_ = v___y_3086_;
v___y_3029_ = v___y_3087_;
v___y_3030_ = v___y_3090_;
v___y_3031_ = v___y_3092_;
v___y_3032_ = v___y_3094_;
v___y_3033_ = v___y_3093_;
v___y_3034_ = v___y_3098_;
v___y_3035_ = v___y_3096_;
v___y_3036_ = v___y_3097_;
v___y_3037_ = v___y_3099_;
v___y_3038_ = v___y_3100_;
v_a_3039_ = v___x_3137_;
goto v___jp_3021_;
}
}
}
}
}
v___jp_3148_:
{
if (lean_obj_tag(v___y_3162_) == 0)
{
lean_object* v_toCold_3163_; lean_object* v_options_3164_; uint8_t v_hasTrace_3165_; 
v_toCold_3163_ = lean_ctor_get(v___y_3158_, 0);
v_options_3164_ = lean_ctor_get(v_toCold_3163_, 2);
v_hasTrace_3165_ = lean_ctor_get_uint8(v_options_3164_, sizeof(void*)*1);
if (v_hasTrace_3165_ == 0)
{
lean_object* v_a_3166_; lean_object* v___x_3167_; 
lean_dec_ref(v___f_2868_);
lean_dec_ref(v___x_2867_);
v_a_3166_ = lean_ctor_get(v___y_3162_, 0);
lean_inc(v_a_3166_);
lean_dec_ref_known(v___y_3162_, 1);
lean_inc(v_timeout_3143_);
lean_inc_ref(v_lratPath_3142_);
lean_inc_ref(v_solver_3141_);
v___x_3167_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_a_3166_, v_solver_3141_, v_lratPath_3142_, v_trimProofs_3144_, v_timeout_3143_, v_binaryProofs_3145_, v_solverMode_3147_, v___y_3158_, v___y_3156_);
v___y_2961_ = v___y_3149_;
v___y_2962_ = v___y_3150_;
v___y_2963_ = v___y_3151_;
v___y_2964_ = v___y_3152_;
v___y_2965_ = v___y_3153_;
v___y_2966_ = v___y_3154_;
v___y_2967_ = v___y_3155_;
v___y_2968_ = v___y_3157_;
v___y_2969_ = v___y_3156_;
v___y_2970_ = v___y_3158_;
v___y_2971_ = v___y_3159_;
v___y_2972_ = v___y_3161_;
v___y_2973_ = v___x_3167_;
goto v___jp_2960_;
}
else
{
lean_object* v_a_3168_; lean_object* v_inheritedTraceOptions_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; uint8_t v___x_3172_; 
v_a_3168_ = lean_ctor_get(v___y_3162_, 0);
lean_inc(v_a_3168_);
lean_dec_ref_known(v___y_3162_, 1);
v_inheritedTraceOptions_3169_ = lean_ctor_get(v_toCold_3163_, 11);
v___x_3170_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__1));
lean_inc(v___y_3151_);
v___x_3171_ = l_Lean_Name_append(v___x_3170_, v___y_3151_);
v___x_3172_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3169_, v_options_3164_, v___x_3171_);
lean_dec(v___x_3171_);
if (v___x_3172_ == 0)
{
lean_object* v___x_3173_; uint8_t v___x_3174_; 
v___x_3173_ = l_Lean_trace_profiler;
v___x_3174_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_options_3164_, v___x_3173_);
if (v___x_3174_ == 0)
{
lean_object* v___x_3175_; 
lean_dec_ref(v___f_2868_);
lean_dec_ref(v___x_2867_);
lean_inc(v_timeout_3143_);
lean_inc_ref(v_lratPath_3142_);
lean_inc_ref(v_solver_3141_);
v___x_3175_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_a_3168_, v_solver_3141_, v_lratPath_3142_, v_trimProofs_3144_, v_timeout_3143_, v_binaryProofs_3145_, v_solverMode_3147_, v___y_3158_, v___y_3156_);
v___y_2961_ = v___y_3149_;
v___y_2962_ = v___y_3150_;
v___y_2963_ = v___y_3151_;
v___y_2964_ = v___y_3152_;
v___y_2965_ = v___y_3153_;
v___y_2966_ = v___y_3154_;
v___y_2967_ = v___y_3155_;
v___y_2968_ = v___y_3157_;
v___y_2969_ = v___y_3156_;
v___y_2970_ = v___y_3158_;
v___y_2971_ = v___y_3159_;
v___y_2972_ = v___y_3161_;
v___y_2973_ = v___x_3175_;
goto v___jp_2960_;
}
else
{
lean_inc_ref(v_lratPath_3142_);
lean_inc(v_timeout_3143_);
lean_inc_ref(v_solver_3141_);
v___y_3079_ = v_solver_3141_;
v___y_3080_ = v___y_3149_;
v___y_3081_ = v_timeout_3143_;
v___y_3082_ = v___y_3150_;
v___y_3083_ = v___y_3151_;
v___y_3084_ = v___y_3152_;
v___y_3085_ = v_a_3168_;
v___y_3086_ = v___y_3153_;
v___y_3087_ = v___y_3154_;
v___y_3088_ = v_binaryProofs_3145_;
v___y_3089_ = v_trimProofs_3144_;
v___y_3090_ = v___y_3155_;
v___y_3091_ = v_lratPath_3142_;
v___y_3092_ = v_options_3164_;
v___y_3093_ = v___y_3157_;
v___y_3094_ = v___y_3156_;
v___y_3095_ = v_solverMode_3147_;
v___y_3096_ = v___x_3172_;
v___y_3097_ = v___y_3159_;
v___y_3098_ = v___y_3158_;
v___y_3099_ = v___y_3160_;
v___y_3100_ = v___y_3161_;
goto v___jp_3078_;
}
}
else
{
lean_inc_ref(v_lratPath_3142_);
lean_inc(v_timeout_3143_);
lean_inc_ref(v_solver_3141_);
v___y_3079_ = v_solver_3141_;
v___y_3080_ = v___y_3149_;
v___y_3081_ = v_timeout_3143_;
v___y_3082_ = v___y_3150_;
v___y_3083_ = v___y_3151_;
v___y_3084_ = v___y_3152_;
v___y_3085_ = v_a_3168_;
v___y_3086_ = v___y_3153_;
v___y_3087_ = v___y_3154_;
v___y_3088_ = v_binaryProofs_3145_;
v___y_3089_ = v_trimProofs_3144_;
v___y_3090_ = v___y_3155_;
v___y_3091_ = v_lratPath_3142_;
v___y_3092_ = v_options_3164_;
v___y_3093_ = v___y_3157_;
v___y_3094_ = v___y_3156_;
v___y_3095_ = v_solverMode_3147_;
v___y_3096_ = v___x_3172_;
v___y_3097_ = v___y_3159_;
v___y_3098_ = v___y_3158_;
v___y_3099_ = v___y_3160_;
v___y_3100_ = v___y_3161_;
goto v___jp_3078_;
}
}
}
else
{
lean_object* v_a_3176_; lean_object* v___x_3178_; uint8_t v_isShared_3179_; uint8_t v_isSharedCheck_3183_; 
lean_dec(v___y_3151_);
lean_dec_ref(v___f_2868_);
lean_dec_ref(v___x_2867_);
lean_dec_ref(v_satExpr_2865_);
lean_dec_ref(v_reflectionResult_2864_);
lean_dec_ref(v_unusedHypotheses_2863_);
lean_dec(v_goal_2862_);
lean_dec_ref(v_aig_2861_);
lean_dec_ref(v_ctx_2860_);
v_a_3176_ = lean_ctor_get(v___y_3162_, 0);
v_isSharedCheck_3183_ = !lean_is_exclusive(v___y_3162_);
if (v_isSharedCheck_3183_ == 0)
{
v___x_3178_ = v___y_3162_;
v_isShared_3179_ = v_isSharedCheck_3183_;
goto v_resetjp_3177_;
}
else
{
lean_inc(v_a_3176_);
lean_dec(v___y_3162_);
v___x_3178_ = lean_box(0);
v_isShared_3179_ = v_isSharedCheck_3183_;
goto v_resetjp_3177_;
}
v_resetjp_3177_:
{
lean_object* v___x_3181_; 
if (v_isShared_3179_ == 0)
{
v___x_3181_ = v___x_3178_;
goto v_reusejp_3180_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v_a_3176_);
v___x_3181_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3180_;
}
v_reusejp_3180_:
{
return v___x_3181_;
}
}
}
}
v___jp_3184_:
{
lean_object* v___x_3203_; double v___x_3204_; double v___x_3205_; double v___x_3206_; double v___x_3207_; double v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; 
v___x_3203_ = lean_io_mono_nanos_now();
v___x_3204_ = lean_float_of_nat(v___y_3188_);
v___x_3205_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_3206_ = lean_float_div(v___x_3204_, v___x_3205_);
v___x_3207_ = lean_float_of_nat(v___x_3203_);
v___x_3208_ = lean_float_div(v___x_3207_, v___x_3205_);
v___x_3209_ = lean_box_float(v___x_3206_);
v___x_3210_ = lean_box_float(v___x_3208_);
v___x_3211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3211_, 0, v___x_3209_);
lean_ctor_set(v___x_3211_, 1, v___x_3210_);
v___x_3212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3212_, 0, v_a_3202_);
lean_ctor_set(v___x_3212_, 1, v___x_3211_);
lean_inc_ref(v___x_2867_);
lean_inc(v___y_3190_);
v___x_3213_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v___y_3190_, v___x_2866_, v___x_2867_, v___y_3187_, v___y_3198_, v___y_3185_, v___f_2870_, v___x_3212_, v___y_3200_, v___y_3189_, v___y_3192_, v___y_3191_, v___y_3199_, v___y_3194_, v___y_3196_, v___y_3201_, v___y_3186_, v___y_3193_, v___y_3197_, v___y_3195_);
v___y_3149_ = v___y_3186_;
v___y_3150_ = v___y_3189_;
v___y_3151_ = v___y_3190_;
v___y_3152_ = v___y_3191_;
v___y_3153_ = v___y_3192_;
v___y_3154_ = v___y_3193_;
v___y_3155_ = v___y_3194_;
v___y_3156_ = v___y_3195_;
v___y_3157_ = v___y_3196_;
v___y_3158_ = v___y_3197_;
v___y_3159_ = v___y_3199_;
v___y_3160_ = v___y_3200_;
v___y_3161_ = v___y_3201_;
v___y_3162_ = v___x_3213_;
goto v___jp_3148_;
}
v___jp_3214_:
{
lean_object* v___x_3233_; double v___x_3234_; double v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; 
v___x_3233_ = lean_io_get_num_heartbeats();
v___x_3234_ = lean_float_of_nat(v___y_3221_);
v___x_3235_ = lean_float_of_nat(v___x_3233_);
v___x_3236_ = lean_box_float(v___x_3234_);
v___x_3237_ = lean_box_float(v___x_3235_);
v___x_3238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3238_, 0, v___x_3236_);
lean_ctor_set(v___x_3238_, 1, v___x_3237_);
v___x_3239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3239_, 0, v_a_3232_);
lean_ctor_set(v___x_3239_, 1, v___x_3238_);
lean_inc_ref(v___x_2867_);
lean_inc(v___y_3219_);
v___x_3240_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v___y_3219_, v___x_2866_, v___x_2867_, v___y_3217_, v___y_3228_, v___y_3215_, v___f_2870_, v___x_3239_, v___y_3230_, v___y_3218_, v___y_3222_, v___y_3220_, v___y_3229_, v___y_3224_, v___y_3226_, v___y_3231_, v___y_3216_, v___y_3223_, v___y_3227_, v___y_3225_);
v___y_3149_ = v___y_3216_;
v___y_3150_ = v___y_3218_;
v___y_3151_ = v___y_3219_;
v___y_3152_ = v___y_3220_;
v___y_3153_ = v___y_3222_;
v___y_3154_ = v___y_3223_;
v___y_3155_ = v___y_3224_;
v___y_3156_ = v___y_3225_;
v___y_3157_ = v___y_3226_;
v___y_3158_ = v___y_3227_;
v___y_3159_ = v___y_3229_;
v___y_3160_ = v___y_3230_;
v___y_3161_ = v___y_3231_;
v___y_3162_ = v___x_3240_;
goto v___jp_3148_;
}
v___jp_3241_:
{
lean_object* v___x_3258_; lean_object* v_a_3259_; lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3312_; 
v___x_3258_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___redArg(v___y_3252_);
v_a_3259_ = lean_ctor_get(v___x_3258_, 0);
v_isSharedCheck_3312_ = !lean_is_exclusive(v___x_3258_);
if (v_isSharedCheck_3312_ == 0)
{
v___x_3261_ = v___x_3258_;
v_isShared_3262_ = v_isSharedCheck_3312_;
goto v_resetjp_3260_;
}
else
{
lean_inc(v_a_3259_);
lean_dec(v___x_3258_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3312_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
uint8_t v___x_3263_; 
v___x_3263_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v___y_3243_, v___x_2869_);
if (v___x_3263_ == 0)
{
lean_object* v___x_3264_; lean_object* v___x_3265_; 
v___x_3264_ = lean_io_mono_nanos_now();
v___x_3265_ = l_IO_lazyPure___redArg(v___f_2871_);
if (lean_obj_tag(v___x_3265_) == 0)
{
lean_object* v_a_3266_; lean_object* v___x_3268_; uint8_t v_isShared_3269_; uint8_t v_isSharedCheck_3273_; 
lean_del_object(v___x_3261_);
v_a_3266_ = lean_ctor_get(v___x_3265_, 0);
v_isSharedCheck_3273_ = !lean_is_exclusive(v___x_3265_);
if (v_isSharedCheck_3273_ == 0)
{
v___x_3268_ = v___x_3265_;
v_isShared_3269_ = v_isSharedCheck_3273_;
goto v_resetjp_3267_;
}
else
{
lean_inc(v_a_3266_);
lean_dec(v___x_3265_);
v___x_3268_ = lean_box(0);
v_isShared_3269_ = v_isSharedCheck_3273_;
goto v_resetjp_3267_;
}
v_resetjp_3267_:
{
lean_object* v___x_3271_; 
if (v_isShared_3269_ == 0)
{
lean_ctor_set_tag(v___x_3268_, 1);
v___x_3271_ = v___x_3268_;
goto v_reusejp_3270_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v_a_3266_);
v___x_3271_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3270_;
}
v_reusejp_3270_:
{
v___y_3185_ = v_a_3259_;
v___y_3186_ = v___y_3242_;
v___y_3187_ = v___y_3243_;
v___y_3188_ = v___x_3264_;
v___y_3189_ = v___y_3244_;
v___y_3190_ = v___y_3245_;
v___y_3191_ = v___y_3246_;
v___y_3192_ = v___y_3247_;
v___y_3193_ = v___y_3248_;
v___y_3194_ = v___y_3249_;
v___y_3195_ = v___y_3252_;
v___y_3196_ = v___y_3251_;
v___y_3197_ = v___y_3255_;
v___y_3198_ = v___y_3253_;
v___y_3199_ = v___y_3254_;
v___y_3200_ = v___y_3256_;
v___y_3201_ = v___y_3257_;
v_a_3202_ = v___x_3271_;
goto v___jp_3184_;
}
}
}
else
{
lean_object* v_a_3274_; lean_object* v___x_3276_; uint8_t v_isShared_3277_; uint8_t v_isSharedCheck_3287_; 
v_a_3274_ = lean_ctor_get(v___x_3265_, 0);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3265_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3276_ = v___x_3265_;
v_isShared_3277_ = v_isSharedCheck_3287_;
goto v_resetjp_3275_;
}
else
{
lean_inc(v_a_3274_);
lean_dec(v___x_3265_);
v___x_3276_ = lean_box(0);
v_isShared_3277_ = v_isSharedCheck_3287_;
goto v_resetjp_3275_;
}
v_resetjp_3275_:
{
lean_object* v___x_3278_; lean_object* v___x_3280_; 
v___x_3278_ = lean_io_error_to_string(v_a_3274_);
if (v_isShared_3277_ == 0)
{
lean_ctor_set_tag(v___x_3276_, 3);
lean_ctor_set(v___x_3276_, 0, v___x_3278_);
v___x_3280_ = v___x_3276_;
goto v_reusejp_3279_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v___x_3278_);
v___x_3280_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3279_;
}
v_reusejp_3279_:
{
lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3284_; 
v___x_3281_ = l_Lean_MessageData_ofFormat(v___x_3280_);
lean_inc(v___y_3250_);
v___x_3282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3282_, 0, v___y_3250_);
lean_ctor_set(v___x_3282_, 1, v___x_3281_);
if (v_isShared_3262_ == 0)
{
lean_ctor_set(v___x_3261_, 0, v___x_3282_);
v___x_3284_ = v___x_3261_;
goto v_reusejp_3283_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v___x_3282_);
v___x_3284_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3283_;
}
v_reusejp_3283_:
{
v___y_3185_ = v_a_3259_;
v___y_3186_ = v___y_3242_;
v___y_3187_ = v___y_3243_;
v___y_3188_ = v___x_3264_;
v___y_3189_ = v___y_3244_;
v___y_3190_ = v___y_3245_;
v___y_3191_ = v___y_3246_;
v___y_3192_ = v___y_3247_;
v___y_3193_ = v___y_3248_;
v___y_3194_ = v___y_3249_;
v___y_3195_ = v___y_3252_;
v___y_3196_ = v___y_3251_;
v___y_3197_ = v___y_3255_;
v___y_3198_ = v___y_3253_;
v___y_3199_ = v___y_3254_;
v___y_3200_ = v___y_3256_;
v___y_3201_ = v___y_3257_;
v_a_3202_ = v___x_3284_;
goto v___jp_3184_;
}
}
}
}
}
else
{
lean_object* v___x_3288_; lean_object* v___x_3289_; 
v___x_3288_ = lean_io_get_num_heartbeats();
v___x_3289_ = l_IO_lazyPure___redArg(v___f_2871_);
if (lean_obj_tag(v___x_3289_) == 0)
{
lean_object* v_a_3290_; lean_object* v___x_3292_; uint8_t v_isShared_3293_; uint8_t v_isSharedCheck_3297_; 
lean_del_object(v___x_3261_);
v_a_3290_ = lean_ctor_get(v___x_3289_, 0);
v_isSharedCheck_3297_ = !lean_is_exclusive(v___x_3289_);
if (v_isSharedCheck_3297_ == 0)
{
v___x_3292_ = v___x_3289_;
v_isShared_3293_ = v_isSharedCheck_3297_;
goto v_resetjp_3291_;
}
else
{
lean_inc(v_a_3290_);
lean_dec(v___x_3289_);
v___x_3292_ = lean_box(0);
v_isShared_3293_ = v_isSharedCheck_3297_;
goto v_resetjp_3291_;
}
v_resetjp_3291_:
{
lean_object* v___x_3295_; 
if (v_isShared_3293_ == 0)
{
lean_ctor_set_tag(v___x_3292_, 1);
v___x_3295_ = v___x_3292_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v_a_3290_);
v___x_3295_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
v___y_3215_ = v_a_3259_;
v___y_3216_ = v___y_3242_;
v___y_3217_ = v___y_3243_;
v___y_3218_ = v___y_3244_;
v___y_3219_ = v___y_3245_;
v___y_3220_ = v___y_3246_;
v___y_3221_ = v___x_3288_;
v___y_3222_ = v___y_3247_;
v___y_3223_ = v___y_3248_;
v___y_3224_ = v___y_3249_;
v___y_3225_ = v___y_3252_;
v___y_3226_ = v___y_3251_;
v___y_3227_ = v___y_3255_;
v___y_3228_ = v___y_3253_;
v___y_3229_ = v___y_3254_;
v___y_3230_ = v___y_3256_;
v___y_3231_ = v___y_3257_;
v_a_3232_ = v___x_3295_;
goto v___jp_3214_;
}
}
}
else
{
lean_object* v_a_3298_; lean_object* v___x_3300_; uint8_t v_isShared_3301_; uint8_t v_isSharedCheck_3311_; 
v_a_3298_ = lean_ctor_get(v___x_3289_, 0);
v_isSharedCheck_3311_ = !lean_is_exclusive(v___x_3289_);
if (v_isSharedCheck_3311_ == 0)
{
v___x_3300_ = v___x_3289_;
v_isShared_3301_ = v_isSharedCheck_3311_;
goto v_resetjp_3299_;
}
else
{
lean_inc(v_a_3298_);
lean_dec(v___x_3289_);
v___x_3300_ = lean_box(0);
v_isShared_3301_ = v_isSharedCheck_3311_;
goto v_resetjp_3299_;
}
v_resetjp_3299_:
{
lean_object* v___x_3302_; lean_object* v___x_3304_; 
v___x_3302_ = lean_io_error_to_string(v_a_3298_);
if (v_isShared_3301_ == 0)
{
lean_ctor_set_tag(v___x_3300_, 3);
lean_ctor_set(v___x_3300_, 0, v___x_3302_);
v___x_3304_ = v___x_3300_;
goto v_reusejp_3303_;
}
else
{
lean_object* v_reuseFailAlloc_3310_; 
v_reuseFailAlloc_3310_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3310_, 0, v___x_3302_);
v___x_3304_ = v_reuseFailAlloc_3310_;
goto v_reusejp_3303_;
}
v_reusejp_3303_:
{
lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3308_; 
v___x_3305_ = l_Lean_MessageData_ofFormat(v___x_3304_);
lean_inc(v___y_3250_);
v___x_3306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3306_, 0, v___y_3250_);
lean_ctor_set(v___x_3306_, 1, v___x_3305_);
if (v_isShared_3262_ == 0)
{
lean_ctor_set(v___x_3261_, 0, v___x_3306_);
v___x_3308_ = v___x_3261_;
goto v_reusejp_3307_;
}
else
{
lean_object* v_reuseFailAlloc_3309_; 
v_reuseFailAlloc_3309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3309_, 0, v___x_3306_);
v___x_3308_ = v_reuseFailAlloc_3309_;
goto v_reusejp_3307_;
}
v_reusejp_3307_:
{
v___y_3215_ = v_a_3259_;
v___y_3216_ = v___y_3242_;
v___y_3217_ = v___y_3243_;
v___y_3218_ = v___y_3244_;
v___y_3219_ = v___y_3245_;
v___y_3220_ = v___y_3246_;
v___y_3221_ = v___x_3288_;
v___y_3222_ = v___y_3247_;
v___y_3223_ = v___y_3248_;
v___y_3224_ = v___y_3249_;
v___y_3225_ = v___y_3252_;
v___y_3226_ = v___y_3251_;
v___y_3227_ = v___y_3255_;
v___y_3228_ = v___y_3253_;
v___y_3229_ = v___y_3254_;
v___y_3230_ = v___y_3256_;
v___y_3231_ = v___y_3257_;
v_a_3232_ = v___x_3308_;
goto v___jp_3214_;
}
}
}
}
}
}
}
v___jp_3313_:
{
lean_object* v_options_3328_; lean_object* v_inheritedTraceOptions_3329_; uint8_t v_hasTrace_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; 
v_options_3328_ = lean_ctor_get(v_toCold_3325_, 2);
v_inheritedTraceOptions_3329_ = lean_ctor_get(v_toCold_3325_, 11);
v_hasTrace_3330_ = lean_ctor_get_uint8(v_options_3328_, sizeof(void*)*1);
v___x_3331_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__2));
v___x_3332_ = l_Lean_Name_mkStr3(v___x_2872_, v___x_2873_, v___x_3331_);
if (v_hasTrace_3330_ == 0)
{
lean_object* v___x_3333_; 
lean_dec_ref(v___f_2871_);
lean_dec_ref(v___f_2870_);
lean_inc(v___y_3327_);
lean_inc_ref(v___y_3324_);
lean_inc(v___y_3323_);
lean_inc_ref(v___y_3322_);
lean_inc(v___y_3321_);
lean_inc_ref(v___y_3320_);
lean_inc(v___y_3319_);
lean_inc_ref(v___y_3318_);
lean_inc(v___y_3317_);
lean_inc(v___y_3316_);
lean_inc_ref(v___y_3315_);
v___x_3333_ = lean_apply_12(v___f_2874_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_, v___y_3321_, v___y_3322_, v___y_3323_, v___y_3324_, v___y_3327_, lean_box(0));
v___y_3149_ = v___y_3322_;
v___y_3150_ = v___y_3315_;
v___y_3151_ = v___x_3332_;
v___y_3152_ = v___y_3317_;
v___y_3153_ = v___y_3316_;
v___y_3154_ = v___y_3323_;
v___y_3155_ = v___y_3319_;
v___y_3156_ = v___y_3327_;
v___y_3157_ = v___y_3320_;
v___y_3158_ = v___y_3324_;
v___y_3159_ = v___y_3318_;
v___y_3160_ = v___y_3314_;
v___y_3161_ = v___y_3321_;
v___y_3162_ = v___x_3333_;
goto v___jp_3148_;
}
else
{
lean_object* v___x_3334_; lean_object* v___x_3335_; uint8_t v___x_3336_; 
v___x_3334_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__1));
lean_inc(v___x_3332_);
v___x_3335_ = l_Lean_Name_append(v___x_3334_, v___x_3332_);
v___x_3336_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3329_, v_options_3328_, v___x_3335_);
lean_dec(v___x_3335_);
if (v___x_3336_ == 0)
{
lean_object* v___x_3337_; uint8_t v___x_3338_; 
v___x_3337_ = l_Lean_trace_profiler;
v___x_3338_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_options_3328_, v___x_3337_);
if (v___x_3338_ == 0)
{
lean_object* v___x_3339_; 
lean_dec_ref(v___f_2871_);
lean_dec_ref(v___f_2870_);
lean_inc(v___y_3327_);
lean_inc_ref(v___y_3324_);
lean_inc(v___y_3323_);
lean_inc_ref(v___y_3322_);
lean_inc(v___y_3321_);
lean_inc_ref(v___y_3320_);
lean_inc(v___y_3319_);
lean_inc_ref(v___y_3318_);
lean_inc(v___y_3317_);
lean_inc(v___y_3316_);
lean_inc_ref(v___y_3315_);
v___x_3339_ = lean_apply_12(v___f_2874_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_, v___y_3321_, v___y_3322_, v___y_3323_, v___y_3324_, v___y_3327_, lean_box(0));
v___y_3149_ = v___y_3322_;
v___y_3150_ = v___y_3315_;
v___y_3151_ = v___x_3332_;
v___y_3152_ = v___y_3317_;
v___y_3153_ = v___y_3316_;
v___y_3154_ = v___y_3323_;
v___y_3155_ = v___y_3319_;
v___y_3156_ = v___y_3327_;
v___y_3157_ = v___y_3320_;
v___y_3158_ = v___y_3324_;
v___y_3159_ = v___y_3318_;
v___y_3160_ = v___y_3314_;
v___y_3161_ = v___y_3321_;
v___y_3162_ = v___x_3339_;
goto v___jp_3148_;
}
else
{
lean_dec_ref(v___f_2874_);
v___y_3242_ = v___y_3322_;
v___y_3243_ = v_options_3328_;
v___y_3244_ = v___y_3315_;
v___y_3245_ = v___x_3332_;
v___y_3246_ = v___y_3317_;
v___y_3247_ = v___y_3316_;
v___y_3248_ = v___y_3323_;
v___y_3249_ = v___y_3319_;
v___y_3250_ = v_ref_3326_;
v___y_3251_ = v___y_3320_;
v___y_3252_ = v___y_3327_;
v___y_3253_ = v___x_3336_;
v___y_3254_ = v___y_3318_;
v___y_3255_ = v___y_3324_;
v___y_3256_ = v___y_3314_;
v___y_3257_ = v___y_3321_;
goto v___jp_3241_;
}
}
else
{
lean_dec_ref(v___f_2874_);
v___y_3242_ = v___y_3322_;
v___y_3243_ = v_options_3328_;
v___y_3244_ = v___y_3315_;
v___y_3245_ = v___x_3332_;
v___y_3246_ = v___y_3317_;
v___y_3247_ = v___y_3316_;
v___y_3248_ = v___y_3323_;
v___y_3249_ = v___y_3319_;
v___y_3250_ = v_ref_3326_;
v___y_3251_ = v___y_3320_;
v___y_3252_ = v___y_3327_;
v___y_3253_ = v___x_3336_;
v___y_3254_ = v___y_3318_;
v___y_3255_ = v___y_3324_;
v___y_3256_ = v___y_3314_;
v___y_3257_ = v___y_3321_;
goto v___jp_3241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___boxed(lean_object** _args){
lean_object* v_ctx_3359_ = _args[0];
lean_object* v_aig_3360_ = _args[1];
lean_object* v_goal_3361_ = _args[2];
lean_object* v_unusedHypotheses_3362_ = _args[3];
lean_object* v_reflectionResult_3363_ = _args[4];
lean_object* v_satExpr_3364_ = _args[5];
lean_object* v___x_3365_ = _args[6];
lean_object* v___x_3366_ = _args[7];
lean_object* v___f_3367_ = _args[8];
lean_object* v___x_3368_ = _args[9];
lean_object* v___f_3369_ = _args[10];
lean_object* v___f_3370_ = _args[11];
lean_object* v___x_3371_ = _args[12];
lean_object* v___x_3372_ = _args[13];
lean_object* v___f_3373_ = _args[14];
lean_object* v_a_3374_ = _args[15];
lean_object* v_____r_3375_ = _args[16];
lean_object* v___y_3376_ = _args[17];
lean_object* v___y_3377_ = _args[18];
lean_object* v___y_3378_ = _args[19];
lean_object* v___y_3379_ = _args[20];
lean_object* v___y_3380_ = _args[21];
lean_object* v___y_3381_ = _args[22];
lean_object* v___y_3382_ = _args[23];
lean_object* v___y_3383_ = _args[24];
lean_object* v___y_3384_ = _args[25];
lean_object* v___y_3385_ = _args[26];
lean_object* v___y_3386_ = _args[27];
lean_object* v___y_3387_ = _args[28];
lean_object* v___y_3388_ = _args[29];
_start:
{
uint8_t v___x_655845__boxed_3389_; lean_object* v_res_3390_; 
v___x_655845__boxed_3389_ = lean_unbox(v___x_3365_);
v_res_3390_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10(v_ctx_3359_, v_aig_3360_, v_goal_3361_, v_unusedHypotheses_3362_, v_reflectionResult_3363_, v_satExpr_3364_, v___x_655845__boxed_3389_, v___x_3366_, v___f_3367_, v___x_3368_, v___f_3369_, v___f_3370_, v___x_3371_, v___x_3372_, v___f_3373_, v_a_3374_, v_____r_3375_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_, v___y_3385_, v___y_3386_, v___y_3387_);
lean_dec(v___y_3387_);
lean_dec_ref(v___y_3386_);
lean_dec(v___y_3385_);
lean_dec_ref(v___y_3384_);
lean_dec(v___y_3383_);
lean_dec_ref(v___y_3382_);
lean_dec(v___y_3381_);
lean_dec_ref(v___y_3380_);
lean_dec(v___y_3379_);
lean_dec(v___y_3378_);
lean_dec_ref(v___y_3377_);
lean_dec(v___y_3376_);
lean_dec_ref(v___x_3368_);
return v_res_3390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__13(lean_object* v_ctx_3391_, lean_object* v_aig_3392_, lean_object* v_goal_3393_, lean_object* v_unusedHypotheses_3394_, lean_object* v_reflectionResult_3395_, lean_object* v_satExpr_3396_, uint8_t v___x_3397_, lean_object* v___x_3398_, lean_object* v___f_3399_, lean_object* v___x_3400_, lean_object* v___f_3401_, lean_object* v___f_3402_, lean_object* v___x_3403_, lean_object* v___x_3404_, lean_object* v___f_3405_, lean_object* v_a_3406_, lean_object* v_____r_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_){
_start:
{
lean_object* v___y_3422_; lean_object* v___y_3423_; lean_object* v___y_3424_; lean_object* v___y_3425_; lean_object* v___y_3426_; lean_object* v___y_3427_; lean_object* v___y_3428_; lean_object* v___y_3429_; lean_object* v___y_3430_; lean_object* v___y_3431_; lean_object* v___y_3432_; lean_object* v___y_3433_; lean_object* v___y_3465_; lean_object* v___y_3466_; lean_object* v___y_3492_; lean_object* v___y_3493_; lean_object* v___y_3494_; lean_object* v___y_3495_; lean_object* v___y_3496_; lean_object* v___y_3497_; lean_object* v___y_3498_; lean_object* v___y_3499_; lean_object* v___y_3500_; lean_object* v___y_3501_; lean_object* v___y_3502_; lean_object* v___y_3503_; lean_object* v___y_3504_; lean_object* v___y_3553_; lean_object* v___y_3554_; lean_object* v___y_3555_; lean_object* v___y_3556_; lean_object* v___y_3557_; lean_object* v___y_3558_; lean_object* v___y_3559_; lean_object* v___y_3560_; lean_object* v___y_3561_; lean_object* v___y_3562_; lean_object* v___y_3563_; lean_object* v___y_3564_; lean_object* v___y_3565_; uint8_t v___y_3566_; lean_object* v___y_3567_; lean_object* v___y_3568_; lean_object* v___y_3569_; lean_object* v_a_3570_; lean_object* v___y_3580_; lean_object* v___y_3581_; lean_object* v___y_3582_; lean_object* v___y_3583_; lean_object* v___y_3584_; lean_object* v___y_3585_; lean_object* v___y_3586_; lean_object* v___y_3587_; lean_object* v___y_3588_; lean_object* v___y_3589_; lean_object* v___y_3590_; lean_object* v___y_3591_; lean_object* v___y_3592_; uint8_t v___y_3593_; lean_object* v___y_3594_; lean_object* v___y_3595_; lean_object* v___y_3596_; lean_object* v_a_3597_; lean_object* v___y_3610_; lean_object* v___y_3611_; lean_object* v___y_3612_; lean_object* v___y_3613_; uint8_t v___y_3614_; lean_object* v___y_3615_; lean_object* v___y_3616_; lean_object* v___y_3617_; lean_object* v___y_3618_; uint8_t v___y_3619_; lean_object* v___y_3620_; lean_object* v___y_3621_; lean_object* v___y_3622_; lean_object* v___y_3623_; lean_object* v___y_3624_; uint8_t v___y_3625_; lean_object* v___y_3626_; lean_object* v___y_3627_; uint8_t v___y_3628_; lean_object* v___y_3629_; lean_object* v___y_3630_; lean_object* v___y_3631_; lean_object* v_config_3671_; lean_object* v_solver_3672_; lean_object* v_lratPath_3673_; lean_object* v_timeout_3674_; uint8_t v_trimProofs_3675_; uint8_t v_binaryProofs_3676_; uint8_t v_graphviz_3677_; uint8_t v_solverMode_3678_; lean_object* v___y_3680_; lean_object* v___y_3681_; lean_object* v___y_3682_; lean_object* v___y_3683_; lean_object* v___y_3684_; lean_object* v___y_3685_; lean_object* v___y_3686_; lean_object* v___y_3687_; lean_object* v___y_3688_; lean_object* v___y_3689_; lean_object* v___y_3690_; lean_object* v___y_3691_; lean_object* v___y_3692_; lean_object* v___y_3693_; lean_object* v___y_3716_; lean_object* v___y_3717_; lean_object* v___y_3718_; uint8_t v___y_3719_; lean_object* v___y_3720_; lean_object* v___y_3721_; lean_object* v___y_3722_; lean_object* v___y_3723_; lean_object* v___y_3724_; lean_object* v___y_3725_; lean_object* v___y_3726_; lean_object* v___y_3727_; lean_object* v___y_3728_; lean_object* v___y_3729_; lean_object* v___y_3730_; lean_object* v___y_3731_; lean_object* v___y_3732_; lean_object* v_a_3733_; lean_object* v___y_3746_; lean_object* v___y_3747_; uint8_t v___y_3748_; lean_object* v___y_3749_; lean_object* v___y_3750_; lean_object* v___y_3751_; lean_object* v___y_3752_; lean_object* v___y_3753_; lean_object* v___y_3754_; lean_object* v___y_3755_; lean_object* v___y_3756_; lean_object* v___y_3757_; lean_object* v___y_3758_; lean_object* v___y_3759_; lean_object* v___y_3760_; lean_object* v___y_3761_; lean_object* v___y_3762_; lean_object* v_a_3763_; lean_object* v___y_3773_; lean_object* v___y_3774_; uint8_t v___y_3775_; lean_object* v___y_3776_; lean_object* v___y_3777_; lean_object* v___y_3778_; lean_object* v___y_3779_; lean_object* v___y_3780_; lean_object* v___y_3781_; lean_object* v___y_3782_; lean_object* v___y_3783_; lean_object* v___y_3784_; lean_object* v___y_3785_; lean_object* v___y_3786_; lean_object* v___y_3787_; lean_object* v___y_3788_; lean_object* v___y_3845_; lean_object* v___y_3846_; lean_object* v___y_3847_; lean_object* v___y_3848_; lean_object* v___y_3849_; lean_object* v___y_3850_; lean_object* v___y_3851_; lean_object* v___y_3852_; lean_object* v___y_3853_; lean_object* v___y_3854_; lean_object* v___y_3855_; lean_object* v_toCold_3856_; lean_object* v_ref_3857_; lean_object* v___y_3858_; 
v_config_3671_ = lean_ctor_get(v_ctx_3391_, 5);
v_solver_3672_ = lean_ctor_get(v_ctx_3391_, 3);
v_lratPath_3673_ = lean_ctor_get(v_ctx_3391_, 4);
v_timeout_3674_ = lean_ctor_get(v_config_3671_, 0);
v_trimProofs_3675_ = lean_ctor_get_uint8(v_config_3671_, sizeof(void*)*3);
v_binaryProofs_3676_ = lean_ctor_get_uint8(v_config_3671_, sizeof(void*)*3 + 1);
v_graphviz_3677_ = lean_ctor_get_uint8(v_config_3671_, sizeof(void*)*3 + 8);
v_solverMode_3678_ = lean_ctor_get_uint8(v_config_3671_, sizeof(void*)*3 + 10);
if (v_graphviz_3677_ == 0)
{
lean_object* v_toCold_3871_; lean_object* v_ref_3872_; 
lean_dec_ref(v_a_3406_);
v_toCold_3871_ = lean_ctor_get(v___y_3418_, 0);
v_ref_3872_ = lean_ctor_get(v___y_3418_, 2);
v___y_3845_ = v___y_3408_;
v___y_3846_ = v___y_3409_;
v___y_3847_ = v___y_3410_;
v___y_3848_ = v___y_3411_;
v___y_3849_ = v___y_3412_;
v___y_3850_ = v___y_3413_;
v___y_3851_ = v___y_3414_;
v___y_3852_ = v___y_3415_;
v___y_3853_ = v___y_3416_;
v___y_3854_ = v___y_3417_;
v___y_3855_ = v___y_3418_;
v_toCold_3856_ = v_toCold_3871_;
v_ref_3857_ = v_ref_3872_;
v___y_3858_ = v___y_3419_;
goto v___jp_3844_;
}
else
{
lean_object* v_toCold_3873_; lean_object* v_ref_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; 
v_toCold_3873_ = lean_ctor_get(v___y_3418_, 0);
v_ref_3874_ = lean_ctor_get(v___y_3418_, 2);
v___x_3875_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__7, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__7);
v___x_3876_ = l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7(v_a_3406_);
v___x_3877_ = l_IO_FS_writeFile(v___x_3875_, v___x_3876_);
lean_dec_ref(v___x_3876_);
if (lean_obj_tag(v___x_3877_) == 0)
{
lean_dec_ref_known(v___x_3877_, 1);
v___y_3845_ = v___y_3408_;
v___y_3846_ = v___y_3409_;
v___y_3847_ = v___y_3410_;
v___y_3848_ = v___y_3411_;
v___y_3849_ = v___y_3412_;
v___y_3850_ = v___y_3413_;
v___y_3851_ = v___y_3414_;
v___y_3852_ = v___y_3415_;
v___y_3853_ = v___y_3416_;
v___y_3854_ = v___y_3417_;
v___y_3855_ = v___y_3418_;
v_toCold_3856_ = v_toCold_3873_;
v_ref_3857_ = v_ref_3874_;
v___y_3858_ = v___y_3419_;
goto v___jp_3844_;
}
else
{
lean_object* v_a_3878_; lean_object* v___x_3880_; uint8_t v_isShared_3881_; uint8_t v_isSharedCheck_3889_; 
lean_dec_ref(v___f_3405_);
lean_dec_ref(v___x_3404_);
lean_dec_ref(v___x_3403_);
lean_dec_ref(v___f_3402_);
lean_dec_ref(v___f_3401_);
lean_dec_ref(v___f_3399_);
lean_dec_ref(v___x_3398_);
lean_dec_ref(v_satExpr_3396_);
lean_dec_ref(v_reflectionResult_3395_);
lean_dec_ref(v_unusedHypotheses_3394_);
lean_dec(v_goal_3393_);
lean_dec_ref(v_aig_3392_);
lean_dec_ref(v_ctx_3391_);
v_a_3878_ = lean_ctor_get(v___x_3877_, 0);
v_isSharedCheck_3889_ = !lean_is_exclusive(v___x_3877_);
if (v_isSharedCheck_3889_ == 0)
{
v___x_3880_ = v___x_3877_;
v_isShared_3881_ = v_isSharedCheck_3889_;
goto v_resetjp_3879_;
}
else
{
lean_inc(v_a_3878_);
lean_dec(v___x_3877_);
v___x_3880_ = lean_box(0);
v_isShared_3881_ = v_isSharedCheck_3889_;
goto v_resetjp_3879_;
}
v_resetjp_3879_:
{
lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3887_; 
v___x_3882_ = lean_io_error_to_string(v_a_3878_);
v___x_3883_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3883_, 0, v___x_3882_);
v___x_3884_ = l_Lean_MessageData_ofFormat(v___x_3883_);
lean_inc(v_ref_3874_);
v___x_3885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3885_, 0, v_ref_3874_);
lean_ctor_set(v___x_3885_, 1, v___x_3884_);
if (v_isShared_3881_ == 0)
{
lean_ctor_set(v___x_3880_, 0, v___x_3885_);
v___x_3887_ = v___x_3880_;
goto v_reusejp_3886_;
}
else
{
lean_object* v_reuseFailAlloc_3888_; 
v_reuseFailAlloc_3888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3888_, 0, v___x_3885_);
v___x_3887_ = v_reuseFailAlloc_3888_;
goto v_reusejp_3886_;
}
v_reusejp_3886_:
{
return v___x_3887_;
}
}
}
}
v___jp_3421_:
{
lean_object* v___x_3434_; 
lean_inc_ref(v___y_3422_);
v___x_3434_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(v___y_3422_, v_ctx_3391_, v_reflectionResult_3395_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_);
if (lean_obj_tag(v___x_3434_) == 0)
{
lean_object* v_a_3435_; lean_object* v___x_3436_; 
v_a_3435_ = lean_ctor_get(v___x_3434_, 0);
lean_inc(v_a_3435_);
lean_dec_ref_known(v___x_3434_, 1);
v___x_3436_ = l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse(v_satExpr_3396_, v_a_3435_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_, v___y_3427_, v___y_3428_, v___y_3429_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_);
if (lean_obj_tag(v___x_3436_) == 0)
{
lean_object* v_a_3437_; lean_object* v___x_3438_; lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3446_; 
v_a_3437_ = lean_ctor_get(v___x_3436_, 0);
lean_inc(v_a_3437_);
lean_dec_ref_known(v___x_3436_, 1);
v___x_3438_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3___redArg(v_goal_3393_, v_a_3437_, v___y_3431_);
v_isSharedCheck_3446_ = !lean_is_exclusive(v___x_3438_);
if (v_isSharedCheck_3446_ == 0)
{
lean_object* v_unused_3447_; 
v_unused_3447_ = lean_ctor_get(v___x_3438_, 0);
lean_dec(v_unused_3447_);
v___x_3440_ = v___x_3438_;
v_isShared_3441_ = v_isSharedCheck_3446_;
goto v_resetjp_3439_;
}
else
{
lean_dec(v___x_3438_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3446_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v___x_3442_; lean_object* v___x_3444_; 
v___x_3442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3442_, 0, v___y_3422_);
if (v_isShared_3441_ == 0)
{
lean_ctor_set(v___x_3440_, 0, v___x_3442_);
v___x_3444_ = v___x_3440_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v___x_3442_);
v___x_3444_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
return v___x_3444_;
}
}
}
else
{
lean_object* v_a_3448_; lean_object* v___x_3450_; uint8_t v_isShared_3451_; uint8_t v_isSharedCheck_3455_; 
lean_dec_ref(v___y_3422_);
lean_dec(v_goal_3393_);
v_a_3448_ = lean_ctor_get(v___x_3436_, 0);
v_isSharedCheck_3455_ = !lean_is_exclusive(v___x_3436_);
if (v_isSharedCheck_3455_ == 0)
{
v___x_3450_ = v___x_3436_;
v_isShared_3451_ = v_isSharedCheck_3455_;
goto v_resetjp_3449_;
}
else
{
lean_inc(v_a_3448_);
lean_dec(v___x_3436_);
v___x_3450_ = lean_box(0);
v_isShared_3451_ = v_isSharedCheck_3455_;
goto v_resetjp_3449_;
}
v_resetjp_3449_:
{
lean_object* v___x_3453_; 
if (v_isShared_3451_ == 0)
{
v___x_3453_ = v___x_3450_;
goto v_reusejp_3452_;
}
else
{
lean_object* v_reuseFailAlloc_3454_; 
v_reuseFailAlloc_3454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3454_, 0, v_a_3448_);
v___x_3453_ = v_reuseFailAlloc_3454_;
goto v_reusejp_3452_;
}
v_reusejp_3452_:
{
return v___x_3453_;
}
}
}
}
else
{
lean_object* v_a_3456_; lean_object* v___x_3458_; uint8_t v_isShared_3459_; uint8_t v_isSharedCheck_3463_; 
lean_dec_ref(v___y_3422_);
lean_dec_ref(v_satExpr_3396_);
lean_dec(v_goal_3393_);
v_a_3456_ = lean_ctor_get(v___x_3434_, 0);
v_isSharedCheck_3463_ = !lean_is_exclusive(v___x_3434_);
if (v_isSharedCheck_3463_ == 0)
{
v___x_3458_ = v___x_3434_;
v_isShared_3459_ = v_isSharedCheck_3463_;
goto v_resetjp_3457_;
}
else
{
lean_inc(v_a_3456_);
lean_dec(v___x_3434_);
v___x_3458_ = lean_box(0);
v_isShared_3459_ = v_isSharedCheck_3463_;
goto v_resetjp_3457_;
}
v_resetjp_3457_:
{
lean_object* v___x_3461_; 
if (v_isShared_3459_ == 0)
{
v___x_3461_ = v___x_3458_;
goto v_reusejp_3460_;
}
else
{
lean_object* v_reuseFailAlloc_3462_; 
v_reuseFailAlloc_3462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3462_, 0, v_a_3456_);
v___x_3461_ = v_reuseFailAlloc_3462_;
goto v_reusejp_3460_;
}
v_reusejp_3460_:
{
return v___x_3461_;
}
}
}
}
v___jp_3464_:
{
lean_object* v___x_3467_; 
v___x_3467_ = l_Lean_Meta_Tactic_BVDecide_ReifyM_atomsAssignmentMap___redArg(v___y_3466_);
if (lean_obj_tag(v___x_3467_) == 0)
{
lean_object* v_a_3468_; lean_object* v___x_3470_; uint8_t v_isShared_3471_; uint8_t v_isSharedCheck_3482_; 
v_a_3468_ = lean_ctor_get(v___x_3467_, 0);
v_isSharedCheck_3482_ = !lean_is_exclusive(v___x_3467_);
if (v_isSharedCheck_3482_ == 0)
{
v___x_3470_ = v___x_3467_;
v_isShared_3471_ = v_isSharedCheck_3482_;
goto v_resetjp_3469_;
}
else
{
lean_inc(v_a_3468_);
lean_dec(v___x_3467_);
v___x_3470_ = lean_box(0);
v_isShared_3471_ = v_isSharedCheck_3482_;
goto v_resetjp_3469_;
}
v_resetjp_3469_:
{
lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3480_; 
v___x_3472_ = l_Lean_Meta_Tactic_BVDecide_reconstructCounterExample(v_aig_3392_, v___y_3465_, v_a_3468_);
lean_dec(v_a_3468_);
lean_dec_ref(v___y_3465_);
v___x_3473_ = lean_unsigned_to_nat(0u);
v___x_3474_ = lean_array_get_size(v___x_3472_);
v___x_3475_ = l_Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(v___x_3472_, v___x_3473_, v___x_3474_);
lean_dec_ref(v___x_3472_);
v___x_3476_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__0));
v___x_3477_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3477_, 0, v_goal_3393_);
lean_ctor_set(v___x_3477_, 1, v_unusedHypotheses_3394_);
lean_ctor_set(v___x_3477_, 2, v___x_3475_);
lean_ctor_set(v___x_3477_, 3, v___x_3476_);
v___x_3478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3478_, 0, v___x_3477_);
if (v_isShared_3471_ == 0)
{
lean_ctor_set(v___x_3470_, 0, v___x_3478_);
v___x_3480_ = v___x_3470_;
goto v_reusejp_3479_;
}
else
{
lean_object* v_reuseFailAlloc_3481_; 
v_reuseFailAlloc_3481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3481_, 0, v___x_3478_);
v___x_3480_ = v_reuseFailAlloc_3481_;
goto v_reusejp_3479_;
}
v_reusejp_3479_:
{
return v___x_3480_;
}
}
}
else
{
lean_object* v_a_3483_; lean_object* v___x_3485_; uint8_t v_isShared_3486_; uint8_t v_isSharedCheck_3490_; 
lean_dec_ref(v___y_3465_);
lean_dec_ref(v_unusedHypotheses_3394_);
lean_dec(v_goal_3393_);
lean_dec_ref(v_aig_3392_);
v_a_3483_ = lean_ctor_get(v___x_3467_, 0);
v_isSharedCheck_3490_ = !lean_is_exclusive(v___x_3467_);
if (v_isSharedCheck_3490_ == 0)
{
v___x_3485_ = v___x_3467_;
v_isShared_3486_ = v_isSharedCheck_3490_;
goto v_resetjp_3484_;
}
else
{
lean_inc(v_a_3483_);
lean_dec(v___x_3467_);
v___x_3485_ = lean_box(0);
v_isShared_3486_ = v_isSharedCheck_3490_;
goto v_resetjp_3484_;
}
v_resetjp_3484_:
{
lean_object* v___x_3488_; 
if (v_isShared_3486_ == 0)
{
v___x_3488_ = v___x_3485_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3489_; 
v_reuseFailAlloc_3489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3489_, 0, v_a_3483_);
v___x_3488_ = v_reuseFailAlloc_3489_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
return v___x_3488_;
}
}
}
}
v___jp_3491_:
{
if (lean_obj_tag(v___y_3504_) == 0)
{
lean_object* v_a_3505_; 
v_a_3505_ = lean_ctor_get(v___y_3504_, 0);
lean_inc(v_a_3505_);
lean_dec_ref_known(v___y_3504_, 1);
if (lean_obj_tag(v_a_3505_) == 0)
{
lean_object* v_toCold_3506_; lean_object* v_options_3507_; uint8_t v_hasTrace_3508_; 
lean_dec_ref(v_satExpr_3396_);
lean_dec_ref(v_reflectionResult_3395_);
lean_dec_ref(v_ctx_3391_);
v_toCold_3506_ = lean_ctor_get(v___y_3503_, 0);
v_options_3507_ = lean_ctor_get(v_toCold_3506_, 2);
v_hasTrace_3508_ = lean_ctor_get_uint8(v_options_3507_, sizeof(void*)*1);
if (v_hasTrace_3508_ == 0)
{
lean_object* v_a_3509_; 
lean_dec(v___y_3498_);
v_a_3509_ = lean_ctor_get(v_a_3505_, 0);
lean_inc(v_a_3509_);
lean_dec_ref_known(v_a_3505_, 1);
v___y_3465_ = v_a_3509_;
v___y_3466_ = v___y_3492_;
goto v___jp_3464_;
}
else
{
lean_object* v_a_3510_; lean_object* v_inheritedTraceOptions_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; uint8_t v___x_3514_; 
v_a_3510_ = lean_ctor_get(v_a_3505_, 0);
lean_inc(v_a_3510_);
lean_dec_ref_known(v_a_3505_, 1);
v_inheritedTraceOptions_3511_ = lean_ctor_get(v_toCold_3506_, 11);
v___x_3512_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__1));
lean_inc(v___y_3498_);
v___x_3513_ = l_Lean_Name_append(v___x_3512_, v___y_3498_);
v___x_3514_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3511_, v_options_3507_, v___x_3513_);
lean_dec(v___x_3513_);
if (v___x_3514_ == 0)
{
lean_dec(v___y_3498_);
v___y_3465_ = v_a_3510_;
v___y_3466_ = v___y_3492_;
goto v___jp_3464_;
}
else
{
lean_object* v___x_3515_; lean_object* v___x_3516_; 
v___x_3515_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__2, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__2);
v___x_3516_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg(v___y_3498_, v___x_3515_, v___y_3495_, v___y_3496_, v___y_3503_, v___y_3499_);
if (lean_obj_tag(v___x_3516_) == 0)
{
lean_dec_ref_known(v___x_3516_, 1);
v___y_3465_ = v_a_3510_;
v___y_3466_ = v___y_3492_;
goto v___jp_3464_;
}
else
{
lean_object* v_a_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3524_; 
lean_dec(v_a_3510_);
lean_dec_ref(v_unusedHypotheses_3394_);
lean_dec(v_goal_3393_);
lean_dec_ref(v_aig_3392_);
v_a_3517_ = lean_ctor_get(v___x_3516_, 0);
v_isSharedCheck_3524_ = !lean_is_exclusive(v___x_3516_);
if (v_isSharedCheck_3524_ == 0)
{
v___x_3519_ = v___x_3516_;
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_a_3517_);
lean_dec(v___x_3516_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
lean_object* v___x_3522_; 
if (v_isShared_3520_ == 0)
{
v___x_3522_ = v___x_3519_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v_a_3517_);
v___x_3522_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
return v___x_3522_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_3525_; lean_object* v_options_3526_; uint8_t v_hasTrace_3527_; 
lean_dec_ref(v_unusedHypotheses_3394_);
lean_dec_ref(v_aig_3392_);
v_toCold_3525_ = lean_ctor_get(v___y_3503_, 0);
v_options_3526_ = lean_ctor_get(v_toCold_3525_, 2);
v_hasTrace_3527_ = lean_ctor_get_uint8(v_options_3526_, sizeof(void*)*1);
if (v_hasTrace_3527_ == 0)
{
lean_object* v_a_3528_; 
lean_dec(v___y_3498_);
v_a_3528_ = lean_ctor_get(v_a_3505_, 0);
lean_inc(v_a_3528_);
lean_dec_ref_known(v_a_3505_, 1);
v___y_3422_ = v_a_3528_;
v___y_3423_ = v___y_3493_;
v___y_3424_ = v___y_3492_;
v___y_3425_ = v___y_3501_;
v___y_3426_ = v___y_3497_;
v___y_3427_ = v___y_3502_;
v___y_3428_ = v___y_3494_;
v___y_3429_ = v___y_3500_;
v___y_3430_ = v___y_3495_;
v___y_3431_ = v___y_3496_;
v___y_3432_ = v___y_3503_;
v___y_3433_ = v___y_3499_;
goto v___jp_3421_;
}
else
{
lean_object* v_a_3529_; lean_object* v_inheritedTraceOptions_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; uint8_t v___x_3533_; 
v_a_3529_ = lean_ctor_get(v_a_3505_, 0);
lean_inc(v_a_3529_);
lean_dec_ref_known(v_a_3505_, 1);
v_inheritedTraceOptions_3530_ = lean_ctor_get(v_toCold_3525_, 11);
v___x_3531_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__1));
lean_inc(v___y_3498_);
v___x_3532_ = l_Lean_Name_append(v___x_3531_, v___y_3498_);
v___x_3533_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3530_, v_options_3526_, v___x_3532_);
lean_dec(v___x_3532_);
if (v___x_3533_ == 0)
{
lean_dec(v___y_3498_);
v___y_3422_ = v_a_3529_;
v___y_3423_ = v___y_3493_;
v___y_3424_ = v___y_3492_;
v___y_3425_ = v___y_3501_;
v___y_3426_ = v___y_3497_;
v___y_3427_ = v___y_3502_;
v___y_3428_ = v___y_3494_;
v___y_3429_ = v___y_3500_;
v___y_3430_ = v___y_3495_;
v___y_3431_ = v___y_3496_;
v___y_3432_ = v___y_3503_;
v___y_3433_ = v___y_3499_;
goto v___jp_3421_;
}
else
{
lean_object* v___x_3534_; lean_object* v___x_3535_; 
v___x_3534_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__4, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__4);
v___x_3535_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg(v___y_3498_, v___x_3534_, v___y_3495_, v___y_3496_, v___y_3503_, v___y_3499_);
if (lean_obj_tag(v___x_3535_) == 0)
{
lean_dec_ref_known(v___x_3535_, 1);
v___y_3422_ = v_a_3529_;
v___y_3423_ = v___y_3493_;
v___y_3424_ = v___y_3492_;
v___y_3425_ = v___y_3501_;
v___y_3426_ = v___y_3497_;
v___y_3427_ = v___y_3502_;
v___y_3428_ = v___y_3494_;
v___y_3429_ = v___y_3500_;
v___y_3430_ = v___y_3495_;
v___y_3431_ = v___y_3496_;
v___y_3432_ = v___y_3503_;
v___y_3433_ = v___y_3499_;
goto v___jp_3421_;
}
else
{
lean_object* v_a_3536_; lean_object* v___x_3538_; uint8_t v_isShared_3539_; uint8_t v_isSharedCheck_3543_; 
lean_dec(v_a_3529_);
lean_dec_ref(v_satExpr_3396_);
lean_dec_ref(v_reflectionResult_3395_);
lean_dec(v_goal_3393_);
lean_dec_ref(v_ctx_3391_);
v_a_3536_ = lean_ctor_get(v___x_3535_, 0);
v_isSharedCheck_3543_ = !lean_is_exclusive(v___x_3535_);
if (v_isSharedCheck_3543_ == 0)
{
v___x_3538_ = v___x_3535_;
v_isShared_3539_ = v_isSharedCheck_3543_;
goto v_resetjp_3537_;
}
else
{
lean_inc(v_a_3536_);
lean_dec(v___x_3535_);
v___x_3538_ = lean_box(0);
v_isShared_3539_ = v_isSharedCheck_3543_;
goto v_resetjp_3537_;
}
v_resetjp_3537_:
{
lean_object* v___x_3541_; 
if (v_isShared_3539_ == 0)
{
v___x_3541_ = v___x_3538_;
goto v_reusejp_3540_;
}
else
{
lean_object* v_reuseFailAlloc_3542_; 
v_reuseFailAlloc_3542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3542_, 0, v_a_3536_);
v___x_3541_ = v_reuseFailAlloc_3542_;
goto v_reusejp_3540_;
}
v_reusejp_3540_:
{
return v___x_3541_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3544_; lean_object* v___x_3546_; uint8_t v_isShared_3547_; uint8_t v_isSharedCheck_3551_; 
lean_dec(v___y_3498_);
lean_dec_ref(v_satExpr_3396_);
lean_dec_ref(v_reflectionResult_3395_);
lean_dec_ref(v_unusedHypotheses_3394_);
lean_dec(v_goal_3393_);
lean_dec_ref(v_aig_3392_);
lean_dec_ref(v_ctx_3391_);
v_a_3544_ = lean_ctor_get(v___y_3504_, 0);
v_isSharedCheck_3551_ = !lean_is_exclusive(v___y_3504_);
if (v_isSharedCheck_3551_ == 0)
{
v___x_3546_ = v___y_3504_;
v_isShared_3547_ = v_isSharedCheck_3551_;
goto v_resetjp_3545_;
}
else
{
lean_inc(v_a_3544_);
lean_dec(v___y_3504_);
v___x_3546_ = lean_box(0);
v_isShared_3547_ = v_isSharedCheck_3551_;
goto v_resetjp_3545_;
}
v_resetjp_3545_:
{
lean_object* v___x_3549_; 
if (v_isShared_3547_ == 0)
{
v___x_3549_ = v___x_3546_;
goto v_reusejp_3548_;
}
else
{
lean_object* v_reuseFailAlloc_3550_; 
v_reuseFailAlloc_3550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3550_, 0, v_a_3544_);
v___x_3549_ = v_reuseFailAlloc_3550_;
goto v_reusejp_3548_;
}
v_reusejp_3548_:
{
return v___x_3549_;
}
}
}
}
v___jp_3552_:
{
lean_object* v___x_3571_; double v___x_3572_; double v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; 
v___x_3571_ = lean_io_get_num_heartbeats();
v___x_3572_ = lean_float_of_nat(v___y_3556_);
v___x_3573_ = lean_float_of_nat(v___x_3571_);
v___x_3574_ = lean_box_float(v___x_3572_);
v___x_3575_ = lean_box_float(v___x_3573_);
v___x_3576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3576_, 0, v___x_3574_);
lean_ctor_set(v___x_3576_, 1, v___x_3575_);
v___x_3577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3577_, 0, v_a_3570_);
lean_ctor_set(v___x_3577_, 1, v___x_3576_);
lean_inc(v___y_3564_);
v___x_3578_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5(v___y_3564_, v___x_3397_, v___x_3398_, v___y_3555_, v___y_3566_, v___y_3561_, v___f_3399_, v___x_3577_, v___y_3553_, v___y_3557_, v___y_3554_, v___y_3567_, v___y_3562_, v___y_3568_, v___y_3559_, v___y_3565_, v___y_3558_, v___y_3560_, v___y_3569_, v___y_3563_);
v___y_3492_ = v___y_3554_;
v___y_3493_ = v___y_3557_;
v___y_3494_ = v___y_3559_;
v___y_3495_ = v___y_3558_;
v___y_3496_ = v___y_3560_;
v___y_3497_ = v___y_3562_;
v___y_3498_ = v___y_3564_;
v___y_3499_ = v___y_3563_;
v___y_3500_ = v___y_3565_;
v___y_3501_ = v___y_3567_;
v___y_3502_ = v___y_3568_;
v___y_3503_ = v___y_3569_;
v___y_3504_ = v___x_3578_;
goto v___jp_3491_;
}
v___jp_3579_:
{
lean_object* v___x_3598_; double v___x_3599_; double v___x_3600_; double v___x_3601_; double v___x_3602_; double v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; 
v___x_3598_ = lean_io_mono_nanos_now();
v___x_3599_ = lean_float_of_nat(v___y_3583_);
v___x_3600_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_3601_ = lean_float_div(v___x_3599_, v___x_3600_);
v___x_3602_ = lean_float_of_nat(v___x_3598_);
v___x_3603_ = lean_float_div(v___x_3602_, v___x_3600_);
v___x_3604_ = lean_box_float(v___x_3601_);
v___x_3605_ = lean_box_float(v___x_3603_);
v___x_3606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3606_, 0, v___x_3604_);
lean_ctor_set(v___x_3606_, 1, v___x_3605_);
v___x_3607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3607_, 0, v_a_3597_);
lean_ctor_set(v___x_3607_, 1, v___x_3606_);
lean_inc(v___y_3591_);
v___x_3608_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5(v___y_3591_, v___x_3397_, v___x_3398_, v___y_3582_, v___y_3593_, v___y_3588_, v___f_3399_, v___x_3607_, v___y_3580_, v___y_3584_, v___y_3581_, v___y_3594_, v___y_3589_, v___y_3595_, v___y_3586_, v___y_3592_, v___y_3585_, v___y_3587_, v___y_3596_, v___y_3590_);
v___y_3492_ = v___y_3581_;
v___y_3493_ = v___y_3584_;
v___y_3494_ = v___y_3586_;
v___y_3495_ = v___y_3585_;
v___y_3496_ = v___y_3587_;
v___y_3497_ = v___y_3589_;
v___y_3498_ = v___y_3591_;
v___y_3499_ = v___y_3590_;
v___y_3500_ = v___y_3592_;
v___y_3501_ = v___y_3594_;
v___y_3502_ = v___y_3595_;
v___y_3503_ = v___y_3596_;
v___y_3504_ = v___x_3608_;
goto v___jp_3491_;
}
v___jp_3609_:
{
lean_object* v___x_3632_; lean_object* v_a_3633_; uint8_t v___x_3634_; 
v___x_3632_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___redArg(v___y_3624_);
v_a_3633_ = lean_ctor_get(v___x_3632_, 0);
lean_inc(v_a_3633_);
lean_dec_ref(v___x_3632_);
v___x_3634_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v___y_3612_, v___x_3400_);
if (v___x_3634_ == 0)
{
lean_object* v___x_3635_; lean_object* v___x_3636_; 
v___x_3635_ = lean_io_mono_nanos_now();
v___x_3636_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_3626_, v___y_3620_, v___y_3622_, v___y_3619_, v___y_3615_, v___y_3614_, v___y_3625_, v___y_3631_, v___y_3624_);
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v_a_3637_; lean_object* v___x_3639_; uint8_t v_isShared_3640_; uint8_t v_isSharedCheck_3644_; 
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3644_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3644_ == 0)
{
v___x_3639_ = v___x_3636_;
v_isShared_3640_ = v_isSharedCheck_3644_;
goto v_resetjp_3638_;
}
else
{
lean_inc(v_a_3637_);
lean_dec(v___x_3636_);
v___x_3639_ = lean_box(0);
v_isShared_3640_ = v_isSharedCheck_3644_;
goto v_resetjp_3638_;
}
v_resetjp_3638_:
{
lean_object* v___x_3642_; 
if (v_isShared_3640_ == 0)
{
lean_ctor_set_tag(v___x_3639_, 1);
v___x_3642_ = v___x_3639_;
goto v_reusejp_3641_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v_a_3637_);
v___x_3642_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3641_;
}
v_reusejp_3641_:
{
v___y_3580_ = v___y_3610_;
v___y_3581_ = v___y_3611_;
v___y_3582_ = v___y_3612_;
v___y_3583_ = v___x_3635_;
v___y_3584_ = v___y_3613_;
v___y_3585_ = v___y_3617_;
v___y_3586_ = v___y_3616_;
v___y_3587_ = v___y_3618_;
v___y_3588_ = v_a_3633_;
v___y_3589_ = v___y_3621_;
v___y_3590_ = v___y_3624_;
v___y_3591_ = v___y_3623_;
v___y_3592_ = v___y_3627_;
v___y_3593_ = v___y_3628_;
v___y_3594_ = v___y_3629_;
v___y_3595_ = v___y_3630_;
v___y_3596_ = v___y_3631_;
v_a_3597_ = v___x_3642_;
goto v___jp_3579_;
}
}
}
else
{
lean_object* v_a_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3652_; 
v_a_3645_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3652_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3652_ == 0)
{
v___x_3647_ = v___x_3636_;
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_a_3645_);
lean_dec(v___x_3636_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
lean_object* v___x_3650_; 
if (v_isShared_3648_ == 0)
{
lean_ctor_set_tag(v___x_3647_, 0);
v___x_3650_ = v___x_3647_;
goto v_reusejp_3649_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v_a_3645_);
v___x_3650_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
v___y_3580_ = v___y_3610_;
v___y_3581_ = v___y_3611_;
v___y_3582_ = v___y_3612_;
v___y_3583_ = v___x_3635_;
v___y_3584_ = v___y_3613_;
v___y_3585_ = v___y_3617_;
v___y_3586_ = v___y_3616_;
v___y_3587_ = v___y_3618_;
v___y_3588_ = v_a_3633_;
v___y_3589_ = v___y_3621_;
v___y_3590_ = v___y_3624_;
v___y_3591_ = v___y_3623_;
v___y_3592_ = v___y_3627_;
v___y_3593_ = v___y_3628_;
v___y_3594_ = v___y_3629_;
v___y_3595_ = v___y_3630_;
v___y_3596_ = v___y_3631_;
v_a_3597_ = v___x_3650_;
goto v___jp_3579_;
}
}
}
}
else
{
lean_object* v___x_3653_; lean_object* v___x_3654_; 
v___x_3653_ = lean_io_get_num_heartbeats();
v___x_3654_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_3626_, v___y_3620_, v___y_3622_, v___y_3619_, v___y_3615_, v___y_3614_, v___y_3625_, v___y_3631_, v___y_3624_);
if (lean_obj_tag(v___x_3654_) == 0)
{
lean_object* v_a_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3662_; 
v_a_3655_ = lean_ctor_get(v___x_3654_, 0);
v_isSharedCheck_3662_ = !lean_is_exclusive(v___x_3654_);
if (v_isSharedCheck_3662_ == 0)
{
v___x_3657_ = v___x_3654_;
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_a_3655_);
lean_dec(v___x_3654_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3660_; 
if (v_isShared_3658_ == 0)
{
lean_ctor_set_tag(v___x_3657_, 1);
v___x_3660_ = v___x_3657_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v_a_3655_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
v___y_3553_ = v___y_3610_;
v___y_3554_ = v___y_3611_;
v___y_3555_ = v___y_3612_;
v___y_3556_ = v___x_3653_;
v___y_3557_ = v___y_3613_;
v___y_3558_ = v___y_3617_;
v___y_3559_ = v___y_3616_;
v___y_3560_ = v___y_3618_;
v___y_3561_ = v_a_3633_;
v___y_3562_ = v___y_3621_;
v___y_3563_ = v___y_3624_;
v___y_3564_ = v___y_3623_;
v___y_3565_ = v___y_3627_;
v___y_3566_ = v___y_3628_;
v___y_3567_ = v___y_3629_;
v___y_3568_ = v___y_3630_;
v___y_3569_ = v___y_3631_;
v_a_3570_ = v___x_3660_;
goto v___jp_3552_;
}
}
}
else
{
lean_object* v_a_3663_; lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3670_; 
v_a_3663_ = lean_ctor_get(v___x_3654_, 0);
v_isSharedCheck_3670_ = !lean_is_exclusive(v___x_3654_);
if (v_isSharedCheck_3670_ == 0)
{
v___x_3665_ = v___x_3654_;
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
else
{
lean_inc(v_a_3663_);
lean_dec(v___x_3654_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v___x_3668_; 
if (v_isShared_3666_ == 0)
{
lean_ctor_set_tag(v___x_3665_, 0);
v___x_3668_ = v___x_3665_;
goto v_reusejp_3667_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v_a_3663_);
v___x_3668_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3667_;
}
v_reusejp_3667_:
{
v___y_3553_ = v___y_3610_;
v___y_3554_ = v___y_3611_;
v___y_3555_ = v___y_3612_;
v___y_3556_ = v___x_3653_;
v___y_3557_ = v___y_3613_;
v___y_3558_ = v___y_3617_;
v___y_3559_ = v___y_3616_;
v___y_3560_ = v___y_3618_;
v___y_3561_ = v_a_3633_;
v___y_3562_ = v___y_3621_;
v___y_3563_ = v___y_3624_;
v___y_3564_ = v___y_3623_;
v___y_3565_ = v___y_3627_;
v___y_3566_ = v___y_3628_;
v___y_3567_ = v___y_3629_;
v___y_3568_ = v___y_3630_;
v___y_3569_ = v___y_3631_;
v_a_3570_ = v___x_3668_;
goto v___jp_3552_;
}
}
}
}
}
v___jp_3679_:
{
if (lean_obj_tag(v___y_3693_) == 0)
{
lean_object* v_toCold_3694_; lean_object* v_options_3695_; uint8_t v_hasTrace_3696_; 
v_toCold_3694_ = lean_ctor_get(v___y_3692_, 0);
v_options_3695_ = lean_ctor_get(v_toCold_3694_, 2);
v_hasTrace_3696_ = lean_ctor_get_uint8(v_options_3695_, sizeof(void*)*1);
if (v_hasTrace_3696_ == 0)
{
lean_object* v_a_3697_; lean_object* v___x_3698_; 
lean_dec_ref(v___f_3399_);
lean_dec_ref(v___x_3398_);
v_a_3697_ = lean_ctor_get(v___y_3693_, 0);
lean_inc(v_a_3697_);
lean_dec_ref_known(v___y_3693_, 1);
lean_inc(v_timeout_3674_);
lean_inc_ref(v_lratPath_3673_);
lean_inc_ref(v_solver_3672_);
v___x_3698_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_a_3697_, v_solver_3672_, v_lratPath_3673_, v_trimProofs_3675_, v_timeout_3674_, v_binaryProofs_3676_, v_solverMode_3678_, v___y_3692_, v___y_3687_);
v___y_3492_ = v___y_3680_;
v___y_3493_ = v___y_3682_;
v___y_3494_ = v___y_3683_;
v___y_3495_ = v___y_3684_;
v___y_3496_ = v___y_3685_;
v___y_3497_ = v___y_3686_;
v___y_3498_ = v___y_3688_;
v___y_3499_ = v___y_3687_;
v___y_3500_ = v___y_3689_;
v___y_3501_ = v___y_3690_;
v___y_3502_ = v___y_3691_;
v___y_3503_ = v___y_3692_;
v___y_3504_ = v___x_3698_;
goto v___jp_3491_;
}
else
{
lean_object* v_a_3699_; lean_object* v_inheritedTraceOptions_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; uint8_t v___x_3703_; 
v_a_3699_ = lean_ctor_get(v___y_3693_, 0);
lean_inc(v_a_3699_);
lean_dec_ref_known(v___y_3693_, 1);
v_inheritedTraceOptions_3700_ = lean_ctor_get(v_toCold_3694_, 11);
v___x_3701_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__1));
lean_inc(v___y_3688_);
v___x_3702_ = l_Lean_Name_append(v___x_3701_, v___y_3688_);
v___x_3703_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3700_, v_options_3695_, v___x_3702_);
lean_dec(v___x_3702_);
if (v___x_3703_ == 0)
{
lean_object* v___x_3704_; uint8_t v___x_3705_; 
v___x_3704_ = l_Lean_trace_profiler;
v___x_3705_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_options_3695_, v___x_3704_);
if (v___x_3705_ == 0)
{
lean_object* v___x_3706_; 
lean_dec_ref(v___f_3399_);
lean_dec_ref(v___x_3398_);
lean_inc(v_timeout_3674_);
lean_inc_ref(v_lratPath_3673_);
lean_inc_ref(v_solver_3672_);
v___x_3706_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_a_3699_, v_solver_3672_, v_lratPath_3673_, v_trimProofs_3675_, v_timeout_3674_, v_binaryProofs_3676_, v_solverMode_3678_, v___y_3692_, v___y_3687_);
v___y_3492_ = v___y_3680_;
v___y_3493_ = v___y_3682_;
v___y_3494_ = v___y_3683_;
v___y_3495_ = v___y_3684_;
v___y_3496_ = v___y_3685_;
v___y_3497_ = v___y_3686_;
v___y_3498_ = v___y_3688_;
v___y_3499_ = v___y_3687_;
v___y_3500_ = v___y_3689_;
v___y_3501_ = v___y_3690_;
v___y_3502_ = v___y_3691_;
v___y_3503_ = v___y_3692_;
v___y_3504_ = v___x_3706_;
goto v___jp_3491_;
}
else
{
lean_inc_ref(v_lratPath_3673_);
lean_inc_ref(v_solver_3672_);
lean_inc(v_timeout_3674_);
v___y_3610_ = v___y_3681_;
v___y_3611_ = v___y_3680_;
v___y_3612_ = v_options_3695_;
v___y_3613_ = v___y_3682_;
v___y_3614_ = v_binaryProofs_3676_;
v___y_3615_ = v_timeout_3674_;
v___y_3616_ = v___y_3683_;
v___y_3617_ = v___y_3684_;
v___y_3618_ = v___y_3685_;
v___y_3619_ = v_trimProofs_3675_;
v___y_3620_ = v_solver_3672_;
v___y_3621_ = v___y_3686_;
v___y_3622_ = v_lratPath_3673_;
v___y_3623_ = v___y_3688_;
v___y_3624_ = v___y_3687_;
v___y_3625_ = v_solverMode_3678_;
v___y_3626_ = v_a_3699_;
v___y_3627_ = v___y_3689_;
v___y_3628_ = v___x_3703_;
v___y_3629_ = v___y_3690_;
v___y_3630_ = v___y_3691_;
v___y_3631_ = v___y_3692_;
goto v___jp_3609_;
}
}
else
{
lean_inc_ref(v_lratPath_3673_);
lean_inc_ref(v_solver_3672_);
lean_inc(v_timeout_3674_);
v___y_3610_ = v___y_3681_;
v___y_3611_ = v___y_3680_;
v___y_3612_ = v_options_3695_;
v___y_3613_ = v___y_3682_;
v___y_3614_ = v_binaryProofs_3676_;
v___y_3615_ = v_timeout_3674_;
v___y_3616_ = v___y_3683_;
v___y_3617_ = v___y_3684_;
v___y_3618_ = v___y_3685_;
v___y_3619_ = v_trimProofs_3675_;
v___y_3620_ = v_solver_3672_;
v___y_3621_ = v___y_3686_;
v___y_3622_ = v_lratPath_3673_;
v___y_3623_ = v___y_3688_;
v___y_3624_ = v___y_3687_;
v___y_3625_ = v_solverMode_3678_;
v___y_3626_ = v_a_3699_;
v___y_3627_ = v___y_3689_;
v___y_3628_ = v___x_3703_;
v___y_3629_ = v___y_3690_;
v___y_3630_ = v___y_3691_;
v___y_3631_ = v___y_3692_;
goto v___jp_3609_;
}
}
}
else
{
lean_object* v_a_3707_; lean_object* v___x_3709_; uint8_t v_isShared_3710_; uint8_t v_isSharedCheck_3714_; 
lean_dec(v___y_3688_);
lean_dec_ref(v___f_3399_);
lean_dec_ref(v___x_3398_);
lean_dec_ref(v_satExpr_3396_);
lean_dec_ref(v_reflectionResult_3395_);
lean_dec_ref(v_unusedHypotheses_3394_);
lean_dec(v_goal_3393_);
lean_dec_ref(v_aig_3392_);
lean_dec_ref(v_ctx_3391_);
v_a_3707_ = lean_ctor_get(v___y_3693_, 0);
v_isSharedCheck_3714_ = !lean_is_exclusive(v___y_3693_);
if (v_isSharedCheck_3714_ == 0)
{
v___x_3709_ = v___y_3693_;
v_isShared_3710_ = v_isSharedCheck_3714_;
goto v_resetjp_3708_;
}
else
{
lean_inc(v_a_3707_);
lean_dec(v___y_3693_);
v___x_3709_ = lean_box(0);
v_isShared_3710_ = v_isSharedCheck_3714_;
goto v_resetjp_3708_;
}
v_resetjp_3708_:
{
lean_object* v___x_3712_; 
if (v_isShared_3710_ == 0)
{
v___x_3712_ = v___x_3709_;
goto v_reusejp_3711_;
}
else
{
lean_object* v_reuseFailAlloc_3713_; 
v_reuseFailAlloc_3713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3713_, 0, v_a_3707_);
v___x_3712_ = v_reuseFailAlloc_3713_;
goto v_reusejp_3711_;
}
v_reusejp_3711_:
{
return v___x_3712_;
}
}
}
}
v___jp_3715_:
{
lean_object* v___x_3734_; double v___x_3735_; double v___x_3736_; double v___x_3737_; double v___x_3738_; double v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; 
v___x_3734_ = lean_io_mono_nanos_now();
v___x_3735_ = lean_float_of_nat(v___y_3716_);
v___x_3736_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_3737_ = lean_float_div(v___x_3735_, v___x_3736_);
v___x_3738_ = lean_float_of_nat(v___x_3734_);
v___x_3739_ = lean_float_div(v___x_3738_, v___x_3736_);
v___x_3740_ = lean_box_float(v___x_3737_);
v___x_3741_ = lean_box_float(v___x_3739_);
v___x_3742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3742_, 0, v___x_3740_);
lean_ctor_set(v___x_3742_, 1, v___x_3741_);
v___x_3743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3743_, 0, v_a_3733_);
lean_ctor_set(v___x_3743_, 1, v___x_3742_);
lean_inc_ref(v___x_3398_);
lean_inc(v___y_3727_);
v___x_3744_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v___y_3727_, v___x_3397_, v___x_3398_, v___y_3724_, v___y_3719_, v___y_3729_, v___f_3401_, v___x_3743_, v___y_3717_, v___y_3720_, v___y_3718_, v___y_3730_, v___y_3725_, v___y_3731_, v___y_3722_, v___y_3728_, v___y_3721_, v___y_3723_, v___y_3732_, v___y_3726_);
v___y_3680_ = v___y_3718_;
v___y_3681_ = v___y_3717_;
v___y_3682_ = v___y_3720_;
v___y_3683_ = v___y_3722_;
v___y_3684_ = v___y_3721_;
v___y_3685_ = v___y_3723_;
v___y_3686_ = v___y_3725_;
v___y_3687_ = v___y_3726_;
v___y_3688_ = v___y_3727_;
v___y_3689_ = v___y_3728_;
v___y_3690_ = v___y_3730_;
v___y_3691_ = v___y_3731_;
v___y_3692_ = v___y_3732_;
v___y_3693_ = v___x_3744_;
goto v___jp_3679_;
}
v___jp_3745_:
{
lean_object* v___x_3764_; double v___x_3765_; double v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; 
v___x_3764_ = lean_io_get_num_heartbeats();
v___x_3765_ = lean_float_of_nat(v___y_3761_);
v___x_3766_ = lean_float_of_nat(v___x_3764_);
v___x_3767_ = lean_box_float(v___x_3765_);
v___x_3768_ = lean_box_float(v___x_3766_);
v___x_3769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3769_, 0, v___x_3767_);
lean_ctor_set(v___x_3769_, 1, v___x_3768_);
v___x_3770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3770_, 0, v_a_3763_);
lean_ctor_set(v___x_3770_, 1, v___x_3769_);
lean_inc_ref(v___x_3398_);
lean_inc(v___y_3756_);
v___x_3771_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v___y_3756_, v___x_3397_, v___x_3398_, v___y_3753_, v___y_3748_, v___y_3758_, v___f_3401_, v___x_3770_, v___y_3746_, v___y_3749_, v___y_3747_, v___y_3759_, v___y_3754_, v___y_3760_, v___y_3751_, v___y_3757_, v___y_3750_, v___y_3752_, v___y_3762_, v___y_3755_);
v___y_3680_ = v___y_3747_;
v___y_3681_ = v___y_3746_;
v___y_3682_ = v___y_3749_;
v___y_3683_ = v___y_3751_;
v___y_3684_ = v___y_3750_;
v___y_3685_ = v___y_3752_;
v___y_3686_ = v___y_3754_;
v___y_3687_ = v___y_3755_;
v___y_3688_ = v___y_3756_;
v___y_3689_ = v___y_3757_;
v___y_3690_ = v___y_3759_;
v___y_3691_ = v___y_3760_;
v___y_3692_ = v___y_3762_;
v___y_3693_ = v___x_3771_;
goto v___jp_3679_;
}
v___jp_3772_:
{
lean_object* v___x_3789_; lean_object* v_a_3790_; lean_object* v___x_3792_; uint8_t v_isShared_3793_; uint8_t v_isSharedCheck_3843_; 
v___x_3789_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___redArg(v___y_3784_);
v_a_3790_ = lean_ctor_get(v___x_3789_, 0);
v_isSharedCheck_3843_ = !lean_is_exclusive(v___x_3789_);
if (v_isSharedCheck_3843_ == 0)
{
v___x_3792_ = v___x_3789_;
v_isShared_3793_ = v_isSharedCheck_3843_;
goto v_resetjp_3791_;
}
else
{
lean_inc(v_a_3790_);
lean_dec(v___x_3789_);
v___x_3792_ = lean_box(0);
v_isShared_3793_ = v_isSharedCheck_3843_;
goto v_resetjp_3791_;
}
v_resetjp_3791_:
{
uint8_t v___x_3794_; 
v___x_3794_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v___y_3781_, v___x_3400_);
if (v___x_3794_ == 0)
{
lean_object* v___x_3795_; lean_object* v___x_3796_; 
v___x_3795_ = lean_io_mono_nanos_now();
v___x_3796_ = l_IO_lazyPure___redArg(v___f_3402_);
if (lean_obj_tag(v___x_3796_) == 0)
{
lean_object* v_a_3797_; lean_object* v___x_3799_; uint8_t v_isShared_3800_; uint8_t v_isSharedCheck_3804_; 
lean_del_object(v___x_3792_);
v_a_3797_ = lean_ctor_get(v___x_3796_, 0);
v_isSharedCheck_3804_ = !lean_is_exclusive(v___x_3796_);
if (v_isSharedCheck_3804_ == 0)
{
v___x_3799_ = v___x_3796_;
v_isShared_3800_ = v_isSharedCheck_3804_;
goto v_resetjp_3798_;
}
else
{
lean_inc(v_a_3797_);
lean_dec(v___x_3796_);
v___x_3799_ = lean_box(0);
v_isShared_3800_ = v_isSharedCheck_3804_;
goto v_resetjp_3798_;
}
v_resetjp_3798_:
{
lean_object* v___x_3802_; 
if (v_isShared_3800_ == 0)
{
lean_ctor_set_tag(v___x_3799_, 1);
v___x_3802_ = v___x_3799_;
goto v_reusejp_3801_;
}
else
{
lean_object* v_reuseFailAlloc_3803_; 
v_reuseFailAlloc_3803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3803_, 0, v_a_3797_);
v___x_3802_ = v_reuseFailAlloc_3803_;
goto v_reusejp_3801_;
}
v_reusejp_3801_:
{
v___y_3716_ = v___x_3795_;
v___y_3717_ = v___y_3773_;
v___y_3718_ = v___y_3774_;
v___y_3719_ = v___y_3775_;
v___y_3720_ = v___y_3776_;
v___y_3721_ = v___y_3778_;
v___y_3722_ = v___y_3777_;
v___y_3723_ = v___y_3780_;
v___y_3724_ = v___y_3781_;
v___y_3725_ = v___y_3782_;
v___y_3726_ = v___y_3784_;
v___y_3727_ = v___y_3783_;
v___y_3728_ = v___y_3785_;
v___y_3729_ = v_a_3790_;
v___y_3730_ = v___y_3786_;
v___y_3731_ = v___y_3787_;
v___y_3732_ = v___y_3788_;
v_a_3733_ = v___x_3802_;
goto v___jp_3715_;
}
}
}
else
{
lean_object* v_a_3805_; lean_object* v___x_3807_; uint8_t v_isShared_3808_; uint8_t v_isSharedCheck_3818_; 
v_a_3805_ = lean_ctor_get(v___x_3796_, 0);
v_isSharedCheck_3818_ = !lean_is_exclusive(v___x_3796_);
if (v_isSharedCheck_3818_ == 0)
{
v___x_3807_ = v___x_3796_;
v_isShared_3808_ = v_isSharedCheck_3818_;
goto v_resetjp_3806_;
}
else
{
lean_inc(v_a_3805_);
lean_dec(v___x_3796_);
v___x_3807_ = lean_box(0);
v_isShared_3808_ = v_isSharedCheck_3818_;
goto v_resetjp_3806_;
}
v_resetjp_3806_:
{
lean_object* v___x_3809_; lean_object* v___x_3811_; 
v___x_3809_ = lean_io_error_to_string(v_a_3805_);
if (v_isShared_3808_ == 0)
{
lean_ctor_set_tag(v___x_3807_, 3);
lean_ctor_set(v___x_3807_, 0, v___x_3809_);
v___x_3811_ = v___x_3807_;
goto v_reusejp_3810_;
}
else
{
lean_object* v_reuseFailAlloc_3817_; 
v_reuseFailAlloc_3817_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3817_, 0, v___x_3809_);
v___x_3811_ = v_reuseFailAlloc_3817_;
goto v_reusejp_3810_;
}
v_reusejp_3810_:
{
lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3815_; 
v___x_3812_ = l_Lean_MessageData_ofFormat(v___x_3811_);
lean_inc(v___y_3779_);
v___x_3813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3813_, 0, v___y_3779_);
lean_ctor_set(v___x_3813_, 1, v___x_3812_);
if (v_isShared_3793_ == 0)
{
lean_ctor_set(v___x_3792_, 0, v___x_3813_);
v___x_3815_ = v___x_3792_;
goto v_reusejp_3814_;
}
else
{
lean_object* v_reuseFailAlloc_3816_; 
v_reuseFailAlloc_3816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3816_, 0, v___x_3813_);
v___x_3815_ = v_reuseFailAlloc_3816_;
goto v_reusejp_3814_;
}
v_reusejp_3814_:
{
v___y_3716_ = v___x_3795_;
v___y_3717_ = v___y_3773_;
v___y_3718_ = v___y_3774_;
v___y_3719_ = v___y_3775_;
v___y_3720_ = v___y_3776_;
v___y_3721_ = v___y_3778_;
v___y_3722_ = v___y_3777_;
v___y_3723_ = v___y_3780_;
v___y_3724_ = v___y_3781_;
v___y_3725_ = v___y_3782_;
v___y_3726_ = v___y_3784_;
v___y_3727_ = v___y_3783_;
v___y_3728_ = v___y_3785_;
v___y_3729_ = v_a_3790_;
v___y_3730_ = v___y_3786_;
v___y_3731_ = v___y_3787_;
v___y_3732_ = v___y_3788_;
v_a_3733_ = v___x_3815_;
goto v___jp_3715_;
}
}
}
}
}
else
{
lean_object* v___x_3819_; lean_object* v___x_3820_; 
v___x_3819_ = lean_io_get_num_heartbeats();
v___x_3820_ = l_IO_lazyPure___redArg(v___f_3402_);
if (lean_obj_tag(v___x_3820_) == 0)
{
lean_object* v_a_3821_; lean_object* v___x_3823_; uint8_t v_isShared_3824_; uint8_t v_isSharedCheck_3828_; 
lean_del_object(v___x_3792_);
v_a_3821_ = lean_ctor_get(v___x_3820_, 0);
v_isSharedCheck_3828_ = !lean_is_exclusive(v___x_3820_);
if (v_isSharedCheck_3828_ == 0)
{
v___x_3823_ = v___x_3820_;
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
else
{
lean_inc(v_a_3821_);
lean_dec(v___x_3820_);
v___x_3823_ = lean_box(0);
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
v_resetjp_3822_:
{
lean_object* v___x_3826_; 
if (v_isShared_3824_ == 0)
{
lean_ctor_set_tag(v___x_3823_, 1);
v___x_3826_ = v___x_3823_;
goto v_reusejp_3825_;
}
else
{
lean_object* v_reuseFailAlloc_3827_; 
v_reuseFailAlloc_3827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3827_, 0, v_a_3821_);
v___x_3826_ = v_reuseFailAlloc_3827_;
goto v_reusejp_3825_;
}
v_reusejp_3825_:
{
v___y_3746_ = v___y_3773_;
v___y_3747_ = v___y_3774_;
v___y_3748_ = v___y_3775_;
v___y_3749_ = v___y_3776_;
v___y_3750_ = v___y_3778_;
v___y_3751_ = v___y_3777_;
v___y_3752_ = v___y_3780_;
v___y_3753_ = v___y_3781_;
v___y_3754_ = v___y_3782_;
v___y_3755_ = v___y_3784_;
v___y_3756_ = v___y_3783_;
v___y_3757_ = v___y_3785_;
v___y_3758_ = v_a_3790_;
v___y_3759_ = v___y_3786_;
v___y_3760_ = v___y_3787_;
v___y_3761_ = v___x_3819_;
v___y_3762_ = v___y_3788_;
v_a_3763_ = v___x_3826_;
goto v___jp_3745_;
}
}
}
else
{
lean_object* v_a_3829_; lean_object* v___x_3831_; uint8_t v_isShared_3832_; uint8_t v_isSharedCheck_3842_; 
v_a_3829_ = lean_ctor_get(v___x_3820_, 0);
v_isSharedCheck_3842_ = !lean_is_exclusive(v___x_3820_);
if (v_isSharedCheck_3842_ == 0)
{
v___x_3831_ = v___x_3820_;
v_isShared_3832_ = v_isSharedCheck_3842_;
goto v_resetjp_3830_;
}
else
{
lean_inc(v_a_3829_);
lean_dec(v___x_3820_);
v___x_3831_ = lean_box(0);
v_isShared_3832_ = v_isSharedCheck_3842_;
goto v_resetjp_3830_;
}
v_resetjp_3830_:
{
lean_object* v___x_3833_; lean_object* v___x_3835_; 
v___x_3833_ = lean_io_error_to_string(v_a_3829_);
if (v_isShared_3832_ == 0)
{
lean_ctor_set_tag(v___x_3831_, 3);
lean_ctor_set(v___x_3831_, 0, v___x_3833_);
v___x_3835_ = v___x_3831_;
goto v_reusejp_3834_;
}
else
{
lean_object* v_reuseFailAlloc_3841_; 
v_reuseFailAlloc_3841_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3841_, 0, v___x_3833_);
v___x_3835_ = v_reuseFailAlloc_3841_;
goto v_reusejp_3834_;
}
v_reusejp_3834_:
{
lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3839_; 
v___x_3836_ = l_Lean_MessageData_ofFormat(v___x_3835_);
lean_inc(v___y_3779_);
v___x_3837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3837_, 0, v___y_3779_);
lean_ctor_set(v___x_3837_, 1, v___x_3836_);
if (v_isShared_3793_ == 0)
{
lean_ctor_set(v___x_3792_, 0, v___x_3837_);
v___x_3839_ = v___x_3792_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3840_; 
v_reuseFailAlloc_3840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3840_, 0, v___x_3837_);
v___x_3839_ = v_reuseFailAlloc_3840_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
v___y_3746_ = v___y_3773_;
v___y_3747_ = v___y_3774_;
v___y_3748_ = v___y_3775_;
v___y_3749_ = v___y_3776_;
v___y_3750_ = v___y_3778_;
v___y_3751_ = v___y_3777_;
v___y_3752_ = v___y_3780_;
v___y_3753_ = v___y_3781_;
v___y_3754_ = v___y_3782_;
v___y_3755_ = v___y_3784_;
v___y_3756_ = v___y_3783_;
v___y_3757_ = v___y_3785_;
v___y_3758_ = v_a_3790_;
v___y_3759_ = v___y_3786_;
v___y_3760_ = v___y_3787_;
v___y_3761_ = v___x_3819_;
v___y_3762_ = v___y_3788_;
v_a_3763_ = v___x_3839_;
goto v___jp_3745_;
}
}
}
}
}
}
}
v___jp_3844_:
{
lean_object* v_options_3859_; lean_object* v_inheritedTraceOptions_3860_; uint8_t v_hasTrace_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; 
v_options_3859_ = lean_ctor_get(v_toCold_3856_, 2);
v_inheritedTraceOptions_3860_ = lean_ctor_get(v_toCold_3856_, 11);
v_hasTrace_3861_ = lean_ctor_get_uint8(v_options_3859_, sizeof(void*)*1);
v___x_3862_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__2));
v___x_3863_ = l_Lean_Name_mkStr3(v___x_3403_, v___x_3404_, v___x_3862_);
if (v_hasTrace_3861_ == 0)
{
lean_object* v___x_3864_; 
lean_dec_ref(v___f_3402_);
lean_dec_ref(v___f_3401_);
lean_inc(v___y_3858_);
lean_inc_ref(v___y_3855_);
lean_inc(v___y_3854_);
lean_inc_ref(v___y_3853_);
lean_inc(v___y_3852_);
lean_inc_ref(v___y_3851_);
lean_inc(v___y_3850_);
lean_inc_ref(v___y_3849_);
lean_inc(v___y_3848_);
lean_inc(v___y_3847_);
lean_inc_ref(v___y_3846_);
v___x_3864_ = lean_apply_12(v___f_3405_, v___y_3846_, v___y_3847_, v___y_3848_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_, v___y_3858_, lean_box(0));
v___y_3680_ = v___y_3847_;
v___y_3681_ = v___y_3845_;
v___y_3682_ = v___y_3846_;
v___y_3683_ = v___y_3851_;
v___y_3684_ = v___y_3853_;
v___y_3685_ = v___y_3854_;
v___y_3686_ = v___y_3849_;
v___y_3687_ = v___y_3858_;
v___y_3688_ = v___x_3863_;
v___y_3689_ = v___y_3852_;
v___y_3690_ = v___y_3848_;
v___y_3691_ = v___y_3850_;
v___y_3692_ = v___y_3855_;
v___y_3693_ = v___x_3864_;
goto v___jp_3679_;
}
else
{
lean_object* v___x_3865_; lean_object* v___x_3866_; uint8_t v___x_3867_; 
v___x_3865_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__1));
lean_inc(v___x_3863_);
v___x_3866_ = l_Lean_Name_append(v___x_3865_, v___x_3863_);
v___x_3867_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3860_, v_options_3859_, v___x_3866_);
lean_dec(v___x_3866_);
if (v___x_3867_ == 0)
{
lean_object* v___x_3868_; uint8_t v___x_3869_; 
v___x_3868_ = l_Lean_trace_profiler;
v___x_3869_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_options_3859_, v___x_3868_);
if (v___x_3869_ == 0)
{
lean_object* v___x_3870_; 
lean_dec_ref(v___f_3402_);
lean_dec_ref(v___f_3401_);
lean_inc(v___y_3858_);
lean_inc_ref(v___y_3855_);
lean_inc(v___y_3854_);
lean_inc_ref(v___y_3853_);
lean_inc(v___y_3852_);
lean_inc_ref(v___y_3851_);
lean_inc(v___y_3850_);
lean_inc_ref(v___y_3849_);
lean_inc(v___y_3848_);
lean_inc(v___y_3847_);
lean_inc_ref(v___y_3846_);
v___x_3870_ = lean_apply_12(v___f_3405_, v___y_3846_, v___y_3847_, v___y_3848_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_, v___y_3858_, lean_box(0));
v___y_3680_ = v___y_3847_;
v___y_3681_ = v___y_3845_;
v___y_3682_ = v___y_3846_;
v___y_3683_ = v___y_3851_;
v___y_3684_ = v___y_3853_;
v___y_3685_ = v___y_3854_;
v___y_3686_ = v___y_3849_;
v___y_3687_ = v___y_3858_;
v___y_3688_ = v___x_3863_;
v___y_3689_ = v___y_3852_;
v___y_3690_ = v___y_3848_;
v___y_3691_ = v___y_3850_;
v___y_3692_ = v___y_3855_;
v___y_3693_ = v___x_3870_;
goto v___jp_3679_;
}
else
{
lean_dec_ref(v___f_3405_);
v___y_3773_ = v___y_3845_;
v___y_3774_ = v___y_3847_;
v___y_3775_ = v___x_3867_;
v___y_3776_ = v___y_3846_;
v___y_3777_ = v___y_3851_;
v___y_3778_ = v___y_3853_;
v___y_3779_ = v_ref_3857_;
v___y_3780_ = v___y_3854_;
v___y_3781_ = v_options_3859_;
v___y_3782_ = v___y_3849_;
v___y_3783_ = v___x_3863_;
v___y_3784_ = v___y_3858_;
v___y_3785_ = v___y_3852_;
v___y_3786_ = v___y_3848_;
v___y_3787_ = v___y_3850_;
v___y_3788_ = v___y_3855_;
goto v___jp_3772_;
}
}
else
{
lean_dec_ref(v___f_3405_);
v___y_3773_ = v___y_3845_;
v___y_3774_ = v___y_3847_;
v___y_3775_ = v___x_3867_;
v___y_3776_ = v___y_3846_;
v___y_3777_ = v___y_3851_;
v___y_3778_ = v___y_3853_;
v___y_3779_ = v_ref_3857_;
v___y_3780_ = v___y_3854_;
v___y_3781_ = v_options_3859_;
v___y_3782_ = v___y_3849_;
v___y_3783_ = v___x_3863_;
v___y_3784_ = v___y_3858_;
v___y_3785_ = v___y_3852_;
v___y_3786_ = v___y_3848_;
v___y_3787_ = v___y_3850_;
v___y_3788_ = v___y_3855_;
goto v___jp_3772_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__13___boxed(lean_object** _args){
lean_object* v_ctx_3890_ = _args[0];
lean_object* v_aig_3891_ = _args[1];
lean_object* v_goal_3892_ = _args[2];
lean_object* v_unusedHypotheses_3893_ = _args[3];
lean_object* v_reflectionResult_3894_ = _args[4];
lean_object* v_satExpr_3895_ = _args[5];
lean_object* v___x_3896_ = _args[6];
lean_object* v___x_3897_ = _args[7];
lean_object* v___f_3898_ = _args[8];
lean_object* v___x_3899_ = _args[9];
lean_object* v___f_3900_ = _args[10];
lean_object* v___f_3901_ = _args[11];
lean_object* v___x_3902_ = _args[12];
lean_object* v___x_3903_ = _args[13];
lean_object* v___f_3904_ = _args[14];
lean_object* v_a_3905_ = _args[15];
lean_object* v_____r_3906_ = _args[16];
lean_object* v___y_3907_ = _args[17];
lean_object* v___y_3908_ = _args[18];
lean_object* v___y_3909_ = _args[19];
lean_object* v___y_3910_ = _args[20];
lean_object* v___y_3911_ = _args[21];
lean_object* v___y_3912_ = _args[22];
lean_object* v___y_3913_ = _args[23];
lean_object* v___y_3914_ = _args[24];
lean_object* v___y_3915_ = _args[25];
lean_object* v___y_3916_ = _args[26];
lean_object* v___y_3917_ = _args[27];
lean_object* v___y_3918_ = _args[28];
lean_object* v___y_3919_ = _args[29];
_start:
{
uint8_t v___x_656847__boxed_3920_; lean_object* v_res_3921_; 
v___x_656847__boxed_3920_ = lean_unbox(v___x_3896_);
v_res_3921_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__13(v_ctx_3890_, v_aig_3891_, v_goal_3892_, v_unusedHypotheses_3893_, v_reflectionResult_3894_, v_satExpr_3895_, v___x_656847__boxed_3920_, v___x_3897_, v___f_3898_, v___x_3899_, v___f_3900_, v___f_3901_, v___x_3902_, v___x_3903_, v___f_3904_, v_a_3905_, v_____r_3906_, v___y_3907_, v___y_3908_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_, v___y_3915_, v___y_3916_, v___y_3917_, v___y_3918_);
lean_dec(v___y_3918_);
lean_dec_ref(v___y_3917_);
lean_dec(v___y_3916_);
lean_dec_ref(v___y_3915_);
lean_dec(v___y_3914_);
lean_dec_ref(v___y_3913_);
lean_dec(v___y_3912_);
lean_dec_ref(v___y_3911_);
lean_dec(v___y_3910_);
lean_dec(v___y_3909_);
lean_dec_ref(v___y_3908_);
lean_dec(v___y_3907_);
lean_dec_ref(v___x_3899_);
return v_res_3921_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__9_spec__21(lean_object* v_e_3922_){
_start:
{
if (lean_obj_tag(v_e_3922_) == 0)
{
uint8_t v___x_3923_; 
v___x_3923_ = 2;
return v___x_3923_;
}
else
{
uint8_t v___x_3924_; 
v___x_3924_ = 0;
return v___x_3924_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__9_spec__21___boxed(lean_object* v_e_3925_){
_start:
{
uint8_t v_res_3926_; lean_object* v_r_3927_; 
v_res_3926_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__9_spec__21(v_e_3925_);
lean_dec_ref(v_e_3925_);
v_r_3927_ = lean_box(v_res_3926_);
return v_r_3927_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__9(lean_object* v_cls_3928_, uint8_t v_collapsed_3929_, lean_object* v_tag_3930_, lean_object* v_opts_3931_, uint8_t v_clsEnabled_3932_, lean_object* v_oldTraces_3933_, lean_object* v_msg_3934_, lean_object* v_resStartStop_3935_, lean_object* v___y_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_){
_start:
{
lean_object* v_fst_3949_; lean_object* v_snd_3950_; lean_object* v___y_3952_; lean_object* v___y_3953_; lean_object* v_data_3954_; lean_object* v_fst_3965_; lean_object* v_snd_3966_; lean_object* v___x_3967_; uint8_t v___x_3968_; lean_object* v___y_3970_; lean_object* v_a_3971_; uint8_t v___y_3986_; double v___y_4018_; 
v_fst_3949_ = lean_ctor_get(v_resStartStop_3935_, 0);
lean_inc(v_fst_3949_);
v_snd_3950_ = lean_ctor_get(v_resStartStop_3935_, 1);
lean_inc(v_snd_3950_);
lean_dec_ref(v_resStartStop_3935_);
v_fst_3965_ = lean_ctor_get(v_snd_3950_, 0);
lean_inc(v_fst_3965_);
v_snd_3966_ = lean_ctor_get(v_snd_3950_, 1);
lean_inc(v_snd_3966_);
lean_dec(v_snd_3950_);
v___x_3967_ = l_Lean_trace_profiler;
v___x_3968_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_opts_3931_, v___x_3967_);
if (v___x_3968_ == 0)
{
v___y_3986_ = v___x_3968_;
goto v___jp_3985_;
}
else
{
lean_object* v___x_4023_; uint8_t v___x_4024_; 
v___x_4023_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4024_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_opts_3931_, v___x_4023_);
if (v___x_4024_ == 0)
{
lean_object* v___x_4025_; lean_object* v___x_4026_; double v___x_4027_; double v___x_4028_; double v___x_4029_; 
v___x_4025_ = l_Lean_trace_profiler_threshold;
v___x_4026_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v_opts_3931_, v___x_4025_);
v___x_4027_ = lean_float_of_nat(v___x_4026_);
v___x_4028_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3);
v___x_4029_ = lean_float_div(v___x_4027_, v___x_4028_);
v___y_4018_ = v___x_4029_;
goto v___jp_4017_;
}
else
{
lean_object* v___x_4030_; lean_object* v___x_4031_; double v___x_4032_; 
v___x_4030_ = l_Lean_trace_profiler_threshold;
v___x_4031_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v_opts_3931_, v___x_4030_);
v___x_4032_ = lean_float_of_nat(v___x_4031_);
v___y_4018_ = v___x_4032_;
goto v___jp_4017_;
}
}
v___jp_3951_:
{
lean_object* v___x_3955_; 
lean_inc(v___y_3952_);
v___x_3955_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__8___redArg(v_oldTraces_3933_, v_data_3954_, v___y_3952_, v___y_3953_, v___y_3944_, v___y_3945_, v___y_3946_, v___y_3947_);
if (lean_obj_tag(v___x_3955_) == 0)
{
lean_object* v___x_3956_; 
lean_dec_ref_known(v___x_3955_, 1);
v___x_3956_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9___redArg(v_fst_3949_);
return v___x_3956_;
}
else
{
lean_object* v_a_3957_; lean_object* v___x_3959_; uint8_t v_isShared_3960_; uint8_t v_isSharedCheck_3964_; 
lean_dec(v_fst_3949_);
v_a_3957_ = lean_ctor_get(v___x_3955_, 0);
v_isSharedCheck_3964_ = !lean_is_exclusive(v___x_3955_);
if (v_isSharedCheck_3964_ == 0)
{
v___x_3959_ = v___x_3955_;
v_isShared_3960_ = v_isSharedCheck_3964_;
goto v_resetjp_3958_;
}
else
{
lean_inc(v_a_3957_);
lean_dec(v___x_3955_);
v___x_3959_ = lean_box(0);
v_isShared_3960_ = v_isSharedCheck_3964_;
goto v_resetjp_3958_;
}
v_resetjp_3958_:
{
lean_object* v___x_3962_; 
if (v_isShared_3960_ == 0)
{
v___x_3962_ = v___x_3959_;
goto v_reusejp_3961_;
}
else
{
lean_object* v_reuseFailAlloc_3963_; 
v_reuseFailAlloc_3963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3963_, 0, v_a_3957_);
v___x_3962_ = v_reuseFailAlloc_3963_;
goto v_reusejp_3961_;
}
v_reusejp_3961_:
{
return v___x_3962_;
}
}
}
}
v___jp_3969_:
{
uint8_t v_result_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; double v___x_3975_; lean_object* v_data_3976_; 
v_result_3972_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__9_spec__21(v_fst_3949_);
v___x_3973_ = lean_box(v_result_3972_);
v___x_3974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3974_, 0, v___x_3973_);
v___x_3975_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0);
lean_inc_ref(v_tag_3930_);
lean_inc_ref(v___x_3974_);
lean_inc(v_cls_3928_);
v_data_3976_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3976_, 0, v_cls_3928_);
lean_ctor_set(v_data_3976_, 1, v___x_3974_);
lean_ctor_set(v_data_3976_, 2, v_tag_3930_);
lean_ctor_set_float(v_data_3976_, sizeof(void*)*3, v___x_3975_);
lean_ctor_set_float(v_data_3976_, sizeof(void*)*3 + 8, v___x_3975_);
lean_ctor_set_uint8(v_data_3976_, sizeof(void*)*3 + 16, v_collapsed_3929_);
if (v___x_3968_ == 0)
{
lean_dec_ref_known(v___x_3974_, 1);
lean_dec(v_snd_3966_);
lean_dec(v_fst_3965_);
lean_dec_ref(v_tag_3930_);
lean_dec(v_cls_3928_);
v___y_3952_ = v___y_3970_;
v___y_3953_ = v_a_3971_;
v_data_3954_ = v_data_3976_;
goto v___jp_3951_;
}
else
{
lean_object* v_data_3977_; double v___x_3978_; double v___x_3979_; 
lean_dec_ref_known(v_data_3976_, 3);
v_data_3977_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3977_, 0, v_cls_3928_);
lean_ctor_set(v_data_3977_, 1, v___x_3974_);
lean_ctor_set(v_data_3977_, 2, v_tag_3930_);
v___x_3978_ = lean_unbox_float(v_fst_3965_);
lean_dec(v_fst_3965_);
lean_ctor_set_float(v_data_3977_, sizeof(void*)*3, v___x_3978_);
v___x_3979_ = lean_unbox_float(v_snd_3966_);
lean_dec(v_snd_3966_);
lean_ctor_set_float(v_data_3977_, sizeof(void*)*3 + 8, v___x_3979_);
lean_ctor_set_uint8(v_data_3977_, sizeof(void*)*3 + 16, v_collapsed_3929_);
v___y_3952_ = v___y_3970_;
v___y_3953_ = v_a_3971_;
v_data_3954_ = v_data_3977_;
goto v___jp_3951_;
}
}
v___jp_3980_:
{
lean_object* v_ref_3981_; lean_object* v___x_3982_; 
v_ref_3981_ = lean_ctor_get(v___y_3946_, 2);
lean_inc(v___y_3947_);
lean_inc_ref(v___y_3946_);
lean_inc(v___y_3945_);
lean_inc_ref(v___y_3944_);
lean_inc(v___y_3943_);
lean_inc_ref(v___y_3942_);
lean_inc(v___y_3941_);
lean_inc_ref(v___y_3940_);
lean_inc(v___y_3939_);
lean_inc(v___y_3938_);
lean_inc_ref(v___y_3937_);
lean_inc(v___y_3936_);
lean_inc(v_fst_3949_);
v___x_3982_ = lean_apply_14(v_msg_3934_, v_fst_3949_, v___y_3936_, v___y_3937_, v___y_3938_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_, v___y_3944_, v___y_3945_, v___y_3946_, v___y_3947_, lean_box(0));
if (lean_obj_tag(v___x_3982_) == 0)
{
lean_object* v_a_3983_; 
v_a_3983_ = lean_ctor_get(v___x_3982_, 0);
lean_inc(v_a_3983_);
lean_dec_ref_known(v___x_3982_, 1);
v___y_3970_ = v_ref_3981_;
v_a_3971_ = v_a_3983_;
goto v___jp_3969_;
}
else
{
lean_object* v___x_3984_; 
lean_dec_ref_known(v___x_3982_, 1);
v___x_3984_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2);
v___y_3970_ = v_ref_3981_;
v_a_3971_ = v___x_3984_;
goto v___jp_3969_;
}
}
v___jp_3985_:
{
if (v_clsEnabled_3932_ == 0)
{
if (v___y_3986_ == 0)
{
lean_object* v___x_3987_; lean_object* v_traceState_3988_; lean_object* v_env_3989_; lean_object* v_nextMacroScope_3990_; lean_object* v_ngen_3991_; lean_object* v_auxDeclNGen_3992_; lean_object* v_cache_3993_; lean_object* v_recordedDeps_3994_; lean_object* v_messages_3995_; lean_object* v_infoState_3996_; lean_object* v_snapshotTasks_3997_; lean_object* v___x_3999_; uint8_t v_isShared_4000_; uint8_t v_isSharedCheck_4016_; 
lean_dec(v_snd_3966_);
lean_dec(v_fst_3965_);
lean_dec_ref(v_msg_3934_);
lean_dec_ref(v_tag_3930_);
lean_dec(v_cls_3928_);
v___x_3987_ = lean_st_ref_take(v___y_3947_);
v_traceState_3988_ = lean_ctor_get(v___x_3987_, 4);
v_env_3989_ = lean_ctor_get(v___x_3987_, 0);
v_nextMacroScope_3990_ = lean_ctor_get(v___x_3987_, 1);
v_ngen_3991_ = lean_ctor_get(v___x_3987_, 2);
v_auxDeclNGen_3992_ = lean_ctor_get(v___x_3987_, 3);
v_cache_3993_ = lean_ctor_get(v___x_3987_, 5);
v_recordedDeps_3994_ = lean_ctor_get(v___x_3987_, 6);
v_messages_3995_ = lean_ctor_get(v___x_3987_, 7);
v_infoState_3996_ = lean_ctor_get(v___x_3987_, 8);
v_snapshotTasks_3997_ = lean_ctor_get(v___x_3987_, 9);
v_isSharedCheck_4016_ = !lean_is_exclusive(v___x_3987_);
if (v_isSharedCheck_4016_ == 0)
{
v___x_3999_ = v___x_3987_;
v_isShared_4000_ = v_isSharedCheck_4016_;
goto v_resetjp_3998_;
}
else
{
lean_inc(v_snapshotTasks_3997_);
lean_inc(v_infoState_3996_);
lean_inc(v_messages_3995_);
lean_inc(v_recordedDeps_3994_);
lean_inc(v_cache_3993_);
lean_inc(v_traceState_3988_);
lean_inc(v_auxDeclNGen_3992_);
lean_inc(v_ngen_3991_);
lean_inc(v_nextMacroScope_3990_);
lean_inc(v_env_3989_);
lean_dec(v___x_3987_);
v___x_3999_ = lean_box(0);
v_isShared_4000_ = v_isSharedCheck_4016_;
goto v_resetjp_3998_;
}
v_resetjp_3998_:
{
uint64_t v_tid_4001_; lean_object* v_traces_4002_; lean_object* v___x_4004_; uint8_t v_isShared_4005_; uint8_t v_isSharedCheck_4015_; 
v_tid_4001_ = lean_ctor_get_uint64(v_traceState_3988_, sizeof(void*)*1);
v_traces_4002_ = lean_ctor_get(v_traceState_3988_, 0);
v_isSharedCheck_4015_ = !lean_is_exclusive(v_traceState_3988_);
if (v_isSharedCheck_4015_ == 0)
{
v___x_4004_ = v_traceState_3988_;
v_isShared_4005_ = v_isSharedCheck_4015_;
goto v_resetjp_4003_;
}
else
{
lean_inc(v_traces_4002_);
lean_dec(v_traceState_3988_);
v___x_4004_ = lean_box(0);
v_isShared_4005_ = v_isSharedCheck_4015_;
goto v_resetjp_4003_;
}
v_resetjp_4003_:
{
lean_object* v___x_4006_; lean_object* v___x_4008_; 
v___x_4006_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_3933_, v_traces_4002_);
lean_dec_ref(v_traces_4002_);
if (v_isShared_4005_ == 0)
{
lean_ctor_set(v___x_4004_, 0, v___x_4006_);
v___x_4008_ = v___x_4004_;
goto v_reusejp_4007_;
}
else
{
lean_object* v_reuseFailAlloc_4014_; 
v_reuseFailAlloc_4014_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4014_, 0, v___x_4006_);
lean_ctor_set_uint64(v_reuseFailAlloc_4014_, sizeof(void*)*1, v_tid_4001_);
v___x_4008_ = v_reuseFailAlloc_4014_;
goto v_reusejp_4007_;
}
v_reusejp_4007_:
{
lean_object* v___x_4010_; 
if (v_isShared_4000_ == 0)
{
lean_ctor_set(v___x_3999_, 4, v___x_4008_);
v___x_4010_ = v___x_3999_;
goto v_reusejp_4009_;
}
else
{
lean_object* v_reuseFailAlloc_4013_; 
v_reuseFailAlloc_4013_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4013_, 0, v_env_3989_);
lean_ctor_set(v_reuseFailAlloc_4013_, 1, v_nextMacroScope_3990_);
lean_ctor_set(v_reuseFailAlloc_4013_, 2, v_ngen_3991_);
lean_ctor_set(v_reuseFailAlloc_4013_, 3, v_auxDeclNGen_3992_);
lean_ctor_set(v_reuseFailAlloc_4013_, 4, v___x_4008_);
lean_ctor_set(v_reuseFailAlloc_4013_, 5, v_cache_3993_);
lean_ctor_set(v_reuseFailAlloc_4013_, 6, v_recordedDeps_3994_);
lean_ctor_set(v_reuseFailAlloc_4013_, 7, v_messages_3995_);
lean_ctor_set(v_reuseFailAlloc_4013_, 8, v_infoState_3996_);
lean_ctor_set(v_reuseFailAlloc_4013_, 9, v_snapshotTasks_3997_);
v___x_4010_ = v_reuseFailAlloc_4013_;
goto v_reusejp_4009_;
}
v_reusejp_4009_:
{
lean_object* v___x_4011_; lean_object* v___x_4012_; 
v___x_4011_ = lean_st_ref_put(v___y_3947_, v___x_4010_);
v___x_4012_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9___redArg(v_fst_3949_);
return v___x_4012_;
}
}
}
}
}
else
{
goto v___jp_3980_;
}
}
else
{
goto v___jp_3980_;
}
}
v___jp_4017_:
{
double v___x_4019_; double v___x_4020_; double v___x_4021_; uint8_t v___x_4022_; 
v___x_4019_ = lean_unbox_float(v_snd_3966_);
v___x_4020_ = lean_unbox_float(v_fst_3965_);
v___x_4021_ = lean_float_sub(v___x_4019_, v___x_4020_);
v___x_4022_ = lean_float_decLt(v___y_4018_, v___x_4021_);
v___y_3986_ = v___x_4022_;
goto v___jp_3985_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__9___boxed(lean_object** _args){
lean_object* v_cls_4033_ = _args[0];
lean_object* v_collapsed_4034_ = _args[1];
lean_object* v_tag_4035_ = _args[2];
lean_object* v_opts_4036_ = _args[3];
lean_object* v_clsEnabled_4037_ = _args[4];
lean_object* v_oldTraces_4038_ = _args[5];
lean_object* v_msg_4039_ = _args[6];
lean_object* v_resStartStop_4040_ = _args[7];
lean_object* v___y_4041_ = _args[8];
lean_object* v___y_4042_ = _args[9];
lean_object* v___y_4043_ = _args[10];
lean_object* v___y_4044_ = _args[11];
lean_object* v___y_4045_ = _args[12];
lean_object* v___y_4046_ = _args[13];
lean_object* v___y_4047_ = _args[14];
lean_object* v___y_4048_ = _args[15];
lean_object* v___y_4049_ = _args[16];
lean_object* v___y_4050_ = _args[17];
lean_object* v___y_4051_ = _args[18];
lean_object* v___y_4052_ = _args[19];
lean_object* v___y_4053_ = _args[20];
_start:
{
uint8_t v_collapsed_boxed_4054_; uint8_t v_clsEnabled_boxed_4055_; lean_object* v_res_4056_; 
v_collapsed_boxed_4054_ = lean_unbox(v_collapsed_4034_);
v_clsEnabled_boxed_4055_ = lean_unbox(v_clsEnabled_4037_);
v_res_4056_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__9(v_cls_4033_, v_collapsed_boxed_4054_, v_tag_4035_, v_opts_4036_, v_clsEnabled_boxed_4055_, v_oldTraces_4038_, v_msg_4039_, v_resStartStop_4040_, v___y_4041_, v___y_4042_, v___y_4043_, v___y_4044_, v___y_4045_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_, v___y_4050_, v___y_4051_, v___y_4052_);
lean_dec(v___y_4052_);
lean_dec_ref(v___y_4051_);
lean_dec(v___y_4050_);
lean_dec_ref(v___y_4049_);
lean_dec(v___y_4048_);
lean_dec_ref(v___y_4047_);
lean_dec(v___y_4046_);
lean_dec_ref(v___y_4045_);
lean_dec(v___y_4044_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
lean_dec(v___y_4041_);
lean_dec_ref(v_opts_4036_);
return v_res_4056_;
}
}
static lean_object* _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__6(void){
_start:
{
lean_object* v_cls_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; 
v_cls_4066_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__5));
v___x_4067_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__1));
v___x_4068_ = l_Lean_Name_append(v___x_4067_, v_cls_4066_);
return v___x_4068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster(lean_object* v_ctx_4072_, lean_object* v_goal_4073_, lean_object* v_reflectionResult_4074_, lean_object* v_a_4075_, lean_object* v_a_4076_, lean_object* v_a_4077_, lean_object* v_a_4078_, lean_object* v_a_4079_, lean_object* v_a_4080_, lean_object* v_a_4081_, lean_object* v_a_4082_, lean_object* v_a_4083_, lean_object* v_a_4084_, lean_object* v_a_4085_, lean_object* v_a_4086_){
_start:
{
lean_object* v_satExpr_4088_; lean_object* v_unusedHypotheses_4089_; lean_object* v___y_4091_; lean_object* v___y_4092_; lean_object* v___y_4093_; lean_object* v___y_4119_; lean_object* v___y_4120_; lean_object* v___y_4121_; lean_object* v___y_4122_; lean_object* v___y_4123_; lean_object* v___y_4124_; lean_object* v___y_4125_; lean_object* v___y_4126_; lean_object* v___y_4127_; lean_object* v___y_4128_; lean_object* v___y_4129_; lean_object* v___y_4130_; lean_object* v___y_4162_; lean_object* v___y_4163_; lean_object* v___y_4164_; lean_object* v___y_4165_; lean_object* v___y_4166_; lean_object* v___y_4167_; lean_object* v___y_4168_; lean_object* v___y_4169_; lean_object* v___y_4170_; lean_object* v___y_4171_; lean_object* v___y_4172_; lean_object* v___y_4173_; lean_object* v___y_4174_; lean_object* v___y_4175_; lean_object* v_toCold_4223_; lean_object* v_options_4224_; lean_object* v_bvExpr_4225_; lean_object* v_ref_4226_; lean_object* v_inheritedTraceOptions_4227_; uint8_t v_hasTrace_4228_; lean_object* v___f_4229_; lean_object* v___f_4230_; lean_object* v___f_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v_cls_4235_; lean_object* v___f_4236_; lean_object* v___f_4237_; uint8_t v___x_4238_; lean_object* v___x_4239_; lean_object* v___y_4241_; lean_object* v___y_4242_; lean_object* v___y_4243_; lean_object* v___y_4244_; lean_object* v___y_4245_; lean_object* v___y_4246_; lean_object* v___y_4247_; lean_object* v___y_4248_; lean_object* v___y_4249_; lean_object* v___y_4250_; lean_object* v___y_4251_; lean_object* v___y_4252_; lean_object* v___y_4253_; lean_object* v___y_4254_; lean_object* v___y_4255_; lean_object* v___y_4256_; lean_object* v___y_4257_; uint8_t v___y_4258_; lean_object* v_a_4259_; lean_object* v___y_4269_; lean_object* v___y_4270_; lean_object* v___y_4271_; lean_object* v___y_4272_; lean_object* v___y_4273_; lean_object* v___y_4274_; lean_object* v___y_4275_; lean_object* v___y_4276_; lean_object* v___y_4277_; lean_object* v___y_4278_; lean_object* v___y_4279_; lean_object* v___y_4280_; lean_object* v___y_4281_; lean_object* v___y_4282_; lean_object* v___y_4283_; lean_object* v___y_4284_; lean_object* v___y_4285_; uint8_t v___y_4286_; lean_object* v_a_4287_; lean_object* v___y_4300_; lean_object* v___y_4301_; lean_object* v___y_4302_; lean_object* v___y_4303_; lean_object* v___y_4304_; lean_object* v___y_4305_; lean_object* v___y_4306_; lean_object* v___y_4307_; lean_object* v___y_4308_; lean_object* v___y_4309_; lean_object* v___y_4310_; uint8_t v___y_4311_; lean_object* v___y_4312_; lean_object* v___y_4313_; lean_object* v___y_4314_; lean_object* v___y_4315_; uint8_t v___y_4316_; lean_object* v___y_4317_; lean_object* v___y_4318_; lean_object* v___y_4319_; lean_object* v___y_4320_; uint8_t v___y_4321_; uint8_t v___y_4322_; lean_object* v___y_4364_; lean_object* v___y_4365_; lean_object* v___y_4366_; lean_object* v___y_4367_; lean_object* v___y_4368_; lean_object* v___y_4369_; lean_object* v___y_4370_; lean_object* v___y_4371_; lean_object* v___y_4372_; lean_object* v___y_4373_; lean_object* v___y_4374_; lean_object* v___y_4375_; lean_object* v___y_4376_; lean_object* v___y_4377_; lean_object* v___y_4378_; lean_object* v___y_4415_; lean_object* v___y_4416_; lean_object* v___y_4417_; lean_object* v___y_4418_; lean_object* v___y_4419_; lean_object* v___y_4420_; lean_object* v___y_4421_; lean_object* v___y_4422_; lean_object* v___y_4423_; uint8_t v___y_4424_; lean_object* v___y_4425_; lean_object* v___y_4426_; lean_object* v___y_4427_; lean_object* v___y_4428_; lean_object* v___y_4429_; lean_object* v___y_4430_; lean_object* v___y_4431_; lean_object* v___y_4432_; lean_object* v_a_4433_; lean_object* v___y_4443_; lean_object* v___y_4444_; lean_object* v___y_4445_; lean_object* v___y_4446_; lean_object* v___y_4447_; lean_object* v___y_4448_; lean_object* v___y_4449_; lean_object* v___y_4450_; lean_object* v___y_4451_; lean_object* v___y_4452_; uint8_t v___y_4453_; lean_object* v___y_4454_; lean_object* v___y_4455_; lean_object* v___y_4456_; lean_object* v___y_4457_; lean_object* v___y_4458_; lean_object* v___y_4459_; lean_object* v___y_4460_; lean_object* v_a_4461_; lean_object* v___y_4474_; lean_object* v___y_4475_; lean_object* v___y_4476_; lean_object* v___y_4477_; lean_object* v___y_4478_; lean_object* v___y_4479_; lean_object* v___y_4480_; lean_object* v___y_4481_; lean_object* v___y_4482_; lean_object* v___y_4483_; lean_object* v___y_4484_; uint8_t v___y_4485_; lean_object* v___y_4486_; lean_object* v___y_4487_; lean_object* v___y_4488_; lean_object* v___y_4489_; lean_object* v___y_4490_; lean_object* v___y_4491_; lean_object* v___y_4549_; lean_object* v___y_4550_; lean_object* v___y_4551_; lean_object* v___y_4552_; lean_object* v___y_4553_; lean_object* v___y_4554_; lean_object* v___y_4555_; lean_object* v___y_4556_; lean_object* v___y_4557_; lean_object* v___y_4558_; lean_object* v___y_4559_; lean_object* v___y_4560_; lean_object* v___y_4561_; lean_object* v___y_4562_; lean_object* v_toCold_4563_; lean_object* v_ref_4564_; lean_object* v___y_4565_; lean_object* v___y_4577_; lean_object* v___y_4578_; lean_object* v___y_4579_; lean_object* v___y_4580_; lean_object* v___y_4581_; lean_object* v___y_4582_; lean_object* v___y_4583_; lean_object* v___y_4584_; lean_object* v___y_4585_; lean_object* v___y_4586_; lean_object* v___y_4587_; lean_object* v___y_4588_; lean_object* v___y_4589_; lean_object* v___y_4590_; lean_object* v___y_4591_; lean_object* v___y_4592_; lean_object* v_entry_4623_; lean_object* v___y_4624_; lean_object* v___y_4625_; lean_object* v___y_4626_; lean_object* v___y_4627_; lean_object* v___y_4628_; lean_object* v___y_4629_; lean_object* v___y_4630_; lean_object* v___y_4631_; lean_object* v___y_4632_; lean_object* v___y_4633_; lean_object* v___y_4634_; lean_object* v___y_4635_; 
v_satExpr_4088_ = lean_ctor_get(v_reflectionResult_4074_, 0);
v_unusedHypotheses_4089_ = lean_ctor_get(v_reflectionResult_4074_, 1);
v_toCold_4223_ = lean_ctor_get(v_a_4085_, 0);
v_options_4224_ = lean_ctor_get(v_toCold_4223_, 2);
v_bvExpr_4225_ = lean_ctor_get(v_satExpr_4088_, 0);
v_ref_4226_ = lean_ctor_get(v_a_4085_, 2);
v_inheritedTraceOptions_4227_ = lean_ctor_get(v_toCold_4223_, 11);
v_hasTrace_4228_ = lean_ctor_get_uint8(v_options_4224_, sizeof(void*)*1);
v___f_4229_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__0));
v___f_4230_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__1));
v___f_4231_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__2));
v___x_4232_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__3));
v___x_4233_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__0));
v___x_4234_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__1));
v_cls_4235_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__5));
lean_inc_ref(v_bvExpr_4225_);
v___f_4236_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__3), 2, 1);
lean_closure_set(v___f_4236_, 0, v_bvExpr_4225_);
lean_inc_ref(v___f_4236_);
v___f_4237_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4___boxed), 13, 1);
lean_closure_set(v___f_4237_, 0, v___f_4236_);
v___x_4238_ = 1;
v___x_4239_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__11));
if (v_hasTrace_4228_ == 0)
{
lean_object* v___x_4664_; 
v___x_4664_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__5(v___f_4237_, v_cls_4235_, v___x_4238_, v___x_4239_, v___f_4231_, v___f_4236_, v_options_4224_, v_a_4075_, v_a_4076_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_, v_a_4082_, v_a_4083_, v_a_4084_, v_a_4085_, v_a_4086_);
if (lean_obj_tag(v___x_4664_) == 0)
{
lean_object* v_a_4665_; 
v_a_4665_ = lean_ctor_get(v___x_4664_, 0);
lean_inc(v_a_4665_);
lean_dec_ref_known(v___x_4664_, 1);
v_entry_4623_ = v_a_4665_;
v___y_4624_ = v_a_4075_;
v___y_4625_ = v_a_4076_;
v___y_4626_ = v_a_4077_;
v___y_4627_ = v_a_4078_;
v___y_4628_ = v_a_4079_;
v___y_4629_ = v_a_4080_;
v___y_4630_ = v_a_4081_;
v___y_4631_ = v_a_4082_;
v___y_4632_ = v_a_4083_;
v___y_4633_ = v_a_4084_;
v___y_4634_ = v_a_4085_;
v___y_4635_ = v_a_4086_;
goto v___jp_4622_;
}
else
{
lean_object* v_a_4666_; lean_object* v___x_4668_; uint8_t v_isShared_4669_; uint8_t v_isSharedCheck_4673_; 
lean_dec_ref(v_reflectionResult_4074_);
lean_dec(v_goal_4073_);
lean_dec_ref(v_ctx_4072_);
v_a_4666_ = lean_ctor_get(v___x_4664_, 0);
v_isSharedCheck_4673_ = !lean_is_exclusive(v___x_4664_);
if (v_isSharedCheck_4673_ == 0)
{
v___x_4668_ = v___x_4664_;
v_isShared_4669_ = v_isSharedCheck_4673_;
goto v_resetjp_4667_;
}
else
{
lean_inc(v_a_4666_);
lean_dec(v___x_4664_);
v___x_4668_ = lean_box(0);
v_isShared_4669_ = v_isSharedCheck_4673_;
goto v_resetjp_4667_;
}
v_resetjp_4667_:
{
lean_object* v___x_4671_; 
if (v_isShared_4669_ == 0)
{
v___x_4671_ = v___x_4668_;
goto v_reusejp_4670_;
}
else
{
lean_object* v_reuseFailAlloc_4672_; 
v_reuseFailAlloc_4672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4672_, 0, v_a_4666_);
v___x_4671_ = v_reuseFailAlloc_4672_;
goto v_reusejp_4670_;
}
v_reusejp_4670_:
{
return v___x_4671_;
}
}
}
}
else
{
lean_object* v___f_4674_; lean_object* v___x_4675_; uint8_t v___x_4676_; lean_object* v___y_4678_; lean_object* v___y_4679_; lean_object* v_a_4680_; lean_object* v___y_4690_; lean_object* v___y_4691_; lean_object* v_a_4692_; lean_object* v___y_4695_; lean_object* v___y_4696_; lean_object* v___y_4697_; lean_object* v___y_4708_; lean_object* v___y_4709_; lean_object* v___y_4710_; lean_object* v___y_4711_; lean_object* v___y_4740_; lean_object* v___y_4741_; lean_object* v___y_4742_; lean_object* v___y_4743_; uint8_t v___y_4744_; lean_object* v___y_4745_; lean_object* v_a_4746_; lean_object* v___y_4756_; lean_object* v___y_4757_; lean_object* v___y_4758_; uint8_t v___y_4759_; lean_object* v___y_4791_; lean_object* v___y_4792_; lean_object* v_a_4793_; lean_object* v___y_4806_; lean_object* v___y_4807_; lean_object* v_a_4808_; lean_object* v___y_4811_; lean_object* v___y_4812_; lean_object* v___y_4813_; lean_object* v___y_4824_; lean_object* v___y_4825_; lean_object* v___y_4826_; lean_object* v___y_4827_; lean_object* v___y_4856_; uint8_t v___y_4857_; lean_object* v___y_4858_; lean_object* v___y_4859_; lean_object* v___y_4860_; lean_object* v___y_4861_; lean_object* v_a_4862_; lean_object* v___y_4875_; uint8_t v___y_4876_; lean_object* v___y_4877_; lean_object* v___y_4878_; 
v___f_4674_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__9));
v___x_4675_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__6, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__6);
v___x_4676_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4227_, v_options_4224_, v___x_4675_);
if (v___x_4676_ == 0)
{
lean_object* v___x_4922_; uint8_t v___x_4923_; 
v___x_4922_ = l_Lean_trace_profiler;
v___x_4923_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_options_4224_, v___x_4922_);
if (v___x_4923_ == 0)
{
lean_object* v___x_4924_; 
v___x_4924_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__5(v___f_4237_, v_cls_4235_, v___x_4238_, v___x_4239_, v___f_4231_, v___f_4236_, v_options_4224_, v_a_4075_, v_a_4076_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_, v_a_4082_, v_a_4083_, v_a_4084_, v_a_4085_, v_a_4086_);
if (lean_obj_tag(v___x_4924_) == 0)
{
lean_object* v_a_4925_; 
v_a_4925_ = lean_ctor_get(v___x_4924_, 0);
lean_inc(v_a_4925_);
lean_dec_ref_known(v___x_4924_, 1);
v_entry_4623_ = v_a_4925_;
v___y_4624_ = v_a_4075_;
v___y_4625_ = v_a_4076_;
v___y_4626_ = v_a_4077_;
v___y_4627_ = v_a_4078_;
v___y_4628_ = v_a_4079_;
v___y_4629_ = v_a_4080_;
v___y_4630_ = v_a_4081_;
v___y_4631_ = v_a_4082_;
v___y_4632_ = v_a_4083_;
v___y_4633_ = v_a_4084_;
v___y_4634_ = v_a_4085_;
v___y_4635_ = v_a_4086_;
goto v___jp_4622_;
}
else
{
lean_object* v_a_4926_; lean_object* v___x_4928_; uint8_t v_isShared_4929_; uint8_t v_isSharedCheck_4933_; 
lean_dec_ref(v_reflectionResult_4074_);
lean_dec(v_goal_4073_);
lean_dec_ref(v_ctx_4072_);
v_a_4926_ = lean_ctor_get(v___x_4924_, 0);
v_isSharedCheck_4933_ = !lean_is_exclusive(v___x_4924_);
if (v_isSharedCheck_4933_ == 0)
{
v___x_4928_ = v___x_4924_;
v_isShared_4929_ = v_isSharedCheck_4933_;
goto v_resetjp_4927_;
}
else
{
lean_inc(v_a_4926_);
lean_dec(v___x_4924_);
v___x_4928_ = lean_box(0);
v_isShared_4929_ = v_isSharedCheck_4933_;
goto v_resetjp_4927_;
}
v_resetjp_4927_:
{
lean_object* v___x_4931_; 
if (v_isShared_4929_ == 0)
{
v___x_4931_ = v___x_4928_;
goto v_reusejp_4930_;
}
else
{
lean_object* v_reuseFailAlloc_4932_; 
v_reuseFailAlloc_4932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4932_, 0, v_a_4926_);
v___x_4931_ = v_reuseFailAlloc_4932_;
goto v_reusejp_4930_;
}
v_reusejp_4930_:
{
return v___x_4931_;
}
}
}
}
else
{
lean_inc_ref(v_unusedHypotheses_4089_);
lean_inc_ref(v_satExpr_4088_);
lean_dec_ref(v___f_4237_);
goto v___jp_4909_;
}
}
else
{
lean_inc_ref(v_unusedHypotheses_4089_);
lean_inc_ref(v_satExpr_4088_);
lean_dec_ref(v___f_4237_);
goto v___jp_4909_;
}
v___jp_4677_:
{
lean_object* v___x_4681_; double v___x_4682_; double v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; 
v___x_4681_ = lean_io_get_num_heartbeats();
v___x_4682_ = lean_float_of_nat(v___y_4678_);
v___x_4683_ = lean_float_of_nat(v___x_4681_);
v___x_4684_ = lean_box_float(v___x_4682_);
v___x_4685_ = lean_box_float(v___x_4683_);
v___x_4686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4686_, 0, v___x_4684_);
lean_ctor_set(v___x_4686_, 1, v___x_4685_);
v___x_4687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4687_, 0, v_a_4680_);
lean_ctor_set(v___x_4687_, 1, v___x_4686_);
v___x_4688_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__9(v_cls_4235_, v___x_4238_, v___x_4239_, v_options_4224_, v___x_4676_, v___y_4679_, v___f_4674_, v___x_4687_, v_a_4075_, v_a_4076_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_, v_a_4082_, v_a_4083_, v_a_4084_, v_a_4085_, v_a_4086_);
return v___x_4688_;
}
v___jp_4689_:
{
lean_object* v___x_4693_; 
v___x_4693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4693_, 0, v_a_4692_);
v___y_4678_ = v___y_4690_;
v___y_4679_ = v___y_4691_;
v_a_4680_ = v___x_4693_;
goto v___jp_4677_;
}
v___jp_4694_:
{
if (lean_obj_tag(v___y_4697_) == 0)
{
lean_object* v_a_4698_; lean_object* v___x_4700_; uint8_t v_isShared_4701_; uint8_t v_isSharedCheck_4705_; 
v_a_4698_ = lean_ctor_get(v___y_4697_, 0);
v_isSharedCheck_4705_ = !lean_is_exclusive(v___y_4697_);
if (v_isSharedCheck_4705_ == 0)
{
v___x_4700_ = v___y_4697_;
v_isShared_4701_ = v_isSharedCheck_4705_;
goto v_resetjp_4699_;
}
else
{
lean_inc(v_a_4698_);
lean_dec(v___y_4697_);
v___x_4700_ = lean_box(0);
v_isShared_4701_ = v_isSharedCheck_4705_;
goto v_resetjp_4699_;
}
v_resetjp_4699_:
{
lean_object* v___x_4703_; 
if (v_isShared_4701_ == 0)
{
lean_ctor_set_tag(v___x_4700_, 1);
v___x_4703_ = v___x_4700_;
goto v_reusejp_4702_;
}
else
{
lean_object* v_reuseFailAlloc_4704_; 
v_reuseFailAlloc_4704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4704_, 0, v_a_4698_);
v___x_4703_ = v_reuseFailAlloc_4704_;
goto v_reusejp_4702_;
}
v_reusejp_4702_:
{
v___y_4678_ = v___y_4695_;
v___y_4679_ = v___y_4696_;
v_a_4680_ = v___x_4703_;
goto v___jp_4677_;
}
}
}
else
{
lean_object* v_a_4706_; 
v_a_4706_ = lean_ctor_get(v___y_4697_, 0);
lean_inc(v_a_4706_);
lean_dec_ref_known(v___y_4697_, 1);
v___y_4690_ = v___y_4695_;
v___y_4691_ = v___y_4696_;
v_a_4692_ = v_a_4706_;
goto v___jp_4689_;
}
}
v___jp_4707_:
{
if (lean_obj_tag(v___y_4711_) == 0)
{
lean_object* v_a_4712_; lean_object* v___x_4714_; uint8_t v_isShared_4715_; uint8_t v_isSharedCheck_4737_; 
v_a_4712_ = lean_ctor_get(v___y_4711_, 0);
v_isSharedCheck_4737_ = !lean_is_exclusive(v___y_4711_);
if (v_isSharedCheck_4737_ == 0)
{
v___x_4714_ = v___y_4711_;
v_isShared_4715_ = v_isSharedCheck_4737_;
goto v_resetjp_4713_;
}
else
{
lean_inc(v_a_4712_);
lean_dec(v___y_4711_);
v___x_4714_ = lean_box(0);
v_isShared_4715_ = v_isSharedCheck_4737_;
goto v_resetjp_4713_;
}
v_resetjp_4713_:
{
lean_object* v_aig_4716_; lean_object* v_ref_4717_; lean_object* v_decls_4718_; lean_object* v___f_4719_; lean_object* v___f_4720_; 
v_aig_4716_ = lean_ctor_get(v_a_4712_, 0);
lean_inc_ref_n(v_aig_4716_, 2);
v_ref_4717_ = lean_ctor_get(v_a_4712_, 1);
v_decls_4718_ = lean_ctor_get(v_aig_4716_, 0);
lean_inc_ref(v_ref_4717_);
lean_inc(v_a_4712_);
v___f_4719_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___boxed), 5, 4);
lean_closure_set(v___f_4719_, 0, v_aig_4716_);
lean_closure_set(v___f_4719_, 1, v___x_4232_);
lean_closure_set(v___f_4719_, 2, v_a_4712_);
lean_closure_set(v___f_4719_, 3, v_ref_4717_);
lean_inc_ref(v___f_4719_);
v___f_4720_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__7___boxed), 13, 1);
lean_closure_set(v___f_4720_, 0, v___f_4719_);
if (v___x_4676_ == 0)
{
lean_object* v___x_4721_; lean_object* v___x_4722_; 
lean_del_object(v___x_4714_);
v___x_4721_ = lean_box(0);
v___x_4722_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__13(v_ctx_4072_, v_aig_4716_, v_goal_4073_, v_unusedHypotheses_4089_, v_reflectionResult_4074_, v_satExpr_4088_, v___x_4238_, v___x_4239_, v___f_4229_, v___y_4708_, v___f_4230_, v___f_4719_, v___x_4233_, v___x_4234_, v___f_4720_, v_a_4712_, v___x_4721_, v_a_4075_, v_a_4076_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_, v_a_4082_, v_a_4083_, v_a_4084_, v_a_4085_, v_a_4086_);
v___y_4695_ = v___y_4709_;
v___y_4696_ = v___y_4710_;
v___y_4697_ = v___x_4722_;
goto v___jp_4694_;
}
else
{
lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4730_; 
v___x_4723_ = lean_array_get_size(v_decls_4718_);
v___x_4724_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__7));
v___x_4725_ = l_Nat_reprFast(v___x_4723_);
v___x_4726_ = lean_string_append(v___x_4724_, v___x_4725_);
lean_dec_ref(v___x_4725_);
v___x_4727_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__8));
v___x_4728_ = lean_string_append(v___x_4726_, v___x_4727_);
if (v_isShared_4715_ == 0)
{
lean_ctor_set_tag(v___x_4714_, 3);
lean_ctor_set(v___x_4714_, 0, v___x_4728_);
v___x_4730_ = v___x_4714_;
goto v_reusejp_4729_;
}
else
{
lean_object* v_reuseFailAlloc_4736_; 
v_reuseFailAlloc_4736_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4736_, 0, v___x_4728_);
v___x_4730_ = v_reuseFailAlloc_4736_;
goto v_reusejp_4729_;
}
v_reusejp_4729_:
{
lean_object* v___x_4731_; lean_object* v___x_4732_; 
v___x_4731_ = l_Lean_MessageData_ofFormat(v___x_4730_);
v___x_4732_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg(v_cls_4235_, v___x_4731_, v_a_4083_, v_a_4084_, v_a_4085_, v_a_4086_);
if (lean_obj_tag(v___x_4732_) == 0)
{
lean_object* v_a_4733_; lean_object* v___x_4734_; 
v_a_4733_ = lean_ctor_get(v___x_4732_, 0);
lean_inc(v_a_4733_);
lean_dec_ref_known(v___x_4732_, 1);
v___x_4734_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__13(v_ctx_4072_, v_aig_4716_, v_goal_4073_, v_unusedHypotheses_4089_, v_reflectionResult_4074_, v_satExpr_4088_, v___x_4238_, v___x_4239_, v___f_4229_, v___y_4708_, v___f_4230_, v___f_4719_, v___x_4233_, v___x_4234_, v___f_4720_, v_a_4712_, v_a_4733_, v_a_4075_, v_a_4076_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_, v_a_4082_, v_a_4083_, v_a_4084_, v_a_4085_, v_a_4086_);
v___y_4695_ = v___y_4709_;
v___y_4696_ = v___y_4710_;
v___y_4697_ = v___x_4734_;
goto v___jp_4694_;
}
else
{
lean_object* v_a_4735_; 
lean_dec_ref(v___f_4720_);
lean_dec_ref(v___f_4719_);
lean_dec_ref(v_aig_4716_);
lean_dec(v_a_4712_);
lean_dec_ref(v_unusedHypotheses_4089_);
lean_dec_ref(v_satExpr_4088_);
lean_dec_ref(v_reflectionResult_4074_);
lean_dec(v_goal_4073_);
lean_dec_ref(v_ctx_4072_);
v_a_4735_ = lean_ctor_get(v___x_4732_, 0);
lean_inc(v_a_4735_);
lean_dec_ref_known(v___x_4732_, 1);
v___y_4690_ = v___y_4709_;
v___y_4691_ = v___y_4710_;
v_a_4692_ = v_a_4735_;
goto v___jp_4689_;
}
}
}
}
}
else
{
lean_object* v_a_4738_; 
lean_dec_ref(v_unusedHypotheses_4089_);
lean_dec_ref(v_satExpr_4088_);
lean_dec_ref(v_reflectionResult_4074_);
lean_dec(v_goal_4073_);
lean_dec_ref(v_ctx_4072_);
v_a_4738_ = lean_ctor_get(v___y_4711_, 0);
lean_inc(v_a_4738_);
lean_dec_ref_known(v___y_4711_, 1);
v___y_4690_ = v___y_4709_;
v___y_4691_ = v___y_4710_;
v_a_4692_ = v_a_4738_;
goto v___jp_4689_;
}
}
v___jp_4739_:
{
lean_object* v___x_4747_; double v___x_4748_; double v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; 
v___x_4747_ = lean_io_get_num_heartbeats();
v___x_4748_ = lean_float_of_nat(v___y_4745_);
v___x_4749_ = lean_float_of_nat(v___x_4747_);
v___x_4750_ = lean_box_float(v___x_4748_);
v___x_4751_ = lean_box_float(v___x_4749_);
v___x_4752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4752_, 0, v___x_4750_);
lean_ctor_set(v___x_4752_, 1, v___x_4751_);
v___x_4753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4753_, 0, v_a_4746_);
lean_ctor_set(v___x_4753_, 1, v___x_4752_);
v___x_4754_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__8(v_cls_4235_, v___x_4238_, v___x_4239_, v_options_4224_, v___y_4744_, v___y_4741_, v___f_4231_, v___x_4753_, v_a_4075_, v_a_4076_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_, v_a_4082_, v_a_4083_, v_a_4084_, v_a_4085_, v_a_4086_);
v___y_4708_ = v___y_4740_;
v___y_4709_ = v___y_4742_;
v___y_4710_ = v___y_4743_;
v___y_4711_ = v___x_4754_;
goto v___jp_4707_;
}
v___jp_4755_:
{
lean_object* v___x_4760_; lean_object* v_a_4761_; lean_object* v___x_4763_; uint8_t v_isShared_4764_; uint8_t v_isSharedCheck_4789_; 
v___x_4760_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___redArg(v_a_4086_);
v_a_4761_ = lean_ctor_get(v___x_4760_, 0);
v_isSharedCheck_4789_ = !lean_is_exclusive(v___x_4760_);
if (v_isSharedCheck_4789_ == 0)
{
v___x_4763_ = v___x_4760_;
v_isShared_4764_ = v_isSharedCheck_4789_;
goto v_resetjp_4762_;
}
else
{
lean_inc(v_a_4761_);
lean_dec(v___x_4760_);
v___x_4763_ = lean_box(0);
v_isShared_4764_ = v_isSharedCheck_4789_;
goto v_resetjp_4762_;
}
v_resetjp_4762_:
{
lean_object* v___x_4765_; lean_object* v___x_4766_; 
v___x_4765_ = lean_io_get_num_heartbeats();
v___x_4766_ = l_IO_lazyPure___redArg(v___f_4236_);
if (lean_obj_tag(v___x_4766_) == 0)
{
lean_object* v_a_4767_; lean_object* v___x_4769_; uint8_t v_isShared_4770_; uint8_t v_isSharedCheck_4774_; 
lean_del_object(v___x_4763_);
v_a_4767_ = lean_ctor_get(v___x_4766_, 0);
v_isSharedCheck_4774_ = !lean_is_exclusive(v___x_4766_);
if (v_isSharedCheck_4774_ == 0)
{
v___x_4769_ = v___x_4766_;
v_isShared_4770_ = v_isSharedCheck_4774_;
goto v_resetjp_4768_;
}
else
{
lean_inc(v_a_4767_);
lean_dec(v___x_4766_);
v___x_4769_ = lean_box(0);
v_isShared_4770_ = v_isSharedCheck_4774_;
goto v_resetjp_4768_;
}
v_resetjp_4768_:
{
lean_object* v___x_4772_; 
if (v_isShared_4770_ == 0)
{
lean_ctor_set_tag(v___x_4769_, 1);
v___x_4772_ = v___x_4769_;
goto v_reusejp_4771_;
}
else
{
lean_object* v_reuseFailAlloc_4773_; 
v_reuseFailAlloc_4773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4773_, 0, v_a_4767_);
v___x_4772_ = v_reuseFailAlloc_4773_;
goto v_reusejp_4771_;
}
v_reusejp_4771_:
{
v___y_4740_ = v___y_4756_;
v___y_4741_ = v_a_4761_;
v___y_4742_ = v___y_4757_;
v___y_4743_ = v___y_4758_;
v___y_4744_ = v___y_4759_;
v___y_4745_ = v___x_4765_;
v_a_4746_ = v___x_4772_;
goto v___jp_4739_;
}
}
}
else
{
lean_object* v_a_4775_; lean_object* v___x_4777_; uint8_t v_isShared_4778_; uint8_t v_isSharedCheck_4788_; 
v_a_4775_ = lean_ctor_get(v___x_4766_, 0);
v_isSharedCheck_4788_ = !lean_is_exclusive(v___x_4766_);
if (v_isSharedCheck_4788_ == 0)
{
v___x_4777_ = v___x_4766_;
v_isShared_4778_ = v_isSharedCheck_4788_;
goto v_resetjp_4776_;
}
else
{
lean_inc(v_a_4775_);
lean_dec(v___x_4766_);
v___x_4777_ = lean_box(0);
v_isShared_4778_ = v_isSharedCheck_4788_;
goto v_resetjp_4776_;
}
v_resetjp_4776_:
{
lean_object* v___x_4779_; lean_object* v___x_4781_; 
v___x_4779_ = lean_io_error_to_string(v_a_4775_);
if (v_isShared_4778_ == 0)
{
lean_ctor_set_tag(v___x_4777_, 3);
lean_ctor_set(v___x_4777_, 0, v___x_4779_);
v___x_4781_ = v___x_4777_;
goto v_reusejp_4780_;
}
else
{
lean_object* v_reuseFailAlloc_4787_; 
v_reuseFailAlloc_4787_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4787_, 0, v___x_4779_);
v___x_4781_ = v_reuseFailAlloc_4787_;
goto v_reusejp_4780_;
}
v_reusejp_4780_:
{
lean_object* v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4785_; 
v___x_4782_ = l_Lean_MessageData_ofFormat(v___x_4781_);
lean_inc(v_ref_4226_);
v___x_4783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4783_, 0, v_ref_4226_);
lean_ctor_set(v___x_4783_, 1, v___x_4782_);
if (v_isShared_4764_ == 0)
{
lean_ctor_set(v___x_4763_, 0, v___x_4783_);
v___x_4785_ = v___x_4763_;
goto v_reusejp_4784_;
}
else
{
lean_object* v_reuseFailAlloc_4786_; 
v_reuseFailAlloc_4786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4786_, 0, v___x_4783_);
v___x_4785_ = v_reuseFailAlloc_4786_;
goto v_reusejp_4784_;
}
v_reusejp_4784_:
{
v___y_4740_ = v___y_4756_;
v___y_4741_ = v_a_4761_;
v___y_4742_ = v___y_4757_;
v___y_4743_ = v___y_4758_;
v___y_4744_ = v___y_4759_;
v___y_4745_ = v___x_4765_;
v_a_4746_ = v___x_4785_;
goto v___jp_4739_;
}
}
}
}
}
}
v___jp_4790_:
{
lean_object* v___x_4794_; double v___x_4795_; double v___x_4796_; double v___x_4797_; double v___x_4798_; double v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; 
v___x_4794_ = lean_io_mono_nanos_now();
v___x_4795_ = lean_float_of_nat(v___y_4791_);
v___x_4796_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_4797_ = lean_float_div(v___x_4795_, v___x_4796_);
v___x_4798_ = lean_float_of_nat(v___x_4794_);
v___x_4799_ = lean_float_div(v___x_4798_, v___x_4796_);
v___x_4800_ = lean_box_float(v___x_4797_);
v___x_4801_ = lean_box_float(v___x_4799_);
v___x_4802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4802_, 0, v___x_4800_);
lean_ctor_set(v___x_4802_, 1, v___x_4801_);
v___x_4803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4803_, 0, v_a_4793_);
lean_ctor_set(v___x_4803_, 1, v___x_4802_);
v___x_4804_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__9(v_cls_4235_, v___x_4238_, v___x_4239_, v_options_4224_, v___x_4676_, v___y_4792_, v___f_4674_, v___x_4803_, v_a_4075_, v_a_4076_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_, v_a_4082_, v_a_4083_, v_a_4084_, v_a_4085_, v_a_4086_);
return v___x_4804_;
}
v___jp_4805_:
{
lean_object* v___x_4809_; 
v___x_4809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4809_, 0, v_a_4808_);
v___y_4791_ = v___y_4806_;
v___y_4792_ = v___y_4807_;
v_a_4793_ = v___x_4809_;
goto v___jp_4790_;
}
v___jp_4810_:
{
if (lean_obj_tag(v___y_4813_) == 0)
{
lean_object* v_a_4814_; lean_object* v___x_4816_; uint8_t v_isShared_4817_; uint8_t v_isSharedCheck_4821_; 
v_a_4814_ = lean_ctor_get(v___y_4813_, 0);
v_isSharedCheck_4821_ = !lean_is_exclusive(v___y_4813_);
if (v_isSharedCheck_4821_ == 0)
{
v___x_4816_ = v___y_4813_;
v_isShared_4817_ = v_isSharedCheck_4821_;
goto v_resetjp_4815_;
}
else
{
lean_inc(v_a_4814_);
lean_dec(v___y_4813_);
v___x_4816_ = lean_box(0);
v_isShared_4817_ = v_isSharedCheck_4821_;
goto v_resetjp_4815_;
}
v_resetjp_4815_:
{
lean_object* v___x_4819_; 
if (v_isShared_4817_ == 0)
{
lean_ctor_set_tag(v___x_4816_, 1);
v___x_4819_ = v___x_4816_;
goto v_reusejp_4818_;
}
else
{
lean_object* v_reuseFailAlloc_4820_; 
v_reuseFailAlloc_4820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4820_, 0, v_a_4814_);
v___x_4819_ = v_reuseFailAlloc_4820_;
goto v_reusejp_4818_;
}
v_reusejp_4818_:
{
v___y_4791_ = v___y_4811_;
v___y_4792_ = v___y_4812_;
v_a_4793_ = v___x_4819_;
goto v___jp_4790_;
}
}
}
else
{
lean_object* v_a_4822_; 
v_a_4822_ = lean_ctor_get(v___y_4813_, 0);
lean_inc(v_a_4822_);
lean_dec_ref_known(v___y_4813_, 1);
v___y_4806_ = v___y_4811_;
v___y_4807_ = v___y_4812_;
v_a_4808_ = v_a_4822_;
goto v___jp_4805_;
}
}
v___jp_4823_:
{
if (lean_obj_tag(v___y_4827_) == 0)
{
lean_object* v_a_4828_; lean_object* v___x_4830_; uint8_t v_isShared_4831_; uint8_t v_isSharedCheck_4853_; 
v_a_4828_ = lean_ctor_get(v___y_4827_, 0);
v_isSharedCheck_4853_ = !lean_is_exclusive(v___y_4827_);
if (v_isSharedCheck_4853_ == 0)
{
v___x_4830_ = v___y_4827_;
v_isShared_4831_ = v_isSharedCheck_4853_;
goto v_resetjp_4829_;
}
else
{
lean_inc(v_a_4828_);
lean_dec(v___y_4827_);
v___x_4830_ = lean_box(0);
v_isShared_4831_ = v_isSharedCheck_4853_;
goto v_resetjp_4829_;
}
v_resetjp_4829_:
{
lean_object* v_aig_4832_; lean_object* v_ref_4833_; lean_object* v_decls_4834_; lean_object* v___f_4835_; lean_object* v___f_4836_; 
v_aig_4832_ = lean_ctor_get(v_a_4828_, 0);
lean_inc_ref_n(v_aig_4832_, 2);
v_ref_4833_ = lean_ctor_get(v_a_4828_, 1);
v_decls_4834_ = lean_ctor_get(v_aig_4832_, 0);
lean_inc_ref(v_ref_4833_);
lean_inc(v_a_4828_);
v___f_4835_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__8___boxed), 5, 4);
lean_closure_set(v___f_4835_, 0, v_aig_4832_);
lean_closure_set(v___f_4835_, 1, v___x_4232_);
lean_closure_set(v___f_4835_, 2, v_a_4828_);
lean_closure_set(v___f_4835_, 3, v_ref_4833_);
lean_inc_ref(v___f_4835_);
v___f_4836_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__7___boxed), 13, 1);
lean_closure_set(v___f_4836_, 0, v___f_4835_);
if (v___x_4676_ == 0)
{
lean_object* v___x_4837_; lean_object* v___x_4838_; 
lean_del_object(v___x_4830_);
v___x_4837_ = lean_box(0);
v___x_4838_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10(v_ctx_4072_, v_aig_4832_, v_goal_4073_, v_unusedHypotheses_4089_, v_reflectionResult_4074_, v_satExpr_4088_, v___x_4238_, v___x_4239_, v___f_4229_, v___y_4824_, v___f_4230_, v___f_4835_, v___x_4233_, v___x_4234_, v___f_4836_, v_a_4828_, v___x_4837_, v_a_4075_, v_a_4076_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_, v_a_4082_, v_a_4083_, v_a_4084_, v_a_4085_, v_a_4086_);
v___y_4811_ = v___y_4825_;
v___y_4812_ = v___y_4826_;
v___y_4813_ = v___x_4838_;
goto v___jp_4810_;
}
else
{
lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4842_; lean_object* v___x_4843_; lean_object* v___x_4844_; lean_object* v___x_4846_; 
v___x_4839_ = lean_array_get_size(v_decls_4834_);
v___x_4840_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__7));
v___x_4841_ = l_Nat_reprFast(v___x_4839_);
v___x_4842_ = lean_string_append(v___x_4840_, v___x_4841_);
lean_dec_ref(v___x_4841_);
v___x_4843_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__8));
v___x_4844_ = lean_string_append(v___x_4842_, v___x_4843_);
if (v_isShared_4831_ == 0)
{
lean_ctor_set_tag(v___x_4830_, 3);
lean_ctor_set(v___x_4830_, 0, v___x_4844_);
v___x_4846_ = v___x_4830_;
goto v_reusejp_4845_;
}
else
{
lean_object* v_reuseFailAlloc_4852_; 
v_reuseFailAlloc_4852_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4852_, 0, v___x_4844_);
v___x_4846_ = v_reuseFailAlloc_4852_;
goto v_reusejp_4845_;
}
v_reusejp_4845_:
{
lean_object* v___x_4847_; lean_object* v___x_4848_; 
v___x_4847_ = l_Lean_MessageData_ofFormat(v___x_4846_);
v___x_4848_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg(v_cls_4235_, v___x_4847_, v_a_4083_, v_a_4084_, v_a_4085_, v_a_4086_);
if (lean_obj_tag(v___x_4848_) == 0)
{
lean_object* v_a_4849_; lean_object* v___x_4850_; 
v_a_4849_ = lean_ctor_get(v___x_4848_, 0);
lean_inc(v_a_4849_);
lean_dec_ref_known(v___x_4848_, 1);
v___x_4850_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10(v_ctx_4072_, v_aig_4832_, v_goal_4073_, v_unusedHypotheses_4089_, v_reflectionResult_4074_, v_satExpr_4088_, v___x_4238_, v___x_4239_, v___f_4229_, v___y_4824_, v___f_4230_, v___f_4835_, v___x_4233_, v___x_4234_, v___f_4836_, v_a_4828_, v_a_4849_, v_a_4075_, v_a_4076_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_, v_a_4082_, v_a_4083_, v_a_4084_, v_a_4085_, v_a_4086_);
v___y_4811_ = v___y_4825_;
v___y_4812_ = v___y_4826_;
v___y_4813_ = v___x_4850_;
goto v___jp_4810_;
}
else
{
lean_object* v_a_4851_; 
lean_dec_ref(v___f_4836_);
lean_dec_ref(v___f_4835_);
lean_dec_ref(v_aig_4832_);
lean_dec(v_a_4828_);
lean_dec_ref(v_unusedHypotheses_4089_);
lean_dec_ref(v_satExpr_4088_);
lean_dec_ref(v_reflectionResult_4074_);
lean_dec(v_goal_4073_);
lean_dec_ref(v_ctx_4072_);
v_a_4851_ = lean_ctor_get(v___x_4848_, 0);
lean_inc(v_a_4851_);
lean_dec_ref_known(v___x_4848_, 1);
v___y_4806_ = v___y_4825_;
v___y_4807_ = v___y_4826_;
v_a_4808_ = v_a_4851_;
goto v___jp_4805_;
}
}
}
}
}
else
{
lean_object* v_a_4854_; 
lean_dec_ref(v_unusedHypotheses_4089_);
lean_dec_ref(v_satExpr_4088_);
lean_dec_ref(v_reflectionResult_4074_);
lean_dec(v_goal_4073_);
lean_dec_ref(v_ctx_4072_);
v_a_4854_ = lean_ctor_get(v___y_4827_, 0);
lean_inc(v_a_4854_);
lean_dec_ref_known(v___y_4827_, 1);
v___y_4806_ = v___y_4825_;
v___y_4807_ = v___y_4826_;
v_a_4808_ = v_a_4854_;
goto v___jp_4805_;
}
}
v___jp_4855_:
{
lean_object* v___x_4863_; double v___x_4864_; double v___x_4865_; double v___x_4866_; double v___x_4867_; double v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; 
v___x_4863_ = lean_io_mono_nanos_now();
v___x_4864_ = lean_float_of_nat(v___y_4860_);
v___x_4865_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_4866_ = lean_float_div(v___x_4864_, v___x_4865_);
v___x_4867_ = lean_float_of_nat(v___x_4863_);
v___x_4868_ = lean_float_div(v___x_4867_, v___x_4865_);
v___x_4869_ = lean_box_float(v___x_4866_);
v___x_4870_ = lean_box_float(v___x_4868_);
v___x_4871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4871_, 0, v___x_4869_);
lean_ctor_set(v___x_4871_, 1, v___x_4870_);
v___x_4872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4872_, 0, v_a_4862_);
lean_ctor_set(v___x_4872_, 1, v___x_4871_);
v___x_4873_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__8(v_cls_4235_, v___x_4238_, v___x_4239_, v_options_4224_, v___y_4857_, v___y_4861_, v___f_4231_, v___x_4872_, v_a_4075_, v_a_4076_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_, v_a_4082_, v_a_4083_, v_a_4084_, v_a_4085_, v_a_4086_);
v___y_4824_ = v___y_4856_;
v___y_4825_ = v___y_4858_;
v___y_4826_ = v___y_4859_;
v___y_4827_ = v___x_4873_;
goto v___jp_4823_;
}
v___jp_4874_:
{
lean_object* v___x_4879_; lean_object* v_a_4880_; lean_object* v___x_4882_; uint8_t v_isShared_4883_; uint8_t v_isSharedCheck_4908_; 
v___x_4879_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___redArg(v_a_4086_);
v_a_4880_ = lean_ctor_get(v___x_4879_, 0);
v_isSharedCheck_4908_ = !lean_is_exclusive(v___x_4879_);
if (v_isSharedCheck_4908_ == 0)
{
v___x_4882_ = v___x_4879_;
v_isShared_4883_ = v_isSharedCheck_4908_;
goto v_resetjp_4881_;
}
else
{
lean_inc(v_a_4880_);
lean_dec(v___x_4879_);
v___x_4882_ = lean_box(0);
v_isShared_4883_ = v_isSharedCheck_4908_;
goto v_resetjp_4881_;
}
v_resetjp_4881_:
{
lean_object* v___x_4884_; lean_object* v___x_4885_; 
v___x_4884_ = lean_io_mono_nanos_now();
v___x_4885_ = l_IO_lazyPure___redArg(v___f_4236_);
if (lean_obj_tag(v___x_4885_) == 0)
{
lean_object* v_a_4886_; lean_object* v___x_4888_; uint8_t v_isShared_4889_; uint8_t v_isSharedCheck_4893_; 
lean_del_object(v___x_4882_);
v_a_4886_ = lean_ctor_get(v___x_4885_, 0);
v_isSharedCheck_4893_ = !lean_is_exclusive(v___x_4885_);
if (v_isSharedCheck_4893_ == 0)
{
v___x_4888_ = v___x_4885_;
v_isShared_4889_ = v_isSharedCheck_4893_;
goto v_resetjp_4887_;
}
else
{
lean_inc(v_a_4886_);
lean_dec(v___x_4885_);
v___x_4888_ = lean_box(0);
v_isShared_4889_ = v_isSharedCheck_4893_;
goto v_resetjp_4887_;
}
v_resetjp_4887_:
{
lean_object* v___x_4891_; 
if (v_isShared_4889_ == 0)
{
lean_ctor_set_tag(v___x_4888_, 1);
v___x_4891_ = v___x_4888_;
goto v_reusejp_4890_;
}
else
{
lean_object* v_reuseFailAlloc_4892_; 
v_reuseFailAlloc_4892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4892_, 0, v_a_4886_);
v___x_4891_ = v_reuseFailAlloc_4892_;
goto v_reusejp_4890_;
}
v_reusejp_4890_:
{
v___y_4856_ = v___y_4875_;
v___y_4857_ = v___y_4876_;
v___y_4858_ = v___y_4877_;
v___y_4859_ = v___y_4878_;
v___y_4860_ = v___x_4884_;
v___y_4861_ = v_a_4880_;
v_a_4862_ = v___x_4891_;
goto v___jp_4855_;
}
}
}
else
{
lean_object* v_a_4894_; lean_object* v___x_4896_; uint8_t v_isShared_4897_; uint8_t v_isSharedCheck_4907_; 
v_a_4894_ = lean_ctor_get(v___x_4885_, 0);
v_isSharedCheck_4907_ = !lean_is_exclusive(v___x_4885_);
if (v_isSharedCheck_4907_ == 0)
{
v___x_4896_ = v___x_4885_;
v_isShared_4897_ = v_isSharedCheck_4907_;
goto v_resetjp_4895_;
}
else
{
lean_inc(v_a_4894_);
lean_dec(v___x_4885_);
v___x_4896_ = lean_box(0);
v_isShared_4897_ = v_isSharedCheck_4907_;
goto v_resetjp_4895_;
}
v_resetjp_4895_:
{
lean_object* v___x_4898_; lean_object* v___x_4900_; 
v___x_4898_ = lean_io_error_to_string(v_a_4894_);
if (v_isShared_4897_ == 0)
{
lean_ctor_set_tag(v___x_4896_, 3);
lean_ctor_set(v___x_4896_, 0, v___x_4898_);
v___x_4900_ = v___x_4896_;
goto v_reusejp_4899_;
}
else
{
lean_object* v_reuseFailAlloc_4906_; 
v_reuseFailAlloc_4906_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4906_, 0, v___x_4898_);
v___x_4900_ = v_reuseFailAlloc_4906_;
goto v_reusejp_4899_;
}
v_reusejp_4899_:
{
lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4904_; 
v___x_4901_ = l_Lean_MessageData_ofFormat(v___x_4900_);
lean_inc(v_ref_4226_);
v___x_4902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4902_, 0, v_ref_4226_);
lean_ctor_set(v___x_4902_, 1, v___x_4901_);
if (v_isShared_4883_ == 0)
{
lean_ctor_set(v___x_4882_, 0, v___x_4902_);
v___x_4904_ = v___x_4882_;
goto v_reusejp_4903_;
}
else
{
lean_object* v_reuseFailAlloc_4905_; 
v_reuseFailAlloc_4905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4905_, 0, v___x_4902_);
v___x_4904_ = v_reuseFailAlloc_4905_;
goto v_reusejp_4903_;
}
v_reusejp_4903_:
{
v___y_4856_ = v___y_4875_;
v___y_4857_ = v___y_4876_;
v___y_4858_ = v___y_4877_;
v___y_4859_ = v___y_4878_;
v___y_4860_ = v___x_4884_;
v___y_4861_ = v_a_4880_;
v_a_4862_ = v___x_4904_;
goto v___jp_4855_;
}
}
}
}
}
}
v___jp_4909_:
{
lean_object* v___x_4910_; lean_object* v_a_4911_; lean_object* v___x_4912_; uint8_t v___x_4913_; 
v___x_4910_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___redArg(v_a_4086_);
v_a_4911_ = lean_ctor_get(v___x_4910_, 0);
lean_inc(v_a_4911_);
lean_dec_ref(v___x_4910_);
v___x_4912_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4913_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_options_4224_, v___x_4912_);
if (v___x_4913_ == 0)
{
lean_object* v___x_4914_; 
v___x_4914_ = lean_io_mono_nanos_now();
if (v___x_4676_ == 0)
{
lean_object* v___x_4915_; uint8_t v___x_4916_; 
v___x_4915_ = l_Lean_trace_profiler;
v___x_4916_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_options_4224_, v___x_4915_);
if (v___x_4916_ == 0)
{
lean_object* v___x_4917_; 
v___x_4917_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4(v___f_4236_, v_a_4076_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_, v_a_4082_, v_a_4083_, v_a_4084_, v_a_4085_, v_a_4086_);
v___y_4824_ = v___x_4912_;
v___y_4825_ = v___x_4914_;
v___y_4826_ = v_a_4911_;
v___y_4827_ = v___x_4917_;
goto v___jp_4823_;
}
else
{
v___y_4875_ = v___x_4912_;
v___y_4876_ = v___x_4676_;
v___y_4877_ = v___x_4914_;
v___y_4878_ = v_a_4911_;
goto v___jp_4874_;
}
}
else
{
v___y_4875_ = v___x_4912_;
v___y_4876_ = v___x_4676_;
v___y_4877_ = v___x_4914_;
v___y_4878_ = v_a_4911_;
goto v___jp_4874_;
}
}
else
{
lean_object* v___x_4918_; 
v___x_4918_ = lean_io_get_num_heartbeats();
if (v___x_4676_ == 0)
{
lean_object* v___x_4919_; uint8_t v___x_4920_; 
v___x_4919_ = l_Lean_trace_profiler;
v___x_4920_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_options_4224_, v___x_4919_);
if (v___x_4920_ == 0)
{
lean_object* v___x_4921_; 
v___x_4921_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__4(v___f_4236_, v_a_4076_, v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_, v_a_4082_, v_a_4083_, v_a_4084_, v_a_4085_, v_a_4086_);
v___y_4708_ = v___x_4912_;
v___y_4709_ = v___x_4918_;
v___y_4710_ = v_a_4911_;
v___y_4711_ = v___x_4921_;
goto v___jp_4707_;
}
else
{
v___y_4756_ = v___x_4912_;
v___y_4757_ = v___x_4918_;
v___y_4758_ = v_a_4911_;
v___y_4759_ = v___x_4676_;
goto v___jp_4755_;
}
}
else
{
v___y_4756_ = v___x_4912_;
v___y_4757_ = v___x_4918_;
v___y_4758_ = v_a_4911_;
v___y_4759_ = v___x_4676_;
goto v___jp_4755_;
}
}
}
}
v___jp_4090_:
{
lean_object* v___x_4094_; 
v___x_4094_ = l_Lean_Meta_Tactic_BVDecide_ReifyM_atomsAssignmentMap___redArg(v___y_4093_);
if (lean_obj_tag(v___x_4094_) == 0)
{
lean_object* v_a_4095_; lean_object* v___x_4097_; uint8_t v_isShared_4098_; uint8_t v_isSharedCheck_4109_; 
v_a_4095_ = lean_ctor_get(v___x_4094_, 0);
v_isSharedCheck_4109_ = !lean_is_exclusive(v___x_4094_);
if (v_isSharedCheck_4109_ == 0)
{
v___x_4097_ = v___x_4094_;
v_isShared_4098_ = v_isSharedCheck_4109_;
goto v_resetjp_4096_;
}
else
{
lean_inc(v_a_4095_);
lean_dec(v___x_4094_);
v___x_4097_ = lean_box(0);
v_isShared_4098_ = v_isSharedCheck_4109_;
goto v_resetjp_4096_;
}
v_resetjp_4096_:
{
lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4107_; 
v___x_4099_ = l_Lean_Meta_Tactic_BVDecide_reconstructCounterExample(v___y_4092_, v___y_4091_, v_a_4095_);
lean_dec(v_a_4095_);
lean_dec_ref(v___y_4091_);
v___x_4100_ = lean_unsigned_to_nat(0u);
v___x_4101_ = lean_array_get_size(v___x_4099_);
v___x_4102_ = l_Array_filterMapM___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__1(v___x_4099_, v___x_4100_, v___x_4101_);
lean_dec_ref(v___x_4099_);
v___x_4103_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__0));
v___x_4104_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4104_, 0, v_goal_4073_);
lean_ctor_set(v___x_4104_, 1, v_unusedHypotheses_4089_);
lean_ctor_set(v___x_4104_, 2, v___x_4102_);
lean_ctor_set(v___x_4104_, 3, v___x_4103_);
v___x_4105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4105_, 0, v___x_4104_);
if (v_isShared_4098_ == 0)
{
lean_ctor_set(v___x_4097_, 0, v___x_4105_);
v___x_4107_ = v___x_4097_;
goto v_reusejp_4106_;
}
else
{
lean_object* v_reuseFailAlloc_4108_; 
v_reuseFailAlloc_4108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4108_, 0, v___x_4105_);
v___x_4107_ = v_reuseFailAlloc_4108_;
goto v_reusejp_4106_;
}
v_reusejp_4106_:
{
return v___x_4107_;
}
}
}
else
{
lean_object* v_a_4110_; lean_object* v___x_4112_; uint8_t v_isShared_4113_; uint8_t v_isSharedCheck_4117_; 
lean_dec_ref(v___y_4092_);
lean_dec_ref(v___y_4091_);
lean_dec_ref(v_unusedHypotheses_4089_);
lean_dec(v_goal_4073_);
v_a_4110_ = lean_ctor_get(v___x_4094_, 0);
v_isSharedCheck_4117_ = !lean_is_exclusive(v___x_4094_);
if (v_isSharedCheck_4117_ == 0)
{
v___x_4112_ = v___x_4094_;
v_isShared_4113_ = v_isSharedCheck_4117_;
goto v_resetjp_4111_;
}
else
{
lean_inc(v_a_4110_);
lean_dec(v___x_4094_);
v___x_4112_ = lean_box(0);
v_isShared_4113_ = v_isSharedCheck_4117_;
goto v_resetjp_4111_;
}
v_resetjp_4111_:
{
lean_object* v___x_4115_; 
if (v_isShared_4113_ == 0)
{
v___x_4115_ = v___x_4112_;
goto v_reusejp_4114_;
}
else
{
lean_object* v_reuseFailAlloc_4116_; 
v_reuseFailAlloc_4116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4116_, 0, v_a_4110_);
v___x_4115_ = v_reuseFailAlloc_4116_;
goto v_reusejp_4114_;
}
v_reusejp_4114_:
{
return v___x_4115_;
}
}
}
}
v___jp_4118_:
{
lean_object* v___x_4131_; 
lean_inc_ref(v___y_4119_);
v___x_4131_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(v___y_4119_, v_ctx_4072_, v_reflectionResult_4074_, v___y_4127_, v___y_4128_, v___y_4129_, v___y_4130_);
if (lean_obj_tag(v___x_4131_) == 0)
{
lean_object* v_a_4132_; lean_object* v___x_4133_; 
v_a_4132_ = lean_ctor_get(v___x_4131_, 0);
lean_inc(v_a_4132_);
lean_dec_ref_known(v___x_4131_, 1);
v___x_4133_ = l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse(v_satExpr_4088_, v_a_4132_, v___y_4120_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_, v___y_4127_, v___y_4128_, v___y_4129_, v___y_4130_);
if (lean_obj_tag(v___x_4133_) == 0)
{
lean_object* v_a_4134_; lean_object* v___x_4135_; lean_object* v___x_4137_; uint8_t v_isShared_4138_; uint8_t v_isSharedCheck_4143_; 
v_a_4134_ = lean_ctor_get(v___x_4133_, 0);
lean_inc(v_a_4134_);
lean_dec_ref_known(v___x_4133_, 1);
v___x_4135_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3___redArg(v_goal_4073_, v_a_4134_, v___y_4128_);
v_isSharedCheck_4143_ = !lean_is_exclusive(v___x_4135_);
if (v_isSharedCheck_4143_ == 0)
{
lean_object* v_unused_4144_; 
v_unused_4144_ = lean_ctor_get(v___x_4135_, 0);
lean_dec(v_unused_4144_);
v___x_4137_ = v___x_4135_;
v_isShared_4138_ = v_isSharedCheck_4143_;
goto v_resetjp_4136_;
}
else
{
lean_dec(v___x_4135_);
v___x_4137_ = lean_box(0);
v_isShared_4138_ = v_isSharedCheck_4143_;
goto v_resetjp_4136_;
}
v_resetjp_4136_:
{
lean_object* v___x_4139_; lean_object* v___x_4141_; 
v___x_4139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4139_, 0, v___y_4119_);
if (v_isShared_4138_ == 0)
{
lean_ctor_set(v___x_4137_, 0, v___x_4139_);
v___x_4141_ = v___x_4137_;
goto v_reusejp_4140_;
}
else
{
lean_object* v_reuseFailAlloc_4142_; 
v_reuseFailAlloc_4142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4142_, 0, v___x_4139_);
v___x_4141_ = v_reuseFailAlloc_4142_;
goto v_reusejp_4140_;
}
v_reusejp_4140_:
{
return v___x_4141_;
}
}
}
else
{
lean_object* v_a_4145_; lean_object* v___x_4147_; uint8_t v_isShared_4148_; uint8_t v_isSharedCheck_4152_; 
lean_dec_ref(v___y_4119_);
lean_dec(v_goal_4073_);
v_a_4145_ = lean_ctor_get(v___x_4133_, 0);
v_isSharedCheck_4152_ = !lean_is_exclusive(v___x_4133_);
if (v_isSharedCheck_4152_ == 0)
{
v___x_4147_ = v___x_4133_;
v_isShared_4148_ = v_isSharedCheck_4152_;
goto v_resetjp_4146_;
}
else
{
lean_inc(v_a_4145_);
lean_dec(v___x_4133_);
v___x_4147_ = lean_box(0);
v_isShared_4148_ = v_isSharedCheck_4152_;
goto v_resetjp_4146_;
}
v_resetjp_4146_:
{
lean_object* v___x_4150_; 
if (v_isShared_4148_ == 0)
{
v___x_4150_ = v___x_4147_;
goto v_reusejp_4149_;
}
else
{
lean_object* v_reuseFailAlloc_4151_; 
v_reuseFailAlloc_4151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4151_, 0, v_a_4145_);
v___x_4150_ = v_reuseFailAlloc_4151_;
goto v_reusejp_4149_;
}
v_reusejp_4149_:
{
return v___x_4150_;
}
}
}
}
else
{
lean_object* v_a_4153_; lean_object* v___x_4155_; uint8_t v_isShared_4156_; uint8_t v_isSharedCheck_4160_; 
lean_dec_ref(v___y_4119_);
lean_dec_ref(v_satExpr_4088_);
lean_dec(v_goal_4073_);
v_a_4153_ = lean_ctor_get(v___x_4131_, 0);
v_isSharedCheck_4160_ = !lean_is_exclusive(v___x_4131_);
if (v_isSharedCheck_4160_ == 0)
{
v___x_4155_ = v___x_4131_;
v_isShared_4156_ = v_isSharedCheck_4160_;
goto v_resetjp_4154_;
}
else
{
lean_inc(v_a_4153_);
lean_dec(v___x_4131_);
v___x_4155_ = lean_box(0);
v_isShared_4156_ = v_isSharedCheck_4160_;
goto v_resetjp_4154_;
}
v_resetjp_4154_:
{
lean_object* v___x_4158_; 
if (v_isShared_4156_ == 0)
{
v___x_4158_ = v___x_4155_;
goto v_reusejp_4157_;
}
else
{
lean_object* v_reuseFailAlloc_4159_; 
v_reuseFailAlloc_4159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4159_, 0, v_a_4153_);
v___x_4158_ = v_reuseFailAlloc_4159_;
goto v_reusejp_4157_;
}
v_reusejp_4157_:
{
return v___x_4158_;
}
}
}
}
v___jp_4161_:
{
if (lean_obj_tag(v___y_4175_) == 0)
{
lean_object* v_a_4176_; 
v_a_4176_ = lean_ctor_get(v___y_4175_, 0);
lean_inc(v_a_4176_);
lean_dec_ref_known(v___y_4175_, 1);
if (lean_obj_tag(v_a_4176_) == 0)
{
lean_object* v_toCold_4177_; lean_object* v_options_4178_; uint8_t v_hasTrace_4179_; 
lean_inc_ref(v_unusedHypotheses_4089_);
lean_dec_ref(v_satExpr_4088_);
lean_dec_ref(v_reflectionResult_4074_);
lean_dec_ref(v_ctx_4072_);
v_toCold_4177_ = lean_ctor_get(v___y_4162_, 0);
v_options_4178_ = lean_ctor_get(v_toCold_4177_, 2);
v_hasTrace_4179_ = lean_ctor_get_uint8(v_options_4178_, sizeof(void*)*1);
if (v_hasTrace_4179_ == 0)
{
lean_object* v_a_4180_; 
v_a_4180_ = lean_ctor_get(v_a_4176_, 0);
lean_inc(v_a_4180_);
lean_dec_ref_known(v_a_4176_, 1);
v___y_4091_ = v_a_4180_;
v___y_4092_ = v___y_4166_;
v___y_4093_ = v___y_4173_;
goto v___jp_4090_;
}
else
{
lean_object* v_a_4181_; lean_object* v_inheritedTraceOptions_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; uint8_t v___x_4185_; 
v_a_4181_ = lean_ctor_get(v_a_4176_, 0);
lean_inc(v_a_4181_);
lean_dec_ref_known(v_a_4176_, 1);
v_inheritedTraceOptions_4182_ = lean_ctor_get(v_toCold_4177_, 11);
v___x_4183_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__1));
lean_inc(v___y_4164_);
v___x_4184_ = l_Lean_Name_append(v___x_4183_, v___y_4164_);
v___x_4185_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4182_, v_options_4178_, v___x_4184_);
lean_dec(v___x_4184_);
if (v___x_4185_ == 0)
{
v___y_4091_ = v_a_4181_;
v___y_4092_ = v___y_4166_;
v___y_4093_ = v___y_4173_;
goto v___jp_4090_;
}
else
{
lean_object* v___x_4186_; lean_object* v___x_4187_; 
v___x_4186_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__2, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__2);
lean_inc(v___y_4164_);
v___x_4187_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg(v___y_4164_, v___x_4186_, v___y_4168_, v___y_4170_, v___y_4162_, v___y_4171_);
if (lean_obj_tag(v___x_4187_) == 0)
{
lean_dec_ref_known(v___x_4187_, 1);
v___y_4091_ = v_a_4181_;
v___y_4092_ = v___y_4166_;
v___y_4093_ = v___y_4173_;
goto v___jp_4090_;
}
else
{
lean_object* v_a_4188_; lean_object* v___x_4190_; uint8_t v_isShared_4191_; uint8_t v_isSharedCheck_4195_; 
lean_dec(v_a_4181_);
lean_dec_ref(v___y_4166_);
lean_dec_ref(v_unusedHypotheses_4089_);
lean_dec(v_goal_4073_);
v_a_4188_ = lean_ctor_get(v___x_4187_, 0);
v_isSharedCheck_4195_ = !lean_is_exclusive(v___x_4187_);
if (v_isSharedCheck_4195_ == 0)
{
v___x_4190_ = v___x_4187_;
v_isShared_4191_ = v_isSharedCheck_4195_;
goto v_resetjp_4189_;
}
else
{
lean_inc(v_a_4188_);
lean_dec(v___x_4187_);
v___x_4190_ = lean_box(0);
v_isShared_4191_ = v_isSharedCheck_4195_;
goto v_resetjp_4189_;
}
v_resetjp_4189_:
{
lean_object* v___x_4193_; 
if (v_isShared_4191_ == 0)
{
v___x_4193_ = v___x_4190_;
goto v_reusejp_4192_;
}
else
{
lean_object* v_reuseFailAlloc_4194_; 
v_reuseFailAlloc_4194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4194_, 0, v_a_4188_);
v___x_4193_ = v_reuseFailAlloc_4194_;
goto v_reusejp_4192_;
}
v_reusejp_4192_:
{
return v___x_4193_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_4196_; lean_object* v_options_4197_; uint8_t v_hasTrace_4198_; 
lean_dec_ref(v___y_4166_);
v_toCold_4196_ = lean_ctor_get(v___y_4162_, 0);
v_options_4197_ = lean_ctor_get(v_toCold_4196_, 2);
v_hasTrace_4198_ = lean_ctor_get_uint8(v_options_4197_, sizeof(void*)*1);
if (v_hasTrace_4198_ == 0)
{
lean_object* v_a_4199_; 
v_a_4199_ = lean_ctor_get(v_a_4176_, 0);
lean_inc(v_a_4199_);
lean_dec_ref_known(v_a_4176_, 1);
v___y_4119_ = v_a_4199_;
v___y_4120_ = v___y_4169_;
v___y_4121_ = v___y_4173_;
v___y_4122_ = v___y_4167_;
v___y_4123_ = v___y_4163_;
v___y_4124_ = v___y_4172_;
v___y_4125_ = v___y_4174_;
v___y_4126_ = v___y_4165_;
v___y_4127_ = v___y_4168_;
v___y_4128_ = v___y_4170_;
v___y_4129_ = v___y_4162_;
v___y_4130_ = v___y_4171_;
goto v___jp_4118_;
}
else
{
lean_object* v_a_4200_; lean_object* v_inheritedTraceOptions_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; uint8_t v___x_4204_; 
v_a_4200_ = lean_ctor_get(v_a_4176_, 0);
lean_inc(v_a_4200_);
lean_dec_ref_known(v_a_4176_, 1);
v_inheritedTraceOptions_4201_ = lean_ctor_get(v_toCold_4196_, 11);
v___x_4202_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__1));
lean_inc(v___y_4164_);
v___x_4203_ = l_Lean_Name_append(v___x_4202_, v___y_4164_);
v___x_4204_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4201_, v_options_4197_, v___x_4203_);
lean_dec(v___x_4203_);
if (v___x_4204_ == 0)
{
v___y_4119_ = v_a_4200_;
v___y_4120_ = v___y_4169_;
v___y_4121_ = v___y_4173_;
v___y_4122_ = v___y_4167_;
v___y_4123_ = v___y_4163_;
v___y_4124_ = v___y_4172_;
v___y_4125_ = v___y_4174_;
v___y_4126_ = v___y_4165_;
v___y_4127_ = v___y_4168_;
v___y_4128_ = v___y_4170_;
v___y_4129_ = v___y_4162_;
v___y_4130_ = v___y_4171_;
goto v___jp_4118_;
}
else
{
lean_object* v___x_4205_; lean_object* v___x_4206_; 
v___x_4205_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__4, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__4_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__4);
lean_inc(v___y_4164_);
v___x_4206_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg(v___y_4164_, v___x_4205_, v___y_4168_, v___y_4170_, v___y_4162_, v___y_4171_);
if (lean_obj_tag(v___x_4206_) == 0)
{
lean_dec_ref_known(v___x_4206_, 1);
v___y_4119_ = v_a_4200_;
v___y_4120_ = v___y_4169_;
v___y_4121_ = v___y_4173_;
v___y_4122_ = v___y_4167_;
v___y_4123_ = v___y_4163_;
v___y_4124_ = v___y_4172_;
v___y_4125_ = v___y_4174_;
v___y_4126_ = v___y_4165_;
v___y_4127_ = v___y_4168_;
v___y_4128_ = v___y_4170_;
v___y_4129_ = v___y_4162_;
v___y_4130_ = v___y_4171_;
goto v___jp_4118_;
}
else
{
lean_object* v_a_4207_; lean_object* v___x_4209_; uint8_t v_isShared_4210_; uint8_t v_isSharedCheck_4214_; 
lean_dec(v_a_4200_);
lean_dec_ref(v_satExpr_4088_);
lean_dec_ref(v_reflectionResult_4074_);
lean_dec(v_goal_4073_);
lean_dec_ref(v_ctx_4072_);
v_a_4207_ = lean_ctor_get(v___x_4206_, 0);
v_isSharedCheck_4214_ = !lean_is_exclusive(v___x_4206_);
if (v_isSharedCheck_4214_ == 0)
{
v___x_4209_ = v___x_4206_;
v_isShared_4210_ = v_isSharedCheck_4214_;
goto v_resetjp_4208_;
}
else
{
lean_inc(v_a_4207_);
lean_dec(v___x_4206_);
v___x_4209_ = lean_box(0);
v_isShared_4210_ = v_isSharedCheck_4214_;
goto v_resetjp_4208_;
}
v_resetjp_4208_:
{
lean_object* v___x_4212_; 
if (v_isShared_4210_ == 0)
{
v___x_4212_ = v___x_4209_;
goto v_reusejp_4211_;
}
else
{
lean_object* v_reuseFailAlloc_4213_; 
v_reuseFailAlloc_4213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4213_, 0, v_a_4207_);
v___x_4212_ = v_reuseFailAlloc_4213_;
goto v_reusejp_4211_;
}
v_reusejp_4211_:
{
return v___x_4212_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4215_; lean_object* v___x_4217_; uint8_t v_isShared_4218_; uint8_t v_isSharedCheck_4222_; 
lean_dec_ref(v___y_4166_);
lean_dec_ref(v_satExpr_4088_);
lean_dec_ref(v_reflectionResult_4074_);
lean_dec(v_goal_4073_);
lean_dec_ref(v_ctx_4072_);
v_a_4215_ = lean_ctor_get(v___y_4175_, 0);
v_isSharedCheck_4222_ = !lean_is_exclusive(v___y_4175_);
if (v_isSharedCheck_4222_ == 0)
{
v___x_4217_ = v___y_4175_;
v_isShared_4218_ = v_isSharedCheck_4222_;
goto v_resetjp_4216_;
}
else
{
lean_inc(v_a_4215_);
lean_dec(v___y_4175_);
v___x_4217_ = lean_box(0);
v_isShared_4218_ = v_isSharedCheck_4222_;
goto v_resetjp_4216_;
}
v_resetjp_4216_:
{
lean_object* v___x_4220_; 
if (v_isShared_4218_ == 0)
{
v___x_4220_ = v___x_4217_;
goto v_reusejp_4219_;
}
else
{
lean_object* v_reuseFailAlloc_4221_; 
v_reuseFailAlloc_4221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4221_, 0, v_a_4215_);
v___x_4220_ = v_reuseFailAlloc_4221_;
goto v_reusejp_4219_;
}
v_reusejp_4219_:
{
return v___x_4220_;
}
}
}
}
v___jp_4240_:
{
lean_object* v___x_4260_; double v___x_4261_; double v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; 
v___x_4260_ = lean_io_get_num_heartbeats();
v___x_4261_ = lean_float_of_nat(v___y_4243_);
v___x_4262_ = lean_float_of_nat(v___x_4260_);
v___x_4263_ = lean_box_float(v___x_4261_);
v___x_4264_ = lean_box_float(v___x_4262_);
v___x_4265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4265_, 0, v___x_4263_);
lean_ctor_set(v___x_4265_, 1, v___x_4264_);
v___x_4266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4266_, 0, v_a_4259_);
lean_ctor_set(v___x_4266_, 1, v___x_4265_);
lean_inc(v___y_4244_);
v___x_4267_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5(v___y_4244_, v___x_4238_, v___x_4239_, v___y_4251_, v___y_4258_, v___y_4257_, v___f_4229_, v___x_4266_, v___y_4252_, v___y_4249_, v___y_4255_, v___y_4248_, v___y_4242_, v___y_4254_, v___y_4256_, v___y_4245_, v___y_4247_, v___y_4250_, v___y_4241_, v___y_4253_);
v___y_4162_ = v___y_4241_;
v___y_4163_ = v___y_4242_;
v___y_4164_ = v___y_4244_;
v___y_4165_ = v___y_4245_;
v___y_4166_ = v___y_4246_;
v___y_4167_ = v___y_4248_;
v___y_4168_ = v___y_4247_;
v___y_4169_ = v___y_4249_;
v___y_4170_ = v___y_4250_;
v___y_4171_ = v___y_4253_;
v___y_4172_ = v___y_4254_;
v___y_4173_ = v___y_4255_;
v___y_4174_ = v___y_4256_;
v___y_4175_ = v___x_4267_;
goto v___jp_4161_;
}
v___jp_4268_:
{
lean_object* v___x_4288_; double v___x_4289_; double v___x_4290_; double v___x_4291_; double v___x_4292_; double v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; 
v___x_4288_ = lean_io_mono_nanos_now();
v___x_4289_ = lean_float_of_nat(v___y_4285_);
v___x_4290_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_4291_ = lean_float_div(v___x_4289_, v___x_4290_);
v___x_4292_ = lean_float_of_nat(v___x_4288_);
v___x_4293_ = lean_float_div(v___x_4292_, v___x_4290_);
v___x_4294_ = lean_box_float(v___x_4291_);
v___x_4295_ = lean_box_float(v___x_4293_);
v___x_4296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4296_, 0, v___x_4294_);
lean_ctor_set(v___x_4296_, 1, v___x_4295_);
v___x_4297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4297_, 0, v_a_4287_);
lean_ctor_set(v___x_4297_, 1, v___x_4296_);
lean_inc(v___y_4271_);
v___x_4298_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5(v___y_4271_, v___x_4238_, v___x_4239_, v___y_4278_, v___y_4286_, v___y_4284_, v___f_4229_, v___x_4297_, v___y_4279_, v___y_4276_, v___y_4282_, v___y_4275_, v___y_4270_, v___y_4281_, v___y_4283_, v___y_4272_, v___y_4274_, v___y_4277_, v___y_4269_, v___y_4280_);
v___y_4162_ = v___y_4269_;
v___y_4163_ = v___y_4270_;
v___y_4164_ = v___y_4271_;
v___y_4165_ = v___y_4272_;
v___y_4166_ = v___y_4273_;
v___y_4167_ = v___y_4275_;
v___y_4168_ = v___y_4274_;
v___y_4169_ = v___y_4276_;
v___y_4170_ = v___y_4277_;
v___y_4171_ = v___y_4280_;
v___y_4172_ = v___y_4281_;
v___y_4173_ = v___y_4282_;
v___y_4174_ = v___y_4283_;
v___y_4175_ = v___x_4298_;
goto v___jp_4161_;
}
v___jp_4299_:
{
lean_object* v___x_4323_; lean_object* v_a_4324_; lean_object* v___x_4325_; uint8_t v___x_4326_; 
v___x_4323_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___redArg(v___y_4314_);
v_a_4324_ = lean_ctor_get(v___x_4323_, 0);
lean_inc(v_a_4324_);
lean_dec_ref(v___x_4323_);
v___x_4325_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4326_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v___y_4312_, v___x_4325_);
if (v___x_4326_ == 0)
{
lean_object* v___x_4327_; lean_object* v___x_4328_; 
v___x_4327_ = lean_io_mono_nanos_now();
v___x_4328_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_4304_, v___y_4317_, v___y_4308_, v___y_4321_, v___y_4320_, v___y_4311_, v___y_4316_, v___y_4301_, v___y_4314_);
if (lean_obj_tag(v___x_4328_) == 0)
{
lean_object* v_a_4329_; lean_object* v___x_4331_; uint8_t v_isShared_4332_; uint8_t v_isSharedCheck_4336_; 
v_a_4329_ = lean_ctor_get(v___x_4328_, 0);
v_isSharedCheck_4336_ = !lean_is_exclusive(v___x_4328_);
if (v_isSharedCheck_4336_ == 0)
{
v___x_4331_ = v___x_4328_;
v_isShared_4332_ = v_isSharedCheck_4336_;
goto v_resetjp_4330_;
}
else
{
lean_inc(v_a_4329_);
lean_dec(v___x_4328_);
v___x_4331_ = lean_box(0);
v_isShared_4332_ = v_isSharedCheck_4336_;
goto v_resetjp_4330_;
}
v_resetjp_4330_:
{
lean_object* v___x_4334_; 
if (v_isShared_4332_ == 0)
{
lean_ctor_set_tag(v___x_4331_, 1);
v___x_4334_ = v___x_4331_;
goto v_reusejp_4333_;
}
else
{
lean_object* v_reuseFailAlloc_4335_; 
v_reuseFailAlloc_4335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4335_, 0, v_a_4329_);
v___x_4334_ = v_reuseFailAlloc_4335_;
goto v_reusejp_4333_;
}
v_reusejp_4333_:
{
v___y_4269_ = v___y_4301_;
v___y_4270_ = v___y_4300_;
v___y_4271_ = v___y_4302_;
v___y_4272_ = v___y_4303_;
v___y_4273_ = v___y_4305_;
v___y_4274_ = v___y_4307_;
v___y_4275_ = v___y_4306_;
v___y_4276_ = v___y_4309_;
v___y_4277_ = v___y_4310_;
v___y_4278_ = v___y_4312_;
v___y_4279_ = v___y_4313_;
v___y_4280_ = v___y_4314_;
v___y_4281_ = v___y_4315_;
v___y_4282_ = v___y_4318_;
v___y_4283_ = v___y_4319_;
v___y_4284_ = v_a_4324_;
v___y_4285_ = v___x_4327_;
v___y_4286_ = v___y_4322_;
v_a_4287_ = v___x_4334_;
goto v___jp_4268_;
}
}
}
else
{
lean_object* v_a_4337_; lean_object* v___x_4339_; uint8_t v_isShared_4340_; uint8_t v_isSharedCheck_4344_; 
v_a_4337_ = lean_ctor_get(v___x_4328_, 0);
v_isSharedCheck_4344_ = !lean_is_exclusive(v___x_4328_);
if (v_isSharedCheck_4344_ == 0)
{
v___x_4339_ = v___x_4328_;
v_isShared_4340_ = v_isSharedCheck_4344_;
goto v_resetjp_4338_;
}
else
{
lean_inc(v_a_4337_);
lean_dec(v___x_4328_);
v___x_4339_ = lean_box(0);
v_isShared_4340_ = v_isSharedCheck_4344_;
goto v_resetjp_4338_;
}
v_resetjp_4338_:
{
lean_object* v___x_4342_; 
if (v_isShared_4340_ == 0)
{
lean_ctor_set_tag(v___x_4339_, 0);
v___x_4342_ = v___x_4339_;
goto v_reusejp_4341_;
}
else
{
lean_object* v_reuseFailAlloc_4343_; 
v_reuseFailAlloc_4343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4343_, 0, v_a_4337_);
v___x_4342_ = v_reuseFailAlloc_4343_;
goto v_reusejp_4341_;
}
v_reusejp_4341_:
{
v___y_4269_ = v___y_4301_;
v___y_4270_ = v___y_4300_;
v___y_4271_ = v___y_4302_;
v___y_4272_ = v___y_4303_;
v___y_4273_ = v___y_4305_;
v___y_4274_ = v___y_4307_;
v___y_4275_ = v___y_4306_;
v___y_4276_ = v___y_4309_;
v___y_4277_ = v___y_4310_;
v___y_4278_ = v___y_4312_;
v___y_4279_ = v___y_4313_;
v___y_4280_ = v___y_4314_;
v___y_4281_ = v___y_4315_;
v___y_4282_ = v___y_4318_;
v___y_4283_ = v___y_4319_;
v___y_4284_ = v_a_4324_;
v___y_4285_ = v___x_4327_;
v___y_4286_ = v___y_4322_;
v_a_4287_ = v___x_4342_;
goto v___jp_4268_;
}
}
}
}
else
{
lean_object* v___x_4345_; lean_object* v___x_4346_; 
v___x_4345_ = lean_io_get_num_heartbeats();
v___x_4346_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v___y_4304_, v___y_4317_, v___y_4308_, v___y_4321_, v___y_4320_, v___y_4311_, v___y_4316_, v___y_4301_, v___y_4314_);
if (lean_obj_tag(v___x_4346_) == 0)
{
lean_object* v_a_4347_; lean_object* v___x_4349_; uint8_t v_isShared_4350_; uint8_t v_isSharedCheck_4354_; 
v_a_4347_ = lean_ctor_get(v___x_4346_, 0);
v_isSharedCheck_4354_ = !lean_is_exclusive(v___x_4346_);
if (v_isSharedCheck_4354_ == 0)
{
v___x_4349_ = v___x_4346_;
v_isShared_4350_ = v_isSharedCheck_4354_;
goto v_resetjp_4348_;
}
else
{
lean_inc(v_a_4347_);
lean_dec(v___x_4346_);
v___x_4349_ = lean_box(0);
v_isShared_4350_ = v_isSharedCheck_4354_;
goto v_resetjp_4348_;
}
v_resetjp_4348_:
{
lean_object* v___x_4352_; 
if (v_isShared_4350_ == 0)
{
lean_ctor_set_tag(v___x_4349_, 1);
v___x_4352_ = v___x_4349_;
goto v_reusejp_4351_;
}
else
{
lean_object* v_reuseFailAlloc_4353_; 
v_reuseFailAlloc_4353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4353_, 0, v_a_4347_);
v___x_4352_ = v_reuseFailAlloc_4353_;
goto v_reusejp_4351_;
}
v_reusejp_4351_:
{
v___y_4241_ = v___y_4301_;
v___y_4242_ = v___y_4300_;
v___y_4243_ = v___x_4345_;
v___y_4244_ = v___y_4302_;
v___y_4245_ = v___y_4303_;
v___y_4246_ = v___y_4305_;
v___y_4247_ = v___y_4307_;
v___y_4248_ = v___y_4306_;
v___y_4249_ = v___y_4309_;
v___y_4250_ = v___y_4310_;
v___y_4251_ = v___y_4312_;
v___y_4252_ = v___y_4313_;
v___y_4253_ = v___y_4314_;
v___y_4254_ = v___y_4315_;
v___y_4255_ = v___y_4318_;
v___y_4256_ = v___y_4319_;
v___y_4257_ = v_a_4324_;
v___y_4258_ = v___y_4322_;
v_a_4259_ = v___x_4352_;
goto v___jp_4240_;
}
}
}
else
{
lean_object* v_a_4355_; lean_object* v___x_4357_; uint8_t v_isShared_4358_; uint8_t v_isSharedCheck_4362_; 
v_a_4355_ = lean_ctor_get(v___x_4346_, 0);
v_isSharedCheck_4362_ = !lean_is_exclusive(v___x_4346_);
if (v_isSharedCheck_4362_ == 0)
{
v___x_4357_ = v___x_4346_;
v_isShared_4358_ = v_isSharedCheck_4362_;
goto v_resetjp_4356_;
}
else
{
lean_inc(v_a_4355_);
lean_dec(v___x_4346_);
v___x_4357_ = lean_box(0);
v_isShared_4358_ = v_isSharedCheck_4362_;
goto v_resetjp_4356_;
}
v_resetjp_4356_:
{
lean_object* v___x_4360_; 
if (v_isShared_4358_ == 0)
{
lean_ctor_set_tag(v___x_4357_, 0);
v___x_4360_ = v___x_4357_;
goto v_reusejp_4359_;
}
else
{
lean_object* v_reuseFailAlloc_4361_; 
v_reuseFailAlloc_4361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4361_, 0, v_a_4355_);
v___x_4360_ = v_reuseFailAlloc_4361_;
goto v_reusejp_4359_;
}
v_reusejp_4359_:
{
v___y_4241_ = v___y_4301_;
v___y_4242_ = v___y_4300_;
v___y_4243_ = v___x_4345_;
v___y_4244_ = v___y_4302_;
v___y_4245_ = v___y_4303_;
v___y_4246_ = v___y_4305_;
v___y_4247_ = v___y_4307_;
v___y_4248_ = v___y_4306_;
v___y_4249_ = v___y_4309_;
v___y_4250_ = v___y_4310_;
v___y_4251_ = v___y_4312_;
v___y_4252_ = v___y_4313_;
v___y_4253_ = v___y_4314_;
v___y_4254_ = v___y_4315_;
v___y_4255_ = v___y_4318_;
v___y_4256_ = v___y_4319_;
v___y_4257_ = v_a_4324_;
v___y_4258_ = v___y_4322_;
v_a_4259_ = v___x_4360_;
goto v___jp_4240_;
}
}
}
}
}
v___jp_4363_:
{
if (lean_obj_tag(v___y_4378_) == 0)
{
lean_object* v_toCold_4379_; lean_object* v_options_4380_; uint8_t v_hasTrace_4381_; 
v_toCold_4379_ = lean_ctor_get(v___y_4364_, 0);
v_options_4380_ = lean_ctor_get(v_toCold_4379_, 2);
v_hasTrace_4381_ = lean_ctor_get_uint8(v_options_4380_, sizeof(void*)*1);
if (v_hasTrace_4381_ == 0)
{
lean_object* v_config_4382_; lean_object* v_a_4383_; lean_object* v_solver_4384_; lean_object* v_lratPath_4385_; lean_object* v_timeout_4386_; uint8_t v_trimProofs_4387_; uint8_t v_binaryProofs_4388_; uint8_t v_solverMode_4389_; lean_object* v___x_4390_; 
v_config_4382_ = lean_ctor_get(v_ctx_4072_, 5);
v_a_4383_ = lean_ctor_get(v___y_4378_, 0);
lean_inc(v_a_4383_);
lean_dec_ref_known(v___y_4378_, 1);
v_solver_4384_ = lean_ctor_get(v_ctx_4072_, 3);
v_lratPath_4385_ = lean_ctor_get(v_ctx_4072_, 4);
v_timeout_4386_ = lean_ctor_get(v_config_4382_, 0);
v_trimProofs_4387_ = lean_ctor_get_uint8(v_config_4382_, sizeof(void*)*3);
v_binaryProofs_4388_ = lean_ctor_get_uint8(v_config_4382_, sizeof(void*)*3 + 1);
v_solverMode_4389_ = lean_ctor_get_uint8(v_config_4382_, sizeof(void*)*3 + 10);
lean_inc(v_timeout_4386_);
lean_inc_ref(v_lratPath_4385_);
lean_inc_ref(v_solver_4384_);
v___x_4390_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_a_4383_, v_solver_4384_, v_lratPath_4385_, v_trimProofs_4387_, v_timeout_4386_, v_binaryProofs_4388_, v_solverMode_4389_, v___y_4364_, v___y_4374_);
v___y_4162_ = v___y_4364_;
v___y_4163_ = v___y_4365_;
v___y_4164_ = v___y_4366_;
v___y_4165_ = v___y_4367_;
v___y_4166_ = v___y_4368_;
v___y_4167_ = v___y_4369_;
v___y_4168_ = v___y_4370_;
v___y_4169_ = v___y_4371_;
v___y_4170_ = v___y_4372_;
v___y_4171_ = v___y_4374_;
v___y_4172_ = v___y_4375_;
v___y_4173_ = v___y_4376_;
v___y_4174_ = v___y_4377_;
v___y_4175_ = v___x_4390_;
goto v___jp_4161_;
}
else
{
lean_object* v_config_4391_; lean_object* v_a_4392_; lean_object* v_solver_4393_; lean_object* v_lratPath_4394_; lean_object* v_timeout_4395_; uint8_t v_trimProofs_4396_; uint8_t v_binaryProofs_4397_; uint8_t v_solverMode_4398_; lean_object* v_inheritedTraceOptions_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; uint8_t v___x_4402_; 
v_config_4391_ = lean_ctor_get(v_ctx_4072_, 5);
v_a_4392_ = lean_ctor_get(v___y_4378_, 0);
lean_inc(v_a_4392_);
lean_dec_ref_known(v___y_4378_, 1);
v_solver_4393_ = lean_ctor_get(v_ctx_4072_, 3);
v_lratPath_4394_ = lean_ctor_get(v_ctx_4072_, 4);
v_timeout_4395_ = lean_ctor_get(v_config_4391_, 0);
v_trimProofs_4396_ = lean_ctor_get_uint8(v_config_4391_, sizeof(void*)*3);
v_binaryProofs_4397_ = lean_ctor_get_uint8(v_config_4391_, sizeof(void*)*3 + 1);
v_solverMode_4398_ = lean_ctor_get_uint8(v_config_4391_, sizeof(void*)*3 + 10);
v_inheritedTraceOptions_4399_ = lean_ctor_get(v_toCold_4379_, 11);
v___x_4400_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__1___closed__1));
lean_inc(v___y_4366_);
v___x_4401_ = l_Lean_Name_append(v___x_4400_, v___y_4366_);
v___x_4402_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4399_, v_options_4380_, v___x_4401_);
lean_dec(v___x_4401_);
if (v___x_4402_ == 0)
{
lean_object* v___x_4403_; uint8_t v___x_4404_; 
v___x_4403_ = l_Lean_trace_profiler;
v___x_4404_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_options_4380_, v___x_4403_);
if (v___x_4404_ == 0)
{
lean_object* v___x_4405_; 
lean_inc(v_timeout_4395_);
lean_inc_ref(v_lratPath_4394_);
lean_inc_ref(v_solver_4393_);
v___x_4405_ = l_Lean_Meta_Tactic_BVDecide_runExternal(v_a_4392_, v_solver_4393_, v_lratPath_4394_, v_trimProofs_4396_, v_timeout_4395_, v_binaryProofs_4397_, v_solverMode_4398_, v___y_4364_, v___y_4374_);
v___y_4162_ = v___y_4364_;
v___y_4163_ = v___y_4365_;
v___y_4164_ = v___y_4366_;
v___y_4165_ = v___y_4367_;
v___y_4166_ = v___y_4368_;
v___y_4167_ = v___y_4369_;
v___y_4168_ = v___y_4370_;
v___y_4169_ = v___y_4371_;
v___y_4170_ = v___y_4372_;
v___y_4171_ = v___y_4374_;
v___y_4172_ = v___y_4375_;
v___y_4173_ = v___y_4376_;
v___y_4174_ = v___y_4377_;
v___y_4175_ = v___x_4405_;
goto v___jp_4161_;
}
else
{
lean_inc(v_timeout_4395_);
lean_inc_ref(v_solver_4393_);
lean_inc_ref(v_lratPath_4394_);
v___y_4300_ = v___y_4365_;
v___y_4301_ = v___y_4364_;
v___y_4302_ = v___y_4366_;
v___y_4303_ = v___y_4367_;
v___y_4304_ = v_a_4392_;
v___y_4305_ = v___y_4368_;
v___y_4306_ = v___y_4369_;
v___y_4307_ = v___y_4370_;
v___y_4308_ = v_lratPath_4394_;
v___y_4309_ = v___y_4371_;
v___y_4310_ = v___y_4372_;
v___y_4311_ = v_binaryProofs_4397_;
v___y_4312_ = v_options_4380_;
v___y_4313_ = v___y_4373_;
v___y_4314_ = v___y_4374_;
v___y_4315_ = v___y_4375_;
v___y_4316_ = v_solverMode_4398_;
v___y_4317_ = v_solver_4393_;
v___y_4318_ = v___y_4376_;
v___y_4319_ = v___y_4377_;
v___y_4320_ = v_timeout_4395_;
v___y_4321_ = v_trimProofs_4396_;
v___y_4322_ = v___x_4402_;
goto v___jp_4299_;
}
}
else
{
lean_inc(v_timeout_4395_);
lean_inc_ref(v_solver_4393_);
lean_inc_ref(v_lratPath_4394_);
v___y_4300_ = v___y_4365_;
v___y_4301_ = v___y_4364_;
v___y_4302_ = v___y_4366_;
v___y_4303_ = v___y_4367_;
v___y_4304_ = v_a_4392_;
v___y_4305_ = v___y_4368_;
v___y_4306_ = v___y_4369_;
v___y_4307_ = v___y_4370_;
v___y_4308_ = v_lratPath_4394_;
v___y_4309_ = v___y_4371_;
v___y_4310_ = v___y_4372_;
v___y_4311_ = v_binaryProofs_4397_;
v___y_4312_ = v_options_4380_;
v___y_4313_ = v___y_4373_;
v___y_4314_ = v___y_4374_;
v___y_4315_ = v___y_4375_;
v___y_4316_ = v_solverMode_4398_;
v___y_4317_ = v_solver_4393_;
v___y_4318_ = v___y_4376_;
v___y_4319_ = v___y_4377_;
v___y_4320_ = v_timeout_4395_;
v___y_4321_ = v_trimProofs_4396_;
v___y_4322_ = v___x_4402_;
goto v___jp_4299_;
}
}
}
else
{
lean_object* v_a_4406_; lean_object* v___x_4408_; uint8_t v_isShared_4409_; uint8_t v_isSharedCheck_4413_; 
lean_dec_ref(v___y_4368_);
lean_dec_ref(v_satExpr_4088_);
lean_dec_ref(v_reflectionResult_4074_);
lean_dec(v_goal_4073_);
lean_dec_ref(v_ctx_4072_);
v_a_4406_ = lean_ctor_get(v___y_4378_, 0);
v_isSharedCheck_4413_ = !lean_is_exclusive(v___y_4378_);
if (v_isSharedCheck_4413_ == 0)
{
v___x_4408_ = v___y_4378_;
v_isShared_4409_ = v_isSharedCheck_4413_;
goto v_resetjp_4407_;
}
else
{
lean_inc(v_a_4406_);
lean_dec(v___y_4378_);
v___x_4408_ = lean_box(0);
v_isShared_4409_ = v_isSharedCheck_4413_;
goto v_resetjp_4407_;
}
v_resetjp_4407_:
{
lean_object* v___x_4411_; 
if (v_isShared_4409_ == 0)
{
v___x_4411_ = v___x_4408_;
goto v_reusejp_4410_;
}
else
{
lean_object* v_reuseFailAlloc_4412_; 
v_reuseFailAlloc_4412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4412_, 0, v_a_4406_);
v___x_4411_ = v_reuseFailAlloc_4412_;
goto v_reusejp_4410_;
}
v_reusejp_4410_:
{
return v___x_4411_;
}
}
}
}
v___jp_4414_:
{
lean_object* v___x_4434_; double v___x_4435_; double v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; 
v___x_4434_ = lean_io_get_num_heartbeats();
v___x_4435_ = lean_float_of_nat(v___y_4427_);
v___x_4436_ = lean_float_of_nat(v___x_4434_);
v___x_4437_ = lean_box_float(v___x_4435_);
v___x_4438_ = lean_box_float(v___x_4436_);
v___x_4439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4439_, 0, v___x_4437_);
lean_ctor_set(v___x_4439_, 1, v___x_4438_);
v___x_4440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4440_, 0, v_a_4433_);
lean_ctor_set(v___x_4440_, 1, v___x_4439_);
lean_inc(v___y_4417_);
v___x_4441_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v___y_4417_, v___x_4238_, v___x_4239_, v___y_4431_, v___y_4424_, v___y_4432_, v___f_4230_, v___x_4440_, v___y_4425_, v___y_4422_, v___y_4429_, v___y_4421_, v___y_4416_, v___y_4428_, v___y_4430_, v___y_4418_, v___y_4420_, v___y_4423_, v___y_4415_, v___y_4426_);
v___y_4364_ = v___y_4415_;
v___y_4365_ = v___y_4416_;
v___y_4366_ = v___y_4417_;
v___y_4367_ = v___y_4418_;
v___y_4368_ = v___y_4419_;
v___y_4369_ = v___y_4421_;
v___y_4370_ = v___y_4420_;
v___y_4371_ = v___y_4422_;
v___y_4372_ = v___y_4423_;
v___y_4373_ = v___y_4425_;
v___y_4374_ = v___y_4426_;
v___y_4375_ = v___y_4428_;
v___y_4376_ = v___y_4429_;
v___y_4377_ = v___y_4430_;
v___y_4378_ = v___x_4441_;
goto v___jp_4363_;
}
v___jp_4442_:
{
lean_object* v___x_4462_; double v___x_4463_; double v___x_4464_; double v___x_4465_; double v___x_4466_; double v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; 
v___x_4462_ = lean_io_mono_nanos_now();
v___x_4463_ = lean_float_of_nat(v___y_4445_);
v___x_4464_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_4465_ = lean_float_div(v___x_4463_, v___x_4464_);
v___x_4466_ = lean_float_of_nat(v___x_4462_);
v___x_4467_ = lean_float_div(v___x_4466_, v___x_4464_);
v___x_4468_ = lean_box_float(v___x_4465_);
v___x_4469_ = lean_box_float(v___x_4467_);
v___x_4470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4470_, 0, v___x_4468_);
lean_ctor_set(v___x_4470_, 1, v___x_4469_);
v___x_4471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4471_, 0, v_a_4461_);
lean_ctor_set(v___x_4471_, 1, v___x_4470_);
lean_inc(v___y_4446_);
v___x_4472_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__6(v___y_4446_, v___x_4238_, v___x_4239_, v___y_4459_, v___y_4453_, v___y_4460_, v___f_4230_, v___x_4471_, v___y_4454_, v___y_4451_, v___y_4457_, v___y_4450_, v___y_4444_, v___y_4456_, v___y_4458_, v___y_4447_, v___y_4449_, v___y_4452_, v___y_4443_, v___y_4455_);
v___y_4364_ = v___y_4443_;
v___y_4365_ = v___y_4444_;
v___y_4366_ = v___y_4446_;
v___y_4367_ = v___y_4447_;
v___y_4368_ = v___y_4448_;
v___y_4369_ = v___y_4450_;
v___y_4370_ = v___y_4449_;
v___y_4371_ = v___y_4451_;
v___y_4372_ = v___y_4452_;
v___y_4373_ = v___y_4454_;
v___y_4374_ = v___y_4455_;
v___y_4375_ = v___y_4456_;
v___y_4376_ = v___y_4457_;
v___y_4377_ = v___y_4458_;
v___y_4378_ = v___x_4472_;
goto v___jp_4363_;
}
v___jp_4473_:
{
lean_object* v___x_4492_; lean_object* v_a_4493_; lean_object* v___x_4495_; uint8_t v_isShared_4496_; uint8_t v_isSharedCheck_4547_; 
v___x_4492_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__4___redArg(v___y_4487_);
v_a_4493_ = lean_ctor_get(v___x_4492_, 0);
v_isSharedCheck_4547_ = !lean_is_exclusive(v___x_4492_);
if (v_isSharedCheck_4547_ == 0)
{
v___x_4495_ = v___x_4492_;
v_isShared_4496_ = v_isSharedCheck_4547_;
goto v_resetjp_4494_;
}
else
{
lean_inc(v_a_4493_);
lean_dec(v___x_4492_);
v___x_4495_ = lean_box(0);
v_isShared_4496_ = v_isSharedCheck_4547_;
goto v_resetjp_4494_;
}
v_resetjp_4494_:
{
lean_object* v___x_4497_; uint8_t v___x_4498_; 
v___x_4497_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4498_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v___y_4491_, v___x_4497_);
if (v___x_4498_ == 0)
{
lean_object* v___x_4499_; lean_object* v___x_4500_; 
v___x_4499_ = lean_io_mono_nanos_now();
v___x_4500_ = l_IO_lazyPure___redArg(v___y_4478_);
if (lean_obj_tag(v___x_4500_) == 0)
{
lean_object* v_a_4501_; lean_object* v___x_4503_; uint8_t v_isShared_4504_; uint8_t v_isSharedCheck_4508_; 
lean_del_object(v___x_4495_);
v_a_4501_ = lean_ctor_get(v___x_4500_, 0);
v_isSharedCheck_4508_ = !lean_is_exclusive(v___x_4500_);
if (v_isSharedCheck_4508_ == 0)
{
v___x_4503_ = v___x_4500_;
v_isShared_4504_ = v_isSharedCheck_4508_;
goto v_resetjp_4502_;
}
else
{
lean_inc(v_a_4501_);
lean_dec(v___x_4500_);
v___x_4503_ = lean_box(0);
v_isShared_4504_ = v_isSharedCheck_4508_;
goto v_resetjp_4502_;
}
v_resetjp_4502_:
{
lean_object* v___x_4506_; 
if (v_isShared_4504_ == 0)
{
lean_ctor_set_tag(v___x_4503_, 1);
v___x_4506_ = v___x_4503_;
goto v_reusejp_4505_;
}
else
{
lean_object* v_reuseFailAlloc_4507_; 
v_reuseFailAlloc_4507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4507_, 0, v_a_4501_);
v___x_4506_ = v_reuseFailAlloc_4507_;
goto v_reusejp_4505_;
}
v_reusejp_4505_:
{
v___y_4443_ = v___y_4475_;
v___y_4444_ = v___y_4474_;
v___y_4445_ = v___x_4499_;
v___y_4446_ = v___y_4476_;
v___y_4447_ = v___y_4477_;
v___y_4448_ = v___y_4479_;
v___y_4449_ = v___y_4481_;
v___y_4450_ = v___y_4480_;
v___y_4451_ = v___y_4483_;
v___y_4452_ = v___y_4484_;
v___y_4453_ = v___y_4485_;
v___y_4454_ = v___y_4486_;
v___y_4455_ = v___y_4487_;
v___y_4456_ = v___y_4488_;
v___y_4457_ = v___y_4489_;
v___y_4458_ = v___y_4490_;
v___y_4459_ = v___y_4491_;
v___y_4460_ = v_a_4493_;
v_a_4461_ = v___x_4506_;
goto v___jp_4442_;
}
}
}
else
{
lean_object* v_a_4509_; lean_object* v___x_4511_; uint8_t v_isShared_4512_; uint8_t v_isSharedCheck_4522_; 
v_a_4509_ = lean_ctor_get(v___x_4500_, 0);
v_isSharedCheck_4522_ = !lean_is_exclusive(v___x_4500_);
if (v_isSharedCheck_4522_ == 0)
{
v___x_4511_ = v___x_4500_;
v_isShared_4512_ = v_isSharedCheck_4522_;
goto v_resetjp_4510_;
}
else
{
lean_inc(v_a_4509_);
lean_dec(v___x_4500_);
v___x_4511_ = lean_box(0);
v_isShared_4512_ = v_isSharedCheck_4522_;
goto v_resetjp_4510_;
}
v_resetjp_4510_:
{
lean_object* v___x_4513_; lean_object* v___x_4515_; 
v___x_4513_ = lean_io_error_to_string(v_a_4509_);
if (v_isShared_4512_ == 0)
{
lean_ctor_set_tag(v___x_4511_, 3);
lean_ctor_set(v___x_4511_, 0, v___x_4513_);
v___x_4515_ = v___x_4511_;
goto v_reusejp_4514_;
}
else
{
lean_object* v_reuseFailAlloc_4521_; 
v_reuseFailAlloc_4521_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4521_, 0, v___x_4513_);
v___x_4515_ = v_reuseFailAlloc_4521_;
goto v_reusejp_4514_;
}
v_reusejp_4514_:
{
lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4519_; 
v___x_4516_ = l_Lean_MessageData_ofFormat(v___x_4515_);
lean_inc(v___y_4482_);
v___x_4517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4517_, 0, v___y_4482_);
lean_ctor_set(v___x_4517_, 1, v___x_4516_);
if (v_isShared_4496_ == 0)
{
lean_ctor_set(v___x_4495_, 0, v___x_4517_);
v___x_4519_ = v___x_4495_;
goto v_reusejp_4518_;
}
else
{
lean_object* v_reuseFailAlloc_4520_; 
v_reuseFailAlloc_4520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4520_, 0, v___x_4517_);
v___x_4519_ = v_reuseFailAlloc_4520_;
goto v_reusejp_4518_;
}
v_reusejp_4518_:
{
v___y_4443_ = v___y_4475_;
v___y_4444_ = v___y_4474_;
v___y_4445_ = v___x_4499_;
v___y_4446_ = v___y_4476_;
v___y_4447_ = v___y_4477_;
v___y_4448_ = v___y_4479_;
v___y_4449_ = v___y_4481_;
v___y_4450_ = v___y_4480_;
v___y_4451_ = v___y_4483_;
v___y_4452_ = v___y_4484_;
v___y_4453_ = v___y_4485_;
v___y_4454_ = v___y_4486_;
v___y_4455_ = v___y_4487_;
v___y_4456_ = v___y_4488_;
v___y_4457_ = v___y_4489_;
v___y_4458_ = v___y_4490_;
v___y_4459_ = v___y_4491_;
v___y_4460_ = v_a_4493_;
v_a_4461_ = v___x_4519_;
goto v___jp_4442_;
}
}
}
}
}
else
{
lean_object* v___x_4523_; lean_object* v___x_4524_; 
v___x_4523_ = lean_io_get_num_heartbeats();
v___x_4524_ = l_IO_lazyPure___redArg(v___y_4478_);
if (lean_obj_tag(v___x_4524_) == 0)
{
lean_object* v_a_4525_; lean_object* v___x_4527_; uint8_t v_isShared_4528_; uint8_t v_isSharedCheck_4532_; 
lean_del_object(v___x_4495_);
v_a_4525_ = lean_ctor_get(v___x_4524_, 0);
v_isSharedCheck_4532_ = !lean_is_exclusive(v___x_4524_);
if (v_isSharedCheck_4532_ == 0)
{
v___x_4527_ = v___x_4524_;
v_isShared_4528_ = v_isSharedCheck_4532_;
goto v_resetjp_4526_;
}
else
{
lean_inc(v_a_4525_);
lean_dec(v___x_4524_);
v___x_4527_ = lean_box(0);
v_isShared_4528_ = v_isSharedCheck_4532_;
goto v_resetjp_4526_;
}
v_resetjp_4526_:
{
lean_object* v___x_4530_; 
if (v_isShared_4528_ == 0)
{
lean_ctor_set_tag(v___x_4527_, 1);
v___x_4530_ = v___x_4527_;
goto v_reusejp_4529_;
}
else
{
lean_object* v_reuseFailAlloc_4531_; 
v_reuseFailAlloc_4531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4531_, 0, v_a_4525_);
v___x_4530_ = v_reuseFailAlloc_4531_;
goto v_reusejp_4529_;
}
v_reusejp_4529_:
{
v___y_4415_ = v___y_4475_;
v___y_4416_ = v___y_4474_;
v___y_4417_ = v___y_4476_;
v___y_4418_ = v___y_4477_;
v___y_4419_ = v___y_4479_;
v___y_4420_ = v___y_4481_;
v___y_4421_ = v___y_4480_;
v___y_4422_ = v___y_4483_;
v___y_4423_ = v___y_4484_;
v___y_4424_ = v___y_4485_;
v___y_4425_ = v___y_4486_;
v___y_4426_ = v___y_4487_;
v___y_4427_ = v___x_4523_;
v___y_4428_ = v___y_4488_;
v___y_4429_ = v___y_4489_;
v___y_4430_ = v___y_4490_;
v___y_4431_ = v___y_4491_;
v___y_4432_ = v_a_4493_;
v_a_4433_ = v___x_4530_;
goto v___jp_4414_;
}
}
}
else
{
lean_object* v_a_4533_; lean_object* v___x_4535_; uint8_t v_isShared_4536_; uint8_t v_isSharedCheck_4546_; 
v_a_4533_ = lean_ctor_get(v___x_4524_, 0);
v_isSharedCheck_4546_ = !lean_is_exclusive(v___x_4524_);
if (v_isSharedCheck_4546_ == 0)
{
v___x_4535_ = v___x_4524_;
v_isShared_4536_ = v_isSharedCheck_4546_;
goto v_resetjp_4534_;
}
else
{
lean_inc(v_a_4533_);
lean_dec(v___x_4524_);
v___x_4535_ = lean_box(0);
v_isShared_4536_ = v_isSharedCheck_4546_;
goto v_resetjp_4534_;
}
v_resetjp_4534_:
{
lean_object* v___x_4537_; lean_object* v___x_4539_; 
v___x_4537_ = lean_io_error_to_string(v_a_4533_);
if (v_isShared_4536_ == 0)
{
lean_ctor_set_tag(v___x_4535_, 3);
lean_ctor_set(v___x_4535_, 0, v___x_4537_);
v___x_4539_ = v___x_4535_;
goto v_reusejp_4538_;
}
else
{
lean_object* v_reuseFailAlloc_4545_; 
v_reuseFailAlloc_4545_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4545_, 0, v___x_4537_);
v___x_4539_ = v_reuseFailAlloc_4545_;
goto v_reusejp_4538_;
}
v_reusejp_4538_:
{
lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4543_; 
v___x_4540_ = l_Lean_MessageData_ofFormat(v___x_4539_);
lean_inc(v___y_4482_);
v___x_4541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4541_, 0, v___y_4482_);
lean_ctor_set(v___x_4541_, 1, v___x_4540_);
if (v_isShared_4496_ == 0)
{
lean_ctor_set(v___x_4495_, 0, v___x_4541_);
v___x_4543_ = v___x_4495_;
goto v_reusejp_4542_;
}
else
{
lean_object* v_reuseFailAlloc_4544_; 
v_reuseFailAlloc_4544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4544_, 0, v___x_4541_);
v___x_4543_ = v_reuseFailAlloc_4544_;
goto v_reusejp_4542_;
}
v_reusejp_4542_:
{
v___y_4415_ = v___y_4475_;
v___y_4416_ = v___y_4474_;
v___y_4417_ = v___y_4476_;
v___y_4418_ = v___y_4477_;
v___y_4419_ = v___y_4479_;
v___y_4420_ = v___y_4481_;
v___y_4421_ = v___y_4480_;
v___y_4422_ = v___y_4483_;
v___y_4423_ = v___y_4484_;
v___y_4424_ = v___y_4485_;
v___y_4425_ = v___y_4486_;
v___y_4426_ = v___y_4487_;
v___y_4427_ = v___x_4523_;
v___y_4428_ = v___y_4488_;
v___y_4429_ = v___y_4489_;
v___y_4430_ = v___y_4490_;
v___y_4431_ = v___y_4491_;
v___y_4432_ = v_a_4493_;
v_a_4433_ = v___x_4543_;
goto v___jp_4414_;
}
}
}
}
}
}
}
v___jp_4548_:
{
lean_object* v_options_4566_; lean_object* v_inheritedTraceOptions_4567_; uint8_t v_hasTrace_4568_; lean_object* v___x_4569_; 
v_options_4566_ = lean_ctor_get(v_toCold_4563_, 2);
v_inheritedTraceOptions_4567_ = lean_ctor_get(v_toCold_4563_, 11);
v_hasTrace_4568_ = lean_ctor_get_uint8(v_options_4566_, sizeof(void*)*1);
v___x_4569_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3));
if (v_hasTrace_4568_ == 0)
{
lean_object* v___x_4570_; 
lean_dec_ref(v___y_4549_);
lean_inc(v___y_4565_);
lean_inc_ref(v___y_4562_);
lean_inc(v___y_4561_);
lean_inc_ref(v___y_4560_);
lean_inc(v___y_4559_);
lean_inc_ref(v___y_4558_);
lean_inc(v___y_4557_);
lean_inc_ref(v___y_4556_);
lean_inc(v___y_4555_);
lean_inc(v___y_4554_);
lean_inc_ref(v___y_4553_);
v___x_4570_ = lean_apply_12(v___y_4550_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_, v___y_4562_, v___y_4565_, lean_box(0));
v___y_4364_ = v___y_4562_;
v___y_4365_ = v___y_4556_;
v___y_4366_ = v___x_4569_;
v___y_4367_ = v___y_4559_;
v___y_4368_ = v___y_4551_;
v___y_4369_ = v___y_4555_;
v___y_4370_ = v___y_4560_;
v___y_4371_ = v___y_4553_;
v___y_4372_ = v___y_4561_;
v___y_4373_ = v___y_4552_;
v___y_4374_ = v___y_4565_;
v___y_4375_ = v___y_4557_;
v___y_4376_ = v___y_4554_;
v___y_4377_ = v___y_4558_;
v___y_4378_ = v___x_4570_;
goto v___jp_4363_;
}
else
{
lean_object* v___x_4571_; uint8_t v___x_4572_; 
v___x_4571_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24);
v___x_4572_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4567_, v_options_4566_, v___x_4571_);
if (v___x_4572_ == 0)
{
lean_object* v___x_4573_; uint8_t v___x_4574_; 
v___x_4573_ = l_Lean_trace_profiler;
v___x_4574_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_options_4566_, v___x_4573_);
if (v___x_4574_ == 0)
{
lean_object* v___x_4575_; 
lean_dec_ref(v___y_4549_);
lean_inc(v___y_4565_);
lean_inc_ref(v___y_4562_);
lean_inc(v___y_4561_);
lean_inc_ref(v___y_4560_);
lean_inc(v___y_4559_);
lean_inc_ref(v___y_4558_);
lean_inc(v___y_4557_);
lean_inc_ref(v___y_4556_);
lean_inc(v___y_4555_);
lean_inc(v___y_4554_);
lean_inc_ref(v___y_4553_);
v___x_4575_ = lean_apply_12(v___y_4550_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_, v___y_4562_, v___y_4565_, lean_box(0));
v___y_4364_ = v___y_4562_;
v___y_4365_ = v___y_4556_;
v___y_4366_ = v___x_4569_;
v___y_4367_ = v___y_4559_;
v___y_4368_ = v___y_4551_;
v___y_4369_ = v___y_4555_;
v___y_4370_ = v___y_4560_;
v___y_4371_ = v___y_4553_;
v___y_4372_ = v___y_4561_;
v___y_4373_ = v___y_4552_;
v___y_4374_ = v___y_4565_;
v___y_4375_ = v___y_4557_;
v___y_4376_ = v___y_4554_;
v___y_4377_ = v___y_4558_;
v___y_4378_ = v___x_4575_;
goto v___jp_4363_;
}
else
{
lean_dec_ref(v___y_4550_);
v___y_4474_ = v___y_4556_;
v___y_4475_ = v___y_4562_;
v___y_4476_ = v___x_4569_;
v___y_4477_ = v___y_4559_;
v___y_4478_ = v___y_4549_;
v___y_4479_ = v___y_4551_;
v___y_4480_ = v___y_4555_;
v___y_4481_ = v___y_4560_;
v___y_4482_ = v_ref_4564_;
v___y_4483_ = v___y_4553_;
v___y_4484_ = v___y_4561_;
v___y_4485_ = v___x_4572_;
v___y_4486_ = v___y_4552_;
v___y_4487_ = v___y_4565_;
v___y_4488_ = v___y_4557_;
v___y_4489_ = v___y_4554_;
v___y_4490_ = v___y_4558_;
v___y_4491_ = v_options_4566_;
goto v___jp_4473_;
}
}
else
{
lean_dec_ref(v___y_4550_);
v___y_4474_ = v___y_4556_;
v___y_4475_ = v___y_4562_;
v___y_4476_ = v___x_4569_;
v___y_4477_ = v___y_4559_;
v___y_4478_ = v___y_4549_;
v___y_4479_ = v___y_4551_;
v___y_4480_ = v___y_4555_;
v___y_4481_ = v___y_4560_;
v___y_4482_ = v_ref_4564_;
v___y_4483_ = v___y_4553_;
v___y_4484_ = v___y_4561_;
v___y_4485_ = v___x_4572_;
v___y_4486_ = v___y_4552_;
v___y_4487_ = v___y_4565_;
v___y_4488_ = v___y_4557_;
v___y_4489_ = v___y_4554_;
v___y_4490_ = v___y_4558_;
v___y_4491_ = v_options_4566_;
goto v___jp_4473_;
}
}
}
v___jp_4576_:
{
lean_object* v_config_4593_; uint8_t v_graphviz_4594_; 
v_config_4593_ = lean_ctor_get(v_ctx_4072_, 5);
v_graphviz_4594_ = lean_ctor_get_uint8(v_config_4593_, sizeof(void*)*3 + 8);
if (v_graphviz_4594_ == 0)
{
lean_object* v_toCold_4595_; lean_object* v_ref_4596_; 
lean_inc_ref(v_satExpr_4088_);
lean_dec_ref(v___y_4577_);
v_toCold_4595_ = lean_ctor_get(v___y_4591_, 0);
v_ref_4596_ = lean_ctor_get(v___y_4591_, 2);
v___y_4549_ = v___y_4580_;
v___y_4550_ = v___y_4579_;
v___y_4551_ = v___y_4578_;
v___y_4552_ = v___y_4581_;
v___y_4553_ = v___y_4582_;
v___y_4554_ = v___y_4583_;
v___y_4555_ = v___y_4584_;
v___y_4556_ = v___y_4585_;
v___y_4557_ = v___y_4586_;
v___y_4558_ = v___y_4587_;
v___y_4559_ = v___y_4588_;
v___y_4560_ = v___y_4589_;
v___y_4561_ = v___y_4590_;
v___y_4562_ = v___y_4591_;
v_toCold_4563_ = v_toCold_4595_;
v_ref_4564_ = v_ref_4596_;
v___y_4565_ = v___y_4592_;
goto v___jp_4548_;
}
else
{
lean_object* v_toCold_4597_; lean_object* v_ref_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; 
v_toCold_4597_ = lean_ctor_get(v___y_4591_, 0);
v_ref_4598_ = lean_ctor_get(v___y_4591_, 2);
v___x_4599_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__7, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__7_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__10___closed__7);
v___x_4600_ = l_Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7(v___y_4577_);
v___x_4601_ = l_IO_FS_writeFile(v___x_4599_, v___x_4600_);
lean_dec_ref(v___x_4600_);
if (lean_obj_tag(v___x_4601_) == 0)
{
lean_inc_ref(v_satExpr_4088_);
lean_dec_ref_known(v___x_4601_, 1);
v___y_4549_ = v___y_4580_;
v___y_4550_ = v___y_4579_;
v___y_4551_ = v___y_4578_;
v___y_4552_ = v___y_4581_;
v___y_4553_ = v___y_4582_;
v___y_4554_ = v___y_4583_;
v___y_4555_ = v___y_4584_;
v___y_4556_ = v___y_4585_;
v___y_4557_ = v___y_4586_;
v___y_4558_ = v___y_4587_;
v___y_4559_ = v___y_4588_;
v___y_4560_ = v___y_4589_;
v___y_4561_ = v___y_4590_;
v___y_4562_ = v___y_4591_;
v_toCold_4563_ = v_toCold_4597_;
v_ref_4564_ = v_ref_4598_;
v___y_4565_ = v___y_4592_;
goto v___jp_4548_;
}
else
{
lean_object* v___x_4603_; uint8_t v_isShared_4604_; uint8_t v_isSharedCheck_4619_; 
lean_dec_ref(v___y_4580_);
lean_dec_ref(v___y_4579_);
lean_dec_ref(v___y_4578_);
lean_dec(v_goal_4073_);
lean_dec_ref(v_ctx_4072_);
v_isSharedCheck_4619_ = !lean_is_exclusive(v_reflectionResult_4074_);
if (v_isSharedCheck_4619_ == 0)
{
lean_object* v_unused_4620_; lean_object* v_unused_4621_; 
v_unused_4620_ = lean_ctor_get(v_reflectionResult_4074_, 1);
lean_dec(v_unused_4620_);
v_unused_4621_ = lean_ctor_get(v_reflectionResult_4074_, 0);
lean_dec(v_unused_4621_);
v___x_4603_ = v_reflectionResult_4074_;
v_isShared_4604_ = v_isSharedCheck_4619_;
goto v_resetjp_4602_;
}
else
{
lean_dec(v_reflectionResult_4074_);
v___x_4603_ = lean_box(0);
v_isShared_4604_ = v_isSharedCheck_4619_;
goto v_resetjp_4602_;
}
v_resetjp_4602_:
{
lean_object* v_a_4605_; lean_object* v___x_4607_; uint8_t v_isShared_4608_; uint8_t v_isSharedCheck_4618_; 
v_a_4605_ = lean_ctor_get(v___x_4601_, 0);
v_isSharedCheck_4618_ = !lean_is_exclusive(v___x_4601_);
if (v_isSharedCheck_4618_ == 0)
{
v___x_4607_ = v___x_4601_;
v_isShared_4608_ = v_isSharedCheck_4618_;
goto v_resetjp_4606_;
}
else
{
lean_inc(v_a_4605_);
lean_dec(v___x_4601_);
v___x_4607_ = lean_box(0);
v_isShared_4608_ = v_isSharedCheck_4618_;
goto v_resetjp_4606_;
}
v_resetjp_4606_:
{
lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v___x_4613_; 
v___x_4609_ = lean_io_error_to_string(v_a_4605_);
v___x_4610_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4610_, 0, v___x_4609_);
v___x_4611_ = l_Lean_MessageData_ofFormat(v___x_4610_);
lean_inc(v_ref_4598_);
if (v_isShared_4604_ == 0)
{
lean_ctor_set(v___x_4603_, 1, v___x_4611_);
lean_ctor_set(v___x_4603_, 0, v_ref_4598_);
v___x_4613_ = v___x_4603_;
goto v_reusejp_4612_;
}
else
{
lean_object* v_reuseFailAlloc_4617_; 
v_reuseFailAlloc_4617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4617_, 0, v_ref_4598_);
lean_ctor_set(v_reuseFailAlloc_4617_, 1, v___x_4611_);
v___x_4613_ = v_reuseFailAlloc_4617_;
goto v_reusejp_4612_;
}
v_reusejp_4612_:
{
lean_object* v___x_4615_; 
if (v_isShared_4608_ == 0)
{
lean_ctor_set(v___x_4607_, 0, v___x_4613_);
v___x_4615_ = v___x_4607_;
goto v_reusejp_4614_;
}
else
{
lean_object* v_reuseFailAlloc_4616_; 
v_reuseFailAlloc_4616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4616_, 0, v___x_4613_);
v___x_4615_ = v_reuseFailAlloc_4616_;
goto v_reusejp_4614_;
}
v_reusejp_4614_:
{
return v___x_4615_;
}
}
}
}
}
}
}
v___jp_4622_:
{
lean_object* v_aig_4636_; lean_object* v_toCold_4637_; lean_object* v_options_4638_; lean_object* v_ref_4639_; lean_object* v_decls_4640_; lean_object* v_inheritedTraceOptions_4641_; uint8_t v_hasTrace_4642_; lean_object* v___f_4643_; lean_object* v___f_4644_; 
v_aig_4636_ = lean_ctor_get(v_entry_4623_, 0);
lean_inc_ref_n(v_aig_4636_, 2);
v_toCold_4637_ = lean_ctor_get(v___y_4634_, 0);
v_options_4638_ = lean_ctor_get(v_toCold_4637_, 2);
v_ref_4639_ = lean_ctor_get(v_entry_4623_, 1);
v_decls_4640_ = lean_ctor_get(v_aig_4636_, 0);
v_inheritedTraceOptions_4641_ = lean_ctor_get(v_toCold_4637_, 11);
v_hasTrace_4642_ = lean_ctor_get_uint8(v_options_4638_, sizeof(void*)*1);
lean_inc_ref(v_ref_4639_);
lean_inc_ref(v_entry_4623_);
v___f_4643_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__6___boxed), 5, 4);
lean_closure_set(v___f_4643_, 0, v_aig_4636_);
lean_closure_set(v___f_4643_, 1, v___x_4232_);
lean_closure_set(v___f_4643_, 2, v_entry_4623_);
lean_closure_set(v___f_4643_, 3, v_ref_4639_);
lean_inc_ref(v___f_4643_);
v___f_4644_ = lean_alloc_closure((void*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__7___boxed), 13, 1);
lean_closure_set(v___f_4644_, 0, v___f_4643_);
if (v_hasTrace_4642_ == 0)
{
v___y_4577_ = v_entry_4623_;
v___y_4578_ = v_aig_4636_;
v___y_4579_ = v___f_4644_;
v___y_4580_ = v___f_4643_;
v___y_4581_ = v___y_4624_;
v___y_4582_ = v___y_4625_;
v___y_4583_ = v___y_4626_;
v___y_4584_ = v___y_4627_;
v___y_4585_ = v___y_4628_;
v___y_4586_ = v___y_4629_;
v___y_4587_ = v___y_4630_;
v___y_4588_ = v___y_4631_;
v___y_4589_ = v___y_4632_;
v___y_4590_ = v___y_4633_;
v___y_4591_ = v___y_4634_;
v___y_4592_ = v___y_4635_;
goto v___jp_4576_;
}
else
{
lean_object* v___x_4645_; uint8_t v___x_4646_; 
v___x_4645_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__6, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__6_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__6);
v___x_4646_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4641_, v_options_4638_, v___x_4645_);
if (v___x_4646_ == 0)
{
v___y_4577_ = v_entry_4623_;
v___y_4578_ = v_aig_4636_;
v___y_4579_ = v___f_4644_;
v___y_4580_ = v___f_4643_;
v___y_4581_ = v___y_4624_;
v___y_4582_ = v___y_4625_;
v___y_4583_ = v___y_4626_;
v___y_4584_ = v___y_4627_;
v___y_4585_ = v___y_4628_;
v___y_4586_ = v___y_4629_;
v___y_4587_ = v___y_4630_;
v___y_4588_ = v___y_4631_;
v___y_4589_ = v___y_4632_;
v___y_4590_ = v___y_4633_;
v___y_4591_ = v___y_4634_;
v___y_4592_ = v___y_4635_;
goto v___jp_4576_;
}
else
{
lean_object* v_aigSize_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; 
v_aigSize_4647_ = lean_array_get_size(v_decls_4640_);
v___x_4648_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__7));
v___x_4649_ = l_Nat_reprFast(v_aigSize_4647_);
v___x_4650_ = lean_string_append(v___x_4648_, v___x_4649_);
lean_dec_ref(v___x_4649_);
v___x_4651_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratBitblaster___closed__8));
v___x_4652_ = lean_string_append(v___x_4650_, v___x_4651_);
v___x_4653_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4653_, 0, v___x_4652_);
v___x_4654_ = l_Lean_MessageData_ofFormat(v___x_4653_);
v___x_4655_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg(v_cls_4235_, v___x_4654_, v___y_4632_, v___y_4633_, v___y_4634_, v___y_4635_);
if (lean_obj_tag(v___x_4655_) == 0)
{
lean_dec_ref_known(v___x_4655_, 1);
v___y_4577_ = v_entry_4623_;
v___y_4578_ = v_aig_4636_;
v___y_4579_ = v___f_4644_;
v___y_4580_ = v___f_4643_;
v___y_4581_ = v___y_4624_;
v___y_4582_ = v___y_4625_;
v___y_4583_ = v___y_4626_;
v___y_4584_ = v___y_4627_;
v___y_4585_ = v___y_4628_;
v___y_4586_ = v___y_4629_;
v___y_4587_ = v___y_4630_;
v___y_4588_ = v___y_4631_;
v___y_4589_ = v___y_4632_;
v___y_4590_ = v___y_4633_;
v___y_4591_ = v___y_4634_;
v___y_4592_ = v___y_4635_;
goto v___jp_4576_;
}
else
{
lean_object* v_a_4656_; lean_object* v___x_4658_; uint8_t v_isShared_4659_; uint8_t v_isSharedCheck_4663_; 
lean_dec_ref(v___f_4644_);
lean_dec_ref(v___f_4643_);
lean_dec_ref(v_aig_4636_);
lean_dec_ref(v_entry_4623_);
lean_dec_ref(v_reflectionResult_4074_);
lean_dec(v_goal_4073_);
lean_dec_ref(v_ctx_4072_);
v_a_4656_ = lean_ctor_get(v___x_4655_, 0);
v_isSharedCheck_4663_ = !lean_is_exclusive(v___x_4655_);
if (v_isSharedCheck_4663_ == 0)
{
v___x_4658_ = v___x_4655_;
v_isShared_4659_ = v_isSharedCheck_4663_;
goto v_resetjp_4657_;
}
else
{
lean_inc(v_a_4656_);
lean_dec(v___x_4655_);
v___x_4658_ = lean_box(0);
v_isShared_4659_ = v_isSharedCheck_4663_;
goto v_resetjp_4657_;
}
v_resetjp_4657_:
{
lean_object* v___x_4661_; 
if (v_isShared_4659_ == 0)
{
v___x_4661_ = v___x_4658_;
goto v_reusejp_4660_;
}
else
{
lean_object* v_reuseFailAlloc_4662_; 
v_reuseFailAlloc_4662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4662_, 0, v_a_4656_);
v___x_4661_ = v_reuseFailAlloc_4662_;
goto v_reusejp_4660_;
}
v_reusejp_4660_:
{
return v___x_4661_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratBitblaster___boxed(lean_object* v_ctx_4934_, lean_object* v_goal_4935_, lean_object* v_reflectionResult_4936_, lean_object* v_a_4937_, lean_object* v_a_4938_, lean_object* v_a_4939_, lean_object* v_a_4940_, lean_object* v_a_4941_, lean_object* v_a_4942_, lean_object* v_a_4943_, lean_object* v_a_4944_, lean_object* v_a_4945_, lean_object* v_a_4946_, lean_object* v_a_4947_, lean_object* v_a_4948_, lean_object* v_a_4949_){
_start:
{
lean_object* v_res_4950_; 
v_res_4950_ = l_Lean_Meta_Tactic_BVDecide_lratBitblaster(v_ctx_4934_, v_goal_4935_, v_reflectionResult_4936_, v_a_4937_, v_a_4938_, v_a_4939_, v_a_4940_, v_a_4941_, v_a_4942_, v_a_4943_, v_a_4944_, v_a_4945_, v_a_4946_, v_a_4947_, v_a_4948_);
lean_dec(v_a_4948_);
lean_dec_ref(v_a_4947_);
lean_dec(v_a_4946_);
lean_dec_ref(v_a_4945_);
lean_dec(v_a_4944_);
lean_dec_ref(v_a_4943_);
lean_dec(v_a_4942_);
lean_dec_ref(v_a_4941_);
lean_dec(v_a_4940_);
lean_dec(v_a_4939_);
lean_dec_ref(v_a_4938_);
lean_dec(v_a_4937_);
return v_res_4950_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(lean_object* v_cls_4951_, lean_object* v_msg_4952_, lean_object* v___y_4953_, lean_object* v___y_4954_, lean_object* v___y_4955_, lean_object* v___y_4956_, lean_object* v___y_4957_, lean_object* v___y_4958_, lean_object* v___y_4959_, lean_object* v___y_4960_, lean_object* v___y_4961_, lean_object* v___y_4962_, lean_object* v___y_4963_, lean_object* v___y_4964_){
_start:
{
lean_object* v___x_4966_; 
v___x_4966_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___redArg(v_cls_4951_, v_msg_4952_, v___y_4961_, v___y_4962_, v___y_4963_, v___y_4964_);
return v___x_4966_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2___boxed(lean_object* v_cls_4967_, lean_object* v_msg_4968_, lean_object* v___y_4969_, lean_object* v___y_4970_, lean_object* v___y_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_, lean_object* v___y_4974_, lean_object* v___y_4975_, lean_object* v___y_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_, lean_object* v___y_4980_, lean_object* v___y_4981_){
_start:
{
lean_object* v_res_4982_; 
v_res_4982_ = l_Lean_addTrace___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__2(v_cls_4967_, v_msg_4968_, v___y_4969_, v___y_4970_, v___y_4971_, v___y_4972_, v___y_4973_, v___y_4974_, v___y_4975_, v___y_4976_, v___y_4977_, v___y_4978_, v___y_4979_, v___y_4980_);
lean_dec(v___y_4980_);
lean_dec_ref(v___y_4979_);
lean_dec(v___y_4978_);
lean_dec_ref(v___y_4977_);
lean_dec(v___y_4976_);
lean_dec_ref(v___y_4975_);
lean_dec(v___y_4974_);
lean_dec_ref(v___y_4973_);
lean_dec(v___y_4972_);
lean_dec(v___y_4971_);
lean_dec_ref(v___y_4970_);
lean_dec(v___y_4969_);
return v_res_4982_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(lean_object* v_mvarId_4983_, lean_object* v_val_4984_, lean_object* v___y_4985_, lean_object* v___y_4986_, lean_object* v___y_4987_, lean_object* v___y_4988_, lean_object* v___y_4989_, lean_object* v___y_4990_, lean_object* v___y_4991_, lean_object* v___y_4992_, lean_object* v___y_4993_, lean_object* v___y_4994_, lean_object* v___y_4995_, lean_object* v___y_4996_){
_start:
{
lean_object* v___x_4998_; 
v___x_4998_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3___redArg(v_mvarId_4983_, v_val_4984_, v___y_4994_);
return v___x_4998_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3___boxed(lean_object* v_mvarId_4999_, lean_object* v_val_5000_, lean_object* v___y_5001_, lean_object* v___y_5002_, lean_object* v___y_5003_, lean_object* v___y_5004_, lean_object* v___y_5005_, lean_object* v___y_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_, lean_object* v___y_5012_, lean_object* v___y_5013_){
_start:
{
lean_object* v_res_5014_; 
v_res_5014_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3(v_mvarId_4999_, v_val_5000_, v___y_5001_, v___y_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_, v___y_5011_, v___y_5012_);
lean_dec(v___y_5012_);
lean_dec_ref(v___y_5011_);
lean_dec(v___y_5010_);
lean_dec_ref(v___y_5009_);
lean_dec(v___y_5008_);
lean_dec_ref(v___y_5007_);
lean_dec(v___y_5006_);
lean_dec_ref(v___y_5005_);
lean_dec(v___y_5004_);
lean_dec(v___y_5003_);
lean_dec_ref(v___y_5002_);
lean_dec(v___y_5001_);
return v_res_5014_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9(lean_object* v_00_u03b1_5015_, lean_object* v_x_5016_, lean_object* v___y_5017_, lean_object* v___y_5018_, lean_object* v___y_5019_, lean_object* v___y_5020_, lean_object* v___y_5021_, lean_object* v___y_5022_, lean_object* v___y_5023_, lean_object* v___y_5024_, lean_object* v___y_5025_, lean_object* v___y_5026_, lean_object* v___y_5027_, lean_object* v___y_5028_){
_start:
{
lean_object* v___x_5030_; 
v___x_5030_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9___redArg(v_x_5016_);
return v___x_5030_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9___boxed(lean_object* v_00_u03b1_5031_, lean_object* v_x_5032_, lean_object* v___y_5033_, lean_object* v___y_5034_, lean_object* v___y_5035_, lean_object* v___y_5036_, lean_object* v___y_5037_, lean_object* v___y_5038_, lean_object* v___y_5039_, lean_object* v___y_5040_, lean_object* v___y_5041_, lean_object* v___y_5042_, lean_object* v___y_5043_, lean_object* v___y_5044_, lean_object* v___y_5045_){
_start:
{
lean_object* v_res_5046_; 
v_res_5046_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__9(v_00_u03b1_5031_, v_x_5032_, v___y_5033_, v___y_5034_, v___y_5035_, v___y_5036_, v___y_5037_, v___y_5038_, v___y_5039_, v___y_5040_, v___y_5041_, v___y_5042_, v___y_5043_, v___y_5044_);
lean_dec(v___y_5044_);
lean_dec_ref(v___y_5043_);
lean_dec(v___y_5042_);
lean_dec_ref(v___y_5041_);
lean_dec(v___y_5040_);
lean_dec_ref(v___y_5039_);
lean_dec(v___y_5038_);
lean_dec_ref(v___y_5037_);
lean_dec(v___y_5036_);
lean_dec(v___y_5035_);
lean_dec_ref(v___y_5034_);
lean_dec(v___y_5033_);
return v_res_5046_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5(lean_object* v_00_u03b2_5047_, lean_object* v_x_5048_, lean_object* v_x_5049_, lean_object* v_x_5050_){
_start:
{
lean_object* v___x_5051_; 
v___x_5051_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5___redArg(v_x_5048_, v_x_5049_, v_x_5050_);
return v___x_5051_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__8(lean_object* v_oldTraces_5052_, lean_object* v_data_5053_, lean_object* v_ref_5054_, lean_object* v_msg_5055_, lean_object* v___y_5056_, lean_object* v___y_5057_, lean_object* v___y_5058_, lean_object* v___y_5059_, lean_object* v___y_5060_, lean_object* v___y_5061_, lean_object* v___y_5062_, lean_object* v___y_5063_, lean_object* v___y_5064_, lean_object* v___y_5065_, lean_object* v___y_5066_, lean_object* v___y_5067_){
_start:
{
lean_object* v___x_5069_; 
v___x_5069_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__8___redArg(v_oldTraces_5052_, v_data_5053_, v_ref_5054_, v_msg_5055_, v___y_5064_, v___y_5065_, v___y_5066_, v___y_5067_);
return v___x_5069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__8___boxed(lean_object** _args){
lean_object* v_oldTraces_5070_ = _args[0];
lean_object* v_data_5071_ = _args[1];
lean_object* v_ref_5072_ = _args[2];
lean_object* v_msg_5073_ = _args[3];
lean_object* v___y_5074_ = _args[4];
lean_object* v___y_5075_ = _args[5];
lean_object* v___y_5076_ = _args[6];
lean_object* v___y_5077_ = _args[7];
lean_object* v___y_5078_ = _args[8];
lean_object* v___y_5079_ = _args[9];
lean_object* v___y_5080_ = _args[10];
lean_object* v___y_5081_ = _args[11];
lean_object* v___y_5082_ = _args[12];
lean_object* v___y_5083_ = _args[13];
lean_object* v___y_5084_ = _args[14];
lean_object* v___y_5085_ = _args[15];
lean_object* v___y_5086_ = _args[16];
_start:
{
lean_object* v_res_5087_; 
v_res_5087_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__5_spec__8(v_oldTraces_5070_, v_data_5071_, v_ref_5072_, v_msg_5073_, v___y_5074_, v___y_5075_, v___y_5076_, v___y_5077_, v___y_5078_, v___y_5079_, v___y_5080_, v___y_5081_, v___y_5082_, v___y_5083_, v___y_5084_, v___y_5085_);
lean_dec(v___y_5085_);
lean_dec_ref(v___y_5084_);
lean_dec(v___y_5083_);
lean_dec_ref(v___y_5082_);
lean_dec(v___y_5081_);
lean_dec_ref(v___y_5080_);
lean_dec(v___y_5079_);
lean_dec_ref(v___y_5078_);
lean_dec(v___y_5077_);
lean_dec(v___y_5076_);
lean_dec_ref(v___y_5075_);
lean_dec(v___y_5074_);
return v_res_5087_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15(lean_object* v_acc_5088_, lean_object* v_decls_5089_, lean_object* v_hinv_5090_, lean_object* v_idx_5091_, lean_object* v_hidx_5092_, lean_object* v_a_5093_){
_start:
{
lean_object* v___x_5094_; 
v___x_5094_ = l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___redArg(v_acc_5088_, v_decls_5089_, v_idx_5091_, v_a_5093_);
return v___x_5094_;
}
}
LEAN_EXPORT lean_object* l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15___boxed(lean_object* v_acc_5095_, lean_object* v_decls_5096_, lean_object* v_hinv_5097_, lean_object* v_idx_5098_, lean_object* v_hidx_5099_, lean_object* v_a_5100_){
_start:
{
lean_object* v_res_5101_; 
v_res_5101_ = l_Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15(v_acc_5095_, v_decls_5096_, v_hinv_5097_, v_idx_5098_, v_hidx_5099_, v_a_5100_);
lean_dec_ref(v_decls_5096_);
return v_res_5101_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7(lean_object* v_00_u03b2_5102_, lean_object* v_x_5103_, size_t v_x_5104_, size_t v_x_5105_, lean_object* v_x_5106_, lean_object* v_x_5107_){
_start:
{
lean_object* v___x_5108_; 
v___x_5108_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7___redArg(v_x_5103_, v_x_5104_, v_x_5105_, v_x_5106_, v_x_5107_);
return v___x_5108_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7___boxed(lean_object* v_00_u03b2_5109_, lean_object* v_x_5110_, lean_object* v_x_5111_, lean_object* v_x_5112_, lean_object* v_x_5113_, lean_object* v_x_5114_){
_start:
{
size_t v_x_659882__boxed_5115_; size_t v_x_659883__boxed_5116_; lean_object* v_res_5117_; 
v_x_659882__boxed_5115_ = lean_unbox_usize(v_x_5111_);
lean_dec(v_x_5111_);
v_x_659883__boxed_5116_ = lean_unbox_usize(v_x_5112_);
lean_dec(v_x_5112_);
v_res_5117_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7(v_00_u03b2_5109_, v_x_5110_, v_x_659882__boxed_5115_, v_x_659883__boxed_5116_, v_x_5113_, v_x_5114_);
return v_res_5117_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17(lean_object* v___x_5118_, lean_object* v_00_u03b2_5119_, lean_object* v_m_5120_, lean_object* v_a_5121_){
_start:
{
uint8_t v___x_5122_; 
v___x_5122_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17___redArg(v___x_5118_, v_m_5120_, v_a_5121_);
return v___x_5122_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17___boxed(lean_object* v___x_5123_, lean_object* v_00_u03b2_5124_, lean_object* v_m_5125_, lean_object* v_a_5126_){
_start:
{
uint8_t v_res_5127_; lean_object* v_r_5128_; 
v_res_5127_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17(v___x_5123_, v_00_u03b2_5124_, v_m_5125_, v_a_5126_);
lean_dec(v_a_5126_);
lean_dec_ref(v_m_5125_);
lean_dec(v___x_5123_);
v_r_5128_ = lean_box(v_res_5127_);
return v_r_5128_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18(lean_object* v___x_5129_, lean_object* v_00_u03b2_5130_, lean_object* v_m_5131_, lean_object* v_a_5132_, lean_object* v_b_5133_){
_start:
{
lean_object* v___x_5134_; 
v___x_5134_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18___redArg(v___x_5129_, v_m_5131_, v_a_5132_, v_b_5133_);
return v___x_5134_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18___boxed(lean_object* v___x_5135_, lean_object* v_00_u03b2_5136_, lean_object* v_m_5137_, lean_object* v_a_5138_, lean_object* v_b_5139_){
_start:
{
lean_object* v_res_5140_; 
v_res_5140_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18(v___x_5135_, v_00_u03b2_5136_, v_m_5137_, v_a_5138_, v_b_5139_);
lean_dec(v___x_5135_);
return v_res_5140_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__19(lean_object* v_00_u03b2_5141_, lean_object* v_n_5142_, lean_object* v_k_5143_, lean_object* v_v_5144_){
_start:
{
lean_object* v___x_5145_; 
v___x_5145_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__19___redArg(v_n_5142_, v_k_5143_, v_v_5144_);
return v___x_5145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__20(lean_object* v_00_u03b2_5146_, size_t v_depth_5147_, lean_object* v_keys_5148_, lean_object* v_vals_5149_, lean_object* v_heq_5150_, lean_object* v_i_5151_, lean_object* v_entries_5152_){
_start:
{
lean_object* v___x_5153_; 
v___x_5153_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__20___redArg(v_depth_5147_, v_keys_5148_, v_vals_5149_, v_i_5151_, v_entries_5152_);
return v___x_5153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__20___boxed(lean_object* v_00_u03b2_5154_, lean_object* v_depth_5155_, lean_object* v_keys_5156_, lean_object* v_vals_5157_, lean_object* v_heq_5158_, lean_object* v_i_5159_, lean_object* v_entries_5160_){
_start:
{
size_t v_depth_boxed_5161_; lean_object* v_res_5162_; 
v_depth_boxed_5161_ = lean_unbox_usize(v_depth_5155_);
lean_dec(v_depth_5155_);
v_res_5162_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__20(v_00_u03b2_5154_, v_depth_boxed_5161_, v_keys_5156_, v_vals_5157_, v_heq_5158_, v_i_5159_, v_entries_5160_);
lean_dec_ref(v_vals_5157_);
lean_dec_ref(v_keys_5156_);
return v_res_5162_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17_spec__24(lean_object* v___x_5163_, lean_object* v_00_u03b2_5164_, lean_object* v_a_5165_, lean_object* v_x_5166_){
_start:
{
uint8_t v___x_5167_; 
v___x_5167_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17_spec__24___redArg(v_a_5165_, v_x_5166_);
return v___x_5167_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17_spec__24___boxed(lean_object* v___x_5168_, lean_object* v_00_u03b2_5169_, lean_object* v_a_5170_, lean_object* v_x_5171_){
_start:
{
uint8_t v_res_5172_; lean_object* v_r_5173_; 
v_res_5172_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__17_spec__24(v___x_5168_, v_00_u03b2_5169_, v_a_5170_, v_x_5171_);
lean_dec(v_x_5171_);
lean_dec(v_a_5170_);
lean_dec(v___x_5168_);
v_r_5173_ = lean_box(v_res_5172_);
return v_r_5173_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26(lean_object* v___x_5174_, lean_object* v_00_u03b2_5175_, lean_object* v_data_5176_){
_start:
{
lean_object* v___x_5177_; 
v___x_5177_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26___redArg(v___x_5174_, v_data_5176_);
return v___x_5177_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26___boxed(lean_object* v___x_5178_, lean_object* v_00_u03b2_5179_, lean_object* v_data_5180_){
_start:
{
lean_object* v_res_5181_; 
v_res_5181_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26(v___x_5178_, v_00_u03b2_5179_, v_data_5180_);
lean_dec(v___x_5178_);
return v_res_5181_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__19_spec__24(lean_object* v_00_u03b2_5182_, lean_object* v_x_5183_, lean_object* v_x_5184_, lean_object* v_x_5185_, lean_object* v_x_5186_){
_start:
{
lean_object* v___x_5187_; 
v___x_5187_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5_spec__7_spec__19_spec__24___redArg(v_x_5183_, v_x_5184_, v_x_5185_, v_x_5186_);
return v___x_5187_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26_spec__30(lean_object* v___x_5188_, lean_object* v_00_u03b2_5189_, lean_object* v_i_5190_, lean_object* v_source_5191_, lean_object* v_target_5192_){
_start:
{
lean_object* v___x_5193_; 
v___x_5193_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26_spec__30___redArg(v_i_5190_, v_source_5191_, v_target_5192_);
return v___x_5193_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26_spec__30___boxed(lean_object* v___x_5194_, lean_object* v_00_u03b2_5195_, lean_object* v_i_5196_, lean_object* v_source_5197_, lean_object* v_target_5198_){
_start:
{
lean_object* v_res_5199_; 
v_res_5199_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26_spec__30(v___x_5194_, v_00_u03b2_5195_, v_i_5196_, v_source_5197_, v_target_5198_);
lean_dec(v___x_5194_);
return v_res_5199_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26_spec__30_spec__31(lean_object* v_00_u03b2_5200_, lean_object* v_x_5201_, lean_object* v_x_5202_){
_start:
{
lean_object* v___x_5203_; 
v___x_5203_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_Sat_AIG_toGraphviz_go___at___00Std_Sat_AIG_toGraphviz___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__7_spec__15_spec__18_spec__26_spec__30_spec__31___redArg(v_x_5201_, v_x_5202_);
return v___x_5203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__1___redArg(lean_object* v___y_5204_){
_start:
{
lean_object* v___x_5206_; lean_object* v_traceState_5207_; lean_object* v_traces_5208_; lean_object* v___x_5209_; lean_object* v_traceState_5210_; lean_object* v_env_5211_; lean_object* v_nextMacroScope_5212_; lean_object* v_ngen_5213_; lean_object* v_auxDeclNGen_5214_; lean_object* v_cache_5215_; lean_object* v_recordedDeps_5216_; lean_object* v_messages_5217_; lean_object* v_infoState_5218_; lean_object* v_snapshotTasks_5219_; lean_object* v___x_5221_; uint8_t v_isShared_5222_; uint8_t v_isSharedCheck_5240_; 
v___x_5206_ = lean_st_ref_get(v___y_5204_);
v_traceState_5207_ = lean_ctor_get(v___x_5206_, 4);
lean_inc_ref(v_traceState_5207_);
lean_dec(v___x_5206_);
v_traces_5208_ = lean_ctor_get(v_traceState_5207_, 0);
lean_inc_ref(v_traces_5208_);
lean_dec_ref(v_traceState_5207_);
v___x_5209_ = lean_st_ref_take(v___y_5204_);
v_traceState_5210_ = lean_ctor_get(v___x_5209_, 4);
v_env_5211_ = lean_ctor_get(v___x_5209_, 0);
v_nextMacroScope_5212_ = lean_ctor_get(v___x_5209_, 1);
v_ngen_5213_ = lean_ctor_get(v___x_5209_, 2);
v_auxDeclNGen_5214_ = lean_ctor_get(v___x_5209_, 3);
v_cache_5215_ = lean_ctor_get(v___x_5209_, 5);
v_recordedDeps_5216_ = lean_ctor_get(v___x_5209_, 6);
v_messages_5217_ = lean_ctor_get(v___x_5209_, 7);
v_infoState_5218_ = lean_ctor_get(v___x_5209_, 8);
v_snapshotTasks_5219_ = lean_ctor_get(v___x_5209_, 9);
v_isSharedCheck_5240_ = !lean_is_exclusive(v___x_5209_);
if (v_isSharedCheck_5240_ == 0)
{
v___x_5221_ = v___x_5209_;
v_isShared_5222_ = v_isSharedCheck_5240_;
goto v_resetjp_5220_;
}
else
{
lean_inc(v_snapshotTasks_5219_);
lean_inc(v_infoState_5218_);
lean_inc(v_messages_5217_);
lean_inc(v_recordedDeps_5216_);
lean_inc(v_cache_5215_);
lean_inc(v_traceState_5210_);
lean_inc(v_auxDeclNGen_5214_);
lean_inc(v_ngen_5213_);
lean_inc(v_nextMacroScope_5212_);
lean_inc(v_env_5211_);
lean_dec(v___x_5209_);
v___x_5221_ = lean_box(0);
v_isShared_5222_ = v_isSharedCheck_5240_;
goto v_resetjp_5220_;
}
v_resetjp_5220_:
{
uint64_t v_tid_5223_; lean_object* v___x_5225_; uint8_t v_isShared_5226_; uint8_t v_isSharedCheck_5238_; 
v_tid_5223_ = lean_ctor_get_uint64(v_traceState_5210_, sizeof(void*)*1);
v_isSharedCheck_5238_ = !lean_is_exclusive(v_traceState_5210_);
if (v_isSharedCheck_5238_ == 0)
{
lean_object* v_unused_5239_; 
v_unused_5239_ = lean_ctor_get(v_traceState_5210_, 0);
lean_dec(v_unused_5239_);
v___x_5225_ = v_traceState_5210_;
v_isShared_5226_ = v_isSharedCheck_5238_;
goto v_resetjp_5224_;
}
else
{
lean_dec(v_traceState_5210_);
v___x_5225_ = lean_box(0);
v_isShared_5226_ = v_isSharedCheck_5238_;
goto v_resetjp_5224_;
}
v_resetjp_5224_:
{
lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5231_; 
v___x_5227_ = lean_unsigned_to_nat(32u);
v___x_5228_ = lean_mk_empty_array_with_capacity(v___x_5227_);
lean_dec_ref(v___x_5228_);
v___x_5229_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__0___redArg___closed__1);
if (v_isShared_5226_ == 0)
{
lean_ctor_set(v___x_5225_, 0, v___x_5229_);
v___x_5231_ = v___x_5225_;
goto v_reusejp_5230_;
}
else
{
lean_object* v_reuseFailAlloc_5237_; 
v_reuseFailAlloc_5237_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_5237_, 0, v___x_5229_);
lean_ctor_set_uint64(v_reuseFailAlloc_5237_, sizeof(void*)*1, v_tid_5223_);
v___x_5231_ = v_reuseFailAlloc_5237_;
goto v_reusejp_5230_;
}
v_reusejp_5230_:
{
lean_object* v___x_5233_; 
if (v_isShared_5222_ == 0)
{
lean_ctor_set(v___x_5221_, 4, v___x_5231_);
v___x_5233_ = v___x_5221_;
goto v_reusejp_5232_;
}
else
{
lean_object* v_reuseFailAlloc_5236_; 
v_reuseFailAlloc_5236_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5236_, 0, v_env_5211_);
lean_ctor_set(v_reuseFailAlloc_5236_, 1, v_nextMacroScope_5212_);
lean_ctor_set(v_reuseFailAlloc_5236_, 2, v_ngen_5213_);
lean_ctor_set(v_reuseFailAlloc_5236_, 3, v_auxDeclNGen_5214_);
lean_ctor_set(v_reuseFailAlloc_5236_, 4, v___x_5231_);
lean_ctor_set(v_reuseFailAlloc_5236_, 5, v_cache_5215_);
lean_ctor_set(v_reuseFailAlloc_5236_, 6, v_recordedDeps_5216_);
lean_ctor_set(v_reuseFailAlloc_5236_, 7, v_messages_5217_);
lean_ctor_set(v_reuseFailAlloc_5236_, 8, v_infoState_5218_);
lean_ctor_set(v_reuseFailAlloc_5236_, 9, v_snapshotTasks_5219_);
v___x_5233_ = v_reuseFailAlloc_5236_;
goto v_reusejp_5232_;
}
v_reusejp_5232_:
{
lean_object* v___x_5234_; lean_object* v___x_5235_; 
v___x_5234_ = lean_st_ref_put(v___y_5204_, v___x_5233_);
v___x_5235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5235_, 0, v_traces_5208_);
return v___x_5235_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__1___redArg___boxed(lean_object* v___y_5241_, lean_object* v___y_5242_){
_start:
{
lean_object* v_res_5243_; 
v_res_5243_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__1___redArg(v___y_5241_);
lean_dec(v___y_5241_);
return v_res_5243_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__1(lean_object* v___y_5244_, lean_object* v___y_5245_, lean_object* v___y_5246_, lean_object* v___y_5247_, lean_object* v___y_5248_, lean_object* v___y_5249_, lean_object* v___y_5250_, lean_object* v___y_5251_, lean_object* v___y_5252_, lean_object* v___y_5253_, lean_object* v___y_5254_){
_start:
{
lean_object* v___x_5256_; 
v___x_5256_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__1___redArg(v___y_5254_);
return v___x_5256_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__1___boxed(lean_object* v___y_5257_, lean_object* v___y_5258_, lean_object* v___y_5259_, lean_object* v___y_5260_, lean_object* v___y_5261_, lean_object* v___y_5262_, lean_object* v___y_5263_, lean_object* v___y_5264_, lean_object* v___y_5265_, lean_object* v___y_5266_, lean_object* v___y_5267_, lean_object* v___y_5268_){
_start:
{
lean_object* v_res_5269_; 
v_res_5269_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__1(v___y_5257_, v___y_5258_, v___y_5259_, v___y_5260_, v___y_5261_, v___y_5262_, v___y_5263_, v___y_5264_, v___y_5265_, v___y_5266_, v___y_5267_);
lean_dec(v___y_5267_);
lean_dec_ref(v___y_5266_);
lean_dec(v___y_5265_);
lean_dec_ref(v___y_5264_);
lean_dec(v___y_5263_);
lean_dec_ref(v___y_5262_);
lean_dec(v___y_5261_);
lean_dec_ref(v___y_5260_);
lean_dec(v___y_5259_);
lean_dec(v___y_5258_);
lean_dec_ref(v___y_5257_);
return v_res_5269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___lam__0(lean_object* v_x_5270_, lean_object* v___y_5271_, lean_object* v___y_5272_, lean_object* v___y_5273_, lean_object* v___y_5274_, lean_object* v___y_5275_, lean_object* v___y_5276_, lean_object* v___y_5277_, lean_object* v___y_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_){
_start:
{
lean_object* v___x_5283_; lean_object* v___x_5284_; 
v___x_5283_ = lean_obj_once(&l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___closed__2, &l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___closed__2_once, _init_l_Lean_Meta_Tactic_BVDecide_lratBitblaster___lam__12___closed__2);
v___x_5284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5284_, 0, v___x_5283_);
return v___x_5284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___lam__0___boxed(lean_object* v_x_5285_, lean_object* v___y_5286_, lean_object* v___y_5287_, lean_object* v___y_5288_, lean_object* v___y_5289_, lean_object* v___y_5290_, lean_object* v___y_5291_, lean_object* v___y_5292_, lean_object* v___y_5293_, lean_object* v___y_5294_, lean_object* v___y_5295_, lean_object* v___y_5296_, lean_object* v___y_5297_){
_start:
{
lean_object* v_res_5298_; 
v_res_5298_ = l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___lam__0(v_x_5285_, v___y_5286_, v___y_5287_, v___y_5288_, v___y_5289_, v___y_5290_, v___y_5291_, v___y_5292_, v___y_5293_, v___y_5294_, v___y_5295_, v___y_5296_);
lean_dec(v___y_5296_);
lean_dec_ref(v___y_5295_);
lean_dec(v___y_5294_);
lean_dec_ref(v___y_5293_);
lean_dec(v___y_5292_);
lean_dec_ref(v___y_5291_);
lean_dec(v___y_5290_);
lean_dec_ref(v___y_5289_);
lean_dec(v___y_5288_);
lean_dec(v___y_5287_);
lean_dec_ref(v___y_5286_);
lean_dec_ref(v_x_5285_);
return v_res_5298_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__4(lean_object* v_e_5299_){
_start:
{
if (lean_obj_tag(v_e_5299_) == 0)
{
uint8_t v___x_5300_; 
v___x_5300_ = 2;
return v___x_5300_;
}
else
{
uint8_t v___x_5301_; 
v___x_5301_ = 0;
return v___x_5301_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__4___boxed(lean_object* v_e_5302_){
_start:
{
uint8_t v_res_5303_; lean_object* v_r_5304_; 
v_res_5303_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__4(v_e_5302_);
lean_dec_ref(v_e_5302_);
v_r_5304_ = lean_box(v_res_5303_);
return v_r_5304_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__2___redArg(lean_object* v_oldTraces_5305_, lean_object* v_data_5306_, lean_object* v_ref_5307_, lean_object* v_msg_5308_, lean_object* v___y_5309_, lean_object* v___y_5310_, lean_object* v___y_5311_, lean_object* v___y_5312_){
_start:
{
lean_object* v_toCold_5314_; lean_object* v_currRecDepth_5315_; lean_object* v_ref_5316_; uint16_t v_optionFlags_5317_; uint8_t v_suppressElabErrors_5318_; uint8_t v_checkDeprecated_5319_; uint8_t v_isRecordingDeps_5320_; lean_object* v_ref_5321_; lean_object* v___x_5322_; lean_object* v___x_5323_; lean_object* v_traceState_5324_; lean_object* v_traces_5325_; lean_object* v___x_5326_; size_t v_sz_5327_; size_t v___x_5328_; lean_object* v___x_5329_; lean_object* v_msg_5330_; lean_object* v___x_5331_; lean_object* v_a_5332_; lean_object* v___x_5334_; uint8_t v_isShared_5335_; uint8_t v_isSharedCheck_5370_; 
v_toCold_5314_ = lean_ctor_get(v___y_5311_, 0);
v_currRecDepth_5315_ = lean_ctor_get(v___y_5311_, 1);
v_ref_5316_ = lean_ctor_get(v___y_5311_, 2);
v_optionFlags_5317_ = lean_ctor_get_uint16(v___y_5311_, sizeof(void*)*3);
v_suppressElabErrors_5318_ = lean_ctor_get_uint8(v___y_5311_, sizeof(void*)*3 + 2);
v_checkDeprecated_5319_ = lean_ctor_get_uint8(v___y_5311_, sizeof(void*)*3 + 3);
v_isRecordingDeps_5320_ = lean_ctor_get_uint8(v___y_5311_, sizeof(void*)*3 + 4);
v_ref_5321_ = l_Lean_replaceRef(v_ref_5307_, v_ref_5316_);
lean_inc(v_currRecDepth_5315_);
lean_inc_ref(v_toCold_5314_);
v___x_5322_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_5322_, 0, v_toCold_5314_);
lean_ctor_set(v___x_5322_, 1, v_currRecDepth_5315_);
lean_ctor_set(v___x_5322_, 2, v_ref_5321_);
lean_ctor_set_uint16(v___x_5322_, sizeof(void*)*3, v_optionFlags_5317_);
lean_ctor_set_uint8(v___x_5322_, sizeof(void*)*3 + 2, v_suppressElabErrors_5318_);
lean_ctor_set_uint8(v___x_5322_, sizeof(void*)*3 + 3, v_checkDeprecated_5319_);
lean_ctor_set_uint8(v___x_5322_, sizeof(void*)*3 + 4, v_isRecordingDeps_5320_);
v___x_5323_ = lean_st_ref_get(v___y_5312_);
v_traceState_5324_ = lean_ctor_get(v___x_5323_, 4);
lean_inc_ref(v_traceState_5324_);
lean_dec(v___x_5323_);
v_traces_5325_ = lean_ctor_get(v_traceState_5324_, 0);
lean_inc_ref(v_traces_5325_);
lean_dec_ref(v_traceState_5324_);
v___x_5326_ = l_Lean_PersistentArray_toArray___redArg(v_traces_5325_);
lean_dec_ref(v_traces_5325_);
v_sz_5327_ = lean_array_size(v___x_5326_);
v___x_5328_ = ((size_t)0ULL);
v___x_5329_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__2_spec__2_spec__3(v_sz_5327_, v___x_5328_, v___x_5326_);
v_msg_5330_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_5330_, 0, v_data_5306_);
lean_ctor_set(v_msg_5330_, 1, v_msg_5308_);
lean_ctor_set(v_msg_5330_, 2, v___x_5329_);
v___x_5331_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__3_spec__6(v_msg_5330_, v___y_5309_, v___y_5310_, v___x_5322_, v___y_5312_);
lean_dec_ref_known(v___x_5322_, 3);
v_a_5332_ = lean_ctor_get(v___x_5331_, 0);
v_isSharedCheck_5370_ = !lean_is_exclusive(v___x_5331_);
if (v_isSharedCheck_5370_ == 0)
{
v___x_5334_ = v___x_5331_;
v_isShared_5335_ = v_isSharedCheck_5370_;
goto v_resetjp_5333_;
}
else
{
lean_inc(v_a_5332_);
lean_dec(v___x_5331_);
v___x_5334_ = lean_box(0);
v_isShared_5335_ = v_isSharedCheck_5370_;
goto v_resetjp_5333_;
}
v_resetjp_5333_:
{
lean_object* v___x_5336_; lean_object* v_traceState_5337_; lean_object* v_env_5338_; lean_object* v_nextMacroScope_5339_; lean_object* v_ngen_5340_; lean_object* v_auxDeclNGen_5341_; lean_object* v_cache_5342_; lean_object* v_recordedDeps_5343_; lean_object* v_messages_5344_; lean_object* v_infoState_5345_; lean_object* v_snapshotTasks_5346_; lean_object* v___x_5348_; uint8_t v_isShared_5349_; uint8_t v_isSharedCheck_5369_; 
v___x_5336_ = lean_st_ref_take(v___y_5312_);
v_traceState_5337_ = lean_ctor_get(v___x_5336_, 4);
v_env_5338_ = lean_ctor_get(v___x_5336_, 0);
v_nextMacroScope_5339_ = lean_ctor_get(v___x_5336_, 1);
v_ngen_5340_ = lean_ctor_get(v___x_5336_, 2);
v_auxDeclNGen_5341_ = lean_ctor_get(v___x_5336_, 3);
v_cache_5342_ = lean_ctor_get(v___x_5336_, 5);
v_recordedDeps_5343_ = lean_ctor_get(v___x_5336_, 6);
v_messages_5344_ = lean_ctor_get(v___x_5336_, 7);
v_infoState_5345_ = lean_ctor_get(v___x_5336_, 8);
v_snapshotTasks_5346_ = lean_ctor_get(v___x_5336_, 9);
v_isSharedCheck_5369_ = !lean_is_exclusive(v___x_5336_);
if (v_isSharedCheck_5369_ == 0)
{
v___x_5348_ = v___x_5336_;
v_isShared_5349_ = v_isSharedCheck_5369_;
goto v_resetjp_5347_;
}
else
{
lean_inc(v_snapshotTasks_5346_);
lean_inc(v_infoState_5345_);
lean_inc(v_messages_5344_);
lean_inc(v_recordedDeps_5343_);
lean_inc(v_cache_5342_);
lean_inc(v_traceState_5337_);
lean_inc(v_auxDeclNGen_5341_);
lean_inc(v_ngen_5340_);
lean_inc(v_nextMacroScope_5339_);
lean_inc(v_env_5338_);
lean_dec(v___x_5336_);
v___x_5348_ = lean_box(0);
v_isShared_5349_ = v_isSharedCheck_5369_;
goto v_resetjp_5347_;
}
v_resetjp_5347_:
{
uint64_t v_tid_5350_; lean_object* v___x_5352_; uint8_t v_isShared_5353_; uint8_t v_isSharedCheck_5367_; 
v_tid_5350_ = lean_ctor_get_uint64(v_traceState_5337_, sizeof(void*)*1);
v_isSharedCheck_5367_ = !lean_is_exclusive(v_traceState_5337_);
if (v_isSharedCheck_5367_ == 0)
{
lean_object* v_unused_5368_; 
v_unused_5368_ = lean_ctor_get(v_traceState_5337_, 0);
lean_dec(v_unused_5368_);
v___x_5352_ = v_traceState_5337_;
v_isShared_5353_ = v_isSharedCheck_5367_;
goto v_resetjp_5351_;
}
else
{
lean_dec(v_traceState_5337_);
v___x_5352_ = lean_box(0);
v_isShared_5353_ = v_isSharedCheck_5367_;
goto v_resetjp_5351_;
}
v_resetjp_5351_:
{
lean_object* v___x_5354_; lean_object* v___x_5355_; lean_object* v___x_5356_; lean_object* v___x_5358_; 
v___x_5354_ = lean_box(0);
v___x_5355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5355_, 0, v_ref_5307_);
lean_ctor_set(v___x_5355_, 1, v_a_5332_);
v___x_5356_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_5305_, v___x_5355_);
if (v_isShared_5353_ == 0)
{
lean_ctor_set(v___x_5352_, 0, v___x_5356_);
v___x_5358_ = v___x_5352_;
goto v_reusejp_5357_;
}
else
{
lean_object* v_reuseFailAlloc_5366_; 
v_reuseFailAlloc_5366_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_5366_, 0, v___x_5356_);
lean_ctor_set_uint64(v_reuseFailAlloc_5366_, sizeof(void*)*1, v_tid_5350_);
v___x_5358_ = v_reuseFailAlloc_5366_;
goto v_reusejp_5357_;
}
v_reusejp_5357_:
{
lean_object* v___x_5360_; 
if (v_isShared_5349_ == 0)
{
lean_ctor_set(v___x_5348_, 4, v___x_5358_);
v___x_5360_ = v___x_5348_;
goto v_reusejp_5359_;
}
else
{
lean_object* v_reuseFailAlloc_5365_; 
v_reuseFailAlloc_5365_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5365_, 0, v_env_5338_);
lean_ctor_set(v_reuseFailAlloc_5365_, 1, v_nextMacroScope_5339_);
lean_ctor_set(v_reuseFailAlloc_5365_, 2, v_ngen_5340_);
lean_ctor_set(v_reuseFailAlloc_5365_, 3, v_auxDeclNGen_5341_);
lean_ctor_set(v_reuseFailAlloc_5365_, 4, v___x_5358_);
lean_ctor_set(v_reuseFailAlloc_5365_, 5, v_cache_5342_);
lean_ctor_set(v_reuseFailAlloc_5365_, 6, v_recordedDeps_5343_);
lean_ctor_set(v_reuseFailAlloc_5365_, 7, v_messages_5344_);
lean_ctor_set(v_reuseFailAlloc_5365_, 8, v_infoState_5345_);
lean_ctor_set(v_reuseFailAlloc_5365_, 9, v_snapshotTasks_5346_);
v___x_5360_ = v_reuseFailAlloc_5365_;
goto v_reusejp_5359_;
}
v_reusejp_5359_:
{
lean_object* v___x_5361_; lean_object* v___x_5363_; 
v___x_5361_ = lean_st_ref_put(v___y_5312_, v___x_5360_);
if (v_isShared_5335_ == 0)
{
lean_ctor_set(v___x_5334_, 0, v___x_5354_);
v___x_5363_ = v___x_5334_;
goto v_reusejp_5362_;
}
else
{
lean_object* v_reuseFailAlloc_5364_; 
v_reuseFailAlloc_5364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5364_, 0, v___x_5354_);
v___x_5363_ = v_reuseFailAlloc_5364_;
goto v_reusejp_5362_;
}
v_reusejp_5362_:
{
return v___x_5363_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__2___redArg___boxed(lean_object* v_oldTraces_5371_, lean_object* v_data_5372_, lean_object* v_ref_5373_, lean_object* v_msg_5374_, lean_object* v___y_5375_, lean_object* v___y_5376_, lean_object* v___y_5377_, lean_object* v___y_5378_, lean_object* v___y_5379_){
_start:
{
lean_object* v_res_5380_; 
v_res_5380_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__2___redArg(v_oldTraces_5371_, v_data_5372_, v_ref_5373_, v_msg_5374_, v___y_5375_, v___y_5376_, v___y_5377_, v___y_5378_);
lean_dec(v___y_5378_);
lean_dec_ref(v___y_5377_);
lean_dec(v___y_5376_);
lean_dec_ref(v___y_5375_);
return v_res_5380_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__3___redArg(lean_object* v_x_5381_){
_start:
{
if (lean_obj_tag(v_x_5381_) == 0)
{
lean_object* v_a_5383_; lean_object* v___x_5385_; uint8_t v_isShared_5386_; uint8_t v_isSharedCheck_5390_; 
v_a_5383_ = lean_ctor_get(v_x_5381_, 0);
v_isSharedCheck_5390_ = !lean_is_exclusive(v_x_5381_);
if (v_isSharedCheck_5390_ == 0)
{
v___x_5385_ = v_x_5381_;
v_isShared_5386_ = v_isSharedCheck_5390_;
goto v_resetjp_5384_;
}
else
{
lean_inc(v_a_5383_);
lean_dec(v_x_5381_);
v___x_5385_ = lean_box(0);
v_isShared_5386_ = v_isSharedCheck_5390_;
goto v_resetjp_5384_;
}
v_resetjp_5384_:
{
lean_object* v___x_5388_; 
if (v_isShared_5386_ == 0)
{
lean_ctor_set_tag(v___x_5385_, 1);
v___x_5388_ = v___x_5385_;
goto v_reusejp_5387_;
}
else
{
lean_object* v_reuseFailAlloc_5389_; 
v_reuseFailAlloc_5389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5389_, 0, v_a_5383_);
v___x_5388_ = v_reuseFailAlloc_5389_;
goto v_reusejp_5387_;
}
v_reusejp_5387_:
{
return v___x_5388_;
}
}
}
else
{
lean_object* v_a_5391_; lean_object* v___x_5393_; uint8_t v_isShared_5394_; uint8_t v_isSharedCheck_5398_; 
v_a_5391_ = lean_ctor_get(v_x_5381_, 0);
v_isSharedCheck_5398_ = !lean_is_exclusive(v_x_5381_);
if (v_isSharedCheck_5398_ == 0)
{
v___x_5393_ = v_x_5381_;
v_isShared_5394_ = v_isSharedCheck_5398_;
goto v_resetjp_5392_;
}
else
{
lean_inc(v_a_5391_);
lean_dec(v_x_5381_);
v___x_5393_ = lean_box(0);
v_isShared_5394_ = v_isSharedCheck_5398_;
goto v_resetjp_5392_;
}
v_resetjp_5392_:
{
lean_object* v___x_5396_; 
if (v_isShared_5394_ == 0)
{
lean_ctor_set_tag(v___x_5393_, 0);
v___x_5396_ = v___x_5393_;
goto v_reusejp_5395_;
}
else
{
lean_object* v_reuseFailAlloc_5397_; 
v_reuseFailAlloc_5397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5397_, 0, v_a_5391_);
v___x_5396_ = v_reuseFailAlloc_5397_;
goto v_reusejp_5395_;
}
v_reusejp_5395_:
{
return v___x_5396_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__3___redArg___boxed(lean_object* v_x_5399_, lean_object* v___y_5400_){
_start:
{
lean_object* v_res_5401_; 
v_res_5401_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__3___redArg(v_x_5399_);
return v_res_5401_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2(lean_object* v_cls_5402_, uint8_t v_collapsed_5403_, lean_object* v_tag_5404_, lean_object* v_opts_5405_, uint8_t v_clsEnabled_5406_, lean_object* v_oldTraces_5407_, lean_object* v_msg_5408_, lean_object* v_resStartStop_5409_, lean_object* v___y_5410_, lean_object* v___y_5411_, lean_object* v___y_5412_, lean_object* v___y_5413_, lean_object* v___y_5414_, lean_object* v___y_5415_, lean_object* v___y_5416_, lean_object* v___y_5417_, lean_object* v___y_5418_, lean_object* v___y_5419_, lean_object* v___y_5420_){
_start:
{
lean_object* v_fst_5422_; lean_object* v_snd_5423_; lean_object* v___y_5425_; lean_object* v___y_5426_; lean_object* v_data_5427_; lean_object* v_fst_5438_; lean_object* v_snd_5439_; lean_object* v___x_5440_; uint8_t v___x_5441_; lean_object* v___y_5443_; lean_object* v_a_5444_; uint8_t v___y_5459_; double v___y_5491_; 
v_fst_5422_ = lean_ctor_get(v_resStartStop_5409_, 0);
lean_inc(v_fst_5422_);
v_snd_5423_ = lean_ctor_get(v_resStartStop_5409_, 1);
lean_inc(v_snd_5423_);
lean_dec_ref(v_resStartStop_5409_);
v_fst_5438_ = lean_ctor_get(v_snd_5423_, 0);
lean_inc(v_fst_5438_);
v_snd_5439_ = lean_ctor_get(v_snd_5423_, 1);
lean_inc(v_snd_5439_);
lean_dec(v_snd_5423_);
v___x_5440_ = l_Lean_trace_profiler;
v___x_5441_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_opts_5405_, v___x_5440_);
if (v___x_5441_ == 0)
{
v___y_5459_ = v___x_5441_;
goto v___jp_5458_;
}
else
{
lean_object* v___x_5496_; uint8_t v___x_5497_; 
v___x_5496_ = l_Lean_trace_profiler_useHeartbeats;
v___x_5497_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_opts_5405_, v___x_5496_);
if (v___x_5497_ == 0)
{
lean_object* v___x_5498_; lean_object* v___x_5499_; double v___x_5500_; double v___x_5501_; double v___x_5502_; 
v___x_5498_ = l_Lean_trace_profiler_threshold;
v___x_5499_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v_opts_5405_, v___x_5498_);
v___x_5500_ = lean_float_of_nat(v___x_5499_);
v___x_5501_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__3);
v___x_5502_ = lean_float_div(v___x_5500_, v___x_5501_);
v___y_5491_ = v___x_5502_;
goto v___jp_5490_;
}
else
{
lean_object* v___x_5503_; lean_object* v___x_5504_; double v___x_5505_; 
v___x_5503_ = l_Lean_trace_profiler_threshold;
v___x_5504_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_mkAuxDecl_spec__0(v_opts_5405_, v___x_5503_);
v___x_5505_ = lean_float_of_nat(v___x_5504_);
v___y_5491_ = v___x_5505_;
goto v___jp_5490_;
}
}
v___jp_5424_:
{
lean_object* v___x_5428_; 
lean_inc(v___y_5426_);
v___x_5428_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__2___redArg(v_oldTraces_5407_, v_data_5427_, v___y_5426_, v___y_5425_, v___y_5417_, v___y_5418_, v___y_5419_, v___y_5420_);
if (lean_obj_tag(v___x_5428_) == 0)
{
lean_object* v___x_5429_; 
lean_dec_ref_known(v___x_5428_, 1);
v___x_5429_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__3___redArg(v_fst_5422_);
return v___x_5429_;
}
else
{
lean_object* v_a_5430_; lean_object* v___x_5432_; uint8_t v_isShared_5433_; uint8_t v_isSharedCheck_5437_; 
lean_dec(v_fst_5422_);
v_a_5430_ = lean_ctor_get(v___x_5428_, 0);
v_isSharedCheck_5437_ = !lean_is_exclusive(v___x_5428_);
if (v_isSharedCheck_5437_ == 0)
{
v___x_5432_ = v___x_5428_;
v_isShared_5433_ = v_isSharedCheck_5437_;
goto v_resetjp_5431_;
}
else
{
lean_inc(v_a_5430_);
lean_dec(v___x_5428_);
v___x_5432_ = lean_box(0);
v_isShared_5433_ = v_isSharedCheck_5437_;
goto v_resetjp_5431_;
}
v_resetjp_5431_:
{
lean_object* v___x_5435_; 
if (v_isShared_5433_ == 0)
{
v___x_5435_ = v___x_5432_;
goto v_reusejp_5434_;
}
else
{
lean_object* v_reuseFailAlloc_5436_; 
v_reuseFailAlloc_5436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5436_, 0, v_a_5430_);
v___x_5435_ = v_reuseFailAlloc_5436_;
goto v_reusejp_5434_;
}
v_reusejp_5434_:
{
return v___x_5435_;
}
}
}
}
v___jp_5442_:
{
uint8_t v_result_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; double v___x_5448_; lean_object* v_data_5449_; 
v_result_5445_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__4(v_fst_5422_);
v___x_5446_ = lean_box(v_result_5445_);
v___x_5447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5447_, 0, v___x_5446_);
v___x_5448_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__0);
lean_inc_ref(v_tag_5404_);
lean_inc_ref(v___x_5447_);
lean_inc(v_cls_5402_);
v_data_5449_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_5449_, 0, v_cls_5402_);
lean_ctor_set(v_data_5449_, 1, v___x_5447_);
lean_ctor_set(v_data_5449_, 2, v_tag_5404_);
lean_ctor_set_float(v_data_5449_, sizeof(void*)*3, v___x_5448_);
lean_ctor_set_float(v_data_5449_, sizeof(void*)*3 + 8, v___x_5448_);
lean_ctor_set_uint8(v_data_5449_, sizeof(void*)*3 + 16, v_collapsed_5403_);
if (v___x_5441_ == 0)
{
lean_dec_ref_known(v___x_5447_, 1);
lean_dec(v_snd_5439_);
lean_dec(v_fst_5438_);
lean_dec_ref(v_tag_5404_);
lean_dec(v_cls_5402_);
v___y_5425_ = v_a_5444_;
v___y_5426_ = v___y_5443_;
v_data_5427_ = v_data_5449_;
goto v___jp_5424_;
}
else
{
lean_object* v_data_5450_; double v___x_5451_; double v___x_5452_; 
lean_dec_ref_known(v_data_5449_, 3);
v_data_5450_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_5450_, 0, v_cls_5402_);
lean_ctor_set(v_data_5450_, 1, v___x_5447_);
lean_ctor_set(v_data_5450_, 2, v_tag_5404_);
v___x_5451_ = lean_unbox_float(v_fst_5438_);
lean_dec(v_fst_5438_);
lean_ctor_set_float(v_data_5450_, sizeof(void*)*3, v___x_5451_);
v___x_5452_ = lean_unbox_float(v_snd_5439_);
lean_dec(v_snd_5439_);
lean_ctor_set_float(v_data_5450_, sizeof(void*)*3 + 8, v___x_5452_);
lean_ctor_set_uint8(v_data_5450_, sizeof(void*)*3 + 16, v_collapsed_5403_);
v___y_5425_ = v_a_5444_;
v___y_5426_ = v___y_5443_;
v_data_5427_ = v_data_5450_;
goto v___jp_5424_;
}
}
v___jp_5453_:
{
lean_object* v_ref_5454_; lean_object* v___x_5455_; 
v_ref_5454_ = lean_ctor_get(v___y_5419_, 2);
lean_inc(v___y_5420_);
lean_inc_ref(v___y_5419_);
lean_inc(v___y_5418_);
lean_inc_ref(v___y_5417_);
lean_inc(v___y_5416_);
lean_inc_ref(v___y_5415_);
lean_inc(v___y_5414_);
lean_inc_ref(v___y_5413_);
lean_inc(v___y_5412_);
lean_inc(v___y_5411_);
lean_inc_ref(v___y_5410_);
lean_inc(v_fst_5422_);
v___x_5455_ = lean_apply_13(v_msg_5408_, v_fst_5422_, v___y_5410_, v___y_5411_, v___y_5412_, v___y_5413_, v___y_5414_, v___y_5415_, v___y_5416_, v___y_5417_, v___y_5418_, v___y_5419_, v___y_5420_, lean_box(0));
if (lean_obj_tag(v___x_5455_) == 0)
{
lean_object* v_a_5456_; 
v_a_5456_ = lean_ctor_get(v___x_5455_, 0);
lean_inc(v_a_5456_);
lean_dec_ref_known(v___x_5455_, 1);
v___y_5443_ = v_ref_5454_;
v_a_5444_ = v_a_5456_;
goto v___jp_5442_;
}
else
{
lean_object* v___x_5457_; 
lean_dec_ref_known(v___x_5455_, 1);
v___x_5457_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__4___closed__2);
v___y_5443_ = v_ref_5454_;
v_a_5444_ = v___x_5457_;
goto v___jp_5442_;
}
}
v___jp_5458_:
{
if (v_clsEnabled_5406_ == 0)
{
if (v___y_5459_ == 0)
{
lean_object* v___x_5460_; lean_object* v_traceState_5461_; lean_object* v_env_5462_; lean_object* v_nextMacroScope_5463_; lean_object* v_ngen_5464_; lean_object* v_auxDeclNGen_5465_; lean_object* v_cache_5466_; lean_object* v_recordedDeps_5467_; lean_object* v_messages_5468_; lean_object* v_infoState_5469_; lean_object* v_snapshotTasks_5470_; lean_object* v___x_5472_; uint8_t v_isShared_5473_; uint8_t v_isSharedCheck_5489_; 
lean_dec(v_snd_5439_);
lean_dec(v_fst_5438_);
lean_dec_ref(v_msg_5408_);
lean_dec_ref(v_tag_5404_);
lean_dec(v_cls_5402_);
v___x_5460_ = lean_st_ref_take(v___y_5420_);
v_traceState_5461_ = lean_ctor_get(v___x_5460_, 4);
v_env_5462_ = lean_ctor_get(v___x_5460_, 0);
v_nextMacroScope_5463_ = lean_ctor_get(v___x_5460_, 1);
v_ngen_5464_ = lean_ctor_get(v___x_5460_, 2);
v_auxDeclNGen_5465_ = lean_ctor_get(v___x_5460_, 3);
v_cache_5466_ = lean_ctor_get(v___x_5460_, 5);
v_recordedDeps_5467_ = lean_ctor_get(v___x_5460_, 6);
v_messages_5468_ = lean_ctor_get(v___x_5460_, 7);
v_infoState_5469_ = lean_ctor_get(v___x_5460_, 8);
v_snapshotTasks_5470_ = lean_ctor_get(v___x_5460_, 9);
v_isSharedCheck_5489_ = !lean_is_exclusive(v___x_5460_);
if (v_isSharedCheck_5489_ == 0)
{
v___x_5472_ = v___x_5460_;
v_isShared_5473_ = v_isSharedCheck_5489_;
goto v_resetjp_5471_;
}
else
{
lean_inc(v_snapshotTasks_5470_);
lean_inc(v_infoState_5469_);
lean_inc(v_messages_5468_);
lean_inc(v_recordedDeps_5467_);
lean_inc(v_cache_5466_);
lean_inc(v_traceState_5461_);
lean_inc(v_auxDeclNGen_5465_);
lean_inc(v_ngen_5464_);
lean_inc(v_nextMacroScope_5463_);
lean_inc(v_env_5462_);
lean_dec(v___x_5460_);
v___x_5472_ = lean_box(0);
v_isShared_5473_ = v_isSharedCheck_5489_;
goto v_resetjp_5471_;
}
v_resetjp_5471_:
{
uint64_t v_tid_5474_; lean_object* v_traces_5475_; lean_object* v___x_5477_; uint8_t v_isShared_5478_; uint8_t v_isSharedCheck_5488_; 
v_tid_5474_ = lean_ctor_get_uint64(v_traceState_5461_, sizeof(void*)*1);
v_traces_5475_ = lean_ctor_get(v_traceState_5461_, 0);
v_isSharedCheck_5488_ = !lean_is_exclusive(v_traceState_5461_);
if (v_isSharedCheck_5488_ == 0)
{
v___x_5477_ = v_traceState_5461_;
v_isShared_5478_ = v_isSharedCheck_5488_;
goto v_resetjp_5476_;
}
else
{
lean_inc(v_traces_5475_);
lean_dec(v_traceState_5461_);
v___x_5477_ = lean_box(0);
v_isShared_5478_ = v_isSharedCheck_5488_;
goto v_resetjp_5476_;
}
v_resetjp_5476_:
{
lean_object* v___x_5479_; lean_object* v___x_5481_; 
v___x_5479_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_5407_, v_traces_5475_);
lean_dec_ref(v_traces_5475_);
if (v_isShared_5478_ == 0)
{
lean_ctor_set(v___x_5477_, 0, v___x_5479_);
v___x_5481_ = v___x_5477_;
goto v_reusejp_5480_;
}
else
{
lean_object* v_reuseFailAlloc_5487_; 
v_reuseFailAlloc_5487_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_5487_, 0, v___x_5479_);
lean_ctor_set_uint64(v_reuseFailAlloc_5487_, sizeof(void*)*1, v_tid_5474_);
v___x_5481_ = v_reuseFailAlloc_5487_;
goto v_reusejp_5480_;
}
v_reusejp_5480_:
{
lean_object* v___x_5483_; 
if (v_isShared_5473_ == 0)
{
lean_ctor_set(v___x_5472_, 4, v___x_5481_);
v___x_5483_ = v___x_5472_;
goto v_reusejp_5482_;
}
else
{
lean_object* v_reuseFailAlloc_5486_; 
v_reuseFailAlloc_5486_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5486_, 0, v_env_5462_);
lean_ctor_set(v_reuseFailAlloc_5486_, 1, v_nextMacroScope_5463_);
lean_ctor_set(v_reuseFailAlloc_5486_, 2, v_ngen_5464_);
lean_ctor_set(v_reuseFailAlloc_5486_, 3, v_auxDeclNGen_5465_);
lean_ctor_set(v_reuseFailAlloc_5486_, 4, v___x_5481_);
lean_ctor_set(v_reuseFailAlloc_5486_, 5, v_cache_5466_);
lean_ctor_set(v_reuseFailAlloc_5486_, 6, v_recordedDeps_5467_);
lean_ctor_set(v_reuseFailAlloc_5486_, 7, v_messages_5468_);
lean_ctor_set(v_reuseFailAlloc_5486_, 8, v_infoState_5469_);
lean_ctor_set(v_reuseFailAlloc_5486_, 9, v_snapshotTasks_5470_);
v___x_5483_ = v_reuseFailAlloc_5486_;
goto v_reusejp_5482_;
}
v_reusejp_5482_:
{
lean_object* v___x_5484_; lean_object* v___x_5485_; 
v___x_5484_ = lean_st_ref_put(v___y_5420_, v___x_5483_);
v___x_5485_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__3___redArg(v_fst_5422_);
return v___x_5485_;
}
}
}
}
}
else
{
goto v___jp_5453_;
}
}
else
{
goto v___jp_5453_;
}
}
v___jp_5490_:
{
double v___x_5492_; double v___x_5493_; double v___x_5494_; uint8_t v___x_5495_; 
v___x_5492_ = lean_unbox_float(v_snd_5439_);
v___x_5493_ = lean_unbox_float(v_fst_5438_);
v___x_5494_ = lean_float_sub(v___x_5492_, v___x_5493_);
v___x_5495_ = lean_float_decLt(v___y_5491_, v___x_5494_);
v___y_5459_ = v___x_5495_;
goto v___jp_5458_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2___boxed(lean_object** _args){
lean_object* v_cls_5506_ = _args[0];
lean_object* v_collapsed_5507_ = _args[1];
lean_object* v_tag_5508_ = _args[2];
lean_object* v_opts_5509_ = _args[3];
lean_object* v_clsEnabled_5510_ = _args[4];
lean_object* v_oldTraces_5511_ = _args[5];
lean_object* v_msg_5512_ = _args[6];
lean_object* v_resStartStop_5513_ = _args[7];
lean_object* v___y_5514_ = _args[8];
lean_object* v___y_5515_ = _args[9];
lean_object* v___y_5516_ = _args[10];
lean_object* v___y_5517_ = _args[11];
lean_object* v___y_5518_ = _args[12];
lean_object* v___y_5519_ = _args[13];
lean_object* v___y_5520_ = _args[14];
lean_object* v___y_5521_ = _args[15];
lean_object* v___y_5522_ = _args[16];
lean_object* v___y_5523_ = _args[17];
lean_object* v___y_5524_ = _args[18];
lean_object* v___y_5525_ = _args[19];
_start:
{
uint8_t v_collapsed_boxed_5526_; uint8_t v_clsEnabled_boxed_5527_; lean_object* v_res_5528_; 
v_collapsed_boxed_5526_ = lean_unbox(v_collapsed_5507_);
v_clsEnabled_boxed_5527_ = lean_unbox(v_clsEnabled_5510_);
v_res_5528_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2(v_cls_5506_, v_collapsed_boxed_5526_, v_tag_5508_, v_opts_5509_, v_clsEnabled_boxed_5527_, v_oldTraces_5511_, v_msg_5512_, v_resStartStop_5513_, v___y_5514_, v___y_5515_, v___y_5516_, v___y_5517_, v___y_5518_, v___y_5519_, v___y_5520_, v___y_5521_, v___y_5522_, v___y_5523_, v___y_5524_);
lean_dec(v___y_5524_);
lean_dec_ref(v___y_5523_);
lean_dec(v___y_5522_);
lean_dec_ref(v___y_5521_);
lean_dec(v___y_5520_);
lean_dec_ref(v___y_5519_);
lean_dec(v___y_5518_);
lean_dec_ref(v___y_5517_);
lean_dec(v___y_5516_);
lean_dec(v___y_5515_);
lean_dec_ref(v___y_5514_);
lean_dec_ref(v_opts_5509_);
return v_res_5528_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0___redArg(lean_object* v_mvarId_5529_, lean_object* v_val_5530_, lean_object* v___y_5531_){
_start:
{
lean_object* v___x_5533_; lean_object* v_mctx_5534_; lean_object* v_cache_5535_; lean_object* v_zetaDeltaFVarIds_5536_; lean_object* v_postponed_5537_; lean_object* v_diag_5538_; lean_object* v___x_5540_; uint8_t v_isShared_5541_; uint8_t v_isSharedCheck_5567_; 
v___x_5533_ = lean_st_ref_take(v___y_5531_);
v_mctx_5534_ = lean_ctor_get(v___x_5533_, 0);
v_cache_5535_ = lean_ctor_get(v___x_5533_, 1);
v_zetaDeltaFVarIds_5536_ = lean_ctor_get(v___x_5533_, 2);
v_postponed_5537_ = lean_ctor_get(v___x_5533_, 3);
v_diag_5538_ = lean_ctor_get(v___x_5533_, 4);
v_isSharedCheck_5567_ = !lean_is_exclusive(v___x_5533_);
if (v_isSharedCheck_5567_ == 0)
{
v___x_5540_ = v___x_5533_;
v_isShared_5541_ = v_isSharedCheck_5567_;
goto v_resetjp_5539_;
}
else
{
lean_inc(v_diag_5538_);
lean_inc(v_postponed_5537_);
lean_inc(v_zetaDeltaFVarIds_5536_);
lean_inc(v_cache_5535_);
lean_inc(v_mctx_5534_);
lean_dec(v___x_5533_);
v___x_5540_ = lean_box(0);
v_isShared_5541_ = v_isSharedCheck_5567_;
goto v_resetjp_5539_;
}
v_resetjp_5539_:
{
lean_object* v_depth_5542_; lean_object* v_levelAssignDepth_5543_; lean_object* v_lmvarCounter_5544_; lean_object* v_mvarCounter_5545_; lean_object* v_lDecls_5546_; lean_object* v_decls_5547_; lean_object* v_userNames_5548_; lean_object* v_lAssignment_5549_; lean_object* v_eAssignment_5550_; lean_object* v_dAssignment_5551_; lean_object* v_instanceTypedMVars_5552_; lean_object* v___x_5554_; uint8_t v_isShared_5555_; uint8_t v_isSharedCheck_5566_; 
v_depth_5542_ = lean_ctor_get(v_mctx_5534_, 0);
v_levelAssignDepth_5543_ = lean_ctor_get(v_mctx_5534_, 1);
v_lmvarCounter_5544_ = lean_ctor_get(v_mctx_5534_, 2);
v_mvarCounter_5545_ = lean_ctor_get(v_mctx_5534_, 3);
v_lDecls_5546_ = lean_ctor_get(v_mctx_5534_, 4);
v_decls_5547_ = lean_ctor_get(v_mctx_5534_, 5);
v_userNames_5548_ = lean_ctor_get(v_mctx_5534_, 6);
v_lAssignment_5549_ = lean_ctor_get(v_mctx_5534_, 7);
v_eAssignment_5550_ = lean_ctor_get(v_mctx_5534_, 8);
v_dAssignment_5551_ = lean_ctor_get(v_mctx_5534_, 9);
v_instanceTypedMVars_5552_ = lean_ctor_get(v_mctx_5534_, 10);
v_isSharedCheck_5566_ = !lean_is_exclusive(v_mctx_5534_);
if (v_isSharedCheck_5566_ == 0)
{
v___x_5554_ = v_mctx_5534_;
v_isShared_5555_ = v_isSharedCheck_5566_;
goto v_resetjp_5553_;
}
else
{
lean_inc(v_instanceTypedMVars_5552_);
lean_inc(v_dAssignment_5551_);
lean_inc(v_eAssignment_5550_);
lean_inc(v_lAssignment_5549_);
lean_inc(v_userNames_5548_);
lean_inc(v_decls_5547_);
lean_inc(v_lDecls_5546_);
lean_inc(v_mvarCounter_5545_);
lean_inc(v_lmvarCounter_5544_);
lean_inc(v_levelAssignDepth_5543_);
lean_inc(v_depth_5542_);
lean_dec(v_mctx_5534_);
v___x_5554_ = lean_box(0);
v_isShared_5555_ = v_isSharedCheck_5566_;
goto v_resetjp_5553_;
}
v_resetjp_5553_:
{
lean_object* v___x_5556_; lean_object* v___x_5557_; lean_object* v___x_5559_; 
v___x_5556_ = lean_box(0);
v___x_5557_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratBitblaster_spec__3_spec__5___redArg(v_eAssignment_5550_, v_mvarId_5529_, v_val_5530_);
if (v_isShared_5555_ == 0)
{
lean_ctor_set(v___x_5554_, 8, v___x_5557_);
v___x_5559_ = v___x_5554_;
goto v_reusejp_5558_;
}
else
{
lean_object* v_reuseFailAlloc_5565_; 
v_reuseFailAlloc_5565_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_5565_, 0, v_depth_5542_);
lean_ctor_set(v_reuseFailAlloc_5565_, 1, v_levelAssignDepth_5543_);
lean_ctor_set(v_reuseFailAlloc_5565_, 2, v_lmvarCounter_5544_);
lean_ctor_set(v_reuseFailAlloc_5565_, 3, v_mvarCounter_5545_);
lean_ctor_set(v_reuseFailAlloc_5565_, 4, v_lDecls_5546_);
lean_ctor_set(v_reuseFailAlloc_5565_, 5, v_decls_5547_);
lean_ctor_set(v_reuseFailAlloc_5565_, 6, v_userNames_5548_);
lean_ctor_set(v_reuseFailAlloc_5565_, 7, v_lAssignment_5549_);
lean_ctor_set(v_reuseFailAlloc_5565_, 8, v___x_5557_);
lean_ctor_set(v_reuseFailAlloc_5565_, 9, v_dAssignment_5551_);
lean_ctor_set(v_reuseFailAlloc_5565_, 10, v_instanceTypedMVars_5552_);
v___x_5559_ = v_reuseFailAlloc_5565_;
goto v_reusejp_5558_;
}
v_reusejp_5558_:
{
lean_object* v___x_5561_; 
if (v_isShared_5541_ == 0)
{
lean_ctor_set(v___x_5540_, 0, v___x_5559_);
v___x_5561_ = v___x_5540_;
goto v_reusejp_5560_;
}
else
{
lean_object* v_reuseFailAlloc_5564_; 
v_reuseFailAlloc_5564_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5564_, 0, v___x_5559_);
lean_ctor_set(v_reuseFailAlloc_5564_, 1, v_cache_5535_);
lean_ctor_set(v_reuseFailAlloc_5564_, 2, v_zetaDeltaFVarIds_5536_);
lean_ctor_set(v_reuseFailAlloc_5564_, 3, v_postponed_5537_);
lean_ctor_set(v_reuseFailAlloc_5564_, 4, v_diag_5538_);
v___x_5561_ = v_reuseFailAlloc_5564_;
goto v_reusejp_5560_;
}
v_reusejp_5560_:
{
lean_object* v___x_5562_; lean_object* v___x_5563_; 
v___x_5562_ = lean_st_ref_put(v___y_5531_, v___x_5561_);
v___x_5563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5563_, 0, v___x_5556_);
return v___x_5563_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0___redArg___boxed(lean_object* v_mvarId_5568_, lean_object* v_val_5569_, lean_object* v___y_5570_, lean_object* v___y_5571_){
_start:
{
lean_object* v_res_5572_; 
v_res_5572_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0___redArg(v_mvarId_5568_, v_val_5569_, v___y_5570_);
lean_dec(v___y_5570_);
return v_res_5572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg(lean_object* v_ctx_5578_, lean_object* v_goal_5579_, lean_object* v_reflectionResult_5580_, lean_object* v_a_5581_, lean_object* v_a_5582_, lean_object* v_a_5583_, lean_object* v_a_5584_, lean_object* v_a_5585_, lean_object* v_a_5586_, lean_object* v_a_5587_, lean_object* v_a_5588_, lean_object* v_a_5589_, lean_object* v_a_5590_, lean_object* v_a_5591_){
_start:
{
lean_object* v_cert_5594_; lean_object* v___y_5595_; lean_object* v___y_5596_; lean_object* v___y_5597_; lean_object* v___y_5598_; lean_object* v___y_5599_; lean_object* v___y_5600_; lean_object* v___y_5601_; lean_object* v___y_5602_; lean_object* v___y_5603_; lean_object* v___y_5604_; lean_object* v___y_5605_; lean_object* v_toCold_5637_; lean_object* v_options_5638_; uint8_t v_hasTrace_5639_; 
v_toCold_5637_ = lean_ctor_get(v_a_5590_, 0);
v_options_5638_ = lean_ctor_get(v_toCold_5637_, 2);
v_hasTrace_5639_ = lean_ctor_get_uint8(v_options_5638_, sizeof(void*)*1);
if (v_hasTrace_5639_ == 0)
{
lean_object* v_config_5640_; lean_object* v_lratPath_5641_; uint8_t v_trimProofs_5642_; lean_object* v___x_5643_; 
v_config_5640_ = lean_ctor_get(v_ctx_5578_, 5);
v_lratPath_5641_ = lean_ctor_get(v_ctx_5578_, 4);
v_trimProofs_5642_ = lean_ctor_get_uint8(v_config_5640_, sizeof(void*)*3);
v___x_5643_ = l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile(v_lratPath_5641_, v_trimProofs_5642_, v_a_5590_, v_a_5591_);
if (lean_obj_tag(v___x_5643_) == 0)
{
lean_object* v_a_5644_; 
v_a_5644_ = lean_ctor_get(v___x_5643_, 0);
lean_inc(v_a_5644_);
lean_dec_ref_known(v___x_5643_, 1);
v_cert_5594_ = v_a_5644_;
v___y_5595_ = v_a_5581_;
v___y_5596_ = v_a_5582_;
v___y_5597_ = v_a_5583_;
v___y_5598_ = v_a_5584_;
v___y_5599_ = v_a_5585_;
v___y_5600_ = v_a_5586_;
v___y_5601_ = v_a_5587_;
v___y_5602_ = v_a_5588_;
v___y_5603_ = v_a_5589_;
v___y_5604_ = v_a_5590_;
v___y_5605_ = v_a_5591_;
goto v___jp_5593_;
}
else
{
lean_object* v_a_5645_; lean_object* v___x_5647_; uint8_t v_isShared_5648_; uint8_t v_isSharedCheck_5652_; 
lean_dec_ref(v_reflectionResult_5580_);
lean_dec(v_goal_5579_);
lean_dec_ref(v_ctx_5578_);
v_a_5645_ = lean_ctor_get(v___x_5643_, 0);
v_isSharedCheck_5652_ = !lean_is_exclusive(v___x_5643_);
if (v_isSharedCheck_5652_ == 0)
{
v___x_5647_ = v___x_5643_;
v_isShared_5648_ = v_isSharedCheck_5652_;
goto v_resetjp_5646_;
}
else
{
lean_inc(v_a_5645_);
lean_dec(v___x_5643_);
v___x_5647_ = lean_box(0);
v_isShared_5648_ = v_isSharedCheck_5652_;
goto v_resetjp_5646_;
}
v_resetjp_5646_:
{
lean_object* v___x_5650_; 
if (v_isShared_5648_ == 0)
{
v___x_5650_ = v___x_5647_;
goto v_reusejp_5649_;
}
else
{
lean_object* v_reuseFailAlloc_5651_; 
v_reuseFailAlloc_5651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5651_, 0, v_a_5645_);
v___x_5650_ = v_reuseFailAlloc_5651_;
goto v_reusejp_5649_;
}
v_reusejp_5649_:
{
return v___x_5650_;
}
}
}
}
else
{
lean_object* v_config_5653_; lean_object* v_lratPath_5654_; uint8_t v_trimProofs_5655_; lean_object* v_inheritedTraceOptions_5656_; lean_object* v___f_5657_; lean_object* v___x_5658_; lean_object* v___x_5659_; lean_object* v___x_5660_; uint8_t v___x_5661_; lean_object* v___y_5663_; lean_object* v___y_5664_; lean_object* v_a_5665_; lean_object* v___y_5678_; lean_object* v___y_5679_; lean_object* v_a_5680_; lean_object* v___y_5683_; lean_object* v___y_5684_; lean_object* v_a_5685_; lean_object* v___y_5695_; lean_object* v___y_5696_; lean_object* v_a_5697_; 
v_config_5653_ = lean_ctor_get(v_ctx_5578_, 5);
v_lratPath_5654_ = lean_ctor_get(v_ctx_5578_, 4);
v_trimProofs_5655_ = lean_ctor_get_uint8(v_config_5653_, sizeof(void*)*3);
v_inheritedTraceOptions_5656_ = lean_ctor_get(v_toCold_5637_, 11);
v___f_5657_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___closed__1));
v___x_5658_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__3));
v___x_5659_ = ((lean_object*)(l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__11));
v___x_5660_ = lean_obj_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__24);
v___x_5661_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5656_, v_options_5638_, v___x_5660_);
if (v___x_5661_ == 0)
{
lean_object* v___x_5730_; uint8_t v___x_5731_; 
v___x_5730_ = l_Lean_trace_profiler;
v___x_5731_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_options_5638_, v___x_5730_);
if (v___x_5731_ == 0)
{
lean_object* v___x_5732_; 
v___x_5732_ = l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile(v_lratPath_5654_, v_trimProofs_5655_, v_a_5590_, v_a_5591_);
if (lean_obj_tag(v___x_5732_) == 0)
{
lean_object* v_a_5733_; 
v_a_5733_ = lean_ctor_get(v___x_5732_, 0);
lean_inc(v_a_5733_);
lean_dec_ref_known(v___x_5732_, 1);
v_cert_5594_ = v_a_5733_;
v___y_5595_ = v_a_5581_;
v___y_5596_ = v_a_5582_;
v___y_5597_ = v_a_5583_;
v___y_5598_ = v_a_5584_;
v___y_5599_ = v_a_5585_;
v___y_5600_ = v_a_5586_;
v___y_5601_ = v_a_5587_;
v___y_5602_ = v_a_5588_;
v___y_5603_ = v_a_5589_;
v___y_5604_ = v_a_5590_;
v___y_5605_ = v_a_5591_;
goto v___jp_5593_;
}
else
{
lean_object* v_a_5734_; lean_object* v___x_5736_; uint8_t v_isShared_5737_; uint8_t v_isSharedCheck_5741_; 
lean_dec_ref(v_reflectionResult_5580_);
lean_dec(v_goal_5579_);
lean_dec_ref(v_ctx_5578_);
v_a_5734_ = lean_ctor_get(v___x_5732_, 0);
v_isSharedCheck_5741_ = !lean_is_exclusive(v___x_5732_);
if (v_isSharedCheck_5741_ == 0)
{
v___x_5736_ = v___x_5732_;
v_isShared_5737_ = v_isSharedCheck_5741_;
goto v_resetjp_5735_;
}
else
{
lean_inc(v_a_5734_);
lean_dec(v___x_5732_);
v___x_5736_ = lean_box(0);
v_isShared_5737_ = v_isSharedCheck_5741_;
goto v_resetjp_5735_;
}
v_resetjp_5735_:
{
lean_object* v___x_5739_; 
if (v_isShared_5737_ == 0)
{
v___x_5739_ = v___x_5736_;
goto v_reusejp_5738_;
}
else
{
lean_object* v_reuseFailAlloc_5740_; 
v_reuseFailAlloc_5740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5740_, 0, v_a_5734_);
v___x_5739_ = v_reuseFailAlloc_5740_;
goto v_reusejp_5738_;
}
v_reusejp_5738_:
{
return v___x_5739_;
}
}
}
}
else
{
goto v___jp_5699_;
}
}
else
{
goto v___jp_5699_;
}
v___jp_5662_:
{
lean_object* v___x_5666_; double v___x_5667_; double v___x_5668_; double v___x_5669_; double v___x_5670_; double v___x_5671_; lean_object* v___x_5672_; lean_object* v___x_5673_; lean_object* v___x_5674_; lean_object* v___x_5675_; lean_object* v___x_5676_; 
v___x_5666_ = lean_io_mono_nanos_now();
v___x_5667_ = lean_float_of_nat(v___y_5663_);
v___x_5668_ = lean_float_once(&l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12, &l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12_once, _init_l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof___closed__12);
v___x_5669_ = lean_float_div(v___x_5667_, v___x_5668_);
v___x_5670_ = lean_float_of_nat(v___x_5666_);
v___x_5671_ = lean_float_div(v___x_5670_, v___x_5668_);
v___x_5672_ = lean_box_float(v___x_5669_);
v___x_5673_ = lean_box_float(v___x_5671_);
v___x_5674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5674_, 0, v___x_5672_);
lean_ctor_set(v___x_5674_, 1, v___x_5673_);
v___x_5675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5675_, 0, v_a_5665_);
lean_ctor_set(v___x_5675_, 1, v___x_5674_);
v___x_5676_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2(v___x_5658_, v_hasTrace_5639_, v___x_5659_, v_options_5638_, v___x_5661_, v___y_5664_, v___f_5657_, v___x_5675_, v_a_5581_, v_a_5582_, v_a_5583_, v_a_5584_, v_a_5585_, v_a_5586_, v_a_5587_, v_a_5588_, v_a_5589_, v_a_5590_, v_a_5591_);
return v___x_5676_;
}
v___jp_5677_:
{
lean_object* v___x_5681_; 
v___x_5681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5681_, 0, v_a_5680_);
v___y_5663_ = v___y_5678_;
v___y_5664_ = v___y_5679_;
v_a_5665_ = v___x_5681_;
goto v___jp_5662_;
}
v___jp_5682_:
{
lean_object* v___x_5686_; double v___x_5687_; double v___x_5688_; lean_object* v___x_5689_; lean_object* v___x_5690_; lean_object* v___x_5691_; lean_object* v___x_5692_; lean_object* v___x_5693_; 
v___x_5686_ = lean_io_get_num_heartbeats();
v___x_5687_ = lean_float_of_nat(v___y_5684_);
v___x_5688_ = lean_float_of_nat(v___x_5686_);
v___x_5689_ = lean_box_float(v___x_5687_);
v___x_5690_ = lean_box_float(v___x_5688_);
v___x_5691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5691_, 0, v___x_5689_);
lean_ctor_set(v___x_5691_, 1, v___x_5690_);
v___x_5692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5692_, 0, v_a_5685_);
lean_ctor_set(v___x_5692_, 1, v___x_5691_);
v___x_5693_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2(v___x_5658_, v_hasTrace_5639_, v___x_5659_, v_options_5638_, v___x_5661_, v___y_5683_, v___f_5657_, v___x_5692_, v_a_5581_, v_a_5582_, v_a_5583_, v_a_5584_, v_a_5585_, v_a_5586_, v_a_5587_, v_a_5588_, v_a_5589_, v_a_5590_, v_a_5591_);
return v___x_5693_;
}
v___jp_5694_:
{
lean_object* v___x_5698_; 
v___x_5698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5698_, 0, v_a_5697_);
v___y_5683_ = v___y_5695_;
v___y_5684_ = v___y_5696_;
v_a_5685_ = v___x_5698_;
goto v___jp_5682_;
}
v___jp_5699_:
{
lean_object* v___x_5700_; lean_object* v_a_5701_; lean_object* v___x_5702_; uint8_t v___x_5703_; 
v___x_5700_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__1___redArg(v_a_5591_);
v_a_5701_ = lean_ctor_get(v___x_5700_, 0);
lean_inc(v_a_5701_);
lean_dec_ref(v___x_5700_);
v___x_5702_ = l_Lean_trace_profiler_useHeartbeats;
v___x_5703_ = l_Lean_Option_get___at___00__private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof_spec__1(v_options_5638_, v___x_5702_);
if (v___x_5703_ == 0)
{
lean_object* v___x_5704_; lean_object* v___x_5705_; 
v___x_5704_ = lean_io_mono_nanos_now();
v___x_5705_ = l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile(v_lratPath_5654_, v_trimProofs_5655_, v_a_5590_, v_a_5591_);
if (lean_obj_tag(v___x_5705_) == 0)
{
lean_object* v_a_5706_; lean_object* v___x_5707_; 
v_a_5706_ = lean_ctor_get(v___x_5705_, 0);
lean_inc(v_a_5706_);
lean_dec_ref_known(v___x_5705_, 1);
lean_inc_ref(v_reflectionResult_5580_);
v___x_5707_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(v_a_5706_, v_ctx_5578_, v_reflectionResult_5580_, v_a_5588_, v_a_5589_, v_a_5590_, v_a_5591_);
if (lean_obj_tag(v___x_5707_) == 0)
{
lean_object* v_a_5708_; lean_object* v_satExpr_5709_; lean_object* v___x_5710_; 
v_a_5708_ = lean_ctor_get(v___x_5707_, 0);
lean_inc(v_a_5708_);
lean_dec_ref_known(v___x_5707_, 1);
v_satExpr_5709_ = lean_ctor_get(v_reflectionResult_5580_, 0);
lean_inc_ref(v_satExpr_5709_);
lean_dec_ref(v_reflectionResult_5580_);
v___x_5710_ = l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse(v_satExpr_5709_, v_a_5708_, v_a_5581_, v_a_5582_, v_a_5583_, v_a_5584_, v_a_5585_, v_a_5586_, v_a_5587_, v_a_5588_, v_a_5589_, v_a_5590_, v_a_5591_);
if (lean_obj_tag(v___x_5710_) == 0)
{
lean_object* v_a_5711_; lean_object* v___x_5712_; lean_object* v___x_5713_; 
v_a_5711_ = lean_ctor_get(v___x_5710_, 0);
lean_inc(v_a_5711_);
lean_dec_ref_known(v___x_5710_, 1);
v___x_5712_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0___redArg(v_goal_5579_, v_a_5711_, v_a_5589_);
lean_dec_ref(v___x_5712_);
v___x_5713_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___closed__2));
v___y_5663_ = v___x_5704_;
v___y_5664_ = v_a_5701_;
v_a_5665_ = v___x_5713_;
goto v___jp_5662_;
}
else
{
lean_object* v_a_5714_; 
lean_dec(v_goal_5579_);
v_a_5714_ = lean_ctor_get(v___x_5710_, 0);
lean_inc(v_a_5714_);
lean_dec_ref_known(v___x_5710_, 1);
v___y_5678_ = v___x_5704_;
v___y_5679_ = v_a_5701_;
v_a_5680_ = v_a_5714_;
goto v___jp_5677_;
}
}
else
{
lean_object* v_a_5715_; 
lean_dec_ref(v_reflectionResult_5580_);
lean_dec(v_goal_5579_);
v_a_5715_ = lean_ctor_get(v___x_5707_, 0);
lean_inc(v_a_5715_);
lean_dec_ref_known(v___x_5707_, 1);
v___y_5678_ = v___x_5704_;
v___y_5679_ = v_a_5701_;
v_a_5680_ = v_a_5715_;
goto v___jp_5677_;
}
}
else
{
lean_object* v_a_5716_; 
lean_dec_ref(v_reflectionResult_5580_);
lean_dec(v_goal_5579_);
lean_dec_ref(v_ctx_5578_);
v_a_5716_ = lean_ctor_get(v___x_5705_, 0);
lean_inc(v_a_5716_);
lean_dec_ref_known(v___x_5705_, 1);
v___y_5678_ = v___x_5704_;
v___y_5679_ = v_a_5701_;
v_a_5680_ = v_a_5716_;
goto v___jp_5677_;
}
}
else
{
lean_object* v___x_5717_; lean_object* v___x_5718_; 
v___x_5717_ = lean_io_get_num_heartbeats();
v___x_5718_ = l_Lean_Meta_Tactic_BVDecide_LratCert_ofFile(v_lratPath_5654_, v_trimProofs_5655_, v_a_5590_, v_a_5591_);
if (lean_obj_tag(v___x_5718_) == 0)
{
lean_object* v_a_5719_; lean_object* v___x_5720_; 
v_a_5719_ = lean_ctor_get(v___x_5718_, 0);
lean_inc(v_a_5719_);
lean_dec_ref_known(v___x_5718_, 1);
lean_inc_ref(v_reflectionResult_5580_);
v___x_5720_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(v_a_5719_, v_ctx_5578_, v_reflectionResult_5580_, v_a_5588_, v_a_5589_, v_a_5590_, v_a_5591_);
if (lean_obj_tag(v___x_5720_) == 0)
{
lean_object* v_a_5721_; lean_object* v_satExpr_5722_; lean_object* v___x_5723_; 
v_a_5721_ = lean_ctor_get(v___x_5720_, 0);
lean_inc(v_a_5721_);
lean_dec_ref_known(v___x_5720_, 1);
v_satExpr_5722_ = lean_ctor_get(v_reflectionResult_5580_, 0);
lean_inc_ref(v_satExpr_5722_);
lean_dec_ref(v_reflectionResult_5580_);
v___x_5723_ = l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse(v_satExpr_5722_, v_a_5721_, v_a_5581_, v_a_5582_, v_a_5583_, v_a_5584_, v_a_5585_, v_a_5586_, v_a_5587_, v_a_5588_, v_a_5589_, v_a_5590_, v_a_5591_);
if (lean_obj_tag(v___x_5723_) == 0)
{
lean_object* v_a_5724_; lean_object* v___x_5725_; lean_object* v___x_5726_; 
v_a_5724_ = lean_ctor_get(v___x_5723_, 0);
lean_inc(v_a_5724_);
lean_dec_ref_known(v___x_5723_, 1);
v___x_5725_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0___redArg(v_goal_5579_, v_a_5724_, v_a_5589_);
lean_dec_ref(v___x_5725_);
v___x_5726_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___closed__2));
v___y_5683_ = v_a_5701_;
v___y_5684_ = v___x_5717_;
v_a_5685_ = v___x_5726_;
goto v___jp_5682_;
}
else
{
lean_object* v_a_5727_; 
lean_dec(v_goal_5579_);
v_a_5727_ = lean_ctor_get(v___x_5723_, 0);
lean_inc(v_a_5727_);
lean_dec_ref_known(v___x_5723_, 1);
v___y_5695_ = v_a_5701_;
v___y_5696_ = v___x_5717_;
v_a_5697_ = v_a_5727_;
goto v___jp_5694_;
}
}
else
{
lean_object* v_a_5728_; 
lean_dec_ref(v_reflectionResult_5580_);
lean_dec(v_goal_5579_);
v_a_5728_ = lean_ctor_get(v___x_5720_, 0);
lean_inc(v_a_5728_);
lean_dec_ref_known(v___x_5720_, 1);
v___y_5695_ = v_a_5701_;
v___y_5696_ = v___x_5717_;
v_a_5697_ = v_a_5728_;
goto v___jp_5694_;
}
}
else
{
lean_object* v_a_5729_; 
lean_dec_ref(v_reflectionResult_5580_);
lean_dec(v_goal_5579_);
lean_dec_ref(v_ctx_5578_);
v_a_5729_ = lean_ctor_get(v___x_5718_, 0);
lean_inc(v_a_5729_);
lean_dec_ref_known(v___x_5718_, 1);
v___y_5695_ = v_a_5701_;
v___y_5696_ = v___x_5717_;
v_a_5697_ = v_a_5729_;
goto v___jp_5694_;
}
}
}
}
v___jp_5593_:
{
lean_object* v___x_5606_; 
lean_inc_ref(v_reflectionResult_5580_);
v___x_5606_ = l___private_Lean_Meta_Tactic_BVDecide_Prover_Bitblast_0__Lean_Meta_Tactic_BVDecide_LratCert_toReflectionProof(v_cert_5594_, v_ctx_5578_, v_reflectionResult_5580_, v___y_5602_, v___y_5603_, v___y_5604_, v___y_5605_);
if (lean_obj_tag(v___x_5606_) == 0)
{
lean_object* v_a_5607_; lean_object* v_satExpr_5608_; lean_object* v___x_5609_; 
v_a_5607_ = lean_ctor_get(v___x_5606_, 0);
lean_inc(v_a_5607_);
lean_dec_ref_known(v___x_5606_, 1);
v_satExpr_5608_ = lean_ctor_get(v_reflectionResult_5580_, 0);
lean_inc_ref(v_satExpr_5608_);
lean_dec_ref(v_reflectionResult_5580_);
v___x_5609_ = l_Lean_Meta_Tactic_BVDecide_SatAtBVLogical_proveFalse(v_satExpr_5608_, v_a_5607_, v___y_5595_, v___y_5596_, v___y_5597_, v___y_5598_, v___y_5599_, v___y_5600_, v___y_5601_, v___y_5602_, v___y_5603_, v___y_5604_, v___y_5605_);
if (lean_obj_tag(v___x_5609_) == 0)
{
lean_object* v_a_5610_; lean_object* v___x_5611_; lean_object* v___x_5613_; uint8_t v_isShared_5614_; uint8_t v_isSharedCheck_5619_; 
v_a_5610_ = lean_ctor_get(v___x_5609_, 0);
lean_inc(v_a_5610_);
lean_dec_ref_known(v___x_5609_, 1);
v___x_5611_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0___redArg(v_goal_5579_, v_a_5610_, v___y_5603_);
v_isSharedCheck_5619_ = !lean_is_exclusive(v___x_5611_);
if (v_isSharedCheck_5619_ == 0)
{
lean_object* v_unused_5620_; 
v_unused_5620_ = lean_ctor_get(v___x_5611_, 0);
lean_dec(v_unused_5620_);
v___x_5613_ = v___x_5611_;
v_isShared_5614_ = v_isSharedCheck_5619_;
goto v_resetjp_5612_;
}
else
{
lean_dec(v___x_5611_);
v___x_5613_ = lean_box(0);
v_isShared_5614_ = v_isSharedCheck_5619_;
goto v_resetjp_5612_;
}
v_resetjp_5612_:
{
lean_object* v___x_5615_; lean_object* v___x_5617_; 
v___x_5615_ = ((lean_object*)(l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___closed__0));
if (v_isShared_5614_ == 0)
{
lean_ctor_set(v___x_5613_, 0, v___x_5615_);
v___x_5617_ = v___x_5613_;
goto v_reusejp_5616_;
}
else
{
lean_object* v_reuseFailAlloc_5618_; 
v_reuseFailAlloc_5618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5618_, 0, v___x_5615_);
v___x_5617_ = v_reuseFailAlloc_5618_;
goto v_reusejp_5616_;
}
v_reusejp_5616_:
{
return v___x_5617_;
}
}
}
else
{
lean_object* v_a_5621_; lean_object* v___x_5623_; uint8_t v_isShared_5624_; uint8_t v_isSharedCheck_5628_; 
lean_dec(v_goal_5579_);
v_a_5621_ = lean_ctor_get(v___x_5609_, 0);
v_isSharedCheck_5628_ = !lean_is_exclusive(v___x_5609_);
if (v_isSharedCheck_5628_ == 0)
{
v___x_5623_ = v___x_5609_;
v_isShared_5624_ = v_isSharedCheck_5628_;
goto v_resetjp_5622_;
}
else
{
lean_inc(v_a_5621_);
lean_dec(v___x_5609_);
v___x_5623_ = lean_box(0);
v_isShared_5624_ = v_isSharedCheck_5628_;
goto v_resetjp_5622_;
}
v_resetjp_5622_:
{
lean_object* v___x_5626_; 
if (v_isShared_5624_ == 0)
{
v___x_5626_ = v___x_5623_;
goto v_reusejp_5625_;
}
else
{
lean_object* v_reuseFailAlloc_5627_; 
v_reuseFailAlloc_5627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5627_, 0, v_a_5621_);
v___x_5626_ = v_reuseFailAlloc_5627_;
goto v_reusejp_5625_;
}
v_reusejp_5625_:
{
return v___x_5626_;
}
}
}
}
else
{
lean_object* v_a_5629_; lean_object* v___x_5631_; uint8_t v_isShared_5632_; uint8_t v_isSharedCheck_5636_; 
lean_dec_ref(v_reflectionResult_5580_);
lean_dec(v_goal_5579_);
v_a_5629_ = lean_ctor_get(v___x_5606_, 0);
v_isSharedCheck_5636_ = !lean_is_exclusive(v___x_5606_);
if (v_isSharedCheck_5636_ == 0)
{
v___x_5631_ = v___x_5606_;
v_isShared_5632_ = v_isSharedCheck_5636_;
goto v_resetjp_5630_;
}
else
{
lean_inc(v_a_5629_);
lean_dec(v___x_5606_);
v___x_5631_ = lean_box(0);
v_isShared_5632_ = v_isSharedCheck_5636_;
goto v_resetjp_5630_;
}
v_resetjp_5630_:
{
lean_object* v___x_5634_; 
if (v_isShared_5632_ == 0)
{
v___x_5634_ = v___x_5631_;
goto v_reusejp_5633_;
}
else
{
lean_object* v_reuseFailAlloc_5635_; 
v_reuseFailAlloc_5635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5635_, 0, v_a_5629_);
v___x_5634_ = v_reuseFailAlloc_5635_;
goto v_reusejp_5633_;
}
v_reusejp_5633_:
{
return v___x_5634_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg___boxed(lean_object* v_ctx_5742_, lean_object* v_goal_5743_, lean_object* v_reflectionResult_5744_, lean_object* v_a_5745_, lean_object* v_a_5746_, lean_object* v_a_5747_, lean_object* v_a_5748_, lean_object* v_a_5749_, lean_object* v_a_5750_, lean_object* v_a_5751_, lean_object* v_a_5752_, lean_object* v_a_5753_, lean_object* v_a_5754_, lean_object* v_a_5755_, lean_object* v_a_5756_){
_start:
{
lean_object* v_res_5757_; 
v_res_5757_ = l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg(v_ctx_5742_, v_goal_5743_, v_reflectionResult_5744_, v_a_5745_, v_a_5746_, v_a_5747_, v_a_5748_, v_a_5749_, v_a_5750_, v_a_5751_, v_a_5752_, v_a_5753_, v_a_5754_, v_a_5755_);
lean_dec(v_a_5755_);
lean_dec_ref(v_a_5754_);
lean_dec(v_a_5753_);
lean_dec_ref(v_a_5752_);
lean_dec(v_a_5751_);
lean_dec_ref(v_a_5750_);
lean_dec(v_a_5749_);
lean_dec_ref(v_a_5748_);
lean_dec(v_a_5747_);
lean_dec(v_a_5746_);
lean_dec_ref(v_a_5745_);
return v_res_5757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker(lean_object* v_ctx_5758_, lean_object* v_goal_5759_, lean_object* v_reflectionResult_5760_, lean_object* v_x_5761_, lean_object* v_a_5762_, lean_object* v_a_5763_, lean_object* v_a_5764_, lean_object* v_a_5765_, lean_object* v_a_5766_, lean_object* v_a_5767_, lean_object* v_a_5768_, lean_object* v_a_5769_, lean_object* v_a_5770_, lean_object* v_a_5771_, lean_object* v_a_5772_){
_start:
{
lean_object* v___x_5774_; 
v___x_5774_ = l_Lean_Meta_Tactic_BVDecide_lratChecker___redArg(v_ctx_5758_, v_goal_5759_, v_reflectionResult_5760_, v_a_5762_, v_a_5763_, v_a_5764_, v_a_5765_, v_a_5766_, v_a_5767_, v_a_5768_, v_a_5769_, v_a_5770_, v_a_5771_, v_a_5772_);
return v___x_5774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Tactic_BVDecide_lratChecker___boxed(lean_object* v_ctx_5775_, lean_object* v_goal_5776_, lean_object* v_reflectionResult_5777_, lean_object* v_x_5778_, lean_object* v_a_5779_, lean_object* v_a_5780_, lean_object* v_a_5781_, lean_object* v_a_5782_, lean_object* v_a_5783_, lean_object* v_a_5784_, lean_object* v_a_5785_, lean_object* v_a_5786_, lean_object* v_a_5787_, lean_object* v_a_5788_, lean_object* v_a_5789_, lean_object* v_a_5790_){
_start:
{
lean_object* v_res_5791_; 
v_res_5791_ = l_Lean_Meta_Tactic_BVDecide_lratChecker(v_ctx_5775_, v_goal_5776_, v_reflectionResult_5777_, v_x_5778_, v_a_5779_, v_a_5780_, v_a_5781_, v_a_5782_, v_a_5783_, v_a_5784_, v_a_5785_, v_a_5786_, v_a_5787_, v_a_5788_, v_a_5789_);
lean_dec(v_a_5789_);
lean_dec_ref(v_a_5788_);
lean_dec(v_a_5787_);
lean_dec_ref(v_a_5786_);
lean_dec(v_a_5785_);
lean_dec_ref(v_a_5784_);
lean_dec(v_a_5783_);
lean_dec_ref(v_a_5782_);
lean_dec(v_a_5781_);
lean_dec(v_a_5780_);
lean_dec_ref(v_a_5779_);
lean_dec(v_x_5778_);
return v_res_5791_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0(lean_object* v_mvarId_5792_, lean_object* v_val_5793_, lean_object* v___y_5794_, lean_object* v___y_5795_, lean_object* v___y_5796_, lean_object* v___y_5797_, lean_object* v___y_5798_, lean_object* v___y_5799_, lean_object* v___y_5800_, lean_object* v___y_5801_, lean_object* v___y_5802_, lean_object* v___y_5803_, lean_object* v___y_5804_){
_start:
{
lean_object* v___x_5806_; 
v___x_5806_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0___redArg(v_mvarId_5792_, v_val_5793_, v___y_5802_);
return v___x_5806_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0___boxed(lean_object* v_mvarId_5807_, lean_object* v_val_5808_, lean_object* v___y_5809_, lean_object* v___y_5810_, lean_object* v___y_5811_, lean_object* v___y_5812_, lean_object* v___y_5813_, lean_object* v___y_5814_, lean_object* v___y_5815_, lean_object* v___y_5816_, lean_object* v___y_5817_, lean_object* v___y_5818_, lean_object* v___y_5819_, lean_object* v___y_5820_){
_start:
{
lean_object* v_res_5821_; 
v_res_5821_ = l_Lean_MVarId_assign___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__0(v_mvarId_5807_, v_val_5808_, v___y_5809_, v___y_5810_, v___y_5811_, v___y_5812_, v___y_5813_, v___y_5814_, v___y_5815_, v___y_5816_, v___y_5817_, v___y_5818_, v___y_5819_);
lean_dec(v___y_5819_);
lean_dec_ref(v___y_5818_);
lean_dec(v___y_5817_);
lean_dec_ref(v___y_5816_);
lean_dec(v___y_5815_);
lean_dec_ref(v___y_5814_);
lean_dec(v___y_5813_);
lean_dec_ref(v___y_5812_);
lean_dec(v___y_5811_);
lean_dec(v___y_5810_);
lean_dec_ref(v___y_5809_);
return v_res_5821_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__3(lean_object* v_00_u03b1_5822_, lean_object* v_x_5823_, lean_object* v___y_5824_, lean_object* v___y_5825_, lean_object* v___y_5826_, lean_object* v___y_5827_, lean_object* v___y_5828_, lean_object* v___y_5829_, lean_object* v___y_5830_, lean_object* v___y_5831_, lean_object* v___y_5832_, lean_object* v___y_5833_, lean_object* v___y_5834_){
_start:
{
lean_object* v___x_5836_; 
v___x_5836_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__3___redArg(v_x_5823_);
return v___x_5836_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__3___boxed(lean_object* v_00_u03b1_5837_, lean_object* v_x_5838_, lean_object* v___y_5839_, lean_object* v___y_5840_, lean_object* v___y_5841_, lean_object* v___y_5842_, lean_object* v___y_5843_, lean_object* v___y_5844_, lean_object* v___y_5845_, lean_object* v___y_5846_, lean_object* v___y_5847_, lean_object* v___y_5848_, lean_object* v___y_5849_, lean_object* v___y_5850_){
_start:
{
lean_object* v_res_5851_; 
v_res_5851_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__3(v_00_u03b1_5837_, v_x_5838_, v___y_5839_, v___y_5840_, v___y_5841_, v___y_5842_, v___y_5843_, v___y_5844_, v___y_5845_, v___y_5846_, v___y_5847_, v___y_5848_, v___y_5849_);
lean_dec(v___y_5849_);
lean_dec_ref(v___y_5848_);
lean_dec(v___y_5847_);
lean_dec_ref(v___y_5846_);
lean_dec(v___y_5845_);
lean_dec_ref(v___y_5844_);
lean_dec(v___y_5843_);
lean_dec_ref(v___y_5842_);
lean_dec(v___y_5841_);
lean_dec(v___y_5840_);
lean_dec_ref(v___y_5839_);
return v_res_5851_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__2(lean_object* v_oldTraces_5852_, lean_object* v_data_5853_, lean_object* v_ref_5854_, lean_object* v_msg_5855_, lean_object* v___y_5856_, lean_object* v___y_5857_, lean_object* v___y_5858_, lean_object* v___y_5859_, lean_object* v___y_5860_, lean_object* v___y_5861_, lean_object* v___y_5862_, lean_object* v___y_5863_, lean_object* v___y_5864_, lean_object* v___y_5865_, lean_object* v___y_5866_){
_start:
{
lean_object* v___x_5868_; 
v___x_5868_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__2___redArg(v_oldTraces_5852_, v_data_5853_, v_ref_5854_, v_msg_5855_, v___y_5863_, v___y_5864_, v___y_5865_, v___y_5866_);
return v___x_5868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__2___boxed(lean_object* v_oldTraces_5869_, lean_object* v_data_5870_, lean_object* v_ref_5871_, lean_object* v_msg_5872_, lean_object* v___y_5873_, lean_object* v___y_5874_, lean_object* v___y_5875_, lean_object* v___y_5876_, lean_object* v___y_5877_, lean_object* v___y_5878_, lean_object* v___y_5879_, lean_object* v___y_5880_, lean_object* v___y_5881_, lean_object* v___y_5882_, lean_object* v___y_5883_, lean_object* v___y_5884_){
_start:
{
lean_object* v_res_5885_; 
v_res_5885_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Meta_Tactic_BVDecide_lratChecker_spec__2_spec__2(v_oldTraces_5869_, v_data_5870_, v_ref_5871_, v_msg_5872_, v___y_5873_, v___y_5874_, v___y_5875_, v___y_5876_, v___y_5877_, v___y_5878_, v___y_5879_, v___y_5880_, v___y_5881_, v___y_5882_, v___y_5883_);
lean_dec(v___y_5883_);
lean_dec_ref(v___y_5882_);
lean_dec(v___y_5881_);
lean_dec_ref(v___y_5880_);
lean_dec(v___y_5879_);
lean_dec_ref(v___y_5878_);
lean_dec(v___y_5877_);
lean_dec_ref(v___y_5876_);
lean_dec(v___y_5875_);
lean_dec(v___y_5874_);
lean_dec_ref(v___y_5873_);
return v_res_5885_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Prover_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_TacticContext(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Native(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_BVDecide_Prover_Bitblast(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Prover_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_TacticContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Native(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_BVDecide_Prover_Bitblast(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_BVDecide_Prover_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_BVDecide_TacticContext(uint8_t builtin);
lean_object* initialize_Lean_Meta_Native(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_BVDecide_Prover_Bitblast(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_BVDecide_Prover_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_BVDecide_TacticContext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Native(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_BVDecide_Prover_Bitblast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_BVDecide_Prover_Bitblast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_BVDecide_Prover_Bitblast(builtin);
}
#ifdef __cplusplus
}
#endif
