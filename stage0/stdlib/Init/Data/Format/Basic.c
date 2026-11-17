// Lean compiler output
// Module: Init.Data.Format.Basic
// Imports: public import Init.Data.Int.Basic public import Init.Data.String.Bootstrap import Init.Control.State import Init.Data.Nat.Bitwise.Basic
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
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* lean_string_posof(lean_object*, uint32_t);
lean_object* lean_string_offsetofpos(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_string_pushn(lean_object*, uint32_t, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_get(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_allOrNone_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_allOrNone_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_allOrNone_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_allOrNone_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_fill_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_fill_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_fill_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_fill_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Format_instInhabitedFlattenBehavior_default;
LEAN_EXPORT uint8_t l_Std_Format_instInhabitedFlattenBehavior;
LEAN_EXPORT uint8_t l_Std_Format_instBEqFlattenBehavior_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Std_Format_instBEqFlattenBehavior_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Format_instBEqFlattenBehavior___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Format_instBEqFlattenBehavior_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Format_instBEqFlattenBehavior___closed__0 = (const lean_object*)&l_Std_Format_instBEqFlattenBehavior___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Format_instBEqFlattenBehavior = (const lean_object*)&l_Std_Format_instBEqFlattenBehavior___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Format_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_nil_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_nil_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_line_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_line_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_align_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_align_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_text_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_text_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_nest_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_nest_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_append_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_append_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_group_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_group_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_tag_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_tag_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_instInhabitedFormat_default;
LEAN_EXPORT lean_object* l_Std_instInhabitedFormat;
static const lean_string_object l_Std_Format_isEmpty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Format_isEmpty___closed__0 = (const lean_object*)&l_Std_Format_isEmpty___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Format_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_fill(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_instAppend___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Std_Format_instAppend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Format_instAppend___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Format_instAppend___closed__0 = (const lean_object*)&l_Std_Format_instAppend___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Format_instAppend = (const lean_object*)&l_Std_Format_instAppend___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Format_instCoeString___lam__0(lean_object*);
static const lean_closure_object l_Std_Format_instCoeString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Format_instCoeString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Format_instCoeString___closed__0 = (const lean_object*)&l_Std_Format_instCoeString___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Format_instCoeString = (const lean_object*)&l_Std_Format_instCoeString___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_join_spec__0(lean_object*, lean_object*);
static const lean_ctor_object l_Std_Format_join___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Format_isEmpty___closed__0_value)}};
static const lean_object* l_Std_Format_join___closed__0 = (const lean_object*)&l_Std_Format_join___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Format_join(lean_object*);
LEAN_EXPORT uint8_t l_Std_Format_isNil(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_isNil___boxed(lean_object*);
static const lean_ctor_object l_Std_Format_instInhabitedSpaceResult_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Format_instInhabitedSpaceResult_default___closed__0 = (const lean_object*)&l_Std_Format_instInhabitedSpaceResult_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Format_instInhabitedSpaceResult_default = (const lean_object*)&l_Std_Format_instInhabitedSpaceResult_default___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instInhabitedSpaceResult = (const lean_object*)&l_Std_Format_instInhabitedSpaceResult_default___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_merge(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_merge___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_spec__0(lean_object*);
static const lean_ctor_object l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine___closed__0 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_ctorElim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_allow_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_allow_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_allow_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_allow_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_disallow_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_disallow_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_disallow_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_disallow_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Format_instBEqFlattenAllowability_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_instBEqFlattenAllowability_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Format_instBEqFlattenAllowability___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Format_instBEqFlattenAllowability_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Format_instBEqFlattenAllowability___closed__0 = (const lean_object*)&l_Std_Format_instBEqFlattenAllowability___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Format_instBEqFlattenAllowability = (const lean_object*)&l_Std_Format_instBEqFlattenAllowability___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Format_FlattenAllowability_shouldFlatten(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_shouldFlatten___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "unreachable"};
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__6___closed__0 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_prettyM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_prettyM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_bracket(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Format_paren___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Std_Format_paren___closed__0 = (const lean_object*)&l_Std_Format_paren___closed__0_value;
static const lean_string_object l_Std_Format_paren___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Std_Format_paren___closed__1 = (const lean_object*)&l_Std_Format_paren___closed__1_value;
static lean_once_cell_t l_Std_Format_paren___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Format_paren___closed__2;
static lean_once_cell_t l_Std_Format_paren___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Format_paren___closed__3;
static const lean_ctor_object l_Std_Format_paren___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Format_paren___closed__0_value)}};
static const lean_object* l_Std_Format_paren___closed__4 = (const lean_object*)&l_Std_Format_paren___closed__4_value;
static const lean_ctor_object l_Std_Format_paren___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Format_paren___closed__1_value)}};
static const lean_object* l_Std_Format_paren___closed__5 = (const lean_object*)&l_Std_Format_paren___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Format_paren(lean_object*);
static const lean_string_object l_Std_Format_sbracket___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Std_Format_sbracket___closed__0 = (const lean_object*)&l_Std_Format_sbracket___closed__0_value;
static const lean_string_object l_Std_Format_sbracket___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Std_Format_sbracket___closed__1 = (const lean_object*)&l_Std_Format_sbracket___closed__1_value;
static lean_once_cell_t l_Std_Format_sbracket___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Format_sbracket___closed__2;
static lean_once_cell_t l_Std_Format_sbracket___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Format_sbracket___closed__3;
static const lean_ctor_object l_Std_Format_sbracket___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Format_sbracket___closed__0_value)}};
static const lean_object* l_Std_Format_sbracket___closed__4 = (const lean_object*)&l_Std_Format_sbracket___closed__4_value;
static const lean_ctor_object l_Std_Format_sbracket___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Format_sbracket___closed__1_value)}};
static const lean_object* l_Std_Format_sbracket___closed__5 = (const lean_object*)&l_Std_Format_sbracket___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Format_sbracket(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_bracketFill(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_defIndent;
LEAN_EXPORT uint8_t l_Std_Format_defUnicode;
LEAN_EXPORT lean_object* l_Std_Format_defWidth;
static lean_once_cell_t l_Std_Format_nestD___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Format_nestD___closed__0;
LEAN_EXPORT lean_object* l_Std_Format_nestD(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_indentD(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__1___closed__0 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__3___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__0 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__0_value;
static const lean_closure_object l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__1 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__1_value;
static const lean_closure_object l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__2 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__2_value;
static const lean_closure_object l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__3 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__3_value;
static const lean_closure_object l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__4 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__4_value;
static const lean_closure_object l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__5 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__5_value;
static const lean_closure_object l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__6 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__6_value;
static const lean_closure_object l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__7 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__7_value;
static const lean_closure_object l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__8 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__8_value;
static const lean_closure_object l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__9 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__9_value;
static const lean_closure_object l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__10 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__4_value),((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__5_value)}};
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__11 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__11_value),((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__6_value),((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__7_value),((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__8_value),((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__9_value)}};
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__12 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__12_value),((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__10_value)}};
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__13 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__13_value;
static const lean_closure_object l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_get, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__13_value)} };
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__14 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__14_value;
static const lean_closure_object l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_bind, .m_arity = 8, .m_num_fixed = 7, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__14_value),((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__2_value)} };
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__15 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__15_value;
static const lean_ctor_object l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__0_value),((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__1_value),((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__15_value),((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__3_value),((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__3_value)}};
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__16 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__16_value;
LEAN_EXPORT const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__16_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__1, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__13_value)} };
static const lean_object* l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__0 = (const lean_object*)&l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__4, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__13_value)} };
static const lean_object* l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__1 = (const lean_object*)&l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__7, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__13_value)} };
static const lean_object* l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__2 = (const lean_object*)&l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__9, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__13_value)} };
static const lean_object* l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__3 = (const lean_object*)&l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_map, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__13_value)} };
static const lean_object* l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__4 = (const lean_object*)&l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_pure, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__13_value)} };
static const lean_object* l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__5 = (const lean_object*)&l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_bind, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___closed__13_value)} };
static const lean_object* l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__6 = (const lean_object*)&l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_prettyM___at___00Std_Format_pretty_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_prettyM___at___00Std_Format_pretty_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_pretty___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_instToFormatFormat___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_instToFormatFormat___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_instToFormatFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_instToFormatFormat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_instToFormatFormat___closed__0 = (const lean_object*)&l_Std_instToFormatFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_instToFormatFormat = (const lean_object*)&l_Std_instToFormatFormat___closed__0_value;
LEAN_EXPORT lean_object* l_Std_instToFormatString___lam__0(lean_object*);
static const lean_closure_object l_Std_instToFormatString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_instToFormatString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_instToFormatString___closed__0 = (const lean_object*)&l_Std_instToFormatString___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_instToFormatString = (const lean_object*)&l_Std_instToFormatString___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Format_joinSep___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_prefixJoin___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_prefixJoin___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_prefixJoin(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSuffix___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSuffix___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSuffix(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_ctorIdx___impl(uint8_t v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_box(v_x_1_);
v___x_3_ = lean_obj_tag_nat(v___x_2_);
lean_dec(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_ctorIdx___impl___boxed(lean_object* v_x_4_){
_start:
{
uint8_t v_x_4__boxed_5_; lean_object* v_res_6_; 
v_x_4__boxed_5_ = lean_unbox(v_x_4_);
v_res_6_ = l_Std_Format_FlattenBehavior_ctorIdx___impl(v_x_4__boxed_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_ctorElim___redArg(lean_object* v_k_7_){
_start:
{
lean_inc(v_k_7_);
return v_k_7_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_ctorElim___redArg___boxed(lean_object* v_k_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Std_Format_FlattenBehavior_ctorElim___redArg(v_k_8_);
lean_dec(v_k_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, uint8_t v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_inc(v_k_14_);
return v_k_14_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
uint8_t v_t_boxed_20_; lean_object* v_res_21_; 
v_t_boxed_20_ = lean_unbox(v_t_17_);
v_res_21_ = l_Std_Format_FlattenBehavior_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_boxed_20_, v_h_18_, v_k_19_);
lean_dec(v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_allOrNone_elim___redArg(lean_object* v_allOrNone_22_){
_start:
{
lean_inc(v_allOrNone_22_);
return v_allOrNone_22_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_allOrNone_elim___redArg___boxed(lean_object* v_allOrNone_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Std_Format_FlattenBehavior_allOrNone_elim___redArg(v_allOrNone_23_);
lean_dec(v_allOrNone_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_allOrNone_elim(lean_object* v_motive_25_, uint8_t v_t_26_, lean_object* v_h_27_, lean_object* v_allOrNone_28_){
_start:
{
lean_inc(v_allOrNone_28_);
return v_allOrNone_28_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_allOrNone_elim___boxed(lean_object* v_motive_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_allOrNone_32_){
_start:
{
uint8_t v_t_boxed_33_; lean_object* v_res_34_; 
v_t_boxed_33_ = lean_unbox(v_t_30_);
v_res_34_ = l_Std_Format_FlattenBehavior_allOrNone_elim(v_motive_29_, v_t_boxed_33_, v_h_31_, v_allOrNone_32_);
lean_dec(v_allOrNone_32_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_fill_elim___redArg(lean_object* v_fill_35_){
_start:
{
lean_inc(v_fill_35_);
return v_fill_35_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_fill_elim___redArg___boxed(lean_object* v_fill_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Std_Format_FlattenBehavior_fill_elim___redArg(v_fill_36_);
lean_dec(v_fill_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_fill_elim(lean_object* v_motive_38_, uint8_t v_t_39_, lean_object* v_h_40_, lean_object* v_fill_41_){
_start:
{
lean_inc(v_fill_41_);
return v_fill_41_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenBehavior_fill_elim___boxed(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_fill_45_){
_start:
{
uint8_t v_t_boxed_46_; lean_object* v_res_47_; 
v_t_boxed_46_ = lean_unbox(v_t_43_);
v_res_47_ = l_Std_Format_FlattenBehavior_fill_elim(v_motive_42_, v_t_boxed_46_, v_h_44_, v_fill_45_);
lean_dec(v_fill_45_);
return v_res_47_;
}
}
static uint8_t _init_l_Std_Format_instInhabitedFlattenBehavior_default(void){
_start:
{
uint8_t v___x_48_; 
v___x_48_ = 0;
return v___x_48_;
}
}
static uint8_t _init_l_Std_Format_instInhabitedFlattenBehavior(void){
_start:
{
uint8_t v___x_49_; 
v___x_49_ = 0;
return v___x_49_;
}
}
LEAN_EXPORT uint8_t l_Std_Format_instBEqFlattenBehavior_beq(uint8_t v_x_50_, uint8_t v_y_51_){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; uint8_t v___x_56_; 
v___x_52_ = lean_box(v_x_50_);
v___x_53_ = lean_obj_tag_nat(v___x_52_);
lean_dec(v___x_52_);
v___x_54_ = lean_box(v_y_51_);
v___x_55_ = lean_obj_tag_nat(v___x_54_);
lean_dec(v___x_54_);
v___x_56_ = lean_nat_dec_eq(v___x_53_, v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_instBEqFlattenBehavior_beq___boxed(lean_object* v_x_57_, lean_object* v_y_58_){
_start:
{
uint8_t v_x_24__boxed_59_; uint8_t v_y_25__boxed_60_; uint8_t v_res_61_; lean_object* v_r_62_; 
v_x_24__boxed_59_ = lean_unbox(v_x_57_);
v_y_25__boxed_60_ = lean_unbox(v_y_58_);
v_res_61_ = l_Std_Format_instBEqFlattenBehavior_beq(v_x_24__boxed_59_, v_y_25__boxed_60_);
v_r_62_ = lean_box(v_res_61_);
return v_r_62_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_ctorIdx___impl(lean_object* v_x_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = lean_obj_tag_nat(v_x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_ctorIdx___impl___boxed(lean_object* v_x_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_Std_Format_ctorIdx___impl(v_x_67_);
lean_dec(v_x_67_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_ctorElim___redArg(lean_object* v_t_69_, lean_object* v_k_70_){
_start:
{
switch(lean_obj_tag(v_t_69_))
{
case 2:
{
uint8_t v_force_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v_force_71_ = lean_ctor_get_uint8(v_t_69_, 0);
lean_dec_ref_known(v_t_69_, 0);
v___x_72_ = lean_box(v_force_71_);
v___x_73_ = lean_apply_1(v_k_70_, v___x_72_);
return v___x_73_;
}
case 3:
{
lean_object* v_a_74_; lean_object* v___x_75_; 
v_a_74_ = lean_ctor_get(v_t_69_, 0);
lean_inc_ref(v_a_74_);
lean_dec_ref_known(v_t_69_, 1);
v___x_75_ = lean_apply_1(v_k_70_, v_a_74_);
return v___x_75_;
}
case 4:
{
lean_object* v_indent_76_; lean_object* v_f_77_; lean_object* v___x_78_; 
v_indent_76_ = lean_ctor_get(v_t_69_, 0);
lean_inc(v_indent_76_);
v_f_77_ = lean_ctor_get(v_t_69_, 1);
lean_inc(v_f_77_);
lean_dec_ref_known(v_t_69_, 2);
v___x_78_ = lean_apply_2(v_k_70_, v_indent_76_, v_f_77_);
return v___x_78_;
}
case 5:
{
lean_object* v_a_79_; lean_object* v_a_80_; lean_object* v___x_81_; 
v_a_79_ = lean_ctor_get(v_t_69_, 0);
lean_inc(v_a_79_);
v_a_80_ = lean_ctor_get(v_t_69_, 1);
lean_inc(v_a_80_);
lean_dec_ref_known(v_t_69_, 2);
v___x_81_ = lean_apply_2(v_k_70_, v_a_79_, v_a_80_);
return v___x_81_;
}
case 6:
{
lean_object* v_a_82_; uint8_t v_behavior_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v_a_82_ = lean_ctor_get(v_t_69_, 0);
lean_inc(v_a_82_);
v_behavior_83_ = lean_ctor_get_uint8(v_t_69_, sizeof(void*)*1);
lean_dec_ref_known(v_t_69_, 1);
v___x_84_ = lean_box(v_behavior_83_);
v___x_85_ = lean_apply_2(v_k_70_, v_a_82_, v___x_84_);
return v___x_85_;
}
case 7:
{
lean_object* v_a_86_; lean_object* v_a_87_; lean_object* v___x_88_; 
v_a_86_ = lean_ctor_get(v_t_69_, 0);
lean_inc(v_a_86_);
v_a_87_ = lean_ctor_get(v_t_69_, 1);
lean_inc(v_a_87_);
lean_dec_ref_known(v_t_69_, 2);
v___x_88_ = lean_apply_2(v_k_70_, v_a_86_, v_a_87_);
return v___x_88_;
}
default: 
{
lean_dec(v_t_69_);
return v_k_70_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_ctorElim(lean_object* v_motive_89_, lean_object* v_ctorIdx_90_, lean_object* v_t_91_, lean_object* v_h_92_, lean_object* v_k_93_){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = l_Std_Format_ctorElim___redArg(v_t_91_, v_k_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_ctorElim___boxed(lean_object* v_motive_95_, lean_object* v_ctorIdx_96_, lean_object* v_t_97_, lean_object* v_h_98_, lean_object* v_k_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l_Std_Format_ctorElim(v_motive_95_, v_ctorIdx_96_, v_t_97_, v_h_98_, v_k_99_);
lean_dec(v_ctorIdx_96_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_nil_elim___redArg(lean_object* v_t_101_, lean_object* v_nil_102_){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = l_Std_Format_ctorElim___redArg(v_t_101_, v_nil_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_nil_elim(lean_object* v_motive_104_, lean_object* v_t_105_, lean_object* v_h_106_, lean_object* v_nil_107_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = l_Std_Format_ctorElim___redArg(v_t_105_, v_nil_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_line_elim___redArg(lean_object* v_t_109_, lean_object* v_line_110_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l_Std_Format_ctorElim___redArg(v_t_109_, v_line_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_line_elim(lean_object* v_motive_112_, lean_object* v_t_113_, lean_object* v_h_114_, lean_object* v_line_115_){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = l_Std_Format_ctorElim___redArg(v_t_113_, v_line_115_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_align_elim___redArg(lean_object* v_t_117_, lean_object* v_align_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = l_Std_Format_ctorElim___redArg(v_t_117_, v_align_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_align_elim(lean_object* v_motive_120_, lean_object* v_t_121_, lean_object* v_h_122_, lean_object* v_align_123_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Std_Format_ctorElim___redArg(v_t_121_, v_align_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_text_elim___redArg(lean_object* v_t_125_, lean_object* v_text_126_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = l_Std_Format_ctorElim___redArg(v_t_125_, v_text_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_text_elim(lean_object* v_motive_128_, lean_object* v_t_129_, lean_object* v_h_130_, lean_object* v_text_131_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = l_Std_Format_ctorElim___redArg(v_t_129_, v_text_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_nest_elim___redArg(lean_object* v_t_133_, lean_object* v_nest_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_Std_Format_ctorElim___redArg(v_t_133_, v_nest_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_nest_elim(lean_object* v_motive_136_, lean_object* v_t_137_, lean_object* v_h_138_, lean_object* v_nest_139_){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = l_Std_Format_ctorElim___redArg(v_t_137_, v_nest_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_append_elim___redArg(lean_object* v_t_141_, lean_object* v_append_142_){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = l_Std_Format_ctorElim___redArg(v_t_141_, v_append_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_append_elim(lean_object* v_motive_144_, lean_object* v_t_145_, lean_object* v_h_146_, lean_object* v_append_147_){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = l_Std_Format_ctorElim___redArg(v_t_145_, v_append_147_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_group_elim___redArg(lean_object* v_t_149_, lean_object* v_group_150_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = l_Std_Format_ctorElim___redArg(v_t_149_, v_group_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_group_elim(lean_object* v_motive_152_, lean_object* v_t_153_, lean_object* v_h_154_, lean_object* v_group_155_){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = l_Std_Format_ctorElim___redArg(v_t_153_, v_group_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_tag_elim___redArg(lean_object* v_t_157_, lean_object* v_tag_158_){
_start:
{
lean_object* v___x_159_; 
v___x_159_ = l_Std_Format_ctorElim___redArg(v_t_157_, v_tag_158_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_tag_elim(lean_object* v_motive_160_, lean_object* v_t_161_, lean_object* v_h_162_, lean_object* v_tag_163_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = l_Std_Format_ctorElim___redArg(v_t_161_, v_tag_163_);
return v___x_164_;
}
}
static lean_object* _init_l_Std_instInhabitedFormat_default(void){
_start:
{
lean_object* v___x_165_; 
v___x_165_ = lean_box(0);
return v___x_165_;
}
}
static lean_object* _init_l_Std_instInhabitedFormat(void){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = lean_box(0);
return v___x_166_;
}
}
LEAN_EXPORT uint8_t l_Std_Format_isEmpty(lean_object* v_x_168_){
_start:
{
switch(lean_obj_tag(v_x_168_))
{
case 1:
{
uint8_t v___x_169_; 
v___x_169_ = 0;
return v___x_169_;
}
case 3:
{
lean_object* v_a_170_; lean_object* v___x_171_; uint8_t v___x_172_; 
v_a_170_ = lean_ctor_get(v_x_168_, 0);
v___x_171_ = ((lean_object*)(l_Std_Format_isEmpty___closed__0));
v___x_172_ = lean_string_dec_eq(v_a_170_, v___x_171_);
return v___x_172_;
}
case 4:
{
lean_object* v_f_173_; 
v_f_173_ = lean_ctor_get(v_x_168_, 1);
v_x_168_ = v_f_173_;
goto _start;
}
case 5:
{
lean_object* v_a_175_; lean_object* v_a_176_; uint8_t v___x_177_; 
v_a_175_ = lean_ctor_get(v_x_168_, 0);
v_a_176_ = lean_ctor_get(v_x_168_, 1);
v___x_177_ = l_Std_Format_isEmpty(v_a_175_);
if (v___x_177_ == 0)
{
return v___x_177_;
}
else
{
v_x_168_ = v_a_176_;
goto _start;
}
}
case 6:
{
lean_object* v_a_179_; 
v_a_179_ = lean_ctor_get(v_x_168_, 0);
v_x_168_ = v_a_179_;
goto _start;
}
case 7:
{
lean_object* v_a_181_; 
v_a_181_ = lean_ctor_get(v_x_168_, 1);
v_x_168_ = v_a_181_;
goto _start;
}
default: 
{
uint8_t v___x_183_; 
v___x_183_ = 1;
return v___x_183_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_isEmpty___boxed(lean_object* v_x_184_){
_start:
{
uint8_t v_res_185_; lean_object* v_r_186_; 
v_res_185_ = l_Std_Format_isEmpty(v_x_184_);
lean_dec(v_x_184_);
v_r_186_ = lean_box(v_res_185_);
return v_r_186_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_fill(lean_object* v_f_187_){
_start:
{
uint8_t v___x_188_; lean_object* v___x_189_; 
v___x_188_ = 1;
v___x_189_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_189_, 0, v_f_187_);
lean_ctor_set_uint8(v___x_189_, sizeof(void*)*1, v___x_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_instAppend___lam__0(lean_object* v_a_190_, lean_object* v_a_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_192_, 0, v_a_190_);
lean_ctor_set(v___x_192_, 1, v_a_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_instCoeString___lam__0(lean_object* v_a_195_){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_196_, 0, v_a_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_join_spec__0(lean_object* v_x_199_, lean_object* v_x_200_){
_start:
{
if (lean_obj_tag(v_x_200_) == 0)
{
return v_x_199_;
}
else
{
lean_object* v_head_201_; lean_object* v_tail_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_210_; 
v_head_201_ = lean_ctor_get(v_x_200_, 0);
v_tail_202_ = lean_ctor_get(v_x_200_, 1);
v_isSharedCheck_210_ = !lean_is_exclusive(v_x_200_);
if (v_isSharedCheck_210_ == 0)
{
v___x_204_ = v_x_200_;
v_isShared_205_ = v_isSharedCheck_210_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_tail_202_);
lean_inc(v_head_201_);
lean_dec(v_x_200_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_210_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_207_; 
if (v_isShared_205_ == 0)
{
lean_ctor_set_tag(v___x_204_, 5);
lean_ctor_set(v___x_204_, 1, v_head_201_);
lean_ctor_set(v___x_204_, 0, v_x_199_);
v___x_207_ = v___x_204_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_x_199_);
lean_ctor_set(v_reuseFailAlloc_209_, 1, v_head_201_);
v___x_207_ = v_reuseFailAlloc_209_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
v_x_199_ = v___x_207_;
v_x_200_ = v_tail_202_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_join(lean_object* v_xs_213_){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = ((lean_object*)(l_Std_Format_join___closed__0));
v___x_215_ = l_List_foldl___at___00Std_Format_join_spec__0(v___x_214_, v_xs_213_);
return v___x_215_;
}
}
LEAN_EXPORT uint8_t l_Std_Format_isNil(lean_object* v_x_216_){
_start:
{
if (lean_obj_tag(v_x_216_) == 0)
{
uint8_t v___x_217_; 
v___x_217_ = 1;
return v___x_217_;
}
else
{
uint8_t v___x_218_; 
v___x_218_ = 0;
return v___x_218_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_isNil___boxed(lean_object* v_x_219_){
_start:
{
uint8_t v_res_220_; lean_object* v_r_221_; 
v_res_220_ = l_Std_Format_isNil(v_x_219_);
lean_dec(v_x_219_);
v_r_221_ = lean_box(v_res_220_);
return v_r_221_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_merge(lean_object* v_w_227_, lean_object* v_r_u2081_228_, lean_object* v_r_u2082_229_){
_start:
{
uint8_t v_foundLine_230_; lean_object* v_space_231_; uint8_t v___x_232_; 
v_foundLine_230_ = lean_ctor_get_uint8(v_r_u2081_228_, sizeof(void*)*1);
v_space_231_ = lean_ctor_get(v_r_u2081_228_, 0);
v___x_232_ = lean_nat_dec_lt(v_w_227_, v_space_231_);
if (v___x_232_ == 0)
{
if (v_foundLine_230_ == 0)
{
lean_object* v___x_233_; lean_object* v_r_u2082_234_; uint8_t v_foundLine_235_; uint8_t v_foundFlattenedHardLine_236_; lean_object* v_space_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_245_; 
v___x_233_ = lean_nat_sub(v_w_227_, v_space_231_);
v_r_u2082_234_ = lean_apply_1(v_r_u2082_229_, v___x_233_);
v_foundLine_235_ = lean_ctor_get_uint8(v_r_u2082_234_, sizeof(void*)*1);
v_foundFlattenedHardLine_236_ = lean_ctor_get_uint8(v_r_u2082_234_, sizeof(void*)*1 + 1);
v_space_237_ = lean_ctor_get(v_r_u2082_234_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v_r_u2082_234_);
if (v_isSharedCheck_245_ == 0)
{
v___x_239_ = v_r_u2082_234_;
v_isShared_240_ = v_isSharedCheck_245_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_space_237_);
lean_dec(v_r_u2082_234_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_245_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_241_; lean_object* v___x_243_; 
v___x_241_ = lean_nat_add(v_space_231_, v_space_237_);
lean_dec(v_space_237_);
if (v_isShared_240_ == 0)
{
lean_ctor_set(v___x_239_, 0, v___x_241_);
v___x_243_ = v___x_239_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v___x_241_);
lean_ctor_set_uint8(v_reuseFailAlloc_244_, sizeof(void*)*1, v_foundLine_235_);
lean_ctor_set_uint8(v_reuseFailAlloc_244_, sizeof(void*)*1 + 1, v_foundFlattenedHardLine_236_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
}
else
{
lean_dec_ref(v_r_u2082_229_);
lean_inc_ref(v_r_u2081_228_);
return v_r_u2081_228_;
}
}
else
{
lean_dec_ref(v_r_u2082_229_);
lean_inc_ref(v_r_u2081_228_);
return v_r_u2081_228_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_merge___boxed(lean_object* v_w_246_, lean_object* v_r_u2081_247_, lean_object* v_r_u2082_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l___private_Init_Data_Format_Basic_0__Std_Format_merge(v_w_246_, v_r_u2081_247_, v_r_u2082_248_);
lean_dec_ref(v_r_u2081_247_);
lean_dec(v_w_246_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_spec__0(lean_object* v_a_250_){
_start:
{
lean_object* v___x_251_; 
v___x_251_ = lean_nat_to_int(v_a_250_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine(lean_object* v_x_255_, uint8_t v_x_256_, lean_object* v_x_257_, lean_object* v_x_258_){
_start:
{
switch(lean_obj_tag(v_x_255_))
{
case 0:
{
lean_object* v___x_269_; 
lean_dec(v_x_258_);
lean_dec(v_x_257_);
v___x_269_ = ((lean_object*)(l_Std_Format_instInhabitedSpaceResult_default___closed__0));
return v___x_269_;
}
case 1:
{
lean_dec(v_x_258_);
lean_dec(v_x_257_);
if (v_x_256_ == 0)
{
uint8_t v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_270_ = 1;
v___x_271_ = lean_unsigned_to_nat(0u);
v___x_272_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_272_, 0, v___x_271_);
lean_ctor_set_uint8(v___x_272_, sizeof(void*)*1, v___x_270_);
lean_ctor_set_uint8(v___x_272_, sizeof(void*)*1 + 1, v_x_256_);
return v___x_272_;
}
else
{
lean_object* v___x_273_; 
v___x_273_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine___closed__0));
return v___x_273_;
}
}
case 2:
{
if (v_x_256_ == 0)
{
lean_dec_ref_known(v_x_255_, 0);
goto v___jp_259_;
}
else
{
uint8_t v_force_274_; 
v_force_274_ = lean_ctor_get_uint8(v_x_255_, 0);
lean_dec_ref_known(v_x_255_, 0);
if (v_force_274_ == 0)
{
lean_object* v___x_275_; lean_object* v___x_276_; 
lean_dec(v_x_258_);
lean_dec(v_x_257_);
v___x_275_ = lean_unsigned_to_nat(0u);
v___x_276_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_276_, 0, v___x_275_);
lean_ctor_set_uint8(v___x_276_, sizeof(void*)*1, v_force_274_);
lean_ctor_set_uint8(v___x_276_, sizeof(void*)*1 + 1, v_force_274_);
return v___x_276_;
}
else
{
goto v___jp_259_;
}
}
}
case 3:
{
lean_object* v_a_277_; uint32_t v___x_278_; lean_object* v_p_279_; lean_object* v_off_280_; uint8_t v___y_282_; lean_object* v___x_285_; uint8_t v_decide_286_; 
lean_dec(v_x_258_);
lean_dec(v_x_257_);
v_a_277_ = lean_ctor_get(v_x_255_, 0);
lean_inc_ref_n(v_a_277_, 3);
lean_dec_ref_known(v_x_255_, 1);
v___x_278_ = 10;
v_p_279_ = lean_string_posof(v_a_277_, v___x_278_);
lean_inc(v_p_279_);
v_off_280_ = lean_string_offsetofpos(v_a_277_, v_p_279_);
v___x_285_ = lean_string_utf8_byte_size(v_a_277_);
lean_dec_ref(v_a_277_);
v_decide_286_ = lean_nat_dec_eq(v_p_279_, v___x_285_);
lean_dec(v_p_279_);
if (v_decide_286_ == 0)
{
uint8_t v___x_287_; 
v___x_287_ = 1;
v___y_282_ = v___x_287_;
goto v___jp_281_;
}
else
{
uint8_t v___x_288_; 
v___x_288_ = 0;
v___y_282_ = v___x_288_;
goto v___jp_281_;
}
v___jp_281_:
{
if (v_x_256_ == 0)
{
lean_object* v___x_283_; 
v___x_283_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_283_, 0, v_off_280_);
lean_ctor_set_uint8(v___x_283_, sizeof(void*)*1, v___y_282_);
lean_ctor_set_uint8(v___x_283_, sizeof(void*)*1 + 1, v_x_256_);
return v___x_283_;
}
else
{
lean_object* v___x_284_; 
v___x_284_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_284_, 0, v_off_280_);
lean_ctor_set_uint8(v___x_284_, sizeof(void*)*1, v___y_282_);
lean_ctor_set_uint8(v___x_284_, sizeof(void*)*1 + 1, v___y_282_);
return v___x_284_;
}
}
}
case 4:
{
lean_object* v_indent_289_; lean_object* v_f_290_; lean_object* v___x_291_; 
v_indent_289_ = lean_ctor_get(v_x_255_, 0);
lean_inc(v_indent_289_);
v_f_290_ = lean_ctor_get(v_x_255_, 1);
lean_inc(v_f_290_);
lean_dec_ref_known(v_x_255_, 2);
v___x_291_ = lean_int_sub(v_x_257_, v_indent_289_);
lean_dec(v_indent_289_);
lean_dec(v_x_257_);
v_x_255_ = v_f_290_;
v_x_257_ = v___x_291_;
goto _start;
}
case 5:
{
lean_object* v_a_293_; lean_object* v_a_294_; lean_object* v___x_295_; uint8_t v_foundLine_296_; lean_object* v_space_297_; uint8_t v___x_298_; 
v_a_293_ = lean_ctor_get(v_x_255_, 0);
lean_inc(v_a_293_);
v_a_294_ = lean_ctor_get(v_x_255_, 1);
lean_inc(v_a_294_);
lean_dec_ref_known(v_x_255_, 2);
lean_inc(v_x_258_);
lean_inc(v_x_257_);
v___x_295_ = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine(v_a_293_, v_x_256_, v_x_257_, v_x_258_);
v_foundLine_296_ = lean_ctor_get_uint8(v___x_295_, sizeof(void*)*1);
v_space_297_ = lean_ctor_get(v___x_295_, 0);
v___x_298_ = lean_nat_dec_lt(v_x_258_, v_space_297_);
if (v___x_298_ == 0)
{
if (v_foundLine_296_ == 0)
{
lean_object* v___x_299_; lean_object* v_r_u2082_300_; uint8_t v_foundLine_301_; uint8_t v_foundFlattenedHardLine_302_; lean_object* v_space_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_311_; 
lean_inc(v_space_297_);
lean_dec_ref(v___x_295_);
v___x_299_ = lean_nat_sub(v_x_258_, v_space_297_);
lean_dec(v_x_258_);
v_r_u2082_300_ = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine(v_a_294_, v_x_256_, v_x_257_, v___x_299_);
v_foundLine_301_ = lean_ctor_get_uint8(v_r_u2082_300_, sizeof(void*)*1);
v_foundFlattenedHardLine_302_ = lean_ctor_get_uint8(v_r_u2082_300_, sizeof(void*)*1 + 1);
v_space_303_ = lean_ctor_get(v_r_u2082_300_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v_r_u2082_300_);
if (v_isSharedCheck_311_ == 0)
{
v___x_305_ = v_r_u2082_300_;
v_isShared_306_ = v_isSharedCheck_311_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_space_303_);
lean_dec(v_r_u2082_300_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_311_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_307_; lean_object* v___x_309_; 
v___x_307_ = lean_nat_add(v_space_297_, v_space_303_);
lean_dec(v_space_303_);
lean_dec(v_space_297_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_307_);
v___x_309_ = v___x_305_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v___x_307_);
lean_ctor_set_uint8(v_reuseFailAlloc_310_, sizeof(void*)*1, v_foundLine_301_);
lean_ctor_set_uint8(v_reuseFailAlloc_310_, sizeof(void*)*1 + 1, v_foundFlattenedHardLine_302_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
else
{
lean_dec(v_a_294_);
lean_dec(v_x_258_);
lean_dec(v_x_257_);
return v___x_295_;
}
}
else
{
lean_dec(v_a_294_);
lean_dec(v_x_258_);
lean_dec(v_x_257_);
return v___x_295_;
}
}
case 6:
{
lean_object* v_a_312_; uint8_t v___x_313_; 
v_a_312_ = lean_ctor_get(v_x_255_, 0);
lean_inc(v_a_312_);
lean_dec_ref_known(v_x_255_, 1);
v___x_313_ = 1;
v_x_255_ = v_a_312_;
v_x_256_ = v___x_313_;
goto _start;
}
default: 
{
lean_object* v_a_315_; 
v_a_315_ = lean_ctor_get(v_x_255_, 1);
lean_inc(v_a_315_);
lean_dec_ref_known(v_x_255_, 2);
v_x_255_ = v_a_315_;
goto _start;
}
}
v___jp_259_:
{
lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_260_ = lean_nat_to_int(v_x_258_);
v___x_261_ = lean_int_dec_lt(v___x_260_, v_x_257_);
if (v___x_261_ == 0)
{
uint8_t v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
lean_dec(v___x_260_);
lean_dec(v_x_257_);
v___x_262_ = 1;
v___x_263_ = lean_unsigned_to_nat(0u);
v___x_264_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_264_, 0, v___x_263_);
lean_ctor_set_uint8(v___x_264_, sizeof(void*)*1, v___x_262_);
lean_ctor_set_uint8(v___x_264_, sizeof(void*)*1 + 1, v___x_261_);
return v___x_264_;
}
else
{
uint8_t v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_265_ = 0;
v___x_266_ = lean_int_sub(v_x_257_, v___x_260_);
lean_dec(v___x_260_);
lean_dec(v_x_257_);
v___x_267_ = l_Int_toNat(v___x_266_);
lean_dec(v___x_266_);
v___x_268_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_268_, 0, v___x_267_);
lean_ctor_set_uint8(v___x_268_, sizeof(void*)*1, v___x_265_);
lean_ctor_set_uint8(v___x_268_, sizeof(void*)*1 + 1, v___x_265_);
return v___x_268_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine___boxed(lean_object* v_x_317_, lean_object* v_x_318_, lean_object* v_x_319_, lean_object* v_x_320_){
_start:
{
uint8_t v_x_459__boxed_321_; lean_object* v_res_322_; 
v_x_459__boxed_321_ = lean_unbox(v_x_318_);
v_res_322_ = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine(v_x_317_, v_x_459__boxed_321_, v_x_319_, v_x_320_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_ctorIdx___impl(lean_object* v_x_323_){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = lean_obj_tag_nat(v_x_323_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_ctorIdx___impl___boxed(lean_object* v_x_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Std_Format_FlattenAllowability_ctorIdx___impl(v_x_325_);
lean_dec(v_x_325_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_ctorElim___redArg(lean_object* v_t_327_, lean_object* v_k_328_){
_start:
{
if (lean_obj_tag(v_t_327_) == 0)
{
uint8_t v_fits_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v_fits_329_ = lean_ctor_get_uint8(v_t_327_, 0);
v___x_330_ = lean_box(v_fits_329_);
v___x_331_ = lean_apply_1(v_k_328_, v___x_330_);
return v___x_331_;
}
else
{
return v_k_328_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_ctorElim___redArg___boxed(lean_object* v_t_332_, lean_object* v_k_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Std_Format_FlattenAllowability_ctorElim___redArg(v_t_332_, v_k_333_);
lean_dec(v_t_332_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_ctorElim(lean_object* v_motive_335_, lean_object* v_ctorIdx_336_, lean_object* v_t_337_, lean_object* v_h_338_, lean_object* v_k_339_){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = l_Std_Format_FlattenAllowability_ctorElim___redArg(v_t_337_, v_k_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_ctorElim___boxed(lean_object* v_motive_341_, lean_object* v_ctorIdx_342_, lean_object* v_t_343_, lean_object* v_h_344_, lean_object* v_k_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Std_Format_FlattenAllowability_ctorElim(v_motive_341_, v_ctorIdx_342_, v_t_343_, v_h_344_, v_k_345_);
lean_dec(v_t_343_);
lean_dec(v_ctorIdx_342_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_allow_elim___redArg(lean_object* v_t_347_, lean_object* v_allow_348_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = l_Std_Format_FlattenAllowability_ctorElim___redArg(v_t_347_, v_allow_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_allow_elim___redArg___boxed(lean_object* v_t_350_, lean_object* v_allow_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_Std_Format_FlattenAllowability_allow_elim___redArg(v_t_350_, v_allow_351_);
lean_dec(v_t_350_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_allow_elim(lean_object* v_motive_353_, lean_object* v_t_354_, lean_object* v_h_355_, lean_object* v_allow_356_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = l_Std_Format_FlattenAllowability_ctorElim___redArg(v_t_354_, v_allow_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_allow_elim___boxed(lean_object* v_motive_358_, lean_object* v_t_359_, lean_object* v_h_360_, lean_object* v_allow_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Std_Format_FlattenAllowability_allow_elim(v_motive_358_, v_t_359_, v_h_360_, v_allow_361_);
lean_dec(v_t_359_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_disallow_elim___redArg(lean_object* v_t_363_, lean_object* v_disallow_364_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = l_Std_Format_FlattenAllowability_ctorElim___redArg(v_t_363_, v_disallow_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_disallow_elim___redArg___boxed(lean_object* v_t_366_, lean_object* v_disallow_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l_Std_Format_FlattenAllowability_disallow_elim___redArg(v_t_366_, v_disallow_367_);
lean_dec(v_t_366_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_disallow_elim(lean_object* v_motive_369_, lean_object* v_t_370_, lean_object* v_h_371_, lean_object* v_disallow_372_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = l_Std_Format_FlattenAllowability_ctorElim___redArg(v_t_370_, v_disallow_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_disallow_elim___boxed(lean_object* v_motive_374_, lean_object* v_t_375_, lean_object* v_h_376_, lean_object* v_disallow_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Std_Format_FlattenAllowability_disallow_elim(v_motive_374_, v_t_375_, v_h_376_, v_disallow_377_);
lean_dec(v_t_375_);
return v_res_378_;
}
}
LEAN_EXPORT uint8_t l_Std_Format_instBEqFlattenAllowability_beq(lean_object* v_x_379_, lean_object* v_x_380_){
_start:
{
if (lean_obj_tag(v_x_379_) == 0)
{
if (lean_obj_tag(v_x_380_) == 0)
{
uint8_t v_fits_381_; 
v_fits_381_ = lean_ctor_get_uint8(v_x_380_, 0);
if (v_fits_381_ == 0)
{
uint8_t v_fits_382_; 
v_fits_382_ = lean_ctor_get_uint8(v_x_379_, 0);
if (v_fits_382_ == 0)
{
uint8_t v___x_383_; 
v___x_383_ = 1;
return v___x_383_;
}
else
{
return v_fits_381_;
}
}
else
{
uint8_t v_fits_384_; 
v_fits_384_ = lean_ctor_get_uint8(v_x_379_, 0);
return v_fits_384_;
}
}
else
{
uint8_t v___x_385_; 
v___x_385_ = 0;
return v___x_385_;
}
}
else
{
if (lean_obj_tag(v_x_380_) == 1)
{
uint8_t v___x_386_; 
v___x_386_ = 1;
return v___x_386_;
}
else
{
uint8_t v___x_387_; 
v___x_387_ = 0;
return v___x_387_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_instBEqFlattenAllowability_beq___boxed(lean_object* v_x_388_, lean_object* v_x_389_){
_start:
{
uint8_t v_res_390_; lean_object* v_r_391_; 
v_res_390_ = l_Std_Format_instBEqFlattenAllowability_beq(v_x_388_, v_x_389_);
lean_dec(v_x_389_);
lean_dec(v_x_388_);
v_r_391_ = lean_box(v_res_390_);
return v_r_391_;
}
}
LEAN_EXPORT uint8_t l_Std_Format_FlattenAllowability_shouldFlatten(lean_object* v_x_394_){
_start:
{
if (lean_obj_tag(v_x_394_) == 0)
{
uint8_t v_fits_395_; 
v_fits_395_ = lean_ctor_get_uint8(v_x_394_, 0);
if (v_fits_395_ == 1)
{
return v_fits_395_;
}
else
{
uint8_t v___x_396_; 
v___x_396_ = 0;
return v___x_396_;
}
}
else
{
uint8_t v___x_397_; 
v___x_397_ = 0;
return v___x_397_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_FlattenAllowability_shouldFlatten___boxed(lean_object* v_x_398_){
_start:
{
uint8_t v_res_399_; lean_object* v_r_400_; 
v_res_399_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_x_398_);
lean_dec(v_x_398_);
v_r_400_ = lean_box(v_res_399_);
return v_r_400_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(lean_object* v_x_401_, lean_object* v_x_402_, lean_object* v_x_403_){
_start:
{
if (lean_obj_tag(v_x_401_) == 0)
{
lean_object* v___x_404_; 
lean_dec(v_x_403_);
lean_dec(v_x_402_);
v___x_404_ = ((lean_object*)(l_Std_Format_instInhabitedSpaceResult_default___closed__0));
return v___x_404_;
}
else
{
lean_object* v_head_405_; lean_object* v_items_406_; 
v_head_405_ = lean_ctor_get(v_x_401_, 0);
lean_inc(v_head_405_);
v_items_406_ = lean_ctor_get(v_head_405_, 1);
lean_inc(v_items_406_);
if (lean_obj_tag(v_items_406_) == 0)
{
lean_object* v_tail_407_; 
lean_dec(v_head_405_);
v_tail_407_ = lean_ctor_get(v_x_401_, 1);
lean_inc(v_tail_407_);
lean_dec_ref_known(v_x_401_, 2);
v_x_401_ = v_tail_407_;
goto _start;
}
else
{
lean_object* v_head_409_; lean_object* v_tail_410_; lean_object* v_fla_411_; uint8_t v_flb_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_452_; 
v_head_409_ = lean_ctor_get(v_items_406_, 0);
lean_inc(v_head_409_);
v_tail_410_ = lean_ctor_get(v_x_401_, 1);
lean_inc(v_tail_410_);
lean_dec_ref_known(v_x_401_, 2);
v_fla_411_ = lean_ctor_get(v_head_405_, 0);
v_flb_412_ = lean_ctor_get_uint8(v_head_405_, sizeof(void*)*2);
v_isSharedCheck_452_ = !lean_is_exclusive(v_head_405_);
if (v_isSharedCheck_452_ == 0)
{
lean_object* v_unused_453_; 
v_unused_453_ = lean_ctor_get(v_head_405_, 1);
lean_dec(v_unused_453_);
v___x_414_ = v_head_405_;
v_isShared_415_ = v_isSharedCheck_452_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_fla_411_);
lean_dec(v_head_405_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_452_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v_tail_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_450_; 
v_tail_416_ = lean_ctor_get(v_items_406_, 1);
v_isSharedCheck_450_ = !lean_is_exclusive(v_items_406_);
if (v_isSharedCheck_450_ == 0)
{
lean_object* v_unused_451_; 
v_unused_451_ = lean_ctor_get(v_items_406_, 0);
lean_dec(v_unused_451_);
v___x_418_ = v_items_406_;
v_isShared_419_ = v_isSharedCheck_450_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_tail_416_);
lean_dec(v_items_406_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_450_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v_f_420_; lean_object* v_indent_421_; uint8_t v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; uint8_t v_foundLine_428_; lean_object* v_space_429_; uint8_t v___x_430_; 
v_f_420_ = lean_ctor_get(v_head_409_, 0);
lean_inc(v_f_420_);
v_indent_421_ = lean_ctor_get(v_head_409_, 1);
lean_inc(v_indent_421_);
lean_dec(v_head_409_);
v___x_422_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_411_);
lean_inc_n(v_x_403_, 2);
v___x_423_ = lean_nat_to_int(v_x_403_);
lean_inc(v_x_402_);
v___x_424_ = lean_nat_to_int(v_x_402_);
v___x_425_ = lean_int_add(v___x_423_, v___x_424_);
lean_dec(v___x_424_);
lean_dec(v___x_423_);
v___x_426_ = lean_int_sub(v___x_425_, v_indent_421_);
lean_dec(v_indent_421_);
lean_dec(v___x_425_);
v___x_427_ = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine(v_f_420_, v___x_422_, v___x_426_, v_x_403_);
v_foundLine_428_ = lean_ctor_get_uint8(v___x_427_, sizeof(void*)*1);
v_space_429_ = lean_ctor_get(v___x_427_, 0);
v___x_430_ = lean_nat_dec_lt(v_x_403_, v_space_429_);
if (v___x_430_ == 0)
{
if (v_foundLine_428_ == 0)
{
lean_object* v___x_432_; 
lean_inc(v_space_429_);
lean_dec_ref(v___x_427_);
if (v_isShared_415_ == 0)
{
lean_ctor_set(v___x_414_, 1, v_tail_416_);
v___x_432_ = v___x_414_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_fla_411_);
lean_ctor_set(v_reuseFailAlloc_449_, 1, v_tail_416_);
lean_ctor_set_uint8(v_reuseFailAlloc_449_, sizeof(void*)*2, v_flb_412_);
v___x_432_ = v_reuseFailAlloc_449_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
lean_object* v___x_434_; 
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 1, v_tail_410_);
lean_ctor_set(v___x_418_, 0, v___x_432_);
v___x_434_ = v___x_418_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v___x_432_);
lean_ctor_set(v_reuseFailAlloc_448_, 1, v_tail_410_);
v___x_434_ = v_reuseFailAlloc_448_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
lean_object* v___x_435_; lean_object* v_r_u2082_436_; uint8_t v_foundLine_437_; uint8_t v_foundFlattenedHardLine_438_; lean_object* v_space_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_447_; 
v___x_435_ = lean_nat_sub(v_x_403_, v_space_429_);
lean_dec(v_x_403_);
v_r_u2082_436_ = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(v___x_434_, v_x_402_, v___x_435_);
v_foundLine_437_ = lean_ctor_get_uint8(v_r_u2082_436_, sizeof(void*)*1);
v_foundFlattenedHardLine_438_ = lean_ctor_get_uint8(v_r_u2082_436_, sizeof(void*)*1 + 1);
v_space_439_ = lean_ctor_get(v_r_u2082_436_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v_r_u2082_436_);
if (v_isSharedCheck_447_ == 0)
{
v___x_441_ = v_r_u2082_436_;
v_isShared_442_ = v_isSharedCheck_447_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_space_439_);
lean_dec(v_r_u2082_436_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_447_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_443_; lean_object* v___x_445_; 
v___x_443_ = lean_nat_add(v_space_429_, v_space_439_);
lean_dec(v_space_439_);
lean_dec(v_space_429_);
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 0, v___x_443_);
v___x_445_ = v___x_441_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v___x_443_);
lean_ctor_set_uint8(v_reuseFailAlloc_446_, sizeof(void*)*1, v_foundLine_437_);
lean_ctor_set_uint8(v_reuseFailAlloc_446_, sizeof(void*)*1 + 1, v_foundFlattenedHardLine_438_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
}
}
else
{
lean_del_object(v___x_418_);
lean_dec(v_tail_416_);
lean_del_object(v___x_414_);
lean_dec(v_fla_411_);
lean_dec(v_tail_410_);
lean_dec(v_x_403_);
lean_dec(v_x_402_);
return v___x_427_;
}
}
else
{
lean_del_object(v___x_418_);
lean_dec(v_tail_416_);
lean_del_object(v___x_414_);
lean_dec(v_fla_411_);
lean_dec(v_tail_410_);
lean_dec(v_x_403_);
lean_dec(v_x_402_);
return v___x_427_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___redArg___lam__0(uint8_t v_flb_454_, lean_object* v_items_455_, lean_object* v_w_456_, lean_object* v_gs_457_, lean_object* v_toPure_458_, lean_object* v_k_459_){
_start:
{
uint8_t v___y_461_; uint8_t v___x_466_; uint8_t v___x_467_; lean_object* v___x_468_; lean_object* v_g_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v_r_473_; uint8_t v_foundLine_474_; uint8_t v_foundFlattenedHardLine_475_; lean_object* v_space_476_; lean_object* v___y_478_; uint8_t v___x_482_; 
v___x_466_ = 0;
v___x_467_ = l_Std_Format_instBEqFlattenBehavior_beq(v_flb_454_, v___x_466_);
v___x_468_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_468_, 0, v___x_467_);
lean_inc(v_items_455_);
v_g_469_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_g_469_, 0, v___x_468_);
lean_ctor_set(v_g_469_, 1, v_items_455_);
lean_ctor_set_uint8(v_g_469_, sizeof(void*)*2, v_flb_454_);
v___x_470_ = lean_box(0);
v___x_471_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_471_, 0, v_g_469_);
lean_ctor_set(v___x_471_, 1, v___x_470_);
v___x_472_ = lean_nat_sub(v_w_456_, v_k_459_);
lean_inc(v___x_472_);
lean_inc(v_k_459_);
v_r_473_ = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(v___x_471_, v_k_459_, v___x_472_);
v_foundLine_474_ = lean_ctor_get_uint8(v_r_473_, sizeof(void*)*1);
v_foundFlattenedHardLine_475_ = lean_ctor_get_uint8(v_r_473_, sizeof(void*)*1 + 1);
v_space_476_ = lean_ctor_get(v_r_473_, 0);
v___x_482_ = lean_nat_dec_lt(v___x_472_, v_space_476_);
if (v___x_482_ == 0)
{
if (v_foundLine_474_ == 0)
{
lean_object* v___x_483_; lean_object* v_r_u2082_484_; uint8_t v_foundLine_485_; uint8_t v_foundFlattenedHardLine_486_; lean_object* v_space_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_495_; 
lean_inc(v_space_476_);
lean_dec_ref(v_r_473_);
v___x_483_ = lean_nat_sub(v___x_472_, v_space_476_);
lean_inc(v_gs_457_);
v_r_u2082_484_ = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(v_gs_457_, v_k_459_, v___x_483_);
v_foundLine_485_ = lean_ctor_get_uint8(v_r_u2082_484_, sizeof(void*)*1);
v_foundFlattenedHardLine_486_ = lean_ctor_get_uint8(v_r_u2082_484_, sizeof(void*)*1 + 1);
v_space_487_ = lean_ctor_get(v_r_u2082_484_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v_r_u2082_484_);
if (v_isSharedCheck_495_ == 0)
{
v___x_489_ = v_r_u2082_484_;
v_isShared_490_ = v_isSharedCheck_495_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_space_487_);
lean_dec(v_r_u2082_484_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_495_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___x_491_; lean_object* v___x_493_; 
v___x_491_ = lean_nat_add(v_space_476_, v_space_487_);
lean_dec(v_space_487_);
lean_dec(v_space_476_);
if (v_isShared_490_ == 0)
{
lean_ctor_set(v___x_489_, 0, v___x_491_);
v___x_493_ = v___x_489_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v___x_491_);
lean_ctor_set_uint8(v_reuseFailAlloc_494_, sizeof(void*)*1, v_foundLine_485_);
lean_ctor_set_uint8(v_reuseFailAlloc_494_, sizeof(void*)*1 + 1, v_foundFlattenedHardLine_486_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
v___y_478_ = v___x_493_;
goto v___jp_477_;
}
}
}
else
{
lean_dec(v_k_459_);
v___y_478_ = v_r_473_;
goto v___jp_477_;
}
}
else
{
lean_dec(v_k_459_);
v___y_478_ = v_r_473_;
goto v___jp_477_;
}
v___jp_460_:
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_462_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_462_, 0, v___y_461_);
v___x_463_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_463_, 0, v___x_462_);
lean_ctor_set(v___x_463_, 1, v_items_455_);
lean_ctor_set_uint8(v___x_463_, sizeof(void*)*2, v_flb_454_);
v___x_464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_464_, 0, v___x_463_);
lean_ctor_set(v___x_464_, 1, v_gs_457_);
v___x_465_ = lean_apply_2(v_toPure_458_, lean_box(0), v___x_464_);
return v___x_465_;
}
v___jp_477_:
{
if (v_foundFlattenedHardLine_475_ == 0)
{
lean_object* v_space_479_; uint8_t v___x_480_; 
v_space_479_ = lean_ctor_get(v___y_478_, 0);
lean_inc(v_space_479_);
lean_dec_ref(v___y_478_);
v___x_480_ = lean_nat_dec_le(v_space_479_, v___x_472_);
lean_dec(v___x_472_);
lean_dec(v_space_479_);
v___y_461_ = v___x_480_;
goto v___jp_460_;
}
else
{
uint8_t v___x_481_; 
lean_dec_ref(v___y_478_);
lean_dec(v___x_472_);
v___x_481_ = 0;
v___y_461_ = v___x_481_;
goto v___jp_460_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___redArg___lam__0___boxed(lean_object* v_flb_496_, lean_object* v_items_497_, lean_object* v_w_498_, lean_object* v_gs_499_, lean_object* v_toPure_500_, lean_object* v_k_501_){
_start:
{
uint8_t v_flb_boxed_502_; lean_object* v_res_503_; 
v_flb_boxed_502_ = lean_unbox(v_flb_496_);
v_res_503_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___redArg___lam__0(v_flb_boxed_502_, v_items_497_, v_w_498_, v_gs_499_, v_toPure_500_, v_k_501_);
lean_dec(v_w_498_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___redArg(uint8_t v_flb_504_, lean_object* v_items_505_, lean_object* v_gs_506_, lean_object* v_w_507_, lean_object* v_inst_508_, lean_object* v_inst_509_){
_start:
{
lean_object* v_toApplicative_510_; lean_object* v_toBind_511_; lean_object* v_currColumn_512_; lean_object* v_toPure_513_; lean_object* v___x_514_; lean_object* v___f_515_; lean_object* v___x_516_; 
v_toApplicative_510_ = lean_ctor_get(v_inst_508_, 0);
lean_inc_ref(v_toApplicative_510_);
v_toBind_511_ = lean_ctor_get(v_inst_508_, 1);
lean_inc(v_toBind_511_);
lean_dec_ref(v_inst_508_);
v_currColumn_512_ = lean_ctor_get(v_inst_509_, 2);
lean_inc(v_currColumn_512_);
lean_dec_ref(v_inst_509_);
v_toPure_513_ = lean_ctor_get(v_toApplicative_510_, 1);
lean_inc(v_toPure_513_);
lean_dec_ref(v_toApplicative_510_);
v___x_514_ = lean_box(v_flb_504_);
v___f_515_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_515_, 0, v___x_514_);
lean_closure_set(v___f_515_, 1, v_items_505_);
lean_closure_set(v___f_515_, 2, v_w_507_);
lean_closure_set(v___f_515_, 3, v_gs_506_);
lean_closure_set(v___f_515_, 4, v_toPure_513_);
v___x_516_ = lean_apply_4(v_toBind_511_, lean_box(0), lean_box(0), v_currColumn_512_, v___f_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___redArg___boxed(lean_object* v_flb_517_, lean_object* v_items_518_, lean_object* v_gs_519_, lean_object* v_w_520_, lean_object* v_inst_521_, lean_object* v_inst_522_){
_start:
{
uint8_t v_flb_boxed_523_; lean_object* v_res_524_; 
v_flb_boxed_523_ = lean_unbox(v_flb_517_);
v_res_524_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___redArg(v_flb_boxed_523_, v_items_518_, v_gs_519_, v_w_520_, v_inst_521_, v_inst_522_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(lean_object* v_m_525_, uint8_t v_flb_526_, lean_object* v_items_527_, lean_object* v_gs_528_, lean_object* v_w_529_, lean_object* v_inst_530_, lean_object* v_inst_531_){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___redArg(v_flb_526_, v_items_527_, v_gs_528_, v_w_529_, v_inst_530_, v_inst_531_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___boxed(lean_object* v_m_533_, lean_object* v_flb_534_, lean_object* v_items_535_, lean_object* v_gs_536_, lean_object* v_w_537_, lean_object* v_inst_538_, lean_object* v_inst_539_){
_start:
{
uint8_t v_flb_boxed_540_; lean_object* v_res_541_; 
v_flb_boxed_540_ = lean_unbox(v_flb_534_);
v_res_541_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(v_m_533_, v_flb_boxed_540_, v_items_535_, v_gs_536_, v_w_537_, v_inst_538_, v_inst_539_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(lean_object* v_fla_542_, uint8_t v_flb_543_, lean_object* v_tail_544_, lean_object* v_is_x27_545_){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_546_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_546_, 0, v_fla_542_);
lean_ctor_set(v___x_546_, 1, v_is_x27_545_);
lean_ctor_set_uint8(v___x_546_, sizeof(void*)*2, v_flb_543_);
v___x_547_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
lean_ctor_set(v___x_547_, 1, v_tail_544_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0___boxed(lean_object* v_fla_548_, lean_object* v_flb_549_, lean_object* v_tail_550_, lean_object* v_is_x27_551_){
_start:
{
uint8_t v_flb_1750__boxed_552_; lean_object* v_res_553_; 
v_flb_1750__boxed_552_ = lean_unbox(v_flb_549_);
v_res_553_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(v_fla_548_, v_flb_1750__boxed_552_, v_tail_550_, v_is_x27_551_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__3(lean_object* v_endTags_554_, lean_object* v_activeTags_555_, lean_object* v_toBind_556_, lean_object* v___f_557_, lean_object* v_____r_558_){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_559_ = lean_apply_1(v_endTags_554_, v_activeTags_555_);
v___x_560_ = lean_apply_4(v_toBind_556_, lean_box(0), lean_box(0), v___x_559_, v___f_557_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__8(lean_object* v_inst_561_, lean_object* v_activeTags_562_, lean_object* v_toBind_563_, lean_object* v___f_564_, lean_object* v_____r_565_){
_start:
{
lean_object* v_endTags_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v_endTags_566_ = lean_ctor_get(v_inst_561_, 4);
lean_inc(v_endTags_566_);
lean_dec_ref(v_inst_561_);
v___x_567_ = lean_apply_1(v_endTags_566_, v_activeTags_562_);
v___x_568_ = lean_apply_4(v_toBind_563_, lean_box(0), lean_box(0), v___x_567_, v___f_564_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__7(lean_object* v_indent_569_, lean_object* v_inst_570_, lean_object* v_toBind_571_, lean_object* v___f_572_, lean_object* v___f_573_, lean_object* v_k_574_){
_start:
{
lean_object* v___x_575_; uint8_t v___x_576_; 
v___x_575_ = lean_nat_to_int(v_k_574_);
v___x_576_ = lean_int_dec_lt(v___x_575_, v_indent_569_);
if (v___x_576_ == 0)
{
lean_object* v_pushNewline_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
lean_dec(v___x_575_);
lean_dec(v___f_573_);
v_pushNewline_577_ = lean_ctor_get(v_inst_570_, 1);
lean_inc(v_pushNewline_577_);
lean_dec_ref(v_inst_570_);
v___x_578_ = l_Int_toNat(v_indent_569_);
v___x_579_ = lean_apply_1(v_pushNewline_577_, v___x_578_);
v___x_580_ = lean_apply_4(v_toBind_571_, lean_box(0), lean_box(0), v___x_579_, v___f_572_);
return v___x_580_;
}
else
{
lean_object* v_pushOutput_581_; lean_object* v___x_582_; uint32_t v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
lean_dec(v___f_572_);
v_pushOutput_581_ = lean_ctor_get(v_inst_570_, 0);
lean_inc(v_pushOutput_581_);
lean_dec_ref(v_inst_570_);
v___x_582_ = ((lean_object*)(l_Std_Format_isEmpty___closed__0));
v___x_583_ = 32;
v___x_584_ = lean_int_sub(v_indent_569_, v___x_575_);
lean_dec(v___x_575_);
v___x_585_ = l_Int_toNat(v___x_584_);
lean_dec(v___x_584_);
v___x_586_ = lean_string_pushn(v___x_582_, v___x_583_, v___x_585_);
v___x_587_ = lean_apply_1(v_pushOutput_581_, v___x_586_);
v___x_588_ = lean_apply_4(v_toBind_571_, lean_box(0), lean_box(0), v___x_587_, v___f_573_);
return v___x_588_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__7___boxed(lean_object* v_indent_589_, lean_object* v_inst_590_, lean_object* v_toBind_591_, lean_object* v___f_592_, lean_object* v___f_593_, lean_object* v_k_594_){
_start:
{
lean_object* v_res_595_; 
v_res_595_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__7(v_indent_589_, v_inst_590_, v_toBind_591_, v___f_592_, v___f_593_, v_k_594_);
lean_dec(v_indent_589_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__9(lean_object* v_indent_596_, lean_object* v_pushNewline_597_, lean_object* v_toBind_598_, lean_object* v___f_599_, lean_object* v_____r_600_){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_601_ = l_Int_toNat(v_indent_596_);
v___x_602_ = lean_apply_1(v_pushNewline_597_, v___x_601_);
v___x_603_ = lean_apply_4(v_toBind_598_, lean_box(0), lean_box(0), v___x_602_, v___f_599_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__9___boxed(lean_object* v_indent_604_, lean_object* v_pushNewline_605_, lean_object* v_toBind_606_, lean_object* v___f_607_, lean_object* v_____r_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__9(v_indent_604_, v_pushNewline_605_, v_toBind_606_, v___f_607_, v_____r_608_);
lean_dec(v_indent_604_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__1(lean_object* v_gs_x27_610_, lean_object* v_tail_611_, lean_object* v_w_612_, lean_object* v_inst_613_, lean_object* v_inst_614_, lean_object* v_____r_615_){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_616_ = lean_apply_1(v_gs_x27_610_, v_tail_611_);
v___x_617_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg(v_w_612_, v_inst_613_, v_inst_614_, v___x_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__5(uint8_t v_flb_619_, lean_object* v_tail_620_, lean_object* v_tail_621_, lean_object* v_w_622_, lean_object* v_inst_623_, lean_object* v_inst_624_, lean_object* v_toBind_625_, lean_object* v_____r_626_){
_start:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
lean_inc_ref(v_inst_624_);
lean_inc_ref(v_inst_623_);
lean_inc(v_w_622_);
v___x_627_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___redArg(v_flb_619_, v_tail_620_, v_tail_621_, v_w_622_, v_inst_623_, v_inst_624_);
v___x_628_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg), 4, 3);
lean_closure_set(v___x_628_, 0, v_w_622_);
lean_closure_set(v___x_628_, 1, v_inst_623_);
lean_closure_set(v___x_628_, 2, v_inst_624_);
v___x_629_ = lean_apply_4(v_toBind_625_, lean_box(0), lean_box(0), v___x_627_, v___x_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__5___boxed(lean_object* v_flb_630_, lean_object* v_tail_631_, lean_object* v_tail_632_, lean_object* v_w_633_, lean_object* v_inst_634_, lean_object* v_inst_635_, lean_object* v_toBind_636_, lean_object* v_____r_637_){
_start:
{
uint8_t v_flb_1842__boxed_638_; lean_object* v_res_639_; 
v_flb_1842__boxed_638_ = lean_unbox(v_flb_630_);
v_res_639_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__5(v_flb_1842__boxed_638_, v_tail_631_, v_tail_632_, v_w_633_, v_inst_634_, v_inst_635_, v_toBind_636_, v_____r_637_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__6(lean_object* v_breakHere_641_, lean_object* v_w_642_, lean_object* v_inst_643_, lean_object* v_inst_644_, lean_object* v_endTags_645_, lean_object* v_activeTags_646_, lean_object* v_toBind_647_, lean_object* v_pushOutput_648_, lean_object* v___x_649_, lean_object* v___x_650_, lean_object* v_____x_651_){
_start:
{
if (lean_obj_tag(v_____x_651_) == 1)
{
lean_object* v_head_652_; lean_object* v_fla_653_; uint8_t v___x_654_; 
v_head_652_ = lean_ctor_get(v_____x_651_, 0);
v_fla_653_ = lean_ctor_get(v_head_652_, 0);
v___x_654_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_653_);
if (v___x_654_ == 0)
{
lean_dec_ref_known(v_____x_651_, 2);
lean_dec_ref(v___x_649_);
lean_dec(v_pushOutput_648_);
lean_dec(v_toBind_647_);
lean_dec(v_activeTags_646_);
lean_dec(v_endTags_645_);
lean_dec_ref(v_inst_644_);
lean_dec_ref(v_inst_643_);
lean_dec(v_w_642_);
lean_inc(v_breakHere_641_);
return v_breakHere_641_;
}
else
{
lean_object* v___f_655_; lean_object* v___f_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v___f_655_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__4), 5, 4);
lean_closure_set(v___f_655_, 0, v_w_642_);
lean_closure_set(v___f_655_, 1, v_inst_643_);
lean_closure_set(v___f_655_, 2, v_inst_644_);
lean_closure_set(v___f_655_, 3, v_____x_651_);
lean_inc(v_toBind_647_);
v___f_656_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__3), 5, 4);
lean_closure_set(v___f_656_, 0, v_endTags_645_);
lean_closure_set(v___f_656_, 1, v_activeTags_646_);
lean_closure_set(v___f_656_, 2, v_toBind_647_);
lean_closure_set(v___f_656_, 3, v___f_655_);
v___x_657_ = lean_apply_1(v_pushOutput_648_, v___x_649_);
v___x_658_ = lean_apply_4(v_toBind_647_, lean_box(0), lean_box(0), v___x_657_, v___f_656_);
return v___x_658_;
}
}
else
{
lean_object* v___x_659_; lean_object* v___x_660_; 
lean_dec(v_____x_651_);
lean_dec_ref(v___x_649_);
lean_dec(v_pushOutput_648_);
lean_dec(v_toBind_647_);
lean_dec(v_activeTags_646_);
lean_dec(v_endTags_645_);
lean_dec_ref(v_inst_644_);
lean_dec_ref(v_inst_643_);
lean_dec(v_w_642_);
v___x_659_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__6___closed__0));
v___x_660_ = l_panic___redArg(v___x_650_, v___x_659_);
return v___x_660_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__6___boxed(lean_object* v_breakHere_661_, lean_object* v_w_662_, lean_object* v_inst_663_, lean_object* v_inst_664_, lean_object* v_endTags_665_, lean_object* v_activeTags_666_, lean_object* v_toBind_667_, lean_object* v_pushOutput_668_, lean_object* v___x_669_, lean_object* v___x_670_, lean_object* v_____x_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__6(v_breakHere_661_, v_w_662_, v_inst_663_, v_inst_664_, v_endTags_665_, v_activeTags_666_, v_toBind_667_, v_pushOutput_668_, v___x_669_, v___x_670_, v_____x_671_);
lean_dec(v___x_670_);
lean_dec(v_breakHere_661_);
return v_res_672_;
}
}
static lean_object* _init_l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__1(void){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_673_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__0));
v___x_674_ = lean_string_length(v___x_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__2(lean_object* v_a_675_, lean_object* v_p_676_, lean_object* v___x_677_, lean_object* v_indent_678_, lean_object* v_activeTags_679_, lean_object* v_tail_680_, lean_object* v_fla_681_, uint8_t v_flb_682_, lean_object* v_tail_683_, lean_object* v_w_684_, lean_object* v_inst_685_, lean_object* v_inst_686_, lean_object* v_toBind_687_, lean_object* v_gs_x27_688_, lean_object* v_____r_689_){
_start:
{
lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v_is_694_; lean_object* v___x_695_; uint8_t v___x_696_; 
v___x_690_ = lean_string_utf8_next(v_a_675_, v_p_676_);
v___x_691_ = lean_string_utf8_extract(v_a_675_, v___x_690_, v___x_677_);
lean_dec(v___x_690_);
v___x_692_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_692_, 0, v___x_691_);
v___x_693_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_693_, 0, v___x_692_);
lean_ctor_set(v___x_693_, 1, v_indent_678_);
lean_ctor_set(v___x_693_, 2, v_activeTags_679_);
v_is_694_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_is_694_, 0, v___x_693_);
lean_ctor_set(v_is_694_, 1, v_tail_680_);
v___x_695_ = lean_box(1);
v___x_696_ = l_Std_Format_instBEqFlattenAllowability_beq(v_fla_681_, v___x_695_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
lean_dec_ref(v_gs_x27_688_);
lean_inc_ref(v_inst_686_);
lean_inc_ref(v_inst_685_);
lean_inc(v_w_684_);
v___x_697_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___redArg(v_flb_682_, v_is_694_, v_tail_683_, v_w_684_, v_inst_685_, v_inst_686_);
v___x_698_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg), 4, 3);
lean_closure_set(v___x_698_, 0, v_w_684_);
lean_closure_set(v___x_698_, 1, v_inst_685_);
lean_closure_set(v___x_698_, 2, v_inst_686_);
v___x_699_ = lean_apply_4(v_toBind_687_, lean_box(0), lean_box(0), v___x_697_, v___x_698_);
return v___x_699_;
}
else
{
lean_object* v___x_700_; lean_object* v___x_701_; 
lean_dec(v_toBind_687_);
lean_dec(v_tail_683_);
v___x_700_ = lean_apply_1(v_gs_x27_688_, v_is_694_);
v___x_701_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg(v_w_684_, v_inst_685_, v_inst_686_, v___x_700_);
return v___x_701_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__2___boxed(lean_object* v_a_702_, lean_object* v_p_703_, lean_object* v___x_704_, lean_object* v_indent_705_, lean_object* v_activeTags_706_, lean_object* v_tail_707_, lean_object* v_fla_708_, lean_object* v_flb_709_, lean_object* v_tail_710_, lean_object* v_w_711_, lean_object* v_inst_712_, lean_object* v_inst_713_, lean_object* v_toBind_714_, lean_object* v_gs_x27_715_, lean_object* v_____r_716_){
_start:
{
uint8_t v_flb_1866__boxed_717_; lean_object* v_res_718_; 
v_flb_1866__boxed_717_ = lean_unbox(v_flb_709_);
v_res_718_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__2(v_a_702_, v_p_703_, v___x_704_, v_indent_705_, v_activeTags_706_, v_tail_707_, v_fla_708_, v_flb_1866__boxed_717_, v_tail_710_, v_w_711_, v_inst_712_, v_inst_713_, v_toBind_714_, v_gs_x27_715_, v_____r_716_);
lean_dec(v_fla_708_);
lean_dec(v___x_704_);
lean_dec(v_p_703_);
lean_dec_ref(v_a_702_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__12(lean_object* v_activeTags_719_, lean_object* v_a_720_, lean_object* v_indent_721_, lean_object* v_tail_722_, lean_object* v_gs_x27_723_, lean_object* v_w_724_, lean_object* v_inst_725_, lean_object* v_inst_726_, lean_object* v_____r_727_){
_start:
{
lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_728_ = lean_unsigned_to_nat(1u);
v___x_729_ = lean_nat_add(v_activeTags_719_, v___x_728_);
v___x_730_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_730_, 0, v_a_720_);
lean_ctor_set(v___x_730_, 1, v_indent_721_);
lean_ctor_set(v___x_730_, 2, v___x_729_);
v___x_731_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_731_, 0, v___x_730_);
lean_ctor_set(v___x_731_, 1, v_tail_722_);
v___x_732_ = lean_apply_1(v_gs_x27_723_, v___x_731_);
v___x_733_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg(v_w_724_, v_inst_725_, v_inst_726_, v___x_732_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__12___boxed(lean_object* v_activeTags_734_, lean_object* v_a_735_, lean_object* v_indent_736_, lean_object* v_tail_737_, lean_object* v_gs_x27_738_, lean_object* v_w_739_, lean_object* v_inst_740_, lean_object* v_inst_741_, lean_object* v_____r_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__12(v_activeTags_734_, v_a_735_, v_indent_736_, v_tail_737_, v_gs_x27_738_, v_w_739_, v_inst_740_, v_inst_741_, v_____r_742_);
lean_dec(v_activeTags_734_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg(lean_object* v_w_744_, lean_object* v_inst_745_, lean_object* v_inst_746_, lean_object* v_x_747_){
_start:
{
if (lean_obj_tag(v_x_747_) == 0)
{
lean_object* v_toApplicative_748_; lean_object* v_toPure_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v_toApplicative_748_ = lean_ctor_get(v_inst_745_, 0);
lean_inc_ref(v_toApplicative_748_);
lean_dec_ref(v_inst_746_);
lean_dec_ref(v_inst_745_);
lean_dec(v_w_744_);
v_toPure_749_ = lean_ctor_get(v_toApplicative_748_, 1);
lean_inc(v_toPure_749_);
lean_dec_ref(v_toApplicative_748_);
v___x_750_ = lean_box(0);
v___x_751_ = lean_apply_2(v_toPure_749_, lean_box(0), v___x_750_);
return v___x_751_;
}
else
{
lean_object* v_head_752_; lean_object* v_items_753_; 
v_head_752_ = lean_ctor_get(v_x_747_, 0);
v_items_753_ = lean_ctor_get(v_head_752_, 1);
lean_inc(v_items_753_);
if (lean_obj_tag(v_items_753_) == 0)
{
lean_object* v_tail_754_; 
v_tail_754_ = lean_ctor_get(v_x_747_, 1);
lean_inc(v_tail_754_);
lean_dec_ref_known(v_x_747_, 2);
v_x_747_ = v_tail_754_;
goto _start;
}
else
{
lean_object* v_head_756_; lean_object* v_toBind_757_; lean_object* v_tail_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_895_; 
lean_inc(v_head_752_);
v_head_756_ = lean_ctor_get(v_items_753_, 0);
lean_inc(v_head_756_);
v_toBind_757_ = lean_ctor_get(v_inst_745_, 1);
v_tail_758_ = lean_ctor_get(v_x_747_, 1);
v_isSharedCheck_895_ = !lean_is_exclusive(v_x_747_);
if (v_isSharedCheck_895_ == 0)
{
lean_object* v_unused_896_; 
v_unused_896_ = lean_ctor_get(v_x_747_, 0);
lean_dec(v_unused_896_);
v___x_760_ = v_x_747_;
v_isShared_761_ = v_isSharedCheck_895_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_tail_758_);
lean_dec(v_x_747_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_895_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v_fla_762_; uint8_t v_flb_763_; lean_object* v_tail_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_893_; 
v_fla_762_ = lean_ctor_get(v_head_752_, 0);
lean_inc(v_fla_762_);
v_flb_763_ = lean_ctor_get_uint8(v_head_752_, sizeof(void*)*2);
lean_dec(v_head_752_);
v_tail_764_ = lean_ctor_get(v_items_753_, 1);
v_isSharedCheck_893_ = !lean_is_exclusive(v_items_753_);
if (v_isSharedCheck_893_ == 0)
{
lean_object* v_unused_894_; 
v_unused_894_ = lean_ctor_get(v_items_753_, 0);
lean_dec(v_unused_894_);
v___x_766_ = v_items_753_;
v_isShared_767_ = v_isSharedCheck_893_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_tail_764_);
lean_dec(v_items_753_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_893_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v_f_768_; lean_object* v_indent_769_; lean_object* v_activeTags_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_892_; 
v_f_768_ = lean_ctor_get(v_head_756_, 0);
v_indent_769_ = lean_ctor_get(v_head_756_, 1);
v_activeTags_770_ = lean_ctor_get(v_head_756_, 2);
v_isSharedCheck_892_ = !lean_is_exclusive(v_head_756_);
if (v_isSharedCheck_892_ == 0)
{
v___x_772_ = v_head_756_;
v_isShared_773_ = v_isSharedCheck_892_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_activeTags_770_);
lean_inc(v_indent_769_);
lean_inc(v_f_768_);
lean_dec(v_head_756_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_892_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_774_; lean_object* v_gs_x27_775_; lean_object* v___f_776_; 
v___x_774_ = lean_box(v_flb_763_);
lean_inc(v_tail_758_);
lean_inc(v_fla_762_);
v_gs_x27_775_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v_gs_x27_775_, 0, v_fla_762_);
lean_closure_set(v_gs_x27_775_, 1, v___x_774_);
lean_closure_set(v_gs_x27_775_, 2, v_tail_758_);
lean_inc_ref(v_inst_746_);
lean_inc_ref(v_inst_745_);
lean_inc(v_w_744_);
lean_inc(v_tail_764_);
lean_inc_ref(v_gs_x27_775_);
v___f_776_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__1), 6, 5);
lean_closure_set(v___f_776_, 0, v_gs_x27_775_);
lean_closure_set(v___f_776_, 1, v_tail_764_);
lean_closure_set(v___f_776_, 2, v_w_744_);
lean_closure_set(v___f_776_, 3, v_inst_745_);
lean_closure_set(v___f_776_, 4, v_inst_746_);
switch(lean_obj_tag(v_f_768_))
{
case 0:
{
lean_inc(v_toBind_757_);
lean_dec_ref(v_gs_x27_775_);
lean_del_object(v___x_772_);
lean_dec(v_indent_769_);
lean_del_object(v___x_766_);
lean_dec(v_tail_764_);
lean_dec(v_fla_762_);
lean_del_object(v___x_760_);
lean_dec(v_tail_758_);
lean_dec_ref(v_inst_745_);
lean_dec(v_w_744_);
goto v___jp_777_;
}
case 1:
{
lean_inc(v_toBind_757_);
lean_dec_ref(v_gs_x27_775_);
lean_del_object(v___x_772_);
lean_del_object(v___x_766_);
lean_del_object(v___x_760_);
if (v_flb_763_ == 0)
{
uint8_t v___x_781_; 
lean_dec(v_tail_764_);
lean_dec(v_tail_758_);
lean_dec_ref(v_inst_745_);
lean_dec(v_w_744_);
v___x_781_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_762_);
lean_dec(v_fla_762_);
if (v___x_781_ == 0)
{
lean_object* v_pushNewline_782_; lean_object* v_endTags_783_; lean_object* v___f_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v_pushNewline_782_ = lean_ctor_get(v_inst_746_, 1);
lean_inc(v_pushNewline_782_);
v_endTags_783_ = lean_ctor_get(v_inst_746_, 4);
lean_inc(v_endTags_783_);
lean_dec_ref(v_inst_746_);
lean_inc(v_toBind_757_);
v___f_784_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__3), 5, 4);
lean_closure_set(v___f_784_, 0, v_endTags_783_);
lean_closure_set(v___f_784_, 1, v_activeTags_770_);
lean_closure_set(v___f_784_, 2, v_toBind_757_);
lean_closure_set(v___f_784_, 3, v___f_776_);
v___x_785_ = l_Int_toNat(v_indent_769_);
lean_dec(v_indent_769_);
v___x_786_ = lean_apply_1(v_pushNewline_782_, v___x_785_);
v___x_787_ = lean_apply_4(v_toBind_757_, lean_box(0), lean_box(0), v___x_786_, v___f_784_);
return v___x_787_;
}
else
{
lean_object* v_pushOutput_788_; lean_object* v_endTags_789_; lean_object* v___f_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
lean_dec(v_indent_769_);
v_pushOutput_788_ = lean_ctor_get(v_inst_746_, 0);
lean_inc(v_pushOutput_788_);
v_endTags_789_ = lean_ctor_get(v_inst_746_, 4);
lean_inc(v_endTags_789_);
lean_dec_ref(v_inst_746_);
lean_inc(v_toBind_757_);
v___f_790_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__3), 5, 4);
lean_closure_set(v___f_790_, 0, v_endTags_789_);
lean_closure_set(v___f_790_, 1, v_activeTags_770_);
lean_closure_set(v___f_790_, 2, v_toBind_757_);
lean_closure_set(v___f_790_, 3, v___f_776_);
v___x_791_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__0));
v___x_792_ = lean_apply_1(v_pushOutput_788_, v___x_791_);
v___x_793_ = lean_apply_4(v_toBind_757_, lean_box(0), lean_box(0), v___x_792_, v___f_790_);
return v___x_793_;
}
}
else
{
lean_object* v_pushOutput_794_; lean_object* v_pushNewline_795_; lean_object* v_endTags_796_; lean_object* v___x_797_; lean_object* v___f_798_; lean_object* v___f_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v_breakHere_802_; uint8_t v___x_803_; 
lean_dec_ref(v___f_776_);
v_pushOutput_794_ = lean_ctor_get(v_inst_746_, 0);
v_pushNewline_795_ = lean_ctor_get(v_inst_746_, 1);
v_endTags_796_ = lean_ctor_get(v_inst_746_, 4);
v___x_797_ = lean_box(v_flb_763_);
lean_inc_n(v_toBind_757_, 3);
lean_inc_ref(v_inst_746_);
lean_inc_ref(v_inst_745_);
lean_inc(v_w_744_);
lean_inc(v_tail_758_);
lean_inc(v_tail_764_);
v___f_798_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_798_, 0, v___x_797_);
lean_closure_set(v___f_798_, 1, v_tail_764_);
lean_closure_set(v___f_798_, 2, v_tail_758_);
lean_closure_set(v___f_798_, 3, v_w_744_);
lean_closure_set(v___f_798_, 4, v_inst_745_);
lean_closure_set(v___f_798_, 5, v_inst_746_);
lean_closure_set(v___f_798_, 6, v_toBind_757_);
lean_inc(v_activeTags_770_);
lean_inc(v_endTags_796_);
v___f_799_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__3), 5, 4);
lean_closure_set(v___f_799_, 0, v_endTags_796_);
lean_closure_set(v___f_799_, 1, v_activeTags_770_);
lean_closure_set(v___f_799_, 2, v_toBind_757_);
lean_closure_set(v___f_799_, 3, v___f_798_);
v___x_800_ = l_Int_toNat(v_indent_769_);
lean_dec(v_indent_769_);
lean_inc(v_pushNewline_795_);
v___x_801_ = lean_apply_1(v_pushNewline_795_, v___x_800_);
v_breakHere_802_ = lean_apply_4(v_toBind_757_, lean_box(0), lean_box(0), v___x_801_, v___f_799_);
v___x_803_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_762_);
lean_dec(v_fla_762_);
if (v___x_803_ == 0)
{
lean_dec(v_activeTags_770_);
lean_dec(v_tail_764_);
lean_dec(v_tail_758_);
lean_dec(v_toBind_757_);
lean_dec_ref(v_inst_746_);
lean_dec_ref(v_inst_745_);
lean_dec(v_w_744_);
return v_breakHere_802_;
}
else
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___f_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_804_ = lean_box(0);
lean_inc_ref_n(v_inst_745_, 2);
v___x_805_ = l_instInhabitedOfMonad___redArg(v_inst_745_, v___x_804_);
v___x_806_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__0));
lean_inc(v_pushOutput_794_);
lean_inc(v_toBind_757_);
lean_inc(v_endTags_796_);
lean_inc_ref(v_inst_746_);
lean_inc(v_w_744_);
v___f_807_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__6___boxed), 11, 10);
lean_closure_set(v___f_807_, 0, v_breakHere_802_);
lean_closure_set(v___f_807_, 1, v_w_744_);
lean_closure_set(v___f_807_, 2, v_inst_745_);
lean_closure_set(v___f_807_, 3, v_inst_746_);
lean_closure_set(v___f_807_, 4, v_endTags_796_);
lean_closure_set(v___f_807_, 5, v_activeTags_770_);
lean_closure_set(v___f_807_, 6, v_toBind_757_);
lean_closure_set(v___f_807_, 7, v_pushOutput_794_);
lean_closure_set(v___f_807_, 8, v___x_806_);
lean_closure_set(v___f_807_, 9, v___x_805_);
v___x_808_ = lean_obj_once(&l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__1, &l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__1_once, _init_l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__1);
v___x_809_ = lean_nat_sub(v_w_744_, v___x_808_);
lean_dec(v_w_744_);
v___x_810_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___redArg(v_flb_763_, v_tail_764_, v_tail_758_, v___x_809_, v_inst_745_, v_inst_746_);
v___x_811_ = lean_apply_4(v_toBind_757_, lean_box(0), lean_box(0), v___x_810_, v___f_807_);
return v___x_811_;
}
}
}
case 2:
{
uint8_t v_force_812_; lean_object* v___f_813_; lean_object* v___f_814_; uint8_t v___x_818_; 
lean_inc_n(v_toBind_757_, 3);
lean_dec_ref(v_gs_x27_775_);
lean_del_object(v___x_772_);
lean_del_object(v___x_766_);
lean_dec(v_tail_764_);
lean_del_object(v___x_760_);
lean_dec(v_tail_758_);
lean_dec_ref(v_inst_745_);
lean_dec(v_w_744_);
v_force_812_ = lean_ctor_get_uint8(v_f_768_, 0);
lean_dec_ref_known(v_f_768_, 0);
lean_inc_ref(v___f_776_);
lean_inc(v_activeTags_770_);
lean_inc_ref_n(v_inst_746_, 2);
v___f_813_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__8), 5, 4);
lean_closure_set(v___f_813_, 0, v_inst_746_);
lean_closure_set(v___f_813_, 1, v_activeTags_770_);
lean_closure_set(v___f_813_, 2, v_toBind_757_);
lean_closure_set(v___f_813_, 3, v___f_776_);
lean_inc_ref(v___f_813_);
v___f_814_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_814_, 0, v_indent_769_);
lean_closure_set(v___f_814_, 1, v_inst_746_);
lean_closure_set(v___f_814_, 2, v_toBind_757_);
lean_closure_set(v___f_814_, 3, v___f_813_);
lean_closure_set(v___f_814_, 4, v___f_813_);
v___x_818_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_762_);
lean_dec(v_fla_762_);
if (v___x_818_ == 0)
{
lean_dec_ref(v___f_776_);
lean_dec(v_activeTags_770_);
goto v___jp_815_;
}
else
{
if (v_force_812_ == 0)
{
lean_dec_ref(v___f_814_);
goto v___jp_777_;
}
else
{
lean_dec_ref(v___f_776_);
lean_dec(v_activeTags_770_);
goto v___jp_815_;
}
}
v___jp_815_:
{
lean_object* v_currColumn_816_; lean_object* v___x_817_; 
v_currColumn_816_ = lean_ctor_get(v_inst_746_, 2);
lean_inc(v_currColumn_816_);
lean_dec_ref(v_inst_746_);
v___x_817_ = lean_apply_4(v_toBind_757_, lean_box(0), lean_box(0), v_currColumn_816_, v___f_814_);
return v___x_817_;
}
}
case 3:
{
lean_object* v_a_819_; uint32_t v___x_820_; lean_object* v_p_821_; lean_object* v___x_822_; uint8_t v_decide_823_; 
lean_inc(v_toBind_757_);
lean_del_object(v___x_772_);
lean_del_object(v___x_766_);
lean_del_object(v___x_760_);
v_a_819_ = lean_ctor_get(v_f_768_, 0);
lean_inc_ref_n(v_a_819_, 2);
lean_dec_ref_known(v_f_768_, 1);
v___x_820_ = 10;
v_p_821_ = lean_string_posof(v_a_819_, v___x_820_);
v___x_822_ = lean_string_utf8_byte_size(v_a_819_);
v_decide_823_ = lean_nat_dec_eq(v_p_821_, v___x_822_);
if (v_decide_823_ == 0)
{
lean_object* v_pushOutput_824_; lean_object* v_pushNewline_825_; lean_object* v___x_826_; lean_object* v___f_827_; lean_object* v___f_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
lean_dec_ref(v___f_776_);
v_pushOutput_824_ = lean_ctor_get(v_inst_746_, 0);
lean_inc(v_pushOutput_824_);
v_pushNewline_825_ = lean_ctor_get(v_inst_746_, 1);
lean_inc(v_pushNewline_825_);
v___x_826_ = lean_box(v_flb_763_);
lean_inc_n(v_toBind_757_, 2);
lean_inc(v_indent_769_);
lean_inc(v_p_821_);
lean_inc_ref(v_a_819_);
v___f_827_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__2___boxed), 15, 14);
lean_closure_set(v___f_827_, 0, v_a_819_);
lean_closure_set(v___f_827_, 1, v_p_821_);
lean_closure_set(v___f_827_, 2, v___x_822_);
lean_closure_set(v___f_827_, 3, v_indent_769_);
lean_closure_set(v___f_827_, 4, v_activeTags_770_);
lean_closure_set(v___f_827_, 5, v_tail_764_);
lean_closure_set(v___f_827_, 6, v_fla_762_);
lean_closure_set(v___f_827_, 7, v___x_826_);
lean_closure_set(v___f_827_, 8, v_tail_758_);
lean_closure_set(v___f_827_, 9, v_w_744_);
lean_closure_set(v___f_827_, 10, v_inst_745_);
lean_closure_set(v___f_827_, 11, v_inst_746_);
lean_closure_set(v___f_827_, 12, v_toBind_757_);
lean_closure_set(v___f_827_, 13, v_gs_x27_775_);
v___f_828_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__9___boxed), 5, 4);
lean_closure_set(v___f_828_, 0, v_indent_769_);
lean_closure_set(v___f_828_, 1, v_pushNewline_825_);
lean_closure_set(v___f_828_, 2, v_toBind_757_);
lean_closure_set(v___f_828_, 3, v___f_827_);
v___x_829_ = lean_unsigned_to_nat(0u);
v___x_830_ = lean_string_utf8_extract(v_a_819_, v___x_829_, v_p_821_);
lean_dec(v_p_821_);
lean_dec_ref(v_a_819_);
v___x_831_ = lean_apply_1(v_pushOutput_824_, v___x_830_);
v___x_832_ = lean_apply_4(v_toBind_757_, lean_box(0), lean_box(0), v___x_831_, v___f_828_);
return v___x_832_;
}
else
{
lean_object* v_pushOutput_833_; lean_object* v_endTags_834_; lean_object* v___f_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
lean_dec(v_p_821_);
lean_dec_ref(v_gs_x27_775_);
lean_dec(v_indent_769_);
lean_dec(v_tail_764_);
lean_dec(v_fla_762_);
lean_dec(v_tail_758_);
lean_dec_ref(v_inst_745_);
lean_dec(v_w_744_);
v_pushOutput_833_ = lean_ctor_get(v_inst_746_, 0);
lean_inc(v_pushOutput_833_);
v_endTags_834_ = lean_ctor_get(v_inst_746_, 4);
lean_inc(v_endTags_834_);
lean_dec_ref(v_inst_746_);
lean_inc(v_toBind_757_);
v___f_835_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__3), 5, 4);
lean_closure_set(v___f_835_, 0, v_endTags_834_);
lean_closure_set(v___f_835_, 1, v_activeTags_770_);
lean_closure_set(v___f_835_, 2, v_toBind_757_);
lean_closure_set(v___f_835_, 3, v___f_776_);
v___x_836_ = lean_apply_1(v_pushOutput_833_, v_a_819_);
v___x_837_ = lean_apply_4(v_toBind_757_, lean_box(0), lean_box(0), v___x_836_, v___f_835_);
return v___x_837_;
}
}
case 4:
{
lean_object* v_indent_838_; lean_object* v_f_839_; lean_object* v___x_840_; lean_object* v___x_842_; 
lean_dec_ref(v___f_776_);
lean_dec_ref(v_gs_x27_775_);
lean_del_object(v___x_760_);
v_indent_838_ = lean_ctor_get(v_f_768_, 0);
lean_inc(v_indent_838_);
v_f_839_ = lean_ctor_get(v_f_768_, 1);
lean_inc(v_f_839_);
lean_dec_ref_known(v_f_768_, 2);
v___x_840_ = lean_int_add(v_indent_769_, v_indent_838_);
lean_dec(v_indent_838_);
lean_dec(v_indent_769_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 1, v___x_840_);
lean_ctor_set(v___x_772_, 0, v_f_839_);
v___x_842_ = v___x_772_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_f_839_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v___x_840_);
lean_ctor_set(v_reuseFailAlloc_848_, 2, v_activeTags_770_);
v___x_842_ = v_reuseFailAlloc_848_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
lean_object* v___x_844_; 
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 0, v___x_842_);
v___x_844_ = v___x_766_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v___x_842_);
lean_ctor_set(v_reuseFailAlloc_847_, 1, v_tail_764_);
v___x_844_ = v_reuseFailAlloc_847_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
lean_object* v___x_845_; 
v___x_845_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(v_fla_762_, v_flb_763_, v_tail_758_, v___x_844_);
v_x_747_ = v___x_845_;
goto _start;
}
}
}
case 5:
{
lean_object* v_a_849_; lean_object* v_a_850_; lean_object* v___x_851_; lean_object* v___x_853_; 
lean_dec_ref(v___f_776_);
lean_dec_ref(v_gs_x27_775_);
v_a_849_ = lean_ctor_get(v_f_768_, 0);
lean_inc(v_a_849_);
v_a_850_ = lean_ctor_get(v_f_768_, 1);
lean_inc(v_a_850_);
lean_dec_ref_known(v_f_768_, 2);
v___x_851_ = lean_unsigned_to_nat(0u);
lean_inc(v_indent_769_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 2, v___x_851_);
lean_ctor_set(v___x_772_, 0, v_a_849_);
v___x_853_ = v___x_772_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_a_849_);
lean_ctor_set(v_reuseFailAlloc_863_, 1, v_indent_769_);
lean_ctor_set(v_reuseFailAlloc_863_, 2, v___x_851_);
v___x_853_ = v_reuseFailAlloc_863_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
lean_object* v___x_854_; lean_object* v___x_856_; 
v___x_854_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_854_, 0, v_a_850_);
lean_ctor_set(v___x_854_, 1, v_indent_769_);
lean_ctor_set(v___x_854_, 2, v_activeTags_770_);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 0, v___x_854_);
v___x_856_ = v___x_766_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v___x_854_);
lean_ctor_set(v_reuseFailAlloc_862_, 1, v_tail_764_);
v___x_856_ = v_reuseFailAlloc_862_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
lean_object* v___x_858_; 
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 1, v___x_856_);
lean_ctor_set(v___x_760_, 0, v___x_853_);
v___x_858_ = v___x_760_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v___x_853_);
lean_ctor_set(v_reuseFailAlloc_861_, 1, v___x_856_);
v___x_858_ = v_reuseFailAlloc_861_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
lean_object* v___x_859_; 
v___x_859_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(v_fla_762_, v_flb_763_, v_tail_758_, v___x_858_);
v_x_747_ = v___x_859_;
goto _start;
}
}
}
}
case 6:
{
lean_object* v_a_864_; uint8_t v_behavior_865_; uint8_t v___x_866_; 
lean_dec_ref(v___f_776_);
lean_dec_ref(v_gs_x27_775_);
lean_del_object(v___x_760_);
v_a_864_ = lean_ctor_get(v_f_768_, 0);
lean_inc(v_a_864_);
v_behavior_865_ = lean_ctor_get_uint8(v_f_768_, sizeof(void*)*1);
lean_dec_ref_known(v_f_768_, 1);
v___x_866_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_762_);
if (v___x_866_ == 0)
{
lean_object* v___x_868_; 
lean_inc(v_toBind_757_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 0, v_a_864_);
v___x_868_ = v___x_772_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_a_864_);
lean_ctor_set(v_reuseFailAlloc_877_, 1, v_indent_769_);
lean_ctor_set(v_reuseFailAlloc_877_, 2, v_activeTags_770_);
v___x_868_ = v_reuseFailAlloc_877_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
lean_object* v___x_869_; lean_object* v___x_871_; 
v___x_869_ = lean_box(0);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 1, v___x_869_);
lean_ctor_set(v___x_766_, 0, v___x_868_);
v___x_871_ = v___x_766_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v___x_868_);
lean_ctor_set(v_reuseFailAlloc_876_, 1, v___x_869_);
v___x_871_ = v_reuseFailAlloc_876_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_872_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(v_fla_762_, v_flb_763_, v_tail_758_, v_tail_764_);
lean_inc_ref(v_inst_746_);
lean_inc_ref(v_inst_745_);
lean_inc(v_w_744_);
v___x_873_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___redArg(v_behavior_865_, v___x_871_, v___x_872_, v_w_744_, v_inst_745_, v_inst_746_);
v___x_874_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg), 4, 3);
lean_closure_set(v___x_874_, 0, v_w_744_);
lean_closure_set(v___x_874_, 1, v_inst_745_);
lean_closure_set(v___x_874_, 2, v_inst_746_);
v___x_875_ = lean_apply_4(v_toBind_757_, lean_box(0), lean_box(0), v___x_873_, v___x_874_);
return v___x_875_;
}
}
}
else
{
lean_object* v___x_879_; 
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 0, v_a_864_);
v___x_879_ = v___x_772_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_a_864_);
lean_ctor_set(v_reuseFailAlloc_885_, 1, v_indent_769_);
lean_ctor_set(v_reuseFailAlloc_885_, 2, v_activeTags_770_);
v___x_879_ = v_reuseFailAlloc_885_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
lean_object* v___x_881_; 
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 0, v___x_879_);
v___x_881_ = v___x_766_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v___x_879_);
lean_ctor_set(v_reuseFailAlloc_884_, 1, v_tail_764_);
v___x_881_ = v_reuseFailAlloc_884_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
lean_object* v___x_882_; 
v___x_882_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(v_fla_762_, v_flb_763_, v_tail_758_, v___x_881_);
v_x_747_ = v___x_882_;
goto _start;
}
}
}
}
default: 
{
lean_object* v_a_886_; lean_object* v_a_887_; lean_object* v_startTag_888_; lean_object* v___f_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
lean_inc(v_toBind_757_);
lean_dec_ref(v___f_776_);
lean_del_object(v___x_772_);
lean_del_object(v___x_766_);
lean_dec(v_fla_762_);
lean_del_object(v___x_760_);
lean_dec(v_tail_758_);
v_a_886_ = lean_ctor_get(v_f_768_, 0);
lean_inc(v_a_886_);
v_a_887_ = lean_ctor_get(v_f_768_, 1);
lean_inc(v_a_887_);
lean_dec_ref_known(v_f_768_, 2);
v_startTag_888_ = lean_ctor_get(v_inst_746_, 3);
lean_inc(v_startTag_888_);
v___f_889_ = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__12___boxed), 9, 8);
lean_closure_set(v___f_889_, 0, v_activeTags_770_);
lean_closure_set(v___f_889_, 1, v_a_887_);
lean_closure_set(v___f_889_, 2, v_indent_769_);
lean_closure_set(v___f_889_, 3, v_tail_764_);
lean_closure_set(v___f_889_, 4, v_gs_x27_775_);
lean_closure_set(v___f_889_, 5, v_w_744_);
lean_closure_set(v___f_889_, 6, v_inst_745_);
lean_closure_set(v___f_889_, 7, v_inst_746_);
v___x_890_ = lean_apply_1(v_startTag_888_, v_a_886_);
v___x_891_ = lean_apply_4(v_toBind_757_, lean_box(0), lean_box(0), v___x_890_, v___f_889_);
return v___x_891_;
}
}
v___jp_777_:
{
lean_object* v_endTags_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v_endTags_778_ = lean_ctor_get(v_inst_746_, 4);
lean_inc(v_endTags_778_);
lean_dec_ref(v_inst_746_);
v___x_779_ = lean_apply_1(v_endTags_778_, v_activeTags_770_);
v___x_780_ = lean_apply_4(v_toBind_757_, lean_box(0), lean_box(0), v___x_779_, v___f_776_);
return v___x_780_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__4(lean_object* v_w_897_, lean_object* v_inst_898_, lean_object* v_inst_899_, lean_object* v_____x_900_, lean_object* v_____r_901_){
_start:
{
lean_object* v___x_902_; 
v___x_902_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg(v_w_897_, v_inst_898_, v_inst_899_, v_____x_900_);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be(lean_object* v_m_903_, lean_object* v_w_904_, lean_object* v_inst_905_, lean_object* v_inst_906_, lean_object* v_x_907_){
_start:
{
lean_object* v___x_908_; 
v___x_908_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg(v_w_904_, v_inst_905_, v_inst_906_, v_x_907_);
return v___x_908_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_prettyM___redArg(lean_object* v_f_909_, lean_object* v_w_910_, lean_object* v_indent_911_, lean_object* v_inst_912_, lean_object* v_inst_913_){
_start:
{
lean_object* v___x_914_; uint8_t v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_914_ = lean_box(1);
v___x_915_ = 0;
v___x_916_ = lean_nat_to_int(v_indent_911_);
v___x_917_ = lean_unsigned_to_nat(0u);
v___x_918_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_918_, 0, v_f_909_);
lean_ctor_set(v___x_918_, 1, v___x_916_);
lean_ctor_set(v___x_918_, 2, v___x_917_);
v___x_919_ = lean_box(0);
v___x_920_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_920_, 0, v___x_918_);
lean_ctor_set(v___x_920_, 1, v___x_919_);
v___x_921_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_921_, 0, v___x_914_);
lean_ctor_set(v___x_921_, 1, v___x_920_);
lean_ctor_set_uint8(v___x_921_, sizeof(void*)*2, v___x_915_);
v___x_922_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_922_, 0, v___x_921_);
lean_ctor_set(v___x_922_, 1, v___x_919_);
v___x_923_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg(v_w_910_, v_inst_912_, v_inst_913_, v___x_922_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_prettyM(lean_object* v_m_924_, lean_object* v_f_925_, lean_object* v_w_926_, lean_object* v_indent_927_, lean_object* v_inst_928_, lean_object* v_inst_929_){
_start:
{
lean_object* v___x_930_; 
v___x_930_ = l_Std_Format_prettyM___redArg(v_f_925_, v_w_926_, v_indent_927_, v_inst_928_, v_inst_929_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_bracket(lean_object* v_l_931_, lean_object* v_f_932_, lean_object* v_r_933_){
_start:
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; uint8_t v___x_941_; lean_object* v___x_942_; 
v___x_934_ = lean_string_length(v_l_931_);
v___x_935_ = lean_nat_to_int(v___x_934_);
v___x_936_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_936_, 0, v_l_931_);
v___x_937_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_937_, 0, v___x_936_);
lean_ctor_set(v___x_937_, 1, v_f_932_);
v___x_938_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_938_, 0, v_r_933_);
v___x_939_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_939_, 0, v___x_937_);
lean_ctor_set(v___x_939_, 1, v___x_938_);
v___x_940_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_940_, 0, v___x_935_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
v___x_941_ = 0;
v___x_942_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_942_, 0, v___x_940_);
lean_ctor_set_uint8(v___x_942_, sizeof(void*)*1, v___x_941_);
return v___x_942_;
}
}
static lean_object* _init_l_Std_Format_paren___closed__2(void){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_945_ = ((lean_object*)(l_Std_Format_paren___closed__0));
v___x_946_ = lean_string_length(v___x_945_);
return v___x_946_;
}
}
static lean_object* _init_l_Std_Format_paren___closed__3(void){
_start:
{
lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_947_ = lean_obj_once(&l_Std_Format_paren___closed__2, &l_Std_Format_paren___closed__2_once, _init_l_Std_Format_paren___closed__2);
v___x_948_ = lean_nat_to_int(v___x_947_);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_paren(lean_object* v_f_953_){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; uint8_t v___x_960_; lean_object* v___x_961_; 
v___x_954_ = lean_obj_once(&l_Std_Format_paren___closed__3, &l_Std_Format_paren___closed__3_once, _init_l_Std_Format_paren___closed__3);
v___x_955_ = ((lean_object*)(l_Std_Format_paren___closed__4));
v___x_956_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_956_, 0, v___x_955_);
lean_ctor_set(v___x_956_, 1, v_f_953_);
v___x_957_ = ((lean_object*)(l_Std_Format_paren___closed__5));
v___x_958_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_958_, 0, v___x_956_);
lean_ctor_set(v___x_958_, 1, v___x_957_);
v___x_959_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_954_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
v___x_960_ = 0;
v___x_961_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_961_, 0, v___x_959_);
lean_ctor_set_uint8(v___x_961_, sizeof(void*)*1, v___x_960_);
return v___x_961_;
}
}
static lean_object* _init_l_Std_Format_sbracket___closed__2(void){
_start:
{
lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_964_ = ((lean_object*)(l_Std_Format_sbracket___closed__0));
v___x_965_ = lean_string_length(v___x_964_);
return v___x_965_;
}
}
static lean_object* _init_l_Std_Format_sbracket___closed__3(void){
_start:
{
lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_966_ = lean_obj_once(&l_Std_Format_sbracket___closed__2, &l_Std_Format_sbracket___closed__2_once, _init_l_Std_Format_sbracket___closed__2);
v___x_967_ = lean_nat_to_int(v___x_966_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_sbracket(lean_object* v_f_972_){
_start:
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; uint8_t v___x_979_; lean_object* v___x_980_; 
v___x_973_ = lean_obj_once(&l_Std_Format_sbracket___closed__3, &l_Std_Format_sbracket___closed__3_once, _init_l_Std_Format_sbracket___closed__3);
v___x_974_ = ((lean_object*)(l_Std_Format_sbracket___closed__4));
v___x_975_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_975_, 0, v___x_974_);
lean_ctor_set(v___x_975_, 1, v_f_972_);
v___x_976_ = ((lean_object*)(l_Std_Format_sbracket___closed__5));
v___x_977_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_977_, 0, v___x_975_);
lean_ctor_set(v___x_977_, 1, v___x_976_);
v___x_978_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_973_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v___x_979_ = 0;
v___x_980_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_980_, 0, v___x_978_);
lean_ctor_set_uint8(v___x_980_, sizeof(void*)*1, v___x_979_);
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_bracketFill(lean_object* v_l_981_, lean_object* v_f_982_, lean_object* v_r_983_){
_start:
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_984_ = lean_string_length(v_l_981_);
v___x_985_ = lean_nat_to_int(v___x_984_);
v___x_986_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_986_, 0, v_l_981_);
v___x_987_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
lean_ctor_set(v___x_987_, 1, v_f_982_);
v___x_988_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_988_, 0, v_r_983_);
v___x_989_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_989_, 0, v___x_987_);
lean_ctor_set(v___x_989_, 1, v___x_988_);
v___x_990_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_985_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = l_Std_Format_fill(v___x_990_);
return v___x_991_;
}
}
static lean_object* _init_l_Std_Format_defIndent(void){
_start:
{
lean_object* v___x_992_; 
v___x_992_ = lean_unsigned_to_nat(2u);
return v___x_992_;
}
}
static uint8_t _init_l_Std_Format_defUnicode(void){
_start:
{
uint8_t v___x_993_; 
v___x_993_ = 1;
return v___x_993_;
}
}
static lean_object* _init_l_Std_Format_defWidth(void){
_start:
{
lean_object* v___x_994_; 
v___x_994_ = lean_unsigned_to_nat(120u);
return v___x_994_;
}
}
static lean_object* _init_l_Std_Format_nestD___closed__0(void){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = lean_unsigned_to_nat(2u);
v___x_996_ = lean_nat_to_int(v___x_995_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_nestD(lean_object* v_f_997_){
_start:
{
lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_998_ = lean_obj_once(&l_Std_Format_nestD___closed__0, &l_Std_Format_nestD___closed__0_once, _init_l_Std_Format_nestD___closed__0);
v___x_999_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_998_);
lean_ctor_set(v___x_999_, 1, v_f_997_);
return v___x_999_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_indentD(lean_object* v_f_1000_){
_start:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_1001_ = lean_box(1);
v___x_1002_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_1001_);
lean_ctor_set(v___x_1002_, 1, v_f_1000_);
v___x_1003_ = l_Std_Format_nestD(v___x_1002_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__0(lean_object* v_s_1004_, lean_object* v___y_1005_){
_start:
{
lean_object* v_out_1006_; lean_object* v_column_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1019_; 
v_out_1006_ = lean_ctor_get(v___y_1005_, 0);
v_column_1007_ = lean_ctor_get(v___y_1005_, 1);
v_isSharedCheck_1019_ = !lean_is_exclusive(v___y_1005_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1009_ = v___y_1005_;
v_isShared_1010_ = v_isSharedCheck_1019_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_column_1007_);
lean_inc(v_out_1006_);
lean_dec(v___y_1005_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1019_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1016_; 
v___x_1011_ = lean_box(0);
v___x_1012_ = lean_string_append(v_out_1006_, v_s_1004_);
v___x_1013_ = lean_string_length(v_s_1004_);
v___x_1014_ = lean_nat_add(v_column_1007_, v___x_1013_);
lean_dec(v___x_1013_);
lean_dec(v_column_1007_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 1, v___x_1014_);
lean_ctor_set(v___x_1009_, 0, v___x_1012_);
v___x_1016_ = v___x_1009_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v___x_1012_);
lean_ctor_set(v_reuseFailAlloc_1018_, 1, v___x_1014_);
v___x_1016_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
lean_object* v___x_1017_; 
v___x_1017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1011_);
lean_ctor_set(v___x_1017_, 1, v___x_1016_);
return v___x_1017_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__0___boxed(lean_object* v_s_1020_, lean_object* v___y_1021_){
_start:
{
lean_object* v_res_1022_; 
v_res_1022_ = l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__0(v_s_1020_, v___y_1021_);
lean_dec_ref(v_s_1020_);
return v_res_1022_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__1(lean_object* v_indent_1024_, lean_object* v___y_1025_){
_start:
{
lean_object* v_out_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1039_; 
v_out_1026_ = lean_ctor_get(v___y_1025_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v___y_1025_);
if (v_isSharedCheck_1039_ == 0)
{
lean_object* v_unused_1040_; 
v_unused_1040_ = lean_ctor_get(v___y_1025_, 1);
lean_dec(v_unused_1040_);
v___x_1028_ = v___y_1025_;
v_isShared_1029_ = v_isSharedCheck_1039_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_out_1026_);
lean_dec(v___y_1025_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1039_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; uint32_t v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1036_; 
v___x_1030_ = lean_box(0);
v___x_1031_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__1___closed__0));
v___x_1032_ = 32;
lean_inc(v_indent_1024_);
v___x_1033_ = lean_string_pushn(v___x_1031_, v___x_1032_, v_indent_1024_);
v___x_1034_ = lean_string_append(v_out_1026_, v___x_1033_);
lean_dec_ref(v___x_1033_);
if (v_isShared_1029_ == 0)
{
lean_ctor_set(v___x_1028_, 1, v_indent_1024_);
lean_ctor_set(v___x_1028_, 0, v___x_1034_);
v___x_1036_ = v___x_1028_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v___x_1034_);
lean_ctor_set(v_reuseFailAlloc_1038_, 1, v_indent_1024_);
v___x_1036_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
lean_object* v___x_1037_; 
v___x_1037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1030_);
lean_ctor_set(v___x_1037_, 1, v___x_1036_);
return v___x_1037_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__2(lean_object* v_____do__lift_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v_column_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1050_; 
v_column_1043_ = lean_ctor_get(v_____do__lift_1041_, 1);
v_isSharedCheck_1050_ = !lean_is_exclusive(v_____do__lift_1041_);
if (v_isSharedCheck_1050_ == 0)
{
lean_object* v_unused_1051_; 
v_unused_1051_ = lean_ctor_get(v_____do__lift_1041_, 0);
lean_dec(v_unused_1051_);
v___x_1045_ = v_____do__lift_1041_;
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_column_1043_);
lean_dec(v_____do__lift_1041_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1048_; 
if (v_isShared_1046_ == 0)
{
lean_ctor_set(v___x_1045_, 1, v___y_1042_);
lean_ctor_set(v___x_1045_, 0, v_column_1043_);
v___x_1048_ = v___x_1045_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_column_1043_);
lean_ctor_set(v_reuseFailAlloc_1049_, 1, v___y_1042_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__3(lean_object* v_x_1052_, lean_object* v___y_1053_){
_start:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1054_ = lean_box(0);
v___x_1055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
lean_ctor_set(v___x_1055_, 1, v___y_1053_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__3___boxed(lean_object* v_x_1056_, lean_object* v___y_1057_){
_start:
{
lean_object* v_res_1058_; 
v_res_1058_ = l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__3(v_x_1056_, v___y_1057_);
lean_dec(v_x_1056_);
return v_res_1058_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__1(uint8_t v_flb_1094_, lean_object* v_items_1095_, lean_object* v_gs_1096_, lean_object* v_w_1097_, lean_object* v___y_1098_){
_start:
{
uint8_t v___y_1100_; lean_object* v_column_1105_; uint8_t v___x_1106_; uint8_t v___x_1107_; lean_object* v___x_1108_; lean_object* v_g_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v_r_1113_; uint8_t v_foundLine_1114_; uint8_t v_foundFlattenedHardLine_1115_; lean_object* v_space_1116_; lean_object* v___y_1118_; uint8_t v___x_1122_; 
v_column_1105_ = lean_ctor_get(v___y_1098_, 1);
v___x_1106_ = 0;
v___x_1107_ = l_Std_Format_instBEqFlattenBehavior_beq(v_flb_1094_, v___x_1106_);
v___x_1108_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_1108_, 0, v___x_1107_);
lean_inc(v_items_1095_);
v_g_1109_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_g_1109_, 0, v___x_1108_);
lean_ctor_set(v_g_1109_, 1, v_items_1095_);
lean_ctor_set_uint8(v_g_1109_, sizeof(void*)*2, v_flb_1094_);
v___x_1110_ = lean_box(0);
v___x_1111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1111_, 0, v_g_1109_);
lean_ctor_set(v___x_1111_, 1, v___x_1110_);
v___x_1112_ = lean_nat_sub(v_w_1097_, v_column_1105_);
lean_inc(v___x_1112_);
lean_inc(v_column_1105_);
v_r_1113_ = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(v___x_1111_, v_column_1105_, v___x_1112_);
v_foundLine_1114_ = lean_ctor_get_uint8(v_r_1113_, sizeof(void*)*1);
v_foundFlattenedHardLine_1115_ = lean_ctor_get_uint8(v_r_1113_, sizeof(void*)*1 + 1);
v_space_1116_ = lean_ctor_get(v_r_1113_, 0);
v___x_1122_ = lean_nat_dec_lt(v___x_1112_, v_space_1116_);
if (v___x_1122_ == 0)
{
if (v_foundLine_1114_ == 0)
{
lean_object* v___x_1123_; lean_object* v_r_u2082_1124_; uint8_t v_foundLine_1125_; uint8_t v_foundFlattenedHardLine_1126_; lean_object* v_space_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1135_; 
lean_inc(v_space_1116_);
lean_dec_ref(v_r_1113_);
v___x_1123_ = lean_nat_sub(v___x_1112_, v_space_1116_);
lean_inc(v_column_1105_);
lean_inc(v_gs_1096_);
v_r_u2082_1124_ = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(v_gs_1096_, v_column_1105_, v___x_1123_);
v_foundLine_1125_ = lean_ctor_get_uint8(v_r_u2082_1124_, sizeof(void*)*1);
v_foundFlattenedHardLine_1126_ = lean_ctor_get_uint8(v_r_u2082_1124_, sizeof(void*)*1 + 1);
v_space_1127_ = lean_ctor_get(v_r_u2082_1124_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v_r_u2082_1124_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1129_ = v_r_u2082_1124_;
v_isShared_1130_ = v_isSharedCheck_1135_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_space_1127_);
lean_dec(v_r_u2082_1124_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1135_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1131_; lean_object* v___x_1133_; 
v___x_1131_ = lean_nat_add(v_space_1116_, v_space_1127_);
lean_dec(v_space_1127_);
lean_dec(v_space_1116_);
if (v_isShared_1130_ == 0)
{
lean_ctor_set(v___x_1129_, 0, v___x_1131_);
v___x_1133_ = v___x_1129_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v___x_1131_);
lean_ctor_set_uint8(v_reuseFailAlloc_1134_, sizeof(void*)*1, v_foundLine_1125_);
lean_ctor_set_uint8(v_reuseFailAlloc_1134_, sizeof(void*)*1 + 1, v_foundFlattenedHardLine_1126_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
v___y_1118_ = v___x_1133_;
goto v___jp_1117_;
}
}
}
else
{
v___y_1118_ = v_r_1113_;
goto v___jp_1117_;
}
}
else
{
v___y_1118_ = v_r_1113_;
goto v___jp_1117_;
}
v___jp_1099_:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1101_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_1101_, 0, v___y_1100_);
v___x_1102_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
lean_ctor_set(v___x_1102_, 1, v_items_1095_);
lean_ctor_set_uint8(v___x_1102_, sizeof(void*)*2, v_flb_1094_);
v___x_1103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1102_);
lean_ctor_set(v___x_1103_, 1, v_gs_1096_);
v___x_1104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1103_);
lean_ctor_set(v___x_1104_, 1, v___y_1098_);
return v___x_1104_;
}
v___jp_1117_:
{
if (v_foundFlattenedHardLine_1115_ == 0)
{
lean_object* v_space_1119_; uint8_t v___x_1120_; 
v_space_1119_ = lean_ctor_get(v___y_1118_, 0);
lean_inc(v_space_1119_);
lean_dec_ref(v___y_1118_);
v___x_1120_ = lean_nat_dec_le(v_space_1119_, v___x_1112_);
lean_dec(v___x_1112_);
lean_dec(v_space_1119_);
v___y_1100_ = v___x_1120_;
goto v___jp_1099_;
}
else
{
uint8_t v___x_1121_; 
lean_dec_ref(v___y_1118_);
lean_dec(v___x_1112_);
v___x_1121_ = 0;
v___y_1100_ = v___x_1121_;
goto v___jp_1099_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__1___boxed(lean_object* v_flb_1136_, lean_object* v_items_1137_, lean_object* v_gs_1138_, lean_object* v_w_1139_, lean_object* v___y_1140_){
_start:
{
uint8_t v_flb_boxed_1141_; lean_object* v_res_1142_; 
v_flb_boxed_1141_ = lean_unbox(v_flb_1136_);
v_res_1142_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__1(v_flb_boxed_1141_, v_items_1137_, v_gs_1138_, v_w_1139_, v___y_1140_);
lean_dec(v_w_1139_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2(lean_object* v_msg_1157_, lean_object* v___y_1158_){
_start:
{
lean_object* v___f_1159_; lean_object* v___f_1160_; lean_object* v___f_1161_; lean_object* v___f_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_4695__overap_1171_; lean_object* v___x_1172_; 
v___f_1159_ = ((lean_object*)(l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__0));
v___f_1160_ = ((lean_object*)(l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__1));
v___f_1161_ = ((lean_object*)(l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__2));
v___f_1162_ = ((lean_object*)(l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__3));
v___x_1163_ = ((lean_object*)(l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__4));
v___x_1164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1163_);
lean_ctor_set(v___x_1164_, 1, v___f_1159_);
v___x_1165_ = ((lean_object*)(l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__5));
v___x_1166_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1166_, 0, v___x_1164_);
lean_ctor_set(v___x_1166_, 1, v___x_1165_);
lean_ctor_set(v___x_1166_, 2, v___f_1160_);
lean_ctor_set(v___x_1166_, 3, v___f_1161_);
lean_ctor_set(v___x_1166_, 4, v___f_1162_);
v___x_1167_ = ((lean_object*)(l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2___closed__6));
v___x_1168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1168_, 0, v___x_1166_);
lean_ctor_set(v___x_1168_, 1, v___x_1167_);
v___x_1169_ = lean_box(0);
v___x_1170_ = l_instInhabitedOfMonad___redArg(v___x_1168_, v___x_1169_);
v___x_4695__overap_1171_ = lean_panic_fn_borrowed(v___x_1170_, v_msg_1157_);
lean_dec(v___x_1170_);
v___x_1172_ = lean_apply_1(v___x_4695__overap_1171_, v___y_1158_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0(lean_object* v_w_1173_, lean_object* v_x_1174_, lean_object* v___y_1175_){
_start:
{
if (lean_obj_tag(v_x_1174_) == 0)
{
lean_object* v___x_1176_; lean_object* v___x_1177_; 
v___x_1176_ = lean_box(0);
v___x_1177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1176_);
lean_ctor_set(v___x_1177_, 1, v___y_1175_);
return v___x_1177_;
}
else
{
lean_object* v_head_1178_; lean_object* v_items_1179_; 
v_head_1178_ = lean_ctor_get(v_x_1174_, 0);
v_items_1179_ = lean_ctor_get(v_head_1178_, 1);
lean_inc(v_items_1179_);
if (lean_obj_tag(v_items_1179_) == 0)
{
lean_object* v_tail_1180_; 
v_tail_1180_ = lean_ctor_get(v_x_1174_, 1);
lean_inc(v_tail_1180_);
lean_dec_ref_known(v_x_1174_, 2);
v_x_1174_ = v_tail_1180_;
goto _start;
}
else
{
lean_object* v_head_1182_; lean_object* v_tail_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1450_; 
lean_inc(v_head_1178_);
v_head_1182_ = lean_ctor_get(v_items_1179_, 0);
lean_inc(v_head_1182_);
v_tail_1183_ = lean_ctor_get(v_x_1174_, 1);
v_isSharedCheck_1450_ = !lean_is_exclusive(v_x_1174_);
if (v_isSharedCheck_1450_ == 0)
{
lean_object* v_unused_1451_; 
v_unused_1451_ = lean_ctor_get(v_x_1174_, 0);
lean_dec(v_unused_1451_);
v___x_1185_ = v_x_1174_;
v_isShared_1186_ = v_isSharedCheck_1450_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_tail_1183_);
lean_dec(v_x_1174_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1450_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v_fla_1187_; uint8_t v_flb_1188_; lean_object* v_tail_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1448_; 
v_fla_1187_ = lean_ctor_get(v_head_1178_, 0);
lean_inc(v_fla_1187_);
v_flb_1188_ = lean_ctor_get_uint8(v_head_1178_, sizeof(void*)*2);
lean_dec(v_head_1178_);
v_tail_1189_ = lean_ctor_get(v_items_1179_, 1);
v_isSharedCheck_1448_ = !lean_is_exclusive(v_items_1179_);
if (v_isSharedCheck_1448_ == 0)
{
lean_object* v_unused_1449_; 
v_unused_1449_ = lean_ctor_get(v_items_1179_, 0);
lean_dec(v_unused_1449_);
v___x_1191_ = v_items_1179_;
v_isShared_1192_ = v_isSharedCheck_1448_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_tail_1189_);
lean_dec(v_items_1179_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1448_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v_f_1193_; lean_object* v_indent_1194_; lean_object* v_activeTags_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1447_; 
v_f_1193_ = lean_ctor_get(v_head_1182_, 0);
v_indent_1194_ = lean_ctor_get(v_head_1182_, 1);
v_activeTags_1195_ = lean_ctor_get(v_head_1182_, 2);
v_isSharedCheck_1447_ = !lean_is_exclusive(v_head_1182_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1197_ = v_head_1182_;
v_isShared_1198_ = v_isSharedCheck_1447_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_activeTags_1195_);
lean_inc(v_indent_1194_);
lean_inc(v_f_1193_);
lean_dec(v_head_1182_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1447_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
switch(lean_obj_tag(v_f_1193_))
{
case 0:
{
lean_del_object(v___x_1197_);
lean_dec(v_activeTags_1195_);
lean_dec(v_indent_1194_);
lean_del_object(v___x_1191_);
lean_del_object(v___x_1185_);
goto v___jp_1231_;
}
case 1:
{
lean_del_object(v___x_1197_);
lean_dec(v_activeTags_1195_);
lean_del_object(v___x_1191_);
lean_del_object(v___x_1185_);
if (v_flb_1188_ == 0)
{
uint8_t v___x_1234_; 
v___x_1234_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_1187_);
if (v___x_1234_ == 0)
{
lean_object* v_out_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1249_; 
v_out_1235_ = lean_ctor_get(v___y_1175_, 0);
v_isSharedCheck_1249_ = !lean_is_exclusive(v___y_1175_);
if (v_isSharedCheck_1249_ == 0)
{
lean_object* v_unused_1250_; 
v_unused_1250_ = lean_ctor_get(v___y_1175_, 1);
lean_dec(v_unused_1250_);
v___x_1237_ = v___y_1175_;
v_isShared_1238_ = v_isSharedCheck_1249_;
goto v_resetjp_1236_;
}
else
{
lean_inc(v_out_1235_);
lean_dec(v___y_1175_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1249_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v___x_1239_; lean_object* v___x_1240_; uint32_t v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1245_; 
v___x_1239_ = l_Int_toNat(v_indent_1194_);
lean_dec(v_indent_1194_);
v___x_1240_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__1___closed__0));
v___x_1241_ = 32;
lean_inc(v___x_1239_);
v___x_1242_ = lean_string_pushn(v___x_1240_, v___x_1241_, v___x_1239_);
v___x_1243_ = lean_string_append(v_out_1235_, v___x_1242_);
lean_dec_ref(v___x_1242_);
if (v_isShared_1238_ == 0)
{
lean_ctor_set(v___x_1237_, 1, v___x_1239_);
lean_ctor_set(v___x_1237_, 0, v___x_1243_);
v___x_1245_ = v___x_1237_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v___x_1243_);
lean_ctor_set(v_reuseFailAlloc_1248_, 1, v___x_1239_);
v___x_1245_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
lean_object* v___x_1246_; 
v___x_1246_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(v_fla_1187_, v_flb_1188_, v_tail_1183_, v_tail_1189_);
v_x_1174_ = v___x_1246_;
v___y_1175_ = v___x_1245_;
goto _start;
}
}
}
else
{
lean_object* v_out_1251_; lean_object* v_column_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1265_; 
lean_dec(v_indent_1194_);
v_out_1251_ = lean_ctor_get(v___y_1175_, 0);
v_column_1252_ = lean_ctor_get(v___y_1175_, 1);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___y_1175_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1254_ = v___y_1175_;
v_isShared_1255_ = v_isSharedCheck_1265_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_column_1252_);
lean_inc(v_out_1251_);
lean_dec(v___y_1175_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1265_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1261_; 
v___x_1256_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__0));
v___x_1257_ = lean_string_append(v_out_1251_, v___x_1256_);
v___x_1258_ = lean_obj_once(&l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__1, &l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__1_once, _init_l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__1);
v___x_1259_ = lean_nat_add(v_column_1252_, v___x_1258_);
lean_dec(v_column_1252_);
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 1, v___x_1259_);
lean_ctor_set(v___x_1254_, 0, v___x_1257_);
v___x_1261_ = v___x_1254_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v___x_1257_);
lean_ctor_set(v_reuseFailAlloc_1264_, 1, v___x_1259_);
v___x_1261_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
lean_object* v___x_1262_; 
v___x_1262_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(v_fla_1187_, v_flb_1188_, v_tail_1183_, v_tail_1189_);
v_x_1174_ = v___x_1262_;
v___y_1175_ = v___x_1261_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1266_; uint8_t v___x_1267_; 
v___x_1266_ = l_Int_toNat(v_indent_1194_);
lean_dec(v_indent_1194_);
v___x_1267_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_1187_);
lean_dec(v_fla_1187_);
if (v___x_1267_ == 0)
{
lean_object* v_out_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1283_; 
v_out_1268_ = lean_ctor_get(v___y_1175_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___y_1175_);
if (v_isSharedCheck_1283_ == 0)
{
lean_object* v_unused_1284_; 
v_unused_1284_ = lean_ctor_get(v___y_1175_, 1);
lean_dec(v_unused_1284_);
v___x_1270_ = v___y_1175_;
v_isShared_1271_ = v_isSharedCheck_1283_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_out_1268_);
lean_dec(v___y_1175_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1283_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1272_; uint32_t v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1277_; 
v___x_1272_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__1___closed__0));
v___x_1273_ = 32;
lean_inc(v___x_1266_);
v___x_1274_ = lean_string_pushn(v___x_1272_, v___x_1273_, v___x_1266_);
v___x_1275_ = lean_string_append(v_out_1268_, v___x_1274_);
lean_dec_ref(v___x_1274_);
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 1, v___x_1266_);
lean_ctor_set(v___x_1270_, 0, v___x_1275_);
v___x_1277_ = v___x_1270_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v___x_1275_);
lean_ctor_set(v_reuseFailAlloc_1282_, 1, v___x_1266_);
v___x_1277_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
lean_object* v___x_1278_; lean_object* v_fst_1279_; lean_object* v_snd_1280_; 
v___x_1278_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__1(v_flb_1188_, v_tail_1189_, v_tail_1183_, v_w_1173_, v___x_1277_);
v_fst_1279_ = lean_ctor_get(v___x_1278_, 0);
lean_inc(v_fst_1279_);
v_snd_1280_ = lean_ctor_get(v___x_1278_, 1);
lean_inc(v_snd_1280_);
lean_dec_ref(v___x_1278_);
v_x_1174_ = v_fst_1279_;
v___y_1175_ = v_snd_1280_;
goto _start;
}
}
}
else
{
lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v_fst_1289_; 
v___x_1285_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__0));
v___x_1286_ = lean_obj_once(&l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__1, &l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__1_once, _init_l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___closed__1);
v___x_1287_ = lean_nat_sub(v_w_1173_, v___x_1286_);
lean_inc(v_tail_1183_);
lean_inc(v_tail_1189_);
v___x_1288_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__1(v_flb_1188_, v_tail_1189_, v_tail_1183_, v___x_1287_, v___y_1175_);
lean_dec(v___x_1287_);
v_fst_1289_ = lean_ctor_get(v___x_1288_, 0);
if (lean_obj_tag(v_fst_1289_) == 1)
{
lean_object* v_head_1290_; lean_object* v_snd_1291_; lean_object* v_fla_1292_; uint8_t v___x_1293_; 
lean_inc_ref(v_fst_1289_);
v_head_1290_ = lean_ctor_get(v_fst_1289_, 0);
v_snd_1291_ = lean_ctor_get(v___x_1288_, 1);
lean_inc(v_snd_1291_);
lean_dec_ref(v___x_1288_);
v_fla_1292_ = lean_ctor_get(v_head_1290_, 0);
v___x_1293_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_1292_);
if (v___x_1293_ == 0)
{
lean_object* v_out_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1309_; 
lean_dec_ref_known(v_fst_1289_, 2);
v_out_1294_ = lean_ctor_get(v_snd_1291_, 0);
v_isSharedCheck_1309_ = !lean_is_exclusive(v_snd_1291_);
if (v_isSharedCheck_1309_ == 0)
{
lean_object* v_unused_1310_; 
v_unused_1310_ = lean_ctor_get(v_snd_1291_, 1);
lean_dec(v_unused_1310_);
v___x_1296_ = v_snd_1291_;
v_isShared_1297_ = v_isSharedCheck_1309_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_out_1294_);
lean_dec(v_snd_1291_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1309_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1298_; uint32_t v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1303_; 
v___x_1298_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__1___closed__0));
v___x_1299_ = 32;
lean_inc(v___x_1266_);
v___x_1300_ = lean_string_pushn(v___x_1298_, v___x_1299_, v___x_1266_);
v___x_1301_ = lean_string_append(v_out_1294_, v___x_1300_);
lean_dec_ref(v___x_1300_);
if (v_isShared_1297_ == 0)
{
lean_ctor_set(v___x_1296_, 1, v___x_1266_);
lean_ctor_set(v___x_1296_, 0, v___x_1301_);
v___x_1303_ = v___x_1296_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v___x_1301_);
lean_ctor_set(v_reuseFailAlloc_1308_, 1, v___x_1266_);
v___x_1303_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
lean_object* v___x_1304_; lean_object* v_fst_1305_; lean_object* v_snd_1306_; 
v___x_1304_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__1(v_flb_1188_, v_tail_1189_, v_tail_1183_, v_w_1173_, v___x_1303_);
v_fst_1305_ = lean_ctor_get(v___x_1304_, 0);
lean_inc(v_fst_1305_);
v_snd_1306_ = lean_ctor_get(v___x_1304_, 1);
lean_inc(v_snd_1306_);
lean_dec_ref(v___x_1304_);
v_x_1174_ = v_fst_1305_;
v___y_1175_ = v_snd_1306_;
goto _start;
}
}
}
else
{
lean_object* v_out_1311_; lean_object* v_column_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1322_; 
lean_dec(v___x_1266_);
lean_dec(v_tail_1189_);
lean_dec(v_tail_1183_);
v_out_1311_ = lean_ctor_get(v_snd_1291_, 0);
v_column_1312_ = lean_ctor_get(v_snd_1291_, 1);
v_isSharedCheck_1322_ = !lean_is_exclusive(v_snd_1291_);
if (v_isSharedCheck_1322_ == 0)
{
v___x_1314_ = v_snd_1291_;
v_isShared_1315_ = v_isSharedCheck_1322_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_column_1312_);
lean_inc(v_out_1311_);
lean_dec(v_snd_1291_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1322_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1319_; 
v___x_1316_ = lean_string_append(v_out_1311_, v___x_1285_);
v___x_1317_ = lean_nat_add(v_column_1312_, v___x_1286_);
lean_dec(v_column_1312_);
if (v_isShared_1315_ == 0)
{
lean_ctor_set(v___x_1314_, 1, v___x_1317_);
lean_ctor_set(v___x_1314_, 0, v___x_1316_);
v___x_1319_ = v___x_1314_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v___x_1316_);
lean_ctor_set(v_reuseFailAlloc_1321_, 1, v___x_1317_);
v___x_1319_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
v_x_1174_ = v_fst_1289_;
v___y_1175_ = v___x_1319_;
goto _start;
}
}
}
}
else
{
lean_object* v_snd_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
lean_dec(v___x_1266_);
lean_dec(v_tail_1189_);
lean_dec(v_tail_1183_);
v_snd_1323_ = lean_ctor_get(v___x_1288_, 1);
lean_inc(v_snd_1323_);
lean_dec_ref(v___x_1288_);
v___x_1324_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__6___closed__0));
v___x_1325_ = l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__2(v___x_1324_, v_snd_1323_);
return v___x_1325_;
}
}
}
}
case 2:
{
uint8_t v_force_1326_; uint8_t v___x_1327_; 
lean_del_object(v___x_1197_);
lean_dec(v_activeTags_1195_);
lean_del_object(v___x_1191_);
lean_del_object(v___x_1185_);
v_force_1326_ = lean_ctor_get_uint8(v_f_1193_, 0);
lean_dec_ref_known(v_f_1193_, 0);
v___x_1327_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_1187_);
if (v___x_1327_ == 0)
{
goto v___jp_1199_;
}
else
{
if (v_force_1326_ == 0)
{
lean_dec(v_indent_1194_);
goto v___jp_1231_;
}
else
{
goto v___jp_1199_;
}
}
}
case 3:
{
lean_object* v_a_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1386_; 
lean_del_object(v___x_1185_);
v_a_1328_ = lean_ctor_get(v_f_1193_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v_f_1193_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1330_ = v_f_1193_;
v_isShared_1331_ = v_isSharedCheck_1386_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_a_1328_);
lean_dec(v_f_1193_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1386_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
uint32_t v___x_1332_; lean_object* v_p_1333_; lean_object* v___x_1334_; uint8_t v_decide_1335_; 
v___x_1332_ = 10;
lean_inc_ref(v_a_1328_);
v_p_1333_ = lean_string_posof(v_a_1328_, v___x_1332_);
v___x_1334_ = lean_string_utf8_byte_size(v_a_1328_);
v_decide_1335_ = lean_nat_dec_eq(v_p_1333_, v___x_1334_);
if (v_decide_1335_ == 0)
{
lean_object* v_out_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1370_; 
v_out_1336_ = lean_ctor_get(v___y_1175_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v___y_1175_);
if (v_isSharedCheck_1370_ == 0)
{
lean_object* v_unused_1371_; 
v_unused_1371_ = lean_ctor_get(v___y_1175_, 1);
lean_dec(v_unused_1371_);
v___x_1338_ = v___y_1175_;
v_isShared_1339_ = v_isSharedCheck_1370_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_out_1336_);
lean_dec(v___y_1175_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1370_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; uint32_t v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1349_; 
v___x_1340_ = lean_unsigned_to_nat(0u);
v___x_1341_ = lean_string_utf8_extract(v_a_1328_, v___x_1340_, v_p_1333_);
v___x_1342_ = lean_string_append(v_out_1336_, v___x_1341_);
lean_dec_ref(v___x_1341_);
v___x_1343_ = l_Int_toNat(v_indent_1194_);
v___x_1344_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__1___closed__0));
v___x_1345_ = 32;
lean_inc(v___x_1343_);
v___x_1346_ = lean_string_pushn(v___x_1344_, v___x_1345_, v___x_1343_);
v___x_1347_ = lean_string_append(v___x_1342_, v___x_1346_);
lean_dec_ref(v___x_1346_);
if (v_isShared_1339_ == 0)
{
lean_ctor_set(v___x_1338_, 1, v___x_1343_);
lean_ctor_set(v___x_1338_, 0, v___x_1347_);
v___x_1349_ = v___x_1338_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v___x_1347_);
lean_ctor_set(v_reuseFailAlloc_1369_, 1, v___x_1343_);
v___x_1349_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1353_; 
v___x_1350_ = lean_string_utf8_next(v_a_1328_, v_p_1333_);
lean_dec(v_p_1333_);
v___x_1351_ = lean_string_utf8_extract(v_a_1328_, v___x_1350_, v___x_1334_);
lean_dec(v___x_1350_);
lean_dec_ref(v_a_1328_);
if (v_isShared_1331_ == 0)
{
lean_ctor_set(v___x_1330_, 0, v___x_1351_);
v___x_1353_ = v___x_1330_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v___x_1351_);
v___x_1353_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
lean_object* v___x_1355_; 
if (v_isShared_1198_ == 0)
{
lean_ctor_set(v___x_1197_, 0, v___x_1353_);
v___x_1355_ = v___x_1197_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v___x_1353_);
lean_ctor_set(v_reuseFailAlloc_1367_, 1, v_indent_1194_);
lean_ctor_set(v_reuseFailAlloc_1367_, 2, v_activeTags_1195_);
v___x_1355_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
lean_object* v_is_1357_; 
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 0, v___x_1355_);
v_is_1357_ = v___x_1191_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v___x_1355_);
lean_ctor_set(v_reuseFailAlloc_1366_, 1, v_tail_1189_);
v_is_1357_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
lean_object* v___x_1358_; uint8_t v___x_1359_; 
v___x_1358_ = lean_box(1);
v___x_1359_ = l_Std_Format_instBEqFlattenAllowability_beq(v_fla_1187_, v___x_1358_);
if (v___x_1359_ == 0)
{
lean_object* v___x_1360_; lean_object* v_fst_1361_; lean_object* v_snd_1362_; 
lean_dec(v_fla_1187_);
v___x_1360_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__1(v_flb_1188_, v_is_1357_, v_tail_1183_, v_w_1173_, v___x_1349_);
v_fst_1361_ = lean_ctor_get(v___x_1360_, 0);
lean_inc(v_fst_1361_);
v_snd_1362_ = lean_ctor_get(v___x_1360_, 1);
lean_inc(v_snd_1362_);
lean_dec_ref(v___x_1360_);
v_x_1174_ = v_fst_1361_;
v___y_1175_ = v_snd_1362_;
goto _start;
}
else
{
lean_object* v___x_1364_; 
v___x_1364_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(v_fla_1187_, v_flb_1188_, v_tail_1183_, v_is_1357_);
v_x_1174_ = v___x_1364_;
v___y_1175_ = v___x_1349_;
goto _start;
}
}
}
}
}
}
}
else
{
lean_object* v_out_1372_; lean_object* v_column_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1385_; 
lean_dec(v_p_1333_);
lean_del_object(v___x_1330_);
lean_del_object(v___x_1197_);
lean_dec(v_activeTags_1195_);
lean_dec(v_indent_1194_);
lean_del_object(v___x_1191_);
v_out_1372_ = lean_ctor_get(v___y_1175_, 0);
v_column_1373_ = lean_ctor_get(v___y_1175_, 1);
v_isSharedCheck_1385_ = !lean_is_exclusive(v___y_1175_);
if (v_isSharedCheck_1385_ == 0)
{
v___x_1375_ = v___y_1175_;
v_isShared_1376_ = v_isSharedCheck_1385_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_column_1373_);
lean_inc(v_out_1372_);
lean_dec(v___y_1175_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1385_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1381_; 
v___x_1377_ = lean_string_append(v_out_1372_, v_a_1328_);
v___x_1378_ = lean_string_length(v_a_1328_);
lean_dec_ref(v_a_1328_);
v___x_1379_ = lean_nat_add(v_column_1373_, v___x_1378_);
lean_dec(v___x_1378_);
lean_dec(v_column_1373_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 1, v___x_1379_);
lean_ctor_set(v___x_1375_, 0, v___x_1377_);
v___x_1381_ = v___x_1375_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1377_);
lean_ctor_set(v_reuseFailAlloc_1384_, 1, v___x_1379_);
v___x_1381_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
lean_object* v___x_1382_; 
v___x_1382_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(v_fla_1187_, v_flb_1188_, v_tail_1183_, v_tail_1189_);
v_x_1174_ = v___x_1382_;
v___y_1175_ = v___x_1381_;
goto _start;
}
}
}
}
}
case 4:
{
lean_object* v_indent_1387_; lean_object* v_f_1388_; lean_object* v___x_1389_; lean_object* v___x_1391_; 
lean_del_object(v___x_1185_);
v_indent_1387_ = lean_ctor_get(v_f_1193_, 0);
lean_inc(v_indent_1387_);
v_f_1388_ = lean_ctor_get(v_f_1193_, 1);
lean_inc(v_f_1388_);
lean_dec_ref_known(v_f_1193_, 2);
v___x_1389_ = lean_int_add(v_indent_1194_, v_indent_1387_);
lean_dec(v_indent_1387_);
lean_dec(v_indent_1194_);
if (v_isShared_1198_ == 0)
{
lean_ctor_set(v___x_1197_, 1, v___x_1389_);
lean_ctor_set(v___x_1197_, 0, v_f_1388_);
v___x_1391_ = v___x_1197_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v_f_1388_);
lean_ctor_set(v_reuseFailAlloc_1397_, 1, v___x_1389_);
lean_ctor_set(v_reuseFailAlloc_1397_, 2, v_activeTags_1195_);
v___x_1391_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
lean_object* v___x_1393_; 
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 0, v___x_1391_);
v___x_1393_ = v___x_1191_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v___x_1391_);
lean_ctor_set(v_reuseFailAlloc_1396_, 1, v_tail_1189_);
v___x_1393_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
lean_object* v___x_1394_; 
v___x_1394_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(v_fla_1187_, v_flb_1188_, v_tail_1183_, v___x_1393_);
v_x_1174_ = v___x_1394_;
goto _start;
}
}
}
case 5:
{
lean_object* v_a_1398_; lean_object* v_a_1399_; lean_object* v___x_1400_; lean_object* v___x_1402_; 
v_a_1398_ = lean_ctor_get(v_f_1193_, 0);
lean_inc(v_a_1398_);
v_a_1399_ = lean_ctor_get(v_f_1193_, 1);
lean_inc(v_a_1399_);
lean_dec_ref_known(v_f_1193_, 2);
v___x_1400_ = lean_unsigned_to_nat(0u);
lean_inc(v_indent_1194_);
if (v_isShared_1198_ == 0)
{
lean_ctor_set(v___x_1197_, 2, v___x_1400_);
lean_ctor_set(v___x_1197_, 0, v_a_1398_);
v___x_1402_ = v___x_1197_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_a_1398_);
lean_ctor_set(v_reuseFailAlloc_1412_, 1, v_indent_1194_);
lean_ctor_set(v_reuseFailAlloc_1412_, 2, v___x_1400_);
v___x_1402_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
lean_object* v___x_1403_; lean_object* v___x_1405_; 
v___x_1403_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1403_, 0, v_a_1399_);
lean_ctor_set(v___x_1403_, 1, v_indent_1194_);
lean_ctor_set(v___x_1403_, 2, v_activeTags_1195_);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 0, v___x_1403_);
v___x_1405_ = v___x_1191_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v___x_1403_);
lean_ctor_set(v_reuseFailAlloc_1411_, 1, v_tail_1189_);
v___x_1405_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
lean_object* v___x_1407_; 
if (v_isShared_1186_ == 0)
{
lean_ctor_set(v___x_1185_, 1, v___x_1405_);
lean_ctor_set(v___x_1185_, 0, v___x_1402_);
v___x_1407_ = v___x_1185_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v___x_1402_);
lean_ctor_set(v_reuseFailAlloc_1410_, 1, v___x_1405_);
v___x_1407_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
lean_object* v___x_1408_; 
v___x_1408_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(v_fla_1187_, v_flb_1188_, v_tail_1183_, v___x_1407_);
v_x_1174_ = v___x_1408_;
goto _start;
}
}
}
}
case 6:
{
lean_object* v_a_1413_; uint8_t v_behavior_1414_; uint8_t v___x_1415_; 
lean_del_object(v___x_1185_);
v_a_1413_ = lean_ctor_get(v_f_1193_, 0);
lean_inc(v_a_1413_);
v_behavior_1414_ = lean_ctor_get_uint8(v_f_1193_, sizeof(void*)*1);
lean_dec_ref_known(v_f_1193_, 1);
v___x_1415_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_1187_);
if (v___x_1415_ == 0)
{
lean_object* v___x_1417_; 
if (v_isShared_1198_ == 0)
{
lean_ctor_set(v___x_1197_, 0, v_a_1413_);
v___x_1417_ = v___x_1197_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_a_1413_);
lean_ctor_set(v_reuseFailAlloc_1427_, 1, v_indent_1194_);
lean_ctor_set(v_reuseFailAlloc_1427_, 2, v_activeTags_1195_);
v___x_1417_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
lean_object* v___x_1418_; lean_object* v___x_1420_; 
v___x_1418_ = lean_box(0);
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 1, v___x_1418_);
lean_ctor_set(v___x_1191_, 0, v___x_1417_);
v___x_1420_ = v___x_1191_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v___x_1417_);
lean_ctor_set(v_reuseFailAlloc_1426_, 1, v___x_1418_);
v___x_1420_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v_fst_1423_; lean_object* v_snd_1424_; 
v___x_1421_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(v_fla_1187_, v_flb_1188_, v_tail_1183_, v_tail_1189_);
v___x_1422_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0_spec__1(v_behavior_1414_, v___x_1420_, v___x_1421_, v_w_1173_, v___y_1175_);
v_fst_1423_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_fst_1423_);
v_snd_1424_ = lean_ctor_get(v___x_1422_, 1);
lean_inc(v_snd_1424_);
lean_dec_ref(v___x_1422_);
v_x_1174_ = v_fst_1423_;
v___y_1175_ = v_snd_1424_;
goto _start;
}
}
}
else
{
lean_object* v___x_1429_; 
if (v_isShared_1198_ == 0)
{
lean_ctor_set(v___x_1197_, 0, v_a_1413_);
v___x_1429_ = v___x_1197_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v_a_1413_);
lean_ctor_set(v_reuseFailAlloc_1435_, 1, v_indent_1194_);
lean_ctor_set(v_reuseFailAlloc_1435_, 2, v_activeTags_1195_);
v___x_1429_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
lean_object* v___x_1431_; 
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 0, v___x_1429_);
v___x_1431_ = v___x_1191_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v___x_1429_);
lean_ctor_set(v_reuseFailAlloc_1434_, 1, v_tail_1189_);
v___x_1431_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
lean_object* v___x_1432_; 
v___x_1432_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(v_fla_1187_, v_flb_1188_, v_tail_1183_, v___x_1431_);
v_x_1174_ = v___x_1432_;
goto _start;
}
}
}
}
default: 
{
lean_object* v_a_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1440_; 
lean_del_object(v___x_1185_);
v_a_1436_ = lean_ctor_get(v_f_1193_, 1);
lean_inc(v_a_1436_);
lean_dec_ref_known(v_f_1193_, 2);
v___x_1437_ = lean_unsigned_to_nat(1u);
v___x_1438_ = lean_nat_add(v_activeTags_1195_, v___x_1437_);
lean_dec(v_activeTags_1195_);
if (v_isShared_1198_ == 0)
{
lean_ctor_set(v___x_1197_, 2, v___x_1438_);
lean_ctor_set(v___x_1197_, 0, v_a_1436_);
v___x_1440_ = v___x_1197_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v_a_1436_);
lean_ctor_set(v_reuseFailAlloc_1446_, 1, v_indent_1194_);
lean_ctor_set(v_reuseFailAlloc_1446_, 2, v___x_1438_);
v___x_1440_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
lean_object* v___x_1442_; 
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 0, v___x_1440_);
v___x_1442_ = v___x_1191_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v___x_1440_);
lean_ctor_set(v_reuseFailAlloc_1445_, 1, v_tail_1189_);
v___x_1442_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
lean_object* v___x_1443_; 
v___x_1443_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(v_fla_1187_, v_flb_1188_, v_tail_1183_, v___x_1442_);
v_x_1174_ = v___x_1443_;
goto _start;
}
}
}
}
v___jp_1199_:
{
lean_object* v_out_1200_; lean_object* v_column_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1230_; 
v_out_1200_ = lean_ctor_get(v___y_1175_, 0);
v_column_1201_ = lean_ctor_get(v___y_1175_, 1);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___y_1175_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1203_ = v___y_1175_;
v_isShared_1204_ = v_isSharedCheck_1230_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_column_1201_);
lean_inc(v_out_1200_);
lean_dec(v___y_1175_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1230_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1205_; uint8_t v___x_1206_; 
lean_inc(v_column_1201_);
v___x_1205_ = lean_nat_to_int(v_column_1201_);
v___x_1206_ = lean_int_dec_lt(v___x_1205_, v_indent_1194_);
if (v___x_1206_ == 0)
{
lean_object* v___x_1207_; lean_object* v___x_1208_; uint32_t v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1213_; 
lean_dec(v___x_1205_);
lean_dec(v_column_1201_);
v___x_1207_ = l_Int_toNat(v_indent_1194_);
lean_dec(v_indent_1194_);
v___x_1208_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_instMonadPrettyFormatStateMState___lam__1___closed__0));
v___x_1209_ = 32;
lean_inc(v___x_1207_);
v___x_1210_ = lean_string_pushn(v___x_1208_, v___x_1209_, v___x_1207_);
v___x_1211_ = lean_string_append(v_out_1200_, v___x_1210_);
lean_dec_ref(v___x_1210_);
if (v_isShared_1204_ == 0)
{
lean_ctor_set(v___x_1203_, 1, v___x_1207_);
lean_ctor_set(v___x_1203_, 0, v___x_1211_);
v___x_1213_ = v___x_1203_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v___x_1211_);
lean_ctor_set(v_reuseFailAlloc_1216_, 1, v___x_1207_);
v___x_1213_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
lean_object* v___x_1214_; 
v___x_1214_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(v_fla_1187_, v_flb_1188_, v_tail_1183_, v_tail_1189_);
v_x_1174_ = v___x_1214_;
v___y_1175_ = v___x_1213_;
goto _start;
}
}
else
{
lean_object* v___x_1217_; uint32_t v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1226_; 
v___x_1217_ = ((lean_object*)(l_Std_Format_isEmpty___closed__0));
v___x_1218_ = 32;
v___x_1219_ = lean_int_sub(v_indent_1194_, v___x_1205_);
lean_dec(v___x_1205_);
lean_dec(v_indent_1194_);
v___x_1220_ = l_Int_toNat(v___x_1219_);
lean_dec(v___x_1219_);
v___x_1221_ = lean_string_pushn(v___x_1217_, v___x_1218_, v___x_1220_);
v___x_1222_ = lean_string_append(v_out_1200_, v___x_1221_);
v___x_1223_ = lean_string_length(v___x_1221_);
lean_dec_ref(v___x_1221_);
v___x_1224_ = lean_nat_add(v_column_1201_, v___x_1223_);
lean_dec(v___x_1223_);
lean_dec(v_column_1201_);
if (v_isShared_1204_ == 0)
{
lean_ctor_set(v___x_1203_, 1, v___x_1224_);
lean_ctor_set(v___x_1203_, 0, v___x_1222_);
v___x_1226_ = v___x_1203_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v___x_1222_);
lean_ctor_set(v_reuseFailAlloc_1229_, 1, v___x_1224_);
v___x_1226_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
lean_object* v___x_1227_; 
v___x_1227_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(v_fla_1187_, v_flb_1188_, v_tail_1183_, v_tail_1189_);
v_x_1174_ = v___x_1227_;
v___y_1175_ = v___x_1226_;
goto _start;
}
}
}
}
v___jp_1231_:
{
lean_object* v___x_1232_; 
v___x_1232_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___redArg___lam__0(v_fla_1187_, v_flb_1188_, v_tail_1183_, v_tail_1189_);
v_x_1174_ = v___x_1232_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0___boxed(lean_object* v_w_1452_, lean_object* v_x_1453_, lean_object* v___y_1454_){
_start:
{
lean_object* v_res_1455_; 
v_res_1455_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0(v_w_1452_, v_x_1453_, v___y_1454_);
lean_dec(v_w_1452_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_prettyM___at___00Std_Format_pretty_spec__0(lean_object* v_f_1456_, lean_object* v_w_1457_, lean_object* v_indent_1458_, lean_object* v___y_1459_){
_start:
{
lean_object* v___x_1460_; uint8_t v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___x_1460_ = lean_box(1);
v___x_1461_ = 0;
v___x_1462_ = lean_nat_to_int(v_indent_1458_);
v___x_1463_ = lean_unsigned_to_nat(0u);
v___x_1464_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1464_, 0, v_f_1456_);
lean_ctor_set(v___x_1464_, 1, v___x_1462_);
lean_ctor_set(v___x_1464_, 2, v___x_1463_);
v___x_1465_ = lean_box(0);
v___x_1466_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1466_, 0, v___x_1464_);
lean_ctor_set(v___x_1466_, 1, v___x_1465_);
v___x_1467_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1467_, 0, v___x_1460_);
lean_ctor_set(v___x_1467_, 1, v___x_1466_);
lean_ctor_set_uint8(v___x_1467_, sizeof(void*)*2, v___x_1461_);
v___x_1468_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1468_, 0, v___x_1467_);
lean_ctor_set(v___x_1468_, 1, v___x_1465_);
v___x_1469_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Std_Format_pretty_spec__0_spec__0(v_w_1457_, v___x_1468_, v___y_1459_);
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_prettyM___at___00Std_Format_pretty_spec__0___boxed(lean_object* v_f_1470_, lean_object* v_w_1471_, lean_object* v_indent_1472_, lean_object* v___y_1473_){
_start:
{
lean_object* v_res_1474_; 
v_res_1474_ = l_Std_Format_prettyM___at___00Std_Format_pretty_spec__0(v_f_1470_, v_w_1471_, v_indent_1472_, v___y_1473_);
lean_dec(v_w_1471_);
return v_res_1474_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_pretty(lean_object* v_f_1475_, lean_object* v_width_1476_, lean_object* v_indent_1477_, lean_object* v_column_1478_){
_start:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v_snd_1482_; lean_object* v_out_1483_; 
v___x_1479_ = ((lean_object*)(l_Std_Format_isEmpty___closed__0));
v___x_1480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1480_, 0, v___x_1479_);
lean_ctor_set(v___x_1480_, 1, v_column_1478_);
v___x_1481_ = l_Std_Format_prettyM___at___00Std_Format_pretty_spec__0(v_f_1475_, v_width_1476_, v_indent_1477_, v___x_1480_);
v_snd_1482_ = lean_ctor_get(v___x_1481_, 1);
lean_inc(v_snd_1482_);
lean_dec_ref(v___x_1481_);
v_out_1483_ = lean_ctor_get(v_snd_1482_, 0);
lean_inc_ref(v_out_1483_);
lean_dec(v_snd_1482_);
return v_out_1483_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_pretty___boxed(lean_object* v_f_1484_, lean_object* v_width_1485_, lean_object* v_indent_1486_, lean_object* v_column_1487_){
_start:
{
lean_object* v_res_1488_; 
v_res_1488_ = l_Std_Format_pretty(v_f_1484_, v_width_1485_, v_indent_1486_, v_column_1487_);
lean_dec(v_width_1485_);
return v_res_1488_;
}
}
LEAN_EXPORT lean_object* l_Std_instToFormatFormat___lam__0(lean_object* v_f_1489_){
_start:
{
lean_inc(v_f_1489_);
return v_f_1489_;
}
}
LEAN_EXPORT lean_object* l_Std_instToFormatFormat___lam__0___boxed(lean_object* v_f_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_Std_instToFormatFormat___lam__0(v_f_1490_);
lean_dec(v_f_1490_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Std_instToFormatString___lam__0(lean_object* v_s_1494_){
_start:
{
lean_object* v___x_1495_; 
v___x_1495_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1495_, 0, v_s_1494_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___redArg___lam__0(lean_object* v_x_1498_, lean_object* v_inst_1499_, lean_object* v_x1_1500_, lean_object* v_x2_1501_){
_start:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; 
v___x_1502_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1502_, 0, v_x1_1500_);
lean_ctor_set(v___x_1502_, 1, v_x_1498_);
v___x_1503_ = lean_apply_1(v_inst_1499_, v_x2_1501_);
v___x_1504_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1504_, 0, v___x_1502_);
lean_ctor_set(v___x_1504_, 1, v___x_1503_);
return v___x_1504_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___redArg(lean_object* v_inst_1505_, lean_object* v_x_1506_, lean_object* v_x_1507_){
_start:
{
if (lean_obj_tag(v_x_1506_) == 0)
{
lean_object* v___x_1508_; 
lean_dec(v_x_1507_);
lean_dec_ref(v_inst_1505_);
v___x_1508_ = lean_box(0);
return v___x_1508_;
}
else
{
lean_object* v_tail_1509_; 
v_tail_1509_ = lean_ctor_get(v_x_1506_, 1);
if (lean_obj_tag(v_tail_1509_) == 0)
{
lean_object* v_head_1510_; lean_object* v___x_1511_; 
lean_dec(v_x_1507_);
v_head_1510_ = lean_ctor_get(v_x_1506_, 0);
lean_inc(v_head_1510_);
lean_dec_ref_known(v_x_1506_, 2);
v___x_1511_ = lean_apply_1(v_inst_1505_, v_head_1510_);
return v___x_1511_;
}
else
{
lean_object* v_head_1512_; lean_object* v___f_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; 
lean_inc(v_tail_1509_);
v_head_1512_ = lean_ctor_get(v_x_1506_, 0);
lean_inc(v_head_1512_);
lean_dec_ref_known(v_x_1506_, 2);
lean_inc_ref(v_inst_1505_);
v___f_1513_ = lean_alloc_closure((void*)(l_Std_Format_joinSep___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1513_, 0, v_x_1507_);
lean_closure_set(v___f_1513_, 1, v_inst_1505_);
v___x_1514_ = lean_apply_1(v_inst_1505_, v_head_1512_);
v___x_1515_ = l_List_foldl___redArg(v___f_1513_, v___x_1514_, v_tail_1509_);
return v___x_1515_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep(lean_object* v_00_u03b1_1516_, lean_object* v_inst_1517_, lean_object* v_x_1518_, lean_object* v_x_1519_){
_start:
{
lean_object* v___x_1520_; 
v___x_1520_ = l_Std_Format_joinSep___redArg(v_inst_1517_, v_x_1518_, v_x_1519_);
return v___x_1520_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_prefixJoin___redArg___lam__0(lean_object* v_pre_1521_, lean_object* v_inst_1522_, lean_object* v_x1_1523_, lean_object* v_x2_1524_){
_start:
{
lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___x_1525_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1525_, 0, v_x1_1523_);
lean_ctor_set(v___x_1525_, 1, v_pre_1521_);
v___x_1526_ = lean_apply_1(v_inst_1522_, v_x2_1524_);
v___x_1527_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1525_);
lean_ctor_set(v___x_1527_, 1, v___x_1526_);
return v___x_1527_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_prefixJoin___redArg(lean_object* v_inst_1528_, lean_object* v_pre_1529_, lean_object* v_x_1530_){
_start:
{
if (lean_obj_tag(v_x_1530_) == 0)
{
lean_object* v___x_1531_; 
lean_dec(v_pre_1529_);
lean_dec_ref(v_inst_1528_);
v___x_1531_ = lean_box(0);
return v___x_1531_;
}
else
{
lean_object* v_head_1532_; lean_object* v_tail_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1543_; 
v_head_1532_ = lean_ctor_get(v_x_1530_, 0);
v_tail_1533_ = lean_ctor_get(v_x_1530_, 1);
v_isSharedCheck_1543_ = !lean_is_exclusive(v_x_1530_);
if (v_isSharedCheck_1543_ == 0)
{
v___x_1535_ = v_x_1530_;
v_isShared_1536_ = v_isSharedCheck_1543_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_tail_1533_);
lean_inc(v_head_1532_);
lean_dec(v_x_1530_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1543_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___f_1537_; lean_object* v___x_1538_; lean_object* v___x_1540_; 
lean_inc_ref(v_inst_1528_);
lean_inc(v_pre_1529_);
v___f_1537_ = lean_alloc_closure((void*)(l_Std_Format_prefixJoin___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1537_, 0, v_pre_1529_);
lean_closure_set(v___f_1537_, 1, v_inst_1528_);
v___x_1538_ = lean_apply_1(v_inst_1528_, v_head_1532_);
if (v_isShared_1536_ == 0)
{
lean_ctor_set_tag(v___x_1535_, 5);
lean_ctor_set(v___x_1535_, 1, v___x_1538_);
lean_ctor_set(v___x_1535_, 0, v_pre_1529_);
v___x_1540_ = v___x_1535_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v_pre_1529_);
lean_ctor_set(v_reuseFailAlloc_1542_, 1, v___x_1538_);
v___x_1540_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
lean_object* v___x_1541_; 
v___x_1541_ = l_List_foldl___redArg(v___f_1537_, v___x_1540_, v_tail_1533_);
return v___x_1541_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_prefixJoin(lean_object* v_00_u03b1_1544_, lean_object* v_inst_1545_, lean_object* v_pre_1546_, lean_object* v_x_1547_){
_start:
{
lean_object* v___x_1548_; 
v___x_1548_ = l_Std_Format_prefixJoin___redArg(v_inst_1545_, v_pre_1546_, v_x_1547_);
return v___x_1548_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSuffix___redArg___lam__0(lean_object* v_inst_1549_, lean_object* v_x_1550_, lean_object* v_x1_1551_, lean_object* v_x2_1552_){
_start:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1553_ = lean_apply_1(v_inst_1549_, v_x2_1552_);
v___x_1554_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1554_, 0, v_x1_1551_);
lean_ctor_set(v___x_1554_, 1, v___x_1553_);
v___x_1555_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1555_, 0, v___x_1554_);
lean_ctor_set(v___x_1555_, 1, v_x_1550_);
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSuffix___redArg(lean_object* v_inst_1556_, lean_object* v_x_1557_, lean_object* v_x_1558_){
_start:
{
if (lean_obj_tag(v_x_1557_) == 0)
{
lean_object* v___x_1559_; 
lean_dec(v_x_1558_);
lean_dec_ref(v_inst_1556_);
v___x_1559_ = lean_box(0);
return v___x_1559_;
}
else
{
lean_object* v_head_1560_; lean_object* v_tail_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1571_; 
v_head_1560_ = lean_ctor_get(v_x_1557_, 0);
v_tail_1561_ = lean_ctor_get(v_x_1557_, 1);
v_isSharedCheck_1571_ = !lean_is_exclusive(v_x_1557_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1563_ = v_x_1557_;
v_isShared_1564_ = v_isSharedCheck_1571_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_tail_1561_);
lean_inc(v_head_1560_);
lean_dec(v_x_1557_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1571_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___f_1565_; lean_object* v___x_1566_; lean_object* v___x_1568_; 
lean_inc(v_x_1558_);
lean_inc_ref(v_inst_1556_);
v___f_1565_ = lean_alloc_closure((void*)(l_Std_Format_joinSuffix___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1565_, 0, v_inst_1556_);
lean_closure_set(v___f_1565_, 1, v_x_1558_);
v___x_1566_ = lean_apply_1(v_inst_1556_, v_head_1560_);
if (v_isShared_1564_ == 0)
{
lean_ctor_set_tag(v___x_1563_, 5);
lean_ctor_set(v___x_1563_, 1, v_x_1558_);
lean_ctor_set(v___x_1563_, 0, v___x_1566_);
v___x_1568_ = v___x_1563_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v___x_1566_);
lean_ctor_set(v_reuseFailAlloc_1570_, 1, v_x_1558_);
v___x_1568_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
lean_object* v___x_1569_; 
v___x_1569_ = l_List_foldl___redArg(v___f_1565_, v___x_1568_, v_tail_1561_);
return v___x_1569_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSuffix(lean_object* v_00_u03b1_1572_, lean_object* v_inst_1573_, lean_object* v_x_1574_, lean_object* v_x_1575_){
_start:
{
lean_object* v___x_1576_; 
v___x_1576_ = l_Std_Format_joinSuffix___redArg(v_inst_1573_, v_x_1574_, v_x_1575_);
return v___x_1576_;
}
}
lean_object* runtime_initialize_Init_Data_Int_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Bootstrap(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_State(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Bitwise_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Format_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Int_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Bootstrap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_State(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Bitwise_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Format_instInhabitedFlattenBehavior_default = _init_l_Std_Format_instInhabitedFlattenBehavior_default();
l_Std_Format_instInhabitedFlattenBehavior = _init_l_Std_Format_instInhabitedFlattenBehavior();
l_Std_instInhabitedFormat_default = _init_l_Std_instInhabitedFormat_default();
lean_mark_persistent(l_Std_instInhabitedFormat_default);
l_Std_instInhabitedFormat = _init_l_Std_instInhabitedFormat();
lean_mark_persistent(l_Std_instInhabitedFormat);
l_Std_Format_defIndent = _init_l_Std_Format_defIndent();
lean_mark_persistent(l_Std_Format_defIndent);
l_Std_Format_defUnicode = _init_l_Std_Format_defUnicode();
l_Std_Format_defWidth = _init_l_Std_Format_defWidth();
lean_mark_persistent(l_Std_Format_defWidth);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Format_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Int_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_String_Bootstrap(uint8_t builtin);
lean_object* initialize_Init_Control_State(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Bitwise_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Format_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Int_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Bootstrap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_State(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Bitwise_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Format_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Format_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Format_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
