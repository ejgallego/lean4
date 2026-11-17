// Lean compiler output
// Module: Lean.Meta.Sym.DSimp.Main
// Imports: public import Lean.Meta.Sym.DSimp.DSimpM import Lean.Meta.Sym.DSimp.DSimproc import Lean.Meta.Sym.DSimp.App import Lean.Meta.Sym.DSimp.Lambda import Lean.Meta.Sym.DSimp.Forall import Lean.Meta.Sym.DSimp.Let import Lean.Meta.Sym.AlphaShareBuilder import Lean.Meta.Sym.InstantiateMVarsS
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
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_dsimpAppArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_dsimpLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_dsimpForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_DSimp_dsimpLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_sym_dsimp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_Sym_instBEqExprPtr___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instHashableExprPtr___lam__0___boxed(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "unexpected kernel projection term during simplification"};
static const lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__1;
static const lean_string_object l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "\npre-process and fold them as projection applications"};
static const lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__3;
static const lean_ctor_object l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__4 = (const lean_object*)&l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__6 = (const lean_object*)&l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__5_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__6_value),LEAN_SCALAR_PTR_LITERAL(196, 237, 71, 156, 244, 3, 80, 55)}};
static const lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__7 = (const lean_object*)&l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_instBEqExprPtr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_instHashableExprPtr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "dsimp"};
static const lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "`dsimp` failed: maximum number of steps exceeded"};
static const lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___closed__2;
LEAN_EXPORT lean_object* lean_sym_dsimp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__1___redArg(lean_object* v_d_1_, lean_object* v_e_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_){
_start:
{
lean_object* v___y_11_; lean_object* v___x_14_; uint8_t v_debug_15_; 
v___x_14_ = lean_st_ref_get(v___y_4_);
v_debug_15_ = lean_ctor_get_uint8(v___x_14_, sizeof(void*)*13);
lean_dec(v___x_14_);
if (v_debug_15_ == 0)
{
v___y_11_ = v___y_4_;
goto v___jp_10_;
}
else
{
lean_object* v___x_16_; 
v___x_16_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_e_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_);
if (lean_obj_tag(v___x_16_) == 0)
{
lean_dec_ref_known(v___x_16_, 1);
v___y_11_ = v___y_4_;
goto v___jp_10_;
}
else
{
lean_object* v_a_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_24_; 
lean_dec_ref(v_e_2_);
lean_dec(v_d_1_);
v_a_17_ = lean_ctor_get(v___x_16_, 0);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_16_);
if (v_isSharedCheck_24_ == 0)
{
v___x_19_ = v___x_16_;
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_a_17_);
lean_dec(v___x_16_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_22_; 
if (v_isShared_20_ == 0)
{
v___x_22_ = v___x_19_;
goto v_reusejp_21_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_a_17_);
v___x_22_ = v_reuseFailAlloc_23_;
goto v_reusejp_21_;
}
v_reusejp_21_:
{
return v___x_22_;
}
}
}
}
v___jp_10_:
{
lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_12_ = l_Lean_Expr_mdata___override(v_d_1_, v_e_2_);
v___x_13_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_12_, v___y_11_);
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__1___redArg___boxed(lean_object* v_d_25_, lean_object* v_e_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__1___redArg(v_d_25_, v_e_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_, v___y_31_, v___y_32_);
lean_dec(v___y_32_);
lean_dec_ref(v___y_31_);
lean_dec(v___y_30_);
lean_dec_ref(v___y_29_);
lean_dec(v___y_28_);
lean_dec_ref(v___y_27_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__1(lean_object* v_d_35_, lean_object* v_e_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__1___redArg(v_d_35_, v_e_36_, v___y_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__1___boxed(lean_object* v_d_48_, lean_object* v_e_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__1(v_d_48_, v_e_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_);
lean_dec(v___y_58_);
lean_dec_ref(v___y_57_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
lean_dec(v___y_52_);
lean_dec_ref(v___y_51_);
lean_dec(v___y_50_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__2___redArg(lean_object* v_structName_61_, lean_object* v_idx_62_, lean_object* v_struct_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v___y_72_; lean_object* v___x_75_; uint8_t v_debug_76_; 
v___x_75_ = lean_st_ref_get(v___y_65_);
v_debug_76_ = lean_ctor_get_uint8(v___x_75_, sizeof(void*)*13);
lean_dec(v___x_75_);
if (v_debug_76_ == 0)
{
v___y_72_ = v___y_65_;
goto v___jp_71_;
}
else
{
lean_object* v___x_77_; 
v___x_77_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_struct_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_);
if (lean_obj_tag(v___x_77_) == 0)
{
lean_dec_ref_known(v___x_77_, 1);
v___y_72_ = v___y_65_;
goto v___jp_71_;
}
else
{
lean_object* v_a_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_85_; 
lean_dec_ref(v_struct_63_);
lean_dec(v_idx_62_);
lean_dec(v_structName_61_);
v_a_78_ = lean_ctor_get(v___x_77_, 0);
v_isSharedCheck_85_ = !lean_is_exclusive(v___x_77_);
if (v_isSharedCheck_85_ == 0)
{
v___x_80_ = v___x_77_;
v_isShared_81_ = v_isSharedCheck_85_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_a_78_);
lean_dec(v___x_77_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_85_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_83_; 
if (v_isShared_81_ == 0)
{
v___x_83_ = v___x_80_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v_a_78_);
v___x_83_ = v_reuseFailAlloc_84_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
return v___x_83_;
}
}
}
}
v___jp_71_:
{
lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_73_ = l_Lean_Expr_proj___override(v_structName_61_, v_idx_62_, v_struct_63_);
v___x_74_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_73_, v___y_72_);
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__2___redArg___boxed(lean_object* v_structName_86_, lean_object* v_idx_87_, lean_object* v_struct_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__2___redArg(v_structName_86_, v_idx_87_, v_struct_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_);
lean_dec(v___y_94_);
lean_dec_ref(v___y_93_);
lean_dec(v___y_92_);
lean_dec_ref(v___y_91_);
lean_dec(v___y_90_);
lean_dec_ref(v___y_89_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__2(lean_object* v_structName_97_, lean_object* v_idx_98_, lean_object* v_struct_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__2___redArg(v_structName_97_, v_idx_98_, v_struct_99_, v___y_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__2___boxed(lean_object* v_structName_111_, lean_object* v_idx_112_, lean_object* v_struct_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__2(v_structName_111_, v_idx_112_, v_struct_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_, v___y_121_, v___y_122_);
lean_dec(v___y_122_);
lean_dec_ref(v___y_121_);
lean_dec(v___y_120_);
lean_dec_ref(v___y_119_);
lean_dec(v___y_118_);
lean_dec_ref(v___y_117_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
lean_dec(v___y_114_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0_spec__0(lean_object* v_msgData_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_){
_start:
{
lean_object* v___x_131_; lean_object* v_env_132_; uint8_t v___x_133_; lean_object* v_env_134_; lean_object* v___x_135_; lean_object* v_toCold_136_; lean_object* v_mctx_137_; lean_object* v_lctx_138_; lean_object* v_options_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_131_ = lean_st_ref_get(v___y_129_);
v_env_132_ = lean_ctor_get(v___x_131_, 0);
lean_inc_ref(v_env_132_);
lean_dec(v___x_131_);
v___x_133_ = 0;
v_env_134_ = l_Lean_Environment_setRecordingDeps(v_env_132_, v___x_133_);
v___x_135_ = lean_st_ref_get(v___y_127_);
v_toCold_136_ = lean_ctor_get(v___y_128_, 0);
v_mctx_137_ = lean_ctor_get(v___x_135_, 0);
lean_inc_ref(v_mctx_137_);
lean_dec(v___x_135_);
v_lctx_138_ = lean_ctor_get(v___y_126_, 2);
v_options_139_ = lean_ctor_get(v_toCold_136_, 2);
lean_inc_ref(v_options_139_);
lean_inc_ref(v_lctx_138_);
v___x_140_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_140_, 0, v_env_134_);
lean_ctor_set(v___x_140_, 1, v_mctx_137_);
lean_ctor_set(v___x_140_, 2, v_lctx_138_);
lean_ctor_set(v___x_140_, 3, v_options_139_);
v___x_141_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_140_);
lean_ctor_set(v___x_141_, 1, v_msgData_125_);
v___x_142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0_spec__0___boxed(lean_object* v_msgData_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0_spec__0(v_msgData_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0___redArg(lean_object* v_msg_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_){
_start:
{
lean_object* v_ref_156_; lean_object* v___x_157_; lean_object* v_a_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_166_; 
v_ref_156_ = lean_ctor_get(v___y_153_, 2);
v___x_157_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0_spec__0(v_msg_150_, v___y_151_, v___y_152_, v___y_153_, v___y_154_);
v_a_158_ = lean_ctor_get(v___x_157_, 0);
v_isSharedCheck_166_ = !lean_is_exclusive(v___x_157_);
if (v_isSharedCheck_166_ == 0)
{
v___x_160_ = v___x_157_;
v_isShared_161_ = v_isSharedCheck_166_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_a_158_);
lean_dec(v___x_157_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_166_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_162_; lean_object* v___x_164_; 
lean_inc(v_ref_156_);
v___x_162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_162_, 0, v_ref_156_);
lean_ctor_set(v___x_162_, 1, v_a_158_);
if (v_isShared_161_ == 0)
{
lean_ctor_set_tag(v___x_160_, 1);
lean_ctor_set(v___x_160_, 0, v___x_162_);
v___x_164_ = v___x_160_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v___x_162_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
return v___x_164_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0___redArg___boxed(lean_object* v_msg_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0___redArg(v_msg_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
lean_dec(v___y_169_);
lean_dec_ref(v___y_168_);
return v_res_173_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__1(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = ((lean_object*)(l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__0));
v___x_176_ = l_Lean_stringToMessageData(v___x_175_);
return v___x_176_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__3(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = ((lean_object*)(l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__2));
v___x_179_ = l_Lean_stringToMessageData(v___x_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep(lean_object* v_e_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_){
_start:
{
lean_object* v___y_199_; lean_object* v___y_200_; lean_object* v___y_201_; lean_object* v___y_202_; lean_object* v___y_203_; lean_object* v___y_204_; lean_object* v___y_205_; lean_object* v___y_206_; lean_object* v___y_207_; lean_object* v_a_215_; 
switch(lean_obj_tag(v_e_187_))
{
case 2:
{
lean_object* v___x_219_; 
v___x_219_ = l_Lean_Meta_Sym_instantiateAssignedMVarHeadS_x3f(v_e_187_, v_a_191_, v_a_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_);
if (lean_obj_tag(v___x_219_) == 0)
{
lean_object* v_a_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_234_; 
v_a_220_ = lean_ctor_get(v___x_219_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_234_ == 0)
{
v___x_222_ = v___x_219_;
v_isShared_223_ = v_isSharedCheck_234_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_a_220_);
lean_dec(v___x_219_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_234_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
if (lean_obj_tag(v_a_220_) == 1)
{
lean_object* v_val_224_; uint8_t v___x_225_; lean_object* v___x_226_; lean_object* v___x_228_; 
v_val_224_ = lean_ctor_get(v_a_220_, 0);
lean_inc(v_val_224_);
lean_dec_ref_known(v_a_220_, 1);
v___x_225_ = 0;
v___x_226_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_226_, 0, v_val_224_);
lean_ctor_set_uint8(v___x_226_, sizeof(void*)*1, v___x_225_);
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 0, v___x_226_);
v___x_228_ = v___x_222_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v___x_226_);
v___x_228_ = v_reuseFailAlloc_229_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
return v___x_228_;
}
}
else
{
lean_object* v___x_230_; lean_object* v___x_232_; 
lean_dec(v_a_220_);
v___x_230_ = ((lean_object*)(l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__4));
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 0, v___x_230_);
v___x_232_ = v___x_222_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_242_; 
v_a_235_ = lean_ctor_get(v___x_219_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_242_ == 0)
{
v___x_237_ = v___x_219_;
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_a_235_);
lean_dec(v___x_219_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_240_; 
if (v_isShared_238_ == 0)
{
v___x_240_ = v___x_237_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_a_235_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
}
}
case 5:
{
lean_object* v___x_243_; 
v___x_243_ = l_Lean_Meta_Sym_DSimp_dsimpAppArgs(v_e_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_);
return v___x_243_;
}
case 6:
{
lean_object* v___x_244_; 
v___x_244_ = l_Lean_Meta_Sym_DSimp_dsimpLambda(v_e_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_);
return v___x_244_;
}
case 7:
{
lean_object* v___x_245_; 
v___x_245_ = l_Lean_Meta_Sym_DSimp_dsimpForall(v_e_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_);
return v___x_245_;
}
case 8:
{
lean_object* v___x_246_; 
v___x_246_ = l_Lean_Meta_Sym_DSimp_dsimpLet(v_e_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_);
return v___x_246_;
}
case 10:
{
lean_object* v_data_247_; lean_object* v_expr_248_; lean_object* v___x_249_; 
v_data_247_ = lean_ctor_get(v_e_187_, 0);
v_expr_248_ = lean_ctor_get(v_e_187_, 1);
lean_inc(v_a_196_);
lean_inc_ref(v_a_195_);
lean_inc(v_a_194_);
lean_inc_ref(v_a_193_);
lean_inc(v_a_192_);
lean_inc_ref(v_a_191_);
lean_inc(v_a_190_);
lean_inc_ref(v_a_189_);
lean_inc(v_a_188_);
lean_inc_ref(v_expr_248_);
v___x_249_ = lean_sym_dsimp(v_expr_248_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_);
if (lean_obj_tag(v___x_249_) == 0)
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_272_; 
v_a_250_ = lean_ctor_get(v___x_249_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_272_ == 0)
{
v___x_252_ = v___x_249_;
v_isShared_253_ = v_isSharedCheck_272_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_249_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_272_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
if (lean_obj_tag(v_a_250_) == 0)
{
lean_object* v___x_254_; lean_object* v___x_256_; 
lean_dec_ref_known(v_a_250_, 0);
lean_dec_ref_known(v_e_187_, 2);
v___x_254_ = ((lean_object*)(l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__4));
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 0, v___x_254_);
v___x_256_ = v___x_252_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v___x_254_);
v___x_256_ = v_reuseFailAlloc_257_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
return v___x_256_;
}
}
else
{
lean_object* v_e_x27_258_; size_t v___x_259_; size_t v___x_260_; uint8_t v___x_261_; 
lean_del_object(v___x_252_);
v_e_x27_258_ = lean_ctor_get(v_a_250_, 0);
lean_inc_ref(v_e_x27_258_);
lean_dec_ref_known(v_a_250_, 1);
v___x_259_ = lean_ptr_addr(v_expr_248_);
v___x_260_ = lean_ptr_addr(v_e_x27_258_);
v___x_261_ = lean_usize_dec_eq(v___x_259_, v___x_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; 
lean_inc(v_data_247_);
lean_dec_ref_known(v_e_187_, 2);
v___x_262_ = l_Lean_Meta_Sym_Internal_mkMDataS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__1___redArg(v_data_247_, v_e_x27_258_, v_a_191_, v_a_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_);
if (lean_obj_tag(v___x_262_) == 0)
{
lean_object* v_a_263_; 
v_a_263_ = lean_ctor_get(v___x_262_, 0);
lean_inc(v_a_263_);
lean_dec_ref_known(v___x_262_, 1);
v_a_215_ = v_a_263_;
goto v___jp_214_;
}
else
{
lean_object* v_a_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_271_; 
v_a_264_ = lean_ctor_get(v___x_262_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_262_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v___x_262_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_a_264_);
lean_dec(v___x_262_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_a_264_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
}
else
{
lean_dec_ref(v_e_x27_258_);
v_a_215_ = v_e_187_;
goto v___jp_214_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_187_, 2);
return v___x_249_;
}
}
case 11:
{
lean_object* v_typeName_273_; 
v_typeName_273_ = lean_ctor_get(v_e_187_, 0);
if (lean_obj_tag(v_typeName_273_) == 1)
{
lean_object* v_pre_274_; 
v_pre_274_ = lean_ctor_get(v_typeName_273_, 0);
if (lean_obj_tag(v_pre_274_) == 0)
{
lean_object* v_idx_275_; lean_object* v_struct_276_; lean_object* v_str_277_; lean_object* v___x_278_; uint8_t v___x_279_; 
v_idx_275_ = lean_ctor_get(v_e_187_, 1);
v_struct_276_ = lean_ctor_get(v_e_187_, 2);
v_str_277_ = lean_ctor_get(v_typeName_273_, 1);
v___x_278_ = ((lean_object*)(l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__5));
v___x_279_ = lean_string_dec_eq(v_str_277_, v___x_278_);
if (v___x_279_ == 0)
{
v___y_199_ = v_a_188_;
v___y_200_ = v_a_189_;
v___y_201_ = v_a_190_;
v___y_202_ = v_a_191_;
v___y_203_ = v_a_192_;
v___y_204_ = v_a_193_;
v___y_205_ = v_a_194_;
v___y_206_ = v_a_195_;
v___y_207_ = v_a_196_;
goto v___jp_198_;
}
else
{
lean_object* v___x_280_; uint8_t v___x_281_; 
v___x_280_ = lean_unsigned_to_nat(0u);
v___x_281_ = lean_nat_dec_eq(v_idx_275_, v___x_280_);
if (v___x_281_ == 0)
{
v___y_199_ = v_a_188_;
v___y_200_ = v_a_189_;
v___y_201_ = v_a_190_;
v___y_202_ = v_a_191_;
v___y_203_ = v_a_192_;
v___y_204_ = v_a_193_;
v___y_205_ = v_a_194_;
v___y_206_ = v_a_195_;
v___y_207_ = v_a_196_;
goto v___jp_198_;
}
else
{
lean_object* v___x_282_; lean_object* v___x_283_; uint8_t v___x_284_; lean_object* v_a_286_; 
v___x_282_ = ((lean_object*)(l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__7));
v___x_283_ = lean_unsigned_to_nat(3u);
v___x_284_ = l_Lean_Expr_isAppOfArity(v_struct_276_, v___x_282_, v___x_283_);
if (v___x_284_ == 0)
{
uint8_t v_instances_289_; 
v_instances_289_ = lean_ctor_get_uint8(v_a_189_, sizeof(void*)*1);
if (v_instances_289_ == 0)
{
lean_object* v___x_290_; lean_object* v___x_291_; 
lean_dec_ref_known(v_e_187_, 3);
v___x_290_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_290_, 0, v___x_281_);
v___x_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
return v___x_291_;
}
else
{
lean_object* v___x_292_; 
lean_inc(v_a_196_);
lean_inc_ref(v_a_195_);
lean_inc(v_a_194_);
lean_inc_ref(v_a_193_);
lean_inc(v_a_192_);
lean_inc_ref(v_a_191_);
lean_inc(v_a_190_);
lean_inc_ref(v_a_189_);
lean_inc(v_a_188_);
lean_inc_ref(v_struct_276_);
v___x_292_ = lean_sym_dsimp(v_struct_276_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_321_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_321_ == 0)
{
v___x_295_ = v___x_292_;
v_isShared_296_ = v_isSharedCheck_321_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_a_293_);
lean_dec(v___x_292_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_321_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
if (lean_obj_tag(v_a_293_) == 0)
{
lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_306_; 
lean_dec_ref_known(v_e_187_, 3);
v_isSharedCheck_306_ = !lean_is_exclusive(v_a_293_);
if (v_isSharedCheck_306_ == 0)
{
v___x_298_ = v_a_293_;
v_isShared_299_ = v_isSharedCheck_306_;
goto v_resetjp_297_;
}
else
{
lean_dec(v_a_293_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_306_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_301_; 
if (v_isShared_299_ == 0)
{
v___x_301_ = v___x_298_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 0, 1);
v___x_301_ = v_reuseFailAlloc_305_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
lean_object* v___x_303_; 
lean_ctor_set_uint8(v___x_301_, 0, v___x_284_);
if (v_isShared_296_ == 0)
{
lean_ctor_set(v___x_295_, 0, v___x_301_);
v___x_303_ = v___x_295_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_301_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
}
else
{
lean_object* v_e_x27_307_; size_t v___x_308_; size_t v___x_309_; uint8_t v___x_310_; 
lean_del_object(v___x_295_);
v_e_x27_307_ = lean_ctor_get(v_a_293_, 0);
lean_inc_ref(v_e_x27_307_);
lean_dec_ref_known(v_a_293_, 1);
v___x_308_ = lean_ptr_addr(v_struct_276_);
v___x_309_ = lean_ptr_addr(v_e_x27_307_);
v___x_310_ = lean_usize_dec_eq(v___x_308_, v___x_309_);
if (v___x_310_ == 0)
{
lean_object* v___x_311_; 
lean_inc(v_idx_275_);
lean_inc_ref(v_typeName_273_);
lean_dec_ref_known(v_e_187_, 3);
v___x_311_ = l_Lean_Meta_Sym_Internal_mkProjS___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__2___redArg(v_typeName_273_, v_idx_275_, v_e_x27_307_, v_a_191_, v_a_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
lean_inc(v_a_312_);
lean_dec_ref_known(v___x_311_, 1);
v_a_286_ = v_a_312_;
goto v___jp_285_;
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
v_a_313_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_320_ == 0)
{
v___x_315_ = v___x_311_;
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_311_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_a_313_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
else
{
lean_dec_ref(v_e_x27_307_);
v_a_286_ = v_e_187_;
goto v___jp_285_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_187_, 3);
return v___x_292_;
}
}
}
else
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v_value_326_; lean_object* v___x_327_; 
lean_inc_ref(v_struct_276_);
lean_dec_ref_known(v_e_187_, 3);
v___x_322_ = lean_unsigned_to_nat(1u);
v___x_323_ = l_Lean_Expr_getAppNumArgs(v_struct_276_);
v___x_324_ = lean_nat_sub(v___x_323_, v___x_322_);
lean_dec(v___x_323_);
v___x_325_ = lean_nat_sub(v___x_324_, v___x_322_);
lean_dec(v___x_324_);
v_value_326_ = l_Lean_Expr_getRevArg_x21(v_struct_276_, v___x_325_);
lean_dec_ref(v_struct_276_);
v___x_327_ = l_Lean_Meta_Sym_shareCommon(v_value_326_, v_a_191_, v_a_192_, v_a_193_, v_a_194_, v_a_195_, v_a_196_);
if (lean_obj_tag(v___x_327_) == 0)
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_337_; 
v_a_328_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_337_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_337_ == 0)
{
v___x_330_ = v___x_327_;
v_isShared_331_ = v_isSharedCheck_337_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_327_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_337_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
uint8_t v___x_332_; lean_object* v___x_333_; lean_object* v___x_335_; 
v___x_332_ = 0;
v___x_333_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_333_, 0, v_a_328_);
lean_ctor_set_uint8(v___x_333_, sizeof(void*)*1, v___x_332_);
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 0, v___x_333_);
v___x_335_ = v___x_330_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v___x_333_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
return v___x_335_;
}
}
}
else
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_345_; 
v_a_338_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_345_ == 0)
{
v___x_340_ = v___x_327_;
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_327_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_343_; 
if (v_isShared_341_ == 0)
{
v___x_343_ = v___x_340_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_a_338_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
}
v___jp_285_:
{
lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_287_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_287_, 0, v_a_286_);
lean_ctor_set_uint8(v___x_287_, sizeof(void*)*1, v___x_284_);
v___x_288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_288_, 0, v___x_287_);
return v___x_288_;
}
}
}
}
else
{
v___y_199_ = v_a_188_;
v___y_200_ = v_a_189_;
v___y_201_ = v_a_190_;
v___y_202_ = v_a_191_;
v___y_203_ = v_a_192_;
v___y_204_ = v_a_193_;
v___y_205_ = v_a_194_;
v___y_206_ = v_a_195_;
v___y_207_ = v_a_196_;
goto v___jp_198_;
}
}
else
{
v___y_199_ = v_a_188_;
v___y_200_ = v_a_189_;
v___y_201_ = v_a_190_;
v___y_202_ = v_a_191_;
v___y_203_ = v_a_192_;
v___y_204_ = v_a_193_;
v___y_205_ = v_a_194_;
v___y_206_ = v_a_195_;
v___y_207_ = v_a_196_;
goto v___jp_198_;
}
}
default: 
{
lean_object* v___x_346_; lean_object* v___x_347_; 
lean_dec_ref(v_e_187_);
v___x_346_ = ((lean_object*)(l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__4));
v___x_347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
return v___x_347_;
}
}
v___jp_198_:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_208_ = lean_obj_once(&l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__1, &l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__1_once, _init_l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__1);
v___x_209_ = l_Lean_indentExpr(v_e_187_);
v___x_210_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_208_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
v___x_211_ = lean_obj_once(&l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__3, &l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__3_once, _init_l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___closed__3);
v___x_212_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_210_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
v___x_213_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0___redArg(v___x_212_, v___y_204_, v___y_205_, v___y_206_, v___y_207_);
return v___x_213_;
}
v___jp_214_:
{
uint8_t v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_216_ = 0;
v___x_217_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_217_, 0, v_a_215_);
lean_ctor_set_uint8(v___x_217_, sizeof(void*)*1, v___x_216_);
v___x_218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
return v___x_218_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep___boxed(lean_object* v_e_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep(v_e_348_, v_a_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_, v_a_356_, v_a_357_);
lean_dec(v_a_357_);
lean_dec_ref(v_a_356_);
lean_dec(v_a_355_);
lean_dec_ref(v_a_354_);
lean_dec(v_a_353_);
lean_dec_ref(v_a_352_);
lean_dec(v_a_351_);
lean_dec_ref(v_a_350_);
lean_dec(v_a_349_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0(lean_object* v_00_u03b1_360_, lean_object* v_msg_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0___redArg(v_msg_361_, v___y_367_, v___y_368_, v___y_369_, v___y_370_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0___boxed(lean_object* v_00_u03b1_373_, lean_object* v_msg_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0(v_00_u03b1_373_, v_msg_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_);
lean_dec(v___y_383_);
lean_dec_ref(v___y_382_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult___redArg(lean_object* v_e_388_, lean_object* v_r_389_, lean_object* v_a_390_){
_start:
{
lean_object* v___f_392_; lean_object* v___f_393_; uint8_t v___x_394_; 
v___f_392_ = ((lean_object*)(l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult___redArg___closed__0));
v___f_393_ = ((lean_object*)(l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult___redArg___closed__1));
v___x_394_ = l_Lean_Expr_hasMVar(v_e_388_);
if (v___x_394_ == 0)
{
lean_object* v___x_395_; lean_object* v_numSteps_396_; lean_object* v_cache_397_; lean_object* v_transientCache_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_408_; 
v___x_395_ = lean_st_ref_take(v_a_390_);
v_numSteps_396_ = lean_ctor_get(v___x_395_, 0);
v_cache_397_ = lean_ctor_get(v___x_395_, 1);
v_transientCache_398_ = lean_ctor_get(v___x_395_, 2);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_395_);
if (v_isSharedCheck_408_ == 0)
{
v___x_400_ = v___x_395_;
v_isShared_401_ = v_isSharedCheck_408_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_transientCache_398_);
lean_inc(v_cache_397_);
lean_inc(v_numSteps_396_);
lean_dec(v___x_395_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_408_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_402_; lean_object* v___x_404_; 
lean_inc_ref(v_r_389_);
v___x_402_ = l_Lean_PersistentHashMap_insert___redArg(v___f_392_, v___f_393_, v_cache_397_, v_e_388_, v_r_389_);
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 1, v___x_402_);
v___x_404_ = v___x_400_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_numSteps_396_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v___x_402_);
lean_ctor_set(v_reuseFailAlloc_407_, 2, v_transientCache_398_);
v___x_404_ = v_reuseFailAlloc_407_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = lean_st_ref_put(v_a_390_, v___x_404_);
v___x_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_406_, 0, v_r_389_);
return v___x_406_;
}
}
}
else
{
lean_object* v___x_409_; lean_object* v_numSteps_410_; lean_object* v_cache_411_; lean_object* v_transientCache_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_422_; 
v___x_409_ = lean_st_ref_take(v_a_390_);
v_numSteps_410_ = lean_ctor_get(v___x_409_, 0);
v_cache_411_ = lean_ctor_get(v___x_409_, 1);
v_transientCache_412_ = lean_ctor_get(v___x_409_, 2);
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_422_ == 0)
{
v___x_414_ = v___x_409_;
v_isShared_415_ = v_isSharedCheck_422_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_transientCache_412_);
lean_inc(v_cache_411_);
lean_inc(v_numSteps_410_);
lean_dec(v___x_409_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_422_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_416_; lean_object* v___x_418_; 
lean_inc_ref(v_r_389_);
v___x_416_ = l_Lean_PersistentHashMap_insert___redArg(v___f_392_, v___f_393_, v_transientCache_412_, v_e_388_, v_r_389_);
if (v_isShared_415_ == 0)
{
lean_ctor_set(v___x_414_, 2, v___x_416_);
v___x_418_ = v___x_414_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_numSteps_410_);
lean_ctor_set(v_reuseFailAlloc_421_, 1, v_cache_411_);
lean_ctor_set(v_reuseFailAlloc_421_, 2, v___x_416_);
v___x_418_ = v_reuseFailAlloc_421_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = lean_st_ref_put(v_a_390_, v___x_418_);
v___x_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_420_, 0, v_r_389_);
return v___x_420_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult___redArg___boxed(lean_object* v_e_423_, lean_object* v_r_424_, lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult___redArg(v_e_423_, v_r_424_, v_a_425_);
lean_dec(v_a_425_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult(lean_object* v_e_428_, lean_object* v_r_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_){
_start:
{
lean_object* v___f_440_; lean_object* v___f_441_; uint8_t v___x_442_; 
v___f_440_ = ((lean_object*)(l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult___redArg___closed__0));
v___f_441_ = ((lean_object*)(l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult___redArg___closed__1));
v___x_442_ = l_Lean_Expr_hasMVar(v_e_428_);
if (v___x_442_ == 0)
{
lean_object* v___x_443_; lean_object* v_numSteps_444_; lean_object* v_cache_445_; lean_object* v_transientCache_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_456_; 
v___x_443_ = lean_st_ref_take(v_a_432_);
v_numSteps_444_ = lean_ctor_get(v___x_443_, 0);
v_cache_445_ = lean_ctor_get(v___x_443_, 1);
v_transientCache_446_ = lean_ctor_get(v___x_443_, 2);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_456_ == 0)
{
v___x_448_ = v___x_443_;
v_isShared_449_ = v_isSharedCheck_456_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_transientCache_446_);
lean_inc(v_cache_445_);
lean_inc(v_numSteps_444_);
lean_dec(v___x_443_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_456_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_450_; lean_object* v___x_452_; 
lean_inc_ref(v_r_429_);
v___x_450_ = l_Lean_PersistentHashMap_insert___redArg(v___f_440_, v___f_441_, v_cache_445_, v_e_428_, v_r_429_);
if (v_isShared_449_ == 0)
{
lean_ctor_set(v___x_448_, 1, v___x_450_);
v___x_452_ = v___x_448_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_numSteps_444_);
lean_ctor_set(v_reuseFailAlloc_455_, 1, v___x_450_);
lean_ctor_set(v_reuseFailAlloc_455_, 2, v_transientCache_446_);
v___x_452_ = v_reuseFailAlloc_455_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_453_ = lean_st_ref_put(v_a_432_, v___x_452_);
v___x_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_454_, 0, v_r_429_);
return v___x_454_;
}
}
}
else
{
lean_object* v___x_457_; lean_object* v_numSteps_458_; lean_object* v_cache_459_; lean_object* v_transientCache_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_470_; 
v___x_457_ = lean_st_ref_take(v_a_432_);
v_numSteps_458_ = lean_ctor_get(v___x_457_, 0);
v_cache_459_ = lean_ctor_get(v___x_457_, 1);
v_transientCache_460_ = lean_ctor_get(v___x_457_, 2);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_470_ == 0)
{
v___x_462_ = v___x_457_;
v_isShared_463_ = v_isSharedCheck_470_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_transientCache_460_);
lean_inc(v_cache_459_);
lean_inc(v_numSteps_458_);
lean_dec(v___x_457_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_470_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_464_; lean_object* v___x_466_; 
lean_inc_ref(v_r_429_);
v___x_464_ = l_Lean_PersistentHashMap_insert___redArg(v___f_440_, v___f_441_, v_transientCache_460_, v_e_428_, v_r_429_);
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 2, v___x_464_);
v___x_466_ = v___x_462_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_numSteps_458_);
lean_ctor_set(v_reuseFailAlloc_469_, 1, v_cache_459_);
lean_ctor_set(v_reuseFailAlloc_469_, 2, v___x_464_);
v___x_466_ = v_reuseFailAlloc_469_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_467_ = lean_st_ref_put(v_a_432_, v___x_466_);
v___x_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_468_, 0, v_r_429_);
return v___x_468_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult___boxed(lean_object* v_e_471_, lean_object* v_r_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_cacheResult(v_e_471_, v_r_472_, v_a_473_, v_a_474_, v_a_475_, v_a_476_, v_a_477_, v_a_478_, v_a_479_, v_a_480_, v_a_481_);
lean_dec(v_a_481_);
lean_dec_ref(v_a_480_);
lean_dec(v_a_479_);
lean_dec_ref(v_a_478_);
lean_dec(v_a_477_);
lean_dec_ref(v_a_476_);
lean_dec(v_a_475_);
lean_dec_ref(v_a_474_);
lean_dec(v_a_473_);
return v_res_483_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_489_ = l_Lean_maxRecDepthErrorMessage;
v___x_490_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
return v___x_490_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_491_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__3);
v___x_492_ = l_Lean_MessageData_ofFormat(v___x_491_);
return v___x_492_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_493_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__4);
v___x_494_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__2));
v___x_495_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
lean_ctor_set(v___x_495_, 1, v___x_493_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg(lean_object* v_ref_496_){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_498_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___closed__5);
v___x_499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_499_, 0, v_ref_496_);
lean_ctor_set(v___x_499_, 1, v___x_498_);
v___x_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg___boxed(lean_object* v_ref_501_, lean_object* v___y_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg(v_ref_501_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2(lean_object* v_00_u03b1_504_, lean_object* v_ref_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg(v_ref_505_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___boxed(lean_object* v_00_u03b1_517_, lean_object* v_ref_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2(v_00_u03b1_517_, v_ref_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_);
lean_dec(v___y_527_);
lean_dec_ref(v___y_526_);
lean_dec(v___y_525_);
lean_dec_ref(v___y_524_);
lean_dec(v___y_523_);
lean_dec_ref(v___y_522_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v___y_519_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___lam__0(lean_object* v_x_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
lean_object* v_post_542_; lean_object* v___x_543_; 
v_post_542_ = lean_ctor_get(v___y_532_, 1);
lean_inc_ref(v_post_542_);
lean_inc(v___y_540_);
lean_inc_ref(v___y_539_);
lean_inc(v___y_538_);
lean_inc_ref(v___y_537_);
lean_inc(v___y_536_);
lean_inc_ref(v___y_535_);
lean_inc(v___y_534_);
lean_inc_ref(v___y_533_);
lean_inc(v___y_532_);
v___x_543_ = lean_apply_11(v_post_542_, v___y_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, lean_box(0));
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___lam__0___boxed(lean_object* v_x_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___lam__0(v_x_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
lean_dec(v___y_552_);
lean_dec_ref(v___y_551_);
lean_dec(v___y_550_);
lean_dec_ref(v___y_549_);
lean_dec(v___y_548_);
lean_dec_ref(v___y_547_);
lean_dec(v___y_546_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_x_557_, lean_object* v_x_558_, lean_object* v_x_559_, lean_object* v_x_560_){
_start:
{
lean_object* v_ks_561_; lean_object* v_vs_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_588_; 
v_ks_561_ = lean_ctor_get(v_x_557_, 0);
v_vs_562_ = lean_ctor_get(v_x_557_, 1);
v_isSharedCheck_588_ = !lean_is_exclusive(v_x_557_);
if (v_isSharedCheck_588_ == 0)
{
v___x_564_ = v_x_557_;
v_isShared_565_ = v_isSharedCheck_588_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_vs_562_);
lean_inc(v_ks_561_);
lean_dec(v_x_557_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_588_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_566_; uint8_t v___x_567_; 
v___x_566_ = lean_array_get_size(v_ks_561_);
v___x_567_ = lean_nat_dec_lt(v_x_558_, v___x_566_);
if (v___x_567_ == 0)
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_571_; 
lean_dec(v_x_558_);
v___x_568_ = lean_array_push(v_ks_561_, v_x_559_);
v___x_569_ = lean_array_push(v_vs_562_, v_x_560_);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 1, v___x_569_);
lean_ctor_set(v___x_564_, 0, v___x_568_);
v___x_571_ = v___x_564_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v___x_568_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v___x_569_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
else
{
lean_object* v_k_x27_573_; size_t v___x_574_; size_t v___x_575_; uint8_t v___x_576_; 
v_k_x27_573_ = lean_array_fget_borrowed(v_ks_561_, v_x_558_);
v___x_574_ = lean_ptr_addr(v_x_559_);
v___x_575_ = lean_ptr_addr(v_k_x27_573_);
v___x_576_ = lean_usize_dec_eq(v___x_574_, v___x_575_);
if (v___x_576_ == 0)
{
lean_object* v___x_578_; 
if (v_isShared_565_ == 0)
{
v___x_578_ = v___x_564_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_ks_561_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v_vs_562_);
v___x_578_ = v_reuseFailAlloc_582_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_579_ = lean_unsigned_to_nat(1u);
v___x_580_ = lean_nat_add(v_x_558_, v___x_579_);
lean_dec(v_x_558_);
v_x_557_ = v___x_578_;
v_x_558_ = v___x_580_;
goto _start;
}
}
else
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_586_; 
v___x_583_ = lean_array_fset(v_ks_561_, v_x_558_, v_x_559_);
v___x_584_ = lean_array_fset(v_vs_562_, v_x_558_, v_x_560_);
lean_dec(v_x_558_);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 1, v___x_584_);
lean_ctor_set(v___x_564_, 0, v___x_583_);
v___x_586_ = v___x_564_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v___x_583_);
lean_ctor_set(v_reuseFailAlloc_587_, 1, v___x_584_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__2___redArg(lean_object* v_n_589_, lean_object* v_k_590_, lean_object* v_v_591_){
_start:
{
lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_592_ = lean_unsigned_to_nat(0u);
v___x_593_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__2_spec__4___redArg(v_n_589_, v___x_592_, v_k_590_, v_v_591_);
return v___x_593_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0___redArg(lean_object* v_x_595_, size_t v_x_596_, size_t v_x_597_, lean_object* v_x_598_, lean_object* v_x_599_){
_start:
{
if (lean_obj_tag(v_x_595_) == 0)
{
lean_object* v_es_600_; size_t v___x_601_; size_t v___x_602_; lean_object* v_j_603_; lean_object* v___x_604_; uint8_t v___x_605_; 
v_es_600_ = lean_ctor_get(v_x_595_, 0);
v___x_601_ = ((size_t)31ULL);
v___x_602_ = lean_usize_land(v_x_596_, v___x_601_);
v_j_603_ = lean_usize_to_nat(v___x_602_);
v___x_604_ = lean_array_get_size(v_es_600_);
v___x_605_ = lean_nat_dec_lt(v_j_603_, v___x_604_);
if (v___x_605_ == 0)
{
lean_dec(v_j_603_);
lean_dec(v_x_599_);
lean_dec_ref(v_x_598_);
return v_x_595_;
}
else
{
lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_646_; 
lean_inc_ref(v_es_600_);
v_isSharedCheck_646_ = !lean_is_exclusive(v_x_595_);
if (v_isSharedCheck_646_ == 0)
{
lean_object* v_unused_647_; 
v_unused_647_ = lean_ctor_get(v_x_595_, 0);
lean_dec(v_unused_647_);
v___x_607_ = v_x_595_;
v_isShared_608_ = v_isSharedCheck_646_;
goto v_resetjp_606_;
}
else
{
lean_dec(v_x_595_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_646_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v_v_609_; lean_object* v___x_610_; lean_object* v_xs_x27_611_; lean_object* v___y_613_; 
v_v_609_ = lean_array_fget(v_es_600_, v_j_603_);
v___x_610_ = lean_box(0);
v_xs_x27_611_ = lean_array_fset(v_es_600_, v_j_603_, v___x_610_);
switch(lean_obj_tag(v_v_609_))
{
case 0:
{
lean_object* v_key_618_; lean_object* v_val_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_631_; 
v_key_618_ = lean_ctor_get(v_v_609_, 0);
v_val_619_ = lean_ctor_get(v_v_609_, 1);
v_isSharedCheck_631_ = !lean_is_exclusive(v_v_609_);
if (v_isSharedCheck_631_ == 0)
{
v___x_621_ = v_v_609_;
v_isShared_622_ = v_isSharedCheck_631_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_val_619_);
lean_inc(v_key_618_);
lean_dec(v_v_609_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_631_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
size_t v___x_623_; size_t v___x_624_; uint8_t v___x_625_; 
v___x_623_ = lean_ptr_addr(v_x_598_);
v___x_624_ = lean_ptr_addr(v_key_618_);
v___x_625_ = lean_usize_dec_eq(v___x_623_, v___x_624_);
if (v___x_625_ == 0)
{
lean_object* v___x_626_; lean_object* v___x_627_; 
lean_del_object(v___x_621_);
v___x_626_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_618_, v_val_619_, v_x_598_, v_x_599_);
v___x_627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_627_, 0, v___x_626_);
v___y_613_ = v___x_627_;
goto v___jp_612_;
}
else
{
lean_object* v___x_629_; 
lean_dec(v_val_619_);
lean_dec(v_key_618_);
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 1, v_x_599_);
lean_ctor_set(v___x_621_, 0, v_x_598_);
v___x_629_ = v___x_621_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_x_598_);
lean_ctor_set(v_reuseFailAlloc_630_, 1, v_x_599_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
v___y_613_ = v___x_629_;
goto v___jp_612_;
}
}
}
}
case 1:
{
lean_object* v_node_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_644_; 
v_node_632_ = lean_ctor_get(v_v_609_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v_v_609_);
if (v_isSharedCheck_644_ == 0)
{
v___x_634_ = v_v_609_;
v_isShared_635_ = v_isSharedCheck_644_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_node_632_);
lean_dec(v_v_609_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_644_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
size_t v___x_636_; size_t v___x_637_; size_t v___x_638_; size_t v___x_639_; lean_object* v___x_640_; lean_object* v___x_642_; 
v___x_636_ = ((size_t)5ULL);
v___x_637_ = lean_usize_shift_right(v_x_596_, v___x_636_);
v___x_638_ = ((size_t)1ULL);
v___x_639_ = lean_usize_add(v_x_597_, v___x_638_);
v___x_640_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0___redArg(v_node_632_, v___x_637_, v___x_639_, v_x_598_, v_x_599_);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 0, v___x_640_);
v___x_642_ = v___x_634_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v___x_640_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
v___y_613_ = v___x_642_;
goto v___jp_612_;
}
}
}
default: 
{
lean_object* v___x_645_; 
v___x_645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_645_, 0, v_x_598_);
lean_ctor_set(v___x_645_, 1, v_x_599_);
v___y_613_ = v___x_645_;
goto v___jp_612_;
}
}
v___jp_612_:
{
lean_object* v___x_614_; lean_object* v___x_616_; 
v___x_614_ = lean_array_fset(v_xs_x27_611_, v_j_603_, v___y_613_);
lean_dec(v_j_603_);
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 0, v___x_614_);
v___x_616_ = v___x_607_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v___x_614_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
return v___x_616_;
}
}
}
}
}
else
{
lean_object* v_ks_648_; lean_object* v_vs_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_667_; 
v_ks_648_ = lean_ctor_get(v_x_595_, 0);
v_vs_649_ = lean_ctor_get(v_x_595_, 1);
v_isSharedCheck_667_ = !lean_is_exclusive(v_x_595_);
if (v_isSharedCheck_667_ == 0)
{
v___x_651_ = v_x_595_;
v_isShared_652_ = v_isSharedCheck_667_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_vs_649_);
lean_inc(v_ks_648_);
lean_dec(v_x_595_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_667_;
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
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_ks_648_);
lean_ctor_set(v_reuseFailAlloc_666_, 1, v_vs_649_);
v___x_654_ = v_reuseFailAlloc_666_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
lean_object* v_newNode_655_; size_t v___x_656_; uint8_t v___x_657_; 
v_newNode_655_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__2___redArg(v___x_654_, v_x_598_, v_x_599_);
v___x_656_ = ((size_t)7ULL);
v___x_657_ = lean_usize_dec_le(v___x_656_, v_x_597_);
if (v___x_657_ == 0)
{
lean_object* v___x_658_; lean_object* v___x_659_; uint8_t v___x_660_; 
v___x_658_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_655_);
v___x_659_ = lean_unsigned_to_nat(4u);
v___x_660_ = lean_nat_dec_lt(v___x_658_, v___x_659_);
lean_dec(v___x_658_);
if (v___x_660_ == 0)
{
lean_object* v_ks_661_; lean_object* v_vs_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v_ks_661_ = lean_ctor_get(v_newNode_655_, 0);
lean_inc_ref(v_ks_661_);
v_vs_662_ = lean_ctor_get(v_newNode_655_, 1);
lean_inc_ref(v_vs_662_);
lean_dec_ref(v_newNode_655_);
v___x_663_ = lean_unsigned_to_nat(0u);
v___x_664_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0___redArg___closed__0);
v___x_665_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__3___redArg(v_x_597_, v_ks_661_, v_vs_662_, v___x_663_, v___x_664_);
lean_dec_ref(v_vs_662_);
lean_dec_ref(v_ks_661_);
return v___x_665_;
}
else
{
return v_newNode_655_;
}
}
else
{
return v_newNode_655_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__3___redArg(size_t v_depth_668_, lean_object* v_keys_669_, lean_object* v_vals_670_, lean_object* v_i_671_, lean_object* v_entries_672_){
_start:
{
lean_object* v___x_673_; uint8_t v___x_674_; 
v___x_673_ = lean_array_get_size(v_keys_669_);
v___x_674_ = lean_nat_dec_lt(v_i_671_, v___x_673_);
if (v___x_674_ == 0)
{
lean_dec(v_i_671_);
return v_entries_672_;
}
else
{
lean_object* v_k_675_; lean_object* v_v_676_; size_t v___x_677_; size_t v___x_678_; size_t v___x_679_; uint64_t v___x_680_; size_t v_h_681_; size_t v___x_682_; lean_object* v___x_683_; size_t v___x_684_; size_t v___x_685_; size_t v___x_686_; size_t v_h_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v_k_675_ = lean_array_fget_borrowed(v_keys_669_, v_i_671_);
v_v_676_ = lean_array_fget_borrowed(v_vals_670_, v_i_671_);
v___x_677_ = lean_ptr_addr(v_k_675_);
v___x_678_ = ((size_t)3ULL);
v___x_679_ = lean_usize_shift_right(v___x_677_, v___x_678_);
v___x_680_ = lean_usize_to_uint64(v___x_679_);
v_h_681_ = lean_uint64_to_usize(v___x_680_);
v___x_682_ = ((size_t)5ULL);
v___x_683_ = lean_unsigned_to_nat(1u);
v___x_684_ = ((size_t)1ULL);
v___x_685_ = lean_usize_sub(v_depth_668_, v___x_684_);
v___x_686_ = lean_usize_mul(v___x_682_, v___x_685_);
v_h_687_ = lean_usize_shift_right(v_h_681_, v___x_686_);
v___x_688_ = lean_nat_add(v_i_671_, v___x_683_);
lean_dec(v_i_671_);
lean_inc(v_v_676_);
lean_inc(v_k_675_);
v___x_689_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0___redArg(v_entries_672_, v_h_687_, v_depth_668_, v_k_675_, v_v_676_);
v_i_671_ = v___x_688_;
v_entries_672_ = v___x_689_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_depth_691_, lean_object* v_keys_692_, lean_object* v_vals_693_, lean_object* v_i_694_, lean_object* v_entries_695_){
_start:
{
size_t v_depth_boxed_696_; lean_object* v_res_697_; 
v_depth_boxed_696_ = lean_unbox_usize(v_depth_691_);
lean_dec(v_depth_691_);
v_res_697_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__3___redArg(v_depth_boxed_696_, v_keys_692_, v_vals_693_, v_i_694_, v_entries_695_);
lean_dec_ref(v_vals_693_);
lean_dec_ref(v_keys_692_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0___redArg___boxed(lean_object* v_x_698_, lean_object* v_x_699_, lean_object* v_x_700_, lean_object* v_x_701_, lean_object* v_x_702_){
_start:
{
size_t v_x_45310__boxed_703_; size_t v_x_45311__boxed_704_; lean_object* v_res_705_; 
v_x_45310__boxed_703_ = lean_unbox_usize(v_x_699_);
lean_dec(v_x_699_);
v_x_45311__boxed_704_ = lean_unbox_usize(v_x_700_);
lean_dec(v_x_700_);
v_res_705_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0___redArg(v_x_698_, v_x_45310__boxed_703_, v_x_45311__boxed_704_, v_x_701_, v_x_702_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0___redArg(lean_object* v_x_706_, lean_object* v_x_707_, lean_object* v_x_708_){
_start:
{
size_t v___x_709_; size_t v___x_710_; size_t v___x_711_; uint64_t v___x_712_; size_t v___x_713_; size_t v___x_714_; lean_object* v___x_715_; 
v___x_709_ = lean_ptr_addr(v_x_707_);
v___x_710_ = ((size_t)3ULL);
v___x_711_ = lean_usize_shift_right(v___x_709_, v___x_710_);
v___x_712_ = lean_usize_to_uint64(v___x_711_);
v___x_713_ = lean_uint64_to_usize(v___x_712_);
v___x_714_ = ((size_t)1ULL);
v___x_715_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0___redArg(v_x_706_, v___x_713_, v___x_714_, v_x_707_, v_x_708_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2_spec__6___redArg(lean_object* v_keys_716_, lean_object* v_vals_717_, lean_object* v_i_718_, lean_object* v_k_719_){
_start:
{
lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_720_ = lean_array_get_size(v_keys_716_);
v___x_721_ = lean_nat_dec_lt(v_i_718_, v___x_720_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; 
lean_dec(v_i_718_);
v___x_722_ = lean_box(0);
return v___x_722_;
}
else
{
lean_object* v_k_x27_723_; size_t v___x_724_; size_t v___x_725_; uint8_t v___x_726_; 
v_k_x27_723_ = lean_array_fget_borrowed(v_keys_716_, v_i_718_);
v___x_724_ = lean_ptr_addr(v_k_719_);
v___x_725_ = lean_ptr_addr(v_k_x27_723_);
v___x_726_ = lean_usize_dec_eq(v___x_724_, v___x_725_);
if (v___x_726_ == 0)
{
lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_727_ = lean_unsigned_to_nat(1u);
v___x_728_ = lean_nat_add(v_i_718_, v___x_727_);
lean_dec(v_i_718_);
v_i_718_ = v___x_728_;
goto _start;
}
else
{
lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_730_ = lean_array_fget_borrowed(v_vals_717_, v_i_718_);
lean_dec(v_i_718_);
lean_inc(v___x_730_);
v___x_731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_731_, 0, v___x_730_);
return v___x_731_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2_spec__6___redArg___boxed(lean_object* v_keys_732_, lean_object* v_vals_733_, lean_object* v_i_734_, lean_object* v_k_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2_spec__6___redArg(v_keys_732_, v_vals_733_, v_i_734_, v_k_735_);
lean_dec_ref(v_k_735_);
lean_dec_ref(v_vals_733_);
lean_dec_ref(v_keys_732_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2___redArg(lean_object* v_x_737_, size_t v_x_738_, lean_object* v_x_739_){
_start:
{
if (lean_obj_tag(v_x_737_) == 0)
{
lean_object* v_es_740_; lean_object* v___x_741_; size_t v___x_742_; size_t v___x_743_; lean_object* v_j_744_; lean_object* v___x_745_; 
v_es_740_ = lean_ctor_get(v_x_737_, 0);
v___x_741_ = lean_box(2);
v___x_742_ = ((size_t)31ULL);
v___x_743_ = lean_usize_land(v_x_738_, v___x_742_);
v_j_744_ = lean_usize_to_nat(v___x_743_);
v___x_745_ = lean_array_get_borrowed(v___x_741_, v_es_740_, v_j_744_);
lean_dec(v_j_744_);
switch(lean_obj_tag(v___x_745_))
{
case 0:
{
lean_object* v_key_746_; lean_object* v_val_747_; size_t v___x_748_; size_t v___x_749_; uint8_t v___x_750_; 
v_key_746_ = lean_ctor_get(v___x_745_, 0);
v_val_747_ = lean_ctor_get(v___x_745_, 1);
v___x_748_ = lean_ptr_addr(v_x_739_);
v___x_749_ = lean_ptr_addr(v_key_746_);
v___x_750_ = lean_usize_dec_eq(v___x_748_, v___x_749_);
if (v___x_750_ == 0)
{
lean_object* v___x_751_; 
v___x_751_ = lean_box(0);
return v___x_751_;
}
else
{
lean_object* v___x_752_; 
lean_inc(v_val_747_);
v___x_752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_752_, 0, v_val_747_);
return v___x_752_;
}
}
case 1:
{
lean_object* v_node_753_; size_t v___x_754_; size_t v___x_755_; 
v_node_753_ = lean_ctor_get(v___x_745_, 0);
v___x_754_ = ((size_t)5ULL);
v___x_755_ = lean_usize_shift_right(v_x_738_, v___x_754_);
v_x_737_ = v_node_753_;
v_x_738_ = v___x_755_;
goto _start;
}
default: 
{
lean_object* v___x_757_; 
v___x_757_ = lean_box(0);
return v___x_757_;
}
}
}
else
{
lean_object* v_ks_758_; lean_object* v_vs_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v_ks_758_ = lean_ctor_get(v_x_737_, 0);
v_vs_759_ = lean_ctor_get(v_x_737_, 1);
v___x_760_ = lean_unsigned_to_nat(0u);
v___x_761_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2_spec__6___redArg(v_ks_758_, v_vs_759_, v___x_760_, v_x_739_);
return v___x_761_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2___redArg___boxed(lean_object* v_x_762_, lean_object* v_x_763_, lean_object* v_x_764_){
_start:
{
size_t v_x_45511__boxed_765_; lean_object* v_res_766_; 
v_x_45511__boxed_765_ = lean_unbox_usize(v_x_763_);
lean_dec(v_x_763_);
v_res_766_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2___redArg(v_x_762_, v_x_45511__boxed_765_, v_x_764_);
lean_dec_ref(v_x_764_);
lean_dec_ref(v_x_762_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1___redArg(lean_object* v_x_767_, lean_object* v_x_768_){
_start:
{
size_t v___x_769_; size_t v___x_770_; size_t v___x_771_; uint64_t v___x_772_; size_t v___x_773_; lean_object* v___x_774_; 
v___x_769_ = lean_ptr_addr(v_x_768_);
v___x_770_ = ((size_t)3ULL);
v___x_771_ = lean_usize_shift_right(v___x_769_, v___x_770_);
v___x_772_ = lean_usize_to_uint64(v___x_771_);
v___x_773_ = lean_uint64_to_usize(v___x_772_);
v___x_774_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2___redArg(v_x_767_, v___x_773_, v_x_768_);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1___redArg___boxed(lean_object* v_x_775_, lean_object* v_x_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1___redArg(v_x_775_, v_x_776_);
lean_dec_ref(v_x_776_);
lean_dec_ref(v_x_775_);
return v_res_777_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___closed__2(void){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = ((lean_object*)(l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___closed__1));
v___x_781_ = l_Lean_stringToMessageData(v___x_780_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* lean_sym_dsimp(lean_object* v_e_u2081_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_){
_start:
{
lean_object* v_r_794_; lean_object* v___y_795_; lean_object* v_e_u2082_826_; lean_object* v___y_827_; lean_object* v___y_828_; lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_831_; lean_object* v___y_832_; lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v___y_835_; lean_object* v___y_841_; lean_object* v___y_842_; lean_object* v___y_843_; lean_object* v___y_844_; lean_object* v___y_845_; lean_object* v___y_846_; lean_object* v___y_847_; lean_object* v___y_848_; lean_object* v___y_849_; lean_object* v_a_850_; lean_object* v_e_x27_851_; uint8_t v_done_852_; lean_object* v_toCold_853_; lean_object* v_currRecDepth_854_; lean_object* v_ref_855_; uint16_t v_optionFlags_856_; uint8_t v_suppressElabErrors_857_; uint8_t v_checkDeprecated_858_; uint8_t v_isRecordingDeps_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_992_; 
v_toCold_853_ = lean_ctor_get(v_a_790_, 0);
v_currRecDepth_854_ = lean_ctor_get(v_a_790_, 1);
v_ref_855_ = lean_ctor_get(v_a_790_, 2);
v_optionFlags_856_ = lean_ctor_get_uint16(v_a_790_, sizeof(void*)*3);
v_suppressElabErrors_857_ = lean_ctor_get_uint8(v_a_790_, sizeof(void*)*3 + 2);
v_checkDeprecated_858_ = lean_ctor_get_uint8(v_a_790_, sizeof(void*)*3 + 3);
v_isRecordingDeps_859_ = lean_ctor_get_uint8(v_a_790_, sizeof(void*)*3 + 4);
v_isSharedCheck_992_ = !lean_is_exclusive(v_a_790_);
if (v_isSharedCheck_992_ == 0)
{
v___x_861_ = v_a_790_;
v_isShared_862_ = v_isSharedCheck_992_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_ref_855_);
lean_inc(v_currRecDepth_854_);
lean_inc(v_toCold_853_);
lean_dec(v_a_790_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_992_;
goto v_resetjp_860_;
}
v___jp_793_:
{
uint8_t v___x_796_; 
v___x_796_ = l_Lean_Expr_hasMVar(v_e_u2081_782_);
if (v___x_796_ == 0)
{
lean_object* v___x_797_; lean_object* v_numSteps_798_; lean_object* v_cache_799_; lean_object* v_transientCache_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_810_; 
v___x_797_ = lean_st_ref_take(v___y_795_);
v_numSteps_798_ = lean_ctor_get(v___x_797_, 0);
v_cache_799_ = lean_ctor_get(v___x_797_, 1);
v_transientCache_800_ = lean_ctor_get(v___x_797_, 2);
v_isSharedCheck_810_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_810_ == 0)
{
v___x_802_ = v___x_797_;
v_isShared_803_ = v_isSharedCheck_810_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_transientCache_800_);
lean_inc(v_cache_799_);
lean_inc(v_numSteps_798_);
lean_dec(v___x_797_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_810_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_804_; lean_object* v___x_806_; 
lean_inc_ref(v_r_794_);
v___x_804_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0___redArg(v_cache_799_, v_e_u2081_782_, v_r_794_);
if (v_isShared_803_ == 0)
{
lean_ctor_set(v___x_802_, 1, v___x_804_);
v___x_806_ = v___x_802_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_numSteps_798_);
lean_ctor_set(v_reuseFailAlloc_809_, 1, v___x_804_);
lean_ctor_set(v_reuseFailAlloc_809_, 2, v_transientCache_800_);
v___x_806_ = v_reuseFailAlloc_809_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_807_ = lean_st_ref_put(v___y_795_, v___x_806_);
lean_dec(v___y_795_);
v___x_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_808_, 0, v_r_794_);
return v___x_808_;
}
}
}
else
{
lean_object* v___x_811_; lean_object* v_numSteps_812_; lean_object* v_cache_813_; lean_object* v_transientCache_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_824_; 
v___x_811_ = lean_st_ref_take(v___y_795_);
v_numSteps_812_ = lean_ctor_get(v___x_811_, 0);
v_cache_813_ = lean_ctor_get(v___x_811_, 1);
v_transientCache_814_ = lean_ctor_get(v___x_811_, 2);
v_isSharedCheck_824_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_824_ == 0)
{
v___x_816_ = v___x_811_;
v_isShared_817_ = v_isSharedCheck_824_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_transientCache_814_);
lean_inc(v_cache_813_);
lean_inc(v_numSteps_812_);
lean_dec(v___x_811_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_824_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_818_; lean_object* v___x_820_; 
lean_inc_ref(v_r_794_);
v___x_818_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0___redArg(v_transientCache_814_, v_e_u2081_782_, v_r_794_);
if (v_isShared_817_ == 0)
{
lean_ctor_set(v___x_816_, 2, v___x_818_);
v___x_820_ = v___x_816_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v_numSteps_812_);
lean_ctor_set(v_reuseFailAlloc_823_, 1, v_cache_813_);
lean_ctor_set(v_reuseFailAlloc_823_, 2, v___x_818_);
v___x_820_ = v_reuseFailAlloc_823_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_821_ = lean_st_ref_put(v___y_795_, v___x_820_);
lean_dec(v___y_795_);
v___x_822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_822_, 0, v_r_794_);
return v___x_822_;
}
}
}
}
v___jp_825_:
{
lean_object* v___x_836_; 
lean_inc(v___y_829_);
lean_inc_ref(v_e_u2082_826_);
v___x_836_ = lean_sym_dsimp(v_e_u2082_826_, v___y_827_, v___y_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v_a_837_; 
v_a_837_ = lean_ctor_get(v___x_836_, 0);
lean_inc(v_a_837_);
lean_dec_ref_known(v___x_836_, 1);
if (lean_obj_tag(v_a_837_) == 0)
{
uint8_t v_done_838_; lean_object* v___x_839_; 
v_done_838_ = lean_ctor_get_uint8(v_a_837_, 0);
lean_dec_ref_known(v_a_837_, 0);
v___x_839_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_839_, 0, v_e_u2082_826_);
lean_ctor_set_uint8(v___x_839_, sizeof(void*)*1, v_done_838_);
v_r_794_ = v___x_839_;
v___y_795_ = v___y_829_;
goto v___jp_793_;
}
else
{
lean_dec_ref(v_e_u2082_826_);
v_r_794_ = v_a_837_;
v___y_795_ = v___y_829_;
goto v___jp_793_;
}
}
else
{
lean_dec(v___y_829_);
lean_dec_ref(v_e_u2082_826_);
lean_dec_ref(v_e_u2081_782_);
return v___x_836_;
}
}
v___jp_840_:
{
if (v_done_852_ == 0)
{
lean_dec_ref(v_a_850_);
v_e_u2082_826_ = v_e_x27_851_;
v___y_827_ = v___y_847_;
v___y_828_ = v___y_842_;
v___y_829_ = v___y_844_;
v___y_830_ = v___y_846_;
v___y_831_ = v___y_845_;
v___y_832_ = v___y_841_;
v___y_833_ = v___y_849_;
v___y_834_ = v___y_848_;
v___y_835_ = v___y_843_;
goto v___jp_825_;
}
else
{
lean_dec_ref(v_e_x27_851_);
lean_dec(v___y_849_);
lean_dec_ref(v___y_848_);
lean_dec(v___y_847_);
lean_dec_ref(v___y_846_);
lean_dec(v___y_845_);
lean_dec(v___y_843_);
lean_dec_ref(v___y_842_);
lean_dec_ref(v___y_841_);
v_r_794_ = v_a_850_;
v___y_795_ = v___y_844_;
goto v___jp_793_;
}
}
v_resetjp_860_:
{
lean_object* v_maxRecDepth_863_; lean_object* v___y_865_; lean_object* v___y_866_; lean_object* v___y_867_; lean_object* v___y_868_; lean_object* v___y_869_; lean_object* v___y_870_; lean_object* v___y_871_; lean_object* v___y_872_; lean_object* v___y_873_; lean_object* v___y_874_; lean_object* v___y_916_; lean_object* v___y_917_; lean_object* v___y_918_; lean_object* v___y_919_; lean_object* v___y_920_; lean_object* v___y_921_; lean_object* v___y_922_; lean_object* v___y_923_; lean_object* v___y_924_; lean_object* v___y_925_; lean_object* v___y_926_; lean_object* v___y_927_; lean_object* v___y_953_; lean_object* v___y_954_; lean_object* v___y_955_; lean_object* v___y_956_; lean_object* v___y_957_; lean_object* v___y_958_; lean_object* v___y_959_; lean_object* v___y_960_; lean_object* v___y_961_; lean_object* v___y_962_; lean_object* v___y_963_; lean_object* v___x_988_; uint8_t v___x_989_; 
v_maxRecDepth_863_ = lean_ctor_get(v_toCold_853_, 3);
v___x_988_ = lean_unsigned_to_nat(0u);
v___x_989_ = lean_nat_dec_eq(v_maxRecDepth_863_, v___x_988_);
if (v___x_989_ == 0)
{
uint8_t v___x_990_; 
v___x_990_ = lean_nat_dec_eq(v_currRecDepth_854_, v_maxRecDepth_863_);
if (v___x_990_ == 0)
{
goto v___jp_968_;
}
else
{
lean_object* v___x_991_; 
lean_del_object(v___x_861_);
lean_dec(v_currRecDepth_854_);
lean_dec_ref(v_toCold_853_);
lean_dec(v_a_791_);
lean_dec(v_a_789_);
lean_dec_ref(v_a_788_);
lean_dec(v_a_787_);
lean_dec_ref(v_a_786_);
lean_dec(v_a_785_);
lean_dec_ref(v_a_784_);
lean_dec(v_a_783_);
lean_dec_ref(v_e_u2081_782_);
v___x_991_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__2___redArg(v_ref_855_);
return v___x_991_;
}
}
else
{
goto v___jp_968_;
}
v___jp_864_:
{
lean_object* v___x_875_; lean_object* v_cache_876_; lean_object* v_transientCache_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_913_; 
v___x_875_ = lean_st_ref_take(v___y_868_);
v_cache_876_ = lean_ctor_get(v___x_875_, 1);
v_transientCache_877_ = lean_ctor_get(v___x_875_, 2);
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_913_ == 0)
{
lean_object* v_unused_914_; 
v_unused_914_ = lean_ctor_get(v___x_875_, 0);
lean_dec(v_unused_914_);
v___x_879_ = v___x_875_;
v_isShared_880_ = v_isSharedCheck_913_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_transientCache_877_);
lean_inc(v_cache_876_);
lean_dec(v___x_875_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_913_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 0, v___y_865_);
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v___y_865_);
lean_ctor_set(v_reuseFailAlloc_912_, 1, v_cache_876_);
lean_ctor_set(v_reuseFailAlloc_912_, 2, v_transientCache_877_);
v___x_882_ = v_reuseFailAlloc_912_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
lean_object* v___x_883_; lean_object* v_pre_884_; lean_object* v___x_885_; 
v___x_883_ = lean_st_ref_put(v___y_868_, v___x_882_);
v_pre_884_ = lean_ctor_get(v___y_866_, 0);
lean_inc_ref(v_pre_884_);
lean_inc(v___y_874_);
lean_inc_ref(v___y_873_);
lean_inc(v___y_872_);
lean_inc_ref(v___y_871_);
lean_inc(v___y_870_);
lean_inc_ref(v___y_869_);
lean_inc(v___y_868_);
lean_inc_ref(v___y_867_);
lean_inc(v___y_866_);
lean_inc_ref(v_e_u2081_782_);
v___x_885_ = lean_apply_11(v_pre_884_, v_e_u2081_782_, v___y_866_, v___y_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_, lean_box(0));
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_885_, 1);
if (lean_obj_tag(v_a_886_) == 0)
{
uint8_t v_done_887_; 
v_done_887_ = lean_ctor_get_uint8(v_a_886_, 0);
if (v_done_887_ == 0)
{
lean_object* v___x_888_; lean_object* v___x_889_; 
lean_dec_ref_known(v_a_886_, 0);
v___x_888_ = lean_box(0);
lean_inc_ref(v_e_u2081_782_);
v___x_889_ = l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep(v_e_u2081_782_, v___y_866_, v___y_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
if (lean_obj_tag(v___x_889_) == 0)
{
lean_object* v_a_890_; 
v_a_890_ = lean_ctor_get(v___x_889_, 0);
lean_inc(v_a_890_);
lean_dec_ref_known(v___x_889_, 1);
if (lean_obj_tag(v_a_890_) == 0)
{
uint8_t v_done_891_; 
v_done_891_ = lean_ctor_get_uint8(v_a_890_, 0);
if (v_done_891_ == 0)
{
lean_object* v___x_892_; 
lean_dec_ref_known(v_a_890_, 0);
lean_inc_ref(v_e_u2081_782_);
v___x_892_ = l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___lam__0(v___x_888_, v_e_u2081_782_, v___y_866_, v___y_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v_a_893_; 
v_a_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_a_893_);
lean_dec_ref_known(v___x_892_, 1);
if (lean_obj_tag(v_a_893_) == 0)
{
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec(v___y_872_);
lean_dec_ref(v___y_871_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
lean_dec_ref(v___y_867_);
lean_dec(v___y_866_);
v_r_794_ = v_a_893_;
v___y_795_ = v___y_868_;
goto v___jp_793_;
}
else
{
lean_object* v_e_x27_894_; uint8_t v_done_895_; 
v_e_x27_894_ = lean_ctor_get(v_a_893_, 0);
lean_inc_ref(v_e_x27_894_);
v_done_895_ = lean_ctor_get_uint8(v_a_893_, sizeof(void*)*1);
v___y_841_ = v___y_871_;
v___y_842_ = v___y_867_;
v___y_843_ = v___y_874_;
v___y_844_ = v___y_868_;
v___y_845_ = v___y_870_;
v___y_846_ = v___y_869_;
v___y_847_ = v___y_866_;
v___y_848_ = v___y_873_;
v___y_849_ = v___y_872_;
v_a_850_ = v_a_893_;
v_e_x27_851_ = v_e_x27_894_;
v_done_852_ = v_done_895_;
goto v___jp_840_;
}
}
else
{
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec(v___y_872_);
lean_dec_ref(v___y_871_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
lean_dec(v___y_868_);
lean_dec_ref(v___y_867_);
lean_dec(v___y_866_);
lean_dec_ref(v_e_u2081_782_);
return v___x_892_;
}
}
else
{
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec(v___y_872_);
lean_dec_ref(v___y_871_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
lean_dec_ref(v___y_867_);
lean_dec(v___y_866_);
v_r_794_ = v_a_890_;
v___y_795_ = v___y_868_;
goto v___jp_793_;
}
}
else
{
uint8_t v_done_896_; 
v_done_896_ = lean_ctor_get_uint8(v_a_890_, sizeof(void*)*1);
if (v_done_896_ == 0)
{
lean_object* v_e_x27_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_909_; 
v_e_x27_897_ = lean_ctor_get(v_a_890_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v_a_890_);
if (v_isSharedCheck_909_ == 0)
{
v___x_899_ = v_a_890_;
v_isShared_900_ = v_isSharedCheck_909_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_e_x27_897_);
lean_dec(v_a_890_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_909_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_901_; 
lean_inc_ref(v_e_x27_897_);
v___x_901_ = l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___lam__0(v___x_888_, v_e_x27_897_, v___y_866_, v___y_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v_a_902_; 
v_a_902_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_a_902_);
lean_dec_ref_known(v___x_901_, 1);
if (lean_obj_tag(v_a_902_) == 0)
{
uint8_t v_done_903_; lean_object* v___x_905_; 
v_done_903_ = lean_ctor_get_uint8(v_a_902_, 0);
lean_dec_ref_known(v_a_902_, 0);
lean_inc_ref(v_e_x27_897_);
if (v_isShared_900_ == 0)
{
v___x_905_ = v___x_899_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_e_x27_897_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
lean_ctor_set_uint8(v___x_905_, sizeof(void*)*1, v_done_903_);
v___y_841_ = v___y_871_;
v___y_842_ = v___y_867_;
v___y_843_ = v___y_874_;
v___y_844_ = v___y_868_;
v___y_845_ = v___y_870_;
v___y_846_ = v___y_869_;
v___y_847_ = v___y_866_;
v___y_848_ = v___y_873_;
v___y_849_ = v___y_872_;
v_a_850_ = v___x_905_;
v_e_x27_851_ = v_e_x27_897_;
v_done_852_ = v_done_903_;
goto v___jp_840_;
}
}
else
{
lean_object* v_e_x27_907_; uint8_t v_done_908_; 
lean_del_object(v___x_899_);
lean_dec_ref(v_e_x27_897_);
v_e_x27_907_ = lean_ctor_get(v_a_902_, 0);
lean_inc_ref(v_e_x27_907_);
v_done_908_ = lean_ctor_get_uint8(v_a_902_, sizeof(void*)*1);
v___y_841_ = v___y_871_;
v___y_842_ = v___y_867_;
v___y_843_ = v___y_874_;
v___y_844_ = v___y_868_;
v___y_845_ = v___y_870_;
v___y_846_ = v___y_869_;
v___y_847_ = v___y_866_;
v___y_848_ = v___y_873_;
v___y_849_ = v___y_872_;
v_a_850_ = v_a_902_;
v_e_x27_851_ = v_e_x27_907_;
v_done_852_ = v_done_908_;
goto v___jp_840_;
}
}
else
{
lean_del_object(v___x_899_);
lean_dec_ref(v_e_x27_897_);
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec(v___y_872_);
lean_dec_ref(v___y_871_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
lean_dec(v___y_868_);
lean_dec_ref(v___y_867_);
lean_dec(v___y_866_);
lean_dec_ref(v_e_u2081_782_);
return v___x_901_;
}
}
}
else
{
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec(v___y_872_);
lean_dec_ref(v___y_871_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
lean_dec_ref(v___y_867_);
lean_dec(v___y_866_);
v_r_794_ = v_a_890_;
v___y_795_ = v___y_868_;
goto v___jp_793_;
}
}
}
else
{
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec(v___y_872_);
lean_dec_ref(v___y_871_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
lean_dec(v___y_868_);
lean_dec_ref(v___y_867_);
lean_dec(v___y_866_);
lean_dec_ref(v_e_u2081_782_);
return v___x_889_;
}
}
else
{
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec(v___y_872_);
lean_dec_ref(v___y_871_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
lean_dec_ref(v___y_867_);
lean_dec(v___y_866_);
v_r_794_ = v_a_886_;
v___y_795_ = v___y_868_;
goto v___jp_793_;
}
}
else
{
uint8_t v_done_910_; 
v_done_910_ = lean_ctor_get_uint8(v_a_886_, sizeof(void*)*1);
if (v_done_910_ == 0)
{
lean_object* v_e_x27_911_; 
v_e_x27_911_ = lean_ctor_get(v_a_886_, 0);
lean_inc_ref(v_e_x27_911_);
lean_dec_ref_known(v_a_886_, 1);
v_e_u2082_826_ = v_e_x27_911_;
v___y_827_ = v___y_866_;
v___y_828_ = v___y_867_;
v___y_829_ = v___y_868_;
v___y_830_ = v___y_869_;
v___y_831_ = v___y_870_;
v___y_832_ = v___y_871_;
v___y_833_ = v___y_872_;
v___y_834_ = v___y_873_;
v___y_835_ = v___y_874_;
goto v___jp_825_;
}
else
{
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec(v___y_872_);
lean_dec_ref(v___y_871_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
lean_dec_ref(v___y_867_);
lean_dec(v___y_866_);
v_r_794_ = v_a_886_;
v___y_795_ = v___y_868_;
goto v___jp_793_;
}
}
}
else
{
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec(v___y_872_);
lean_dec_ref(v___y_871_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
lean_dec(v___y_868_);
lean_dec_ref(v___y_867_);
lean_dec(v___y_866_);
lean_dec_ref(v_e_u2081_782_);
return v___x_885_;
}
}
}
}
v___jp_915_:
{
lean_object* v___x_928_; 
v___x_928_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1___redArg(v___y_927_, v_e_u2081_782_);
lean_dec_ref(v___y_927_);
if (lean_obj_tag(v___x_928_) == 1)
{
lean_object* v_val_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_936_; 
lean_dec(v___y_926_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
lean_dec_ref(v___y_919_);
lean_dec(v___y_917_);
lean_dec(v___y_916_);
lean_dec_ref(v_e_u2081_782_);
v_val_929_ = lean_ctor_get(v___x_928_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_928_);
if (v_isSharedCheck_936_ == 0)
{
v___x_931_ = v___x_928_;
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_val_929_);
lean_dec(v___x_928_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v___x_934_; 
if (v_isShared_932_ == 0)
{
lean_ctor_set_tag(v___x_931_, 0);
v___x_934_ = v___x_931_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v_val_929_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
}
else
{
lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; uint8_t v___x_941_; 
lean_dec(v___x_928_);
v___x_937_ = lean_nat_add(v___y_926_, v___y_918_);
lean_dec(v___y_926_);
v___x_938_ = lean_unsigned_to_nat(1000u);
v___x_939_ = lean_nat_mod(v___x_937_, v___x_938_);
v___x_940_ = lean_unsigned_to_nat(0u);
v___x_941_ = lean_nat_dec_eq(v___x_939_, v___x_940_);
lean_dec(v___x_939_);
if (v___x_941_ == 0)
{
v___y_865_ = v___x_937_;
v___y_866_ = v___y_916_;
v___y_867_ = v___y_922_;
v___y_868_ = v___y_925_;
v___y_869_ = v___y_920_;
v___y_870_ = v___y_921_;
v___y_871_ = v___y_924_;
v___y_872_ = v___y_923_;
v___y_873_ = v___y_919_;
v___y_874_ = v___y_917_;
goto v___jp_864_;
}
else
{
lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_942_ = ((lean_object*)(l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___closed__0));
v___x_943_ = l_Lean_Core_checkSystem(v___x_942_, v___y_919_, v___y_917_);
if (lean_obj_tag(v___x_943_) == 0)
{
lean_dec_ref_known(v___x_943_, 1);
v___y_865_ = v___x_937_;
v___y_866_ = v___y_916_;
v___y_867_ = v___y_922_;
v___y_868_ = v___y_925_;
v___y_869_ = v___y_920_;
v___y_870_ = v___y_921_;
v___y_871_ = v___y_924_;
v___y_872_ = v___y_923_;
v___y_873_ = v___y_919_;
v___y_874_ = v___y_917_;
goto v___jp_864_;
}
else
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
lean_dec(v___x_937_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
lean_dec_ref(v___y_919_);
lean_dec(v___y_917_);
lean_dec(v___y_916_);
lean_dec_ref(v_e_u2081_782_);
v_a_944_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v___x_943_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_943_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_a_944_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
}
}
}
v___jp_952_:
{
lean_object* v___x_964_; uint8_t v___x_965_; 
v___x_964_ = lean_st_ref_get(v___y_957_);
v___x_965_ = l_Lean_Expr_hasMVar(v_e_u2081_782_);
if (v___x_965_ == 0)
{
lean_object* v_cache_966_; 
v_cache_966_ = lean_ctor_get(v___x_964_, 1);
lean_inc_ref(v_cache_966_);
lean_dec(v___x_964_);
v___y_916_ = v___y_955_;
v___y_917_ = v___y_963_;
v___y_918_ = v___y_953_;
v___y_919_ = v___y_962_;
v___y_920_ = v___y_958_;
v___y_921_ = v___y_959_;
v___y_922_ = v___y_956_;
v___y_923_ = v___y_961_;
v___y_924_ = v___y_960_;
v___y_925_ = v___y_957_;
v___y_926_ = v___y_954_;
v___y_927_ = v_cache_966_;
goto v___jp_915_;
}
else
{
lean_object* v_transientCache_967_; 
v_transientCache_967_ = lean_ctor_get(v___x_964_, 2);
lean_inc_ref(v_transientCache_967_);
lean_dec(v___x_964_);
v___y_916_ = v___y_955_;
v___y_917_ = v___y_963_;
v___y_918_ = v___y_953_;
v___y_919_ = v___y_962_;
v___y_920_ = v___y_958_;
v___y_921_ = v___y_959_;
v___y_922_ = v___y_956_;
v___y_923_ = v___y_961_;
v___y_924_ = v___y_960_;
v___y_925_ = v___y_957_;
v___y_926_ = v___y_954_;
v___y_927_ = v_transientCache_967_;
goto v___jp_915_;
}
}
v___jp_968_:
{
lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_972_; 
v___x_969_ = lean_unsigned_to_nat(1u);
v___x_970_ = lean_nat_add(v_currRecDepth_854_, v___x_969_);
lean_dec(v_currRecDepth_854_);
if (v_isShared_862_ == 0)
{
lean_ctor_set(v___x_861_, 1, v___x_970_);
v___x_972_ = v___x_861_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_toCold_853_);
lean_ctor_set(v_reuseFailAlloc_987_, 1, v___x_970_);
lean_ctor_set(v_reuseFailAlloc_987_, 2, v_ref_855_);
lean_ctor_set_uint16(v_reuseFailAlloc_987_, sizeof(void*)*3, v_optionFlags_856_);
lean_ctor_set_uint8(v_reuseFailAlloc_987_, sizeof(void*)*3 + 2, v_suppressElabErrors_857_);
lean_ctor_set_uint8(v_reuseFailAlloc_987_, sizeof(void*)*3 + 3, v_checkDeprecated_858_);
lean_ctor_set_uint8(v_reuseFailAlloc_987_, sizeof(void*)*3 + 4, v_isRecordingDeps_859_);
v___x_972_ = v_reuseFailAlloc_987_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
lean_object* v___x_973_; lean_object* v_numSteps_974_; lean_object* v_maxSteps_975_; uint8_t v___x_976_; 
v___x_973_ = lean_st_ref_get(v_a_785_);
v_numSteps_974_ = lean_ctor_get(v___x_973_, 0);
lean_inc(v_numSteps_974_);
lean_dec(v___x_973_);
v_maxSteps_975_ = lean_ctor_get(v_a_784_, 0);
v___x_976_ = lean_nat_dec_le(v_maxSteps_975_, v_numSteps_974_);
if (v___x_976_ == 0)
{
v___y_953_ = v___x_969_;
v___y_954_ = v_numSteps_974_;
v___y_955_ = v_a_783_;
v___y_956_ = v_a_784_;
v___y_957_ = v_a_785_;
v___y_958_ = v_a_786_;
v___y_959_ = v_a_787_;
v___y_960_ = v_a_788_;
v___y_961_ = v_a_789_;
v___y_962_ = v___x_972_;
v___y_963_ = v_a_791_;
goto v___jp_952_;
}
else
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_986_; 
lean_dec(v_numSteps_974_);
lean_dec(v_a_787_);
lean_dec_ref(v_a_786_);
lean_dec(v_a_785_);
lean_dec_ref(v_a_784_);
lean_dec(v_a_783_);
lean_dec_ref(v_e_u2081_782_);
v___x_977_ = lean_obj_once(&l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___closed__2, &l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___closed__2_once, _init_l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___closed__2);
v___x_978_ = l_Lean_throwError___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpStep_spec__0___redArg(v___x_977_, v_a_788_, v_a_789_, v___x_972_, v_a_791_);
lean_dec(v_a_791_);
lean_dec_ref(v___x_972_);
lean_dec(v_a_789_);
lean_dec_ref(v_a_788_);
v_a_979_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_986_ == 0)
{
v___x_981_ = v___x_978_;
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_a_979_);
lean_dec(v___x_978_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_984_; 
if (v_isShared_982_ == 0)
{
v___x_984_ = v___x_981_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_a_979_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl___boxed(lean_object* v_e_u2081_993_, lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = lean_sym_dsimp(v_e_u2081_993_, v_a_994_, v_a_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_, v_a_1001_, v_a_1002_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0(lean_object* v_00_u03b2_1005_, lean_object* v_x_1006_, lean_object* v_x_1007_, lean_object* v_x_1008_){
_start:
{
lean_object* v___x_1009_; 
v___x_1009_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0___redArg(v_x_1006_, v_x_1007_, v_x_1008_);
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1(lean_object* v_00_u03b2_1010_, lean_object* v_x_1011_, lean_object* v_x_1012_){
_start:
{
lean_object* v___x_1013_; 
v___x_1013_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1___redArg(v_x_1011_, v_x_1012_);
return v___x_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1___boxed(lean_object* v_00_u03b2_1014_, lean_object* v_x_1015_, lean_object* v_x_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1(v_00_u03b2_1014_, v_x_1015_, v_x_1016_);
lean_dec_ref(v_x_1016_);
lean_dec_ref(v_x_1015_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0(lean_object* v_00_u03b2_1018_, lean_object* v_x_1019_, size_t v_x_1020_, size_t v_x_1021_, lean_object* v_x_1022_, lean_object* v_x_1023_){
_start:
{
lean_object* v___x_1024_; 
v___x_1024_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0___redArg(v_x_1019_, v_x_1020_, v_x_1021_, v_x_1022_, v_x_1023_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1025_, lean_object* v_x_1026_, lean_object* v_x_1027_, lean_object* v_x_1028_, lean_object* v_x_1029_, lean_object* v_x_1030_){
_start:
{
size_t v_x_45975__boxed_1031_; size_t v_x_45976__boxed_1032_; lean_object* v_res_1033_; 
v_x_45975__boxed_1031_ = lean_unbox_usize(v_x_1027_);
lean_dec(v_x_1027_);
v_x_45976__boxed_1032_ = lean_unbox_usize(v_x_1028_);
lean_dec(v_x_1028_);
v_res_1033_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0(v_00_u03b2_1025_, v_x_1026_, v_x_45975__boxed_1031_, v_x_45976__boxed_1032_, v_x_1029_, v_x_1030_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2(lean_object* v_00_u03b2_1034_, lean_object* v_x_1035_, size_t v_x_1036_, lean_object* v_x_1037_){
_start:
{
lean_object* v___x_1038_; 
v___x_1038_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2___redArg(v_x_1035_, v_x_1036_, v_x_1037_);
return v___x_1038_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1039_, lean_object* v_x_1040_, lean_object* v_x_1041_, lean_object* v_x_1042_){
_start:
{
size_t v_x_45992__boxed_1043_; lean_object* v_res_1044_; 
v_x_45992__boxed_1043_ = lean_unbox_usize(v_x_1041_);
lean_dec(v_x_1041_);
v_res_1044_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2(v_00_u03b2_1039_, v_x_1040_, v_x_45992__boxed_1043_, v_x_1042_);
lean_dec_ref(v_x_1042_);
lean_dec_ref(v_x_1040_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1045_, lean_object* v_n_1046_, lean_object* v_k_1047_, lean_object* v_v_1048_){
_start:
{
lean_object* v___x_1049_; 
v___x_1049_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__2___redArg(v_n_1046_, v_k_1047_, v_v_1048_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_1050_, size_t v_depth_1051_, lean_object* v_keys_1052_, lean_object* v_vals_1053_, lean_object* v_heq_1054_, lean_object* v_i_1055_, lean_object* v_entries_1056_){
_start:
{
lean_object* v___x_1057_; 
v___x_1057_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__3___redArg(v_depth_1051_, v_keys_1052_, v_vals_1053_, v_i_1055_, v_entries_1056_);
return v___x_1057_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_1058_, lean_object* v_depth_1059_, lean_object* v_keys_1060_, lean_object* v_vals_1061_, lean_object* v_heq_1062_, lean_object* v_i_1063_, lean_object* v_entries_1064_){
_start:
{
size_t v_depth_boxed_1065_; lean_object* v_res_1066_; 
v_depth_boxed_1065_ = lean_unbox_usize(v_depth_1059_);
lean_dec(v_depth_1059_);
v_res_1066_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__3(v_00_u03b2_1058_, v_depth_boxed_1065_, v_keys_1060_, v_vals_1061_, v_heq_1062_, v_i_1063_, v_entries_1064_);
lean_dec_ref(v_vals_1061_);
lean_dec_ref(v_keys_1060_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2_spec__6(lean_object* v_00_u03b2_1067_, lean_object* v_keys_1068_, lean_object* v_vals_1069_, lean_object* v_heq_1070_, lean_object* v_i_1071_, lean_object* v_k_1072_){
_start:
{
lean_object* v___x_1073_; 
v___x_1073_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2_spec__6___redArg(v_keys_1068_, v_vals_1069_, v_i_1071_, v_k_1072_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2_spec__6___boxed(lean_object* v_00_u03b2_1074_, lean_object* v_keys_1075_, lean_object* v_vals_1076_, lean_object* v_heq_1077_, lean_object* v_i_1078_, lean_object* v_k_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__1_spec__2_spec__6(v_00_u03b2_1074_, v_keys_1075_, v_vals_1076_, v_heq_1077_, v_i_1078_, v_k_1079_);
lean_dec_ref(v_k_1079_);
lean_dec_ref(v_vals_1076_);
lean_dec_ref(v_keys_1075_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_1081_, lean_object* v_x_1082_, lean_object* v_x_1083_, lean_object* v_x_1084_, lean_object* v_x_1085_){
_start:
{
lean_object* v___x_1086_; 
v___x_1086_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_DSimp_Main_0__Lean_Meta_Sym_DSimp_dsimpImpl_spec__0_spec__0_spec__2_spec__4___redArg(v_x_1082_, v_x_1083_, v_x_1084_, v_x_1085_);
return v___x_1086_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_DSimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_DSimproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_App(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_Lambda(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_Forall(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_Let(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_DSimp_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_DSimp_DSimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp_DSimproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp_Lambda(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp_Let(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_DSimp_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_DSimp_DSimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_DSimp_DSimproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_DSimp_App(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_DSimp_Lambda(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_DSimp_Forall(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_DSimp_Let(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_DSimp_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_DSimp_DSimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_DSimp_DSimproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_DSimp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_DSimp_Lambda(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_DSimp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_DSimp_Let(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_DSimp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_DSimp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_DSimp_Main(builtin);
}
#ifdef __cplusplus
}
#endif
