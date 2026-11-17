// Lean compiler output
// Module: Lean.Elab.PreDefinition.Structural.IndGroupInfo
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_zipWith___at___00List_zip_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Level_isEquiv(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_instReprLevel_repr(lean_object*, lean_object*);
lean_object* l_Lean_instReprExpr_repr(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_mkRecName(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_mkBRecOnName(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_array_mk(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Structural_instBEqIndGroupInfo_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instBEqIndGroupInfo_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Structural_instBEqIndGroupInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Structural_instBEqIndGroupInfo_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_instBEqIndGroupInfo___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instBEqIndGroupInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Structural_instBEqIndGroupInfo = (const lean_object*)&l_Lean_Elab_Structural_instBEqIndGroupInfo___closed__0_value;
static const lean_array_object l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Structural_instInhabitedIndGroupInfo = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__1_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__0_value;
static const lean_string_object l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__3 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__3_value;
static const lean_string_object l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__4 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__4_value;
static lean_once_cell_t l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__5;
static lean_once_cell_t l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__6;
static const lean_ctor_object l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__8_value;
static const lean_string_object l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__9 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__9_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__9_value)}};
static const lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__10 = (const lean_object*)&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__7;
static const lean_string_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numNested"};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__10;
static const lean_string_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__12;
static lean_once_cell_t l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__13;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__11_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__15 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Structural_instReprIndGroupInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Structural_instReprIndGroupInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_ofInductiveVal(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_numMotives(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_numMotives___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_brecOnName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_brecOnName___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Structural_instInhabitedIndGroupInst_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_instInhabitedIndGroupInst_default___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInst_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Structural_instInhabitedIndGroupInst_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInfo_default___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInst_default___closed__0_value)}};
static const lean_object* l_Lean_Elab_Structural_instInhabitedIndGroupInst_default___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInst_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Structural_instInhabitedIndGroupInst_default = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInst_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Structural_instInhabitedIndGroupInst = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedIndGroupInst_default___closed__1_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__0 = (const lean_object*)&l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__1 = (const lean_object*)&l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__1_value;
static const lean_string_object l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__2 = (const lean_object*)&l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__3;
static lean_once_cell_t l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__4;
static const lean_ctor_object l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__5 = (const lean_object*)&l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg(lean_object*);
static const lean_string_object l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "toIndGroupInfo"};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__2_value),((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__4;
static const lean_string_object l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "levels"};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__7;
static const lean_string_object l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "params"};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Structural_instReprIndGroupInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Structural_instReprIndGroupInst_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Structural_instReprIndGroupInst = (const lean_object*)&l_Lean_Elab_Structural_instReprIndGroupInst___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_toMessageData(lean_object*);
static const lean_closure_object l_Lean_Elab_Structural_instToMessageDataIndGroupInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Structural_IndGroupInst_toMessageData, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_instToMessageDataIndGroupInst___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instToMessageDataIndGroupInst___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Structural_instToMessageDataIndGroupInst = (const lean_object*)&l_Lean_Elab_Structural_instToMessageDataIndGroupInst___closed__0_value;
LEAN_EXPORT uint8_t l_List_all___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_isDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_isDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_brecOn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_brecOn___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lean.Elab.PreDefinition.Structural.IndGroupInfo"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Lean.Elab.Structural.IndGroupInst.nestedTypeFormers"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "assertion violation: xs.size > 0\n      "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__0 = (const lean_object*)&l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__1;
static const lean_string_object l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "` is not a recursor"};
static const lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__2 = (const lean_object*)&l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__3;
static const lean_string_object l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__4 = (const lean_object*)&l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__4_value;
static const lean_string_object l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Lean.isRec\?"};
static const lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__5 = (const lean_object*)&l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__5_value;
static const lean_string_object l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__6 = (const lean_object*)&l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__6_value;
static lean_once_cell_t l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "assertion violation: recInfo.numMotives = igi.numMotives\n  "};
static const lean_object* l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__1;
static const lean_array_object l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0___redArg(lean_object* v_xs_1_, lean_object* v_ys_2_, lean_object* v_x_3_){
_start:
{
lean_object* v_zero_4_; uint8_t v_isZero_5_; 
v_zero_4_ = lean_unsigned_to_nat(0u);
v_isZero_5_ = lean_nat_dec_eq(v_x_3_, v_zero_4_);
if (v_isZero_5_ == 1)
{
lean_dec(v_x_3_);
return v_isZero_5_;
}
else
{
lean_object* v_one_6_; lean_object* v_n_7_; lean_object* v___x_8_; lean_object* v___x_9_; uint8_t v___x_10_; 
v_one_6_ = lean_unsigned_to_nat(1u);
v_n_7_ = lean_nat_sub(v_x_3_, v_one_6_);
lean_dec(v_x_3_);
v___x_8_ = lean_array_fget_borrowed(v_xs_1_, v_n_7_);
v___x_9_ = lean_array_fget_borrowed(v_ys_2_, v_n_7_);
v___x_10_ = lean_name_eq(v___x_8_, v___x_9_);
if (v___x_10_ == 0)
{
lean_dec(v_n_7_);
return v___x_10_;
}
else
{
v_x_3_ = v_n_7_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0___redArg___boxed(lean_object* v_xs_12_, lean_object* v_ys_13_, lean_object* v_x_14_){
_start:
{
uint8_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0___redArg(v_xs_12_, v_ys_13_, v_x_14_);
lean_dec_ref(v_ys_13_);
lean_dec_ref(v_xs_12_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Structural_instBEqIndGroupInfo_beq(lean_object* v_x_17_, lean_object* v_x_18_){
_start:
{
lean_object* v_all_19_; lean_object* v_numNested_20_; lean_object* v_all_21_; lean_object* v_numNested_22_; lean_object* v___x_23_; lean_object* v___x_24_; uint8_t v___x_25_; 
v_all_19_ = lean_ctor_get(v_x_17_, 0);
v_numNested_20_ = lean_ctor_get(v_x_17_, 1);
v_all_21_ = lean_ctor_get(v_x_18_, 0);
v_numNested_22_ = lean_ctor_get(v_x_18_, 1);
v___x_23_ = lean_array_get_size(v_all_19_);
v___x_24_ = lean_array_get_size(v_all_21_);
v___x_25_ = lean_nat_dec_eq(v___x_23_, v___x_24_);
if (v___x_25_ == 0)
{
return v___x_25_;
}
else
{
uint8_t v___x_26_; 
v___x_26_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0___redArg(v_all_19_, v_all_21_, v___x_23_);
if (v___x_26_ == 0)
{
return v___x_26_;
}
else
{
uint8_t v___x_27_; 
v___x_27_ = lean_nat_dec_eq(v_numNested_20_, v_numNested_22_);
return v___x_27_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instBEqIndGroupInfo_beq___boxed(lean_object* v_x_28_, lean_object* v_x_29_){
_start:
{
uint8_t v_res_30_; lean_object* v_r_31_; 
v_res_30_ = l_Lean_Elab_Structural_instBEqIndGroupInfo_beq(v_x_28_, v_x_29_);
lean_dec_ref(v_x_29_);
lean_dec_ref(v_x_28_);
v_r_31_ = lean_box(v_res_30_);
return v_r_31_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0(lean_object* v_xs_32_, lean_object* v_ys_33_, lean_object* v_hsz_34_, lean_object* v_x_35_, lean_object* v_x_36_){
_start:
{
uint8_t v___x_37_; 
v___x_37_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0___redArg(v_xs_32_, v_ys_33_, v_x_35_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0___boxed(lean_object* v_xs_38_, lean_object* v_ys_39_, lean_object* v_hsz_40_, lean_object* v_x_41_, lean_object* v_x_42_){
_start:
{
uint8_t v_res_43_; lean_object* v_r_44_; 
v_res_43_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_instBEqIndGroupInfo_beq_spec__0(v_xs_38_, v_ys_39_, v_hsz_40_, v_x_41_, v_x_42_);
lean_dec_ref(v_ys_39_);
lean_dec_ref(v_xs_38_);
v_r_44_ = lean_box(v_res_43_);
return v_r_44_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__1(lean_object* v_a_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_nat_to_int(v_a_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0___lam__0(lean_object* v___y_56_){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lean_unsigned_to_nat(0u);
v___x_58_ = l_Lean_Name_reprPrec(v___y_56_, v___x_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0_spec__2_spec__3(lean_object* v_x_59_, lean_object* v_x_60_, lean_object* v_x_61_){
_start:
{
if (lean_obj_tag(v_x_61_) == 0)
{
lean_dec(v_x_59_);
return v_x_60_;
}
else
{
lean_object* v_head_62_; lean_object* v_tail_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_74_; 
v_head_62_ = lean_ctor_get(v_x_61_, 0);
v_tail_63_ = lean_ctor_get(v_x_61_, 1);
v_isSharedCheck_74_ = !lean_is_exclusive(v_x_61_);
if (v_isSharedCheck_74_ == 0)
{
v___x_65_ = v_x_61_;
v_isShared_66_ = v_isSharedCheck_74_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_tail_63_);
lean_inc(v_head_62_);
lean_dec(v_x_61_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_74_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_68_; 
lean_inc(v_x_59_);
if (v_isShared_66_ == 0)
{
lean_ctor_set_tag(v___x_65_, 5);
lean_ctor_set(v___x_65_, 1, v_x_59_);
lean_ctor_set(v___x_65_, 0, v_x_60_);
v___x_68_ = v___x_65_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_73_; 
v_reuseFailAlloc_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_73_, 0, v_x_60_);
lean_ctor_set(v_reuseFailAlloc_73_, 1, v_x_59_);
v___x_68_ = v_reuseFailAlloc_73_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_69_ = lean_unsigned_to_nat(0u);
v___x_70_ = l_Lean_Name_reprPrec(v_head_62_, v___x_69_);
v___x_71_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_68_);
lean_ctor_set(v___x_71_, 1, v___x_70_);
v_x_60_ = v___x_71_;
v_x_61_ = v_tail_63_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0_spec__2(lean_object* v_x_75_, lean_object* v_x_76_, lean_object* v_x_77_){
_start:
{
if (lean_obj_tag(v_x_77_) == 0)
{
lean_dec(v_x_75_);
return v_x_76_;
}
else
{
lean_object* v_head_78_; lean_object* v_tail_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_90_; 
v_head_78_ = lean_ctor_get(v_x_77_, 0);
v_tail_79_ = lean_ctor_get(v_x_77_, 1);
v_isSharedCheck_90_ = !lean_is_exclusive(v_x_77_);
if (v_isSharedCheck_90_ == 0)
{
v___x_81_ = v_x_77_;
v_isShared_82_ = v_isSharedCheck_90_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_tail_79_);
lean_inc(v_head_78_);
lean_dec(v_x_77_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_90_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_84_; 
lean_inc(v_x_75_);
if (v_isShared_82_ == 0)
{
lean_ctor_set_tag(v___x_81_, 5);
lean_ctor_set(v___x_81_, 1, v_x_75_);
lean_ctor_set(v___x_81_, 0, v_x_76_);
v___x_84_ = v___x_81_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v_x_76_);
lean_ctor_set(v_reuseFailAlloc_89_, 1, v_x_75_);
v___x_84_ = v_reuseFailAlloc_89_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_85_ = lean_unsigned_to_nat(0u);
v___x_86_ = l_Lean_Name_reprPrec(v_head_78_, v___x_85_);
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_84_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0_spec__2_spec__3(v_x_75_, v___x_87_, v_tail_79_);
return v___x_88_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0(lean_object* v_x_91_, lean_object* v_x_92_){
_start:
{
if (lean_obj_tag(v_x_91_) == 0)
{
lean_object* v___x_93_; 
lean_dec(v_x_92_);
v___x_93_ = lean_box(0);
return v___x_93_;
}
else
{
lean_object* v_tail_94_; 
v_tail_94_ = lean_ctor_get(v_x_91_, 1);
if (lean_obj_tag(v_tail_94_) == 0)
{
lean_object* v_head_95_; lean_object* v___x_96_; 
lean_dec(v_x_92_);
v_head_95_ = lean_ctor_get(v_x_91_, 0);
lean_inc(v_head_95_);
lean_dec_ref_known(v_x_91_, 2);
v___x_96_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0___lam__0(v_head_95_);
return v___x_96_;
}
else
{
lean_object* v_head_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
lean_inc(v_tail_94_);
v_head_97_ = lean_ctor_get(v_x_91_, 0);
lean_inc(v_head_97_);
lean_dec_ref_known(v_x_91_, 2);
v___x_98_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0___lam__0(v_head_97_);
v___x_99_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0_spec__2(v_x_92_, v___x_98_, v_tail_94_);
return v___x_99_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__5(void){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_108_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__0));
v___x_109_ = lean_string_length(v___x_108_);
return v___x_109_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__6(void){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__5, &l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__5_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__5);
v___x_111_ = lean_nat_to_int(v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0(lean_object* v_xs_119_){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_120_ = lean_array_get_size(v_xs_119_);
v___x_121_ = lean_unsigned_to_nat(0u);
v___x_122_ = lean_nat_dec_eq(v___x_120_, v___x_121_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_123_ = lean_array_to_list(v_xs_119_);
v___x_124_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__3));
v___x_125_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0_spec__0(v___x_123_, v___x_124_);
v___x_126_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__6, &l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__6_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__6);
v___x_127_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__7));
v___x_128_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
lean_ctor_set(v___x_128_, 1, v___x_125_);
v___x_129_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__8));
v___x_130_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_128_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
v___x_131_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_126_);
lean_ctor_set(v___x_131_, 1, v___x_130_);
v___x_132_ = l_Std_Format_fill(v___x_131_);
return v___x_132_;
}
else
{
lean_object* v___x_133_; 
lean_dec_ref(v_xs_119_);
v___x_133_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__10));
return v___x_133_;
}
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = lean_unsigned_to_nat(7u);
v___x_148_ = lean_nat_to_int(v___x_147_);
return v___x_148_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_152_ = lean_unsigned_to_nat(13u);
v___x_153_ = lean_nat_to_int(v___x_152_);
return v___x_153_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__0));
v___x_156_ = lean_string_length(v___x_155_);
return v___x_156_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = lean_obj_once(&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__12, &l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__12_once, _init_l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__12);
v___x_158_ = lean_nat_to_int(v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg(lean_object* v_x_163_){
_start:
{
lean_object* v_all_164_; lean_object* v_numNested_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_199_; 
v_all_164_ = lean_ctor_get(v_x_163_, 0);
v_numNested_165_ = lean_ctor_get(v_x_163_, 1);
v_isSharedCheck_199_ = !lean_is_exclusive(v_x_163_);
if (v_isSharedCheck_199_ == 0)
{
v___x_167_ = v_x_163_;
v_isShared_168_ = v_isSharedCheck_199_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_numNested_165_);
lean_inc(v_all_164_);
lean_dec(v_x_163_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_199_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_174_; 
v___x_169_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__5));
v___x_170_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__6));
v___x_171_ = lean_obj_once(&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__7, &l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__7_once, _init_l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__7);
v___x_172_ = l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0(v_all_164_);
if (v_isShared_168_ == 0)
{
lean_ctor_set_tag(v___x_167_, 4);
lean_ctor_set(v___x_167_, 1, v___x_172_);
lean_ctor_set(v___x_167_, 0, v___x_171_);
v___x_174_ = v___x_167_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_171_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v___x_172_);
v___x_174_ = v_reuseFailAlloc_198_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
uint8_t v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_175_ = 0;
v___x_176_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_176_, 0, v___x_174_);
lean_ctor_set_uint8(v___x_176_, sizeof(void*)*1, v___x_175_);
v___x_177_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_177_, 0, v___x_170_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
v___x_178_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__2));
v___x_179_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_177_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
v___x_180_ = lean_box(1);
v___x_181_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_179_);
lean_ctor_set(v___x_181_, 1, v___x_180_);
v___x_182_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__9));
v___x_183_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_183_, 0, v___x_181_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
v___x_184_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_184_, 0, v___x_183_);
lean_ctor_set(v___x_184_, 1, v___x_169_);
v___x_185_ = lean_obj_once(&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__10, &l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__10_once, _init_l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__10);
v___x_186_ = l_Nat_reprFast(v_numNested_165_);
v___x_187_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
v___x_188_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_185_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
v___x_189_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_189_, 0, v___x_188_);
lean_ctor_set_uint8(v___x_189_, sizeof(void*)*1, v___x_175_);
v___x_190_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_190_, 0, v___x_184_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
v___x_191_ = lean_obj_once(&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__13, &l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__13_once, _init_l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__13);
v___x_192_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__14));
v___x_193_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
lean_ctor_set(v___x_193_, 1, v___x_190_);
v___x_194_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__15));
v___x_195_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_195_, 0, v___x_193_);
lean_ctor_set(v___x_195_, 1, v___x_194_);
v___x_196_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_191_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
v___x_197_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_197_, 0, v___x_196_);
lean_ctor_set_uint8(v___x_197_, sizeof(void*)*1, v___x_175_);
return v___x_197_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr(lean_object* v_x_200_, lean_object* v_prec_201_){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg(v_x_200_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInfo_repr___boxed(lean_object* v_x_203_, lean_object* v_prec_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_Elab_Structural_instReprIndGroupInfo_repr(v_x_203_, v_prec_204_);
lean_dec(v_prec_204_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_ofInductiveVal(lean_object* v_indInfo_208_){
_start:
{
lean_object* v_all_209_; lean_object* v_numNested_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v_all_209_ = lean_ctor_get(v_indInfo_208_, 3);
lean_inc(v_all_209_);
v_numNested_210_ = lean_ctor_get(v_indInfo_208_, 5);
lean_inc(v_numNested_210_);
lean_dec_ref(v_indInfo_208_);
v___x_211_ = lean_array_mk(v_all_209_);
v___x_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_211_);
lean_ctor_set(v___x_212_, 1, v_numNested_210_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_numMotives(lean_object* v_group_213_){
_start:
{
lean_object* v_all_214_; lean_object* v_numNested_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v_all_214_ = lean_ctor_get(v_group_213_, 0);
v_numNested_215_ = lean_ctor_get(v_group_213_, 1);
v___x_216_ = lean_array_get_size(v_all_214_);
v___x_217_ = lean_nat_add(v___x_216_, v_numNested_215_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_numMotives___boxed(lean_object* v_group_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_Elab_Structural_IndGroupInfo_numMotives(v_group_218_);
lean_dec_ref(v_group_218_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_brecOnName(lean_object* v_info_220_, lean_object* v_idx_221_){
_start:
{
lean_object* v_all_222_; lean_object* v___x_223_; uint8_t v___x_224_; 
v_all_222_ = lean_ctor_get(v_info_220_, 0);
v___x_223_ = lean_array_get_size(v_all_222_);
v___x_224_ = lean_nat_dec_lt(v_idx_221_, v___x_223_);
if (v___x_224_ == 0)
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v_j_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_225_ = lean_nat_sub(v_idx_221_, v___x_223_);
v___x_226_ = lean_unsigned_to_nat(1u);
v_j_227_ = lean_nat_add(v___x_225_, v___x_226_);
lean_dec(v___x_225_);
v___x_228_ = lean_unsigned_to_nat(0u);
v___x_229_ = l_Lean_Elab_Structural_IndGroupInfo_brecOnName(v_info_220_, v___x_228_);
v___x_230_ = lean_name_append_index_after(v___x_229_, v_j_227_);
return v___x_230_;
}
else
{
lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_231_ = lean_array_fget_borrowed(v_all_222_, v_idx_221_);
lean_inc(v___x_231_);
v___x_232_ = l_Lean_mkBRecOnName(v___x_231_);
return v___x_232_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInfo_brecOnName___boxed(lean_object* v_info_233_, lean_object* v_idx_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Lean_Elab_Structural_IndGroupInfo_brecOnName(v_info_233_, v_idx_234_);
lean_dec(v_idx_234_);
lean_dec_ref(v_info_233_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2_spec__4_spec__6(lean_object* v_x_244_, lean_object* v_x_245_, lean_object* v_x_246_){
_start:
{
if (lean_obj_tag(v_x_246_) == 0)
{
lean_dec(v_x_244_);
return v_x_245_;
}
else
{
lean_object* v_head_247_; lean_object* v_tail_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_259_; 
v_head_247_ = lean_ctor_get(v_x_246_, 0);
v_tail_248_ = lean_ctor_get(v_x_246_, 1);
v_isSharedCheck_259_ = !lean_is_exclusive(v_x_246_);
if (v_isSharedCheck_259_ == 0)
{
v___x_250_ = v_x_246_;
v_isShared_251_ = v_isSharedCheck_259_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_tail_248_);
lean_inc(v_head_247_);
lean_dec(v_x_246_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_259_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_253_; 
lean_inc(v_x_244_);
if (v_isShared_251_ == 0)
{
lean_ctor_set_tag(v___x_250_, 5);
lean_ctor_set(v___x_250_, 1, v_x_244_);
lean_ctor_set(v___x_250_, 0, v_x_245_);
v___x_253_ = v___x_250_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v_x_245_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v_x_244_);
v___x_253_ = v_reuseFailAlloc_258_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_254_ = lean_unsigned_to_nat(0u);
v___x_255_ = l_Lean_instReprExpr_repr(v_head_247_, v___x_254_);
v___x_256_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_253_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v_x_245_ = v___x_256_;
v_x_246_ = v_tail_248_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2_spec__4(lean_object* v_x_260_, lean_object* v_x_261_, lean_object* v_x_262_){
_start:
{
if (lean_obj_tag(v_x_262_) == 0)
{
lean_dec(v_x_260_);
return v_x_261_;
}
else
{
lean_object* v_head_263_; lean_object* v_tail_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_275_; 
v_head_263_ = lean_ctor_get(v_x_262_, 0);
v_tail_264_ = lean_ctor_get(v_x_262_, 1);
v_isSharedCheck_275_ = !lean_is_exclusive(v_x_262_);
if (v_isSharedCheck_275_ == 0)
{
v___x_266_ = v_x_262_;
v_isShared_267_ = v_isSharedCheck_275_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_tail_264_);
lean_inc(v_head_263_);
lean_dec(v_x_262_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_275_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
lean_inc(v_x_260_);
if (v_isShared_267_ == 0)
{
lean_ctor_set_tag(v___x_266_, 5);
lean_ctor_set(v___x_266_, 1, v_x_260_);
lean_ctor_set(v___x_266_, 0, v_x_261_);
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_x_261_);
lean_ctor_set(v_reuseFailAlloc_274_, 1, v_x_260_);
v___x_269_ = v_reuseFailAlloc_274_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_270_ = lean_unsigned_to_nat(0u);
v___x_271_ = l_Lean_instReprExpr_repr(v_head_263_, v___x_270_);
v___x_272_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_269_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___x_273_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2_spec__4_spec__6(v_x_260_, v___x_272_, v_tail_264_);
return v___x_273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2___lam__0(lean_object* v___y_276_){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_277_ = lean_unsigned_to_nat(0u);
v___x_278_ = l_Lean_instReprExpr_repr(v___y_276_, v___x_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2(lean_object* v_x_279_, lean_object* v_x_280_){
_start:
{
if (lean_obj_tag(v_x_279_) == 0)
{
lean_object* v___x_281_; 
lean_dec(v_x_280_);
v___x_281_ = lean_box(0);
return v___x_281_;
}
else
{
lean_object* v_tail_282_; 
v_tail_282_ = lean_ctor_get(v_x_279_, 1);
if (lean_obj_tag(v_tail_282_) == 0)
{
lean_object* v_head_283_; lean_object* v___x_284_; 
lean_dec(v_x_280_);
v_head_283_ = lean_ctor_get(v_x_279_, 0);
lean_inc(v_head_283_);
lean_dec_ref_known(v_x_279_, 2);
v___x_284_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2___lam__0(v_head_283_);
return v___x_284_;
}
else
{
lean_object* v_head_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
lean_inc(v_tail_282_);
v_head_285_ = lean_ctor_get(v_x_279_, 0);
lean_inc(v_head_285_);
lean_dec_ref_known(v_x_279_, 2);
v___x_286_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2___lam__0(v_head_285_);
v___x_287_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2_spec__4(v_x_280_, v___x_286_, v_tail_282_);
return v___x_287_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1(lean_object* v_xs_288_){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_289_ = lean_array_get_size(v_xs_288_);
v___x_290_ = lean_unsigned_to_nat(0u);
v___x_291_ = lean_nat_dec_eq(v___x_289_, v___x_290_);
if (v___x_291_ == 0)
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_292_ = lean_array_to_list(v_xs_288_);
v___x_293_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__3));
v___x_294_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1_spec__2(v___x_292_, v___x_293_);
v___x_295_ = lean_obj_once(&l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__6, &l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__6_once, _init_l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__6);
v___x_296_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__7));
v___x_297_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set(v___x_297_, 1, v___x_294_);
v___x_298_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__8));
v___x_299_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_297_);
lean_ctor_set(v___x_299_, 1, v___x_298_);
v___x_300_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_295_);
lean_ctor_set(v___x_300_, 1, v___x_299_);
v___x_301_ = l_Std_Format_fill(v___x_300_);
return v___x_301_;
}
else
{
lean_object* v___x_302_; 
lean_dec_ref(v_xs_288_);
v___x_302_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__10));
return v___x_302_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0_spec__1_spec__3(lean_object* v_x_303_, lean_object* v_x_304_, lean_object* v_x_305_){
_start:
{
if (lean_obj_tag(v_x_305_) == 0)
{
lean_dec(v_x_303_);
return v_x_304_;
}
else
{
lean_object* v_head_306_; lean_object* v_tail_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_318_; 
v_head_306_ = lean_ctor_get(v_x_305_, 0);
v_tail_307_ = lean_ctor_get(v_x_305_, 1);
v_isSharedCheck_318_ = !lean_is_exclusive(v_x_305_);
if (v_isSharedCheck_318_ == 0)
{
v___x_309_ = v_x_305_;
v_isShared_310_ = v_isSharedCheck_318_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_tail_307_);
lean_inc(v_head_306_);
lean_dec(v_x_305_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_318_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_312_; 
lean_inc(v_x_303_);
if (v_isShared_310_ == 0)
{
lean_ctor_set_tag(v___x_309_, 5);
lean_ctor_set(v___x_309_, 1, v_x_303_);
lean_ctor_set(v___x_309_, 0, v_x_304_);
v___x_312_ = v___x_309_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_x_304_);
lean_ctor_set(v_reuseFailAlloc_317_, 1, v_x_303_);
v___x_312_ = v_reuseFailAlloc_317_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_313_ = lean_unsigned_to_nat(0u);
v___x_314_ = l_Lean_instReprLevel_repr(v_head_306_, v___x_313_);
v___x_315_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_315_, 0, v___x_312_);
lean_ctor_set(v___x_315_, 1, v___x_314_);
v_x_304_ = v___x_315_;
v_x_305_ = v_tail_307_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0_spec__1(lean_object* v_x_319_, lean_object* v_x_320_, lean_object* v_x_321_){
_start:
{
if (lean_obj_tag(v_x_321_) == 0)
{
lean_dec(v_x_319_);
return v_x_320_;
}
else
{
lean_object* v_head_322_; lean_object* v_tail_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_334_; 
v_head_322_ = lean_ctor_get(v_x_321_, 0);
v_tail_323_ = lean_ctor_get(v_x_321_, 1);
v_isSharedCheck_334_ = !lean_is_exclusive(v_x_321_);
if (v_isSharedCheck_334_ == 0)
{
v___x_325_ = v_x_321_;
v_isShared_326_ = v_isSharedCheck_334_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_tail_323_);
lean_inc(v_head_322_);
lean_dec(v_x_321_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_334_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
lean_inc(v_x_319_);
if (v_isShared_326_ == 0)
{
lean_ctor_set_tag(v___x_325_, 5);
lean_ctor_set(v___x_325_, 1, v_x_319_);
lean_ctor_set(v___x_325_, 0, v_x_320_);
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_x_320_);
lean_ctor_set(v_reuseFailAlloc_333_, 1, v_x_319_);
v___x_328_ = v_reuseFailAlloc_333_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_329_ = lean_unsigned_to_nat(0u);
v___x_330_ = l_Lean_instReprLevel_repr(v_head_322_, v___x_329_);
v___x_331_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_331_, 0, v___x_328_);
lean_ctor_set(v___x_331_, 1, v___x_330_);
v___x_332_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0_spec__1_spec__3(v_x_319_, v___x_331_, v_tail_323_);
return v___x_332_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0___lam__0(lean_object* v___y_335_){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = lean_unsigned_to_nat(0u);
v___x_337_ = l_Lean_instReprLevel_repr(v___y_335_, v___x_336_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0(lean_object* v_x_338_, lean_object* v_x_339_){
_start:
{
if (lean_obj_tag(v_x_338_) == 0)
{
lean_object* v___x_340_; 
lean_dec(v_x_339_);
v___x_340_ = lean_box(0);
return v___x_340_;
}
else
{
lean_object* v_tail_341_; 
v_tail_341_ = lean_ctor_get(v_x_338_, 1);
if (lean_obj_tag(v_tail_341_) == 0)
{
lean_object* v_head_342_; lean_object* v___x_343_; 
lean_dec(v_x_339_);
v_head_342_ = lean_ctor_get(v_x_338_, 0);
lean_inc(v_head_342_);
lean_dec_ref_known(v_x_338_, 2);
v___x_343_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0___lam__0(v_head_342_);
return v___x_343_;
}
else
{
lean_object* v_head_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
lean_inc(v_tail_341_);
v_head_344_ = lean_ctor_get(v_x_338_, 0);
lean_inc(v_head_344_);
lean_dec_ref_known(v_x_338_, 2);
v___x_345_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0___lam__0(v_head_344_);
v___x_346_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0_spec__1(v_x_339_, v___x_345_, v_tail_341_);
return v___x_346_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_351_ = ((lean_object*)(l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__2));
v___x_352_ = lean_string_length(v___x_351_);
return v___x_352_;
}
}
static lean_object* _init_l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_353_ = lean_obj_once(&l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__3, &l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__3_once, _init_l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__3);
v___x_354_ = lean_nat_to_int(v___x_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg(lean_object* v_a_357_){
_start:
{
if (lean_obj_tag(v_a_357_) == 0)
{
lean_object* v___x_358_; 
v___x_358_ = ((lean_object*)(l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__1));
return v___x_358_;
}
else
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; lean_object* v___x_368_; 
v___x_359_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__3));
v___x_360_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0_spec__0(v_a_357_, v___x_359_);
v___x_361_ = lean_obj_once(&l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__4, &l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__4_once, _init_l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__4);
v___x_362_ = ((lean_object*)(l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg___closed__5));
v___x_363_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_363_, 0, v___x_362_);
lean_ctor_set(v___x_363_, 1, v___x_360_);
v___x_364_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__8));
v___x_365_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_363_);
lean_ctor_set(v___x_365_, 1, v___x_364_);
v___x_366_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_366_, 0, v___x_361_);
lean_ctor_set(v___x_366_, 1, v___x_365_);
v___x_367_ = 0;
v___x_368_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_368_, 0, v___x_366_);
lean_ctor_set_uint8(v___x_368_, sizeof(void*)*1, v___x_367_);
return v___x_368_;
}
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = lean_unsigned_to_nat(18u);
v___x_379_ = lean_nat_to_int(v___x_378_);
return v___x_379_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = lean_unsigned_to_nat(10u);
v___x_384_ = lean_nat_to_int(v___x_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg(lean_object* v_x_388_){
_start:
{
lean_object* v_toIndGroupInfo_389_; lean_object* v_levels_390_; lean_object* v_params_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; uint8_t v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v_toIndGroupInfo_389_ = lean_ctor_get(v_x_388_, 0);
lean_inc_ref(v_toIndGroupInfo_389_);
v_levels_390_ = lean_ctor_get(v_x_388_, 1);
lean_inc(v_levels_390_);
v_params_391_ = lean_ctor_get(v_x_388_, 2);
lean_inc_ref(v_params_391_);
lean_dec_ref(v_x_388_);
v___x_392_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__5));
v___x_393_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__3));
v___x_394_ = lean_obj_once(&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__4, &l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__4_once, _init_l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__4);
v___x_395_ = l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg(v_toIndGroupInfo_389_);
v___x_396_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_396_, 0, v___x_394_);
lean_ctor_set(v___x_396_, 1, v___x_395_);
v___x_397_ = 0;
v___x_398_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_398_, 0, v___x_396_);
lean_ctor_set_uint8(v___x_398_, sizeof(void*)*1, v___x_397_);
v___x_399_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_393_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
v___x_400_ = ((lean_object*)(l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInfo_repr_spec__0___closed__2));
v___x_401_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_401_, 0, v___x_399_);
lean_ctor_set(v___x_401_, 1, v___x_400_);
v___x_402_ = lean_box(1);
v___x_403_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_403_, 0, v___x_401_);
lean_ctor_set(v___x_403_, 1, v___x_402_);
v___x_404_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__6));
v___x_405_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_405_, 0, v___x_403_);
lean_ctor_set(v___x_405_, 1, v___x_404_);
v___x_406_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
lean_ctor_set(v___x_406_, 1, v___x_392_);
v___x_407_ = lean_obj_once(&l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__7, &l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__7_once, _init_l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__7);
v___x_408_ = l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg(v_levels_390_);
v___x_409_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_407_);
lean_ctor_set(v___x_409_, 1, v___x_408_);
v___x_410_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_410_, 0, v___x_409_);
lean_ctor_set_uint8(v___x_410_, sizeof(void*)*1, v___x_397_);
v___x_411_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_411_, 0, v___x_406_);
lean_ctor_set(v___x_411_, 1, v___x_410_);
v___x_412_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_412_, 0, v___x_411_);
lean_ctor_set(v___x_412_, 1, v___x_400_);
v___x_413_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
lean_ctor_set(v___x_413_, 1, v___x_402_);
v___x_414_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg___closed__9));
v___x_415_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_415_, 0, v___x_413_);
lean_ctor_set(v___x_415_, 1, v___x_414_);
v___x_416_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
lean_ctor_set(v___x_416_, 1, v___x_392_);
v___x_417_ = l_Array_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__1(v_params_391_);
v___x_418_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_407_);
lean_ctor_set(v___x_418_, 1, v___x_417_);
v___x_419_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_419_, 0, v___x_418_);
lean_ctor_set_uint8(v___x_419_, sizeof(void*)*1, v___x_397_);
v___x_420_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_420_, 0, v___x_416_);
lean_ctor_set(v___x_420_, 1, v___x_419_);
v___x_421_ = lean_obj_once(&l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__13, &l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__13_once, _init_l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__13);
v___x_422_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__14));
v___x_423_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_423_, 0, v___x_422_);
lean_ctor_set(v___x_423_, 1, v___x_420_);
v___x_424_ = ((lean_object*)(l_Lean_Elab_Structural_instReprIndGroupInfo_repr___redArg___closed__15));
v___x_425_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_425_, 0, v___x_423_);
lean_ctor_set(v___x_425_, 1, v___x_424_);
v___x_426_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_426_, 0, v___x_421_);
lean_ctor_set(v___x_426_, 1, v___x_425_);
v___x_427_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_427_, 0, v___x_426_);
lean_ctor_set_uint8(v___x_427_, sizeof(void*)*1, v___x_397_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr(lean_object* v_x_428_, lean_object* v_prec_429_){
_start:
{
lean_object* v___x_430_; 
v___x_430_ = l_Lean_Elab_Structural_instReprIndGroupInst_repr___redArg(v_x_428_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instReprIndGroupInst_repr___boxed(lean_object* v_x_431_, lean_object* v_prec_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Lean_Elab_Structural_instReprIndGroupInst_repr(v_x_431_, v_prec_432_);
lean_dec(v_prec_432_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0(lean_object* v_a_434_, lean_object* v_n_435_){
_start:
{
lean_object* v___x_436_; 
v___x_436_ = l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___redArg(v_a_434_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0___boxed(lean_object* v_a_437_, lean_object* v_n_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_List_repr___at___00Lean_Elab_Structural_instReprIndGroupInst_repr_spec__0(v_a_437_, v_n_438_);
lean_dec(v_n_438_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_toMessageData(lean_object* v_igi_442_){
_start:
{
lean_object* v_toIndGroupInfo_443_; lean_object* v_levels_444_; lean_object* v_params_445_; lean_object* v_all_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v_toIndGroupInfo_443_ = lean_ctor_get(v_igi_442_, 0);
lean_inc_ref(v_toIndGroupInfo_443_);
v_levels_444_ = lean_ctor_get(v_igi_442_, 1);
lean_inc(v_levels_444_);
v_params_445_ = lean_ctor_get(v_igi_442_, 2);
lean_inc_ref(v_params_445_);
lean_dec_ref(v_igi_442_);
v_all_446_ = lean_ctor_get(v_toIndGroupInfo_443_, 0);
lean_inc_ref(v_all_446_);
lean_dec_ref(v_toIndGroupInfo_443_);
v___x_447_ = lean_box(0);
v___x_448_ = lean_unsigned_to_nat(0u);
v___x_449_ = lean_array_get(v___x_447_, v_all_446_, v___x_448_);
lean_dec_ref(v_all_446_);
v___x_450_ = l_Lean_Expr_const___override(v___x_449_, v_levels_444_);
v___x_451_ = l_Lean_mkAppN(v___x_450_, v_params_445_);
lean_dec_ref(v_params_445_);
v___x_452_ = l_Lean_MessageData_ofExpr(v___x_451_);
return v___x_452_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__0(lean_object* v_x_455_){
_start:
{
if (lean_obj_tag(v_x_455_) == 0)
{
uint8_t v___x_456_; 
v___x_456_ = 1;
return v___x_456_;
}
else
{
lean_object* v_head_457_; lean_object* v_tail_458_; lean_object* v_fst_459_; lean_object* v_snd_460_; uint8_t v___x_461_; 
v_head_457_ = lean_ctor_get(v_x_455_, 0);
v_tail_458_ = lean_ctor_get(v_x_455_, 1);
v_fst_459_ = lean_ctor_get(v_head_457_, 0);
v_snd_460_ = lean_ctor_get(v_head_457_, 1);
v___x_461_ = l_Lean_Level_isEquiv(v_fst_459_, v_snd_460_);
if (v___x_461_ == 0)
{
return v___x_461_;
}
else
{
v_x_455_ = v_tail_458_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__0___boxed(lean_object* v_x_463_){
_start:
{
uint8_t v_res_464_; lean_object* v_r_465_; 
v_res_464_ = l_List_all___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__0(v_x_463_);
lean_dec(v_x_463_);
v_r_465_ = lean_box(v_res_464_);
return v_r_465_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__1(lean_object* v___x_466_, lean_object* v___x_467_, lean_object* v_as_468_, size_t v_i_469_, size_t v_stop_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_){
_start:
{
uint8_t v___x_480_; 
v___x_480_ = lean_usize_dec_eq(v_i_469_, v_stop_470_);
if (v___x_480_ == 0)
{
lean_object* v___x_481_; lean_object* v_fst_482_; lean_object* v_snd_483_; uint8_t v___x_484_; lean_object* v___x_485_; 
v___x_481_ = lean_array_uget_borrowed(v_as_468_, v_i_469_);
v_fst_482_ = lean_ctor_get(v___x_481_, 0);
v_snd_483_ = lean_ctor_get(v___x_481_, 1);
v___x_484_ = lean_nat_dec_eq(v___x_466_, v___x_467_);
lean_inc(v_snd_483_);
lean_inc(v_fst_482_);
v___x_485_ = l_Lean_Meta_isExprDefEqGuarded(v_fst_482_, v_snd_483_, v___y_471_, v___y_472_, v___y_473_, v___y_474_);
if (lean_obj_tag(v___x_485_) == 0)
{
lean_object* v_a_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_495_; 
v_a_486_ = lean_ctor_get(v___x_485_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_485_);
if (v_isSharedCheck_495_ == 0)
{
v___x_488_ = v___x_485_;
v_isShared_489_ = v_isSharedCheck_495_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_a_486_);
lean_dec(v___x_485_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_495_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
uint8_t v___x_490_; 
v___x_490_ = lean_unbox(v_a_486_);
lean_dec(v_a_486_);
if (v___x_490_ == 0)
{
if (v___x_484_ == 0)
{
lean_del_object(v___x_488_);
goto v___jp_476_;
}
else
{
lean_object* v___x_491_; lean_object* v___x_493_; 
v___x_491_ = lean_box(v___x_484_);
if (v_isShared_489_ == 0)
{
lean_ctor_set(v___x_488_, 0, v___x_491_);
v___x_493_ = v___x_488_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v___x_491_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
return v___x_493_;
}
}
}
else
{
lean_del_object(v___x_488_);
goto v___jp_476_;
}
}
}
else
{
return v___x_485_;
}
}
else
{
uint8_t v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_496_ = 0;
v___x_497_ = lean_box(v___x_496_);
v___x_498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
return v___x_498_;
}
v___jp_476_:
{
size_t v___x_477_; size_t v___x_478_; 
v___x_477_ = ((size_t)1ULL);
v___x_478_ = lean_usize_add(v_i_469_, v___x_477_);
v_i_469_ = v___x_478_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__1___boxed(lean_object* v___x_499_, lean_object* v___x_500_, lean_object* v_as_501_, lean_object* v_i_502_, lean_object* v_stop_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_){
_start:
{
size_t v_i_boxed_509_; size_t v_stop_boxed_510_; lean_object* v_res_511_; 
v_i_boxed_509_ = lean_unbox_usize(v_i_502_);
lean_dec(v_i_502_);
v_stop_boxed_510_ = lean_unbox_usize(v_stop_503_);
lean_dec(v_stop_503_);
v_res_511_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__1(v___x_499_, v___x_500_, v_as_501_, v_i_boxed_509_, v_stop_boxed_510_, v___y_504_, v___y_505_, v___y_506_, v___y_507_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
lean_dec_ref(v_as_501_);
lean_dec(v___x_500_);
lean_dec(v___x_499_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_isDefEq(lean_object* v_igi1_512_, lean_object* v_igi2_513_, lean_object* v_a_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_){
_start:
{
lean_object* v_toIndGroupInfo_519_; lean_object* v_levels_520_; lean_object* v_params_521_; lean_object* v_toIndGroupInfo_522_; lean_object* v_levels_523_; lean_object* v_params_524_; uint8_t v___x_525_; 
v_toIndGroupInfo_519_ = lean_ctor_get(v_igi1_512_, 0);
lean_inc_ref(v_toIndGroupInfo_519_);
v_levels_520_ = lean_ctor_get(v_igi1_512_, 1);
lean_inc(v_levels_520_);
v_params_521_ = lean_ctor_get(v_igi1_512_, 2);
lean_inc_ref(v_params_521_);
lean_dec_ref(v_igi1_512_);
v_toIndGroupInfo_522_ = lean_ctor_get(v_igi2_513_, 0);
lean_inc_ref(v_toIndGroupInfo_522_);
v_levels_523_ = lean_ctor_get(v_igi2_513_, 1);
lean_inc(v_levels_523_);
v_params_524_ = lean_ctor_get(v_igi2_513_, 2);
lean_inc_ref(v_params_524_);
lean_dec_ref(v_igi2_513_);
v___x_525_ = l_Lean_Elab_Structural_instBEqIndGroupInfo_beq(v_toIndGroupInfo_519_, v_toIndGroupInfo_522_);
lean_dec_ref(v_toIndGroupInfo_522_);
lean_dec_ref(v_toIndGroupInfo_519_);
if (v___x_525_ == 0)
{
lean_object* v___x_526_; lean_object* v___x_527_; 
lean_dec_ref(v_params_524_);
lean_dec(v_levels_523_);
lean_dec_ref(v_params_521_);
lean_dec(v_levels_520_);
v___x_526_ = lean_box(v___x_525_);
v___x_527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_527_, 0, v___x_526_);
return v___x_527_;
}
else
{
lean_object* v___x_528_; lean_object* v___x_529_; uint8_t v___x_530_; 
v___x_528_ = l_List_lengthTR___redArg(v_levels_520_);
v___x_529_ = l_List_lengthTR___redArg(v_levels_523_);
v___x_530_ = lean_nat_dec_eq(v___x_528_, v___x_529_);
lean_dec(v___x_529_);
lean_dec(v___x_528_);
if (v___x_530_ == 0)
{
lean_object* v___x_531_; lean_object* v___x_532_; 
lean_dec_ref(v_params_524_);
lean_dec(v_levels_523_);
lean_dec_ref(v_params_521_);
lean_dec(v_levels_520_);
v___x_531_ = lean_box(v___x_530_);
v___x_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_532_, 0, v___x_531_);
return v___x_532_;
}
else
{
lean_object* v___x_533_; uint8_t v___x_534_; 
v___x_533_ = l_List_zipWith___at___00List_zip_spec__0(lean_box(0), lean_box(0), v_levels_520_, v_levels_523_);
v___x_534_ = l_List_all___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__0(v___x_533_);
lean_dec(v___x_533_);
if (v___x_534_ == 0)
{
lean_object* v___x_535_; lean_object* v___x_536_; 
lean_dec_ref(v_params_524_);
lean_dec_ref(v_params_521_);
v___x_535_ = lean_box(v___x_534_);
v___x_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
return v___x_536_;
}
else
{
lean_object* v___x_537_; lean_object* v___x_538_; uint8_t v___x_539_; 
v___x_537_ = lean_array_get_size(v_params_521_);
v___x_538_ = lean_array_get_size(v_params_524_);
v___x_539_ = lean_nat_dec_eq(v___x_537_, v___x_538_);
if (v___x_539_ == 0)
{
lean_object* v___x_540_; lean_object* v___x_541_; 
lean_dec_ref(v_params_524_);
lean_dec_ref(v_params_521_);
v___x_540_ = lean_box(v___x_539_);
v___x_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
return v___x_541_;
}
else
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; uint8_t v___x_545_; 
v___x_542_ = l_Array_zip___redArg(v_params_521_, v_params_524_);
lean_dec_ref(v_params_524_);
lean_dec_ref(v_params_521_);
v___x_543_ = lean_unsigned_to_nat(0u);
v___x_544_ = lean_array_get_size(v___x_542_);
v___x_545_ = lean_nat_dec_lt(v___x_543_, v___x_544_);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; lean_object* v___x_547_; 
lean_dec_ref(v___x_542_);
v___x_546_ = lean_box(v___x_539_);
v___x_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
return v___x_547_;
}
else
{
if (v___x_545_ == 0)
{
lean_object* v___x_548_; lean_object* v___x_549_; 
lean_dec_ref(v___x_542_);
v___x_548_ = lean_box(v___x_539_);
v___x_549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_549_, 0, v___x_548_);
return v___x_549_;
}
else
{
size_t v___x_550_; size_t v___x_551_; lean_object* v___x_552_; 
v___x_550_ = ((size_t)0ULL);
v___x_551_ = lean_usize_of_nat(v___x_544_);
v___x_552_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Structural_IndGroupInst_isDefEq_spec__1(v___x_537_, v___x_538_, v___x_542_, v___x_550_, v___x_551_, v_a_514_, v_a_515_, v_a_516_, v_a_517_);
lean_dec_ref(v___x_542_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_567_; 
v_a_553_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_567_ == 0)
{
v___x_555_ = v___x_552_;
v_isShared_556_ = v_isSharedCheck_567_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_552_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_567_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
uint8_t v___x_557_; 
v___x_557_ = lean_unbox(v_a_553_);
lean_dec(v_a_553_);
if (v___x_557_ == 0)
{
lean_object* v___x_558_; lean_object* v___x_560_; 
v___x_558_ = lean_box(v___x_539_);
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 0, v___x_558_);
v___x_560_ = v___x_555_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v___x_558_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
else
{
uint8_t v___x_562_; lean_object* v___x_563_; lean_object* v___x_565_; 
v___x_562_ = 0;
v___x_563_ = lean_box(v___x_562_);
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 0, v___x_563_);
v___x_565_ = v___x_555_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v___x_563_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
}
else
{
return v___x_552_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_isDefEq___boxed(lean_object* v_igi1_568_, lean_object* v_igi2_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_){
_start:
{
lean_object* v_res_575_; 
v_res_575_ = l_Lean_Elab_Structural_IndGroupInst_isDefEq(v_igi1_568_, v_igi2_569_, v_a_570_, v_a_571_, v_a_572_, v_a_573_);
lean_dec(v_a_573_);
lean_dec_ref(v_a_572_);
lean_dec(v_a_571_);
lean_dec_ref(v_a_570_);
return v_res_575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_brecOn(lean_object* v_group_576_, lean_object* v_lvl_577_, lean_object* v_idx_578_){
_start:
{
lean_object* v_toIndGroupInfo_579_; lean_object* v_levels_580_; lean_object* v_params_581_; lean_object* v_n_582_; lean_object* v_us_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v_toIndGroupInfo_579_ = lean_ctor_get(v_group_576_, 0);
v_levels_580_ = lean_ctor_get(v_group_576_, 1);
v_params_581_ = lean_ctor_get(v_group_576_, 2);
v_n_582_ = l_Lean_Elab_Structural_IndGroupInfo_brecOnName(v_toIndGroupInfo_579_, v_idx_578_);
lean_inc(v_levels_580_);
v_us_583_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_us_583_, 0, v_lvl_577_);
lean_ctor_set(v_us_583_, 1, v_levels_580_);
v___x_584_ = l_Lean_Expr_const___override(v_n_582_, v_us_583_);
v___x_585_ = l_Lean_mkAppN(v___x_584_, v_params_581_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_brecOn___boxed(lean_object* v_group_586_, lean_object* v_lvl_587_, lean_object* v_idx_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_Lean_Elab_Structural_IndGroupInst_brecOn(v_group_586_, v_lvl_587_, v_idx_588_);
lean_dec(v_idx_588_);
lean_dec_ref(v_group_586_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0(lean_object* v_msg_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_){
_start:
{
lean_object* v___f_597_; lean_object* v___x_1217__overap_598_; lean_object* v___x_599_; 
v___f_597_ = ((lean_object*)(l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0___closed__0));
v___x_1217__overap_598_ = lean_panic_fn_borrowed(v___f_597_, v_msg_591_);
lean_inc(v___y_595_);
lean_inc_ref(v___y_594_);
lean_inc(v___y_593_);
lean_inc_ref(v___y_592_);
v___x_599_ = lean_apply_5(v___x_1217__overap_598_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, lean_box(0));
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0___boxed(lean_object* v_msg_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0(v_msg_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_);
lean_dec(v___y_604_);
lean_dec_ref(v___y_603_);
lean_dec(v___y_602_);
lean_dec_ref(v___y_601_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg___lam__0(lean_object* v_k_607_, lean_object* v_b_608_, lean_object* v_c_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_){
_start:
{
lean_object* v___x_615_; 
lean_inc(v___y_613_);
lean_inc_ref(v___y_612_);
lean_inc(v___y_611_);
lean_inc_ref(v___y_610_);
v___x_615_ = lean_apply_7(v_k_607_, v_b_608_, v_c_609_, v___y_610_, v___y_611_, v___y_612_, v___y_613_, lean_box(0));
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg___lam__0___boxed(lean_object* v_k_616_, lean_object* v_b_617_, lean_object* v_c_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg___lam__0(v_k_616_, v_b_617_, v_c_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_);
lean_dec(v___y_622_);
lean_dec_ref(v___y_621_);
lean_dec(v___y_620_);
lean_dec_ref(v___y_619_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg(lean_object* v_type_625_, lean_object* v_k_626_, uint8_t v_cleanupAnnotations_627_, uint8_t v_whnfType_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_){
_start:
{
lean_object* v___f_634_; lean_object* v___x_635_; 
v___f_634_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_634_, 0, v_k_626_);
v___x_635_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_625_, v___f_634_, v_cleanupAnnotations_627_, v_whnfType_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_643_; 
v_a_636_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_643_ == 0)
{
v___x_638_ = v___x_635_;
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_635_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_641_; 
if (v_isShared_639_ == 0)
{
v___x_641_ = v___x_638_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_a_636_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
}
else
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_651_; 
v_a_644_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_651_ == 0)
{
v___x_646_ = v___x_635_;
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_635_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_651_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___x_649_; 
if (v_isShared_647_ == 0)
{
v___x_649_ = v___x_646_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_a_644_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg___boxed(lean_object* v_type_652_, lean_object* v_k_653_, lean_object* v_cleanupAnnotations_654_, lean_object* v_whnfType_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_661_; uint8_t v_whnfType_boxed_662_; lean_object* v_res_663_; 
v_cleanupAnnotations_boxed_661_ = lean_unbox(v_cleanupAnnotations_654_);
v_whnfType_boxed_662_ = lean_unbox(v_whnfType_655_);
v_res_663_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg(v_type_652_, v_k_653_, v_cleanupAnnotations_boxed_661_, v_whnfType_boxed_662_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
lean_dec(v___y_659_);
lean_dec_ref(v___y_658_);
lean_dec(v___y_657_);
lean_dec_ref(v___y_656_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1(lean_object* v_00_u03b1_664_, lean_object* v_type_665_, lean_object* v_k_666_, uint8_t v_cleanupAnnotations_667_, uint8_t v_whnfType_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg(v_type_665_, v_k_666_, v_cleanupAnnotations_667_, v_whnfType_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___boxed(lean_object* v_00_u03b1_675_, lean_object* v_type_676_, lean_object* v_k_677_, lean_object* v_cleanupAnnotations_678_, lean_object* v_whnfType_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_685_; uint8_t v_whnfType_boxed_686_; lean_object* v_res_687_; 
v_cleanupAnnotations_boxed_685_ = lean_unbox(v_cleanupAnnotations_678_);
v_whnfType_boxed_686_ = lean_unbox(v_whnfType_679_);
v_res_687_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1(v_00_u03b1_675_, v_type_676_, v_k_677_, v_cleanupAnnotations_boxed_685_, v_whnfType_boxed_686_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
lean_dec(v___y_683_);
lean_dec_ref(v___y_682_);
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__4(lean_object* v_msg_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_){
_start:
{
lean_object* v___f_694_; lean_object* v___x_2299__overap_695_; lean_object* v___x_696_; 
v___f_694_ = ((lean_object*)(l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0___closed__0));
v___x_2299__overap_695_ = lean_panic_fn_borrowed(v___f_694_, v_msg_688_);
lean_inc(v___y_692_);
lean_inc_ref(v___y_691_);
lean_inc(v___y_690_);
lean_inc_ref(v___y_689_);
v___x_696_ = lean_apply_5(v___x_2299__overap_695_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, lean_box(0));
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__4___boxed(lean_object* v_msg_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_){
_start:
{
lean_object* v_res_703_; 
v_res_703_ = l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__4(v_msg_697_, v___y_698_, v___y_699_, v___y_700_, v___y_701_);
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
return v_res_703_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__3(void){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_707_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__2));
v___x_708_ = lean_unsigned_to_nat(6u);
v___x_709_ = lean_unsigned_to_nat(113u);
v___x_710_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__1));
v___x_711_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__0));
v___x_712_ = l_mkPanicMessageWithDecl(v___x_711_, v___x_710_, v___x_709_, v___x_708_, v___x_707_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0(lean_object* v___x_713_, lean_object* v___x_714_, uint8_t v___x_715_, lean_object* v_xs_716_, lean_object* v_x_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_){
_start:
{
lean_object* v___x_723_; uint8_t v___x_724_; 
v___x_723_ = lean_array_get_size(v_xs_716_);
v___x_724_ = lean_nat_dec_lt(v___x_713_, v___x_723_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; lean_object* v___x_726_; 
lean_dec_ref(v_xs_716_);
v___x_725_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__3);
v___x_726_ = l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__0(v___x_725_, v___y_718_, v___y_719_, v___y_720_, v___y_721_);
return v___x_726_;
}
else
{
lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_727_ = lean_unsigned_to_nat(1u);
v___x_728_ = lean_nat_sub(v___x_723_, v___x_727_);
v___x_729_ = lean_array_get_borrowed(v___x_714_, v_xs_716_, v___x_728_);
lean_dec(v___x_728_);
lean_inc(v___y_721_);
lean_inc_ref(v___y_720_);
lean_inc(v___y_719_);
lean_inc_ref(v___y_718_);
lean_inc(v___x_729_);
v___x_730_ = lean_infer_type(v___x_729_, v___y_718_, v___y_719_, v___y_720_, v___y_721_);
if (lean_obj_tag(v___x_730_) == 0)
{
lean_object* v_a_731_; lean_object* v___x_732_; uint8_t v___x_733_; lean_object* v___x_734_; 
v_a_731_ = lean_ctor_get(v___x_730_, 0);
lean_inc(v_a_731_);
lean_dec_ref_known(v___x_730_, 1);
v___x_732_ = lean_array_pop(v_xs_716_);
v___x_733_ = 1;
v___x_734_ = l_Lean_Meta_mkForallFVars(v___x_732_, v_a_731_, v___x_715_, v___x_724_, v___x_724_, v___x_733_, v___y_718_, v___y_719_, v___y_720_, v___y_721_);
lean_dec_ref(v___x_732_);
return v___x_734_;
}
else
{
lean_dec_ref(v_xs_716_);
return v___x_730_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___boxed(lean_object* v___x_735_, lean_object* v___x_736_, lean_object* v___x_737_, lean_object* v_xs_738_, lean_object* v_x_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_){
_start:
{
uint8_t v___x_3685__boxed_745_; lean_object* v_res_746_; 
v___x_3685__boxed_745_ = lean_unbox(v___x_737_);
v_res_746_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0(v___x_735_, v___x_736_, v___x_3685__boxed_745_, v_xs_738_, v_x_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_);
lean_dec(v___y_743_);
lean_dec_ref(v___y_742_);
lean_dec(v___y_741_);
lean_dec_ref(v___y_740_);
lean_dec_ref(v_x_739_);
lean_dec_ref(v___x_736_);
lean_dec(v___x_735_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3(lean_object* v___x_747_, size_t v_sz_748_, size_t v_i_749_, lean_object* v_bs_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
uint8_t v___x_756_; 
v___x_756_ = lean_usize_dec_lt(v_i_749_, v_sz_748_);
if (v___x_756_ == 0)
{
lean_object* v___x_757_; 
v___x_757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_757_, 0, v_bs_750_);
return v___x_757_;
}
else
{
lean_object* v___x_758_; lean_object* v___x_759_; uint8_t v___x_760_; lean_object* v___x_761_; lean_object* v___f_762_; lean_object* v_v_763_; lean_object* v_bs_x27_764_; lean_object* v___x_765_; 
v___x_758_ = lean_unsigned_to_nat(0u);
v___x_759_ = l_Lean_instInhabitedExpr;
v___x_760_ = lean_nat_dec_eq(v___x_747_, v___x_758_);
v___x_761_ = lean_box(v___x_760_);
v___f_762_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___boxed), 10, 3);
lean_closure_set(v___f_762_, 0, v___x_758_);
lean_closure_set(v___f_762_, 1, v___x_759_);
lean_closure_set(v___f_762_, 2, v___x_761_);
v_v_763_ = lean_array_uget(v_bs_750_, v_i_749_);
v_bs_x27_764_ = lean_array_uset(v_bs_750_, v_i_749_, v___x_758_);
v___x_765_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__1___redArg(v_v_763_, v___f_762_, v___x_760_, v___x_760_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v_a_766_; size_t v___x_767_; size_t v___x_768_; lean_object* v___x_769_; 
v_a_766_ = lean_ctor_get(v___x_765_, 0);
lean_inc(v_a_766_);
lean_dec_ref_known(v___x_765_, 1);
v___x_767_ = ((size_t)1ULL);
v___x_768_ = lean_usize_add(v_i_749_, v___x_767_);
v___x_769_ = lean_array_uset(v_bs_x27_764_, v_i_749_, v_a_766_);
v_i_749_ = v___x_768_;
v_bs_750_ = v___x_769_;
goto _start;
}
else
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_778_; 
lean_dec_ref(v_bs_x27_764_);
v_a_771_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_778_ == 0)
{
v___x_773_ = v___x_765_;
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_765_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_778_;
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
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_a_771_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___boxed(lean_object* v___x_779_, lean_object* v_sz_780_, lean_object* v_i_781_, lean_object* v_bs_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_){
_start:
{
size_t v_sz_boxed_788_; size_t v_i_boxed_789_; lean_object* v_res_790_; 
v_sz_boxed_788_ = lean_unbox_usize(v_sz_780_);
lean_dec(v_sz_780_);
v_i_boxed_789_ = lean_unbox_usize(v_i_781_);
lean_dec(v_i_781_);
v_res_790_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3(v___x_779_, v_sz_boxed_788_, v_i_boxed_789_, v_bs_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_);
lean_dec(v___y_786_);
lean_dec_ref(v___y_785_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
lean_dec(v___x_779_);
return v_res_790_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_791_; 
v___x_791_ = l_instMonadEIO___redArg();
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3(lean_object* v_msg_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v_toApplicative_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_865_; 
v___x_802_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__0, &l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__0_once, _init_l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__0);
v___x_803_ = l_StateRefT_x27_instMonad___redArg(v___x_802_);
v_toApplicative_804_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_865_ == 0)
{
lean_object* v_unused_866_; 
v_unused_866_ = lean_ctor_get(v___x_803_, 1);
lean_dec(v_unused_866_);
v___x_806_ = v___x_803_;
v_isShared_807_ = v_isSharedCheck_865_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_toApplicative_804_);
lean_dec(v___x_803_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_865_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v_toFunctor_808_; lean_object* v_toSeq_809_; lean_object* v_toSeqLeft_810_; lean_object* v_toSeqRight_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_863_; 
v_toFunctor_808_ = lean_ctor_get(v_toApplicative_804_, 0);
v_toSeq_809_ = lean_ctor_get(v_toApplicative_804_, 2);
v_toSeqLeft_810_ = lean_ctor_get(v_toApplicative_804_, 3);
v_toSeqRight_811_ = lean_ctor_get(v_toApplicative_804_, 4);
v_isSharedCheck_863_ = !lean_is_exclusive(v_toApplicative_804_);
if (v_isSharedCheck_863_ == 0)
{
lean_object* v_unused_864_; 
v_unused_864_ = lean_ctor_get(v_toApplicative_804_, 1);
lean_dec(v_unused_864_);
v___x_813_ = v_toApplicative_804_;
v_isShared_814_ = v_isSharedCheck_863_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_toSeqRight_811_);
lean_inc(v_toSeqLeft_810_);
lean_inc(v_toSeq_809_);
lean_inc(v_toFunctor_808_);
lean_dec(v_toApplicative_804_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_863_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___f_815_; lean_object* v___f_816_; lean_object* v___f_817_; lean_object* v___f_818_; lean_object* v___x_819_; lean_object* v___f_820_; lean_object* v___f_821_; lean_object* v___f_822_; lean_object* v___x_824_; 
v___f_815_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__1));
v___f_816_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__2));
lean_inc_ref(v_toFunctor_808_);
v___f_817_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_817_, 0, v_toFunctor_808_);
v___f_818_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_818_, 0, v_toFunctor_808_);
v___x_819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_819_, 0, v___f_817_);
lean_ctor_set(v___x_819_, 1, v___f_818_);
v___f_820_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_820_, 0, v_toSeqRight_811_);
v___f_821_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_821_, 0, v_toSeqLeft_810_);
v___f_822_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_822_, 0, v_toSeq_809_);
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 4, v___f_820_);
lean_ctor_set(v___x_813_, 3, v___f_821_);
lean_ctor_set(v___x_813_, 2, v___f_822_);
lean_ctor_set(v___x_813_, 1, v___f_815_);
lean_ctor_set(v___x_813_, 0, v___x_819_);
v___x_824_ = v___x_813_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v___x_819_);
lean_ctor_set(v_reuseFailAlloc_862_, 1, v___f_815_);
lean_ctor_set(v_reuseFailAlloc_862_, 2, v___f_822_);
lean_ctor_set(v_reuseFailAlloc_862_, 3, v___f_821_);
lean_ctor_set(v_reuseFailAlloc_862_, 4, v___f_820_);
v___x_824_ = v_reuseFailAlloc_862_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
lean_object* v___x_826_; 
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 1, v___f_816_);
lean_ctor_set(v___x_806_, 0, v___x_824_);
v___x_826_ = v___x_806_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v___x_824_);
lean_ctor_set(v_reuseFailAlloc_861_, 1, v___f_816_);
v___x_826_ = v_reuseFailAlloc_861_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
lean_object* v___x_827_; lean_object* v_toApplicative_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_859_; 
v___x_827_ = l_StateRefT_x27_instMonad___redArg(v___x_826_);
v_toApplicative_828_ = lean_ctor_get(v___x_827_, 0);
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_827_);
if (v_isSharedCheck_859_ == 0)
{
lean_object* v_unused_860_; 
v_unused_860_ = lean_ctor_get(v___x_827_, 1);
lean_dec(v_unused_860_);
v___x_830_ = v___x_827_;
v_isShared_831_ = v_isSharedCheck_859_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_toApplicative_828_);
lean_dec(v___x_827_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_859_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v_toFunctor_832_; lean_object* v_toSeq_833_; lean_object* v_toSeqLeft_834_; lean_object* v_toSeqRight_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_857_; 
v_toFunctor_832_ = lean_ctor_get(v_toApplicative_828_, 0);
v_toSeq_833_ = lean_ctor_get(v_toApplicative_828_, 2);
v_toSeqLeft_834_ = lean_ctor_get(v_toApplicative_828_, 3);
v_toSeqRight_835_ = lean_ctor_get(v_toApplicative_828_, 4);
v_isSharedCheck_857_ = !lean_is_exclusive(v_toApplicative_828_);
if (v_isSharedCheck_857_ == 0)
{
lean_object* v_unused_858_; 
v_unused_858_ = lean_ctor_get(v_toApplicative_828_, 1);
lean_dec(v_unused_858_);
v___x_837_ = v_toApplicative_828_;
v_isShared_838_ = v_isSharedCheck_857_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_toSeqRight_835_);
lean_inc(v_toSeqLeft_834_);
lean_inc(v_toSeq_833_);
lean_inc(v_toFunctor_832_);
lean_dec(v_toApplicative_828_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_857_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___f_839_; lean_object* v___f_840_; lean_object* v___f_841_; lean_object* v___f_842_; lean_object* v___x_843_; lean_object* v___f_844_; lean_object* v___f_845_; lean_object* v___f_846_; lean_object* v___x_848_; 
v___f_839_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__3));
v___f_840_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___closed__4));
lean_inc_ref(v_toFunctor_832_);
v___f_841_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_841_, 0, v_toFunctor_832_);
v___f_842_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_842_, 0, v_toFunctor_832_);
v___x_843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_843_, 0, v___f_841_);
lean_ctor_set(v___x_843_, 1, v___f_842_);
v___f_844_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_844_, 0, v_toSeqRight_835_);
v___f_845_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_845_, 0, v_toSeqLeft_834_);
v___f_846_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_846_, 0, v_toSeq_833_);
if (v_isShared_838_ == 0)
{
lean_ctor_set(v___x_837_, 4, v___f_844_);
lean_ctor_set(v___x_837_, 3, v___f_845_);
lean_ctor_set(v___x_837_, 2, v___f_846_);
lean_ctor_set(v___x_837_, 1, v___f_839_);
lean_ctor_set(v___x_837_, 0, v___x_843_);
v___x_848_ = v___x_837_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v___x_843_);
lean_ctor_set(v_reuseFailAlloc_856_, 1, v___f_839_);
lean_ctor_set(v_reuseFailAlloc_856_, 2, v___f_846_);
lean_ctor_set(v_reuseFailAlloc_856_, 3, v___f_845_);
lean_ctor_set(v_reuseFailAlloc_856_, 4, v___f_844_);
v___x_848_ = v_reuseFailAlloc_856_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
lean_object* v___x_850_; 
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 1, v___f_840_);
lean_ctor_set(v___x_830_, 0, v___x_848_);
v___x_850_ = v___x_830_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v___x_848_);
lean_ctor_set(v_reuseFailAlloc_855_, 1, v___f_840_);
v___x_850_ = v_reuseFailAlloc_855_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_2905__overap_853_; lean_object* v___x_854_; 
v___x_851_ = lean_box(0);
v___x_852_ = l_instInhabitedOfMonad___redArg(v___x_850_, v___x_851_);
v___x_2905__overap_853_ = lean_panic_fn_borrowed(v___x_852_, v_msg_796_);
lean_dec(v___x_852_);
lean_inc(v___y_800_);
lean_inc_ref(v___y_799_);
lean_inc(v___y_798_);
lean_inc_ref(v___y_797_);
v___x_854_ = lean_apply_5(v___x_2905__overap_853_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, lean_box(0));
return v___x_854_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3___boxed(lean_object* v_msg_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3(v_msg_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_);
lean_dec(v___y_871_);
lean_dec_ref(v___y_870_);
lean_dec(v___y_869_);
lean_dec_ref(v___y_868_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2_spec__4(lean_object* v_msgData_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_){
_start:
{
lean_object* v___x_880_; lean_object* v_env_881_; uint8_t v___x_882_; lean_object* v_env_883_; lean_object* v___x_884_; lean_object* v_toCold_885_; lean_object* v_mctx_886_; lean_object* v_lctx_887_; lean_object* v_options_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_880_ = lean_st_ref_get(v___y_878_);
v_env_881_ = lean_ctor_get(v___x_880_, 0);
lean_inc_ref(v_env_881_);
lean_dec(v___x_880_);
v___x_882_ = 0;
v_env_883_ = l_Lean_Environment_setRecordingDeps(v_env_881_, v___x_882_);
v___x_884_ = lean_st_ref_get(v___y_876_);
v_toCold_885_ = lean_ctor_get(v___y_877_, 0);
v_mctx_886_ = lean_ctor_get(v___x_884_, 0);
lean_inc_ref(v_mctx_886_);
lean_dec(v___x_884_);
v_lctx_887_ = lean_ctor_get(v___y_875_, 2);
v_options_888_ = lean_ctor_get(v_toCold_885_, 2);
lean_inc_ref(v_options_888_);
lean_inc_ref(v_lctx_887_);
v___x_889_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_889_, 0, v_env_883_);
lean_ctor_set(v___x_889_, 1, v_mctx_886_);
lean_ctor_set(v___x_889_, 2, v_lctx_887_);
lean_ctor_set(v___x_889_, 3, v_options_888_);
v___x_890_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_890_, 0, v___x_889_);
lean_ctor_set(v___x_890_, 1, v_msgData_874_);
v___x_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_891_, 0, v___x_890_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2_spec__4___boxed(lean_object* v_msgData_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_){
_start:
{
lean_object* v_res_898_; 
v_res_898_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2_spec__4(v_msgData_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_);
lean_dec(v___y_896_);
lean_dec_ref(v___y_895_);
lean_dec(v___y_894_);
lean_dec_ref(v___y_893_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2___redArg(lean_object* v_msg_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
lean_object* v_ref_905_; lean_object* v___x_906_; lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_915_; 
v_ref_905_ = lean_ctor_get(v___y_902_, 2);
v___x_906_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2_spec__4(v_msg_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_);
v_a_907_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_915_ == 0)
{
v___x_909_ = v___x_906_;
v_isShared_910_ = v_isSharedCheck_915_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_906_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_915_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_911_; lean_object* v___x_913_; 
lean_inc(v_ref_905_);
v___x_911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_911_, 0, v_ref_905_);
lean_ctor_set(v___x_911_, 1, v_a_907_);
if (v_isShared_910_ == 0)
{
lean_ctor_set_tag(v___x_909_, 1);
lean_ctor_set(v___x_909_, 0, v___x_911_);
v___x_913_ = v___x_909_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v___x_911_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2___redArg___boxed(lean_object* v_msg_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2___redArg(v_msg_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
return v_res_922_;
}
}
static lean_object* _init_l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__1(void){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_924_ = ((lean_object*)(l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__0));
v___x_925_ = l_Lean_stringToMessageData(v___x_924_);
return v___x_925_;
}
}
static lean_object* _init_l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__3(void){
_start:
{
lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_927_ = ((lean_object*)(l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__2));
v___x_928_ = l_Lean_stringToMessageData(v___x_927_);
return v___x_928_;
}
}
static lean_object* _init_l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__7(void){
_start:
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_932_ = ((lean_object*)(l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__6));
v___x_933_ = lean_unsigned_to_nat(11u);
v___x_934_ = lean_unsigned_to_nat(129u);
v___x_935_ = ((lean_object*)(l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__5));
v___x_936_ = ((lean_object*)(l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__4));
v___x_937_ = l_mkPanicMessageWithDecl(v___x_936_, v___x_935_, v___x_934_, v___x_933_, v___x_932_);
return v___x_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2(lean_object* v_constName_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_){
_start:
{
lean_object* v___x_952_; lean_object* v_env_953_; uint8_t v___x_954_; lean_object* v___x_955_; 
v___x_952_ = lean_st_ref_get(v___y_942_);
v_env_953_ = lean_ctor_get(v___x_952_, 0);
lean_inc_ref(v_env_953_);
lean_dec(v___x_952_);
v___x_954_ = 0;
lean_inc(v_constName_938_);
v___x_955_ = l_Lean_Environment_findAsync_x3f(v_env_953_, v_constName_938_, v___x_954_);
if (lean_obj_tag(v___x_955_) == 1)
{
lean_object* v_val_956_; uint8_t v_kind_957_; 
v_val_956_ = lean_ctor_get(v___x_955_, 0);
lean_inc(v_val_956_);
lean_dec_ref_known(v___x_955_, 1);
v_kind_957_ = lean_ctor_get_uint8(v_val_956_, sizeof(void*)*3);
if (v_kind_957_ == 7)
{
lean_object* v___x_958_; 
v___x_958_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_956_);
if (lean_obj_tag(v___x_958_) == 7)
{
lean_object* v_val_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_966_; 
lean_dec(v_constName_938_);
v_val_959_ = lean_ctor_get(v___x_958_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_958_);
if (v_isSharedCheck_966_ == 0)
{
v___x_961_ = v___x_958_;
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_val_959_);
lean_dec(v___x_958_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_964_; 
if (v_isShared_962_ == 0)
{
lean_ctor_set_tag(v___x_961_, 0);
v___x_964_ = v___x_961_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_val_959_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
else
{
lean_object* v___x_967_; lean_object* v___x_968_; 
lean_dec_ref(v___x_958_);
v___x_967_ = lean_obj_once(&l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__7, &l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__7_once, _init_l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__7);
v___x_968_ = l_panic___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__3(v___x_967_, v___y_939_, v___y_940_, v___y_941_, v___y_942_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v_a_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_977_; 
v_a_969_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_977_ == 0)
{
v___x_971_ = v___x_968_;
v_isShared_972_ = v_isSharedCheck_977_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_a_969_);
lean_dec(v___x_968_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_977_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
if (lean_obj_tag(v_a_969_) == 0)
{
lean_del_object(v___x_971_);
goto v___jp_944_;
}
else
{
lean_object* v_val_973_; lean_object* v___x_975_; 
lean_dec(v_constName_938_);
v_val_973_ = lean_ctor_get(v_a_969_, 0);
lean_inc(v_val_973_);
lean_dec_ref_known(v_a_969_, 1);
if (v_isShared_972_ == 0)
{
lean_ctor_set(v___x_971_, 0, v_val_973_);
v___x_975_ = v___x_971_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_val_973_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
}
else
{
lean_object* v_a_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_985_; 
lean_dec(v_constName_938_);
v_a_978_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_985_ == 0)
{
v___x_980_ = v___x_968_;
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_a_978_);
lean_dec(v___x_968_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_983_; 
if (v_isShared_981_ == 0)
{
v___x_983_ = v___x_980_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_a_978_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
return v___x_983_;
}
}
}
}
}
else
{
lean_dec(v_val_956_);
goto v___jp_944_;
}
}
else
{
lean_dec(v___x_955_);
goto v___jp_944_;
}
v___jp_944_:
{
lean_object* v___x_945_; uint8_t v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_945_ = lean_obj_once(&l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__1, &l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__1_once, _init_l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__1);
v___x_946_ = 0;
v___x_947_ = l_Lean_MessageData_ofConstName(v_constName_938_, v___x_946_);
v___x_948_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_948_, 0, v___x_945_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
v___x_949_ = lean_obj_once(&l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__3, &l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__3_once, _init_l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___closed__3);
v___x_950_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_950_, 0, v___x_948_);
lean_ctor_set(v___x_950_, 1, v___x_949_);
v___x_951_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2___redArg(v___x_950_, v___y_939_, v___y_940_, v___y_941_, v___y_942_);
return v___x_951_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2___boxed(lean_object* v_constName_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2(v_constName_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
return v_res_992_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__1(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_994_ = ((lean_object*)(l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__0));
v___x_995_ = lean_unsigned_to_nat(2u);
v___x_996_ = lean_unsigned_to_nat(104u);
v___x_997_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__1));
v___x_998_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3___lam__0___closed__0));
v___x_999_ = l_mkPanicMessageWithDecl(v___x_998_, v___x_997_, v___x_996_, v___x_995_, v___x_994_);
return v___x_999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers(lean_object* v_igi_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_){
_start:
{
lean_object* v_toIndGroupInfo_1008_; lean_object* v_levels_1009_; lean_object* v_params_1010_; lean_object* v_all_1011_; lean_object* v_numNested_1012_; lean_object* v___y_1014_; lean_object* v_lower_1015_; lean_object* v_upper_1016_; lean_object* v___x_1022_; uint8_t v___x_1023_; 
v_toIndGroupInfo_1008_ = lean_ctor_get(v_igi_1002_, 0);
lean_inc_ref(v_toIndGroupInfo_1008_);
v_levels_1009_ = lean_ctor_get(v_igi_1002_, 1);
lean_inc(v_levels_1009_);
v_params_1010_ = lean_ctor_get(v_igi_1002_, 2);
lean_inc_ref(v_params_1010_);
lean_dec_ref(v_igi_1002_);
v_all_1011_ = lean_ctor_get(v_toIndGroupInfo_1008_, 0);
lean_inc_ref(v_all_1011_);
v_numNested_1012_ = lean_ctor_get(v_toIndGroupInfo_1008_, 1);
lean_inc(v_numNested_1012_);
v___x_1022_ = lean_unsigned_to_nat(0u);
v___x_1023_ = lean_nat_dec_eq(v_numNested_1012_, v___x_1022_);
if (v___x_1023_ == 0)
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v_recName_1026_; lean_object* v___x_1027_; 
v___x_1024_ = lean_box(0);
v___x_1025_ = lean_array_get_borrowed(v___x_1024_, v_all_1011_, v___x_1022_);
lean_inc(v___x_1025_);
v_recName_1026_ = l_Lean_mkRecName(v___x_1025_);
lean_inc(v_recName_1026_);
v___x_1027_ = l_Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2(v_recName_1026_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_);
if (lean_obj_tag(v___x_1027_) == 0)
{
lean_object* v_a_1028_; lean_object* v_toConstantVal_1029_; lean_object* v_numMotives_1030_; lean_object* v___y_1032_; lean_object* v___x_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1055_; 
v_a_1028_ = lean_ctor_get(v___x_1027_, 0);
lean_inc(v_a_1028_);
lean_dec_ref_known(v___x_1027_, 1);
v_toConstantVal_1029_ = lean_ctor_get(v_a_1028_, 0);
lean_inc_ref(v_toConstantVal_1029_);
v_numMotives_1030_ = lean_ctor_get(v_a_1028_, 4);
lean_inc(v_numMotives_1030_);
lean_dec(v_a_1028_);
v___x_1040_ = l_Lean_Elab_Structural_IndGroupInfo_numMotives(v_toIndGroupInfo_1008_);
v_isSharedCheck_1055_ = !lean_is_exclusive(v_toIndGroupInfo_1008_);
if (v_isSharedCheck_1055_ == 0)
{
lean_object* v_unused_1056_; lean_object* v_unused_1057_; 
v_unused_1056_ = lean_ctor_get(v_toIndGroupInfo_1008_, 1);
lean_dec(v_unused_1056_);
v_unused_1057_ = lean_ctor_get(v_toIndGroupInfo_1008_, 0);
lean_dec(v_unused_1057_);
v___x_1042_ = v_toIndGroupInfo_1008_;
v_isShared_1043_ = v_isSharedCheck_1055_;
goto v_resetjp_1041_;
}
else
{
lean_dec(v_toIndGroupInfo_1008_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1055_;
goto v_resetjp_1041_;
}
v___jp_1031_:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1033_ = l_Lean_Expr_const___override(v_recName_1026_, v___y_1032_);
v___x_1034_ = l_Lean_mkAppN(v___x_1033_, v_params_1010_);
lean_dec_ref(v_params_1010_);
v___x_1035_ = l_Lean_Meta_inferArgumentTypesN(v_numMotives_1030_, v___x_1034_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v_a_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; uint8_t v___x_1039_; 
v_a_1036_ = lean_ctor_get(v___x_1035_, 0);
lean_inc(v_a_1036_);
lean_dec_ref_known(v___x_1035_, 1);
v___x_1037_ = lean_array_get_size(v_all_1011_);
lean_dec_ref(v_all_1011_);
v___x_1038_ = lean_array_get_size(v_a_1036_);
v___x_1039_ = lean_nat_dec_le(v___x_1037_, v___x_1022_);
if (v___x_1039_ == 0)
{
v___y_1014_ = v_a_1036_;
v_lower_1015_ = v___x_1037_;
v_upper_1016_ = v___x_1038_;
goto v___jp_1013_;
}
else
{
v___y_1014_ = v_a_1036_;
v_lower_1015_ = v___x_1022_;
v_upper_1016_ = v___x_1038_;
goto v___jp_1013_;
}
}
else
{
lean_dec(v_numNested_1012_);
lean_dec_ref(v_all_1011_);
return v___x_1035_;
}
}
v_resetjp_1041_:
{
uint8_t v___x_1044_; 
v___x_1044_ = lean_nat_dec_eq(v_numMotives_1030_, v___x_1040_);
lean_dec(v___x_1040_);
if (v___x_1044_ == 0)
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
lean_del_object(v___x_1042_);
lean_dec(v_numMotives_1030_);
lean_dec_ref(v_toConstantVal_1029_);
lean_dec(v_recName_1026_);
lean_dec(v_numNested_1012_);
lean_dec_ref(v_all_1011_);
lean_dec_ref(v_params_1010_);
lean_dec(v_levels_1009_);
v___x_1045_ = lean_obj_once(&l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__1, &l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__1_once, _init_l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__1);
v___x_1046_ = l_panic___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__4(v___x_1045_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_);
return v___x_1046_;
}
else
{
lean_object* v_levelParams_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; uint8_t v___x_1050_; 
v_levelParams_1047_ = lean_ctor_get(v_toConstantVal_1029_, 1);
lean_inc(v_levelParams_1047_);
lean_dec_ref(v_toConstantVal_1029_);
v___x_1048_ = l_List_lengthTR___redArg(v_levels_1009_);
v___x_1049_ = l_List_lengthTR___redArg(v_levelParams_1047_);
lean_dec(v_levelParams_1047_);
v___x_1050_ = lean_nat_dec_eq(v___x_1048_, v___x_1049_);
lean_dec(v___x_1049_);
lean_dec(v___x_1048_);
if (v___x_1050_ == 0)
{
lean_object* v___x_1051_; lean_object* v___x_1053_; 
v___x_1051_ = lean_box(0);
if (v_isShared_1043_ == 0)
{
lean_ctor_set_tag(v___x_1042_, 1);
lean_ctor_set(v___x_1042_, 1, v_levels_1009_);
lean_ctor_set(v___x_1042_, 0, v___x_1051_);
v___x_1053_ = v___x_1042_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v___x_1051_);
lean_ctor_set(v_reuseFailAlloc_1054_, 1, v_levels_1009_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
v___y_1032_ = v___x_1053_;
goto v___jp_1031_;
}
}
else
{
lean_del_object(v___x_1042_);
v___y_1032_ = v_levels_1009_;
goto v___jp_1031_;
}
}
}
}
else
{
lean_object* v_a_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1065_; 
lean_dec(v_recName_1026_);
lean_dec(v_numNested_1012_);
lean_dec_ref(v_all_1011_);
lean_dec_ref(v_params_1010_);
lean_dec(v_levels_1009_);
lean_dec_ref(v_toIndGroupInfo_1008_);
v_a_1058_ = lean_ctor_get(v___x_1027_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1060_ = v___x_1027_;
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_a_1058_);
lean_dec(v___x_1027_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1063_; 
if (v_isShared_1061_ == 0)
{
v___x_1063_ = v___x_1060_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_a_1058_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
}
}
else
{
lean_object* v___x_1066_; lean_object* v___x_1067_; 
lean_dec(v_numNested_1012_);
lean_dec_ref(v_all_1011_);
lean_dec_ref(v_params_1010_);
lean_dec(v_levels_1009_);
lean_dec_ref(v_toIndGroupInfo_1008_);
v___x_1066_ = ((lean_object*)(l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___closed__2));
v___x_1067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1066_);
return v___x_1067_;
}
v___jp_1013_:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; size_t v_sz_1019_; size_t v___x_1020_; lean_object* v___x_1021_; 
v___x_1017_ = l_Array_toSubarray___redArg(v___y_1014_, v_lower_1015_, v_upper_1016_);
v___x_1018_ = l_Subarray_copy___redArg(v___x_1017_);
v_sz_1019_ = lean_array_size(v___x_1018_);
v___x_1020_ = ((size_t)0ULL);
v___x_1021_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__3(v_numNested_1012_, v_sz_1019_, v___x_1020_, v___x_1018_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_);
lean_dec(v_numNested_1012_);
return v___x_1021_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers___boxed(lean_object* v_igi_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_){
_start:
{
lean_object* v_res_1074_; 
v_res_1074_ = l_Lean_Elab_Structural_IndGroupInst_nestedTypeFormers(v_igi_1068_, v_a_1069_, v_a_1070_, v_a_1071_, v_a_1072_);
lean_dec(v_a_1072_);
lean_dec_ref(v_a_1071_);
lean_dec(v_a_1070_);
lean_dec_ref(v_a_1069_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2(lean_object* v_00_u03b1_1075_, lean_object* v_msg_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v___x_1082_; 
v___x_1082_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2___redArg(v_msg_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2___boxed(lean_object* v_00_u03b1_1083_, lean_object* v_msg_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_Lean_throwError___at___00Lean_getConstInfoRec___at___00Lean_Elab_Structural_IndGroupInst_nestedTypeFormers_spec__2_spec__2(v_00_u03b1_1083_, v_msg_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
lean_dec(v___y_1088_);
lean_dec_ref(v___y_1087_);
lean_dec(v___y_1086_);
lean_dec_ref(v___y_1085_);
return v_res_1090_;
}
}
lean_object* runtime_initialize_Lean_Meta_InferType(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_InferType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_Structural_IndGroupInfo(builtin);
}
#ifdef __cplusplus
}
#endif
