// Lean compiler output
// Module: Lean.Meta.ArgsPacker
// Imports: public import Lean.Meta.AppBuilder public import Lean.Meta.PProdN public import Lean.Meta.ArgsPacker.Basic import Init.Omega import Init.While
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
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isArrow(lean_object*);
lean_object* l_Lean_Expr_bindingName_x21(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Meta_PProdN_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "PSigma"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 171, 149, 177, 120, 131, 37, 223)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ArgsPacker_Unary_packType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l_Lean_Meta_ArgsPacker_Unary_packType___closed__0 = (const lean_object*)&l_Lean_Meta_ArgsPacker_Unary_packType___closed__0_value;
static const lean_ctor_object l_Lean_Meta_ArgsPacker_Unary_packType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ArgsPacker_Unary_packType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_object* l_Lean_Meta_ArgsPacker_Unary_packType___closed__1 = (const lean_object*)&l_Lean_Meta_ArgsPacker_Unary_packType___closed__1_value;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_packType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_packType___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_packType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_packType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Meta.ArgsPacker"};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0_value;
static const lean_string_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "_private.Lean.Meta.ArgsPacker.0.Lean.Meta.ArgsPacker.Unary.pack.go"};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__1_value;
static const lean_string_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "assertion violation: type.isAppOfArity ``PSigma 2\n      "};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__3;
static const lean_string_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 38, .m_data = "assertion violation: β.isLambda\n      "};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__5;
static const lean_string_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__6 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 171, 149, 177, 120, 131, 37, 223)}};
static const lean_ctor_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__6_value),LEAN_SCALAR_PTR_LITERAL(248, 249, 30, 71, 49, 108, 60, 175)}};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__7 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ArgsPacker_Unary_pack___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l_Lean_Meta_ArgsPacker_Unary_pack___closed__0 = (const lean_object*)&l_Lean_Meta_ArgsPacker_Unary_pack___closed__0_value;
static const lean_ctor_object l_Lean_Meta_ArgsPacker_Unary_pack___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ArgsPacker_Unary_packType___closed__0_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_ctor_object l_Lean_Meta_ArgsPacker_Unary_pack___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_ArgsPacker_Unary_pack___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_ArgsPacker_Unary_pack___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 186, 243, 194, 96, 12, 218, 7)}};
static const lean_object* l_Lean_Meta_ArgsPacker_Unary_pack___closed__1 = (const lean_object*)&l_Lean_Meta_ArgsPacker_Unary_pack___closed__1_value;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_pack___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_pack___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_pack(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_pack___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Unary_unpack_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Unary_unpack_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0 = (const lean_object*)&l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0_value;
static const lean_ctor_object l_Lean_Meta_ArgsPacker_Unary_unpack___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0_value)}};
static const lean_object* l_Lean_Meta_ArgsPacker_Unary_unpack___closed__1 = (const lean_object*)&l_Lean_Meta_ArgsPacker_Unary_unpack___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_unpack(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_unpack___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Unary_unpack_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Unary_unpack_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lean.Meta.ArgsPacker.Unary.uncurryType"};
static const lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__0_value;
static const lean_string_object l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "assertion violation: xs.size = varNames.size\n      "};
static const lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__1_value;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__2;
static const lean_string_object l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__3 = (const lean_object*)&l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__3_value;
static const lean_ctor_object l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "ArgsPacker.Binary.casesOn: Expected PSigma type, got "};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__0 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__1___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "casesOn"};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__2 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 171, 149, 177, 120, 131, 37, 223)}};
static const lean_ctor_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(225, 129, 3, 119, 45, 252, 168, 83)}};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__3 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.ArgsPacker.Unary.uncurry"};
static const lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__0_value;
static const lean_string_object l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0 = (const lean_object*)&l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0_value;
static const lean_string_object l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__1 = (const lean_object*)&l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__1_value;
static const lean_ctor_object l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__1_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__2 = (const lean_object*)&l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "curryType: Expected PSigma type, got "};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__1;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "curryType: Expected forall type, got "};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__0 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "curryPSigma: Expected PSigma type, got "};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "curryPSigma: expected forall type, got "};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__0 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__1;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "PSum"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 224, 206, 173, 168, 27, 198, 53)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_packType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_packType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Mutual.unpackType: Expected PSum type, got "};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__0 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___closed__0;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "assertion violation: args.size == 2\n        "};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__1_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Meta.ArgsPacker.0.Lean.Meta.ArgsPacker.Mutual.pack.go"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__2;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inr"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__3 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__3_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 224, 206, 173, 168, 27, 198, 53)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__4_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(201, 156, 94, 164, 220, 114, 107, 70)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__4 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__4_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inl"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__5 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__5_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 224, 206, 173, 168, 27, 198, 53)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__6_value_aux_0),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(14, 217, 178, 28, 107, 212, 157, 131)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__6 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_pack(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_pack___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Mutual_unpack_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Mutual_unpack_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_unpack(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_unpack___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Mutual_unpack_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Mutual_unpack_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "assertion violation: xType.isAppOfArity ``PSum 2\n      "};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__1_value;
static const lean_string_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "_private.Lean.Meta.ArgsPacker.0.Lean.Meta.ArgsPacker.Mutual.mkCodomain.go"};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__2;
static const lean_ctor_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 224, 206, 173, 168, 27, 198, 53)}};
static const lean_ctor_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 115, 173, 38, 27, 113, 160, 8)}};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___closed__0 = (const lean_object*)&l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_mkCodomain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryType___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Mutual.uncurryType: Expected forall type, got "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Mutual.uncurryTypeND: Expected equal codomains, but got "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " and "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Mutual.uncurryTypeND: Expected non-dependent types, got "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryTypeND(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryTypeND___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Mutual.casesOn: no alternatives"};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__0 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__1;
static const lean_string_object l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Mutual.casesOn: Expected PSum type, got "};
static const lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__2 = (const lean_object*)&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lean.Meta.ArgsPacker.Mutual.uncurryWithType"};
static const lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurry_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurry_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Meta.ArgsPacker.Mutual.uncurryND"};
static const lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_curryType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_curryType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_numFuncs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_numFuncs___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_arities_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_arities_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_arities(lean_object*);
static lean_once_cell_t l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0;
LEAN_EXPORT uint8_t l_Lean_Meta_ArgsPacker_onlyOneUnary(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_onlyOneUnary___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_ArgsPacker_pack___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Meta.ArgsPacker.pack"};
static const lean_object* l_Lean_Meta_ArgsPacker_pack___closed__0 = (const lean_object*)&l_Lean_Meta_ArgsPacker_pack___closed__0_value;
static const lean_string_object l_Lean_Meta_ArgsPacker_pack___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "assertion violation: fidx < argsPacker.numFuncs\n  "};
static const lean_object* l_Lean_Meta_ArgsPacker_pack___closed__1 = (const lean_object*)&l_Lean_Meta_ArgsPacker_pack___closed__1_value;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_pack___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_pack___closed__2;
static const lean_string_object l_Lean_Meta_ArgsPacker_pack___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "assertion violation: args.size == argsPacker.varNamess[fidx]!.size\n  "};
static const lean_object* l_Lean_Meta_ArgsPacker_pack___closed__3 = (const lean_object*)&l_Lean_Meta_ArgsPacker_pack___closed__3_value;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_pack___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_pack___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_pack(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_pack___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_unpack(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_unpack___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurryType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurryType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurry_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurry_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryWithType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryWithType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryND(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryND___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ArgsPacker_curryProj_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ArgsPacker_curryProj_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryProj___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryProj___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ArgsPacker_curryProj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "curryProj: index out of range"};
static const lean_object* l_Lean_Meta_ArgsPacker_curryProj___closed__0 = (const lean_object*)&l_Lean_Meta_ArgsPacker_curryProj___closed__0_value;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_curryProj___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_curryProj___closed__1;
static const lean_string_object l_Lean_Meta_ArgsPacker_curryProj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.ArgsPacker.curryProj"};
static const lean_object* l_Lean_Meta_ArgsPacker_curryProj___closed__2 = (const lean_object*)&l_Lean_Meta_ArgsPacker_curryProj___closed__2_value;
static const lean_string_object l_Lean_Meta_ArgsPacker_curryProj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "curryProj: expected forall type, got {}"};
static const lean_object* l_Lean_Meta_ArgsPacker_curryProj___closed__3 = (const lean_object*)&l_Lean_Meta_ArgsPacker_curryProj___closed__3_value;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_curryProj___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_curryProj___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryProj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_curryType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_curryType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ArgsPacker_curry___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_curry___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "curryParam: unexpected packed motive, not a forall"};
static const lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__1;
static const lean_string_object l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "curryParam: expected forall, got "};
static const lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0(lean_object* v___x_4_, lean_object* v_as_5_, size_t v_sz_6_, size_t v_i_7_, lean_object* v_b_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
uint8_t v___x_14_; 
v___x_14_ = lean_usize_dec_lt(v_i_7_, v_sz_6_);
if (v___x_14_ == 0)
{
lean_object* v___x_15_; 
v___x_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_15_, 0, v_b_8_);
return v___x_15_;
}
else
{
lean_object* v___x_16_; uint8_t v___x_17_; lean_object* v_a_18_; lean_object* v___x_19_; 
v___x_16_ = lean_unsigned_to_nat(0u);
v___x_17_ = lean_nat_dec_eq(v___x_4_, v___x_16_);
v_a_18_ = lean_array_uget_borrowed(v_as_5_, v_i_7_);
lean_inc(v___y_12_);
lean_inc_ref(v___y_11_);
lean_inc(v___y_10_);
lean_inc_ref(v___y_9_);
lean_inc(v_a_18_);
v___x_19_ = lean_infer_type(v_a_18_, v___y_9_, v___y_10_, v___y_11_, v___y_12_);
if (lean_obj_tag(v___x_19_) == 0)
{
lean_object* v_a_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_50_; 
v_a_20_ = lean_ctor_get(v___x_19_, 0);
v_isSharedCheck_50_ = !lean_is_exclusive(v___x_19_);
if (v_isSharedCheck_50_ == 0)
{
v___x_22_ = v___x_19_;
v_isShared_23_ = v_isSharedCheck_50_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_a_20_);
lean_dec(v___x_19_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_50_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; uint8_t v___x_27_; lean_object* v___x_28_; 
v___x_24_ = lean_unsigned_to_nat(1u);
v___x_25_ = lean_mk_empty_array_with_capacity(v___x_24_);
lean_inc(v_a_18_);
v___x_26_ = lean_array_push(v___x_25_, v_a_18_);
v___x_27_ = 1;
v___x_28_ = l_Lean_Meta_mkLambdaFVars(v___x_26_, v_b_8_, v___x_17_, v___x_14_, v___x_17_, v___x_14_, v___x_27_, v___y_9_, v___y_10_, v___y_11_, v___y_12_);
lean_dec_ref(v___x_26_);
if (lean_obj_tag(v___x_28_) == 0)
{
lean_object* v_a_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_49_; 
v_a_29_ = lean_ctor_get(v___x_28_, 0);
v_isSharedCheck_49_ = !lean_is_exclusive(v___x_28_);
if (v_isSharedCheck_49_ == 0)
{
v___x_31_ = v___x_28_;
v_isShared_32_ = v_isSharedCheck_49_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_a_29_);
lean_dec(v___x_28_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_49_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_33_; lean_object* v___x_35_; 
v___x_33_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1));
if (v_isShared_32_ == 0)
{
lean_ctor_set_tag(v___x_31_, 1);
lean_ctor_set(v___x_31_, 0, v_a_20_);
v___x_35_ = v___x_31_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_48_; 
v_reuseFailAlloc_48_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_48_, 0, v_a_20_);
v___x_35_ = v_reuseFailAlloc_48_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
lean_object* v___x_37_; 
if (v_isShared_23_ == 0)
{
lean_ctor_set_tag(v___x_22_, 1);
lean_ctor_set(v___x_22_, 0, v_a_29_);
v___x_37_ = v___x_22_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v_a_29_);
v___x_37_ = v_reuseFailAlloc_47_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_38_ = lean_unsigned_to_nat(2u);
v___x_39_ = lean_mk_empty_array_with_capacity(v___x_38_);
v___x_40_ = lean_array_push(v___x_39_, v___x_35_);
v___x_41_ = lean_array_push(v___x_40_, v___x_37_);
v___x_42_ = l_Lean_Meta_mkAppOptM(v___x_33_, v___x_41_, v___y_9_, v___y_10_, v___y_11_, v___y_12_);
if (lean_obj_tag(v___x_42_) == 0)
{
lean_object* v_a_43_; size_t v___x_44_; size_t v___x_45_; 
v_a_43_ = lean_ctor_get(v___x_42_, 0);
lean_inc(v_a_43_);
lean_dec_ref_known(v___x_42_, 1);
v___x_44_ = ((size_t)1ULL);
v___x_45_ = lean_usize_add(v_i_7_, v___x_44_);
v_i_7_ = v___x_45_;
v_b_8_ = v_a_43_;
goto _start;
}
else
{
return v___x_42_;
}
}
}
}
}
else
{
lean_del_object(v___x_22_);
lean_dec(v_a_20_);
return v___x_28_;
}
}
}
else
{
lean_dec_ref(v_b_8_);
return v___x_19_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___boxed(lean_object* v___x_51_, lean_object* v_as_52_, lean_object* v_sz_53_, lean_object* v_i_54_, lean_object* v_b_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_){
_start:
{
size_t v_sz_boxed_61_; size_t v_i_boxed_62_; lean_object* v_res_63_; 
v_sz_boxed_61_ = lean_unbox_usize(v_sz_53_);
lean_dec(v_sz_53_);
v_i_boxed_62_ = lean_unbox_usize(v_i_54_);
lean_dec(v_i_54_);
v_res_63_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0(v___x_51_, v_as_52_, v_sz_boxed_61_, v_i_boxed_62_, v_b_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
lean_dec(v___y_59_);
lean_dec_ref(v___y_58_);
lean_dec(v___y_57_);
lean_dec_ref(v___y_56_);
lean_dec_ref(v_as_52_);
lean_dec(v___x_51_);
return v_res_63_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_packType___closed__2(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_67_ = lean_box(0);
v___x_68_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_packType___closed__1));
v___x_69_ = l_Lean_mkConst(v___x_68_, v___x_67_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_packType(lean_object* v_xs_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; uint8_t v___x_78_; 
v___x_76_ = lean_array_get_size(v_xs_70_);
v___x_77_ = lean_unsigned_to_nat(0u);
v___x_78_ = lean_nat_dec_eq(v___x_76_, v___x_77_);
if (v___x_78_ == 0)
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_79_ = l_Lean_instInhabitedExpr;
v___x_80_ = lean_unsigned_to_nat(1u);
v___x_81_ = lean_nat_sub(v___x_76_, v___x_80_);
v___x_82_ = lean_array_get_borrowed(v___x_79_, v_xs_70_, v___x_81_);
lean_dec(v___x_81_);
lean_inc(v_a_74_);
lean_inc_ref(v_a_73_);
lean_inc(v_a_72_);
lean_inc_ref(v_a_71_);
lean_inc(v___x_82_);
v___x_83_ = lean_infer_type(v___x_82_, v_a_71_, v_a_72_, v_a_73_, v_a_74_);
if (lean_obj_tag(v___x_83_) == 0)
{
lean_object* v_a_84_; lean_object* v___x_85_; lean_object* v___x_86_; size_t v_sz_87_; size_t v___x_88_; lean_object* v___x_89_; 
v_a_84_ = lean_ctor_get(v___x_83_, 0);
lean_inc(v_a_84_);
lean_dec_ref_known(v___x_83_, 1);
v___x_85_ = lean_array_pop(v_xs_70_);
v___x_86_ = l_Array_reverse___redArg(v___x_85_);
v_sz_87_ = lean_array_size(v___x_86_);
v___x_88_ = ((size_t)0ULL);
v___x_89_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0(v___x_76_, v___x_86_, v_sz_87_, v___x_88_, v_a_84_, v_a_71_, v_a_72_, v_a_73_, v_a_74_);
lean_dec_ref(v___x_86_);
return v___x_89_;
}
else
{
lean_dec_ref(v_xs_70_);
return v___x_83_;
}
}
else
{
lean_object* v___x_90_; lean_object* v___x_91_; 
lean_dec_ref(v_xs_70_);
v___x_90_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_packType___closed__2, &l_Lean_Meta_ArgsPacker_Unary_packType___closed__2_once, _init_l_Lean_Meta_ArgsPacker_Unary_packType___closed__2);
v___x_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
return v___x_91_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_packType___boxed(lean_object* v_xs_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = l_Lean_Meta_ArgsPacker_Unary_packType(v_xs_92_, v_a_93_, v_a_94_, v_a_95_, v_a_96_);
lean_dec(v_a_96_);
lean_dec_ref(v_a_95_);
lean_dec(v_a_94_);
lean_dec_ref(v_a_93_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go_spec__0(lean_object* v_msg_99_){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = l_Lean_instInhabitedExpr;
v___x_101_ = lean_panic_fn_borrowed(v___x_100_, v_msg_99_);
return v___x_101_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__3(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_105_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__2));
v___x_106_ = lean_unsigned_to_nat(6u);
v___x_107_ = lean_unsigned_to_nat(86u);
v___x_108_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__1));
v___x_109_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0));
v___x_110_ = l_mkPanicMessageWithDecl(v___x_109_, v___x_108_, v___x_107_, v___x_106_, v___x_105_);
return v___x_110_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__5(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_112_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__4));
v___x_113_ = lean_unsigned_to_nat(6u);
v___x_114_ = lean_unsigned_to_nat(90u);
v___x_115_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__1));
v___x_116_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0));
v___x_117_ = l_mkPanicMessageWithDecl(v___x_116_, v___x_115_, v___x_114_, v___x_113_, v___x_112_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go(lean_object* v_args_122_, lean_object* v_i_123_, lean_object* v_type_124_){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_125_ = lean_array_get_size(v_args_122_);
v___x_126_ = lean_unsigned_to_nat(1u);
v___x_127_ = lean_nat_sub(v___x_125_, v___x_126_);
v___x_128_ = lean_nat_dec_lt(v_i_123_, v___x_127_);
lean_dec(v___x_127_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = l_Lean_instInhabitedExpr;
v___x_130_ = lean_array_get_borrowed(v___x_129_, v_args_122_, v_i_123_);
lean_inc(v___x_130_);
return v___x_130_;
}
else
{
lean_object* v___x_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_131_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1));
v___x_132_ = lean_unsigned_to_nat(2u);
v___x_133_ = l_Lean_Expr_isAppOfArity(v_type_124_, v___x_131_, v___x_132_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__3, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__3_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__3);
v___x_135_ = l_panic___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go_spec__0(v___x_134_);
return v___x_135_;
}
else
{
lean_object* v_00_u03b2_136_; uint8_t v___x_137_; 
v_00_u03b2_136_ = l_Lean_Expr_appArg_x21(v_type_124_);
v___x_137_ = l_Lean_Expr_isLambda(v_00_u03b2_136_);
if (v___x_137_ == 0)
{
lean_object* v___x_138_; lean_object* v___x_139_; 
lean_dec_ref(v_00_u03b2_136_);
v___x_138_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__5, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__5_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__5);
v___x_139_ = l_panic___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go_spec__0(v___x_138_);
return v___x_139_;
}
else
{
lean_object* v_arg_140_; lean_object* v___x_141_; lean_object* v_us_142_; lean_object* v___x_143_; lean_object* v_00_u03b1_144_; lean_object* v___x_145_; lean_object* v_type_146_; lean_object* v___x_147_; lean_object* v_rest_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v_arg_140_ = lean_array_fget_borrowed(v_args_122_, v_i_123_);
v___x_141_ = l_Lean_Expr_getAppFn(v_type_124_);
v_us_142_ = l_Lean_Expr_constLevels_x21(v___x_141_);
lean_dec_ref(v___x_141_);
v___x_143_ = l_Lean_Expr_appFn_x21(v_type_124_);
v_00_u03b1_144_ = l_Lean_Expr_appArg_x21(v___x_143_);
lean_dec_ref(v___x_143_);
v___x_145_ = l_Lean_Expr_bindingBody_x21(v_00_u03b2_136_);
v_type_146_ = lean_expr_instantiate1(v___x_145_, v_arg_140_);
lean_dec_ref(v___x_145_);
v___x_147_ = lean_nat_add(v_i_123_, v___x_126_);
v_rest_148_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go(v_args_122_, v___x_147_, v_type_146_);
lean_dec_ref(v_type_146_);
lean_dec(v___x_147_);
v___x_149_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__7));
v___x_150_ = l_Lean_mkConst(v___x_149_, v_us_142_);
lean_inc(v_arg_140_);
v___x_151_ = l_Lean_mkApp4(v___x_150_, v_00_u03b1_144_, v_00_u03b2_136_, v_arg_140_, v_rest_148_);
return v___x_151_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___boxed(lean_object* v_args_152_, lean_object* v_i_153_, lean_object* v_type_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go(v_args_152_, v_i_153_, v_type_154_);
lean_dec_ref(v_type_154_);
lean_dec(v_i_153_);
lean_dec_ref(v_args_152_);
return v_res_155_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_pack___closed__2(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_160_ = lean_box(0);
v___x_161_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_pack___closed__1));
v___x_162_ = l_Lean_mkConst(v___x_161_, v___x_160_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_pack(lean_object* v_type_163_, lean_object* v_args_164_){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; uint8_t v___x_167_; 
v___x_165_ = lean_array_get_size(v_args_164_);
v___x_166_ = lean_unsigned_to_nat(0u);
v___x_167_ = lean_nat_dec_eq(v___x_165_, v___x_166_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; 
v___x_168_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go(v_args_164_, v___x_166_, v_type_163_);
return v___x_168_;
}
else
{
lean_object* v___x_169_; 
v___x_169_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_pack___closed__2, &l_Lean_Meta_ArgsPacker_Unary_pack___closed__2_once, _init_l_Lean_Meta_ArgsPacker_Unary_pack___closed__2);
return v___x_169_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_pack___boxed(lean_object* v_type_170_, lean_object* v_args_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Lean_Meta_ArgsPacker_Unary_pack(v_type_170_, v_args_171_);
lean_dec_ref(v_args_171_);
lean_dec_ref(v_type_170_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Unary_unpack_spec__0___redArg(lean_object* v_arity_173_, lean_object* v_a_174_){
_start:
{
lean_object* v_fst_175_; lean_object* v_snd_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_206_; 
v_fst_175_ = lean_ctor_get(v_a_174_, 0);
v_snd_176_ = lean_ctor_get(v_a_174_, 1);
v_isSharedCheck_206_ = !lean_is_exclusive(v_a_174_);
if (v_isSharedCheck_206_ == 0)
{
v___x_178_ = v_a_174_;
v_isShared_179_ = v_isSharedCheck_206_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_snd_176_);
lean_inc(v_fst_175_);
lean_dec(v_a_174_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_206_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; uint8_t v___x_183_; 
v___x_180_ = lean_array_get_size(v_snd_176_);
v___x_181_ = lean_unsigned_to_nat(1u);
v___x_182_ = lean_nat_add(v___x_180_, v___x_181_);
v___x_183_ = lean_nat_dec_lt(v___x_182_, v_arity_173_);
lean_dec(v___x_182_);
if (v___x_183_ == 0)
{
lean_object* v___x_185_; 
if (v_isShared_179_ == 0)
{
v___x_185_ = v___x_178_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_fst_175_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v_snd_176_);
v___x_185_ = v_reuseFailAlloc_187_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
lean_object* v___x_186_; 
v___x_186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
return v___x_186_;
}
}
else
{
lean_object* v___x_188_; lean_object* v___x_189_; uint8_t v___x_190_; 
v___x_188_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__7));
v___x_189_ = lean_unsigned_to_nat(4u);
v___x_190_ = l_Lean_Expr_isAppOfArity(v_fst_175_, v___x_188_, v___x_189_);
if (v___x_190_ == 0)
{
lean_object* v___x_191_; 
lean_del_object(v___x_178_);
lean_dec(v_snd_176_);
lean_dec(v_fst_175_);
v___x_191_ = lean_box(0);
return v___x_191_;
}
else
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_203_; 
v___x_192_ = lean_unsigned_to_nat(2u);
v___x_193_ = l_Lean_Expr_getAppNumArgs(v_fst_175_);
v___x_194_ = lean_nat_sub(v___x_193_, v___x_192_);
v___x_195_ = lean_nat_sub(v___x_194_, v___x_181_);
lean_dec(v___x_194_);
v___x_196_ = l_Lean_Expr_getRevArg_x21(v_fst_175_, v___x_195_);
v___x_197_ = lean_array_push(v_snd_176_, v___x_196_);
v___x_198_ = lean_unsigned_to_nat(3u);
v___x_199_ = lean_nat_sub(v___x_193_, v___x_198_);
lean_dec(v___x_193_);
v___x_200_ = lean_nat_sub(v___x_199_, v___x_181_);
lean_dec(v___x_199_);
v___x_201_ = l_Lean_Expr_getRevArg_x21(v_fst_175_, v___x_200_);
lean_dec(v_fst_175_);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 1, v___x_197_);
lean_ctor_set(v___x_178_, 0, v___x_201_);
v___x_203_ = v___x_178_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v___x_201_);
lean_ctor_set(v_reuseFailAlloc_205_, 1, v___x_197_);
v___x_203_ = v_reuseFailAlloc_205_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
v_a_174_ = v___x_203_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Unary_unpack_spec__0___redArg___boxed(lean_object* v_arity_207_, lean_object* v_a_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Unary_unpack_spec__0___redArg(v_arity_207_, v_a_208_);
lean_dec(v_arity_207_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_unpack(lean_object* v_arity_214_, lean_object* v_e_215_){
_start:
{
lean_object* v___x_216_; uint8_t v___x_217_; 
v___x_216_ = lean_unsigned_to_nat(0u);
v___x_217_ = lean_nat_dec_eq(v_arity_214_, v___x_216_);
if (v___x_217_ == 0)
{
lean_object* v_args_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v_args_218_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0));
v___x_219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_219_, 0, v_e_215_);
lean_ctor_set(v___x_219_, 1, v_args_218_);
v___x_220_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Unary_unpack_spec__0___redArg(v_arity_214_, v___x_219_);
if (lean_obj_tag(v___x_220_) == 0)
{
lean_object* v___x_221_; 
v___x_221_ = lean_box(0);
return v___x_221_;
}
else
{
lean_object* v_val_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_232_; 
v_val_222_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_232_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_232_ == 0)
{
v___x_224_ = v___x_220_;
v_isShared_225_ = v_isSharedCheck_232_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_val_222_);
lean_dec(v___x_220_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_232_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v_fst_226_; lean_object* v_snd_227_; lean_object* v___x_228_; lean_object* v___x_230_; 
v_fst_226_ = lean_ctor_get(v_val_222_, 0);
lean_inc(v_fst_226_);
v_snd_227_ = lean_ctor_get(v_val_222_, 1);
lean_inc(v_snd_227_);
lean_dec(v_val_222_);
v___x_228_ = lean_array_push(v_snd_227_, v_fst_226_);
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 0, v___x_228_);
v___x_230_ = v___x_224_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v___x_228_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
}
else
{
lean_object* v___x_233_; 
lean_dec_ref(v_e_215_);
v___x_233_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_unpack___closed__1));
return v___x_233_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_unpack___boxed(lean_object* v_arity_234_, lean_object* v_e_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Lean_Meta_ArgsPacker_Unary_unpack(v_arity_234_, v_e_235_);
lean_dec(v_arity_234_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Unary_unpack_spec__0(lean_object* v_arity_237_, lean_object* v_inst_238_, lean_object* v_a_239_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Unary_unpack_spec__0___redArg(v_arity_237_, v_a_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Unary_unpack_spec__0___boxed(lean_object* v_arity_241_, lean_object* v_inst_242_, lean_object* v_a_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Unary_unpack_spec__0(v_arity_241_, v_inst_242_, v_a_243_);
lean_dec(v_arity_241_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0___redArg(lean_object* v_upperBound_245_, lean_object* v_a_246_, lean_object* v_b_247_){
_start:
{
uint8_t v___x_248_; 
v___x_248_ = lean_nat_dec_lt(v_a_246_, v_upperBound_245_);
if (v___x_248_ == 0)
{
lean_dec(v_a_246_);
return v_b_247_;
}
else
{
lean_object* v_fst_249_; lean_object* v_snd_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_265_; 
v_fst_249_ = lean_ctor_get(v_b_247_, 0);
v_snd_250_ = lean_ctor_get(v_b_247_, 1);
v_isSharedCheck_265_ = !lean_is_exclusive(v_b_247_);
if (v_isSharedCheck_265_ == 0)
{
v___x_252_ = v_b_247_;
v_isShared_253_ = v_isSharedCheck_265_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_snd_250_);
lean_inc(v_fst_249_);
lean_dec(v_b_247_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_265_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_261_; 
v___x_254_ = lean_unsigned_to_nat(1u);
v___x_255_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1));
v___x_256_ = lean_unsigned_to_nat(0u);
lean_inc(v_snd_250_);
v___x_257_ = l_Lean_mkProj(v___x_255_, v___x_256_, v_snd_250_);
v___x_258_ = lean_array_push(v_fst_249_, v___x_257_);
v___x_259_ = l_Lean_mkProj(v___x_255_, v___x_254_, v_snd_250_);
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 1, v___x_259_);
lean_ctor_set(v___x_252_, 0, v___x_258_);
v___x_261_ = v___x_252_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___x_258_);
lean_ctor_set(v_reuseFailAlloc_264_, 1, v___x_259_);
v___x_261_ = v_reuseFailAlloc_264_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
lean_object* v___x_262_; 
v___x_262_ = lean_nat_add(v_a_246_, v___x_254_);
lean_dec(v_a_246_);
v_a_246_ = v___x_262_;
v_b_247_ = v___x_261_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0___redArg___boxed(lean_object* v_upperBound_266_, lean_object* v_a_267_, lean_object* v_b_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0___redArg(v_upperBound_266_, v_a_267_, v_b_268_);
lean_dec(v_upperBound_266_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems(lean_object* v_t_270_, lean_object* v_arity_271_){
_start:
{
lean_object* v___x_272_; uint8_t v___x_273_; 
v___x_272_ = lean_unsigned_to_nat(0u);
v___x_273_ = lean_nat_dec_eq(v_arity_271_, v___x_272_);
if (v___x_273_ == 0)
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v_result_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v_fst_279_; lean_object* v_snd_280_; lean_object* v___x_281_; 
v___x_274_ = lean_unsigned_to_nat(1u);
v___x_275_ = lean_nat_sub(v_arity_271_, v___x_274_);
v_result_276_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0));
v___x_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_277_, 0, v_result_276_);
lean_ctor_set(v___x_277_, 1, v_t_270_);
v___x_278_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0___redArg(v___x_275_, v___x_272_, v___x_277_);
lean_dec(v___x_275_);
v_fst_279_ = lean_ctor_get(v___x_278_, 0);
lean_inc(v_fst_279_);
v_snd_280_ = lean_ctor_get(v___x_278_, 1);
lean_inc(v_snd_280_);
lean_dec_ref(v___x_278_);
v___x_281_ = lean_array_push(v_fst_279_, v_snd_280_);
return v___x_281_;
}
else
{
lean_object* v___x_282_; 
lean_dec_ref(v_t_270_);
v___x_282_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0));
return v___x_282_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems___boxed(lean_object* v_t_283_, lean_object* v_arity_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems(v_t_283_, v_arity_284_);
lean_dec(v_arity_284_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0(lean_object* v_upperBound_286_, lean_object* v_inst_287_, lean_object* v_R_288_, lean_object* v_a_289_, lean_object* v_b_290_, lean_object* v_c_291_){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0___redArg(v_upperBound_286_, v_a_289_, v_b_290_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0___boxed(lean_object* v_upperBound_293_, lean_object* v_inst_294_, lean_object* v_R_295_, lean_object* v_a_296_, lean_object* v_b_297_, lean_object* v_c_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems_spec__0(v_upperBound_293_, v_inst_294_, v_R_295_, v_a_296_, v_b_297_, v_c_298_);
lean_dec(v_upperBound_293_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(lean_object* v_msg_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v___f_307_; lean_object* v___x_606__overap_308_; lean_object* v___x_309_; 
v___f_307_ = ((lean_object*)(l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0___closed__0));
v___x_606__overap_308_ = lean_panic_fn_borrowed(v___f_307_, v_msg_301_);
lean_inc(v___y_305_);
lean_inc_ref(v___y_304_);
lean_inc(v___y_303_);
lean_inc_ref(v___y_302_);
v___x_309_ = lean_apply_5(v___x_606__overap_308_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, lean_box(0));
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0___boxed(lean_object* v_msg_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(v_msg_310_, v___y_311_, v___y_312_, v___y_313_, v___y_314_);
lean_dec(v___y_314_);
lean_dec_ref(v___y_313_);
lean_dec(v___y_312_);
lean_dec_ref(v___y_311_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg___lam__0(lean_object* v_k_317_, lean_object* v_b_318_, lean_object* v_c_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_){
_start:
{
lean_object* v___x_325_; 
lean_inc(v___y_323_);
lean_inc_ref(v___y_322_);
lean_inc(v___y_321_);
lean_inc_ref(v___y_320_);
v___x_325_ = lean_apply_7(v_k_317_, v_b_318_, v_c_319_, v___y_320_, v___y_321_, v___y_322_, v___y_323_, lean_box(0));
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg___lam__0___boxed(lean_object* v_k_326_, lean_object* v_b_327_, lean_object* v_c_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg___lam__0(v_k_326_, v_b_327_, v_c_328_, v___y_329_, v___y_330_, v___y_331_, v___y_332_);
lean_dec(v___y_332_);
lean_dec_ref(v___y_331_);
lean_dec(v___y_330_);
lean_dec_ref(v___y_329_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg(lean_object* v_type_335_, lean_object* v_maxFVars_x3f_336_, lean_object* v_k_337_, uint8_t v_cleanupAnnotations_338_, uint8_t v_whnfType_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_){
_start:
{
lean_object* v___f_345_; lean_object* v___x_346_; 
v___f_345_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_345_, 0, v_k_337_);
v___x_346_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_335_, v_maxFVars_x3f_336_, v___f_345_, v_cleanupAnnotations_338_, v_whnfType_339_, v___y_340_, v___y_341_, v___y_342_, v___y_343_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_354_; 
v_a_347_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_354_ == 0)
{
v___x_349_ = v___x_346_;
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_346_);
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
v_reuseFailAlloc_353_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_362_; 
v_a_355_ = lean_ctor_get(v___x_346_, 0);
v_isSharedCheck_362_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_362_ == 0)
{
v___x_357_ = v___x_346_;
v_isShared_358_ = v_isSharedCheck_362_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_a_355_);
lean_dec(v___x_346_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_362_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_360_; 
if (v_isShared_358_ == 0)
{
v___x_360_ = v___x_357_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_a_355_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
return v___x_360_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg___boxed(lean_object* v_type_363_, lean_object* v_maxFVars_x3f_364_, lean_object* v_k_365_, lean_object* v_cleanupAnnotations_366_, lean_object* v_whnfType_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_373_; uint8_t v_whnfType_boxed_374_; lean_object* v_res_375_; 
v_cleanupAnnotations_boxed_373_ = lean_unbox(v_cleanupAnnotations_366_);
v_whnfType_boxed_374_ = lean_unbox(v_whnfType_367_);
v_res_375_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg(v_type_363_, v_maxFVars_x3f_364_, v_k_365_, v_cleanupAnnotations_boxed_373_, v_whnfType_boxed_374_, v___y_368_, v___y_369_, v___y_370_, v___y_371_);
lean_dec(v___y_371_);
lean_dec_ref(v___y_370_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2(lean_object* v_00_u03b1_376_, lean_object* v_type_377_, lean_object* v_maxFVars_x3f_378_, lean_object* v_k_379_, uint8_t v_cleanupAnnotations_380_, uint8_t v_whnfType_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_){
_start:
{
lean_object* v___x_387_; 
v___x_387_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg(v_type_377_, v_maxFVars_x3f_378_, v_k_379_, v_cleanupAnnotations_380_, v_whnfType_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___boxed(lean_object* v_00_u03b1_388_, lean_object* v_type_389_, lean_object* v_maxFVars_x3f_390_, lean_object* v_k_391_, lean_object* v_cleanupAnnotations_392_, lean_object* v_whnfType_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_399_; uint8_t v_whnfType_boxed_400_; lean_object* v_res_401_; 
v_cleanupAnnotations_boxed_399_ = lean_unbox(v_cleanupAnnotations_392_);
v_whnfType_boxed_400_ = lean_unbox(v_whnfType_393_);
v_res_401_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2(v_00_u03b1_388_, v_type_389_, v_maxFVars_x3f_390_, v_k_391_, v_cleanupAnnotations_boxed_399_, v_whnfType_boxed_400_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__0(lean_object* v___x_402_, lean_object* v_type_403_, uint8_t v___x_404_, uint8_t v___x_405_, lean_object* v_tuple_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
lean_inc_ref(v_tuple_406_);
v___x_412_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_mkTupleElems(v_tuple_406_, v___x_402_);
v___x_413_ = l_Lean_Meta_instantiateForall(v_type_403_, v___x_412_, v___y_407_, v___y_408_, v___y_409_, v___y_410_);
lean_dec_ref(v___x_412_);
if (lean_obj_tag(v___x_413_) == 0)
{
lean_object* v_a_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; uint8_t v___x_418_; lean_object* v___x_419_; 
v_a_414_ = lean_ctor_get(v___x_413_, 0);
lean_inc(v_a_414_);
lean_dec_ref_known(v___x_413_, 1);
v___x_415_ = lean_unsigned_to_nat(1u);
v___x_416_ = lean_mk_empty_array_with_capacity(v___x_415_);
v___x_417_ = lean_array_push(v___x_416_, v_tuple_406_);
v___x_418_ = 1;
v___x_419_ = l_Lean_Meta_mkForallFVars(v___x_417_, v_a_414_, v___x_404_, v___x_405_, v___x_405_, v___x_418_, v___y_407_, v___y_408_, v___y_409_, v___y_410_);
lean_dec_ref(v___x_417_);
return v___x_419_;
}
else
{
lean_dec_ref(v_tuple_406_);
return v___x_413_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__0___boxed(lean_object* v___x_420_, lean_object* v_type_421_, lean_object* v___x_422_, lean_object* v___x_423_, lean_object* v_tuple_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_){
_start:
{
uint8_t v___x_1414__boxed_430_; uint8_t v___x_1415__boxed_431_; lean_object* v_res_432_; 
v___x_1414__boxed_430_ = lean_unbox(v___x_422_);
v___x_1415__boxed_431_ = lean_unbox(v___x_423_);
v_res_432_ = l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__0(v___x_420_, v_type_421_, v___x_1414__boxed_430_, v___x_1415__boxed_431_, v_tuple_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_);
lean_dec(v___y_428_);
lean_dec_ref(v___y_427_);
lean_dec(v___y_426_);
lean_dec_ref(v___y_425_);
lean_dec(v___x_420_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg___lam__0(lean_object* v_k_433_, lean_object* v_b_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_){
_start:
{
lean_object* v___x_440_; 
lean_inc(v___y_438_);
lean_inc_ref(v___y_437_);
lean_inc(v___y_436_);
lean_inc_ref(v___y_435_);
v___x_440_ = lean_apply_6(v_k_433_, v_b_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, lean_box(0));
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v_k_441_, lean_object* v_b_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg___lam__0(v_k_441_, v_b_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
lean_dec(v___y_444_);
lean_dec_ref(v___y_443_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg(lean_object* v_name_449_, uint8_t v_bi_450_, lean_object* v_type_451_, lean_object* v_k_452_, uint8_t v_kind_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
lean_object* v___f_459_; lean_object* v___x_460_; 
v___f_459_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_459_, 0, v_k_452_);
v___x_460_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_449_, v_bi_450_, v_type_451_, v___f_459_, v_kind_453_, v___y_454_, v___y_455_, v___y_456_, v___y_457_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v_a_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_468_; 
v_a_461_ = lean_ctor_get(v___x_460_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_460_);
if (v_isSharedCheck_468_ == 0)
{
v___x_463_ = v___x_460_;
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_a_461_);
lean_dec(v___x_460_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_466_; 
if (v_isShared_464_ == 0)
{
v___x_466_ = v___x_463_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_a_461_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
else
{
lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_476_; 
v_a_469_ = lean_ctor_get(v___x_460_, 0);
v_isSharedCheck_476_ = !lean_is_exclusive(v___x_460_);
if (v_isSharedCheck_476_ == 0)
{
v___x_471_ = v___x_460_;
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_a_469_);
lean_dec(v___x_460_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_474_; 
if (v_isShared_472_ == 0)
{
v___x_474_ = v___x_471_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v_a_469_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg___boxed(lean_object* v_name_477_, lean_object* v_bi_478_, lean_object* v_type_479_, lean_object* v_k_480_, lean_object* v_kind_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
uint8_t v_bi_boxed_487_; uint8_t v_kind_boxed_488_; lean_object* v_res_489_; 
v_bi_boxed_487_ = lean_unbox(v_bi_478_);
v_kind_boxed_488_ = lean_unbox(v_kind_481_);
v_res_489_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg(v_name_477_, v_bi_boxed_487_, v_type_479_, v_k_480_, v_kind_boxed_488_, v___y_482_, v___y_483_, v___y_484_, v___y_485_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
lean_dec(v___y_483_);
lean_dec_ref(v___y_482_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(lean_object* v_name_490_, lean_object* v_type_491_, lean_object* v_k_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_){
_start:
{
uint8_t v___x_498_; uint8_t v___x_499_; lean_object* v___x_500_; 
v___x_498_ = 0;
v___x_499_ = 0;
v___x_500_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg(v_name_490_, v___x_498_, v_type_491_, v_k_492_, v___x_499_, v___y_493_, v___y_494_, v___y_495_, v___y_496_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg___boxed(lean_object* v_name_501_, lean_object* v_type_502_, lean_object* v_k_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_name_501_, v_type_502_, v_k_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
return v_res_509_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__2(void){
_start:
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_512_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__1));
v___x_513_ = lean_unsigned_to_nat(6u);
v___x_514_ = lean_unsigned_to_nat(138u);
v___x_515_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__0));
v___x_516_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0));
v___x_517_ = l_mkPanicMessageWithDecl(v___x_516_, v___x_515_, v___x_514_, v___x_513_, v___x_512_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1(lean_object* v___x_521_, lean_object* v_type_522_, uint8_t v___x_523_, lean_object* v___x_524_, lean_object* v_varNames_525_, lean_object* v___x_526_, lean_object* v_xs_527_, lean_object* v_x_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_){
_start:
{
lean_object* v___x_534_; uint8_t v___x_535_; 
v___x_534_ = lean_array_get_size(v_xs_527_);
v___x_535_ = lean_nat_dec_eq(v___x_534_, v___x_521_);
if (v___x_535_ == 0)
{
lean_object* v___x_536_; lean_object* v___x_537_; 
lean_dec_ref(v_xs_527_);
lean_dec_ref(v_type_522_);
v___x_536_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__2, &l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__2_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__2);
v___x_537_ = l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(v___x_536_, v___y_529_, v___y_530_, v___y_531_, v___y_532_);
return v___x_537_;
}
else
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___f_540_; lean_object* v___x_541_; 
v___x_538_ = lean_box(v___x_523_);
v___x_539_ = lean_box(v___x_535_);
v___f_540_ = lean_alloc_closure((void*)(l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__0___boxed), 10, 4);
lean_closure_set(v___f_540_, 0, v___x_534_);
lean_closure_set(v___f_540_, 1, v_type_522_);
lean_closure_set(v___f_540_, 2, v___x_538_);
lean_closure_set(v___f_540_, 3, v___x_539_);
v___x_541_ = l_Lean_Meta_ArgsPacker_Unary_packType(v_xs_527_, v___y_529_, v___y_530_, v___y_531_, v___y_532_);
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v_a_542_; lean_object* v___x_543_; uint8_t v___x_544_; 
v_a_542_ = lean_ctor_get(v___x_541_, 0);
lean_inc(v_a_542_);
lean_dec_ref_known(v___x_541_, 1);
v___x_543_ = lean_unsigned_to_nat(1u);
v___x_544_ = lean_nat_dec_eq(v___x_534_, v___x_543_);
if (v___x_544_ == 0)
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__4));
v___x_546_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v___x_545_, v_a_542_, v___f_540_, v___y_529_, v___y_530_, v___y_531_, v___y_532_);
return v___x_546_;
}
else
{
lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_547_ = lean_array_get_borrowed(v___x_524_, v_varNames_525_, v___x_526_);
lean_inc(v___x_547_);
v___x_548_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v___x_547_, v_a_542_, v___f_540_, v___y_529_, v___y_530_, v___y_531_, v___y_532_);
return v___x_548_;
}
}
else
{
lean_dec_ref(v___f_540_);
return v___x_541_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___boxed(lean_object* v___x_549_, lean_object* v_type_550_, lean_object* v___x_551_, lean_object* v___x_552_, lean_object* v_varNames_553_, lean_object* v___x_554_, lean_object* v_xs_555_, lean_object* v_x_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_){
_start:
{
uint8_t v___x_1567__boxed_562_; lean_object* v_res_563_; 
v___x_1567__boxed_562_ = lean_unbox(v___x_551_);
v_res_563_ = l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1(v___x_549_, v_type_550_, v___x_1567__boxed_562_, v___x_552_, v_varNames_553_, v___x_554_, v_xs_555_, v_x_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_);
lean_dec(v___y_560_);
lean_dec_ref(v___y_559_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
lean_dec_ref(v_x_556_);
lean_dec(v___x_554_);
lean_dec_ref(v_varNames_553_);
lean_dec(v___x_552_);
lean_dec(v___x_549_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType(lean_object* v_varNames_564_, lean_object* v_type_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; uint8_t v___x_573_; 
v___x_571_ = lean_array_get_size(v_varNames_564_);
v___x_572_ = lean_unsigned_to_nat(0u);
v___x_573_ = lean_nat_dec_eq(v___x_571_, v___x_572_);
if (v___x_573_ == 0)
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___f_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_574_ = lean_box(0);
v___x_575_ = lean_box(v___x_573_);
lean_inc_ref(v_type_565_);
v___f_576_ = lean_alloc_closure((void*)(l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___boxed), 13, 6);
lean_closure_set(v___f_576_, 0, v___x_571_);
lean_closure_set(v___f_576_, 1, v_type_565_);
lean_closure_set(v___f_576_, 2, v___x_575_);
lean_closure_set(v___f_576_, 3, v___x_574_);
lean_closure_set(v___f_576_, 4, v_varNames_564_);
lean_closure_set(v___f_576_, 5, v___x_572_);
v___x_577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_577_, 0, v___x_571_);
v___x_578_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg(v_type_565_, v___x_577_, v___f_576_, v___x_573_, v___x_573_, v_a_566_, v_a_567_, v_a_568_, v_a_569_);
return v___x_578_;
}
else
{
lean_object* v___x_579_; lean_object* v___x_580_; 
lean_dec_ref(v_varNames_564_);
v___x_579_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_packType___closed__2, &l_Lean_Meta_ArgsPacker_Unary_packType___closed__2_once, _init_l_Lean_Meta_ArgsPacker_Unary_packType___closed__2);
v___x_580_ = l_Lean_mkArrow(v___x_579_, v_type_565_, v_a_568_, v_a_569_);
return v___x_580_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurryType___boxed(lean_object* v_varNames_581_, lean_object* v_type_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_){
_start:
{
lean_object* v_res_588_; 
v_res_588_ = l_Lean_Meta_ArgsPacker_Unary_uncurryType(v_varNames_581_, v_type_582_, v_a_583_, v_a_584_, v_a_585_, v_a_586_);
lean_dec(v_a_586_);
lean_dec_ref(v_a_585_);
lean_dec(v_a_584_);
lean_dec_ref(v_a_583_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1(lean_object* v_00_u03b1_589_, lean_object* v_name_590_, uint8_t v_bi_591_, lean_object* v_type_592_, lean_object* v_k_593_, uint8_t v_kind_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_){
_start:
{
lean_object* v___x_600_; 
v___x_600_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___redArg(v_name_590_, v_bi_591_, v_type_592_, v_k_593_, v_kind_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1___boxed(lean_object* v_00_u03b1_601_, lean_object* v_name_602_, lean_object* v_bi_603_, lean_object* v_type_604_, lean_object* v_k_605_, lean_object* v_kind_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
uint8_t v_bi_boxed_612_; uint8_t v_kind_boxed_613_; lean_object* v_res_614_; 
v_bi_boxed_612_ = lean_unbox(v_bi_603_);
v_kind_boxed_613_ = lean_unbox(v_kind_606_);
v_res_614_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1_spec__1(v_00_u03b1_601_, v_name_602_, v_bi_boxed_612_, v_type_604_, v_k_605_, v_kind_boxed_613_, v___y_607_, v___y_608_, v___y_609_, v___y_610_);
lean_dec(v___y_610_);
lean_dec_ref(v___y_609_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1(lean_object* v_00_u03b1_615_, lean_object* v_name_616_, lean_object* v_type_617_, lean_object* v_k_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_){
_start:
{
lean_object* v___x_624_; 
v___x_624_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_name_616_, v_type_617_, v_k_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___boxed(lean_object* v_00_u03b1_625_, lean_object* v_name_626_, lean_object* v_type_627_, lean_object* v_k_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1(v_00_u03b1_625_, v_name_626_, v_type_627_, v_k_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_);
lean_dec(v___y_632_);
lean_dec_ref(v___y_631_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0_spec__0(lean_object* v_msgData_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_){
_start:
{
lean_object* v___x_641_; lean_object* v_env_642_; uint8_t v___x_643_; lean_object* v_env_644_; lean_object* v___x_645_; lean_object* v_toCold_646_; lean_object* v_mctx_647_; lean_object* v_lctx_648_; lean_object* v_options_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_641_ = lean_st_ref_get(v___y_639_);
v_env_642_ = lean_ctor_get(v___x_641_, 0);
lean_inc_ref(v_env_642_);
lean_dec(v___x_641_);
v___x_643_ = 0;
v_env_644_ = l_Lean_Environment_setRecordingDeps(v_env_642_, v___x_643_);
v___x_645_ = lean_st_ref_get(v___y_637_);
v_toCold_646_ = lean_ctor_get(v___y_638_, 0);
v_mctx_647_ = lean_ctor_get(v___x_645_, 0);
lean_inc_ref(v_mctx_647_);
lean_dec(v___x_645_);
v_lctx_648_ = lean_ctor_get(v___y_636_, 2);
v_options_649_ = lean_ctor_get(v_toCold_646_, 2);
lean_inc_ref(v_options_649_);
lean_inc_ref(v_lctx_648_);
v___x_650_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_650_, 0, v_env_644_);
lean_ctor_set(v___x_650_, 1, v_mctx_647_);
lean_ctor_set(v___x_650_, 2, v_lctx_648_);
lean_ctor_set(v___x_650_, 3, v_options_649_);
v___x_651_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
lean_ctor_set(v___x_651_, 1, v_msgData_635_);
v___x_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0_spec__0___boxed(lean_object* v_msgData_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0_spec__0(v_msgData_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_);
lean_dec(v___y_657_);
lean_dec_ref(v___y_656_);
lean_dec(v___y_655_);
lean_dec_ref(v___y_654_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(lean_object* v_msg_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_){
_start:
{
lean_object* v_ref_666_; lean_object* v___x_667_; lean_object* v_a_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_676_; 
v_ref_666_ = lean_ctor_get(v___y_663_, 2);
v___x_667_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0_spec__0(v_msg_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_);
v_a_668_ = lean_ctor_get(v___x_667_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_676_ == 0)
{
v___x_670_ = v___x_667_;
v_isShared_671_ = v_isSharedCheck_676_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_a_668_);
lean_dec(v___x_667_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_676_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_672_; lean_object* v___x_674_; 
lean_inc(v_ref_666_);
v___x_672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_672_, 0, v_ref_666_);
lean_ctor_set(v___x_672_, 1, v_a_668_);
if (v_isShared_671_ == 0)
{
lean_ctor_set_tag(v___x_670_, 1);
lean_ctor_set(v___x_670_, 0, v___x_672_);
v___x_674_ = v___x_670_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v___x_672_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg___boxed(lean_object* v_msg_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v_msg_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
lean_dec(v___y_679_);
lean_dec_ref(v___y_678_);
return v_res_683_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__1(void){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_685_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__0));
v___x_686_ = l_Lean_stringToMessageData(v___x_685_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__1___boxed(lean_object** _args){
lean_object* v___x_687_ = _args[0];
lean_object* v___x_688_ = _args[1];
lean_object* v___x_689_ = _args[2];
lean_object* v_arg_690_ = _args[3];
lean_object* v_arg_691_ = _args[4];
lean_object* v_a_692_ = _args[5];
lean_object* v_alt_693_ = _args[6];
lean_object* v_tail_694_ = _args[7];
lean_object* v_u_695_ = _args[8];
lean_object* v___x_696_ = _args[9];
lean_object* v___x_697_ = _args[10];
lean_object* v___x_698_ = _args[11];
lean_object* v_head_699_ = _args[12];
lean_object* v_x_700_ = _args[13];
lean_object* v___y_701_ = _args[14];
lean_object* v___y_702_ = _args[15];
lean_object* v___y_703_ = _args[16];
lean_object* v___y_704_ = _args[17];
lean_object* v___y_705_ = _args[18];
_start:
{
uint8_t v___x_2902__boxed_706_; uint8_t v___x_2903__boxed_707_; uint8_t v___x_2904__boxed_708_; lean_object* v_res_709_; 
v___x_2902__boxed_706_ = lean_unbox(v___x_696_);
v___x_2903__boxed_707_ = lean_unbox(v___x_697_);
v___x_2904__boxed_708_ = lean_unbox(v___x_698_);
v_res_709_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__1(v___x_687_, v___x_688_, v___x_689_, v_arg_690_, v_arg_691_, v_a_692_, v_alt_693_, v_tail_694_, v_u_695_, v___x_2902__boxed_706_, v___x_2903__boxed_707_, v___x_2904__boxed_708_, v_head_699_, v_x_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_);
lean_dec(v___y_704_);
lean_dec_ref(v___y_703_);
lean_dec(v___y_702_);
lean_dec_ref(v___y_701_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn(lean_object* v_varNames_714_, lean_object* v_e_715_, lean_object* v_u_716_, lean_object* v_codomain_717_, lean_object* v_alt_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_){
_start:
{
if (lean_obj_tag(v_varNames_714_) == 0)
{
lean_object* v___x_724_; 
lean_dec_ref(v_codomain_717_);
lean_dec(v_u_716_);
lean_dec_ref(v_e_715_);
v___x_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_724_, 0, v_alt_718_);
return v___x_724_;
}
else
{
lean_object* v_tail_725_; 
v_tail_725_ = lean_ctor_get(v_varNames_714_, 1);
lean_inc(v_tail_725_);
if (lean_obj_tag(v_tail_725_) == 0)
{
lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
lean_dec_ref_known(v_varNames_714_, 2);
lean_dec_ref(v_codomain_717_);
lean_dec(v_u_716_);
v___x_726_ = lean_unsigned_to_nat(1u);
v___x_727_ = lean_mk_empty_array_with_capacity(v___x_726_);
v___x_728_ = lean_array_push(v___x_727_, v_e_715_);
v___x_729_ = l_Lean_Expr_beta(v_alt_718_, v___x_728_);
v___x_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_730_, 0, v___x_729_);
return v___x_730_;
}
else
{
lean_object* v_head_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_787_; 
v_head_731_ = lean_ctor_get(v_varNames_714_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v_varNames_714_);
if (v_isSharedCheck_787_ == 0)
{
lean_object* v_unused_788_; 
v_unused_788_ = lean_ctor_get(v_varNames_714_, 1);
lean_dec(v_unused_788_);
v___x_733_ = v_varNames_714_;
v_isShared_734_ = v_isSharedCheck_787_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_head_731_);
lean_dec(v_varNames_714_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_787_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v_head_735_; lean_object* v___x_736_; 
v_head_735_ = lean_ctor_get(v_tail_725_, 0);
lean_inc(v_head_735_);
lean_inc(v_a_722_);
lean_inc_ref(v_a_721_);
lean_inc(v_a_720_);
lean_inc_ref(v_a_719_);
lean_inc_ref(v_e_715_);
v___x_736_ = lean_infer_type(v_e_715_, v_a_719_, v_a_720_, v_a_721_, v_a_722_);
if (lean_obj_tag(v___x_736_) == 0)
{
lean_object* v_a_737_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___y_741_; lean_object* v___y_742_; lean_object* v___x_747_; 
v_a_737_ = lean_ctor_get(v___x_736_, 0);
lean_inc_n(v_a_737_, 2);
lean_dec_ref_known(v___x_736_, 1);
v___x_747_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_737_, v_a_720_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_object* v_a_748_; lean_object* v___x_749_; uint8_t v___x_750_; 
v_a_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_a_748_);
lean_dec_ref_known(v___x_747_, 1);
v___x_749_ = l_Lean_Expr_cleanupAnnotations(v_a_748_);
lean_dec(v_a_748_);
v___x_750_ = l_Lean_Expr_isApp(v___x_749_);
if (v___x_750_ == 0)
{
lean_dec_ref(v___x_749_);
lean_dec(v_head_735_);
lean_del_object(v___x_733_);
lean_dec_ref_known(v_tail_725_, 2);
lean_dec(v_head_731_);
lean_dec_ref(v_alt_718_);
lean_dec_ref(v_codomain_717_);
lean_dec(v_u_716_);
lean_dec_ref(v_e_715_);
v___y_739_ = v_a_719_;
v___y_740_ = v_a_720_;
v___y_741_ = v_a_721_;
v___y_742_ = v_a_722_;
goto v___jp_738_;
}
else
{
lean_object* v___x_751_; uint8_t v___x_752_; 
v___x_751_ = l_Lean_Expr_appFnCleanup___redArg(v___x_749_);
v___x_752_ = l_Lean_Expr_isApp(v___x_751_);
if (v___x_752_ == 0)
{
lean_dec_ref(v___x_751_);
lean_dec_ref(v___x_749_);
lean_dec(v_head_735_);
lean_del_object(v___x_733_);
lean_dec(v_head_731_);
lean_dec_ref_known(v_tail_725_, 2);
lean_dec_ref(v_alt_718_);
lean_dec_ref(v_codomain_717_);
lean_dec(v_u_716_);
lean_dec_ref(v_e_715_);
v___y_739_ = v_a_719_;
v___y_740_ = v_a_720_;
v___y_741_ = v_a_721_;
v___y_742_ = v_a_722_;
goto v___jp_738_;
}
else
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; uint8_t v___x_756_; 
v___x_753_ = l_Lean_Expr_appFnCleanup___redArg(v___x_751_);
v___x_754_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__0));
v___x_755_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1));
v___x_756_ = l_Lean_Expr_isConstOf(v___x_753_, v___x_755_);
lean_dec_ref(v___x_753_);
if (v___x_756_ == 0)
{
lean_dec_ref(v___x_751_);
lean_dec_ref(v___x_749_);
lean_dec(v_head_735_);
lean_del_object(v___x_733_);
lean_dec(v_head_731_);
lean_dec_ref_known(v_tail_725_, 2);
lean_dec_ref(v_alt_718_);
lean_dec_ref(v_codomain_717_);
lean_dec(v_u_716_);
lean_dec_ref(v_e_715_);
v___y_739_ = v_a_719_;
v___y_740_ = v_a_720_;
v___y_741_ = v_a_721_;
v___y_742_ = v_a_722_;
goto v___jp_738_;
}
else
{
lean_object* v_arg_757_; lean_object* v_arg_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; uint8_t v___x_764_; uint8_t v___x_765_; lean_object* v___x_766_; 
v_arg_757_ = lean_ctor_get(v___x_749_, 1);
lean_inc_ref(v_arg_757_);
lean_dec_ref(v___x_749_);
v_arg_758_ = lean_ctor_get(v___x_751_, 1);
lean_inc_ref(v_arg_758_);
lean_dec_ref(v___x_751_);
v___x_759_ = l_Lean_Expr_getAppFn(v_a_737_);
lean_dec(v_a_737_);
v___x_760_ = l_Lean_Expr_constLevels_x21(v___x_759_);
lean_dec_ref(v___x_759_);
v___x_761_ = lean_unsigned_to_nat(1u);
v___x_762_ = lean_mk_empty_array_with_capacity(v___x_761_);
lean_inc_ref(v_e_715_);
lean_inc_ref(v___x_762_);
v___x_763_ = lean_array_push(v___x_762_, v_e_715_);
v___x_764_ = 0;
v___x_765_ = 1;
v___x_766_ = l_Lean_Meta_mkLambdaFVars(v___x_763_, v_codomain_717_, v___x_764_, v___x_756_, v___x_764_, v___x_756_, v___x_765_, v_a_719_, v_a_720_, v_a_721_, v_a_722_);
lean_dec_ref(v___x_763_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___f_771_; lean_object* v___x_772_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc_n(v_a_767_, 2);
lean_dec_ref_known(v___x_766_, 1);
v___x_768_ = lean_box(v___x_764_);
v___x_769_ = lean_box(v___x_756_);
v___x_770_ = lean_box(v___x_765_);
lean_inc(v_u_716_);
lean_inc_ref(v_arg_757_);
lean_inc_ref_n(v_arg_758_, 2);
lean_inc(v___x_760_);
v___f_771_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__1___boxed), 19, 13);
lean_closure_set(v___f_771_, 0, v___x_762_);
lean_closure_set(v___f_771_, 1, v___x_754_);
lean_closure_set(v___f_771_, 2, v___x_760_);
lean_closure_set(v___f_771_, 3, v_arg_758_);
lean_closure_set(v___f_771_, 4, v_arg_757_);
lean_closure_set(v___f_771_, 5, v_a_767_);
lean_closure_set(v___f_771_, 6, v_alt_718_);
lean_closure_set(v___f_771_, 7, v_tail_725_);
lean_closure_set(v___f_771_, 8, v_u_716_);
lean_closure_set(v___f_771_, 9, v___x_768_);
lean_closure_set(v___f_771_, 10, v___x_769_);
lean_closure_set(v___f_771_, 11, v___x_770_);
lean_closure_set(v___f_771_, 12, v_head_735_);
v___x_772_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_head_731_, v_arg_758_, v___f_771_, v_a_719_, v_a_720_, v_a_721_, v_a_722_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v_a_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_786_; 
v_a_773_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_786_ == 0)
{
v___x_775_ = v___x_772_;
v_isShared_776_ = v_isSharedCheck_786_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_a_773_);
lean_dec(v___x_772_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_786_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_777_; lean_object* v___x_779_; 
v___x_777_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__3));
if (v_isShared_734_ == 0)
{
lean_ctor_set(v___x_733_, 1, v___x_760_);
lean_ctor_set(v___x_733_, 0, v_u_716_);
v___x_779_ = v___x_733_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_u_716_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v___x_760_);
v___x_779_ = v_reuseFailAlloc_785_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_783_; 
v___x_780_ = l_Lean_Expr_const___override(v___x_777_, v___x_779_);
v___x_781_ = l_Lean_mkApp5(v___x_780_, v_arg_758_, v_arg_757_, v_a_767_, v_e_715_, v_a_773_);
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 0, v___x_781_);
v___x_783_ = v___x_775_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v___x_781_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
}
else
{
lean_dec(v_a_767_);
lean_dec(v___x_760_);
lean_dec_ref(v_arg_758_);
lean_dec_ref(v_arg_757_);
lean_del_object(v___x_733_);
lean_dec(v_u_716_);
lean_dec_ref(v_e_715_);
return v___x_772_;
}
}
else
{
lean_dec_ref(v___x_762_);
lean_dec(v___x_760_);
lean_dec_ref(v_arg_758_);
lean_dec_ref(v_arg_757_);
lean_dec(v_head_735_);
lean_del_object(v___x_733_);
lean_dec(v_head_731_);
lean_dec_ref_known(v_tail_725_, 2);
lean_dec_ref(v_alt_718_);
lean_dec(v_u_716_);
lean_dec_ref(v_e_715_);
return v___x_766_;
}
}
}
}
}
else
{
lean_dec(v_a_737_);
lean_dec(v_head_735_);
lean_del_object(v___x_733_);
lean_dec_ref_known(v_tail_725_, 2);
lean_dec(v_head_731_);
lean_dec_ref(v_alt_718_);
lean_dec_ref(v_codomain_717_);
lean_dec(v_u_716_);
lean_dec_ref(v_e_715_);
return v___x_747_;
}
v___jp_738_:
{
lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_743_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___closed__1);
v___x_744_ = l_Lean_MessageData_ofExpr(v_a_737_);
v___x_745_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_745_, 0, v___x_743_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v___x_746_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_745_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
return v___x_746_;
}
}
else
{
lean_dec(v_head_735_);
lean_del_object(v___x_733_);
lean_dec_ref_known(v_tail_725_, 2);
lean_dec(v_head_731_);
lean_dec_ref(v_alt_718_);
lean_dec_ref(v_codomain_717_);
lean_dec(v_u_716_);
lean_dec_ref(v_e_715_);
return v___x_736_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__0(lean_object* v___x_789_, lean_object* v___x_790_, lean_object* v_arg_791_, lean_object* v_arg_792_, lean_object* v_x_793_, lean_object* v___x_794_, lean_object* v_a_795_, lean_object* v_alt_796_, lean_object* v___x_797_, lean_object* v_tail_798_, lean_object* v_u_799_, uint8_t v___x_800_, uint8_t v___x_801_, uint8_t v___x_802_, lean_object* v_y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_){
_start:
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_809_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__6));
v___x_810_ = l_Lean_Name_mkStr2(v___x_789_, v___x_809_);
v___x_811_ = l_Lean_Expr_const___override(v___x_810_, v___x_790_);
lean_inc_ref_n(v_y_803_, 2);
lean_inc_ref(v_x_793_);
v___x_812_ = l_Lean_mkApp4(v___x_811_, v_arg_791_, v_arg_792_, v_x_793_, v_y_803_);
v___x_813_ = lean_array_push(v___x_794_, v___x_812_);
v___x_814_ = l_Lean_Expr_beta(v_a_795_, v___x_813_);
v___x_815_ = l_Lean_Expr_beta(v_alt_796_, v___x_797_);
v___x_816_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn(v_tail_798_, v_y_803_, v_u_799_, v___x_814_, v___x_815_, v___y_804_, v___y_805_, v___y_806_, v___y_807_);
if (lean_obj_tag(v___x_816_) == 0)
{
lean_object* v_a_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v_a_817_ = lean_ctor_get(v___x_816_, 0);
lean_inc(v_a_817_);
lean_dec_ref_known(v___x_816_, 1);
v___x_818_ = lean_unsigned_to_nat(2u);
v___x_819_ = lean_mk_empty_array_with_capacity(v___x_818_);
v___x_820_ = lean_array_push(v___x_819_, v_x_793_);
v___x_821_ = lean_array_push(v___x_820_, v_y_803_);
v___x_822_ = l_Lean_Meta_mkLambdaFVars(v___x_821_, v_a_817_, v___x_800_, v___x_801_, v___x_800_, v___x_801_, v___x_802_, v___y_804_, v___y_805_, v___y_806_, v___y_807_);
lean_dec_ref(v___x_821_);
return v___x_822_;
}
else
{
lean_dec_ref(v_y_803_);
lean_dec_ref(v_x_793_);
return v___x_816_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__0___boxed(lean_object** _args){
lean_object* v___x_823_ = _args[0];
lean_object* v___x_824_ = _args[1];
lean_object* v_arg_825_ = _args[2];
lean_object* v_arg_826_ = _args[3];
lean_object* v_x_827_ = _args[4];
lean_object* v___x_828_ = _args[5];
lean_object* v_a_829_ = _args[6];
lean_object* v_alt_830_ = _args[7];
lean_object* v___x_831_ = _args[8];
lean_object* v_tail_832_ = _args[9];
lean_object* v_u_833_ = _args[10];
lean_object* v___x_834_ = _args[11];
lean_object* v___x_835_ = _args[12];
lean_object* v___x_836_ = _args[13];
lean_object* v_y_837_ = _args[14];
lean_object* v___y_838_ = _args[15];
lean_object* v___y_839_ = _args[16];
lean_object* v___y_840_ = _args[17];
lean_object* v___y_841_ = _args[18];
lean_object* v___y_842_ = _args[19];
_start:
{
uint8_t v___x_2923__boxed_843_; uint8_t v___x_2924__boxed_844_; uint8_t v___x_2925__boxed_845_; lean_object* v_res_846_; 
v___x_2923__boxed_843_ = lean_unbox(v___x_834_);
v___x_2924__boxed_844_ = lean_unbox(v___x_835_);
v___x_2925__boxed_845_ = lean_unbox(v___x_836_);
v_res_846_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__0(v___x_823_, v___x_824_, v_arg_825_, v_arg_826_, v_x_827_, v___x_828_, v_a_829_, v_alt_830_, v___x_831_, v_tail_832_, v_u_833_, v___x_2923__boxed_843_, v___x_2924__boxed_844_, v___x_2925__boxed_845_, v_y_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_);
lean_dec(v___y_841_);
lean_dec_ref(v___y_840_);
lean_dec(v___y_839_);
lean_dec_ref(v___y_838_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__1(lean_object* v___x_847_, lean_object* v___x_848_, lean_object* v___x_849_, lean_object* v_arg_850_, lean_object* v_arg_851_, lean_object* v_a_852_, lean_object* v_alt_853_, lean_object* v_tail_854_, lean_object* v_u_855_, uint8_t v___x_856_, uint8_t v___x_857_, uint8_t v___x_858_, lean_object* v_head_859_, lean_object* v_x_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___f_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
lean_inc_ref(v_x_860_);
lean_inc_ref(v___x_847_);
v___x_866_ = lean_array_push(v___x_847_, v_x_860_);
v___x_867_ = lean_box(v___x_856_);
v___x_868_ = lean_box(v___x_857_);
v___x_869_ = lean_box(v___x_858_);
lean_inc_ref(v___x_866_);
lean_inc_ref(v_arg_851_);
v___f_870_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___lam__0___boxed), 20, 14);
lean_closure_set(v___f_870_, 0, v___x_848_);
lean_closure_set(v___f_870_, 1, v___x_849_);
lean_closure_set(v___f_870_, 2, v_arg_850_);
lean_closure_set(v___f_870_, 3, v_arg_851_);
lean_closure_set(v___f_870_, 4, v_x_860_);
lean_closure_set(v___f_870_, 5, v___x_847_);
lean_closure_set(v___f_870_, 6, v_a_852_);
lean_closure_set(v___f_870_, 7, v_alt_853_);
lean_closure_set(v___f_870_, 8, v___x_866_);
lean_closure_set(v___f_870_, 9, v_tail_854_);
lean_closure_set(v___f_870_, 10, v_u_855_);
lean_closure_set(v___f_870_, 11, v___x_867_);
lean_closure_set(v___f_870_, 12, v___x_868_);
lean_closure_set(v___f_870_, 13, v___x_869_);
v___x_871_ = l_Lean_Expr_beta(v_arg_851_, v___x_866_);
v___x_872_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_head_859_, v___x_871_, v___f_870_, v___y_861_, v___y_862_, v___y_863_, v___y_864_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn___boxed(lean_object* v_varNames_873_, lean_object* v_e_874_, lean_object* v_u_875_, lean_object* v_codomain_876_, lean_object* v_alt_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_, lean_object* v_a_881_, lean_object* v_a_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn(v_varNames_873_, v_e_874_, v_u_875_, v_codomain_876_, v_alt_877_, v_a_878_, v_a_879_, v_a_880_, v_a_881_);
lean_dec(v_a_881_);
lean_dec_ref(v_a_880_);
lean_dec(v_a_879_);
lean_dec_ref(v_a_878_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0(lean_object* v_00_u03b1_884_, lean_object* v_msg_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_){
_start:
{
lean_object* v___x_891_; 
v___x_891_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v_msg_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___boxed(lean_object* v_00_u03b1_892_, lean_object* v_msg_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0(v_00_u03b1_892_, v_msg_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_);
lean_dec(v___y_897_);
lean_dec_ref(v___y_896_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
return v_res_899_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__2(void){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_902_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__1));
v___x_903_ = lean_unsigned_to_nat(23u);
v___x_904_ = lean_unsigned_to_nat(180u);
v___x_905_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__0));
v___x_906_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0));
v___x_907_ = l_mkPanicMessageWithDecl(v___x_906_, v___x_905_, v___x_904_, v___x_903_, v___x_902_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0(lean_object* v___x_908_, lean_object* v___x_909_, lean_object* v_varNames_910_, lean_object* v_e_911_, uint8_t v___x_912_, lean_object* v_xs_913_, lean_object* v_codomain_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
lean_object* v___x_920_; uint8_t v___x_921_; 
v___x_920_ = lean_array_get_size(v_xs_913_);
v___x_921_ = lean_nat_dec_eq(v___x_920_, v___x_908_);
if (v___x_921_ == 0)
{
lean_object* v___x_922_; lean_object* v___x_923_; 
lean_dec_ref(v_codomain_914_);
lean_dec_ref(v_e_911_);
lean_dec_ref(v_varNames_910_);
v___x_922_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__2, &l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__2_once, _init_l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__2);
v___x_923_ = l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(v___x_922_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
return v___x_923_;
}
else
{
lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_924_ = lean_array_fget_borrowed(v_xs_913_, v___x_909_);
lean_inc_ref(v_codomain_914_);
v___x_925_ = l_Lean_Meta_getLevel(v_codomain_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v_a_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v_a_926_ = lean_ctor_get(v___x_925_, 0);
lean_inc(v_a_926_);
lean_dec_ref_known(v___x_925_, 1);
v___x_927_ = lean_array_to_list(v_varNames_910_);
lean_inc(v___x_924_);
v___x_928_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn(v___x_927_, v___x_924_, v_a_926_, v_codomain_914_, v_e_911_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v_a_929_; lean_object* v___x_930_; lean_object* v___x_931_; uint8_t v___x_932_; lean_object* v___x_933_; 
v_a_929_ = lean_ctor_get(v___x_928_, 0);
lean_inc(v_a_929_);
lean_dec_ref_known(v___x_928_, 1);
v___x_930_ = lean_mk_empty_array_with_capacity(v___x_908_);
lean_inc(v___x_924_);
v___x_931_ = lean_array_push(v___x_930_, v___x_924_);
v___x_932_ = 1;
v___x_933_ = l_Lean_Meta_mkLambdaFVars(v___x_931_, v_a_929_, v___x_912_, v___x_921_, v___x_912_, v___x_921_, v___x_932_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
lean_dec_ref(v___x_931_);
return v___x_933_;
}
else
{
return v___x_928_;
}
}
else
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
lean_dec_ref(v_codomain_914_);
lean_dec_ref(v_e_911_);
lean_dec_ref(v_varNames_910_);
v_a_934_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_941_ == 0)
{
v___x_936_ = v___x_925_;
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_925_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_939_; 
if (v_isShared_937_ == 0)
{
v___x_939_ = v___x_936_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_a_934_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___boxed(lean_object* v___x_942_, lean_object* v___x_943_, lean_object* v_varNames_944_, lean_object* v_e_945_, lean_object* v___x_946_, lean_object* v_xs_947_, lean_object* v_codomain_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_){
_start:
{
uint8_t v___x_847__boxed_954_; lean_object* v_res_955_; 
v___x_847__boxed_954_ = lean_unbox(v___x_946_);
v_res_955_ = l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0(v___x_942_, v___x_943_, v_varNames_944_, v_e_945_, v___x_847__boxed_954_, v_xs_947_, v_codomain_948_, v___y_949_, v___y_950_, v___y_951_, v___y_952_);
lean_dec(v___y_952_);
lean_dec_ref(v___y_951_);
lean_dec(v___y_950_);
lean_dec_ref(v___y_949_);
lean_dec_ref(v_xs_947_);
lean_dec(v___x_943_);
lean_dec(v___x_942_);
return v_res_955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry(lean_object* v_varNames_961_, lean_object* v_e_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_, lean_object* v_a_966_){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; uint8_t v___x_970_; 
v___x_968_ = lean_array_get_size(v_varNames_961_);
v___x_969_ = lean_unsigned_to_nat(0u);
v___x_970_ = lean_nat_dec_eq(v___x_968_, v___x_969_);
if (v___x_970_ == 0)
{
lean_object* v___x_971_; 
lean_inc(v_a_966_);
lean_inc_ref(v_a_965_);
lean_inc(v_a_964_);
lean_inc_ref(v_a_963_);
lean_inc_ref(v_e_962_);
v___x_971_ = lean_infer_type(v_e_962_, v_a_963_, v_a_964_, v_a_965_, v_a_966_);
if (lean_obj_tag(v___x_971_) == 0)
{
lean_object* v_a_972_; lean_object* v___x_973_; 
v_a_972_ = lean_ctor_get(v___x_971_, 0);
lean_inc(v_a_972_);
lean_dec_ref_known(v___x_971_, 1);
lean_inc_ref(v_varNames_961_);
v___x_973_ = l_Lean_Meta_ArgsPacker_Unary_uncurryType(v_varNames_961_, v_a_972_, v_a_963_, v_a_964_, v_a_965_, v_a_966_);
if (lean_obj_tag(v___x_973_) == 0)
{
lean_object* v_a_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___f_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v_a_974_ = lean_ctor_get(v___x_973_, 0);
lean_inc(v_a_974_);
lean_dec_ref_known(v___x_973_, 1);
v___x_975_ = lean_unsigned_to_nat(1u);
v___x_976_ = lean_box(v___x_970_);
v___f_977_ = lean_alloc_closure((void*)(l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___boxed), 12, 5);
lean_closure_set(v___f_977_, 0, v___x_975_);
lean_closure_set(v___f_977_, 1, v___x_969_);
lean_closure_set(v___f_977_, 2, v_varNames_961_);
lean_closure_set(v___f_977_, 3, v_e_962_);
lean_closure_set(v___f_977_, 4, v___x_976_);
v___x_978_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0));
v___x_979_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg(v_a_974_, v___x_978_, v___f_977_, v___x_970_, v___x_970_, v_a_963_, v_a_964_, v_a_965_, v_a_966_);
return v___x_979_;
}
else
{
lean_dec_ref(v_e_962_);
lean_dec_ref(v_varNames_961_);
return v___x_973_;
}
}
else
{
lean_dec_ref(v_e_962_);
lean_dec_ref(v_varNames_961_);
return v___x_971_;
}
}
else
{
lean_object* v___x_980_; uint8_t v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
lean_dec_ref(v_varNames_961_);
v___x_980_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__2));
v___x_981_ = 0;
v___x_982_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_packType___closed__2, &l_Lean_Meta_ArgsPacker_Unary_packType___closed__2_once, _init_l_Lean_Meta_ArgsPacker_Unary_packType___closed__2);
v___x_983_ = l_Lean_mkLambda(v___x_980_, v___x_981_, v___x_982_, v_e_962_);
v___x_984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_984_, 0, v___x_983_);
return v___x_984_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Unary_uncurry___boxed(lean_object* v_varNames_985_, lean_object* v_e_986_, lean_object* v_a_987_, lean_object* v_a_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_Lean_Meta_ArgsPacker_Unary_uncurry(v_varNames_985_, v_e_986_, v_a_987_, v_a_988_, v_a_989_, v_a_990_);
lean_dec(v_a_990_);
lean_dec_ref(v_a_989_);
lean_dec(v_a_988_);
lean_dec_ref(v_a_987_);
return v_res_992_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__1(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_994_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__0));
v___x_995_ = l_Lean_stringToMessageData(v___x_994_);
return v___x_995_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___closed__0(void){
_start:
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v_dummy_998_; 
v___x_996_ = lean_box(0);
v___x_997_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_packType___closed__1));
v_dummy_998_ = l_Lean_Expr_const___override(v___x_997_, v___x_996_);
return v_dummy_998_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0(lean_object* v_args_999_, lean_object* v_type_1000_, lean_object* v_packedDomain_1001_, lean_object* v_tail_1002_, lean_object* v_x_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_){
_start:
{
lean_object* v_dummy_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v_dummy_1009_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___closed__0);
lean_inc_ref(v_x_1003_);
v___x_1010_ = lean_array_push(v_args_999_, v_x_1003_);
v___x_1011_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go(v_type_1000_, v_packedDomain_1001_, v_dummy_1009_, v___x_1010_, v_tail_1002_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_);
if (lean_obj_tag(v___x_1011_) == 0)
{
lean_object* v_a_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; uint8_t v___x_1016_; uint8_t v___x_1017_; uint8_t v___x_1018_; lean_object* v___x_1019_; 
v_a_1012_ = lean_ctor_get(v___x_1011_, 0);
lean_inc(v_a_1012_);
lean_dec_ref_known(v___x_1011_, 1);
v___x_1013_ = lean_unsigned_to_nat(1u);
v___x_1014_ = lean_mk_empty_array_with_capacity(v___x_1013_);
v___x_1015_ = lean_array_push(v___x_1014_, v_x_1003_);
v___x_1016_ = 0;
v___x_1017_ = 1;
v___x_1018_ = 1;
v___x_1019_ = l_Lean_Meta_mkForallFVars(v___x_1015_, v_a_1012_, v___x_1016_, v___x_1017_, v___x_1017_, v___x_1018_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_);
lean_dec_ref(v___x_1015_);
return v___x_1019_;
}
else
{
lean_dec_ref(v_x_1003_);
return v___x_1011_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___boxed(lean_object* v_args_1020_, lean_object* v_type_1021_, lean_object* v_packedDomain_1022_, lean_object* v_tail_1023_, lean_object* v_x_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0(v_args_1020_, v_type_1021_, v_packedDomain_1022_, v_tail_1023_, v_x_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_);
lean_dec(v___y_1028_);
lean_dec_ref(v___y_1027_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__1___boxed(lean_object* v_arg_1031_, lean_object* v_args_1032_, lean_object* v_type_1033_, lean_object* v_packedDomain_1034_, lean_object* v_tail_1035_, lean_object* v___x_1036_, lean_object* v_x_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
uint8_t v___x_649__boxed_1043_; lean_object* v_res_1044_; 
v___x_649__boxed_1043_ = lean_unbox(v___x_1036_);
v_res_1044_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__1(v_arg_1031_, v_args_1032_, v_type_1033_, v_packedDomain_1034_, v_tail_1035_, v___x_649__boxed_1043_, v_x_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go(lean_object* v_type_1045_, lean_object* v_packedDomain_1046_, lean_object* v_domain_1047_, lean_object* v_args_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_){
_start:
{
lean_object* v___y_1056_; lean_object* v___y_1057_; lean_object* v___y_1058_; lean_object* v___y_1059_; 
if (lean_obj_tag(v_a_1049_) == 0)
{
lean_object* v_packedArg_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
lean_dec_ref(v_domain_1047_);
v_packedArg_1064_ = l_Lean_Meta_ArgsPacker_Unary_pack(v_packedDomain_1046_, v_args_1048_);
lean_dec_ref(v_args_1048_);
lean_dec_ref(v_packedDomain_1046_);
v___x_1065_ = lean_unsigned_to_nat(1u);
v___x_1066_ = lean_mk_empty_array_with_capacity(v___x_1065_);
v___x_1067_ = lean_array_push(v___x_1066_, v_packedArg_1064_);
v___x_1068_ = l_Lean_Meta_instantiateForall(v_type_1045_, v___x_1067_, v_a_1050_, v_a_1051_, v_a_1052_, v_a_1053_);
lean_dec_ref(v___x_1067_);
return v___x_1068_;
}
else
{
lean_object* v_tail_1069_; 
v_tail_1069_ = lean_ctor_get(v_a_1049_, 1);
lean_inc(v_tail_1069_);
if (lean_obj_tag(v_tail_1069_) == 0)
{
lean_object* v_head_1070_; lean_object* v___f_1071_; lean_object* v___x_1072_; 
v_head_1070_ = lean_ctor_get(v_a_1049_, 0);
lean_inc(v_head_1070_);
lean_dec_ref_known(v_a_1049_, 2);
v___f_1071_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1071_, 0, v_args_1048_);
lean_closure_set(v___f_1071_, 1, v_type_1045_);
lean_closure_set(v___f_1071_, 2, v_packedDomain_1046_);
lean_closure_set(v___f_1071_, 3, v_tail_1069_);
v___x_1072_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_head_1070_, v_domain_1047_, v___f_1071_, v_a_1050_, v_a_1051_, v_a_1052_, v_a_1053_);
return v___x_1072_;
}
else
{
lean_object* v_head_1073_; lean_object* v___x_1074_; uint8_t v___x_1075_; 
v_head_1073_ = lean_ctor_get(v_a_1049_, 0);
lean_inc(v_head_1073_);
lean_dec_ref_known(v_a_1049_, 2);
v___x_1074_ = l_Lean_Expr_cleanupAnnotations(v_domain_1047_);
v___x_1075_ = l_Lean_Expr_isApp(v___x_1074_);
if (v___x_1075_ == 0)
{
lean_dec_ref(v___x_1074_);
lean_dec(v_head_1073_);
lean_dec(v_tail_1069_);
lean_dec_ref(v_args_1048_);
lean_dec_ref(v_packedDomain_1046_);
lean_dec_ref(v_type_1045_);
v___y_1056_ = v_a_1050_;
v___y_1057_ = v_a_1051_;
v___y_1058_ = v_a_1052_;
v___y_1059_ = v_a_1053_;
goto v___jp_1055_;
}
else
{
lean_object* v___x_1076_; uint8_t v___x_1077_; 
v___x_1076_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1074_);
v___x_1077_ = l_Lean_Expr_isApp(v___x_1076_);
if (v___x_1077_ == 0)
{
lean_dec_ref(v___x_1076_);
lean_dec_ref(v___x_1074_);
lean_dec(v_head_1073_);
lean_dec(v_tail_1069_);
lean_dec_ref(v_args_1048_);
lean_dec_ref(v_packedDomain_1046_);
lean_dec_ref(v_type_1045_);
v___y_1056_ = v_a_1050_;
v___y_1057_ = v_a_1051_;
v___y_1058_ = v_a_1052_;
v___y_1059_ = v_a_1053_;
goto v___jp_1055_;
}
else
{
lean_object* v___x_1078_; lean_object* v___x_1079_; uint8_t v___x_1080_; 
v___x_1078_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1076_);
v___x_1079_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1));
v___x_1080_ = l_Lean_Expr_isConstOf(v___x_1078_, v___x_1079_);
lean_dec_ref(v___x_1078_);
if (v___x_1080_ == 0)
{
lean_dec_ref(v___x_1076_);
lean_dec_ref(v___x_1074_);
lean_dec(v_head_1073_);
lean_dec(v_tail_1069_);
lean_dec_ref(v_args_1048_);
lean_dec_ref(v_packedDomain_1046_);
lean_dec_ref(v_type_1045_);
v___y_1056_ = v_a_1050_;
v___y_1057_ = v_a_1051_;
v___y_1058_ = v_a_1052_;
v___y_1059_ = v_a_1053_;
goto v___jp_1055_;
}
else
{
lean_object* v_arg_1081_; lean_object* v_arg_1082_; lean_object* v___x_1083_; lean_object* v___f_1084_; lean_object* v___x_1085_; 
lean_dec_ref(v_domain_1047_);
v_arg_1081_ = lean_ctor_get(v___x_1074_, 1);
lean_inc_ref(v_arg_1081_);
lean_dec_ref(v___x_1074_);
v_arg_1082_ = lean_ctor_get(v___x_1076_, 1);
lean_inc_ref(v_arg_1082_);
lean_dec_ref(v___x_1076_);
v___x_1083_ = lean_box(v___x_1080_);
v___f_1084_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__1___boxed), 12, 6);
lean_closure_set(v___f_1084_, 0, v_arg_1081_);
lean_closure_set(v___f_1084_, 1, v_args_1048_);
lean_closure_set(v___f_1084_, 2, v_type_1045_);
lean_closure_set(v___f_1084_, 3, v_packedDomain_1046_);
lean_closure_set(v___f_1084_, 4, v_tail_1069_);
lean_closure_set(v___f_1084_, 5, v___x_1083_);
v___x_1085_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_head_1073_, v_arg_1082_, v___f_1084_, v_a_1050_, v_a_1051_, v_a_1052_, v_a_1053_);
return v___x_1085_;
}
}
}
}
}
v___jp_1055_:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1060_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___closed__1);
v___x_1061_ = l_Lean_MessageData_ofExpr(v_domain_1047_);
v___x_1062_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1060_);
lean_ctor_set(v___x_1062_, 1, v___x_1061_);
v___x_1063_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_1062_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_);
return v___x_1063_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__1(lean_object* v_arg_1086_, lean_object* v_args_1087_, lean_object* v_type_1088_, lean_object* v_packedDomain_1089_, lean_object* v_tail_1090_, uint8_t v___x_1091_, lean_object* v_x_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
v___x_1098_ = lean_unsigned_to_nat(1u);
v___x_1099_ = lean_mk_empty_array_with_capacity(v___x_1098_);
lean_inc_ref(v_x_1092_);
v___x_1100_ = lean_array_push(v___x_1099_, v_x_1092_);
lean_inc_ref(v___x_1100_);
v___x_1101_ = l_Lean_Expr_beta(v_arg_1086_, v___x_1100_);
v___x_1102_ = lean_array_push(v_args_1087_, v_x_1092_);
v___x_1103_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go(v_type_1088_, v_packedDomain_1089_, v___x_1101_, v___x_1102_, v_tail_1090_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
if (lean_obj_tag(v___x_1103_) == 0)
{
lean_object* v_a_1104_; uint8_t v___x_1105_; uint8_t v___x_1106_; lean_object* v___x_1107_; 
v_a_1104_ = lean_ctor_get(v___x_1103_, 0);
lean_inc(v_a_1104_);
lean_dec_ref_known(v___x_1103_, 1);
v___x_1105_ = 0;
v___x_1106_ = 1;
v___x_1107_ = l_Lean_Meta_mkForallFVars(v___x_1100_, v_a_1104_, v___x_1105_, v___x_1091_, v___x_1091_, v___x_1106_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
lean_dec_ref(v___x_1100_);
return v___x_1107_;
}
else
{
lean_dec_ref(v___x_1100_);
return v___x_1103_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___boxed(lean_object* v_type_1108_, lean_object* v_packedDomain_1109_, lean_object* v_domain_1110_, lean_object* v_args_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go(v_type_1108_, v_packedDomain_1109_, v_domain_1110_, v_args_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_);
lean_dec(v_a_1116_);
lean_dec_ref(v_a_1115_);
lean_dec(v_a_1114_);
lean_dec_ref(v_a_1113_);
return v_res_1118_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__1(void){
_start:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1120_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__0));
v___x_1121_ = l_Lean_stringToMessageData(v___x_1120_);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType(lean_object* v_varNames_1122_, lean_object* v_type_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_){
_start:
{
lean_object* v___y_1130_; lean_object* v___y_1131_; lean_object* v___y_1132_; lean_object* v___y_1133_; uint8_t v___x_1138_; 
v___x_1138_ = l_Lean_Expr_isForall(v_type_1123_);
if (v___x_1138_ == 0)
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v_a_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1150_; 
lean_dec_ref(v_varNames_1122_);
v___x_1139_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__1);
v___x_1140_ = l_Lean_MessageData_ofExpr(v_type_1123_);
v___x_1141_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1139_);
lean_ctor_set(v___x_1141_, 1, v___x_1140_);
v___x_1142_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_1141_, v_a_1124_, v_a_1125_, v_a_1126_, v_a_1127_);
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1145_ = v___x_1142_;
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_a_1143_);
lean_dec(v___x_1142_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; 
if (v_isShared_1146_ == 0)
{
v___x_1148_ = v___x_1145_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_a_1143_);
v___x_1148_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
return v___x_1148_;
}
}
}
else
{
v___y_1130_ = v_a_1124_;
v___y_1131_ = v_a_1125_;
v___y_1132_ = v_a_1126_;
v___y_1133_ = v_a_1127_;
goto v___jp_1129_;
}
v___jp_1129_:
{
lean_object* v_packedDomain_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
v_packedDomain_1134_ = l_Lean_Expr_bindingDomain_x21(v_type_1123_);
v___x_1135_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0));
v___x_1136_ = lean_array_to_list(v_varNames_1122_);
lean_inc_ref(v_packedDomain_1134_);
v___x_1137_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go(v_type_1123_, v_packedDomain_1134_, v_packedDomain_1134_, v___x_1135_, v___x_1136_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_);
return v___x_1137_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___boxed(lean_object* v_varNames_1151_, lean_object* v_type_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_){
_start:
{
lean_object* v_res_1158_; 
v_res_1158_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType(v_varNames_1151_, v_type_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_);
lean_dec(v_a_1156_);
lean_dec_ref(v_a_1155_);
lean_dec(v_a_1154_);
lean_dec_ref(v_a_1153_);
return v_res_1158_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__1(void){
_start:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1160_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__0));
v___x_1161_ = l_Lean_stringToMessageData(v___x_1160_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__0(lean_object* v_args_1162_, lean_object* v_e_1163_, lean_object* v_packedDomain_1164_, lean_object* v_tail_1165_, lean_object* v_x_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v_dummy_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; 
v_dummy_1172_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType_go___lam__0___closed__0);
lean_inc_ref(v_x_1166_);
v___x_1173_ = lean_array_push(v_args_1162_, v_x_1166_);
v___x_1174_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go(v_e_1163_, v_packedDomain_1164_, v_dummy_1172_, v___x_1173_, v_tail_1165_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_);
if (lean_obj_tag(v___x_1174_) == 0)
{
lean_object* v_a_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; uint8_t v___x_1179_; uint8_t v___x_1180_; uint8_t v___x_1181_; lean_object* v___x_1182_; 
v_a_1175_ = lean_ctor_get(v___x_1174_, 0);
lean_inc(v_a_1175_);
lean_dec_ref_known(v___x_1174_, 1);
v___x_1176_ = lean_unsigned_to_nat(1u);
v___x_1177_ = lean_mk_empty_array_with_capacity(v___x_1176_);
v___x_1178_ = lean_array_push(v___x_1177_, v_x_1166_);
v___x_1179_ = 0;
v___x_1180_ = 1;
v___x_1181_ = 1;
v___x_1182_ = l_Lean_Meta_mkLambdaFVars(v___x_1178_, v_a_1175_, v___x_1179_, v___x_1180_, v___x_1179_, v___x_1180_, v___x_1181_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_);
lean_dec_ref(v___x_1178_);
return v___x_1182_;
}
else
{
lean_dec_ref(v_x_1166_);
return v___x_1174_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__0___boxed(lean_object* v_args_1183_, lean_object* v_e_1184_, lean_object* v_packedDomain_1185_, lean_object* v_tail_1186_, lean_object* v_x_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_){
_start:
{
lean_object* v_res_1193_; 
v_res_1193_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__0(v_args_1183_, v_e_1184_, v_packedDomain_1185_, v_tail_1186_, v_x_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_);
lean_dec(v___y_1191_);
lean_dec_ref(v___y_1190_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__1___boxed(lean_object* v_arg_1194_, lean_object* v_args_1195_, lean_object* v_e_1196_, lean_object* v_packedDomain_1197_, lean_object* v_tail_1198_, lean_object* v___x_1199_, lean_object* v_x_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_){
_start:
{
uint8_t v___x_767__boxed_1206_; lean_object* v_res_1207_; 
v___x_767__boxed_1206_ = lean_unbox(v___x_1199_);
v_res_1207_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__1(v_arg_1194_, v_args_1195_, v_e_1196_, v_packedDomain_1197_, v_tail_1198_, v___x_767__boxed_1206_, v_x_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_);
lean_dec(v___y_1204_);
lean_dec_ref(v___y_1203_);
lean_dec(v___y_1202_);
lean_dec_ref(v___y_1201_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go(lean_object* v_e_1208_, lean_object* v_packedDomain_1209_, lean_object* v_domain_1210_, lean_object* v_args_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_){
_start:
{
lean_object* v___y_1219_; lean_object* v___y_1220_; lean_object* v___y_1221_; lean_object* v___y_1222_; 
if (lean_obj_tag(v_a_1212_) == 0)
{
lean_object* v_packedArg_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
lean_dec_ref(v_domain_1210_);
v_packedArg_1227_ = l_Lean_Meta_ArgsPacker_Unary_pack(v_packedDomain_1209_, v_args_1211_);
lean_dec_ref(v_args_1211_);
lean_dec_ref(v_packedDomain_1209_);
v___x_1228_ = lean_unsigned_to_nat(1u);
v___x_1229_ = lean_mk_empty_array_with_capacity(v___x_1228_);
v___x_1230_ = lean_array_push(v___x_1229_, v_packedArg_1227_);
v___x_1231_ = l_Lean_Expr_beta(v_e_1208_, v___x_1230_);
v___x_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
return v___x_1232_;
}
else
{
lean_object* v_tail_1233_; 
v_tail_1233_ = lean_ctor_get(v_a_1212_, 1);
lean_inc(v_tail_1233_);
if (lean_obj_tag(v_tail_1233_) == 0)
{
lean_object* v_head_1234_; lean_object* v___f_1235_; lean_object* v___x_1236_; 
v_head_1234_ = lean_ctor_get(v_a_1212_, 0);
lean_inc(v_head_1234_);
lean_dec_ref_known(v_a_1212_, 2);
v___f_1235_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1235_, 0, v_args_1211_);
lean_closure_set(v___f_1235_, 1, v_e_1208_);
lean_closure_set(v___f_1235_, 2, v_packedDomain_1209_);
lean_closure_set(v___f_1235_, 3, v_tail_1233_);
v___x_1236_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_head_1234_, v_domain_1210_, v___f_1235_, v_a_1213_, v_a_1214_, v_a_1215_, v_a_1216_);
return v___x_1236_;
}
else
{
lean_object* v_head_1237_; lean_object* v___x_1238_; uint8_t v___x_1239_; 
v_head_1237_ = lean_ctor_get(v_a_1212_, 0);
lean_inc(v_head_1237_);
lean_dec_ref_known(v_a_1212_, 2);
v___x_1238_ = l_Lean_Expr_cleanupAnnotations(v_domain_1210_);
v___x_1239_ = l_Lean_Expr_isApp(v___x_1238_);
if (v___x_1239_ == 0)
{
lean_dec_ref(v___x_1238_);
lean_dec(v_head_1237_);
lean_dec(v_tail_1233_);
lean_dec_ref(v_args_1211_);
lean_dec_ref(v_packedDomain_1209_);
lean_dec_ref(v_e_1208_);
v___y_1219_ = v_a_1213_;
v___y_1220_ = v_a_1214_;
v___y_1221_ = v_a_1215_;
v___y_1222_ = v_a_1216_;
goto v___jp_1218_;
}
else
{
lean_object* v___x_1240_; uint8_t v___x_1241_; 
v___x_1240_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1238_);
v___x_1241_ = l_Lean_Expr_isApp(v___x_1240_);
if (v___x_1241_ == 0)
{
lean_dec_ref(v___x_1240_);
lean_dec_ref(v___x_1238_);
lean_dec(v_head_1237_);
lean_dec(v_tail_1233_);
lean_dec_ref(v_args_1211_);
lean_dec_ref(v_packedDomain_1209_);
lean_dec_ref(v_e_1208_);
v___y_1219_ = v_a_1213_;
v___y_1220_ = v_a_1214_;
v___y_1221_ = v_a_1215_;
v___y_1222_ = v_a_1216_;
goto v___jp_1218_;
}
else
{
lean_object* v___x_1242_; lean_object* v___x_1243_; uint8_t v___x_1244_; 
v___x_1242_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1240_);
v___x_1243_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Unary_packType_spec__0___closed__1));
v___x_1244_ = l_Lean_Expr_isConstOf(v___x_1242_, v___x_1243_);
lean_dec_ref(v___x_1242_);
if (v___x_1244_ == 0)
{
lean_dec_ref(v___x_1240_);
lean_dec_ref(v___x_1238_);
lean_dec(v_head_1237_);
lean_dec(v_tail_1233_);
lean_dec_ref(v_args_1211_);
lean_dec_ref(v_packedDomain_1209_);
lean_dec_ref(v_e_1208_);
v___y_1219_ = v_a_1213_;
v___y_1220_ = v_a_1214_;
v___y_1221_ = v_a_1215_;
v___y_1222_ = v_a_1216_;
goto v___jp_1218_;
}
else
{
lean_object* v_arg_1245_; lean_object* v_arg_1246_; lean_object* v___x_1247_; lean_object* v___f_1248_; lean_object* v___x_1249_; 
lean_dec_ref(v_domain_1210_);
v_arg_1245_ = lean_ctor_get(v___x_1238_, 1);
lean_inc_ref(v_arg_1245_);
lean_dec_ref(v___x_1238_);
v_arg_1246_ = lean_ctor_get(v___x_1240_, 1);
lean_inc_ref(v_arg_1246_);
lean_dec_ref(v___x_1240_);
v___x_1247_ = lean_box(v___x_1244_);
v___f_1248_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__1___boxed), 12, 6);
lean_closure_set(v___f_1248_, 0, v_arg_1245_);
lean_closure_set(v___f_1248_, 1, v_args_1211_);
lean_closure_set(v___f_1248_, 2, v_e_1208_);
lean_closure_set(v___f_1248_, 3, v_packedDomain_1209_);
lean_closure_set(v___f_1248_, 4, v_tail_1233_);
lean_closure_set(v___f_1248_, 5, v___x_1247_);
v___x_1249_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_head_1237_, v_arg_1246_, v___f_1248_, v_a_1213_, v_a_1214_, v_a_1215_, v_a_1216_);
return v___x_1249_;
}
}
}
}
}
v___jp_1218_:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1223_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___closed__1);
v___x_1224_ = l_Lean_MessageData_ofExpr(v_domain_1210_);
v___x_1225_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1223_);
lean_ctor_set(v___x_1225_, 1, v___x_1224_);
v___x_1226_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_1225_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_);
return v___x_1226_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___lam__1(lean_object* v_arg_1250_, lean_object* v_args_1251_, lean_object* v_e_1252_, lean_object* v_packedDomain_1253_, lean_object* v_tail_1254_, uint8_t v___x_1255_, lean_object* v_x_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_){
_start:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1262_ = lean_unsigned_to_nat(1u);
v___x_1263_ = lean_mk_empty_array_with_capacity(v___x_1262_);
lean_inc_ref(v_x_1256_);
v___x_1264_ = lean_array_push(v___x_1263_, v_x_1256_);
lean_inc_ref(v___x_1264_);
v___x_1265_ = l_Lean_Expr_beta(v_arg_1250_, v___x_1264_);
v___x_1266_ = lean_array_push(v_args_1251_, v_x_1256_);
v___x_1267_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go(v_e_1252_, v_packedDomain_1253_, v___x_1265_, v___x_1266_, v_tail_1254_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
if (lean_obj_tag(v___x_1267_) == 0)
{
lean_object* v_a_1268_; uint8_t v___x_1269_; uint8_t v___x_1270_; lean_object* v___x_1271_; 
v_a_1268_ = lean_ctor_get(v___x_1267_, 0);
lean_inc(v_a_1268_);
lean_dec_ref_known(v___x_1267_, 1);
v___x_1269_ = 0;
v___x_1270_ = 1;
v___x_1271_ = l_Lean_Meta_mkLambdaFVars(v___x_1264_, v_a_1268_, v___x_1269_, v___x_1255_, v___x_1269_, v___x_1255_, v___x_1270_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
lean_dec_ref(v___x_1264_);
return v___x_1271_;
}
else
{
lean_dec_ref(v___x_1264_);
return v___x_1267_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go___boxed(lean_object* v_e_1272_, lean_object* v_packedDomain_1273_, lean_object* v_domain_1274_, lean_object* v_args_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_){
_start:
{
lean_object* v_res_1282_; 
v_res_1282_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go(v_e_1272_, v_packedDomain_1273_, v_domain_1274_, v_args_1275_, v_a_1276_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_);
lean_dec(v_a_1280_);
lean_dec_ref(v_a_1279_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
return v_res_1282_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__1(void){
_start:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; 
v___x_1284_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__0));
v___x_1285_ = l_Lean_stringToMessageData(v___x_1284_);
return v___x_1285_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__2(void){
_start:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1286_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Unary_pack___closed__2, &l_Lean_Meta_ArgsPacker_Unary_pack___closed__2_once, _init_l_Lean_Meta_ArgsPacker_Unary_pack___closed__2);
v___x_1287_ = lean_unsigned_to_nat(1u);
v___x_1288_ = lean_mk_empty_array_with_capacity(v___x_1287_);
v___x_1289_ = lean_array_push(v___x_1288_, v___x_1286_);
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry(lean_object* v_varNames_1290_, lean_object* v_e_1291_, lean_object* v_a_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_){
_start:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; uint8_t v___x_1299_; 
v___x_1297_ = lean_array_get_size(v_varNames_1290_);
v___x_1298_ = lean_unsigned_to_nat(0u);
v___x_1299_ = lean_nat_dec_eq(v___x_1297_, v___x_1298_);
if (v___x_1299_ == 0)
{
lean_object* v___x_1300_; 
lean_inc(v_a_1295_);
lean_inc_ref(v_a_1294_);
lean_inc(v_a_1293_);
lean_inc_ref(v_a_1292_);
lean_inc_ref(v_e_1291_);
v___x_1300_ = lean_infer_type(v_e_1291_, v_a_1292_, v_a_1293_, v_a_1294_, v_a_1295_);
if (lean_obj_tag(v___x_1300_) == 0)
{
lean_object* v_a_1301_; lean_object* v___x_1302_; 
v_a_1301_ = lean_ctor_get(v___x_1300_, 0);
lean_inc(v_a_1301_);
lean_dec_ref_known(v___x_1300_, 1);
v___x_1302_ = l_Lean_Meta_whnfForall(v_a_1301_, v_a_1292_, v_a_1293_, v_a_1294_, v_a_1295_);
if (lean_obj_tag(v___x_1302_) == 0)
{
lean_object* v_a_1303_; lean_object* v___y_1305_; lean_object* v___y_1306_; lean_object* v___y_1307_; lean_object* v___y_1308_; uint8_t v___x_1313_; 
v_a_1303_ = lean_ctor_get(v___x_1302_, 0);
lean_inc(v_a_1303_);
lean_dec_ref_known(v___x_1302_, 1);
v___x_1313_ = l_Lean_Expr_isForall(v_a_1303_);
if (v___x_1313_ == 0)
{
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
lean_dec_ref(v_e_1291_);
lean_dec_ref(v_varNames_1290_);
v___x_1314_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__1);
v___x_1315_ = l_Lean_MessageData_ofExpr(v_a_1303_);
v___x_1316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1314_);
lean_ctor_set(v___x_1316_, 1, v___x_1315_);
v___x_1317_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_1316_, v_a_1292_, v_a_1293_, v_a_1294_, v_a_1295_);
v_a_1318_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1320_ = v___x_1317_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1317_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_a_1318_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
else
{
v___y_1305_ = v_a_1292_;
v___y_1306_ = v_a_1293_;
v___y_1307_ = v_a_1294_;
v___y_1308_ = v_a_1295_;
goto v___jp_1304_;
}
v___jp_1304_:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1309_ = l_Lean_Expr_bindingDomain_x21(v_a_1303_);
lean_dec(v_a_1303_);
v___x_1310_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0));
v___x_1311_ = lean_array_to_list(v_varNames_1290_);
lean_inc_ref(v___x_1309_);
v___x_1312_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry_go(v_e_1291_, v___x_1309_, v___x_1309_, v___x_1310_, v___x_1311_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_);
return v___x_1312_;
}
}
else
{
lean_dec_ref(v_e_1291_);
lean_dec_ref(v_varNames_1290_);
return v___x_1302_;
}
}
else
{
lean_dec_ref(v_e_1291_);
lean_dec_ref(v_varNames_1290_);
return v___x_1300_;
}
}
else
{
lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
lean_dec_ref(v_varNames_1290_);
v___x_1326_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__2, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__2_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___closed__2);
v___x_1327_ = l_Lean_Expr_beta(v_e_1291_, v___x_1326_);
v___x_1328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1327_);
return v___x_1328_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry___boxed(lean_object* v_varNames_1329_, lean_object* v_e_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_){
_start:
{
lean_object* v_res_1336_; 
v_res_1336_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry(v_varNames_1329_, v_e_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
return v_res_1336_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0(lean_object* v_as_1340_, size_t v_sz_1341_, size_t v_i_1342_, lean_object* v_b_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_){
_start:
{
uint8_t v___x_1349_; 
v___x_1349_ = lean_usize_dec_lt(v_i_1342_, v_sz_1341_);
if (v___x_1349_ == 0)
{
lean_object* v___x_1350_; 
v___x_1350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1350_, 0, v_b_1343_);
return v___x_1350_;
}
else
{
lean_object* v_a_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
v_a_1351_ = lean_array_uget_borrowed(v_as_1340_, v_i_1342_);
v___x_1352_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1));
v___x_1353_ = lean_unsigned_to_nat(2u);
v___x_1354_ = lean_mk_empty_array_with_capacity(v___x_1353_);
lean_inc(v_a_1351_);
v___x_1355_ = lean_array_push(v___x_1354_, v_a_1351_);
v___x_1356_ = lean_array_push(v___x_1355_, v_b_1343_);
v___x_1357_ = l_Lean_Meta_mkAppM(v___x_1352_, v___x_1356_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_);
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v_a_1358_; size_t v___x_1359_; size_t v___x_1360_; 
v_a_1358_ = lean_ctor_get(v___x_1357_, 0);
lean_inc(v_a_1358_);
lean_dec_ref_known(v___x_1357_, 1);
v___x_1359_ = ((size_t)1ULL);
v___x_1360_ = lean_usize_add(v_i_1342_, v___x_1359_);
v_i_1342_ = v___x_1360_;
v_b_1343_ = v_a_1358_;
goto _start;
}
else
{
return v___x_1357_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___boxed(lean_object* v_as_1362_, lean_object* v_sz_1363_, lean_object* v_i_1364_, lean_object* v_b_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_){
_start:
{
size_t v_sz_boxed_1371_; size_t v_i_boxed_1372_; lean_object* v_res_1373_; 
v_sz_boxed_1371_ = lean_unbox_usize(v_sz_1363_);
lean_dec(v_sz_1363_);
v_i_boxed_1372_ = lean_unbox_usize(v_i_1364_);
lean_dec(v_i_1364_);
v_res_1373_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0(v_as_1362_, v_sz_boxed_1371_, v_i_boxed_1372_, v_b_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
lean_dec_ref(v_as_1362_);
return v_res_1373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_packType(lean_object* v_ds_1374_, lean_object* v_a_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_){
_start:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v_r_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; size_t v_sz_1387_; size_t v___x_1388_; lean_object* v___x_1389_; 
v___x_1380_ = l_Lean_instInhabitedExpr;
v___x_1381_ = lean_array_get_size(v_ds_1374_);
v___x_1382_ = lean_unsigned_to_nat(1u);
v___x_1383_ = lean_nat_sub(v___x_1381_, v___x_1382_);
v_r_1384_ = lean_array_get(v___x_1380_, v_ds_1374_, v___x_1383_);
lean_dec(v___x_1383_);
v___x_1385_ = lean_array_pop(v_ds_1374_);
v___x_1386_ = l_Array_reverse___redArg(v___x_1385_);
v_sz_1387_ = lean_array_size(v___x_1386_);
v___x_1388_ = ((size_t)0ULL);
v___x_1389_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0(v___x_1386_, v_sz_1387_, v___x_1388_, v_r_1384_, v_a_1375_, v_a_1376_, v_a_1377_, v_a_1378_);
lean_dec_ref(v___x_1386_);
return v___x_1389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_packType___boxed(lean_object* v_ds_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_){
_start:
{
lean_object* v_res_1396_; 
v_res_1396_ = l_Lean_Meta_ArgsPacker_Mutual_packType(v_ds_1390_, v_a_1391_, v_a_1392_, v_a_1393_, v_a_1394_);
lean_dec(v_a_1394_);
lean_dec_ref(v_a_1393_);
lean_dec(v_a_1392_);
lean_dec_ref(v_a_1391_);
return v_res_1396_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__1(void){
_start:
{
lean_object* v___x_1398_; lean_object* v___x_1399_; 
v___x_1398_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__0));
v___x_1399_ = l_Lean_stringToMessageData(v___x_1398_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType(lean_object* v_n_1400_, lean_object* v_type_1401_, lean_object* v_a_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_){
_start:
{
lean_object* v___y_1408_; lean_object* v___y_1409_; lean_object* v___y_1410_; lean_object* v___y_1411_; lean_object* v_zero_1416_; uint8_t v_isZero_1417_; 
v_zero_1416_ = lean_unsigned_to_nat(0u);
v_isZero_1417_ = lean_nat_dec_eq(v_n_1400_, v_zero_1416_);
if (v_isZero_1417_ == 1)
{
lean_object* v___x_1418_; lean_object* v___x_1419_; 
lean_dec_ref(v_type_1401_);
v___x_1418_ = lean_box(0);
v___x_1419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1418_);
return v___x_1419_;
}
else
{
lean_object* v_one_1420_; lean_object* v_n_1421_; uint8_t v___x_1422_; 
v_one_1420_ = lean_unsigned_to_nat(1u);
v_n_1421_ = lean_nat_sub(v_n_1400_, v_one_1420_);
v___x_1422_ = lean_nat_dec_eq(v_n_1421_, v_zero_1416_);
if (v___x_1422_ == 0)
{
lean_object* v___x_1423_; uint8_t v___x_1424_; 
v___x_1423_ = l_Lean_Expr_cleanupAnnotations(v_type_1401_);
v___x_1424_ = l_Lean_Expr_isApp(v___x_1423_);
if (v___x_1424_ == 0)
{
lean_dec_ref(v___x_1423_);
lean_dec(v_n_1421_);
v___y_1408_ = v_a_1402_;
v___y_1409_ = v_a_1403_;
v___y_1410_ = v_a_1404_;
v___y_1411_ = v_a_1405_;
goto v___jp_1407_;
}
else
{
lean_object* v___x_1425_; uint8_t v___x_1426_; 
v___x_1425_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1423_);
v___x_1426_ = l_Lean_Expr_isApp(v___x_1425_);
if (v___x_1426_ == 0)
{
lean_dec_ref(v___x_1425_);
lean_dec_ref(v___x_1423_);
lean_dec(v_n_1421_);
v___y_1408_ = v_a_1402_;
v___y_1409_ = v_a_1403_;
v___y_1410_ = v_a_1404_;
v___y_1411_ = v_a_1405_;
goto v___jp_1407_;
}
else
{
lean_object* v___x_1427_; lean_object* v___x_1428_; uint8_t v___x_1429_; 
v___x_1427_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1425_);
v___x_1428_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1));
v___x_1429_ = l_Lean_Expr_isConstOf(v___x_1427_, v___x_1428_);
lean_dec_ref(v___x_1427_);
if (v___x_1429_ == 0)
{
lean_dec_ref(v___x_1425_);
lean_dec_ref(v___x_1423_);
lean_dec(v_n_1421_);
v___y_1408_ = v_a_1402_;
v___y_1409_ = v_a_1403_;
v___y_1410_ = v_a_1404_;
v___y_1411_ = v_a_1405_;
goto v___jp_1407_;
}
else
{
lean_object* v_arg_1430_; lean_object* v_arg_1431_; lean_object* v___x_1432_; 
lean_dec_ref(v_type_1401_);
v_arg_1430_ = lean_ctor_get(v___x_1423_, 1);
lean_inc_ref(v_arg_1430_);
lean_dec_ref(v___x_1423_);
v_arg_1431_ = lean_ctor_get(v___x_1425_, 1);
lean_inc_ref(v_arg_1431_);
lean_dec_ref(v___x_1425_);
v___x_1432_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType(v_n_1421_, v_arg_1430_, v_a_1402_, v_a_1403_, v_a_1404_, v_a_1405_);
lean_dec(v_n_1421_);
if (lean_obj_tag(v___x_1432_) == 0)
{
lean_object* v_a_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1441_; 
v_a_1433_ = lean_ctor_get(v___x_1432_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1432_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1435_ = v___x_1432_;
v_isShared_1436_ = v_isSharedCheck_1441_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_a_1433_);
lean_dec(v___x_1432_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1441_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v___x_1437_; lean_object* v___x_1439_; 
v___x_1437_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1437_, 0, v_arg_1431_);
lean_ctor_set(v___x_1437_, 1, v_a_1433_);
if (v_isShared_1436_ == 0)
{
lean_ctor_set(v___x_1435_, 0, v___x_1437_);
v___x_1439_ = v___x_1435_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v___x_1437_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
}
else
{
lean_dec_ref(v_arg_1431_);
return v___x_1432_;
}
}
}
}
}
else
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; 
lean_dec(v_n_1421_);
v___x_1442_ = lean_box(0);
v___x_1443_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1443_, 0, v_type_1401_);
lean_ctor_set(v___x_1443_, 1, v___x_1442_);
v___x_1444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1443_);
return v___x_1444_;
}
}
v___jp_1407_:
{
lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1412_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___closed__1);
v___x_1413_ = l_Lean_MessageData_ofExpr(v_type_1401_);
v___x_1414_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1412_);
lean_ctor_set(v___x_1414_, 1, v___x_1413_);
v___x_1415_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_1414_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
return v___x_1415_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType___boxed(lean_object* v_n_1445_, lean_object* v_type_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_){
_start:
{
lean_object* v_res_1452_; 
v_res_1452_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType(v_n_1445_, v_type_1446_, v_a_1447_, v_a_1448_, v_a_1449_, v_a_1450_);
lean_dec(v_a_1450_);
lean_dec_ref(v_a_1449_);
lean_dec(v_a_1448_);
lean_dec_ref(v_a_1447_);
lean_dec(v_n_1445_);
return v_res_1452_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___closed__0(void){
_start:
{
lean_object* v___x_1453_; lean_object* v_dummy_1454_; 
v___x_1453_ = lean_box(0);
v_dummy_1454_ = l_Lean_Expr_sort___override(v___x_1453_);
return v_dummy_1454_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1457_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__1));
v___x_1458_ = lean_unsigned_to_nat(8u);
v___x_1459_ = lean_unsigned_to_nat(276u);
v___x_1460_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__0));
v___x_1461_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0));
v___x_1462_ = l_mkPanicMessageWithDecl(v___x_1461_, v___x_1460_, v___x_1459_, v___x_1458_, v___x_1457_);
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0(lean_object* v_i_1471_, lean_object* v_fidx_1472_, lean_object* v_numFuncs_1473_, lean_object* v_arg_1474_, lean_object* v_x_1475_, lean_object* v_x_1476_, lean_object* v_x_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_){
_start:
{
if (lean_obj_tag(v_x_1475_) == 5)
{
lean_object* v_fn_1483_; lean_object* v_arg_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v_fn_1483_ = lean_ctor_get(v_x_1475_, 0);
lean_inc_ref(v_fn_1483_);
v_arg_1484_ = lean_ctor_get(v_x_1475_, 1);
lean_inc_ref(v_arg_1484_);
lean_dec_ref_known(v_x_1475_, 2);
v___x_1485_ = lean_array_set(v_x_1476_, v_x_1477_, v_arg_1484_);
v___x_1486_ = lean_unsigned_to_nat(1u);
v___x_1487_ = lean_nat_sub(v_x_1477_, v___x_1486_);
lean_dec(v_x_1477_);
v_x_1475_ = v_fn_1483_;
v_x_1476_ = v___x_1485_;
v_x_1477_ = v___x_1487_;
goto _start;
}
else
{
lean_object* v___x_1489_; lean_object* v___x_1490_; uint8_t v___x_1491_; 
lean_dec(v_x_1477_);
v___x_1489_ = lean_array_get_size(v_x_1476_);
v___x_1490_ = lean_unsigned_to_nat(2u);
v___x_1491_ = lean_nat_dec_eq(v___x_1489_, v___x_1490_);
if (v___x_1491_ == 0)
{
lean_object* v___x_1492_; lean_object* v___x_1493_; 
lean_dec_ref(v_x_1476_);
lean_dec_ref(v_x_1475_);
lean_dec_ref(v_arg_1474_);
v___x_1492_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__2, &l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__2_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__2);
v___x_1493_ = l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(v___x_1492_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_);
return v___x_1493_;
}
else
{
lean_object* v___x_1494_; uint8_t v___x_1495_; 
v___x_1494_ = l_Lean_instInhabitedExpr;
v___x_1495_ = lean_nat_dec_eq(v_i_1471_, v_fidx_1472_);
if (v___x_1495_ == 0)
{
lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1496_ = lean_unsigned_to_nat(1u);
v___x_1497_ = lean_nat_add(v_i_1471_, v___x_1496_);
v___x_1498_ = lean_array_get(v___x_1494_, v_x_1476_, v___x_1496_);
lean_inc(v___x_1498_);
v___x_1499_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go(v_numFuncs_1473_, v_fidx_1472_, v_arg_1474_, v___x_1497_, v___x_1498_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_);
lean_dec(v___x_1497_);
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_object* v_a_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1513_; 
v_a_1500_ = lean_ctor_get(v___x_1499_, 0);
v_isSharedCheck_1513_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1502_ = v___x_1499_;
v_isShared_1503_ = v_isSharedCheck_1513_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_a_1500_);
lean_dec(v___x_1499_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1513_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1511_; 
v___x_1504_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__4));
v___x_1505_ = l_Lean_Expr_constLevels_x21(v_x_1475_);
lean_dec_ref(v_x_1475_);
v___x_1506_ = l_Lean_mkConst(v___x_1504_, v___x_1505_);
v___x_1507_ = lean_unsigned_to_nat(0u);
v___x_1508_ = lean_array_get(v___x_1494_, v_x_1476_, v___x_1507_);
lean_dec_ref(v_x_1476_);
v___x_1509_ = l_Lean_mkApp3(v___x_1506_, v___x_1508_, v___x_1498_, v_a_1500_);
if (v_isShared_1503_ == 0)
{
lean_ctor_set(v___x_1502_, 0, v___x_1509_);
v___x_1511_ = v___x_1502_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v___x_1509_);
v___x_1511_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
return v___x_1511_;
}
}
}
else
{
lean_dec(v___x_1498_);
lean_dec_ref(v_x_1476_);
lean_dec_ref(v_x_1475_);
return v___x_1499_;
}
}
else
{
lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1514_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__6));
v___x_1515_ = l_Lean_Expr_constLevels_x21(v_x_1475_);
lean_dec_ref(v_x_1475_);
v___x_1516_ = l_Lean_mkConst(v___x_1514_, v___x_1515_);
v___x_1517_ = lean_unsigned_to_nat(0u);
v___x_1518_ = lean_array_get(v___x_1494_, v_x_1476_, v___x_1517_);
v___x_1519_ = lean_unsigned_to_nat(1u);
v___x_1520_ = lean_array_get(v___x_1494_, v_x_1476_, v___x_1519_);
lean_dec_ref(v_x_1476_);
v___x_1521_ = l_Lean_mkApp3(v___x_1516_, v___x_1518_, v___x_1520_, v_arg_1474_);
v___x_1522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1521_);
return v___x_1522_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go(lean_object* v_numFuncs_1523_, lean_object* v_fidx_1524_, lean_object* v_arg_1525_, lean_object* v_i_1526_, lean_object* v_type_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_){
_start:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; uint8_t v___x_1535_; 
v___x_1533_ = lean_unsigned_to_nat(1u);
v___x_1534_ = lean_nat_sub(v_numFuncs_1523_, v___x_1533_);
v___x_1535_ = lean_nat_dec_le(v___x_1534_, v_i_1526_);
lean_dec(v___x_1534_);
if (v___x_1535_ == 0)
{
lean_object* v___x_1536_; 
v___x_1536_ = l_Lean_Meta_whnfD(v_type_1527_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_);
if (lean_obj_tag(v___x_1536_) == 0)
{
lean_object* v_a_1537_; lean_object* v_dummy_1538_; lean_object* v_nargs_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
v_a_1537_ = lean_ctor_get(v___x_1536_, 0);
lean_inc(v_a_1537_);
lean_dec_ref_known(v___x_1536_, 1);
v_dummy_1538_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___closed__0);
v_nargs_1539_ = l_Lean_Expr_getAppNumArgs(v_a_1537_);
lean_inc(v_nargs_1539_);
v___x_1540_ = lean_mk_array(v_nargs_1539_, v_dummy_1538_);
v___x_1541_ = lean_nat_sub(v_nargs_1539_, v___x_1533_);
lean_dec(v_nargs_1539_);
v___x_1542_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0(v_i_1526_, v_fidx_1524_, v_numFuncs_1523_, v_arg_1525_, v_a_1537_, v___x_1540_, v___x_1541_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_);
return v___x_1542_;
}
else
{
lean_dec_ref(v_arg_1525_);
return v___x_1536_;
}
}
else
{
lean_object* v___x_1543_; 
lean_dec_ref(v_type_1527_);
v___x_1543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1543_, 0, v_arg_1525_);
return v___x_1543_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___boxed(lean_object* v_numFuncs_1544_, lean_object* v_fidx_1545_, lean_object* v_arg_1546_, lean_object* v_i_1547_, lean_object* v_type_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_){
_start:
{
lean_object* v_res_1554_; 
v_res_1554_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go(v_numFuncs_1544_, v_fidx_1545_, v_arg_1546_, v_i_1547_, v_type_1548_, v_a_1549_, v_a_1550_, v_a_1551_, v_a_1552_);
lean_dec(v_a_1552_);
lean_dec_ref(v_a_1551_);
lean_dec(v_a_1550_);
lean_dec_ref(v_a_1549_);
lean_dec(v_i_1547_);
lean_dec(v_fidx_1545_);
lean_dec(v_numFuncs_1544_);
return v_res_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___boxed(lean_object* v_i_1555_, lean_object* v_fidx_1556_, lean_object* v_numFuncs_1557_, lean_object* v_arg_1558_, lean_object* v_x_1559_, lean_object* v_x_1560_, lean_object* v_x_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0(v_i_1555_, v_fidx_1556_, v_numFuncs_1557_, v_arg_1558_, v_x_1559_, v_x_1560_, v_x_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_);
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1564_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
lean_dec(v_numFuncs_1557_);
lean_dec(v_fidx_1556_);
lean_dec(v_i_1555_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_pack(lean_object* v_numFuncs_1568_, lean_object* v_domain_1569_, lean_object* v_fidx_1570_, lean_object* v_arg_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_){
_start:
{
lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1577_ = lean_unsigned_to_nat(0u);
v___x_1578_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go(v_numFuncs_1568_, v_fidx_1570_, v_arg_1571_, v___x_1577_, v_domain_1569_, v_a_1572_, v_a_1573_, v_a_1574_, v_a_1575_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_pack___boxed(lean_object* v_numFuncs_1579_, lean_object* v_domain_1580_, lean_object* v_fidx_1581_, lean_object* v_arg_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_){
_start:
{
lean_object* v_res_1588_; 
v_res_1588_ = l_Lean_Meta_ArgsPacker_Mutual_pack(v_numFuncs_1579_, v_domain_1580_, v_fidx_1581_, v_arg_1582_, v_a_1583_, v_a_1584_, v_a_1585_, v_a_1586_);
lean_dec(v_a_1586_);
lean_dec_ref(v_a_1585_);
lean_dec(v_a_1584_);
lean_dec_ref(v_a_1583_);
lean_dec(v_fidx_1581_);
lean_dec(v_numFuncs_1579_);
return v_res_1588_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Mutual_unpack_spec__0___redArg(lean_object* v_numFuncs_1589_, lean_object* v_a_1590_){
_start:
{
lean_object* v_fst_1591_; lean_object* v_snd_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1627_; 
v_fst_1591_ = lean_ctor_get(v_a_1590_, 0);
v_snd_1592_ = lean_ctor_get(v_a_1590_, 1);
v_isSharedCheck_1627_ = !lean_is_exclusive(v_a_1590_);
if (v_isSharedCheck_1627_ == 0)
{
v___x_1594_ = v_a_1590_;
v_isShared_1595_ = v_isSharedCheck_1627_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_snd_1592_);
lean_inc(v_fst_1591_);
lean_dec(v_a_1590_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1627_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1596_; lean_object* v___x_1597_; uint8_t v___x_1598_; 
v___x_1596_ = lean_unsigned_to_nat(1u);
v___x_1597_ = lean_nat_add(v_fst_1591_, v___x_1596_);
v___x_1598_ = lean_nat_dec_lt(v___x_1597_, v_numFuncs_1589_);
if (v___x_1598_ == 0)
{
lean_object* v___x_1600_; 
lean_dec(v___x_1597_);
if (v_isShared_1595_ == 0)
{
v___x_1600_ = v___x_1594_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v_fst_1591_);
lean_ctor_set(v_reuseFailAlloc_1602_, 1, v_snd_1592_);
v___x_1600_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
lean_object* v___x_1601_; 
v___x_1601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1601_, 0, v___x_1600_);
return v___x_1601_;
}
}
else
{
lean_object* v___x_1603_; lean_object* v___x_1604_; uint8_t v___x_1605_; 
v___x_1603_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__4));
v___x_1604_ = lean_unsigned_to_nat(3u);
v___x_1605_ = l_Lean_Expr_isAppOfArity(v_snd_1592_, v___x_1603_, v___x_1604_);
if (v___x_1605_ == 0)
{
lean_object* v___x_1606_; uint8_t v___x_1607_; 
lean_dec(v___x_1597_);
v___x_1606_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__6));
v___x_1607_ = l_Lean_Expr_isAppOfArity(v_snd_1592_, v___x_1606_, v___x_1604_);
if (v___x_1607_ == 0)
{
lean_object* v___x_1608_; 
lean_del_object(v___x_1594_);
lean_dec(v_snd_1592_);
lean_dec(v_fst_1591_);
v___x_1608_ = lean_box(0);
return v___x_1608_;
}
else
{
lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1615_; 
v___x_1609_ = lean_unsigned_to_nat(2u);
v___x_1610_ = l_Lean_Expr_getAppNumArgs(v_snd_1592_);
v___x_1611_ = lean_nat_sub(v___x_1610_, v___x_1609_);
lean_dec(v___x_1610_);
v___x_1612_ = lean_nat_sub(v___x_1611_, v___x_1596_);
lean_dec(v___x_1611_);
v___x_1613_ = l_Lean_Expr_getRevArg_x21(v_snd_1592_, v___x_1612_);
lean_dec(v_snd_1592_);
if (v_isShared_1595_ == 0)
{
lean_ctor_set(v___x_1594_, 1, v___x_1613_);
v___x_1615_ = v___x_1594_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v_fst_1591_);
lean_ctor_set(v_reuseFailAlloc_1617_, 1, v___x_1613_);
v___x_1615_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
lean_object* v___x_1616_; 
v___x_1616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1616_, 0, v___x_1615_);
return v___x_1616_;
}
}
}
else
{
lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1624_; 
lean_dec(v_fst_1591_);
v___x_1618_ = lean_unsigned_to_nat(2u);
v___x_1619_ = l_Lean_Expr_getAppNumArgs(v_snd_1592_);
v___x_1620_ = lean_nat_sub(v___x_1619_, v___x_1618_);
lean_dec(v___x_1619_);
v___x_1621_ = lean_nat_sub(v___x_1620_, v___x_1596_);
lean_dec(v___x_1620_);
v___x_1622_ = l_Lean_Expr_getRevArg_x21(v_snd_1592_, v___x_1621_);
lean_dec(v_snd_1592_);
if (v_isShared_1595_ == 0)
{
lean_ctor_set(v___x_1594_, 1, v___x_1622_);
lean_ctor_set(v___x_1594_, 0, v___x_1597_);
v___x_1624_ = v___x_1594_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v___x_1597_);
lean_ctor_set(v_reuseFailAlloc_1626_, 1, v___x_1622_);
v___x_1624_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
v_a_1590_ = v___x_1624_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Mutual_unpack_spec__0___redArg___boxed(lean_object* v_numFuncs_1628_, lean_object* v_a_1629_){
_start:
{
lean_object* v_res_1630_; 
v_res_1630_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Mutual_unpack_spec__0___redArg(v_numFuncs_1628_, v_a_1629_);
lean_dec(v_numFuncs_1628_);
return v_res_1630_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_unpack(lean_object* v_numFuncs_1631_, lean_object* v_expr_1632_){
_start:
{
lean_object* v_funidx_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v_funidx_1633_ = lean_unsigned_to_nat(0u);
v___x_1634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1634_, 0, v_funidx_1633_);
lean_ctor_set(v___x_1634_, 1, v_expr_1632_);
v___x_1635_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Mutual_unpack_spec__0___redArg(v_numFuncs_1631_, v___x_1634_);
if (lean_obj_tag(v___x_1635_) == 0)
{
return v___x_1635_;
}
else
{
lean_object* v_val_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1652_; 
v_val_1636_ = lean_ctor_get(v___x_1635_, 0);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1638_ = v___x_1635_;
v_isShared_1639_ = v_isSharedCheck_1652_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_val_1636_);
lean_dec(v___x_1635_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1652_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v_fst_1640_; lean_object* v_snd_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1651_; 
v_fst_1640_ = lean_ctor_get(v_val_1636_, 0);
v_snd_1641_ = lean_ctor_get(v_val_1636_, 1);
v_isSharedCheck_1651_ = !lean_is_exclusive(v_val_1636_);
if (v_isSharedCheck_1651_ == 0)
{
v___x_1643_ = v_val_1636_;
v_isShared_1644_ = v_isSharedCheck_1651_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_snd_1641_);
lean_inc(v_fst_1640_);
lean_dec(v_val_1636_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1651_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
lean_object* v___x_1646_; 
if (v_isShared_1644_ == 0)
{
v___x_1646_ = v___x_1643_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v_fst_1640_);
lean_ctor_set(v_reuseFailAlloc_1650_, 1, v_snd_1641_);
v___x_1646_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
lean_object* v___x_1648_; 
if (v_isShared_1639_ == 0)
{
lean_ctor_set(v___x_1638_, 0, v___x_1646_);
v___x_1648_ = v___x_1638_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v___x_1646_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_unpack___boxed(lean_object* v_numFuncs_1653_, lean_object* v_expr_1654_){
_start:
{
lean_object* v_res_1655_; 
v_res_1655_ = l_Lean_Meta_ArgsPacker_Mutual_unpack(v_numFuncs_1653_, v_expr_1654_);
lean_dec(v_numFuncs_1653_);
return v_res_1655_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Mutual_unpack_spec__0(lean_object* v_numFuncs_1656_, lean_object* v_inst_1657_, lean_object* v_a_1658_){
_start:
{
lean_object* v___x_1659_; 
v___x_1659_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Mutual_unpack_spec__0___redArg(v_numFuncs_1656_, v_a_1658_);
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Mutual_unpack_spec__0___boxed(lean_object* v_numFuncs_1660_, lean_object* v_inst_1661_, lean_object* v_a_1662_){
_start:
{
lean_object* v_res_1663_; 
v_res_1663_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_ArgsPacker_Mutual_unpack_spec__0(v_numFuncs_1660_, v_inst_1661_, v_a_1662_);
lean_dec(v_numFuncs_1660_);
return v_res_1663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__1(lean_object* v___x_1664_, lean_object* v___x_1665_, lean_object* v_types_1666_, lean_object* v_i_1667_, uint8_t v___x_1668_, uint8_t v___x_1669_, uint8_t v___x_1670_, lean_object* v_x_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_){
_start:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; 
lean_inc_ref(v_x_1671_);
v___x_1677_ = lean_array_push(v___x_1664_, v_x_1671_);
v___x_1678_ = lean_array_get_borrowed(v___x_1665_, v_types_1666_, v_i_1667_);
v___x_1679_ = l_Lean_Expr_bindingBody_x21(v___x_1678_);
v___x_1680_ = lean_expr_instantiate1(v___x_1679_, v_x_1671_);
lean_dec_ref(v_x_1671_);
lean_dec_ref(v___x_1679_);
v___x_1681_ = l_Lean_Meta_mkLambdaFVars(v___x_1677_, v___x_1680_, v___x_1668_, v___x_1669_, v___x_1668_, v___x_1669_, v___x_1670_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_);
lean_dec_ref(v___x_1677_);
return v___x_1681_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__1___boxed(lean_object* v___x_1682_, lean_object* v___x_1683_, lean_object* v_types_1684_, lean_object* v_i_1685_, lean_object* v___x_1686_, lean_object* v___x_1687_, lean_object* v___x_1688_, lean_object* v_x_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_){
_start:
{
uint8_t v___x_1872__boxed_1695_; uint8_t v___x_1873__boxed_1696_; uint8_t v___x_1874__boxed_1697_; lean_object* v_res_1698_; 
v___x_1872__boxed_1695_ = lean_unbox(v___x_1686_);
v___x_1873__boxed_1696_ = lean_unbox(v___x_1687_);
v___x_1874__boxed_1697_ = lean_unbox(v___x_1688_);
v_res_1698_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__1(v___x_1682_, v___x_1683_, v_types_1684_, v_i_1685_, v___x_1872__boxed_1695_, v___x_1873__boxed_1696_, v___x_1874__boxed_1697_, v_x_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_);
lean_dec(v___y_1693_);
lean_dec_ref(v___y_1692_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v_i_1685_);
lean_dec_ref(v_types_1684_);
lean_dec_ref(v___x_1683_);
return v_res_1698_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__2(void){
_start:
{
lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___x_1701_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__1));
v___x_1702_ = lean_unsigned_to_nat(6u);
v___x_1703_ = lean_unsigned_to_nat(318u);
v___x_1704_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__0));
v___x_1705_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0));
v___x_1706_ = l_mkPanicMessageWithDecl(v___x_1705_, v___x_1704_, v___x_1703_, v___x_1702_, v___x_1701_);
return v___x_1706_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__0___boxed(lean_object* v_i_1710_, lean_object* v___x_1711_, lean_object* v_types_1712_, lean_object* v_u_1713_, lean_object* v___x_1714_, lean_object* v___x_1715_, lean_object* v___x_1716_, lean_object* v___x_1717_, lean_object* v_x_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_){
_start:
{
uint8_t v___x_1932__boxed_1724_; uint8_t v___x_1933__boxed_1725_; uint8_t v___x_1934__boxed_1726_; lean_object* v_res_1727_; 
v___x_1932__boxed_1724_ = lean_unbox(v___x_1715_);
v___x_1933__boxed_1725_ = lean_unbox(v___x_1716_);
v___x_1934__boxed_1726_ = lean_unbox(v___x_1717_);
v_res_1727_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__0(v_i_1710_, v___x_1711_, v_types_1712_, v_u_1713_, v___x_1714_, v___x_1932__boxed_1724_, v___x_1933__boxed_1725_, v___x_1934__boxed_1726_, v_x_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_);
lean_dec(v___y_1722_);
lean_dec_ref(v___y_1721_);
lean_dec(v___y_1720_);
lean_dec_ref(v___y_1719_);
lean_dec(v___x_1711_);
lean_dec(v_i_1710_);
return v_res_1727_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go(lean_object* v_types_1728_, lean_object* v_u_1729_, lean_object* v_x_1730_, lean_object* v_i_1731_, lean_object* v_a_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_){
_start:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; uint8_t v___x_1741_; 
v___x_1737_ = l_Lean_instInhabitedExpr;
v___x_1738_ = lean_array_get_size(v_types_1728_);
v___x_1739_ = lean_unsigned_to_nat(1u);
v___x_1740_ = lean_nat_sub(v___x_1738_, v___x_1739_);
v___x_1741_ = lean_nat_dec_lt(v_i_1731_, v___x_1740_);
lean_dec(v___x_1740_);
if (v___x_1741_ == 0)
{
lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
lean_dec(v_u_1729_);
v___x_1742_ = lean_array_get(v___x_1737_, v_types_1728_, v_i_1731_);
lean_dec(v_i_1731_);
lean_dec_ref(v_types_1728_);
v___x_1743_ = l_Lean_Expr_bindingBody_x21(v___x_1742_);
lean_dec(v___x_1742_);
v___x_1744_ = lean_expr_instantiate1(v___x_1743_, v_x_1730_);
lean_dec_ref(v_x_1730_);
lean_dec_ref(v___x_1743_);
v___x_1745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1744_);
return v___x_1745_;
}
else
{
lean_object* v___x_1746_; 
lean_inc(v_a_1735_);
lean_inc_ref(v_a_1734_);
lean_inc(v_a_1733_);
lean_inc_ref(v_a_1732_);
lean_inc_ref(v_x_1730_);
v___x_1746_ = lean_infer_type(v_x_1730_, v_a_1732_, v_a_1733_, v_a_1734_, v_a_1735_);
if (lean_obj_tag(v___x_1746_) == 0)
{
lean_object* v_a_1747_; lean_object* v___x_1748_; 
v_a_1747_ = lean_ctor_get(v___x_1746_, 0);
lean_inc(v_a_1747_);
lean_dec_ref_known(v___x_1746_, 1);
v___x_1748_ = l_Lean_Meta_whnfD(v_a_1747_, v_a_1732_, v_a_1733_, v_a_1734_, v_a_1735_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; uint8_t v___x_1752_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_a_1749_);
lean_dec_ref_known(v___x_1748_, 1);
v___x_1750_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1));
v___x_1751_ = lean_unsigned_to_nat(2u);
v___x_1752_ = l_Lean_Expr_isAppOfArity(v_a_1749_, v___x_1750_, v___x_1751_);
if (v___x_1752_ == 0)
{
lean_object* v___x_1753_; lean_object* v___x_1754_; 
lean_dec(v_a_1749_);
lean_dec(v_i_1731_);
lean_dec_ref(v_x_1730_);
lean_dec(v_u_1729_);
lean_dec_ref(v_types_1728_);
v___x_1753_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__2, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__2_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__2);
v___x_1754_ = l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(v___x_1753_, v_a_1732_, v_a_1733_, v_a_1734_, v_a_1735_);
return v___x_1754_;
}
else
{
lean_object* v_dummy_1755_; lean_object* v_nargs_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; uint8_t v___x_1770_; uint8_t v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___f_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___f_1779_; lean_object* v___x_1780_; 
v_dummy_1755_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___closed__0, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___closed__0_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go___closed__0);
v_nargs_1756_ = l_Lean_Expr_getAppNumArgs(v_a_1749_);
lean_inc(v_nargs_1756_);
v___x_1757_ = lean_mk_array(v_nargs_1756_, v_dummy_1755_);
v___x_1758_ = lean_nat_sub(v_nargs_1756_, v___x_1739_);
lean_dec(v_nargs_1756_);
lean_inc(v_a_1749_);
v___x_1759_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1749_, v___x_1757_, v___x_1758_);
v___x_1760_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__3));
lean_inc_n(v_u_1729_, 2);
v___x_1761_ = l_Lean_Level_succ___override(v_u_1729_);
v___x_1762_ = l_Lean_Expr_getAppFn(v_a_1749_);
lean_dec(v_a_1749_);
v___x_1763_ = l_Lean_Expr_constLevels_x21(v___x_1762_);
lean_dec_ref(v___x_1762_);
v___x_1764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1761_);
lean_ctor_set(v___x_1764_, 1, v___x_1763_);
v___x_1765_ = l_Lean_mkConst(v___x_1760_, v___x_1764_);
v___x_1766_ = l_Lean_mkAppN(v___x_1765_, v___x_1759_);
v___x_1767_ = lean_mk_empty_array_with_capacity(v___x_1739_);
lean_inc_ref(v_x_1730_);
lean_inc_ref_n(v___x_1767_, 2);
v___x_1768_ = lean_array_push(v___x_1767_, v_x_1730_);
v___x_1769_ = l_Lean_mkSort(v_u_1729_);
v___x_1770_ = 0;
v___x_1771_ = 1;
v___x_1772_ = lean_box(v___x_1770_);
v___x_1773_ = lean_box(v___x_1752_);
v___x_1774_ = lean_box(v___x_1771_);
lean_inc_ref(v_types_1728_);
lean_inc(v_i_1731_);
v___f_1775_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__0___boxed), 14, 8);
lean_closure_set(v___f_1775_, 0, v_i_1731_);
lean_closure_set(v___f_1775_, 1, v___x_1739_);
lean_closure_set(v___f_1775_, 2, v_types_1728_);
lean_closure_set(v___f_1775_, 3, v_u_1729_);
lean_closure_set(v___f_1775_, 4, v___x_1767_);
lean_closure_set(v___f_1775_, 5, v___x_1772_);
lean_closure_set(v___f_1775_, 6, v___x_1773_);
lean_closure_set(v___f_1775_, 7, v___x_1774_);
v___x_1776_ = lean_box(v___x_1770_);
v___x_1777_ = lean_box(v___x_1752_);
v___x_1778_ = lean_box(v___x_1771_);
v___f_1779_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__1___boxed), 13, 7);
lean_closure_set(v___f_1779_, 0, v___x_1767_);
lean_closure_set(v___f_1779_, 1, v___x_1737_);
lean_closure_set(v___f_1779_, 2, v_types_1728_);
lean_closure_set(v___f_1779_, 3, v_i_1731_);
lean_closure_set(v___f_1779_, 4, v___x_1776_);
lean_closure_set(v___f_1779_, 5, v___x_1777_);
lean_closure_set(v___f_1779_, 6, v___x_1778_);
v___x_1780_ = l_Lean_Meta_mkLambdaFVars(v___x_1768_, v___x_1769_, v___x_1770_, v___x_1752_, v___x_1770_, v___x_1752_, v___x_1771_, v_a_1732_, v_a_1733_, v_a_1734_, v_a_1735_);
lean_dec_ref(v___x_1768_);
if (lean_obj_tag(v___x_1780_) == 0)
{
lean_object* v_a_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; 
v_a_1781_ = lean_ctor_get(v___x_1780_, 0);
lean_inc(v_a_1781_);
lean_dec_ref_known(v___x_1780_, 1);
v___x_1782_ = l_Lean_Expr_app___override(v___x_1766_, v_a_1781_);
v___x_1783_ = l_Lean_Expr_app___override(v___x_1782_, v_x_1730_);
v___x_1784_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__4));
v___x_1785_ = l_Lean_Core_mkFreshUserName(v___x_1784_, v_a_1734_, v_a_1735_);
if (lean_obj_tag(v___x_1785_) == 0)
{
lean_object* v_a_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; 
v_a_1786_ = lean_ctor_get(v___x_1785_, 0);
lean_inc(v_a_1786_);
lean_dec_ref_known(v___x_1785_, 1);
v___x_1787_ = lean_unsigned_to_nat(0u);
v___x_1788_ = lean_array_get_borrowed(v___x_1737_, v___x_1759_, v___x_1787_);
lean_inc(v___x_1788_);
v___x_1789_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_a_1786_, v___x_1788_, v___f_1779_, v_a_1732_, v_a_1733_, v_a_1734_, v_a_1735_);
if (lean_obj_tag(v___x_1789_) == 0)
{
lean_object* v_a_1790_; lean_object* v___x_1791_; 
v_a_1790_ = lean_ctor_get(v___x_1789_, 0);
lean_inc(v_a_1790_);
lean_dec_ref_known(v___x_1789_, 1);
v___x_1791_ = l_Lean_Core_mkFreshUserName(v___x_1784_, v_a_1734_, v_a_1735_);
if (lean_obj_tag(v___x_1791_) == 0)
{
lean_object* v_a_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; 
v_a_1792_ = lean_ctor_get(v___x_1791_, 0);
lean_inc(v_a_1792_);
lean_dec_ref_known(v___x_1791_, 1);
v___x_1793_ = lean_array_get(v___x_1737_, v___x_1759_, v___x_1739_);
lean_dec_ref(v___x_1759_);
v___x_1794_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_a_1792_, v___x_1793_, v___f_1775_, v_a_1732_, v_a_1733_, v_a_1734_, v_a_1735_);
if (lean_obj_tag(v___x_1794_) == 0)
{
lean_object* v_a_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1803_; 
v_a_1795_ = lean_ctor_get(v___x_1794_, 0);
v_isSharedCheck_1803_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1797_ = v___x_1794_;
v_isShared_1798_ = v_isSharedCheck_1803_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_a_1795_);
lean_dec(v___x_1794_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1803_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1799_; lean_object* v___x_1801_; 
v___x_1799_ = l_Lean_mkAppB(v___x_1783_, v_a_1790_, v_a_1795_);
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 0, v___x_1799_);
v___x_1801_ = v___x_1797_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v___x_1799_);
v___x_1801_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
return v___x_1801_;
}
}
}
else
{
lean_dec(v_a_1790_);
lean_dec_ref(v___x_1783_);
return v___x_1794_;
}
}
else
{
lean_object* v_a_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1811_; 
lean_dec(v_a_1790_);
lean_dec_ref(v___x_1783_);
lean_dec_ref(v___f_1775_);
lean_dec_ref(v___x_1759_);
v_a_1804_ = lean_ctor_get(v___x_1791_, 0);
v_isSharedCheck_1811_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1806_ = v___x_1791_;
v_isShared_1807_ = v_isSharedCheck_1811_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_a_1804_);
lean_dec(v___x_1791_);
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
else
{
lean_dec_ref(v___x_1783_);
lean_dec_ref(v___f_1775_);
lean_dec_ref(v___x_1759_);
return v___x_1789_;
}
}
else
{
lean_object* v_a_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1819_; 
lean_dec_ref(v___x_1783_);
lean_dec_ref(v___f_1779_);
lean_dec_ref(v___f_1775_);
lean_dec_ref(v___x_1759_);
v_a_1812_ = lean_ctor_get(v___x_1785_, 0);
v_isSharedCheck_1819_ = !lean_is_exclusive(v___x_1785_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1814_ = v___x_1785_;
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_a_1812_);
lean_dec(v___x_1785_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1817_; 
if (v_isShared_1815_ == 0)
{
v___x_1817_ = v___x_1814_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_a_1812_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
}
else
{
lean_dec_ref(v___f_1779_);
lean_dec_ref(v___f_1775_);
lean_dec_ref(v___x_1766_);
lean_dec_ref(v___x_1759_);
lean_dec_ref(v_x_1730_);
return v___x_1780_;
}
}
}
else
{
lean_dec(v_i_1731_);
lean_dec_ref(v_x_1730_);
lean_dec(v_u_1729_);
lean_dec_ref(v_types_1728_);
return v___x_1748_;
}
}
else
{
lean_dec(v_i_1731_);
lean_dec_ref(v_x_1730_);
lean_dec(v_u_1729_);
lean_dec_ref(v_types_1728_);
return v___x_1746_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___lam__0(lean_object* v_i_1820_, lean_object* v___x_1821_, lean_object* v_types_1822_, lean_object* v_u_1823_, lean_object* v___x_1824_, uint8_t v___x_1825_, uint8_t v___x_1826_, uint8_t v___x_1827_, lean_object* v_x_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_){
_start:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1834_ = lean_nat_add(v_i_1820_, v___x_1821_);
lean_inc_ref(v_x_1828_);
v___x_1835_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go(v_types_1822_, v_u_1823_, v_x_1828_, v___x_1834_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_);
if (lean_obj_tag(v___x_1835_) == 0)
{
lean_object* v_a_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; 
v_a_1836_ = lean_ctor_get(v___x_1835_, 0);
lean_inc(v_a_1836_);
lean_dec_ref_known(v___x_1835_, 1);
v___x_1837_ = lean_array_push(v___x_1824_, v_x_1828_);
v___x_1838_ = l_Lean_Meta_mkLambdaFVars(v___x_1837_, v_a_1836_, v___x_1825_, v___x_1826_, v___x_1825_, v___x_1826_, v___x_1827_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_);
lean_dec_ref(v___x_1837_);
return v___x_1838_;
}
else
{
lean_dec_ref(v_x_1828_);
lean_dec_ref(v___x_1824_);
return v___x_1835_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___boxed(lean_object* v_types_1839_, lean_object* v_u_1840_, lean_object* v_x_1841_, lean_object* v_i_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_){
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go(v_types_1839_, v_u_1840_, v_x_1841_, v_i_1842_, v_a_1843_, v_a_1844_, v_a_1845_, v_a_1846_);
lean_dec(v_a_1846_);
lean_dec_ref(v_a_1845_);
lean_dec(v_a_1844_);
lean_dec_ref(v_a_1843_);
return v_res_1848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___lam__0(lean_object* v_x_1849_, lean_object* v_body_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_){
_start:
{
lean_object* v___x_1856_; 
v___x_1856_ = l_Lean_Meta_getLevel(v_body_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_);
return v___x_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___lam__0___boxed(lean_object* v_x_1857_, lean_object* v_body_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_){
_start:
{
lean_object* v_res_1864_; 
v_res_1864_ = l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___lam__0(v_x_1857_, v_body_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_);
lean_dec(v___y_1862_);
lean_dec_ref(v___y_1861_);
lean_dec(v___y_1860_);
lean_dec_ref(v___y_1859_);
lean_dec_ref(v_x_1857_);
return v_res_1864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_mkCodomain(lean_object* v_types_1866_, lean_object* v_x_1867_, lean_object* v_a_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_, lean_object* v_a_1871_){
_start:
{
lean_object* v___f_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; uint8_t v___x_1878_; lean_object* v___x_1879_; 
v___f_1873_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___closed__0));
v___x_1874_ = l_Lean_instInhabitedExpr;
v___x_1875_ = lean_unsigned_to_nat(0u);
v___x_1876_ = lean_array_get_borrowed(v___x_1874_, v_types_1866_, v___x_1875_);
v___x_1877_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0));
v___x_1878_ = 0;
lean_inc(v___x_1876_);
v___x_1879_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg(v___x_1876_, v___x_1877_, v___f_1873_, v___x_1878_, v___x_1878_, v_a_1868_, v_a_1869_, v_a_1870_, v_a_1871_);
if (lean_obj_tag(v___x_1879_) == 0)
{
lean_object* v_a_1880_; lean_object* v___x_1881_; 
v_a_1880_ = lean_ctor_get(v___x_1879_, 0);
lean_inc(v_a_1880_);
lean_dec_ref_known(v___x_1879_, 1);
v___x_1881_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go(v_types_1866_, v_a_1880_, v_x_1867_, v___x_1875_, v_a_1868_, v_a_1869_, v_a_1870_, v_a_1871_);
return v___x_1881_;
}
else
{
lean_object* v_a_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1889_; 
lean_dec_ref(v_x_1867_);
lean_dec_ref(v_types_1866_);
v_a_1882_ = lean_ctor_get(v___x_1879_, 0);
v_isSharedCheck_1889_ = !lean_is_exclusive(v___x_1879_);
if (v_isSharedCheck_1889_ == 0)
{
v___x_1884_ = v___x_1879_;
v_isShared_1885_ = v_isSharedCheck_1889_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_a_1882_);
lean_dec(v___x_1879_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1889_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
lean_object* v___x_1887_; 
if (v_isShared_1885_ == 0)
{
v___x_1887_ = v___x_1884_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v_a_1882_);
v___x_1887_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
return v___x_1887_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_mkCodomain___boxed(lean_object* v_types_1890_, lean_object* v_x_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_){
_start:
{
lean_object* v_res_1897_; 
v_res_1897_ = l_Lean_Meta_ArgsPacker_Mutual_mkCodomain(v_types_1890_, v_x_1891_, v_a_1892_, v_a_1893_, v_a_1894_, v_a_1895_);
lean_dec(v_a_1895_);
lean_dec_ref(v_a_1894_);
lean_dec(v_a_1893_);
lean_dec_ref(v_a_1892_);
return v_res_1897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryType___lam__0(lean_object* v_a_1898_, lean_object* v___x_1899_, uint8_t v___x_1900_, lean_object* v_x_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_){
_start:
{
lean_object* v___x_1907_; 
lean_inc_ref(v_x_1901_);
v___x_1907_ = l_Lean_Meta_ArgsPacker_Mutual_mkCodomain(v_a_1898_, v_x_1901_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_);
if (lean_obj_tag(v___x_1907_) == 0)
{
lean_object* v_a_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; uint8_t v___x_1911_; uint8_t v___x_1912_; lean_object* v___x_1913_; 
v_a_1908_ = lean_ctor_get(v___x_1907_, 0);
lean_inc(v_a_1908_);
lean_dec_ref_known(v___x_1907_, 1);
v___x_1909_ = lean_mk_empty_array_with_capacity(v___x_1899_);
v___x_1910_ = lean_array_push(v___x_1909_, v_x_1901_);
v___x_1911_ = 1;
v___x_1912_ = 1;
v___x_1913_ = l_Lean_Meta_mkForallFVars(v___x_1910_, v_a_1908_, v___x_1900_, v___x_1911_, v___x_1911_, v___x_1912_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_);
lean_dec_ref(v___x_1910_);
return v___x_1913_;
}
else
{
lean_dec_ref(v_x_1901_);
return v___x_1907_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryType___lam__0___boxed(lean_object* v_a_1914_, lean_object* v___x_1915_, lean_object* v___x_1916_, lean_object* v_x_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_){
_start:
{
uint8_t v___x_2004__boxed_1923_; lean_object* v_res_1924_; 
v___x_2004__boxed_1923_ = lean_unbox(v___x_1916_);
v_res_1924_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryType___lam__0(v_a_1914_, v___x_1915_, v___x_2004__boxed_1923_, v_x_1917_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_);
lean_dec(v___y_1921_);
lean_dec_ref(v___y_1920_);
lean_dec(v___y_1919_);
lean_dec_ref(v___y_1918_);
lean_dec(v___x_1915_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__0(size_t v_sz_1925_, size_t v_i_1926_, lean_object* v_bs_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_){
_start:
{
uint8_t v___x_1933_; 
v___x_1933_ = lean_usize_dec_lt(v_i_1926_, v_sz_1925_);
if (v___x_1933_ == 0)
{
lean_object* v___x_1934_; 
v___x_1934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1934_, 0, v_bs_1927_);
return v___x_1934_;
}
else
{
lean_object* v_v_1935_; lean_object* v___x_1936_; lean_object* v_bs_x27_1937_; lean_object* v___x_1938_; 
v_v_1935_ = lean_array_uget(v_bs_1927_, v_i_1926_);
v___x_1936_ = lean_unsigned_to_nat(0u);
v_bs_x27_1937_ = lean_array_uset(v_bs_1927_, v_i_1926_, v___x_1936_);
v___x_1938_ = l_Lean_Meta_whnfForall(v_v_1935_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_);
if (lean_obj_tag(v___x_1938_) == 0)
{
lean_object* v_a_1939_; size_t v___x_1940_; size_t v___x_1941_; lean_object* v___x_1942_; 
v_a_1939_ = lean_ctor_get(v___x_1938_, 0);
lean_inc(v_a_1939_);
lean_dec_ref_known(v___x_1938_, 1);
v___x_1940_ = ((size_t)1ULL);
v___x_1941_ = lean_usize_add(v_i_1926_, v___x_1940_);
v___x_1942_ = lean_array_uset(v_bs_x27_1937_, v_i_1926_, v_a_1939_);
v_i_1926_ = v___x_1941_;
v_bs_1927_ = v___x_1942_;
goto _start;
}
else
{
lean_object* v_a_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1951_; 
lean_dec_ref(v_bs_x27_1937_);
v_a_1944_ = lean_ctor_get(v___x_1938_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1938_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1946_ = v___x_1938_;
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_a_1944_);
lean_dec(v___x_1938_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__0___boxed(lean_object* v_sz_1952_, lean_object* v_i_1953_, lean_object* v_bs_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_){
_start:
{
size_t v_sz_boxed_1960_; size_t v_i_boxed_1961_; lean_object* v_res_1962_; 
v_sz_boxed_1960_ = lean_unbox_usize(v_sz_1952_);
lean_dec(v_sz_1952_);
v_i_boxed_1961_ = lean_unbox_usize(v_i_1953_);
lean_dec(v_i_1953_);
v_res_1962_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__0(v_sz_boxed_1960_, v_i_boxed_1961_, v_bs_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_);
lean_dec(v___y_1958_);
lean_dec_ref(v___y_1957_);
lean_dec(v___y_1956_);
lean_dec_ref(v___y_1955_);
return v_res_1962_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___x_1964_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__0));
v___x_1965_ = l_Lean_stringToMessageData(v___x_1964_);
return v___x_1965_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2(lean_object* v_as_1966_, size_t v_i_1967_, size_t v_stop_1968_, lean_object* v_b_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_){
_start:
{
lean_object* v_a_1976_; uint8_t v___x_1980_; 
v___x_1980_ = lean_usize_dec_eq(v_i_1967_, v_stop_1968_);
if (v___x_1980_ == 0)
{
lean_object* v___x_1981_; uint8_t v___x_1982_; 
v___x_1981_ = lean_array_uget_borrowed(v_as_1966_, v_i_1967_);
v___x_1982_ = l_Lean_Expr_isForall(v___x_1981_);
if (v___x_1982_ == 0)
{
lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; 
v___x_1983_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___closed__1);
lean_inc(v___x_1981_);
v___x_1984_ = l_Lean_MessageData_ofExpr(v___x_1981_);
v___x_1985_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1985_, 0, v___x_1983_);
lean_ctor_set(v___x_1985_, 1, v___x_1984_);
v___x_1986_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_1985_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_);
if (lean_obj_tag(v___x_1986_) == 0)
{
lean_object* v_a_1987_; 
v_a_1987_ = lean_ctor_get(v___x_1986_, 0);
lean_inc(v_a_1987_);
lean_dec_ref_known(v___x_1986_, 1);
v_a_1976_ = v_a_1987_;
goto v___jp_1975_;
}
else
{
return v___x_1986_;
}
}
else
{
lean_object* v___x_1988_; 
v___x_1988_ = lean_box(0);
v_a_1976_ = v___x_1988_;
goto v___jp_1975_;
}
}
else
{
lean_object* v___x_1989_; 
v___x_1989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1989_, 0, v_b_1969_);
return v___x_1989_;
}
v___jp_1975_:
{
size_t v___x_1977_; size_t v___x_1978_; 
v___x_1977_ = ((size_t)1ULL);
v___x_1978_ = lean_usize_add(v_i_1967_, v___x_1977_);
v_i_1967_ = v___x_1978_;
v_b_1969_ = v_a_1976_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2___boxed(lean_object* v_as_1990_, lean_object* v_i_1991_, lean_object* v_stop_1992_, lean_object* v_b_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_){
_start:
{
size_t v_i_boxed_1999_; size_t v_stop_boxed_2000_; lean_object* v_res_2001_; 
v_i_boxed_1999_ = lean_unbox_usize(v_i_1991_);
lean_dec(v_i_1991_);
v_stop_boxed_2000_ = lean_unbox_usize(v_stop_1992_);
lean_dec(v_stop_1992_);
v_res_2001_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2(v_as_1990_, v_i_boxed_1999_, v_stop_boxed_2000_, v_b_1993_, v___y_1994_, v___y_1995_, v___y_1996_, v___y_1997_);
lean_dec(v___y_1997_);
lean_dec_ref(v___y_1996_);
lean_dec(v___y_1995_);
lean_dec_ref(v___y_1994_);
lean_dec_ref(v_as_1990_);
return v_res_2001_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__1(size_t v_sz_2002_, size_t v_i_2003_, lean_object* v_bs_2004_){
_start:
{
uint8_t v___x_2005_; 
v___x_2005_ = lean_usize_dec_lt(v_i_2003_, v_sz_2002_);
if (v___x_2005_ == 0)
{
return v_bs_2004_;
}
else
{
lean_object* v_v_2006_; lean_object* v___x_2007_; lean_object* v_bs_x27_2008_; lean_object* v___x_2009_; size_t v___x_2010_; size_t v___x_2011_; lean_object* v___x_2012_; 
v_v_2006_ = lean_array_uget(v_bs_2004_, v_i_2003_);
v___x_2007_ = lean_unsigned_to_nat(0u);
v_bs_x27_2008_ = lean_array_uset(v_bs_2004_, v_i_2003_, v___x_2007_);
v___x_2009_ = l_Lean_Expr_bindingDomain_x21(v_v_2006_);
lean_dec(v_v_2006_);
v___x_2010_ = ((size_t)1ULL);
v___x_2011_ = lean_usize_add(v_i_2003_, v___x_2010_);
v___x_2012_ = lean_array_uset(v_bs_x27_2008_, v_i_2003_, v___x_2009_);
v_i_2003_ = v___x_2011_;
v_bs_2004_ = v___x_2012_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__1___boxed(lean_object* v_sz_2014_, lean_object* v_i_2015_, lean_object* v_bs_2016_){
_start:
{
size_t v_sz_boxed_2017_; size_t v_i_boxed_2018_; lean_object* v_res_2019_; 
v_sz_boxed_2017_ = lean_unbox_usize(v_sz_2014_);
lean_dec(v_sz_2014_);
v_i_boxed_2018_ = lean_unbox_usize(v_i_2015_);
lean_dec(v_i_2015_);
v_res_2019_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__1(v_sz_boxed_2017_, v_i_boxed_2018_, v_bs_2016_);
return v_res_2019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryType(lean_object* v_types_2020_, lean_object* v_a_2021_, lean_object* v_a_2022_, lean_object* v_a_2023_, lean_object* v_a_2024_){
_start:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; uint8_t v___x_2028_; 
v___x_2026_ = lean_array_get_size(v_types_2020_);
v___x_2027_ = lean_unsigned_to_nat(1u);
v___x_2028_ = lean_nat_dec_eq(v___x_2026_, v___x_2027_);
if (v___x_2028_ == 0)
{
size_t v_sz_2029_; size_t v___x_2030_; lean_object* v___x_2031_; 
v_sz_2029_ = lean_array_size(v_types_2020_);
v___x_2030_ = ((size_t)0ULL);
v___x_2031_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__0(v_sz_2029_, v___x_2030_, v_types_2020_, v_a_2021_, v_a_2022_, v_a_2023_, v_a_2024_);
if (lean_obj_tag(v___x_2031_) == 0)
{
lean_object* v_a_2032_; lean_object* v___x_2033_; lean_object* v___f_2034_; lean_object* v___x_2052_; lean_object* v___x_2053_; uint8_t v___x_2054_; 
v_a_2032_ = lean_ctor_get(v___x_2031_, 0);
lean_inc_n(v_a_2032_, 2);
lean_dec_ref_known(v___x_2031_, 1);
v___x_2033_ = lean_box(v___x_2028_);
v___f_2034_ = lean_alloc_closure((void*)(l_Lean_Meta_ArgsPacker_Mutual_uncurryType___lam__0___boxed), 9, 3);
lean_closure_set(v___f_2034_, 0, v_a_2032_);
lean_closure_set(v___f_2034_, 1, v___x_2027_);
lean_closure_set(v___f_2034_, 2, v___x_2033_);
v___x_2052_ = lean_unsigned_to_nat(0u);
v___x_2053_ = lean_array_get_size(v_a_2032_);
v___x_2054_ = lean_nat_dec_lt(v___x_2052_, v___x_2053_);
if (v___x_2054_ == 0)
{
goto v___jp_2035_;
}
else
{
lean_object* v___x_2055_; size_t v___x_2056_; lean_object* v___x_2057_; 
v___x_2055_ = lean_box(0);
v___x_2056_ = lean_usize_of_nat(v___x_2053_);
v___x_2057_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__2(v_a_2032_, v___x_2030_, v___x_2056_, v___x_2055_, v_a_2021_, v_a_2022_, v_a_2023_, v_a_2024_);
if (lean_obj_tag(v___x_2057_) == 0)
{
lean_dec_ref_known(v___x_2057_, 1);
goto v___jp_2035_;
}
else
{
lean_object* v_a_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2065_; 
lean_dec_ref(v___f_2034_);
lean_dec(v_a_2032_);
v_a_2058_ = lean_ctor_get(v___x_2057_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2057_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2060_ = v___x_2057_;
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_a_2058_);
lean_dec(v___x_2057_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v___x_2063_; 
if (v_isShared_2061_ == 0)
{
v___x_2063_ = v___x_2060_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_a_2058_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
return v___x_2063_;
}
}
}
}
v___jp_2035_:
{
size_t v_sz_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; 
v_sz_2036_ = lean_array_size(v_a_2032_);
v___x_2037_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__1(v_sz_2036_, v___x_2030_, v_a_2032_);
v___x_2038_ = l_Lean_Meta_ArgsPacker_Mutual_packType(v___x_2037_, v_a_2021_, v_a_2022_, v_a_2023_, v_a_2024_);
if (lean_obj_tag(v___x_2038_) == 0)
{
lean_object* v_a_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; 
v_a_2039_ = lean_ctor_get(v___x_2038_, 0);
lean_inc(v_a_2039_);
lean_dec_ref_known(v___x_2038_, 1);
v___x_2040_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__2));
v___x_2041_ = l_Lean_Core_mkFreshUserName(v___x_2040_, v_a_2023_, v_a_2024_);
if (lean_obj_tag(v___x_2041_) == 0)
{
lean_object* v_a_2042_; lean_object* v___x_2043_; 
v_a_2042_ = lean_ctor_get(v___x_2041_, 0);
lean_inc(v_a_2042_);
lean_dec_ref_known(v___x_2041_, 1);
v___x_2043_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_a_2042_, v_a_2039_, v___f_2034_, v_a_2021_, v_a_2022_, v_a_2023_, v_a_2024_);
return v___x_2043_;
}
else
{
lean_object* v_a_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2051_; 
lean_dec(v_a_2039_);
lean_dec_ref(v___f_2034_);
v_a_2044_ = lean_ctor_get(v___x_2041_, 0);
v_isSharedCheck_2051_ = !lean_is_exclusive(v___x_2041_);
if (v_isSharedCheck_2051_ == 0)
{
v___x_2046_ = v___x_2041_;
v_isShared_2047_ = v_isSharedCheck_2051_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_a_2044_);
lean_dec(v___x_2041_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2051_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
lean_object* v___x_2049_; 
if (v_isShared_2047_ == 0)
{
v___x_2049_ = v___x_2046_;
goto v_reusejp_2048_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v_a_2044_);
v___x_2049_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2048_;
}
v_reusejp_2048_:
{
return v___x_2049_;
}
}
}
}
else
{
lean_dec_ref(v___f_2034_);
return v___x_2038_;
}
}
}
else
{
lean_object* v_a_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2073_; 
v_a_2066_ = lean_ctor_get(v___x_2031_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2031_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2068_ = v___x_2031_;
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_a_2066_);
lean_dec(v___x_2031_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2071_; 
if (v_isShared_2069_ == 0)
{
v___x_2071_ = v___x_2068_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_a_2066_);
v___x_2071_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
return v___x_2071_;
}
}
}
}
else
{
lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2074_ = l_Lean_instInhabitedExpr;
v___x_2075_ = lean_unsigned_to_nat(0u);
v___x_2076_ = lean_array_get(v___x_2074_, v_types_2020_, v___x_2075_);
lean_dec_ref(v_types_2020_);
v___x_2077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2077_, 0, v___x_2076_);
return v___x_2077_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryType___boxed(lean_object* v_types_2078_, lean_object* v_a_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_){
_start:
{
lean_object* v_res_2084_; 
v_res_2084_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryType(v_types_2078_, v_a_2079_, v_a_2080_, v_a_2081_, v_a_2082_);
lean_dec(v_a_2082_);
lean_dec_ref(v_a_2081_);
lean_dec(v_a_2080_);
lean_dec_ref(v_a_2079_);
return v_res_2084_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; 
v___x_2086_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__0));
v___x_2087_ = l_Lean_stringToMessageData(v___x_2086_);
return v___x_2087_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__3(void){
_start:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; 
v___x_2089_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__2));
v___x_2090_ = l_Lean_stringToMessageData(v___x_2089_);
return v___x_2090_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1(lean_object* v___x_2091_, lean_object* v_as_2092_, size_t v_i_2093_, size_t v_stop_2094_, lean_object* v_b_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_){
_start:
{
lean_object* v_a_2102_; uint8_t v___x_2106_; 
v___x_2106_ = lean_usize_dec_eq(v_i_2093_, v_stop_2094_);
if (v___x_2106_ == 0)
{
lean_object* v___x_2107_; lean_object* v___x_2108_; 
v___x_2107_ = lean_array_uget_borrowed(v_as_2092_, v_i_2093_);
lean_inc_ref(v___x_2091_);
lean_inc(v___x_2107_);
v___x_2108_ = l_Lean_Meta_isExprDefEq(v___x_2107_, v___x_2091_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_);
if (lean_obj_tag(v___x_2108_) == 0)
{
lean_object* v_a_2109_; uint8_t v___x_2110_; 
v_a_2109_ = lean_ctor_get(v___x_2108_, 0);
lean_inc(v_a_2109_);
lean_dec_ref_known(v___x_2108_, 1);
v___x_2110_ = lean_unbox(v_a_2109_);
lean_dec(v_a_2109_);
if (v___x_2110_ == 0)
{
lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2111_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__1);
lean_inc(v___x_2107_);
v___x_2112_ = l_Lean_MessageData_ofExpr(v___x_2107_);
v___x_2113_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2111_);
lean_ctor_set(v___x_2113_, 1, v___x_2112_);
v___x_2114_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___closed__3);
v___x_2115_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2115_, 0, v___x_2113_);
lean_ctor_set(v___x_2115_, 1, v___x_2114_);
lean_inc_ref(v___x_2091_);
v___x_2116_ = l_Lean_MessageData_ofExpr(v___x_2091_);
v___x_2117_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2117_, 0, v___x_2115_);
lean_ctor_set(v___x_2117_, 1, v___x_2116_);
v___x_2118_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_2117_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_);
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v_a_2119_; 
v_a_2119_ = lean_ctor_get(v___x_2118_, 0);
lean_inc(v_a_2119_);
lean_dec_ref_known(v___x_2118_, 1);
v_a_2102_ = v_a_2119_;
goto v___jp_2101_;
}
else
{
lean_dec_ref(v___x_2091_);
return v___x_2118_;
}
}
else
{
lean_object* v___x_2120_; 
v___x_2120_ = lean_box(0);
v_a_2102_ = v___x_2120_;
goto v___jp_2101_;
}
}
else
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2128_; 
lean_dec_ref(v___x_2091_);
v_a_2121_ = lean_ctor_get(v___x_2108_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2123_ = v___x_2108_;
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2108_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2126_; 
if (v_isShared_2124_ == 0)
{
v___x_2126_ = v___x_2123_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_a_2121_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
}
}
else
{
lean_object* v___x_2129_; 
lean_dec_ref(v___x_2091_);
v___x_2129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2129_, 0, v_b_2095_);
return v___x_2129_;
}
v___jp_2101_:
{
size_t v___x_2103_; size_t v___x_2104_; 
v___x_2103_ = ((size_t)1ULL);
v___x_2104_ = lean_usize_add(v_i_2093_, v___x_2103_);
v_i_2093_ = v___x_2104_;
v_b_2095_ = v_a_2102_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1___boxed(lean_object* v___x_2130_, lean_object* v_as_2131_, lean_object* v_i_2132_, lean_object* v_stop_2133_, lean_object* v_b_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_){
_start:
{
size_t v_i_boxed_2140_; size_t v_stop_boxed_2141_; lean_object* v_res_2142_; 
v_i_boxed_2140_ = lean_unbox_usize(v_i_2132_);
lean_dec(v_i_2132_);
v_stop_boxed_2141_ = lean_unbox_usize(v_stop_2133_);
lean_dec(v_stop_2133_);
v_res_2142_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1(v___x_2130_, v_as_2131_, v_i_boxed_2140_, v_stop_boxed_2141_, v_b_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_);
lean_dec(v___y_2138_);
lean_dec_ref(v___y_2137_);
lean_dec(v___y_2136_);
lean_dec_ref(v___y_2135_);
lean_dec_ref(v_as_2131_);
return v_res_2142_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__0(size_t v_sz_2143_, size_t v_i_2144_, lean_object* v_bs_2145_){
_start:
{
uint8_t v___x_2146_; 
v___x_2146_ = lean_usize_dec_lt(v_i_2144_, v_sz_2143_);
if (v___x_2146_ == 0)
{
return v_bs_2145_;
}
else
{
lean_object* v_v_2147_; lean_object* v___x_2148_; lean_object* v_bs_x27_2149_; lean_object* v___x_2150_; size_t v___x_2151_; size_t v___x_2152_; lean_object* v___x_2153_; 
v_v_2147_ = lean_array_uget(v_bs_2145_, v_i_2144_);
v___x_2148_ = lean_unsigned_to_nat(0u);
v_bs_x27_2149_ = lean_array_uset(v_bs_2145_, v_i_2144_, v___x_2148_);
v___x_2150_ = l_Lean_Expr_bindingBody_x21(v_v_2147_);
lean_dec(v_v_2147_);
v___x_2151_ = ((size_t)1ULL);
v___x_2152_ = lean_usize_add(v_i_2144_, v___x_2151_);
v___x_2153_ = lean_array_uset(v_bs_x27_2149_, v_i_2144_, v___x_2150_);
v_i_2144_ = v___x_2152_;
v_bs_2145_ = v___x_2153_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__0___boxed(lean_object* v_sz_2155_, lean_object* v_i_2156_, lean_object* v_bs_2157_){
_start:
{
size_t v_sz_boxed_2158_; size_t v_i_boxed_2159_; lean_object* v_res_2160_; 
v_sz_boxed_2158_ = lean_unbox_usize(v_sz_2155_);
lean_dec(v_sz_2155_);
v_i_boxed_2159_ = lean_unbox_usize(v_i_2156_);
lean_dec(v_i_2156_);
v_res_2160_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__0(v_sz_boxed_2158_, v_i_boxed_2159_, v_bs_2157_);
return v_res_2160_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__1(void){
_start:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; 
v___x_2162_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__0));
v___x_2163_ = l_Lean_stringToMessageData(v___x_2162_);
return v___x_2163_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2(lean_object* v_as_2164_, size_t v_i_2165_, size_t v_stop_2166_, lean_object* v_b_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_){
_start:
{
lean_object* v_a_2174_; uint8_t v___x_2178_; 
v___x_2178_ = lean_usize_dec_eq(v_i_2165_, v_stop_2166_);
if (v___x_2178_ == 0)
{
lean_object* v___x_2179_; uint8_t v___x_2180_; 
v___x_2179_ = lean_array_uget_borrowed(v_as_2164_, v_i_2165_);
v___x_2180_ = l_Lean_Expr_isArrow(v___x_2179_);
if (v___x_2180_ == 0)
{
lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___x_2181_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___closed__1);
lean_inc(v___x_2179_);
v___x_2182_ = l_Lean_MessageData_ofExpr(v___x_2179_);
v___x_2183_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2183_, 0, v___x_2181_);
lean_ctor_set(v___x_2183_, 1, v___x_2182_);
v___x_2184_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_2183_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_);
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v_a_2185_; 
v_a_2185_ = lean_ctor_get(v___x_2184_, 0);
lean_inc(v_a_2185_);
lean_dec_ref_known(v___x_2184_, 1);
v_a_2174_ = v_a_2185_;
goto v___jp_2173_;
}
else
{
return v___x_2184_;
}
}
else
{
lean_object* v___x_2186_; 
v___x_2186_ = lean_box(0);
v_a_2174_ = v___x_2186_;
goto v___jp_2173_;
}
}
else
{
lean_object* v___x_2187_; 
v___x_2187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2187_, 0, v_b_2167_);
return v___x_2187_;
}
v___jp_2173_:
{
size_t v___x_2175_; size_t v___x_2176_; 
v___x_2175_ = ((size_t)1ULL);
v___x_2176_ = lean_usize_add(v_i_2165_, v___x_2175_);
v_i_2165_ = v___x_2176_;
v_b_2167_ = v_a_2174_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2___boxed(lean_object* v_as_2188_, lean_object* v_i_2189_, lean_object* v_stop_2190_, lean_object* v_b_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_){
_start:
{
size_t v_i_boxed_2197_; size_t v_stop_boxed_2198_; lean_object* v_res_2199_; 
v_i_boxed_2197_ = lean_unbox_usize(v_i_2189_);
lean_dec(v_i_2189_);
v_stop_boxed_2198_ = lean_unbox_usize(v_stop_2190_);
lean_dec(v_stop_2190_);
v_res_2199_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2(v_as_2188_, v_i_boxed_2197_, v_stop_boxed_2198_, v_b_2191_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_);
lean_dec(v___y_2195_);
lean_dec_ref(v___y_2194_);
lean_dec(v___y_2193_);
lean_dec_ref(v___y_2192_);
lean_dec_ref(v_as_2188_);
return v_res_2199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryTypeND(lean_object* v_types_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_){
_start:
{
lean_object* v___x_2206_; size_t v_sz_2207_; size_t v___x_2208_; lean_object* v___x_2209_; 
v___x_2206_ = l_Lean_instInhabitedExpr;
v_sz_2207_ = lean_array_size(v_types_2200_);
v___x_2208_ = ((size_t)0ULL);
v___x_2209_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__0(v_sz_2207_, v___x_2208_, v_types_2200_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2209_) == 0)
{
lean_object* v_a_2210_; lean_object* v___x_2211_; size_t v___y_2213_; lean_object* v___y_2214_; lean_object* v___x_2241_; uint8_t v___x_2242_; 
v_a_2210_ = lean_ctor_get(v___x_2209_, 0);
lean_inc(v_a_2210_);
lean_dec_ref_known(v___x_2209_, 1);
v___x_2211_ = lean_unsigned_to_nat(0u);
v___x_2241_ = lean_array_get_size(v_a_2210_);
v___x_2242_ = lean_nat_dec_lt(v___x_2211_, v___x_2241_);
if (v___x_2242_ == 0)
{
goto v___jp_2220_;
}
else
{
lean_object* v___x_2243_; size_t v___x_2244_; lean_object* v___x_2245_; 
v___x_2243_ = lean_box(0);
v___x_2244_ = lean_usize_of_nat(v___x_2241_);
v___x_2245_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__2(v_a_2210_, v___x_2208_, v___x_2244_, v___x_2243_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2245_) == 0)
{
lean_dec_ref_known(v___x_2245_, 1);
goto v___jp_2220_;
}
else
{
lean_object* v_a_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2253_; 
lean_dec(v_a_2210_);
v_a_2246_ = lean_ctor_get(v___x_2245_, 0);
v_isSharedCheck_2253_ = !lean_is_exclusive(v___x_2245_);
if (v_isSharedCheck_2253_ == 0)
{
v___x_2248_ = v___x_2245_;
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_a_2246_);
lean_dec(v___x_2245_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v___x_2251_; 
if (v_isShared_2249_ == 0)
{
v___x_2251_ = v___x_2248_;
goto v_reusejp_2250_;
}
else
{
lean_object* v_reuseFailAlloc_2252_; 
v_reuseFailAlloc_2252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2252_, 0, v_a_2246_);
v___x_2251_ = v_reuseFailAlloc_2252_;
goto v_reusejp_2250_;
}
v_reusejp_2250_:
{
return v___x_2251_;
}
}
}
}
v___jp_2212_:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2215_ = lean_array_get(v___x_2206_, v___y_2214_, v___x_2211_);
lean_dec_ref(v___y_2214_);
v___x_2216_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryType_spec__1(v___y_2213_, v___x_2208_, v_a_2210_);
v___x_2217_ = l_Lean_Meta_ArgsPacker_Mutual_packType(v___x_2216_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
if (lean_obj_tag(v___x_2217_) == 0)
{
lean_object* v_a_2218_; lean_object* v___x_2219_; 
v_a_2218_ = lean_ctor_get(v___x_2217_, 0);
lean_inc(v_a_2218_);
lean_dec_ref_known(v___x_2217_, 1);
v___x_2219_ = l_Lean_mkArrow(v_a_2218_, v___x_2215_, v_a_2203_, v_a_2204_);
return v___x_2219_;
}
else
{
lean_dec(v___x_2215_);
return v___x_2217_;
}
}
v___jp_2220_:
{
size_t v_sz_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; uint8_t v___x_2229_; 
v_sz_2221_ = lean_array_size(v_a_2210_);
lean_inc(v_a_2210_);
v___x_2222_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__0(v_sz_2221_, v___x_2208_, v_a_2210_);
v___x_2223_ = lean_array_get_size(v___x_2222_);
v___x_2224_ = lean_unsigned_to_nat(1u);
v___x_2225_ = lean_nat_sub(v___x_2223_, v___x_2224_);
v___x_2226_ = lean_array_get_borrowed(v___x_2206_, v___x_2222_, v___x_2225_);
lean_dec(v___x_2225_);
lean_inc_ref(v___x_2222_);
v___x_2227_ = lean_array_pop(v___x_2222_);
v___x_2228_ = lean_array_get_size(v___x_2227_);
v___x_2229_ = lean_nat_dec_lt(v___x_2211_, v___x_2228_);
if (v___x_2229_ == 0)
{
lean_dec_ref(v___x_2227_);
v___y_2213_ = v_sz_2221_;
v___y_2214_ = v___x_2222_;
goto v___jp_2212_;
}
else
{
lean_object* v___x_2230_; size_t v___x_2231_; lean_object* v___x_2232_; 
v___x_2230_ = lean_box(0);
v___x_2231_ = lean_usize_of_nat(v___x_2228_);
lean_inc(v___x_2226_);
v___x_2232_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ArgsPacker_Mutual_uncurryTypeND_spec__1(v___x_2226_, v___x_2227_, v___x_2208_, v___x_2231_, v___x_2230_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
lean_dec_ref(v___x_2227_);
if (lean_obj_tag(v___x_2232_) == 0)
{
lean_dec_ref_known(v___x_2232_, 1);
v___y_2213_ = v_sz_2221_;
v___y_2214_ = v___x_2222_;
goto v___jp_2212_;
}
else
{
lean_object* v_a_2233_; lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2240_; 
lean_dec_ref(v___x_2222_);
lean_dec(v_a_2210_);
v_a_2233_ = lean_ctor_get(v___x_2232_, 0);
v_isSharedCheck_2240_ = !lean_is_exclusive(v___x_2232_);
if (v_isSharedCheck_2240_ == 0)
{
v___x_2235_ = v___x_2232_;
v_isShared_2236_ = v_isSharedCheck_2240_;
goto v_resetjp_2234_;
}
else
{
lean_inc(v_a_2233_);
lean_dec(v___x_2232_);
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
}
else
{
lean_object* v_a_2254_; lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2261_; 
v_a_2254_ = lean_ctor_get(v___x_2209_, 0);
v_isSharedCheck_2261_ = !lean_is_exclusive(v___x_2209_);
if (v_isSharedCheck_2261_ == 0)
{
v___x_2256_ = v___x_2209_;
v_isShared_2257_ = v_isSharedCheck_2261_;
goto v_resetjp_2255_;
}
else
{
lean_inc(v_a_2254_);
lean_dec(v___x_2209_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2261_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
lean_object* v___x_2259_; 
if (v_isShared_2257_ == 0)
{
v___x_2259_ = v___x_2256_;
goto v_reusejp_2258_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v_a_2254_);
v___x_2259_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2258_;
}
v_reusejp_2258_:
{
return v___x_2259_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryTypeND___boxed(lean_object* v_types_2262_, lean_object* v_a_2263_, lean_object* v_a_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_, lean_object* v_a_2267_){
_start:
{
lean_object* v_res_2268_; 
v_res_2268_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryTypeND(v_types_2262_, v_a_2263_, v_a_2264_, v_a_2265_, v_a_2266_);
lean_dec(v_a_2266_);
lean_dec_ref(v_a_2265_);
lean_dec(v_a_2264_);
lean_dec_ref(v_a_2263_);
return v_res_2268_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__1(void){
_start:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2270_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__0));
v___x_2271_ = l_Lean_stringToMessageData(v___x_2270_);
return v___x_2271_;
}
}
static lean_object* _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__3(void){
_start:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; 
v___x_2273_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__2));
v___x_2274_ = l_Lean_stringToMessageData(v___x_2273_);
return v___x_2274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___lam__0___boxed(lean_object* v___x_2275_, lean_object* v___x_2276_, lean_object* v_arg_2277_, lean_object* v_arg_2278_, lean_object* v___x_2279_, lean_object* v_a_2280_, lean_object* v_tail_2281_, lean_object* v___x_2282_, lean_object* v___x_2283_, lean_object* v___x_2284_, lean_object* v_y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_){
_start:
{
uint8_t v___x_2294__boxed_2291_; uint8_t v___x_2295__boxed_2292_; uint8_t v___x_2296__boxed_2293_; lean_object* v_res_2294_; 
v___x_2294__boxed_2291_ = lean_unbox(v___x_2282_);
v___x_2295__boxed_2292_ = lean_unbox(v___x_2283_);
v___x_2296__boxed_2293_ = lean_unbox(v___x_2284_);
v_res_2294_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___lam__0(v___x_2275_, v___x_2276_, v_arg_2277_, v_arg_2278_, v___x_2279_, v_a_2280_, v_tail_2281_, v___x_2294__boxed_2291_, v___x_2295__boxed_2292_, v___x_2296__boxed_2293_, v_y_2285_, v___y_2286_, v___y_2287_, v___y_2288_, v___y_2289_);
lean_dec(v___y_2289_);
lean_dec_ref(v___y_2288_);
lean_dec(v___y_2287_);
lean_dec_ref(v___y_2286_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn(lean_object* v_x_2295_, lean_object* v_codomain_2296_, lean_object* v_alts_2297_, lean_object* v_a_2298_, lean_object* v_a_2299_, lean_object* v_a_2300_, lean_object* v_a_2301_){
_start:
{
if (lean_obj_tag(v_alts_2297_) == 0)
{
lean_object* v___x_2303_; lean_object* v___x_2304_; 
lean_dec_ref(v_codomain_2296_);
lean_dec_ref(v_x_2295_);
v___x_2303_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__1);
v___x_2304_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_2303_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
return v___x_2304_;
}
else
{
lean_object* v_tail_2305_; 
v_tail_2305_ = lean_ctor_get(v_alts_2297_, 1);
if (lean_obj_tag(v_tail_2305_) == 0)
{
lean_object* v_head_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; 
lean_dec_ref(v_codomain_2296_);
v_head_2306_ = lean_ctor_get(v_alts_2297_, 0);
lean_inc(v_head_2306_);
lean_dec_ref_known(v_alts_2297_, 2);
v___x_2307_ = lean_unsigned_to_nat(1u);
v___x_2308_ = lean_mk_empty_array_with_capacity(v___x_2307_);
v___x_2309_ = lean_array_push(v___x_2308_, v_x_2295_);
v___x_2310_ = l_Lean_Expr_beta(v_head_2306_, v___x_2309_);
v___x_2311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2310_);
return v___x_2311_;
}
else
{
lean_object* v_head_2312_; lean_object* v___x_2314_; uint8_t v_isShared_2315_; uint8_t v_isSharedCheck_2397_; 
lean_inc(v_tail_2305_);
v_head_2312_ = lean_ctor_get(v_alts_2297_, 0);
v_isSharedCheck_2397_ = !lean_is_exclusive(v_alts_2297_);
if (v_isSharedCheck_2397_ == 0)
{
lean_object* v_unused_2398_; 
v_unused_2398_ = lean_ctor_get(v_alts_2297_, 1);
lean_dec(v_unused_2398_);
v___x_2314_ = v_alts_2297_;
v_isShared_2315_ = v_isSharedCheck_2397_;
goto v_resetjp_2313_;
}
else
{
lean_inc(v_head_2312_);
lean_dec(v_alts_2297_);
v___x_2314_ = lean_box(0);
v_isShared_2315_ = v_isSharedCheck_2397_;
goto v_resetjp_2313_;
}
v_resetjp_2313_:
{
lean_object* v___x_2316_; 
lean_inc(v_a_2301_);
lean_inc_ref(v_a_2300_);
lean_inc(v_a_2299_);
lean_inc_ref(v_a_2298_);
lean_inc_ref(v_x_2295_);
v___x_2316_ = lean_infer_type(v_x_2295_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
if (lean_obj_tag(v___x_2316_) == 0)
{
lean_object* v_a_2317_; lean_object* v___y_2319_; lean_object* v___y_2320_; lean_object* v___y_2321_; lean_object* v___y_2322_; lean_object* v___x_2327_; 
v_a_2317_ = lean_ctor_get(v___x_2316_, 0);
lean_inc_n(v_a_2317_, 2);
lean_dec_ref_known(v___x_2316_, 1);
v___x_2327_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_2317_, v_a_2299_);
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_object* v_a_2328_; lean_object* v___x_2329_; uint8_t v___x_2330_; 
v_a_2328_ = lean_ctor_get(v___x_2327_, 0);
lean_inc(v_a_2328_);
lean_dec_ref_known(v___x_2327_, 1);
v___x_2329_ = l_Lean_Expr_cleanupAnnotations(v_a_2328_);
lean_dec(v_a_2328_);
v___x_2330_ = l_Lean_Expr_isApp(v___x_2329_);
if (v___x_2330_ == 0)
{
lean_dec_ref(v___x_2329_);
lean_del_object(v___x_2314_);
lean_dec(v_head_2312_);
lean_dec(v_tail_2305_);
lean_dec_ref(v_codomain_2296_);
lean_dec_ref(v_x_2295_);
v___y_2319_ = v_a_2298_;
v___y_2320_ = v_a_2299_;
v___y_2321_ = v_a_2300_;
v___y_2322_ = v_a_2301_;
goto v___jp_2318_;
}
else
{
lean_object* v___x_2331_; uint8_t v___x_2332_; 
v___x_2331_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2329_);
v___x_2332_ = l_Lean_Expr_isApp(v___x_2331_);
if (v___x_2332_ == 0)
{
lean_dec_ref(v___x_2331_);
lean_dec_ref(v___x_2329_);
lean_del_object(v___x_2314_);
lean_dec(v_head_2312_);
lean_dec(v_tail_2305_);
lean_dec_ref(v_codomain_2296_);
lean_dec_ref(v_x_2295_);
v___y_2319_ = v_a_2298_;
v___y_2320_ = v_a_2299_;
v___y_2321_ = v_a_2300_;
v___y_2322_ = v_a_2301_;
goto v___jp_2318_;
}
else
{
lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; uint8_t v___x_2336_; 
v___x_2333_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2331_);
v___x_2334_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__0));
v___x_2335_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ArgsPacker_Mutual_packType_spec__0___closed__1));
v___x_2336_ = l_Lean_Expr_isConstOf(v___x_2333_, v___x_2335_);
lean_dec_ref(v___x_2333_);
if (v___x_2336_ == 0)
{
lean_dec_ref(v___x_2331_);
lean_dec_ref(v___x_2329_);
lean_del_object(v___x_2314_);
lean_dec(v_head_2312_);
lean_dec(v_tail_2305_);
lean_dec_ref(v_codomain_2296_);
lean_dec_ref(v_x_2295_);
v___y_2319_ = v_a_2298_;
v___y_2320_ = v_a_2299_;
v___y_2321_ = v_a_2300_;
v___y_2322_ = v_a_2301_;
goto v___jp_2318_;
}
else
{
lean_object* v_arg_2337_; lean_object* v_arg_2338_; lean_object* v___x_2339_; 
v_arg_2337_ = lean_ctor_get(v___x_2329_, 1);
lean_inc_ref(v_arg_2337_);
lean_dec_ref(v___x_2329_);
v_arg_2338_ = lean_ctor_get(v___x_2331_, 1);
lean_inc_ref(v_arg_2338_);
lean_dec_ref(v___x_2331_);
lean_inc_ref(v_codomain_2296_);
v___x_2339_ = l_Lean_Meta_getLevel(v_codomain_2296_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
if (lean_obj_tag(v___x_2339_) == 0)
{
lean_object* v_a_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; uint8_t v___x_2346_; uint8_t v___x_2347_; lean_object* v___x_2348_; 
v_a_2340_ = lean_ctor_get(v___x_2339_, 0);
lean_inc(v_a_2340_);
lean_dec_ref_known(v___x_2339_, 1);
v___x_2341_ = l_Lean_Expr_getAppFn(v_a_2317_);
lean_dec(v_a_2317_);
v___x_2342_ = l_Lean_Expr_constLevels_x21(v___x_2341_);
lean_dec_ref(v___x_2341_);
v___x_2343_ = lean_unsigned_to_nat(1u);
v___x_2344_ = lean_mk_empty_array_with_capacity(v___x_2343_);
lean_inc_ref(v_x_2295_);
lean_inc_ref(v___x_2344_);
v___x_2345_ = lean_array_push(v___x_2344_, v_x_2295_);
v___x_2346_ = 0;
v___x_2347_ = 1;
v___x_2348_ = l_Lean_Meta_mkLambdaFVars(v___x_2345_, v_codomain_2296_, v___x_2346_, v___x_2336_, v___x_2346_, v___x_2336_, v___x_2347_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_);
lean_dec_ref(v___x_2345_);
if (lean_obj_tag(v___x_2348_) == 0)
{
lean_object* v_a_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2388_; 
v_a_2349_ = lean_ctor_get(v___x_2348_, 0);
v_isSharedCheck_2388_ = !lean_is_exclusive(v___x_2348_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2351_ = v___x_2348_;
v_isShared_2352_ = v_isSharedCheck_2388_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_a_2349_);
lean_dec(v___x_2348_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2388_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v_alt_u2082_2354_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___f_2367_; lean_object* v___y_2369_; lean_object* v___y_2370_; lean_object* v___y_2371_; lean_object* v___y_2372_; 
v___x_2364_ = lean_box(v___x_2346_);
v___x_2365_ = lean_box(v___x_2336_);
v___x_2366_ = lean_box(v___x_2347_);
lean_inc(v_tail_2305_);
lean_inc(v_a_2349_);
lean_inc_ref(v_arg_2337_);
lean_inc_ref(v_arg_2338_);
lean_inc(v___x_2342_);
v___f_2367_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___lam__0___boxed), 16, 10);
lean_closure_set(v___f_2367_, 0, v___x_2334_);
lean_closure_set(v___f_2367_, 1, v___x_2342_);
lean_closure_set(v___f_2367_, 2, v_arg_2338_);
lean_closure_set(v___f_2367_, 3, v_arg_2337_);
lean_closure_set(v___f_2367_, 4, v___x_2344_);
lean_closure_set(v___f_2367_, 5, v_a_2349_);
lean_closure_set(v___f_2367_, 6, v_tail_2305_);
lean_closure_set(v___f_2367_, 7, v___x_2364_);
lean_closure_set(v___f_2367_, 8, v___x_2365_);
lean_closure_set(v___f_2367_, 9, v___x_2366_);
if (lean_obj_tag(v_tail_2305_) == 1)
{
lean_object* v_tail_2386_; 
v_tail_2386_ = lean_ctor_get(v_tail_2305_, 1);
if (lean_obj_tag(v_tail_2386_) == 0)
{
lean_object* v_head_2387_; 
lean_dec_ref(v___f_2367_);
v_head_2387_ = lean_ctor_get(v_tail_2305_, 0);
lean_inc(v_head_2387_);
lean_dec_ref_known(v_tail_2305_, 2);
v_alt_u2082_2354_ = v_head_2387_;
goto v___jp_2353_;
}
else
{
lean_dec_ref_known(v_tail_2305_, 2);
v___y_2369_ = v_a_2298_;
v___y_2370_ = v_a_2299_;
v___y_2371_ = v_a_2300_;
v___y_2372_ = v_a_2301_;
goto v___jp_2368_;
}
}
else
{
lean_dec(v_tail_2305_);
v___y_2369_ = v_a_2298_;
v___y_2370_ = v_a_2299_;
v___y_2371_ = v_a_2300_;
v___y_2372_ = v_a_2301_;
goto v___jp_2368_;
}
v___jp_2353_:
{
lean_object* v___x_2355_; lean_object* v___x_2357_; 
v___x_2355_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_mkCodomain_go___closed__3));
if (v_isShared_2315_ == 0)
{
lean_ctor_set(v___x_2314_, 1, v___x_2342_);
lean_ctor_set(v___x_2314_, 0, v_a_2340_);
v___x_2357_ = v___x_2314_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_a_2340_);
lean_ctor_set(v_reuseFailAlloc_2363_, 1, v___x_2342_);
v___x_2357_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2361_; 
v___x_2358_ = l_Lean_Expr_const___override(v___x_2355_, v___x_2357_);
v___x_2359_ = l_Lean_mkApp6(v___x_2358_, v_arg_2338_, v_arg_2337_, v_a_2349_, v_x_2295_, v_head_2312_, v_alt_u2082_2354_);
if (v_isShared_2352_ == 0)
{
lean_ctor_set(v___x_2351_, 0, v___x_2359_);
v___x_2361_ = v___x_2351_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v___x_2359_);
v___x_2361_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
return v___x_2361_;
}
}
}
v___jp_2368_:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; 
v___x_2373_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_uncurryType___lam__1___closed__4));
v___x_2374_ = l_Lean_Core_mkFreshUserName(v___x_2373_, v___y_2371_, v___y_2372_);
if (lean_obj_tag(v___x_2374_) == 0)
{
lean_object* v_a_2375_; lean_object* v___x_2376_; 
v_a_2375_ = lean_ctor_get(v___x_2374_, 0);
lean_inc(v_a_2375_);
lean_dec_ref_known(v___x_2374_, 1);
lean_inc_ref(v_arg_2337_);
v___x_2376_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_a_2375_, v_arg_2337_, v___f_2367_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_);
if (lean_obj_tag(v___x_2376_) == 0)
{
lean_object* v_a_2377_; 
v_a_2377_ = lean_ctor_get(v___x_2376_, 0);
lean_inc(v_a_2377_);
lean_dec_ref_known(v___x_2376_, 1);
v_alt_u2082_2354_ = v_a_2377_;
goto v___jp_2353_;
}
else
{
lean_del_object(v___x_2351_);
lean_dec(v_a_2349_);
lean_dec(v___x_2342_);
lean_dec(v_a_2340_);
lean_dec_ref(v_arg_2338_);
lean_dec_ref(v_arg_2337_);
lean_del_object(v___x_2314_);
lean_dec(v_head_2312_);
lean_dec_ref(v_x_2295_);
return v___x_2376_;
}
}
else
{
lean_object* v_a_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2385_; 
lean_dec_ref(v___f_2367_);
lean_del_object(v___x_2351_);
lean_dec(v_a_2349_);
lean_dec(v___x_2342_);
lean_dec(v_a_2340_);
lean_dec_ref(v_arg_2338_);
lean_dec_ref(v_arg_2337_);
lean_del_object(v___x_2314_);
lean_dec(v_head_2312_);
lean_dec_ref(v_x_2295_);
v_a_2378_ = lean_ctor_get(v___x_2374_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___x_2374_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2380_ = v___x_2374_;
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_a_2378_);
lean_dec(v___x_2374_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
lean_object* v___x_2383_; 
if (v_isShared_2381_ == 0)
{
v___x_2383_ = v___x_2380_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v_a_2378_);
v___x_2383_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
return v___x_2383_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_2344_);
lean_dec(v___x_2342_);
lean_dec(v_a_2340_);
lean_dec_ref(v_arg_2338_);
lean_dec_ref(v_arg_2337_);
lean_del_object(v___x_2314_);
lean_dec(v_head_2312_);
lean_dec(v_tail_2305_);
lean_dec_ref(v_x_2295_);
return v___x_2348_;
}
}
else
{
lean_object* v_a_2389_; lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2396_; 
lean_dec_ref(v_arg_2338_);
lean_dec_ref(v_arg_2337_);
lean_dec(v_a_2317_);
lean_del_object(v___x_2314_);
lean_dec(v_head_2312_);
lean_dec(v_tail_2305_);
lean_dec_ref(v_codomain_2296_);
lean_dec_ref(v_x_2295_);
v_a_2389_ = lean_ctor_get(v___x_2339_, 0);
v_isSharedCheck_2396_ = !lean_is_exclusive(v___x_2339_);
if (v_isSharedCheck_2396_ == 0)
{
v___x_2391_ = v___x_2339_;
v_isShared_2392_ = v_isSharedCheck_2396_;
goto v_resetjp_2390_;
}
else
{
lean_inc(v_a_2389_);
lean_dec(v___x_2339_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2396_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v___x_2394_; 
if (v_isShared_2392_ == 0)
{
v___x_2394_ = v___x_2391_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2395_; 
v_reuseFailAlloc_2395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2395_, 0, v_a_2389_);
v___x_2394_ = v_reuseFailAlloc_2395_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
return v___x_2394_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_2317_);
lean_del_object(v___x_2314_);
lean_dec(v_head_2312_);
lean_dec(v_tail_2305_);
lean_dec_ref(v_codomain_2296_);
lean_dec_ref(v_x_2295_);
return v___x_2327_;
}
v___jp_2318_:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2323_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__3, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__3_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___closed__3);
v___x_2324_ = l_Lean_MessageData_ofExpr(v_a_2317_);
v___x_2325_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2323_);
lean_ctor_set(v___x_2325_, 1, v___x_2324_);
v___x_2326_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_2325_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_);
return v___x_2326_;
}
}
else
{
lean_del_object(v___x_2314_);
lean_dec(v_head_2312_);
lean_dec(v_tail_2305_);
lean_dec_ref(v_codomain_2296_);
lean_dec_ref(v_x_2295_);
return v___x_2316_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___lam__0(lean_object* v___x_2399_, lean_object* v___x_2400_, lean_object* v_arg_2401_, lean_object* v_arg_2402_, lean_object* v___x_2403_, lean_object* v_a_2404_, lean_object* v_tail_2405_, uint8_t v___x_2406_, uint8_t v___x_2407_, uint8_t v___x_2408_, lean_object* v_y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_){
_start:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2415_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_pack_go_spec__0___closed__3));
v___x_2416_ = l_Lean_Name_mkStr2(v___x_2399_, v___x_2415_);
v___x_2417_ = l_Lean_Expr_const___override(v___x_2416_, v___x_2400_);
lean_inc_ref_n(v_y_2409_, 2);
v___x_2418_ = l_Lean_mkApp3(v___x_2417_, v_arg_2401_, v_arg_2402_, v_y_2409_);
lean_inc_ref(v___x_2403_);
v___x_2419_ = lean_array_push(v___x_2403_, v___x_2418_);
v___x_2420_ = l_Lean_Expr_beta(v_a_2404_, v___x_2419_);
v___x_2421_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn(v_y_2409_, v___x_2420_, v_tail_2405_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
if (lean_obj_tag(v___x_2421_) == 0)
{
lean_object* v_a_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v_a_2422_ = lean_ctor_get(v___x_2421_, 0);
lean_inc(v_a_2422_);
lean_dec_ref_known(v___x_2421_, 1);
v___x_2423_ = lean_array_push(v___x_2403_, v_y_2409_);
v___x_2424_ = l_Lean_Meta_mkLambdaFVars(v___x_2423_, v_a_2422_, v___x_2406_, v___x_2407_, v___x_2406_, v___x_2407_, v___x_2408_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
lean_dec_ref(v___x_2423_);
return v___x_2424_;
}
else
{
lean_dec_ref(v_y_2409_);
lean_dec_ref(v___x_2403_);
return v___x_2421_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn___boxed(lean_object* v_x_2425_, lean_object* v_codomain_2426_, lean_object* v_alts_2427_, lean_object* v_a_2428_, lean_object* v_a_2429_, lean_object* v_a_2430_, lean_object* v_a_2431_, lean_object* v_a_2432_){
_start:
{
lean_object* v_res_2433_; 
v_res_2433_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn(v_x_2425_, v_codomain_2426_, v_alts_2427_, v_a_2428_, v_a_2429_, v_a_2430_, v_a_2431_);
lean_dec(v_a_2431_);
lean_dec_ref(v_a_2430_);
lean_dec(v_a_2429_);
lean_dec_ref(v_a_2428_);
return v_res_2433_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
v___x_2435_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__1));
v___x_2436_ = lean_unsigned_to_nat(21u);
v___x_2437_ = lean_unsigned_to_nat(414u);
v___x_2438_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__0));
v___x_2439_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0));
v___x_2440_ = l_mkPanicMessageWithDecl(v___x_2439_, v___x_2438_, v___x_2437_, v___x_2436_, v___x_2435_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0(lean_object* v___x_2441_, lean_object* v_es_2442_, lean_object* v_xs_2443_, lean_object* v_codomain_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_){
_start:
{
lean_object* v___x_2450_; uint8_t v___x_2451_; 
v___x_2450_ = lean_array_get_size(v_xs_2443_);
v___x_2451_ = lean_nat_dec_eq(v___x_2450_, v___x_2441_);
if (v___x_2451_ == 0)
{
lean_object* v___x_2452_; lean_object* v___x_2453_; 
lean_dec_ref(v_codomain_2444_);
lean_dec_ref(v_es_2442_);
v___x_2452_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__1, &l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__1_once, _init_l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___closed__1);
v___x_2453_ = l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(v___x_2452_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_);
return v___x_2453_;
}
else
{
lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; 
v___x_2454_ = lean_unsigned_to_nat(0u);
v___x_2455_ = lean_array_fget_borrowed(v_xs_2443_, v___x_2454_);
v___x_2456_ = lean_array_to_list(v_es_2442_);
lean_inc(v___x_2455_);
v___x_2457_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn(v___x_2455_, v_codomain_2444_, v___x_2456_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_);
if (lean_obj_tag(v___x_2457_) == 0)
{
lean_object* v_a_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; uint8_t v___x_2461_; uint8_t v___x_2462_; lean_object* v___x_2463_; 
v_a_2458_ = lean_ctor_get(v___x_2457_, 0);
lean_inc(v_a_2458_);
lean_dec_ref_known(v___x_2457_, 1);
v___x_2459_ = lean_mk_empty_array_with_capacity(v___x_2441_);
lean_inc(v___x_2455_);
v___x_2460_ = lean_array_push(v___x_2459_, v___x_2455_);
v___x_2461_ = 0;
v___x_2462_ = 1;
v___x_2463_ = l_Lean_Meta_mkLambdaFVars(v___x_2460_, v_a_2458_, v___x_2461_, v___x_2451_, v___x_2461_, v___x_2451_, v___x_2462_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_);
lean_dec_ref(v___x_2460_);
return v___x_2463_;
}
else
{
return v___x_2457_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___boxed(lean_object* v___x_2464_, lean_object* v_es_2465_, lean_object* v_xs_2466_, lean_object* v_codomain_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_){
_start:
{
lean_object* v_res_2473_; 
v_res_2473_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0(v___x_2464_, v_es_2465_, v_xs_2466_, v_codomain_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_);
lean_dec(v___y_2471_);
lean_dec_ref(v___y_2470_);
lean_dec(v___y_2469_);
lean_dec_ref(v___y_2468_);
lean_dec_ref(v_xs_2466_);
lean_dec(v___x_2464_);
return v_res_2473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType(lean_object* v_resultType_2474_, lean_object* v_es_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_){
_start:
{
lean_object* v___x_2481_; lean_object* v___f_2482_; lean_object* v___x_2483_; uint8_t v___x_2484_; lean_object* v___x_2485_; 
v___x_2481_ = lean_unsigned_to_nat(1u);
v___f_2482_ = lean_alloc_closure((void*)(l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2482_, 0, v___x_2481_);
lean_closure_set(v___f_2482_, 1, v_es_2475_);
v___x_2483_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0));
v___x_2484_ = 0;
v___x_2485_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg(v_resultType_2474_, v___x_2483_, v___f_2482_, v___x_2484_, v___x_2484_, v_a_2476_, v_a_2477_, v_a_2478_, v_a_2479_);
return v___x_2485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType___boxed(lean_object* v_resultType_2486_, lean_object* v_es_2487_, lean_object* v_a_2488_, lean_object* v_a_2489_, lean_object* v_a_2490_, lean_object* v_a_2491_, lean_object* v_a_2492_){
_start:
{
lean_object* v_res_2493_; 
v_res_2493_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType(v_resultType_2486_, v_es_2487_, v_a_2488_, v_a_2489_, v_a_2490_, v_a_2491_);
lean_dec(v_a_2491_);
lean_dec_ref(v_a_2490_);
lean_dec(v_a_2489_);
lean_dec_ref(v_a_2488_);
return v_res_2493_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurry_spec__0(size_t v_sz_2494_, size_t v_i_2495_, lean_object* v_bs_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_){
_start:
{
uint8_t v___x_2502_; 
v___x_2502_ = lean_usize_dec_lt(v_i_2495_, v_sz_2494_);
if (v___x_2502_ == 0)
{
lean_object* v___x_2503_; 
v___x_2503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2503_, 0, v_bs_2496_);
return v___x_2503_;
}
else
{
lean_object* v_v_2504_; lean_object* v___x_2505_; lean_object* v_bs_x27_2506_; lean_object* v___x_2507_; 
v_v_2504_ = lean_array_uget(v_bs_2496_, v_i_2495_);
v___x_2505_ = lean_unsigned_to_nat(0u);
v_bs_x27_2506_ = lean_array_uset(v_bs_2496_, v_i_2495_, v___x_2505_);
lean_inc(v___y_2500_);
lean_inc_ref(v___y_2499_);
lean_inc(v___y_2498_);
lean_inc_ref(v___y_2497_);
v___x_2507_ = lean_infer_type(v_v_2504_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_);
if (lean_obj_tag(v___x_2507_) == 0)
{
lean_object* v_a_2508_; size_t v___x_2509_; size_t v___x_2510_; lean_object* v___x_2511_; 
v_a_2508_ = lean_ctor_get(v___x_2507_, 0);
lean_inc(v_a_2508_);
lean_dec_ref_known(v___x_2507_, 1);
v___x_2509_ = ((size_t)1ULL);
v___x_2510_ = lean_usize_add(v_i_2495_, v___x_2509_);
v___x_2511_ = lean_array_uset(v_bs_x27_2506_, v_i_2495_, v_a_2508_);
v_i_2495_ = v___x_2510_;
v_bs_2496_ = v___x_2511_;
goto _start;
}
else
{
lean_object* v_a_2513_; lean_object* v___x_2515_; uint8_t v_isShared_2516_; uint8_t v_isSharedCheck_2520_; 
lean_dec_ref(v_bs_x27_2506_);
v_a_2513_ = lean_ctor_get(v___x_2507_, 0);
v_isSharedCheck_2520_ = !lean_is_exclusive(v___x_2507_);
if (v_isSharedCheck_2520_ == 0)
{
v___x_2515_ = v___x_2507_;
v_isShared_2516_ = v_isSharedCheck_2520_;
goto v_resetjp_2514_;
}
else
{
lean_inc(v_a_2513_);
lean_dec(v___x_2507_);
v___x_2515_ = lean_box(0);
v_isShared_2516_ = v_isSharedCheck_2520_;
goto v_resetjp_2514_;
}
v_resetjp_2514_:
{
lean_object* v___x_2518_; 
if (v_isShared_2516_ == 0)
{
v___x_2518_ = v___x_2515_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v_a_2513_);
v___x_2518_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
return v___x_2518_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurry_spec__0___boxed(lean_object* v_sz_2521_, lean_object* v_i_2522_, lean_object* v_bs_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_){
_start:
{
size_t v_sz_boxed_2529_; size_t v_i_boxed_2530_; lean_object* v_res_2531_; 
v_sz_boxed_2529_ = lean_unbox_usize(v_sz_2521_);
lean_dec(v_sz_2521_);
v_i_boxed_2530_ = lean_unbox_usize(v_i_2522_);
lean_dec(v_i_2522_);
v_res_2531_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurry_spec__0(v_sz_boxed_2529_, v_i_boxed_2530_, v_bs_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_);
lean_dec(v___y_2527_);
lean_dec_ref(v___y_2526_);
lean_dec(v___y_2525_);
lean_dec_ref(v___y_2524_);
return v_res_2531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurry(lean_object* v_es_2532_, lean_object* v_a_2533_, lean_object* v_a_2534_, lean_object* v_a_2535_, lean_object* v_a_2536_){
_start:
{
size_t v_sz_2538_; size_t v___x_2539_; lean_object* v___x_2540_; 
v_sz_2538_ = lean_array_size(v_es_2532_);
v___x_2539_ = ((size_t)0ULL);
lean_inc_ref(v_es_2532_);
v___x_2540_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurry_spec__0(v_sz_2538_, v___x_2539_, v_es_2532_, v_a_2533_, v_a_2534_, v_a_2535_, v_a_2536_);
if (lean_obj_tag(v___x_2540_) == 0)
{
lean_object* v_a_2541_; lean_object* v___x_2542_; 
v_a_2541_ = lean_ctor_get(v___x_2540_, 0);
lean_inc(v_a_2541_);
lean_dec_ref_known(v___x_2540_, 1);
v___x_2542_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryType(v_a_2541_, v_a_2533_, v_a_2534_, v_a_2535_, v_a_2536_);
if (lean_obj_tag(v___x_2542_) == 0)
{
lean_object* v_a_2543_; lean_object* v___x_2544_; 
v_a_2543_ = lean_ctor_get(v___x_2542_, 0);
lean_inc(v_a_2543_);
lean_dec_ref_known(v___x_2542_, 1);
v___x_2544_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType(v_a_2543_, v_es_2532_, v_a_2533_, v_a_2534_, v_a_2535_, v_a_2536_);
return v___x_2544_;
}
else
{
lean_dec_ref(v_es_2532_);
return v___x_2542_;
}
}
else
{
lean_object* v_a_2545_; lean_object* v___x_2547_; uint8_t v_isShared_2548_; uint8_t v_isSharedCheck_2552_; 
lean_dec_ref(v_es_2532_);
v_a_2545_ = lean_ctor_get(v___x_2540_, 0);
v_isSharedCheck_2552_ = !lean_is_exclusive(v___x_2540_);
if (v_isSharedCheck_2552_ == 0)
{
v___x_2547_ = v___x_2540_;
v_isShared_2548_ = v_isSharedCheck_2552_;
goto v_resetjp_2546_;
}
else
{
lean_inc(v_a_2545_);
lean_dec(v___x_2540_);
v___x_2547_ = lean_box(0);
v_isShared_2548_ = v_isSharedCheck_2552_;
goto v_resetjp_2546_;
}
v_resetjp_2546_:
{
lean_object* v___x_2550_; 
if (v_isShared_2548_ == 0)
{
v___x_2550_ = v___x_2547_;
goto v_reusejp_2549_;
}
else
{
lean_object* v_reuseFailAlloc_2551_; 
v_reuseFailAlloc_2551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2551_, 0, v_a_2545_);
v___x_2550_ = v_reuseFailAlloc_2551_;
goto v_reusejp_2549_;
}
v_reusejp_2549_:
{
return v___x_2550_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurry___boxed(lean_object* v_es_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_){
_start:
{
lean_object* v_res_2559_; 
v_res_2559_ = l_Lean_Meta_ArgsPacker_Mutual_uncurry(v_es_2553_, v_a_2554_, v_a_2555_, v_a_2556_, v_a_2557_);
lean_dec(v_a_2557_);
lean_dec_ref(v_a_2556_);
lean_dec(v_a_2555_);
lean_dec_ref(v_a_2554_);
return v_res_2559_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; 
v___x_2561_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_uncurry___lam__0___closed__1));
v___x_2562_ = lean_unsigned_to_nat(21u);
v___x_2563_ = lean_unsigned_to_nat(434u);
v___x_2564_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__0));
v___x_2565_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0));
v___x_2566_ = l_mkPanicMessageWithDecl(v___x_2565_, v___x_2564_, v___x_2563_, v___x_2562_, v___x_2561_);
return v___x_2566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0(lean_object* v___x_2567_, lean_object* v_es_2568_, lean_object* v_xs_2569_, lean_object* v_codomain_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_){
_start:
{
lean_object* v___x_2576_; uint8_t v___x_2577_; 
v___x_2576_ = lean_array_get_size(v_xs_2569_);
v___x_2577_ = lean_nat_dec_eq(v___x_2576_, v___x_2567_);
if (v___x_2577_ == 0)
{
lean_object* v___x_2578_; lean_object* v___x_2579_; 
lean_dec_ref(v_codomain_2570_);
lean_dec_ref(v_es_2568_);
v___x_2578_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__1, &l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__1_once, _init_l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___closed__1);
v___x_2579_ = l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(v___x_2578_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_);
return v___x_2579_;
}
else
{
lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; 
v___x_2580_ = lean_unsigned_to_nat(0u);
v___x_2581_ = lean_array_fget_borrowed(v_xs_2569_, v___x_2580_);
v___x_2582_ = lean_array_to_list(v_es_2568_);
lean_inc(v___x_2581_);
v___x_2583_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_casesOn(v___x_2581_, v_codomain_2570_, v___x_2582_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_);
if (lean_obj_tag(v___x_2583_) == 0)
{
lean_object* v_a_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; uint8_t v___x_2587_; uint8_t v___x_2588_; lean_object* v___x_2589_; 
v_a_2584_ = lean_ctor_get(v___x_2583_, 0);
lean_inc(v_a_2584_);
lean_dec_ref_known(v___x_2583_, 1);
v___x_2585_ = lean_mk_empty_array_with_capacity(v___x_2567_);
lean_inc(v___x_2581_);
v___x_2586_ = lean_array_push(v___x_2585_, v___x_2581_);
v___x_2587_ = 0;
v___x_2588_ = 1;
v___x_2589_ = l_Lean_Meta_mkLambdaFVars(v___x_2586_, v_a_2584_, v___x_2587_, v___x_2577_, v___x_2587_, v___x_2577_, v___x_2588_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_);
lean_dec_ref(v___x_2586_);
return v___x_2589_;
}
else
{
return v___x_2583_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___boxed(lean_object* v___x_2590_, lean_object* v_es_2591_, lean_object* v_xs_2592_, lean_object* v_codomain_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_){
_start:
{
lean_object* v_res_2599_; 
v_res_2599_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0(v___x_2590_, v_es_2591_, v_xs_2592_, v_codomain_2593_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_);
lean_dec(v___y_2597_);
lean_dec_ref(v___y_2596_);
lean_dec(v___y_2595_);
lean_dec_ref(v___y_2594_);
lean_dec_ref(v_xs_2592_);
lean_dec(v___x_2590_);
return v_res_2599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND(lean_object* v_es_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_){
_start:
{
size_t v_sz_2606_; size_t v___x_2607_; lean_object* v___x_2608_; 
v_sz_2606_ = lean_array_size(v_es_2600_);
v___x_2607_ = ((size_t)0ULL);
lean_inc_ref(v_es_2600_);
v___x_2608_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_uncurry_spec__0(v_sz_2606_, v___x_2607_, v_es_2600_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_);
if (lean_obj_tag(v___x_2608_) == 0)
{
lean_object* v_a_2609_; lean_object* v___x_2610_; 
v_a_2609_ = lean_ctor_get(v___x_2608_, 0);
lean_inc(v_a_2609_);
lean_dec_ref_known(v___x_2608_, 1);
v___x_2610_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryTypeND(v_a_2609_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_);
if (lean_obj_tag(v___x_2610_) == 0)
{
lean_object* v_a_2611_; lean_object* v___x_2612_; lean_object* v___f_2613_; lean_object* v___x_2614_; uint8_t v___x_2615_; lean_object* v___x_2616_; 
v_a_2611_ = lean_ctor_get(v___x_2610_, 0);
lean_inc(v_a_2611_);
lean_dec_ref_known(v___x_2610_, 1);
v___x_2612_ = lean_unsigned_to_nat(1u);
v___f_2613_ = lean_alloc_closure((void*)(l_Lean_Meta_ArgsPacker_Mutual_uncurryND___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2613_, 0, v___x_2612_);
lean_closure_set(v___f_2613_, 1, v_es_2600_);
v___x_2614_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__0));
v___x_2615_ = 0;
v___x_2616_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__2___redArg(v_a_2611_, v___x_2614_, v___f_2613_, v___x_2615_, v___x_2615_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_);
return v___x_2616_;
}
else
{
lean_dec_ref(v_es_2600_);
return v___x_2610_;
}
}
else
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2624_; 
lean_dec_ref(v_es_2600_);
v_a_2617_ = lean_ctor_get(v___x_2608_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___x_2608_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2619_ = v___x_2608_;
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v___x_2608_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2622_; 
if (v_isShared_2620_ == 0)
{
v___x_2622_ = v___x_2619_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v_a_2617_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_uncurryND___boxed(lean_object* v_es_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_, lean_object* v_a_2630_){
_start:
{
lean_object* v_res_2631_; 
v_res_2631_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryND(v_es_2625_, v_a_2626_, v_a_2627_, v_a_2628_, v_a_2629_);
lean_dec(v_a_2629_);
lean_dec_ref(v_a_2628_);
lean_dec(v_a_2627_);
lean_dec_ref(v_a_2626_);
return v_res_2631_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg___lam__0(lean_object* v_a_2632_, lean_object* v_domain_2633_, lean_object* v___x_2634_, lean_object* v_type_2635_, uint8_t v___x_2636_, lean_object* v_x_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_){
_start:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; 
v___x_2643_ = l_List_lengthTR___redArg(v_a_2632_);
lean_inc_ref(v_x_2637_);
v___x_2644_ = l_Lean_Meta_ArgsPacker_Mutual_pack(v___x_2643_, v_domain_2633_, v___x_2634_, v_x_2637_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_);
lean_dec(v___x_2643_);
if (lean_obj_tag(v___x_2644_) == 0)
{
lean_object* v_a_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; 
v_a_2645_ = lean_ctor_get(v___x_2644_, 0);
lean_inc(v_a_2645_);
lean_dec_ref_known(v___x_2644_, 1);
v___x_2646_ = lean_unsigned_to_nat(1u);
v___x_2647_ = lean_mk_empty_array_with_capacity(v___x_2646_);
lean_inc_ref(v___x_2647_);
v___x_2648_ = lean_array_push(v___x_2647_, v_a_2645_);
v___x_2649_ = l_Lean_Meta_instantiateForall(v_type_2635_, v___x_2648_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_);
lean_dec_ref(v___x_2648_);
if (lean_obj_tag(v___x_2649_) == 0)
{
lean_object* v_a_2650_; lean_object* v___x_2651_; uint8_t v___x_2652_; uint8_t v___x_2653_; lean_object* v___x_2654_; 
v_a_2650_ = lean_ctor_get(v___x_2649_, 0);
lean_inc(v_a_2650_);
lean_dec_ref_known(v___x_2649_, 1);
v___x_2651_ = lean_array_push(v___x_2647_, v_x_2637_);
v___x_2652_ = 0;
v___x_2653_ = 1;
v___x_2654_ = l_Lean_Meta_mkForallFVars(v___x_2651_, v_a_2650_, v___x_2652_, v___x_2636_, v___x_2636_, v___x_2653_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_);
lean_dec_ref(v___x_2651_);
return v___x_2654_;
}
else
{
lean_dec_ref(v___x_2647_);
lean_dec_ref(v_x_2637_);
return v___x_2649_;
}
}
else
{
lean_dec_ref(v_x_2637_);
lean_dec_ref(v_type_2635_);
return v___x_2644_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg___lam__0___boxed(lean_object* v_a_2655_, lean_object* v_domain_2656_, lean_object* v___x_2657_, lean_object* v_type_2658_, lean_object* v___x_2659_, lean_object* v_x_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_){
_start:
{
uint8_t v___x_815__boxed_2666_; lean_object* v_res_2667_; 
v___x_815__boxed_2666_ = lean_unbox(v___x_2659_);
v_res_2667_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg___lam__0(v_a_2655_, v_domain_2656_, v___x_2657_, v_type_2658_, v___x_815__boxed_2666_, v_x_2660_, v___y_2661_, v___y_2662_, v___y_2663_, v___y_2664_);
lean_dec(v___y_2664_);
lean_dec_ref(v___y_2663_);
lean_dec(v___y_2662_);
lean_dec_ref(v___y_2661_);
lean_dec(v___x_2657_);
lean_dec(v_a_2655_);
return v_res_2667_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg(lean_object* v_a_2668_, lean_object* v_domain_2669_, lean_object* v_type_2670_, size_t v_sz_2671_, size_t v_i_2672_, lean_object* v_bs_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_){
_start:
{
uint8_t v___x_2679_; 
v___x_2679_ = lean_usize_dec_lt(v_i_2672_, v_sz_2671_);
if (v___x_2679_ == 0)
{
lean_object* v___x_2680_; 
lean_dec_ref(v_type_2670_);
lean_dec_ref(v_domain_2669_);
lean_dec(v_a_2668_);
v___x_2680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2680_, 0, v_bs_2673_);
return v___x_2680_;
}
else
{
lean_object* v_v_2681_; lean_object* v___x_2682_; lean_object* v_bs_x27_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___f_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; 
v_v_2681_ = lean_array_uget(v_bs_2673_, v_i_2672_);
v___x_2682_ = lean_unsigned_to_nat(0u);
v_bs_x27_2683_ = lean_array_uset(v_bs_2673_, v_i_2672_, v___x_2682_);
v___x_2684_ = lean_usize_to_nat(v_i_2672_);
v___x_2685_ = lean_box(v___x_2679_);
lean_inc_ref(v_type_2670_);
lean_inc_ref(v_domain_2669_);
lean_inc(v_a_2668_);
v___f_2686_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_2686_, 0, v_a_2668_);
lean_closure_set(v___f_2686_, 1, v_domain_2669_);
lean_closure_set(v___f_2686_, 2, v___x_2684_);
lean_closure_set(v___f_2686_, 3, v_type_2670_);
lean_closure_set(v___f_2686_, 4, v___x_2685_);
v___x_2687_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_uncurry___closed__2));
v___x_2688_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v___x_2687_, v_v_2681_, v___f_2686_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_);
if (lean_obj_tag(v___x_2688_) == 0)
{
lean_object* v_a_2689_; size_t v___x_2690_; size_t v___x_2691_; lean_object* v___x_2692_; 
v_a_2689_ = lean_ctor_get(v___x_2688_, 0);
lean_inc(v_a_2689_);
lean_dec_ref_known(v___x_2688_, 1);
v___x_2690_ = ((size_t)1ULL);
v___x_2691_ = lean_usize_add(v_i_2672_, v___x_2690_);
v___x_2692_ = lean_array_uset(v_bs_x27_2683_, v_i_2672_, v_a_2689_);
v_i_2672_ = v___x_2691_;
v_bs_2673_ = v___x_2692_;
goto _start;
}
else
{
lean_object* v_a_2694_; lean_object* v___x_2696_; uint8_t v_isShared_2697_; uint8_t v_isSharedCheck_2701_; 
lean_dec_ref(v_bs_x27_2683_);
lean_dec_ref(v_type_2670_);
lean_dec_ref(v_domain_2669_);
lean_dec(v_a_2668_);
v_a_2694_ = lean_ctor_get(v___x_2688_, 0);
v_isSharedCheck_2701_ = !lean_is_exclusive(v___x_2688_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2696_ = v___x_2688_;
v_isShared_2697_ = v_isSharedCheck_2701_;
goto v_resetjp_2695_;
}
else
{
lean_inc(v_a_2694_);
lean_dec(v___x_2688_);
v___x_2696_ = lean_box(0);
v_isShared_2697_ = v_isSharedCheck_2701_;
goto v_resetjp_2695_;
}
v_resetjp_2695_:
{
lean_object* v___x_2699_; 
if (v_isShared_2697_ == 0)
{
v___x_2699_ = v___x_2696_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v_a_2694_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
return v___x_2699_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg___boxed(lean_object* v_a_2702_, lean_object* v_domain_2703_, lean_object* v_type_2704_, lean_object* v_sz_2705_, lean_object* v_i_2706_, lean_object* v_bs_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_){
_start:
{
size_t v_sz_boxed_2713_; size_t v_i_boxed_2714_; lean_object* v_res_2715_; 
v_sz_boxed_2713_ = lean_unbox_usize(v_sz_2705_);
lean_dec(v_sz_2705_);
v_i_boxed_2714_ = lean_unbox_usize(v_i_2706_);
lean_dec(v_i_2706_);
v_res_2715_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg(v_a_2702_, v_domain_2703_, v_type_2704_, v_sz_boxed_2713_, v_i_boxed_2714_, v_bs_2707_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_2711_);
lean_dec(v___y_2711_);
lean_dec_ref(v___y_2710_);
lean_dec(v___y_2709_);
lean_dec_ref(v___y_2708_);
return v_res_2715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_curryType(lean_object* v_n_2716_, lean_object* v_type_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_, lean_object* v_a_2720_, lean_object* v_a_2721_){
_start:
{
lean_object* v___y_2724_; lean_object* v___y_2725_; lean_object* v___y_2726_; lean_object* v___y_2727_; uint8_t v___x_2743_; 
v___x_2743_ = l_Lean_Expr_isForall(v_type_2717_);
if (v___x_2743_ == 0)
{
lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v_a_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2755_; 
v___x_2744_ = lean_obj_once(&l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__1, &l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__1_once, _init_l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType___closed__1);
v___x_2745_ = l_Lean_MessageData_ofExpr(v_type_2717_);
v___x_2746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2746_, 0, v___x_2744_);
lean_ctor_set(v___x_2746_, 1, v___x_2745_);
v___x_2747_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_2746_, v_a_2718_, v_a_2719_, v_a_2720_, v_a_2721_);
v_a_2748_ = lean_ctor_get(v___x_2747_, 0);
v_isSharedCheck_2755_ = !lean_is_exclusive(v___x_2747_);
if (v_isSharedCheck_2755_ == 0)
{
v___x_2750_ = v___x_2747_;
v_isShared_2751_ = v_isSharedCheck_2755_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_a_2748_);
lean_dec(v___x_2747_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2755_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
lean_object* v___x_2753_; 
if (v_isShared_2751_ == 0)
{
v___x_2753_ = v___x_2750_;
goto v_reusejp_2752_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v_a_2748_);
v___x_2753_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2752_;
}
v_reusejp_2752_:
{
return v___x_2753_;
}
}
}
else
{
v___y_2724_ = v_a_2718_;
v___y_2725_ = v_a_2719_;
v___y_2726_ = v_a_2720_;
v___y_2727_ = v_a_2721_;
goto v___jp_2723_;
}
v___jp_2723_:
{
lean_object* v_domain_2728_; lean_object* v___x_2729_; 
v_domain_2728_ = l_Lean_Expr_bindingDomain_x21(v_type_2717_);
lean_inc_ref(v_domain_2728_);
v___x_2729_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType(v_n_2716_, v_domain_2728_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_);
if (lean_obj_tag(v___x_2729_) == 0)
{
lean_object* v_a_2730_; lean_object* v___x_2731_; size_t v_sz_2732_; size_t v___x_2733_; lean_object* v___x_2734_; 
v_a_2730_ = lean_ctor_get(v___x_2729_, 0);
lean_inc_n(v_a_2730_, 2);
lean_dec_ref_known(v___x_2729_, 1);
v___x_2731_ = lean_array_mk(v_a_2730_);
v_sz_2732_ = lean_array_size(v___x_2731_);
v___x_2733_ = ((size_t)0ULL);
v___x_2734_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg(v_a_2730_, v_domain_2728_, v_type_2717_, v_sz_2732_, v___x_2733_, v___x_2731_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_);
return v___x_2734_;
}
else
{
lean_object* v_a_2735_; lean_object* v___x_2737_; uint8_t v_isShared_2738_; uint8_t v_isSharedCheck_2742_; 
lean_dec_ref(v_domain_2728_);
lean_dec_ref(v_type_2717_);
v_a_2735_ = lean_ctor_get(v___x_2729_, 0);
v_isSharedCheck_2742_ = !lean_is_exclusive(v___x_2729_);
if (v_isSharedCheck_2742_ == 0)
{
v___x_2737_ = v___x_2729_;
v_isShared_2738_ = v_isSharedCheck_2742_;
goto v_resetjp_2736_;
}
else
{
lean_inc(v_a_2735_);
lean_dec(v___x_2729_);
v___x_2737_ = lean_box(0);
v_isShared_2738_ = v_isSharedCheck_2742_;
goto v_resetjp_2736_;
}
v_resetjp_2736_:
{
lean_object* v___x_2740_; 
if (v_isShared_2738_ == 0)
{
v___x_2740_ = v___x_2737_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v_a_2735_);
v___x_2740_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
return v___x_2740_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_Mutual_curryType___boxed(lean_object* v_n_2756_, lean_object* v_type_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_, lean_object* v_a_2762_){
_start:
{
lean_object* v_res_2763_; 
v_res_2763_ = l_Lean_Meta_ArgsPacker_Mutual_curryType(v_n_2756_, v_type_2757_, v_a_2758_, v_a_2759_, v_a_2760_, v_a_2761_);
lean_dec(v_a_2761_);
lean_dec_ref(v_a_2760_);
lean_dec(v_a_2759_);
lean_dec_ref(v_a_2758_);
lean_dec(v_n_2756_);
return v_res_2763_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0(lean_object* v_a_2764_, lean_object* v_domain_2765_, lean_object* v_type_2766_, lean_object* v_as_2767_, size_t v_sz_2768_, size_t v_i_2769_, lean_object* v_bs_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_){
_start:
{
lean_object* v___x_2776_; 
v___x_2776_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___redArg(v_a_2764_, v_domain_2765_, v_type_2766_, v_sz_2768_, v_i_2769_, v_bs_2770_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_);
return v___x_2776_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0___boxed(lean_object* v_a_2777_, lean_object* v_domain_2778_, lean_object* v_type_2779_, lean_object* v_as_2780_, lean_object* v_sz_2781_, lean_object* v_i_2782_, lean_object* v_bs_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_){
_start:
{
size_t v_sz_boxed_2789_; size_t v_i_boxed_2790_; lean_object* v_res_2791_; 
v_sz_boxed_2789_ = lean_unbox_usize(v_sz_2781_);
lean_dec(v_sz_2781_);
v_i_boxed_2790_ = lean_unbox_usize(v_i_2782_);
lean_dec(v_i_2782_);
v_res_2791_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Meta_ArgsPacker_Mutual_curryType_spec__0(v_a_2777_, v_domain_2778_, v_type_2779_, v_as_2780_, v_sz_boxed_2789_, v_i_boxed_2790_, v_bs_2783_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_);
lean_dec(v___y_2787_);
lean_dec_ref(v___y_2786_);
lean_dec(v___y_2785_);
lean_dec_ref(v___y_2784_);
lean_dec_ref(v_as_2780_);
return v_res_2791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_numFuncs(lean_object* v_argsPacker_2792_){
_start:
{
lean_object* v___x_2793_; 
v___x_2793_ = lean_array_get_size(v_argsPacker_2792_);
return v___x_2793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_numFuncs___boxed(lean_object* v_argsPacker_2794_){
_start:
{
lean_object* v_res_2795_; 
v_res_2795_ = l_Lean_Meta_ArgsPacker_numFuncs(v_argsPacker_2794_);
lean_dec_ref(v_argsPacker_2794_);
return v_res_2795_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_arities_spec__0(size_t v_sz_2796_, size_t v_i_2797_, lean_object* v_bs_2798_){
_start:
{
uint8_t v___x_2799_; 
v___x_2799_ = lean_usize_dec_lt(v_i_2797_, v_sz_2796_);
if (v___x_2799_ == 0)
{
return v_bs_2798_;
}
else
{
lean_object* v_v_2800_; lean_object* v___x_2801_; lean_object* v_bs_x27_2802_; lean_object* v___x_2803_; size_t v___x_2804_; size_t v___x_2805_; lean_object* v___x_2806_; 
v_v_2800_ = lean_array_uget(v_bs_2798_, v_i_2797_);
v___x_2801_ = lean_unsigned_to_nat(0u);
v_bs_x27_2802_ = lean_array_uset(v_bs_2798_, v_i_2797_, v___x_2801_);
v___x_2803_ = lean_array_get_size(v_v_2800_);
lean_dec(v_v_2800_);
v___x_2804_ = ((size_t)1ULL);
v___x_2805_ = lean_usize_add(v_i_2797_, v___x_2804_);
v___x_2806_ = lean_array_uset(v_bs_x27_2802_, v_i_2797_, v___x_2803_);
v_i_2797_ = v___x_2805_;
v_bs_2798_ = v___x_2806_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_arities_spec__0___boxed(lean_object* v_sz_2808_, lean_object* v_i_2809_, lean_object* v_bs_2810_){
_start:
{
size_t v_sz_boxed_2811_; size_t v_i_boxed_2812_; lean_object* v_res_2813_; 
v_sz_boxed_2811_ = lean_unbox_usize(v_sz_2808_);
lean_dec(v_sz_2808_);
v_i_boxed_2812_ = lean_unbox_usize(v_i_2809_);
lean_dec(v_i_2809_);
v_res_2813_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_arities_spec__0(v_sz_boxed_2811_, v_i_boxed_2812_, v_bs_2810_);
return v_res_2813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_arities(lean_object* v_argsPacker_2814_){
_start:
{
size_t v_sz_2815_; size_t v___x_2816_; lean_object* v___x_2817_; 
v_sz_2815_ = lean_array_size(v_argsPacker_2814_);
v___x_2816_ = ((size_t)0ULL);
v___x_2817_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ArgsPacker_arities_spec__0(v_sz_2815_, v___x_2816_, v_argsPacker_2814_);
return v___x_2817_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0(void){
_start:
{
lean_object* v___x_2818_; 
v___x_2818_ = l_Array_instInhabited___redArg();
return v___x_2818_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_ArgsPacker_onlyOneUnary(lean_object* v_argsPacker_2819_){
_start:
{
lean_object* v___x_2820_; lean_object* v___x_2821_; uint8_t v___x_2822_; 
v___x_2820_ = lean_array_get_size(v_argsPacker_2819_);
v___x_2821_ = lean_unsigned_to_nat(1u);
v___x_2822_ = lean_nat_dec_eq(v___x_2820_, v___x_2821_);
if (v___x_2822_ == 0)
{
return v___x_2822_;
}
else
{
lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; uint8_t v___x_2827_; 
v___x_2823_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0, &l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0_once, _init_l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0);
v___x_2824_ = lean_unsigned_to_nat(0u);
v___x_2825_ = lean_array_get_borrowed(v___x_2823_, v_argsPacker_2819_, v___x_2824_);
v___x_2826_ = lean_array_get_size(v___x_2825_);
v___x_2827_ = lean_nat_dec_eq(v___x_2826_, v___x_2821_);
return v___x_2827_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_onlyOneUnary___boxed(lean_object* v_argsPacker_2828_){
_start:
{
uint8_t v_res_2829_; lean_object* v_r_2830_; 
v_res_2829_ = l_Lean_Meta_ArgsPacker_onlyOneUnary(v_argsPacker_2828_);
lean_dec_ref(v_argsPacker_2828_);
v_r_2830_ = lean_box(v_res_2829_);
return v_r_2830_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_pack___closed__2(void){
_start:
{
lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; 
v___x_2833_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_pack___closed__1));
v___x_2834_ = lean_unsigned_to_nat(2u);
v___x_2835_ = lean_unsigned_to_nat(469u);
v___x_2836_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_pack___closed__0));
v___x_2837_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0));
v___x_2838_ = l_mkPanicMessageWithDecl(v___x_2837_, v___x_2836_, v___x_2835_, v___x_2834_, v___x_2833_);
return v___x_2838_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_pack___closed__4(void){
_start:
{
lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2840_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_pack___closed__3));
v___x_2841_ = lean_unsigned_to_nat(2u);
v___x_2842_ = lean_unsigned_to_nat(470u);
v___x_2843_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_pack___closed__0));
v___x_2844_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0));
v___x_2845_ = l_mkPanicMessageWithDecl(v___x_2844_, v___x_2843_, v___x_2842_, v___x_2841_, v___x_2840_);
return v___x_2845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_pack(lean_object* v_argsPacker_2846_, lean_object* v_domain_2847_, lean_object* v_fidx_2848_, lean_object* v_args_2849_, lean_object* v_a_2850_, lean_object* v_a_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_){
_start:
{
lean_object* v___x_2855_; uint8_t v___x_2856_; 
v___x_2855_ = lean_array_get_size(v_argsPacker_2846_);
v___x_2856_ = lean_nat_dec_lt(v_fidx_2848_, v___x_2855_);
if (v___x_2856_ == 0)
{
lean_object* v___x_2857_; lean_object* v___x_2858_; 
lean_dec(v_fidx_2848_);
lean_dec_ref(v_domain_2847_);
v___x_2857_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_pack___closed__2, &l_Lean_Meta_ArgsPacker_pack___closed__2_once, _init_l_Lean_Meta_ArgsPacker_pack___closed__2);
v___x_2858_ = l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(v___x_2857_, v_a_2850_, v_a_2851_, v_a_2852_, v_a_2853_);
return v___x_2858_;
}
else
{
lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; uint8_t v___x_2863_; 
v___x_2859_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0, &l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0_once, _init_l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0);
v___x_2860_ = lean_array_get_size(v_args_2849_);
v___x_2861_ = lean_array_get_borrowed(v___x_2859_, v_argsPacker_2846_, v_fidx_2848_);
v___x_2862_ = lean_array_get_size(v___x_2861_);
v___x_2863_ = lean_nat_dec_eq(v___x_2860_, v___x_2862_);
if (v___x_2863_ == 0)
{
lean_object* v___x_2864_; lean_object* v___x_2865_; 
lean_dec(v_fidx_2848_);
lean_dec_ref(v_domain_2847_);
v___x_2864_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_pack___closed__4, &l_Lean_Meta_ArgsPacker_pack___closed__4_once, _init_l_Lean_Meta_ArgsPacker_pack___closed__4);
v___x_2865_ = l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0(v___x_2864_, v_a_2850_, v_a_2851_, v_a_2852_, v_a_2853_);
return v___x_2865_;
}
else
{
lean_object* v___x_2866_; lean_object* v___x_2867_; 
v___x_2866_ = l_Lean_instInhabitedExpr;
lean_inc_ref(v_domain_2847_);
v___x_2867_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType(v___x_2855_, v_domain_2847_, v_a_2850_, v_a_2851_, v_a_2852_, v_a_2853_);
if (lean_obj_tag(v___x_2867_) == 0)
{
lean_object* v_a_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; 
v_a_2868_ = lean_ctor_get(v___x_2867_, 0);
lean_inc(v_a_2868_);
lean_dec_ref_known(v___x_2867_, 1);
lean_inc(v_fidx_2848_);
v___x_2869_ = l_List_get_x21Internal___redArg(v___x_2866_, v_a_2868_, v_fidx_2848_);
lean_dec(v_a_2868_);
v___x_2870_ = l_Lean_Meta_ArgsPacker_Unary_pack(v___x_2869_, v_args_2849_);
lean_dec(v___x_2869_);
v___x_2871_ = l_Lean_Meta_ArgsPacker_Mutual_pack(v___x_2855_, v_domain_2847_, v_fidx_2848_, v___x_2870_, v_a_2850_, v_a_2851_, v_a_2852_, v_a_2853_);
lean_dec(v_fidx_2848_);
return v___x_2871_;
}
else
{
lean_object* v_a_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2879_; 
lean_dec(v_fidx_2848_);
lean_dec_ref(v_domain_2847_);
v_a_2872_ = lean_ctor_get(v___x_2867_, 0);
v_isSharedCheck_2879_ = !lean_is_exclusive(v___x_2867_);
if (v_isSharedCheck_2879_ == 0)
{
v___x_2874_ = v___x_2867_;
v_isShared_2875_ = v_isSharedCheck_2879_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_a_2872_);
lean_dec(v___x_2867_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2879_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2877_; 
if (v_isShared_2875_ == 0)
{
v___x_2877_ = v___x_2874_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v_a_2872_);
v___x_2877_ = v_reuseFailAlloc_2878_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
return v___x_2877_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_pack___boxed(lean_object* v_argsPacker_2880_, lean_object* v_domain_2881_, lean_object* v_fidx_2882_, lean_object* v_args_2883_, lean_object* v_a_2884_, lean_object* v_a_2885_, lean_object* v_a_2886_, lean_object* v_a_2887_, lean_object* v_a_2888_){
_start:
{
lean_object* v_res_2889_; 
v_res_2889_ = l_Lean_Meta_ArgsPacker_pack(v_argsPacker_2880_, v_domain_2881_, v_fidx_2882_, v_args_2883_, v_a_2884_, v_a_2885_, v_a_2886_, v_a_2887_);
lean_dec(v_a_2887_);
lean_dec_ref(v_a_2886_);
lean_dec(v_a_2885_);
lean_dec_ref(v_a_2884_);
lean_dec_ref(v_args_2883_);
lean_dec_ref(v_argsPacker_2880_);
return v_res_2889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_unpack(lean_object* v_argsPacker_2890_, lean_object* v_e_2891_){
_start:
{
lean_object* v___x_2892_; lean_object* v___x_2893_; 
v___x_2892_ = lean_array_get_size(v_argsPacker_2890_);
v___x_2893_ = l_Lean_Meta_ArgsPacker_Mutual_unpack(v___x_2892_, v_e_2891_);
if (lean_obj_tag(v___x_2893_) == 0)
{
lean_object* v___x_2894_; 
v___x_2894_ = lean_box(0);
return v___x_2894_;
}
else
{
lean_object* v_val_2895_; lean_object* v_fst_2896_; lean_object* v_snd_2897_; lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2917_; 
v_val_2895_ = lean_ctor_get(v___x_2893_, 0);
lean_inc(v_val_2895_);
lean_dec_ref_known(v___x_2893_, 1);
v_fst_2896_ = lean_ctor_get(v_val_2895_, 0);
v_snd_2897_ = lean_ctor_get(v_val_2895_, 1);
v_isSharedCheck_2917_ = !lean_is_exclusive(v_val_2895_);
if (v_isSharedCheck_2917_ == 0)
{
v___x_2899_ = v_val_2895_;
v_isShared_2900_ = v_isSharedCheck_2917_;
goto v_resetjp_2898_;
}
else
{
lean_inc(v_snd_2897_);
lean_inc(v_fst_2896_);
lean_dec(v_val_2895_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2917_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; 
v___x_2901_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0, &l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0_once, _init_l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0);
v___x_2902_ = lean_array_get_borrowed(v___x_2901_, v_argsPacker_2890_, v_fst_2896_);
v___x_2903_ = lean_array_get_size(v___x_2902_);
v___x_2904_ = l_Lean_Meta_ArgsPacker_Unary_unpack(v___x_2903_, v_snd_2897_);
if (lean_obj_tag(v___x_2904_) == 0)
{
lean_object* v___x_2905_; 
lean_del_object(v___x_2899_);
lean_dec(v_fst_2896_);
v___x_2905_ = lean_box(0);
return v___x_2905_;
}
else
{
lean_object* v_val_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2916_; 
v_val_2906_ = lean_ctor_get(v___x_2904_, 0);
v_isSharedCheck_2916_ = !lean_is_exclusive(v___x_2904_);
if (v_isSharedCheck_2916_ == 0)
{
v___x_2908_ = v___x_2904_;
v_isShared_2909_ = v_isSharedCheck_2916_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_val_2906_);
lean_dec(v___x_2904_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2916_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v___x_2911_; 
if (v_isShared_2900_ == 0)
{
lean_ctor_set(v___x_2899_, 1, v_val_2906_);
v___x_2911_ = v___x_2899_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v_fst_2896_);
lean_ctor_set(v_reuseFailAlloc_2915_, 1, v_val_2906_);
v___x_2911_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
lean_object* v___x_2913_; 
if (v_isShared_2909_ == 0)
{
lean_ctor_set(v___x_2908_, 0, v___x_2911_);
v___x_2913_ = v___x_2908_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_unpack___boxed(lean_object* v_argsPacker_2918_, lean_object* v_e_2919_){
_start:
{
lean_object* v_res_2920_; 
v_res_2920_ = l_Lean_Meta_ArgsPacker_unpack(v_argsPacker_2918_, v_e_2919_);
lean_dec_ref(v_argsPacker_2918_);
return v_res_2920_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurryType_spec__0(lean_object* v_as_2921_, lean_object* v_bs_2922_, lean_object* v_i_2923_, lean_object* v_cs_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_){
_start:
{
lean_object* v___x_2930_; uint8_t v___x_2931_; 
v___x_2930_ = lean_array_get_size(v_as_2921_);
v___x_2931_ = lean_nat_dec_lt(v_i_2923_, v___x_2930_);
if (v___x_2931_ == 0)
{
lean_object* v___x_2932_; 
lean_dec(v_i_2923_);
v___x_2932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2932_, 0, v_cs_2924_);
return v___x_2932_;
}
else
{
lean_object* v___x_2933_; uint8_t v___x_2934_; 
v___x_2933_ = lean_array_get_size(v_bs_2922_);
v___x_2934_ = lean_nat_dec_lt(v_i_2923_, v___x_2933_);
if (v___x_2934_ == 0)
{
lean_object* v___x_2935_; 
lean_dec(v_i_2923_);
v___x_2935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2935_, 0, v_cs_2924_);
return v___x_2935_;
}
else
{
lean_object* v_a_2936_; lean_object* v_b_2937_; lean_object* v___x_2938_; 
v_a_2936_ = lean_array_fget_borrowed(v_as_2921_, v_i_2923_);
v_b_2937_ = lean_array_fget_borrowed(v_bs_2922_, v_i_2923_);
lean_inc(v_b_2937_);
lean_inc(v_a_2936_);
v___x_2938_ = l_Lean_Meta_ArgsPacker_Unary_uncurryType(v_a_2936_, v_b_2937_, v___y_2925_, v___y_2926_, v___y_2927_, v___y_2928_);
if (lean_obj_tag(v___x_2938_) == 0)
{
lean_object* v_a_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; 
v_a_2939_ = lean_ctor_get(v___x_2938_, 0);
lean_inc(v_a_2939_);
lean_dec_ref_known(v___x_2938_, 1);
v___x_2940_ = lean_unsigned_to_nat(1u);
v___x_2941_ = lean_nat_add(v_i_2923_, v___x_2940_);
lean_dec(v_i_2923_);
v___x_2942_ = lean_array_push(v_cs_2924_, v_a_2939_);
v_i_2923_ = v___x_2941_;
v_cs_2924_ = v___x_2942_;
goto _start;
}
else
{
lean_object* v_a_2944_; lean_object* v___x_2946_; uint8_t v_isShared_2947_; uint8_t v_isSharedCheck_2951_; 
lean_dec_ref(v_cs_2924_);
lean_dec(v_i_2923_);
v_a_2944_ = lean_ctor_get(v___x_2938_, 0);
v_isSharedCheck_2951_ = !lean_is_exclusive(v___x_2938_);
if (v_isSharedCheck_2951_ == 0)
{
v___x_2946_ = v___x_2938_;
v_isShared_2947_ = v_isSharedCheck_2951_;
goto v_resetjp_2945_;
}
else
{
lean_inc(v_a_2944_);
lean_dec(v___x_2938_);
v___x_2946_ = lean_box(0);
v_isShared_2947_ = v_isSharedCheck_2951_;
goto v_resetjp_2945_;
}
v_resetjp_2945_:
{
lean_object* v___x_2949_; 
if (v_isShared_2947_ == 0)
{
v___x_2949_ = v___x_2946_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v_a_2944_);
v___x_2949_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2948_;
}
v_reusejp_2948_:
{
return v___x_2949_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurryType_spec__0___boxed(lean_object* v_as_2952_, lean_object* v_bs_2953_, lean_object* v_i_2954_, lean_object* v_cs_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurryType_spec__0(v_as_2952_, v_bs_2953_, v_i_2954_, v_cs_2955_, v___y_2956_, v___y_2957_, v___y_2958_, v___y_2959_);
lean_dec(v___y_2959_);
lean_dec_ref(v___y_2958_);
lean_dec(v___y_2957_);
lean_dec_ref(v___y_2956_);
lean_dec_ref(v_bs_2953_);
lean_dec_ref(v_as_2952_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryType(lean_object* v_argsPacker_2962_, lean_object* v_types_2963_, lean_object* v_a_2964_, lean_object* v_a_2965_, lean_object* v_a_2966_, lean_object* v_a_2967_){
_start:
{
lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v___x_2969_ = lean_unsigned_to_nat(0u);
v___x_2970_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0));
v___x_2971_ = l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurryType_spec__0(v_argsPacker_2962_, v_types_2963_, v___x_2969_, v___x_2970_, v_a_2964_, v_a_2965_, v_a_2966_, v_a_2967_);
if (lean_obj_tag(v___x_2971_) == 0)
{
lean_object* v_a_2972_; lean_object* v___x_2973_; 
v_a_2972_ = lean_ctor_get(v___x_2971_, 0);
lean_inc(v_a_2972_);
lean_dec_ref_known(v___x_2971_, 1);
v___x_2973_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryType(v_a_2972_, v_a_2964_, v_a_2965_, v_a_2966_, v_a_2967_);
return v___x_2973_;
}
else
{
lean_object* v_a_2974_; lean_object* v___x_2976_; uint8_t v_isShared_2977_; uint8_t v_isSharedCheck_2981_; 
v_a_2974_ = lean_ctor_get(v___x_2971_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v___x_2971_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2976_ = v___x_2971_;
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
else
{
lean_inc(v_a_2974_);
lean_dec(v___x_2971_);
v___x_2976_ = lean_box(0);
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
v_resetjp_2975_:
{
lean_object* v___x_2979_; 
if (v_isShared_2977_ == 0)
{
v___x_2979_ = v___x_2976_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_a_2974_);
v___x_2979_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
return v___x_2979_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryType___boxed(lean_object* v_argsPacker_2982_, lean_object* v_types_2983_, lean_object* v_a_2984_, lean_object* v_a_2985_, lean_object* v_a_2986_, lean_object* v_a_2987_, lean_object* v_a_2988_){
_start:
{
lean_object* v_res_2989_; 
v_res_2989_ = l_Lean_Meta_ArgsPacker_uncurryType(v_argsPacker_2982_, v_types_2983_, v_a_2984_, v_a_2985_, v_a_2986_, v_a_2987_);
lean_dec(v_a_2987_);
lean_dec_ref(v_a_2986_);
lean_dec(v_a_2985_);
lean_dec_ref(v_a_2984_);
lean_dec_ref(v_types_2983_);
lean_dec_ref(v_argsPacker_2982_);
return v_res_2989_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurry_spec__0(lean_object* v_as_2990_, lean_object* v_bs_2991_, lean_object* v_i_2992_, lean_object* v_cs_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_){
_start:
{
lean_object* v___x_2999_; uint8_t v___x_3000_; 
v___x_2999_ = lean_array_get_size(v_as_2990_);
v___x_3000_ = lean_nat_dec_lt(v_i_2992_, v___x_2999_);
if (v___x_3000_ == 0)
{
lean_object* v___x_3001_; 
lean_dec(v_i_2992_);
v___x_3001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3001_, 0, v_cs_2993_);
return v___x_3001_;
}
else
{
lean_object* v___x_3002_; uint8_t v___x_3003_; 
v___x_3002_ = lean_array_get_size(v_bs_2991_);
v___x_3003_ = lean_nat_dec_lt(v_i_2992_, v___x_3002_);
if (v___x_3003_ == 0)
{
lean_object* v___x_3004_; 
lean_dec(v_i_2992_);
v___x_3004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3004_, 0, v_cs_2993_);
return v___x_3004_;
}
else
{
lean_object* v_a_3005_; lean_object* v_b_3006_; lean_object* v___x_3007_; 
v_a_3005_ = lean_array_fget_borrowed(v_as_2990_, v_i_2992_);
v_b_3006_ = lean_array_fget_borrowed(v_bs_2991_, v_i_2992_);
lean_inc(v_b_3006_);
lean_inc(v_a_3005_);
v___x_3007_ = l_Lean_Meta_ArgsPacker_Unary_uncurry(v_a_3005_, v_b_3006_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_);
if (lean_obj_tag(v___x_3007_) == 0)
{
lean_object* v_a_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; 
v_a_3008_ = lean_ctor_get(v___x_3007_, 0);
lean_inc(v_a_3008_);
lean_dec_ref_known(v___x_3007_, 1);
v___x_3009_ = lean_unsigned_to_nat(1u);
v___x_3010_ = lean_nat_add(v_i_2992_, v___x_3009_);
lean_dec(v_i_2992_);
v___x_3011_ = lean_array_push(v_cs_2993_, v_a_3008_);
v_i_2992_ = v___x_3010_;
v_cs_2993_ = v___x_3011_;
goto _start;
}
else
{
lean_object* v_a_3013_; lean_object* v___x_3015_; uint8_t v_isShared_3016_; uint8_t v_isSharedCheck_3020_; 
lean_dec_ref(v_cs_2993_);
lean_dec(v_i_2992_);
v_a_3013_ = lean_ctor_get(v___x_3007_, 0);
v_isSharedCheck_3020_ = !lean_is_exclusive(v___x_3007_);
if (v_isSharedCheck_3020_ == 0)
{
v___x_3015_ = v___x_3007_;
v_isShared_3016_ = v_isSharedCheck_3020_;
goto v_resetjp_3014_;
}
else
{
lean_inc(v_a_3013_);
lean_dec(v___x_3007_);
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
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurry_spec__0___boxed(lean_object* v_as_3021_, lean_object* v_bs_3022_, lean_object* v_i_3023_, lean_object* v_cs_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_){
_start:
{
lean_object* v_res_3030_; 
v_res_3030_ = l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurry_spec__0(v_as_3021_, v_bs_3022_, v_i_3023_, v_cs_3024_, v___y_3025_, v___y_3026_, v___y_3027_, v___y_3028_);
lean_dec(v___y_3028_);
lean_dec_ref(v___y_3027_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3025_);
lean_dec_ref(v_bs_3022_);
lean_dec_ref(v_as_3021_);
return v_res_3030_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurry(lean_object* v_argsPacker_3031_, lean_object* v_es_3032_, lean_object* v_a_3033_, lean_object* v_a_3034_, lean_object* v_a_3035_, lean_object* v_a_3036_){
_start:
{
lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; 
v___x_3038_ = lean_unsigned_to_nat(0u);
v___x_3039_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0));
v___x_3040_ = l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurry_spec__0(v_argsPacker_3031_, v_es_3032_, v___x_3038_, v___x_3039_, v_a_3033_, v_a_3034_, v_a_3035_, v_a_3036_);
if (lean_obj_tag(v___x_3040_) == 0)
{
lean_object* v_a_3041_; lean_object* v___x_3042_; 
v_a_3041_ = lean_ctor_get(v___x_3040_, 0);
lean_inc(v_a_3041_);
lean_dec_ref_known(v___x_3040_, 1);
v___x_3042_ = l_Lean_Meta_ArgsPacker_Mutual_uncurry(v_a_3041_, v_a_3033_, v_a_3034_, v_a_3035_, v_a_3036_);
return v___x_3042_;
}
else
{
lean_object* v_a_3043_; lean_object* v___x_3045_; uint8_t v_isShared_3046_; uint8_t v_isSharedCheck_3050_; 
v_a_3043_ = lean_ctor_get(v___x_3040_, 0);
v_isSharedCheck_3050_ = !lean_is_exclusive(v___x_3040_);
if (v_isSharedCheck_3050_ == 0)
{
v___x_3045_ = v___x_3040_;
v_isShared_3046_ = v_isSharedCheck_3050_;
goto v_resetjp_3044_;
}
else
{
lean_inc(v_a_3043_);
lean_dec(v___x_3040_);
v___x_3045_ = lean_box(0);
v_isShared_3046_ = v_isSharedCheck_3050_;
goto v_resetjp_3044_;
}
v_resetjp_3044_:
{
lean_object* v___x_3048_; 
if (v_isShared_3046_ == 0)
{
v___x_3048_ = v___x_3045_;
goto v_reusejp_3047_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v_a_3043_);
v___x_3048_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3047_;
}
v_reusejp_3047_:
{
return v___x_3048_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurry___boxed(lean_object* v_argsPacker_3051_, lean_object* v_es_3052_, lean_object* v_a_3053_, lean_object* v_a_3054_, lean_object* v_a_3055_, lean_object* v_a_3056_, lean_object* v_a_3057_){
_start:
{
lean_object* v_res_3058_; 
v_res_3058_ = l_Lean_Meta_ArgsPacker_uncurry(v_argsPacker_3051_, v_es_3052_, v_a_3053_, v_a_3054_, v_a_3055_, v_a_3056_);
lean_dec(v_a_3056_);
lean_dec_ref(v_a_3055_);
lean_dec(v_a_3054_);
lean_dec_ref(v_a_3053_);
lean_dec_ref(v_es_3052_);
lean_dec_ref(v_argsPacker_3051_);
return v_res_3058_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryWithType(lean_object* v_argsPacker_3059_, lean_object* v_resultType_3060_, lean_object* v_es_3061_, lean_object* v_a_3062_, lean_object* v_a_3063_, lean_object* v_a_3064_, lean_object* v_a_3065_){
_start:
{
lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; 
v___x_3067_ = lean_unsigned_to_nat(0u);
v___x_3068_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0));
v___x_3069_ = l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurry_spec__0(v_argsPacker_3059_, v_es_3061_, v___x_3067_, v___x_3068_, v_a_3062_, v_a_3063_, v_a_3064_, v_a_3065_);
if (lean_obj_tag(v___x_3069_) == 0)
{
lean_object* v_a_3070_; lean_object* v___x_3071_; 
v_a_3070_ = lean_ctor_get(v___x_3069_, 0);
lean_inc(v_a_3070_);
lean_dec_ref_known(v___x_3069_, 1);
v___x_3071_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryWithType(v_resultType_3060_, v_a_3070_, v_a_3062_, v_a_3063_, v_a_3064_, v_a_3065_);
return v___x_3071_;
}
else
{
lean_object* v_a_3072_; lean_object* v___x_3074_; uint8_t v_isShared_3075_; uint8_t v_isSharedCheck_3079_; 
lean_dec_ref(v_resultType_3060_);
v_a_3072_ = lean_ctor_get(v___x_3069_, 0);
v_isSharedCheck_3079_ = !lean_is_exclusive(v___x_3069_);
if (v_isSharedCheck_3079_ == 0)
{
v___x_3074_ = v___x_3069_;
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
else
{
lean_inc(v_a_3072_);
lean_dec(v___x_3069_);
v___x_3074_ = lean_box(0);
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
v_resetjp_3073_:
{
lean_object* v___x_3077_; 
if (v_isShared_3075_ == 0)
{
v___x_3077_ = v___x_3074_;
goto v_reusejp_3076_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v_a_3072_);
v___x_3077_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3076_;
}
v_reusejp_3076_:
{
return v___x_3077_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryWithType___boxed(lean_object* v_argsPacker_3080_, lean_object* v_resultType_3081_, lean_object* v_es_3082_, lean_object* v_a_3083_, lean_object* v_a_3084_, lean_object* v_a_3085_, lean_object* v_a_3086_, lean_object* v_a_3087_){
_start:
{
lean_object* v_res_3088_; 
v_res_3088_ = l_Lean_Meta_ArgsPacker_uncurryWithType(v_argsPacker_3080_, v_resultType_3081_, v_es_3082_, v_a_3083_, v_a_3084_, v_a_3085_, v_a_3086_);
lean_dec(v_a_3086_);
lean_dec_ref(v_a_3085_);
lean_dec(v_a_3084_);
lean_dec_ref(v_a_3083_);
lean_dec_ref(v_es_3082_);
lean_dec_ref(v_argsPacker_3080_);
return v_res_3088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryND(lean_object* v_argsPacker_3089_, lean_object* v_es_3090_, lean_object* v_a_3091_, lean_object* v_a_3092_, lean_object* v_a_3093_, lean_object* v_a_3094_){
_start:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; 
v___x_3096_ = lean_unsigned_to_nat(0u);
v___x_3097_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0));
v___x_3098_ = l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_uncurry_spec__0(v_argsPacker_3089_, v_es_3090_, v___x_3096_, v___x_3097_, v_a_3091_, v_a_3092_, v_a_3093_, v_a_3094_);
if (lean_obj_tag(v___x_3098_) == 0)
{
lean_object* v_a_3099_; lean_object* v___x_3100_; 
v_a_3099_ = lean_ctor_get(v___x_3098_, 0);
lean_inc(v_a_3099_);
lean_dec_ref_known(v___x_3098_, 1);
v___x_3100_ = l_Lean_Meta_ArgsPacker_Mutual_uncurryND(v_a_3099_, v_a_3091_, v_a_3092_, v_a_3093_, v_a_3094_);
return v___x_3100_;
}
else
{
lean_object* v_a_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3108_; 
v_a_3101_ = lean_ctor_get(v___x_3098_, 0);
v_isSharedCheck_3108_ = !lean_is_exclusive(v___x_3098_);
if (v_isSharedCheck_3108_ == 0)
{
v___x_3103_ = v___x_3098_;
v_isShared_3104_ = v_isSharedCheck_3108_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_a_3101_);
lean_dec(v___x_3098_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_uncurryND___boxed(lean_object* v_argsPacker_3109_, lean_object* v_es_3110_, lean_object* v_a_3111_, lean_object* v_a_3112_, lean_object* v_a_3113_, lean_object* v_a_3114_, lean_object* v_a_3115_){
_start:
{
lean_object* v_res_3116_; 
v_res_3116_ = l_Lean_Meta_ArgsPacker_uncurryND(v_argsPacker_3109_, v_es_3110_, v_a_3111_, v_a_3112_, v_a_3113_, v_a_3114_);
lean_dec(v_a_3114_);
lean_dec_ref(v_a_3113_);
lean_dec(v_a_3112_);
lean_dec_ref(v_a_3111_);
lean_dec_ref(v_es_3110_);
lean_dec_ref(v_argsPacker_3109_);
return v_res_3116_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ArgsPacker_curryProj_spec__0(lean_object* v_msg_3117_, lean_object* v___y_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_){
_start:
{
lean_object* v___f_3123_; lean_object* v___x_1029__overap_3124_; lean_object* v___x_3125_; 
v___f_3123_ = ((lean_object*)(l_panic___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__0___closed__0));
v___x_1029__overap_3124_ = lean_panic_fn_borrowed(v___f_3123_, v_msg_3117_);
lean_inc(v___y_3121_);
lean_inc_ref(v___y_3120_);
lean_inc(v___y_3119_);
lean_inc_ref(v___y_3118_);
v___x_3125_ = lean_apply_5(v___x_1029__overap_3124_, v___y_3118_, v___y_3119_, v___y_3120_, v___y_3121_, lean_box(0));
return v___x_3125_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ArgsPacker_curryProj_spec__0___boxed(lean_object* v_msg_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_){
_start:
{
lean_object* v_res_3132_; 
v_res_3132_ = l_panic___at___00Lean_Meta_ArgsPacker_curryProj_spec__0(v_msg_3126_, v___y_3127_, v___y_3128_, v___y_3129_, v___y_3130_);
lean_dec(v___y_3130_);
lean_dec_ref(v___y_3129_);
lean_dec(v___y_3128_);
lean_dec_ref(v___y_3127_);
return v_res_3132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryProj___lam__0(lean_object* v_a_3133_, lean_object* v___x_3134_, lean_object* v_i_3135_, lean_object* v_e_3136_, lean_object* v_x_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_){
_start:
{
lean_object* v___x_3143_; lean_object* v___x_3144_; 
v___x_3143_ = l_List_lengthTR___redArg(v_a_3133_);
lean_inc_ref(v_x_3137_);
v___x_3144_ = l_Lean_Meta_ArgsPacker_Mutual_pack(v___x_3143_, v___x_3134_, v_i_3135_, v_x_3137_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_);
lean_dec(v___x_3143_);
if (lean_obj_tag(v___x_3144_) == 0)
{
lean_object* v_a_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; uint8_t v___x_3151_; uint8_t v___x_3152_; uint8_t v___x_3153_; lean_object* v___x_3154_; 
v_a_3145_ = lean_ctor_get(v___x_3144_, 0);
lean_inc(v_a_3145_);
lean_dec_ref_known(v___x_3144_, 1);
v___x_3146_ = lean_unsigned_to_nat(1u);
v___x_3147_ = lean_mk_empty_array_with_capacity(v___x_3146_);
lean_inc_ref(v___x_3147_);
v___x_3148_ = lean_array_push(v___x_3147_, v_x_3137_);
v___x_3149_ = lean_array_push(v___x_3147_, v_a_3145_);
v___x_3150_ = l_Lean_Expr_beta(v_e_3136_, v___x_3149_);
v___x_3151_ = 0;
v___x_3152_ = 1;
v___x_3153_ = 1;
v___x_3154_ = l_Lean_Meta_mkLambdaFVars(v___x_3148_, v___x_3150_, v___x_3151_, v___x_3152_, v___x_3151_, v___x_3152_, v___x_3153_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_);
lean_dec_ref(v___x_3148_);
return v___x_3154_;
}
else
{
lean_dec_ref(v_x_3137_);
lean_dec_ref(v_e_3136_);
return v___x_3144_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryProj___lam__0___boxed(lean_object* v_a_3155_, lean_object* v___x_3156_, lean_object* v_i_3157_, lean_object* v_e_3158_, lean_object* v_x_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_){
_start:
{
lean_object* v_res_3165_; 
v_res_3165_ = l_Lean_Meta_ArgsPacker_curryProj___lam__0(v_a_3155_, v___x_3156_, v_i_3157_, v_e_3158_, v_x_3159_, v___y_3160_, v___y_3161_, v___y_3162_, v___y_3163_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec(v_i_3157_);
lean_dec(v_a_3155_);
return v_res_3165_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_curryProj___closed__1(void){
_start:
{
lean_object* v___x_3167_; lean_object* v___x_3168_; 
v___x_3167_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_curryProj___closed__0));
v___x_3168_ = l_Lean_stringToMessageData(v___x_3167_);
return v___x_3168_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_curryProj___closed__4(void){
_start:
{
lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; 
v___x_3171_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_curryProj___closed__3));
v___x_3172_ = lean_unsigned_to_nat(4u);
v___x_3173_ = lean_unsigned_to_nat(535u);
v___x_3174_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_curryProj___closed__2));
v___x_3175_ = ((lean_object*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_pack_go___closed__0));
v___x_3176_ = l_mkPanicMessageWithDecl(v___x_3175_, v___x_3174_, v___x_3173_, v___x_3172_, v___x_3171_);
return v___x_3176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryProj(lean_object* v_argsPacker_3177_, lean_object* v_e_3178_, lean_object* v_i_3179_, lean_object* v_a_3180_, lean_object* v_a_3181_, lean_object* v_a_3182_, lean_object* v_a_3183_){
_start:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v_n_3187_; lean_object* v___x_3188_; 
v___x_3185_ = l_Lean_instInhabitedExpr;
v___x_3186_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0, &l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0_once, _init_l_Lean_Meta_ArgsPacker_onlyOneUnary___closed__0);
v_n_3187_ = lean_array_get_size(v_argsPacker_3177_);
lean_inc(v_a_3183_);
lean_inc_ref(v_a_3182_);
lean_inc(v_a_3181_);
lean_inc_ref(v_a_3180_);
lean_inc_ref(v_e_3178_);
v___x_3188_ = lean_infer_type(v_e_3178_, v_a_3180_, v_a_3181_, v_a_3182_, v_a_3183_);
if (lean_obj_tag(v___x_3188_) == 0)
{
lean_object* v_a_3189_; lean_object* v___x_3190_; 
v_a_3189_ = lean_ctor_get(v___x_3188_, 0);
lean_inc(v_a_3189_);
lean_dec_ref_known(v___x_3188_, 1);
lean_inc(v_a_3183_);
lean_inc_ref(v_a_3182_);
lean_inc(v_a_3181_);
lean_inc_ref(v_a_3180_);
v___x_3190_ = lean_whnf(v_a_3189_, v_a_3180_, v_a_3181_, v_a_3182_, v_a_3183_);
if (lean_obj_tag(v___x_3190_) == 0)
{
lean_object* v_a_3191_; lean_object* v___y_3193_; lean_object* v___y_3194_; lean_object* v___y_3195_; lean_object* v___y_3196_; lean_object* v___y_3197_; lean_object* v___y_3198_; lean_object* v___y_3206_; lean_object* v___y_3207_; lean_object* v___y_3208_; lean_object* v___y_3209_; uint8_t v___x_3234_; 
v_a_3191_ = lean_ctor_get(v___x_3190_, 0);
lean_inc(v_a_3191_);
lean_dec_ref_known(v___x_3190_, 1);
v___x_3234_ = l_Lean_Expr_isForall(v_a_3191_);
if (v___x_3234_ == 0)
{
lean_object* v___x_3235_; lean_object* v___x_3236_; 
v___x_3235_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_curryProj___closed__4, &l_Lean_Meta_ArgsPacker_curryProj___closed__4_once, _init_l_Lean_Meta_ArgsPacker_curryProj___closed__4);
v___x_3236_ = l_panic___at___00Lean_Meta_ArgsPacker_curryProj_spec__0(v___x_3235_, v_a_3180_, v_a_3181_, v_a_3182_, v_a_3183_);
if (lean_obj_tag(v___x_3236_) == 0)
{
lean_dec_ref_known(v___x_3236_, 1);
v___y_3206_ = v_a_3180_;
v___y_3207_ = v_a_3181_;
v___y_3208_ = v_a_3182_;
v___y_3209_ = v_a_3183_;
goto v___jp_3205_;
}
else
{
lean_object* v_a_3237_; lean_object* v___x_3239_; uint8_t v_isShared_3240_; uint8_t v_isSharedCheck_3244_; 
lean_dec(v_a_3191_);
lean_dec(v_i_3179_);
lean_dec_ref(v_e_3178_);
v_a_3237_ = lean_ctor_get(v___x_3236_, 0);
v_isSharedCheck_3244_ = !lean_is_exclusive(v___x_3236_);
if (v_isSharedCheck_3244_ == 0)
{
v___x_3239_ = v___x_3236_;
v_isShared_3240_ = v_isSharedCheck_3244_;
goto v_resetjp_3238_;
}
else
{
lean_inc(v_a_3237_);
lean_dec(v___x_3236_);
v___x_3239_ = lean_box(0);
v_isShared_3240_ = v_isSharedCheck_3244_;
goto v_resetjp_3238_;
}
v_resetjp_3238_:
{
lean_object* v___x_3242_; 
if (v_isShared_3240_ == 0)
{
v___x_3242_ = v___x_3239_;
goto v_reusejp_3241_;
}
else
{
lean_object* v_reuseFailAlloc_3243_; 
v_reuseFailAlloc_3243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3243_, 0, v_a_3237_);
v___x_3242_ = v_reuseFailAlloc_3243_;
goto v_reusejp_3241_;
}
v_reusejp_3241_:
{
return v___x_3242_;
}
}
}
}
else
{
v___y_3206_ = v_a_3180_;
v___y_3207_ = v_a_3181_;
v___y_3208_ = v_a_3182_;
v___y_3209_ = v_a_3183_;
goto v___jp_3205_;
}
v___jp_3192_:
{
lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; 
lean_inc(v_i_3179_);
v___x_3199_ = l_List_get_x21Internal___redArg(v___x_3185_, v___y_3194_, v_i_3179_);
lean_dec(v___y_3194_);
v___x_3200_ = l_Lean_Expr_bindingName_x21(v_a_3191_);
lean_dec(v_a_3191_);
v___x_3201_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v___x_3200_, v___x_3199_, v___y_3193_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
if (lean_obj_tag(v___x_3201_) == 0)
{
lean_object* v_a_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; 
v_a_3202_ = lean_ctor_get(v___x_3201_, 0);
lean_inc(v_a_3202_);
lean_dec_ref_known(v___x_3201_, 1);
v___x_3203_ = lean_array_get_borrowed(v___x_3186_, v_argsPacker_3177_, v_i_3179_);
lean_dec(v_i_3179_);
lean_inc(v___x_3203_);
v___x_3204_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curry(v___x_3203_, v_a_3202_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_);
return v___x_3204_;
}
else
{
lean_dec(v_i_3179_);
return v___x_3201_;
}
}
v___jp_3205_:
{
lean_object* v___x_3210_; lean_object* v___x_3211_; 
v___x_3210_ = l_Lean_Expr_bindingDomain_x21(v_a_3191_);
lean_inc_ref(v___x_3210_);
v___x_3211_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Mutual_unpackType(v_n_3187_, v___x_3210_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_);
if (lean_obj_tag(v___x_3211_) == 0)
{
lean_object* v_a_3212_; lean_object* v___f_3213_; lean_object* v___x_3214_; uint8_t v___x_3215_; 
v_a_3212_ = lean_ctor_get(v___x_3211_, 0);
lean_inc_n(v_a_3212_, 2);
lean_dec_ref_known(v___x_3211_, 1);
lean_inc(v_i_3179_);
v___f_3213_ = lean_alloc_closure((void*)(l_Lean_Meta_ArgsPacker_curryProj___lam__0___boxed), 10, 4);
lean_closure_set(v___f_3213_, 0, v_a_3212_);
lean_closure_set(v___f_3213_, 1, v___x_3210_);
lean_closure_set(v___f_3213_, 2, v_i_3179_);
lean_closure_set(v___f_3213_, 3, v_e_3178_);
v___x_3214_ = l_List_lengthTR___redArg(v_a_3212_);
v___x_3215_ = lean_nat_dec_lt(v_i_3179_, v___x_3214_);
lean_dec(v___x_3214_);
if (v___x_3215_ == 0)
{
lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v_a_3218_; lean_object* v___x_3220_; uint8_t v_isShared_3221_; uint8_t v_isSharedCheck_3225_; 
lean_dec_ref(v___f_3213_);
lean_dec(v_a_3212_);
lean_dec(v_a_3191_);
lean_dec(v_i_3179_);
v___x_3216_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_curryProj___closed__1, &l_Lean_Meta_ArgsPacker_curryProj___closed__1_once, _init_l_Lean_Meta_ArgsPacker_curryProj___closed__1);
v___x_3217_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_3216_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_);
v_a_3218_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3225_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3225_ == 0)
{
v___x_3220_ = v___x_3217_;
v_isShared_3221_ = v_isSharedCheck_3225_;
goto v_resetjp_3219_;
}
else
{
lean_inc(v_a_3218_);
lean_dec(v___x_3217_);
v___x_3220_ = lean_box(0);
v_isShared_3221_ = v_isSharedCheck_3225_;
goto v_resetjp_3219_;
}
v_resetjp_3219_:
{
lean_object* v___x_3223_; 
if (v_isShared_3221_ == 0)
{
v___x_3223_ = v___x_3220_;
goto v_reusejp_3222_;
}
else
{
lean_object* v_reuseFailAlloc_3224_; 
v_reuseFailAlloc_3224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3224_, 0, v_a_3218_);
v___x_3223_ = v_reuseFailAlloc_3224_;
goto v_reusejp_3222_;
}
v_reusejp_3222_:
{
return v___x_3223_;
}
}
}
else
{
v___y_3193_ = v___f_3213_;
v___y_3194_ = v_a_3212_;
v___y_3195_ = v___y_3206_;
v___y_3196_ = v___y_3207_;
v___y_3197_ = v___y_3208_;
v___y_3198_ = v___y_3209_;
goto v___jp_3192_;
}
}
else
{
lean_object* v_a_3226_; lean_object* v___x_3228_; uint8_t v_isShared_3229_; uint8_t v_isSharedCheck_3233_; 
lean_dec_ref(v___x_3210_);
lean_dec(v_a_3191_);
lean_dec(v_i_3179_);
lean_dec_ref(v_e_3178_);
v_a_3226_ = lean_ctor_get(v___x_3211_, 0);
v_isSharedCheck_3233_ = !lean_is_exclusive(v___x_3211_);
if (v_isSharedCheck_3233_ == 0)
{
v___x_3228_ = v___x_3211_;
v_isShared_3229_ = v_isSharedCheck_3233_;
goto v_resetjp_3227_;
}
else
{
lean_inc(v_a_3226_);
lean_dec(v___x_3211_);
v___x_3228_ = lean_box(0);
v_isShared_3229_ = v_isSharedCheck_3233_;
goto v_resetjp_3227_;
}
v_resetjp_3227_:
{
lean_object* v___x_3231_; 
if (v_isShared_3229_ == 0)
{
v___x_3231_ = v___x_3228_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3232_; 
v_reuseFailAlloc_3232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3232_, 0, v_a_3226_);
v___x_3231_ = v_reuseFailAlloc_3232_;
goto v_reusejp_3230_;
}
v_reusejp_3230_:
{
return v___x_3231_;
}
}
}
}
}
else
{
lean_dec(v_i_3179_);
lean_dec_ref(v_e_3178_);
return v___x_3190_;
}
}
else
{
lean_dec(v_i_3179_);
lean_dec_ref(v_e_3178_);
return v___x_3188_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryProj___boxed(lean_object* v_argsPacker_3245_, lean_object* v_e_3246_, lean_object* v_i_3247_, lean_object* v_a_3248_, lean_object* v_a_3249_, lean_object* v_a_3250_, lean_object* v_a_3251_, lean_object* v_a_3252_){
_start:
{
lean_object* v_res_3253_; 
v_res_3253_ = l_Lean_Meta_ArgsPacker_curryProj(v_argsPacker_3245_, v_e_3246_, v_i_3247_, v_a_3248_, v_a_3249_, v_a_3250_, v_a_3251_);
lean_dec(v_a_3251_);
lean_dec_ref(v_a_3250_);
lean_dec(v_a_3249_);
lean_dec_ref(v_a_3248_);
lean_dec_ref(v_argsPacker_3245_);
return v_res_3253_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_curryType_spec__0(lean_object* v_as_3254_, lean_object* v_bs_3255_, lean_object* v_i_3256_, lean_object* v_cs_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_){
_start:
{
lean_object* v___x_3263_; uint8_t v___x_3264_; 
v___x_3263_ = lean_array_get_size(v_as_3254_);
v___x_3264_ = lean_nat_dec_lt(v_i_3256_, v___x_3263_);
if (v___x_3264_ == 0)
{
lean_object* v___x_3265_; 
lean_dec(v_i_3256_);
v___x_3265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3265_, 0, v_cs_3257_);
return v___x_3265_;
}
else
{
lean_object* v___x_3266_; uint8_t v___x_3267_; 
v___x_3266_ = lean_array_get_size(v_bs_3255_);
v___x_3267_ = lean_nat_dec_lt(v_i_3256_, v___x_3266_);
if (v___x_3267_ == 0)
{
lean_object* v___x_3268_; 
lean_dec(v_i_3256_);
v___x_3268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3268_, 0, v_cs_3257_);
return v___x_3268_;
}
else
{
lean_object* v_a_3269_; lean_object* v_b_3270_; lean_object* v___x_3271_; 
v_a_3269_ = lean_array_fget_borrowed(v_as_3254_, v_i_3256_);
v_b_3270_ = lean_array_fget_borrowed(v_bs_3255_, v_i_3256_);
lean_inc(v_b_3270_);
lean_inc(v_a_3269_);
v___x_3271_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_curryType(v_a_3269_, v_b_3270_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_);
if (lean_obj_tag(v___x_3271_) == 0)
{
lean_object* v_a_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; 
v_a_3272_ = lean_ctor_get(v___x_3271_, 0);
lean_inc(v_a_3272_);
lean_dec_ref_known(v___x_3271_, 1);
v___x_3273_ = lean_unsigned_to_nat(1u);
v___x_3274_ = lean_nat_add(v_i_3256_, v___x_3273_);
lean_dec(v_i_3256_);
v___x_3275_ = lean_array_push(v_cs_3257_, v_a_3272_);
v_i_3256_ = v___x_3274_;
v_cs_3257_ = v___x_3275_;
goto _start;
}
else
{
lean_object* v_a_3277_; lean_object* v___x_3279_; uint8_t v_isShared_3280_; uint8_t v_isSharedCheck_3284_; 
lean_dec_ref(v_cs_3257_);
lean_dec(v_i_3256_);
v_a_3277_ = lean_ctor_get(v___x_3271_, 0);
v_isSharedCheck_3284_ = !lean_is_exclusive(v___x_3271_);
if (v_isSharedCheck_3284_ == 0)
{
v___x_3279_ = v___x_3271_;
v_isShared_3280_ = v_isSharedCheck_3284_;
goto v_resetjp_3278_;
}
else
{
lean_inc(v_a_3277_);
lean_dec(v___x_3271_);
v___x_3279_ = lean_box(0);
v_isShared_3280_ = v_isSharedCheck_3284_;
goto v_resetjp_3278_;
}
v_resetjp_3278_:
{
lean_object* v___x_3282_; 
if (v_isShared_3280_ == 0)
{
v___x_3282_ = v___x_3279_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3283_; 
v_reuseFailAlloc_3283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3283_, 0, v_a_3277_);
v___x_3282_ = v_reuseFailAlloc_3283_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
return v___x_3282_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_curryType_spec__0___boxed(lean_object* v_as_3285_, lean_object* v_bs_3286_, lean_object* v_i_3287_, lean_object* v_cs_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_){
_start:
{
lean_object* v_res_3294_; 
v_res_3294_ = l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_curryType_spec__0(v_as_3285_, v_bs_3286_, v_i_3287_, v_cs_3288_, v___y_3289_, v___y_3290_, v___y_3291_, v___y_3292_);
lean_dec(v___y_3292_);
lean_dec_ref(v___y_3291_);
lean_dec(v___y_3290_);
lean_dec_ref(v___y_3289_);
lean_dec_ref(v_bs_3286_);
lean_dec_ref(v_as_3285_);
return v_res_3294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryType(lean_object* v_argsPacker_3295_, lean_object* v_t_3296_, lean_object* v_a_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_, lean_object* v_a_3300_){
_start:
{
lean_object* v___x_3302_; lean_object* v___x_3303_; 
v___x_3302_ = lean_array_get_size(v_argsPacker_3295_);
v___x_3303_ = l_Lean_Meta_ArgsPacker_Mutual_curryType(v___x_3302_, v_t_3296_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_);
if (lean_obj_tag(v___x_3303_) == 0)
{
lean_object* v_a_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; 
v_a_3304_ = lean_ctor_get(v___x_3303_, 0);
lean_inc(v_a_3304_);
lean_dec_ref_known(v___x_3303_, 1);
v___x_3305_ = lean_unsigned_to_nat(0u);
v___x_3306_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0));
v___x_3307_ = l_Array_zipWithMAux___at___00Lean_Meta_ArgsPacker_curryType_spec__0(v_argsPacker_3295_, v_a_3304_, v___x_3305_, v___x_3306_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_);
lean_dec(v_a_3304_);
return v___x_3307_;
}
else
{
return v___x_3303_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryType___boxed(lean_object* v_argsPacker_3308_, lean_object* v_t_3309_, lean_object* v_a_3310_, lean_object* v_a_3311_, lean_object* v_a_3312_, lean_object* v_a_3313_, lean_object* v_a_3314_){
_start:
{
lean_object* v_res_3315_; 
v_res_3315_ = l_Lean_Meta_ArgsPacker_curryType(v_argsPacker_3308_, v_t_3309_, v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_);
lean_dec(v_a_3313_);
lean_dec_ref(v_a_3312_);
lean_dec(v_a_3311_);
lean_dec_ref(v_a_3310_);
lean_dec_ref(v_argsPacker_3308_);
return v_res_3315_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0___redArg(lean_object* v_upperBound_3316_, lean_object* v_argsPacker_3317_, lean_object* v_e_3318_, lean_object* v_a_3319_, lean_object* v_b_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_){
_start:
{
uint8_t v___x_3326_; 
v___x_3326_ = lean_nat_dec_lt(v_a_3319_, v_upperBound_3316_);
if (v___x_3326_ == 0)
{
lean_object* v___x_3327_; 
lean_dec(v_a_3319_);
lean_dec_ref(v_e_3318_);
v___x_3327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3327_, 0, v_b_3320_);
return v___x_3327_;
}
else
{
lean_object* v___x_3328_; 
lean_inc(v_a_3319_);
lean_inc_ref(v_e_3318_);
v___x_3328_ = l_Lean_Meta_ArgsPacker_curryProj(v_argsPacker_3317_, v_e_3318_, v_a_3319_, v___y_3321_, v___y_3322_, v___y_3323_, v___y_3324_);
if (lean_obj_tag(v___x_3328_) == 0)
{
lean_object* v_a_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; 
v_a_3329_ = lean_ctor_get(v___x_3328_, 0);
lean_inc(v_a_3329_);
lean_dec_ref_known(v___x_3328_, 1);
v___x_3330_ = lean_array_push(v_b_3320_, v_a_3329_);
v___x_3331_ = lean_unsigned_to_nat(1u);
v___x_3332_ = lean_nat_add(v_a_3319_, v___x_3331_);
lean_dec(v_a_3319_);
v_a_3319_ = v___x_3332_;
v_b_3320_ = v___x_3330_;
goto _start;
}
else
{
lean_object* v_a_3334_; lean_object* v___x_3336_; uint8_t v_isShared_3337_; uint8_t v_isSharedCheck_3341_; 
lean_dec_ref(v_b_3320_);
lean_dec(v_a_3319_);
lean_dec_ref(v_e_3318_);
v_a_3334_ = lean_ctor_get(v___x_3328_, 0);
v_isSharedCheck_3341_ = !lean_is_exclusive(v___x_3328_);
if (v_isSharedCheck_3341_ == 0)
{
v___x_3336_ = v___x_3328_;
v_isShared_3337_ = v_isSharedCheck_3341_;
goto v_resetjp_3335_;
}
else
{
lean_inc(v_a_3334_);
lean_dec(v___x_3328_);
v___x_3336_ = lean_box(0);
v_isShared_3337_ = v_isSharedCheck_3341_;
goto v_resetjp_3335_;
}
v_resetjp_3335_:
{
lean_object* v___x_3339_; 
if (v_isShared_3337_ == 0)
{
v___x_3339_ = v___x_3336_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3340_; 
v_reuseFailAlloc_3340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3340_, 0, v_a_3334_);
v___x_3339_ = v_reuseFailAlloc_3340_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
return v___x_3339_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0___redArg___boxed(lean_object* v_upperBound_3342_, lean_object* v_argsPacker_3343_, lean_object* v_e_3344_, lean_object* v_a_3345_, lean_object* v_b_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_){
_start:
{
lean_object* v_res_3352_; 
v_res_3352_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0___redArg(v_upperBound_3342_, v_argsPacker_3343_, v_e_3344_, v_a_3345_, v_b_3346_, v___y_3347_, v___y_3348_, v___y_3349_, v___y_3350_);
lean_dec(v___y_3350_);
lean_dec_ref(v___y_3349_);
lean_dec(v___y_3348_);
lean_dec_ref(v___y_3347_);
lean_dec_ref(v_argsPacker_3343_);
lean_dec(v_upperBound_3342_);
return v_res_3352_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_curry___closed__0(void){
_start:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; 
v___x_3353_ = lean_unsigned_to_nat(0u);
v___x_3354_ = l_Lean_Level_ofNat(v___x_3353_);
return v___x_3354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curry(lean_object* v_argsPacker_3355_, lean_object* v_e_3356_, lean_object* v_a_3357_, lean_object* v_a_3358_, lean_object* v_a_3359_, lean_object* v_a_3360_){
_start:
{
lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v_es_3364_; lean_object* v___x_3365_; 
v___x_3362_ = lean_array_get_size(v_argsPacker_3355_);
v___x_3363_ = lean_unsigned_to_nat(0u);
v_es_3364_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0));
v___x_3365_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0___redArg(v___x_3362_, v_argsPacker_3355_, v_e_3356_, v___x_3363_, v_es_3364_, v_a_3357_, v_a_3358_, v_a_3359_, v_a_3360_);
if (lean_obj_tag(v___x_3365_) == 0)
{
lean_object* v_a_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; 
v_a_3366_ = lean_ctor_get(v___x_3365_, 0);
lean_inc(v_a_3366_);
lean_dec_ref_known(v___x_3365_, 1);
v___x_3367_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_curry___closed__0, &l_Lean_Meta_ArgsPacker_curry___closed__0_once, _init_l_Lean_Meta_ArgsPacker_curry___closed__0);
v___x_3368_ = l_Lean_Meta_PProdN_mk(v___x_3367_, v_a_3366_, v_a_3357_, v_a_3358_, v_a_3359_, v_a_3360_);
return v___x_3368_;
}
else
{
lean_object* v_a_3369_; lean_object* v___x_3371_; uint8_t v_isShared_3372_; uint8_t v_isSharedCheck_3376_; 
v_a_3369_ = lean_ctor_get(v___x_3365_, 0);
v_isSharedCheck_3376_ = !lean_is_exclusive(v___x_3365_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3371_ = v___x_3365_;
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
else
{
lean_inc(v_a_3369_);
lean_dec(v___x_3365_);
v___x_3371_ = lean_box(0);
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
v_resetjp_3370_:
{
lean_object* v___x_3374_; 
if (v_isShared_3372_ == 0)
{
v___x_3374_ = v___x_3371_;
goto v_reusejp_3373_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v_a_3369_);
v___x_3374_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
return v___x_3374_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curry___boxed(lean_object* v_argsPacker_3377_, lean_object* v_e_3378_, lean_object* v_a_3379_, lean_object* v_a_3380_, lean_object* v_a_3381_, lean_object* v_a_3382_, lean_object* v_a_3383_){
_start:
{
lean_object* v_res_3384_; 
v_res_3384_ = l_Lean_Meta_ArgsPacker_curry(v_argsPacker_3377_, v_e_3378_, v_a_3379_, v_a_3380_, v_a_3381_, v_a_3382_);
lean_dec(v_a_3382_);
lean_dec_ref(v_a_3381_);
lean_dec(v_a_3380_);
lean_dec_ref(v_a_3379_);
lean_dec_ref(v_argsPacker_3377_);
return v_res_3384_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0(lean_object* v_upperBound_3385_, lean_object* v_argsPacker_3386_, lean_object* v_e_3387_, lean_object* v_inst_3388_, lean_object* v_R_3389_, lean_object* v_a_3390_, lean_object* v_b_3391_, lean_object* v_c_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_){
_start:
{
lean_object* v___x_3398_; 
v___x_3398_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0___redArg(v_upperBound_3385_, v_argsPacker_3386_, v_e_3387_, v_a_3390_, v_b_3391_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_);
return v___x_3398_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0___boxed(lean_object* v_upperBound_3399_, lean_object* v_argsPacker_3400_, lean_object* v_e_3401_, lean_object* v_inst_3402_, lean_object* v_R_3403_, lean_object* v_a_3404_, lean_object* v_b_3405_, lean_object* v_c_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_){
_start:
{
lean_object* v_res_3412_; 
v_res_3412_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_ArgsPacker_curry_spec__0(v_upperBound_3399_, v_argsPacker_3400_, v_e_3401_, v_inst_3402_, v_R_3403_, v_a_3404_, v_b_3405_, v_c_3406_, v___y_3407_, v___y_3408_, v___y_3409_, v___y_3410_);
lean_dec(v___y_3410_);
lean_dec_ref(v___y_3409_);
lean_dec(v___y_3408_);
lean_dec_ref(v___y_3407_);
lean_dec_ref(v_argsPacker_3400_);
lean_dec(v_upperBound_3399_);
return v_res_3412_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg___lam__0___boxed(lean_object* v_a_3413_, lean_object* v_argsPacker_3414_, lean_object* v_name_3415_, lean_object* v_k_3416_, lean_object* v_tail_3417_, lean_object* v_x_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_){
_start:
{
lean_object* v_res_3424_; 
v_res_3424_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg___lam__0(v_a_3413_, v_argsPacker_3414_, v_name_3415_, v_k_3416_, v_tail_3417_, v_x_3418_, v___y_3419_, v___y_3420_, v___y_3421_, v___y_3422_);
lean_dec(v___y_3422_);
lean_dec_ref(v___y_3421_);
lean_dec(v___y_3420_);
lean_dec_ref(v___y_3419_);
return v_res_3424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg(lean_object* v_argsPacker_3425_, lean_object* v_name_3426_, lean_object* v_k_3427_, lean_object* v_a_3428_, lean_object* v_a_3429_, lean_object* v_a_3430_, lean_object* v_a_3431_, lean_object* v_a_3432_, lean_object* v_a_3433_){
_start:
{
if (lean_obj_tag(v_a_3428_) == 0)
{
lean_object* v___x_3435_; 
lean_dec(v_name_3426_);
lean_dec_ref(v_argsPacker_3425_);
lean_inc(v_a_3433_);
lean_inc_ref(v_a_3432_);
lean_inc(v_a_3431_);
lean_inc_ref(v_a_3430_);
v___x_3435_ = lean_apply_6(v_k_3427_, v_a_3429_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_, lean_box(0));
return v___x_3435_;
}
else
{
lean_object* v_head_3436_; lean_object* v_tail_3437_; lean_object* v___f_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; uint8_t v___x_3441_; 
v_head_3436_ = lean_ctor_get(v_a_3428_, 0);
lean_inc(v_head_3436_);
v_tail_3437_ = lean_ctor_get(v_a_3428_, 1);
lean_inc(v_tail_3437_);
lean_dec_ref_known(v_a_3428_, 2);
lean_inc(v_name_3426_);
lean_inc_ref(v_argsPacker_3425_);
lean_inc_ref(v_a_3429_);
v___f_3438_ = lean_alloc_closure((void*)(l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_3438_, 0, v_a_3429_);
lean_closure_set(v___f_3438_, 1, v_argsPacker_3425_);
lean_closure_set(v___f_3438_, 2, v_name_3426_);
lean_closure_set(v___f_3438_, 3, v_k_3427_);
lean_closure_set(v___f_3438_, 4, v_tail_3437_);
v___x_3439_ = lean_array_get_size(v_argsPacker_3425_);
lean_dec_ref(v_argsPacker_3425_);
v___x_3440_ = lean_unsigned_to_nat(1u);
v___x_3441_ = lean_nat_dec_eq(v___x_3439_, v___x_3440_);
if (v___x_3441_ == 0)
{
uint8_t v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; 
v___x_3442_ = 1;
v___x_3443_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3426_, v___x_3442_);
v___x_3444_ = lean_array_get_size(v_a_3429_);
lean_dec_ref(v_a_3429_);
v___x_3445_ = lean_nat_add(v___x_3444_, v___x_3440_);
v___x_3446_ = l_Nat_reprFast(v___x_3445_);
v___x_3447_ = lean_string_append(v___x_3443_, v___x_3446_);
lean_dec_ref(v___x_3446_);
v___x_3448_ = lean_box(0);
v___x_3449_ = l_Lean_Name_str___override(v___x_3448_, v___x_3447_);
v___x_3450_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v___x_3449_, v_head_3436_, v___f_3438_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_);
return v___x_3450_;
}
else
{
lean_object* v___x_3451_; 
lean_dec_ref(v_a_3429_);
v___x_3451_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_ArgsPacker_Unary_uncurryType_spec__1___redArg(v_name_3426_, v_head_3436_, v___f_3438_, v_a_3430_, v_a_3431_, v_a_3432_, v_a_3433_);
return v___x_3451_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg___lam__0(lean_object* v_a_3452_, lean_object* v_argsPacker_3453_, lean_object* v_name_3454_, lean_object* v_k_3455_, lean_object* v_tail_3456_, lean_object* v_x_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_){
_start:
{
lean_object* v___x_3463_; lean_object* v___x_3464_; 
v___x_3463_ = lean_array_push(v_a_3452_, v_x_3457_);
v___x_3464_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg(v_argsPacker_3453_, v_name_3454_, v_k_3455_, v_tail_3456_, v___x_3463_, v___y_3458_, v___y_3459_, v___y_3460_, v___y_3461_);
return v___x_3464_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg___boxed(lean_object* v_argsPacker_3465_, lean_object* v_name_3466_, lean_object* v_k_3467_, lean_object* v_a_3468_, lean_object* v_a_3469_, lean_object* v_a_3470_, lean_object* v_a_3471_, lean_object* v_a_3472_, lean_object* v_a_3473_, lean_object* v_a_3474_){
_start:
{
lean_object* v_res_3475_; 
v_res_3475_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg(v_argsPacker_3465_, v_name_3466_, v_k_3467_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_, v_a_3472_, v_a_3473_);
lean_dec(v_a_3473_);
lean_dec_ref(v_a_3472_);
lean_dec(v_a_3471_);
lean_dec_ref(v_a_3470_);
return v_res_3475_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go(lean_object* v_00_u03b1_3476_, lean_object* v_argsPacker_3477_, lean_object* v_name_3478_, lean_object* v_k_3479_, lean_object* v_a_3480_, lean_object* v_a_3481_, lean_object* v_a_3482_, lean_object* v_a_3483_, lean_object* v_a_3484_, lean_object* v_a_3485_){
_start:
{
lean_object* v___x_3487_; 
v___x_3487_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg(v_argsPacker_3477_, v_name_3478_, v_k_3479_, v_a_3480_, v_a_3481_, v_a_3482_, v_a_3483_, v_a_3484_, v_a_3485_);
return v___x_3487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___boxed(lean_object* v_00_u03b1_3488_, lean_object* v_argsPacker_3489_, lean_object* v_name_3490_, lean_object* v_k_3491_, lean_object* v_a_3492_, lean_object* v_a_3493_, lean_object* v_a_3494_, lean_object* v_a_3495_, lean_object* v_a_3496_, lean_object* v_a_3497_, lean_object* v_a_3498_){
_start:
{
lean_object* v_res_3499_; 
v_res_3499_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go(v_00_u03b1_3488_, v_argsPacker_3489_, v_name_3490_, v_k_3491_, v_a_3492_, v_a_3493_, v_a_3494_, v_a_3495_, v_a_3496_, v_a_3497_);
lean_dec(v_a_3497_);
lean_dec_ref(v_a_3496_);
lean_dec(v_a_3495_);
lean_dec_ref(v_a_3494_);
return v_res_3499_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl___redArg(lean_object* v_argsPacker_3500_, lean_object* v_name_3501_, lean_object* v_type_3502_, lean_object* v_k_3503_, lean_object* v_a_3504_, lean_object* v_a_3505_, lean_object* v_a_3506_, lean_object* v_a_3507_){
_start:
{
lean_object* v___x_3509_; 
v___x_3509_ = l_Lean_Meta_ArgsPacker_curryType(v_argsPacker_3500_, v_type_3502_, v_a_3504_, v_a_3505_, v_a_3506_, v_a_3507_);
if (lean_obj_tag(v___x_3509_) == 0)
{
lean_object* v_a_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; 
v_a_3510_ = lean_ctor_get(v___x_3509_, 0);
lean_inc(v_a_3510_);
lean_dec_ref_known(v___x_3509_, 1);
v___x_3511_ = lean_array_to_list(v_a_3510_);
v___x_3512_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_Unary_unpack___closed__0));
v___x_3513_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl_go___redArg(v_argsPacker_3500_, v_name_3501_, v_k_3503_, v___x_3511_, v___x_3512_, v_a_3504_, v_a_3505_, v_a_3506_, v_a_3507_);
return v___x_3513_;
}
else
{
lean_object* v_a_3514_; lean_object* v___x_3516_; uint8_t v_isShared_3517_; uint8_t v_isSharedCheck_3521_; 
lean_dec_ref(v_k_3503_);
lean_dec(v_name_3501_);
lean_dec_ref(v_argsPacker_3500_);
v_a_3514_ = lean_ctor_get(v___x_3509_, 0);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3509_);
if (v_isSharedCheck_3521_ == 0)
{
v___x_3516_ = v___x_3509_;
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
else
{
lean_inc(v_a_3514_);
lean_dec(v___x_3509_);
v___x_3516_ = lean_box(0);
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
v_resetjp_3515_:
{
lean_object* v___x_3519_; 
if (v_isShared_3517_ == 0)
{
v___x_3519_ = v___x_3516_;
goto v_reusejp_3518_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v_a_3514_);
v___x_3519_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3518_;
}
v_reusejp_3518_:
{
return v___x_3519_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl___redArg___boxed(lean_object* v_argsPacker_3522_, lean_object* v_name_3523_, lean_object* v_type_3524_, lean_object* v_k_3525_, lean_object* v_a_3526_, lean_object* v_a_3527_, lean_object* v_a_3528_, lean_object* v_a_3529_, lean_object* v_a_3530_){
_start:
{
lean_object* v_res_3531_; 
v_res_3531_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl___redArg(v_argsPacker_3522_, v_name_3523_, v_type_3524_, v_k_3525_, v_a_3526_, v_a_3527_, v_a_3528_, v_a_3529_);
lean_dec(v_a_3529_);
lean_dec_ref(v_a_3528_);
lean_dec(v_a_3527_);
lean_dec_ref(v_a_3526_);
return v_res_3531_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl(lean_object* v_00_u03b1_3532_, lean_object* v_argsPacker_3533_, lean_object* v_name_3534_, lean_object* v_type_3535_, lean_object* v_k_3536_, lean_object* v_a_3537_, lean_object* v_a_3538_, lean_object* v_a_3539_, lean_object* v_a_3540_){
_start:
{
lean_object* v___x_3542_; 
v___x_3542_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl___redArg(v_argsPacker_3533_, v_name_3534_, v_type_3535_, v_k_3536_, v_a_3537_, v_a_3538_, v_a_3539_, v_a_3540_);
return v___x_3542_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl___boxed(lean_object* v_00_u03b1_3543_, lean_object* v_argsPacker_3544_, lean_object* v_name_3545_, lean_object* v_type_3546_, lean_object* v_k_3547_, lean_object* v_a_3548_, lean_object* v_a_3549_, lean_object* v_a_3550_, lean_object* v_a_3551_, lean_object* v_a_3552_){
_start:
{
lean_object* v_res_3553_; 
v_res_3553_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl(v_00_u03b1_3543_, v_argsPacker_3544_, v_name_3545_, v_type_3546_, v_k_3547_, v_a_3548_, v_a_3549_, v_a_3550_, v_a_3551_);
lean_dec(v_a_3551_);
lean_dec_ref(v_a_3550_);
lean_dec(v_a_3549_);
lean_dec_ref(v_a_3548_);
return v_res_3553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___lam__0(lean_object* v_argsPacker_3554_, lean_object* v_packedMotiveType_3555_, lean_object* v_type_3556_, lean_object* v_value_3557_, lean_object* v_k_3558_, lean_object* v_motives_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_){
_start:
{
lean_object* v___x_3565_; 
v___x_3565_ = l_Lean_Meta_ArgsPacker_uncurryWithType(v_argsPacker_3554_, v_packedMotiveType_3555_, v_motives_3559_, v___y_3560_, v___y_3561_, v___y_3562_, v___y_3563_);
if (lean_obj_tag(v___x_3565_) == 0)
{
lean_object* v_a_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; 
v_a_3566_ = lean_ctor_get(v___x_3565_, 0);
lean_inc_n(v_a_3566_, 2);
lean_dec_ref_known(v___x_3565_, 1);
v___x_3567_ = lean_unsigned_to_nat(1u);
v___x_3568_ = lean_mk_empty_array_with_capacity(v___x_3567_);
v___x_3569_ = lean_array_push(v___x_3568_, v_a_3566_);
v___x_3570_ = l_Lean_Meta_instantiateForall(v_type_3556_, v___x_3569_, v___y_3560_, v___y_3561_, v___y_3562_, v___y_3563_);
lean_dec_ref(v___x_3569_);
if (lean_obj_tag(v___x_3570_) == 0)
{
lean_object* v_a_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; 
v_a_3571_ = lean_ctor_get(v___x_3570_, 0);
lean_inc(v_a_3571_);
lean_dec_ref_known(v___x_3570_, 1);
v___x_3572_ = l_Lean_Expr_app___override(v_value_3557_, v_a_3566_);
lean_inc(v___y_3563_);
lean_inc_ref(v___y_3562_);
lean_inc(v___y_3561_);
lean_inc_ref(v___y_3560_);
v___x_3573_ = lean_apply_8(v_k_3558_, v_motives_3559_, v___x_3572_, v_a_3571_, v___y_3560_, v___y_3561_, v___y_3562_, v___y_3563_, lean_box(0));
return v___x_3573_;
}
else
{
lean_object* v_a_3574_; lean_object* v___x_3576_; uint8_t v_isShared_3577_; uint8_t v_isSharedCheck_3581_; 
lean_dec(v_a_3566_);
lean_dec_ref(v_motives_3559_);
lean_dec_ref(v_k_3558_);
lean_dec_ref(v_value_3557_);
v_a_3574_ = lean_ctor_get(v___x_3570_, 0);
v_isSharedCheck_3581_ = !lean_is_exclusive(v___x_3570_);
if (v_isSharedCheck_3581_ == 0)
{
v___x_3576_ = v___x_3570_;
v_isShared_3577_ = v_isSharedCheck_3581_;
goto v_resetjp_3575_;
}
else
{
lean_inc(v_a_3574_);
lean_dec(v___x_3570_);
v___x_3576_ = lean_box(0);
v_isShared_3577_ = v_isSharedCheck_3581_;
goto v_resetjp_3575_;
}
v_resetjp_3575_:
{
lean_object* v___x_3579_; 
if (v_isShared_3577_ == 0)
{
v___x_3579_ = v___x_3576_;
goto v_reusejp_3578_;
}
else
{
lean_object* v_reuseFailAlloc_3580_; 
v_reuseFailAlloc_3580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3580_, 0, v_a_3574_);
v___x_3579_ = v_reuseFailAlloc_3580_;
goto v_reusejp_3578_;
}
v_reusejp_3578_:
{
return v___x_3579_;
}
}
}
}
else
{
lean_object* v_a_3582_; lean_object* v___x_3584_; uint8_t v_isShared_3585_; uint8_t v_isSharedCheck_3589_; 
lean_dec_ref(v_motives_3559_);
lean_dec_ref(v_k_3558_);
lean_dec_ref(v_value_3557_);
lean_dec_ref(v_type_3556_);
v_a_3582_ = lean_ctor_get(v___x_3565_, 0);
v_isSharedCheck_3589_ = !lean_is_exclusive(v___x_3565_);
if (v_isSharedCheck_3589_ == 0)
{
v___x_3584_ = v___x_3565_;
v_isShared_3585_ = v_isSharedCheck_3589_;
goto v_resetjp_3583_;
}
else
{
lean_inc(v_a_3582_);
lean_dec(v___x_3565_);
v___x_3584_ = lean_box(0);
v_isShared_3585_ = v_isSharedCheck_3589_;
goto v_resetjp_3583_;
}
v_resetjp_3583_:
{
lean_object* v___x_3587_; 
if (v_isShared_3585_ == 0)
{
v___x_3587_ = v___x_3584_;
goto v_reusejp_3586_;
}
else
{
lean_object* v_reuseFailAlloc_3588_; 
v_reuseFailAlloc_3588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3588_, 0, v_a_3582_);
v___x_3587_ = v_reuseFailAlloc_3588_;
goto v_reusejp_3586_;
}
v_reusejp_3586_:
{
return v___x_3587_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___lam__0___boxed(lean_object* v_argsPacker_3590_, lean_object* v_packedMotiveType_3591_, lean_object* v_type_3592_, lean_object* v_value_3593_, lean_object* v_k_3594_, lean_object* v_motives_3595_, lean_object* v___y_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_){
_start:
{
lean_object* v_res_3601_; 
v_res_3601_ = l_Lean_Meta_ArgsPacker_curryParam___redArg___lam__0(v_argsPacker_3590_, v_packedMotiveType_3591_, v_type_3592_, v_value_3593_, v_k_3594_, v_motives_3595_, v___y_3596_, v___y_3597_, v___y_3598_, v___y_3599_);
lean_dec(v___y_3599_);
lean_dec_ref(v___y_3598_);
lean_dec(v___y_3597_);
lean_dec_ref(v___y_3596_);
lean_dec_ref(v_argsPacker_3590_);
return v_res_3601_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__1(void){
_start:
{
lean_object* v___x_3603_; lean_object* v___x_3604_; 
v___x_3603_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__0));
v___x_3604_ = l_Lean_stringToMessageData(v___x_3603_);
return v___x_3604_;
}
}
static lean_object* _init_l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__3(void){
_start:
{
lean_object* v___x_3606_; lean_object* v___x_3607_; 
v___x_3606_ = ((lean_object*)(l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__2));
v___x_3607_ = l_Lean_stringToMessageData(v___x_3606_);
return v___x_3607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg(lean_object* v_argsPacker_3608_, lean_object* v_value_3609_, lean_object* v_type_3610_, lean_object* v_k_3611_, lean_object* v_a_3612_, lean_object* v_a_3613_, lean_object* v_a_3614_, lean_object* v_a_3615_){
_start:
{
lean_object* v___y_3618_; lean_object* v___y_3619_; lean_object* v___y_3620_; lean_object* v___y_3621_; lean_object* v___y_3622_; lean_object* v___y_3623_; lean_object* v___y_3627_; lean_object* v___y_3628_; lean_object* v___y_3629_; lean_object* v___y_3630_; uint8_t v___x_3646_; 
v___x_3646_ = l_Lean_Expr_isForall(v_type_3610_);
if (v___x_3646_ == 0)
{
lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v_a_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3658_; 
lean_dec_ref(v_k_3611_);
lean_dec_ref(v_value_3609_);
lean_dec_ref(v_argsPacker_3608_);
v___x_3647_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__3, &l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__3_once, _init_l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__3);
v___x_3648_ = l_Lean_MessageData_ofExpr(v_type_3610_);
v___x_3649_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3649_, 0, v___x_3647_);
lean_ctor_set(v___x_3649_, 1, v___x_3648_);
v___x_3650_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_3649_, v_a_3612_, v_a_3613_, v_a_3614_, v_a_3615_);
v_a_3651_ = lean_ctor_get(v___x_3650_, 0);
v_isSharedCheck_3658_ = !lean_is_exclusive(v___x_3650_);
if (v_isSharedCheck_3658_ == 0)
{
v___x_3653_ = v___x_3650_;
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_a_3651_);
lean_dec(v___x_3650_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v___x_3656_; 
if (v_isShared_3654_ == 0)
{
v___x_3656_ = v___x_3653_;
goto v_reusejp_3655_;
}
else
{
lean_object* v_reuseFailAlloc_3657_; 
v_reuseFailAlloc_3657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3657_, 0, v_a_3651_);
v___x_3656_ = v_reuseFailAlloc_3657_;
goto v_reusejp_3655_;
}
v_reusejp_3655_:
{
return v___x_3656_;
}
}
}
else
{
v___y_3627_ = v_a_3612_;
v___y_3628_ = v_a_3613_;
v___y_3629_ = v_a_3614_;
v___y_3630_ = v_a_3615_;
goto v___jp_3626_;
}
v___jp_3617_:
{
lean_object* v___x_3624_; lean_object* v___x_3625_; 
v___x_3624_ = l_Lean_Expr_bindingName_x21(v_type_3610_);
lean_dec_ref(v_type_3610_);
v___x_3625_ = l___private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_withCurriedDecl___redArg(v_argsPacker_3608_, v___x_3624_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_);
return v___x_3625_;
}
v___jp_3626_:
{
lean_object* v_packedMotiveType_3631_; lean_object* v___f_3632_; uint8_t v___x_3633_; 
v_packedMotiveType_3631_ = l_Lean_Expr_bindingDomain_x21(v_type_3610_);
lean_inc_ref(v_type_3610_);
lean_inc_ref(v_packedMotiveType_3631_);
lean_inc_ref(v_argsPacker_3608_);
v___f_3632_ = lean_alloc_closure((void*)(l_Lean_Meta_ArgsPacker_curryParam___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_3632_, 0, v_argsPacker_3608_);
lean_closure_set(v___f_3632_, 1, v_packedMotiveType_3631_);
lean_closure_set(v___f_3632_, 2, v_type_3610_);
lean_closure_set(v___f_3632_, 3, v_value_3609_);
lean_closure_set(v___f_3632_, 4, v_k_3611_);
v___x_3633_ = l_Lean_Expr_isForall(v_packedMotiveType_3631_);
if (v___x_3633_ == 0)
{
lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v_a_3638_; lean_object* v___x_3640_; uint8_t v_isShared_3641_; uint8_t v_isSharedCheck_3645_; 
lean_dec_ref(v___f_3632_);
lean_dec_ref(v_type_3610_);
lean_dec_ref(v_argsPacker_3608_);
v___x_3634_ = lean_obj_once(&l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__1, &l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__1_once, _init_l_Lean_Meta_ArgsPacker_curryParam___redArg___closed__1);
v___x_3635_ = l_Lean_indentExpr(v_packedMotiveType_3631_);
v___x_3636_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3636_, 0, v___x_3634_);
lean_ctor_set(v___x_3636_, 1, v___x_3635_);
v___x_3637_ = l_Lean_throwError___at___00__private_Lean_Meta_ArgsPacker_0__Lean_Meta_ArgsPacker_Unary_casesOn_spec__0___redArg(v___x_3636_, v___y_3627_, v___y_3628_, v___y_3629_, v___y_3630_);
v_a_3638_ = lean_ctor_get(v___x_3637_, 0);
v_isSharedCheck_3645_ = !lean_is_exclusive(v___x_3637_);
if (v_isSharedCheck_3645_ == 0)
{
v___x_3640_ = v___x_3637_;
v_isShared_3641_ = v_isSharedCheck_3645_;
goto v_resetjp_3639_;
}
else
{
lean_inc(v_a_3638_);
lean_dec(v___x_3637_);
v___x_3640_ = lean_box(0);
v_isShared_3641_ = v_isSharedCheck_3645_;
goto v_resetjp_3639_;
}
v_resetjp_3639_:
{
lean_object* v___x_3643_; 
if (v_isShared_3641_ == 0)
{
v___x_3643_ = v___x_3640_;
goto v_reusejp_3642_;
}
else
{
lean_object* v_reuseFailAlloc_3644_; 
v_reuseFailAlloc_3644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3644_, 0, v_a_3638_);
v___x_3643_ = v_reuseFailAlloc_3644_;
goto v_reusejp_3642_;
}
v_reusejp_3642_:
{
return v___x_3643_;
}
}
}
else
{
v___y_3618_ = v_packedMotiveType_3631_;
v___y_3619_ = v___f_3632_;
v___y_3620_ = v___y_3627_;
v___y_3621_ = v___y_3628_;
v___y_3622_ = v___y_3629_;
v___y_3623_ = v___y_3630_;
goto v___jp_3617_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___redArg___boxed(lean_object* v_argsPacker_3659_, lean_object* v_value_3660_, lean_object* v_type_3661_, lean_object* v_k_3662_, lean_object* v_a_3663_, lean_object* v_a_3664_, lean_object* v_a_3665_, lean_object* v_a_3666_, lean_object* v_a_3667_){
_start:
{
lean_object* v_res_3668_; 
v_res_3668_ = l_Lean_Meta_ArgsPacker_curryParam___redArg(v_argsPacker_3659_, v_value_3660_, v_type_3661_, v_k_3662_, v_a_3663_, v_a_3664_, v_a_3665_, v_a_3666_);
lean_dec(v_a_3666_);
lean_dec_ref(v_a_3665_);
lean_dec(v_a_3664_);
lean_dec_ref(v_a_3663_);
return v_res_3668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam(lean_object* v_00_u03b1_3669_, lean_object* v_argsPacker_3670_, lean_object* v_value_3671_, lean_object* v_type_3672_, lean_object* v_k_3673_, lean_object* v_a_3674_, lean_object* v_a_3675_, lean_object* v_a_3676_, lean_object* v_a_3677_){
_start:
{
lean_object* v___x_3679_; 
v___x_3679_ = l_Lean_Meta_ArgsPacker_curryParam___redArg(v_argsPacker_3670_, v_value_3671_, v_type_3672_, v_k_3673_, v_a_3674_, v_a_3675_, v_a_3676_, v_a_3677_);
return v___x_3679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ArgsPacker_curryParam___boxed(lean_object* v_00_u03b1_3680_, lean_object* v_argsPacker_3681_, lean_object* v_value_3682_, lean_object* v_type_3683_, lean_object* v_k_3684_, lean_object* v_a_3685_, lean_object* v_a_3686_, lean_object* v_a_3687_, lean_object* v_a_3688_, lean_object* v_a_3689_){
_start:
{
lean_object* v_res_3690_; 
v_res_3690_ = l_Lean_Meta_ArgsPacker_curryParam(v_00_u03b1_3680_, v_argsPacker_3681_, v_value_3682_, v_type_3683_, v_k_3684_, v_a_3685_, v_a_3686_, v_a_3687_, v_a_3688_);
lean_dec(v_a_3688_);
lean_dec_ref(v_a_3687_);
lean_dec(v_a_3686_);
lean_dec_ref(v_a_3685_);
return v_res_3690_;
}
}
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_ArgsPacker_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_ArgsPacker(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ArgsPacker_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_ArgsPacker(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* initialize_Lean_Meta_ArgsPacker_Basic(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_ArgsPacker(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ArgsPacker_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ArgsPacker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_ArgsPacker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_ArgsPacker(builtin);
}
#ifdef __cplusplus
}
#endif
