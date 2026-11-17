// Lean compiler output
// Module: Lean.Elab.Tactic.Grind.Norm
// Imports: import Lean.Elab.Tactic.Grind.Config import Lean.Meta.Tactic.Grind.Main import Lean.Meta.Tactic.Grind.NormSym
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
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
extern lean_object* l_Lean_pp_funBinderTypes;
extern lean_object* l_Lean_pp_match;
extern lean_object* l_Lean_pp_explicit;
lean_object* l_Lean_Elab_Tactic_elabGrindConfig___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_normLegacy(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_normSym___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_ppExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
uint16_t lean_uint16_land(uint16_t, uint16_t);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint16_t l_Lean_OptionFlags_ofOptions(lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_Grind_mkDefaultParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_GrindM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_applySimpResultToTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Syntax_getAtomVal(lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_legacy_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_legacy_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_legacy_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_legacy_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_sym_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_sym_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_sym_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_sym_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_check_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_check_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_check_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_check_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__2(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "`grind_norm` discrepancy"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\nlegacy:"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "\nsym:"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__5;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = " (in hidden arguments)"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__0;
static lean_once_cell_t l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__1;
static lean_once_cell_t l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__2;
static lean_once_cell_t l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__3;
static lean_once_cell_t l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__4;
static lean_once_cell_t l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__5;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sym"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__6___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__6___boxed(lean_object**);
static const lean_closure_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___closed__0_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___closed__1_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__2___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___closed__0_value)} };
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*18 + 40, .m_other = 18, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(1000) << 1) | 1)),((lean_object*)(((size_t)(1000) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(100000) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(10000) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(16) << 1) | 1)),((lean_object*)(((size_t)(1000) << 1) | 1)),((lean_object*)(((size_t)(1048576) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 1),LEAN_SCALAR_PTR_LITERAL(0, 0, 1, 0, 1, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 0, 1, 1, 1, 0, 1, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 1, 1, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___boxed(lean_object**);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "grindNorm"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(91, 65, 49, 255, 194, 192, 55, 64)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__6_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__7_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__9_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 58, 227, 168, 195, 28, 19, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__10_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(243, 88, 6, 248, 93, 59, 25, 68)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Norm"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(105, 227, 116, 195, 231, 106, 69, 16)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(172, 192, 202, 154, 36, 176, 62, 6)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__15 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__15_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(173, 12, 184, 181, 218, 208, 171, 246)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__16 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__16_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(59, 178, 245, 218, 212, 66, 68, 138)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__17 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__17_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(58, 180, 2, 251, 15, 183, 219, 39)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__18 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__18_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "evalGrindNorm"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__19 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__19_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__18_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(84, 95, 63, 153, 84, 50, 113, 139)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__20 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__20_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_legacy_elim___redArg(lean_object* v_legacy_22_){
_start:
{
lean_inc(v_legacy_22_);
return v_legacy_22_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_legacy_elim___redArg___boxed(lean_object* v_legacy_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_legacy_elim___redArg(v_legacy_23_);
lean_dec(v_legacy_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_legacy_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_legacy_28_){
_start:
{
lean_inc(v_legacy_28_);
return v_legacy_28_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_legacy_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_legacy_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_legacy_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_legacy_32_);
lean_dec(v_legacy_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_sym_elim___redArg(lean_object* v_sym_35_){
_start:
{
lean_inc(v_sym_35_);
return v_sym_35_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_sym_elim___redArg___boxed(lean_object* v_sym_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_sym_elim___redArg(v_sym_36_);
lean_dec(v_sym_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_sym_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_sym_41_){
_start:
{
lean_inc(v_sym_41_);
return v_sym_41_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_sym_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_sym_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_sym_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_sym_45_);
lean_dec(v_sym_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_check_elim___redArg(lean_object* v_check_48_){
_start:
{
lean_inc(v_check_48_);
return v_check_48_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_check_elim___redArg___boxed(lean_object* v_check_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_check_elim___redArg(v_check_49_);
lean_dec(v_check_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_check_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_check_54_){
_start:
{
lean_inc(v_check_54_);
return v_check_54_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_check_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_check_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_NormMode_check_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_check_58_);
lean_dec(v_check_58_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__1___redArg(lean_object* v_e_61_, lean_object* v___y_62_){
_start:
{
uint8_t v___x_64_; 
v___x_64_ = l_Lean_Expr_hasMVar(v_e_61_);
if (v___x_64_ == 0)
{
lean_object* v___x_65_; 
v___x_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_65_, 0, v_e_61_);
return v___x_65_;
}
else
{
lean_object* v___x_66_; lean_object* v_mctx_67_; lean_object* v___x_68_; lean_object* v_fst_69_; lean_object* v_snd_70_; lean_object* v___x_71_; lean_object* v_cache_72_; lean_object* v_zetaDeltaFVarIds_73_; lean_object* v_postponed_74_; lean_object* v_diag_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_84_; 
v___x_66_ = lean_st_ref_get(v___y_62_);
v_mctx_67_ = lean_ctor_get(v___x_66_, 0);
lean_inc_ref(v_mctx_67_);
lean_dec(v___x_66_);
v___x_68_ = l_Lean_instantiateMVarsCore(v_mctx_67_, v_e_61_);
v_fst_69_ = lean_ctor_get(v___x_68_, 0);
lean_inc(v_fst_69_);
v_snd_70_ = lean_ctor_get(v___x_68_, 1);
lean_inc(v_snd_70_);
lean_dec_ref(v___x_68_);
v___x_71_ = lean_st_ref_take(v___y_62_);
v_cache_72_ = lean_ctor_get(v___x_71_, 1);
v_zetaDeltaFVarIds_73_ = lean_ctor_get(v___x_71_, 2);
v_postponed_74_ = lean_ctor_get(v___x_71_, 3);
v_diag_75_ = lean_ctor_get(v___x_71_, 4);
v_isSharedCheck_84_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_84_ == 0)
{
lean_object* v_unused_85_; 
v_unused_85_ = lean_ctor_get(v___x_71_, 0);
lean_dec(v_unused_85_);
v___x_77_ = v___x_71_;
v_isShared_78_ = v_isSharedCheck_84_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_diag_75_);
lean_inc(v_postponed_74_);
lean_inc(v_zetaDeltaFVarIds_73_);
lean_inc(v_cache_72_);
lean_dec(v___x_71_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_84_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v___x_80_; 
if (v_isShared_78_ == 0)
{
lean_ctor_set(v___x_77_, 0, v_snd_70_);
v___x_80_ = v___x_77_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v_snd_70_);
lean_ctor_set(v_reuseFailAlloc_83_, 1, v_cache_72_);
lean_ctor_set(v_reuseFailAlloc_83_, 2, v_zetaDeltaFVarIds_73_);
lean_ctor_set(v_reuseFailAlloc_83_, 3, v_postponed_74_);
lean_ctor_set(v_reuseFailAlloc_83_, 4, v_diag_75_);
v___x_80_ = v_reuseFailAlloc_83_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_81_ = lean_st_ref_put(v___y_62_, v___x_80_);
v___x_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_82_, 0, v_fst_69_);
return v___x_82_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__1___redArg___boxed(lean_object* v_e_86_, lean_object* v___y_87_, lean_object* v___y_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__1___redArg(v_e_86_, v___y_87_);
lean_dec(v___y_87_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__1(lean_object* v_e_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__1___redArg(v_e_90_, v___y_96_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__1___boxed(lean_object* v_e_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_){
_start:
{
lean_object* v_res_111_; 
v_res_111_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__1(v_e_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_);
lean_dec(v___y_109_);
lean_dec_ref(v___y_108_);
lean_dec(v___y_107_);
lean_dec_ref(v___y_106_);
lean_dec(v___y_105_);
lean_dec_ref(v___y_104_);
lean_dec(v___y_103_);
lean_dec_ref(v___y_102_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__3(lean_object* v_opts_112_, lean_object* v_opt_113_){
_start:
{
lean_object* v_name_114_; lean_object* v_defValue_115_; lean_object* v_map_116_; lean_object* v___x_117_; 
v_name_114_ = lean_ctor_get(v_opt_113_, 0);
v_defValue_115_ = lean_ctor_get(v_opt_113_, 1);
v_map_116_ = lean_ctor_get(v_opts_112_, 0);
v___x_117_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_116_, v_name_114_);
if (lean_obj_tag(v___x_117_) == 0)
{
lean_inc(v_defValue_115_);
return v_defValue_115_;
}
else
{
lean_object* v_val_118_; 
v_val_118_ = lean_ctor_get(v___x_117_, 0);
lean_inc(v_val_118_);
lean_dec_ref_known(v___x_117_, 1);
if (lean_obj_tag(v_val_118_) == 3)
{
lean_object* v_v_119_; 
v_v_119_ = lean_ctor_get(v_val_118_, 0);
lean_inc(v_v_119_);
lean_dec_ref_known(v_val_118_, 1);
return v_v_119_;
}
else
{
lean_dec(v_val_118_);
lean_inc(v_defValue_115_);
return v_defValue_115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__3___boxed(lean_object* v_opts_120_, lean_object* v_opt_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__3(v_opts_120_, v_opt_121_);
lean_dec_ref(v_opt_121_);
lean_dec_ref(v_opts_120_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0_spec__0(lean_object* v_o_126_, lean_object* v_k_127_, uint8_t v_v_128_){
_start:
{
lean_object* v_map_129_; uint8_t v_hasTrace_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_144_; 
v_map_129_ = lean_ctor_get(v_o_126_, 0);
v_hasTrace_130_ = lean_ctor_get_uint8(v_o_126_, sizeof(void*)*1);
v_isSharedCheck_144_ = !lean_is_exclusive(v_o_126_);
if (v_isSharedCheck_144_ == 0)
{
v___x_132_ = v_o_126_;
v_isShared_133_ = v_isSharedCheck_144_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_map_129_);
lean_dec(v_o_126_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_144_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_134_, 0, v_v_128_);
lean_inc(v_k_127_);
v___x_135_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_127_, v___x_134_, v_map_129_);
if (v_hasTrace_130_ == 0)
{
lean_object* v___x_136_; uint8_t v___x_137_; lean_object* v___x_139_; 
v___x_136_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0_spec__0___closed__1));
v___x_137_ = l_Lean_Name_isPrefixOf(v___x_136_, v_k_127_);
lean_dec(v_k_127_);
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 0, v___x_135_);
v___x_139_ = v___x_132_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_135_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
lean_ctor_set_uint8(v___x_139_, sizeof(void*)*1, v___x_137_);
return v___x_139_;
}
}
else
{
lean_object* v___x_142_; 
lean_dec(v_k_127_);
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 0, v___x_135_);
v___x_142_ = v___x_132_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v___x_135_);
lean_ctor_set_uint8(v_reuseFailAlloc_143_, sizeof(void*)*1, v_hasTrace_130_);
v___x_142_ = v_reuseFailAlloc_143_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
return v___x_142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0_spec__0___boxed(lean_object* v_o_145_, lean_object* v_k_146_, lean_object* v_v_147_){
_start:
{
uint8_t v_v_boxed_148_; lean_object* v_res_149_; 
v_v_boxed_148_ = lean_unbox(v_v_147_);
v_res_149_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0_spec__0(v_o_145_, v_k_146_, v_v_boxed_148_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0(lean_object* v_opts_150_, lean_object* v_opt_151_, uint8_t v_val_152_){
_start:
{
lean_object* v_name_153_; lean_object* v___x_154_; 
v_name_153_ = lean_ctor_get(v_opt_151_, 0);
lean_inc(v_name_153_);
lean_dec_ref(v_opt_151_);
v___x_154_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0_spec__0(v_opts_150_, v_name_153_, v_val_152_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0___boxed(lean_object* v_opts_155_, lean_object* v_opt_156_, lean_object* v_val_157_){
_start:
{
uint8_t v_val_boxed_158_; lean_object* v_res_159_; 
v_val_boxed_158_ = lean_unbox(v_val_157_);
v_res_159_ = l_Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0(v_opts_155_, v_opt_156_, v_val_boxed_158_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__0(uint8_t v___x_160_, uint8_t v___x_161_, lean_object* v_o_162_){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_163_ = l_Lean_pp_funBinderTypes;
v___x_164_ = l_Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0(v_o_162_, v___x_163_, v___x_160_);
v___x_165_ = l_Lean_pp_match;
v___x_166_ = l_Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0(v___x_164_, v___x_165_, v___x_161_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__0___boxed(lean_object* v___x_167_, lean_object* v___x_168_, lean_object* v_o_169_){
_start:
{
uint8_t v___x_51708__boxed_170_; uint8_t v___x_51709__boxed_171_; lean_object* v_res_172_; 
v___x_51708__boxed_170_ = lean_unbox(v___x_167_);
v___x_51709__boxed_171_ = lean_unbox(v___x_168_);
v_res_172_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__0(v___x_51708__boxed_170_, v___x_51709__boxed_171_, v_o_169_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__1(uint8_t v___x_173_, lean_object* v_x_174_){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = l_Lean_pp_explicit;
v___x_176_ = l_Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0(v_x_174_, v___x_175_, v___x_173_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__1___boxed(lean_object* v___x_177_, lean_object* v_x_178_){
_start:
{
uint8_t v___x_51722__boxed_179_; lean_object* v_res_180_; 
v___x_51722__boxed_179_ = lean_unbox(v___x_177_);
v_res_180_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__1(v___x_51722__boxed_179_, v_x_178_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__2(uint8_t v___x_181_, lean_object* v___f_182_, lean_object* v_o_183_){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_184_ = l_Lean_pp_explicit;
v___x_185_ = l_Lean_Option_set___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__0(v_o_183_, v___x_184_, v___x_181_);
v___x_186_ = lean_apply_1(v___f_182_, v___x_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__2___boxed(lean_object* v___x_187_, lean_object* v___f_188_, lean_object* v_o_189_){
_start:
{
uint8_t v___x_51732__boxed_190_; lean_object* v_res_191_; 
v___x_51732__boxed_190_ = lean_unbox(v___x_187_);
v_res_191_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__2(v___x_51732__boxed_190_, v___f_188_, v_o_189_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2_spec__3(lean_object* v_msgData_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_){
_start:
{
lean_object* v___x_198_; lean_object* v_env_199_; uint8_t v___x_200_; lean_object* v_env_201_; lean_object* v___x_202_; lean_object* v_toCold_203_; lean_object* v_mctx_204_; lean_object* v_lctx_205_; lean_object* v_options_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_198_ = lean_st_ref_get(v___y_196_);
v_env_199_ = lean_ctor_get(v___x_198_, 0);
lean_inc_ref(v_env_199_);
lean_dec(v___x_198_);
v___x_200_ = 0;
v_env_201_ = l_Lean_Environment_setRecordingDeps(v_env_199_, v___x_200_);
v___x_202_ = lean_st_ref_get(v___y_194_);
v_toCold_203_ = lean_ctor_get(v___y_195_, 0);
v_mctx_204_ = lean_ctor_get(v___x_202_, 0);
lean_inc_ref(v_mctx_204_);
lean_dec(v___x_202_);
v_lctx_205_ = lean_ctor_get(v___y_193_, 2);
v_options_206_ = lean_ctor_get(v_toCold_203_, 2);
lean_inc_ref(v_options_206_);
lean_inc_ref(v_lctx_205_);
v___x_207_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_207_, 0, v_env_201_);
lean_ctor_set(v___x_207_, 1, v_mctx_204_);
lean_ctor_set(v___x_207_, 2, v_lctx_205_);
lean_ctor_set(v___x_207_, 3, v_options_206_);
v___x_208_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
lean_ctor_set(v___x_208_, 1, v_msgData_192_);
v___x_209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2_spec__3___boxed(lean_object* v_msgData_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2_spec__3(v_msgData_210_, v___y_211_, v___y_212_, v___y_213_, v___y_214_);
lean_dec(v___y_214_);
lean_dec_ref(v___y_213_);
lean_dec(v___y_212_);
lean_dec_ref(v___y_211_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2___redArg(lean_object* v_msg_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_){
_start:
{
lean_object* v_ref_223_; lean_object* v___x_224_; lean_object* v_a_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_233_; 
v_ref_223_ = lean_ctor_get(v___y_220_, 2);
v___x_224_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2_spec__3(v_msg_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_);
v_a_225_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_233_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_233_ == 0)
{
v___x_227_ = v___x_224_;
v_isShared_228_ = v_isSharedCheck_233_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_a_225_);
lean_dec(v___x_224_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_233_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___x_229_; lean_object* v___x_231_; 
lean_inc(v_ref_223_);
v___x_229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_229_, 0, v_ref_223_);
lean_ctor_set(v___x_229_, 1, v_a_225_);
if (v_isShared_228_ == 0)
{
lean_ctor_set_tag(v___x_227_, 1);
lean_ctor_set(v___x_227_, 0, v___x_229_);
v___x_231_ = v___x_227_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v___x_229_);
v___x_231_ = v_reuseFailAlloc_232_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
return v___x_231_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2___redArg___boxed(lean_object* v_msg_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2___redArg(v_msg_234_, v___y_235_, v___y_236_, v___y_237_, v___y_238_);
lean_dec(v___y_238_);
lean_dec_ref(v___y_237_);
lean_dec(v___y_236_);
lean_dec_ref(v___y_235_);
return v_res_240_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__1(void){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__0));
v___x_243_ = l_Lean_stringToMessageData(v___x_242_);
return v___x_243_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__3(void){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__2));
v___x_246_ = l_Lean_stringToMessageData(v___x_245_);
return v___x_246_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__5(void){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_248_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__4));
v___x_249_ = l_Lean_stringToMessageData(v___x_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3(lean_object* v_a_252_, lean_object* v_a_253_, uint8_t v_hidden_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_){
_start:
{
lean_object* v___y_261_; 
if (v_hidden_254_ == 0)
{
lean_object* v___x_274_; 
v___x_274_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__6));
v___y_261_ = v___x_274_;
goto v___jp_260_;
}
else
{
lean_object* v___x_275_; 
v___x_275_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__7));
v___y_261_ = v___x_275_;
goto v___jp_260_;
}
v___jp_260_:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_262_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__1, &l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__1);
lean_inc_ref(v___y_261_);
v___x_263_ = l_Lean_stringToMessageData(v___y_261_);
v___x_264_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_262_);
lean_ctor_set(v___x_264_, 1, v___x_263_);
v___x_265_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__3, &l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__3);
v___x_266_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_266_, 0, v___x_264_);
lean_ctor_set(v___x_266_, 1, v___x_265_);
v___x_267_ = l_Lean_indentExpr(v_a_252_);
v___x_268_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_266_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
v___x_269_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__5, &l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__5);
v___x_270_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_268_);
lean_ctor_set(v___x_270_, 1, v___x_269_);
v___x_271_ = l_Lean_indentExpr(v_a_253_);
v___x_272_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_270_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___x_273_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2___redArg(v___x_272_, v___y_255_, v___y_256_, v___y_257_, v___y_258_);
return v___x_273_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___boxed(lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_hidden_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_){
_start:
{
uint8_t v_hidden_boxed_284_; lean_object* v_res_285_; 
v_hidden_boxed_284_ = lean_unbox(v_hidden_278_);
v_res_285_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3(v_a_276_, v_a_277_, v_hidden_boxed_284_, v___y_279_, v___y_280_, v___y_281_, v___y_282_);
lean_dec(v___y_282_);
lean_dec_ref(v___y_281_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
return v_res_285_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_286_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__7));
v___x_287_ = l_Lean_stringToMessageData(v___x_286_);
return v___x_287_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_288_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__0, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__0);
v___x_289_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__1, &l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__1);
v___x_290_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set(v___x_290_, 1, v___x_288_);
return v___x_290_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_291_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__3, &l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__3);
v___x_292_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__1, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__1);
v___x_293_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
lean_ctor_set(v___x_293_, 1, v___x_291_);
return v___x_293_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_294_; 
v___x_294_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_294_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__4(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__3, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__3_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__3);
v___x_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
return v___x_296_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__4, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__4);
v___x_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
lean_ctor_set(v___x_298_, 1, v___x_297_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg(lean_object* v_a_299_, lean_object* v_a_300_, size_t v___x_301_, size_t v___x_302_, lean_object* v_as_x27_303_, lean_object* v_b_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
if (lean_obj_tag(v_as_x27_303_) == 0)
{
lean_object* v___x_310_; 
lean_dec_ref(v_a_300_);
lean_dec_ref(v_a_299_);
v___x_310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_310_, 0, v_b_304_);
return v___x_310_;
}
else
{
lean_object* v_toCold_311_; lean_object* v_head_312_; lean_object* v_tail_313_; lean_object* v_currRecDepth_314_; lean_object* v_ref_315_; uint8_t v_suppressElabErrors_316_; uint8_t v_checkDeprecated_317_; uint8_t v_isRecordingDeps_318_; lean_object* v_fileName_319_; lean_object* v_fileMap_320_; lean_object* v_options_321_; lean_object* v_currNamespace_322_; lean_object* v_openDecls_323_; lean_object* v_initHeartbeats_324_; lean_object* v_maxHeartbeats_325_; lean_object* v_quotContext_326_; lean_object* v_currMacroScope_327_; lean_object* v_cancelTk_x3f_328_; lean_object* v_inheritedTraceOptions_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___y_333_; uint16_t v___y_334_; lean_object* v_fileName_335_; lean_object* v_fileMap_336_; lean_object* v_currNamespace_337_; lean_object* v_openDecls_338_; lean_object* v_initHeartbeats_339_; lean_object* v_maxHeartbeats_340_; lean_object* v_quotContext_341_; lean_object* v_currMacroScope_342_; lean_object* v_cancelTk_x3f_343_; lean_object* v_inheritedTraceOptions_344_; lean_object* v_currRecDepth_345_; lean_object* v_ref_346_; uint8_t v_suppressElabErrors_347_; uint8_t v_checkDeprecated_348_; uint8_t v_isRecordingDeps_349_; lean_object* v___y_350_; lean_object* v_nextMacroScope_389_; lean_object* v_ngen_390_; lean_object* v_auxDeclNGen_391_; lean_object* v_traceState_392_; lean_object* v_recordedDeps_393_; lean_object* v_messages_394_; lean_object* v_infoState_395_; lean_object* v_snapshotTasks_396_; lean_object* v___y_397_; uint16_t v___y_398_; lean_object* v___y_399_; lean_object* v___y_404_; uint16_t v___y_405_; uint8_t v___y_406_; uint8_t v___x_424_; lean_object* v___y_426_; 
v_toCold_311_ = lean_ctor_get(v___y_307_, 0);
v_head_312_ = lean_ctor_get(v_as_x27_303_, 0);
v_tail_313_ = lean_ctor_get(v_as_x27_303_, 1);
v_currRecDepth_314_ = lean_ctor_get(v___y_307_, 1);
v_ref_315_ = lean_ctor_get(v___y_307_, 2);
v_suppressElabErrors_316_ = lean_ctor_get_uint8(v___y_307_, sizeof(void*)*3 + 2);
v_checkDeprecated_317_ = lean_ctor_get_uint8(v___y_307_, sizeof(void*)*3 + 3);
v_isRecordingDeps_318_ = lean_ctor_get_uint8(v___y_307_, sizeof(void*)*3 + 4);
v_fileName_319_ = lean_ctor_get(v_toCold_311_, 0);
v_fileMap_320_ = lean_ctor_get(v_toCold_311_, 1);
v_options_321_ = lean_ctor_get(v_toCold_311_, 2);
v_currNamespace_322_ = lean_ctor_get(v_toCold_311_, 4);
v_openDecls_323_ = lean_ctor_get(v_toCold_311_, 5);
v_initHeartbeats_324_ = lean_ctor_get(v_toCold_311_, 6);
v_maxHeartbeats_325_ = lean_ctor_get(v_toCold_311_, 7);
v_quotContext_326_ = lean_ctor_get(v_toCold_311_, 8);
v_currMacroScope_327_ = lean_ctor_get(v_toCold_311_, 9);
v_cancelTk_x3f_328_ = lean_ctor_get(v_toCold_311_, 10);
v_inheritedTraceOptions_329_ = lean_ctor_get(v_toCold_311_, 11);
v___x_330_ = lean_box(0);
v___x_331_ = lean_unsigned_to_nat(0u);
v___x_424_ = lean_usize_dec_eq(v___x_301_, v___x_302_);
if (v_isRecordingDeps_318_ == 0)
{
lean_object* v___x_435_; 
lean_inc(v_head_312_);
lean_inc_ref(v_options_321_);
v___x_435_ = lean_apply_1(v_head_312_, v_options_321_);
v___y_426_ = v___x_435_;
goto v___jp_425_;
}
else
{
lean_object* v___x_436_; 
lean_inc_ref(v_options_321_);
v___x_436_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_321_);
v___y_426_ = v___x_436_;
goto v___jp_425_;
}
v___jp_332_:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_351_ = l_Lean_maxRecDepth;
v___x_352_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__3(v___y_333_, v___x_351_);
v___x_353_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_353_, 0, v_fileName_335_);
lean_ctor_set(v___x_353_, 1, v_fileMap_336_);
lean_ctor_set(v___x_353_, 2, v___y_333_);
lean_ctor_set(v___x_353_, 3, v___x_352_);
lean_ctor_set(v___x_353_, 4, v_currNamespace_337_);
lean_ctor_set(v___x_353_, 5, v_openDecls_338_);
lean_ctor_set(v___x_353_, 6, v_initHeartbeats_339_);
lean_ctor_set(v___x_353_, 7, v_maxHeartbeats_340_);
lean_ctor_set(v___x_353_, 8, v_quotContext_341_);
lean_ctor_set(v___x_353_, 9, v_currMacroScope_342_);
lean_ctor_set(v___x_353_, 10, v_cancelTk_x3f_343_);
lean_ctor_set(v___x_353_, 11, v_inheritedTraceOptions_344_);
lean_inc(v_ref_346_);
lean_inc(v_currRecDepth_345_);
v___x_354_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_354_, 0, v___x_353_);
lean_ctor_set(v___x_354_, 1, v_currRecDepth_345_);
lean_ctor_set(v___x_354_, 2, v_ref_346_);
lean_ctor_set_uint16(v___x_354_, sizeof(void*)*3, v___y_334_);
lean_ctor_set_uint8(v___x_354_, sizeof(void*)*3 + 2, v_suppressElabErrors_347_);
lean_ctor_set_uint8(v___x_354_, sizeof(void*)*3 + 3, v_checkDeprecated_348_);
lean_ctor_set_uint8(v___x_354_, sizeof(void*)*3 + 4, v_isRecordingDeps_349_);
lean_inc_ref(v_a_299_);
v___x_355_ = l_Lean_Meta_ppExpr(v_a_299_, v___y_305_, v___y_306_, v___x_354_, v___y_350_);
if (lean_obj_tag(v___x_355_) == 0)
{
lean_object* v_a_356_; lean_object* v___x_357_; 
v_a_356_ = lean_ctor_get(v___x_355_, 0);
lean_inc(v_a_356_);
lean_dec_ref_known(v___x_355_, 1);
lean_inc_ref(v_a_300_);
v___x_357_ = l_Lean_Meta_ppExpr(v_a_300_, v___y_305_, v___y_306_, v___x_354_, v___y_350_);
if (lean_obj_tag(v___x_357_) == 0)
{
lean_object* v_a_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; uint8_t v___x_362_; 
v_a_358_ = lean_ctor_get(v___x_357_, 0);
lean_inc(v_a_358_);
lean_dec_ref_known(v___x_357_, 1);
v___x_359_ = l_Std_Format_defWidth;
v___x_360_ = l_Std_Format_pretty(v_a_356_, v___x_359_, v___x_331_, v___x_331_);
v___x_361_ = l_Std_Format_pretty(v_a_358_, v___x_359_, v___x_331_, v___x_331_);
v___x_362_ = lean_string_dec_eq(v___x_360_, v___x_361_);
lean_dec_ref(v___x_361_);
lean_dec_ref(v___x_360_);
if (v___x_362_ == 0)
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_363_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__2, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__2);
v___x_364_ = l_Lean_indentExpr(v_a_299_);
v___x_365_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_363_);
lean_ctor_set(v___x_365_, 1, v___x_364_);
v___x_366_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__5, &l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__5);
v___x_367_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_367_, 0, v___x_365_);
lean_ctor_set(v___x_367_, 1, v___x_366_);
v___x_368_ = l_Lean_indentExpr(v_a_300_);
v___x_369_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_369_, 0, v___x_367_);
lean_ctor_set(v___x_369_, 1, v___x_368_);
v___x_370_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2___redArg(v___x_369_, v___y_305_, v___y_306_, v___x_354_, v___y_350_);
lean_dec_ref_known(v___x_354_, 3);
return v___x_370_;
}
else
{
lean_dec_ref_known(v___x_354_, 3);
v_as_x27_303_ = v_tail_313_;
v_b_304_ = v___x_330_;
goto _start;
}
}
else
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_379_; 
lean_dec(v_a_356_);
lean_dec_ref_known(v___x_354_, 3);
lean_dec_ref(v_a_300_);
lean_dec_ref(v_a_299_);
v_a_372_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_379_ == 0)
{
v___x_374_ = v___x_357_;
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_357_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_377_; 
if (v_isShared_375_ == 0)
{
v___x_377_ = v___x_374_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_a_372_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
}
else
{
lean_object* v_a_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_387_; 
lean_dec_ref_known(v___x_354_, 3);
lean_dec_ref(v_a_300_);
lean_dec_ref(v_a_299_);
v_a_380_ = lean_ctor_get(v___x_355_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v___x_355_);
if (v_isSharedCheck_387_ == 0)
{
v___x_382_ = v___x_355_;
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_a_380_);
lean_dec(v___x_355_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___x_385_; 
if (v_isShared_383_ == 0)
{
v___x_385_ = v___x_382_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_a_380_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
}
}
v___jp_388_:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_400_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__5, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__5_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__5);
v___x_401_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_401_, 0, v___y_399_);
lean_ctor_set(v___x_401_, 1, v_nextMacroScope_389_);
lean_ctor_set(v___x_401_, 2, v_ngen_390_);
lean_ctor_set(v___x_401_, 3, v_auxDeclNGen_391_);
lean_ctor_set(v___x_401_, 4, v_traceState_392_);
lean_ctor_set(v___x_401_, 5, v___x_400_);
lean_ctor_set(v___x_401_, 6, v_recordedDeps_393_);
lean_ctor_set(v___x_401_, 7, v_messages_394_);
lean_ctor_set(v___x_401_, 8, v_infoState_395_);
lean_ctor_set(v___x_401_, 9, v_snapshotTasks_396_);
v___x_402_ = lean_st_ref_put(v___y_308_, v___x_401_);
lean_inc_ref(v_inheritedTraceOptions_329_);
lean_inc(v_cancelTk_x3f_328_);
lean_inc(v_currMacroScope_327_);
lean_inc(v_quotContext_326_);
lean_inc(v_maxHeartbeats_325_);
lean_inc(v_initHeartbeats_324_);
lean_inc(v_openDecls_323_);
lean_inc(v_currNamespace_322_);
lean_inc_ref(v_fileMap_320_);
lean_inc_ref(v_fileName_319_);
v___y_333_ = v___y_397_;
v___y_334_ = v___y_398_;
v_fileName_335_ = v_fileName_319_;
v_fileMap_336_ = v_fileMap_320_;
v_currNamespace_337_ = v_currNamespace_322_;
v_openDecls_338_ = v_openDecls_323_;
v_initHeartbeats_339_ = v_initHeartbeats_324_;
v_maxHeartbeats_340_ = v_maxHeartbeats_325_;
v_quotContext_341_ = v_quotContext_326_;
v_currMacroScope_342_ = v_currMacroScope_327_;
v_cancelTk_x3f_343_ = v_cancelTk_x3f_328_;
v_inheritedTraceOptions_344_ = v_inheritedTraceOptions_329_;
v_currRecDepth_345_ = v_currRecDepth_314_;
v_ref_346_ = v_ref_315_;
v_suppressElabErrors_347_ = v_suppressElabErrors_316_;
v_checkDeprecated_348_ = v_checkDeprecated_317_;
v_isRecordingDeps_349_ = v_isRecordingDeps_318_;
v___y_350_ = v___y_308_;
goto v___jp_332_;
}
v___jp_403_:
{
if (v___y_406_ == 0)
{
uint8_t v___x_407_; lean_object* v___x_408_; lean_object* v_env_409_; lean_object* v_nextMacroScope_410_; lean_object* v_ngen_411_; lean_object* v_auxDeclNGen_412_; lean_object* v_traceState_413_; lean_object* v_recordedDeps_414_; lean_object* v_messages_415_; lean_object* v_infoState_416_; lean_object* v_snapshotTasks_417_; uint16_t v___x_418_; uint16_t v___x_419_; uint16_t v___x_420_; uint8_t v___x_421_; 
v___x_407_ = 1;
v___x_408_ = lean_st_ref_take(v___y_308_);
v_env_409_ = lean_ctor_get(v___x_408_, 0);
lean_inc_ref(v_env_409_);
v_nextMacroScope_410_ = lean_ctor_get(v___x_408_, 1);
lean_inc(v_nextMacroScope_410_);
v_ngen_411_ = lean_ctor_get(v___x_408_, 2);
lean_inc_ref(v_ngen_411_);
v_auxDeclNGen_412_ = lean_ctor_get(v___x_408_, 3);
lean_inc_ref(v_auxDeclNGen_412_);
v_traceState_413_ = lean_ctor_get(v___x_408_, 4);
lean_inc_ref(v_traceState_413_);
v_recordedDeps_414_ = lean_ctor_get(v___x_408_, 6);
lean_inc_ref(v_recordedDeps_414_);
v_messages_415_ = lean_ctor_get(v___x_408_, 7);
lean_inc_ref(v_messages_415_);
v_infoState_416_ = lean_ctor_get(v___x_408_, 8);
lean_inc_ref(v_infoState_416_);
v_snapshotTasks_417_ = lean_ctor_get(v___x_408_, 9);
lean_inc_ref(v_snapshotTasks_417_);
lean_dec(v___x_408_);
v___x_418_ = 512;
v___x_419_ = lean_uint16_land(v___y_405_, v___x_418_);
v___x_420_ = 0;
v___x_421_ = lean_uint16_dec_eq(v___x_419_, v___x_420_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; 
v___x_422_ = l_Lean_Kernel_enableDiag(v_env_409_, v___x_407_);
v_nextMacroScope_389_ = v_nextMacroScope_410_;
v_ngen_390_ = v_ngen_411_;
v_auxDeclNGen_391_ = v_auxDeclNGen_412_;
v_traceState_392_ = v_traceState_413_;
v_recordedDeps_393_ = v_recordedDeps_414_;
v_messages_394_ = v_messages_415_;
v_infoState_395_ = v_infoState_416_;
v_snapshotTasks_396_ = v_snapshotTasks_417_;
v___y_397_ = v___y_404_;
v___y_398_ = v___y_405_;
v___y_399_ = v___x_422_;
goto v___jp_388_;
}
else
{
lean_object* v___x_423_; 
v___x_423_ = l_Lean_Kernel_enableDiag(v_env_409_, v___y_406_);
v_nextMacroScope_389_ = v_nextMacroScope_410_;
v_ngen_390_ = v_ngen_411_;
v_auxDeclNGen_391_ = v_auxDeclNGen_412_;
v_traceState_392_ = v_traceState_413_;
v_recordedDeps_393_ = v_recordedDeps_414_;
v_messages_394_ = v_messages_415_;
v_infoState_395_ = v_infoState_416_;
v_snapshotTasks_396_ = v_snapshotTasks_417_;
v___y_397_ = v___y_404_;
v___y_398_ = v___y_405_;
v___y_399_ = v___x_423_;
goto v___jp_388_;
}
}
else
{
lean_inc_ref(v_inheritedTraceOptions_329_);
lean_inc(v_cancelTk_x3f_328_);
lean_inc(v_currMacroScope_327_);
lean_inc(v_quotContext_326_);
lean_inc(v_maxHeartbeats_325_);
lean_inc(v_initHeartbeats_324_);
lean_inc(v_openDecls_323_);
lean_inc(v_currNamespace_322_);
lean_inc_ref(v_fileMap_320_);
lean_inc_ref(v_fileName_319_);
v___y_333_ = v___y_404_;
v___y_334_ = v___y_405_;
v_fileName_335_ = v_fileName_319_;
v_fileMap_336_ = v_fileMap_320_;
v_currNamespace_337_ = v_currNamespace_322_;
v_openDecls_338_ = v_openDecls_323_;
v_initHeartbeats_339_ = v_initHeartbeats_324_;
v_maxHeartbeats_340_ = v_maxHeartbeats_325_;
v_quotContext_341_ = v_quotContext_326_;
v_currMacroScope_342_ = v_currMacroScope_327_;
v_cancelTk_x3f_343_ = v_cancelTk_x3f_328_;
v_inheritedTraceOptions_344_ = v_inheritedTraceOptions_329_;
v_currRecDepth_345_ = v_currRecDepth_314_;
v_ref_346_ = v_ref_315_;
v_suppressElabErrors_347_ = v_suppressElabErrors_316_;
v_checkDeprecated_348_ = v_checkDeprecated_317_;
v_isRecordingDeps_349_ = v_isRecordingDeps_318_;
v___y_350_ = v___y_308_;
goto v___jp_332_;
}
}
v___jp_425_:
{
uint16_t v___x_427_; lean_object* v___x_428_; lean_object* v_env_429_; uint8_t v___x_430_; uint16_t v___x_431_; uint16_t v___x_432_; uint16_t v___x_433_; uint8_t v___x_434_; 
v___x_427_ = l_Lean_OptionFlags_ofOptions(v___y_426_);
v___x_428_ = lean_st_ref_get(v___y_308_);
v_env_429_ = lean_ctor_get(v___x_428_, 0);
lean_inc_ref(v_env_429_);
lean_dec(v___x_428_);
v___x_430_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_429_);
lean_dec_ref(v_env_429_);
v___x_431_ = 512;
v___x_432_ = lean_uint16_land(v___x_427_, v___x_431_);
v___x_433_ = 0;
v___x_434_ = lean_uint16_dec_eq(v___x_432_, v___x_433_);
if (v___x_434_ == 0)
{
v___y_404_ = v___y_426_;
v___y_405_ = v___x_427_;
v___y_406_ = v___x_430_;
goto v___jp_403_;
}
else
{
if (v___x_430_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_329_);
lean_inc(v_cancelTk_x3f_328_);
lean_inc(v_currMacroScope_327_);
lean_inc(v_quotContext_326_);
lean_inc(v_maxHeartbeats_325_);
lean_inc(v_initHeartbeats_324_);
lean_inc(v_openDecls_323_);
lean_inc(v_currNamespace_322_);
lean_inc_ref(v_fileMap_320_);
lean_inc_ref(v_fileName_319_);
v___y_333_ = v___y_426_;
v___y_334_ = v___x_427_;
v_fileName_335_ = v_fileName_319_;
v_fileMap_336_ = v_fileMap_320_;
v_currNamespace_337_ = v_currNamespace_322_;
v_openDecls_338_ = v_openDecls_323_;
v_initHeartbeats_339_ = v_initHeartbeats_324_;
v_maxHeartbeats_340_ = v_maxHeartbeats_325_;
v_quotContext_341_ = v_quotContext_326_;
v_currMacroScope_342_ = v_currMacroScope_327_;
v_cancelTk_x3f_343_ = v_cancelTk_x3f_328_;
v_inheritedTraceOptions_344_ = v_inheritedTraceOptions_329_;
v_currRecDepth_345_ = v_currRecDepth_314_;
v_ref_346_ = v_ref_315_;
v_suppressElabErrors_347_ = v_suppressElabErrors_316_;
v_checkDeprecated_348_ = v_checkDeprecated_317_;
v_isRecordingDeps_349_ = v_isRecordingDeps_318_;
v___y_350_ = v___y_308_;
goto v___jp_332_;
}
else
{
v___y_404_ = v___y_426_;
v___y_405_ = v___x_427_;
v___y_406_ = v___x_424_;
goto v___jp_403_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___boxed(lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v___x_439_, lean_object* v___x_440_, lean_object* v_as_x27_441_, lean_object* v_b_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
size_t v___x_51933__boxed_448_; size_t v___x_51934__boxed_449_; lean_object* v_res_450_; 
v___x_51933__boxed_448_ = lean_unbox_usize(v___x_439_);
lean_dec(v___x_439_);
v___x_51934__boxed_449_ = lean_unbox_usize(v___x_440_);
lean_dec(v___x_440_);
v_res_450_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg(v_a_437_, v_a_438_, v___x_51933__boxed_448_, v___x_51934__boxed_449_, v_as_x27_441_, v_b_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
lean_dec(v___y_444_);
lean_dec_ref(v___y_443_);
lean_dec(v_as_x27_441_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4___redArg(lean_object* v_a_451_, lean_object* v_a_452_, size_t v___x_453_, size_t v___x_454_, lean_object* v_as_455_, lean_object* v_as_x27_456_, lean_object* v_b_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_){
_start:
{
if (lean_obj_tag(v_as_x27_456_) == 0)
{
lean_object* v___x_468_; 
lean_dec_ref(v_a_452_);
lean_dec_ref(v_a_451_);
v___x_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_468_, 0, v_b_457_);
return v___x_468_;
}
else
{
lean_object* v_toCold_469_; lean_object* v_head_470_; lean_object* v_tail_471_; lean_object* v_currRecDepth_472_; lean_object* v_ref_473_; uint8_t v_suppressElabErrors_474_; uint8_t v_checkDeprecated_475_; uint8_t v_isRecordingDeps_476_; lean_object* v_fileName_477_; lean_object* v_fileMap_478_; lean_object* v_options_479_; lean_object* v_currNamespace_480_; lean_object* v_openDecls_481_; lean_object* v_initHeartbeats_482_; lean_object* v_maxHeartbeats_483_; lean_object* v_quotContext_484_; lean_object* v_currMacroScope_485_; lean_object* v_cancelTk_x3f_486_; lean_object* v_inheritedTraceOptions_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___y_491_; uint16_t v___y_492_; lean_object* v_fileName_493_; lean_object* v_fileMap_494_; lean_object* v_currNamespace_495_; lean_object* v_openDecls_496_; lean_object* v_initHeartbeats_497_; lean_object* v_maxHeartbeats_498_; lean_object* v_quotContext_499_; lean_object* v_currMacroScope_500_; lean_object* v_cancelTk_x3f_501_; lean_object* v_inheritedTraceOptions_502_; lean_object* v_currRecDepth_503_; lean_object* v_ref_504_; uint8_t v_suppressElabErrors_505_; uint8_t v_checkDeprecated_506_; uint8_t v_isRecordingDeps_507_; lean_object* v___y_508_; lean_object* v___y_547_; lean_object* v_nextMacroScope_548_; lean_object* v_ngen_549_; lean_object* v_auxDeclNGen_550_; lean_object* v_traceState_551_; lean_object* v_recordedDeps_552_; lean_object* v_messages_553_; lean_object* v_infoState_554_; lean_object* v_snapshotTasks_555_; uint16_t v___y_556_; lean_object* v___y_557_; lean_object* v___y_562_; uint16_t v___y_563_; uint8_t v___y_564_; uint8_t v___x_582_; lean_object* v___y_584_; 
v_toCold_469_ = lean_ctor_get(v___y_465_, 0);
v_head_470_ = lean_ctor_get(v_as_x27_456_, 0);
v_tail_471_ = lean_ctor_get(v_as_x27_456_, 1);
v_currRecDepth_472_ = lean_ctor_get(v___y_465_, 1);
v_ref_473_ = lean_ctor_get(v___y_465_, 2);
v_suppressElabErrors_474_ = lean_ctor_get_uint8(v___y_465_, sizeof(void*)*3 + 2);
v_checkDeprecated_475_ = lean_ctor_get_uint8(v___y_465_, sizeof(void*)*3 + 3);
v_isRecordingDeps_476_ = lean_ctor_get_uint8(v___y_465_, sizeof(void*)*3 + 4);
v_fileName_477_ = lean_ctor_get(v_toCold_469_, 0);
v_fileMap_478_ = lean_ctor_get(v_toCold_469_, 1);
v_options_479_ = lean_ctor_get(v_toCold_469_, 2);
v_currNamespace_480_ = lean_ctor_get(v_toCold_469_, 4);
v_openDecls_481_ = lean_ctor_get(v_toCold_469_, 5);
v_initHeartbeats_482_ = lean_ctor_get(v_toCold_469_, 6);
v_maxHeartbeats_483_ = lean_ctor_get(v_toCold_469_, 7);
v_quotContext_484_ = lean_ctor_get(v_toCold_469_, 8);
v_currMacroScope_485_ = lean_ctor_get(v_toCold_469_, 9);
v_cancelTk_x3f_486_ = lean_ctor_get(v_toCold_469_, 10);
v_inheritedTraceOptions_487_ = lean_ctor_get(v_toCold_469_, 11);
v___x_488_ = lean_box(0);
v___x_489_ = lean_unsigned_to_nat(0u);
v___x_582_ = lean_usize_dec_eq(v___x_453_, v___x_454_);
if (v_isRecordingDeps_476_ == 0)
{
lean_object* v___x_593_; 
lean_inc(v_head_470_);
lean_inc_ref(v_options_479_);
v___x_593_ = lean_apply_1(v_head_470_, v_options_479_);
v___y_584_ = v___x_593_;
goto v___jp_583_;
}
else
{
lean_object* v___x_594_; 
lean_inc_ref(v_options_479_);
v___x_594_ = l_Lean_Core_instMonadWithOptionsCoreM_reportViolation(v_options_479_);
v___y_584_ = v___x_594_;
goto v___jp_583_;
}
v___jp_490_:
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_509_ = l_Lean_maxRecDepth;
v___x_510_ = l_Lean_Option_get___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__3(v___y_491_, v___x_509_);
v___x_511_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_511_, 0, v_fileName_493_);
lean_ctor_set(v___x_511_, 1, v_fileMap_494_);
lean_ctor_set(v___x_511_, 2, v___y_491_);
lean_ctor_set(v___x_511_, 3, v___x_510_);
lean_ctor_set(v___x_511_, 4, v_currNamespace_495_);
lean_ctor_set(v___x_511_, 5, v_openDecls_496_);
lean_ctor_set(v___x_511_, 6, v_initHeartbeats_497_);
lean_ctor_set(v___x_511_, 7, v_maxHeartbeats_498_);
lean_ctor_set(v___x_511_, 8, v_quotContext_499_);
lean_ctor_set(v___x_511_, 9, v_currMacroScope_500_);
lean_ctor_set(v___x_511_, 10, v_cancelTk_x3f_501_);
lean_ctor_set(v___x_511_, 11, v_inheritedTraceOptions_502_);
lean_inc(v_ref_504_);
lean_inc(v_currRecDepth_503_);
v___x_512_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_512_, 0, v___x_511_);
lean_ctor_set(v___x_512_, 1, v_currRecDepth_503_);
lean_ctor_set(v___x_512_, 2, v_ref_504_);
lean_ctor_set_uint16(v___x_512_, sizeof(void*)*3, v___y_492_);
lean_ctor_set_uint8(v___x_512_, sizeof(void*)*3 + 2, v_suppressElabErrors_505_);
lean_ctor_set_uint8(v___x_512_, sizeof(void*)*3 + 3, v_checkDeprecated_506_);
lean_ctor_set_uint8(v___x_512_, sizeof(void*)*3 + 4, v_isRecordingDeps_507_);
lean_inc_ref(v_a_451_);
v___x_513_ = l_Lean_Meta_ppExpr(v_a_451_, v___y_463_, v___y_464_, v___x_512_, v___y_508_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v_a_514_; lean_object* v___x_515_; 
v_a_514_ = lean_ctor_get(v___x_513_, 0);
lean_inc(v_a_514_);
lean_dec_ref_known(v___x_513_, 1);
lean_inc_ref(v_a_452_);
v___x_515_ = l_Lean_Meta_ppExpr(v_a_452_, v___y_463_, v___y_464_, v___x_512_, v___y_508_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; uint8_t v___x_520_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_a_516_);
lean_dec_ref_known(v___x_515_, 1);
v___x_517_ = l_Std_Format_defWidth;
v___x_518_ = l_Std_Format_pretty(v_a_514_, v___x_517_, v___x_489_, v___x_489_);
v___x_519_ = l_Std_Format_pretty(v_a_516_, v___x_517_, v___x_489_, v___x_489_);
v___x_520_ = lean_string_dec_eq(v___x_518_, v___x_519_);
lean_dec_ref(v___x_519_);
lean_dec_ref(v___x_518_);
if (v___x_520_ == 0)
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_521_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__2, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__2);
v___x_522_ = l_Lean_indentExpr(v_a_451_);
v___x_523_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_523_, 0, v___x_521_);
lean_ctor_set(v___x_523_, 1, v___x_522_);
v___x_524_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__5, &l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3___closed__5);
v___x_525_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_525_, 0, v___x_523_);
lean_ctor_set(v___x_525_, 1, v___x_524_);
v___x_526_ = l_Lean_indentExpr(v_a_452_);
v___x_527_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_527_, 0, v___x_525_);
lean_ctor_set(v___x_527_, 1, v___x_526_);
v___x_528_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2___redArg(v___x_527_, v___y_463_, v___y_464_, v___x_512_, v___y_508_);
lean_dec_ref_known(v___x_512_, 3);
return v___x_528_;
}
else
{
lean_object* v___x_529_; 
lean_dec_ref_known(v___x_512_, 3);
v___x_529_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg(v_a_451_, v_a_452_, v___x_453_, v___x_454_, v_tail_471_, v___x_488_, v___y_463_, v___y_464_, v___y_465_, v___y_466_);
return v___x_529_;
}
}
else
{
lean_object* v_a_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_537_; 
lean_dec(v_a_514_);
lean_dec_ref_known(v___x_512_, 3);
lean_dec_ref(v_a_452_);
lean_dec_ref(v_a_451_);
v_a_530_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_537_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_537_ == 0)
{
v___x_532_ = v___x_515_;
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_a_530_);
lean_dec(v___x_515_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v___x_535_; 
if (v_isShared_533_ == 0)
{
v___x_535_ = v___x_532_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_a_530_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
return v___x_535_;
}
}
}
}
else
{
lean_object* v_a_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_545_; 
lean_dec_ref_known(v___x_512_, 3);
lean_dec_ref(v_a_452_);
lean_dec_ref(v_a_451_);
v_a_538_ = lean_ctor_get(v___x_513_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v___x_513_);
if (v_isSharedCheck_545_ == 0)
{
v___x_540_ = v___x_513_;
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_a_538_);
lean_dec(v___x_513_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_543_; 
if (v_isShared_541_ == 0)
{
v___x_543_ = v___x_540_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_a_538_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
}
v___jp_546_:
{
lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_558_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__5, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__5_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg___closed__5);
v___x_559_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_559_, 0, v___y_557_);
lean_ctor_set(v___x_559_, 1, v_nextMacroScope_548_);
lean_ctor_set(v___x_559_, 2, v_ngen_549_);
lean_ctor_set(v___x_559_, 3, v_auxDeclNGen_550_);
lean_ctor_set(v___x_559_, 4, v_traceState_551_);
lean_ctor_set(v___x_559_, 5, v___x_558_);
lean_ctor_set(v___x_559_, 6, v_recordedDeps_552_);
lean_ctor_set(v___x_559_, 7, v_messages_553_);
lean_ctor_set(v___x_559_, 8, v_infoState_554_);
lean_ctor_set(v___x_559_, 9, v_snapshotTasks_555_);
v___x_560_ = lean_st_ref_put(v___y_466_, v___x_559_);
lean_inc_ref(v_inheritedTraceOptions_487_);
lean_inc(v_cancelTk_x3f_486_);
lean_inc(v_currMacroScope_485_);
lean_inc(v_quotContext_484_);
lean_inc(v_maxHeartbeats_483_);
lean_inc(v_initHeartbeats_482_);
lean_inc(v_openDecls_481_);
lean_inc(v_currNamespace_480_);
lean_inc_ref(v_fileMap_478_);
lean_inc_ref(v_fileName_477_);
v___y_491_ = v___y_547_;
v___y_492_ = v___y_556_;
v_fileName_493_ = v_fileName_477_;
v_fileMap_494_ = v_fileMap_478_;
v_currNamespace_495_ = v_currNamespace_480_;
v_openDecls_496_ = v_openDecls_481_;
v_initHeartbeats_497_ = v_initHeartbeats_482_;
v_maxHeartbeats_498_ = v_maxHeartbeats_483_;
v_quotContext_499_ = v_quotContext_484_;
v_currMacroScope_500_ = v_currMacroScope_485_;
v_cancelTk_x3f_501_ = v_cancelTk_x3f_486_;
v_inheritedTraceOptions_502_ = v_inheritedTraceOptions_487_;
v_currRecDepth_503_ = v_currRecDepth_472_;
v_ref_504_ = v_ref_473_;
v_suppressElabErrors_505_ = v_suppressElabErrors_474_;
v_checkDeprecated_506_ = v_checkDeprecated_475_;
v_isRecordingDeps_507_ = v_isRecordingDeps_476_;
v___y_508_ = v___y_466_;
goto v___jp_490_;
}
v___jp_561_:
{
if (v___y_564_ == 0)
{
uint8_t v___x_565_; lean_object* v___x_566_; lean_object* v_env_567_; lean_object* v_nextMacroScope_568_; lean_object* v_ngen_569_; lean_object* v_auxDeclNGen_570_; lean_object* v_traceState_571_; lean_object* v_recordedDeps_572_; lean_object* v_messages_573_; lean_object* v_infoState_574_; lean_object* v_snapshotTasks_575_; uint16_t v___x_576_; uint16_t v___x_577_; uint16_t v___x_578_; uint8_t v___x_579_; 
v___x_565_ = 1;
v___x_566_ = lean_st_ref_take(v___y_466_);
v_env_567_ = lean_ctor_get(v___x_566_, 0);
lean_inc_ref(v_env_567_);
v_nextMacroScope_568_ = lean_ctor_get(v___x_566_, 1);
lean_inc(v_nextMacroScope_568_);
v_ngen_569_ = lean_ctor_get(v___x_566_, 2);
lean_inc_ref(v_ngen_569_);
v_auxDeclNGen_570_ = lean_ctor_get(v___x_566_, 3);
lean_inc_ref(v_auxDeclNGen_570_);
v_traceState_571_ = lean_ctor_get(v___x_566_, 4);
lean_inc_ref(v_traceState_571_);
v_recordedDeps_572_ = lean_ctor_get(v___x_566_, 6);
lean_inc_ref(v_recordedDeps_572_);
v_messages_573_ = lean_ctor_get(v___x_566_, 7);
lean_inc_ref(v_messages_573_);
v_infoState_574_ = lean_ctor_get(v___x_566_, 8);
lean_inc_ref(v_infoState_574_);
v_snapshotTasks_575_ = lean_ctor_get(v___x_566_, 9);
lean_inc_ref(v_snapshotTasks_575_);
lean_dec(v___x_566_);
v___x_576_ = 512;
v___x_577_ = lean_uint16_land(v___y_563_, v___x_576_);
v___x_578_ = 0;
v___x_579_ = lean_uint16_dec_eq(v___x_577_, v___x_578_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; 
v___x_580_ = l_Lean_Kernel_enableDiag(v_env_567_, v___x_565_);
v___y_547_ = v___y_562_;
v_nextMacroScope_548_ = v_nextMacroScope_568_;
v_ngen_549_ = v_ngen_569_;
v_auxDeclNGen_550_ = v_auxDeclNGen_570_;
v_traceState_551_ = v_traceState_571_;
v_recordedDeps_552_ = v_recordedDeps_572_;
v_messages_553_ = v_messages_573_;
v_infoState_554_ = v_infoState_574_;
v_snapshotTasks_555_ = v_snapshotTasks_575_;
v___y_556_ = v___y_563_;
v___y_557_ = v___x_580_;
goto v___jp_546_;
}
else
{
lean_object* v___x_581_; 
v___x_581_ = l_Lean_Kernel_enableDiag(v_env_567_, v___y_564_);
v___y_547_ = v___y_562_;
v_nextMacroScope_548_ = v_nextMacroScope_568_;
v_ngen_549_ = v_ngen_569_;
v_auxDeclNGen_550_ = v_auxDeclNGen_570_;
v_traceState_551_ = v_traceState_571_;
v_recordedDeps_552_ = v_recordedDeps_572_;
v_messages_553_ = v_messages_573_;
v_infoState_554_ = v_infoState_574_;
v_snapshotTasks_555_ = v_snapshotTasks_575_;
v___y_556_ = v___y_563_;
v___y_557_ = v___x_581_;
goto v___jp_546_;
}
}
else
{
lean_inc_ref(v_inheritedTraceOptions_487_);
lean_inc(v_cancelTk_x3f_486_);
lean_inc(v_currMacroScope_485_);
lean_inc(v_quotContext_484_);
lean_inc(v_maxHeartbeats_483_);
lean_inc(v_initHeartbeats_482_);
lean_inc(v_openDecls_481_);
lean_inc(v_currNamespace_480_);
lean_inc_ref(v_fileMap_478_);
lean_inc_ref(v_fileName_477_);
v___y_491_ = v___y_562_;
v___y_492_ = v___y_563_;
v_fileName_493_ = v_fileName_477_;
v_fileMap_494_ = v_fileMap_478_;
v_currNamespace_495_ = v_currNamespace_480_;
v_openDecls_496_ = v_openDecls_481_;
v_initHeartbeats_497_ = v_initHeartbeats_482_;
v_maxHeartbeats_498_ = v_maxHeartbeats_483_;
v_quotContext_499_ = v_quotContext_484_;
v_currMacroScope_500_ = v_currMacroScope_485_;
v_cancelTk_x3f_501_ = v_cancelTk_x3f_486_;
v_inheritedTraceOptions_502_ = v_inheritedTraceOptions_487_;
v_currRecDepth_503_ = v_currRecDepth_472_;
v_ref_504_ = v_ref_473_;
v_suppressElabErrors_505_ = v_suppressElabErrors_474_;
v_checkDeprecated_506_ = v_checkDeprecated_475_;
v_isRecordingDeps_507_ = v_isRecordingDeps_476_;
v___y_508_ = v___y_466_;
goto v___jp_490_;
}
}
v___jp_583_:
{
uint16_t v___x_585_; lean_object* v___x_586_; lean_object* v_env_587_; uint8_t v___x_588_; uint16_t v___x_589_; uint16_t v___x_590_; uint16_t v___x_591_; uint8_t v___x_592_; 
v___x_585_ = l_Lean_OptionFlags_ofOptions(v___y_584_);
v___x_586_ = lean_st_ref_get(v___y_466_);
v_env_587_ = lean_ctor_get(v___x_586_, 0);
lean_inc_ref(v_env_587_);
lean_dec(v___x_586_);
v___x_588_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_587_);
lean_dec_ref(v_env_587_);
v___x_589_ = 512;
v___x_590_ = lean_uint16_land(v___x_585_, v___x_589_);
v___x_591_ = 0;
v___x_592_ = lean_uint16_dec_eq(v___x_590_, v___x_591_);
if (v___x_592_ == 0)
{
v___y_562_ = v___y_584_;
v___y_563_ = v___x_585_;
v___y_564_ = v___x_588_;
goto v___jp_561_;
}
else
{
if (v___x_588_ == 0)
{
lean_inc_ref(v_inheritedTraceOptions_487_);
lean_inc(v_cancelTk_x3f_486_);
lean_inc(v_currMacroScope_485_);
lean_inc(v_quotContext_484_);
lean_inc(v_maxHeartbeats_483_);
lean_inc(v_initHeartbeats_482_);
lean_inc(v_openDecls_481_);
lean_inc(v_currNamespace_480_);
lean_inc_ref(v_fileMap_478_);
lean_inc_ref(v_fileName_477_);
v___y_491_ = v___y_584_;
v___y_492_ = v___x_585_;
v_fileName_493_ = v_fileName_477_;
v_fileMap_494_ = v_fileMap_478_;
v_currNamespace_495_ = v_currNamespace_480_;
v_openDecls_496_ = v_openDecls_481_;
v_initHeartbeats_497_ = v_initHeartbeats_482_;
v_maxHeartbeats_498_ = v_maxHeartbeats_483_;
v_quotContext_499_ = v_quotContext_484_;
v_currMacroScope_500_ = v_currMacroScope_485_;
v_cancelTk_x3f_501_ = v_cancelTk_x3f_486_;
v_inheritedTraceOptions_502_ = v_inheritedTraceOptions_487_;
v_currRecDepth_503_ = v_currRecDepth_472_;
v_ref_504_ = v_ref_473_;
v_suppressElabErrors_505_ = v_suppressElabErrors_474_;
v_checkDeprecated_506_ = v_checkDeprecated_475_;
v_isRecordingDeps_507_ = v_isRecordingDeps_476_;
v___y_508_ = v___y_466_;
goto v___jp_490_;
}
else
{
v___y_562_ = v___y_584_;
v___y_563_ = v___x_585_;
v___y_564_ = v___x_582_;
goto v___jp_561_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4___redArg___boxed(lean_object** _args){
lean_object* v_a_595_ = _args[0];
lean_object* v_a_596_ = _args[1];
lean_object* v___x_597_ = _args[2];
lean_object* v___x_598_ = _args[3];
lean_object* v_as_599_ = _args[4];
lean_object* v_as_x27_600_ = _args[5];
lean_object* v_b_601_ = _args[6];
lean_object* v___y_602_ = _args[7];
lean_object* v___y_603_ = _args[8];
lean_object* v___y_604_ = _args[9];
lean_object* v___y_605_ = _args[10];
lean_object* v___y_606_ = _args[11];
lean_object* v___y_607_ = _args[12];
lean_object* v___y_608_ = _args[13];
lean_object* v___y_609_ = _args[14];
lean_object* v___y_610_ = _args[15];
lean_object* v___y_611_ = _args[16];
_start:
{
size_t v___x_52153__boxed_612_; size_t v___x_52154__boxed_613_; lean_object* v_res_614_; 
v___x_52153__boxed_612_ = lean_unbox_usize(v___x_597_);
lean_dec(v___x_597_);
v___x_52154__boxed_613_ = lean_unbox_usize(v___x_598_);
lean_dec(v___x_598_);
v_res_614_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4___redArg(v_a_595_, v_a_596_, v___x_52153__boxed_612_, v___x_52154__boxed_613_, v_as_599_, v_as_x27_600_, v_b_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_);
lean_dec(v___y_610_);
lean_dec_ref(v___y_609_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec(v___y_606_);
lean_dec_ref(v___y_605_);
lean_dec(v___y_604_);
lean_dec_ref(v___y_603_);
lean_dec(v___y_602_);
lean_dec(v_as_x27_600_);
lean_dec(v_as_599_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__4(uint8_t v___y_615_, lean_object* v_a_616_, lean_object* v___f_617_, lean_object* v___f_618_, lean_object* v___f_619_, uint8_t v___x_620_, lean_object* v___x_621_, uint8_t v___x_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_){
_start:
{
switch(v___y_615_)
{
case 0:
{
lean_object* v___x_633_; 
lean_dec(v___x_621_);
lean_dec_ref(v___f_619_);
lean_dec_ref(v___f_618_);
lean_dec_ref(v___f_617_);
v___x_633_ = l_Lean_Meta_Grind_normLegacy(v_a_616_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
return v___x_633_;
}
case 1:
{
lean_object* v___x_634_; 
lean_dec(v___x_621_);
lean_dec_ref(v___f_619_);
lean_dec_ref(v___f_618_);
lean_dec_ref(v___f_617_);
v___x_634_ = l_Lean_Meta_Grind_normSym___redArg(v_a_616_, v___y_624_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
return v___x_634_;
}
default: 
{
lean_object* v___x_635_; 
lean_inc_ref(v_a_616_);
v___x_635_ = l_Lean_Meta_Grind_normLegacy(v_a_616_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v_a_636_; lean_object* v___x_637_; 
v_a_636_ = lean_ctor_get(v___x_635_, 0);
lean_inc(v_a_636_);
lean_dec_ref_known(v___x_635_, 1);
v___x_637_ = l_Lean_Meta_Grind_normSym___redArg(v_a_616_, v___y_624_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
if (lean_obj_tag(v___x_637_) == 0)
{
lean_object* v_a_638_; lean_object* v_expr_639_; lean_object* v___x_640_; 
v_a_638_ = lean_ctor_get(v___x_637_, 0);
lean_inc(v_a_638_);
lean_dec_ref_known(v___x_637_, 1);
v_expr_639_ = lean_ctor_get(v_a_636_, 0);
lean_inc_ref(v_expr_639_);
v___x_640_ = l_Lean_Meta_Sym_shareCommon(v_expr_639_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
if (lean_obj_tag(v___x_640_) == 0)
{
lean_object* v_a_641_; lean_object* v_expr_642_; lean_object* v___x_643_; 
v_a_641_ = lean_ctor_get(v___x_640_, 0);
lean_inc(v_a_641_);
lean_dec_ref_known(v___x_640_, 1);
v_expr_642_ = lean_ctor_get(v_a_638_, 0);
lean_inc_ref(v_expr_642_);
lean_dec(v_a_638_);
v___x_643_ = l_Lean_Meta_Sym_shareCommon(v_expr_642_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_720_; 
v_a_644_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_720_ == 0)
{
v___x_646_ = v___x_643_;
v_isShared_647_ = v_isSharedCheck_720_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_643_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_720_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
size_t v___x_648_; size_t v___x_649_; uint8_t v___x_650_; 
v___x_648_ = lean_ptr_addr(v_a_641_);
v___x_649_ = lean_ptr_addr(v_a_644_);
v___x_650_ = lean_usize_dec_eq(v___x_648_, v___x_649_);
if (v___x_650_ == 0)
{
lean_object* v___y_652_; lean_object* v___y_653_; lean_object* v___y_654_; lean_object* v___y_655_; lean_object* v___y_656_; lean_object* v___y_657_; lean_object* v___y_658_; lean_object* v___y_659_; lean_object* v___y_660_; lean_object* v___x_684_; 
lean_del_object(v___x_646_);
lean_dec(v_a_636_);
lean_inc(v_a_641_);
v___x_684_ = l_Lean_Meta_ppExpr(v_a_641_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
if (lean_obj_tag(v___x_684_) == 0)
{
lean_object* v_a_685_; lean_object* v___x_686_; 
v_a_685_ = lean_ctor_get(v___x_684_, 0);
lean_inc(v_a_685_);
lean_dec_ref_known(v___x_684_, 1);
lean_inc(v_a_644_);
v___x_686_ = l_Lean_Meta_ppExpr(v_a_644_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; uint8_t v___x_691_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_a_687_);
lean_dec_ref_known(v___x_686_, 1);
v___x_688_ = l_Std_Format_defWidth;
lean_inc_n(v___x_621_, 3);
v___x_689_ = l_Std_Format_pretty(v_a_685_, v___x_688_, v___x_621_, v___x_621_);
v___x_690_ = l_Std_Format_pretty(v_a_687_, v___x_688_, v___x_621_, v___x_621_);
v___x_691_ = lean_string_dec_eq(v___x_689_, v___x_690_);
lean_dec_ref(v___x_690_);
lean_dec_ref(v___x_689_);
if (v___x_691_ == 0)
{
lean_object* v___x_692_; lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_700_; 
lean_dec_ref(v___f_619_);
lean_dec_ref(v___f_618_);
lean_dec_ref(v___f_617_);
v___x_692_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3(v_a_641_, v_a_644_, v___x_622_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
v_a_693_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_700_ == 0)
{
v___x_695_ = v___x_692_;
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v___x_692_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_698_; 
if (v_isShared_696_ == 0)
{
v___x_698_ = v___x_695_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_a_693_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
else
{
v___y_652_ = v___y_623_;
v___y_653_ = v___y_624_;
v___y_654_ = v___y_625_;
v___y_655_ = v___y_626_;
v___y_656_ = v___y_627_;
v___y_657_ = v___y_628_;
v___y_658_ = v___y_629_;
v___y_659_ = v___y_630_;
v___y_660_ = v___y_631_;
goto v___jp_651_;
}
}
else
{
lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_708_; 
lean_dec(v_a_685_);
lean_dec(v_a_644_);
lean_dec(v_a_641_);
lean_dec(v___x_621_);
lean_dec_ref(v___f_619_);
lean_dec_ref(v___f_618_);
lean_dec_ref(v___f_617_);
v_a_701_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_708_ == 0)
{
v___x_703_ = v___x_686_;
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_686_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_706_; 
if (v_isShared_704_ == 0)
{
v___x_706_ = v___x_703_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_a_701_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
}
}
else
{
lean_object* v_a_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_716_; 
lean_dec(v_a_644_);
lean_dec(v_a_641_);
lean_dec(v___x_621_);
lean_dec_ref(v___f_619_);
lean_dec_ref(v___f_618_);
lean_dec_ref(v___f_617_);
v_a_709_ = lean_ctor_get(v___x_684_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_716_ == 0)
{
v___x_711_ = v___x_684_;
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_a_709_);
lean_dec(v___x_684_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_714_; 
if (v_isShared_712_ == 0)
{
v___x_714_ = v___x_711_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v_a_709_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
}
v___jp_651_:
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_661_ = lean_box(0);
v___x_662_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_662_, 0, v___f_617_);
lean_ctor_set(v___x_662_, 1, v___x_661_);
v___x_663_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_663_, 0, v___f_618_);
lean_ctor_set(v___x_663_, 1, v___x_662_);
v___x_664_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_664_, 0, v___f_619_);
lean_ctor_set(v___x_664_, 1, v___x_663_);
v___x_665_ = lean_box(0);
lean_inc(v_a_644_);
lean_inc(v_a_641_);
v___x_666_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4___redArg(v_a_641_, v_a_644_, v___x_648_, v___x_649_, v___x_664_, v___x_664_, v___x_665_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
lean_dec_ref_known(v___x_664_, 2);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_object* v___x_667_; lean_object* v_a_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_675_; 
lean_dec_ref_known(v___x_666_, 1);
v___x_667_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__3(v_a_641_, v_a_644_, v___x_620_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
v_a_668_ = lean_ctor_get(v___x_667_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_675_ == 0)
{
v___x_670_ = v___x_667_;
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_a_668_);
lean_dec(v___x_667_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_673_; 
if (v_isShared_671_ == 0)
{
v___x_673_ = v___x_670_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_a_668_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
else
{
lean_object* v_a_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_683_; 
lean_dec(v_a_644_);
lean_dec(v_a_641_);
v_a_676_ = lean_ctor_get(v___x_666_, 0);
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_683_ == 0)
{
v___x_678_ = v___x_666_;
v_isShared_679_ = v_isSharedCheck_683_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_a_676_);
lean_dec(v___x_666_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_683_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_681_; 
if (v_isShared_679_ == 0)
{
v___x_681_ = v___x_678_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_a_676_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
}
}
else
{
lean_object* v___x_718_; 
lean_dec(v_a_644_);
lean_dec(v_a_641_);
lean_dec(v___x_621_);
lean_dec_ref(v___f_619_);
lean_dec_ref(v___f_618_);
lean_dec_ref(v___f_617_);
if (v_isShared_647_ == 0)
{
lean_ctor_set(v___x_646_, 0, v_a_636_);
v___x_718_ = v___x_646_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_a_636_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
}
else
{
lean_object* v_a_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_728_; 
lean_dec(v_a_641_);
lean_dec(v_a_636_);
lean_dec(v___x_621_);
lean_dec_ref(v___f_619_);
lean_dec_ref(v___f_618_);
lean_dec_ref(v___f_617_);
v_a_721_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_728_ == 0)
{
v___x_723_ = v___x_643_;
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_a_721_);
lean_dec(v___x_643_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_726_; 
if (v_isShared_724_ == 0)
{
v___x_726_ = v___x_723_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_a_721_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
}
else
{
lean_object* v_a_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_736_; 
lean_dec(v_a_638_);
lean_dec(v_a_636_);
lean_dec(v___x_621_);
lean_dec_ref(v___f_619_);
lean_dec_ref(v___f_618_);
lean_dec_ref(v___f_617_);
v_a_729_ = lean_ctor_get(v___x_640_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v___x_640_);
if (v_isSharedCheck_736_ == 0)
{
v___x_731_ = v___x_640_;
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_a_729_);
lean_dec(v___x_640_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_734_; 
if (v_isShared_732_ == 0)
{
v___x_734_ = v___x_731_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_a_729_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
}
}
else
{
lean_dec(v_a_636_);
lean_dec(v___x_621_);
lean_dec_ref(v___f_619_);
lean_dec_ref(v___f_618_);
lean_dec_ref(v___f_617_);
return v___x_637_;
}
}
else
{
lean_dec(v___x_621_);
lean_dec_ref(v___f_619_);
lean_dec_ref(v___f_618_);
lean_dec_ref(v___f_617_);
lean_dec_ref(v_a_616_);
return v___x_635_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__4___boxed(lean_object** _args){
lean_object* v___y_737_ = _args[0];
lean_object* v_a_738_ = _args[1];
lean_object* v___f_739_ = _args[2];
lean_object* v___f_740_ = _args[3];
lean_object* v___f_741_ = _args[4];
lean_object* v___x_742_ = _args[5];
lean_object* v___x_743_ = _args[6];
lean_object* v___x_744_ = _args[7];
lean_object* v___y_745_ = _args[8];
lean_object* v___y_746_ = _args[9];
lean_object* v___y_747_ = _args[10];
lean_object* v___y_748_ = _args[11];
lean_object* v___y_749_ = _args[12];
lean_object* v___y_750_ = _args[13];
lean_object* v___y_751_ = _args[14];
lean_object* v___y_752_ = _args[15];
lean_object* v___y_753_ = _args[16];
lean_object* v___y_754_ = _args[17];
_start:
{
uint8_t v___y_52359__boxed_755_; uint8_t v___x_52364__boxed_756_; uint8_t v___x_52366__boxed_757_; lean_object* v_res_758_; 
v___y_52359__boxed_755_ = lean_unbox(v___y_737_);
v___x_52364__boxed_756_ = lean_unbox(v___x_742_);
v___x_52366__boxed_757_ = lean_unbox(v___x_744_);
v_res_758_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__4(v___y_52359__boxed_755_, v_a_738_, v___f_739_, v___f_740_, v___f_741_, v___x_52364__boxed_756_, v___x_743_, v___x_52366__boxed_757_, v___y_745_, v___y_746_, v___y_747_, v___y_748_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
lean_dec(v___y_749_);
lean_dec_ref(v___y_748_);
lean_dec(v___y_747_);
lean_dec_ref(v___y_746_);
lean_dec(v___y_745_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__5(lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_){
_start:
{
lean_object* v___y_771_; lean_object* v___x_780_; 
v___x_780_ = l_Lean_Meta_Grind_getConfig___redArg(v___y_761_);
if (lean_obj_tag(v___x_780_) == 0)
{
lean_object* v_a_781_; uint8_t v___y_783_; uint8_t v_reducible_802_; 
v_a_781_ = lean_ctor_get(v___x_780_, 0);
lean_inc(v_a_781_);
lean_dec_ref_known(v___x_780_, 1);
v_reducible_802_ = lean_ctor_get_uint8(v_a_781_, sizeof(void*)*18 + 33);
lean_dec(v_a_781_);
if (v_reducible_802_ == 0)
{
uint8_t v___x_803_; 
v___x_803_ = 1;
v___y_783_ = v___x_803_;
goto v___jp_782_;
}
else
{
uint8_t v___x_804_; 
v___x_804_ = 2;
v___y_783_ = v___x_804_;
goto v___jp_782_;
}
v___jp_782_:
{
lean_object* v___x_784_; uint8_t v_transparency_785_; uint8_t v___x_786_; 
v___x_784_ = l_Lean_Meta_Context_config(v___y_765_);
v_transparency_785_ = lean_ctor_get_uint8(v___x_784_, 9);
lean_dec_ref(v___x_784_);
v___x_786_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_785_, v___y_783_);
if (v___x_786_ == 0)
{
lean_object* v_keyedConfig_787_; uint8_t v_trackZetaDelta_788_; lean_object* v_zetaDeltaSet_789_; lean_object* v_lctx_790_; lean_object* v_localInstances_791_; lean_object* v_defEqCtx_x3f_792_; lean_object* v_synthPendingDepth_793_; lean_object* v_customCanUnfoldPredicate_x3f_794_; uint8_t v_univApprox_795_; uint8_t v_inTypeClassResolution_796_; uint8_t v_cacheInferType_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v_keyedConfig_787_ = lean_ctor_get(v___y_765_, 0);
v_trackZetaDelta_788_ = lean_ctor_get_uint8(v___y_765_, sizeof(void*)*7);
v_zetaDeltaSet_789_ = lean_ctor_get(v___y_765_, 1);
v_lctx_790_ = lean_ctor_get(v___y_765_, 2);
v_localInstances_791_ = lean_ctor_get(v___y_765_, 3);
v_defEqCtx_x3f_792_ = lean_ctor_get(v___y_765_, 4);
v_synthPendingDepth_793_ = lean_ctor_get(v___y_765_, 5);
v_customCanUnfoldPredicate_x3f_794_ = lean_ctor_get(v___y_765_, 6);
v_univApprox_795_ = lean_ctor_get_uint8(v___y_765_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_796_ = lean_ctor_get_uint8(v___y_765_, sizeof(void*)*7 + 2);
v_cacheInferType_797_ = lean_ctor_get_uint8(v___y_765_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_787_);
v___x_798_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___y_783_, v_keyedConfig_787_);
lean_inc(v_customCanUnfoldPredicate_x3f_794_);
lean_inc(v_synthPendingDepth_793_);
lean_inc(v_defEqCtx_x3f_792_);
lean_inc_ref(v_localInstances_791_);
lean_inc_ref(v_lctx_790_);
lean_inc(v_zetaDeltaSet_789_);
v___x_799_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_799_, 0, v___x_798_);
lean_ctor_set(v___x_799_, 1, v_zetaDeltaSet_789_);
lean_ctor_set(v___x_799_, 2, v_lctx_790_);
lean_ctor_set(v___x_799_, 3, v_localInstances_791_);
lean_ctor_set(v___x_799_, 4, v_defEqCtx_x3f_792_);
lean_ctor_set(v___x_799_, 5, v_synthPendingDepth_793_);
lean_ctor_set(v___x_799_, 6, v_customCanUnfoldPredicate_x3f_794_);
lean_ctor_set_uint8(v___x_799_, sizeof(void*)*7, v_trackZetaDelta_788_);
lean_ctor_set_uint8(v___x_799_, sizeof(void*)*7 + 1, v_univApprox_795_);
lean_ctor_set_uint8(v___x_799_, sizeof(void*)*7 + 2, v_inTypeClassResolution_796_);
lean_ctor_set_uint8(v___x_799_, sizeof(void*)*7 + 3, v_cacheInferType_797_);
lean_inc(v___y_768_);
lean_inc_ref(v___y_767_);
lean_inc(v___y_766_);
lean_inc(v___y_764_);
lean_inc_ref(v___y_763_);
lean_inc(v___y_762_);
lean_inc_ref(v___y_761_);
lean_inc(v___y_760_);
v___x_800_ = lean_apply_10(v___y_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_, v___x_799_, v___y_766_, v___y_767_, v___y_768_, lean_box(0));
v___y_771_ = v___x_800_;
goto v___jp_770_;
}
else
{
lean_object* v___x_801_; 
lean_inc(v___y_768_);
lean_inc_ref(v___y_767_);
lean_inc(v___y_766_);
lean_inc_ref(v___y_765_);
lean_inc(v___y_764_);
lean_inc_ref(v___y_763_);
lean_inc(v___y_762_);
lean_inc_ref(v___y_761_);
lean_inc(v___y_760_);
v___x_801_ = lean_apply_10(v___y_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_, lean_box(0));
v___y_771_ = v___x_801_;
goto v___jp_770_;
}
}
}
else
{
lean_object* v_a_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_812_; 
lean_dec_ref(v___y_759_);
v_a_805_ = lean_ctor_get(v___x_780_, 0);
v_isSharedCheck_812_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_812_ == 0)
{
v___x_807_ = v___x_780_;
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_a_805_);
lean_dec(v___x_780_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_810_; 
if (v_isShared_808_ == 0)
{
v___x_810_ = v___x_807_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_a_805_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
}
v___jp_770_:
{
if (lean_obj_tag(v___y_771_) == 0)
{
return v___y_771_;
}
else
{
lean_object* v_a_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_779_; 
v_a_772_ = lean_ctor_get(v___y_771_, 0);
v_isSharedCheck_779_ = !lean_is_exclusive(v___y_771_);
if (v_isSharedCheck_779_ == 0)
{
v___x_774_ = v___y_771_;
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_a_772_);
lean_dec(v___y_771_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_777_; 
if (v_isShared_775_ == 0)
{
v___x_777_ = v___x_774_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_a_772_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__5___boxed(lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__5(v___y_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_);
lean_dec(v___y_822_);
lean_dec_ref(v___y_821_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec(v___y_816_);
lean_dec_ref(v___y_815_);
lean_dec(v___y_814_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__6(lean_object* v___x_826_, lean_object* v___x_827_, uint8_t v___x_828_, lean_object* v___f_829_, lean_object* v___f_830_, lean_object* v___f_831_, lean_object* v___x_832_, uint8_t v___x_833_, lean_object* v_stx_834_, lean_object* v___x_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = l_Lean_Elab_Tactic_elabGrindConfig___redArg(v___x_826_, v___x_827_, v___x_828_, v___y_836_, v___y_838_, v___y_842_, v___y_843_);
if (lean_obj_tag(v___x_845_) == 0)
{
lean_object* v_a_846_; uint8_t v___y_848_; lean_object* v___x_910_; lean_object* v___x_911_; 
v_a_846_ = lean_ctor_get(v___x_845_, 0);
lean_inc(v_a_846_);
lean_dec_ref_known(v___x_845_, 1);
v___x_910_ = l_Lean_Syntax_getArg(v_stx_834_, v___x_835_);
v___x_911_ = l_Lean_Syntax_getOptional_x3f(v___x_910_);
lean_dec(v___x_910_);
if (lean_obj_tag(v___x_911_) == 0)
{
uint8_t v___x_912_; 
v___x_912_ = 0;
v___y_848_ = v___x_912_;
goto v___jp_847_;
}
else
{
lean_object* v_val_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; uint8_t v___x_917_; 
v_val_913_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_val_913_);
lean_dec_ref_known(v___x_911_, 1);
v___x_914_ = l_Lean_Syntax_getArg(v_val_913_, v___x_832_);
lean_dec(v_val_913_);
v___x_915_ = l_Lean_Syntax_getAtomVal(v___x_914_);
lean_dec(v___x_914_);
v___x_916_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__6___closed__0));
v___x_917_ = lean_string_dec_eq(v___x_915_, v___x_916_);
lean_dec_ref(v___x_915_);
if (v___x_917_ == 0)
{
uint8_t v___x_918_; 
v___x_918_ = 2;
v___y_848_ = v___x_918_;
goto v___jp_847_;
}
else
{
uint8_t v___x_919_; 
v___x_919_ = 1;
v___y_848_ = v___x_919_;
goto v___jp_847_;
}
}
v___jp_847_:
{
lean_object* v___x_849_; 
v___x_849_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_837_, v___y_840_, v___y_841_, v___y_842_, v___y_843_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v_a_850_; lean_object* v___x_851_; 
v_a_850_ = lean_ctor_get(v___x_849_, 0);
lean_inc_n(v_a_850_, 2);
lean_dec_ref_known(v___x_849_, 1);
v___x_851_ = l_Lean_MVarId_getType(v_a_850_, v___y_840_, v___y_841_, v___y_842_, v___y_843_);
if (lean_obj_tag(v___x_851_) == 0)
{
lean_object* v_a_852_; lean_object* v___x_853_; lean_object* v_a_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___y_858_; lean_object* v___f_859_; lean_object* v___x_860_; 
v_a_852_ = lean_ctor_get(v___x_851_, 0);
lean_inc(v_a_852_);
lean_dec_ref_known(v___x_851_, 1);
v___x_853_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__1___redArg(v_a_852_, v___y_841_);
v_a_854_ = lean_ctor_get(v___x_853_, 0);
lean_inc_n(v_a_854_, 2);
lean_dec_ref(v___x_853_);
v___x_855_ = lean_box(v___y_848_);
v___x_856_ = lean_box(v___x_828_);
v___x_857_ = lean_box(v___x_833_);
v___y_858_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__4___boxed), 18, 8);
lean_closure_set(v___y_858_, 0, v___x_855_);
lean_closure_set(v___y_858_, 1, v_a_854_);
lean_closure_set(v___y_858_, 2, v___f_829_);
lean_closure_set(v___y_858_, 3, v___f_830_);
lean_closure_set(v___y_858_, 4, v___f_831_);
lean_closure_set(v___y_858_, 5, v___x_856_);
lean_closure_set(v___y_858_, 6, v___x_832_);
lean_closure_set(v___y_858_, 7, v___x_857_);
v___f_859_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__5___boxed), 11, 1);
lean_closure_set(v___f_859_, 0, v___y_858_);
v___x_860_ = l_Lean_Meta_Grind_mkDefaultParams(v_a_846_, v___y_840_, v___y_841_, v___y_842_, v___y_843_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v_a_861_ = lean_ctor_get(v___x_860_, 0);
lean_inc(v_a_861_);
lean_dec_ref_known(v___x_860_, 1);
v___x_862_ = lean_box(0);
v___x_863_ = l_Lean_Meta_Grind_GrindM_run___redArg(v___f_859_, v_a_861_, v___x_862_, v___y_840_, v___y_841_, v___y_842_, v___y_843_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; lean_object* v___x_865_; 
v_a_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_863_, 1);
v___x_865_ = l_Lean_Meta_applySimpResultToTarget(v_a_850_, v_a_854_, v_a_864_, v___y_840_, v___y_841_, v___y_842_, v___y_843_);
lean_dec(v_a_854_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v_a_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v_a_866_ = lean_ctor_get(v___x_865_, 0);
lean_inc(v_a_866_);
lean_dec_ref_known(v___x_865_, 1);
v___x_867_ = lean_box(0);
v___x_868_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_868_, 0, v_a_866_);
lean_ctor_set(v___x_868_, 1, v___x_867_);
v___x_869_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_868_, v___y_837_, v___y_840_, v___y_841_, v___y_842_, v___y_843_);
return v___x_869_;
}
else
{
lean_object* v_a_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_877_; 
v_a_870_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_877_ == 0)
{
v___x_872_ = v___x_865_;
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_a_870_);
lean_dec(v___x_865_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_875_; 
if (v_isShared_873_ == 0)
{
v___x_875_ = v___x_872_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_a_870_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
return v___x_875_;
}
}
}
}
else
{
lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_885_; 
lean_dec(v_a_854_);
lean_dec(v_a_850_);
v_a_878_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_885_ == 0)
{
v___x_880_ = v___x_863_;
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v___x_863_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_883_; 
if (v_isShared_881_ == 0)
{
v___x_883_ = v___x_880_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_a_878_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
}
}
else
{
lean_object* v_a_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_893_; 
lean_dec_ref(v___f_859_);
lean_dec(v_a_854_);
lean_dec(v_a_850_);
v_a_886_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_893_ == 0)
{
v___x_888_ = v___x_860_;
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_a_886_);
lean_dec(v___x_860_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_891_; 
if (v_isShared_889_ == 0)
{
v___x_891_ = v___x_888_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_a_886_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
else
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_901_; 
lean_dec(v_a_850_);
lean_dec(v_a_846_);
lean_dec(v___x_832_);
lean_dec_ref(v___f_831_);
lean_dec_ref(v___f_830_);
lean_dec_ref(v___f_829_);
v_a_894_ = lean_ctor_get(v___x_851_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v___x_851_);
if (v_isSharedCheck_901_ == 0)
{
v___x_896_ = v___x_851_;
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v___x_851_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_899_; 
if (v_isShared_897_ == 0)
{
v___x_899_ = v___x_896_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_a_894_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
}
}
else
{
lean_object* v_a_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
lean_dec(v_a_846_);
lean_dec(v___x_832_);
lean_dec_ref(v___f_831_);
lean_dec_ref(v___f_830_);
lean_dec_ref(v___f_829_);
v_a_902_ = lean_ctor_get(v___x_849_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v___x_849_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_a_902_);
lean_dec(v___x_849_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_902_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
}
else
{
lean_object* v_a_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_927_; 
lean_dec(v___x_832_);
lean_dec_ref(v___f_831_);
lean_dec_ref(v___f_830_);
lean_dec_ref(v___f_829_);
v_a_920_ = lean_ctor_get(v___x_845_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_927_ == 0)
{
v___x_922_ = v___x_845_;
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_a_920_);
lean_dec(v___x_845_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_925_; 
if (v_isShared_923_ == 0)
{
v___x_925_ = v___x_922_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_a_920_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__6___boxed(lean_object** _args){
lean_object* v___x_928_ = _args[0];
lean_object* v___x_929_ = _args[1];
lean_object* v___x_930_ = _args[2];
lean_object* v___f_931_ = _args[3];
lean_object* v___f_932_ = _args[4];
lean_object* v___f_933_ = _args[5];
lean_object* v___x_934_ = _args[6];
lean_object* v___x_935_ = _args[7];
lean_object* v_stx_936_ = _args[8];
lean_object* v___x_937_ = _args[9];
lean_object* v___y_938_ = _args[10];
lean_object* v___y_939_ = _args[11];
lean_object* v___y_940_ = _args[12];
lean_object* v___y_941_ = _args[13];
lean_object* v___y_942_ = _args[14];
lean_object* v___y_943_ = _args[15];
lean_object* v___y_944_ = _args[16];
lean_object* v___y_945_ = _args[17];
lean_object* v___y_946_ = _args[18];
_start:
{
uint8_t v___x_52720__boxed_947_; uint8_t v___x_52725__boxed_948_; lean_object* v_res_949_; 
v___x_52720__boxed_947_ = lean_unbox(v___x_930_);
v___x_52725__boxed_948_ = lean_unbox(v___x_935_);
v_res_949_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__6(v___x_928_, v___x_929_, v___x_52720__boxed_947_, v___f_931_, v___f_932_, v___f_933_, v___x_934_, v___x_52725__boxed_948_, v_stx_936_, v___x_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec(v___y_943_);
lean_dec_ref(v___y_942_);
lean_dec(v___y_941_);
lean_dec_ref(v___y_940_);
lean_dec(v___y_939_);
lean_dec_ref(v___y_938_);
lean_dec(v___x_937_);
lean_dec(v_stx_936_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm(lean_object* v_stx_978_, lean_object* v_a_979_, lean_object* v_a_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; uint8_t v___x_990_; uint8_t v___x_991_; lean_object* v___f_992_; lean_object* v___f_993_; lean_object* v___f_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___f_1000_; lean_object* v___x_1001_; 
v___x_988_ = lean_unsigned_to_nat(1u);
v___x_989_ = l_Lean_Syntax_getArg(v_stx_978_, v___x_988_);
v___x_990_ = 0;
v___x_991_ = 1;
v___f_992_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___closed__0));
v___f_993_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___closed__1));
v___f_994_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___closed__2));
v___x_995_ = lean_unsigned_to_nat(0u);
v___x_996_ = lean_unsigned_to_nat(2u);
v___x_997_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___closed__3));
v___x_998_ = lean_box(v___x_991_);
v___x_999_ = lean_box(v___x_990_);
v___f_1000_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___lam__6___boxed), 19, 10);
lean_closure_set(v___f_1000_, 0, v___x_989_);
lean_closure_set(v___f_1000_, 1, v___x_997_);
lean_closure_set(v___f_1000_, 2, v___x_998_);
lean_closure_set(v___f_1000_, 3, v___f_994_);
lean_closure_set(v___f_1000_, 4, v___f_993_);
lean_closure_set(v___f_1000_, 5, v___f_992_);
lean_closure_set(v___f_1000_, 6, v___x_995_);
lean_closure_set(v___f_1000_, 7, v___x_999_);
lean_closure_set(v___f_1000_, 8, v_stx_978_);
lean_closure_set(v___f_1000_, 9, v___x_996_);
v___x_1001_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_1000_, v_a_979_, v_a_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_, v_a_986_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___boxed(lean_object* v_stx_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm(v_stx_1002_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_, v_a_1007_, v_a_1008_, v_a_1009_, v_a_1010_);
lean_dec(v_a_1010_);
lean_dec_ref(v_a_1009_);
lean_dec(v_a_1008_);
lean_dec_ref(v_a_1007_);
lean_dec(v_a_1006_);
lean_dec_ref(v_a_1005_);
lean_dec(v_a_1004_);
lean_dec_ref(v_a_1003_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2(lean_object* v_00_u03b1_1013_, lean_object* v_msg_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_){
_start:
{
lean_object* v___x_1020_; 
v___x_1020_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2___redArg(v_msg_1014_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_);
return v___x_1020_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2___boxed(lean_object* v_00_u03b1_1021_, lean_object* v_msg_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__2(v_00_u03b1_1021_, v_msg_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
lean_dec(v___y_1024_);
lean_dec_ref(v___y_1023_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4(lean_object* v_a_1029_, lean_object* v_a_1030_, size_t v___x_1031_, size_t v___x_1032_, lean_object* v_as_1033_, lean_object* v_as_x27_1034_, lean_object* v_b_1035_, lean_object* v_a_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4___redArg(v_a_1029_, v_a_1030_, v___x_1031_, v___x_1032_, v_as_1033_, v_as_x27_1034_, v_b_1035_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4___boxed(lean_object** _args){
lean_object* v_a_1048_ = _args[0];
lean_object* v_a_1049_ = _args[1];
lean_object* v___x_1050_ = _args[2];
lean_object* v___x_1051_ = _args[3];
lean_object* v_as_1052_ = _args[4];
lean_object* v_as_x27_1053_ = _args[5];
lean_object* v_b_1054_ = _args[6];
lean_object* v_a_1055_ = _args[7];
lean_object* v___y_1056_ = _args[8];
lean_object* v___y_1057_ = _args[9];
lean_object* v___y_1058_ = _args[10];
lean_object* v___y_1059_ = _args[11];
lean_object* v___y_1060_ = _args[12];
lean_object* v___y_1061_ = _args[13];
lean_object* v___y_1062_ = _args[14];
lean_object* v___y_1063_ = _args[15];
lean_object* v___y_1064_ = _args[16];
lean_object* v___y_1065_ = _args[17];
_start:
{
size_t v___x_53144__boxed_1066_; size_t v___x_53145__boxed_1067_; lean_object* v_res_1068_; 
v___x_53144__boxed_1066_ = lean_unbox_usize(v___x_1050_);
lean_dec(v___x_1050_);
v___x_53145__boxed_1067_ = lean_unbox_usize(v___x_1051_);
lean_dec(v___x_1051_);
v_res_1068_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4(v_a_1048_, v_a_1049_, v___x_53144__boxed_1066_, v___x_53145__boxed_1067_, v_as_1052_, v_as_x27_1053_, v_b_1054_, v_a_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec(v___y_1056_);
lean_dec(v_as_x27_1053_);
lean_dec(v_as_1052_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6(lean_object* v_a_1069_, lean_object* v_a_1070_, size_t v___x_1071_, size_t v___x_1072_, lean_object* v_as_1073_, lean_object* v_as_x27_1074_, lean_object* v_b_1075_, lean_object* v_a_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_){
_start:
{
lean_object* v___x_1087_; 
v___x_1087_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___redArg(v_a_1069_, v_a_1070_, v___x_1071_, v___x_1072_, v_as_x27_1074_, v_b_1075_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6___boxed(lean_object** _args){
lean_object* v_a_1088_ = _args[0];
lean_object* v_a_1089_ = _args[1];
lean_object* v___x_1090_ = _args[2];
lean_object* v___x_1091_ = _args[3];
lean_object* v_as_1092_ = _args[4];
lean_object* v_as_x27_1093_ = _args[5];
lean_object* v_b_1094_ = _args[6];
lean_object* v_a_1095_ = _args[7];
lean_object* v___y_1096_ = _args[8];
lean_object* v___y_1097_ = _args[9];
lean_object* v___y_1098_ = _args[10];
lean_object* v___y_1099_ = _args[11];
lean_object* v___y_1100_ = _args[12];
lean_object* v___y_1101_ = _args[13];
lean_object* v___y_1102_ = _args[14];
lean_object* v___y_1103_ = _args[15];
lean_object* v___y_1104_ = _args[16];
lean_object* v___y_1105_ = _args[17];
_start:
{
size_t v___x_53191__boxed_1106_; size_t v___x_53192__boxed_1107_; lean_object* v_res_1108_; 
v___x_53191__boxed_1106_ = lean_unbox_usize(v___x_1090_);
lean_dec(v___x_1090_);
v___x_53192__boxed_1107_ = lean_unbox_usize(v___x_1091_);
lean_dec(v___x_1091_);
v_res_1108_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm_spec__4_spec__6(v_a_1088_, v_a_1089_, v___x_53191__boxed_1106_, v___x_53192__boxed_1107_, v_as_1092_, v_as_x27_1093_, v_b_1094_, v_a_1095_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_);
lean_dec(v___y_1104_);
lean_dec_ref(v___y_1103_);
lean_dec(v___y_1102_);
lean_dec_ref(v___y_1101_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1096_);
lean_dec(v_as_x27_1093_);
lean_dec(v_as_1092_);
return v_res_1108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1(){
_start:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1157_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1158_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__4));
v___x_1159_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___closed__20));
v___x_1160_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___boxed), 10, 0);
v___x_1161_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1157_, v___x_1158_, v___x_1159_, v___x_1160_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1___boxed(lean_object* v_a_1162_){
_start:
{
lean_object* v_res_1163_; 
v_res_1163_ = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1();
return v_res_1163_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Config(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_NormSym(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Norm(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Grind_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_NormSym(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm___regBuiltin___private_Lean_Elab_Tactic_Grind_Norm_0__Lean_Elab_Tactic_evalGrindNorm__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Grind_Norm(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Grind_Config(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_NormSym(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Grind_Norm(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Grind_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_NormSym(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Grind_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Grind_Norm(builtin);
}
#ifdef __cplusplus
}
#endif
