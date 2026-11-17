// Lean compiler output
// Module: Lean.Meta.Tactic.Util
// Imports: public import Lean.Util.ForEachExprWhere public import Lean.Meta.PPGoal import Lean.Meta.AppBuilder
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_hasValue(lean_object*, uint8_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Expr_isFVar___boxed(lean_object*);
extern lean_object* l_Lean_ForEachExprWhere_initCache;
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_mod(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint64_t l_Lean_Expr_hash(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*, uint8_t);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Meta_mkLabeledSorry(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_MetavarContext_setMVarUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_MVarId_setType___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_MessageData_kind(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
extern lean_object* l_Lean_instEmptyCollectionFVarIdHashSet;
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "terminalTacticsAsSorry"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(40, 215, 222, 176, 152, 52, 0, 225)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(232, 90, 215, 151, 242, 202, 226, 151)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 139, .m_capacity = 139, .m_length = 138, .m_data = "when enabled, terminal tactics such as `grind` and `omega` are replaced with `sorry`. Useful for debugging and fixing bootstrapping issues"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(69, 233, 55, 94, 186, 188, 252, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(137, 217, 134, 189, 91, 246, 107, 44)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_debug_terminalTacticsAsSorry;
LEAN_EXPORT lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getTag___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_setTag___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_setTag___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_setTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_setTag___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendTag___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendTag___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendTag(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendTag___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendTagSuffix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendTagSuffix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkTacticExMsg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Tactic `"};
static const lean_object* l_Lean_Meta_mkTacticExMsg___closed__0 = (const lean_object*)&l_Lean_Meta_mkTacticExMsg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_mkTacticExMsg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkTacticExMsg___closed__1;
static const lean_string_object l_Lean_Meta_mkTacticExMsg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` failed: "};
static const lean_object* l_Lean_Meta_mkTacticExMsg___closed__2 = (const lean_object*)&l_Lean_Meta_mkTacticExMsg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_mkTacticExMsg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkTacticExMsg___closed__3;
static const lean_string_object l_Lean_Meta_mkTacticExMsg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n\n"};
static const lean_object* l_Lean_Meta_mkTacticExMsg___closed__4 = (const lean_object*)&l_Lean_Meta_mkTacticExMsg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_mkTacticExMsg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkTacticExMsg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_mkTacticExMsg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_throwTacticEx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` failed\n\n"};
static const lean_object* l_Lean_Meta_throwTacticEx___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_throwTacticEx___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_throwTacticEx___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwTacticEx___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwTacticEx___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwTacticEx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwTacticEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_throwNestedTacticEx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "` failed with a nested error:\n"};
static const lean_object* l_Lean_Meta_throwNestedTacticEx___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_throwNestedTacticEx___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_throwNestedTacticEx___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_throwNestedTacticEx___redArg___closed__1;
static const lean_string_object l_Lean_Meta_throwNestedTacticEx___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "nested"};
static const lean_object* l_Lean_Meta_throwNestedTacticEx___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_throwNestedTacticEx___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_throwNestedTacticEx___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_throwNestedTacticEx___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(201, 50, 115, 245, 92, 68, 45, 137)}};
static const lean_object* l_Lean_Meta_throwNestedTacticEx___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_throwNestedTacticEx___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_throwNestedTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwNestedTacticEx___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwNestedTacticEx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_throwNestedTacticEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_checkNotAssigned___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "The metavariable below has already been assigned"};
static const lean_object* l_Lean_MVarId_checkNotAssigned___closed__0 = (const lean_object*)&l_Lean_MVarId_checkNotAssigned___closed__0_value;
static lean_once_cell_t l_Lean_MVarId_checkNotAssigned___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_checkNotAssigned___closed__1;
static const lean_string_object l_Lean_MVarId_checkNotAssigned___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "This likely indicates an internal error in this tactic or a prior one"};
static const lean_object* l_Lean_MVarId_checkNotAssigned___closed__2 = (const lean_object*)&l_Lean_MVarId_checkNotAssigned___closed__2_value;
static const lean_ctor_object l_Lean_MVarId_checkNotAssigned___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MVarId_checkNotAssigned___closed__2_value)}};
static const lean_object* l_Lean_MVarId_checkNotAssigned___closed__3 = (const lean_object*)&l_Lean_MVarId_checkNotAssigned___closed__3_value;
static lean_once_cell_t l_Lean_MVarId_checkNotAssigned___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_checkNotAssigned___closed__4;
static lean_once_cell_t l_Lean_MVarId_checkNotAssigned___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_checkNotAssigned___closed__5;
static lean_once_cell_t l_Lean_MVarId_checkNotAssigned___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_checkNotAssigned___closed__6;
static lean_once_cell_t l_Lean_MVarId_checkNotAssigned___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_checkNotAssigned___closed__7;
LEAN_EXPORT lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_checkNotAssigned___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getType_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Util"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(73, 80, 134, 96, 135, 241, 87, 25)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(12, 105, 212, 82, 205, 98, 36, 208)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(141, 108, 151, 68, 40, 185, 49, 39)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(69, 35, 20, 40, 241, 13, 114, 59)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(76, 161, 8, 73, 13, 24, 41, 207)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(37, 240, 21, 38, 82, 97, 50, 244)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(240, 251, 182, 143, 63, 208, 115, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(124, 226, 182, 237, 212, 141, 147, 41)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(185, 251, 116, 130, 175, 2, 54, 62)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(139, 96, 175, 63, 15, 15, 160, 172)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1901113268) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(57, 118, 41, 237, 158, 247, 69, 133)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(170, 149, 39, 205, 173, 64, 129, 232)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(214, 101, 131, 162, 224, 178, 204, 187)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(23, 46, 117, 252, 169, 255, 192, 57)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_admit___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_admit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_admit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "admit"};
static const lean_object* l_Lean_MVarId_admit___closed__0 = (const lean_object*)&l_Lean_MVarId_admit___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_admit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_admit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(26, 138, 207, 107, 141, 184, 85, 68)}};
static const lean_object* l_Lean_MVarId_admit___closed__1 = (const lean_object*)&l_Lean_MVarId_admit___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_admit(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_admit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_headBetaType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_headBetaType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11_spec__18_spec__26_spec__30___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11_spec__18_spec__26___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11_spec__18___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_isFVar___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__8_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14___closed__0_value;
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7_spec__12_spec__18(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7_spec__12_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7_spec__12(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7_spec__11(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_MVarId_getNondepPropHyps_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_MVarId_getNondepPropHyps_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__19_spec__24___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__19_spec__24___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__19(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__18(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__12_spec__21___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__12_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__12(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_MVarId_getNondepPropHyps___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_MVarId_getNondepPropHyps___lam__2___closed__0 = (const lean_object*)&l_Lean_MVarId_getNondepPropHyps___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_MVarId_getNondepPropHyps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MVarId_getNondepPropHyps___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MVarId_getNondepPropHyps___closed__0 = (const lean_object*)&l_Lean_MVarId_getNondepPropHyps___closed__0_value;
static const lean_closure_object l_Lean_MVarId_getNondepPropHyps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MVarId_getNondepPropHyps___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MVarId_getNondepPropHyps___closed__1 = (const lean_object*)&l_Lean_MVarId_getNondepPropHyps___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_MVarId_getNondepPropHyps_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_MVarId_getNondepPropHyps_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__12_spec__21(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__12_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__8_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__19_spec__24(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__19_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11_spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11_spec__18_spec__26(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11_spec__18_spec__26_spec__30(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_saturate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_saturate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_exactlyOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_exactlyOne___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ensureAtMostOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ensureAtMostOne___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getPropHyps(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getPropHyps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_inferInstance___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "`infer_instance` tactic failed to assign instance"};
static const lean_object* l_Lean_MVarId_inferInstance___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_inferInstance___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_inferInstance___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MVarId_inferInstance___lam__0___closed__0_value)}};
static const lean_object* l_Lean_MVarId_inferInstance___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_inferInstance___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_inferInstance___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_inferInstance___lam__0___closed__2;
static lean_once_cell_t l_Lean_MVarId_inferInstance___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_inferInstance___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_MVarId_inferInstance___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_inferInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_inferInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "infer_instance"};
static const lean_object* l_Lean_MVarId_inferInstance___closed__0 = (const lean_object*)&l_Lean_MVarId_inferInstance___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_inferInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_inferInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(71, 181, 58, 140, 126, 222, 16, 71)}};
static const lean_object* l_Lean_MVarId_inferInstance___closed__1 = (const lean_object*)&l_Lean_MVarId_inferInstance___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_inferInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_inferInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_closed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_closed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_noChange_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_noChange_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_modified_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_modified_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_isSubsingleton___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Subsingleton"};
static const lean_object* l_Lean_MVarId_isSubsingleton___closed__0 = (const lean_object*)&l_Lean_MVarId_isSubsingleton___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_isSubsingleton___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_isSubsingleton___closed__0_value),LEAN_SCALAR_PTR_LITERAL(23, 130, 42, 228, 248, 162, 23, 186)}};
static const lean_object* l_Lean_MVarId_isSubsingleton___closed__1 = (const lean_object*)&l_Lean_MVarId_isSubsingleton___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_isSubsingleton(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isSubsingleton___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "skipAssignedInstances"};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(166, 172, 231, 36, 182, 217, 37, 75)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 113, .m_capacity = 113, .m_length = 112, .m_data = "in the `rw` and `simp` tactics, if an instance implicit argument is assigned, do not try to synthesize instance."};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(6, 82, 89, 96, 183, 68, 254, 125)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(199, 5, 107, 131, 111, 226, 218, 126)}};
static const lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_tactic_skipAssignedInstances;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_));
v___x_54_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_));
v___x_55_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_));
v___x_56_ = l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__spec__0(v___x_53_, v___x_54_, v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4____boxed(lean_object* v_a_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_();
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getTag(lean_object* v_mvarId_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lean_MVarId_getDecl(v_mvarId_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_);
if (lean_obj_tag(v___x_65_) == 0)
{
lean_object* v_a_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_74_; 
v_a_66_ = lean_ctor_get(v___x_65_, 0);
v_isSharedCheck_74_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_74_ == 0)
{
v___x_68_ = v___x_65_;
v_isShared_69_ = v_isSharedCheck_74_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_a_66_);
lean_dec(v___x_65_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_74_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
lean_object* v_userName_70_; lean_object* v___x_72_; 
v_userName_70_ = lean_ctor_get(v_a_66_, 0);
lean_inc(v_userName_70_);
lean_dec(v_a_66_);
if (v_isShared_69_ == 0)
{
lean_ctor_set(v___x_68_, 0, v_userName_70_);
v___x_72_ = v___x_68_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_73_; 
v_reuseFailAlloc_73_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_73_, 0, v_userName_70_);
v___x_72_ = v_reuseFailAlloc_73_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
return v___x_72_;
}
}
}
else
{
lean_object* v_a_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_82_; 
v_a_75_ = lean_ctor_get(v___x_65_, 0);
v_isSharedCheck_82_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_82_ == 0)
{
v___x_77_ = v___x_65_;
v_isShared_78_ = v_isSharedCheck_82_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_a_75_);
lean_dec(v___x_65_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_82_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v___x_80_; 
if (v_isShared_78_ == 0)
{
v___x_80_ = v___x_77_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v_a_75_);
v___x_80_ = v_reuseFailAlloc_81_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
return v___x_80_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getTag___boxed(lean_object* v_mvarId_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Lean_MVarId_getTag(v_mvarId_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_);
lean_dec(v_a_87_);
lean_dec_ref(v_a_86_);
lean_dec(v_a_85_);
lean_dec_ref(v_a_84_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_setTag___redArg(lean_object* v_mvarId_90_, lean_object* v_tag_91_, lean_object* v_a_92_){
_start:
{
lean_object* v___x_94_; lean_object* v_mctx_95_; lean_object* v_cache_96_; lean_object* v_zetaDeltaFVarIds_97_; lean_object* v_postponed_98_; lean_object* v_diag_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_110_; 
v___x_94_ = lean_st_ref_take(v_a_92_);
v_mctx_95_ = lean_ctor_get(v___x_94_, 0);
v_cache_96_ = lean_ctor_get(v___x_94_, 1);
v_zetaDeltaFVarIds_97_ = lean_ctor_get(v___x_94_, 2);
v_postponed_98_ = lean_ctor_get(v___x_94_, 3);
v_diag_99_ = lean_ctor_get(v___x_94_, 4);
v_isSharedCheck_110_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_110_ == 0)
{
v___x_101_ = v___x_94_;
v_isShared_102_ = v_isSharedCheck_110_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_diag_99_);
lean_inc(v_postponed_98_);
lean_inc(v_zetaDeltaFVarIds_97_);
lean_inc(v_cache_96_);
lean_inc(v_mctx_95_);
lean_dec(v___x_94_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_110_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_106_; 
v___x_103_ = lean_box(0);
v___x_104_ = l_Lean_MetavarContext_setMVarUserName(v_mctx_95_, v_mvarId_90_, v_tag_91_);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 0, v___x_104_);
v___x_106_ = v___x_101_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v___x_104_);
lean_ctor_set(v_reuseFailAlloc_109_, 1, v_cache_96_);
lean_ctor_set(v_reuseFailAlloc_109_, 2, v_zetaDeltaFVarIds_97_);
lean_ctor_set(v_reuseFailAlloc_109_, 3, v_postponed_98_);
lean_ctor_set(v_reuseFailAlloc_109_, 4, v_diag_99_);
v___x_106_ = v_reuseFailAlloc_109_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = lean_st_ref_put(v_a_92_, v___x_106_);
v___x_108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_108_, 0, v___x_103_);
return v___x_108_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_setTag___redArg___boxed(lean_object* v_mvarId_111_, lean_object* v_tag_112_, lean_object* v_a_113_, lean_object* v_a_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Lean_MVarId_setTag___redArg(v_mvarId_111_, v_tag_112_, v_a_113_);
lean_dec(v_a_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_setTag(lean_object* v_mvarId_116_, lean_object* v_tag_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Lean_MVarId_setTag___redArg(v_mvarId_116_, v_tag_117_, v_a_119_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_setTag___boxed(lean_object* v_mvarId_124_, lean_object* v_tag_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lean_MVarId_setTag(v_mvarId_124_, v_tag_125_, v_a_126_, v_a_127_, v_a_128_, v_a_129_);
lean_dec(v_a_129_);
lean_dec_ref(v_a_128_);
lean_dec(v_a_127_);
lean_dec_ref(v_a_126_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendTag___lam__0(lean_object* v_suffix_132_, lean_object* v_x_133_){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = l_Lean_Name_eraseMacroScopes(v_suffix_132_);
v___x_135_ = l_Lean_Name_append(v_x_133_, v___x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendTag___lam__0___boxed(lean_object* v_suffix_136_, lean_object* v_x_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lean_Meta_appendTag___lam__0(v_suffix_136_, v_x_137_);
lean_dec(v_suffix_136_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendTag(lean_object* v_tag_139_, lean_object* v_suffix_140_){
_start:
{
uint8_t v___x_141_; 
v___x_141_ = l_Lean_Name_hasMacroScopes(v_tag_139_);
if (v___x_141_ == 0)
{
lean_object* v___x_142_; 
v___x_142_ = l_Lean_Meta_appendTag___lam__0(v_suffix_140_, v_tag_139_);
return v___x_142_;
}
else
{
lean_object* v_view_143_; lean_object* v_name_144_; lean_object* v_imported_145_; lean_object* v_ctx_146_; lean_object* v_scopes_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_156_; 
v_view_143_ = l_Lean_extractMacroScopes(v_tag_139_);
v_name_144_ = lean_ctor_get(v_view_143_, 0);
v_imported_145_ = lean_ctor_get(v_view_143_, 1);
v_ctx_146_ = lean_ctor_get(v_view_143_, 2);
v_scopes_147_ = lean_ctor_get(v_view_143_, 3);
v_isSharedCheck_156_ = !lean_is_exclusive(v_view_143_);
if (v_isSharedCheck_156_ == 0)
{
v___x_149_ = v_view_143_;
v_isShared_150_ = v_isSharedCheck_156_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_scopes_147_);
lean_inc(v_ctx_146_);
lean_inc(v_imported_145_);
lean_inc(v_name_144_);
lean_dec(v_view_143_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_156_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_151_; lean_object* v___x_153_; 
v___x_151_ = l_Lean_Meta_appendTag___lam__0(v_suffix_140_, v_name_144_);
if (v_isShared_150_ == 0)
{
lean_ctor_set(v___x_149_, 0, v___x_151_);
v___x_153_ = v___x_149_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v___x_151_);
lean_ctor_set(v_reuseFailAlloc_155_, 1, v_imported_145_);
lean_ctor_set(v_reuseFailAlloc_155_, 2, v_ctx_146_);
lean_ctor_set(v_reuseFailAlloc_155_, 3, v_scopes_147_);
v___x_153_ = v_reuseFailAlloc_155_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
lean_object* v___x_154_; 
v___x_154_ = l_Lean_MacroScopesView_review(v___x_153_);
return v___x_154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendTag___boxed(lean_object* v_tag_157_, lean_object* v_suffix_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lean_Meta_appendTag(v_tag_157_, v_suffix_158_);
lean_dec(v_suffix_158_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendTagSuffix(lean_object* v_mvarId_160_, lean_object* v_suffix_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_){
_start:
{
lean_object* v___x_167_; 
lean_inc(v_mvarId_160_);
v___x_167_ = l_Lean_MVarId_getTag(v_mvarId_160_, v_a_162_, v_a_163_, v_a_164_, v_a_165_);
if (lean_obj_tag(v___x_167_) == 0)
{
lean_object* v_a_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v_a_168_ = lean_ctor_get(v___x_167_, 0);
lean_inc(v_a_168_);
lean_dec_ref_known(v___x_167_, 1);
v___x_169_ = l_Lean_Meta_appendTag(v_a_168_, v_suffix_161_);
v___x_170_ = l_Lean_MVarId_setTag___redArg(v_mvarId_160_, v___x_169_, v_a_163_);
return v___x_170_;
}
else
{
lean_object* v_a_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_178_; 
lean_dec(v_mvarId_160_);
v_a_171_ = lean_ctor_get(v___x_167_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_178_ == 0)
{
v___x_173_ = v___x_167_;
v_isShared_174_ = v_isSharedCheck_178_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_a_171_);
lean_dec(v___x_167_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_appendTagSuffix___boxed(lean_object* v_mvarId_179_, lean_object* v_suffix_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lean_Meta_appendTagSuffix(v_mvarId_179_, v_suffix_180_, v_a_181_, v_a_182_, v_a_183_, v_a_184_);
lean_dec(v_a_184_);
lean_dec_ref(v_a_183_);
lean_dec(v_a_182_);
lean_dec_ref(v_a_181_);
lean_dec(v_suffix_180_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object* v_type_187_, lean_object* v_tag_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_){
_start:
{
lean_object* v___x_194_; uint8_t v___x_195_; lean_object* v___x_196_; 
v___x_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_194_, 0, v_type_187_);
v___x_195_ = 2;
v___x_196_ = l_Lean_Meta_mkFreshExprMVar(v___x_194_, v___x_195_, v_tag_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar___boxed(lean_object* v_type_197_, lean_object* v_tag_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_type_197_, v_tag_198_, v_a_199_, v_a_200_, v_a_201_, v_a_202_);
lean_dec(v_a_202_);
lean_dec_ref(v_a_201_);
lean_dec(v_a_200_);
lean_dec_ref(v_a_199_);
return v_res_204_;
}
}
static lean_object* _init_l_Lean_Meta_mkTacticExMsg___closed__1(void){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_206_ = ((lean_object*)(l_Lean_Meta_mkTacticExMsg___closed__0));
v___x_207_ = l_Lean_stringToMessageData(v___x_206_);
return v___x_207_;
}
}
static lean_object* _init_l_Lean_Meta_mkTacticExMsg___closed__3(void){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = ((lean_object*)(l_Lean_Meta_mkTacticExMsg___closed__2));
v___x_210_ = l_Lean_stringToMessageData(v___x_209_);
return v___x_210_;
}
}
static lean_object* _init_l_Lean_Meta_mkTacticExMsg___closed__5(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = ((lean_object*)(l_Lean_Meta_mkTacticExMsg___closed__4));
v___x_213_ = l_Lean_stringToMessageData(v___x_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkTacticExMsg(lean_object* v_tacticName_214_, lean_object* v_mvarId_215_, lean_object* v_msg_216_){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v___x_217_ = lean_obj_once(&l_Lean_Meta_mkTacticExMsg___closed__1, &l_Lean_Meta_mkTacticExMsg___closed__1_once, _init_l_Lean_Meta_mkTacticExMsg___closed__1);
v___x_218_ = l_Lean_MessageData_ofName(v_tacticName_214_);
v___x_219_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_217_);
lean_ctor_set(v___x_219_, 1, v___x_218_);
v___x_220_ = lean_obj_once(&l_Lean_Meta_mkTacticExMsg___closed__3, &l_Lean_Meta_mkTacticExMsg___closed__3_once, _init_l_Lean_Meta_mkTacticExMsg___closed__3);
v___x_221_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_219_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
v___x_222_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
lean_ctor_set(v___x_222_, 1, v_msg_216_);
v___x_223_ = lean_obj_once(&l_Lean_Meta_mkTacticExMsg___closed__5, &l_Lean_Meta_mkTacticExMsg___closed__5_once, _init_l_Lean_Meta_mkTacticExMsg___closed__5);
v___x_224_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_222_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_225_, 0, v_mvarId_215_);
v___x_226_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_224_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0_spec__0(lean_object* v_msgData_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_){
_start:
{
lean_object* v___x_233_; lean_object* v_env_234_; uint8_t v___x_235_; lean_object* v_env_236_; lean_object* v___x_237_; lean_object* v_toCold_238_; lean_object* v_mctx_239_; lean_object* v_lctx_240_; lean_object* v_options_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_233_ = lean_st_ref_get(v___y_231_);
v_env_234_ = lean_ctor_get(v___x_233_, 0);
lean_inc_ref(v_env_234_);
lean_dec(v___x_233_);
v___x_235_ = 0;
v_env_236_ = l_Lean_Environment_setRecordingDeps(v_env_234_, v___x_235_);
v___x_237_ = lean_st_ref_get(v___y_229_);
v_toCold_238_ = lean_ctor_get(v___y_230_, 0);
v_mctx_239_ = lean_ctor_get(v___x_237_, 0);
lean_inc_ref(v_mctx_239_);
lean_dec(v___x_237_);
v_lctx_240_ = lean_ctor_get(v___y_228_, 2);
v_options_241_ = lean_ctor_get(v_toCold_238_, 2);
lean_inc_ref(v_options_241_);
lean_inc_ref(v_lctx_240_);
v___x_242_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_242_, 0, v_env_236_);
lean_ctor_set(v___x_242_, 1, v_mctx_239_);
lean_ctor_set(v___x_242_, 2, v_lctx_240_);
lean_ctor_set(v___x_242_, 3, v_options_241_);
v___x_243_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
lean_ctor_set(v___x_243_, 1, v_msgData_227_);
v___x_244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0_spec__0___boxed(lean_object* v_msgData_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0_spec__0(v_msgData_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(lean_object* v_msg_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_){
_start:
{
lean_object* v_ref_258_; lean_object* v___x_259_; lean_object* v_a_260_; lean_object* v___x_262_; uint8_t v_isShared_263_; uint8_t v_isSharedCheck_268_; 
v_ref_258_ = lean_ctor_get(v___y_255_, 2);
v___x_259_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0_spec__0(v_msg_252_, v___y_253_, v___y_254_, v___y_255_, v___y_256_);
v_a_260_ = lean_ctor_get(v___x_259_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_259_);
if (v_isSharedCheck_268_ == 0)
{
v___x_262_ = v___x_259_;
v_isShared_263_ = v_isSharedCheck_268_;
goto v_resetjp_261_;
}
else
{
lean_inc(v_a_260_);
lean_dec(v___x_259_);
v___x_262_ = lean_box(0);
v_isShared_263_ = v_isSharedCheck_268_;
goto v_resetjp_261_;
}
v_resetjp_261_:
{
lean_object* v___x_264_; lean_object* v___x_266_; 
lean_inc(v_ref_258_);
v___x_264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_264_, 0, v_ref_258_);
lean_ctor_set(v___x_264_, 1, v_a_260_);
if (v_isShared_263_ == 0)
{
lean_ctor_set_tag(v___x_262_, 1);
lean_ctor_set(v___x_262_, 0, v___x_264_);
v___x_266_ = v___x_262_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v___x_264_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg___boxed(lean_object* v_msg_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(v_msg_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
lean_dec(v___y_271_);
lean_dec_ref(v___y_270_);
return v_res_275_;
}
}
static lean_object* _init_l_Lean_Meta_throwTacticEx___redArg___closed__1(void){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_277_ = ((lean_object*)(l_Lean_Meta_throwTacticEx___redArg___closed__0));
v___x_278_ = l_Lean_stringToMessageData(v___x_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object* v_tacticName_279_, lean_object* v_mvarId_280_, lean_object* v_msg_x3f_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_){
_start:
{
if (lean_obj_tag(v_msg_x3f_281_) == 0)
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_287_ = lean_obj_once(&l_Lean_Meta_mkTacticExMsg___closed__1, &l_Lean_Meta_mkTacticExMsg___closed__1_once, _init_l_Lean_Meta_mkTacticExMsg___closed__1);
v___x_288_ = l_Lean_MessageData_ofName(v_tacticName_279_);
v___x_289_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_287_);
lean_ctor_set(v___x_289_, 1, v___x_288_);
v___x_290_ = lean_obj_once(&l_Lean_Meta_throwTacticEx___redArg___closed__1, &l_Lean_Meta_throwTacticEx___redArg___closed__1_once, _init_l_Lean_Meta_throwTacticEx___redArg___closed__1);
v___x_291_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_289_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_292_, 0, v_mvarId_280_);
v___x_293_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_291_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
v___x_294_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(v___x_293_, v_a_282_, v_a_283_, v_a_284_, v_a_285_);
return v___x_294_;
}
else
{
lean_object* v_val_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v_val_295_ = lean_ctor_get(v_msg_x3f_281_, 0);
lean_inc(v_val_295_);
lean_dec_ref_known(v_msg_x3f_281_, 1);
v___x_296_ = l_Lean_Meta_mkTacticExMsg(v_tacticName_279_, v_mvarId_280_, v_val_295_);
v___x_297_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(v___x_296_, v_a_282_, v_a_283_, v_a_284_, v_a_285_);
return v___x_297_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTacticEx___redArg___boxed(lean_object* v_tacticName_298_, lean_object* v_mvarId_299_, lean_object* v_msg_x3f_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_298_, v_mvarId_299_, v_msg_x3f_300_, v_a_301_, v_a_302_, v_a_303_, v_a_304_);
lean_dec(v_a_304_);
lean_dec_ref(v_a_303_);
lean_dec(v_a_302_);
lean_dec_ref(v_a_301_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTacticEx(lean_object* v_00_u03b1_307_, lean_object* v_tacticName_308_, lean_object* v_mvarId_309_, lean_object* v_msg_x3f_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_){
_start:
{
lean_object* v___x_316_; 
v___x_316_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_308_, v_mvarId_309_, v_msg_x3f_310_, v_a_311_, v_a_312_, v_a_313_, v_a_314_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwTacticEx___boxed(lean_object* v_00_u03b1_317_, lean_object* v_tacticName_318_, lean_object* v_mvarId_319_, lean_object* v_msg_x3f_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Lean_Meta_throwTacticEx(v_00_u03b1_317_, v_tacticName_318_, v_mvarId_319_, v_msg_x3f_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_);
lean_dec(v_a_324_);
lean_dec_ref(v_a_323_);
lean_dec(v_a_322_);
lean_dec_ref(v_a_321_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0(lean_object* v_00_u03b1_327_, lean_object* v_msg_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_){
_start:
{
lean_object* v___x_334_; 
v___x_334_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(v_msg_328_, v___y_329_, v___y_330_, v___y_331_, v___y_332_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___boxed(lean_object* v_00_u03b1_335_, lean_object* v_msg_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0(v_00_u03b1_335_, v_msg_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_);
lean_dec(v___y_340_);
lean_dec_ref(v___y_339_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
return v_res_342_;
}
}
static lean_object* _init_l_Lean_Meta_throwNestedTacticEx___redArg___closed__1(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = ((lean_object*)(l_Lean_Meta_throwNestedTacticEx___redArg___closed__0));
v___x_345_ = l_Lean_stringToMessageData(v___x_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwNestedTacticEx___redArg(lean_object* v_tacticName_349_, lean_object* v_ex_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_){
_start:
{
lean_object* v_nestedMsg_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v_msg_362_; lean_object* v_kind_363_; uint8_t v___x_364_; 
v_nestedMsg_356_ = l_Lean_Exception_toMessageData(v_ex_350_);
v___x_357_ = lean_obj_once(&l_Lean_Meta_mkTacticExMsg___closed__1, &l_Lean_Meta_mkTacticExMsg___closed__1_once, _init_l_Lean_Meta_mkTacticExMsg___closed__1);
v___x_358_ = l_Lean_MessageData_ofName(v_tacticName_349_);
v___x_359_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_359_, 0, v___x_357_);
lean_ctor_set(v___x_359_, 1, v___x_358_);
v___x_360_ = lean_obj_once(&l_Lean_Meta_throwNestedTacticEx___redArg___closed__1, &l_Lean_Meta_throwNestedTacticEx___redArg___closed__1_once, _init_l_Lean_Meta_throwNestedTacticEx___redArg___closed__1);
v___x_361_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_361_, 0, v___x_359_);
lean_ctor_set(v___x_361_, 1, v___x_360_);
lean_inc_ref(v_nestedMsg_356_);
v_msg_362_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msg_362_, 0, v___x_361_);
lean_ctor_set(v_msg_362_, 1, v_nestedMsg_356_);
v_kind_363_ = l_Lean_MessageData_kind(v_nestedMsg_356_);
lean_dec_ref(v_nestedMsg_356_);
v___x_364_ = l_Lean_Name_isAnonymous(v_kind_363_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_365_ = ((lean_object*)(l_Lean_Meta_throwNestedTacticEx___redArg___closed__3));
v___x_366_ = l_Lean_Name_append(v___x_365_, v_kind_363_);
v___x_367_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_367_, 0, v___x_366_);
lean_ctor_set(v___x_367_, 1, v_msg_362_);
v___x_368_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(v___x_367_, v_a_351_, v_a_352_, v_a_353_, v_a_354_);
return v___x_368_;
}
else
{
lean_object* v___x_369_; 
lean_dec(v_kind_363_);
v___x_369_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(v_msg_362_, v_a_351_, v_a_352_, v_a_353_, v_a_354_);
return v___x_369_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwNestedTacticEx___redArg___boxed(lean_object* v_tacticName_370_, lean_object* v_ex_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Lean_Meta_throwNestedTacticEx___redArg(v_tacticName_370_, v_ex_371_, v_a_372_, v_a_373_, v_a_374_, v_a_375_);
lean_dec(v_a_375_);
lean_dec_ref(v_a_374_);
lean_dec(v_a_373_);
lean_dec_ref(v_a_372_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwNestedTacticEx(lean_object* v_00_u03b1_378_, lean_object* v_tacticName_379_, lean_object* v_ex_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = l_Lean_Meta_throwNestedTacticEx___redArg(v_tacticName_379_, v_ex_380_, v_a_381_, v_a_382_, v_a_383_, v_a_384_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_throwNestedTacticEx___boxed(lean_object* v_00_u03b1_387_, lean_object* v_tacticName_388_, lean_object* v_ex_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_Lean_Meta_throwNestedTacticEx(v_00_u03b1_387_, v_tacticName_388_, v_ex_389_, v_a_390_, v_a_391_, v_a_392_, v_a_393_);
lean_dec(v_a_393_);
lean_dec_ref(v_a_392_);
lean_dec(v_a_391_);
lean_dec_ref(v_a_390_);
return v_res_395_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_keys_396_, lean_object* v_i_397_, lean_object* v_k_398_){
_start:
{
lean_object* v___x_399_; uint8_t v___x_400_; 
v___x_399_ = lean_array_get_size(v_keys_396_);
v___x_400_ = lean_nat_dec_lt(v_i_397_, v___x_399_);
if (v___x_400_ == 0)
{
lean_dec(v_i_397_);
return v___x_400_;
}
else
{
lean_object* v_k_x27_401_; uint8_t v___x_402_; 
v_k_x27_401_ = lean_array_fget_borrowed(v_keys_396_, v_i_397_);
v___x_402_ = l_Lean_instBEqMVarId_beq(v_k_398_, v_k_x27_401_);
if (v___x_402_ == 0)
{
lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_403_ = lean_unsigned_to_nat(1u);
v___x_404_ = lean_nat_add(v_i_397_, v___x_403_);
lean_dec(v_i_397_);
v_i_397_ = v___x_404_;
goto _start;
}
else
{
lean_dec(v_i_397_);
return v___x_400_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_keys_406_, lean_object* v_i_407_, lean_object* v_k_408_){
_start:
{
uint8_t v_res_409_; lean_object* v_r_410_; 
v_res_409_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2___redArg(v_keys_406_, v_i_407_, v_k_408_);
lean_dec(v_k_408_);
lean_dec_ref(v_keys_406_);
v_r_410_ = lean_box(v_res_409_);
return v_r_410_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1___redArg(lean_object* v_x_411_, size_t v_x_412_, lean_object* v_x_413_){
_start:
{
if (lean_obj_tag(v_x_411_) == 0)
{
lean_object* v_es_414_; lean_object* v___x_415_; size_t v___x_416_; size_t v___x_417_; lean_object* v_j_418_; lean_object* v___x_419_; 
v_es_414_ = lean_ctor_get(v_x_411_, 0);
v___x_415_ = lean_box(2);
v___x_416_ = ((size_t)31ULL);
v___x_417_ = lean_usize_land(v_x_412_, v___x_416_);
v_j_418_ = lean_usize_to_nat(v___x_417_);
v___x_419_ = lean_array_get_borrowed(v___x_415_, v_es_414_, v_j_418_);
lean_dec(v_j_418_);
switch(lean_obj_tag(v___x_419_))
{
case 0:
{
lean_object* v_key_420_; uint8_t v___x_421_; 
v_key_420_ = lean_ctor_get(v___x_419_, 0);
v___x_421_ = l_Lean_instBEqMVarId_beq(v_x_413_, v_key_420_);
return v___x_421_;
}
case 1:
{
lean_object* v_node_422_; size_t v___x_423_; size_t v___x_424_; 
v_node_422_ = lean_ctor_get(v___x_419_, 0);
v___x_423_ = ((size_t)5ULL);
v___x_424_ = lean_usize_shift_right(v_x_412_, v___x_423_);
v_x_411_ = v_node_422_;
v_x_412_ = v___x_424_;
goto _start;
}
default: 
{
uint8_t v___x_426_; 
v___x_426_ = 0;
return v___x_426_;
}
}
}
else
{
lean_object* v_ks_427_; lean_object* v___x_428_; uint8_t v___x_429_; 
v_ks_427_ = lean_ctor_get(v_x_411_, 0);
v___x_428_ = lean_unsigned_to_nat(0u);
v___x_429_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2___redArg(v_ks_427_, v___x_428_, v_x_413_);
return v___x_429_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_430_, lean_object* v_x_431_, lean_object* v_x_432_){
_start:
{
size_t v_x_601__boxed_433_; uint8_t v_res_434_; lean_object* v_r_435_; 
v_x_601__boxed_433_ = lean_unbox_usize(v_x_431_);
lean_dec(v_x_431_);
v_res_434_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1___redArg(v_x_430_, v_x_601__boxed_433_, v_x_432_);
lean_dec(v_x_432_);
lean_dec_ref(v_x_430_);
v_r_435_ = lean_box(v_res_434_);
return v_r_435_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0___redArg(lean_object* v_x_436_, lean_object* v_x_437_){
_start:
{
uint64_t v___x_438_; size_t v___x_439_; uint8_t v___x_440_; 
v___x_438_ = l_Lean_instHashableMVarId_hash(v_x_437_);
v___x_439_ = lean_uint64_to_usize(v___x_438_);
v___x_440_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1___redArg(v_x_436_, v___x_439_, v_x_437_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0___redArg___boxed(lean_object* v_x_441_, lean_object* v_x_442_){
_start:
{
uint8_t v_res_443_; lean_object* v_r_444_; 
v_res_443_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0___redArg(v_x_441_, v_x_442_);
lean_dec(v_x_442_);
lean_dec_ref(v_x_441_);
v_r_444_ = lean_box(v_res_443_);
return v_r_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0___redArg(lean_object* v_mvarId_445_, lean_object* v___y_446_){
_start:
{
lean_object* v___x_448_; lean_object* v_mctx_449_; lean_object* v_eAssignment_450_; uint8_t v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_448_ = lean_st_ref_get(v___y_446_);
v_mctx_449_ = lean_ctor_get(v___x_448_, 0);
lean_inc_ref(v_mctx_449_);
lean_dec(v___x_448_);
v_eAssignment_450_ = lean_ctor_get(v_mctx_449_, 8);
lean_inc_ref(v_eAssignment_450_);
lean_dec_ref(v_mctx_449_);
v___x_451_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0___redArg(v_eAssignment_450_, v_mvarId_445_);
lean_dec_ref(v_eAssignment_450_);
v___x_452_ = lean_box(v___x_451_);
v___x_453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_453_, 0, v___x_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0___redArg___boxed(lean_object* v_mvarId_454_, lean_object* v___y_455_, lean_object* v___y_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0___redArg(v_mvarId_454_, v___y_455_);
lean_dec(v___y_455_);
lean_dec(v_mvarId_454_);
return v_res_457_;
}
}
static lean_object* _init_l_Lean_MVarId_checkNotAssigned___closed__1(void){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = ((lean_object*)(l_Lean_MVarId_checkNotAssigned___closed__0));
v___x_460_ = l_Lean_stringToMessageData(v___x_459_);
return v___x_460_;
}
}
static lean_object* _init_l_Lean_MVarId_checkNotAssigned___closed__4(void){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_464_ = ((lean_object*)(l_Lean_MVarId_checkNotAssigned___closed__3));
v___x_465_ = l_Lean_MessageData_ofFormat(v___x_464_);
return v___x_465_;
}
}
static lean_object* _init_l_Lean_MVarId_checkNotAssigned___closed__5(void){
_start:
{
lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_466_ = lean_obj_once(&l_Lean_MVarId_checkNotAssigned___closed__4, &l_Lean_MVarId_checkNotAssigned___closed__4_once, _init_l_Lean_MVarId_checkNotAssigned___closed__4);
v___x_467_ = l_Lean_MessageData_note(v___x_466_);
return v___x_467_;
}
}
static lean_object* _init_l_Lean_MVarId_checkNotAssigned___closed__6(void){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_468_ = lean_obj_once(&l_Lean_MVarId_checkNotAssigned___closed__5, &l_Lean_MVarId_checkNotAssigned___closed__5_once, _init_l_Lean_MVarId_checkNotAssigned___closed__5);
v___x_469_ = lean_obj_once(&l_Lean_MVarId_checkNotAssigned___closed__1, &l_Lean_MVarId_checkNotAssigned___closed__1_once, _init_l_Lean_MVarId_checkNotAssigned___closed__1);
v___x_470_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
lean_ctor_set(v___x_470_, 1, v___x_468_);
return v___x_470_;
}
}
static lean_object* _init_l_Lean_MVarId_checkNotAssigned___closed__7(void){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_471_ = lean_obj_once(&l_Lean_MVarId_checkNotAssigned___closed__6, &l_Lean_MVarId_checkNotAssigned___closed__6_once, _init_l_Lean_MVarId_checkNotAssigned___closed__6);
v___x_472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_472_, 0, v___x_471_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_checkNotAssigned(lean_object* v_mvarId_473_, lean_object* v_tacticName_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_){
_start:
{
lean_object* v___x_480_; lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_492_; 
v___x_480_ = l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0___redArg(v_mvarId_473_, v_a_476_);
v_a_481_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_492_ == 0)
{
v___x_483_ = v___x_480_;
v_isShared_484_ = v_isSharedCheck_492_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___x_480_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_492_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
uint8_t v___x_485_; 
v___x_485_ = lean_unbox(v_a_481_);
lean_dec(v_a_481_);
if (v___x_485_ == 0)
{
lean_object* v___x_486_; lean_object* v___x_488_; 
lean_dec(v_tacticName_474_);
lean_dec(v_mvarId_473_);
v___x_486_ = lean_box(0);
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 0, v___x_486_);
v___x_488_ = v___x_483_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v___x_486_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
else
{
lean_object* v___x_490_; lean_object* v___x_491_; 
lean_del_object(v___x_483_);
v___x_490_ = lean_obj_once(&l_Lean_MVarId_checkNotAssigned___closed__7, &l_Lean_MVarId_checkNotAssigned___closed__7_once, _init_l_Lean_MVarId_checkNotAssigned___closed__7);
v___x_491_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_474_, v_mvarId_473_, v___x_490_, v_a_475_, v_a_476_, v_a_477_, v_a_478_);
return v___x_491_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_checkNotAssigned___boxed(lean_object* v_mvarId_493_, lean_object* v_tacticName_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_493_, v_tacticName_494_, v_a_495_, v_a_496_, v_a_497_, v_a_498_);
lean_dec(v_a_498_);
lean_dec_ref(v_a_497_);
lean_dec(v_a_496_);
lean_dec_ref(v_a_495_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0(lean_object* v_mvarId_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0___redArg(v_mvarId_501_, v___y_503_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0___boxed(lean_object* v_mvarId_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l_Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0(v_mvarId_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_509_);
lean_dec(v_mvarId_508_);
return v_res_514_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0(lean_object* v_00_u03b2_515_, lean_object* v_x_516_, lean_object* v_x_517_){
_start:
{
uint8_t v___x_518_; 
v___x_518_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0___redArg(v_x_516_, v_x_517_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0___boxed(lean_object* v_00_u03b2_519_, lean_object* v_x_520_, lean_object* v_x_521_){
_start:
{
uint8_t v_res_522_; lean_object* v_r_523_; 
v_res_522_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0(v_00_u03b2_519_, v_x_520_, v_x_521_);
lean_dec(v_x_521_);
lean_dec_ref(v_x_520_);
v_r_523_ = lean_box(v_res_522_);
return v_r_523_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_524_, lean_object* v_x_525_, size_t v_x_526_, lean_object* v_x_527_){
_start:
{
uint8_t v___x_528_; 
v___x_528_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1___redArg(v_x_525_, v_x_526_, v_x_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_529_, lean_object* v_x_530_, lean_object* v_x_531_, lean_object* v_x_532_){
_start:
{
size_t v_x_768__boxed_533_; uint8_t v_res_534_; lean_object* v_r_535_; 
v_x_768__boxed_533_ = lean_unbox_usize(v_x_531_);
lean_dec(v_x_531_);
v_res_534_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1(v_00_u03b2_529_, v_x_530_, v_x_768__boxed_533_, v_x_532_);
lean_dec(v_x_532_);
lean_dec_ref(v_x_530_);
v_r_535_ = lean_box(v_res_534_);
return v_r_535_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_536_, lean_object* v_keys_537_, lean_object* v_vals_538_, lean_object* v_heq_539_, lean_object* v_i_540_, lean_object* v_k_541_){
_start:
{
uint8_t v___x_542_; 
v___x_542_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2___redArg(v_keys_537_, v_i_540_, v_k_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_543_, lean_object* v_keys_544_, lean_object* v_vals_545_, lean_object* v_heq_546_, lean_object* v_i_547_, lean_object* v_k_548_){
_start:
{
uint8_t v_res_549_; lean_object* v_r_550_; 
v_res_549_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_MVarId_checkNotAssigned_spec__0_spec__0_spec__1_spec__2(v_00_u03b2_543_, v_keys_544_, v_vals_545_, v_heq_546_, v_i_547_, v_k_548_);
lean_dec(v_k_548_);
lean_dec_ref(v_vals_545_);
lean_dec_ref(v_keys_544_);
v_r_550_ = lean_box(v_res_549_);
return v_r_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getType(lean_object* v_mvarId_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = l_Lean_MVarId_getDecl(v_mvarId_551_, v_a_552_, v_a_553_, v_a_554_, v_a_555_);
if (lean_obj_tag(v___x_557_) == 0)
{
lean_object* v_a_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_566_; 
v_a_558_ = lean_ctor_get(v___x_557_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_566_ == 0)
{
v___x_560_ = v___x_557_;
v_isShared_561_ = v_isSharedCheck_566_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v___x_557_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_566_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v_type_562_; lean_object* v___x_564_; 
v_type_562_ = lean_ctor_get(v_a_558_, 2);
lean_inc_ref(v_type_562_);
lean_dec(v_a_558_);
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 0, v_type_562_);
v___x_564_ = v___x_560_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_type_562_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
else
{
lean_object* v_a_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_574_; 
v_a_567_ = lean_ctor_get(v___x_557_, 0);
v_isSharedCheck_574_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_574_ == 0)
{
v___x_569_ = v___x_557_;
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_a_567_);
lean_dec(v___x_557_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_572_; 
if (v_isShared_570_ == 0)
{
v___x_572_ = v___x_569_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_a_567_);
v___x_572_ = v_reuseFailAlloc_573_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
return v___x_572_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getType___boxed(lean_object* v_mvarId_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l_Lean_MVarId_getType(v_mvarId_575_, v_a_576_, v_a_577_, v_a_578_, v_a_579_);
lean_dec(v_a_579_);
lean_dec_ref(v_a_578_);
lean_dec(v_a_577_);
lean_dec_ref(v_a_576_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___redArg(lean_object* v_e_582_, lean_object* v___y_583_){
_start:
{
uint8_t v___x_585_; 
v___x_585_ = l_Lean_Expr_hasMVar(v_e_582_);
if (v___x_585_ == 0)
{
lean_object* v___x_586_; 
v___x_586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_586_, 0, v_e_582_);
return v___x_586_;
}
else
{
lean_object* v___x_587_; lean_object* v_mctx_588_; lean_object* v___x_589_; lean_object* v_fst_590_; lean_object* v_snd_591_; lean_object* v___x_592_; lean_object* v_cache_593_; lean_object* v_zetaDeltaFVarIds_594_; lean_object* v_postponed_595_; lean_object* v_diag_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_605_; 
v___x_587_ = lean_st_ref_get(v___y_583_);
v_mctx_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc_ref(v_mctx_588_);
lean_dec(v___x_587_);
v___x_589_ = l_Lean_instantiateMVarsCore(v_mctx_588_, v_e_582_);
v_fst_590_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_fst_590_);
v_snd_591_ = lean_ctor_get(v___x_589_, 1);
lean_inc(v_snd_591_);
lean_dec_ref(v___x_589_);
v___x_592_ = lean_st_ref_take(v___y_583_);
v_cache_593_ = lean_ctor_get(v___x_592_, 1);
v_zetaDeltaFVarIds_594_ = lean_ctor_get(v___x_592_, 2);
v_postponed_595_ = lean_ctor_get(v___x_592_, 3);
v_diag_596_ = lean_ctor_get(v___x_592_, 4);
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_605_ == 0)
{
lean_object* v_unused_606_; 
v_unused_606_ = lean_ctor_get(v___x_592_, 0);
lean_dec(v_unused_606_);
v___x_598_ = v___x_592_;
v_isShared_599_ = v_isSharedCheck_605_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_diag_596_);
lean_inc(v_postponed_595_);
lean_inc(v_zetaDeltaFVarIds_594_);
lean_inc(v_cache_593_);
lean_dec(v___x_592_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_605_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_601_; 
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 0, v_snd_591_);
v___x_601_ = v___x_598_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_snd_591_);
lean_ctor_set(v_reuseFailAlloc_604_, 1, v_cache_593_);
lean_ctor_set(v_reuseFailAlloc_604_, 2, v_zetaDeltaFVarIds_594_);
lean_ctor_set(v_reuseFailAlloc_604_, 3, v_postponed_595_);
lean_ctor_set(v_reuseFailAlloc_604_, 4, v_diag_596_);
v___x_601_ = v_reuseFailAlloc_604_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_602_ = lean_st_ref_put(v___y_583_, v___x_601_);
v___x_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_603_, 0, v_fst_590_);
return v___x_603_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___redArg___boxed(lean_object* v_e_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___redArg(v_e_607_, v___y_608_);
lean_dec(v___y_608_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0(lean_object* v_e_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_){
_start:
{
lean_object* v___x_617_; 
v___x_617_ = l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___redArg(v_e_611_, v___y_613_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___boxed(lean_object* v_e_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0(v_e_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_);
lean_dec(v___y_622_);
lean_dec_ref(v___y_621_);
lean_dec(v___y_620_);
lean_dec_ref(v___y_619_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getType_x27(lean_object* v_mvarId_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_){
_start:
{
lean_object* v___x_631_; 
v___x_631_ = l_Lean_MVarId_getType(v_mvarId_625_, v_a_626_, v_a_627_, v_a_628_, v_a_629_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; lean_object* v___x_633_; 
v_a_632_ = lean_ctor_get(v___x_631_, 0);
lean_inc(v_a_632_);
lean_dec_ref_known(v___x_631_, 1);
lean_inc(v_a_629_);
lean_inc_ref(v_a_628_);
lean_inc(v_a_627_);
lean_inc_ref(v_a_626_);
v___x_633_ = lean_whnf(v_a_632_, v_a_626_, v_a_627_, v_a_628_, v_a_629_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v_a_634_; lean_object* v___x_635_; 
v_a_634_ = lean_ctor_get(v___x_633_, 0);
lean_inc(v_a_634_);
lean_dec_ref_known(v___x_633_, 1);
v___x_635_ = l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___redArg(v_a_634_, v_a_627_);
return v___x_635_;
}
else
{
return v___x_633_;
}
}
else
{
return v___x_631_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getType_x27___boxed(lean_object* v_mvarId_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = l_Lean_MVarId_getType_x27(v_mvarId_636_, v_a_637_, v_a_638_, v_a_639_, v_a_640_);
lean_dec(v_a_640_);
lean_dec_ref(v_a_639_);
lean_dec(v_a_638_);
lean_dec_ref(v_a_637_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_708_; uint8_t v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_708_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_));
v___x_709_ = 0;
v___x_710_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_));
v___x_711_ = l_Lean_registerTraceClass(v___x_708_, v___x_709_, v___x_710_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2____boxed(lean_object* v_a_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_();
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___redArg(lean_object* v_mvarId_714_, lean_object* v_x_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
lean_object* v___x_721_; 
v___x_721_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_714_, v_x_715_, v___y_716_, v___y_717_, v___y_718_, v___y_719_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_729_; 
v_a_722_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_729_ == 0)
{
v___x_724_ = v___x_721_;
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_721_);
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
v_reuseFailAlloc_728_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
v_a_730_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_737_ == 0)
{
v___x_732_ = v___x_721_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v___x_721_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___redArg___boxed(lean_object* v_mvarId_738_, lean_object* v_x_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_){
_start:
{
lean_object* v_res_745_; 
v_res_745_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___redArg(v_mvarId_738_, v_x_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_);
lean_dec(v___y_743_);
lean_dec_ref(v___y_742_);
lean_dec(v___y_741_);
lean_dec_ref(v___y_740_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1(lean_object* v_00_u03b1_746_, lean_object* v_mvarId_747_, lean_object* v_x_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v___x_754_; 
v___x_754_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___redArg(v_mvarId_747_, v_x_748_, v___y_749_, v___y_750_, v___y_751_, v___y_752_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___boxed(lean_object* v_00_u03b1_755_, lean_object* v_mvarId_756_, lean_object* v_x_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_){
_start:
{
lean_object* v_res_763_; 
v_res_763_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1(v_00_u03b1_755_, v_mvarId_756_, v_x_757_, v___y_758_, v___y_759_, v___y_760_, v___y_761_);
lean_dec(v___y_761_);
lean_dec_ref(v___y_760_);
lean_dec(v___y_759_);
lean_dec_ref(v___y_758_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(lean_object* v_x_764_, lean_object* v_x_765_, lean_object* v_x_766_, lean_object* v_x_767_){
_start:
{
lean_object* v_ks_768_; lean_object* v_vs_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_793_; 
v_ks_768_ = lean_ctor_get(v_x_764_, 0);
v_vs_769_ = lean_ctor_get(v_x_764_, 1);
v_isSharedCheck_793_ = !lean_is_exclusive(v_x_764_);
if (v_isSharedCheck_793_ == 0)
{
v___x_771_ = v_x_764_;
v_isShared_772_ = v_isSharedCheck_793_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_vs_769_);
lean_inc(v_ks_768_);
lean_dec(v_x_764_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_793_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_773_; uint8_t v___x_774_; 
v___x_773_ = lean_array_get_size(v_ks_768_);
v___x_774_ = lean_nat_dec_lt(v_x_765_, v___x_773_);
if (v___x_774_ == 0)
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_778_; 
lean_dec(v_x_765_);
v___x_775_ = lean_array_push(v_ks_768_, v_x_766_);
v___x_776_ = lean_array_push(v_vs_769_, v_x_767_);
if (v_isShared_772_ == 0)
{
lean_ctor_set(v___x_771_, 1, v___x_776_);
lean_ctor_set(v___x_771_, 0, v___x_775_);
v___x_778_ = v___x_771_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v___x_775_);
lean_ctor_set(v_reuseFailAlloc_779_, 1, v___x_776_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
else
{
lean_object* v_k_x27_780_; uint8_t v___x_781_; 
v_k_x27_780_ = lean_array_fget_borrowed(v_ks_768_, v_x_765_);
v___x_781_ = l_Lean_instBEqMVarId_beq(v_x_766_, v_k_x27_780_);
if (v___x_781_ == 0)
{
lean_object* v___x_783_; 
if (v_isShared_772_ == 0)
{
v___x_783_ = v___x_771_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_ks_768_);
lean_ctor_set(v_reuseFailAlloc_787_, 1, v_vs_769_);
v___x_783_ = v_reuseFailAlloc_787_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_784_ = lean_unsigned_to_nat(1u);
v___x_785_ = lean_nat_add(v_x_765_, v___x_784_);
lean_dec(v_x_765_);
v_x_764_ = v___x_783_;
v_x_765_ = v___x_785_;
goto _start;
}
}
else
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_791_; 
v___x_788_ = lean_array_fset(v_ks_768_, v_x_765_, v_x_766_);
v___x_789_ = lean_array_fset(v_vs_769_, v_x_765_, v_x_767_);
lean_dec(v_x_765_);
if (v_isShared_772_ == 0)
{
lean_ctor_set(v___x_771_, 1, v___x_789_);
lean_ctor_set(v___x_771_, 0, v___x_788_);
v___x_791_ = v___x_771_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_788_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v___x_789_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3___redArg(lean_object* v_n_794_, lean_object* v_k_795_, lean_object* v_v_796_){
_start:
{
lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_797_ = lean_unsigned_to_nat(0u);
v___x_798_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(v_n_794_, v___x_797_, v_k_795_, v_v_796_);
return v___x_798_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_799_; 
v___x_799_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg(lean_object* v_x_800_, size_t v_x_801_, size_t v_x_802_, lean_object* v_x_803_, lean_object* v_x_804_){
_start:
{
if (lean_obj_tag(v_x_800_) == 0)
{
lean_object* v_es_805_; size_t v___x_806_; size_t v___x_807_; lean_object* v_j_808_; lean_object* v___x_809_; uint8_t v___x_810_; 
v_es_805_ = lean_ctor_get(v_x_800_, 0);
v___x_806_ = ((size_t)31ULL);
v___x_807_ = lean_usize_land(v_x_801_, v___x_806_);
v_j_808_ = lean_usize_to_nat(v___x_807_);
v___x_809_ = lean_array_get_size(v_es_805_);
v___x_810_ = lean_nat_dec_lt(v_j_808_, v___x_809_);
if (v___x_810_ == 0)
{
lean_dec(v_j_808_);
lean_dec(v_x_804_);
lean_dec(v_x_803_);
return v_x_800_;
}
else
{
lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_849_; 
lean_inc_ref(v_es_805_);
v_isSharedCheck_849_ = !lean_is_exclusive(v_x_800_);
if (v_isSharedCheck_849_ == 0)
{
lean_object* v_unused_850_; 
v_unused_850_ = lean_ctor_get(v_x_800_, 0);
lean_dec(v_unused_850_);
v___x_812_ = v_x_800_;
v_isShared_813_ = v_isSharedCheck_849_;
goto v_resetjp_811_;
}
else
{
lean_dec(v_x_800_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_849_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v_v_814_; lean_object* v___x_815_; lean_object* v_xs_x27_816_; lean_object* v___y_818_; 
v_v_814_ = lean_array_fget(v_es_805_, v_j_808_);
v___x_815_ = lean_box(0);
v_xs_x27_816_ = lean_array_fset(v_es_805_, v_j_808_, v___x_815_);
switch(lean_obj_tag(v_v_814_))
{
case 0:
{
lean_object* v_key_823_; lean_object* v_val_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_834_; 
v_key_823_ = lean_ctor_get(v_v_814_, 0);
v_val_824_ = lean_ctor_get(v_v_814_, 1);
v_isSharedCheck_834_ = !lean_is_exclusive(v_v_814_);
if (v_isSharedCheck_834_ == 0)
{
v___x_826_ = v_v_814_;
v_isShared_827_ = v_isSharedCheck_834_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_val_824_);
lean_inc(v_key_823_);
lean_dec(v_v_814_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_834_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
uint8_t v___x_828_; 
v___x_828_ = l_Lean_instBEqMVarId_beq(v_x_803_, v_key_823_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; lean_object* v___x_830_; 
lean_del_object(v___x_826_);
v___x_829_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_823_, v_val_824_, v_x_803_, v_x_804_);
v___x_830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_830_, 0, v___x_829_);
v___y_818_ = v___x_830_;
goto v___jp_817_;
}
else
{
lean_object* v___x_832_; 
lean_dec(v_val_824_);
lean_dec(v_key_823_);
if (v_isShared_827_ == 0)
{
lean_ctor_set(v___x_826_, 1, v_x_804_);
lean_ctor_set(v___x_826_, 0, v_x_803_);
v___x_832_ = v___x_826_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_x_803_);
lean_ctor_set(v_reuseFailAlloc_833_, 1, v_x_804_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
v___y_818_ = v___x_832_;
goto v___jp_817_;
}
}
}
}
case 1:
{
lean_object* v_node_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_847_; 
v_node_835_ = lean_ctor_get(v_v_814_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v_v_814_);
if (v_isSharedCheck_847_ == 0)
{
v___x_837_ = v_v_814_;
v_isShared_838_ = v_isSharedCheck_847_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_node_835_);
lean_dec(v_v_814_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_847_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
size_t v___x_839_; size_t v___x_840_; size_t v___x_841_; size_t v___x_842_; lean_object* v___x_843_; lean_object* v___x_845_; 
v___x_839_ = ((size_t)5ULL);
v___x_840_ = lean_usize_shift_right(v_x_801_, v___x_839_);
v___x_841_ = ((size_t)1ULL);
v___x_842_ = lean_usize_add(v_x_802_, v___x_841_);
v___x_843_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg(v_node_835_, v___x_840_, v___x_842_, v_x_803_, v_x_804_);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 0, v___x_843_);
v___x_845_ = v___x_837_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_843_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
v___y_818_ = v___x_845_;
goto v___jp_817_;
}
}
}
default: 
{
lean_object* v___x_848_; 
v___x_848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_848_, 0, v_x_803_);
lean_ctor_set(v___x_848_, 1, v_x_804_);
v___y_818_ = v___x_848_;
goto v___jp_817_;
}
}
v___jp_817_:
{
lean_object* v___x_819_; lean_object* v___x_821_; 
v___x_819_ = lean_array_fset(v_xs_x27_816_, v_j_808_, v___y_818_);
lean_dec(v_j_808_);
if (v_isShared_813_ == 0)
{
lean_ctor_set(v___x_812_, 0, v___x_819_);
v___x_821_ = v___x_812_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v___x_819_);
v___x_821_ = v_reuseFailAlloc_822_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
return v___x_821_;
}
}
}
}
}
else
{
lean_object* v_ks_851_; lean_object* v_vs_852_; lean_object* v___x_854_; uint8_t v_isShared_855_; uint8_t v_isSharedCheck_870_; 
v_ks_851_ = lean_ctor_get(v_x_800_, 0);
v_vs_852_ = lean_ctor_get(v_x_800_, 1);
v_isSharedCheck_870_ = !lean_is_exclusive(v_x_800_);
if (v_isSharedCheck_870_ == 0)
{
v___x_854_ = v_x_800_;
v_isShared_855_ = v_isSharedCheck_870_;
goto v_resetjp_853_;
}
else
{
lean_inc(v_vs_852_);
lean_inc(v_ks_851_);
lean_dec(v_x_800_);
v___x_854_ = lean_box(0);
v_isShared_855_ = v_isSharedCheck_870_;
goto v_resetjp_853_;
}
v_resetjp_853_:
{
lean_object* v___x_857_; 
if (v_isShared_855_ == 0)
{
v___x_857_ = v___x_854_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_ks_851_);
lean_ctor_set(v_reuseFailAlloc_869_, 1, v_vs_852_);
v___x_857_ = v_reuseFailAlloc_869_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
lean_object* v_newNode_858_; size_t v___x_859_; uint8_t v___x_860_; 
v_newNode_858_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3___redArg(v___x_857_, v_x_803_, v_x_804_);
v___x_859_ = ((size_t)7ULL);
v___x_860_ = lean_usize_dec_le(v___x_859_, v_x_802_);
if (v___x_860_ == 0)
{
lean_object* v___x_861_; lean_object* v___x_862_; uint8_t v___x_863_; 
v___x_861_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_858_);
v___x_862_ = lean_unsigned_to_nat(4u);
v___x_863_ = lean_nat_dec_lt(v___x_861_, v___x_862_);
lean_dec(v___x_861_);
if (v___x_863_ == 0)
{
lean_object* v_ks_864_; lean_object* v_vs_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v_ks_864_ = lean_ctor_get(v_newNode_858_, 0);
lean_inc_ref(v_ks_864_);
v_vs_865_ = lean_ctor_get(v_newNode_858_, 1);
lean_inc_ref(v_vs_865_);
lean_dec_ref(v_newNode_858_);
v___x_866_ = lean_unsigned_to_nat(0u);
v___x_867_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_868_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4___redArg(v_x_802_, v_ks_864_, v_vs_865_, v___x_866_, v___x_867_);
lean_dec_ref(v_vs_865_);
lean_dec_ref(v_ks_864_);
return v___x_868_;
}
else
{
return v_newNode_858_;
}
}
else
{
return v_newNode_858_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4___redArg(size_t v_depth_871_, lean_object* v_keys_872_, lean_object* v_vals_873_, lean_object* v_i_874_, lean_object* v_entries_875_){
_start:
{
lean_object* v___x_876_; uint8_t v___x_877_; 
v___x_876_ = lean_array_get_size(v_keys_872_);
v___x_877_ = lean_nat_dec_lt(v_i_874_, v___x_876_);
if (v___x_877_ == 0)
{
lean_dec(v_i_874_);
return v_entries_875_;
}
else
{
lean_object* v_k_878_; lean_object* v_v_879_; uint64_t v___x_880_; size_t v_h_881_; size_t v___x_882_; lean_object* v___x_883_; size_t v___x_884_; size_t v___x_885_; size_t v___x_886_; size_t v_h_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v_k_878_ = lean_array_fget_borrowed(v_keys_872_, v_i_874_);
v_v_879_ = lean_array_fget_borrowed(v_vals_873_, v_i_874_);
v___x_880_ = l_Lean_instHashableMVarId_hash(v_k_878_);
v_h_881_ = lean_uint64_to_usize(v___x_880_);
v___x_882_ = ((size_t)5ULL);
v___x_883_ = lean_unsigned_to_nat(1u);
v___x_884_ = ((size_t)1ULL);
v___x_885_ = lean_usize_sub(v_depth_871_, v___x_884_);
v___x_886_ = lean_usize_mul(v___x_882_, v___x_885_);
v_h_887_ = lean_usize_shift_right(v_h_881_, v___x_886_);
v___x_888_ = lean_nat_add(v_i_874_, v___x_883_);
lean_dec(v_i_874_);
lean_inc(v_v_879_);
lean_inc(v_k_878_);
v___x_889_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg(v_entries_875_, v_h_887_, v_depth_871_, v_k_878_, v_v_879_);
v_i_874_ = v___x_888_;
v_entries_875_ = v___x_889_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_depth_891_, lean_object* v_keys_892_, lean_object* v_vals_893_, lean_object* v_i_894_, lean_object* v_entries_895_){
_start:
{
size_t v_depth_boxed_896_; lean_object* v_res_897_; 
v_depth_boxed_896_ = lean_unbox_usize(v_depth_891_);
lean_dec(v_depth_891_);
v_res_897_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4___redArg(v_depth_boxed_896_, v_keys_892_, v_vals_893_, v_i_894_, v_entries_895_);
lean_dec_ref(v_vals_893_);
lean_dec_ref(v_keys_892_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_898_, lean_object* v_x_899_, lean_object* v_x_900_, lean_object* v_x_901_, lean_object* v_x_902_){
_start:
{
size_t v_x_1018__boxed_903_; size_t v_x_1019__boxed_904_; lean_object* v_res_905_; 
v_x_1018__boxed_903_ = lean_unbox_usize(v_x_899_);
lean_dec(v_x_899_);
v_x_1019__boxed_904_ = lean_unbox_usize(v_x_900_);
lean_dec(v_x_900_);
v_res_905_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg(v_x_898_, v_x_1018__boxed_903_, v_x_1019__boxed_904_, v_x_901_, v_x_902_);
return v_res_905_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0___redArg(lean_object* v_x_906_, lean_object* v_x_907_, lean_object* v_x_908_){
_start:
{
uint64_t v___x_909_; size_t v___x_910_; size_t v___x_911_; lean_object* v___x_912_; 
v___x_909_ = l_Lean_instHashableMVarId_hash(v_x_907_);
v___x_910_ = lean_uint64_to_usize(v___x_909_);
v___x_911_ = ((size_t)1ULL);
v___x_912_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg(v_x_906_, v___x_910_, v___x_911_, v_x_907_, v_x_908_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0___redArg(lean_object* v_mvarId_913_, lean_object* v_val_914_, lean_object* v___y_915_){
_start:
{
lean_object* v___x_917_; lean_object* v_mctx_918_; lean_object* v_cache_919_; lean_object* v_zetaDeltaFVarIds_920_; lean_object* v_postponed_921_; lean_object* v_diag_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_951_; 
v___x_917_ = lean_st_ref_take(v___y_915_);
v_mctx_918_ = lean_ctor_get(v___x_917_, 0);
v_cache_919_ = lean_ctor_get(v___x_917_, 1);
v_zetaDeltaFVarIds_920_ = lean_ctor_get(v___x_917_, 2);
v_postponed_921_ = lean_ctor_get(v___x_917_, 3);
v_diag_922_ = lean_ctor_get(v___x_917_, 4);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_951_ == 0)
{
v___x_924_ = v___x_917_;
v_isShared_925_ = v_isSharedCheck_951_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_diag_922_);
lean_inc(v_postponed_921_);
lean_inc(v_zetaDeltaFVarIds_920_);
lean_inc(v_cache_919_);
lean_inc(v_mctx_918_);
lean_dec(v___x_917_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_951_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v_depth_926_; lean_object* v_levelAssignDepth_927_; lean_object* v_lmvarCounter_928_; lean_object* v_mvarCounter_929_; lean_object* v_lDecls_930_; lean_object* v_decls_931_; lean_object* v_userNames_932_; lean_object* v_lAssignment_933_; lean_object* v_eAssignment_934_; lean_object* v_dAssignment_935_; lean_object* v_instanceTypedMVars_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_950_; 
v_depth_926_ = lean_ctor_get(v_mctx_918_, 0);
v_levelAssignDepth_927_ = lean_ctor_get(v_mctx_918_, 1);
v_lmvarCounter_928_ = lean_ctor_get(v_mctx_918_, 2);
v_mvarCounter_929_ = lean_ctor_get(v_mctx_918_, 3);
v_lDecls_930_ = lean_ctor_get(v_mctx_918_, 4);
v_decls_931_ = lean_ctor_get(v_mctx_918_, 5);
v_userNames_932_ = lean_ctor_get(v_mctx_918_, 6);
v_lAssignment_933_ = lean_ctor_get(v_mctx_918_, 7);
v_eAssignment_934_ = lean_ctor_get(v_mctx_918_, 8);
v_dAssignment_935_ = lean_ctor_get(v_mctx_918_, 9);
v_instanceTypedMVars_936_ = lean_ctor_get(v_mctx_918_, 10);
v_isSharedCheck_950_ = !lean_is_exclusive(v_mctx_918_);
if (v_isSharedCheck_950_ == 0)
{
v___x_938_ = v_mctx_918_;
v_isShared_939_ = v_isSharedCheck_950_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_instanceTypedMVars_936_);
lean_inc(v_dAssignment_935_);
lean_inc(v_eAssignment_934_);
lean_inc(v_lAssignment_933_);
lean_inc(v_userNames_932_);
lean_inc(v_decls_931_);
lean_inc(v_lDecls_930_);
lean_inc(v_mvarCounter_929_);
lean_inc(v_lmvarCounter_928_);
lean_inc(v_levelAssignDepth_927_);
lean_inc(v_depth_926_);
lean_dec(v_mctx_918_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_950_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_943_; 
v___x_940_ = lean_box(0);
v___x_941_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0___redArg(v_eAssignment_934_, v_mvarId_913_, v_val_914_);
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 8, v___x_941_);
v___x_943_ = v___x_938_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v_depth_926_);
lean_ctor_set(v_reuseFailAlloc_949_, 1, v_levelAssignDepth_927_);
lean_ctor_set(v_reuseFailAlloc_949_, 2, v_lmvarCounter_928_);
lean_ctor_set(v_reuseFailAlloc_949_, 3, v_mvarCounter_929_);
lean_ctor_set(v_reuseFailAlloc_949_, 4, v_lDecls_930_);
lean_ctor_set(v_reuseFailAlloc_949_, 5, v_decls_931_);
lean_ctor_set(v_reuseFailAlloc_949_, 6, v_userNames_932_);
lean_ctor_set(v_reuseFailAlloc_949_, 7, v_lAssignment_933_);
lean_ctor_set(v_reuseFailAlloc_949_, 8, v___x_941_);
lean_ctor_set(v_reuseFailAlloc_949_, 9, v_dAssignment_935_);
lean_ctor_set(v_reuseFailAlloc_949_, 10, v_instanceTypedMVars_936_);
v___x_943_ = v_reuseFailAlloc_949_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
lean_object* v___x_945_; 
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 0, v___x_943_);
v___x_945_ = v___x_924_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v___x_943_);
lean_ctor_set(v_reuseFailAlloc_948_, 1, v_cache_919_);
lean_ctor_set(v_reuseFailAlloc_948_, 2, v_zetaDeltaFVarIds_920_);
lean_ctor_set(v_reuseFailAlloc_948_, 3, v_postponed_921_);
lean_ctor_set(v_reuseFailAlloc_948_, 4, v_diag_922_);
v___x_945_ = v_reuseFailAlloc_948_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_946_ = lean_st_ref_put(v___y_915_, v___x_945_);
v___x_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_947_, 0, v___x_940_);
return v___x_947_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0___redArg___boxed(lean_object* v_mvarId_952_, lean_object* v_val_953_, lean_object* v___y_954_, lean_object* v___y_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0___redArg(v_mvarId_952_, v_val_953_, v___y_954_);
lean_dec(v___y_954_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_admit___lam__0(lean_object* v_mvarId_957_, lean_object* v___x_958_, uint8_t v_synthetic_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v___x_965_; 
lean_inc(v_mvarId_957_);
v___x_965_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_957_, v___x_958_, v___y_960_, v___y_961_, v___y_962_, v___y_963_);
if (lean_obj_tag(v___x_965_) == 0)
{
lean_object* v___x_966_; 
lean_dec_ref_known(v___x_965_, 1);
lean_inc(v_mvarId_957_);
v___x_966_ = l_Lean_MVarId_getType(v_mvarId_957_, v___y_960_, v___y_961_, v___y_962_, v___y_963_);
if (lean_obj_tag(v___x_966_) == 0)
{
lean_object* v_a_967_; uint8_t v___x_968_; lean_object* v___x_969_; 
v_a_967_ = lean_ctor_get(v___x_966_, 0);
lean_inc(v_a_967_);
lean_dec_ref_known(v___x_966_, 1);
v___x_968_ = 1;
v___x_969_ = l_Lean_Meta_mkLabeledSorry(v_a_967_, v_synthetic_959_, v___x_968_, v___y_960_, v___y_961_, v___y_962_, v___y_963_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v___x_971_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_970_);
lean_dec_ref_known(v___x_969_, 1);
v___x_971_ = l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0___redArg(v_mvarId_957_, v_a_970_, v___y_961_);
return v___x_971_;
}
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
lean_dec(v_mvarId_957_);
v_a_972_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___x_969_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_969_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_977_; 
if (v_isShared_975_ == 0)
{
v___x_977_ = v___x_974_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_a_972_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
}
else
{
lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_987_; 
lean_dec(v_mvarId_957_);
v_a_980_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_987_ == 0)
{
v___x_982_ = v___x_966_;
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v___x_966_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_985_; 
if (v_isShared_983_ == 0)
{
v___x_985_ = v___x_982_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_a_980_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
}
else
{
lean_dec(v_mvarId_957_);
return v___x_965_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_admit___lam__0___boxed(lean_object* v_mvarId_988_, lean_object* v___x_989_, lean_object* v_synthetic_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_){
_start:
{
uint8_t v_synthetic_boxed_996_; lean_object* v_res_997_; 
v_synthetic_boxed_996_ = lean_unbox(v_synthetic_990_);
v_res_997_ = l_Lean_MVarId_admit___lam__0(v_mvarId_988_, v___x_989_, v_synthetic_boxed_996_, v___y_991_, v___y_992_, v___y_993_, v___y_994_);
lean_dec(v___y_994_);
lean_dec_ref(v___y_993_);
lean_dec(v___y_992_);
lean_dec_ref(v___y_991_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_admit(lean_object* v_mvarId_1001_, uint8_t v_synthetic_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_){
_start:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___f_1010_; lean_object* v___x_1011_; 
v___x_1008_ = ((lean_object*)(l_Lean_MVarId_admit___closed__1));
v___x_1009_ = lean_box(v_synthetic_1002_);
lean_inc(v_mvarId_1001_);
v___f_1010_ = lean_alloc_closure((void*)(l_Lean_MVarId_admit___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1010_, 0, v_mvarId_1001_);
lean_closure_set(v___f_1010_, 1, v___x_1008_);
lean_closure_set(v___f_1010_, 2, v___x_1009_);
v___x_1011_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___redArg(v_mvarId_1001_, v___f_1010_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_);
return v___x_1011_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_admit___boxed(lean_object* v_mvarId_1012_, lean_object* v_synthetic_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_){
_start:
{
uint8_t v_synthetic_boxed_1019_; lean_object* v_res_1020_; 
v_synthetic_boxed_1019_ = lean_unbox(v_synthetic_1013_);
v_res_1020_ = l_Lean_MVarId_admit(v_mvarId_1012_, v_synthetic_boxed_1019_, v_a_1014_, v_a_1015_, v_a_1016_, v_a_1017_);
lean_dec(v_a_1017_);
lean_dec_ref(v_a_1016_);
lean_dec(v_a_1015_);
lean_dec_ref(v_a_1014_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0(lean_object* v_mvarId_1021_, lean_object* v_val_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_){
_start:
{
lean_object* v___x_1028_; 
v___x_1028_ = l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0___redArg(v_mvarId_1021_, v_val_1022_, v___y_1024_);
return v___x_1028_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0___boxed(lean_object* v_mvarId_1029_, lean_object* v_val_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l_Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0(v_mvarId_1029_, v_val_1030_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_);
lean_dec(v___y_1034_);
lean_dec_ref(v___y_1033_);
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0(lean_object* v_00_u03b2_1037_, lean_object* v_x_1038_, lean_object* v_x_1039_, lean_object* v_x_1040_){
_start:
{
lean_object* v___x_1041_; 
v___x_1041_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0___redArg(v_x_1038_, v_x_1039_, v_x_1040_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1042_, lean_object* v_x_1043_, size_t v_x_1044_, size_t v_x_1045_, lean_object* v_x_1046_, lean_object* v_x_1047_){
_start:
{
lean_object* v___x_1048_; 
v___x_1048_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___redArg(v_x_1043_, v_x_1044_, v_x_1045_, v_x_1046_, v_x_1047_);
return v___x_1048_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1049_, lean_object* v_x_1050_, lean_object* v_x_1051_, lean_object* v_x_1052_, lean_object* v_x_1053_, lean_object* v_x_1054_){
_start:
{
size_t v_x_1339__boxed_1055_; size_t v_x_1340__boxed_1056_; lean_object* v_res_1057_; 
v_x_1339__boxed_1055_ = lean_unbox_usize(v_x_1051_);
lean_dec(v_x_1051_);
v_x_1340__boxed_1056_ = lean_unbox_usize(v_x_1052_);
lean_dec(v_x_1052_);
v_res_1057_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2(v_00_u03b2_1049_, v_x_1050_, v_x_1339__boxed_1055_, v_x_1340__boxed_1056_, v_x_1053_, v_x_1054_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3(lean_object* v_00_u03b2_1058_, lean_object* v_n_1059_, lean_object* v_k_1060_, lean_object* v_v_1061_){
_start:
{
lean_object* v___x_1062_; 
v___x_1062_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3___redArg(v_n_1059_, v_k_1060_, v_v_1061_);
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_1063_, size_t v_depth_1064_, lean_object* v_keys_1065_, lean_object* v_vals_1066_, lean_object* v_heq_1067_, lean_object* v_i_1068_, lean_object* v_entries_1069_){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4___redArg(v_depth_1064_, v_keys_1065_, v_vals_1066_, v_i_1068_, v_entries_1069_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1071_, lean_object* v_depth_1072_, lean_object* v_keys_1073_, lean_object* v_vals_1074_, lean_object* v_heq_1075_, lean_object* v_i_1076_, lean_object* v_entries_1077_){
_start:
{
size_t v_depth_boxed_1078_; lean_object* v_res_1079_; 
v_depth_boxed_1078_ = lean_unbox_usize(v_depth_1072_);
lean_dec(v_depth_1072_);
v_res_1079_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__4(v_00_u03b2_1071_, v_depth_boxed_1078_, v_keys_1073_, v_vals_1074_, v_heq_1075_, v_i_1076_, v_entries_1077_);
lean_dec_ref(v_vals_1074_);
lean_dec_ref(v_keys_1073_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_1080_, lean_object* v_x_1081_, lean_object* v_x_1082_, lean_object* v_x_1083_, lean_object* v_x_1084_){
_start:
{
lean_object* v___x_1085_; 
v___x_1085_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_admit_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(v_x_1081_, v_x_1082_, v_x_1083_, v_x_1084_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_headBetaType(lean_object* v_mvarId_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_){
_start:
{
lean_object* v___x_1092_; 
lean_inc(v_mvarId_1086_);
v___x_1092_ = l_Lean_MVarId_getType(v_mvarId_1086_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
lean_inc(v_a_1093_);
lean_dec_ref_known(v___x_1092_, 1);
v___x_1094_ = l_Lean_Expr_headBeta(v_a_1093_);
v___x_1095_ = l_Lean_MVarId_setType___redArg(v_mvarId_1086_, v___x_1094_, v_a_1088_);
return v___x_1095_;
}
else
{
lean_object* v_a_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1103_; 
lean_dec(v_mvarId_1086_);
v_a_1096_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1103_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1098_ = v___x_1092_;
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_a_1096_);
lean_dec(v___x_1092_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v___x_1101_; 
if (v_isShared_1099_ == 0)
{
v___x_1101_ = v___x_1098_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v_a_1096_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_headBetaType___boxed(lean_object* v_mvarId_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = l_Lean_MVarId_headBetaType(v_mvarId_1104_, v_a_1105_, v_a_1106_, v_a_1107_, v_a_1108_);
lean_dec(v_a_1108_);
lean_dec_ref(v_a_1107_);
lean_dec(v_a_1106_);
lean_dec_ref(v_a_1105_);
return v_res_1110_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0___redArg(lean_object* v_a_1111_, lean_object* v_x_1112_){
_start:
{
if (lean_obj_tag(v_x_1112_) == 0)
{
uint8_t v___x_1113_; 
v___x_1113_ = 0;
return v___x_1113_;
}
else
{
lean_object* v_key_1114_; lean_object* v_tail_1115_; uint8_t v___x_1116_; 
v_key_1114_ = lean_ctor_get(v_x_1112_, 0);
v_tail_1115_ = lean_ctor_get(v_x_1112_, 2);
v___x_1116_ = l_Lean_instBEqFVarId_beq(v_key_1114_, v_a_1111_);
if (v___x_1116_ == 0)
{
v_x_1112_ = v_tail_1115_;
goto _start;
}
else
{
return v___x_1116_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0___redArg___boxed(lean_object* v_a_1118_, lean_object* v_x_1119_){
_start:
{
uint8_t v_res_1120_; lean_object* v_r_1121_; 
v_res_1120_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0___redArg(v_a_1118_, v_x_1119_);
lean_dec(v_x_1119_);
lean_dec(v_a_1118_);
v_r_1121_ = lean_box(v_res_1120_);
return v_r_1121_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__1___redArg(lean_object* v_a_1122_, lean_object* v_x_1123_){
_start:
{
if (lean_obj_tag(v_x_1123_) == 0)
{
return v_x_1123_;
}
else
{
lean_object* v_key_1124_; lean_object* v_value_1125_; lean_object* v_tail_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1135_; 
v_key_1124_ = lean_ctor_get(v_x_1123_, 0);
v_value_1125_ = lean_ctor_get(v_x_1123_, 1);
v_tail_1126_ = lean_ctor_get(v_x_1123_, 2);
v_isSharedCheck_1135_ = !lean_is_exclusive(v_x_1123_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1128_ = v_x_1123_;
v_isShared_1129_ = v_isSharedCheck_1135_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_tail_1126_);
lean_inc(v_value_1125_);
lean_inc(v_key_1124_);
lean_dec(v_x_1123_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1135_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
uint8_t v___x_1130_; 
v___x_1130_ = l_Lean_instBEqFVarId_beq(v_key_1124_, v_a_1122_);
if (v___x_1130_ == 0)
{
lean_object* v___x_1131_; lean_object* v___x_1133_; 
v___x_1131_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__1___redArg(v_a_1122_, v_tail_1126_);
if (v_isShared_1129_ == 0)
{
lean_ctor_set(v___x_1128_, 2, v___x_1131_);
v___x_1133_ = v___x_1128_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_key_1124_);
lean_ctor_set(v_reuseFailAlloc_1134_, 1, v_value_1125_);
lean_ctor_set(v_reuseFailAlloc_1134_, 2, v___x_1131_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
else
{
lean_del_object(v___x_1128_);
lean_dec(v_value_1125_);
lean_dec(v_key_1124_);
return v_tail_1126_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__1___redArg___boxed(lean_object* v_a_1136_, lean_object* v_x_1137_){
_start:
{
lean_object* v_res_1138_; 
v_res_1138_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__1___redArg(v_a_1136_, v_x_1137_);
lean_dec(v_a_1136_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0___redArg(lean_object* v_m_1139_, lean_object* v_a_1140_){
_start:
{
lean_object* v_size_1141_; lean_object* v_buckets_1142_; lean_object* v___x_1143_; uint64_t v___x_1144_; uint64_t v___x_1145_; uint64_t v___x_1146_; uint64_t v_fold_1147_; uint64_t v___x_1148_; uint64_t v___x_1149_; uint64_t v___x_1150_; size_t v___x_1151_; size_t v___x_1152_; size_t v___x_1153_; size_t v___x_1154_; size_t v___x_1155_; lean_object* v_bkt_1156_; uint8_t v___x_1157_; 
v_size_1141_ = lean_ctor_get(v_m_1139_, 0);
v_buckets_1142_ = lean_ctor_get(v_m_1139_, 1);
v___x_1143_ = lean_array_get_size(v_buckets_1142_);
v___x_1144_ = l_Lean_instHashableFVarId_hash(v_a_1140_);
v___x_1145_ = 32ULL;
v___x_1146_ = lean_uint64_shift_right(v___x_1144_, v___x_1145_);
v_fold_1147_ = lean_uint64_xor(v___x_1144_, v___x_1146_);
v___x_1148_ = 16ULL;
v___x_1149_ = lean_uint64_shift_right(v_fold_1147_, v___x_1148_);
v___x_1150_ = lean_uint64_xor(v_fold_1147_, v___x_1149_);
v___x_1151_ = lean_uint64_to_usize(v___x_1150_);
v___x_1152_ = lean_usize_of_nat(v___x_1143_);
v___x_1153_ = ((size_t)1ULL);
v___x_1154_ = lean_usize_sub(v___x_1152_, v___x_1153_);
v___x_1155_ = lean_usize_land(v___x_1151_, v___x_1154_);
v_bkt_1156_ = lean_array_uget_borrowed(v_buckets_1142_, v___x_1155_);
v___x_1157_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0___redArg(v_a_1140_, v_bkt_1156_);
if (v___x_1157_ == 0)
{
return v_m_1139_;
}
else
{
lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1170_; 
lean_inc(v_bkt_1156_);
lean_inc_ref(v_buckets_1142_);
lean_inc(v_size_1141_);
v_isSharedCheck_1170_ = !lean_is_exclusive(v_m_1139_);
if (v_isSharedCheck_1170_ == 0)
{
lean_object* v_unused_1171_; lean_object* v_unused_1172_; 
v_unused_1171_ = lean_ctor_get(v_m_1139_, 1);
lean_dec(v_unused_1171_);
v_unused_1172_ = lean_ctor_get(v_m_1139_, 0);
lean_dec(v_unused_1172_);
v___x_1159_ = v_m_1139_;
v_isShared_1160_ = v_isSharedCheck_1170_;
goto v_resetjp_1158_;
}
else
{
lean_dec(v_m_1139_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1170_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1161_; lean_object* v_buckets_x27_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1168_; 
v___x_1161_ = lean_box(0);
v_buckets_x27_1162_ = lean_array_uset(v_buckets_1142_, v___x_1155_, v___x_1161_);
v___x_1163_ = lean_unsigned_to_nat(1u);
v___x_1164_ = lean_nat_sub(v_size_1141_, v___x_1163_);
lean_dec(v_size_1141_);
v___x_1165_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__1___redArg(v_a_1140_, v_bkt_1156_);
v___x_1166_ = lean_array_uset(v_buckets_x27_1162_, v___x_1155_, v___x_1165_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 1, v___x_1166_);
lean_ctor_set(v___x_1159_, 0, v___x_1164_);
v___x_1168_ = v___x_1159_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v___x_1164_);
lean_ctor_set(v_reuseFailAlloc_1169_, 1, v___x_1166_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0___redArg___boxed(lean_object* v_m_1173_, lean_object* v_a_1174_){
_start:
{
lean_object* v_res_1175_; 
v_res_1175_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0___redArg(v_m_1173_, v_a_1174_);
lean_dec(v_a_1174_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__0(lean_object* v_e_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_){
_start:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1183_ = lean_st_ref_take(v___y_1177_);
v___x_1184_ = lean_box(0);
v___x_1185_ = l_Lean_Expr_fvarId_x21(v_e_1176_);
v___x_1186_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0___redArg(v___x_1183_, v___x_1185_);
lean_dec(v___x_1185_);
v___x_1187_ = lean_st_ref_put(v___y_1177_, v___x_1186_);
v___x_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1184_);
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__0___boxed(lean_object* v_e_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l_Lean_MVarId_getNondepPropHyps___lam__0(v_e_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec_ref(v_e_1189_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__1(lean_object* v_____r_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_){
_start:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1204_ = lean_st_ref_get(v___y_1198_);
v___x_1205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1205_, 0, v___x_1204_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__1___boxed(lean_object* v_____r_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l_Lean_MVarId_getNondepPropHyps___lam__1(v_____r_1206_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
lean_dec(v___y_1211_);
lean_dec_ref(v___y_1210_);
lean_dec(v___y_1209_);
lean_dec_ref(v___y_1208_);
lean_dec(v___y_1207_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__4___redArg(lean_object* v_e_1214_, lean_object* v_a_1215_){
_start:
{
lean_object* v___x_1217_; lean_object* v_visited_1218_; size_t v___x_1219_; size_t v___x_1220_; size_t v___x_1221_; lean_object* v___x_1222_; size_t v___x_1223_; uint8_t v___x_1224_; 
v___x_1217_ = lean_st_ref_get(v_a_1215_);
v_visited_1218_ = lean_ctor_get(v___x_1217_, 0);
lean_inc_ref(v_visited_1218_);
lean_dec(v___x_1217_);
v___x_1219_ = lean_ptr_addr(v_e_1214_);
v___x_1220_ = ((size_t)8191ULL);
v___x_1221_ = lean_usize_mod(v___x_1219_, v___x_1220_);
v___x_1222_ = lean_array_uget(v_visited_1218_, v___x_1221_);
lean_dec_ref(v_visited_1218_);
v___x_1223_ = lean_ptr_addr(v___x_1222_);
lean_dec(v___x_1222_);
v___x_1224_ = lean_usize_dec_eq(v___x_1223_, v___x_1219_);
if (v___x_1224_ == 0)
{
lean_object* v___x_1225_; lean_object* v_visited_1226_; lean_object* v_checked_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1238_; 
v___x_1225_ = lean_st_ref_take(v_a_1215_);
v_visited_1226_ = lean_ctor_get(v___x_1225_, 0);
v_checked_1227_ = lean_ctor_get(v___x_1225_, 1);
v_isSharedCheck_1238_ = !lean_is_exclusive(v___x_1225_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1229_ = v___x_1225_;
v_isShared_1230_ = v_isSharedCheck_1238_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_checked_1227_);
lean_inc(v_visited_1226_);
lean_dec(v___x_1225_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1238_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___x_1231_; lean_object* v___x_1233_; 
v___x_1231_ = lean_array_uset(v_visited_1226_, v___x_1221_, v_e_1214_);
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 0, v___x_1231_);
v___x_1233_ = v___x_1229_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v___x_1231_);
lean_ctor_set(v_reuseFailAlloc_1237_, 1, v_checked_1227_);
v___x_1233_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1234_ = lean_st_ref_put(v_a_1215_, v___x_1233_);
v___x_1235_ = lean_box(v___x_1224_);
v___x_1236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1236_, 0, v___x_1235_);
return v___x_1236_;
}
}
}
else
{
lean_object* v___x_1239_; lean_object* v___x_1240_; 
lean_dec_ref(v_e_1214_);
v___x_1239_ = lean_box(v___x_1224_);
v___x_1240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1239_);
return v___x_1240_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__4___redArg___boxed(lean_object* v_e_1241_, lean_object* v_a_1242_, lean_object* v___y_1243_){
_start:
{
lean_object* v_res_1244_; 
v_res_1244_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__4___redArg(v_e_1241_, v_a_1242_);
lean_dec(v_a_1242_);
return v_res_1244_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10_spec__16___redArg(lean_object* v_a_1245_, lean_object* v_x_1246_){
_start:
{
if (lean_obj_tag(v_x_1246_) == 0)
{
uint8_t v___x_1247_; 
v___x_1247_ = 0;
return v___x_1247_;
}
else
{
lean_object* v_key_1248_; lean_object* v_tail_1249_; uint8_t v___x_1250_; 
v_key_1248_ = lean_ctor_get(v_x_1246_, 0);
v_tail_1249_ = lean_ctor_get(v_x_1246_, 2);
v___x_1250_ = lean_expr_eqv(v_key_1248_, v_a_1245_);
if (v___x_1250_ == 0)
{
v_x_1246_ = v_tail_1249_;
goto _start;
}
else
{
return v___x_1250_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10_spec__16___redArg___boxed(lean_object* v_a_1252_, lean_object* v_x_1253_){
_start:
{
uint8_t v_res_1254_; lean_object* v_r_1255_; 
v_res_1254_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10_spec__16___redArg(v_a_1252_, v_x_1253_);
lean_dec(v_x_1253_);
lean_dec_ref(v_a_1252_);
v_r_1255_ = lean_box(v_res_1254_);
return v_r_1255_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11_spec__18_spec__26_spec__30___redArg(lean_object* v_x_1256_, lean_object* v_x_1257_){
_start:
{
if (lean_obj_tag(v_x_1257_) == 0)
{
return v_x_1256_;
}
else
{
lean_object* v_key_1258_; lean_object* v_value_1259_; lean_object* v_tail_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1283_; 
v_key_1258_ = lean_ctor_get(v_x_1257_, 0);
v_value_1259_ = lean_ctor_get(v_x_1257_, 1);
v_tail_1260_ = lean_ctor_get(v_x_1257_, 2);
v_isSharedCheck_1283_ = !lean_is_exclusive(v_x_1257_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1262_ = v_x_1257_;
v_isShared_1263_ = v_isSharedCheck_1283_;
goto v_resetjp_1261_;
}
else
{
lean_inc(v_tail_1260_);
lean_inc(v_value_1259_);
lean_inc(v_key_1258_);
lean_dec(v_x_1257_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1283_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v___x_1264_; uint64_t v___x_1265_; uint64_t v___x_1266_; uint64_t v___x_1267_; uint64_t v_fold_1268_; uint64_t v___x_1269_; uint64_t v___x_1270_; uint64_t v___x_1271_; size_t v___x_1272_; size_t v___x_1273_; size_t v___x_1274_; size_t v___x_1275_; size_t v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1279_; 
v___x_1264_ = lean_array_get_size(v_x_1256_);
v___x_1265_ = l_Lean_Expr_hash(v_key_1258_);
v___x_1266_ = 32ULL;
v___x_1267_ = lean_uint64_shift_right(v___x_1265_, v___x_1266_);
v_fold_1268_ = lean_uint64_xor(v___x_1265_, v___x_1267_);
v___x_1269_ = 16ULL;
v___x_1270_ = lean_uint64_shift_right(v_fold_1268_, v___x_1269_);
v___x_1271_ = lean_uint64_xor(v_fold_1268_, v___x_1270_);
v___x_1272_ = lean_uint64_to_usize(v___x_1271_);
v___x_1273_ = lean_usize_of_nat(v___x_1264_);
v___x_1274_ = ((size_t)1ULL);
v___x_1275_ = lean_usize_sub(v___x_1273_, v___x_1274_);
v___x_1276_ = lean_usize_land(v___x_1272_, v___x_1275_);
v___x_1277_ = lean_array_uget_borrowed(v_x_1256_, v___x_1276_);
lean_inc(v___x_1277_);
if (v_isShared_1263_ == 0)
{
lean_ctor_set(v___x_1262_, 2, v___x_1277_);
v___x_1279_ = v___x_1262_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_key_1258_);
lean_ctor_set(v_reuseFailAlloc_1282_, 1, v_value_1259_);
lean_ctor_set(v_reuseFailAlloc_1282_, 2, v___x_1277_);
v___x_1279_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
lean_object* v___x_1280_; 
v___x_1280_ = lean_array_uset(v_x_1256_, v___x_1276_, v___x_1279_);
v_x_1256_ = v___x_1280_;
v_x_1257_ = v_tail_1260_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11_spec__18_spec__26___redArg(lean_object* v_i_1284_, lean_object* v_source_1285_, lean_object* v_target_1286_){
_start:
{
lean_object* v___x_1287_; uint8_t v___x_1288_; 
v___x_1287_ = lean_array_get_size(v_source_1285_);
v___x_1288_ = lean_nat_dec_lt(v_i_1284_, v___x_1287_);
if (v___x_1288_ == 0)
{
lean_dec_ref(v_source_1285_);
lean_dec(v_i_1284_);
return v_target_1286_;
}
else
{
lean_object* v_es_1289_; lean_object* v___x_1290_; lean_object* v_source_1291_; lean_object* v_target_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; 
v_es_1289_ = lean_array_fget(v_source_1285_, v_i_1284_);
v___x_1290_ = lean_box(0);
v_source_1291_ = lean_array_fset(v_source_1285_, v_i_1284_, v___x_1290_);
v_target_1292_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11_spec__18_spec__26_spec__30___redArg(v_target_1286_, v_es_1289_);
v___x_1293_ = lean_unsigned_to_nat(1u);
v___x_1294_ = lean_nat_add(v_i_1284_, v___x_1293_);
lean_dec(v_i_1284_);
v_i_1284_ = v___x_1294_;
v_source_1285_ = v_source_1291_;
v_target_1286_ = v_target_1292_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11_spec__18___redArg(lean_object* v_data_1296_){
_start:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v_nbuckets_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1297_ = lean_array_get_size(v_data_1296_);
v___x_1298_ = lean_unsigned_to_nat(2u);
v_nbuckets_1299_ = lean_nat_mul(v___x_1297_, v___x_1298_);
v___x_1300_ = lean_unsigned_to_nat(0u);
v___x_1301_ = lean_box(0);
v___x_1302_ = lean_mk_array(v_nbuckets_1299_, v___x_1301_);
v___x_1303_ = lean_array_propagate_mark(v_data_1296_, v___x_1302_);
v___x_1304_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11_spec__18_spec__26___redArg(v___x_1300_, v_data_1296_, v___x_1303_);
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11___redArg(lean_object* v_m_1305_, lean_object* v_a_1306_, lean_object* v_b_1307_){
_start:
{
lean_object* v_size_1308_; lean_object* v_buckets_1309_; lean_object* v___x_1310_; uint64_t v___x_1311_; uint64_t v___x_1312_; uint64_t v___x_1313_; uint64_t v_fold_1314_; uint64_t v___x_1315_; uint64_t v___x_1316_; uint64_t v___x_1317_; size_t v___x_1318_; size_t v___x_1319_; size_t v___x_1320_; size_t v___x_1321_; size_t v___x_1322_; lean_object* v_bkt_1323_; uint8_t v___x_1324_; 
v_size_1308_ = lean_ctor_get(v_m_1305_, 0);
v_buckets_1309_ = lean_ctor_get(v_m_1305_, 1);
v___x_1310_ = lean_array_get_size(v_buckets_1309_);
v___x_1311_ = l_Lean_Expr_hash(v_a_1306_);
v___x_1312_ = 32ULL;
v___x_1313_ = lean_uint64_shift_right(v___x_1311_, v___x_1312_);
v_fold_1314_ = lean_uint64_xor(v___x_1311_, v___x_1313_);
v___x_1315_ = 16ULL;
v___x_1316_ = lean_uint64_shift_right(v_fold_1314_, v___x_1315_);
v___x_1317_ = lean_uint64_xor(v_fold_1314_, v___x_1316_);
v___x_1318_ = lean_uint64_to_usize(v___x_1317_);
v___x_1319_ = lean_usize_of_nat(v___x_1310_);
v___x_1320_ = ((size_t)1ULL);
v___x_1321_ = lean_usize_sub(v___x_1319_, v___x_1320_);
v___x_1322_ = lean_usize_land(v___x_1318_, v___x_1321_);
v_bkt_1323_ = lean_array_uget_borrowed(v_buckets_1309_, v___x_1322_);
v___x_1324_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10_spec__16___redArg(v_a_1306_, v_bkt_1323_);
if (v___x_1324_ == 0)
{
lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1345_; 
lean_inc_ref(v_buckets_1309_);
lean_inc(v_size_1308_);
v_isSharedCheck_1345_ = !lean_is_exclusive(v_m_1305_);
if (v_isSharedCheck_1345_ == 0)
{
lean_object* v_unused_1346_; lean_object* v_unused_1347_; 
v_unused_1346_ = lean_ctor_get(v_m_1305_, 1);
lean_dec(v_unused_1346_);
v_unused_1347_ = lean_ctor_get(v_m_1305_, 0);
lean_dec(v_unused_1347_);
v___x_1326_ = v_m_1305_;
v_isShared_1327_ = v_isSharedCheck_1345_;
goto v_resetjp_1325_;
}
else
{
lean_dec(v_m_1305_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1345_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1328_; lean_object* v_size_x27_1329_; lean_object* v___x_1330_; lean_object* v_buckets_x27_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; uint8_t v___x_1337_; 
v___x_1328_ = lean_unsigned_to_nat(1u);
v_size_x27_1329_ = lean_nat_add(v_size_1308_, v___x_1328_);
lean_dec(v_size_1308_);
lean_inc(v_bkt_1323_);
v___x_1330_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1330_, 0, v_a_1306_);
lean_ctor_set(v___x_1330_, 1, v_b_1307_);
lean_ctor_set(v___x_1330_, 2, v_bkt_1323_);
v_buckets_x27_1331_ = lean_array_uset(v_buckets_1309_, v___x_1322_, v___x_1330_);
v___x_1332_ = lean_unsigned_to_nat(4u);
v___x_1333_ = lean_nat_mul(v_size_x27_1329_, v___x_1332_);
v___x_1334_ = lean_unsigned_to_nat(3u);
v___x_1335_ = lean_nat_div(v___x_1333_, v___x_1334_);
lean_dec(v___x_1333_);
v___x_1336_ = lean_array_get_size(v_buckets_x27_1331_);
v___x_1337_ = lean_nat_dec_le(v___x_1335_, v___x_1336_);
lean_dec(v___x_1335_);
if (v___x_1337_ == 0)
{
lean_object* v_val_1338_; lean_object* v___x_1340_; 
v_val_1338_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11_spec__18___redArg(v_buckets_x27_1331_);
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 1, v_val_1338_);
lean_ctor_set(v___x_1326_, 0, v_size_x27_1329_);
v___x_1340_ = v___x_1326_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_size_x27_1329_);
lean_ctor_set(v_reuseFailAlloc_1341_, 1, v_val_1338_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
else
{
lean_object* v___x_1343_; 
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 1, v_buckets_x27_1331_);
lean_ctor_set(v___x_1326_, 0, v_size_x27_1329_);
v___x_1343_ = v___x_1326_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_size_x27_1329_);
lean_ctor_set(v_reuseFailAlloc_1344_, 1, v_buckets_x27_1331_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
return v___x_1343_;
}
}
}
}
else
{
lean_dec(v_b_1307_);
lean_dec_ref(v_a_1306_);
return v_m_1305_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10___redArg(lean_object* v_m_1348_, lean_object* v_a_1349_){
_start:
{
lean_object* v_buckets_1350_; lean_object* v___x_1351_; uint64_t v___x_1352_; uint64_t v___x_1353_; uint64_t v___x_1354_; uint64_t v_fold_1355_; uint64_t v___x_1356_; uint64_t v___x_1357_; uint64_t v___x_1358_; size_t v___x_1359_; size_t v___x_1360_; size_t v___x_1361_; size_t v___x_1362_; size_t v___x_1363_; lean_object* v___x_1364_; uint8_t v___x_1365_; 
v_buckets_1350_ = lean_ctor_get(v_m_1348_, 1);
v___x_1351_ = lean_array_get_size(v_buckets_1350_);
v___x_1352_ = l_Lean_Expr_hash(v_a_1349_);
v___x_1353_ = 32ULL;
v___x_1354_ = lean_uint64_shift_right(v___x_1352_, v___x_1353_);
v_fold_1355_ = lean_uint64_xor(v___x_1352_, v___x_1354_);
v___x_1356_ = 16ULL;
v___x_1357_ = lean_uint64_shift_right(v_fold_1355_, v___x_1356_);
v___x_1358_ = lean_uint64_xor(v_fold_1355_, v___x_1357_);
v___x_1359_ = lean_uint64_to_usize(v___x_1358_);
v___x_1360_ = lean_usize_of_nat(v___x_1351_);
v___x_1361_ = ((size_t)1ULL);
v___x_1362_ = lean_usize_sub(v___x_1360_, v___x_1361_);
v___x_1363_ = lean_usize_land(v___x_1359_, v___x_1362_);
v___x_1364_ = lean_array_uget_borrowed(v_buckets_1350_, v___x_1363_);
v___x_1365_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10_spec__16___redArg(v_a_1349_, v___x_1364_);
return v___x_1365_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10___redArg___boxed(lean_object* v_m_1366_, lean_object* v_a_1367_){
_start:
{
uint8_t v_res_1368_; lean_object* v_r_1369_; 
v_res_1368_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10___redArg(v_m_1366_, v_a_1367_);
lean_dec_ref(v_a_1367_);
lean_dec_ref(v_m_1366_);
v_r_1369_ = lean_box(v_res_1368_);
return v_r_1369_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5___redArg(lean_object* v_e_1370_, lean_object* v_a_1371_){
_start:
{
lean_object* v___x_1373_; lean_object* v_checked_1374_; uint8_t v___x_1375_; 
v___x_1373_ = lean_st_ref_get(v_a_1371_);
v_checked_1374_ = lean_ctor_get(v___x_1373_, 1);
lean_inc_ref(v_checked_1374_);
lean_dec(v___x_1373_);
v___x_1375_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10___redArg(v_checked_1374_, v_e_1370_);
lean_dec_ref(v_checked_1374_);
if (v___x_1375_ == 0)
{
lean_object* v___x_1376_; lean_object* v_visited_1377_; lean_object* v_checked_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1390_; 
v___x_1376_ = lean_st_ref_take(v_a_1371_);
v_visited_1377_ = lean_ctor_get(v___x_1376_, 0);
v_checked_1378_ = lean_ctor_get(v___x_1376_, 1);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1376_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1380_ = v___x_1376_;
v_isShared_1381_ = v_isSharedCheck_1390_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_checked_1378_);
lean_inc(v_visited_1377_);
lean_dec(v___x_1376_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1390_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1385_; 
v___x_1382_ = lean_box(0);
v___x_1383_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11___redArg(v_checked_1378_, v_e_1370_, v___x_1382_);
if (v_isShared_1381_ == 0)
{
lean_ctor_set(v___x_1380_, 1, v___x_1383_);
v___x_1385_ = v___x_1380_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_visited_1377_);
lean_ctor_set(v_reuseFailAlloc_1389_, 1, v___x_1383_);
v___x_1385_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; 
v___x_1386_ = lean_st_ref_put(v_a_1371_, v___x_1385_);
v___x_1387_ = lean_box(v___x_1375_);
v___x_1388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1387_);
return v___x_1388_;
}
}
}
else
{
lean_object* v___x_1391_; lean_object* v___x_1392_; 
lean_dec_ref(v_e_1370_);
v___x_1391_ = lean_box(v___x_1375_);
v___x_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1391_);
return v___x_1392_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_e_1393_, lean_object* v_a_1394_, lean_object* v___y_1395_){
_start:
{
lean_object* v_res_1396_; 
v_res_1396_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5___redArg(v_e_1393_, v_a_1394_);
lean_dec(v_a_1394_);
return v_res_1396_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3(lean_object* v_p_1397_, lean_object* v_f_1398_, uint8_t v_stopWhenVisited_1399_, lean_object* v_e_1400_, lean_object* v_a_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_){
_start:
{
lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___y_1414_; lean_object* v___y_1415_; lean_object* v___y_1416_; lean_object* v_d_1417_; lean_object* v_b_1418_; lean_object* v___y_1419_; lean_object* v___y_1423_; lean_object* v___y_1424_; lean_object* v___y_1425_; lean_object* v___y_1426_; lean_object* v___y_1427_; lean_object* v___y_1428_; lean_object* v___x_1449_; 
lean_inc_ref(v_e_1400_);
v___x_1449_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__4___redArg(v_e_1400_, v_a_1401_);
if (lean_obj_tag(v___x_1449_) == 0)
{
lean_object* v_a_1450_; uint8_t v___x_1451_; 
v_a_1450_ = lean_ctor_get(v___x_1449_, 0);
lean_inc(v_a_1450_);
lean_dec_ref_known(v___x_1449_, 1);
v___x_1451_ = lean_unbox(v_a_1450_);
lean_dec(v_a_1450_);
if (v___x_1451_ == 0)
{
lean_object* v___x_1452_; uint8_t v___x_1453_; 
lean_inc_ref(v_p_1397_);
lean_inc_ref(v_e_1400_);
v___x_1452_ = lean_apply_1(v_p_1397_, v_e_1400_);
v___x_1453_ = lean_unbox(v___x_1452_);
if (v___x_1453_ == 0)
{
v___y_1423_ = v_a_1401_;
v___y_1424_ = v___y_1402_;
v___y_1425_ = v___y_1403_;
v___y_1426_ = v___y_1404_;
v___y_1427_ = v___y_1405_;
v___y_1428_ = v___y_1406_;
goto v___jp_1422_;
}
else
{
lean_object* v___x_1454_; 
lean_inc_ref(v_e_1400_);
v___x_1454_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5___redArg(v_e_1400_, v_a_1401_);
if (lean_obj_tag(v___x_1454_) == 0)
{
lean_object* v_a_1455_; uint8_t v___x_1456_; 
v_a_1455_ = lean_ctor_get(v___x_1454_, 0);
lean_inc(v_a_1455_);
lean_dec_ref_known(v___x_1454_, 1);
v___x_1456_ = lean_unbox(v_a_1455_);
lean_dec(v_a_1455_);
if (v___x_1456_ == 0)
{
lean_object* v___x_1457_; 
lean_inc_ref(v_f_1398_);
lean_inc(v___y_1406_);
lean_inc_ref(v___y_1405_);
lean_inc(v___y_1404_);
lean_inc_ref(v___y_1403_);
lean_inc(v___y_1402_);
lean_inc_ref(v_e_1400_);
v___x_1457_ = lean_apply_7(v_f_1398_, v_e_1400_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, lean_box(0));
if (lean_obj_tag(v___x_1457_) == 0)
{
lean_dec_ref_known(v___x_1457_, 1);
if (v_stopWhenVisited_1399_ == 0)
{
v___y_1423_ = v_a_1401_;
v___y_1424_ = v___y_1402_;
v___y_1425_ = v___y_1403_;
v___y_1426_ = v___y_1404_;
v___y_1427_ = v___y_1405_;
v___y_1428_ = v___y_1406_;
goto v___jp_1422_;
}
else
{
lean_dec_ref(v_e_1400_);
lean_dec_ref(v_f_1398_);
lean_dec_ref(v_p_1397_);
goto v___jp_1408_;
}
}
else
{
lean_dec_ref(v_e_1400_);
lean_dec_ref(v_f_1398_);
lean_dec_ref(v_p_1397_);
return v___x_1457_;
}
}
else
{
v___y_1423_ = v_a_1401_;
v___y_1424_ = v___y_1402_;
v___y_1425_ = v___y_1403_;
v___y_1426_ = v___y_1404_;
v___y_1427_ = v___y_1405_;
v___y_1428_ = v___y_1406_;
goto v___jp_1422_;
}
}
else
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1465_; 
lean_dec_ref(v_e_1400_);
lean_dec_ref(v_f_1398_);
lean_dec_ref(v_p_1397_);
v_a_1458_ = lean_ctor_get(v___x_1454_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1454_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1460_ = v___x_1454_;
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1454_);
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
}
else
{
lean_dec_ref(v_e_1400_);
lean_dec_ref(v_f_1398_);
lean_dec_ref(v_p_1397_);
goto v___jp_1408_;
}
}
else
{
lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1473_; 
lean_dec_ref(v_e_1400_);
lean_dec_ref(v_f_1398_);
lean_dec_ref(v_p_1397_);
v_a_1466_ = lean_ctor_get(v___x_1449_, 0);
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1449_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1468_ = v___x_1449_;
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v___x_1449_);
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
v___jp_1408_:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1409_ = lean_box(0);
v___x_1410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1409_);
return v___x_1410_;
}
v___jp_1411_:
{
lean_object* v___x_1420_; 
lean_inc_ref(v_f_1398_);
lean_inc_ref(v_p_1397_);
v___x_1420_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3(v_p_1397_, v_f_1398_, v_stopWhenVisited_1399_, v_d_1417_, v___y_1419_, v___y_1416_, v___y_1415_, v___y_1413_, v___y_1412_, v___y_1414_);
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_dec_ref_known(v___x_1420_, 1);
v_e_1400_ = v_b_1418_;
v_a_1401_ = v___y_1419_;
v___y_1402_ = v___y_1416_;
v___y_1403_ = v___y_1415_;
v___y_1404_ = v___y_1413_;
v___y_1405_ = v___y_1412_;
v___y_1406_ = v___y_1414_;
goto _start;
}
else
{
lean_dec_ref(v_b_1418_);
lean_dec_ref(v_f_1398_);
lean_dec_ref(v_p_1397_);
return v___x_1420_;
}
}
v___jp_1422_:
{
switch(lean_obj_tag(v_e_1400_))
{
case 7:
{
lean_object* v_binderType_1429_; lean_object* v_body_1430_; 
v_binderType_1429_ = lean_ctor_get(v_e_1400_, 1);
lean_inc_ref(v_binderType_1429_);
v_body_1430_ = lean_ctor_get(v_e_1400_, 2);
lean_inc_ref(v_body_1430_);
lean_dec_ref_known(v_e_1400_, 3);
v___y_1412_ = v___y_1427_;
v___y_1413_ = v___y_1426_;
v___y_1414_ = v___y_1428_;
v___y_1415_ = v___y_1425_;
v___y_1416_ = v___y_1424_;
v_d_1417_ = v_binderType_1429_;
v_b_1418_ = v_body_1430_;
v___y_1419_ = v___y_1423_;
goto v___jp_1411_;
}
case 6:
{
lean_object* v_binderType_1431_; lean_object* v_body_1432_; 
v_binderType_1431_ = lean_ctor_get(v_e_1400_, 1);
lean_inc_ref(v_binderType_1431_);
v_body_1432_ = lean_ctor_get(v_e_1400_, 2);
lean_inc_ref(v_body_1432_);
lean_dec_ref_known(v_e_1400_, 3);
v___y_1412_ = v___y_1427_;
v___y_1413_ = v___y_1426_;
v___y_1414_ = v___y_1428_;
v___y_1415_ = v___y_1425_;
v___y_1416_ = v___y_1424_;
v_d_1417_ = v_binderType_1431_;
v_b_1418_ = v_body_1432_;
v___y_1419_ = v___y_1423_;
goto v___jp_1411_;
}
case 8:
{
lean_object* v_type_1433_; lean_object* v_value_1434_; lean_object* v_body_1435_; lean_object* v___x_1436_; 
v_type_1433_ = lean_ctor_get(v_e_1400_, 1);
lean_inc_ref(v_type_1433_);
v_value_1434_ = lean_ctor_get(v_e_1400_, 2);
lean_inc_ref(v_value_1434_);
v_body_1435_ = lean_ctor_get(v_e_1400_, 3);
lean_inc_ref(v_body_1435_);
lean_dec_ref_known(v_e_1400_, 4);
lean_inc_ref(v_f_1398_);
lean_inc_ref(v_p_1397_);
v___x_1436_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3(v_p_1397_, v_f_1398_, v_stopWhenVisited_1399_, v_type_1433_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_);
if (lean_obj_tag(v___x_1436_) == 0)
{
lean_object* v___x_1437_; 
lean_dec_ref_known(v___x_1436_, 1);
lean_inc_ref(v_f_1398_);
lean_inc_ref(v_p_1397_);
v___x_1437_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3(v_p_1397_, v_f_1398_, v_stopWhenVisited_1399_, v_value_1434_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_);
if (lean_obj_tag(v___x_1437_) == 0)
{
lean_dec_ref_known(v___x_1437_, 1);
v_e_1400_ = v_body_1435_;
v_a_1401_ = v___y_1423_;
v___y_1402_ = v___y_1424_;
v___y_1403_ = v___y_1425_;
v___y_1404_ = v___y_1426_;
v___y_1405_ = v___y_1427_;
v___y_1406_ = v___y_1428_;
goto _start;
}
else
{
lean_dec_ref(v_body_1435_);
lean_dec_ref(v_f_1398_);
lean_dec_ref(v_p_1397_);
return v___x_1437_;
}
}
else
{
lean_dec_ref(v_body_1435_);
lean_dec_ref(v_value_1434_);
lean_dec_ref(v_f_1398_);
lean_dec_ref(v_p_1397_);
return v___x_1436_;
}
}
case 5:
{
lean_object* v_fn_1439_; lean_object* v_arg_1440_; lean_object* v___x_1441_; 
v_fn_1439_ = lean_ctor_get(v_e_1400_, 0);
lean_inc_ref(v_fn_1439_);
v_arg_1440_ = lean_ctor_get(v_e_1400_, 1);
lean_inc_ref(v_arg_1440_);
lean_dec_ref_known(v_e_1400_, 2);
lean_inc_ref(v_f_1398_);
lean_inc_ref(v_p_1397_);
v___x_1441_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3(v_p_1397_, v_f_1398_, v_stopWhenVisited_1399_, v_fn_1439_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_);
if (lean_obj_tag(v___x_1441_) == 0)
{
lean_dec_ref_known(v___x_1441_, 1);
v_e_1400_ = v_arg_1440_;
v_a_1401_ = v___y_1423_;
v___y_1402_ = v___y_1424_;
v___y_1403_ = v___y_1425_;
v___y_1404_ = v___y_1426_;
v___y_1405_ = v___y_1427_;
v___y_1406_ = v___y_1428_;
goto _start;
}
else
{
lean_dec_ref(v_arg_1440_);
lean_dec_ref(v_f_1398_);
lean_dec_ref(v_p_1397_);
return v___x_1441_;
}
}
case 10:
{
lean_object* v_expr_1443_; 
v_expr_1443_ = lean_ctor_get(v_e_1400_, 1);
lean_inc_ref(v_expr_1443_);
lean_dec_ref_known(v_e_1400_, 2);
v_e_1400_ = v_expr_1443_;
v_a_1401_ = v___y_1423_;
v___y_1402_ = v___y_1424_;
v___y_1403_ = v___y_1425_;
v___y_1404_ = v___y_1426_;
v___y_1405_ = v___y_1427_;
v___y_1406_ = v___y_1428_;
goto _start;
}
case 11:
{
lean_object* v_struct_1445_; 
v_struct_1445_ = lean_ctor_get(v_e_1400_, 2);
lean_inc_ref(v_struct_1445_);
lean_dec_ref_known(v_e_1400_, 3);
v_e_1400_ = v_struct_1445_;
v_a_1401_ = v___y_1423_;
v___y_1402_ = v___y_1424_;
v___y_1403_ = v___y_1425_;
v___y_1404_ = v___y_1426_;
v___y_1405_ = v___y_1427_;
v___y_1406_ = v___y_1428_;
goto _start;
}
default: 
{
lean_object* v___x_1447_; lean_object* v___x_1448_; 
lean_dec_ref(v_e_1400_);
lean_dec_ref(v_f_1398_);
lean_dec_ref(v_p_1397_);
v___x_1447_ = lean_box(0);
v___x_1448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1448_, 0, v___x_1447_);
return v___x_1448_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3___boxed(lean_object* v_p_1474_, lean_object* v_f_1475_, lean_object* v_stopWhenVisited_1476_, lean_object* v_e_1477_, lean_object* v_a_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_){
_start:
{
uint8_t v_stopWhenVisited_boxed_1485_; lean_object* v_res_1486_; 
v_stopWhenVisited_boxed_1485_ = lean_unbox(v_stopWhenVisited_1476_);
v_res_1486_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3(v_p_1474_, v_f_1475_, v_stopWhenVisited_boxed_1485_, v_e_1477_, v_a_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_);
lean_dec(v___y_1483_);
lean_dec_ref(v___y_1482_);
lean_dec(v___y_1481_);
lean_dec_ref(v___y_1480_);
lean_dec(v___y_1479_);
lean_dec(v_a_1478_);
return v_res_1486_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1(lean_object* v_p_1487_, lean_object* v_f_1488_, lean_object* v_e_1489_, uint8_t v_stopWhenVisited_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_){
_start:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1497_ = l_Lean_ForEachExprWhere_initCache;
v___x_1498_ = lean_st_mk_ref(v___x_1497_);
v___x_1499_ = l___private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3(v_p_1487_, v_f_1488_, v_stopWhenVisited_1490_, v_e_1489_, v___x_1498_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_);
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_object* v_a_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1508_; 
v_a_1500_ = lean_ctor_get(v___x_1499_, 0);
v_isSharedCheck_1508_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1502_ = v___x_1499_;
v_isShared_1503_ = v_isSharedCheck_1508_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_a_1500_);
lean_dec(v___x_1499_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1508_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v___x_1504_; lean_object* v___x_1506_; 
v___x_1504_ = lean_st_ref_get(v___x_1498_);
lean_dec(v___x_1498_);
lean_dec(v___x_1504_);
if (v_isShared_1503_ == 0)
{
v___x_1506_ = v___x_1502_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v_a_1500_);
v___x_1506_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
return v___x_1506_;
}
}
}
else
{
lean_dec(v___x_1498_);
return v___x_1499_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1___boxed(lean_object* v_p_1509_, lean_object* v_f_1510_, lean_object* v_e_1511_, lean_object* v_stopWhenVisited_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_){
_start:
{
uint8_t v_stopWhenVisited_boxed_1519_; lean_object* v_res_1520_; 
v_stopWhenVisited_boxed_1519_ = lean_unbox(v_stopWhenVisited_1512_);
v_res_1520_ = l_Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1(v_p_1509_, v_f_1510_, v_e_1511_, v_stopWhenVisited_boxed_1519_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_);
lean_dec(v___y_1517_);
lean_dec_ref(v___y_1516_);
lean_dec(v___y_1515_);
lean_dec_ref(v___y_1514_);
lean_dec(v___y_1513_);
return v_res_1520_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__2(lean_object* v___f_1522_, lean_object* v___f_1523_, uint8_t v___x_1524_, lean_object* v_e_1525_, lean_object* v_candidates_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_){
_start:
{
lean_object* v___x_1532_; 
v___x_1532_ = l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___redArg(v_e_1525_, v___y_1528_);
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v_a_1533_; uint8_t v___x_1534_; lean_object* v___x_1535_; lean_object* v___y_1537_; 
v_a_1533_ = lean_ctor_get(v___x_1532_, 0);
lean_inc(v_a_1533_);
lean_dec_ref_known(v___x_1532_, 1);
v___x_1534_ = l_Lean_Expr_hasFVar(v_a_1533_);
v___x_1535_ = lean_st_mk_ref(v_candidates_1526_);
if (v___x_1534_ == 0)
{
lean_object* v___x_1547_; lean_object* v___x_1548_; 
lean_dec(v_a_1533_);
lean_dec_ref(v___f_1523_);
v___x_1547_ = lean_box(0);
lean_inc(v___y_1530_);
lean_inc_ref(v___y_1529_);
lean_inc(v___y_1528_);
lean_inc_ref(v___y_1527_);
lean_inc(v___x_1535_);
v___x_1548_ = lean_apply_7(v___f_1522_, v___x_1547_, v___x_1535_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, lean_box(0));
v___y_1537_ = v___x_1548_;
goto v___jp_1536_;
}
else
{
lean_object* v___x_1549_; lean_object* v___x_1550_; 
v___x_1549_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__2___closed__0));
v___x_1550_ = l_Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1(v___x_1549_, v___f_1523_, v_a_1533_, v___x_1524_, v___x_1535_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_);
if (lean_obj_tag(v___x_1550_) == 0)
{
lean_object* v_a_1551_; lean_object* v___x_1552_; 
v_a_1551_ = lean_ctor_get(v___x_1550_, 0);
lean_inc(v_a_1551_);
lean_dec_ref_known(v___x_1550_, 1);
lean_inc(v___y_1530_);
lean_inc_ref(v___y_1529_);
lean_inc(v___y_1528_);
lean_inc_ref(v___y_1527_);
lean_inc(v___x_1535_);
v___x_1552_ = lean_apply_7(v___f_1522_, v_a_1551_, v___x_1535_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, lean_box(0));
v___y_1537_ = v___x_1552_;
goto v___jp_1536_;
}
else
{
lean_object* v_a_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1560_; 
lean_dec(v___x_1535_);
lean_dec_ref(v___f_1522_);
v_a_1553_ = lean_ctor_get(v___x_1550_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1550_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1555_ = v___x_1550_;
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_a_1553_);
lean_dec(v___x_1550_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1558_; 
if (v_isShared_1556_ == 0)
{
v___x_1558_ = v___x_1555_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v_a_1553_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
}
}
v___jp_1536_:
{
if (lean_obj_tag(v___y_1537_) == 0)
{
lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1546_; 
v_a_1538_ = lean_ctor_get(v___y_1537_, 0);
v_isSharedCheck_1546_ = !lean_is_exclusive(v___y_1537_);
if (v_isSharedCheck_1546_ == 0)
{
v___x_1540_ = v___y_1537_;
v_isShared_1541_ = v_isSharedCheck_1546_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v___y_1537_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1546_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1542_; lean_object* v___x_1544_; 
v___x_1542_ = lean_st_ref_get(v___x_1535_);
lean_dec(v___x_1535_);
lean_dec(v___x_1542_);
if (v_isShared_1541_ == 0)
{
v___x_1544_ = v___x_1540_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v_a_1538_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
return v___x_1544_;
}
}
}
else
{
lean_dec(v___x_1535_);
return v___y_1537_;
}
}
}
else
{
lean_object* v_a_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1568_; 
lean_dec_ref(v_candidates_1526_);
lean_dec_ref(v___f_1523_);
lean_dec_ref(v___f_1522_);
v_a_1561_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1568_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1563_ = v___x_1532_;
v_isShared_1564_ = v_isSharedCheck_1568_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_a_1561_);
lean_dec(v___x_1532_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__2___boxed(lean_object* v___f_1569_, lean_object* v___f_1570_, lean_object* v___x_1571_, lean_object* v_e_1572_, lean_object* v_candidates_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_){
_start:
{
uint8_t v___x_17223__boxed_1579_; lean_object* v_res_1580_; 
v___x_17223__boxed_1579_ = lean_unbox(v___x_1571_);
v_res_1580_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__2(v___f_1569_, v___f_1570_, v___x_17223__boxed_1579_, v_e_1572_, v_candidates_1573_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
lean_dec(v___y_1575_);
lean_dec_ref(v___y_1574_);
return v_res_1580_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__0(lean_object* v_____r_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_){
_start:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; 
v___x_1588_ = lean_st_ref_get(v___y_1582_);
v___x_1589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1588_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__0___boxed(lean_object* v_____r_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_){
_start:
{
lean_object* v_res_1597_; 
v_res_1597_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__0(v_____r_1590_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_);
lean_dec(v___y_1595_);
lean_dec_ref(v___y_1594_);
lean_dec(v___y_1593_);
lean_dec_ref(v___y_1592_);
lean_dec(v___y_1591_);
return v_res_1597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__1(lean_object* v_e_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_){
_start:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1605_ = lean_st_ref_take(v___y_1599_);
v___x_1606_ = lean_box(0);
v___x_1607_ = l_Lean_Expr_fvarId_x21(v_e_1598_);
v___x_1608_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0___redArg(v___x_1605_, v___x_1607_);
lean_dec(v___x_1607_);
v___x_1609_ = lean_st_ref_put(v___y_1599_, v___x_1608_);
v___x_1610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1606_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__1___boxed(lean_object* v_e_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_){
_start:
{
lean_object* v_res_1618_; 
v_res_1618_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__1(v_e_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_);
lean_dec(v___y_1616_);
lean_dec_ref(v___y_1615_);
lean_dec(v___y_1614_);
lean_dec_ref(v___y_1613_);
lean_dec(v___y_1612_);
lean_dec_ref(v_e_1611_);
return v_res_1618_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__8_spec__14___redArg(lean_object* v_x_1619_, lean_object* v_x_1620_){
_start:
{
if (lean_obj_tag(v_x_1620_) == 0)
{
return v_x_1619_;
}
else
{
lean_object* v_key_1621_; lean_object* v_value_1622_; lean_object* v_tail_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1646_; 
v_key_1621_ = lean_ctor_get(v_x_1620_, 0);
v_value_1622_ = lean_ctor_get(v_x_1620_, 1);
v_tail_1623_ = lean_ctor_get(v_x_1620_, 2);
v_isSharedCheck_1646_ = !lean_is_exclusive(v_x_1620_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1625_ = v_x_1620_;
v_isShared_1626_ = v_isSharedCheck_1646_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_tail_1623_);
lean_inc(v_value_1622_);
lean_inc(v_key_1621_);
lean_dec(v_x_1620_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1646_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v___x_1627_; uint64_t v___x_1628_; uint64_t v___x_1629_; uint64_t v___x_1630_; uint64_t v_fold_1631_; uint64_t v___x_1632_; uint64_t v___x_1633_; uint64_t v___x_1634_; size_t v___x_1635_; size_t v___x_1636_; size_t v___x_1637_; size_t v___x_1638_; size_t v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1642_; 
v___x_1627_ = lean_array_get_size(v_x_1619_);
v___x_1628_ = l_Lean_instHashableFVarId_hash(v_key_1621_);
v___x_1629_ = 32ULL;
v___x_1630_ = lean_uint64_shift_right(v___x_1628_, v___x_1629_);
v_fold_1631_ = lean_uint64_xor(v___x_1628_, v___x_1630_);
v___x_1632_ = 16ULL;
v___x_1633_ = lean_uint64_shift_right(v_fold_1631_, v___x_1632_);
v___x_1634_ = lean_uint64_xor(v_fold_1631_, v___x_1633_);
v___x_1635_ = lean_uint64_to_usize(v___x_1634_);
v___x_1636_ = lean_usize_of_nat(v___x_1627_);
v___x_1637_ = ((size_t)1ULL);
v___x_1638_ = lean_usize_sub(v___x_1636_, v___x_1637_);
v___x_1639_ = lean_usize_land(v___x_1635_, v___x_1638_);
v___x_1640_ = lean_array_uget_borrowed(v_x_1619_, v___x_1639_);
lean_inc(v___x_1640_);
if (v_isShared_1626_ == 0)
{
lean_ctor_set(v___x_1625_, 2, v___x_1640_);
v___x_1642_ = v___x_1625_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v_key_1621_);
lean_ctor_set(v_reuseFailAlloc_1645_, 1, v_value_1622_);
lean_ctor_set(v_reuseFailAlloc_1645_, 2, v___x_1640_);
v___x_1642_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
lean_object* v___x_1643_; 
v___x_1643_ = lean_array_uset(v_x_1619_, v___x_1639_, v___x_1642_);
v_x_1619_ = v___x_1643_;
v_x_1620_ = v_tail_1623_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__8___redArg(lean_object* v_i_1647_, lean_object* v_source_1648_, lean_object* v_target_1649_){
_start:
{
lean_object* v___x_1650_; uint8_t v___x_1651_; 
v___x_1650_ = lean_array_get_size(v_source_1648_);
v___x_1651_ = lean_nat_dec_lt(v_i_1647_, v___x_1650_);
if (v___x_1651_ == 0)
{
lean_dec_ref(v_source_1648_);
lean_dec(v_i_1647_);
return v_target_1649_;
}
else
{
lean_object* v_es_1652_; lean_object* v___x_1653_; lean_object* v_source_1654_; lean_object* v_target_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v_es_1652_ = lean_array_fget(v_source_1648_, v_i_1647_);
v___x_1653_ = lean_box(0);
v_source_1654_ = lean_array_fset(v_source_1648_, v_i_1647_, v___x_1653_);
v_target_1655_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__8_spec__14___redArg(v_target_1649_, v_es_1652_);
v___x_1656_ = lean_unsigned_to_nat(1u);
v___x_1657_ = lean_nat_add(v_i_1647_, v___x_1656_);
lean_dec(v_i_1647_);
v_i_1647_ = v___x_1657_;
v_source_1648_ = v_source_1654_;
v_target_1649_ = v_target_1655_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5___redArg(lean_object* v_data_1659_){
_start:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v_nbuckets_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
v___x_1660_ = lean_array_get_size(v_data_1659_);
v___x_1661_ = lean_unsigned_to_nat(2u);
v_nbuckets_1662_ = lean_nat_mul(v___x_1660_, v___x_1661_);
v___x_1663_ = lean_unsigned_to_nat(0u);
v___x_1664_ = lean_box(0);
v___x_1665_ = lean_mk_array(v_nbuckets_1662_, v___x_1664_);
v___x_1666_ = lean_array_propagate_mark(v_data_1659_, v___x_1665_);
v___x_1667_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__8___redArg(v___x_1663_, v_data_1659_, v___x_1666_);
return v___x_1667_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2___redArg(lean_object* v_m_1668_, lean_object* v_a_1669_, lean_object* v_b_1670_){
_start:
{
lean_object* v_size_1671_; lean_object* v_buckets_1672_; lean_object* v___x_1673_; uint64_t v___x_1674_; uint64_t v___x_1675_; uint64_t v___x_1676_; uint64_t v_fold_1677_; uint64_t v___x_1678_; uint64_t v___x_1679_; uint64_t v___x_1680_; size_t v___x_1681_; size_t v___x_1682_; size_t v___x_1683_; size_t v___x_1684_; size_t v___x_1685_; lean_object* v_bkt_1686_; uint8_t v___x_1687_; 
v_size_1671_ = lean_ctor_get(v_m_1668_, 0);
v_buckets_1672_ = lean_ctor_get(v_m_1668_, 1);
v___x_1673_ = lean_array_get_size(v_buckets_1672_);
v___x_1674_ = l_Lean_instHashableFVarId_hash(v_a_1669_);
v___x_1675_ = 32ULL;
v___x_1676_ = lean_uint64_shift_right(v___x_1674_, v___x_1675_);
v_fold_1677_ = lean_uint64_xor(v___x_1674_, v___x_1676_);
v___x_1678_ = 16ULL;
v___x_1679_ = lean_uint64_shift_right(v_fold_1677_, v___x_1678_);
v___x_1680_ = lean_uint64_xor(v_fold_1677_, v___x_1679_);
v___x_1681_ = lean_uint64_to_usize(v___x_1680_);
v___x_1682_ = lean_usize_of_nat(v___x_1673_);
v___x_1683_ = ((size_t)1ULL);
v___x_1684_ = lean_usize_sub(v___x_1682_, v___x_1683_);
v___x_1685_ = lean_usize_land(v___x_1681_, v___x_1684_);
v_bkt_1686_ = lean_array_uget_borrowed(v_buckets_1672_, v___x_1685_);
v___x_1687_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0___redArg(v_a_1669_, v_bkt_1686_);
if (v___x_1687_ == 0)
{
lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1708_; 
lean_inc_ref(v_buckets_1672_);
lean_inc(v_size_1671_);
v_isSharedCheck_1708_ = !lean_is_exclusive(v_m_1668_);
if (v_isSharedCheck_1708_ == 0)
{
lean_object* v_unused_1709_; lean_object* v_unused_1710_; 
v_unused_1709_ = lean_ctor_get(v_m_1668_, 1);
lean_dec(v_unused_1709_);
v_unused_1710_ = lean_ctor_get(v_m_1668_, 0);
lean_dec(v_unused_1710_);
v___x_1689_ = v_m_1668_;
v_isShared_1690_ = v_isSharedCheck_1708_;
goto v_resetjp_1688_;
}
else
{
lean_dec(v_m_1668_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1708_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
lean_object* v___x_1691_; lean_object* v_size_x27_1692_; lean_object* v___x_1693_; lean_object* v_buckets_x27_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; uint8_t v___x_1700_; 
v___x_1691_ = lean_unsigned_to_nat(1u);
v_size_x27_1692_ = lean_nat_add(v_size_1671_, v___x_1691_);
lean_dec(v_size_1671_);
lean_inc(v_bkt_1686_);
v___x_1693_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1693_, 0, v_a_1669_);
lean_ctor_set(v___x_1693_, 1, v_b_1670_);
lean_ctor_set(v___x_1693_, 2, v_bkt_1686_);
v_buckets_x27_1694_ = lean_array_uset(v_buckets_1672_, v___x_1685_, v___x_1693_);
v___x_1695_ = lean_unsigned_to_nat(4u);
v___x_1696_ = lean_nat_mul(v_size_x27_1692_, v___x_1695_);
v___x_1697_ = lean_unsigned_to_nat(3u);
v___x_1698_ = lean_nat_div(v___x_1696_, v___x_1697_);
lean_dec(v___x_1696_);
v___x_1699_ = lean_array_get_size(v_buckets_x27_1694_);
v___x_1700_ = lean_nat_dec_le(v___x_1698_, v___x_1699_);
lean_dec(v___x_1698_);
if (v___x_1700_ == 0)
{
lean_object* v_val_1701_; lean_object* v___x_1703_; 
v_val_1701_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5___redArg(v_buckets_x27_1694_);
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 1, v_val_1701_);
lean_ctor_set(v___x_1689_, 0, v_size_x27_1692_);
v___x_1703_ = v___x_1689_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v_size_x27_1692_);
lean_ctor_set(v_reuseFailAlloc_1704_, 1, v_val_1701_);
v___x_1703_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
return v___x_1703_;
}
}
else
{
lean_object* v___x_1706_; 
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 1, v_buckets_x27_1694_);
lean_ctor_set(v___x_1689_, 0, v_size_x27_1692_);
v___x_1706_ = v___x_1689_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v_size_x27_1692_);
lean_ctor_set(v_reuseFailAlloc_1707_, 1, v_buckets_x27_1694_);
v___x_1706_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
return v___x_1706_;
}
}
}
}
else
{
lean_dec(v_b_1670_);
lean_dec(v_a_1669_);
return v_m_1668_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14(lean_object* v_as_1713_, size_t v_sz_1714_, size_t v_i_1715_, lean_object* v_b_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_){
_start:
{
uint8_t v___x_1722_; 
v___x_1722_ = lean_usize_dec_lt(v_i_1715_, v_sz_1714_);
if (v___x_1722_ == 0)
{
lean_object* v___x_1723_; 
v___x_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1723_, 0, v_b_1716_);
return v___x_1723_;
}
else
{
lean_object* v_snd_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1786_; 
v_snd_1724_ = lean_ctor_get(v_b_1716_, 1);
v_isSharedCheck_1786_ = !lean_is_exclusive(v_b_1716_);
if (v_isSharedCheck_1786_ == 0)
{
lean_object* v_unused_1787_; 
v_unused_1787_ = lean_ctor_get(v_b_1716_, 0);
lean_dec(v_unused_1787_);
v___x_1726_ = v_b_1716_;
v_isShared_1727_ = v_isSharedCheck_1786_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_snd_1724_);
lean_dec(v_b_1716_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1786_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v___x_1728_; lean_object* v_a_1730_; lean_object* v_a_1737_; 
v___x_1728_ = lean_box(0);
v_a_1737_ = lean_array_uget_borrowed(v_as_1713_, v_i_1715_);
if (lean_obj_tag(v_a_1737_) == 0)
{
v_a_1730_ = v_snd_1724_;
goto v___jp_1729_;
}
else
{
lean_object* v_val_1738_; uint8_t v___x_1739_; 
v_val_1738_ = lean_ctor_get(v_a_1737_, 0);
v___x_1739_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1738_);
if (v___x_1739_ == 0)
{
lean_object* v___f_1740_; lean_object* v___f_1741_; lean_object* v___x_1742_; lean_object* v_candidates_1744_; lean_object* v___y_1745_; lean_object* v___y_1746_; lean_object* v___y_1747_; lean_object* v___y_1748_; lean_object* v___x_1764_; 
v___f_1740_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14___closed__0));
v___f_1741_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14___closed__1));
v___x_1742_ = l_Lean_LocalDecl_type(v_val_1738_);
lean_inc_ref(v___x_1742_);
v___x_1764_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__2(v___f_1740_, v___f_1741_, v___x_1739_, v___x_1742_, v_snd_1724_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_);
if (lean_obj_tag(v___x_1764_) == 0)
{
lean_object* v_a_1765_; lean_object* v___x_1766_; 
v_a_1765_ = lean_ctor_get(v___x_1764_, 0);
lean_inc(v_a_1765_);
lean_dec_ref_known(v___x_1764_, 1);
v___x_1766_ = l_Lean_LocalDecl_value_x3f(v_val_1738_, v___x_1739_);
if (lean_obj_tag(v___x_1766_) == 0)
{
v_candidates_1744_ = v_a_1765_;
v___y_1745_ = v___y_1717_;
v___y_1746_ = v___y_1718_;
v___y_1747_ = v___y_1719_;
v___y_1748_ = v___y_1720_;
goto v___jp_1743_;
}
else
{
lean_object* v_val_1767_; lean_object* v___x_1768_; 
v_val_1767_ = lean_ctor_get(v___x_1766_, 0);
lean_inc(v_val_1767_);
lean_dec_ref_known(v___x_1766_, 1);
v___x_1768_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__2(v___f_1740_, v___f_1741_, v___x_1739_, v_val_1767_, v_a_1765_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_);
if (lean_obj_tag(v___x_1768_) == 0)
{
lean_object* v_a_1769_; 
v_a_1769_ = lean_ctor_get(v___x_1768_, 0);
lean_inc(v_a_1769_);
lean_dec_ref_known(v___x_1768_, 1);
v_candidates_1744_ = v_a_1769_;
v___y_1745_ = v___y_1717_;
v___y_1746_ = v___y_1718_;
v___y_1747_ = v___y_1719_;
v___y_1748_ = v___y_1720_;
goto v___jp_1743_;
}
else
{
lean_object* v_a_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1777_; 
lean_dec_ref(v___x_1742_);
lean_del_object(v___x_1726_);
v_a_1770_ = lean_ctor_get(v___x_1768_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1768_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1772_ = v___x_1768_;
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_a_1770_);
lean_dec(v___x_1768_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1775_; 
if (v_isShared_1773_ == 0)
{
v___x_1775_ = v___x_1772_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_a_1770_);
v___x_1775_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
return v___x_1775_;
}
}
}
}
}
else
{
lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1785_; 
lean_dec_ref(v___x_1742_);
lean_del_object(v___x_1726_);
v_a_1778_ = lean_ctor_get(v___x_1764_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1780_ = v___x_1764_;
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1778_);
lean_dec(v___x_1764_);
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
v___jp_1743_:
{
lean_object* v___x_1749_; 
v___x_1749_ = l_Lean_Meta_isProp(v___x_1742_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_);
if (lean_obj_tag(v___x_1749_) == 0)
{
lean_object* v_a_1750_; uint8_t v___x_1751_; 
v_a_1750_ = lean_ctor_get(v___x_1749_, 0);
lean_inc(v_a_1750_);
lean_dec_ref_known(v___x_1749_, 1);
v___x_1751_ = lean_unbox(v_a_1750_);
lean_dec(v_a_1750_);
if (v___x_1751_ == 0)
{
v_a_1730_ = v_candidates_1744_;
goto v___jp_1729_;
}
else
{
uint8_t v___x_1752_; 
v___x_1752_ = l_Lean_LocalDecl_hasValue(v_val_1738_, v___x_1739_);
if (v___x_1752_ == 0)
{
lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; 
v___x_1753_ = l_Lean_LocalDecl_fvarId(v_val_1738_);
v___x_1754_ = lean_box(0);
v___x_1755_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2___redArg(v_candidates_1744_, v___x_1753_, v___x_1754_);
v_a_1730_ = v___x_1755_;
goto v___jp_1729_;
}
else
{
v_a_1730_ = v_candidates_1744_;
goto v___jp_1729_;
}
}
}
else
{
lean_object* v_a_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1763_; 
lean_dec_ref(v_candidates_1744_);
lean_del_object(v___x_1726_);
v_a_1756_ = lean_ctor_get(v___x_1749_, 0);
v_isSharedCheck_1763_ = !lean_is_exclusive(v___x_1749_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1758_ = v___x_1749_;
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_a_1756_);
lean_dec(v___x_1749_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___x_1761_; 
if (v_isShared_1759_ == 0)
{
v___x_1761_ = v___x_1758_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v_a_1756_);
v___x_1761_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
return v___x_1761_;
}
}
}
}
}
else
{
v_a_1730_ = v_snd_1724_;
goto v___jp_1729_;
}
}
v___jp_1729_:
{
lean_object* v___x_1732_; 
if (v_isShared_1727_ == 0)
{
lean_ctor_set(v___x_1726_, 1, v_a_1730_);
lean_ctor_set(v___x_1726_, 0, v___x_1728_);
v___x_1732_ = v___x_1726_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v___x_1728_);
lean_ctor_set(v_reuseFailAlloc_1736_, 1, v_a_1730_);
v___x_1732_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
size_t v___x_1733_; size_t v___x_1734_; 
v___x_1733_ = ((size_t)1ULL);
v___x_1734_ = lean_usize_add(v_i_1715_, v___x_1733_);
v_i_1715_ = v___x_1734_;
v_b_1716_ = v___x_1732_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14___boxed(lean_object* v_as_1788_, lean_object* v_sz_1789_, lean_object* v_i_1790_, lean_object* v_b_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_){
_start:
{
size_t v_sz_boxed_1797_; size_t v_i_boxed_1798_; lean_object* v_res_1799_; 
v_sz_boxed_1797_ = lean_unbox_usize(v_sz_1789_);
lean_dec(v_sz_1789_);
v_i_boxed_1798_ = lean_unbox_usize(v_i_1790_);
lean_dec(v_i_1790_);
v_res_1799_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14(v_as_1788_, v_sz_boxed_1797_, v_i_boxed_1798_, v_b_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_);
lean_dec(v___y_1795_);
lean_dec_ref(v___y_1794_);
lean_dec(v___y_1793_);
lean_dec_ref(v___y_1792_);
lean_dec_ref(v_as_1788_);
return v_res_1799_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8(lean_object* v_as_1800_, size_t v_sz_1801_, size_t v_i_1802_, lean_object* v_b_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_){
_start:
{
uint8_t v___x_1809_; 
v___x_1809_ = lean_usize_dec_lt(v_i_1802_, v_sz_1801_);
if (v___x_1809_ == 0)
{
lean_object* v___x_1810_; 
v___x_1810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1810_, 0, v_b_1803_);
return v___x_1810_;
}
else
{
lean_object* v_snd_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1873_; 
v_snd_1811_ = lean_ctor_get(v_b_1803_, 1);
v_isSharedCheck_1873_ = !lean_is_exclusive(v_b_1803_);
if (v_isSharedCheck_1873_ == 0)
{
lean_object* v_unused_1874_; 
v_unused_1874_ = lean_ctor_get(v_b_1803_, 0);
lean_dec(v_unused_1874_);
v___x_1813_ = v_b_1803_;
v_isShared_1814_ = v_isSharedCheck_1873_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_snd_1811_);
lean_dec(v_b_1803_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1873_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
lean_object* v___x_1815_; lean_object* v_a_1817_; lean_object* v_a_1824_; 
v___x_1815_ = lean_box(0);
v_a_1824_ = lean_array_uget_borrowed(v_as_1800_, v_i_1802_);
if (lean_obj_tag(v_a_1824_) == 0)
{
v_a_1817_ = v_snd_1811_;
goto v___jp_1816_;
}
else
{
lean_object* v_val_1825_; uint8_t v___x_1826_; 
v_val_1825_ = lean_ctor_get(v_a_1824_, 0);
v___x_1826_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1825_);
if (v___x_1826_ == 0)
{
lean_object* v___f_1827_; lean_object* v___f_1828_; lean_object* v___x_1829_; lean_object* v_candidates_1831_; lean_object* v___y_1832_; lean_object* v___y_1833_; lean_object* v___y_1834_; lean_object* v___y_1835_; lean_object* v___x_1851_; 
v___f_1827_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14___closed__0));
v___f_1828_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14___closed__1));
v___x_1829_ = l_Lean_LocalDecl_type(v_val_1825_);
lean_inc_ref(v___x_1829_);
v___x_1851_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__2(v___f_1827_, v___f_1828_, v___x_1826_, v___x_1829_, v_snd_1811_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_);
if (lean_obj_tag(v___x_1851_) == 0)
{
lean_object* v_a_1852_; lean_object* v___x_1853_; 
v_a_1852_ = lean_ctor_get(v___x_1851_, 0);
lean_inc(v_a_1852_);
lean_dec_ref_known(v___x_1851_, 1);
v___x_1853_ = l_Lean_LocalDecl_value_x3f(v_val_1825_, v___x_1826_);
if (lean_obj_tag(v___x_1853_) == 0)
{
v_candidates_1831_ = v_a_1852_;
v___y_1832_ = v___y_1804_;
v___y_1833_ = v___y_1805_;
v___y_1834_ = v___y_1806_;
v___y_1835_ = v___y_1807_;
goto v___jp_1830_;
}
else
{
lean_object* v_val_1854_; lean_object* v___x_1855_; 
v_val_1854_ = lean_ctor_get(v___x_1853_, 0);
lean_inc(v_val_1854_);
lean_dec_ref_known(v___x_1853_, 1);
v___x_1855_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__2(v___f_1827_, v___f_1828_, v___x_1826_, v_val_1854_, v_a_1852_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_);
if (lean_obj_tag(v___x_1855_) == 0)
{
lean_object* v_a_1856_; 
v_a_1856_ = lean_ctor_get(v___x_1855_, 0);
lean_inc(v_a_1856_);
lean_dec_ref_known(v___x_1855_, 1);
v_candidates_1831_ = v_a_1856_;
v___y_1832_ = v___y_1804_;
v___y_1833_ = v___y_1805_;
v___y_1834_ = v___y_1806_;
v___y_1835_ = v___y_1807_;
goto v___jp_1830_;
}
else
{
lean_object* v_a_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1864_; 
lean_dec_ref(v___x_1829_);
lean_del_object(v___x_1813_);
v_a_1857_ = lean_ctor_get(v___x_1855_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1855_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1859_ = v___x_1855_;
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_a_1857_);
lean_dec(v___x_1855_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1862_; 
if (v_isShared_1860_ == 0)
{
v___x_1862_ = v___x_1859_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_a_1857_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
}
}
}
else
{
lean_object* v_a_1865_; lean_object* v___x_1867_; uint8_t v_isShared_1868_; uint8_t v_isSharedCheck_1872_; 
lean_dec_ref(v___x_1829_);
lean_del_object(v___x_1813_);
v_a_1865_ = lean_ctor_get(v___x_1851_, 0);
v_isSharedCheck_1872_ = !lean_is_exclusive(v___x_1851_);
if (v_isSharedCheck_1872_ == 0)
{
v___x_1867_ = v___x_1851_;
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
else
{
lean_inc(v_a_1865_);
lean_dec(v___x_1851_);
v___x_1867_ = lean_box(0);
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
v_resetjp_1866_:
{
lean_object* v___x_1870_; 
if (v_isShared_1868_ == 0)
{
v___x_1870_ = v___x_1867_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v_a_1865_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
return v___x_1870_;
}
}
}
v___jp_1830_:
{
lean_object* v___x_1836_; 
v___x_1836_ = l_Lean_Meta_isProp(v___x_1829_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_);
if (lean_obj_tag(v___x_1836_) == 0)
{
lean_object* v_a_1837_; uint8_t v___x_1838_; 
v_a_1837_ = lean_ctor_get(v___x_1836_, 0);
lean_inc(v_a_1837_);
lean_dec_ref_known(v___x_1836_, 1);
v___x_1838_ = lean_unbox(v_a_1837_);
lean_dec(v_a_1837_);
if (v___x_1838_ == 0)
{
v_a_1817_ = v_candidates_1831_;
goto v___jp_1816_;
}
else
{
uint8_t v___x_1839_; 
v___x_1839_ = l_Lean_LocalDecl_hasValue(v_val_1825_, v___x_1826_);
if (v___x_1839_ == 0)
{
lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1840_ = l_Lean_LocalDecl_fvarId(v_val_1825_);
v___x_1841_ = lean_box(0);
v___x_1842_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2___redArg(v_candidates_1831_, v___x_1840_, v___x_1841_);
v_a_1817_ = v___x_1842_;
goto v___jp_1816_;
}
else
{
v_a_1817_ = v_candidates_1831_;
goto v___jp_1816_;
}
}
}
else
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1850_; 
lean_dec_ref(v_candidates_1831_);
lean_del_object(v___x_1813_);
v_a_1843_ = lean_ctor_get(v___x_1836_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1836_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1845_ = v___x_1836_;
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1836_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1848_; 
if (v_isShared_1846_ == 0)
{
v___x_1848_ = v___x_1845_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_a_1843_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
return v___x_1848_;
}
}
}
}
}
else
{
v_a_1817_ = v_snd_1811_;
goto v___jp_1816_;
}
}
v___jp_1816_:
{
lean_object* v___x_1819_; 
if (v_isShared_1814_ == 0)
{
lean_ctor_set(v___x_1813_, 1, v_a_1817_);
lean_ctor_set(v___x_1813_, 0, v___x_1815_);
v___x_1819_ = v___x_1813_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v___x_1815_);
lean_ctor_set(v_reuseFailAlloc_1823_, 1, v_a_1817_);
v___x_1819_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
size_t v___x_1820_; size_t v___x_1821_; lean_object* v___x_1822_; 
v___x_1820_ = ((size_t)1ULL);
v___x_1821_ = lean_usize_add(v_i_1802_, v___x_1820_);
v___x_1822_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14(v_as_1800_, v_sz_1801_, v___x_1821_, v___x_1819_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_);
return v___x_1822_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___boxed(lean_object* v_as_1875_, lean_object* v_sz_1876_, lean_object* v_i_1877_, lean_object* v_b_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_){
_start:
{
size_t v_sz_boxed_1884_; size_t v_i_boxed_1885_; lean_object* v_res_1886_; 
v_sz_boxed_1884_ = lean_unbox_usize(v_sz_1876_);
lean_dec(v_sz_1876_);
v_i_boxed_1885_ = lean_unbox_usize(v_i_1877_);
lean_dec(v_i_1877_);
v_res_1886_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8(v_as_1875_, v_sz_boxed_1884_, v_i_boxed_1885_, v_b_1878_, v___y_1879_, v___y_1880_, v___y_1881_, v___y_1882_);
lean_dec(v___y_1882_);
lean_dec_ref(v___y_1881_);
lean_dec(v___y_1880_);
lean_dec_ref(v___y_1879_);
lean_dec_ref(v_as_1875_);
return v_res_1886_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7_spec__12_spec__18(lean_object* v_as_1887_, size_t v_sz_1888_, size_t v_i_1889_, lean_object* v_b_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_){
_start:
{
uint8_t v___x_1896_; 
v___x_1896_ = lean_usize_dec_lt(v_i_1889_, v_sz_1888_);
if (v___x_1896_ == 0)
{
lean_object* v___x_1897_; 
v___x_1897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1897_, 0, v_b_1890_);
return v___x_1897_;
}
else
{
lean_object* v_snd_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1960_; 
v_snd_1898_ = lean_ctor_get(v_b_1890_, 1);
v_isSharedCheck_1960_ = !lean_is_exclusive(v_b_1890_);
if (v_isSharedCheck_1960_ == 0)
{
lean_object* v_unused_1961_; 
v_unused_1961_ = lean_ctor_get(v_b_1890_, 0);
lean_dec(v_unused_1961_);
v___x_1900_ = v_b_1890_;
v_isShared_1901_ = v_isSharedCheck_1960_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_snd_1898_);
lean_dec(v_b_1890_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1960_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1902_; lean_object* v_a_1904_; lean_object* v_a_1911_; 
v___x_1902_ = lean_box(0);
v_a_1911_ = lean_array_uget_borrowed(v_as_1887_, v_i_1889_);
if (lean_obj_tag(v_a_1911_) == 0)
{
v_a_1904_ = v_snd_1898_;
goto v___jp_1903_;
}
else
{
lean_object* v_val_1912_; uint8_t v___x_1913_; 
v_val_1912_ = lean_ctor_get(v_a_1911_, 0);
v___x_1913_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1912_);
if (v___x_1913_ == 0)
{
lean_object* v___f_1914_; lean_object* v___f_1915_; lean_object* v___x_1916_; lean_object* v_candidates_1918_; lean_object* v___y_1919_; lean_object* v___y_1920_; lean_object* v___y_1921_; lean_object* v___y_1922_; lean_object* v___x_1938_; 
v___f_1914_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14___closed__0));
v___f_1915_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14___closed__1));
v___x_1916_ = l_Lean_LocalDecl_type(v_val_1912_);
lean_inc_ref(v___x_1916_);
v___x_1938_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__2(v___f_1914_, v___f_1915_, v___x_1913_, v___x_1916_, v_snd_1898_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_);
if (lean_obj_tag(v___x_1938_) == 0)
{
lean_object* v_a_1939_; lean_object* v___x_1940_; 
v_a_1939_ = lean_ctor_get(v___x_1938_, 0);
lean_inc(v_a_1939_);
lean_dec_ref_known(v___x_1938_, 1);
v___x_1940_ = l_Lean_LocalDecl_value_x3f(v_val_1912_, v___x_1913_);
if (lean_obj_tag(v___x_1940_) == 0)
{
v_candidates_1918_ = v_a_1939_;
v___y_1919_ = v___y_1891_;
v___y_1920_ = v___y_1892_;
v___y_1921_ = v___y_1893_;
v___y_1922_ = v___y_1894_;
goto v___jp_1917_;
}
else
{
lean_object* v_val_1941_; lean_object* v___x_1942_; 
v_val_1941_ = lean_ctor_get(v___x_1940_, 0);
lean_inc(v_val_1941_);
lean_dec_ref_known(v___x_1940_, 1);
v___x_1942_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__2(v___f_1914_, v___f_1915_, v___x_1913_, v_val_1941_, v_a_1939_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_);
if (lean_obj_tag(v___x_1942_) == 0)
{
lean_object* v_a_1943_; 
v_a_1943_ = lean_ctor_get(v___x_1942_, 0);
lean_inc(v_a_1943_);
lean_dec_ref_known(v___x_1942_, 1);
v_candidates_1918_ = v_a_1943_;
v___y_1919_ = v___y_1891_;
v___y_1920_ = v___y_1892_;
v___y_1921_ = v___y_1893_;
v___y_1922_ = v___y_1894_;
goto v___jp_1917_;
}
else
{
lean_object* v_a_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1951_; 
lean_dec_ref(v___x_1916_);
lean_del_object(v___x_1900_);
v_a_1944_ = lean_ctor_get(v___x_1942_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1942_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1946_ = v___x_1942_;
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_a_1944_);
lean_dec(v___x_1942_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v___x_1949_; 
if (v_isShared_1947_ == 0)
{
v___x_1949_ = v___x_1946_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_a_1944_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
}
}
else
{
lean_object* v_a_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1959_; 
lean_dec_ref(v___x_1916_);
lean_del_object(v___x_1900_);
v_a_1952_ = lean_ctor_get(v___x_1938_, 0);
v_isSharedCheck_1959_ = !lean_is_exclusive(v___x_1938_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1954_ = v___x_1938_;
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_a_1952_);
lean_dec(v___x_1938_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v___x_1957_; 
if (v_isShared_1955_ == 0)
{
v___x_1957_ = v___x_1954_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v_a_1952_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
return v___x_1957_;
}
}
}
v___jp_1917_:
{
lean_object* v___x_1923_; 
v___x_1923_ = l_Lean_Meta_isProp(v___x_1916_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_);
if (lean_obj_tag(v___x_1923_) == 0)
{
lean_object* v_a_1924_; uint8_t v___x_1925_; 
v_a_1924_ = lean_ctor_get(v___x_1923_, 0);
lean_inc(v_a_1924_);
lean_dec_ref_known(v___x_1923_, 1);
v___x_1925_ = lean_unbox(v_a_1924_);
lean_dec(v_a_1924_);
if (v___x_1925_ == 0)
{
v_a_1904_ = v_candidates_1918_;
goto v___jp_1903_;
}
else
{
uint8_t v___x_1926_; 
v___x_1926_ = l_Lean_LocalDecl_hasValue(v_val_1912_, v___x_1913_);
if (v___x_1926_ == 0)
{
lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1927_ = l_Lean_LocalDecl_fvarId(v_val_1912_);
v___x_1928_ = lean_box(0);
v___x_1929_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2___redArg(v_candidates_1918_, v___x_1927_, v___x_1928_);
v_a_1904_ = v___x_1929_;
goto v___jp_1903_;
}
else
{
v_a_1904_ = v_candidates_1918_;
goto v___jp_1903_;
}
}
}
else
{
lean_object* v_a_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1937_; 
lean_dec_ref(v_candidates_1918_);
lean_del_object(v___x_1900_);
v_a_1930_ = lean_ctor_get(v___x_1923_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1923_);
if (v_isSharedCheck_1937_ == 0)
{
v___x_1932_ = v___x_1923_;
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_a_1930_);
lean_dec(v___x_1923_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
lean_object* v___x_1935_; 
if (v_isShared_1933_ == 0)
{
v___x_1935_ = v___x_1932_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_a_1930_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
}
}
}
else
{
v_a_1904_ = v_snd_1898_;
goto v___jp_1903_;
}
}
v___jp_1903_:
{
lean_object* v___x_1906_; 
if (v_isShared_1901_ == 0)
{
lean_ctor_set(v___x_1900_, 1, v_a_1904_);
lean_ctor_set(v___x_1900_, 0, v___x_1902_);
v___x_1906_ = v___x_1900_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v___x_1902_);
lean_ctor_set(v_reuseFailAlloc_1910_, 1, v_a_1904_);
v___x_1906_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
size_t v___x_1907_; size_t v___x_1908_; 
v___x_1907_ = ((size_t)1ULL);
v___x_1908_ = lean_usize_add(v_i_1889_, v___x_1907_);
v_i_1889_ = v___x_1908_;
v_b_1890_ = v___x_1906_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7_spec__12_spec__18___boxed(lean_object* v_as_1962_, lean_object* v_sz_1963_, lean_object* v_i_1964_, lean_object* v_b_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_){
_start:
{
size_t v_sz_boxed_1971_; size_t v_i_boxed_1972_; lean_object* v_res_1973_; 
v_sz_boxed_1971_ = lean_unbox_usize(v_sz_1963_);
lean_dec(v_sz_1963_);
v_i_boxed_1972_ = lean_unbox_usize(v_i_1964_);
lean_dec(v_i_1964_);
v_res_1973_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7_spec__12_spec__18(v_as_1962_, v_sz_boxed_1971_, v_i_boxed_1972_, v_b_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1968_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec_ref(v_as_1962_);
return v_res_1973_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7_spec__12(lean_object* v_as_1974_, size_t v_sz_1975_, size_t v_i_1976_, lean_object* v_b_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_){
_start:
{
uint8_t v___x_1983_; 
v___x_1983_ = lean_usize_dec_lt(v_i_1976_, v_sz_1975_);
if (v___x_1983_ == 0)
{
lean_object* v___x_1984_; 
v___x_1984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1984_, 0, v_b_1977_);
return v___x_1984_;
}
else
{
lean_object* v_snd_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_2047_; 
v_snd_1985_ = lean_ctor_get(v_b_1977_, 1);
v_isSharedCheck_2047_ = !lean_is_exclusive(v_b_1977_);
if (v_isSharedCheck_2047_ == 0)
{
lean_object* v_unused_2048_; 
v_unused_2048_ = lean_ctor_get(v_b_1977_, 0);
lean_dec(v_unused_2048_);
v___x_1987_ = v_b_1977_;
v_isShared_1988_ = v_isSharedCheck_2047_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_snd_1985_);
lean_dec(v_b_1977_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_2047_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1989_; lean_object* v_a_1991_; lean_object* v_a_1998_; 
v___x_1989_ = lean_box(0);
v_a_1998_ = lean_array_uget_borrowed(v_as_1974_, v_i_1976_);
if (lean_obj_tag(v_a_1998_) == 0)
{
v_a_1991_ = v_snd_1985_;
goto v___jp_1990_;
}
else
{
lean_object* v_val_1999_; uint8_t v___x_2000_; 
v_val_1999_ = lean_ctor_get(v_a_1998_, 0);
v___x_2000_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1999_);
if (v___x_2000_ == 0)
{
lean_object* v___f_2001_; lean_object* v___f_2002_; lean_object* v___x_2003_; lean_object* v_candidates_2005_; lean_object* v___y_2006_; lean_object* v___y_2007_; lean_object* v___y_2008_; lean_object* v___y_2009_; lean_object* v___x_2025_; 
v___f_2001_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14___closed__0));
v___f_2002_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8_spec__14___closed__1));
v___x_2003_ = l_Lean_LocalDecl_type(v_val_1999_);
lean_inc_ref(v___x_2003_);
v___x_2025_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__2(v___f_2001_, v___f_2002_, v___x_2000_, v___x_2003_, v_snd_1985_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_);
if (lean_obj_tag(v___x_2025_) == 0)
{
lean_object* v_a_2026_; lean_object* v___x_2027_; 
v_a_2026_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_a_2026_);
lean_dec_ref_known(v___x_2025_, 1);
v___x_2027_ = l_Lean_LocalDecl_value_x3f(v_val_1999_, v___x_2000_);
if (lean_obj_tag(v___x_2027_) == 0)
{
v_candidates_2005_ = v_a_2026_;
v___y_2006_ = v___y_1978_;
v___y_2007_ = v___y_1979_;
v___y_2008_ = v___y_1980_;
v___y_2009_ = v___y_1981_;
goto v___jp_2004_;
}
else
{
lean_object* v_val_2028_; lean_object* v___x_2029_; 
v_val_2028_ = lean_ctor_get(v___x_2027_, 0);
lean_inc(v_val_2028_);
lean_dec_ref_known(v___x_2027_, 1);
v___x_2029_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__2(v___f_2001_, v___f_2002_, v___x_2000_, v_val_2028_, v_a_2026_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_);
if (lean_obj_tag(v___x_2029_) == 0)
{
lean_object* v_a_2030_; 
v_a_2030_ = lean_ctor_get(v___x_2029_, 0);
lean_inc(v_a_2030_);
lean_dec_ref_known(v___x_2029_, 1);
v_candidates_2005_ = v_a_2030_;
v___y_2006_ = v___y_1978_;
v___y_2007_ = v___y_1979_;
v___y_2008_ = v___y_1980_;
v___y_2009_ = v___y_1981_;
goto v___jp_2004_;
}
else
{
lean_object* v_a_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2038_; 
lean_dec_ref(v___x_2003_);
lean_del_object(v___x_1987_);
v_a_2031_ = lean_ctor_get(v___x_2029_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_2029_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2033_ = v___x_2029_;
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_a_2031_);
lean_dec(v___x_2029_);
v___x_2033_ = lean_box(0);
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
v_resetjp_2032_:
{
lean_object* v___x_2036_; 
if (v_isShared_2034_ == 0)
{
v___x_2036_ = v___x_2033_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_a_2031_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
return v___x_2036_;
}
}
}
}
}
else
{
lean_object* v_a_2039_; lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2046_; 
lean_dec_ref(v___x_2003_);
lean_del_object(v___x_1987_);
v_a_2039_ = lean_ctor_get(v___x_2025_, 0);
v_isSharedCheck_2046_ = !lean_is_exclusive(v___x_2025_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2041_ = v___x_2025_;
v_isShared_2042_ = v_isSharedCheck_2046_;
goto v_resetjp_2040_;
}
else
{
lean_inc(v_a_2039_);
lean_dec(v___x_2025_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2046_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
lean_object* v___x_2044_; 
if (v_isShared_2042_ == 0)
{
v___x_2044_ = v___x_2041_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v_a_2039_);
v___x_2044_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
return v___x_2044_;
}
}
}
v___jp_2004_:
{
lean_object* v___x_2010_; 
v___x_2010_ = l_Lean_Meta_isProp(v___x_2003_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
if (lean_obj_tag(v___x_2010_) == 0)
{
lean_object* v_a_2011_; uint8_t v___x_2012_; 
v_a_2011_ = lean_ctor_get(v___x_2010_, 0);
lean_inc(v_a_2011_);
lean_dec_ref_known(v___x_2010_, 1);
v___x_2012_ = lean_unbox(v_a_2011_);
lean_dec(v_a_2011_);
if (v___x_2012_ == 0)
{
v_a_1991_ = v_candidates_2005_;
goto v___jp_1990_;
}
else
{
uint8_t v___x_2013_; 
v___x_2013_ = l_Lean_LocalDecl_hasValue(v_val_1999_, v___x_2000_);
if (v___x_2013_ == 0)
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2014_ = l_Lean_LocalDecl_fvarId(v_val_1999_);
v___x_2015_ = lean_box(0);
v___x_2016_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2___redArg(v_candidates_2005_, v___x_2014_, v___x_2015_);
v_a_1991_ = v___x_2016_;
goto v___jp_1990_;
}
else
{
v_a_1991_ = v_candidates_2005_;
goto v___jp_1990_;
}
}
}
else
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2024_; 
lean_dec_ref(v_candidates_2005_);
lean_del_object(v___x_1987_);
v_a_2017_ = lean_ctor_get(v___x_2010_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_2010_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2019_ = v___x_2010_;
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_2010_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2022_; 
if (v_isShared_2020_ == 0)
{
v___x_2022_ = v___x_2019_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_a_2017_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
}
}
else
{
v_a_1991_ = v_snd_1985_;
goto v___jp_1990_;
}
}
v___jp_1990_:
{
lean_object* v___x_1993_; 
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 1, v_a_1991_);
lean_ctor_set(v___x_1987_, 0, v___x_1989_);
v___x_1993_ = v___x_1987_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v___x_1989_);
lean_ctor_set(v_reuseFailAlloc_1997_, 1, v_a_1991_);
v___x_1993_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
size_t v___x_1994_; size_t v___x_1995_; lean_object* v___x_1996_; 
v___x_1994_ = ((size_t)1ULL);
v___x_1995_ = lean_usize_add(v_i_1976_, v___x_1994_);
v___x_1996_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7_spec__12_spec__18(v_as_1974_, v_sz_1975_, v___x_1995_, v___x_1993_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_);
return v___x_1996_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7_spec__12___boxed(lean_object* v_as_2049_, lean_object* v_sz_2050_, lean_object* v_i_2051_, lean_object* v_b_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_){
_start:
{
size_t v_sz_boxed_2058_; size_t v_i_boxed_2059_; lean_object* v_res_2060_; 
v_sz_boxed_2058_ = lean_unbox_usize(v_sz_2050_);
lean_dec(v_sz_2050_);
v_i_boxed_2059_ = lean_unbox_usize(v_i_2051_);
lean_dec(v_i_2051_);
v_res_2060_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7_spec__12(v_as_2049_, v_sz_boxed_2058_, v_i_boxed_2059_, v_b_2052_, v___y_2053_, v___y_2054_, v___y_2055_, v___y_2056_);
lean_dec(v___y_2056_);
lean_dec_ref(v___y_2055_);
lean_dec(v___y_2054_);
lean_dec_ref(v___y_2053_);
lean_dec_ref(v_as_2049_);
return v_res_2060_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7(lean_object* v_init_2061_, lean_object* v_n_2062_, lean_object* v_b_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_){
_start:
{
if (lean_obj_tag(v_n_2062_) == 0)
{
lean_object* v_cs_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; size_t v_sz_2072_; size_t v___x_2073_; lean_object* v___x_2074_; 
v_cs_2069_ = lean_ctor_get(v_n_2062_, 0);
v___x_2070_ = lean_box(0);
v___x_2071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2070_);
lean_ctor_set(v___x_2071_, 1, v_b_2063_);
v_sz_2072_ = lean_array_size(v_cs_2069_);
v___x_2073_ = ((size_t)0ULL);
v___x_2074_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7_spec__11(v_init_2061_, v_cs_2069_, v_sz_2072_, v___x_2073_, v___x_2071_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_);
if (lean_obj_tag(v___x_2074_) == 0)
{
lean_object* v_a_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2089_; 
v_a_2075_ = lean_ctor_get(v___x_2074_, 0);
v_isSharedCheck_2089_ = !lean_is_exclusive(v___x_2074_);
if (v_isSharedCheck_2089_ == 0)
{
v___x_2077_ = v___x_2074_;
v_isShared_2078_ = v_isSharedCheck_2089_;
goto v_resetjp_2076_;
}
else
{
lean_inc(v_a_2075_);
lean_dec(v___x_2074_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2089_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v_fst_2079_; 
v_fst_2079_ = lean_ctor_get(v_a_2075_, 0);
if (lean_obj_tag(v_fst_2079_) == 0)
{
lean_object* v_snd_2080_; lean_object* v___x_2081_; lean_object* v___x_2083_; 
v_snd_2080_ = lean_ctor_get(v_a_2075_, 1);
lean_inc(v_snd_2080_);
lean_dec(v_a_2075_);
v___x_2081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2081_, 0, v_snd_2080_);
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 0, v___x_2081_);
v___x_2083_ = v___x_2077_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v___x_2081_);
v___x_2083_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
return v___x_2083_;
}
}
else
{
lean_object* v_val_2085_; lean_object* v___x_2087_; 
lean_inc_ref(v_fst_2079_);
lean_dec(v_a_2075_);
v_val_2085_ = lean_ctor_get(v_fst_2079_, 0);
lean_inc(v_val_2085_);
lean_dec_ref_known(v_fst_2079_, 1);
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 0, v_val_2085_);
v___x_2087_ = v___x_2077_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v_val_2085_);
v___x_2087_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
return v___x_2087_;
}
}
}
}
else
{
lean_object* v_a_2090_; lean_object* v___x_2092_; uint8_t v_isShared_2093_; uint8_t v_isSharedCheck_2097_; 
v_a_2090_ = lean_ctor_get(v___x_2074_, 0);
v_isSharedCheck_2097_ = !lean_is_exclusive(v___x_2074_);
if (v_isSharedCheck_2097_ == 0)
{
v___x_2092_ = v___x_2074_;
v_isShared_2093_ = v_isSharedCheck_2097_;
goto v_resetjp_2091_;
}
else
{
lean_inc(v_a_2090_);
lean_dec(v___x_2074_);
v___x_2092_ = lean_box(0);
v_isShared_2093_ = v_isSharedCheck_2097_;
goto v_resetjp_2091_;
}
v_resetjp_2091_:
{
lean_object* v___x_2095_; 
if (v_isShared_2093_ == 0)
{
v___x_2095_ = v___x_2092_;
goto v_reusejp_2094_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v_a_2090_);
v___x_2095_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2094_;
}
v_reusejp_2094_:
{
return v___x_2095_;
}
}
}
}
else
{
lean_object* v_vs_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; size_t v_sz_2101_; size_t v___x_2102_; lean_object* v___x_2103_; 
v_vs_2098_ = lean_ctor_get(v_n_2062_, 0);
v___x_2099_ = lean_box(0);
v___x_2100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2099_);
lean_ctor_set(v___x_2100_, 1, v_b_2063_);
v_sz_2101_ = lean_array_size(v_vs_2098_);
v___x_2102_ = ((size_t)0ULL);
v___x_2103_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7_spec__12(v_vs_2098_, v_sz_2101_, v___x_2102_, v___x_2100_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_);
if (lean_obj_tag(v___x_2103_) == 0)
{
lean_object* v_a_2104_; lean_object* v___x_2106_; uint8_t v_isShared_2107_; uint8_t v_isSharedCheck_2118_; 
v_a_2104_ = lean_ctor_get(v___x_2103_, 0);
v_isSharedCheck_2118_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2106_ = v___x_2103_;
v_isShared_2107_ = v_isSharedCheck_2118_;
goto v_resetjp_2105_;
}
else
{
lean_inc(v_a_2104_);
lean_dec(v___x_2103_);
v___x_2106_ = lean_box(0);
v_isShared_2107_ = v_isSharedCheck_2118_;
goto v_resetjp_2105_;
}
v_resetjp_2105_:
{
lean_object* v_fst_2108_; 
v_fst_2108_ = lean_ctor_get(v_a_2104_, 0);
if (lean_obj_tag(v_fst_2108_) == 0)
{
lean_object* v_snd_2109_; lean_object* v___x_2110_; lean_object* v___x_2112_; 
v_snd_2109_ = lean_ctor_get(v_a_2104_, 1);
lean_inc(v_snd_2109_);
lean_dec(v_a_2104_);
v___x_2110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2110_, 0, v_snd_2109_);
if (v_isShared_2107_ == 0)
{
lean_ctor_set(v___x_2106_, 0, v___x_2110_);
v___x_2112_ = v___x_2106_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2113_; 
v_reuseFailAlloc_2113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2113_, 0, v___x_2110_);
v___x_2112_ = v_reuseFailAlloc_2113_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
return v___x_2112_;
}
}
else
{
lean_object* v_val_2114_; lean_object* v___x_2116_; 
lean_inc_ref(v_fst_2108_);
lean_dec(v_a_2104_);
v_val_2114_ = lean_ctor_get(v_fst_2108_, 0);
lean_inc(v_val_2114_);
lean_dec_ref_known(v_fst_2108_, 1);
if (v_isShared_2107_ == 0)
{
lean_ctor_set(v___x_2106_, 0, v_val_2114_);
v___x_2116_ = v___x_2106_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v_val_2114_);
v___x_2116_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
return v___x_2116_;
}
}
}
}
else
{
lean_object* v_a_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2126_; 
v_a_2119_ = lean_ctor_get(v___x_2103_, 0);
v_isSharedCheck_2126_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2121_ = v___x_2103_;
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_a_2119_);
lean_dec(v___x_2103_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2124_; 
if (v_isShared_2122_ == 0)
{
v___x_2124_ = v___x_2121_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v_a_2119_);
v___x_2124_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
return v___x_2124_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7_spec__11(lean_object* v_init_2127_, lean_object* v_as_2128_, size_t v_sz_2129_, size_t v_i_2130_, lean_object* v_b_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
uint8_t v___x_2137_; 
v___x_2137_ = lean_usize_dec_lt(v_i_2130_, v_sz_2129_);
if (v___x_2137_ == 0)
{
lean_object* v___x_2138_; 
v___x_2138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2138_, 0, v_b_2131_);
return v___x_2138_;
}
else
{
lean_object* v_snd_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2173_; 
v_snd_2139_ = lean_ctor_get(v_b_2131_, 1);
v_isSharedCheck_2173_ = !lean_is_exclusive(v_b_2131_);
if (v_isSharedCheck_2173_ == 0)
{
lean_object* v_unused_2174_; 
v_unused_2174_ = lean_ctor_get(v_b_2131_, 0);
lean_dec(v_unused_2174_);
v___x_2141_ = v_b_2131_;
v_isShared_2142_ = v_isSharedCheck_2173_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_snd_2139_);
lean_dec(v_b_2131_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2173_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2143_; lean_object* v_a_2144_; lean_object* v___x_2145_; 
v___x_2143_ = lean_box(0);
v_a_2144_ = lean_array_uget_borrowed(v_as_2128_, v_i_2130_);
lean_inc(v_snd_2139_);
v___x_2145_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7(v_init_2127_, v_a_2144_, v_snd_2139_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_);
if (lean_obj_tag(v___x_2145_) == 0)
{
lean_object* v_a_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2164_; 
v_a_2146_ = lean_ctor_get(v___x_2145_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2148_ = v___x_2145_;
v_isShared_2149_ = v_isSharedCheck_2164_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_a_2146_);
lean_dec(v___x_2145_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2164_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
if (lean_obj_tag(v_a_2146_) == 0)
{
lean_object* v___x_2150_; lean_object* v___x_2152_; 
v___x_2150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2150_, 0, v_a_2146_);
if (v_isShared_2142_ == 0)
{
lean_ctor_set(v___x_2141_, 0, v___x_2150_);
v___x_2152_ = v___x_2141_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2156_; 
v_reuseFailAlloc_2156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2156_, 0, v___x_2150_);
lean_ctor_set(v_reuseFailAlloc_2156_, 1, v_snd_2139_);
v___x_2152_ = v_reuseFailAlloc_2156_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
lean_object* v___x_2154_; 
if (v_isShared_2149_ == 0)
{
lean_ctor_set(v___x_2148_, 0, v___x_2152_);
v___x_2154_ = v___x_2148_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v___x_2152_);
v___x_2154_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
return v___x_2154_;
}
}
}
else
{
lean_object* v_a_2157_; lean_object* v___x_2159_; 
lean_del_object(v___x_2148_);
lean_dec(v_snd_2139_);
v_a_2157_ = lean_ctor_get(v_a_2146_, 0);
lean_inc(v_a_2157_);
lean_dec_ref_known(v_a_2146_, 1);
if (v_isShared_2142_ == 0)
{
lean_ctor_set(v___x_2141_, 1, v_a_2157_);
lean_ctor_set(v___x_2141_, 0, v___x_2143_);
v___x_2159_ = v___x_2141_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v___x_2143_);
lean_ctor_set(v_reuseFailAlloc_2163_, 1, v_a_2157_);
v___x_2159_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
size_t v___x_2160_; size_t v___x_2161_; 
v___x_2160_ = ((size_t)1ULL);
v___x_2161_ = lean_usize_add(v_i_2130_, v___x_2160_);
v_i_2130_ = v___x_2161_;
v_b_2131_ = v___x_2159_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2172_; 
lean_del_object(v___x_2141_);
lean_dec(v_snd_2139_);
v_a_2165_ = lean_ctor_get(v___x_2145_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2145_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2167_ = v___x_2145_;
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_a_2165_);
lean_dec(v___x_2145_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2170_; 
if (v_isShared_2168_ == 0)
{
v___x_2170_ = v___x_2167_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_a_2165_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7_spec__11___boxed(lean_object* v_init_2175_, lean_object* v_as_2176_, lean_object* v_sz_2177_, lean_object* v_i_2178_, lean_object* v_b_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_){
_start:
{
size_t v_sz_boxed_2185_; size_t v_i_boxed_2186_; lean_object* v_res_2187_; 
v_sz_boxed_2185_ = lean_unbox_usize(v_sz_2177_);
lean_dec(v_sz_2177_);
v_i_boxed_2186_ = lean_unbox_usize(v_i_2178_);
lean_dec(v_i_2178_);
v_res_2187_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7_spec__11(v_init_2175_, v_as_2176_, v_sz_boxed_2185_, v_i_boxed_2186_, v_b_2179_, v___y_2180_, v___y_2181_, v___y_2182_, v___y_2183_);
lean_dec(v___y_2183_);
lean_dec_ref(v___y_2182_);
lean_dec(v___y_2181_);
lean_dec_ref(v___y_2180_);
lean_dec_ref(v_as_2176_);
lean_dec_ref(v_init_2175_);
return v_res_2187_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7___boxed(lean_object* v_init_2188_, lean_object* v_n_2189_, lean_object* v_b_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_){
_start:
{
lean_object* v_res_2196_; 
v_res_2196_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7(v_init_2188_, v_n_2189_, v_b_2190_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_);
lean_dec(v___y_2194_);
lean_dec_ref(v___y_2193_);
lean_dec(v___y_2192_);
lean_dec_ref(v___y_2191_);
lean_dec_ref(v_n_2189_);
lean_dec_ref(v_init_2188_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3(lean_object* v_t_2197_, lean_object* v_init_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_){
_start:
{
lean_object* v_root_2204_; lean_object* v_tail_2205_; lean_object* v___x_2206_; 
v_root_2204_ = lean_ctor_get(v_t_2197_, 0);
v_tail_2205_ = lean_ctor_get(v_t_2197_, 1);
lean_inc_ref(v_init_2198_);
v___x_2206_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__7(v_init_2198_, v_root_2204_, v_init_2198_, v___y_2199_, v___y_2200_, v___y_2201_, v___y_2202_);
lean_dec_ref(v_init_2198_);
if (lean_obj_tag(v___x_2206_) == 0)
{
lean_object* v_a_2207_; lean_object* v___x_2209_; uint8_t v_isShared_2210_; uint8_t v_isSharedCheck_2243_; 
v_a_2207_ = lean_ctor_get(v___x_2206_, 0);
v_isSharedCheck_2243_ = !lean_is_exclusive(v___x_2206_);
if (v_isSharedCheck_2243_ == 0)
{
v___x_2209_ = v___x_2206_;
v_isShared_2210_ = v_isSharedCheck_2243_;
goto v_resetjp_2208_;
}
else
{
lean_inc(v_a_2207_);
lean_dec(v___x_2206_);
v___x_2209_ = lean_box(0);
v_isShared_2210_ = v_isSharedCheck_2243_;
goto v_resetjp_2208_;
}
v_resetjp_2208_:
{
if (lean_obj_tag(v_a_2207_) == 0)
{
lean_object* v_a_2211_; lean_object* v___x_2213_; 
v_a_2211_ = lean_ctor_get(v_a_2207_, 0);
lean_inc(v_a_2211_);
lean_dec_ref_known(v_a_2207_, 1);
if (v_isShared_2210_ == 0)
{
lean_ctor_set(v___x_2209_, 0, v_a_2211_);
v___x_2213_ = v___x_2209_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v_a_2211_);
v___x_2213_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
return v___x_2213_;
}
}
else
{
lean_object* v_a_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; size_t v_sz_2218_; size_t v___x_2219_; lean_object* v___x_2220_; 
lean_del_object(v___x_2209_);
v_a_2215_ = lean_ctor_get(v_a_2207_, 0);
lean_inc(v_a_2215_);
lean_dec_ref_known(v_a_2207_, 1);
v___x_2216_ = lean_box(0);
v___x_2217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2217_, 0, v___x_2216_);
lean_ctor_set(v___x_2217_, 1, v_a_2215_);
v_sz_2218_ = lean_array_size(v_tail_2205_);
v___x_2219_ = ((size_t)0ULL);
v___x_2220_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8(v_tail_2205_, v_sz_2218_, v___x_2219_, v___x_2217_, v___y_2199_, v___y_2200_, v___y_2201_, v___y_2202_);
if (lean_obj_tag(v___x_2220_) == 0)
{
lean_object* v_a_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2234_; 
v_a_2221_ = lean_ctor_get(v___x_2220_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2220_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2223_ = v___x_2220_;
v_isShared_2224_ = v_isSharedCheck_2234_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_a_2221_);
lean_dec(v___x_2220_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2234_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
lean_object* v_fst_2225_; 
v_fst_2225_ = lean_ctor_get(v_a_2221_, 0);
if (lean_obj_tag(v_fst_2225_) == 0)
{
lean_object* v_snd_2226_; lean_object* v___x_2228_; 
v_snd_2226_ = lean_ctor_get(v_a_2221_, 1);
lean_inc(v_snd_2226_);
lean_dec(v_a_2221_);
if (v_isShared_2224_ == 0)
{
lean_ctor_set(v___x_2223_, 0, v_snd_2226_);
v___x_2228_ = v___x_2223_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v_snd_2226_);
v___x_2228_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
return v___x_2228_;
}
}
else
{
lean_object* v_val_2230_; lean_object* v___x_2232_; 
lean_inc_ref(v_fst_2225_);
lean_dec(v_a_2221_);
v_val_2230_ = lean_ctor_get(v_fst_2225_, 0);
lean_inc(v_val_2230_);
lean_dec_ref_known(v_fst_2225_, 1);
if (v_isShared_2224_ == 0)
{
lean_ctor_set(v___x_2223_, 0, v_val_2230_);
v___x_2232_ = v___x_2223_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_val_2230_);
v___x_2232_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
return v___x_2232_;
}
}
}
}
else
{
lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2242_; 
v_a_2235_ = lean_ctor_get(v___x_2220_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2220_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2237_ = v___x_2220_;
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_dec(v___x_2220_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2240_; 
if (v_isShared_2238_ == 0)
{
v___x_2240_ = v___x_2237_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_a_2235_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
}
}
}
else
{
lean_object* v_a_2244_; lean_object* v___x_2246_; uint8_t v_isShared_2247_; uint8_t v_isSharedCheck_2251_; 
v_a_2244_ = lean_ctor_get(v___x_2206_, 0);
v_isSharedCheck_2251_ = !lean_is_exclusive(v___x_2206_);
if (v_isSharedCheck_2251_ == 0)
{
v___x_2246_ = v___x_2206_;
v_isShared_2247_ = v_isSharedCheck_2251_;
goto v_resetjp_2245_;
}
else
{
lean_inc(v_a_2244_);
lean_dec(v___x_2206_);
v___x_2246_ = lean_box(0);
v_isShared_2247_ = v_isSharedCheck_2251_;
goto v_resetjp_2245_;
}
v_resetjp_2245_:
{
lean_object* v___x_2249_; 
if (v_isShared_2247_ == 0)
{
v___x_2249_ = v___x_2246_;
goto v_reusejp_2248_;
}
else
{
lean_object* v_reuseFailAlloc_2250_; 
v_reuseFailAlloc_2250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2250_, 0, v_a_2244_);
v___x_2249_ = v_reuseFailAlloc_2250_;
goto v_reusejp_2248_;
}
v_reusejp_2248_:
{
return v___x_2249_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3___boxed(lean_object* v_t_2252_, lean_object* v_init_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_){
_start:
{
lean_object* v_res_2259_; 
v_res_2259_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3(v_t_2252_, v_init_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_);
lean_dec(v___y_2257_);
lean_dec_ref(v___y_2256_);
lean_dec(v___y_2255_);
lean_dec_ref(v___y_2254_);
lean_dec_ref(v_t_2252_);
return v_res_2259_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_MVarId_getNondepPropHyps_spec__4___redArg(lean_object* v_m_2260_, lean_object* v_a_2261_){
_start:
{
lean_object* v_buckets_2262_; lean_object* v___x_2263_; uint64_t v___x_2264_; uint64_t v___x_2265_; uint64_t v___x_2266_; uint64_t v_fold_2267_; uint64_t v___x_2268_; uint64_t v___x_2269_; uint64_t v___x_2270_; size_t v___x_2271_; size_t v___x_2272_; size_t v___x_2273_; size_t v___x_2274_; size_t v___x_2275_; lean_object* v___x_2276_; uint8_t v___x_2277_; 
v_buckets_2262_ = lean_ctor_get(v_m_2260_, 1);
v___x_2263_ = lean_array_get_size(v_buckets_2262_);
v___x_2264_ = l_Lean_instHashableFVarId_hash(v_a_2261_);
v___x_2265_ = 32ULL;
v___x_2266_ = lean_uint64_shift_right(v___x_2264_, v___x_2265_);
v_fold_2267_ = lean_uint64_xor(v___x_2264_, v___x_2266_);
v___x_2268_ = 16ULL;
v___x_2269_ = lean_uint64_shift_right(v_fold_2267_, v___x_2268_);
v___x_2270_ = lean_uint64_xor(v_fold_2267_, v___x_2269_);
v___x_2271_ = lean_uint64_to_usize(v___x_2270_);
v___x_2272_ = lean_usize_of_nat(v___x_2263_);
v___x_2273_ = ((size_t)1ULL);
v___x_2274_ = lean_usize_sub(v___x_2272_, v___x_2273_);
v___x_2275_ = lean_usize_land(v___x_2271_, v___x_2274_);
v___x_2276_ = lean_array_uget_borrowed(v_buckets_2262_, v___x_2275_);
v___x_2277_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0___redArg(v_a_2261_, v___x_2276_);
return v___x_2277_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_MVarId_getNondepPropHyps_spec__4___redArg___boxed(lean_object* v_m_2278_, lean_object* v_a_2279_){
_start:
{
uint8_t v_res_2280_; lean_object* v_r_2281_; 
v_res_2280_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_MVarId_getNondepPropHyps_spec__4___redArg(v_m_2278_, v_a_2279_);
lean_dec(v_a_2279_);
lean_dec_ref(v_m_2278_);
v_r_2281_ = lean_box(v_res_2280_);
return v_r_2281_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__19_spec__24___redArg(lean_object* v_a_2282_, lean_object* v_as_2283_, size_t v_sz_2284_, size_t v_i_2285_, lean_object* v_b_2286_){
_start:
{
uint8_t v___x_2288_; 
v___x_2288_ = lean_usize_dec_lt(v_i_2285_, v_sz_2284_);
if (v___x_2288_ == 0)
{
lean_object* v___x_2289_; 
v___x_2289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2289_, 0, v_b_2286_);
return v___x_2289_;
}
else
{
lean_object* v_snd_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2308_; 
v_snd_2290_ = lean_ctor_get(v_b_2286_, 1);
v_isSharedCheck_2308_ = !lean_is_exclusive(v_b_2286_);
if (v_isSharedCheck_2308_ == 0)
{
lean_object* v_unused_2309_; 
v_unused_2309_ = lean_ctor_get(v_b_2286_, 0);
lean_dec(v_unused_2309_);
v___x_2292_ = v_b_2286_;
v_isShared_2293_ = v_isSharedCheck_2308_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_snd_2290_);
lean_dec(v_b_2286_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2308_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v___x_2294_; lean_object* v_a_2296_; lean_object* v_a_2303_; 
v___x_2294_ = lean_box(0);
v_a_2303_ = lean_array_uget_borrowed(v_as_2283_, v_i_2285_);
if (lean_obj_tag(v_a_2303_) == 0)
{
v_a_2296_ = v_snd_2290_;
goto v___jp_2295_;
}
else
{
lean_object* v_val_2304_; lean_object* v___x_2305_; uint8_t v___x_2306_; 
v_val_2304_ = lean_ctor_get(v_a_2303_, 0);
v___x_2305_ = l_Lean_LocalDecl_fvarId(v_val_2304_);
v___x_2306_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_MVarId_getNondepPropHyps_spec__4___redArg(v_a_2282_, v___x_2305_);
if (v___x_2306_ == 0)
{
lean_dec(v___x_2305_);
v_a_2296_ = v_snd_2290_;
goto v___jp_2295_;
}
else
{
lean_object* v___x_2307_; 
v___x_2307_ = lean_array_push(v_snd_2290_, v___x_2305_);
v_a_2296_ = v___x_2307_;
goto v___jp_2295_;
}
}
v___jp_2295_:
{
lean_object* v___x_2298_; 
if (v_isShared_2293_ == 0)
{
lean_ctor_set(v___x_2292_, 1, v_a_2296_);
lean_ctor_set(v___x_2292_, 0, v___x_2294_);
v___x_2298_ = v___x_2292_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v___x_2294_);
lean_ctor_set(v_reuseFailAlloc_2302_, 1, v_a_2296_);
v___x_2298_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
size_t v___x_2299_; size_t v___x_2300_; 
v___x_2299_ = ((size_t)1ULL);
v___x_2300_ = lean_usize_add(v_i_2285_, v___x_2299_);
v_i_2285_ = v___x_2300_;
v_b_2286_ = v___x_2298_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__19_spec__24___redArg___boxed(lean_object* v_a_2310_, lean_object* v_as_2311_, lean_object* v_sz_2312_, lean_object* v_i_2313_, lean_object* v_b_2314_, lean_object* v___y_2315_){
_start:
{
size_t v_sz_boxed_2316_; size_t v_i_boxed_2317_; lean_object* v_res_2318_; 
v_sz_boxed_2316_ = lean_unbox_usize(v_sz_2312_);
lean_dec(v_sz_2312_);
v_i_boxed_2317_ = lean_unbox_usize(v_i_2313_);
lean_dec(v_i_2313_);
v_res_2318_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__19_spec__24___redArg(v_a_2310_, v_as_2311_, v_sz_boxed_2316_, v_i_boxed_2317_, v_b_2314_);
lean_dec_ref(v_as_2311_);
lean_dec_ref(v_a_2310_);
return v_res_2318_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__19(lean_object* v_a_2319_, lean_object* v_as_2320_, size_t v_sz_2321_, size_t v_i_2322_, lean_object* v_b_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_){
_start:
{
uint8_t v___x_2329_; 
v___x_2329_ = lean_usize_dec_lt(v_i_2322_, v_sz_2321_);
if (v___x_2329_ == 0)
{
lean_object* v___x_2330_; 
v___x_2330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2330_, 0, v_b_2323_);
return v___x_2330_;
}
else
{
lean_object* v_snd_2331_; lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2349_; 
v_snd_2331_ = lean_ctor_get(v_b_2323_, 1);
v_isSharedCheck_2349_ = !lean_is_exclusive(v_b_2323_);
if (v_isSharedCheck_2349_ == 0)
{
lean_object* v_unused_2350_; 
v_unused_2350_ = lean_ctor_get(v_b_2323_, 0);
lean_dec(v_unused_2350_);
v___x_2333_ = v_b_2323_;
v_isShared_2334_ = v_isSharedCheck_2349_;
goto v_resetjp_2332_;
}
else
{
lean_inc(v_snd_2331_);
lean_dec(v_b_2323_);
v___x_2333_ = lean_box(0);
v_isShared_2334_ = v_isSharedCheck_2349_;
goto v_resetjp_2332_;
}
v_resetjp_2332_:
{
lean_object* v___x_2335_; lean_object* v_a_2337_; lean_object* v_a_2344_; 
v___x_2335_ = lean_box(0);
v_a_2344_ = lean_array_uget_borrowed(v_as_2320_, v_i_2322_);
if (lean_obj_tag(v_a_2344_) == 0)
{
v_a_2337_ = v_snd_2331_;
goto v___jp_2336_;
}
else
{
lean_object* v_val_2345_; lean_object* v___x_2346_; uint8_t v___x_2347_; 
v_val_2345_ = lean_ctor_get(v_a_2344_, 0);
v___x_2346_ = l_Lean_LocalDecl_fvarId(v_val_2345_);
v___x_2347_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_MVarId_getNondepPropHyps_spec__4___redArg(v_a_2319_, v___x_2346_);
if (v___x_2347_ == 0)
{
lean_dec(v___x_2346_);
v_a_2337_ = v_snd_2331_;
goto v___jp_2336_;
}
else
{
lean_object* v___x_2348_; 
v___x_2348_ = lean_array_push(v_snd_2331_, v___x_2346_);
v_a_2337_ = v___x_2348_;
goto v___jp_2336_;
}
}
v___jp_2336_:
{
lean_object* v___x_2339_; 
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 1, v_a_2337_);
lean_ctor_set(v___x_2333_, 0, v___x_2335_);
v___x_2339_ = v___x_2333_;
goto v_reusejp_2338_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v___x_2335_);
lean_ctor_set(v_reuseFailAlloc_2343_, 1, v_a_2337_);
v___x_2339_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2338_;
}
v_reusejp_2338_:
{
size_t v___x_2340_; size_t v___x_2341_; lean_object* v___x_2342_; 
v___x_2340_ = ((size_t)1ULL);
v___x_2341_ = lean_usize_add(v_i_2322_, v___x_2340_);
v___x_2342_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__19_spec__24___redArg(v_a_2319_, v_as_2320_, v_sz_2321_, v___x_2341_, v___x_2339_);
return v___x_2342_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__19___boxed(lean_object* v_a_2351_, lean_object* v_as_2352_, lean_object* v_sz_2353_, lean_object* v_i_2354_, lean_object* v_b_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_){
_start:
{
size_t v_sz_boxed_2361_; size_t v_i_boxed_2362_; lean_object* v_res_2363_; 
v_sz_boxed_2361_ = lean_unbox_usize(v_sz_2353_);
lean_dec(v_sz_2353_);
v_i_boxed_2362_ = lean_unbox_usize(v_i_2354_);
lean_dec(v_i_2354_);
v_res_2363_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__19(v_a_2351_, v_as_2352_, v_sz_boxed_2361_, v_i_boxed_2362_, v_b_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_);
lean_dec(v___y_2359_);
lean_dec_ref(v___y_2358_);
lean_dec(v___y_2357_);
lean_dec_ref(v___y_2356_);
lean_dec_ref(v_as_2352_);
lean_dec_ref(v_a_2351_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11(lean_object* v_init_2364_, lean_object* v_a_2365_, lean_object* v_n_2366_, lean_object* v_b_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_){
_start:
{
if (lean_obj_tag(v_n_2366_) == 0)
{
lean_object* v_cs_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; size_t v_sz_2376_; size_t v___x_2377_; lean_object* v___x_2378_; 
v_cs_2373_ = lean_ctor_get(v_n_2366_, 0);
v___x_2374_ = lean_box(0);
v___x_2375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2375_, 0, v___x_2374_);
lean_ctor_set(v___x_2375_, 1, v_b_2367_);
v_sz_2376_ = lean_array_size(v_cs_2373_);
v___x_2377_ = ((size_t)0ULL);
v___x_2378_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__18(v_init_2364_, v_a_2365_, v_cs_2373_, v_sz_2376_, v___x_2377_, v___x_2375_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_);
if (lean_obj_tag(v___x_2378_) == 0)
{
lean_object* v_a_2379_; lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2393_; 
v_a_2379_ = lean_ctor_get(v___x_2378_, 0);
v_isSharedCheck_2393_ = !lean_is_exclusive(v___x_2378_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2381_ = v___x_2378_;
v_isShared_2382_ = v_isSharedCheck_2393_;
goto v_resetjp_2380_;
}
else
{
lean_inc(v_a_2379_);
lean_dec(v___x_2378_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2393_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v_fst_2383_; 
v_fst_2383_ = lean_ctor_get(v_a_2379_, 0);
if (lean_obj_tag(v_fst_2383_) == 0)
{
lean_object* v_snd_2384_; lean_object* v___x_2385_; lean_object* v___x_2387_; 
v_snd_2384_ = lean_ctor_get(v_a_2379_, 1);
lean_inc(v_snd_2384_);
lean_dec(v_a_2379_);
v___x_2385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2385_, 0, v_snd_2384_);
if (v_isShared_2382_ == 0)
{
lean_ctor_set(v___x_2381_, 0, v___x_2385_);
v___x_2387_ = v___x_2381_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v___x_2385_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
else
{
lean_object* v_val_2389_; lean_object* v___x_2391_; 
lean_inc_ref(v_fst_2383_);
lean_dec(v_a_2379_);
v_val_2389_ = lean_ctor_get(v_fst_2383_, 0);
lean_inc(v_val_2389_);
lean_dec_ref_known(v_fst_2383_, 1);
if (v_isShared_2382_ == 0)
{
lean_ctor_set(v___x_2381_, 0, v_val_2389_);
v___x_2391_ = v___x_2381_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_val_2389_);
v___x_2391_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
return v___x_2391_;
}
}
}
}
else
{
lean_object* v_a_2394_; lean_object* v___x_2396_; uint8_t v_isShared_2397_; uint8_t v_isSharedCheck_2401_; 
v_a_2394_ = lean_ctor_get(v___x_2378_, 0);
v_isSharedCheck_2401_ = !lean_is_exclusive(v___x_2378_);
if (v_isSharedCheck_2401_ == 0)
{
v___x_2396_ = v___x_2378_;
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
else
{
lean_inc(v_a_2394_);
lean_dec(v___x_2378_);
v___x_2396_ = lean_box(0);
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
v_resetjp_2395_:
{
lean_object* v___x_2399_; 
if (v_isShared_2397_ == 0)
{
v___x_2399_ = v___x_2396_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v_a_2394_);
v___x_2399_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
return v___x_2399_;
}
}
}
}
else
{
lean_object* v_vs_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; size_t v_sz_2405_; size_t v___x_2406_; lean_object* v___x_2407_; 
v_vs_2402_ = lean_ctor_get(v_n_2366_, 0);
v___x_2403_ = lean_box(0);
v___x_2404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2404_, 0, v___x_2403_);
lean_ctor_set(v___x_2404_, 1, v_b_2367_);
v_sz_2405_ = lean_array_size(v_vs_2402_);
v___x_2406_ = ((size_t)0ULL);
v___x_2407_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__19(v_a_2365_, v_vs_2402_, v_sz_2405_, v___x_2406_, v___x_2404_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_);
if (lean_obj_tag(v___x_2407_) == 0)
{
lean_object* v_a_2408_; lean_object* v___x_2410_; uint8_t v_isShared_2411_; uint8_t v_isSharedCheck_2422_; 
v_a_2408_ = lean_ctor_get(v___x_2407_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2407_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2410_ = v___x_2407_;
v_isShared_2411_ = v_isSharedCheck_2422_;
goto v_resetjp_2409_;
}
else
{
lean_inc(v_a_2408_);
lean_dec(v___x_2407_);
v___x_2410_ = lean_box(0);
v_isShared_2411_ = v_isSharedCheck_2422_;
goto v_resetjp_2409_;
}
v_resetjp_2409_:
{
lean_object* v_fst_2412_; 
v_fst_2412_ = lean_ctor_get(v_a_2408_, 0);
if (lean_obj_tag(v_fst_2412_) == 0)
{
lean_object* v_snd_2413_; lean_object* v___x_2414_; lean_object* v___x_2416_; 
v_snd_2413_ = lean_ctor_get(v_a_2408_, 1);
lean_inc(v_snd_2413_);
lean_dec(v_a_2408_);
v___x_2414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2414_, 0, v_snd_2413_);
if (v_isShared_2411_ == 0)
{
lean_ctor_set(v___x_2410_, 0, v___x_2414_);
v___x_2416_ = v___x_2410_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v___x_2414_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
return v___x_2416_;
}
}
else
{
lean_object* v_val_2418_; lean_object* v___x_2420_; 
lean_inc_ref(v_fst_2412_);
lean_dec(v_a_2408_);
v_val_2418_ = lean_ctor_get(v_fst_2412_, 0);
lean_inc(v_val_2418_);
lean_dec_ref_known(v_fst_2412_, 1);
if (v_isShared_2411_ == 0)
{
lean_ctor_set(v___x_2410_, 0, v_val_2418_);
v___x_2420_ = v___x_2410_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v_val_2418_);
v___x_2420_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
return v___x_2420_;
}
}
}
}
else
{
lean_object* v_a_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2430_; 
v_a_2423_ = lean_ctor_get(v___x_2407_, 0);
v_isSharedCheck_2430_ = !lean_is_exclusive(v___x_2407_);
if (v_isSharedCheck_2430_ == 0)
{
v___x_2425_ = v___x_2407_;
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_a_2423_);
lean_dec(v___x_2407_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v___x_2428_; 
if (v_isShared_2426_ == 0)
{
v___x_2428_ = v___x_2425_;
goto v_reusejp_2427_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v_a_2423_);
v___x_2428_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2427_;
}
v_reusejp_2427_:
{
return v___x_2428_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__18(lean_object* v_init_2431_, lean_object* v_a_2432_, lean_object* v_as_2433_, size_t v_sz_2434_, size_t v_i_2435_, lean_object* v_b_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_){
_start:
{
uint8_t v___x_2442_; 
v___x_2442_ = lean_usize_dec_lt(v_i_2435_, v_sz_2434_);
if (v___x_2442_ == 0)
{
lean_object* v___x_2443_; 
v___x_2443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2443_, 0, v_b_2436_);
return v___x_2443_;
}
else
{
lean_object* v_snd_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2478_; 
v_snd_2444_ = lean_ctor_get(v_b_2436_, 1);
v_isSharedCheck_2478_ = !lean_is_exclusive(v_b_2436_);
if (v_isSharedCheck_2478_ == 0)
{
lean_object* v_unused_2479_; 
v_unused_2479_ = lean_ctor_get(v_b_2436_, 0);
lean_dec(v_unused_2479_);
v___x_2446_ = v_b_2436_;
v_isShared_2447_ = v_isSharedCheck_2478_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_snd_2444_);
lean_dec(v_b_2436_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2478_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v___x_2448_; lean_object* v_a_2449_; lean_object* v___x_2450_; 
v___x_2448_ = lean_box(0);
v_a_2449_ = lean_array_uget_borrowed(v_as_2433_, v_i_2435_);
lean_inc(v_snd_2444_);
v___x_2450_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11(v_init_2431_, v_a_2432_, v_a_2449_, v_snd_2444_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_);
if (lean_obj_tag(v___x_2450_) == 0)
{
lean_object* v_a_2451_; lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_2469_; 
v_a_2451_ = lean_ctor_get(v___x_2450_, 0);
v_isSharedCheck_2469_ = !lean_is_exclusive(v___x_2450_);
if (v_isSharedCheck_2469_ == 0)
{
v___x_2453_ = v___x_2450_;
v_isShared_2454_ = v_isSharedCheck_2469_;
goto v_resetjp_2452_;
}
else
{
lean_inc(v_a_2451_);
lean_dec(v___x_2450_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_2469_;
goto v_resetjp_2452_;
}
v_resetjp_2452_:
{
if (lean_obj_tag(v_a_2451_) == 0)
{
lean_object* v___x_2455_; lean_object* v___x_2457_; 
v___x_2455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2455_, 0, v_a_2451_);
if (v_isShared_2447_ == 0)
{
lean_ctor_set(v___x_2446_, 0, v___x_2455_);
v___x_2457_ = v___x_2446_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2461_; 
v_reuseFailAlloc_2461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2461_, 0, v___x_2455_);
lean_ctor_set(v_reuseFailAlloc_2461_, 1, v_snd_2444_);
v___x_2457_ = v_reuseFailAlloc_2461_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
lean_object* v___x_2459_; 
if (v_isShared_2454_ == 0)
{
lean_ctor_set(v___x_2453_, 0, v___x_2457_);
v___x_2459_ = v___x_2453_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v___x_2457_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
return v___x_2459_;
}
}
}
else
{
lean_object* v_a_2462_; lean_object* v___x_2464_; 
lean_del_object(v___x_2453_);
lean_dec(v_snd_2444_);
v_a_2462_ = lean_ctor_get(v_a_2451_, 0);
lean_inc(v_a_2462_);
lean_dec_ref_known(v_a_2451_, 1);
if (v_isShared_2447_ == 0)
{
lean_ctor_set(v___x_2446_, 1, v_a_2462_);
lean_ctor_set(v___x_2446_, 0, v___x_2448_);
v___x_2464_ = v___x_2446_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v___x_2448_);
lean_ctor_set(v_reuseFailAlloc_2468_, 1, v_a_2462_);
v___x_2464_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
size_t v___x_2465_; size_t v___x_2466_; 
v___x_2465_ = ((size_t)1ULL);
v___x_2466_ = lean_usize_add(v_i_2435_, v___x_2465_);
v_i_2435_ = v___x_2466_;
v_b_2436_ = v___x_2464_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2470_; lean_object* v___x_2472_; uint8_t v_isShared_2473_; uint8_t v_isSharedCheck_2477_; 
lean_del_object(v___x_2446_);
lean_dec(v_snd_2444_);
v_a_2470_ = lean_ctor_get(v___x_2450_, 0);
v_isSharedCheck_2477_ = !lean_is_exclusive(v___x_2450_);
if (v_isSharedCheck_2477_ == 0)
{
v___x_2472_ = v___x_2450_;
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
else
{
lean_inc(v_a_2470_);
lean_dec(v___x_2450_);
v___x_2472_ = lean_box(0);
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
v_resetjp_2471_:
{
lean_object* v___x_2475_; 
if (v_isShared_2473_ == 0)
{
v___x_2475_ = v___x_2472_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_a_2470_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
return v___x_2475_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__18___boxed(lean_object* v_init_2480_, lean_object* v_a_2481_, lean_object* v_as_2482_, lean_object* v_sz_2483_, lean_object* v_i_2484_, lean_object* v_b_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_){
_start:
{
size_t v_sz_boxed_2491_; size_t v_i_boxed_2492_; lean_object* v_res_2493_; 
v_sz_boxed_2491_ = lean_unbox_usize(v_sz_2483_);
lean_dec(v_sz_2483_);
v_i_boxed_2492_ = lean_unbox_usize(v_i_2484_);
lean_dec(v_i_2484_);
v_res_2493_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__18(v_init_2480_, v_a_2481_, v_as_2482_, v_sz_boxed_2491_, v_i_boxed_2492_, v_b_2485_, v___y_2486_, v___y_2487_, v___y_2488_, v___y_2489_);
lean_dec(v___y_2489_);
lean_dec_ref(v___y_2488_);
lean_dec(v___y_2487_);
lean_dec_ref(v___y_2486_);
lean_dec_ref(v_as_2482_);
lean_dec_ref(v_a_2481_);
lean_dec_ref(v_init_2480_);
return v_res_2493_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11___boxed(lean_object* v_init_2494_, lean_object* v_a_2495_, lean_object* v_n_2496_, lean_object* v_b_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_){
_start:
{
lean_object* v_res_2503_; 
v_res_2503_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11(v_init_2494_, v_a_2495_, v_n_2496_, v_b_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_);
lean_dec(v___y_2501_);
lean_dec_ref(v___y_2500_);
lean_dec(v___y_2499_);
lean_dec_ref(v___y_2498_);
lean_dec_ref(v_n_2496_);
lean_dec_ref(v_a_2495_);
lean_dec_ref(v_init_2494_);
return v_res_2503_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__12_spec__21___redArg(lean_object* v_a_2504_, lean_object* v_as_2505_, size_t v_sz_2506_, size_t v_i_2507_, lean_object* v_b_2508_){
_start:
{
uint8_t v___x_2510_; 
v___x_2510_ = lean_usize_dec_lt(v_i_2507_, v_sz_2506_);
if (v___x_2510_ == 0)
{
lean_object* v___x_2511_; 
v___x_2511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2511_, 0, v_b_2508_);
return v___x_2511_;
}
else
{
lean_object* v_snd_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2530_; 
v_snd_2512_ = lean_ctor_get(v_b_2508_, 1);
v_isSharedCheck_2530_ = !lean_is_exclusive(v_b_2508_);
if (v_isSharedCheck_2530_ == 0)
{
lean_object* v_unused_2531_; 
v_unused_2531_ = lean_ctor_get(v_b_2508_, 0);
lean_dec(v_unused_2531_);
v___x_2514_ = v_b_2508_;
v_isShared_2515_ = v_isSharedCheck_2530_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_snd_2512_);
lean_dec(v_b_2508_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2530_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
lean_object* v___x_2516_; lean_object* v_a_2518_; lean_object* v_a_2525_; 
v___x_2516_ = lean_box(0);
v_a_2525_ = lean_array_uget_borrowed(v_as_2505_, v_i_2507_);
if (lean_obj_tag(v_a_2525_) == 0)
{
v_a_2518_ = v_snd_2512_;
goto v___jp_2517_;
}
else
{
lean_object* v_val_2526_; lean_object* v___x_2527_; uint8_t v___x_2528_; 
v_val_2526_ = lean_ctor_get(v_a_2525_, 0);
v___x_2527_ = l_Lean_LocalDecl_fvarId(v_val_2526_);
v___x_2528_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_MVarId_getNondepPropHyps_spec__4___redArg(v_a_2504_, v___x_2527_);
if (v___x_2528_ == 0)
{
lean_dec(v___x_2527_);
v_a_2518_ = v_snd_2512_;
goto v___jp_2517_;
}
else
{
lean_object* v___x_2529_; 
v___x_2529_ = lean_array_push(v_snd_2512_, v___x_2527_);
v_a_2518_ = v___x_2529_;
goto v___jp_2517_;
}
}
v___jp_2517_:
{
lean_object* v___x_2520_; 
if (v_isShared_2515_ == 0)
{
lean_ctor_set(v___x_2514_, 1, v_a_2518_);
lean_ctor_set(v___x_2514_, 0, v___x_2516_);
v___x_2520_ = v___x_2514_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2524_; 
v_reuseFailAlloc_2524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2524_, 0, v___x_2516_);
lean_ctor_set(v_reuseFailAlloc_2524_, 1, v_a_2518_);
v___x_2520_ = v_reuseFailAlloc_2524_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
size_t v___x_2521_; size_t v___x_2522_; 
v___x_2521_ = ((size_t)1ULL);
v___x_2522_ = lean_usize_add(v_i_2507_, v___x_2521_);
v_i_2507_ = v___x_2522_;
v_b_2508_ = v___x_2520_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__12_spec__21___redArg___boxed(lean_object* v_a_2532_, lean_object* v_as_2533_, lean_object* v_sz_2534_, lean_object* v_i_2535_, lean_object* v_b_2536_, lean_object* v___y_2537_){
_start:
{
size_t v_sz_boxed_2538_; size_t v_i_boxed_2539_; lean_object* v_res_2540_; 
v_sz_boxed_2538_ = lean_unbox_usize(v_sz_2534_);
lean_dec(v_sz_2534_);
v_i_boxed_2539_ = lean_unbox_usize(v_i_2535_);
lean_dec(v_i_2535_);
v_res_2540_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__12_spec__21___redArg(v_a_2532_, v_as_2533_, v_sz_boxed_2538_, v_i_boxed_2539_, v_b_2536_);
lean_dec_ref(v_as_2533_);
lean_dec_ref(v_a_2532_);
return v_res_2540_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__12(lean_object* v_a_2541_, lean_object* v_as_2542_, size_t v_sz_2543_, size_t v_i_2544_, lean_object* v_b_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_){
_start:
{
uint8_t v___x_2551_; 
v___x_2551_ = lean_usize_dec_lt(v_i_2544_, v_sz_2543_);
if (v___x_2551_ == 0)
{
lean_object* v___x_2552_; 
v___x_2552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2552_, 0, v_b_2545_);
return v___x_2552_;
}
else
{
lean_object* v_snd_2553_; lean_object* v___x_2555_; uint8_t v_isShared_2556_; uint8_t v_isSharedCheck_2571_; 
v_snd_2553_ = lean_ctor_get(v_b_2545_, 1);
v_isSharedCheck_2571_ = !lean_is_exclusive(v_b_2545_);
if (v_isSharedCheck_2571_ == 0)
{
lean_object* v_unused_2572_; 
v_unused_2572_ = lean_ctor_get(v_b_2545_, 0);
lean_dec(v_unused_2572_);
v___x_2555_ = v_b_2545_;
v_isShared_2556_ = v_isSharedCheck_2571_;
goto v_resetjp_2554_;
}
else
{
lean_inc(v_snd_2553_);
lean_dec(v_b_2545_);
v___x_2555_ = lean_box(0);
v_isShared_2556_ = v_isSharedCheck_2571_;
goto v_resetjp_2554_;
}
v_resetjp_2554_:
{
lean_object* v___x_2557_; lean_object* v_a_2559_; lean_object* v_a_2566_; 
v___x_2557_ = lean_box(0);
v_a_2566_ = lean_array_uget_borrowed(v_as_2542_, v_i_2544_);
if (lean_obj_tag(v_a_2566_) == 0)
{
v_a_2559_ = v_snd_2553_;
goto v___jp_2558_;
}
else
{
lean_object* v_val_2567_; lean_object* v___x_2568_; uint8_t v___x_2569_; 
v_val_2567_ = lean_ctor_get(v_a_2566_, 0);
v___x_2568_ = l_Lean_LocalDecl_fvarId(v_val_2567_);
v___x_2569_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_MVarId_getNondepPropHyps_spec__4___redArg(v_a_2541_, v___x_2568_);
if (v___x_2569_ == 0)
{
lean_dec(v___x_2568_);
v_a_2559_ = v_snd_2553_;
goto v___jp_2558_;
}
else
{
lean_object* v___x_2570_; 
v___x_2570_ = lean_array_push(v_snd_2553_, v___x_2568_);
v_a_2559_ = v___x_2570_;
goto v___jp_2558_;
}
}
v___jp_2558_:
{
lean_object* v___x_2561_; 
if (v_isShared_2556_ == 0)
{
lean_ctor_set(v___x_2555_, 1, v_a_2559_);
lean_ctor_set(v___x_2555_, 0, v___x_2557_);
v___x_2561_ = v___x_2555_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v___x_2557_);
lean_ctor_set(v_reuseFailAlloc_2565_, 1, v_a_2559_);
v___x_2561_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
size_t v___x_2562_; size_t v___x_2563_; lean_object* v___x_2564_; 
v___x_2562_ = ((size_t)1ULL);
v___x_2563_ = lean_usize_add(v_i_2544_, v___x_2562_);
v___x_2564_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__12_spec__21___redArg(v_a_2541_, v_as_2542_, v_sz_2543_, v___x_2563_, v___x_2561_);
return v___x_2564_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__12___boxed(lean_object* v_a_2573_, lean_object* v_as_2574_, lean_object* v_sz_2575_, lean_object* v_i_2576_, lean_object* v_b_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_){
_start:
{
size_t v_sz_boxed_2583_; size_t v_i_boxed_2584_; lean_object* v_res_2585_; 
v_sz_boxed_2583_ = lean_unbox_usize(v_sz_2575_);
lean_dec(v_sz_2575_);
v_i_boxed_2584_ = lean_unbox_usize(v_i_2576_);
lean_dec(v_i_2576_);
v_res_2585_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__12(v_a_2573_, v_as_2574_, v_sz_boxed_2583_, v_i_boxed_2584_, v_b_2577_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_);
lean_dec(v___y_2581_);
lean_dec_ref(v___y_2580_);
lean_dec(v___y_2579_);
lean_dec_ref(v___y_2578_);
lean_dec_ref(v_as_2574_);
lean_dec_ref(v_a_2573_);
return v_res_2585_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5(lean_object* v_a_2586_, lean_object* v_t_2587_, lean_object* v_init_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_){
_start:
{
lean_object* v_root_2594_; lean_object* v_tail_2595_; lean_object* v___x_2596_; 
v_root_2594_ = lean_ctor_get(v_t_2587_, 0);
v_tail_2595_ = lean_ctor_get(v_t_2587_, 1);
lean_inc_ref(v_init_2588_);
v___x_2596_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11(v_init_2588_, v_a_2586_, v_root_2594_, v_init_2588_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_);
lean_dec_ref(v_init_2588_);
if (lean_obj_tag(v___x_2596_) == 0)
{
lean_object* v_a_2597_; lean_object* v___x_2599_; uint8_t v_isShared_2600_; uint8_t v_isSharedCheck_2633_; 
v_a_2597_ = lean_ctor_get(v___x_2596_, 0);
v_isSharedCheck_2633_ = !lean_is_exclusive(v___x_2596_);
if (v_isSharedCheck_2633_ == 0)
{
v___x_2599_ = v___x_2596_;
v_isShared_2600_ = v_isSharedCheck_2633_;
goto v_resetjp_2598_;
}
else
{
lean_inc(v_a_2597_);
lean_dec(v___x_2596_);
v___x_2599_ = lean_box(0);
v_isShared_2600_ = v_isSharedCheck_2633_;
goto v_resetjp_2598_;
}
v_resetjp_2598_:
{
if (lean_obj_tag(v_a_2597_) == 0)
{
lean_object* v_a_2601_; lean_object* v___x_2603_; 
v_a_2601_ = lean_ctor_get(v_a_2597_, 0);
lean_inc(v_a_2601_);
lean_dec_ref_known(v_a_2597_, 1);
if (v_isShared_2600_ == 0)
{
lean_ctor_set(v___x_2599_, 0, v_a_2601_);
v___x_2603_ = v___x_2599_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2604_; 
v_reuseFailAlloc_2604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2604_, 0, v_a_2601_);
v___x_2603_ = v_reuseFailAlloc_2604_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
return v___x_2603_;
}
}
else
{
lean_object* v_a_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; size_t v_sz_2608_; size_t v___x_2609_; lean_object* v___x_2610_; 
lean_del_object(v___x_2599_);
v_a_2605_ = lean_ctor_get(v_a_2597_, 0);
lean_inc(v_a_2605_);
lean_dec_ref_known(v_a_2597_, 1);
v___x_2606_ = lean_box(0);
v___x_2607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2607_, 0, v___x_2606_);
lean_ctor_set(v___x_2607_, 1, v_a_2605_);
v_sz_2608_ = lean_array_size(v_tail_2595_);
v___x_2609_ = ((size_t)0ULL);
v___x_2610_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__12(v_a_2586_, v_tail_2595_, v_sz_2608_, v___x_2609_, v___x_2607_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_);
if (lean_obj_tag(v___x_2610_) == 0)
{
lean_object* v_a_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2624_; 
v_a_2611_ = lean_ctor_get(v___x_2610_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___x_2610_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2613_ = v___x_2610_;
v_isShared_2614_ = v_isSharedCheck_2624_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_a_2611_);
lean_dec(v___x_2610_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2624_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v_fst_2615_; 
v_fst_2615_ = lean_ctor_get(v_a_2611_, 0);
if (lean_obj_tag(v_fst_2615_) == 0)
{
lean_object* v_snd_2616_; lean_object* v___x_2618_; 
v_snd_2616_ = lean_ctor_get(v_a_2611_, 1);
lean_inc(v_snd_2616_);
lean_dec(v_a_2611_);
if (v_isShared_2614_ == 0)
{
lean_ctor_set(v___x_2613_, 0, v_snd_2616_);
v___x_2618_ = v___x_2613_;
goto v_reusejp_2617_;
}
else
{
lean_object* v_reuseFailAlloc_2619_; 
v_reuseFailAlloc_2619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2619_, 0, v_snd_2616_);
v___x_2618_ = v_reuseFailAlloc_2619_;
goto v_reusejp_2617_;
}
v_reusejp_2617_:
{
return v___x_2618_;
}
}
else
{
lean_object* v_val_2620_; lean_object* v___x_2622_; 
lean_inc_ref(v_fst_2615_);
lean_dec(v_a_2611_);
v_val_2620_ = lean_ctor_get(v_fst_2615_, 0);
lean_inc(v_val_2620_);
lean_dec_ref_known(v_fst_2615_, 1);
if (v_isShared_2614_ == 0)
{
lean_ctor_set(v___x_2613_, 0, v_val_2620_);
v___x_2622_ = v___x_2613_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v_val_2620_);
v___x_2622_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
return v___x_2622_;
}
}
}
}
else
{
lean_object* v_a_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2632_; 
v_a_2625_ = lean_ctor_get(v___x_2610_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2610_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2627_ = v___x_2610_;
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_a_2625_);
lean_dec(v___x_2610_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2630_; 
if (v_isShared_2628_ == 0)
{
v___x_2630_ = v___x_2627_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_a_2625_);
v___x_2630_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
return v___x_2630_;
}
}
}
}
}
}
else
{
lean_object* v_a_2634_; lean_object* v___x_2636_; uint8_t v_isShared_2637_; uint8_t v_isSharedCheck_2641_; 
v_a_2634_ = lean_ctor_get(v___x_2596_, 0);
v_isSharedCheck_2641_ = !lean_is_exclusive(v___x_2596_);
if (v_isSharedCheck_2641_ == 0)
{
v___x_2636_ = v___x_2596_;
v_isShared_2637_ = v_isSharedCheck_2641_;
goto v_resetjp_2635_;
}
else
{
lean_inc(v_a_2634_);
lean_dec(v___x_2596_);
v___x_2636_ = lean_box(0);
v_isShared_2637_ = v_isSharedCheck_2641_;
goto v_resetjp_2635_;
}
v_resetjp_2635_:
{
lean_object* v___x_2639_; 
if (v_isShared_2637_ == 0)
{
v___x_2639_ = v___x_2636_;
goto v_reusejp_2638_;
}
else
{
lean_object* v_reuseFailAlloc_2640_; 
v_reuseFailAlloc_2640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2640_, 0, v_a_2634_);
v___x_2639_ = v_reuseFailAlloc_2640_;
goto v_reusejp_2638_;
}
v_reusejp_2638_:
{
return v___x_2639_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5___boxed(lean_object* v_a_2642_, lean_object* v_t_2643_, lean_object* v_init_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_){
_start:
{
lean_object* v_res_2650_; 
v_res_2650_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5(v_a_2642_, v_t_2643_, v_init_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_);
lean_dec(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec(v___y_2646_);
lean_dec_ref(v___y_2645_);
lean_dec_ref(v_t_2643_);
lean_dec_ref(v_a_2642_);
return v_res_2650_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__2(lean_object* v_candidates_2653_, lean_object* v_mvarId_2654_, lean_object* v___f_2655_, lean_object* v___f_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_){
_start:
{
lean_object* v_lctx_2662_; lean_object* v_decls_2663_; lean_object* v___x_2664_; 
v_lctx_2662_ = lean_ctor_get(v___y_2657_, 2);
v_decls_2663_ = lean_ctor_get(v_lctx_2662_, 1);
lean_inc_ref(v_decls_2663_);
v___x_2664_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3(v_decls_2663_, v_candidates_2653_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_);
if (lean_obj_tag(v___x_2664_) == 0)
{
lean_object* v_a_2665_; lean_object* v___x_2666_; 
v_a_2665_ = lean_ctor_get(v___x_2664_, 0);
lean_inc(v_a_2665_);
lean_dec_ref_known(v___x_2664_, 1);
v___x_2666_ = l_Lean_MVarId_getType(v_mvarId_2654_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_);
if (lean_obj_tag(v___x_2666_) == 0)
{
lean_object* v_a_2667_; lean_object* v___x_2668_; lean_object* v_a_2669_; uint8_t v___x_2670_; lean_object* v___x_2671_; lean_object* v___y_2673_; 
v_a_2667_ = lean_ctor_get(v___x_2666_, 0);
lean_inc(v_a_2667_);
lean_dec_ref_known(v___x_2666_, 1);
v___x_2668_ = l_Lean_instantiateMVars___at___00Lean_MVarId_getType_x27_spec__0___redArg(v_a_2667_, v___y_2658_);
v_a_2669_ = lean_ctor_get(v___x_2668_, 0);
lean_inc(v_a_2669_);
lean_dec_ref(v___x_2668_);
v___x_2670_ = l_Lean_Expr_hasFVar(v_a_2669_);
v___x_2671_ = lean_st_mk_ref(v_a_2665_);
if (v___x_2670_ == 0)
{
lean_object* v___x_2697_; lean_object* v___x_2698_; 
lean_dec(v_a_2669_);
lean_dec_ref(v___f_2656_);
v___x_2697_ = lean_box(0);
lean_inc(v___y_2660_);
lean_inc_ref(v___y_2659_);
lean_inc(v___y_2658_);
lean_inc_ref(v___y_2657_);
lean_inc(v___x_2671_);
v___x_2698_ = lean_apply_7(v___f_2655_, v___x_2697_, v___x_2671_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_, lean_box(0));
v___y_2673_ = v___x_2698_;
goto v___jp_2672_;
}
else
{
lean_object* v___x_2699_; uint8_t v___x_2700_; lean_object* v___x_2701_; 
v___x_2699_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__3_spec__8___lam__2___closed__0));
v___x_2700_ = 0;
v___x_2701_ = l_Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1(v___x_2699_, v___f_2656_, v_a_2669_, v___x_2700_, v___x_2671_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_);
if (lean_obj_tag(v___x_2701_) == 0)
{
lean_object* v_a_2702_; lean_object* v___x_2703_; 
v_a_2702_ = lean_ctor_get(v___x_2701_, 0);
lean_inc(v_a_2702_);
lean_dec_ref_known(v___x_2701_, 1);
lean_inc(v___y_2660_);
lean_inc_ref(v___y_2659_);
lean_inc(v___y_2658_);
lean_inc_ref(v___y_2657_);
lean_inc(v___x_2671_);
v___x_2703_ = lean_apply_7(v___f_2655_, v_a_2702_, v___x_2671_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_, lean_box(0));
v___y_2673_ = v___x_2703_;
goto v___jp_2672_;
}
else
{
lean_object* v_a_2704_; lean_object* v___x_2706_; uint8_t v_isShared_2707_; uint8_t v_isSharedCheck_2711_; 
lean_dec(v___x_2671_);
lean_dec_ref(v_decls_2663_);
lean_dec(v___y_2660_);
lean_dec_ref(v___y_2659_);
lean_dec(v___y_2658_);
lean_dec_ref(v___y_2657_);
lean_dec_ref(v___f_2655_);
v_a_2704_ = lean_ctor_get(v___x_2701_, 0);
v_isSharedCheck_2711_ = !lean_is_exclusive(v___x_2701_);
if (v_isSharedCheck_2711_ == 0)
{
v___x_2706_ = v___x_2701_;
v_isShared_2707_ = v_isSharedCheck_2711_;
goto v_resetjp_2705_;
}
else
{
lean_inc(v_a_2704_);
lean_dec(v___x_2701_);
v___x_2706_ = lean_box(0);
v_isShared_2707_ = v_isSharedCheck_2711_;
goto v_resetjp_2705_;
}
v_resetjp_2705_:
{
lean_object* v___x_2709_; 
if (v_isShared_2707_ == 0)
{
v___x_2709_ = v___x_2706_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v_a_2704_);
v___x_2709_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
return v___x_2709_;
}
}
}
}
v___jp_2672_:
{
if (lean_obj_tag(v___y_2673_) == 0)
{
lean_object* v_a_2674_; lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2688_; 
v_a_2674_ = lean_ctor_get(v___y_2673_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___y_2673_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2676_ = v___y_2673_;
v_isShared_2677_ = v_isSharedCheck_2688_;
goto v_resetjp_2675_;
}
else
{
lean_inc(v_a_2674_);
lean_dec(v___y_2673_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2688_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v___x_2678_; lean_object* v_size_2679_; lean_object* v___x_2680_; uint8_t v___x_2681_; 
v___x_2678_ = lean_st_ref_get(v___x_2671_);
lean_dec(v___x_2671_);
lean_dec(v___x_2678_);
v_size_2679_ = lean_ctor_get(v_a_2674_, 0);
v___x_2680_ = lean_unsigned_to_nat(0u);
v___x_2681_ = lean_nat_dec_eq(v_size_2679_, v___x_2680_);
if (v___x_2681_ == 0)
{
lean_object* v___x_2682_; lean_object* v___x_2683_; 
lean_del_object(v___x_2676_);
v___x_2682_ = ((lean_object*)(l_Lean_MVarId_getNondepPropHyps___lam__2___closed__0));
v___x_2683_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5(v_a_2674_, v_decls_2663_, v___x_2682_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_);
lean_dec(v___y_2660_);
lean_dec_ref(v___y_2659_);
lean_dec(v___y_2658_);
lean_dec_ref(v___y_2657_);
lean_dec_ref(v_decls_2663_);
lean_dec(v_a_2674_);
return v___x_2683_;
}
else
{
lean_object* v___x_2684_; lean_object* v___x_2686_; 
lean_dec(v_a_2674_);
lean_dec_ref(v_decls_2663_);
lean_dec(v___y_2660_);
lean_dec_ref(v___y_2659_);
lean_dec(v___y_2658_);
lean_dec_ref(v___y_2657_);
v___x_2684_ = ((lean_object*)(l_Lean_MVarId_getNondepPropHyps___lam__2___closed__0));
if (v_isShared_2677_ == 0)
{
lean_ctor_set(v___x_2676_, 0, v___x_2684_);
v___x_2686_ = v___x_2676_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v___x_2684_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
}
}
else
{
lean_object* v_a_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2696_; 
lean_dec(v___x_2671_);
lean_dec_ref(v_decls_2663_);
lean_dec(v___y_2660_);
lean_dec_ref(v___y_2659_);
lean_dec(v___y_2658_);
lean_dec_ref(v___y_2657_);
v_a_2689_ = lean_ctor_get(v___y_2673_, 0);
v_isSharedCheck_2696_ = !lean_is_exclusive(v___y_2673_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2691_ = v___y_2673_;
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_a_2689_);
lean_dec(v___y_2673_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v___x_2694_; 
if (v_isShared_2692_ == 0)
{
v___x_2694_ = v___x_2691_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v_a_2689_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
return v___x_2694_;
}
}
}
}
}
else
{
lean_object* v_a_2712_; lean_object* v___x_2714_; uint8_t v_isShared_2715_; uint8_t v_isSharedCheck_2719_; 
lean_dec(v_a_2665_);
lean_dec_ref(v_decls_2663_);
lean_dec(v___y_2660_);
lean_dec_ref(v___y_2659_);
lean_dec(v___y_2658_);
lean_dec_ref(v___y_2657_);
lean_dec_ref(v___f_2656_);
lean_dec_ref(v___f_2655_);
v_a_2712_ = lean_ctor_get(v___x_2666_, 0);
v_isSharedCheck_2719_ = !lean_is_exclusive(v___x_2666_);
if (v_isSharedCheck_2719_ == 0)
{
v___x_2714_ = v___x_2666_;
v_isShared_2715_ = v_isSharedCheck_2719_;
goto v_resetjp_2713_;
}
else
{
lean_inc(v_a_2712_);
lean_dec(v___x_2666_);
v___x_2714_ = lean_box(0);
v_isShared_2715_ = v_isSharedCheck_2719_;
goto v_resetjp_2713_;
}
v_resetjp_2713_:
{
lean_object* v___x_2717_; 
if (v_isShared_2715_ == 0)
{
v___x_2717_ = v___x_2714_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v_a_2712_);
v___x_2717_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
return v___x_2717_;
}
}
}
}
else
{
lean_object* v_a_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2727_; 
lean_dec_ref(v_decls_2663_);
lean_dec(v___y_2660_);
lean_dec_ref(v___y_2659_);
lean_dec(v___y_2658_);
lean_dec_ref(v___y_2657_);
lean_dec_ref(v___f_2656_);
lean_dec_ref(v___f_2655_);
lean_dec(v_mvarId_2654_);
v_a_2720_ = lean_ctor_get(v___x_2664_, 0);
v_isSharedCheck_2727_ = !lean_is_exclusive(v___x_2664_);
if (v_isSharedCheck_2727_ == 0)
{
v___x_2722_ = v___x_2664_;
v_isShared_2723_ = v_isSharedCheck_2727_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_a_2720_);
lean_dec(v___x_2664_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___lam__2___boxed(lean_object* v_candidates_2728_, lean_object* v_mvarId_2729_, lean_object* v___f_2730_, lean_object* v___f_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_){
_start:
{
lean_object* v_res_2737_; 
v_res_2737_ = l_Lean_MVarId_getNondepPropHyps___lam__2(v_candidates_2728_, v_mvarId_2729_, v___f_2730_, v___f_2731_, v___y_2732_, v___y_2733_, v___y_2734_, v___y_2735_);
return v_res_2737_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps(lean_object* v_mvarId_2740_, lean_object* v_a_2741_, lean_object* v_a_2742_, lean_object* v_a_2743_, lean_object* v_a_2744_){
_start:
{
lean_object* v___f_2746_; lean_object* v___f_2747_; lean_object* v_candidates_2748_; lean_object* v___f_2749_; lean_object* v___x_2750_; 
v___f_2746_ = ((lean_object*)(l_Lean_MVarId_getNondepPropHyps___closed__0));
v___f_2747_ = ((lean_object*)(l_Lean_MVarId_getNondepPropHyps___closed__1));
v_candidates_2748_ = l_Lean_instEmptyCollectionFVarIdHashSet;
lean_inc(v_mvarId_2740_);
v___f_2749_ = lean_alloc_closure((void*)(l_Lean_MVarId_getNondepPropHyps___lam__2___boxed), 9, 4);
lean_closure_set(v___f_2749_, 0, v_candidates_2748_);
lean_closure_set(v___f_2749_, 1, v_mvarId_2740_);
lean_closure_set(v___f_2749_, 2, v___f_2747_);
lean_closure_set(v___f_2749_, 3, v___f_2746_);
v___x_2750_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___redArg(v_mvarId_2740_, v___f_2749_, v_a_2741_, v_a_2742_, v_a_2743_, v_a_2744_);
return v___x_2750_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_getNondepPropHyps___boxed(lean_object* v_mvarId_2751_, lean_object* v_a_2752_, lean_object* v_a_2753_, lean_object* v_a_2754_, lean_object* v_a_2755_, lean_object* v_a_2756_){
_start:
{
lean_object* v_res_2757_; 
v_res_2757_ = l_Lean_MVarId_getNondepPropHyps(v_mvarId_2751_, v_a_2752_, v_a_2753_, v_a_2754_, v_a_2755_);
lean_dec(v_a_2755_);
lean_dec_ref(v_a_2754_);
lean_dec(v_a_2753_);
lean_dec_ref(v_a_2752_);
return v_res_2757_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0(lean_object* v_00_u03b2_2758_, lean_object* v_m_2759_, lean_object* v_a_2760_){
_start:
{
lean_object* v___x_2761_; 
v___x_2761_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0___redArg(v_m_2759_, v_a_2760_);
return v___x_2761_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0___boxed(lean_object* v_00_u03b2_2762_, lean_object* v_m_2763_, lean_object* v_a_2764_){
_start:
{
lean_object* v_res_2765_; 
v_res_2765_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0(v_00_u03b2_2762_, v_m_2763_, v_a_2764_);
lean_dec(v_a_2764_);
return v_res_2765_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2(lean_object* v_00_u03b2_2766_, lean_object* v_m_2767_, lean_object* v_a_2768_, lean_object* v_b_2769_){
_start:
{
lean_object* v___x_2770_; 
v___x_2770_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2___redArg(v_m_2767_, v_a_2768_, v_b_2769_);
return v___x_2770_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_MVarId_getNondepPropHyps_spec__4(lean_object* v_00_u03b2_2771_, lean_object* v_m_2772_, lean_object* v_a_2773_){
_start:
{
uint8_t v___x_2774_; 
v___x_2774_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_MVarId_getNondepPropHyps_spec__4___redArg(v_m_2772_, v_a_2773_);
return v___x_2774_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_MVarId_getNondepPropHyps_spec__4___boxed(lean_object* v_00_u03b2_2775_, lean_object* v_m_2776_, lean_object* v_a_2777_){
_start:
{
uint8_t v_res_2778_; lean_object* v_r_2779_; 
v_res_2778_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_MVarId_getNondepPropHyps_spec__4(v_00_u03b2_2775_, v_m_2776_, v_a_2777_);
lean_dec(v_a_2777_);
lean_dec_ref(v_m_2776_);
v_r_2779_ = lean_box(v_res_2778_);
return v_r_2779_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0(lean_object* v_00_u03b2_2780_, lean_object* v_a_2781_, lean_object* v_x_2782_){
_start:
{
uint8_t v___x_2783_; 
v___x_2783_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0___redArg(v_a_2781_, v_x_2782_);
return v___x_2783_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2784_, lean_object* v_a_2785_, lean_object* v_x_2786_){
_start:
{
uint8_t v_res_2787_; lean_object* v_r_2788_; 
v_res_2787_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__0(v_00_u03b2_2784_, v_a_2785_, v_x_2786_);
lean_dec(v_x_2786_);
lean_dec(v_a_2785_);
v_r_2788_ = lean_box(v_res_2787_);
return v_r_2788_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__1(lean_object* v_00_u03b2_2789_, lean_object* v_a_2790_, lean_object* v_x_2791_){
_start:
{
lean_object* v___x_2792_; 
v___x_2792_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__1___redArg(v_a_2790_, v_x_2791_);
return v___x_2792_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2793_, lean_object* v_a_2794_, lean_object* v_x_2795_){
_start:
{
lean_object* v_res_2796_; 
v_res_2796_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00Lean_MVarId_getNondepPropHyps_spec__0_spec__1(v_00_u03b2_2793_, v_a_2794_, v_x_2795_);
lean_dec(v_a_2794_);
return v_res_2796_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__4(lean_object* v_e_2797_, lean_object* v_a_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_){
_start:
{
lean_object* v___x_2805_; 
v___x_2805_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__4___redArg(v_e_2797_, v_a_2798_);
return v___x_2805_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__4___boxed(lean_object* v_e_2806_, lean_object* v_a_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_){
_start:
{
lean_object* v_res_2814_; 
v_res_2814_ = l_Lean_ForEachExprWhere_visited___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__4(v_e_2806_, v_a_2807_, v___y_2808_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_);
lean_dec(v___y_2812_);
lean_dec_ref(v___y_2811_);
lean_dec(v___y_2810_);
lean_dec_ref(v___y_2809_);
lean_dec(v___y_2808_);
lean_dec(v_a_2807_);
return v_res_2814_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5(lean_object* v_00_u03b2_2815_, lean_object* v_data_2816_){
_start:
{
lean_object* v___x_2817_; 
v___x_2817_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5___redArg(v_data_2816_);
return v___x_2817_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5(lean_object* v_e_2818_, lean_object* v_a_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_){
_start:
{
lean_object* v___x_2826_; 
v___x_2826_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5___redArg(v_e_2818_, v_a_2819_);
return v___x_2826_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5___boxed(lean_object* v_e_2827_, lean_object* v_a_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_){
_start:
{
lean_object* v_res_2835_; 
v_res_2835_ = l_Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5(v_e_2827_, v_a_2828_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_);
lean_dec(v___y_2833_);
lean_dec_ref(v___y_2832_);
lean_dec(v___y_2831_);
lean_dec_ref(v___y_2830_);
lean_dec(v___y_2829_);
lean_dec(v_a_2828_);
return v_res_2835_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__8(lean_object* v_00_u03b2_2836_, lean_object* v_i_2837_, lean_object* v_source_2838_, lean_object* v_target_2839_){
_start:
{
lean_object* v___x_2840_; 
v___x_2840_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__8___redArg(v_i_2837_, v_source_2838_, v_target_2839_);
return v___x_2840_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__12_spec__21(lean_object* v_a_2841_, lean_object* v_as_2842_, size_t v_sz_2843_, size_t v_i_2844_, lean_object* v_b_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_){
_start:
{
lean_object* v___x_2851_; 
v___x_2851_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__12_spec__21___redArg(v_a_2841_, v_as_2842_, v_sz_2843_, v_i_2844_, v_b_2845_);
return v___x_2851_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__12_spec__21___boxed(lean_object* v_a_2852_, lean_object* v_as_2853_, lean_object* v_sz_2854_, lean_object* v_i_2855_, lean_object* v_b_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_){
_start:
{
size_t v_sz_boxed_2862_; size_t v_i_boxed_2863_; lean_object* v_res_2864_; 
v_sz_boxed_2862_ = lean_unbox_usize(v_sz_2854_);
lean_dec(v_sz_2854_);
v_i_boxed_2863_ = lean_unbox_usize(v_i_2855_);
lean_dec(v_i_2855_);
v_res_2864_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__12_spec__21(v_a_2852_, v_as_2853_, v_sz_boxed_2862_, v_i_boxed_2863_, v_b_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec_ref(v_as_2853_);
lean_dec_ref(v_a_2852_);
return v_res_2864_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10(lean_object* v_00_u03b2_2865_, lean_object* v_m_2866_, lean_object* v_a_2867_){
_start:
{
uint8_t v___x_2868_; 
v___x_2868_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10___redArg(v_m_2866_, v_a_2867_);
return v___x_2868_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10___boxed(lean_object* v_00_u03b2_2869_, lean_object* v_m_2870_, lean_object* v_a_2871_){
_start:
{
uint8_t v_res_2872_; lean_object* v_r_2873_; 
v_res_2872_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10(v_00_u03b2_2869_, v_m_2870_, v_a_2871_);
lean_dec_ref(v_a_2871_);
lean_dec_ref(v_m_2870_);
v_r_2873_ = lean_box(v_res_2872_);
return v_r_2873_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11(lean_object* v_00_u03b2_2874_, lean_object* v_m_2875_, lean_object* v_a_2876_, lean_object* v_b_2877_){
_start:
{
lean_object* v___x_2878_; 
v___x_2878_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11___redArg(v_m_2875_, v_a_2876_, v_b_2877_);
return v___x_2878_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__8_spec__14(lean_object* v_00_u03b2_2879_, lean_object* v_x_2880_, lean_object* v_x_2881_){
_start:
{
lean_object* v___x_2882_; 
v___x_2882_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_MVarId_getNondepPropHyps_spec__2_spec__5_spec__8_spec__14___redArg(v_x_2880_, v_x_2881_);
return v___x_2882_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__19_spec__24(lean_object* v_a_2883_, lean_object* v_as_2884_, size_t v_sz_2885_, size_t v_i_2886_, lean_object* v_b_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_){
_start:
{
lean_object* v___x_2893_; 
v___x_2893_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__19_spec__24___redArg(v_a_2883_, v_as_2884_, v_sz_2885_, v_i_2886_, v_b_2887_);
return v___x_2893_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__19_spec__24___boxed(lean_object* v_a_2894_, lean_object* v_as_2895_, lean_object* v_sz_2896_, lean_object* v_i_2897_, lean_object* v_b_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_){
_start:
{
size_t v_sz_boxed_2904_; size_t v_i_boxed_2905_; lean_object* v_res_2906_; 
v_sz_boxed_2904_ = lean_unbox_usize(v_sz_2896_);
lean_dec(v_sz_2896_);
v_i_boxed_2905_ = lean_unbox_usize(v_i_2897_);
lean_dec(v_i_2897_);
v_res_2906_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_getNondepPropHyps_spec__5_spec__11_spec__19_spec__24(v_a_2894_, v_as_2895_, v_sz_boxed_2904_, v_i_boxed_2905_, v_b_2898_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_);
lean_dec(v___y_2902_);
lean_dec_ref(v___y_2901_);
lean_dec(v___y_2900_);
lean_dec_ref(v___y_2899_);
lean_dec_ref(v_as_2895_);
lean_dec_ref(v_a_2894_);
return v_res_2906_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10_spec__16(lean_object* v_00_u03b2_2907_, lean_object* v_a_2908_, lean_object* v_x_2909_){
_start:
{
uint8_t v___x_2910_; 
v___x_2910_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10_spec__16___redArg(v_a_2908_, v_x_2909_);
return v___x_2910_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10_spec__16___boxed(lean_object* v_00_u03b2_2911_, lean_object* v_a_2912_, lean_object* v_x_2913_){
_start:
{
uint8_t v_res_2914_; lean_object* v_r_2915_; 
v_res_2914_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__10_spec__16(v_00_u03b2_2911_, v_a_2912_, v_x_2913_);
lean_dec(v_x_2913_);
lean_dec_ref(v_a_2912_);
v_r_2915_ = lean_box(v_res_2914_);
return v_r_2915_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11_spec__18(lean_object* v_00_u03b2_2916_, lean_object* v_data_2917_){
_start:
{
lean_object* v___x_2918_; 
v___x_2918_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11_spec__18___redArg(v_data_2917_);
return v___x_2918_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11_spec__18_spec__26(lean_object* v_00_u03b2_2919_, lean_object* v_i_2920_, lean_object* v_source_2921_, lean_object* v_target_2922_){
_start:
{
lean_object* v___x_2923_; 
v___x_2923_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11_spec__18_spec__26___redArg(v_i_2920_, v_source_2921_, v_target_2922_);
return v___x_2923_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11_spec__18_spec__26_spec__30(lean_object* v_00_u03b2_2924_, lean_object* v_x_2925_, lean_object* v_x_2926_){
_start:
{
lean_object* v___x_2927_; 
v___x_2927_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_ForEachExprWhere_checked___at___00__private_Lean_Util_ForEachExprWhere_0__Lean_ForEachExprWhere_visit_go___at___00Lean_ForEachExprWhere_visit___at___00Lean_MVarId_getNondepPropHyps_spec__1_spec__3_spec__5_spec__11_spec__18_spec__26_spec__30___redArg(v_x_2925_, v_x_2926_);
return v___x_2927_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_2933_; lean_object* v___x_2934_; 
v___x_2933_ = l_Lean_maxRecDepthErrorMessage;
v___x_2934_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2934_, 0, v___x_2933_);
return v___x_2934_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; 
v___x_2935_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__3);
v___x_2936_ = l_Lean_MessageData_ofFormat(v___x_2935_);
return v___x_2936_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__5(void){
_start:
{
lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; 
v___x_2937_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__4);
v___x_2938_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__2));
v___x_2939_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2939_, 0, v___x_2938_);
lean_ctor_set(v___x_2939_, 1, v___x_2937_);
return v___x_2939_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg(lean_object* v_ref_2940_){
_start:
{
lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; 
v___x_2942_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___closed__5);
v___x_2943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2943_, 0, v_ref_2940_);
lean_ctor_set(v___x_2943_, 1, v___x_2942_);
v___x_2944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2944_, 0, v___x_2943_);
return v___x_2944_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg___boxed(lean_object* v_ref_2945_, lean_object* v___y_2946_){
_start:
{
lean_object* v_res_2947_; 
v_res_2947_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg(v_ref_2945_);
return v_res_2947_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1(lean_object* v_00_u03b1_2948_, lean_object* v_ref_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_){
_start:
{
lean_object* v___x_2956_; 
v___x_2956_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg(v_ref_2949_);
return v___x_2956_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___boxed(lean_object* v_00_u03b1_2957_, lean_object* v_ref_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_){
_start:
{
lean_object* v_res_2965_; 
v_res_2965_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1(v_00_u03b1_2957_, v_ref_2958_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_);
lean_dec(v___y_2963_);
lean_dec_ref(v___y_2962_);
lean_dec(v___y_2961_);
lean_dec_ref(v___y_2960_);
lean_dec(v___y_2959_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go(lean_object* v_x_2966_, lean_object* v_mvarId_2967_, lean_object* v_a_2968_, lean_object* v_a_2969_, lean_object* v_a_2970_, lean_object* v_a_2971_, lean_object* v_a_2972_){
_start:
{
lean_object* v_toCold_2974_; lean_object* v_currRecDepth_2975_; lean_object* v_ref_2976_; uint16_t v_optionFlags_2977_; uint8_t v_suppressElabErrors_2978_; uint8_t v_checkDeprecated_2979_; uint8_t v_isRecordingDeps_2980_; lean_object* v_maxRecDepth_3008_; lean_object* v___x_3009_; uint8_t v___x_3010_; 
v_toCold_2974_ = lean_ctor_get(v_a_2971_, 0);
v_currRecDepth_2975_ = lean_ctor_get(v_a_2971_, 1);
v_ref_2976_ = lean_ctor_get(v_a_2971_, 2);
v_optionFlags_2977_ = lean_ctor_get_uint16(v_a_2971_, sizeof(void*)*3);
v_suppressElabErrors_2978_ = lean_ctor_get_uint8(v_a_2971_, sizeof(void*)*3 + 2);
v_checkDeprecated_2979_ = lean_ctor_get_uint8(v_a_2971_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2980_ = lean_ctor_get_uint8(v_a_2971_, sizeof(void*)*3 + 4);
v_maxRecDepth_3008_ = lean_ctor_get(v_toCold_2974_, 3);
v___x_3009_ = lean_unsigned_to_nat(0u);
v___x_3010_ = lean_nat_dec_eq(v_maxRecDepth_3008_, v___x_3009_);
if (v___x_3010_ == 0)
{
uint8_t v___x_3011_; 
v___x_3011_ = lean_nat_dec_eq(v_currRecDepth_2975_, v_maxRecDepth_3008_);
if (v___x_3011_ == 0)
{
goto v___jp_2981_;
}
else
{
lean_object* v___x_3012_; 
lean_dec(v_mvarId_2967_);
lean_dec_ref(v_x_2966_);
lean_inc(v_ref_2976_);
v___x_3012_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__1___redArg(v_ref_2976_);
return v___x_3012_;
}
}
else
{
goto v___jp_2981_;
}
v___jp_2981_:
{
lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; 
v___x_2982_ = lean_unsigned_to_nat(1u);
v___x_2983_ = lean_nat_add(v_currRecDepth_2975_, v___x_2982_);
lean_inc(v_ref_2976_);
lean_inc_ref(v_toCold_2974_);
v___x_2984_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2984_, 0, v_toCold_2974_);
lean_ctor_set(v___x_2984_, 1, v___x_2983_);
lean_ctor_set(v___x_2984_, 2, v_ref_2976_);
lean_ctor_set_uint16(v___x_2984_, sizeof(void*)*3, v_optionFlags_2977_);
lean_ctor_set_uint8(v___x_2984_, sizeof(void*)*3 + 2, v_suppressElabErrors_2978_);
lean_ctor_set_uint8(v___x_2984_, sizeof(void*)*3 + 3, v_checkDeprecated_2979_);
lean_ctor_set_uint8(v___x_2984_, sizeof(void*)*3 + 4, v_isRecordingDeps_2980_);
lean_inc_ref(v_x_2966_);
lean_inc(v_a_2972_);
lean_inc_ref(v___x_2984_);
lean_inc(v_a_2970_);
lean_inc_ref(v_a_2969_);
lean_inc(v_mvarId_2967_);
v___x_2985_ = lean_apply_6(v_x_2966_, v_mvarId_2967_, v_a_2969_, v_a_2970_, v___x_2984_, v_a_2972_, lean_box(0));
if (lean_obj_tag(v___x_2985_) == 0)
{
lean_object* v_a_2986_; lean_object* v___x_2988_; uint8_t v_isShared_2989_; uint8_t v_isSharedCheck_2999_; 
v_a_2986_ = lean_ctor_get(v___x_2985_, 0);
v_isSharedCheck_2999_ = !lean_is_exclusive(v___x_2985_);
if (v_isSharedCheck_2999_ == 0)
{
v___x_2988_ = v___x_2985_;
v_isShared_2989_ = v_isSharedCheck_2999_;
goto v_resetjp_2987_;
}
else
{
lean_inc(v_a_2986_);
lean_dec(v___x_2985_);
v___x_2988_ = lean_box(0);
v_isShared_2989_ = v_isSharedCheck_2999_;
goto v_resetjp_2987_;
}
v_resetjp_2987_:
{
if (lean_obj_tag(v_a_2986_) == 0)
{
lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2995_; 
lean_dec_ref_known(v___x_2984_, 3);
lean_dec_ref(v_x_2966_);
v___x_2990_ = lean_st_ref_take(v_a_2968_);
v___x_2991_ = lean_box(0);
v___x_2992_ = lean_array_push(v___x_2990_, v_mvarId_2967_);
v___x_2993_ = lean_st_ref_put(v_a_2968_, v___x_2992_);
if (v_isShared_2989_ == 0)
{
lean_ctor_set(v___x_2988_, 0, v___x_2991_);
v___x_2995_ = v___x_2988_;
goto v_reusejp_2994_;
}
else
{
lean_object* v_reuseFailAlloc_2996_; 
v_reuseFailAlloc_2996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2996_, 0, v___x_2991_);
v___x_2995_ = v_reuseFailAlloc_2996_;
goto v_reusejp_2994_;
}
v_reusejp_2994_:
{
return v___x_2995_;
}
}
else
{
lean_object* v_val_2997_; lean_object* v___x_2998_; 
lean_del_object(v___x_2988_);
lean_dec(v_mvarId_2967_);
v_val_2997_ = lean_ctor_get(v_a_2986_, 0);
lean_inc(v_val_2997_);
lean_dec_ref_known(v_a_2986_, 1);
v___x_2998_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__0(v_x_2966_, v_val_2997_, v_a_2968_, v_a_2969_, v_a_2970_, v___x_2984_, v_a_2972_);
lean_dec_ref_known(v___x_2984_, 3);
return v___x_2998_;
}
}
}
else
{
lean_object* v_a_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3007_; 
lean_dec_ref_known(v___x_2984_, 3);
lean_dec(v_mvarId_2967_);
lean_dec_ref(v_x_2966_);
v_a_3000_ = lean_ctor_get(v___x_2985_, 0);
v_isSharedCheck_3007_ = !lean_is_exclusive(v___x_2985_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_3002_ = v___x_2985_;
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_a_3000_);
lean_dec(v___x_2985_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v___x_3005_; 
if (v_isShared_3003_ == 0)
{
v___x_3005_ = v___x_3002_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v_a_3000_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
return v___x_3005_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__0(lean_object* v_x_3013_, lean_object* v_as_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_){
_start:
{
if (lean_obj_tag(v_as_3014_) == 0)
{
lean_object* v___x_3021_; lean_object* v___x_3022_; 
lean_dec_ref(v_x_3013_);
v___x_3021_ = lean_box(0);
v___x_3022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3022_, 0, v___x_3021_);
return v___x_3022_;
}
else
{
lean_object* v_head_3023_; lean_object* v_tail_3024_; lean_object* v___x_3025_; 
v_head_3023_ = lean_ctor_get(v_as_3014_, 0);
lean_inc(v_head_3023_);
v_tail_3024_ = lean_ctor_get(v_as_3014_, 1);
lean_inc(v_tail_3024_);
lean_dec_ref_known(v_as_3014_, 2);
lean_inc_ref(v_x_3013_);
v___x_3025_ = l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go(v_x_3013_, v_head_3023_, v___y_3015_, v___y_3016_, v___y_3017_, v___y_3018_, v___y_3019_);
if (lean_obj_tag(v___x_3025_) == 0)
{
lean_dec_ref_known(v___x_3025_, 1);
v_as_3014_ = v_tail_3024_;
goto _start;
}
else
{
lean_dec(v_tail_3024_);
lean_dec_ref(v_x_3013_);
return v___x_3025_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__0___boxed(lean_object* v_x_3027_, lean_object* v_as_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_){
_start:
{
lean_object* v_res_3035_; 
v_res_3035_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go_spec__0(v_x_3027_, v_as_3028_, v___y_3029_, v___y_3030_, v___y_3031_, v___y_3032_, v___y_3033_);
lean_dec(v___y_3033_);
lean_dec_ref(v___y_3032_);
lean_dec(v___y_3031_);
lean_dec_ref(v___y_3030_);
lean_dec(v___y_3029_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go___boxed(lean_object* v_x_3036_, lean_object* v_mvarId_3037_, lean_object* v_a_3038_, lean_object* v_a_3039_, lean_object* v_a_3040_, lean_object* v_a_3041_, lean_object* v_a_3042_, lean_object* v_a_3043_){
_start:
{
lean_object* v_res_3044_; 
v_res_3044_ = l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go(v_x_3036_, v_mvarId_3037_, v_a_3038_, v_a_3039_, v_a_3040_, v_a_3041_, v_a_3042_);
lean_dec(v_a_3042_);
lean_dec_ref(v_a_3041_);
lean_dec(v_a_3040_);
lean_dec_ref(v_a_3039_);
lean_dec(v_a_3038_);
return v_res_3044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_saturate(lean_object* v_mvarId_3045_, lean_object* v_x_3046_, lean_object* v_a_3047_, lean_object* v_a_3048_, lean_object* v_a_3049_, lean_object* v_a_3050_){
_start:
{
lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; 
v___x_3052_ = ((lean_object*)(l_Lean_MVarId_getNondepPropHyps___lam__2___closed__0));
v___x_3053_ = lean_st_mk_ref(v___x_3052_);
v___x_3054_ = l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_saturate_go(v_x_3046_, v_mvarId_3045_, v___x_3053_, v_a_3047_, v_a_3048_, v_a_3049_, v_a_3050_);
if (lean_obj_tag(v___x_3054_) == 0)
{
lean_object* v___x_3056_; uint8_t v_isShared_3057_; uint8_t v_isSharedCheck_3063_; 
v_isSharedCheck_3063_ = !lean_is_exclusive(v___x_3054_);
if (v_isSharedCheck_3063_ == 0)
{
lean_object* v_unused_3064_; 
v_unused_3064_ = lean_ctor_get(v___x_3054_, 0);
lean_dec(v_unused_3064_);
v___x_3056_ = v___x_3054_;
v_isShared_3057_ = v_isSharedCheck_3063_;
goto v_resetjp_3055_;
}
else
{
lean_dec(v___x_3054_);
v___x_3056_ = lean_box(0);
v_isShared_3057_ = v_isSharedCheck_3063_;
goto v_resetjp_3055_;
}
v_resetjp_3055_:
{
lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3061_; 
v___x_3058_ = lean_st_ref_get(v___x_3053_);
lean_dec(v___x_3053_);
v___x_3059_ = lean_array_to_list(v___x_3058_);
if (v_isShared_3057_ == 0)
{
lean_ctor_set(v___x_3056_, 0, v___x_3059_);
v___x_3061_ = v___x_3056_;
goto v_reusejp_3060_;
}
else
{
lean_object* v_reuseFailAlloc_3062_; 
v_reuseFailAlloc_3062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3062_, 0, v___x_3059_);
v___x_3061_ = v_reuseFailAlloc_3062_;
goto v_reusejp_3060_;
}
v_reusejp_3060_:
{
return v___x_3061_;
}
}
}
else
{
lean_object* v_a_3065_; lean_object* v___x_3067_; uint8_t v_isShared_3068_; uint8_t v_isSharedCheck_3072_; 
lean_dec(v___x_3053_);
v_a_3065_ = lean_ctor_get(v___x_3054_, 0);
v_isSharedCheck_3072_ = !lean_is_exclusive(v___x_3054_);
if (v_isSharedCheck_3072_ == 0)
{
v___x_3067_ = v___x_3054_;
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
else
{
lean_inc(v_a_3065_);
lean_dec(v___x_3054_);
v___x_3067_ = lean_box(0);
v_isShared_3068_ = v_isSharedCheck_3072_;
goto v_resetjp_3066_;
}
v_resetjp_3066_:
{
lean_object* v___x_3070_; 
if (v_isShared_3068_ == 0)
{
v___x_3070_ = v___x_3067_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v_a_3065_);
v___x_3070_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
return v___x_3070_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_saturate___boxed(lean_object* v_mvarId_3073_, lean_object* v_x_3074_, lean_object* v_a_3075_, lean_object* v_a_3076_, lean_object* v_a_3077_, lean_object* v_a_3078_, lean_object* v_a_3079_){
_start:
{
lean_object* v_res_3080_; 
v_res_3080_ = l_Lean_Meta_saturate(v_mvarId_3073_, v_x_3074_, v_a_3075_, v_a_3076_, v_a_3077_, v_a_3078_);
lean_dec(v_a_3078_);
lean_dec_ref(v_a_3077_);
lean_dec(v_a_3076_);
lean_dec_ref(v_a_3075_);
return v_res_3080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_exactlyOne(lean_object* v_mvarIds_3081_, lean_object* v_msg_3082_, lean_object* v_a_3083_, lean_object* v_a_3084_, lean_object* v_a_3085_, lean_object* v_a_3086_){
_start:
{
if (lean_obj_tag(v_mvarIds_3081_) == 1)
{
lean_object* v_tail_3088_; 
v_tail_3088_ = lean_ctor_get(v_mvarIds_3081_, 1);
if (lean_obj_tag(v_tail_3088_) == 0)
{
lean_object* v_head_3089_; lean_object* v___x_3090_; 
lean_dec_ref(v_msg_3082_);
v_head_3089_ = lean_ctor_get(v_mvarIds_3081_, 0);
lean_inc(v_head_3089_);
v___x_3090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3090_, 0, v_head_3089_);
return v___x_3090_;
}
else
{
lean_object* v___x_3091_; 
v___x_3091_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(v_msg_3082_, v_a_3083_, v_a_3084_, v_a_3085_, v_a_3086_);
return v___x_3091_;
}
}
else
{
lean_object* v___x_3092_; 
v___x_3092_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(v_msg_3082_, v_a_3083_, v_a_3084_, v_a_3085_, v_a_3086_);
return v___x_3092_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_exactlyOne___boxed(lean_object* v_mvarIds_3093_, lean_object* v_msg_3094_, lean_object* v_a_3095_, lean_object* v_a_3096_, lean_object* v_a_3097_, lean_object* v_a_3098_, lean_object* v_a_3099_){
_start:
{
lean_object* v_res_3100_; 
v_res_3100_ = l_Lean_Meta_exactlyOne(v_mvarIds_3093_, v_msg_3094_, v_a_3095_, v_a_3096_, v_a_3097_, v_a_3098_);
lean_dec(v_a_3098_);
lean_dec_ref(v_a_3097_);
lean_dec(v_a_3096_);
lean_dec_ref(v_a_3095_);
lean_dec(v_mvarIds_3093_);
return v_res_3100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ensureAtMostOne(lean_object* v_mvarIds_3101_, lean_object* v_msg_3102_, lean_object* v_a_3103_, lean_object* v_a_3104_, lean_object* v_a_3105_, lean_object* v_a_3106_){
_start:
{
if (lean_obj_tag(v_mvarIds_3101_) == 0)
{
lean_object* v___x_3108_; lean_object* v___x_3109_; 
lean_dec_ref(v_msg_3102_);
v___x_3108_ = lean_box(0);
v___x_3109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3109_, 0, v___x_3108_);
return v___x_3109_;
}
else
{
lean_object* v_tail_3110_; 
v_tail_3110_ = lean_ctor_get(v_mvarIds_3101_, 1);
if (lean_obj_tag(v_tail_3110_) == 0)
{
lean_object* v_head_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; 
lean_dec_ref(v_msg_3102_);
v_head_3111_ = lean_ctor_get(v_mvarIds_3101_, 0);
lean_inc(v_head_3111_);
v___x_3112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3112_, 0, v_head_3111_);
v___x_3113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3113_, 0, v___x_3112_);
return v___x_3113_;
}
else
{
lean_object* v___x_3114_; 
v___x_3114_ = l_Lean_throwError___at___00Lean_Meta_throwTacticEx_spec__0___redArg(v_msg_3102_, v_a_3103_, v_a_3104_, v_a_3105_, v_a_3106_);
return v___x_3114_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ensureAtMostOne___boxed(lean_object* v_mvarIds_3115_, lean_object* v_msg_3116_, lean_object* v_a_3117_, lean_object* v_a_3118_, lean_object* v_a_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_){
_start:
{
lean_object* v_res_3122_; 
v_res_3122_ = l_Lean_Meta_ensureAtMostOne(v_mvarIds_3115_, v_msg_3116_, v_a_3117_, v_a_3118_, v_a_3119_, v_a_3120_);
lean_dec(v_a_3120_);
lean_dec_ref(v_a_3119_);
lean_dec(v_a_3118_);
lean_dec_ref(v_a_3117_);
lean_dec(v_mvarIds_3115_);
return v_res_3122_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2_spec__3(lean_object* v_as_3123_, size_t v_sz_3124_, size_t v_i_3125_, lean_object* v_b_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_){
_start:
{
uint8_t v___x_3132_; 
v___x_3132_ = lean_usize_dec_lt(v_i_3125_, v_sz_3124_);
if (v___x_3132_ == 0)
{
lean_object* v___x_3133_; 
v___x_3133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3133_, 0, v_b_3126_);
return v___x_3133_;
}
else
{
lean_object* v_snd_3134_; lean_object* v___x_3136_; uint8_t v_isShared_3137_; uint8_t v_isSharedCheck_3164_; 
v_snd_3134_ = lean_ctor_get(v_b_3126_, 1);
v_isSharedCheck_3164_ = !lean_is_exclusive(v_b_3126_);
if (v_isSharedCheck_3164_ == 0)
{
lean_object* v_unused_3165_; 
v_unused_3165_ = lean_ctor_get(v_b_3126_, 0);
lean_dec(v_unused_3165_);
v___x_3136_ = v_b_3126_;
v_isShared_3137_ = v_isSharedCheck_3164_;
goto v_resetjp_3135_;
}
else
{
lean_inc(v_snd_3134_);
lean_dec(v_b_3126_);
v___x_3136_ = lean_box(0);
v_isShared_3137_ = v_isSharedCheck_3164_;
goto v_resetjp_3135_;
}
v_resetjp_3135_:
{
lean_object* v___x_3138_; lean_object* v_a_3140_; lean_object* v_a_3147_; 
v___x_3138_ = lean_box(0);
v_a_3147_ = lean_array_uget_borrowed(v_as_3123_, v_i_3125_);
if (lean_obj_tag(v_a_3147_) == 0)
{
v_a_3140_ = v_snd_3134_;
goto v___jp_3139_;
}
else
{
lean_object* v_val_3148_; uint8_t v___x_3149_; 
v_val_3148_ = lean_ctor_get(v_a_3147_, 0);
v___x_3149_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3148_);
if (v___x_3149_ == 0)
{
lean_object* v___x_3150_; lean_object* v___x_3151_; 
v___x_3150_ = l_Lean_LocalDecl_type(v_val_3148_);
v___x_3151_ = l_Lean_Meta_isProp(v___x_3150_, v___y_3127_, v___y_3128_, v___y_3129_, v___y_3130_);
if (lean_obj_tag(v___x_3151_) == 0)
{
lean_object* v_a_3152_; uint8_t v___x_3153_; 
v_a_3152_ = lean_ctor_get(v___x_3151_, 0);
lean_inc(v_a_3152_);
lean_dec_ref_known(v___x_3151_, 1);
v___x_3153_ = lean_unbox(v_a_3152_);
lean_dec(v_a_3152_);
if (v___x_3153_ == 0)
{
v_a_3140_ = v_snd_3134_;
goto v___jp_3139_;
}
else
{
lean_object* v___x_3154_; lean_object* v___x_3155_; 
v___x_3154_ = l_Lean_LocalDecl_fvarId(v_val_3148_);
v___x_3155_ = lean_array_push(v_snd_3134_, v___x_3154_);
v_a_3140_ = v___x_3155_;
goto v___jp_3139_;
}
}
else
{
lean_object* v_a_3156_; lean_object* v___x_3158_; uint8_t v_isShared_3159_; uint8_t v_isSharedCheck_3163_; 
lean_del_object(v___x_3136_);
lean_dec(v_snd_3134_);
v_a_3156_ = lean_ctor_get(v___x_3151_, 0);
v_isSharedCheck_3163_ = !lean_is_exclusive(v___x_3151_);
if (v_isSharedCheck_3163_ == 0)
{
v___x_3158_ = v___x_3151_;
v_isShared_3159_ = v_isSharedCheck_3163_;
goto v_resetjp_3157_;
}
else
{
lean_inc(v_a_3156_);
lean_dec(v___x_3151_);
v___x_3158_ = lean_box(0);
v_isShared_3159_ = v_isSharedCheck_3163_;
goto v_resetjp_3157_;
}
v_resetjp_3157_:
{
lean_object* v___x_3161_; 
if (v_isShared_3159_ == 0)
{
v___x_3161_ = v___x_3158_;
goto v_reusejp_3160_;
}
else
{
lean_object* v_reuseFailAlloc_3162_; 
v_reuseFailAlloc_3162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3162_, 0, v_a_3156_);
v___x_3161_ = v_reuseFailAlloc_3162_;
goto v_reusejp_3160_;
}
v_reusejp_3160_:
{
return v___x_3161_;
}
}
}
}
else
{
v_a_3140_ = v_snd_3134_;
goto v___jp_3139_;
}
}
v___jp_3139_:
{
lean_object* v___x_3142_; 
if (v_isShared_3137_ == 0)
{
lean_ctor_set(v___x_3136_, 1, v_a_3140_);
lean_ctor_set(v___x_3136_, 0, v___x_3138_);
v___x_3142_ = v___x_3136_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v___x_3138_);
lean_ctor_set(v_reuseFailAlloc_3146_, 1, v_a_3140_);
v___x_3142_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
size_t v___x_3143_; size_t v___x_3144_; 
v___x_3143_ = ((size_t)1ULL);
v___x_3144_ = lean_usize_add(v_i_3125_, v___x_3143_);
v_i_3125_ = v___x_3144_;
v_b_3126_ = v___x_3142_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_as_3166_, lean_object* v_sz_3167_, lean_object* v_i_3168_, lean_object* v_b_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_){
_start:
{
size_t v_sz_boxed_3175_; size_t v_i_boxed_3176_; lean_object* v_res_3177_; 
v_sz_boxed_3175_ = lean_unbox_usize(v_sz_3167_);
lean_dec(v_sz_3167_);
v_i_boxed_3176_ = lean_unbox_usize(v_i_3168_);
lean_dec(v_i_3168_);
v_res_3177_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2_spec__3(v_as_3166_, v_sz_boxed_3175_, v_i_boxed_3176_, v_b_3169_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_);
lean_dec(v___y_3173_);
lean_dec_ref(v___y_3172_);
lean_dec(v___y_3171_);
lean_dec_ref(v___y_3170_);
lean_dec_ref(v_as_3166_);
return v_res_3177_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2(lean_object* v_as_3178_, size_t v_sz_3179_, size_t v_i_3180_, lean_object* v_b_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_){
_start:
{
uint8_t v___x_3187_; 
v___x_3187_ = lean_usize_dec_lt(v_i_3180_, v_sz_3179_);
if (v___x_3187_ == 0)
{
lean_object* v___x_3188_; 
v___x_3188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3188_, 0, v_b_3181_);
return v___x_3188_;
}
else
{
lean_object* v_snd_3189_; lean_object* v___x_3191_; uint8_t v_isShared_3192_; uint8_t v_isSharedCheck_3219_; 
v_snd_3189_ = lean_ctor_get(v_b_3181_, 1);
v_isSharedCheck_3219_ = !lean_is_exclusive(v_b_3181_);
if (v_isSharedCheck_3219_ == 0)
{
lean_object* v_unused_3220_; 
v_unused_3220_ = lean_ctor_get(v_b_3181_, 0);
lean_dec(v_unused_3220_);
v___x_3191_ = v_b_3181_;
v_isShared_3192_ = v_isSharedCheck_3219_;
goto v_resetjp_3190_;
}
else
{
lean_inc(v_snd_3189_);
lean_dec(v_b_3181_);
v___x_3191_ = lean_box(0);
v_isShared_3192_ = v_isSharedCheck_3219_;
goto v_resetjp_3190_;
}
v_resetjp_3190_:
{
lean_object* v___x_3193_; lean_object* v_a_3195_; lean_object* v_a_3202_; 
v___x_3193_ = lean_box(0);
v_a_3202_ = lean_array_uget_borrowed(v_as_3178_, v_i_3180_);
if (lean_obj_tag(v_a_3202_) == 0)
{
v_a_3195_ = v_snd_3189_;
goto v___jp_3194_;
}
else
{
lean_object* v_val_3203_; uint8_t v___x_3204_; 
v_val_3203_ = lean_ctor_get(v_a_3202_, 0);
v___x_3204_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3203_);
if (v___x_3204_ == 0)
{
lean_object* v___x_3205_; lean_object* v___x_3206_; 
v___x_3205_ = l_Lean_LocalDecl_type(v_val_3203_);
v___x_3206_ = l_Lean_Meta_isProp(v___x_3205_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_);
if (lean_obj_tag(v___x_3206_) == 0)
{
lean_object* v_a_3207_; uint8_t v___x_3208_; 
v_a_3207_ = lean_ctor_get(v___x_3206_, 0);
lean_inc(v_a_3207_);
lean_dec_ref_known(v___x_3206_, 1);
v___x_3208_ = lean_unbox(v_a_3207_);
lean_dec(v_a_3207_);
if (v___x_3208_ == 0)
{
v_a_3195_ = v_snd_3189_;
goto v___jp_3194_;
}
else
{
lean_object* v___x_3209_; lean_object* v___x_3210_; 
v___x_3209_ = l_Lean_LocalDecl_fvarId(v_val_3203_);
v___x_3210_ = lean_array_push(v_snd_3189_, v___x_3209_);
v_a_3195_ = v___x_3210_;
goto v___jp_3194_;
}
}
else
{
lean_object* v_a_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3218_; 
lean_del_object(v___x_3191_);
lean_dec(v_snd_3189_);
v_a_3211_ = lean_ctor_get(v___x_3206_, 0);
v_isSharedCheck_3218_ = !lean_is_exclusive(v___x_3206_);
if (v_isSharedCheck_3218_ == 0)
{
v___x_3213_ = v___x_3206_;
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_a_3211_);
lean_dec(v___x_3206_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
lean_object* v___x_3216_; 
if (v_isShared_3214_ == 0)
{
v___x_3216_ = v___x_3213_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v_a_3211_);
v___x_3216_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
return v___x_3216_;
}
}
}
}
else
{
v_a_3195_ = v_snd_3189_;
goto v___jp_3194_;
}
}
v___jp_3194_:
{
lean_object* v___x_3197_; 
if (v_isShared_3192_ == 0)
{
lean_ctor_set(v___x_3191_, 1, v_a_3195_);
lean_ctor_set(v___x_3191_, 0, v___x_3193_);
v___x_3197_ = v___x_3191_;
goto v_reusejp_3196_;
}
else
{
lean_object* v_reuseFailAlloc_3201_; 
v_reuseFailAlloc_3201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3201_, 0, v___x_3193_);
lean_ctor_set(v_reuseFailAlloc_3201_, 1, v_a_3195_);
v___x_3197_ = v_reuseFailAlloc_3201_;
goto v_reusejp_3196_;
}
v_reusejp_3196_:
{
size_t v___x_3198_; size_t v___x_3199_; lean_object* v___x_3200_; 
v___x_3198_ = ((size_t)1ULL);
v___x_3199_ = lean_usize_add(v_i_3180_, v___x_3198_);
v___x_3200_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2_spec__3(v_as_3178_, v_sz_3179_, v___x_3199_, v___x_3197_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_);
return v___x_3200_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2___boxed(lean_object* v_as_3221_, lean_object* v_sz_3222_, lean_object* v_i_3223_, lean_object* v_b_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_){
_start:
{
size_t v_sz_boxed_3230_; size_t v_i_boxed_3231_; lean_object* v_res_3232_; 
v_sz_boxed_3230_ = lean_unbox_usize(v_sz_3222_);
lean_dec(v_sz_3222_);
v_i_boxed_3231_ = lean_unbox_usize(v_i_3223_);
lean_dec(v_i_3223_);
v_res_3232_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2(v_as_3221_, v_sz_boxed_3230_, v_i_boxed_3231_, v_b_3224_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_);
lean_dec(v___y_3228_);
lean_dec_ref(v___y_3227_);
lean_dec(v___y_3226_);
lean_dec_ref(v___y_3225_);
lean_dec_ref(v_as_3221_);
return v_res_3232_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0(lean_object* v_init_3233_, lean_object* v_n_3234_, lean_object* v_b_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_){
_start:
{
if (lean_obj_tag(v_n_3234_) == 0)
{
lean_object* v_cs_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; size_t v_sz_3244_; size_t v___x_3245_; lean_object* v___x_3246_; 
v_cs_3241_ = lean_ctor_get(v_n_3234_, 0);
v___x_3242_ = lean_box(0);
v___x_3243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3243_, 0, v___x_3242_);
lean_ctor_set(v___x_3243_, 1, v_b_3235_);
v_sz_3244_ = lean_array_size(v_cs_3241_);
v___x_3245_ = ((size_t)0ULL);
v___x_3246_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__1(v_init_3233_, v_cs_3241_, v_sz_3244_, v___x_3245_, v___x_3243_, v___y_3236_, v___y_3237_, v___y_3238_, v___y_3239_);
if (lean_obj_tag(v___x_3246_) == 0)
{
lean_object* v_a_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3261_; 
v_a_3247_ = lean_ctor_get(v___x_3246_, 0);
v_isSharedCheck_3261_ = !lean_is_exclusive(v___x_3246_);
if (v_isSharedCheck_3261_ == 0)
{
v___x_3249_ = v___x_3246_;
v_isShared_3250_ = v_isSharedCheck_3261_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_a_3247_);
lean_dec(v___x_3246_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3261_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
lean_object* v_fst_3251_; 
v_fst_3251_ = lean_ctor_get(v_a_3247_, 0);
if (lean_obj_tag(v_fst_3251_) == 0)
{
lean_object* v_snd_3252_; lean_object* v___x_3253_; lean_object* v___x_3255_; 
v_snd_3252_ = lean_ctor_get(v_a_3247_, 1);
lean_inc(v_snd_3252_);
lean_dec(v_a_3247_);
v___x_3253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3253_, 0, v_snd_3252_);
if (v_isShared_3250_ == 0)
{
lean_ctor_set(v___x_3249_, 0, v___x_3253_);
v___x_3255_ = v___x_3249_;
goto v_reusejp_3254_;
}
else
{
lean_object* v_reuseFailAlloc_3256_; 
v_reuseFailAlloc_3256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3256_, 0, v___x_3253_);
v___x_3255_ = v_reuseFailAlloc_3256_;
goto v_reusejp_3254_;
}
v_reusejp_3254_:
{
return v___x_3255_;
}
}
else
{
lean_object* v_val_3257_; lean_object* v___x_3259_; 
lean_inc_ref(v_fst_3251_);
lean_dec(v_a_3247_);
v_val_3257_ = lean_ctor_get(v_fst_3251_, 0);
lean_inc(v_val_3257_);
lean_dec_ref_known(v_fst_3251_, 1);
if (v_isShared_3250_ == 0)
{
lean_ctor_set(v___x_3249_, 0, v_val_3257_);
v___x_3259_ = v___x_3249_;
goto v_reusejp_3258_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v_val_3257_);
v___x_3259_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3258_;
}
v_reusejp_3258_:
{
return v___x_3259_;
}
}
}
}
else
{
lean_object* v_a_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3269_; 
v_a_3262_ = lean_ctor_get(v___x_3246_, 0);
v_isSharedCheck_3269_ = !lean_is_exclusive(v___x_3246_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3264_ = v___x_3246_;
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_a_3262_);
lean_dec(v___x_3246_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3267_; 
if (v_isShared_3265_ == 0)
{
v___x_3267_ = v___x_3264_;
goto v_reusejp_3266_;
}
else
{
lean_object* v_reuseFailAlloc_3268_; 
v_reuseFailAlloc_3268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3268_, 0, v_a_3262_);
v___x_3267_ = v_reuseFailAlloc_3268_;
goto v_reusejp_3266_;
}
v_reusejp_3266_:
{
return v___x_3267_;
}
}
}
}
else
{
lean_object* v_vs_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; size_t v_sz_3273_; size_t v___x_3274_; lean_object* v___x_3275_; 
v_vs_3270_ = lean_ctor_get(v_n_3234_, 0);
v___x_3271_ = lean_box(0);
v___x_3272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3272_, 0, v___x_3271_);
lean_ctor_set(v___x_3272_, 1, v_b_3235_);
v_sz_3273_ = lean_array_size(v_vs_3270_);
v___x_3274_ = ((size_t)0ULL);
v___x_3275_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__2(v_vs_3270_, v_sz_3273_, v___x_3274_, v___x_3272_, v___y_3236_, v___y_3237_, v___y_3238_, v___y_3239_);
if (lean_obj_tag(v___x_3275_) == 0)
{
lean_object* v_a_3276_; lean_object* v___x_3278_; uint8_t v_isShared_3279_; uint8_t v_isSharedCheck_3290_; 
v_a_3276_ = lean_ctor_get(v___x_3275_, 0);
v_isSharedCheck_3290_ = !lean_is_exclusive(v___x_3275_);
if (v_isSharedCheck_3290_ == 0)
{
v___x_3278_ = v___x_3275_;
v_isShared_3279_ = v_isSharedCheck_3290_;
goto v_resetjp_3277_;
}
else
{
lean_inc(v_a_3276_);
lean_dec(v___x_3275_);
v___x_3278_ = lean_box(0);
v_isShared_3279_ = v_isSharedCheck_3290_;
goto v_resetjp_3277_;
}
v_resetjp_3277_:
{
lean_object* v_fst_3280_; 
v_fst_3280_ = lean_ctor_get(v_a_3276_, 0);
if (lean_obj_tag(v_fst_3280_) == 0)
{
lean_object* v_snd_3281_; lean_object* v___x_3282_; lean_object* v___x_3284_; 
v_snd_3281_ = lean_ctor_get(v_a_3276_, 1);
lean_inc(v_snd_3281_);
lean_dec(v_a_3276_);
v___x_3282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3282_, 0, v_snd_3281_);
if (v_isShared_3279_ == 0)
{
lean_ctor_set(v___x_3278_, 0, v___x_3282_);
v___x_3284_ = v___x_3278_;
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
return v___x_3284_;
}
}
else
{
lean_object* v_val_3286_; lean_object* v___x_3288_; 
lean_inc_ref(v_fst_3280_);
lean_dec(v_a_3276_);
v_val_3286_ = lean_ctor_get(v_fst_3280_, 0);
lean_inc(v_val_3286_);
lean_dec_ref_known(v_fst_3280_, 1);
if (v_isShared_3279_ == 0)
{
lean_ctor_set(v___x_3278_, 0, v_val_3286_);
v___x_3288_ = v___x_3278_;
goto v_reusejp_3287_;
}
else
{
lean_object* v_reuseFailAlloc_3289_; 
v_reuseFailAlloc_3289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3289_, 0, v_val_3286_);
v___x_3288_ = v_reuseFailAlloc_3289_;
goto v_reusejp_3287_;
}
v_reusejp_3287_:
{
return v___x_3288_;
}
}
}
}
else
{
lean_object* v_a_3291_; lean_object* v___x_3293_; uint8_t v_isShared_3294_; uint8_t v_isSharedCheck_3298_; 
v_a_3291_ = lean_ctor_get(v___x_3275_, 0);
v_isSharedCheck_3298_ = !lean_is_exclusive(v___x_3275_);
if (v_isSharedCheck_3298_ == 0)
{
v___x_3293_ = v___x_3275_;
v_isShared_3294_ = v_isSharedCheck_3298_;
goto v_resetjp_3292_;
}
else
{
lean_inc(v_a_3291_);
lean_dec(v___x_3275_);
v___x_3293_ = lean_box(0);
v_isShared_3294_ = v_isSharedCheck_3298_;
goto v_resetjp_3292_;
}
v_resetjp_3292_:
{
lean_object* v___x_3296_; 
if (v_isShared_3294_ == 0)
{
v___x_3296_ = v___x_3293_;
goto v_reusejp_3295_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v_a_3291_);
v___x_3296_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3295_;
}
v_reusejp_3295_:
{
return v___x_3296_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__1(lean_object* v_init_3299_, lean_object* v_as_3300_, size_t v_sz_3301_, size_t v_i_3302_, lean_object* v_b_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_){
_start:
{
uint8_t v___x_3309_; 
v___x_3309_ = lean_usize_dec_lt(v_i_3302_, v_sz_3301_);
if (v___x_3309_ == 0)
{
lean_object* v___x_3310_; 
v___x_3310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3310_, 0, v_b_3303_);
return v___x_3310_;
}
else
{
lean_object* v_snd_3311_; lean_object* v___x_3313_; uint8_t v_isShared_3314_; uint8_t v_isSharedCheck_3345_; 
v_snd_3311_ = lean_ctor_get(v_b_3303_, 1);
v_isSharedCheck_3345_ = !lean_is_exclusive(v_b_3303_);
if (v_isSharedCheck_3345_ == 0)
{
lean_object* v_unused_3346_; 
v_unused_3346_ = lean_ctor_get(v_b_3303_, 0);
lean_dec(v_unused_3346_);
v___x_3313_ = v_b_3303_;
v_isShared_3314_ = v_isSharedCheck_3345_;
goto v_resetjp_3312_;
}
else
{
lean_inc(v_snd_3311_);
lean_dec(v_b_3303_);
v___x_3313_ = lean_box(0);
v_isShared_3314_ = v_isSharedCheck_3345_;
goto v_resetjp_3312_;
}
v_resetjp_3312_:
{
lean_object* v___x_3315_; lean_object* v_a_3316_; lean_object* v___x_3317_; 
v___x_3315_ = lean_box(0);
v_a_3316_ = lean_array_uget_borrowed(v_as_3300_, v_i_3302_);
lean_inc(v_snd_3311_);
v___x_3317_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0(v_init_3299_, v_a_3316_, v_snd_3311_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_);
if (lean_obj_tag(v___x_3317_) == 0)
{
lean_object* v_a_3318_; lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3336_; 
v_a_3318_ = lean_ctor_get(v___x_3317_, 0);
v_isSharedCheck_3336_ = !lean_is_exclusive(v___x_3317_);
if (v_isSharedCheck_3336_ == 0)
{
v___x_3320_ = v___x_3317_;
v_isShared_3321_ = v_isSharedCheck_3336_;
goto v_resetjp_3319_;
}
else
{
lean_inc(v_a_3318_);
lean_dec(v___x_3317_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3336_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
if (lean_obj_tag(v_a_3318_) == 0)
{
lean_object* v___x_3322_; lean_object* v___x_3324_; 
v___x_3322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3322_, 0, v_a_3318_);
if (v_isShared_3314_ == 0)
{
lean_ctor_set(v___x_3313_, 0, v___x_3322_);
v___x_3324_ = v___x_3313_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3328_; 
v_reuseFailAlloc_3328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3328_, 0, v___x_3322_);
lean_ctor_set(v_reuseFailAlloc_3328_, 1, v_snd_3311_);
v___x_3324_ = v_reuseFailAlloc_3328_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
lean_object* v___x_3326_; 
if (v_isShared_3321_ == 0)
{
lean_ctor_set(v___x_3320_, 0, v___x_3324_);
v___x_3326_ = v___x_3320_;
goto v_reusejp_3325_;
}
else
{
lean_object* v_reuseFailAlloc_3327_; 
v_reuseFailAlloc_3327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3327_, 0, v___x_3324_);
v___x_3326_ = v_reuseFailAlloc_3327_;
goto v_reusejp_3325_;
}
v_reusejp_3325_:
{
return v___x_3326_;
}
}
}
else
{
lean_object* v_a_3329_; lean_object* v___x_3331_; 
lean_del_object(v___x_3320_);
lean_dec(v_snd_3311_);
v_a_3329_ = lean_ctor_get(v_a_3318_, 0);
lean_inc(v_a_3329_);
lean_dec_ref_known(v_a_3318_, 1);
if (v_isShared_3314_ == 0)
{
lean_ctor_set(v___x_3313_, 1, v_a_3329_);
lean_ctor_set(v___x_3313_, 0, v___x_3315_);
v___x_3331_ = v___x_3313_;
goto v_reusejp_3330_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v___x_3315_);
lean_ctor_set(v_reuseFailAlloc_3335_, 1, v_a_3329_);
v___x_3331_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3330_;
}
v_reusejp_3330_:
{
size_t v___x_3332_; size_t v___x_3333_; 
v___x_3332_ = ((size_t)1ULL);
v___x_3333_ = lean_usize_add(v_i_3302_, v___x_3332_);
v_i_3302_ = v___x_3333_;
v_b_3303_ = v___x_3331_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3337_; lean_object* v___x_3339_; uint8_t v_isShared_3340_; uint8_t v_isSharedCheck_3344_; 
lean_del_object(v___x_3313_);
lean_dec(v_snd_3311_);
v_a_3337_ = lean_ctor_get(v___x_3317_, 0);
v_isSharedCheck_3344_ = !lean_is_exclusive(v___x_3317_);
if (v_isSharedCheck_3344_ == 0)
{
v___x_3339_ = v___x_3317_;
v_isShared_3340_ = v_isSharedCheck_3344_;
goto v_resetjp_3338_;
}
else
{
lean_inc(v_a_3337_);
lean_dec(v___x_3317_);
v___x_3339_ = lean_box(0);
v_isShared_3340_ = v_isSharedCheck_3344_;
goto v_resetjp_3338_;
}
v_resetjp_3338_:
{
lean_object* v___x_3342_; 
if (v_isShared_3340_ == 0)
{
v___x_3342_ = v___x_3339_;
goto v_reusejp_3341_;
}
else
{
lean_object* v_reuseFailAlloc_3343_; 
v_reuseFailAlloc_3343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3343_, 0, v_a_3337_);
v___x_3342_ = v_reuseFailAlloc_3343_;
goto v_reusejp_3341_;
}
v_reusejp_3341_:
{
return v___x_3342_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__1___boxed(lean_object* v_init_3347_, lean_object* v_as_3348_, lean_object* v_sz_3349_, lean_object* v_i_3350_, lean_object* v_b_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_){
_start:
{
size_t v_sz_boxed_3357_; size_t v_i_boxed_3358_; lean_object* v_res_3359_; 
v_sz_boxed_3357_ = lean_unbox_usize(v_sz_3349_);
lean_dec(v_sz_3349_);
v_i_boxed_3358_ = lean_unbox_usize(v_i_3350_);
lean_dec(v_i_3350_);
v_res_3359_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0_spec__1(v_init_3347_, v_as_3348_, v_sz_boxed_3357_, v_i_boxed_3358_, v_b_3351_, v___y_3352_, v___y_3353_, v___y_3354_, v___y_3355_);
lean_dec(v___y_3355_);
lean_dec_ref(v___y_3354_);
lean_dec(v___y_3353_);
lean_dec_ref(v___y_3352_);
lean_dec_ref(v_as_3348_);
lean_dec_ref(v_init_3347_);
return v_res_3359_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0___boxed(lean_object* v_init_3360_, lean_object* v_n_3361_, lean_object* v_b_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_){
_start:
{
lean_object* v_res_3368_; 
v_res_3368_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0(v_init_3360_, v_n_3361_, v_b_3362_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_);
lean_dec(v___y_3366_);
lean_dec_ref(v___y_3365_);
lean_dec(v___y_3364_);
lean_dec_ref(v___y_3363_);
lean_dec_ref(v_n_3361_);
lean_dec_ref(v_init_3360_);
return v_res_3368_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1_spec__4(lean_object* v_as_3369_, size_t v_sz_3370_, size_t v_i_3371_, lean_object* v_b_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_){
_start:
{
uint8_t v___x_3378_; 
v___x_3378_ = lean_usize_dec_lt(v_i_3371_, v_sz_3370_);
if (v___x_3378_ == 0)
{
lean_object* v___x_3379_; 
v___x_3379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3379_, 0, v_b_3372_);
return v___x_3379_;
}
else
{
lean_object* v_snd_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3410_; 
v_snd_3380_ = lean_ctor_get(v_b_3372_, 1);
v_isSharedCheck_3410_ = !lean_is_exclusive(v_b_3372_);
if (v_isSharedCheck_3410_ == 0)
{
lean_object* v_unused_3411_; 
v_unused_3411_ = lean_ctor_get(v_b_3372_, 0);
lean_dec(v_unused_3411_);
v___x_3382_ = v_b_3372_;
v_isShared_3383_ = v_isSharedCheck_3410_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_snd_3380_);
lean_dec(v_b_3372_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3410_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
lean_object* v___x_3384_; lean_object* v_a_3386_; lean_object* v_a_3393_; 
v___x_3384_ = lean_box(0);
v_a_3393_ = lean_array_uget_borrowed(v_as_3369_, v_i_3371_);
if (lean_obj_tag(v_a_3393_) == 0)
{
v_a_3386_ = v_snd_3380_;
goto v___jp_3385_;
}
else
{
lean_object* v_val_3394_; uint8_t v___x_3395_; 
v_val_3394_ = lean_ctor_get(v_a_3393_, 0);
v___x_3395_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3394_);
if (v___x_3395_ == 0)
{
lean_object* v___x_3396_; lean_object* v___x_3397_; 
v___x_3396_ = l_Lean_LocalDecl_type(v_val_3394_);
v___x_3397_ = l_Lean_Meta_isProp(v___x_3396_, v___y_3373_, v___y_3374_, v___y_3375_, v___y_3376_);
if (lean_obj_tag(v___x_3397_) == 0)
{
lean_object* v_a_3398_; uint8_t v___x_3399_; 
v_a_3398_ = lean_ctor_get(v___x_3397_, 0);
lean_inc(v_a_3398_);
lean_dec_ref_known(v___x_3397_, 1);
v___x_3399_ = lean_unbox(v_a_3398_);
lean_dec(v_a_3398_);
if (v___x_3399_ == 0)
{
v_a_3386_ = v_snd_3380_;
goto v___jp_3385_;
}
else
{
lean_object* v___x_3400_; lean_object* v___x_3401_; 
v___x_3400_ = l_Lean_LocalDecl_fvarId(v_val_3394_);
v___x_3401_ = lean_array_push(v_snd_3380_, v___x_3400_);
v_a_3386_ = v___x_3401_;
goto v___jp_3385_;
}
}
else
{
lean_object* v_a_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3409_; 
lean_del_object(v___x_3382_);
lean_dec(v_snd_3380_);
v_a_3402_ = lean_ctor_get(v___x_3397_, 0);
v_isSharedCheck_3409_ = !lean_is_exclusive(v___x_3397_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3404_ = v___x_3397_;
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_a_3402_);
lean_dec(v___x_3397_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
lean_object* v___x_3407_; 
if (v_isShared_3405_ == 0)
{
v___x_3407_ = v___x_3404_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v_a_3402_);
v___x_3407_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
return v___x_3407_;
}
}
}
}
else
{
v_a_3386_ = v_snd_3380_;
goto v___jp_3385_;
}
}
v___jp_3385_:
{
lean_object* v___x_3388_; 
if (v_isShared_3383_ == 0)
{
lean_ctor_set(v___x_3382_, 1, v_a_3386_);
lean_ctor_set(v___x_3382_, 0, v___x_3384_);
v___x_3388_ = v___x_3382_;
goto v_reusejp_3387_;
}
else
{
lean_object* v_reuseFailAlloc_3392_; 
v_reuseFailAlloc_3392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3392_, 0, v___x_3384_);
lean_ctor_set(v_reuseFailAlloc_3392_, 1, v_a_3386_);
v___x_3388_ = v_reuseFailAlloc_3392_;
goto v_reusejp_3387_;
}
v_reusejp_3387_:
{
size_t v___x_3389_; size_t v___x_3390_; 
v___x_3389_ = ((size_t)1ULL);
v___x_3390_ = lean_usize_add(v_i_3371_, v___x_3389_);
v_i_3371_ = v___x_3390_;
v_b_3372_ = v___x_3388_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1_spec__4___boxed(lean_object* v_as_3412_, lean_object* v_sz_3413_, lean_object* v_i_3414_, lean_object* v_b_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_){
_start:
{
size_t v_sz_boxed_3421_; size_t v_i_boxed_3422_; lean_object* v_res_3423_; 
v_sz_boxed_3421_ = lean_unbox_usize(v_sz_3413_);
lean_dec(v_sz_3413_);
v_i_boxed_3422_ = lean_unbox_usize(v_i_3414_);
lean_dec(v_i_3414_);
v_res_3423_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1_spec__4(v_as_3412_, v_sz_boxed_3421_, v_i_boxed_3422_, v_b_3415_, v___y_3416_, v___y_3417_, v___y_3418_, v___y_3419_);
lean_dec(v___y_3419_);
lean_dec_ref(v___y_3418_);
lean_dec(v___y_3417_);
lean_dec_ref(v___y_3416_);
lean_dec_ref(v_as_3412_);
return v_res_3423_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1(lean_object* v_as_3424_, size_t v_sz_3425_, size_t v_i_3426_, lean_object* v_b_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_){
_start:
{
uint8_t v___x_3433_; 
v___x_3433_ = lean_usize_dec_lt(v_i_3426_, v_sz_3425_);
if (v___x_3433_ == 0)
{
lean_object* v___x_3434_; 
v___x_3434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3434_, 0, v_b_3427_);
return v___x_3434_;
}
else
{
lean_object* v_snd_3435_; lean_object* v___x_3437_; uint8_t v_isShared_3438_; uint8_t v_isSharedCheck_3465_; 
v_snd_3435_ = lean_ctor_get(v_b_3427_, 1);
v_isSharedCheck_3465_ = !lean_is_exclusive(v_b_3427_);
if (v_isSharedCheck_3465_ == 0)
{
lean_object* v_unused_3466_; 
v_unused_3466_ = lean_ctor_get(v_b_3427_, 0);
lean_dec(v_unused_3466_);
v___x_3437_ = v_b_3427_;
v_isShared_3438_ = v_isSharedCheck_3465_;
goto v_resetjp_3436_;
}
else
{
lean_inc(v_snd_3435_);
lean_dec(v_b_3427_);
v___x_3437_ = lean_box(0);
v_isShared_3438_ = v_isSharedCheck_3465_;
goto v_resetjp_3436_;
}
v_resetjp_3436_:
{
lean_object* v___x_3439_; lean_object* v_a_3441_; lean_object* v_a_3448_; 
v___x_3439_ = lean_box(0);
v_a_3448_ = lean_array_uget_borrowed(v_as_3424_, v_i_3426_);
if (lean_obj_tag(v_a_3448_) == 0)
{
v_a_3441_ = v_snd_3435_;
goto v___jp_3440_;
}
else
{
lean_object* v_val_3449_; uint8_t v___x_3450_; 
v_val_3449_ = lean_ctor_get(v_a_3448_, 0);
v___x_3450_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3449_);
if (v___x_3450_ == 0)
{
lean_object* v___x_3451_; lean_object* v___x_3452_; 
v___x_3451_ = l_Lean_LocalDecl_type(v_val_3449_);
v___x_3452_ = l_Lean_Meta_isProp(v___x_3451_, v___y_3428_, v___y_3429_, v___y_3430_, v___y_3431_);
if (lean_obj_tag(v___x_3452_) == 0)
{
lean_object* v_a_3453_; uint8_t v___x_3454_; 
v_a_3453_ = lean_ctor_get(v___x_3452_, 0);
lean_inc(v_a_3453_);
lean_dec_ref_known(v___x_3452_, 1);
v___x_3454_ = lean_unbox(v_a_3453_);
lean_dec(v_a_3453_);
if (v___x_3454_ == 0)
{
v_a_3441_ = v_snd_3435_;
goto v___jp_3440_;
}
else
{
lean_object* v___x_3455_; lean_object* v___x_3456_; 
v___x_3455_ = l_Lean_LocalDecl_fvarId(v_val_3449_);
v___x_3456_ = lean_array_push(v_snd_3435_, v___x_3455_);
v_a_3441_ = v___x_3456_;
goto v___jp_3440_;
}
}
else
{
lean_object* v_a_3457_; lean_object* v___x_3459_; uint8_t v_isShared_3460_; uint8_t v_isSharedCheck_3464_; 
lean_del_object(v___x_3437_);
lean_dec(v_snd_3435_);
v_a_3457_ = lean_ctor_get(v___x_3452_, 0);
v_isSharedCheck_3464_ = !lean_is_exclusive(v___x_3452_);
if (v_isSharedCheck_3464_ == 0)
{
v___x_3459_ = v___x_3452_;
v_isShared_3460_ = v_isSharedCheck_3464_;
goto v_resetjp_3458_;
}
else
{
lean_inc(v_a_3457_);
lean_dec(v___x_3452_);
v___x_3459_ = lean_box(0);
v_isShared_3460_ = v_isSharedCheck_3464_;
goto v_resetjp_3458_;
}
v_resetjp_3458_:
{
lean_object* v___x_3462_; 
if (v_isShared_3460_ == 0)
{
v___x_3462_ = v___x_3459_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v_a_3457_);
v___x_3462_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
return v___x_3462_;
}
}
}
}
else
{
v_a_3441_ = v_snd_3435_;
goto v___jp_3440_;
}
}
v___jp_3440_:
{
lean_object* v___x_3443_; 
if (v_isShared_3438_ == 0)
{
lean_ctor_set(v___x_3437_, 1, v_a_3441_);
lean_ctor_set(v___x_3437_, 0, v___x_3439_);
v___x_3443_ = v___x_3437_;
goto v_reusejp_3442_;
}
else
{
lean_object* v_reuseFailAlloc_3447_; 
v_reuseFailAlloc_3447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3447_, 0, v___x_3439_);
lean_ctor_set(v_reuseFailAlloc_3447_, 1, v_a_3441_);
v___x_3443_ = v_reuseFailAlloc_3447_;
goto v_reusejp_3442_;
}
v_reusejp_3442_:
{
size_t v___x_3444_; size_t v___x_3445_; lean_object* v___x_3446_; 
v___x_3444_ = ((size_t)1ULL);
v___x_3445_ = lean_usize_add(v_i_3426_, v___x_3444_);
v___x_3446_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1_spec__4(v_as_3424_, v_sz_3425_, v___x_3445_, v___x_3443_, v___y_3428_, v___y_3429_, v___y_3430_, v___y_3431_);
return v___x_3446_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1___boxed(lean_object* v_as_3467_, lean_object* v_sz_3468_, lean_object* v_i_3469_, lean_object* v_b_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_){
_start:
{
size_t v_sz_boxed_3476_; size_t v_i_boxed_3477_; lean_object* v_res_3478_; 
v_sz_boxed_3476_ = lean_unbox_usize(v_sz_3468_);
lean_dec(v_sz_3468_);
v_i_boxed_3477_ = lean_unbox_usize(v_i_3469_);
lean_dec(v_i_3469_);
v_res_3478_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1(v_as_3467_, v_sz_boxed_3476_, v_i_boxed_3477_, v_b_3470_, v___y_3471_, v___y_3472_, v___y_3473_, v___y_3474_);
lean_dec(v___y_3474_);
lean_dec_ref(v___y_3473_);
lean_dec(v___y_3472_);
lean_dec_ref(v___y_3471_);
lean_dec_ref(v_as_3467_);
return v_res_3478_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0(lean_object* v_t_3479_, lean_object* v_init_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_){
_start:
{
lean_object* v_root_3486_; lean_object* v_tail_3487_; lean_object* v___x_3488_; 
v_root_3486_ = lean_ctor_get(v_t_3479_, 0);
v_tail_3487_ = lean_ctor_get(v_t_3479_, 1);
lean_inc_ref(v_init_3480_);
v___x_3488_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__0(v_init_3480_, v_root_3486_, v_init_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_);
lean_dec_ref(v_init_3480_);
if (lean_obj_tag(v___x_3488_) == 0)
{
lean_object* v_a_3489_; lean_object* v___x_3491_; uint8_t v_isShared_3492_; uint8_t v_isSharedCheck_3525_; 
v_a_3489_ = lean_ctor_get(v___x_3488_, 0);
v_isSharedCheck_3525_ = !lean_is_exclusive(v___x_3488_);
if (v_isSharedCheck_3525_ == 0)
{
v___x_3491_ = v___x_3488_;
v_isShared_3492_ = v_isSharedCheck_3525_;
goto v_resetjp_3490_;
}
else
{
lean_inc(v_a_3489_);
lean_dec(v___x_3488_);
v___x_3491_ = lean_box(0);
v_isShared_3492_ = v_isSharedCheck_3525_;
goto v_resetjp_3490_;
}
v_resetjp_3490_:
{
if (lean_obj_tag(v_a_3489_) == 0)
{
lean_object* v_a_3493_; lean_object* v___x_3495_; 
v_a_3493_ = lean_ctor_get(v_a_3489_, 0);
lean_inc(v_a_3493_);
lean_dec_ref_known(v_a_3489_, 1);
if (v_isShared_3492_ == 0)
{
lean_ctor_set(v___x_3491_, 0, v_a_3493_);
v___x_3495_ = v___x_3491_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v_a_3493_);
v___x_3495_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
return v___x_3495_;
}
}
else
{
lean_object* v_a_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; size_t v_sz_3500_; size_t v___x_3501_; lean_object* v___x_3502_; 
lean_del_object(v___x_3491_);
v_a_3497_ = lean_ctor_get(v_a_3489_, 0);
lean_inc(v_a_3497_);
lean_dec_ref_known(v_a_3489_, 1);
v___x_3498_ = lean_box(0);
v___x_3499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3499_, 0, v___x_3498_);
lean_ctor_set(v___x_3499_, 1, v_a_3497_);
v_sz_3500_ = lean_array_size(v_tail_3487_);
v___x_3501_ = ((size_t)0ULL);
v___x_3502_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0_spec__1(v_tail_3487_, v_sz_3500_, v___x_3501_, v___x_3499_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_);
if (lean_obj_tag(v___x_3502_) == 0)
{
lean_object* v_a_3503_; lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3516_; 
v_a_3503_ = lean_ctor_get(v___x_3502_, 0);
v_isSharedCheck_3516_ = !lean_is_exclusive(v___x_3502_);
if (v_isSharedCheck_3516_ == 0)
{
v___x_3505_ = v___x_3502_;
v_isShared_3506_ = v_isSharedCheck_3516_;
goto v_resetjp_3504_;
}
else
{
lean_inc(v_a_3503_);
lean_dec(v___x_3502_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3516_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
lean_object* v_fst_3507_; 
v_fst_3507_ = lean_ctor_get(v_a_3503_, 0);
if (lean_obj_tag(v_fst_3507_) == 0)
{
lean_object* v_snd_3508_; lean_object* v___x_3510_; 
v_snd_3508_ = lean_ctor_get(v_a_3503_, 1);
lean_inc(v_snd_3508_);
lean_dec(v_a_3503_);
if (v_isShared_3506_ == 0)
{
lean_ctor_set(v___x_3505_, 0, v_snd_3508_);
v___x_3510_ = v___x_3505_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v_snd_3508_);
v___x_3510_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
return v___x_3510_;
}
}
else
{
lean_object* v_val_3512_; lean_object* v___x_3514_; 
lean_inc_ref(v_fst_3507_);
lean_dec(v_a_3503_);
v_val_3512_ = lean_ctor_get(v_fst_3507_, 0);
lean_inc(v_val_3512_);
lean_dec_ref_known(v_fst_3507_, 1);
if (v_isShared_3506_ == 0)
{
lean_ctor_set(v___x_3505_, 0, v_val_3512_);
v___x_3514_ = v___x_3505_;
goto v_reusejp_3513_;
}
else
{
lean_object* v_reuseFailAlloc_3515_; 
v_reuseFailAlloc_3515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3515_, 0, v_val_3512_);
v___x_3514_ = v_reuseFailAlloc_3515_;
goto v_reusejp_3513_;
}
v_reusejp_3513_:
{
return v___x_3514_;
}
}
}
}
else
{
lean_object* v_a_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3524_; 
v_a_3517_ = lean_ctor_get(v___x_3502_, 0);
v_isSharedCheck_3524_ = !lean_is_exclusive(v___x_3502_);
if (v_isSharedCheck_3524_ == 0)
{
v___x_3519_ = v___x_3502_;
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_a_3517_);
lean_dec(v___x_3502_);
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
lean_object* v_a_3526_; lean_object* v___x_3528_; uint8_t v_isShared_3529_; uint8_t v_isSharedCheck_3533_; 
v_a_3526_ = lean_ctor_get(v___x_3488_, 0);
v_isSharedCheck_3533_ = !lean_is_exclusive(v___x_3488_);
if (v_isSharedCheck_3533_ == 0)
{
v___x_3528_ = v___x_3488_;
v_isShared_3529_ = v_isSharedCheck_3533_;
goto v_resetjp_3527_;
}
else
{
lean_inc(v_a_3526_);
lean_dec(v___x_3488_);
v___x_3528_ = lean_box(0);
v_isShared_3529_ = v_isSharedCheck_3533_;
goto v_resetjp_3527_;
}
v_resetjp_3527_:
{
lean_object* v___x_3531_; 
if (v_isShared_3529_ == 0)
{
v___x_3531_ = v___x_3528_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3532_; 
v_reuseFailAlloc_3532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3532_, 0, v_a_3526_);
v___x_3531_ = v_reuseFailAlloc_3532_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
return v___x_3531_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0___boxed(lean_object* v_t_3534_, lean_object* v_init_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_){
_start:
{
lean_object* v_res_3541_; 
v_res_3541_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0(v_t_3534_, v_init_3535_, v___y_3536_, v___y_3537_, v___y_3538_, v___y_3539_);
lean_dec(v___y_3539_);
lean_dec_ref(v___y_3538_);
lean_dec(v___y_3537_);
lean_dec_ref(v___y_3536_);
lean_dec_ref(v_t_3534_);
return v_res_3541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getPropHyps(lean_object* v_a_3542_, lean_object* v_a_3543_, lean_object* v_a_3544_, lean_object* v_a_3545_){
_start:
{
lean_object* v_lctx_3547_; lean_object* v_decls_3548_; lean_object* v_result_3549_; lean_object* v___x_3550_; 
v_lctx_3547_ = lean_ctor_get(v_a_3542_, 2);
v_decls_3548_ = lean_ctor_get(v_lctx_3547_, 1);
v_result_3549_ = ((lean_object*)(l_Lean_MVarId_getNondepPropHyps___lam__2___closed__0));
v___x_3550_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_getPropHyps_spec__0(v_decls_3548_, v_result_3549_, v_a_3542_, v_a_3543_, v_a_3544_, v_a_3545_);
return v___x_3550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getPropHyps___boxed(lean_object* v_a_3551_, lean_object* v_a_3552_, lean_object* v_a_3553_, lean_object* v_a_3554_, lean_object* v_a_3555_){
_start:
{
lean_object* v_res_3556_; 
v_res_3556_ = l_Lean_Meta_getPropHyps(v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
lean_dec(v_a_3554_);
lean_dec_ref(v_a_3553_);
lean_dec(v_a_3552_);
lean_dec_ref(v_a_3551_);
return v_res_3556_;
}
}
static lean_object* _init_l_Lean_MVarId_inferInstance___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3560_; lean_object* v___x_3561_; 
v___x_3560_ = ((lean_object*)(l_Lean_MVarId_inferInstance___lam__0___closed__1));
v___x_3561_ = l_Lean_MessageData_ofFormat(v___x_3560_);
return v___x_3561_;
}
}
static lean_object* _init_l_Lean_MVarId_inferInstance___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3562_; lean_object* v___x_3563_; 
v___x_3562_ = lean_obj_once(&l_Lean_MVarId_inferInstance___lam__0___closed__2, &l_Lean_MVarId_inferInstance___lam__0___closed__2_once, _init_l_Lean_MVarId_inferInstance___lam__0___closed__2);
v___x_3563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3563_, 0, v___x_3562_);
return v___x_3563_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_inferInstance___lam__0(lean_object* v_mvarId_3564_, lean_object* v___x_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_, lean_object* v___y_3568_, lean_object* v___y_3569_){
_start:
{
lean_object* v___x_3571_; 
lean_inc(v___x_3565_);
lean_inc(v_mvarId_3564_);
v___x_3571_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_3564_, v___x_3565_, v___y_3566_, v___y_3567_, v___y_3568_, v___y_3569_);
if (lean_obj_tag(v___x_3571_) == 0)
{
lean_object* v___x_3572_; 
lean_dec_ref_known(v___x_3571_, 1);
lean_inc(v_mvarId_3564_);
v___x_3572_ = l_Lean_MVarId_getType(v_mvarId_3564_, v___y_3566_, v___y_3567_, v___y_3568_, v___y_3569_);
if (lean_obj_tag(v___x_3572_) == 0)
{
lean_object* v_a_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; 
v_a_3573_ = lean_ctor_get(v___x_3572_, 0);
lean_inc(v_a_3573_);
lean_dec_ref_known(v___x_3572_, 1);
v___x_3574_ = lean_box(0);
v___x_3575_ = l_Lean_Meta_synthInstance(v_a_3573_, v___x_3574_, v___y_3566_, v___y_3567_, v___y_3568_, v___y_3569_);
if (lean_obj_tag(v___x_3575_) == 0)
{
lean_object* v_a_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; 
v_a_3576_ = lean_ctor_get(v___x_3575_, 0);
lean_inc(v_a_3576_);
lean_dec_ref_known(v___x_3575_, 1);
lean_inc(v_mvarId_3564_);
v___x_3577_ = l_Lean_mkMVar(v_mvarId_3564_);
v___x_3578_ = l_Lean_Meta_isExprDefEq(v___x_3577_, v_a_3576_, v___y_3566_, v___y_3567_, v___y_3568_, v___y_3569_);
if (lean_obj_tag(v___x_3578_) == 0)
{
lean_object* v_a_3579_; lean_object* v___x_3581_; uint8_t v_isShared_3582_; uint8_t v_isSharedCheck_3590_; 
v_a_3579_ = lean_ctor_get(v___x_3578_, 0);
v_isSharedCheck_3590_ = !lean_is_exclusive(v___x_3578_);
if (v_isSharedCheck_3590_ == 0)
{
v___x_3581_ = v___x_3578_;
v_isShared_3582_ = v_isSharedCheck_3590_;
goto v_resetjp_3580_;
}
else
{
lean_inc(v_a_3579_);
lean_dec(v___x_3578_);
v___x_3581_ = lean_box(0);
v_isShared_3582_ = v_isSharedCheck_3590_;
goto v_resetjp_3580_;
}
v_resetjp_3580_:
{
uint8_t v___x_3583_; 
v___x_3583_ = lean_unbox(v_a_3579_);
lean_dec(v_a_3579_);
if (v___x_3583_ == 0)
{
lean_object* v___x_3584_; lean_object* v___x_3585_; 
lean_del_object(v___x_3581_);
v___x_3584_ = lean_obj_once(&l_Lean_MVarId_inferInstance___lam__0___closed__3, &l_Lean_MVarId_inferInstance___lam__0___closed__3_once, _init_l_Lean_MVarId_inferInstance___lam__0___closed__3);
v___x_3585_ = l_Lean_Meta_throwTacticEx___redArg(v___x_3565_, v_mvarId_3564_, v___x_3584_, v___y_3566_, v___y_3567_, v___y_3568_, v___y_3569_);
return v___x_3585_;
}
else
{
lean_object* v___x_3586_; lean_object* v___x_3588_; 
lean_dec(v___x_3565_);
lean_dec(v_mvarId_3564_);
v___x_3586_ = lean_box(0);
if (v_isShared_3582_ == 0)
{
lean_ctor_set(v___x_3581_, 0, v___x_3586_);
v___x_3588_ = v___x_3581_;
goto v_reusejp_3587_;
}
else
{
lean_object* v_reuseFailAlloc_3589_; 
v_reuseFailAlloc_3589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3589_, 0, v___x_3586_);
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
else
{
lean_object* v_a_3591_; lean_object* v___x_3593_; uint8_t v_isShared_3594_; uint8_t v_isSharedCheck_3598_; 
lean_dec(v___x_3565_);
lean_dec(v_mvarId_3564_);
v_a_3591_ = lean_ctor_get(v___x_3578_, 0);
v_isSharedCheck_3598_ = !lean_is_exclusive(v___x_3578_);
if (v_isSharedCheck_3598_ == 0)
{
v___x_3593_ = v___x_3578_;
v_isShared_3594_ = v_isSharedCheck_3598_;
goto v_resetjp_3592_;
}
else
{
lean_inc(v_a_3591_);
lean_dec(v___x_3578_);
v___x_3593_ = lean_box(0);
v_isShared_3594_ = v_isSharedCheck_3598_;
goto v_resetjp_3592_;
}
v_resetjp_3592_:
{
lean_object* v___x_3596_; 
if (v_isShared_3594_ == 0)
{
v___x_3596_ = v___x_3593_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v_a_3591_);
v___x_3596_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
return v___x_3596_;
}
}
}
}
else
{
lean_object* v_a_3599_; lean_object* v___x_3601_; uint8_t v_isShared_3602_; uint8_t v_isSharedCheck_3606_; 
lean_dec(v___x_3565_);
lean_dec(v_mvarId_3564_);
v_a_3599_ = lean_ctor_get(v___x_3575_, 0);
v_isSharedCheck_3606_ = !lean_is_exclusive(v___x_3575_);
if (v_isSharedCheck_3606_ == 0)
{
v___x_3601_ = v___x_3575_;
v_isShared_3602_ = v_isSharedCheck_3606_;
goto v_resetjp_3600_;
}
else
{
lean_inc(v_a_3599_);
lean_dec(v___x_3575_);
v___x_3601_ = lean_box(0);
v_isShared_3602_ = v_isSharedCheck_3606_;
goto v_resetjp_3600_;
}
v_resetjp_3600_:
{
lean_object* v___x_3604_; 
if (v_isShared_3602_ == 0)
{
v___x_3604_ = v___x_3601_;
goto v_reusejp_3603_;
}
else
{
lean_object* v_reuseFailAlloc_3605_; 
v_reuseFailAlloc_3605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3605_, 0, v_a_3599_);
v___x_3604_ = v_reuseFailAlloc_3605_;
goto v_reusejp_3603_;
}
v_reusejp_3603_:
{
return v___x_3604_;
}
}
}
}
else
{
lean_object* v_a_3607_; lean_object* v___x_3609_; uint8_t v_isShared_3610_; uint8_t v_isSharedCheck_3614_; 
lean_dec(v___x_3565_);
lean_dec(v_mvarId_3564_);
v_a_3607_ = lean_ctor_get(v___x_3572_, 0);
v_isSharedCheck_3614_ = !lean_is_exclusive(v___x_3572_);
if (v_isSharedCheck_3614_ == 0)
{
v___x_3609_ = v___x_3572_;
v_isShared_3610_ = v_isSharedCheck_3614_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_a_3607_);
lean_dec(v___x_3572_);
v___x_3609_ = lean_box(0);
v_isShared_3610_ = v_isSharedCheck_3614_;
goto v_resetjp_3608_;
}
v_resetjp_3608_:
{
lean_object* v___x_3612_; 
if (v_isShared_3610_ == 0)
{
v___x_3612_ = v___x_3609_;
goto v_reusejp_3611_;
}
else
{
lean_object* v_reuseFailAlloc_3613_; 
v_reuseFailAlloc_3613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3613_, 0, v_a_3607_);
v___x_3612_ = v_reuseFailAlloc_3613_;
goto v_reusejp_3611_;
}
v_reusejp_3611_:
{
return v___x_3612_;
}
}
}
}
else
{
lean_dec(v___x_3565_);
lean_dec(v_mvarId_3564_);
return v___x_3571_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_inferInstance___lam__0___boxed(lean_object* v_mvarId_3615_, lean_object* v___x_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_){
_start:
{
lean_object* v_res_3622_; 
v_res_3622_ = l_Lean_MVarId_inferInstance___lam__0(v_mvarId_3615_, v___x_3616_, v___y_3617_, v___y_3618_, v___y_3619_, v___y_3620_);
lean_dec(v___y_3620_);
lean_dec_ref(v___y_3619_);
lean_dec(v___y_3618_);
lean_dec_ref(v___y_3617_);
return v_res_3622_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_inferInstance(lean_object* v_mvarId_3626_, lean_object* v_a_3627_, lean_object* v_a_3628_, lean_object* v_a_3629_, lean_object* v_a_3630_){
_start:
{
lean_object* v___x_3632_; lean_object* v___f_3633_; lean_object* v___x_3634_; 
v___x_3632_ = ((lean_object*)(l_Lean_MVarId_inferInstance___closed__1));
lean_inc(v_mvarId_3626_);
v___f_3633_ = lean_alloc_closure((void*)(l_Lean_MVarId_inferInstance___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3633_, 0, v_mvarId_3626_);
lean_closure_set(v___f_3633_, 1, v___x_3632_);
v___x_3634_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_admit_spec__1___redArg(v_mvarId_3626_, v___f_3633_, v_a_3627_, v_a_3628_, v_a_3629_, v_a_3630_);
return v___x_3634_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_inferInstance___boxed(lean_object* v_mvarId_3635_, lean_object* v_a_3636_, lean_object* v_a_3637_, lean_object* v_a_3638_, lean_object* v_a_3639_, lean_object* v_a_3640_){
_start:
{
lean_object* v_res_3641_; 
v_res_3641_ = l_Lean_MVarId_inferInstance(v_mvarId_3635_, v_a_3636_, v_a_3637_, v_a_3638_, v_a_3639_);
lean_dec(v_a_3639_);
lean_dec_ref(v_a_3638_);
lean_dec(v_a_3637_);
lean_dec_ref(v_a_3636_);
return v_res_3641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorIdx___impl(lean_object* v_x_3642_){
_start:
{
lean_object* v___x_3643_; 
v___x_3643_ = lean_obj_tag_nat(v_x_3642_);
return v___x_3643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorIdx___impl___boxed(lean_object* v_x_3644_){
_start:
{
lean_object* v_res_3645_; 
v_res_3645_ = l_Lean_Meta_TacticResultCNM_ctorIdx___impl(v_x_3644_);
lean_dec(v_x_3644_);
return v_res_3645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorElim___redArg(lean_object* v_t_3646_, lean_object* v_k_3647_){
_start:
{
if (lean_obj_tag(v_t_3646_) == 2)
{
lean_object* v_mvarId_3648_; lean_object* v___x_3649_; 
v_mvarId_3648_ = lean_ctor_get(v_t_3646_, 0);
lean_inc(v_mvarId_3648_);
lean_dec_ref_known(v_t_3646_, 1);
v___x_3649_ = lean_apply_1(v_k_3647_, v_mvarId_3648_);
return v___x_3649_;
}
else
{
lean_dec(v_t_3646_);
return v_k_3647_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorElim(lean_object* v_motive_3650_, lean_object* v_ctorIdx_3651_, lean_object* v_t_3652_, lean_object* v_h_3653_, lean_object* v_k_3654_){
_start:
{
lean_object* v___x_3655_; 
v___x_3655_ = l_Lean_Meta_TacticResultCNM_ctorElim___redArg(v_t_3652_, v_k_3654_);
return v___x_3655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_ctorElim___boxed(lean_object* v_motive_3656_, lean_object* v_ctorIdx_3657_, lean_object* v_t_3658_, lean_object* v_h_3659_, lean_object* v_k_3660_){
_start:
{
lean_object* v_res_3661_; 
v_res_3661_ = l_Lean_Meta_TacticResultCNM_ctorElim(v_motive_3656_, v_ctorIdx_3657_, v_t_3658_, v_h_3659_, v_k_3660_);
lean_dec(v_ctorIdx_3657_);
return v_res_3661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_closed_elim___redArg(lean_object* v_t_3662_, lean_object* v_closed_3663_){
_start:
{
lean_object* v___x_3664_; 
v___x_3664_ = l_Lean_Meta_TacticResultCNM_ctorElim___redArg(v_t_3662_, v_closed_3663_);
return v___x_3664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_closed_elim(lean_object* v_motive_3665_, lean_object* v_t_3666_, lean_object* v_h_3667_, lean_object* v_closed_3668_){
_start:
{
lean_object* v___x_3669_; 
v___x_3669_ = l_Lean_Meta_TacticResultCNM_ctorElim___redArg(v_t_3666_, v_closed_3668_);
return v___x_3669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_noChange_elim___redArg(lean_object* v_t_3670_, lean_object* v_noChange_3671_){
_start:
{
lean_object* v___x_3672_; 
v___x_3672_ = l_Lean_Meta_TacticResultCNM_ctorElim___redArg(v_t_3670_, v_noChange_3671_);
return v___x_3672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_noChange_elim(lean_object* v_motive_3673_, lean_object* v_t_3674_, lean_object* v_h_3675_, lean_object* v_noChange_3676_){
_start:
{
lean_object* v___x_3677_; 
v___x_3677_ = l_Lean_Meta_TacticResultCNM_ctorElim___redArg(v_t_3674_, v_noChange_3676_);
return v___x_3677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_modified_elim___redArg(lean_object* v_t_3678_, lean_object* v_modified_3679_){
_start:
{
lean_object* v___x_3680_; 
v___x_3680_ = l_Lean_Meta_TacticResultCNM_ctorElim___redArg(v_t_3678_, v_modified_3679_);
return v___x_3680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_TacticResultCNM_modified_elim(lean_object* v_motive_3681_, lean_object* v_t_3682_, lean_object* v_h_3683_, lean_object* v_modified_3684_){
_start:
{
lean_object* v___x_3685_; 
v___x_3685_ = l_Lean_Meta_TacticResultCNM_ctorElim___redArg(v_t_3682_, v_modified_3684_);
return v___x_3685_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isSubsingleton(lean_object* v_g_3689_, lean_object* v_a_3690_, lean_object* v_a_3691_, lean_object* v_a_3692_, lean_object* v_a_3693_){
_start:
{
lean_object* v_a_3696_; lean_object* v___x_3703_; 
v___x_3703_ = l_Lean_MVarId_getType(v_g_3689_, v_a_3690_, v_a_3691_, v_a_3692_, v_a_3693_);
if (lean_obj_tag(v___x_3703_) == 0)
{
lean_object* v_a_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; 
v_a_3704_ = lean_ctor_get(v___x_3703_, 0);
lean_inc(v_a_3704_);
lean_dec_ref_known(v___x_3703_, 1);
v___x_3705_ = ((lean_object*)(l_Lean_MVarId_isSubsingleton___closed__1));
v___x_3706_ = lean_unsigned_to_nat(1u);
v___x_3707_ = lean_mk_empty_array_with_capacity(v___x_3706_);
v___x_3708_ = lean_array_push(v___x_3707_, v_a_3704_);
v___x_3709_ = l_Lean_Meta_mkAppM(v___x_3705_, v___x_3708_, v_a_3690_, v_a_3691_, v_a_3692_, v_a_3693_);
if (lean_obj_tag(v___x_3709_) == 0)
{
lean_object* v_a_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; 
v_a_3710_ = lean_ctor_get(v___x_3709_, 0);
lean_inc(v_a_3710_);
lean_dec_ref_known(v___x_3709_, 1);
v___x_3711_ = lean_box(0);
v___x_3712_ = l_Lean_Meta_synthInstance(v_a_3710_, v___x_3711_, v_a_3690_, v_a_3691_, v_a_3692_, v_a_3693_);
if (lean_obj_tag(v___x_3712_) == 0)
{
lean_object* v___x_3714_; uint8_t v_isShared_3715_; uint8_t v_isSharedCheck_3721_; 
v_isSharedCheck_3721_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3721_ == 0)
{
lean_object* v_unused_3722_; 
v_unused_3722_ = lean_ctor_get(v___x_3712_, 0);
lean_dec(v_unused_3722_);
v___x_3714_ = v___x_3712_;
v_isShared_3715_ = v_isSharedCheck_3721_;
goto v_resetjp_3713_;
}
else
{
lean_dec(v___x_3712_);
v___x_3714_ = lean_box(0);
v_isShared_3715_ = v_isSharedCheck_3721_;
goto v_resetjp_3713_;
}
v_resetjp_3713_:
{
uint8_t v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3719_; 
v___x_3716_ = 1;
v___x_3717_ = lean_box(v___x_3716_);
if (v_isShared_3715_ == 0)
{
lean_ctor_set(v___x_3714_, 0, v___x_3717_);
v___x_3719_ = v___x_3714_;
goto v_reusejp_3718_;
}
else
{
lean_object* v_reuseFailAlloc_3720_; 
v_reuseFailAlloc_3720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3720_, 0, v___x_3717_);
v___x_3719_ = v_reuseFailAlloc_3720_;
goto v_reusejp_3718_;
}
v_reusejp_3718_:
{
return v___x_3719_;
}
}
}
else
{
lean_object* v_a_3723_; 
v_a_3723_ = lean_ctor_get(v___x_3712_, 0);
lean_inc(v_a_3723_);
lean_dec_ref_known(v___x_3712_, 1);
v_a_3696_ = v_a_3723_;
goto v___jp_3695_;
}
}
else
{
lean_object* v_a_3724_; 
v_a_3724_ = lean_ctor_get(v___x_3709_, 0);
lean_inc(v_a_3724_);
lean_dec_ref_known(v___x_3709_, 1);
v_a_3696_ = v_a_3724_;
goto v___jp_3695_;
}
}
else
{
lean_object* v_a_3725_; 
v_a_3725_ = lean_ctor_get(v___x_3703_, 0);
lean_inc(v_a_3725_);
lean_dec_ref_known(v___x_3703_, 1);
v_a_3696_ = v_a_3725_;
goto v___jp_3695_;
}
v___jp_3695_:
{
uint8_t v___x_3697_; 
v___x_3697_ = l_Lean_Exception_isInterrupt(v_a_3696_);
if (v___x_3697_ == 0)
{
uint8_t v___x_3698_; 
lean_inc_ref(v_a_3696_);
v___x_3698_ = l_Lean_Exception_isRuntime(v_a_3696_);
if (v___x_3698_ == 0)
{
lean_object* v___x_3699_; lean_object* v___x_3700_; 
lean_dec_ref(v_a_3696_);
v___x_3699_ = lean_box(v___x_3698_);
v___x_3700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3700_, 0, v___x_3699_);
return v___x_3700_;
}
else
{
lean_object* v___x_3701_; 
v___x_3701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3701_, 0, v_a_3696_);
return v___x_3701_;
}
}
else
{
lean_object* v___x_3702_; 
v___x_3702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3702_, 0, v_a_3696_);
return v___x_3702_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isSubsingleton___boxed(lean_object* v_g_3726_, lean_object* v_a_3727_, lean_object* v_a_3728_, lean_object* v_a_3729_, lean_object* v_a_3730_, lean_object* v_a_3731_){
_start:
{
lean_object* v_res_3732_; 
v_res_3732_ = l_Lean_MVarId_isSubsingleton(v_g_3726_, v_a_3727_, v_a_3728_, v_a_3729_, v_a_3730_);
lean_dec(v_a_3730_);
lean_dec_ref(v_a_3729_);
lean_dec(v_a_3728_);
lean_dec_ref(v_a_3727_);
return v_res_3732_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; 
v___x_3750_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_));
v___x_3751_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_));
v___x_3752_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_));
v___x_3753_ = l_Lean_Option_register___at___00__private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4__spec__0(v___x_3750_, v___x_3751_, v___x_3752_);
return v___x_3753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4____boxed(lean_object* v_a_3754_){
_start:
{
lean_object* v_res_3755_; 
v_res_3755_ = l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_();
return v_res_3755_;
}
}
lean_object* runtime_initialize_Lean_Util_ForEachExprWhere(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_PPGoal(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Util_ForEachExprWhere(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_PPGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_2566314605____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_debug_terminalTacticsAsSorry = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_debug_terminalTacticsAsSorry);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_1901113268____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Util_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Util_3824588779____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_tactic_skipAssignedInstances = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_tactic_skipAssignedInstances);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_ForEachExprWhere(uint8_t builtin);
lean_object* initialize_Lean_Meta_PPGoal(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_ForEachExprWhere(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_PPGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Util(builtin);
}
#ifdef __cplusplus
}
#endif
