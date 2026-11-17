// Lean compiler output
// Module: Lean.Elab.Tactic.VCGen.RuleCache
// Imports: public import Lean.Elab.Tactic.Do.VCGen.Split public import Lean.Elab.Tactic.VCGen.Context public import Lean.Elab.Tactic.VCGen.RuleConstruction public import Lean.Elab.Tactic.VCGen.LatticeOp public import Lean.Elab.Tactic.VCGen.Util import Lean.Meta.Sym.InferType import Lean.Meta.Decidable
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
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_WPApp_instWP(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_BackwardRule_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getBoolDecision_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppPrefix(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_SpecAttr_SpecProof_key(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_tryMkBackwardRuleFromSpec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_isProjectionEquationSpec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_WPApp_prog(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(16, 96, 65, 173, 152, 155, 4, 222)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0(lean_object* v_k_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
lean_object* v___x_14_; 
lean_inc(v___y_8_);
lean_inc_ref(v___y_7_);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
lean_inc(v___y_3_);
lean_inc_ref(v___y_2_);
v___x_14_ = lean_apply_12(v_k_1_, v___y_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, v___y_12_, lean_box(0));
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0___boxed(lean_object* v_k_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0(v_k_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
lean_dec(v___y_20_);
lean_dec_ref(v___y_19_);
lean_dec(v___y_18_);
lean_dec(v___y_17_);
lean_dec_ref(v___y_16_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(lean_object* v_k_29_, uint8_t v_allowLevelAssignments_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_){
_start:
{
lean_object* v___f_43_; lean_object* v___x_44_; 
lean_inc(v___y_37_);
lean_inc_ref(v___y_36_);
lean_inc(v___y_35_);
lean_inc_ref(v___y_34_);
lean_inc(v___y_33_);
lean_inc(v___y_32_);
lean_inc_ref(v___y_31_);
v___f_43_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_43_, 0, v_k_29_);
lean_closure_set(v___f_43_, 1, v___y_31_);
lean_closure_set(v___f_43_, 2, v___y_32_);
lean_closure_set(v___f_43_, 3, v___y_33_);
lean_closure_set(v___f_43_, 4, v___y_34_);
lean_closure_set(v___f_43_, 5, v___y_35_);
lean_closure_set(v___f_43_, 6, v___y_36_);
lean_closure_set(v___f_43_, 7, v___y_37_);
v___x_44_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_30_, v___f_43_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
if (lean_obj_tag(v___x_44_) == 0)
{
return v___x_44_;
}
else
{
lean_object* v_a_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_52_; 
v_a_45_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_52_ == 0)
{
v___x_47_ = v___x_44_;
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_a_45_);
lean_dec(v___x_44_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_50_; 
if (v_isShared_48_ == 0)
{
v___x_50_ = v___x_47_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_a_45_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___boxed(lean_object* v_k_53_, lean_object* v_allowLevelAssignments_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_67_; lean_object* v_res_68_; 
v_allowLevelAssignments_boxed_67_ = lean_unbox(v_allowLevelAssignments_54_);
v_res_68_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(v_k_53_, v_allowLevelAssignments_boxed_67_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
lean_dec(v___y_61_);
lean_dec_ref(v___y_60_);
lean_dec(v___y_59_);
lean_dec_ref(v___y_58_);
lean_dec(v___y_57_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1(lean_object* v_00_u03b1_69_, lean_object* v_k_70_, uint8_t v_allowLevelAssignments_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(v_k_70_, v_allowLevelAssignments_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___boxed(lean_object* v_00_u03b1_85_, lean_object* v_k_86_, lean_object* v_allowLevelAssignments_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_100_; lean_object* v_res_101_; 
v_allowLevelAssignments_boxed_100_ = lean_unbox(v_allowLevelAssignments_87_);
v_res_101_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1(v_00_u03b1_85_, v_k_86_, v_allowLevelAssignments_boxed_100_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v___y_96_);
lean_dec_ref(v___y_95_);
lean_dec(v___y_94_);
lean_dec_ref(v___y_93_);
lean_dec(v___y_92_);
lean_dec_ref(v___y_91_);
lean_dec(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___lam__0(lean_object* v_specThm_102_, lean_object* v_info_103_, lean_object* v___x_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l_Lean_Elab_Tactic_VCGen_tryMkBackwardRuleFromSpec(v_specThm_102_, v_info_103_, v___x_104_, v___y_112_, v___y_113_, v___y_114_, v___y_115_);
if (lean_obj_tag(v___x_117_) == 0)
{
lean_object* v_a_118_; lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_126_; 
v_a_118_ = lean_ctor_get(v___x_117_, 0);
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_117_);
if (v_isSharedCheck_126_ == 0)
{
v___x_120_ = v___x_117_;
v_isShared_121_ = v_isSharedCheck_126_;
goto v_resetjp_119_;
}
else
{
lean_inc(v_a_118_);
lean_dec(v___x_117_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_126_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
lean_object* v___x_122_; lean_object* v___x_124_; 
v___x_122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_122_, 0, v_a_118_);
if (v_isShared_121_ == 0)
{
lean_ctor_set(v___x_120_, 0, v___x_122_);
v___x_124_ = v___x_120_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v___x_122_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
else
{
lean_object* v_a_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_134_; 
v_a_127_ = lean_ctor_get(v___x_117_, 0);
v_isSharedCheck_134_ = !lean_is_exclusive(v___x_117_);
if (v_isSharedCheck_134_ == 0)
{
v___x_129_ = v___x_117_;
v_isShared_130_ = v_isSharedCheck_134_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_a_127_);
lean_dec(v___x_117_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_134_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v___x_132_; 
if (v_isShared_130_ == 0)
{
v___x_132_ = v___x_129_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v_a_127_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___lam__0___boxed(lean_object* v_specThm_135_, lean_object* v_info_136_, lean_object* v___x_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___lam__0(v_specThm_135_, v_info_136_, v___x_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_);
lean_dec(v___y_148_);
lean_dec_ref(v___y_147_);
lean_dec(v___y_146_);
lean_dec_ref(v___y_145_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec(v___y_140_);
lean_dec(v___y_139_);
lean_dec_ref(v___y_138_);
return v_res_150_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0_spec__2(lean_object* v_x_151_, lean_object* v_x_152_){
_start:
{
if (lean_obj_tag(v_x_151_) == 0)
{
if (lean_obj_tag(v_x_152_) == 0)
{
uint8_t v___x_153_; 
v___x_153_ = 1;
return v___x_153_;
}
else
{
uint8_t v___x_154_; 
v___x_154_ = 0;
return v___x_154_;
}
}
else
{
if (lean_obj_tag(v_x_152_) == 0)
{
uint8_t v___x_155_; 
v___x_155_ = 0;
return v___x_155_;
}
else
{
lean_object* v_val_156_; lean_object* v_val_157_; size_t v___x_158_; size_t v___x_159_; uint8_t v___x_160_; 
v_val_156_ = lean_ctor_get(v_x_151_, 0);
v_val_157_ = lean_ctor_get(v_x_152_, 0);
v___x_158_ = lean_ptr_addr(v_val_156_);
v___x_159_ = lean_ptr_addr(v_val_157_);
v___x_160_ = lean_usize_dec_eq(v___x_158_, v___x_159_);
return v___x_160_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0_spec__2___boxed(lean_object* v_x_161_, lean_object* v_x_162_){
_start:
{
uint8_t v_res_163_; lean_object* v_r_164_; 
v_res_163_ = l_instBEqOption_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0_spec__2(v_x_161_, v_x_162_);
lean_dec(v_x_162_);
lean_dec(v_x_161_);
v_r_164_ = lean_box(v_res_163_);
return v_r_164_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(lean_object* v_a_165_, lean_object* v_x_166_){
_start:
{
if (lean_obj_tag(v_x_166_) == 0)
{
uint8_t v___x_167_; 
v___x_167_ = 0;
return v___x_167_;
}
else
{
lean_object* v_key_168_; lean_object* v_tail_169_; lean_object* v_fst_170_; lean_object* v_snd_171_; lean_object* v_fst_172_; lean_object* v_snd_173_; uint8_t v___x_174_; 
v_key_168_ = lean_ctor_get(v_x_166_, 0);
v_tail_169_ = lean_ctor_get(v_x_166_, 2);
v_fst_170_ = lean_ctor_get(v_key_168_, 0);
v_snd_171_ = lean_ctor_get(v_key_168_, 1);
v_fst_172_ = lean_ctor_get(v_a_165_, 0);
v_snd_173_ = lean_ctor_get(v_a_165_, 1);
v___x_174_ = lean_name_eq(v_fst_170_, v_fst_172_);
if (v___x_174_ == 0)
{
v_x_166_ = v_tail_169_;
goto _start;
}
else
{
lean_object* v_fst_176_; lean_object* v_snd_177_; lean_object* v_fst_178_; lean_object* v_snd_179_; size_t v___x_180_; size_t v___x_181_; uint8_t v___x_182_; 
v_fst_176_ = lean_ctor_get(v_snd_171_, 0);
v_snd_177_ = lean_ctor_get(v_snd_171_, 1);
v_fst_178_ = lean_ctor_get(v_snd_173_, 0);
v_snd_179_ = lean_ctor_get(v_snd_173_, 1);
v___x_180_ = lean_ptr_addr(v_fst_176_);
v___x_181_ = lean_ptr_addr(v_fst_178_);
v___x_182_ = lean_usize_dec_eq(v___x_180_, v___x_181_);
if (v___x_182_ == 0)
{
v_x_166_ = v_tail_169_;
goto _start;
}
else
{
lean_object* v_fst_184_; lean_object* v_snd_185_; lean_object* v_fst_186_; lean_object* v_snd_187_; uint8_t v___x_188_; 
v_fst_184_ = lean_ctor_get(v_snd_177_, 0);
v_snd_185_ = lean_ctor_get(v_snd_177_, 1);
v_fst_186_ = lean_ctor_get(v_snd_179_, 0);
v_snd_187_ = lean_ctor_get(v_snd_179_, 1);
v___x_188_ = lean_nat_dec_eq(v_fst_184_, v_fst_186_);
if (v___x_188_ == 0)
{
v_x_166_ = v_tail_169_;
goto _start;
}
else
{
uint8_t v___x_190_; 
v___x_190_ = l_instBEqOption_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0_spec__2(v_snd_185_, v_snd_187_);
if (v___x_190_ == 0)
{
v_x_166_ = v_tail_169_;
goto _start;
}
else
{
return v___x_190_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg___boxed(lean_object* v_a_192_, lean_object* v_x_193_){
_start:
{
uint8_t v_res_194_; lean_object* v_r_195_; 
v_res_194_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(v_a_192_, v_x_193_);
lean_dec(v_x_193_);
lean_dec_ref(v_a_192_);
v_r_195_ = lean_box(v_res_194_);
return v_r_195_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__6_spec__7___redArg(lean_object* v_x_196_, lean_object* v_x_197_){
_start:
{
if (lean_obj_tag(v_x_197_) == 0)
{
return v_x_196_;
}
else
{
lean_object* v_key_198_; lean_object* v_value_199_; lean_object* v_tail_200_; lean_object* v___x_202_; uint8_t v_isShared_203_; uint8_t v_isSharedCheck_252_; 
v_key_198_ = lean_ctor_get(v_x_197_, 0);
v_value_199_ = lean_ctor_get(v_x_197_, 1);
v_tail_200_ = lean_ctor_get(v_x_197_, 2);
v_isSharedCheck_252_ = !lean_is_exclusive(v_x_197_);
if (v_isSharedCheck_252_ == 0)
{
v___x_202_ = v_x_197_;
v_isShared_203_ = v_isSharedCheck_252_;
goto v_resetjp_201_;
}
else
{
lean_inc(v_tail_200_);
lean_inc(v_value_199_);
lean_inc(v_key_198_);
lean_dec(v_x_197_);
v___x_202_ = lean_box(0);
v_isShared_203_ = v_isSharedCheck_252_;
goto v_resetjp_201_;
}
v_resetjp_201_:
{
lean_object* v_fst_204_; lean_object* v_snd_205_; lean_object* v___x_206_; uint64_t v___y_208_; uint64_t v___y_209_; uint64_t v___y_210_; uint64_t v___y_211_; uint64_t v___y_233_; 
v_fst_204_ = lean_ctor_get(v_key_198_, 0);
v_snd_205_ = lean_ctor_get(v_key_198_, 1);
v___x_206_ = lean_array_get_size(v_x_196_);
if (lean_obj_tag(v_fst_204_) == 0)
{
uint64_t v___x_250_; 
v___x_250_ = 1723ULL;
v___y_233_ = v___x_250_;
goto v___jp_232_;
}
else
{
uint64_t v_hash_251_; 
v_hash_251_ = lean_ctor_get_uint64(v_fst_204_, sizeof(void*)*2);
v___y_233_ = v_hash_251_;
goto v___jp_232_;
}
v___jp_207_:
{
uint64_t v___x_212_; uint64_t v___x_213_; uint64_t v___x_214_; uint64_t v___x_215_; uint64_t v___x_216_; uint64_t v_fold_217_; uint64_t v___x_218_; uint64_t v___x_219_; uint64_t v___x_220_; size_t v___x_221_; size_t v___x_222_; size_t v___x_223_; size_t v___x_224_; size_t v___x_225_; lean_object* v___x_226_; lean_object* v___x_228_; 
v___x_212_ = lean_uint64_mix_hash(v___y_208_, v___y_211_);
v___x_213_ = lean_uint64_mix_hash(v___y_210_, v___x_212_);
v___x_214_ = lean_uint64_mix_hash(v___y_209_, v___x_213_);
v___x_215_ = 32ULL;
v___x_216_ = lean_uint64_shift_right(v___x_214_, v___x_215_);
v_fold_217_ = lean_uint64_xor(v___x_214_, v___x_216_);
v___x_218_ = 16ULL;
v___x_219_ = lean_uint64_shift_right(v_fold_217_, v___x_218_);
v___x_220_ = lean_uint64_xor(v_fold_217_, v___x_219_);
v___x_221_ = lean_uint64_to_usize(v___x_220_);
v___x_222_ = lean_usize_of_nat(v___x_206_);
v___x_223_ = ((size_t)1ULL);
v___x_224_ = lean_usize_sub(v___x_222_, v___x_223_);
v___x_225_ = lean_usize_land(v___x_221_, v___x_224_);
v___x_226_ = lean_array_uget_borrowed(v_x_196_, v___x_225_);
lean_inc(v___x_226_);
if (v_isShared_203_ == 0)
{
lean_ctor_set(v___x_202_, 2, v___x_226_);
v___x_228_ = v___x_202_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v_key_198_);
lean_ctor_set(v_reuseFailAlloc_231_, 1, v_value_199_);
lean_ctor_set(v_reuseFailAlloc_231_, 2, v___x_226_);
v___x_228_ = v_reuseFailAlloc_231_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
lean_object* v___x_229_; 
v___x_229_ = lean_array_uset(v_x_196_, v___x_225_, v___x_228_);
v_x_196_ = v___x_229_;
v_x_197_ = v_tail_200_;
goto _start;
}
}
v___jp_232_:
{
lean_object* v_snd_234_; lean_object* v_fst_235_; lean_object* v_fst_236_; lean_object* v_snd_237_; size_t v___x_238_; size_t v___x_239_; size_t v___x_240_; uint64_t v___x_241_; uint64_t v___x_242_; 
v_snd_234_ = lean_ctor_get(v_snd_205_, 1);
v_fst_235_ = lean_ctor_get(v_snd_205_, 0);
v_fst_236_ = lean_ctor_get(v_snd_234_, 0);
v_snd_237_ = lean_ctor_get(v_snd_234_, 1);
v___x_238_ = lean_ptr_addr(v_fst_235_);
v___x_239_ = ((size_t)3ULL);
v___x_240_ = lean_usize_shift_right(v___x_238_, v___x_239_);
v___x_241_ = lean_usize_to_uint64(v___x_240_);
v___x_242_ = lean_uint64_of_nat(v_fst_236_);
if (lean_obj_tag(v_snd_237_) == 0)
{
uint64_t v___x_243_; 
v___x_243_ = 11ULL;
v___y_208_ = v___x_242_;
v___y_209_ = v___y_233_;
v___y_210_ = v___x_241_;
v___y_211_ = v___x_243_;
goto v___jp_207_;
}
else
{
lean_object* v_val_244_; size_t v___x_245_; size_t v___x_246_; uint64_t v___x_247_; uint64_t v___x_248_; uint64_t v___x_249_; 
v_val_244_ = lean_ctor_get(v_snd_237_, 0);
v___x_245_ = lean_ptr_addr(v_val_244_);
v___x_246_ = lean_usize_shift_right(v___x_245_, v___x_239_);
v___x_247_ = lean_usize_to_uint64(v___x_246_);
v___x_248_ = 13ULL;
v___x_249_ = lean_uint64_mix_hash(v___x_247_, v___x_248_);
v___y_208_ = v___x_242_;
v___y_209_ = v___y_233_;
v___y_210_ = v___x_241_;
v___y_211_ = v___x_249_;
goto v___jp_207_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__6___redArg(lean_object* v_i_253_, lean_object* v_source_254_, lean_object* v_target_255_){
_start:
{
lean_object* v___x_256_; uint8_t v___x_257_; 
v___x_256_ = lean_array_get_size(v_source_254_);
v___x_257_ = lean_nat_dec_lt(v_i_253_, v___x_256_);
if (v___x_257_ == 0)
{
lean_dec_ref(v_source_254_);
lean_dec(v_i_253_);
return v_target_255_;
}
else
{
lean_object* v_es_258_; lean_object* v___x_259_; lean_object* v_source_260_; lean_object* v_target_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v_es_258_ = lean_array_fget(v_source_254_, v_i_253_);
v___x_259_ = lean_box(0);
v_source_260_ = lean_array_fset(v_source_254_, v_i_253_, v___x_259_);
v_target_261_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__6_spec__7___redArg(v_target_255_, v_es_258_);
v___x_262_ = lean_unsigned_to_nat(1u);
v___x_263_ = lean_nat_add(v_i_253_, v___x_262_);
lean_dec(v_i_253_);
v_i_253_ = v___x_263_;
v_source_254_ = v_source_260_;
v_target_255_ = v_target_261_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4___redArg(lean_object* v_data_265_){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v_nbuckets_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_266_ = lean_array_get_size(v_data_265_);
v___x_267_ = lean_unsigned_to_nat(2u);
v_nbuckets_268_ = lean_nat_mul(v___x_266_, v___x_267_);
v___x_269_ = lean_unsigned_to_nat(0u);
v___x_270_ = lean_box(0);
v___x_271_ = lean_mk_array(v_nbuckets_268_, v___x_270_);
v___x_272_ = lean_array_propagate_mark(v_data_265_, v___x_271_);
v___x_273_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__6___redArg(v___x_269_, v_data_265_, v___x_272_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(lean_object* v_a_274_, lean_object* v_b_275_, lean_object* v_x_276_){
_start:
{
if (lean_obj_tag(v_x_276_) == 0)
{
lean_dec(v_b_275_);
lean_dec_ref(v_a_274_);
return v_x_276_;
}
else
{
lean_object* v_key_277_; lean_object* v_value_278_; lean_object* v_tail_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_307_; 
v_key_277_ = lean_ctor_get(v_x_276_, 0);
v_value_278_ = lean_ctor_get(v_x_276_, 1);
v_tail_279_ = lean_ctor_get(v_x_276_, 2);
v_isSharedCheck_307_ = !lean_is_exclusive(v_x_276_);
if (v_isSharedCheck_307_ == 0)
{
v___x_281_ = v_x_276_;
v_isShared_282_ = v_isSharedCheck_307_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_tail_279_);
lean_inc(v_value_278_);
lean_inc(v_key_277_);
lean_dec(v_x_276_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_307_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v_fst_288_; lean_object* v_snd_289_; lean_object* v_fst_290_; lean_object* v_snd_291_; uint8_t v___x_292_; 
v_fst_288_ = lean_ctor_get(v_key_277_, 0);
v_snd_289_ = lean_ctor_get(v_key_277_, 1);
v_fst_290_ = lean_ctor_get(v_a_274_, 0);
v_snd_291_ = lean_ctor_get(v_a_274_, 1);
v___x_292_ = lean_name_eq(v_fst_288_, v_fst_290_);
if (v___x_292_ == 0)
{
goto v___jp_283_;
}
else
{
lean_object* v_fst_293_; lean_object* v_snd_294_; lean_object* v_fst_295_; lean_object* v_snd_296_; size_t v___x_297_; size_t v___x_298_; uint8_t v___x_299_; 
v_fst_293_ = lean_ctor_get(v_snd_289_, 0);
v_snd_294_ = lean_ctor_get(v_snd_289_, 1);
v_fst_295_ = lean_ctor_get(v_snd_291_, 0);
v_snd_296_ = lean_ctor_get(v_snd_291_, 1);
v___x_297_ = lean_ptr_addr(v_fst_293_);
v___x_298_ = lean_ptr_addr(v_fst_295_);
v___x_299_ = lean_usize_dec_eq(v___x_297_, v___x_298_);
if (v___x_299_ == 0)
{
goto v___jp_283_;
}
else
{
lean_object* v_fst_300_; lean_object* v_snd_301_; lean_object* v_fst_302_; lean_object* v_snd_303_; uint8_t v___x_304_; 
v_fst_300_ = lean_ctor_get(v_snd_294_, 0);
v_snd_301_ = lean_ctor_get(v_snd_294_, 1);
v_fst_302_ = lean_ctor_get(v_snd_296_, 0);
v_snd_303_ = lean_ctor_get(v_snd_296_, 1);
v___x_304_ = lean_nat_dec_eq(v_fst_300_, v_fst_302_);
if (v___x_304_ == 0)
{
goto v___jp_283_;
}
else
{
uint8_t v___x_305_; 
v___x_305_ = l_instBEqOption_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0_spec__2(v_snd_301_, v_snd_303_);
if (v___x_305_ == 0)
{
goto v___jp_283_;
}
else
{
lean_object* v___x_306_; 
lean_del_object(v___x_281_);
lean_dec(v_value_278_);
lean_dec(v_key_277_);
v___x_306_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_306_, 0, v_a_274_);
lean_ctor_set(v___x_306_, 1, v_b_275_);
lean_ctor_set(v___x_306_, 2, v_tail_279_);
return v___x_306_;
}
}
}
}
v___jp_283_:
{
lean_object* v___x_284_; lean_object* v___x_286_; 
v___x_284_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(v_a_274_, v_b_275_, v_tail_279_);
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 2, v___x_284_);
v___x_286_ = v___x_281_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_key_277_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v_value_278_);
lean_ctor_set(v_reuseFailAlloc_287_, 2, v___x_284_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(lean_object* v_m_308_, lean_object* v_a_309_, lean_object* v_b_310_){
_start:
{
lean_object* v_size_311_; lean_object* v_buckets_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_384_; 
v_size_311_ = lean_ctor_get(v_m_308_, 0);
v_buckets_312_ = lean_ctor_get(v_m_308_, 1);
v_isSharedCheck_384_ = !lean_is_exclusive(v_m_308_);
if (v_isSharedCheck_384_ == 0)
{
v___x_314_ = v_m_308_;
v_isShared_315_ = v_isSharedCheck_384_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_buckets_312_);
lean_inc(v_size_311_);
lean_dec(v_m_308_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_384_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v_fst_316_; lean_object* v_snd_317_; lean_object* v___x_318_; uint64_t v___y_320_; uint64_t v___y_321_; uint64_t v___y_322_; uint64_t v___y_323_; uint64_t v___y_365_; 
v_fst_316_ = lean_ctor_get(v_a_309_, 0);
v_snd_317_ = lean_ctor_get(v_a_309_, 1);
v___x_318_ = lean_array_get_size(v_buckets_312_);
if (lean_obj_tag(v_fst_316_) == 0)
{
uint64_t v___x_382_; 
v___x_382_ = 1723ULL;
v___y_365_ = v___x_382_;
goto v___jp_364_;
}
else
{
uint64_t v_hash_383_; 
v_hash_383_ = lean_ctor_get_uint64(v_fst_316_, sizeof(void*)*2);
v___y_365_ = v_hash_383_;
goto v___jp_364_;
}
v___jp_319_:
{
uint64_t v___x_324_; uint64_t v___x_325_; uint64_t v___x_326_; uint64_t v___x_327_; uint64_t v___x_328_; uint64_t v_fold_329_; uint64_t v___x_330_; uint64_t v___x_331_; uint64_t v___x_332_; size_t v___x_333_; size_t v___x_334_; size_t v___x_335_; size_t v___x_336_; size_t v___x_337_; lean_object* v_bkt_338_; uint8_t v___x_339_; 
v___x_324_ = lean_uint64_mix_hash(v___y_321_, v___y_323_);
v___x_325_ = lean_uint64_mix_hash(v___y_320_, v___x_324_);
v___x_326_ = lean_uint64_mix_hash(v___y_322_, v___x_325_);
v___x_327_ = 32ULL;
v___x_328_ = lean_uint64_shift_right(v___x_326_, v___x_327_);
v_fold_329_ = lean_uint64_xor(v___x_326_, v___x_328_);
v___x_330_ = 16ULL;
v___x_331_ = lean_uint64_shift_right(v_fold_329_, v___x_330_);
v___x_332_ = lean_uint64_xor(v_fold_329_, v___x_331_);
v___x_333_ = lean_uint64_to_usize(v___x_332_);
v___x_334_ = lean_usize_of_nat(v___x_318_);
v___x_335_ = ((size_t)1ULL);
v___x_336_ = lean_usize_sub(v___x_334_, v___x_335_);
v___x_337_ = lean_usize_land(v___x_333_, v___x_336_);
v_bkt_338_ = lean_array_uget_borrowed(v_buckets_312_, v___x_337_);
v___x_339_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(v_a_309_, v_bkt_338_);
if (v___x_339_ == 0)
{
lean_object* v___x_340_; lean_object* v_size_x27_341_; lean_object* v___x_342_; lean_object* v_buckets_x27_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_340_ = lean_unsigned_to_nat(1u);
v_size_x27_341_ = lean_nat_add(v_size_311_, v___x_340_);
lean_dec(v_size_311_);
lean_inc(v_bkt_338_);
v___x_342_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_342_, 0, v_a_309_);
lean_ctor_set(v___x_342_, 1, v_b_310_);
lean_ctor_set(v___x_342_, 2, v_bkt_338_);
v_buckets_x27_343_ = lean_array_uset(v_buckets_312_, v___x_337_, v___x_342_);
v___x_344_ = lean_unsigned_to_nat(4u);
v___x_345_ = lean_nat_mul(v_size_x27_341_, v___x_344_);
v___x_346_ = lean_unsigned_to_nat(3u);
v___x_347_ = lean_nat_div(v___x_345_, v___x_346_);
lean_dec(v___x_345_);
v___x_348_ = lean_array_get_size(v_buckets_x27_343_);
v___x_349_ = lean_nat_dec_le(v___x_347_, v___x_348_);
lean_dec(v___x_347_);
if (v___x_349_ == 0)
{
lean_object* v_val_350_; lean_object* v___x_352_; 
v_val_350_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4___redArg(v_buckets_x27_343_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 1, v_val_350_);
lean_ctor_set(v___x_314_, 0, v_size_x27_341_);
v___x_352_ = v___x_314_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_size_x27_341_);
lean_ctor_set(v_reuseFailAlloc_353_, 1, v_val_350_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
else
{
lean_object* v___x_355_; 
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 1, v_buckets_x27_343_);
lean_ctor_set(v___x_314_, 0, v_size_x27_341_);
v___x_355_ = v___x_314_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_size_x27_341_);
lean_ctor_set(v_reuseFailAlloc_356_, 1, v_buckets_x27_343_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
else
{
lean_object* v___x_357_; lean_object* v_buckets_x27_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_362_; 
lean_inc(v_bkt_338_);
v___x_357_ = lean_box(0);
v_buckets_x27_358_ = lean_array_uset(v_buckets_312_, v___x_337_, v___x_357_);
v___x_359_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(v_a_309_, v_b_310_, v_bkt_338_);
v___x_360_ = lean_array_uset(v_buckets_x27_358_, v___x_337_, v___x_359_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 1, v___x_360_);
v___x_362_ = v___x_314_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_size_311_);
lean_ctor_set(v_reuseFailAlloc_363_, 1, v___x_360_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
v___jp_364_:
{
lean_object* v_snd_366_; lean_object* v_fst_367_; lean_object* v_fst_368_; lean_object* v_snd_369_; size_t v___x_370_; size_t v___x_371_; size_t v___x_372_; uint64_t v___x_373_; uint64_t v___x_374_; 
v_snd_366_ = lean_ctor_get(v_snd_317_, 1);
v_fst_367_ = lean_ctor_get(v_snd_317_, 0);
v_fst_368_ = lean_ctor_get(v_snd_366_, 0);
v_snd_369_ = lean_ctor_get(v_snd_366_, 1);
v___x_370_ = lean_ptr_addr(v_fst_367_);
v___x_371_ = ((size_t)3ULL);
v___x_372_ = lean_usize_shift_right(v___x_370_, v___x_371_);
v___x_373_ = lean_usize_to_uint64(v___x_372_);
v___x_374_ = lean_uint64_of_nat(v_fst_368_);
if (lean_obj_tag(v_snd_369_) == 0)
{
uint64_t v___x_375_; 
v___x_375_ = 11ULL;
v___y_320_ = v___x_373_;
v___y_321_ = v___x_374_;
v___y_322_ = v___y_365_;
v___y_323_ = v___x_375_;
goto v___jp_319_;
}
else
{
lean_object* v_val_376_; size_t v___x_377_; size_t v___x_378_; uint64_t v___x_379_; uint64_t v___x_380_; uint64_t v___x_381_; 
v_val_376_ = lean_ctor_get(v_snd_369_, 0);
v___x_377_ = lean_ptr_addr(v_val_376_);
v___x_378_ = lean_usize_shift_right(v___x_377_, v___x_371_);
v___x_379_ = lean_usize_to_uint64(v___x_378_);
v___x_380_ = 13ULL;
v___x_381_ = lean_uint64_mix_hash(v___x_379_, v___x_380_);
v___y_320_ = v___x_373_;
v___y_321_ = v___x_374_;
v___y_322_ = v___y_365_;
v___y_323_ = v___x_381_;
goto v___jp_319_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(lean_object* v_a_385_, lean_object* v_x_386_){
_start:
{
if (lean_obj_tag(v_x_386_) == 0)
{
lean_object* v___x_387_; 
v___x_387_ = lean_box(0);
return v___x_387_;
}
else
{
lean_object* v_key_388_; lean_object* v_value_389_; lean_object* v_tail_390_; lean_object* v_fst_391_; lean_object* v_snd_392_; lean_object* v_fst_393_; lean_object* v_snd_394_; uint8_t v___x_395_; 
v_key_388_ = lean_ctor_get(v_x_386_, 0);
v_value_389_ = lean_ctor_get(v_x_386_, 1);
v_tail_390_ = lean_ctor_get(v_x_386_, 2);
v_fst_391_ = lean_ctor_get(v_key_388_, 0);
v_snd_392_ = lean_ctor_get(v_key_388_, 1);
v_fst_393_ = lean_ctor_get(v_a_385_, 0);
v_snd_394_ = lean_ctor_get(v_a_385_, 1);
v___x_395_ = lean_name_eq(v_fst_391_, v_fst_393_);
if (v___x_395_ == 0)
{
v_x_386_ = v_tail_390_;
goto _start;
}
else
{
lean_object* v_fst_397_; lean_object* v_snd_398_; lean_object* v_fst_399_; lean_object* v_snd_400_; size_t v___x_401_; size_t v___x_402_; uint8_t v___x_403_; 
v_fst_397_ = lean_ctor_get(v_snd_392_, 0);
v_snd_398_ = lean_ctor_get(v_snd_392_, 1);
v_fst_399_ = lean_ctor_get(v_snd_394_, 0);
v_snd_400_ = lean_ctor_get(v_snd_394_, 1);
v___x_401_ = lean_ptr_addr(v_fst_397_);
v___x_402_ = lean_ptr_addr(v_fst_399_);
v___x_403_ = lean_usize_dec_eq(v___x_401_, v___x_402_);
if (v___x_403_ == 0)
{
v_x_386_ = v_tail_390_;
goto _start;
}
else
{
lean_object* v_fst_405_; lean_object* v_snd_406_; lean_object* v_fst_407_; lean_object* v_snd_408_; uint8_t v___x_409_; 
v_fst_405_ = lean_ctor_get(v_snd_398_, 0);
v_snd_406_ = lean_ctor_get(v_snd_398_, 1);
v_fst_407_ = lean_ctor_get(v_snd_400_, 0);
v_snd_408_ = lean_ctor_get(v_snd_400_, 1);
v___x_409_ = lean_nat_dec_eq(v_fst_405_, v_fst_407_);
if (v___x_409_ == 0)
{
v_x_386_ = v_tail_390_;
goto _start;
}
else
{
uint8_t v___x_411_; 
v___x_411_ = l_instBEqOption_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0_spec__2(v_snd_406_, v_snd_408_);
if (v___x_411_ == 0)
{
v_x_386_ = v_tail_390_;
goto _start;
}
else
{
lean_object* v___x_413_; 
lean_inc(v_value_389_);
v___x_413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_413_, 0, v_value_389_);
return v___x_413_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg___boxed(lean_object* v_a_414_, lean_object* v_x_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(v_a_414_, v_x_415_);
lean_dec(v_x_415_);
lean_dec_ref(v_a_414_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(lean_object* v_m_417_, lean_object* v_a_418_){
_start:
{
lean_object* v_buckets_419_; lean_object* v_fst_420_; lean_object* v_snd_421_; lean_object* v___x_422_; uint64_t v___y_424_; uint64_t v___y_425_; uint64_t v___y_426_; uint64_t v___y_427_; uint64_t v___y_445_; 
v_buckets_419_ = lean_ctor_get(v_m_417_, 1);
v_fst_420_ = lean_ctor_get(v_a_418_, 0);
v_snd_421_ = lean_ctor_get(v_a_418_, 1);
v___x_422_ = lean_array_get_size(v_buckets_419_);
if (lean_obj_tag(v_fst_420_) == 0)
{
uint64_t v___x_462_; 
v___x_462_ = 1723ULL;
v___y_445_ = v___x_462_;
goto v___jp_444_;
}
else
{
uint64_t v_hash_463_; 
v_hash_463_ = lean_ctor_get_uint64(v_fst_420_, sizeof(void*)*2);
v___y_445_ = v_hash_463_;
goto v___jp_444_;
}
v___jp_423_:
{
uint64_t v___x_428_; uint64_t v___x_429_; uint64_t v___x_430_; uint64_t v___x_431_; uint64_t v___x_432_; uint64_t v_fold_433_; uint64_t v___x_434_; uint64_t v___x_435_; uint64_t v___x_436_; size_t v___x_437_; size_t v___x_438_; size_t v___x_439_; size_t v___x_440_; size_t v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_428_ = lean_uint64_mix_hash(v___y_426_, v___y_427_);
v___x_429_ = lean_uint64_mix_hash(v___y_425_, v___x_428_);
v___x_430_ = lean_uint64_mix_hash(v___y_424_, v___x_429_);
v___x_431_ = 32ULL;
v___x_432_ = lean_uint64_shift_right(v___x_430_, v___x_431_);
v_fold_433_ = lean_uint64_xor(v___x_430_, v___x_432_);
v___x_434_ = 16ULL;
v___x_435_ = lean_uint64_shift_right(v_fold_433_, v___x_434_);
v___x_436_ = lean_uint64_xor(v_fold_433_, v___x_435_);
v___x_437_ = lean_uint64_to_usize(v___x_436_);
v___x_438_ = lean_usize_of_nat(v___x_422_);
v___x_439_ = ((size_t)1ULL);
v___x_440_ = lean_usize_sub(v___x_438_, v___x_439_);
v___x_441_ = lean_usize_land(v___x_437_, v___x_440_);
v___x_442_ = lean_array_uget_borrowed(v_buckets_419_, v___x_441_);
v___x_443_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(v_a_418_, v___x_442_);
return v___x_443_;
}
v___jp_444_:
{
lean_object* v_snd_446_; lean_object* v_fst_447_; lean_object* v_fst_448_; lean_object* v_snd_449_; size_t v___x_450_; size_t v___x_451_; size_t v___x_452_; uint64_t v___x_453_; uint64_t v___x_454_; 
v_snd_446_ = lean_ctor_get(v_snd_421_, 1);
v_fst_447_ = lean_ctor_get(v_snd_421_, 0);
v_fst_448_ = lean_ctor_get(v_snd_446_, 0);
v_snd_449_ = lean_ctor_get(v_snd_446_, 1);
v___x_450_ = lean_ptr_addr(v_fst_447_);
v___x_451_ = ((size_t)3ULL);
v___x_452_ = lean_usize_shift_right(v___x_450_, v___x_451_);
v___x_453_ = lean_usize_to_uint64(v___x_452_);
v___x_454_ = lean_uint64_of_nat(v_fst_448_);
if (lean_obj_tag(v_snd_449_) == 0)
{
uint64_t v___x_455_; 
v___x_455_ = 11ULL;
v___y_424_ = v___y_445_;
v___y_425_ = v___x_453_;
v___y_426_ = v___x_454_;
v___y_427_ = v___x_455_;
goto v___jp_423_;
}
else
{
lean_object* v_val_456_; size_t v___x_457_; size_t v___x_458_; uint64_t v___x_459_; uint64_t v___x_460_; uint64_t v___x_461_; 
v_val_456_ = lean_ctor_get(v_snd_449_, 0);
v___x_457_ = lean_ptr_addr(v_val_456_);
v___x_458_ = lean_usize_shift_right(v___x_457_, v___x_451_);
v___x_459_ = lean_usize_to_uint64(v___x_458_);
v___x_460_ = 13ULL;
v___x_461_ = lean_uint64_mix_hash(v___x_459_, v___x_460_);
v___y_424_ = v___y_445_;
v___y_425_ = v___x_453_;
v___y_426_ = v___x_454_;
v___y_427_ = v___x_461_;
goto v___jp_423_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___boxed(lean_object* v_m_464_, lean_object* v_a_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(v_m_464_, v_a_465_);
lean_dec_ref(v_a_465_);
lean_dec_ref(v_m_464_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached(lean_object* v_specThm_469_, lean_object* v_info_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_){
_start:
{
lean_object* v_projectionProg_x3f_484_; lean_object* v___y_485_; lean_object* v___y_486_; lean_object* v___y_487_; lean_object* v___y_488_; lean_object* v___y_489_; lean_object* v___y_490_; lean_object* v___y_491_; lean_object* v___y_492_; lean_object* v___y_493_; lean_object* v___y_494_; lean_object* v___y_495_; lean_object* v___x_581_; 
lean_inc_ref(v_specThm_469_);
v___x_581_ = l_Lean_Elab_Tactic_VCGen_isProjectionEquationSpec(v_specThm_469_, v_a_478_, v_a_479_, v_a_480_, v_a_481_);
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v_a_582_; uint8_t v___x_583_; 
v_a_582_ = lean_ctor_get(v___x_581_, 0);
lean_inc(v_a_582_);
lean_dec_ref_known(v___x_581_, 1);
v___x_583_ = lean_unbox(v_a_582_);
lean_dec(v_a_582_);
if (v___x_583_ == 0)
{
lean_object* v___x_584_; 
v___x_584_ = lean_box(0);
v_projectionProg_x3f_484_ = v___x_584_;
v___y_485_ = v_a_471_;
v___y_486_ = v_a_472_;
v___y_487_ = v_a_473_;
v___y_488_ = v_a_474_;
v___y_489_ = v_a_475_;
v___y_490_ = v_a_476_;
v___y_491_ = v_a_477_;
v___y_492_ = v_a_478_;
v___y_493_ = v_a_479_;
v___y_494_ = v_a_480_;
v___y_495_ = v_a_481_;
goto v___jp_483_;
}
else
{
lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_585_ = l_Lean_Elab_Tactic_VCGen_WPApp_prog(v_info_470_);
v___x_586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
v_projectionProg_x3f_484_ = v___x_586_;
v___y_485_ = v_a_471_;
v___y_486_ = v_a_472_;
v___y_487_ = v_a_473_;
v___y_488_ = v_a_474_;
v___y_489_ = v_a_475_;
v___y_490_ = v_a_476_;
v___y_491_ = v_a_477_;
v___y_492_ = v_a_478_;
v___y_493_ = v_a_479_;
v___y_494_ = v_a_480_;
v___y_495_ = v_a_481_;
goto v___jp_483_;
}
}
else
{
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_594_; 
lean_dec_ref(v_info_470_);
lean_dec_ref(v_specThm_469_);
v_a_587_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_594_ == 0)
{
v___x_589_ = v___x_581_;
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v___x_581_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_592_; 
if (v_isShared_590_ == 0)
{
v___x_592_ = v___x_589_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v_a_587_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
}
v___jp_483_:
{
lean_object* v_proof_496_; lean_object* v_excessArgs_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v_specBackwardRuleCache_505_; lean_object* v___x_506_; 
v_proof_496_ = lean_ctor_get(v_specThm_469_, 1);
v_excessArgs_497_ = lean_ctor_get(v_info_470_, 3);
v___x_498_ = l_Lean_Elab_Tactic_VCGen_SpecAttr_SpecProof_key(v_proof_496_);
v___x_499_ = l_Lean_Elab_Tactic_VCGen_WPApp_instWP(v_info_470_);
v___x_500_ = lean_array_get_size(v_excessArgs_497_);
v___x_501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_501_, 0, v___x_500_);
lean_ctor_set(v___x_501_, 1, v_projectionProg_x3f_484_);
v___x_502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_502_, 0, v___x_499_);
lean_ctor_set(v___x_502_, 1, v___x_501_);
v___x_503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_503_, 0, v___x_498_);
lean_ctor_set(v___x_503_, 1, v___x_502_);
v___x_504_ = lean_st_ref_get(v___y_486_);
v_specBackwardRuleCache_505_ = lean_ctor_get(v___x_504_, 0);
lean_inc_ref(v_specBackwardRuleCache_505_);
lean_dec(v___x_504_);
v___x_506_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(v_specBackwardRuleCache_505_, v___x_503_);
lean_dec_ref(v_specBackwardRuleCache_505_);
if (lean_obj_tag(v___x_506_) == 1)
{
lean_object* v___x_507_; 
lean_dec_ref_known(v___x_503_, 2);
lean_dec_ref(v_info_470_);
lean_dec_ref(v_specThm_469_);
v___x_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_507_, 0, v___x_506_);
return v___x_507_;
}
else
{
lean_object* v___x_508_; lean_object* v___f_509_; uint8_t v___x_510_; lean_object* v___x_511_; 
lean_dec(v___x_506_);
v___x_508_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___closed__0));
v___f_509_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___lam__0___boxed), 15, 3);
lean_closure_set(v___f_509_, 0, v_specThm_469_);
lean_closure_set(v___f_509_, 1, v_info_470_);
lean_closure_set(v___f_509_, 2, v___x_508_);
v___x_510_ = 0;
v___x_511_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(v___f_509_, v___x_510_, v___y_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_572_; 
v_a_512_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_572_ == 0)
{
v___x_514_ = v___x_511_;
v_isShared_515_ = v_isSharedCheck_572_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v___x_511_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_572_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
if (lean_obj_tag(v_a_512_) == 0)
{
lean_object* v___x_516_; lean_object* v___x_518_; 
lean_dec_ref_known(v___x_503_, 2);
v___x_516_ = lean_box(0);
if (v_isShared_515_ == 0)
{
lean_ctor_set(v___x_514_, 0, v___x_516_);
v___x_518_ = v___x_514_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v___x_516_);
v___x_518_ = v_reuseFailAlloc_519_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
return v___x_518_;
}
}
else
{
lean_object* v_val_520_; 
v_val_520_ = lean_ctor_get(v_a_512_, 0);
lean_inc(v_val_520_);
lean_dec_ref_known(v_a_512_, 1);
if (lean_obj_tag(v_val_520_) == 1)
{
lean_object* v_val_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_567_; 
lean_del_object(v___x_514_);
v_val_521_ = lean_ctor_get(v_val_520_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v_val_520_);
if (v_isSharedCheck_567_ == 0)
{
v___x_523_ = v_val_520_;
v_isShared_524_ = v_isSharedCheck_567_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_val_521_);
lean_dec(v_val_520_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_567_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_525_; 
v___x_525_ = l_Lean_Meta_Sym_BackwardRule_shareCommon(v_val_521_, v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_);
if (lean_obj_tag(v___x_525_) == 0)
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_558_; 
v_a_526_ = lean_ctor_get(v___x_525_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_558_ == 0)
{
v___x_528_ = v___x_525_;
v_isShared_529_ = v_isSharedCheck_558_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_525_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_558_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
lean_inc(v_a_526_);
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 0, v_a_526_);
v___x_531_ = v___x_523_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_a_526_);
v___x_531_ = v_reuseFailAlloc_557_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
lean_object* v___x_532_; lean_object* v_specBackwardRuleCache_533_; lean_object* v_splitBackwardRuleCache_534_; lean_object* v_latticeBackwardRuleCache_535_; lean_object* v_frameBackwardRuleCache_536_; lean_object* v_rintroBackwardRuleCache_537_; lean_object* v_frameDB_538_; lean_object* v_invariants_539_; lean_object* v_vcs_540_; lean_object* v_simpState_541_; lean_object* v_fuel_542_; lean_object* v_inlineHandledInvariants_543_; lean_object* v_pendingJoinPoints_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_556_; 
v___x_532_ = lean_st_ref_take(v___y_486_);
v_specBackwardRuleCache_533_ = lean_ctor_get(v___x_532_, 0);
v_splitBackwardRuleCache_534_ = lean_ctor_get(v___x_532_, 1);
v_latticeBackwardRuleCache_535_ = lean_ctor_get(v___x_532_, 2);
v_frameBackwardRuleCache_536_ = lean_ctor_get(v___x_532_, 3);
v_rintroBackwardRuleCache_537_ = lean_ctor_get(v___x_532_, 4);
v_frameDB_538_ = lean_ctor_get(v___x_532_, 5);
v_invariants_539_ = lean_ctor_get(v___x_532_, 6);
v_vcs_540_ = lean_ctor_get(v___x_532_, 7);
v_simpState_541_ = lean_ctor_get(v___x_532_, 8);
v_fuel_542_ = lean_ctor_get(v___x_532_, 9);
v_inlineHandledInvariants_543_ = lean_ctor_get(v___x_532_, 10);
v_pendingJoinPoints_544_ = lean_ctor_get(v___x_532_, 11);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_556_ == 0)
{
v___x_546_ = v___x_532_;
v_isShared_547_ = v_isSharedCheck_556_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_pendingJoinPoints_544_);
lean_inc(v_inlineHandledInvariants_543_);
lean_inc(v_fuel_542_);
lean_inc(v_simpState_541_);
lean_inc(v_vcs_540_);
lean_inc(v_invariants_539_);
lean_inc(v_frameDB_538_);
lean_inc(v_rintroBackwardRuleCache_537_);
lean_inc(v_frameBackwardRuleCache_536_);
lean_inc(v_latticeBackwardRuleCache_535_);
lean_inc(v_splitBackwardRuleCache_534_);
lean_inc(v_specBackwardRuleCache_533_);
lean_dec(v___x_532_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_556_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_548_; lean_object* v___x_550_; 
v___x_548_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(v_specBackwardRuleCache_533_, v___x_503_, v_a_526_);
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 0, v___x_548_);
v___x_550_ = v___x_546_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v___x_548_);
lean_ctor_set(v_reuseFailAlloc_555_, 1, v_splitBackwardRuleCache_534_);
lean_ctor_set(v_reuseFailAlloc_555_, 2, v_latticeBackwardRuleCache_535_);
lean_ctor_set(v_reuseFailAlloc_555_, 3, v_frameBackwardRuleCache_536_);
lean_ctor_set(v_reuseFailAlloc_555_, 4, v_rintroBackwardRuleCache_537_);
lean_ctor_set(v_reuseFailAlloc_555_, 5, v_frameDB_538_);
lean_ctor_set(v_reuseFailAlloc_555_, 6, v_invariants_539_);
lean_ctor_set(v_reuseFailAlloc_555_, 7, v_vcs_540_);
lean_ctor_set(v_reuseFailAlloc_555_, 8, v_simpState_541_);
lean_ctor_set(v_reuseFailAlloc_555_, 9, v_fuel_542_);
lean_ctor_set(v_reuseFailAlloc_555_, 10, v_inlineHandledInvariants_543_);
lean_ctor_set(v_reuseFailAlloc_555_, 11, v_pendingJoinPoints_544_);
v___x_550_ = v_reuseFailAlloc_555_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
lean_object* v___x_551_; lean_object* v___x_553_; 
v___x_551_ = lean_st_ref_put(v___y_486_, v___x_550_);
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 0, v___x_531_);
v___x_553_ = v___x_528_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_531_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
}
}
}
else
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_566_; 
lean_del_object(v___x_523_);
lean_dec_ref_known(v___x_503_, 2);
v_a_559_ = lean_ctor_get(v___x_525_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_566_ == 0)
{
v___x_561_ = v___x_525_;
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_525_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_564_; 
if (v_isShared_562_ == 0)
{
v___x_564_ = v___x_561_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_a_559_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
}
else
{
lean_object* v___x_568_; lean_object* v___x_570_; 
lean_dec(v_val_520_);
lean_dec_ref_known(v___x_503_, 2);
v___x_568_ = lean_box(0);
if (v_isShared_515_ == 0)
{
lean_ctor_set(v___x_514_, 0, v___x_568_);
v___x_570_ = v___x_514_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v___x_568_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
}
}
else
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_580_; 
lean_dec_ref_known(v___x_503_, 2);
v_a_573_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_580_ == 0)
{
v___x_575_ = v___x_511_;
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_511_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_578_; 
if (v_isShared_576_ == 0)
{
v___x_578_ = v___x_575_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_a_573_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached___boxed(lean_object* v_specThm_595_, lean_object* v_info_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached(v_specThm_595_, v_info_596_, v_a_597_, v_a_598_, v_a_599_, v_a_600_, v_a_601_, v_a_602_, v_a_603_, v_a_604_, v_a_605_, v_a_606_, v_a_607_);
lean_dec(v_a_607_);
lean_dec_ref(v_a_606_);
lean_dec(v_a_605_);
lean_dec_ref(v_a_604_);
lean_dec(v_a_603_);
lean_dec_ref(v_a_602_);
lean_dec(v_a_601_);
lean_dec_ref(v_a_600_);
lean_dec(v_a_599_);
lean_dec(v_a_598_);
lean_dec_ref(v_a_597_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0(lean_object* v_00_u03b2_610_, lean_object* v_m_611_, lean_object* v_a_612_){
_start:
{
lean_object* v___x_613_; 
v___x_613_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(v_m_611_, v_a_612_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0___boxed(lean_object* v_00_u03b2_614_, lean_object* v_m_615_, lean_object* v_a_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0(v_00_u03b2_614_, v_m_615_, v_a_616_);
lean_dec_ref(v_a_616_);
lean_dec_ref(v_m_615_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2(lean_object* v_00_u03b2_618_, lean_object* v_m_619_, lean_object* v_a_620_, lean_object* v_b_621_){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(v_m_619_, v_a_620_, v_b_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0(lean_object* v_00_u03b2_623_, lean_object* v_a_624_, lean_object* v_x_625_){
_start:
{
lean_object* v___x_626_; 
v___x_626_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(v_a_624_, v_x_625_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___boxed(lean_object* v_00_u03b2_627_, lean_object* v_a_628_, lean_object* v_x_629_){
_start:
{
lean_object* v_res_630_; 
v_res_630_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0(v_00_u03b2_627_, v_a_628_, v_x_629_);
lean_dec(v_x_629_);
lean_dec_ref(v_a_628_);
return v_res_630_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3(lean_object* v_00_u03b2_631_, lean_object* v_a_632_, lean_object* v_x_633_){
_start:
{
uint8_t v___x_634_; 
v___x_634_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(v_a_632_, v_x_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___boxed(lean_object* v_00_u03b2_635_, lean_object* v_a_636_, lean_object* v_x_637_){
_start:
{
uint8_t v_res_638_; lean_object* v_r_639_; 
v_res_638_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3(v_00_u03b2_635_, v_a_636_, v_x_637_);
lean_dec(v_x_637_);
lean_dec_ref(v_a_636_);
v_r_639_ = lean_box(v_res_638_);
return v_r_639_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4(lean_object* v_00_u03b2_640_, lean_object* v_data_641_){
_start:
{
lean_object* v___x_642_; 
v___x_642_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4___redArg(v_data_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5(lean_object* v_00_u03b2_643_, lean_object* v_a_644_, lean_object* v_b_645_, lean_object* v_x_646_){
_start:
{
lean_object* v___x_647_; 
v___x_647_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(v_a_644_, v_b_645_, v_x_646_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_648_, lean_object* v_i_649_, lean_object* v_source_650_, lean_object* v_target_651_){
_start:
{
lean_object* v___x_652_; 
v___x_652_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__6___redArg(v_i_649_, v_source_650_, v_target_651_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__6_spec__7(lean_object* v_00_u03b2_653_, lean_object* v_x_654_, lean_object* v_x_655_){
_start:
{
lean_object* v___x_656_; 
v___x_656_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__6_spec__7___redArg(v_x_654_, v_x_655_);
return v___x_656_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0_spec__0___redArg(lean_object* v_a_657_, lean_object* v_x_658_){
_start:
{
if (lean_obj_tag(v_x_658_) == 0)
{
lean_object* v___x_659_; 
v___x_659_ = lean_box(0);
return v___x_659_;
}
else
{
lean_object* v_key_660_; lean_object* v_value_661_; lean_object* v_tail_662_; lean_object* v_fst_663_; lean_object* v_snd_664_; lean_object* v_fst_665_; lean_object* v_snd_666_; uint8_t v___x_667_; 
v_key_660_ = lean_ctor_get(v_x_658_, 0);
v_value_661_ = lean_ctor_get(v_x_658_, 1);
v_tail_662_ = lean_ctor_get(v_x_658_, 2);
v_fst_663_ = lean_ctor_get(v_key_660_, 0);
v_snd_664_ = lean_ctor_get(v_key_660_, 1);
v_fst_665_ = lean_ctor_get(v_a_657_, 0);
v_snd_666_ = lean_ctor_get(v_a_657_, 1);
v___x_667_ = lean_name_eq(v_fst_663_, v_fst_665_);
if (v___x_667_ == 0)
{
v_x_658_ = v_tail_662_;
goto _start;
}
else
{
lean_object* v_fst_669_; lean_object* v_snd_670_; lean_object* v_fst_671_; lean_object* v_snd_672_; size_t v___x_673_; size_t v___x_674_; uint8_t v___x_675_; 
v_fst_669_ = lean_ctor_get(v_snd_664_, 0);
v_snd_670_ = lean_ctor_get(v_snd_664_, 1);
v_fst_671_ = lean_ctor_get(v_snd_666_, 0);
v_snd_672_ = lean_ctor_get(v_snd_666_, 1);
v___x_673_ = lean_ptr_addr(v_fst_669_);
v___x_674_ = lean_ptr_addr(v_fst_671_);
v___x_675_ = lean_usize_dec_eq(v___x_673_, v___x_674_);
if (v___x_675_ == 0)
{
v_x_658_ = v_tail_662_;
goto _start;
}
else
{
uint8_t v___x_677_; 
v___x_677_ = lean_nat_dec_eq(v_snd_670_, v_snd_672_);
if (v___x_677_ == 0)
{
v_x_658_ = v_tail_662_;
goto _start;
}
else
{
lean_object* v___x_679_; 
lean_inc(v_value_661_);
v___x_679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_679_, 0, v_value_661_);
return v___x_679_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0_spec__0___redArg___boxed(lean_object* v_a_680_, lean_object* v_x_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0_spec__0___redArg(v_a_680_, v_x_681_);
lean_dec(v_x_681_);
lean_dec_ref(v_a_680_);
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0___redArg(lean_object* v_m_683_, lean_object* v_a_684_){
_start:
{
lean_object* v_buckets_685_; lean_object* v_fst_686_; lean_object* v_snd_687_; lean_object* v___x_688_; uint64_t v___y_690_; 
v_buckets_685_ = lean_ctor_get(v_m_683_, 1);
v_fst_686_ = lean_ctor_get(v_a_684_, 0);
v_snd_687_ = lean_ctor_get(v_a_684_, 1);
v___x_688_ = lean_array_get_size(v_buckets_685_);
if (lean_obj_tag(v_fst_686_) == 0)
{
uint64_t v___x_713_; 
v___x_713_ = 1723ULL;
v___y_690_ = v___x_713_;
goto v___jp_689_;
}
else
{
uint64_t v_hash_714_; 
v_hash_714_ = lean_ctor_get_uint64(v_fst_686_, sizeof(void*)*2);
v___y_690_ = v_hash_714_;
goto v___jp_689_;
}
v___jp_689_:
{
lean_object* v_fst_691_; lean_object* v_snd_692_; size_t v___x_693_; size_t v___x_694_; size_t v___x_695_; uint64_t v___x_696_; uint64_t v___x_697_; uint64_t v___x_698_; uint64_t v___x_699_; uint64_t v___x_700_; uint64_t v___x_701_; uint64_t v_fold_702_; uint64_t v___x_703_; uint64_t v___x_704_; uint64_t v___x_705_; size_t v___x_706_; size_t v___x_707_; size_t v___x_708_; size_t v___x_709_; size_t v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v_fst_691_ = lean_ctor_get(v_snd_687_, 0);
v_snd_692_ = lean_ctor_get(v_snd_687_, 1);
v___x_693_ = lean_ptr_addr(v_fst_691_);
v___x_694_ = ((size_t)3ULL);
v___x_695_ = lean_usize_shift_right(v___x_693_, v___x_694_);
v___x_696_ = lean_usize_to_uint64(v___x_695_);
v___x_697_ = lean_uint64_of_nat(v_snd_692_);
v___x_698_ = lean_uint64_mix_hash(v___x_696_, v___x_697_);
v___x_699_ = lean_uint64_mix_hash(v___y_690_, v___x_698_);
v___x_700_ = 32ULL;
v___x_701_ = lean_uint64_shift_right(v___x_699_, v___x_700_);
v_fold_702_ = lean_uint64_xor(v___x_699_, v___x_701_);
v___x_703_ = 16ULL;
v___x_704_ = lean_uint64_shift_right(v_fold_702_, v___x_703_);
v___x_705_ = lean_uint64_xor(v_fold_702_, v___x_704_);
v___x_706_ = lean_uint64_to_usize(v___x_705_);
v___x_707_ = lean_usize_of_nat(v___x_688_);
v___x_708_ = ((size_t)1ULL);
v___x_709_ = lean_usize_sub(v___x_707_, v___x_708_);
v___x_710_ = lean_usize_land(v___x_706_, v___x_709_);
v___x_711_ = lean_array_uget_borrowed(v_buckets_685_, v___x_710_);
v___x_712_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0_spec__0___redArg(v_a_684_, v___x_711_);
return v___x_712_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0___redArg___boxed(lean_object* v_m_715_, lean_object* v_a_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0___redArg(v_m_715_, v_a_716_);
lean_dec_ref(v_a_716_);
lean_dec_ref(v_m_715_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__4___redArg(lean_object* v_a_718_, lean_object* v_b_719_, lean_object* v_x_720_){
_start:
{
if (lean_obj_tag(v_x_720_) == 0)
{
lean_dec(v_b_719_);
lean_dec_ref(v_a_718_);
return v_x_720_;
}
else
{
lean_object* v_key_721_; lean_object* v_value_722_; lean_object* v_tail_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_746_; 
v_key_721_ = lean_ctor_get(v_x_720_, 0);
v_value_722_ = lean_ctor_get(v_x_720_, 1);
v_tail_723_ = lean_ctor_get(v_x_720_, 2);
v_isSharedCheck_746_ = !lean_is_exclusive(v_x_720_);
if (v_isSharedCheck_746_ == 0)
{
v___x_725_ = v_x_720_;
v_isShared_726_ = v_isSharedCheck_746_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_tail_723_);
lean_inc(v_value_722_);
lean_inc(v_key_721_);
lean_dec(v_x_720_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_746_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v_fst_732_; lean_object* v_snd_733_; lean_object* v_fst_734_; lean_object* v_snd_735_; uint8_t v___x_736_; 
v_fst_732_ = lean_ctor_get(v_key_721_, 0);
v_snd_733_ = lean_ctor_get(v_key_721_, 1);
v_fst_734_ = lean_ctor_get(v_a_718_, 0);
v_snd_735_ = lean_ctor_get(v_a_718_, 1);
v___x_736_ = lean_name_eq(v_fst_732_, v_fst_734_);
if (v___x_736_ == 0)
{
goto v___jp_727_;
}
else
{
lean_object* v_fst_737_; lean_object* v_snd_738_; lean_object* v_fst_739_; lean_object* v_snd_740_; size_t v___x_741_; size_t v___x_742_; uint8_t v___x_743_; 
v_fst_737_ = lean_ctor_get(v_snd_733_, 0);
v_snd_738_ = lean_ctor_get(v_snd_733_, 1);
v_fst_739_ = lean_ctor_get(v_snd_735_, 0);
v_snd_740_ = lean_ctor_get(v_snd_735_, 1);
v___x_741_ = lean_ptr_addr(v_fst_737_);
v___x_742_ = lean_ptr_addr(v_fst_739_);
v___x_743_ = lean_usize_dec_eq(v___x_741_, v___x_742_);
if (v___x_743_ == 0)
{
goto v___jp_727_;
}
else
{
uint8_t v___x_744_; 
v___x_744_ = lean_nat_dec_eq(v_snd_738_, v_snd_740_);
if (v___x_744_ == 0)
{
goto v___jp_727_;
}
else
{
lean_object* v___x_745_; 
lean_del_object(v___x_725_);
lean_dec(v_value_722_);
lean_dec(v_key_721_);
v___x_745_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_745_, 0, v_a_718_);
lean_ctor_set(v___x_745_, 1, v_b_719_);
lean_ctor_set(v___x_745_, 2, v_tail_723_);
return v___x_745_;
}
}
}
v___jp_727_:
{
lean_object* v___x_728_; lean_object* v___x_730_; 
v___x_728_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__4___redArg(v_a_718_, v_b_719_, v_tail_723_);
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 2, v___x_728_);
v___x_730_ = v___x_725_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_key_721_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v_value_722_);
lean_ctor_set(v_reuseFailAlloc_731_, 2, v___x_728_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__2___redArg(lean_object* v_a_747_, lean_object* v_x_748_){
_start:
{
if (lean_obj_tag(v_x_748_) == 0)
{
uint8_t v___x_749_; 
v___x_749_ = 0;
return v___x_749_;
}
else
{
lean_object* v_key_750_; lean_object* v_tail_751_; lean_object* v_fst_752_; lean_object* v_snd_753_; lean_object* v_fst_754_; lean_object* v_snd_755_; uint8_t v___x_756_; 
v_key_750_ = lean_ctor_get(v_x_748_, 0);
v_tail_751_ = lean_ctor_get(v_x_748_, 2);
v_fst_752_ = lean_ctor_get(v_key_750_, 0);
v_snd_753_ = lean_ctor_get(v_key_750_, 1);
v_fst_754_ = lean_ctor_get(v_a_747_, 0);
v_snd_755_ = lean_ctor_get(v_a_747_, 1);
v___x_756_ = lean_name_eq(v_fst_752_, v_fst_754_);
if (v___x_756_ == 0)
{
v_x_748_ = v_tail_751_;
goto _start;
}
else
{
lean_object* v_fst_758_; lean_object* v_snd_759_; lean_object* v_fst_760_; lean_object* v_snd_761_; size_t v___x_762_; size_t v___x_763_; uint8_t v___x_764_; 
v_fst_758_ = lean_ctor_get(v_snd_753_, 0);
v_snd_759_ = lean_ctor_get(v_snd_753_, 1);
v_fst_760_ = lean_ctor_get(v_snd_755_, 0);
v_snd_761_ = lean_ctor_get(v_snd_755_, 1);
v___x_762_ = lean_ptr_addr(v_fst_758_);
v___x_763_ = lean_ptr_addr(v_fst_760_);
v___x_764_ = lean_usize_dec_eq(v___x_762_, v___x_763_);
if (v___x_764_ == 0)
{
v_x_748_ = v_tail_751_;
goto _start;
}
else
{
uint8_t v___x_766_; 
v___x_766_ = lean_nat_dec_eq(v_snd_759_, v_snd_761_);
if (v___x_766_ == 0)
{
v_x_748_ = v_tail_751_;
goto _start;
}
else
{
return v___x_766_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__2___redArg___boxed(lean_object* v_a_768_, lean_object* v_x_769_){
_start:
{
uint8_t v_res_770_; lean_object* v_r_771_; 
v_res_770_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__2___redArg(v_a_768_, v_x_769_);
lean_dec(v_x_769_);
lean_dec_ref(v_a_768_);
v_r_771_ = lean_box(v_res_770_);
return v_r_771_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_772_, lean_object* v_x_773_){
_start:
{
if (lean_obj_tag(v_x_773_) == 0)
{
return v_x_772_;
}
else
{
lean_object* v_key_774_; lean_object* v_value_775_; lean_object* v_tail_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_813_; 
v_key_774_ = lean_ctor_get(v_x_773_, 0);
v_value_775_ = lean_ctor_get(v_x_773_, 1);
v_tail_776_ = lean_ctor_get(v_x_773_, 2);
v_isSharedCheck_813_ = !lean_is_exclusive(v_x_773_);
if (v_isSharedCheck_813_ == 0)
{
v___x_778_ = v_x_773_;
v_isShared_779_ = v_isSharedCheck_813_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_tail_776_);
lean_inc(v_value_775_);
lean_inc(v_key_774_);
lean_dec(v_x_773_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_813_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v_fst_780_; lean_object* v_snd_781_; lean_object* v___x_782_; uint64_t v___y_784_; 
v_fst_780_ = lean_ctor_get(v_key_774_, 0);
v_snd_781_ = lean_ctor_get(v_key_774_, 1);
v___x_782_ = lean_array_get_size(v_x_772_);
if (lean_obj_tag(v_fst_780_) == 0)
{
uint64_t v___x_811_; 
v___x_811_ = 1723ULL;
v___y_784_ = v___x_811_;
goto v___jp_783_;
}
else
{
uint64_t v_hash_812_; 
v_hash_812_ = lean_ctor_get_uint64(v_fst_780_, sizeof(void*)*2);
v___y_784_ = v_hash_812_;
goto v___jp_783_;
}
v___jp_783_:
{
lean_object* v_fst_785_; lean_object* v_snd_786_; size_t v___x_787_; size_t v___x_788_; size_t v___x_789_; uint64_t v___x_790_; uint64_t v___x_791_; uint64_t v___x_792_; uint64_t v___x_793_; uint64_t v___x_794_; uint64_t v___x_795_; uint64_t v_fold_796_; uint64_t v___x_797_; uint64_t v___x_798_; uint64_t v___x_799_; size_t v___x_800_; size_t v___x_801_; size_t v___x_802_; size_t v___x_803_; size_t v___x_804_; lean_object* v___x_805_; lean_object* v___x_807_; 
v_fst_785_ = lean_ctor_get(v_snd_781_, 0);
v_snd_786_ = lean_ctor_get(v_snd_781_, 1);
v___x_787_ = lean_ptr_addr(v_fst_785_);
v___x_788_ = ((size_t)3ULL);
v___x_789_ = lean_usize_shift_right(v___x_787_, v___x_788_);
v___x_790_ = lean_usize_to_uint64(v___x_789_);
v___x_791_ = lean_uint64_of_nat(v_snd_786_);
v___x_792_ = lean_uint64_mix_hash(v___x_790_, v___x_791_);
v___x_793_ = lean_uint64_mix_hash(v___y_784_, v___x_792_);
v___x_794_ = 32ULL;
v___x_795_ = lean_uint64_shift_right(v___x_793_, v___x_794_);
v_fold_796_ = lean_uint64_xor(v___x_793_, v___x_795_);
v___x_797_ = 16ULL;
v___x_798_ = lean_uint64_shift_right(v_fold_796_, v___x_797_);
v___x_799_ = lean_uint64_xor(v_fold_796_, v___x_798_);
v___x_800_ = lean_uint64_to_usize(v___x_799_);
v___x_801_ = lean_usize_of_nat(v___x_782_);
v___x_802_ = ((size_t)1ULL);
v___x_803_ = lean_usize_sub(v___x_801_, v___x_802_);
v___x_804_ = lean_usize_land(v___x_800_, v___x_803_);
v___x_805_ = lean_array_uget_borrowed(v_x_772_, v___x_804_);
lean_inc(v___x_805_);
if (v_isShared_779_ == 0)
{
lean_ctor_set(v___x_778_, 2, v___x_805_);
v___x_807_ = v___x_778_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_key_774_);
lean_ctor_set(v_reuseFailAlloc_810_, 1, v_value_775_);
lean_ctor_set(v_reuseFailAlloc_810_, 2, v___x_805_);
v___x_807_ = v_reuseFailAlloc_810_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
lean_object* v___x_808_; 
v___x_808_ = lean_array_uset(v_x_772_, v___x_804_, v___x_807_);
v_x_772_ = v___x_808_;
v_x_773_ = v_tail_776_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__3_spec__4___redArg(lean_object* v_i_814_, lean_object* v_source_815_, lean_object* v_target_816_){
_start:
{
lean_object* v___x_817_; uint8_t v___x_818_; 
v___x_817_ = lean_array_get_size(v_source_815_);
v___x_818_ = lean_nat_dec_lt(v_i_814_, v___x_817_);
if (v___x_818_ == 0)
{
lean_dec_ref(v_source_815_);
lean_dec(v_i_814_);
return v_target_816_;
}
else
{
lean_object* v_es_819_; lean_object* v___x_820_; lean_object* v_source_821_; lean_object* v_target_822_; lean_object* v___x_823_; lean_object* v___x_824_; 
v_es_819_ = lean_array_fget(v_source_815_, v_i_814_);
v___x_820_ = lean_box(0);
v_source_821_ = lean_array_fset(v_source_815_, v_i_814_, v___x_820_);
v_target_822_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__3_spec__4_spec__5___redArg(v_target_816_, v_es_819_);
v___x_823_ = lean_unsigned_to_nat(1u);
v___x_824_ = lean_nat_add(v_i_814_, v___x_823_);
lean_dec(v_i_814_);
v_i_814_ = v___x_824_;
v_source_815_ = v_source_821_;
v_target_816_ = v_target_822_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__3___redArg(lean_object* v_data_826_){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v_nbuckets_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_827_ = lean_array_get_size(v_data_826_);
v___x_828_ = lean_unsigned_to_nat(2u);
v_nbuckets_829_ = lean_nat_mul(v___x_827_, v___x_828_);
v___x_830_ = lean_unsigned_to_nat(0u);
v___x_831_ = lean_box(0);
v___x_832_ = lean_mk_array(v_nbuckets_829_, v___x_831_);
v___x_833_ = lean_array_propagate_mark(v_data_826_, v___x_832_);
v___x_834_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__3_spec__4___redArg(v___x_830_, v_data_826_, v___x_833_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1___redArg(lean_object* v_m_835_, lean_object* v_a_836_, lean_object* v_b_837_){
_start:
{
lean_object* v_size_838_; lean_object* v_buckets_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_896_; 
v_size_838_ = lean_ctor_get(v_m_835_, 0);
v_buckets_839_ = lean_ctor_get(v_m_835_, 1);
v_isSharedCheck_896_ = !lean_is_exclusive(v_m_835_);
if (v_isSharedCheck_896_ == 0)
{
v___x_841_ = v_m_835_;
v_isShared_842_ = v_isSharedCheck_896_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_buckets_839_);
lean_inc(v_size_838_);
lean_dec(v_m_835_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_896_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v_fst_843_; lean_object* v_snd_844_; lean_object* v___x_845_; uint64_t v___y_847_; 
v_fst_843_ = lean_ctor_get(v_a_836_, 0);
v_snd_844_ = lean_ctor_get(v_a_836_, 1);
v___x_845_ = lean_array_get_size(v_buckets_839_);
if (lean_obj_tag(v_fst_843_) == 0)
{
uint64_t v___x_894_; 
v___x_894_ = 1723ULL;
v___y_847_ = v___x_894_;
goto v___jp_846_;
}
else
{
uint64_t v_hash_895_; 
v_hash_895_ = lean_ctor_get_uint64(v_fst_843_, sizeof(void*)*2);
v___y_847_ = v_hash_895_;
goto v___jp_846_;
}
v___jp_846_:
{
lean_object* v_fst_848_; lean_object* v_snd_849_; size_t v___x_850_; size_t v___x_851_; size_t v___x_852_; uint64_t v___x_853_; uint64_t v___x_854_; uint64_t v___x_855_; uint64_t v___x_856_; uint64_t v___x_857_; uint64_t v___x_858_; uint64_t v_fold_859_; uint64_t v___x_860_; uint64_t v___x_861_; uint64_t v___x_862_; size_t v___x_863_; size_t v___x_864_; size_t v___x_865_; size_t v___x_866_; size_t v___x_867_; lean_object* v_bkt_868_; uint8_t v___x_869_; 
v_fst_848_ = lean_ctor_get(v_snd_844_, 0);
v_snd_849_ = lean_ctor_get(v_snd_844_, 1);
v___x_850_ = lean_ptr_addr(v_fst_848_);
v___x_851_ = ((size_t)3ULL);
v___x_852_ = lean_usize_shift_right(v___x_850_, v___x_851_);
v___x_853_ = lean_usize_to_uint64(v___x_852_);
v___x_854_ = lean_uint64_of_nat(v_snd_849_);
v___x_855_ = lean_uint64_mix_hash(v___x_853_, v___x_854_);
v___x_856_ = lean_uint64_mix_hash(v___y_847_, v___x_855_);
v___x_857_ = 32ULL;
v___x_858_ = lean_uint64_shift_right(v___x_856_, v___x_857_);
v_fold_859_ = lean_uint64_xor(v___x_856_, v___x_858_);
v___x_860_ = 16ULL;
v___x_861_ = lean_uint64_shift_right(v_fold_859_, v___x_860_);
v___x_862_ = lean_uint64_xor(v_fold_859_, v___x_861_);
v___x_863_ = lean_uint64_to_usize(v___x_862_);
v___x_864_ = lean_usize_of_nat(v___x_845_);
v___x_865_ = ((size_t)1ULL);
v___x_866_ = lean_usize_sub(v___x_864_, v___x_865_);
v___x_867_ = lean_usize_land(v___x_863_, v___x_866_);
v_bkt_868_ = lean_array_uget_borrowed(v_buckets_839_, v___x_867_);
v___x_869_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__2___redArg(v_a_836_, v_bkt_868_);
if (v___x_869_ == 0)
{
lean_object* v___x_870_; lean_object* v_size_x27_871_; lean_object* v___x_872_; lean_object* v_buckets_x27_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; uint8_t v___x_879_; 
v___x_870_ = lean_unsigned_to_nat(1u);
v_size_x27_871_ = lean_nat_add(v_size_838_, v___x_870_);
lean_dec(v_size_838_);
lean_inc(v_bkt_868_);
v___x_872_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_872_, 0, v_a_836_);
lean_ctor_set(v___x_872_, 1, v_b_837_);
lean_ctor_set(v___x_872_, 2, v_bkt_868_);
v_buckets_x27_873_ = lean_array_uset(v_buckets_839_, v___x_867_, v___x_872_);
v___x_874_ = lean_unsigned_to_nat(4u);
v___x_875_ = lean_nat_mul(v_size_x27_871_, v___x_874_);
v___x_876_ = lean_unsigned_to_nat(3u);
v___x_877_ = lean_nat_div(v___x_875_, v___x_876_);
lean_dec(v___x_875_);
v___x_878_ = lean_array_get_size(v_buckets_x27_873_);
v___x_879_ = lean_nat_dec_le(v___x_877_, v___x_878_);
lean_dec(v___x_877_);
if (v___x_879_ == 0)
{
lean_object* v_val_880_; lean_object* v___x_882_; 
v_val_880_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__3___redArg(v_buckets_x27_873_);
if (v_isShared_842_ == 0)
{
lean_ctor_set(v___x_841_, 1, v_val_880_);
lean_ctor_set(v___x_841_, 0, v_size_x27_871_);
v___x_882_ = v___x_841_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_size_x27_871_);
lean_ctor_set(v_reuseFailAlloc_883_, 1, v_val_880_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
else
{
lean_object* v___x_885_; 
if (v_isShared_842_ == 0)
{
lean_ctor_set(v___x_841_, 1, v_buckets_x27_873_);
lean_ctor_set(v___x_841_, 0, v_size_x27_871_);
v___x_885_ = v___x_841_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_size_x27_871_);
lean_ctor_set(v_reuseFailAlloc_886_, 1, v_buckets_x27_873_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
else
{
lean_object* v___x_887_; lean_object* v_buckets_x27_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_892_; 
lean_inc(v_bkt_868_);
v___x_887_ = lean_box(0);
v_buckets_x27_888_ = lean_array_uset(v_buckets_839_, v___x_867_, v___x_887_);
v___x_889_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__4___redArg(v_a_836_, v_b_837_, v_bkt_868_);
v___x_890_ = lean_array_uset(v_buckets_x27_888_, v___x_867_, v___x_889_);
if (v_isShared_842_ == 0)
{
lean_ctor_set(v___x_841_, 1, v___x_890_);
v___x_892_ = v___x_841_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_size_838_);
lean_ctor_set(v_reuseFailAlloc_893_, 1, v___x_890_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
return v___x_892_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg(lean_object* v_splitInfo_911_, lean_object* v_info_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_){
_start:
{
lean_object* v_cacheKey_922_; lean_object* v___y_923_; lean_object* v___y_924_; lean_object* v___y_925_; lean_object* v___y_926_; lean_object* v___y_927_; lean_object* v___y_928_; lean_object* v___y_929_; 
switch(lean_obj_tag(v_splitInfo_911_))
{
case 0:
{
lean_object* v___x_979_; 
v___x_979_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__1));
v_cacheKey_922_ = v___x_979_;
v___y_923_ = v_a_913_;
v___y_924_ = v_a_914_;
v___y_925_ = v_a_915_;
v___y_926_ = v_a_916_;
v___y_927_ = v_a_917_;
v___y_928_ = v_a_918_;
v___y_929_ = v_a_919_;
goto v___jp_921_;
}
case 1:
{
lean_object* v___x_980_; 
v___x_980_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__3));
v_cacheKey_922_ = v___x_980_;
v___y_923_ = v_a_913_;
v___y_924_ = v_a_914_;
v___y_925_ = v_a_915_;
v___y_926_ = v_a_916_;
v___y_927_ = v_a_917_;
v___y_928_ = v_a_918_;
v___y_929_ = v_a_919_;
goto v___jp_921_;
}
case 2:
{
lean_object* v_e_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v_e_981_ = lean_ctor_get(v_splitInfo_911_, 0);
v___x_982_ = lean_unsigned_to_nat(1u);
v___x_983_ = l_Lean_Expr_getAppNumArgs(v_e_981_);
v___x_984_ = lean_nat_sub(v___x_983_, v___x_982_);
lean_dec(v___x_983_);
v___x_985_ = lean_nat_sub(v___x_984_, v___x_982_);
lean_dec(v___x_984_);
v___x_986_ = l_Lean_Expr_getRevArg_x21(v_e_981_, v___x_985_);
v___x_987_ = l_Lean_Meta_getBoolDecision_x3f(v___x_986_, v_a_916_, v_a_917_, v_a_918_, v_a_919_);
if (lean_obj_tag(v___x_987_) == 0)
{
lean_object* v_a_988_; 
v_a_988_ = lean_ctor_get(v___x_987_, 0);
lean_inc(v_a_988_);
lean_dec_ref_known(v___x_987_, 1);
if (lean_obj_tag(v_a_988_) == 0)
{
lean_object* v___x_989_; 
v___x_989_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__5));
v_cacheKey_922_ = v___x_989_;
v___y_923_ = v_a_913_;
v___y_924_ = v_a_914_;
v___y_925_ = v_a_915_;
v___y_926_ = v_a_916_;
v___y_927_ = v_a_917_;
v___y_928_ = v_a_918_;
v___y_929_ = v_a_919_;
goto v___jp_921_;
}
else
{
lean_object* v___x_990_; 
lean_dec_ref_known(v_a_988_, 1);
v___x_990_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___closed__8));
v_cacheKey_922_ = v___x_990_;
v___y_923_ = v_a_913_;
v___y_924_ = v_a_914_;
v___y_925_ = v_a_915_;
v___y_926_ = v_a_916_;
v___y_927_ = v_a_917_;
v___y_928_ = v_a_918_;
v___y_929_ = v_a_919_;
goto v___jp_921_;
}
}
else
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
lean_dec_ref_known(v_splitInfo_911_, 1);
lean_dec_ref(v_info_912_);
v_a_991_ = lean_ctor_get(v___x_987_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_987_);
if (v_isSharedCheck_998_ == 0)
{
v___x_993_ = v___x_987_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_987_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_a_991_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
}
default: 
{
lean_object* v_matcherApp_999_; lean_object* v_matcherName_1000_; 
v_matcherApp_999_ = lean_ctor_get(v_splitInfo_911_, 0);
v_matcherName_1000_ = lean_ctor_get(v_matcherApp_999_, 1);
lean_inc(v_matcherName_1000_);
v_cacheKey_922_ = v_matcherName_1000_;
v___y_923_ = v_a_913_;
v___y_924_ = v_a_914_;
v___y_925_ = v_a_915_;
v___y_926_ = v_a_916_;
v___y_927_ = v_a_917_;
v___y_928_ = v_a_918_;
v___y_929_ = v_a_919_;
goto v___jp_921_;
}
}
v___jp_921_:
{
lean_object* v_excessArgs_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v_key_934_; lean_object* v___x_935_; lean_object* v_splitBackwardRuleCache_936_; lean_object* v___x_937_; 
v_excessArgs_930_ = lean_ctor_get(v_info_912_, 3);
v___x_931_ = l_Lean_Elab_Tactic_VCGen_WPApp_instWP(v_info_912_);
v___x_932_ = lean_array_get_size(v_excessArgs_930_);
v___x_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_931_);
lean_ctor_set(v___x_933_, 1, v___x_932_);
v_key_934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_934_, 0, v_cacheKey_922_);
lean_ctor_set(v_key_934_, 1, v___x_933_);
v___x_935_ = lean_st_ref_get(v___y_923_);
v_splitBackwardRuleCache_936_ = lean_ctor_get(v___x_935_, 1);
lean_inc_ref(v_splitBackwardRuleCache_936_);
lean_dec(v___x_935_);
v___x_937_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0___redArg(v_splitBackwardRuleCache_936_, v_key_934_);
lean_dec_ref(v_splitBackwardRuleCache_936_);
if (lean_obj_tag(v___x_937_) == 1)
{
lean_object* v_val_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_945_; 
lean_dec_ref_known(v_key_934_, 2);
lean_dec_ref(v_info_912_);
lean_dec_ref(v_splitInfo_911_);
v_val_938_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_945_ == 0)
{
v___x_940_ = v___x_937_;
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_val_938_);
lean_dec(v___x_937_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_943_; 
if (v_isShared_941_ == 0)
{
lean_ctor_set_tag(v___x_940_, 0);
v___x_943_ = v___x_940_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_val_938_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
else
{
lean_object* v___x_946_; 
lean_dec(v___x_937_);
v___x_946_ = l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplit(v_splitInfo_911_, v_info_912_, v___y_926_, v___y_927_, v___y_928_, v___y_929_);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v_a_947_; lean_object* v___x_948_; 
v_a_947_ = lean_ctor_get(v___x_946_, 0);
lean_inc(v_a_947_);
lean_dec_ref_known(v___x_946_, 1);
v___x_948_ = l_Lean_Meta_Sym_BackwardRule_shareCommon(v_a_947_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_978_; 
v_a_949_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_978_ == 0)
{
v___x_951_ = v___x_948_;
v_isShared_952_ = v_isSharedCheck_978_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_948_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_978_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_953_; lean_object* v_specBackwardRuleCache_954_; lean_object* v_splitBackwardRuleCache_955_; lean_object* v_latticeBackwardRuleCache_956_; lean_object* v_frameBackwardRuleCache_957_; lean_object* v_rintroBackwardRuleCache_958_; lean_object* v_frameDB_959_; lean_object* v_invariants_960_; lean_object* v_vcs_961_; lean_object* v_simpState_962_; lean_object* v_fuel_963_; lean_object* v_inlineHandledInvariants_964_; lean_object* v_pendingJoinPoints_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_977_; 
v___x_953_ = lean_st_ref_take(v___y_923_);
v_specBackwardRuleCache_954_ = lean_ctor_get(v___x_953_, 0);
v_splitBackwardRuleCache_955_ = lean_ctor_get(v___x_953_, 1);
v_latticeBackwardRuleCache_956_ = lean_ctor_get(v___x_953_, 2);
v_frameBackwardRuleCache_957_ = lean_ctor_get(v___x_953_, 3);
v_rintroBackwardRuleCache_958_ = lean_ctor_get(v___x_953_, 4);
v_frameDB_959_ = lean_ctor_get(v___x_953_, 5);
v_invariants_960_ = lean_ctor_get(v___x_953_, 6);
v_vcs_961_ = lean_ctor_get(v___x_953_, 7);
v_simpState_962_ = lean_ctor_get(v___x_953_, 8);
v_fuel_963_ = lean_ctor_get(v___x_953_, 9);
v_inlineHandledInvariants_964_ = lean_ctor_get(v___x_953_, 10);
v_pendingJoinPoints_965_ = lean_ctor_get(v___x_953_, 11);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_977_ == 0)
{
v___x_967_ = v___x_953_;
v_isShared_968_ = v_isSharedCheck_977_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_pendingJoinPoints_965_);
lean_inc(v_inlineHandledInvariants_964_);
lean_inc(v_fuel_963_);
lean_inc(v_simpState_962_);
lean_inc(v_vcs_961_);
lean_inc(v_invariants_960_);
lean_inc(v_frameDB_959_);
lean_inc(v_rintroBackwardRuleCache_958_);
lean_inc(v_frameBackwardRuleCache_957_);
lean_inc(v_latticeBackwardRuleCache_956_);
lean_inc(v_splitBackwardRuleCache_955_);
lean_inc(v_specBackwardRuleCache_954_);
lean_dec(v___x_953_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_977_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_969_; lean_object* v___x_971_; 
lean_inc(v_a_949_);
v___x_969_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1___redArg(v_splitBackwardRuleCache_955_, v_key_934_, v_a_949_);
if (v_isShared_968_ == 0)
{
lean_ctor_set(v___x_967_, 1, v___x_969_);
v___x_971_ = v___x_967_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_specBackwardRuleCache_954_);
lean_ctor_set(v_reuseFailAlloc_976_, 1, v___x_969_);
lean_ctor_set(v_reuseFailAlloc_976_, 2, v_latticeBackwardRuleCache_956_);
lean_ctor_set(v_reuseFailAlloc_976_, 3, v_frameBackwardRuleCache_957_);
lean_ctor_set(v_reuseFailAlloc_976_, 4, v_rintroBackwardRuleCache_958_);
lean_ctor_set(v_reuseFailAlloc_976_, 5, v_frameDB_959_);
lean_ctor_set(v_reuseFailAlloc_976_, 6, v_invariants_960_);
lean_ctor_set(v_reuseFailAlloc_976_, 7, v_vcs_961_);
lean_ctor_set(v_reuseFailAlloc_976_, 8, v_simpState_962_);
lean_ctor_set(v_reuseFailAlloc_976_, 9, v_fuel_963_);
lean_ctor_set(v_reuseFailAlloc_976_, 10, v_inlineHandledInvariants_964_);
lean_ctor_set(v_reuseFailAlloc_976_, 11, v_pendingJoinPoints_965_);
v___x_971_ = v_reuseFailAlloc_976_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
lean_object* v___x_972_; lean_object* v___x_974_; 
v___x_972_ = lean_st_ref_put(v___y_923_, v___x_971_);
if (v_isShared_952_ == 0)
{
v___x_974_ = v___x_951_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v_a_949_);
v___x_974_ = v_reuseFailAlloc_975_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
return v___x_974_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_key_934_, 2);
return v___x_948_;
}
}
else
{
lean_dec_ref_known(v_key_934_, 2);
return v___x_946_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg___boxed(lean_object* v_splitInfo_1001_, lean_object* v_info_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg(v_splitInfo_1001_, v_info_1002_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_, v_a_1007_, v_a_1008_, v_a_1009_);
lean_dec(v_a_1009_);
lean_dec_ref(v_a_1008_);
lean_dec(v_a_1007_);
lean_dec_ref(v_a_1006_);
lean_dec(v_a_1005_);
lean_dec_ref(v_a_1004_);
lean_dec(v_a_1003_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached(lean_object* v_splitInfo_1012_, lean_object* v_info_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_){
_start:
{
lean_object* v___x_1026_; 
v___x_1026_ = l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___redArg(v_splitInfo_1012_, v_info_1013_, v_a_1015_, v_a_1019_, v_a_1020_, v_a_1021_, v_a_1022_, v_a_1023_, v_a_1024_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached___boxed(lean_object* v_splitInfo_1027_, lean_object* v_info_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached(v_splitInfo_1027_, v_info_1028_, v_a_1029_, v_a_1030_, v_a_1031_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
lean_dec(v_a_1039_);
lean_dec_ref(v_a_1038_);
lean_dec(v_a_1037_);
lean_dec_ref(v_a_1036_);
lean_dec(v_a_1035_);
lean_dec_ref(v_a_1034_);
lean_dec(v_a_1033_);
lean_dec_ref(v_a_1032_);
lean_dec(v_a_1031_);
lean_dec(v_a_1030_);
lean_dec_ref(v_a_1029_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0(lean_object* v_00_u03b2_1042_, lean_object* v_m_1043_, lean_object* v_a_1044_){
_start:
{
lean_object* v___x_1045_; 
v___x_1045_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0___redArg(v_m_1043_, v_a_1044_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0___boxed(lean_object* v_00_u03b2_1046_, lean_object* v_m_1047_, lean_object* v_a_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0(v_00_u03b2_1046_, v_m_1047_, v_a_1048_);
lean_dec_ref(v_a_1048_);
lean_dec_ref(v_m_1047_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1(lean_object* v_00_u03b2_1050_, lean_object* v_m_1051_, lean_object* v_a_1052_, lean_object* v_b_1053_){
_start:
{
lean_object* v___x_1054_; 
v___x_1054_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1___redArg(v_m_1051_, v_a_1052_, v_b_1053_);
return v___x_1054_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0_spec__0(lean_object* v_00_u03b2_1055_, lean_object* v_a_1056_, lean_object* v_x_1057_){
_start:
{
lean_object* v___x_1058_; 
v___x_1058_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0_spec__0___redArg(v_a_1056_, v_x_1057_);
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1059_, lean_object* v_a_1060_, lean_object* v_x_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__0_spec__0(v_00_u03b2_1059_, v_a_1060_, v_x_1061_);
lean_dec(v_x_1061_);
lean_dec_ref(v_a_1060_);
return v_res_1062_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__2(lean_object* v_00_u03b2_1063_, lean_object* v_a_1064_, lean_object* v_x_1065_){
_start:
{
uint8_t v___x_1066_; 
v___x_1066_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__2___redArg(v_a_1064_, v_x_1065_);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1067_, lean_object* v_a_1068_, lean_object* v_x_1069_){
_start:
{
uint8_t v_res_1070_; lean_object* v_r_1071_; 
v_res_1070_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__2(v_00_u03b2_1067_, v_a_1068_, v_x_1069_);
lean_dec(v_x_1069_);
lean_dec_ref(v_a_1068_);
v_r_1071_ = lean_box(v_res_1070_);
return v_r_1071_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__3(lean_object* v_00_u03b2_1072_, lean_object* v_data_1073_){
_start:
{
lean_object* v___x_1074_; 
v___x_1074_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__3___redArg(v_data_1073_);
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__4(lean_object* v_00_u03b2_1075_, lean_object* v_a_1076_, lean_object* v_b_1077_, lean_object* v_x_1078_){
_start:
{
lean_object* v___x_1079_; 
v___x_1079_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__4___redArg(v_a_1076_, v_b_1077_, v_x_1078_);
return v___x_1079_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_1080_, lean_object* v_i_1081_, lean_object* v_source_1082_, lean_object* v_target_1083_){
_start:
{
lean_object* v___x_1084_; 
v___x_1084_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__3_spec__4___redArg(v_i_1081_, v_source_1082_, v_target_1083_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_1085_, lean_object* v_x_1086_, lean_object* v_x_1087_){
_start:
{
lean_object* v___x_1088_; 
v___x_1088_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForSplitCached_spec__1_spec__3_spec__4_spec__5___redArg(v_x_1086_, v_x_1087_);
return v___x_1088_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2___redArg(lean_object* v_a_1089_, lean_object* v_x_1090_){
_start:
{
if (lean_obj_tag(v_x_1090_) == 0)
{
uint8_t v___x_1091_; 
v___x_1091_ = 0;
return v___x_1091_;
}
else
{
lean_object* v_key_1092_; lean_object* v_tail_1093_; lean_object* v_fst_1094_; lean_object* v_snd_1095_; lean_object* v_fst_1096_; lean_object* v_snd_1097_; size_t v___x_1098_; size_t v___x_1099_; uint8_t v___x_1100_; 
v_key_1092_ = lean_ctor_get(v_x_1090_, 0);
v_tail_1093_ = lean_ctor_get(v_x_1090_, 2);
v_fst_1094_ = lean_ctor_get(v_key_1092_, 0);
v_snd_1095_ = lean_ctor_get(v_key_1092_, 1);
v_fst_1096_ = lean_ctor_get(v_a_1089_, 0);
v_snd_1097_ = lean_ctor_get(v_a_1089_, 1);
v___x_1098_ = lean_ptr_addr(v_fst_1094_);
v___x_1099_ = lean_ptr_addr(v_fst_1096_);
v___x_1100_ = lean_usize_dec_eq(v___x_1098_, v___x_1099_);
if (v___x_1100_ == 0)
{
v_x_1090_ = v_tail_1093_;
goto _start;
}
else
{
uint8_t v___x_1102_; 
v___x_1102_ = lean_nat_dec_eq(v_snd_1095_, v_snd_1097_);
if (v___x_1102_ == 0)
{
v_x_1090_ = v_tail_1093_;
goto _start;
}
else
{
return v___x_1102_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2___redArg___boxed(lean_object* v_a_1104_, lean_object* v_x_1105_){
_start:
{
uint8_t v_res_1106_; lean_object* v_r_1107_; 
v_res_1106_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2___redArg(v_a_1104_, v_x_1105_);
lean_dec(v_x_1105_);
lean_dec_ref(v_a_1104_);
v_r_1107_ = lean_box(v_res_1106_);
return v_r_1107_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__4___redArg(lean_object* v_a_1108_, lean_object* v_b_1109_, lean_object* v_x_1110_){
_start:
{
if (lean_obj_tag(v_x_1110_) == 0)
{
lean_dec(v_b_1109_);
lean_dec_ref(v_a_1108_);
return v_x_1110_;
}
else
{
lean_object* v_key_1111_; lean_object* v_value_1112_; lean_object* v_tail_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1131_; 
v_key_1111_ = lean_ctor_get(v_x_1110_, 0);
v_value_1112_ = lean_ctor_get(v_x_1110_, 1);
v_tail_1113_ = lean_ctor_get(v_x_1110_, 2);
v_isSharedCheck_1131_ = !lean_is_exclusive(v_x_1110_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1115_ = v_x_1110_;
v_isShared_1116_ = v_isSharedCheck_1131_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_tail_1113_);
lean_inc(v_value_1112_);
lean_inc(v_key_1111_);
lean_dec(v_x_1110_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1131_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v_fst_1122_; lean_object* v_snd_1123_; lean_object* v_fst_1124_; lean_object* v_snd_1125_; size_t v___x_1126_; size_t v___x_1127_; uint8_t v___x_1128_; 
v_fst_1122_ = lean_ctor_get(v_key_1111_, 0);
v_snd_1123_ = lean_ctor_get(v_key_1111_, 1);
v_fst_1124_ = lean_ctor_get(v_a_1108_, 0);
v_snd_1125_ = lean_ctor_get(v_a_1108_, 1);
v___x_1126_ = lean_ptr_addr(v_fst_1122_);
v___x_1127_ = lean_ptr_addr(v_fst_1124_);
v___x_1128_ = lean_usize_dec_eq(v___x_1126_, v___x_1127_);
if (v___x_1128_ == 0)
{
goto v___jp_1117_;
}
else
{
uint8_t v___x_1129_; 
v___x_1129_ = lean_nat_dec_eq(v_snd_1123_, v_snd_1125_);
if (v___x_1129_ == 0)
{
goto v___jp_1117_;
}
else
{
lean_object* v___x_1130_; 
lean_del_object(v___x_1115_);
lean_dec(v_value_1112_);
lean_dec(v_key_1111_);
v___x_1130_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1130_, 0, v_a_1108_);
lean_ctor_set(v___x_1130_, 1, v_b_1109_);
lean_ctor_set(v___x_1130_, 2, v_tail_1113_);
return v___x_1130_;
}
}
v___jp_1117_:
{
lean_object* v___x_1118_; lean_object* v___x_1120_; 
v___x_1118_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__4___redArg(v_a_1108_, v_b_1109_, v_tail_1113_);
if (v_isShared_1116_ == 0)
{
lean_ctor_set(v___x_1115_, 2, v___x_1118_);
v___x_1120_ = v___x_1115_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_key_1111_);
lean_ctor_set(v_reuseFailAlloc_1121_, 1, v_value_1112_);
lean_ctor_set(v_reuseFailAlloc_1121_, 2, v___x_1118_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
return v___x_1120_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_1132_, lean_object* v_x_1133_){
_start:
{
if (lean_obj_tag(v_x_1133_) == 0)
{
return v_x_1132_;
}
else
{
lean_object* v_key_1134_; lean_object* v_value_1135_; lean_object* v_tail_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1166_; 
v_key_1134_ = lean_ctor_get(v_x_1133_, 0);
v_value_1135_ = lean_ctor_get(v_x_1133_, 1);
v_tail_1136_ = lean_ctor_get(v_x_1133_, 2);
v_isSharedCheck_1166_ = !lean_is_exclusive(v_x_1133_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1138_ = v_x_1133_;
v_isShared_1139_ = v_isSharedCheck_1166_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_tail_1136_);
lean_inc(v_value_1135_);
lean_inc(v_key_1134_);
lean_dec(v_x_1133_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1166_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v_fst_1140_; lean_object* v_snd_1141_; lean_object* v___x_1142_; size_t v___x_1143_; size_t v___x_1144_; size_t v___x_1145_; uint64_t v___x_1146_; uint64_t v___x_1147_; uint64_t v___x_1148_; uint64_t v___x_1149_; uint64_t v___x_1150_; uint64_t v_fold_1151_; uint64_t v___x_1152_; uint64_t v___x_1153_; uint64_t v___x_1154_; size_t v___x_1155_; size_t v___x_1156_; size_t v___x_1157_; size_t v___x_1158_; size_t v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1162_; 
v_fst_1140_ = lean_ctor_get(v_key_1134_, 0);
v_snd_1141_ = lean_ctor_get(v_key_1134_, 1);
v___x_1142_ = lean_array_get_size(v_x_1132_);
v___x_1143_ = lean_ptr_addr(v_fst_1140_);
v___x_1144_ = ((size_t)3ULL);
v___x_1145_ = lean_usize_shift_right(v___x_1143_, v___x_1144_);
v___x_1146_ = lean_usize_to_uint64(v___x_1145_);
v___x_1147_ = lean_uint64_of_nat(v_snd_1141_);
v___x_1148_ = lean_uint64_mix_hash(v___x_1146_, v___x_1147_);
v___x_1149_ = 32ULL;
v___x_1150_ = lean_uint64_shift_right(v___x_1148_, v___x_1149_);
v_fold_1151_ = lean_uint64_xor(v___x_1148_, v___x_1150_);
v___x_1152_ = 16ULL;
v___x_1153_ = lean_uint64_shift_right(v_fold_1151_, v___x_1152_);
v___x_1154_ = lean_uint64_xor(v_fold_1151_, v___x_1153_);
v___x_1155_ = lean_uint64_to_usize(v___x_1154_);
v___x_1156_ = lean_usize_of_nat(v___x_1142_);
v___x_1157_ = ((size_t)1ULL);
v___x_1158_ = lean_usize_sub(v___x_1156_, v___x_1157_);
v___x_1159_ = lean_usize_land(v___x_1155_, v___x_1158_);
v___x_1160_ = lean_array_uget_borrowed(v_x_1132_, v___x_1159_);
lean_inc(v___x_1160_);
if (v_isShared_1139_ == 0)
{
lean_ctor_set(v___x_1138_, 2, v___x_1160_);
v___x_1162_ = v___x_1138_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_key_1134_);
lean_ctor_set(v_reuseFailAlloc_1165_, 1, v_value_1135_);
lean_ctor_set(v_reuseFailAlloc_1165_, 2, v___x_1160_);
v___x_1162_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
lean_object* v___x_1163_; 
v___x_1163_ = lean_array_uset(v_x_1132_, v___x_1159_, v___x_1162_);
v_x_1132_ = v___x_1163_;
v_x_1133_ = v_tail_1136_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4___redArg(lean_object* v_i_1167_, lean_object* v_source_1168_, lean_object* v_target_1169_){
_start:
{
lean_object* v___x_1170_; uint8_t v___x_1171_; 
v___x_1170_ = lean_array_get_size(v_source_1168_);
v___x_1171_ = lean_nat_dec_lt(v_i_1167_, v___x_1170_);
if (v___x_1171_ == 0)
{
lean_dec_ref(v_source_1168_);
lean_dec(v_i_1167_);
return v_target_1169_;
}
else
{
lean_object* v_es_1172_; lean_object* v___x_1173_; lean_object* v_source_1174_; lean_object* v_target_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
v_es_1172_ = lean_array_fget(v_source_1168_, v_i_1167_);
v___x_1173_ = lean_box(0);
v_source_1174_ = lean_array_fset(v_source_1168_, v_i_1167_, v___x_1173_);
v_target_1175_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4_spec__5___redArg(v_target_1169_, v_es_1172_);
v___x_1176_ = lean_unsigned_to_nat(1u);
v___x_1177_ = lean_nat_add(v_i_1167_, v___x_1176_);
lean_dec(v_i_1167_);
v_i_1167_ = v___x_1177_;
v_source_1168_ = v_source_1174_;
v_target_1169_ = v_target_1175_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3___redArg(lean_object* v_data_1179_){
_start:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v_nbuckets_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1180_ = lean_array_get_size(v_data_1179_);
v___x_1181_ = lean_unsigned_to_nat(2u);
v_nbuckets_1182_ = lean_nat_mul(v___x_1180_, v___x_1181_);
v___x_1183_ = lean_unsigned_to_nat(0u);
v___x_1184_ = lean_box(0);
v___x_1185_ = lean_mk_array(v_nbuckets_1182_, v___x_1184_);
v___x_1186_ = lean_array_propagate_mark(v_data_1179_, v___x_1185_);
v___x_1187_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4___redArg(v___x_1183_, v_data_1179_, v___x_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1___redArg(lean_object* v_m_1188_, lean_object* v_a_1189_, lean_object* v_b_1190_){
_start:
{
lean_object* v_size_1191_; lean_object* v_buckets_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1242_; 
v_size_1191_ = lean_ctor_get(v_m_1188_, 0);
v_buckets_1192_ = lean_ctor_get(v_m_1188_, 1);
v_isSharedCheck_1242_ = !lean_is_exclusive(v_m_1188_);
if (v_isSharedCheck_1242_ == 0)
{
v___x_1194_ = v_m_1188_;
v_isShared_1195_ = v_isSharedCheck_1242_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_buckets_1192_);
lean_inc(v_size_1191_);
lean_dec(v_m_1188_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1242_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v_fst_1196_; lean_object* v_snd_1197_; lean_object* v___x_1198_; size_t v___x_1199_; size_t v___x_1200_; size_t v___x_1201_; uint64_t v___x_1202_; uint64_t v___x_1203_; uint64_t v___x_1204_; uint64_t v___x_1205_; uint64_t v___x_1206_; uint64_t v_fold_1207_; uint64_t v___x_1208_; uint64_t v___x_1209_; uint64_t v___x_1210_; size_t v___x_1211_; size_t v___x_1212_; size_t v___x_1213_; size_t v___x_1214_; size_t v___x_1215_; lean_object* v_bkt_1216_; uint8_t v___x_1217_; 
v_fst_1196_ = lean_ctor_get(v_a_1189_, 0);
v_snd_1197_ = lean_ctor_get(v_a_1189_, 1);
v___x_1198_ = lean_array_get_size(v_buckets_1192_);
v___x_1199_ = lean_ptr_addr(v_fst_1196_);
v___x_1200_ = ((size_t)3ULL);
v___x_1201_ = lean_usize_shift_right(v___x_1199_, v___x_1200_);
v___x_1202_ = lean_usize_to_uint64(v___x_1201_);
v___x_1203_ = lean_uint64_of_nat(v_snd_1197_);
v___x_1204_ = lean_uint64_mix_hash(v___x_1202_, v___x_1203_);
v___x_1205_ = 32ULL;
v___x_1206_ = lean_uint64_shift_right(v___x_1204_, v___x_1205_);
v_fold_1207_ = lean_uint64_xor(v___x_1204_, v___x_1206_);
v___x_1208_ = 16ULL;
v___x_1209_ = lean_uint64_shift_right(v_fold_1207_, v___x_1208_);
v___x_1210_ = lean_uint64_xor(v_fold_1207_, v___x_1209_);
v___x_1211_ = lean_uint64_to_usize(v___x_1210_);
v___x_1212_ = lean_usize_of_nat(v___x_1198_);
v___x_1213_ = ((size_t)1ULL);
v___x_1214_ = lean_usize_sub(v___x_1212_, v___x_1213_);
v___x_1215_ = lean_usize_land(v___x_1211_, v___x_1214_);
v_bkt_1216_ = lean_array_uget_borrowed(v_buckets_1192_, v___x_1215_);
v___x_1217_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2___redArg(v_a_1189_, v_bkt_1216_);
if (v___x_1217_ == 0)
{
lean_object* v___x_1218_; lean_object* v_size_x27_1219_; lean_object* v___x_1220_; lean_object* v_buckets_x27_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; uint8_t v___x_1227_; 
v___x_1218_ = lean_unsigned_to_nat(1u);
v_size_x27_1219_ = lean_nat_add(v_size_1191_, v___x_1218_);
lean_dec(v_size_1191_);
lean_inc(v_bkt_1216_);
v___x_1220_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1220_, 0, v_a_1189_);
lean_ctor_set(v___x_1220_, 1, v_b_1190_);
lean_ctor_set(v___x_1220_, 2, v_bkt_1216_);
v_buckets_x27_1221_ = lean_array_uset(v_buckets_1192_, v___x_1215_, v___x_1220_);
v___x_1222_ = lean_unsigned_to_nat(4u);
v___x_1223_ = lean_nat_mul(v_size_x27_1219_, v___x_1222_);
v___x_1224_ = lean_unsigned_to_nat(3u);
v___x_1225_ = lean_nat_div(v___x_1223_, v___x_1224_);
lean_dec(v___x_1223_);
v___x_1226_ = lean_array_get_size(v_buckets_x27_1221_);
v___x_1227_ = lean_nat_dec_le(v___x_1225_, v___x_1226_);
lean_dec(v___x_1225_);
if (v___x_1227_ == 0)
{
lean_object* v_val_1228_; lean_object* v___x_1230_; 
v_val_1228_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3___redArg(v_buckets_x27_1221_);
if (v_isShared_1195_ == 0)
{
lean_ctor_set(v___x_1194_, 1, v_val_1228_);
lean_ctor_set(v___x_1194_, 0, v_size_x27_1219_);
v___x_1230_ = v___x_1194_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_size_x27_1219_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v_val_1228_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
return v___x_1230_;
}
}
else
{
lean_object* v___x_1233_; 
if (v_isShared_1195_ == 0)
{
lean_ctor_set(v___x_1194_, 1, v_buckets_x27_1221_);
lean_ctor_set(v___x_1194_, 0, v_size_x27_1219_);
v___x_1233_ = v___x_1194_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v_size_x27_1219_);
lean_ctor_set(v_reuseFailAlloc_1234_, 1, v_buckets_x27_1221_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
else
{
lean_object* v___x_1235_; lean_object* v_buckets_x27_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1240_; 
lean_inc(v_bkt_1216_);
v___x_1235_ = lean_box(0);
v_buckets_x27_1236_ = lean_array_uset(v_buckets_1192_, v___x_1215_, v___x_1235_);
v___x_1237_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__4___redArg(v_a_1189_, v_b_1190_, v_bkt_1216_);
v___x_1238_ = lean_array_uset(v_buckets_x27_1236_, v___x_1215_, v___x_1237_);
if (v_isShared_1195_ == 0)
{
lean_ctor_set(v___x_1194_, 1, v___x_1238_);
v___x_1240_ = v___x_1194_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v_size_1191_);
lean_ctor_set(v_reuseFailAlloc_1241_, 1, v___x_1238_);
v___x_1240_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
return v___x_1240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0___redArg(lean_object* v_a_1243_, lean_object* v_x_1244_){
_start:
{
if (lean_obj_tag(v_x_1244_) == 0)
{
lean_object* v___x_1245_; 
v___x_1245_ = lean_box(0);
return v___x_1245_;
}
else
{
lean_object* v_key_1246_; lean_object* v_value_1247_; lean_object* v_tail_1248_; lean_object* v_fst_1249_; lean_object* v_snd_1250_; lean_object* v_fst_1251_; lean_object* v_snd_1252_; size_t v___x_1253_; size_t v___x_1254_; uint8_t v___x_1255_; 
v_key_1246_ = lean_ctor_get(v_x_1244_, 0);
v_value_1247_ = lean_ctor_get(v_x_1244_, 1);
v_tail_1248_ = lean_ctor_get(v_x_1244_, 2);
v_fst_1249_ = lean_ctor_get(v_key_1246_, 0);
v_snd_1250_ = lean_ctor_get(v_key_1246_, 1);
v_fst_1251_ = lean_ctor_get(v_a_1243_, 0);
v_snd_1252_ = lean_ctor_get(v_a_1243_, 1);
v___x_1253_ = lean_ptr_addr(v_fst_1249_);
v___x_1254_ = lean_ptr_addr(v_fst_1251_);
v___x_1255_ = lean_usize_dec_eq(v___x_1253_, v___x_1254_);
if (v___x_1255_ == 0)
{
v_x_1244_ = v_tail_1248_;
goto _start;
}
else
{
uint8_t v___x_1257_; 
v___x_1257_ = lean_nat_dec_eq(v_snd_1250_, v_snd_1252_);
if (v___x_1257_ == 0)
{
v_x_1244_ = v_tail_1248_;
goto _start;
}
else
{
lean_object* v___x_1259_; 
lean_inc(v_value_1247_);
v___x_1259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1259_, 0, v_value_1247_);
return v___x_1259_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0___redArg___boxed(lean_object* v_a_1260_, lean_object* v_x_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0___redArg(v_a_1260_, v_x_1261_);
lean_dec(v_x_1261_);
lean_dec_ref(v_a_1260_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___redArg(lean_object* v_m_1263_, lean_object* v_a_1264_){
_start:
{
lean_object* v_buckets_1265_; lean_object* v_fst_1266_; lean_object* v_snd_1267_; lean_object* v___x_1268_; size_t v___x_1269_; size_t v___x_1270_; size_t v___x_1271_; uint64_t v___x_1272_; uint64_t v___x_1273_; uint64_t v___x_1274_; uint64_t v___x_1275_; uint64_t v___x_1276_; uint64_t v_fold_1277_; uint64_t v___x_1278_; uint64_t v___x_1279_; uint64_t v___x_1280_; size_t v___x_1281_; size_t v___x_1282_; size_t v___x_1283_; size_t v___x_1284_; size_t v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
v_buckets_1265_ = lean_ctor_get(v_m_1263_, 1);
v_fst_1266_ = lean_ctor_get(v_a_1264_, 0);
v_snd_1267_ = lean_ctor_get(v_a_1264_, 1);
v___x_1268_ = lean_array_get_size(v_buckets_1265_);
v___x_1269_ = lean_ptr_addr(v_fst_1266_);
v___x_1270_ = ((size_t)3ULL);
v___x_1271_ = lean_usize_shift_right(v___x_1269_, v___x_1270_);
v___x_1272_ = lean_usize_to_uint64(v___x_1271_);
v___x_1273_ = lean_uint64_of_nat(v_snd_1267_);
v___x_1274_ = lean_uint64_mix_hash(v___x_1272_, v___x_1273_);
v___x_1275_ = 32ULL;
v___x_1276_ = lean_uint64_shift_right(v___x_1274_, v___x_1275_);
v_fold_1277_ = lean_uint64_xor(v___x_1274_, v___x_1276_);
v___x_1278_ = 16ULL;
v___x_1279_ = lean_uint64_shift_right(v_fold_1277_, v___x_1278_);
v___x_1280_ = lean_uint64_xor(v_fold_1277_, v___x_1279_);
v___x_1281_ = lean_uint64_to_usize(v___x_1280_);
v___x_1282_ = lean_usize_of_nat(v___x_1268_);
v___x_1283_ = ((size_t)1ULL);
v___x_1284_ = lean_usize_sub(v___x_1282_, v___x_1283_);
v___x_1285_ = lean_usize_land(v___x_1281_, v___x_1284_);
v___x_1286_ = lean_array_uget_borrowed(v_buckets_1265_, v___x_1285_);
v___x_1287_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0___redArg(v_a_1264_, v___x_1286_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___redArg___boxed(lean_object* v_m_1288_, lean_object* v_a_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___redArg(v_m_1288_, v_a_1289_);
lean_dec_ref(v_a_1289_);
lean_dec_ref(v_m_1288_);
return v_res_1290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___redArg(lean_object* v_rhs_1291_, lean_object* v_op_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_){
_start:
{
lean_object* v_numConst_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v_key_1304_; lean_object* v___x_1305_; lean_object* v_latticeBackwardRuleCache_1306_; lean_object* v___x_1307_; 
v_numConst_1301_ = lean_ctor_get(v_op_1292_, 1);
v___x_1302_ = l_Lean_Expr_getAppPrefix(v_rhs_1291_, v_numConst_1301_);
v___x_1303_ = l_Lean_Expr_getAppNumArgs(v_rhs_1291_);
v_key_1304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_1304_, 0, v___x_1302_);
lean_ctor_set(v_key_1304_, 1, v___x_1303_);
v___x_1305_ = lean_st_ref_get(v_a_1293_);
v_latticeBackwardRuleCache_1306_ = lean_ctor_get(v___x_1305_, 2);
lean_inc_ref(v_latticeBackwardRuleCache_1306_);
lean_dec(v___x_1305_);
v___x_1307_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___redArg(v_latticeBackwardRuleCache_1306_, v_key_1304_);
lean_dec_ref(v_latticeBackwardRuleCache_1306_);
if (lean_obj_tag(v___x_1307_) == 1)
{
lean_object* v_val_1308_; lean_object* v___x_1310_; uint8_t v_isShared_1311_; uint8_t v_isSharedCheck_1315_; 
lean_dec_ref_known(v_key_1304_, 2);
lean_dec_ref(v_op_1292_);
lean_dec_ref(v_rhs_1291_);
v_val_1308_ = lean_ctor_get(v___x_1307_, 0);
v_isSharedCheck_1315_ = !lean_is_exclusive(v___x_1307_);
if (v_isSharedCheck_1315_ == 0)
{
v___x_1310_ = v___x_1307_;
v_isShared_1311_ = v_isSharedCheck_1315_;
goto v_resetjp_1309_;
}
else
{
lean_inc(v_val_1308_);
lean_dec(v___x_1307_);
v___x_1310_ = lean_box(0);
v_isShared_1311_ = v_isSharedCheck_1315_;
goto v_resetjp_1309_;
}
v_resetjp_1309_:
{
lean_object* v___x_1313_; 
if (v_isShared_1311_ == 0)
{
lean_ctor_set_tag(v___x_1310_, 0);
v___x_1313_ = v___x_1310_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v_val_1308_);
v___x_1313_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
return v___x_1313_;
}
}
}
else
{
lean_object* v___x_1316_; 
lean_dec(v___x_1307_);
v___x_1316_ = l_Lean_Elab_Tactic_VCGen_mkLatticeOpRule(v_rhs_1291_, v_op_1292_, v_a_1294_, v_a_1295_, v_a_1296_, v_a_1297_, v_a_1298_, v_a_1299_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v_a_1317_; lean_object* v___x_1318_; 
v_a_1317_ = lean_ctor_get(v___x_1316_, 0);
lean_inc(v_a_1317_);
lean_dec_ref_known(v___x_1316_, 1);
v___x_1318_ = l_Lean_Meta_Sym_BackwardRule_shareCommon(v_a_1317_, v_a_1294_, v_a_1295_, v_a_1296_, v_a_1297_, v_a_1298_, v_a_1299_);
if (lean_obj_tag(v___x_1318_) == 0)
{
lean_object* v_a_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1348_; 
v_a_1319_ = lean_ctor_get(v___x_1318_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v___x_1318_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1321_ = v___x_1318_;
v_isShared_1322_ = v_isSharedCheck_1348_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_a_1319_);
lean_dec(v___x_1318_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1348_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___x_1323_; lean_object* v_specBackwardRuleCache_1324_; lean_object* v_splitBackwardRuleCache_1325_; lean_object* v_latticeBackwardRuleCache_1326_; lean_object* v_frameBackwardRuleCache_1327_; lean_object* v_rintroBackwardRuleCache_1328_; lean_object* v_frameDB_1329_; lean_object* v_invariants_1330_; lean_object* v_vcs_1331_; lean_object* v_simpState_1332_; lean_object* v_fuel_1333_; lean_object* v_inlineHandledInvariants_1334_; lean_object* v_pendingJoinPoints_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1347_; 
v___x_1323_ = lean_st_ref_take(v_a_1293_);
v_specBackwardRuleCache_1324_ = lean_ctor_get(v___x_1323_, 0);
v_splitBackwardRuleCache_1325_ = lean_ctor_get(v___x_1323_, 1);
v_latticeBackwardRuleCache_1326_ = lean_ctor_get(v___x_1323_, 2);
v_frameBackwardRuleCache_1327_ = lean_ctor_get(v___x_1323_, 3);
v_rintroBackwardRuleCache_1328_ = lean_ctor_get(v___x_1323_, 4);
v_frameDB_1329_ = lean_ctor_get(v___x_1323_, 5);
v_invariants_1330_ = lean_ctor_get(v___x_1323_, 6);
v_vcs_1331_ = lean_ctor_get(v___x_1323_, 7);
v_simpState_1332_ = lean_ctor_get(v___x_1323_, 8);
v_fuel_1333_ = lean_ctor_get(v___x_1323_, 9);
v_inlineHandledInvariants_1334_ = lean_ctor_get(v___x_1323_, 10);
v_pendingJoinPoints_1335_ = lean_ctor_get(v___x_1323_, 11);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1337_ = v___x_1323_;
v_isShared_1338_ = v_isSharedCheck_1347_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_pendingJoinPoints_1335_);
lean_inc(v_inlineHandledInvariants_1334_);
lean_inc(v_fuel_1333_);
lean_inc(v_simpState_1332_);
lean_inc(v_vcs_1331_);
lean_inc(v_invariants_1330_);
lean_inc(v_frameDB_1329_);
lean_inc(v_rintroBackwardRuleCache_1328_);
lean_inc(v_frameBackwardRuleCache_1327_);
lean_inc(v_latticeBackwardRuleCache_1326_);
lean_inc(v_splitBackwardRuleCache_1325_);
lean_inc(v_specBackwardRuleCache_1324_);
lean_dec(v___x_1323_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1347_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1339_; lean_object* v___x_1341_; 
lean_inc(v_a_1319_);
v___x_1339_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1___redArg(v_latticeBackwardRuleCache_1326_, v_key_1304_, v_a_1319_);
if (v_isShared_1338_ == 0)
{
lean_ctor_set(v___x_1337_, 2, v___x_1339_);
v___x_1341_ = v___x_1337_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_specBackwardRuleCache_1324_);
lean_ctor_set(v_reuseFailAlloc_1346_, 1, v_splitBackwardRuleCache_1325_);
lean_ctor_set(v_reuseFailAlloc_1346_, 2, v___x_1339_);
lean_ctor_set(v_reuseFailAlloc_1346_, 3, v_frameBackwardRuleCache_1327_);
lean_ctor_set(v_reuseFailAlloc_1346_, 4, v_rintroBackwardRuleCache_1328_);
lean_ctor_set(v_reuseFailAlloc_1346_, 5, v_frameDB_1329_);
lean_ctor_set(v_reuseFailAlloc_1346_, 6, v_invariants_1330_);
lean_ctor_set(v_reuseFailAlloc_1346_, 7, v_vcs_1331_);
lean_ctor_set(v_reuseFailAlloc_1346_, 8, v_simpState_1332_);
lean_ctor_set(v_reuseFailAlloc_1346_, 9, v_fuel_1333_);
lean_ctor_set(v_reuseFailAlloc_1346_, 10, v_inlineHandledInvariants_1334_);
lean_ctor_set(v_reuseFailAlloc_1346_, 11, v_pendingJoinPoints_1335_);
v___x_1341_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
lean_object* v___x_1342_; lean_object* v___x_1344_; 
v___x_1342_ = lean_st_ref_put(v_a_1293_, v___x_1341_);
if (v_isShared_1322_ == 0)
{
v___x_1344_ = v___x_1321_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v_a_1319_);
v___x_1344_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
return v___x_1344_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_key_1304_, 2);
return v___x_1318_;
}
}
else
{
lean_dec_ref_known(v_key_1304_, 2);
return v___x_1316_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___redArg___boxed(lean_object* v_rhs_1349_, lean_object* v_op_1350_, lean_object* v_a_1351_, lean_object* v_a_1352_, lean_object* v_a_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_, lean_object* v_a_1357_, lean_object* v_a_1358_){
_start:
{
lean_object* v_res_1359_; 
v_res_1359_ = l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___redArg(v_rhs_1349_, v_op_1350_, v_a_1351_, v_a_1352_, v_a_1353_, v_a_1354_, v_a_1355_, v_a_1356_, v_a_1357_);
lean_dec(v_a_1357_);
lean_dec_ref(v_a_1356_);
lean_dec(v_a_1355_);
lean_dec_ref(v_a_1354_);
lean_dec(v_a_1353_);
lean_dec_ref(v_a_1352_);
lean_dec(v_a_1351_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached(lean_object* v_rhs_1360_, lean_object* v_op_1361_, lean_object* v_a_1362_, lean_object* v_a_1363_, lean_object* v_a_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_, lean_object* v_a_1372_){
_start:
{
lean_object* v___x_1374_; 
v___x_1374_ = l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___redArg(v_rhs_1360_, v_op_1361_, v_a_1363_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_, v_a_1372_);
return v___x_1374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached___boxed(lean_object* v_rhs_1375_, lean_object* v_op_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_, lean_object* v_a_1380_, lean_object* v_a_1381_, lean_object* v_a_1382_, lean_object* v_a_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_){
_start:
{
lean_object* v_res_1389_; 
v_res_1389_ = l_Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached(v_rhs_1375_, v_op_1376_, v_a_1377_, v_a_1378_, v_a_1379_, v_a_1380_, v_a_1381_, v_a_1382_, v_a_1383_, v_a_1384_, v_a_1385_, v_a_1386_, v_a_1387_);
lean_dec(v_a_1387_);
lean_dec_ref(v_a_1386_);
lean_dec(v_a_1385_);
lean_dec_ref(v_a_1384_);
lean_dec(v_a_1383_);
lean_dec_ref(v_a_1382_);
lean_dec(v_a_1381_);
lean_dec_ref(v_a_1380_);
lean_dec(v_a_1379_);
lean_dec(v_a_1378_);
lean_dec_ref(v_a_1377_);
return v_res_1389_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0(lean_object* v_00_u03b2_1390_, lean_object* v_m_1391_, lean_object* v_a_1392_){
_start:
{
lean_object* v___x_1393_; 
v___x_1393_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___redArg(v_m_1391_, v_a_1392_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___boxed(lean_object* v_00_u03b2_1394_, lean_object* v_m_1395_, lean_object* v_a_1396_){
_start:
{
lean_object* v_res_1397_; 
v_res_1397_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0(v_00_u03b2_1394_, v_m_1395_, v_a_1396_);
lean_dec_ref(v_a_1396_);
lean_dec_ref(v_m_1395_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1(lean_object* v_00_u03b2_1398_, lean_object* v_m_1399_, lean_object* v_a_1400_, lean_object* v_b_1401_){
_start:
{
lean_object* v___x_1402_; 
v___x_1402_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1___redArg(v_m_1399_, v_a_1400_, v_b_1401_);
return v___x_1402_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0(lean_object* v_00_u03b2_1403_, lean_object* v_a_1404_, lean_object* v_x_1405_){
_start:
{
lean_object* v___x_1406_; 
v___x_1406_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0___redArg(v_a_1404_, v_x_1405_);
return v___x_1406_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1407_, lean_object* v_a_1408_, lean_object* v_x_1409_){
_start:
{
lean_object* v_res_1410_; 
v_res_1410_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0_spec__0(v_00_u03b2_1407_, v_a_1408_, v_x_1409_);
lean_dec(v_x_1409_);
lean_dec_ref(v_a_1408_);
return v_res_1410_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2(lean_object* v_00_u03b2_1411_, lean_object* v_a_1412_, lean_object* v_x_1413_){
_start:
{
uint8_t v___x_1414_; 
v___x_1414_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2___redArg(v_a_1412_, v_x_1413_);
return v___x_1414_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1415_, lean_object* v_a_1416_, lean_object* v_x_1417_){
_start:
{
uint8_t v_res_1418_; lean_object* v_r_1419_; 
v_res_1418_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__2(v_00_u03b2_1415_, v_a_1416_, v_x_1417_);
lean_dec(v_x_1417_);
lean_dec_ref(v_a_1416_);
v_r_1419_ = lean_box(v_res_1418_);
return v_r_1419_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3(lean_object* v_00_u03b2_1420_, lean_object* v_data_1421_){
_start:
{
lean_object* v___x_1422_; 
v___x_1422_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3___redArg(v_data_1421_);
return v___x_1422_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__4(lean_object* v_00_u03b2_1423_, lean_object* v_a_1424_, lean_object* v_b_1425_, lean_object* v_x_1426_){
_start:
{
lean_object* v___x_1427_; 
v___x_1427_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__4___redArg(v_a_1424_, v_b_1425_, v_x_1426_);
return v___x_1427_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_1428_, lean_object* v_i_1429_, lean_object* v_source_1430_, lean_object* v_target_1431_){
_start:
{
lean_object* v___x_1432_; 
v___x_1432_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4___redArg(v_i_1429_, v_source_1430_, v_target_1431_);
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_1433_, lean_object* v_x_1434_, lean_object* v_x_1435_){
_start:
{
lean_object* v___x_1436_; 
v___x_1436_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1_spec__3_spec__4_spec__5___redArg(v_x_1434_, v_x_1435_);
return v___x_1436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached___redArg(lean_object* v_fp_1437_, lean_object* v_info_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_){
_start:
{
lean_object* v_excessArgs_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v_key_1450_; lean_object* v___x_1451_; lean_object* v_frameBackwardRuleCache_1452_; lean_object* v___x_1453_; 
v_excessArgs_1447_ = lean_ctor_get(v_info_1438_, 3);
v___x_1448_ = l_Lean_Elab_Tactic_VCGen_WPApp_instWP(v_info_1438_);
v___x_1449_ = lean_array_get_size(v_excessArgs_1447_);
v_key_1450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_1450_, 0, v___x_1448_);
lean_ctor_set(v_key_1450_, 1, v___x_1449_);
v___x_1451_ = lean_st_ref_get(v_a_1439_);
v_frameBackwardRuleCache_1452_ = lean_ctor_get(v___x_1451_, 3);
lean_inc_ref(v_frameBackwardRuleCache_1452_);
lean_dec(v___x_1451_);
v___x_1453_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__0___redArg(v_frameBackwardRuleCache_1452_, v_key_1450_);
lean_dec_ref(v_frameBackwardRuleCache_1452_);
if (lean_obj_tag(v___x_1453_) == 1)
{
lean_object* v_val_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1461_; 
lean_dec_ref_known(v_key_1450_, 2);
lean_dec_ref(v_info_1438_);
lean_dec_ref(v_fp_1437_);
v_val_1454_ = lean_ctor_get(v___x_1453_, 0);
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1456_ = v___x_1453_;
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_val_1454_);
lean_dec(v___x_1453_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1459_; 
if (v_isShared_1457_ == 0)
{
lean_ctor_set_tag(v___x_1456_, 0);
v___x_1459_ = v___x_1456_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v_val_1454_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
}
else
{
lean_object* v___x_1462_; 
lean_dec(v___x_1453_);
v___x_1462_ = l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRule(v_fp_1437_, v_info_1438_, v_a_1442_, v_a_1443_, v_a_1444_, v_a_1445_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_object* v_a_1463_; lean_object* v_rule_1464_; lean_object* v_splitVCIdx_1465_; lean_object* v_frameIdx_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1512_; 
v_a_1463_ = lean_ctor_get(v___x_1462_, 0);
lean_inc(v_a_1463_);
lean_dec_ref_known(v___x_1462_, 1);
v_rule_1464_ = lean_ctor_get(v_a_1463_, 0);
v_splitVCIdx_1465_ = lean_ctor_get(v_a_1463_, 1);
v_frameIdx_1466_ = lean_ctor_get(v_a_1463_, 2);
v_isSharedCheck_1512_ = !lean_is_exclusive(v_a_1463_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1468_ = v_a_1463_;
v_isShared_1469_ = v_isSharedCheck_1512_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_frameIdx_1466_);
lean_inc(v_splitVCIdx_1465_);
lean_inc(v_rule_1464_);
lean_dec(v_a_1463_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1512_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1470_; 
v___x_1470_ = l_Lean_Meta_Sym_BackwardRule_shareCommon(v_rule_1464_, v_a_1440_, v_a_1441_, v_a_1442_, v_a_1443_, v_a_1444_, v_a_1445_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1503_; 
v_a_1471_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1473_ = v___x_1470_;
v_isShared_1474_ = v_isSharedCheck_1503_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1470_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1503_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1476_; 
if (v_isShared_1469_ == 0)
{
lean_ctor_set(v___x_1468_, 0, v_a_1471_);
v___x_1476_ = v___x_1468_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_a_1471_);
lean_ctor_set(v_reuseFailAlloc_1502_, 1, v_splitVCIdx_1465_);
lean_ctor_set(v_reuseFailAlloc_1502_, 2, v_frameIdx_1466_);
v___x_1476_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
lean_object* v___x_1477_; lean_object* v_specBackwardRuleCache_1478_; lean_object* v_splitBackwardRuleCache_1479_; lean_object* v_latticeBackwardRuleCache_1480_; lean_object* v_frameBackwardRuleCache_1481_; lean_object* v_rintroBackwardRuleCache_1482_; lean_object* v_frameDB_1483_; lean_object* v_invariants_1484_; lean_object* v_vcs_1485_; lean_object* v_simpState_1486_; lean_object* v_fuel_1487_; lean_object* v_inlineHandledInvariants_1488_; lean_object* v_pendingJoinPoints_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1501_; 
v___x_1477_ = lean_st_ref_take(v_a_1439_);
v_specBackwardRuleCache_1478_ = lean_ctor_get(v___x_1477_, 0);
v_splitBackwardRuleCache_1479_ = lean_ctor_get(v___x_1477_, 1);
v_latticeBackwardRuleCache_1480_ = lean_ctor_get(v___x_1477_, 2);
v_frameBackwardRuleCache_1481_ = lean_ctor_get(v___x_1477_, 3);
v_rintroBackwardRuleCache_1482_ = lean_ctor_get(v___x_1477_, 4);
v_frameDB_1483_ = lean_ctor_get(v___x_1477_, 5);
v_invariants_1484_ = lean_ctor_get(v___x_1477_, 6);
v_vcs_1485_ = lean_ctor_get(v___x_1477_, 7);
v_simpState_1486_ = lean_ctor_get(v___x_1477_, 8);
v_fuel_1487_ = lean_ctor_get(v___x_1477_, 9);
v_inlineHandledInvariants_1488_ = lean_ctor_get(v___x_1477_, 10);
v_pendingJoinPoints_1489_ = lean_ctor_get(v___x_1477_, 11);
v_isSharedCheck_1501_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1501_ == 0)
{
v___x_1491_ = v___x_1477_;
v_isShared_1492_ = v_isSharedCheck_1501_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_pendingJoinPoints_1489_);
lean_inc(v_inlineHandledInvariants_1488_);
lean_inc(v_fuel_1487_);
lean_inc(v_simpState_1486_);
lean_inc(v_vcs_1485_);
lean_inc(v_invariants_1484_);
lean_inc(v_frameDB_1483_);
lean_inc(v_rintroBackwardRuleCache_1482_);
lean_inc(v_frameBackwardRuleCache_1481_);
lean_inc(v_latticeBackwardRuleCache_1480_);
lean_inc(v_splitBackwardRuleCache_1479_);
lean_inc(v_specBackwardRuleCache_1478_);
lean_dec(v___x_1477_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1501_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1493_; lean_object* v___x_1495_; 
lean_inc_ref(v___x_1476_);
v___x_1493_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkLatticeOpRuleCached_spec__1___redArg(v_frameBackwardRuleCache_1481_, v_key_1450_, v___x_1476_);
if (v_isShared_1492_ == 0)
{
lean_ctor_set(v___x_1491_, 3, v___x_1493_);
v___x_1495_ = v___x_1491_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v_specBackwardRuleCache_1478_);
lean_ctor_set(v_reuseFailAlloc_1500_, 1, v_splitBackwardRuleCache_1479_);
lean_ctor_set(v_reuseFailAlloc_1500_, 2, v_latticeBackwardRuleCache_1480_);
lean_ctor_set(v_reuseFailAlloc_1500_, 3, v___x_1493_);
lean_ctor_set(v_reuseFailAlloc_1500_, 4, v_rintroBackwardRuleCache_1482_);
lean_ctor_set(v_reuseFailAlloc_1500_, 5, v_frameDB_1483_);
lean_ctor_set(v_reuseFailAlloc_1500_, 6, v_invariants_1484_);
lean_ctor_set(v_reuseFailAlloc_1500_, 7, v_vcs_1485_);
lean_ctor_set(v_reuseFailAlloc_1500_, 8, v_simpState_1486_);
lean_ctor_set(v_reuseFailAlloc_1500_, 9, v_fuel_1487_);
lean_ctor_set(v_reuseFailAlloc_1500_, 10, v_inlineHandledInvariants_1488_);
lean_ctor_set(v_reuseFailAlloc_1500_, 11, v_pendingJoinPoints_1489_);
v___x_1495_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
lean_object* v___x_1496_; lean_object* v___x_1498_; 
v___x_1496_ = lean_st_ref_put(v_a_1439_, v___x_1495_);
if (v_isShared_1474_ == 0)
{
lean_ctor_set(v___x_1473_, 0, v___x_1476_);
v___x_1498_ = v___x_1473_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v___x_1476_);
v___x_1498_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
return v___x_1498_;
}
}
}
}
}
}
else
{
lean_object* v_a_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1511_; 
lean_del_object(v___x_1468_);
lean_dec(v_frameIdx_1466_);
lean_dec(v_splitVCIdx_1465_);
lean_dec_ref_known(v_key_1450_, 2);
v_a_1504_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1511_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1506_ = v___x_1470_;
v_isShared_1507_ = v_isSharedCheck_1511_;
goto v_resetjp_1505_;
}
else
{
lean_inc(v_a_1504_);
lean_dec(v___x_1470_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1511_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
lean_object* v___x_1509_; 
if (v_isShared_1507_ == 0)
{
v___x_1509_ = v___x_1506_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v_a_1504_);
v___x_1509_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
return v___x_1509_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_key_1450_, 2);
return v___x_1462_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached___redArg___boxed(lean_object* v_fp_1513_, lean_object* v_info_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_){
_start:
{
lean_object* v_res_1523_; 
v_res_1523_ = l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached___redArg(v_fp_1513_, v_info_1514_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_);
lean_dec(v_a_1521_);
lean_dec_ref(v_a_1520_);
lean_dec(v_a_1519_);
lean_dec_ref(v_a_1518_);
lean_dec(v_a_1517_);
lean_dec_ref(v_a_1516_);
lean_dec(v_a_1515_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached(lean_object* v_fp_1524_, lean_object* v_info_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_, lean_object* v_a_1536_){
_start:
{
lean_object* v___x_1538_; 
v___x_1538_ = l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached___redArg(v_fp_1524_, v_info_1525_, v_a_1527_, v_a_1531_, v_a_1532_, v_a_1533_, v_a_1534_, v_a_1535_, v_a_1536_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached___boxed(lean_object* v_fp_1539_, lean_object* v_info_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_){
_start:
{
lean_object* v_res_1553_; 
v_res_1553_ = l_Lean_Elab_Tactic_VCGen_mkFrameBackwardRuleCached(v_fp_1539_, v_info_1540_, v_a_1541_, v_a_1542_, v_a_1543_, v_a_1544_, v_a_1545_, v_a_1546_, v_a_1547_, v_a_1548_, v_a_1549_, v_a_1550_, v_a_1551_);
lean_dec(v_a_1551_);
lean_dec_ref(v_a_1550_);
lean_dec(v_a_1549_);
lean_dec_ref(v_a_1548_);
lean_dec(v_a_1547_);
lean_dec_ref(v_a_1546_);
lean_dec(v_a_1545_);
lean_dec_ref(v_a_1544_);
lean_dec(v_a_1543_);
lean_dec(v_a_1542_);
lean_dec_ref(v_a_1541_);
return v_res_1553_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0_spec__0___redArg(lean_object* v_a_1554_, lean_object* v_x_1555_){
_start:
{
if (lean_obj_tag(v_x_1555_) == 0)
{
lean_object* v___x_1556_; 
v___x_1556_ = lean_box(0);
return v___x_1556_;
}
else
{
lean_object* v_key_1557_; lean_object* v_value_1558_; lean_object* v_tail_1559_; uint8_t v___x_1560_; 
v_key_1557_ = lean_ctor_get(v_x_1555_, 0);
v_value_1558_ = lean_ctor_get(v_x_1555_, 1);
v_tail_1559_ = lean_ctor_get(v_x_1555_, 2);
v___x_1560_ = lean_name_eq(v_key_1557_, v_a_1554_);
if (v___x_1560_ == 0)
{
v_x_1555_ = v_tail_1559_;
goto _start;
}
else
{
lean_object* v___x_1562_; 
lean_inc(v_value_1558_);
v___x_1562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1562_, 0, v_value_1558_);
return v___x_1562_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0_spec__0___redArg___boxed(lean_object* v_a_1563_, lean_object* v_x_1564_){
_start:
{
lean_object* v_res_1565_; 
v_res_1565_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0_spec__0___redArg(v_a_1563_, v_x_1564_);
lean_dec(v_x_1564_);
lean_dec(v_a_1563_);
return v_res_1565_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0___redArg(lean_object* v_m_1566_, lean_object* v_a_1567_){
_start:
{
lean_object* v_buckets_1568_; lean_object* v___x_1569_; uint64_t v___y_1571_; 
v_buckets_1568_ = lean_ctor_get(v_m_1566_, 1);
v___x_1569_ = lean_array_get_size(v_buckets_1568_);
if (lean_obj_tag(v_a_1567_) == 0)
{
uint64_t v___x_1585_; 
v___x_1585_ = 1723ULL;
v___y_1571_ = v___x_1585_;
goto v___jp_1570_;
}
else
{
uint64_t v_hash_1586_; 
v_hash_1586_ = lean_ctor_get_uint64(v_a_1567_, sizeof(void*)*2);
v___y_1571_ = v_hash_1586_;
goto v___jp_1570_;
}
v___jp_1570_:
{
uint64_t v___x_1572_; uint64_t v___x_1573_; uint64_t v_fold_1574_; uint64_t v___x_1575_; uint64_t v___x_1576_; uint64_t v___x_1577_; size_t v___x_1578_; size_t v___x_1579_; size_t v___x_1580_; size_t v___x_1581_; size_t v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; 
v___x_1572_ = 32ULL;
v___x_1573_ = lean_uint64_shift_right(v___y_1571_, v___x_1572_);
v_fold_1574_ = lean_uint64_xor(v___y_1571_, v___x_1573_);
v___x_1575_ = 16ULL;
v___x_1576_ = lean_uint64_shift_right(v_fold_1574_, v___x_1575_);
v___x_1577_ = lean_uint64_xor(v_fold_1574_, v___x_1576_);
v___x_1578_ = lean_uint64_to_usize(v___x_1577_);
v___x_1579_ = lean_usize_of_nat(v___x_1569_);
v___x_1580_ = ((size_t)1ULL);
v___x_1581_ = lean_usize_sub(v___x_1579_, v___x_1580_);
v___x_1582_ = lean_usize_land(v___x_1578_, v___x_1581_);
v___x_1583_ = lean_array_uget_borrowed(v_buckets_1568_, v___x_1582_);
v___x_1584_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0_spec__0___redArg(v_a_1567_, v___x_1583_);
return v___x_1584_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0___redArg___boxed(lean_object* v_m_1587_, lean_object* v_a_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0___redArg(v_m_1587_, v_a_1588_);
lean_dec(v_a_1588_);
lean_dec_ref(v_m_1587_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__4___redArg(lean_object* v_a_1590_, lean_object* v_b_1591_, lean_object* v_x_1592_){
_start:
{
if (lean_obj_tag(v_x_1592_) == 0)
{
lean_dec(v_b_1591_);
lean_dec(v_a_1590_);
return v_x_1592_;
}
else
{
lean_object* v_key_1593_; lean_object* v_value_1594_; lean_object* v_tail_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1607_; 
v_key_1593_ = lean_ctor_get(v_x_1592_, 0);
v_value_1594_ = lean_ctor_get(v_x_1592_, 1);
v_tail_1595_ = lean_ctor_get(v_x_1592_, 2);
v_isSharedCheck_1607_ = !lean_is_exclusive(v_x_1592_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1597_ = v_x_1592_;
v_isShared_1598_ = v_isSharedCheck_1607_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_tail_1595_);
lean_inc(v_value_1594_);
lean_inc(v_key_1593_);
lean_dec(v_x_1592_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1607_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
uint8_t v___x_1599_; 
v___x_1599_ = lean_name_eq(v_key_1593_, v_a_1590_);
if (v___x_1599_ == 0)
{
lean_object* v___x_1600_; lean_object* v___x_1602_; 
v___x_1600_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__4___redArg(v_a_1590_, v_b_1591_, v_tail_1595_);
if (v_isShared_1598_ == 0)
{
lean_ctor_set(v___x_1597_, 2, v___x_1600_);
v___x_1602_ = v___x_1597_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v_key_1593_);
lean_ctor_set(v_reuseFailAlloc_1603_, 1, v_value_1594_);
lean_ctor_set(v_reuseFailAlloc_1603_, 2, v___x_1600_);
v___x_1602_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
return v___x_1602_;
}
}
else
{
lean_object* v___x_1605_; 
lean_dec(v_value_1594_);
lean_dec(v_key_1593_);
if (v_isShared_1598_ == 0)
{
lean_ctor_set(v___x_1597_, 1, v_b_1591_);
lean_ctor_set(v___x_1597_, 0, v_a_1590_);
v___x_1605_ = v___x_1597_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v_a_1590_);
lean_ctor_set(v_reuseFailAlloc_1606_, 1, v_b_1591_);
lean_ctor_set(v_reuseFailAlloc_1606_, 2, v_tail_1595_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
return v___x_1605_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__2___redArg(lean_object* v_a_1608_, lean_object* v_x_1609_){
_start:
{
if (lean_obj_tag(v_x_1609_) == 0)
{
uint8_t v___x_1610_; 
v___x_1610_ = 0;
return v___x_1610_;
}
else
{
lean_object* v_key_1611_; lean_object* v_tail_1612_; uint8_t v___x_1613_; 
v_key_1611_ = lean_ctor_get(v_x_1609_, 0);
v_tail_1612_ = lean_ctor_get(v_x_1609_, 2);
v___x_1613_ = lean_name_eq(v_key_1611_, v_a_1608_);
if (v___x_1613_ == 0)
{
v_x_1609_ = v_tail_1612_;
goto _start;
}
else
{
return v___x_1613_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__2___redArg___boxed(lean_object* v_a_1615_, lean_object* v_x_1616_){
_start:
{
uint8_t v_res_1617_; lean_object* v_r_1618_; 
v_res_1617_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__2___redArg(v_a_1615_, v_x_1616_);
lean_dec(v_x_1616_);
lean_dec(v_a_1615_);
v_r_1618_ = lean_box(v_res_1617_);
return v_r_1618_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_1619_, lean_object* v_x_1620_){
_start:
{
if (lean_obj_tag(v_x_1620_) == 0)
{
return v_x_1619_;
}
else
{
lean_object* v_key_1621_; lean_object* v_value_1622_; lean_object* v_tail_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1649_; 
v_key_1621_ = lean_ctor_get(v_x_1620_, 0);
v_value_1622_ = lean_ctor_get(v_x_1620_, 1);
v_tail_1623_ = lean_ctor_get(v_x_1620_, 2);
v_isSharedCheck_1649_ = !lean_is_exclusive(v_x_1620_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1625_ = v_x_1620_;
v_isShared_1626_ = v_isSharedCheck_1649_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_tail_1623_);
lean_inc(v_value_1622_);
lean_inc(v_key_1621_);
lean_dec(v_x_1620_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1649_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v___x_1627_; uint64_t v___y_1629_; 
v___x_1627_ = lean_array_get_size(v_x_1619_);
if (lean_obj_tag(v_key_1621_) == 0)
{
uint64_t v___x_1647_; 
v___x_1647_ = 1723ULL;
v___y_1629_ = v___x_1647_;
goto v___jp_1628_;
}
else
{
uint64_t v_hash_1648_; 
v_hash_1648_ = lean_ctor_get_uint64(v_key_1621_, sizeof(void*)*2);
v___y_1629_ = v_hash_1648_;
goto v___jp_1628_;
}
v___jp_1628_:
{
uint64_t v___x_1630_; uint64_t v___x_1631_; uint64_t v_fold_1632_; uint64_t v___x_1633_; uint64_t v___x_1634_; uint64_t v___x_1635_; size_t v___x_1636_; size_t v___x_1637_; size_t v___x_1638_; size_t v___x_1639_; size_t v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1643_; 
v___x_1630_ = 32ULL;
v___x_1631_ = lean_uint64_shift_right(v___y_1629_, v___x_1630_);
v_fold_1632_ = lean_uint64_xor(v___y_1629_, v___x_1631_);
v___x_1633_ = 16ULL;
v___x_1634_ = lean_uint64_shift_right(v_fold_1632_, v___x_1633_);
v___x_1635_ = lean_uint64_xor(v_fold_1632_, v___x_1634_);
v___x_1636_ = lean_uint64_to_usize(v___x_1635_);
v___x_1637_ = lean_usize_of_nat(v___x_1627_);
v___x_1638_ = ((size_t)1ULL);
v___x_1639_ = lean_usize_sub(v___x_1637_, v___x_1638_);
v___x_1640_ = lean_usize_land(v___x_1636_, v___x_1639_);
v___x_1641_ = lean_array_uget_borrowed(v_x_1619_, v___x_1640_);
lean_inc(v___x_1641_);
if (v_isShared_1626_ == 0)
{
lean_ctor_set(v___x_1625_, 2, v___x_1641_);
v___x_1643_ = v___x_1625_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_key_1621_);
lean_ctor_set(v_reuseFailAlloc_1646_, 1, v_value_1622_);
lean_ctor_set(v_reuseFailAlloc_1646_, 2, v___x_1641_);
v___x_1643_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
lean_object* v___x_1644_; 
v___x_1644_ = lean_array_uset(v_x_1619_, v___x_1640_, v___x_1643_);
v_x_1619_ = v___x_1644_;
v_x_1620_ = v_tail_1623_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__3_spec__4___redArg(lean_object* v_i_1650_, lean_object* v_source_1651_, lean_object* v_target_1652_){
_start:
{
lean_object* v___x_1653_; uint8_t v___x_1654_; 
v___x_1653_ = lean_array_get_size(v_source_1651_);
v___x_1654_ = lean_nat_dec_lt(v_i_1650_, v___x_1653_);
if (v___x_1654_ == 0)
{
lean_dec_ref(v_source_1651_);
lean_dec(v_i_1650_);
return v_target_1652_;
}
else
{
lean_object* v_es_1655_; lean_object* v___x_1656_; lean_object* v_source_1657_; lean_object* v_target_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; 
v_es_1655_ = lean_array_fget(v_source_1651_, v_i_1650_);
v___x_1656_ = lean_box(0);
v_source_1657_ = lean_array_fset(v_source_1651_, v_i_1650_, v___x_1656_);
v_target_1658_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__3_spec__4_spec__5___redArg(v_target_1652_, v_es_1655_);
v___x_1659_ = lean_unsigned_to_nat(1u);
v___x_1660_ = lean_nat_add(v_i_1650_, v___x_1659_);
lean_dec(v_i_1650_);
v_i_1650_ = v___x_1660_;
v_source_1651_ = v_source_1657_;
v_target_1652_ = v_target_1658_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__3___redArg(lean_object* v_data_1662_){
_start:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v_nbuckets_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; 
v___x_1663_ = lean_array_get_size(v_data_1662_);
v___x_1664_ = lean_unsigned_to_nat(2u);
v_nbuckets_1665_ = lean_nat_mul(v___x_1663_, v___x_1664_);
v___x_1666_ = lean_unsigned_to_nat(0u);
v___x_1667_ = lean_box(0);
v___x_1668_ = lean_mk_array(v_nbuckets_1665_, v___x_1667_);
v___x_1669_ = lean_array_propagate_mark(v_data_1662_, v___x_1668_);
v___x_1670_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__3_spec__4___redArg(v___x_1666_, v_data_1662_, v___x_1669_);
return v___x_1670_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1___redArg(lean_object* v_m_1671_, lean_object* v_a_1672_, lean_object* v_b_1673_){
_start:
{
lean_object* v_size_1674_; lean_object* v_buckets_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1721_; 
v_size_1674_ = lean_ctor_get(v_m_1671_, 0);
v_buckets_1675_ = lean_ctor_get(v_m_1671_, 1);
v_isSharedCheck_1721_ = !lean_is_exclusive(v_m_1671_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1677_ = v_m_1671_;
v_isShared_1678_ = v_isSharedCheck_1721_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_buckets_1675_);
lean_inc(v_size_1674_);
lean_dec(v_m_1671_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1721_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1679_; uint64_t v___y_1681_; 
v___x_1679_ = lean_array_get_size(v_buckets_1675_);
if (lean_obj_tag(v_a_1672_) == 0)
{
uint64_t v___x_1719_; 
v___x_1719_ = 1723ULL;
v___y_1681_ = v___x_1719_;
goto v___jp_1680_;
}
else
{
uint64_t v_hash_1720_; 
v_hash_1720_ = lean_ctor_get_uint64(v_a_1672_, sizeof(void*)*2);
v___y_1681_ = v_hash_1720_;
goto v___jp_1680_;
}
v___jp_1680_:
{
uint64_t v___x_1682_; uint64_t v___x_1683_; uint64_t v_fold_1684_; uint64_t v___x_1685_; uint64_t v___x_1686_; uint64_t v___x_1687_; size_t v___x_1688_; size_t v___x_1689_; size_t v___x_1690_; size_t v___x_1691_; size_t v___x_1692_; lean_object* v_bkt_1693_; uint8_t v___x_1694_; 
v___x_1682_ = 32ULL;
v___x_1683_ = lean_uint64_shift_right(v___y_1681_, v___x_1682_);
v_fold_1684_ = lean_uint64_xor(v___y_1681_, v___x_1683_);
v___x_1685_ = 16ULL;
v___x_1686_ = lean_uint64_shift_right(v_fold_1684_, v___x_1685_);
v___x_1687_ = lean_uint64_xor(v_fold_1684_, v___x_1686_);
v___x_1688_ = lean_uint64_to_usize(v___x_1687_);
v___x_1689_ = lean_usize_of_nat(v___x_1679_);
v___x_1690_ = ((size_t)1ULL);
v___x_1691_ = lean_usize_sub(v___x_1689_, v___x_1690_);
v___x_1692_ = lean_usize_land(v___x_1688_, v___x_1691_);
v_bkt_1693_ = lean_array_uget_borrowed(v_buckets_1675_, v___x_1692_);
v___x_1694_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__2___redArg(v_a_1672_, v_bkt_1693_);
if (v___x_1694_ == 0)
{
lean_object* v___x_1695_; lean_object* v_size_x27_1696_; lean_object* v___x_1697_; lean_object* v_buckets_x27_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; uint8_t v___x_1704_; 
v___x_1695_ = lean_unsigned_to_nat(1u);
v_size_x27_1696_ = lean_nat_add(v_size_1674_, v___x_1695_);
lean_dec(v_size_1674_);
lean_inc(v_bkt_1693_);
v___x_1697_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1697_, 0, v_a_1672_);
lean_ctor_set(v___x_1697_, 1, v_b_1673_);
lean_ctor_set(v___x_1697_, 2, v_bkt_1693_);
v_buckets_x27_1698_ = lean_array_uset(v_buckets_1675_, v___x_1692_, v___x_1697_);
v___x_1699_ = lean_unsigned_to_nat(4u);
v___x_1700_ = lean_nat_mul(v_size_x27_1696_, v___x_1699_);
v___x_1701_ = lean_unsigned_to_nat(3u);
v___x_1702_ = lean_nat_div(v___x_1700_, v___x_1701_);
lean_dec(v___x_1700_);
v___x_1703_ = lean_array_get_size(v_buckets_x27_1698_);
v___x_1704_ = lean_nat_dec_le(v___x_1702_, v___x_1703_);
lean_dec(v___x_1702_);
if (v___x_1704_ == 0)
{
lean_object* v_val_1705_; lean_object* v___x_1707_; 
v_val_1705_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__3___redArg(v_buckets_x27_1698_);
if (v_isShared_1678_ == 0)
{
lean_ctor_set(v___x_1677_, 1, v_val_1705_);
lean_ctor_set(v___x_1677_, 0, v_size_x27_1696_);
v___x_1707_ = v___x_1677_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_size_x27_1696_);
lean_ctor_set(v_reuseFailAlloc_1708_, 1, v_val_1705_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
else
{
lean_object* v___x_1710_; 
if (v_isShared_1678_ == 0)
{
lean_ctor_set(v___x_1677_, 1, v_buckets_x27_1698_);
lean_ctor_set(v___x_1677_, 0, v_size_x27_1696_);
v___x_1710_ = v___x_1677_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v_size_x27_1696_);
lean_ctor_set(v_reuseFailAlloc_1711_, 1, v_buckets_x27_1698_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
}
}
}
else
{
lean_object* v___x_1712_; lean_object* v_buckets_x27_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1717_; 
lean_inc(v_bkt_1693_);
v___x_1712_ = lean_box(0);
v_buckets_x27_1713_ = lean_array_uset(v_buckets_1675_, v___x_1692_, v___x_1712_);
v___x_1714_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__4___redArg(v_a_1672_, v_b_1673_, v_bkt_1693_);
v___x_1715_ = lean_array_uset(v_buckets_x27_1713_, v___x_1692_, v___x_1714_);
if (v_isShared_1678_ == 0)
{
lean_ctor_set(v___x_1677_, 1, v___x_1715_);
v___x_1717_ = v___x_1677_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1718_; 
v_reuseFailAlloc_1718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1718_, 0, v_size_1674_);
lean_ctor_set(v_reuseFailAlloc_1718_, 1, v___x_1715_);
v___x_1717_ = v_reuseFailAlloc_1718_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
return v___x_1717_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached___redArg(lean_object* v_e_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_, lean_object* v_a_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_){
_start:
{
lean_object* v___x_1731_; lean_object* v_rintroBackwardRuleCache_1732_; lean_object* v_declName_1733_; lean_object* v_numPremises_1734_; lean_object* v___x_1735_; 
v___x_1731_ = lean_st_ref_get(v_a_1723_);
v_rintroBackwardRuleCache_1732_ = lean_ctor_get(v___x_1731_, 4);
lean_inc_ref(v_rintroBackwardRuleCache_1732_);
lean_dec(v___x_1731_);
v_declName_1733_ = lean_ctor_get(v_e_1722_, 0);
lean_inc(v_declName_1733_);
v_numPremises_1734_ = lean_ctor_get(v_e_1722_, 1);
lean_inc(v_numPremises_1734_);
lean_dec_ref(v_e_1722_);
v___x_1735_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0___redArg(v_rintroBackwardRuleCache_1732_, v_declName_1733_);
lean_dec_ref(v_rintroBackwardRuleCache_1732_);
if (lean_obj_tag(v___x_1735_) == 1)
{
lean_object* v_val_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1743_; 
lean_dec(v_numPremises_1734_);
lean_dec(v_declName_1733_);
v_val_1736_ = lean_ctor_get(v___x_1735_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v___x_1735_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1738_ = v___x_1735_;
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_val_1736_);
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
lean_ctor_set_tag(v___x_1738_, 0);
v___x_1741_ = v___x_1738_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v_val_1736_);
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
lean_object* v___x_1744_; lean_object* v___x_1745_; 
lean_dec(v___x_1735_);
v___x_1744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1744_, 0, v_numPremises_1734_);
lean_inc(v_declName_1733_);
v___x_1745_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v_declName_1733_, v___x_1744_, v_a_1726_, v_a_1727_, v_a_1728_, v_a_1729_);
if (lean_obj_tag(v___x_1745_) == 0)
{
lean_object* v_a_1746_; lean_object* v___x_1747_; 
v_a_1746_ = lean_ctor_get(v___x_1745_, 0);
lean_inc(v_a_1746_);
lean_dec_ref_known(v___x_1745_, 1);
v___x_1747_ = l_Lean_Meta_Sym_BackwardRule_shareCommon(v_a_1746_, v_a_1724_, v_a_1725_, v_a_1726_, v_a_1727_, v_a_1728_, v_a_1729_);
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1777_; 
v_a_1748_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1750_ = v___x_1747_;
v_isShared_1751_ = v_isSharedCheck_1777_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v___x_1747_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1777_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1752_; lean_object* v_specBackwardRuleCache_1753_; lean_object* v_splitBackwardRuleCache_1754_; lean_object* v_latticeBackwardRuleCache_1755_; lean_object* v_frameBackwardRuleCache_1756_; lean_object* v_rintroBackwardRuleCache_1757_; lean_object* v_frameDB_1758_; lean_object* v_invariants_1759_; lean_object* v_vcs_1760_; lean_object* v_simpState_1761_; lean_object* v_fuel_1762_; lean_object* v_inlineHandledInvariants_1763_; lean_object* v_pendingJoinPoints_1764_; lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1776_; 
v___x_1752_ = lean_st_ref_take(v_a_1723_);
v_specBackwardRuleCache_1753_ = lean_ctor_get(v___x_1752_, 0);
v_splitBackwardRuleCache_1754_ = lean_ctor_get(v___x_1752_, 1);
v_latticeBackwardRuleCache_1755_ = lean_ctor_get(v___x_1752_, 2);
v_frameBackwardRuleCache_1756_ = lean_ctor_get(v___x_1752_, 3);
v_rintroBackwardRuleCache_1757_ = lean_ctor_get(v___x_1752_, 4);
v_frameDB_1758_ = lean_ctor_get(v___x_1752_, 5);
v_invariants_1759_ = lean_ctor_get(v___x_1752_, 6);
v_vcs_1760_ = lean_ctor_get(v___x_1752_, 7);
v_simpState_1761_ = lean_ctor_get(v___x_1752_, 8);
v_fuel_1762_ = lean_ctor_get(v___x_1752_, 9);
v_inlineHandledInvariants_1763_ = lean_ctor_get(v___x_1752_, 10);
v_pendingJoinPoints_1764_ = lean_ctor_get(v___x_1752_, 11);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1752_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1766_ = v___x_1752_;
v_isShared_1767_ = v_isSharedCheck_1776_;
goto v_resetjp_1765_;
}
else
{
lean_inc(v_pendingJoinPoints_1764_);
lean_inc(v_inlineHandledInvariants_1763_);
lean_inc(v_fuel_1762_);
lean_inc(v_simpState_1761_);
lean_inc(v_vcs_1760_);
lean_inc(v_invariants_1759_);
lean_inc(v_frameDB_1758_);
lean_inc(v_rintroBackwardRuleCache_1757_);
lean_inc(v_frameBackwardRuleCache_1756_);
lean_inc(v_latticeBackwardRuleCache_1755_);
lean_inc(v_splitBackwardRuleCache_1754_);
lean_inc(v_specBackwardRuleCache_1753_);
lean_dec(v___x_1752_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1776_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v___x_1768_; lean_object* v___x_1770_; 
lean_inc(v_a_1748_);
v___x_1768_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1___redArg(v_rintroBackwardRuleCache_1757_, v_declName_1733_, v_a_1748_);
if (v_isShared_1767_ == 0)
{
lean_ctor_set(v___x_1766_, 4, v___x_1768_);
v___x_1770_ = v___x_1766_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_specBackwardRuleCache_1753_);
lean_ctor_set(v_reuseFailAlloc_1775_, 1, v_splitBackwardRuleCache_1754_);
lean_ctor_set(v_reuseFailAlloc_1775_, 2, v_latticeBackwardRuleCache_1755_);
lean_ctor_set(v_reuseFailAlloc_1775_, 3, v_frameBackwardRuleCache_1756_);
lean_ctor_set(v_reuseFailAlloc_1775_, 4, v___x_1768_);
lean_ctor_set(v_reuseFailAlloc_1775_, 5, v_frameDB_1758_);
lean_ctor_set(v_reuseFailAlloc_1775_, 6, v_invariants_1759_);
lean_ctor_set(v_reuseFailAlloc_1775_, 7, v_vcs_1760_);
lean_ctor_set(v_reuseFailAlloc_1775_, 8, v_simpState_1761_);
lean_ctor_set(v_reuseFailAlloc_1775_, 9, v_fuel_1762_);
lean_ctor_set(v_reuseFailAlloc_1775_, 10, v_inlineHandledInvariants_1763_);
lean_ctor_set(v_reuseFailAlloc_1775_, 11, v_pendingJoinPoints_1764_);
v___x_1770_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
lean_object* v___x_1771_; lean_object* v___x_1773_; 
v___x_1771_ = lean_st_ref_put(v_a_1723_, v___x_1770_);
if (v_isShared_1751_ == 0)
{
v___x_1773_ = v___x_1750_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v_a_1748_);
v___x_1773_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
return v___x_1773_;
}
}
}
}
}
else
{
lean_dec(v_declName_1733_);
return v___x_1747_;
}
}
else
{
lean_dec(v_declName_1733_);
return v___x_1745_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached___redArg___boxed(lean_object* v_e_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_, lean_object* v_a_1786_){
_start:
{
lean_object* v_res_1787_; 
v_res_1787_ = l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached___redArg(v_e_1778_, v_a_1779_, v_a_1780_, v_a_1781_, v_a_1782_, v_a_1783_, v_a_1784_, v_a_1785_);
lean_dec(v_a_1785_);
lean_dec_ref(v_a_1784_);
lean_dec(v_a_1783_);
lean_dec_ref(v_a_1782_);
lean_dec(v_a_1781_);
lean_dec_ref(v_a_1780_);
lean_dec(v_a_1779_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached(lean_object* v_e_1788_, lean_object* v_a_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_){
_start:
{
lean_object* v___x_1801_; 
v___x_1801_ = l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached___redArg(v_e_1788_, v_a_1790_, v_a_1794_, v_a_1795_, v_a_1796_, v_a_1797_, v_a_1798_, v_a_1799_);
return v___x_1801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached___boxed(lean_object* v_e_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_, lean_object* v_a_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_){
_start:
{
lean_object* v_res_1815_; 
v_res_1815_ = l_Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached(v_e_1802_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_, v_a_1807_, v_a_1808_, v_a_1809_, v_a_1810_, v_a_1811_, v_a_1812_, v_a_1813_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0(lean_object* v_00_u03b2_1816_, lean_object* v_m_1817_, lean_object* v_a_1818_){
_start:
{
lean_object* v___x_1819_; 
v___x_1819_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0___redArg(v_m_1817_, v_a_1818_);
return v___x_1819_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0___boxed(lean_object* v_00_u03b2_1820_, lean_object* v_m_1821_, lean_object* v_a_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0(v_00_u03b2_1820_, v_m_1821_, v_a_1822_);
lean_dec(v_a_1822_);
lean_dec_ref(v_m_1821_);
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1(lean_object* v_00_u03b2_1824_, lean_object* v_m_1825_, lean_object* v_a_1826_, lean_object* v_b_1827_){
_start:
{
lean_object* v___x_1828_; 
v___x_1828_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1___redArg(v_m_1825_, v_a_1826_, v_b_1827_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0_spec__0(lean_object* v_00_u03b2_1829_, lean_object* v_a_1830_, lean_object* v_x_1831_){
_start:
{
lean_object* v___x_1832_; 
v___x_1832_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0_spec__0___redArg(v_a_1830_, v_x_1831_);
return v___x_1832_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1833_, lean_object* v_a_1834_, lean_object* v_x_1835_){
_start:
{
lean_object* v_res_1836_; 
v_res_1836_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__0_spec__0(v_00_u03b2_1833_, v_a_1834_, v_x_1835_);
lean_dec(v_x_1835_);
lean_dec(v_a_1834_);
return v_res_1836_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__2(lean_object* v_00_u03b2_1837_, lean_object* v_a_1838_, lean_object* v_x_1839_){
_start:
{
uint8_t v___x_1840_; 
v___x_1840_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__2___redArg(v_a_1838_, v_x_1839_);
return v___x_1840_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1841_, lean_object* v_a_1842_, lean_object* v_x_1843_){
_start:
{
uint8_t v_res_1844_; lean_object* v_r_1845_; 
v_res_1844_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__2(v_00_u03b2_1841_, v_a_1842_, v_x_1843_);
lean_dec(v_x_1843_);
lean_dec(v_a_1842_);
v_r_1845_ = lean_box(v_res_1844_);
return v_r_1845_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__3(lean_object* v_00_u03b2_1846_, lean_object* v_data_1847_){
_start:
{
lean_object* v___x_1848_; 
v___x_1848_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__3___redArg(v_data_1847_);
return v___x_1848_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__4(lean_object* v_00_u03b2_1849_, lean_object* v_a_1850_, lean_object* v_b_1851_, lean_object* v_x_1852_){
_start:
{
lean_object* v___x_1853_; 
v___x_1853_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__4___redArg(v_a_1850_, v_b_1851_, v_x_1852_);
return v___x_1853_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_1854_, lean_object* v_i_1855_, lean_object* v_source_1856_, lean_object* v_target_1857_){
_start:
{
lean_object* v___x_1858_; 
v___x_1858_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__3_spec__4___redArg(v_i_1855_, v_source_1856_, v_target_1857_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_1859_, lean_object* v_x_1860_, lean_object* v_x_1861_){
_start:
{
lean_object* v___x_1862_; 
v___x_1862_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_VCGen_mkBackwardRuleForRIntroCached_spec__1_spec__3_spec__4_spec__5___redArg(v_x_1860_, v_x_1861_);
return v___x_1862_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_VCGen_Split(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_Context(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_RuleConstruction(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_LatticeOp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Decidable(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_RuleCache(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Do_VCGen_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_RuleConstruction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_LatticeOp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_VCGen_RuleCache(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_VCGen_Split(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_VCGen_Context(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_VCGen_RuleConstruction(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_VCGen_LatticeOp(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_VCGen_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
lean_object* initialize_Lean_Meta_Decidable(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_VCGen_RuleCache(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_VCGen_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_VCGen_RuleConstruction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_VCGen_LatticeOp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_VCGen_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_RuleCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_VCGen_RuleCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_VCGen_RuleCache(builtin);
}
#ifdef __cplusplus
}
#endif
