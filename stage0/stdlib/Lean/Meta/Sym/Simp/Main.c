// Lean compiler output
// Module: Lean.Meta.Sym.Simp.Main
// Imports: public import Lean.Meta.Sym.Simp.SimpM import Lean.Meta.Sym.AlphaShareBuilder import Lean.Meta.Sym.Simp.Simproc import Lean.Meta.Sym.Simp.App import Lean.Meta.Sym.Simp.Have import Lean.Meta.Sym.Simp.Forall import Lean.Meta.Sym.Simp.ControlFlow import Lean.Meta.Decidable import Lean.Meta.Sym.InstantiateMVarsS
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t lean_usize_to_uint64(size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isCharLit(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isRawNatLit(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpAppArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD(uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceDecisionProjection_x3f(lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getBoolDecision_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpDecisionProjection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_markAsNotDone(lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__0_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sym"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__0_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__0_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__2_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__2_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__2_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__3_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "cache"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__3_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__3_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__0_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(230, 3, 132, 38, 134, 149, 222, 229)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(242, 186, 16, 3, 3, 47, 215, 22)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__2_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(85, 69, 64, 134, 227, 122, 63, 120)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__3_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(212, 138, 18, 6, 80, 119, 92, 197)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__5_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__5_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__5_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__6_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__5_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__6_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__6_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__7_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__7_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__7_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__8_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__6_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__7_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__8_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__8_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__9_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__9_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__9_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__10_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__8_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__9_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__10_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__10_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__11_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Sym"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__11_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__11_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__12_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__10_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__11_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(215, 84, 158, 71, 120, 158, 242, 63)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__12_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__12_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__13_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Simp"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__13_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__13_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__14_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__12_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__13_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(39, 26, 240, 230, 40, 246, 104, 165)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__14_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__14_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__15_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Main"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__15_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__15_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__16_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__14_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__15_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(206, 173, 159, 84, 157, 242, 206, 139)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__16_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__16_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__17_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__16_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(247, 155, 15, 76, 144, 59, 13, 75)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__17_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__17_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__18_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__17_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__7_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(138, 236, 234, 229, 132, 157, 220, 243)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__18_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__18_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__19_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__18_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__9_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(46, 51, 220, 1, 188, 119, 51, 193)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__19_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__19_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__20_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__19_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__11_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(231, 225, 33, 185, 152, 235, 128, 22)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__20_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__20_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__21_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__20_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__13_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(23, 205, 190, 94, 250, 112, 139, 24)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__21_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__21_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__22_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__22_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__22_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__23_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__21_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__22_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(102, 198, 249, 116, 103, 109, 185, 157)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__23_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__23_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__24_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__24_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__24_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__25_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__23_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__24_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(151, 117, 150, 162, 230, 34, 31, 227)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__25_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__25_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__26_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__25_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__7_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(170, 54, 57, 188, 150, 202, 153, 240)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__26_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__26_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__27_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__26_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__9_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(142, 14, 232, 240, 135, 217, 106, 147)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__27_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__27_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__28_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__27_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__11_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 131, 247, 225, 188, 12, 226, 127)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__28_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__28_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__29_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__28_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__13_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(183, 52, 134, 176, 51, 166, 19, 13)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__29_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__29_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__30_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__29_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__15_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(254, 24, 143, 103, 249, 178, 142, 101)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__30_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__30_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__31_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__31_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__32_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__32_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__32_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__33_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__33_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__34_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__34_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__34_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__35_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__35_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__36_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__36_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "OfScientific"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ofScientific"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(1, 219, 72, 84, 44, 38, 226, 47)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 32, 126, 239, 82, 155, 222, 105)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__3_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__4_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__5_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "unexpected kernel projection term during simplification"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__1;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "\npre-process and fold them as projection applications"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__3;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__2;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "persistent cache hit: "};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__4;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "transient cache hit: "};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__6;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "`simp` failed: maximum number of steps exceeded"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__7 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__8;
LEAN_EXPORT lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__31_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_72_ = lean_unsigned_to_nat(2936340881u);
v___x_73_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__30_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_));
v___x_74_ = l_Lean_Name_num___override(v___x_73_, v___x_72_);
return v___x_74_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__33_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_76_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__32_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_));
v___x_77_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__31_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__31_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__31_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_);
v___x_78_ = l_Lean_Name_str___override(v___x_77_, v___x_76_);
return v___x_78_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__35_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_80_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__34_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_));
v___x_81_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__33_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__33_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__33_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_);
v___x_82_ = l_Lean_Name_str___override(v___x_81_, v___x_80_);
return v___x_82_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__36_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_83_ = lean_unsigned_to_nat(2u);
v___x_84_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__35_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__35_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__35_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_);
v___x_85_ = l_Lean_Name_num___override(v___x_84_, v___x_83_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_87_; uint8_t v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_87_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_));
v___x_88_ = 0;
v___x_89_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__36_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_, &l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__36_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__36_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_);
v___x_90_ = l_Lean_registerTraceClass(v___x_87_, v___x_88_, v___x_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2____boxed(lean_object* v_a_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_();
return v_res_92_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp(lean_object* v_e_103_){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; uint8_t v___x_123_; 
v___x_121_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__5));
v___x_122_ = lean_unsigned_to_nat(3u);
v___x_123_ = l_Lean_Expr_isAppOfArity(v_e_103_, v___x_121_, v___x_122_);
if (v___x_123_ == 0)
{
goto v___jp_104_;
}
else
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_124_ = lean_unsigned_to_nat(1u);
v___x_125_ = l_Lean_Expr_getAppNumArgs(v_e_103_);
v___x_126_ = lean_nat_sub(v___x_125_, v___x_124_);
lean_dec(v___x_125_);
v___x_127_ = lean_nat_sub(v___x_126_, v___x_124_);
lean_dec(v___x_126_);
v___x_128_ = l_Lean_Expr_getRevArg_x21(v_e_103_, v___x_127_);
v___x_129_ = l_Lean_Expr_isRawNatLit(v___x_128_);
lean_dec_ref(v___x_128_);
if (v___x_129_ == 0)
{
goto v___jp_104_;
}
else
{
return v___x_129_;
}
}
v___jp_104_:
{
uint8_t v___x_105_; 
v___x_105_ = l_Lean_Expr_isCharLit(v_e_103_);
if (v___x_105_ == 0)
{
lean_object* v___x_106_; lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_106_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___closed__2));
v___x_107_ = lean_unsigned_to_nat(5u);
v___x_108_ = l_Lean_Expr_isAppOfArity(v_e_103_, v___x_106_, v___x_107_);
if (v___x_108_ == 0)
{
return v___x_108_;
}
else
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_109_ = lean_unsigned_to_nat(2u);
v___x_110_ = l_Lean_Expr_getAppNumArgs(v_e_103_);
v___x_111_ = lean_nat_sub(v___x_110_, v___x_109_);
v___x_112_ = lean_unsigned_to_nat(1u);
v___x_113_ = lean_nat_sub(v___x_111_, v___x_112_);
lean_dec(v___x_111_);
v___x_114_ = l_Lean_Expr_getRevArg_x21(v_e_103_, v___x_113_);
v___x_115_ = l_Lean_Expr_isRawNatLit(v___x_114_);
lean_dec_ref(v___x_114_);
if (v___x_115_ == 0)
{
lean_dec(v___x_110_);
return v___x_115_;
}
else
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_116_ = lean_unsigned_to_nat(4u);
v___x_117_ = lean_nat_sub(v___x_110_, v___x_116_);
lean_dec(v___x_110_);
v___x_118_ = lean_nat_sub(v___x_117_, v___x_112_);
lean_dec(v___x_117_);
v___x_119_ = l_Lean_Expr_getRevArg_x21(v_e_103_, v___x_118_);
v___x_120_ = l_Lean_Expr_isRawNatLit(v___x_119_);
lean_dec_ref(v___x_119_);
return v___x_120_;
}
}
}
else
{
return v___x_105_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp___boxed(lean_object* v_e_130_){
_start:
{
uint8_t v_res_131_; lean_object* v_r_132_; 
v_res_131_ = l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp(v_e_130_);
lean_dec_ref(v_e_130_);
v_r_132_ = lean_box(v_res_131_);
return v_r_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__1___redArg(lean_object* v_d_133_, lean_object* v_e_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_){
_start:
{
lean_object* v___y_143_; lean_object* v___x_146_; uint8_t v_debug_147_; 
v___x_146_ = lean_st_ref_get(v___y_136_);
v_debug_147_ = lean_ctor_get_uint8(v___x_146_, sizeof(void*)*13);
lean_dec(v___x_146_);
if (v_debug_147_ == 0)
{
v___y_143_ = v___y_136_;
goto v___jp_142_;
}
else
{
lean_object* v___x_148_; 
v___x_148_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_e_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_);
if (lean_obj_tag(v___x_148_) == 0)
{
lean_dec_ref_known(v___x_148_, 1);
v___y_143_ = v___y_136_;
goto v___jp_142_;
}
else
{
lean_object* v_a_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_156_; 
lean_dec_ref(v_e_134_);
lean_dec(v_d_133_);
v_a_149_ = lean_ctor_get(v___x_148_, 0);
v_isSharedCheck_156_ = !lean_is_exclusive(v___x_148_);
if (v_isSharedCheck_156_ == 0)
{
v___x_151_ = v___x_148_;
v_isShared_152_ = v_isSharedCheck_156_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_a_149_);
lean_dec(v___x_148_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_156_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_154_; 
if (v_isShared_152_ == 0)
{
v___x_154_ = v___x_151_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_a_149_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
}
}
v___jp_142_:
{
lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_144_ = l_Lean_Expr_mdata___override(v_d_133_, v_e_134_);
v___x_145_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_144_, v___y_143_);
return v___x_145_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__1___redArg___boxed(lean_object* v_d_157_, lean_object* v_e_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__1___redArg(v_d_157_, v_e_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
lean_dec(v___y_162_);
lean_dec_ref(v___y_161_);
lean_dec(v___y_160_);
lean_dec_ref(v___y_159_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__1(lean_object* v_d_167_, lean_object* v_e_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__1___redArg(v_d_167_, v_e_168_, v___y_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__1___boxed(lean_object* v_d_180_, lean_object* v_e_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__1(v_d_180_, v_e_181_, v___y_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_, v___y_190_);
lean_dec(v___y_190_);
lean_dec_ref(v___y_189_);
lean_dec(v___y_188_);
lean_dec_ref(v___y_187_);
lean_dec(v___y_186_);
lean_dec_ref(v___y_185_);
lean_dec(v___y_184_);
lean_dec_ref(v___y_183_);
lean_dec(v___y_182_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0_spec__0(lean_object* v_msgData_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_){
_start:
{
lean_object* v___x_199_; lean_object* v_env_200_; uint8_t v___x_201_; lean_object* v_env_202_; lean_object* v___x_203_; lean_object* v_toCold_204_; lean_object* v_mctx_205_; lean_object* v_lctx_206_; lean_object* v_options_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_199_ = lean_st_ref_get(v___y_197_);
v_env_200_ = lean_ctor_get(v___x_199_, 0);
lean_inc_ref(v_env_200_);
lean_dec(v___x_199_);
v___x_201_ = 0;
v_env_202_ = l_Lean_Environment_setRecordingDeps(v_env_200_, v___x_201_);
v___x_203_ = lean_st_ref_get(v___y_195_);
v_toCold_204_ = lean_ctor_get(v___y_196_, 0);
v_mctx_205_ = lean_ctor_get(v___x_203_, 0);
lean_inc_ref(v_mctx_205_);
lean_dec(v___x_203_);
v_lctx_206_ = lean_ctor_get(v___y_194_, 2);
v_options_207_ = lean_ctor_get(v_toCold_204_, 2);
lean_inc_ref(v_options_207_);
lean_inc_ref(v_lctx_206_);
v___x_208_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_208_, 0, v_env_202_);
lean_ctor_set(v___x_208_, 1, v_mctx_205_);
lean_ctor_set(v___x_208_, 2, v_lctx_206_);
lean_ctor_set(v___x_208_, 3, v_options_207_);
v___x_209_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
lean_ctor_set(v___x_209_, 1, v_msgData_193_);
v___x_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0_spec__0___boxed(lean_object* v_msgData_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0_spec__0(v_msgData_211_, v___y_212_, v___y_213_, v___y_214_, v___y_215_);
lean_dec(v___y_215_);
lean_dec_ref(v___y_214_);
lean_dec(v___y_213_);
lean_dec_ref(v___y_212_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0___redArg(lean_object* v_msg_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_){
_start:
{
lean_object* v_ref_224_; lean_object* v___x_225_; lean_object* v_a_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_234_; 
v_ref_224_ = lean_ctor_get(v___y_221_, 2);
v___x_225_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0_spec__0(v_msg_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
v_a_226_ = lean_ctor_get(v___x_225_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_225_);
if (v_isSharedCheck_234_ == 0)
{
v___x_228_ = v___x_225_;
v_isShared_229_ = v_isSharedCheck_234_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_a_226_);
lean_dec(v___x_225_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_234_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_230_; lean_object* v___x_232_; 
lean_inc(v_ref_224_);
v___x_230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_230_, 0, v_ref_224_);
lean_ctor_set(v___x_230_, 1, v_a_226_);
if (v_isShared_229_ == 0)
{
lean_ctor_set_tag(v___x_228_, 1);
lean_ctor_set(v___x_228_, 0, v___x_230_);
v___x_232_ = v___x_228_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(1, 1, 0);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0___redArg___boxed(lean_object* v_msg_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0___redArg(v_msg_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_);
lean_dec(v___y_239_);
lean_dec_ref(v___y_238_);
lean_dec(v___y_237_);
lean_dec_ref(v___y_236_);
return v_res_241_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__1(void){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_243_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__0));
v___x_244_ = l_Lean_stringToMessageData(v___x_243_);
return v___x_244_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__3(void){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_246_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__2));
v___x_247_ = l_Lean_stringToMessageData(v___x_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep(lean_object* v_e_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_){
_start:
{
lean_object* v___y_263_; lean_object* v___y_264_; lean_object* v___y_265_; lean_object* v___y_266_; lean_object* v___y_267_; lean_object* v___y_268_; lean_object* v___y_269_; lean_object* v___y_270_; lean_object* v___y_271_; 
switch(lean_obj_tag(v_e_251_))
{
case 2:
{
lean_object* v___x_278_; 
v___x_278_ = l_Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f(v_e_251_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_307_; 
v_a_279_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_307_ == 0)
{
v___x_281_ = v___x_278_;
v_isShared_282_ = v_isSharedCheck_307_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_278_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_307_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
if (lean_obj_tag(v_a_279_) == 1)
{
lean_object* v_val_283_; lean_object* v___x_284_; 
lean_del_object(v___x_281_);
v_val_283_ = lean_ctor_get(v_a_279_, 0);
lean_inc_n(v_val_283_, 2);
lean_dec_ref_known(v_a_279_, 1);
v___x_284_ = l_Lean_Meta_Sym_mkEqRefl(v_val_283_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v_a_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_294_; 
v_a_285_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_294_ == 0)
{
v___x_287_ = v___x_284_;
v_isShared_288_ = v_isSharedCheck_294_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___x_284_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_294_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
uint8_t v___x_289_; lean_object* v___x_290_; lean_object* v___x_292_; 
v___x_289_ = 0;
v___x_290_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_290_, 0, v_val_283_);
lean_ctor_set(v___x_290_, 1, v_a_285_);
lean_ctor_set_uint8(v___x_290_, sizeof(void*)*2, v___x_289_);
lean_ctor_set_uint8(v___x_290_, sizeof(void*)*2 + 1, v___x_289_);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 0, v___x_290_);
v___x_292_ = v___x_287_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v___x_290_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
else
{
lean_object* v_a_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_302_; 
lean_dec(v_val_283_);
v_a_295_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_302_ == 0)
{
v___x_297_ = v___x_284_;
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_a_295_);
lean_dec(v___x_284_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_300_; 
if (v_isShared_298_ == 0)
{
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
}
else
{
lean_object* v___x_303_; lean_object* v___x_305_; 
lean_dec(v_a_279_);
v___x_303_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__4));
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 0, v___x_303_);
v___x_305_ = v___x_281_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v___x_303_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
}
else
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
v_a_308_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_278_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_278_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
case 5:
{
uint8_t v___x_316_; 
v___x_316_ = l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_isLitApp(v_e_251_);
if (v___x_316_ == 0)
{
lean_object* v___x_317_; 
v___x_317_ = l_Lean_Meta_Sym_Simp_simpAppArgs(v_e_251_, v_a_252_, v_a_253_, v_a_254_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_);
return v___x_317_;
}
else
{
lean_object* v___x_318_; lean_object* v___x_319_; 
lean_dec_ref_known(v_e_251_, 2);
v___x_318_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__4));
v___x_319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
return v___x_319_;
}
}
case 6:
{
lean_object* v___x_320_; 
v___x_320_ = l_Lean_Meta_Sym_Simp_simpLambda(v_e_251_, v_a_252_, v_a_253_, v_a_254_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_);
return v___x_320_;
}
case 7:
{
lean_object* v___x_321_; 
v___x_321_ = l_Lean_Meta_Sym_Simp_simpForall(v_e_251_, v_a_252_, v_a_253_, v_a_254_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_);
return v___x_321_;
}
case 8:
{
lean_object* v___x_322_; 
v___x_322_ = l_Lean_Meta_Sym_Simp_simpLet(v_e_251_, v_a_252_, v_a_253_, v_a_254_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_);
return v___x_322_;
}
case 9:
{
lean_object* v_a_323_; 
v_a_323_ = lean_ctor_get(v_e_251_, 0);
lean_inc_ref(v_a_323_);
lean_dec_ref_known(v_e_251_, 1);
if (lean_obj_tag(v_a_323_) == 0)
{
lean_object* v_val_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v_val_324_ = lean_ctor_get(v_a_323_, 0);
lean_inc(v_val_324_);
lean_dec_ref_known(v_a_323_, 1);
v___x_325_ = l_Lean_mkNatLit(v_val_324_);
v___x_326_ = l_Lean_Meta_Sym_shareCommonInc(v___x_325_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_);
if (lean_obj_tag(v___x_326_) == 0)
{
lean_object* v_a_327_; lean_object* v___x_328_; 
v_a_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc_n(v_a_327_, 2);
lean_dec_ref_known(v___x_326_, 1);
v___x_328_ = l_Lean_Meta_Sym_mkEqRefl(v_a_327_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_);
if (lean_obj_tag(v___x_328_) == 0)
{
lean_object* v_a_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_338_; 
v_a_329_ = lean_ctor_get(v___x_328_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_328_);
if (v_isSharedCheck_338_ == 0)
{
v___x_331_ = v___x_328_;
v_isShared_332_ = v_isSharedCheck_338_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_a_329_);
lean_dec(v___x_328_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_338_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
uint8_t v___x_333_; lean_object* v___x_334_; lean_object* v___x_336_; 
v___x_333_ = 0;
v___x_334_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_334_, 0, v_a_327_);
lean_ctor_set(v___x_334_, 1, v_a_329_);
lean_ctor_set_uint8(v___x_334_, sizeof(void*)*2, v___x_333_);
lean_ctor_set_uint8(v___x_334_, sizeof(void*)*2 + 1, v___x_333_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 0, v___x_334_);
v___x_336_ = v___x_331_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v___x_334_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
else
{
lean_object* v_a_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_346_; 
lean_dec(v_a_327_);
v_a_339_ = lean_ctor_get(v___x_328_, 0);
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_328_);
if (v_isSharedCheck_346_ == 0)
{
v___x_341_ = v___x_328_;
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_a_339_);
lean_dec(v___x_328_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_344_; 
if (v_isShared_342_ == 0)
{
v___x_344_ = v___x_341_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_a_339_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
}
else
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_354_; 
v_a_347_ = lean_ctor_get(v___x_326_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_326_);
if (v_isSharedCheck_354_ == 0)
{
v___x_349_ = v___x_326_;
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_326_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_352_; 
if (v_isShared_350_ == 0)
{
v___x_352_ = v___x_349_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_a_347_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
}
else
{
lean_object* v___x_355_; lean_object* v___x_356_; 
lean_dec_ref(v_a_323_);
v___x_355_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__4));
v___x_356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_356_, 0, v___x_355_);
return v___x_356_;
}
}
case 10:
{
lean_object* v_data_357_; lean_object* v_expr_358_; lean_object* v___x_359_; 
v_data_357_ = lean_ctor_get(v_e_251_, 0);
lean_inc(v_data_357_);
v_expr_358_ = lean_ctor_get(v_e_251_, 1);
lean_inc_ref(v_expr_358_);
lean_dec_ref_known(v_e_251_, 2);
lean_inc(v_a_260_);
lean_inc_ref(v_a_259_);
lean_inc(v_a_258_);
lean_inc_ref(v_a_257_);
lean_inc(v_a_256_);
lean_inc_ref(v_a_255_);
lean_inc(v_a_254_);
lean_inc_ref(v_a_253_);
lean_inc(v_a_252_);
v___x_359_ = lean_sym_simp(v_expr_358_, v_a_252_, v_a_253_, v_a_254_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_397_; 
v_a_360_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_397_ == 0)
{
v___x_362_ = v___x_359_;
v_isShared_363_ = v_isSharedCheck_397_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_359_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_397_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
if (lean_obj_tag(v_a_360_) == 0)
{
uint8_t v_contextDependent_364_; lean_object* v___x_365_; lean_object* v___x_367_; 
lean_dec(v_data_357_);
v_contextDependent_364_ = lean_ctor_get_uint8(v_a_360_, 1);
lean_dec_ref_known(v_a_360_, 0);
v___x_365_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v_contextDependent_364_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v___x_365_);
v___x_367_ = v___x_362_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v___x_365_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
else
{
lean_object* v_e_x27_369_; lean_object* v_proof_370_; uint8_t v_contextDependent_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_396_; 
lean_del_object(v___x_362_);
v_e_x27_369_ = lean_ctor_get(v_a_360_, 0);
v_proof_370_ = lean_ctor_get(v_a_360_, 1);
v_contextDependent_371_ = lean_ctor_get_uint8(v_a_360_, sizeof(void*)*2 + 1);
v_isSharedCheck_396_ = !lean_is_exclusive(v_a_360_);
if (v_isSharedCheck_396_ == 0)
{
v___x_373_ = v_a_360_;
v_isShared_374_ = v_isSharedCheck_396_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_proof_370_);
lean_inc(v_e_x27_369_);
lean_dec(v_a_360_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_396_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_375_; 
v___x_375_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__1___redArg(v_data_357_, v_e_x27_369_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_);
if (lean_obj_tag(v___x_375_) == 0)
{
lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_387_; 
v_a_376_ = lean_ctor_get(v___x_375_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v___x_375_);
if (v_isSharedCheck_387_ == 0)
{
v___x_378_ = v___x_375_;
v_isShared_379_ = v_isSharedCheck_387_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_dec(v___x_375_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_387_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
uint8_t v___x_380_; lean_object* v___x_382_; 
v___x_380_ = 0;
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 0, v_a_376_);
v___x_382_ = v___x_373_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_a_376_);
lean_ctor_set(v_reuseFailAlloc_386_, 1, v_proof_370_);
lean_ctor_set_uint8(v_reuseFailAlloc_386_, sizeof(void*)*2 + 1, v_contextDependent_371_);
v___x_382_ = v_reuseFailAlloc_386_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
lean_object* v___x_384_; 
lean_ctor_set_uint8(v___x_382_, sizeof(void*)*2, v___x_380_);
if (v_isShared_379_ == 0)
{
lean_ctor_set(v___x_378_, 0, v___x_382_);
v___x_384_ = v___x_378_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v___x_382_);
v___x_384_ = v_reuseFailAlloc_385_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
return v___x_384_;
}
}
}
}
else
{
lean_object* v_a_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_395_; 
lean_del_object(v___x_373_);
lean_dec_ref(v_proof_370_);
v_a_388_ = lean_ctor_get(v___x_375_, 0);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_375_);
if (v_isSharedCheck_395_ == 0)
{
v___x_390_ = v___x_375_;
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_a_388_);
lean_dec(v___x_375_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_393_; 
if (v_isShared_391_ == 0)
{
v___x_393_ = v___x_390_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_a_388_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
}
}
}
}
}
else
{
lean_dec(v_data_357_);
return v___x_359_;
}
}
case 11:
{
lean_object* v_typeName_398_; 
v_typeName_398_ = lean_ctor_get(v_e_251_, 0);
if (lean_obj_tag(v_typeName_398_) == 1)
{
lean_object* v_pre_399_; 
v_pre_399_ = lean_ctor_get(v_typeName_398_, 0);
if (lean_obj_tag(v_pre_399_) == 0)
{
lean_object* v_idx_400_; lean_object* v_struct_401_; lean_object* v_str_402_; lean_object* v___x_403_; uint8_t v___x_404_; 
v_idx_400_ = lean_ctor_get(v_e_251_, 1);
v_struct_401_ = lean_ctor_get(v_e_251_, 2);
v_str_402_ = lean_ctor_get(v_typeName_398_, 1);
v___x_403_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__5));
v___x_404_ = lean_string_dec_eq(v_str_402_, v___x_403_);
if (v___x_404_ == 0)
{
v___y_263_ = v_a_252_;
v___y_264_ = v_a_253_;
v___y_265_ = v_a_254_;
v___y_266_ = v_a_255_;
v___y_267_ = v_a_256_;
v___y_268_ = v_a_257_;
v___y_269_ = v_a_258_;
v___y_270_ = v_a_259_;
v___y_271_ = v_a_260_;
goto v___jp_262_;
}
else
{
lean_object* v___x_405_; uint8_t v___x_406_; 
v___x_405_ = lean_unsigned_to_nat(0u);
v___x_406_ = lean_nat_dec_eq(v_idx_400_, v___x_405_);
if (v___x_406_ == 0)
{
v___y_263_ = v_a_252_;
v___y_264_ = v_a_253_;
v___y_265_ = v_a_254_;
v___y_266_ = v_a_255_;
v___y_267_ = v_a_256_;
v___y_268_ = v_a_257_;
v___y_269_ = v_a_258_;
v___y_270_ = v_a_259_;
v___y_271_ = v_a_260_;
goto v___jp_262_;
}
else
{
lean_object* v___x_407_; 
lean_inc_ref(v_struct_401_);
v___x_407_ = l_Lean_Meta_reduceDecisionProjection_x3f(v_e_251_);
if (lean_obj_tag(v___x_407_) == 1)
{
lean_object* v_val_408_; lean_object* v___x_409_; 
lean_dec_ref(v_struct_401_);
lean_dec_ref_known(v_e_251_, 3);
v_val_408_ = lean_ctor_get(v___x_407_, 0);
lean_inc_n(v_val_408_, 2);
lean_dec_ref_known(v___x_407_, 1);
v___x_409_ = l_Lean_Meta_Sym_shareCommon(v_val_408_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v_a_410_; lean_object* v___x_411_; 
v_a_410_ = lean_ctor_get(v___x_409_, 0);
lean_inc(v_a_410_);
lean_dec_ref_known(v___x_409_, 1);
v___x_411_ = l_Lean_Meta_Sym_mkEqRefl(v_val_408_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v_a_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_421_; 
v_a_412_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_421_ == 0)
{
v___x_414_ = v___x_411_;
v_isShared_415_ = v_isSharedCheck_421_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_a_412_);
lean_dec(v___x_411_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_421_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
uint8_t v___x_416_; lean_object* v___x_417_; lean_object* v___x_419_; 
v___x_416_ = 0;
v___x_417_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_417_, 0, v_a_410_);
lean_ctor_set(v___x_417_, 1, v_a_412_);
lean_ctor_set_uint8(v___x_417_, sizeof(void*)*2, v___x_416_);
lean_ctor_set_uint8(v___x_417_, sizeof(void*)*2 + 1, v___x_416_);
if (v_isShared_415_ == 0)
{
lean_ctor_set(v___x_414_, 0, v___x_417_);
v___x_419_ = v___x_414_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_417_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
else
{
lean_object* v_a_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_429_; 
lean_dec(v_a_410_);
v_a_422_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_429_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_429_ == 0)
{
v___x_424_ = v___x_411_;
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_a_422_);
lean_dec(v___x_411_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_427_; 
if (v_isShared_425_ == 0)
{
v___x_427_ = v___x_424_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_a_422_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
}
}
else
{
lean_object* v_a_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_437_; 
lean_dec(v_val_408_);
v_a_430_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_437_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_437_ == 0)
{
v___x_432_ = v___x_409_;
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_a_430_);
lean_dec(v___x_409_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_435_; 
if (v_isShared_433_ == 0)
{
v___x_435_ = v___x_432_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_a_430_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
}
else
{
lean_object* v___x_438_; 
lean_dec(v___x_407_);
v___x_438_ = l_Lean_Meta_getBoolDecision_x3f(v_e_251_, v_a_257_, v_a_258_, v_a_259_, v_a_260_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_469_; 
v_a_439_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_469_ == 0)
{
v___x_441_ = v___x_438_;
v_isShared_442_ = v_isSharedCheck_469_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_438_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_469_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
if (lean_obj_tag(v_a_439_) == 1)
{
lean_object* v_val_443_; lean_object* v_fst_444_; lean_object* v___x_445_; 
lean_del_object(v___x_441_);
v_val_443_ = lean_ctor_get(v_a_439_, 0);
lean_inc(v_val_443_);
lean_dec_ref_known(v_a_439_, 1);
v_fst_444_ = lean_ctor_get(v_val_443_, 0);
lean_inc(v_fst_444_);
lean_dec(v_val_443_);
v___x_445_ = l_Lean_Meta_Sym_shareCommon(v_fst_444_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v_a_446_; lean_object* v___x_447_; 
v_a_446_ = lean_ctor_get(v___x_445_, 0);
lean_inc(v_a_446_);
lean_dec_ref_known(v___x_445_, 1);
v___x_447_ = l_Lean_Meta_Sym_Simp_simpDecisionProjection(v_a_446_, v_struct_401_, v_a_252_, v_a_253_, v_a_254_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_);
if (lean_obj_tag(v___x_447_) == 0)
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_456_; 
v_a_448_ = lean_ctor_get(v___x_447_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_456_ == 0)
{
v___x_450_ = v___x_447_;
v_isShared_451_ = v_isSharedCheck_456_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_447_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_456_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_452_; lean_object* v___x_454_; 
v___x_452_ = l_Lean_Meta_Sym_Simp_Result_markAsNotDone(v_a_448_);
if (v_isShared_451_ == 0)
{
lean_ctor_set(v___x_450_, 0, v___x_452_);
v___x_454_ = v___x_450_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_452_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
else
{
return v___x_447_;
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
lean_dec_ref(v_struct_401_);
v_a_457_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_445_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_445_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_a_457_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
else
{
lean_object* v___x_465_; lean_object* v___x_467_; 
lean_dec(v_a_439_);
lean_dec_ref(v_struct_401_);
v___x_465_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__4));
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 0, v___x_465_);
v___x_467_ = v___x_441_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v___x_465_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
}
else
{
lean_object* v_a_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_477_; 
lean_dec_ref(v_struct_401_);
v_a_470_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_477_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_477_ == 0)
{
v___x_472_ = v___x_438_;
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_a_470_);
lean_dec(v___x_438_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_475_; 
if (v_isShared_473_ == 0)
{
v___x_475_ = v___x_472_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v_a_470_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
}
}
}
}
else
{
v___y_263_ = v_a_252_;
v___y_264_ = v_a_253_;
v___y_265_ = v_a_254_;
v___y_266_ = v_a_255_;
v___y_267_ = v_a_256_;
v___y_268_ = v_a_257_;
v___y_269_ = v_a_258_;
v___y_270_ = v_a_259_;
v___y_271_ = v_a_260_;
goto v___jp_262_;
}
}
else
{
v___y_263_ = v_a_252_;
v___y_264_ = v_a_253_;
v___y_265_ = v_a_254_;
v___y_266_ = v_a_255_;
v___y_267_ = v_a_256_;
v___y_268_ = v_a_257_;
v___y_269_ = v_a_258_;
v___y_270_ = v_a_259_;
v___y_271_ = v_a_260_;
goto v___jp_262_;
}
}
default: 
{
lean_object* v___x_478_; lean_object* v___x_479_; 
lean_dec_ref(v_e_251_);
v___x_478_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__4));
v___x_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_479_, 0, v___x_478_);
return v___x_479_;
}
}
v___jp_262_:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_272_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__1, &l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__1_once, _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__1);
v___x_273_ = l_Lean_indentExpr(v_e_251_);
v___x_274_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_274_, 0, v___x_272_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
v___x_275_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__3, &l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__3_once, _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___closed__3);
v___x_276_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_274_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
v___x_277_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0___redArg(v___x_276_, v___y_268_, v___y_269_, v___y_270_, v___y_271_);
return v___x_277_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep___boxed(lean_object* v_e_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep(v_e_480_, v_a_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_, v_a_488_, v_a_489_);
lean_dec(v_a_489_);
lean_dec_ref(v_a_488_);
lean_dec(v_a_487_);
lean_dec_ref(v_a_486_);
lean_dec(v_a_485_);
lean_dec_ref(v_a_484_);
lean_dec(v_a_483_);
lean_dec_ref(v_a_482_);
lean_dec(v_a_481_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0(lean_object* v_00_u03b1_492_, lean_object* v_msg_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0___redArg(v_msg_493_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0___boxed(lean_object* v_00_u03b1_505_, lean_object* v_msg_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0(v_00_u03b1_505_, v_msg_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
lean_dec(v___y_515_);
lean_dec_ref(v___y_514_);
lean_dec(v___y_513_);
lean_dec_ref(v___y_512_);
lean_dec(v___y_511_);
lean_dec_ref(v___y_510_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
lean_dec(v___y_507_);
return v_res_517_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_523_ = l_Lean_maxRecDepthErrorMessage;
v___x_524_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_524_, 0, v___x_523_);
return v___x_524_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__4(void){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_525_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__3);
v___x_526_ = l_Lean_MessageData_ofFormat(v___x_525_);
return v___x_526_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_527_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__4);
v___x_528_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__2));
v___x_529_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_529_, 0, v___x_528_);
lean_ctor_set(v___x_529_, 1, v___x_527_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg(lean_object* v_ref_530_){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_532_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___closed__5);
v___x_533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_533_, 0, v_ref_530_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
v___x_534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg___boxed(lean_object* v_ref_535_, lean_object* v___y_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg(v_ref_535_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3(lean_object* v_00_u03b1_538_, lean_object* v_ref_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg(v_ref_539_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___boxed(lean_object* v_00_u03b1_551_, lean_object* v_ref_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3(v_00_u03b1_551_, v_ref_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_);
lean_dec(v___y_561_);
lean_dec_ref(v___y_560_);
lean_dec(v___y_559_);
lean_dec_ref(v___y_558_);
lean_dec(v___y_557_);
lean_dec_ref(v___y_556_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
lean_dec(v___y_553_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___lam__0(lean_object* v_x_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_){
_start:
{
lean_object* v_post_576_; lean_object* v___x_577_; 
v_post_576_ = lean_ctor_get(v___y_566_, 1);
lean_inc_ref(v_post_576_);
lean_inc(v___y_574_);
lean_inc_ref(v___y_573_);
lean_inc(v___y_572_);
lean_inc_ref(v___y_571_);
lean_inc(v___y_570_);
lean_inc_ref(v___y_569_);
lean_inc(v___y_568_);
lean_inc_ref(v___y_567_);
lean_inc(v___y_566_);
v___x_577_ = lean_apply_11(v_post_576_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, lean_box(0));
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___lam__0___boxed(lean_object* v_x_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___lam__0(v_x_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_585_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
lean_dec(v___y_580_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__2_spec__5___redArg(lean_object* v_x_591_, lean_object* v_x_592_, lean_object* v_x_593_, lean_object* v_x_594_){
_start:
{
lean_object* v_ks_595_; lean_object* v_vs_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_622_; 
v_ks_595_ = lean_ctor_get(v_x_591_, 0);
v_vs_596_ = lean_ctor_get(v_x_591_, 1);
v_isSharedCheck_622_ = !lean_is_exclusive(v_x_591_);
if (v_isSharedCheck_622_ == 0)
{
v___x_598_ = v_x_591_;
v_isShared_599_ = v_isSharedCheck_622_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_vs_596_);
lean_inc(v_ks_595_);
lean_dec(v_x_591_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_622_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_600_; uint8_t v___x_601_; 
v___x_600_ = lean_array_get_size(v_ks_595_);
v___x_601_ = lean_nat_dec_lt(v_x_592_, v___x_600_);
if (v___x_601_ == 0)
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_605_; 
lean_dec(v_x_592_);
v___x_602_ = lean_array_push(v_ks_595_, v_x_593_);
v___x_603_ = lean_array_push(v_vs_596_, v_x_594_);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 1, v___x_603_);
lean_ctor_set(v___x_598_, 0, v___x_602_);
v___x_605_ = v___x_598_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v___x_602_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v___x_603_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
else
{
lean_object* v_k_x27_607_; size_t v___x_608_; size_t v___x_609_; uint8_t v___x_610_; 
v_k_x27_607_ = lean_array_fget_borrowed(v_ks_595_, v_x_592_);
v___x_608_ = lean_ptr_addr(v_x_593_);
v___x_609_ = lean_ptr_addr(v_k_x27_607_);
v___x_610_ = lean_usize_dec_eq(v___x_608_, v___x_609_);
if (v___x_610_ == 0)
{
lean_object* v___x_612_; 
if (v_isShared_599_ == 0)
{
v___x_612_ = v___x_598_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_ks_595_);
lean_ctor_set(v_reuseFailAlloc_616_, 1, v_vs_596_);
v___x_612_ = v_reuseFailAlloc_616_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_613_ = lean_unsigned_to_nat(1u);
v___x_614_ = lean_nat_add(v_x_592_, v___x_613_);
lean_dec(v_x_592_);
v_x_591_ = v___x_612_;
v_x_592_ = v___x_614_;
goto _start;
}
}
else
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_620_; 
v___x_617_ = lean_array_fset(v_ks_595_, v_x_592_, v_x_593_);
v___x_618_ = lean_array_fset(v_vs_596_, v_x_592_, v_x_594_);
lean_dec(v_x_592_);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 1, v___x_618_);
lean_ctor_set(v___x_598_, 0, v___x_617_);
v___x_620_ = v___x_598_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v___x_617_);
lean_ctor_set(v_reuseFailAlloc_621_, 1, v___x_618_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__2___redArg(lean_object* v_n_623_, lean_object* v_k_624_, lean_object* v_v_625_){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_626_ = lean_unsigned_to_nat(0u);
v___x_627_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__2_spec__5___redArg(v_n_623_, v___x_626_, v_k_624_, v_v_625_);
return v___x_627_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_628_; 
v___x_628_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0___redArg(lean_object* v_x_629_, size_t v_x_630_, size_t v_x_631_, lean_object* v_x_632_, lean_object* v_x_633_){
_start:
{
if (lean_obj_tag(v_x_629_) == 0)
{
lean_object* v_es_634_; size_t v___x_635_; size_t v___x_636_; lean_object* v_j_637_; lean_object* v___x_638_; uint8_t v___x_639_; 
v_es_634_ = lean_ctor_get(v_x_629_, 0);
v___x_635_ = ((size_t)31ULL);
v___x_636_ = lean_usize_land(v_x_630_, v___x_635_);
v_j_637_ = lean_usize_to_nat(v___x_636_);
v___x_638_ = lean_array_get_size(v_es_634_);
v___x_639_ = lean_nat_dec_lt(v_j_637_, v___x_638_);
if (v___x_639_ == 0)
{
lean_dec(v_j_637_);
lean_dec(v_x_633_);
lean_dec_ref(v_x_632_);
return v_x_629_;
}
else
{
lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_680_; 
lean_inc_ref(v_es_634_);
v_isSharedCheck_680_ = !lean_is_exclusive(v_x_629_);
if (v_isSharedCheck_680_ == 0)
{
lean_object* v_unused_681_; 
v_unused_681_ = lean_ctor_get(v_x_629_, 0);
lean_dec(v_unused_681_);
v___x_641_ = v_x_629_;
v_isShared_642_ = v_isSharedCheck_680_;
goto v_resetjp_640_;
}
else
{
lean_dec(v_x_629_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_680_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v_v_643_; lean_object* v___x_644_; lean_object* v_xs_x27_645_; lean_object* v___y_647_; 
v_v_643_ = lean_array_fget(v_es_634_, v_j_637_);
v___x_644_ = lean_box(0);
v_xs_x27_645_ = lean_array_fset(v_es_634_, v_j_637_, v___x_644_);
switch(lean_obj_tag(v_v_643_))
{
case 0:
{
lean_object* v_key_652_; lean_object* v_val_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_665_; 
v_key_652_ = lean_ctor_get(v_v_643_, 0);
v_val_653_ = lean_ctor_get(v_v_643_, 1);
v_isSharedCheck_665_ = !lean_is_exclusive(v_v_643_);
if (v_isSharedCheck_665_ == 0)
{
v___x_655_ = v_v_643_;
v_isShared_656_ = v_isSharedCheck_665_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_val_653_);
lean_inc(v_key_652_);
lean_dec(v_v_643_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_665_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
size_t v___x_657_; size_t v___x_658_; uint8_t v___x_659_; 
v___x_657_ = lean_ptr_addr(v_x_632_);
v___x_658_ = lean_ptr_addr(v_key_652_);
v___x_659_ = lean_usize_dec_eq(v___x_657_, v___x_658_);
if (v___x_659_ == 0)
{
lean_object* v___x_660_; lean_object* v___x_661_; 
lean_del_object(v___x_655_);
v___x_660_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_652_, v_val_653_, v_x_632_, v_x_633_);
v___x_661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_661_, 0, v___x_660_);
v___y_647_ = v___x_661_;
goto v___jp_646_;
}
else
{
lean_object* v___x_663_; 
lean_dec(v_val_653_);
lean_dec(v_key_652_);
if (v_isShared_656_ == 0)
{
lean_ctor_set(v___x_655_, 1, v_x_633_);
lean_ctor_set(v___x_655_, 0, v_x_632_);
v___x_663_ = v___x_655_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v_x_632_);
lean_ctor_set(v_reuseFailAlloc_664_, 1, v_x_633_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
v___y_647_ = v___x_663_;
goto v___jp_646_;
}
}
}
}
case 1:
{
lean_object* v_node_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_678_; 
v_node_666_ = lean_ctor_get(v_v_643_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v_v_643_);
if (v_isSharedCheck_678_ == 0)
{
v___x_668_ = v_v_643_;
v_isShared_669_ = v_isSharedCheck_678_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_node_666_);
lean_dec(v_v_643_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_678_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
size_t v___x_670_; size_t v___x_671_; size_t v___x_672_; size_t v___x_673_; lean_object* v___x_674_; lean_object* v___x_676_; 
v___x_670_ = ((size_t)5ULL);
v___x_671_ = lean_usize_shift_right(v_x_630_, v___x_670_);
v___x_672_ = ((size_t)1ULL);
v___x_673_ = lean_usize_add(v_x_631_, v___x_672_);
v___x_674_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0___redArg(v_node_666_, v___x_671_, v___x_673_, v_x_632_, v_x_633_);
if (v_isShared_669_ == 0)
{
lean_ctor_set(v___x_668_, 0, v___x_674_);
v___x_676_ = v___x_668_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v___x_674_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
v___y_647_ = v___x_676_;
goto v___jp_646_;
}
}
}
default: 
{
lean_object* v___x_679_; 
v___x_679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_679_, 0, v_x_632_);
lean_ctor_set(v___x_679_, 1, v_x_633_);
v___y_647_ = v___x_679_;
goto v___jp_646_;
}
}
v___jp_646_:
{
lean_object* v___x_648_; lean_object* v___x_650_; 
v___x_648_ = lean_array_fset(v_xs_x27_645_, v_j_637_, v___y_647_);
lean_dec(v_j_637_);
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 0, v___x_648_);
v___x_650_ = v___x_641_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v___x_648_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
}
}
else
{
lean_object* v_ks_682_; lean_object* v_vs_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_701_; 
v_ks_682_ = lean_ctor_get(v_x_629_, 0);
v_vs_683_ = lean_ctor_get(v_x_629_, 1);
v_isSharedCheck_701_ = !lean_is_exclusive(v_x_629_);
if (v_isSharedCheck_701_ == 0)
{
v___x_685_ = v_x_629_;
v_isShared_686_ = v_isSharedCheck_701_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_vs_683_);
lean_inc(v_ks_682_);
lean_dec(v_x_629_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_701_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_688_; 
if (v_isShared_686_ == 0)
{
v___x_688_ = v___x_685_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_ks_682_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v_vs_683_);
v___x_688_ = v_reuseFailAlloc_700_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
lean_object* v_newNode_689_; size_t v___x_690_; uint8_t v___x_691_; 
v_newNode_689_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__2___redArg(v___x_688_, v_x_632_, v_x_633_);
v___x_690_ = ((size_t)7ULL);
v___x_691_ = lean_usize_dec_le(v___x_690_, v_x_631_);
if (v___x_691_ == 0)
{
lean_object* v___x_692_; lean_object* v___x_693_; uint8_t v___x_694_; 
v___x_692_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_689_);
v___x_693_ = lean_unsigned_to_nat(4u);
v___x_694_ = lean_nat_dec_lt(v___x_692_, v___x_693_);
lean_dec(v___x_692_);
if (v___x_694_ == 0)
{
lean_object* v_ks_695_; lean_object* v_vs_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
v_ks_695_ = lean_ctor_get(v_newNode_689_, 0);
lean_inc_ref(v_ks_695_);
v_vs_696_ = lean_ctor_get(v_newNode_689_, 1);
lean_inc_ref(v_vs_696_);
lean_dec_ref(v_newNode_689_);
v___x_697_ = lean_unsigned_to_nat(0u);
v___x_698_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0___redArg___closed__0);
v___x_699_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__3___redArg(v_x_631_, v_ks_695_, v_vs_696_, v___x_697_, v___x_698_);
lean_dec_ref(v_vs_696_);
lean_dec_ref(v_ks_695_);
return v___x_699_;
}
else
{
return v_newNode_689_;
}
}
else
{
return v_newNode_689_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__3___redArg(size_t v_depth_702_, lean_object* v_keys_703_, lean_object* v_vals_704_, lean_object* v_i_705_, lean_object* v_entries_706_){
_start:
{
lean_object* v___x_707_; uint8_t v___x_708_; 
v___x_707_ = lean_array_get_size(v_keys_703_);
v___x_708_ = lean_nat_dec_lt(v_i_705_, v___x_707_);
if (v___x_708_ == 0)
{
lean_dec(v_i_705_);
return v_entries_706_;
}
else
{
lean_object* v_k_709_; lean_object* v_v_710_; size_t v___x_711_; size_t v___x_712_; size_t v___x_713_; uint64_t v___x_714_; size_t v_h_715_; size_t v___x_716_; lean_object* v___x_717_; size_t v___x_718_; size_t v___x_719_; size_t v___x_720_; size_t v_h_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v_k_709_ = lean_array_fget_borrowed(v_keys_703_, v_i_705_);
v_v_710_ = lean_array_fget_borrowed(v_vals_704_, v_i_705_);
v___x_711_ = lean_ptr_addr(v_k_709_);
v___x_712_ = ((size_t)3ULL);
v___x_713_ = lean_usize_shift_right(v___x_711_, v___x_712_);
v___x_714_ = lean_usize_to_uint64(v___x_713_);
v_h_715_ = lean_uint64_to_usize(v___x_714_);
v___x_716_ = ((size_t)5ULL);
v___x_717_ = lean_unsigned_to_nat(1u);
v___x_718_ = ((size_t)1ULL);
v___x_719_ = lean_usize_sub(v_depth_702_, v___x_718_);
v___x_720_ = lean_usize_mul(v___x_716_, v___x_719_);
v_h_721_ = lean_usize_shift_right(v_h_715_, v___x_720_);
v___x_722_ = lean_nat_add(v_i_705_, v___x_717_);
lean_dec(v_i_705_);
lean_inc(v_v_710_);
lean_inc(v_k_709_);
v___x_723_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0___redArg(v_entries_706_, v_h_721_, v_depth_702_, v_k_709_, v_v_710_);
v_i_705_ = v___x_722_;
v_entries_706_ = v___x_723_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_depth_725_, lean_object* v_keys_726_, lean_object* v_vals_727_, lean_object* v_i_728_, lean_object* v_entries_729_){
_start:
{
size_t v_depth_boxed_730_; lean_object* v_res_731_; 
v_depth_boxed_730_ = lean_unbox_usize(v_depth_725_);
lean_dec(v_depth_725_);
v_res_731_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__3___redArg(v_depth_boxed_730_, v_keys_726_, v_vals_727_, v_i_728_, v_entries_729_);
lean_dec_ref(v_vals_727_);
lean_dec_ref(v_keys_726_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0___redArg___boxed(lean_object* v_x_732_, lean_object* v_x_733_, lean_object* v_x_734_, lean_object* v_x_735_, lean_object* v_x_736_){
_start:
{
size_t v_x_112676__boxed_737_; size_t v_x_112677__boxed_738_; lean_object* v_res_739_; 
v_x_112676__boxed_737_ = lean_unbox_usize(v_x_733_);
lean_dec(v_x_733_);
v_x_112677__boxed_738_ = lean_unbox_usize(v_x_734_);
lean_dec(v_x_734_);
v_res_739_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0___redArg(v_x_732_, v_x_112676__boxed_737_, v_x_112677__boxed_738_, v_x_735_, v_x_736_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0___redArg(lean_object* v_x_740_, lean_object* v_x_741_, lean_object* v_x_742_){
_start:
{
size_t v___x_743_; size_t v___x_744_; size_t v___x_745_; uint64_t v___x_746_; size_t v___x_747_; size_t v___x_748_; lean_object* v___x_749_; 
v___x_743_ = lean_ptr_addr(v_x_741_);
v___x_744_ = ((size_t)3ULL);
v___x_745_ = lean_usize_shift_right(v___x_743_, v___x_744_);
v___x_746_ = lean_usize_to_uint64(v___x_745_);
v___x_747_ = lean_uint64_to_usize(v___x_746_);
v___x_748_ = ((size_t)1ULL);
v___x_749_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0___redArg(v_x_740_, v___x_747_, v___x_748_, v_x_741_, v_x_742_);
return v___x_749_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_750_; double v___x_751_; 
v___x_750_ = lean_unsigned_to_nat(0u);
v___x_751_ = lean_float_of_nat(v___x_750_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg(lean_object* v_cls_755_, lean_object* v_msg_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v_ref_762_; lean_object* v___x_763_; lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_809_; 
v_ref_762_ = lean_ctor_get(v___y_759_, 2);
v___x_763_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0_spec__0(v_msg_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
v_a_764_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_809_ == 0)
{
v___x_766_ = v___x_763_;
v_isShared_767_ = v_isSharedCheck_809_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v___x_763_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_809_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_768_; lean_object* v_traceState_769_; lean_object* v_env_770_; lean_object* v_nextMacroScope_771_; lean_object* v_ngen_772_; lean_object* v_auxDeclNGen_773_; lean_object* v_cache_774_; lean_object* v_recordedDeps_775_; lean_object* v_messages_776_; lean_object* v_infoState_777_; lean_object* v_snapshotTasks_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_808_; 
v___x_768_ = lean_st_ref_take(v___y_760_);
v_traceState_769_ = lean_ctor_get(v___x_768_, 4);
v_env_770_ = lean_ctor_get(v___x_768_, 0);
v_nextMacroScope_771_ = lean_ctor_get(v___x_768_, 1);
v_ngen_772_ = lean_ctor_get(v___x_768_, 2);
v_auxDeclNGen_773_ = lean_ctor_get(v___x_768_, 3);
v_cache_774_ = lean_ctor_get(v___x_768_, 5);
v_recordedDeps_775_ = lean_ctor_get(v___x_768_, 6);
v_messages_776_ = lean_ctor_get(v___x_768_, 7);
v_infoState_777_ = lean_ctor_get(v___x_768_, 8);
v_snapshotTasks_778_ = lean_ctor_get(v___x_768_, 9);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_808_ == 0)
{
v___x_780_ = v___x_768_;
v_isShared_781_ = v_isSharedCheck_808_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_snapshotTasks_778_);
lean_inc(v_infoState_777_);
lean_inc(v_messages_776_);
lean_inc(v_recordedDeps_775_);
lean_inc(v_cache_774_);
lean_inc(v_traceState_769_);
lean_inc(v_auxDeclNGen_773_);
lean_inc(v_ngen_772_);
lean_inc(v_nextMacroScope_771_);
lean_inc(v_env_770_);
lean_dec(v___x_768_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_808_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
uint64_t v_tid_782_; lean_object* v_traces_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_807_; 
v_tid_782_ = lean_ctor_get_uint64(v_traceState_769_, sizeof(void*)*1);
v_traces_783_ = lean_ctor_get(v_traceState_769_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v_traceState_769_);
if (v_isSharedCheck_807_ == 0)
{
v___x_785_ = v_traceState_769_;
v_isShared_786_ = v_isSharedCheck_807_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_traces_783_);
lean_dec(v_traceState_769_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_807_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_787_; lean_object* v___x_788_; double v___x_789_; uint8_t v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_798_; 
v___x_787_ = lean_box(0);
v___x_788_ = lean_box(0);
v___x_789_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg___closed__0);
v___x_790_ = 0;
v___x_791_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg___closed__1));
v___x_792_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_792_, 0, v_cls_755_);
lean_ctor_set(v___x_792_, 1, v___x_788_);
lean_ctor_set(v___x_792_, 2, v___x_791_);
lean_ctor_set_float(v___x_792_, sizeof(void*)*3, v___x_789_);
lean_ctor_set_float(v___x_792_, sizeof(void*)*3 + 8, v___x_789_);
lean_ctor_set_uint8(v___x_792_, sizeof(void*)*3 + 16, v___x_790_);
v___x_793_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg___closed__2));
v___x_794_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_794_, 0, v___x_792_);
lean_ctor_set(v___x_794_, 1, v_a_764_);
lean_ctor_set(v___x_794_, 2, v___x_793_);
lean_inc(v_ref_762_);
v___x_795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_795_, 0, v_ref_762_);
lean_ctor_set(v___x_795_, 1, v___x_794_);
v___x_796_ = l_Lean_PersistentArray_push___redArg(v_traces_783_, v___x_795_);
if (v_isShared_786_ == 0)
{
lean_ctor_set(v___x_785_, 0, v___x_796_);
v___x_798_ = v___x_785_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v___x_796_);
lean_ctor_set_uint64(v_reuseFailAlloc_806_, sizeof(void*)*1, v_tid_782_);
v___x_798_ = v_reuseFailAlloc_806_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
lean_object* v___x_800_; 
if (v_isShared_781_ == 0)
{
lean_ctor_set(v___x_780_, 4, v___x_798_);
v___x_800_ = v___x_780_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_env_770_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v_nextMacroScope_771_);
lean_ctor_set(v_reuseFailAlloc_805_, 2, v_ngen_772_);
lean_ctor_set(v_reuseFailAlloc_805_, 3, v_auxDeclNGen_773_);
lean_ctor_set(v_reuseFailAlloc_805_, 4, v___x_798_);
lean_ctor_set(v_reuseFailAlloc_805_, 5, v_cache_774_);
lean_ctor_set(v_reuseFailAlloc_805_, 6, v_recordedDeps_775_);
lean_ctor_set(v_reuseFailAlloc_805_, 7, v_messages_776_);
lean_ctor_set(v_reuseFailAlloc_805_, 8, v_infoState_777_);
lean_ctor_set(v_reuseFailAlloc_805_, 9, v_snapshotTasks_778_);
v___x_800_ = v_reuseFailAlloc_805_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
lean_object* v___x_801_; lean_object* v___x_803_; 
v___x_801_ = lean_st_ref_put(v___y_760_, v___x_800_);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 0, v___x_787_);
v___x_803_ = v___x_766_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v___x_787_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg___boxed(lean_object* v_cls_810_, lean_object* v_msg_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg(v_cls_810_, v_msg_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
lean_dec(v___y_815_);
lean_dec_ref(v___y_814_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2_spec__6___redArg(lean_object* v_keys_818_, lean_object* v_vals_819_, lean_object* v_i_820_, lean_object* v_k_821_){
_start:
{
lean_object* v___x_822_; uint8_t v___x_823_; 
v___x_822_ = lean_array_get_size(v_keys_818_);
v___x_823_ = lean_nat_dec_lt(v_i_820_, v___x_822_);
if (v___x_823_ == 0)
{
lean_object* v___x_824_; 
lean_dec(v_i_820_);
v___x_824_ = lean_box(0);
return v___x_824_;
}
else
{
lean_object* v_k_x27_825_; size_t v___x_826_; size_t v___x_827_; uint8_t v___x_828_; 
v_k_x27_825_ = lean_array_fget_borrowed(v_keys_818_, v_i_820_);
v___x_826_ = lean_ptr_addr(v_k_821_);
v___x_827_ = lean_ptr_addr(v_k_x27_825_);
v___x_828_ = lean_usize_dec_eq(v___x_826_, v___x_827_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_829_ = lean_unsigned_to_nat(1u);
v___x_830_ = lean_nat_add(v_i_820_, v___x_829_);
lean_dec(v_i_820_);
v_i_820_ = v___x_830_;
goto _start;
}
else
{
lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_832_ = lean_array_fget_borrowed(v_vals_819_, v_i_820_);
lean_dec(v_i_820_);
lean_inc(v___x_832_);
v___x_833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_833_, 0, v___x_832_);
return v___x_833_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2_spec__6___redArg___boxed(lean_object* v_keys_834_, lean_object* v_vals_835_, lean_object* v_i_836_, lean_object* v_k_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2_spec__6___redArg(v_keys_834_, v_vals_835_, v_i_836_, v_k_837_);
lean_dec_ref(v_k_837_);
lean_dec_ref(v_vals_835_);
lean_dec_ref(v_keys_834_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2___redArg(lean_object* v_x_839_, size_t v_x_840_, lean_object* v_x_841_){
_start:
{
if (lean_obj_tag(v_x_839_) == 0)
{
lean_object* v_es_842_; lean_object* v___x_843_; size_t v___x_844_; size_t v___x_845_; lean_object* v_j_846_; lean_object* v___x_847_; 
v_es_842_ = lean_ctor_get(v_x_839_, 0);
v___x_843_ = lean_box(2);
v___x_844_ = ((size_t)31ULL);
v___x_845_ = lean_usize_land(v_x_840_, v___x_844_);
v_j_846_ = lean_usize_to_nat(v___x_845_);
v___x_847_ = lean_array_get_borrowed(v___x_843_, v_es_842_, v_j_846_);
lean_dec(v_j_846_);
switch(lean_obj_tag(v___x_847_))
{
case 0:
{
lean_object* v_key_848_; lean_object* v_val_849_; size_t v___x_850_; size_t v___x_851_; uint8_t v___x_852_; 
v_key_848_ = lean_ctor_get(v___x_847_, 0);
v_val_849_ = lean_ctor_get(v___x_847_, 1);
v___x_850_ = lean_ptr_addr(v_x_841_);
v___x_851_ = lean_ptr_addr(v_key_848_);
v___x_852_ = lean_usize_dec_eq(v___x_850_, v___x_851_);
if (v___x_852_ == 0)
{
lean_object* v___x_853_; 
v___x_853_ = lean_box(0);
return v___x_853_;
}
else
{
lean_object* v___x_854_; 
lean_inc(v_val_849_);
v___x_854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_854_, 0, v_val_849_);
return v___x_854_;
}
}
case 1:
{
lean_object* v_node_855_; size_t v___x_856_; size_t v___x_857_; 
v_node_855_ = lean_ctor_get(v___x_847_, 0);
v___x_856_ = ((size_t)5ULL);
v___x_857_ = lean_usize_shift_right(v_x_840_, v___x_856_);
v_x_839_ = v_node_855_;
v_x_840_ = v___x_857_;
goto _start;
}
default: 
{
lean_object* v___x_859_; 
v___x_859_ = lean_box(0);
return v___x_859_;
}
}
}
else
{
lean_object* v_ks_860_; lean_object* v_vs_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v_ks_860_ = lean_ctor_get(v_x_839_, 0);
v_vs_861_ = lean_ctor_get(v_x_839_, 1);
v___x_862_ = lean_unsigned_to_nat(0u);
v___x_863_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2_spec__6___redArg(v_ks_860_, v_vs_861_, v___x_862_, v_x_841_);
return v___x_863_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2___redArg___boxed(lean_object* v_x_864_, lean_object* v_x_865_, lean_object* v_x_866_){
_start:
{
size_t v_x_112978__boxed_867_; lean_object* v_res_868_; 
v_x_112978__boxed_867_ = lean_unbox_usize(v_x_865_);
lean_dec(v_x_865_);
v_res_868_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2___redArg(v_x_864_, v_x_112978__boxed_867_, v_x_866_);
lean_dec_ref(v_x_866_);
lean_dec_ref(v_x_864_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1___redArg(lean_object* v_x_869_, lean_object* v_x_870_){
_start:
{
size_t v___x_871_; size_t v___x_872_; size_t v___x_873_; uint64_t v___x_874_; size_t v___x_875_; lean_object* v___x_876_; 
v___x_871_ = lean_ptr_addr(v_x_870_);
v___x_872_ = ((size_t)3ULL);
v___x_873_ = lean_usize_shift_right(v___x_871_, v___x_872_);
v___x_874_ = lean_usize_to_uint64(v___x_873_);
v___x_875_ = lean_uint64_to_usize(v___x_874_);
v___x_876_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2___redArg(v_x_869_, v___x_875_, v_x_870_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1___redArg___boxed(lean_object* v_x_877_, lean_object* v_x_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1___redArg(v_x_877_, v_x_878_);
lean_dec_ref(v_x_878_);
lean_dec_ref(v_x_877_);
return v_res_879_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__2(void){
_start:
{
lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_883_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_));
v___x_884_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__1));
v___x_885_ = l_Lean_Name_append(v___x_884_, v___x_883_);
return v___x_885_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__4(void){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__3));
v___x_888_ = l_Lean_stringToMessageData(v___x_887_);
return v___x_888_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__6(void){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_890_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__5));
v___x_891_ = l_Lean_stringToMessageData(v___x_890_);
return v___x_891_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__8(void){
_start:
{
lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_893_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__7));
v___x_894_ = l_Lean_stringToMessageData(v___x_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* lean_sym_simp(lean_object* v_e_u2081_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_){
_start:
{
lean_object* v___y_907_; lean_object* v___y_908_; lean_object* v___y_925_; lean_object* v___y_926_; uint8_t v___y_927_; lean_object* v___y_945_; lean_object* v___y_946_; lean_object* v___y_947_; uint8_t v___y_948_; uint8_t v___y_949_; lean_object* v___y_952_; uint8_t v___y_953_; lean_object* v___y_954_; lean_object* v___y_955_; uint8_t v___y_956_; lean_object* v_e_u2082_959_; lean_object* v_h_u2081_960_; uint8_t v_cd_u2081_961_; lean_object* v___y_962_; lean_object* v___y_963_; lean_object* v___y_964_; lean_object* v___y_965_; lean_object* v___y_966_; lean_object* v___y_967_; lean_object* v___y_968_; lean_object* v___y_969_; lean_object* v___y_970_; lean_object* v___y_992_; lean_object* v___y_993_; lean_object* v___y_1010_; lean_object* v___y_1011_; lean_object* v___y_1028_; lean_object* v___y_1029_; lean_object* v___y_1030_; lean_object* v___y_1031_; lean_object* v___y_1032_; lean_object* v___y_1033_; lean_object* v___y_1034_; lean_object* v___y_1035_; lean_object* v___y_1036_; lean_object* v___y_1037_; lean_object* v___y_1077_; lean_object* v___y_1078_; lean_object* v___y_1079_; lean_object* v___y_1080_; lean_object* v___y_1081_; lean_object* v___y_1082_; lean_object* v___y_1083_; lean_object* v___y_1084_; lean_object* v___y_1085_; lean_object* v___y_1086_; uint8_t v___y_1087_; lean_object* v___y_1090_; lean_object* v___y_1091_; lean_object* v___y_1092_; uint8_t v___y_1093_; lean_object* v___y_1094_; lean_object* v___y_1095_; lean_object* v___y_1096_; lean_object* v___y_1097_; lean_object* v___y_1098_; lean_object* v___y_1099_; lean_object* v___y_1100_; uint8_t v___y_1101_; uint8_t v___y_1102_; lean_object* v___y_1104_; lean_object* v___y_1105_; lean_object* v___y_1106_; lean_object* v___y_1107_; lean_object* v___y_1108_; uint8_t v___y_1109_; lean_object* v___y_1110_; lean_object* v___y_1111_; lean_object* v___y_1112_; lean_object* v___y_1113_; uint8_t v___y_1114_; lean_object* v_a_1115_; lean_object* v___y_1119_; lean_object* v___y_1120_; uint8_t v___y_1121_; lean_object* v___y_1122_; lean_object* v___y_1123_; lean_object* v___y_1124_; lean_object* v___y_1125_; lean_object* v___y_1126_; lean_object* v___y_1127_; lean_object* v___y_1128_; lean_object* v___y_1129_; uint8_t v___y_1130_; uint8_t v___y_1131_; lean_object* v___y_1134_; lean_object* v___y_1135_; uint8_t v___y_1136_; lean_object* v___y_1137_; uint8_t v___y_1138_; lean_object* v___y_1139_; lean_object* v___y_1140_; lean_object* v___y_1141_; lean_object* v___y_1142_; lean_object* v___y_1143_; lean_object* v___y_1144_; lean_object* v___y_1145_; lean_object* v___y_1146_; uint8_t v___y_1147_; uint8_t v___y_1148_; uint8_t v___y_1151_; lean_object* v___y_1152_; lean_object* v___y_1153_; uint8_t v___y_1154_; lean_object* v___y_1155_; lean_object* v___y_1156_; lean_object* v___y_1157_; lean_object* v___y_1158_; lean_object* v___y_1159_; lean_object* v___y_1160_; lean_object* v___y_1161_; lean_object* v___y_1162_; lean_object* v___y_1163_; uint8_t v___y_1164_; uint8_t v___y_1165_; lean_object* v___y_1168_; lean_object* v___y_1169_; lean_object* v___y_1186_; lean_object* v___y_1187_; lean_object* v_toCold_1203_; lean_object* v_currRecDepth_1204_; lean_object* v_ref_1205_; uint16_t v_optionFlags_1206_; uint8_t v_suppressElabErrors_1207_; uint8_t v_checkDeprecated_1208_; uint8_t v_isRecordingDeps_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1476_; 
v_toCold_1203_ = lean_ctor_get(v_a_903_, 0);
v_currRecDepth_1204_ = lean_ctor_get(v_a_903_, 1);
v_ref_1205_ = lean_ctor_get(v_a_903_, 2);
v_optionFlags_1206_ = lean_ctor_get_uint16(v_a_903_, sizeof(void*)*3);
v_suppressElabErrors_1207_ = lean_ctor_get_uint8(v_a_903_, sizeof(void*)*3 + 2);
v_checkDeprecated_1208_ = lean_ctor_get_uint8(v_a_903_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1209_ = lean_ctor_get_uint8(v_a_903_, sizeof(void*)*3 + 4);
v_isSharedCheck_1476_ = !lean_is_exclusive(v_a_903_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1211_ = v_a_903_;
v_isShared_1212_ = v_isSharedCheck_1476_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_ref_1205_);
lean_inc(v_currRecDepth_1204_);
lean_inc(v_toCold_1203_);
lean_dec(v_a_903_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1476_;
goto v_resetjp_1210_;
}
v___jp_906_:
{
lean_object* v___x_909_; lean_object* v_numSteps_910_; lean_object* v_persistentCache_911_; lean_object* v_transientCache_912_; lean_object* v_funext_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_923_; 
v___x_909_ = lean_st_ref_take(v___y_908_);
v_numSteps_910_ = lean_ctor_get(v___x_909_, 0);
v_persistentCache_911_ = lean_ctor_get(v___x_909_, 1);
v_transientCache_912_ = lean_ctor_get(v___x_909_, 2);
v_funext_913_ = lean_ctor_get(v___x_909_, 3);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_923_ == 0)
{
v___x_915_ = v___x_909_;
v_isShared_916_ = v_isSharedCheck_923_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_funext_913_);
lean_inc(v_transientCache_912_);
lean_inc(v_persistentCache_911_);
lean_inc(v_numSteps_910_);
lean_dec(v___x_909_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_923_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_917_; lean_object* v___x_919_; 
lean_inc_ref(v___y_907_);
v___x_917_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0___redArg(v_transientCache_912_, v_e_u2081_895_, v___y_907_);
if (v_isShared_916_ == 0)
{
lean_ctor_set(v___x_915_, 2, v___x_917_);
v___x_919_ = v___x_915_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_numSteps_910_);
lean_ctor_set(v_reuseFailAlloc_922_, 1, v_persistentCache_911_);
lean_ctor_set(v_reuseFailAlloc_922_, 2, v___x_917_);
lean_ctor_set(v_reuseFailAlloc_922_, 3, v_funext_913_);
v___x_919_ = v_reuseFailAlloc_922_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_920_ = lean_st_ref_put(v___y_908_, v___x_919_);
lean_dec(v___y_908_);
v___x_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_921_, 0, v___y_907_);
return v___x_921_;
}
}
}
v___jp_924_:
{
if (v___y_927_ == 0)
{
uint8_t v___x_928_; 
v___x_928_ = l_Lean_Expr_hasMVar(v_e_u2081_895_);
if (v___x_928_ == 0)
{
lean_object* v___x_929_; lean_object* v_numSteps_930_; lean_object* v_persistentCache_931_; lean_object* v_transientCache_932_; lean_object* v_funext_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_943_; 
v___x_929_ = lean_st_ref_take(v___y_926_);
v_numSteps_930_ = lean_ctor_get(v___x_929_, 0);
v_persistentCache_931_ = lean_ctor_get(v___x_929_, 1);
v_transientCache_932_ = lean_ctor_get(v___x_929_, 2);
v_funext_933_ = lean_ctor_get(v___x_929_, 3);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_929_);
if (v_isSharedCheck_943_ == 0)
{
v___x_935_ = v___x_929_;
v_isShared_936_ = v_isSharedCheck_943_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_funext_933_);
lean_inc(v_transientCache_932_);
lean_inc(v_persistentCache_931_);
lean_inc(v_numSteps_930_);
lean_dec(v___x_929_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_943_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_937_; lean_object* v___x_939_; 
lean_inc_ref(v___y_925_);
v___x_937_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0___redArg(v_persistentCache_931_, v_e_u2081_895_, v___y_925_);
if (v_isShared_936_ == 0)
{
lean_ctor_set(v___x_935_, 1, v___x_937_);
v___x_939_ = v___x_935_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_numSteps_930_);
lean_ctor_set(v_reuseFailAlloc_942_, 1, v___x_937_);
lean_ctor_set(v_reuseFailAlloc_942_, 2, v_transientCache_932_);
lean_ctor_set(v_reuseFailAlloc_942_, 3, v_funext_933_);
v___x_939_ = v_reuseFailAlloc_942_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = lean_st_ref_put(v___y_926_, v___x_939_);
lean_dec(v___y_926_);
v___x_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_941_, 0, v___y_925_);
return v___x_941_;
}
}
}
else
{
v___y_907_ = v___y_925_;
v___y_908_ = v___y_926_;
goto v___jp_906_;
}
}
else
{
v___y_907_ = v___y_925_;
v___y_908_ = v___y_926_;
goto v___jp_906_;
}
}
v___jp_944_:
{
lean_object* v___x_950_; 
v___x_950_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_950_, 0, v___y_946_);
lean_ctor_set(v___x_950_, 1, v___y_945_);
lean_ctor_set_uint8(v___x_950_, sizeof(void*)*2, v___y_948_);
lean_ctor_set_uint8(v___x_950_, sizeof(void*)*2 + 1, v___y_949_);
v___y_925_ = v___x_950_;
v___y_926_ = v___y_947_;
v___y_927_ = v___y_949_;
goto v___jp_924_;
}
v___jp_951_:
{
lean_object* v___x_957_; 
v___x_957_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_957_, 0, v___y_954_);
lean_ctor_set(v___x_957_, 1, v___y_955_);
lean_ctor_set_uint8(v___x_957_, sizeof(void*)*2, v___y_953_);
lean_ctor_set_uint8(v___x_957_, sizeof(void*)*2 + 1, v___y_956_);
v___y_925_ = v___x_957_;
v___y_926_ = v___y_952_;
v___y_927_ = v___y_956_;
goto v___jp_924_;
}
v___jp_958_:
{
lean_object* v___x_971_; 
lean_inc(v___y_970_);
lean_inc_ref(v___y_969_);
lean_inc(v___y_968_);
lean_inc_ref(v___y_967_);
lean_inc(v___y_966_);
lean_inc_ref(v___y_965_);
lean_inc(v___y_964_);
lean_inc_ref(v_e_u2082_959_);
v___x_971_ = lean_sym_simp(v_e_u2082_959_, v___y_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
if (lean_obj_tag(v___x_971_) == 0)
{
lean_object* v_a_972_; 
v_a_972_ = lean_ctor_get(v___x_971_, 0);
lean_inc(v_a_972_);
lean_dec_ref_known(v___x_971_, 1);
if (lean_obj_tag(v_a_972_) == 0)
{
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
lean_dec(v___y_968_);
lean_dec_ref(v___y_967_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
if (v_cd_u2081_961_ == 0)
{
uint8_t v_done_973_; uint8_t v_contextDependent_974_; 
v_done_973_ = lean_ctor_get_uint8(v_a_972_, 0);
v_contextDependent_974_ = lean_ctor_get_uint8(v_a_972_, 1);
lean_dec_ref_known(v_a_972_, 0);
v___y_945_ = v_h_u2081_960_;
v___y_946_ = v_e_u2082_959_;
v___y_947_ = v___y_964_;
v___y_948_ = v_done_973_;
v___y_949_ = v_contextDependent_974_;
goto v___jp_944_;
}
else
{
uint8_t v_done_975_; 
v_done_975_ = lean_ctor_get_uint8(v_a_972_, 0);
lean_dec_ref_known(v_a_972_, 0);
v___y_945_ = v_h_u2081_960_;
v___y_946_ = v_e_u2082_959_;
v___y_947_ = v___y_964_;
v___y_948_ = v_done_975_;
v___y_949_ = v_cd_u2081_961_;
goto v___jp_944_;
}
}
else
{
lean_object* v_e_x27_976_; lean_object* v_proof_977_; uint8_t v_done_978_; uint8_t v_contextDependent_979_; lean_object* v___x_980_; 
v_e_x27_976_ = lean_ctor_get(v_a_972_, 0);
lean_inc_ref_n(v_e_x27_976_, 2);
v_proof_977_ = lean_ctor_get(v_a_972_, 1);
lean_inc_ref(v_proof_977_);
v_done_978_ = lean_ctor_get_uint8(v_a_972_, sizeof(void*)*2);
v_contextDependent_979_ = lean_ctor_get_uint8(v_a_972_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_972_, 2);
lean_inc_ref(v_e_u2081_895_);
v___x_980_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v_e_u2081_895_, v_e_u2082_959_, v_h_u2081_960_, v_e_x27_976_, v_proof_977_, v___y_965_, v___y_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
lean_dec(v___y_968_);
lean_dec_ref(v___y_967_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
if (lean_obj_tag(v___x_980_) == 0)
{
if (v_cd_u2081_961_ == 0)
{
lean_object* v_a_981_; 
v_a_981_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_a_981_);
lean_dec_ref_known(v___x_980_, 1);
v___y_952_ = v___y_964_;
v___y_953_ = v_done_978_;
v___y_954_ = v_e_x27_976_;
v___y_955_ = v_a_981_;
v___y_956_ = v_contextDependent_979_;
goto v___jp_951_;
}
else
{
lean_object* v_a_982_; 
v_a_982_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_a_982_);
lean_dec_ref_known(v___x_980_, 1);
v___y_952_ = v___y_964_;
v___y_953_ = v_done_978_;
v___y_954_ = v_e_x27_976_;
v___y_955_ = v_a_982_;
v___y_956_ = v_cd_u2081_961_;
goto v___jp_951_;
}
}
else
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
lean_dec_ref(v_e_x27_976_);
lean_dec(v___y_964_);
lean_dec_ref(v_e_u2081_895_);
v_a_983_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_980_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_980_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
}
else
{
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
lean_dec(v___y_968_);
lean_dec_ref(v___y_967_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
lean_dec(v___y_964_);
lean_dec_ref(v_h_u2081_960_);
lean_dec_ref(v_e_u2082_959_);
lean_dec_ref(v_e_u2081_895_);
return v___x_971_;
}
}
v___jp_991_:
{
lean_object* v___x_994_; lean_object* v_numSteps_995_; lean_object* v_persistentCache_996_; lean_object* v_transientCache_997_; lean_object* v_funext_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1008_; 
v___x_994_ = lean_st_ref_take(v___y_992_);
v_numSteps_995_ = lean_ctor_get(v___x_994_, 0);
v_persistentCache_996_ = lean_ctor_get(v___x_994_, 1);
v_transientCache_997_ = lean_ctor_get(v___x_994_, 2);
v_funext_998_ = lean_ctor_get(v___x_994_, 3);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1000_ = v___x_994_;
v_isShared_1001_ = v_isSharedCheck_1008_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_funext_998_);
lean_inc(v_transientCache_997_);
lean_inc(v_persistentCache_996_);
lean_inc(v_numSteps_995_);
lean_dec(v___x_994_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1008_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1002_; lean_object* v___x_1004_; 
lean_inc_ref(v___y_993_);
v___x_1002_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0___redArg(v_transientCache_997_, v_e_u2081_895_, v___y_993_);
if (v_isShared_1001_ == 0)
{
lean_ctor_set(v___x_1000_, 2, v___x_1002_);
v___x_1004_ = v___x_1000_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_numSteps_995_);
lean_ctor_set(v_reuseFailAlloc_1007_, 1, v_persistentCache_996_);
lean_ctor_set(v_reuseFailAlloc_1007_, 2, v___x_1002_);
lean_ctor_set(v_reuseFailAlloc_1007_, 3, v_funext_998_);
v___x_1004_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = lean_st_ref_put(v___y_992_, v___x_1004_);
lean_dec(v___y_992_);
v___x_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1006_, 0, v___y_993_);
return v___x_1006_;
}
}
}
v___jp_1009_:
{
lean_object* v___x_1012_; lean_object* v_numSteps_1013_; lean_object* v_persistentCache_1014_; lean_object* v_transientCache_1015_; lean_object* v_funext_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1026_; 
v___x_1012_ = lean_st_ref_take(v___y_1010_);
v_numSteps_1013_ = lean_ctor_get(v___x_1012_, 0);
v_persistentCache_1014_ = lean_ctor_get(v___x_1012_, 1);
v_transientCache_1015_ = lean_ctor_get(v___x_1012_, 2);
v_funext_1016_ = lean_ctor_get(v___x_1012_, 3);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1018_ = v___x_1012_;
v_isShared_1019_ = v_isSharedCheck_1026_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_funext_1016_);
lean_inc(v_transientCache_1015_);
lean_inc(v_persistentCache_1014_);
lean_inc(v_numSteps_1013_);
lean_dec(v___x_1012_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1026_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1020_; lean_object* v___x_1022_; 
lean_inc_ref(v___y_1011_);
v___x_1020_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0___redArg(v_transientCache_1015_, v_e_u2081_895_, v___y_1011_);
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 2, v___x_1020_);
v___x_1022_ = v___x_1018_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_numSteps_1013_);
lean_ctor_set(v_reuseFailAlloc_1025_, 1, v_persistentCache_1014_);
lean_ctor_set(v_reuseFailAlloc_1025_, 2, v___x_1020_);
lean_ctor_set(v_reuseFailAlloc_1025_, 3, v_funext_1016_);
v___x_1022_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = lean_st_ref_put(v___y_1010_, v___x_1022_);
lean_dec(v___y_1010_);
v___x_1024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1024_, 0, v___y_1011_);
return v___x_1024_;
}
}
}
v___jp_1027_:
{
if (lean_obj_tag(v___y_1037_) == 0)
{
uint8_t v_contextDependent_1038_; 
lean_dec(v___y_1036_);
lean_dec(v___y_1035_);
lean_dec_ref(v___y_1034_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
v_contextDependent_1038_ = lean_ctor_get_uint8(v___y_1037_, 1);
if (v_contextDependent_1038_ == 0)
{
uint8_t v___x_1039_; 
v___x_1039_ = l_Lean_Expr_hasMVar(v_e_u2081_895_);
if (v___x_1039_ == 0)
{
lean_object* v___x_1040_; lean_object* v_numSteps_1041_; lean_object* v_persistentCache_1042_; lean_object* v_transientCache_1043_; lean_object* v_funext_1044_; lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1054_; 
v___x_1040_ = lean_st_ref_take(v___y_1032_);
v_numSteps_1041_ = lean_ctor_get(v___x_1040_, 0);
v_persistentCache_1042_ = lean_ctor_get(v___x_1040_, 1);
v_transientCache_1043_ = lean_ctor_get(v___x_1040_, 2);
v_funext_1044_ = lean_ctor_get(v___x_1040_, 3);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1046_ = v___x_1040_;
v_isShared_1047_ = v_isSharedCheck_1054_;
goto v_resetjp_1045_;
}
else
{
lean_inc(v_funext_1044_);
lean_inc(v_transientCache_1043_);
lean_inc(v_persistentCache_1042_);
lean_inc(v_numSteps_1041_);
lean_dec(v___x_1040_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1054_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
lean_object* v___x_1048_; lean_object* v___x_1050_; 
lean_inc_ref(v___y_1037_);
v___x_1048_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0___redArg(v_persistentCache_1042_, v_e_u2081_895_, v___y_1037_);
if (v_isShared_1047_ == 0)
{
lean_ctor_set(v___x_1046_, 1, v___x_1048_);
v___x_1050_ = v___x_1046_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_numSteps_1041_);
lean_ctor_set(v_reuseFailAlloc_1053_, 1, v___x_1048_);
lean_ctor_set(v_reuseFailAlloc_1053_, 2, v_transientCache_1043_);
lean_ctor_set(v_reuseFailAlloc_1053_, 3, v_funext_1044_);
v___x_1050_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1051_ = lean_st_ref_put(v___y_1032_, v___x_1050_);
lean_dec(v___y_1032_);
v___x_1052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1052_, 0, v___y_1037_);
return v___x_1052_;
}
}
}
else
{
v___y_992_ = v___y_1032_;
v___y_993_ = v___y_1037_;
goto v___jp_991_;
}
}
else
{
v___y_992_ = v___y_1032_;
v___y_993_ = v___y_1037_;
goto v___jp_991_;
}
}
else
{
uint8_t v_done_1055_; 
v_done_1055_ = lean_ctor_get_uint8(v___y_1037_, sizeof(void*)*2);
if (v_done_1055_ == 0)
{
lean_object* v_e_x27_1056_; lean_object* v_proof_1057_; uint8_t v_contextDependent_1058_; 
v_e_x27_1056_ = lean_ctor_get(v___y_1037_, 0);
lean_inc_ref(v_e_x27_1056_);
v_proof_1057_ = lean_ctor_get(v___y_1037_, 1);
lean_inc_ref(v_proof_1057_);
v_contextDependent_1058_ = lean_ctor_get_uint8(v___y_1037_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v___y_1037_, 2);
v_e_u2082_959_ = v_e_x27_1056_;
v_h_u2081_960_ = v_proof_1057_;
v_cd_u2081_961_ = v_contextDependent_1058_;
v___y_962_ = v___y_1033_;
v___y_963_ = v___y_1031_;
v___y_964_ = v___y_1032_;
v___y_965_ = v___y_1028_;
v___y_966_ = v___y_1036_;
v___y_967_ = v___y_1034_;
v___y_968_ = v___y_1035_;
v___y_969_ = v___y_1030_;
v___y_970_ = v___y_1029_;
goto v___jp_958_;
}
else
{
uint8_t v_contextDependent_1059_; 
lean_dec(v___y_1036_);
lean_dec(v___y_1035_);
lean_dec_ref(v___y_1034_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
v_contextDependent_1059_ = lean_ctor_get_uint8(v___y_1037_, sizeof(void*)*2 + 1);
if (v_contextDependent_1059_ == 0)
{
uint8_t v___x_1060_; 
v___x_1060_ = l_Lean_Expr_hasMVar(v_e_u2081_895_);
if (v___x_1060_ == 0)
{
lean_object* v___x_1061_; lean_object* v_numSteps_1062_; lean_object* v_persistentCache_1063_; lean_object* v_transientCache_1064_; lean_object* v_funext_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1075_; 
v___x_1061_ = lean_st_ref_take(v___y_1032_);
v_numSteps_1062_ = lean_ctor_get(v___x_1061_, 0);
v_persistentCache_1063_ = lean_ctor_get(v___x_1061_, 1);
v_transientCache_1064_ = lean_ctor_get(v___x_1061_, 2);
v_funext_1065_ = lean_ctor_get(v___x_1061_, 3);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1061_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1067_ = v___x_1061_;
v_isShared_1068_ = v_isSharedCheck_1075_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_funext_1065_);
lean_inc(v_transientCache_1064_);
lean_inc(v_persistentCache_1063_);
lean_inc(v_numSteps_1062_);
lean_dec(v___x_1061_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1075_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1069_; lean_object* v___x_1071_; 
lean_inc_ref(v___y_1037_);
v___x_1069_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0___redArg(v_persistentCache_1063_, v_e_u2081_895_, v___y_1037_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 1, v___x_1069_);
v___x_1071_ = v___x_1067_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_numSteps_1062_);
lean_ctor_set(v_reuseFailAlloc_1074_, 1, v___x_1069_);
lean_ctor_set(v_reuseFailAlloc_1074_, 2, v_transientCache_1064_);
lean_ctor_set(v_reuseFailAlloc_1074_, 3, v_funext_1065_);
v___x_1071_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1072_ = lean_st_ref_put(v___y_1032_, v___x_1071_);
lean_dec(v___y_1032_);
v___x_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1073_, 0, v___y_1037_);
return v___x_1073_;
}
}
}
else
{
v___y_1010_ = v___y_1032_;
v___y_1011_ = v___y_1037_;
goto v___jp_1009_;
}
}
else
{
v___y_1010_ = v___y_1032_;
v___y_1011_ = v___y_1037_;
goto v___jp_1009_;
}
}
}
}
v___jp_1076_:
{
if (v___y_1087_ == 0)
{
v___y_1028_ = v___y_1077_;
v___y_1029_ = v___y_1078_;
v___y_1030_ = v___y_1079_;
v___y_1031_ = v___y_1081_;
v___y_1032_ = v___y_1080_;
v___y_1033_ = v___y_1082_;
v___y_1034_ = v___y_1083_;
v___y_1035_ = v___y_1085_;
v___y_1036_ = v___y_1084_;
v___y_1037_ = v___y_1086_;
goto v___jp_1027_;
}
else
{
lean_object* v___x_1088_; 
v___x_1088_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v___y_1086_);
v___y_1028_ = v___y_1077_;
v___y_1029_ = v___y_1078_;
v___y_1030_ = v___y_1079_;
v___y_1031_ = v___y_1081_;
v___y_1032_ = v___y_1080_;
v___y_1033_ = v___y_1082_;
v___y_1034_ = v___y_1083_;
v___y_1035_ = v___y_1085_;
v___y_1036_ = v___y_1084_;
v___y_1037_ = v___x_1088_;
goto v___jp_1027_;
}
}
v___jp_1089_:
{
if (v___y_1102_ == 0)
{
v___y_1077_ = v___y_1096_;
v___y_1078_ = v___y_1097_;
v___y_1079_ = v___y_1090_;
v___y_1080_ = v___y_1098_;
v___y_1081_ = v___y_1091_;
v___y_1082_ = v___y_1092_;
v___y_1083_ = v___y_1099_;
v___y_1084_ = v___y_1100_;
v___y_1085_ = v___y_1094_;
v___y_1086_ = v___y_1095_;
v___y_1087_ = v___y_1101_;
goto v___jp_1076_;
}
else
{
v___y_1077_ = v___y_1096_;
v___y_1078_ = v___y_1097_;
v___y_1079_ = v___y_1090_;
v___y_1080_ = v___y_1098_;
v___y_1081_ = v___y_1091_;
v___y_1082_ = v___y_1092_;
v___y_1083_ = v___y_1099_;
v___y_1084_ = v___y_1100_;
v___y_1085_ = v___y_1094_;
v___y_1086_ = v___y_1095_;
v___y_1087_ = v___y_1093_;
goto v___jp_1076_;
}
}
v___jp_1103_:
{
if (v___y_1114_ == 0)
{
v___y_1028_ = v___y_1104_;
v___y_1029_ = v___y_1105_;
v___y_1030_ = v___y_1106_;
v___y_1031_ = v___y_1108_;
v___y_1032_ = v___y_1107_;
v___y_1033_ = v___y_1110_;
v___y_1034_ = v___y_1111_;
v___y_1035_ = v___y_1113_;
v___y_1036_ = v___y_1112_;
v___y_1037_ = v_a_1115_;
goto v___jp_1027_;
}
else
{
if (lean_obj_tag(v_a_1115_) == 0)
{
uint8_t v_contextDependent_1116_; 
v_contextDependent_1116_ = lean_ctor_get_uint8(v_a_1115_, 1);
v___y_1090_ = v___y_1106_;
v___y_1091_ = v___y_1108_;
v___y_1092_ = v___y_1110_;
v___y_1093_ = v___y_1109_;
v___y_1094_ = v___y_1113_;
v___y_1095_ = v_a_1115_;
v___y_1096_ = v___y_1104_;
v___y_1097_ = v___y_1105_;
v___y_1098_ = v___y_1107_;
v___y_1099_ = v___y_1111_;
v___y_1100_ = v___y_1112_;
v___y_1101_ = v___y_1114_;
v___y_1102_ = v_contextDependent_1116_;
goto v___jp_1089_;
}
else
{
uint8_t v_contextDependent_1117_; 
v_contextDependent_1117_ = lean_ctor_get_uint8(v_a_1115_, sizeof(void*)*2 + 1);
v___y_1090_ = v___y_1106_;
v___y_1091_ = v___y_1108_;
v___y_1092_ = v___y_1110_;
v___y_1093_ = v___y_1109_;
v___y_1094_ = v___y_1113_;
v___y_1095_ = v_a_1115_;
v___y_1096_ = v___y_1104_;
v___y_1097_ = v___y_1105_;
v___y_1098_ = v___y_1107_;
v___y_1099_ = v___y_1111_;
v___y_1100_ = v___y_1112_;
v___y_1101_ = v___y_1114_;
v___y_1102_ = v_contextDependent_1117_;
goto v___jp_1089_;
}
}
}
v___jp_1118_:
{
if (v___y_1131_ == 0)
{
lean_object* v___x_1132_; 
v___x_1132_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v___y_1124_);
v___y_1104_ = v___y_1125_;
v___y_1105_ = v___y_1126_;
v___y_1106_ = v___y_1119_;
v___y_1107_ = v___y_1127_;
v___y_1108_ = v___y_1120_;
v___y_1109_ = v___y_1121_;
v___y_1110_ = v___y_1122_;
v___y_1111_ = v___y_1128_;
v___y_1112_ = v___y_1129_;
v___y_1113_ = v___y_1123_;
v___y_1114_ = v___y_1130_;
v_a_1115_ = v___x_1132_;
goto v___jp_1103_;
}
else
{
v___y_1104_ = v___y_1125_;
v___y_1105_ = v___y_1126_;
v___y_1106_ = v___y_1119_;
v___y_1107_ = v___y_1127_;
v___y_1108_ = v___y_1120_;
v___y_1109_ = v___y_1121_;
v___y_1110_ = v___y_1122_;
v___y_1111_ = v___y_1128_;
v___y_1112_ = v___y_1129_;
v___y_1113_ = v___y_1123_;
v___y_1114_ = v___y_1130_;
v_a_1115_ = v___y_1124_;
goto v___jp_1103_;
}
}
v___jp_1133_:
{
lean_object* v___x_1149_; 
v___x_1149_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1149_, 0, v___y_1146_);
lean_ctor_set(v___x_1149_, 1, v___y_1142_);
lean_ctor_set_uint8(v___x_1149_, sizeof(void*)*2, v___y_1138_);
lean_ctor_set_uint8(v___x_1149_, sizeof(void*)*2 + 1, v___y_1148_);
v___y_1104_ = v___y_1140_;
v___y_1105_ = v___y_1141_;
v___y_1106_ = v___y_1134_;
v___y_1107_ = v___y_1143_;
v___y_1108_ = v___y_1135_;
v___y_1109_ = v___y_1136_;
v___y_1110_ = v___y_1137_;
v___y_1111_ = v___y_1144_;
v___y_1112_ = v___y_1145_;
v___y_1113_ = v___y_1139_;
v___y_1114_ = v___y_1147_;
v_a_1115_ = v___x_1149_;
goto v___jp_1103_;
}
v___jp_1150_:
{
lean_object* v___x_1166_; 
v___x_1166_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1166_, 0, v___y_1157_);
lean_ctor_set(v___x_1166_, 1, v___y_1160_);
lean_ctor_set_uint8(v___x_1166_, sizeof(void*)*2, v___y_1151_);
lean_ctor_set_uint8(v___x_1166_, sizeof(void*)*2 + 1, v___y_1165_);
v___y_1104_ = v___y_1158_;
v___y_1105_ = v___y_1159_;
v___y_1106_ = v___y_1152_;
v___y_1107_ = v___y_1161_;
v___y_1108_ = v___y_1153_;
v___y_1109_ = v___y_1154_;
v___y_1110_ = v___y_1155_;
v___y_1111_ = v___y_1162_;
v___y_1112_ = v___y_1163_;
v___y_1113_ = v___y_1156_;
v___y_1114_ = v___y_1164_;
v_a_1115_ = v___x_1166_;
goto v___jp_1103_;
}
v___jp_1167_:
{
lean_object* v___x_1170_; lean_object* v_numSteps_1171_; lean_object* v_persistentCache_1172_; lean_object* v_transientCache_1173_; lean_object* v_funext_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1184_; 
v___x_1170_ = lean_st_ref_take(v___y_1168_);
v_numSteps_1171_ = lean_ctor_get(v___x_1170_, 0);
v_persistentCache_1172_ = lean_ctor_get(v___x_1170_, 1);
v_transientCache_1173_ = lean_ctor_get(v___x_1170_, 2);
v_funext_1174_ = lean_ctor_get(v___x_1170_, 3);
v_isSharedCheck_1184_ = !lean_is_exclusive(v___x_1170_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1176_ = v___x_1170_;
v_isShared_1177_ = v_isSharedCheck_1184_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_funext_1174_);
lean_inc(v_transientCache_1173_);
lean_inc(v_persistentCache_1172_);
lean_inc(v_numSteps_1171_);
lean_dec(v___x_1170_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1184_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1178_; lean_object* v___x_1180_; 
lean_inc_ref(v___y_1169_);
v___x_1178_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0___redArg(v_transientCache_1173_, v_e_u2081_895_, v___y_1169_);
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 2, v___x_1178_);
v___x_1180_ = v___x_1176_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v_numSteps_1171_);
lean_ctor_set(v_reuseFailAlloc_1183_, 1, v_persistentCache_1172_);
lean_ctor_set(v_reuseFailAlloc_1183_, 2, v___x_1178_);
lean_ctor_set(v_reuseFailAlloc_1183_, 3, v_funext_1174_);
v___x_1180_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1181_ = lean_st_ref_put(v___y_1168_, v___x_1180_);
lean_dec(v___y_1168_);
v___x_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1182_, 0, v___y_1169_);
return v___x_1182_;
}
}
}
v___jp_1185_:
{
lean_object* v___x_1188_; lean_object* v_numSteps_1189_; lean_object* v_persistentCache_1190_; lean_object* v_transientCache_1191_; lean_object* v_funext_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1202_; 
v___x_1188_ = lean_st_ref_take(v___y_1186_);
v_numSteps_1189_ = lean_ctor_get(v___x_1188_, 0);
v_persistentCache_1190_ = lean_ctor_get(v___x_1188_, 1);
v_transientCache_1191_ = lean_ctor_get(v___x_1188_, 2);
v_funext_1192_ = lean_ctor_get(v___x_1188_, 3);
v_isSharedCheck_1202_ = !lean_is_exclusive(v___x_1188_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1194_ = v___x_1188_;
v_isShared_1195_ = v_isSharedCheck_1202_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_funext_1192_);
lean_inc(v_transientCache_1191_);
lean_inc(v_persistentCache_1190_);
lean_inc(v_numSteps_1189_);
lean_dec(v___x_1188_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1202_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1196_; lean_object* v___x_1198_; 
lean_inc_ref(v___y_1187_);
v___x_1196_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0___redArg(v_transientCache_1191_, v_e_u2081_895_, v___y_1187_);
if (v_isShared_1195_ == 0)
{
lean_ctor_set(v___x_1194_, 2, v___x_1196_);
v___x_1198_ = v___x_1194_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_numSteps_1189_);
lean_ctor_set(v_reuseFailAlloc_1201_, 1, v_persistentCache_1190_);
lean_ctor_set(v_reuseFailAlloc_1201_, 2, v___x_1196_);
lean_ctor_set(v_reuseFailAlloc_1201_, 3, v_funext_1192_);
v___x_1198_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1199_ = lean_st_ref_put(v___y_1186_, v___x_1198_);
lean_dec(v___y_1186_);
v___x_1200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1200_, 0, v___y_1187_);
return v___x_1200_;
}
}
}
v_resetjp_1210_:
{
lean_object* v_maxRecDepth_1213_; lean_object* v___y_1215_; lean_object* v___y_1216_; lean_object* v___y_1217_; lean_object* v___y_1218_; lean_object* v___y_1219_; lean_object* v___y_1220_; lean_object* v___y_1221_; lean_object* v___y_1222_; lean_object* v___y_1223_; lean_object* v___y_1224_; lean_object* v___y_1324_; lean_object* v___y_1325_; lean_object* v___y_1326_; lean_object* v___y_1327_; lean_object* v___y_1328_; lean_object* v___y_1329_; lean_object* v___y_1330_; lean_object* v___y_1331_; lean_object* v___y_1332_; lean_object* v___y_1333_; lean_object* v___y_1334_; lean_object* v___x_1472_; uint8_t v___x_1473_; 
v_maxRecDepth_1213_ = lean_ctor_get(v_toCold_1203_, 3);
v___x_1472_ = lean_unsigned_to_nat(0u);
v___x_1473_ = lean_nat_dec_eq(v_maxRecDepth_1213_, v___x_1472_);
if (v___x_1473_ == 0)
{
uint8_t v___x_1474_; 
v___x_1474_ = lean_nat_dec_eq(v_currRecDepth_1204_, v_maxRecDepth_1213_);
if (v___x_1474_ == 0)
{
goto v___jp_1442_;
}
else
{
lean_object* v___x_1475_; 
lean_del_object(v___x_1211_);
lean_dec(v_currRecDepth_1204_);
lean_dec_ref(v_toCold_1203_);
lean_dec(v_a_904_);
lean_dec(v_a_902_);
lean_dec_ref(v_a_901_);
lean_dec(v_a_900_);
lean_dec_ref(v_a_899_);
lean_dec(v_a_898_);
lean_dec_ref(v_a_897_);
lean_dec(v_a_896_);
lean_dec_ref(v_e_u2081_895_);
v___x_1475_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__3___redArg(v_ref_1205_);
return v___x_1475_;
}
}
else
{
goto v___jp_1442_;
}
v___jp_1214_:
{
lean_object* v___x_1225_; lean_object* v_persistentCache_1226_; lean_object* v_transientCache_1227_; lean_object* v_funext_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1321_; 
v___x_1225_ = lean_st_ref_take(v___y_1218_);
v_persistentCache_1226_ = lean_ctor_get(v___x_1225_, 1);
v_transientCache_1227_ = lean_ctor_get(v___x_1225_, 2);
v_funext_1228_ = lean_ctor_get(v___x_1225_, 3);
v_isSharedCheck_1321_ = !lean_is_exclusive(v___x_1225_);
if (v_isSharedCheck_1321_ == 0)
{
lean_object* v_unused_1322_; 
v_unused_1322_ = lean_ctor_get(v___x_1225_, 0);
lean_dec(v_unused_1322_);
v___x_1230_ = v___x_1225_;
v_isShared_1231_ = v_isSharedCheck_1321_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_funext_1228_);
lean_inc(v_transientCache_1227_);
lean_inc(v_persistentCache_1226_);
lean_dec(v___x_1225_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1321_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1233_; 
if (v_isShared_1231_ == 0)
{
lean_ctor_set(v___x_1230_, 0, v___y_1215_);
v___x_1233_ = v___x_1230_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v___y_1215_);
lean_ctor_set(v_reuseFailAlloc_1320_, 1, v_persistentCache_1226_);
lean_ctor_set(v_reuseFailAlloc_1320_, 2, v_transientCache_1227_);
lean_ctor_set(v_reuseFailAlloc_1320_, 3, v_funext_1228_);
v___x_1233_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
lean_object* v___x_1234_; lean_object* v_pre_1235_; lean_object* v___x_1236_; 
v___x_1234_ = lean_st_ref_put(v___y_1218_, v___x_1233_);
v_pre_1235_ = lean_ctor_get(v___y_1216_, 0);
lean_inc_ref(v_pre_1235_);
lean_inc(v___y_1224_);
lean_inc_ref(v___y_1223_);
lean_inc(v___y_1222_);
lean_inc_ref(v___y_1221_);
lean_inc(v___y_1220_);
lean_inc_ref(v___y_1219_);
lean_inc(v___y_1218_);
lean_inc_ref(v___y_1217_);
lean_inc(v___y_1216_);
lean_inc_ref(v_e_u2081_895_);
v___x_1236_ = lean_apply_11(v_pre_1235_, v_e_u2081_895_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_, lean_box(0));
if (lean_obj_tag(v___x_1236_) == 0)
{
lean_object* v_a_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1319_; 
v_a_1237_ = lean_ctor_get(v___x_1236_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1236_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1239_ = v___x_1236_;
v_isShared_1240_ = v_isSharedCheck_1319_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_a_1237_);
lean_dec(v___x_1236_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1319_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
if (lean_obj_tag(v_a_1237_) == 0)
{
uint8_t v_done_1241_; 
v_done_1241_ = lean_ctor_get_uint8(v_a_1237_, 0);
if (v_done_1241_ == 0)
{
uint8_t v_contextDependent_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
lean_del_object(v___x_1239_);
v_contextDependent_1242_ = lean_ctor_get_uint8(v_a_1237_, 1);
lean_dec_ref_known(v_a_1237_, 0);
v___x_1243_ = lean_box(0);
lean_inc_ref(v_e_u2081_895_);
v___x_1244_ = l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep(v_e_u2081_895_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_);
if (lean_obj_tag(v___x_1244_) == 0)
{
lean_object* v_a_1245_; 
v_a_1245_ = lean_ctor_get(v___x_1244_, 0);
lean_inc(v_a_1245_);
lean_dec_ref_known(v___x_1244_, 1);
if (lean_obj_tag(v_a_1245_) == 0)
{
uint8_t v_done_1246_; 
v_done_1246_ = lean_ctor_get_uint8(v_a_1245_, 0);
if (v_done_1246_ == 0)
{
uint8_t v_contextDependent_1247_; lean_object* v___x_1248_; 
v_contextDependent_1247_ = lean_ctor_get_uint8(v_a_1245_, 1);
lean_dec_ref_known(v_a_1245_, 0);
lean_inc_ref(v_e_u2081_895_);
v___x_1248_ = l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___lam__0(v___x_1243_, v_e_u2081_895_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_);
if (lean_obj_tag(v___x_1248_) == 0)
{
if (v_contextDependent_1247_ == 0)
{
lean_object* v_a_1249_; 
v_a_1249_ = lean_ctor_get(v___x_1248_, 0);
lean_inc(v_a_1249_);
lean_dec_ref_known(v___x_1248_, 1);
v___y_1104_ = v___y_1219_;
v___y_1105_ = v___y_1224_;
v___y_1106_ = v___y_1223_;
v___y_1107_ = v___y_1218_;
v___y_1108_ = v___y_1217_;
v___y_1109_ = v_done_1241_;
v___y_1110_ = v___y_1216_;
v___y_1111_ = v___y_1221_;
v___y_1112_ = v___y_1220_;
v___y_1113_ = v___y_1222_;
v___y_1114_ = v_contextDependent_1242_;
v_a_1115_ = v_a_1249_;
goto v___jp_1103_;
}
else
{
lean_object* v_a_1250_; 
v_a_1250_ = lean_ctor_get(v___x_1248_, 0);
lean_inc(v_a_1250_);
lean_dec_ref_known(v___x_1248_, 1);
if (lean_obj_tag(v_a_1250_) == 0)
{
uint8_t v_contextDependent_1251_; 
v_contextDependent_1251_ = lean_ctor_get_uint8(v_a_1250_, 1);
v___y_1119_ = v___y_1223_;
v___y_1120_ = v___y_1217_;
v___y_1121_ = v_done_1241_;
v___y_1122_ = v___y_1216_;
v___y_1123_ = v___y_1222_;
v___y_1124_ = v_a_1250_;
v___y_1125_ = v___y_1219_;
v___y_1126_ = v___y_1224_;
v___y_1127_ = v___y_1218_;
v___y_1128_ = v___y_1221_;
v___y_1129_ = v___y_1220_;
v___y_1130_ = v_contextDependent_1242_;
v___y_1131_ = v_contextDependent_1251_;
goto v___jp_1118_;
}
else
{
uint8_t v_contextDependent_1252_; 
v_contextDependent_1252_ = lean_ctor_get_uint8(v_a_1250_, sizeof(void*)*2 + 1);
v___y_1119_ = v___y_1223_;
v___y_1120_ = v___y_1217_;
v___y_1121_ = v_done_1241_;
v___y_1122_ = v___y_1216_;
v___y_1123_ = v___y_1222_;
v___y_1124_ = v_a_1250_;
v___y_1125_ = v___y_1219_;
v___y_1126_ = v___y_1224_;
v___y_1127_ = v___y_1218_;
v___y_1128_ = v___y_1221_;
v___y_1129_ = v___y_1220_;
v___y_1130_ = v_contextDependent_1242_;
v___y_1131_ = v_contextDependent_1252_;
goto v___jp_1118_;
}
}
}
else
{
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec_ref(v_e_u2081_895_);
return v___x_1248_;
}
}
else
{
v___y_1104_ = v___y_1219_;
v___y_1105_ = v___y_1224_;
v___y_1106_ = v___y_1223_;
v___y_1107_ = v___y_1218_;
v___y_1108_ = v___y_1217_;
v___y_1109_ = v_done_1241_;
v___y_1110_ = v___y_1216_;
v___y_1111_ = v___y_1221_;
v___y_1112_ = v___y_1220_;
v___y_1113_ = v___y_1222_;
v___y_1114_ = v_contextDependent_1242_;
v_a_1115_ = v_a_1245_;
goto v___jp_1103_;
}
}
else
{
uint8_t v_done_1253_; 
v_done_1253_ = lean_ctor_get_uint8(v_a_1245_, sizeof(void*)*2);
if (v_done_1253_ == 0)
{
lean_object* v_e_x27_1254_; lean_object* v_proof_1255_; uint8_t v_contextDependent_1256_; lean_object* v___x_1257_; 
v_e_x27_1254_ = lean_ctor_get(v_a_1245_, 0);
lean_inc_ref_n(v_e_x27_1254_, 2);
v_proof_1255_ = lean_ctor_get(v_a_1245_, 1);
lean_inc_ref(v_proof_1255_);
v_contextDependent_1256_ = lean_ctor_get_uint8(v_a_1245_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1245_, 2);
v___x_1257_ = l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___lam__0(v___x_1243_, v_e_x27_1254_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_);
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_object* v_a_1258_; 
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
lean_inc(v_a_1258_);
lean_dec_ref_known(v___x_1257_, 1);
if (lean_obj_tag(v_a_1258_) == 0)
{
if (v_contextDependent_1256_ == 0)
{
uint8_t v_done_1259_; uint8_t v_contextDependent_1260_; 
v_done_1259_ = lean_ctor_get_uint8(v_a_1258_, 0);
v_contextDependent_1260_ = lean_ctor_get_uint8(v_a_1258_, 1);
lean_dec_ref_known(v_a_1258_, 0);
v___y_1134_ = v___y_1223_;
v___y_1135_ = v___y_1217_;
v___y_1136_ = v_done_1241_;
v___y_1137_ = v___y_1216_;
v___y_1138_ = v_done_1259_;
v___y_1139_ = v___y_1222_;
v___y_1140_ = v___y_1219_;
v___y_1141_ = v___y_1224_;
v___y_1142_ = v_proof_1255_;
v___y_1143_ = v___y_1218_;
v___y_1144_ = v___y_1221_;
v___y_1145_ = v___y_1220_;
v___y_1146_ = v_e_x27_1254_;
v___y_1147_ = v_contextDependent_1242_;
v___y_1148_ = v_contextDependent_1260_;
goto v___jp_1133_;
}
else
{
uint8_t v_done_1261_; 
v_done_1261_ = lean_ctor_get_uint8(v_a_1258_, 0);
lean_dec_ref_known(v_a_1258_, 0);
v___y_1134_ = v___y_1223_;
v___y_1135_ = v___y_1217_;
v___y_1136_ = v_done_1241_;
v___y_1137_ = v___y_1216_;
v___y_1138_ = v_done_1261_;
v___y_1139_ = v___y_1222_;
v___y_1140_ = v___y_1219_;
v___y_1141_ = v___y_1224_;
v___y_1142_ = v_proof_1255_;
v___y_1143_ = v___y_1218_;
v___y_1144_ = v___y_1221_;
v___y_1145_ = v___y_1220_;
v___y_1146_ = v_e_x27_1254_;
v___y_1147_ = v_contextDependent_1242_;
v___y_1148_ = v_contextDependent_1256_;
goto v___jp_1133_;
}
}
else
{
lean_object* v_e_x27_1262_; lean_object* v_proof_1263_; uint8_t v_done_1264_; uint8_t v_contextDependent_1265_; lean_object* v___x_1266_; 
v_e_x27_1262_ = lean_ctor_get(v_a_1258_, 0);
lean_inc_ref_n(v_e_x27_1262_, 2);
v_proof_1263_ = lean_ctor_get(v_a_1258_, 1);
lean_inc_ref(v_proof_1263_);
v_done_1264_ = lean_ctor_get_uint8(v_a_1258_, sizeof(void*)*2);
v_contextDependent_1265_ = lean_ctor_get_uint8(v_a_1258_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1258_, 2);
lean_inc_ref(v_e_u2081_895_);
v___x_1266_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v_e_u2081_895_, v_e_x27_1254_, v_proof_1255_, v_e_x27_1262_, v_proof_1263_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_);
if (lean_obj_tag(v___x_1266_) == 0)
{
if (v_contextDependent_1256_ == 0)
{
lean_object* v_a_1267_; 
v_a_1267_ = lean_ctor_get(v___x_1266_, 0);
lean_inc(v_a_1267_);
lean_dec_ref_known(v___x_1266_, 1);
v___y_1151_ = v_done_1264_;
v___y_1152_ = v___y_1223_;
v___y_1153_ = v___y_1217_;
v___y_1154_ = v_done_1241_;
v___y_1155_ = v___y_1216_;
v___y_1156_ = v___y_1222_;
v___y_1157_ = v_e_x27_1262_;
v___y_1158_ = v___y_1219_;
v___y_1159_ = v___y_1224_;
v___y_1160_ = v_a_1267_;
v___y_1161_ = v___y_1218_;
v___y_1162_ = v___y_1221_;
v___y_1163_ = v___y_1220_;
v___y_1164_ = v_contextDependent_1242_;
v___y_1165_ = v_contextDependent_1265_;
goto v___jp_1150_;
}
else
{
lean_object* v_a_1268_; 
v_a_1268_ = lean_ctor_get(v___x_1266_, 0);
lean_inc(v_a_1268_);
lean_dec_ref_known(v___x_1266_, 1);
v___y_1151_ = v_done_1264_;
v___y_1152_ = v___y_1223_;
v___y_1153_ = v___y_1217_;
v___y_1154_ = v_done_1241_;
v___y_1155_ = v___y_1216_;
v___y_1156_ = v___y_1222_;
v___y_1157_ = v_e_x27_1262_;
v___y_1158_ = v___y_1219_;
v___y_1159_ = v___y_1224_;
v___y_1160_ = v_a_1268_;
v___y_1161_ = v___y_1218_;
v___y_1162_ = v___y_1221_;
v___y_1163_ = v___y_1220_;
v___y_1164_ = v_contextDependent_1242_;
v___y_1165_ = v_contextDependent_1256_;
goto v___jp_1150_;
}
}
else
{
lean_object* v_a_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1276_; 
lean_dec_ref(v_e_x27_1262_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec_ref(v_e_u2081_895_);
v_a_1269_ = lean_ctor_get(v___x_1266_, 0);
v_isSharedCheck_1276_ = !lean_is_exclusive(v___x_1266_);
if (v_isSharedCheck_1276_ == 0)
{
v___x_1271_ = v___x_1266_;
v_isShared_1272_ = v_isSharedCheck_1276_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_a_1269_);
lean_dec(v___x_1266_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1276_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v___x_1274_; 
if (v_isShared_1272_ == 0)
{
v___x_1274_ = v___x_1271_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v_a_1269_);
v___x_1274_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
return v___x_1274_;
}
}
}
}
}
else
{
lean_dec_ref(v_proof_1255_);
lean_dec_ref(v_e_x27_1254_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec_ref(v_e_u2081_895_);
return v___x_1257_;
}
}
else
{
v___y_1104_ = v___y_1219_;
v___y_1105_ = v___y_1224_;
v___y_1106_ = v___y_1223_;
v___y_1107_ = v___y_1218_;
v___y_1108_ = v___y_1217_;
v___y_1109_ = v_done_1241_;
v___y_1110_ = v___y_1216_;
v___y_1111_ = v___y_1221_;
v___y_1112_ = v___y_1220_;
v___y_1113_ = v___y_1222_;
v___y_1114_ = v_contextDependent_1242_;
v_a_1115_ = v_a_1245_;
goto v___jp_1103_;
}
}
}
else
{
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec_ref(v_e_u2081_895_);
return v___x_1244_;
}
}
else
{
uint8_t v_contextDependent_1277_; 
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
v_contextDependent_1277_ = lean_ctor_get_uint8(v_a_1237_, 1);
if (v_contextDependent_1277_ == 0)
{
uint8_t v___x_1278_; 
v___x_1278_ = l_Lean_Expr_hasMVar(v_e_u2081_895_);
if (v___x_1278_ == 0)
{
lean_object* v___x_1279_; lean_object* v_numSteps_1280_; lean_object* v_persistentCache_1281_; lean_object* v_transientCache_1282_; lean_object* v_funext_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1295_; 
v___x_1279_ = lean_st_ref_take(v___y_1218_);
v_numSteps_1280_ = lean_ctor_get(v___x_1279_, 0);
v_persistentCache_1281_ = lean_ctor_get(v___x_1279_, 1);
v_transientCache_1282_ = lean_ctor_get(v___x_1279_, 2);
v_funext_1283_ = lean_ctor_get(v___x_1279_, 3);
v_isSharedCheck_1295_ = !lean_is_exclusive(v___x_1279_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1285_ = v___x_1279_;
v_isShared_1286_ = v_isSharedCheck_1295_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_funext_1283_);
lean_inc(v_transientCache_1282_);
lean_inc(v_persistentCache_1281_);
lean_inc(v_numSteps_1280_);
lean_dec(v___x_1279_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1295_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1287_; lean_object* v___x_1289_; 
lean_inc_ref(v_a_1237_);
v___x_1287_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0___redArg(v_persistentCache_1281_, v_e_u2081_895_, v_a_1237_);
if (v_isShared_1286_ == 0)
{
lean_ctor_set(v___x_1285_, 1, v___x_1287_);
v___x_1289_ = v___x_1285_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v_numSteps_1280_);
lean_ctor_set(v_reuseFailAlloc_1294_, 1, v___x_1287_);
lean_ctor_set(v_reuseFailAlloc_1294_, 2, v_transientCache_1282_);
lean_ctor_set(v_reuseFailAlloc_1294_, 3, v_funext_1283_);
v___x_1289_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
lean_object* v___x_1290_; lean_object* v___x_1292_; 
v___x_1290_ = lean_st_ref_put(v___y_1218_, v___x_1289_);
lean_dec(v___y_1218_);
if (v_isShared_1240_ == 0)
{
v___x_1292_ = v___x_1239_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v_a_1237_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
return v___x_1292_;
}
}
}
}
else
{
lean_del_object(v___x_1239_);
v___y_1168_ = v___y_1218_;
v___y_1169_ = v_a_1237_;
goto v___jp_1167_;
}
}
else
{
lean_del_object(v___x_1239_);
v___y_1168_ = v___y_1218_;
v___y_1169_ = v_a_1237_;
goto v___jp_1167_;
}
}
}
else
{
uint8_t v_done_1296_; 
v_done_1296_ = lean_ctor_get_uint8(v_a_1237_, sizeof(void*)*2);
if (v_done_1296_ == 0)
{
lean_object* v_e_x27_1297_; lean_object* v_proof_1298_; uint8_t v_contextDependent_1299_; 
lean_del_object(v___x_1239_);
v_e_x27_1297_ = lean_ctor_get(v_a_1237_, 0);
lean_inc_ref(v_e_x27_1297_);
v_proof_1298_ = lean_ctor_get(v_a_1237_, 1);
lean_inc_ref(v_proof_1298_);
v_contextDependent_1299_ = lean_ctor_get_uint8(v_a_1237_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1237_, 2);
v_e_u2082_959_ = v_e_x27_1297_;
v_h_u2081_960_ = v_proof_1298_;
v_cd_u2081_961_ = v_contextDependent_1299_;
v___y_962_ = v___y_1216_;
v___y_963_ = v___y_1217_;
v___y_964_ = v___y_1218_;
v___y_965_ = v___y_1219_;
v___y_966_ = v___y_1220_;
v___y_967_ = v___y_1221_;
v___y_968_ = v___y_1222_;
v___y_969_ = v___y_1223_;
v___y_970_ = v___y_1224_;
goto v___jp_958_;
}
else
{
uint8_t v_contextDependent_1300_; 
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
v_contextDependent_1300_ = lean_ctor_get_uint8(v_a_1237_, sizeof(void*)*2 + 1);
if (v_contextDependent_1300_ == 0)
{
uint8_t v___x_1301_; 
v___x_1301_ = l_Lean_Expr_hasMVar(v_e_u2081_895_);
if (v___x_1301_ == 0)
{
lean_object* v___x_1302_; lean_object* v_numSteps_1303_; lean_object* v_persistentCache_1304_; lean_object* v_transientCache_1305_; lean_object* v_funext_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1318_; 
v___x_1302_ = lean_st_ref_take(v___y_1218_);
v_numSteps_1303_ = lean_ctor_get(v___x_1302_, 0);
v_persistentCache_1304_ = lean_ctor_get(v___x_1302_, 1);
v_transientCache_1305_ = lean_ctor_get(v___x_1302_, 2);
v_funext_1306_ = lean_ctor_get(v___x_1302_, 3);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1302_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1308_ = v___x_1302_;
v_isShared_1309_ = v_isSharedCheck_1318_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_funext_1306_);
lean_inc(v_transientCache_1305_);
lean_inc(v_persistentCache_1304_);
lean_inc(v_numSteps_1303_);
lean_dec(v___x_1302_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1318_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1310_; lean_object* v___x_1312_; 
lean_inc_ref(v_a_1237_);
v___x_1310_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0___redArg(v_persistentCache_1304_, v_e_u2081_895_, v_a_1237_);
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 1, v___x_1310_);
v___x_1312_ = v___x_1308_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_numSteps_1303_);
lean_ctor_set(v_reuseFailAlloc_1317_, 1, v___x_1310_);
lean_ctor_set(v_reuseFailAlloc_1317_, 2, v_transientCache_1305_);
lean_ctor_set(v_reuseFailAlloc_1317_, 3, v_funext_1306_);
v___x_1312_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
lean_object* v___x_1313_; lean_object* v___x_1315_; 
v___x_1313_ = lean_st_ref_put(v___y_1218_, v___x_1312_);
lean_dec(v___y_1218_);
if (v_isShared_1240_ == 0)
{
v___x_1315_ = v___x_1239_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v_a_1237_);
v___x_1315_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
return v___x_1315_;
}
}
}
}
else
{
lean_del_object(v___x_1239_);
v___y_1186_ = v___y_1218_;
v___y_1187_ = v_a_1237_;
goto v___jp_1185_;
}
}
else
{
lean_del_object(v___x_1239_);
v___y_1186_ = v___y_1218_;
v___y_1187_ = v_a_1237_;
goto v___jp_1185_;
}
}
}
}
}
else
{
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec_ref(v_e_u2081_895_);
return v___x_1236_;
}
}
}
}
v___jp_1323_:
{
lean_object* v___x_1335_; lean_object* v_persistentCache_1336_; lean_object* v___x_1337_; 
v___x_1335_ = lean_st_ref_get(v___y_1328_);
v_persistentCache_1336_ = lean_ctor_get(v___x_1335_, 1);
lean_inc_ref(v_persistentCache_1336_);
lean_dec(v___x_1335_);
v___x_1337_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1___redArg(v_persistentCache_1336_, v_e_u2081_895_);
lean_dec_ref(v_persistentCache_1336_);
if (lean_obj_tag(v___x_1337_) == 1)
{
lean_object* v_toCold_1338_; lean_object* v_options_1339_; uint8_t v_hasTrace_1340_; 
lean_dec(v___y_1330_);
lean_dec_ref(v___y_1329_);
lean_dec(v___y_1328_);
lean_dec_ref(v___y_1327_);
lean_dec(v___y_1326_);
lean_dec(v___y_1324_);
v_toCold_1338_ = lean_ctor_get(v___y_1333_, 0);
v_options_1339_ = lean_ctor_get(v_toCold_1338_, 2);
v_hasTrace_1340_ = lean_ctor_get_uint8(v_options_1339_, sizeof(void*)*1);
if (v_hasTrace_1340_ == 0)
{
lean_object* v_val_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1348_; 
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
lean_dec(v___y_1332_);
lean_dec_ref(v___y_1331_);
lean_dec_ref(v_e_u2081_895_);
v_val_1341_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1343_ = v___x_1337_;
v_isShared_1344_ = v_isSharedCheck_1348_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_val_1341_);
lean_dec(v___x_1337_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1348_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v___x_1346_; 
if (v_isShared_1344_ == 0)
{
lean_ctor_set_tag(v___x_1343_, 0);
v___x_1346_ = v___x_1343_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v_val_1341_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
return v___x_1346_;
}
}
}
else
{
lean_object* v_val_1349_; lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1380_; 
v_val_1349_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1351_ = v___x_1337_;
v_isShared_1352_ = v_isSharedCheck_1380_;
goto v_resetjp_1350_;
}
else
{
lean_inc(v_val_1349_);
lean_dec(v___x_1337_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1380_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
lean_object* v_inheritedTraceOptions_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; uint8_t v___x_1356_; 
v_inheritedTraceOptions_1353_ = lean_ctor_get(v_toCold_1338_, 11);
v___x_1354_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_));
v___x_1355_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__2, &l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__2);
v___x_1356_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1353_, v_options_1339_, v___x_1355_);
if (v___x_1356_ == 0)
{
lean_object* v___x_1358_; 
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
lean_dec(v___y_1332_);
lean_dec_ref(v___y_1331_);
lean_dec_ref(v_e_u2081_895_);
if (v_isShared_1352_ == 0)
{
lean_ctor_set_tag(v___x_1351_, 0);
v___x_1358_ = v___x_1351_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v_val_1349_);
v___x_1358_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
return v___x_1358_;
}
}
else
{
lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
lean_del_object(v___x_1351_);
v___x_1360_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__4, &l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__4_once, _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__4);
v___x_1361_ = l_Lean_MessageData_ofExpr(v_e_u2081_895_);
v___x_1362_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1360_);
lean_ctor_set(v___x_1362_, 1, v___x_1361_);
v___x_1363_ = l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg(v___x_1354_, v___x_1362_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_);
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
lean_dec(v___y_1332_);
lean_dec_ref(v___y_1331_);
if (lean_obj_tag(v___x_1363_) == 0)
{
lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1370_; 
v_isSharedCheck_1370_ = !lean_is_exclusive(v___x_1363_);
if (v_isSharedCheck_1370_ == 0)
{
lean_object* v_unused_1371_; 
v_unused_1371_ = lean_ctor_get(v___x_1363_, 0);
lean_dec(v_unused_1371_);
v___x_1365_ = v___x_1363_;
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
else
{
lean_dec(v___x_1363_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1368_; 
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 0, v_val_1349_);
v___x_1368_ = v___x_1365_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_val_1349_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
}
else
{
lean_object* v_a_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1379_; 
lean_dec(v_val_1349_);
v_a_1372_ = lean_ctor_get(v___x_1363_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1363_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1374_ = v___x_1363_;
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_a_1372_);
lean_dec(v___x_1363_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1377_; 
if (v_isShared_1375_ == 0)
{
v___x_1377_ = v___x_1374_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_a_1372_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1381_; lean_object* v_transientCache_1382_; lean_object* v___x_1383_; 
lean_dec(v___x_1337_);
v___x_1381_ = lean_st_ref_get(v___y_1328_);
v_transientCache_1382_ = lean_ctor_get(v___x_1381_, 2);
lean_inc_ref(v_transientCache_1382_);
lean_dec(v___x_1381_);
v___x_1383_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1___redArg(v_transientCache_1382_, v_e_u2081_895_);
lean_dec_ref(v_transientCache_1382_);
if (lean_obj_tag(v___x_1383_) == 1)
{
lean_object* v_toCold_1384_; lean_object* v_options_1385_; uint8_t v_hasTrace_1386_; 
lean_dec(v___y_1330_);
lean_dec_ref(v___y_1329_);
lean_dec(v___y_1328_);
lean_dec_ref(v___y_1327_);
lean_dec(v___y_1326_);
lean_dec(v___y_1324_);
v_toCold_1384_ = lean_ctor_get(v___y_1333_, 0);
v_options_1385_ = lean_ctor_get(v_toCold_1384_, 2);
v_hasTrace_1386_ = lean_ctor_get_uint8(v_options_1385_, sizeof(void*)*1);
if (v_hasTrace_1386_ == 0)
{
lean_object* v_val_1387_; lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1394_; 
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
lean_dec(v___y_1332_);
lean_dec_ref(v___y_1331_);
lean_dec_ref(v_e_u2081_895_);
v_val_1387_ = lean_ctor_get(v___x_1383_, 0);
v_isSharedCheck_1394_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1394_ == 0)
{
v___x_1389_ = v___x_1383_;
v_isShared_1390_ = v_isSharedCheck_1394_;
goto v_resetjp_1388_;
}
else
{
lean_inc(v_val_1387_);
lean_dec(v___x_1383_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1394_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
lean_object* v___x_1392_; 
if (v_isShared_1390_ == 0)
{
lean_ctor_set_tag(v___x_1389_, 0);
v___x_1392_ = v___x_1389_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v_val_1387_);
v___x_1392_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
return v___x_1392_;
}
}
}
else
{
lean_object* v_val_1395_; lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1426_; 
v_val_1395_ = lean_ctor_get(v___x_1383_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1397_ = v___x_1383_;
v_isShared_1398_ = v_isSharedCheck_1426_;
goto v_resetjp_1396_;
}
else
{
lean_inc(v_val_1395_);
lean_dec(v___x_1383_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1426_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v_inheritedTraceOptions_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; uint8_t v___x_1402_; 
v_inheritedTraceOptions_1399_ = lean_ctor_get(v_toCold_1384_, 11);
v___x_1400_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__4_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_));
v___x_1401_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__2, &l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__2);
v___x_1402_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1399_, v_options_1385_, v___x_1401_);
if (v___x_1402_ == 0)
{
lean_object* v___x_1404_; 
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
lean_dec(v___y_1332_);
lean_dec_ref(v___y_1331_);
lean_dec_ref(v_e_u2081_895_);
if (v_isShared_1398_ == 0)
{
lean_ctor_set_tag(v___x_1397_, 0);
v___x_1404_ = v___x_1397_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_val_1395_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
return v___x_1404_;
}
}
else
{
lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
lean_del_object(v___x_1397_);
v___x_1406_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__6, &l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__6_once, _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__6);
v___x_1407_ = l_Lean_MessageData_ofExpr(v_e_u2081_895_);
v___x_1408_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1408_, 0, v___x_1406_);
lean_ctor_set(v___x_1408_, 1, v___x_1407_);
v___x_1409_ = l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg(v___x_1400_, v___x_1408_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_);
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
lean_dec(v___y_1332_);
lean_dec_ref(v___y_1331_);
if (lean_obj_tag(v___x_1409_) == 0)
{
lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1416_; 
v_isSharedCheck_1416_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1416_ == 0)
{
lean_object* v_unused_1417_; 
v_unused_1417_ = lean_ctor_get(v___x_1409_, 0);
lean_dec(v_unused_1417_);
v___x_1411_ = v___x_1409_;
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
else
{
lean_dec(v___x_1409_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1414_; 
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 0, v_val_1395_);
v___x_1414_ = v___x_1411_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_val_1395_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
}
else
{
lean_object* v_a_1418_; lean_object* v___x_1420_; uint8_t v_isShared_1421_; uint8_t v_isSharedCheck_1425_; 
lean_dec(v_val_1395_);
v_a_1418_ = lean_ctor_get(v___x_1409_, 0);
v_isSharedCheck_1425_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1425_ == 0)
{
v___x_1420_ = v___x_1409_;
v_isShared_1421_ = v_isSharedCheck_1425_;
goto v_resetjp_1419_;
}
else
{
lean_inc(v_a_1418_);
lean_dec(v___x_1409_);
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
}
}
}
else
{
lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; uint8_t v___x_1431_; 
lean_dec(v___x_1383_);
v___x_1427_ = lean_nat_add(v___y_1324_, v___y_1325_);
lean_dec(v___y_1324_);
v___x_1428_ = lean_unsigned_to_nat(1000u);
v___x_1429_ = lean_nat_mod(v___x_1427_, v___x_1428_);
v___x_1430_ = lean_unsigned_to_nat(0u);
v___x_1431_ = lean_nat_dec_eq(v___x_1429_, v___x_1430_);
lean_dec(v___x_1429_);
if (v___x_1431_ == 0)
{
v___y_1215_ = v___x_1427_;
v___y_1216_ = v___y_1326_;
v___y_1217_ = v___y_1327_;
v___y_1218_ = v___y_1328_;
v___y_1219_ = v___y_1329_;
v___y_1220_ = v___y_1330_;
v___y_1221_ = v___y_1331_;
v___y_1222_ = v___y_1332_;
v___y_1223_ = v___y_1333_;
v___y_1224_ = v___y_1334_;
goto v___jp_1214_;
}
else
{
lean_object* v___x_1432_; lean_object* v___x_1433_; 
v___x_1432_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_));
v___x_1433_ = l_Lean_Core_checkSystem(v___x_1432_, v___y_1333_, v___y_1334_);
if (lean_obj_tag(v___x_1433_) == 0)
{
lean_dec_ref_known(v___x_1433_, 1);
v___y_1215_ = v___x_1427_;
v___y_1216_ = v___y_1326_;
v___y_1217_ = v___y_1327_;
v___y_1218_ = v___y_1328_;
v___y_1219_ = v___y_1329_;
v___y_1220_ = v___y_1330_;
v___y_1221_ = v___y_1331_;
v___y_1222_ = v___y_1332_;
v___y_1223_ = v___y_1333_;
v___y_1224_ = v___y_1334_;
goto v___jp_1214_;
}
else
{
lean_object* v_a_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1441_; 
lean_dec(v___x_1427_);
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
lean_dec(v___y_1332_);
lean_dec_ref(v___y_1331_);
lean_dec(v___y_1330_);
lean_dec_ref(v___y_1329_);
lean_dec(v___y_1328_);
lean_dec_ref(v___y_1327_);
lean_dec(v___y_1326_);
lean_dec_ref(v_e_u2081_895_);
v_a_1434_ = lean_ctor_get(v___x_1433_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1436_ = v___x_1433_;
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_a_1434_);
lean_dec(v___x_1433_);
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
}
}
}
v___jp_1442_:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1446_; 
v___x_1443_ = lean_unsigned_to_nat(1u);
v___x_1444_ = lean_nat_add(v_currRecDepth_1204_, v___x_1443_);
lean_dec(v_currRecDepth_1204_);
if (v_isShared_1212_ == 0)
{
lean_ctor_set(v___x_1211_, 1, v___x_1444_);
v___x_1446_ = v___x_1211_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v_toCold_1203_);
lean_ctor_set(v_reuseFailAlloc_1471_, 1, v___x_1444_);
lean_ctor_set(v_reuseFailAlloc_1471_, 2, v_ref_1205_);
lean_ctor_set_uint16(v_reuseFailAlloc_1471_, sizeof(void*)*3, v_optionFlags_1206_);
lean_ctor_set_uint8(v_reuseFailAlloc_1471_, sizeof(void*)*3 + 2, v_suppressElabErrors_1207_);
lean_ctor_set_uint8(v_reuseFailAlloc_1471_, sizeof(void*)*3 + 3, v_checkDeprecated_1208_);
lean_ctor_set_uint8(v_reuseFailAlloc_1471_, sizeof(void*)*3 + 4, v_isRecordingDeps_1209_);
v___x_1446_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
lean_object* v___x_1447_; lean_object* v_numSteps_1448_; lean_object* v___x_1449_; 
v___x_1447_ = lean_st_ref_get(v_a_898_);
v_numSteps_1448_ = lean_ctor_get(v___x_1447_, 0);
lean_inc(v_numSteps_1448_);
lean_dec(v___x_1447_);
v___x_1449_ = l_Lean_Meta_Sym_Simp_getConfig___redArg(v_a_897_);
if (lean_obj_tag(v___x_1449_) == 0)
{
lean_object* v_a_1450_; lean_object* v_maxSteps_1451_; uint8_t v___x_1452_; 
v_a_1450_ = lean_ctor_get(v___x_1449_, 0);
lean_inc(v_a_1450_);
lean_dec_ref_known(v___x_1449_, 1);
v_maxSteps_1451_ = lean_ctor_get(v_a_1450_, 0);
lean_inc(v_maxSteps_1451_);
lean_dec(v_a_1450_);
v___x_1452_ = lean_nat_dec_le(v_maxSteps_1451_, v_numSteps_1448_);
lean_dec(v_maxSteps_1451_);
if (v___x_1452_ == 0)
{
v___y_1324_ = v_numSteps_1448_;
v___y_1325_ = v___x_1443_;
v___y_1326_ = v_a_896_;
v___y_1327_ = v_a_897_;
v___y_1328_ = v_a_898_;
v___y_1329_ = v_a_899_;
v___y_1330_ = v_a_900_;
v___y_1331_ = v_a_901_;
v___y_1332_ = v_a_902_;
v___y_1333_ = v___x_1446_;
v___y_1334_ = v_a_904_;
goto v___jp_1323_;
}
else
{
lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1462_; 
lean_dec(v_numSteps_1448_);
lean_dec(v_a_900_);
lean_dec_ref(v_a_899_);
lean_dec(v_a_898_);
lean_dec_ref(v_a_897_);
lean_dec(v_a_896_);
lean_dec_ref(v_e_u2081_895_);
v___x_1453_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__8, &l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__8_once, _init_l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___closed__8);
v___x_1454_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpStep_spec__0___redArg(v___x_1453_, v_a_901_, v_a_902_, v___x_1446_, v_a_904_);
lean_dec(v_a_904_);
lean_dec_ref(v___x_1446_);
lean_dec(v_a_902_);
lean_dec_ref(v_a_901_);
v_a_1455_ = lean_ctor_get(v___x_1454_, 0);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1454_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1457_ = v___x_1454_;
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v___x_1454_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1460_; 
if (v_isShared_1458_ == 0)
{
v___x_1460_ = v___x_1457_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v_a_1455_);
v___x_1460_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
return v___x_1460_;
}
}
}
}
else
{
lean_object* v_a_1463_; lean_object* v___x_1465_; uint8_t v_isShared_1466_; uint8_t v_isSharedCheck_1470_; 
lean_dec(v_numSteps_1448_);
lean_dec_ref(v___x_1446_);
lean_dec(v_a_904_);
lean_dec(v_a_902_);
lean_dec_ref(v_a_901_);
lean_dec(v_a_900_);
lean_dec_ref(v_a_899_);
lean_dec(v_a_898_);
lean_dec_ref(v_a_897_);
lean_dec(v_a_896_);
lean_dec_ref(v_e_u2081_895_);
v_a_1463_ = lean_ctor_get(v___x_1449_, 0);
v_isSharedCheck_1470_ = !lean_is_exclusive(v___x_1449_);
if (v_isSharedCheck_1470_ == 0)
{
v___x_1465_ = v___x_1449_;
v_isShared_1466_ = v_isSharedCheck_1470_;
goto v_resetjp_1464_;
}
else
{
lean_inc(v_a_1463_);
lean_dec(v___x_1449_);
v___x_1465_ = lean_box(0);
v_isShared_1466_ = v_isSharedCheck_1470_;
goto v_resetjp_1464_;
}
v_resetjp_1464_:
{
lean_object* v___x_1468_; 
if (v_isShared_1466_ == 0)
{
v___x_1468_ = v___x_1465_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v_a_1463_);
v___x_1468_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
return v___x_1468_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl___boxed(lean_object* v_e_u2081_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_, lean_object* v_a_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_){
_start:
{
lean_object* v_res_1488_; 
v_res_1488_ = lean_sym_simp(v_e_u2081_1477_, v_a_1478_, v_a_1479_, v_a_1480_, v_a_1481_, v_a_1482_, v_a_1483_, v_a_1484_, v_a_1485_, v_a_1486_);
return v_res_1488_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0(lean_object* v_00_u03b2_1489_, lean_object* v_x_1490_, lean_object* v_x_1491_, lean_object* v_x_1492_){
_start:
{
lean_object* v___x_1493_; 
v___x_1493_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0___redArg(v_x_1490_, v_x_1491_, v_x_1492_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1(lean_object* v_00_u03b2_1494_, lean_object* v_x_1495_, lean_object* v_x_1496_){
_start:
{
lean_object* v___x_1497_; 
v___x_1497_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1___redArg(v_x_1495_, v_x_1496_);
return v___x_1497_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1___boxed(lean_object* v_00_u03b2_1498_, lean_object* v_x_1499_, lean_object* v_x_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1(v_00_u03b2_1498_, v_x_1499_, v_x_1500_);
lean_dec_ref(v_x_1500_);
lean_dec_ref(v_x_1499_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2(lean_object* v_cls_1502_, lean_object* v_msg_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_){
_start:
{
lean_object* v___x_1514_; 
v___x_1514_ = l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___redArg(v_cls_1502_, v_msg_1503_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2___boxed(lean_object* v_cls_1515_, lean_object* v_msg_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_){
_start:
{
lean_object* v_res_1527_; 
v_res_1527_ = l_Lean_addTrace___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__2(v_cls_1515_, v_msg_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
lean_dec(v___y_1525_);
lean_dec_ref(v___y_1524_);
lean_dec(v___y_1523_);
lean_dec_ref(v___y_1522_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
lean_dec(v___y_1517_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0(lean_object* v_00_u03b2_1528_, lean_object* v_x_1529_, size_t v_x_1530_, size_t v_x_1531_, lean_object* v_x_1532_, lean_object* v_x_1533_){
_start:
{
lean_object* v___x_1534_; 
v___x_1534_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0___redArg(v_x_1529_, v_x_1530_, v_x_1531_, v_x_1532_, v_x_1533_);
return v___x_1534_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1535_, lean_object* v_x_1536_, lean_object* v_x_1537_, lean_object* v_x_1538_, lean_object* v_x_1539_, lean_object* v_x_1540_){
_start:
{
size_t v_x_114193__boxed_1541_; size_t v_x_114194__boxed_1542_; lean_object* v_res_1543_; 
v_x_114193__boxed_1541_ = lean_unbox_usize(v_x_1537_);
lean_dec(v_x_1537_);
v_x_114194__boxed_1542_ = lean_unbox_usize(v_x_1538_);
lean_dec(v_x_1538_);
v_res_1543_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0(v_00_u03b2_1535_, v_x_1536_, v_x_114193__boxed_1541_, v_x_114194__boxed_1542_, v_x_1539_, v_x_1540_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2(lean_object* v_00_u03b2_1544_, lean_object* v_x_1545_, size_t v_x_1546_, lean_object* v_x_1547_){
_start:
{
lean_object* v___x_1548_; 
v___x_1548_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2___redArg(v_x_1545_, v_x_1546_, v_x_1547_);
return v___x_1548_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1549_, lean_object* v_x_1550_, lean_object* v_x_1551_, lean_object* v_x_1552_){
_start:
{
size_t v_x_114210__boxed_1553_; lean_object* v_res_1554_; 
v_x_114210__boxed_1553_ = lean_unbox_usize(v_x_1551_);
lean_dec(v_x_1551_);
v_res_1554_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2(v_00_u03b2_1549_, v_x_1550_, v_x_114210__boxed_1553_, v_x_1552_);
lean_dec_ref(v_x_1552_);
lean_dec_ref(v_x_1550_);
return v_res_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1555_, lean_object* v_n_1556_, lean_object* v_k_1557_, lean_object* v_v_1558_){
_start:
{
lean_object* v___x_1559_; 
v___x_1559_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__2___redArg(v_n_1556_, v_k_1557_, v_v_1558_);
return v___x_1559_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_1560_, size_t v_depth_1561_, lean_object* v_keys_1562_, lean_object* v_vals_1563_, lean_object* v_heq_1564_, lean_object* v_i_1565_, lean_object* v_entries_1566_){
_start:
{
lean_object* v___x_1567_; 
v___x_1567_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__3___redArg(v_depth_1561_, v_keys_1562_, v_vals_1563_, v_i_1565_, v_entries_1566_);
return v___x_1567_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_1568_, lean_object* v_depth_1569_, lean_object* v_keys_1570_, lean_object* v_vals_1571_, lean_object* v_heq_1572_, lean_object* v_i_1573_, lean_object* v_entries_1574_){
_start:
{
size_t v_depth_boxed_1575_; lean_object* v_res_1576_; 
v_depth_boxed_1575_ = lean_unbox_usize(v_depth_1569_);
lean_dec(v_depth_1569_);
v_res_1576_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__3(v_00_u03b2_1568_, v_depth_boxed_1575_, v_keys_1570_, v_vals_1571_, v_heq_1572_, v_i_1573_, v_entries_1574_);
lean_dec_ref(v_vals_1571_);
lean_dec_ref(v_keys_1570_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2_spec__6(lean_object* v_00_u03b2_1577_, lean_object* v_keys_1578_, lean_object* v_vals_1579_, lean_object* v_heq_1580_, lean_object* v_i_1581_, lean_object* v_k_1582_){
_start:
{
lean_object* v___x_1583_; 
v___x_1583_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2_spec__6___redArg(v_keys_1578_, v_vals_1579_, v_i_1581_, v_k_1582_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2_spec__6___boxed(lean_object* v_00_u03b2_1584_, lean_object* v_keys_1585_, lean_object* v_vals_1586_, lean_object* v_heq_1587_, lean_object* v_i_1588_, lean_object* v_k_1589_){
_start:
{
lean_object* v_res_1590_; 
v_res_1590_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__1_spec__2_spec__6(v_00_u03b2_1584_, v_keys_1585_, v_vals_1586_, v_heq_1587_, v_i_1588_, v_k_1589_);
lean_dec_ref(v_k_1589_);
lean_dec_ref(v_vals_1586_);
lean_dec_ref(v_keys_1585_);
return v_res_1590_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_1591_, lean_object* v_x_1592_, lean_object* v_x_1593_, lean_object* v_x_1594_, lean_object* v_x_1595_){
_start:
{
lean_object* v___x_1596_; 
v___x_1596_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_simpImpl_spec__0_spec__0_spec__2_spec__5___redArg(v_x_1592_, v_x_1593_, v_x_1594_, v_x_1595_);
return v___x_1596_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Have(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Decidable(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Have(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Sym_Simp_Main_0__Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Main_2936340881____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Have(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
lean_object* initialize_Lean_Meta_Decidable(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Have(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_Main(builtin);
}
#ifdef __cplusplus
}
#endif
