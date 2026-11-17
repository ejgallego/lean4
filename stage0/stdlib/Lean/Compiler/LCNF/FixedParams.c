// Lean compiler output
// Module: Lean.Compiler.LCNF.FixedParams
// Imports: public import Lean.Compiler.LCNF.Basic
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
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_top_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_top_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_erased_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_erased_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_val_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_val_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__5_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__6_value;
static const lean_closure_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__1_value),((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__2_value)}};
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__8_value),((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__3_value),((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__4_value),((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__5_value),((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__6_value)}};
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__9_value),((lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__7_value)}};
static const lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalFVar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalFVar___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_inMutualBlock(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_inMutualBlock___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkAssignment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkAssignment___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalApp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalLetValue(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalCode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalLetValue___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkInitialValues(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkInitialValues___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFixedParamsMap(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorIdx___impl(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 2)
{
lean_object* v_i_7_; lean_object* v___x_8_; 
v_i_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_i_7_);
lean_dec_ref_known(v_t_5_, 1);
v___x_8_ = lean_apply_1(v_k_6_, v_i_7_);
return v___x_8_;
}
else
{
lean_dec(v_t_5_);
return v_k_6_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim(lean_object* v_motive_9_, lean_object* v_ctorIdx_10_, lean_object* v_t_11_, lean_object* v_h_12_, lean_object* v_k_13_){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_11_, v_k_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_17_, v_h_18_, v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_top_elim___redArg(lean_object* v_t_21_, lean_object* v_top_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_21_, v_top_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_top_elim(lean_object* v_motive_24_, lean_object* v_t_25_, lean_object* v_h_26_, lean_object* v_top_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_25_, v_top_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_erased_elim___redArg(lean_object* v_t_29_, lean_object* v_erased_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_29_, v_erased_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_erased_elim(lean_object* v_motive_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_erased_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_33_, v_erased_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_val_elim___redArg(lean_object* v_t_37_, lean_object* v_val_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_37_, v_val_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_AbsValue_val_elim(lean_object* v_motive_40_, lean_object* v_t_41_, lean_object* v_h_42_, lean_object* v_val_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lean_Compiler_LCNF_FixedParams_AbsValue_ctorElim___redArg(v_t_41_, v_val_43_);
return v___x_44_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lean_box(0);
return v___x_45_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_box(0);
return v___x_46_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(lean_object* v_x_47_, lean_object* v_x_48_){
_start:
{
switch(lean_obj_tag(v_x_47_))
{
case 0:
{
if (lean_obj_tag(v_x_48_) == 0)
{
uint8_t v___x_49_; 
v___x_49_ = 1;
return v___x_49_;
}
else
{
uint8_t v___x_50_; 
v___x_50_ = 0;
return v___x_50_;
}
}
case 1:
{
if (lean_obj_tag(v_x_48_) == 1)
{
uint8_t v___x_51_; 
v___x_51_ = 1;
return v___x_51_;
}
else
{
uint8_t v___x_52_; 
v___x_52_ = 0;
return v___x_52_;
}
}
default: 
{
if (lean_obj_tag(v_x_48_) == 2)
{
lean_object* v_i_53_; lean_object* v_i_54_; uint8_t v___x_55_; 
v_i_53_ = lean_ctor_get(v_x_47_, 0);
v_i_54_ = lean_ctor_get(v_x_48_, 0);
v___x_55_ = lean_nat_dec_eq(v_i_53_, v_i_54_);
return v___x_55_;
}
else
{
uint8_t v___x_56_; 
v___x_56_ = 0;
return v___x_56_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq___boxed(lean_object* v_x_57_, lean_object* v_x_58_){
_start:
{
uint8_t v_res_59_; lean_object* v_r_60_; 
v_res_59_ = l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(v_x_57_, v_x_58_);
lean_dec(v_x_58_);
lean_dec(v_x_57_);
v_r_60_ = lean_box(v_res_59_);
return v_r_60_;
}
}
LEAN_EXPORT uint64_t l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash(lean_object* v_x_63_){
_start:
{
switch(lean_obj_tag(v_x_63_))
{
case 0:
{
uint64_t v___x_64_; 
v___x_64_ = 0ULL;
return v___x_64_;
}
case 1:
{
uint64_t v___x_65_; 
v___x_65_ = 1ULL;
return v___x_65_;
}
default: 
{
lean_object* v_i_66_; uint64_t v___x_67_; uint64_t v___x_68_; uint64_t v___x_69_; 
v_i_66_ = lean_ctor_get(v_x_63_, 0);
v___x_67_ = 2ULL;
v___x_68_ = lean_uint64_of_nat(v_i_66_);
v___x_69_ = lean_uint64_mix_hash(v___x_67_, v___x_68_);
return v___x_69_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash___boxed(lean_object* v_x_70_){
_start:
{
uint64_t v_res_71_; lean_object* v_r_72_; 
v_res_71_ = l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash(v_x_70_);
lean_dec(v_x_70_);
v_r_72_ = lean_box_uint64(v_res_71_);
return v_r_72_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0(uint8_t v_x_75_){
_start:
{
uint8_t v___x_76_; 
v___x_76_ = 0;
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0___boxed(lean_object* v_x_77_){
_start:
{
uint8_t v_x_273__boxed_78_; uint8_t v_res_79_; lean_object* v_r_80_; 
v_x_273__boxed_78_ = lean_unbox(v_x_77_);
v_res_79_ = l_Lean_Compiler_LCNF_FixedParams_abort___redArg___lam__0(v_x_273__boxed_78_);
v_r_80_ = lean_box(v_res_79_);
return v_r_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___redArg(lean_object* v_a_101_){
_start:
{
lean_object* v_visited_102_; lean_object* v_fixed_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_117_; 
v_visited_102_ = lean_ctor_get(v_a_101_, 0);
v_fixed_103_ = lean_ctor_get(v_a_101_, 1);
v_isSharedCheck_117_ = !lean_is_exclusive(v_a_101_);
if (v_isSharedCheck_117_ == 0)
{
v___x_105_ = v_a_101_;
v_isShared_106_ = v_isSharedCheck_117_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_fixed_103_);
lean_inc(v_visited_102_);
lean_dec(v_a_101_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_117_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___f_107_; lean_object* v___x_108_; size_t v_sz_109_; size_t v___x_110_; lean_object* v___x_111_; lean_object* v___x_113_; 
v___f_107_ = ((lean_object*)(l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0));
v___x_108_ = ((lean_object*)(l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10));
v_sz_109_ = lean_array_size(v_fixed_103_);
v___x_110_ = ((size_t)0ULL);
v___x_111_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_108_, v___f_107_, v_sz_109_, v___x_110_, v_fixed_103_);
if (v_isShared_106_ == 0)
{
lean_ctor_set(v___x_105_, 1, v___x_111_);
v___x_113_ = v___x_105_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v_visited_102_);
lean_ctor_set(v_reuseFailAlloc_116_, 1, v___x_111_);
v___x_113_ = v_reuseFailAlloc_116_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = lean_box(0);
v___x_115_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
lean_ctor_set(v___x_115_, 1, v___x_113_);
return v___x_115_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort(lean_object* v_00_u03b1_118_, lean_object* v_a_119_, lean_object* v_a_120_){
_start:
{
lean_object* v_visited_121_; lean_object* v_fixed_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_136_; 
v_visited_121_ = lean_ctor_get(v_a_120_, 0);
v_fixed_122_ = lean_ctor_get(v_a_120_, 1);
v_isSharedCheck_136_ = !lean_is_exclusive(v_a_120_);
if (v_isSharedCheck_136_ == 0)
{
v___x_124_ = v_a_120_;
v_isShared_125_ = v_isSharedCheck_136_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_fixed_122_);
lean_inc(v_visited_121_);
lean_dec(v_a_120_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_136_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___f_126_; lean_object* v___x_127_; size_t v_sz_128_; size_t v___x_129_; lean_object* v___x_130_; lean_object* v___x_132_; 
v___f_126_ = ((lean_object*)(l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__0));
v___x_127_ = ((lean_object*)(l_Lean_Compiler_LCNF_FixedParams_abort___redArg___closed__10));
v_sz_128_ = lean_array_size(v_fixed_122_);
v___x_129_ = ((size_t)0ULL);
v___x_130_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_127_, v___f_126_, v_sz_128_, v___x_129_, v_fixed_122_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 1, v___x_130_);
v___x_132_ = v___x_124_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_visited_121_);
lean_ctor_set(v_reuseFailAlloc_135_, 1, v___x_130_);
v___x_132_ = v_reuseFailAlloc_135_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_133_ = lean_box(0);
v___x_134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
lean_ctor_set(v___x_134_, 1, v___x_132_);
return v___x_134_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_abort___boxed(lean_object* v_00_u03b1_137_, lean_object* v_a_138_, lean_object* v_a_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lean_Compiler_LCNF_FixedParams_abort(v_00_u03b1_137_, v_a_138_, v_a_139_);
lean_dec_ref(v_a_138_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg(lean_object* v_t_141_, lean_object* v_k_142_){
_start:
{
if (lean_obj_tag(v_t_141_) == 0)
{
lean_object* v_k_143_; lean_object* v_v_144_; lean_object* v_l_145_; lean_object* v_r_146_; uint8_t v___x_147_; 
v_k_143_ = lean_ctor_get(v_t_141_, 1);
v_v_144_ = lean_ctor_get(v_t_141_, 2);
v_l_145_ = lean_ctor_get(v_t_141_, 3);
v_r_146_ = lean_ctor_get(v_t_141_, 4);
v___x_147_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_142_, v_k_143_);
switch(v___x_147_)
{
case 0:
{
v_t_141_ = v_l_145_;
goto _start;
}
case 1:
{
lean_object* v___x_149_; 
lean_inc(v_v_144_);
v___x_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_149_, 0, v_v_144_);
return v___x_149_;
}
default: 
{
v_t_141_ = v_r_146_;
goto _start;
}
}
}
else
{
lean_object* v___x_151_; 
v___x_151_ = lean_box(0);
return v___x_151_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg___boxed(lean_object* v_t_152_, lean_object* v_k_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg(v_t_152_, v_k_153_);
lean_dec(v_k_153_);
lean_dec(v_t_152_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalFVar(lean_object* v_fvarId_155_, lean_object* v_a_156_, lean_object* v_a_157_){
_start:
{
lean_object* v_assignment_158_; lean_object* v___x_159_; 
v_assignment_158_ = lean_ctor_get(v_a_156_, 2);
v___x_159_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg(v_assignment_158_, v_fvarId_155_);
if (lean_obj_tag(v___x_159_) == 1)
{
lean_object* v_val_160_; lean_object* v___x_161_; 
v_val_160_ = lean_ctor_get(v___x_159_, 0);
lean_inc(v_val_160_);
lean_dec_ref_known(v___x_159_, 1);
v___x_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_161_, 0, v_val_160_);
lean_ctor_set(v___x_161_, 1, v_a_157_);
return v___x_161_;
}
else
{
lean_object* v___x_162_; lean_object* v___x_163_; 
lean_dec(v___x_159_);
v___x_162_ = lean_box(0);
v___x_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
lean_ctor_set(v___x_163_, 1, v_a_157_);
return v___x_163_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalFVar___boxed(lean_object* v_fvarId_164_, lean_object* v_a_165_, lean_object* v_a_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_Lean_Compiler_LCNF_FixedParams_evalFVar(v_fvarId_164_, v_a_165_, v_a_166_);
lean_dec_ref(v_a_165_);
lean_dec(v_fvarId_164_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0(lean_object* v_00_u03b4_168_, lean_object* v_t_169_, lean_object* v_k_170_){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg(v_t_169_, v_k_170_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___boxed(lean_object* v_00_u03b4_172_, lean_object* v_t_173_, lean_object* v_k_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0(v_00_u03b4_172_, v_t_173_, v_k_174_);
lean_dec(v_k_174_);
lean_dec(v_t_173_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalArg(lean_object* v_arg_176_, lean_object* v_a_177_, lean_object* v_a_178_){
_start:
{
switch(lean_obj_tag(v_arg_176_))
{
case 0:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = lean_box(1);
v___x_180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
lean_ctor_set(v___x_180_, 1, v_a_178_);
return v___x_180_;
}
case 1:
{
lean_object* v_fvarId_181_; lean_object* v___x_182_; 
v_fvarId_181_ = lean_ctor_get(v_arg_176_, 0);
v___x_182_ = l_Lean_Compiler_LCNF_FixedParams_evalFVar(v_fvarId_181_, v_a_177_, v_a_178_);
return v___x_182_;
}
default: 
{
lean_object* v_expr_183_; 
v_expr_183_ = lean_ctor_get(v_arg_176_, 0);
if (lean_obj_tag(v_expr_183_) == 1)
{
lean_object* v_fvarId_184_; lean_object* v___x_185_; 
v_fvarId_184_ = lean_ctor_get(v_expr_183_, 0);
v___x_185_ = l_Lean_Compiler_LCNF_FixedParams_evalFVar(v_fvarId_184_, v_a_177_, v_a_178_);
return v___x_185_;
}
else
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = lean_box(0);
v___x_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
lean_ctor_set(v___x_187_, 1, v_a_178_);
return v___x_187_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalArg___boxed(lean_object* v_arg_188_, lean_object* v_a_189_, lean_object* v_a_190_){
_start:
{
lean_object* v_res_191_; 
v_res_191_ = l_Lean_Compiler_LCNF_FixedParams_evalArg(v_arg_188_, v_a_189_, v_a_190_);
lean_dec_ref(v_a_189_);
lean_dec(v_arg_188_);
return v_res_191_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0(lean_object* v_declName_192_, lean_object* v_as_193_, size_t v_i_194_, size_t v_stop_195_){
_start:
{
uint8_t v___x_196_; 
v___x_196_ = lean_usize_dec_eq(v_i_194_, v_stop_195_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; lean_object* v_toSignature_198_; lean_object* v_name_199_; uint8_t v___x_200_; 
v___x_197_ = lean_array_uget_borrowed(v_as_193_, v_i_194_);
v_toSignature_198_ = lean_ctor_get(v___x_197_, 0);
v_name_199_ = lean_ctor_get(v_toSignature_198_, 0);
v___x_200_ = lean_name_eq(v_name_199_, v_declName_192_);
if (v___x_200_ == 0)
{
size_t v___x_201_; size_t v___x_202_; 
v___x_201_ = ((size_t)1ULL);
v___x_202_ = lean_usize_add(v_i_194_, v___x_201_);
v_i_194_ = v___x_202_;
goto _start;
}
else
{
return v___x_200_;
}
}
else
{
uint8_t v___x_204_; 
v___x_204_ = 0;
return v___x_204_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0___boxed(lean_object* v_declName_205_, lean_object* v_as_206_, lean_object* v_i_207_, lean_object* v_stop_208_){
_start:
{
size_t v_i_boxed_209_; size_t v_stop_boxed_210_; uint8_t v_res_211_; lean_object* v_r_212_; 
v_i_boxed_209_ = lean_unbox_usize(v_i_207_);
lean_dec(v_i_207_);
v_stop_boxed_210_ = lean_unbox_usize(v_stop_208_);
lean_dec(v_stop_208_);
v_res_211_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0(v_declName_205_, v_as_206_, v_i_boxed_209_, v_stop_boxed_210_);
lean_dec_ref(v_as_206_);
lean_dec(v_declName_205_);
v_r_212_ = lean_box(v_res_211_);
return v_r_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_inMutualBlock(lean_object* v_declName_213_, lean_object* v_a_214_, lean_object* v_a_215_){
_start:
{
lean_object* v_decls_216_; lean_object* v___x_217_; lean_object* v___x_218_; uint8_t v___x_219_; 
v_decls_216_ = lean_ctor_get(v_a_214_, 0);
v___x_217_ = lean_unsigned_to_nat(0u);
v___x_218_ = lean_array_get_size(v_decls_216_);
v___x_219_ = lean_nat_dec_lt(v___x_217_, v___x_218_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = lean_box(v___x_219_);
v___x_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
lean_ctor_set(v___x_221_, 1, v_a_215_);
return v___x_221_;
}
else
{
if (v___x_219_ == 0)
{
lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_222_ = lean_box(v___x_219_);
v___x_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
lean_ctor_set(v___x_223_, 1, v_a_215_);
return v___x_223_;
}
else
{
size_t v___x_224_; size_t v___x_225_; uint8_t v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_224_ = ((size_t)0ULL);
v___x_225_ = lean_usize_of_nat(v___x_218_);
v___x_226_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_FixedParams_inMutualBlock_spec__0(v_declName_213_, v_decls_216_, v___x_224_, v___x_225_);
v___x_227_ = lean_box(v___x_226_);
v___x_228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_228_, 0, v___x_227_);
lean_ctor_set(v___x_228_, 1, v_a_215_);
return v___x_228_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_inMutualBlock___boxed(lean_object* v_declName_229_, lean_object* v_a_230_, lean_object* v_a_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Lean_Compiler_LCNF_FixedParams_inMutualBlock(v_declName_229_, v_a_230_, v_a_231_);
lean_dec_ref(v_a_230_);
lean_dec(v_declName_229_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0(lean_object* v_as_233_, size_t v_sz_234_, size_t v_i_235_, lean_object* v_b_236_){
_start:
{
uint8_t v___x_237_; 
v___x_237_ = lean_usize_dec_lt(v_i_235_, v_sz_234_);
if (v___x_237_ == 0)
{
return v_b_236_;
}
else
{
lean_object* v_snd_238_; lean_object* v_fst_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_272_; 
v_snd_238_ = lean_ctor_get(v_b_236_, 1);
v_fst_239_ = lean_ctor_get(v_b_236_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v_b_236_);
if (v_isSharedCheck_272_ == 0)
{
v___x_241_ = v_b_236_;
v_isShared_242_ = v_isSharedCheck_272_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_snd_238_);
lean_inc(v_fst_239_);
lean_dec(v_b_236_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_272_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v_array_243_; lean_object* v_start_244_; lean_object* v_stop_245_; uint8_t v___x_246_; 
v_array_243_ = lean_ctor_get(v_snd_238_, 0);
v_start_244_ = lean_ctor_get(v_snd_238_, 1);
v_stop_245_ = lean_ctor_get(v_snd_238_, 2);
v___x_246_ = lean_nat_dec_lt(v_start_244_, v_stop_245_);
if (v___x_246_ == 0)
{
lean_object* v___x_248_; 
if (v_isShared_242_ == 0)
{
v___x_248_ = v___x_241_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_fst_239_);
lean_ctor_set(v_reuseFailAlloc_249_, 1, v_snd_238_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
else
{
lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_268_; 
lean_inc(v_stop_245_);
lean_inc(v_start_244_);
lean_inc_ref(v_array_243_);
v_isSharedCheck_268_ = !lean_is_exclusive(v_snd_238_);
if (v_isSharedCheck_268_ == 0)
{
lean_object* v_unused_269_; lean_object* v_unused_270_; lean_object* v_unused_271_; 
v_unused_269_ = lean_ctor_get(v_snd_238_, 2);
lean_dec(v_unused_269_);
v_unused_270_ = lean_ctor_get(v_snd_238_, 1);
lean_dec(v_unused_270_);
v_unused_271_ = lean_ctor_get(v_snd_238_, 0);
lean_dec(v_unused_271_);
v___x_251_ = v_snd_238_;
v_isShared_252_ = v_isSharedCheck_268_;
goto v_resetjp_250_;
}
else
{
lean_dec(v_snd_238_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_268_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v_a_253_; lean_object* v_fvarId_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_259_; 
v_a_253_ = lean_array_uget_borrowed(v_as_233_, v_i_235_);
v_fvarId_254_ = lean_ctor_get(v_a_253_, 0);
v___x_255_ = lean_array_fget(v_array_243_, v_start_244_);
v___x_256_ = lean_unsigned_to_nat(1u);
v___x_257_ = lean_nat_add(v_start_244_, v___x_256_);
lean_dec(v_start_244_);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 1, v___x_257_);
v___x_259_ = v___x_251_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_array_243_);
lean_ctor_set(v_reuseFailAlloc_267_, 1, v___x_257_);
lean_ctor_set(v_reuseFailAlloc_267_, 2, v_stop_245_);
v___x_259_ = v_reuseFailAlloc_267_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
lean_object* v___x_260_; lean_object* v___x_262_; 
lean_inc(v_fvarId_254_);
v___x_260_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_254_, v___x_255_, v_fst_239_);
if (v_isShared_242_ == 0)
{
lean_ctor_set(v___x_241_, 1, v___x_259_);
lean_ctor_set(v___x_241_, 0, v___x_260_);
v___x_262_ = v___x_241_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v___x_260_);
lean_ctor_set(v_reuseFailAlloc_266_, 1, v___x_259_);
v___x_262_ = v_reuseFailAlloc_266_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
size_t v___x_263_; size_t v___x_264_; 
v___x_263_ = ((size_t)1ULL);
v___x_264_ = lean_usize_add(v_i_235_, v___x_263_);
v_i_235_ = v___x_264_;
v_b_236_ = v___x_262_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0___boxed(lean_object* v_as_273_, lean_object* v_sz_274_, lean_object* v_i_275_, lean_object* v_b_276_){
_start:
{
size_t v_sz_boxed_277_; size_t v_i_boxed_278_; lean_object* v_res_279_; 
v_sz_boxed_277_ = lean_unbox_usize(v_sz_274_);
lean_dec(v_sz_274_);
v_i_boxed_278_ = lean_unbox_usize(v_i_275_);
lean_dec(v_i_275_);
v_res_279_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0(v_as_273_, v_sz_boxed_277_, v_i_boxed_278_, v_b_276_);
lean_dec_ref(v_as_273_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkAssignment(lean_object* v_decl_280_, lean_object* v_values_281_){
_start:
{
lean_object* v_toSignature_282_; lean_object* v_params_283_; lean_object* v___x_284_; lean_object* v_assignment_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; size_t v_sz_289_; size_t v___x_290_; lean_object* v___x_291_; lean_object* v_fst_292_; 
v_toSignature_282_ = lean_ctor_get(v_decl_280_, 0);
v_params_283_ = lean_ctor_get(v_toSignature_282_, 3);
v___x_284_ = lean_array_get_size(v_values_281_);
v_assignment_285_ = lean_box(1);
v___x_286_ = lean_unsigned_to_nat(0u);
v___x_287_ = l_Array_toSubarray___redArg(v_values_281_, v___x_286_, v___x_284_);
v___x_288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_288_, 0, v_assignment_285_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
v_sz_289_ = lean_array_size(v_params_283_);
v___x_290_ = ((size_t)0ULL);
v___x_291_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_mkAssignment_spec__0(v_params_283_, v_sz_289_, v___x_290_, v___x_288_);
v_fst_292_ = lean_ctor_get(v___x_291_, 0);
lean_inc(v_fst_292_);
lean_dec_ref(v___x_291_);
return v_fst_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkAssignment___boxed(lean_object* v_decl_293_, lean_object* v_values_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l_Lean_Compiler_LCNF_FixedParams_mkAssignment(v_decl_293_, v_values_294_);
lean_dec_ref(v_decl_293_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(lean_object* v_params_304_, lean_object* v_args_305_, lean_object* v_range_306_, lean_object* v_b_307_, lean_object* v_i_308_, lean_object* v___y_309_){
_start:
{
lean_object* v_stop_310_; lean_object* v_step_311_; uint8_t v___x_312_; 
v_stop_310_ = lean_ctor_get(v_range_306_, 1);
v_step_311_ = lean_ctor_get(v_range_306_, 2);
v___x_312_ = lean_nat_dec_lt(v_i_308_, v_stop_310_);
if (v___x_312_ == 0)
{
lean_object* v___x_313_; 
lean_dec(v_i_308_);
v___x_313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_313_, 0, v_b_307_);
lean_ctor_set(v___x_313_, 1, v___y_309_);
return v___x_313_;
}
else
{
lean_object* v___x_314_; lean_object* v_fvarId_315_; lean_object* v___x_316_; lean_object* v_a_318_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; uint8_t v___x_324_; 
lean_dec_ref(v_b_307_);
v___x_314_ = lean_array_fget_borrowed(v_params_304_, v_i_308_);
v_fvarId_315_ = lean_ctor_get(v___x_314_, 0);
v___x_316_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0));
v___x_321_ = lean_box(0);
v___x_322_ = lean_array_get_borrowed(v___x_321_, v_args_305_, v_i_308_);
lean_inc(v_fvarId_315_);
v___x_323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_323_, 0, v_fvarId_315_);
v___x_324_ = l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(v___x_322_, v___x_323_);
lean_dec_ref_known(v___x_323_, 1);
if (v___x_324_ == 0)
{
uint8_t v___x_325_; 
v___x_325_ = l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(v___x_322_, v___x_321_);
if (v___x_325_ == 0)
{
lean_object* v___x_326_; lean_object* v___x_327_; 
lean_dec(v_i_308_);
v___x_326_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__2));
v___x_327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_327_, 0, v___x_326_);
lean_ctor_set(v___x_327_, 1, v___y_309_);
return v___x_327_;
}
else
{
v_a_318_ = v___y_309_;
goto v___jp_317_;
}
}
else
{
v_a_318_ = v___y_309_;
goto v___jp_317_;
}
v___jp_317_:
{
lean_object* v___x_319_; 
v___x_319_ = lean_nat_add(v_i_308_, v_step_311_);
lean_dec(v_i_308_);
v_b_307_ = v___x_316_;
v_i_308_ = v___x_319_;
v___y_309_ = v_a_318_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___boxed(lean_object* v_params_328_, lean_object* v_args_329_, lean_object* v_range_330_, lean_object* v_b_331_, lean_object* v_i_332_, lean_object* v___y_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(v_params_328_, v_args_329_, v_range_330_, v_b_331_, v_i_332_, v___y_333_);
lean_dec_ref(v_range_330_);
lean_dec_ref(v_args_329_);
lean_dec_ref(v_params_328_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f(lean_object* v_decl_335_, lean_object* v_a_336_, lean_object* v_a_337_){
_start:
{
lean_object* v___y_339_; lean_object* v___y_343_; lean_object* v___y_347_; lean_object* v_value_350_; 
v_value_350_ = lean_ctor_get(v_decl_335_, 4);
lean_inc_ref(v_value_350_);
if (lean_obj_tag(v_value_350_) == 0)
{
lean_object* v_decl_351_; lean_object* v_value_352_; 
v_decl_351_ = lean_ctor_get(v_value_350_, 0);
lean_inc_ref(v_decl_351_);
v_value_352_ = lean_ctor_get(v_decl_351_, 3);
lean_inc(v_value_352_);
if (lean_obj_tag(v_value_352_) == 4)
{
lean_object* v_params_353_; lean_object* v_k_354_; lean_object* v_fvarId_355_; lean_object* v_fvarId_356_; lean_object* v_args_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_407_; 
v_params_353_ = lean_ctor_get(v_decl_335_, 2);
lean_inc_ref(v_params_353_);
lean_dec_ref(v_decl_335_);
v_k_354_ = lean_ctor_get(v_value_350_, 1);
lean_inc_ref(v_k_354_);
lean_dec_ref_known(v_value_350_, 2);
v_fvarId_355_ = lean_ctor_get(v_decl_351_, 0);
lean_inc(v_fvarId_355_);
lean_dec_ref(v_decl_351_);
v_fvarId_356_ = lean_ctor_get(v_value_352_, 0);
v_args_357_ = lean_ctor_get(v_value_352_, 1);
v_isSharedCheck_407_ = !lean_is_exclusive(v_value_352_);
if (v_isSharedCheck_407_ == 0)
{
v___x_359_ = v_value_352_;
v_isShared_360_ = v_isSharedCheck_407_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_args_357_);
lean_inc(v_fvarId_356_);
lean_dec(v_value_352_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_407_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_361_; lean_object* v___x_362_; uint8_t v___x_363_; 
v___x_361_ = lean_array_get_size(v_args_357_);
v___x_362_ = lean_array_get_size(v_params_353_);
v___x_363_ = lean_nat_dec_eq(v___x_361_, v___x_362_);
if (v___x_363_ == 0)
{
lean_del_object(v___x_359_);
lean_dec_ref(v_args_357_);
lean_dec(v_fvarId_356_);
lean_dec(v_fvarId_355_);
lean_dec_ref(v_k_354_);
lean_dec_ref(v_params_353_);
v___y_343_ = v_a_337_;
goto v___jp_342_;
}
else
{
if (lean_obj_tag(v_k_354_) == 5)
{
lean_object* v_fvarId_364_; uint8_t v___x_365_; 
lean_del_object(v___x_359_);
v_fvarId_364_ = lean_ctor_get(v_k_354_, 0);
lean_inc(v_fvarId_364_);
lean_dec_ref_known(v_k_354_, 1);
v___x_365_ = l_Lean_instBEqFVarId_beq(v_fvarId_364_, v_fvarId_355_);
lean_dec(v_fvarId_355_);
lean_dec(v_fvarId_364_);
if (v___x_365_ == 0)
{
lean_dec_ref(v_args_357_);
lean_dec(v_fvarId_356_);
lean_dec_ref(v_params_353_);
v___y_343_ = v_a_337_;
goto v___jp_342_;
}
else
{
lean_object* v_assignment_366_; lean_object* v___x_367_; 
v_assignment_366_ = lean_ctor_get(v_a_336_, 2);
v___x_367_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Compiler_LCNF_FixedParams_evalFVar_spec__0___redArg(v_assignment_366_, v_fvarId_356_);
lean_dec(v_fvarId_356_);
if (lean_obj_tag(v___x_367_) == 1)
{
lean_object* v_val_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_402_; 
v_val_368_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_402_ == 0)
{
v___x_370_ = v___x_367_;
v_isShared_371_ = v_isSharedCheck_402_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_val_368_);
lean_dec(v___x_367_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_402_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
if (lean_obj_tag(v_val_368_) == 2)
{
lean_object* v_i_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v_a_378_; lean_object* v_fst_379_; 
v_i_372_ = lean_ctor_get(v_val_368_, 0);
lean_inc(v_i_372_);
lean_dec_ref_known(v_val_368_, 1);
v___x_373_ = lean_unsigned_to_nat(0u);
v___x_374_ = lean_unsigned_to_nat(1u);
v___x_375_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_375_, 0, v___x_373_);
lean_ctor_set(v___x_375_, 1, v___x_362_);
lean_ctor_set(v___x_375_, 2, v___x_374_);
v___x_376_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg___closed__0));
v___x_377_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(v_params_353_, v_args_357_, v___x_375_, v___x_376_, v___x_373_, v_a_337_);
lean_dec_ref_known(v___x_375_, 3);
lean_dec_ref(v_args_357_);
lean_dec_ref(v_params_353_);
v_a_378_ = lean_ctor_get(v___x_377_, 0);
v_fst_379_ = lean_ctor_get(v_a_378_, 0);
if (lean_obj_tag(v_fst_379_) == 0)
{
lean_object* v_a_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_390_; 
v_a_380_ = lean_ctor_get(v___x_377_, 1);
v_isSharedCheck_390_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_390_ == 0)
{
lean_object* v_unused_391_; 
v_unused_391_ = lean_ctor_get(v___x_377_, 0);
lean_dec(v_unused_391_);
v___x_382_ = v___x_377_;
v_isShared_383_ = v_isSharedCheck_390_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_a_380_);
lean_dec(v___x_377_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_390_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___x_385_; 
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 0, v_i_372_);
v___x_385_ = v___x_370_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_i_372_);
v___x_385_ = v_reuseFailAlloc_389_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
lean_object* v___x_387_; 
if (v_isShared_383_ == 0)
{
lean_ctor_set(v___x_382_, 0, v___x_385_);
v___x_387_ = v___x_382_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v___x_385_);
lean_ctor_set(v_reuseFailAlloc_388_, 1, v_a_380_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
}
else
{
lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_400_; 
lean_inc_ref(v_fst_379_);
lean_dec(v_i_372_);
lean_del_object(v___x_370_);
v_a_392_ = lean_ctor_get(v___x_377_, 1);
v_isSharedCheck_400_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_400_ == 0)
{
lean_object* v_unused_401_; 
v_unused_401_ = lean_ctor_get(v___x_377_, 0);
lean_dec(v_unused_401_);
v___x_394_ = v___x_377_;
v_isShared_395_ = v_isSharedCheck_400_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_377_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_400_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v_val_396_; lean_object* v___x_398_; 
v_val_396_ = lean_ctor_get(v_fst_379_, 0);
lean_inc(v_val_396_);
lean_dec_ref_known(v_fst_379_, 1);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 0, v_val_396_);
v___x_398_ = v___x_394_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v_val_396_);
lean_ctor_set(v_reuseFailAlloc_399_, 1, v_a_392_);
v___x_398_ = v_reuseFailAlloc_399_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
return v___x_398_;
}
}
}
}
else
{
lean_del_object(v___x_370_);
lean_dec(v_val_368_);
lean_dec_ref(v_args_357_);
lean_dec_ref(v_params_353_);
v___y_347_ = v_a_337_;
goto v___jp_346_;
}
}
}
else
{
lean_dec(v___x_367_);
lean_dec_ref(v_args_357_);
lean_dec_ref(v_params_353_);
v___y_347_ = v_a_337_;
goto v___jp_346_;
}
}
}
else
{
lean_object* v___x_403_; lean_object* v___x_405_; 
lean_dec_ref(v_args_357_);
lean_dec(v_fvarId_356_);
lean_dec(v_fvarId_355_);
lean_dec_ref(v_k_354_);
lean_dec_ref(v_params_353_);
v___x_403_ = lean_box(0);
if (v_isShared_360_ == 0)
{
lean_ctor_set_tag(v___x_359_, 0);
lean_ctor_set(v___x_359_, 1, v_a_337_);
lean_ctor_set(v___x_359_, 0, v___x_403_);
v___x_405_ = v___x_359_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v___x_403_);
lean_ctor_set(v_reuseFailAlloc_406_, 1, v_a_337_);
v___x_405_ = v_reuseFailAlloc_406_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
return v___x_405_;
}
}
}
}
}
else
{
lean_dec(v_value_352_);
lean_dec_ref_known(v_value_350_, 2);
lean_dec_ref(v_decl_351_);
lean_dec_ref(v_decl_335_);
v___y_339_ = v_a_337_;
goto v___jp_338_;
}
}
else
{
lean_dec_ref(v_value_350_);
lean_dec_ref(v_decl_335_);
v___y_339_ = v_a_337_;
goto v___jp_338_;
}
v___jp_338_:
{
lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_340_ = lean_box(0);
v___x_341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
lean_ctor_set(v___x_341_, 1, v___y_339_);
return v___x_341_;
}
v___jp_342_:
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = lean_box(0);
v___x_345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_345_, 0, v___x_344_);
lean_ctor_set(v___x_345_, 1, v___y_343_);
return v___x_345_;
}
v___jp_346_:
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = lean_box(0);
v___x_349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
lean_ctor_set(v___x_349_, 1, v___y_347_);
return v___x_349_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f___boxed(lean_object* v_decl_408_, lean_object* v_a_409_, lean_object* v_a_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f(v_decl_408_, v_a_409_, v_a_410_);
lean_dec_ref(v_a_409_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0(lean_object* v_params_412_, lean_object* v_args_413_, lean_object* v_range_414_, lean_object* v_b_415_, lean_object* v_i_416_, lean_object* v_hs_417_, lean_object* v_hl_418_, lean_object* v___y_419_, lean_object* v___y_420_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___redArg(v_params_412_, v_args_413_, v_range_414_, v_b_415_, v_i_416_, v___y_420_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0___boxed(lean_object* v_params_422_, lean_object* v_args_423_, lean_object* v_range_424_, lean_object* v_b_425_, lean_object* v_i_426_, lean_object* v_hs_427_, lean_object* v_hl_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f_spec__0(v_params_422_, v_args_423_, v_range_424_, v_b_425_, v_i_426_, v_hs_427_, v_hl_428_, v___y_429_, v___y_430_);
lean_dec_ref(v___y_429_);
lean_dec_ref(v_range_424_);
lean_dec_ref(v_args_423_);
lean_dec_ref(v_params_422_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(lean_object* v_upperBound_432_, lean_object* v_args_433_, lean_object* v_a_434_, lean_object* v_b_435_, lean_object* v___y_436_, lean_object* v___y_437_){
_start:
{
lean_object* v_a_439_; lean_object* v_a_440_; uint8_t v___x_444_; 
v___x_444_ = lean_nat_dec_lt(v_a_434_, v_upperBound_432_);
if (v___x_444_ == 0)
{
lean_object* v___x_445_; 
lean_dec(v_a_434_);
v___x_445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_445_, 0, v_b_435_);
lean_ctor_set(v___x_445_, 1, v___y_437_);
return v___x_445_;
}
else
{
lean_object* v___x_446_; lean_object* v___x_447_; uint8_t v___x_448_; 
v___x_446_ = lean_box(0);
v___x_447_ = lean_array_get_size(v_args_433_);
v___x_448_ = lean_nat_dec_lt(v_a_434_, v___x_447_);
if (v___x_448_ == 0)
{
lean_object* v_visited_449_; lean_object* v_fixed_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_459_; 
v_visited_449_ = lean_ctor_get(v___y_437_, 0);
v_fixed_450_ = lean_ctor_get(v___y_437_, 1);
v_isSharedCheck_459_ = !lean_is_exclusive(v___y_437_);
if (v_isSharedCheck_459_ == 0)
{
v___x_452_ = v___y_437_;
v_isShared_453_ = v_isSharedCheck_459_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_fixed_450_);
lean_inc(v_visited_449_);
lean_dec(v___y_437_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_459_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_457_; 
v___x_454_ = lean_box(v___x_448_);
v___x_455_ = lean_array_set(v_fixed_450_, v_a_434_, v___x_454_);
if (v_isShared_453_ == 0)
{
lean_ctor_set(v___x_452_, 1, v___x_455_);
v___x_457_ = v___x_452_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v_visited_449_);
lean_ctor_set(v_reuseFailAlloc_458_, 1, v___x_455_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
v_a_439_ = v___x_446_;
v_a_440_ = v___x_457_;
goto v___jp_438_;
}
}
}
else
{
lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_460_ = lean_array_fget_borrowed(v_args_433_, v_a_434_);
v___x_461_ = l_Lean_Compiler_LCNF_FixedParams_evalArg(v___x_460_, v___y_436_, v___y_437_);
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v_a_462_; lean_object* v_a_463_; lean_object* v___x_464_; uint8_t v___x_465_; 
v_a_462_ = lean_ctor_get(v___x_461_, 0);
lean_inc(v_a_462_);
v_a_463_ = lean_ctor_get(v___x_461_, 1);
lean_inc(v_a_463_);
lean_dec_ref_known(v___x_461_, 2);
lean_inc(v_a_434_);
v___x_464_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_464_, 0, v_a_434_);
v___x_465_ = l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(v_a_462_, v___x_464_);
lean_dec_ref_known(v___x_464_, 1);
if (v___x_465_ == 0)
{
lean_object* v___x_466_; uint8_t v___x_467_; 
v___x_466_ = lean_box(1);
v___x_467_ = l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(v_a_462_, v___x_466_);
lean_dec(v_a_462_);
if (v___x_467_ == 0)
{
lean_object* v_visited_468_; lean_object* v_fixed_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_478_; 
v_visited_468_ = lean_ctor_get(v_a_463_, 0);
v_fixed_469_ = lean_ctor_get(v_a_463_, 1);
v_isSharedCheck_478_ = !lean_is_exclusive(v_a_463_);
if (v_isSharedCheck_478_ == 0)
{
v___x_471_ = v_a_463_;
v_isShared_472_ = v_isSharedCheck_478_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_fixed_469_);
lean_inc(v_visited_468_);
lean_dec(v_a_463_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_478_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_476_; 
v___x_473_ = lean_box(v___x_467_);
v___x_474_ = lean_array_set(v_fixed_469_, v_a_434_, v___x_473_);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 1, v___x_474_);
v___x_476_ = v___x_471_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_visited_468_);
lean_ctor_set(v_reuseFailAlloc_477_, 1, v___x_474_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
v_a_439_ = v___x_446_;
v_a_440_ = v___x_476_;
goto v___jp_438_;
}
}
}
else
{
v_a_439_ = v___x_446_;
v_a_440_ = v_a_463_;
goto v___jp_438_;
}
}
else
{
lean_dec(v_a_462_);
v_a_439_ = v___x_446_;
v_a_440_ = v_a_463_;
goto v___jp_438_;
}
}
else
{
lean_object* v_a_479_; lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_487_; 
lean_dec(v_a_434_);
v_a_479_ = lean_ctor_get(v___x_461_, 0);
v_a_480_ = lean_ctor_get(v___x_461_, 1);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_487_ == 0)
{
v___x_482_ = v___x_461_;
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_inc(v_a_479_);
lean_dec(v___x_461_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_485_; 
if (v_isShared_483_ == 0)
{
v___x_485_ = v___x_482_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_a_479_);
lean_ctor_set(v_reuseFailAlloc_486_, 1, v_a_480_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
}
}
v___jp_438_:
{
lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_441_ = lean_unsigned_to_nat(1u);
v___x_442_ = lean_nat_add(v_a_434_, v___x_441_);
lean_dec(v_a_434_);
v_a_434_ = v___x_442_;
v_b_435_ = v_a_439_;
v___y_437_ = v_a_440_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg___boxed(lean_object* v_upperBound_488_, lean_object* v_args_489_, lean_object* v_a_490_, lean_object* v_b_491_, lean_object* v___y_492_, lean_object* v___y_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(v_upperBound_488_, v_args_489_, v_a_490_, v_b_491_, v___y_492_, v___y_493_);
lean_dec_ref(v___y_492_);
lean_dec_ref(v_args_489_);
lean_dec(v_upperBound_488_);
return v_res_494_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(lean_object* v_xs_495_, lean_object* v_ys_496_, lean_object* v_x_497_){
_start:
{
lean_object* v_zero_498_; uint8_t v_isZero_499_; 
v_zero_498_ = lean_unsigned_to_nat(0u);
v_isZero_499_ = lean_nat_dec_eq(v_x_497_, v_zero_498_);
if (v_isZero_499_ == 1)
{
lean_dec(v_x_497_);
return v_isZero_499_;
}
else
{
lean_object* v_one_500_; lean_object* v_n_501_; lean_object* v___x_502_; lean_object* v___x_503_; uint8_t v___x_504_; 
v_one_500_ = lean_unsigned_to_nat(1u);
v_n_501_ = lean_nat_sub(v_x_497_, v_one_500_);
lean_dec(v_x_497_);
v___x_502_ = lean_array_fget_borrowed(v_xs_495_, v_n_501_);
v___x_503_ = lean_array_fget_borrowed(v_ys_496_, v_n_501_);
v___x_504_ = l_Lean_Compiler_LCNF_FixedParams_instBEqAbsValue_beq(v___x_502_, v___x_503_);
if (v___x_504_ == 0)
{
lean_dec(v_n_501_);
return v___x_504_;
}
else
{
v_x_497_ = v_n_501_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_xs_506_, lean_object* v_ys_507_, lean_object* v_x_508_){
_start:
{
uint8_t v_res_509_; lean_object* v_r_510_; 
v_res_509_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(v_xs_506_, v_ys_507_, v_x_508_);
lean_dec_ref(v_ys_507_);
lean_dec_ref(v_xs_506_);
v_r_510_ = lean_box(v_res_509_);
return v_r_510_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(lean_object* v_a_511_, lean_object* v_x_512_){
_start:
{
if (lean_obj_tag(v_x_512_) == 0)
{
uint8_t v___x_513_; 
v___x_513_ = 0;
return v___x_513_;
}
else
{
lean_object* v_key_514_; lean_object* v_tail_515_; lean_object* v_fst_516_; lean_object* v_snd_517_; lean_object* v_fst_518_; lean_object* v_snd_519_; uint8_t v___x_520_; 
v_key_514_ = lean_ctor_get(v_x_512_, 0);
v_tail_515_ = lean_ctor_get(v_x_512_, 2);
v_fst_516_ = lean_ctor_get(v_key_514_, 0);
v_snd_517_ = lean_ctor_get(v_key_514_, 1);
v_fst_518_ = lean_ctor_get(v_a_511_, 0);
v_snd_519_ = lean_ctor_get(v_a_511_, 1);
v___x_520_ = lean_name_eq(v_fst_516_, v_fst_518_);
if (v___x_520_ == 0)
{
v_x_512_ = v_tail_515_;
goto _start;
}
else
{
lean_object* v___x_522_; lean_object* v___x_523_; uint8_t v___x_524_; 
v___x_522_ = lean_array_get_size(v_snd_517_);
v___x_523_ = lean_array_get_size(v_snd_519_);
v___x_524_ = lean_nat_dec_eq(v___x_522_, v___x_523_);
if (v___x_524_ == 0)
{
v_x_512_ = v_tail_515_;
goto _start;
}
else
{
uint8_t v___x_526_; 
v___x_526_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(v_snd_517_, v_snd_519_, v___x_522_);
if (v___x_526_ == 0)
{
v_x_512_ = v_tail_515_;
goto _start;
}
else
{
return v___x_526_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg___boxed(lean_object* v_a_528_, lean_object* v_x_529_){
_start:
{
uint8_t v_res_530_; lean_object* v_r_531_; 
v_res_530_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(v_a_528_, v_x_529_);
lean_dec(v_x_529_);
lean_dec_ref(v_a_528_);
v_r_531_ = lean_box(v_res_530_);
return v_r_531_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(lean_object* v_as_532_, size_t v_i_533_, size_t v_stop_534_, uint64_t v_b_535_){
_start:
{
uint8_t v___x_536_; 
v___x_536_ = lean_usize_dec_eq(v_i_533_, v_stop_534_);
if (v___x_536_ == 0)
{
lean_object* v___x_537_; uint64_t v___x_538_; uint64_t v___x_539_; size_t v___x_540_; size_t v___x_541_; 
v___x_537_ = lean_array_uget_borrowed(v_as_532_, v_i_533_);
v___x_538_ = l_Lean_Compiler_LCNF_FixedParams_instHashableAbsValue_hash(v___x_537_);
v___x_539_ = lean_uint64_mix_hash(v_b_535_, v___x_538_);
v___x_540_ = ((size_t)1ULL);
v___x_541_ = lean_usize_add(v_i_533_, v___x_540_);
v_i_533_ = v___x_541_;
v_b_535_ = v___x_539_;
goto _start;
}
else
{
return v_b_535_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2___boxed(lean_object* v_as_543_, lean_object* v_i_544_, lean_object* v_stop_545_, lean_object* v_b_546_){
_start:
{
size_t v_i_boxed_547_; size_t v_stop_boxed_548_; uint64_t v_b_boxed_549_; uint64_t v_res_550_; lean_object* v_r_551_; 
v_i_boxed_547_ = lean_unbox_usize(v_i_544_);
lean_dec(v_i_544_);
v_stop_boxed_548_ = lean_unbox_usize(v_stop_545_);
lean_dec(v_stop_545_);
v_b_boxed_549_ = lean_unbox_uint64(v_b_546_);
lean_dec_ref(v_b_546_);
v_res_550_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_as_543_, v_i_boxed_547_, v_stop_boxed_548_, v_b_boxed_549_);
lean_dec_ref(v_as_543_);
v_r_551_ = lean_box_uint64(v_res_550_);
return v_r_551_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14___redArg(lean_object* v_x_552_, lean_object* v_x_553_){
_start:
{
if (lean_obj_tag(v_x_553_) == 0)
{
return v_x_552_;
}
else
{
lean_object* v_key_554_; lean_object* v_value_555_; lean_object* v_tail_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_595_; 
v_key_554_ = lean_ctor_get(v_x_553_, 0);
v_value_555_ = lean_ctor_get(v_x_553_, 1);
v_tail_556_ = lean_ctor_get(v_x_553_, 2);
v_isSharedCheck_595_ = !lean_is_exclusive(v_x_553_);
if (v_isSharedCheck_595_ == 0)
{
v___x_558_ = v_x_553_;
v_isShared_559_ = v_isSharedCheck_595_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_tail_556_);
lean_inc(v_value_555_);
lean_inc(v_key_554_);
lean_dec(v_x_553_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_595_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v_fst_560_; lean_object* v_snd_561_; lean_object* v___x_562_; uint64_t v___y_564_; uint64_t v___y_565_; uint64_t v___y_585_; 
v_fst_560_ = lean_ctor_get(v_key_554_, 0);
v_snd_561_ = lean_ctor_get(v_key_554_, 1);
v___x_562_ = lean_array_get_size(v_x_552_);
if (lean_obj_tag(v_fst_560_) == 0)
{
uint64_t v___x_593_; 
v___x_593_ = 1723ULL;
v___y_585_ = v___x_593_;
goto v___jp_584_;
}
else
{
uint64_t v_hash_594_; 
v_hash_594_ = lean_ctor_get_uint64(v_fst_560_, sizeof(void*)*2);
v___y_585_ = v_hash_594_;
goto v___jp_584_;
}
v___jp_563_:
{
uint64_t v___x_566_; uint64_t v___x_567_; uint64_t v___x_568_; uint64_t v_fold_569_; uint64_t v___x_570_; uint64_t v___x_571_; uint64_t v___x_572_; size_t v___x_573_; size_t v___x_574_; size_t v___x_575_; size_t v___x_576_; size_t v___x_577_; lean_object* v___x_578_; lean_object* v___x_580_; 
v___x_566_ = lean_uint64_mix_hash(v___y_564_, v___y_565_);
v___x_567_ = 32ULL;
v___x_568_ = lean_uint64_shift_right(v___x_566_, v___x_567_);
v_fold_569_ = lean_uint64_xor(v___x_566_, v___x_568_);
v___x_570_ = 16ULL;
v___x_571_ = lean_uint64_shift_right(v_fold_569_, v___x_570_);
v___x_572_ = lean_uint64_xor(v_fold_569_, v___x_571_);
v___x_573_ = lean_uint64_to_usize(v___x_572_);
v___x_574_ = lean_usize_of_nat(v___x_562_);
v___x_575_ = ((size_t)1ULL);
v___x_576_ = lean_usize_sub(v___x_574_, v___x_575_);
v___x_577_ = lean_usize_land(v___x_573_, v___x_576_);
v___x_578_ = lean_array_uget_borrowed(v_x_552_, v___x_577_);
lean_inc(v___x_578_);
if (v_isShared_559_ == 0)
{
lean_ctor_set(v___x_558_, 2, v___x_578_);
v___x_580_ = v___x_558_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_key_554_);
lean_ctor_set(v_reuseFailAlloc_583_, 1, v_value_555_);
lean_ctor_set(v_reuseFailAlloc_583_, 2, v___x_578_);
v___x_580_ = v_reuseFailAlloc_583_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
lean_object* v___x_581_; 
v___x_581_ = lean_array_uset(v_x_552_, v___x_577_, v___x_580_);
v_x_552_ = v___x_581_;
v_x_553_ = v_tail_556_;
goto _start;
}
}
v___jp_584_:
{
uint64_t v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; uint8_t v___x_589_; 
v___x_586_ = 7ULL;
v___x_587_ = lean_unsigned_to_nat(0u);
v___x_588_ = lean_array_get_size(v_snd_561_);
v___x_589_ = lean_nat_dec_lt(v___x_587_, v___x_588_);
if (v___x_589_ == 0)
{
v___y_564_ = v___y_585_;
v___y_565_ = v___x_586_;
goto v___jp_563_;
}
else
{
size_t v___x_590_; size_t v___x_591_; uint64_t v___x_592_; 
v___x_590_ = ((size_t)0ULL);
v___x_591_ = lean_usize_of_nat(v___x_588_);
v___x_592_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_snd_561_, v___x_590_, v___x_591_, v___x_586_);
v___y_564_ = v___y_585_;
v___y_565_ = v___x_592_;
goto v___jp_563_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8___redArg(lean_object* v_i_596_, lean_object* v_source_597_, lean_object* v_target_598_){
_start:
{
lean_object* v___x_599_; uint8_t v___x_600_; 
v___x_599_ = lean_array_get_size(v_source_597_);
v___x_600_ = lean_nat_dec_lt(v_i_596_, v___x_599_);
if (v___x_600_ == 0)
{
lean_dec_ref(v_source_597_);
lean_dec(v_i_596_);
return v_target_598_;
}
else
{
lean_object* v_es_601_; lean_object* v___x_602_; lean_object* v_source_603_; lean_object* v_target_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v_es_601_ = lean_array_fget(v_source_597_, v_i_596_);
v___x_602_ = lean_box(0);
v_source_603_ = lean_array_fset(v_source_597_, v_i_596_, v___x_602_);
v_target_604_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14___redArg(v_target_598_, v_es_601_);
v___x_605_ = lean_unsigned_to_nat(1u);
v___x_606_ = lean_nat_add(v_i_596_, v___x_605_);
lean_dec(v_i_596_);
v_i_596_ = v___x_606_;
v_source_597_ = v_source_603_;
v_target_598_ = v_target_604_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4___redArg(lean_object* v_data_608_){
_start:
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v_nbuckets_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_609_ = lean_array_get_size(v_data_608_);
v___x_610_ = lean_unsigned_to_nat(2u);
v_nbuckets_611_ = lean_nat_mul(v___x_609_, v___x_610_);
v___x_612_ = lean_unsigned_to_nat(0u);
v___x_613_ = lean_box(0);
v___x_614_ = lean_mk_array(v_nbuckets_611_, v___x_613_);
v___x_615_ = lean_array_propagate_mark(v_data_608_, v___x_614_);
v___x_616_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8___redArg(v___x_612_, v_data_608_, v___x_615_);
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2___redArg(lean_object* v_m_617_, lean_object* v_a_618_, lean_object* v_b_619_){
_start:
{
lean_object* v_size_620_; lean_object* v_buckets_621_; lean_object* v_fst_622_; lean_object* v_snd_623_; lean_object* v___x_624_; uint64_t v___y_626_; uint64_t v___y_627_; uint64_t v___y_666_; 
v_size_620_ = lean_ctor_get(v_m_617_, 0);
v_buckets_621_ = lean_ctor_get(v_m_617_, 1);
v_fst_622_ = lean_ctor_get(v_a_618_, 0);
v_snd_623_ = lean_ctor_get(v_a_618_, 1);
v___x_624_ = lean_array_get_size(v_buckets_621_);
if (lean_obj_tag(v_fst_622_) == 0)
{
uint64_t v___x_674_; 
v___x_674_ = 1723ULL;
v___y_666_ = v___x_674_;
goto v___jp_665_;
}
else
{
uint64_t v_hash_675_; 
v_hash_675_ = lean_ctor_get_uint64(v_fst_622_, sizeof(void*)*2);
v___y_666_ = v_hash_675_;
goto v___jp_665_;
}
v___jp_625_:
{
uint64_t v___x_628_; uint64_t v___x_629_; uint64_t v___x_630_; uint64_t v_fold_631_; uint64_t v___x_632_; uint64_t v___x_633_; uint64_t v___x_634_; size_t v___x_635_; size_t v___x_636_; size_t v___x_637_; size_t v___x_638_; size_t v___x_639_; lean_object* v_bkt_640_; uint8_t v___x_641_; 
v___x_628_ = lean_uint64_mix_hash(v___y_626_, v___y_627_);
v___x_629_ = 32ULL;
v___x_630_ = lean_uint64_shift_right(v___x_628_, v___x_629_);
v_fold_631_ = lean_uint64_xor(v___x_628_, v___x_630_);
v___x_632_ = 16ULL;
v___x_633_ = lean_uint64_shift_right(v_fold_631_, v___x_632_);
v___x_634_ = lean_uint64_xor(v_fold_631_, v___x_633_);
v___x_635_ = lean_uint64_to_usize(v___x_634_);
v___x_636_ = lean_usize_of_nat(v___x_624_);
v___x_637_ = ((size_t)1ULL);
v___x_638_ = lean_usize_sub(v___x_636_, v___x_637_);
v___x_639_ = lean_usize_land(v___x_635_, v___x_638_);
v_bkt_640_ = lean_array_uget_borrowed(v_buckets_621_, v___x_639_);
v___x_641_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(v_a_618_, v_bkt_640_);
if (v___x_641_ == 0)
{
lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_662_; 
lean_inc_ref(v_buckets_621_);
lean_inc(v_size_620_);
v_isSharedCheck_662_ = !lean_is_exclusive(v_m_617_);
if (v_isSharedCheck_662_ == 0)
{
lean_object* v_unused_663_; lean_object* v_unused_664_; 
v_unused_663_ = lean_ctor_get(v_m_617_, 1);
lean_dec(v_unused_663_);
v_unused_664_ = lean_ctor_get(v_m_617_, 0);
lean_dec(v_unused_664_);
v___x_643_ = v_m_617_;
v_isShared_644_ = v_isSharedCheck_662_;
goto v_resetjp_642_;
}
else
{
lean_dec(v_m_617_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_662_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_645_; lean_object* v_size_x27_646_; lean_object* v___x_647_; lean_object* v_buckets_x27_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; uint8_t v___x_654_; 
v___x_645_ = lean_unsigned_to_nat(1u);
v_size_x27_646_ = lean_nat_add(v_size_620_, v___x_645_);
lean_dec(v_size_620_);
lean_inc(v_bkt_640_);
v___x_647_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_647_, 0, v_a_618_);
lean_ctor_set(v___x_647_, 1, v_b_619_);
lean_ctor_set(v___x_647_, 2, v_bkt_640_);
v_buckets_x27_648_ = lean_array_uset(v_buckets_621_, v___x_639_, v___x_647_);
v___x_649_ = lean_unsigned_to_nat(4u);
v___x_650_ = lean_nat_mul(v_size_x27_646_, v___x_649_);
v___x_651_ = lean_unsigned_to_nat(3u);
v___x_652_ = lean_nat_div(v___x_650_, v___x_651_);
lean_dec(v___x_650_);
v___x_653_ = lean_array_get_size(v_buckets_x27_648_);
v___x_654_ = lean_nat_dec_le(v___x_652_, v___x_653_);
lean_dec(v___x_652_);
if (v___x_654_ == 0)
{
lean_object* v_val_655_; lean_object* v___x_657_; 
v_val_655_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4___redArg(v_buckets_x27_648_);
if (v_isShared_644_ == 0)
{
lean_ctor_set(v___x_643_, 1, v_val_655_);
lean_ctor_set(v___x_643_, 0, v_size_x27_646_);
v___x_657_ = v___x_643_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_size_x27_646_);
lean_ctor_set(v_reuseFailAlloc_658_, 1, v_val_655_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
else
{
lean_object* v___x_660_; 
if (v_isShared_644_ == 0)
{
lean_ctor_set(v___x_643_, 1, v_buckets_x27_648_);
lean_ctor_set(v___x_643_, 0, v_size_x27_646_);
v___x_660_ = v___x_643_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_size_x27_646_);
lean_ctor_set(v_reuseFailAlloc_661_, 1, v_buckets_x27_648_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
}
else
{
lean_dec(v_b_619_);
lean_dec_ref(v_a_618_);
return v_m_617_;
}
}
v___jp_665_:
{
uint64_t v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; uint8_t v___x_670_; 
v___x_667_ = 7ULL;
v___x_668_ = lean_unsigned_to_nat(0u);
v___x_669_ = lean_array_get_size(v_snd_623_);
v___x_670_ = lean_nat_dec_lt(v___x_668_, v___x_669_);
if (v___x_670_ == 0)
{
v___y_626_ = v___y_666_;
v___y_627_ = v___x_667_;
goto v___jp_625_;
}
else
{
size_t v___x_671_; size_t v___x_672_; uint64_t v___x_673_; 
v___x_671_ = ((size_t)0ULL);
v___x_672_ = lean_usize_of_nat(v___x_669_);
v___x_673_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_snd_623_, v___x_671_, v___x_672_, v___x_667_);
v___y_626_ = v___y_666_;
v___y_627_ = v___x_673_;
goto v___jp_625_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(lean_object* v_f_676_, lean_object* v_v_677_, lean_object* v___y_678_, lean_object* v___y_679_){
_start:
{
if (lean_obj_tag(v_v_677_) == 0)
{
lean_object* v_code_680_; lean_object* v___x_681_; 
v_code_680_ = lean_ctor_get(v_v_677_, 0);
lean_inc_ref(v_code_680_);
lean_dec_ref_known(v_v_677_, 1);
lean_inc_ref(v___y_678_);
v___x_681_ = lean_apply_3(v_f_676_, v_code_680_, v___y_678_, v___y_679_);
return v___x_681_;
}
else
{
lean_object* v___x_682_; lean_object* v___x_683_; 
lean_dec_ref_known(v_v_677_, 1);
lean_dec_ref(v_f_676_);
v___x_682_ = lean_box(0);
v___x_683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_683_, 0, v___x_682_);
lean_ctor_set(v___x_683_, 1, v___y_679_);
return v___x_683_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg___boxed(lean_object* v_f_684_, lean_object* v_v_685_, lean_object* v___y_686_, lean_object* v___y_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(v_f_684_, v_v_685_, v___y_686_, v___y_687_);
lean_dec_ref(v___y_686_);
return v_res_688_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(lean_object* v_m_689_, lean_object* v_a_690_){
_start:
{
lean_object* v_buckets_691_; lean_object* v_fst_692_; lean_object* v_snd_693_; lean_object* v___x_694_; uint64_t v___y_696_; uint64_t v___y_697_; uint64_t v___y_713_; 
v_buckets_691_ = lean_ctor_get(v_m_689_, 1);
v_fst_692_ = lean_ctor_get(v_a_690_, 0);
v_snd_693_ = lean_ctor_get(v_a_690_, 1);
v___x_694_ = lean_array_get_size(v_buckets_691_);
if (lean_obj_tag(v_fst_692_) == 0)
{
uint64_t v___x_721_; 
v___x_721_ = 1723ULL;
v___y_713_ = v___x_721_;
goto v___jp_712_;
}
else
{
uint64_t v_hash_722_; 
v_hash_722_ = lean_ctor_get_uint64(v_fst_692_, sizeof(void*)*2);
v___y_713_ = v_hash_722_;
goto v___jp_712_;
}
v___jp_695_:
{
uint64_t v___x_698_; uint64_t v___x_699_; uint64_t v___x_700_; uint64_t v_fold_701_; uint64_t v___x_702_; uint64_t v___x_703_; uint64_t v___x_704_; size_t v___x_705_; size_t v___x_706_; size_t v___x_707_; size_t v___x_708_; size_t v___x_709_; lean_object* v___x_710_; uint8_t v___x_711_; 
v___x_698_ = lean_uint64_mix_hash(v___y_696_, v___y_697_);
v___x_699_ = 32ULL;
v___x_700_ = lean_uint64_shift_right(v___x_698_, v___x_699_);
v_fold_701_ = lean_uint64_xor(v___x_698_, v___x_700_);
v___x_702_ = 16ULL;
v___x_703_ = lean_uint64_shift_right(v_fold_701_, v___x_702_);
v___x_704_ = lean_uint64_xor(v_fold_701_, v___x_703_);
v___x_705_ = lean_uint64_to_usize(v___x_704_);
v___x_706_ = lean_usize_of_nat(v___x_694_);
v___x_707_ = ((size_t)1ULL);
v___x_708_ = lean_usize_sub(v___x_706_, v___x_707_);
v___x_709_ = lean_usize_land(v___x_705_, v___x_708_);
v___x_710_ = lean_array_uget_borrowed(v_buckets_691_, v___x_709_);
v___x_711_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(v_a_690_, v___x_710_);
return v___x_711_;
}
v___jp_712_:
{
uint64_t v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_714_ = 7ULL;
v___x_715_ = lean_unsigned_to_nat(0u);
v___x_716_ = lean_array_get_size(v_snd_693_);
v___x_717_ = lean_nat_dec_lt(v___x_715_, v___x_716_);
if (v___x_717_ == 0)
{
v___y_696_ = v___y_713_;
v___y_697_ = v___x_714_;
goto v___jp_695_;
}
else
{
size_t v___x_718_; size_t v___x_719_; uint64_t v___x_720_; 
v___x_718_ = ((size_t)0ULL);
v___x_719_ = lean_usize_of_nat(v___x_716_);
v___x_720_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__2(v_snd_693_, v___x_718_, v___x_719_, v___x_714_);
v___y_696_ = v___y_713_;
v___y_697_ = v___x_720_;
goto v___jp_695_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg___boxed(lean_object* v_m_723_, lean_object* v_a_724_){
_start:
{
uint8_t v_res_725_; lean_object* v_r_726_; 
v_res_725_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(v_m_723_, v_a_724_);
lean_dec_ref(v_a_724_);
lean_dec_ref(v_m_723_);
v_r_726_ = lean_box(v_res_725_);
return v_r_726_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(lean_object* v_upperBound_727_, lean_object* v_args_728_, lean_object* v_a_729_, lean_object* v_b_730_, lean_object* v___y_731_, lean_object* v___y_732_){
_start:
{
lean_object* v_a_734_; lean_object* v_a_735_; uint8_t v___x_739_; 
v___x_739_ = lean_nat_dec_lt(v_a_729_, v_upperBound_727_);
if (v___x_739_ == 0)
{
lean_object* v___x_740_; 
lean_dec(v_a_729_);
v___x_740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_740_, 0, v_b_730_);
lean_ctor_set(v___x_740_, 1, v___y_732_);
return v___x_740_;
}
else
{
lean_object* v___x_741_; uint8_t v___x_742_; 
v___x_741_ = lean_array_get_size(v_args_728_);
v___x_742_ = lean_nat_dec_lt(v_a_729_, v___x_741_);
if (v___x_742_ == 0)
{
lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_743_ = lean_box(0);
v___x_744_ = lean_array_push(v_b_730_, v___x_743_);
v_a_734_ = v___x_744_;
v_a_735_ = v___y_732_;
goto v___jp_733_;
}
else
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = lean_array_fget_borrowed(v_args_728_, v_a_729_);
v___x_746_ = l_Lean_Compiler_LCNF_FixedParams_evalArg(v___x_745_, v___y_731_, v___y_732_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; lean_object* v_a_748_; lean_object* v___x_749_; 
v_a_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_747_);
v_a_748_ = lean_ctor_get(v___x_746_, 1);
lean_inc(v_a_748_);
lean_dec_ref_known(v___x_746_, 2);
v___x_749_ = lean_array_push(v_b_730_, v_a_747_);
v_a_734_ = v___x_749_;
v_a_735_ = v_a_748_;
goto v___jp_733_;
}
else
{
lean_object* v_a_750_; lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
lean_dec_ref(v_b_730_);
lean_dec(v_a_729_);
v_a_750_ = lean_ctor_get(v___x_746_, 0);
v_a_751_ = lean_ctor_get(v___x_746_, 1);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_746_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_inc(v_a_750_);
lean_dec(v___x_746_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_756_; 
if (v_isShared_754_ == 0)
{
v___x_756_ = v___x_753_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_a_750_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_a_751_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
}
}
v___jp_733_:
{
lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_736_ = lean_unsigned_to_nat(1u);
v___x_737_ = lean_nat_add(v_a_729_, v___x_736_);
lean_dec(v_a_729_);
v_a_729_ = v___x_737_;
v_b_730_ = v_a_734_;
v___y_732_ = v_a_735_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg___boxed(lean_object* v_upperBound_759_, lean_object* v_args_760_, lean_object* v_a_761_, lean_object* v_b_762_, lean_object* v___y_763_, lean_object* v___y_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(v_upperBound_759_, v_args_760_, v_a_761_, v_b_762_, v___y_763_, v___y_764_);
lean_dec_ref(v___y_763_);
lean_dec_ref(v_args_760_);
lean_dec(v_upperBound_759_);
return v_res_765_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9(uint8_t v_a_766_, lean_object* v_as_767_, size_t v_i_768_, size_t v_stop_769_){
_start:
{
uint8_t v___x_774_; 
v___x_774_ = lean_usize_dec_eq(v_i_768_, v_stop_769_);
if (v___x_774_ == 0)
{
lean_object* v___x_775_; uint8_t v___x_776_; 
v___x_775_ = lean_array_uget_borrowed(v_as_767_, v_i_768_);
v___x_776_ = lean_unbox(v___x_775_);
if (v___x_776_ == 0)
{
if (v_a_766_ == 0)
{
uint8_t v___x_777_; 
v___x_777_ = 1;
return v___x_777_;
}
else
{
goto v___jp_770_;
}
}
else
{
if (v_a_766_ == 0)
{
goto v___jp_770_;
}
else
{
return v_a_766_;
}
}
}
else
{
uint8_t v___x_778_; 
v___x_778_ = 0;
return v___x_778_;
}
v___jp_770_:
{
size_t v___x_771_; size_t v___x_772_; 
v___x_771_ = ((size_t)1ULL);
v___x_772_ = lean_usize_add(v_i_768_, v___x_771_);
v_i_768_ = v___x_772_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9___boxed(lean_object* v_a_779_, lean_object* v_as_780_, lean_object* v_i_781_, lean_object* v_stop_782_){
_start:
{
uint8_t v_a_boxed_783_; size_t v_i_boxed_784_; size_t v_stop_boxed_785_; uint8_t v_res_786_; lean_object* v_r_787_; 
v_a_boxed_783_ = lean_unbox(v_a_779_);
v_i_boxed_784_ = lean_unbox_usize(v_i_781_);
lean_dec(v_i_781_);
v_stop_boxed_785_ = lean_unbox_usize(v_stop_782_);
lean_dec(v_stop_782_);
v_res_786_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9(v_a_boxed_783_, v_as_780_, v_i_boxed_784_, v_stop_boxed_785_);
lean_dec_ref(v_as_780_);
v_r_787_ = lean_box(v_res_786_);
return v_r_787_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6(lean_object* v_as_788_, uint8_t v_a_789_){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; uint8_t v___x_792_; 
v___x_790_ = lean_unsigned_to_nat(0u);
v___x_791_ = lean_array_get_size(v_as_788_);
v___x_792_ = lean_nat_dec_lt(v___x_790_, v___x_791_);
if (v___x_792_ == 0)
{
return v___x_792_;
}
else
{
size_t v___x_793_; size_t v___x_794_; uint8_t v___x_795_; 
v___x_793_ = ((size_t)0ULL);
v___x_794_ = lean_usize_of_nat(v___x_791_);
v___x_795_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6_spec__9(v_a_789_, v_as_788_, v___x_793_, v___x_794_);
return v___x_795_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6___boxed(lean_object* v_as_796_, lean_object* v_a_797_){
_start:
{
uint8_t v_a_boxed_798_; uint8_t v_res_799_; lean_object* v_r_800_; 
v_a_boxed_798_ = lean_unbox(v_a_797_);
v_res_799_ = l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6(v_as_796_, v_a_boxed_798_);
lean_dec_ref(v_as_796_);
v_r_800_ = lean_box(v_res_799_);
return v_r_800_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0___boxed(lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_c_805_, lean_object* v___y_806_, lean_object* v___y_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0(v_a_803_, v_a_804_, v_c_805_, v___y_806_, v___y_807_);
lean_dec_ref(v___y_806_);
lean_dec_ref(v_a_803_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5(lean_object* v_declName_809_, lean_object* v_args_810_, lean_object* v_as_811_, size_t v_sz_812_, size_t v_i_813_, lean_object* v_b_814_, lean_object* v___y_815_, lean_object* v___y_816_){
_start:
{
lean_object* v_a_818_; lean_object* v_a_819_; uint8_t v___x_823_; 
v___x_823_ = lean_usize_dec_lt(v_i_813_, v_sz_812_);
if (v___x_823_ == 0)
{
lean_object* v___x_824_; 
lean_dec(v_declName_809_);
v___x_824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_824_, 0, v_b_814_);
lean_ctor_set(v___x_824_, 1, v___y_816_);
return v___x_824_;
}
else
{
lean_object* v_a_825_; lean_object* v_toSignature_826_; lean_object* v_value_827_; lean_object* v_name_828_; lean_object* v_params_829_; lean_object* v___x_830_; uint8_t v___x_831_; 
v_a_825_ = lean_array_uget_borrowed(v_as_811_, v_i_813_);
v_toSignature_826_ = lean_ctor_get(v_a_825_, 0);
v_value_827_ = lean_ctor_get(v_a_825_, 1);
v_name_828_ = lean_ctor_get(v_toSignature_826_, 0);
v_params_829_ = lean_ctor_get(v_toSignature_826_, 3);
v___x_830_ = lean_box(0);
v___x_831_ = lean_name_eq(v_declName_809_, v_name_828_);
if (v___x_831_ == 0)
{
v_a_818_ = v___x_830_;
v_a_819_ = v___y_816_;
goto v___jp_817_;
}
else
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_832_ = lean_array_get_size(v_params_829_);
v___x_833_ = lean_unsigned_to_nat(0u);
v___x_834_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0));
v___x_835_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(v___x_832_, v_args_810_, v___x_833_, v___x_834_, v___y_815_, v___y_816_);
if (lean_obj_tag(v___x_835_) == 0)
{
lean_object* v_a_836_; lean_object* v_a_837_; lean_object* v_visited_838_; lean_object* v_fixed_839_; lean_object* v___x_840_; uint8_t v___x_841_; 
v_a_836_ = lean_ctor_get(v___x_835_, 1);
lean_inc(v_a_836_);
v_a_837_ = lean_ctor_get(v___x_835_, 0);
lean_inc_n(v_a_837_, 2);
lean_dec_ref_known(v___x_835_, 2);
v_visited_838_ = lean_ctor_get(v_a_836_, 0);
v_fixed_839_ = lean_ctor_get(v_a_836_, 1);
lean_inc(v_declName_809_);
v___x_840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_840_, 0, v_declName_809_);
lean_ctor_set(v___x_840_, 1, v_a_837_);
v___x_841_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(v_visited_838_, v___x_840_);
if (v___x_841_ == 0)
{
lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_852_; 
lean_inc_ref(v_fixed_839_);
lean_inc_ref(v_visited_838_);
v_isSharedCheck_852_ = !lean_is_exclusive(v_a_836_);
if (v_isSharedCheck_852_ == 0)
{
lean_object* v_unused_853_; lean_object* v_unused_854_; 
v_unused_853_ = lean_ctor_get(v_a_836_, 1);
lean_dec(v_unused_853_);
v_unused_854_ = lean_ctor_get(v_a_836_, 0);
lean_dec(v_unused_854_);
v___x_843_ = v_a_836_;
v_isShared_844_ = v_isSharedCheck_852_;
goto v_resetjp_842_;
}
else
{
lean_dec(v_a_836_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_852_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___f_845_; lean_object* v___x_846_; lean_object* v___x_848_; 
lean_inc(v_a_825_);
v___f_845_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0___boxed), 5, 2);
lean_closure_set(v___f_845_, 0, v_a_825_);
lean_closure_set(v___f_845_, 1, v_a_837_);
v___x_846_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2___redArg(v_visited_838_, v___x_840_, v___x_830_);
if (v_isShared_844_ == 0)
{
lean_ctor_set(v___x_843_, 0, v___x_846_);
v___x_848_ = v___x_843_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v___x_846_);
lean_ctor_set(v_reuseFailAlloc_851_, 1, v_fixed_839_);
v___x_848_ = v_reuseFailAlloc_851_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
lean_object* v___x_849_; 
lean_inc_ref(v_value_827_);
v___x_849_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(v___f_845_, v_value_827_, v___y_815_, v___x_848_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v_a_850_; 
v_a_850_ = lean_ctor_get(v___x_849_, 1);
lean_inc(v_a_850_);
lean_dec_ref_known(v___x_849_, 2);
v_a_818_ = v___x_830_;
v_a_819_ = v_a_850_;
goto v___jp_817_;
}
else
{
lean_dec(v_declName_809_);
return v___x_849_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_840_, 2);
lean_dec(v_a_837_);
v_a_818_ = v___x_830_;
v_a_819_ = v_a_836_;
goto v___jp_817_;
}
}
else
{
lean_object* v_a_855_; lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_863_; 
lean_dec(v_declName_809_);
v_a_855_ = lean_ctor_get(v___x_835_, 0);
v_a_856_ = lean_ctor_get(v___x_835_, 1);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_863_ == 0)
{
v___x_858_ = v___x_835_;
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_inc(v_a_855_);
lean_dec(v___x_835_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_861_; 
if (v_isShared_859_ == 0)
{
v___x_861_ = v___x_858_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_a_855_);
lean_ctor_set(v_reuseFailAlloc_862_, 1, v_a_856_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
}
}
v___jp_817_:
{
size_t v___x_820_; size_t v___x_821_; 
v___x_820_ = ((size_t)1ULL);
v___x_821_ = lean_usize_add(v_i_813_, v___x_820_);
v_i_813_ = v___x_821_;
v_b_814_ = v_a_818_;
v___y_816_ = v_a_819_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalApp(lean_object* v_declName_864_, lean_object* v_args_865_, lean_object* v_a_866_, lean_object* v_a_867_){
_start:
{
lean_object* v___y_869_; lean_object* v_decls_870_; lean_object* v___y_871_; lean_object* v_main_885_; lean_object* v_toSignature_886_; lean_object* v_decls_887_; lean_object* v_name_888_; lean_object* v_params_889_; uint8_t v___x_890_; 
v_main_885_ = lean_ctor_get(v_a_866_, 1);
v_toSignature_886_ = lean_ctor_get(v_main_885_, 0);
v_decls_887_ = lean_ctor_get(v_a_866_, 0);
v_name_888_ = lean_ctor_get(v_toSignature_886_, 0);
v_params_889_ = lean_ctor_get(v_toSignature_886_, 3);
v___x_890_ = lean_name_eq(v_declName_864_, v_name_888_);
if (v___x_890_ == 0)
{
v___y_869_ = v_a_866_;
v_decls_870_ = v_decls_887_;
v___y_871_ = v_a_867_;
goto v___jp_868_;
}
else
{
lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_891_ = lean_array_get_size(v_params_889_);
v___x_892_ = lean_unsigned_to_nat(0u);
v___x_893_ = lean_box(0);
v___x_894_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(v___x_891_, v_args_865_, v___x_892_, v___x_893_, v_a_866_, v_a_867_);
if (lean_obj_tag(v___x_894_) == 0)
{
lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_904_; 
v_a_895_ = lean_ctor_get(v___x_894_, 1);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_904_ == 0)
{
lean_object* v_unused_905_; 
v_unused_905_ = lean_ctor_get(v___x_894_, 0);
lean_dec(v_unused_905_);
v___x_897_ = v___x_894_;
v_isShared_898_ = v_isSharedCheck_904_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_894_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_904_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v_fixed_899_; uint8_t v___x_900_; 
v_fixed_899_ = lean_ctor_get(v_a_895_, 1);
v___x_900_ = l_Array_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__6(v_fixed_899_, v___x_890_);
if (v___x_900_ == 0)
{
lean_object* v___x_902_; 
lean_dec(v_declName_864_);
if (v_isShared_898_ == 0)
{
lean_ctor_set_tag(v___x_897_, 1);
lean_ctor_set(v___x_897_, 0, v___x_893_);
v___x_902_ = v___x_897_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v___x_893_);
lean_ctor_set(v_reuseFailAlloc_903_, 1, v_a_895_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
else
{
lean_del_object(v___x_897_);
v___y_869_ = v_a_866_;
v_decls_870_ = v_decls_887_;
v___y_871_ = v_a_895_;
goto v___jp_868_;
}
}
}
else
{
lean_dec(v_declName_864_);
return v___x_894_;
}
}
v___jp_868_:
{
lean_object* v___x_872_; size_t v_sz_873_; size_t v___x_874_; lean_object* v___x_875_; 
v___x_872_ = lean_box(0);
v_sz_873_ = lean_array_size(v_decls_870_);
v___x_874_ = ((size_t)0ULL);
v___x_875_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5(v_declName_864_, v_args_865_, v_decls_870_, v_sz_873_, v___x_874_, v___x_872_, v___y_869_, v___y_871_);
if (lean_obj_tag(v___x_875_) == 0)
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_883_; 
v_a_876_ = lean_ctor_get(v___x_875_, 1);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_883_ == 0)
{
lean_object* v_unused_884_; 
v_unused_884_ = lean_ctor_get(v___x_875_, 0);
lean_dec(v_unused_884_);
v___x_878_ = v___x_875_;
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_875_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_881_; 
if (v_isShared_879_ == 0)
{
lean_ctor_set(v___x_878_, 0, v___x_872_);
v___x_881_ = v___x_878_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v___x_872_);
lean_ctor_set(v_reuseFailAlloc_882_, 1, v_a_876_);
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
return v___x_875_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalLetValue(lean_object* v_e_906_, lean_object* v_a_907_, lean_object* v_a_908_){
_start:
{
if (lean_obj_tag(v_e_906_) == 3)
{
lean_object* v_declName_909_; lean_object* v_args_910_; lean_object* v___x_911_; 
v_declName_909_ = lean_ctor_get(v_e_906_, 0);
lean_inc(v_declName_909_);
v_args_910_ = lean_ctor_get(v_e_906_, 2);
lean_inc_ref(v_args_910_);
lean_dec_ref_known(v_e_906_, 3);
v___x_911_ = l_Lean_Compiler_LCNF_FixedParams_evalApp(v_declName_909_, v_args_910_, v_a_907_, v_a_908_);
lean_dec_ref(v_args_910_);
return v___x_911_;
}
else
{
lean_object* v___x_912_; lean_object* v___x_913_; 
lean_dec(v_e_906_);
v___x_912_ = lean_box(0);
v___x_913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_912_);
lean_ctor_set(v___x_913_, 1, v_a_908_);
return v___x_913_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(lean_object* v_as_914_, size_t v_i_915_, size_t v_stop_916_, lean_object* v_b_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
lean_object* v___y_921_; uint8_t v___x_928_; 
v___x_928_ = lean_usize_dec_eq(v_i_915_, v_stop_916_);
if (v___x_928_ == 0)
{
lean_object* v___x_929_; 
v___x_929_ = lean_array_uget_borrowed(v_as_914_, v_i_915_);
switch(lean_obj_tag(v___x_929_))
{
case 0:
{
lean_object* v_code_930_; 
v_code_930_ = lean_ctor_get(v___x_929_, 2);
lean_inc_ref(v_code_930_);
v___y_921_ = v_code_930_;
goto v___jp_920_;
}
case 1:
{
lean_object* v_code_931_; 
v_code_931_ = lean_ctor_get(v___x_929_, 1);
lean_inc_ref(v_code_931_);
v___y_921_ = v_code_931_;
goto v___jp_920_;
}
default: 
{
lean_object* v_code_932_; 
v_code_932_ = lean_ctor_get(v___x_929_, 0);
lean_inc_ref(v_code_932_);
v___y_921_ = v_code_932_;
goto v___jp_920_;
}
}
}
else
{
lean_object* v___x_933_; 
v___x_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_933_, 0, v_b_917_);
lean_ctor_set(v___x_933_, 1, v___y_919_);
return v___x_933_;
}
v___jp_920_:
{
lean_object* v___x_922_; 
lean_inc_ref(v___y_918_);
v___x_922_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v___y_921_, v___y_918_, v___y_919_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v_a_924_; size_t v___x_925_; size_t v___x_926_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_923_);
v_a_924_ = lean_ctor_get(v___x_922_, 1);
lean_inc(v_a_924_);
lean_dec_ref_known(v___x_922_, 2);
v___x_925_ = ((size_t)1ULL);
v___x_926_ = lean_usize_add(v_i_915_, v___x_925_);
v_i_915_ = v___x_926_;
v_b_917_ = v_a_923_;
v___y_919_ = v_a_924_;
goto _start;
}
else
{
return v___x_922_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalCode(lean_object* v_code_934_, lean_object* v_a_935_, lean_object* v_a_936_){
_start:
{
switch(lean_obj_tag(v_code_934_))
{
case 0:
{
lean_object* v_decl_937_; lean_object* v_k_938_; lean_object* v_value_939_; lean_object* v___x_940_; 
v_decl_937_ = lean_ctor_get(v_code_934_, 0);
lean_inc_ref(v_decl_937_);
v_k_938_ = lean_ctor_get(v_code_934_, 1);
lean_inc_ref(v_k_938_);
lean_dec_ref_known(v_code_934_, 2);
v_value_939_ = lean_ctor_get(v_decl_937_, 3);
lean_inc(v_value_939_);
lean_dec_ref(v_decl_937_);
v___x_940_ = l_Lean_Compiler_LCNF_FixedParams_evalLetValue(v_value_939_, v_a_935_, v_a_936_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_a_941_; 
v_a_941_ = lean_ctor_get(v___x_940_, 1);
lean_inc(v_a_941_);
lean_dec_ref_known(v___x_940_, 2);
v_code_934_ = v_k_938_;
v_a_936_ = v_a_941_;
goto _start;
}
else
{
lean_dec_ref(v_k_938_);
lean_dec_ref(v_a_935_);
return v___x_940_;
}
}
case 1:
{
lean_object* v_decl_943_; lean_object* v_k_944_; lean_object* v___x_945_; 
v_decl_943_ = lean_ctor_get(v_code_934_, 0);
lean_inc_ref_n(v_decl_943_, 2);
v_k_944_ = lean_ctor_get(v_code_934_, 1);
lean_inc_ref(v_k_944_);
lean_dec_ref_known(v_code_934_, 2);
v___x_945_ = l_Lean_Compiler_LCNF_FixedParams_isEquivalentFunDecl_x3f(v_decl_943_, v_a_935_, v_a_936_);
if (lean_obj_tag(v___x_945_) == 0)
{
lean_object* v_a_946_; 
v_a_946_ = lean_ctor_get(v___x_945_, 0);
lean_inc(v_a_946_);
if (lean_obj_tag(v_a_946_) == 1)
{
lean_object* v_a_947_; lean_object* v_val_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_962_; 
v_a_947_ = lean_ctor_get(v___x_945_, 1);
lean_inc(v_a_947_);
lean_dec_ref_known(v___x_945_, 2);
v_val_948_ = lean_ctor_get(v_a_946_, 0);
v_isSharedCheck_962_ = !lean_is_exclusive(v_a_946_);
if (v_isSharedCheck_962_ == 0)
{
v___x_950_ = v_a_946_;
v_isShared_951_ = v_isSharedCheck_962_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_val_948_);
lean_dec(v_a_946_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_962_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v_fvarId_952_; lean_object* v_decls_953_; lean_object* v_main_954_; lean_object* v_assignment_955_; lean_object* v___x_957_; 
v_fvarId_952_ = lean_ctor_get(v_decl_943_, 0);
lean_inc(v_fvarId_952_);
lean_dec_ref(v_decl_943_);
v_decls_953_ = lean_ctor_get(v_a_935_, 0);
lean_inc_ref(v_decls_953_);
v_main_954_ = lean_ctor_get(v_a_935_, 1);
lean_inc_ref(v_main_954_);
v_assignment_955_ = lean_ctor_get(v_a_935_, 2);
lean_inc(v_assignment_955_);
lean_dec_ref(v_a_935_);
if (v_isShared_951_ == 0)
{
lean_ctor_set_tag(v___x_950_, 2);
v___x_957_ = v___x_950_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_val_948_);
v___x_957_ = v_reuseFailAlloc_961_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_958_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_952_, v___x_957_, v_assignment_955_);
v___x_959_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_959_, 0, v_decls_953_);
lean_ctor_set(v___x_959_, 1, v_main_954_);
lean_ctor_set(v___x_959_, 2, v___x_958_);
v_code_934_ = v_k_944_;
v_a_935_ = v___x_959_;
v_a_936_ = v_a_947_;
goto _start;
}
}
}
else
{
lean_object* v_a_963_; lean_object* v_value_964_; lean_object* v___x_965_; 
lean_dec(v_a_946_);
v_a_963_ = lean_ctor_get(v___x_945_, 1);
lean_inc(v_a_963_);
lean_dec_ref_known(v___x_945_, 2);
v_value_964_ = lean_ctor_get(v_decl_943_, 4);
lean_inc_ref(v_value_964_);
lean_dec_ref(v_decl_943_);
lean_inc_ref(v_a_935_);
v___x_965_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v_value_964_, v_a_935_, v_a_963_);
if (lean_obj_tag(v___x_965_) == 0)
{
lean_object* v_a_966_; 
v_a_966_ = lean_ctor_get(v___x_965_, 1);
lean_inc(v_a_966_);
lean_dec_ref_known(v___x_965_, 2);
v_code_934_ = v_k_944_;
v_a_936_ = v_a_966_;
goto _start;
}
else
{
lean_dec_ref(v_k_944_);
lean_dec_ref(v_a_935_);
return v___x_965_;
}
}
}
else
{
lean_object* v_a_968_; lean_object* v_a_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_976_; 
lean_dec_ref(v_k_944_);
lean_dec_ref(v_decl_943_);
lean_dec_ref(v_a_935_);
v_a_968_ = lean_ctor_get(v___x_945_, 0);
v_a_969_ = lean_ctor_get(v___x_945_, 1);
v_isSharedCheck_976_ = !lean_is_exclusive(v___x_945_);
if (v_isSharedCheck_976_ == 0)
{
v___x_971_ = v___x_945_;
v_isShared_972_ = v_isSharedCheck_976_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_a_969_);
lean_inc(v_a_968_);
lean_dec(v___x_945_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_976_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_974_; 
if (v_isShared_972_ == 0)
{
v___x_974_ = v___x_971_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v_a_968_);
lean_ctor_set(v_reuseFailAlloc_975_, 1, v_a_969_);
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
case 2:
{
lean_object* v_decl_977_; lean_object* v_k_978_; lean_object* v_value_979_; lean_object* v___x_980_; 
v_decl_977_ = lean_ctor_get(v_code_934_, 0);
lean_inc_ref(v_decl_977_);
v_k_978_ = lean_ctor_get(v_code_934_, 1);
lean_inc_ref(v_k_978_);
lean_dec_ref_known(v_code_934_, 2);
v_value_979_ = lean_ctor_get(v_decl_977_, 4);
lean_inc_ref(v_value_979_);
lean_dec_ref(v_decl_977_);
lean_inc_ref(v_a_935_);
v___x_980_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v_value_979_, v_a_935_, v_a_936_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; 
v_a_981_ = lean_ctor_get(v___x_980_, 1);
lean_inc(v_a_981_);
lean_dec_ref_known(v___x_980_, 2);
v_code_934_ = v_k_978_;
v_a_936_ = v_a_981_;
goto _start;
}
else
{
lean_dec_ref(v_k_978_);
lean_dec_ref(v_a_935_);
return v___x_980_;
}
}
case 3:
{
lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_990_; 
lean_dec_ref(v_a_935_);
v_isSharedCheck_990_ = !lean_is_exclusive(v_code_934_);
if (v_isSharedCheck_990_ == 0)
{
lean_object* v_unused_991_; lean_object* v_unused_992_; 
v_unused_991_ = lean_ctor_get(v_code_934_, 1);
lean_dec(v_unused_991_);
v_unused_992_ = lean_ctor_get(v_code_934_, 0);
lean_dec(v_unused_992_);
v___x_984_ = v_code_934_;
v_isShared_985_ = v_isSharedCheck_990_;
goto v_resetjp_983_;
}
else
{
lean_dec(v_code_934_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_990_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_986_; lean_object* v___x_988_; 
v___x_986_ = lean_box(0);
if (v_isShared_985_ == 0)
{
lean_ctor_set_tag(v___x_984_, 0);
lean_ctor_set(v___x_984_, 1, v_a_936_);
lean_ctor_set(v___x_984_, 0, v___x_986_);
v___x_988_ = v___x_984_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v___x_986_);
lean_ctor_set(v_reuseFailAlloc_989_, 1, v_a_936_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
case 4:
{
lean_object* v_cases_993_; lean_object* v_alts_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; uint8_t v___x_998_; 
v_cases_993_ = lean_ctor_get(v_code_934_, 0);
lean_inc_ref(v_cases_993_);
lean_dec_ref_known(v_code_934_, 1);
v_alts_994_ = lean_ctor_get(v_cases_993_, 3);
lean_inc_ref(v_alts_994_);
lean_dec_ref(v_cases_993_);
v___x_995_ = lean_unsigned_to_nat(0u);
v___x_996_ = lean_array_get_size(v_alts_994_);
v___x_997_ = lean_box(0);
v___x_998_ = lean_nat_dec_lt(v___x_995_, v___x_996_);
if (v___x_998_ == 0)
{
lean_object* v___x_999_; 
lean_dec_ref(v_alts_994_);
lean_dec_ref(v_a_935_);
v___x_999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_997_);
lean_ctor_set(v___x_999_, 1, v_a_936_);
return v___x_999_;
}
else
{
size_t v___x_1000_; size_t v___x_1001_; lean_object* v___x_1002_; 
v___x_1000_ = ((size_t)0ULL);
v___x_1001_ = lean_usize_of_nat(v___x_996_);
v___x_1002_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(v_alts_994_, v___x_1000_, v___x_1001_, v___x_997_, v_a_935_, v_a_936_);
lean_dec_ref(v_a_935_);
lean_dec_ref(v_alts_994_);
return v___x_1002_;
}
}
default: 
{
lean_object* v___x_1003_; lean_object* v___x_1004_; 
lean_dec_ref(v_a_935_);
lean_dec_ref(v_code_934_);
v___x_1003_ = lean_box(0);
v___x_1004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
lean_ctor_set(v___x_1004_, 1, v_a_936_);
return v___x_1004_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___lam__0(lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_c_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_){
_start:
{
lean_object* v_decls_1010_; lean_object* v_main_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v_decls_1010_ = lean_ctor_get(v___y_1008_, 0);
v_main_1011_ = lean_ctor_get(v___y_1008_, 1);
v___x_1012_ = l_Lean_Compiler_LCNF_FixedParams_mkAssignment(v_a_1005_, v_a_1006_);
lean_inc_ref(v_main_1011_);
lean_inc_ref(v_decls_1010_);
v___x_1013_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1013_, 0, v_decls_1010_);
lean_ctor_set(v___x_1013_, 1, v_main_1011_);
lean_ctor_set(v___x_1013_, 2, v___x_1012_);
v___x_1014_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v_c_1007_, v___x_1013_, v___y_1009_);
return v___x_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalLetValue___boxed(lean_object* v_e_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_){
_start:
{
lean_object* v_res_1018_; 
v_res_1018_ = l_Lean_Compiler_LCNF_FixedParams_evalLetValue(v_e_1015_, v_a_1016_, v_a_1017_);
lean_dec_ref(v_a_1016_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9___boxed(lean_object* v_as_1019_, lean_object* v_i_1020_, lean_object* v_stop_1021_, lean_object* v_b_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_){
_start:
{
size_t v_i_boxed_1025_; size_t v_stop_boxed_1026_; lean_object* v_res_1027_; 
v_i_boxed_1025_ = lean_unbox_usize(v_i_1020_);
lean_dec(v_i_1020_);
v_stop_boxed_1026_ = lean_unbox_usize(v_stop_1021_);
lean_dec(v_stop_1021_);
v_res_1027_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FixedParams_evalCode_spec__9(v_as_1019_, v_i_boxed_1025_, v_stop_boxed_1026_, v_b_1022_, v___y_1023_, v___y_1024_);
lean_dec_ref(v___y_1023_);
lean_dec_ref(v_as_1019_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_evalApp___boxed(lean_object* v_declName_1028_, lean_object* v_args_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_){
_start:
{
lean_object* v_res_1032_; 
v_res_1032_ = l_Lean_Compiler_LCNF_FixedParams_evalApp(v_declName_1028_, v_args_1029_, v_a_1030_, v_a_1031_);
lean_dec_ref(v_a_1030_);
lean_dec_ref(v_args_1029_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___boxed(lean_object* v_declName_1033_, lean_object* v_args_1034_, lean_object* v_as_1035_, lean_object* v_sz_1036_, lean_object* v_i_1037_, lean_object* v_b_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
size_t v_sz_boxed_1041_; size_t v_i_boxed_1042_; lean_object* v_res_1043_; 
v_sz_boxed_1041_ = lean_unbox_usize(v_sz_1036_);
lean_dec(v_sz_1036_);
v_i_boxed_1042_ = lean_unbox_usize(v_i_1037_);
lean_dec(v_i_1037_);
v_res_1043_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5(v_declName_1033_, v_args_1034_, v_as_1035_, v_sz_boxed_1041_, v_i_boxed_1042_, v_b_1038_, v___y_1039_, v___y_1040_);
lean_dec_ref(v___y_1039_);
lean_dec_ref(v_as_1035_);
lean_dec_ref(v_args_1034_);
return v_res_1043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3(uint8_t v_pu_1044_, lean_object* v_f_1045_, lean_object* v_v_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_){
_start:
{
lean_object* v___x_1049_; 
v___x_1049_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___redArg(v_f_1045_, v_v_1046_, v___y_1047_, v___y_1048_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3___boxed(lean_object* v_pu_1050_, lean_object* v_f_1051_, lean_object* v_v_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_){
_start:
{
uint8_t v_pu_boxed_1055_; lean_object* v_res_1056_; 
v_pu_boxed_1055_ = lean_unbox(v_pu_1050_);
v_res_1056_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__3(v_pu_boxed_1055_, v_f_1051_, v_v_1052_, v___y_1053_, v___y_1054_);
lean_dec_ref(v___y_1053_);
return v_res_1056_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1(lean_object* v_00_u03b2_1057_, lean_object* v_m_1058_, lean_object* v_a_1059_){
_start:
{
uint8_t v___x_1060_; 
v___x_1060_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___redArg(v_m_1058_, v_a_1059_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1___boxed(lean_object* v_00_u03b2_1061_, lean_object* v_m_1062_, lean_object* v_a_1063_){
_start:
{
uint8_t v_res_1064_; lean_object* v_r_1065_; 
v_res_1064_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1(v_00_u03b2_1061_, v_m_1062_, v_a_1063_);
lean_dec_ref(v_a_1063_);
lean_dec_ref(v_m_1062_);
v_r_1065_ = lean_box(v_res_1064_);
return v_r_1065_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2(lean_object* v_00_u03b2_1066_, lean_object* v_m_1067_, lean_object* v_a_1068_, lean_object* v_b_1069_){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2___redArg(v_m_1067_, v_a_1068_, v_b_1069_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4(lean_object* v_upperBound_1071_, lean_object* v_args_1072_, lean_object* v_inst_1073_, lean_object* v_R_1074_, lean_object* v_a_1075_, lean_object* v_b_1076_, lean_object* v_c_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v___x_1080_; 
v___x_1080_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___redArg(v_upperBound_1071_, v_args_1072_, v_a_1075_, v_b_1076_, v___y_1078_, v___y_1079_);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4___boxed(lean_object* v_upperBound_1081_, lean_object* v_args_1082_, lean_object* v_inst_1083_, lean_object* v_R_1084_, lean_object* v_a_1085_, lean_object* v_b_1086_, lean_object* v_c_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__4(v_upperBound_1081_, v_args_1082_, v_inst_1083_, v_R_1084_, v_a_1085_, v_b_1086_, v_c_1087_, v___y_1088_, v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec_ref(v_args_1082_);
lean_dec(v_upperBound_1081_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7(lean_object* v_upperBound_1091_, lean_object* v_args_1092_, lean_object* v_inst_1093_, lean_object* v_R_1094_, lean_object* v_a_1095_, lean_object* v_b_1096_, lean_object* v_c_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_){
_start:
{
lean_object* v___x_1100_; 
v___x_1100_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___redArg(v_upperBound_1091_, v_args_1092_, v_a_1095_, v_b_1096_, v___y_1098_, v___y_1099_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7___boxed(lean_object* v_upperBound_1101_, lean_object* v_args_1102_, lean_object* v_inst_1103_, lean_object* v_R_1104_, lean_object* v_a_1105_, lean_object* v_b_1106_, lean_object* v_c_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__7(v_upperBound_1101_, v_args_1102_, v_inst_1103_, v_R_1104_, v_a_1105_, v_b_1106_, v_c_1107_, v___y_1108_, v___y_1109_);
lean_dec_ref(v___y_1108_);
lean_dec_ref(v_args_1102_);
lean_dec(v_upperBound_1101_);
return v_res_1110_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1(lean_object* v_00_u03b2_1111_, lean_object* v_a_1112_, lean_object* v_x_1113_){
_start:
{
uint8_t v___x_1114_; 
v___x_1114_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___redArg(v_a_1112_, v_x_1113_);
return v___x_1114_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1___boxed(lean_object* v_00_u03b2_1115_, lean_object* v_a_1116_, lean_object* v_x_1117_){
_start:
{
uint8_t v_res_1118_; lean_object* v_r_1119_; 
v_res_1118_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1(v_00_u03b2_1115_, v_a_1116_, v_x_1117_);
lean_dec(v_x_1117_);
lean_dec_ref(v_a_1116_);
v_r_1119_ = lean_box(v_res_1118_);
return v_r_1119_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4(lean_object* v_00_u03b2_1120_, lean_object* v_data_1121_){
_start:
{
lean_object* v___x_1122_; 
v___x_1122_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4___redArg(v_data_1121_);
return v___x_1122_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4(lean_object* v_xs_1123_, lean_object* v_ys_1124_, lean_object* v_hsz_1125_, lean_object* v_x_1126_, lean_object* v_x_1127_){
_start:
{
uint8_t v___x_1128_; 
v___x_1128_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___redArg(v_xs_1123_, v_ys_1124_, v_x_1126_);
return v___x_1128_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4___boxed(lean_object* v_xs_1129_, lean_object* v_ys_1130_, lean_object* v_hsz_1131_, lean_object* v_x_1132_, lean_object* v_x_1133_){
_start:
{
uint8_t v_res_1134_; lean_object* v_r_1135_; 
v_res_1134_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__1_spec__1_spec__4(v_xs_1129_, v_ys_1130_, v_hsz_1131_, v_x_1132_, v_x_1133_);
lean_dec_ref(v_ys_1130_);
lean_dec_ref(v_xs_1129_);
v_r_1135_ = lean_box(v_res_1134_);
return v_r_1135_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_1136_, lean_object* v_i_1137_, lean_object* v_source_1138_, lean_object* v_target_1139_){
_start:
{
lean_object* v___x_1140_; 
v___x_1140_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8___redArg(v_i_1137_, v_source_1138_, v_target_1139_);
return v___x_1140_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14(lean_object* v_00_u03b2_1141_, lean_object* v_x_1142_, lean_object* v_x_1143_){
_start:
{
lean_object* v___x_1144_; 
v___x_1144_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__2_spec__4_spec__8_spec__14___redArg(v_x_1142_, v_x_1143_);
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(lean_object* v_upperBound_1145_, lean_object* v_a_1146_, lean_object* v_b_1147_){
_start:
{
uint8_t v___x_1148_; 
v___x_1148_ = lean_nat_dec_lt(v_a_1146_, v_upperBound_1145_);
if (v___x_1148_ == 0)
{
lean_dec(v_a_1146_);
return v_b_1147_;
}
else
{
lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; 
lean_inc(v_a_1146_);
v___x_1149_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1149_, 0, v_a_1146_);
v___x_1150_ = lean_array_push(v_b_1147_, v___x_1149_);
v___x_1151_ = lean_unsigned_to_nat(1u);
v___x_1152_ = lean_nat_add(v_a_1146_, v___x_1151_);
lean_dec(v_a_1146_);
v_a_1146_ = v___x_1152_;
v_b_1147_ = v___x_1150_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg___boxed(lean_object* v_upperBound_1154_, lean_object* v_a_1155_, lean_object* v_b_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(v_upperBound_1154_, v_a_1155_, v_b_1156_);
lean_dec(v_upperBound_1154_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkInitialValues(lean_object* v_numParams_1158_){
_start:
{
lean_object* v___x_1159_; lean_object* v_values_1160_; lean_object* v___x_1161_; 
v___x_1159_ = lean_unsigned_to_nat(0u);
v_values_1160_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FixedParams_evalApp_spec__5___closed__0));
v___x_1161_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(v_numParams_1158_, v___x_1159_, v_values_1160_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FixedParams_mkInitialValues___boxed(lean_object* v_numParams_1162_){
_start:
{
lean_object* v_res_1163_; 
v_res_1163_ = l_Lean_Compiler_LCNF_FixedParams_mkInitialValues(v_numParams_1162_);
lean_dec(v_numParams_1162_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0(lean_object* v_upperBound_1164_, lean_object* v_inst_1165_, lean_object* v_R_1166_, lean_object* v_a_1167_, lean_object* v_b_1168_, lean_object* v_c_1169_){
_start:
{
lean_object* v___x_1170_; 
v___x_1170_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___redArg(v_upperBound_1164_, v_a_1167_, v_b_1168_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0___boxed(lean_object* v_upperBound_1171_, lean_object* v_inst_1172_, lean_object* v_R_1173_, lean_object* v_a_1174_, lean_object* v_b_1175_, lean_object* v_c_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FixedParams_mkInitialValues_spec__0(v_upperBound_1171_, v_inst_1172_, v_R_1173_, v_a_1174_, v_b_1175_, v_c_1176_);
lean_dec(v_upperBound_1171_);
return v_res_1177_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1178_ = lean_box(0);
v___x_1179_ = lean_unsigned_to_nat(16u);
v___x_1180_ = lean_mk_array(v___x_1179_, v___x_1178_);
return v___x_1180_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1181_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__0);
v___x_1182_ = lean_unsigned_to_nat(0u);
v___x_1183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1182_);
lean_ctor_set(v___x_1183_, 1, v___x_1181_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0(lean_object* v_decls_1184_, lean_object* v_as_1185_, size_t v_sz_1186_, size_t v_i_1187_, lean_object* v_b_1188_){
_start:
{
lean_object* v_a_1190_; uint8_t v___x_1194_; 
v___x_1194_ = lean_usize_dec_lt(v_i_1187_, v_sz_1186_);
if (v___x_1194_ == 0)
{
lean_dec_ref(v_decls_1184_);
return v_b_1188_;
}
else
{
lean_object* v_a_1195_; lean_object* v_toSignature_1196_; lean_object* v_value_1197_; lean_object* v_name_1198_; lean_object* v_params_1199_; lean_object* v_s_1201_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; 
v_a_1195_ = lean_array_uget_borrowed(v_as_1185_, v_i_1187_);
v_toSignature_1196_ = lean_ctor_get(v_a_1195_, 0);
v_value_1197_ = lean_ctor_get(v_a_1195_, 1);
v_name_1198_ = lean_ctor_get(v_toSignature_1196_, 0);
v_params_1199_ = lean_ctor_get(v_toSignature_1196_, 3);
v___x_1204_ = lean_array_get_size(v_params_1199_);
v___x_1205_ = l_Lean_Compiler_LCNF_FixedParams_mkInitialValues(v___x_1204_);
v___x_1206_ = lean_box(v___x_1194_);
v___x_1207_ = lean_mk_array(v___x_1204_, v___x_1206_);
if (lean_obj_tag(v_value_1197_) == 0)
{
lean_object* v_code_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v_a_1214_; 
v_code_1208_ = lean_ctor_get(v_value_1197_, 0);
v___x_1209_ = l_Lean_Compiler_LCNF_FixedParams_mkAssignment(v_a_1195_, v___x_1205_);
lean_inc(v_a_1195_);
lean_inc_ref(v_decls_1184_);
v___x_1210_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1210_, 0, v_decls_1184_);
lean_ctor_set(v___x_1210_, 1, v_a_1195_);
lean_ctor_set(v___x_1210_, 2, v___x_1209_);
v___x_1211_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___closed__1);
v___x_1212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1211_);
lean_ctor_set(v___x_1212_, 1, v___x_1207_);
lean_inc_ref(v_code_1208_);
v___x_1213_ = l_Lean_Compiler_LCNF_FixedParams_evalCode(v_code_1208_, v___x_1210_, v___x_1212_);
v_a_1214_ = lean_ctor_get(v___x_1213_, 1);
lean_inc(v_a_1214_);
lean_dec_ref(v___x_1213_);
v_s_1201_ = v_a_1214_;
goto v___jp_1200_;
}
else
{
lean_object* v___x_1215_; 
lean_dec_ref(v___x_1205_);
lean_inc(v_name_1198_);
v___x_1215_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1198_, v___x_1207_, v_b_1188_);
v_a_1190_ = v___x_1215_;
goto v___jp_1189_;
}
v___jp_1200_:
{
lean_object* v_fixed_1202_; lean_object* v___x_1203_; 
v_fixed_1202_ = lean_ctor_get(v_s_1201_, 1);
lean_inc_ref(v_fixed_1202_);
lean_dec_ref(v_s_1201_);
lean_inc(v_name_1198_);
v___x_1203_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1198_, v_fixed_1202_, v_b_1188_);
v_a_1190_ = v___x_1203_;
goto v___jp_1189_;
}
}
v___jp_1189_:
{
size_t v___x_1191_; size_t v___x_1192_; 
v___x_1191_ = ((size_t)1ULL);
v___x_1192_ = lean_usize_add(v_i_1187_, v___x_1191_);
v_i_1187_ = v___x_1192_;
v_b_1188_ = v_a_1190_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0___boxed(lean_object* v_decls_1216_, lean_object* v_as_1217_, lean_object* v_sz_1218_, lean_object* v_i_1219_, lean_object* v_b_1220_){
_start:
{
size_t v_sz_boxed_1221_; size_t v_i_boxed_1222_; lean_object* v_res_1223_; 
v_sz_boxed_1221_ = lean_unbox_usize(v_sz_1218_);
lean_dec(v_sz_1218_);
v_i_boxed_1222_ = lean_unbox_usize(v_i_1219_);
lean_dec(v_i_1219_);
v_res_1223_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0(v_decls_1216_, v_as_1217_, v_sz_boxed_1221_, v_i_boxed_1222_, v_b_1220_);
lean_dec_ref(v_as_1217_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFixedParamsMap(lean_object* v_decls_1224_){
_start:
{
lean_object* v_result_1225_; size_t v_sz_1226_; size_t v___x_1227_; lean_object* v___x_1228_; 
v_result_1225_ = lean_box(1);
v_sz_1226_ = lean_array_size(v_decls_1224_);
v___x_1227_ = ((size_t)0ULL);
lean_inc_ref(v_decls_1224_);
v___x_1228_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_mkFixedParamsMap_spec__0(v_decls_1224_, v_decls_1224_, v_sz_1226_, v___x_1227_, v_result_1225_);
lean_dec_ref(v_decls_1224_);
return v___x_1228_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default = _init_l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue_default);
l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue = _init_l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue();
lean_mark_persistent(l_Lean_Compiler_LCNF_FixedParams_instInhabitedAbsValue);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_FixedParams(builtin);
}
#ifdef __cplusplus
}
#endif
