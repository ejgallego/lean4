// Lean compiler output
// Module: Lean.Widget.TaggedText
// Imports: public import Lean.Server.Rpc.Basic import Init.Data.Array.GetLit import Init.Data.String.Length
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
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_string_pushn(lean_object*, uint32_t, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Std_Format_FlattenAllowability_shouldFlatten(lean_object*);
uint8_t l_Std_Format_instBEqFlattenBehavior_beq(uint8_t, uint8_t);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_string_posof(lean_object*, uint32_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint8_t l_Std_Format_instBEqFlattenAllowability_beq(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Lean_Json_getTag_x3f(lean_object*);
lean_object* l_Lean_Json_parseCtorFields(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lean_Array_fromJson_x3f___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_ExceptT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Array_toJson___redArg(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instFromJsonJson___lam__0(lean_object*);
lean_object* l_StateT_get(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Array_repr___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorIdx___impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorIdx___impl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_text_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_text_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_append_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_append_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_tag_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_tag_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__0 = (const lean_object*)&l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__0_value)}};
static const lean_object* l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__1 = (const lean_object*)&l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText_default___redArg();
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Widget_instInhabitedTaggedText_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instInhabitedTaggedText_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText___redArg();
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instBEqTaggedText_beq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Widget_instBEqTaggedText_beq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Widget_instBEqTaggedText_beq(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instBEqTaggedText_beq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instBEqTaggedText___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instBEqTaggedText(lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_instReprTaggedText_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Widget.TaggedText.text"};
static const lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Widget_instReprTaggedText_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Widget_instReprTaggedText_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3;
static lean_once_cell_t l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4;
static const lean_string_object l_Lean_Widget_instReprTaggedText_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.Widget.TaggedText.append"};
static const lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Widget_instReprTaggedText_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Widget_instReprTaggedText_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__7 = (const lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__7_value;
static const lean_string_object l_Lean_Widget_instReprTaggedText_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Widget.TaggedText.tag"};
static const lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Widget_instReprTaggedText_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Widget_instReprTaggedText_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___closed__10 = (const lean_object*)&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText(lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no inductive tag found"};
static const lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__0 = (const lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__0_value)}};
static const lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__1 = (const lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__1_value;
static const lean_string_object l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "append"};
static const lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__2 = (const lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__2_value;
static const lean_string_object l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__3 = (const lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__3_value;
static const lean_string_object l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tag"};
static const lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__4 = (const lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__4_value;
static const lean_string_object l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "no inductive constructor matched"};
static const lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__5 = (const lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__5_value)}};
static const lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__6 = (const lean_object*)&l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonTaggedText___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonTaggedText(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonTaggedText_toJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonTaggedText_toJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonTaggedText___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonTaggedText(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_appendText___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_appendText(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_appendTag___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_appendTag(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_forM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_forM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_forM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewrite___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewrite(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewriteM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewriteM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__0 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__0_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__1 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__1_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__2 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__2_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__3 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__3_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__4 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__4_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__5 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__5_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__6 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__0_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__1_value)}};
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__7 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__7_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__2_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__3_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__4_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__5_value)}};
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__8 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__8_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__6_value)}};
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__1, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value)} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__10 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__10_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__4, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value)} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__11 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__11_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__7, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value)} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__12 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__12_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_instMonad___redArg___lam__9, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value)} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__13 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__13_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_map, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value)} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__14 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__14_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__10_value)}};
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__15 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__15_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_pure, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value)} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__16 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__16_value;
static const lean_ctor_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__15_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__16_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__11_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__12_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__13_value)}};
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__17 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__17_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_bind, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value)} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__18 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__18_value;
static const lean_ctor_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__17_value),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__18_value)}};
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__19 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__19_value;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__20 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__20_value;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__22;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__23;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__24;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__25;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__26;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__27;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__28;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__29;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__30;
static lean_once_cell_t l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__31;
static const lean_closure_object l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonJson___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__32 = (const lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__32_value;
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__0_value)}};
static const lean_object* l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__0 = (const lean_object*)&l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__0_value;
static const lean_ctor_object l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__1 = (const lean_object*)&l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Widget_TaggedText_instInhabitedTaggedState_default = (const lean_object*)&l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__1_value;
LEAN_EXPORT const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instInhabitedTaggedState = (const lean_object*)&l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__1(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1___boxed__const__1;
static lean_once_cell_t l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__5(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__0 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__0_value;
static const lean_closure_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__1 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__1_value;
static const lean_closure_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__2 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__2_value;
static const lean_closure_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__4, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__3 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__3_value;
static const lean_closure_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__5, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__4 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__4_value;
static const lean_closure_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__4_value)} };
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__5 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__5_value;
static const lean_closure_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_get, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value)} };
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__6 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__6_value;
static const lean_closure_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*7, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateT_bind, .m_arity = 8, .m_num_fixed = 7, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__6_value),((lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__2_value)} };
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__7 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__7_value;
static const lean_ctor_object l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__0_value),((lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__1_value),((lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__7_value),((lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__3_value),((lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__5_value)}};
static const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__8 = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__8_value;
LEAN_EXPORT const lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState = (const lean_object*)&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___closed__8_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__2(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__5___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__5(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__1;
static const lean_string_object l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "unreachable"};
static const lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_prettyTagged(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_prettyTagged___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_stripTags_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_stripTags_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_stripTags___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_stripTags(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorIdx___impl___redArg(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorIdx___impl___redArg___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Widget_TaggedText_ctorIdx___impl___redArg(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorIdx___impl(lean_object* v_00_u03b1_5_, lean_object* v_x_6_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_tag_nat(v_x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorIdx___impl___boxed(lean_object* v_00_u03b1_8_, lean_object* v_x_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_Widget_TaggedText_ctorIdx___impl(v_00_u03b1_8_, v_x_9_);
lean_dec_ref(v_x_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorElim___redArg(lean_object* v_t_11_, lean_object* v_k_12_){
_start:
{
if (lean_obj_tag(v_t_11_) == 2)
{
lean_object* v_a_13_; lean_object* v_a_14_; lean_object* v___x_15_; 
v_a_13_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_a_13_);
v_a_14_ = lean_ctor_get(v_t_11_, 1);
lean_inc_ref(v_a_14_);
lean_dec_ref_known(v_t_11_, 2);
v___x_15_ = lean_apply_2(v_k_12_, v_a_13_, v_a_14_);
return v___x_15_;
}
else
{
lean_object* v_a_16_; lean_object* v___x_17_; 
v_a_16_ = lean_ctor_get(v_t_11_, 0);
lean_inc_ref(v_a_16_);
lean_dec_ref(v_t_11_);
v___x_17_ = lean_apply_1(v_k_12_, v_a_16_);
return v___x_17_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorElim(lean_object* v_00_u03b1_18_, lean_object* v_motive__1_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_Widget_TaggedText_ctorElim___redArg(v_t_21_, v_k_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_ctorElim___boxed(lean_object* v_00_u03b1_25_, lean_object* v_motive__1_26_, lean_object* v_ctorIdx_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_k_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Lean_Widget_TaggedText_ctorElim(v_00_u03b1_25_, v_motive__1_26_, v_ctorIdx_27_, v_t_28_, v_h_29_, v_k_30_);
lean_dec(v_ctorIdx_27_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_text_elim___redArg(lean_object* v_t_32_, lean_object* v_text_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_Widget_TaggedText_ctorElim___redArg(v_t_32_, v_text_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_text_elim(lean_object* v_00_u03b1_35_, lean_object* v_motive__1_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_text_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_Widget_TaggedText_ctorElim___redArg(v_t_37_, v_text_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_append_elim___redArg(lean_object* v_t_41_, lean_object* v_append_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_Widget_TaggedText_ctorElim___redArg(v_t_41_, v_append_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_append_elim(lean_object* v_00_u03b1_44_, lean_object* v_motive__1_45_, lean_object* v_t_46_, lean_object* v_h_47_, lean_object* v_append_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l_Lean_Widget_TaggedText_ctorElim___redArg(v_t_46_, v_append_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_tag_elim___redArg(lean_object* v_t_50_, lean_object* v_tag_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lean_Widget_TaggedText_ctorElim___redArg(v_t_50_, v_tag_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_tag_elim(lean_object* v_00_u03b1_53_, lean_object* v_motive__1_54_, lean_object* v_t_55_, lean_object* v_h_56_, lean_object* v_tag_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_Widget_TaggedText_ctorElim___redArg(v_t_55_, v_tag_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText_default___redArg(){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = ((lean_object*)(l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__1));
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText_default___redArg___boxed(lean_object* v___dummy_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Lean_Widget_instInhabitedTaggedText_default___redArg();
return v_res_65_;
}
}
static lean_object* _init_l_Lean_Widget_instInhabitedTaggedText_default___closed__0(void){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_Lean_Widget_instInhabitedTaggedText_default___redArg();
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText_default(lean_object* v_00_u03b1_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_obj_once(&l_Lean_Widget_instInhabitedTaggedText_default___closed__0, &l_Lean_Widget_instInhabitedTaggedText_default___closed__0_once, _init_l_Lean_Widget_instInhabitedTaggedText_default___closed__0);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText___redArg(){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = lean_obj_once(&l_Lean_Widget_instInhabitedTaggedText_default___closed__0, &l_Lean_Widget_instInhabitedTaggedText_default___closed__0_once, _init_l_Lean_Widget_instInhabitedTaggedText_default___closed__0);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText___redArg___boxed(lean_object* v___dummy_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_Widget_instInhabitedTaggedText___redArg();
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instInhabitedTaggedText(lean_object* v_a_73_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_obj_once(&l_Lean_Widget_instInhabitedTaggedText_default___closed__0, &l_Lean_Widget_instInhabitedTaggedText_default___closed__0_once, _init_l_Lean_Widget_instInhabitedTaggedText_default___closed__0);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instBEqTaggedText_beq___redArg___boxed(lean_object* v_inst_75_, lean_object* v_x_76_, lean_object* v_x_77_){
_start:
{
uint8_t v_res_78_; lean_object* v_r_79_; 
v_res_78_ = l_Lean_Widget_instBEqTaggedText_beq___redArg(v_inst_75_, v_x_76_, v_x_77_);
v_r_79_ = lean_box(v_res_78_);
return v_r_79_;
}
}
LEAN_EXPORT uint8_t l_Lean_Widget_instBEqTaggedText_beq___redArg(lean_object* v_inst_80_, lean_object* v_x_81_, lean_object* v_x_82_){
_start:
{
switch(lean_obj_tag(v_x_81_))
{
case 0:
{
lean_dec_ref(v_inst_80_);
if (lean_obj_tag(v_x_82_) == 0)
{
lean_object* v_a_83_; lean_object* v_a_84_; uint8_t v___x_85_; 
v_a_83_ = lean_ctor_get(v_x_81_, 0);
lean_inc_ref(v_a_83_);
lean_dec_ref_known(v_x_81_, 1);
v_a_84_ = lean_ctor_get(v_x_82_, 0);
lean_inc_ref(v_a_84_);
lean_dec_ref_known(v_x_82_, 1);
v___x_85_ = lean_string_dec_eq(v_a_83_, v_a_84_);
lean_dec_ref(v_a_84_);
lean_dec_ref(v_a_83_);
return v___x_85_;
}
else
{
uint8_t v___x_86_; 
lean_dec_ref_known(v_x_81_, 1);
lean_dec_ref(v_x_82_);
v___x_86_ = 0;
return v___x_86_;
}
}
case 1:
{
if (lean_obj_tag(v_x_82_) == 1)
{
lean_object* v_a_87_; lean_object* v_a_88_; lean_object* v___x_89_; lean_object* v___x_90_; uint8_t v___x_91_; 
v_a_87_ = lean_ctor_get(v_x_81_, 0);
lean_inc_ref(v_a_87_);
lean_dec_ref_known(v_x_81_, 1);
v_a_88_ = lean_ctor_get(v_x_82_, 0);
lean_inc_ref(v_a_88_);
lean_dec_ref_known(v_x_82_, 1);
v___x_89_ = lean_array_get_size(v_a_87_);
v___x_90_ = lean_array_get_size(v_a_88_);
v___x_91_ = lean_nat_dec_eq(v___x_89_, v___x_90_);
if (v___x_91_ == 0)
{
lean_dec_ref(v_a_88_);
lean_dec_ref(v_a_87_);
lean_dec_ref(v_inst_80_);
return v___x_91_;
}
else
{
lean_object* v___x_92_; uint8_t v___x_93_; 
v___x_92_ = lean_alloc_closure((void*)(l_Lean_Widget_instBEqTaggedText_beq___redArg___boxed), 3, 1);
lean_closure_set(v___x_92_, 0, v_inst_80_);
v___x_93_ = l_Array_isEqvAux___redArg(v_a_87_, v_a_88_, v___x_92_, v___x_89_);
lean_dec_ref(v_a_88_);
lean_dec_ref(v_a_87_);
return v___x_93_;
}
}
else
{
uint8_t v___x_94_; 
lean_dec_ref_known(v_x_81_, 1);
lean_dec_ref(v_x_82_);
lean_dec_ref(v_inst_80_);
v___x_94_ = 0;
return v___x_94_;
}
}
default: 
{
if (lean_obj_tag(v_x_82_) == 2)
{
lean_object* v_a_95_; lean_object* v_a_96_; lean_object* v_a_97_; lean_object* v_a_98_; lean_object* v___x_99_; uint8_t v___x_100_; 
v_a_95_ = lean_ctor_get(v_x_81_, 0);
lean_inc(v_a_95_);
v_a_96_ = lean_ctor_get(v_x_81_, 1);
lean_inc_ref(v_a_96_);
lean_dec_ref_known(v_x_81_, 2);
v_a_97_ = lean_ctor_get(v_x_82_, 0);
lean_inc(v_a_97_);
v_a_98_ = lean_ctor_get(v_x_82_, 1);
lean_inc_ref(v_a_98_);
lean_dec_ref_known(v_x_82_, 2);
lean_inc_ref(v_inst_80_);
v___x_99_ = lean_apply_2(v_inst_80_, v_a_95_, v_a_97_);
v___x_100_ = lean_unbox(v___x_99_);
if (v___x_100_ == 0)
{
uint8_t v___x_101_; 
lean_dec_ref(v_a_98_);
lean_dec_ref(v_a_96_);
lean_dec_ref(v_inst_80_);
v___x_101_ = lean_unbox(v___x_99_);
return v___x_101_;
}
else
{
v_x_81_ = v_a_96_;
v_x_82_ = v_a_98_;
goto _start;
}
}
else
{
uint8_t v___x_103_; 
lean_dec_ref_known(v_x_81_, 2);
lean_dec_ref(v_x_82_);
lean_dec_ref(v_inst_80_);
v___x_103_ = 0;
return v___x_103_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Widget_instBEqTaggedText_beq(lean_object* v_00_u03b1_104_, lean_object* v_inst_105_, lean_object* v_x_106_, lean_object* v_x_107_){
_start:
{
uint8_t v___x_108_; 
v___x_108_ = l_Lean_Widget_instBEqTaggedText_beq___redArg(v_inst_105_, v_x_106_, v_x_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instBEqTaggedText_beq___boxed(lean_object* v_00_u03b1_109_, lean_object* v_inst_110_, lean_object* v_x_111_, lean_object* v_x_112_){
_start:
{
uint8_t v_res_113_; lean_object* v_r_114_; 
v_res_113_ = l_Lean_Widget_instBEqTaggedText_beq(v_00_u03b1_109_, v_inst_110_, v_x_111_, v_x_112_);
v_r_114_ = lean_box(v_res_113_);
return v_r_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instBEqTaggedText___redArg(lean_object* v_inst_115_){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = lean_alloc_closure((void*)(l_Lean_Widget_instBEqTaggedText_beq___boxed), 4, 2);
lean_closure_set(v___x_116_, 0, lean_box(0));
lean_closure_set(v___x_116_, 1, v_inst_115_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instBEqTaggedText(lean_object* v_00_u03b1_117_, lean_object* v_inst_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = lean_alloc_closure((void*)(l_Lean_Widget_instBEqTaggedText_beq___boxed), 4, 2);
lean_closure_set(v___x_119_, 0, lean_box(0));
lean_closure_set(v___x_119_, 1, v_inst_118_);
return v___x_119_;
}
}
static lean_object* _init_l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = lean_unsigned_to_nat(2u);
v___x_127_ = lean_nat_to_int(v___x_126_);
return v___x_127_;
}
}
static lean_object* _init_l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = lean_unsigned_to_nat(1u);
v___x_129_ = lean_nat_to_int(v___x_128_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg___boxed(lean_object* v_inst_142_, lean_object* v_x_143_, lean_object* v_prec_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Lean_Widget_instReprTaggedText_repr___redArg(v_inst_142_, v_x_143_, v_prec_144_);
lean_dec(v_prec_144_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText_repr___redArg(lean_object* v_inst_146_, lean_object* v_x_147_, lean_object* v_prec_148_){
_start:
{
switch(lean_obj_tag(v_x_147_))
{
case 0:
{
lean_object* v_a_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_169_; 
lean_dec_ref(v_inst_146_);
v_a_149_ = lean_ctor_get(v_x_147_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v_x_147_);
if (v_isSharedCheck_169_ == 0)
{
v___x_151_ = v_x_147_;
v_isShared_152_ = v_isSharedCheck_169_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_a_149_);
lean_dec(v_x_147_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_169_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___y_154_; lean_object* v___x_165_; uint8_t v___x_166_; 
v___x_165_ = lean_unsigned_to_nat(1024u);
v___x_166_ = lean_nat_dec_le(v___x_165_, v_prec_148_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; 
v___x_167_ = lean_obj_once(&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3, &l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3_once, _init_l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3);
v___y_154_ = v___x_167_;
goto v___jp_153_;
}
else
{
lean_object* v___x_168_; 
v___x_168_ = lean_obj_once(&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4, &l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4_once, _init_l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4);
v___y_154_ = v___x_168_;
goto v___jp_153_;
}
v___jp_153_:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_158_; 
v___x_155_ = ((lean_object*)(l_Lean_Widget_instReprTaggedText_repr___redArg___closed__2));
v___x_156_ = l_String_quote(v_a_149_);
if (v_isShared_152_ == 0)
{
lean_ctor_set_tag(v___x_151_, 3);
lean_ctor_set(v___x_151_, 0, v___x_156_);
v___x_158_ = v___x_151_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v___x_156_);
v___x_158_ = v_reuseFailAlloc_164_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
lean_object* v___x_159_; lean_object* v___x_160_; uint8_t v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_159_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_155_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
lean_inc(v___y_154_);
v___x_160_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_160_, 0, v___y_154_);
lean_ctor_set(v___x_160_, 1, v___x_159_);
v___x_161_ = 0;
v___x_162_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_162_, 0, v___x_160_);
lean_ctor_set_uint8(v___x_162_, sizeof(void*)*1, v___x_161_);
v___x_163_ = l_Repr_addAppParen(v___x_162_, v_prec_148_);
return v___x_163_;
}
}
}
}
case 1:
{
lean_object* v_a_170_; lean_object* v_localinst_171_; lean_object* v___y_173_; lean_object* v___x_181_; uint8_t v___x_182_; 
v_a_170_ = lean_ctor_get(v_x_147_, 0);
lean_inc_ref(v_a_170_);
lean_dec_ref_known(v_x_147_, 1);
v_localinst_171_ = lean_alloc_closure((void*)(l_Lean_Widget_instReprTaggedText_repr___redArg___boxed), 3, 1);
lean_closure_set(v_localinst_171_, 0, v_inst_146_);
v___x_181_ = lean_unsigned_to_nat(1024u);
v___x_182_ = lean_nat_dec_le(v___x_181_, v_prec_148_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; 
v___x_183_ = lean_obj_once(&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3, &l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3_once, _init_l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3);
v___y_173_ = v___x_183_;
goto v___jp_172_;
}
else
{
lean_object* v___x_184_; 
v___x_184_ = lean_obj_once(&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4, &l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4_once, _init_l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4);
v___y_173_ = v___x_184_;
goto v___jp_172_;
}
v___jp_172_:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; uint8_t v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_174_ = ((lean_object*)(l_Lean_Widget_instReprTaggedText_repr___redArg___closed__7));
v___x_175_ = l_Array_repr___redArg(v_localinst_171_, v_a_170_);
v___x_176_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_176_, 0, v___x_174_);
lean_ctor_set(v___x_176_, 1, v___x_175_);
lean_inc(v___y_173_);
v___x_177_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_177_, 0, v___y_173_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
v___x_178_ = 0;
v___x_179_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_179_, 0, v___x_177_);
lean_ctor_set_uint8(v___x_179_, sizeof(void*)*1, v___x_178_);
v___x_180_ = l_Repr_addAppParen(v___x_179_, v_prec_148_);
return v___x_180_;
}
}
default: 
{
lean_object* v_a_185_; lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_209_; 
v_a_185_ = lean_ctor_get(v_x_147_, 0);
v_a_186_ = lean_ctor_get(v_x_147_, 1);
v_isSharedCheck_209_ = !lean_is_exclusive(v_x_147_);
if (v_isSharedCheck_209_ == 0)
{
v___x_188_ = v_x_147_;
v_isShared_189_ = v_isSharedCheck_209_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_inc(v_a_185_);
lean_dec(v_x_147_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_209_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_190_; lean_object* v___y_192_; uint8_t v___x_206_; 
v___x_190_ = lean_unsigned_to_nat(1024u);
v___x_206_ = lean_nat_dec_le(v___x_190_, v_prec_148_);
if (v___x_206_ == 0)
{
lean_object* v___x_207_; 
v___x_207_ = lean_obj_once(&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3, &l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3_once, _init_l_Lean_Widget_instReprTaggedText_repr___redArg___closed__3);
v___y_192_ = v___x_207_;
goto v___jp_191_;
}
else
{
lean_object* v___x_208_; 
v___x_208_ = lean_obj_once(&l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4, &l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4_once, _init_l_Lean_Widget_instReprTaggedText_repr___redArg___closed__4);
v___y_192_ = v___x_208_;
goto v___jp_191_;
}
v___jp_191_:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_197_; 
v___x_193_ = lean_box(1);
v___x_194_ = ((lean_object*)(l_Lean_Widget_instReprTaggedText_repr___redArg___closed__10));
lean_inc_ref(v_inst_146_);
v___x_195_ = lean_apply_2(v_inst_146_, v_a_185_, v___x_190_);
if (v_isShared_189_ == 0)
{
lean_ctor_set_tag(v___x_188_, 5);
lean_ctor_set(v___x_188_, 1, v___x_195_);
lean_ctor_set(v___x_188_, 0, v___x_194_);
v___x_197_ = v___x_188_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v___x_194_);
lean_ctor_set(v_reuseFailAlloc_205_, 1, v___x_195_);
v___x_197_ = v_reuseFailAlloc_205_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; uint8_t v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_198_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
lean_ctor_set(v___x_198_, 1, v___x_193_);
v___x_199_ = l_Lean_Widget_instReprTaggedText_repr___redArg(v_inst_146_, v_a_186_, v___x_190_);
v___x_200_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_198_);
lean_ctor_set(v___x_200_, 1, v___x_199_);
lean_inc(v___y_192_);
v___x_201_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_201_, 0, v___y_192_);
lean_ctor_set(v___x_201_, 1, v___x_200_);
v___x_202_ = 0;
v___x_203_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_203_, 0, v___x_201_);
lean_ctor_set_uint8(v___x_203_, sizeof(void*)*1, v___x_202_);
v___x_204_ = l_Repr_addAppParen(v___x_203_, v_prec_148_);
return v___x_204_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText_repr(lean_object* v_00_u03b1_210_, lean_object* v_inst_211_, lean_object* v_x_212_, lean_object* v_prec_213_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = l_Lean_Widget_instReprTaggedText_repr___redArg(v_inst_211_, v_x_212_, v_prec_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText_repr___boxed(lean_object* v_00_u03b1_215_, lean_object* v_inst_216_, lean_object* v_x_217_, lean_object* v_prec_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_Widget_instReprTaggedText_repr(v_00_u03b1_215_, v_inst_216_, v_x_217_, v_prec_218_);
lean_dec(v_prec_218_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText___redArg(lean_object* v_inst_220_){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = lean_alloc_closure((void*)(l_Lean_Widget_instReprTaggedText_repr___boxed), 4, 2);
lean_closure_set(v___x_221_, 0, lean_box(0));
lean_closure_set(v___x_221_, 1, v_inst_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instReprTaggedText(lean_object* v_00_u03b1_222_, lean_object* v_inst_223_){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = lean_alloc_closure((void*)(l_Lean_Widget_instReprTaggedText_repr___boxed), 4, 2);
lean_closure_set(v___x_224_, 0, lean_box(0));
lean_closure_set(v___x_224_, 1, v_inst_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg(lean_object* v_inst_234_, lean_object* v_json_235_){
_start:
{
lean_object* v___x_236_; 
lean_inc(v_json_235_);
v___x_236_ = l_Lean_Json_getTag_x3f(v_json_235_);
if (lean_obj_tag(v___x_236_) == 0)
{
lean_object* v___x_237_; 
lean_dec(v_json_235_);
lean_dec_ref(v_inst_234_);
v___x_237_ = ((lean_object*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__1));
return v___x_237_;
}
else
{
lean_object* v_val_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_355_; 
v_val_238_ = lean_ctor_get(v___x_236_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_236_);
if (v_isSharedCheck_355_ == 0)
{
v___x_240_ = v___x_236_;
v_isShared_241_ = v_isSharedCheck_355_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_val_238_);
lean_dec(v___x_236_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_355_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_242_; lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_242_ = lean_box(0);
v___x_243_ = ((lean_object*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__2));
v___x_244_ = lean_string_dec_eq(v_val_238_, v___x_243_);
if (v___x_244_ == 0)
{
lean_object* v___x_245_; uint8_t v___x_246_; 
v___x_245_ = ((lean_object*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__3));
v___x_246_ = lean_string_dec_eq(v_val_238_, v___x_245_);
if (v___x_246_ == 0)
{
lean_object* v___x_247_; uint8_t v___x_248_; 
lean_del_object(v___x_240_);
v___x_247_ = ((lean_object*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__4));
v___x_248_ = lean_string_dec_eq(v_val_238_, v___x_247_);
lean_dec(v_val_238_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; 
lean_dec(v_json_235_);
lean_dec_ref(v_inst_234_);
v___x_249_ = ((lean_object*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__6));
return v___x_249_;
}
else
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_250_ = lean_unsigned_to_nat(2u);
v___x_251_ = lean_box(0);
v___x_252_ = l_Lean_Json_parseCtorFields(v_json_235_, v___x_247_, v___x_250_, v___x_251_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v_a_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_260_; 
lean_dec_ref(v_inst_234_);
v_a_253_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_260_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_260_ == 0)
{
v___x_255_ = v___x_252_;
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_a_253_);
lean_dec(v___x_252_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_258_; 
if (v_isShared_256_ == 0)
{
v___x_258_ = v___x_255_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_a_253_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
else
{
lean_object* v_a_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v_a_261_ = lean_ctor_get(v___x_252_, 0);
lean_inc(v_a_261_);
lean_dec_ref_known(v___x_252_, 1);
v___x_262_ = lean_unsigned_to_nat(0u);
v___x_263_ = lean_array_get_borrowed(v___x_242_, v_a_261_, v___x_262_);
lean_inc_ref(v_inst_234_);
lean_inc(v___x_263_);
v___x_264_ = lean_apply_1(v_inst_234_, v___x_263_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_272_; 
lean_dec(v_a_261_);
lean_dec_ref(v_inst_234_);
v_a_265_ = lean_ctor_get(v___x_264_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_272_ == 0)
{
v___x_267_ = v___x_264_;
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_dec(v___x_264_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_270_; 
if (v_isShared_268_ == 0)
{
v___x_270_ = v___x_267_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_a_265_);
v___x_270_ = v_reuseFailAlloc_271_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
return v___x_270_;
}
}
}
else
{
lean_object* v_a_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v_a_273_ = lean_ctor_get(v___x_264_, 0);
lean_inc(v_a_273_);
lean_dec_ref_known(v___x_264_, 1);
v___x_274_ = lean_unsigned_to_nat(1u);
v___x_275_ = lean_array_get(v___x_242_, v_a_261_, v___x_274_);
lean_dec(v_a_261_);
v___x_276_ = l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg(v_inst_234_, v___x_275_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_dec(v_a_273_);
return v___x_276_;
}
else
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_285_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_285_ == 0)
{
v___x_279_ = v___x_276_;
v_isShared_280_ = v_isSharedCheck_285_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_276_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_285_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_281_; lean_object* v___x_283_; 
v___x_281_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_281_, 0, v_a_273_);
lean_ctor_set(v___x_281_, 1, v_a_277_);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_281_);
v___x_283_ = v___x_279_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v___x_281_);
v___x_283_ = v_reuseFailAlloc_284_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
return v___x_283_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
lean_dec(v_val_238_);
lean_dec_ref(v_inst_234_);
v___x_286_ = lean_unsigned_to_nat(1u);
v___x_287_ = lean_box(0);
v___x_288_ = l_Lean_Json_parseCtorFields(v_json_235_, v___x_245_, v___x_286_, v___x_287_);
if (lean_obj_tag(v___x_288_) == 0)
{
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
lean_del_object(v___x_240_);
v_a_289_ = lean_ctor_get(v___x_288_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v___x_288_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_288_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_289_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
else
{
lean_object* v_a_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v_a_297_ = lean_ctor_get(v___x_288_, 0);
lean_inc(v_a_297_);
lean_dec_ref_known(v___x_288_, 1);
v___x_298_ = lean_unsigned_to_nat(0u);
v___x_299_ = lean_array_get(v___x_242_, v_a_297_, v___x_298_);
lean_dec(v_a_297_);
v___x_300_ = l_Lean_Json_getStr_x3f(v___x_299_);
if (lean_obj_tag(v___x_300_) == 0)
{
lean_object* v_a_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_308_; 
lean_del_object(v___x_240_);
v_a_301_ = lean_ctor_get(v___x_300_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v___x_300_);
if (v_isSharedCheck_308_ == 0)
{
v___x_303_ = v___x_300_;
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_a_301_);
lean_dec(v___x_300_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_306_; 
if (v_isShared_304_ == 0)
{
v___x_306_ = v___x_303_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_a_301_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
}
else
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_319_; 
v_a_309_ = lean_ctor_get(v___x_300_, 0);
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_300_);
if (v_isSharedCheck_319_ == 0)
{
v___x_311_ = v___x_300_;
v_isShared_312_ = v_isSharedCheck_319_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_300_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_319_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_241_ == 0)
{
lean_ctor_set_tag(v___x_240_, 0);
lean_ctor_set(v___x_240_, 0, v_a_309_);
v___x_314_ = v___x_240_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_318_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
lean_object* v___x_316_; 
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 0, v___x_314_);
v___x_316_ = v___x_311_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v___x_314_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
lean_dec(v_val_238_);
v___x_320_ = lean_unsigned_to_nat(1u);
v___x_321_ = lean_box(0);
v___x_322_ = l_Lean_Json_parseCtorFields(v_json_235_, v___x_243_, v___x_320_, v___x_321_);
if (lean_obj_tag(v___x_322_) == 0)
{
lean_object* v_a_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_330_; 
lean_del_object(v___x_240_);
lean_dec_ref(v_inst_234_);
v_a_323_ = lean_ctor_get(v___x_322_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_322_);
if (v_isSharedCheck_330_ == 0)
{
v___x_325_ = v___x_322_;
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_a_323_);
lean_dec(v___x_322_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
if (v_isShared_326_ == 0)
{
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_a_323_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
else
{
lean_object* v_a_331_; lean_object* v_localinst_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v_a_331_ = lean_ctor_get(v___x_322_, 0);
lean_inc(v_a_331_);
lean_dec_ref_known(v___x_322_, 1);
v_localinst_332_ = lean_alloc_closure((void*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg), 2, 1);
lean_closure_set(v_localinst_332_, 0, v_inst_234_);
v___x_333_ = lean_unsigned_to_nat(0u);
v___x_334_ = lean_array_get(v___x_242_, v_a_331_, v___x_333_);
lean_dec(v_a_331_);
v___x_335_ = l_Lean_Array_fromJson_x3f___redArg(v_localinst_332_, v___x_334_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
lean_del_object(v___x_240_);
v_a_336_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_343_ == 0)
{
v___x_338_ = v___x_335_;
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_335_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_341_; 
if (v_isShared_339_ == 0)
{
v___x_341_ = v___x_338_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_336_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_354_; 
v_a_344_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_354_ == 0)
{
v___x_346_ = v___x_335_;
v_isShared_347_ = v_isSharedCheck_354_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_335_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_354_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 0, v_a_344_);
v___x_349_ = v___x_240_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_353_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
lean_object* v___x_351_; 
if (v_isShared_347_ == 0)
{
lean_ctor_set(v___x_346_, 0, v___x_349_);
v___x_351_ = v___x_346_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v___x_349_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
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
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonTaggedText_fromJson(lean_object* v_00_u03b1_356_, lean_object* v_inst_357_, lean_object* v_json_358_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg(v_inst_357_, v_json_358_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonTaggedText___redArg(lean_object* v_inst_360_){
_start:
{
lean_object* v___x_361_; 
v___x_361_ = lean_alloc_closure((void*)(l_Lean_Widget_instFromJsonTaggedText_fromJson), 3, 2);
lean_closure_set(v___x_361_, 0, lean_box(0));
lean_closure_set(v___x_361_, 1, v_inst_360_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instFromJsonTaggedText(lean_object* v_00_u03b1_362_, lean_object* v_inst_363_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = lean_alloc_closure((void*)(l_Lean_Widget_instFromJsonTaggedText_fromJson), 3, 2);
lean_closure_set(v___x_364_, 0, lean_box(0));
lean_closure_set(v___x_364_, 1, v_inst_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonTaggedText_toJson___redArg(lean_object* v_inst_365_, lean_object* v_x_366_){
_start:
{
switch(lean_obj_tag(v_x_366_))
{
case 0:
{
lean_object* v_a_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_379_; 
lean_dec_ref(v_inst_365_);
v_a_367_ = lean_ctor_get(v_x_366_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v_x_366_);
if (v_isSharedCheck_379_ == 0)
{
v___x_369_ = v_x_366_;
v_isShared_370_ = v_isSharedCheck_379_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_a_367_);
lean_dec(v_x_366_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_379_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_371_; lean_object* v___x_373_; 
v___x_371_ = ((lean_object*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__3));
if (v_isShared_370_ == 0)
{
lean_ctor_set_tag(v___x_369_, 3);
v___x_373_ = v___x_369_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_a_367_);
v___x_373_ = v_reuseFailAlloc_378_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_371_);
lean_ctor_set(v___x_374_, 1, v___x_373_);
v___x_375_ = lean_box(0);
v___x_376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_376_, 0, v___x_374_);
lean_ctor_set(v___x_376_, 1, v___x_375_);
v___x_377_ = l_Lean_Json_mkObj(v___x_376_);
lean_dec_ref_known(v___x_376_, 2);
return v___x_377_;
}
}
}
case 1:
{
lean_object* v_a_380_; lean_object* v_localinst_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v_a_380_ = lean_ctor_get(v_x_366_, 0);
lean_inc_ref(v_a_380_);
lean_dec_ref_known(v_x_366_, 1);
v_localinst_381_ = lean_alloc_closure((void*)(l_Lean_Widget_instToJsonTaggedText_toJson___redArg), 2, 1);
lean_closure_set(v_localinst_381_, 0, v_inst_365_);
v___x_382_ = ((lean_object*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__2));
v___x_383_ = l_Lean_Array_toJson___redArg(v_localinst_381_, v_a_380_);
v___x_384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_384_, 0, v___x_382_);
lean_ctor_set(v___x_384_, 1, v___x_383_);
v___x_385_ = lean_box(0);
v___x_386_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_384_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = l_Lean_Json_mkObj(v___x_386_);
lean_dec_ref_known(v___x_386_, 2);
return v___x_387_;
}
default: 
{
lean_object* v_a_388_; lean_object* v_a_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_407_; 
v_a_388_ = lean_ctor_get(v_x_366_, 0);
v_a_389_ = lean_ctor_get(v_x_366_, 1);
v_isSharedCheck_407_ = !lean_is_exclusive(v_x_366_);
if (v_isSharedCheck_407_ == 0)
{
v___x_391_ = v_x_366_;
v_isShared_392_ = v_isSharedCheck_407_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_a_389_);
lean_inc(v_a_388_);
lean_dec(v_x_366_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_407_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_402_; 
v___x_393_ = ((lean_object*)(l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg___closed__4));
lean_inc_ref(v_inst_365_);
v___x_394_ = lean_apply_1(v_inst_365_, v_a_388_);
v___x_395_ = l_Lean_Widget_instToJsonTaggedText_toJson___redArg(v_inst_365_, v_a_389_);
v___x_396_ = lean_unsigned_to_nat(2u);
v___x_397_ = lean_mk_empty_array_with_capacity(v___x_396_);
v___x_398_ = lean_array_push(v___x_397_, v___x_394_);
v___x_399_ = lean_array_push(v___x_398_, v___x_395_);
v___x_400_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
if (v_isShared_392_ == 0)
{
lean_ctor_set_tag(v___x_391_, 0);
lean_ctor_set(v___x_391_, 1, v___x_400_);
lean_ctor_set(v___x_391_, 0, v___x_393_);
v___x_402_ = v___x_391_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v___x_393_);
lean_ctor_set(v_reuseFailAlloc_406_, 1, v___x_400_);
v___x_402_ = v_reuseFailAlloc_406_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_403_ = lean_box(0);
v___x_404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_404_, 0, v___x_402_);
lean_ctor_set(v___x_404_, 1, v___x_403_);
v___x_405_ = l_Lean_Json_mkObj(v___x_404_);
lean_dec_ref_known(v___x_404_, 2);
return v___x_405_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonTaggedText_toJson(lean_object* v_00_u03b1_408_, lean_object* v_inst_409_, lean_object* v_x_410_){
_start:
{
lean_object* v___x_411_; 
v___x_411_ = l_Lean_Widget_instToJsonTaggedText_toJson___redArg(v_inst_409_, v_x_410_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonTaggedText___redArg(lean_object* v_inst_412_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = lean_alloc_closure((void*)(l_Lean_Widget_instToJsonTaggedText_toJson), 3, 2);
lean_closure_set(v___x_413_, 0, lean_box(0));
lean_closure_set(v___x_413_, 1, v_inst_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_instToJsonTaggedText(lean_object* v_00_u03b1_414_, lean_object* v_inst_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = lean_alloc_closure((void*)(l_Lean_Widget_instToJsonTaggedText_toJson), 3, 2);
lean_closure_set(v___x_416_, 0, lean_box(0));
lean_closure_set(v___x_416_, 1, v_inst_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_appendText___redArg(lean_object* v_s_u2080_417_, lean_object* v_x_418_){
_start:
{
switch(lean_obj_tag(v_x_418_))
{
case 0:
{
lean_object* v_a_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_427_; 
v_a_419_ = lean_ctor_get(v_x_418_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v_x_418_);
if (v_isSharedCheck_427_ == 0)
{
v___x_421_ = v_x_418_;
v_isShared_422_ = v_isSharedCheck_427_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_a_419_);
lean_dec(v_x_418_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_427_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___x_423_; lean_object* v___x_425_; 
v___x_423_ = lean_string_append(v_a_419_, v_s_u2080_417_);
lean_dec_ref(v_s_u2080_417_);
if (v_isShared_422_ == 0)
{
lean_ctor_set(v___x_421_, 0, v___x_423_);
v___x_425_ = v___x_421_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v___x_423_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
case 1:
{
lean_object* v_a_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_455_; 
v_a_428_ = lean_ctor_get(v_x_418_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v_x_418_);
if (v_isSharedCheck_455_ == 0)
{
v___x_430_ = v_x_418_;
v_isShared_431_ = v_isSharedCheck_455_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_a_428_);
lean_dec(v_x_418_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_455_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_432_ = lean_obj_once(&l_Lean_Widget_instInhabitedTaggedText_default___closed__0, &l_Lean_Widget_instInhabitedTaggedText_default___closed__0_once, _init_l_Lean_Widget_instInhabitedTaggedText_default___closed__0);
v___x_433_ = lean_array_get_size(v_a_428_);
v___x_434_ = lean_unsigned_to_nat(1u);
v___x_435_ = lean_nat_sub(v___x_433_, v___x_434_);
v___x_436_ = lean_array_get(v___x_432_, v_a_428_, v___x_435_);
if (lean_obj_tag(v___x_436_) == 0)
{
lean_object* v_a_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_449_; 
v_a_437_ = lean_ctor_get(v___x_436_, 0);
v_isSharedCheck_449_ = !lean_is_exclusive(v___x_436_);
if (v_isSharedCheck_449_ == 0)
{
v___x_439_ = v___x_436_;
v_isShared_440_ = v_isSharedCheck_449_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_a_437_);
lean_dec(v___x_436_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_449_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_441_; lean_object* v___x_443_; 
v___x_441_ = lean_string_append(v_a_437_, v_s_u2080_417_);
lean_dec_ref(v_s_u2080_417_);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 0, v___x_441_);
v___x_443_ = v___x_439_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v___x_441_);
v___x_443_ = v_reuseFailAlloc_448_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
lean_object* v___x_444_; lean_object* v___x_446_; 
v___x_444_ = lean_array_set(v_a_428_, v___x_435_, v___x_443_);
lean_dec(v___x_435_);
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 0, v___x_444_);
v___x_446_ = v___x_430_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v___x_444_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
else
{
lean_object* v___x_451_; 
lean_dec(v___x_436_);
lean_dec(v___x_435_);
if (v_isShared_431_ == 0)
{
lean_ctor_set_tag(v___x_430_, 0);
lean_ctor_set(v___x_430_, 0, v_s_u2080_417_);
v___x_451_ = v___x_430_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_s_u2080_417_);
v___x_451_ = v_reuseFailAlloc_454_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_452_ = lean_array_push(v_a_428_, v___x_451_);
v___x_453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_453_, 0, v___x_452_);
return v___x_453_;
}
}
}
}
default: 
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_456_, 0, v_s_u2080_417_);
v___x_457_ = lean_unsigned_to_nat(2u);
v___x_458_ = lean_mk_empty_array_with_capacity(v___x_457_);
v___x_459_ = lean_array_push(v___x_458_, v_x_418_);
v___x_460_ = lean_array_push(v___x_459_, v___x_456_);
v___x_461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_461_, 0, v___x_460_);
return v___x_461_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_appendText(lean_object* v_00_u03b1_462_, lean_object* v_s_u2080_463_, lean_object* v_x_464_){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = l_Lean_Widget_TaggedText_appendText___redArg(v_s_u2080_463_, v_x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_appendTag___redArg(lean_object* v_acc_466_, lean_object* v_t_u2080_467_, lean_object* v_a_u2080_468_){
_start:
{
lean_object* v_a_470_; 
switch(lean_obj_tag(v_acc_466_))
{
case 1:
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_486_; 
v_a_477_ = lean_ctor_get(v_acc_466_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v_acc_466_);
if (v_isSharedCheck_486_ == 0)
{
v___x_479_ = v_acc_466_;
v_isShared_480_ = v_isSharedCheck_486_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v_acc_466_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_486_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_484_; 
v___x_481_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_481_, 0, v_t_u2080_467_);
lean_ctor_set(v___x_481_, 1, v_a_u2080_468_);
v___x_482_ = lean_array_push(v_a_477_, v___x_481_);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 0, v___x_482_);
v___x_484_ = v___x_479_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v___x_482_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
return v___x_484_;
}
}
}
case 0:
{
lean_object* v_a_487_; lean_object* v___x_488_; uint8_t v___x_489_; 
v_a_487_ = lean_ctor_get(v_acc_466_, 0);
v___x_488_ = ((lean_object*)(l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__0));
v___x_489_ = lean_string_dec_eq(v_a_487_, v___x_488_);
if (v___x_489_ == 0)
{
v_a_470_ = v_acc_466_;
goto v___jp_469_;
}
else
{
lean_object* v___x_490_; 
lean_dec_ref_known(v_acc_466_, 1);
v___x_490_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_490_, 0, v_t_u2080_467_);
lean_ctor_set(v___x_490_, 1, v_a_u2080_468_);
return v___x_490_;
}
}
default: 
{
v_a_470_ = v_acc_466_;
goto v___jp_469_;
}
}
v___jp_469_:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_471_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_471_, 0, v_t_u2080_467_);
lean_ctor_set(v___x_471_, 1, v_a_u2080_468_);
v___x_472_ = lean_unsigned_to_nat(2u);
v___x_473_ = lean_mk_empty_array_with_capacity(v___x_472_);
v___x_474_ = lean_array_push(v___x_473_, v_a_470_);
v___x_475_ = lean_array_push(v___x_474_, v___x_471_);
v___x_476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
return v___x_476_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_appendTag(lean_object* v_00_u03b1_491_, lean_object* v_acc_492_, lean_object* v_t_u2080_493_, lean_object* v_a_u2080_494_){
_start:
{
lean_object* v___x_495_; 
v___x_495_ = l_Lean_Widget_TaggedText_appendTag___redArg(v_acc_492_, v_t_u2080_493_, v_a_u2080_494_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0___redArg(lean_object* v_f_496_, size_t v_sz_497_, size_t v_i_498_, lean_object* v_bs_499_){
_start:
{
uint8_t v___x_500_; 
v___x_500_ = lean_usize_dec_lt(v_i_498_, v_sz_497_);
if (v___x_500_ == 0)
{
lean_dec(v_f_496_);
return v_bs_499_;
}
else
{
lean_object* v_v_501_; lean_object* v___x_502_; lean_object* v_bs_x27_503_; lean_object* v___x_504_; size_t v___x_505_; size_t v___x_506_; lean_object* v___x_507_; 
v_v_501_ = lean_array_uget(v_bs_499_, v_i_498_);
v___x_502_ = lean_unsigned_to_nat(0u);
v_bs_x27_503_ = lean_array_uset(v_bs_499_, v_i_498_, v___x_502_);
lean_inc(v_f_496_);
v___x_504_ = l_Lean_Widget_TaggedText_map___redArg(v_f_496_, v_v_501_);
v___x_505_ = ((size_t)1ULL);
v___x_506_ = lean_usize_add(v_i_498_, v___x_505_);
v___x_507_ = lean_array_uset(v_bs_x27_503_, v_i_498_, v___x_504_);
v_i_498_ = v___x_506_;
v_bs_499_ = v___x_507_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_map___redArg(lean_object* v_f_509_, lean_object* v_x_510_){
_start:
{
switch(lean_obj_tag(v_x_510_))
{
case 0:
{
lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_518_; 
lean_dec(v_f_509_);
v_a_511_ = lean_ctor_get(v_x_510_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v_x_510_);
if (v_isSharedCheck_518_ == 0)
{
v___x_513_ = v_x_510_;
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v_x_510_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_a_511_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
case 1:
{
lean_object* v_a_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_529_; 
v_a_519_ = lean_ctor_get(v_x_510_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v_x_510_);
if (v_isSharedCheck_529_ == 0)
{
v___x_521_ = v_x_510_;
v_isShared_522_ = v_isSharedCheck_529_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_a_519_);
lean_dec(v_x_510_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_529_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
size_t v_sz_523_; size_t v___x_524_; lean_object* v___x_525_; lean_object* v___x_527_; 
v_sz_523_ = lean_array_size(v_a_519_);
v___x_524_ = ((size_t)0ULL);
v___x_525_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0___redArg(v_f_509_, v_sz_523_, v___x_524_, v_a_519_);
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 0, v___x_525_);
v___x_527_ = v___x_521_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v___x_525_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
}
default: 
{
lean_object* v_a_530_; lean_object* v_a_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_540_; 
v_a_530_ = lean_ctor_get(v_x_510_, 0);
v_a_531_ = lean_ctor_get(v_x_510_, 1);
v_isSharedCheck_540_ = !lean_is_exclusive(v_x_510_);
if (v_isSharedCheck_540_ == 0)
{
v___x_533_ = v_x_510_;
v_isShared_534_ = v_isSharedCheck_540_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_a_531_);
lean_inc(v_a_530_);
lean_dec(v_x_510_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_540_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_538_; 
lean_inc(v_f_509_);
v___x_535_ = lean_apply_1(v_f_509_, v_a_530_);
v___x_536_ = l_Lean_Widget_TaggedText_map___redArg(v_f_509_, v_a_531_);
if (v_isShared_534_ == 0)
{
lean_ctor_set(v___x_533_, 1, v___x_536_);
lean_ctor_set(v___x_533_, 0, v___x_535_);
v___x_538_ = v___x_533_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v___x_535_);
lean_ctor_set(v_reuseFailAlloc_539_, 1, v___x_536_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0___redArg___boxed(lean_object* v_f_541_, lean_object* v_sz_542_, lean_object* v_i_543_, lean_object* v_bs_544_){
_start:
{
size_t v_sz_boxed_545_; size_t v_i_boxed_546_; lean_object* v_res_547_; 
v_sz_boxed_545_ = lean_unbox_usize(v_sz_542_);
lean_dec(v_sz_542_);
v_i_boxed_546_ = lean_unbox_usize(v_i_543_);
lean_dec(v_i_543_);
v_res_547_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0___redArg(v_f_541_, v_sz_boxed_545_, v_i_boxed_546_, v_bs_544_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_map(lean_object* v_00_u03b1_548_, lean_object* v_00_u03b2_549_, lean_object* v_f_550_, lean_object* v_x_551_){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = l_Lean_Widget_TaggedText_map___redArg(v_f_550_, v_x_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0(lean_object* v_00_u03b1_553_, lean_object* v_00_u03b2_554_, lean_object* v_f_555_, size_t v_sz_556_, size_t v_i_557_, lean_object* v_bs_558_){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0___redArg(v_f_555_, v_sz_556_, v_i_557_, v_bs_558_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0___boxed(lean_object* v_00_u03b1_560_, lean_object* v_00_u03b2_561_, lean_object* v_f_562_, lean_object* v_sz_563_, lean_object* v_i_564_, lean_object* v_bs_565_){
_start:
{
size_t v_sz_boxed_566_; size_t v_i_boxed_567_; lean_object* v_res_568_; 
v_sz_boxed_566_ = lean_unbox_usize(v_sz_563_);
lean_dec(v_sz_563_);
v_i_boxed_567_ = lean_unbox_usize(v_i_564_);
lean_dec(v_i_564_);
v_res_568_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_map_spec__0(v_00_u03b1_560_, v_00_u03b2_561_, v_f_562_, v_sz_boxed_566_, v_i_boxed_567_, v_bs_565_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___redArg___lam__0(lean_object* v_toPure_569_, lean_object* v_____do__lift_570_){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_571_, 0, v_____do__lift_570_);
v___x_572_ = lean_apply_2(v_toPure_569_, lean_box(0), v___x_571_);
return v___x_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___redArg___lam__1(lean_object* v_____do__lift_573_, lean_object* v_toPure_574_, lean_object* v_____do__lift_575_){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_576_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_576_, 0, v_____do__lift_573_);
lean_ctor_set(v___x_576_, 1, v_____do__lift_575_);
v___x_577_ = lean_apply_2(v_toPure_574_, lean_box(0), v___x_576_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___redArg(lean_object* v_inst_578_, lean_object* v_f_579_, lean_object* v_x_580_){
_start:
{
switch(lean_obj_tag(v_x_580_))
{
case 0:
{
lean_object* v_toApplicative_581_; lean_object* v_toPure_582_; lean_object* v_a_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_591_; 
v_toApplicative_581_ = lean_ctor_get(v_inst_578_, 0);
lean_inc_ref(v_toApplicative_581_);
lean_dec(v_f_579_);
lean_dec_ref(v_inst_578_);
v_toPure_582_ = lean_ctor_get(v_toApplicative_581_, 1);
lean_inc(v_toPure_582_);
lean_dec_ref(v_toApplicative_581_);
v_a_583_ = lean_ctor_get(v_x_580_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v_x_580_);
if (v_isSharedCheck_591_ == 0)
{
v___x_585_ = v_x_580_;
v_isShared_586_ = v_isSharedCheck_591_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_a_583_);
lean_dec(v_x_580_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_591_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_588_; 
if (v_isShared_586_ == 0)
{
v___x_588_ = v___x_585_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_a_583_);
v___x_588_ = v_reuseFailAlloc_590_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
lean_object* v___x_589_; 
v___x_589_ = lean_apply_2(v_toPure_582_, lean_box(0), v___x_588_);
return v___x_589_;
}
}
}
case 1:
{
lean_object* v_toApplicative_592_; lean_object* v_toBind_593_; lean_object* v_toPure_594_; lean_object* v_a_595_; lean_object* v___f_596_; lean_object* v___x_597_; size_t v_sz_598_; size_t v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v_toApplicative_592_ = lean_ctor_get(v_inst_578_, 0);
v_toBind_593_ = lean_ctor_get(v_inst_578_, 1);
lean_inc(v_toBind_593_);
v_toPure_594_ = lean_ctor_get(v_toApplicative_592_, 1);
v_a_595_ = lean_ctor_get(v_x_580_, 0);
lean_inc_ref(v_a_595_);
lean_dec_ref_known(v_x_580_, 1);
lean_inc(v_toPure_594_);
v___f_596_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_mapM___redArg___lam__0), 2, 1);
lean_closure_set(v___f_596_, 0, v_toPure_594_);
lean_inc_ref(v_inst_578_);
v___x_597_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_mapM___redArg), 3, 2);
lean_closure_set(v___x_597_, 0, v_inst_578_);
lean_closure_set(v___x_597_, 1, v_f_579_);
v_sz_598_ = lean_array_size(v_a_595_);
v___x_599_ = ((size_t)0ULL);
v___x_600_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_578_, v___x_597_, v_sz_598_, v___x_599_, v_a_595_);
v___x_601_ = lean_apply_4(v_toBind_593_, lean_box(0), lean_box(0), v___x_600_, v___f_596_);
return v___x_601_;
}
default: 
{
lean_object* v_toApplicative_602_; lean_object* v_toBind_603_; lean_object* v_toPure_604_; lean_object* v_a_605_; lean_object* v_a_606_; lean_object* v___f_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v_toApplicative_602_ = lean_ctor_get(v_inst_578_, 0);
v_toBind_603_ = lean_ctor_get(v_inst_578_, 1);
lean_inc_n(v_toBind_603_, 2);
v_toPure_604_ = lean_ctor_get(v_toApplicative_602_, 1);
lean_inc(v_toPure_604_);
v_a_605_ = lean_ctor_get(v_x_580_, 0);
lean_inc(v_a_605_);
v_a_606_ = lean_ctor_get(v_x_580_, 1);
lean_inc_ref(v_a_606_);
lean_dec_ref_known(v_x_580_, 2);
lean_inc(v_f_579_);
v___f_607_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_mapM___redArg___lam__2), 6, 5);
lean_closure_set(v___f_607_, 0, v_toPure_604_);
lean_closure_set(v___f_607_, 1, v_inst_578_);
lean_closure_set(v___f_607_, 2, v_f_579_);
lean_closure_set(v___f_607_, 3, v_a_606_);
lean_closure_set(v___f_607_, 4, v_toBind_603_);
v___x_608_ = lean_apply_1(v_f_579_, v_a_605_);
v___x_609_ = lean_apply_4(v_toBind_603_, lean_box(0), lean_box(0), v___x_608_, v___f_607_);
return v___x_609_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___redArg___lam__2(lean_object* v_toPure_610_, lean_object* v_inst_611_, lean_object* v_f_612_, lean_object* v_a_613_, lean_object* v_toBind_614_, lean_object* v_____do__lift_615_){
_start:
{
lean_object* v___f_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v___f_616_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_mapM___redArg___lam__1), 3, 2);
lean_closure_set(v___f_616_, 0, v_____do__lift_615_);
lean_closure_set(v___f_616_, 1, v_toPure_610_);
v___x_617_ = l_Lean_Widget_TaggedText_mapM___redArg(v_inst_611_, v_f_612_, v_a_613_);
v___x_618_ = lean_apply_4(v_toBind_614_, lean_box(0), lean_box(0), v___x_617_, v___f_616_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM(lean_object* v_m_619_, lean_object* v_00_u03b1_620_, lean_object* v_00_u03b2_621_, lean_object* v_inst_622_, lean_object* v_f_623_, lean_object* v_x_624_){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = l_Lean_Widget_TaggedText_mapM___redArg(v_inst_622_, v_f_623_, v_x_624_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_forM___redArg___lam__1(lean_object* v_inst_626_, lean_object* v_f_627_, lean_object* v_a_628_, lean_object* v_____r_629_){
_start:
{
lean_object* v___x_630_; 
v___x_630_ = l_Lean_Widget_TaggedText_forM___redArg(v_inst_626_, v_f_627_, v_a_628_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_forM___redArg(lean_object* v_inst_631_, lean_object* v_f_632_, lean_object* v_x_633_){
_start:
{
switch(lean_obj_tag(v_x_633_))
{
case 0:
{
lean_object* v_toApplicative_634_; lean_object* v_toPure_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v_toApplicative_634_ = lean_ctor_get(v_inst_631_, 0);
lean_inc_ref(v_toApplicative_634_);
lean_dec_ref_known(v_x_633_, 1);
lean_dec(v_f_632_);
lean_dec_ref(v_inst_631_);
v_toPure_635_ = lean_ctor_get(v_toApplicative_634_, 1);
lean_inc(v_toPure_635_);
lean_dec_ref(v_toApplicative_634_);
v___x_636_ = lean_box(0);
v___x_637_ = lean_apply_2(v_toPure_635_, lean_box(0), v___x_636_);
return v___x_637_;
}
case 1:
{
lean_object* v_toApplicative_638_; lean_object* v_toPure_639_; lean_object* v_a_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; uint8_t v___x_644_; 
v_toApplicative_638_ = lean_ctor_get(v_inst_631_, 0);
v_toPure_639_ = lean_ctor_get(v_toApplicative_638_, 1);
v_a_640_ = lean_ctor_get(v_x_633_, 0);
lean_inc_ref(v_a_640_);
lean_dec_ref_known(v_x_633_, 1);
v___x_641_ = lean_unsigned_to_nat(0u);
v___x_642_ = lean_array_get_size(v_a_640_);
v___x_643_ = lean_box(0);
v___x_644_ = lean_nat_dec_lt(v___x_641_, v___x_642_);
if (v___x_644_ == 0)
{
lean_object* v___x_645_; 
lean_inc(v_toPure_639_);
lean_dec_ref(v_a_640_);
lean_dec(v_f_632_);
lean_dec_ref(v_inst_631_);
v___x_645_ = lean_apply_2(v_toPure_639_, lean_box(0), v___x_643_);
return v___x_645_;
}
else
{
lean_object* v___f_646_; size_t v___x_647_; size_t v___x_648_; lean_object* v___x_649_; 
lean_inc_ref(v_inst_631_);
v___f_646_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_forM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_646_, 0, v_inst_631_);
lean_closure_set(v___f_646_, 1, v_f_632_);
v___x_647_ = ((size_t)0ULL);
v___x_648_ = lean_usize_of_nat(v___x_642_);
v___x_649_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_631_, v___f_646_, v_a_640_, v___x_647_, v___x_648_, v___x_643_);
return v___x_649_;
}
}
default: 
{
lean_object* v_toBind_650_; lean_object* v_a_651_; lean_object* v_a_652_; lean_object* v___f_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v_toBind_650_ = lean_ctor_get(v_inst_631_, 1);
lean_inc(v_toBind_650_);
v_a_651_ = lean_ctor_get(v_x_633_, 0);
lean_inc(v_a_651_);
v_a_652_ = lean_ctor_get(v_x_633_, 1);
lean_inc_ref_n(v_a_652_, 2);
lean_dec_ref_known(v_x_633_, 2);
lean_inc(v_f_632_);
v___f_653_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_forM___redArg___lam__1), 4, 3);
lean_closure_set(v___f_653_, 0, v_inst_631_);
lean_closure_set(v___f_653_, 1, v_f_632_);
lean_closure_set(v___f_653_, 2, v_a_652_);
v___x_654_ = lean_apply_2(v_f_632_, v_a_651_, v_a_652_);
v___x_655_ = lean_apply_4(v_toBind_650_, lean_box(0), lean_box(0), v___x_654_, v___f_653_);
return v___x_655_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_forM___redArg___lam__0(lean_object* v_inst_656_, lean_object* v_f_657_, lean_object* v_x_658_, lean_object* v___y_659_){
_start:
{
lean_object* v___x_660_; 
v___x_660_ = l_Lean_Widget_TaggedText_forM___redArg(v_inst_656_, v_f_657_, v___y_659_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_forM(lean_object* v_m_661_, lean_object* v_00_u03b1_662_, lean_object* v_inst_663_, lean_object* v_f_664_, lean_object* v_x_665_){
_start:
{
lean_object* v___x_666_; 
v___x_666_ = l_Lean_Widget_TaggedText_forM___redArg(v_inst_663_, v_f_664_, v_x_665_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0___redArg(lean_object* v_f_667_, size_t v_sz_668_, size_t v_i_669_, lean_object* v_bs_670_){
_start:
{
uint8_t v___x_671_; 
v___x_671_ = lean_usize_dec_lt(v_i_669_, v_sz_668_);
if (v___x_671_ == 0)
{
lean_dec_ref(v_f_667_);
return v_bs_670_;
}
else
{
lean_object* v_v_672_; lean_object* v___x_673_; lean_object* v_bs_x27_674_; lean_object* v___x_675_; size_t v___x_676_; size_t v___x_677_; lean_object* v___x_678_; 
v_v_672_ = lean_array_uget(v_bs_670_, v_i_669_);
v___x_673_ = lean_unsigned_to_nat(0u);
v_bs_x27_674_ = lean_array_uset(v_bs_670_, v_i_669_, v___x_673_);
lean_inc_ref(v_f_667_);
v___x_675_ = l_Lean_Widget_TaggedText_rewrite___redArg(v_f_667_, v_v_672_);
v___x_676_ = ((size_t)1ULL);
v___x_677_ = lean_usize_add(v_i_669_, v___x_676_);
v___x_678_ = lean_array_uset(v_bs_x27_674_, v_i_669_, v___x_675_);
v_i_669_ = v___x_677_;
v_bs_670_ = v___x_678_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewrite___redArg(lean_object* v_f_680_, lean_object* v_x_681_){
_start:
{
switch(lean_obj_tag(v_x_681_))
{
case 0:
{
lean_object* v_a_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_689_; 
lean_dec_ref(v_f_680_);
v_a_682_ = lean_ctor_get(v_x_681_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v_x_681_);
if (v_isSharedCheck_689_ == 0)
{
v___x_684_ = v_x_681_;
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_a_682_);
lean_dec(v_x_681_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_687_; 
if (v_isShared_685_ == 0)
{
v___x_687_ = v___x_684_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_a_682_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
case 1:
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_700_; 
v_a_690_ = lean_ctor_get(v_x_681_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v_x_681_);
if (v_isSharedCheck_700_ == 0)
{
v___x_692_ = v_x_681_;
v_isShared_693_ = v_isSharedCheck_700_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v_x_681_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_700_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
size_t v_sz_694_; size_t v___x_695_; lean_object* v___x_696_; lean_object* v___x_698_; 
v_sz_694_ = lean_array_size(v_a_690_);
v___x_695_ = ((size_t)0ULL);
v___x_696_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0___redArg(v_f_680_, v_sz_694_, v___x_695_, v_a_690_);
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 0, v___x_696_);
v___x_698_ = v___x_692_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v___x_696_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
default: 
{
lean_object* v_a_701_; lean_object* v_a_702_; lean_object* v___x_703_; 
v_a_701_ = lean_ctor_get(v_x_681_, 0);
lean_inc(v_a_701_);
v_a_702_ = lean_ctor_get(v_x_681_, 1);
lean_inc_ref(v_a_702_);
lean_dec_ref_known(v_x_681_, 2);
v___x_703_ = lean_apply_2(v_f_680_, v_a_701_, v_a_702_);
return v___x_703_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0___redArg___boxed(lean_object* v_f_704_, lean_object* v_sz_705_, lean_object* v_i_706_, lean_object* v_bs_707_){
_start:
{
size_t v_sz_boxed_708_; size_t v_i_boxed_709_; lean_object* v_res_710_; 
v_sz_boxed_708_ = lean_unbox_usize(v_sz_705_);
lean_dec(v_sz_705_);
v_i_boxed_709_ = lean_unbox_usize(v_i_706_);
lean_dec(v_i_706_);
v_res_710_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0___redArg(v_f_704_, v_sz_boxed_708_, v_i_boxed_709_, v_bs_707_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewrite(lean_object* v_00_u03b1_711_, lean_object* v_00_u03b2_712_, lean_object* v_f_713_, lean_object* v_x_714_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l_Lean_Widget_TaggedText_rewrite___redArg(v_f_713_, v_x_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0(lean_object* v_00_u03b1_716_, lean_object* v_00_u03b2_717_, lean_object* v_f_718_, size_t v_sz_719_, size_t v_i_720_, lean_object* v_bs_721_){
_start:
{
lean_object* v___x_722_; 
v___x_722_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0___redArg(v_f_718_, v_sz_719_, v_i_720_, v_bs_721_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0___boxed(lean_object* v_00_u03b1_723_, lean_object* v_00_u03b2_724_, lean_object* v_f_725_, lean_object* v_sz_726_, lean_object* v_i_727_, lean_object* v_bs_728_){
_start:
{
size_t v_sz_boxed_729_; size_t v_i_boxed_730_; lean_object* v_res_731_; 
v_sz_boxed_729_ = lean_unbox_usize(v_sz_726_);
lean_dec(v_sz_726_);
v_i_boxed_730_ = lean_unbox_usize(v_i_727_);
lean_dec(v_i_727_);
v_res_731_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_rewrite_spec__0(v_00_u03b1_723_, v_00_u03b2_724_, v_f_725_, v_sz_boxed_729_, v_i_boxed_730_, v_bs_728_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewriteM___redArg(lean_object* v_inst_732_, lean_object* v_f_733_, lean_object* v_x_734_){
_start:
{
switch(lean_obj_tag(v_x_734_))
{
case 0:
{
lean_object* v_toApplicative_735_; lean_object* v_toPure_736_; lean_object* v_a_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_745_; 
v_toApplicative_735_ = lean_ctor_get(v_inst_732_, 0);
lean_inc_ref(v_toApplicative_735_);
lean_dec(v_f_733_);
lean_dec_ref(v_inst_732_);
v_toPure_736_ = lean_ctor_get(v_toApplicative_735_, 1);
lean_inc(v_toPure_736_);
lean_dec_ref(v_toApplicative_735_);
v_a_737_ = lean_ctor_get(v_x_734_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v_x_734_);
if (v_isSharedCheck_745_ == 0)
{
v___x_739_ = v_x_734_;
v_isShared_740_ = v_isSharedCheck_745_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_a_737_);
lean_dec(v_x_734_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_745_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_742_; 
if (v_isShared_740_ == 0)
{
v___x_742_ = v___x_739_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_a_737_);
v___x_742_ = v_reuseFailAlloc_744_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
lean_object* v___x_743_; 
v___x_743_ = lean_apply_2(v_toPure_736_, lean_box(0), v___x_742_);
return v___x_743_;
}
}
}
case 1:
{
lean_object* v_toApplicative_746_; lean_object* v_toBind_747_; lean_object* v_toPure_748_; lean_object* v_a_749_; lean_object* v___f_750_; lean_object* v___x_751_; size_t v_sz_752_; size_t v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v_toApplicative_746_ = lean_ctor_get(v_inst_732_, 0);
v_toBind_747_ = lean_ctor_get(v_inst_732_, 1);
lean_inc(v_toBind_747_);
v_toPure_748_ = lean_ctor_get(v_toApplicative_746_, 1);
v_a_749_ = lean_ctor_get(v_x_734_, 0);
lean_inc_ref(v_a_749_);
lean_dec_ref_known(v_x_734_, 1);
lean_inc(v_toPure_748_);
v___f_750_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_mapM___redArg___lam__0), 2, 1);
lean_closure_set(v___f_750_, 0, v_toPure_748_);
lean_inc_ref(v_inst_732_);
v___x_751_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_rewriteM___redArg), 3, 2);
lean_closure_set(v___x_751_, 0, v_inst_732_);
lean_closure_set(v___x_751_, 1, v_f_733_);
v_sz_752_ = lean_array_size(v_a_749_);
v___x_753_ = ((size_t)0ULL);
v___x_754_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_732_, v___x_751_, v_sz_752_, v___x_753_, v_a_749_);
v___x_755_ = lean_apply_4(v_toBind_747_, lean_box(0), lean_box(0), v___x_754_, v___f_750_);
return v___x_755_;
}
default: 
{
lean_object* v_a_756_; lean_object* v_a_757_; lean_object* v___x_758_; 
lean_dec_ref(v_inst_732_);
v_a_756_ = lean_ctor_get(v_x_734_, 0);
lean_inc(v_a_756_);
v_a_757_ = lean_ctor_get(v_x_734_, 1);
lean_inc_ref(v_a_757_);
lean_dec_ref_known(v_x_734_, 2);
v___x_758_ = lean_apply_2(v_f_733_, v_a_756_, v_a_757_);
return v___x_758_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_rewriteM(lean_object* v_m_759_, lean_object* v_00_u03b1_760_, lean_object* v_00_u03b2_761_, lean_object* v_inst_762_, lean_object* v_f_763_, lean_object* v_x_764_){
_start:
{
lean_object* v___x_765_; 
v___x_765_ = l_Lean_Widget_TaggedText_rewriteM___redArg(v_inst_762_, v_f_763_, v_x_764_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___lam__0(lean_object* v_inst_766_, lean_object* v___x_767_, lean_object* v___x_768_, lean_object* v_a_769_, lean_object* v___y_770_){
_start:
{
lean_object* v_rpcEncode_771_; lean_object* v___x_648__overap_772_; lean_object* v___x_773_; lean_object* v_fst_774_; lean_object* v_snd_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_783_; 
v_rpcEncode_771_ = lean_ctor_get(v_inst_766_, 0);
lean_inc_ref(v_rpcEncode_771_);
lean_dec_ref(v_inst_766_);
v___x_648__overap_772_ = l_Lean_Widget_TaggedText_mapM___redArg(v___x_767_, v_rpcEncode_771_, v_a_769_);
v___x_773_ = lean_apply_1(v___x_648__overap_772_, v___y_770_);
v_fst_774_ = lean_ctor_get(v___x_773_, 0);
v_snd_775_ = lean_ctor_get(v___x_773_, 1);
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_783_ == 0)
{
v___x_777_ = v___x_773_;
v_isShared_778_ = v_isSharedCheck_783_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_snd_775_);
lean_inc(v_fst_774_);
lean_dec(v___x_773_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_783_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_779_; lean_object* v___x_781_; 
v___x_779_ = l_Lean_Widget_instToJsonTaggedText_toJson___redArg(v___x_768_, v_fst_774_);
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 0, v___x_779_);
v___x_781_ = v___x_777_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_779_);
lean_ctor_set(v_reuseFailAlloc_782_, 1, v_snd_775_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___lam__1(lean_object* v___f_784_, lean_object* v_inst_785_, lean_object* v___x_786_, lean_object* v_a_787_, lean_object* v___y_788_){
_start:
{
lean_object* v___x_789_; 
v___x_789_ = l_Lean_Widget_instFromJsonTaggedText_fromJson___redArg(v___f_784_, v_a_787_);
if (lean_obj_tag(v___x_789_) == 0)
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
lean_dec_ref(v___x_786_);
lean_dec_ref(v_inst_785_);
v_a_790_ = lean_ctor_get(v___x_789_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_789_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_789_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_789_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_790_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
else
{
lean_object* v_a_798_; lean_object* v_rpcDecode_799_; lean_object* v___x_661__overap_800_; lean_object* v___x_801_; 
v_a_798_ = lean_ctor_get(v___x_789_, 0);
lean_inc(v_a_798_);
lean_dec_ref_known(v___x_789_, 1);
v_rpcDecode_799_ = lean_ctor_get(v_inst_785_, 1);
lean_inc_ref(v_rpcDecode_799_);
lean_dec_ref(v_inst_785_);
v___x_661__overap_800_ = l_Lean_Widget_TaggedText_mapM___redArg(v___x_786_, v_rpcDecode_799_, v_a_798_);
lean_inc_ref(v___y_788_);
v___x_801_ = lean_apply_1(v___x_661__overap_800_, v___y_788_);
return v___x_801_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg___lam__1___boxed(lean_object* v___f_802_, lean_object* v_inst_803_, lean_object* v___x_804_, lean_object* v_a_805_, lean_object* v___y_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_Lean_Widget_TaggedText_instRpcEncodable___redArg___lam__1(v___f_802_, v_inst_803_, v___x_804_, v_a_805_, v___y_806_);
lean_dec_ref(v___y_806_);
return v_res_807_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21(void){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = ((lean_object*)(l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__9));
v___x_855_ = l_ReaderT_instMonad___redArg(v___x_854_);
return v___x_855_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__22(void){
_start:
{
lean_object* v___x_856_; lean_object* v___f_857_; 
v___x_856_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21);
v___f_857_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_857_, 0, v___x_856_);
return v___f_857_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__23(void){
_start:
{
lean_object* v___x_858_; lean_object* v___f_859_; 
v___x_858_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21);
v___f_859_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_859_, 0, v___x_858_);
return v___f_859_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__24(void){
_start:
{
lean_object* v___x_860_; lean_object* v___f_861_; 
v___x_860_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21);
v___f_861_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_861_, 0, v___x_860_);
return v___f_861_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__25(void){
_start:
{
lean_object* v___x_862_; lean_object* v___f_863_; 
v___x_862_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21);
v___f_863_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_863_, 0, v___x_862_);
return v___f_863_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__26(void){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_864_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21);
v___x_865_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_865_, 0, lean_box(0));
lean_closure_set(v___x_865_, 1, lean_box(0));
lean_closure_set(v___x_865_, 2, v___x_864_);
return v___x_865_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__27(void){
_start:
{
lean_object* v___f_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v___f_866_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__22, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__22_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__22);
v___x_867_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__26, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__26_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__26);
v___x_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_868_, 0, v___x_867_);
lean_ctor_set(v___x_868_, 1, v___f_866_);
return v___x_868_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__28(void){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_869_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21);
v___x_870_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_870_, 0, lean_box(0));
lean_closure_set(v___x_870_, 1, lean_box(0));
lean_closure_set(v___x_870_, 2, v___x_869_);
return v___x_870_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__29(void){
_start:
{
lean_object* v___f_871_; lean_object* v___f_872_; lean_object* v___f_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v___f_871_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__25, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__25_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__25);
v___f_872_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__24, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__24_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__24);
v___f_873_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__23, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__23_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__23);
v___x_874_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__28, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__28_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__28);
v___x_875_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__27, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__27_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__27);
v___x_876_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
lean_ctor_set(v___x_876_, 1, v___x_874_);
lean_ctor_set(v___x_876_, 2, v___f_873_);
lean_ctor_set(v___x_876_, 3, v___f_872_);
lean_ctor_set(v___x_876_, 4, v___f_871_);
return v___x_876_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__30(void){
_start:
{
lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_877_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__21);
v___x_878_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_878_, 0, lean_box(0));
lean_closure_set(v___x_878_, 1, lean_box(0));
lean_closure_set(v___x_878_, 2, v___x_877_);
return v___x_878_;
}
}
static lean_object* _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__31(void){
_start:
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_879_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__30, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__30_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__30);
v___x_880_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__29, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__29_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__29);
v___x_881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_880_);
lean_ctor_set(v___x_881_, 1, v___x_879_);
return v___x_881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable___redArg(lean_object* v_inst_883_){
_start:
{
lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___f_886_; lean_object* v___x_887_; lean_object* v___f_888_; lean_object* v___f_889_; lean_object* v___x_890_; 
v___x_884_ = ((lean_object*)(l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__19));
v___x_885_ = ((lean_object*)(l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__20));
lean_inc_ref(v_inst_883_);
v___f_886_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_instRpcEncodable___redArg___lam__0), 5, 3);
lean_closure_set(v___f_886_, 0, v_inst_883_);
lean_closure_set(v___f_886_, 1, v___x_884_);
lean_closure_set(v___f_886_, 2, v___x_885_);
v___x_887_ = lean_obj_once(&l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__31, &l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__31_once, _init_l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__31);
v___f_888_ = ((lean_object*)(l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__32));
v___f_889_ = lean_alloc_closure((void*)(l_Lean_Widget_TaggedText_instRpcEncodable___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_889_, 0, v___f_888_);
lean_closure_set(v___f_889_, 1, v_inst_883_);
lean_closure_set(v___f_889_, 2, v___x_887_);
v___x_890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_890_, 0, v___f_886_);
lean_ctor_set(v___x_890_, 1, v___f_889_);
return v___x_890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_instRpcEncodable(lean_object* v_00_u03b1_891_, lean_object* v_inst_892_){
_start:
{
lean_object* v___x_893_; 
v___x_893_ = l_Lean_Widget_TaggedText_instRpcEncodable___redArg(v_inst_892_);
return v___x_893_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__0(lean_object* v_s_902_, lean_object* v___y_903_){
_start:
{
lean_object* v_out_904_; lean_object* v_tagStack_905_; lean_object* v_column_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_918_; 
v_out_904_ = lean_ctor_get(v___y_903_, 0);
v_tagStack_905_ = lean_ctor_get(v___y_903_, 1);
v_column_906_ = lean_ctor_get(v___y_903_, 2);
v_isSharedCheck_918_ = !lean_is_exclusive(v___y_903_);
if (v_isSharedCheck_918_ == 0)
{
v___x_908_ = v___y_903_;
v_isShared_909_ = v_isSharedCheck_918_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_column_906_);
lean_inc(v_tagStack_905_);
lean_inc(v_out_904_);
lean_dec(v___y_903_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_918_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_915_; 
v___x_910_ = lean_box(0);
lean_inc_ref(v_s_902_);
v___x_911_ = l_Lean_Widget_TaggedText_appendText___redArg(v_s_902_, v_out_904_);
v___x_912_ = lean_string_length(v_s_902_);
lean_dec_ref(v_s_902_);
v___x_913_ = lean_nat_add(v_column_906_, v___x_912_);
lean_dec(v_column_906_);
if (v_isShared_909_ == 0)
{
lean_ctor_set(v___x_908_, 2, v___x_913_);
lean_ctor_set(v___x_908_, 0, v___x_911_);
v___x_915_ = v___x_908_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v___x_911_);
lean_ctor_set(v_reuseFailAlloc_917_, 1, v_tagStack_905_);
lean_ctor_set(v_reuseFailAlloc_917_, 2, v___x_913_);
v___x_915_ = v_reuseFailAlloc_917_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
lean_object* v___x_916_; 
v___x_916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_910_);
lean_ctor_set(v___x_916_, 1, v___x_915_);
return v___x_916_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__1(uint32_t v___x_919_, lean_object* v_s_920_){
_start:
{
lean_object* v___x_921_; 
v___x_921_ = lean_string_push(v_s_920_, v___x_919_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__1___boxed(lean_object* v___x_922_, lean_object* v_s_923_){
_start:
{
uint32_t v___x_834__boxed_924_; lean_object* v_res_925_; 
v___x_834__boxed_924_ = lean_unbox_uint32(v___x_922_);
lean_dec(v___x_922_);
v_res_925_ = l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__1(v___x_834__boxed_924_, v_s_923_);
return v_res_925_;
}
}
static lean_object* _init_l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_927_; lean_object* v___x_928_; 
v___x_927_ = 32;
v___x_928_ = lean_box_uint32(v___x_927_);
return v___x_928_;
}
}
static lean_object* _init_l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1(void){
_start:
{
lean_object* v___x_929_; lean_object* v___f_930_; 
v___x_929_ = l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1___boxed__const__1;
v___f_930_ = lean_alloc_closure((void*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__1___boxed), 2, 1);
lean_closure_set(v___f_930_, 0, v___x_929_);
return v___f_930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2(lean_object* v_indent_931_, lean_object* v___y_932_){
_start:
{
lean_object* v_out_933_; lean_object* v_tagStack_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_947_; 
v_out_933_ = lean_ctor_get(v___y_932_, 0);
v_tagStack_934_ = lean_ctor_get(v___y_932_, 1);
v_isSharedCheck_947_ = !lean_is_exclusive(v___y_932_);
if (v_isSharedCheck_947_ == 0)
{
lean_object* v_unused_948_; 
v_unused_948_ = lean_ctor_get(v___y_932_, 2);
lean_dec(v_unused_948_);
v___x_936_ = v___y_932_;
v_isShared_937_ = v_isSharedCheck_947_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_tagStack_934_);
lean_inc(v_out_933_);
lean_dec(v___y_932_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_947_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___f_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_944_; 
v___x_938_ = lean_box(0);
v___x_939_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__0));
v___f_940_ = lean_obj_once(&l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1, &l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1_once, _init_l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1);
lean_inc(v_indent_931_);
v___x_941_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop(lean_box(0), v___f_940_, v_indent_931_, v___x_939_);
v___x_942_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_941_, v_out_933_);
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 2, v_indent_931_);
lean_ctor_set(v___x_936_, 0, v___x_942_);
v___x_944_ = v___x_936_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v___x_942_);
lean_ctor_set(v_reuseFailAlloc_946_, 1, v_tagStack_934_);
lean_ctor_set(v_reuseFailAlloc_946_, 2, v_indent_931_);
v___x_944_ = v_reuseFailAlloc_946_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
lean_object* v___x_945_; 
v___x_945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_945_, 0, v___x_938_);
lean_ctor_set(v___x_945_, 1, v___x_944_);
return v___x_945_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__3(lean_object* v_____do__lift_949_, lean_object* v___y_950_){
_start:
{
lean_object* v_column_951_; lean_object* v___x_952_; 
v_column_951_ = lean_ctor_get(v_____do__lift_949_, 2);
lean_inc(v_column_951_);
v___x_952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_952_, 0, v_column_951_);
lean_ctor_set(v___x_952_, 1, v___y_950_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__3___boxed(lean_object* v_____do__lift_953_, lean_object* v___y_954_){
_start:
{
lean_object* v_res_955_; 
v_res_955_ = l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__3(v_____do__lift_953_, v___y_954_);
lean_dec_ref(v_____do__lift_953_);
return v_res_955_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__4(lean_object* v_n_956_, lean_object* v___y_957_){
_start:
{
lean_object* v_out_958_; lean_object* v_tagStack_959_; lean_object* v_column_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_973_; 
v_out_958_ = lean_ctor_get(v___y_957_, 0);
v_tagStack_959_ = lean_ctor_get(v___y_957_, 1);
v_column_960_ = lean_ctor_get(v___y_957_, 2);
v_isSharedCheck_973_ = !lean_is_exclusive(v___y_957_);
if (v_isSharedCheck_973_ == 0)
{
v___x_962_ = v___y_957_;
v_isShared_963_ = v_isSharedCheck_973_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_column_960_);
lean_inc(v_tagStack_959_);
lean_inc(v_out_958_);
lean_dec(v___y_957_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_973_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_970_; 
v___x_964_ = lean_box(0);
v___x_965_ = ((lean_object*)(l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__0));
lean_inc(v_column_960_);
v___x_966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_966_, 0, v_column_960_);
lean_ctor_set(v___x_966_, 1, v_out_958_);
v___x_967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_967_, 0, v_n_956_);
lean_ctor_set(v___x_967_, 1, v___x_966_);
v___x_968_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
lean_ctor_set(v___x_968_, 1, v_tagStack_959_);
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 1, v___x_968_);
lean_ctor_set(v___x_962_, 0, v___x_965_);
v___x_970_ = v___x_962_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v___x_965_);
lean_ctor_set(v_reuseFailAlloc_972_, 1, v___x_968_);
lean_ctor_set(v_reuseFailAlloc_972_, 2, v_column_960_);
v___x_970_ = v_reuseFailAlloc_972_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
lean_object* v___x_971_; 
v___x_971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_971_, 0, v___x_964_);
lean_ctor_set(v___x_971_, 1, v___x_970_);
return v___x_971_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__5(lean_object* v_acc_974_, lean_object* v_x_975_){
_start:
{
lean_object* v_snd_976_; lean_object* v_fst_977_; lean_object* v_fst_978_; lean_object* v_snd_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_987_; 
v_snd_976_ = lean_ctor_get(v_x_975_, 1);
lean_inc(v_snd_976_);
v_fst_977_ = lean_ctor_get(v_x_975_, 0);
lean_inc(v_fst_977_);
lean_dec_ref(v_x_975_);
v_fst_978_ = lean_ctor_get(v_snd_976_, 0);
v_snd_979_ = lean_ctor_get(v_snd_976_, 1);
v_isSharedCheck_987_ = !lean_is_exclusive(v_snd_976_);
if (v_isSharedCheck_987_ == 0)
{
v___x_981_ = v_snd_976_;
v_isShared_982_ = v_isSharedCheck_987_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_snd_979_);
lean_inc(v_fst_978_);
lean_dec(v_snd_976_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_987_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_984_; 
if (v_isShared_982_ == 0)
{
lean_ctor_set(v___x_981_, 1, v_fst_978_);
lean_ctor_set(v___x_981_, 0, v_fst_977_);
v___x_984_ = v___x_981_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_fst_977_);
lean_ctor_set(v_reuseFailAlloc_986_, 1, v_fst_978_);
v___x_984_ = v_reuseFailAlloc_986_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
lean_object* v___x_985_; 
v___x_985_ = l_Lean_Widget_TaggedText_appendTag___redArg(v_snd_979_, v___x_984_, v_acc_974_);
return v___x_985_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6(lean_object* v___f_990_, lean_object* v_n_991_, lean_object* v___y_992_){
_start:
{
lean_object* v_out_993_; lean_object* v_tagStack_994_; lean_object* v_column_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1008_; 
v_out_993_ = lean_ctor_get(v___y_992_, 0);
v_tagStack_994_ = lean_ctor_get(v___y_992_, 1);
v_column_995_ = lean_ctor_get(v___y_992_, 2);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___y_992_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_997_ = v___y_992_;
v_isShared_998_ = v_isSharedCheck_1008_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_column_995_);
lean_inc(v_tagStack_994_);
lean_inc(v_out_993_);
lean_dec(v___y_992_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1008_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v_out_x27_1003_; lean_object* v___x_1005_; 
v___x_999_ = lean_box(0);
v___x_1000_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_n_991_);
lean_inc(v_tagStack_994_);
v___x_1001_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_994_, v_tagStack_994_, v_n_991_, v___x_1000_);
v___x_1002_ = l_List_drop___redArg(v_n_991_, v_tagStack_994_);
lean_dec(v_tagStack_994_);
v_out_x27_1003_ = l_List_foldl___redArg(v___f_990_, v_out_993_, v___x_1001_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 1, v___x_1002_);
lean_ctor_set(v___x_997_, 0, v_out_x27_1003_);
v___x_1005_ = v___x_997_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_out_x27_1003_);
lean_ctor_set(v_reuseFailAlloc_1007_, 1, v___x_1002_);
lean_ctor_set(v_reuseFailAlloc_1007_, 2, v_column_995_);
v___x_1005_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
lean_object* v___x_1006_; 
v___x_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_999_);
lean_ctor_set(v___x_1006_, 1, v___x_1005_);
return v___x_1006_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(lean_object* v_x_1029_, lean_object* v_x_1030_){
_start:
{
lean_object* v_zero_1031_; uint8_t v_isZero_1032_; 
v_zero_1031_ = lean_unsigned_to_nat(0u);
v_isZero_1032_ = lean_nat_dec_eq(v_x_1029_, v_zero_1031_);
if (v_isZero_1032_ == 1)
{
lean_dec(v_x_1029_);
return v_x_1030_;
}
else
{
uint32_t v___x_1033_; lean_object* v_one_1034_; lean_object* v_n_1035_; lean_object* v___x_1036_; 
v___x_1033_ = 32;
v_one_1034_ = lean_unsigned_to_nat(1u);
v_n_1035_ = lean_nat_sub(v_x_1029_, v_one_1034_);
lean_dec(v_x_1029_);
v___x_1036_ = lean_string_push(v_x_1030_, v___x_1033_);
v_x_1029_ = v_n_1035_;
v_x_1030_ = v___x_1036_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(lean_object* v_fla_1038_, uint8_t v_flb_1039_, lean_object* v_tail_1040_, lean_object* v_is_x27_1041_){
_start:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_1042_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1042_, 0, v_fla_1038_);
lean_ctor_set(v___x_1042_, 1, v_is_x27_1041_);
lean_ctor_set_uint8(v___x_1042_, sizeof(void*)*2, v_flb_1039_);
v___x_1043_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1042_);
lean_ctor_set(v___x_1043_, 1, v_tail_1040_);
return v___x_1043_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0___boxed(lean_object* v_fla_1044_, lean_object* v_flb_1045_, lean_object* v_tail_1046_, lean_object* v_is_x27_1047_){
_start:
{
uint8_t v_flb_6016__boxed_1048_; lean_object* v_res_1049_; 
v_flb_6016__boxed_1048_ = lean_unbox(v_flb_1045_);
v_res_1049_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1044_, v_flb_6016__boxed_1048_, v_tail_1046_, v_is_x27_1047_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4(uint8_t v_flb_1050_, lean_object* v_items_1051_, lean_object* v_gs_1052_, lean_object* v_w_1053_, lean_object* v___y_1054_){
_start:
{
uint8_t v___y_1056_; lean_object* v_column_1061_; uint8_t v___x_1062_; uint8_t v___x_1063_; lean_object* v___x_1064_; lean_object* v_g_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v_r_1069_; uint8_t v_foundLine_1070_; uint8_t v_foundFlattenedHardLine_1071_; lean_object* v_space_1072_; lean_object* v___y_1074_; uint8_t v___x_1078_; 
v_column_1061_ = lean_ctor_get(v___y_1054_, 2);
v___x_1062_ = 0;
v___x_1063_ = l_Std_Format_instBEqFlattenBehavior_beq(v_flb_1050_, v___x_1062_);
v___x_1064_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_1064_, 0, v___x_1063_);
lean_inc(v_items_1051_);
v_g_1065_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_g_1065_, 0, v___x_1064_);
lean_ctor_set(v_g_1065_, 1, v_items_1051_);
lean_ctor_set_uint8(v_g_1065_, sizeof(void*)*2, v_flb_1050_);
v___x_1066_ = lean_box(0);
v___x_1067_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1067_, 0, v_g_1065_);
lean_ctor_set(v___x_1067_, 1, v___x_1066_);
v___x_1068_ = lean_nat_sub(v_w_1053_, v_column_1061_);
lean_inc(v___x_1068_);
lean_inc(v_column_1061_);
v_r_1069_ = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(v___x_1067_, v_column_1061_, v___x_1068_);
v_foundLine_1070_ = lean_ctor_get_uint8(v_r_1069_, sizeof(void*)*1);
v_foundFlattenedHardLine_1071_ = lean_ctor_get_uint8(v_r_1069_, sizeof(void*)*1 + 1);
v_space_1072_ = lean_ctor_get(v_r_1069_, 0);
v___x_1078_ = lean_nat_dec_lt(v___x_1068_, v_space_1072_);
if (v___x_1078_ == 0)
{
if (v_foundLine_1070_ == 0)
{
lean_object* v___x_1079_; lean_object* v_r_u2082_1080_; uint8_t v_foundLine_1081_; uint8_t v_foundFlattenedHardLine_1082_; lean_object* v_space_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1091_; 
lean_inc(v_space_1072_);
lean_dec_ref(v_r_1069_);
v___x_1079_ = lean_nat_sub(v___x_1068_, v_space_1072_);
lean_inc(v_column_1061_);
lean_inc(v_gs_1052_);
v_r_u2082_1080_ = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(v_gs_1052_, v_column_1061_, v___x_1079_);
v_foundLine_1081_ = lean_ctor_get_uint8(v_r_u2082_1080_, sizeof(void*)*1);
v_foundFlattenedHardLine_1082_ = lean_ctor_get_uint8(v_r_u2082_1080_, sizeof(void*)*1 + 1);
v_space_1083_ = lean_ctor_get(v_r_u2082_1080_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v_r_u2082_1080_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1085_ = v_r_u2082_1080_;
v_isShared_1086_ = v_isSharedCheck_1091_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_space_1083_);
lean_dec(v_r_u2082_1080_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1091_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1087_; lean_object* v___x_1089_; 
v___x_1087_ = lean_nat_add(v_space_1072_, v_space_1083_);
lean_dec(v_space_1083_);
lean_dec(v_space_1072_);
if (v_isShared_1086_ == 0)
{
lean_ctor_set(v___x_1085_, 0, v___x_1087_);
v___x_1089_ = v___x_1085_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v___x_1087_);
lean_ctor_set_uint8(v_reuseFailAlloc_1090_, sizeof(void*)*1, v_foundLine_1081_);
lean_ctor_set_uint8(v_reuseFailAlloc_1090_, sizeof(void*)*1 + 1, v_foundFlattenedHardLine_1082_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
v___y_1074_ = v___x_1089_;
goto v___jp_1073_;
}
}
}
else
{
v___y_1074_ = v_r_1069_;
goto v___jp_1073_;
}
}
else
{
v___y_1074_ = v_r_1069_;
goto v___jp_1073_;
}
v___jp_1055_:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1057_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_1057_, 0, v___y_1056_);
v___x_1058_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
lean_ctor_set(v___x_1058_, 1, v_items_1051_);
lean_ctor_set_uint8(v___x_1058_, sizeof(void*)*2, v_flb_1050_);
v___x_1059_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1058_);
lean_ctor_set(v___x_1059_, 1, v_gs_1052_);
v___x_1060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1059_);
lean_ctor_set(v___x_1060_, 1, v___y_1054_);
return v___x_1060_;
}
v___jp_1073_:
{
if (v_foundFlattenedHardLine_1071_ == 0)
{
lean_object* v_space_1075_; uint8_t v___x_1076_; 
v_space_1075_ = lean_ctor_get(v___y_1074_, 0);
lean_inc(v_space_1075_);
lean_dec_ref(v___y_1074_);
v___x_1076_ = lean_nat_dec_le(v_space_1075_, v___x_1068_);
lean_dec(v___x_1068_);
lean_dec(v_space_1075_);
v___y_1056_ = v___x_1076_;
goto v___jp_1055_;
}
else
{
uint8_t v___x_1077_; 
lean_dec_ref(v___y_1074_);
lean_dec(v___x_1068_);
v___x_1077_ = 0;
v___y_1056_ = v___x_1077_;
goto v___jp_1055_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4___boxed(lean_object* v_flb_1092_, lean_object* v_items_1093_, lean_object* v_gs_1094_, lean_object* v_w_1095_, lean_object* v___y_1096_){
_start:
{
uint8_t v_flb_boxed_1097_; lean_object* v_res_1098_; 
v_flb_boxed_1097_ = lean_unbox(v_flb_1092_);
v_res_1098_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4(v_flb_boxed_1097_, v_items_1093_, v_gs_1094_, v_w_1095_, v___y_1096_);
lean_dec(v_w_1095_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__2(lean_object* v_x_1099_, lean_object* v_x_1100_){
_start:
{
if (lean_obj_tag(v_x_1100_) == 0)
{
return v_x_1099_;
}
else
{
lean_object* v_head_1101_; lean_object* v_snd_1102_; lean_object* v_tail_1103_; lean_object* v_fst_1104_; lean_object* v_fst_1105_; lean_object* v_snd_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1115_; 
v_head_1101_ = lean_ctor_get(v_x_1100_, 0);
lean_inc(v_head_1101_);
v_snd_1102_ = lean_ctor_get(v_head_1101_, 1);
lean_inc(v_snd_1102_);
v_tail_1103_ = lean_ctor_get(v_x_1100_, 1);
lean_inc(v_tail_1103_);
lean_dec_ref_known(v_x_1100_, 2);
v_fst_1104_ = lean_ctor_get(v_head_1101_, 0);
lean_inc(v_fst_1104_);
lean_dec(v_head_1101_);
v_fst_1105_ = lean_ctor_get(v_snd_1102_, 0);
v_snd_1106_ = lean_ctor_get(v_snd_1102_, 1);
v_isSharedCheck_1115_ = !lean_is_exclusive(v_snd_1102_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1108_ = v_snd_1102_;
v_isShared_1109_ = v_isSharedCheck_1115_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_snd_1106_);
lean_inc(v_fst_1105_);
lean_dec(v_snd_1102_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1115_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1111_; 
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 1, v_fst_1105_);
lean_ctor_set(v___x_1108_, 0, v_fst_1104_);
v___x_1111_ = v___x_1108_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_fst_1104_);
lean_ctor_set(v_reuseFailAlloc_1114_, 1, v_fst_1105_);
v___x_1111_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
lean_object* v___x_1112_; 
v___x_1112_ = l_Lean_Widget_TaggedText_appendTag___redArg(v_snd_1106_, v___x_1111_, v_x_1099_);
v_x_1099_ = v___x_1112_;
v_x_1100_ = v_tail_1103_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1116_ = lean_box(0);
v___x_1117_ = ((lean_object*)(l_Lean_Widget_TaggedText_instRpcEncodable___redArg___closed__19));
v___x_1118_ = l_instInhabitedOfMonad___redArg(v___x_1117_, v___x_1116_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__5(lean_object* v_msg_1119_, lean_object* v___y_1120_){
_start:
{
lean_object* v___x_1121_; lean_object* v___x_5922__overap_1122_; lean_object* v___x_1123_; 
v___x_1121_ = lean_obj_once(&l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__5___closed__0, &l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__5___closed__0_once, _init_l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__5___closed__0);
v___x_5922__overap_1122_ = lean_panic_fn_borrowed(v___x_1121_, v_msg_1119_);
v___x_1123_ = lean_apply_1(v___x_5922__overap_1122_, v___y_1120_);
return v___x_1123_;
}
}
static lean_object* _init_l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1125_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__0));
v___x_1126_ = lean_string_length(v___x_1125_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1(lean_object* v_w_1128_, lean_object* v_x_1129_, lean_object* v___y_1130_){
_start:
{
if (lean_obj_tag(v_x_1129_) == 0)
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = lean_box(0);
v___x_1132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1131_);
lean_ctor_set(v___x_1132_, 1, v___y_1130_);
return v___x_1132_;
}
else
{
lean_object* v_head_1133_; lean_object* v_items_1134_; 
v_head_1133_ = lean_ctor_get(v_x_1129_, 0);
v_items_1134_ = lean_ctor_get(v_head_1133_, 1);
lean_inc(v_items_1134_);
if (lean_obj_tag(v_items_1134_) == 0)
{
lean_object* v_tail_1135_; 
v_tail_1135_ = lean_ctor_get(v_x_1129_, 1);
lean_inc(v_tail_1135_);
lean_dec_ref_known(v_x_1129_, 2);
v_x_1129_ = v_tail_1135_;
goto _start;
}
else
{
lean_object* v_head_1137_; lean_object* v_tail_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1472_; 
lean_inc(v_head_1133_);
v_head_1137_ = lean_ctor_get(v_items_1134_, 0);
lean_inc(v_head_1137_);
v_tail_1138_ = lean_ctor_get(v_x_1129_, 1);
v_isSharedCheck_1472_ = !lean_is_exclusive(v_x_1129_);
if (v_isSharedCheck_1472_ == 0)
{
lean_object* v_unused_1473_; 
v_unused_1473_ = lean_ctor_get(v_x_1129_, 0);
lean_dec(v_unused_1473_);
v___x_1140_ = v_x_1129_;
v_isShared_1141_ = v_isSharedCheck_1472_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_tail_1138_);
lean_dec(v_x_1129_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1472_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v_fla_1142_; uint8_t v_flb_1143_; lean_object* v_tail_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1470_; 
v_fla_1142_ = lean_ctor_get(v_head_1133_, 0);
lean_inc(v_fla_1142_);
v_flb_1143_ = lean_ctor_get_uint8(v_head_1133_, sizeof(void*)*2);
lean_dec(v_head_1133_);
v_tail_1144_ = lean_ctor_get(v_items_1134_, 1);
v_isSharedCheck_1470_ = !lean_is_exclusive(v_items_1134_);
if (v_isSharedCheck_1470_ == 0)
{
lean_object* v_unused_1471_; 
v_unused_1471_ = lean_ctor_get(v_items_1134_, 0);
lean_dec(v_unused_1471_);
v___x_1146_ = v_items_1134_;
v_isShared_1147_ = v_isSharedCheck_1470_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_tail_1144_);
lean_dec(v_items_1134_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1470_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v_f_1148_; lean_object* v_indent_1149_; lean_object* v_activeTags_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1469_; 
v_f_1148_ = lean_ctor_get(v_head_1137_, 0);
v_indent_1149_ = lean_ctor_get(v_head_1137_, 1);
v_activeTags_1150_ = lean_ctor_get(v_head_1137_, 2);
v_isSharedCheck_1469_ = !lean_is_exclusive(v_head_1137_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1152_ = v_head_1137_;
v_isShared_1153_ = v_isSharedCheck_1469_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_activeTags_1150_);
lean_inc(v_indent_1149_);
lean_inc(v_f_1148_);
lean_dec(v_head_1137_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1469_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
switch(lean_obj_tag(v_f_1148_))
{
case 0:
{
lean_del_object(v___x_1152_);
lean_dec(v_indent_1149_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1140_);
goto v___jp_1194_;
}
case 1:
{
lean_del_object(v___x_1152_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1140_);
if (v_flb_1143_ == 0)
{
uint8_t v___x_1211_; 
v___x_1211_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_1142_);
if (v___x_1211_ == 0)
{
lean_object* v_out_1212_; lean_object* v_tagStack_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1230_; 
v_out_1212_ = lean_ctor_get(v___y_1130_, 0);
v_tagStack_1213_ = lean_ctor_get(v___y_1130_, 1);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___y_1130_);
if (v_isSharedCheck_1230_ == 0)
{
lean_object* v_unused_1231_; 
v_unused_1231_ = lean_ctor_get(v___y_1130_, 2);
lean_dec(v_unused_1231_);
v___x_1215_ = v___y_1130_;
v_isShared_1216_ = v_isSharedCheck_1230_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_tagStack_1213_);
lean_inc(v_out_1212_);
lean_dec(v___y_1130_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1230_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v_out_x27_1224_; lean_object* v___x_1226_; 
v___x_1217_ = l_Int_toNat(v_indent_1149_);
lean_dec(v_indent_1149_);
v___x_1218_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__0));
lean_inc(v___x_1217_);
v___x_1219_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(v___x_1217_, v___x_1218_);
v___x_1220_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_1219_, v_out_1212_);
v___x_1221_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1150_);
lean_inc(v_tagStack_1213_);
v___x_1222_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1213_, v_tagStack_1213_, v_activeTags_1150_, v___x_1221_);
v___x_1223_ = l_List_drop___redArg(v_activeTags_1150_, v_tagStack_1213_);
lean_dec(v_tagStack_1213_);
v_out_x27_1224_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__2(v___x_1220_, v___x_1222_);
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 2, v___x_1217_);
lean_ctor_set(v___x_1215_, 1, v___x_1223_);
lean_ctor_set(v___x_1215_, 0, v_out_x27_1224_);
v___x_1226_ = v___x_1215_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_out_x27_1224_);
lean_ctor_set(v_reuseFailAlloc_1229_, 1, v___x_1223_);
lean_ctor_set(v_reuseFailAlloc_1229_, 2, v___x_1217_);
v___x_1226_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
lean_object* v___x_1227_; 
v___x_1227_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1142_, v_flb_1143_, v_tail_1138_, v_tail_1144_);
v_x_1129_ = v___x_1227_;
v___y_1130_ = v___x_1226_;
goto _start;
}
}
}
else
{
lean_object* v_out_1232_; lean_object* v_tagStack_1233_; lean_object* v_column_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1251_; 
lean_dec(v_indent_1149_);
v_out_1232_ = lean_ctor_get(v___y_1130_, 0);
v_tagStack_1233_ = lean_ctor_get(v___y_1130_, 1);
v_column_1234_ = lean_ctor_get(v___y_1130_, 2);
v_isSharedCheck_1251_ = !lean_is_exclusive(v___y_1130_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1236_ = v___y_1130_;
v_isShared_1237_ = v_isSharedCheck_1251_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_column_1234_);
lean_inc(v_tagStack_1233_);
lean_inc(v_out_1232_);
lean_dec(v___y_1130_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1251_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v_out_x27_1245_; lean_object* v___x_1247_; 
v___x_1238_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__0));
v___x_1239_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_1238_, v_out_1232_);
v___x_1240_ = lean_unsigned_to_nat(1u);
v___x_1241_ = lean_nat_add(v_column_1234_, v___x_1240_);
lean_dec(v_column_1234_);
v___x_1242_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1150_);
lean_inc(v_tagStack_1233_);
v___x_1243_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1233_, v_tagStack_1233_, v_activeTags_1150_, v___x_1242_);
v___x_1244_ = l_List_drop___redArg(v_activeTags_1150_, v_tagStack_1233_);
lean_dec(v_tagStack_1233_);
v_out_x27_1245_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__2(v___x_1239_, v___x_1243_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 2, v___x_1241_);
lean_ctor_set(v___x_1236_, 1, v___x_1244_);
lean_ctor_set(v___x_1236_, 0, v_out_x27_1245_);
v___x_1247_ = v___x_1236_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v_out_x27_1245_);
lean_ctor_set(v_reuseFailAlloc_1250_, 1, v___x_1244_);
lean_ctor_set(v_reuseFailAlloc_1250_, 2, v___x_1241_);
v___x_1247_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
lean_object* v___x_1248_; 
v___x_1248_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1142_, v_flb_1143_, v_tail_1138_, v_tail_1144_);
v_x_1129_ = v___x_1248_;
v___y_1130_ = v___x_1247_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1252_; uint8_t v___x_1253_; 
v___x_1252_ = l_Int_toNat(v_indent_1149_);
lean_dec(v_indent_1149_);
v___x_1253_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_1142_);
lean_dec(v_fla_1142_);
if (v___x_1253_ == 0)
{
lean_object* v_out_1254_; lean_object* v_tagStack_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1273_; 
v_out_1254_ = lean_ctor_get(v___y_1130_, 0);
v_tagStack_1255_ = lean_ctor_get(v___y_1130_, 1);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___y_1130_);
if (v_isSharedCheck_1273_ == 0)
{
lean_object* v_unused_1274_; 
v_unused_1274_ = lean_ctor_get(v___y_1130_, 2);
lean_dec(v_unused_1274_);
v___x_1257_ = v___y_1130_;
v_isShared_1258_ = v_isSharedCheck_1273_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_tagStack_1255_);
lean_inc(v_out_1254_);
lean_dec(v___y_1130_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1273_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v_out_x27_1265_; lean_object* v___x_1267_; 
v___x_1259_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__0));
lean_inc(v___x_1252_);
v___x_1260_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(v___x_1252_, v___x_1259_);
v___x_1261_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_1260_, v_out_1254_);
v___x_1262_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1150_);
lean_inc(v_tagStack_1255_);
v___x_1263_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1255_, v_tagStack_1255_, v_activeTags_1150_, v___x_1262_);
v___x_1264_ = l_List_drop___redArg(v_activeTags_1150_, v_tagStack_1255_);
lean_dec(v_tagStack_1255_);
v_out_x27_1265_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__2(v___x_1261_, v___x_1263_);
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 2, v___x_1252_);
lean_ctor_set(v___x_1257_, 1, v___x_1264_);
lean_ctor_set(v___x_1257_, 0, v_out_x27_1265_);
v___x_1267_ = v___x_1257_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_out_x27_1265_);
lean_ctor_set(v_reuseFailAlloc_1272_, 1, v___x_1264_);
lean_ctor_set(v_reuseFailAlloc_1272_, 2, v___x_1252_);
v___x_1267_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
lean_object* v___x_1268_; lean_object* v_fst_1269_; lean_object* v_snd_1270_; 
v___x_1268_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4(v_flb_1143_, v_tail_1144_, v_tail_1138_, v_w_1128_, v___x_1267_);
v_fst_1269_ = lean_ctor_get(v___x_1268_, 0);
lean_inc(v_fst_1269_);
v_snd_1270_ = lean_ctor_get(v___x_1268_, 1);
lean_inc(v_snd_1270_);
lean_dec_ref(v___x_1268_);
v_x_1129_ = v_fst_1269_;
v___y_1130_ = v_snd_1270_;
goto _start;
}
}
}
else
{
lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v_fst_1279_; 
v___x_1275_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__0));
v___x_1276_ = lean_obj_once(&l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__1, &l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__1_once, _init_l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__1);
v___x_1277_ = lean_nat_sub(v_w_1128_, v___x_1276_);
lean_inc(v_tail_1138_);
lean_inc(v_tail_1144_);
v___x_1278_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4(v_flb_1143_, v_tail_1144_, v_tail_1138_, v___x_1277_, v___y_1130_);
lean_dec(v___x_1277_);
v_fst_1279_ = lean_ctor_get(v___x_1278_, 0);
if (lean_obj_tag(v_fst_1279_) == 1)
{
lean_object* v_head_1280_; lean_object* v_snd_1281_; lean_object* v_fla_1282_; uint8_t v___x_1283_; 
lean_inc_ref(v_fst_1279_);
v_head_1280_ = lean_ctor_get(v_fst_1279_, 0);
v_snd_1281_ = lean_ctor_get(v___x_1278_, 1);
lean_inc(v_snd_1281_);
lean_dec_ref(v___x_1278_);
v_fla_1282_ = lean_ctor_get(v_head_1280_, 0);
v___x_1283_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_1282_);
if (v___x_1283_ == 0)
{
lean_object* v_out_1284_; lean_object* v_tagStack_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1303_; 
lean_dec_ref_known(v_fst_1279_, 2);
v_out_1284_ = lean_ctor_get(v_snd_1281_, 0);
v_tagStack_1285_ = lean_ctor_get(v_snd_1281_, 1);
v_isSharedCheck_1303_ = !lean_is_exclusive(v_snd_1281_);
if (v_isSharedCheck_1303_ == 0)
{
lean_object* v_unused_1304_; 
v_unused_1304_ = lean_ctor_get(v_snd_1281_, 2);
lean_dec(v_unused_1304_);
v___x_1287_ = v_snd_1281_;
v_isShared_1288_ = v_isSharedCheck_1303_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_tagStack_1285_);
lean_inc(v_out_1284_);
lean_dec(v_snd_1281_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1303_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v_out_x27_1295_; lean_object* v___x_1297_; 
v___x_1289_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__0));
lean_inc(v___x_1252_);
v___x_1290_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(v___x_1252_, v___x_1289_);
v___x_1291_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_1290_, v_out_1284_);
v___x_1292_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1150_);
lean_inc(v_tagStack_1285_);
v___x_1293_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1285_, v_tagStack_1285_, v_activeTags_1150_, v___x_1292_);
v___x_1294_ = l_List_drop___redArg(v_activeTags_1150_, v_tagStack_1285_);
lean_dec(v_tagStack_1285_);
v_out_x27_1295_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__2(v___x_1291_, v___x_1293_);
if (v_isShared_1288_ == 0)
{
lean_ctor_set(v___x_1287_, 2, v___x_1252_);
lean_ctor_set(v___x_1287_, 1, v___x_1294_);
lean_ctor_set(v___x_1287_, 0, v_out_x27_1295_);
v___x_1297_ = v___x_1287_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_out_x27_1295_);
lean_ctor_set(v_reuseFailAlloc_1302_, 1, v___x_1294_);
lean_ctor_set(v_reuseFailAlloc_1302_, 2, v___x_1252_);
v___x_1297_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
lean_object* v___x_1298_; lean_object* v_fst_1299_; lean_object* v_snd_1300_; 
v___x_1298_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4(v_flb_1143_, v_tail_1144_, v_tail_1138_, v_w_1128_, v___x_1297_);
v_fst_1299_ = lean_ctor_get(v___x_1298_, 0);
lean_inc(v_fst_1299_);
v_snd_1300_ = lean_ctor_get(v___x_1298_, 1);
lean_inc(v_snd_1300_);
lean_dec_ref(v___x_1298_);
v_x_1129_ = v_fst_1299_;
v___y_1130_ = v_snd_1300_;
goto _start;
}
}
}
else
{
lean_object* v_out_1305_; lean_object* v_tagStack_1306_; lean_object* v_column_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1322_; 
lean_dec(v___x_1252_);
lean_dec(v_tail_1144_);
lean_dec(v_tail_1138_);
v_out_1305_ = lean_ctor_get(v_snd_1281_, 0);
v_tagStack_1306_ = lean_ctor_get(v_snd_1281_, 1);
v_column_1307_ = lean_ctor_get(v_snd_1281_, 2);
v_isSharedCheck_1322_ = !lean_is_exclusive(v_snd_1281_);
if (v_isSharedCheck_1322_ == 0)
{
v___x_1309_ = v_snd_1281_;
v_isShared_1310_ = v_isSharedCheck_1322_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_column_1307_);
lean_inc(v_tagStack_1306_);
lean_inc(v_out_1305_);
lean_dec(v_snd_1281_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1322_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v_out_x27_1317_; lean_object* v___x_1319_; 
v___x_1311_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_1275_, v_out_1305_);
v___x_1312_ = lean_unsigned_to_nat(1u);
v___x_1313_ = lean_nat_add(v_column_1307_, v___x_1312_);
lean_dec(v_column_1307_);
v___x_1314_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1150_);
lean_inc(v_tagStack_1306_);
v___x_1315_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1306_, v_tagStack_1306_, v_activeTags_1150_, v___x_1314_);
v___x_1316_ = l_List_drop___redArg(v_activeTags_1150_, v_tagStack_1306_);
lean_dec(v_tagStack_1306_);
v_out_x27_1317_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__2(v___x_1311_, v___x_1315_);
if (v_isShared_1310_ == 0)
{
lean_ctor_set(v___x_1309_, 2, v___x_1313_);
lean_ctor_set(v___x_1309_, 1, v___x_1316_);
lean_ctor_set(v___x_1309_, 0, v_out_x27_1317_);
v___x_1319_ = v___x_1309_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v_out_x27_1317_);
lean_ctor_set(v_reuseFailAlloc_1321_, 1, v___x_1316_);
lean_ctor_set(v_reuseFailAlloc_1321_, 2, v___x_1313_);
v___x_1319_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
v_x_1129_ = v_fst_1279_;
v___y_1130_ = v___x_1319_;
goto _start;
}
}
}
}
else
{
lean_object* v_snd_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
lean_dec(v___x_1252_);
lean_dec(v_activeTags_1150_);
lean_dec(v_tail_1144_);
lean_dec(v_tail_1138_);
v_snd_1323_ = lean_ctor_get(v___x_1278_, 1);
lean_inc(v_snd_1323_);
lean_dec_ref(v___x_1278_);
v___x_1324_ = ((lean_object*)(l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___closed__2));
v___x_1325_ = l_panic___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__5(v___x_1324_, v_snd_1323_);
return v___x_1325_;
}
}
}
}
case 2:
{
uint8_t v_force_1326_; uint8_t v___x_1327_; 
lean_del_object(v___x_1152_);
lean_del_object(v___x_1146_);
lean_del_object(v___x_1140_);
v_force_1326_ = lean_ctor_get_uint8(v_f_1148_, 0);
lean_dec_ref_known(v_f_1148_, 0);
v___x_1327_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_1142_);
if (v___x_1327_ == 0)
{
goto v___jp_1154_;
}
else
{
if (v_force_1326_ == 0)
{
lean_dec(v_indent_1149_);
goto v___jp_1194_;
}
else
{
goto v___jp_1154_;
}
}
}
case 3:
{
lean_object* v_a_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1391_; 
lean_del_object(v___x_1140_);
v_a_1328_ = lean_ctor_get(v_f_1148_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v_f_1148_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1330_ = v_f_1148_;
v_isShared_1331_ = v_isSharedCheck_1391_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_a_1328_);
lean_dec(v_f_1148_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1391_;
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
lean_object* v_out_1336_; lean_object* v_tagStack_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1370_; 
v_out_1336_ = lean_ctor_get(v___y_1130_, 0);
v_tagStack_1337_ = lean_ctor_get(v___y_1130_, 1);
v_isSharedCheck_1370_ = !lean_is_exclusive(v___y_1130_);
if (v_isSharedCheck_1370_ == 0)
{
lean_object* v_unused_1371_; 
v_unused_1371_ = lean_ctor_get(v___y_1130_, 2);
lean_dec(v_unused_1371_);
v___x_1339_ = v___y_1130_;
v_isShared_1340_ = v_isSharedCheck_1370_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_tagStack_1337_);
lean_inc(v_out_1336_);
lean_dec(v___y_1130_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1370_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1349_; 
v___x_1341_ = lean_unsigned_to_nat(0u);
v___x_1342_ = lean_string_utf8_extract(v_a_1328_, v___x_1341_, v_p_1333_);
v___x_1343_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_1342_, v_out_1336_);
v___x_1344_ = l_Int_toNat(v_indent_1149_);
v___x_1345_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__0));
lean_inc(v___x_1344_);
v___x_1346_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(v___x_1344_, v___x_1345_);
v___x_1347_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_1346_, v___x_1343_);
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 2, v___x_1344_);
lean_ctor_set(v___x_1339_, 0, v___x_1347_);
v___x_1349_ = v___x_1339_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v___x_1347_);
lean_ctor_set(v_reuseFailAlloc_1369_, 1, v_tagStack_1337_);
lean_ctor_set(v_reuseFailAlloc_1369_, 2, v___x_1344_);
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
if (v_isShared_1153_ == 0)
{
lean_ctor_set(v___x_1152_, 0, v___x_1353_);
v___x_1355_ = v___x_1152_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v___x_1353_);
lean_ctor_set(v_reuseFailAlloc_1367_, 1, v_indent_1149_);
lean_ctor_set(v_reuseFailAlloc_1367_, 2, v_activeTags_1150_);
v___x_1355_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
lean_object* v_is_1357_; 
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 0, v___x_1355_);
v_is_1357_ = v___x_1146_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v___x_1355_);
lean_ctor_set(v_reuseFailAlloc_1366_, 1, v_tail_1144_);
v_is_1357_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
lean_object* v___x_1358_; uint8_t v___x_1359_; 
v___x_1358_ = lean_box(1);
v___x_1359_ = l_Std_Format_instBEqFlattenAllowability_beq(v_fla_1142_, v___x_1358_);
if (v___x_1359_ == 0)
{
lean_object* v___x_1360_; lean_object* v_fst_1361_; lean_object* v_snd_1362_; 
lean_dec(v_fla_1142_);
v___x_1360_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4(v_flb_1143_, v_is_1357_, v_tail_1138_, v_w_1128_, v___x_1349_);
v_fst_1361_ = lean_ctor_get(v___x_1360_, 0);
lean_inc(v_fst_1361_);
v_snd_1362_ = lean_ctor_get(v___x_1360_, 1);
lean_inc(v_snd_1362_);
lean_dec_ref(v___x_1360_);
v_x_1129_ = v_fst_1361_;
v___y_1130_ = v_snd_1362_;
goto _start;
}
else
{
lean_object* v___x_1364_; 
v___x_1364_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1142_, v_flb_1143_, v_tail_1138_, v_is_1357_);
v_x_1129_ = v___x_1364_;
v___y_1130_ = v___x_1349_;
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
lean_object* v_out_1372_; lean_object* v_tagStack_1373_; lean_object* v_column_1374_; lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1390_; 
lean_dec(v_p_1333_);
lean_del_object(v___x_1330_);
lean_del_object(v___x_1152_);
lean_dec(v_indent_1149_);
lean_del_object(v___x_1146_);
v_out_1372_ = lean_ctor_get(v___y_1130_, 0);
v_tagStack_1373_ = lean_ctor_get(v___y_1130_, 1);
v_column_1374_ = lean_ctor_get(v___y_1130_, 2);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___y_1130_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1376_ = v___y_1130_;
v_isShared_1377_ = v_isSharedCheck_1390_;
goto v_resetjp_1375_;
}
else
{
lean_inc(v_column_1374_);
lean_inc(v_tagStack_1373_);
lean_inc(v_out_1372_);
lean_dec(v___y_1130_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1390_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v_out_x27_1384_; lean_object* v___x_1386_; 
lean_inc_ref(v_a_1328_);
v___x_1378_ = l_Lean_Widget_TaggedText_appendText___redArg(v_a_1328_, v_out_1372_);
v___x_1379_ = lean_string_length(v_a_1328_);
lean_dec_ref(v_a_1328_);
v___x_1380_ = lean_nat_add(v_column_1374_, v___x_1379_);
lean_dec(v_column_1374_);
v___x_1381_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1150_);
lean_inc(v_tagStack_1373_);
v___x_1382_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1373_, v_tagStack_1373_, v_activeTags_1150_, v___x_1381_);
v___x_1383_ = l_List_drop___redArg(v_activeTags_1150_, v_tagStack_1373_);
lean_dec(v_tagStack_1373_);
v_out_x27_1384_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__2(v___x_1378_, v___x_1382_);
if (v_isShared_1377_ == 0)
{
lean_ctor_set(v___x_1376_, 2, v___x_1380_);
lean_ctor_set(v___x_1376_, 1, v___x_1383_);
lean_ctor_set(v___x_1376_, 0, v_out_x27_1384_);
v___x_1386_ = v___x_1376_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_out_x27_1384_);
lean_ctor_set(v_reuseFailAlloc_1389_, 1, v___x_1383_);
lean_ctor_set(v_reuseFailAlloc_1389_, 2, v___x_1380_);
v___x_1386_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
lean_object* v___x_1387_; 
v___x_1387_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1142_, v_flb_1143_, v_tail_1138_, v_tail_1144_);
v_x_1129_ = v___x_1387_;
v___y_1130_ = v___x_1386_;
goto _start;
}
}
}
}
}
case 4:
{
lean_object* v_indent_1392_; lean_object* v_f_1393_; lean_object* v___x_1394_; lean_object* v___x_1396_; 
lean_del_object(v___x_1140_);
v_indent_1392_ = lean_ctor_get(v_f_1148_, 0);
lean_inc(v_indent_1392_);
v_f_1393_ = lean_ctor_get(v_f_1148_, 1);
lean_inc(v_f_1393_);
lean_dec_ref_known(v_f_1148_, 2);
v___x_1394_ = lean_int_add(v_indent_1149_, v_indent_1392_);
lean_dec(v_indent_1392_);
lean_dec(v_indent_1149_);
if (v_isShared_1153_ == 0)
{
lean_ctor_set(v___x_1152_, 1, v___x_1394_);
lean_ctor_set(v___x_1152_, 0, v_f_1393_);
v___x_1396_ = v___x_1152_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v_f_1393_);
lean_ctor_set(v_reuseFailAlloc_1402_, 1, v___x_1394_);
lean_ctor_set(v_reuseFailAlloc_1402_, 2, v_activeTags_1150_);
v___x_1396_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
lean_object* v___x_1398_; 
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 0, v___x_1396_);
v___x_1398_ = v___x_1146_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v___x_1396_);
lean_ctor_set(v_reuseFailAlloc_1401_, 1, v_tail_1144_);
v___x_1398_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
lean_object* v___x_1399_; 
v___x_1399_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1142_, v_flb_1143_, v_tail_1138_, v___x_1398_);
v_x_1129_ = v___x_1399_;
goto _start;
}
}
}
case 5:
{
lean_object* v_a_1403_; lean_object* v_a_1404_; lean_object* v___x_1405_; lean_object* v___x_1407_; 
v_a_1403_ = lean_ctor_get(v_f_1148_, 0);
lean_inc(v_a_1403_);
v_a_1404_ = lean_ctor_get(v_f_1148_, 1);
lean_inc(v_a_1404_);
lean_dec_ref_known(v_f_1148_, 2);
v___x_1405_ = lean_unsigned_to_nat(0u);
lean_inc(v_indent_1149_);
if (v_isShared_1153_ == 0)
{
lean_ctor_set(v___x_1152_, 2, v___x_1405_);
lean_ctor_set(v___x_1152_, 0, v_a_1403_);
v___x_1407_ = v___x_1152_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v_a_1403_);
lean_ctor_set(v_reuseFailAlloc_1417_, 1, v_indent_1149_);
lean_ctor_set(v_reuseFailAlloc_1417_, 2, v___x_1405_);
v___x_1407_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
lean_object* v___x_1408_; lean_object* v___x_1410_; 
v___x_1408_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1408_, 0, v_a_1404_);
lean_ctor_set(v___x_1408_, 1, v_indent_1149_);
lean_ctor_set(v___x_1408_, 2, v_activeTags_1150_);
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 0, v___x_1408_);
v___x_1410_ = v___x_1146_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v___x_1408_);
lean_ctor_set(v_reuseFailAlloc_1416_, 1, v_tail_1144_);
v___x_1410_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
lean_object* v___x_1412_; 
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 1, v___x_1410_);
lean_ctor_set(v___x_1140_, 0, v___x_1407_);
v___x_1412_ = v___x_1140_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v___x_1407_);
lean_ctor_set(v_reuseFailAlloc_1415_, 1, v___x_1410_);
v___x_1412_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
lean_object* v___x_1413_; 
v___x_1413_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1142_, v_flb_1143_, v_tail_1138_, v___x_1412_);
v_x_1129_ = v___x_1413_;
goto _start;
}
}
}
}
case 6:
{
lean_object* v_a_1418_; uint8_t v_behavior_1419_; uint8_t v___x_1420_; 
lean_del_object(v___x_1140_);
v_a_1418_ = lean_ctor_get(v_f_1148_, 0);
lean_inc(v_a_1418_);
v_behavior_1419_ = lean_ctor_get_uint8(v_f_1148_, sizeof(void*)*1);
lean_dec_ref_known(v_f_1148_, 1);
v___x_1420_ = l_Std_Format_FlattenAllowability_shouldFlatten(v_fla_1142_);
if (v___x_1420_ == 0)
{
lean_object* v___x_1422_; 
if (v_isShared_1153_ == 0)
{
lean_ctor_set(v___x_1152_, 0, v_a_1418_);
v___x_1422_ = v___x_1152_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_a_1418_);
lean_ctor_set(v_reuseFailAlloc_1432_, 1, v_indent_1149_);
lean_ctor_set(v_reuseFailAlloc_1432_, 2, v_activeTags_1150_);
v___x_1422_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
lean_object* v___x_1423_; lean_object* v___x_1425_; 
v___x_1423_ = lean_box(0);
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 1, v___x_1423_);
lean_ctor_set(v___x_1146_, 0, v___x_1422_);
v___x_1425_ = v___x_1146_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v___x_1422_);
lean_ctor_set(v_reuseFailAlloc_1431_, 1, v___x_1423_);
v___x_1425_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v_fst_1428_; lean_object* v_snd_1429_; 
v___x_1426_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1142_, v_flb_1143_, v_tail_1138_, v_tail_1144_);
v___x_1427_ = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__4(v_behavior_1419_, v___x_1425_, v___x_1426_, v_w_1128_, v___y_1130_);
v_fst_1428_ = lean_ctor_get(v___x_1427_, 0);
lean_inc(v_fst_1428_);
v_snd_1429_ = lean_ctor_get(v___x_1427_, 1);
lean_inc(v_snd_1429_);
lean_dec_ref(v___x_1427_);
v_x_1129_ = v_fst_1428_;
v___y_1130_ = v_snd_1429_;
goto _start;
}
}
}
else
{
lean_object* v___x_1434_; 
if (v_isShared_1153_ == 0)
{
lean_ctor_set(v___x_1152_, 0, v_a_1418_);
v___x_1434_ = v___x_1152_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v_a_1418_);
lean_ctor_set(v_reuseFailAlloc_1440_, 1, v_indent_1149_);
lean_ctor_set(v_reuseFailAlloc_1440_, 2, v_activeTags_1150_);
v___x_1434_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
lean_object* v___x_1436_; 
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 0, v___x_1434_);
v___x_1436_ = v___x_1146_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v___x_1434_);
lean_ctor_set(v_reuseFailAlloc_1439_, 1, v_tail_1144_);
v___x_1436_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
lean_object* v___x_1437_; 
v___x_1437_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1142_, v_flb_1143_, v_tail_1138_, v___x_1436_);
v_x_1129_ = v___x_1437_;
goto _start;
}
}
}
}
default: 
{
lean_object* v_a_1441_; lean_object* v_a_1442_; lean_object* v_out_1443_; lean_object* v_tagStack_1444_; lean_object* v_column_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1468_; 
v_a_1441_ = lean_ctor_get(v_f_1148_, 0);
lean_inc(v_a_1441_);
v_a_1442_ = lean_ctor_get(v_f_1148_, 1);
lean_inc(v_a_1442_);
lean_dec_ref_known(v_f_1148_, 2);
v_out_1443_ = lean_ctor_get(v___y_1130_, 0);
v_tagStack_1444_ = lean_ctor_get(v___y_1130_, 1);
v_column_1445_ = lean_ctor_get(v___y_1130_, 2);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___y_1130_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1447_ = v___y_1130_;
v_isShared_1448_ = v_isSharedCheck_1468_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_column_1445_);
lean_inc(v_tagStack_1444_);
lean_inc(v_out_1443_);
lean_dec(v___y_1130_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1468_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1453_; 
v___x_1449_ = ((lean_object*)(l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__0));
lean_inc(v_column_1445_);
v___x_1450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1450_, 0, v_column_1445_);
lean_ctor_set(v___x_1450_, 1, v_out_1443_);
v___x_1451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1451_, 0, v_a_1441_);
lean_ctor_set(v___x_1451_, 1, v___x_1450_);
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 1, v_tagStack_1444_);
lean_ctor_set(v___x_1146_, 0, v___x_1451_);
v___x_1453_ = v___x_1146_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v___x_1451_);
lean_ctor_set(v_reuseFailAlloc_1467_, 1, v_tagStack_1444_);
v___x_1453_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
lean_object* v___x_1455_; 
if (v_isShared_1448_ == 0)
{
lean_ctor_set(v___x_1447_, 1, v___x_1453_);
lean_ctor_set(v___x_1447_, 0, v___x_1449_);
v___x_1455_ = v___x_1447_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v___x_1449_);
lean_ctor_set(v_reuseFailAlloc_1466_, 1, v___x_1453_);
lean_ctor_set(v_reuseFailAlloc_1466_, 2, v_column_1445_);
v___x_1455_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1459_; 
v___x_1456_ = lean_unsigned_to_nat(1u);
v___x_1457_ = lean_nat_add(v_activeTags_1150_, v___x_1456_);
lean_dec(v_activeTags_1150_);
if (v_isShared_1153_ == 0)
{
lean_ctor_set(v___x_1152_, 2, v___x_1457_);
lean_ctor_set(v___x_1152_, 0, v_a_1442_);
v___x_1459_ = v___x_1152_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v_a_1442_);
lean_ctor_set(v_reuseFailAlloc_1465_, 1, v_indent_1149_);
lean_ctor_set(v_reuseFailAlloc_1465_, 2, v___x_1457_);
v___x_1459_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
lean_object* v___x_1461_; 
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 1, v_tail_1144_);
lean_ctor_set(v___x_1140_, 0, v___x_1459_);
v___x_1461_ = v___x_1140_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v___x_1459_);
lean_ctor_set(v_reuseFailAlloc_1464_, 1, v_tail_1144_);
v___x_1461_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
lean_object* v___x_1462_; 
v___x_1462_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1142_, v_flb_1143_, v_tail_1138_, v___x_1461_);
v_x_1129_ = v___x_1462_;
v___y_1130_ = v___x_1455_;
goto _start;
}
}
}
}
}
}
}
v___jp_1154_:
{
lean_object* v_out_1155_; lean_object* v_tagStack_1156_; lean_object* v_column_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1193_; 
v_out_1155_ = lean_ctor_get(v___y_1130_, 0);
v_tagStack_1156_ = lean_ctor_get(v___y_1130_, 1);
v_column_1157_ = lean_ctor_get(v___y_1130_, 2);
v_isSharedCheck_1193_ = !lean_is_exclusive(v___y_1130_);
if (v_isSharedCheck_1193_ == 0)
{
v___x_1159_ = v___y_1130_;
v_isShared_1160_ = v_isSharedCheck_1193_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_column_1157_);
lean_inc(v_tagStack_1156_);
lean_inc(v_out_1155_);
lean_dec(v___y_1130_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1193_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1161_; uint8_t v___x_1162_; 
lean_inc(v_column_1157_);
v___x_1161_ = lean_nat_to_int(v_column_1157_);
v___x_1162_ = lean_int_dec_lt(v___x_1161_, v_indent_1149_);
if (v___x_1162_ == 0)
{
lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v_out_x27_1170_; lean_object* v___x_1172_; 
lean_dec(v___x_1161_);
lean_dec(v_column_1157_);
v___x_1163_ = l_Int_toNat(v_indent_1149_);
lean_dec(v_indent_1149_);
v___x_1164_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__0));
lean_inc(v___x_1163_);
v___x_1165_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__3(v___x_1163_, v___x_1164_);
v___x_1166_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_1165_, v_out_1155_);
v___x_1167_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1150_);
lean_inc(v_tagStack_1156_);
v___x_1168_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1156_, v_tagStack_1156_, v_activeTags_1150_, v___x_1167_);
v___x_1169_ = l_List_drop___redArg(v_activeTags_1150_, v_tagStack_1156_);
lean_dec(v_tagStack_1156_);
v_out_x27_1170_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__2(v___x_1166_, v___x_1168_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 2, v___x_1163_);
lean_ctor_set(v___x_1159_, 1, v___x_1169_);
lean_ctor_set(v___x_1159_, 0, v_out_x27_1170_);
v___x_1172_ = v___x_1159_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_out_x27_1170_);
lean_ctor_set(v_reuseFailAlloc_1175_, 1, v___x_1169_);
lean_ctor_set(v_reuseFailAlloc_1175_, 2, v___x_1163_);
v___x_1172_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
lean_object* v___x_1173_; 
v___x_1173_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1142_, v_flb_1143_, v_tail_1138_, v_tail_1144_);
v_x_1129_ = v___x_1173_;
v___y_1130_ = v___x_1172_;
goto _start;
}
}
else
{
lean_object* v___x_1176_; uint32_t v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v_out_x27_1187_; lean_object* v___x_1189_; 
v___x_1176_ = ((lean_object*)(l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__0));
v___x_1177_ = 32;
v___x_1178_ = lean_int_sub(v_indent_1149_, v___x_1161_);
lean_dec(v___x_1161_);
lean_dec(v_indent_1149_);
v___x_1179_ = l_Int_toNat(v___x_1178_);
lean_dec(v___x_1178_);
v___x_1180_ = lean_string_pushn(v___x_1176_, v___x_1177_, v___x_1179_);
lean_inc_ref(v___x_1180_);
v___x_1181_ = l_Lean_Widget_TaggedText_appendText___redArg(v___x_1180_, v_out_1155_);
v___x_1182_ = lean_string_length(v___x_1180_);
lean_dec_ref(v___x_1180_);
v___x_1183_ = lean_nat_add(v_column_1157_, v___x_1182_);
lean_dec(v_column_1157_);
v___x_1184_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1150_);
lean_inc(v_tagStack_1156_);
v___x_1185_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1156_, v_tagStack_1156_, v_activeTags_1150_, v___x_1184_);
v___x_1186_ = l_List_drop___redArg(v_activeTags_1150_, v_tagStack_1156_);
lean_dec(v_tagStack_1156_);
v_out_x27_1187_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__2(v___x_1181_, v___x_1185_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 2, v___x_1183_);
lean_ctor_set(v___x_1159_, 1, v___x_1186_);
lean_ctor_set(v___x_1159_, 0, v_out_x27_1187_);
v___x_1189_ = v___x_1159_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_out_x27_1187_);
lean_ctor_set(v_reuseFailAlloc_1192_, 1, v___x_1186_);
lean_ctor_set(v_reuseFailAlloc_1192_, 2, v___x_1183_);
v___x_1189_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
lean_object* v___x_1190_; 
v___x_1190_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1142_, v_flb_1143_, v_tail_1138_, v_tail_1144_);
v_x_1129_ = v___x_1190_;
v___y_1130_ = v___x_1189_;
goto _start;
}
}
}
}
v___jp_1194_:
{
lean_object* v_out_1195_; lean_object* v_tagStack_1196_; lean_object* v_column_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1210_; 
v_out_1195_ = lean_ctor_get(v___y_1130_, 0);
v_tagStack_1196_ = lean_ctor_get(v___y_1130_, 1);
v_column_1197_ = lean_ctor_get(v___y_1130_, 2);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___y_1130_);
if (v_isSharedCheck_1210_ == 0)
{
v___x_1199_ = v___y_1130_;
v_isShared_1200_ = v_isSharedCheck_1210_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_column_1197_);
lean_inc(v_tagStack_1196_);
lean_inc(v_out_1195_);
lean_dec(v___y_1130_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1210_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v_out_x27_1204_; lean_object* v___x_1206_; 
v___x_1201_ = ((lean_object*)(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__6___closed__0));
lean_inc(v_activeTags_1150_);
lean_inc(v_tagStack_1196_);
v___x_1202_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_tagStack_1196_, v_tagStack_1196_, v_activeTags_1150_, v___x_1201_);
v___x_1203_ = l_List_drop___redArg(v_activeTags_1150_, v_tagStack_1196_);
lean_dec(v_tagStack_1196_);
v_out_x27_1204_ = l_List_foldl___at___00__private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1_spec__2(v_out_1195_, v___x_1202_);
if (v_isShared_1200_ == 0)
{
lean_ctor_set(v___x_1199_, 1, v___x_1203_);
lean_ctor_set(v___x_1199_, 0, v_out_x27_1204_);
v___x_1206_ = v___x_1199_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v_out_x27_1204_);
lean_ctor_set(v_reuseFailAlloc_1209_, 1, v___x_1203_);
lean_ctor_set(v_reuseFailAlloc_1209_, 2, v_column_1197_);
v___x_1206_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
lean_object* v___x_1207_; 
v___x_1207_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___lam__0(v_fla_1142_, v_flb_1143_, v_tail_1138_, v_tail_1144_);
v_x_1129_ = v___x_1207_;
v___y_1130_ = v___x_1206_;
goto _start;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1___boxed(lean_object* v_w_1474_, lean_object* v_x_1475_, lean_object* v___y_1476_){
_start:
{
lean_object* v_res_1477_; 
v_res_1477_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1(v_w_1474_, v_x_1475_, v___y_1476_);
lean_dec(v_w_1474_);
return v_res_1477_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0(lean_object* v_f_1478_, lean_object* v_w_1479_, lean_object* v_indent_1480_, lean_object* v___y_1481_){
_start:
{
lean_object* v___x_1482_; uint8_t v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___x_1482_ = lean_box(1);
v___x_1483_ = 0;
v___x_1484_ = lean_nat_to_int(v_indent_1480_);
v___x_1485_ = lean_unsigned_to_nat(0u);
v___x_1486_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1486_, 0, v_f_1478_);
lean_ctor_set(v___x_1486_, 1, v___x_1484_);
lean_ctor_set(v___x_1486_, 2, v___x_1485_);
v___x_1487_ = lean_box(0);
v___x_1488_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1488_, 0, v___x_1486_);
lean_ctor_set(v___x_1488_, 1, v___x_1487_);
v___x_1489_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1489_, 0, v___x_1482_);
lean_ctor_set(v___x_1489_, 1, v___x_1488_);
lean_ctor_set_uint8(v___x_1489_, sizeof(void*)*2, v___x_1483_);
v___x_1490_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1490_, 0, v___x_1489_);
lean_ctor_set(v___x_1490_, 1, v___x_1487_);
v___x_1491_ = l___private_Init_Data_Format_Basic_0__Std_Format_be___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__1(v_w_1479_, v___x_1490_, v___y_1481_);
return v___x_1491_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0___boxed(lean_object* v_f_1492_, lean_object* v_w_1493_, lean_object* v_indent_1494_, lean_object* v___y_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0(v_f_1492_, v_w_1493_, v_indent_1494_, v___y_1495_);
lean_dec(v_w_1493_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_prettyTagged(lean_object* v_f_1497_, lean_object* v_indent_1498_, lean_object* v_w_1499_){
_start:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v_snd_1502_; lean_object* v_out_1503_; 
v___x_1500_ = ((lean_object*)(l_Lean_Widget_TaggedText_instInhabitedTaggedState_default___closed__1));
v___x_1501_ = l_Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0(v_f_1497_, v_w_1499_, v_indent_1498_, v___x_1500_);
v_snd_1502_ = lean_ctor_get(v___x_1501_, 1);
lean_inc(v_snd_1502_);
lean_dec_ref(v___x_1501_);
v_out_1503_ = lean_ctor_get(v_snd_1502_, 0);
lean_inc_ref(v_out_1503_);
lean_dec(v_snd_1502_);
return v_out_1503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_prettyTagged___boxed(lean_object* v_f_1504_, lean_object* v_indent_1505_, lean_object* v_w_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_Lean_Widget_TaggedText_prettyTagged(v_f_1504_, v_indent_1505_, v_w_1506_);
lean_dec(v_w_1506_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Format_prettyM___at___00Lean_Widget_TaggedText_prettyTagged_spec__0_spec__0(lean_object* v_a_1508_){
_start:
{
lean_object* v___x_1509_; 
v___x_1509_ = lean_nat_to_int(v_a_1508_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_stripTags_go___redArg(lean_object* v_acc_1510_, lean_object* v_a_1511_){
_start:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; uint8_t v___x_1514_; 
v___x_1512_ = lean_array_get_size(v_a_1511_);
v___x_1513_ = lean_unsigned_to_nat(0u);
v___x_1514_ = lean_nat_dec_eq(v___x_1512_, v___x_1513_);
if (v___x_1514_ == 0)
{
lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; 
v___x_1515_ = lean_obj_once(&l_Lean_Widget_instInhabitedTaggedText_default___closed__0, &l_Lean_Widget_instInhabitedTaggedText_default___closed__0_once, _init_l_Lean_Widget_instInhabitedTaggedText_default___closed__0);
v___x_1516_ = lean_unsigned_to_nat(1u);
v___x_1517_ = lean_nat_sub(v___x_1512_, v___x_1516_);
v___x_1518_ = lean_array_get_borrowed(v___x_1515_, v_a_1511_, v___x_1517_);
switch(lean_obj_tag(v___x_1518_))
{
case 0:
{
lean_object* v_a_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; 
lean_dec(v___x_1517_);
v_a_1519_ = lean_ctor_get(v___x_1518_, 0);
v___x_1520_ = lean_string_append(v_acc_1510_, v_a_1519_);
v___x_1521_ = lean_array_pop(v_a_1511_);
v_acc_1510_ = v___x_1520_;
v_a_1511_ = v___x_1521_;
goto _start;
}
case 1:
{
lean_object* v_a_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
lean_dec(v___x_1517_);
v_a_1523_ = lean_ctor_get(v___x_1518_, 0);
lean_inc_ref(v_a_1523_);
v___x_1524_ = lean_array_pop(v_a_1511_);
v___x_1525_ = l_Array_reverse___redArg(v_a_1523_);
v___x_1526_ = l_Array_append___redArg(v___x_1524_, v___x_1525_);
lean_dec_ref(v___x_1525_);
v_a_1511_ = v___x_1526_;
goto _start;
}
default: 
{
lean_object* v_a_1528_; lean_object* v___x_1529_; 
v_a_1528_ = lean_ctor_get(v___x_1518_, 1);
lean_inc_ref(v_a_1528_);
v___x_1529_ = lean_array_set(v_a_1511_, v___x_1517_, v_a_1528_);
lean_dec(v___x_1517_);
v_a_1511_ = v___x_1529_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_a_1511_);
return v_acc_1510_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_stripTags_go(lean_object* v_00_u03b1_1531_, lean_object* v_acc_1532_, lean_object* v_a_1533_){
_start:
{
lean_object* v___x_1534_; 
v___x_1534_ = l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_stripTags_go___redArg(v_acc_1532_, v_a_1533_);
return v___x_1534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_stripTags___redArg(lean_object* v_tt_1535_){
_start:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1536_ = ((lean_object*)(l_Lean_Widget_instInhabitedTaggedText_default___redArg___closed__0));
v___x_1537_ = lean_unsigned_to_nat(1u);
v___x_1538_ = lean_mk_empty_array_with_capacity(v___x_1537_);
v___x_1539_ = lean_array_push(v___x_1538_, v_tt_1535_);
v___x_1540_ = l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_stripTags_go___redArg(v___x_1536_, v___x_1539_);
return v___x_1540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_stripTags(lean_object* v_00_u03b1_1541_, lean_object* v_tt_1542_){
_start:
{
lean_object* v___x_1543_; 
v___x_1543_ = l_Lean_Widget_TaggedText_stripTags___redArg(v_tt_1542_);
return v___x_1543_;
}
}
lean_object* runtime_initialize_Lean_Server_Rpc_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Widget_TaggedText(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Server_Rpc_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1___boxed__const__1 = _init_l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1___boxed__const__1();
lean_mark_persistent(l___private_Lean_Widget_TaggedText_0__Lean_Widget_TaggedText_instMonadPrettyFormatStateMTaggedState___lam__2___closed__1___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Widget_TaggedText(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Server_Rpc_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Widget_TaggedText(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Server_Rpc_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Widget_TaggedText(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Widget_TaggedText(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Widget_TaggedText(builtin);
}
#ifdef __cplusplus
}
#endif
