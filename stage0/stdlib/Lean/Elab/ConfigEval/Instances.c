// Lean compiler output
// Module: Lean.Elab.ConfigEval.Instances
// Imports: public import Lean.Elab.ConfigEval.Basic
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
lean_object* l_Lean_Expr_nat_x3f(lean_object*);
lean_object* l_Lean_Expr_rawNatLit_x3f(lean_object*);
extern lean_object* l_Lean_Elab_ConfigEval_unsupportedExprExceptionId;
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Elab_Term_addTermInfo_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalExpr_withWHNF___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_instToExprInt_mkNat(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_TSyntax_getNat(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Expr_int_x3f(lean_object*);
lean_object* lean_int_neg_succ_of_nat(lean_object*);
lean_object* lean_array_to_list(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_name_x3f(lean_object*);
lean_object* l_Lean_mkStrLit(lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* l___private_Lean_ToExpr_0__Lean_Name_toExprAux(lean_object*);
lean_object* l_Lean_Syntax_isNameLit_x3f(lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__3;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__4_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__5_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__6;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__7_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__7_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__8 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__8_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__9;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__7_value),LEAN_SCALAR_PTR_LITERAL(235, 97, 249, 134, 197, 220, 12, 91)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__10 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__10_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__4_value),LEAN_SCALAR_PTR_LITERAL(160, 214, 196, 140, 104, 187, 164, 111)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__11 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__11_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__13 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__13_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__14 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__14_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dotIdent"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__15 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__15_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__13_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__15_value),LEAN_SCALAR_PTR_LITERAL(173, 139, 76, 218, 89, 59, 213, 196)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__3;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__4_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_ConfigEval_EvalTerm_evalIntStx_spec__0(lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__3;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__4;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__5_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__6 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__6_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__5_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__6_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__7_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__8;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__10;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instNegInt"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__11 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__11_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__11_value),LEAN_SCALAR_PTR_LITERAL(217, 109, 233, 1, 211, 122, 77, 88)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__12 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__12_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__13;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "term-_"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__14 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__14_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__14_value),LEAN_SCALAR_PTR_LITERAL(77, 127, 37, 42, 155, 196, 209, 131)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__15 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__3;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__4_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__4;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__5;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__7_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__8_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__12;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__13;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__14_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__17_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__18;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__19_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__20;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__21 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__21_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__22 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__22_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__23 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__23_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__24 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__24_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "doubleQuotedName"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Name"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(251, 222, 196, 1, 17, 104, 171, 184)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__3;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "quotedName"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__13_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__4_value),LEAN_SCALAR_PTR_LITERAL(217, 120, 158, 75, 195, 162, 2, 130)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(73, 239, 30, 105, 8, 60, 178, 241)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__13_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 202, 7, 33, 103, 74, 114, 212)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__3(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term[_]"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(86, 147, 168, 74, 195, 98, 232, 161)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__6;
static const lean_array_object l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalArrayStx_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalArrayStx_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toArray"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term#[_,]"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(69, 119, 178, 128, 145, 112, 206, 247)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Prod"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__3;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__13_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(191, 24, 88, 245, 200, 250, 27, 217)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__13_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__9_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__10 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(117, 121, 37, 123, 104, 28, 189, 89)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__11_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__12;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__1(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__5(lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__0_value;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__1_value;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__3, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__2_value;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__4, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__3 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__3_value;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__5, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__4_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "DataValue"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__5_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofBool"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__6 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__6_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__5_value),LEAN_SCALAR_PTR_LITERAL(118, 132, 69, 23, 118, 186, 30, 188)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__6_value),LEAN_SCALAR_PTR_LITERAL(251, 23, 12, 160, 15, 148, 79, 170)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__7_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__8 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__8_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__5_value),LEAN_SCALAR_PTR_LITERAL(118, 132, 69, 23, 118, 186, 30, 188)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__8_value),LEAN_SCALAR_PTR_LITERAL(231, 117, 125, 112, 51, 55, 57, 204)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__9 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__9_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofInt"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__10 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__10_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__5_value),LEAN_SCALAR_PTR_LITERAL(118, 132, 69, 23, 118, 186, 30, 188)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__10_value),LEAN_SCALAR_PTR_LITERAL(213, 162, 111, 148, 162, 163, 105, 18)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__11 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__11_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ofString"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__12 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__12_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__5_value),LEAN_SCALAR_PTR_LITERAL(118, 132, 69, 23, 118, 186, 30, 188)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(218, 187, 198, 144, 107, 222, 189, 173)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__13 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__13_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofName"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__14 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__14_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__15_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__5_value),LEAN_SCALAR_PTR_LITERAL(118, 132, 69, 23, 118, 186, 30, 188)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__15_value_aux_1),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__14_value),LEAN_SCALAR_PTR_LITERAL(99, 144, 20, 164, 82, 146, 48, 233)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__15 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instBool;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instNat;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instInt;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instString;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instName;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instProd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instProd(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__5_value),LEAN_SCALAR_PTR_LITERAL(118, 132, 69, 23, 118, 186, 30, 188)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instDataValue;
static lean_once_cell_t l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__0_value;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\nof type `"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__3;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__4;
static const lean_string_object l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__5 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__5_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__0 = (const lean_object*)&l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "negSucc"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 236, 205, 0, 179, 53, 99, 201)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__1_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__8_value),LEAN_SCALAR_PTR_LITERAL(192, 66, 133, 102, 95, 170, 134, 92)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__2 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Could not evaluate the expression"};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(125, 112, 129, 141, 33, 112, 200, 209)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 54, 189, 64, 249, 49, 198, 116)}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExprCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExprCore___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instBool;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instNat;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instInt;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instString;
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instName;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instList___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instList___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instArray(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_ConfigEval_EvalExpr_instDataValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instDataValue___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_instDataValue___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ConfigEval_EvalExpr_instDataValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_instDataValue___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instDataValue___closed__1 = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_instDataValue___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instDataValue = (const lean_object*)&l_Lean_Elab_ConfigEval_EvalExpr_instDataValue___closed__1_value;
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___boxed(lean_object* v_00_u03b1_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0(v_00_u03b1_18_, v___y_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_);
lean_dec(v___y_24_);
lean_dec_ref(v___y_23_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
lean_dec(v___y_20_);
lean_dec_ref(v___y_19_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___lam__0(lean_object* v_00___27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_){
_start:
{
uint8_t v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_35_ = 1;
v___x_36_ = lean_box(v___x_35_);
v___x_37_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_37_, 0, v___x_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___lam__0___boxed(lean_object* v_00___38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___lam__0(v_00___38_, v___y_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_);
lean_dec(v___y_44_);
lean_dec_ref(v___y_43_);
lean_dec(v___y_42_);
lean_dec_ref(v___y_41_);
lean_dec(v___y_40_);
lean_dec_ref(v___y_39_);
return v_res_46_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__2(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_50_ = lean_box(0);
v___x_51_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__1));
v___x_52_ = l_Lean_mkConst(v___x_51_, v___x_50_);
return v___x_52_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__3(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__2);
v___x_54_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_54_, 0, v___x_53_);
return v___x_54_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__6(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_59_ = lean_box(0);
v___x_60_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__5));
v___x_61_ = l_Lean_mkConst(v___x_60_, v___x_59_);
return v___x_61_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__9(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_66_ = lean_box(0);
v___x_67_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__8));
v___x_68_ = l_Lean_mkConst(v___x_67_, v___x_66_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx(lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_){
_start:
{
lean_object* v_toCold_90_; lean_object* v_currRecDepth_91_; lean_object* v_ref_92_; uint16_t v_optionFlags_93_; uint8_t v_suppressElabErrors_94_; uint8_t v_checkDeprecated_95_; uint8_t v_isRecordingDeps_96_; lean_object* v___x_97_; uint8_t v___y_99_; lean_object* v___y_100_; uint8_t v_a_128_; lean_object* v___y_131_; lean_object* v___x_145_; lean_object* v_ref_146_; lean_object* v___x_147_; lean_object* v___x_151_; lean_object* v_id_152_; lean_object* v___x_153_; uint8_t v___x_154_; 
v_toCold_90_ = lean_ctor_get(v_a_87_, 0);
v_currRecDepth_91_ = lean_ctor_get(v_a_87_, 1);
v_ref_92_ = lean_ctor_get(v_a_87_, 2);
v_optionFlags_93_ = lean_ctor_get_uint16(v_a_87_, sizeof(void*)*3);
v_suppressElabErrors_94_ = lean_ctor_get_uint8(v_a_87_, sizeof(void*)*3 + 2);
v_checkDeprecated_95_ = lean_ctor_get_uint8(v_a_87_, sizeof(void*)*3 + 3);
v_isRecordingDeps_96_ = lean_ctor_get_uint8(v_a_87_, sizeof(void*)*3 + 4);
v___x_97_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__3);
lean_inc(v_a_82_);
v___x_145_ = l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(v_a_82_);
v_ref_146_ = l_Lean_replaceRef(v_a_82_, v_ref_92_);
lean_inc(v_currRecDepth_91_);
lean_inc_ref(v_toCold_90_);
v___x_147_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_147_, 0, v_toCold_90_);
lean_ctor_set(v___x_147_, 1, v_currRecDepth_91_);
lean_ctor_set(v___x_147_, 2, v_ref_146_);
lean_ctor_set_uint16(v___x_147_, sizeof(void*)*3, v_optionFlags_93_);
lean_ctor_set_uint8(v___x_147_, sizeof(void*)*3 + 2, v_suppressElabErrors_94_);
lean_ctor_set_uint8(v___x_147_, sizeof(void*)*3 + 3, v_checkDeprecated_95_);
lean_ctor_set_uint8(v___x_147_, sizeof(void*)*3 + 4, v_isRecordingDeps_96_);
v___x_151_ = l_Lean_Syntax_getId(v___x_145_);
v_id_152_ = l_Lean_Name_eraseMacroScopes(v___x_151_);
lean_dec(v___x_151_);
v___x_153_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__10));
v___x_154_ = lean_name_eq(v_id_152_, v___x_153_);
if (v___x_154_ == 0)
{
lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_155_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__8));
v___x_156_ = lean_name_eq(v_id_152_, v___x_155_);
if (v___x_156_ == 0)
{
lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_157_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__11));
v___x_158_ = lean_name_eq(v_id_152_, v___x_157_);
if (v___x_158_ == 0)
{
lean_object* v___x_159_; uint8_t v___x_160_; 
v___x_159_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__5));
v___x_160_ = lean_name_eq(v_id_152_, v___x_159_);
lean_dec(v_id_152_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_161_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16));
lean_inc(v___x_145_);
v___x_162_ = l_Lean_Syntax_isOfKind(v___x_145_, v___x_161_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; 
lean_dec_ref_known(v___x_147_, 3);
lean_dec(v___x_145_);
v___x_163_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_131_ = v___x_163_;
goto v___jp_130_;
}
else
{
lean_object* v___x_164_; lean_object* v___x_165_; uint8_t v___x_166_; 
v___x_164_ = lean_unsigned_to_nat(1u);
v___x_165_ = l_Lean_Syntax_getArg(v___x_145_, v___x_164_);
lean_dec(v___x_145_);
v___x_166_ = l_Lean_Syntax_matchesIdent(v___x_165_, v___x_153_);
if (v___x_166_ == 0)
{
uint8_t v___x_167_; 
lean_dec_ref_known(v___x_147_, 3);
v___x_167_ = l_Lean_Syntax_matchesIdent(v___x_165_, v___x_157_);
lean_dec(v___x_165_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; 
v___x_168_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_131_ = v___x_168_;
goto v___jp_130_;
}
else
{
v_a_128_ = v___x_156_;
goto v___jp_127_;
}
}
else
{
lean_object* v___x_169_; lean_object* v___x_170_; 
lean_dec(v___x_165_);
v___x_169_ = lean_box(0);
v___x_170_ = l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___lam__0(v___x_169_, v_a_83_, v_a_84_, v_a_85_, v_a_86_, v___x_147_, v_a_88_);
lean_dec_ref_known(v___x_147_, 3);
v___y_131_ = v___x_170_;
goto v___jp_130_;
}
}
}
else
{
lean_dec_ref_known(v___x_147_, 3);
lean_dec(v___x_145_);
v_a_128_ = v___x_156_;
goto v___jp_127_;
}
}
else
{
lean_dec(v_id_152_);
lean_dec_ref_known(v___x_147_, 3);
lean_dec(v___x_145_);
v_a_128_ = v___x_156_;
goto v___jp_127_;
}
}
else
{
lean_dec(v_id_152_);
lean_dec(v___x_145_);
goto v___jp_148_;
}
}
else
{
lean_dec(v_id_152_);
lean_dec(v___x_145_);
goto v___jp_148_;
}
v___jp_98_:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v_infoState_104_; uint8_t v_enabled_105_; 
v___x_101_ = lean_box(v___y_99_);
lean_inc_ref(v___y_100_);
v___x_102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
lean_ctor_set(v___x_102_, 1, v___y_100_);
v___x_103_ = lean_st_ref_get(v_a_88_);
v_infoState_104_ = lean_ctor_get(v___x_103_, 8);
lean_inc_ref(v_infoState_104_);
lean_dec(v___x_103_);
v_enabled_105_ = lean_ctor_get_uint8(v_infoState_104_, sizeof(void*)*3);
lean_dec_ref(v_infoState_104_);
if (v_enabled_105_ == 0)
{
lean_object* v___x_106_; 
lean_dec(v_a_82_);
v___x_106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_106_, 0, v___x_102_);
return v___x_106_;
}
else
{
lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; lean_object* v___x_110_; 
v___x_107_ = lean_box(0);
v___x_108_ = lean_box(0);
v___x_109_ = 0;
lean_inc_ref(v___y_100_);
v___x_110_ = l_Lean_Elab_Term_addTermInfo_x27(v_a_82_, v___y_100_, v___x_97_, v___x_107_, v___x_108_, v___x_109_, v___x_109_, v_a_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_, v_a_88_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_117_; 
v_isSharedCheck_117_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_117_ == 0)
{
lean_object* v_unused_118_; 
v_unused_118_ = lean_ctor_get(v___x_110_, 0);
lean_dec(v_unused_118_);
v___x_112_ = v___x_110_;
v_isShared_113_ = v_isSharedCheck_117_;
goto v_resetjp_111_;
}
else
{
lean_dec(v___x_110_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_117_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_115_; 
if (v_isShared_113_ == 0)
{
lean_ctor_set(v___x_112_, 0, v___x_102_);
v___x_115_ = v___x_112_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v___x_102_);
v___x_115_ = v_reuseFailAlloc_116_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
return v___x_115_;
}
}
}
else
{
lean_object* v_a_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_126_; 
lean_dec_ref_known(v___x_102_, 2);
v_a_119_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_126_ == 0)
{
v___x_121_ = v___x_110_;
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_a_119_);
lean_dec(v___x_110_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_124_; 
if (v_isShared_122_ == 0)
{
v___x_124_ = v___x_121_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v_a_119_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
}
}
v___jp_127_:
{
lean_object* v___x_129_; 
v___x_129_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__6, &l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__6);
v___y_99_ = v_a_128_;
v___y_100_ = v___x_129_;
goto v___jp_98_;
}
v___jp_130_:
{
if (lean_obj_tag(v___y_131_) == 0)
{
lean_object* v_a_132_; uint8_t v___x_133_; 
v_a_132_ = lean_ctor_get(v___y_131_, 0);
lean_inc(v_a_132_);
lean_dec_ref_known(v___y_131_, 1);
v___x_133_ = lean_unbox(v_a_132_);
if (v___x_133_ == 0)
{
uint8_t v___x_134_; 
v___x_134_ = lean_unbox(v_a_132_);
lean_dec(v_a_132_);
v_a_128_ = v___x_134_;
goto v___jp_127_;
}
else
{
lean_object* v___x_135_; uint8_t v___x_136_; 
v___x_135_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__9);
v___x_136_ = lean_unbox(v_a_132_);
lean_dec(v_a_132_);
v___y_99_ = v___x_136_;
v___y_100_ = v___x_135_;
goto v___jp_98_;
}
}
else
{
lean_object* v_a_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_144_; 
lean_dec(v_a_82_);
v_a_137_ = lean_ctor_get(v___y_131_, 0);
v_isSharedCheck_144_ = !lean_is_exclusive(v___y_131_);
if (v_isSharedCheck_144_ == 0)
{
v___x_139_ = v___y_131_;
v_isShared_140_ = v_isSharedCheck_144_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_a_137_);
lean_dec(v___y_131_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_144_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_142_; 
if (v_isShared_140_ == 0)
{
v___x_142_ = v___x_139_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v_a_137_);
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
v___jp_148_:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = lean_box(0);
v___x_150_ = l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___lam__0(v___x_149_, v_a_83_, v_a_84_, v_a_85_, v_a_86_, v___x_147_, v_a_88_);
lean_dec_ref_known(v___x_147_, 3);
v___y_131_ = v___x_150_;
goto v___jp_130_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___boxed(lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx(v_a_171_, v_a_172_, v_a_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_);
lean_dec(v_a_177_);
lean_dec_ref(v_a_176_);
lean_dec(v_a_175_);
lean_dec_ref(v_a_174_);
lean_dec(v_a_173_);
lean_dec_ref(v_a_172_);
return v_res_179_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__2(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_183_ = lean_box(0);
v___x_184_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__1));
v___x_185_ = l_Lean_mkConst(v___x_184_, v___x_183_);
return v___x_185_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__3(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__2);
v___x_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx(lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_, lean_object* v_a_197_){
_start:
{
lean_object* v___x_199_; lean_object* v_a_201_; lean_object* v_n_228_; lean_object* v___x_229_; uint8_t v___x_230_; 
v___x_199_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__3);
lean_inc(v_a_191_);
v_n_228_ = l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(v_a_191_);
v___x_229_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__5));
lean_inc(v_n_228_);
v___x_230_ = l_Lean_Syntax_isOfKind(v_n_228_, v___x_229_);
if (v___x_230_ == 0)
{
lean_object* v___x_231_; lean_object* v_a_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_239_; 
lean_dec(v_n_228_);
lean_dec(v_a_191_);
v___x_231_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v_a_232_ = lean_ctor_get(v___x_231_, 0);
v_isSharedCheck_239_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_239_ == 0)
{
v___x_234_ = v___x_231_;
v_isShared_235_ = v_isSharedCheck_239_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_a_232_);
lean_dec(v___x_231_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_239_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___x_237_; 
if (v_isShared_235_ == 0)
{
v___x_237_ = v___x_234_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_a_232_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
}
}
}
else
{
lean_object* v___x_240_; 
v___x_240_ = l_Lean_TSyntax_getNat(v_n_228_);
lean_dec(v_n_228_);
v_a_201_ = v___x_240_;
goto v___jp_200_;
}
v___jp_200_:
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v_infoState_205_; uint8_t v_enabled_206_; 
lean_inc(v_a_201_);
v___x_202_ = l_Lean_mkNatLit(v_a_201_);
lean_inc_ref(v___x_202_);
v___x_203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_203_, 0, v_a_201_);
lean_ctor_set(v___x_203_, 1, v___x_202_);
v___x_204_ = lean_st_ref_get(v_a_197_);
v_infoState_205_ = lean_ctor_get(v___x_204_, 8);
lean_inc_ref(v_infoState_205_);
lean_dec(v___x_204_);
v_enabled_206_ = lean_ctor_get_uint8(v_infoState_205_, sizeof(void*)*3);
lean_dec_ref(v_infoState_205_);
if (v_enabled_206_ == 0)
{
lean_object* v___x_207_; 
lean_dec_ref(v___x_202_);
lean_dec(v_a_191_);
v___x_207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_207_, 0, v___x_203_);
return v___x_207_;
}
else
{
lean_object* v___x_208_; lean_object* v___x_209_; uint8_t v___x_210_; lean_object* v___x_211_; 
v___x_208_ = lean_box(0);
v___x_209_ = lean_box(0);
v___x_210_ = 0;
v___x_211_ = l_Lean_Elab_Term_addTermInfo_x27(v_a_191_, v___x_202_, v___x_199_, v___x_208_, v___x_209_, v___x_210_, v___x_210_, v_a_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_, v_a_197_);
if (lean_obj_tag(v___x_211_) == 0)
{
lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_218_; 
v_isSharedCheck_218_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_218_ == 0)
{
lean_object* v_unused_219_; 
v_unused_219_ = lean_ctor_get(v___x_211_, 0);
lean_dec(v_unused_219_);
v___x_213_ = v___x_211_;
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
else
{
lean_dec(v___x_211_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_216_; 
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 0, v___x_203_);
v___x_216_ = v___x_213_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v___x_203_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
else
{
lean_object* v_a_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_227_; 
lean_dec_ref_known(v___x_203_, 2);
v_a_220_ = lean_ctor_get(v___x_211_, 0);
v_isSharedCheck_227_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_227_ == 0)
{
v___x_222_ = v___x_211_;
v_isShared_223_ = v_isSharedCheck_227_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_a_220_);
lean_dec(v___x_211_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___boxed(lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx(v_a_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_, v_a_246_, v_a_247_);
lean_dec(v_a_247_);
lean_dec_ref(v_a_246_);
lean_dec(v_a_245_);
lean_dec_ref(v_a_244_);
lean_dec(v_a_243_);
lean_dec_ref(v_a_242_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_ConfigEval_EvalTerm_evalIntStx_spec__0(lean_object* v_a_250_){
_start:
{
lean_object* v___x_251_; 
v___x_251_ = lean_nat_to_int(v_a_250_);
return v___x_251_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2(void){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_255_ = lean_box(0);
v___x_256_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__1));
v___x_257_ = l_Lean_Expr_const___override(v___x_256_, v___x_255_);
return v___x_257_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__3(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2);
v___x_259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
return v___x_259_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__4(void){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_260_ = lean_unsigned_to_nat(0u);
v___x_261_ = lean_nat_to_int(v___x_260_);
return v___x_261_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__8(void){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_unsigned_to_nat(0u);
v___x_268_ = l_Lean_Level_ofNat(v___x_267_);
return v___x_268_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9(void){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_269_ = lean_box(0);
v___x_270_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__8, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__8_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__8);
v___x_271_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
lean_ctor_set(v___x_271_, 1, v___x_269_);
return v___x_271_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__10(void){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_272_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_273_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__7));
v___x_274_ = l_Lean_Expr_const___override(v___x_273_, v___x_272_);
return v___x_274_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__13(void){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_279_ = lean_box(0);
v___x_280_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__12));
v___x_281_ = l_Lean_Expr_const___override(v___x_280_, v___x_279_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx(lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___y_296_; lean_object* v___y_297_; lean_object* v_a_324_; lean_object* v___y_336_; lean_object* v_n_345_; lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_293_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2);
v___x_294_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__3);
lean_inc(v_a_285_);
v_n_345_ = l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(v_a_285_);
v___x_346_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__5));
lean_inc(v_n_345_);
v___x_347_ = l_Lean_Syntax_isOfKind(v_n_345_, v___x_346_);
if (v___x_347_ == 0)
{
lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_348_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__15));
lean_inc(v_n_345_);
v___x_349_ = l_Lean_Syntax_isOfKind(v_n_345_, v___x_348_);
if (v___x_349_ == 0)
{
lean_object* v___x_350_; 
lean_dec(v_n_345_);
lean_dec(v_a_285_);
v___x_350_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_336_ = v___x_350_;
goto v___jp_335_;
}
else
{
lean_object* v___x_351_; lean_object* v_n_352_; uint8_t v___x_353_; 
v___x_351_ = lean_unsigned_to_nat(1u);
v_n_352_ = l_Lean_Syntax_getArg(v_n_345_, v___x_351_);
lean_dec(v_n_345_);
lean_inc(v_n_352_);
v___x_353_ = l_Lean_Syntax_isOfKind(v_n_352_, v___x_346_);
if (v___x_353_ == 0)
{
lean_object* v___x_354_; 
lean_dec(v_n_352_);
lean_dec(v_a_285_);
v___x_354_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_336_ = v___x_354_;
goto v___jp_335_;
}
else
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_355_ = l_Lean_TSyntax_getNat(v_n_352_);
lean_dec(v_n_352_);
v___x_356_ = lean_nat_to_int(v___x_355_);
v___x_357_ = lean_int_neg(v___x_356_);
lean_dec(v___x_356_);
v_a_324_ = v___x_357_;
goto v___jp_323_;
}
}
}
else
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = l_Lean_TSyntax_getNat(v_n_345_);
lean_dec(v_n_345_);
v___x_359_ = lean_nat_to_int(v___x_358_);
v_a_324_ = v___x_359_;
goto v___jp_323_;
}
v___jp_295_:
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v_infoState_300_; uint8_t v_enabled_301_; 
lean_inc_ref(v___y_297_);
v___x_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_298_, 0, v___y_296_);
lean_ctor_set(v___x_298_, 1, v___y_297_);
v___x_299_ = lean_st_ref_get(v_a_291_);
v_infoState_300_ = lean_ctor_get(v___x_299_, 8);
lean_inc_ref(v_infoState_300_);
lean_dec(v___x_299_);
v_enabled_301_ = lean_ctor_get_uint8(v_infoState_300_, sizeof(void*)*3);
lean_dec_ref(v_infoState_300_);
if (v_enabled_301_ == 0)
{
lean_object* v___x_302_; 
lean_dec_ref(v___y_297_);
lean_dec(v_a_285_);
v___x_302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_302_, 0, v___x_298_);
return v___x_302_;
}
else
{
lean_object* v___x_303_; lean_object* v___x_304_; uint8_t v___x_305_; lean_object* v___x_306_; 
v___x_303_ = lean_box(0);
v___x_304_ = lean_box(0);
v___x_305_ = 0;
v___x_306_ = l_Lean_Elab_Term_addTermInfo_x27(v_a_285_, v___y_297_, v___x_294_, v___x_303_, v___x_304_, v___x_305_, v___x_305_, v_a_286_, v_a_287_, v_a_288_, v_a_289_, v_a_290_, v_a_291_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_313_; 
v_isSharedCheck_313_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_313_ == 0)
{
lean_object* v_unused_314_; 
v_unused_314_ = lean_ctor_get(v___x_306_, 0);
lean_dec(v_unused_314_);
v___x_308_ = v___x_306_;
v_isShared_309_ = v_isSharedCheck_313_;
goto v_resetjp_307_;
}
else
{
lean_dec(v___x_306_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_313_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
lean_object* v___x_311_; 
if (v_isShared_309_ == 0)
{
lean_ctor_set(v___x_308_, 0, v___x_298_);
v___x_311_ = v___x_308_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v___x_298_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
return v___x_311_;
}
}
}
else
{
lean_object* v_a_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_322_; 
lean_dec_ref_known(v___x_298_, 2);
v_a_315_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_322_ == 0)
{
v___x_317_ = v___x_306_;
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_dec(v___x_306_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_320_; 
if (v_isShared_318_ == 0)
{
v___x_320_ = v___x_317_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_a_315_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
}
}
v___jp_323_:
{
lean_object* v___x_325_; uint8_t v___x_326_; 
v___x_325_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__4, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__4_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__4);
v___x_326_ = lean_int_dec_le(v___x_325_, v_a_324_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_327_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__10, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__10_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__10);
v___x_328_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__13, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__13_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__13);
v___x_329_ = lean_int_neg(v_a_324_);
v___x_330_ = l_Int_toNat(v___x_329_);
lean_dec(v___x_329_);
v___x_331_ = l_Lean_instToExprInt_mkNat(v___x_330_);
v___x_332_ = l_Lean_mkApp3(v___x_327_, v___x_293_, v___x_328_, v___x_331_);
v___y_296_ = v_a_324_;
v___y_297_ = v___x_332_;
goto v___jp_295_;
}
else
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = l_Int_toNat(v_a_324_);
v___x_334_ = l_Lean_instToExprInt_mkNat(v___x_333_);
v___y_296_ = v_a_324_;
v___y_297_ = v___x_334_;
goto v___jp_295_;
}
}
v___jp_335_:
{
lean_object* v_a_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_344_; 
v_a_337_ = lean_ctor_get(v___y_336_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___y_336_);
if (v_isSharedCheck_344_ == 0)
{
v___x_339_ = v___y_336_;
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_a_337_);
lean_dec(v___y_336_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_342_; 
if (v_isShared_340_ == 0)
{
v___x_342_ = v___x_339_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v_a_337_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___boxed(lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx(v_a_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_, v_a_366_);
lean_dec(v_a_366_);
lean_dec_ref(v_a_365_);
lean_dec(v_a_364_);
lean_dec_ref(v_a_363_);
lean_dec(v_a_362_);
lean_dec_ref(v_a_361_);
return v_res_368_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__2(void){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_372_ = lean_box(0);
v___x_373_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__1));
v___x_374_ = l_Lean_mkConst(v___x_373_, v___x_372_);
return v___x_374_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__3(void){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__2);
v___x_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_376_, 0, v___x_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx(lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_){
_start:
{
lean_object* v___x_388_; lean_object* v_a_390_; lean_object* v_s_417_; lean_object* v___x_418_; uint8_t v___x_419_; 
v___x_388_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__3);
lean_inc(v_a_380_);
v_s_417_ = l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(v_a_380_);
v___x_418_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__5));
lean_inc(v_s_417_);
v___x_419_ = l_Lean_Syntax_isOfKind(v_s_417_, v___x_418_);
if (v___x_419_ == 0)
{
lean_object* v___x_420_; lean_object* v_a_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_428_; 
lean_dec(v_s_417_);
lean_dec(v_a_380_);
v___x_420_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v_a_421_ = lean_ctor_get(v___x_420_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_420_);
if (v_isSharedCheck_428_ == 0)
{
v___x_423_ = v___x_420_;
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_a_421_);
lean_dec(v___x_420_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_426_; 
if (v_isShared_424_ == 0)
{
v___x_426_ = v___x_423_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_a_421_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
else
{
lean_object* v___x_429_; 
v___x_429_ = l_Lean_TSyntax_getString(v_s_417_);
lean_dec(v_s_417_);
v_a_390_ = v___x_429_;
goto v___jp_389_;
}
v___jp_389_:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v_infoState_394_; uint8_t v_enabled_395_; 
lean_inc_ref(v_a_390_);
v___x_391_ = l_Lean_mkStrLit(v_a_390_);
lean_inc_ref(v___x_391_);
v___x_392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_392_, 0, v_a_390_);
lean_ctor_set(v___x_392_, 1, v___x_391_);
v___x_393_ = lean_st_ref_get(v_a_386_);
v_infoState_394_ = lean_ctor_get(v___x_393_, 8);
lean_inc_ref(v_infoState_394_);
lean_dec(v___x_393_);
v_enabled_395_ = lean_ctor_get_uint8(v_infoState_394_, sizeof(void*)*3);
lean_dec_ref(v_infoState_394_);
if (v_enabled_395_ == 0)
{
lean_object* v___x_396_; 
lean_dec_ref(v___x_391_);
lean_dec(v_a_380_);
v___x_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_396_, 0, v___x_392_);
return v___x_396_;
}
else
{
lean_object* v___x_397_; lean_object* v___x_398_; uint8_t v___x_399_; lean_object* v___x_400_; 
v___x_397_ = lean_box(0);
v___x_398_ = lean_box(0);
v___x_399_ = 0;
v___x_400_ = l_Lean_Elab_Term_addTermInfo_x27(v_a_380_, v___x_391_, v___x_388_, v___x_397_, v___x_398_, v___x_399_, v___x_399_, v_a_381_, v_a_382_, v_a_383_, v_a_384_, v_a_385_, v_a_386_);
if (lean_obj_tag(v___x_400_) == 0)
{
lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_407_; 
v_isSharedCheck_407_ = !lean_is_exclusive(v___x_400_);
if (v_isSharedCheck_407_ == 0)
{
lean_object* v_unused_408_; 
v_unused_408_ = lean_ctor_get(v___x_400_, 0);
lean_dec(v_unused_408_);
v___x_402_ = v___x_400_;
v_isShared_403_ = v_isSharedCheck_407_;
goto v_resetjp_401_;
}
else
{
lean_dec(v___x_400_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_407_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
lean_object* v___x_405_; 
if (v_isShared_403_ == 0)
{
lean_ctor_set(v___x_402_, 0, v___x_392_);
v___x_405_ = v___x_402_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v___x_392_);
v___x_405_ = v_reuseFailAlloc_406_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
return v___x_405_;
}
}
}
else
{
lean_object* v_a_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_416_; 
lean_dec_ref_known(v___x_392_, 2);
v_a_409_ = lean_ctor_get(v___x_400_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_400_);
if (v_isSharedCheck_416_ == 0)
{
v___x_411_ = v___x_400_;
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_a_409_);
lean_dec(v___x_400_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_414_; 
if (v_isShared_412_ == 0)
{
v___x_414_ = v___x_411_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_a_409_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___boxed(lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx(v_a_430_, v_a_431_, v_a_432_, v_a_433_, v_a_434_, v_a_435_, v_a_436_);
lean_dec(v_a_436_);
lean_dec_ref(v_a_435_);
lean_dec(v_a_434_);
lean_dec_ref(v_a_433_);
lean_dec(v_a_432_);
lean_dec_ref(v_a_431_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3_spec__7(lean_object* v_msgData_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
lean_object* v___x_445_; lean_object* v_env_446_; uint8_t v___x_447_; lean_object* v_env_448_; lean_object* v___x_449_; lean_object* v_toCold_450_; lean_object* v_mctx_451_; lean_object* v_lctx_452_; lean_object* v_options_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_445_ = lean_st_ref_get(v___y_443_);
v_env_446_ = lean_ctor_get(v___x_445_, 0);
lean_inc_ref(v_env_446_);
lean_dec(v___x_445_);
v___x_447_ = 0;
v_env_448_ = l_Lean_Environment_setRecordingDeps(v_env_446_, v___x_447_);
v___x_449_ = lean_st_ref_get(v___y_441_);
v_toCold_450_ = lean_ctor_get(v___y_442_, 0);
v_mctx_451_ = lean_ctor_get(v___x_449_, 0);
lean_inc_ref(v_mctx_451_);
lean_dec(v___x_449_);
v_lctx_452_ = lean_ctor_get(v___y_440_, 2);
v_options_453_ = lean_ctor_get(v_toCold_450_, 2);
lean_inc_ref(v_options_453_);
lean_inc_ref(v_lctx_452_);
v___x_454_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_454_, 0, v_env_448_);
lean_ctor_set(v___x_454_, 1, v_mctx_451_);
lean_ctor_set(v___x_454_, 2, v_lctx_452_);
lean_ctor_set(v___x_454_, 3, v_options_453_);
v___x_455_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v_msgData_439_);
v___x_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3_spec__7___boxed(lean_object* v_msgData_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3_spec__7(v_msgData_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
lean_dec(v___y_459_);
lean_dec_ref(v___y_458_);
return v_res_463_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_464_; double v___x_465_; 
v___x_464_ = lean_unsigned_to_nat(0u);
v___x_465_ = lean_float_of_nat(v___x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg(lean_object* v_cls_469_, lean_object* v_msg_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_){
_start:
{
lean_object* v_ref_476_; lean_object* v___x_477_; lean_object* v_a_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_523_; 
v_ref_476_ = lean_ctor_get(v___y_473_, 2);
v___x_477_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3_spec__7(v_msg_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_);
v_a_478_ = lean_ctor_get(v___x_477_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_477_);
if (v_isSharedCheck_523_ == 0)
{
v___x_480_ = v___x_477_;
v_isShared_481_ = v_isSharedCheck_523_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_a_478_);
lean_dec(v___x_477_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_523_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v___x_482_; lean_object* v_traceState_483_; lean_object* v_env_484_; lean_object* v_nextMacroScope_485_; lean_object* v_ngen_486_; lean_object* v_auxDeclNGen_487_; lean_object* v_cache_488_; lean_object* v_recordedDeps_489_; lean_object* v_messages_490_; lean_object* v_infoState_491_; lean_object* v_snapshotTasks_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_522_; 
v___x_482_ = lean_st_ref_take(v___y_474_);
v_traceState_483_ = lean_ctor_get(v___x_482_, 4);
v_env_484_ = lean_ctor_get(v___x_482_, 0);
v_nextMacroScope_485_ = lean_ctor_get(v___x_482_, 1);
v_ngen_486_ = lean_ctor_get(v___x_482_, 2);
v_auxDeclNGen_487_ = lean_ctor_get(v___x_482_, 3);
v_cache_488_ = lean_ctor_get(v___x_482_, 5);
v_recordedDeps_489_ = lean_ctor_get(v___x_482_, 6);
v_messages_490_ = lean_ctor_get(v___x_482_, 7);
v_infoState_491_ = lean_ctor_get(v___x_482_, 8);
v_snapshotTasks_492_ = lean_ctor_get(v___x_482_, 9);
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_482_);
if (v_isSharedCheck_522_ == 0)
{
v___x_494_ = v___x_482_;
v_isShared_495_ = v_isSharedCheck_522_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_snapshotTasks_492_);
lean_inc(v_infoState_491_);
lean_inc(v_messages_490_);
lean_inc(v_recordedDeps_489_);
lean_inc(v_cache_488_);
lean_inc(v_traceState_483_);
lean_inc(v_auxDeclNGen_487_);
lean_inc(v_ngen_486_);
lean_inc(v_nextMacroScope_485_);
lean_inc(v_env_484_);
lean_dec(v___x_482_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_522_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
uint64_t v_tid_496_; lean_object* v_traces_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_521_; 
v_tid_496_ = lean_ctor_get_uint64(v_traceState_483_, sizeof(void*)*1);
v_traces_497_ = lean_ctor_get(v_traceState_483_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v_traceState_483_);
if (v_isSharedCheck_521_ == 0)
{
v___x_499_ = v_traceState_483_;
v_isShared_500_ = v_isSharedCheck_521_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_traces_497_);
lean_dec(v_traceState_483_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_521_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_501_; lean_object* v___x_502_; double v___x_503_; uint8_t v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_512_; 
v___x_501_ = lean_box(0);
v___x_502_ = lean_box(0);
v___x_503_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__0);
v___x_504_ = 0;
v___x_505_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__1));
v___x_506_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_506_, 0, v_cls_469_);
lean_ctor_set(v___x_506_, 1, v___x_502_);
lean_ctor_set(v___x_506_, 2, v___x_505_);
lean_ctor_set_float(v___x_506_, sizeof(void*)*3, v___x_503_);
lean_ctor_set_float(v___x_506_, sizeof(void*)*3 + 8, v___x_503_);
lean_ctor_set_uint8(v___x_506_, sizeof(void*)*3 + 16, v___x_504_);
v___x_507_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__2));
v___x_508_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_508_, 0, v___x_506_);
lean_ctor_set(v___x_508_, 1, v_a_478_);
lean_ctor_set(v___x_508_, 2, v___x_507_);
lean_inc(v_ref_476_);
v___x_509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_509_, 0, v_ref_476_);
lean_ctor_set(v___x_509_, 1, v___x_508_);
v___x_510_ = l_Lean_PersistentArray_push___redArg(v_traces_497_, v___x_509_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_510_);
v___x_512_ = v___x_499_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v___x_510_);
lean_ctor_set_uint64(v_reuseFailAlloc_520_, sizeof(void*)*1, v_tid_496_);
v___x_512_ = v_reuseFailAlloc_520_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
lean_object* v___x_514_; 
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 4, v___x_512_);
v___x_514_ = v___x_494_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_env_484_);
lean_ctor_set(v_reuseFailAlloc_519_, 1, v_nextMacroScope_485_);
lean_ctor_set(v_reuseFailAlloc_519_, 2, v_ngen_486_);
lean_ctor_set(v_reuseFailAlloc_519_, 3, v_auxDeclNGen_487_);
lean_ctor_set(v_reuseFailAlloc_519_, 4, v___x_512_);
lean_ctor_set(v_reuseFailAlloc_519_, 5, v_cache_488_);
lean_ctor_set(v_reuseFailAlloc_519_, 6, v_recordedDeps_489_);
lean_ctor_set(v_reuseFailAlloc_519_, 7, v_messages_490_);
lean_ctor_set(v_reuseFailAlloc_519_, 8, v_infoState_491_);
lean_ctor_set(v_reuseFailAlloc_519_, 9, v_snapshotTasks_492_);
v___x_514_ = v_reuseFailAlloc_519_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
lean_object* v___x_515_; lean_object* v___x_517_; 
v___x_515_ = lean_st_ref_put(v___y_474_, v___x_514_);
if (v_isShared_481_ == 0)
{
lean_ctor_set(v___x_480_, 0, v___x_501_);
v___x_517_ = v___x_480_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v___x_501_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_cls_524_, lean_object* v_msg_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg(v_cls_524_, v_msg_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_);
lean_dec(v___y_529_);
lean_dec_ref(v___y_528_);
lean_dec(v___y_527_);
lean_dec_ref(v___y_526_);
return v_res_531_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5_spec__9___redArg(lean_object* v_keys_532_, lean_object* v_i_533_, lean_object* v_k_534_){
_start:
{
lean_object* v___x_535_; uint8_t v___x_536_; 
v___x_535_ = lean_array_get_size(v_keys_532_);
v___x_536_ = lean_nat_dec_lt(v_i_533_, v___x_535_);
if (v___x_536_ == 0)
{
lean_dec(v_i_533_);
return v___x_536_;
}
else
{
lean_object* v_k_x27_537_; uint8_t v___x_538_; 
v_k_x27_537_ = lean_array_fget_borrowed(v_keys_532_, v_i_533_);
v___x_538_ = l_Lean_instBEqExtraModUse_beq(v_k_534_, v_k_x27_537_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_539_ = lean_unsigned_to_nat(1u);
v___x_540_ = lean_nat_add(v_i_533_, v___x_539_);
lean_dec(v_i_533_);
v_i_533_ = v___x_540_;
goto _start;
}
else
{
lean_dec(v_i_533_);
return v___x_536_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5_spec__9___redArg___boxed(lean_object* v_keys_542_, lean_object* v_i_543_, lean_object* v_k_544_){
_start:
{
uint8_t v_res_545_; lean_object* v_r_546_; 
v_res_545_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5_spec__9___redArg(v_keys_542_, v_i_543_, v_k_544_);
lean_dec_ref(v_k_544_);
lean_dec_ref(v_keys_542_);
v_r_546_ = lean_box(v_res_545_);
return v_r_546_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5___redArg(lean_object* v_x_547_, size_t v_x_548_, lean_object* v_x_549_){
_start:
{
if (lean_obj_tag(v_x_547_) == 0)
{
lean_object* v_es_550_; lean_object* v___x_551_; size_t v___x_552_; size_t v___x_553_; lean_object* v_j_554_; lean_object* v___x_555_; 
v_es_550_ = lean_ctor_get(v_x_547_, 0);
v___x_551_ = lean_box(2);
v___x_552_ = ((size_t)31ULL);
v___x_553_ = lean_usize_land(v_x_548_, v___x_552_);
v_j_554_ = lean_usize_to_nat(v___x_553_);
v___x_555_ = lean_array_get_borrowed(v___x_551_, v_es_550_, v_j_554_);
lean_dec(v_j_554_);
switch(lean_obj_tag(v___x_555_))
{
case 0:
{
lean_object* v_key_556_; uint8_t v___x_557_; 
v_key_556_ = lean_ctor_get(v___x_555_, 0);
v___x_557_ = l_Lean_instBEqExtraModUse_beq(v_x_549_, v_key_556_);
return v___x_557_;
}
case 1:
{
lean_object* v_node_558_; size_t v___x_559_; size_t v___x_560_; 
v_node_558_ = lean_ctor_get(v___x_555_, 0);
v___x_559_ = ((size_t)5ULL);
v___x_560_ = lean_usize_shift_right(v_x_548_, v___x_559_);
v_x_547_ = v_node_558_;
v_x_548_ = v___x_560_;
goto _start;
}
default: 
{
uint8_t v___x_562_; 
v___x_562_ = 0;
return v___x_562_;
}
}
}
else
{
lean_object* v_ks_563_; lean_object* v___x_564_; uint8_t v___x_565_; 
v_ks_563_ = lean_ctor_get(v_x_547_, 0);
v___x_564_ = lean_unsigned_to_nat(0u);
v___x_565_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5_spec__9___redArg(v_ks_563_, v___x_564_, v_x_549_);
return v___x_565_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_x_566_, lean_object* v_x_567_, lean_object* v_x_568_){
_start:
{
size_t v_x_11106__boxed_569_; uint8_t v_res_570_; lean_object* v_r_571_; 
v_x_11106__boxed_569_ = lean_unbox_usize(v_x_567_);
lean_dec(v_x_567_);
v_res_570_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5___redArg(v_x_566_, v_x_11106__boxed_569_, v_x_568_);
lean_dec_ref(v_x_568_);
lean_dec_ref(v_x_566_);
v_r_571_ = lean_box(v_res_570_);
return v_r_571_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2___redArg(lean_object* v_x_572_, lean_object* v_x_573_){
_start:
{
uint64_t v___x_574_; size_t v___x_575_; uint8_t v___x_576_; 
v___x_574_ = l_Lean_instHashableExtraModUse_hash(v_x_573_);
v___x_575_ = lean_uint64_to_usize(v___x_574_);
v___x_576_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5___redArg(v_x_572_, v___x_575_, v_x_573_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_577_, lean_object* v_x_578_){
_start:
{
uint8_t v_res_579_; lean_object* v_r_580_; 
v_res_579_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2___redArg(v_x_577_, v_x_578_);
lean_dec_ref(v_x_578_);
lean_dec_ref(v_x_577_);
v_r_580_ = lean_box(v_res_579_);
return v_r_580_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___lam__0(lean_object* v_addEntryFn_581_, lean_object* v_entry_582_, lean_object* v_s_583_){
_start:
{
lean_object* v_importedEntries_584_; lean_object* v_state_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_593_; 
v_importedEntries_584_ = lean_ctor_get(v_s_583_, 0);
v_state_585_ = lean_ctor_get(v_s_583_, 1);
v_isSharedCheck_593_ = !lean_is_exclusive(v_s_583_);
if (v_isSharedCheck_593_ == 0)
{
v___x_587_ = v_s_583_;
v_isShared_588_ = v_isSharedCheck_593_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_state_585_);
lean_inc(v_importedEntries_584_);
lean_dec(v_s_583_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_593_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v_state_589_; lean_object* v___x_591_; 
v_state_589_ = lean_apply_2(v_addEntryFn_581_, v_state_585_, v_entry_582_);
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 1, v_state_589_);
v___x_591_ = v___x_587_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_importedEntries_584_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v_state_589_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_594_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_595_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg___closed__0);
v___x_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg(){
_start:
{
lean_object* v___x_598_; 
v___x_598_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg___closed__1);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v___dummy_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg();
return v_res_600_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_601_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg___closed__0);
v___x_602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
return v___x_602_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0);
v___x_604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_604_, 0, v___x_603_);
lean_ctor_set(v___x_604_, 1, v___x_603_);
return v___x_604_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3___redArg();
return v___x_605_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_606_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0);
v___x_607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_607_, 0, v___x_606_);
lean_ctor_set(v___x_607_, 1, v___x_606_);
return v___x_607_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_608_ = lean_unsigned_to_nat(0u);
v___x_609_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0);
v___x_610_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_610_, 0, v___x_609_);
lean_ctor_set(v___x_610_, 1, v___x_609_);
lean_ctor_set(v___x_610_, 2, v___x_608_);
return v___x_610_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_611_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__4);
v___x_612_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__3);
v___x_613_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__0);
v___x_614_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2);
v___x_615_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
lean_ctor_set(v___x_615_, 1, v___x_613_);
lean_ctor_set(v___x_615_, 2, v___x_612_);
lean_ctor_set(v___x_615_, 3, v___x_613_);
lean_ctor_set(v___x_615_, 4, v___x_613_);
lean_ctor_set(v___x_615_, 5, v___x_613_);
lean_ctor_set(v___x_615_, 6, v___x_613_);
lean_ctor_set(v___x_615_, 7, v___x_611_);
return v___x_615_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_616_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__10(void){
_start:
{
lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_621_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__9));
v___x_622_ = l_Lean_stringToMessageData(v___x_621_);
return v___x_622_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__12(void){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_624_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__11));
v___x_625_ = l_Lean_stringToMessageData(v___x_624_);
return v___x_625_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__13(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_626_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg___closed__1));
v___x_627_ = l_Lean_stringToMessageData(v___x_626_);
return v___x_627_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__16(void){
_start:
{
lean_object* v_cls_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v_cls_631_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__8));
v___x_632_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__15));
v___x_633_ = l_Lean_Name_append(v___x_632_, v_cls_631_);
return v___x_633_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__18(void){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__17));
v___x_636_ = l_Lean_stringToMessageData(v___x_635_);
return v___x_636_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__20(void){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_638_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__19));
v___x_639_ = l_Lean_stringToMessageData(v___x_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0(lean_object* v_mod_644_, uint8_t v_isMeta_645_, lean_object* v_hint_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_){
_start:
{
lean_object* v___y_655_; lean_object* v___y_656_; lean_object* v___y_657_; lean_object* v___y_658_; lean_object* v___y_659_; lean_object* v___y_660_; lean_object* v___y_661_; lean_object* v___y_662_; lean_object* v___y_663_; lean_object* v___y_664_; lean_object* v___y_665_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v_env_688_; uint8_t v_isExporting_689_; lean_object* v_entry_690_; lean_object* v___y_692_; lean_object* v___y_693_; lean_object* v___x_715_; lean_object* v_env_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_686_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__6);
v___x_687_ = lean_st_ref_get(v___y_652_);
v_env_688_ = lean_ctor_get(v___x_687_, 0);
lean_inc_ref(v_env_688_);
lean_dec(v___x_687_);
v_isExporting_689_ = lean_ctor_get_uint8(v_env_688_, sizeof(void*)*13);
lean_dec_ref(v_env_688_);
lean_inc(v_mod_644_);
v_entry_690_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_690_, 0, v_mod_644_);
lean_ctor_set_uint8(v_entry_690_, sizeof(void*)*1, v_isExporting_689_);
lean_ctor_set_uint8(v_entry_690_, sizeof(void*)*1 + 1, v_isMeta_645_);
v___x_715_ = lean_st_ref_get(v___y_652_);
v_env_716_ = lean_ctor_get(v___x_715_, 0);
lean_inc_ref(v_env_716_);
lean_dec(v___x_715_);
v___x_717_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_718_ = lean_box(1);
v___x_719_ = lean_box(0);
v___x_720_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_686_, v___x_717_, v_env_716_, v___x_718_, v___x_719_);
v___x_721_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2___redArg(v___x_720_, v_entry_690_);
lean_dec(v___x_720_);
if (v___x_721_ == 0)
{
lean_object* v_toCold_722_; lean_object* v_options_723_; uint8_t v_hasTrace_724_; 
v_toCold_722_ = lean_ctor_get(v___y_651_, 0);
v_options_723_ = lean_ctor_get(v_toCold_722_, 2);
v_hasTrace_724_ = lean_ctor_get_uint8(v_options_723_, sizeof(void*)*1);
if (v_hasTrace_724_ == 0)
{
lean_dec(v_hint_646_);
lean_dec(v_mod_644_);
v___y_692_ = v___y_650_;
v___y_693_ = v___y_652_;
goto v___jp_691_;
}
else
{
lean_object* v_inheritedTraceOptions_725_; lean_object* v_cls_726_; lean_object* v___y_728_; lean_object* v___y_729_; lean_object* v___y_733_; lean_object* v___y_734_; lean_object* v___x_746_; uint8_t v___x_747_; 
v_inheritedTraceOptions_725_ = lean_ctor_get(v_toCold_722_, 11);
v_cls_726_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__8));
v___x_746_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__16);
v___x_747_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_725_, v_options_723_, v___x_746_);
if (v___x_747_ == 0)
{
lean_dec(v_hint_646_);
lean_dec(v_mod_644_);
v___y_692_ = v___y_650_;
v___y_693_ = v___y_652_;
goto v___jp_691_;
}
else
{
lean_object* v___x_748_; lean_object* v___y_750_; 
v___x_748_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__18, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__18_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__18);
if (v_isExporting_689_ == 0)
{
lean_object* v___x_757_; 
v___x_757_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__23));
v___y_750_ = v___x_757_;
goto v___jp_749_;
}
else
{
lean_object* v___x_758_; 
v___x_758_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__24));
v___y_750_ = v___x_758_;
goto v___jp_749_;
}
v___jp_749_:
{
lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
lean_inc_ref(v___y_750_);
v___x_751_ = l_Lean_stringToMessageData(v___y_750_);
v___x_752_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_752_, 0, v___x_748_);
lean_ctor_set(v___x_752_, 1, v___x_751_);
v___x_753_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__20, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__20_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__20);
v___x_754_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_754_, 0, v___x_752_);
lean_ctor_set(v___x_754_, 1, v___x_753_);
if (v_isMeta_645_ == 0)
{
lean_object* v___x_755_; 
v___x_755_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__21));
v___y_733_ = v___x_754_;
v___y_734_ = v___x_755_;
goto v___jp_732_;
}
else
{
lean_object* v___x_756_; 
v___x_756_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__22));
v___y_733_ = v___x_754_;
v___y_734_ = v___x_756_;
goto v___jp_732_;
}
}
}
v___jp_727_:
{
lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_730_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_730_, 0, v___y_728_);
lean_ctor_set(v___x_730_, 1, v___y_729_);
v___x_731_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg(v_cls_726_, v___x_730_, v___y_649_, v___y_650_, v___y_651_, v___y_652_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_dec_ref_known(v___x_731_, 1);
v___y_692_ = v___y_650_;
v___y_693_ = v___y_652_;
goto v___jp_691_;
}
else
{
lean_dec_ref_known(v_entry_690_, 1);
return v___x_731_;
}
}
v___jp_732_:
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; uint8_t v___x_741_; 
lean_inc_ref(v___y_734_);
v___x_735_ = l_Lean_stringToMessageData(v___y_734_);
v___x_736_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_736_, 0, v___y_733_);
lean_ctor_set(v___x_736_, 1, v___x_735_);
v___x_737_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__10);
v___x_738_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_738_, 0, v___x_736_);
lean_ctor_set(v___x_738_, 1, v___x_737_);
v___x_739_ = l_Lean_MessageData_ofName(v_mod_644_);
v___x_740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_740_, 0, v___x_738_);
lean_ctor_set(v___x_740_, 1, v___x_739_);
v___x_741_ = l_Lean_Name_isAnonymous(v_hint_646_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_742_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__12);
v___x_743_ = l_Lean_MessageData_ofName(v_hint_646_);
v___x_744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_742_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
v___y_728_ = v___x_740_;
v___y_729_ = v___x_744_;
goto v___jp_727_;
}
else
{
lean_object* v___x_745_; 
lean_dec(v_hint_646_);
v___x_745_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__13);
v___y_728_ = v___x_740_;
v___y_729_ = v___x_745_;
goto v___jp_727_;
}
}
}
}
else
{
lean_object* v___x_759_; lean_object* v___x_760_; 
lean_dec_ref_known(v_entry_690_, 1);
lean_dec(v_hint_646_);
lean_dec(v_mod_644_);
v___x_759_ = lean_box(0);
v___x_760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_760_, 0, v___x_759_);
return v___x_760_;
}
v___jp_654_:
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v_mctx_670_; lean_object* v_zetaDeltaFVarIds_671_; lean_object* v_postponed_672_; lean_object* v_diag_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_684_; 
v___x_666_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__1);
v___x_667_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_667_, 0, v___y_665_);
lean_ctor_set(v___x_667_, 1, v___y_662_);
lean_ctor_set(v___x_667_, 2, v___y_661_);
lean_ctor_set(v___x_667_, 3, v___y_660_);
lean_ctor_set(v___x_667_, 4, v___y_658_);
lean_ctor_set(v___x_667_, 5, v___x_666_);
lean_ctor_set(v___x_667_, 6, v___y_664_);
lean_ctor_set(v___x_667_, 7, v___y_657_);
lean_ctor_set(v___x_667_, 8, v___y_655_);
lean_ctor_set(v___x_667_, 9, v___y_656_);
v___x_668_ = lean_st_ref_put(v___y_663_, v___x_667_);
v___x_669_ = lean_st_ref_take(v___y_659_);
v_mctx_670_ = lean_ctor_get(v___x_669_, 0);
v_zetaDeltaFVarIds_671_ = lean_ctor_get(v___x_669_, 2);
v_postponed_672_ = lean_ctor_get(v___x_669_, 3);
v_diag_673_ = lean_ctor_get(v___x_669_, 4);
v_isSharedCheck_684_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_684_ == 0)
{
lean_object* v_unused_685_; 
v_unused_685_ = lean_ctor_get(v___x_669_, 1);
lean_dec(v_unused_685_);
v___x_675_ = v___x_669_;
v_isShared_676_ = v_isSharedCheck_684_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_diag_673_);
lean_inc(v_postponed_672_);
lean_inc(v_zetaDeltaFVarIds_671_);
lean_inc(v_mctx_670_);
lean_dec(v___x_669_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_684_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_680_; 
v___x_677_ = lean_box(0);
v___x_678_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__5);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 1, v___x_678_);
v___x_680_ = v___x_675_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_mctx_670_);
lean_ctor_set(v_reuseFailAlloc_683_, 1, v___x_678_);
lean_ctor_set(v_reuseFailAlloc_683_, 2, v_zetaDeltaFVarIds_671_);
lean_ctor_set(v_reuseFailAlloc_683_, 3, v_postponed_672_);
lean_ctor_set(v_reuseFailAlloc_683_, 4, v_diag_673_);
v___x_680_ = v_reuseFailAlloc_683_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_681_ = lean_st_ref_put(v___y_659_, v___x_680_);
v___x_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_682_, 0, v___x_677_);
return v___x_682_;
}
}
}
v___jp_691_:
{
lean_object* v___x_694_; lean_object* v_env_695_; lean_object* v_nextMacroScope_696_; lean_object* v_ngen_697_; lean_object* v_auxDeclNGen_698_; lean_object* v_traceState_699_; lean_object* v_recordedDeps_700_; lean_object* v_messages_701_; lean_object* v_infoState_702_; lean_object* v_snapshotTasks_703_; lean_object* v___x_704_; lean_object* v_toEnvExtension_705_; lean_object* v_addEntryFn_706_; lean_object* v_asyncMode_707_; uint8_t v_logWrites_708_; lean_object* v___f_709_; lean_object* v___x_710_; uint8_t v___x_711_; 
v___x_694_ = lean_st_ref_take(v___y_693_);
v_env_695_ = lean_ctor_get(v___x_694_, 0);
lean_inc_ref(v_env_695_);
v_nextMacroScope_696_ = lean_ctor_get(v___x_694_, 1);
lean_inc(v_nextMacroScope_696_);
v_ngen_697_ = lean_ctor_get(v___x_694_, 2);
lean_inc_ref(v_ngen_697_);
v_auxDeclNGen_698_ = lean_ctor_get(v___x_694_, 3);
lean_inc_ref(v_auxDeclNGen_698_);
v_traceState_699_ = lean_ctor_get(v___x_694_, 4);
lean_inc_ref(v_traceState_699_);
v_recordedDeps_700_ = lean_ctor_get(v___x_694_, 6);
lean_inc_ref(v_recordedDeps_700_);
v_messages_701_ = lean_ctor_get(v___x_694_, 7);
lean_inc_ref(v_messages_701_);
v_infoState_702_ = lean_ctor_get(v___x_694_, 8);
lean_inc_ref(v_infoState_702_);
v_snapshotTasks_703_ = lean_ctor_get(v___x_694_, 9);
lean_inc_ref(v_snapshotTasks_703_);
lean_dec(v___x_694_);
v___x_704_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v_toEnvExtension_705_ = lean_ctor_get(v___x_704_, 0);
v_addEntryFn_706_ = lean_ctor_get(v___x_704_, 3);
v_asyncMode_707_ = lean_ctor_get(v_toEnvExtension_705_, 2);
v_logWrites_708_ = lean_ctor_get_uint8(v_toEnvExtension_705_, sizeof(void*)*6);
lean_inc(v_addEntryFn_706_);
v___f_709_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___lam__0), 3, 2);
lean_closure_set(v___f_709_, 0, v_addEntryFn_706_);
lean_closure_set(v___f_709_, 1, v_entry_690_);
v___x_710_ = lean_box(0);
v___x_711_ = 1;
if (v_logWrites_708_ == 0)
{
lean_object* v___x_712_; 
lean_inc_ref(v_toEnvExtension_705_);
v___x_712_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_705_, v_env_695_, v___f_709_, v_asyncMode_707_, v___x_710_, v___x_711_);
v___y_655_ = v_infoState_702_;
v___y_656_ = v_snapshotTasks_703_;
v___y_657_ = v_messages_701_;
v___y_658_ = v_traceState_699_;
v___y_659_ = v___y_692_;
v___y_660_ = v_auxDeclNGen_698_;
v___y_661_ = v_ngen_697_;
v___y_662_ = v_nextMacroScope_696_;
v___y_663_ = v___y_693_;
v___y_664_ = v_recordedDeps_700_;
v___y_665_ = v___x_712_;
goto v___jp_654_;
}
else
{
lean_object* v___x_713_; lean_object* v___x_714_; 
lean_inc_ref_n(v_toEnvExtension_705_, 2);
v___x_713_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_705_, v_env_695_);
lean_dec_ref(v_env_695_);
v___x_714_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_705_, v___x_713_, v___f_709_, v_asyncMode_707_, v___x_710_, v___x_711_);
v___y_655_ = v_infoState_702_;
v___y_656_ = v_snapshotTasks_703_;
v___y_657_ = v_messages_701_;
v___y_658_ = v_traceState_699_;
v___y_659_ = v___y_692_;
v___y_660_ = v_auxDeclNGen_698_;
v___y_661_ = v_ngen_697_;
v___y_662_ = v_nextMacroScope_696_;
v___y_663_ = v___y_693_;
v___y_664_ = v_recordedDeps_700_;
v___y_665_ = v___x_714_;
goto v___jp_654_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___boxed(lean_object* v_mod_761_, lean_object* v_isMeta_762_, lean_object* v_hint_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_){
_start:
{
uint8_t v_isMeta_boxed_771_; lean_object* v_res_772_; 
v_isMeta_boxed_771_ = lean_unbox(v_isMeta_762_);
v_res_772_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0(v_mod_761_, v_isMeta_boxed_771_, v_hint_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
lean_dec(v___y_767_);
lean_dec_ref(v___y_766_);
lean_dec(v___y_765_);
lean_dec_ref(v___y_764_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__1(lean_object* v___x_773_, lean_object* v_declName_774_, lean_object* v_as_775_, size_t v_sz_776_, size_t v_i_777_, lean_object* v_b_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
uint8_t v___x_786_; 
v___x_786_ = lean_usize_dec_lt(v_i_777_, v_sz_776_);
if (v___x_786_ == 0)
{
lean_object* v___x_787_; 
lean_dec(v_declName_774_);
v___x_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_787_, 0, v_b_778_);
return v___x_787_;
}
else
{
lean_object* v___x_788_; lean_object* v_modules_789_; lean_object* v___x_790_; lean_object* v_a_791_; lean_object* v___x_792_; lean_object* v_toImport_793_; lean_object* v_module_794_; lean_object* v___x_795_; uint8_t v___x_796_; lean_object* v___x_797_; 
v___x_788_ = l_Lean_Environment_header(v___x_773_);
v_modules_789_ = lean_ctor_get(v___x_788_, 3);
lean_inc_ref(v_modules_789_);
lean_dec_ref(v___x_788_);
v___x_790_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_791_ = lean_array_uget_borrowed(v_as_775_, v_i_777_);
v___x_792_ = lean_array_get(v___x_790_, v_modules_789_, v_a_791_);
lean_dec_ref(v_modules_789_);
v_toImport_793_ = lean_ctor_get(v___x_792_, 0);
lean_inc_ref(v_toImport_793_);
lean_dec(v___x_792_);
v_module_794_ = lean_ctor_get(v_toImport_793_, 0);
lean_inc(v_module_794_);
lean_dec_ref(v_toImport_793_);
v___x_795_ = lean_box(0);
v___x_796_ = 0;
lean_inc(v_declName_774_);
v___x_797_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0(v_module_794_, v___x_796_, v_declName_774_, v___y_779_, v___y_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_);
if (lean_obj_tag(v___x_797_) == 0)
{
size_t v___x_798_; size_t v___x_799_; 
lean_dec_ref_known(v___x_797_, 1);
v___x_798_ = ((size_t)1ULL);
v___x_799_ = lean_usize_add(v_i_777_, v___x_798_);
v_i_777_ = v___x_799_;
v_b_778_ = v___x_795_;
goto _start;
}
else
{
lean_dec(v_declName_774_);
return v___x_797_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__1___boxed(lean_object* v___x_801_, lean_object* v_declName_802_, lean_object* v_as_803_, lean_object* v_sz_804_, lean_object* v_i_805_, lean_object* v_b_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_){
_start:
{
size_t v_sz_boxed_814_; size_t v_i_boxed_815_; lean_object* v_res_816_; 
v_sz_boxed_814_ = lean_unbox_usize(v_sz_804_);
lean_dec(v_sz_804_);
v_i_boxed_815_ = lean_unbox_usize(v_i_805_);
lean_dec(v_i_805_);
v_res_816_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__1(v___x_801_, v_declName_802_, v_as_803_, v_sz_boxed_814_, v_i_boxed_815_, v_b_806_, v___y_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_);
lean_dec(v___y_812_);
lean_dec_ref(v___y_811_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
lean_dec_ref(v_as_803_);
lean_dec_ref(v___x_801_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6___redArg(lean_object* v_a_817_, lean_object* v_x_818_){
_start:
{
if (lean_obj_tag(v_x_818_) == 0)
{
lean_object* v___x_819_; 
v___x_819_ = lean_box(0);
return v___x_819_;
}
else
{
lean_object* v_key_820_; lean_object* v_value_821_; lean_object* v_tail_822_; uint8_t v___x_823_; 
v_key_820_ = lean_ctor_get(v_x_818_, 0);
v_value_821_ = lean_ctor_get(v_x_818_, 1);
v_tail_822_ = lean_ctor_get(v_x_818_, 2);
v___x_823_ = lean_name_eq(v_key_820_, v_a_817_);
if (v___x_823_ == 0)
{
v_x_818_ = v_tail_822_;
goto _start;
}
else
{
lean_object* v___x_825_; 
lean_inc(v_value_821_);
v___x_825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_825_, 0, v_value_821_);
return v___x_825_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6___redArg___boxed(lean_object* v_a_826_, lean_object* v_x_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6___redArg(v_a_826_, v_x_827_);
lean_dec(v_x_827_);
lean_dec(v_a_826_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2___redArg(lean_object* v_m_829_, lean_object* v_a_830_){
_start:
{
lean_object* v_buckets_831_; lean_object* v___x_832_; uint64_t v___y_834_; 
v_buckets_831_ = lean_ctor_get(v_m_829_, 1);
v___x_832_ = lean_array_get_size(v_buckets_831_);
if (lean_obj_tag(v_a_830_) == 0)
{
uint64_t v___x_848_; 
v___x_848_ = 1723ULL;
v___y_834_ = v___x_848_;
goto v___jp_833_;
}
else
{
uint64_t v_hash_849_; 
v_hash_849_ = lean_ctor_get_uint64(v_a_830_, sizeof(void*)*2);
v___y_834_ = v_hash_849_;
goto v___jp_833_;
}
v___jp_833_:
{
uint64_t v___x_835_; uint64_t v___x_836_; uint64_t v_fold_837_; uint64_t v___x_838_; uint64_t v___x_839_; uint64_t v___x_840_; size_t v___x_841_; size_t v___x_842_; size_t v___x_843_; size_t v___x_844_; size_t v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_835_ = 32ULL;
v___x_836_ = lean_uint64_shift_right(v___y_834_, v___x_835_);
v_fold_837_ = lean_uint64_xor(v___y_834_, v___x_836_);
v___x_838_ = 16ULL;
v___x_839_ = lean_uint64_shift_right(v_fold_837_, v___x_838_);
v___x_840_ = lean_uint64_xor(v_fold_837_, v___x_839_);
v___x_841_ = lean_uint64_to_usize(v___x_840_);
v___x_842_ = lean_usize_of_nat(v___x_832_);
v___x_843_ = ((size_t)1ULL);
v___x_844_ = lean_usize_sub(v___x_842_, v___x_843_);
v___x_845_ = lean_usize_land(v___x_841_, v___x_844_);
v___x_846_ = lean_array_uget_borrowed(v_buckets_831_, v___x_845_);
v___x_847_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6___redArg(v_a_830_, v___x_846_);
return v___x_847_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2___redArg___boxed(lean_object* v_m_850_, lean_object* v_a_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2___redArg(v_m_850_, v_a_851_);
lean_dec(v_a_851_);
lean_dec_ref(v_m_850_);
return v_res_852_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__0(void){
_start:
{
lean_object* v___x_853_; 
v___x_853_ = l_Std_HashMap_instInhabited___redArg();
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0(lean_object* v_declName_856_, uint8_t v_isMeta_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v_env_870_; lean_object* v___y_872_; lean_object* v___x_885_; 
v___x_865_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__0);
v___x_866_ = lean_st_ref_get(v___y_863_);
v_env_870_ = lean_ctor_get(v___x_866_, 0);
lean_inc_ref(v_env_870_);
lean_dec(v___x_866_);
v___x_885_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_870_, v_declName_856_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_dec_ref(v_env_870_);
lean_dec(v_declName_856_);
goto v___jp_867_;
}
else
{
lean_object* v_val_886_; lean_object* v___x_887_; lean_object* v_modules_888_; lean_object* v___x_889_; uint8_t v___x_890_; 
v_val_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_val_886_);
lean_dec_ref_known(v___x_885_, 1);
v___x_887_ = l_Lean_Environment_header(v_env_870_);
v_modules_888_ = lean_ctor_get(v___x_887_, 3);
lean_inc_ref(v_modules_888_);
lean_dec_ref(v___x_887_);
v___x_889_ = lean_array_get_size(v_modules_888_);
v___x_890_ = lean_nat_dec_lt(v_val_886_, v___x_889_);
if (v___x_890_ == 0)
{
lean_dec_ref(v_modules_888_);
lean_dec(v_val_886_);
lean_dec_ref(v_env_870_);
lean_dec(v_declName_856_);
goto v___jp_867_;
}
else
{
lean_object* v___x_891_; lean_object* v___x_892_; uint8_t v___y_894_; 
v___x_891_ = lean_array_fget(v_modules_888_, v_val_886_);
lean_dec(v_val_886_);
lean_dec_ref(v_modules_888_);
v___x_892_ = lean_st_ref_get(v___y_863_);
if (v_isMeta_857_ == 0)
{
lean_dec(v___x_892_);
v___y_894_ = v_isMeta_857_;
goto v___jp_893_;
}
else
{
lean_object* v_env_905_; uint8_t v___x_906_; 
v_env_905_ = lean_ctor_get(v___x_892_, 0);
lean_inc_ref(v_env_905_);
lean_dec(v___x_892_);
lean_inc(v_declName_856_);
v___x_906_ = l_Lean_isMarkedMeta(v_env_905_, v_declName_856_);
if (v___x_906_ == 0)
{
v___y_894_ = v_isMeta_857_;
goto v___jp_893_;
}
else
{
uint8_t v___x_907_; 
v___x_907_ = 0;
v___y_894_ = v___x_907_;
goto v___jp_893_;
}
}
v___jp_893_:
{
lean_object* v_toImport_895_; lean_object* v_module_896_; lean_object* v___x_897_; 
v_toImport_895_ = lean_ctor_get(v___x_891_, 0);
lean_inc_ref(v_toImport_895_);
lean_dec(v___x_891_);
v_module_896_ = lean_ctor_get(v_toImport_895_, 0);
lean_inc(v_module_896_);
lean_dec_ref(v_toImport_895_);
lean_inc(v_declName_856_);
v___x_897_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0(v_module_896_, v___y_894_, v_declName_856_, v___y_858_, v___y_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
lean_dec_ref_known(v___x_897_, 1);
v___x_898_ = l_Lean_indirectModUseExt;
v___x_899_ = lean_box(1);
v___x_900_ = lean_box(0);
lean_inc_ref(v_env_870_);
v___x_901_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_865_, v___x_898_, v_env_870_, v___x_899_, v___x_900_);
v___x_902_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2___redArg(v___x_901_, v_declName_856_);
lean_dec(v___x_901_);
if (lean_obj_tag(v___x_902_) == 0)
{
lean_object* v___x_903_; 
v___x_903_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___closed__1));
v___y_872_ = v___x_903_;
goto v___jp_871_;
}
else
{
lean_object* v_val_904_; 
v_val_904_ = lean_ctor_get(v___x_902_, 0);
lean_inc(v_val_904_);
lean_dec_ref_known(v___x_902_, 1);
v___y_872_ = v_val_904_;
goto v___jp_871_;
}
}
else
{
lean_dec_ref(v_env_870_);
lean_dec(v_declName_856_);
return v___x_897_;
}
}
}
}
v___jp_867_:
{
lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_868_ = lean_box(0);
v___x_869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_869_, 0, v___x_868_);
return v___x_869_;
}
v___jp_871_:
{
lean_object* v___x_873_; size_t v_sz_874_; size_t v___x_875_; lean_object* v___x_876_; 
v___x_873_ = lean_box(0);
v_sz_874_ = lean_array_size(v___y_872_);
v___x_875_ = ((size_t)0ULL);
v___x_876_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__1(v_env_870_, v_declName_856_, v___y_872_, v_sz_874_, v___x_875_, v___x_873_, v___y_858_, v___y_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_);
lean_dec_ref(v___y_872_);
lean_dec_ref(v_env_870_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_883_; 
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_883_ == 0)
{
lean_object* v_unused_884_; 
v_unused_884_ = lean_ctor_get(v___x_876_, 0);
lean_dec(v_unused_884_);
v___x_878_ = v___x_876_;
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
else
{
lean_dec(v___x_876_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_881_; 
if (v_isShared_879_ == 0)
{
lean_ctor_set(v___x_878_, 0, v___x_873_);
v___x_881_ = v___x_878_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v___x_873_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
else
{
return v___x_876_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0___boxed(lean_object* v_declName_908_, lean_object* v_isMeta_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_){
_start:
{
uint8_t v_isMeta_boxed_917_; lean_object* v_res_918_; 
v_isMeta_boxed_917_ = lean_unbox(v_isMeta_909_);
v_res_918_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0(v_declName_908_, v_isMeta_boxed_917_, v___y_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_);
lean_dec(v___y_915_);
lean_dec_ref(v___y_914_);
lean_dec(v___y_913_);
lean_dec_ref(v___y_912_);
lean_dec(v___y_911_);
lean_dec_ref(v___y_910_);
return v_res_918_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__0(lean_object* v___x_919_, lean_object* v___x_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_){
_start:
{
lean_object* v___x_928_; 
v___x_928_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v___x_919_, v___x_920_, v___y_925_, v___y_926_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v_a_929_; uint8_t v___x_930_; lean_object* v___x_931_; 
v_a_929_ = lean_ctor_get(v___x_928_, 0);
lean_inc_n(v_a_929_, 2);
lean_dec_ref_known(v___x_928_, 1);
v___x_930_ = 0;
v___x_931_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0(v_a_929_, v___x_930_, v___y_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_938_; 
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_938_ == 0)
{
lean_object* v_unused_939_; 
v_unused_939_ = lean_ctor_get(v___x_931_, 0);
lean_dec(v_unused_939_);
v___x_933_ = v___x_931_;
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
else
{
lean_dec(v___x_931_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_936_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 0, v_a_929_);
v___x_936_ = v___x_933_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_a_929_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
}
else
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
lean_dec(v_a_929_);
v_a_940_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_931_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_931_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_940_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
}
else
{
return v___x_928_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__0___boxed(lean_object* v___x_948_, lean_object* v___x_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__0(v___x_948_, v___x_949_, v___y_950_, v___y_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_);
lean_dec(v___y_955_);
lean_dec_ref(v___y_954_);
lean_dec(v___y_953_);
lean_dec_ref(v___y_952_);
lean_dec(v___y_951_);
lean_dec_ref(v___y_950_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg___lam__0(lean_object* v___y_958_, uint8_t v_isExporting_959_, lean_object* v___x_960_, lean_object* v___y_961_, lean_object* v___x_962_, lean_object* v_a_x3f_963_){
_start:
{
lean_object* v___x_965_; lean_object* v_env_966_; lean_object* v_nextMacroScope_967_; lean_object* v_ngen_968_; lean_object* v_auxDeclNGen_969_; lean_object* v_traceState_970_; lean_object* v_recordedDeps_971_; lean_object* v_messages_972_; lean_object* v_infoState_973_; lean_object* v_snapshotTasks_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_999_; 
v___x_965_ = lean_st_ref_take(v___y_958_);
v_env_966_ = lean_ctor_get(v___x_965_, 0);
v_nextMacroScope_967_ = lean_ctor_get(v___x_965_, 1);
v_ngen_968_ = lean_ctor_get(v___x_965_, 2);
v_auxDeclNGen_969_ = lean_ctor_get(v___x_965_, 3);
v_traceState_970_ = lean_ctor_get(v___x_965_, 4);
v_recordedDeps_971_ = lean_ctor_get(v___x_965_, 6);
v_messages_972_ = lean_ctor_get(v___x_965_, 7);
v_infoState_973_ = lean_ctor_get(v___x_965_, 8);
v_snapshotTasks_974_ = lean_ctor_get(v___x_965_, 9);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_999_ == 0)
{
lean_object* v_unused_1000_; 
v_unused_1000_ = lean_ctor_get(v___x_965_, 5);
lean_dec(v_unused_1000_);
v___x_976_ = v___x_965_;
v_isShared_977_ = v_isSharedCheck_999_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_snapshotTasks_974_);
lean_inc(v_infoState_973_);
lean_inc(v_messages_972_);
lean_inc(v_recordedDeps_971_);
lean_inc(v_traceState_970_);
lean_inc(v_auxDeclNGen_969_);
lean_inc(v_ngen_968_);
lean_inc(v_nextMacroScope_967_);
lean_inc(v_env_966_);
lean_dec(v___x_965_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_999_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_978_; lean_object* v___x_980_; 
v___x_978_ = l_Lean_Environment_setExporting(v_env_966_, v_isExporting_959_);
if (v_isShared_977_ == 0)
{
lean_ctor_set(v___x_976_, 5, v___x_960_);
lean_ctor_set(v___x_976_, 0, v___x_978_);
v___x_980_ = v___x_976_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v___x_978_);
lean_ctor_set(v_reuseFailAlloc_998_, 1, v_nextMacroScope_967_);
lean_ctor_set(v_reuseFailAlloc_998_, 2, v_ngen_968_);
lean_ctor_set(v_reuseFailAlloc_998_, 3, v_auxDeclNGen_969_);
lean_ctor_set(v_reuseFailAlloc_998_, 4, v_traceState_970_);
lean_ctor_set(v_reuseFailAlloc_998_, 5, v___x_960_);
lean_ctor_set(v_reuseFailAlloc_998_, 6, v_recordedDeps_971_);
lean_ctor_set(v_reuseFailAlloc_998_, 7, v_messages_972_);
lean_ctor_set(v_reuseFailAlloc_998_, 8, v_infoState_973_);
lean_ctor_set(v_reuseFailAlloc_998_, 9, v_snapshotTasks_974_);
v___x_980_ = v_reuseFailAlloc_998_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v_mctx_983_; lean_object* v_zetaDeltaFVarIds_984_; lean_object* v_postponed_985_; lean_object* v_diag_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_996_; 
v___x_981_ = lean_st_ref_put(v___y_958_, v___x_980_);
v___x_982_ = lean_st_ref_take(v___y_961_);
v_mctx_983_ = lean_ctor_get(v___x_982_, 0);
v_zetaDeltaFVarIds_984_ = lean_ctor_get(v___x_982_, 2);
v_postponed_985_ = lean_ctor_get(v___x_982_, 3);
v_diag_986_ = lean_ctor_get(v___x_982_, 4);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_996_ == 0)
{
lean_object* v_unused_997_; 
v_unused_997_ = lean_ctor_get(v___x_982_, 1);
lean_dec(v_unused_997_);
v___x_988_ = v___x_982_;
v_isShared_989_ = v_isSharedCheck_996_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_diag_986_);
lean_inc(v_postponed_985_);
lean_inc(v_zetaDeltaFVarIds_984_);
lean_inc(v_mctx_983_);
lean_dec(v___x_982_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_996_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_990_; lean_object* v___x_992_; 
v___x_990_ = lean_box(0);
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 1, v___x_962_);
v___x_992_ = v___x_988_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_mctx_983_);
lean_ctor_set(v_reuseFailAlloc_995_, 1, v___x_962_);
lean_ctor_set(v_reuseFailAlloc_995_, 2, v_zetaDeltaFVarIds_984_);
lean_ctor_set(v_reuseFailAlloc_995_, 3, v_postponed_985_);
lean_ctor_set(v_reuseFailAlloc_995_, 4, v_diag_986_);
v___x_992_ = v_reuseFailAlloc_995_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_993_ = lean_st_ref_put(v___y_961_, v___x_992_);
v___x_994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_994_, 0, v___x_990_);
return v___x_994_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg___lam__0___boxed(lean_object* v___y_1001_, lean_object* v_isExporting_1002_, lean_object* v___x_1003_, lean_object* v___y_1004_, lean_object* v___x_1005_, lean_object* v_a_x3f_1006_, lean_object* v___y_1007_){
_start:
{
uint8_t v_isExporting_boxed_1008_; lean_object* v_res_1009_; 
v_isExporting_boxed_1008_ = lean_unbox(v_isExporting_1002_);
v_res_1009_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg___lam__0(v___y_1001_, v_isExporting_boxed_1008_, v___x_1003_, v___y_1004_, v___x_1005_, v_a_x3f_1006_);
lean_dec(v_a_x3f_1006_);
lean_dec(v___y_1004_);
lean_dec(v___y_1001_);
return v_res_1009_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg(lean_object* v_x_1010_, uint8_t v_isExporting_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_){
_start:
{
lean_object* v___x_1019_; lean_object* v_env_1020_; lean_object* v___x_1021_; uint8_t v_isModule_1022_; 
v___x_1019_ = lean_st_ref_get(v___y_1017_);
v_env_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc_ref(v_env_1020_);
lean_dec(v___x_1019_);
v___x_1021_ = l_Lean_Environment_header(v_env_1020_);
v_isModule_1022_ = lean_ctor_get_uint8(v___x_1021_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_1021_);
if (v_isModule_1022_ == 0)
{
lean_object* v___x_1023_; 
lean_dec_ref(v_env_1020_);
lean_inc(v___y_1017_);
lean_inc_ref(v___y_1016_);
lean_inc(v___y_1015_);
lean_inc_ref(v___y_1014_);
lean_inc(v___y_1013_);
lean_inc_ref(v___y_1012_);
v___x_1023_ = lean_apply_7(v_x_1010_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_, lean_box(0));
return v___x_1023_;
}
else
{
uint8_t v_isExporting_1024_; 
v_isExporting_1024_ = lean_ctor_get_uint8(v_env_1020_, sizeof(void*)*13);
lean_dec_ref(v_env_1020_);
if (v_isExporting_1011_ == 0)
{
if (v_isExporting_1024_ == 0)
{
lean_object* v___x_1091_; 
lean_inc(v___y_1017_);
lean_inc_ref(v___y_1016_);
lean_inc(v___y_1015_);
lean_inc_ref(v___y_1014_);
lean_inc(v___y_1013_);
lean_inc_ref(v___y_1012_);
v___x_1091_ = lean_apply_7(v_x_1010_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_, lean_box(0));
return v___x_1091_;
}
else
{
goto v___jp_1025_;
}
}
else
{
if (v_isExporting_1024_ == 0)
{
goto v___jp_1025_;
}
else
{
lean_object* v___x_1092_; 
lean_inc(v___y_1017_);
lean_inc_ref(v___y_1016_);
lean_inc(v___y_1015_);
lean_inc_ref(v___y_1014_);
lean_inc(v___y_1013_);
lean_inc_ref(v___y_1012_);
v___x_1092_ = lean_apply_7(v_x_1010_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_, lean_box(0));
return v___x_1092_;
}
}
v___jp_1025_:
{
lean_object* v___x_1026_; lean_object* v_env_1027_; lean_object* v_nextMacroScope_1028_; lean_object* v_ngen_1029_; lean_object* v_auxDeclNGen_1030_; lean_object* v_traceState_1031_; lean_object* v_recordedDeps_1032_; lean_object* v_messages_1033_; lean_object* v_infoState_1034_; lean_object* v_snapshotTasks_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1089_; 
v___x_1026_ = lean_st_ref_take(v___y_1017_);
v_env_1027_ = lean_ctor_get(v___x_1026_, 0);
v_nextMacroScope_1028_ = lean_ctor_get(v___x_1026_, 1);
v_ngen_1029_ = lean_ctor_get(v___x_1026_, 2);
v_auxDeclNGen_1030_ = lean_ctor_get(v___x_1026_, 3);
v_traceState_1031_ = lean_ctor_get(v___x_1026_, 4);
v_recordedDeps_1032_ = lean_ctor_get(v___x_1026_, 6);
v_messages_1033_ = lean_ctor_get(v___x_1026_, 7);
v_infoState_1034_ = lean_ctor_get(v___x_1026_, 8);
v_snapshotTasks_1035_ = lean_ctor_get(v___x_1026_, 9);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1089_ == 0)
{
lean_object* v_unused_1090_; 
v_unused_1090_ = lean_ctor_get(v___x_1026_, 5);
lean_dec(v_unused_1090_);
v___x_1037_ = v___x_1026_;
v_isShared_1038_ = v_isSharedCheck_1089_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_snapshotTasks_1035_);
lean_inc(v_infoState_1034_);
lean_inc(v_messages_1033_);
lean_inc(v_recordedDeps_1032_);
lean_inc(v_traceState_1031_);
lean_inc(v_auxDeclNGen_1030_);
lean_inc(v_ngen_1029_);
lean_inc(v_nextMacroScope_1028_);
lean_inc(v_env_1027_);
lean_dec(v___x_1026_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1089_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1042_; 
v___x_1039_ = l_Lean_Environment_setExporting(v_env_1027_, v_isExporting_1011_);
v___x_1040_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__1);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 5, v___x_1040_);
lean_ctor_set(v___x_1037_, 0, v___x_1039_);
v___x_1042_ = v___x_1037_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v___x_1039_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v_nextMacroScope_1028_);
lean_ctor_set(v_reuseFailAlloc_1088_, 2, v_ngen_1029_);
lean_ctor_set(v_reuseFailAlloc_1088_, 3, v_auxDeclNGen_1030_);
lean_ctor_set(v_reuseFailAlloc_1088_, 4, v_traceState_1031_);
lean_ctor_set(v_reuseFailAlloc_1088_, 5, v___x_1040_);
lean_ctor_set(v_reuseFailAlloc_1088_, 6, v_recordedDeps_1032_);
lean_ctor_set(v_reuseFailAlloc_1088_, 7, v_messages_1033_);
lean_ctor_set(v_reuseFailAlloc_1088_, 8, v_infoState_1034_);
lean_ctor_set(v_reuseFailAlloc_1088_, 9, v_snapshotTasks_1035_);
v___x_1042_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v_mctx_1045_; lean_object* v_zetaDeltaFVarIds_1046_; lean_object* v_postponed_1047_; lean_object* v_diag_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1086_; 
v___x_1043_ = lean_st_ref_put(v___y_1017_, v___x_1042_);
v___x_1044_ = lean_st_ref_take(v___y_1015_);
v_mctx_1045_ = lean_ctor_get(v___x_1044_, 0);
v_zetaDeltaFVarIds_1046_ = lean_ctor_get(v___x_1044_, 2);
v_postponed_1047_ = lean_ctor_get(v___x_1044_, 3);
v_diag_1048_ = lean_ctor_get(v___x_1044_, 4);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1086_ == 0)
{
lean_object* v_unused_1087_; 
v_unused_1087_ = lean_ctor_get(v___x_1044_, 1);
lean_dec(v_unused_1087_);
v___x_1050_ = v___x_1044_;
v_isShared_1051_ = v_isSharedCheck_1086_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_diag_1048_);
lean_inc(v_postponed_1047_);
lean_inc(v_zetaDeltaFVarIds_1046_);
lean_inc(v_mctx_1045_);
lean_dec(v___x_1044_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1086_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1052_; lean_object* v___x_1054_; 
v___x_1052_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__5);
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 1, v___x_1052_);
v___x_1054_ = v___x_1050_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_mctx_1045_);
lean_ctor_set(v_reuseFailAlloc_1085_, 1, v___x_1052_);
lean_ctor_set(v_reuseFailAlloc_1085_, 2, v_zetaDeltaFVarIds_1046_);
lean_ctor_set(v_reuseFailAlloc_1085_, 3, v_postponed_1047_);
lean_ctor_set(v_reuseFailAlloc_1085_, 4, v_diag_1048_);
v___x_1054_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
lean_object* v___x_1055_; lean_object* v_r_1056_; 
v___x_1055_ = lean_st_ref_put(v___y_1015_, v___x_1054_);
lean_inc(v___y_1017_);
lean_inc_ref(v___y_1016_);
lean_inc(v___y_1015_);
lean_inc_ref(v___y_1014_);
lean_inc(v___y_1013_);
lean_inc_ref(v___y_1012_);
v_r_1056_ = lean_apply_7(v_x_1010_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_, lean_box(0));
if (lean_obj_tag(v_r_1056_) == 0)
{
lean_object* v_a_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1073_; 
v_a_1057_ = lean_ctor_get(v_r_1056_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v_r_1056_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1059_ = v_r_1056_;
v_isShared_1060_ = v_isSharedCheck_1073_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_a_1057_);
lean_dec(v_r_1056_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1073_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1062_; 
lean_inc(v_a_1057_);
if (v_isShared_1060_ == 0)
{
lean_ctor_set_tag(v___x_1059_, 1);
v___x_1062_ = v___x_1059_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_a_1057_);
v___x_1062_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
lean_object* v___x_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1070_; 
v___x_1063_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg___lam__0(v___y_1017_, v_isExporting_1024_, v___x_1040_, v___y_1015_, v___x_1052_, v___x_1062_);
lean_dec_ref(v___x_1062_);
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1063_);
if (v_isSharedCheck_1070_ == 0)
{
lean_object* v_unused_1071_; 
v_unused_1071_ = lean_ctor_get(v___x_1063_, 0);
lean_dec(v_unused_1071_);
v___x_1065_ = v___x_1063_;
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
else
{
lean_dec(v___x_1063_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1068_; 
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 0, v_a_1057_);
v___x_1068_ = v___x_1065_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_a_1057_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
}
}
else
{
lean_object* v_a_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1083_; 
v_a_1074_ = lean_ctor_get(v_r_1056_, 0);
lean_inc(v_a_1074_);
lean_dec_ref_known(v_r_1056_, 1);
v___x_1075_ = lean_box(0);
v___x_1076_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg___lam__0(v___y_1017_, v_isExporting_1024_, v___x_1040_, v___y_1015_, v___x_1052_, v___x_1075_);
v_isSharedCheck_1083_ = !lean_is_exclusive(v___x_1076_);
if (v_isSharedCheck_1083_ == 0)
{
lean_object* v_unused_1084_; 
v_unused_1084_ = lean_ctor_get(v___x_1076_, 0);
lean_dec(v_unused_1084_);
v___x_1078_ = v___x_1076_;
v_isShared_1079_ = v_isSharedCheck_1083_;
goto v_resetjp_1077_;
}
else
{
lean_dec(v___x_1076_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1083_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v___x_1081_; 
if (v_isShared_1079_ == 0)
{
lean_ctor_set_tag(v___x_1078_, 1);
lean_ctor_set(v___x_1078_, 0, v_a_1074_);
v___x_1081_ = v___x_1078_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v_a_1074_);
v___x_1081_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
return v___x_1081_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg___boxed(lean_object* v_x_1093_, lean_object* v_isExporting_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_){
_start:
{
uint8_t v_isExporting_boxed_1102_; lean_object* v_res_1103_; 
v_isExporting_boxed_1102_ = lean_unbox(v_isExporting_1094_);
v_res_1103_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg(v_x_1093_, v_isExporting_boxed_1102_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
return v_res_1103_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1___redArg(lean_object* v_x_1104_, uint8_t v_when_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
if (v_when_1105_ == 0)
{
lean_object* v___x_1113_; 
lean_inc(v___y_1111_);
lean_inc_ref(v___y_1110_);
lean_inc(v___y_1109_);
lean_inc_ref(v___y_1108_);
lean_inc(v___y_1107_);
lean_inc_ref(v___y_1106_);
v___x_1113_ = lean_apply_7(v_x_1104_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_, lean_box(0));
return v___x_1113_;
}
else
{
uint8_t v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = 0;
v___x_1115_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg(v_x_1104_, v___x_1114_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_);
return v___x_1115_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1___redArg___boxed(lean_object* v_x_1116_, lean_object* v_when_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_){
_start:
{
uint8_t v_when_boxed_1125_; lean_object* v_res_1126_; 
v_when_boxed_1125_ = lean_unbox(v_when_1117_);
v_res_1126_ = l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1___redArg(v_x_1116_, v_when_boxed_1125_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_);
lean_dec(v___y_1123_);
lean_dec_ref(v___y_1122_);
lean_dec(v___y_1121_);
lean_dec_ref(v___y_1120_);
lean_dec(v___y_1119_);
lean_dec_ref(v___y_1118_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1(lean_object* v___x_1128_, lean_object* v___x_1129_, lean_object* v_____r_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; uint8_t v___x_1142_; 
v___x_1138_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__13));
v___x_1139_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__14));
v___x_1140_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1___closed__0));
v___x_1141_ = l_Lean_Name_mkStr4(v___x_1128_, v___x_1138_, v___x_1139_, v___x_1140_);
lean_inc(v___x_1129_);
v___x_1142_ = l_Lean_Syntax_isOfKind(v___x_1129_, v___x_1141_);
lean_dec(v___x_1141_);
if (v___x_1142_ == 0)
{
lean_object* v___x_1143_; 
lean_dec(v___x_1129_);
v___x_1143_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
return v___x_1143_;
}
else
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___f_1147_; lean_object* v___x_1148_; 
v___x_1144_ = lean_unsigned_to_nat(2u);
v___x_1145_ = l_Lean_Syntax_getArg(v___x_1129_, v___x_1144_);
lean_dec(v___x_1129_);
v___x_1146_ = lean_box(0);
v___f_1147_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__0___boxed), 9, 2);
lean_closure_set(v___f_1147_, 0, v___x_1145_);
lean_closure_set(v___f_1147_, 1, v___x_1146_);
v___x_1148_ = l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1___redArg(v___f_1147_, v___x_1142_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_);
return v___x_1148_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1___boxed(lean_object* v___x_1149_, lean_object* v___x_1150_, lean_object* v_____r_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1(v___x_1149_, v___x_1150_, v_____r_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
lean_dec(v___y_1157_);
lean_dec_ref(v___y_1156_);
lean_dec(v___y_1155_);
lean_dec_ref(v___y_1154_);
lean_dec(v___y_1153_);
lean_dec_ref(v___y_1152_);
return v_res_1159_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__2(void){
_start:
{
lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1164_ = lean_box(0);
v___x_1165_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__1));
v___x_1166_ = l_Lean_mkConst(v___x_1165_, v___x_1164_);
return v___x_1166_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__3(void){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__2);
v___x_1168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1168_, 0, v___x_1167_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx(lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_){
_start:
{
lean_object* v_toCold_1183_; lean_object* v_currRecDepth_1184_; lean_object* v_ref_1185_; uint16_t v_optionFlags_1186_; uint8_t v_suppressElabErrors_1187_; uint8_t v_checkDeprecated_1188_; uint8_t v_isRecordingDeps_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v_a_1193_; lean_object* v___y_1221_; lean_object* v___x_1231_; lean_object* v_ref_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; uint8_t v___x_1235_; 
v_toCold_1183_ = lean_ctor_get(v_a_1180_, 0);
v_currRecDepth_1184_ = lean_ctor_get(v_a_1180_, 1);
v_ref_1185_ = lean_ctor_get(v_a_1180_, 2);
v_optionFlags_1186_ = lean_ctor_get_uint16(v_a_1180_, sizeof(void*)*3);
v_suppressElabErrors_1187_ = lean_ctor_get_uint8(v_a_1180_, sizeof(void*)*3 + 2);
v_checkDeprecated_1188_ = lean_ctor_get_uint8(v_a_1180_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1189_ = lean_ctor_get_uint8(v_a_1180_, sizeof(void*)*3 + 4);
v___x_1190_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__12));
v___x_1191_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__3);
lean_inc(v_a_1175_);
v___x_1231_ = l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(v_a_1175_);
v_ref_1232_ = l_Lean_replaceRef(v_a_1175_, v_ref_1185_);
lean_inc(v_currRecDepth_1184_);
lean_inc_ref(v_toCold_1183_);
v___x_1233_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1233_, 0, v_toCold_1183_);
lean_ctor_set(v___x_1233_, 1, v_currRecDepth_1184_);
lean_ctor_set(v___x_1233_, 2, v_ref_1232_);
lean_ctor_set_uint16(v___x_1233_, sizeof(void*)*3, v_optionFlags_1186_);
lean_ctor_set_uint8(v___x_1233_, sizeof(void*)*3 + 2, v_suppressElabErrors_1187_);
lean_ctor_set_uint8(v___x_1233_, sizeof(void*)*3 + 3, v_checkDeprecated_1188_);
lean_ctor_set_uint8(v___x_1233_, sizeof(void*)*3 + 4, v_isRecordingDeps_1189_);
v___x_1234_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__5));
lean_inc(v___x_1231_);
v___x_1235_ = l_Lean_Syntax_isOfKind(v___x_1231_, v___x_1234_);
if (v___x_1235_ == 0)
{
lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1236_ = lean_box(0);
v___x_1237_ = l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1(v___x_1190_, v___x_1231_, v___x_1236_, v_a_1176_, v_a_1177_, v_a_1178_, v_a_1179_, v___x_1233_, v_a_1181_);
lean_dec_ref_known(v___x_1233_, 3);
v___y_1221_ = v___x_1237_;
goto v___jp_1220_;
}
else
{
lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1238_ = lean_unsigned_to_nat(0u);
v___x_1239_ = l_Lean_Syntax_getArg(v___x_1231_, v___x_1238_);
v___x_1240_ = l_Lean_Syntax_isNameLit_x3f(v___x_1239_);
lean_dec(v___x_1239_);
if (lean_obj_tag(v___x_1240_) == 1)
{
lean_object* v_val_1241_; 
lean_dec_ref_known(v___x_1233_, 3);
lean_dec(v___x_1231_);
v_val_1241_ = lean_ctor_get(v___x_1240_, 0);
lean_inc(v_val_1241_);
lean_dec_ref_known(v___x_1240_, 1);
v_a_1193_ = v_val_1241_;
goto v___jp_1192_;
}
else
{
lean_object* v___x_1242_; lean_object* v___x_1243_; 
lean_dec(v___x_1240_);
v___x_1242_ = lean_box(0);
v___x_1243_ = l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___lam__1(v___x_1190_, v___x_1231_, v___x_1242_, v_a_1176_, v_a_1177_, v_a_1178_, v_a_1179_, v___x_1233_, v_a_1181_);
lean_dec_ref_known(v___x_1233_, 3);
v___y_1221_ = v___x_1243_;
goto v___jp_1220_;
}
}
v___jp_1192_:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v_infoState_1197_; uint8_t v_enabled_1198_; 
lean_inc(v_a_1193_);
v___x_1194_ = l___private_Lean_ToExpr_0__Lean_Name_toExprAux(v_a_1193_);
lean_inc_ref(v___x_1194_);
v___x_1195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1195_, 0, v_a_1193_);
lean_ctor_set(v___x_1195_, 1, v___x_1194_);
v___x_1196_ = lean_st_ref_get(v_a_1181_);
v_infoState_1197_ = lean_ctor_get(v___x_1196_, 8);
lean_inc_ref(v_infoState_1197_);
lean_dec(v___x_1196_);
v_enabled_1198_ = lean_ctor_get_uint8(v_infoState_1197_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1197_);
if (v_enabled_1198_ == 0)
{
lean_object* v___x_1199_; 
lean_dec_ref(v___x_1194_);
lean_dec(v_a_1175_);
v___x_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1195_);
return v___x_1199_;
}
else
{
lean_object* v___x_1200_; lean_object* v___x_1201_; uint8_t v___x_1202_; lean_object* v___x_1203_; 
v___x_1200_ = lean_box(0);
v___x_1201_ = lean_box(0);
v___x_1202_ = 0;
v___x_1203_ = l_Lean_Elab_Term_addTermInfo_x27(v_a_1175_, v___x_1194_, v___x_1191_, v___x_1200_, v___x_1201_, v___x_1202_, v___x_1202_, v_a_1176_, v_a_1177_, v_a_1178_, v_a_1179_, v_a_1180_, v_a_1181_);
if (lean_obj_tag(v___x_1203_) == 0)
{
lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1210_; 
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1203_);
if (v_isSharedCheck_1210_ == 0)
{
lean_object* v_unused_1211_; 
v_unused_1211_ = lean_ctor_get(v___x_1203_, 0);
lean_dec(v_unused_1211_);
v___x_1205_ = v___x_1203_;
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
else
{
lean_dec(v___x_1203_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1208_; 
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 0, v___x_1195_);
v___x_1208_ = v___x_1205_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v___x_1195_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
return v___x_1208_;
}
}
}
else
{
lean_object* v_a_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1219_; 
lean_dec_ref_known(v___x_1195_, 2);
v_a_1212_ = lean_ctor_get(v___x_1203_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1203_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1214_ = v___x_1203_;
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_a_1212_);
lean_dec(v___x_1203_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1217_; 
if (v_isShared_1215_ == 0)
{
v___x_1217_ = v___x_1214_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_a_1212_);
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
v___jp_1220_:
{
if (lean_obj_tag(v___y_1221_) == 0)
{
lean_object* v_a_1222_; 
v_a_1222_ = lean_ctor_get(v___y_1221_, 0);
lean_inc(v_a_1222_);
lean_dec_ref_known(v___y_1221_, 1);
v_a_1193_ = v_a_1222_;
goto v___jp_1192_;
}
else
{
lean_object* v_a_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1230_; 
lean_dec(v_a_1175_);
v_a_1223_ = lean_ctor_get(v___y_1221_, 0);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___y_1221_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1225_ = v___y_1221_;
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_a_1223_);
lean_dec(v___y_1221_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1228_; 
if (v_isShared_1226_ == 0)
{
v___x_1228_ = v___x_1225_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_a_1223_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___boxed(lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx(v_a_1244_, v_a_1245_, v_a_1246_, v_a_1247_, v_a_1248_, v_a_1249_, v_a_1250_);
lean_dec(v_a_1250_);
lean_dec_ref(v_a_1249_);
lean_dec(v_a_1248_);
lean_dec_ref(v_a_1247_);
lean_dec(v_a_1246_);
lean_dec_ref(v_a_1245_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1(lean_object* v_00_u03b1_1253_, lean_object* v_x_1254_, uint8_t v_when_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1___redArg(v_x_1254_, v_when_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1___boxed(lean_object* v_00_u03b1_1264_, lean_object* v_x_1265_, lean_object* v_when_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
uint8_t v_when_boxed_1274_; lean_object* v_res_1275_; 
v_when_boxed_1274_ = lean_unbox(v_when_1266_);
v_res_1275_ = l_Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1(v_00_u03b1_1264_, v_x_1265_, v_when_boxed_1274_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_);
lean_dec(v___y_1272_);
lean_dec_ref(v___y_1271_);
lean_dec(v___y_1270_);
lean_dec_ref(v___y_1269_);
lean_dec(v___y_1268_);
lean_dec_ref(v___y_1267_);
return v_res_1275_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2(lean_object* v_00_u03b2_1276_, lean_object* v_m_1277_, lean_object* v_a_1278_){
_start:
{
lean_object* v___x_1279_; 
v___x_1279_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2___redArg(v_m_1277_, v_a_1278_);
return v___x_1279_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1280_, lean_object* v_m_1281_, lean_object* v_a_1282_){
_start:
{
lean_object* v_res_1283_; 
v_res_1283_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2(v_00_u03b2_1280_, v_m_1281_, v_a_1282_);
lean_dec(v_a_1282_);
lean_dec_ref(v_m_1281_);
return v_res_1283_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4(lean_object* v_00_u03b1_1284_, lean_object* v_x_1285_, uint8_t v_isExporting_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_){
_start:
{
lean_object* v___x_1294_; 
v___x_1294_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___redArg(v_x_1285_, v_isExporting_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_);
return v___x_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4___boxed(lean_object* v_00_u03b1_1295_, lean_object* v_x_1296_, lean_object* v_isExporting_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
uint8_t v_isExporting_boxed_1305_; lean_object* v_res_1306_; 
v_isExporting_boxed_1305_ = lean_unbox(v_isExporting_1297_);
v_res_1306_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__1_spec__4(v_00_u03b1_1295_, v_x_1296_, v_isExporting_boxed_1305_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
lean_dec(v___y_1299_);
lean_dec_ref(v___y_1298_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1307_){
_start:
{
lean_object* v___x_1308_; 
v___x_1308_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1___redArg(){
_start:
{
lean_object* v___x_1310_; 
v___x_1310_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2);
return v___x_1310_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v___dummy_1311_){
_start:
{
lean_object* v_res_1312_; 
v_res_1312_ = l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1___redArg();
return v_res_1312_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1313_){
_start:
{
lean_object* v___x_1314_; 
v___x_1314_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0___closed__2);
return v___x_1314_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1315_, lean_object* v_x_1316_, lean_object* v_x_1317_){
_start:
{
uint8_t v___x_1318_; 
v___x_1318_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2___redArg(v_x_1316_, v_x_1317_);
return v___x_1318_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1319_, lean_object* v_x_1320_, lean_object* v_x_1321_){
_start:
{
uint8_t v_res_1322_; lean_object* v_r_1323_; 
v_res_1322_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2(v_00_u03b2_1319_, v_x_1320_, v_x_1321_);
lean_dec_ref(v_x_1321_);
lean_dec_ref(v_x_1320_);
v_r_1323_ = lean_box(v_res_1322_);
return v_r_1323_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3(lean_object* v_cls_1324_, lean_object* v_msg_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v___x_1333_; 
v___x_1333_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___redArg(v_cls_1324_, v_msg_1325_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3___boxed(lean_object* v_cls_1334_, lean_object* v_msg_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3(v_cls_1334_, v_msg_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_);
lean_dec(v___y_1341_);
lean_dec_ref(v___y_1340_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_1344_, lean_object* v_a_1345_, lean_object* v_x_1346_){
_start:
{
lean_object* v___x_1347_; 
v___x_1347_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6___redArg(v_a_1345_, v_x_1346_);
return v___x_1347_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6___boxed(lean_object* v_00_u03b2_1348_, lean_object* v_a_1349_, lean_object* v_x_1350_){
_start:
{
lean_object* v_res_1351_; 
v_res_1351_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__2_spec__6(v_00_u03b2_1348_, v_a_1349_, v_x_1350_);
lean_dec(v_x_1350_);
lean_dec(v_a_1349_);
return v_res_1351_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_1352_, lean_object* v_x_1353_, size_t v_x_1354_, lean_object* v_x_1355_){
_start:
{
uint8_t v___x_1356_; 
v___x_1356_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5___redArg(v_x_1353_, v_x_1354_, v_x_1355_);
return v___x_1356_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_1357_, lean_object* v_x_1358_, lean_object* v_x_1359_, lean_object* v_x_1360_){
_start:
{
size_t v_x_12356__boxed_1361_; uint8_t v_res_1362_; lean_object* v_r_1363_; 
v_x_12356__boxed_1361_ = lean_unbox_usize(v_x_1359_);
lean_dec(v_x_1359_);
v_res_1362_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5(v_00_u03b2_1357_, v_x_1358_, v_x_12356__boxed_1361_, v_x_1360_);
lean_dec_ref(v_x_1360_);
lean_dec_ref(v_x_1358_);
v_r_1363_ = lean_box(v_res_1362_);
return v_r_1363_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5_spec__9(lean_object* v_00_u03b2_1364_, lean_object* v_keys_1365_, lean_object* v_vals_1366_, lean_object* v_heq_1367_, lean_object* v_i_1368_, lean_object* v_k_1369_){
_start:
{
uint8_t v___x_1370_; 
v___x_1370_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5_spec__9___redArg(v_keys_1365_, v_i_1368_, v_k_1369_);
return v___x_1370_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5_spec__9___boxed(lean_object* v_00_u03b2_1371_, lean_object* v_keys_1372_, lean_object* v_vals_1373_, lean_object* v_heq_1374_, lean_object* v_i_1375_, lean_object* v_k_1376_){
_start:
{
uint8_t v_res_1377_; lean_object* v_r_1378_; 
v_res_1377_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__2_spec__5_spec__9(v_00_u03b2_1371_, v_keys_1372_, v_vals_1373_, v_heq_1374_, v_i_1375_, v_k_1376_);
lean_dec_ref(v_k_1376_);
lean_dec_ref(v_vals_1373_);
lean_dec_ref(v_keys_1372_);
v_r_1378_ = lean_box(v_res_1377_);
return v_r_1378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0(lean_object* v___x_1380_, lean_object* v___x_1381_, lean_object* v_typeExpr_1382_, lean_object* v_x_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_){
_start:
{
lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1391_ = lean_box(0);
v___x_1392_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0___closed__0));
v___x_1393_ = l_Lean_Name_mkStr2(v___x_1380_, v___x_1392_);
v___x_1394_ = l_Lean_Expr_const___override(v___x_1393_, v___x_1381_);
v___x_1395_ = l_Lean_Expr_app___override(v___x_1394_, v_typeExpr_1382_);
v___x_1396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1396_, 0, v___x_1391_);
lean_ctor_set(v___x_1396_, 1, v___x_1395_);
v___x_1397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1397_, 0, v___x_1396_);
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0___boxed(lean_object* v___x_1398_, lean_object* v___x_1399_, lean_object* v_typeExpr_1400_, lean_object* v_x_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
lean_object* v_res_1409_; 
v_res_1409_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0(v___x_1398_, v___x_1399_, v_typeExpr_1400_, v_x_1401_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
lean_dec(v___y_1405_);
lean_dec_ref(v___y_1404_);
lean_dec(v___y_1403_);
lean_dec_ref(v___y_1402_);
return v_res_1409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1(lean_object* v_ev_1411_, lean_object* v___x_1412_, lean_object* v___x_1413_, lean_object* v_typeExpr_1414_, lean_object* v_stx_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
lean_object* v___x_1423_; 
lean_inc(v___y_1421_);
lean_inc_ref(v___y_1420_);
lean_inc(v___y_1419_);
lean_inc_ref(v___y_1418_);
lean_inc(v___y_1417_);
lean_inc_ref(v___y_1416_);
v___x_1423_ = lean_apply_8(v_ev_1411_, v_stx_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_, lean_box(0));
if (lean_obj_tag(v___x_1423_) == 0)
{
lean_object* v_a_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1445_; 
v_a_1424_ = lean_ctor_get(v___x_1423_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1423_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1426_ = v___x_1423_;
v_isShared_1427_ = v_isSharedCheck_1445_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_a_1424_);
lean_dec(v___x_1423_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1445_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v_fst_1428_; lean_object* v_snd_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1444_; 
v_fst_1428_ = lean_ctor_get(v_a_1424_, 0);
v_snd_1429_ = lean_ctor_get(v_a_1424_, 1);
v_isSharedCheck_1444_ = !lean_is_exclusive(v_a_1424_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1431_ = v_a_1424_;
v_isShared_1432_ = v_isSharedCheck_1444_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_snd_1429_);
lean_inc(v_fst_1428_);
lean_dec(v_a_1424_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1444_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1439_; 
v___x_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1433_, 0, v_fst_1428_);
v___x_1434_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1___closed__0));
v___x_1435_ = l_Lean_Name_mkStr2(v___x_1412_, v___x_1434_);
v___x_1436_ = l_Lean_Expr_const___override(v___x_1435_, v___x_1413_);
v___x_1437_ = l_Lean_mkAppB(v___x_1436_, v_typeExpr_1414_, v_snd_1429_);
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 1, v___x_1437_);
lean_ctor_set(v___x_1431_, 0, v___x_1433_);
v___x_1439_ = v___x_1431_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v___x_1433_);
lean_ctor_set(v_reuseFailAlloc_1443_, 1, v___x_1437_);
v___x_1439_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
lean_object* v___x_1441_; 
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 0, v___x_1439_);
v___x_1441_ = v___x_1426_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v___x_1439_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
}
}
else
{
lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1453_; 
lean_dec_ref(v_typeExpr_1414_);
lean_dec(v___x_1413_);
lean_dec_ref(v___x_1412_);
v_a_1446_ = lean_ctor_get(v___x_1423_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v___x_1423_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1448_ = v___x_1423_;
v_isShared_1449_ = v_isSharedCheck_1453_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1423_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1___boxed(lean_object* v_ev_1454_, lean_object* v___x_1455_, lean_object* v___x_1456_, lean_object* v_typeExpr_1457_, lean_object* v_stx_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_){
_start:
{
lean_object* v_res_1466_; 
v_res_1466_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1(v_ev_1454_, v___x_1455_, v___x_1456_, v_typeExpr_1457_, v_stx_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
lean_dec(v___y_1464_);
lean_dec_ref(v___y_1463_);
lean_dec(v___y_1462_);
lean_dec_ref(v___y_1461_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
return v_res_1466_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2(void){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; 
v___x_1470_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_1471_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__1));
v___x_1472_ = l_Lean_Expr_const___override(v___x_1471_, v___x_1470_);
return v___x_1472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg(lean_object* v_typeExpr_1483_, lean_object* v_ev_1484_, lean_object* v_stx_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_){
_start:
{
lean_object* v_toCold_1493_; lean_object* v_currRecDepth_1494_; lean_object* v_ref_1495_; uint16_t v_optionFlags_1496_; uint8_t v_suppressElabErrors_1497_; uint8_t v_checkDeprecated_1498_; uint8_t v_isRecordingDeps_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___y_1507_; lean_object* v___x_1540_; lean_object* v_ref_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; uint8_t v___x_1544_; 
v_toCold_1493_ = lean_ctor_get(v_a_1490_, 0);
v_currRecDepth_1494_ = lean_ctor_get(v_a_1490_, 1);
v_ref_1495_ = lean_ctor_get(v_a_1490_, 2);
v_optionFlags_1496_ = lean_ctor_get_uint16(v_a_1490_, sizeof(void*)*3);
v_suppressElabErrors_1497_ = lean_ctor_get_uint8(v_a_1490_, sizeof(void*)*3 + 2);
v_checkDeprecated_1498_ = lean_ctor_get_uint8(v_a_1490_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1499_ = lean_ctor_get_uint8(v_a_1490_, sizeof(void*)*3 + 4);
v___x_1500_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__0));
v___x_1501_ = lean_unsigned_to_nat(0u);
v___x_1502_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_1503_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2);
lean_inc_ref(v_typeExpr_1483_);
v___x_1504_ = l_Lean_Expr_app___override(v___x_1503_, v_typeExpr_1483_);
v___x_1505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1505_, 0, v___x_1504_);
lean_inc(v_stx_1485_);
v___x_1540_ = l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(v_stx_1485_);
v_ref_1541_ = l_Lean_replaceRef(v_stx_1485_, v_ref_1495_);
lean_inc(v_currRecDepth_1494_);
lean_inc_ref(v_toCold_1493_);
v___x_1542_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1542_, 0, v_toCold_1493_);
lean_ctor_set(v___x_1542_, 1, v_currRecDepth_1494_);
lean_ctor_set(v___x_1542_, 2, v_ref_1541_);
lean_ctor_set_uint16(v___x_1542_, sizeof(void*)*3, v_optionFlags_1496_);
lean_ctor_set_uint8(v___x_1542_, sizeof(void*)*3 + 2, v_suppressElabErrors_1497_);
lean_ctor_set_uint8(v___x_1542_, sizeof(void*)*3 + 3, v_checkDeprecated_1498_);
lean_ctor_set_uint8(v___x_1542_, sizeof(void*)*3 + 4, v_isRecordingDeps_1499_);
v___x_1543_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__3));
v___x_1544_ = l_Lean_Syntax_matchesIdent(v___x_1540_, v___x_1543_);
if (v___x_1544_ == 0)
{
lean_object* v___x_1545_; uint8_t v___x_1546_; 
v___x_1545_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__16));
lean_inc(v___x_1540_);
v___x_1546_ = l_Lean_Syntax_isOfKind(v___x_1540_, v___x_1545_);
if (v___x_1546_ == 0)
{
lean_object* v___x_1547_; uint8_t v___x_1548_; 
v___x_1547_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__5));
lean_inc(v___x_1540_);
v___x_1548_ = l_Lean_Syntax_isOfKind(v___x_1540_, v___x_1547_);
if (v___x_1548_ == 0)
{
lean_object* v___x_1549_; 
v___x_1549_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1(v_ev_1484_, v___x_1500_, v___x_1502_, v_typeExpr_1483_, v___x_1540_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v___x_1542_, v_a_1491_);
lean_dec_ref_known(v___x_1542_, 3);
v___y_1507_ = v___x_1549_;
goto v___jp_1506_;
}
else
{
lean_object* v___x_1550_; lean_object* v___x_1551_; uint8_t v___x_1552_; 
v___x_1550_ = l_Lean_Syntax_getArg(v___x_1540_, v___x_1501_);
v___x_1551_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__6));
v___x_1552_ = l_Lean_Syntax_matchesIdent(v___x_1550_, v___x_1551_);
if (v___x_1552_ == 0)
{
uint8_t v___x_1553_; 
lean_inc(v___x_1550_);
v___x_1553_ = l_Lean_Syntax_isOfKind(v___x_1550_, v___x_1545_);
if (v___x_1553_ == 0)
{
lean_object* v___x_1554_; 
lean_dec(v___x_1550_);
v___x_1554_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1(v_ev_1484_, v___x_1500_, v___x_1502_, v_typeExpr_1483_, v___x_1540_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v___x_1542_, v_a_1491_);
lean_dec_ref_known(v___x_1542_, 3);
v___y_1507_ = v___x_1554_;
goto v___jp_1506_;
}
else
{
lean_object* v___x_1555_; lean_object* v___x_1556_; uint8_t v___x_1557_; 
v___x_1555_ = lean_unsigned_to_nat(1u);
v___x_1556_ = l_Lean_Syntax_getArg(v___x_1550_, v___x_1555_);
lean_dec(v___x_1550_);
v___x_1557_ = l_Lean_Syntax_matchesIdent(v___x_1556_, v___x_1551_);
lean_dec(v___x_1556_);
if (v___x_1557_ == 0)
{
lean_object* v___x_1558_; 
v___x_1558_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1(v_ev_1484_, v___x_1500_, v___x_1502_, v_typeExpr_1483_, v___x_1540_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v___x_1542_, v_a_1491_);
lean_dec_ref_known(v___x_1542_, 3);
v___y_1507_ = v___x_1558_;
goto v___jp_1506_;
}
else
{
lean_object* v___x_1559_; uint8_t v___x_1560_; 
v___x_1559_ = l_Lean_Syntax_getArg(v___x_1540_, v___x_1555_);
lean_inc(v___x_1559_);
v___x_1560_ = l_Lean_Syntax_matchesNull(v___x_1559_, v___x_1555_);
if (v___x_1560_ == 0)
{
lean_object* v___x_1561_; 
lean_dec(v___x_1559_);
v___x_1561_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1(v_ev_1484_, v___x_1500_, v___x_1502_, v_typeExpr_1483_, v___x_1540_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v___x_1542_, v_a_1491_);
lean_dec_ref_known(v___x_1542_, 3);
v___y_1507_ = v___x_1561_;
goto v___jp_1506_;
}
else
{
lean_object* v_stx_1562_; lean_object* v___x_1563_; 
lean_dec(v___x_1540_);
v_stx_1562_ = l_Lean_Syntax_getArg(v___x_1559_, v___x_1501_);
lean_dec(v___x_1559_);
v___x_1563_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1(v_ev_1484_, v___x_1500_, v___x_1502_, v_typeExpr_1483_, v_stx_1562_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v___x_1542_, v_a_1491_);
lean_dec_ref_known(v___x_1542_, 3);
v___y_1507_ = v___x_1563_;
goto v___jp_1506_;
}
}
}
}
else
{
lean_object* v___x_1564_; lean_object* v___x_1565_; uint8_t v___x_1566_; 
lean_dec(v___x_1550_);
v___x_1564_ = lean_unsigned_to_nat(1u);
v___x_1565_ = l_Lean_Syntax_getArg(v___x_1540_, v___x_1564_);
lean_inc(v___x_1565_);
v___x_1566_ = l_Lean_Syntax_matchesNull(v___x_1565_, v___x_1564_);
if (v___x_1566_ == 0)
{
lean_object* v___x_1567_; 
lean_dec(v___x_1565_);
v___x_1567_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1(v_ev_1484_, v___x_1500_, v___x_1502_, v_typeExpr_1483_, v___x_1540_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v___x_1542_, v_a_1491_);
lean_dec_ref_known(v___x_1542_, 3);
v___y_1507_ = v___x_1567_;
goto v___jp_1506_;
}
else
{
lean_object* v_stx_1568_; lean_object* v___x_1569_; 
lean_dec(v___x_1540_);
v_stx_1568_ = l_Lean_Syntax_getArg(v___x_1565_, v___x_1501_);
lean_dec(v___x_1565_);
v___x_1569_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1(v_ev_1484_, v___x_1500_, v___x_1502_, v_typeExpr_1483_, v_stx_1568_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v___x_1542_, v_a_1491_);
lean_dec_ref_known(v___x_1542_, 3);
v___y_1507_ = v___x_1569_;
goto v___jp_1506_;
}
}
}
}
else
{
lean_object* v___x_1570_; lean_object* v___x_1571_; uint8_t v___x_1572_; 
v___x_1570_ = lean_unsigned_to_nat(1u);
v___x_1571_ = l_Lean_Syntax_getArg(v___x_1540_, v___x_1570_);
v___x_1572_ = l_Lean_Syntax_matchesIdent(v___x_1571_, v___x_1543_);
lean_dec(v___x_1571_);
if (v___x_1572_ == 0)
{
lean_object* v___x_1573_; 
v___x_1573_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__1(v_ev_1484_, v___x_1500_, v___x_1502_, v_typeExpr_1483_, v___x_1540_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v___x_1542_, v_a_1491_);
lean_dec_ref_known(v___x_1542_, 3);
v___y_1507_ = v___x_1573_;
goto v___jp_1506_;
}
else
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
lean_dec(v___x_1540_);
lean_dec_ref(v_ev_1484_);
v___x_1574_ = lean_box(0);
v___x_1575_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0(v___x_1500_, v___x_1502_, v_typeExpr_1483_, v___x_1574_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v___x_1542_, v_a_1491_);
lean_dec_ref_known(v___x_1542_, 3);
v___y_1507_ = v___x_1575_;
goto v___jp_1506_;
}
}
}
else
{
lean_object* v___x_1576_; lean_object* v___x_1577_; 
lean_dec(v___x_1540_);
lean_dec_ref(v_ev_1484_);
v___x_1576_ = lean_box(0);
v___x_1577_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___lam__0(v___x_1500_, v___x_1502_, v_typeExpr_1483_, v___x_1576_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v___x_1542_, v_a_1491_);
lean_dec_ref_known(v___x_1542_, 3);
v___y_1507_ = v___x_1577_;
goto v___jp_1506_;
}
v___jp_1506_:
{
if (lean_obj_tag(v___y_1507_) == 0)
{
lean_object* v_a_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1539_; 
v_a_1508_ = lean_ctor_get(v___y_1507_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___y_1507_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1510_ = v___y_1507_;
v_isShared_1511_ = v_isSharedCheck_1539_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_a_1508_);
lean_dec(v___y_1507_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1539_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v_snd_1512_; lean_object* v___x_1513_; lean_object* v_infoState_1514_; uint8_t v_enabled_1515_; 
v_snd_1512_ = lean_ctor_get(v_a_1508_, 1);
v___x_1513_ = lean_st_ref_get(v_a_1491_);
v_infoState_1514_ = lean_ctor_get(v___x_1513_, 8);
lean_inc_ref(v_infoState_1514_);
lean_dec(v___x_1513_);
v_enabled_1515_ = lean_ctor_get_uint8(v_infoState_1514_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1514_);
if (v_enabled_1515_ == 0)
{
lean_object* v___x_1517_; 
lean_dec_ref_known(v___x_1505_, 1);
lean_dec(v_stx_1485_);
if (v_isShared_1511_ == 0)
{
v___x_1517_ = v___x_1510_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v_a_1508_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
else
{
lean_object* v___x_1519_; lean_object* v___x_1520_; uint8_t v___x_1521_; lean_object* v___x_1522_; 
lean_del_object(v___x_1510_);
v___x_1519_ = lean_box(0);
v___x_1520_ = lean_box(0);
v___x_1521_ = 0;
lean_inc(v_snd_1512_);
v___x_1522_ = l_Lean_Elab_Term_addTermInfo_x27(v_stx_1485_, v_snd_1512_, v___x_1505_, v___x_1519_, v___x_1520_, v___x_1521_, v___x_1521_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_);
if (lean_obj_tag(v___x_1522_) == 0)
{
lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1529_; 
v_isSharedCheck_1529_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1529_ == 0)
{
lean_object* v_unused_1530_; 
v_unused_1530_ = lean_ctor_get(v___x_1522_, 0);
lean_dec(v_unused_1530_);
v___x_1524_ = v___x_1522_;
v_isShared_1525_ = v_isSharedCheck_1529_;
goto v_resetjp_1523_;
}
else
{
lean_dec(v___x_1522_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1529_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1527_; 
if (v_isShared_1525_ == 0)
{
lean_ctor_set(v___x_1524_, 0, v_a_1508_);
v___x_1527_ = v___x_1524_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1528_; 
v_reuseFailAlloc_1528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1528_, 0, v_a_1508_);
v___x_1527_ = v_reuseFailAlloc_1528_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
return v___x_1527_;
}
}
}
else
{
lean_object* v_a_1531_; lean_object* v___x_1533_; uint8_t v_isShared_1534_; uint8_t v_isSharedCheck_1538_; 
lean_dec(v_a_1508_);
v_a_1531_ = lean_ctor_get(v___x_1522_, 0);
v_isSharedCheck_1538_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1538_ == 0)
{
v___x_1533_ = v___x_1522_;
v_isShared_1534_ = v_isSharedCheck_1538_;
goto v_resetjp_1532_;
}
else
{
lean_inc(v_a_1531_);
lean_dec(v___x_1522_);
v___x_1533_ = lean_box(0);
v_isShared_1534_ = v_isSharedCheck_1538_;
goto v_resetjp_1532_;
}
v_resetjp_1532_:
{
lean_object* v___x_1536_; 
if (v_isShared_1534_ == 0)
{
v___x_1536_ = v___x_1533_;
goto v_reusejp_1535_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v_a_1531_);
v___x_1536_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
return v___x_1536_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_1505_, 1);
lean_dec(v_stx_1485_);
return v___y_1507_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___boxed(lean_object* v_typeExpr_1578_, lean_object* v_ev_1579_, lean_object* v_stx_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_){
_start:
{
lean_object* v_res_1588_; 
v_res_1588_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg(v_typeExpr_1578_, v_ev_1579_, v_stx_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_, v_a_1585_, v_a_1586_);
lean_dec(v_a_1586_);
lean_dec_ref(v_a_1585_);
lean_dec(v_a_1584_);
lean_dec_ref(v_a_1583_);
lean_dec(v_a_1582_);
lean_dec_ref(v_a_1581_);
return v_res_1588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx(lean_object* v_00_u03b1_1589_, lean_object* v_typeExpr_1590_, lean_object* v_ev_1591_, lean_object* v_stx_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_){
_start:
{
lean_object* v___x_1600_; 
v___x_1600_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg(v_typeExpr_1590_, v_ev_1591_, v_stx_1592_, v_a_1593_, v_a_1594_, v_a_1595_, v_a_1596_, v_a_1597_, v_a_1598_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___boxed(lean_object* v_00_u03b1_1601_, lean_object* v_typeExpr_1602_, lean_object* v_ev_1603_, lean_object* v_stx_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_, lean_object* v_a_1607_, lean_object* v_a_1608_, lean_object* v_a_1609_, lean_object* v_a_1610_, lean_object* v_a_1611_){
_start:
{
lean_object* v_res_1612_; 
v_res_1612_ = l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx(v_00_u03b1_1601_, v_typeExpr_1602_, v_ev_1603_, v_stx_1604_, v_a_1605_, v_a_1606_, v_a_1607_, v_a_1608_, v_a_1609_, v_a_1610_);
lean_dec(v_a_1610_);
lean_dec_ref(v_a_1609_);
lean_dec(v_a_1608_);
lean_dec_ref(v_a_1607_);
lean_dec(v_a_1606_);
lean_dec_ref(v_a_1605_);
return v_res_1612_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__3(uint8_t v___x_1613_, lean_object* v_as_1614_, size_t v_i_1615_, size_t v_stop_1616_, lean_object* v_b_1617_){
_start:
{
lean_object* v___y_1619_; uint8_t v___x_1623_; 
v___x_1623_ = lean_usize_dec_eq(v_i_1615_, v_stop_1616_);
if (v___x_1623_ == 0)
{
lean_object* v_fst_1624_; uint8_t v___x_1625_; 
v_fst_1624_ = lean_ctor_get(v_b_1617_, 0);
v___x_1625_ = lean_unbox(v_fst_1624_);
if (v___x_1625_ == 0)
{
lean_object* v_snd_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1634_; 
v_snd_1626_ = lean_ctor_get(v_b_1617_, 1);
v_isSharedCheck_1634_ = !lean_is_exclusive(v_b_1617_);
if (v_isSharedCheck_1634_ == 0)
{
lean_object* v_unused_1635_; 
v_unused_1635_ = lean_ctor_get(v_b_1617_, 0);
lean_dec(v_unused_1635_);
v___x_1628_ = v_b_1617_;
v_isShared_1629_ = v_isSharedCheck_1634_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_snd_1626_);
lean_dec(v_b_1617_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1634_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v___x_1630_; lean_object* v___x_1632_; 
v___x_1630_ = lean_box(v___x_1613_);
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 0, v___x_1630_);
v___x_1632_ = v___x_1628_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v___x_1630_);
lean_ctor_set(v_reuseFailAlloc_1633_, 1, v_snd_1626_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
v___y_1619_ = v___x_1632_;
goto v___jp_1618_;
}
}
}
else
{
lean_object* v_snd_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1646_; 
v_snd_1636_ = lean_ctor_get(v_b_1617_, 1);
v_isSharedCheck_1646_ = !lean_is_exclusive(v_b_1617_);
if (v_isSharedCheck_1646_ == 0)
{
lean_object* v_unused_1647_; 
v_unused_1647_ = lean_ctor_get(v_b_1617_, 0);
lean_dec(v_unused_1647_);
v___x_1638_ = v_b_1617_;
v_isShared_1639_ = v_isSharedCheck_1646_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_snd_1636_);
lean_dec(v_b_1617_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1646_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1644_; 
v___x_1640_ = lean_array_uget_borrowed(v_as_1614_, v_i_1615_);
lean_inc(v___x_1640_);
v___x_1641_ = lean_array_push(v_snd_1636_, v___x_1640_);
v___x_1642_ = lean_box(v___x_1623_);
if (v_isShared_1639_ == 0)
{
lean_ctor_set(v___x_1638_, 1, v___x_1641_);
lean_ctor_set(v___x_1638_, 0, v___x_1642_);
v___x_1644_ = v___x_1638_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v___x_1642_);
lean_ctor_set(v_reuseFailAlloc_1645_, 1, v___x_1641_);
v___x_1644_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
v___y_1619_ = v___x_1644_;
goto v___jp_1618_;
}
}
}
}
else
{
return v_b_1617_;
}
v___jp_1618_:
{
size_t v___x_1620_; size_t v___x_1621_; 
v___x_1620_ = ((size_t)1ULL);
v___x_1621_ = lean_usize_add(v_i_1615_, v___x_1620_);
v_i_1615_ = v___x_1621_;
v_b_1617_ = v___y_1619_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__3___boxed(lean_object* v___x_1648_, lean_object* v_as_1649_, lean_object* v_i_1650_, lean_object* v_stop_1651_, lean_object* v_b_1652_){
_start:
{
uint8_t v___x_1500__boxed_1653_; size_t v_i_boxed_1654_; size_t v_stop_boxed_1655_; lean_object* v_res_1656_; 
v___x_1500__boxed_1653_ = lean_unbox(v___x_1648_);
v_i_boxed_1654_ = lean_unbox_usize(v_i_1650_);
lean_dec(v_i_1650_);
v_stop_boxed_1655_ = lean_unbox_usize(v_stop_1651_);
lean_dec(v_stop_1651_);
v_res_1656_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__3(v___x_1500__boxed_1653_, v_as_1649_, v_i_boxed_1654_, v_stop_boxed_1655_, v_b_1652_);
lean_dec_ref(v_as_1649_);
return v_res_1656_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___redArg(lean_object* v_ev_1657_, size_t v_sz_1658_, size_t v_i_1659_, lean_object* v_bs_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_){
_start:
{
uint8_t v___x_1668_; 
v___x_1668_ = lean_usize_dec_lt(v_i_1659_, v_sz_1658_);
if (v___x_1668_ == 0)
{
lean_object* v___x_1669_; 
lean_dec_ref(v_ev_1657_);
v___x_1669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1669_, 0, v_bs_1660_);
return v___x_1669_;
}
else
{
lean_object* v_v_1670_; lean_object* v___x_1671_; lean_object* v_bs_x27_1672_; lean_object* v___x_1673_; 
v_v_1670_ = lean_array_uget(v_bs_1660_, v_i_1659_);
v___x_1671_ = lean_unsigned_to_nat(0u);
v_bs_x27_1672_ = lean_array_uset(v_bs_1660_, v_i_1659_, v___x_1671_);
lean_inc_ref(v_ev_1657_);
lean_inc(v___y_1666_);
lean_inc_ref(v___y_1665_);
lean_inc(v___y_1664_);
lean_inc_ref(v___y_1663_);
lean_inc(v___y_1662_);
lean_inc_ref(v___y_1661_);
v___x_1673_ = lean_apply_8(v_ev_1657_, v_v_1670_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_, lean_box(0));
if (lean_obj_tag(v___x_1673_) == 0)
{
lean_object* v_a_1674_; size_t v___x_1675_; size_t v___x_1676_; lean_object* v___x_1677_; 
v_a_1674_ = lean_ctor_get(v___x_1673_, 0);
lean_inc(v_a_1674_);
lean_dec_ref_known(v___x_1673_, 1);
v___x_1675_ = ((size_t)1ULL);
v___x_1676_ = lean_usize_add(v_i_1659_, v___x_1675_);
v___x_1677_ = lean_array_uset(v_bs_x27_1672_, v_i_1659_, v_a_1674_);
v_i_1659_ = v___x_1676_;
v_bs_1660_ = v___x_1677_;
goto _start;
}
else
{
lean_object* v_a_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1686_; 
lean_dec_ref(v_bs_x27_1672_);
lean_dec_ref(v_ev_1657_);
v_a_1679_ = lean_ctor_get(v___x_1673_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v___x_1673_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1681_ = v___x_1673_;
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_a_1679_);
lean_dec(v___x_1673_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1684_; 
if (v_isShared_1682_ == 0)
{
v___x_1684_ = v___x_1681_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_a_1679_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___redArg___boxed(lean_object* v_ev_1687_, lean_object* v_sz_1688_, lean_object* v_i_1689_, lean_object* v_bs_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_){
_start:
{
size_t v_sz_boxed_1698_; size_t v_i_boxed_1699_; lean_object* v_res_1700_; 
v_sz_boxed_1698_ = lean_unbox_usize(v_sz_1688_);
lean_dec(v_sz_1688_);
v_i_boxed_1699_ = lean_unbox_usize(v_i_1689_);
lean_dec(v_i_1689_);
v_res_1700_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___redArg(v_ev_1687_, v_sz_boxed_1698_, v_i_boxed_1699_, v_bs_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
lean_dec(v___y_1694_);
lean_dec_ref(v___y_1693_);
lean_dec(v___y_1692_);
lean_dec_ref(v___y_1691_);
return v_res_1700_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; 
v___x_1706_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_1707_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__2));
v___x_1708_ = l_Lean_Expr_const___override(v___x_1707_, v___x_1706_);
return v___x_1708_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2(lean_object* v_typeExpr_1709_, lean_object* v_as_1710_, size_t v_i_1711_, size_t v_stop_1712_, lean_object* v_b_1713_){
_start:
{
uint8_t v___x_1714_; 
v___x_1714_ = lean_usize_dec_eq(v_i_1711_, v_stop_1712_);
if (v___x_1714_ == 0)
{
size_t v___x_1715_; size_t v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1715_ = ((size_t)1ULL);
v___x_1716_ = lean_usize_sub(v_i_1711_, v___x_1715_);
v___x_1717_ = lean_array_uget_borrowed(v_as_1710_, v___x_1716_);
v___x_1718_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__3);
lean_inc(v___x_1717_);
lean_inc_ref(v_typeExpr_1709_);
v___x_1719_ = l_Lean_mkApp3(v___x_1718_, v_typeExpr_1709_, v___x_1717_, v_b_1713_);
v_i_1711_ = v___x_1716_;
v_b_1713_ = v___x_1719_;
goto _start;
}
else
{
lean_dec_ref(v_typeExpr_1709_);
return v_b_1713_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___boxed(lean_object* v_typeExpr_1721_, lean_object* v_as_1722_, lean_object* v_i_1723_, lean_object* v_stop_1724_, lean_object* v_b_1725_){
_start:
{
size_t v_i_boxed_1726_; size_t v_stop_boxed_1727_; lean_object* v_res_1728_; 
v_i_boxed_1726_ = lean_unbox_usize(v_i_1723_);
lean_dec(v_i_1723_);
v_stop_boxed_1727_ = lean_unbox_usize(v_stop_1724_);
lean_dec(v_stop_1724_);
v_res_1728_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2(v_typeExpr_1721_, v_as_1722_, v_i_boxed_1726_, v_stop_boxed_1727_, v_b_1725_);
lean_dec_ref(v_as_1722_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__0(size_t v_sz_1729_, size_t v_i_1730_, lean_object* v_bs_1731_){
_start:
{
uint8_t v___x_1732_; 
v___x_1732_ = lean_usize_dec_lt(v_i_1730_, v_sz_1729_);
if (v___x_1732_ == 0)
{
lean_object* v___x_1733_; 
v___x_1733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1733_, 0, v_bs_1731_);
return v___x_1733_;
}
else
{
lean_object* v_v_1734_; lean_object* v___x_1735_; lean_object* v_bs_x27_1736_; size_t v___x_1737_; size_t v___x_1738_; lean_object* v___x_1739_; 
v_v_1734_ = lean_array_uget(v_bs_1731_, v_i_1730_);
v___x_1735_ = lean_unsigned_to_nat(0u);
v_bs_x27_1736_ = lean_array_uset(v_bs_1731_, v_i_1730_, v___x_1735_);
v___x_1737_ = ((size_t)1ULL);
v___x_1738_ = lean_usize_add(v_i_1730_, v___x_1737_);
v___x_1739_ = lean_array_uset(v_bs_x27_1736_, v_i_1730_, v_v_1734_);
v_i_1730_ = v___x_1738_;
v_bs_1731_ = v___x_1739_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__0___boxed(lean_object* v_sz_1741_, lean_object* v_i_1742_, lean_object* v_bs_1743_){
_start:
{
size_t v_sz_boxed_1744_; size_t v_i_boxed_1745_; lean_object* v_res_1746_; 
v_sz_boxed_1744_ = lean_unbox_usize(v_sz_1741_);
lean_dec(v_sz_1741_);
v_i_boxed_1745_ = lean_unbox_usize(v_i_1742_);
lean_dec(v_i_1742_);
v_res_1746_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__0(v_sz_boxed_1744_, v_i_boxed_1745_, v_bs_1743_);
return v_res_1746_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1(void){
_start:
{
lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v___x_1749_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_1750_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__0));
v___x_1751_ = l_Lean_Expr_const___override(v___x_1750_, v___x_1749_);
return v___x_1751_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__6(void){
_start:
{
lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1759_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_1760_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__5));
v___x_1761_ = l_Lean_Expr_const___override(v___x_1760_, v___x_1759_);
return v___x_1761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg(lean_object* v_typeExpr_1764_, lean_object* v_ev_1765_, lean_object* v_stx_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_, lean_object* v_a_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_){
_start:
{
lean_object* v_toCold_1774_; lean_object* v_currRecDepth_1775_; lean_object* v_ref_1776_; uint16_t v_optionFlags_1777_; uint8_t v_suppressElabErrors_1778_; uint8_t v_checkDeprecated_1779_; uint8_t v_isRecordingDeps_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v_a_1786_; lean_object* v_snd_1787_; lean_object* v___y_1813_; lean_object* v___y_1814_; lean_object* v___y_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; uint8_t v___x_1821_; 
v_toCold_1774_ = lean_ctor_get(v_a_1771_, 0);
v_currRecDepth_1775_ = lean_ctor_get(v_a_1771_, 1);
v_ref_1776_ = lean_ctor_get(v_a_1771_, 2);
v_optionFlags_1777_ = lean_ctor_get_uint16(v_a_1771_, sizeof(void*)*3);
v_suppressElabErrors_1778_ = lean_ctor_get_uint8(v_a_1771_, sizeof(void*)*3 + 2);
v_checkDeprecated_1779_ = lean_ctor_get_uint8(v_a_1771_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1780_ = lean_ctor_get_uint8(v_a_1771_, sizeof(void*)*3 + 4);
v___x_1781_ = lean_unsigned_to_nat(0u);
v___x_1782_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1, &l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1);
lean_inc_ref(v_typeExpr_1764_);
v___x_1783_ = l_Lean_Expr_app___override(v___x_1782_, v_typeExpr_1764_);
v___x_1784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1784_, 0, v___x_1783_);
lean_inc(v_stx_1766_);
v___x_1819_ = l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(v_stx_1766_);
v___x_1820_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__3));
lean_inc(v___x_1819_);
v___x_1821_ = l_Lean_Syntax_isOfKind(v___x_1819_, v___x_1820_);
if (v___x_1821_ == 0)
{
lean_object* v___x_1822_; 
lean_dec(v___x_1819_);
lean_dec_ref_known(v___x_1784_, 1);
lean_dec(v_stx_1766_);
lean_dec_ref(v_ev_1765_);
lean_dec_ref(v_typeExpr_1764_);
v___x_1822_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_1818_ = v___x_1822_;
goto v___jp_1817_;
}
else
{
lean_object* v_ref_1823_; lean_object* v___x_1824_; lean_object* v___y_1826_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; uint8_t v___x_1857_; 
v_ref_1823_ = l_Lean_replaceRef(v_stx_1766_, v_ref_1776_);
lean_inc(v_currRecDepth_1775_);
lean_inc_ref(v_toCold_1774_);
v___x_1824_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1824_, 0, v_toCold_1774_);
lean_ctor_set(v___x_1824_, 1, v_currRecDepth_1775_);
lean_ctor_set(v___x_1824_, 2, v_ref_1823_);
lean_ctor_set_uint16(v___x_1824_, sizeof(void*)*3, v_optionFlags_1777_);
lean_ctor_set_uint8(v___x_1824_, sizeof(void*)*3 + 2, v_suppressElabErrors_1778_);
lean_ctor_set_uint8(v___x_1824_, sizeof(void*)*3 + 3, v_checkDeprecated_1779_);
lean_ctor_set_uint8(v___x_1824_, sizeof(void*)*3 + 4, v_isRecordingDeps_1780_);
v___x_1852_ = lean_unsigned_to_nat(1u);
v___x_1853_ = l_Lean_Syntax_getArg(v___x_1819_, v___x_1852_);
lean_dec(v___x_1819_);
v___x_1854_ = l_Lean_Syntax_getArgs(v___x_1853_);
lean_dec(v___x_1853_);
v___x_1855_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__7));
v___x_1856_ = lean_array_get_size(v___x_1854_);
v___x_1857_ = lean_nat_dec_lt(v___x_1781_, v___x_1856_);
if (v___x_1857_ == 0)
{
lean_dec_ref(v___x_1854_);
v___y_1826_ = v___x_1855_;
goto v___jp_1825_;
}
else
{
lean_object* v___x_1858_; lean_object* v___x_1859_; size_t v___x_1860_; size_t v___x_1861_; lean_object* v___x_1862_; lean_object* v_snd_1863_; 
v___x_1858_ = lean_box(v___x_1857_);
v___x_1859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1859_, 0, v___x_1858_);
lean_ctor_set(v___x_1859_, 1, v___x_1855_);
v___x_1860_ = ((size_t)0ULL);
v___x_1861_ = lean_usize_of_nat(v___x_1856_);
v___x_1862_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__3(v___x_1821_, v___x_1854_, v___x_1860_, v___x_1861_, v___x_1859_);
lean_dec_ref(v___x_1854_);
v_snd_1863_ = lean_ctor_get(v___x_1862_, 1);
lean_inc(v_snd_1863_);
lean_dec_ref(v___x_1862_);
v___y_1826_ = v_snd_1863_;
goto v___jp_1825_;
}
v___jp_1825_:
{
size_t v_sz_1827_; size_t v___x_1828_; lean_object* v___x_1829_; 
v_sz_1827_ = lean_array_size(v___y_1826_);
v___x_1828_ = ((size_t)0ULL);
v___x_1829_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__0(v_sz_1827_, v___x_1828_, v___y_1826_);
if (lean_obj_tag(v___x_1829_) == 0)
{
lean_object* v___x_1830_; 
lean_dec_ref_known(v___x_1824_, 3);
lean_dec_ref_known(v___x_1784_, 1);
lean_dec(v_stx_1766_);
lean_dec_ref(v_ev_1765_);
lean_dec_ref(v_typeExpr_1764_);
v___x_1830_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_1818_ = v___x_1830_;
goto v___jp_1817_;
}
else
{
lean_object* v_val_1831_; size_t v_sz_1832_; lean_object* v___x_1833_; 
v_val_1831_ = lean_ctor_get(v___x_1829_, 0);
lean_inc(v_val_1831_);
lean_dec_ref_known(v___x_1829_, 1);
v_sz_1832_ = lean_array_size(v_val_1831_);
v___x_1833_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___redArg(v_ev_1765_, v_sz_1832_, v___x_1828_, v_val_1831_, v_a_1767_, v_a_1768_, v_a_1769_, v_a_1770_, v___x_1824_, v_a_1772_);
lean_dec_ref_known(v___x_1824_, 3);
if (lean_obj_tag(v___x_1833_) == 0)
{
lean_object* v_a_1834_; lean_object* v___x_1835_; lean_object* v_fst_1836_; lean_object* v_snd_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; uint8_t v___x_1841_; 
v_a_1834_ = lean_ctor_get(v___x_1833_, 0);
lean_inc(v_a_1834_);
lean_dec_ref_known(v___x_1833_, 1);
v___x_1835_ = l_Array_unzip___redArg(v_a_1834_);
lean_dec(v_a_1834_);
v_fst_1836_ = lean_ctor_get(v___x_1835_, 0);
lean_inc(v_fst_1836_);
v_snd_1837_ = lean_ctor_get(v___x_1835_, 1);
lean_inc(v_snd_1837_);
lean_dec_ref(v___x_1835_);
v___x_1838_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__6, &l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__6);
lean_inc_ref(v_typeExpr_1764_);
v___x_1839_ = l_Lean_Expr_app___override(v___x_1838_, v_typeExpr_1764_);
v___x_1840_ = lean_array_get_size(v_snd_1837_);
v___x_1841_ = lean_nat_dec_lt(v___x_1781_, v___x_1840_);
if (v___x_1841_ == 0)
{
lean_dec(v_snd_1837_);
lean_dec_ref(v_typeExpr_1764_);
v___y_1813_ = v_fst_1836_;
v___y_1814_ = v___x_1839_;
goto v___jp_1812_;
}
else
{
size_t v___x_1842_; lean_object* v___x_1843_; 
v___x_1842_ = lean_usize_of_nat(v___x_1840_);
v___x_1843_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2(v_typeExpr_1764_, v_snd_1837_, v___x_1842_, v___x_1828_, v___x_1839_);
lean_dec(v_snd_1837_);
v___y_1813_ = v_fst_1836_;
v___y_1814_ = v___x_1843_;
goto v___jp_1812_;
}
}
else
{
lean_object* v_a_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1851_; 
lean_dec_ref_known(v___x_1784_, 1);
lean_dec(v_stx_1766_);
lean_dec_ref(v_typeExpr_1764_);
v_a_1844_ = lean_ctor_get(v___x_1833_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v___x_1833_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1846_ = v___x_1833_;
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_a_1844_);
lean_dec(v___x_1833_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___x_1849_; 
if (v_isShared_1847_ == 0)
{
v___x_1849_ = v___x_1846_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v_a_1844_);
v___x_1849_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
return v___x_1849_;
}
}
}
}
}
}
v___jp_1785_:
{
lean_object* v___x_1788_; lean_object* v_infoState_1789_; uint8_t v_enabled_1790_; 
v___x_1788_ = lean_st_ref_get(v_a_1772_);
v_infoState_1789_ = lean_ctor_get(v___x_1788_, 8);
lean_inc_ref(v_infoState_1789_);
lean_dec(v___x_1788_);
v_enabled_1790_ = lean_ctor_get_uint8(v_infoState_1789_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1789_);
if (v_enabled_1790_ == 0)
{
lean_object* v___x_1791_; 
lean_dec_ref(v_snd_1787_);
lean_dec_ref_known(v___x_1784_, 1);
lean_dec(v_stx_1766_);
v___x_1791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1791_, 0, v_a_1786_);
return v___x_1791_;
}
else
{
lean_object* v___x_1792_; lean_object* v___x_1793_; uint8_t v___x_1794_; lean_object* v___x_1795_; 
v___x_1792_ = lean_box(0);
v___x_1793_ = lean_box(0);
v___x_1794_ = 0;
v___x_1795_ = l_Lean_Elab_Term_addTermInfo_x27(v_stx_1766_, v_snd_1787_, v___x_1784_, v___x_1792_, v___x_1793_, v___x_1794_, v___x_1794_, v_a_1767_, v_a_1768_, v_a_1769_, v_a_1770_, v_a_1771_, v_a_1772_);
if (lean_obj_tag(v___x_1795_) == 0)
{
lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1802_; 
v_isSharedCheck_1802_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1802_ == 0)
{
lean_object* v_unused_1803_; 
v_unused_1803_ = lean_ctor_get(v___x_1795_, 0);
lean_dec(v_unused_1803_);
v___x_1797_ = v___x_1795_;
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
else
{
lean_dec(v___x_1795_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1800_; 
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 0, v_a_1786_);
v___x_1800_ = v___x_1797_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v_a_1786_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
return v___x_1800_;
}
}
}
else
{
lean_object* v_a_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1811_; 
lean_dec_ref(v_a_1786_);
v_a_1804_ = lean_ctor_get(v___x_1795_, 0);
v_isSharedCheck_1811_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1806_ = v___x_1795_;
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_a_1804_);
lean_dec(v___x_1795_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___x_1809_; 
if (v_isShared_1807_ == 0)
{
v___x_1809_ = v___x_1806_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v_a_1804_);
v___x_1809_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
return v___x_1809_;
}
}
}
}
}
v___jp_1812_:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1815_ = lean_array_to_list(v___y_1813_);
lean_inc_ref(v___y_1814_);
v___x_1816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1816_, 0, v___x_1815_);
lean_ctor_set(v___x_1816_, 1, v___y_1814_);
v_a_1786_ = v___x_1816_;
v_snd_1787_ = v___y_1814_;
goto v___jp_1785_;
}
v___jp_1817_:
{
return v___y_1818_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___boxed(lean_object* v_typeExpr_1864_, lean_object* v_ev_1865_, lean_object* v_stx_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_, lean_object* v_a_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_){
_start:
{
lean_object* v_res_1874_; 
v_res_1874_ = l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg(v_typeExpr_1864_, v_ev_1865_, v_stx_1866_, v_a_1867_, v_a_1868_, v_a_1869_, v_a_1870_, v_a_1871_, v_a_1872_);
lean_dec(v_a_1872_);
lean_dec_ref(v_a_1871_);
lean_dec(v_a_1870_);
lean_dec_ref(v_a_1869_);
lean_dec(v_a_1868_);
lean_dec_ref(v_a_1867_);
return v_res_1874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx(lean_object* v_00_u03b1_1875_, lean_object* v_typeExpr_1876_, lean_object* v_ev_1877_, lean_object* v_stx_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_){
_start:
{
lean_object* v___x_1886_; 
v___x_1886_ = l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg(v_typeExpr_1876_, v_ev_1877_, v_stx_1878_, v_a_1879_, v_a_1880_, v_a_1881_, v_a_1882_, v_a_1883_, v_a_1884_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___boxed(lean_object* v_00_u03b1_1887_, lean_object* v_typeExpr_1888_, lean_object* v_ev_1889_, lean_object* v_stx_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_, lean_object* v_a_1897_){
_start:
{
lean_object* v_res_1898_; 
v_res_1898_ = l_Lean_Elab_ConfigEval_EvalTerm_evalListStx(v_00_u03b1_1887_, v_typeExpr_1888_, v_ev_1889_, v_stx_1890_, v_a_1891_, v_a_1892_, v_a_1893_, v_a_1894_, v_a_1895_, v_a_1896_);
lean_dec(v_a_1896_);
lean_dec_ref(v_a_1895_);
lean_dec(v_a_1894_);
lean_dec_ref(v_a_1893_);
lean_dec(v_a_1892_);
lean_dec_ref(v_a_1891_);
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1(lean_object* v_00_u03b1_1899_, lean_object* v_ev_1900_, size_t v_sz_1901_, size_t v_i_1902_, lean_object* v_bs_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_){
_start:
{
lean_object* v___x_1911_; 
v___x_1911_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___redArg(v_ev_1900_, v_sz_1901_, v_i_1902_, v_bs_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_);
return v___x_1911_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___boxed(lean_object* v_00_u03b1_1912_, lean_object* v_ev_1913_, lean_object* v_sz_1914_, lean_object* v_i_1915_, lean_object* v_bs_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_){
_start:
{
size_t v_sz_boxed_1924_; size_t v_i_boxed_1925_; lean_object* v_res_1926_; 
v_sz_boxed_1924_ = lean_unbox_usize(v_sz_1914_);
lean_dec(v_sz_1914_);
v_i_boxed_1925_ = lean_unbox_usize(v_i_1915_);
lean_dec(v_i_1915_);
v_res_1926_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1(v_00_u03b1_1912_, v_ev_1913_, v_sz_boxed_1924_, v_i_boxed_1925_, v_bs_1916_, v___y_1917_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_);
lean_dec(v___y_1922_);
lean_dec_ref(v___y_1921_);
lean_dec(v___y_1920_);
lean_dec_ref(v___y_1919_);
lean_dec(v___y_1918_);
lean_dec_ref(v___y_1917_);
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalArrayStx_spec__0(lean_object* v_typeExpr_1927_, lean_object* v_as_1928_, size_t v_i_1929_, size_t v_stop_1930_, lean_object* v_b_1931_){
_start:
{
uint8_t v___x_1932_; 
v___x_1932_ = lean_usize_dec_eq(v_i_1929_, v_stop_1930_);
if (v___x_1932_ == 0)
{
size_t v___x_1933_; size_t v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1933_ = ((size_t)1ULL);
v___x_1934_ = lean_usize_sub(v_i_1929_, v___x_1933_);
v___x_1935_ = lean_array_uget_borrowed(v_as_1928_, v___x_1934_);
v___x_1936_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__3);
lean_inc(v___x_1935_);
lean_inc_ref(v_typeExpr_1927_);
v___x_1937_ = l_Lean_mkApp3(v___x_1936_, v_typeExpr_1927_, v___x_1935_, v_b_1931_);
v_i_1929_ = v___x_1934_;
v_b_1931_ = v___x_1937_;
goto _start;
}
else
{
lean_dec_ref(v_typeExpr_1927_);
return v_b_1931_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalArrayStx_spec__0___boxed(lean_object* v_typeExpr_1939_, lean_object* v_as_1940_, lean_object* v_i_1941_, lean_object* v_stop_1942_, lean_object* v_b_1943_){
_start:
{
size_t v_i_boxed_1944_; size_t v_stop_boxed_1945_; lean_object* v_res_1946_; 
v_i_boxed_1944_ = lean_unbox_usize(v_i_1941_);
lean_dec(v_i_1941_);
v_stop_boxed_1945_ = lean_unbox_usize(v_stop_1942_);
lean_dec(v_stop_1942_);
v_res_1946_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalArrayStx_spec__0(v_typeExpr_1939_, v_as_1940_, v_i_boxed_1944_, v_stop_boxed_1945_, v_b_1943_);
lean_dec_ref(v_as_1940_);
return v_res_1946_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2(void){
_start:
{
lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; 
v___x_1950_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_1951_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__1));
v___x_1952_ = l_Lean_Expr_const___override(v___x_1951_, v___x_1950_);
return v___x_1952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg(lean_object* v_typeExpr_1957_, lean_object* v_ev_1958_, lean_object* v_stx_1959_, lean_object* v_a_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_, lean_object* v_a_1964_, lean_object* v_a_1965_){
_start:
{
lean_object* v_toCold_1967_; lean_object* v_currRecDepth_1968_; lean_object* v_ref_1969_; uint16_t v_optionFlags_1970_; uint8_t v_suppressElabErrors_1971_; uint8_t v_checkDeprecated_1972_; uint8_t v_isRecordingDeps_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v_a_1980_; lean_object* v_snd_1981_; lean_object* v___y_2007_; lean_object* v___y_2008_; lean_object* v___y_2009_; lean_object* v___y_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; uint8_t v___x_2019_; 
v_toCold_1967_ = lean_ctor_get(v_a_1964_, 0);
v_currRecDepth_1968_ = lean_ctor_get(v_a_1964_, 1);
v_ref_1969_ = lean_ctor_get(v_a_1964_, 2);
v_optionFlags_1970_ = lean_ctor_get_uint16(v_a_1964_, sizeof(void*)*3);
v_suppressElabErrors_1971_ = lean_ctor_get_uint8(v_a_1964_, sizeof(void*)*3 + 2);
v_checkDeprecated_1972_ = lean_ctor_get_uint8(v_a_1964_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1973_ = lean_ctor_get_uint8(v_a_1964_, sizeof(void*)*3 + 4);
v___x_1974_ = lean_unsigned_to_nat(0u);
v___x_1975_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_1976_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2);
lean_inc_ref(v_typeExpr_1957_);
v___x_1977_ = l_Lean_Expr_app___override(v___x_1976_, v_typeExpr_1957_);
v___x_1978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1978_, 0, v___x_1977_);
lean_inc(v_stx_1959_);
v___x_2017_ = l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(v_stx_1959_);
v___x_2018_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__5));
lean_inc(v___x_2017_);
v___x_2019_ = l_Lean_Syntax_isOfKind(v___x_2017_, v___x_2018_);
if (v___x_2019_ == 0)
{
lean_object* v___x_2020_; 
lean_dec(v___x_2017_);
lean_dec_ref_known(v___x_1978_, 1);
lean_dec(v_stx_1959_);
lean_dec_ref(v_ev_1958_);
lean_dec_ref(v_typeExpr_1957_);
v___x_2020_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_2016_ = v___x_2020_;
goto v___jp_2015_;
}
else
{
lean_object* v_ref_2021_; lean_object* v___x_2022_; lean_object* v___y_2024_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; uint8_t v___x_2056_; 
v_ref_2021_ = l_Lean_replaceRef(v_stx_1959_, v_ref_1969_);
lean_inc(v_currRecDepth_1968_);
lean_inc_ref(v_toCold_1967_);
v___x_2022_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2022_, 0, v_toCold_1967_);
lean_ctor_set(v___x_2022_, 1, v_currRecDepth_1968_);
lean_ctor_set(v___x_2022_, 2, v_ref_2021_);
lean_ctor_set_uint16(v___x_2022_, sizeof(void*)*3, v_optionFlags_1970_);
lean_ctor_set_uint8(v___x_2022_, sizeof(void*)*3 + 2, v_suppressElabErrors_1971_);
lean_ctor_set_uint8(v___x_2022_, sizeof(void*)*3 + 3, v_checkDeprecated_1972_);
lean_ctor_set_uint8(v___x_2022_, sizeof(void*)*3 + 4, v_isRecordingDeps_1973_);
v___x_2051_ = lean_unsigned_to_nat(1u);
v___x_2052_ = l_Lean_Syntax_getArg(v___x_2017_, v___x_2051_);
lean_dec(v___x_2017_);
v___x_2053_ = l_Lean_Syntax_getArgs(v___x_2052_);
lean_dec(v___x_2052_);
v___x_2054_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__7));
v___x_2055_ = lean_array_get_size(v___x_2053_);
v___x_2056_ = lean_nat_dec_lt(v___x_1974_, v___x_2055_);
if (v___x_2056_ == 0)
{
lean_dec_ref(v___x_2053_);
v___y_2024_ = v___x_2054_;
goto v___jp_2023_;
}
else
{
lean_object* v___x_2057_; lean_object* v___x_2058_; size_t v___x_2059_; size_t v___x_2060_; lean_object* v___x_2061_; lean_object* v_snd_2062_; 
v___x_2057_ = lean_box(v___x_2056_);
v___x_2058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2058_, 0, v___x_2057_);
lean_ctor_set(v___x_2058_, 1, v___x_2054_);
v___x_2059_ = ((size_t)0ULL);
v___x_2060_ = lean_usize_of_nat(v___x_2055_);
v___x_2061_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__3(v___x_2019_, v___x_2053_, v___x_2059_, v___x_2060_, v___x_2058_);
lean_dec_ref(v___x_2053_);
v_snd_2062_ = lean_ctor_get(v___x_2061_, 1);
lean_inc(v_snd_2062_);
lean_dec_ref(v___x_2061_);
v___y_2024_ = v_snd_2062_;
goto v___jp_2023_;
}
v___jp_2023_:
{
size_t v_sz_2025_; size_t v___x_2026_; lean_object* v___x_2027_; 
v_sz_2025_ = lean_array_size(v___y_2024_);
v___x_2026_ = ((size_t)0ULL);
v___x_2027_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__0(v_sz_2025_, v___x_2026_, v___y_2024_);
if (lean_obj_tag(v___x_2027_) == 0)
{
lean_object* v___x_2028_; 
lean_dec_ref_known(v___x_2022_, 3);
lean_dec_ref_known(v___x_1978_, 1);
lean_dec(v_stx_1959_);
lean_dec_ref(v_ev_1958_);
lean_dec_ref(v_typeExpr_1957_);
v___x_2028_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_2016_ = v___x_2028_;
goto v___jp_2015_;
}
else
{
lean_object* v_val_2029_; size_t v_sz_2030_; lean_object* v___x_2031_; 
v_val_2029_ = lean_ctor_get(v___x_2027_, 0);
lean_inc(v_val_2029_);
lean_dec_ref_known(v___x_2027_, 1);
v_sz_2030_ = lean_array_size(v_val_2029_);
v___x_2031_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__1___redArg(v_ev_1958_, v_sz_2030_, v___x_2026_, v_val_2029_, v_a_1960_, v_a_1961_, v_a_1962_, v_a_1963_, v___x_2022_, v_a_1965_);
lean_dec_ref_known(v___x_2022_, 3);
if (lean_obj_tag(v___x_2031_) == 0)
{
lean_object* v_a_2032_; lean_object* v___x_2033_; lean_object* v_fst_2034_; lean_object* v_snd_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; uint8_t v___x_2040_; 
v_a_2032_ = lean_ctor_get(v___x_2031_, 0);
lean_inc(v_a_2032_);
lean_dec_ref_known(v___x_2031_, 1);
v___x_2033_ = l_Array_unzip___redArg(v_a_2032_);
lean_dec(v_a_2032_);
v_fst_2034_ = lean_ctor_get(v___x_2033_, 0);
lean_inc(v_fst_2034_);
v_snd_2035_ = lean_ctor_get(v___x_2033_, 1);
lean_inc(v_snd_2035_);
lean_dec_ref(v___x_2033_);
v___x_2036_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__0));
v___x_2037_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__6, &l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__6);
lean_inc_ref(v_typeExpr_1957_);
v___x_2038_ = l_Lean_Expr_app___override(v___x_2037_, v_typeExpr_1957_);
v___x_2039_ = lean_array_get_size(v_snd_2035_);
v___x_2040_ = lean_nat_dec_lt(v___x_1974_, v___x_2039_);
if (v___x_2040_ == 0)
{
lean_dec(v_snd_2035_);
v___y_2007_ = v_fst_2034_;
v___y_2008_ = v___x_2036_;
v___y_2009_ = v___x_2038_;
goto v___jp_2006_;
}
else
{
size_t v___x_2041_; lean_object* v___x_2042_; 
v___x_2041_ = lean_usize_of_nat(v___x_2039_);
lean_inc_ref(v_typeExpr_1957_);
v___x_2042_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalArrayStx_spec__0(v_typeExpr_1957_, v_snd_2035_, v___x_2041_, v___x_2026_, v___x_2038_);
lean_dec(v_snd_2035_);
v___y_2007_ = v_fst_2034_;
v___y_2008_ = v___x_2036_;
v___y_2009_ = v___x_2042_;
goto v___jp_2006_;
}
}
else
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2050_; 
lean_dec_ref_known(v___x_1978_, 1);
lean_dec(v_stx_1959_);
lean_dec_ref(v_typeExpr_1957_);
v_a_2043_ = lean_ctor_get(v___x_2031_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_2031_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2045_ = v___x_2031_;
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2031_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2048_; 
if (v_isShared_2046_ == 0)
{
v___x_2048_ = v___x_2045_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_a_2043_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
}
}
}
}
v___jp_1979_:
{
lean_object* v___x_1982_; lean_object* v_infoState_1983_; uint8_t v_enabled_1984_; 
v___x_1982_ = lean_st_ref_get(v_a_1965_);
v_infoState_1983_ = lean_ctor_get(v___x_1982_, 8);
lean_inc_ref(v_infoState_1983_);
lean_dec(v___x_1982_);
v_enabled_1984_ = lean_ctor_get_uint8(v_infoState_1983_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1983_);
if (v_enabled_1984_ == 0)
{
lean_object* v___x_1985_; 
lean_dec_ref(v_snd_1981_);
lean_dec_ref_known(v___x_1978_, 1);
lean_dec(v_stx_1959_);
v___x_1985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1985_, 0, v_a_1980_);
return v___x_1985_;
}
else
{
lean_object* v___x_1986_; lean_object* v___x_1987_; uint8_t v___x_1988_; lean_object* v___x_1989_; 
v___x_1986_ = lean_box(0);
v___x_1987_ = lean_box(0);
v___x_1988_ = 0;
v___x_1989_ = l_Lean_Elab_Term_addTermInfo_x27(v_stx_1959_, v_snd_1981_, v___x_1978_, v___x_1986_, v___x_1987_, v___x_1988_, v___x_1988_, v_a_1960_, v_a_1961_, v_a_1962_, v_a_1963_, v_a_1964_, v_a_1965_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v___x_1991_; uint8_t v_isShared_1992_; uint8_t v_isSharedCheck_1996_; 
v_isSharedCheck_1996_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_1996_ == 0)
{
lean_object* v_unused_1997_; 
v_unused_1997_ = lean_ctor_get(v___x_1989_, 0);
lean_dec(v_unused_1997_);
v___x_1991_ = v___x_1989_;
v_isShared_1992_ = v_isSharedCheck_1996_;
goto v_resetjp_1990_;
}
else
{
lean_dec(v___x_1989_);
v___x_1991_ = lean_box(0);
v_isShared_1992_ = v_isSharedCheck_1996_;
goto v_resetjp_1990_;
}
v_resetjp_1990_:
{
lean_object* v___x_1994_; 
if (v_isShared_1992_ == 0)
{
lean_ctor_set(v___x_1991_, 0, v_a_1980_);
v___x_1994_ = v___x_1991_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v_a_1980_);
v___x_1994_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
return v___x_1994_;
}
}
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
lean_dec_ref(v_a_1980_);
v_a_1998_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_2000_ = v___x_1989_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1989_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_2001_ == 0)
{
v___x_2003_ = v___x_2000_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_a_1998_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
}
}
v___jp_2006_:
{
lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; 
v___x_2010_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__3));
lean_inc_ref(v___y_2008_);
v___x_2011_ = l_Lean_Name_mkStr2(v___y_2008_, v___x_2010_);
v___x_2012_ = l_Lean_Expr_const___override(v___x_2011_, v___x_1975_);
v___x_2013_ = l_Lean_mkAppB(v___x_2012_, v_typeExpr_1957_, v___y_2009_);
lean_inc_ref(v___x_2013_);
v___x_2014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2014_, 0, v___y_2007_);
lean_ctor_set(v___x_2014_, 1, v___x_2013_);
v_a_1980_ = v___x_2014_;
v_snd_1981_ = v___x_2013_;
goto v___jp_1979_;
}
v___jp_2015_:
{
return v___y_2016_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___boxed(lean_object* v_typeExpr_2063_, lean_object* v_ev_2064_, lean_object* v_stx_2065_, lean_object* v_a_2066_, lean_object* v_a_2067_, lean_object* v_a_2068_, lean_object* v_a_2069_, lean_object* v_a_2070_, lean_object* v_a_2071_, lean_object* v_a_2072_){
_start:
{
lean_object* v_res_2073_; 
v_res_2073_ = l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg(v_typeExpr_2063_, v_ev_2064_, v_stx_2065_, v_a_2066_, v_a_2067_, v_a_2068_, v_a_2069_, v_a_2070_, v_a_2071_);
lean_dec(v_a_2071_);
lean_dec_ref(v_a_2070_);
lean_dec(v_a_2069_);
lean_dec_ref(v_a_2068_);
lean_dec(v_a_2067_);
lean_dec_ref(v_a_2066_);
return v_res_2073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx(lean_object* v_00_u03b1_2074_, lean_object* v_typeExpr_2075_, lean_object* v_ev_2076_, lean_object* v_stx_2077_, lean_object* v_a_2078_, lean_object* v_a_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_){
_start:
{
lean_object* v___x_2085_; 
v___x_2085_ = l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg(v_typeExpr_2075_, v_ev_2076_, v_stx_2077_, v_a_2078_, v_a_2079_, v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_);
return v___x_2085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___boxed(lean_object* v_00_u03b1_2086_, lean_object* v_typeExpr_2087_, lean_object* v_ev_2088_, lean_object* v_stx_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_){
_start:
{
lean_object* v_res_2097_; 
v_res_2097_ = l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx(v_00_u03b1_2086_, v_typeExpr_2087_, v_ev_2088_, v_stx_2089_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_, v_a_2094_, v_a_2095_);
lean_dec(v_a_2095_);
lean_dec_ref(v_a_2094_);
lean_dec(v_a_2093_);
lean_dec_ref(v_a_2092_);
lean_dec(v_a_2091_);
lean_dec_ref(v_a_2090_);
return v_res_2097_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__2(void){
_start:
{
lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; 
v___x_2101_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__9);
v___x_2102_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__8, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__8_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__8);
v___x_2103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2102_);
lean_ctor_set(v___x_2103_, 1, v___x_2101_);
return v___x_2103_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__3(void){
_start:
{
lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; 
v___x_2104_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__2);
v___x_2105_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__1));
v___x_2106_ = l_Lean_Expr_const___override(v___x_2105_, v___x_2104_);
return v___x_2106_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__12(void){
_start:
{
lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___x_2126_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__2);
v___x_2127_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__11));
v___x_2128_ = l_Lean_Expr_const___override(v___x_2127_, v___x_2126_);
return v___x_2128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg(lean_object* v_typeExpr_2129_, lean_object* v_typeExpr_x27_2130_, lean_object* v_ev_2131_, lean_object* v_ev_x27_2132_, lean_object* v_stx_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_, lean_object* v_a_2137_, lean_object* v_a_2138_, lean_object* v_a_2139_){
_start:
{
lean_object* v_toCold_2141_; lean_object* v_currRecDepth_2142_; lean_object* v_ref_2143_; uint16_t v_optionFlags_2144_; uint8_t v_suppressElabErrors_2145_; uint8_t v_checkDeprecated_2146_; uint8_t v_isRecordingDeps_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v_a_2153_; lean_object* v_snd_2154_; lean_object* v___y_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; uint8_t v___x_2183_; 
v_toCold_2141_ = lean_ctor_get(v_a_2138_, 0);
v_currRecDepth_2142_ = lean_ctor_get(v_a_2138_, 1);
v_ref_2143_ = lean_ctor_get(v_a_2138_, 2);
v_optionFlags_2144_ = lean_ctor_get_uint16(v_a_2138_, sizeof(void*)*3);
v_suppressElabErrors_2145_ = lean_ctor_get_uint8(v_a_2138_, sizeof(void*)*3 + 2);
v_checkDeprecated_2146_ = lean_ctor_get_uint8(v_a_2138_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2147_ = lean_ctor_get_uint8(v_a_2138_, sizeof(void*)*3 + 4);
v___x_2148_ = lean_unsigned_to_nat(0u);
v___x_2149_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__3);
lean_inc_ref(v_typeExpr_x27_2130_);
lean_inc_ref(v_typeExpr_2129_);
v___x_2150_ = l_Lean_mkAppB(v___x_2149_, v_typeExpr_2129_, v_typeExpr_x27_2130_);
v___x_2151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2151_, 0, v___x_2150_);
lean_inc(v_stx_2133_);
v___x_2181_ = l___private_Lean_Elab_ConfigEval_Basic_0__Lean_Elab_ConfigEval_stripParens(v_stx_2133_);
v___x_2182_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__5));
lean_inc(v___x_2181_);
v___x_2183_ = l_Lean_Syntax_isOfKind(v___x_2181_, v___x_2182_);
if (v___x_2183_ == 0)
{
lean_object* v___x_2184_; 
lean_dec(v___x_2181_);
lean_dec_ref_known(v___x_2151_, 1);
lean_dec(v_stx_2133_);
lean_dec_ref(v_ev_x27_2132_);
lean_dec_ref(v_ev_2131_);
lean_dec_ref(v_typeExpr_x27_2130_);
lean_dec_ref(v_typeExpr_2129_);
v___x_2184_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_2180_ = v___x_2184_;
goto v___jp_2179_;
}
else
{
lean_object* v___x_2185_; lean_object* v___x_2186_; uint8_t v___x_2187_; 
v___x_2185_ = l_Lean_Syntax_getArg(v___x_2181_, v___x_2148_);
v___x_2186_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__7));
lean_inc(v___x_2185_);
v___x_2187_ = l_Lean_Syntax_isOfKind(v___x_2185_, v___x_2186_);
if (v___x_2187_ == 0)
{
lean_object* v___x_2188_; 
lean_dec(v___x_2185_);
lean_dec(v___x_2181_);
lean_dec_ref_known(v___x_2151_, 1);
lean_dec(v_stx_2133_);
lean_dec_ref(v_ev_x27_2132_);
lean_dec_ref(v_ev_2131_);
lean_dec_ref(v_typeExpr_x27_2130_);
lean_dec_ref(v_typeExpr_2129_);
v___x_2188_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_2180_ = v___x_2188_;
goto v___jp_2179_;
}
else
{
lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; uint8_t v___x_2192_; 
v___x_2189_ = lean_unsigned_to_nat(1u);
v___x_2190_ = l_Lean_Syntax_getArg(v___x_2185_, v___x_2189_);
lean_dec(v___x_2185_);
v___x_2191_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__9));
lean_inc(v___x_2190_);
v___x_2192_ = l_Lean_Syntax_isOfKind(v___x_2190_, v___x_2191_);
if (v___x_2192_ == 0)
{
lean_object* v___x_2193_; 
lean_dec(v___x_2190_);
lean_dec(v___x_2181_);
lean_dec_ref_known(v___x_2151_, 1);
lean_dec(v_stx_2133_);
lean_dec_ref(v_ev_x27_2132_);
lean_dec_ref(v_ev_2131_);
lean_dec_ref(v_typeExpr_x27_2130_);
lean_dec_ref(v_typeExpr_2129_);
v___x_2193_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_2180_ = v___x_2193_;
goto v___jp_2179_;
}
else
{
lean_object* v___x_2194_; lean_object* v___x_2195_; uint8_t v___x_2196_; 
v___x_2194_ = l_Lean_Syntax_getArg(v___x_2190_, v___x_2148_);
lean_dec(v___x_2190_);
v___x_2195_ = lean_box(0);
v___x_2196_ = l_Lean_Syntax_matchesIdent(v___x_2194_, v___x_2195_);
lean_dec(v___x_2194_);
if (v___x_2196_ == 0)
{
lean_object* v___x_2197_; 
lean_dec(v___x_2181_);
lean_dec_ref_known(v___x_2151_, 1);
lean_dec(v_stx_2133_);
lean_dec_ref(v_ev_x27_2132_);
lean_dec_ref(v_ev_2131_);
lean_dec_ref(v_typeExpr_x27_2130_);
lean_dec_ref(v_typeExpr_2129_);
v___x_2197_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_2180_ = v___x_2197_;
goto v___jp_2179_;
}
else
{
lean_object* v___x_2198_; lean_object* v___x_2199_; uint8_t v___x_2200_; 
v___x_2198_ = l_Lean_Syntax_getArg(v___x_2181_, v___x_2189_);
lean_dec(v___x_2181_);
v___x_2199_ = lean_unsigned_to_nat(3u);
lean_inc(v___x_2198_);
v___x_2200_ = l_Lean_Syntax_matchesNull(v___x_2198_, v___x_2199_);
if (v___x_2200_ == 0)
{
lean_object* v___x_2201_; 
lean_dec(v___x_2198_);
lean_dec_ref_known(v___x_2151_, 1);
lean_dec(v_stx_2133_);
lean_dec_ref(v_ev_x27_2132_);
lean_dec_ref(v_ev_2131_);
lean_dec_ref(v_typeExpr_x27_2130_);
lean_dec_ref(v_typeExpr_2129_);
v___x_2201_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_2180_ = v___x_2201_;
goto v___jp_2179_;
}
else
{
lean_object* v___x_2202_; lean_object* v___x_2203_; uint8_t v___x_2204_; 
v___x_2202_ = lean_unsigned_to_nat(2u);
v___x_2203_ = l_Lean_Syntax_getArg(v___x_2198_, v___x_2202_);
lean_inc(v___x_2203_);
v___x_2204_ = l_Lean_Syntax_matchesNull(v___x_2203_, v___x_2189_);
if (v___x_2204_ == 0)
{
lean_object* v___x_2205_; 
lean_dec(v___x_2203_);
lean_dec(v___x_2198_);
lean_dec_ref_known(v___x_2151_, 1);
lean_dec(v_stx_2133_);
lean_dec_ref(v_ev_x27_2132_);
lean_dec_ref(v_ev_2131_);
lean_dec_ref(v_typeExpr_x27_2130_);
lean_dec_ref(v_typeExpr_2129_);
v___x_2205_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
v___y_2180_ = v___x_2205_;
goto v___jp_2179_;
}
else
{
lean_object* v_ref_2206_; lean_object* v___x_2207_; lean_object* v_x_2208_; lean_object* v_x_x27_2209_; lean_object* v___x_2210_; 
v_ref_2206_ = l_Lean_replaceRef(v_stx_2133_, v_ref_2143_);
lean_inc(v_currRecDepth_2142_);
lean_inc_ref(v_toCold_2141_);
v___x_2207_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2207_, 0, v_toCold_2141_);
lean_ctor_set(v___x_2207_, 1, v_currRecDepth_2142_);
lean_ctor_set(v___x_2207_, 2, v_ref_2206_);
lean_ctor_set_uint16(v___x_2207_, sizeof(void*)*3, v_optionFlags_2144_);
lean_ctor_set_uint8(v___x_2207_, sizeof(void*)*3 + 2, v_suppressElabErrors_2145_);
lean_ctor_set_uint8(v___x_2207_, sizeof(void*)*3 + 3, v_checkDeprecated_2146_);
lean_ctor_set_uint8(v___x_2207_, sizeof(void*)*3 + 4, v_isRecordingDeps_2147_);
v_x_2208_ = l_Lean_Syntax_getArg(v___x_2198_, v___x_2148_);
lean_dec(v___x_2198_);
v_x_x27_2209_ = l_Lean_Syntax_getArg(v___x_2203_, v___x_2148_);
lean_dec(v___x_2203_);
lean_inc(v_a_2139_);
lean_inc_ref(v___x_2207_);
lean_inc(v_a_2137_);
lean_inc_ref(v_a_2136_);
lean_inc(v_a_2135_);
lean_inc_ref(v_a_2134_);
v___x_2210_ = lean_apply_8(v_ev_2131_, v_x_2208_, v_a_2134_, v_a_2135_, v_a_2136_, v_a_2137_, v___x_2207_, v_a_2139_, lean_box(0));
if (lean_obj_tag(v___x_2210_) == 0)
{
lean_object* v_a_2211_; lean_object* v_fst_2212_; lean_object* v_snd_2213_; lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2241_; 
v_a_2211_ = lean_ctor_get(v___x_2210_, 0);
lean_inc(v_a_2211_);
lean_dec_ref_known(v___x_2210_, 1);
v_fst_2212_ = lean_ctor_get(v_a_2211_, 0);
v_snd_2213_ = lean_ctor_get(v_a_2211_, 1);
v_isSharedCheck_2241_ = !lean_is_exclusive(v_a_2211_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2215_ = v_a_2211_;
v_isShared_2216_ = v_isSharedCheck_2241_;
goto v_resetjp_2214_;
}
else
{
lean_inc(v_snd_2213_);
lean_inc(v_fst_2212_);
lean_dec(v_a_2211_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2241_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
lean_object* v___x_2217_; 
lean_inc(v_a_2139_);
lean_inc(v_a_2137_);
lean_inc_ref(v_a_2136_);
lean_inc(v_a_2135_);
lean_inc_ref(v_a_2134_);
v___x_2217_ = lean_apply_8(v_ev_x27_2132_, v_x_x27_2209_, v_a_2134_, v_a_2135_, v_a_2136_, v_a_2137_, v___x_2207_, v_a_2139_, lean_box(0));
if (lean_obj_tag(v___x_2217_) == 0)
{
lean_object* v_a_2218_; lean_object* v_fst_2219_; lean_object* v_snd_2220_; lean_object* v___x_2222_; uint8_t v_isShared_2223_; uint8_t v_isSharedCheck_2232_; 
v_a_2218_ = lean_ctor_get(v___x_2217_, 0);
lean_inc(v_a_2218_);
lean_dec_ref_known(v___x_2217_, 1);
v_fst_2219_ = lean_ctor_get(v_a_2218_, 0);
v_snd_2220_ = lean_ctor_get(v_a_2218_, 1);
v_isSharedCheck_2232_ = !lean_is_exclusive(v_a_2218_);
if (v_isSharedCheck_2232_ == 0)
{
v___x_2222_ = v_a_2218_;
v_isShared_2223_ = v_isSharedCheck_2232_;
goto v_resetjp_2221_;
}
else
{
lean_inc(v_snd_2220_);
lean_inc(v_fst_2219_);
lean_dec(v_a_2218_);
v___x_2222_ = lean_box(0);
v_isShared_2223_ = v_isSharedCheck_2232_;
goto v_resetjp_2221_;
}
v_resetjp_2221_:
{
lean_object* v___x_2225_; 
if (v_isShared_2223_ == 0)
{
lean_ctor_set(v___x_2222_, 1, v_fst_2219_);
lean_ctor_set(v___x_2222_, 0, v_fst_2212_);
v___x_2225_ = v___x_2222_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2231_; 
v_reuseFailAlloc_2231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2231_, 0, v_fst_2212_);
lean_ctor_set(v_reuseFailAlloc_2231_, 1, v_fst_2219_);
v___x_2225_ = v_reuseFailAlloc_2231_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2229_; 
v___x_2226_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__12, &l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__12_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__12);
v___x_2227_ = l_Lean_mkApp4(v___x_2226_, v_typeExpr_2129_, v_typeExpr_x27_2130_, v_snd_2213_, v_snd_2220_);
lean_inc_ref(v___x_2227_);
if (v_isShared_2216_ == 0)
{
lean_ctor_set(v___x_2215_, 1, v___x_2227_);
lean_ctor_set(v___x_2215_, 0, v___x_2225_);
v___x_2229_ = v___x_2215_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v___x_2225_);
lean_ctor_set(v_reuseFailAlloc_2230_, 1, v___x_2227_);
v___x_2229_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
v_a_2153_ = v___x_2229_;
v_snd_2154_ = v___x_2227_;
goto v___jp_2152_;
}
}
}
}
else
{
lean_object* v_a_2233_; lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2240_; 
lean_del_object(v___x_2215_);
lean_dec(v_snd_2213_);
lean_dec(v_fst_2212_);
lean_dec_ref_known(v___x_2151_, 1);
lean_dec(v_stx_2133_);
lean_dec_ref(v_typeExpr_x27_2130_);
lean_dec_ref(v_typeExpr_2129_);
v_a_2233_ = lean_ctor_get(v___x_2217_, 0);
v_isSharedCheck_2240_ = !lean_is_exclusive(v___x_2217_);
if (v_isSharedCheck_2240_ == 0)
{
v___x_2235_ = v___x_2217_;
v_isShared_2236_ = v_isSharedCheck_2240_;
goto v_resetjp_2234_;
}
else
{
lean_inc(v_a_2233_);
lean_dec(v___x_2217_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2240_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
lean_object* v___x_2238_; 
if (v_isShared_2236_ == 0)
{
v___x_2238_ = v___x_2235_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v_a_2233_);
v___x_2238_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
return v___x_2238_;
}
}
}
}
}
else
{
lean_object* v_a_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2249_; 
lean_dec(v_x_x27_2209_);
lean_dec_ref_known(v___x_2207_, 3);
lean_dec_ref_known(v___x_2151_, 1);
lean_dec(v_stx_2133_);
lean_dec_ref(v_ev_x27_2132_);
lean_dec_ref(v_typeExpr_x27_2130_);
lean_dec_ref(v_typeExpr_2129_);
v_a_2242_ = lean_ctor_get(v___x_2210_, 0);
v_isSharedCheck_2249_ = !lean_is_exclusive(v___x_2210_);
if (v_isSharedCheck_2249_ == 0)
{
v___x_2244_ = v___x_2210_;
v_isShared_2245_ = v_isSharedCheck_2249_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_a_2242_);
lean_dec(v___x_2210_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2249_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
lean_object* v___x_2247_; 
if (v_isShared_2245_ == 0)
{
v___x_2247_ = v___x_2244_;
goto v_reusejp_2246_;
}
else
{
lean_object* v_reuseFailAlloc_2248_; 
v_reuseFailAlloc_2248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2248_, 0, v_a_2242_);
v___x_2247_ = v_reuseFailAlloc_2248_;
goto v_reusejp_2246_;
}
v_reusejp_2246_:
{
return v___x_2247_;
}
}
}
}
}
}
}
}
}
v___jp_2152_:
{
lean_object* v___x_2155_; lean_object* v_infoState_2156_; uint8_t v_enabled_2157_; 
v___x_2155_ = lean_st_ref_get(v_a_2139_);
v_infoState_2156_ = lean_ctor_get(v___x_2155_, 8);
lean_inc_ref(v_infoState_2156_);
lean_dec(v___x_2155_);
v_enabled_2157_ = lean_ctor_get_uint8(v_infoState_2156_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2156_);
if (v_enabled_2157_ == 0)
{
lean_object* v___x_2158_; 
lean_dec_ref(v_snd_2154_);
lean_dec_ref_known(v___x_2151_, 1);
lean_dec(v_stx_2133_);
v___x_2158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2158_, 0, v_a_2153_);
return v___x_2158_;
}
else
{
lean_object* v___x_2159_; lean_object* v___x_2160_; uint8_t v___x_2161_; lean_object* v___x_2162_; 
v___x_2159_ = lean_box(0);
v___x_2160_ = lean_box(0);
v___x_2161_ = 0;
v___x_2162_ = l_Lean_Elab_Term_addTermInfo_x27(v_stx_2133_, v_snd_2154_, v___x_2151_, v___x_2159_, v___x_2160_, v___x_2161_, v___x_2161_, v_a_2134_, v_a_2135_, v_a_2136_, v_a_2137_, v_a_2138_, v_a_2139_);
if (lean_obj_tag(v___x_2162_) == 0)
{
lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2169_; 
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2162_);
if (v_isSharedCheck_2169_ == 0)
{
lean_object* v_unused_2170_; 
v_unused_2170_ = lean_ctor_get(v___x_2162_, 0);
lean_dec(v_unused_2170_);
v___x_2164_ = v___x_2162_;
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
else
{
lean_dec(v___x_2162_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v___x_2167_; 
if (v_isShared_2165_ == 0)
{
lean_ctor_set(v___x_2164_, 0, v_a_2153_);
v___x_2167_ = v___x_2164_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_a_2153_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
else
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2178_; 
lean_dec_ref(v_a_2153_);
v_a_2171_ = lean_ctor_get(v___x_2162_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_2162_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2173_ = v___x_2162_;
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2162_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
lean_object* v___x_2176_; 
if (v_isShared_2174_ == 0)
{
v___x_2176_ = v___x_2173_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_a_2171_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
}
}
}
v___jp_2179_:
{
return v___y_2180_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___boxed(lean_object* v_typeExpr_2250_, lean_object* v_typeExpr_x27_2251_, lean_object* v_ev_2252_, lean_object* v_ev_x27_2253_, lean_object* v_stx_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_){
_start:
{
lean_object* v_res_2262_; 
v_res_2262_ = l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg(v_typeExpr_2250_, v_typeExpr_x27_2251_, v_ev_2252_, v_ev_x27_2253_, v_stx_2254_, v_a_2255_, v_a_2256_, v_a_2257_, v_a_2258_, v_a_2259_, v_a_2260_);
lean_dec(v_a_2260_);
lean_dec_ref(v_a_2259_);
lean_dec(v_a_2258_);
lean_dec_ref(v_a_2257_);
lean_dec(v_a_2256_);
lean_dec_ref(v_a_2255_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx(lean_object* v_00_u03b1_2263_, lean_object* v_00_u03b1_x27_2264_, lean_object* v_typeExpr_2265_, lean_object* v_typeExpr_x27_2266_, lean_object* v_ev_2267_, lean_object* v_ev_x27_2268_, lean_object* v_stx_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_, lean_object* v_a_2272_, lean_object* v_a_2273_, lean_object* v_a_2274_, lean_object* v_a_2275_){
_start:
{
lean_object* v___x_2277_; 
v___x_2277_ = l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg(v_typeExpr_2265_, v_typeExpr_x27_2266_, v_ev_2267_, v_ev_x27_2268_, v_stx_2269_, v_a_2270_, v_a_2271_, v_a_2272_, v_a_2273_, v_a_2274_, v_a_2275_);
return v___x_2277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___boxed(lean_object* v_00_u03b1_2278_, lean_object* v_00_u03b1_x27_2279_, lean_object* v_typeExpr_2280_, lean_object* v_typeExpr_x27_2281_, lean_object* v_ev_2282_, lean_object* v_ev_x27_2283_, lean_object* v_stx_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_, lean_object* v_a_2291_){
_start:
{
lean_object* v_res_2292_; 
v_res_2292_ = l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx(v_00_u03b1_2278_, v_00_u03b1_x27_2279_, v_typeExpr_2280_, v_typeExpr_x27_2281_, v_ev_2282_, v_ev_x27_2283_, v_stx_2284_, v_a_2285_, v_a_2286_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_);
lean_dec(v_a_2290_);
lean_dec_ref(v_a_2289_);
lean_dec(v_a_2288_);
lean_dec_ref(v_a_2287_);
lean_dec(v_a_2286_);
lean_dec_ref(v_a_2285_);
return v_res_2292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__0(lean_object* v_00_u03b1_2293_, lean_object* v_c_2294_, lean_object* v_f_2295_, lean_object* v_x_2296_){
_start:
{
lean_object* v_fst_2297_; lean_object* v_snd_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2309_; 
v_fst_2297_ = lean_ctor_get(v_x_2296_, 0);
v_snd_2298_ = lean_ctor_get(v_x_2296_, 1);
v_isSharedCheck_2309_ = !lean_is_exclusive(v_x_2296_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2300_ = v_x_2296_;
v_isShared_2301_ = v_isSharedCheck_2309_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_snd_2298_);
lean_inc(v_fst_2297_);
lean_dec(v_x_2296_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2309_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2307_; 
v___x_2302_ = lean_apply_1(v_f_2295_, v_fst_2297_);
v___x_2303_ = lean_box(0);
v___x_2304_ = l_Lean_Expr_const___override(v_c_2294_, v___x_2303_);
v___x_2305_ = l_Lean_Expr_app___override(v___x_2304_, v_snd_2298_);
if (v_isShared_2301_ == 0)
{
lean_ctor_set(v___x_2300_, 1, v___x_2305_);
lean_ctor_set(v___x_2300_, 0, v___x_2302_);
v___x_2307_ = v___x_2300_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v___x_2302_);
lean_ctor_set(v_reuseFailAlloc_2308_, 1, v___x_2305_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__1(uint8_t v_v_2310_){
_start:
{
lean_object* v___x_2311_; 
v___x_2311_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2311_, 0, v_v_2310_);
return v___x_2311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__1___boxed(lean_object* v_v_2312_){
_start:
{
uint8_t v_v_boxed_2313_; lean_object* v_res_2314_; 
v_v_boxed_2313_ = lean_unbox(v_v_2312_);
v_res_2314_ = l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__1(v_v_boxed_2313_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__2(lean_object* v_v_2315_){
_start:
{
lean_object* v___x_2316_; 
v___x_2316_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2316_, 0, v_v_2315_);
return v___x_2316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__3(lean_object* v_v_2317_){
_start:
{
lean_object* v___x_2318_; 
v___x_2318_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2318_, 0, v_v_2317_);
return v___x_2318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__4(lean_object* v_v_2319_){
_start:
{
lean_object* v___x_2320_; 
v___x_2320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2320_, 0, v_v_2319_);
return v___x_2320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__5(lean_object* v_v_2321_){
_start:
{
lean_object* v___x_2322_; 
v___x_2322_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2322_, 0, v_v_2321_);
return v___x_2322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx(lean_object* v_stx_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_, lean_object* v_a_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_){
_start:
{
lean_object* v___f_2362_; lean_object* v___f_2363_; lean_object* v___f_2364_; lean_object* v___f_2365_; lean_object* v___f_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; 
v___f_2362_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__0));
v___f_2363_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__1));
v___f_2364_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__2));
v___f_2365_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__3));
v___f_2366_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__4));
v___x_2367_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__7));
v___x_2368_ = l_Lean_Meta_saveState___redArg(v_a_2358_, v_a_2360_);
if (lean_obj_tag(v___x_2368_) == 0)
{
lean_object* v_a_2369_; lean_object* v___x_2370_; 
v_a_2369_ = lean_ctor_get(v___x_2368_, 0);
lean_inc(v_a_2369_);
lean_dec_ref_known(v___x_2368_, 1);
lean_inc(v_stx_2354_);
v___x_2370_ = l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx(v_stx_2354_, v_a_2355_, v_a_2356_, v_a_2357_, v_a_2358_, v_a_2359_, v_a_2360_);
if (lean_obj_tag(v___x_2370_) == 0)
{
lean_object* v_a_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2379_; 
lean_dec(v_a_2369_);
lean_dec(v_stx_2354_);
v_a_2371_ = lean_ctor_get(v___x_2370_, 0);
v_isSharedCheck_2379_ = !lean_is_exclusive(v___x_2370_);
if (v_isSharedCheck_2379_ == 0)
{
v___x_2373_ = v___x_2370_;
v_isShared_2374_ = v_isSharedCheck_2379_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_a_2371_);
lean_dec(v___x_2370_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2379_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___x_2375_; lean_object* v___x_2377_; 
v___x_2375_ = l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__0(lean_box(0), v___x_2367_, v___f_2362_, v_a_2371_);
if (v_isShared_2374_ == 0)
{
lean_ctor_set(v___x_2373_, 0, v___x_2375_);
v___x_2377_ = v___x_2373_;
goto v_reusejp_2376_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v___x_2375_);
v___x_2377_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2376_;
}
v_reusejp_2376_:
{
return v___x_2377_;
}
}
}
else
{
lean_object* v_a_2380_; lean_object* v___x_2382_; uint8_t v_isShared_2383_; uint8_t v_isSharedCheck_2559_; 
v_a_2380_ = lean_ctor_get(v___x_2370_, 0);
v_isSharedCheck_2559_ = !lean_is_exclusive(v___x_2370_);
if (v_isSharedCheck_2559_ == 0)
{
v___x_2382_ = v___x_2370_;
v_isShared_2383_ = v_isSharedCheck_2559_;
goto v_resetjp_2381_;
}
else
{
lean_inc(v_a_2380_);
lean_dec(v___x_2370_);
v___x_2382_ = lean_box(0);
v_isShared_2383_ = v_isSharedCheck_2559_;
goto v_resetjp_2381_;
}
v_resetjp_2381_:
{
lean_object* v___x_2385_; 
lean_inc(v_a_2380_);
if (v_isShared_2383_ == 0)
{
v___x_2385_ = v___x_2382_;
goto v_reusejp_2384_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v_a_2380_);
v___x_2385_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2384_;
}
v_reusejp_2384_:
{
uint8_t v___x_2386_; 
v___x_2386_ = l_Lean_Exception_isInterrupt(v_a_2380_);
if (v___x_2386_ == 0)
{
uint8_t v___x_2387_; 
v___x_2387_ = l_Lean_Exception_isRuntime(v_a_2380_);
if (v___x_2387_ == 0)
{
lean_object* v___x_2388_; 
lean_dec_ref(v___x_2385_);
v___x_2388_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2369_, v_a_2358_, v_a_2360_);
if (lean_obj_tag(v___x_2388_) == 0)
{
lean_object* v___x_2389_; lean_object* v___x_2390_; 
lean_dec_ref_known(v___x_2388_, 1);
v___x_2389_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__9));
v___x_2390_ = l_Lean_Meta_saveState___redArg(v_a_2358_, v_a_2360_);
if (lean_obj_tag(v___x_2390_) == 0)
{
lean_object* v_a_2391_; lean_object* v___x_2392_; 
v_a_2391_ = lean_ctor_get(v___x_2390_, 0);
lean_inc(v_a_2391_);
lean_dec_ref_known(v___x_2390_, 1);
lean_inc(v_stx_2354_);
v___x_2392_ = l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx(v_stx_2354_, v_a_2355_, v_a_2356_, v_a_2357_, v_a_2358_, v_a_2359_, v_a_2360_);
if (lean_obj_tag(v___x_2392_) == 0)
{
lean_object* v_a_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2401_; 
lean_dec(v_a_2391_);
lean_dec(v_stx_2354_);
v_a_2393_ = lean_ctor_get(v___x_2392_, 0);
v_isSharedCheck_2401_ = !lean_is_exclusive(v___x_2392_);
if (v_isSharedCheck_2401_ == 0)
{
v___x_2395_ = v___x_2392_;
v_isShared_2396_ = v_isSharedCheck_2401_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_a_2393_);
lean_dec(v___x_2392_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2401_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v___x_2397_; lean_object* v___x_2399_; 
v___x_2397_ = l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__0(lean_box(0), v___x_2389_, v___f_2363_, v_a_2393_);
if (v_isShared_2396_ == 0)
{
lean_ctor_set(v___x_2395_, 0, v___x_2397_);
v___x_2399_ = v___x_2395_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v___x_2397_);
v___x_2399_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
return v___x_2399_;
}
}
}
else
{
lean_object* v_a_2402_; lean_object* v___x_2404_; uint8_t v_isShared_2405_; uint8_t v_isSharedCheck_2541_; 
v_a_2402_ = lean_ctor_get(v___x_2392_, 0);
v_isSharedCheck_2541_ = !lean_is_exclusive(v___x_2392_);
if (v_isSharedCheck_2541_ == 0)
{
v___x_2404_ = v___x_2392_;
v_isShared_2405_ = v_isSharedCheck_2541_;
goto v_resetjp_2403_;
}
else
{
lean_inc(v_a_2402_);
lean_dec(v___x_2392_);
v___x_2404_ = lean_box(0);
v_isShared_2405_ = v_isSharedCheck_2541_;
goto v_resetjp_2403_;
}
v_resetjp_2403_:
{
lean_object* v___x_2407_; 
lean_inc(v_a_2402_);
if (v_isShared_2405_ == 0)
{
v___x_2407_ = v___x_2404_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v_a_2402_);
v___x_2407_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
uint8_t v___x_2408_; 
v___x_2408_ = l_Lean_Exception_isInterrupt(v_a_2402_);
if (v___x_2408_ == 0)
{
uint8_t v___x_2409_; 
v___x_2409_ = l_Lean_Exception_isRuntime(v_a_2402_);
if (v___x_2409_ == 0)
{
lean_object* v___x_2410_; 
lean_dec_ref(v___x_2407_);
v___x_2410_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2391_, v_a_2358_, v_a_2360_);
if (lean_obj_tag(v___x_2410_) == 0)
{
lean_object* v___x_2411_; lean_object* v___x_2412_; 
lean_dec_ref_known(v___x_2410_, 1);
v___x_2411_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__11));
v___x_2412_ = l_Lean_Meta_saveState___redArg(v_a_2358_, v_a_2360_);
if (lean_obj_tag(v___x_2412_) == 0)
{
lean_object* v_a_2413_; lean_object* v___x_2414_; 
v_a_2413_ = lean_ctor_get(v___x_2412_, 0);
lean_inc(v_a_2413_);
lean_dec_ref_known(v___x_2412_, 1);
lean_inc(v_stx_2354_);
v___x_2414_ = l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx(v_stx_2354_, v_a_2355_, v_a_2356_, v_a_2357_, v_a_2358_, v_a_2359_, v_a_2360_);
if (lean_obj_tag(v___x_2414_) == 0)
{
lean_object* v_a_2415_; lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2423_; 
lean_dec(v_a_2413_);
lean_dec(v_stx_2354_);
v_a_2415_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2423_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2423_ == 0)
{
v___x_2417_ = v___x_2414_;
v_isShared_2418_ = v_isSharedCheck_2423_;
goto v_resetjp_2416_;
}
else
{
lean_inc(v_a_2415_);
lean_dec(v___x_2414_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2423_;
goto v_resetjp_2416_;
}
v_resetjp_2416_:
{
lean_object* v___x_2419_; lean_object* v___x_2421_; 
v___x_2419_ = l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__0(lean_box(0), v___x_2411_, v___f_2364_, v_a_2415_);
if (v_isShared_2418_ == 0)
{
lean_ctor_set(v___x_2417_, 0, v___x_2419_);
v___x_2421_ = v___x_2417_;
goto v_reusejp_2420_;
}
else
{
lean_object* v_reuseFailAlloc_2422_; 
v_reuseFailAlloc_2422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2422_, 0, v___x_2419_);
v___x_2421_ = v_reuseFailAlloc_2422_;
goto v_reusejp_2420_;
}
v_reusejp_2420_:
{
return v___x_2421_;
}
}
}
else
{
lean_object* v_a_2424_; lean_object* v___x_2426_; uint8_t v_isShared_2427_; uint8_t v_isSharedCheck_2523_; 
v_a_2424_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2523_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2523_ == 0)
{
v___x_2426_ = v___x_2414_;
v_isShared_2427_ = v_isSharedCheck_2523_;
goto v_resetjp_2425_;
}
else
{
lean_inc(v_a_2424_);
lean_dec(v___x_2414_);
v___x_2426_ = lean_box(0);
v_isShared_2427_ = v_isSharedCheck_2523_;
goto v_resetjp_2425_;
}
v_resetjp_2425_:
{
lean_object* v___x_2429_; 
lean_inc(v_a_2424_);
if (v_isShared_2427_ == 0)
{
v___x_2429_ = v___x_2426_;
goto v_reusejp_2428_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v_a_2424_);
v___x_2429_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2428_;
}
v_reusejp_2428_:
{
uint8_t v___x_2430_; 
v___x_2430_ = l_Lean_Exception_isInterrupt(v_a_2424_);
if (v___x_2430_ == 0)
{
uint8_t v___x_2431_; 
v___x_2431_ = l_Lean_Exception_isRuntime(v_a_2424_);
if (v___x_2431_ == 0)
{
lean_object* v___x_2432_; 
lean_dec_ref(v___x_2429_);
v___x_2432_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2413_, v_a_2358_, v_a_2360_);
if (lean_obj_tag(v___x_2432_) == 0)
{
lean_object* v___x_2433_; lean_object* v___x_2434_; 
lean_dec_ref_known(v___x_2432_, 1);
v___x_2433_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__13));
v___x_2434_ = l_Lean_Meta_saveState___redArg(v_a_2358_, v_a_2360_);
if (lean_obj_tag(v___x_2434_) == 0)
{
lean_object* v_a_2435_; lean_object* v___x_2436_; 
v_a_2435_ = lean_ctor_get(v___x_2434_, 0);
lean_inc(v_a_2435_);
lean_dec_ref_known(v___x_2434_, 1);
lean_inc(v_stx_2354_);
v___x_2436_ = l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx(v_stx_2354_, v_a_2355_, v_a_2356_, v_a_2357_, v_a_2358_, v_a_2359_, v_a_2360_);
if (lean_obj_tag(v___x_2436_) == 0)
{
lean_object* v_a_2437_; lean_object* v___x_2439_; uint8_t v_isShared_2440_; uint8_t v_isSharedCheck_2445_; 
lean_dec(v_a_2435_);
lean_dec(v_stx_2354_);
v_a_2437_ = lean_ctor_get(v___x_2436_, 0);
v_isSharedCheck_2445_ = !lean_is_exclusive(v___x_2436_);
if (v_isSharedCheck_2445_ == 0)
{
v___x_2439_ = v___x_2436_;
v_isShared_2440_ = v_isSharedCheck_2445_;
goto v_resetjp_2438_;
}
else
{
lean_inc(v_a_2437_);
lean_dec(v___x_2436_);
v___x_2439_ = lean_box(0);
v_isShared_2440_ = v_isSharedCheck_2445_;
goto v_resetjp_2438_;
}
v_resetjp_2438_:
{
lean_object* v___x_2441_; lean_object* v___x_2443_; 
v___x_2441_ = l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__0(lean_box(0), v___x_2433_, v___f_2365_, v_a_2437_);
if (v_isShared_2440_ == 0)
{
lean_ctor_set(v___x_2439_, 0, v___x_2441_);
v___x_2443_ = v___x_2439_;
goto v_reusejp_2442_;
}
else
{
lean_object* v_reuseFailAlloc_2444_; 
v_reuseFailAlloc_2444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2444_, 0, v___x_2441_);
v___x_2443_ = v_reuseFailAlloc_2444_;
goto v_reusejp_2442_;
}
v_reusejp_2442_:
{
return v___x_2443_;
}
}
}
else
{
lean_object* v_a_2446_; lean_object* v___x_2448_; uint8_t v_isShared_2449_; uint8_t v_isSharedCheck_2505_; 
v_a_2446_ = lean_ctor_get(v___x_2436_, 0);
v_isSharedCheck_2505_ = !lean_is_exclusive(v___x_2436_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2448_ = v___x_2436_;
v_isShared_2449_ = v_isSharedCheck_2505_;
goto v_resetjp_2447_;
}
else
{
lean_inc(v_a_2446_);
lean_dec(v___x_2436_);
v___x_2448_ = lean_box(0);
v_isShared_2449_ = v_isSharedCheck_2505_;
goto v_resetjp_2447_;
}
v_resetjp_2447_:
{
lean_object* v___x_2451_; 
lean_inc(v_a_2446_);
if (v_isShared_2449_ == 0)
{
v___x_2451_ = v___x_2448_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v_a_2446_);
v___x_2451_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2450_;
}
v_reusejp_2450_:
{
uint8_t v___x_2452_; 
v___x_2452_ = l_Lean_Exception_isInterrupt(v_a_2446_);
if (v___x_2452_ == 0)
{
uint8_t v___x_2453_; 
v___x_2453_ = l_Lean_Exception_isRuntime(v_a_2446_);
if (v___x_2453_ == 0)
{
lean_object* v___x_2454_; 
lean_dec_ref(v___x_2451_);
v___x_2454_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2435_, v_a_2358_, v_a_2360_);
if (lean_obj_tag(v___x_2454_) == 0)
{
lean_object* v___x_2455_; lean_object* v___x_2456_; 
lean_dec_ref_known(v___x_2454_, 1);
v___x_2455_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__15));
v___x_2456_ = l_Lean_Meta_saveState___redArg(v_a_2358_, v_a_2360_);
if (lean_obj_tag(v___x_2456_) == 0)
{
lean_object* v_a_2457_; lean_object* v___x_2458_; 
v_a_2457_ = lean_ctor_get(v___x_2456_, 0);
lean_inc(v_a_2457_);
lean_dec_ref_known(v___x_2456_, 1);
v___x_2458_ = l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx(v_stx_2354_, v_a_2355_, v_a_2356_, v_a_2357_, v_a_2358_, v_a_2359_, v_a_2360_);
if (lean_obj_tag(v___x_2458_) == 0)
{
lean_object* v_a_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2467_; 
lean_dec(v_a_2457_);
v_a_2459_ = lean_ctor_get(v___x_2458_, 0);
v_isSharedCheck_2467_ = !lean_is_exclusive(v___x_2458_);
if (v_isSharedCheck_2467_ == 0)
{
v___x_2461_ = v___x_2458_;
v_isShared_2462_ = v_isSharedCheck_2467_;
goto v_resetjp_2460_;
}
else
{
lean_inc(v_a_2459_);
lean_dec(v___x_2458_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2467_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
lean_object* v___x_2463_; lean_object* v___x_2465_; 
v___x_2463_ = l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___lam__0(lean_box(0), v___x_2455_, v___f_2366_, v_a_2459_);
if (v_isShared_2462_ == 0)
{
lean_ctor_set(v___x_2461_, 0, v___x_2463_);
v___x_2465_ = v___x_2461_;
goto v_reusejp_2464_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v___x_2463_);
v___x_2465_ = v_reuseFailAlloc_2466_;
goto v_reusejp_2464_;
}
v_reusejp_2464_:
{
return v___x_2465_;
}
}
}
else
{
lean_object* v_a_2468_; lean_object* v___x_2470_; uint8_t v_isShared_2471_; uint8_t v_isSharedCheck_2487_; 
v_a_2468_ = lean_ctor_get(v___x_2458_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___x_2458_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2470_ = v___x_2458_;
v_isShared_2471_ = v_isSharedCheck_2487_;
goto v_resetjp_2469_;
}
else
{
lean_inc(v_a_2468_);
lean_dec(v___x_2458_);
v___x_2470_ = lean_box(0);
v_isShared_2471_ = v_isSharedCheck_2487_;
goto v_resetjp_2469_;
}
v_resetjp_2469_:
{
lean_object* v___x_2473_; 
lean_inc(v_a_2468_);
if (v_isShared_2471_ == 0)
{
v___x_2473_ = v___x_2470_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_a_2468_);
v___x_2473_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
uint8_t v___x_2474_; 
v___x_2474_ = l_Lean_Exception_isInterrupt(v_a_2468_);
if (v___x_2474_ == 0)
{
uint8_t v___x_2475_; 
v___x_2475_ = l_Lean_Exception_isRuntime(v_a_2468_);
if (v___x_2475_ == 0)
{
lean_object* v___x_2476_; 
lean_dec_ref(v___x_2473_);
v___x_2476_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2457_, v_a_2358_, v_a_2360_);
if (lean_obj_tag(v___x_2476_) == 0)
{
lean_object* v___x_2477_; 
lean_dec_ref_known(v___x_2476_, 1);
v___x_2477_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ConfigEval_EvalTerm_evalBoolStx_spec__0___redArg();
return v___x_2477_;
}
else
{
lean_object* v_a_2478_; lean_object* v___x_2480_; uint8_t v_isShared_2481_; uint8_t v_isSharedCheck_2485_; 
v_a_2478_ = lean_ctor_get(v___x_2476_, 0);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___x_2476_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2480_ = v___x_2476_;
v_isShared_2481_ = v_isSharedCheck_2485_;
goto v_resetjp_2479_;
}
else
{
lean_inc(v_a_2478_);
lean_dec(v___x_2476_);
v___x_2480_ = lean_box(0);
v_isShared_2481_ = v_isSharedCheck_2485_;
goto v_resetjp_2479_;
}
v_resetjp_2479_:
{
lean_object* v___x_2483_; 
if (v_isShared_2481_ == 0)
{
v___x_2483_ = v___x_2480_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v_a_2478_);
v___x_2483_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
return v___x_2483_;
}
}
}
}
else
{
lean_dec(v_a_2457_);
return v___x_2473_;
}
}
else
{
lean_dec(v_a_2468_);
lean_dec(v_a_2457_);
return v___x_2473_;
}
}
}
}
}
else
{
lean_object* v_a_2488_; lean_object* v___x_2490_; uint8_t v_isShared_2491_; uint8_t v_isSharedCheck_2495_; 
lean_dec(v_stx_2354_);
v_a_2488_ = lean_ctor_get(v___x_2456_, 0);
v_isSharedCheck_2495_ = !lean_is_exclusive(v___x_2456_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2490_ = v___x_2456_;
v_isShared_2491_ = v_isSharedCheck_2495_;
goto v_resetjp_2489_;
}
else
{
lean_inc(v_a_2488_);
lean_dec(v___x_2456_);
v___x_2490_ = lean_box(0);
v_isShared_2491_ = v_isSharedCheck_2495_;
goto v_resetjp_2489_;
}
v_resetjp_2489_:
{
lean_object* v___x_2493_; 
if (v_isShared_2491_ == 0)
{
v___x_2493_ = v___x_2490_;
goto v_reusejp_2492_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v_a_2488_);
v___x_2493_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2492_;
}
v_reusejp_2492_:
{
return v___x_2493_;
}
}
}
}
else
{
lean_object* v_a_2496_; lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2503_; 
lean_dec(v_stx_2354_);
v_a_2496_ = lean_ctor_get(v___x_2454_, 0);
v_isSharedCheck_2503_ = !lean_is_exclusive(v___x_2454_);
if (v_isSharedCheck_2503_ == 0)
{
v___x_2498_ = v___x_2454_;
v_isShared_2499_ = v_isSharedCheck_2503_;
goto v_resetjp_2497_;
}
else
{
lean_inc(v_a_2496_);
lean_dec(v___x_2454_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2503_;
goto v_resetjp_2497_;
}
v_resetjp_2497_:
{
lean_object* v___x_2501_; 
if (v_isShared_2499_ == 0)
{
v___x_2501_ = v___x_2498_;
goto v_reusejp_2500_;
}
else
{
lean_object* v_reuseFailAlloc_2502_; 
v_reuseFailAlloc_2502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2502_, 0, v_a_2496_);
v___x_2501_ = v_reuseFailAlloc_2502_;
goto v_reusejp_2500_;
}
v_reusejp_2500_:
{
return v___x_2501_;
}
}
}
}
else
{
lean_dec(v_a_2435_);
lean_dec(v_stx_2354_);
return v___x_2451_;
}
}
else
{
lean_dec(v_a_2446_);
lean_dec(v_a_2435_);
lean_dec(v_stx_2354_);
return v___x_2451_;
}
}
}
}
}
else
{
lean_object* v_a_2506_; lean_object* v___x_2508_; uint8_t v_isShared_2509_; uint8_t v_isSharedCheck_2513_; 
lean_dec(v_stx_2354_);
v_a_2506_ = lean_ctor_get(v___x_2434_, 0);
v_isSharedCheck_2513_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2513_ == 0)
{
v___x_2508_ = v___x_2434_;
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
else
{
lean_inc(v_a_2506_);
lean_dec(v___x_2434_);
v___x_2508_ = lean_box(0);
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
v_resetjp_2507_:
{
lean_object* v___x_2511_; 
if (v_isShared_2509_ == 0)
{
v___x_2511_ = v___x_2508_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v_a_2506_);
v___x_2511_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
return v___x_2511_;
}
}
}
}
else
{
lean_object* v_a_2514_; lean_object* v___x_2516_; uint8_t v_isShared_2517_; uint8_t v_isSharedCheck_2521_; 
lean_dec(v_stx_2354_);
v_a_2514_ = lean_ctor_get(v___x_2432_, 0);
v_isSharedCheck_2521_ = !lean_is_exclusive(v___x_2432_);
if (v_isSharedCheck_2521_ == 0)
{
v___x_2516_ = v___x_2432_;
v_isShared_2517_ = v_isSharedCheck_2521_;
goto v_resetjp_2515_;
}
else
{
lean_inc(v_a_2514_);
lean_dec(v___x_2432_);
v___x_2516_ = lean_box(0);
v_isShared_2517_ = v_isSharedCheck_2521_;
goto v_resetjp_2515_;
}
v_resetjp_2515_:
{
lean_object* v___x_2519_; 
if (v_isShared_2517_ == 0)
{
v___x_2519_ = v___x_2516_;
goto v_reusejp_2518_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v_a_2514_);
v___x_2519_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2518_;
}
v_reusejp_2518_:
{
return v___x_2519_;
}
}
}
}
else
{
lean_dec(v_a_2413_);
lean_dec(v_stx_2354_);
return v___x_2429_;
}
}
else
{
lean_dec(v_a_2424_);
lean_dec(v_a_2413_);
lean_dec(v_stx_2354_);
return v___x_2429_;
}
}
}
}
}
else
{
lean_object* v_a_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2531_; 
lean_dec(v_stx_2354_);
v_a_2524_ = lean_ctor_get(v___x_2412_, 0);
v_isSharedCheck_2531_ = !lean_is_exclusive(v___x_2412_);
if (v_isSharedCheck_2531_ == 0)
{
v___x_2526_ = v___x_2412_;
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_a_2524_);
lean_dec(v___x_2412_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___x_2529_; 
if (v_isShared_2527_ == 0)
{
v___x_2529_ = v___x_2526_;
goto v_reusejp_2528_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v_a_2524_);
v___x_2529_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2528_;
}
v_reusejp_2528_:
{
return v___x_2529_;
}
}
}
}
else
{
lean_object* v_a_2532_; lean_object* v___x_2534_; uint8_t v_isShared_2535_; uint8_t v_isSharedCheck_2539_; 
lean_dec(v_stx_2354_);
v_a_2532_ = lean_ctor_get(v___x_2410_, 0);
v_isSharedCheck_2539_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2539_ == 0)
{
v___x_2534_ = v___x_2410_;
v_isShared_2535_ = v_isSharedCheck_2539_;
goto v_resetjp_2533_;
}
else
{
lean_inc(v_a_2532_);
lean_dec(v___x_2410_);
v___x_2534_ = lean_box(0);
v_isShared_2535_ = v_isSharedCheck_2539_;
goto v_resetjp_2533_;
}
v_resetjp_2533_:
{
lean_object* v___x_2537_; 
if (v_isShared_2535_ == 0)
{
v___x_2537_ = v___x_2534_;
goto v_reusejp_2536_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v_a_2532_);
v___x_2537_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2536_;
}
v_reusejp_2536_:
{
return v___x_2537_;
}
}
}
}
else
{
lean_dec(v_a_2391_);
lean_dec(v_stx_2354_);
return v___x_2407_;
}
}
else
{
lean_dec(v_a_2402_);
lean_dec(v_a_2391_);
lean_dec(v_stx_2354_);
return v___x_2407_;
}
}
}
}
}
else
{
lean_object* v_a_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2549_; 
lean_dec(v_stx_2354_);
v_a_2542_ = lean_ctor_get(v___x_2390_, 0);
v_isSharedCheck_2549_ = !lean_is_exclusive(v___x_2390_);
if (v_isSharedCheck_2549_ == 0)
{
v___x_2544_ = v___x_2390_;
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_a_2542_);
lean_dec(v___x_2390_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___x_2547_; 
if (v_isShared_2545_ == 0)
{
v___x_2547_ = v___x_2544_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v_a_2542_);
v___x_2547_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
return v___x_2547_;
}
}
}
}
else
{
lean_object* v_a_2550_; lean_object* v___x_2552_; uint8_t v_isShared_2553_; uint8_t v_isSharedCheck_2557_; 
lean_dec(v_stx_2354_);
v_a_2550_ = lean_ctor_get(v___x_2388_, 0);
v_isSharedCheck_2557_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2552_ = v___x_2388_;
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
else
{
lean_inc(v_a_2550_);
lean_dec(v___x_2388_);
v___x_2552_ = lean_box(0);
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
v_resetjp_2551_:
{
lean_object* v___x_2555_; 
if (v_isShared_2553_ == 0)
{
v___x_2555_ = v___x_2552_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2556_; 
v_reuseFailAlloc_2556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2556_, 0, v_a_2550_);
v___x_2555_ = v_reuseFailAlloc_2556_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
return v___x_2555_;
}
}
}
}
else
{
lean_dec(v_a_2369_);
lean_dec(v_stx_2354_);
return v___x_2385_;
}
}
else
{
lean_dec(v_a_2380_);
lean_dec(v_a_2369_);
lean_dec(v_stx_2354_);
return v___x_2385_;
}
}
}
}
}
else
{
lean_object* v_a_2560_; lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2567_; 
lean_dec(v_stx_2354_);
v_a_2560_ = lean_ctor_get(v___x_2368_, 0);
v_isSharedCheck_2567_ = !lean_is_exclusive(v___x_2368_);
if (v_isSharedCheck_2567_ == 0)
{
v___x_2562_ = v___x_2368_;
v_isShared_2563_ = v_isSharedCheck_2567_;
goto v_resetjp_2561_;
}
else
{
lean_inc(v_a_2560_);
lean_dec(v___x_2368_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2567_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
lean_object* v___x_2565_; 
if (v_isShared_2563_ == 0)
{
v___x_2565_ = v___x_2562_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v_a_2560_);
v___x_2565_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
return v___x_2565_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___boxed(lean_object* v_stx_2568_, lean_object* v_a_2569_, lean_object* v_a_2570_, lean_object* v_a_2571_, lean_object* v_a_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_){
_start:
{
lean_object* v_res_2576_; 
v_res_2576_ = l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx(v_stx_2568_, v_a_2569_, v_a_2570_, v_a_2571_, v_a_2572_, v_a_2573_, v_a_2574_);
lean_dec(v_a_2574_);
lean_dec_ref(v_a_2573_);
lean_dec(v_a_2572_);
lean_dec_ref(v_a_2571_);
lean_dec(v_a_2570_);
lean_dec_ref(v_a_2569_);
return v_res_2576_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__1(void){
_start:
{
lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; 
v___x_2578_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__2);
v___x_2579_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__0));
v___x_2580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2580_, 0, v___x_2579_);
lean_ctor_set(v___x_2580_, 1, v___x_2578_);
return v___x_2580_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instBool(void){
_start:
{
lean_object* v___x_2581_; 
v___x_2581_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__1, &l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_instBool___closed__1);
return v___x_2581_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__1(void){
_start:
{
lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v___x_2583_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__2);
v___x_2584_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__0));
v___x_2585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2585_, 0, v___x_2584_);
lean_ctor_set(v___x_2585_, 1, v___x_2583_);
return v___x_2585_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instNat(void){
_start:
{
lean_object* v___x_2586_; 
v___x_2586_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__1, &l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_instNat___closed__1);
return v___x_2586_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__1(void){
_start:
{
lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; 
v___x_2588_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__2);
v___x_2589_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__0));
v___x_2590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2590_, 0, v___x_2589_);
lean_ctor_set(v___x_2590_, 1, v___x_2588_);
return v___x_2590_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instInt(void){
_start:
{
lean_object* v___x_2591_; 
v___x_2591_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__1, &l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_instInt___closed__1);
return v___x_2591_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__1(void){
_start:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; 
v___x_2593_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__2);
v___x_2594_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__0));
v___x_2595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2595_, 0, v___x_2594_);
lean_ctor_set(v___x_2595_, 1, v___x_2593_);
return v___x_2595_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instString(void){
_start:
{
lean_object* v___x_2596_; 
v___x_2596_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__1, &l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_instString___closed__1);
return v___x_2596_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__1(void){
_start:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2598_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__2);
v___x_2599_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__0));
v___x_2600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2599_);
lean_ctor_set(v___x_2600_, 1, v___x_2598_);
return v___x_2600_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instName(void){
_start:
{
lean_object* v___x_2601_; 
v___x_2601_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__1, &l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_instName___closed__1);
return v___x_2601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instOption___redArg(lean_object* v_inst_2602_){
_start:
{
lean_object* v_evalTerm_2603_; lean_object* v_typeExpr_2604_; lean_object* v___x_2606_; uint8_t v_isShared_2607_; uint8_t v_isSharedCheck_2614_; 
v_evalTerm_2603_ = lean_ctor_get(v_inst_2602_, 0);
v_typeExpr_2604_ = lean_ctor_get(v_inst_2602_, 1);
v_isSharedCheck_2614_ = !lean_is_exclusive(v_inst_2602_);
if (v_isSharedCheck_2614_ == 0)
{
v___x_2606_ = v_inst_2602_;
v_isShared_2607_ = v_isSharedCheck_2614_;
goto v_resetjp_2605_;
}
else
{
lean_inc(v_typeExpr_2604_);
lean_inc(v_evalTerm_2603_);
lean_dec(v_inst_2602_);
v___x_2606_ = lean_box(0);
v_isShared_2607_ = v_isSharedCheck_2614_;
goto v_resetjp_2605_;
}
v_resetjp_2605_:
{
lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2612_; 
lean_inc_ref(v_typeExpr_2604_);
v___x_2608_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___boxed), 11, 3);
lean_closure_set(v___x_2608_, 0, lean_box(0));
lean_closure_set(v___x_2608_, 1, v_typeExpr_2604_);
lean_closure_set(v___x_2608_, 2, v_evalTerm_2603_);
v___x_2609_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2);
v___x_2610_ = l_Lean_Expr_app___override(v___x_2609_, v_typeExpr_2604_);
if (v_isShared_2607_ == 0)
{
lean_ctor_set(v___x_2606_, 1, v___x_2610_);
lean_ctor_set(v___x_2606_, 0, v___x_2608_);
v___x_2612_ = v___x_2606_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v___x_2608_);
lean_ctor_set(v_reuseFailAlloc_2613_, 1, v___x_2610_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instOption(lean_object* v_00_u03b1_2615_, lean_object* v_inst_2616_){
_start:
{
lean_object* v___x_2617_; 
v___x_2617_ = l_Lean_Elab_ConfigEval_EvalTerm_instOption___redArg(v_inst_2616_);
return v___x_2617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instList___redArg(lean_object* v_inst_2618_){
_start:
{
lean_object* v_evalTerm_2619_; lean_object* v_typeExpr_2620_; lean_object* v___x_2622_; uint8_t v_isShared_2623_; uint8_t v_isSharedCheck_2630_; 
v_evalTerm_2619_ = lean_ctor_get(v_inst_2618_, 0);
v_typeExpr_2620_ = lean_ctor_get(v_inst_2618_, 1);
v_isSharedCheck_2630_ = !lean_is_exclusive(v_inst_2618_);
if (v_isSharedCheck_2630_ == 0)
{
v___x_2622_ = v_inst_2618_;
v_isShared_2623_ = v_isSharedCheck_2630_;
goto v_resetjp_2621_;
}
else
{
lean_inc(v_typeExpr_2620_);
lean_inc(v_evalTerm_2619_);
lean_dec(v_inst_2618_);
v___x_2622_ = lean_box(0);
v_isShared_2623_ = v_isSharedCheck_2630_;
goto v_resetjp_2621_;
}
v_resetjp_2621_:
{
lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2628_; 
lean_inc_ref(v_typeExpr_2620_);
v___x_2624_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___boxed), 11, 3);
lean_closure_set(v___x_2624_, 0, lean_box(0));
lean_closure_set(v___x_2624_, 1, v_typeExpr_2620_);
lean_closure_set(v___x_2624_, 2, v_evalTerm_2619_);
v___x_2625_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1, &l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1);
v___x_2626_ = l_Lean_Expr_app___override(v___x_2625_, v_typeExpr_2620_);
if (v_isShared_2623_ == 0)
{
lean_ctor_set(v___x_2622_, 1, v___x_2626_);
lean_ctor_set(v___x_2622_, 0, v___x_2624_);
v___x_2628_ = v___x_2622_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v___x_2624_);
lean_ctor_set(v_reuseFailAlloc_2629_, 1, v___x_2626_);
v___x_2628_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
return v___x_2628_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instList(lean_object* v_00_u03b1_2631_, lean_object* v_inst_2632_){
_start:
{
lean_object* v___x_2633_; 
v___x_2633_ = l_Lean_Elab_ConfigEval_EvalTerm_instList___redArg(v_inst_2632_);
return v___x_2633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instArray___redArg(lean_object* v_inst_2634_){
_start:
{
lean_object* v_evalTerm_2635_; lean_object* v_typeExpr_2636_; lean_object* v___x_2638_; uint8_t v_isShared_2639_; uint8_t v_isSharedCheck_2646_; 
v_evalTerm_2635_ = lean_ctor_get(v_inst_2634_, 0);
v_typeExpr_2636_ = lean_ctor_get(v_inst_2634_, 1);
v_isSharedCheck_2646_ = !lean_is_exclusive(v_inst_2634_);
if (v_isSharedCheck_2646_ == 0)
{
v___x_2638_ = v_inst_2634_;
v_isShared_2639_ = v_isSharedCheck_2646_;
goto v_resetjp_2637_;
}
else
{
lean_inc(v_typeExpr_2636_);
lean_inc(v_evalTerm_2635_);
lean_dec(v_inst_2634_);
v___x_2638_ = lean_box(0);
v_isShared_2639_ = v_isSharedCheck_2646_;
goto v_resetjp_2637_;
}
v_resetjp_2637_:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2644_; 
lean_inc_ref(v_typeExpr_2636_);
v___x_2640_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___boxed), 11, 3);
lean_closure_set(v___x_2640_, 0, lean_box(0));
lean_closure_set(v___x_2640_, 1, v_typeExpr_2636_);
lean_closure_set(v___x_2640_, 2, v_evalTerm_2635_);
v___x_2641_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2);
v___x_2642_ = l_Lean_Expr_app___override(v___x_2641_, v_typeExpr_2636_);
if (v_isShared_2639_ == 0)
{
lean_ctor_set(v___x_2638_, 1, v___x_2642_);
lean_ctor_set(v___x_2638_, 0, v___x_2640_);
v___x_2644_ = v___x_2638_;
goto v_reusejp_2643_;
}
else
{
lean_object* v_reuseFailAlloc_2645_; 
v_reuseFailAlloc_2645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2645_, 0, v___x_2640_);
lean_ctor_set(v_reuseFailAlloc_2645_, 1, v___x_2642_);
v___x_2644_ = v_reuseFailAlloc_2645_;
goto v_reusejp_2643_;
}
v_reusejp_2643_:
{
return v___x_2644_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instArray(lean_object* v_00_u03b1_2647_, lean_object* v_inst_2648_){
_start:
{
lean_object* v___x_2649_; 
v___x_2649_ = l_Lean_Elab_ConfigEval_EvalTerm_instArray___redArg(v_inst_2648_);
return v___x_2649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instProd___redArg(lean_object* v_inst_2650_, lean_object* v_inst_2651_){
_start:
{
lean_object* v_evalTerm_2652_; lean_object* v_typeExpr_2653_; lean_object* v_evalTerm_2654_; lean_object* v_typeExpr_2655_; lean_object* v___x_2657_; uint8_t v_isShared_2658_; uint8_t v_isSharedCheck_2665_; 
v_evalTerm_2652_ = lean_ctor_get(v_inst_2650_, 0);
lean_inc_ref(v_evalTerm_2652_);
v_typeExpr_2653_ = lean_ctor_get(v_inst_2650_, 1);
lean_inc_ref(v_typeExpr_2653_);
lean_dec_ref(v_inst_2650_);
v_evalTerm_2654_ = lean_ctor_get(v_inst_2651_, 0);
v_typeExpr_2655_ = lean_ctor_get(v_inst_2651_, 1);
v_isSharedCheck_2665_ = !lean_is_exclusive(v_inst_2651_);
if (v_isSharedCheck_2665_ == 0)
{
v___x_2657_ = v_inst_2651_;
v_isShared_2658_ = v_isSharedCheck_2665_;
goto v_resetjp_2656_;
}
else
{
lean_inc(v_typeExpr_2655_);
lean_inc(v_evalTerm_2654_);
lean_dec(v_inst_2651_);
v___x_2657_ = lean_box(0);
v_isShared_2658_ = v_isSharedCheck_2665_;
goto v_resetjp_2656_;
}
v_resetjp_2656_:
{
lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2663_; 
lean_inc_ref(v_typeExpr_2655_);
lean_inc_ref(v_typeExpr_2653_);
v___x_2659_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___boxed), 14, 6);
lean_closure_set(v___x_2659_, 0, lean_box(0));
lean_closure_set(v___x_2659_, 1, lean_box(0));
lean_closure_set(v___x_2659_, 2, v_typeExpr_2653_);
lean_closure_set(v___x_2659_, 3, v_typeExpr_2655_);
lean_closure_set(v___x_2659_, 4, v_evalTerm_2652_);
lean_closure_set(v___x_2659_, 5, v_evalTerm_2654_);
v___x_2660_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalProdStx___redArg___closed__3);
v___x_2661_ = l_Lean_mkAppB(v___x_2660_, v_typeExpr_2653_, v_typeExpr_2655_);
if (v_isShared_2658_ == 0)
{
lean_ctor_set(v___x_2657_, 1, v___x_2661_);
lean_ctor_set(v___x_2657_, 0, v___x_2659_);
v___x_2663_ = v___x_2657_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2664_; 
v_reuseFailAlloc_2664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2664_, 0, v___x_2659_);
lean_ctor_set(v_reuseFailAlloc_2664_, 1, v___x_2661_);
v___x_2663_ = v_reuseFailAlloc_2664_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
return v___x_2663_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalTerm_instProd(lean_object* v_00_u03b1_2666_, lean_object* v_00_u03b1_x27_2667_, lean_object* v_inst_2668_, lean_object* v_inst_2669_){
_start:
{
lean_object* v___x_2670_; 
v___x_2670_ = l_Lean_Elab_ConfigEval_EvalTerm_instProd___redArg(v_inst_2668_, v_inst_2669_);
return v___x_2670_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__2(void){
_start:
{
lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; 
v___x_2675_ = lean_box(0);
v___x_2676_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__1));
v___x_2677_ = l_Lean_Expr_const___override(v___x_2676_, v___x_2675_);
return v___x_2677_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__3(void){
_start:
{
lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; 
v___x_2678_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__2);
v___x_2679_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__0));
v___x_2680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2680_, 0, v___x_2679_);
lean_ctor_set(v___x_2680_, 1, v___x_2678_);
return v___x_2680_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalTerm_instDataValue(void){
_start:
{
lean_object* v___x_2681_; 
v___x_2681_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__3);
return v___x_2681_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; 
v___x_2682_ = lean_box(0);
v___x_2683_ = l_Lean_Elab_ConfigEval_unsupportedExprExceptionId;
v___x_2684_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2684_, 0, v___x_2683_);
lean_ctor_set(v___x_2684_, 1, v___x_2682_);
return v___x_2684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg(){
_start:
{
lean_object* v___x_2686_; lean_object* v___x_2687_; 
v___x_2686_ = lean_obj_once(&l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg___closed__0, &l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg___closed__0);
v___x_2687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2687_, 0, v___x_2686_);
return v___x_2687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg___boxed(lean_object* v___y_2688_){
_start:
{
lean_object* v_res_2689_; 
v_res_2689_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v_res_2689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0(lean_object* v_00_u03b1_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_){
_start:
{
lean_object* v___x_2696_; 
v___x_2696_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_2696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___boxed(lean_object* v_00_u03b1_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_){
_start:
{
lean_object* v_res_2703_; 
v_res_2703_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0(v_00_u03b1_2697_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_);
lean_dec(v___y_2701_);
lean_dec_ref(v___y_2700_);
lean_dec(v___y_2699_);
lean_dec_ref(v___y_2698_);
return v_res_2703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore(lean_object* v_e_2704_, lean_object* v_a_2705_, lean_object* v_a_2706_, lean_object* v_a_2707_, lean_object* v_a_2708_){
_start:
{
lean_object* v___x_2710_; lean_object* v___x_2711_; uint8_t v___x_2712_; 
v___x_2710_ = l_Lean_Expr_cleanupAnnotations(v_e_2704_);
v___x_2711_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__5));
v___x_2712_ = l_Lean_Expr_isConstOf(v___x_2710_, v___x_2711_);
if (v___x_2712_ == 0)
{
lean_object* v___x_2713_; uint8_t v___x_2714_; 
v___x_2713_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__8));
v___x_2714_ = l_Lean_Expr_isConstOf(v___x_2710_, v___x_2713_);
lean_dec_ref(v___x_2710_);
if (v___x_2714_ == 0)
{
lean_object* v___x_2715_; 
v___x_2715_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_2715_;
}
else
{
lean_object* v___x_2716_; lean_object* v___x_2717_; 
v___x_2716_ = lean_box(v___x_2714_);
v___x_2717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2717_, 0, v___x_2716_);
return v___x_2717_;
}
}
else
{
uint8_t v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; 
lean_dec_ref(v___x_2710_);
v___x_2718_ = 0;
v___x_2719_ = lean_box(v___x_2718_);
v___x_2720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2720_, 0, v___x_2719_);
return v___x_2720_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore___boxed(lean_object* v_e_2721_, lean_object* v_a_2722_, lean_object* v_a_2723_, lean_object* v_a_2724_, lean_object* v_a_2725_, lean_object* v_a_2726_){
_start:
{
lean_object* v_res_2727_; 
v_res_2727_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore(v_e_2721_, v_a_2722_, v_a_2723_, v_a_2724_, v_a_2725_);
lean_dec(v_a_2725_);
lean_dec_ref(v_a_2724_);
lean_dec(v_a_2723_);
lean_dec_ref(v_a_2722_);
lean_dec_ref(v_e_2721_);
return v_res_2727_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2(void){
_start:
{
lean_object* v___x_2730_; lean_object* v___x_2731_; 
v___x_2730_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__1));
v___x_2731_ = l_Lean_stringToMessageData(v___x_2730_);
return v___x_2731_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__3(void){
_start:
{
uint8_t v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; 
v___x_2732_ = 0;
v___x_2733_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__1));
v___x_2734_ = l_Lean_MessageData_ofConstName(v___x_2733_, v___x_2732_);
return v___x_2734_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__4(void){
_start:
{
lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; 
v___x_2735_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__3, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__3);
v___x_2736_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2);
v___x_2737_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2737_, 0, v___x_2736_);
lean_ctor_set(v___x_2737_, 1, v___x_2735_);
return v___x_2737_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6(void){
_start:
{
lean_object* v___x_2739_; lean_object* v___x_2740_; 
v___x_2739_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__5));
v___x_2740_ = l_Lean_stringToMessageData(v___x_2739_);
return v___x_2740_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__7(void){
_start:
{
lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; 
v___x_2741_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6);
v___x_2742_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__4, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__4_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__4);
v___x_2743_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2743_, 0, v___x_2742_);
lean_ctor_set(v___x_2743_, 1, v___x_2741_);
return v___x_2743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(lean_object* v_e_2744_, lean_object* v_a_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_, lean_object* v_a_2748_){
_start:
{
lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; 
v___x_2750_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__0));
v___x_2751_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__7, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__7_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__7);
v___x_2752_ = l_Lean_Elab_ConfigEval_EvalExpr_withWHNF___redArg(v___x_2750_, v_e_2744_, v___x_2751_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_);
return v___x_2752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___boxed(lean_object* v_e_2753_, lean_object* v_a_2754_, lean_object* v_a_2755_, lean_object* v_a_2756_, lean_object* v_a_2757_, lean_object* v_a_2758_){
_start:
{
lean_object* v_res_2759_; 
v_res_2759_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v_e_2753_, v_a_2754_, v_a_2755_, v_a_2756_, v_a_2757_);
lean_dec(v_a_2757_);
lean_dec_ref(v_a_2756_);
lean_dec(v_a_2755_);
lean_dec_ref(v_a_2754_);
return v_res_2759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___redArg(lean_object* v_e_2760_){
_start:
{
lean_object* v___x_2762_; 
v___x_2762_ = l_Lean_Expr_nat_x3f(v_e_2760_);
if (lean_obj_tag(v___x_2762_) == 0)
{
lean_object* v___x_2763_; 
v___x_2763_ = l_Lean_Expr_rawNatLit_x3f(v_e_2760_);
if (lean_obj_tag(v___x_2763_) == 0)
{
lean_object* v___x_2764_; 
v___x_2764_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_2764_;
}
else
{
lean_object* v_val_2765_; lean_object* v___x_2767_; uint8_t v_isShared_2768_; uint8_t v_isSharedCheck_2772_; 
v_val_2765_ = lean_ctor_get(v___x_2763_, 0);
v_isSharedCheck_2772_ = !lean_is_exclusive(v___x_2763_);
if (v_isSharedCheck_2772_ == 0)
{
v___x_2767_ = v___x_2763_;
v_isShared_2768_ = v_isSharedCheck_2772_;
goto v_resetjp_2766_;
}
else
{
lean_inc(v_val_2765_);
lean_dec(v___x_2763_);
v___x_2767_ = lean_box(0);
v_isShared_2768_ = v_isSharedCheck_2772_;
goto v_resetjp_2766_;
}
v_resetjp_2766_:
{
lean_object* v___x_2770_; 
if (v_isShared_2768_ == 0)
{
lean_ctor_set_tag(v___x_2767_, 0);
v___x_2770_ = v___x_2767_;
goto v_reusejp_2769_;
}
else
{
lean_object* v_reuseFailAlloc_2771_; 
v_reuseFailAlloc_2771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2771_, 0, v_val_2765_);
v___x_2770_ = v_reuseFailAlloc_2771_;
goto v_reusejp_2769_;
}
v_reusejp_2769_:
{
return v___x_2770_;
}
}
}
}
else
{
lean_object* v_val_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2780_; 
lean_dec_ref(v_e_2760_);
v_val_2773_ = lean_ctor_get(v___x_2762_, 0);
v_isSharedCheck_2780_ = !lean_is_exclusive(v___x_2762_);
if (v_isSharedCheck_2780_ == 0)
{
v___x_2775_ = v___x_2762_;
v_isShared_2776_ = v_isSharedCheck_2780_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_val_2773_);
lean_dec(v___x_2762_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2780_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2778_; 
if (v_isShared_2776_ == 0)
{
lean_ctor_set_tag(v___x_2775_, 0);
v___x_2778_ = v___x_2775_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v_val_2773_);
v___x_2778_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
return v___x_2778_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___redArg___boxed(lean_object* v_e_2781_, lean_object* v_a_2782_){
_start:
{
lean_object* v_res_2783_; 
v_res_2783_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___redArg(v_e_2781_);
return v_res_2783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore(lean_object* v_e_2784_, lean_object* v_a_2785_, lean_object* v_a_2786_, lean_object* v_a_2787_, lean_object* v_a_2788_){
_start:
{
lean_object* v___x_2790_; 
v___x_2790_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___redArg(v_e_2784_);
return v___x_2790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___boxed(lean_object* v_e_2791_, lean_object* v_a_2792_, lean_object* v_a_2793_, lean_object* v_a_2794_, lean_object* v_a_2795_, lean_object* v_a_2796_){
_start:
{
lean_object* v_res_2797_; 
v_res_2797_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore(v_e_2791_, v_a_2792_, v_a_2793_, v_a_2794_, v_a_2795_);
lean_dec(v_a_2795_);
lean_dec_ref(v_a_2794_);
lean_dec(v_a_2793_);
lean_dec_ref(v_a_2792_);
return v_res_2797_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__1(void){
_start:
{
uint8_t v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; 
v___x_2799_ = 0;
v___x_2800_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__1));
v___x_2801_ = l_Lean_MessageData_ofConstName(v___x_2800_, v___x_2799_);
return v___x_2801_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__2(void){
_start:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; 
v___x_2802_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__1);
v___x_2803_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2);
v___x_2804_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2804_, 0, v___x_2803_);
lean_ctor_set(v___x_2804_, 1, v___x_2802_);
return v___x_2804_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__3(void){
_start:
{
lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; 
v___x_2805_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6);
v___x_2806_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__2);
v___x_2807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2807_, 0, v___x_2806_);
lean_ctor_set(v___x_2807_, 1, v___x_2805_);
return v___x_2807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr(lean_object* v_e_2808_, lean_object* v_a_2809_, lean_object* v_a_2810_, lean_object* v_a_2811_, lean_object* v_a_2812_){
_start:
{
lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; 
v___x_2814_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__0));
v___x_2815_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__3, &l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___closed__3);
v___x_2816_ = l_Lean_Elab_ConfigEval_EvalExpr_withWHNF___redArg(v___x_2814_, v_e_2808_, v___x_2815_, v_a_2809_, v_a_2810_, v_a_2811_, v_a_2812_);
return v___x_2816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr___boxed(lean_object* v_e_2817_, lean_object* v_a_2818_, lean_object* v_a_2819_, lean_object* v_a_2820_, lean_object* v_a_2821_, lean_object* v_a_2822_){
_start:
{
lean_object* v_res_2823_; 
v_res_2823_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr(v_e_2817_, v_a_2818_, v_a_2819_, v_a_2820_, v_a_2821_);
lean_dec(v_a_2821_);
lean_dec_ref(v_a_2820_);
lean_dec(v_a_2819_);
lean_dec_ref(v_a_2818_);
return v_res_2823_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___redArg(lean_object* v_msg_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_){
_start:
{
lean_object* v_ref_2830_; lean_object* v___x_2831_; lean_object* v_a_2832_; lean_object* v___x_2834_; uint8_t v_isShared_2835_; uint8_t v_isSharedCheck_2840_; 
v_ref_2830_ = lean_ctor_get(v___y_2827_, 2);
v___x_2831_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ConfigEval_EvalTerm_evalNameStx_spec__0_spec__0_spec__3_spec__7(v_msg_2824_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_);
v_a_2832_ = lean_ctor_get(v___x_2831_, 0);
v_isSharedCheck_2840_ = !lean_is_exclusive(v___x_2831_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2834_ = v___x_2831_;
v_isShared_2835_ = v_isSharedCheck_2840_;
goto v_resetjp_2833_;
}
else
{
lean_inc(v_a_2832_);
lean_dec(v___x_2831_);
v___x_2834_ = lean_box(0);
v_isShared_2835_ = v_isSharedCheck_2840_;
goto v_resetjp_2833_;
}
v_resetjp_2833_:
{
lean_object* v___x_2836_; lean_object* v___x_2838_; 
lean_inc(v_ref_2830_);
v___x_2836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2836_, 0, v_ref_2830_);
lean_ctor_set(v___x_2836_, 1, v_a_2832_);
if (v_isShared_2835_ == 0)
{
lean_ctor_set_tag(v___x_2834_, 1);
lean_ctor_set(v___x_2834_, 0, v___x_2836_);
v___x_2838_ = v___x_2834_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v___x_2836_);
v___x_2838_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
return v___x_2838_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___redArg___boxed(lean_object* v_msg_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_){
_start:
{
lean_object* v_res_2847_; 
v_res_2847_ = l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___redArg(v_msg_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_);
lean_dec(v___y_2845_);
lean_dec_ref(v___y_2844_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
return v_res_2847_;
}
}
static lean_object* _init_l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_2849_; lean_object* v___x_2850_; 
v___x_2849_ = ((lean_object*)(l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__0));
v___x_2850_ = l_Lean_stringToMessageData(v___x_2849_);
return v___x_2850_;
}
}
LEAN_EXPORT lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg(lean_object* v_x_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_){
_start:
{
if (lean_obj_tag(v_x_2851_) == 0)
{
lean_object* v___x_2857_; lean_object* v___x_2858_; 
v___x_2857_ = lean_obj_once(&l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__1, &l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__1_once, _init_l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___closed__1);
v___x_2858_ = l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___redArg(v___x_2857_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
return v___x_2858_;
}
else
{
lean_object* v_val_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2866_; 
v_val_2859_ = lean_ctor_get(v_x_2851_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v_x_2851_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2861_ = v_x_2851_;
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_val_2859_);
lean_dec(v_x_2851_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v___x_2864_; 
if (v_isShared_2862_ == 0)
{
lean_ctor_set_tag(v___x_2861_, 0);
v___x_2864_ = v___x_2861_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v_val_2859_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
return v___x_2864_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg___boxed(lean_object* v_x_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_){
_start:
{
lean_object* v_res_2873_; 
v_res_2873_ = l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg(v_x_2867_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_);
lean_dec(v___y_2871_);
lean_dec_ref(v___y_2870_);
lean_dec(v___y_2869_);
lean_dec_ref(v___y_2868_);
return v_res_2873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore(lean_object* v_e_2881_, lean_object* v_a_2882_, lean_object* v_a_2883_, lean_object* v_a_2884_, lean_object* v_a_2885_){
_start:
{
lean_object* v___x_2887_; lean_object* v___x_2888_; 
v___x_2887_ = l_Lean_Expr_int_x3f(v_e_2881_);
v___x_2888_ = l_Lean_Meta_saveState___redArg(v_a_2883_, v_a_2885_);
if (lean_obj_tag(v___x_2888_) == 0)
{
lean_object* v_a_2889_; lean_object* v___x_2890_; 
v_a_2889_ = lean_ctor_get(v___x_2888_, 0);
lean_inc(v_a_2889_);
lean_dec_ref_known(v___x_2888_, 1);
v___x_2890_ = l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg(v___x_2887_, v_a_2882_, v_a_2883_, v_a_2884_, v_a_2885_);
if (lean_obj_tag(v___x_2890_) == 0)
{
lean_dec(v_a_2889_);
lean_dec_ref(v_e_2881_);
return v___x_2890_;
}
else
{
lean_object* v_a_2891_; uint8_t v___x_2892_; 
v_a_2891_ = lean_ctor_get(v___x_2890_, 0);
v___x_2892_ = l_Lean_Exception_isInterrupt(v_a_2891_);
if (v___x_2892_ == 0)
{
uint8_t v___x_2893_; 
lean_inc(v_a_2891_);
v___x_2893_ = l_Lean_Exception_isRuntime(v_a_2891_);
if (v___x_2893_ == 0)
{
lean_object* v___x_2894_; 
lean_dec_ref_known(v___x_2890_, 1);
v___x_2894_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2889_, v_a_2883_, v_a_2885_);
if (lean_obj_tag(v___x_2894_) == 0)
{
lean_object* v___x_2895_; 
lean_dec_ref_known(v___x_2894_, 1);
v___x_2895_ = l_Lean_Meta_saveState___redArg(v_a_2883_, v_a_2885_);
if (lean_obj_tag(v___x_2895_) == 0)
{
lean_object* v_a_2896_; lean_object* v___x_2897_; 
v_a_2896_ = lean_ctor_get(v___x_2895_, 0);
lean_inc(v_a_2896_);
lean_dec_ref_known(v___x_2895_, 1);
lean_inc_ref(v_e_2881_);
v___x_2897_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___redArg(v_e_2881_);
if (lean_obj_tag(v___x_2897_) == 0)
{
lean_object* v_a_2898_; lean_object* v___x_2900_; uint8_t v_isShared_2901_; uint8_t v_isSharedCheck_2906_; 
lean_dec(v_a_2896_);
lean_dec_ref(v_e_2881_);
v_a_2898_ = lean_ctor_get(v___x_2897_, 0);
v_isSharedCheck_2906_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_2906_ == 0)
{
v___x_2900_ = v___x_2897_;
v_isShared_2901_ = v_isSharedCheck_2906_;
goto v_resetjp_2899_;
}
else
{
lean_inc(v_a_2898_);
lean_dec(v___x_2897_);
v___x_2900_ = lean_box(0);
v_isShared_2901_ = v_isSharedCheck_2906_;
goto v_resetjp_2899_;
}
v_resetjp_2899_:
{
lean_object* v___x_2902_; lean_object* v___x_2904_; 
v___x_2902_ = lean_nat_to_int(v_a_2898_);
if (v_isShared_2901_ == 0)
{
lean_ctor_set(v___x_2900_, 0, v___x_2902_);
v___x_2904_ = v___x_2900_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2905_; 
v_reuseFailAlloc_2905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2905_, 0, v___x_2902_);
v___x_2904_ = v_reuseFailAlloc_2905_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
return v___x_2904_;
}
}
}
else
{
lean_object* v_a_2907_; lean_object* v___x_2909_; uint8_t v_isShared_2910_; uint8_t v_isSharedCheck_2971_; 
v_a_2907_ = lean_ctor_get(v___x_2897_, 0);
v_isSharedCheck_2971_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_2971_ == 0)
{
v___x_2909_ = v___x_2897_;
v_isShared_2910_ = v_isSharedCheck_2971_;
goto v_resetjp_2908_;
}
else
{
lean_inc(v_a_2907_);
lean_dec(v___x_2897_);
v___x_2909_ = lean_box(0);
v_isShared_2910_ = v_isSharedCheck_2971_;
goto v_resetjp_2908_;
}
v_resetjp_2908_:
{
lean_object* v___x_2912_; 
lean_inc(v_a_2907_);
if (v_isShared_2910_ == 0)
{
v___x_2912_ = v___x_2909_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v_a_2907_);
v___x_2912_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
uint8_t v___x_2913_; 
v___x_2913_ = l_Lean_Exception_isInterrupt(v_a_2907_);
if (v___x_2913_ == 0)
{
uint8_t v___x_2914_; 
v___x_2914_ = l_Lean_Exception_isRuntime(v_a_2907_);
if (v___x_2914_ == 0)
{
lean_object* v___x_2915_; 
lean_dec_ref(v___x_2912_);
v___x_2915_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2896_, v_a_2883_, v_a_2885_);
if (lean_obj_tag(v___x_2915_) == 0)
{
lean_object* v___x_2916_; uint8_t v___x_2917_; 
lean_dec_ref_known(v___x_2915_, 1);
v___x_2916_ = l_Lean_Expr_cleanupAnnotations(v_e_2881_);
lean_dec_ref(v_e_2881_);
v___x_2917_ = l_Lean_Expr_isApp(v___x_2916_);
if (v___x_2917_ == 0)
{
lean_object* v___x_2918_; 
lean_dec_ref(v___x_2916_);
v___x_2918_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_2918_;
}
else
{
lean_object* v_arg_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; uint8_t v___x_2922_; 
v_arg_2919_ = lean_ctor_get(v___x_2916_, 1);
lean_inc_ref(v_arg_2919_);
v___x_2920_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2916_);
lean_dec_ref(v___x_2916_);
v___x_2921_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__1));
v___x_2922_ = l_Lean_Expr_isConstOf(v___x_2920_, v___x_2921_);
if (v___x_2922_ == 0)
{
lean_object* v___x_2923_; uint8_t v___x_2924_; 
v___x_2923_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___closed__2));
v___x_2924_ = l_Lean_Expr_isConstOf(v___x_2920_, v___x_2923_);
lean_dec_ref(v___x_2920_);
if (v___x_2924_ == 0)
{
lean_object* v___x_2925_; 
lean_dec_ref(v_arg_2919_);
v___x_2925_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_2925_;
}
else
{
lean_object* v___x_2926_; 
v___x_2926_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr(v_arg_2919_, v_a_2882_, v_a_2883_, v_a_2884_, v_a_2885_);
if (lean_obj_tag(v___x_2926_) == 0)
{
lean_object* v_a_2927_; lean_object* v___x_2929_; uint8_t v_isShared_2930_; uint8_t v_isSharedCheck_2935_; 
v_a_2927_ = lean_ctor_get(v___x_2926_, 0);
v_isSharedCheck_2935_ = !lean_is_exclusive(v___x_2926_);
if (v_isSharedCheck_2935_ == 0)
{
v___x_2929_ = v___x_2926_;
v_isShared_2930_ = v_isSharedCheck_2935_;
goto v_resetjp_2928_;
}
else
{
lean_inc(v_a_2927_);
lean_dec(v___x_2926_);
v___x_2929_ = lean_box(0);
v_isShared_2930_ = v_isSharedCheck_2935_;
goto v_resetjp_2928_;
}
v_resetjp_2928_:
{
lean_object* v___x_2931_; lean_object* v___x_2933_; 
v___x_2931_ = lean_nat_to_int(v_a_2927_);
if (v_isShared_2930_ == 0)
{
lean_ctor_set(v___x_2929_, 0, v___x_2931_);
v___x_2933_ = v___x_2929_;
goto v_reusejp_2932_;
}
else
{
lean_object* v_reuseFailAlloc_2934_; 
v_reuseFailAlloc_2934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2934_, 0, v___x_2931_);
v___x_2933_ = v_reuseFailAlloc_2934_;
goto v_reusejp_2932_;
}
v_reusejp_2932_:
{
return v___x_2933_;
}
}
}
else
{
lean_object* v_a_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_2943_; 
v_a_2936_ = lean_ctor_get(v___x_2926_, 0);
v_isSharedCheck_2943_ = !lean_is_exclusive(v___x_2926_);
if (v_isSharedCheck_2943_ == 0)
{
v___x_2938_ = v___x_2926_;
v_isShared_2939_ = v_isSharedCheck_2943_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_a_2936_);
lean_dec(v___x_2926_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_2943_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
lean_object* v___x_2941_; 
if (v_isShared_2939_ == 0)
{
v___x_2941_ = v___x_2938_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2942_; 
v_reuseFailAlloc_2942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2942_, 0, v_a_2936_);
v___x_2941_ = v_reuseFailAlloc_2942_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
return v___x_2941_;
}
}
}
}
}
else
{
lean_object* v___x_2944_; 
lean_dec_ref(v___x_2920_);
v___x_2944_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr(v_arg_2919_, v_a_2882_, v_a_2883_, v_a_2884_, v_a_2885_);
if (lean_obj_tag(v___x_2944_) == 0)
{
lean_object* v_a_2945_; lean_object* v___x_2947_; uint8_t v_isShared_2948_; uint8_t v_isSharedCheck_2953_; 
v_a_2945_ = lean_ctor_get(v___x_2944_, 0);
v_isSharedCheck_2953_ = !lean_is_exclusive(v___x_2944_);
if (v_isSharedCheck_2953_ == 0)
{
v___x_2947_ = v___x_2944_;
v_isShared_2948_ = v_isSharedCheck_2953_;
goto v_resetjp_2946_;
}
else
{
lean_inc(v_a_2945_);
lean_dec(v___x_2944_);
v___x_2947_ = lean_box(0);
v_isShared_2948_ = v_isSharedCheck_2953_;
goto v_resetjp_2946_;
}
v_resetjp_2946_:
{
lean_object* v___x_2949_; lean_object* v___x_2951_; 
v___x_2949_ = lean_int_neg_succ_of_nat(v_a_2945_);
if (v_isShared_2948_ == 0)
{
lean_ctor_set(v___x_2947_, 0, v___x_2949_);
v___x_2951_ = v___x_2947_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v___x_2949_);
v___x_2951_ = v_reuseFailAlloc_2952_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
return v___x_2951_;
}
}
}
else
{
lean_object* v_a_2954_; lean_object* v___x_2956_; uint8_t v_isShared_2957_; uint8_t v_isSharedCheck_2961_; 
v_a_2954_ = lean_ctor_get(v___x_2944_, 0);
v_isSharedCheck_2961_ = !lean_is_exclusive(v___x_2944_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2956_ = v___x_2944_;
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
else
{
lean_inc(v_a_2954_);
lean_dec(v___x_2944_);
v___x_2956_ = lean_box(0);
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
v_resetjp_2955_:
{
lean_object* v___x_2959_; 
if (v_isShared_2957_ == 0)
{
v___x_2959_ = v___x_2956_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_a_2954_);
v___x_2959_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
return v___x_2959_;
}
}
}
}
}
}
else
{
lean_object* v_a_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_2969_; 
lean_dec_ref(v_e_2881_);
v_a_2962_ = lean_ctor_get(v___x_2915_, 0);
v_isSharedCheck_2969_ = !lean_is_exclusive(v___x_2915_);
if (v_isSharedCheck_2969_ == 0)
{
v___x_2964_ = v___x_2915_;
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_a_2962_);
lean_dec(v___x_2915_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2967_; 
if (v_isShared_2965_ == 0)
{
v___x_2967_ = v___x_2964_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2968_; 
v_reuseFailAlloc_2968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2968_, 0, v_a_2962_);
v___x_2967_ = v_reuseFailAlloc_2968_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
return v___x_2967_;
}
}
}
}
else
{
lean_dec(v_a_2896_);
lean_dec_ref(v_e_2881_);
return v___x_2912_;
}
}
else
{
lean_dec(v_a_2907_);
lean_dec(v_a_2896_);
lean_dec_ref(v_e_2881_);
return v___x_2912_;
}
}
}
}
}
else
{
lean_object* v_a_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_2979_; 
lean_dec_ref(v_e_2881_);
v_a_2972_ = lean_ctor_get(v___x_2895_, 0);
v_isSharedCheck_2979_ = !lean_is_exclusive(v___x_2895_);
if (v_isSharedCheck_2979_ == 0)
{
v___x_2974_ = v___x_2895_;
v_isShared_2975_ = v_isSharedCheck_2979_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_a_2972_);
lean_dec(v___x_2895_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_2979_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
lean_object* v___x_2977_; 
if (v_isShared_2975_ == 0)
{
v___x_2977_ = v___x_2974_;
goto v_reusejp_2976_;
}
else
{
lean_object* v_reuseFailAlloc_2978_; 
v_reuseFailAlloc_2978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2978_, 0, v_a_2972_);
v___x_2977_ = v_reuseFailAlloc_2978_;
goto v_reusejp_2976_;
}
v_reusejp_2976_:
{
return v___x_2977_;
}
}
}
}
else
{
lean_object* v_a_2980_; lean_object* v___x_2982_; uint8_t v_isShared_2983_; uint8_t v_isSharedCheck_2987_; 
lean_dec_ref(v_e_2881_);
v_a_2980_ = lean_ctor_get(v___x_2894_, 0);
v_isSharedCheck_2987_ = !lean_is_exclusive(v___x_2894_);
if (v_isSharedCheck_2987_ == 0)
{
v___x_2982_ = v___x_2894_;
v_isShared_2983_ = v_isSharedCheck_2987_;
goto v_resetjp_2981_;
}
else
{
lean_inc(v_a_2980_);
lean_dec(v___x_2894_);
v___x_2982_ = lean_box(0);
v_isShared_2983_ = v_isSharedCheck_2987_;
goto v_resetjp_2981_;
}
v_resetjp_2981_:
{
lean_object* v___x_2985_; 
if (v_isShared_2983_ == 0)
{
v___x_2985_ = v___x_2982_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2986_; 
v_reuseFailAlloc_2986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2986_, 0, v_a_2980_);
v___x_2985_ = v_reuseFailAlloc_2986_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
return v___x_2985_;
}
}
}
}
else
{
lean_dec(v_a_2889_);
lean_dec_ref(v_e_2881_);
return v___x_2890_;
}
}
else
{
lean_dec(v_a_2889_);
lean_dec_ref(v_e_2881_);
return v___x_2890_;
}
}
}
else
{
lean_object* v_a_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_2995_; 
lean_dec(v___x_2887_);
lean_dec_ref(v_e_2881_);
v_a_2988_ = lean_ctor_get(v___x_2888_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v___x_2888_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2990_ = v___x_2888_;
v_isShared_2991_ = v_isSharedCheck_2995_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_a_2988_);
lean_dec(v___x_2888_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_2995_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v___x_2993_; 
if (v_isShared_2991_ == 0)
{
v___x_2993_ = v___x_2990_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v_a_2988_);
v___x_2993_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
return v___x_2993_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore___boxed(lean_object* v_e_2996_, lean_object* v_a_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_, lean_object* v_a_3001_){
_start:
{
lean_object* v_res_3002_; 
v_res_3002_ = l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore(v_e_2996_, v_a_2997_, v_a_2998_, v_a_2999_, v_a_3000_);
lean_dec(v_a_3000_);
lean_dec_ref(v_a_2999_);
lean_dec(v_a_2998_);
lean_dec_ref(v_a_2997_);
return v_res_3002_;
}
}
LEAN_EXPORT lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0(lean_object* v_00_u03b1_3003_, lean_object* v_x_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_){
_start:
{
lean_object* v___x_3010_; 
v___x_3010_ = l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___redArg(v_x_3004_, v___y_3005_, v___y_3006_, v___y_3007_, v___y_3008_);
return v___x_3010_;
}
}
LEAN_EXPORT lean_object* l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0___boxed(lean_object* v_00_u03b1_3011_, lean_object* v_x_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_){
_start:
{
lean_object* v_res_3018_; 
v_res_3018_ = l_Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0(v_00_u03b1_3011_, v_x_3012_, v___y_3013_, v___y_3014_, v___y_3015_, v___y_3016_);
lean_dec(v___y_3016_);
lean_dec_ref(v___y_3015_);
lean_dec(v___y_3014_);
lean_dec_ref(v___y_3013_);
return v_res_3018_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0(lean_object* v_00_u03b1_3019_, lean_object* v_msg_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_){
_start:
{
lean_object* v___x_3026_; 
v___x_3026_ = l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___redArg(v_msg_3020_, v___y_3021_, v___y_3022_, v___y_3023_, v___y_3024_);
return v___x_3026_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3027_, lean_object* v_msg_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_){
_start:
{
lean_object* v_res_3034_; 
v_res_3034_ = l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0(v_00_u03b1_3027_, v_msg_3028_, v___y_3029_, v___y_3030_, v___y_3031_, v___y_3032_);
lean_dec(v___y_3032_);
lean_dec_ref(v___y_3031_);
lean_dec(v___y_3030_);
lean_dec_ref(v___y_3029_);
return v_res_3034_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__1(void){
_start:
{
uint8_t v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; 
v___x_3036_ = 0;
v___x_3037_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__1));
v___x_3038_ = l_Lean_MessageData_ofConstName(v___x_3037_, v___x_3036_);
return v___x_3038_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__2(void){
_start:
{
lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; 
v___x_3039_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__1);
v___x_3040_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2);
v___x_3041_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3041_, 0, v___x_3040_);
lean_ctor_set(v___x_3041_, 1, v___x_3039_);
return v___x_3041_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__3(void){
_start:
{
lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; 
v___x_3042_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6);
v___x_3043_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__2);
v___x_3044_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3044_, 0, v___x_3043_);
lean_ctor_set(v___x_3044_, 1, v___x_3042_);
return v___x_3044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr(lean_object* v_e_3045_, lean_object* v_a_3046_, lean_object* v_a_3047_, lean_object* v_a_3048_, lean_object* v_a_3049_){
_start:
{
lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; 
v___x_3051_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__0));
v___x_3052_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__3, &l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___closed__3);
v___x_3053_ = l_Lean_Elab_ConfigEval_EvalExpr_withWHNF___redArg(v___x_3051_, v_e_3045_, v___x_3052_, v_a_3046_, v_a_3047_, v_a_3048_, v_a_3049_);
return v___x_3053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr___boxed(lean_object* v_e_3054_, lean_object* v_a_3055_, lean_object* v_a_3056_, lean_object* v_a_3057_, lean_object* v_a_3058_, lean_object* v_a_3059_){
_start:
{
lean_object* v_res_3060_; 
v_res_3060_ = l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr(v_e_3054_, v_a_3055_, v_a_3056_, v_a_3057_, v_a_3058_);
lean_dec(v_a_3058_);
lean_dec_ref(v_a_3057_);
lean_dec(v_a_3056_);
lean_dec_ref(v_a_3055_);
return v_res_3060_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___redArg(lean_object* v_x_3061_){
_start:
{
if (lean_obj_tag(v_x_3061_) == 9)
{
lean_object* v_a_3063_; 
v_a_3063_ = lean_ctor_get(v_x_3061_, 0);
lean_inc_ref(v_a_3063_);
lean_dec_ref_known(v_x_3061_, 1);
if (lean_obj_tag(v_a_3063_) == 1)
{
lean_object* v_val_3064_; lean_object* v___x_3066_; uint8_t v_isShared_3067_; uint8_t v_isSharedCheck_3071_; 
v_val_3064_ = lean_ctor_get(v_a_3063_, 0);
v_isSharedCheck_3071_ = !lean_is_exclusive(v_a_3063_);
if (v_isSharedCheck_3071_ == 0)
{
v___x_3066_ = v_a_3063_;
v_isShared_3067_ = v_isSharedCheck_3071_;
goto v_resetjp_3065_;
}
else
{
lean_inc(v_val_3064_);
lean_dec(v_a_3063_);
v___x_3066_ = lean_box(0);
v_isShared_3067_ = v_isSharedCheck_3071_;
goto v_resetjp_3065_;
}
v_resetjp_3065_:
{
lean_object* v___x_3069_; 
if (v_isShared_3067_ == 0)
{
lean_ctor_set_tag(v___x_3066_, 0);
v___x_3069_ = v___x_3066_;
goto v_reusejp_3068_;
}
else
{
lean_object* v_reuseFailAlloc_3070_; 
v_reuseFailAlloc_3070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3070_, 0, v_val_3064_);
v___x_3069_ = v_reuseFailAlloc_3070_;
goto v_reusejp_3068_;
}
v_reusejp_3068_:
{
return v___x_3069_;
}
}
}
else
{
lean_object* v___x_3072_; 
lean_dec_ref(v_a_3063_);
v___x_3072_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3072_;
}
}
else
{
lean_object* v___x_3073_; 
lean_dec_ref(v_x_3061_);
v___x_3073_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3073_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___redArg___boxed(lean_object* v_x_3074_, lean_object* v_a_3075_){
_start:
{
lean_object* v_res_3076_; 
v_res_3076_ = l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___redArg(v_x_3074_);
return v_res_3076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore(lean_object* v_x_3077_, lean_object* v_a_3078_, lean_object* v_a_3079_, lean_object* v_a_3080_, lean_object* v_a_3081_){
_start:
{
lean_object* v___x_3083_; 
v___x_3083_ = l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___redArg(v_x_3077_);
return v___x_3083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___boxed(lean_object* v_x_3084_, lean_object* v_a_3085_, lean_object* v_a_3086_, lean_object* v_a_3087_, lean_object* v_a_3088_, lean_object* v_a_3089_){
_start:
{
lean_object* v_res_3090_; 
v_res_3090_ = l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore(v_x_3084_, v_a_3085_, v_a_3086_, v_a_3087_, v_a_3088_);
lean_dec(v_a_3088_);
lean_dec_ref(v_a_3087_);
lean_dec(v_a_3086_);
lean_dec_ref(v_a_3085_);
return v_res_3090_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__1(void){
_start:
{
uint8_t v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; 
v___x_3092_ = 0;
v___x_3093_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__1));
v___x_3094_ = l_Lean_MessageData_ofConstName(v___x_3093_, v___x_3092_);
return v___x_3094_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__2(void){
_start:
{
lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; 
v___x_3095_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__1);
v___x_3096_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2);
v___x_3097_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3097_, 0, v___x_3096_);
lean_ctor_set(v___x_3097_, 1, v___x_3095_);
return v___x_3097_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__3(void){
_start:
{
lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; 
v___x_3098_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6);
v___x_3099_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__2);
v___x_3100_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3100_, 0, v___x_3099_);
lean_ctor_set(v___x_3100_, 1, v___x_3098_);
return v___x_3100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr(lean_object* v_e_3101_, lean_object* v_a_3102_, lean_object* v_a_3103_, lean_object* v_a_3104_, lean_object* v_a_3105_){
_start:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; 
v___x_3107_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__0));
v___x_3108_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__3, &l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___closed__3);
v___x_3109_ = l_Lean_Elab_ConfigEval_EvalExpr_withWHNF___redArg(v___x_3107_, v_e_3101_, v___x_3108_, v_a_3102_, v_a_3103_, v_a_3104_, v_a_3105_);
return v___x_3109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr___boxed(lean_object* v_e_3110_, lean_object* v_a_3111_, lean_object* v_a_3112_, lean_object* v_a_3113_, lean_object* v_a_3114_, lean_object* v_a_3115_){
_start:
{
lean_object* v_res_3116_; 
v_res_3116_ = l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr(v_e_3110_, v_a_3111_, v_a_3112_, v_a_3113_, v_a_3114_);
lean_dec(v_a_3114_);
lean_dec_ref(v_a_3113_);
lean_dec(v_a_3112_);
lean_dec_ref(v_a_3111_);
return v_res_3116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___redArg(lean_object* v_e_3117_){
_start:
{
lean_object* v___x_3119_; 
v___x_3119_ = l_Lean_Expr_name_x3f(v_e_3117_);
if (lean_obj_tag(v___x_3119_) == 0)
{
lean_object* v___x_3120_; 
v___x_3120_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3120_;
}
else
{
lean_object* v_val_3121_; lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3128_; 
v_val_3121_ = lean_ctor_get(v___x_3119_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3119_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3123_ = v___x_3119_;
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
else
{
lean_inc(v_val_3121_);
lean_dec(v___x_3119_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
v_resetjp_3122_:
{
lean_object* v___x_3126_; 
if (v_isShared_3124_ == 0)
{
lean_ctor_set_tag(v___x_3123_, 0);
v___x_3126_ = v___x_3123_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_val_3121_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___redArg___boxed(lean_object* v_e_3129_, lean_object* v_a_3130_){
_start:
{
lean_object* v_res_3131_; 
v_res_3131_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___redArg(v_e_3129_);
return v_res_3131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore(lean_object* v_e_3132_, lean_object* v_a_3133_, lean_object* v_a_3134_, lean_object* v_a_3135_, lean_object* v_a_3136_){
_start:
{
lean_object* v___x_3138_; 
v___x_3138_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___redArg(v_e_3132_);
return v___x_3138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___boxed(lean_object* v_e_3139_, lean_object* v_a_3140_, lean_object* v_a_3141_, lean_object* v_a_3142_, lean_object* v_a_3143_, lean_object* v_a_3144_){
_start:
{
lean_object* v_res_3145_; 
v_res_3145_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore(v_e_3139_, v_a_3140_, v_a_3141_, v_a_3142_, v_a_3143_);
lean_dec(v_a_3143_);
lean_dec_ref(v_a_3142_);
lean_dec(v_a_3141_);
lean_dec_ref(v_a_3140_);
return v_res_3145_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__1(void){
_start:
{
uint8_t v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3147_ = 0;
v___x_3148_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__1));
v___x_3149_ = l_Lean_MessageData_ofConstName(v___x_3148_, v___x_3147_);
return v___x_3149_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__2(void){
_start:
{
lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; 
v___x_3150_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__1);
v___x_3151_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2);
v___x_3152_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3152_, 0, v___x_3151_);
lean_ctor_set(v___x_3152_, 1, v___x_3150_);
return v___x_3152_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__3(void){
_start:
{
lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; 
v___x_3153_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6);
v___x_3154_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__2);
v___x_3155_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3155_, 0, v___x_3154_);
lean_ctor_set(v___x_3155_, 1, v___x_3153_);
return v___x_3155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr(lean_object* v_e_3156_, lean_object* v_a_3157_, lean_object* v_a_3158_, lean_object* v_a_3159_, lean_object* v_a_3160_){
_start:
{
lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3162_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__0));
v___x_3163_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__3, &l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___closed__3);
v___x_3164_ = l_Lean_Elab_ConfigEval_EvalExpr_withWHNF___redArg(v___x_3162_, v_e_3156_, v___x_3163_, v_a_3157_, v_a_3158_, v_a_3159_, v_a_3160_);
return v___x_3164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr___boxed(lean_object* v_e_3165_, lean_object* v_a_3166_, lean_object* v_a_3167_, lean_object* v_a_3168_, lean_object* v_a_3169_, lean_object* v_a_3170_){
_start:
{
lean_object* v_res_3171_; 
v_res_3171_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr(v_e_3165_, v_a_3166_, v_a_3167_, v_a_3168_, v_a_3169_);
lean_dec(v_a_3169_);
lean_dec_ref(v_a_3168_);
lean_dec(v_a_3167_);
lean_dec_ref(v_a_3166_);
return v_res_3171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg(lean_object* v_ev_3178_, lean_object* v_e_3179_, lean_object* v_a_3180_, lean_object* v_a_3181_, lean_object* v_a_3182_, lean_object* v_a_3183_){
_start:
{
lean_object* v___x_3185_; uint8_t v___x_3186_; 
v___x_3185_ = l_Lean_Expr_cleanupAnnotations(v_e_3179_);
v___x_3186_ = l_Lean_Expr_isApp(v___x_3185_);
if (v___x_3186_ == 0)
{
lean_object* v___x_3187_; 
lean_dec_ref(v___x_3185_);
lean_dec_ref(v_ev_3178_);
v___x_3187_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3187_;
}
else
{
lean_object* v___x_3188_; lean_object* v___x_3189_; uint8_t v___x_3190_; 
v___x_3188_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3185_);
v___x_3189_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___closed__0));
v___x_3190_ = l_Lean_Expr_isConstOf(v___x_3188_, v___x_3189_);
if (v___x_3190_ == 0)
{
uint8_t v___x_3191_; 
v___x_3191_ = l_Lean_Expr_isApp(v___x_3188_);
if (v___x_3191_ == 0)
{
lean_object* v___x_3192_; 
lean_dec_ref(v___x_3188_);
lean_dec_ref(v___x_3185_);
lean_dec_ref(v_ev_3178_);
v___x_3192_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3192_;
}
else
{
lean_object* v___x_3193_; lean_object* v___x_3194_; uint8_t v___x_3195_; 
v___x_3193_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3188_);
lean_dec_ref(v___x_3188_);
v___x_3194_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___closed__1));
v___x_3195_ = l_Lean_Expr_isConstOf(v___x_3193_, v___x_3194_);
lean_dec_ref(v___x_3193_);
if (v___x_3195_ == 0)
{
lean_object* v___x_3196_; 
lean_dec_ref(v___x_3185_);
lean_dec_ref(v_ev_3178_);
v___x_3196_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3196_;
}
else
{
lean_object* v_arg_3197_; lean_object* v___x_3198_; 
v_arg_3197_ = lean_ctor_get(v___x_3185_, 1);
lean_inc_ref(v_arg_3197_);
lean_dec_ref(v___x_3185_);
lean_inc(v_a_3183_);
lean_inc_ref(v_a_3182_);
lean_inc(v_a_3181_);
lean_inc_ref(v_a_3180_);
v___x_3198_ = lean_apply_6(v_ev_3178_, v_arg_3197_, v_a_3180_, v_a_3181_, v_a_3182_, v_a_3183_, lean_box(0));
if (lean_obj_tag(v___x_3198_) == 0)
{
lean_object* v_a_3199_; lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3207_; 
v_a_3199_ = lean_ctor_get(v___x_3198_, 0);
v_isSharedCheck_3207_ = !lean_is_exclusive(v___x_3198_);
if (v_isSharedCheck_3207_ == 0)
{
v___x_3201_ = v___x_3198_;
v_isShared_3202_ = v_isSharedCheck_3207_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_a_3199_);
lean_dec(v___x_3198_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3207_;
goto v_resetjp_3200_;
}
v_resetjp_3200_:
{
lean_object* v___x_3203_; lean_object* v___x_3205_; 
v___x_3203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3203_, 0, v_a_3199_);
if (v_isShared_3202_ == 0)
{
lean_ctor_set(v___x_3201_, 0, v___x_3203_);
v___x_3205_ = v___x_3201_;
goto v_reusejp_3204_;
}
else
{
lean_object* v_reuseFailAlloc_3206_; 
v_reuseFailAlloc_3206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3206_, 0, v___x_3203_);
v___x_3205_ = v_reuseFailAlloc_3206_;
goto v_reusejp_3204_;
}
v_reusejp_3204_:
{
return v___x_3205_;
}
}
}
else
{
lean_object* v_a_3208_; lean_object* v___x_3210_; uint8_t v_isShared_3211_; uint8_t v_isSharedCheck_3215_; 
v_a_3208_ = lean_ctor_get(v___x_3198_, 0);
v_isSharedCheck_3215_ = !lean_is_exclusive(v___x_3198_);
if (v_isSharedCheck_3215_ == 0)
{
v___x_3210_ = v___x_3198_;
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
else
{
lean_inc(v_a_3208_);
lean_dec(v___x_3198_);
v___x_3210_ = lean_box(0);
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
v_resetjp_3209_:
{
lean_object* v___x_3213_; 
if (v_isShared_3211_ == 0)
{
v___x_3213_ = v___x_3210_;
goto v_reusejp_3212_;
}
else
{
lean_object* v_reuseFailAlloc_3214_; 
v_reuseFailAlloc_3214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3214_, 0, v_a_3208_);
v___x_3213_ = v_reuseFailAlloc_3214_;
goto v_reusejp_3212_;
}
v_reusejp_3212_:
{
return v___x_3213_;
}
}
}
}
}
}
else
{
lean_object* v___x_3216_; lean_object* v___x_3217_; 
lean_dec_ref(v___x_3188_);
lean_dec_ref(v___x_3185_);
lean_dec_ref(v_ev_3178_);
v___x_3216_ = lean_box(0);
v___x_3217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3217_, 0, v___x_3216_);
return v___x_3217_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg___boxed(lean_object* v_ev_3218_, lean_object* v_e_3219_, lean_object* v_a_3220_, lean_object* v_a_3221_, lean_object* v_a_3222_, lean_object* v_a_3223_, lean_object* v_a_3224_){
_start:
{
lean_object* v_res_3225_; 
v_res_3225_ = l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg(v_ev_3218_, v_e_3219_, v_a_3220_, v_a_3221_, v_a_3222_, v_a_3223_);
lean_dec(v_a_3223_);
lean_dec_ref(v_a_3222_);
lean_dec(v_a_3221_);
lean_dec_ref(v_a_3220_);
lean_dec_ref(v_e_3219_);
return v_res_3225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore(lean_object* v_00_u03b1_3226_, lean_object* v_ev_3227_, lean_object* v_e_3228_, lean_object* v_a_3229_, lean_object* v_a_3230_, lean_object* v_a_3231_, lean_object* v_a_3232_){
_start:
{
lean_object* v___x_3234_; 
v___x_3234_ = l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___redArg(v_ev_3227_, v_e_3228_, v_a_3229_, v_a_3230_, v_a_3231_, v_a_3232_);
return v___x_3234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___boxed(lean_object* v_00_u03b1_3235_, lean_object* v_ev_3236_, lean_object* v_e_3237_, lean_object* v_a_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_, lean_object* v_a_3241_, lean_object* v_a_3242_){
_start:
{
lean_object* v_res_3243_; 
v_res_3243_ = l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore(v_00_u03b1_3235_, v_ev_3236_, v_e_3237_, v_a_3238_, v_a_3239_, v_a_3240_, v_a_3241_);
lean_dec(v_a_3241_);
lean_dec_ref(v_a_3240_);
lean_dec(v_a_3239_);
lean_dec_ref(v_a_3238_);
lean_dec_ref(v_e_3237_);
return v_res_3243_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__0(void){
_start:
{
uint8_t v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; 
v___x_3244_ = 0;
v___x_3245_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__1));
v___x_3246_ = l_Lean_MessageData_ofConstName(v___x_3245_, v___x_3244_);
return v___x_3246_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__1(void){
_start:
{
lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; 
v___x_3247_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__0, &l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__0_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__0);
v___x_3248_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2);
v___x_3249_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3249_, 0, v___x_3248_);
lean_ctor_set(v___x_3249_, 1, v___x_3247_);
return v___x_3249_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__2(void){
_start:
{
lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; 
v___x_3250_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6);
v___x_3251_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__1);
v___x_3252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3252_, 0, v___x_3251_);
lean_ctor_set(v___x_3252_, 1, v___x_3250_);
return v___x_3252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg(lean_object* v_ev_3253_, lean_object* v_e_3254_, lean_object* v_a_3255_, lean_object* v_a_3256_, lean_object* v_a_3257_, lean_object* v_a_3258_){
_start:
{
lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; 
lean_inc_ref(v_ev_3253_);
v___x_3260_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExprCore___boxed), 8, 2);
lean_closure_set(v___x_3260_, 0, lean_box(0));
lean_closure_set(v___x_3260_, 1, v_ev_3253_);
v___x_3261_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___closed__2);
v___x_3262_ = l_Lean_Meta_saveState___redArg(v_a_3256_, v_a_3258_);
if (lean_obj_tag(v___x_3262_) == 0)
{
lean_object* v_a_3263_; lean_object* v___x_3264_; 
v_a_3263_ = lean_ctor_get(v___x_3262_, 0);
lean_inc(v_a_3263_);
lean_dec_ref_known(v___x_3262_, 1);
lean_inc_ref(v_e_3254_);
v___x_3264_ = l_Lean_Elab_ConfigEval_EvalExpr_withWHNF___redArg(v___x_3260_, v_e_3254_, v___x_3261_, v_a_3255_, v_a_3256_, v_a_3257_, v_a_3258_);
if (lean_obj_tag(v___x_3264_) == 0)
{
lean_dec(v_a_3263_);
lean_dec_ref(v_e_3254_);
lean_dec_ref(v_ev_3253_);
return v___x_3264_;
}
else
{
lean_object* v_a_3265_; uint8_t v___x_3266_; 
v_a_3265_ = lean_ctor_get(v___x_3264_, 0);
v___x_3266_ = l_Lean_Exception_isInterrupt(v_a_3265_);
if (v___x_3266_ == 0)
{
uint8_t v___x_3267_; 
lean_inc(v_a_3265_);
v___x_3267_ = l_Lean_Exception_isRuntime(v_a_3265_);
if (v___x_3267_ == 0)
{
lean_object* v___x_3269_; uint8_t v_isShared_3270_; uint8_t v_isSharedCheck_3300_; 
v_isSharedCheck_3300_ = !lean_is_exclusive(v___x_3264_);
if (v_isSharedCheck_3300_ == 0)
{
lean_object* v_unused_3301_; 
v_unused_3301_ = lean_ctor_get(v___x_3264_, 0);
lean_dec(v_unused_3301_);
v___x_3269_ = v___x_3264_;
v_isShared_3270_ = v_isSharedCheck_3300_;
goto v_resetjp_3268_;
}
else
{
lean_dec(v___x_3264_);
v___x_3269_ = lean_box(0);
v_isShared_3270_ = v_isSharedCheck_3300_;
goto v_resetjp_3268_;
}
v_resetjp_3268_:
{
lean_object* v___x_3271_; 
v___x_3271_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3263_, v_a_3256_, v_a_3258_);
if (lean_obj_tag(v___x_3271_) == 0)
{
lean_object* v___x_3272_; 
lean_dec_ref_known(v___x_3271_, 1);
lean_inc(v_a_3258_);
lean_inc_ref(v_a_3257_);
lean_inc(v_a_3256_);
lean_inc_ref(v_a_3255_);
v___x_3272_ = lean_apply_6(v_ev_3253_, v_e_3254_, v_a_3255_, v_a_3256_, v_a_3257_, v_a_3258_, lean_box(0));
if (lean_obj_tag(v___x_3272_) == 0)
{
lean_object* v_a_3273_; lean_object* v___x_3275_; uint8_t v_isShared_3276_; uint8_t v_isSharedCheck_3283_; 
v_a_3273_ = lean_ctor_get(v___x_3272_, 0);
v_isSharedCheck_3283_ = !lean_is_exclusive(v___x_3272_);
if (v_isSharedCheck_3283_ == 0)
{
v___x_3275_ = v___x_3272_;
v_isShared_3276_ = v_isSharedCheck_3283_;
goto v_resetjp_3274_;
}
else
{
lean_inc(v_a_3273_);
lean_dec(v___x_3272_);
v___x_3275_ = lean_box(0);
v_isShared_3276_ = v_isSharedCheck_3283_;
goto v_resetjp_3274_;
}
v_resetjp_3274_:
{
lean_object* v___x_3278_; 
if (v_isShared_3270_ == 0)
{
lean_ctor_set(v___x_3269_, 0, v_a_3273_);
v___x_3278_ = v___x_3269_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3282_; 
v_reuseFailAlloc_3282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3282_, 0, v_a_3273_);
v___x_3278_ = v_reuseFailAlloc_3282_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
lean_object* v___x_3280_; 
if (v_isShared_3276_ == 0)
{
lean_ctor_set(v___x_3275_, 0, v___x_3278_);
v___x_3280_ = v___x_3275_;
goto v_reusejp_3279_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v___x_3278_);
v___x_3280_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3279_;
}
v_reusejp_3279_:
{
return v___x_3280_;
}
}
}
}
else
{
lean_object* v_a_3284_; lean_object* v___x_3286_; uint8_t v_isShared_3287_; uint8_t v_isSharedCheck_3291_; 
lean_del_object(v___x_3269_);
v_a_3284_ = lean_ctor_get(v___x_3272_, 0);
v_isSharedCheck_3291_ = !lean_is_exclusive(v___x_3272_);
if (v_isSharedCheck_3291_ == 0)
{
v___x_3286_ = v___x_3272_;
v_isShared_3287_ = v_isSharedCheck_3291_;
goto v_resetjp_3285_;
}
else
{
lean_inc(v_a_3284_);
lean_dec(v___x_3272_);
v___x_3286_ = lean_box(0);
v_isShared_3287_ = v_isSharedCheck_3291_;
goto v_resetjp_3285_;
}
v_resetjp_3285_:
{
lean_object* v___x_3289_; 
if (v_isShared_3287_ == 0)
{
v___x_3289_ = v___x_3286_;
goto v_reusejp_3288_;
}
else
{
lean_object* v_reuseFailAlloc_3290_; 
v_reuseFailAlloc_3290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3290_, 0, v_a_3284_);
v___x_3289_ = v_reuseFailAlloc_3290_;
goto v_reusejp_3288_;
}
v_reusejp_3288_:
{
return v___x_3289_;
}
}
}
}
else
{
lean_object* v_a_3292_; lean_object* v___x_3294_; uint8_t v_isShared_3295_; uint8_t v_isSharedCheck_3299_; 
lean_del_object(v___x_3269_);
lean_dec_ref(v_e_3254_);
lean_dec_ref(v_ev_3253_);
v_a_3292_ = lean_ctor_get(v___x_3271_, 0);
v_isSharedCheck_3299_ = !lean_is_exclusive(v___x_3271_);
if (v_isSharedCheck_3299_ == 0)
{
v___x_3294_ = v___x_3271_;
v_isShared_3295_ = v_isSharedCheck_3299_;
goto v_resetjp_3293_;
}
else
{
lean_inc(v_a_3292_);
lean_dec(v___x_3271_);
v___x_3294_ = lean_box(0);
v_isShared_3295_ = v_isSharedCheck_3299_;
goto v_resetjp_3293_;
}
v_resetjp_3293_:
{
lean_object* v___x_3297_; 
if (v_isShared_3295_ == 0)
{
v___x_3297_ = v___x_3294_;
goto v_reusejp_3296_;
}
else
{
lean_object* v_reuseFailAlloc_3298_; 
v_reuseFailAlloc_3298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3298_, 0, v_a_3292_);
v___x_3297_ = v_reuseFailAlloc_3298_;
goto v_reusejp_3296_;
}
v_reusejp_3296_:
{
return v___x_3297_;
}
}
}
}
}
else
{
lean_dec(v_a_3263_);
lean_dec_ref(v_e_3254_);
lean_dec_ref(v_ev_3253_);
return v___x_3264_;
}
}
else
{
lean_dec(v_a_3263_);
lean_dec_ref(v_e_3254_);
lean_dec_ref(v_ev_3253_);
return v___x_3264_;
}
}
}
else
{
lean_object* v_a_3302_; lean_object* v___x_3304_; uint8_t v_isShared_3305_; uint8_t v_isSharedCheck_3309_; 
lean_dec_ref(v___x_3260_);
lean_dec_ref(v_e_3254_);
lean_dec_ref(v_ev_3253_);
v_a_3302_ = lean_ctor_get(v___x_3262_, 0);
v_isSharedCheck_3309_ = !lean_is_exclusive(v___x_3262_);
if (v_isSharedCheck_3309_ == 0)
{
v___x_3304_ = v___x_3262_;
v_isShared_3305_ = v_isSharedCheck_3309_;
goto v_resetjp_3303_;
}
else
{
lean_inc(v_a_3302_);
lean_dec(v___x_3262_);
v___x_3304_ = lean_box(0);
v_isShared_3305_ = v_isSharedCheck_3309_;
goto v_resetjp_3303_;
}
v_resetjp_3303_:
{
lean_object* v___x_3307_; 
if (v_isShared_3305_ == 0)
{
v___x_3307_ = v___x_3304_;
goto v_reusejp_3306_;
}
else
{
lean_object* v_reuseFailAlloc_3308_; 
v_reuseFailAlloc_3308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3308_, 0, v_a_3302_);
v___x_3307_ = v_reuseFailAlloc_3308_;
goto v_reusejp_3306_;
}
v_reusejp_3306_:
{
return v___x_3307_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg___boxed(lean_object* v_ev_3310_, lean_object* v_e_3311_, lean_object* v_a_3312_, lean_object* v_a_3313_, lean_object* v_a_3314_, lean_object* v_a_3315_, lean_object* v_a_3316_){
_start:
{
lean_object* v_res_3317_; 
v_res_3317_ = l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg(v_ev_3310_, v_e_3311_, v_a_3312_, v_a_3313_, v_a_3314_, v_a_3315_);
lean_dec(v_a_3315_);
lean_dec_ref(v_a_3314_);
lean_dec(v_a_3313_);
lean_dec_ref(v_a_3312_);
return v_res_3317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr(lean_object* v_00_u03b1_3318_, lean_object* v_ev_3319_, lean_object* v_e_3320_, lean_object* v_a_3321_, lean_object* v_a_3322_, lean_object* v_a_3323_, lean_object* v_a_3324_){
_start:
{
lean_object* v___x_3326_; 
v___x_3326_ = l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___redArg(v_ev_3319_, v_e_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_);
return v___x_3326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___boxed(lean_object* v_00_u03b1_3327_, lean_object* v_ev_3328_, lean_object* v_e_3329_, lean_object* v_a_3330_, lean_object* v_a_3331_, lean_object* v_a_3332_, lean_object* v_a_3333_, lean_object* v_a_3334_){
_start:
{
lean_object* v_res_3335_; 
v_res_3335_ = l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr(v_00_u03b1_3327_, v_ev_3328_, v_e_3329_, v_a_3330_, v_a_3331_, v_a_3332_, v_a_3333_);
lean_dec(v_a_3333_);
lean_dec_ref(v_a_3332_);
lean_dec(v_a_3331_);
lean_dec_ref(v_a_3330_);
return v_res_3335_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__1(void){
_start:
{
lean_object* v___x_3337_; lean_object* v___x_3338_; 
v___x_3337_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__0));
v___x_3338_ = l_Lean_stringToMessageData(v___x_3337_);
return v___x_3338_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__2(void){
_start:
{
uint8_t v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; 
v___x_3339_ = 0;
v___x_3340_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__0));
v___x_3341_ = l_Lean_MessageData_ofConstName(v___x_3340_, v___x_3339_);
return v___x_3341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg(lean_object* v_ev_3342_, lean_object* v_e_3343_, uint8_t v_didWHNF_3344_, lean_object* v_a_3345_, lean_object* v_a_3346_, lean_object* v_a_3347_, lean_object* v_a_3348_){
_start:
{
lean_object* v___y_3351_; lean_object* v___y_3352_; lean_object* v___y_3353_; lean_object* v___y_3354_; lean_object* v___x_3377_; uint8_t v___x_3378_; 
v___x_3377_ = l_Lean_Expr_cleanupAnnotations(v_e_3343_);
v___x_3378_ = l_Lean_Expr_isApp(v___x_3377_);
if (v___x_3378_ == 0)
{
lean_dec_ref(v___x_3377_);
v___y_3351_ = v_a_3345_;
v___y_3352_ = v_a_3346_;
v___y_3353_ = v_a_3347_;
v___y_3354_ = v_a_3348_;
goto v___jp_3350_;
}
else
{
lean_object* v___x_3379_; lean_object* v___x_3380_; uint8_t v___x_3381_; 
v___x_3379_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3377_);
v___x_3380_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__5));
v___x_3381_ = l_Lean_Expr_isConstOf(v___x_3379_, v___x_3380_);
if (v___x_3381_ == 0)
{
uint8_t v___x_3382_; 
v___x_3382_ = l_Lean_Expr_isApp(v___x_3379_);
if (v___x_3382_ == 0)
{
lean_dec_ref(v___x_3379_);
lean_dec_ref(v___x_3377_);
v___y_3351_ = v_a_3345_;
v___y_3352_ = v_a_3346_;
v___y_3353_ = v_a_3347_;
v___y_3354_ = v_a_3348_;
goto v___jp_3350_;
}
else
{
lean_object* v___x_3383_; uint8_t v___x_3384_; 
v___x_3383_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3379_);
v___x_3384_ = l_Lean_Expr_isApp(v___x_3383_);
if (v___x_3384_ == 0)
{
lean_dec_ref(v___x_3383_);
lean_dec_ref(v___x_3379_);
lean_dec_ref(v___x_3377_);
v___y_3351_ = v_a_3345_;
v___y_3352_ = v_a_3346_;
v___y_3353_ = v_a_3347_;
v___y_3354_ = v_a_3348_;
goto v___jp_3350_;
}
else
{
lean_object* v___x_3385_; lean_object* v___x_3386_; uint8_t v___x_3387_; 
v___x_3385_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3383_);
lean_dec_ref(v___x_3383_);
v___x_3386_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_ConfigEval_EvalTerm_evalListStx_spec__2___closed__2));
v___x_3387_ = l_Lean_Expr_isConstOf(v___x_3385_, v___x_3386_);
lean_dec_ref(v___x_3385_);
if (v___x_3387_ == 0)
{
lean_dec_ref(v___x_3379_);
lean_dec_ref(v___x_3377_);
v___y_3351_ = v_a_3345_;
v___y_3352_ = v_a_3346_;
v___y_3353_ = v_a_3347_;
v___y_3354_ = v_a_3348_;
goto v___jp_3350_;
}
else
{
lean_object* v_arg_3388_; lean_object* v_arg_3389_; lean_object* v___x_3390_; 
lean_dec_ref(v_e_3343_);
v_arg_3388_ = lean_ctor_get(v___x_3377_, 1);
lean_inc_ref(v_arg_3388_);
lean_dec_ref(v___x_3377_);
v_arg_3389_ = lean_ctor_get(v___x_3379_, 1);
lean_inc_ref(v_arg_3389_);
lean_dec_ref(v___x_3379_);
lean_inc_ref(v_ev_3342_);
lean_inc(v_a_3348_);
lean_inc_ref(v_a_3347_);
lean_inc(v_a_3346_);
lean_inc_ref(v_a_3345_);
v___x_3390_ = lean_apply_6(v_ev_3342_, v_arg_3389_, v_a_3345_, v_a_3346_, v_a_3347_, v_a_3348_, lean_box(0));
if (lean_obj_tag(v___x_3390_) == 0)
{
lean_object* v_a_3391_; lean_object* v___x_3392_; 
v_a_3391_ = lean_ctor_get(v___x_3390_, 0);
lean_inc(v_a_3391_);
lean_dec_ref_known(v___x_3390_, 1);
v___x_3392_ = l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg(v_ev_3342_, v_arg_3388_, v___x_3381_, v_a_3345_, v_a_3346_, v_a_3347_, v_a_3348_);
if (lean_obj_tag(v___x_3392_) == 0)
{
lean_object* v_a_3393_; lean_object* v___x_3395_; uint8_t v_isShared_3396_; uint8_t v_isSharedCheck_3401_; 
v_a_3393_ = lean_ctor_get(v___x_3392_, 0);
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3392_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3395_ = v___x_3392_;
v_isShared_3396_ = v_isSharedCheck_3401_;
goto v_resetjp_3394_;
}
else
{
lean_inc(v_a_3393_);
lean_dec(v___x_3392_);
v___x_3395_ = lean_box(0);
v_isShared_3396_ = v_isSharedCheck_3401_;
goto v_resetjp_3394_;
}
v_resetjp_3394_:
{
lean_object* v___x_3397_; lean_object* v___x_3399_; 
v___x_3397_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3397_, 0, v_a_3391_);
lean_ctor_set(v___x_3397_, 1, v_a_3393_);
if (v_isShared_3396_ == 0)
{
lean_ctor_set(v___x_3395_, 0, v___x_3397_);
v___x_3399_ = v___x_3395_;
goto v_reusejp_3398_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v___x_3397_);
v___x_3399_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3398_;
}
v_reusejp_3398_:
{
return v___x_3399_;
}
}
}
else
{
lean_dec(v_a_3391_);
return v___x_3392_;
}
}
else
{
lean_object* v_a_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3409_; 
lean_dec_ref(v_arg_3388_);
lean_dec_ref(v_ev_3342_);
v_a_3402_ = lean_ctor_get(v___x_3390_, 0);
v_isSharedCheck_3409_ = !lean_is_exclusive(v___x_3390_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3404_ = v___x_3390_;
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_a_3402_);
lean_dec(v___x_3390_);
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
}
}
}
else
{
lean_object* v___x_3410_; lean_object* v___x_3411_; 
lean_dec_ref(v___x_3379_);
lean_dec_ref(v___x_3377_);
lean_dec_ref(v_e_3343_);
lean_dec_ref(v_ev_3342_);
v___x_3410_ = lean_box(0);
v___x_3411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3411_, 0, v___x_3410_);
return v___x_3411_;
}
}
v___jp_3350_:
{
if (v_didWHNF_3344_ == 0)
{
lean_object* v___x_3355_; 
lean_inc(v___y_3354_);
lean_inc_ref(v___y_3353_);
lean_inc(v___y_3352_);
lean_inc_ref(v___y_3351_);
v___x_3355_ = lean_whnf(v_e_3343_, v___y_3351_, v___y_3352_, v___y_3353_, v___y_3354_);
if (lean_obj_tag(v___x_3355_) == 0)
{
lean_object* v_a_3356_; uint8_t v___x_3357_; 
v_a_3356_ = lean_ctor_get(v___x_3355_, 0);
lean_inc(v_a_3356_);
lean_dec_ref_known(v___x_3355_, 1);
v___x_3357_ = 1;
v_e_3343_ = v_a_3356_;
v_didWHNF_3344_ = v___x_3357_;
v_a_3345_ = v___y_3351_;
v_a_3346_ = v___y_3352_;
v_a_3347_ = v___y_3353_;
v_a_3348_ = v___y_3354_;
goto _start;
}
else
{
lean_object* v_a_3359_; lean_object* v___x_3361_; uint8_t v_isShared_3362_; uint8_t v_isSharedCheck_3366_; 
lean_dec_ref(v_ev_3342_);
v_a_3359_ = lean_ctor_get(v___x_3355_, 0);
v_isSharedCheck_3366_ = !lean_is_exclusive(v___x_3355_);
if (v_isSharedCheck_3366_ == 0)
{
v___x_3361_ = v___x_3355_;
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
else
{
lean_inc(v_a_3359_);
lean_dec(v___x_3355_);
v___x_3361_ = lean_box(0);
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
v_resetjp_3360_:
{
lean_object* v___x_3364_; 
if (v_isShared_3362_ == 0)
{
v___x_3364_ = v___x_3361_;
goto v_reusejp_3363_;
}
else
{
lean_object* v_reuseFailAlloc_3365_; 
v_reuseFailAlloc_3365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3365_, 0, v_a_3359_);
v___x_3364_ = v_reuseFailAlloc_3365_;
goto v_reusejp_3363_;
}
v_reusejp_3363_:
{
return v___x_3364_;
}
}
}
}
else
{
lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; 
lean_dec_ref(v_ev_3342_);
v___x_3367_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__1);
v___x_3368_ = l_Lean_indentExpr(v_e_3343_);
v___x_3369_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3369_, 0, v___x_3367_);
lean_ctor_set(v___x_3369_, 1, v___x_3368_);
v___x_3370_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2);
v___x_3371_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3371_, 0, v___x_3369_);
lean_ctor_set(v___x_3371_, 1, v___x_3370_);
v___x_3372_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___closed__2);
v___x_3373_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3373_, 0, v___x_3371_);
lean_ctor_set(v___x_3373_, 1, v___x_3372_);
v___x_3374_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6);
v___x_3375_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3375_, 0, v___x_3373_);
lean_ctor_set(v___x_3375_, 1, v___x_3374_);
v___x_3376_ = l_Lean_throwError___at___00Option_getM___at___00Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore_spec__0_spec__0___redArg(v___x_3375_, v___y_3351_, v___y_3352_, v___y_3353_, v___y_3354_);
return v___x_3376_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg___boxed(lean_object* v_ev_3412_, lean_object* v_e_3413_, lean_object* v_didWHNF_3414_, lean_object* v_a_3415_, lean_object* v_a_3416_, lean_object* v_a_3417_, lean_object* v_a_3418_, lean_object* v_a_3419_){
_start:
{
uint8_t v_didWHNF_boxed_3420_; lean_object* v_res_3421_; 
v_didWHNF_boxed_3420_ = lean_unbox(v_didWHNF_3414_);
v_res_3421_ = l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg(v_ev_3412_, v_e_3413_, v_didWHNF_boxed_3420_, v_a_3415_, v_a_3416_, v_a_3417_, v_a_3418_);
lean_dec(v_a_3418_);
lean_dec_ref(v_a_3417_);
lean_dec(v_a_3416_);
lean_dec_ref(v_a_3415_);
return v_res_3421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr(lean_object* v_00_u03b1_3422_, lean_object* v_ev_3423_, lean_object* v_e_3424_, uint8_t v_didWHNF_3425_, lean_object* v_a_3426_, lean_object* v_a_3427_, lean_object* v_a_3428_, lean_object* v_a_3429_){
_start:
{
lean_object* v___x_3431_; 
v___x_3431_ = l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg(v_ev_3423_, v_e_3424_, v_didWHNF_3425_, v_a_3426_, v_a_3427_, v_a_3428_, v_a_3429_);
return v___x_3431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___boxed(lean_object* v_00_u03b1_3432_, lean_object* v_ev_3433_, lean_object* v_e_3434_, lean_object* v_didWHNF_3435_, lean_object* v_a_3436_, lean_object* v_a_3437_, lean_object* v_a_3438_, lean_object* v_a_3439_, lean_object* v_a_3440_){
_start:
{
uint8_t v_didWHNF_boxed_3441_; lean_object* v_res_3442_; 
v_didWHNF_boxed_3441_ = lean_unbox(v_didWHNF_3435_);
v_res_3442_ = l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr(v_00_u03b1_3432_, v_ev_3433_, v_e_3434_, v_didWHNF_boxed_3441_, v_a_3436_, v_a_3437_, v_a_3438_, v_a_3439_);
lean_dec(v_a_3439_);
lean_dec_ref(v_a_3438_);
lean_dec(v_a_3437_);
lean_dec_ref(v_a_3436_);
return v_res_3442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0(lean_object* v_ev_3449_, lean_object* v_e_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_){
_start:
{
lean_object* v___x_3456_; uint8_t v___x_3457_; 
v___x_3456_ = l_Lean_Expr_cleanupAnnotations(v_e_3450_);
v___x_3457_ = l_Lean_Expr_isApp(v___x_3456_);
if (v___x_3457_ == 0)
{
lean_object* v___x_3458_; 
lean_dec_ref(v___x_3456_);
lean_dec_ref(v_ev_3449_);
v___x_3458_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3458_;
}
else
{
lean_object* v___x_3459_; uint8_t v___x_3460_; 
v___x_3459_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3456_);
v___x_3460_ = l_Lean_Expr_isApp(v___x_3459_);
if (v___x_3460_ == 0)
{
lean_object* v___x_3461_; 
lean_dec_ref(v___x_3459_);
lean_dec_ref(v___x_3456_);
lean_dec_ref(v_ev_3449_);
v___x_3461_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3461_;
}
else
{
lean_object* v_arg_3462_; lean_object* v___y_3464_; lean_object* v___y_3465_; lean_object* v___y_3466_; lean_object* v___y_3467_; lean_object* v___x_3487_; lean_object* v___x_3488_; uint8_t v___x_3489_; 
v_arg_3462_ = lean_ctor_get(v___x_3456_, 1);
lean_inc_ref(v_arg_3462_);
lean_dec_ref(v___x_3456_);
v___x_3487_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3459_);
lean_dec_ref(v___x_3459_);
v___x_3488_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__0));
v___x_3489_ = l_Lean_Expr_isConstOf(v___x_3487_, v___x_3488_);
if (v___x_3489_ == 0)
{
lean_object* v___x_3490_; uint8_t v___x_3491_; 
v___x_3490_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___closed__1));
v___x_3491_ = l_Lean_Expr_isConstOf(v___x_3487_, v___x_3490_);
lean_dec_ref(v___x_3487_);
if (v___x_3491_ == 0)
{
lean_object* v___x_3492_; 
lean_dec_ref(v_arg_3462_);
lean_dec_ref(v_ev_3449_);
v___x_3492_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3492_;
}
else
{
v___y_3464_ = v___y_3451_;
v___y_3465_ = v___y_3452_;
v___y_3466_ = v___y_3453_;
v___y_3467_ = v___y_3454_;
goto v___jp_3463_;
}
}
else
{
lean_dec_ref(v___x_3487_);
v___y_3464_ = v___y_3451_;
v___y_3465_ = v___y_3452_;
v___y_3466_ = v___y_3453_;
v___y_3467_ = v___y_3454_;
goto v___jp_3463_;
}
v___jp_3463_:
{
uint8_t v___x_3468_; lean_object* v___x_3469_; 
v___x_3468_ = 0;
v___x_3469_ = l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg(v_ev_3449_, v_arg_3462_, v___x_3468_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_);
if (lean_obj_tag(v___x_3469_) == 0)
{
lean_object* v_a_3470_; lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3478_; 
v_a_3470_ = lean_ctor_get(v___x_3469_, 0);
v_isSharedCheck_3478_ = !lean_is_exclusive(v___x_3469_);
if (v_isSharedCheck_3478_ == 0)
{
v___x_3472_ = v___x_3469_;
v_isShared_3473_ = v_isSharedCheck_3478_;
goto v_resetjp_3471_;
}
else
{
lean_inc(v_a_3470_);
lean_dec(v___x_3469_);
v___x_3472_ = lean_box(0);
v_isShared_3473_ = v_isSharedCheck_3478_;
goto v_resetjp_3471_;
}
v_resetjp_3471_:
{
lean_object* v___x_3474_; lean_object* v___x_3476_; 
v___x_3474_ = lean_array_mk(v_a_3470_);
if (v_isShared_3473_ == 0)
{
lean_ctor_set(v___x_3472_, 0, v___x_3474_);
v___x_3476_ = v___x_3472_;
goto v_reusejp_3475_;
}
else
{
lean_object* v_reuseFailAlloc_3477_; 
v_reuseFailAlloc_3477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3477_, 0, v___x_3474_);
v___x_3476_ = v_reuseFailAlloc_3477_;
goto v_reusejp_3475_;
}
v_reusejp_3475_:
{
return v___x_3476_;
}
}
}
else
{
lean_object* v_a_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3486_; 
v_a_3479_ = lean_ctor_get(v___x_3469_, 0);
v_isSharedCheck_3486_ = !lean_is_exclusive(v___x_3469_);
if (v_isSharedCheck_3486_ == 0)
{
v___x_3481_ = v___x_3469_;
v_isShared_3482_ = v_isSharedCheck_3486_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_a_3479_);
lean_dec(v___x_3469_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3486_;
goto v_resetjp_3480_;
}
v_resetjp_3480_:
{
lean_object* v___x_3484_; 
if (v_isShared_3482_ == 0)
{
v___x_3484_ = v___x_3481_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3485_; 
v_reuseFailAlloc_3485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3485_, 0, v_a_3479_);
v___x_3484_ = v_reuseFailAlloc_3485_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
return v___x_3484_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___boxed(lean_object* v_ev_3493_, lean_object* v_e_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_){
_start:
{
lean_object* v_res_3500_; 
v_res_3500_ = l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0(v_ev_3493_, v_e_3494_, v___y_3495_, v___y_3496_, v___y_3497_, v___y_3498_);
lean_dec(v___y_3498_);
lean_dec_ref(v___y_3497_);
lean_dec(v___y_3496_);
lean_dec_ref(v___y_3495_);
lean_dec_ref(v_e_3494_);
return v_res_3500_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__0(void){
_start:
{
uint8_t v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
v___x_3501_ = 0;
v___x_3502_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__1));
v___x_3503_ = l_Lean_MessageData_ofConstName(v___x_3502_, v___x_3501_);
return v___x_3503_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__1(void){
_start:
{
lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; 
v___x_3504_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__0, &l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__0_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__0);
v___x_3505_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2);
v___x_3506_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3506_, 0, v___x_3505_);
lean_ctor_set(v___x_3506_, 1, v___x_3504_);
return v___x_3506_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__2(void){
_start:
{
lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; 
v___x_3507_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6);
v___x_3508_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__1);
v___x_3509_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3509_, 0, v___x_3508_);
lean_ctor_set(v___x_3509_, 1, v___x_3507_);
return v___x_3509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg(lean_object* v_ev_3510_, lean_object* v_e_3511_, lean_object* v_a_3512_, lean_object* v_a_3513_, lean_object* v_a_3514_, lean_object* v_a_3515_){
_start:
{
lean_object* v___f_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; 
v___f_3517_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_3517_, 0, v_ev_3510_);
v___x_3518_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___closed__2);
v___x_3519_ = l_Lean_Elab_ConfigEval_EvalExpr_withWHNF___redArg(v___f_3517_, v_e_3511_, v___x_3518_, v_a_3512_, v_a_3513_, v_a_3514_, v_a_3515_);
return v___x_3519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg___boxed(lean_object* v_ev_3520_, lean_object* v_e_3521_, lean_object* v_a_3522_, lean_object* v_a_3523_, lean_object* v_a_3524_, lean_object* v_a_3525_, lean_object* v_a_3526_){
_start:
{
lean_object* v_res_3527_; 
v_res_3527_ = l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg(v_ev_3520_, v_e_3521_, v_a_3522_, v_a_3523_, v_a_3524_, v_a_3525_);
lean_dec(v_a_3525_);
lean_dec_ref(v_a_3524_);
lean_dec(v_a_3523_);
lean_dec_ref(v_a_3522_);
return v_res_3527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr(lean_object* v_00_u03b1_3528_, lean_object* v_ev_3529_, lean_object* v_e_3530_, lean_object* v_a_3531_, lean_object* v_a_3532_, lean_object* v_a_3533_, lean_object* v_a_3534_){
_start:
{
lean_object* v___x_3536_; 
v___x_3536_ = l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___redArg(v_ev_3529_, v_e_3530_, v_a_3531_, v_a_3532_, v_a_3533_, v_a_3534_);
return v___x_3536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___boxed(lean_object* v_00_u03b1_3537_, lean_object* v_ev_3538_, lean_object* v_e_3539_, lean_object* v_a_3540_, lean_object* v_a_3541_, lean_object* v_a_3542_, lean_object* v_a_3543_, lean_object* v_a_3544_){
_start:
{
lean_object* v_res_3545_; 
v_res_3545_ = l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr(v_00_u03b1_3537_, v_ev_3538_, v_e_3539_, v_a_3540_, v_a_3541_, v_a_3542_, v_a_3543_);
lean_dec(v_a_3543_);
lean_dec_ref(v_a_3542_);
lean_dec(v_a_3541_);
lean_dec_ref(v_a_3540_);
return v_res_3545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExprCore(lean_object* v_e_3546_, lean_object* v_a_3547_, lean_object* v_a_3548_, lean_object* v_a_3549_, lean_object* v_a_3550_){
_start:
{
lean_object* v___y_3553_; lean_object* v___y_3554_; lean_object* v___y_3555_; lean_object* v___y_3556_; lean_object* v___x_3754_; uint8_t v___x_3755_; 
v___x_3754_ = l_Lean_Expr_cleanupAnnotations(v_e_3546_);
v___x_3755_ = l_Lean_Expr_isApp(v___x_3754_);
if (v___x_3755_ == 0)
{
lean_dec_ref(v___x_3754_);
v___y_3553_ = v_a_3547_;
v___y_3554_ = v_a_3548_;
v___y_3555_ = v_a_3549_;
v___y_3556_ = v_a_3550_;
goto v___jp_3552_;
}
else
{
lean_object* v_arg_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; uint8_t v___x_3759_; 
v_arg_3756_ = lean_ctor_get(v___x_3754_, 1);
lean_inc_ref(v_arg_3756_);
v___x_3757_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3754_);
lean_dec_ref(v___x_3754_);
v___x_3758_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__15));
v___x_3759_ = l_Lean_Expr_isConstOf(v___x_3757_, v___x_3758_);
if (v___x_3759_ == 0)
{
lean_object* v___x_3760_; uint8_t v___x_3761_; 
v___x_3760_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__13));
v___x_3761_ = l_Lean_Expr_isConstOf(v___x_3757_, v___x_3760_);
if (v___x_3761_ == 0)
{
lean_object* v___x_3762_; uint8_t v___x_3763_; 
v___x_3762_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__11));
v___x_3763_ = l_Lean_Expr_isConstOf(v___x_3757_, v___x_3762_);
if (v___x_3763_ == 0)
{
lean_object* v___x_3764_; uint8_t v___x_3765_; 
v___x_3764_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__9));
v___x_3765_ = l_Lean_Expr_isConstOf(v___x_3757_, v___x_3764_);
if (v___x_3765_ == 0)
{
lean_object* v___x_3766_; uint8_t v___x_3767_; 
v___x_3766_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_evalDataValueStx___closed__7));
v___x_3767_ = l_Lean_Expr_isConstOf(v___x_3757_, v___x_3766_);
lean_dec_ref(v___x_3757_);
if (v___x_3767_ == 0)
{
lean_dec_ref(v_arg_3756_);
v___y_3553_ = v_a_3547_;
v___y_3554_ = v_a_3548_;
v___y_3555_ = v_a_3549_;
v___y_3556_ = v_a_3550_;
goto v___jp_3552_;
}
else
{
lean_object* v___x_3768_; 
lean_dec_ref(v_e_3546_);
v___x_3768_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v_arg_3756_, v_a_3547_, v_a_3548_, v_a_3549_, v_a_3550_);
if (lean_obj_tag(v___x_3768_) == 0)
{
lean_object* v_a_3769_; lean_object* v___x_3771_; uint8_t v_isShared_3772_; uint8_t v_isSharedCheck_3778_; 
v_a_3769_ = lean_ctor_get(v___x_3768_, 0);
v_isSharedCheck_3778_ = !lean_is_exclusive(v___x_3768_);
if (v_isSharedCheck_3778_ == 0)
{
v___x_3771_ = v___x_3768_;
v_isShared_3772_ = v_isSharedCheck_3778_;
goto v_resetjp_3770_;
}
else
{
lean_inc(v_a_3769_);
lean_dec(v___x_3768_);
v___x_3771_ = lean_box(0);
v_isShared_3772_ = v_isSharedCheck_3778_;
goto v_resetjp_3770_;
}
v_resetjp_3770_:
{
lean_object* v___x_3773_; uint8_t v___x_3774_; lean_object* v___x_3776_; 
v___x_3773_ = lean_alloc_ctor(1, 0, 1);
v___x_3774_ = lean_unbox(v_a_3769_);
lean_dec(v_a_3769_);
lean_ctor_set_uint8(v___x_3773_, 0, v___x_3774_);
if (v_isShared_3772_ == 0)
{
lean_ctor_set(v___x_3771_, 0, v___x_3773_);
v___x_3776_ = v___x_3771_;
goto v_reusejp_3775_;
}
else
{
lean_object* v_reuseFailAlloc_3777_; 
v_reuseFailAlloc_3777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3777_, 0, v___x_3773_);
v___x_3776_ = v_reuseFailAlloc_3777_;
goto v_reusejp_3775_;
}
v_reusejp_3775_:
{
return v___x_3776_;
}
}
}
else
{
lean_object* v_a_3779_; lean_object* v___x_3781_; uint8_t v_isShared_3782_; uint8_t v_isSharedCheck_3786_; 
v_a_3779_ = lean_ctor_get(v___x_3768_, 0);
v_isSharedCheck_3786_ = !lean_is_exclusive(v___x_3768_);
if (v_isSharedCheck_3786_ == 0)
{
v___x_3781_ = v___x_3768_;
v_isShared_3782_ = v_isSharedCheck_3786_;
goto v_resetjp_3780_;
}
else
{
lean_inc(v_a_3779_);
lean_dec(v___x_3768_);
v___x_3781_ = lean_box(0);
v_isShared_3782_ = v_isSharedCheck_3786_;
goto v_resetjp_3780_;
}
v_resetjp_3780_:
{
lean_object* v___x_3784_; 
if (v_isShared_3782_ == 0)
{
v___x_3784_ = v___x_3781_;
goto v_reusejp_3783_;
}
else
{
lean_object* v_reuseFailAlloc_3785_; 
v_reuseFailAlloc_3785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3785_, 0, v_a_3779_);
v___x_3784_ = v_reuseFailAlloc_3785_;
goto v_reusejp_3783_;
}
v_reusejp_3783_:
{
return v___x_3784_;
}
}
}
}
}
else
{
lean_object* v___x_3787_; 
lean_dec_ref(v___x_3757_);
lean_dec_ref(v_e_3546_);
v___x_3787_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNatExpr(v_arg_3756_, v_a_3547_, v_a_3548_, v_a_3549_, v_a_3550_);
if (lean_obj_tag(v___x_3787_) == 0)
{
lean_object* v_a_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3796_; 
v_a_3788_ = lean_ctor_get(v___x_3787_, 0);
v_isSharedCheck_3796_ = !lean_is_exclusive(v___x_3787_);
if (v_isSharedCheck_3796_ == 0)
{
v___x_3790_ = v___x_3787_;
v_isShared_3791_ = v_isSharedCheck_3796_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_a_3788_);
lean_dec(v___x_3787_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3796_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
lean_object* v___x_3792_; lean_object* v___x_3794_; 
v___x_3792_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3792_, 0, v_a_3788_);
if (v_isShared_3791_ == 0)
{
lean_ctor_set(v___x_3790_, 0, v___x_3792_);
v___x_3794_ = v___x_3790_;
goto v_reusejp_3793_;
}
else
{
lean_object* v_reuseFailAlloc_3795_; 
v_reuseFailAlloc_3795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3795_, 0, v___x_3792_);
v___x_3794_ = v_reuseFailAlloc_3795_;
goto v_reusejp_3793_;
}
v_reusejp_3793_:
{
return v___x_3794_;
}
}
}
else
{
lean_object* v_a_3797_; lean_object* v___x_3799_; uint8_t v_isShared_3800_; uint8_t v_isSharedCheck_3804_; 
v_a_3797_ = lean_ctor_get(v___x_3787_, 0);
v_isSharedCheck_3804_ = !lean_is_exclusive(v___x_3787_);
if (v_isSharedCheck_3804_ == 0)
{
v___x_3799_ = v___x_3787_;
v_isShared_3800_ = v_isSharedCheck_3804_;
goto v_resetjp_3798_;
}
else
{
lean_inc(v_a_3797_);
lean_dec(v___x_3787_);
v___x_3799_ = lean_box(0);
v_isShared_3800_ = v_isSharedCheck_3804_;
goto v_resetjp_3798_;
}
v_resetjp_3798_:
{
lean_object* v___x_3802_; 
if (v_isShared_3800_ == 0)
{
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
return v___x_3802_;
}
}
}
}
}
else
{
lean_object* v___x_3805_; 
lean_dec_ref(v___x_3757_);
lean_dec_ref(v_e_3546_);
v___x_3805_ = l_Lean_Elab_ConfigEval_EvalExpr_evalIntExpr(v_arg_3756_, v_a_3547_, v_a_3548_, v_a_3549_, v_a_3550_);
if (lean_obj_tag(v___x_3805_) == 0)
{
lean_object* v_a_3806_; lean_object* v___x_3808_; uint8_t v_isShared_3809_; uint8_t v_isSharedCheck_3814_; 
v_a_3806_ = lean_ctor_get(v___x_3805_, 0);
v_isSharedCheck_3814_ = !lean_is_exclusive(v___x_3805_);
if (v_isSharedCheck_3814_ == 0)
{
v___x_3808_ = v___x_3805_;
v_isShared_3809_ = v_isSharedCheck_3814_;
goto v_resetjp_3807_;
}
else
{
lean_inc(v_a_3806_);
lean_dec(v___x_3805_);
v___x_3808_ = lean_box(0);
v_isShared_3809_ = v_isSharedCheck_3814_;
goto v_resetjp_3807_;
}
v_resetjp_3807_:
{
lean_object* v___x_3810_; lean_object* v___x_3812_; 
v___x_3810_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3810_, 0, v_a_3806_);
if (v_isShared_3809_ == 0)
{
lean_ctor_set(v___x_3808_, 0, v___x_3810_);
v___x_3812_ = v___x_3808_;
goto v_reusejp_3811_;
}
else
{
lean_object* v_reuseFailAlloc_3813_; 
v_reuseFailAlloc_3813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3813_, 0, v___x_3810_);
v___x_3812_ = v_reuseFailAlloc_3813_;
goto v_reusejp_3811_;
}
v_reusejp_3811_:
{
return v___x_3812_;
}
}
}
else
{
lean_object* v_a_3815_; lean_object* v___x_3817_; uint8_t v_isShared_3818_; uint8_t v_isSharedCheck_3822_; 
v_a_3815_ = lean_ctor_get(v___x_3805_, 0);
v_isSharedCheck_3822_ = !lean_is_exclusive(v___x_3805_);
if (v_isSharedCheck_3822_ == 0)
{
v___x_3817_ = v___x_3805_;
v_isShared_3818_ = v_isSharedCheck_3822_;
goto v_resetjp_3816_;
}
else
{
lean_inc(v_a_3815_);
lean_dec(v___x_3805_);
v___x_3817_ = lean_box(0);
v_isShared_3818_ = v_isSharedCheck_3822_;
goto v_resetjp_3816_;
}
v_resetjp_3816_:
{
lean_object* v___x_3820_; 
if (v_isShared_3818_ == 0)
{
v___x_3820_ = v___x_3817_;
goto v_reusejp_3819_;
}
else
{
lean_object* v_reuseFailAlloc_3821_; 
v_reuseFailAlloc_3821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3821_, 0, v_a_3815_);
v___x_3820_ = v_reuseFailAlloc_3821_;
goto v_reusejp_3819_;
}
v_reusejp_3819_:
{
return v___x_3820_;
}
}
}
}
}
else
{
lean_object* v___x_3823_; 
lean_dec_ref(v___x_3757_);
lean_dec_ref(v_e_3546_);
v___x_3823_ = l_Lean_Elab_ConfigEval_EvalExpr_evalStringExpr(v_arg_3756_, v_a_3547_, v_a_3548_, v_a_3549_, v_a_3550_);
if (lean_obj_tag(v___x_3823_) == 0)
{
lean_object* v_a_3824_; lean_object* v___x_3826_; uint8_t v_isShared_3827_; uint8_t v_isSharedCheck_3832_; 
v_a_3824_ = lean_ctor_get(v___x_3823_, 0);
v_isSharedCheck_3832_ = !lean_is_exclusive(v___x_3823_);
if (v_isSharedCheck_3832_ == 0)
{
v___x_3826_ = v___x_3823_;
v_isShared_3827_ = v_isSharedCheck_3832_;
goto v_resetjp_3825_;
}
else
{
lean_inc(v_a_3824_);
lean_dec(v___x_3823_);
v___x_3826_ = lean_box(0);
v_isShared_3827_ = v_isSharedCheck_3832_;
goto v_resetjp_3825_;
}
v_resetjp_3825_:
{
lean_object* v___x_3828_; lean_object* v___x_3830_; 
v___x_3828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3828_, 0, v_a_3824_);
if (v_isShared_3827_ == 0)
{
lean_ctor_set(v___x_3826_, 0, v___x_3828_);
v___x_3830_ = v___x_3826_;
goto v_reusejp_3829_;
}
else
{
lean_object* v_reuseFailAlloc_3831_; 
v_reuseFailAlloc_3831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3831_, 0, v___x_3828_);
v___x_3830_ = v_reuseFailAlloc_3831_;
goto v_reusejp_3829_;
}
v_reusejp_3829_:
{
return v___x_3830_;
}
}
}
else
{
lean_object* v_a_3833_; lean_object* v___x_3835_; uint8_t v_isShared_3836_; uint8_t v_isSharedCheck_3840_; 
v_a_3833_ = lean_ctor_get(v___x_3823_, 0);
v_isSharedCheck_3840_ = !lean_is_exclusive(v___x_3823_);
if (v_isSharedCheck_3840_ == 0)
{
v___x_3835_ = v___x_3823_;
v_isShared_3836_ = v_isSharedCheck_3840_;
goto v_resetjp_3834_;
}
else
{
lean_inc(v_a_3833_);
lean_dec(v___x_3823_);
v___x_3835_ = lean_box(0);
v_isShared_3836_ = v_isSharedCheck_3840_;
goto v_resetjp_3834_;
}
v_resetjp_3834_:
{
lean_object* v___x_3838_; 
if (v_isShared_3836_ == 0)
{
v___x_3838_ = v___x_3835_;
goto v_reusejp_3837_;
}
else
{
lean_object* v_reuseFailAlloc_3839_; 
v_reuseFailAlloc_3839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3839_, 0, v_a_3833_);
v___x_3838_ = v_reuseFailAlloc_3839_;
goto v_reusejp_3837_;
}
v_reusejp_3837_:
{
return v___x_3838_;
}
}
}
}
}
else
{
lean_object* v___x_3841_; 
lean_dec_ref(v___x_3757_);
lean_dec_ref(v_e_3546_);
v___x_3841_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNameExpr(v_arg_3756_, v_a_3547_, v_a_3548_, v_a_3549_, v_a_3550_);
if (lean_obj_tag(v___x_3841_) == 0)
{
lean_object* v_a_3842_; lean_object* v___x_3844_; uint8_t v_isShared_3845_; uint8_t v_isSharedCheck_3850_; 
v_a_3842_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_3850_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3850_ == 0)
{
v___x_3844_ = v___x_3841_;
v_isShared_3845_ = v_isSharedCheck_3850_;
goto v_resetjp_3843_;
}
else
{
lean_inc(v_a_3842_);
lean_dec(v___x_3841_);
v___x_3844_ = lean_box(0);
v_isShared_3845_ = v_isSharedCheck_3850_;
goto v_resetjp_3843_;
}
v_resetjp_3843_:
{
lean_object* v___x_3846_; lean_object* v___x_3848_; 
v___x_3846_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3846_, 0, v_a_3842_);
if (v_isShared_3845_ == 0)
{
lean_ctor_set(v___x_3844_, 0, v___x_3846_);
v___x_3848_ = v___x_3844_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3849_; 
v_reuseFailAlloc_3849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3849_, 0, v___x_3846_);
v___x_3848_ = v_reuseFailAlloc_3849_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
return v___x_3848_;
}
}
}
else
{
lean_object* v_a_3851_; lean_object* v___x_3853_; uint8_t v_isShared_3854_; uint8_t v_isSharedCheck_3858_; 
v_a_3851_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_3858_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3858_ == 0)
{
v___x_3853_ = v___x_3841_;
v_isShared_3854_ = v_isSharedCheck_3858_;
goto v_resetjp_3852_;
}
else
{
lean_inc(v_a_3851_);
lean_dec(v___x_3841_);
v___x_3853_ = lean_box(0);
v_isShared_3854_ = v_isSharedCheck_3858_;
goto v_resetjp_3852_;
}
v_resetjp_3852_:
{
lean_object* v___x_3856_; 
if (v_isShared_3854_ == 0)
{
v___x_3856_ = v___x_3853_;
goto v_reusejp_3855_;
}
else
{
lean_object* v_reuseFailAlloc_3857_; 
v_reuseFailAlloc_3857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3857_, 0, v_a_3851_);
v___x_3856_ = v_reuseFailAlloc_3857_;
goto v_reusejp_3855_;
}
v_reusejp_3855_:
{
return v___x_3856_;
}
}
}
}
}
v___jp_3552_:
{
lean_object* v___x_3557_; 
v___x_3557_ = l_Lean_Meta_saveState___redArg(v___y_3554_, v___y_3556_);
if (lean_obj_tag(v___x_3557_) == 0)
{
lean_object* v_a_3558_; lean_object* v___x_3559_; 
v_a_3558_ = lean_ctor_get(v___x_3557_, 0);
lean_inc(v_a_3558_);
lean_dec_ref_known(v___x_3557_, 1);
v___x_3559_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore(v_e_3546_, v___y_3553_, v___y_3554_, v___y_3555_, v___y_3556_);
if (lean_obj_tag(v___x_3559_) == 0)
{
lean_object* v_a_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3569_; 
lean_dec(v_a_3558_);
lean_dec_ref(v_e_3546_);
v_a_3560_ = lean_ctor_get(v___x_3559_, 0);
v_isSharedCheck_3569_ = !lean_is_exclusive(v___x_3559_);
if (v_isSharedCheck_3569_ == 0)
{
v___x_3562_ = v___x_3559_;
v_isShared_3563_ = v_isSharedCheck_3569_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_a_3560_);
lean_dec(v___x_3559_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3569_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
lean_object* v___x_3564_; uint8_t v___x_3565_; lean_object* v___x_3567_; 
v___x_3564_ = lean_alloc_ctor(1, 0, 1);
v___x_3565_ = lean_unbox(v_a_3560_);
lean_dec(v_a_3560_);
lean_ctor_set_uint8(v___x_3564_, 0, v___x_3565_);
if (v_isShared_3563_ == 0)
{
lean_ctor_set(v___x_3562_, 0, v___x_3564_);
v___x_3567_ = v___x_3562_;
goto v_reusejp_3566_;
}
else
{
lean_object* v_reuseFailAlloc_3568_; 
v_reuseFailAlloc_3568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3568_, 0, v___x_3564_);
v___x_3567_ = v_reuseFailAlloc_3568_;
goto v_reusejp_3566_;
}
v_reusejp_3566_:
{
return v___x_3567_;
}
}
}
else
{
lean_object* v_a_3570_; lean_object* v___x_3572_; uint8_t v_isShared_3573_; uint8_t v_isSharedCheck_3745_; 
v_a_3570_ = lean_ctor_get(v___x_3559_, 0);
v_isSharedCheck_3745_ = !lean_is_exclusive(v___x_3559_);
if (v_isSharedCheck_3745_ == 0)
{
v___x_3572_ = v___x_3559_;
v_isShared_3573_ = v_isSharedCheck_3745_;
goto v_resetjp_3571_;
}
else
{
lean_inc(v_a_3570_);
lean_dec(v___x_3559_);
v___x_3572_ = lean_box(0);
v_isShared_3573_ = v_isSharedCheck_3745_;
goto v_resetjp_3571_;
}
v_resetjp_3571_:
{
lean_object* v___x_3575_; 
lean_inc(v_a_3570_);
if (v_isShared_3573_ == 0)
{
v___x_3575_ = v___x_3572_;
goto v_reusejp_3574_;
}
else
{
lean_object* v_reuseFailAlloc_3744_; 
v_reuseFailAlloc_3744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3744_, 0, v_a_3570_);
v___x_3575_ = v_reuseFailAlloc_3744_;
goto v_reusejp_3574_;
}
v_reusejp_3574_:
{
uint8_t v___x_3576_; 
v___x_3576_ = l_Lean_Exception_isInterrupt(v_a_3570_);
if (v___x_3576_ == 0)
{
uint8_t v___x_3577_; 
v___x_3577_ = l_Lean_Exception_isRuntime(v_a_3570_);
if (v___x_3577_ == 0)
{
lean_object* v___x_3578_; 
lean_dec_ref(v___x_3575_);
v___x_3578_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3558_, v___y_3554_, v___y_3556_);
if (lean_obj_tag(v___x_3578_) == 0)
{
lean_object* v___x_3579_; 
lean_dec_ref_known(v___x_3578_, 1);
v___x_3579_ = l_Lean_Meta_saveState___redArg(v___y_3554_, v___y_3556_);
if (lean_obj_tag(v___x_3579_) == 0)
{
lean_object* v_a_3580_; lean_object* v___x_3581_; 
v_a_3580_ = lean_ctor_get(v___x_3579_, 0);
lean_inc(v_a_3580_);
lean_dec_ref_known(v___x_3579_, 1);
lean_inc_ref(v_e_3546_);
v___x_3581_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNatExprCore___redArg(v_e_3546_);
if (lean_obj_tag(v___x_3581_) == 0)
{
lean_object* v_a_3582_; lean_object* v___x_3584_; uint8_t v_isShared_3585_; uint8_t v_isSharedCheck_3590_; 
lean_dec(v_a_3580_);
lean_dec_ref(v_e_3546_);
v_a_3582_ = lean_ctor_get(v___x_3581_, 0);
v_isSharedCheck_3590_ = !lean_is_exclusive(v___x_3581_);
if (v_isSharedCheck_3590_ == 0)
{
v___x_3584_ = v___x_3581_;
v_isShared_3585_ = v_isSharedCheck_3590_;
goto v_resetjp_3583_;
}
else
{
lean_inc(v_a_3582_);
lean_dec(v___x_3581_);
v___x_3584_ = lean_box(0);
v_isShared_3585_ = v_isSharedCheck_3590_;
goto v_resetjp_3583_;
}
v_resetjp_3583_:
{
lean_object* v___x_3586_; lean_object* v___x_3588_; 
v___x_3586_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3586_, 0, v_a_3582_);
if (v_isShared_3585_ == 0)
{
lean_ctor_set(v___x_3584_, 0, v___x_3586_);
v___x_3588_ = v___x_3584_;
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
else
{
lean_object* v_a_3591_; lean_object* v___x_3593_; uint8_t v_isShared_3594_; uint8_t v_isSharedCheck_3727_; 
v_a_3591_ = lean_ctor_get(v___x_3581_, 0);
v_isSharedCheck_3727_ = !lean_is_exclusive(v___x_3581_);
if (v_isSharedCheck_3727_ == 0)
{
v___x_3593_ = v___x_3581_;
v_isShared_3594_ = v_isSharedCheck_3727_;
goto v_resetjp_3592_;
}
else
{
lean_inc(v_a_3591_);
lean_dec(v___x_3581_);
v___x_3593_ = lean_box(0);
v_isShared_3594_ = v_isSharedCheck_3727_;
goto v_resetjp_3592_;
}
v_resetjp_3592_:
{
lean_object* v___x_3596_; 
lean_inc(v_a_3591_);
if (v_isShared_3594_ == 0)
{
v___x_3596_ = v___x_3593_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3726_; 
v_reuseFailAlloc_3726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3726_, 0, v_a_3591_);
v___x_3596_ = v_reuseFailAlloc_3726_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
uint8_t v___x_3597_; 
v___x_3597_ = l_Lean_Exception_isInterrupt(v_a_3591_);
if (v___x_3597_ == 0)
{
uint8_t v___x_3598_; 
v___x_3598_ = l_Lean_Exception_isRuntime(v_a_3591_);
if (v___x_3598_ == 0)
{
lean_object* v___x_3599_; 
lean_dec_ref(v___x_3596_);
v___x_3599_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3580_, v___y_3554_, v___y_3556_);
if (lean_obj_tag(v___x_3599_) == 0)
{
lean_object* v___x_3600_; 
lean_dec_ref_known(v___x_3599_, 1);
v___x_3600_ = l_Lean_Meta_saveState___redArg(v___y_3554_, v___y_3556_);
if (lean_obj_tag(v___x_3600_) == 0)
{
lean_object* v_a_3601_; lean_object* v___x_3602_; 
v_a_3601_ = lean_ctor_get(v___x_3600_, 0);
lean_inc(v_a_3601_);
lean_dec_ref_known(v___x_3600_, 1);
lean_inc_ref(v_e_3546_);
v___x_3602_ = l_Lean_Elab_ConfigEval_EvalExpr_evalIntExprCore(v_e_3546_, v___y_3553_, v___y_3554_, v___y_3555_, v___y_3556_);
if (lean_obj_tag(v___x_3602_) == 0)
{
lean_object* v_a_3603_; lean_object* v___x_3605_; uint8_t v_isShared_3606_; uint8_t v_isSharedCheck_3611_; 
lean_dec(v_a_3601_);
lean_dec_ref(v_e_3546_);
v_a_3603_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3611_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3611_ == 0)
{
v___x_3605_ = v___x_3602_;
v_isShared_3606_ = v_isSharedCheck_3611_;
goto v_resetjp_3604_;
}
else
{
lean_inc(v_a_3603_);
lean_dec(v___x_3602_);
v___x_3605_ = lean_box(0);
v_isShared_3606_ = v_isSharedCheck_3611_;
goto v_resetjp_3604_;
}
v_resetjp_3604_:
{
lean_object* v___x_3607_; lean_object* v___x_3609_; 
v___x_3607_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3607_, 0, v_a_3603_);
if (v_isShared_3606_ == 0)
{
lean_ctor_set(v___x_3605_, 0, v___x_3607_);
v___x_3609_ = v___x_3605_;
goto v_reusejp_3608_;
}
else
{
lean_object* v_reuseFailAlloc_3610_; 
v_reuseFailAlloc_3610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3610_, 0, v___x_3607_);
v___x_3609_ = v_reuseFailAlloc_3610_;
goto v_reusejp_3608_;
}
v_reusejp_3608_:
{
return v___x_3609_;
}
}
}
else
{
lean_object* v_a_3612_; lean_object* v___x_3614_; uint8_t v_isShared_3615_; uint8_t v_isSharedCheck_3709_; 
v_a_3612_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3709_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3709_ == 0)
{
v___x_3614_ = v___x_3602_;
v_isShared_3615_ = v_isSharedCheck_3709_;
goto v_resetjp_3613_;
}
else
{
lean_inc(v_a_3612_);
lean_dec(v___x_3602_);
v___x_3614_ = lean_box(0);
v_isShared_3615_ = v_isSharedCheck_3709_;
goto v_resetjp_3613_;
}
v_resetjp_3613_:
{
lean_object* v___x_3617_; 
lean_inc(v_a_3612_);
if (v_isShared_3615_ == 0)
{
v___x_3617_ = v___x_3614_;
goto v_reusejp_3616_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v_a_3612_);
v___x_3617_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3616_;
}
v_reusejp_3616_:
{
uint8_t v___x_3618_; 
v___x_3618_ = l_Lean_Exception_isInterrupt(v_a_3612_);
if (v___x_3618_ == 0)
{
uint8_t v___x_3619_; 
v___x_3619_ = l_Lean_Exception_isRuntime(v_a_3612_);
if (v___x_3619_ == 0)
{
lean_object* v___x_3620_; 
lean_dec_ref(v___x_3617_);
v___x_3620_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3601_, v___y_3554_, v___y_3556_);
if (lean_obj_tag(v___x_3620_) == 0)
{
lean_object* v___x_3621_; 
lean_dec_ref_known(v___x_3620_, 1);
v___x_3621_ = l_Lean_Meta_saveState___redArg(v___y_3554_, v___y_3556_);
if (lean_obj_tag(v___x_3621_) == 0)
{
lean_object* v_a_3622_; lean_object* v___x_3623_; 
v_a_3622_ = lean_ctor_get(v___x_3621_, 0);
lean_inc(v_a_3622_);
lean_dec_ref_known(v___x_3621_, 1);
lean_inc_ref(v_e_3546_);
v___x_3623_ = l_Lean_Elab_ConfigEval_EvalExpr_evalStringExprCore___redArg(v_e_3546_);
if (lean_obj_tag(v___x_3623_) == 0)
{
lean_object* v_a_3624_; lean_object* v___x_3626_; uint8_t v_isShared_3627_; uint8_t v_isSharedCheck_3632_; 
lean_dec(v_a_3622_);
lean_dec_ref(v_e_3546_);
v_a_3624_ = lean_ctor_get(v___x_3623_, 0);
v_isSharedCheck_3632_ = !lean_is_exclusive(v___x_3623_);
if (v_isSharedCheck_3632_ == 0)
{
v___x_3626_ = v___x_3623_;
v_isShared_3627_ = v_isSharedCheck_3632_;
goto v_resetjp_3625_;
}
else
{
lean_inc(v_a_3624_);
lean_dec(v___x_3623_);
v___x_3626_ = lean_box(0);
v_isShared_3627_ = v_isSharedCheck_3632_;
goto v_resetjp_3625_;
}
v_resetjp_3625_:
{
lean_object* v___x_3628_; lean_object* v___x_3630_; 
v___x_3628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3628_, 0, v_a_3624_);
if (v_isShared_3627_ == 0)
{
lean_ctor_set(v___x_3626_, 0, v___x_3628_);
v___x_3630_ = v___x_3626_;
goto v_reusejp_3629_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v___x_3628_);
v___x_3630_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3629_;
}
v_reusejp_3629_:
{
return v___x_3630_;
}
}
}
else
{
lean_object* v_a_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3691_; 
v_a_3633_ = lean_ctor_get(v___x_3623_, 0);
v_isSharedCheck_3691_ = !lean_is_exclusive(v___x_3623_);
if (v_isSharedCheck_3691_ == 0)
{
v___x_3635_ = v___x_3623_;
v_isShared_3636_ = v_isSharedCheck_3691_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_a_3633_);
lean_dec(v___x_3623_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3691_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v___x_3638_; 
lean_inc(v_a_3633_);
if (v_isShared_3636_ == 0)
{
v___x_3638_ = v___x_3635_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3690_; 
v_reuseFailAlloc_3690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3690_, 0, v_a_3633_);
v___x_3638_ = v_reuseFailAlloc_3690_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
uint8_t v___x_3639_; 
v___x_3639_ = l_Lean_Exception_isInterrupt(v_a_3633_);
if (v___x_3639_ == 0)
{
uint8_t v___x_3640_; 
v___x_3640_ = l_Lean_Exception_isRuntime(v_a_3633_);
if (v___x_3640_ == 0)
{
lean_object* v___x_3641_; 
lean_dec_ref(v___x_3638_);
v___x_3641_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3622_, v___y_3554_, v___y_3556_);
if (lean_obj_tag(v___x_3641_) == 0)
{
lean_object* v___x_3642_; 
lean_dec_ref_known(v___x_3641_, 1);
v___x_3642_ = l_Lean_Meta_saveState___redArg(v___y_3554_, v___y_3556_);
if (lean_obj_tag(v___x_3642_) == 0)
{
lean_object* v_a_3643_; lean_object* v___x_3644_; 
v_a_3643_ = lean_ctor_get(v___x_3642_, 0);
lean_inc(v_a_3643_);
lean_dec_ref_known(v___x_3642_, 1);
v___x_3644_ = l_Lean_Elab_ConfigEval_EvalExpr_evalNameExprCore___redArg(v_e_3546_);
if (lean_obj_tag(v___x_3644_) == 0)
{
lean_object* v_a_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3653_; 
lean_dec(v_a_3643_);
v_a_3645_ = lean_ctor_get(v___x_3644_, 0);
v_isSharedCheck_3653_ = !lean_is_exclusive(v___x_3644_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3647_ = v___x_3644_;
v_isShared_3648_ = v_isSharedCheck_3653_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_a_3645_);
lean_dec(v___x_3644_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3653_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
lean_object* v___x_3649_; lean_object* v___x_3651_; 
v___x_3649_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3649_, 0, v_a_3645_);
if (v_isShared_3648_ == 0)
{
lean_ctor_set(v___x_3647_, 0, v___x_3649_);
v___x_3651_ = v___x_3647_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v___x_3649_);
v___x_3651_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
return v___x_3651_;
}
}
}
else
{
lean_object* v_a_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3673_; 
v_a_3654_ = lean_ctor_get(v___x_3644_, 0);
v_isSharedCheck_3673_ = !lean_is_exclusive(v___x_3644_);
if (v_isSharedCheck_3673_ == 0)
{
v___x_3656_ = v___x_3644_;
v_isShared_3657_ = v_isSharedCheck_3673_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_a_3654_);
lean_dec(v___x_3644_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3673_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v___x_3659_; 
lean_inc(v_a_3654_);
if (v_isShared_3657_ == 0)
{
v___x_3659_ = v___x_3656_;
goto v_reusejp_3658_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v_a_3654_);
v___x_3659_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3658_;
}
v_reusejp_3658_:
{
uint8_t v___x_3660_; 
v___x_3660_ = l_Lean_Exception_isInterrupt(v_a_3654_);
if (v___x_3660_ == 0)
{
uint8_t v___x_3661_; 
v___x_3661_ = l_Lean_Exception_isRuntime(v_a_3654_);
if (v___x_3661_ == 0)
{
lean_object* v___x_3662_; 
lean_dec_ref(v___x_3659_);
v___x_3662_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3643_, v___y_3554_, v___y_3556_);
if (lean_obj_tag(v___x_3662_) == 0)
{
lean_object* v___x_3663_; 
lean_dec_ref_known(v___x_3662_, 1);
v___x_3663_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00Lean_Elab_ConfigEval_EvalExpr_evalBoolExprCore_spec__0___redArg();
return v___x_3663_;
}
else
{
lean_object* v_a_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3671_; 
v_a_3664_ = lean_ctor_get(v___x_3662_, 0);
v_isSharedCheck_3671_ = !lean_is_exclusive(v___x_3662_);
if (v_isSharedCheck_3671_ == 0)
{
v___x_3666_ = v___x_3662_;
v_isShared_3667_ = v_isSharedCheck_3671_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_a_3664_);
lean_dec(v___x_3662_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3671_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v___x_3669_; 
if (v_isShared_3667_ == 0)
{
v___x_3669_ = v___x_3666_;
goto v_reusejp_3668_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v_a_3664_);
v___x_3669_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3668_;
}
v_reusejp_3668_:
{
return v___x_3669_;
}
}
}
}
else
{
lean_dec(v_a_3643_);
return v___x_3659_;
}
}
else
{
lean_dec(v_a_3654_);
lean_dec(v_a_3643_);
return v___x_3659_;
}
}
}
}
}
else
{
lean_object* v_a_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3681_; 
lean_dec_ref(v_e_3546_);
v_a_3674_ = lean_ctor_get(v___x_3642_, 0);
v_isSharedCheck_3681_ = !lean_is_exclusive(v___x_3642_);
if (v_isSharedCheck_3681_ == 0)
{
v___x_3676_ = v___x_3642_;
v_isShared_3677_ = v_isSharedCheck_3681_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_a_3674_);
lean_dec(v___x_3642_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3681_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
lean_object* v___x_3679_; 
if (v_isShared_3677_ == 0)
{
v___x_3679_ = v___x_3676_;
goto v_reusejp_3678_;
}
else
{
lean_object* v_reuseFailAlloc_3680_; 
v_reuseFailAlloc_3680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3680_, 0, v_a_3674_);
v___x_3679_ = v_reuseFailAlloc_3680_;
goto v_reusejp_3678_;
}
v_reusejp_3678_:
{
return v___x_3679_;
}
}
}
}
else
{
lean_object* v_a_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3689_; 
lean_dec_ref(v_e_3546_);
v_a_3682_ = lean_ctor_get(v___x_3641_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v___x_3641_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3684_ = v___x_3641_;
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_a_3682_);
lean_dec(v___x_3641_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v___x_3687_; 
if (v_isShared_3685_ == 0)
{
v___x_3687_ = v___x_3684_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v_a_3682_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
}
else
{
lean_dec(v_a_3622_);
lean_dec_ref(v_e_3546_);
return v___x_3638_;
}
}
else
{
lean_dec(v_a_3633_);
lean_dec(v_a_3622_);
lean_dec_ref(v_e_3546_);
return v___x_3638_;
}
}
}
}
}
else
{
lean_object* v_a_3692_; lean_object* v___x_3694_; uint8_t v_isShared_3695_; uint8_t v_isSharedCheck_3699_; 
lean_dec_ref(v_e_3546_);
v_a_3692_ = lean_ctor_get(v___x_3621_, 0);
v_isSharedCheck_3699_ = !lean_is_exclusive(v___x_3621_);
if (v_isSharedCheck_3699_ == 0)
{
v___x_3694_ = v___x_3621_;
v_isShared_3695_ = v_isSharedCheck_3699_;
goto v_resetjp_3693_;
}
else
{
lean_inc(v_a_3692_);
lean_dec(v___x_3621_);
v___x_3694_ = lean_box(0);
v_isShared_3695_ = v_isSharedCheck_3699_;
goto v_resetjp_3693_;
}
v_resetjp_3693_:
{
lean_object* v___x_3697_; 
if (v_isShared_3695_ == 0)
{
v___x_3697_ = v___x_3694_;
goto v_reusejp_3696_;
}
else
{
lean_object* v_reuseFailAlloc_3698_; 
v_reuseFailAlloc_3698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3698_, 0, v_a_3692_);
v___x_3697_ = v_reuseFailAlloc_3698_;
goto v_reusejp_3696_;
}
v_reusejp_3696_:
{
return v___x_3697_;
}
}
}
}
else
{
lean_object* v_a_3700_; lean_object* v___x_3702_; uint8_t v_isShared_3703_; uint8_t v_isSharedCheck_3707_; 
lean_dec_ref(v_e_3546_);
v_a_3700_ = lean_ctor_get(v___x_3620_, 0);
v_isSharedCheck_3707_ = !lean_is_exclusive(v___x_3620_);
if (v_isSharedCheck_3707_ == 0)
{
v___x_3702_ = v___x_3620_;
v_isShared_3703_ = v_isSharedCheck_3707_;
goto v_resetjp_3701_;
}
else
{
lean_inc(v_a_3700_);
lean_dec(v___x_3620_);
v___x_3702_ = lean_box(0);
v_isShared_3703_ = v_isSharedCheck_3707_;
goto v_resetjp_3701_;
}
v_resetjp_3701_:
{
lean_object* v___x_3705_; 
if (v_isShared_3703_ == 0)
{
v___x_3705_ = v___x_3702_;
goto v_reusejp_3704_;
}
else
{
lean_object* v_reuseFailAlloc_3706_; 
v_reuseFailAlloc_3706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3706_, 0, v_a_3700_);
v___x_3705_ = v_reuseFailAlloc_3706_;
goto v_reusejp_3704_;
}
v_reusejp_3704_:
{
return v___x_3705_;
}
}
}
}
else
{
lean_dec(v_a_3601_);
lean_dec_ref(v_e_3546_);
return v___x_3617_;
}
}
else
{
lean_dec(v_a_3612_);
lean_dec(v_a_3601_);
lean_dec_ref(v_e_3546_);
return v___x_3617_;
}
}
}
}
}
else
{
lean_object* v_a_3710_; lean_object* v___x_3712_; uint8_t v_isShared_3713_; uint8_t v_isSharedCheck_3717_; 
lean_dec_ref(v_e_3546_);
v_a_3710_ = lean_ctor_get(v___x_3600_, 0);
v_isSharedCheck_3717_ = !lean_is_exclusive(v___x_3600_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3712_ = v___x_3600_;
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
else
{
lean_inc(v_a_3710_);
lean_dec(v___x_3600_);
v___x_3712_ = lean_box(0);
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
v_resetjp_3711_:
{
lean_object* v___x_3715_; 
if (v_isShared_3713_ == 0)
{
v___x_3715_ = v___x_3712_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v_a_3710_);
v___x_3715_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
return v___x_3715_;
}
}
}
}
else
{
lean_object* v_a_3718_; lean_object* v___x_3720_; uint8_t v_isShared_3721_; uint8_t v_isSharedCheck_3725_; 
lean_dec_ref(v_e_3546_);
v_a_3718_ = lean_ctor_get(v___x_3599_, 0);
v_isSharedCheck_3725_ = !lean_is_exclusive(v___x_3599_);
if (v_isSharedCheck_3725_ == 0)
{
v___x_3720_ = v___x_3599_;
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
else
{
lean_inc(v_a_3718_);
lean_dec(v___x_3599_);
v___x_3720_ = lean_box(0);
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
v_resetjp_3719_:
{
lean_object* v___x_3723_; 
if (v_isShared_3721_ == 0)
{
v___x_3723_ = v___x_3720_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v_a_3718_);
v___x_3723_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
return v___x_3723_;
}
}
}
}
else
{
lean_dec(v_a_3580_);
lean_dec_ref(v_e_3546_);
return v___x_3596_;
}
}
else
{
lean_dec(v_a_3591_);
lean_dec(v_a_3580_);
lean_dec_ref(v_e_3546_);
return v___x_3596_;
}
}
}
}
}
else
{
lean_object* v_a_3728_; lean_object* v___x_3730_; uint8_t v_isShared_3731_; uint8_t v_isSharedCheck_3735_; 
lean_dec_ref(v_e_3546_);
v_a_3728_ = lean_ctor_get(v___x_3579_, 0);
v_isSharedCheck_3735_ = !lean_is_exclusive(v___x_3579_);
if (v_isSharedCheck_3735_ == 0)
{
v___x_3730_ = v___x_3579_;
v_isShared_3731_ = v_isSharedCheck_3735_;
goto v_resetjp_3729_;
}
else
{
lean_inc(v_a_3728_);
lean_dec(v___x_3579_);
v___x_3730_ = lean_box(0);
v_isShared_3731_ = v_isSharedCheck_3735_;
goto v_resetjp_3729_;
}
v_resetjp_3729_:
{
lean_object* v___x_3733_; 
if (v_isShared_3731_ == 0)
{
v___x_3733_ = v___x_3730_;
goto v_reusejp_3732_;
}
else
{
lean_object* v_reuseFailAlloc_3734_; 
v_reuseFailAlloc_3734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3734_, 0, v_a_3728_);
v___x_3733_ = v_reuseFailAlloc_3734_;
goto v_reusejp_3732_;
}
v_reusejp_3732_:
{
return v___x_3733_;
}
}
}
}
else
{
lean_object* v_a_3736_; lean_object* v___x_3738_; uint8_t v_isShared_3739_; uint8_t v_isSharedCheck_3743_; 
lean_dec_ref(v_e_3546_);
v_a_3736_ = lean_ctor_get(v___x_3578_, 0);
v_isSharedCheck_3743_ = !lean_is_exclusive(v___x_3578_);
if (v_isSharedCheck_3743_ == 0)
{
v___x_3738_ = v___x_3578_;
v_isShared_3739_ = v_isSharedCheck_3743_;
goto v_resetjp_3737_;
}
else
{
lean_inc(v_a_3736_);
lean_dec(v___x_3578_);
v___x_3738_ = lean_box(0);
v_isShared_3739_ = v_isSharedCheck_3743_;
goto v_resetjp_3737_;
}
v_resetjp_3737_:
{
lean_object* v___x_3741_; 
if (v_isShared_3739_ == 0)
{
v___x_3741_ = v___x_3738_;
goto v_reusejp_3740_;
}
else
{
lean_object* v_reuseFailAlloc_3742_; 
v_reuseFailAlloc_3742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3742_, 0, v_a_3736_);
v___x_3741_ = v_reuseFailAlloc_3742_;
goto v_reusejp_3740_;
}
v_reusejp_3740_:
{
return v___x_3741_;
}
}
}
}
else
{
lean_dec(v_a_3558_);
lean_dec_ref(v_e_3546_);
return v___x_3575_;
}
}
else
{
lean_dec(v_a_3570_);
lean_dec(v_a_3558_);
lean_dec_ref(v_e_3546_);
return v___x_3575_;
}
}
}
}
}
else
{
lean_object* v_a_3746_; lean_object* v___x_3748_; uint8_t v_isShared_3749_; uint8_t v_isSharedCheck_3753_; 
lean_dec_ref(v_e_3546_);
v_a_3746_ = lean_ctor_get(v___x_3557_, 0);
v_isSharedCheck_3753_ = !lean_is_exclusive(v___x_3557_);
if (v_isSharedCheck_3753_ == 0)
{
v___x_3748_ = v___x_3557_;
v_isShared_3749_ = v_isSharedCheck_3753_;
goto v_resetjp_3747_;
}
else
{
lean_inc(v_a_3746_);
lean_dec(v___x_3557_);
v___x_3748_ = lean_box(0);
v_isShared_3749_ = v_isSharedCheck_3753_;
goto v_resetjp_3747_;
}
v_resetjp_3747_:
{
lean_object* v___x_3751_; 
if (v_isShared_3749_ == 0)
{
v___x_3751_ = v___x_3748_;
goto v_reusejp_3750_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v_a_3746_);
v___x_3751_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3750_;
}
v_reusejp_3750_:
{
return v___x_3751_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExprCore___boxed(lean_object* v_e_3859_, lean_object* v_a_3860_, lean_object* v_a_3861_, lean_object* v_a_3862_, lean_object* v_a_3863_, lean_object* v_a_3864_){
_start:
{
lean_object* v_res_3865_; 
v_res_3865_ = l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExprCore(v_e_3859_, v_a_3860_, v_a_3861_, v_a_3862_, v_a_3863_);
lean_dec(v_a_3863_);
lean_dec_ref(v_a_3862_);
lean_dec(v_a_3861_);
lean_dec_ref(v_a_3860_);
return v_res_3865_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__1(void){
_start:
{
uint8_t v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; 
v___x_3867_ = 0;
v___x_3868_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalTerm_instDataValue___closed__1));
v___x_3869_ = l_Lean_MessageData_ofConstName(v___x_3868_, v___x_3867_);
return v___x_3869_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__2(void){
_start:
{
lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; 
v___x_3870_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__1);
v___x_3871_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__2);
v___x_3872_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3872_, 0, v___x_3871_);
lean_ctor_set(v___x_3872_, 1, v___x_3870_);
return v___x_3872_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__3(void){
_start:
{
lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; 
v___x_3873_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6, &l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr___closed__6);
v___x_3874_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__2, &l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__2);
v___x_3875_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3875_, 0, v___x_3874_);
lean_ctor_set(v___x_3875_, 1, v___x_3873_);
return v___x_3875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr(lean_object* v_e_3876_, lean_object* v_a_3877_, lean_object* v_a_3878_, lean_object* v_a_3879_, lean_object* v_a_3880_){
_start:
{
lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; 
v___x_3882_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__0));
v___x_3883_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__3, &l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___closed__3);
v___x_3884_ = l_Lean_Elab_ConfigEval_EvalExpr_withWHNF___redArg(v___x_3882_, v_e_3876_, v___x_3883_, v_a_3877_, v_a_3878_, v_a_3879_, v_a_3880_);
return v___x_3884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr___boxed(lean_object* v_e_3885_, lean_object* v_a_3886_, lean_object* v_a_3887_, lean_object* v_a_3888_, lean_object* v_a_3889_, lean_object* v_a_3890_){
_start:
{
lean_object* v_res_3891_; 
v_res_3891_ = l_Lean_Elab_ConfigEval_EvalExpr_evalDataValueExpr(v_e_3885_, v_a_3886_, v_a_3887_, v_a_3888_, v_a_3889_);
lean_dec(v_a_3889_);
lean_dec_ref(v_a_3888_);
lean_dec(v_a_3887_);
lean_dec_ref(v_a_3886_);
return v_res_3891_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__1(void){
_start:
{
lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; 
v___x_3893_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalBoolStx___closed__3);
v___x_3894_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__0));
v___x_3895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3895_, 0, v___x_3894_);
lean_ctor_set(v___x_3895_, 1, v___x_3893_);
return v___x_3895_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instBool(void){
_start:
{
lean_object* v___x_3896_; 
v___x_3896_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_instBool___closed__1);
return v___x_3896_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__1(void){
_start:
{
lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; 
v___x_3898_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNatStx___closed__3);
v___x_3899_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__0));
v___x_3900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3900_, 0, v___x_3899_);
lean_ctor_set(v___x_3900_, 1, v___x_3898_);
return v___x_3900_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instNat(void){
_start:
{
lean_object* v___x_3901_; 
v___x_3901_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_instNat___closed__1);
return v___x_3901_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__1(void){
_start:
{
lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; 
v___x_3903_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalIntStx___closed__3);
v___x_3904_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__0));
v___x_3905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3905_, 0, v___x_3904_);
lean_ctor_set(v___x_3905_, 1, v___x_3903_);
return v___x_3905_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instInt(void){
_start:
{
lean_object* v___x_3906_; 
v___x_3906_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_instInt___closed__1);
return v___x_3906_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__1(void){
_start:
{
lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; 
v___x_3908_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalStringStx___closed__3);
v___x_3909_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__0));
v___x_3910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3910_, 0, v___x_3909_);
lean_ctor_set(v___x_3910_, 1, v___x_3908_);
return v___x_3910_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instString(void){
_start:
{
lean_object* v___x_3911_; 
v___x_3911_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_instString___closed__1);
return v___x_3911_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__1(void){
_start:
{
lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; 
v___x_3913_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__3, &l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__3_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalNameStx___closed__3);
v___x_3914_ = ((lean_object*)(l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__0));
v___x_3915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3915_, 0, v___x_3914_);
lean_ctor_set(v___x_3915_, 1, v___x_3913_);
return v___x_3915_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_EvalExpr_instName(void){
_start:
{
lean_object* v___x_3916_; 
v___x_3916_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__1, &l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalExpr_instName___closed__1);
return v___x_3916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instOption___redArg(lean_object* v_inst_3917_){
_start:
{
lean_object* v_evalExpr_3918_; lean_object* v_expectedType_x3f_3919_; lean_object* v___x_3921_; uint8_t v_isShared_3922_; uint8_t v_isSharedCheck_3940_; 
v_evalExpr_3918_ = lean_ctor_get(v_inst_3917_, 0);
v_expectedType_x3f_3919_ = lean_ctor_get(v_inst_3917_, 1);
v_isSharedCheck_3940_ = !lean_is_exclusive(v_inst_3917_);
if (v_isSharedCheck_3940_ == 0)
{
v___x_3921_ = v_inst_3917_;
v_isShared_3922_ = v_isSharedCheck_3940_;
goto v_resetjp_3920_;
}
else
{
lean_inc(v_expectedType_x3f_3919_);
lean_inc(v_evalExpr_3918_);
lean_dec(v_inst_3917_);
v___x_3921_ = lean_box(0);
v_isShared_3922_ = v_isSharedCheck_3940_;
goto v_resetjp_3920_;
}
v_resetjp_3920_:
{
lean_object* v___x_3923_; 
v___x_3923_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalExpr_evalOptionExpr___boxed), 8, 2);
lean_closure_set(v___x_3923_, 0, lean_box(0));
lean_closure_set(v___x_3923_, 1, v_evalExpr_3918_);
if (lean_obj_tag(v_expectedType_x3f_3919_) == 0)
{
lean_object* v___x_3925_; 
if (v_isShared_3922_ == 0)
{
lean_ctor_set(v___x_3921_, 0, v___x_3923_);
v___x_3925_ = v___x_3921_;
goto v_reusejp_3924_;
}
else
{
lean_object* v_reuseFailAlloc_3926_; 
v_reuseFailAlloc_3926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3926_, 0, v___x_3923_);
lean_ctor_set(v_reuseFailAlloc_3926_, 1, v_expectedType_x3f_3919_);
v___x_3925_ = v_reuseFailAlloc_3926_;
goto v_reusejp_3924_;
}
v_reusejp_3924_:
{
return v___x_3925_;
}
}
else
{
lean_object* v_val_3927_; lean_object* v___x_3929_; uint8_t v_isShared_3930_; uint8_t v_isSharedCheck_3939_; 
v_val_3927_ = lean_ctor_get(v_expectedType_x3f_3919_, 0);
v_isSharedCheck_3939_ = !lean_is_exclusive(v_expectedType_x3f_3919_);
if (v_isSharedCheck_3939_ == 0)
{
v___x_3929_ = v_expectedType_x3f_3919_;
v_isShared_3930_ = v_isSharedCheck_3939_;
goto v_resetjp_3928_;
}
else
{
lean_inc(v_val_3927_);
lean_dec(v_expectedType_x3f_3919_);
v___x_3929_ = lean_box(0);
v_isShared_3930_ = v_isSharedCheck_3939_;
goto v_resetjp_3928_;
}
v_resetjp_3928_:
{
lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3934_; 
v___x_3931_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalOptionStx___redArg___closed__2);
v___x_3932_ = l_Lean_Expr_app___override(v___x_3931_, v_val_3927_);
if (v_isShared_3930_ == 0)
{
lean_ctor_set(v___x_3929_, 0, v___x_3932_);
v___x_3934_ = v___x_3929_;
goto v_reusejp_3933_;
}
else
{
lean_object* v_reuseFailAlloc_3938_; 
v_reuseFailAlloc_3938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3938_, 0, v___x_3932_);
v___x_3934_ = v_reuseFailAlloc_3938_;
goto v_reusejp_3933_;
}
v_reusejp_3933_:
{
lean_object* v___x_3936_; 
if (v_isShared_3922_ == 0)
{
lean_ctor_set(v___x_3921_, 1, v___x_3934_);
lean_ctor_set(v___x_3921_, 0, v___x_3923_);
v___x_3936_ = v___x_3921_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3937_; 
v_reuseFailAlloc_3937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3937_, 0, v___x_3923_);
lean_ctor_set(v_reuseFailAlloc_3937_, 1, v___x_3934_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instOption(lean_object* v_00_u03b1_3941_, lean_object* v_inst_3942_){
_start:
{
lean_object* v___x_3943_; 
v___x_3943_ = l_Lean_Elab_ConfigEval_EvalExpr_instOption___redArg(v_inst_3942_);
return v___x_3943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instList___redArg___lam__0(lean_object* v_evalExpr_3944_, lean_object* v_e_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_){
_start:
{
uint8_t v___x_3951_; lean_object* v___x_3952_; 
v___x_3951_ = 0;
v___x_3952_ = l_Lean_Elab_ConfigEval_EvalExpr_evalListExpr___redArg(v_evalExpr_3944_, v_e_3945_, v___x_3951_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_);
return v___x_3952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instList___redArg___lam__0___boxed(lean_object* v_evalExpr_3953_, lean_object* v_e_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_){
_start:
{
lean_object* v_res_3960_; 
v_res_3960_ = l_Lean_Elab_ConfigEval_EvalExpr_instList___redArg___lam__0(v_evalExpr_3953_, v_e_3954_, v___y_3955_, v___y_3956_, v___y_3957_, v___y_3958_);
lean_dec(v___y_3958_);
lean_dec_ref(v___y_3957_);
lean_dec(v___y_3956_);
lean_dec_ref(v___y_3955_);
return v_res_3960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instList___redArg(lean_object* v_inst_3961_){
_start:
{
lean_object* v_evalExpr_3962_; lean_object* v_expectedType_x3f_3963_; lean_object* v___x_3965_; uint8_t v_isShared_3966_; uint8_t v_isSharedCheck_3984_; 
v_evalExpr_3962_ = lean_ctor_get(v_inst_3961_, 0);
v_expectedType_x3f_3963_ = lean_ctor_get(v_inst_3961_, 1);
v_isSharedCheck_3984_ = !lean_is_exclusive(v_inst_3961_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3965_ = v_inst_3961_;
v_isShared_3966_ = v_isSharedCheck_3984_;
goto v_resetjp_3964_;
}
else
{
lean_inc(v_expectedType_x3f_3963_);
lean_inc(v_evalExpr_3962_);
lean_dec(v_inst_3961_);
v___x_3965_ = lean_box(0);
v_isShared_3966_ = v_isSharedCheck_3984_;
goto v_resetjp_3964_;
}
v_resetjp_3964_:
{
lean_object* v___f_3967_; 
v___f_3967_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalExpr_instList___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_3967_, 0, v_evalExpr_3962_);
if (lean_obj_tag(v_expectedType_x3f_3963_) == 0)
{
lean_object* v___x_3969_; 
if (v_isShared_3966_ == 0)
{
lean_ctor_set(v___x_3965_, 0, v___f_3967_);
v___x_3969_ = v___x_3965_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3970_; 
v_reuseFailAlloc_3970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3970_, 0, v___f_3967_);
lean_ctor_set(v_reuseFailAlloc_3970_, 1, v_expectedType_x3f_3963_);
v___x_3969_ = v_reuseFailAlloc_3970_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
return v___x_3969_;
}
}
else
{
lean_object* v_val_3971_; lean_object* v___x_3973_; uint8_t v_isShared_3974_; uint8_t v_isSharedCheck_3983_; 
v_val_3971_ = lean_ctor_get(v_expectedType_x3f_3963_, 0);
v_isSharedCheck_3983_ = !lean_is_exclusive(v_expectedType_x3f_3963_);
if (v_isSharedCheck_3983_ == 0)
{
v___x_3973_ = v_expectedType_x3f_3963_;
v_isShared_3974_ = v_isSharedCheck_3983_;
goto v_resetjp_3972_;
}
else
{
lean_inc(v_val_3971_);
lean_dec(v_expectedType_x3f_3963_);
v___x_3973_ = lean_box(0);
v_isShared_3974_ = v_isSharedCheck_3983_;
goto v_resetjp_3972_;
}
v_resetjp_3972_:
{
lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3978_; 
v___x_3975_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1, &l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalListStx___redArg___closed__1);
v___x_3976_ = l_Lean_Expr_app___override(v___x_3975_, v_val_3971_);
if (v_isShared_3974_ == 0)
{
lean_ctor_set(v___x_3973_, 0, v___x_3976_);
v___x_3978_ = v___x_3973_;
goto v_reusejp_3977_;
}
else
{
lean_object* v_reuseFailAlloc_3982_; 
v_reuseFailAlloc_3982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3982_, 0, v___x_3976_);
v___x_3978_ = v_reuseFailAlloc_3982_;
goto v_reusejp_3977_;
}
v_reusejp_3977_:
{
lean_object* v___x_3980_; 
if (v_isShared_3966_ == 0)
{
lean_ctor_set(v___x_3965_, 1, v___x_3978_);
lean_ctor_set(v___x_3965_, 0, v___f_3967_);
v___x_3980_ = v___x_3965_;
goto v_reusejp_3979_;
}
else
{
lean_object* v_reuseFailAlloc_3981_; 
v_reuseFailAlloc_3981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3981_, 0, v___f_3967_);
lean_ctor_set(v_reuseFailAlloc_3981_, 1, v___x_3978_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instList(lean_object* v_00_u03b1_3985_, lean_object* v_inst_3986_){
_start:
{
lean_object* v___x_3987_; 
v___x_3987_ = l_Lean_Elab_ConfigEval_EvalExpr_instList___redArg(v_inst_3986_);
return v___x_3987_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instArray___redArg(lean_object* v_inst_3988_){
_start:
{
lean_object* v_evalExpr_3989_; lean_object* v_expectedType_x3f_3990_; lean_object* v___x_3992_; uint8_t v_isShared_3993_; uint8_t v_isSharedCheck_4011_; 
v_evalExpr_3989_ = lean_ctor_get(v_inst_3988_, 0);
v_expectedType_x3f_3990_ = lean_ctor_get(v_inst_3988_, 1);
v_isSharedCheck_4011_ = !lean_is_exclusive(v_inst_3988_);
if (v_isSharedCheck_4011_ == 0)
{
v___x_3992_ = v_inst_3988_;
v_isShared_3993_ = v_isSharedCheck_4011_;
goto v_resetjp_3991_;
}
else
{
lean_inc(v_expectedType_x3f_3990_);
lean_inc(v_evalExpr_3989_);
lean_dec(v_inst_3988_);
v___x_3992_ = lean_box(0);
v_isShared_3993_ = v_isSharedCheck_4011_;
goto v_resetjp_3991_;
}
v_resetjp_3991_:
{
lean_object* v___x_3994_; 
v___x_3994_ = lean_alloc_closure((void*)(l_Lean_Elab_ConfigEval_EvalExpr_evalArrayExpr___boxed), 8, 2);
lean_closure_set(v___x_3994_, 0, lean_box(0));
lean_closure_set(v___x_3994_, 1, v_evalExpr_3989_);
if (lean_obj_tag(v_expectedType_x3f_3990_) == 0)
{
lean_object* v___x_3996_; 
if (v_isShared_3993_ == 0)
{
lean_ctor_set(v___x_3992_, 0, v___x_3994_);
v___x_3996_ = v___x_3992_;
goto v_reusejp_3995_;
}
else
{
lean_object* v_reuseFailAlloc_3997_; 
v_reuseFailAlloc_3997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3997_, 0, v___x_3994_);
lean_ctor_set(v_reuseFailAlloc_3997_, 1, v_expectedType_x3f_3990_);
v___x_3996_ = v_reuseFailAlloc_3997_;
goto v_reusejp_3995_;
}
v_reusejp_3995_:
{
return v___x_3996_;
}
}
else
{
lean_object* v_val_3998_; lean_object* v___x_4000_; uint8_t v_isShared_4001_; uint8_t v_isSharedCheck_4010_; 
v_val_3998_ = lean_ctor_get(v_expectedType_x3f_3990_, 0);
v_isSharedCheck_4010_ = !lean_is_exclusive(v_expectedType_x3f_3990_);
if (v_isSharedCheck_4010_ == 0)
{
v___x_4000_ = v_expectedType_x3f_3990_;
v_isShared_4001_ = v_isSharedCheck_4010_;
goto v_resetjp_3999_;
}
else
{
lean_inc(v_val_3998_);
lean_dec(v_expectedType_x3f_3990_);
v___x_4000_ = lean_box(0);
v_isShared_4001_ = v_isSharedCheck_4010_;
goto v_resetjp_3999_;
}
v_resetjp_3999_:
{
lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4005_; 
v___x_4002_ = lean_obj_once(&l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2, &l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2_once, _init_l_Lean_Elab_ConfigEval_EvalTerm_evalArrayStx___redArg___closed__2);
v___x_4003_ = l_Lean_Expr_app___override(v___x_4002_, v_val_3998_);
if (v_isShared_4001_ == 0)
{
lean_ctor_set(v___x_4000_, 0, v___x_4003_);
v___x_4005_ = v___x_4000_;
goto v_reusejp_4004_;
}
else
{
lean_object* v_reuseFailAlloc_4009_; 
v_reuseFailAlloc_4009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4009_, 0, v___x_4003_);
v___x_4005_ = v_reuseFailAlloc_4009_;
goto v_reusejp_4004_;
}
v_reusejp_4004_:
{
lean_object* v___x_4007_; 
if (v_isShared_3993_ == 0)
{
lean_ctor_set(v___x_3992_, 1, v___x_4005_);
lean_ctor_set(v___x_3992_, 0, v___x_3994_);
v___x_4007_ = v___x_3992_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v___x_3994_);
lean_ctor_set(v_reuseFailAlloc_4008_, 1, v___x_4005_);
v___x_4007_ = v_reuseFailAlloc_4008_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
return v___x_4007_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_EvalExpr_instArray(lean_object* v_00_u03b1_4012_, lean_object* v_inst_4013_){
_start:
{
lean_object* v___x_4014_; 
v___x_4014_ = l_Lean_Elab_ConfigEval_EvalExpr_instArray___redArg(v_inst_4013_);
return v___x_4014_;
}
}
lean_object* runtime_initialize_Lean_Elab_ConfigEval_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_ConfigEval_Instances(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_ConfigEval_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_ConfigEval_EvalTerm_instBool = _init_l_Lean_Elab_ConfigEval_EvalTerm_instBool();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalTerm_instBool);
l_Lean_Elab_ConfigEval_EvalTerm_instNat = _init_l_Lean_Elab_ConfigEval_EvalTerm_instNat();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalTerm_instNat);
l_Lean_Elab_ConfigEval_EvalTerm_instInt = _init_l_Lean_Elab_ConfigEval_EvalTerm_instInt();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalTerm_instInt);
l_Lean_Elab_ConfigEval_EvalTerm_instString = _init_l_Lean_Elab_ConfigEval_EvalTerm_instString();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalTerm_instString);
l_Lean_Elab_ConfigEval_EvalTerm_instName = _init_l_Lean_Elab_ConfigEval_EvalTerm_instName();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalTerm_instName);
l_Lean_Elab_ConfigEval_EvalTerm_instDataValue = _init_l_Lean_Elab_ConfigEval_EvalTerm_instDataValue();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalTerm_instDataValue);
l_Lean_Elab_ConfigEval_EvalExpr_instBool = _init_l_Lean_Elab_ConfigEval_EvalExpr_instBool();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalExpr_instBool);
l_Lean_Elab_ConfigEval_EvalExpr_instNat = _init_l_Lean_Elab_ConfigEval_EvalExpr_instNat();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalExpr_instNat);
l_Lean_Elab_ConfigEval_EvalExpr_instInt = _init_l_Lean_Elab_ConfigEval_EvalExpr_instInt();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalExpr_instInt);
l_Lean_Elab_ConfigEval_EvalExpr_instString = _init_l_Lean_Elab_ConfigEval_EvalExpr_instString();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalExpr_instString);
l_Lean_Elab_ConfigEval_EvalExpr_instName = _init_l_Lean_Elab_ConfigEval_EvalExpr_instName();
lean_mark_persistent(l_Lean_Elab_ConfigEval_EvalExpr_instName);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_ConfigEval_Instances(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_ConfigEval_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_ConfigEval_Instances(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_ConfigEval_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ConfigEval_Instances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_ConfigEval_Instances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_ConfigEval_Instances(builtin);
}
#ifdef __cplusplus
}
#endif
