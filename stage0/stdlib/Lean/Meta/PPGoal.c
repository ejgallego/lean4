// Lean compiler output
// Module: Lean.Meta.PPGoal
// Imports: public import Lean.Meta.InferType
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
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isLHSGoal_x3f(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
uint8_t l_Std_Format_isNil(lean_object*);
lean_object* l_Lean_Meta_ppExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_nat_to_int(lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_Name_simpMacroScopes(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint32_t l_Lean_Expr_approxDepth(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t l_Lean_Expr_isAtomic(lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_MetavarContext_findDecl_x3f(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_sanitizeNames(lean_object*, lean_object*);
uint8_t l_Lean_MetavarKind_isSyntheticOpaque(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "pp"};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "auxDecls"};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(38, 145, 51, 188, 89, 247, 104, 191)}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "display auxiliary declarations used to compile recursive functions"};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(28, 39, 4, 70, 217, 113, 0, 124)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(199, 146, 190, 114, 236, 223, 30, 15)}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_pp_auxDecls;
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "implementationDetailHyps"};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(95, 161, 54, 44, 105, 224, 181, 140)}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "display implementation detail hypotheses in the local context"};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(28, 39, 4, 70, 217, 113, 0, 124)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(62, 255, 137, 94, 59, 236, 150, 82)}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_pp_implementationDetailHyps;
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "inaccessibleNames"};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(232, 160, 42, 6, 250, 122, 123, 232)}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "display inaccessible declarations in the local context"};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(28, 39, 4, 70, 217, 113, 0, 124)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(177, 204, 116, 106, 151, 53, 185, 129)}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_pp_inaccessibleNames;
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "showLetValues"};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(23, 8, 91, 225, 155, 186, 185, 50)}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "always display let-declaration values in the info view"};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(28, 39, 4, 70, 217, 113, 0, 124)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(118, 190, 208, 67, 43, 188, 160, 41)}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_pp_showLetValues;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "threshold"};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(23, 8, 91, 225, 155, 186, 185, 50)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(39, 12, 21, 108, 66, 125, 244, 127)}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 100, .m_capacity = 100, .m_length = 97, .m_data = "when `pp.showLetValues` is false, the maximum size of a term allowed before it is replaced by `⋯`"};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(28, 39, 4, 70, 217, 113, 0, 124)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(118, 190, 208, 67, 43, 188, 160, 41)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(242, 225, 32, 137, 29, 106, 114, 238)}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_pp_showLetValues_threshold;
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(23, 8, 91, 225, 155, 186, 185, 50)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(215, 21, 232, 108, 56, 195, 56, 160)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(103, 235, 54, 94, 40, 62, 247, 246)}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 118, .m_capacity = 118, .m_length = 115, .m_data = "when `pp.showLetValues` is false, the maximum size of a term allowed before it is replaced by `⋯`, for tactic goals"};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(255) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(28, 39, 4, 70, 217, 113, 0, 124)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(118, 190, 208, 67, 43, 188, 160, 41)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(226, 176, 166, 194, 191, 152, 58, 125)}};
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value_aux_4),((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(22, 125, 62, 189, 243, 139, 141, 137)}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_pp_showLetValues_tactic_threshold;
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_ppGoal_shouldShowLetValue_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_ppGoal_shouldShowLetValue_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_ppGoal_shouldShowLetValue_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_ppGoal_shouldShowLetValue_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ppGoal_shouldShowLetValue___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ppGoal_shouldShowLetValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ppGoal_shouldShowLetValue(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ppGoal_shouldShowLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_addLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_addLine___closed__0 = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_addLine___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_addLine___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_addLine___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_addLine___closed__1 = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_addLine___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_addLine(lean_object*);
static const lean_string_object l_Lean_Meta_getGoalPrefix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "⊢ "};
static const lean_object* l_Lean_Meta_getGoalPrefix___closed__0 = (const lean_object*)&l_Lean_Meta_getGoalPrefix___closed__0_value;
static const lean_string_object l_Lean_Meta_getGoalPrefix___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "| "};
static const lean_object* l_Lean_Meta_getGoalPrefix___closed__1 = (const lean_object*)&l_Lean_Meta_getGoalPrefix___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_getGoalPrefix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getGoalPrefix___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending___closed__0 = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending___closed__1 = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending___closed__1_value;
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " :"};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending___closed__2 = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending___closed__2_value)}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending___closed__3 = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__0 = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__1 = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__1_value;
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = " := ⋯"};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__2 = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__2_value)}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__3 = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__3_value;
static const lean_string_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " :="};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__4 = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__4_value)}};
static const lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__5 = (const lean_object*)&l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_ppGoal_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_ppGoal_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_ppGoal_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_ppGoal_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3(uint8_t, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__4(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2_spec__3(uint8_t, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2(uint8_t, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ppGoal___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "case "};
static const lean_object* l_Lean_Meta_ppGoal___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_ppGoal___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_ppGoal___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_ppGoal___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Meta_ppGoal___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_ppGoal___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ppGoal___lam__0(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ppGoal___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ppGoal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "unknown goal"};
static const lean_object* l_Lean_Meta_ppGoal___closed__0 = (const lean_object*)&l_Lean_Meta_ppGoal___closed__0_value;
static const lean_ctor_object l_Lean_Meta_ppGoal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_ppGoal___closed__0_value)}};
static const lean_object* l_Lean_Meta_ppGoal___closed__1 = (const lean_object*)&l_Lean_Meta_ppGoal___closed__1_value;
static const lean_ctor_object l_Lean_Meta_ppGoal___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_ppGoal___closed__2 = (const lean_object*)&l_Lean_Meta_ppGoal___closed__2_value;
static const lean_ctor_object l_Lean_Meta_ppGoal___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ppGoal___closed__2_value)}};
static const lean_object* l_Lean_Meta_ppGoal___closed__3 = (const lean_object*)&l_Lean_Meta_ppGoal___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ppGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ppGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4_));
v___x_54_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4_));
v___x_55_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4_));
v___x_56_ = l_Lean_Option_register___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__spec__0(v___x_53_, v___x_54_, v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4____boxed(lean_object* v_a_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4_();
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_75_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4_));
v___x_76_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4_));
v___x_77_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4_));
v___x_78_ = l_Lean_Option_register___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__spec__0(v___x_75_, v___x_76_, v___x_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4____boxed(lean_object* v_a_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4_();
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_97_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4_));
v___x_98_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4_));
v___x_99_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4_));
v___x_100_ = l_Lean_Option_register___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__spec__0(v___x_97_, v___x_98_, v___x_99_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4____boxed(lean_object* v_a_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4_();
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_119_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4_));
v___x_120_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4_));
v___x_121_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4_));
v___x_122_ = l_Lean_Option_register___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4__spec__0(v___x_119_, v___x_120_, v___x_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4____boxed(lean_object* v_a_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4_();
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__spec__0(lean_object* v_name_125_, lean_object* v_decl_126_, lean_object* v_ref_127_){
_start:
{
lean_object* v_defValue_129_; lean_object* v_descr_130_; lean_object* v_deprecation_x3f_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v_defValue_129_ = lean_ctor_get(v_decl_126_, 0);
v_descr_130_ = lean_ctor_get(v_decl_126_, 1);
v_deprecation_x3f_131_ = lean_ctor_get(v_decl_126_, 2);
lean_inc(v_defValue_129_);
v___x_132_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_132_, 0, v_defValue_129_);
lean_inc(v_deprecation_x3f_131_);
lean_inc_ref(v_descr_130_);
lean_inc_n(v_name_125_, 2);
v___x_133_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_133_, 0, v_name_125_);
lean_ctor_set(v___x_133_, 1, v_ref_127_);
lean_ctor_set(v___x_133_, 2, v___x_132_);
lean_ctor_set(v___x_133_, 3, v_descr_130_);
lean_ctor_set(v___x_133_, 4, v_deprecation_x3f_131_);
v___x_134_ = lean_register_option(v_name_125_, v___x_133_);
if (lean_obj_tag(v___x_134_) == 0)
{
lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_142_; 
v_isSharedCheck_142_ = !lean_is_exclusive(v___x_134_);
if (v_isSharedCheck_142_ == 0)
{
lean_object* v_unused_143_; 
v_unused_143_ = lean_ctor_get(v___x_134_, 0);
lean_dec(v_unused_143_);
v___x_136_ = v___x_134_;
v_isShared_137_ = v_isSharedCheck_142_;
goto v_resetjp_135_;
}
else
{
lean_dec(v___x_134_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_142_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_138_; lean_object* v___x_140_; 
lean_inc(v_defValue_129_);
v___x_138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_138_, 0, v_name_125_);
lean_ctor_set(v___x_138_, 1, v_defValue_129_);
if (v_isShared_137_ == 0)
{
lean_ctor_set(v___x_136_, 0, v___x_138_);
v___x_140_ = v___x_136_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v___x_138_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
else
{
lean_object* v_a_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_151_; 
lean_dec(v_name_125_);
v_a_144_ = lean_ctor_get(v___x_134_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v___x_134_);
if (v_isSharedCheck_151_ == 0)
{
v___x_146_ = v___x_134_;
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_a_144_);
lean_dec(v___x_134_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_149_; 
if (v_isShared_147_ == 0)
{
v___x_149_ = v___x_146_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_a_144_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_152_, lean_object* v_decl_153_, lean_object* v_ref_154_, lean_object* v_a_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Lean_Option_register___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__spec__0(v_name_152_, v_decl_153_, v_ref_154_);
lean_dec_ref(v_decl_153_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_174_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4_));
v___x_175_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4_));
v___x_176_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4_));
v___x_177_ = l_Lean_Option_register___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__spec__0(v___x_174_, v___x_175_, v___x_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4____boxed(lean_object* v_a_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4_();
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_199_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4_));
v___x_200_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4_));
v___x_201_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4_));
v___x_202_ = l_Lean_Option_register___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4__spec__0(v___x_199_, v___x_200_, v___x_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4____boxed(lean_object* v_a_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4_();
return v_res_204_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_ppGoal_shouldShowLetValue_spec__0(lean_object* v_opts_205_, lean_object* v_opt_206_){
_start:
{
lean_object* v_name_207_; lean_object* v_defValue_208_; lean_object* v_map_209_; lean_object* v___x_210_; 
v_name_207_ = lean_ctor_get(v_opt_206_, 0);
v_defValue_208_ = lean_ctor_get(v_opt_206_, 1);
v_map_209_ = lean_ctor_get(v_opts_205_, 0);
v___x_210_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_209_, v_name_207_);
if (lean_obj_tag(v___x_210_) == 0)
{
uint8_t v___x_211_; 
v___x_211_ = lean_unbox(v_defValue_208_);
return v___x_211_;
}
else
{
lean_object* v_val_212_; 
v_val_212_ = lean_ctor_get(v___x_210_, 0);
lean_inc(v_val_212_);
lean_dec_ref_known(v___x_210_, 1);
if (lean_obj_tag(v_val_212_) == 1)
{
uint8_t v_v_213_; 
v_v_213_ = lean_ctor_get_uint8(v_val_212_, 0);
lean_dec_ref_known(v_val_212_, 0);
return v_v_213_;
}
else
{
uint8_t v___x_214_; 
lean_dec(v_val_212_);
v___x_214_ = lean_unbox(v_defValue_208_);
return v___x_214_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_ppGoal_shouldShowLetValue_spec__0___boxed(lean_object* v_opts_215_, lean_object* v_opt_216_){
_start:
{
uint8_t v_res_217_; lean_object* v_r_218_; 
v_res_217_ = l_Lean_Option_get___at___00Lean_Meta_ppGoal_shouldShowLetValue_spec__0(v_opts_215_, v_opt_216_);
lean_dec_ref(v_opt_216_);
lean_dec_ref(v_opts_215_);
v_r_218_ = lean_box(v_res_217_);
return v_r_218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_ppGoal_shouldShowLetValue_spec__1(lean_object* v_opts_219_, lean_object* v_opt_220_){
_start:
{
lean_object* v_name_221_; lean_object* v_defValue_222_; lean_object* v_map_223_; lean_object* v___x_224_; 
v_name_221_ = lean_ctor_get(v_opt_220_, 0);
v_defValue_222_ = lean_ctor_get(v_opt_220_, 1);
v_map_223_ = lean_ctor_get(v_opts_219_, 0);
v___x_224_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_223_, v_name_221_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_inc(v_defValue_222_);
return v_defValue_222_;
}
else
{
lean_object* v_val_225_; 
v_val_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_val_225_);
lean_dec_ref_known(v___x_224_, 1);
if (lean_obj_tag(v_val_225_) == 3)
{
lean_object* v_v_226_; 
v_v_226_ = lean_ctor_get(v_val_225_, 0);
lean_inc(v_v_226_);
lean_dec_ref_known(v_val_225_, 1);
return v_v_226_;
}
else
{
lean_dec(v_val_225_);
lean_inc(v_defValue_222_);
return v_defValue_222_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_ppGoal_shouldShowLetValue_spec__1___boxed(lean_object* v_opts_227_, lean_object* v_opt_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lean_Option_get___at___00Lean_Meta_ppGoal_shouldShowLetValue_spec__1(v_opts_227_, v_opt_228_);
lean_dec_ref(v_opt_228_);
lean_dec_ref(v_opts_227_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ppGoal_shouldShowLetValue___redArg(uint8_t v_tactic_230_, lean_object* v_e_231_, lean_object* v_a_232_){
_start:
{
lean_object* v___y_235_; lean_object* v___y_242_; uint8_t v___x_249_; 
v___x_249_ = l_Lean_Expr_isAtomic(v_e_231_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_250_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_232_);
v___x_251_ = l_Lean_Meta_pp_showLetValues;
v___x_252_ = l_Lean_Option_get___at___00Lean_Meta_ppGoal_shouldShowLetValue_spec__0(v___x_250_, v___x_251_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___y_256_; 
v___x_253_ = l_Lean_Meta_pp_showLetValues_threshold;
v___x_254_ = l_Lean_Option_get___at___00Lean_Meta_ppGoal_shouldShowLetValue_spec__1(v___x_250_, v___x_253_);
if (v_tactic_230_ == 0)
{
lean_object* v___x_258_; 
lean_dec_ref(v___x_250_);
v___x_258_ = lean_unsigned_to_nat(0u);
v___y_256_ = v___x_258_;
goto v___jp_255_;
}
else
{
lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_259_ = l_Lean_Meta_pp_showLetValues_tactic_threshold;
v___x_260_ = l_Lean_Option_get___at___00Lean_Meta_ppGoal_shouldShowLetValue_spec__1(v___x_250_, v___x_259_);
lean_dec_ref(v___x_250_);
v___y_256_ = v___x_260_;
goto v___jp_255_;
}
v___jp_255_:
{
uint8_t v___x_257_; 
v___x_257_ = lean_nat_dec_le(v___x_254_, v___y_256_);
if (v___x_257_ == 0)
{
lean_dec(v___y_256_);
v___y_242_ = v___x_254_;
goto v___jp_241_;
}
else
{
lean_dec(v___x_254_);
v___y_242_ = v___y_256_;
goto v___jp_241_;
}
}
}
else
{
lean_dec_ref(v___x_250_);
goto v___jp_245_;
}
}
else
{
goto v___jp_245_;
}
v___jp_234_:
{
uint32_t v___x_236_; lean_object* v___x_237_; uint8_t v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_236_ = l_Lean_Expr_approxDepth(v_e_231_);
v___x_237_ = lean_uint32_to_nat(v___x_236_);
v___x_238_ = lean_nat_dec_le(v___x_237_, v___y_235_);
lean_dec(v___y_235_);
lean_dec(v___x_237_);
v___x_239_ = lean_box(v___x_238_);
v___x_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
return v___x_240_;
}
v___jp_241_:
{
lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_243_ = lean_unsigned_to_nat(254u);
v___x_244_ = lean_nat_dec_le(v___x_243_, v___y_242_);
if (v___x_244_ == 0)
{
v___y_235_ = v___y_242_;
goto v___jp_234_;
}
else
{
lean_dec(v___y_242_);
v___y_235_ = v___x_243_;
goto v___jp_234_;
}
}
v___jp_245_:
{
uint8_t v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_246_ = 1;
v___x_247_ = lean_box(v___x_246_);
v___x_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
return v___x_248_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ppGoal_shouldShowLetValue___redArg___boxed(lean_object* v_tactic_261_, lean_object* v_e_262_, lean_object* v_a_263_, lean_object* v_a_264_){
_start:
{
uint8_t v_tactic_boxed_265_; lean_object* v_res_266_; 
v_tactic_boxed_265_ = lean_unbox(v_tactic_261_);
v_res_266_ = l_Lean_Meta_ppGoal_shouldShowLetValue___redArg(v_tactic_boxed_265_, v_e_262_, v_a_263_);
lean_dec_ref(v_a_263_);
lean_dec_ref(v_e_262_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ppGoal_shouldShowLetValue(uint8_t v_tactic_267_, lean_object* v_e_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = l_Lean_Meta_ppGoal_shouldShowLetValue___redArg(v_tactic_267_, v_e_268_, v_a_271_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ppGoal_shouldShowLetValue___boxed(lean_object* v_tactic_275_, lean_object* v_e_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_){
_start:
{
uint8_t v_tactic_boxed_282_; lean_object* v_res_283_; 
v_tactic_boxed_282_ = lean_unbox(v_tactic_275_);
v_res_283_ = l_Lean_Meta_ppGoal_shouldShowLetValue(v_tactic_boxed_282_, v_e_276_, v_a_277_, v_a_278_, v_a_279_, v_a_280_);
lean_dec(v_a_280_);
lean_dec_ref(v_a_279_);
lean_dec(v_a_278_);
lean_dec_ref(v_a_277_);
lean_dec_ref(v_e_276_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_addLine(lean_object* v_fmt_287_){
_start:
{
uint8_t v___x_288_; 
v___x_288_ = l_Std_Format_isNil(v_fmt_287_);
if (v___x_288_ == 0)
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_addLine___closed__1));
v___x_290_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_290_, 0, v_fmt_287_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
return v___x_290_;
}
else
{
return v_fmt_287_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGoalPrefix(lean_object* v_mvarDecl_293_){
_start:
{
lean_object* v_type_294_; lean_object* v___x_295_; 
v_type_294_ = lean_ctor_get(v_mvarDecl_293_, 2);
v___x_295_ = l_Lean_isLHSGoal_x3f(v_type_294_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v___x_296_; 
v___x_296_ = ((lean_object*)(l_Lean_Meta_getGoalPrefix___closed__0));
return v___x_296_;
}
else
{
lean_object* v___x_297_; 
lean_dec_ref_known(v___x_295_, 1);
v___x_297_ = ((lean_object*)(l_Lean_Meta_getGoalPrefix___closed__1));
return v___x_297_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getGoalPrefix___boxed(lean_object* v_mvarDecl_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Lean_Meta_getGoalPrefix(v_mvarDecl_298_);
lean_dec_ref(v_mvarDecl_298_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending_spec__0_spec__0(lean_object* v_x_300_, lean_object* v_x_301_, lean_object* v_x_302_){
_start:
{
if (lean_obj_tag(v_x_302_) == 0)
{
lean_dec(v_x_300_);
return v_x_301_;
}
else
{
lean_object* v_head_303_; lean_object* v_tail_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_316_; 
v_head_303_ = lean_ctor_get(v_x_302_, 0);
v_tail_304_ = lean_ctor_get(v_x_302_, 1);
v_isSharedCheck_316_ = !lean_is_exclusive(v_x_302_);
if (v_isSharedCheck_316_ == 0)
{
v___x_306_ = v_x_302_;
v_isShared_307_ = v_isSharedCheck_316_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_tail_304_);
lean_inc(v_head_303_);
lean_dec(v_x_302_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_316_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_309_; 
lean_inc(v_x_300_);
if (v_isShared_307_ == 0)
{
lean_ctor_set_tag(v___x_306_, 5);
lean_ctor_set(v___x_306_, 1, v_x_300_);
lean_ctor_set(v___x_306_, 0, v_x_301_);
v___x_309_ = v___x_306_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_x_301_);
lean_ctor_set(v_reuseFailAlloc_315_, 1, v_x_300_);
v___x_309_ = v_reuseFailAlloc_315_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
uint8_t v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_310_ = 1;
v___x_311_ = l_Lean_Name_toString(v_head_303_, v___x_310_);
v___x_312_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
v___x_313_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_313_, 0, v___x_309_);
lean_ctor_set(v___x_313_, 1, v___x_312_);
v_x_301_ = v___x_313_;
v_x_302_ = v_tail_304_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending_spec__0(lean_object* v_x_317_, lean_object* v_x_318_){
_start:
{
if (lean_obj_tag(v_x_317_) == 0)
{
lean_object* v___x_319_; 
lean_dec(v_x_318_);
v___x_319_ = lean_box(0);
return v___x_319_;
}
else
{
lean_object* v_tail_320_; 
v_tail_320_ = lean_ctor_get(v_x_317_, 1);
if (lean_obj_tag(v_tail_320_) == 0)
{
lean_object* v_head_321_; uint8_t v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
lean_dec(v_x_318_);
v_head_321_ = lean_ctor_get(v_x_317_, 0);
lean_inc(v_head_321_);
lean_dec_ref_known(v_x_317_, 2);
v___x_322_ = 1;
v___x_323_ = l_Lean_Name_toString(v_head_321_, v___x_322_);
v___x_324_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_324_, 0, v___x_323_);
return v___x_324_;
}
else
{
lean_object* v_head_325_; uint8_t v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
lean_inc(v_tail_320_);
v_head_325_ = lean_ctor_get(v_x_317_, 0);
lean_inc(v_head_325_);
lean_dec_ref_known(v_x_317_, 2);
v___x_326_ = 1;
v___x_327_ = l_Lean_Name_toString(v_head_325_, v___x_326_);
v___x_328_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
v___x_329_ = l_List_foldl___at___00Std_Format_joinSep___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending_spec__0_spec__0(v_x_318_, v___x_328_, v_tail_320_);
return v___x_329_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending(lean_object* v_indent_336_, lean_object* v_ids_337_, lean_object* v_type_x3f_338_, lean_object* v_fmt_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_){
_start:
{
uint8_t v___x_345_; 
v___x_345_ = l_List_isEmpty___redArg(v_ids_337_);
if (v___x_345_ == 0)
{
lean_object* v_fmt_346_; 
v_fmt_346_ = l___private_Lean_Meta_PPGoal_0__Lean_Meta_addLine(v_fmt_339_);
if (lean_obj_tag(v_type_x3f_338_) == 0)
{
lean_object* v___x_347_; 
lean_dec(v_ids_337_);
lean_dec(v_indent_336_);
v___x_347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_347_, 0, v_fmt_346_);
return v___x_347_;
}
else
{
lean_object* v_val_348_; lean_object* v___x_349_; 
v_val_348_ = lean_ctor_get(v_type_x3f_338_, 0);
lean_inc(v_val_348_);
lean_dec_ref_known(v_type_x3f_338_, 1);
v___x_349_ = l_Lean_Meta_ppExpr(v_val_348_, v_a_340_, v_a_341_, v_a_342_, v_a_343_);
if (lean_obj_tag(v___x_349_) == 0)
{
lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_369_; 
v_a_350_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_369_ == 0)
{
v___x_352_ = v___x_349_;
v_isShared_353_ = v_isSharedCheck_369_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___x_349_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_369_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; uint8_t v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_367_; 
v___x_354_ = l_List_reverse___redArg(v_ids_337_);
v___x_355_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending___closed__1));
v___x_356_ = l_Std_Format_joinSep___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending_spec__0(v___x_354_, v___x_355_);
v___x_357_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending___closed__3));
v___x_358_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_358_, 0, v___x_356_);
lean_ctor_set(v___x_358_, 1, v___x_357_);
v___x_359_ = lean_box(1);
v___x_360_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
lean_ctor_set(v___x_360_, 1, v_a_350_);
v___x_361_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_361_, 0, v_indent_336_);
lean_ctor_set(v___x_361_, 1, v___x_360_);
v___x_362_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_362_, 0, v___x_358_);
lean_ctor_set(v___x_362_, 1, v___x_361_);
v___x_363_ = 0;
v___x_364_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_364_, 0, v___x_362_);
lean_ctor_set_uint8(v___x_364_, sizeof(void*)*1, v___x_363_);
v___x_365_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_365_, 0, v_fmt_346_);
lean_ctor_set(v___x_365_, 1, v___x_364_);
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 0, v___x_365_);
v___x_367_ = v___x_352_;
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
}
else
{
lean_dec(v_fmt_346_);
lean_dec(v_ids_337_);
lean_dec(v_indent_336_);
return v___x_349_;
}
}
}
else
{
lean_object* v___x_370_; 
lean_dec(v_type_x3f_338_);
lean_dec(v_ids_337_);
lean_dec(v_indent_336_);
v___x_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_370_, 0, v_fmt_339_);
return v___x_370_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending___boxed(lean_object* v_indent_371_, lean_object* v_ids_372_, lean_object* v_type_x3f_373_, lean_object* v_fmt_374_, lean_object* v_a_375_, lean_object* v_a_376_, lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending(v_indent_371_, v_ids_372_, v_type_x3f_373_, v_fmt_374_, v_a_375_, v_a_376_, v_a_377_, v_a_378_);
lean_dec(v_a_378_);
lean_dec_ref(v_a_377_);
lean_dec(v_a_376_);
lean_dec_ref(v_a_375_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__0___redArg(lean_object* v_e_381_, lean_object* v___y_382_){
_start:
{
uint8_t v___x_384_; 
v___x_384_ = l_Lean_Expr_hasMVar(v_e_381_);
if (v___x_384_ == 0)
{
lean_object* v___x_385_; 
v___x_385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_385_, 0, v_e_381_);
return v___x_385_;
}
else
{
lean_object* v___x_386_; lean_object* v_mctx_387_; lean_object* v___x_388_; lean_object* v_fst_389_; lean_object* v_snd_390_; lean_object* v___x_391_; lean_object* v_cache_392_; lean_object* v_zetaDeltaFVarIds_393_; lean_object* v_postponed_394_; lean_object* v_diag_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_404_; 
v___x_386_ = lean_st_ref_get(v___y_382_);
v_mctx_387_ = lean_ctor_get(v___x_386_, 0);
lean_inc_ref(v_mctx_387_);
lean_dec(v___x_386_);
v___x_388_ = l_Lean_instantiateMVarsCore(v_mctx_387_, v_e_381_);
v_fst_389_ = lean_ctor_get(v___x_388_, 0);
lean_inc(v_fst_389_);
v_snd_390_ = lean_ctor_get(v___x_388_, 1);
lean_inc(v_snd_390_);
lean_dec_ref(v___x_388_);
v___x_391_ = lean_st_ref_take(v___y_382_);
v_cache_392_ = lean_ctor_get(v___x_391_, 1);
v_zetaDeltaFVarIds_393_ = lean_ctor_get(v___x_391_, 2);
v_postponed_394_ = lean_ctor_get(v___x_391_, 3);
v_diag_395_ = lean_ctor_get(v___x_391_, 4);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_391_);
if (v_isSharedCheck_404_ == 0)
{
lean_object* v_unused_405_; 
v_unused_405_ = lean_ctor_get(v___x_391_, 0);
lean_dec(v_unused_405_);
v___x_397_ = v___x_391_;
v_isShared_398_ = v_isSharedCheck_404_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_diag_395_);
lean_inc(v_postponed_394_);
lean_inc(v_zetaDeltaFVarIds_393_);
lean_inc(v_cache_392_);
lean_dec(v___x_391_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_404_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_400_; 
if (v_isShared_398_ == 0)
{
lean_ctor_set(v___x_397_, 0, v_snd_390_);
v___x_400_ = v___x_397_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_snd_390_);
lean_ctor_set(v_reuseFailAlloc_403_, 1, v_cache_392_);
lean_ctor_set(v_reuseFailAlloc_403_, 2, v_zetaDeltaFVarIds_393_);
lean_ctor_set(v_reuseFailAlloc_403_, 3, v_postponed_394_);
lean_ctor_set(v_reuseFailAlloc_403_, 4, v_diag_395_);
v___x_400_ = v_reuseFailAlloc_403_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_401_ = lean_st_ref_put(v___y_382_, v___x_400_);
v___x_402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_402_, 0, v_fst_389_);
return v___x_402_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__0___redArg___boxed(lean_object* v_e_406_, lean_object* v___y_407_, lean_object* v___y_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__0___redArg(v_e_406_, v___y_407_);
lean_dec(v___y_407_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__0(lean_object* v_e_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__0___redArg(v_e_410_, v___y_412_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__0___boxed(lean_object* v_e_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__0(v_e_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
lean_dec(v___y_419_);
lean_dec_ref(v___y_418_);
return v_res_423_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__1(lean_object* v_x_424_, lean_object* v_x_425_){
_start:
{
if (lean_obj_tag(v_x_424_) == 0)
{
if (lean_obj_tag(v_x_425_) == 0)
{
uint8_t v___x_426_; 
v___x_426_ = 1;
return v___x_426_;
}
else
{
uint8_t v___x_427_; 
v___x_427_ = 0;
return v___x_427_;
}
}
else
{
if (lean_obj_tag(v_x_425_) == 0)
{
uint8_t v___x_428_; 
v___x_428_ = 0;
return v___x_428_;
}
else
{
lean_object* v_val_429_; lean_object* v_val_430_; uint8_t v___x_431_; 
v_val_429_ = lean_ctor_get(v_x_424_, 0);
v_val_430_ = lean_ctor_get(v_x_425_, 0);
v___x_431_ = lean_expr_eqv(v_val_429_, v_val_430_);
return v___x_431_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__1___boxed(lean_object* v_x_432_, lean_object* v_x_433_){
_start:
{
uint8_t v_res_434_; lean_object* v_r_435_; 
v_res_434_ = l_instBEqOption_beq___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__1(v_x_432_, v_x_433_);
lean_dec(v_x_433_);
lean_dec(v_x_432_);
v_r_435_ = lean_box(v_res_434_);
return v_r_435_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars(lean_object* v_indent_445_, uint8_t v_tactic_446_, lean_object* v_varNames_447_, lean_object* v_prevType_x3f_448_, lean_object* v_fmt_449_, lean_object* v_localDecl_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_){
_start:
{
if (lean_obj_tag(v_localDecl_450_) == 0)
{
lean_object* v_userName_456_; lean_object* v_type_457_; lean_object* v_varName_458_; lean_object* v___x_459_; lean_object* v_a_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_497_; 
v_userName_456_ = lean_ctor_get(v_localDecl_450_, 2);
lean_inc(v_userName_456_);
v_type_457_ = lean_ctor_get(v_localDecl_450_, 3);
lean_inc_ref(v_type_457_);
lean_dec_ref_known(v_localDecl_450_, 4);
v_varName_458_ = l_Lean_Name_simpMacroScopes(v_userName_456_);
v___x_459_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__0___redArg(v_type_457_, v_a_452_);
v_a_460_ = lean_ctor_get(v___x_459_, 0);
v_isSharedCheck_497_ = !lean_is_exclusive(v___x_459_);
if (v_isSharedCheck_497_ == 0)
{
v___x_462_ = v___x_459_;
v_isShared_463_ = v_isSharedCheck_497_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_a_460_);
lean_dec(v___x_459_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_497_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_472_; uint8_t v___x_473_; 
v___x_472_ = lean_box(0);
v___x_473_ = l_instBEqOption_beq___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__1(v_prevType_x3f_448_, v___x_472_);
if (v___x_473_ == 0)
{
lean_object* v___x_474_; uint8_t v___x_475_; 
lean_inc(v_a_460_);
v___x_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_474_, 0, v_a_460_);
v___x_475_ = l_instBEqOption_beq___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__1(v_prevType_x3f_448_, v___x_474_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; 
lean_del_object(v___x_462_);
lean_dec(v_a_460_);
v___x_476_ = l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending(v_indent_445_, v_varNames_447_, v_prevType_x3f_448_, v_fmt_449_, v_a_451_, v_a_452_, v_a_453_, v_a_454_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_488_; 
v_a_477_ = lean_ctor_get(v___x_476_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v___x_476_);
if (v_isSharedCheck_488_ == 0)
{
v___x_479_ = v___x_476_;
v_isShared_480_ = v_isSharedCheck_488_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v___x_476_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_488_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_486_; 
v___x_481_ = lean_box(0);
v___x_482_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_482_, 0, v_varName_458_);
lean_ctor_set(v___x_482_, 1, v___x_481_);
v___x_483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_483_, 0, v___x_474_);
lean_ctor_set(v___x_483_, 1, v_a_477_);
v___x_484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_484_, 0, v___x_482_);
lean_ctor_set(v___x_484_, 1, v___x_483_);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 0, v___x_484_);
v___x_486_ = v___x_479_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___x_484_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
}
else
{
lean_object* v_a_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_496_; 
lean_dec_ref_known(v___x_474_, 1);
lean_dec(v_varName_458_);
v_a_489_ = lean_ctor_get(v___x_476_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v___x_476_);
if (v_isSharedCheck_496_ == 0)
{
v___x_491_ = v___x_476_;
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_a_489_);
lean_dec(v___x_476_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_494_; 
if (v_isShared_492_ == 0)
{
v___x_494_ = v___x_491_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_a_489_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_474_, 1);
lean_dec(v_prevType_x3f_448_);
lean_dec(v_indent_445_);
goto v___jp_464_;
}
}
else
{
lean_dec(v_prevType_x3f_448_);
lean_dec(v_indent_445_);
goto v___jp_464_;
}
v___jp_464_:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_470_; 
v___x_465_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_465_, 0, v_varName_458_);
lean_ctor_set(v___x_465_, 1, v_varNames_447_);
v___x_466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_466_, 0, v_a_460_);
v___x_467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_467_, 0, v___x_466_);
lean_ctor_set(v___x_467_, 1, v_fmt_449_);
v___x_468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_468_, 0, v___x_465_);
lean_ctor_set(v___x_468_, 1, v___x_467_);
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 0, v___x_468_);
v___x_470_ = v___x_462_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v___x_468_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
}
else
{
uint8_t v_nondep_498_; 
v_nondep_498_ = lean_ctor_get_uint8(v_localDecl_450_, sizeof(void*)*5);
if (v_nondep_498_ == 0)
{
lean_object* v_userName_499_; lean_object* v_type_500_; lean_object* v_value_501_; lean_object* v_varName_502_; lean_object* v___x_503_; 
v_userName_499_ = lean_ctor_get(v_localDecl_450_, 2);
lean_inc(v_userName_499_);
v_type_500_ = lean_ctor_get(v_localDecl_450_, 3);
lean_inc_ref(v_type_500_);
v_value_501_ = lean_ctor_get(v_localDecl_450_, 4);
lean_inc_ref(v_value_501_);
lean_dec_ref_known(v_localDecl_450_, 5);
v_varName_502_ = l_Lean_Name_simpMacroScopes(v_userName_499_);
lean_inc(v_indent_445_);
v___x_503_ = l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending(v_indent_445_, v_varNames_447_, v_prevType_x3f_448_, v_fmt_449_, v_a_451_, v_a_452_, v_a_453_, v_a_454_);
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v_a_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_568_; 
v_a_504_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_568_ == 0)
{
v___x_506_ = v___x_503_;
v_isShared_507_ = v_isSharedCheck_568_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_a_504_);
lean_dec(v___x_503_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_568_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_508_; lean_object* v_fmtElem_510_; lean_object* v___x_521_; lean_object* v_a_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_567_; 
v___x_508_ = l___private_Lean_Meta_PPGoal_0__Lean_Meta_addLine(v_a_504_);
v___x_521_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__0___redArg(v_type_500_, v_a_452_);
v_a_522_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_567_ == 0)
{
v___x_524_ = v___x_521_;
v_isShared_525_ = v_isSharedCheck_567_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_a_522_);
lean_dec(v___x_521_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_567_;
goto v_resetjp_523_;
}
v___jp_509_:
{
uint8_t v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_519_; 
v___x_511_ = 0;
v___x_512_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_512_, 0, v_fmtElem_510_);
lean_ctor_set_uint8(v___x_512_, sizeof(void*)*1, v___x_511_);
v___x_513_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_513_, 0, v___x_508_);
lean_ctor_set(v___x_513_, 1, v___x_512_);
v___x_514_ = lean_box(0);
v___x_515_ = lean_box(0);
v___x_516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_516_, 0, v___x_515_);
lean_ctor_set(v___x_516_, 1, v___x_513_);
v___x_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_514_);
lean_ctor_set(v___x_517_, 1, v___x_516_);
if (v_isShared_507_ == 0)
{
lean_ctor_set(v___x_506_, 0, v___x_517_);
v___x_519_ = v___x_506_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v___x_517_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
v_resetjp_523_:
{
lean_object* v___x_526_; 
v___x_526_ = l_Lean_Meta_ppExpr(v_a_522_, v_a_451_, v_a_452_, v_a_453_, v_a_454_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v_a_527_; uint8_t v___x_528_; lean_object* v___x_529_; lean_object* v___x_531_; 
v_a_527_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_a_527_);
lean_dec_ref_known(v___x_526_, 1);
v___x_528_ = 1;
v___x_529_ = l_Lean_Name_toString(v_varName_502_, v___x_528_);
if (v_isShared_525_ == 0)
{
lean_ctor_set_tag(v___x_524_, 3);
lean_ctor_set(v___x_524_, 0, v___x_529_);
v___x_531_ = v___x_524_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v___x_529_);
v___x_531_ = v_reuseFailAlloc_558_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v_a_536_; lean_object* v___x_537_; lean_object* v_a_538_; uint8_t v___x_539_; 
v___x_532_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__1));
v___x_533_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_531_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
v___x_534_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
lean_ctor_set(v___x_534_, 1, v_a_527_);
v___x_535_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__0___redArg(v_value_501_, v_a_452_);
v_a_536_ = lean_ctor_get(v___x_535_, 0);
lean_inc(v_a_536_);
lean_dec_ref(v___x_535_);
v___x_537_ = l_Lean_Meta_ppGoal_shouldShowLetValue___redArg(v_tactic_446_, v_a_536_, v_a_453_);
v_a_538_ = lean_ctor_get(v___x_537_, 0);
lean_inc(v_a_538_);
lean_dec_ref(v___x_537_);
v___x_539_ = lean_unbox(v_a_538_);
lean_dec(v_a_538_);
if (v___x_539_ == 0)
{
lean_object* v___x_540_; lean_object* v___x_541_; 
lean_dec(v_a_536_);
lean_dec(v_indent_445_);
v___x_540_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__3));
v___x_541_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_541_, 0, v___x_534_);
lean_ctor_set(v___x_541_, 1, v___x_540_);
v_fmtElem_510_ = v___x_541_;
goto v___jp_509_;
}
else
{
lean_object* v___x_542_; 
v___x_542_ = l_Lean_Meta_ppExpr(v_a_536_, v_a_451_, v_a_452_, v_a_453_, v_a_454_);
if (lean_obj_tag(v___x_542_) == 0)
{
lean_object* v_a_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v_a_543_ = lean_ctor_get(v___x_542_, 0);
lean_inc(v_a_543_);
lean_dec_ref_known(v___x_542_, 1);
v___x_544_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___closed__5));
v___x_545_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_545_, 0, v___x_534_);
lean_ctor_set(v___x_545_, 1, v___x_544_);
v___x_546_ = lean_box(1);
v___x_547_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
lean_ctor_set(v___x_547_, 1, v_a_543_);
v___x_548_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_548_, 0, v_indent_445_);
lean_ctor_set(v___x_548_, 1, v___x_547_);
v___x_549_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_549_, 0, v___x_545_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
v_fmtElem_510_ = v___x_549_;
goto v___jp_509_;
}
else
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
lean_dec_ref_known(v___x_534_, 2);
lean_dec(v___x_508_);
lean_del_object(v___x_506_);
lean_dec(v_indent_445_);
v_a_550_ = lean_ctor_get(v___x_542_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_542_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___x_542_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_542_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_a_550_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
}
}
else
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_566_; 
lean_del_object(v___x_524_);
lean_dec(v___x_508_);
lean_del_object(v___x_506_);
lean_dec(v_varName_502_);
lean_dec_ref(v_value_501_);
lean_dec(v_indent_445_);
v_a_559_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_566_ == 0)
{
v___x_561_ = v___x_526_;
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_526_);
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
}
else
{
lean_object* v_a_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_576_; 
lean_dec(v_varName_502_);
lean_dec_ref(v_value_501_);
lean_dec_ref(v_type_500_);
lean_dec(v_indent_445_);
v_a_569_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_576_ == 0)
{
v___x_571_ = v___x_503_;
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_a_569_);
lean_dec(v___x_503_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_574_; 
if (v_isShared_572_ == 0)
{
v___x_574_ = v___x_571_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_a_569_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
}
else
{
lean_object* v_userName_577_; lean_object* v_type_578_; lean_object* v_varName_579_; lean_object* v___x_580_; lean_object* v_a_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_618_; 
v_userName_577_ = lean_ctor_get(v_localDecl_450_, 2);
lean_inc(v_userName_577_);
v_type_578_ = lean_ctor_get(v_localDecl_450_, 3);
lean_inc_ref(v_type_578_);
lean_dec_ref_known(v_localDecl_450_, 5);
v_varName_579_ = l_Lean_Name_simpMacroScopes(v_userName_577_);
v___x_580_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__0___redArg(v_type_578_, v_a_452_);
v_a_581_ = lean_ctor_get(v___x_580_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_580_);
if (v_isSharedCheck_618_ == 0)
{
v___x_583_ = v___x_580_;
v_isShared_584_ = v_isSharedCheck_618_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_a_581_);
lean_dec(v___x_580_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_618_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_593_; uint8_t v___x_594_; 
v___x_593_ = lean_box(0);
v___x_594_ = l_instBEqOption_beq___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__1(v_prevType_x3f_448_, v___x_593_);
if (v___x_594_ == 0)
{
lean_object* v___x_595_; uint8_t v___x_596_; 
lean_inc(v_a_581_);
v___x_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_595_, 0, v_a_581_);
v___x_596_ = l_instBEqOption_beq___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__1(v_prevType_x3f_448_, v___x_595_);
if (v___x_596_ == 0)
{
lean_object* v___x_597_; 
lean_del_object(v___x_583_);
lean_dec(v_a_581_);
v___x_597_ = l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending(v_indent_445_, v_varNames_447_, v_prevType_x3f_448_, v_fmt_449_, v_a_451_, v_a_452_, v_a_453_, v_a_454_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_609_; 
v_a_598_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_609_ == 0)
{
v___x_600_ = v___x_597_;
v_isShared_601_ = v_isSharedCheck_609_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_597_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_609_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_607_; 
v___x_602_ = lean_box(0);
v___x_603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_603_, 0, v_varName_579_);
lean_ctor_set(v___x_603_, 1, v___x_602_);
v___x_604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_604_, 0, v___x_595_);
lean_ctor_set(v___x_604_, 1, v_a_598_);
v___x_605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_605_, 0, v___x_603_);
lean_ctor_set(v___x_605_, 1, v___x_604_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 0, v___x_605_);
v___x_607_ = v___x_600_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___x_605_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
else
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_617_; 
lean_dec_ref_known(v___x_595_, 1);
lean_dec(v_varName_579_);
v_a_610_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_597_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_597_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_615_; 
if (v_isShared_613_ == 0)
{
v___x_615_ = v___x_612_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_a_610_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_595_, 1);
lean_dec(v_prevType_x3f_448_);
lean_dec(v_indent_445_);
goto v___jp_585_;
}
}
else
{
lean_dec(v_prevType_x3f_448_);
lean_dec(v_indent_445_);
goto v___jp_585_;
}
v___jp_585_:
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_591_; 
v___x_586_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_586_, 0, v_varName_579_);
lean_ctor_set(v___x_586_, 1, v_varNames_447_);
v___x_587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_587_, 0, v_a_581_);
v___x_588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
lean_ctor_set(v___x_588_, 1, v_fmt_449_);
v___x_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_586_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 0, v___x_589_);
v___x_591_ = v___x_583_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v___x_589_);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars___boxed(lean_object* v_indent_619_, lean_object* v_tactic_620_, lean_object* v_varNames_621_, lean_object* v_prevType_x3f_622_, lean_object* v_fmt_623_, lean_object* v_localDecl_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_){
_start:
{
uint8_t v_tactic_boxed_630_; lean_object* v_res_631_; 
v_tactic_boxed_630_ = lean_unbox(v_tactic_620_);
v_res_631_ = l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars(v_indent_619_, v_tactic_boxed_630_, v_varNames_621_, v_prevType_x3f_622_, v_fmt_623_, v_localDecl_624_, v_a_625_, v_a_626_, v_a_627_, v_a_628_);
lean_dec(v_a_628_);
lean_dec_ref(v_a_627_);
lean_dec(v_a_626_);
lean_dec_ref(v_a_625_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_ppGoal_spec__1___redArg(lean_object* v_lctx_632_, lean_object* v_localInsts_633_, lean_object* v_x_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_632_, v_localInsts_633_, v_x_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_);
if (lean_obj_tag(v___x_640_) == 0)
{
lean_object* v_a_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_648_; 
v_a_641_ = lean_ctor_get(v___x_640_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v___x_640_);
if (v_isSharedCheck_648_ == 0)
{
v___x_643_ = v___x_640_;
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_a_641_);
lean_dec(v___x_640_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_646_; 
if (v_isShared_644_ == 0)
{
v___x_646_ = v___x_643_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_a_641_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
return v___x_646_;
}
}
}
else
{
lean_object* v_a_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_656_; 
v_a_649_ = lean_ctor_get(v___x_640_, 0);
v_isSharedCheck_656_ = !lean_is_exclusive(v___x_640_);
if (v_isSharedCheck_656_ == 0)
{
v___x_651_ = v___x_640_;
v_isShared_652_ = v_isSharedCheck_656_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_a_649_);
lean_dec(v___x_640_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_656_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_654_; 
if (v_isShared_652_ == 0)
{
v___x_654_ = v___x_651_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_a_649_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
return v___x_654_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_ppGoal_spec__1___redArg___boxed(lean_object* v_lctx_657_, lean_object* v_localInsts_658_, lean_object* v_x_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_ppGoal_spec__1___redArg(v_lctx_657_, v_localInsts_658_, v_x_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_);
lean_dec(v___y_663_);
lean_dec_ref(v___y_662_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_ppGoal_spec__1(lean_object* v_00_u03b1_666_, lean_object* v_lctx_667_, lean_object* v_localInsts_668_, lean_object* v_x_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_){
_start:
{
lean_object* v___x_675_; 
v___x_675_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_ppGoal_spec__1___redArg(v_lctx_667_, v_localInsts_668_, v_x_669_, v___y_670_, v___y_671_, v___y_672_, v___y_673_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_ppGoal_spec__1___boxed(lean_object* v_00_u03b1_676_, lean_object* v_lctx_677_, lean_object* v_localInsts_678_, lean_object* v_x_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_){
_start:
{
lean_object* v_res_685_; 
v_res_685_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_ppGoal_spec__1(v_00_u03b1_676_, v_lctx_677_, v_localInsts_678_, v_x_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
lean_dec(v___y_683_);
lean_dec_ref(v___y_682_);
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
return v_res_685_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3___closed__0(void){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_686_ = lean_unsigned_to_nat(2u);
v___x_687_ = lean_nat_to_int(v___x_686_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3(uint8_t v___x_688_, uint8_t v___x_689_, uint8_t v___x_690_, lean_object* v_as_691_, size_t v_i_692_, size_t v_stop_693_, lean_object* v_b_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_){
_start:
{
lean_object* v_a_701_; lean_object* v___y_706_; uint8_t v___x_708_; 
v___x_708_ = lean_usize_dec_eq(v_i_692_, v_stop_693_);
if (v___x_708_ == 0)
{
lean_object* v___x_709_; 
v___x_709_ = lean_array_uget_borrowed(v_as_691_, v_i_692_);
if (lean_obj_tag(v___x_709_) == 0)
{
v_a_701_ = v_b_694_;
goto v___jp_700_;
}
else
{
lean_object* v_snd_710_; lean_object* v_val_711_; lean_object* v_fst_712_; lean_object* v_fst_713_; lean_object* v_snd_714_; lean_object* v___x_715_; 
v_snd_710_ = lean_ctor_get(v_b_694_, 1);
v_val_711_ = lean_ctor_get(v___x_709_, 0);
v_fst_712_ = lean_ctor_get(v_b_694_, 0);
v_fst_713_ = lean_ctor_get(v_snd_710_, 0);
v_snd_714_ = lean_ctor_get(v_snd_710_, 1);
v___x_715_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3___closed__0);
if (v___x_690_ == 0)
{
uint8_t v___x_720_; 
v___x_720_ = l_Lean_LocalDecl_isAuxDecl(v_val_711_);
if (v___x_720_ == 0)
{
goto v___jp_716_;
}
else
{
v_a_701_ = v_b_694_;
goto v___jp_700_;
}
}
else
{
goto v___jp_716_;
}
v___jp_716_:
{
if (v___x_688_ == 0)
{
uint8_t v___x_717_; 
v___x_717_ = l_Lean_LocalDecl_isImplementationDetail(v_val_711_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; 
lean_inc(v_snd_714_);
lean_inc(v_fst_713_);
lean_inc(v_fst_712_);
lean_dec_ref(v_b_694_);
lean_inc(v_val_711_);
v___x_718_ = l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars(v___x_715_, v___x_689_, v_fst_712_, v_fst_713_, v_snd_714_, v_val_711_, v___y_695_, v___y_696_, v___y_697_, v___y_698_);
v___y_706_ = v___x_718_;
goto v___jp_705_;
}
else
{
v_a_701_ = v_b_694_;
goto v___jp_700_;
}
}
else
{
lean_object* v___x_719_; 
lean_inc(v_snd_714_);
lean_inc(v_fst_713_);
lean_inc(v_fst_712_);
lean_dec_ref(v_b_694_);
lean_inc(v_val_711_);
v___x_719_ = l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars(v___x_715_, v___x_689_, v_fst_712_, v_fst_713_, v_snd_714_, v_val_711_, v___y_695_, v___y_696_, v___y_697_, v___y_698_);
v___y_706_ = v___x_719_;
goto v___jp_705_;
}
}
}
}
else
{
lean_object* v___x_721_; 
v___x_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_721_, 0, v_b_694_);
return v___x_721_;
}
v___jp_700_:
{
size_t v___x_702_; size_t v___x_703_; 
v___x_702_ = ((size_t)1ULL);
v___x_703_ = lean_usize_add(v_i_692_, v___x_702_);
v_i_692_ = v___x_703_;
v_b_694_ = v_a_701_;
goto _start;
}
v___jp_705_:
{
if (lean_obj_tag(v___y_706_) == 0)
{
lean_object* v_a_707_; 
v_a_707_ = lean_ctor_get(v___y_706_, 0);
lean_inc(v_a_707_);
lean_dec_ref_known(v___y_706_, 1);
v_a_701_ = v_a_707_;
goto v___jp_700_;
}
else
{
return v___y_706_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3___boxed(lean_object* v___x_722_, lean_object* v___x_723_, lean_object* v___x_724_, lean_object* v_as_725_, lean_object* v_i_726_, lean_object* v_stop_727_, lean_object* v_b_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_){
_start:
{
uint8_t v___x_4485__boxed_734_; uint8_t v___x_4486__boxed_735_; uint8_t v___x_4487__boxed_736_; size_t v_i_boxed_737_; size_t v_stop_boxed_738_; lean_object* v_res_739_; 
v___x_4485__boxed_734_ = lean_unbox(v___x_722_);
v___x_4486__boxed_735_ = lean_unbox(v___x_723_);
v___x_4487__boxed_736_ = lean_unbox(v___x_724_);
v_i_boxed_737_ = lean_unbox_usize(v_i_726_);
lean_dec(v_i_726_);
v_stop_boxed_738_ = lean_unbox_usize(v_stop_727_);
lean_dec(v_stop_727_);
v_res_739_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3(v___x_4485__boxed_734_, v___x_4486__boxed_735_, v___x_4487__boxed_736_, v_as_725_, v_i_boxed_737_, v_stop_boxed_738_, v_b_728_, v___y_729_, v___y_730_, v___y_731_, v___y_732_);
lean_dec(v___y_732_);
lean_dec_ref(v___y_731_);
lean_dec(v___y_730_);
lean_dec_ref(v___y_729_);
lean_dec_ref(v_as_725_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__4(uint8_t v___x_740_, uint8_t v___x_741_, uint8_t v___x_742_, lean_object* v_x_743_, lean_object* v_x_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_){
_start:
{
if (lean_obj_tag(v_x_743_) == 0)
{
lean_object* v_cs_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_763_; 
v_cs_750_ = lean_ctor_get(v_x_743_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v_x_743_);
if (v_isSharedCheck_763_ == 0)
{
v___x_752_ = v_x_743_;
v_isShared_753_ = v_isSharedCheck_763_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_cs_750_);
lean_dec(v_x_743_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_763_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_754_; lean_object* v___x_755_; uint8_t v___x_756_; 
v___x_754_ = lean_unsigned_to_nat(0u);
v___x_755_ = lean_array_get_size(v_cs_750_);
v___x_756_ = lean_nat_dec_lt(v___x_754_, v___x_755_);
if (v___x_756_ == 0)
{
lean_object* v___x_758_; 
lean_dec_ref(v_cs_750_);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 0, v_x_744_);
v___x_758_ = v___x_752_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_x_744_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
else
{
size_t v___x_760_; size_t v___x_761_; lean_object* v___x_762_; 
lean_del_object(v___x_752_);
v___x_760_ = ((size_t)0ULL);
v___x_761_ = lean_usize_of_nat(v___x_755_);
v___x_762_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2_spec__3(v___x_740_, v___x_741_, v___x_742_, v_cs_750_, v___x_760_, v___x_761_, v_x_744_, v___y_745_, v___y_746_, v___y_747_, v___y_748_);
lean_dec_ref(v_cs_750_);
return v___x_762_;
}
}
}
else
{
lean_object* v_vs_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_777_; 
v_vs_764_ = lean_ctor_get(v_x_743_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v_x_743_);
if (v_isSharedCheck_777_ == 0)
{
v___x_766_ = v_x_743_;
v_isShared_767_ = v_isSharedCheck_777_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_vs_764_);
lean_dec(v_x_743_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_777_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_768_; lean_object* v___x_769_; uint8_t v___x_770_; 
v___x_768_ = lean_unsigned_to_nat(0u);
v___x_769_ = lean_array_get_size(v_vs_764_);
v___x_770_ = lean_nat_dec_lt(v___x_768_, v___x_769_);
if (v___x_770_ == 0)
{
lean_object* v___x_772_; 
lean_dec_ref(v_vs_764_);
if (v_isShared_767_ == 0)
{
lean_ctor_set_tag(v___x_766_, 0);
lean_ctor_set(v___x_766_, 0, v_x_744_);
v___x_772_ = v___x_766_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_x_744_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
else
{
size_t v___x_774_; size_t v___x_775_; lean_object* v___x_776_; 
lean_del_object(v___x_766_);
v___x_774_ = ((size_t)0ULL);
v___x_775_ = lean_usize_of_nat(v___x_769_);
v___x_776_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3(v___x_740_, v___x_741_, v___x_742_, v_vs_764_, v___x_774_, v___x_775_, v_x_744_, v___y_745_, v___y_746_, v___y_747_, v___y_748_);
lean_dec_ref(v_vs_764_);
return v___x_776_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2_spec__3(uint8_t v___x_778_, uint8_t v___x_779_, uint8_t v___x_780_, lean_object* v_as_781_, size_t v_i_782_, size_t v_stop_783_, lean_object* v_b_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_){
_start:
{
uint8_t v___x_790_; 
v___x_790_ = lean_usize_dec_eq(v_i_782_, v_stop_783_);
if (v___x_790_ == 0)
{
lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_791_ = lean_array_uget_borrowed(v_as_781_, v_i_782_);
lean_inc(v___x_791_);
v___x_792_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__4(v___x_778_, v___x_779_, v___x_780_, v___x_791_, v_b_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v_a_793_; size_t v___x_794_; size_t v___x_795_; 
v_a_793_ = lean_ctor_get(v___x_792_, 0);
lean_inc(v_a_793_);
lean_dec_ref_known(v___x_792_, 1);
v___x_794_ = ((size_t)1ULL);
v___x_795_ = lean_usize_add(v_i_782_, v___x_794_);
v_i_782_ = v___x_795_;
v_b_784_ = v_a_793_;
goto _start;
}
else
{
return v___x_792_;
}
}
else
{
lean_object* v___x_797_; 
v___x_797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_797_, 0, v_b_784_);
return v___x_797_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v___x_798_, lean_object* v___x_799_, lean_object* v___x_800_, lean_object* v_as_801_, lean_object* v_i_802_, lean_object* v_stop_803_, lean_object* v_b_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
uint8_t v___x_4556__boxed_810_; uint8_t v___x_4557__boxed_811_; uint8_t v___x_4558__boxed_812_; size_t v_i_boxed_813_; size_t v_stop_boxed_814_; lean_object* v_res_815_; 
v___x_4556__boxed_810_ = lean_unbox(v___x_798_);
v___x_4557__boxed_811_ = lean_unbox(v___x_799_);
v___x_4558__boxed_812_ = lean_unbox(v___x_800_);
v_i_boxed_813_ = lean_unbox_usize(v_i_802_);
lean_dec(v_i_802_);
v_stop_boxed_814_ = lean_unbox_usize(v_stop_803_);
lean_dec(v_stop_803_);
v_res_815_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2_spec__3(v___x_4556__boxed_810_, v___x_4557__boxed_811_, v___x_4558__boxed_812_, v_as_801_, v_i_boxed_813_, v_stop_boxed_814_, v_b_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec_ref(v_as_801_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__4___boxed(lean_object* v___x_816_, lean_object* v___x_817_, lean_object* v___x_818_, lean_object* v_x_819_, lean_object* v_x_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_){
_start:
{
uint8_t v___x_4573__boxed_826_; uint8_t v___x_4574__boxed_827_; uint8_t v___x_4575__boxed_828_; lean_object* v_res_829_; 
v___x_4573__boxed_826_ = lean_unbox(v___x_816_);
v___x_4574__boxed_827_ = lean_unbox(v___x_817_);
v___x_4575__boxed_828_ = lean_unbox(v___x_818_);
v_res_829_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__4(v___x_4573__boxed_826_, v___x_4574__boxed_827_, v___x_4575__boxed_828_, v_x_819_, v_x_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
lean_dec(v___y_824_);
lean_dec_ref(v___y_823_);
lean_dec(v___y_822_);
lean_dec_ref(v___y_821_);
return v_res_829_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2(uint8_t v___x_831_, uint8_t v___x_832_, uint8_t v___x_833_, lean_object* v_x_834_, size_t v_x_835_, size_t v_x_836_, lean_object* v_x_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_){
_start:
{
if (lean_obj_tag(v_x_834_) == 0)
{
lean_object* v_cs_843_; lean_object* v___x_844_; size_t v___x_845_; lean_object* v_j_846_; lean_object* v___x_847_; size_t v___x_848_; size_t v___x_849_; size_t v___x_850_; size_t v___x_851_; size_t v___x_852_; size_t v___x_853_; lean_object* v___x_854_; 
v_cs_843_ = lean_ctor_get(v_x_834_, 0);
lean_inc_ref(v_cs_843_);
lean_dec_ref_known(v_x_834_, 1);
v___x_844_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2___closed__0);
v___x_845_ = lean_usize_shift_right(v_x_835_, v_x_836_);
v_j_846_ = lean_usize_to_nat(v___x_845_);
v___x_847_ = lean_array_get_borrowed(v___x_844_, v_cs_843_, v_j_846_);
v___x_848_ = ((size_t)1ULL);
v___x_849_ = lean_usize_shift_left(v___x_848_, v_x_836_);
v___x_850_ = lean_usize_sub(v___x_849_, v___x_848_);
v___x_851_ = lean_usize_land(v_x_835_, v___x_850_);
v___x_852_ = ((size_t)5ULL);
v___x_853_ = lean_usize_sub(v_x_836_, v___x_852_);
lean_inc(v___x_847_);
v___x_854_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2(v___x_831_, v___x_832_, v___x_833_, v___x_847_, v___x_851_, v___x_853_, v_x_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v_a_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; uint8_t v___x_859_; 
v_a_855_ = lean_ctor_get(v___x_854_, 0);
v___x_856_ = lean_unsigned_to_nat(1u);
v___x_857_ = lean_nat_add(v_j_846_, v___x_856_);
lean_dec(v_j_846_);
v___x_858_ = lean_array_get_size(v_cs_843_);
v___x_859_ = lean_nat_dec_lt(v___x_857_, v___x_858_);
if (v___x_859_ == 0)
{
lean_dec(v___x_857_);
lean_dec_ref(v_cs_843_);
return v___x_854_;
}
else
{
size_t v___x_860_; size_t v___x_861_; lean_object* v___x_862_; 
lean_inc(v_a_855_);
lean_dec_ref_known(v___x_854_, 1);
v___x_860_ = lean_usize_of_nat(v___x_857_);
lean_dec(v___x_857_);
v___x_861_ = lean_usize_of_nat(v___x_858_);
v___x_862_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2_spec__3(v___x_831_, v___x_832_, v___x_833_, v_cs_843_, v___x_860_, v___x_861_, v_a_855_, v___y_838_, v___y_839_, v___y_840_, v___y_841_);
lean_dec_ref(v_cs_843_);
return v___x_862_;
}
}
else
{
lean_dec(v_j_846_);
lean_dec_ref(v_cs_843_);
return v___x_854_;
}
}
else
{
lean_object* v_vs_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_876_; 
v_vs_863_ = lean_ctor_get(v_x_834_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v_x_834_);
if (v_isSharedCheck_876_ == 0)
{
v___x_865_ = v_x_834_;
v_isShared_866_ = v_isSharedCheck_876_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_vs_863_);
lean_dec(v_x_834_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_876_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_867_; lean_object* v___x_868_; uint8_t v___x_869_; 
v___x_867_ = lean_usize_to_nat(v_x_835_);
v___x_868_ = lean_array_get_size(v_vs_863_);
v___x_869_ = lean_nat_dec_lt(v___x_867_, v___x_868_);
if (v___x_869_ == 0)
{
lean_object* v___x_871_; 
lean_dec(v___x_867_);
lean_dec_ref(v_vs_863_);
if (v_isShared_866_ == 0)
{
lean_ctor_set_tag(v___x_865_, 0);
lean_ctor_set(v___x_865_, 0, v_x_837_);
v___x_871_ = v___x_865_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v_x_837_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
else
{
size_t v___x_873_; size_t v___x_874_; lean_object* v___x_875_; 
lean_del_object(v___x_865_);
v___x_873_ = lean_usize_of_nat(v___x_867_);
lean_dec(v___x_867_);
v___x_874_ = lean_usize_of_nat(v___x_868_);
v___x_875_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3(v___x_831_, v___x_832_, v___x_833_, v_vs_863_, v___x_873_, v___x_874_, v_x_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_);
lean_dec_ref(v_vs_863_);
return v___x_875_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2___boxed(lean_object* v___x_877_, lean_object* v___x_878_, lean_object* v___x_879_, lean_object* v_x_880_, lean_object* v_x_881_, lean_object* v_x_882_, lean_object* v_x_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_){
_start:
{
uint8_t v___x_4685__boxed_889_; uint8_t v___x_4686__boxed_890_; uint8_t v___x_4687__boxed_891_; size_t v_x_4689__boxed_892_; size_t v_x_4690__boxed_893_; lean_object* v_res_894_; 
v___x_4685__boxed_889_ = lean_unbox(v___x_877_);
v___x_4686__boxed_890_ = lean_unbox(v___x_878_);
v___x_4687__boxed_891_ = lean_unbox(v___x_879_);
v_x_4689__boxed_892_ = lean_unbox_usize(v_x_881_);
lean_dec(v_x_881_);
v_x_4690__boxed_893_ = lean_unbox_usize(v_x_882_);
lean_dec(v_x_882_);
v_res_894_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2(v___x_4685__boxed_889_, v___x_4686__boxed_890_, v___x_4687__boxed_891_, v_x_880_, v_x_4689__boxed_892_, v_x_4690__boxed_893_, v_x_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0(uint8_t v___x_895_, uint8_t v___x_896_, uint8_t v___x_897_, lean_object* v_t_898_, lean_object* v_init_899_, lean_object* v_start_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_){
_start:
{
lean_object* v___x_906_; uint8_t v___x_907_; 
v___x_906_ = lean_unsigned_to_nat(0u);
v___x_907_ = lean_nat_dec_eq(v_start_900_, v___x_906_);
if (v___x_907_ == 0)
{
lean_object* v_root_908_; lean_object* v_tail_909_; size_t v_shift_910_; lean_object* v_tailOff_911_; uint8_t v___x_912_; 
v_root_908_ = lean_ctor_get(v_t_898_, 0);
lean_inc_ref(v_root_908_);
v_tail_909_ = lean_ctor_get(v_t_898_, 1);
lean_inc_ref(v_tail_909_);
v_shift_910_ = lean_ctor_get_usize(v_t_898_, 4);
v_tailOff_911_ = lean_ctor_get(v_t_898_, 3);
lean_inc(v_tailOff_911_);
lean_dec_ref(v_t_898_);
v___x_912_ = lean_nat_dec_le(v_tailOff_911_, v_start_900_);
if (v___x_912_ == 0)
{
size_t v___x_913_; lean_object* v___x_914_; 
lean_dec(v_tailOff_911_);
v___x_913_ = lean_usize_of_nat(v_start_900_);
v___x_914_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__2(v___x_895_, v___x_896_, v___x_897_, v_root_908_, v___x_913_, v_shift_910_, v_init_899_, v___y_901_, v___y_902_, v___y_903_, v___y_904_);
if (lean_obj_tag(v___x_914_) == 0)
{
lean_object* v_a_915_; lean_object* v___x_916_; uint8_t v___x_917_; 
v_a_915_ = lean_ctor_get(v___x_914_, 0);
v___x_916_ = lean_array_get_size(v_tail_909_);
v___x_917_ = lean_nat_dec_lt(v___x_906_, v___x_916_);
if (v___x_917_ == 0)
{
lean_dec_ref(v_tail_909_);
return v___x_914_;
}
else
{
size_t v___x_918_; size_t v___x_919_; lean_object* v___x_920_; 
lean_inc(v_a_915_);
lean_dec_ref_known(v___x_914_, 1);
v___x_918_ = ((size_t)0ULL);
v___x_919_ = lean_usize_of_nat(v___x_916_);
v___x_920_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3(v___x_895_, v___x_896_, v___x_897_, v_tail_909_, v___x_918_, v___x_919_, v_a_915_, v___y_901_, v___y_902_, v___y_903_, v___y_904_);
lean_dec_ref(v_tail_909_);
return v___x_920_;
}
}
else
{
lean_dec_ref(v_tail_909_);
return v___x_914_;
}
}
else
{
lean_object* v___x_921_; lean_object* v___x_922_; uint8_t v___x_923_; 
lean_dec_ref(v_root_908_);
v___x_921_ = lean_nat_sub(v_start_900_, v_tailOff_911_);
lean_dec(v_tailOff_911_);
v___x_922_ = lean_array_get_size(v_tail_909_);
v___x_923_ = lean_nat_dec_lt(v___x_921_, v___x_922_);
if (v___x_923_ == 0)
{
lean_object* v___x_924_; 
lean_dec(v___x_921_);
lean_dec_ref(v_tail_909_);
v___x_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_924_, 0, v_init_899_);
return v___x_924_;
}
else
{
size_t v___x_925_; size_t v___x_926_; lean_object* v___x_927_; 
v___x_925_ = lean_usize_of_nat(v___x_921_);
lean_dec(v___x_921_);
v___x_926_ = lean_usize_of_nat(v___x_922_);
v___x_927_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3(v___x_895_, v___x_896_, v___x_897_, v_tail_909_, v___x_925_, v___x_926_, v_init_899_, v___y_901_, v___y_902_, v___y_903_, v___y_904_);
lean_dec_ref(v_tail_909_);
return v___x_927_;
}
}
}
else
{
lean_object* v_root_928_; lean_object* v_tail_929_; lean_object* v___x_930_; 
v_root_928_ = lean_ctor_get(v_t_898_, 0);
lean_inc_ref(v_root_928_);
v_tail_929_ = lean_ctor_get(v_t_898_, 1);
lean_inc_ref(v_tail_929_);
lean_dec_ref(v_t_898_);
v___x_930_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__4(v___x_895_, v___x_896_, v___x_897_, v_root_928_, v_init_899_, v___y_901_, v___y_902_, v___y_903_, v___y_904_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_object* v_a_931_; lean_object* v___x_932_; uint8_t v___x_933_; 
v_a_931_ = lean_ctor_get(v___x_930_, 0);
v___x_932_ = lean_array_get_size(v_tail_929_);
v___x_933_ = lean_nat_dec_lt(v___x_906_, v___x_932_);
if (v___x_933_ == 0)
{
lean_dec_ref(v_tail_929_);
return v___x_930_;
}
else
{
size_t v___x_934_; size_t v___x_935_; lean_object* v___x_936_; 
lean_inc(v_a_931_);
lean_dec_ref_known(v___x_930_, 1);
v___x_934_ = ((size_t)0ULL);
v___x_935_ = lean_usize_of_nat(v___x_932_);
v___x_936_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3(v___x_895_, v___x_896_, v___x_897_, v_tail_929_, v___x_934_, v___x_935_, v_a_931_, v___y_901_, v___y_902_, v___y_903_, v___y_904_);
lean_dec_ref(v_tail_929_);
return v___x_936_;
}
}
else
{
lean_dec_ref(v_tail_929_);
return v___x_930_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0___boxed(lean_object* v___x_937_, lean_object* v___x_938_, lean_object* v___x_939_, lean_object* v_t_940_, lean_object* v_init_941_, lean_object* v_start_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_){
_start:
{
uint8_t v___x_4789__boxed_948_; uint8_t v___x_4790__boxed_949_; uint8_t v___x_4791__boxed_950_; lean_object* v_res_951_; 
v___x_4789__boxed_948_ = lean_unbox(v___x_937_);
v___x_4790__boxed_949_ = lean_unbox(v___x_938_);
v___x_4791__boxed_950_ = lean_unbox(v___x_939_);
v_res_951_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0(v___x_4789__boxed_948_, v___x_4790__boxed_949_, v___x_4791__boxed_950_, v_t_940_, v_init_941_, v_start_942_, v___y_943_, v___y_944_, v___y_945_, v___y_946_);
lean_dec(v___y_946_);
lean_dec_ref(v___y_945_);
lean_dec(v___y_944_);
lean_dec_ref(v___y_943_);
lean_dec(v_start_942_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0(uint8_t v___x_952_, uint8_t v___x_953_, uint8_t v___x_954_, lean_object* v_lctx_955_, lean_object* v_init_956_, lean_object* v_start_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_){
_start:
{
lean_object* v_decls_963_; lean_object* v___x_964_; 
v_decls_963_ = lean_ctor_get(v_lctx_955_, 1);
lean_inc_ref(v_decls_963_);
lean_dec_ref(v_lctx_955_);
v___x_964_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0(v___x_952_, v___x_953_, v___x_954_, v_decls_963_, v_init_956_, v_start_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0___boxed(lean_object* v___x_965_, lean_object* v___x_966_, lean_object* v___x_967_, lean_object* v_lctx_968_, lean_object* v_init_969_, lean_object* v_start_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
uint8_t v___x_4865__boxed_976_; uint8_t v___x_4866__boxed_977_; uint8_t v___x_4867__boxed_978_; lean_object* v_res_979_; 
v___x_4865__boxed_976_ = lean_unbox(v___x_965_);
v___x_4866__boxed_977_ = lean_unbox(v___x_966_);
v___x_4867__boxed_978_ = lean_unbox(v___x_967_);
v_res_979_ = l_Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0(v___x_4865__boxed_976_, v___x_4866__boxed_977_, v___x_4867__boxed_978_, v_lctx_968_, v_init_969_, v_start_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
lean_dec(v_start_970_);
return v_res_979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ppGoal___lam__0(uint8_t v___x_983_, uint8_t v___x_984_, uint8_t v___x_985_, lean_object* v_fst_986_, lean_object* v___x_987_, lean_object* v___x_988_, lean_object* v___x_989_, lean_object* v_type_990_, lean_object* v_val_991_, lean_object* v_userName_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_){
_start:
{
lean_object* v___x_998_; 
v___x_998_ = l_Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0(v___x_983_, v___x_984_, v___x_985_, v_fst_986_, v___x_987_, v___x_988_, v___y_993_, v___y_994_, v___y_995_, v___y_996_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v_a_999_; lean_object* v_snd_1000_; lean_object* v_fst_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1058_; 
v_a_999_ = lean_ctor_get(v___x_998_, 0);
lean_inc(v_a_999_);
lean_dec_ref_known(v___x_998_, 1);
v_snd_1000_ = lean_ctor_get(v_a_999_, 1);
v_fst_1001_ = lean_ctor_get(v_a_999_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v_a_999_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1003_ = v_a_999_;
v_isShared_1004_ = v_isSharedCheck_1058_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_snd_1000_);
lean_inc(v_fst_1001_);
lean_dec(v_a_999_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1058_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v_fst_1005_; lean_object* v_snd_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1057_; 
v_fst_1005_ = lean_ctor_get(v_snd_1000_, 0);
v_snd_1006_ = lean_ctor_get(v_snd_1000_, 1);
v_isSharedCheck_1057_ = !lean_is_exclusive(v_snd_1000_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1008_ = v_snd_1000_;
v_isShared_1009_ = v_isSharedCheck_1057_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_snd_1006_);
lean_inc(v_fst_1005_);
lean_dec(v_snd_1000_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1057_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1010_; 
lean_inc(v___x_989_);
v___x_1010_ = l___private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_pushPending(v___x_989_, v_fst_1001_, v_fst_1005_, v_snd_1006_, v___y_993_, v___y_994_, v___y_995_, v___y_996_);
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1056_; 
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1056_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1013_ = v___x_1010_;
v_isShared_1014_ = v_isSharedCheck_1056_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_a_1011_);
lean_dec(v___x_1010_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1056_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1055_; 
v___x_1015_ = l___private_Lean_Meta_PPGoal_0__Lean_Meta_addLine(v_a_1011_);
v___x_1016_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_PPGoal_0__Lean_Meta_ppGoal_ppVars_spec__0___redArg(v_type_990_, v___y_994_);
v_a_1017_ = lean_ctor_get(v___x_1016_, 0);
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1019_ = v___x_1016_;
v_isShared_1020_ = v_isSharedCheck_1055_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_1016_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1055_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1021_; 
v___x_1021_ = l_Lean_Meta_ppExpr(v_a_1017_, v___y_993_, v___y_994_, v___y_995_, v___y_996_);
if (lean_obj_tag(v___x_1021_) == 0)
{
lean_object* v_a_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1054_; 
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1024_ = v___x_1021_;
v_isShared_1025_ = v_isSharedCheck_1054_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_a_1022_);
lean_dec(v___x_1021_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1054_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1026_; lean_object* v___x_1028_; 
v___x_1026_ = l_Lean_Meta_getGoalPrefix(v_val_991_);
if (v_isShared_1020_ == 0)
{
lean_ctor_set_tag(v___x_1019_, 3);
lean_ctor_set(v___x_1019_, 0, v___x_1026_);
v___x_1028_ = v___x_1019_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v___x_1026_);
v___x_1028_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
lean_object* v___x_1030_; 
if (v_isShared_1009_ == 0)
{
lean_ctor_set_tag(v___x_1008_, 5);
lean_ctor_set(v___x_1008_, 1, v___x_1028_);
lean_ctor_set(v___x_1008_, 0, v___x_1015_);
v___x_1030_ = v___x_1008_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v___x_1015_);
lean_ctor_set(v_reuseFailAlloc_1052_, 1, v___x_1028_);
v___x_1030_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
lean_object* v___x_1032_; 
if (v_isShared_1004_ == 0)
{
lean_ctor_set_tag(v___x_1003_, 4);
lean_ctor_set(v___x_1003_, 1, v_a_1022_);
lean_ctor_set(v___x_1003_, 0, v___x_989_);
v___x_1032_ = v___x_1003_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v___x_989_);
lean_ctor_set(v_reuseFailAlloc_1051_, 1, v_a_1022_);
v___x_1032_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
lean_object* v___x_1033_; 
v___x_1033_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1033_, 0, v___x_1030_);
lean_ctor_set(v___x_1033_, 1, v___x_1032_);
if (lean_obj_tag(v_userName_992_) == 0)
{
lean_object* v___x_1035_; 
lean_del_object(v___x_1013_);
if (v_isShared_1025_ == 0)
{
lean_ctor_set(v___x_1024_, 0, v___x_1033_);
v___x_1035_ = v___x_1024_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1033_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
else
{
lean_object* v___x_1037_; lean_object* v___x_1038_; uint8_t v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1042_; 
v___x_1037_ = ((lean_object*)(l_Lean_Meta_ppGoal___lam__0___closed__1));
v___x_1038_ = l_Lean_Name_eraseMacroScopes(v_userName_992_);
v___x_1039_ = 1;
v___x_1040_ = l_Lean_Name_toString(v___x_1038_, v___x_1039_);
if (v_isShared_1014_ == 0)
{
lean_ctor_set_tag(v___x_1013_, 3);
lean_ctor_set(v___x_1013_, 0, v___x_1040_);
v___x_1042_ = v___x_1013_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v___x_1040_);
v___x_1042_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1048_; 
v___x_1043_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1037_);
lean_ctor_set(v___x_1043_, 1, v___x_1042_);
v___x_1044_ = ((lean_object*)(l___private_Lean_Meta_PPGoal_0__Lean_Meta_addLine___closed__1));
v___x_1045_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1043_);
lean_ctor_set(v___x_1045_, 1, v___x_1044_);
v___x_1046_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1045_);
lean_ctor_set(v___x_1046_, 1, v___x_1033_);
if (v_isShared_1025_ == 0)
{
lean_ctor_set(v___x_1024_, 0, v___x_1046_);
v___x_1048_ = v___x_1024_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v___x_1046_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
return v___x_1048_;
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
lean_del_object(v___x_1019_);
lean_dec(v___x_1015_);
lean_del_object(v___x_1013_);
lean_del_object(v___x_1008_);
lean_del_object(v___x_1003_);
lean_dec(v___x_989_);
return v___x_1021_;
}
}
}
}
else
{
lean_del_object(v___x_1008_);
lean_del_object(v___x_1003_);
lean_dec_ref(v_type_990_);
lean_dec(v___x_989_);
return v___x_1010_;
}
}
}
}
else
{
lean_object* v_a_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1066_; 
lean_dec_ref(v_type_990_);
lean_dec(v___x_989_);
v_a_1059_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1061_ = v___x_998_;
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_a_1059_);
lean_dec(v___x_998_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1064_; 
if (v_isShared_1062_ == 0)
{
v___x_1064_ = v___x_1061_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v_a_1059_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ppGoal___lam__0___boxed(lean_object* v___x_1067_, lean_object* v___x_1068_, lean_object* v___x_1069_, lean_object* v_fst_1070_, lean_object* v___x_1071_, lean_object* v___x_1072_, lean_object* v___x_1073_, lean_object* v_type_1074_, lean_object* v_val_1075_, lean_object* v_userName_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
uint8_t v___x_4900__boxed_1082_; uint8_t v___x_4901__boxed_1083_; uint8_t v___x_4902__boxed_1084_; lean_object* v_res_1085_; 
v___x_4900__boxed_1082_ = lean_unbox(v___x_1067_);
v___x_4901__boxed_1083_ = lean_unbox(v___x_1068_);
v___x_4902__boxed_1084_ = lean_unbox(v___x_1069_);
v_res_1085_ = l_Lean_Meta_ppGoal___lam__0(v___x_4900__boxed_1082_, v___x_4901__boxed_1083_, v___x_4902__boxed_1084_, v_fst_1070_, v___x_1071_, v___x_1072_, v___x_1073_, v_type_1074_, v_val_1075_, v_userName_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v_userName_1076_);
lean_dec_ref(v_val_1075_);
lean_dec(v___x_1072_);
return v_res_1085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ppGoal(lean_object* v_mvarId_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_){
_start:
{
lean_object* v___x_1101_; lean_object* v_mctx_1102_; lean_object* v___x_1103_; 
v___x_1101_ = lean_st_ref_get(v_a_1097_);
v_mctx_1102_ = lean_ctor_get(v___x_1101_, 0);
lean_inc_ref(v_mctx_1102_);
lean_dec(v___x_1101_);
v___x_1103_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_1102_, v_mvarId_1095_);
lean_dec_ref(v_mctx_1102_);
if (lean_obj_tag(v___x_1103_) == 0)
{
lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1104_ = ((lean_object*)(l_Lean_Meta_ppGoal___closed__1));
v___x_1105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1105_, 0, v___x_1104_);
return v___x_1105_;
}
else
{
lean_object* v_val_1106_; lean_object* v_userName_1107_; lean_object* v_lctx_1108_; lean_object* v_type_1109_; lean_object* v_localInstances_1110_; uint8_t v_kind_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; uint8_t v___x_1114_; lean_object* v___x_1115_; uint8_t v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v_fst_1120_; lean_object* v___x_1121_; uint8_t v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___f_1128_; lean_object* v___x_1129_; 
v_val_1106_ = lean_ctor_get(v___x_1103_, 0);
lean_inc(v_val_1106_);
lean_dec_ref_known(v___x_1103_, 1);
v_userName_1107_ = lean_ctor_get(v_val_1106_, 0);
lean_inc(v_userName_1107_);
v_lctx_1108_ = lean_ctor_get(v_val_1106_, 1);
v_type_1109_ = lean_ctor_get(v_val_1106_, 2);
lean_inc_ref(v_type_1109_);
v_localInstances_1110_ = lean_ctor_get(v_val_1106_, 4);
lean_inc_ref(v_localInstances_1110_);
v_kind_1111_ = lean_ctor_get_uint8(v_val_1106_, sizeof(void*)*7);
v___x_1112_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_1098_);
v___x_1113_ = l_Lean_Meta_pp_auxDecls;
v___x_1114_ = l_Lean_Option_get___at___00Lean_Meta_ppGoal_shouldShowLetValue_spec__0(v___x_1112_, v___x_1113_);
v___x_1115_ = l_Lean_Meta_pp_implementationDetailHyps;
v___x_1116_ = l_Lean_Option_get___at___00Lean_Meta_ppGoal_shouldShowLetValue_spec__0(v___x_1112_, v___x_1115_);
v___x_1117_ = lean_box(1);
v___x_1118_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1112_);
lean_ctor_set(v___x_1118_, 1, v___x_1117_);
lean_ctor_set(v___x_1118_, 2, v___x_1117_);
lean_inc_ref(v_lctx_1108_);
v___x_1119_ = l_Lean_LocalContext_sanitizeNames(v_lctx_1108_, v___x_1118_);
v_fst_1120_ = lean_ctor_get(v___x_1119_, 0);
lean_inc_n(v_fst_1120_, 2);
lean_dec_ref(v___x_1119_);
v___x_1121_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Meta_ppGoal_spec__0_spec__0_spec__3___closed__0);
v___x_1122_ = l_Lean_MetavarKind_isSyntheticOpaque(v_kind_1111_);
v___x_1123_ = ((lean_object*)(l_Lean_Meta_ppGoal___closed__3));
v___x_1124_ = lean_unsigned_to_nat(0u);
v___x_1125_ = lean_box(v___x_1116_);
v___x_1126_ = lean_box(v___x_1122_);
v___x_1127_ = lean_box(v___x_1114_);
v___f_1128_ = lean_alloc_closure((void*)(l_Lean_Meta_ppGoal___lam__0___boxed), 15, 10);
lean_closure_set(v___f_1128_, 0, v___x_1125_);
lean_closure_set(v___f_1128_, 1, v___x_1126_);
lean_closure_set(v___f_1128_, 2, v___x_1127_);
lean_closure_set(v___f_1128_, 3, v_fst_1120_);
lean_closure_set(v___f_1128_, 4, v___x_1123_);
lean_closure_set(v___f_1128_, 5, v___x_1124_);
lean_closure_set(v___f_1128_, 6, v___x_1121_);
lean_closure_set(v___f_1128_, 7, v_type_1109_);
lean_closure_set(v___f_1128_, 8, v_val_1106_);
lean_closure_set(v___f_1128_, 9, v_userName_1107_);
v___x_1129_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_ppGoal_spec__1___redArg(v_fst_1120_, v_localInstances_1110_, v___f_1128_, v_a_1096_, v_a_1097_, v_a_1098_, v_a_1099_);
return v___x_1129_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ppGoal___boxed(lean_object* v_mvarId_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_){
_start:
{
lean_object* v_res_1136_; 
v_res_1136_ = l_Lean_Meta_ppGoal(v_mvarId_1130_, v_a_1131_, v_a_1132_, v_a_1133_, v_a_1134_);
lean_dec(v_a_1134_);
lean_dec_ref(v_a_1133_);
lean_dec(v_a_1132_);
lean_dec_ref(v_a_1131_);
lean_dec(v_mvarId_1130_);
return v_res_1136_;
}
}
lean_object* runtime_initialize_Lean_Meta_InferType(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_PPGoal(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_4182071446____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_pp_auxDecls = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_pp_auxDecls);
lean_dec_ref(res);
res = l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3119699492____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_pp_implementationDetailHyps = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_pp_implementationDetailHyps);
lean_dec_ref(res);
res = l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3613105029____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_pp_inaccessibleNames = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_pp_inaccessibleNames);
lean_dec_ref(res);
res = l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3896890698____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_pp_showLetValues = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_pp_showLetValues);
lean_dec_ref(res);
res = l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_1112997472____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_pp_showLetValues_threshold = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_pp_showLetValues_threshold);
lean_dec_ref(res);
res = l___private_Lean_Meta_PPGoal_0__Lean_Meta_initFn_00___x40_Lean_Meta_PPGoal_3655794009____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_pp_showLetValues_tactic_threshold = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_pp_showLetValues_tactic_threshold);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_PPGoal(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_InferType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_PPGoal(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_PPGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_PPGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_PPGoal(builtin);
}
#ifdef __cplusplus
}
#endif
