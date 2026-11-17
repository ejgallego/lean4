// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.Frame
// Imports: public import Std.Tactic.Do.Syntax public import Lean.Elab.Tactic.Do.ProofMode.Focus
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
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_collectHyps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Elab.Tactic.Do.ProofMode.Frame"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 100, .m_capacity = 100, .m_length = 99, .m_data = "_private.Lean.Elab.Tactic.Do.ProofMode.Frame.0.Lean.Elab.Tactic.Do.ProofMode.transferHypNames.label"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Frame"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "frame"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__4___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1_value)} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__6___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HasFrame"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Could not infer frame"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___lam__0___boxed(lean_object**);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__1_value),LEAN_SCALAR_PTR_LITERAL(108, 148, 215, 79, 118, 195, 150, 87)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "not in proof mode"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mframe"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(206, 145, 19, 234, 215, 109, 237, 186)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ProofMode"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elabMFrame"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(88, 236, 37, 169, 242, 201, 22, 247)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_collectHyps(lean_object* v_P_1_, lean_object* v_acc_2_){
_start:
{
lean_object* v___x_3_; 
lean_inc_ref(v_P_1_);
v___x_3_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_P_1_);
if (lean_obj_tag(v___x_3_) == 1)
{
lean_object* v_val_4_; lean_object* v___x_5_; 
lean_dec_ref(v_P_1_);
v_val_4_ = lean_ctor_get(v___x_3_, 0);
lean_inc(v_val_4_);
lean_dec_ref_known(v___x_3_, 1);
v___x_5_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5_, 0, v_val_4_);
lean_ctor_set(v___x_5_, 1, v_acc_2_);
return v___x_5_;
}
else
{
lean_object* v___x_6_; 
lean_dec(v___x_3_);
v___x_6_ = l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(v_P_1_);
lean_dec_ref(v_P_1_);
if (lean_obj_tag(v___x_6_) == 1)
{
lean_object* v_val_7_; lean_object* v_snd_8_; lean_object* v_snd_9_; lean_object* v_fst_10_; lean_object* v_snd_11_; lean_object* v___x_12_; 
v_val_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_val_7_);
lean_dec_ref_known(v___x_6_, 1);
v_snd_8_ = lean_ctor_get(v_val_7_, 1);
lean_inc(v_snd_8_);
lean_dec(v_val_7_);
v_snd_9_ = lean_ctor_get(v_snd_8_, 1);
lean_inc(v_snd_9_);
lean_dec(v_snd_8_);
v_fst_10_ = lean_ctor_get(v_snd_9_, 0);
lean_inc(v_fst_10_);
v_snd_11_ = lean_ctor_get(v_snd_9_, 1);
lean_inc(v_snd_11_);
lean_dec(v_snd_9_);
v___x_12_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_collectHyps(v_snd_11_, v_acc_2_);
v_P_1_ = v_fst_10_;
v_acc_2_ = v___x_12_;
goto _start;
}
else
{
lean_dec(v___x_6_);
return v_acc_2_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg(lean_object* v___y_14_){
_start:
{
lean_object* v___x_16_; lean_object* v_ngen_17_; lean_object* v_namePrefix_18_; lean_object* v_idx_19_; lean_object* v___x_21_; uint8_t v_isShared_22_; uint8_t v_isSharedCheck_49_; 
v___x_16_ = lean_st_ref_get(v___y_14_);
v_ngen_17_ = lean_ctor_get(v___x_16_, 2);
lean_inc_ref(v_ngen_17_);
lean_dec(v___x_16_);
v_namePrefix_18_ = lean_ctor_get(v_ngen_17_, 0);
v_idx_19_ = lean_ctor_get(v_ngen_17_, 1);
v_isSharedCheck_49_ = !lean_is_exclusive(v_ngen_17_);
if (v_isSharedCheck_49_ == 0)
{
v___x_21_ = v_ngen_17_;
v_isShared_22_ = v_isSharedCheck_49_;
goto v_resetjp_20_;
}
else
{
lean_inc(v_idx_19_);
lean_inc(v_namePrefix_18_);
lean_dec(v_ngen_17_);
v___x_21_ = lean_box(0);
v_isShared_22_ = v_isSharedCheck_49_;
goto v_resetjp_20_;
}
v_resetjp_20_:
{
lean_object* v_r_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_27_; 
lean_inc(v_idx_19_);
lean_inc(v_namePrefix_18_);
v_r_23_ = l_Lean_Name_num___override(v_namePrefix_18_, v_idx_19_);
v___x_24_ = lean_unsigned_to_nat(1u);
v___x_25_ = lean_nat_add(v_idx_19_, v___x_24_);
lean_dec(v_idx_19_);
if (v_isShared_22_ == 0)
{
lean_ctor_set(v___x_21_, 1, v___x_25_);
v___x_27_ = v___x_21_;
goto v_reusejp_26_;
}
else
{
lean_object* v_reuseFailAlloc_48_; 
v_reuseFailAlloc_48_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_48_, 0, v_namePrefix_18_);
lean_ctor_set(v_reuseFailAlloc_48_, 1, v___x_25_);
v___x_27_ = v_reuseFailAlloc_48_;
goto v_reusejp_26_;
}
v_reusejp_26_:
{
lean_object* v___x_28_; lean_object* v_env_29_; lean_object* v_nextMacroScope_30_; lean_object* v_auxDeclNGen_31_; lean_object* v_traceState_32_; lean_object* v_cache_33_; lean_object* v_recordedDeps_34_; lean_object* v_messages_35_; lean_object* v_infoState_36_; lean_object* v_snapshotTasks_37_; lean_object* v___x_39_; uint8_t v_isShared_40_; uint8_t v_isSharedCheck_46_; 
v___x_28_ = lean_st_ref_take(v___y_14_);
v_env_29_ = lean_ctor_get(v___x_28_, 0);
v_nextMacroScope_30_ = lean_ctor_get(v___x_28_, 1);
v_auxDeclNGen_31_ = lean_ctor_get(v___x_28_, 3);
v_traceState_32_ = lean_ctor_get(v___x_28_, 4);
v_cache_33_ = lean_ctor_get(v___x_28_, 5);
v_recordedDeps_34_ = lean_ctor_get(v___x_28_, 6);
v_messages_35_ = lean_ctor_get(v___x_28_, 7);
v_infoState_36_ = lean_ctor_get(v___x_28_, 8);
v_snapshotTasks_37_ = lean_ctor_get(v___x_28_, 9);
v_isSharedCheck_46_ = !lean_is_exclusive(v___x_28_);
if (v_isSharedCheck_46_ == 0)
{
lean_object* v_unused_47_; 
v_unused_47_ = lean_ctor_get(v___x_28_, 2);
lean_dec(v_unused_47_);
v___x_39_ = v___x_28_;
v_isShared_40_ = v_isSharedCheck_46_;
goto v_resetjp_38_;
}
else
{
lean_inc(v_snapshotTasks_37_);
lean_inc(v_infoState_36_);
lean_inc(v_messages_35_);
lean_inc(v_recordedDeps_34_);
lean_inc(v_cache_33_);
lean_inc(v_traceState_32_);
lean_inc(v_auxDeclNGen_31_);
lean_inc(v_nextMacroScope_30_);
lean_inc(v_env_29_);
lean_dec(v___x_28_);
v___x_39_ = lean_box(0);
v_isShared_40_ = v_isSharedCheck_46_;
goto v_resetjp_38_;
}
v_resetjp_38_:
{
lean_object* v___x_42_; 
if (v_isShared_40_ == 0)
{
lean_ctor_set(v___x_39_, 2, v___x_27_);
v___x_42_ = v___x_39_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_env_29_);
lean_ctor_set(v_reuseFailAlloc_45_, 1, v_nextMacroScope_30_);
lean_ctor_set(v_reuseFailAlloc_45_, 2, v___x_27_);
lean_ctor_set(v_reuseFailAlloc_45_, 3, v_auxDeclNGen_31_);
lean_ctor_set(v_reuseFailAlloc_45_, 4, v_traceState_32_);
lean_ctor_set(v_reuseFailAlloc_45_, 5, v_cache_33_);
lean_ctor_set(v_reuseFailAlloc_45_, 6, v_recordedDeps_34_);
lean_ctor_set(v_reuseFailAlloc_45_, 7, v_messages_35_);
lean_ctor_set(v_reuseFailAlloc_45_, 8, v_infoState_36_);
lean_ctor_set(v_reuseFailAlloc_45_, 9, v_snapshotTasks_37_);
v___x_42_ = v_reuseFailAlloc_45_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = lean_st_ref_put(v___y_14_, v___x_42_);
v___x_44_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_44_, 0, v_r_23_);
return v___x_44_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg___boxed(lean_object* v___y_50_, lean_object* v___y_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg(v___y_50_);
lean_dec(v___y_50_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0(lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg(v___y_56_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___boxed(lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0(v___y_59_, v___y_60_, v___y_61_, v___y_62_);
lean_dec(v___y_62_);
lean_dec_ref(v___y_61_);
lean_dec(v___y_60_);
lean_dec_ref(v___y_59_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2(lean_object* v_msg_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_){
_start:
{
lean_object* v___f_72_; lean_object* v___x_3108__overap_73_; lean_object* v___x_74_; 
v___f_72_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___closed__0));
v___x_3108__overap_73_ = lean_panic_fn_borrowed(v___f_72_, v_msg_66_);
lean_inc(v___y_70_);
lean_inc_ref(v___y_69_);
lean_inc(v___y_68_);
lean_inc_ref(v___y_67_);
v___x_74_ = lean_apply_5(v___x_3108__overap_73_, v___y_67_, v___y_68_, v___y_69_, v___y_70_, lean_box(0));
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2___boxed(lean_object* v_msg_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2(v_msg_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg(lean_object* v_a_85_, lean_object* v_Ps_86_, lean_object* v_a_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_){
_start:
{
lean_object* v_snd_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_179_; 
v_snd_93_ = lean_ctor_get(v_a_87_, 1);
v_isSharedCheck_179_ = !lean_is_exclusive(v_a_87_);
if (v_isSharedCheck_179_ == 0)
{
lean_object* v_unused_180_; 
v_unused_180_ = lean_ctor_get(v_a_87_, 0);
lean_dec(v_unused_180_);
v___x_95_ = v_a_87_;
v_isShared_96_ = v_isSharedCheck_179_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_snd_93_);
lean_dec(v_a_87_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_179_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = lean_box(0);
v___x_98_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1));
v___x_99_ = l_Lean_Core_mkFreshUserName(v___x_98_, v___y_90_, v___y_91_);
if (lean_obj_tag(v___x_99_) == 0)
{
lean_object* v_a_100_; lean_object* v___x_101_; 
v_a_100_ = lean_ctor_get(v___x_99_, 0);
lean_inc(v_a_100_);
lean_dec_ref_known(v___x_99_, 1);
v___x_101_ = l_Lean_mkFreshId___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__0___redArg(v___y_91_);
if (lean_obj_tag(v___x_101_) == 0)
{
if (lean_obj_tag(v_snd_93_) == 1)
{
lean_object* v_head_102_; lean_object* v_tail_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_147_; 
lean_dec_ref_known(v___x_101_, 1);
lean_dec(v_a_100_);
v_head_102_ = lean_ctor_get(v_snd_93_, 0);
v_tail_103_ = lean_ctor_get(v_snd_93_, 1);
v_isSharedCheck_147_ = !lean_is_exclusive(v_snd_93_);
if (v_isSharedCheck_147_ == 0)
{
v___x_105_ = v_snd_93_;
v_isShared_106_ = v_isSharedCheck_147_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_tail_103_);
lean_inc(v_head_102_);
lean_dec(v_snd_93_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_147_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v_name_107_; lean_object* v_uniq_108_; lean_object* v_p_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_146_; 
v_name_107_ = lean_ctor_get(v_head_102_, 0);
v_uniq_108_ = lean_ctor_get(v_head_102_, 1);
v_p_109_ = lean_ctor_get(v_head_102_, 2);
v_isSharedCheck_146_ = !lean_is_exclusive(v_head_102_);
if (v_isSharedCheck_146_ == 0)
{
v___x_111_ = v_head_102_;
v_isShared_112_ = v_isSharedCheck_146_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_p_109_);
lean_inc(v_uniq_108_);
lean_inc(v_name_107_);
lean_dec(v_head_102_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_146_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_113_; 
lean_inc_ref(v_a_85_);
v___x_113_ = l_Lean_Meta_isExprDefEq(v_p_109_, v_a_85_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_137_; 
v_a_114_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_137_ == 0)
{
v___x_116_ = v___x_113_;
v_isShared_117_ = v_isSharedCheck_137_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___x_113_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_137_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
uint8_t v___x_118_; 
v___x_118_ = lean_unbox(v_a_114_);
lean_dec(v_a_114_);
if (v___x_118_ == 0)
{
lean_object* v___x_120_; 
lean_del_object(v___x_116_);
lean_del_object(v___x_111_);
lean_dec(v_uniq_108_);
lean_dec(v_name_107_);
lean_del_object(v___x_105_);
if (v_isShared_96_ == 0)
{
lean_ctor_set(v___x_95_, 1, v_tail_103_);
lean_ctor_set(v___x_95_, 0, v___x_97_);
v___x_120_ = v___x_95_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v___x_97_);
lean_ctor_set(v_reuseFailAlloc_122_, 1, v_tail_103_);
v___x_120_ = v_reuseFailAlloc_122_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
v_a_87_ = v___x_120_;
goto _start;
}
}
else
{
lean_object* v___x_124_; 
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 2, v_a_85_);
v___x_124_ = v___x_111_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_name_107_);
lean_ctor_set(v_reuseFailAlloc_136_, 1, v_uniq_108_);
lean_ctor_set(v_reuseFailAlloc_136_, 2, v_a_85_);
v___x_124_ = v_reuseFailAlloc_136_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
lean_object* v___x_125_; lean_object* v___x_127_; 
v___x_125_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_124_);
if (v_isShared_96_ == 0)
{
lean_ctor_set(v___x_95_, 1, v___x_125_);
lean_ctor_set(v___x_95_, 0, v_Ps_86_);
v___x_127_ = v___x_95_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_Ps_86_);
lean_ctor_set(v_reuseFailAlloc_135_, 1, v___x_125_);
v___x_127_ = v_reuseFailAlloc_135_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
lean_object* v___x_128_; lean_object* v___x_130_; 
v___x_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
if (v_isShared_106_ == 0)
{
lean_ctor_set_tag(v___x_105_, 0);
lean_ctor_set(v___x_105_, 0, v___x_128_);
v___x_130_ = v___x_105_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v___x_128_);
lean_ctor_set(v_reuseFailAlloc_134_, 1, v_tail_103_);
v___x_130_ = v_reuseFailAlloc_134_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
lean_object* v___x_132_; 
if (v_isShared_117_ == 0)
{
lean_ctor_set(v___x_116_, 0, v___x_130_);
v___x_132_ = v___x_116_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_130_);
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
}
}
else
{
lean_object* v_a_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_145_; 
lean_del_object(v___x_111_);
lean_dec(v_uniq_108_);
lean_dec(v_name_107_);
lean_del_object(v___x_105_);
lean_dec(v_tail_103_);
lean_del_object(v___x_95_);
lean_dec(v_Ps_86_);
lean_dec_ref(v_a_85_);
v_a_138_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_145_ == 0)
{
v___x_140_ = v___x_113_;
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_a_138_);
lean_dec(v___x_113_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_143_; 
if (v_isShared_141_ == 0)
{
v___x_143_ = v___x_140_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_a_138_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
}
}
}
else
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_162_; 
v_a_148_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_162_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_162_ == 0)
{
v___x_150_ = v___x_101_;
v_isShared_151_ = v_isSharedCheck_162_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_101_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_162_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_155_; 
v___x_152_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_152_, 0, v_a_100_);
lean_ctor_set(v___x_152_, 1, v_a_148_);
lean_ctor_set(v___x_152_, 2, v_a_85_);
v___x_153_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_152_);
if (v_isShared_96_ == 0)
{
lean_ctor_set(v___x_95_, 1, v___x_153_);
lean_ctor_set(v___x_95_, 0, v_Ps_86_);
v___x_155_ = v___x_95_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v_Ps_86_);
lean_ctor_set(v_reuseFailAlloc_161_, 1, v___x_153_);
v___x_155_ = v_reuseFailAlloc_161_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_159_; 
v___x_156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
v___x_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
lean_ctor_set(v___x_157_, 1, v_snd_93_);
if (v_isShared_151_ == 0)
{
lean_ctor_set(v___x_150_, 0, v___x_157_);
v___x_159_ = v___x_150_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v___x_157_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
}
}
else
{
lean_object* v_a_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_170_; 
lean_dec(v_a_100_);
lean_del_object(v___x_95_);
lean_dec(v_snd_93_);
lean_dec(v_Ps_86_);
lean_dec_ref(v_a_85_);
v_a_163_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_170_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_170_ == 0)
{
v___x_165_ = v___x_101_;
v_isShared_166_ = v_isSharedCheck_170_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_a_163_);
lean_dec(v___x_101_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_170_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v___x_168_; 
if (v_isShared_166_ == 0)
{
v___x_168_ = v___x_165_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v_a_163_);
v___x_168_ = v_reuseFailAlloc_169_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
return v___x_168_;
}
}
}
}
else
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_178_; 
lean_del_object(v___x_95_);
lean_dec(v_snd_93_);
lean_dec(v_Ps_86_);
lean_dec_ref(v_a_85_);
v_a_171_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_178_ == 0)
{
v___x_173_ = v___x_99_;
v_isShared_174_ = v_isSharedCheck_178_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_99_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_178_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_176_; 
if (v_isShared_174_ == 0)
{
v___x_176_ = v___x_173_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v_a_171_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___boxed(lean_object* v_a_181_, lean_object* v_Ps_182_, lean_object* v_a_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg(v_a_181_, v_Ps_182_, v_a_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
lean_dec(v___y_187_);
lean_dec_ref(v___y_186_);
lean_dec(v___y_185_);
lean_dec_ref(v___y_184_);
return v_res_189_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__3(void){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_193_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__2));
v___x_194_ = lean_unsigned_to_nat(8u);
v___x_195_ = lean_unsigned_to_nat(51u);
v___x_196_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__1));
v___x_197_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__0));
v___x_198_ = l_mkPanicMessageWithDecl(v___x_197_, v___x_196_, v___x_195_, v___x_194_, v___x_193_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label(lean_object* v_Ps_199_, lean_object* v_P_x27_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_, lean_object* v_a_204_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_P_x27_200_, v_a_202_);
if (lean_obj_tag(v___x_206_) == 0)
{
lean_object* v_a_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_270_; 
v_a_207_ = lean_ctor_get(v___x_206_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_206_);
if (v_isSharedCheck_270_ == 0)
{
v___x_209_ = v___x_206_;
v_isShared_210_ = v_isSharedCheck_270_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_a_207_);
lean_dec(v___x_206_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_270_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_211_; 
lean_inc(v_a_207_);
v___x_211_ = l_Lean_Elab_Tactic_Do_ProofMode_parseEmptyHyp_x3f(v_a_207_);
if (lean_obj_tag(v___x_211_) == 1)
{
lean_object* v___x_212_; lean_object* v___x_214_; 
lean_dec_ref_known(v___x_211_, 1);
v___x_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_212_, 0, v_Ps_199_);
lean_ctor_set(v___x_212_, 1, v_a_207_);
if (v_isShared_210_ == 0)
{
lean_ctor_set(v___x_209_, 0, v___x_212_);
v___x_214_ = v___x_209_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v___x_212_);
v___x_214_ = v_reuseFailAlloc_215_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
return v___x_214_;
}
}
else
{
lean_object* v___x_216_; 
lean_dec(v___x_211_);
lean_del_object(v___x_209_);
v___x_216_ = l_Lean_Elab_Tactic_Do_ProofMode_parseAnd_x3f(v_a_207_);
if (lean_obj_tag(v___x_216_) == 1)
{
lean_object* v_val_217_; lean_object* v_snd_218_; lean_object* v_snd_219_; lean_object* v_fst_220_; lean_object* v_fst_221_; lean_object* v_fst_222_; lean_object* v_snd_223_; lean_object* v___x_224_; 
lean_dec(v_a_207_);
v_val_217_ = lean_ctor_get(v___x_216_, 0);
lean_inc(v_val_217_);
lean_dec_ref_known(v___x_216_, 1);
v_snd_218_ = lean_ctor_get(v_val_217_, 1);
lean_inc(v_snd_218_);
v_snd_219_ = lean_ctor_get(v_snd_218_, 1);
lean_inc(v_snd_219_);
v_fst_220_ = lean_ctor_get(v_val_217_, 0);
lean_inc(v_fst_220_);
lean_dec(v_val_217_);
v_fst_221_ = lean_ctor_get(v_snd_218_, 0);
lean_inc(v_fst_221_);
lean_dec(v_snd_218_);
v_fst_222_ = lean_ctor_get(v_snd_219_, 0);
lean_inc(v_fst_222_);
v_snd_223_ = lean_ctor_get(v_snd_219_, 1);
lean_inc(v_snd_223_);
lean_dec(v_snd_219_);
v___x_224_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label(v_Ps_199_, v_fst_222_, v_a_201_, v_a_202_, v_a_203_, v_a_204_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v_a_225_; lean_object* v_fst_226_; lean_object* v_snd_227_; lean_object* v___x_228_; 
v_a_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_a_225_);
lean_dec_ref_known(v___x_224_, 1);
v_fst_226_ = lean_ctor_get(v_a_225_, 0);
lean_inc(v_fst_226_);
v_snd_227_ = lean_ctor_get(v_a_225_, 1);
lean_inc(v_snd_227_);
lean_dec(v_a_225_);
v___x_228_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label(v_fst_226_, v_snd_223_, v_a_201_, v_a_202_, v_a_203_, v_a_204_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_246_; 
v_a_229_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_246_ == 0)
{
v___x_231_ = v___x_228_;
v_isShared_232_ = v_isSharedCheck_246_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_228_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_246_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v_fst_233_; lean_object* v_snd_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_245_; 
v_fst_233_ = lean_ctor_get(v_a_229_, 0);
v_snd_234_ = lean_ctor_get(v_a_229_, 1);
v_isSharedCheck_245_ = !lean_is_exclusive(v_a_229_);
if (v_isSharedCheck_245_ == 0)
{
v___x_236_ = v_a_229_;
v_isShared_237_ = v_isSharedCheck_245_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_snd_234_);
lean_inc(v_fst_233_);
lean_dec(v_a_229_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_245_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___x_238_; lean_object* v___x_240_; 
v___x_238_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd_x21(v_fst_220_, v_fst_221_, v_snd_227_, v_snd_234_);
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 1, v___x_238_);
v___x_240_ = v___x_236_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_fst_233_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v___x_238_);
v___x_240_ = v_reuseFailAlloc_244_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
lean_object* v___x_242_; 
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 0, v___x_240_);
v___x_242_ = v___x_231_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v___x_240_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
}
}
else
{
lean_dec(v_snd_227_);
lean_dec(v_fst_221_);
lean_dec(v_fst_220_);
return v___x_228_;
}
}
else
{
lean_dec(v_snd_223_);
lean_dec(v_fst_221_);
lean_dec(v_fst_220_);
return v___x_224_;
}
}
else
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
lean_dec(v___x_216_);
v___x_247_ = lean_box(0);
lean_inc(v_Ps_199_);
v___x_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
lean_ctor_set(v___x_248_, 1, v_Ps_199_);
v___x_249_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg(v_a_207_, v_Ps_199_, v___x_248_, v_a_201_, v_a_202_, v_a_203_, v_a_204_);
if (lean_obj_tag(v___x_249_) == 0)
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_261_; 
v_a_250_ = lean_ctor_get(v___x_249_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_261_ == 0)
{
v___x_252_ = v___x_249_;
v_isShared_253_ = v_isSharedCheck_261_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_249_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_261_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v_fst_254_; 
v_fst_254_ = lean_ctor_get(v_a_250_, 0);
lean_inc(v_fst_254_);
lean_dec(v_a_250_);
if (lean_obj_tag(v_fst_254_) == 0)
{
lean_object* v___x_255_; lean_object* v___x_256_; 
lean_del_object(v___x_252_);
v___x_255_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__3, &l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___closed__3);
v___x_256_ = l_panic___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__2(v___x_255_, v_a_201_, v_a_202_, v_a_203_, v_a_204_);
return v___x_256_;
}
else
{
lean_object* v_val_257_; lean_object* v___x_259_; 
v_val_257_ = lean_ctor_get(v_fst_254_, 0);
lean_inc(v_val_257_);
lean_dec_ref_known(v_fst_254_, 1);
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 0, v_val_257_);
v___x_259_ = v___x_252_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_val_257_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
else
{
lean_object* v_a_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_269_; 
v_a_262_ = lean_ctor_get(v___x_249_, 0);
v_isSharedCheck_269_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_269_ == 0)
{
v___x_264_ = v___x_249_;
v_isShared_265_ = v_isSharedCheck_269_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_a_262_);
lean_dec(v___x_249_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_269_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v___x_267_; 
if (v_isShared_265_ == 0)
{
v___x_267_ = v___x_264_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_a_262_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_278_; 
lean_dec(v_Ps_199_);
v_a_271_ = lean_ctor_get(v___x_206_, 0);
v_isSharedCheck_278_ = !lean_is_exclusive(v___x_206_);
if (v_isSharedCheck_278_ == 0)
{
v___x_273_ = v___x_206_;
v_isShared_274_ = v_isSharedCheck_278_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_a_271_);
lean_dec(v___x_206_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_278_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v___x_276_; 
if (v_isShared_274_ == 0)
{
v___x_276_ = v___x_273_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v_a_271_);
v___x_276_ = v_reuseFailAlloc_277_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
return v___x_276_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label___boxed(lean_object* v_Ps_279_, lean_object* v_P_x27_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label(v_Ps_279_, v_P_x27_280_, v_a_281_, v_a_282_, v_a_283_, v_a_284_);
lean_dec(v_a_284_);
lean_dec_ref(v_a_283_);
lean_dec(v_a_282_);
lean_dec_ref(v_a_281_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1(lean_object* v_a_287_, lean_object* v_Ps_288_, lean_object* v_inst_289_, lean_object* v_a_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg(v_a_287_, v_Ps_288_, v_a_290_, v___y_291_, v___y_292_, v___y_293_, v___y_294_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___boxed(lean_object* v_a_297_, lean_object* v_Ps_298_, lean_object* v_inst_299_, lean_object* v_a_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1(v_a_297_, v_Ps_298_, v_inst_299_, v_a_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_303_);
lean_dec(v___y_302_);
lean_dec_ref(v___y_301_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames(lean_object* v_P_307_, lean_object* v_P_x27_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_314_ = lean_box(0);
v___x_315_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_collectHyps(v_P_307_, v___x_314_);
v___x_316_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label(v___x_315_, v_P_x27_308_, v_a_309_, v_a_310_, v_a_311_, v_a_312_);
if (lean_obj_tag(v___x_316_) == 0)
{
lean_object* v_a_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_325_; 
v_a_317_ = lean_ctor_get(v___x_316_, 0);
v_isSharedCheck_325_ = !lean_is_exclusive(v___x_316_);
if (v_isSharedCheck_325_ == 0)
{
v___x_319_ = v___x_316_;
v_isShared_320_ = v_isSharedCheck_325_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_a_317_);
lean_dec(v___x_316_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_325_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v_snd_321_; lean_object* v___x_323_; 
v_snd_321_ = lean_ctor_get(v_a_317_, 1);
lean_inc(v_snd_321_);
lean_dec(v_a_317_);
if (v_isShared_320_ == 0)
{
lean_ctor_set(v___x_319_, 0, v_snd_321_);
v___x_323_ = v___x_319_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_snd_321_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
else
{
lean_object* v_a_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_333_; 
v_a_326_ = lean_ctor_get(v___x_316_, 0);
v_isSharedCheck_333_ = !lean_is_exclusive(v___x_316_);
if (v_isSharedCheck_333_ == 0)
{
v___x_328_ = v___x_316_;
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_a_326_);
lean_dec(v___x_316_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_331_; 
if (v_isShared_329_ == 0)
{
v___x_331_ = v___x_328_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_a_326_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames___boxed(lean_object* v_P_334_, lean_object* v_P_x27_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames(v_P_334_, v_P_x27_335_, v_a_336_, v_a_337_, v_a_338_, v_a_339_);
lean_dec(v_a_339_);
lean_dec_ref(v_a_338_);
lean_dec(v_a_337_);
lean_dec_ref(v_a_336_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0(lean_object* v___x_344_, lean_object* v___x_345_, lean_object* v___x_346_, lean_object* v___x_347_, lean_object* v___x_348_, lean_object* v_00_u03c3s_349_, lean_object* v_hyps_350_, lean_object* v_P_x27_351_, lean_object* v_target_352_, lean_object* v_00_u03c6_353_, lean_object* v_a_354_, lean_object* v_toPure_355_, lean_object* v_prf_356_){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v_prf_361_; lean_object* v___x_362_; 
v___x_357_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__0));
v___x_358_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__1));
v___x_359_ = l_Lean_Name_mkStr6(v___x_344_, v___x_345_, v___x_346_, v___x_347_, v___x_357_, v___x_358_);
v___x_360_ = l_Lean_mkConst(v___x_359_, v___x_348_);
v_prf_361_ = l_Lean_mkApp7(v___x_360_, v_00_u03c3s_349_, v_hyps_350_, v_P_x27_351_, v_target_352_, v_00_u03c6_353_, v_a_354_, v_prf_356_);
v___x_362_ = lean_apply_2(v_toPure_355_, lean_box(0), v_prf_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1(lean_object* v_h_u03c6_363_, uint8_t v_____do__lift_364_, lean_object* v_inst_365_, lean_object* v_toBind_366_, lean_object* v___f_367_, lean_object* v_prf_368_){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; uint8_t v___x_372_; uint8_t v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_369_ = lean_unsigned_to_nat(1u);
v___x_370_ = lean_mk_empty_array_with_capacity(v___x_369_);
v___x_371_ = lean_array_push(v___x_370_, v_h_u03c6_363_);
v___x_372_ = 1;
v___x_373_ = 1;
v___x_374_ = lean_box(v_____do__lift_364_);
v___x_375_ = lean_box(v___x_372_);
v___x_376_ = lean_box(v_____do__lift_364_);
v___x_377_ = lean_box(v___x_372_);
v___x_378_ = lean_box(v___x_373_);
v___x_379_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_379_, 0, v___x_371_);
lean_closure_set(v___x_379_, 1, v_prf_368_);
lean_closure_set(v___x_379_, 2, v___x_374_);
lean_closure_set(v___x_379_, 3, v___x_375_);
lean_closure_set(v___x_379_, 4, v___x_376_);
lean_closure_set(v___x_379_, 5, v___x_377_);
lean_closure_set(v___x_379_, 6, v___x_378_);
v___x_380_ = lean_apply_2(v_inst_365_, lean_box(0), v___x_379_);
v___x_381_ = lean_apply_4(v_toBind_366_, lean_box(0), lean_box(0), v___x_380_, v___f_367_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1___boxed(lean_object* v_h_u03c6_382_, lean_object* v_____do__lift_383_, lean_object* v_inst_384_, lean_object* v_toBind_385_, lean_object* v___f_386_, lean_object* v_prf_387_){
_start:
{
uint8_t v_____do__lift_451__boxed_388_; lean_object* v_res_389_; 
v_____do__lift_451__boxed_388_ = lean_unbox(v_____do__lift_383_);
v_res_389_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1(v_h_u03c6_382_, v_____do__lift_451__boxed_388_, v_inst_384_, v_toBind_385_, v___f_386_, v_prf_387_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__2(uint8_t v_____do__lift_390_, lean_object* v_inst_391_, lean_object* v_toBind_392_, lean_object* v___f_393_, lean_object* v_kSuccess_394_, lean_object* v_00_u03c6_395_, lean_object* v_goal_396_, lean_object* v_h_u03c6_397_){
_start:
{
lean_object* v___x_398_; lean_object* v___f_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_398_ = lean_box(v_____do__lift_390_);
lean_inc(v_toBind_392_);
lean_inc_ref(v_h_u03c6_397_);
v___f_399_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_399_, 0, v_h_u03c6_397_);
lean_closure_set(v___f_399_, 1, v___x_398_);
lean_closure_set(v___f_399_, 2, v_inst_391_);
lean_closure_set(v___f_399_, 3, v_toBind_392_);
lean_closure_set(v___f_399_, 4, v___f_393_);
v___x_400_ = lean_apply_3(v_kSuccess_394_, v_00_u03c6_395_, v_h_u03c6_397_, v_goal_396_);
v___x_401_ = lean_apply_4(v_toBind_392_, lean_box(0), lean_box(0), v___x_400_, v___f_399_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__2___boxed(lean_object* v_____do__lift_402_, lean_object* v_inst_403_, lean_object* v_toBind_404_, lean_object* v___f_405_, lean_object* v_kSuccess_406_, lean_object* v_00_u03c6_407_, lean_object* v_goal_408_, lean_object* v_h_u03c6_409_){
_start:
{
uint8_t v_____do__lift_486__boxed_410_; lean_object* v_res_411_; 
v_____do__lift_486__boxed_410_ = lean_unbox(v_____do__lift_402_);
v_res_411_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__2(v_____do__lift_486__boxed_410_, v_inst_403_, v_toBind_404_, v___f_405_, v_kSuccess_406_, v_00_u03c6_407_, v_goal_408_, v_h_u03c6_409_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__3(lean_object* v_inst_412_, lean_object* v_inst_413_, lean_object* v_00_u03c6_414_, lean_object* v___f_415_, lean_object* v_____do__lift_416_){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = l_Lean_Meta_withLocalDeclD___redArg(v_inst_412_, v_inst_413_, v_____do__lift_416_, v_00_u03c6_414_, v___f_415_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__4(lean_object* v___x_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = l_Lean_Core_mkFreshUserName(v___x_418_, v___y_421_, v___y_422_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__4___boxed(lean_object* v___x_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__4(v___x_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_);
lean_dec(v___y_429_);
lean_dec_ref(v___y_428_);
lean_dec(v___y_427_);
lean_dec_ref(v___y_426_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5(lean_object* v___x_434_, lean_object* v___x_435_, lean_object* v___x_436_, lean_object* v___x_437_, lean_object* v___x_438_, lean_object* v_00_u03c3s_439_, lean_object* v_hyps_440_, lean_object* v_target_441_, lean_object* v_00_u03c6_442_, lean_object* v_a_443_, lean_object* v_toPure_444_, lean_object* v_u_445_, uint8_t v_____do__lift_446_, lean_object* v_inst_447_, lean_object* v_toBind_448_, lean_object* v_kSuccess_449_, lean_object* v_inst_450_, lean_object* v_inst_451_, lean_object* v_P_x27_452_){
_start:
{
lean_object* v___f_453_; lean_object* v_goal_454_; lean_object* v___x_455_; lean_object* v___f_456_; lean_object* v___f_457_; lean_object* v___f_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
lean_inc_ref_n(v_00_u03c6_442_, 2);
lean_inc_ref(v_target_441_);
lean_inc_ref(v_P_x27_452_);
lean_inc_ref(v_00_u03c3s_439_);
v___f_453_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0), 13, 12);
lean_closure_set(v___f_453_, 0, v___x_434_);
lean_closure_set(v___f_453_, 1, v___x_435_);
lean_closure_set(v___f_453_, 2, v___x_436_);
lean_closure_set(v___f_453_, 3, v___x_437_);
lean_closure_set(v___f_453_, 4, v___x_438_);
lean_closure_set(v___f_453_, 5, v_00_u03c3s_439_);
lean_closure_set(v___f_453_, 6, v_hyps_440_);
lean_closure_set(v___f_453_, 7, v_P_x27_452_);
lean_closure_set(v___f_453_, 8, v_target_441_);
lean_closure_set(v___f_453_, 9, v_00_u03c6_442_);
lean_closure_set(v___f_453_, 10, v_a_443_);
lean_closure_set(v___f_453_, 11, v_toPure_444_);
v_goal_454_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_goal_454_, 0, v_u_445_);
lean_ctor_set(v_goal_454_, 1, v_00_u03c3s_439_);
lean_ctor_set(v_goal_454_, 2, v_P_x27_452_);
lean_ctor_set(v_goal_454_, 3, v_target_441_);
v___x_455_ = lean_box(v_____do__lift_446_);
lean_inc(v_toBind_448_);
lean_inc(v_inst_447_);
v___f_456_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_456_, 0, v___x_455_);
lean_closure_set(v___f_456_, 1, v_inst_447_);
lean_closure_set(v___f_456_, 2, v_toBind_448_);
lean_closure_set(v___f_456_, 3, v___f_453_);
lean_closure_set(v___f_456_, 4, v_kSuccess_449_);
lean_closure_set(v___f_456_, 5, v_00_u03c6_442_);
lean_closure_set(v___f_456_, 6, v_goal_454_);
v___f_457_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__3), 5, 4);
lean_closure_set(v___f_457_, 0, v_inst_450_);
lean_closure_set(v___f_457_, 1, v_inst_451_);
lean_closure_set(v___f_457_, 2, v_00_u03c6_442_);
lean_closure_set(v___f_457_, 3, v___f_456_);
v___f_458_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___closed__0));
v___x_459_ = lean_apply_2(v_inst_447_, lean_box(0), v___f_458_);
v___x_460_ = lean_apply_4(v_toBind_448_, lean_box(0), lean_box(0), v___x_459_, v___f_457_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___boxed(lean_object** _args){
lean_object* v___x_461_ = _args[0];
lean_object* v___x_462_ = _args[1];
lean_object* v___x_463_ = _args[2];
lean_object* v___x_464_ = _args[3];
lean_object* v___x_465_ = _args[4];
lean_object* v_00_u03c3s_466_ = _args[5];
lean_object* v_hyps_467_ = _args[6];
lean_object* v_target_468_ = _args[7];
lean_object* v_00_u03c6_469_ = _args[8];
lean_object* v_a_470_ = _args[9];
lean_object* v_toPure_471_ = _args[10];
lean_object* v_u_472_ = _args[11];
lean_object* v_____do__lift_473_ = _args[12];
lean_object* v_inst_474_ = _args[13];
lean_object* v_toBind_475_ = _args[14];
lean_object* v_kSuccess_476_ = _args[15];
lean_object* v_inst_477_ = _args[16];
lean_object* v_inst_478_ = _args[17];
lean_object* v_P_x27_479_ = _args[18];
_start:
{
uint8_t v_____do__lift_546__boxed_480_; lean_object* v_res_481_; 
v_____do__lift_546__boxed_480_ = lean_unbox(v_____do__lift_473_);
v_res_481_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5(v___x_461_, v___x_462_, v___x_463_, v___x_464_, v___x_465_, v_00_u03c3s_466_, v_hyps_467_, v_target_468_, v_00_u03c6_469_, v_a_470_, v_toPure_471_, v_u_472_, v_____do__lift_546__boxed_480_, v_inst_474_, v_toBind_475_, v_kSuccess_476_, v_inst_477_, v_inst_478_, v_P_x27_479_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__6(lean_object* v___x_482_, lean_object* v___x_483_, lean_object* v___x_484_, lean_object* v___x_485_, lean_object* v___x_486_, lean_object* v_00_u03c3s_487_, lean_object* v_hyps_488_, lean_object* v_target_489_, lean_object* v_00_u03c6_490_, lean_object* v_a_491_, lean_object* v_toPure_492_, lean_object* v_u_493_, lean_object* v_inst_494_, lean_object* v_toBind_495_, lean_object* v_kSuccess_496_, lean_object* v_inst_497_, lean_object* v_inst_498_, lean_object* v_P_x27_499_, lean_object* v_kFail_500_, uint8_t v_____do__lift_501_){
_start:
{
if (v_____do__lift_501_ == 0)
{
lean_object* v___x_502_; lean_object* v___f_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_502_ = lean_box(v_____do__lift_501_);
lean_inc(v_toBind_495_);
lean_inc(v_inst_494_);
lean_inc_ref(v_hyps_488_);
v___f_503_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__5___boxed), 19, 18);
lean_closure_set(v___f_503_, 0, v___x_482_);
lean_closure_set(v___f_503_, 1, v___x_483_);
lean_closure_set(v___f_503_, 2, v___x_484_);
lean_closure_set(v___f_503_, 3, v___x_485_);
lean_closure_set(v___f_503_, 4, v___x_486_);
lean_closure_set(v___f_503_, 5, v_00_u03c3s_487_);
lean_closure_set(v___f_503_, 6, v_hyps_488_);
lean_closure_set(v___f_503_, 7, v_target_489_);
lean_closure_set(v___f_503_, 8, v_00_u03c6_490_);
lean_closure_set(v___f_503_, 9, v_a_491_);
lean_closure_set(v___f_503_, 10, v_toPure_492_);
lean_closure_set(v___f_503_, 11, v_u_493_);
lean_closure_set(v___f_503_, 12, v___x_502_);
lean_closure_set(v___f_503_, 13, v_inst_494_);
lean_closure_set(v___f_503_, 14, v_toBind_495_);
lean_closure_set(v___f_503_, 15, v_kSuccess_496_);
lean_closure_set(v___f_503_, 16, v_inst_497_);
lean_closure_set(v___f_503_, 17, v_inst_498_);
v___x_504_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames___boxed), 7, 2);
lean_closure_set(v___x_504_, 0, v_hyps_488_);
lean_closure_set(v___x_504_, 1, v_P_x27_499_);
v___x_505_ = lean_apply_2(v_inst_494_, lean_box(0), v___x_504_);
v___x_506_ = lean_apply_4(v_toBind_495_, lean_box(0), lean_box(0), v___x_505_, v___f_503_);
return v___x_506_;
}
else
{
lean_dec_ref(v_P_x27_499_);
lean_dec_ref(v_inst_498_);
lean_dec_ref(v_inst_497_);
lean_dec(v_kSuccess_496_);
lean_dec(v_toBind_495_);
lean_dec(v_inst_494_);
lean_dec(v_u_493_);
lean_dec(v_toPure_492_);
lean_dec_ref(v_a_491_);
lean_dec_ref(v_00_u03c6_490_);
lean_dec_ref(v_target_489_);
lean_dec_ref(v_hyps_488_);
lean_dec_ref(v_00_u03c3s_487_);
lean_dec(v___x_486_);
lean_dec_ref(v___x_485_);
lean_dec_ref(v___x_484_);
lean_dec_ref(v___x_483_);
lean_dec_ref(v___x_482_);
lean_inc(v_kFail_500_);
return v_kFail_500_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__6___boxed(lean_object** _args){
lean_object* v___x_507_ = _args[0];
lean_object* v___x_508_ = _args[1];
lean_object* v___x_509_ = _args[2];
lean_object* v___x_510_ = _args[3];
lean_object* v___x_511_ = _args[4];
lean_object* v_00_u03c3s_512_ = _args[5];
lean_object* v_hyps_513_ = _args[6];
lean_object* v_target_514_ = _args[7];
lean_object* v_00_u03c6_515_ = _args[8];
lean_object* v_a_516_ = _args[9];
lean_object* v_toPure_517_ = _args[10];
lean_object* v_u_518_ = _args[11];
lean_object* v_inst_519_ = _args[12];
lean_object* v_toBind_520_ = _args[13];
lean_object* v_kSuccess_521_ = _args[14];
lean_object* v_inst_522_ = _args[15];
lean_object* v_inst_523_ = _args[16];
lean_object* v_P_x27_524_ = _args[17];
lean_object* v_kFail_525_ = _args[18];
lean_object* v_____do__lift_526_ = _args[19];
_start:
{
uint8_t v_____do__lift_595__boxed_527_; lean_object* v_res_528_; 
v_____do__lift_595__boxed_527_ = lean_unbox(v_____do__lift_526_);
v_res_528_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__6(v___x_507_, v___x_508_, v___x_509_, v___x_510_, v___x_511_, v_00_u03c3s_512_, v_hyps_513_, v_target_514_, v_00_u03c6_515_, v_a_516_, v_toPure_517_, v_u_518_, v_inst_519_, v_toBind_520_, v_kSuccess_521_, v_inst_522_, v_inst_523_, v_P_x27_524_, v_kFail_525_, v_____do__lift_595__boxed_527_);
lean_dec(v_kFail_525_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7(lean_object* v___x_532_, lean_object* v___x_533_, lean_object* v___x_534_, lean_object* v___x_535_, lean_object* v___x_536_, lean_object* v_00_u03c3s_537_, lean_object* v_hyps_538_, lean_object* v_target_539_, lean_object* v_00_u03c6_540_, lean_object* v_toPure_541_, lean_object* v_u_542_, lean_object* v_inst_543_, lean_object* v_toBind_544_, lean_object* v_kSuccess_545_, lean_object* v_inst_546_, lean_object* v_inst_547_, lean_object* v_P_x27_548_, lean_object* v_kFail_549_, lean_object* v___x_550_, lean_object* v_____do__lift_551_){
_start:
{
if (lean_obj_tag(v_____do__lift_551_) == 1)
{
lean_object* v_a_552_; lean_object* v___f_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v_a_552_ = lean_ctor_get(v_____do__lift_551_, 0);
lean_inc(v_a_552_);
lean_dec_ref_known(v_____do__lift_551_, 1);
lean_inc(v_toBind_544_);
lean_inc(v_inst_543_);
lean_inc_ref(v_00_u03c6_540_);
v___f_553_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__6___boxed), 20, 19);
lean_closure_set(v___f_553_, 0, v___x_532_);
lean_closure_set(v___f_553_, 1, v___x_533_);
lean_closure_set(v___f_553_, 2, v___x_534_);
lean_closure_set(v___f_553_, 3, v___x_535_);
lean_closure_set(v___f_553_, 4, v___x_536_);
lean_closure_set(v___f_553_, 5, v_00_u03c3s_537_);
lean_closure_set(v___f_553_, 6, v_hyps_538_);
lean_closure_set(v___f_553_, 7, v_target_539_);
lean_closure_set(v___f_553_, 8, v_00_u03c6_540_);
lean_closure_set(v___f_553_, 9, v_a_552_);
lean_closure_set(v___f_553_, 10, v_toPure_541_);
lean_closure_set(v___f_553_, 11, v_u_542_);
lean_closure_set(v___f_553_, 12, v_inst_543_);
lean_closure_set(v___f_553_, 13, v_toBind_544_);
lean_closure_set(v___f_553_, 14, v_kSuccess_545_);
lean_closure_set(v___f_553_, 15, v_inst_546_);
lean_closure_set(v___f_553_, 16, v_inst_547_);
lean_closure_set(v___f_553_, 17, v_P_x27_548_);
lean_closure_set(v___f_553_, 18, v_kFail_549_);
v___x_554_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__1));
v___x_555_ = l_Lean_mkConst(v___x_554_, v___x_550_);
v___x_556_ = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq___boxed), 7, 2);
lean_closure_set(v___x_556_, 0, v___x_555_);
lean_closure_set(v___x_556_, 1, v_00_u03c6_540_);
v___x_557_ = lean_apply_2(v_inst_543_, lean_box(0), v___x_556_);
v___x_558_ = lean_apply_4(v_toBind_544_, lean_box(0), lean_box(0), v___x_557_, v___f_553_);
return v___x_558_;
}
else
{
lean_dec(v_____do__lift_551_);
lean_dec(v___x_550_);
lean_dec_ref(v_P_x27_548_);
lean_dec_ref(v_inst_547_);
lean_dec_ref(v_inst_546_);
lean_dec(v_kSuccess_545_);
lean_dec(v_toBind_544_);
lean_dec(v_inst_543_);
lean_dec(v_u_542_);
lean_dec(v_toPure_541_);
lean_dec_ref(v_00_u03c6_540_);
lean_dec_ref(v_target_539_);
lean_dec_ref(v_hyps_538_);
lean_dec_ref(v_00_u03c3s_537_);
lean_dec(v___x_536_);
lean_dec_ref(v___x_535_);
lean_dec_ref(v___x_534_);
lean_dec_ref(v___x_533_);
lean_dec_ref(v___x_532_);
return v_kFail_549_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___boxed(lean_object** _args){
lean_object* v___x_559_ = _args[0];
lean_object* v___x_560_ = _args[1];
lean_object* v___x_561_ = _args[2];
lean_object* v___x_562_ = _args[3];
lean_object* v___x_563_ = _args[4];
lean_object* v_00_u03c3s_564_ = _args[5];
lean_object* v_hyps_565_ = _args[6];
lean_object* v_target_566_ = _args[7];
lean_object* v_00_u03c6_567_ = _args[8];
lean_object* v_toPure_568_ = _args[9];
lean_object* v_u_569_ = _args[10];
lean_object* v_inst_570_ = _args[11];
lean_object* v_toBind_571_ = _args[12];
lean_object* v_kSuccess_572_ = _args[13];
lean_object* v_inst_573_ = _args[14];
lean_object* v_inst_574_ = _args[15];
lean_object* v_P_x27_575_ = _args[16];
lean_object* v_kFail_576_ = _args[17];
lean_object* v___x_577_ = _args[18];
lean_object* v_____do__lift_578_ = _args[19];
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7(v___x_559_, v___x_560_, v___x_561_, v___x_562_, v___x_563_, v_00_u03c3s_564_, v_hyps_565_, v_target_566_, v_00_u03c6_567_, v_toPure_568_, v_u_569_, v_inst_570_, v_toBind_571_, v_kSuccess_572_, v_inst_573_, v_inst_574_, v_P_x27_575_, v_kFail_576_, v___x_577_, v_____do__lift_578_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8(lean_object* v___x_582_, lean_object* v___x_583_, lean_object* v___x_584_, lean_object* v___x_585_, lean_object* v_00_u03c3s_586_, lean_object* v_hyps_587_, lean_object* v_target_588_, lean_object* v_00_u03c6_589_, lean_object* v_toPure_590_, lean_object* v_u_591_, lean_object* v_inst_592_, lean_object* v_toBind_593_, lean_object* v_kSuccess_594_, lean_object* v_inst_595_, lean_object* v_inst_596_, lean_object* v_kFail_597_, lean_object* v___x_598_, lean_object* v_P_x27_599_){
_start:
{
lean_object* v___x_600_; lean_object* v___f_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_600_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0));
lean_inc_ref(v_P_x27_599_);
lean_inc(v_toBind_593_);
lean_inc(v_inst_592_);
lean_inc_ref(v_00_u03c6_589_);
lean_inc_ref(v_hyps_587_);
lean_inc_ref(v_00_u03c3s_586_);
lean_inc(v___x_585_);
lean_inc_ref(v___x_584_);
lean_inc_ref(v___x_583_);
lean_inc_ref(v___x_582_);
v___f_601_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___boxed), 20, 19);
lean_closure_set(v___f_601_, 0, v___x_582_);
lean_closure_set(v___f_601_, 1, v___x_583_);
lean_closure_set(v___f_601_, 2, v___x_584_);
lean_closure_set(v___f_601_, 3, v___x_600_);
lean_closure_set(v___f_601_, 4, v___x_585_);
lean_closure_set(v___f_601_, 5, v_00_u03c3s_586_);
lean_closure_set(v___f_601_, 6, v_hyps_587_);
lean_closure_set(v___f_601_, 7, v_target_588_);
lean_closure_set(v___f_601_, 8, v_00_u03c6_589_);
lean_closure_set(v___f_601_, 9, v_toPure_590_);
lean_closure_set(v___f_601_, 10, v_u_591_);
lean_closure_set(v___f_601_, 11, v_inst_592_);
lean_closure_set(v___f_601_, 12, v_toBind_593_);
lean_closure_set(v___f_601_, 13, v_kSuccess_594_);
lean_closure_set(v___f_601_, 14, v_inst_595_);
lean_closure_set(v___f_601_, 15, v_inst_596_);
lean_closure_set(v___f_601_, 16, v_P_x27_599_);
lean_closure_set(v___f_601_, 17, v_kFail_597_);
lean_closure_set(v___f_601_, 18, v___x_598_);
v___x_602_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__1));
v___x_603_ = l_Lean_Name_mkStr5(v___x_582_, v___x_583_, v___x_584_, v___x_600_, v___x_602_);
v___x_604_ = l_Lean_mkConst(v___x_603_, v___x_585_);
v___x_605_ = l_Lean_mkApp4(v___x_604_, v_00_u03c3s_586_, v_hyps_587_, v_P_x27_599_, v_00_u03c6_589_);
v___x_606_ = lean_box(0);
v___x_607_ = lean_alloc_closure((void*)(l_Lean_Meta_trySynthInstance___boxed), 7, 2);
lean_closure_set(v___x_607_, 0, v___x_605_);
lean_closure_set(v___x_607_, 1, v___x_606_);
v___x_608_ = lean_apply_2(v_inst_592_, lean_box(0), v___x_607_);
v___x_609_ = lean_apply_4(v_toBind_593_, lean_box(0), lean_box(0), v___x_608_, v___f_601_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___boxed(lean_object** _args){
lean_object* v___x_610_ = _args[0];
lean_object* v___x_611_ = _args[1];
lean_object* v___x_612_ = _args[2];
lean_object* v___x_613_ = _args[3];
lean_object* v_00_u03c3s_614_ = _args[4];
lean_object* v_hyps_615_ = _args[5];
lean_object* v_target_616_ = _args[6];
lean_object* v_00_u03c6_617_ = _args[7];
lean_object* v_toPure_618_ = _args[8];
lean_object* v_u_619_ = _args[9];
lean_object* v_inst_620_ = _args[10];
lean_object* v_toBind_621_ = _args[11];
lean_object* v_kSuccess_622_ = _args[12];
lean_object* v_inst_623_ = _args[13];
lean_object* v_inst_624_ = _args[14];
lean_object* v_kFail_625_ = _args[15];
lean_object* v___x_626_ = _args[16];
lean_object* v_P_x27_627_ = _args[17];
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8(v___x_610_, v___x_611_, v___x_612_, v___x_613_, v_00_u03c3s_614_, v_hyps_615_, v_target_616_, v_00_u03c6_617_, v_toPure_618_, v_u_619_, v_inst_620_, v_toBind_621_, v_kSuccess_622_, v_inst_623_, v_inst_624_, v_kFail_625_, v___x_626_, v_P_x27_627_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9(lean_object* v_u_636_, lean_object* v_00_u03c3s_637_, lean_object* v_hyps_638_, lean_object* v_target_639_, lean_object* v_toPure_640_, lean_object* v_inst_641_, lean_object* v_toBind_642_, lean_object* v_kSuccess_643_, lean_object* v_inst_644_, lean_object* v_inst_645_, lean_object* v_kFail_646_, uint8_t v___x_647_, lean_object* v___x_648_, lean_object* v_00_u03c6_649_){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___f_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_650_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0));
v___x_651_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1));
v___x_652_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2));
v___x_653_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3));
v___x_654_ = lean_box(0);
lean_inc(v_u_636_);
v___x_655_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_655_, 0, v_u_636_);
lean_ctor_set(v___x_655_, 1, v___x_654_);
lean_inc(v_toBind_642_);
lean_inc(v_inst_641_);
lean_inc_ref(v_00_u03c3s_637_);
lean_inc_ref(v___x_655_);
v___f_656_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___boxed), 18, 17);
lean_closure_set(v___f_656_, 0, v___x_650_);
lean_closure_set(v___f_656_, 1, v___x_651_);
lean_closure_set(v___f_656_, 2, v___x_652_);
lean_closure_set(v___f_656_, 3, v___x_655_);
lean_closure_set(v___f_656_, 4, v_00_u03c3s_637_);
lean_closure_set(v___f_656_, 5, v_hyps_638_);
lean_closure_set(v___f_656_, 6, v_target_639_);
lean_closure_set(v___f_656_, 7, v_00_u03c6_649_);
lean_closure_set(v___f_656_, 8, v_toPure_640_);
lean_closure_set(v___f_656_, 9, v_u_636_);
lean_closure_set(v___f_656_, 10, v_inst_641_);
lean_closure_set(v___f_656_, 11, v_toBind_642_);
lean_closure_set(v___f_656_, 12, v_kSuccess_643_);
lean_closure_set(v___f_656_, 13, v_inst_644_);
lean_closure_set(v___f_656_, 14, v_inst_645_);
lean_closure_set(v___f_656_, 15, v_kFail_646_);
lean_closure_set(v___f_656_, 16, v___x_654_);
v___x_657_ = l_Lean_mkConst(v___x_653_, v___x_655_);
v___x_658_ = l_Lean_Expr_app___override(v___x_657_, v_00_u03c3s_637_);
v___x_659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_659_, 0, v___x_658_);
v___x_660_ = lean_box(v___x_647_);
v___x_661_ = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshExprMVar___boxed), 8, 3);
lean_closure_set(v___x_661_, 0, v___x_659_);
lean_closure_set(v___x_661_, 1, v___x_660_);
lean_closure_set(v___x_661_, 2, v___x_648_);
v___x_662_ = lean_apply_2(v_inst_641_, lean_box(0), v___x_661_);
v___x_663_ = lean_apply_4(v_toBind_642_, lean_box(0), lean_box(0), v___x_662_, v___f_656_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___boxed(lean_object* v_u_664_, lean_object* v_00_u03c3s_665_, lean_object* v_hyps_666_, lean_object* v_target_667_, lean_object* v_toPure_668_, lean_object* v_inst_669_, lean_object* v_toBind_670_, lean_object* v_kSuccess_671_, lean_object* v_inst_672_, lean_object* v_inst_673_, lean_object* v_kFail_674_, lean_object* v___x_675_, lean_object* v___x_676_, lean_object* v_00_u03c6_677_){
_start:
{
uint8_t v___x_746__boxed_678_; lean_object* v_res_679_; 
v___x_746__boxed_678_ = lean_unbox(v___x_675_);
v_res_679_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9(v_u_664_, v_00_u03c3s_665_, v_hyps_666_, v_target_667_, v_toPure_668_, v_inst_669_, v_toBind_670_, v_kSuccess_671_, v_inst_672_, v_inst_673_, v_kFail_674_, v___x_746__boxed_678_, v___x_676_, v_00_u03c6_677_);
return v_res_679_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__0(void){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_680_ = lean_box(0);
v___x_681_ = l_Lean_mkSort(v___x_680_);
return v___x_681_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1(void){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_682_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__0);
v___x_683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_683_, 0, v___x_682_);
return v___x_683_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2(void){
_start:
{
lean_object* v___x_684_; uint8_t v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_684_ = lean_box(0);
v___x_685_ = 0;
v___x_686_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1);
v___x_687_ = lean_box(v___x_685_);
v___x_688_ = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshExprMVar___boxed), 8, 3);
lean_closure_set(v___x_688_, 0, v___x_686_);
lean_closure_set(v___x_688_, 1, v___x_687_);
lean_closure_set(v___x_688_, 2, v___x_684_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg(lean_object* v_inst_689_, lean_object* v_inst_690_, lean_object* v_inst_691_, lean_object* v_goal_692_, lean_object* v_kFail_693_, lean_object* v_kSuccess_694_){
_start:
{
lean_object* v_toApplicative_695_; lean_object* v_u_696_; lean_object* v_00_u03c3s_697_; lean_object* v_hyps_698_; lean_object* v_target_699_; lean_object* v_toBind_700_; lean_object* v_toPure_701_; uint8_t v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___f_707_; lean_object* v___x_708_; 
v_toApplicative_695_ = lean_ctor_get(v_inst_689_, 0);
v_u_696_ = lean_ctor_get(v_goal_692_, 0);
lean_inc(v_u_696_);
v_00_u03c3s_697_ = lean_ctor_get(v_goal_692_, 1);
lean_inc_ref(v_00_u03c3s_697_);
v_hyps_698_ = lean_ctor_get(v_goal_692_, 2);
lean_inc_ref(v_hyps_698_);
v_target_699_ = lean_ctor_get(v_goal_692_, 3);
lean_inc_ref(v_target_699_);
lean_dec_ref(v_goal_692_);
v_toBind_700_ = lean_ctor_get(v_inst_689_, 1);
lean_inc_n(v_toBind_700_, 2);
v_toPure_701_ = lean_ctor_get(v_toApplicative_695_, 1);
lean_inc(v_toPure_701_);
v___x_702_ = 0;
v___x_703_ = lean_box(0);
v___x_704_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__2);
lean_inc(v_inst_691_);
v___x_705_ = lean_apply_2(v_inst_691_, lean_box(0), v___x_704_);
v___x_706_ = lean_box(v___x_702_);
v___f_707_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___boxed), 14, 13);
lean_closure_set(v___f_707_, 0, v_u_696_);
lean_closure_set(v___f_707_, 1, v_00_u03c3s_697_);
lean_closure_set(v___f_707_, 2, v_hyps_698_);
lean_closure_set(v___f_707_, 3, v_target_699_);
lean_closure_set(v___f_707_, 4, v_toPure_701_);
lean_closure_set(v___f_707_, 5, v_inst_691_);
lean_closure_set(v___f_707_, 6, v_toBind_700_);
lean_closure_set(v___f_707_, 7, v_kSuccess_694_);
lean_closure_set(v___f_707_, 8, v_inst_690_);
lean_closure_set(v___f_707_, 9, v_inst_689_);
lean_closure_set(v___f_707_, 10, v_kFail_693_);
lean_closure_set(v___f_707_, 11, v___x_706_);
lean_closure_set(v___f_707_, 12, v___x_703_);
v___x_708_ = lean_apply_4(v_toBind_700_, lean_box(0), lean_box(0), v___x_705_, v___f_707_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore(lean_object* v_m_709_, lean_object* v_inst_710_, lean_object* v_inst_711_, lean_object* v_inst_712_, lean_object* v_goal_713_, lean_object* v_kFail_714_, lean_object* v_kSuccess_715_){
_start:
{
lean_object* v___x_716_; 
v___x_716_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg(v_inst_710_, v_inst_711_, v_inst_712_, v_goal_713_, v_kFail_714_, v_kSuccess_715_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg___lam__0(lean_object* v_k_717_, lean_object* v_x_718_, lean_object* v_x_719_, lean_object* v_goal_720_){
_start:
{
lean_object* v___x_721_; 
v___x_721_ = lean_apply_1(v_k_717_, v_goal_720_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg___lam__0___boxed(lean_object* v_k_722_, lean_object* v_x_723_, lean_object* v_x_724_, lean_object* v_goal_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg___lam__0(v_k_722_, v_x_723_, v_x_724_, v_goal_725_);
lean_dec_ref(v_x_724_);
lean_dec_ref(v_x_723_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg(lean_object* v_inst_727_, lean_object* v_inst_728_, lean_object* v_inst_729_, lean_object* v_goal_730_, lean_object* v_k_731_){
_start:
{
lean_object* v___f_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
lean_inc(v_k_731_);
v___f_732_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_732_, 0, v_k_731_);
lean_inc_ref(v_goal_730_);
v___x_733_ = lean_apply_1(v_k_731_, v_goal_730_);
v___x_734_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg(v_inst_727_, v_inst_728_, v_inst_729_, v_goal_730_, v___x_733_, v___f_732_);
return v___x_734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame(lean_object* v_m_735_, lean_object* v_inst_736_, lean_object* v_inst_737_, lean_object* v_inst_738_, lean_object* v_goal_739_, lean_object* v_k_740_){
_start:
{
lean_object* v___x_741_; 
v___x_741_ = l_Lean_Elab_Tactic_Do_ProofMode_mTryFrame___redArg(v_inst_736_, v_inst_737_, v_inst_738_, v_goal_739_, v_k_740_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg(lean_object* v_e_742_, lean_object* v___y_743_){
_start:
{
uint8_t v___x_745_; 
v___x_745_ = l_Lean_Expr_hasMVar(v_e_742_);
if (v___x_745_ == 0)
{
lean_object* v___x_746_; 
v___x_746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_746_, 0, v_e_742_);
return v___x_746_;
}
else
{
lean_object* v___x_747_; lean_object* v_mctx_748_; lean_object* v___x_749_; lean_object* v_fst_750_; lean_object* v_snd_751_; lean_object* v___x_752_; lean_object* v_cache_753_; lean_object* v_zetaDeltaFVarIds_754_; lean_object* v_postponed_755_; lean_object* v_diag_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_765_; 
v___x_747_ = lean_st_ref_get(v___y_743_);
v_mctx_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc_ref(v_mctx_748_);
lean_dec(v___x_747_);
v___x_749_ = l_Lean_instantiateMVarsCore(v_mctx_748_, v_e_742_);
v_fst_750_ = lean_ctor_get(v___x_749_, 0);
lean_inc(v_fst_750_);
v_snd_751_ = lean_ctor_get(v___x_749_, 1);
lean_inc(v_snd_751_);
lean_dec_ref(v___x_749_);
v___x_752_ = lean_st_ref_take(v___y_743_);
v_cache_753_ = lean_ctor_get(v___x_752_, 1);
v_zetaDeltaFVarIds_754_ = lean_ctor_get(v___x_752_, 2);
v_postponed_755_ = lean_ctor_get(v___x_752_, 3);
v_diag_756_ = lean_ctor_get(v___x_752_, 4);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_765_ == 0)
{
lean_object* v_unused_766_; 
v_unused_766_ = lean_ctor_get(v___x_752_, 0);
lean_dec(v_unused_766_);
v___x_758_ = v___x_752_;
v_isShared_759_ = v_isSharedCheck_765_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_diag_756_);
lean_inc(v_postponed_755_);
lean_inc(v_zetaDeltaFVarIds_754_);
lean_inc(v_cache_753_);
lean_dec(v___x_752_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_765_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
lean_ctor_set(v___x_758_, 0, v_snd_751_);
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_snd_751_);
lean_ctor_set(v_reuseFailAlloc_764_, 1, v_cache_753_);
lean_ctor_set(v_reuseFailAlloc_764_, 2, v_zetaDeltaFVarIds_754_);
lean_ctor_set(v_reuseFailAlloc_764_, 3, v_postponed_755_);
lean_ctor_set(v_reuseFailAlloc_764_, 4, v_diag_756_);
v___x_761_ = v_reuseFailAlloc_764_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_762_ = lean_st_ref_put(v___y_743_, v___x_761_);
v___x_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_763_, 0, v_fst_750_);
return v___x_763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg___boxed(lean_object* v_e_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg(v_e_767_, v___y_768_);
lean_dec(v___y_768_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1(lean_object* v_e_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
lean_object* v___x_781_; 
v___x_781_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg(v_e_771_, v___y_777_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___boxed(lean_object* v_e_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1(v_e_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_);
lean_dec(v___y_790_);
lean_dec_ref(v___y_789_);
lean_dec(v___y_788_);
lean_dec_ref(v___y_787_);
lean_dec(v___y_786_);
lean_dec_ref(v___y_785_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg___lam__0(lean_object* v_x_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_){
_start:
{
lean_object* v___x_803_; 
lean_inc(v___y_797_);
lean_inc_ref(v___y_796_);
lean_inc(v___y_795_);
lean_inc_ref(v___y_794_);
v___x_803_ = lean_apply_9(v_x_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, lean_box(0));
return v___x_803_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg___lam__0___boxed(lean_object* v_x_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg___lam__0(v_x_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg(lean_object* v_mvarId_815_, lean_object* v_x_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_){
_start:
{
lean_object* v___f_826_; lean_object* v___x_827_; 
lean_inc(v___y_820_);
lean_inc_ref(v___y_819_);
lean_inc(v___y_818_);
lean_inc_ref(v___y_817_);
v___f_826_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_826_, 0, v_x_816_);
lean_closure_set(v___f_826_, 1, v___y_817_);
lean_closure_set(v___f_826_, 2, v___y_818_);
lean_closure_set(v___f_826_, 3, v___y_819_);
lean_closure_set(v___f_826_, 4, v___y_820_);
v___x_827_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_815_, v___f_826_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
if (lean_obj_tag(v___x_827_) == 0)
{
return v___x_827_;
}
else
{
lean_object* v_a_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_835_; 
v_a_828_ = lean_ctor_get(v___x_827_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_827_);
if (v_isSharedCheck_835_ == 0)
{
v___x_830_ = v___x_827_;
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_a_828_);
lean_dec(v___x_827_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_833_; 
if (v_isShared_831_ == 0)
{
v___x_833_ = v___x_830_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_a_828_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg___boxed(lean_object* v_mvarId_836_, lean_object* v_x_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg(v_mvarId_836_, v_x_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, v___y_845_);
lean_dec(v___y_845_);
lean_dec_ref(v___y_844_);
lean_dec(v___y_843_);
lean_dec_ref(v___y_842_);
lean_dec(v___y_841_);
lean_dec_ref(v___y_840_);
lean_dec(v___y_839_);
lean_dec_ref(v___y_838_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5(lean_object* v_00_u03b1_848_, lean_object* v_mvarId_849_, lean_object* v_x_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_){
_start:
{
lean_object* v___x_860_; 
v___x_860_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg(v_mvarId_849_, v_x_850_, v___y_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___boxed(lean_object* v_00_u03b1_861_, lean_object* v_mvarId_862_, lean_object* v_x_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5(v_00_u03b1_861_, v_mvarId_862_, v_x_863_, v___y_864_, v___y_865_, v___y_866_, v___y_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_);
lean_dec(v___y_871_);
lean_dec_ref(v___y_870_);
lean_dec(v___y_869_);
lean_dec_ref(v___y_868_);
lean_dec(v___y_867_);
lean_dec_ref(v___y_866_);
lean_dec(v___y_865_);
lean_dec_ref(v___y_864_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0_spec__0(lean_object* v_msgData_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_){
_start:
{
lean_object* v___x_880_; lean_object* v_env_881_; uint8_t v___x_882_; lean_object* v_env_883_; lean_object* v___x_884_; lean_object* v_toCold_885_; lean_object* v_mctx_886_; lean_object* v_lctx_887_; lean_object* v_options_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_880_ = lean_st_ref_get(v___y_878_);
v_env_881_ = lean_ctor_get(v___x_880_, 0);
lean_inc_ref(v_env_881_);
lean_dec(v___x_880_);
v___x_882_ = 0;
v_env_883_ = l_Lean_Environment_setRecordingDeps(v_env_881_, v___x_882_);
v___x_884_ = lean_st_ref_get(v___y_876_);
v_toCold_885_ = lean_ctor_get(v___y_877_, 0);
v_mctx_886_ = lean_ctor_get(v___x_884_, 0);
lean_inc_ref(v_mctx_886_);
lean_dec(v___x_884_);
v_lctx_887_ = lean_ctor_get(v___y_875_, 2);
v_options_888_ = lean_ctor_get(v_toCold_885_, 2);
lean_inc_ref(v_options_888_);
lean_inc_ref(v_lctx_887_);
v___x_889_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_889_, 0, v_env_883_);
lean_ctor_set(v___x_889_, 1, v_mctx_886_);
lean_ctor_set(v___x_889_, 2, v_lctx_887_);
lean_ctor_set(v___x_889_, 3, v_options_888_);
v___x_890_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_890_, 0, v___x_889_);
lean_ctor_set(v___x_890_, 1, v_msgData_874_);
v___x_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_891_, 0, v___x_890_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0_spec__0___boxed(lean_object* v_msgData_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_){
_start:
{
lean_object* v_res_898_; 
v_res_898_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0_spec__0(v_msgData_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_);
lean_dec(v___y_896_);
lean_dec_ref(v___y_895_);
lean_dec(v___y_894_);
lean_dec_ref(v___y_893_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg(lean_object* v_msg_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
lean_object* v_ref_905_; lean_object* v___x_906_; lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_915_; 
v_ref_905_ = lean_ctor_get(v___y_902_, 2);
v___x_906_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0_spec__0(v_msg_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_);
v_a_907_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_915_ == 0)
{
v___x_909_ = v___x_906_;
v_isShared_910_ = v_isSharedCheck_915_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_906_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_915_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_911_; lean_object* v___x_913_; 
lean_inc(v_ref_905_);
v___x_911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_911_, 0, v_ref_905_);
lean_ctor_set(v___x_911_, 1, v_a_907_);
if (v_isShared_910_ == 0)
{
lean_ctor_set_tag(v___x_909_, 1);
lean_ctor_set(v___x_909_, 0, v___x_911_);
v___x_913_ = v___x_909_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v___x_911_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg___boxed(lean_object* v_msg_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg(v_msg_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
return v_res_922_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_924_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__0));
v___x_925_ = l_Lean_stringToMessageData(v___x_924_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0(lean_object* v_x_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
lean_object* v___x_935_; lean_object* v___x_936_; 
v___x_935_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___closed__1);
v___x_936_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg(v___x_935_, v___y_930_, v___y_931_, v___y_932_, v___y_933_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0___boxed(lean_object* v_x_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_){
_start:
{
lean_object* v_res_946_; 
v_res_946_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__0(v_x_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_);
lean_dec(v___y_944_);
lean_dec_ref(v___y_943_);
lean_dec(v___y_942_);
lean_dec_ref(v___y_941_);
lean_dec(v___y_940_);
lean_dec_ref(v___y_939_);
lean_dec(v___y_938_);
lean_dec_ref(v_x_937_);
return v_res_946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1(lean_object* v_x_947_, lean_object* v_x_948_, lean_object* v_goal_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_){
_start:
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_959_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v_goal_949_);
v___x_960_ = lean_box(0);
v___x_961_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_959_, v___x_960_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
if (lean_obj_tag(v___x_961_) == 0)
{
lean_object* v_a_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v_a_962_ = lean_ctor_get(v___x_961_, 0);
lean_inc(v_a_962_);
lean_dec_ref_known(v___x_961_, 1);
v___x_963_ = l_Lean_Expr_mvarId_x21(v_a_962_);
v___x_964_ = lean_box(0);
v___x_965_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_965_, 0, v___x_963_);
lean_ctor_set(v___x_965_, 1, v___x_964_);
v___x_966_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_965_, v___y_951_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
if (lean_obj_tag(v___x_966_) == 0)
{
lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_973_; 
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_973_ == 0)
{
lean_object* v_unused_974_; 
v_unused_974_ = lean_ctor_get(v___x_966_, 0);
lean_dec(v_unused_974_);
v___x_968_ = v___x_966_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_dec(v___x_966_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_971_; 
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 0, v_a_962_);
v___x_971_ = v___x_968_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_a_962_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
else
{
lean_object* v_a_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_982_; 
lean_dec(v_a_962_);
v_a_975_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_982_ == 0)
{
v___x_977_ = v___x_966_;
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_966_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_980_; 
if (v_isShared_978_ == 0)
{
v___x_980_ = v___x_977_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_a_975_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
}
}
else
{
return v___x_961_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1___boxed(lean_object* v_x_983_, lean_object* v_x_984_, lean_object* v_goal_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_){
_start:
{
lean_object* v_res_995_; 
v_res_995_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__1(v_x_983_, v_x_984_, v_goal_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_);
lean_dec(v___y_993_);
lean_dec_ref(v___y_992_);
lean_dec(v___y_991_);
lean_dec_ref(v___y_990_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec_ref(v_x_984_);
lean_dec_ref(v_x_983_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10_spec__11___redArg(lean_object* v_x_996_, lean_object* v_x_997_, lean_object* v_x_998_, lean_object* v_x_999_){
_start:
{
lean_object* v_ks_1000_; lean_object* v_vs_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1025_; 
v_ks_1000_ = lean_ctor_get(v_x_996_, 0);
v_vs_1001_ = lean_ctor_get(v_x_996_, 1);
v_isSharedCheck_1025_ = !lean_is_exclusive(v_x_996_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_1003_ = v_x_996_;
v_isShared_1004_ = v_isSharedCheck_1025_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_vs_1001_);
lean_inc(v_ks_1000_);
lean_dec(v_x_996_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1025_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1005_; uint8_t v___x_1006_; 
v___x_1005_ = lean_array_get_size(v_ks_1000_);
v___x_1006_ = lean_nat_dec_lt(v_x_997_, v___x_1005_);
if (v___x_1006_ == 0)
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1010_; 
lean_dec(v_x_997_);
v___x_1007_ = lean_array_push(v_ks_1000_, v_x_998_);
v___x_1008_ = lean_array_push(v_vs_1001_, v_x_999_);
if (v_isShared_1004_ == 0)
{
lean_ctor_set(v___x_1003_, 1, v___x_1008_);
lean_ctor_set(v___x_1003_, 0, v___x_1007_);
v___x_1010_ = v___x_1003_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v___x_1007_);
lean_ctor_set(v_reuseFailAlloc_1011_, 1, v___x_1008_);
v___x_1010_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
return v___x_1010_;
}
}
else
{
lean_object* v_k_x27_1012_; uint8_t v___x_1013_; 
v_k_x27_1012_ = lean_array_fget_borrowed(v_ks_1000_, v_x_997_);
v___x_1013_ = l_Lean_instBEqMVarId_beq(v_x_998_, v_k_x27_1012_);
if (v___x_1013_ == 0)
{
lean_object* v___x_1015_; 
if (v_isShared_1004_ == 0)
{
v___x_1015_ = v___x_1003_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_ks_1000_);
lean_ctor_set(v_reuseFailAlloc_1019_, 1, v_vs_1001_);
v___x_1015_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1016_ = lean_unsigned_to_nat(1u);
v___x_1017_ = lean_nat_add(v_x_997_, v___x_1016_);
lean_dec(v_x_997_);
v_x_996_ = v___x_1015_;
v_x_997_ = v___x_1017_;
goto _start;
}
}
else
{
lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1023_; 
v___x_1020_ = lean_array_fset(v_ks_1000_, v_x_997_, v_x_998_);
v___x_1021_ = lean_array_fset(v_vs_1001_, v_x_997_, v_x_999_);
lean_dec(v_x_997_);
if (v_isShared_1004_ == 0)
{
lean_ctor_set(v___x_1003_, 1, v___x_1021_);
lean_ctor_set(v___x_1003_, 0, v___x_1020_);
v___x_1023_ = v___x_1003_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v___x_1020_);
lean_ctor_set(v_reuseFailAlloc_1024_, 1, v___x_1021_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10___redArg(lean_object* v_n_1026_, lean_object* v_k_1027_, lean_object* v_v_1028_){
_start:
{
lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1029_ = lean_unsigned_to_nat(0u);
v___x_1030_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10_spec__11___redArg(v_n_1026_, v___x_1029_, v_k_1027_, v_v_1028_);
return v___x_1030_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_1031_; 
v___x_1031_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(lean_object* v_x_1032_, size_t v_x_1033_, size_t v_x_1034_, lean_object* v_x_1035_, lean_object* v_x_1036_){
_start:
{
if (lean_obj_tag(v_x_1032_) == 0)
{
lean_object* v_es_1037_; size_t v___x_1038_; size_t v___x_1039_; lean_object* v_j_1040_; lean_object* v___x_1041_; uint8_t v___x_1042_; 
v_es_1037_ = lean_ctor_get(v_x_1032_, 0);
v___x_1038_ = ((size_t)31ULL);
v___x_1039_ = lean_usize_land(v_x_1033_, v___x_1038_);
v_j_1040_ = lean_usize_to_nat(v___x_1039_);
v___x_1041_ = lean_array_get_size(v_es_1037_);
v___x_1042_ = lean_nat_dec_lt(v_j_1040_, v___x_1041_);
if (v___x_1042_ == 0)
{
lean_dec(v_j_1040_);
lean_dec(v_x_1036_);
lean_dec(v_x_1035_);
return v_x_1032_;
}
else
{
lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1081_; 
lean_inc_ref(v_es_1037_);
v_isSharedCheck_1081_ = !lean_is_exclusive(v_x_1032_);
if (v_isSharedCheck_1081_ == 0)
{
lean_object* v_unused_1082_; 
v_unused_1082_ = lean_ctor_get(v_x_1032_, 0);
lean_dec(v_unused_1082_);
v___x_1044_ = v_x_1032_;
v_isShared_1045_ = v_isSharedCheck_1081_;
goto v_resetjp_1043_;
}
else
{
lean_dec(v_x_1032_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1081_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v_v_1046_; lean_object* v___x_1047_; lean_object* v_xs_x27_1048_; lean_object* v___y_1050_; 
v_v_1046_ = lean_array_fget(v_es_1037_, v_j_1040_);
v___x_1047_ = lean_box(0);
v_xs_x27_1048_ = lean_array_fset(v_es_1037_, v_j_1040_, v___x_1047_);
switch(lean_obj_tag(v_v_1046_))
{
case 0:
{
lean_object* v_key_1055_; lean_object* v_val_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1066_; 
v_key_1055_ = lean_ctor_get(v_v_1046_, 0);
v_val_1056_ = lean_ctor_get(v_v_1046_, 1);
v_isSharedCheck_1066_ = !lean_is_exclusive(v_v_1046_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1058_ = v_v_1046_;
v_isShared_1059_ = v_isSharedCheck_1066_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_val_1056_);
lean_inc(v_key_1055_);
lean_dec(v_v_1046_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1066_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
uint8_t v___x_1060_; 
v___x_1060_ = l_Lean_instBEqMVarId_beq(v_x_1035_, v_key_1055_);
if (v___x_1060_ == 0)
{
lean_object* v___x_1061_; lean_object* v___x_1062_; 
lean_del_object(v___x_1058_);
v___x_1061_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1055_, v_val_1056_, v_x_1035_, v_x_1036_);
v___x_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1061_);
v___y_1050_ = v___x_1062_;
goto v___jp_1049_;
}
else
{
lean_object* v___x_1064_; 
lean_dec(v_val_1056_);
lean_dec(v_key_1055_);
if (v_isShared_1059_ == 0)
{
lean_ctor_set(v___x_1058_, 1, v_x_1036_);
lean_ctor_set(v___x_1058_, 0, v_x_1035_);
v___x_1064_ = v___x_1058_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v_x_1035_);
lean_ctor_set(v_reuseFailAlloc_1065_, 1, v_x_1036_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
v___y_1050_ = v___x_1064_;
goto v___jp_1049_;
}
}
}
}
case 1:
{
lean_object* v_node_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1079_; 
v_node_1067_ = lean_ctor_get(v_v_1046_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v_v_1046_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1069_ = v_v_1046_;
v_isShared_1070_ = v_isSharedCheck_1079_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_node_1067_);
lean_dec(v_v_1046_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1079_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
size_t v___x_1071_; size_t v___x_1072_; size_t v___x_1073_; size_t v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1077_; 
v___x_1071_ = ((size_t)5ULL);
v___x_1072_ = lean_usize_shift_right(v_x_1033_, v___x_1071_);
v___x_1073_ = ((size_t)1ULL);
v___x_1074_ = lean_usize_add(v_x_1034_, v___x_1073_);
v___x_1075_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(v_node_1067_, v___x_1072_, v___x_1074_, v_x_1035_, v_x_1036_);
if (v_isShared_1070_ == 0)
{
lean_ctor_set(v___x_1069_, 0, v___x_1075_);
v___x_1077_ = v___x_1069_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1075_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
v___y_1050_ = v___x_1077_;
goto v___jp_1049_;
}
}
}
default: 
{
lean_object* v___x_1080_; 
v___x_1080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1080_, 0, v_x_1035_);
lean_ctor_set(v___x_1080_, 1, v_x_1036_);
v___y_1050_ = v___x_1080_;
goto v___jp_1049_;
}
}
v___jp_1049_:
{
lean_object* v___x_1051_; lean_object* v___x_1053_; 
v___x_1051_ = lean_array_fset(v_xs_x27_1048_, v_j_1040_, v___y_1050_);
lean_dec(v_j_1040_);
if (v_isShared_1045_ == 0)
{
lean_ctor_set(v___x_1044_, 0, v___x_1051_);
v___x_1053_ = v___x_1044_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v___x_1051_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
return v___x_1053_;
}
}
}
}
}
else
{
lean_object* v_ks_1083_; lean_object* v_vs_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1102_; 
v_ks_1083_ = lean_ctor_get(v_x_1032_, 0);
v_vs_1084_ = lean_ctor_get(v_x_1032_, 1);
v_isSharedCheck_1102_ = !lean_is_exclusive(v_x_1032_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1086_ = v_x_1032_;
v_isShared_1087_ = v_isSharedCheck_1102_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_vs_1084_);
lean_inc(v_ks_1083_);
lean_dec(v_x_1032_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1102_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v___x_1089_; 
if (v_isShared_1087_ == 0)
{
v___x_1089_ = v___x_1086_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_ks_1083_);
lean_ctor_set(v_reuseFailAlloc_1101_, 1, v_vs_1084_);
v___x_1089_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
lean_object* v_newNode_1090_; size_t v___x_1091_; uint8_t v___x_1092_; 
v_newNode_1090_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10___redArg(v___x_1089_, v_x_1035_, v_x_1036_);
v___x_1091_ = ((size_t)7ULL);
v___x_1092_ = lean_usize_dec_le(v___x_1091_, v_x_1034_);
if (v___x_1092_ == 0)
{
lean_object* v___x_1093_; lean_object* v___x_1094_; uint8_t v___x_1095_; 
v___x_1093_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1090_);
v___x_1094_ = lean_unsigned_to_nat(4u);
v___x_1095_ = lean_nat_dec_lt(v___x_1093_, v___x_1094_);
lean_dec(v___x_1093_);
if (v___x_1095_ == 0)
{
lean_object* v_ks_1096_; lean_object* v_vs_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
v_ks_1096_ = lean_ctor_get(v_newNode_1090_, 0);
lean_inc_ref(v_ks_1096_);
v_vs_1097_ = lean_ctor_get(v_newNode_1090_, 1);
lean_inc_ref(v_vs_1097_);
lean_dec_ref(v_newNode_1090_);
v___x_1098_ = lean_unsigned_to_nat(0u);
v___x_1099_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___closed__0);
v___x_1100_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11___redArg(v_x_1034_, v_ks_1096_, v_vs_1097_, v___x_1098_, v___x_1099_);
lean_dec_ref(v_vs_1097_);
lean_dec_ref(v_ks_1096_);
return v___x_1100_;
}
else
{
return v_newNode_1090_;
}
}
else
{
return v_newNode_1090_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11___redArg(size_t v_depth_1103_, lean_object* v_keys_1104_, lean_object* v_vals_1105_, lean_object* v_i_1106_, lean_object* v_entries_1107_){
_start:
{
lean_object* v___x_1108_; uint8_t v___x_1109_; 
v___x_1108_ = lean_array_get_size(v_keys_1104_);
v___x_1109_ = lean_nat_dec_lt(v_i_1106_, v___x_1108_);
if (v___x_1109_ == 0)
{
lean_dec(v_i_1106_);
return v_entries_1107_;
}
else
{
lean_object* v_k_1110_; lean_object* v_v_1111_; uint64_t v___x_1112_; size_t v_h_1113_; size_t v___x_1114_; lean_object* v___x_1115_; size_t v___x_1116_; size_t v___x_1117_; size_t v___x_1118_; size_t v_h_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v_k_1110_ = lean_array_fget_borrowed(v_keys_1104_, v_i_1106_);
v_v_1111_ = lean_array_fget_borrowed(v_vals_1105_, v_i_1106_);
v___x_1112_ = l_Lean_instHashableMVarId_hash(v_k_1110_);
v_h_1113_ = lean_uint64_to_usize(v___x_1112_);
v___x_1114_ = ((size_t)5ULL);
v___x_1115_ = lean_unsigned_to_nat(1u);
v___x_1116_ = ((size_t)1ULL);
v___x_1117_ = lean_usize_sub(v_depth_1103_, v___x_1116_);
v___x_1118_ = lean_usize_mul(v___x_1114_, v___x_1117_);
v_h_1119_ = lean_usize_shift_right(v_h_1113_, v___x_1118_);
v___x_1120_ = lean_nat_add(v_i_1106_, v___x_1115_);
lean_dec(v_i_1106_);
lean_inc(v_v_1111_);
lean_inc(v_k_1110_);
v___x_1121_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(v_entries_1107_, v_h_1119_, v_depth_1103_, v_k_1110_, v_v_1111_);
v_i_1106_ = v___x_1120_;
v_entries_1107_ = v___x_1121_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11___redArg___boxed(lean_object* v_depth_1123_, lean_object* v_keys_1124_, lean_object* v_vals_1125_, lean_object* v_i_1126_, lean_object* v_entries_1127_){
_start:
{
size_t v_depth_boxed_1128_; lean_object* v_res_1129_; 
v_depth_boxed_1128_ = lean_unbox_usize(v_depth_1123_);
lean_dec(v_depth_1123_);
v_res_1129_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11___redArg(v_depth_boxed_1128_, v_keys_1124_, v_vals_1125_, v_i_1126_, v_entries_1127_);
lean_dec_ref(v_vals_1125_);
lean_dec_ref(v_keys_1124_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg___boxed(lean_object* v_x_1130_, lean_object* v_x_1131_, lean_object* v_x_1132_, lean_object* v_x_1133_, lean_object* v_x_1134_){
_start:
{
size_t v_x_10820__boxed_1135_; size_t v_x_10821__boxed_1136_; lean_object* v_res_1137_; 
v_x_10820__boxed_1135_ = lean_unbox_usize(v_x_1131_);
lean_dec(v_x_1131_);
v_x_10821__boxed_1136_ = lean_unbox_usize(v_x_1132_);
lean_dec(v_x_1132_);
v_res_1137_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(v_x_1130_, v_x_10820__boxed_1135_, v_x_10821__boxed_1136_, v_x_1133_, v_x_1134_);
return v_res_1137_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5___redArg(lean_object* v_x_1138_, lean_object* v_x_1139_, lean_object* v_x_1140_){
_start:
{
uint64_t v___x_1141_; size_t v___x_1142_; size_t v___x_1143_; lean_object* v___x_1144_; 
v___x_1141_ = l_Lean_instHashableMVarId_hash(v_x_1139_);
v___x_1142_ = lean_uint64_to_usize(v___x_1141_);
v___x_1143_ = ((size_t)1ULL);
v___x_1144_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(v_x_1138_, v___x_1142_, v___x_1143_, v_x_1139_, v_x_1140_);
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg(lean_object* v_mvarId_1145_, lean_object* v_val_1146_, lean_object* v___y_1147_){
_start:
{
lean_object* v___x_1149_; lean_object* v_mctx_1150_; lean_object* v_cache_1151_; lean_object* v_zetaDeltaFVarIds_1152_; lean_object* v_postponed_1153_; lean_object* v_diag_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1183_; 
v___x_1149_ = lean_st_ref_take(v___y_1147_);
v_mctx_1150_ = lean_ctor_get(v___x_1149_, 0);
v_cache_1151_ = lean_ctor_get(v___x_1149_, 1);
v_zetaDeltaFVarIds_1152_ = lean_ctor_get(v___x_1149_, 2);
v_postponed_1153_ = lean_ctor_get(v___x_1149_, 3);
v_diag_1154_ = lean_ctor_get(v___x_1149_, 4);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1149_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1156_ = v___x_1149_;
v_isShared_1157_ = v_isSharedCheck_1183_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_diag_1154_);
lean_inc(v_postponed_1153_);
lean_inc(v_zetaDeltaFVarIds_1152_);
lean_inc(v_cache_1151_);
lean_inc(v_mctx_1150_);
lean_dec(v___x_1149_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1183_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v_depth_1158_; lean_object* v_levelAssignDepth_1159_; lean_object* v_lmvarCounter_1160_; lean_object* v_mvarCounter_1161_; lean_object* v_lDecls_1162_; lean_object* v_decls_1163_; lean_object* v_userNames_1164_; lean_object* v_lAssignment_1165_; lean_object* v_eAssignment_1166_; lean_object* v_dAssignment_1167_; lean_object* v_instanceTypedMVars_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1182_; 
v_depth_1158_ = lean_ctor_get(v_mctx_1150_, 0);
v_levelAssignDepth_1159_ = lean_ctor_get(v_mctx_1150_, 1);
v_lmvarCounter_1160_ = lean_ctor_get(v_mctx_1150_, 2);
v_mvarCounter_1161_ = lean_ctor_get(v_mctx_1150_, 3);
v_lDecls_1162_ = lean_ctor_get(v_mctx_1150_, 4);
v_decls_1163_ = lean_ctor_get(v_mctx_1150_, 5);
v_userNames_1164_ = lean_ctor_get(v_mctx_1150_, 6);
v_lAssignment_1165_ = lean_ctor_get(v_mctx_1150_, 7);
v_eAssignment_1166_ = lean_ctor_get(v_mctx_1150_, 8);
v_dAssignment_1167_ = lean_ctor_get(v_mctx_1150_, 9);
v_instanceTypedMVars_1168_ = lean_ctor_get(v_mctx_1150_, 10);
v_isSharedCheck_1182_ = !lean_is_exclusive(v_mctx_1150_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1170_ = v_mctx_1150_;
v_isShared_1171_ = v_isSharedCheck_1182_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_instanceTypedMVars_1168_);
lean_inc(v_dAssignment_1167_);
lean_inc(v_eAssignment_1166_);
lean_inc(v_lAssignment_1165_);
lean_inc(v_userNames_1164_);
lean_inc(v_decls_1163_);
lean_inc(v_lDecls_1162_);
lean_inc(v_mvarCounter_1161_);
lean_inc(v_lmvarCounter_1160_);
lean_inc(v_levelAssignDepth_1159_);
lean_inc(v_depth_1158_);
lean_dec(v_mctx_1150_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1182_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1175_; 
v___x_1172_ = lean_box(0);
v___x_1173_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5___redArg(v_eAssignment_1166_, v_mvarId_1145_, v_val_1146_);
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 8, v___x_1173_);
v___x_1175_ = v___x_1170_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v_depth_1158_);
lean_ctor_set(v_reuseFailAlloc_1181_, 1, v_levelAssignDepth_1159_);
lean_ctor_set(v_reuseFailAlloc_1181_, 2, v_lmvarCounter_1160_);
lean_ctor_set(v_reuseFailAlloc_1181_, 3, v_mvarCounter_1161_);
lean_ctor_set(v_reuseFailAlloc_1181_, 4, v_lDecls_1162_);
lean_ctor_set(v_reuseFailAlloc_1181_, 5, v_decls_1163_);
lean_ctor_set(v_reuseFailAlloc_1181_, 6, v_userNames_1164_);
lean_ctor_set(v_reuseFailAlloc_1181_, 7, v_lAssignment_1165_);
lean_ctor_set(v_reuseFailAlloc_1181_, 8, v___x_1173_);
lean_ctor_set(v_reuseFailAlloc_1181_, 9, v_dAssignment_1167_);
lean_ctor_set(v_reuseFailAlloc_1181_, 10, v_instanceTypedMVars_1168_);
v___x_1175_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
lean_object* v___x_1177_; 
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 0, v___x_1175_);
v___x_1177_ = v___x_1156_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v___x_1175_);
lean_ctor_set(v_reuseFailAlloc_1180_, 1, v_cache_1151_);
lean_ctor_set(v_reuseFailAlloc_1180_, 2, v_zetaDeltaFVarIds_1152_);
lean_ctor_set(v_reuseFailAlloc_1180_, 3, v_postponed_1153_);
lean_ctor_set(v_reuseFailAlloc_1180_, 4, v_diag_1154_);
v___x_1177_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1178_ = lean_st_ref_put(v___y_1147_, v___x_1177_);
v___x_1179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1172_);
return v___x_1179_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg___boxed(lean_object* v_mvarId_1184_, lean_object* v_val_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_){
_start:
{
lean_object* v_res_1188_; 
v_res_1188_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg(v_mvarId_1184_, v_val_1185_, v___y_1186_);
lean_dec(v___y_1186_);
return v_res_1188_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg(lean_object* v_msg_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
lean_object* v_ref_1195_; lean_object* v___x_1196_; lean_object* v_a_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1205_; 
v_ref_1195_ = lean_ctor_get(v___y_1192_, 2);
v___x_1196_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0_spec__0(v_msg_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_);
v_a_1197_ = lean_ctor_get(v___x_1196_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1196_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1199_ = v___x_1196_;
v_isShared_1200_ = v_isSharedCheck_1205_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_a_1197_);
lean_dec(v___x_1196_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1205_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1201_; lean_object* v___x_1203_; 
lean_inc(v_ref_1195_);
v___x_1201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1201_, 0, v_ref_1195_);
lean_ctor_set(v___x_1201_, 1, v_a_1197_);
if (v_isShared_1200_ == 0)
{
lean_ctor_set_tag(v___x_1199_, 1);
lean_ctor_set(v___x_1199_, 0, v___x_1201_);
v___x_1203_ = v___x_1199_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v___x_1201_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg___boxed(lean_object* v_msg_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg(v_msg_1206_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_);
lean_dec(v___y_1210_);
lean_dec_ref(v___y_1209_);
lean_dec(v___y_1208_);
lean_dec_ref(v___y_1207_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___lam__0(lean_object* v_k_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v_b_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v___x_1224_; 
lean_inc(v___y_1222_);
lean_inc_ref(v___y_1221_);
lean_inc(v___y_1220_);
lean_inc_ref(v___y_1219_);
lean_inc(v___y_1217_);
lean_inc_ref(v___y_1216_);
lean_inc(v___y_1215_);
lean_inc_ref(v___y_1214_);
v___x_1224_ = lean_apply_10(v_k_1213_, v_b_1218_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, lean_box(0));
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___lam__0___boxed(lean_object* v_k_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v_b_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___lam__0(v_k_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v_b_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_);
lean_dec(v___y_1234_);
lean_dec_ref(v___y_1233_);
lean_dec(v___y_1232_);
lean_dec_ref(v___y_1231_);
lean_dec(v___y_1229_);
lean_dec_ref(v___y_1228_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg(lean_object* v_name_1237_, uint8_t v_bi_1238_, lean_object* v_type_1239_, lean_object* v_k_1240_, uint8_t v_kind_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_){
_start:
{
lean_object* v___f_1251_; lean_object* v___x_1252_; 
lean_inc(v___y_1245_);
lean_inc_ref(v___y_1244_);
lean_inc(v___y_1243_);
lean_inc_ref(v___y_1242_);
v___f_1251_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_1251_, 0, v_k_1240_);
lean_closure_set(v___f_1251_, 1, v___y_1242_);
lean_closure_set(v___f_1251_, 2, v___y_1243_);
lean_closure_set(v___f_1251_, 3, v___y_1244_);
lean_closure_set(v___f_1251_, 4, v___y_1245_);
v___x_1252_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1237_, v_bi_1238_, v_type_1239_, v___f_1251_, v_kind_1241_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_);
if (lean_obj_tag(v___x_1252_) == 0)
{
return v___x_1252_;
}
else
{
lean_object* v_a_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1260_; 
v_a_1253_ = lean_ctor_get(v___x_1252_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1252_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1255_ = v___x_1252_;
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_a_1253_);
lean_dec(v___x_1252_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1258_; 
if (v_isShared_1256_ == 0)
{
v___x_1258_ = v___x_1255_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_a_1253_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_name_1261_, lean_object* v_bi_1262_, lean_object* v_type_1263_, lean_object* v_k_1264_, lean_object* v_kind_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_){
_start:
{
uint8_t v_bi_boxed_1275_; uint8_t v_kind_boxed_1276_; lean_object* v_res_1277_; 
v_bi_boxed_1275_ = lean_unbox(v_bi_1262_);
v_kind_boxed_1276_ = lean_unbox(v_kind_1265_);
v_res_1277_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg(v_name_1261_, v_bi_boxed_1275_, v_type_1263_, v_k_1264_, v_kind_boxed_1276_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_);
lean_dec(v___y_1273_);
lean_dec_ref(v___y_1272_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec(v___y_1269_);
lean_dec_ref(v___y_1268_);
lean_dec(v___y_1267_);
lean_dec_ref(v___y_1266_);
return v_res_1277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg(lean_object* v_name_1278_, lean_object* v_type_1279_, lean_object* v_k_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_){
_start:
{
uint8_t v___x_1290_; uint8_t v___x_1291_; lean_object* v___x_1292_; 
v___x_1290_ = 0;
v___x_1291_ = 0;
v___x_1292_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg(v_name_1278_, v___x_1290_, v_type_1279_, v_k_1280_, v___x_1291_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg___boxed(lean_object* v_name_1293_, lean_object* v_type_1294_, lean_object* v_k_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
lean_object* v_res_1305_; 
v_res_1305_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg(v_name_1293_, v_type_1294_, v_k_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
lean_dec(v___y_1299_);
lean_dec_ref(v___y_1298_);
lean_dec(v___y_1297_);
lean_dec_ref(v___y_1296_);
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___lam__0(lean_object* v_kSuccess_1306_, lean_object* v_a_1307_, lean_object* v_goal_1308_, uint8_t v_a_1309_, lean_object* v___x_1310_, lean_object* v___x_1311_, lean_object* v___x_1312_, lean_object* v___x_1313_, lean_object* v___x_1314_, lean_object* v_00_u03c3s_1315_, lean_object* v_hyps_1316_, lean_object* v_a_1317_, lean_object* v_target_1318_, lean_object* v_a_1319_, lean_object* v_h_u03c6_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_){
_start:
{
lean_object* v___x_1330_; 
lean_inc(v___y_1328_);
lean_inc_ref(v___y_1327_);
lean_inc(v___y_1326_);
lean_inc_ref(v___y_1325_);
lean_inc(v___y_1324_);
lean_inc_ref(v___y_1323_);
lean_inc(v___y_1322_);
lean_inc_ref(v___y_1321_);
lean_inc_ref(v_h_u03c6_1320_);
lean_inc_ref(v_a_1307_);
v___x_1330_ = lean_apply_12(v_kSuccess_1306_, v_a_1307_, v_h_u03c6_1320_, v_goal_1308_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_, lean_box(0));
if (lean_obj_tag(v___x_1330_) == 0)
{
lean_object* v_a_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; uint8_t v___x_1335_; uint8_t v___x_1336_; lean_object* v___x_1337_; 
v_a_1331_ = lean_ctor_get(v___x_1330_, 0);
lean_inc(v_a_1331_);
lean_dec_ref_known(v___x_1330_, 1);
v___x_1332_ = lean_unsigned_to_nat(1u);
v___x_1333_ = lean_mk_empty_array_with_capacity(v___x_1332_);
v___x_1334_ = lean_array_push(v___x_1333_, v_h_u03c6_1320_);
v___x_1335_ = 1;
v___x_1336_ = 1;
v___x_1337_ = l_Lean_Meta_mkLambdaFVars(v___x_1334_, v_a_1331_, v_a_1309_, v___x_1335_, v_a_1309_, v___x_1335_, v___x_1336_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_);
lean_dec_ref(v___x_1334_);
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_object* v_a_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1350_; 
v_a_1338_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1340_ = v___x_1337_;
v_isShared_1341_ = v_isSharedCheck_1350_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_a_1338_);
lean_dec(v___x_1337_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1350_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v_prf_1346_; lean_object* v___x_1348_; 
v___x_1342_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__0));
v___x_1343_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__0___closed__1));
v___x_1344_ = l_Lean_Name_mkStr6(v___x_1310_, v___x_1311_, v___x_1312_, v___x_1313_, v___x_1342_, v___x_1343_);
v___x_1345_ = l_Lean_mkConst(v___x_1344_, v___x_1314_);
v_prf_1346_ = l_Lean_mkApp7(v___x_1345_, v_00_u03c3s_1315_, v_hyps_1316_, v_a_1317_, v_target_1318_, v_a_1307_, v_a_1319_, v_a_1338_);
if (v_isShared_1341_ == 0)
{
lean_ctor_set(v___x_1340_, 0, v_prf_1346_);
v___x_1348_ = v___x_1340_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_prf_1346_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
}
else
{
lean_dec_ref(v_a_1319_);
lean_dec_ref(v_target_1318_);
lean_dec_ref(v_a_1317_);
lean_dec_ref(v_hyps_1316_);
lean_dec_ref(v_00_u03c3s_1315_);
lean_dec(v___x_1314_);
lean_dec_ref(v___x_1313_);
lean_dec_ref(v___x_1312_);
lean_dec_ref(v___x_1311_);
lean_dec_ref(v___x_1310_);
lean_dec_ref(v_a_1307_);
return v___x_1337_;
}
}
else
{
lean_dec_ref(v_h_u03c6_1320_);
lean_dec_ref(v_a_1319_);
lean_dec_ref(v_target_1318_);
lean_dec_ref(v_a_1317_);
lean_dec_ref(v_hyps_1316_);
lean_dec_ref(v_00_u03c3s_1315_);
lean_dec(v___x_1314_);
lean_dec_ref(v___x_1313_);
lean_dec_ref(v___x_1312_);
lean_dec_ref(v___x_1311_);
lean_dec_ref(v___x_1310_);
lean_dec_ref(v_a_1307_);
return v___x_1330_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___lam__0___boxed(lean_object** _args){
lean_object* v_kSuccess_1351_ = _args[0];
lean_object* v_a_1352_ = _args[1];
lean_object* v_goal_1353_ = _args[2];
lean_object* v_a_1354_ = _args[3];
lean_object* v___x_1355_ = _args[4];
lean_object* v___x_1356_ = _args[5];
lean_object* v___x_1357_ = _args[6];
lean_object* v___x_1358_ = _args[7];
lean_object* v___x_1359_ = _args[8];
lean_object* v_00_u03c3s_1360_ = _args[9];
lean_object* v_hyps_1361_ = _args[10];
lean_object* v_a_1362_ = _args[11];
lean_object* v_target_1363_ = _args[12];
lean_object* v_a_1364_ = _args[13];
lean_object* v_h_u03c6_1365_ = _args[14];
lean_object* v___y_1366_ = _args[15];
lean_object* v___y_1367_ = _args[16];
lean_object* v___y_1368_ = _args[17];
lean_object* v___y_1369_ = _args[18];
lean_object* v___y_1370_ = _args[19];
lean_object* v___y_1371_ = _args[20];
lean_object* v___y_1372_ = _args[21];
lean_object* v___y_1373_ = _args[22];
lean_object* v___y_1374_ = _args[23];
_start:
{
uint8_t v_a_11178__boxed_1375_; lean_object* v_res_1376_; 
v_a_11178__boxed_1375_ = lean_unbox(v_a_1354_);
v_res_1376_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___lam__0(v_kSuccess_1351_, v_a_1352_, v_goal_1353_, v_a_11178__boxed_1375_, v___x_1355_, v___x_1356_, v___x_1357_, v___x_1358_, v___x_1359_, v_00_u03c3s_1360_, v_hyps_1361_, v_a_1362_, v_target_1363_, v_a_1364_, v_h_u03c6_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
return v_res_1376_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1383_ = lean_box(0);
v___x_1384_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__7___closed__1));
v___x_1385_ = l_Lean_mkConst(v___x_1384_, v___x_1383_);
return v___x_1385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2(lean_object* v_goal_1386_, lean_object* v_kFail_1387_, lean_object* v_kSuccess_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_){
_start:
{
lean_object* v_u_1398_; lean_object* v_00_u03c3s_1399_; lean_object* v_hyps_1400_; lean_object* v_target_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1475_; 
v_u_1398_ = lean_ctor_get(v_goal_1386_, 0);
v_00_u03c3s_1399_ = lean_ctor_get(v_goal_1386_, 1);
v_hyps_1400_ = lean_ctor_get(v_goal_1386_, 2);
v_target_1401_ = lean_ctor_get(v_goal_1386_, 3);
v_isSharedCheck_1475_ = !lean_is_exclusive(v_goal_1386_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1403_ = v_goal_1386_;
v_isShared_1404_ = v_isSharedCheck_1475_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_target_1401_);
lean_inc(v_hyps_1400_);
lean_inc(v_00_u03c3s_1399_);
lean_inc(v_u_1398_);
lean_dec(v_goal_1386_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1475_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1405_; uint8_t v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___x_1405_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___closed__1);
v___x_1406_ = 0;
v___x_1407_ = lean_box(0);
v___x_1408_ = l_Lean_Meta_mkFreshExprMVar(v___x_1405_, v___x_1406_, v___x_1407_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
if (lean_obj_tag(v___x_1408_) == 0)
{
lean_object* v_a_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1474_; 
v_a_1409_ = lean_ctor_get(v___x_1408_, 0);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___x_1408_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1411_ = v___x_1408_;
v_isShared_1412_ = v_isSharedCheck_1474_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_a_1409_);
lean_dec(v___x_1408_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1474_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1422_; 
v___x_1413_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__0));
v___x_1414_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__1));
v___x_1415_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__2));
v___x_1416_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__9___closed__3));
v___x_1417_ = lean_box(0);
lean_inc(v_u_1398_);
v___x_1418_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1418_, 0, v_u_1398_);
lean_ctor_set(v___x_1418_, 1, v___x_1417_);
lean_inc_ref(v___x_1418_);
v___x_1419_ = l_Lean_mkConst(v___x_1416_, v___x_1418_);
lean_inc_ref(v_00_u03c3s_1399_);
v___x_1420_ = l_Lean_Expr_app___override(v___x_1419_, v_00_u03c3s_1399_);
if (v_isShared_1412_ == 0)
{
lean_ctor_set_tag(v___x_1411_, 1);
lean_ctor_set(v___x_1411_, 0, v___x_1420_);
v___x_1422_ = v___x_1411_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v___x_1420_);
v___x_1422_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
lean_object* v___x_1423_; 
v___x_1423_ = l_Lean_Meta_mkFreshExprMVar(v___x_1422_, v___x_1406_, v___x_1407_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
if (lean_obj_tag(v___x_1423_) == 0)
{
lean_object* v_a_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; 
v_a_1424_ = lean_ctor_get(v___x_1423_, 0);
lean_inc_n(v_a_1424_, 2);
lean_dec_ref_known(v___x_1423_, 1);
v___x_1425_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___redArg___lam__8___closed__0));
v___x_1426_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__0));
lean_inc_ref(v___x_1418_);
v___x_1427_ = l_Lean_mkConst(v___x_1426_, v___x_1418_);
lean_inc(v_a_1409_);
lean_inc_ref(v_hyps_1400_);
lean_inc_ref(v_00_u03c3s_1399_);
v___x_1428_ = l_Lean_mkApp4(v___x_1427_, v_00_u03c3s_1399_, v_hyps_1400_, v_a_1424_, v_a_1409_);
v___x_1429_ = lean_box(0);
v___x_1430_ = l_Lean_Meta_trySynthInstance(v___x_1428_, v___x_1429_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
if (lean_obj_tag(v___x_1430_) == 0)
{
lean_object* v_a_1431_; 
v_a_1431_ = lean_ctor_get(v___x_1430_, 0);
lean_inc(v_a_1431_);
lean_dec_ref_known(v___x_1430_, 1);
if (lean_obj_tag(v_a_1431_) == 1)
{
lean_object* v_a_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; 
v_a_1432_ = lean_ctor_get(v_a_1431_, 0);
lean_inc(v_a_1432_);
lean_dec_ref_known(v_a_1431_, 1);
v___x_1433_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___closed__1);
lean_inc(v_a_1409_);
v___x_1434_ = l_Lean_Meta_isExprDefEq(v___x_1433_, v_a_1409_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
if (lean_obj_tag(v___x_1434_) == 0)
{
lean_object* v_a_1435_; uint8_t v___x_1436_; 
v_a_1435_ = lean_ctor_get(v___x_1434_, 0);
lean_inc(v_a_1435_);
lean_dec_ref_known(v___x_1434_, 1);
v___x_1436_ = lean_unbox(v_a_1435_);
if (v___x_1436_ == 0)
{
lean_object* v___x_1437_; 
lean_dec_ref(v_kFail_1387_);
lean_inc_ref(v_hyps_1400_);
v___x_1437_ = l_Lean_Elab_Tactic_Do_ProofMode_transferHypNames(v_hyps_1400_, v_a_1424_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_object* v_a_1438_; lean_object* v_goal_1440_; 
v_a_1438_ = lean_ctor_get(v___x_1437_, 0);
lean_inc_n(v_a_1438_, 2);
lean_dec_ref_known(v___x_1437_, 1);
lean_inc_ref(v_target_1401_);
lean_inc_ref(v_00_u03c3s_1399_);
if (v_isShared_1404_ == 0)
{
lean_ctor_set(v___x_1403_, 2, v_a_1438_);
v_goal_1440_ = v___x_1403_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_u_1398_);
lean_ctor_set(v_reuseFailAlloc_1454_, 1, v_00_u03c3s_1399_);
lean_ctor_set(v_reuseFailAlloc_1454_, 2, v_a_1438_);
lean_ctor_set(v_reuseFailAlloc_1454_, 3, v_target_1401_);
v_goal_1440_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
lean_object* v___f_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
lean_inc(v_a_1409_);
v___f_1441_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___lam__0___boxed), 24, 14);
lean_closure_set(v___f_1441_, 0, v_kSuccess_1388_);
lean_closure_set(v___f_1441_, 1, v_a_1409_);
lean_closure_set(v___f_1441_, 2, v_goal_1440_);
lean_closure_set(v___f_1441_, 3, v_a_1435_);
lean_closure_set(v___f_1441_, 4, v___x_1413_);
lean_closure_set(v___f_1441_, 5, v___x_1414_);
lean_closure_set(v___f_1441_, 6, v___x_1415_);
lean_closure_set(v___f_1441_, 7, v___x_1425_);
lean_closure_set(v___f_1441_, 8, v___x_1418_);
lean_closure_set(v___f_1441_, 9, v_00_u03c3s_1399_);
lean_closure_set(v___f_1441_, 10, v_hyps_1400_);
lean_closure_set(v___f_1441_, 11, v_a_1438_);
lean_closure_set(v___f_1441_, 12, v_target_1401_);
lean_closure_set(v___f_1441_, 13, v_a_1432_);
v___x_1442_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_transferHypNames_label_spec__1___redArg___closed__1));
v___x_1443_ = l_Lean_Core_mkFreshUserName(v___x_1442_, v___y_1395_, v___y_1396_);
if (lean_obj_tag(v___x_1443_) == 0)
{
lean_object* v_a_1444_; lean_object* v___x_1445_; 
v_a_1444_ = lean_ctor_get(v___x_1443_, 0);
lean_inc(v_a_1444_);
lean_dec_ref_known(v___x_1443_, 1);
v___x_1445_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg(v_a_1444_, v_a_1409_, v___f_1441_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
return v___x_1445_;
}
else
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1453_; 
lean_dec_ref(v___f_1441_);
lean_dec(v_a_1409_);
v_a_1446_ = lean_ctor_get(v___x_1443_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v___x_1443_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1448_ = v___x_1443_;
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1443_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1451_; 
if (v_isShared_1449_ == 0)
{
v___x_1451_ = v___x_1448_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v_a_1446_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
return v___x_1451_;
}
}
}
}
}
else
{
lean_dec(v_a_1435_);
lean_dec(v_a_1432_);
lean_dec_ref_known(v___x_1418_, 2);
lean_dec(v_a_1409_);
lean_del_object(v___x_1403_);
lean_dec_ref(v_target_1401_);
lean_dec_ref(v_hyps_1400_);
lean_dec_ref(v_00_u03c3s_1399_);
lean_dec(v_u_1398_);
lean_dec_ref(v_kSuccess_1388_);
return v___x_1437_;
}
}
else
{
lean_object* v___x_1455_; 
lean_dec(v_a_1435_);
lean_dec(v_a_1432_);
lean_dec(v_a_1424_);
lean_dec_ref_known(v___x_1418_, 2);
lean_dec(v_a_1409_);
lean_del_object(v___x_1403_);
lean_dec_ref(v_target_1401_);
lean_dec_ref(v_hyps_1400_);
lean_dec_ref(v_00_u03c3s_1399_);
lean_dec(v_u_1398_);
lean_dec_ref(v_kSuccess_1388_);
lean_inc(v___y_1396_);
lean_inc_ref(v___y_1395_);
lean_inc(v___y_1394_);
lean_inc_ref(v___y_1393_);
lean_inc(v___y_1392_);
lean_inc_ref(v___y_1391_);
lean_inc(v___y_1390_);
lean_inc_ref(v___y_1389_);
v___x_1455_ = lean_apply_9(v_kFail_1387_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_, lean_box(0));
return v___x_1455_;
}
}
else
{
lean_object* v_a_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1463_; 
lean_dec(v_a_1432_);
lean_dec(v_a_1424_);
lean_dec_ref_known(v___x_1418_, 2);
lean_dec(v_a_1409_);
lean_del_object(v___x_1403_);
lean_dec_ref(v_target_1401_);
lean_dec_ref(v_hyps_1400_);
lean_dec_ref(v_00_u03c3s_1399_);
lean_dec(v_u_1398_);
lean_dec_ref(v_kSuccess_1388_);
lean_dec_ref(v_kFail_1387_);
v_a_1456_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1463_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1458_ = v___x_1434_;
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_a_1456_);
lean_dec(v___x_1434_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1461_; 
if (v_isShared_1459_ == 0)
{
v___x_1461_ = v___x_1458_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v_a_1456_);
v___x_1461_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
return v___x_1461_;
}
}
}
}
else
{
lean_object* v___x_1464_; 
lean_dec(v_a_1431_);
lean_dec(v_a_1424_);
lean_dec_ref_known(v___x_1418_, 2);
lean_dec(v_a_1409_);
lean_del_object(v___x_1403_);
lean_dec_ref(v_target_1401_);
lean_dec_ref(v_hyps_1400_);
lean_dec_ref(v_00_u03c3s_1399_);
lean_dec(v_u_1398_);
lean_dec_ref(v_kSuccess_1388_);
lean_inc(v___y_1396_);
lean_inc_ref(v___y_1395_);
lean_inc(v___y_1394_);
lean_inc_ref(v___y_1393_);
lean_inc(v___y_1392_);
lean_inc_ref(v___y_1391_);
lean_inc(v___y_1390_);
lean_inc_ref(v___y_1389_);
v___x_1464_ = lean_apply_9(v_kFail_1387_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_, lean_box(0));
return v___x_1464_;
}
}
else
{
lean_object* v_a_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1472_; 
lean_dec(v_a_1424_);
lean_dec_ref_known(v___x_1418_, 2);
lean_dec(v_a_1409_);
lean_del_object(v___x_1403_);
lean_dec_ref(v_target_1401_);
lean_dec_ref(v_hyps_1400_);
lean_dec_ref(v_00_u03c3s_1399_);
lean_dec(v_u_1398_);
lean_dec_ref(v_kSuccess_1388_);
lean_dec_ref(v_kFail_1387_);
v_a_1465_ = lean_ctor_get(v___x_1430_, 0);
v_isSharedCheck_1472_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1467_ = v___x_1430_;
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_a_1465_);
lean_dec(v___x_1430_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1472_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1470_; 
if (v_isShared_1468_ == 0)
{
v___x_1470_ = v___x_1467_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v_a_1465_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_1418_, 2);
lean_dec(v_a_1409_);
lean_del_object(v___x_1403_);
lean_dec_ref(v_target_1401_);
lean_dec_ref(v_hyps_1400_);
lean_dec_ref(v_00_u03c3s_1399_);
lean_dec(v_u_1398_);
lean_dec_ref(v_kSuccess_1388_);
lean_dec_ref(v_kFail_1387_);
return v___x_1423_;
}
}
}
}
else
{
lean_del_object(v___x_1403_);
lean_dec_ref(v_target_1401_);
lean_dec_ref(v_hyps_1400_);
lean_dec_ref(v_00_u03c3s_1399_);
lean_dec(v_u_1398_);
lean_dec_ref(v_kSuccess_1388_);
lean_dec_ref(v_kFail_1387_);
return v___x_1408_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2___boxed(lean_object* v_goal_1476_, lean_object* v_kFail_1477_, lean_object* v_kSuccess_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_){
_start:
{
lean_object* v_res_1488_; 
v_res_1488_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2(v_goal_1476_, v_kFail_1477_, v_kSuccess_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_);
lean_dec(v___y_1486_);
lean_dec_ref(v___y_1485_);
lean_dec(v___y_1484_);
lean_dec_ref(v___y_1483_);
lean_dec(v___y_1482_);
lean_dec_ref(v___y_1481_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
return v_res_1488_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___x_1490_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__0));
v___x_1491_ = l_Lean_stringToMessageData(v___x_1490_);
return v___x_1491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2(lean_object* v_a_1492_, lean_object* v___f_1493_, lean_object* v___f_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_){
_start:
{
lean_object* v___x_1504_; 
lean_inc(v_a_1492_);
v___x_1504_ = l_Lean_MVarId_getType(v_a_1492_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_);
if (lean_obj_tag(v___x_1504_) == 0)
{
lean_object* v_a_1505_; lean_object* v___x_1506_; lean_object* v_a_1507_; lean_object* v___x_1508_; 
v_a_1505_ = lean_ctor_get(v___x_1504_, 0);
lean_inc(v_a_1505_);
lean_dec_ref_known(v___x_1504_, 1);
v___x_1506_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__1___redArg(v_a_1505_, v___y_1500_);
v_a_1507_ = lean_ctor_get(v___x_1506_, 0);
lean_inc(v_a_1507_);
lean_dec_ref(v___x_1506_);
v___x_1508_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_a_1507_);
lean_dec(v_a_1507_);
if (lean_obj_tag(v___x_1508_) == 1)
{
lean_object* v_val_1509_; lean_object* v___x_1510_; 
v_val_1509_ = lean_ctor_get(v___x_1508_, 0);
lean_inc(v_val_1509_);
lean_dec_ref_known(v___x_1508_, 1);
v___x_1510_ = l_Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2(v_val_1509_, v___f_1493_, v___f_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_);
if (lean_obj_tag(v___x_1510_) == 0)
{
lean_object* v_a_1511_; lean_object* v___x_1512_; 
v_a_1511_ = lean_ctor_get(v___x_1510_, 0);
lean_inc(v_a_1511_);
lean_dec_ref_known(v___x_1510_, 1);
v___x_1512_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg(v_a_1492_, v_a_1511_, v___y_1500_);
return v___x_1512_;
}
else
{
lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1520_; 
lean_dec(v_a_1492_);
v_a_1513_ = lean_ctor_get(v___x_1510_, 0);
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1510_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1515_ = v___x_1510_;
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_dec(v___x_1510_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1518_; 
if (v_isShared_1516_ == 0)
{
v___x_1518_ = v___x_1515_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_a_1513_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
else
{
lean_object* v___x_1521_; lean_object* v___x_1522_; 
lean_dec(v___x_1508_);
lean_dec_ref(v___f_1494_);
lean_dec_ref(v___f_1493_);
lean_dec(v_a_1492_);
v___x_1521_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___closed__1);
v___x_1522_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg(v___x_1521_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_);
return v___x_1522_;
}
}
else
{
lean_object* v_a_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1530_; 
lean_dec_ref(v___f_1494_);
lean_dec_ref(v___f_1493_);
lean_dec(v_a_1492_);
v_a_1523_ = lean_ctor_get(v___x_1504_, 0);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1504_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1525_ = v___x_1504_;
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_a_1523_);
lean_dec(v___x_1504_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1528_; 
if (v_isShared_1526_ == 0)
{
v___x_1528_ = v___x_1525_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_a_1523_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___boxed(lean_object* v_a_1531_, lean_object* v___f_1532_, lean_object* v___f_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_){
_start:
{
lean_object* v_res_1543_; 
v_res_1543_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2(v_a_1531_, v___f_1532_, v___f_1533_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
lean_dec(v___y_1537_);
lean_dec_ref(v___y_1536_);
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg(lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_){
_start:
{
lean_object* v___f_1555_; lean_object* v___f_1556_; lean_object* v___x_1557_; 
v___f_1555_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__0));
v___f_1556_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___closed__1));
v___x_1557_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_1547_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_);
if (lean_obj_tag(v___x_1557_) == 0)
{
lean_object* v_a_1558_; lean_object* v___f_1559_; lean_object* v___x_1560_; 
v_a_1558_ = lean_ctor_get(v___x_1557_, 0);
lean_inc_n(v_a_1558_, 2);
lean_dec_ref_known(v___x_1557_, 1);
v___f_1559_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___lam__2___boxed), 12, 3);
lean_closure_set(v___f_1559_, 0, v_a_1558_);
lean_closure_set(v___f_1559_, 1, v___f_1555_);
lean_closure_set(v___f_1559_, 2, v___f_1556_);
v___x_1560_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__5___redArg(v_a_1558_, v___f_1559_, v_a_1546_, v_a_1547_, v_a_1548_, v_a_1549_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_);
return v___x_1560_;
}
else
{
lean_object* v_a_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1568_; 
v_a_1561_ = lean_ctor_get(v___x_1557_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v___x_1557_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1563_ = v___x_1557_;
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_a_1561_);
lean_dec(v___x_1557_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___x_1566_; 
if (v_isShared_1564_ == 0)
{
v___x_1566_ = v___x_1563_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v_a_1561_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
return v___x_1566_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg___boxed(lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_){
_start:
{
lean_object* v_res_1578_; 
v_res_1578_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg(v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_, v_a_1574_, v_a_1575_, v_a_1576_);
lean_dec(v_a_1576_);
lean_dec_ref(v_a_1575_);
lean_dec(v_a_1574_);
lean_dec_ref(v_a_1573_);
lean_dec(v_a_1572_);
lean_dec_ref(v_a_1571_);
lean_dec(v_a_1570_);
lean_dec_ref(v_a_1569_);
return v_res_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame(lean_object* v_x_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_){
_start:
{
lean_object* v___x_1589_; 
v___x_1589_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___redArg(v_a_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_, v_a_1585_, v_a_1586_, v_a_1587_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___boxed(lean_object* v_x_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_, lean_object* v_a_1599_){
_start:
{
lean_object* v_res_1600_; 
v_res_1600_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame(v_x_1590_, v_a_1591_, v_a_1592_, v_a_1593_, v_a_1594_, v_a_1595_, v_a_1596_, v_a_1597_, v_a_1598_);
lean_dec(v_a_1598_);
lean_dec_ref(v_a_1597_);
lean_dec(v_a_1596_);
lean_dec_ref(v_a_1595_);
lean_dec(v_a_1594_);
lean_dec_ref(v_a_1593_);
lean_dec(v_a_1592_);
lean_dec_ref(v_a_1591_);
lean_dec(v_x_1590_);
return v_res_1600_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0(lean_object* v_00_u03b1_1601_, lean_object* v_msg_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_){
_start:
{
lean_object* v___x_1611_; 
v___x_1611_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___redArg(v_msg_1602_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0___boxed(lean_object* v_00_u03b1_1612_, lean_object* v_msg_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__0(v_00_u03b1_1612_, v_msg_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_);
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
lean_dec(v___y_1616_);
lean_dec_ref(v___y_1615_);
lean_dec(v___y_1614_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3(lean_object* v_mvarId_1623_, lean_object* v_val_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_){
_start:
{
lean_object* v___x_1634_; 
v___x_1634_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___redArg(v_mvarId_1623_, v_val_1624_, v___y_1630_);
return v___x_1634_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3___boxed(lean_object* v_mvarId_1635_, lean_object* v_val_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_){
_start:
{
lean_object* v_res_1646_; 
v_res_1646_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3(v_mvarId_1635_, v_val_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_);
lean_dec(v___y_1644_);
lean_dec_ref(v___y_1643_);
lean_dec(v___y_1642_);
lean_dec_ref(v___y_1641_);
lean_dec(v___y_1640_);
lean_dec_ref(v___y_1639_);
lean_dec(v___y_1638_);
lean_dec_ref(v___y_1637_);
return v_res_1646_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4(lean_object* v_00_u03b1_1647_, lean_object* v_msg_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_){
_start:
{
lean_object* v___x_1658_; 
v___x_1658_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___redArg(v_msg_1648_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4___boxed(lean_object* v_00_u03b1_1659_, lean_object* v_msg_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_){
_start:
{
lean_object* v_res_1670_; 
v_res_1670_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__4(v_00_u03b1_1659_, v_msg_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
lean_dec(v___y_1668_);
lean_dec_ref(v___y_1667_);
lean_dec(v___y_1666_);
lean_dec_ref(v___y_1665_);
lean_dec(v___y_1664_);
lean_dec_ref(v___y_1663_);
lean_dec(v___y_1662_);
lean_dec_ref(v___y_1661_);
return v_res_1670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5(lean_object* v_00_u03b1_1671_, lean_object* v_name_1672_, uint8_t v_bi_1673_, lean_object* v_type_1674_, lean_object* v_k_1675_, uint8_t v_kind_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_){
_start:
{
lean_object* v___x_1686_; 
v___x_1686_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___redArg(v_name_1672_, v_bi_1673_, v_type_1674_, v_k_1675_, v_kind_1676_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_);
return v___x_1686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1687_, lean_object* v_name_1688_, lean_object* v_bi_1689_, lean_object* v_type_1690_, lean_object* v_k_1691_, lean_object* v_kind_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_){
_start:
{
uint8_t v_bi_boxed_1702_; uint8_t v_kind_boxed_1703_; lean_object* v_res_1704_; 
v_bi_boxed_1702_ = lean_unbox(v_bi_1689_);
v_kind_boxed_1703_ = lean_unbox(v_kind_1692_);
v_res_1704_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3_spec__5(v_00_u03b1_1687_, v_name_1688_, v_bi_boxed_1702_, v_type_1690_, v_k_1691_, v_kind_boxed_1703_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_);
lean_dec(v___y_1700_);
lean_dec_ref(v___y_1699_);
lean_dec(v___y_1698_);
lean_dec_ref(v___y_1697_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
lean_dec(v___y_1694_);
lean_dec_ref(v___y_1693_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3(lean_object* v_00_u03b1_1705_, lean_object* v_name_1706_, lean_object* v_type_1707_, lean_object* v_k_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
lean_object* v___x_1718_; 
v___x_1718_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___redArg(v_name_1706_, v_type_1707_, v_k_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_);
return v___x_1718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3___boxed(lean_object* v_00_u03b1_1719_, lean_object* v_name_1720_, lean_object* v_type_1721_, lean_object* v_k_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_){
_start:
{
lean_object* v_res_1732_; 
v_res_1732_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_ProofMode_mFrameCore___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__2_spec__3(v_00_u03b1_1719_, v_name_1720_, v_type_1721_, v_k_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_);
lean_dec(v___y_1730_);
lean_dec_ref(v___y_1729_);
lean_dec(v___y_1728_);
lean_dec_ref(v___y_1727_);
lean_dec(v___y_1726_);
lean_dec_ref(v___y_1725_);
lean_dec(v___y_1724_);
lean_dec_ref(v___y_1723_);
return v_res_1732_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5(lean_object* v_00_u03b2_1733_, lean_object* v_x_1734_, lean_object* v_x_1735_, lean_object* v_x_1736_){
_start:
{
lean_object* v___x_1737_; 
v___x_1737_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5___redArg(v_x_1734_, v_x_1735_, v_x_1736_);
return v___x_1737_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8(lean_object* v_00_u03b2_1738_, lean_object* v_x_1739_, size_t v_x_1740_, size_t v_x_1741_, lean_object* v_x_1742_, lean_object* v_x_1743_){
_start:
{
lean_object* v___x_1744_; 
v___x_1744_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___redArg(v_x_1739_, v_x_1740_, v_x_1741_, v_x_1742_, v_x_1743_);
return v___x_1744_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8___boxed(lean_object* v_00_u03b2_1745_, lean_object* v_x_1746_, lean_object* v_x_1747_, lean_object* v_x_1748_, lean_object* v_x_1749_, lean_object* v_x_1750_){
_start:
{
size_t v_x_11791__boxed_1751_; size_t v_x_11792__boxed_1752_; lean_object* v_res_1753_; 
v_x_11791__boxed_1751_ = lean_unbox_usize(v_x_1747_);
lean_dec(v_x_1747_);
v_x_11792__boxed_1752_ = lean_unbox_usize(v_x_1748_);
lean_dec(v_x_1748_);
v_res_1753_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8(v_00_u03b2_1745_, v_x_1746_, v_x_11791__boxed_1751_, v_x_11792__boxed_1752_, v_x_1749_, v_x_1750_);
return v_res_1753_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10(lean_object* v_00_u03b2_1754_, lean_object* v_n_1755_, lean_object* v_k_1756_, lean_object* v_v_1757_){
_start:
{
lean_object* v___x_1758_; 
v___x_1758_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10___redArg(v_n_1755_, v_k_1756_, v_v_1757_);
return v___x_1758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11(lean_object* v_00_u03b2_1759_, size_t v_depth_1760_, lean_object* v_keys_1761_, lean_object* v_vals_1762_, lean_object* v_heq_1763_, lean_object* v_i_1764_, lean_object* v_entries_1765_){
_start:
{
lean_object* v___x_1766_; 
v___x_1766_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11___redArg(v_depth_1760_, v_keys_1761_, v_vals_1762_, v_i_1764_, v_entries_1765_);
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11___boxed(lean_object* v_00_u03b2_1767_, lean_object* v_depth_1768_, lean_object* v_keys_1769_, lean_object* v_vals_1770_, lean_object* v_heq_1771_, lean_object* v_i_1772_, lean_object* v_entries_1773_){
_start:
{
size_t v_depth_boxed_1774_; lean_object* v_res_1775_; 
v_depth_boxed_1774_ = lean_unbox_usize(v_depth_1768_);
lean_dec(v_depth_1768_);
v_res_1775_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__11(v_00_u03b2_1767_, v_depth_boxed_1774_, v_keys_1769_, v_vals_1770_, v_heq_1771_, v_i_1772_, v_entries_1773_);
lean_dec_ref(v_vals_1770_);
lean_dec_ref(v_keys_1769_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10_spec__11(lean_object* v_00_u03b2_1776_, lean_object* v_x_1777_, lean_object* v_x_1778_, lean_object* v_x_1779_, lean_object* v_x_1780_){
_start:
{
lean_object* v___x_1781_; 
v___x_1781_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMFrame_spec__3_spec__5_spec__8_spec__10_spec__11___redArg(v_x_1777_, v_x_1778_, v_x_1779_, v_x_1780_);
return v___x_1781_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1(){
_start:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1801_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1802_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__3));
v___x_1803_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___closed__7));
v___x_1804_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMFrame___boxed), 10, 0);
v___x_1805_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1801_, v___x_1802_, v___x_1803_, v___x_1804_);
return v___x_1805_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1___boxed(lean_object* v_a_1806_){
_start:
{
lean_object* v_res_1807_; 
v_res_1807_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1();
return v_res_1807_;
}
}
lean_object* runtime_initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Frame(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Frame_0__Lean_Elab_Tactic_Do_ProofMode_elabMFrame___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMFrame__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Frame(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Tactic_Do_Syntax(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Frame(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Tactic_Do_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Frame(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Frame(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_Frame(builtin);
}
#ifdef __cplusplus
}
#endif
