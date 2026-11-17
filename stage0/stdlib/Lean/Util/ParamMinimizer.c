// Lean compiler output
// Module: Lean.Util.ParamMinimizer
// Imports: public import Init.While public import Init.Data.Range.Polymorphic
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
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Init_While_0__repeatM_erased___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_missing_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_missing_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_missing_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_missing_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_approx_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_approx_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_approx_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_approx_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_precise_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_precise_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_precise_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_precise_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Util_ParamMinimizer_instInhabitedStatus_default;
LEAN_EXPORT uint8_t l_Lean_Util_ParamMinimizer_instInhabitedStatus;
static const lean_string_object l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Util.ParamMinimizer.Status.missing"};
static const lean_object* l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__0 = (const lean_object*)&l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__0_value;
static const lean_ctor_object l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__0_value)}};
static const lean_object* l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__1 = (const lean_object*)&l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__1_value;
static const lean_string_object l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lean.Util.ParamMinimizer.Status.approx"};
static const lean_object* l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__2 = (const lean_object*)&l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__2_value;
static const lean_ctor_object l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__2_value)}};
static const lean_object* l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__3 = (const lean_object*)&l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__3_value;
static const lean_string_object l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Util.ParamMinimizer.Status.precise"};
static const lean_object* l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__4 = (const lean_object*)&l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__4_value;
static const lean_ctor_object l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__4_value)}};
static const lean_object* l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__5 = (const lean_object*)&l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__5_value;
static lean_once_cell_t l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__6;
static lean_once_cell_t l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__7;
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_instReprStatus_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_instReprStatus_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Util_ParamMinimizer_instReprStatus___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Util_ParamMinimizer_instReprStatus_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Util_ParamMinimizer_instReprStatus___closed__0 = (const lean_object*)&l_Lean_Util_ParamMinimizer_instReprStatus___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Util_ParamMinimizer_instReprStatus = (const lean_object*)&l_Lean_Util_ParamMinimizer_instReprStatus___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_markFound___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_markFound___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_markFound(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_markFound___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_incNumCalls___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_incNumCalls(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_incNumCalls___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_add___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_add(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_erase___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_erase___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_erase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_erase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_restore___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_restore___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_restore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_restore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__3(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__9___closed__0 = (const lean_object*)&l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__9___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__7___closed__0 = (const lean_object*)&l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_search___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_search___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Util_ParamMinimizer_search___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Util_ParamMinimizer_search___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Util_ParamMinimizer_search___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_search___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_search___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_search___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_search(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Lean_Util_ParamMinimizer_Status_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_Util_ParamMinimizer_Status_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Lean_Util_ParamMinimizer_Status_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_missing_elim___redArg(lean_object* v_missing_22_){
_start:
{
lean_inc(v_missing_22_);
return v_missing_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_missing_elim___redArg___boxed(lean_object* v_missing_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_Util_ParamMinimizer_Status_missing_elim___redArg(v_missing_23_);
lean_dec(v_missing_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_missing_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_missing_28_){
_start:
{
lean_inc(v_missing_28_);
return v_missing_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_missing_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_missing_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Lean_Util_ParamMinimizer_Status_missing_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_missing_32_);
lean_dec(v_missing_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_approx_elim___redArg(lean_object* v_approx_35_){
_start:
{
lean_inc(v_approx_35_);
return v_approx_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_approx_elim___redArg___boxed(lean_object* v_approx_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_Util_ParamMinimizer_Status_approx_elim___redArg(v_approx_36_);
lean_dec(v_approx_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_approx_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_approx_41_){
_start:
{
lean_inc(v_approx_41_);
return v_approx_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_approx_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_approx_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Lean_Util_ParamMinimizer_Status_approx_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_approx_45_);
lean_dec(v_approx_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_precise_elim___redArg(lean_object* v_precise_48_){
_start:
{
lean_inc(v_precise_48_);
return v_precise_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_precise_elim___redArg___boxed(lean_object* v_precise_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_Util_ParamMinimizer_Status_precise_elim___redArg(v_precise_49_);
lean_dec(v_precise_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_precise_elim(lean_object* v_motive_51_, uint8_t v_t_52_, lean_object* v_h_53_, lean_object* v_precise_54_){
_start:
{
lean_inc(v_precise_54_);
return v_precise_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_Status_precise_elim___boxed(lean_object* v_motive_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_precise_58_){
_start:
{
uint8_t v_t_boxed_59_; lean_object* v_res_60_; 
v_t_boxed_59_ = lean_unbox(v_t_56_);
v_res_60_ = l_Lean_Util_ParamMinimizer_Status_precise_elim(v_motive_55_, v_t_boxed_59_, v_h_57_, v_precise_58_);
lean_dec(v_precise_58_);
return v_res_60_;
}
}
static uint8_t _init_l_Lean_Util_ParamMinimizer_instInhabitedStatus_default(void){
_start:
{
uint8_t v___x_61_; 
v___x_61_ = 0;
return v___x_61_;
}
}
static uint8_t _init_l_Lean_Util_ParamMinimizer_instInhabitedStatus(void){
_start:
{
uint8_t v___x_62_; 
v___x_62_ = 0;
return v___x_62_;
}
}
static lean_object* _init_l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__6(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_72_ = lean_unsigned_to_nat(2u);
v___x_73_ = lean_nat_to_int(v___x_72_);
return v___x_73_;
}
}
static lean_object* _init_l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__7(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = lean_unsigned_to_nat(1u);
v___x_75_ = lean_nat_to_int(v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_instReprStatus_repr(uint8_t v_x_76_, lean_object* v_prec_77_){
_start:
{
lean_object* v___y_79_; lean_object* v___y_86_; lean_object* v___y_93_; 
switch(v_x_76_)
{
case 0:
{
lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_99_ = lean_unsigned_to_nat(1024u);
v___x_100_ = lean_nat_dec_le(v___x_99_, v_prec_77_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; 
v___x_101_ = lean_obj_once(&l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__6, &l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__6_once, _init_l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__6);
v___y_79_ = v___x_101_;
goto v___jp_78_;
}
else
{
lean_object* v___x_102_; 
v___x_102_ = lean_obj_once(&l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__7, &l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__7_once, _init_l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__7);
v___y_79_ = v___x_102_;
goto v___jp_78_;
}
}
case 1:
{
lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_103_ = lean_unsigned_to_nat(1024u);
v___x_104_ = lean_nat_dec_le(v___x_103_, v_prec_77_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; 
v___x_105_ = lean_obj_once(&l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__6, &l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__6_once, _init_l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__6);
v___y_86_ = v___x_105_;
goto v___jp_85_;
}
else
{
lean_object* v___x_106_; 
v___x_106_ = lean_obj_once(&l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__7, &l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__7_once, _init_l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__7);
v___y_86_ = v___x_106_;
goto v___jp_85_;
}
}
default: 
{
lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_107_ = lean_unsigned_to_nat(1024u);
v___x_108_ = lean_nat_dec_le(v___x_107_, v_prec_77_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; 
v___x_109_ = lean_obj_once(&l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__6, &l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__6_once, _init_l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__6);
v___y_93_ = v___x_109_;
goto v___jp_92_;
}
else
{
lean_object* v___x_110_; 
v___x_110_ = lean_obj_once(&l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__7, &l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__7_once, _init_l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__7);
v___y_93_ = v___x_110_;
goto v___jp_92_;
}
}
}
v___jp_78_:
{
lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_80_ = ((lean_object*)(l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__1));
lean_inc(v___y_79_);
v___x_81_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_81_, 0, v___y_79_);
lean_ctor_set(v___x_81_, 1, v___x_80_);
v___x_82_ = 0;
v___x_83_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_83_, 0, v___x_81_);
lean_ctor_set_uint8(v___x_83_, sizeof(void*)*1, v___x_82_);
v___x_84_ = l_Repr_addAppParen(v___x_83_, v_prec_77_);
return v___x_84_;
}
v___jp_85_:
{
lean_object* v___x_87_; lean_object* v___x_88_; uint8_t v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_87_ = ((lean_object*)(l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__3));
lean_inc(v___y_86_);
v___x_88_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_88_, 0, v___y_86_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
v___x_89_ = 0;
v___x_90_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_90_, 0, v___x_88_);
lean_ctor_set_uint8(v___x_90_, sizeof(void*)*1, v___x_89_);
v___x_91_ = l_Repr_addAppParen(v___x_90_, v_prec_77_);
return v___x_91_;
}
v___jp_92_:
{
lean_object* v___x_94_; lean_object* v___x_95_; uint8_t v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_94_ = ((lean_object*)(l_Lean_Util_ParamMinimizer_instReprStatus_repr___closed__5));
lean_inc(v___y_93_);
v___x_95_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_95_, 0, v___y_93_);
lean_ctor_set(v___x_95_, 1, v___x_94_);
v___x_96_ = 0;
v___x_97_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_97_, 0, v___x_95_);
lean_ctor_set_uint8(v___x_97_, sizeof(void*)*1, v___x_96_);
v___x_98_ = l_Repr_addAppParen(v___x_97_, v_prec_77_);
return v___x_98_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_instReprStatus_repr___boxed(lean_object* v_x_111_, lean_object* v_prec_112_){
_start:
{
uint8_t v_x_255__boxed_113_; lean_object* v_res_114_; 
v_x_255__boxed_113_ = lean_unbox(v_x_111_);
v_res_114_ = l_Lean_Util_ParamMinimizer_instReprStatus_repr(v_x_255__boxed_113_, v_prec_112_);
lean_dec(v_prec_112_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_markFound___redArg___lam__0(lean_object* v_toPure_117_, lean_object* v_____x_118_){
_start:
{
lean_object* v_fst_119_; lean_object* v_snd_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_129_; 
v_fst_119_ = lean_ctor_get(v_____x_118_, 0);
v_snd_120_ = lean_ctor_get(v_____x_118_, 1);
v_isSharedCheck_129_ = !lean_is_exclusive(v_____x_118_);
if (v_isSharedCheck_129_ == 0)
{
v___x_122_ = v_____x_118_;
v_isShared_123_ = v_isSharedCheck_129_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_snd_120_);
lean_inc(v_fst_119_);
lean_dec(v_____x_118_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_129_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_124_; lean_object* v___x_126_; 
v___x_124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_124_, 0, v_fst_119_);
if (v_isShared_123_ == 0)
{
lean_ctor_set(v___x_122_, 0, v___x_124_);
v___x_126_ = v___x_122_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v___x_124_);
lean_ctor_set(v_reuseFailAlloc_128_, 1, v_snd_120_);
v___x_126_ = v_reuseFailAlloc_128_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
lean_object* v___x_127_; 
v___x_127_ = lean_apply_2(v_toPure_117_, lean_box(0), v___x_126_);
return v___x_127_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_markFound___redArg(lean_object* v_inst_130_, lean_object* v_a_131_){
_start:
{
lean_object* v_toApplicative_132_; lean_object* v_toBind_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_156_; 
v_toApplicative_132_ = lean_ctor_get(v_inst_130_, 0);
v_toBind_133_ = lean_ctor_get(v_inst_130_, 1);
v_isSharedCheck_156_ = !lean_is_exclusive(v_inst_130_);
if (v_isSharedCheck_156_ == 0)
{
v___x_135_ = v_inst_130_;
v_isShared_136_ = v_isSharedCheck_156_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_toBind_133_);
lean_inc(v_toApplicative_132_);
lean_dec(v_inst_130_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_156_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v_toPure_137_; lean_object* v_cur_138_; lean_object* v_added_139_; lean_object* v_numCalls_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_155_; 
v_toPure_137_ = lean_ctor_get(v_toApplicative_132_, 1);
lean_inc(v_toPure_137_);
lean_dec_ref(v_toApplicative_132_);
v_cur_138_ = lean_ctor_get(v_a_131_, 0);
v_added_139_ = lean_ctor_get(v_a_131_, 1);
v_numCalls_140_ = lean_ctor_get(v_a_131_, 2);
v_isSharedCheck_155_ = !lean_is_exclusive(v_a_131_);
if (v_isSharedCheck_155_ == 0)
{
v___x_142_ = v_a_131_;
v_isShared_143_ = v_isSharedCheck_155_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_numCalls_140_);
lean_inc(v_added_139_);
lean_inc(v_cur_138_);
lean_dec(v_a_131_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_155_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___f_144_; lean_object* v___x_145_; uint8_t v___x_146_; lean_object* v___x_148_; 
lean_inc(v_toPure_137_);
v___f_144_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_markFound___redArg___lam__0), 2, 1);
lean_closure_set(v___f_144_, 0, v_toPure_137_);
v___x_145_ = lean_box(0);
v___x_146_ = 1;
if (v_isShared_143_ == 0)
{
v___x_148_ = v___x_142_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_cur_138_);
lean_ctor_set(v_reuseFailAlloc_154_, 1, v_added_139_);
lean_ctor_set(v_reuseFailAlloc_154_, 2, v_numCalls_140_);
v___x_148_ = v_reuseFailAlloc_154_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
lean_object* v___x_150_; 
lean_ctor_set_uint8(v___x_148_, sizeof(void*)*3, v___x_146_);
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 1, v___x_148_);
lean_ctor_set(v___x_135_, 0, v___x_145_);
v___x_150_ = v___x_135_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v___x_145_);
lean_ctor_set(v_reuseFailAlloc_153_, 1, v___x_148_);
v___x_150_ = v_reuseFailAlloc_153_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = lean_apply_2(v_toPure_137_, lean_box(0), v___x_150_);
v___x_152_ = lean_apply_4(v_toBind_133_, lean_box(0), lean_box(0), v___x_151_, v___f_144_);
return v___x_152_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_markFound(lean_object* v_m_157_, lean_object* v_inst_158_, lean_object* v_a_159_, lean_object* v_a_160_){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_markFound___redArg(v_inst_158_, v_a_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_markFound___boxed(lean_object* v_m_162_, lean_object* v_inst_163_, lean_object* v_a_164_, lean_object* v_a_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_markFound(v_m_162_, v_inst_163_, v_a_164_, v_a_165_);
lean_dec_ref(v_a_164_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_incNumCalls___redArg(lean_object* v_inst_167_, lean_object* v_a_168_){
_start:
{
lean_object* v_toApplicative_169_; lean_object* v_toBind_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_195_; 
v_toApplicative_169_ = lean_ctor_get(v_inst_167_, 0);
v_toBind_170_ = lean_ctor_get(v_inst_167_, 1);
v_isSharedCheck_195_ = !lean_is_exclusive(v_inst_167_);
if (v_isSharedCheck_195_ == 0)
{
v___x_172_ = v_inst_167_;
v_isShared_173_ = v_isSharedCheck_195_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_toBind_170_);
lean_inc(v_toApplicative_169_);
lean_dec(v_inst_167_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_195_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v_toPure_174_; lean_object* v_cur_175_; lean_object* v_added_176_; lean_object* v_numCalls_177_; uint8_t v_found_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_194_; 
v_toPure_174_ = lean_ctor_get(v_toApplicative_169_, 1);
lean_inc(v_toPure_174_);
lean_dec_ref(v_toApplicative_169_);
v_cur_175_ = lean_ctor_get(v_a_168_, 0);
v_added_176_ = lean_ctor_get(v_a_168_, 1);
v_numCalls_177_ = lean_ctor_get(v_a_168_, 2);
v_found_178_ = lean_ctor_get_uint8(v_a_168_, sizeof(void*)*3);
v_isSharedCheck_194_ = !lean_is_exclusive(v_a_168_);
if (v_isSharedCheck_194_ == 0)
{
v___x_180_ = v_a_168_;
v_isShared_181_ = v_isSharedCheck_194_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_numCalls_177_);
lean_inc(v_added_176_);
lean_inc(v_cur_175_);
lean_dec(v_a_168_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_194_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v___f_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_187_; 
lean_inc(v_toPure_174_);
v___f_182_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_markFound___redArg___lam__0), 2, 1);
lean_closure_set(v___f_182_, 0, v_toPure_174_);
v___x_183_ = lean_box(0);
v___x_184_ = lean_unsigned_to_nat(1u);
v___x_185_ = lean_nat_add(v_numCalls_177_, v___x_184_);
lean_dec(v_numCalls_177_);
if (v_isShared_181_ == 0)
{
lean_ctor_set(v___x_180_, 2, v___x_185_);
v___x_187_ = v___x_180_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v_cur_175_);
lean_ctor_set(v_reuseFailAlloc_193_, 1, v_added_176_);
lean_ctor_set(v_reuseFailAlloc_193_, 2, v___x_185_);
lean_ctor_set_uint8(v_reuseFailAlloc_193_, sizeof(void*)*3, v_found_178_);
v___x_187_ = v_reuseFailAlloc_193_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
lean_object* v___x_189_; 
if (v_isShared_173_ == 0)
{
lean_ctor_set(v___x_172_, 1, v___x_187_);
lean_ctor_set(v___x_172_, 0, v___x_183_);
v___x_189_ = v___x_172_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v___x_183_);
lean_ctor_set(v_reuseFailAlloc_192_, 1, v___x_187_);
v___x_189_ = v_reuseFailAlloc_192_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = lean_apply_2(v_toPure_174_, lean_box(0), v___x_189_);
v___x_191_ = lean_apply_4(v_toBind_170_, lean_box(0), lean_box(0), v___x_190_, v___f_182_);
return v___x_191_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_incNumCalls(lean_object* v_m_196_, lean_object* v_inst_197_, lean_object* v_a_198_, lean_object* v_a_199_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_incNumCalls___redArg(v_inst_197_, v_a_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_incNumCalls___boxed(lean_object* v_m_201_, lean_object* v_inst_202_, lean_object* v_a_203_, lean_object* v_a_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_incNumCalls(v_m_201_, v_inst_202_, v_a_203_, v_a_204_);
lean_dec_ref(v_a_203_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_add___redArg(lean_object* v_i_206_, lean_object* v_inst_207_, lean_object* v_a_208_){
_start:
{
lean_object* v_toApplicative_209_; lean_object* v_toBind_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_237_; 
v_toApplicative_209_ = lean_ctor_get(v_inst_207_, 0);
v_toBind_210_ = lean_ctor_get(v_inst_207_, 1);
v_isSharedCheck_237_ = !lean_is_exclusive(v_inst_207_);
if (v_isSharedCheck_237_ == 0)
{
v___x_212_ = v_inst_207_;
v_isShared_213_ = v_isSharedCheck_237_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_toBind_210_);
lean_inc(v_toApplicative_209_);
lean_dec(v_inst_207_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_237_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v_toPure_214_; lean_object* v_cur_215_; lean_object* v_added_216_; lean_object* v_numCalls_217_; uint8_t v_found_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_236_; 
v_toPure_214_ = lean_ctor_get(v_toApplicative_209_, 1);
lean_inc(v_toPure_214_);
lean_dec_ref(v_toApplicative_209_);
v_cur_215_ = lean_ctor_get(v_a_208_, 0);
v_added_216_ = lean_ctor_get(v_a_208_, 1);
v_numCalls_217_ = lean_ctor_get(v_a_208_, 2);
v_found_218_ = lean_ctor_get_uint8(v_a_208_, sizeof(void*)*3);
v_isSharedCheck_236_ = !lean_is_exclusive(v_a_208_);
if (v_isSharedCheck_236_ == 0)
{
v___x_220_ = v_a_208_;
v_isShared_221_ = v_isSharedCheck_236_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_numCalls_217_);
lean_inc(v_added_216_);
lean_inc(v_cur_215_);
lean_dec(v_a_208_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_236_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___f_222_; lean_object* v___x_223_; uint8_t v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_229_; 
lean_inc(v_toPure_214_);
v___f_222_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_markFound___redArg___lam__0), 2, 1);
lean_closure_set(v___f_222_, 0, v_toPure_214_);
v___x_223_ = lean_box(0);
v___x_224_ = 1;
v___x_225_ = lean_box(v___x_224_);
v___x_226_ = lean_array_set(v_cur_215_, v_i_206_, v___x_225_);
v___x_227_ = lean_array_push(v_added_216_, v_i_206_);
if (v_isShared_221_ == 0)
{
lean_ctor_set(v___x_220_, 1, v___x_227_);
lean_ctor_set(v___x_220_, 0, v___x_226_);
v___x_229_ = v___x_220_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_226_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v___x_227_);
lean_ctor_set(v_reuseFailAlloc_235_, 2, v_numCalls_217_);
lean_ctor_set_uint8(v_reuseFailAlloc_235_, sizeof(void*)*3, v_found_218_);
v___x_229_ = v_reuseFailAlloc_235_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
lean_object* v___x_231_; 
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 1, v___x_229_);
lean_ctor_set(v___x_212_, 0, v___x_223_);
v___x_231_ = v___x_212_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_223_);
lean_ctor_set(v_reuseFailAlloc_234_, 1, v___x_229_);
v___x_231_ = v_reuseFailAlloc_234_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_232_ = lean_apply_2(v_toPure_214_, lean_box(0), v___x_231_);
v___x_233_ = lean_apply_4(v_toBind_210_, lean_box(0), lean_box(0), v___x_232_, v___f_222_);
return v___x_233_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_add(lean_object* v_m_238_, lean_object* v_i_239_, lean_object* v_inst_240_, lean_object* v_a_241_, lean_object* v_a_242_){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_add___redArg(v_i_239_, v_inst_240_, v_a_242_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_add___boxed(lean_object* v_m_244_, lean_object* v_i_245_, lean_object* v_inst_246_, lean_object* v_a_247_, lean_object* v_a_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_add(v_m_244_, v_i_245_, v_inst_246_, v_a_247_, v_a_248_);
lean_dec_ref(v_a_247_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_erase___redArg(lean_object* v_i_250_, lean_object* v_inst_251_, lean_object* v_a_252_){
_start:
{
lean_object* v_toApplicative_253_; lean_object* v_toBind_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_280_; 
v_toApplicative_253_ = lean_ctor_get(v_inst_251_, 0);
v_toBind_254_ = lean_ctor_get(v_inst_251_, 1);
v_isSharedCheck_280_ = !lean_is_exclusive(v_inst_251_);
if (v_isSharedCheck_280_ == 0)
{
v___x_256_ = v_inst_251_;
v_isShared_257_ = v_isSharedCheck_280_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_toBind_254_);
lean_inc(v_toApplicative_253_);
lean_dec(v_inst_251_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_280_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v_toPure_258_; lean_object* v_cur_259_; lean_object* v_added_260_; lean_object* v_numCalls_261_; uint8_t v_found_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_279_; 
v_toPure_258_ = lean_ctor_get(v_toApplicative_253_, 1);
lean_inc(v_toPure_258_);
lean_dec_ref(v_toApplicative_253_);
v_cur_259_ = lean_ctor_get(v_a_252_, 0);
v_added_260_ = lean_ctor_get(v_a_252_, 1);
v_numCalls_261_ = lean_ctor_get(v_a_252_, 2);
v_found_262_ = lean_ctor_get_uint8(v_a_252_, sizeof(void*)*3);
v_isSharedCheck_279_ = !lean_is_exclusive(v_a_252_);
if (v_isSharedCheck_279_ == 0)
{
v___x_264_ = v_a_252_;
v_isShared_265_ = v_isSharedCheck_279_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_numCalls_261_);
lean_inc(v_added_260_);
lean_inc(v_cur_259_);
lean_dec(v_a_252_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_279_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v___f_266_; lean_object* v___x_267_; uint8_t v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_272_; 
lean_inc(v_toPure_258_);
v___f_266_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_markFound___redArg___lam__0), 2, 1);
lean_closure_set(v___f_266_, 0, v_toPure_258_);
v___x_267_ = lean_box(0);
v___x_268_ = 0;
v___x_269_ = lean_box(v___x_268_);
v___x_270_ = lean_array_set(v_cur_259_, v_i_250_, v___x_269_);
if (v_isShared_265_ == 0)
{
lean_ctor_set(v___x_264_, 0, v___x_270_);
v___x_272_ = v___x_264_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v___x_270_);
lean_ctor_set(v_reuseFailAlloc_278_, 1, v_added_260_);
lean_ctor_set(v_reuseFailAlloc_278_, 2, v_numCalls_261_);
lean_ctor_set_uint8(v_reuseFailAlloc_278_, sizeof(void*)*3, v_found_262_);
v___x_272_ = v_reuseFailAlloc_278_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
lean_object* v___x_274_; 
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 1, v___x_272_);
lean_ctor_set(v___x_256_, 0, v___x_267_);
v___x_274_ = v___x_256_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_267_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v___x_272_);
v___x_274_ = v_reuseFailAlloc_277_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = lean_apply_2(v_toPure_258_, lean_box(0), v___x_274_);
v___x_276_ = lean_apply_4(v_toBind_254_, lean_box(0), lean_box(0), v___x_275_, v___f_266_);
return v___x_276_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_erase___redArg___boxed(lean_object* v_i_281_, lean_object* v_inst_282_, lean_object* v_a_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_erase___redArg(v_i_281_, v_inst_282_, v_a_283_);
lean_dec(v_i_281_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_erase(lean_object* v_m_285_, lean_object* v_i_286_, lean_object* v_inst_287_, lean_object* v_a_288_, lean_object* v_a_289_){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_erase___redArg(v_i_286_, v_inst_287_, v_a_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_erase___boxed(lean_object* v_m_291_, lean_object* v_i_292_, lean_object* v_inst_293_, lean_object* v_a_294_, lean_object* v_a_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_erase(v_m_291_, v_i_292_, v_inst_293_, v_a_294_, v_a_295_);
lean_dec_ref(v_a_294_);
lean_dec(v_i_292_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_restore___redArg(lean_object* v_i_297_, lean_object* v_inst_298_, lean_object* v_a_299_){
_start:
{
lean_object* v_toApplicative_300_; lean_object* v_toBind_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_327_; 
v_toApplicative_300_ = lean_ctor_get(v_inst_298_, 0);
v_toBind_301_ = lean_ctor_get(v_inst_298_, 1);
v_isSharedCheck_327_ = !lean_is_exclusive(v_inst_298_);
if (v_isSharedCheck_327_ == 0)
{
v___x_303_ = v_inst_298_;
v_isShared_304_ = v_isSharedCheck_327_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_toBind_301_);
lean_inc(v_toApplicative_300_);
lean_dec(v_inst_298_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_327_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v_toPure_305_; lean_object* v_cur_306_; lean_object* v_added_307_; lean_object* v_numCalls_308_; uint8_t v_found_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_326_; 
v_toPure_305_ = lean_ctor_get(v_toApplicative_300_, 1);
lean_inc(v_toPure_305_);
lean_dec_ref(v_toApplicative_300_);
v_cur_306_ = lean_ctor_get(v_a_299_, 0);
v_added_307_ = lean_ctor_get(v_a_299_, 1);
v_numCalls_308_ = lean_ctor_get(v_a_299_, 2);
v_found_309_ = lean_ctor_get_uint8(v_a_299_, sizeof(void*)*3);
v_isSharedCheck_326_ = !lean_is_exclusive(v_a_299_);
if (v_isSharedCheck_326_ == 0)
{
v___x_311_ = v_a_299_;
v_isShared_312_ = v_isSharedCheck_326_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_numCalls_308_);
lean_inc(v_added_307_);
lean_inc(v_cur_306_);
lean_dec(v_a_299_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_326_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___f_313_; lean_object* v___x_314_; uint8_t v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_319_; 
lean_inc(v_toPure_305_);
v___f_313_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_markFound___redArg___lam__0), 2, 1);
lean_closure_set(v___f_313_, 0, v_toPure_305_);
v___x_314_ = lean_box(0);
v___x_315_ = 1;
v___x_316_ = lean_box(v___x_315_);
v___x_317_ = lean_array_set(v_cur_306_, v_i_297_, v___x_316_);
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 0, v___x_317_);
v___x_319_ = v___x_311_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_317_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v_added_307_);
lean_ctor_set(v_reuseFailAlloc_325_, 2, v_numCalls_308_);
lean_ctor_set_uint8(v_reuseFailAlloc_325_, sizeof(void*)*3, v_found_309_);
v___x_319_ = v_reuseFailAlloc_325_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
lean_object* v___x_321_; 
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 1, v___x_319_);
lean_ctor_set(v___x_303_, 0, v___x_314_);
v___x_321_ = v___x_303_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v___x_314_);
lean_ctor_set(v_reuseFailAlloc_324_, 1, v___x_319_);
v___x_321_ = v_reuseFailAlloc_324_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = lean_apply_2(v_toPure_305_, lean_box(0), v___x_321_);
v___x_323_ = lean_apply_4(v_toBind_301_, lean_box(0), lean_box(0), v___x_322_, v___f_313_);
return v___x_323_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_restore___redArg___boxed(lean_object* v_i_328_, lean_object* v_inst_329_, lean_object* v_a_330_){
_start:
{
lean_object* v_res_331_; 
v_res_331_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_restore___redArg(v_i_328_, v_inst_329_, v_a_330_);
lean_dec(v_i_328_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_restore(lean_object* v_m_332_, lean_object* v_i_333_, lean_object* v_inst_334_, lean_object* v_a_335_, lean_object* v_a_336_){
_start:
{
lean_object* v___x_337_; 
v___x_337_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_restore___redArg(v_i_333_, v_inst_334_, v_a_336_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_restore___boxed(lean_object* v_m_338_, lean_object* v_i_339_, lean_object* v_inst_340_, lean_object* v_a_341_, lean_object* v_a_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_restore(v_m_338_, v_i_339_, v_inst_340_, v_a_341_, v_a_342_);
lean_dec_ref(v_a_341_);
lean_dec(v_i_339_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__0(lean_object* v_toPure_344_, lean_object* v_fst_345_, lean_object* v_____x_346_){
_start:
{
lean_object* v_fst_347_; 
v_fst_347_ = lean_ctor_get(v_____x_346_, 0);
lean_inc(v_fst_347_);
if (lean_obj_tag(v_fst_347_) == 0)
{
lean_object* v_snd_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_364_; 
lean_dec_ref(v_fst_345_);
v_snd_348_ = lean_ctor_get(v_____x_346_, 1);
v_isSharedCheck_364_ = !lean_is_exclusive(v_____x_346_);
if (v_isSharedCheck_364_ == 0)
{
lean_object* v_unused_365_; 
v_unused_365_ = lean_ctor_get(v_____x_346_, 0);
lean_dec(v_unused_365_);
v___x_350_ = v_____x_346_;
v_isShared_351_ = v_isSharedCheck_364_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_snd_348_);
lean_dec(v_____x_346_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_364_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_363_; 
v_a_352_ = lean_ctor_get(v_fst_347_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v_fst_347_);
if (v_isSharedCheck_363_ == 0)
{
v___x_354_ = v_fst_347_;
v_isShared_355_ = v_isSharedCheck_363_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v_fst_347_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_363_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_357_; 
if (v_isShared_355_ == 0)
{
v___x_357_ = v___x_354_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_352_);
v___x_357_ = v_reuseFailAlloc_362_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
lean_object* v___x_359_; 
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 0, v___x_357_);
v___x_359_ = v___x_350_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v___x_357_);
lean_ctor_set(v_reuseFailAlloc_361_, 1, v_snd_348_);
v___x_359_ = v_reuseFailAlloc_361_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
lean_object* v___x_360_; 
v___x_360_ = lean_apply_2(v_toPure_344_, lean_box(0), v___x_359_);
return v___x_360_;
}
}
}
}
}
else
{
lean_object* v_snd_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_374_; 
lean_dec_ref_known(v_fst_347_, 1);
v_snd_366_ = lean_ctor_get(v_____x_346_, 1);
v_isSharedCheck_374_ = !lean_is_exclusive(v_____x_346_);
if (v_isSharedCheck_374_ == 0)
{
lean_object* v_unused_375_; 
v_unused_375_ = lean_ctor_get(v_____x_346_, 0);
lean_dec(v_unused_375_);
v___x_368_ = v_____x_346_;
v_isShared_369_ = v_isSharedCheck_374_;
goto v_resetjp_367_;
}
else
{
lean_inc(v_snd_366_);
lean_dec(v_____x_346_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_374_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v___x_371_; 
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 0, v_fst_345_);
v___x_371_ = v___x_368_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_fst_345_);
lean_ctor_set(v_reuseFailAlloc_373_, 1, v_snd_366_);
v___x_371_ = v_reuseFailAlloc_373_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
lean_object* v___x_372_; 
v___x_372_ = lean_apply_2(v_toPure_344_, lean_box(0), v___x_371_);
return v___x_372_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__1(lean_object* v_toPure_376_, lean_object* v_inst_377_, lean_object* v_toBind_378_, lean_object* v_____x_379_){
_start:
{
lean_object* v_fst_380_; 
v_fst_380_ = lean_ctor_get(v_____x_379_, 0);
if (lean_obj_tag(v_fst_380_) == 0)
{
lean_object* v___x_381_; 
lean_dec(v_toBind_378_);
lean_dec_ref(v_inst_377_);
v___x_381_ = lean_apply_2(v_toPure_376_, lean_box(0), v_____x_379_);
return v___x_381_;
}
else
{
lean_object* v_a_382_; uint8_t v___x_383_; 
v_a_382_ = lean_ctor_get(v_fst_380_, 0);
v___x_383_ = lean_unbox(v_a_382_);
if (v___x_383_ == 0)
{
lean_object* v___x_384_; 
lean_dec(v_toBind_378_);
lean_dec_ref(v_inst_377_);
v___x_384_ = lean_apply_2(v_toPure_376_, lean_box(0), v_____x_379_);
return v___x_384_;
}
else
{
lean_object* v_snd_385_; lean_object* v___f_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
lean_inc_ref(v_fst_380_);
v_snd_385_ = lean_ctor_get(v_____x_379_, 1);
lean_inc(v_snd_385_);
lean_dec_ref(v_____x_379_);
v___f_386_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__0), 3, 2);
lean_closure_set(v___f_386_, 0, v_toPure_376_);
lean_closure_set(v___f_386_, 1, v_fst_380_);
v___x_387_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_markFound___redArg(v_inst_377_, v_snd_385_);
v___x_388_ = lean_apply_4(v_toBind_378_, lean_box(0), lean_box(0), v___x_387_, v___f_386_);
return v___x_388_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__2(lean_object* v_toPure_389_, lean_object* v_____x_390_){
_start:
{
lean_object* v_fst_391_; lean_object* v_snd_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_401_; 
v_fst_391_ = lean_ctor_get(v_____x_390_, 0);
v_snd_392_ = lean_ctor_get(v_____x_390_, 1);
v_isSharedCheck_401_ = !lean_is_exclusive(v_____x_390_);
if (v_isSharedCheck_401_ == 0)
{
v___x_394_ = v_____x_390_;
v_isShared_395_ = v_isSharedCheck_401_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_snd_392_);
lean_inc(v_fst_391_);
lean_dec(v_____x_390_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_401_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_396_; lean_object* v___x_398_; 
v___x_396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_396_, 0, v_fst_391_);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 0, v___x_396_);
v___x_398_ = v___x_394_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v___x_396_);
lean_ctor_set(v_reuseFailAlloc_400_, 1, v_snd_392_);
v___x_398_ = v_reuseFailAlloc_400_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
lean_object* v___x_399_; 
v___x_399_ = lean_apply_2(v_toPure_389_, lean_box(0), v___x_398_);
return v___x_399_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__3(lean_object* v_snd_402_, lean_object* v_toPure_403_, uint8_t v_a_404_){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_405_ = lean_box(v_a_404_);
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
lean_ctor_set(v___x_406_, 1, v_snd_402_);
v___x_407_ = lean_apply_2(v_toPure_403_, lean_box(0), v___x_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__3___boxed(lean_object* v_snd_408_, lean_object* v_toPure_409_, lean_object* v_a_410_){
_start:
{
uint8_t v_a_boxed_411_; lean_object* v_res_412_; 
v_a_boxed_411_ = lean_unbox(v_a_410_);
v_res_412_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__3(v_snd_408_, v_toPure_409_, v_a_boxed_411_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__4(lean_object* v_toPure_413_, lean_object* v_a_414_, lean_object* v_toBind_415_, lean_object* v___f_416_, lean_object* v_____x_417_){
_start:
{
lean_object* v_fst_418_; 
v_fst_418_ = lean_ctor_get(v_____x_417_, 0);
lean_inc(v_fst_418_);
if (lean_obj_tag(v_fst_418_) == 0)
{
lean_object* v_snd_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_435_; 
lean_dec(v___f_416_);
lean_dec(v_toBind_415_);
lean_dec_ref(v_a_414_);
v_snd_419_ = lean_ctor_get(v_____x_417_, 1);
v_isSharedCheck_435_ = !lean_is_exclusive(v_____x_417_);
if (v_isSharedCheck_435_ == 0)
{
lean_object* v_unused_436_; 
v_unused_436_ = lean_ctor_get(v_____x_417_, 0);
lean_dec(v_unused_436_);
v___x_421_ = v_____x_417_;
v_isShared_422_ = v_isSharedCheck_435_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_snd_419_);
lean_dec(v_____x_417_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_435_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v_a_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_434_; 
v_a_423_ = lean_ctor_get(v_fst_418_, 0);
v_isSharedCheck_434_ = !lean_is_exclusive(v_fst_418_);
if (v_isSharedCheck_434_ == 0)
{
v___x_425_ = v_fst_418_;
v_isShared_426_ = v_isSharedCheck_434_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_a_423_);
lean_dec(v_fst_418_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_434_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_428_; 
if (v_isShared_426_ == 0)
{
v___x_428_ = v___x_425_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v_a_423_);
v___x_428_ = v_reuseFailAlloc_433_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
lean_object* v___x_430_; 
if (v_isShared_422_ == 0)
{
lean_ctor_set(v___x_421_, 0, v___x_428_);
v___x_430_ = v___x_421_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v___x_428_);
lean_ctor_set(v_reuseFailAlloc_432_, 1, v_snd_419_);
v___x_430_ = v_reuseFailAlloc_432_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
lean_object* v___x_431_; 
v___x_431_ = lean_apply_2(v_toPure_413_, lean_box(0), v___x_430_);
return v___x_431_;
}
}
}
}
}
else
{
lean_object* v_a_437_; lean_object* v_snd_438_; lean_object* v_test_439_; lean_object* v_cur_440_; lean_object* v___x_441_; lean_object* v___f_442_; lean_object* v___f_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v_a_437_ = lean_ctor_get(v_fst_418_, 0);
lean_inc(v_a_437_);
lean_dec_ref_known(v_fst_418_, 1);
v_snd_438_ = lean_ctor_get(v_____x_417_, 1);
lean_inc(v_snd_438_);
lean_dec_ref(v_____x_417_);
v_test_439_ = lean_ctor_get(v_a_414_, 1);
lean_inc(v_test_439_);
lean_dec_ref(v_a_414_);
v_cur_440_ = lean_ctor_get(v_a_437_, 0);
lean_inc_ref(v_cur_440_);
lean_dec(v_a_437_);
v___x_441_ = lean_apply_1(v_test_439_, v_cur_440_);
lean_inc(v_toPure_413_);
v___f_442_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__2), 2, 1);
lean_closure_set(v___f_442_, 0, v_toPure_413_);
v___f_443_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__3___boxed), 3, 2);
lean_closure_set(v___f_443_, 0, v_snd_438_);
lean_closure_set(v___f_443_, 1, v_toPure_413_);
lean_inc_n(v_toBind_415_, 2);
v___x_444_ = lean_apply_4(v_toBind_415_, lean_box(0), lean_box(0), v___x_441_, v___f_443_);
v___x_445_ = lean_apply_4(v_toBind_415_, lean_box(0), lean_box(0), v___x_444_, v___f_442_);
v___x_446_ = lean_apply_4(v_toBind_415_, lean_box(0), lean_box(0), v___x_445_, v___f_416_);
return v___x_446_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__5(lean_object* v_toPure_447_, lean_object* v_____x_448_){
_start:
{
lean_object* v_fst_449_; lean_object* v_snd_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_459_; 
v_fst_449_ = lean_ctor_get(v_____x_448_, 0);
v_snd_450_ = lean_ctor_get(v_____x_448_, 1);
v_isSharedCheck_459_ = !lean_is_exclusive(v_____x_448_);
if (v_isSharedCheck_459_ == 0)
{
v___x_452_ = v_____x_448_;
v_isShared_453_ = v_isSharedCheck_459_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_snd_450_);
lean_inc(v_fst_449_);
lean_dec(v_____x_448_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_459_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_454_; lean_object* v___x_456_; 
v___x_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_454_, 0, v_fst_449_);
if (v_isShared_453_ == 0)
{
lean_ctor_set(v___x_452_, 0, v___x_454_);
v___x_456_ = v___x_452_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v___x_454_);
lean_ctor_set(v_reuseFailAlloc_458_, 1, v_snd_450_);
v___x_456_ = v_reuseFailAlloc_458_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
lean_object* v___x_457_; 
v___x_457_ = lean_apply_2(v_toPure_447_, lean_box(0), v___x_456_);
return v___x_457_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__6(lean_object* v_toPure_460_, lean_object* v_toBind_461_, lean_object* v___f_462_, lean_object* v_____x_463_){
_start:
{
lean_object* v_fst_464_; 
v_fst_464_ = lean_ctor_get(v_____x_463_, 0);
lean_inc(v_fst_464_);
if (lean_obj_tag(v_fst_464_) == 0)
{
lean_object* v_snd_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_481_; 
lean_dec(v___f_462_);
lean_dec(v_toBind_461_);
v_snd_465_ = lean_ctor_get(v_____x_463_, 1);
v_isSharedCheck_481_ = !lean_is_exclusive(v_____x_463_);
if (v_isSharedCheck_481_ == 0)
{
lean_object* v_unused_482_; 
v_unused_482_ = lean_ctor_get(v_____x_463_, 0);
lean_dec(v_unused_482_);
v___x_467_ = v_____x_463_;
v_isShared_468_ = v_isSharedCheck_481_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_snd_465_);
lean_dec(v_____x_463_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_481_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_480_; 
v_a_469_ = lean_ctor_get(v_fst_464_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v_fst_464_);
if (v_isSharedCheck_480_ == 0)
{
v___x_471_ = v_fst_464_;
v_isShared_472_ = v_isSharedCheck_480_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_a_469_);
lean_dec(v_fst_464_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_480_;
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
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_a_469_);
v___x_474_ = v_reuseFailAlloc_479_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
lean_object* v___x_476_; 
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 0, v___x_474_);
v___x_476_ = v___x_467_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v___x_474_);
lean_ctor_set(v_reuseFailAlloc_478_, 1, v_snd_465_);
v___x_476_ = v_reuseFailAlloc_478_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
lean_object* v___x_477_; 
v___x_477_ = lean_apply_2(v_toPure_460_, lean_box(0), v___x_476_);
return v___x_477_;
}
}
}
}
}
else
{
lean_object* v_snd_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_496_; 
v_snd_483_ = lean_ctor_get(v_____x_463_, 1);
v_isSharedCheck_496_ = !lean_is_exclusive(v_____x_463_);
if (v_isSharedCheck_496_ == 0)
{
lean_object* v_unused_497_; 
v_unused_497_ = lean_ctor_get(v_____x_463_, 0);
lean_dec(v_unused_497_);
v___x_485_ = v_____x_463_;
v_isShared_486_ = v_isSharedCheck_496_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_snd_483_);
lean_dec(v_____x_463_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_496_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v_a_487_; lean_object* v___f_488_; lean_object* v___f_489_; lean_object* v___x_491_; 
v_a_487_ = lean_ctor_get(v_fst_464_, 0);
lean_inc(v_a_487_);
lean_dec_ref_known(v_fst_464_, 1);
lean_inc(v_toBind_461_);
lean_inc_n(v_toPure_460_, 2);
v___f_488_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__4), 5, 4);
lean_closure_set(v___f_488_, 0, v_toPure_460_);
lean_closure_set(v___f_488_, 1, v_a_487_);
lean_closure_set(v___f_488_, 2, v_toBind_461_);
lean_closure_set(v___f_488_, 3, v___f_462_);
v___f_489_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__5), 2, 1);
lean_closure_set(v___f_489_, 0, v_toPure_460_);
lean_inc(v_snd_483_);
if (v_isShared_486_ == 0)
{
lean_ctor_set(v___x_485_, 0, v_snd_483_);
v___x_491_ = v___x_485_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_snd_483_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v_snd_483_);
v___x_491_ = v_reuseFailAlloc_495_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_492_ = lean_apply_2(v_toPure_460_, lean_box(0), v___x_491_);
lean_inc(v_toBind_461_);
v___x_493_ = lean_apply_4(v_toBind_461_, lean_box(0), lean_box(0), v___x_492_, v___f_489_);
v___x_494_ = lean_apply_4(v_toBind_461_, lean_box(0), lean_box(0), v___x_493_, v___f_488_);
return v___x_494_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__7(lean_object* v_toPure_498_, lean_object* v_a_499_, lean_object* v_toBind_500_, lean_object* v___f_501_, lean_object* v_____x_502_){
_start:
{
lean_object* v_fst_503_; 
v_fst_503_ = lean_ctor_get(v_____x_502_, 0);
lean_inc(v_fst_503_);
if (lean_obj_tag(v_fst_503_) == 0)
{
lean_object* v_snd_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_520_; 
lean_dec(v___f_501_);
lean_dec(v_toBind_500_);
v_snd_504_ = lean_ctor_get(v_____x_502_, 1);
v_isSharedCheck_520_ = !lean_is_exclusive(v_____x_502_);
if (v_isSharedCheck_520_ == 0)
{
lean_object* v_unused_521_; 
v_unused_521_ = lean_ctor_get(v_____x_502_, 0);
lean_dec(v_unused_521_);
v___x_506_ = v_____x_502_;
v_isShared_507_ = v_isSharedCheck_520_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_snd_504_);
lean_dec(v_____x_502_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_520_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_519_; 
v_a_508_ = lean_ctor_get(v_fst_503_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v_fst_503_);
if (v_isSharedCheck_519_ == 0)
{
v___x_510_ = v_fst_503_;
v_isShared_511_ = v_isSharedCheck_519_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v_fst_503_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_519_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_513_; 
if (v_isShared_511_ == 0)
{
v___x_513_ = v___x_510_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_a_508_);
v___x_513_ = v_reuseFailAlloc_518_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
lean_object* v___x_515_; 
if (v_isShared_507_ == 0)
{
lean_ctor_set(v___x_506_, 0, v___x_513_);
v___x_515_ = v___x_506_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v___x_513_);
lean_ctor_set(v_reuseFailAlloc_517_, 1, v_snd_504_);
v___x_515_ = v_reuseFailAlloc_517_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
lean_object* v___x_516_; 
v___x_516_ = lean_apply_2(v_toPure_498_, lean_box(0), v___x_515_);
return v___x_516_;
}
}
}
}
}
else
{
lean_object* v_snd_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_539_; 
v_snd_522_ = lean_ctor_get(v_____x_502_, 1);
v_isSharedCheck_539_ = !lean_is_exclusive(v_____x_502_);
if (v_isSharedCheck_539_ == 0)
{
lean_object* v_unused_540_; 
v_unused_540_ = lean_ctor_get(v_____x_502_, 0);
lean_dec(v_unused_540_);
v___x_524_ = v_____x_502_;
v_isShared_525_ = v_isSharedCheck_539_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_snd_522_);
lean_dec(v_____x_502_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_539_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_537_; 
v_isSharedCheck_537_ = !lean_is_exclusive(v_fst_503_);
if (v_isSharedCheck_537_ == 0)
{
lean_object* v_unused_538_; 
v_unused_538_ = lean_ctor_get(v_fst_503_, 0);
lean_dec(v_unused_538_);
v___x_527_ = v_fst_503_;
v_isShared_528_ = v_isSharedCheck_537_;
goto v_resetjp_526_;
}
else
{
lean_dec(v_fst_503_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_537_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_530_; 
lean_inc_ref(v_a_499_);
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 0, v_a_499_);
v___x_530_ = v___x_527_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_a_499_);
v___x_530_ = v_reuseFailAlloc_536_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
lean_object* v___x_532_; 
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 0, v___x_530_);
v___x_532_ = v___x_524_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_530_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v_snd_522_);
v___x_532_ = v_reuseFailAlloc_535_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = lean_apply_2(v_toPure_498_, lean_box(0), v___x_532_);
v___x_534_ = lean_apply_4(v_toBind_500_, lean_box(0), lean_box(0), v___x_533_, v___f_501_);
return v___x_534_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__7___boxed(lean_object* v_toPure_541_, lean_object* v_a_542_, lean_object* v_toBind_543_, lean_object* v___f_544_, lean_object* v_____x_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__7(v_toPure_541_, v_a_542_, v_toBind_543_, v___f_544_, v_____x_545_);
lean_dec_ref(v_a_542_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__9(lean_object* v_toPure_549_, lean_object* v_toBind_550_, lean_object* v___f_551_, lean_object* v_maxCalls_552_, lean_object* v_____x_553_){
_start:
{
lean_object* v_fst_554_; lean_object* v_snd_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_599_; 
v_fst_554_ = lean_ctor_get(v_____x_553_, 0);
v_snd_555_ = lean_ctor_get(v_____x_553_, 1);
v_isSharedCheck_599_ = !lean_is_exclusive(v_____x_553_);
if (v_isSharedCheck_599_ == 0)
{
v___x_557_ = v_____x_553_;
v_isShared_558_ = v_isSharedCheck_599_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_snd_555_);
lean_inc(v_fst_554_);
lean_dec(v_____x_553_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_599_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
if (lean_obj_tag(v_fst_554_) == 0)
{
lean_object* v_a_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_590_; 
lean_del_object(v___x_557_);
lean_dec(v___f_551_);
lean_dec(v_toBind_550_);
v_a_581_ = lean_ctor_get(v_fst_554_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v_fst_554_);
if (v_isSharedCheck_590_ == 0)
{
v___x_583_ = v_fst_554_;
v_isShared_584_ = v_isSharedCheck_590_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_a_581_);
lean_dec(v_fst_554_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_590_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_586_; 
if (v_isShared_584_ == 0)
{
v___x_586_ = v___x_583_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_a_581_);
v___x_586_ = v_reuseFailAlloc_589_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_587_, 0, v___x_586_);
lean_ctor_set(v___x_587_, 1, v_snd_555_);
v___x_588_ = lean_apply_2(v_toPure_549_, lean_box(0), v___x_587_);
return v___x_588_;
}
}
}
else
{
lean_object* v_a_591_; lean_object* v___x_592_; uint8_t v___x_593_; 
v_a_591_ = lean_ctor_get(v_fst_554_, 0);
lean_inc(v_a_591_);
lean_dec_ref_known(v_fst_554_, 1);
v___x_592_ = lean_unsigned_to_nat(0u);
v___x_593_ = lean_nat_dec_lt(v___x_592_, v_maxCalls_552_);
if (v___x_593_ == 0)
{
lean_dec(v_a_591_);
goto v___jp_559_;
}
else
{
lean_object* v_numCalls_594_; uint8_t v___x_595_; 
v_numCalls_594_ = lean_ctor_get(v_a_591_, 2);
lean_inc(v_numCalls_594_);
lean_dec(v_a_591_);
v___x_595_ = lean_nat_dec_le(v_maxCalls_552_, v_numCalls_594_);
lean_dec(v_numCalls_594_);
if (v___x_595_ == 0)
{
goto v___jp_559_;
}
else
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
lean_del_object(v___x_557_);
lean_dec(v___f_551_);
lean_dec(v_toBind_550_);
v___x_596_ = ((lean_object*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__9___closed__0));
v___x_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_597_, 0, v___x_596_);
lean_ctor_set(v___x_597_, 1, v_snd_555_);
v___x_598_ = lean_apply_2(v_toPure_549_, lean_box(0), v___x_597_);
return v___x_598_;
}
}
}
v___jp_559_:
{
lean_object* v_cur_560_; lean_object* v_added_561_; lean_object* v_numCalls_562_; uint8_t v_found_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_580_; 
v_cur_560_ = lean_ctor_get(v_snd_555_, 0);
v_added_561_ = lean_ctor_get(v_snd_555_, 1);
v_numCalls_562_ = lean_ctor_get(v_snd_555_, 2);
v_found_563_ = lean_ctor_get_uint8(v_snd_555_, sizeof(void*)*3);
v_isSharedCheck_580_ = !lean_is_exclusive(v_snd_555_);
if (v_isSharedCheck_580_ == 0)
{
v___x_565_ = v_snd_555_;
v_isShared_566_ = v_isSharedCheck_580_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_numCalls_562_);
lean_inc(v_added_561_);
lean_inc(v_cur_560_);
lean_dec(v_snd_555_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_580_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___f_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_572_; 
lean_inc(v_toPure_549_);
v___f_567_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_markFound___redArg___lam__0), 2, 1);
lean_closure_set(v___f_567_, 0, v_toPure_549_);
v___x_568_ = lean_box(0);
v___x_569_ = lean_unsigned_to_nat(1u);
v___x_570_ = lean_nat_add(v_numCalls_562_, v___x_569_);
lean_dec(v_numCalls_562_);
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 2, v___x_570_);
v___x_572_ = v___x_565_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_cur_560_);
lean_ctor_set(v_reuseFailAlloc_579_, 1, v_added_561_);
lean_ctor_set(v_reuseFailAlloc_579_, 2, v___x_570_);
lean_ctor_set_uint8(v_reuseFailAlloc_579_, sizeof(void*)*3, v_found_563_);
v___x_572_ = v_reuseFailAlloc_579_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
lean_object* v___x_574_; 
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 1, v___x_572_);
lean_ctor_set(v___x_557_, 0, v___x_568_);
v___x_574_ = v___x_557_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v___x_568_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v___x_572_);
v___x_574_ = v_reuseFailAlloc_578_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_575_ = lean_apply_2(v_toPure_549_, lean_box(0), v___x_574_);
lean_inc(v_toBind_550_);
v___x_576_ = lean_apply_4(v_toBind_550_, lean_box(0), lean_box(0), v___x_575_, v___f_567_);
v___x_577_ = lean_apply_4(v_toBind_550_, lean_box(0), lean_box(0), v___x_576_, v___f_551_);
return v___x_577_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__9___boxed(lean_object* v_toPure_600_, lean_object* v_toBind_601_, lean_object* v___f_602_, lean_object* v_maxCalls_603_, lean_object* v_____x_604_){
_start:
{
lean_object* v_res_605_; 
v_res_605_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__9(v_toPure_600_, v_toBind_601_, v___f_602_, v_maxCalls_603_, v_____x_604_);
lean_dec(v_maxCalls_603_);
return v_res_605_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__10(lean_object* v_toPure_606_, lean_object* v_toBind_607_, lean_object* v___f_608_, lean_object* v_____x_609_){
_start:
{
lean_object* v_fst_610_; 
v_fst_610_ = lean_ctor_get(v_____x_609_, 0);
lean_inc(v_fst_610_);
if (lean_obj_tag(v_fst_610_) == 0)
{
lean_object* v_snd_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_627_; 
lean_dec(v___f_608_);
lean_dec(v_toBind_607_);
v_snd_611_ = lean_ctor_get(v_____x_609_, 1);
v_isSharedCheck_627_ = !lean_is_exclusive(v_____x_609_);
if (v_isSharedCheck_627_ == 0)
{
lean_object* v_unused_628_; 
v_unused_628_ = lean_ctor_get(v_____x_609_, 0);
lean_dec(v_unused_628_);
v___x_613_ = v_____x_609_;
v_isShared_614_ = v_isSharedCheck_627_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_snd_611_);
lean_dec(v_____x_609_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_627_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_626_; 
v_a_615_ = lean_ctor_get(v_fst_610_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v_fst_610_);
if (v_isSharedCheck_626_ == 0)
{
v___x_617_ = v_fst_610_;
v_isShared_618_ = v_isSharedCheck_626_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v_fst_610_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_626_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_620_; 
if (v_isShared_618_ == 0)
{
v___x_620_ = v___x_617_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_a_615_);
v___x_620_ = v_reuseFailAlloc_625_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
lean_object* v___x_622_; 
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 0, v___x_620_);
v___x_622_ = v___x_613_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v___x_620_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v_snd_611_);
v___x_622_ = v_reuseFailAlloc_624_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
lean_object* v___x_623_; 
v___x_623_ = lean_apply_2(v_toPure_606_, lean_box(0), v___x_622_);
return v___x_623_;
}
}
}
}
}
else
{
lean_object* v_a_629_; lean_object* v_snd_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_643_; 
v_a_629_ = lean_ctor_get(v_fst_610_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v_fst_610_, 1);
v_snd_630_ = lean_ctor_get(v_____x_609_, 1);
v_isSharedCheck_643_ = !lean_is_exclusive(v_____x_609_);
if (v_isSharedCheck_643_ == 0)
{
lean_object* v_unused_644_; 
v_unused_644_ = lean_ctor_get(v_____x_609_, 0);
lean_dec(v_unused_644_);
v___x_632_ = v_____x_609_;
v_isShared_633_ = v_isSharedCheck_643_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_snd_630_);
lean_dec(v_____x_609_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_643_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v_maxCalls_634_; lean_object* v___f_635_; lean_object* v___f_636_; lean_object* v___x_638_; 
v_maxCalls_634_ = lean_ctor_get(v_a_629_, 2);
lean_inc(v_maxCalls_634_);
lean_dec(v_a_629_);
lean_inc(v_toBind_607_);
lean_inc_n(v_toPure_606_, 2);
v___f_635_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__9___boxed), 5, 4);
lean_closure_set(v___f_635_, 0, v_toPure_606_);
lean_closure_set(v___f_635_, 1, v_toBind_607_);
lean_closure_set(v___f_635_, 2, v___f_608_);
lean_closure_set(v___f_635_, 3, v_maxCalls_634_);
v___f_636_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__5), 2, 1);
lean_closure_set(v___f_636_, 0, v_toPure_606_);
lean_inc(v_snd_630_);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 0, v_snd_630_);
v___x_638_ = v___x_632_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_snd_630_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v_snd_630_);
v___x_638_ = v_reuseFailAlloc_642_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_639_ = lean_apply_2(v_toPure_606_, lean_box(0), v___x_638_);
lean_inc(v_toBind_607_);
v___x_640_ = lean_apply_4(v_toBind_607_, lean_box(0), lean_box(0), v___x_639_, v___f_636_);
v___x_641_ = lean_apply_4(v_toBind_607_, lean_box(0), lean_box(0), v___x_640_, v___f_635_);
return v___x_641_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg(lean_object* v_inst_645_, lean_object* v_a_646_, lean_object* v_a_647_){
_start:
{
lean_object* v_toApplicative_648_; lean_object* v_toBind_649_; lean_object* v_toPure_650_; lean_object* v___f_651_; lean_object* v___f_652_; lean_object* v___f_653_; lean_object* v___f_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v_toApplicative_648_ = lean_ctor_get(v_inst_645_, 0);
v_toBind_649_ = lean_ctor_get(v_inst_645_, 1);
lean_inc_n(v_toBind_649_, 5);
v_toPure_650_ = lean_ctor_get(v_toApplicative_648_, 1);
lean_inc_n(v_toPure_650_, 5);
v___f_651_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__1), 4, 3);
lean_closure_set(v___f_651_, 0, v_toPure_650_);
lean_closure_set(v___f_651_, 1, v_inst_645_);
lean_closure_set(v___f_651_, 2, v_toBind_649_);
v___f_652_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__6), 4, 3);
lean_closure_set(v___f_652_, 0, v_toPure_650_);
lean_closure_set(v___f_652_, 1, v_toBind_649_);
lean_closure_set(v___f_652_, 2, v___f_651_);
lean_inc_ref_n(v_a_646_, 2);
v___f_653_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__7___boxed), 5, 4);
lean_closure_set(v___f_653_, 0, v_toPure_650_);
lean_closure_set(v___f_653_, 1, v_a_646_);
lean_closure_set(v___f_653_, 2, v_toBind_649_);
lean_closure_set(v___f_653_, 3, v___f_652_);
v___f_654_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__10), 4, 3);
lean_closure_set(v___f_654_, 0, v_toPure_650_);
lean_closure_set(v___f_654_, 1, v_toBind_649_);
lean_closure_set(v___f_654_, 2, v___f_653_);
v___x_655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_655_, 0, v_a_646_);
v___x_656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_656_, 0, v___x_655_);
lean_ctor_set(v___x_656_, 1, v_a_647_);
v___x_657_ = lean_apply_2(v_toPure_650_, lean_box(0), v___x_656_);
v___x_658_ = lean_apply_4(v_toBind_649_, lean_box(0), lean_box(0), v___x_657_, v___f_654_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___boxed(lean_object* v_inst_659_, lean_object* v_a_660_, lean_object* v_a_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg(v_inst_659_, v_a_660_, v_a_661_);
lean_dec_ref(v_a_660_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur(lean_object* v_m_663_, lean_object* v_inst_664_, lean_object* v_a_665_, lean_object* v_a_666_){
_start:
{
lean_object* v___x_667_; 
v___x_667_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg(v_inst_664_, v_a_665_, v_a_666_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___boxed(lean_object* v_m_668_, lean_object* v_inst_669_, lean_object* v_a_670_, lean_object* v_a_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur(v_m_668_, v_inst_669_, v_a_670_, v_a_671_);
lean_dec_ref(v_a_670_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__0(lean_object* v_toPure_673_, lean_object* v_____x_674_){
_start:
{
lean_object* v_fst_675_; 
v_fst_675_ = lean_ctor_get(v_____x_674_, 0);
lean_inc(v_fst_675_);
if (lean_obj_tag(v_fst_675_) == 0)
{
lean_object* v_snd_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_692_; 
v_snd_676_ = lean_ctor_get(v_____x_674_, 1);
v_isSharedCheck_692_ = !lean_is_exclusive(v_____x_674_);
if (v_isSharedCheck_692_ == 0)
{
lean_object* v_unused_693_; 
v_unused_693_ = lean_ctor_get(v_____x_674_, 0);
lean_dec(v_unused_693_);
v___x_678_ = v_____x_674_;
v_isShared_679_ = v_isSharedCheck_692_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_snd_676_);
lean_dec(v_____x_674_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_692_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_691_; 
v_a_680_ = lean_ctor_get(v_fst_675_, 0);
v_isSharedCheck_691_ = !lean_is_exclusive(v_fst_675_);
if (v_isSharedCheck_691_ == 0)
{
v___x_682_ = v_fst_675_;
v_isShared_683_ = v_isSharedCheck_691_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v_fst_675_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_691_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_685_; 
if (v_isShared_683_ == 0)
{
v___x_685_ = v___x_682_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_a_680_);
v___x_685_ = v_reuseFailAlloc_690_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
lean_object* v___x_687_; 
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 0, v___x_685_);
v___x_687_ = v___x_678_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v___x_685_);
lean_ctor_set(v_reuseFailAlloc_689_, 1, v_snd_676_);
v___x_687_ = v_reuseFailAlloc_689_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
lean_object* v___x_688_; 
v___x_688_ = lean_apply_2(v_toPure_673_, lean_box(0), v___x_687_);
return v___x_688_;
}
}
}
}
}
else
{
lean_object* v_snd_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_710_; 
v_snd_694_ = lean_ctor_get(v_____x_674_, 1);
v_isSharedCheck_710_ = !lean_is_exclusive(v_____x_674_);
if (v_isSharedCheck_710_ == 0)
{
lean_object* v_unused_711_; 
v_unused_711_ = lean_ctor_get(v_____x_674_, 0);
lean_dec(v_unused_711_);
v___x_696_ = v_____x_674_;
v_isShared_697_ = v_isSharedCheck_710_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_snd_694_);
lean_dec(v_____x_674_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_710_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_709_; 
v_a_698_ = lean_ctor_get(v_fst_675_, 0);
v_isSharedCheck_709_ = !lean_is_exclusive(v_fst_675_);
if (v_isSharedCheck_709_ == 0)
{
v___x_700_ = v_fst_675_;
v_isShared_701_ = v_isSharedCheck_709_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v_fst_675_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_709_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_a_698_);
v___x_703_ = v_reuseFailAlloc_708_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
lean_object* v___x_705_; 
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 0, v___x_703_);
v___x_705_ = v___x_696_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v___x_703_);
lean_ctor_set(v_reuseFailAlloc_707_, 1, v_snd_694_);
v___x_705_ = v_reuseFailAlloc_707_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
lean_object* v___x_706_; 
v___x_706_ = lean_apply_2(v_toPure_673_, lean_box(0), v___x_705_);
return v___x_706_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__1(lean_object* v_toPure_712_, lean_object* v___x_713_, lean_object* v_____x_714_){
_start:
{
lean_object* v_fst_715_; 
v_fst_715_ = lean_ctor_get(v_____x_714_, 0);
lean_inc(v_fst_715_);
if (lean_obj_tag(v_fst_715_) == 0)
{
lean_object* v_snd_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_732_; 
v_snd_716_ = lean_ctor_get(v_____x_714_, 1);
v_isSharedCheck_732_ = !lean_is_exclusive(v_____x_714_);
if (v_isSharedCheck_732_ == 0)
{
lean_object* v_unused_733_; 
v_unused_733_ = lean_ctor_get(v_____x_714_, 0);
lean_dec(v_unused_733_);
v___x_718_ = v_____x_714_;
v_isShared_719_ = v_isSharedCheck_732_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_snd_716_);
lean_dec(v_____x_714_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_732_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_731_; 
v_a_720_ = lean_ctor_get(v_fst_715_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v_fst_715_);
if (v_isSharedCheck_731_ == 0)
{
v___x_722_ = v_fst_715_;
v_isShared_723_ = v_isSharedCheck_731_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_dec(v_fst_715_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_731_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_725_; 
if (v_isShared_723_ == 0)
{
v___x_725_ = v___x_722_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_a_720_);
v___x_725_ = v_reuseFailAlloc_730_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
lean_object* v___x_727_; 
if (v_isShared_719_ == 0)
{
lean_ctor_set(v___x_718_, 0, v___x_725_);
v___x_727_ = v___x_718_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v___x_725_);
lean_ctor_set(v_reuseFailAlloc_729_, 1, v_snd_716_);
v___x_727_ = v_reuseFailAlloc_729_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
lean_object* v___x_728_; 
v___x_728_ = lean_apply_2(v_toPure_712_, lean_box(0), v___x_727_);
return v___x_728_;
}
}
}
}
}
else
{
lean_object* v_a_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_761_; 
v_a_734_ = lean_ctor_get(v_fst_715_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v_fst_715_);
if (v_isSharedCheck_761_ == 0)
{
v___x_736_ = v_fst_715_;
v_isShared_737_ = v_isSharedCheck_761_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_a_734_);
lean_dec(v_fst_715_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_761_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v_fst_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_759_; 
v_fst_738_ = lean_ctor_get(v_a_734_, 0);
v_isSharedCheck_759_ = !lean_is_exclusive(v_a_734_);
if (v_isSharedCheck_759_ == 0)
{
lean_object* v_unused_760_; 
v_unused_760_ = lean_ctor_get(v_a_734_, 1);
lean_dec(v_unused_760_);
v___x_740_ = v_a_734_;
v_isShared_741_ = v_isSharedCheck_759_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_fst_738_);
lean_dec(v_a_734_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_759_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
if (lean_obj_tag(v_fst_738_) == 0)
{
lean_object* v_snd_742_; lean_object* v___x_744_; 
v_snd_742_ = lean_ctor_get(v_____x_714_, 1);
lean_inc(v_snd_742_);
lean_dec_ref(v_____x_714_);
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 0, v___x_713_);
v___x_744_ = v___x_736_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v___x_713_);
v___x_744_ = v_reuseFailAlloc_749_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
lean_object* v___x_746_; 
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 1, v_snd_742_);
lean_ctor_set(v___x_740_, 0, v___x_744_);
v___x_746_ = v___x_740_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v___x_744_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v_snd_742_);
v___x_746_ = v_reuseFailAlloc_748_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
lean_object* v___x_747_; 
v___x_747_ = lean_apply_2(v_toPure_712_, lean_box(0), v___x_746_);
return v___x_747_;
}
}
}
else
{
lean_object* v_snd_750_; lean_object* v_val_751_; lean_object* v___x_753_; 
v_snd_750_ = lean_ctor_get(v_____x_714_, 1);
lean_inc(v_snd_750_);
lean_dec_ref(v_____x_714_);
v_val_751_ = lean_ctor_get(v_fst_738_, 0);
lean_inc(v_val_751_);
lean_dec_ref_known(v_fst_738_, 1);
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 0, v_val_751_);
v___x_753_ = v___x_736_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_val_751_);
v___x_753_ = v_reuseFailAlloc_758_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
lean_object* v___x_755_; 
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 1, v_snd_750_);
lean_ctor_set(v___x_740_, 0, v___x_753_);
v___x_755_ = v___x_740_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v___x_753_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_snd_750_);
v___x_755_ = v_reuseFailAlloc_757_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
lean_object* v___x_756_; 
v___x_756_ = lean_apply_2(v_toPure_712_, lean_box(0), v___x_755_);
return v___x_756_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__2(lean_object* v_toPure_762_, lean_object* v___x_763_, lean_object* v___x_764_, lean_object* v_____x_765_){
_start:
{
lean_object* v_fst_766_; 
v_fst_766_ = lean_ctor_get(v_____x_765_, 0);
lean_inc(v_fst_766_);
if (lean_obj_tag(v_fst_766_) == 0)
{
lean_object* v_snd_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_783_; 
lean_dec_ref(v___x_763_);
v_snd_767_ = lean_ctor_get(v_____x_765_, 1);
v_isSharedCheck_783_ = !lean_is_exclusive(v_____x_765_);
if (v_isSharedCheck_783_ == 0)
{
lean_object* v_unused_784_; 
v_unused_784_ = lean_ctor_get(v_____x_765_, 0);
lean_dec(v_unused_784_);
v___x_769_ = v_____x_765_;
v_isShared_770_ = v_isSharedCheck_783_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_snd_767_);
lean_dec(v_____x_765_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_783_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_782_; 
v_a_771_ = lean_ctor_get(v_fst_766_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v_fst_766_);
if (v_isSharedCheck_782_ == 0)
{
v___x_773_ = v_fst_766_;
v_isShared_774_ = v_isSharedCheck_782_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v_fst_766_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_782_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_776_; 
if (v_isShared_774_ == 0)
{
v___x_776_ = v___x_773_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_771_);
v___x_776_ = v_reuseFailAlloc_781_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
lean_object* v___x_778_; 
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 0, v___x_776_);
v___x_778_ = v___x_769_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v___x_776_);
lean_ctor_set(v_reuseFailAlloc_780_, 1, v_snd_767_);
v___x_778_ = v_reuseFailAlloc_780_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
lean_object* v___x_779_; 
v___x_779_ = lean_apply_2(v_toPure_762_, lean_box(0), v___x_778_);
return v___x_779_;
}
}
}
}
}
else
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_820_; 
v_a_785_ = lean_ctor_get(v_fst_766_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v_fst_766_);
if (v_isSharedCheck_820_ == 0)
{
v___x_787_ = v_fst_766_;
v_isShared_788_ = v_isSharedCheck_820_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v_fst_766_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_820_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
uint8_t v___x_789_; 
v___x_789_ = lean_unbox(v_a_785_);
lean_dec(v_a_785_);
if (v___x_789_ == 0)
{
lean_object* v_snd_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_802_; 
v_snd_790_ = lean_ctor_get(v_____x_765_, 1);
v_isSharedCheck_802_ = !lean_is_exclusive(v_____x_765_);
if (v_isSharedCheck_802_ == 0)
{
lean_object* v_unused_803_; 
v_unused_803_ = lean_ctor_get(v_____x_765_, 0);
lean_dec(v_unused_803_);
v___x_792_ = v_____x_765_;
v_isShared_793_ = v_isSharedCheck_802_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_snd_790_);
lean_dec(v_____x_765_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_802_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_794_; lean_object* v___x_796_; 
v___x_794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_794_, 0, v___x_763_);
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 0, v___x_794_);
v___x_796_ = v___x_787_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v___x_794_);
v___x_796_ = v_reuseFailAlloc_801_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
lean_object* v___x_798_; 
if (v_isShared_793_ == 0)
{
lean_ctor_set(v___x_792_, 0, v___x_796_);
v___x_798_ = v___x_792_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v___x_796_);
lean_ctor_set(v_reuseFailAlloc_800_, 1, v_snd_790_);
v___x_798_ = v_reuseFailAlloc_800_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
lean_object* v___x_799_; 
v___x_799_ = lean_apply_2(v_toPure_762_, lean_box(0), v___x_798_);
return v___x_799_;
}
}
}
}
else
{
lean_object* v_snd_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_818_; 
lean_dec_ref(v___x_763_);
v_snd_804_ = lean_ctor_get(v_____x_765_, 1);
v_isSharedCheck_818_ = !lean_is_exclusive(v_____x_765_);
if (v_isSharedCheck_818_ == 0)
{
lean_object* v_unused_819_; 
v_unused_819_ = lean_ctor_get(v_____x_765_, 0);
lean_dec(v_unused_819_);
v___x_806_ = v_____x_765_;
v_isShared_807_ = v_isSharedCheck_818_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_snd_804_);
lean_dec(v_____x_765_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_818_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_808_; lean_object* v___x_810_; 
v___x_808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_808_, 0, v___x_764_);
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 1, v___x_764_);
lean_ctor_set(v___x_806_, 0, v___x_808_);
v___x_810_ = v___x_806_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v___x_808_);
lean_ctor_set(v_reuseFailAlloc_817_, 1, v___x_764_);
v___x_810_ = v_reuseFailAlloc_817_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
lean_object* v___x_811_; lean_object* v___x_813_; 
v___x_811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_811_, 0, v___x_810_);
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 0, v___x_811_);
v___x_813_ = v___x_787_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v___x_811_);
v___x_813_ = v_reuseFailAlloc_816_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_814_, 0, v___x_813_);
lean_ctor_set(v___x_814_, 1, v_snd_804_);
v___x_815_ = lean_apply_2(v_toPure_762_, lean_box(0), v___x_814_);
return v___x_815_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__3(lean_object* v_inst_821_, lean_object* v_toBind_822_, lean_object* v___f_823_, lean_object* v_____r_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_827_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg(v_inst_821_, v___y_825_, v___y_826_);
v___x_828_ = lean_apply_4(v_toBind_822_, lean_box(0), lean_box(0), v___x_827_, v___f_823_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__3___boxed(lean_object* v_inst_829_, lean_object* v_toBind_830_, lean_object* v___f_831_, lean_object* v_____r_832_, lean_object* v___y_833_, lean_object* v___y_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__3(v_inst_829_, v_toBind_830_, v___f_831_, v_____r_832_, v___y_833_, v___y_834_);
lean_dec_ref(v___y_833_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__4(lean_object* v_toPure_836_, lean_object* v_next_837_, lean_object* v_G_838_, lean_object* v___y_839_, lean_object* v_____x_840_){
_start:
{
lean_object* v_fst_841_; 
v_fst_841_ = lean_ctor_get(v_____x_840_, 0);
lean_inc(v_fst_841_);
if (lean_obj_tag(v_fst_841_) == 0)
{
lean_object* v_snd_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_858_; 
lean_dec(v_G_838_);
v_snd_842_ = lean_ctor_get(v_____x_840_, 1);
v_isSharedCheck_858_ = !lean_is_exclusive(v_____x_840_);
if (v_isSharedCheck_858_ == 0)
{
lean_object* v_unused_859_; 
v_unused_859_ = lean_ctor_get(v_____x_840_, 0);
lean_dec(v_unused_859_);
v___x_844_ = v_____x_840_;
v_isShared_845_ = v_isSharedCheck_858_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_snd_842_);
lean_dec(v_____x_840_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_858_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_857_; 
v_a_846_ = lean_ctor_get(v_fst_841_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v_fst_841_);
if (v_isSharedCheck_857_ == 0)
{
v___x_848_ = v_fst_841_;
v_isShared_849_ = v_isSharedCheck_857_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v_fst_841_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_857_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_851_; 
if (v_isShared_849_ == 0)
{
v___x_851_ = v___x_848_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_a_846_);
v___x_851_ = v_reuseFailAlloc_856_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
lean_object* v___x_853_; 
if (v_isShared_845_ == 0)
{
lean_ctor_set(v___x_844_, 0, v___x_851_);
v___x_853_ = v___x_844_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v___x_851_);
lean_ctor_set(v_reuseFailAlloc_855_, 1, v_snd_842_);
v___x_853_ = v_reuseFailAlloc_855_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
lean_object* v___x_854_; 
v___x_854_ = lean_apply_2(v_toPure_836_, lean_box(0), v___x_853_);
return v___x_854_;
}
}
}
}
}
else
{
lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_883_; 
v_a_860_ = lean_ctor_get(v_fst_841_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v_fst_841_);
if (v_isSharedCheck_883_ == 0)
{
v___x_862_ = v_fst_841_;
v_isShared_863_ = v_isSharedCheck_883_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_dec(v_fst_841_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_883_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
if (lean_obj_tag(v_a_860_) == 0)
{
lean_object* v_snd_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_876_; 
lean_dec(v_G_838_);
v_snd_864_ = lean_ctor_get(v_____x_840_, 1);
v_isSharedCheck_876_ = !lean_is_exclusive(v_____x_840_);
if (v_isSharedCheck_876_ == 0)
{
lean_object* v_unused_877_; 
v_unused_877_ = lean_ctor_get(v_____x_840_, 0);
lean_dec(v_unused_877_);
v___x_866_ = v_____x_840_;
v_isShared_867_ = v_isSharedCheck_876_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_snd_864_);
lean_dec(v_____x_840_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_876_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v_a_868_; lean_object* v___x_870_; 
v_a_868_ = lean_ctor_get(v_a_860_, 0);
lean_inc(v_a_868_);
lean_dec_ref_known(v_a_860_, 1);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 0, v_a_868_);
v___x_870_ = v___x_862_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_a_868_);
v___x_870_ = v_reuseFailAlloc_875_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
lean_object* v___x_872_; 
if (v_isShared_867_ == 0)
{
lean_ctor_set(v___x_866_, 0, v___x_870_);
v___x_872_ = v___x_866_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v___x_870_);
lean_ctor_set(v_reuseFailAlloc_874_, 1, v_snd_864_);
v___x_872_ = v_reuseFailAlloc_874_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
lean_object* v___x_873_; 
v___x_873_ = lean_apply_2(v_toPure_836_, lean_box(0), v___x_872_);
return v___x_873_;
}
}
}
}
else
{
lean_object* v_snd_878_; lean_object* v_a_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
lean_del_object(v___x_862_);
lean_dec(v_toPure_836_);
v_snd_878_ = lean_ctor_get(v_____x_840_, 1);
lean_inc(v_snd_878_);
lean_dec_ref(v_____x_840_);
v_a_879_ = lean_ctor_get(v_a_860_, 0);
lean_inc(v_a_879_);
lean_dec_ref_known(v_a_860_, 1);
v___x_880_ = lean_unsigned_to_nat(1u);
v___x_881_ = lean_nat_add(v_next_837_, v___x_880_);
lean_inc_ref(v___y_839_);
v___x_882_ = lean_apply_6(v_G_838_, v___x_881_, v_a_879_, lean_box(0), lean_box(0), v___y_839_, v_snd_878_);
return v___x_882_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__4___boxed(lean_object* v_toPure_884_, lean_object* v_next_885_, lean_object* v_G_886_, lean_object* v___y_887_, lean_object* v_____x_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__4(v_toPure_884_, v_next_885_, v_G_886_, v___y_887_, v_____x_888_);
lean_dec_ref(v___y_887_);
lean_dec(v_next_885_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__5(lean_object* v_toPure_890_, lean_object* v___f_891_, lean_object* v___y_892_, lean_object* v_____x_893_){
_start:
{
lean_object* v_fst_894_; 
v_fst_894_ = lean_ctor_get(v_____x_893_, 0);
lean_inc(v_fst_894_);
if (lean_obj_tag(v_fst_894_) == 0)
{
lean_object* v_snd_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_911_; 
lean_dec(v___f_891_);
v_snd_895_ = lean_ctor_get(v_____x_893_, 1);
v_isSharedCheck_911_ = !lean_is_exclusive(v_____x_893_);
if (v_isSharedCheck_911_ == 0)
{
lean_object* v_unused_912_; 
v_unused_912_ = lean_ctor_get(v_____x_893_, 0);
lean_dec(v_unused_912_);
v___x_897_ = v_____x_893_;
v_isShared_898_ = v_isSharedCheck_911_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_snd_895_);
lean_dec(v_____x_893_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_911_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v_a_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_910_; 
v_a_899_ = lean_ctor_get(v_fst_894_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v_fst_894_);
if (v_isSharedCheck_910_ == 0)
{
v___x_901_ = v_fst_894_;
v_isShared_902_ = v_isSharedCheck_910_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_a_899_);
lean_dec(v_fst_894_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_910_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_904_; 
if (v_isShared_902_ == 0)
{
v___x_904_ = v___x_901_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_a_899_);
v___x_904_ = v_reuseFailAlloc_909_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
lean_object* v___x_906_; 
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 0, v___x_904_);
v___x_906_ = v___x_897_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v___x_904_);
lean_ctor_set(v_reuseFailAlloc_908_, 1, v_snd_895_);
v___x_906_ = v_reuseFailAlloc_908_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
lean_object* v___x_907_; 
v___x_907_ = lean_apply_2(v_toPure_890_, lean_box(0), v___x_906_);
return v___x_907_;
}
}
}
}
}
else
{
lean_object* v_snd_913_; lean_object* v_a_914_; lean_object* v___x_915_; 
lean_dec(v_toPure_890_);
v_snd_913_ = lean_ctor_get(v_____x_893_, 1);
lean_inc(v_snd_913_);
lean_dec_ref(v_____x_893_);
v_a_914_ = lean_ctor_get(v_fst_894_, 0);
lean_inc(v_a_914_);
lean_dec_ref_known(v_fst_894_, 1);
lean_inc_ref(v___y_892_);
v___x_915_ = lean_apply_3(v___f_891_, v_a_914_, v___y_892_, v_snd_913_);
return v___x_915_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__5___boxed(lean_object* v_toPure_916_, lean_object* v___f_917_, lean_object* v___y_918_, lean_object* v_____x_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__5(v_toPure_916_, v___f_917_, v___y_918_, v_____x_919_);
lean_dec_ref(v___y_918_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__6(lean_object* v___x_921_, lean_object* v_toPure_922_, lean_object* v_toBind_923_, lean_object* v___f_924_, lean_object* v_initialMask_925_, lean_object* v___f_926_, lean_object* v_inst_927_, lean_object* v___x_928_, lean_object* v_next_929_, lean_object* v_acc_930_, lean_object* v_h_931_, lean_object* v_G_932_, lean_object* v___y_933_, lean_object* v___y_934_){
_start:
{
uint8_t v___x_935_; 
v___x_935_ = lean_nat_dec_lt(v_next_929_, v___x_921_);
if (v___x_935_ == 0)
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
lean_dec(v_G_932_);
lean_dec(v_next_929_);
lean_dec_ref(v_inst_927_);
lean_dec(v___f_926_);
lean_dec(v___f_924_);
lean_dec(v_toBind_923_);
v___x_936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_936_, 0, v_acc_930_);
v___x_937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_937_, 0, v___x_936_);
lean_ctor_set(v___x_937_, 1, v___y_934_);
v___x_938_ = lean_apply_2(v_toPure_922_, lean_box(0), v___x_937_);
return v___x_938_;
}
else
{
lean_object* v___f_939_; lean_object* v___y_941_; lean_object* v___x_944_; uint8_t v___x_945_; 
lean_dec_ref(v_acc_930_);
lean_inc_ref(v___y_933_);
lean_inc(v_next_929_);
lean_inc(v_toPure_922_);
v___f_939_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__4___boxed), 5, 4);
lean_closure_set(v___f_939_, 0, v_toPure_922_);
lean_closure_set(v___f_939_, 1, v_next_929_);
lean_closure_set(v___f_939_, 2, v_G_932_);
lean_closure_set(v___f_939_, 3, v___y_933_);
v___x_944_ = lean_array_fget_borrowed(v_initialMask_925_, v_next_929_);
v___x_945_ = lean_unbox(v___x_944_);
if (v___x_945_ == 0)
{
lean_object* v___f_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
lean_inc_ref(v___y_933_);
v___f_946_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__5___boxed), 4, 3);
lean_closure_set(v___f_946_, 0, v_toPure_922_);
lean_closure_set(v___f_946_, 1, v___f_926_);
lean_closure_set(v___f_946_, 2, v___y_933_);
v___x_947_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_add___redArg(v_next_929_, v_inst_927_, v___y_934_);
lean_inc(v_toBind_923_);
v___x_948_ = lean_apply_4(v_toBind_923_, lean_box(0), lean_box(0), v___x_947_, v___f_946_);
v___y_941_ = v___x_948_;
goto v___jp_940_;
}
else
{
lean_object* v___x_949_; 
lean_dec(v_next_929_);
lean_dec_ref(v_inst_927_);
lean_dec(v_toPure_922_);
lean_inc_ref(v___y_933_);
v___x_949_ = lean_apply_3(v___f_926_, v___x_928_, v___y_933_, v___y_934_);
v___y_941_ = v___x_949_;
goto v___jp_940_;
}
v___jp_940_:
{
lean_object* v___x_942_; lean_object* v___x_943_; 
lean_inc(v_toBind_923_);
v___x_942_ = lean_apply_4(v_toBind_923_, lean_box(0), lean_box(0), v___y_941_, v___f_924_);
v___x_943_ = lean_apply_4(v_toBind_923_, lean_box(0), lean_box(0), v___x_942_, v___f_939_);
return v___x_943_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__6___boxed(lean_object* v___x_950_, lean_object* v_toPure_951_, lean_object* v_toBind_952_, lean_object* v___f_953_, lean_object* v_initialMask_954_, lean_object* v___f_955_, lean_object* v_inst_956_, lean_object* v___x_957_, lean_object* v_next_958_, lean_object* v_acc_959_, lean_object* v_h_960_, lean_object* v_G_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__6(v___x_950_, v_toPure_951_, v_toBind_952_, v___f_953_, v_initialMask_954_, v___f_955_, v_inst_956_, v___x_957_, v_next_958_, v_acc_959_, v_h_960_, v_G_961_, v___y_962_, v___y_963_);
lean_dec_ref(v___y_962_);
lean_dec_ref(v_initialMask_954_);
lean_dec(v___x_950_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__7(lean_object* v_toPure_968_, lean_object* v_inst_969_, lean_object* v_toBind_970_, lean_object* v___f_971_, lean_object* v_a_972_, lean_object* v_____x_973_){
_start:
{
lean_object* v_fst_974_; 
v_fst_974_ = lean_ctor_get(v_____x_973_, 0);
lean_inc(v_fst_974_);
if (lean_obj_tag(v_fst_974_) == 0)
{
lean_object* v_snd_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_991_; 
lean_dec(v___f_971_);
lean_dec(v_toBind_970_);
lean_dec_ref(v_inst_969_);
v_snd_975_ = lean_ctor_get(v_____x_973_, 1);
v_isSharedCheck_991_ = !lean_is_exclusive(v_____x_973_);
if (v_isSharedCheck_991_ == 0)
{
lean_object* v_unused_992_; 
v_unused_992_ = lean_ctor_get(v_____x_973_, 0);
lean_dec(v_unused_992_);
v___x_977_ = v_____x_973_;
v_isShared_978_ = v_isSharedCheck_991_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_snd_975_);
lean_dec(v_____x_973_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_991_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_990_; 
v_a_979_ = lean_ctor_get(v_fst_974_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v_fst_974_);
if (v_isSharedCheck_990_ == 0)
{
v___x_981_ = v_fst_974_;
v_isShared_982_ = v_isSharedCheck_990_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_a_979_);
lean_dec(v_fst_974_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_990_;
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
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_979_);
v___x_984_ = v_reuseFailAlloc_989_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
lean_object* v___x_986_; 
if (v_isShared_978_ == 0)
{
lean_ctor_set(v___x_977_, 0, v___x_984_);
v___x_986_ = v___x_977_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v___x_984_);
lean_ctor_set(v_reuseFailAlloc_988_, 1, v_snd_975_);
v___x_986_ = v_reuseFailAlloc_988_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
lean_object* v___x_987_; 
v___x_987_ = lean_apply_2(v_toPure_968_, lean_box(0), v___x_986_);
return v___x_987_;
}
}
}
}
}
else
{
lean_object* v_a_993_; lean_object* v_snd_994_; lean_object* v_initialMask_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___f_999_; lean_object* v___x_1000_; lean_object* v___f_1001_; lean_object* v___f_1002_; lean_object* v___f_1003_; lean_object* v___x_6201__overap_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v_a_993_ = lean_ctor_get(v_fst_974_, 0);
lean_inc(v_a_993_);
lean_dec_ref_known(v_fst_974_, 1);
v_snd_994_ = lean_ctor_get(v_____x_973_, 1);
lean_inc(v_snd_994_);
lean_dec_ref(v_____x_973_);
v_initialMask_995_ = lean_ctor_get(v_a_993_, 0);
lean_inc_ref(v_initialMask_995_);
lean_dec(v_a_993_);
v___x_996_ = lean_array_get_size(v_initialMask_995_);
v___x_997_ = lean_unsigned_to_nat(0u);
v___x_998_ = lean_box(0);
lean_inc_n(v_toPure_968_, 2);
v___f_999_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__1), 3, 2);
lean_closure_set(v___f_999_, 0, v_toPure_968_);
lean_closure_set(v___f_999_, 1, v___x_998_);
v___x_1000_ = ((lean_object*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__7___closed__0));
v___f_1001_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1001_, 0, v_toPure_968_);
lean_closure_set(v___f_1001_, 1, v___x_1000_);
lean_closure_set(v___f_1001_, 2, v___x_998_);
lean_inc_n(v_toBind_970_, 2);
lean_inc_ref(v_inst_969_);
v___f_1002_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__3___boxed), 6, 3);
lean_closure_set(v___f_1002_, 0, v_inst_969_);
lean_closure_set(v___f_1002_, 1, v_toBind_970_);
lean_closure_set(v___f_1002_, 2, v___f_1001_);
v___f_1003_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__6___boxed), 14, 8);
lean_closure_set(v___f_1003_, 0, v___x_996_);
lean_closure_set(v___f_1003_, 1, v_toPure_968_);
lean_closure_set(v___f_1003_, 2, v_toBind_970_);
lean_closure_set(v___f_1003_, 3, v___f_971_);
lean_closure_set(v___f_1003_, 4, v_initialMask_995_);
lean_closure_set(v___f_1003_, 5, v___f_1002_);
lean_closure_set(v___f_1003_, 6, v_inst_969_);
lean_closure_set(v___f_1003_, 7, v___x_998_);
v___x_6201__overap_1004_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_1003_, v___x_997_, v___x_1000_, lean_box(0));
lean_inc_ref(v_a_972_);
v___x_1005_ = lean_apply_2(v___x_6201__overap_1004_, v_a_972_, v_snd_994_);
v___x_1006_ = lean_apply_4(v_toBind_970_, lean_box(0), lean_box(0), v___x_1005_, v___f_999_);
return v___x_1006_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__7___boxed(lean_object* v_toPure_1007_, lean_object* v_inst_1008_, lean_object* v_toBind_1009_, lean_object* v___f_1010_, lean_object* v_a_1011_, lean_object* v_____x_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__7(v_toPure_1007_, v_inst_1008_, v_toBind_1009_, v___f_1010_, v_a_1011_, v_____x_1012_);
lean_dec_ref(v_a_1011_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg(lean_object* v_inst_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_){
_start:
{
lean_object* v_toApplicative_1017_; lean_object* v_toBind_1018_; lean_object* v_toPure_1019_; lean_object* v___f_1020_; lean_object* v___f_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v_toApplicative_1017_ = lean_ctor_get(v_inst_1014_, 0);
v_toBind_1018_ = lean_ctor_get(v_inst_1014_, 1);
lean_inc_n(v_toBind_1018_, 2);
v_toPure_1019_ = lean_ctor_get(v_toApplicative_1017_, 1);
lean_inc_n(v_toPure_1019_, 3);
v___f_1020_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1020_, 0, v_toPure_1019_);
lean_inc_ref_n(v_a_1015_, 2);
v___f_1021_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_1021_, 0, v_toPure_1019_);
lean_closure_set(v___f_1021_, 1, v_inst_1014_);
lean_closure_set(v___f_1021_, 2, v_toBind_1018_);
lean_closure_set(v___f_1021_, 3, v___f_1020_);
lean_closure_set(v___f_1021_, 4, v_a_1015_);
v___x_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1022_, 0, v_a_1015_);
v___x_1023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1022_);
lean_ctor_set(v___x_1023_, 1, v_a_1016_);
v___x_1024_ = lean_apply_2(v_toPure_1019_, lean_box(0), v___x_1023_);
v___x_1025_ = lean_apply_4(v_toBind_1018_, lean_box(0), lean_box(0), v___x_1024_, v___f_1021_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg___boxed(lean_object* v_inst_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_){
_start:
{
lean_object* v_res_1029_; 
v_res_1029_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg(v_inst_1026_, v_a_1027_, v_a_1028_);
lean_dec_ref(v_a_1027_);
return v_res_1029_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init(lean_object* v_m_1030_, lean_object* v_inst_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_){
_start:
{
lean_object* v___x_1034_; 
v___x_1034_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg(v_inst_1031_, v_a_1032_, v_a_1033_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___boxed(lean_object* v_m_1035_, lean_object* v_inst_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init(v_m_1035_, v_inst_1036_, v_a_1037_, v_a_1038_);
lean_dec_ref(v_a_1037_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__0(lean_object* v_toPure_1042_, lean_object* v_____x_1043_){
_start:
{
lean_object* v_fst_1044_; 
v_fst_1044_ = lean_ctor_get(v_____x_1043_, 0);
lean_inc(v_fst_1044_);
if (lean_obj_tag(v_fst_1044_) == 0)
{
lean_object* v_snd_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1061_; 
v_snd_1045_ = lean_ctor_get(v_____x_1043_, 1);
v_isSharedCheck_1061_ = !lean_is_exclusive(v_____x_1043_);
if (v_isSharedCheck_1061_ == 0)
{
lean_object* v_unused_1062_; 
v_unused_1062_ = lean_ctor_get(v_____x_1043_, 0);
lean_dec(v_unused_1062_);
v___x_1047_ = v_____x_1043_;
v_isShared_1048_ = v_isSharedCheck_1061_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_snd_1045_);
lean_dec(v_____x_1043_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1061_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1060_; 
v_a_1049_ = lean_ctor_get(v_fst_1044_, 0);
v_isSharedCheck_1060_ = !lean_is_exclusive(v_fst_1044_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1051_ = v_fst_1044_;
v_isShared_1052_ = v_isSharedCheck_1060_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v_fst_1044_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1060_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1054_; 
if (v_isShared_1052_ == 0)
{
v___x_1054_ = v___x_1051_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v_a_1049_);
v___x_1054_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
lean_object* v___x_1056_; 
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 0, v___x_1054_);
v___x_1056_ = v___x_1047_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1054_);
lean_ctor_set(v_reuseFailAlloc_1058_, 1, v_snd_1045_);
v___x_1056_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
lean_object* v___x_1057_; 
v___x_1057_ = lean_apply_2(v_toPure_1042_, lean_box(0), v___x_1056_);
return v___x_1057_;
}
}
}
}
}
else
{
lean_object* v_snd_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1072_; 
lean_dec_ref_known(v_fst_1044_, 1);
v_snd_1063_ = lean_ctor_get(v_____x_1043_, 1);
v_isSharedCheck_1072_ = !lean_is_exclusive(v_____x_1043_);
if (v_isSharedCheck_1072_ == 0)
{
lean_object* v_unused_1073_; 
v_unused_1073_ = lean_ctor_get(v_____x_1043_, 0);
lean_dec(v_unused_1073_);
v___x_1065_ = v_____x_1043_;
v_isShared_1066_ = v_isSharedCheck_1072_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_snd_1063_);
lean_dec(v_____x_1043_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1072_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1067_; lean_object* v___x_1069_; 
v___x_1067_ = ((lean_object*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__0___closed__0));
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 0, v___x_1067_);
v___x_1069_ = v___x_1065_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v___x_1067_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v_snd_1063_);
v___x_1069_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
lean_object* v___x_1070_; 
v___x_1070_ = lean_apply_2(v_toPure_1042_, lean_box(0), v___x_1069_);
return v___x_1070_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__1(lean_object* v_toPure_1074_, lean_object* v_____x_1075_){
_start:
{
lean_object* v_fst_1076_; 
v_fst_1076_ = lean_ctor_get(v_____x_1075_, 0);
lean_inc(v_fst_1076_);
if (lean_obj_tag(v_fst_1076_) == 0)
{
lean_object* v_snd_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1093_; 
v_snd_1077_ = lean_ctor_get(v_____x_1075_, 1);
v_isSharedCheck_1093_ = !lean_is_exclusive(v_____x_1075_);
if (v_isSharedCheck_1093_ == 0)
{
lean_object* v_unused_1094_; 
v_unused_1094_ = lean_ctor_get(v_____x_1075_, 0);
lean_dec(v_unused_1094_);
v___x_1079_ = v_____x_1075_;
v_isShared_1080_ = v_isSharedCheck_1093_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_snd_1077_);
lean_dec(v_____x_1075_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1093_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v_a_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1092_; 
v_a_1081_ = lean_ctor_get(v_fst_1076_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v_fst_1076_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1083_ = v_fst_1076_;
v_isShared_1084_ = v_isSharedCheck_1092_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_a_1081_);
lean_dec(v_fst_1076_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1092_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v___x_1086_; 
if (v_isShared_1084_ == 0)
{
v___x_1086_ = v___x_1083_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v_a_1081_);
v___x_1086_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
lean_object* v___x_1088_; 
if (v_isShared_1080_ == 0)
{
lean_ctor_set(v___x_1079_, 0, v___x_1086_);
v___x_1088_ = v___x_1079_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v___x_1086_);
lean_ctor_set(v_reuseFailAlloc_1090_, 1, v_snd_1077_);
v___x_1088_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
lean_object* v___x_1089_; 
v___x_1089_ = lean_apply_2(v_toPure_1074_, lean_box(0), v___x_1088_);
return v___x_1089_;
}
}
}
}
}
else
{
lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1141_; 
v_a_1095_ = lean_ctor_get(v_fst_1076_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v_fst_1076_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1097_ = v_fst_1076_;
v_isShared_1098_ = v_isSharedCheck_1141_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_dec(v_fst_1076_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1141_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
if (lean_obj_tag(v_a_1095_) == 0)
{
lean_object* v_snd_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1118_; 
v_snd_1099_ = lean_ctor_get(v_____x_1075_, 1);
v_isSharedCheck_1118_ = !lean_is_exclusive(v_____x_1075_);
if (v_isSharedCheck_1118_ == 0)
{
lean_object* v_unused_1119_; 
v_unused_1119_ = lean_ctor_get(v_____x_1075_, 0);
lean_dec(v_unused_1119_);
v___x_1101_ = v_____x_1075_;
v_isShared_1102_ = v_isSharedCheck_1118_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_snd_1099_);
lean_dec(v_____x_1075_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1118_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1117_; 
v_a_1103_ = lean_ctor_get(v_a_1095_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v_a_1095_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1105_ = v_a_1095_;
v_isShared_1106_ = v_isSharedCheck_1117_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v_a_1095_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1117_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
lean_ctor_set_tag(v___x_1105_, 1);
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_a_1103_);
v___x_1108_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
lean_object* v___x_1110_; 
if (v_isShared_1098_ == 0)
{
lean_ctor_set(v___x_1097_, 0, v___x_1108_);
v___x_1110_ = v___x_1097_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v___x_1108_);
v___x_1110_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
lean_object* v___x_1112_; 
if (v_isShared_1102_ == 0)
{
lean_ctor_set(v___x_1101_, 0, v___x_1110_);
v___x_1112_ = v___x_1101_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v___x_1110_);
lean_ctor_set(v_reuseFailAlloc_1114_, 1, v_snd_1099_);
v___x_1112_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
lean_object* v___x_1113_; 
v___x_1113_ = lean_apply_2(v_toPure_1074_, lean_box(0), v___x_1112_);
return v___x_1113_;
}
}
}
}
}
}
else
{
lean_object* v_snd_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1139_; 
v_snd_1120_ = lean_ctor_get(v_____x_1075_, 1);
v_isSharedCheck_1139_ = !lean_is_exclusive(v_____x_1075_);
if (v_isSharedCheck_1139_ == 0)
{
lean_object* v_unused_1140_; 
v_unused_1140_ = lean_ctor_get(v_____x_1075_, 0);
lean_dec(v_unused_1140_);
v___x_1122_ = v_____x_1075_;
v_isShared_1123_ = v_isSharedCheck_1139_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_snd_1120_);
lean_dec(v_____x_1075_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1139_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v_a_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1138_; 
v_a_1124_ = lean_ctor_get(v_a_1095_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v_a_1095_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1126_ = v_a_1095_;
v_isShared_1127_ = v_isSharedCheck_1138_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_a_1124_);
lean_dec(v_a_1095_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1138_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1129_; 
if (v_isShared_1127_ == 0)
{
lean_ctor_set_tag(v___x_1126_, 0);
v___x_1129_ = v___x_1126_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_a_1124_);
v___x_1129_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
lean_object* v___x_1131_; 
if (v_isShared_1098_ == 0)
{
lean_ctor_set(v___x_1097_, 0, v___x_1129_);
v___x_1131_ = v___x_1097_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v___x_1129_);
v___x_1131_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
lean_object* v___x_1133_; 
if (v_isShared_1123_ == 0)
{
lean_ctor_set(v___x_1122_, 0, v___x_1131_);
v___x_1133_ = v___x_1122_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v___x_1131_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v_snd_1120_);
v___x_1133_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
lean_object* v___x_1134_; 
v___x_1134_ = lean_apply_2(v_toPure_1074_, lean_box(0), v___x_1133_);
return v___x_1134_;
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
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__2(lean_object* v_toPure_1142_, lean_object* v___x_1143_, lean_object* v_____x_1144_){
_start:
{
lean_object* v_fst_1145_; 
v_fst_1145_ = lean_ctor_get(v_____x_1144_, 0);
lean_inc(v_fst_1145_);
if (lean_obj_tag(v_fst_1145_) == 0)
{
lean_object* v_snd_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1162_; 
lean_dec(v___x_1143_);
v_snd_1146_ = lean_ctor_get(v_____x_1144_, 1);
v_isSharedCheck_1162_ = !lean_is_exclusive(v_____x_1144_);
if (v_isSharedCheck_1162_ == 0)
{
lean_object* v_unused_1163_; 
v_unused_1163_ = lean_ctor_get(v_____x_1144_, 0);
lean_dec(v_unused_1163_);
v___x_1148_ = v_____x_1144_;
v_isShared_1149_ = v_isSharedCheck_1162_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_snd_1146_);
lean_dec(v_____x_1144_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1162_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v_a_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1161_; 
v_a_1150_ = lean_ctor_get(v_fst_1145_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v_fst_1145_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1152_ = v_fst_1145_;
v_isShared_1153_ = v_isSharedCheck_1161_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_a_1150_);
lean_dec(v_fst_1145_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1161_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1155_; 
if (v_isShared_1153_ == 0)
{
v___x_1155_ = v___x_1152_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_a_1150_);
v___x_1155_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
lean_object* v___x_1157_; 
if (v_isShared_1149_ == 0)
{
lean_ctor_set(v___x_1148_, 0, v___x_1155_);
v___x_1157_ = v___x_1148_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v___x_1155_);
lean_ctor_set(v_reuseFailAlloc_1159_, 1, v_snd_1146_);
v___x_1157_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
lean_object* v___x_1158_; 
v___x_1158_ = lean_apply_2(v_toPure_1142_, lean_box(0), v___x_1157_);
return v___x_1158_;
}
}
}
}
}
else
{
lean_object* v_snd_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1181_; 
v_snd_1164_ = lean_ctor_get(v_____x_1144_, 1);
v_isSharedCheck_1181_ = !lean_is_exclusive(v_____x_1144_);
if (v_isSharedCheck_1181_ == 0)
{
lean_object* v_unused_1182_; 
v_unused_1182_ = lean_ctor_get(v_____x_1144_, 0);
lean_dec(v_unused_1182_);
v___x_1166_ = v_____x_1144_;
v_isShared_1167_ = v_isSharedCheck_1181_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_snd_1164_);
lean_dec(v_____x_1144_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1181_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1179_; 
v_isSharedCheck_1179_ = !lean_is_exclusive(v_fst_1145_);
if (v_isSharedCheck_1179_ == 0)
{
lean_object* v_unused_1180_; 
v_unused_1180_ = lean_ctor_get(v_fst_1145_, 0);
lean_dec(v_unused_1180_);
v___x_1169_ = v_fst_1145_;
v_isShared_1170_ = v_isSharedCheck_1179_;
goto v_resetjp_1168_;
}
else
{
lean_dec(v_fst_1145_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1179_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1171_; lean_object* v___x_1173_; 
v___x_1171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1143_);
if (v_isShared_1170_ == 0)
{
lean_ctor_set(v___x_1169_, 0, v___x_1171_);
v___x_1173_ = v___x_1169_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v___x_1171_);
v___x_1173_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
lean_object* v___x_1175_; 
if (v_isShared_1167_ == 0)
{
lean_ctor_set(v___x_1166_, 0, v___x_1173_);
v___x_1175_ = v___x_1166_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v___x_1173_);
lean_ctor_set(v_reuseFailAlloc_1177_, 1, v_snd_1164_);
v___x_1175_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
lean_object* v___x_1176_; 
v___x_1176_ = lean_apply_2(v_toPure_1142_, lean_box(0), v___x_1175_);
return v___x_1176_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__3(lean_object* v_toPure_1183_, lean_object* v___x_1184_, lean_object* v_inst_1185_, lean_object* v_toBind_1186_, lean_object* v___f_1187_, lean_object* v___x_1188_, lean_object* v_____x_1189_){
_start:
{
lean_object* v_fst_1190_; 
v_fst_1190_ = lean_ctor_get(v_____x_1189_, 0);
lean_inc(v_fst_1190_);
if (lean_obj_tag(v_fst_1190_) == 0)
{
lean_object* v_snd_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1207_; 
lean_dec(v___x_1188_);
lean_dec(v___f_1187_);
lean_dec(v_toBind_1186_);
lean_dec_ref(v_inst_1185_);
v_snd_1191_ = lean_ctor_get(v_____x_1189_, 1);
v_isSharedCheck_1207_ = !lean_is_exclusive(v_____x_1189_);
if (v_isSharedCheck_1207_ == 0)
{
lean_object* v_unused_1208_; 
v_unused_1208_ = lean_ctor_get(v_____x_1189_, 0);
lean_dec(v_unused_1208_);
v___x_1193_ = v_____x_1189_;
v_isShared_1194_ = v_isSharedCheck_1207_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_snd_1191_);
lean_dec(v_____x_1189_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1207_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v_a_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1206_; 
v_a_1195_ = lean_ctor_get(v_fst_1190_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v_fst_1190_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1197_ = v_fst_1190_;
v_isShared_1198_ = v_isSharedCheck_1206_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_a_1195_);
lean_dec(v_fst_1190_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1206_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v___x_1200_; 
if (v_isShared_1198_ == 0)
{
v___x_1200_ = v___x_1197_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_a_1195_);
v___x_1200_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
lean_object* v___x_1202_; 
if (v_isShared_1194_ == 0)
{
lean_ctor_set(v___x_1193_, 0, v___x_1200_);
v___x_1202_ = v___x_1193_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v___x_1200_);
lean_ctor_set(v_reuseFailAlloc_1204_, 1, v_snd_1191_);
v___x_1202_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
lean_object* v___x_1203_; 
v___x_1203_ = lean_apply_2(v_toPure_1183_, lean_box(0), v___x_1202_);
return v___x_1203_;
}
}
}
}
}
else
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1231_; 
v_a_1209_ = lean_ctor_get(v_fst_1190_, 0);
v_isSharedCheck_1231_ = !lean_is_exclusive(v_fst_1190_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1211_ = v_fst_1190_;
v_isShared_1212_ = v_isSharedCheck_1231_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v_fst_1190_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1231_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
uint8_t v___x_1213_; 
v___x_1213_ = lean_unbox(v_a_1209_);
lean_dec(v_a_1209_);
if (v___x_1213_ == 0)
{
lean_object* v_snd_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
lean_del_object(v___x_1211_);
lean_dec(v___x_1188_);
lean_dec(v_toPure_1183_);
v_snd_1214_ = lean_ctor_get(v_____x_1189_, 1);
lean_inc(v_snd_1214_);
lean_dec_ref(v_____x_1189_);
v___x_1215_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_restore___redArg(v___x_1184_, v_inst_1185_, v_snd_1214_);
v___x_1216_ = lean_apply_4(v_toBind_1186_, lean_box(0), lean_box(0), v___x_1215_, v___f_1187_);
return v___x_1216_;
}
else
{
lean_object* v_snd_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1229_; 
lean_dec(v___f_1187_);
lean_dec(v_toBind_1186_);
lean_dec_ref(v_inst_1185_);
v_snd_1217_ = lean_ctor_get(v_____x_1189_, 1);
v_isSharedCheck_1229_ = !lean_is_exclusive(v_____x_1189_);
if (v_isSharedCheck_1229_ == 0)
{
lean_object* v_unused_1230_; 
v_unused_1230_ = lean_ctor_get(v_____x_1189_, 0);
lean_dec(v_unused_1230_);
v___x_1219_ = v_____x_1189_;
v_isShared_1220_ = v_isSharedCheck_1229_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_snd_1217_);
lean_dec(v_____x_1189_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1229_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1221_; lean_object* v___x_1223_; 
v___x_1221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1188_);
if (v_isShared_1212_ == 0)
{
lean_ctor_set(v___x_1211_, 0, v___x_1221_);
v___x_1223_ = v___x_1211_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v___x_1221_);
v___x_1223_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
lean_object* v___x_1225_; 
if (v_isShared_1220_ == 0)
{
lean_ctor_set(v___x_1219_, 0, v___x_1223_);
v___x_1225_ = v___x_1219_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v___x_1223_);
lean_ctor_set(v_reuseFailAlloc_1227_, 1, v_snd_1217_);
v___x_1225_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
lean_object* v___x_1226_; 
v___x_1226_ = lean_apply_2(v_toPure_1183_, lean_box(0), v___x_1225_);
return v___x_1226_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__3___boxed(lean_object* v_toPure_1232_, lean_object* v___x_1233_, lean_object* v_inst_1234_, lean_object* v_toBind_1235_, lean_object* v___f_1236_, lean_object* v___x_1237_, lean_object* v_____x_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__3(v_toPure_1232_, v___x_1233_, v_inst_1234_, v_toBind_1235_, v___f_1236_, v___x_1237_, v_____x_1238_);
lean_dec(v___x_1233_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__4(lean_object* v_toPure_1240_, lean_object* v_inst_1241_, lean_object* v___y_1242_, lean_object* v_toBind_1243_, lean_object* v___f_1244_, lean_object* v_____x_1245_){
_start:
{
lean_object* v_fst_1246_; 
v_fst_1246_ = lean_ctor_get(v_____x_1245_, 0);
lean_inc(v_fst_1246_);
if (lean_obj_tag(v_fst_1246_) == 0)
{
lean_object* v_snd_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1263_; 
lean_dec(v___f_1244_);
lean_dec(v_toBind_1243_);
lean_dec_ref(v_inst_1241_);
v_snd_1247_ = lean_ctor_get(v_____x_1245_, 1);
v_isSharedCheck_1263_ = !lean_is_exclusive(v_____x_1245_);
if (v_isSharedCheck_1263_ == 0)
{
lean_object* v_unused_1264_; 
v_unused_1264_ = lean_ctor_get(v_____x_1245_, 0);
lean_dec(v_unused_1264_);
v___x_1249_ = v_____x_1245_;
v_isShared_1250_ = v_isSharedCheck_1263_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_snd_1247_);
lean_dec(v_____x_1245_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1263_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v_a_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1262_; 
v_a_1251_ = lean_ctor_get(v_fst_1246_, 0);
v_isSharedCheck_1262_ = !lean_is_exclusive(v_fst_1246_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1253_ = v_fst_1246_;
v_isShared_1254_ = v_isSharedCheck_1262_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_a_1251_);
lean_dec(v_fst_1246_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1262_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___x_1256_; 
if (v_isShared_1254_ == 0)
{
v___x_1256_ = v___x_1253_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v_a_1251_);
v___x_1256_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
lean_object* v___x_1258_; 
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 0, v___x_1256_);
v___x_1258_ = v___x_1249_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v___x_1256_);
lean_ctor_set(v_reuseFailAlloc_1260_, 1, v_snd_1247_);
v___x_1258_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
lean_object* v___x_1259_; 
v___x_1259_ = lean_apply_2(v_toPure_1240_, lean_box(0), v___x_1258_);
return v___x_1259_;
}
}
}
}
}
else
{
lean_object* v_snd_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; 
lean_dec_ref_known(v_fst_1246_, 1);
lean_dec(v_toPure_1240_);
v_snd_1265_ = lean_ctor_get(v_____x_1245_, 1);
lean_inc(v_snd_1265_);
lean_dec_ref(v_____x_1245_);
v___x_1266_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg(v_inst_1241_, v___y_1242_, v_snd_1265_);
v___x_1267_ = lean_apply_4(v_toBind_1243_, lean_box(0), lean_box(0), v___x_1266_, v___f_1244_);
return v___x_1267_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__4___boxed(lean_object* v_toPure_1268_, lean_object* v_inst_1269_, lean_object* v___y_1270_, lean_object* v_toBind_1271_, lean_object* v___f_1272_, lean_object* v_____x_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__4(v_toPure_1268_, v_inst_1269_, v___y_1270_, v_toBind_1271_, v___f_1272_, v_____x_1273_);
lean_dec_ref(v___y_1270_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__5(lean_object* v_toPure_1275_, lean_object* v___x_1276_, lean_object* v___x_1277_, lean_object* v_inst_1278_, lean_object* v_toBind_1279_, lean_object* v___f_1280_, lean_object* v___y_1281_, lean_object* v_____x_1282_){
_start:
{
lean_object* v_fst_1283_; 
v_fst_1283_ = lean_ctor_get(v_____x_1282_, 0);
lean_inc(v_fst_1283_);
if (lean_obj_tag(v_fst_1283_) == 0)
{
lean_object* v_snd_1284_; lean_object* v___x_1286_; uint8_t v_isShared_1287_; uint8_t v_isSharedCheck_1300_; 
lean_dec(v___f_1280_);
lean_dec(v_toBind_1279_);
lean_dec_ref(v_inst_1278_);
lean_dec(v___x_1277_);
v_snd_1284_ = lean_ctor_get(v_____x_1282_, 1);
v_isSharedCheck_1300_ = !lean_is_exclusive(v_____x_1282_);
if (v_isSharedCheck_1300_ == 0)
{
lean_object* v_unused_1301_; 
v_unused_1301_ = lean_ctor_get(v_____x_1282_, 0);
lean_dec(v_unused_1301_);
v___x_1286_ = v_____x_1282_;
v_isShared_1287_ = v_isSharedCheck_1300_;
goto v_resetjp_1285_;
}
else
{
lean_inc(v_snd_1284_);
lean_dec(v_____x_1282_);
v___x_1286_ = lean_box(0);
v_isShared_1287_ = v_isSharedCheck_1300_;
goto v_resetjp_1285_;
}
v_resetjp_1285_:
{
lean_object* v_a_1288_; lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1299_; 
v_a_1288_ = lean_ctor_get(v_fst_1283_, 0);
v_isSharedCheck_1299_ = !lean_is_exclusive(v_fst_1283_);
if (v_isSharedCheck_1299_ == 0)
{
v___x_1290_ = v_fst_1283_;
v_isShared_1291_ = v_isSharedCheck_1299_;
goto v_resetjp_1289_;
}
else
{
lean_inc(v_a_1288_);
lean_dec(v_fst_1283_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1299_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v___x_1293_; 
if (v_isShared_1291_ == 0)
{
v___x_1293_ = v___x_1290_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v_a_1288_);
v___x_1293_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
lean_object* v___x_1295_; 
if (v_isShared_1287_ == 0)
{
lean_ctor_set(v___x_1286_, 0, v___x_1293_);
v___x_1295_ = v___x_1286_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v___x_1293_);
lean_ctor_set(v_reuseFailAlloc_1297_, 1, v_snd_1284_);
v___x_1295_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
lean_object* v___x_1296_; 
v___x_1296_ = lean_apply_2(v_toPure_1275_, lean_box(0), v___x_1295_);
return v___x_1296_;
}
}
}
}
}
else
{
lean_object* v_a_1302_; lean_object* v_snd_1303_; lean_object* v_added_1304_; lean_object* v___x_1305_; lean_object* v___f_1306_; lean_object* v___f_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; 
v_a_1302_ = lean_ctor_get(v_fst_1283_, 0);
lean_inc(v_a_1302_);
lean_dec_ref_known(v_fst_1283_, 1);
v_snd_1303_ = lean_ctor_get(v_____x_1282_, 1);
lean_inc(v_snd_1303_);
lean_dec_ref(v_____x_1282_);
v_added_1304_ = lean_ctor_get(v_a_1302_, 1);
lean_inc_ref(v_added_1304_);
lean_dec(v_a_1302_);
v___x_1305_ = lean_array_get(v___x_1276_, v_added_1304_, v___x_1277_);
lean_dec_ref(v_added_1304_);
lean_inc_n(v_toBind_1279_, 2);
lean_inc_ref_n(v_inst_1278_, 2);
lean_inc(v___x_1305_);
lean_inc(v_toPure_1275_);
v___f_1306_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_1306_, 0, v_toPure_1275_);
lean_closure_set(v___f_1306_, 1, v___x_1305_);
lean_closure_set(v___f_1306_, 2, v_inst_1278_);
lean_closure_set(v___f_1306_, 3, v_toBind_1279_);
lean_closure_set(v___f_1306_, 4, v___f_1280_);
lean_closure_set(v___f_1306_, 5, v___x_1277_);
lean_inc_ref(v___y_1281_);
v___f_1307_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__4___boxed), 6, 5);
lean_closure_set(v___f_1307_, 0, v_toPure_1275_);
lean_closure_set(v___f_1307_, 1, v_inst_1278_);
lean_closure_set(v___f_1307_, 2, v___y_1281_);
lean_closure_set(v___f_1307_, 3, v_toBind_1279_);
lean_closure_set(v___f_1307_, 4, v___f_1306_);
v___x_1308_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_erase___redArg(v___x_1305_, v_inst_1278_, v_snd_1303_);
lean_dec(v___x_1305_);
v___x_1309_ = lean_apply_4(v_toBind_1279_, lean_box(0), lean_box(0), v___x_1308_, v___f_1307_);
return v___x_1309_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__5___boxed(lean_object* v_toPure_1310_, lean_object* v___x_1311_, lean_object* v___x_1312_, lean_object* v_inst_1313_, lean_object* v_toBind_1314_, lean_object* v___f_1315_, lean_object* v___y_1316_, lean_object* v_____x_1317_){
_start:
{
lean_object* v_res_1318_; 
v_res_1318_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__5(v_toPure_1310_, v___x_1311_, v___x_1312_, v_inst_1313_, v_toBind_1314_, v___f_1315_, v___y_1316_, v_____x_1317_);
lean_dec_ref(v___y_1316_);
lean_dec(v___x_1311_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__7(lean_object* v_toPure_1319_, lean_object* v_toBind_1320_, lean_object* v___f_1321_, lean_object* v___x_1322_, lean_object* v___x_1323_, lean_object* v_inst_1324_, lean_object* v_b_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
lean_object* v___x_1328_; uint8_t v___x_1329_; 
v___x_1328_ = lean_unsigned_to_nat(0u);
v___x_1329_ = lean_nat_dec_lt(v___x_1328_, v_b_1325_);
if (v___x_1329_ == 0)
{
lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; 
lean_dec_ref(v_inst_1324_);
lean_dec(v___x_1323_);
v___x_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1330_, 0, v_b_1325_);
v___x_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1330_);
v___x_1332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1331_);
lean_ctor_set(v___x_1332_, 1, v___y_1327_);
v___x_1333_ = lean_apply_2(v_toPure_1319_, lean_box(0), v___x_1332_);
v___x_1334_ = lean_apply_4(v_toBind_1320_, lean_box(0), lean_box(0), v___x_1333_, v___f_1321_);
return v___x_1334_;
}
else
{
lean_object* v___x_1335_; lean_object* v___f_1336_; lean_object* v___f_1337_; lean_object* v___f_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1335_ = lean_nat_sub(v_b_1325_, v___x_1322_);
lean_dec(v_b_1325_);
lean_inc(v___x_1335_);
lean_inc_n(v_toPure_1319_, 3);
v___f_1336_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__2), 3, 2);
lean_closure_set(v___f_1336_, 0, v_toPure_1319_);
lean_closure_set(v___f_1336_, 1, v___x_1335_);
lean_inc_ref(v___y_1326_);
lean_inc_n(v_toBind_1320_, 3);
v___f_1337_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_1337_, 0, v_toPure_1319_);
lean_closure_set(v___f_1337_, 1, v___x_1323_);
lean_closure_set(v___f_1337_, 2, v___x_1335_);
lean_closure_set(v___f_1337_, 3, v_inst_1324_);
lean_closure_set(v___f_1337_, 4, v_toBind_1320_);
lean_closure_set(v___f_1337_, 5, v___f_1336_);
lean_closure_set(v___f_1337_, 6, v___y_1326_);
v___f_1338_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__5), 2, 1);
lean_closure_set(v___f_1338_, 0, v_toPure_1319_);
lean_inc_ref(v___y_1327_);
v___x_1339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1339_, 0, v___y_1327_);
lean_ctor_set(v___x_1339_, 1, v___y_1327_);
v___x_1340_ = lean_apply_2(v_toPure_1319_, lean_box(0), v___x_1339_);
v___x_1341_ = lean_apply_4(v_toBind_1320_, lean_box(0), lean_box(0), v___x_1340_, v___f_1338_);
v___x_1342_ = lean_apply_4(v_toBind_1320_, lean_box(0), lean_box(0), v___x_1341_, v___f_1337_);
v___x_1343_ = lean_apply_4(v_toBind_1320_, lean_box(0), lean_box(0), v___x_1342_, v___f_1321_);
return v___x_1343_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__7___boxed(lean_object* v_toPure_1344_, lean_object* v_toBind_1345_, lean_object* v___f_1346_, lean_object* v___x_1347_, lean_object* v___x_1348_, lean_object* v_inst_1349_, lean_object* v_b_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_){
_start:
{
lean_object* v_res_1353_; 
v_res_1353_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__7(v_toPure_1344_, v_toBind_1345_, v___f_1346_, v___x_1347_, v___x_1348_, v_inst_1349_, v_b_1350_, v___y_1351_, v___y_1352_);
lean_dec_ref(v___y_1351_);
lean_dec(v___x_1347_);
return v_res_1353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__6(lean_object* v_toPure_1354_, lean_object* v_toBind_1355_, lean_object* v___f_1356_, lean_object* v___x_1357_, lean_object* v_inst_1358_, lean_object* v___x_1359_, lean_object* v_a_1360_, lean_object* v___f_1361_, lean_object* v_____x_1362_){
_start:
{
lean_object* v_fst_1363_; 
v_fst_1363_ = lean_ctor_get(v_____x_1362_, 0);
lean_inc(v_fst_1363_);
if (lean_obj_tag(v_fst_1363_) == 0)
{
lean_object* v_snd_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1380_; 
lean_dec(v___f_1361_);
lean_dec_ref(v___x_1359_);
lean_dec_ref(v_inst_1358_);
lean_dec(v___x_1357_);
lean_dec(v___f_1356_);
lean_dec(v_toBind_1355_);
v_snd_1364_ = lean_ctor_get(v_____x_1362_, 1);
v_isSharedCheck_1380_ = !lean_is_exclusive(v_____x_1362_);
if (v_isSharedCheck_1380_ == 0)
{
lean_object* v_unused_1381_; 
v_unused_1381_ = lean_ctor_get(v_____x_1362_, 0);
lean_dec(v_unused_1381_);
v___x_1366_ = v_____x_1362_;
v_isShared_1367_ = v_isSharedCheck_1380_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_snd_1364_);
lean_dec(v_____x_1362_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1380_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v_a_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1379_; 
v_a_1368_ = lean_ctor_get(v_fst_1363_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v_fst_1363_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1370_ = v_fst_1363_;
v_isShared_1371_ = v_isSharedCheck_1379_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_a_1368_);
lean_dec(v_fst_1363_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1379_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1373_; 
if (v_isShared_1371_ == 0)
{
v___x_1373_ = v___x_1370_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_a_1368_);
v___x_1373_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
lean_object* v___x_1375_; 
if (v_isShared_1367_ == 0)
{
lean_ctor_set(v___x_1366_, 0, v___x_1373_);
v___x_1375_ = v___x_1366_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v___x_1373_);
lean_ctor_set(v_reuseFailAlloc_1377_, 1, v_snd_1364_);
v___x_1375_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
lean_object* v___x_1376_; 
v___x_1376_ = lean_apply_2(v_toPure_1354_, lean_box(0), v___x_1375_);
return v___x_1376_;
}
}
}
}
}
else
{
lean_object* v_a_1382_; lean_object* v_snd_1383_; lean_object* v_added_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___f_1387_; lean_object* v___x_1388_; lean_object* v___x_6161__overap_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; 
v_a_1382_ = lean_ctor_get(v_fst_1363_, 0);
lean_inc(v_a_1382_);
lean_dec_ref_known(v_fst_1363_, 1);
v_snd_1383_ = lean_ctor_get(v_____x_1362_, 1);
lean_inc(v_snd_1383_);
lean_dec_ref(v_____x_1362_);
v_added_1384_ = lean_ctor_get(v_a_1382_, 1);
lean_inc_ref(v_added_1384_);
lean_dec(v_a_1382_);
v___x_1385_ = lean_array_get_size(v_added_1384_);
lean_dec_ref(v_added_1384_);
v___x_1386_ = lean_unsigned_to_nat(1u);
lean_inc(v_toBind_1355_);
v___f_1387_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__7___boxed), 9, 6);
lean_closure_set(v___f_1387_, 0, v_toPure_1354_);
lean_closure_set(v___f_1387_, 1, v_toBind_1355_);
lean_closure_set(v___f_1387_, 2, v___f_1356_);
lean_closure_set(v___f_1387_, 3, v___x_1386_);
lean_closure_set(v___f_1387_, 4, v___x_1357_);
lean_closure_set(v___f_1387_, 5, v_inst_1358_);
v___x_1388_ = lean_nat_sub(v___x_1385_, v___x_1386_);
v___x_6161__overap_1389_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_1359_, v___f_1387_, v___x_1388_);
lean_inc_ref(v_a_1360_);
v___x_1390_ = lean_apply_2(v___x_6161__overap_1389_, v_a_1360_, v_snd_1383_);
v___x_1391_ = lean_apply_4(v_toBind_1355_, lean_box(0), lean_box(0), v___x_1390_, v___f_1361_);
return v___x_1391_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__6___boxed(lean_object* v_toPure_1392_, lean_object* v_toBind_1393_, lean_object* v___f_1394_, lean_object* v___x_1395_, lean_object* v_inst_1396_, lean_object* v___x_1397_, lean_object* v_a_1398_, lean_object* v___f_1399_, lean_object* v_____x_1400_){
_start:
{
lean_object* v_res_1401_; 
v_res_1401_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__6(v_toPure_1392_, v_toBind_1393_, v___f_1394_, v___x_1395_, v_inst_1396_, v___x_1397_, v_a_1398_, v___f_1399_, v_____x_1400_);
lean_dec_ref(v_a_1398_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg(lean_object* v_inst_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_){
_start:
{
lean_object* v___f_1405_; lean_object* v___f_1406_; lean_object* v___f_1407_; lean_object* v___f_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___f_1415_; lean_object* v___f_1416_; lean_object* v___f_1417_; lean_object* v___f_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v_toApplicative_1426_; lean_object* v_toBind_1427_; lean_object* v_toPure_1428_; lean_object* v___f_1429_; lean_object* v___f_1430_; lean_object* v___x_1431_; lean_object* v___f_1432_; lean_object* v___f_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
lean_inc_ref_n(v_inst_1402_, 7);
v___f_1405_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1405_, 0, v_inst_1402_);
v___f_1406_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1406_, 0, v_inst_1402_);
v___f_1407_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_1407_, 0, v_inst_1402_);
v___f_1408_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_1408_, 0, v_inst_1402_);
v___x_1409_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_1409_, 0, lean_box(0));
lean_closure_set(v___x_1409_, 1, lean_box(0));
lean_closure_set(v___x_1409_, 2, v_inst_1402_);
v___x_1410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1409_);
lean_ctor_set(v___x_1410_, 1, v___f_1405_);
v___x_1411_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_1411_, 0, lean_box(0));
lean_closure_set(v___x_1411_, 1, lean_box(0));
lean_closure_set(v___x_1411_, 2, v_inst_1402_);
v___x_1412_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1410_);
lean_ctor_set(v___x_1412_, 1, v___x_1411_);
lean_ctor_set(v___x_1412_, 2, v___f_1406_);
lean_ctor_set(v___x_1412_, 3, v___f_1407_);
lean_ctor_set(v___x_1412_, 4, v___f_1408_);
v___x_1413_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_1413_, 0, lean_box(0));
lean_closure_set(v___x_1413_, 1, lean_box(0));
lean_closure_set(v___x_1413_, 2, v_inst_1402_);
v___x_1414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1412_);
lean_ctor_set(v___x_1414_, 1, v___x_1413_);
lean_inc_ref_n(v___x_1414_, 6);
v___f_1415_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_1415_, 0, v___x_1414_);
v___f_1416_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_1416_, 0, v___x_1414_);
v___f_1417_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_1417_, 0, v___x_1414_);
v___f_1418_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_1418_, 0, v___x_1414_);
v___x_1419_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_1419_, 0, lean_box(0));
lean_closure_set(v___x_1419_, 1, lean_box(0));
lean_closure_set(v___x_1419_, 2, v___x_1414_);
v___x_1420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1419_);
lean_ctor_set(v___x_1420_, 1, v___f_1415_);
v___x_1421_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_1421_, 0, lean_box(0));
lean_closure_set(v___x_1421_, 1, lean_box(0));
lean_closure_set(v___x_1421_, 2, v___x_1414_);
v___x_1422_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1420_);
lean_ctor_set(v___x_1422_, 1, v___x_1421_);
lean_ctor_set(v___x_1422_, 2, v___f_1416_);
lean_ctor_set(v___x_1422_, 3, v___f_1417_);
lean_ctor_set(v___x_1422_, 4, v___f_1418_);
v___x_1423_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_1423_, 0, lean_box(0));
lean_closure_set(v___x_1423_, 1, lean_box(0));
lean_closure_set(v___x_1423_, 2, v___x_1414_);
v___x_1424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1422_);
lean_ctor_set(v___x_1424_, 1, v___x_1423_);
v___x_1425_ = l_ReaderT_instMonad___redArg(v___x_1424_);
v_toApplicative_1426_ = lean_ctor_get(v_inst_1402_, 0);
v_toBind_1427_ = lean_ctor_get(v_inst_1402_, 1);
lean_inc_n(v_toBind_1427_, 3);
v_toPure_1428_ = lean_ctor_get(v_toApplicative_1426_, 1);
lean_inc_n(v_toPure_1428_, 5);
v___f_1429_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1429_, 0, v_toPure_1428_);
v___f_1430_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1430_, 0, v_toPure_1428_);
v___x_1431_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_1403_);
v___f_1432_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__6___boxed), 9, 8);
lean_closure_set(v___f_1432_, 0, v_toPure_1428_);
lean_closure_set(v___f_1432_, 1, v_toBind_1427_);
lean_closure_set(v___f_1432_, 2, v___f_1430_);
lean_closure_set(v___f_1432_, 3, v___x_1431_);
lean_closure_set(v___f_1432_, 4, v_inst_1402_);
lean_closure_set(v___f_1432_, 5, v___x_1425_);
lean_closure_set(v___f_1432_, 6, v_a_1403_);
lean_closure_set(v___f_1432_, 7, v___f_1429_);
v___f_1433_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__5), 2, 1);
lean_closure_set(v___f_1433_, 0, v_toPure_1428_);
lean_inc_ref(v_a_1404_);
v___x_1434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1434_, 0, v_a_1404_);
lean_ctor_set(v___x_1434_, 1, v_a_1404_);
v___x_1435_ = lean_apply_2(v_toPure_1428_, lean_box(0), v___x_1434_);
v___x_1436_ = lean_apply_4(v_toBind_1427_, lean_box(0), lean_box(0), v___x_1435_, v___f_1433_);
v___x_1437_ = lean_apply_4(v_toBind_1427_, lean_box(0), lean_box(0), v___x_1436_, v___f_1432_);
return v___x_1437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___boxed(lean_object* v_inst_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg(v_inst_1438_, v_a_1439_, v_a_1440_);
lean_dec_ref(v_a_1439_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune(lean_object* v_m_1442_, lean_object* v_inst_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_){
_start:
{
lean_object* v___x_1446_; 
v___x_1446_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg(v_inst_1443_, v_a_1444_, v_a_1445_);
return v___x_1446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___boxed(lean_object* v_m_1447_, lean_object* v_inst_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_){
_start:
{
lean_object* v_res_1451_; 
v_res_1451_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune(v_m_1447_, v_inst_1448_, v_a_1449_, v_a_1450_);
lean_dec_ref(v_a_1449_);
return v_res_1451_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main___redArg___lam__0(lean_object* v_toApplicative_1452_, lean_object* v_inst_1453_, lean_object* v_a_1454_, lean_object* v_____x_1455_){
_start:
{
lean_object* v_fst_1456_; 
v_fst_1456_ = lean_ctor_get(v_____x_1455_, 0);
lean_inc(v_fst_1456_);
if (lean_obj_tag(v_fst_1456_) == 0)
{
lean_object* v_snd_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1474_; 
lean_dec_ref(v_inst_1453_);
v_snd_1457_ = lean_ctor_get(v_____x_1455_, 1);
v_isSharedCheck_1474_ = !lean_is_exclusive(v_____x_1455_);
if (v_isSharedCheck_1474_ == 0)
{
lean_object* v_unused_1475_; 
v_unused_1475_ = lean_ctor_get(v_____x_1455_, 0);
lean_dec(v_unused_1475_);
v___x_1459_ = v_____x_1455_;
v_isShared_1460_ = v_isSharedCheck_1474_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_snd_1457_);
lean_dec(v_____x_1455_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1474_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1473_; 
v_a_1461_ = lean_ctor_get(v_fst_1456_, 0);
v_isSharedCheck_1473_ = !lean_is_exclusive(v_fst_1456_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1463_ = v_fst_1456_;
v_isShared_1464_ = v_isSharedCheck_1473_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v_fst_1456_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1473_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v_toPure_1465_; lean_object* v___x_1467_; 
v_toPure_1465_ = lean_ctor_get(v_toApplicative_1452_, 1);
lean_inc(v_toPure_1465_);
lean_dec_ref(v_toApplicative_1452_);
if (v_isShared_1464_ == 0)
{
v___x_1467_ = v___x_1463_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v_a_1461_);
v___x_1467_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
lean_object* v___x_1469_; 
if (v_isShared_1460_ == 0)
{
lean_ctor_set(v___x_1459_, 0, v___x_1467_);
v___x_1469_ = v___x_1459_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v___x_1467_);
lean_ctor_set(v_reuseFailAlloc_1471_, 1, v_snd_1457_);
v___x_1469_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
lean_object* v___x_1470_; 
v___x_1470_ = lean_apply_2(v_toPure_1465_, lean_box(0), v___x_1469_);
return v___x_1470_;
}
}
}
}
}
else
{
lean_object* v_a_1476_; uint8_t v_found_1477_; 
v_a_1476_ = lean_ctor_get(v_fst_1456_, 0);
lean_inc(v_a_1476_);
lean_dec_ref_known(v_fst_1456_, 1);
v_found_1477_ = lean_ctor_get_uint8(v_a_1476_, sizeof(void*)*3);
lean_dec(v_a_1476_);
if (v_found_1477_ == 0)
{
lean_object* v_snd_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1488_; 
lean_dec_ref(v_inst_1453_);
v_snd_1478_ = lean_ctor_get(v_____x_1455_, 1);
v_isSharedCheck_1488_ = !lean_is_exclusive(v_____x_1455_);
if (v_isSharedCheck_1488_ == 0)
{
lean_object* v_unused_1489_; 
v_unused_1489_ = lean_ctor_get(v_____x_1455_, 0);
lean_dec(v_unused_1489_);
v___x_1480_ = v_____x_1455_;
v_isShared_1481_ = v_isSharedCheck_1488_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_snd_1478_);
lean_dec(v_____x_1455_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1488_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v_toPure_1482_; lean_object* v___x_1483_; lean_object* v___x_1485_; 
v_toPure_1482_ = lean_ctor_get(v_toApplicative_1452_, 1);
lean_inc(v_toPure_1482_);
lean_dec_ref(v_toApplicative_1452_);
v___x_1483_ = ((lean_object*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg___lam__0___closed__0));
if (v_isShared_1481_ == 0)
{
lean_ctor_set(v___x_1480_, 0, v___x_1483_);
v___x_1485_ = v___x_1480_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v___x_1483_);
lean_ctor_set(v_reuseFailAlloc_1487_, 1, v_snd_1478_);
v___x_1485_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
lean_object* v___x_1486_; 
v___x_1486_ = lean_apply_2(v_toPure_1482_, lean_box(0), v___x_1485_);
return v___x_1486_;
}
}
}
else
{
lean_object* v_snd_1490_; lean_object* v___x_1491_; 
lean_dec_ref(v_toApplicative_1452_);
v_snd_1490_ = lean_ctor_get(v_____x_1455_, 1);
lean_inc(v_snd_1490_);
lean_dec_ref(v_____x_1455_);
v___x_1491_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_prune___redArg(v_inst_1453_, v_a_1454_, v_snd_1490_);
return v___x_1491_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main___redArg___lam__0___boxed(lean_object* v_toApplicative_1492_, lean_object* v_inst_1493_, lean_object* v_a_1494_, lean_object* v_____x_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main___redArg___lam__0(v_toApplicative_1492_, v_inst_1493_, v_a_1494_, v_____x_1495_);
lean_dec_ref(v_a_1494_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main___redArg___lam__2(lean_object* v_toApplicative_1497_, lean_object* v_toBind_1498_, lean_object* v___f_1499_, lean_object* v_____x_1500_){
_start:
{
lean_object* v_fst_1501_; 
v_fst_1501_ = lean_ctor_get(v_____x_1500_, 0);
if (lean_obj_tag(v_fst_1501_) == 0)
{
lean_object* v_toPure_1502_; lean_object* v___x_1503_; 
lean_dec(v___f_1499_);
lean_dec(v_toBind_1498_);
v_toPure_1502_ = lean_ctor_get(v_toApplicative_1497_, 1);
lean_inc(v_toPure_1502_);
lean_dec_ref(v_toApplicative_1497_);
v___x_1503_ = lean_apply_2(v_toPure_1502_, lean_box(0), v_____x_1500_);
return v___x_1503_;
}
else
{
lean_object* v_snd_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1516_; 
v_snd_1504_ = lean_ctor_get(v_____x_1500_, 1);
v_isSharedCheck_1516_ = !lean_is_exclusive(v_____x_1500_);
if (v_isSharedCheck_1516_ == 0)
{
lean_object* v_unused_1517_; 
v_unused_1517_ = lean_ctor_get(v_____x_1500_, 0);
lean_dec(v_unused_1517_);
v___x_1506_ = v_____x_1500_;
v_isShared_1507_ = v_isSharedCheck_1516_;
goto v_resetjp_1505_;
}
else
{
lean_inc(v_snd_1504_);
lean_dec(v_____x_1500_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1516_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
lean_object* v_toPure_1508_; lean_object* v___f_1509_; lean_object* v___x_1511_; 
v_toPure_1508_ = lean_ctor_get(v_toApplicative_1497_, 1);
lean_inc_n(v_toPure_1508_, 2);
lean_dec_ref(v_toApplicative_1497_);
v___f_1509_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_tryCur___redArg___lam__5), 2, 1);
lean_closure_set(v___f_1509_, 0, v_toPure_1508_);
lean_inc(v_snd_1504_);
if (v_isShared_1507_ == 0)
{
lean_ctor_set(v___x_1506_, 0, v_snd_1504_);
v___x_1511_ = v___x_1506_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v_snd_1504_);
lean_ctor_set(v_reuseFailAlloc_1515_, 1, v_snd_1504_);
v___x_1511_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1512_ = lean_apply_2(v_toPure_1508_, lean_box(0), v___x_1511_);
lean_inc(v_toBind_1498_);
v___x_1513_ = lean_apply_4(v_toBind_1498_, lean_box(0), lean_box(0), v___x_1512_, v___f_1509_);
v___x_1514_ = lean_apply_4(v_toBind_1498_, lean_box(0), lean_box(0), v___x_1513_, v___f_1499_);
return v___x_1514_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main___redArg(lean_object* v_inst_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_){
_start:
{
lean_object* v_toApplicative_1521_; lean_object* v_toBind_1522_; lean_object* v___f_1523_; lean_object* v___f_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
v_toApplicative_1521_ = lean_ctor_get(v_inst_1518_, 0);
v_toBind_1522_ = lean_ctor_get(v_inst_1518_, 1);
lean_inc_n(v_toBind_1522_, 2);
lean_inc_ref(v_a_1519_);
lean_inc_ref(v_inst_1518_);
lean_inc_ref_n(v_toApplicative_1521_, 2);
v___f_1523_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1523_, 0, v_toApplicative_1521_);
lean_closure_set(v___f_1523_, 1, v_inst_1518_);
lean_closure_set(v___f_1523_, 2, v_a_1519_);
v___f_1524_ = lean_alloc_closure((void*)(l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1524_, 0, v_toApplicative_1521_);
lean_closure_set(v___f_1524_, 1, v_toBind_1522_);
lean_closure_set(v___f_1524_, 2, v___f_1523_);
v___x_1525_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_init___redArg(v_inst_1518_, v_a_1519_, v_a_1520_);
v___x_1526_ = lean_apply_4(v_toBind_1522_, lean_box(0), lean_box(0), v___x_1525_, v___f_1524_);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main___redArg___boxed(lean_object* v_inst_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_){
_start:
{
lean_object* v_res_1530_; 
v_res_1530_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main___redArg(v_inst_1527_, v_a_1528_, v_a_1529_);
lean_dec_ref(v_a_1528_);
return v_res_1530_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main(lean_object* v_m_1531_, lean_object* v_inst_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_){
_start:
{
lean_object* v___x_1535_; 
v___x_1535_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main___redArg(v_inst_1532_, v_a_1533_, v_a_1534_);
return v___x_1535_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main___boxed(lean_object* v_m_1536_, lean_object* v_inst_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main(v_m_1536_, v_inst_1537_, v_a_1538_, v_a_1539_);
lean_dec_ref(v_a_1538_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_search___redArg___lam__0(lean_object* v_toPure_1541_, lean_object* v_____x_1542_){
_start:
{
lean_object* v_snd_1543_; lean_object* v_fst_1544_; lean_object* v_cur_1545_; lean_object* v_numCalls_1546_; uint8_t v_found_1547_; uint8_t v___y_1549_; 
v_snd_1543_ = lean_ctor_get(v_____x_1542_, 1);
v_fst_1544_ = lean_ctor_get(v_____x_1542_, 0);
v_cur_1545_ = lean_ctor_get(v_snd_1543_, 0);
v_numCalls_1546_ = lean_ctor_get(v_snd_1543_, 2);
v_found_1547_ = lean_ctor_get_uint8(v_snd_1543_, sizeof(void*)*3);
if (v_found_1547_ == 0)
{
uint8_t v___x_1552_; 
v___x_1552_ = 0;
v___y_1549_ = v___x_1552_;
goto v___jp_1548_;
}
else
{
if (lean_obj_tag(v_fst_1544_) == 0)
{
uint8_t v___x_1553_; 
v___x_1553_ = 1;
v___y_1549_ = v___x_1553_;
goto v___jp_1548_;
}
else
{
uint8_t v___x_1554_; 
v___x_1554_ = 2;
v___y_1549_ = v___x_1554_;
goto v___jp_1548_;
}
}
v___jp_1548_:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; 
lean_inc(v_numCalls_1546_);
lean_inc_ref(v_cur_1545_);
v___x_1550_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1550_, 0, v_cur_1545_);
lean_ctor_set(v___x_1550_, 1, v_numCalls_1546_);
lean_ctor_set_uint8(v___x_1550_, sizeof(void*)*2, v___y_1549_);
v___x_1551_ = lean_apply_2(v_toPure_1541_, lean_box(0), v___x_1550_);
return v___x_1551_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_search___redArg___lam__0___boxed(lean_object* v_toPure_1555_, lean_object* v_____x_1556_){
_start:
{
lean_object* v_res_1557_; 
v_res_1557_ = l_Lean_Util_ParamMinimizer_search___redArg___lam__0(v_toPure_1555_, v_____x_1556_);
lean_dec_ref(v_____x_1556_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_search___redArg___lam__1(lean_object* v_initialMask_1560_, lean_object* v_test_1561_, lean_object* v_maxCalls_1562_, lean_object* v_inst_1563_, lean_object* v_toBind_1564_, lean_object* v___f_1565_, lean_object* v_toPure_1566_, uint8_t v_____do__lift_1567_){
_start:
{
if (v_____do__lift_1567_ == 0)
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
lean_dec(v_toPure_1566_);
lean_inc_ref(v_initialMask_1560_);
v___x_1568_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1568_, 0, v_initialMask_1560_);
lean_ctor_set(v___x_1568_, 1, v_test_1561_);
lean_ctor_set(v___x_1568_, 2, v_maxCalls_1562_);
v___x_1569_ = ((lean_object*)(l_Lean_Util_ParamMinimizer_search___redArg___lam__1___closed__0));
v___x_1570_ = lean_unsigned_to_nat(1u);
v___x_1571_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1571_, 0, v_initialMask_1560_);
lean_ctor_set(v___x_1571_, 1, v___x_1569_);
lean_ctor_set(v___x_1571_, 2, v___x_1570_);
lean_ctor_set_uint8(v___x_1571_, sizeof(void*)*3, v_____do__lift_1567_);
v___x_1572_ = l___private_Lean_Util_ParamMinimizer_0__Lean_Util_ParamMinimizer_main___redArg(v_inst_1563_, v___x_1568_, v___x_1571_);
lean_dec_ref_known(v___x_1568_, 3);
v___x_1573_ = lean_apply_4(v_toBind_1564_, lean_box(0), lean_box(0), v___x_1572_, v___f_1565_);
return v___x_1573_;
}
else
{
uint8_t v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; 
lean_dec(v___f_1565_);
lean_dec(v_toBind_1564_);
lean_dec_ref(v_inst_1563_);
lean_dec(v_maxCalls_1562_);
lean_dec(v_test_1561_);
v___x_1574_ = 2;
v___x_1575_ = lean_unsigned_to_nat(1u);
v___x_1576_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1576_, 0, v_initialMask_1560_);
lean_ctor_set(v___x_1576_, 1, v___x_1575_);
lean_ctor_set_uint8(v___x_1576_, sizeof(void*)*2, v___x_1574_);
v___x_1577_ = lean_apply_2(v_toPure_1566_, lean_box(0), v___x_1576_);
return v___x_1577_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_search___redArg___lam__1___boxed(lean_object* v_initialMask_1578_, lean_object* v_test_1579_, lean_object* v_maxCalls_1580_, lean_object* v_inst_1581_, lean_object* v_toBind_1582_, lean_object* v___f_1583_, lean_object* v_toPure_1584_, lean_object* v_____do__lift_1585_){
_start:
{
uint8_t v_____do__lift_218__boxed_1586_; lean_object* v_res_1587_; 
v_____do__lift_218__boxed_1586_ = lean_unbox(v_____do__lift_1585_);
v_res_1587_ = l_Lean_Util_ParamMinimizer_search___redArg___lam__1(v_initialMask_1578_, v_test_1579_, v_maxCalls_1580_, v_inst_1581_, v_toBind_1582_, v___f_1583_, v_toPure_1584_, v_____do__lift_218__boxed_1586_);
return v_res_1587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_search___redArg(lean_object* v_inst_1588_, lean_object* v_initialMask_1589_, lean_object* v_test_1590_, lean_object* v_maxCalls_1591_){
_start:
{
lean_object* v_toApplicative_1592_; lean_object* v_toBind_1593_; lean_object* v_toPure_1594_; lean_object* v___x_1595_; lean_object* v___f_1596_; lean_object* v___f_1597_; lean_object* v___x_1598_; 
v_toApplicative_1592_ = lean_ctor_get(v_inst_1588_, 0);
v_toBind_1593_ = lean_ctor_get(v_inst_1588_, 1);
lean_inc_n(v_toBind_1593_, 2);
v_toPure_1594_ = lean_ctor_get(v_toApplicative_1592_, 1);
lean_inc_n(v_toPure_1594_, 2);
lean_inc(v_test_1590_);
lean_inc_ref(v_initialMask_1589_);
v___x_1595_ = lean_apply_1(v_test_1590_, v_initialMask_1589_);
v___f_1596_ = lean_alloc_closure((void*)(l_Lean_Util_ParamMinimizer_search___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1596_, 0, v_toPure_1594_);
v___f_1597_ = lean_alloc_closure((void*)(l_Lean_Util_ParamMinimizer_search___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_1597_, 0, v_initialMask_1589_);
lean_closure_set(v___f_1597_, 1, v_test_1590_);
lean_closure_set(v___f_1597_, 2, v_maxCalls_1591_);
lean_closure_set(v___f_1597_, 3, v_inst_1588_);
lean_closure_set(v___f_1597_, 4, v_toBind_1593_);
lean_closure_set(v___f_1597_, 5, v___f_1596_);
lean_closure_set(v___f_1597_, 6, v_toPure_1594_);
v___x_1598_ = lean_apply_4(v_toBind_1593_, lean_box(0), lean_box(0), v___x_1595_, v___f_1597_);
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Util_ParamMinimizer_search(lean_object* v_m_1599_, lean_object* v_inst_1600_, lean_object* v_initialMask_1601_, lean_object* v_test_1602_, lean_object* v_maxCalls_1603_){
_start:
{
lean_object* v___x_1604_; 
v___x_1604_ = l_Lean_Util_ParamMinimizer_search___redArg(v_inst_1600_, v_initialMask_1601_, v_test_1602_, v_maxCalls_1603_);
return v___x_1604_;
}
}
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_ParamMinimizer(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Util_ParamMinimizer_instInhabitedStatus_default = _init_l_Lean_Util_ParamMinimizer_instInhabitedStatus_default();
l_Lean_Util_ParamMinimizer_instInhabitedStatus = _init_l_Lean_Util_ParamMinimizer_instInhabitedStatus();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_ParamMinimizer(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_ParamMinimizer(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ParamMinimizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_ParamMinimizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_ParamMinimizer(builtin);
}
#ifdef __cplusplus
}
#endif
