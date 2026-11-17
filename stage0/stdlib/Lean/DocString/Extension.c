// Lean compiler output
// Module: Lean.DocString.Extension
// Imports: public import Lean.DeclarationRange public import Lean.DocString.Types public import Lean.DocString.DeferredCheck public import Init.Data.String.Extra public import Init.Data.String.TakeDrop public import Init.Data.String.Search public import Init.Data.String.Length import Init.Omega import Lean.PrivateName
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
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_instReprDeclarationRange_repr___redArg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Lean_Doc_instReprMathMode_repr(uint8_t, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_instBEqOption_beq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_erase___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_String_removeLeadingSpaces(lean_object*);
lean_object* l_Lean_Environment_getModuleIdx_x3f(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArray_default___redArg();
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedDeclarationRange_default;
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* l_Array_repr___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MapDeclarationExtension_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_custom_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_custom_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_deferred_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_deferred_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprElabInline___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "ElabInline.custom"};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__0 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__1 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__2 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__2_value;
static const lean_string_object l_Lean_instReprElabInline___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "(.mk "};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__3 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__3_value)}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__4 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__2_value),((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__4_value)}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__5 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__5_value;
static const lean_string_object l_Lean_instReprElabInline___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " _)"};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__6 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__6_value)}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__7 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__7_value;
static const lean_string_object l_Lean_instReprElabInline___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "ElabInline.deferred"};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__8 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__8_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__8_value)}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__9 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__9_value;
static const lean_ctor_object l_Lean_instReprElabInline___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprElabInline___lam__0___closed__10 = (const lean_object*)&l_Lean_instReprElabInline___lam__0___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_instReprElabInline___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprElabInline___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprElabInline___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprElabInline___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprElabInline___closed__0 = (const lean_object*)&l_Lean_instReprElabInline___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprElabInline = (const lean_object*)&l_Lean_instReprElabInline___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabBlock_custom_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabBlock_custom_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabBlock_deferred_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabBlock_deferred_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprElabBlock___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ElabBlock.custom"};
static const lean_object* l_Lean_instReprElabBlock___lam__0___closed__0 = (const lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instReprElabBlock___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instReprElabBlock___lam__0___closed__1 = (const lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_instReprElabBlock___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprElabBlock___lam__0___closed__2 = (const lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_instReprElabBlock___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__2_value),((lean_object*)&l_Lean_instReprElabInline___lam__0___closed__4_value)}};
static const lean_object* l_Lean_instReprElabBlock___lam__0___closed__3 = (const lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__3_value;
static const lean_string_object l_Lean_instReprElabBlock___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ElabBlock.deferred"};
static const lean_object* l_Lean_instReprElabBlock___lam__0___closed__4 = (const lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_instReprElabBlock___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__4_value)}};
static const lean_object* l_Lean_instReprElabBlock___lam__0___closed__5 = (const lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__5_value;
static const lean_ctor_object l_Lean_instReprElabBlock___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprElabBlock___lam__0___closed__6 = (const lean_object*)&l_Lean_instReprElabBlock___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_instReprElabBlock___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprElabBlock___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprElabBlock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprElabBlock___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprElabBlock___closed__0 = (const lean_object*)&l_Lean_instReprElabBlock___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprElabBlock = (const lean_object*)&l_Lean_instReprElabBlock___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_Inline_custom___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Inline_custom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Inline_deferred(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Block_custom___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Block_custom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Block_deferred(lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedVersoDocString_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedVersoDocString_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedVersoDocString_default___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedVersoDocString_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedVersoDocString_default___closed__0_value),((lean_object*)&l_Lean_instInhabitedVersoDocString_default___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedVersoDocString_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedVersoDocString_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedVersoDocString_default = (const lean_object*)&l_Lean_instInhabitedVersoDocString_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedVersoDocString = (const lean_object*)&l_Lean_instInhabitedVersoDocString_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "doc"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "verso"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(146, 8, 133, 236, 68, 139, 240, 234)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(153, 72, 77, 160, 222, 42, 129, 126)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "whether to use Verso syntax in docstrings"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(3, 233, 138, 33, 66, 196, 218, 104)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 198, 182, 78, 108, 58, 220, 60)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_doc_verso;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(146, 8, 133, 236, 68, 139, 240, 234)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(153, 72, 77, 160, 222, 42, 129, 126)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(237, 134, 110, 210, 89, 29, 102, 103)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "whether to use Verso syntax in module docstrings (falls back to `doc.verso` if not set)"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(3, 233, 138, 33, 66, 196, 218, 104)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 198, 182, 78, 108, 58, 220, 60)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(228, 159, 139, 71, 221, 243, 206, 45)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_doc_verso_module;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1174734686____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1174734686____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_builtinDocStrings;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "docStringExt"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(220, 176, 252, 112, 223, 70, 141, 135)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_docStringExt;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "DocString"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(205, 151, 103, 225, 164, 122, 118, 127)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Extension"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(231, 24, 255, 250, 40, 109, 111, 101)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__8_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(90, 73, 37, 46, 133, 14, 26, 13)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__8_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__8_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__9_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__8_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(251, 17, 71, 28, 211, 27, 155, 40)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__9_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__9_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inheritDocStringExt"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__11_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__9_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__10_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(124, 170, 221, 64, 52, 198, 31, 56)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__11_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__11_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__12_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__12_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__12_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_797151674____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_797151674____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_builtinVersoDocStrings;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "versoDocStringExt"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(75, 29, 13, 95, 132, 33, 43, 178)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringExt;
LEAN_EXPORT lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addBuiltinDocString___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeBuiltinDocString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeBuiltinDocString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBuiltinVersoDocStrings();
LEAN_EXPORT lean_object* l_Lean_getBuiltinVersoDocStrings___boxed(lean_object*);
static const lean_string_object l_Lean_throwIfHasDocString___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "invalid doc string, declaration `"};
static const lean_object* l_Lean_throwIfHasDocString___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_throwIfHasDocString___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_throwIfHasDocString___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwIfHasDocString___redArg___lam__0___closed__1;
static const lean_string_object l_Lean_throwIfHasDocString___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "` already has one"};
static const lean_object* l_Lean_throwIfHasDocString___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_throwIfHasDocString___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_throwIfHasDocString___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwIfHasDocString___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwIfHasDocString___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwIfHasDocString___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwIfHasDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addDocStringCore___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is in an imported module"};
static const lean_object* l_Lean_addDocStringCore___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_addDocStringCore___redArg___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_addDocStringCore___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addDocStringCore___redArg___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_removeDocStringCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_removeDocStringCore___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_removeDocStringCore___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_removeDocStringCore___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "invalid doc string removal, declaration `"};
static const lean_object* l_Lean_removeDocStringCore___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_removeDocStringCore___redArg___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_removeDocStringCore___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_removeDocStringCore___redArg___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringCore_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findInternalDocString_x3f(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_findInternalDocString_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__6(lean_object*, lean_object*);
static const lean_string_object l_Lean_addInheritedDocString___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "invalid `[inherit_doc]` attribute, cycle detected"};
static const lean_object* l_Lean_addInheritedDocString___redArg___lam__7___closed__0 = (const lean_object*)&l_Lean_addInheritedDocString___redArg___lam__7___closed__0_value;
static lean_once_cell_t l_Lean_addInheritedDocString___redArg___lam__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addInheritedDocString___redArg___lam__7___closed__1;
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addInheritedDocString___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "invalid `[inherit_doc]` attribute, declaration `"};
static const lean_object* l_Lean_addInheritedDocString___redArg___lam__9___closed__0 = (const lean_object*)&l_Lean_addInheritedDocString___redArg___lam__9___closed__0_value;
static lean_once_cell_t l_Lean_addInheritedDocString___redArg___lam__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addInheritedDocString___redArg___lam__9___closed__1;
static const lean_string_object l_Lean_addInheritedDocString___redArg___lam__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "` already has an `[inherit_doc]` attribute"};
static const lean_object* l_Lean_addInheritedDocString___redArg___lam__9___closed__2 = (const lean_object*)&l_Lean_addInheritedDocString___redArg___lam__9___closed__2_value;
static lean_once_cell_t l_Lean_addInheritedDocString___redArg___lam__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addInheritedDocString___redArg___lam__9___closed__3;
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_addInheritedDocString___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addInheritedDocString___redArg___closed__0 = (const lean_object*)&l_Lean_addInheritedDocString___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(lean_object*);
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentArray_push___redArg, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "moduleDocExt"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__9_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(105, 198, 210, 20, 250, 243, 120, 74)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_moduleDocExt;
LEAN_EXPORT lean_object* l_Lean_addMainModuleDoc___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMainModuleDoc(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_getMainModuleDoc___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getMainModuleDoc___closed__0;
LEAN_EXPORT lean_object* l_Lean_getMainModuleDoc(lean_object*);
static lean_once_cell_t l_Lean_getModuleDoc_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getModuleDoc_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_getModuleDoc_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getModuleDoc_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_getDocStringText___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected doc string"};
static const lean_object* l_Lean_getDocStringText___redArg___closed__0 = (const lean_object*)&l_Lean_getDocStringText___redArg___closed__0_value;
static lean_once_cell_t l_Lean_getDocStringText___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getDocStringText___redArg___closed__1;
static const lean_string_object l_Lean_getDocStringText___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_getDocStringText___redArg___closed__2 = (const lean_object*)&l_Lean_getDocStringText___redArg___closed__2_value;
static const lean_string_object l_Lean_getDocStringText___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_getDocStringText___redArg___closed__3 = (const lean_object*)&l_Lean_getDocStringText___redArg___closed__3_value;
static const lean_string_object l_Lean_getDocStringText___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "commentBody"};
static const lean_object* l_Lean_getDocStringText___redArg___closed__4 = (const lean_object*)&l_Lean_getDocStringText___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDocStringText(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isVersoDocComment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "versoCommentBody"};
static const lean_object* l_Lean_isVersoDocComment___closed__0 = (const lean_object*)&l_Lean_isVersoDocComment___closed__0_value;
static const lean_ctor_object l_Lean_isVersoDocComment___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_isVersoDocComment___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isVersoDocComment___closed__1_value_aux_0),((lean_object*)&l_Lean_getDocStringText___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_isVersoDocComment___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isVersoDocComment___closed__1_value_aux_1),((lean_object*)&l_Lean_getDocStringText___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_isVersoDocComment___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isVersoDocComment___closed__1_value_aux_2),((lean_object*)&l_Lean_isVersoDocComment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 150, 193, 173, 39, 149, 4, 235)}};
static const lean_object* l_Lean_isVersoDocComment___closed__1 = (const lean_object*)&l_Lean_isVersoDocComment___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_isVersoDocComment(lean_object*);
LEAN_EXPORT lean_object* l_Lean_isVersoDocComment___boxed(lean_object*);
static const lean_array_object l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0 = (const lean_object*)&l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0_value;
static lean_once_cell_t l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instInhabitedSnippet_default;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instInhabitedSnippet;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__2(lean_object*);
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Inline.text"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__0_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__0_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__1 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__1_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__2 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__2_value;
static lean_once_cell_t l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3;
static lean_once_cell_t l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Inline.emph"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__5 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__5_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__5_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__6 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__6_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__7 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__7_value;
static const lean_string_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__1 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5_spec__10_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__0 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__0_value;
static lean_once_cell_t l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5;
static lean_once_cell_t l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6;
static const lean_ctor_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7_value;
static const lean_string_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__4 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__4_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8_value;
static const lean_string_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__9_value)}};
static const lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10 = (const lean_object*)&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object*);
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Inline.bold"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__8 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__8_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__8_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__9 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__9_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__10 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__10_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Inline.code"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__11 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__11_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__11_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__12 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__12_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__13 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__13_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Inline.math"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__14 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__14_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__14_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__15 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__15_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__15_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__16 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__16_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Doc.Inline.linebreak"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__17 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__17_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__17_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__18 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__18_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__18_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__19 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__19_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Inline.link"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__20 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__20_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__20_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__21 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__21_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__21_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__22 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__22_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Doc.Inline.footnote"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__23 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__23_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__23_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__24 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__24_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__24_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__25 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__25_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Doc.Inline.image"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__26 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__26_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__26_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__27 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__27_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__27_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__28 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__28_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.Doc.Inline.concat"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__29 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__29_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__29_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__30 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__30_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__30_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__31 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__31_value;
static const lean_string_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Doc.Inline.other"};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__32 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__32_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__32_value)}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__33 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__33_value;
static const lean_ctor_object l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__33_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__34 = (const lean_object*)&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__34_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2(lean_object*);
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Doc.Block.para"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__1_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Doc.Block.code"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__3_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__3_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__4_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Doc.Block.ul"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__6_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__6_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__7_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__8_value;
static const lean_string_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__4 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__4_value)}};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5_value;
static const lean_string_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "contents"};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__1_value)}};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__2_value)}};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__3 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__3_value),((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5_value)}};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__6 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1_spec__7_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(lean_object*);
static const lean_string_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__9;
static lean_once_cell_t l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10;
static const lean_ctor_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__0_value)}};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11_value;
static const lean_string_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__8 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__8_value)}};
static const lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12 = (const lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8_spec__14_spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3(lean_object*);
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Doc.Block.ol"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__9_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__9_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__10_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__10_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__11 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__11_value;
static lean_once_cell_t l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__12;
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Doc.Block.dl"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__13 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__13_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__13_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__14 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__14_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__14_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__15 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__15_value;
static const lean_string_object l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__0 = (const lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__0_value)}};
static const lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__1 = (const lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__1_value)}};
static const lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__2 = (const lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__2_value),((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5_value)}};
static const lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__3 = (const lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4;
static const lean_string_object l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "desc"};
static const lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__5 = (const lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__5_value)}};
static const lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__6 = (const lean_object*)&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11_spec__18_spec__26(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4(lean_object*);
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Doc.Block.blockquote"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__16 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__16_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__16_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__17 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__17_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__17_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__18 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__18_value;
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Doc.Block.concat"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__19 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__19_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__19_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__20 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__20_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__20_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__21 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__21_value;
static const lean_string_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Doc.Block.other"};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__22 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__22_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__22_value)}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__23 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__23_value;
static const lean_ctor_object l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__23_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__24 = (const lean_object*)&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__24_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0(lean_object*);
static const lean_string_object l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__0 = (const lean_object*)&l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__1 = (const lean_object*)&l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___boxed(lean_object*);
static const lean_string_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__0 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__0_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__1 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__1_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__2 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__2_value),((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__3 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__4;
static const lean_string_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "titleString"};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__5 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__5_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__6 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__7;
static const lean_string_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "metadata"};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__8 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__8_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__9 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__9_value;
static const lean_string_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "content"};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__10 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__10_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__11 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__11_value;
static lean_once_cell_t l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__12;
static const lean_string_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "subParts"};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__13 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__13_value;
static const lean_ctor_object l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__13_value)}};
static const lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__14 = (const lean_object*)&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__14_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31_spec__34(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31_spec__34_spec__35(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__11_spec__20(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__11(lean_object*, lean_object*);
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__0 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__0_value;
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__1 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__1_value;
static lean_once_cell_t l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__2;
static lean_once_cell_t l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__3;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__0_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__4 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__4_value;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__1_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__5 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4_spec__13_spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1(lean_object*);
static const lean_string_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__0 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__1 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__2 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__2_value),((lean_object*)&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5_value)}};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__3 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "sections"};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__4 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__5 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__5_value;
static const lean_string_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "declarationRange"};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__6 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__6_value;
static const lean_ctor_object l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__6_value)}};
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__7 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__7_value;
static lean_once_cell_t l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__8;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_VersoModuleDocs_instReprSnippet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_VersoModuleDocs_instReprSnippet_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_VersoModuleDocs_instReprSnippet___closed__0 = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_VersoModuleDocs_instReprSnippet = (const lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_VersoModuleDocs_Snippet_canNestIn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_canNestIn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_terminalNesting(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_terminalNesting___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_addBlock(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_addPart(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedVersoModuleDocs_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedVersoModuleDocs_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedVersoModuleDocs_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedVersoModuleDocs_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedVersoModuleDocs_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedVersoModuleDocs;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_terminalNesting(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_terminalNesting___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprVersoModuleDocs___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "snippets := "};
static const lean_object* l_Lean_instReprVersoModuleDocs___lam__0___closed__0 = (const lean_object*)&l_Lean_instReprVersoModuleDocs___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instReprVersoModuleDocs___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprVersoModuleDocs___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instReprVersoModuleDocs___lam__0___closed__1 = (const lean_object*)&l_Lean_instReprVersoModuleDocs___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_instReprVersoModuleDocs___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprVersoModuleDocs___lam__0___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprVersoModuleDocs___lam__0___closed__2 = (const lean_object*)&l_Lean_instReprVersoModuleDocs___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instReprVersoModuleDocs___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprVersoModuleDocs___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprVersoModuleDocs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprVersoModuleDocs___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_instReprSnippet___closed__0_value)} };
static const lean_object* l_Lean_instReprVersoModuleDocs___closed__0 = (const lean_object*)&l_Lean_instReprVersoModuleDocs___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprVersoModuleDocs = (const lean_object*)&l_Lean_instReprVersoModuleDocs___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_VersoModuleDocs_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_isEmpty___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_VersoModuleDocs_canAdd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_canAdd___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_VersoModuleDocs_add___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Can't nest this snippet here"};
static const lean_object* l_Lean_VersoModuleDocs_add___closed__0 = (const lean_object*)&l_Lean_VersoModuleDocs_add___closed__0_value;
static const lean_ctor_object l_Lean_VersoModuleDocs_add___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_add___closed__0_value)}};
static const lean_object* l_Lean_VersoModuleDocs_add___closed__1 = (const lean_object*)&l_Lean_VersoModuleDocs_add___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_VersoModuleDocs_add_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_VersoModuleDocs_add_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.DocString.Extension"};
static const lean_object* l_Lean_VersoModuleDocs_add_x21___closed__0 = (const lean_object*)&l_Lean_VersoModuleDocs_add_x21___closed__0_value;
static const lean_string_object l_Lean_VersoModuleDocs_add_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.VersoModuleDocs.add!"};
static const lean_object* l_Lean_VersoModuleDocs_add_x21___closed__1 = (const lean_object*)&l_Lean_VersoModuleDocs_add_x21___closed__1_value;
static lean_once_cell_t l_Lean_VersoModuleDocs_add_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_VersoModuleDocs_add_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_add_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_level(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_level___boxed(lean_object*);
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Can't close a section: none are open"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__0 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__1 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_closeAll(lean_object*);
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Invalid nesting: expected at most "};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__0 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " but got "};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__1 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Can't add content after sub-parts"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__0 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__1 = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_VersoModuleDocs_assemble___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0_value),((lean_object*)&l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0_value),((lean_object*)&l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0_value)}};
static const lean_object* l_Lean_VersoModuleDocs_assemble___closed__0 = (const lean_object*)&l_Lean_VersoModuleDocs_assemble___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_assemble(lean_object*);
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_assemble___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(lean_object*);
static const lean_array_object l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_VersoModuleDocs_add_x21, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "versoModuleDocExt"};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__9_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(39, 74, 101, 232, 220, 166, 152, 230)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_versoModuleDocExt;
LEAN_EXPORT lean_object* l_Lean_getMainVersoModuleDocs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVersoModuleDocs(lean_object*);
static lean_once_cell_t l_Lean_getVersoModuleDoc_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getVersoModuleDoc_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_getVersoModuleDoc_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVersoModuleDoc_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModuleDocSnippet___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoModuleDocSnippet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Can't add - incorrect nesting "};
static const lean_object* l_Lean_addVersoModuleDocSnippet___closed__0 = (const lean_object*)&l_Lean_addVersoModuleDocSnippet___closed__0_value;
static const lean_string_object l_Lean_addVersoModuleDocSnippet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addVersoModuleDocSnippet___closed__1 = (const lean_object*)&l_Lean_addVersoModuleDocSnippet___closed__1_value;
static const lean_string_object l_Lean_addVersoModuleDocSnippet___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "(expected at most "};
static const lean_object* l_Lean_addVersoModuleDocSnippet___closed__2 = (const lean_object*)&l_Lean_addVersoModuleDocSnippet___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addVersoModuleDocSnippet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_ElabInline_ctorIdx___impl(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
lean_object* v_val_7_; lean_object* v___x_8_; 
v_val_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_val_7_);
lean_dec_ref(v_t_5_);
v___x_8_ = lean_apply_1(v_k_6_, v_val_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorElim(lean_object* v_motive_9_, lean_object* v_ctorIdx_10_, lean_object* v_t_11_, lean_object* v_h_12_, lean_object* v_k_13_){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Lean_ElabInline_ctorElim___redArg(v_t_11_, v_k_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabInline_ctorElim___boxed(lean_object* v_motive_15_, lean_object* v_ctorIdx_16_, lean_object* v_t_17_, lean_object* v_h_18_, lean_object* v_k_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lean_ElabInline_ctorElim(v_motive_15_, v_ctorIdx_16_, v_t_17_, v_h_18_, v_k_19_);
lean_dec(v_ctorIdx_16_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabInline_custom_elim___redArg(lean_object* v_t_21_, lean_object* v_custom_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Lean_ElabInline_ctorElim___redArg(v_t_21_, v_custom_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabInline_custom_elim(lean_object* v_motive_24_, lean_object* v_t_25_, lean_object* v_h_26_, lean_object* v_custom_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Lean_ElabInline_ctorElim___redArg(v_t_25_, v_custom_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabInline_deferred_elim___redArg(lean_object* v_t_29_, lean_object* v_deferred_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_ElabInline_ctorElim___redArg(v_t_29_, v_deferred_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabInline_deferred_elim(lean_object* v_motive_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_deferred_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_ElabInline_ctorElim___redArg(v_t_33_, v_deferred_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprElabInline___lam__0(lean_object* v_v_58_, lean_object* v_x_59_){
_start:
{
if (lean_obj_tag(v_v_58_) == 0)
{
lean_object* v_val_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; uint8_t v___x_68_; lean_object* v___x_69_; 
v_val_60_ = lean_ctor_get(v_v_58_, 0);
lean_inc(v_val_60_);
lean_dec_ref_known(v_v_58_, 1);
v___x_61_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__5));
v___x_62_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_60_);
lean_dec(v_val_60_);
v___x_63_ = lean_unsigned_to_nat(0u);
v___x_64_ = l_Lean_Name_reprPrec(v___x_62_, v___x_63_);
v___x_65_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_61_);
lean_ctor_set(v___x_65_, 1, v___x_64_);
v___x_66_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__7));
v___x_67_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_65_);
lean_ctor_set(v___x_67_, 1, v___x_66_);
v___x_68_ = 0;
v___x_69_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_69_, 0, v___x_67_);
lean_ctor_set_uint8(v___x_69_, sizeof(void*)*1, v___x_68_);
return v___x_69_;
}
else
{
lean_object* v_index_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_82_; 
v_index_70_ = lean_ctor_get(v_v_58_, 0);
v_isSharedCheck_82_ = !lean_is_exclusive(v_v_58_);
if (v_isSharedCheck_82_ == 0)
{
v___x_72_ = v_v_58_;
v_isShared_73_ = v_isSharedCheck_82_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_index_70_);
lean_dec(v_v_58_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_82_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_77_; 
v___x_74_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__10));
v___x_75_ = l_Nat_reprFast(v_index_70_);
if (v_isShared_73_ == 0)
{
lean_ctor_set_tag(v___x_72_, 3);
lean_ctor_set(v___x_72_, 0, v___x_75_);
v___x_77_ = v___x_72_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v___x_75_);
v___x_77_ = v_reuseFailAlloc_81_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
lean_object* v___x_78_; uint8_t v___x_79_; lean_object* v___x_80_; 
v___x_78_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_74_);
lean_ctor_set(v___x_78_, 1, v___x_77_);
v___x_79_ = 0;
v___x_80_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_80_, 0, v___x_78_);
lean_ctor_set_uint8(v___x_80_, sizeof(void*)*1, v___x_79_);
return v___x_80_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprElabInline___lam__0___boxed(lean_object* v_v_83_, lean_object* v_x_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_instReprElabInline___lam__0(v_v_83_, v_x_84_);
lean_dec(v_x_84_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorIdx___impl(lean_object* v_x_88_){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lean_obj_tag_nat(v_x_88_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorIdx___impl___boxed(lean_object* v_x_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Lean_ElabBlock_ctorIdx___impl(v_x_90_);
lean_dec_ref(v_x_90_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorElim___redArg(lean_object* v_t_92_, lean_object* v_k_93_){
_start:
{
lean_object* v_val_94_; lean_object* v___x_95_; 
v_val_94_ = lean_ctor_get(v_t_92_, 0);
lean_inc(v_val_94_);
lean_dec_ref(v_t_92_);
v___x_95_ = lean_apply_1(v_k_93_, v_val_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorElim(lean_object* v_motive_96_, lean_object* v_ctorIdx_97_, lean_object* v_t_98_, lean_object* v_h_99_, lean_object* v_k_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l_Lean_ElabBlock_ctorElim___redArg(v_t_98_, v_k_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabBlock_ctorElim___boxed(lean_object* v_motive_102_, lean_object* v_ctorIdx_103_, lean_object* v_t_104_, lean_object* v_h_105_, lean_object* v_k_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Lean_ElabBlock_ctorElim(v_motive_102_, v_ctorIdx_103_, v_t_104_, v_h_105_, v_k_106_);
lean_dec(v_ctorIdx_103_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabBlock_custom_elim___redArg(lean_object* v_t_108_, lean_object* v_custom_109_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_ElabBlock_ctorElim___redArg(v_t_108_, v_custom_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabBlock_custom_elim(lean_object* v_motive_111_, lean_object* v_t_112_, lean_object* v_h_113_, lean_object* v_custom_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l_Lean_ElabBlock_ctorElim___redArg(v_t_112_, v_custom_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabBlock_deferred_elim___redArg(lean_object* v_t_116_, lean_object* v_deferred_117_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = l_Lean_ElabBlock_ctorElim___redArg(v_t_116_, v_deferred_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lean_ElabBlock_deferred_elim(lean_object* v_motive_119_, lean_object* v_t_120_, lean_object* v_h_121_, lean_object* v_deferred_122_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Lean_ElabBlock_ctorElim___redArg(v_t_120_, v_deferred_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprElabBlock___lam__0(lean_object* v_v_139_, lean_object* v_x_140_){
_start:
{
if (lean_obj_tag(v_v_139_) == 0)
{
lean_object* v_val_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; uint8_t v___x_149_; lean_object* v___x_150_; 
v_val_141_ = lean_ctor_get(v_v_139_, 0);
lean_inc(v_val_141_);
lean_dec_ref_known(v_v_139_, 1);
v___x_142_ = ((lean_object*)(l_Lean_instReprElabBlock___lam__0___closed__3));
v___x_143_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_141_);
lean_dec(v_val_141_);
v___x_144_ = lean_unsigned_to_nat(0u);
v___x_145_ = l_Lean_Name_reprPrec(v___x_143_, v___x_144_);
v___x_146_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_142_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
v___x_147_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__7));
v___x_148_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_148_, 0, v___x_146_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
v___x_149_ = 0;
v___x_150_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_150_, 0, v___x_148_);
lean_ctor_set_uint8(v___x_150_, sizeof(void*)*1, v___x_149_);
return v___x_150_;
}
else
{
lean_object* v_index_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_163_; 
v_index_151_ = lean_ctor_get(v_v_139_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v_v_139_);
if (v_isSharedCheck_163_ == 0)
{
v___x_153_ = v_v_139_;
v_isShared_154_ = v_isSharedCheck_163_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_index_151_);
lean_dec(v_v_139_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_163_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_158_; 
v___x_155_ = ((lean_object*)(l_Lean_instReprElabBlock___lam__0___closed__6));
v___x_156_ = l_Nat_reprFast(v_index_151_);
if (v_isShared_154_ == 0)
{
lean_ctor_set_tag(v___x_153_, 3);
lean_ctor_set(v___x_153_, 0, v___x_156_);
v___x_158_ = v___x_153_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v___x_156_);
v___x_158_ = v_reuseFailAlloc_162_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
lean_object* v___x_159_; uint8_t v___x_160_; lean_object* v___x_161_; 
v___x_159_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_155_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
v___x_160_ = 0;
v___x_161_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_161_, 0, v___x_159_);
lean_ctor_set_uint8(v___x_161_, sizeof(void*)*1, v___x_160_);
return v___x_161_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprElabBlock___lam__0___boxed(lean_object* v_v_164_, lean_object* v_x_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Lean_instReprElabBlock___lam__0(v_v_164_, v_x_165_);
lean_dec(v_x_165_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Inline_custom___redArg(lean_object* v_inst_169_, lean_object* v_val_170_, lean_object* v_content_171_){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_172_, 0, v_inst_169_);
lean_ctor_set(v___x_172_, 1, v_val_170_);
v___x_173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
v___x_174_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_174_, 0, v___x_173_);
lean_ctor_set(v___x_174_, 1, v_content_171_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Inline_custom(lean_object* v_00_u03b1_175_, lean_object* v_inst_176_, lean_object* v_val_177_, lean_object* v_content_178_){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_179_, 0, v_inst_176_);
lean_ctor_set(v___x_179_, 1, v_val_177_);
v___x_180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
v___x_181_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
lean_ctor_set(v___x_181_, 1, v_content_178_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Inline_deferred(lean_object* v_index_182_, lean_object* v_content_183_){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_184_, 0, v_index_182_);
v___x_185_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
lean_ctor_set(v___x_185_, 1, v_content_183_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Block_custom___redArg(lean_object* v_inst_186_, lean_object* v_val_187_, lean_object* v_content_188_){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_189_, 0, v_inst_186_);
lean_ctor_set(v___x_189_, 1, v_val_187_);
v___x_190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_190_, 0, v___x_189_);
v___x_191_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
lean_ctor_set(v___x_191_, 1, v_content_188_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Block_custom(lean_object* v_00_u03b1_192_, lean_object* v_inst_193_, lean_object* v_val_194_, lean_object* v_content_195_){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_196_, 0, v_inst_193_);
lean_ctor_set(v___x_196_, 1, v_val_194_);
v___x_197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_197_, 0, v___x_196_);
v___x_198_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
lean_ctor_set(v___x_198_, 1, v_content_195_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Block_deferred(lean_object* v_index_199_, lean_object* v_content_200_){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_201_, 0, v_index_199_);
v___x_202_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
lean_ctor_set(v___x_202_, 1, v_content_200_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0(lean_object* v_name_209_, lean_object* v_decl_210_, lean_object* v_ref_211_){
_start:
{
lean_object* v_defValue_213_; lean_object* v_descr_214_; lean_object* v_deprecation_x3f_215_; lean_object* v___x_216_; uint8_t v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v_defValue_213_ = lean_ctor_get(v_decl_210_, 0);
v_descr_214_ = lean_ctor_get(v_decl_210_, 1);
v_deprecation_x3f_215_ = lean_ctor_get(v_decl_210_, 2);
v___x_216_ = lean_alloc_ctor(1, 0, 1);
v___x_217_ = lean_unbox(v_defValue_213_);
lean_ctor_set_uint8(v___x_216_, 0, v___x_217_);
lean_inc(v_deprecation_x3f_215_);
lean_inc_ref(v_descr_214_);
lean_inc_n(v_name_209_, 2);
v___x_218_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_218_, 0, v_name_209_);
lean_ctor_set(v___x_218_, 1, v_ref_211_);
lean_ctor_set(v___x_218_, 2, v___x_216_);
lean_ctor_set(v___x_218_, 3, v_descr_214_);
lean_ctor_set(v___x_218_, 4, v_deprecation_x3f_215_);
v___x_219_ = lean_register_option(v_name_209_, v___x_218_);
if (lean_obj_tag(v___x_219_) == 0)
{
lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_227_; 
v_isSharedCheck_227_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_227_ == 0)
{
lean_object* v_unused_228_; 
v_unused_228_ = lean_ctor_get(v___x_219_, 0);
lean_dec(v_unused_228_);
v___x_221_ = v___x_219_;
v_isShared_222_ = v_isSharedCheck_227_;
goto v_resetjp_220_;
}
else
{
lean_dec(v___x_219_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_227_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v___x_223_; lean_object* v___x_225_; 
lean_inc(v_defValue_213_);
v___x_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_223_, 0, v_name_209_);
lean_ctor_set(v___x_223_, 1, v_defValue_213_);
if (v_isShared_222_ == 0)
{
lean_ctor_set(v___x_221_, 0, v___x_223_);
v___x_225_ = v___x_221_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v___x_223_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
else
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_236_; 
lean_dec(v_name_209_);
v_a_229_ = lean_ctor_get(v___x_219_, 0);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_236_ == 0)
{
v___x_231_ = v___x_219_;
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_219_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_234_; 
if (v_isShared_232_ == 0)
{
v___x_234_ = v___x_231_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_a_229_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_237_, lean_object* v_decl_238_, lean_object* v_ref_239_, lean_object* v_a_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lean_Option_register___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0(v_name_237_, v_decl_238_, v_ref_239_);
lean_dec_ref(v_decl_238_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_259_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_));
v___x_260_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_));
v___x_261_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__6_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_));
v___x_262_ = l_Lean_Option_register___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0(v___x_259_, v___x_260_, v___x_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4____boxed(lean_object* v_a_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_();
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_282_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__1_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_));
v___x_283_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_));
v___x_284_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__4_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_));
v___x_285_ = l_Lean_Option_register___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4__spec__0(v___x_282_, v___x_283_, v___x_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4____boxed(lean_object* v_a_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_();
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1174734686____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_289_ = lean_box(1);
v___x_290_ = lean_st_mk_ref(v___x_289_);
v___x_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1174734686____hygCtx___hyg_2____boxed(lean_object* v_a_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1174734686____hygCtx___hyg_2_();
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_294_, lean_object* v_x_295_){
_start:
{
if (lean_obj_tag(v_x_295_) == 0)
{
lean_object* v_k_296_; lean_object* v_v_297_; lean_object* v_l_298_; lean_object* v_r_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v_k_296_ = lean_ctor_get(v_x_295_, 1);
v_v_297_ = lean_ctor_get(v_x_295_, 2);
v_l_298_ = lean_ctor_get(v_x_295_, 3);
v_r_299_ = lean_ctor_get(v_x_295_, 4);
v___x_300_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0_spec__0(v_init_294_, v_l_298_);
lean_inc(v_v_297_);
lean_inc(v_k_296_);
v___x_301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_301_, 0, v_k_296_);
lean_ctor_set(v___x_301_, 1, v_v_297_);
v___x_302_ = lean_array_push(v___x_300_, v___x_301_);
v_init_294_ = v___x_302_;
v_x_295_ = v_r_299_;
goto _start;
}
else
{
return v_init_294_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_304_, lean_object* v_x_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0_spec__0(v_init_304_, v_x_305_);
lean_dec(v_x_305_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_(lean_object* v_x_311_, lean_object* v_s_312_){
_start:
{
lean_object* v___x_313_; lean_object* v_ents_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_313_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_));
v_ents_314_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0_spec__0(v___x_313_, v_s_312_);
v___x_315_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_));
lean_inc_ref(v_ents_314_);
v___x_316_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
lean_ctor_set(v___x_316_, 1, v_ents_314_);
lean_ctor_set(v___x_316_, 2, v_ents_314_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2____boxed(lean_object* v_x_317_, lean_object* v_s_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_(v_x_317_, v_s_318_);
lean_dec(v_s_318_);
lean_dec_ref(v_x_317_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_328_; lean_object* v___x_329_; lean_object* v___x_330_; uint8_t v___x_331_; lean_object* v___x_332_; 
v___f_328_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_));
v___x_329_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_));
v___x_330_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_));
v___x_331_ = 0;
v___x_332_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_329_, v___x_330_, v___x_331_, v___f_328_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2____boxed(lean_object* v_a_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_();
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0(lean_object* v_init_335_, lean_object* v_t_336_){
_start:
{
lean_object* v___x_337_; 
v___x_337_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0_spec__0(v_init_335_, v_t_336_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_338_, lean_object* v_t_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2__spec__0(v_init_338_, v_t_339_);
lean_dec(v_t_339_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_341_, lean_object* v_x_342_){
_start:
{
if (lean_obj_tag(v_x_342_) == 0)
{
lean_object* v_k_343_; lean_object* v_v_344_; lean_object* v_l_345_; lean_object* v_r_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v_k_343_ = lean_ctor_get(v_x_342_, 1);
v_v_344_ = lean_ctor_get(v_x_342_, 2);
v_l_345_ = lean_ctor_get(v_x_342_, 3);
v_r_346_ = lean_ctor_get(v_x_342_, 4);
v___x_347_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0_spec__0(v_init_341_, v_l_345_);
lean_inc(v_v_344_);
lean_inc(v_k_343_);
v___x_348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_348_, 0, v_k_343_);
lean_ctor_set(v___x_348_, 1, v_v_344_);
v___x_349_ = lean_array_push(v___x_347_, v___x_348_);
v_init_341_ = v___x_349_;
v_x_342_ = v_r_346_;
goto _start;
}
else
{
return v_init_341_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_351_, lean_object* v_x_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0_spec__0(v_init_351_, v_x_352_);
lean_dec(v_x_352_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_(lean_object* v_x_358_, lean_object* v_s_359_){
_start:
{
lean_object* v___x_360_; lean_object* v_ents_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_360_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_));
v_ents_361_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0_spec__0(v___x_360_, v_s_359_);
v___x_362_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_));
lean_inc_ref(v_ents_361_);
v___x_363_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_363_, 0, v___x_362_);
lean_ctor_set(v___x_363_, 1, v_ents_361_);
lean_ctor_set(v___x_363_, 2, v_ents_361_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2____boxed(lean_object* v_x_364_, lean_object* v_s_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_(v_x_364_, v_s_365_);
lean_dec(v_s_365_);
lean_dec_ref(v_x_364_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_396_; lean_object* v___x_397_; lean_object* v___x_398_; uint8_t v___x_399_; lean_object* v___x_400_; 
v___f_396_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_));
v___x_397_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__11_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_));
v___x_398_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__12_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_));
v___x_399_ = 0;
v___x_400_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_397_, v___x_398_, v___x_399_, v___f_396_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2____boxed(lean_object* v_a_401_){
_start:
{
lean_object* v_res_402_; 
v_res_402_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_();
return v_res_402_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0(lean_object* v_init_403_, lean_object* v_t_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0_spec__0(v_init_403_, v_t_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_406_, lean_object* v_t_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2__spec__0(v_init_406_, v_t_407_);
lean_dec(v_t_407_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_797151674____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_410_ = lean_box(1);
v___x_411_ = lean_st_mk_ref(v___x_410_);
v___x_412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_412_, 0, v___x_411_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_797151674____hygCtx___hyg_2____boxed(lean_object* v_a_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_797151674____hygCtx___hyg_2_();
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_415_, lean_object* v_x_416_){
_start:
{
if (lean_obj_tag(v_x_416_) == 0)
{
lean_object* v_k_417_; lean_object* v_v_418_; lean_object* v_l_419_; lean_object* v_r_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v_k_417_ = lean_ctor_get(v_x_416_, 1);
v_v_418_ = lean_ctor_get(v_x_416_, 2);
v_l_419_ = lean_ctor_get(v_x_416_, 3);
v_r_420_ = lean_ctor_get(v_x_416_, 4);
v___x_421_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0_spec__0(v_init_415_, v_l_419_);
lean_inc(v_v_418_);
lean_inc(v_k_417_);
v___x_422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_422_, 0, v_k_417_);
lean_ctor_set(v___x_422_, 1, v_v_418_);
v___x_423_ = lean_array_push(v___x_421_, v___x_422_);
v_init_415_ = v___x_423_;
v_x_416_ = v_r_420_;
goto _start;
}
else
{
return v_init_415_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_425_, lean_object* v_x_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0_spec__0(v_init_425_, v_x_426_);
lean_dec(v_x_426_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_(lean_object* v_x_432_, lean_object* v_s_433_){
_start:
{
lean_object* v___x_434_; lean_object* v_ents_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_434_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_));
v_ents_435_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0_spec__0(v___x_434_, v_s_433_);
v___x_436_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_));
lean_inc_ref(v_ents_435_);
v___x_437_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_437_, 0, v___x_436_);
lean_ctor_set(v___x_437_, 1, v_ents_435_);
lean_ctor_set(v___x_437_, 2, v_ents_435_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2____boxed(lean_object* v_x_438_, lean_object* v_s_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_(v_x_438_, v_s_439_);
lean_dec(v_s_439_);
lean_dec_ref(v_x_438_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_447_; lean_object* v___x_448_; lean_object* v___x_449_; uint8_t v___x_450_; lean_object* v___x_451_; 
v___f_447_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__0_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_));
v___x_448_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__2_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_));
v___x_449_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__3_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_));
v___x_450_ = 0;
v___x_451_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_448_, v___x_449_, v___x_450_, v___f_447_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2____boxed(lean_object* v_a_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_();
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0(lean_object* v_init_454_, lean_object* v_t_455_){
_start:
{
lean_object* v___x_456_; 
v___x_456_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0_spec__0(v_init_454_, v_t_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_457_, lean_object* v_t_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2__spec__0(v_init_457_, v_t_458_);
lean_dec(v_t_458_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_addBuiltinDocString(lean_object* v_declName_460_, lean_object* v_docString_461_){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_463_ = l___private_Lean_DocString_Extension_0__Lean_builtinDocStrings;
v___x_464_ = lean_st_ref_take(v___x_463_);
v___x_465_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_declName_460_, v_docString_461_, v___x_464_);
v___x_466_ = lean_st_ref_put(v___x_463_, v___x_465_);
v___x_467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_467_, 0, v___x_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_addBuiltinDocString___boxed(lean_object* v_declName_468_, lean_object* v_docString_469_, lean_object* v_a_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Lean_addBuiltinDocString(v_declName_468_, v_docString_469_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(lean_object* v_k_472_, lean_object* v_t_473_){
_start:
{
if (lean_obj_tag(v_t_473_) == 0)
{
lean_object* v_k_474_; lean_object* v_v_475_; lean_object* v_l_476_; lean_object* v_r_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_1131_; 
v_k_474_ = lean_ctor_get(v_t_473_, 1);
v_v_475_ = lean_ctor_get(v_t_473_, 2);
v_l_476_ = lean_ctor_get(v_t_473_, 3);
v_r_477_ = lean_ctor_get(v_t_473_, 4);
v_isSharedCheck_1131_ = !lean_is_exclusive(v_t_473_);
if (v_isSharedCheck_1131_ == 0)
{
lean_object* v_unused_1132_; 
v_unused_1132_ = lean_ctor_get(v_t_473_, 0);
lean_dec(v_unused_1132_);
v___x_479_ = v_t_473_;
v_isShared_480_ = v_isSharedCheck_1131_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_r_477_);
lean_inc(v_l_476_);
lean_inc(v_v_475_);
lean_inc(v_k_474_);
lean_dec(v_t_473_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_1131_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
uint8_t v___x_481_; 
v___x_481_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_472_, v_k_474_);
switch(v___x_481_)
{
case 0:
{
lean_object* v_impl_482_; lean_object* v___x_483_; 
v_impl_482_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(v_k_472_, v_l_476_);
v___x_483_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_482_) == 0)
{
if (lean_obj_tag(v_r_477_) == 0)
{
lean_object* v_size_484_; lean_object* v_size_485_; lean_object* v_k_486_; lean_object* v_v_487_; lean_object* v_l_488_; lean_object* v_r_489_; lean_object* v___x_490_; lean_object* v___x_491_; uint8_t v___x_492_; 
v_size_484_ = lean_ctor_get(v_impl_482_, 0);
v_size_485_ = lean_ctor_get(v_r_477_, 0);
v_k_486_ = lean_ctor_get(v_r_477_, 1);
v_v_487_ = lean_ctor_get(v_r_477_, 2);
v_l_488_ = lean_ctor_get(v_r_477_, 3);
lean_inc(v_l_488_);
v_r_489_ = lean_ctor_get(v_r_477_, 4);
v___x_490_ = lean_unsigned_to_nat(3u);
v___x_491_ = lean_nat_mul(v___x_490_, v_size_484_);
v___x_492_ = lean_nat_dec_lt(v___x_491_, v_size_485_);
lean_dec(v___x_491_);
if (v___x_492_ == 0)
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_496_; 
lean_dec(v_l_488_);
v___x_493_ = lean_nat_add(v___x_483_, v_size_484_);
v___x_494_ = lean_nat_add(v___x_493_, v_size_485_);
lean_dec(v___x_493_);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 3, v_impl_482_);
lean_ctor_set(v___x_479_, 0, v___x_494_);
v___x_496_ = v___x_479_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v___x_494_);
lean_ctor_set(v_reuseFailAlloc_497_, 1, v_k_474_);
lean_ctor_set(v_reuseFailAlloc_497_, 2, v_v_475_);
lean_ctor_set(v_reuseFailAlloc_497_, 3, v_impl_482_);
lean_ctor_set(v_reuseFailAlloc_497_, 4, v_r_477_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
else
{
lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_561_; 
lean_inc(v_r_489_);
lean_inc(v_v_487_);
lean_inc(v_k_486_);
lean_inc(v_size_485_);
v_isSharedCheck_561_ = !lean_is_exclusive(v_r_477_);
if (v_isSharedCheck_561_ == 0)
{
lean_object* v_unused_562_; lean_object* v_unused_563_; lean_object* v_unused_564_; lean_object* v_unused_565_; lean_object* v_unused_566_; 
v_unused_562_ = lean_ctor_get(v_r_477_, 4);
lean_dec(v_unused_562_);
v_unused_563_ = lean_ctor_get(v_r_477_, 3);
lean_dec(v_unused_563_);
v_unused_564_ = lean_ctor_get(v_r_477_, 2);
lean_dec(v_unused_564_);
v_unused_565_ = lean_ctor_get(v_r_477_, 1);
lean_dec(v_unused_565_);
v_unused_566_ = lean_ctor_get(v_r_477_, 0);
lean_dec(v_unused_566_);
v___x_499_ = v_r_477_;
v_isShared_500_ = v_isSharedCheck_561_;
goto v_resetjp_498_;
}
else
{
lean_dec(v_r_477_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_561_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v_size_501_; lean_object* v_k_502_; lean_object* v_v_503_; lean_object* v_l_504_; lean_object* v_r_505_; lean_object* v_size_506_; lean_object* v___x_507_; lean_object* v___x_508_; uint8_t v___x_509_; 
v_size_501_ = lean_ctor_get(v_l_488_, 0);
v_k_502_ = lean_ctor_get(v_l_488_, 1);
v_v_503_ = lean_ctor_get(v_l_488_, 2);
v_l_504_ = lean_ctor_get(v_l_488_, 3);
v_r_505_ = lean_ctor_get(v_l_488_, 4);
v_size_506_ = lean_ctor_get(v_r_489_, 0);
v___x_507_ = lean_unsigned_to_nat(2u);
v___x_508_ = lean_nat_mul(v___x_507_, v_size_506_);
v___x_509_ = lean_nat_dec_lt(v_size_501_, v___x_508_);
lean_dec(v___x_508_);
if (v___x_509_ == 0)
{
lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_537_; 
lean_inc(v_r_505_);
lean_inc(v_l_504_);
lean_inc(v_v_503_);
lean_inc(v_k_502_);
v_isSharedCheck_537_ = !lean_is_exclusive(v_l_488_);
if (v_isSharedCheck_537_ == 0)
{
lean_object* v_unused_538_; lean_object* v_unused_539_; lean_object* v_unused_540_; lean_object* v_unused_541_; lean_object* v_unused_542_; 
v_unused_538_ = lean_ctor_get(v_l_488_, 4);
lean_dec(v_unused_538_);
v_unused_539_ = lean_ctor_get(v_l_488_, 3);
lean_dec(v_unused_539_);
v_unused_540_ = lean_ctor_get(v_l_488_, 2);
lean_dec(v_unused_540_);
v_unused_541_ = lean_ctor_get(v_l_488_, 1);
lean_dec(v_unused_541_);
v_unused_542_ = lean_ctor_get(v_l_488_, 0);
lean_dec(v_unused_542_);
v___x_511_ = v_l_488_;
v_isShared_512_ = v_isSharedCheck_537_;
goto v_resetjp_510_;
}
else
{
lean_dec(v_l_488_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_537_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___y_516_; lean_object* v___y_517_; lean_object* v___y_518_; lean_object* v___y_527_; 
v___x_513_ = lean_nat_add(v___x_483_, v_size_484_);
v___x_514_ = lean_nat_add(v___x_513_, v_size_485_);
lean_dec(v_size_485_);
if (lean_obj_tag(v_l_504_) == 0)
{
lean_object* v_size_535_; 
v_size_535_ = lean_ctor_get(v_l_504_, 0);
lean_inc(v_size_535_);
v___y_527_ = v_size_535_;
goto v___jp_526_;
}
else
{
lean_object* v___x_536_; 
v___x_536_ = lean_unsigned_to_nat(0u);
v___y_527_ = v___x_536_;
goto v___jp_526_;
}
v___jp_515_:
{
lean_object* v___x_519_; lean_object* v___x_521_; 
v___x_519_ = lean_nat_add(v___y_517_, v___y_518_);
lean_dec(v___y_518_);
lean_dec(v___y_517_);
if (v_isShared_512_ == 0)
{
lean_ctor_set(v___x_511_, 4, v_r_489_);
lean_ctor_set(v___x_511_, 3, v_r_505_);
lean_ctor_set(v___x_511_, 2, v_v_487_);
lean_ctor_set(v___x_511_, 1, v_k_486_);
lean_ctor_set(v___x_511_, 0, v___x_519_);
v___x_521_ = v___x_511_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_519_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v_k_486_);
lean_ctor_set(v_reuseFailAlloc_525_, 2, v_v_487_);
lean_ctor_set(v_reuseFailAlloc_525_, 3, v_r_505_);
lean_ctor_set(v_reuseFailAlloc_525_, 4, v_r_489_);
v___x_521_ = v_reuseFailAlloc_525_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
lean_object* v___x_523_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v___x_521_);
lean_ctor_set(v___x_499_, 3, v___y_516_);
lean_ctor_set(v___x_499_, 2, v_v_503_);
lean_ctor_set(v___x_499_, 1, v_k_502_);
lean_ctor_set(v___x_499_, 0, v___x_514_);
v___x_523_ = v___x_499_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_524_, 1, v_k_502_);
lean_ctor_set(v_reuseFailAlloc_524_, 2, v_v_503_);
lean_ctor_set(v_reuseFailAlloc_524_, 3, v___y_516_);
lean_ctor_set(v_reuseFailAlloc_524_, 4, v___x_521_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
v___jp_526_:
{
lean_object* v___x_528_; lean_object* v___x_530_; 
v___x_528_ = lean_nat_add(v___x_513_, v___y_527_);
lean_dec(v___y_527_);
lean_dec(v___x_513_);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 4, v_l_504_);
lean_ctor_set(v___x_479_, 3, v_impl_482_);
lean_ctor_set(v___x_479_, 0, v___x_528_);
v___x_530_ = v___x_479_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v___x_528_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v_k_474_);
lean_ctor_set(v_reuseFailAlloc_534_, 2, v_v_475_);
lean_ctor_set(v_reuseFailAlloc_534_, 3, v_impl_482_);
lean_ctor_set(v_reuseFailAlloc_534_, 4, v_l_504_);
v___x_530_ = v_reuseFailAlloc_534_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
lean_object* v___x_531_; 
v___x_531_ = lean_nat_add(v___x_483_, v_size_506_);
if (lean_obj_tag(v_r_505_) == 0)
{
lean_object* v_size_532_; 
v_size_532_ = lean_ctor_get(v_r_505_, 0);
lean_inc(v_size_532_);
v___y_516_ = v___x_530_;
v___y_517_ = v___x_531_;
v___y_518_ = v_size_532_;
goto v___jp_515_;
}
else
{
lean_object* v___x_533_; 
v___x_533_ = lean_unsigned_to_nat(0u);
v___y_516_ = v___x_530_;
v___y_517_ = v___x_531_;
v___y_518_ = v___x_533_;
goto v___jp_515_;
}
}
}
}
}
else
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_547_; 
lean_del_object(v___x_479_);
v___x_543_ = lean_nat_add(v___x_483_, v_size_484_);
v___x_544_ = lean_nat_add(v___x_543_, v_size_485_);
lean_dec(v_size_485_);
v___x_545_ = lean_nat_add(v___x_543_, v_size_501_);
lean_dec(v___x_543_);
lean_inc_ref(v_impl_482_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 4, v_l_488_);
lean_ctor_set(v___x_499_, 3, v_impl_482_);
lean_ctor_set(v___x_499_, 2, v_v_475_);
lean_ctor_set(v___x_499_, 1, v_k_474_);
lean_ctor_set(v___x_499_, 0, v___x_545_);
v___x_547_ = v___x_499_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v___x_545_);
lean_ctor_set(v_reuseFailAlloc_560_, 1, v_k_474_);
lean_ctor_set(v_reuseFailAlloc_560_, 2, v_v_475_);
lean_ctor_set(v_reuseFailAlloc_560_, 3, v_impl_482_);
lean_ctor_set(v_reuseFailAlloc_560_, 4, v_l_488_);
v___x_547_ = v_reuseFailAlloc_560_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_554_; 
v_isSharedCheck_554_ = !lean_is_exclusive(v_impl_482_);
if (v_isSharedCheck_554_ == 0)
{
lean_object* v_unused_555_; lean_object* v_unused_556_; lean_object* v_unused_557_; lean_object* v_unused_558_; lean_object* v_unused_559_; 
v_unused_555_ = lean_ctor_get(v_impl_482_, 4);
lean_dec(v_unused_555_);
v_unused_556_ = lean_ctor_get(v_impl_482_, 3);
lean_dec(v_unused_556_);
v_unused_557_ = lean_ctor_get(v_impl_482_, 2);
lean_dec(v_unused_557_);
v_unused_558_ = lean_ctor_get(v_impl_482_, 1);
lean_dec(v_unused_558_);
v_unused_559_ = lean_ctor_get(v_impl_482_, 0);
lean_dec(v_unused_559_);
v___x_549_ = v_impl_482_;
v_isShared_550_ = v_isSharedCheck_554_;
goto v_resetjp_548_;
}
else
{
lean_dec(v_impl_482_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_554_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_552_; 
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 4, v_r_489_);
lean_ctor_set(v___x_549_, 3, v___x_547_);
lean_ctor_set(v___x_549_, 2, v_v_487_);
lean_ctor_set(v___x_549_, 1, v_k_486_);
lean_ctor_set(v___x_549_, 0, v___x_544_);
v___x_552_ = v___x_549_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v___x_544_);
lean_ctor_set(v_reuseFailAlloc_553_, 1, v_k_486_);
lean_ctor_set(v_reuseFailAlloc_553_, 2, v_v_487_);
lean_ctor_set(v_reuseFailAlloc_553_, 3, v___x_547_);
lean_ctor_set(v_reuseFailAlloc_553_, 4, v_r_489_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_567_; lean_object* v___x_568_; lean_object* v___x_570_; 
v_size_567_ = lean_ctor_get(v_impl_482_, 0);
v___x_568_ = lean_nat_add(v___x_483_, v_size_567_);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 3, v_impl_482_);
lean_ctor_set(v___x_479_, 0, v___x_568_);
v___x_570_ = v___x_479_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v___x_568_);
lean_ctor_set(v_reuseFailAlloc_571_, 1, v_k_474_);
lean_ctor_set(v_reuseFailAlloc_571_, 2, v_v_475_);
lean_ctor_set(v_reuseFailAlloc_571_, 3, v_impl_482_);
lean_ctor_set(v_reuseFailAlloc_571_, 4, v_r_477_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
else
{
if (lean_obj_tag(v_r_477_) == 0)
{
lean_object* v_l_572_; 
v_l_572_ = lean_ctor_get(v_r_477_, 3);
lean_inc(v_l_572_);
if (lean_obj_tag(v_l_572_) == 0)
{
lean_object* v_r_573_; 
v_r_573_ = lean_ctor_get(v_r_477_, 4);
lean_inc(v_r_573_);
if (lean_obj_tag(v_r_573_) == 0)
{
lean_object* v_size_574_; lean_object* v_k_575_; lean_object* v_v_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_589_; 
v_size_574_ = lean_ctor_get(v_r_477_, 0);
v_k_575_ = lean_ctor_get(v_r_477_, 1);
v_v_576_ = lean_ctor_get(v_r_477_, 2);
v_isSharedCheck_589_ = !lean_is_exclusive(v_r_477_);
if (v_isSharedCheck_589_ == 0)
{
lean_object* v_unused_590_; lean_object* v_unused_591_; 
v_unused_590_ = lean_ctor_get(v_r_477_, 4);
lean_dec(v_unused_590_);
v_unused_591_ = lean_ctor_get(v_r_477_, 3);
lean_dec(v_unused_591_);
v___x_578_ = v_r_477_;
v_isShared_579_ = v_isSharedCheck_589_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_v_576_);
lean_inc(v_k_575_);
lean_inc(v_size_574_);
lean_dec(v_r_477_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_589_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v_size_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_584_; 
v_size_580_ = lean_ctor_get(v_l_572_, 0);
v___x_581_ = lean_nat_add(v___x_483_, v_size_574_);
lean_dec(v_size_574_);
v___x_582_ = lean_nat_add(v___x_483_, v_size_580_);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 4, v_l_572_);
lean_ctor_set(v___x_578_, 3, v_impl_482_);
lean_ctor_set(v___x_578_, 2, v_v_475_);
lean_ctor_set(v___x_578_, 1, v_k_474_);
lean_ctor_set(v___x_578_, 0, v___x_582_);
v___x_584_ = v___x_578_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_582_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v_k_474_);
lean_ctor_set(v_reuseFailAlloc_588_, 2, v_v_475_);
lean_ctor_set(v_reuseFailAlloc_588_, 3, v_impl_482_);
lean_ctor_set(v_reuseFailAlloc_588_, 4, v_l_572_);
v___x_584_ = v_reuseFailAlloc_588_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
lean_object* v___x_586_; 
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 4, v_r_573_);
lean_ctor_set(v___x_479_, 3, v___x_584_);
lean_ctor_set(v___x_479_, 2, v_v_576_);
lean_ctor_set(v___x_479_, 1, v_k_575_);
lean_ctor_set(v___x_479_, 0, v___x_581_);
v___x_586_ = v___x_479_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v___x_581_);
lean_ctor_set(v_reuseFailAlloc_587_, 1, v_k_575_);
lean_ctor_set(v_reuseFailAlloc_587_, 2, v_v_576_);
lean_ctor_set(v_reuseFailAlloc_587_, 3, v___x_584_);
lean_ctor_set(v_reuseFailAlloc_587_, 4, v_r_573_);
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
else
{
lean_object* v_k_592_; lean_object* v_v_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_616_; 
v_k_592_ = lean_ctor_get(v_r_477_, 1);
v_v_593_ = lean_ctor_get(v_r_477_, 2);
v_isSharedCheck_616_ = !lean_is_exclusive(v_r_477_);
if (v_isSharedCheck_616_ == 0)
{
lean_object* v_unused_617_; lean_object* v_unused_618_; lean_object* v_unused_619_; 
v_unused_617_ = lean_ctor_get(v_r_477_, 4);
lean_dec(v_unused_617_);
v_unused_618_ = lean_ctor_get(v_r_477_, 3);
lean_dec(v_unused_618_);
v_unused_619_ = lean_ctor_get(v_r_477_, 0);
lean_dec(v_unused_619_);
v___x_595_ = v_r_477_;
v_isShared_596_ = v_isSharedCheck_616_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_v_593_);
lean_inc(v_k_592_);
lean_dec(v_r_477_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_616_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v_k_597_; lean_object* v_v_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_612_; 
v_k_597_ = lean_ctor_get(v_l_572_, 1);
v_v_598_ = lean_ctor_get(v_l_572_, 2);
v_isSharedCheck_612_ = !lean_is_exclusive(v_l_572_);
if (v_isSharedCheck_612_ == 0)
{
lean_object* v_unused_613_; lean_object* v_unused_614_; lean_object* v_unused_615_; 
v_unused_613_ = lean_ctor_get(v_l_572_, 4);
lean_dec(v_unused_613_);
v_unused_614_ = lean_ctor_get(v_l_572_, 3);
lean_dec(v_unused_614_);
v_unused_615_ = lean_ctor_get(v_l_572_, 0);
lean_dec(v_unused_615_);
v___x_600_ = v_l_572_;
v_isShared_601_ = v_isSharedCheck_612_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_v_598_);
lean_inc(v_k_597_);
lean_dec(v_l_572_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_612_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; lean_object* v___x_604_; 
v___x_602_ = lean_unsigned_to_nat(3u);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 4, v_r_573_);
lean_ctor_set(v___x_600_, 3, v_r_573_);
lean_ctor_set(v___x_600_, 2, v_v_475_);
lean_ctor_set(v___x_600_, 1, v_k_474_);
lean_ctor_set(v___x_600_, 0, v___x_483_);
v___x_604_ = v___x_600_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v___x_483_);
lean_ctor_set(v_reuseFailAlloc_611_, 1, v_k_474_);
lean_ctor_set(v_reuseFailAlloc_611_, 2, v_v_475_);
lean_ctor_set(v_reuseFailAlloc_611_, 3, v_r_573_);
lean_ctor_set(v_reuseFailAlloc_611_, 4, v_r_573_);
v___x_604_ = v_reuseFailAlloc_611_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
lean_object* v___x_606_; 
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 3, v_r_573_);
lean_ctor_set(v___x_595_, 0, v___x_483_);
v___x_606_ = v___x_595_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v___x_483_);
lean_ctor_set(v_reuseFailAlloc_610_, 1, v_k_592_);
lean_ctor_set(v_reuseFailAlloc_610_, 2, v_v_593_);
lean_ctor_set(v_reuseFailAlloc_610_, 3, v_r_573_);
lean_ctor_set(v_reuseFailAlloc_610_, 4, v_r_573_);
v___x_606_ = v_reuseFailAlloc_610_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
lean_object* v___x_608_; 
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 4, v___x_606_);
lean_ctor_set(v___x_479_, 3, v___x_604_);
lean_ctor_set(v___x_479_, 2, v_v_598_);
lean_ctor_set(v___x_479_, 1, v_k_597_);
lean_ctor_set(v___x_479_, 0, v___x_602_);
v___x_608_ = v___x_479_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v___x_602_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v_k_597_);
lean_ctor_set(v_reuseFailAlloc_609_, 2, v_v_598_);
lean_ctor_set(v_reuseFailAlloc_609_, 3, v___x_604_);
lean_ctor_set(v_reuseFailAlloc_609_, 4, v___x_606_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_620_; 
v_r_620_ = lean_ctor_get(v_r_477_, 4);
lean_inc(v_r_620_);
if (lean_obj_tag(v_r_620_) == 0)
{
lean_object* v_k_621_; lean_object* v_v_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_633_; 
v_k_621_ = lean_ctor_get(v_r_477_, 1);
v_v_622_ = lean_ctor_get(v_r_477_, 2);
v_isSharedCheck_633_ = !lean_is_exclusive(v_r_477_);
if (v_isSharedCheck_633_ == 0)
{
lean_object* v_unused_634_; lean_object* v_unused_635_; lean_object* v_unused_636_; 
v_unused_634_ = lean_ctor_get(v_r_477_, 4);
lean_dec(v_unused_634_);
v_unused_635_ = lean_ctor_get(v_r_477_, 3);
lean_dec(v_unused_635_);
v_unused_636_ = lean_ctor_get(v_r_477_, 0);
lean_dec(v_unused_636_);
v___x_624_ = v_r_477_;
v_isShared_625_ = v_isSharedCheck_633_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_v_622_);
lean_inc(v_k_621_);
lean_dec(v_r_477_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_633_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_626_; lean_object* v___x_628_; 
v___x_626_ = lean_unsigned_to_nat(3u);
if (v_isShared_625_ == 0)
{
lean_ctor_set(v___x_624_, 4, v_l_572_);
lean_ctor_set(v___x_624_, 2, v_v_475_);
lean_ctor_set(v___x_624_, 1, v_k_474_);
lean_ctor_set(v___x_624_, 0, v___x_483_);
v___x_628_ = v___x_624_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v___x_483_);
lean_ctor_set(v_reuseFailAlloc_632_, 1, v_k_474_);
lean_ctor_set(v_reuseFailAlloc_632_, 2, v_v_475_);
lean_ctor_set(v_reuseFailAlloc_632_, 3, v_l_572_);
lean_ctor_set(v_reuseFailAlloc_632_, 4, v_l_572_);
v___x_628_ = v_reuseFailAlloc_632_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
lean_object* v___x_630_; 
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 4, v_r_620_);
lean_ctor_set(v___x_479_, 3, v___x_628_);
lean_ctor_set(v___x_479_, 2, v_v_622_);
lean_ctor_set(v___x_479_, 1, v_k_621_);
lean_ctor_set(v___x_479_, 0, v___x_626_);
v___x_630_ = v___x_479_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v___x_626_);
lean_ctor_set(v_reuseFailAlloc_631_, 1, v_k_621_);
lean_ctor_set(v_reuseFailAlloc_631_, 2, v_v_622_);
lean_ctor_set(v_reuseFailAlloc_631_, 3, v___x_628_);
lean_ctor_set(v_reuseFailAlloc_631_, 4, v_r_620_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
else
{
lean_object* v_size_637_; lean_object* v_k_638_; lean_object* v_v_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_650_; 
v_size_637_ = lean_ctor_get(v_r_477_, 0);
v_k_638_ = lean_ctor_get(v_r_477_, 1);
v_v_639_ = lean_ctor_get(v_r_477_, 2);
v_isSharedCheck_650_ = !lean_is_exclusive(v_r_477_);
if (v_isSharedCheck_650_ == 0)
{
lean_object* v_unused_651_; lean_object* v_unused_652_; 
v_unused_651_ = lean_ctor_get(v_r_477_, 4);
lean_dec(v_unused_651_);
v_unused_652_ = lean_ctor_get(v_r_477_, 3);
lean_dec(v_unused_652_);
v___x_641_ = v_r_477_;
v_isShared_642_ = v_isSharedCheck_650_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_v_639_);
lean_inc(v_k_638_);
lean_inc(v_size_637_);
lean_dec(v_r_477_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_650_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_644_; 
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 3, v_r_620_);
v___x_644_ = v___x_641_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_size_637_);
lean_ctor_set(v_reuseFailAlloc_649_, 1, v_k_638_);
lean_ctor_set(v_reuseFailAlloc_649_, 2, v_v_639_);
lean_ctor_set(v_reuseFailAlloc_649_, 3, v_r_620_);
lean_ctor_set(v_reuseFailAlloc_649_, 4, v_r_620_);
v___x_644_ = v_reuseFailAlloc_649_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
lean_object* v___x_645_; lean_object* v___x_647_; 
v___x_645_ = lean_unsigned_to_nat(2u);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 4, v___x_644_);
lean_ctor_set(v___x_479_, 3, v_r_620_);
lean_ctor_set(v___x_479_, 0, v___x_645_);
v___x_647_ = v___x_479_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v___x_645_);
lean_ctor_set(v_reuseFailAlloc_648_, 1, v_k_474_);
lean_ctor_set(v_reuseFailAlloc_648_, 2, v_v_475_);
lean_ctor_set(v_reuseFailAlloc_648_, 3, v_r_620_);
lean_ctor_set(v_reuseFailAlloc_648_, 4, v___x_644_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
}
}
}
else
{
lean_object* v___x_654_; 
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 3, v_r_477_);
lean_ctor_set(v___x_479_, 0, v___x_483_);
v___x_654_ = v___x_479_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v___x_483_);
lean_ctor_set(v_reuseFailAlloc_655_, 1, v_k_474_);
lean_ctor_set(v_reuseFailAlloc_655_, 2, v_v_475_);
lean_ctor_set(v_reuseFailAlloc_655_, 3, v_r_477_);
lean_ctor_set(v_reuseFailAlloc_655_, 4, v_r_477_);
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
case 1:
{
lean_del_object(v___x_479_);
lean_dec(v_v_475_);
lean_dec(v_k_474_);
if (lean_obj_tag(v_l_476_) == 0)
{
if (lean_obj_tag(v_r_477_) == 0)
{
lean_object* v_size_656_; lean_object* v_k_657_; lean_object* v_v_658_; lean_object* v_l_659_; lean_object* v_r_660_; lean_object* v_size_661_; lean_object* v_k_662_; lean_object* v_v_663_; lean_object* v_l_664_; lean_object* v_r_665_; lean_object* v___x_666_; uint8_t v___x_667_; 
v_size_656_ = lean_ctor_get(v_l_476_, 0);
v_k_657_ = lean_ctor_get(v_l_476_, 1);
v_v_658_ = lean_ctor_get(v_l_476_, 2);
v_l_659_ = lean_ctor_get(v_l_476_, 3);
v_r_660_ = lean_ctor_get(v_l_476_, 4);
lean_inc(v_r_660_);
v_size_661_ = lean_ctor_get(v_r_477_, 0);
v_k_662_ = lean_ctor_get(v_r_477_, 1);
v_v_663_ = lean_ctor_get(v_r_477_, 2);
v_l_664_ = lean_ctor_get(v_r_477_, 3);
lean_inc(v_l_664_);
v_r_665_ = lean_ctor_get(v_r_477_, 4);
v___x_666_ = lean_unsigned_to_nat(1u);
v___x_667_ = lean_nat_dec_lt(v_size_656_, v_size_661_);
if (v___x_667_ == 0)
{
lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_803_; 
lean_inc(v_l_659_);
lean_inc(v_v_658_);
lean_inc(v_k_657_);
v_isSharedCheck_803_ = !lean_is_exclusive(v_l_476_);
if (v_isSharedCheck_803_ == 0)
{
lean_object* v_unused_804_; lean_object* v_unused_805_; lean_object* v_unused_806_; lean_object* v_unused_807_; lean_object* v_unused_808_; 
v_unused_804_ = lean_ctor_get(v_l_476_, 4);
lean_dec(v_unused_804_);
v_unused_805_ = lean_ctor_get(v_l_476_, 3);
lean_dec(v_unused_805_);
v_unused_806_ = lean_ctor_get(v_l_476_, 2);
lean_dec(v_unused_806_);
v_unused_807_ = lean_ctor_get(v_l_476_, 1);
lean_dec(v_unused_807_);
v_unused_808_ = lean_ctor_get(v_l_476_, 0);
lean_dec(v_unused_808_);
v___x_669_ = v_l_476_;
v_isShared_670_ = v_isSharedCheck_803_;
goto v_resetjp_668_;
}
else
{
lean_dec(v_l_476_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_803_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v___x_671_; lean_object* v_tree_672_; 
v___x_671_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_657_, v_v_658_, v_l_659_, v_r_660_);
v_tree_672_ = lean_ctor_get(v___x_671_, 2);
if (lean_obj_tag(v_tree_672_) == 0)
{
lean_object* v_k_673_; lean_object* v_v_674_; lean_object* v_size_675_; lean_object* v___x_676_; lean_object* v___x_677_; uint8_t v___x_678_; 
lean_inc_ref(v_tree_672_);
v_k_673_ = lean_ctor_get(v___x_671_, 0);
lean_inc(v_k_673_);
v_v_674_ = lean_ctor_get(v___x_671_, 1);
lean_inc(v_v_674_);
lean_dec_ref(v___x_671_);
v_size_675_ = lean_ctor_get(v_tree_672_, 0);
v___x_676_ = lean_unsigned_to_nat(3u);
v___x_677_ = lean_nat_mul(v___x_676_, v_size_675_);
v___x_678_ = lean_nat_dec_lt(v___x_677_, v_size_661_);
lean_dec(v___x_677_);
if (v___x_678_ == 0)
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_682_; 
lean_dec(v_l_664_);
v___x_679_ = lean_nat_add(v___x_666_, v_size_675_);
v___x_680_ = lean_nat_add(v___x_679_, v_size_661_);
lean_dec(v___x_679_);
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 4, v_r_477_);
lean_ctor_set(v___x_669_, 3, v_tree_672_);
lean_ctor_set(v___x_669_, 2, v_v_674_);
lean_ctor_set(v___x_669_, 1, v_k_673_);
lean_ctor_set(v___x_669_, 0, v___x_680_);
v___x_682_ = v___x_669_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v___x_680_);
lean_ctor_set(v_reuseFailAlloc_683_, 1, v_k_673_);
lean_ctor_set(v_reuseFailAlloc_683_, 2, v_v_674_);
lean_ctor_set(v_reuseFailAlloc_683_, 3, v_tree_672_);
lean_ctor_set(v_reuseFailAlloc_683_, 4, v_r_477_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
return v___x_682_;
}
}
else
{
lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_738_; 
lean_inc(v_r_665_);
lean_inc(v_v_663_);
lean_inc(v_k_662_);
lean_inc(v_size_661_);
v_isSharedCheck_738_ = !lean_is_exclusive(v_r_477_);
if (v_isSharedCheck_738_ == 0)
{
lean_object* v_unused_739_; lean_object* v_unused_740_; lean_object* v_unused_741_; lean_object* v_unused_742_; lean_object* v_unused_743_; 
v_unused_739_ = lean_ctor_get(v_r_477_, 4);
lean_dec(v_unused_739_);
v_unused_740_ = lean_ctor_get(v_r_477_, 3);
lean_dec(v_unused_740_);
v_unused_741_ = lean_ctor_get(v_r_477_, 2);
lean_dec(v_unused_741_);
v_unused_742_ = lean_ctor_get(v_r_477_, 1);
lean_dec(v_unused_742_);
v_unused_743_ = lean_ctor_get(v_r_477_, 0);
lean_dec(v_unused_743_);
v___x_685_ = v_r_477_;
v_isShared_686_ = v_isSharedCheck_738_;
goto v_resetjp_684_;
}
else
{
lean_dec(v_r_477_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_738_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v_size_687_; lean_object* v_k_688_; lean_object* v_v_689_; lean_object* v_l_690_; lean_object* v_r_691_; lean_object* v_size_692_; lean_object* v___x_693_; lean_object* v___x_694_; uint8_t v___x_695_; 
v_size_687_ = lean_ctor_get(v_l_664_, 0);
v_k_688_ = lean_ctor_get(v_l_664_, 1);
v_v_689_ = lean_ctor_get(v_l_664_, 2);
v_l_690_ = lean_ctor_get(v_l_664_, 3);
v_r_691_ = lean_ctor_get(v_l_664_, 4);
v_size_692_ = lean_ctor_get(v_r_665_, 0);
v___x_693_ = lean_unsigned_to_nat(2u);
v___x_694_ = lean_nat_mul(v___x_693_, v_size_692_);
v___x_695_ = lean_nat_dec_lt(v_size_687_, v___x_694_);
lean_dec(v___x_694_);
if (v___x_695_ == 0)
{
lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_723_; 
lean_inc(v_r_691_);
lean_inc(v_l_690_);
lean_inc(v_v_689_);
lean_inc(v_k_688_);
v_isSharedCheck_723_ = !lean_is_exclusive(v_l_664_);
if (v_isSharedCheck_723_ == 0)
{
lean_object* v_unused_724_; lean_object* v_unused_725_; lean_object* v_unused_726_; lean_object* v_unused_727_; lean_object* v_unused_728_; 
v_unused_724_ = lean_ctor_get(v_l_664_, 4);
lean_dec(v_unused_724_);
v_unused_725_ = lean_ctor_get(v_l_664_, 3);
lean_dec(v_unused_725_);
v_unused_726_ = lean_ctor_get(v_l_664_, 2);
lean_dec(v_unused_726_);
v_unused_727_ = lean_ctor_get(v_l_664_, 1);
lean_dec(v_unused_727_);
v_unused_728_ = lean_ctor_get(v_l_664_, 0);
lean_dec(v_unused_728_);
v___x_697_ = v_l_664_;
v_isShared_698_ = v_isSharedCheck_723_;
goto v_resetjp_696_;
}
else
{
lean_dec(v_l_664_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_723_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___y_702_; lean_object* v___y_703_; lean_object* v___y_704_; lean_object* v___y_713_; 
v___x_699_ = lean_nat_add(v___x_666_, v_size_675_);
v___x_700_ = lean_nat_add(v___x_699_, v_size_661_);
lean_dec(v_size_661_);
if (lean_obj_tag(v_l_690_) == 0)
{
lean_object* v_size_721_; 
v_size_721_ = lean_ctor_get(v_l_690_, 0);
lean_inc(v_size_721_);
v___y_713_ = v_size_721_;
goto v___jp_712_;
}
else
{
lean_object* v___x_722_; 
v___x_722_ = lean_unsigned_to_nat(0u);
v___y_713_ = v___x_722_;
goto v___jp_712_;
}
v___jp_701_:
{
lean_object* v___x_705_; lean_object* v___x_707_; 
v___x_705_ = lean_nat_add(v___y_703_, v___y_704_);
lean_dec(v___y_704_);
lean_dec(v___y_703_);
if (v_isShared_698_ == 0)
{
lean_ctor_set(v___x_697_, 4, v_r_665_);
lean_ctor_set(v___x_697_, 3, v_r_691_);
lean_ctor_set(v___x_697_, 2, v_v_663_);
lean_ctor_set(v___x_697_, 1, v_k_662_);
lean_ctor_set(v___x_697_, 0, v___x_705_);
v___x_707_ = v___x_697_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v___x_705_);
lean_ctor_set(v_reuseFailAlloc_711_, 1, v_k_662_);
lean_ctor_set(v_reuseFailAlloc_711_, 2, v_v_663_);
lean_ctor_set(v_reuseFailAlloc_711_, 3, v_r_691_);
lean_ctor_set(v_reuseFailAlloc_711_, 4, v_r_665_);
v___x_707_ = v_reuseFailAlloc_711_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
lean_object* v___x_709_; 
if (v_isShared_686_ == 0)
{
lean_ctor_set(v___x_685_, 4, v___x_707_);
lean_ctor_set(v___x_685_, 3, v___y_702_);
lean_ctor_set(v___x_685_, 2, v_v_689_);
lean_ctor_set(v___x_685_, 1, v_k_688_);
lean_ctor_set(v___x_685_, 0, v___x_700_);
v___x_709_ = v___x_685_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v___x_700_);
lean_ctor_set(v_reuseFailAlloc_710_, 1, v_k_688_);
lean_ctor_set(v_reuseFailAlloc_710_, 2, v_v_689_);
lean_ctor_set(v_reuseFailAlloc_710_, 3, v___y_702_);
lean_ctor_set(v_reuseFailAlloc_710_, 4, v___x_707_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
v___jp_712_:
{
lean_object* v___x_714_; lean_object* v___x_716_; 
v___x_714_ = lean_nat_add(v___x_699_, v___y_713_);
lean_dec(v___y_713_);
lean_dec(v___x_699_);
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 4, v_l_690_);
lean_ctor_set(v___x_669_, 3, v_tree_672_);
lean_ctor_set(v___x_669_, 2, v_v_674_);
lean_ctor_set(v___x_669_, 1, v_k_673_);
lean_ctor_set(v___x_669_, 0, v___x_714_);
v___x_716_ = v___x_669_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v___x_714_);
lean_ctor_set(v_reuseFailAlloc_720_, 1, v_k_673_);
lean_ctor_set(v_reuseFailAlloc_720_, 2, v_v_674_);
lean_ctor_set(v_reuseFailAlloc_720_, 3, v_tree_672_);
lean_ctor_set(v_reuseFailAlloc_720_, 4, v_l_690_);
v___x_716_ = v_reuseFailAlloc_720_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
lean_object* v___x_717_; 
v___x_717_ = lean_nat_add(v___x_666_, v_size_692_);
if (lean_obj_tag(v_r_691_) == 0)
{
lean_object* v_size_718_; 
v_size_718_ = lean_ctor_get(v_r_691_, 0);
lean_inc(v_size_718_);
v___y_702_ = v___x_716_;
v___y_703_ = v___x_717_;
v___y_704_ = v_size_718_;
goto v___jp_701_;
}
else
{
lean_object* v___x_719_; 
v___x_719_ = lean_unsigned_to_nat(0u);
v___y_702_ = v___x_716_;
v___y_703_ = v___x_717_;
v___y_704_ = v___x_719_;
goto v___jp_701_;
}
}
}
}
}
else
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_733_; 
v___x_729_ = lean_nat_add(v___x_666_, v_size_675_);
v___x_730_ = lean_nat_add(v___x_729_, v_size_661_);
lean_dec(v_size_661_);
v___x_731_ = lean_nat_add(v___x_729_, v_size_687_);
lean_dec(v___x_729_);
if (v_isShared_686_ == 0)
{
lean_ctor_set(v___x_685_, 4, v_l_664_);
lean_ctor_set(v___x_685_, 3, v_tree_672_);
lean_ctor_set(v___x_685_, 2, v_v_674_);
lean_ctor_set(v___x_685_, 1, v_k_673_);
lean_ctor_set(v___x_685_, 0, v___x_731_);
v___x_733_ = v___x_685_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v___x_731_);
lean_ctor_set(v_reuseFailAlloc_737_, 1, v_k_673_);
lean_ctor_set(v_reuseFailAlloc_737_, 2, v_v_674_);
lean_ctor_set(v_reuseFailAlloc_737_, 3, v_tree_672_);
lean_ctor_set(v_reuseFailAlloc_737_, 4, v_l_664_);
v___x_733_ = v_reuseFailAlloc_737_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v___x_735_; 
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 4, v_r_665_);
lean_ctor_set(v___x_669_, 3, v___x_733_);
lean_ctor_set(v___x_669_, 2, v_v_663_);
lean_ctor_set(v___x_669_, 1, v_k_662_);
lean_ctor_set(v___x_669_, 0, v___x_730_);
v___x_735_ = v___x_669_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v___x_730_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v_k_662_);
lean_ctor_set(v_reuseFailAlloc_736_, 2, v_v_663_);
lean_ctor_set(v_reuseFailAlloc_736_, 3, v___x_733_);
lean_ctor_set(v_reuseFailAlloc_736_, 4, v_r_665_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
}
}
}
else
{
lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_797_; 
lean_inc(v_r_665_);
lean_inc(v_v_663_);
lean_inc(v_k_662_);
lean_inc(v_size_661_);
v_isSharedCheck_797_ = !lean_is_exclusive(v_r_477_);
if (v_isSharedCheck_797_ == 0)
{
lean_object* v_unused_798_; lean_object* v_unused_799_; lean_object* v_unused_800_; lean_object* v_unused_801_; lean_object* v_unused_802_; 
v_unused_798_ = lean_ctor_get(v_r_477_, 4);
lean_dec(v_unused_798_);
v_unused_799_ = lean_ctor_get(v_r_477_, 3);
lean_dec(v_unused_799_);
v_unused_800_ = lean_ctor_get(v_r_477_, 2);
lean_dec(v_unused_800_);
v_unused_801_ = lean_ctor_get(v_r_477_, 1);
lean_dec(v_unused_801_);
v_unused_802_ = lean_ctor_get(v_r_477_, 0);
lean_dec(v_unused_802_);
v___x_745_ = v_r_477_;
v_isShared_746_ = v_isSharedCheck_797_;
goto v_resetjp_744_;
}
else
{
lean_dec(v_r_477_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_797_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
if (lean_obj_tag(v_l_664_) == 0)
{
if (lean_obj_tag(v_r_665_) == 0)
{
lean_object* v_k_747_; lean_object* v_v_748_; lean_object* v_size_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_753_; 
lean_inc(v_tree_672_);
v_k_747_ = lean_ctor_get(v___x_671_, 0);
lean_inc(v_k_747_);
v_v_748_ = lean_ctor_get(v___x_671_, 1);
lean_inc(v_v_748_);
lean_dec_ref(v___x_671_);
v_size_749_ = lean_ctor_get(v_l_664_, 0);
v___x_750_ = lean_nat_add(v___x_666_, v_size_661_);
lean_dec(v_size_661_);
v___x_751_ = lean_nat_add(v___x_666_, v_size_749_);
if (v_isShared_746_ == 0)
{
lean_ctor_set(v___x_745_, 4, v_l_664_);
lean_ctor_set(v___x_745_, 3, v_tree_672_);
lean_ctor_set(v___x_745_, 2, v_v_748_);
lean_ctor_set(v___x_745_, 1, v_k_747_);
lean_ctor_set(v___x_745_, 0, v___x_751_);
v___x_753_ = v___x_745_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v___x_751_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_k_747_);
lean_ctor_set(v_reuseFailAlloc_757_, 2, v_v_748_);
lean_ctor_set(v_reuseFailAlloc_757_, 3, v_tree_672_);
lean_ctor_set(v_reuseFailAlloc_757_, 4, v_l_664_);
v___x_753_ = v_reuseFailAlloc_757_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
lean_object* v___x_755_; 
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 4, v_r_665_);
lean_ctor_set(v___x_669_, 3, v___x_753_);
lean_ctor_set(v___x_669_, 2, v_v_663_);
lean_ctor_set(v___x_669_, 1, v_k_662_);
lean_ctor_set(v___x_669_, 0, v___x_750_);
v___x_755_ = v___x_669_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v___x_750_);
lean_ctor_set(v_reuseFailAlloc_756_, 1, v_k_662_);
lean_ctor_set(v_reuseFailAlloc_756_, 2, v_v_663_);
lean_ctor_set(v_reuseFailAlloc_756_, 3, v___x_753_);
lean_ctor_set(v_reuseFailAlloc_756_, 4, v_r_665_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
}
else
{
lean_object* v_k_758_; lean_object* v_v_759_; lean_object* v_k_760_; lean_object* v_v_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_775_; 
lean_dec(v_size_661_);
v_k_758_ = lean_ctor_get(v___x_671_, 0);
lean_inc(v_k_758_);
v_v_759_ = lean_ctor_get(v___x_671_, 1);
lean_inc(v_v_759_);
lean_dec_ref(v___x_671_);
v_k_760_ = lean_ctor_get(v_l_664_, 1);
v_v_761_ = lean_ctor_get(v_l_664_, 2);
v_isSharedCheck_775_ = !lean_is_exclusive(v_l_664_);
if (v_isSharedCheck_775_ == 0)
{
lean_object* v_unused_776_; lean_object* v_unused_777_; lean_object* v_unused_778_; 
v_unused_776_ = lean_ctor_get(v_l_664_, 4);
lean_dec(v_unused_776_);
v_unused_777_ = lean_ctor_get(v_l_664_, 3);
lean_dec(v_unused_777_);
v_unused_778_ = lean_ctor_get(v_l_664_, 0);
lean_dec(v_unused_778_);
v___x_763_ = v_l_664_;
v_isShared_764_ = v_isSharedCheck_775_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_v_761_);
lean_inc(v_k_760_);
lean_dec(v_l_664_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_775_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_765_; lean_object* v___x_767_; 
v___x_765_ = lean_unsigned_to_nat(3u);
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 4, v_r_665_);
lean_ctor_set(v___x_763_, 3, v_r_665_);
lean_ctor_set(v___x_763_, 2, v_v_759_);
lean_ctor_set(v___x_763_, 1, v_k_758_);
lean_ctor_set(v___x_763_, 0, v___x_666_);
v___x_767_ = v___x_763_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v___x_666_);
lean_ctor_set(v_reuseFailAlloc_774_, 1, v_k_758_);
lean_ctor_set(v_reuseFailAlloc_774_, 2, v_v_759_);
lean_ctor_set(v_reuseFailAlloc_774_, 3, v_r_665_);
lean_ctor_set(v_reuseFailAlloc_774_, 4, v_r_665_);
v___x_767_ = v_reuseFailAlloc_774_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
lean_object* v___x_769_; 
if (v_isShared_746_ == 0)
{
lean_ctor_set(v___x_745_, 3, v_r_665_);
lean_ctor_set(v___x_745_, 0, v___x_666_);
v___x_769_ = v___x_745_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v___x_666_);
lean_ctor_set(v_reuseFailAlloc_773_, 1, v_k_662_);
lean_ctor_set(v_reuseFailAlloc_773_, 2, v_v_663_);
lean_ctor_set(v_reuseFailAlloc_773_, 3, v_r_665_);
lean_ctor_set(v_reuseFailAlloc_773_, 4, v_r_665_);
v___x_769_ = v_reuseFailAlloc_773_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
lean_object* v___x_771_; 
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 4, v___x_769_);
lean_ctor_set(v___x_669_, 3, v___x_767_);
lean_ctor_set(v___x_669_, 2, v_v_761_);
lean_ctor_set(v___x_669_, 1, v_k_760_);
lean_ctor_set(v___x_669_, 0, v___x_765_);
v___x_771_ = v___x_669_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_765_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v_k_760_);
lean_ctor_set(v_reuseFailAlloc_772_, 2, v_v_761_);
lean_ctor_set(v_reuseFailAlloc_772_, 3, v___x_767_);
lean_ctor_set(v_reuseFailAlloc_772_, 4, v___x_769_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_665_) == 0)
{
lean_object* v_k_779_; lean_object* v_v_780_; lean_object* v___x_781_; lean_object* v___x_783_; 
lean_dec(v_size_661_);
v_k_779_ = lean_ctor_get(v___x_671_, 0);
lean_inc(v_k_779_);
v_v_780_ = lean_ctor_get(v___x_671_, 1);
lean_inc(v_v_780_);
lean_dec_ref(v___x_671_);
v___x_781_ = lean_unsigned_to_nat(3u);
if (v_isShared_746_ == 0)
{
lean_ctor_set(v___x_745_, 4, v_l_664_);
lean_ctor_set(v___x_745_, 2, v_v_780_);
lean_ctor_set(v___x_745_, 1, v_k_779_);
lean_ctor_set(v___x_745_, 0, v___x_666_);
v___x_783_ = v___x_745_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v___x_666_);
lean_ctor_set(v_reuseFailAlloc_787_, 1, v_k_779_);
lean_ctor_set(v_reuseFailAlloc_787_, 2, v_v_780_);
lean_ctor_set(v_reuseFailAlloc_787_, 3, v_l_664_);
lean_ctor_set(v_reuseFailAlloc_787_, 4, v_l_664_);
v___x_783_ = v_reuseFailAlloc_787_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
lean_object* v___x_785_; 
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 4, v_r_665_);
lean_ctor_set(v___x_669_, 3, v___x_783_);
lean_ctor_set(v___x_669_, 2, v_v_663_);
lean_ctor_set(v___x_669_, 1, v_k_662_);
lean_ctor_set(v___x_669_, 0, v___x_781_);
v___x_785_ = v___x_669_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v___x_781_);
lean_ctor_set(v_reuseFailAlloc_786_, 1, v_k_662_);
lean_ctor_set(v_reuseFailAlloc_786_, 2, v_v_663_);
lean_ctor_set(v_reuseFailAlloc_786_, 3, v___x_783_);
lean_ctor_set(v_reuseFailAlloc_786_, 4, v_r_665_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
else
{
lean_object* v_k_788_; lean_object* v_v_789_; lean_object* v___x_791_; 
v_k_788_ = lean_ctor_get(v___x_671_, 0);
lean_inc(v_k_788_);
v_v_789_ = lean_ctor_get(v___x_671_, 1);
lean_inc(v_v_789_);
lean_dec_ref(v___x_671_);
if (v_isShared_746_ == 0)
{
lean_ctor_set(v___x_745_, 3, v_r_665_);
v___x_791_ = v___x_745_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_size_661_);
lean_ctor_set(v_reuseFailAlloc_796_, 1, v_k_662_);
lean_ctor_set(v_reuseFailAlloc_796_, 2, v_v_663_);
lean_ctor_set(v_reuseFailAlloc_796_, 3, v_r_665_);
lean_ctor_set(v_reuseFailAlloc_796_, 4, v_r_665_);
v___x_791_ = v_reuseFailAlloc_796_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
lean_object* v___x_792_; lean_object* v___x_794_; 
v___x_792_ = lean_unsigned_to_nat(2u);
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 4, v___x_791_);
lean_ctor_set(v___x_669_, 3, v_r_665_);
lean_ctor_set(v___x_669_, 2, v_v_789_);
lean_ctor_set(v___x_669_, 1, v_k_788_);
lean_ctor_set(v___x_669_, 0, v___x_792_);
v___x_794_ = v___x_669_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_792_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v_k_788_);
lean_ctor_set(v_reuseFailAlloc_795_, 2, v_v_789_);
lean_ctor_set(v_reuseFailAlloc_795_, 3, v_r_665_);
lean_ctor_set(v_reuseFailAlloc_795_, 4, v___x_791_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
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
lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_961_; 
lean_inc(v_r_665_);
lean_inc(v_v_663_);
lean_inc(v_k_662_);
v_isSharedCheck_961_ = !lean_is_exclusive(v_r_477_);
if (v_isSharedCheck_961_ == 0)
{
lean_object* v_unused_962_; lean_object* v_unused_963_; lean_object* v_unused_964_; lean_object* v_unused_965_; lean_object* v_unused_966_; 
v_unused_962_ = lean_ctor_get(v_r_477_, 4);
lean_dec(v_unused_962_);
v_unused_963_ = lean_ctor_get(v_r_477_, 3);
lean_dec(v_unused_963_);
v_unused_964_ = lean_ctor_get(v_r_477_, 2);
lean_dec(v_unused_964_);
v_unused_965_ = lean_ctor_get(v_r_477_, 1);
lean_dec(v_unused_965_);
v_unused_966_ = lean_ctor_get(v_r_477_, 0);
lean_dec(v_unused_966_);
v___x_810_ = v_r_477_;
v_isShared_811_ = v_isSharedCheck_961_;
goto v_resetjp_809_;
}
else
{
lean_dec(v_r_477_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_961_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_812_; lean_object* v_tree_813_; 
v___x_812_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_662_, v_v_663_, v_l_664_, v_r_665_);
v_tree_813_ = lean_ctor_get(v___x_812_, 2);
lean_inc(v_tree_813_);
if (lean_obj_tag(v_tree_813_) == 0)
{
lean_object* v_k_814_; lean_object* v_v_815_; lean_object* v_size_816_; lean_object* v___x_817_; lean_object* v___x_818_; uint8_t v___x_819_; 
v_k_814_ = lean_ctor_get(v___x_812_, 0);
lean_inc(v_k_814_);
v_v_815_ = lean_ctor_get(v___x_812_, 1);
lean_inc(v_v_815_);
lean_dec_ref(v___x_812_);
v_size_816_ = lean_ctor_get(v_tree_813_, 0);
v___x_817_ = lean_unsigned_to_nat(3u);
v___x_818_ = lean_nat_mul(v___x_817_, v_size_816_);
v___x_819_ = lean_nat_dec_lt(v___x_818_, v_size_656_);
lean_dec(v___x_818_);
if (v___x_819_ == 0)
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_823_; 
lean_dec(v_r_660_);
v___x_820_ = lean_nat_add(v___x_666_, v_size_656_);
v___x_821_ = lean_nat_add(v___x_820_, v_size_816_);
lean_dec(v___x_820_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 4, v_tree_813_);
lean_ctor_set(v___x_810_, 3, v_l_476_);
lean_ctor_set(v___x_810_, 2, v_v_815_);
lean_ctor_set(v___x_810_, 1, v_k_814_);
lean_ctor_set(v___x_810_, 0, v___x_821_);
v___x_823_ = v___x_810_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v___x_821_);
lean_ctor_set(v_reuseFailAlloc_824_, 1, v_k_814_);
lean_ctor_set(v_reuseFailAlloc_824_, 2, v_v_815_);
lean_ctor_set(v_reuseFailAlloc_824_, 3, v_l_476_);
lean_ctor_set(v_reuseFailAlloc_824_, 4, v_tree_813_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
else
{
lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_890_; 
lean_inc(v_l_659_);
lean_inc(v_v_658_);
lean_inc(v_k_657_);
lean_inc(v_size_656_);
v_isSharedCheck_890_ = !lean_is_exclusive(v_l_476_);
if (v_isSharedCheck_890_ == 0)
{
lean_object* v_unused_891_; lean_object* v_unused_892_; lean_object* v_unused_893_; lean_object* v_unused_894_; lean_object* v_unused_895_; 
v_unused_891_ = lean_ctor_get(v_l_476_, 4);
lean_dec(v_unused_891_);
v_unused_892_ = lean_ctor_get(v_l_476_, 3);
lean_dec(v_unused_892_);
v_unused_893_ = lean_ctor_get(v_l_476_, 2);
lean_dec(v_unused_893_);
v_unused_894_ = lean_ctor_get(v_l_476_, 1);
lean_dec(v_unused_894_);
v_unused_895_ = lean_ctor_get(v_l_476_, 0);
lean_dec(v_unused_895_);
v___x_826_ = v_l_476_;
v_isShared_827_ = v_isSharedCheck_890_;
goto v_resetjp_825_;
}
else
{
lean_dec(v_l_476_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_890_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v_size_828_; lean_object* v_size_829_; lean_object* v_k_830_; lean_object* v_v_831_; lean_object* v_l_832_; lean_object* v_r_833_; lean_object* v___x_834_; lean_object* v___x_835_; uint8_t v___x_836_; 
v_size_828_ = lean_ctor_get(v_l_659_, 0);
v_size_829_ = lean_ctor_get(v_r_660_, 0);
v_k_830_ = lean_ctor_get(v_r_660_, 1);
v_v_831_ = lean_ctor_get(v_r_660_, 2);
v_l_832_ = lean_ctor_get(v_r_660_, 3);
v_r_833_ = lean_ctor_get(v_r_660_, 4);
v___x_834_ = lean_unsigned_to_nat(2u);
v___x_835_ = lean_nat_mul(v___x_834_, v_size_828_);
v___x_836_ = lean_nat_dec_lt(v_size_829_, v___x_835_);
lean_dec(v___x_835_);
if (v___x_836_ == 0)
{
lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_874_; 
lean_inc(v_r_833_);
lean_inc(v_l_832_);
lean_inc(v_v_831_);
lean_inc(v_k_830_);
lean_del_object(v___x_826_);
v_isSharedCheck_874_ = !lean_is_exclusive(v_r_660_);
if (v_isSharedCheck_874_ == 0)
{
lean_object* v_unused_875_; lean_object* v_unused_876_; lean_object* v_unused_877_; lean_object* v_unused_878_; lean_object* v_unused_879_; 
v_unused_875_ = lean_ctor_get(v_r_660_, 4);
lean_dec(v_unused_875_);
v_unused_876_ = lean_ctor_get(v_r_660_, 3);
lean_dec(v_unused_876_);
v_unused_877_ = lean_ctor_get(v_r_660_, 2);
lean_dec(v_unused_877_);
v_unused_878_ = lean_ctor_get(v_r_660_, 1);
lean_dec(v_unused_878_);
v_unused_879_ = lean_ctor_get(v_r_660_, 0);
lean_dec(v_unused_879_);
v___x_838_ = v_r_660_;
v_isShared_839_ = v_isSharedCheck_874_;
goto v_resetjp_837_;
}
else
{
lean_dec(v_r_660_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_874_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___y_843_; lean_object* v___y_844_; lean_object* v___y_845_; lean_object* v___x_862_; lean_object* v___y_864_; 
v___x_840_ = lean_nat_add(v___x_666_, v_size_656_);
lean_dec(v_size_656_);
v___x_841_ = lean_nat_add(v___x_840_, v_size_816_);
lean_dec(v___x_840_);
v___x_862_ = lean_nat_add(v___x_666_, v_size_828_);
if (lean_obj_tag(v_l_832_) == 0)
{
lean_object* v_size_872_; 
v_size_872_ = lean_ctor_get(v_l_832_, 0);
lean_inc(v_size_872_);
v___y_864_ = v_size_872_;
goto v___jp_863_;
}
else
{
lean_object* v___x_873_; 
v___x_873_ = lean_unsigned_to_nat(0u);
v___y_864_ = v___x_873_;
goto v___jp_863_;
}
v___jp_842_:
{
lean_object* v___x_846_; lean_object* v___x_848_; 
v___x_846_ = lean_nat_add(v___y_844_, v___y_845_);
lean_dec(v___y_845_);
lean_dec(v___y_844_);
lean_inc_ref(v_tree_813_);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 4, v_tree_813_);
lean_ctor_set(v___x_838_, 3, v_r_833_);
lean_ctor_set(v___x_838_, 2, v_v_815_);
lean_ctor_set(v___x_838_, 1, v_k_814_);
lean_ctor_set(v___x_838_, 0, v___x_846_);
v___x_848_ = v___x_838_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v___x_846_);
lean_ctor_set(v_reuseFailAlloc_861_, 1, v_k_814_);
lean_ctor_set(v_reuseFailAlloc_861_, 2, v_v_815_);
lean_ctor_set(v_reuseFailAlloc_861_, 3, v_r_833_);
lean_ctor_set(v_reuseFailAlloc_861_, 4, v_tree_813_);
v___x_848_ = v_reuseFailAlloc_861_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_855_; 
v_isSharedCheck_855_ = !lean_is_exclusive(v_tree_813_);
if (v_isSharedCheck_855_ == 0)
{
lean_object* v_unused_856_; lean_object* v_unused_857_; lean_object* v_unused_858_; lean_object* v_unused_859_; lean_object* v_unused_860_; 
v_unused_856_ = lean_ctor_get(v_tree_813_, 4);
lean_dec(v_unused_856_);
v_unused_857_ = lean_ctor_get(v_tree_813_, 3);
lean_dec(v_unused_857_);
v_unused_858_ = lean_ctor_get(v_tree_813_, 2);
lean_dec(v_unused_858_);
v_unused_859_ = lean_ctor_get(v_tree_813_, 1);
lean_dec(v_unused_859_);
v_unused_860_ = lean_ctor_get(v_tree_813_, 0);
lean_dec(v_unused_860_);
v___x_850_ = v_tree_813_;
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
else
{
lean_dec(v_tree_813_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 4, v___x_848_);
lean_ctor_set(v___x_850_, 3, v___y_843_);
lean_ctor_set(v___x_850_, 2, v_v_831_);
lean_ctor_set(v___x_850_, 1, v_k_830_);
lean_ctor_set(v___x_850_, 0, v___x_841_);
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v___x_841_);
lean_ctor_set(v_reuseFailAlloc_854_, 1, v_k_830_);
lean_ctor_set(v_reuseFailAlloc_854_, 2, v_v_831_);
lean_ctor_set(v_reuseFailAlloc_854_, 3, v___y_843_);
lean_ctor_set(v_reuseFailAlloc_854_, 4, v___x_848_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
}
v___jp_863_:
{
lean_object* v___x_865_; lean_object* v___x_867_; 
v___x_865_ = lean_nat_add(v___x_862_, v___y_864_);
lean_dec(v___y_864_);
lean_dec(v___x_862_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 4, v_l_832_);
lean_ctor_set(v___x_810_, 3, v_l_659_);
lean_ctor_set(v___x_810_, 2, v_v_658_);
lean_ctor_set(v___x_810_, 1, v_k_657_);
lean_ctor_set(v___x_810_, 0, v___x_865_);
v___x_867_ = v___x_810_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v___x_865_);
lean_ctor_set(v_reuseFailAlloc_871_, 1, v_k_657_);
lean_ctor_set(v_reuseFailAlloc_871_, 2, v_v_658_);
lean_ctor_set(v_reuseFailAlloc_871_, 3, v_l_659_);
lean_ctor_set(v_reuseFailAlloc_871_, 4, v_l_832_);
v___x_867_ = v_reuseFailAlloc_871_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
lean_object* v___x_868_; 
v___x_868_ = lean_nat_add(v___x_666_, v_size_816_);
if (lean_obj_tag(v_r_833_) == 0)
{
lean_object* v_size_869_; 
v_size_869_ = lean_ctor_get(v_r_833_, 0);
lean_inc(v_size_869_);
v___y_843_ = v___x_867_;
v___y_844_ = v___x_868_;
v___y_845_ = v_size_869_;
goto v___jp_842_;
}
else
{
lean_object* v___x_870_; 
v___x_870_ = lean_unsigned_to_nat(0u);
v___y_843_ = v___x_867_;
v___y_844_ = v___x_868_;
v___y_845_ = v___x_870_;
goto v___jp_842_;
}
}
}
}
}
else
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_885_; 
v___x_880_ = lean_nat_add(v___x_666_, v_size_656_);
lean_dec(v_size_656_);
v___x_881_ = lean_nat_add(v___x_880_, v_size_816_);
lean_dec(v___x_880_);
v___x_882_ = lean_nat_add(v___x_666_, v_size_816_);
v___x_883_ = lean_nat_add(v___x_882_, v_size_829_);
lean_dec(v___x_882_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 4, v_tree_813_);
lean_ctor_set(v___x_810_, 3, v_r_660_);
lean_ctor_set(v___x_810_, 2, v_v_815_);
lean_ctor_set(v___x_810_, 1, v_k_814_);
lean_ctor_set(v___x_810_, 0, v___x_883_);
v___x_885_ = v___x_810_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v___x_883_);
lean_ctor_set(v_reuseFailAlloc_889_, 1, v_k_814_);
lean_ctor_set(v_reuseFailAlloc_889_, 2, v_v_815_);
lean_ctor_set(v_reuseFailAlloc_889_, 3, v_r_660_);
lean_ctor_set(v_reuseFailAlloc_889_, 4, v_tree_813_);
v___x_885_ = v_reuseFailAlloc_889_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
lean_object* v___x_887_; 
if (v_isShared_827_ == 0)
{
lean_ctor_set(v___x_826_, 4, v___x_885_);
lean_ctor_set(v___x_826_, 0, v___x_881_);
v___x_887_ = v___x_826_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v___x_881_);
lean_ctor_set(v_reuseFailAlloc_888_, 1, v_k_657_);
lean_ctor_set(v_reuseFailAlloc_888_, 2, v_v_658_);
lean_ctor_set(v_reuseFailAlloc_888_, 3, v_l_659_);
lean_ctor_set(v_reuseFailAlloc_888_, 4, v___x_885_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_659_) == 0)
{
lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_919_; 
lean_inc_ref(v_l_659_);
lean_inc(v_v_658_);
lean_inc(v_k_657_);
lean_inc(v_size_656_);
v_isSharedCheck_919_ = !lean_is_exclusive(v_l_476_);
if (v_isSharedCheck_919_ == 0)
{
lean_object* v_unused_920_; lean_object* v_unused_921_; lean_object* v_unused_922_; lean_object* v_unused_923_; lean_object* v_unused_924_; 
v_unused_920_ = lean_ctor_get(v_l_476_, 4);
lean_dec(v_unused_920_);
v_unused_921_ = lean_ctor_get(v_l_476_, 3);
lean_dec(v_unused_921_);
v_unused_922_ = lean_ctor_get(v_l_476_, 2);
lean_dec(v_unused_922_);
v_unused_923_ = lean_ctor_get(v_l_476_, 1);
lean_dec(v_unused_923_);
v_unused_924_ = lean_ctor_get(v_l_476_, 0);
lean_dec(v_unused_924_);
v___x_897_ = v_l_476_;
v_isShared_898_ = v_isSharedCheck_919_;
goto v_resetjp_896_;
}
else
{
lean_dec(v_l_476_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_919_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
if (lean_obj_tag(v_r_660_) == 0)
{
lean_object* v_k_899_; lean_object* v_v_900_; lean_object* v_size_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_905_; 
v_k_899_ = lean_ctor_get(v___x_812_, 0);
lean_inc(v_k_899_);
v_v_900_ = lean_ctor_get(v___x_812_, 1);
lean_inc(v_v_900_);
lean_dec_ref(v___x_812_);
v_size_901_ = lean_ctor_get(v_r_660_, 0);
v___x_902_ = lean_nat_add(v___x_666_, v_size_656_);
lean_dec(v_size_656_);
v___x_903_ = lean_nat_add(v___x_666_, v_size_901_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 4, v_tree_813_);
lean_ctor_set(v___x_810_, 3, v_r_660_);
lean_ctor_set(v___x_810_, 2, v_v_900_);
lean_ctor_set(v___x_810_, 1, v_k_899_);
lean_ctor_set(v___x_810_, 0, v___x_903_);
v___x_905_ = v___x_810_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v___x_903_);
lean_ctor_set(v_reuseFailAlloc_909_, 1, v_k_899_);
lean_ctor_set(v_reuseFailAlloc_909_, 2, v_v_900_);
lean_ctor_set(v_reuseFailAlloc_909_, 3, v_r_660_);
lean_ctor_set(v_reuseFailAlloc_909_, 4, v_tree_813_);
v___x_905_ = v_reuseFailAlloc_909_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
lean_object* v___x_907_; 
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 4, v___x_905_);
lean_ctor_set(v___x_897_, 0, v___x_902_);
v___x_907_ = v___x_897_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v___x_902_);
lean_ctor_set(v_reuseFailAlloc_908_, 1, v_k_657_);
lean_ctor_set(v_reuseFailAlloc_908_, 2, v_v_658_);
lean_ctor_set(v_reuseFailAlloc_908_, 3, v_l_659_);
lean_ctor_set(v_reuseFailAlloc_908_, 4, v___x_905_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
else
{
lean_object* v_k_910_; lean_object* v_v_911_; lean_object* v___x_912_; lean_object* v___x_914_; 
lean_dec(v_size_656_);
v_k_910_ = lean_ctor_get(v___x_812_, 0);
lean_inc(v_k_910_);
v_v_911_ = lean_ctor_get(v___x_812_, 1);
lean_inc(v_v_911_);
lean_dec_ref(v___x_812_);
v___x_912_ = lean_unsigned_to_nat(3u);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 4, v_r_660_);
lean_ctor_set(v___x_810_, 3, v_r_660_);
lean_ctor_set(v___x_810_, 2, v_v_911_);
lean_ctor_set(v___x_810_, 1, v_k_910_);
lean_ctor_set(v___x_810_, 0, v___x_666_);
v___x_914_ = v___x_810_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v___x_666_);
lean_ctor_set(v_reuseFailAlloc_918_, 1, v_k_910_);
lean_ctor_set(v_reuseFailAlloc_918_, 2, v_v_911_);
lean_ctor_set(v_reuseFailAlloc_918_, 3, v_r_660_);
lean_ctor_set(v_reuseFailAlloc_918_, 4, v_r_660_);
v___x_914_ = v_reuseFailAlloc_918_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
lean_object* v___x_916_; 
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 4, v___x_914_);
lean_ctor_set(v___x_897_, 0, v___x_912_);
v___x_916_ = v___x_897_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v___x_912_);
lean_ctor_set(v_reuseFailAlloc_917_, 1, v_k_657_);
lean_ctor_set(v_reuseFailAlloc_917_, 2, v_v_658_);
lean_ctor_set(v_reuseFailAlloc_917_, 3, v_l_659_);
lean_ctor_set(v_reuseFailAlloc_917_, 4, v___x_914_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
return v___x_916_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_660_) == 0)
{
lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_949_; 
lean_inc(v_l_659_);
lean_inc(v_v_658_);
lean_inc(v_k_657_);
v_isSharedCheck_949_ = !lean_is_exclusive(v_l_476_);
if (v_isSharedCheck_949_ == 0)
{
lean_object* v_unused_950_; lean_object* v_unused_951_; lean_object* v_unused_952_; lean_object* v_unused_953_; lean_object* v_unused_954_; 
v_unused_950_ = lean_ctor_get(v_l_476_, 4);
lean_dec(v_unused_950_);
v_unused_951_ = lean_ctor_get(v_l_476_, 3);
lean_dec(v_unused_951_);
v_unused_952_ = lean_ctor_get(v_l_476_, 2);
lean_dec(v_unused_952_);
v_unused_953_ = lean_ctor_get(v_l_476_, 1);
lean_dec(v_unused_953_);
v_unused_954_ = lean_ctor_get(v_l_476_, 0);
lean_dec(v_unused_954_);
v___x_926_ = v_l_476_;
v_isShared_927_ = v_isSharedCheck_949_;
goto v_resetjp_925_;
}
else
{
lean_dec(v_l_476_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_949_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v_k_928_; lean_object* v_v_929_; lean_object* v_k_930_; lean_object* v_v_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_945_; 
v_k_928_ = lean_ctor_get(v___x_812_, 0);
lean_inc(v_k_928_);
v_v_929_ = lean_ctor_get(v___x_812_, 1);
lean_inc(v_v_929_);
lean_dec_ref(v___x_812_);
v_k_930_ = lean_ctor_get(v_r_660_, 1);
v_v_931_ = lean_ctor_get(v_r_660_, 2);
v_isSharedCheck_945_ = !lean_is_exclusive(v_r_660_);
if (v_isSharedCheck_945_ == 0)
{
lean_object* v_unused_946_; lean_object* v_unused_947_; lean_object* v_unused_948_; 
v_unused_946_ = lean_ctor_get(v_r_660_, 4);
lean_dec(v_unused_946_);
v_unused_947_ = lean_ctor_get(v_r_660_, 3);
lean_dec(v_unused_947_);
v_unused_948_ = lean_ctor_get(v_r_660_, 0);
lean_dec(v_unused_948_);
v___x_933_ = v_r_660_;
v_isShared_934_ = v_isSharedCheck_945_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_v_931_);
lean_inc(v_k_930_);
lean_dec(v_r_660_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_945_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_935_; lean_object* v___x_937_; 
v___x_935_ = lean_unsigned_to_nat(3u);
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 4, v_l_659_);
lean_ctor_set(v___x_933_, 3, v_l_659_);
lean_ctor_set(v___x_933_, 2, v_v_658_);
lean_ctor_set(v___x_933_, 1, v_k_657_);
lean_ctor_set(v___x_933_, 0, v___x_666_);
v___x_937_ = v___x_933_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v___x_666_);
lean_ctor_set(v_reuseFailAlloc_944_, 1, v_k_657_);
lean_ctor_set(v_reuseFailAlloc_944_, 2, v_v_658_);
lean_ctor_set(v_reuseFailAlloc_944_, 3, v_l_659_);
lean_ctor_set(v_reuseFailAlloc_944_, 4, v_l_659_);
v___x_937_ = v_reuseFailAlloc_944_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
lean_object* v___x_939_; 
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 4, v_l_659_);
lean_ctor_set(v___x_810_, 3, v_l_659_);
lean_ctor_set(v___x_810_, 2, v_v_929_);
lean_ctor_set(v___x_810_, 1, v_k_928_);
lean_ctor_set(v___x_810_, 0, v___x_666_);
v___x_939_ = v___x_810_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v___x_666_);
lean_ctor_set(v_reuseFailAlloc_943_, 1, v_k_928_);
lean_ctor_set(v_reuseFailAlloc_943_, 2, v_v_929_);
lean_ctor_set(v_reuseFailAlloc_943_, 3, v_l_659_);
lean_ctor_set(v_reuseFailAlloc_943_, 4, v_l_659_);
v___x_939_ = v_reuseFailAlloc_943_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
lean_object* v___x_941_; 
if (v_isShared_927_ == 0)
{
lean_ctor_set(v___x_926_, 4, v___x_939_);
lean_ctor_set(v___x_926_, 3, v___x_937_);
lean_ctor_set(v___x_926_, 2, v_v_931_);
lean_ctor_set(v___x_926_, 1, v_k_930_);
lean_ctor_set(v___x_926_, 0, v___x_935_);
v___x_941_ = v___x_926_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v___x_935_);
lean_ctor_set(v_reuseFailAlloc_942_, 1, v_k_930_);
lean_ctor_set(v_reuseFailAlloc_942_, 2, v_v_931_);
lean_ctor_set(v_reuseFailAlloc_942_, 3, v___x_937_);
lean_ctor_set(v_reuseFailAlloc_942_, 4, v___x_939_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
}
}
}
}
else
{
lean_object* v_k_955_; lean_object* v_v_956_; lean_object* v___x_957_; lean_object* v___x_959_; 
v_k_955_ = lean_ctor_get(v___x_812_, 0);
lean_inc(v_k_955_);
v_v_956_ = lean_ctor_get(v___x_812_, 1);
lean_inc(v_v_956_);
lean_dec_ref(v___x_812_);
v___x_957_ = lean_unsigned_to_nat(2u);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 4, v_r_660_);
lean_ctor_set(v___x_810_, 3, v_l_476_);
lean_ctor_set(v___x_810_, 2, v_v_956_);
lean_ctor_set(v___x_810_, 1, v_k_955_);
lean_ctor_set(v___x_810_, 0, v___x_957_);
v___x_959_ = v___x_810_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v___x_957_);
lean_ctor_set(v_reuseFailAlloc_960_, 1, v_k_955_);
lean_ctor_set(v_reuseFailAlloc_960_, 2, v_v_956_);
lean_ctor_set(v_reuseFailAlloc_960_, 3, v_l_476_);
lean_ctor_set(v_reuseFailAlloc_960_, 4, v_r_660_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
}
}
}
else
{
return v_l_476_;
}
}
else
{
return v_r_477_;
}
}
default: 
{
lean_object* v_impl_967_; lean_object* v___x_968_; 
v_impl_967_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(v_k_472_, v_r_477_);
v___x_968_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_967_) == 0)
{
if (lean_obj_tag(v_l_476_) == 0)
{
lean_object* v_size_969_; lean_object* v_size_970_; lean_object* v_k_971_; lean_object* v_v_972_; lean_object* v_l_973_; lean_object* v_r_974_; lean_object* v___x_975_; lean_object* v___x_976_; uint8_t v___x_977_; 
v_size_969_ = lean_ctor_get(v_impl_967_, 0);
v_size_970_ = lean_ctor_get(v_l_476_, 0);
v_k_971_ = lean_ctor_get(v_l_476_, 1);
v_v_972_ = lean_ctor_get(v_l_476_, 2);
v_l_973_ = lean_ctor_get(v_l_476_, 3);
v_r_974_ = lean_ctor_get(v_l_476_, 4);
lean_inc(v_r_974_);
v___x_975_ = lean_unsigned_to_nat(3u);
v___x_976_ = lean_nat_mul(v___x_975_, v_size_969_);
v___x_977_ = lean_nat_dec_lt(v___x_976_, v_size_970_);
lean_dec(v___x_976_);
if (v___x_977_ == 0)
{
lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_981_; 
lean_dec(v_r_974_);
v___x_978_ = lean_nat_add(v___x_968_, v_size_970_);
v___x_979_ = lean_nat_add(v___x_978_, v_size_969_);
lean_dec(v___x_978_);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 4, v_impl_967_);
lean_ctor_set(v___x_479_, 0, v___x_979_);
v___x_981_ = v___x_479_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v___x_979_);
lean_ctor_set(v_reuseFailAlloc_982_, 1, v_k_474_);
lean_ctor_set(v_reuseFailAlloc_982_, 2, v_v_475_);
lean_ctor_set(v_reuseFailAlloc_982_, 3, v_l_476_);
lean_ctor_set(v_reuseFailAlloc_982_, 4, v_impl_967_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
else
{
lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_1048_; 
lean_inc(v_l_973_);
lean_inc(v_v_972_);
lean_inc(v_k_971_);
lean_inc(v_size_970_);
v_isSharedCheck_1048_ = !lean_is_exclusive(v_l_476_);
if (v_isSharedCheck_1048_ == 0)
{
lean_object* v_unused_1049_; lean_object* v_unused_1050_; lean_object* v_unused_1051_; lean_object* v_unused_1052_; lean_object* v_unused_1053_; 
v_unused_1049_ = lean_ctor_get(v_l_476_, 4);
lean_dec(v_unused_1049_);
v_unused_1050_ = lean_ctor_get(v_l_476_, 3);
lean_dec(v_unused_1050_);
v_unused_1051_ = lean_ctor_get(v_l_476_, 2);
lean_dec(v_unused_1051_);
v_unused_1052_ = lean_ctor_get(v_l_476_, 1);
lean_dec(v_unused_1052_);
v_unused_1053_ = lean_ctor_get(v_l_476_, 0);
lean_dec(v_unused_1053_);
v___x_984_ = v_l_476_;
v_isShared_985_ = v_isSharedCheck_1048_;
goto v_resetjp_983_;
}
else
{
lean_dec(v_l_476_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_1048_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v_size_986_; lean_object* v_size_987_; lean_object* v_k_988_; lean_object* v_v_989_; lean_object* v_l_990_; lean_object* v_r_991_; lean_object* v___x_992_; lean_object* v___x_993_; uint8_t v___x_994_; 
v_size_986_ = lean_ctor_get(v_l_973_, 0);
v_size_987_ = lean_ctor_get(v_r_974_, 0);
v_k_988_ = lean_ctor_get(v_r_974_, 1);
v_v_989_ = lean_ctor_get(v_r_974_, 2);
v_l_990_ = lean_ctor_get(v_r_974_, 3);
v_r_991_ = lean_ctor_get(v_r_974_, 4);
v___x_992_ = lean_unsigned_to_nat(2u);
v___x_993_ = lean_nat_mul(v___x_992_, v_size_986_);
v___x_994_ = lean_nat_dec_lt(v_size_987_, v___x_993_);
lean_dec(v___x_993_);
if (v___x_994_ == 0)
{
lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1023_; 
lean_inc(v_r_991_);
lean_inc(v_l_990_);
lean_inc(v_v_989_);
lean_inc(v_k_988_);
v_isSharedCheck_1023_ = !lean_is_exclusive(v_r_974_);
if (v_isSharedCheck_1023_ == 0)
{
lean_object* v_unused_1024_; lean_object* v_unused_1025_; lean_object* v_unused_1026_; lean_object* v_unused_1027_; lean_object* v_unused_1028_; 
v_unused_1024_ = lean_ctor_get(v_r_974_, 4);
lean_dec(v_unused_1024_);
v_unused_1025_ = lean_ctor_get(v_r_974_, 3);
lean_dec(v_unused_1025_);
v_unused_1026_ = lean_ctor_get(v_r_974_, 2);
lean_dec(v_unused_1026_);
v_unused_1027_ = lean_ctor_get(v_r_974_, 1);
lean_dec(v_unused_1027_);
v_unused_1028_ = lean_ctor_get(v_r_974_, 0);
lean_dec(v_unused_1028_);
v___x_996_ = v_r_974_;
v_isShared_997_ = v_isSharedCheck_1023_;
goto v_resetjp_995_;
}
else
{
lean_dec(v_r_974_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1023_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___y_1001_; lean_object* v___y_1002_; lean_object* v___y_1003_; lean_object* v___x_1011_; lean_object* v___y_1013_; 
v___x_998_ = lean_nat_add(v___x_968_, v_size_970_);
lean_dec(v_size_970_);
v___x_999_ = lean_nat_add(v___x_998_, v_size_969_);
lean_dec(v___x_998_);
v___x_1011_ = lean_nat_add(v___x_968_, v_size_986_);
if (lean_obj_tag(v_l_990_) == 0)
{
lean_object* v_size_1021_; 
v_size_1021_ = lean_ctor_get(v_l_990_, 0);
lean_inc(v_size_1021_);
v___y_1013_ = v_size_1021_;
goto v___jp_1012_;
}
else
{
lean_object* v___x_1022_; 
v___x_1022_ = lean_unsigned_to_nat(0u);
v___y_1013_ = v___x_1022_;
goto v___jp_1012_;
}
v___jp_1000_:
{
lean_object* v___x_1004_; lean_object* v___x_1006_; 
v___x_1004_ = lean_nat_add(v___y_1001_, v___y_1003_);
lean_dec(v___y_1003_);
lean_dec(v___y_1001_);
if (v_isShared_997_ == 0)
{
lean_ctor_set(v___x_996_, 4, v_impl_967_);
lean_ctor_set(v___x_996_, 3, v_r_991_);
lean_ctor_set(v___x_996_, 2, v_v_475_);
lean_ctor_set(v___x_996_, 1, v_k_474_);
lean_ctor_set(v___x_996_, 0, v___x_1004_);
v___x_1006_ = v___x_996_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v___x_1004_);
lean_ctor_set(v_reuseFailAlloc_1010_, 1, v_k_474_);
lean_ctor_set(v_reuseFailAlloc_1010_, 2, v_v_475_);
lean_ctor_set(v_reuseFailAlloc_1010_, 3, v_r_991_);
lean_ctor_set(v_reuseFailAlloc_1010_, 4, v_impl_967_);
v___x_1006_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
lean_object* v___x_1008_; 
if (v_isShared_985_ == 0)
{
lean_ctor_set(v___x_984_, 4, v___x_1006_);
lean_ctor_set(v___x_984_, 3, v___y_1002_);
lean_ctor_set(v___x_984_, 2, v_v_989_);
lean_ctor_set(v___x_984_, 1, v_k_988_);
lean_ctor_set(v___x_984_, 0, v___x_999_);
v___x_1008_ = v___x_984_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v___x_999_);
lean_ctor_set(v_reuseFailAlloc_1009_, 1, v_k_988_);
lean_ctor_set(v_reuseFailAlloc_1009_, 2, v_v_989_);
lean_ctor_set(v_reuseFailAlloc_1009_, 3, v___y_1002_);
lean_ctor_set(v_reuseFailAlloc_1009_, 4, v___x_1006_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
}
v___jp_1012_:
{
lean_object* v___x_1014_; lean_object* v___x_1016_; 
v___x_1014_ = lean_nat_add(v___x_1011_, v___y_1013_);
lean_dec(v___y_1013_);
lean_dec(v___x_1011_);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 4, v_l_990_);
lean_ctor_set(v___x_479_, 3, v_l_973_);
lean_ctor_set(v___x_479_, 2, v_v_972_);
lean_ctor_set(v___x_479_, 1, v_k_971_);
lean_ctor_set(v___x_479_, 0, v___x_1014_);
v___x_1016_ = v___x_479_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v___x_1014_);
lean_ctor_set(v_reuseFailAlloc_1020_, 1, v_k_971_);
lean_ctor_set(v_reuseFailAlloc_1020_, 2, v_v_972_);
lean_ctor_set(v_reuseFailAlloc_1020_, 3, v_l_973_);
lean_ctor_set(v_reuseFailAlloc_1020_, 4, v_l_990_);
v___x_1016_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
lean_object* v___x_1017_; 
v___x_1017_ = lean_nat_add(v___x_968_, v_size_969_);
if (lean_obj_tag(v_r_991_) == 0)
{
lean_object* v_size_1018_; 
v_size_1018_ = lean_ctor_get(v_r_991_, 0);
lean_inc(v_size_1018_);
v___y_1001_ = v___x_1017_;
v___y_1002_ = v___x_1016_;
v___y_1003_ = v_size_1018_;
goto v___jp_1000_;
}
else
{
lean_object* v___x_1019_; 
v___x_1019_ = lean_unsigned_to_nat(0u);
v___y_1001_ = v___x_1017_;
v___y_1002_ = v___x_1016_;
v___y_1003_ = v___x_1019_;
goto v___jp_1000_;
}
}
}
}
}
else
{
lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1034_; 
lean_del_object(v___x_479_);
v___x_1029_ = lean_nat_add(v___x_968_, v_size_970_);
lean_dec(v_size_970_);
v___x_1030_ = lean_nat_add(v___x_1029_, v_size_969_);
lean_dec(v___x_1029_);
v___x_1031_ = lean_nat_add(v___x_968_, v_size_969_);
v___x_1032_ = lean_nat_add(v___x_1031_, v_size_987_);
lean_dec(v___x_1031_);
lean_inc_ref(v_impl_967_);
if (v_isShared_985_ == 0)
{
lean_ctor_set(v___x_984_, 4, v_impl_967_);
lean_ctor_set(v___x_984_, 3, v_r_974_);
lean_ctor_set(v___x_984_, 2, v_v_475_);
lean_ctor_set(v___x_984_, 1, v_k_474_);
lean_ctor_set(v___x_984_, 0, v___x_1032_);
v___x_1034_ = v___x_984_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v___x_1032_);
lean_ctor_set(v_reuseFailAlloc_1047_, 1, v_k_474_);
lean_ctor_set(v_reuseFailAlloc_1047_, 2, v_v_475_);
lean_ctor_set(v_reuseFailAlloc_1047_, 3, v_r_974_);
lean_ctor_set(v_reuseFailAlloc_1047_, 4, v_impl_967_);
v___x_1034_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1041_; 
v_isSharedCheck_1041_ = !lean_is_exclusive(v_impl_967_);
if (v_isSharedCheck_1041_ == 0)
{
lean_object* v_unused_1042_; lean_object* v_unused_1043_; lean_object* v_unused_1044_; lean_object* v_unused_1045_; lean_object* v_unused_1046_; 
v_unused_1042_ = lean_ctor_get(v_impl_967_, 4);
lean_dec(v_unused_1042_);
v_unused_1043_ = lean_ctor_get(v_impl_967_, 3);
lean_dec(v_unused_1043_);
v_unused_1044_ = lean_ctor_get(v_impl_967_, 2);
lean_dec(v_unused_1044_);
v_unused_1045_ = lean_ctor_get(v_impl_967_, 1);
lean_dec(v_unused_1045_);
v_unused_1046_ = lean_ctor_get(v_impl_967_, 0);
lean_dec(v_unused_1046_);
v___x_1036_ = v_impl_967_;
v_isShared_1037_ = v_isSharedCheck_1041_;
goto v_resetjp_1035_;
}
else
{
lean_dec(v_impl_967_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1041_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
lean_object* v___x_1039_; 
if (v_isShared_1037_ == 0)
{
lean_ctor_set(v___x_1036_, 4, v___x_1034_);
lean_ctor_set(v___x_1036_, 3, v_l_973_);
lean_ctor_set(v___x_1036_, 2, v_v_972_);
lean_ctor_set(v___x_1036_, 1, v_k_971_);
lean_ctor_set(v___x_1036_, 0, v___x_1030_);
v___x_1039_ = v___x_1036_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v___x_1030_);
lean_ctor_set(v_reuseFailAlloc_1040_, 1, v_k_971_);
lean_ctor_set(v_reuseFailAlloc_1040_, 2, v_v_972_);
lean_ctor_set(v_reuseFailAlloc_1040_, 3, v_l_973_);
lean_ctor_set(v_reuseFailAlloc_1040_, 4, v___x_1034_);
v___x_1039_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
return v___x_1039_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_1054_; lean_object* v___x_1055_; lean_object* v___x_1057_; 
v_size_1054_ = lean_ctor_get(v_impl_967_, 0);
v___x_1055_ = lean_nat_add(v___x_968_, v_size_1054_);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 4, v_impl_967_);
lean_ctor_set(v___x_479_, 0, v___x_1055_);
v___x_1057_ = v___x_479_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1055_);
lean_ctor_set(v_reuseFailAlloc_1058_, 1, v_k_474_);
lean_ctor_set(v_reuseFailAlloc_1058_, 2, v_v_475_);
lean_ctor_set(v_reuseFailAlloc_1058_, 3, v_l_476_);
lean_ctor_set(v_reuseFailAlloc_1058_, 4, v_impl_967_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
else
{
if (lean_obj_tag(v_l_476_) == 0)
{
lean_object* v_l_1059_; 
v_l_1059_ = lean_ctor_get(v_l_476_, 3);
if (lean_obj_tag(v_l_1059_) == 0)
{
lean_object* v_r_1060_; 
lean_inc_ref(v_l_1059_);
v_r_1060_ = lean_ctor_get(v_l_476_, 4);
lean_inc(v_r_1060_);
if (lean_obj_tag(v_r_1060_) == 0)
{
lean_object* v_size_1061_; lean_object* v_k_1062_; lean_object* v_v_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1076_; 
v_size_1061_ = lean_ctor_get(v_l_476_, 0);
v_k_1062_ = lean_ctor_get(v_l_476_, 1);
v_v_1063_ = lean_ctor_get(v_l_476_, 2);
v_isSharedCheck_1076_ = !lean_is_exclusive(v_l_476_);
if (v_isSharedCheck_1076_ == 0)
{
lean_object* v_unused_1077_; lean_object* v_unused_1078_; 
v_unused_1077_ = lean_ctor_get(v_l_476_, 4);
lean_dec(v_unused_1077_);
v_unused_1078_ = lean_ctor_get(v_l_476_, 3);
lean_dec(v_unused_1078_);
v___x_1065_ = v_l_476_;
v_isShared_1066_ = v_isSharedCheck_1076_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_v_1063_);
lean_inc(v_k_1062_);
lean_inc(v_size_1061_);
lean_dec(v_l_476_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1076_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v_size_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1071_; 
v_size_1067_ = lean_ctor_get(v_r_1060_, 0);
v___x_1068_ = lean_nat_add(v___x_968_, v_size_1061_);
lean_dec(v_size_1061_);
v___x_1069_ = lean_nat_add(v___x_968_, v_size_1067_);
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 4, v_impl_967_);
lean_ctor_set(v___x_1065_, 3, v_r_1060_);
lean_ctor_set(v___x_1065_, 2, v_v_475_);
lean_ctor_set(v___x_1065_, 1, v_k_474_);
lean_ctor_set(v___x_1065_, 0, v___x_1069_);
v___x_1071_ = v___x_1065_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v___x_1069_);
lean_ctor_set(v_reuseFailAlloc_1075_, 1, v_k_474_);
lean_ctor_set(v_reuseFailAlloc_1075_, 2, v_v_475_);
lean_ctor_set(v_reuseFailAlloc_1075_, 3, v_r_1060_);
lean_ctor_set(v_reuseFailAlloc_1075_, 4, v_impl_967_);
v___x_1071_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
lean_object* v___x_1073_; 
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 4, v___x_1071_);
lean_ctor_set(v___x_479_, 3, v_l_1059_);
lean_ctor_set(v___x_479_, 2, v_v_1063_);
lean_ctor_set(v___x_479_, 1, v_k_1062_);
lean_ctor_set(v___x_479_, 0, v___x_1068_);
v___x_1073_ = v___x_479_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v___x_1068_);
lean_ctor_set(v_reuseFailAlloc_1074_, 1, v_k_1062_);
lean_ctor_set(v_reuseFailAlloc_1074_, 2, v_v_1063_);
lean_ctor_set(v_reuseFailAlloc_1074_, 3, v_l_1059_);
lean_ctor_set(v_reuseFailAlloc_1074_, 4, v___x_1071_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
}
else
{
lean_object* v_k_1079_; lean_object* v_v_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1091_; 
v_k_1079_ = lean_ctor_get(v_l_476_, 1);
v_v_1080_ = lean_ctor_get(v_l_476_, 2);
v_isSharedCheck_1091_ = !lean_is_exclusive(v_l_476_);
if (v_isSharedCheck_1091_ == 0)
{
lean_object* v_unused_1092_; lean_object* v_unused_1093_; lean_object* v_unused_1094_; 
v_unused_1092_ = lean_ctor_get(v_l_476_, 4);
lean_dec(v_unused_1092_);
v_unused_1093_ = lean_ctor_get(v_l_476_, 3);
lean_dec(v_unused_1093_);
v_unused_1094_ = lean_ctor_get(v_l_476_, 0);
lean_dec(v_unused_1094_);
v___x_1082_ = v_l_476_;
v_isShared_1083_ = v_isSharedCheck_1091_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_v_1080_);
lean_inc(v_k_1079_);
lean_dec(v_l_476_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1091_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1084_; lean_object* v___x_1086_; 
v___x_1084_ = lean_unsigned_to_nat(3u);
if (v_isShared_1083_ == 0)
{
lean_ctor_set(v___x_1082_, 3, v_r_1060_);
lean_ctor_set(v___x_1082_, 2, v_v_475_);
lean_ctor_set(v___x_1082_, 1, v_k_474_);
lean_ctor_set(v___x_1082_, 0, v___x_968_);
v___x_1086_ = v___x_1082_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v___x_968_);
lean_ctor_set(v_reuseFailAlloc_1090_, 1, v_k_474_);
lean_ctor_set(v_reuseFailAlloc_1090_, 2, v_v_475_);
lean_ctor_set(v_reuseFailAlloc_1090_, 3, v_r_1060_);
lean_ctor_set(v_reuseFailAlloc_1090_, 4, v_r_1060_);
v___x_1086_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
lean_object* v___x_1088_; 
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 4, v___x_1086_);
lean_ctor_set(v___x_479_, 3, v_l_1059_);
lean_ctor_set(v___x_479_, 2, v_v_1080_);
lean_ctor_set(v___x_479_, 1, v_k_1079_);
lean_ctor_set(v___x_479_, 0, v___x_1084_);
v___x_1088_ = v___x_479_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v___x_1084_);
lean_ctor_set(v_reuseFailAlloc_1089_, 1, v_k_1079_);
lean_ctor_set(v_reuseFailAlloc_1089_, 2, v_v_1080_);
lean_ctor_set(v_reuseFailAlloc_1089_, 3, v_l_1059_);
lean_ctor_set(v_reuseFailAlloc_1089_, 4, v___x_1086_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
}
}
else
{
lean_object* v_r_1095_; 
v_r_1095_ = lean_ctor_get(v_l_476_, 4);
lean_inc(v_r_1095_);
if (lean_obj_tag(v_r_1095_) == 0)
{
lean_object* v_k_1096_; lean_object* v_v_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1120_; 
lean_inc(v_l_1059_);
v_k_1096_ = lean_ctor_get(v_l_476_, 1);
v_v_1097_ = lean_ctor_get(v_l_476_, 2);
v_isSharedCheck_1120_ = !lean_is_exclusive(v_l_476_);
if (v_isSharedCheck_1120_ == 0)
{
lean_object* v_unused_1121_; lean_object* v_unused_1122_; lean_object* v_unused_1123_; 
v_unused_1121_ = lean_ctor_get(v_l_476_, 4);
lean_dec(v_unused_1121_);
v_unused_1122_ = lean_ctor_get(v_l_476_, 3);
lean_dec(v_unused_1122_);
v_unused_1123_ = lean_ctor_get(v_l_476_, 0);
lean_dec(v_unused_1123_);
v___x_1099_ = v_l_476_;
v_isShared_1100_ = v_isSharedCheck_1120_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_v_1097_);
lean_inc(v_k_1096_);
lean_dec(v_l_476_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1120_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v_k_1101_; lean_object* v_v_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1116_; 
v_k_1101_ = lean_ctor_get(v_r_1095_, 1);
v_v_1102_ = lean_ctor_get(v_r_1095_, 2);
v_isSharedCheck_1116_ = !lean_is_exclusive(v_r_1095_);
if (v_isSharedCheck_1116_ == 0)
{
lean_object* v_unused_1117_; lean_object* v_unused_1118_; lean_object* v_unused_1119_; 
v_unused_1117_ = lean_ctor_get(v_r_1095_, 4);
lean_dec(v_unused_1117_);
v_unused_1118_ = lean_ctor_get(v_r_1095_, 3);
lean_dec(v_unused_1118_);
v_unused_1119_ = lean_ctor_get(v_r_1095_, 0);
lean_dec(v_unused_1119_);
v___x_1104_ = v_r_1095_;
v_isShared_1105_ = v_isSharedCheck_1116_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_v_1102_);
lean_inc(v_k_1101_);
lean_dec(v_r_1095_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1116_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1106_; lean_object* v___x_1108_; 
v___x_1106_ = lean_unsigned_to_nat(3u);
if (v_isShared_1105_ == 0)
{
lean_ctor_set(v___x_1104_, 4, v_l_1059_);
lean_ctor_set(v___x_1104_, 3, v_l_1059_);
lean_ctor_set(v___x_1104_, 2, v_v_1097_);
lean_ctor_set(v___x_1104_, 1, v_k_1096_);
lean_ctor_set(v___x_1104_, 0, v___x_968_);
v___x_1108_ = v___x_1104_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v___x_968_);
lean_ctor_set(v_reuseFailAlloc_1115_, 1, v_k_1096_);
lean_ctor_set(v_reuseFailAlloc_1115_, 2, v_v_1097_);
lean_ctor_set(v_reuseFailAlloc_1115_, 3, v_l_1059_);
lean_ctor_set(v_reuseFailAlloc_1115_, 4, v_l_1059_);
v___x_1108_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
lean_object* v___x_1110_; 
if (v_isShared_1100_ == 0)
{
lean_ctor_set(v___x_1099_, 4, v_l_1059_);
lean_ctor_set(v___x_1099_, 2, v_v_475_);
lean_ctor_set(v___x_1099_, 1, v_k_474_);
lean_ctor_set(v___x_1099_, 0, v___x_968_);
v___x_1110_ = v___x_1099_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v___x_968_);
lean_ctor_set(v_reuseFailAlloc_1114_, 1, v_k_474_);
lean_ctor_set(v_reuseFailAlloc_1114_, 2, v_v_475_);
lean_ctor_set(v_reuseFailAlloc_1114_, 3, v_l_1059_);
lean_ctor_set(v_reuseFailAlloc_1114_, 4, v_l_1059_);
v___x_1110_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
lean_object* v___x_1112_; 
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 4, v___x_1110_);
lean_ctor_set(v___x_479_, 3, v___x_1108_);
lean_ctor_set(v___x_479_, 2, v_v_1102_);
lean_ctor_set(v___x_479_, 1, v_k_1101_);
lean_ctor_set(v___x_479_, 0, v___x_1106_);
v___x_1112_ = v___x_479_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v___x_1106_);
lean_ctor_set(v_reuseFailAlloc_1113_, 1, v_k_1101_);
lean_ctor_set(v_reuseFailAlloc_1113_, 2, v_v_1102_);
lean_ctor_set(v_reuseFailAlloc_1113_, 3, v___x_1108_);
lean_ctor_set(v_reuseFailAlloc_1113_, 4, v___x_1110_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
}
}
}
else
{
lean_object* v___x_1124_; lean_object* v___x_1126_; 
v___x_1124_ = lean_unsigned_to_nat(2u);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 4, v_r_1095_);
lean_ctor_set(v___x_479_, 0, v___x_1124_);
v___x_1126_ = v___x_479_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v___x_1124_);
lean_ctor_set(v_reuseFailAlloc_1127_, 1, v_k_474_);
lean_ctor_set(v_reuseFailAlloc_1127_, 2, v_v_475_);
lean_ctor_set(v_reuseFailAlloc_1127_, 3, v_l_476_);
lean_ctor_set(v_reuseFailAlloc_1127_, 4, v_r_1095_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
return v___x_1126_;
}
}
}
}
else
{
lean_object* v___x_1129_; 
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 4, v_l_476_);
lean_ctor_set(v___x_479_, 0, v___x_968_);
v___x_1129_ = v___x_479_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v___x_968_);
lean_ctor_set(v_reuseFailAlloc_1130_, 1, v_k_474_);
lean_ctor_set(v_reuseFailAlloc_1130_, 2, v_v_475_);
lean_ctor_set(v_reuseFailAlloc_1130_, 3, v_l_476_);
lean_ctor_set(v_reuseFailAlloc_1130_, 4, v_l_476_);
v___x_1129_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
return v___x_1129_;
}
}
}
}
}
}
}
else
{
return v_t_473_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg___boxed(lean_object* v_k_1133_, lean_object* v_t_1134_){
_start:
{
lean_object* v_res_1135_; 
v_res_1135_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(v_k_1133_, v_t_1134_);
lean_dec(v_k_1133_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeBuiltinDocString(lean_object* v_declName_1136_){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1138_ = l___private_Lean_DocString_Extension_0__Lean_builtinDocStrings;
v___x_1139_ = lean_st_ref_take(v___x_1138_);
v___x_1140_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(v_declName_1136_, v___x_1139_);
v___x_1141_ = lean_st_ref_put(v___x_1138_, v___x_1140_);
v___x_1142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1141_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeBuiltinDocString___boxed(lean_object* v_declName_1143_, lean_object* v_a_1144_){
_start:
{
lean_object* v_res_1145_; 
v_res_1145_ = l_Lean_removeBuiltinDocString(v_declName_1143_);
lean_dec(v_declName_1143_);
return v_res_1145_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0(lean_object* v_00_u03b2_1146_, lean_object* v_k_1147_, lean_object* v_t_1148_, lean_object* v_h_1149_){
_start:
{
lean_object* v___x_1150_; 
v___x_1150_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___redArg(v_k_1147_, v_t_1148_);
return v___x_1150_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0___boxed(lean_object* v_00_u03b2_1151_, lean_object* v_k_1152_, lean_object* v_t_1153_, lean_object* v_h_1154_){
_start:
{
lean_object* v_res_1155_; 
v_res_1155_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeBuiltinDocString_spec__0(v_00_u03b2_1151_, v_k_1152_, v_t_1153_, v_h_1154_);
lean_dec(v_k_1152_);
return v_res_1155_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinVersoDocStrings(){
_start:
{
lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1157_ = l___private_Lean_DocString_Extension_0__Lean_builtinVersoDocStrings;
v___x_1158_ = lean_st_ref_get(v___x_1157_);
v___x_1159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1158_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinVersoDocStrings___boxed(lean_object* v_a_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = l_Lean_getBuiltinVersoDocStrings();
return v_res_1161_;
}
}
static lean_object* _init_l_Lean_throwIfHasDocString___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1163_ = ((lean_object*)(l_Lean_throwIfHasDocString___redArg___lam__0___closed__0));
v___x_1164_ = l_Lean_stringToMessageData(v___x_1163_);
return v___x_1164_;
}
}
static lean_object* _init_l_Lean_throwIfHasDocString___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1166_ = ((lean_object*)(l_Lean_throwIfHasDocString___redArg___lam__0___closed__2));
v___x_1167_ = l_Lean_stringToMessageData(v___x_1166_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwIfHasDocString___redArg___lam__0(lean_object* v_declName_1168_, lean_object* v_inst_1169_, lean_object* v_inst_1170_, lean_object* v_toPure_1171_, lean_object* v_env_1172_){
_start:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; uint8_t v___x_1183_; 
v___x_1181_ = l_Lean_docStringExt;
v___x_1182_ = lean_box(1);
lean_inc(v_declName_1168_);
lean_inc_ref(v_env_1172_);
v___x_1183_ = l_Lean_MapDeclarationExtension_contains___redArg(v___x_1181_, v_env_1172_, v_declName_1168_, v___x_1182_);
if (v___x_1183_ == 0)
{
lean_object* v___x_1184_; uint8_t v___x_1185_; 
v___x_1184_ = l_Lean_versoDocStringExt;
lean_inc(v_declName_1168_);
v___x_1185_ = l_Lean_MapDeclarationExtension_contains___redArg(v___x_1184_, v_env_1172_, v_declName_1168_, v___x_1182_);
if (v___x_1185_ == 0)
{
lean_object* v___x_1186_; lean_object* v___x_1187_; 
lean_dec_ref(v_inst_1170_);
lean_dec_ref(v_inst_1169_);
lean_dec(v_declName_1168_);
v___x_1186_ = lean_box(0);
v___x_1187_ = lean_apply_2(v_toPure_1171_, lean_box(0), v___x_1186_);
return v___x_1187_;
}
else
{
lean_dec(v_toPure_1171_);
goto v___jp_1173_;
}
}
else
{
lean_dec_ref(v_env_1172_);
lean_dec(v_toPure_1171_);
goto v___jp_1173_;
}
v___jp_1173_:
{
lean_object* v___x_1174_; uint8_t v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1174_ = lean_obj_once(&l_Lean_throwIfHasDocString___redArg___lam__0___closed__1, &l_Lean_throwIfHasDocString___redArg___lam__0___closed__1_once, _init_l_Lean_throwIfHasDocString___redArg___lam__0___closed__1);
v___x_1175_ = 0;
v___x_1176_ = l_Lean_MessageData_ofConstName(v_declName_1168_, v___x_1175_);
v___x_1177_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1174_);
lean_ctor_set(v___x_1177_, 1, v___x_1176_);
v___x_1178_ = lean_obj_once(&l_Lean_throwIfHasDocString___redArg___lam__0___closed__3, &l_Lean_throwIfHasDocString___redArg___lam__0___closed__3_once, _init_l_Lean_throwIfHasDocString___redArg___lam__0___closed__3);
v___x_1179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1177_);
lean_ctor_set(v___x_1179_, 1, v___x_1178_);
v___x_1180_ = l_Lean_throwError___redArg(v_inst_1169_, v_inst_1170_, v___x_1179_);
return v___x_1180_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwIfHasDocString___redArg(lean_object* v_inst_1188_, lean_object* v_inst_1189_, lean_object* v_inst_1190_, lean_object* v_declName_1191_){
_start:
{
lean_object* v_toApplicative_1192_; lean_object* v_toBind_1193_; lean_object* v_getEnv_1194_; lean_object* v_toPure_1195_; lean_object* v___f_1196_; lean_object* v___x_1197_; 
v_toApplicative_1192_ = lean_ctor_get(v_inst_1188_, 0);
v_toBind_1193_ = lean_ctor_get(v_inst_1188_, 1);
lean_inc(v_toBind_1193_);
v_getEnv_1194_ = lean_ctor_get(v_inst_1190_, 0);
lean_inc(v_getEnv_1194_);
lean_dec_ref(v_inst_1190_);
v_toPure_1195_ = lean_ctor_get(v_toApplicative_1192_, 1);
lean_inc(v_toPure_1195_);
v___f_1196_ = lean_alloc_closure((void*)(l_Lean_throwIfHasDocString___redArg___lam__0), 5, 4);
lean_closure_set(v___f_1196_, 0, v_declName_1191_);
lean_closure_set(v___f_1196_, 1, v_inst_1188_);
lean_closure_set(v___f_1196_, 2, v_inst_1189_);
lean_closure_set(v___f_1196_, 3, v_toPure_1195_);
v___x_1197_ = lean_apply_4(v_toBind_1193_, lean_box(0), lean_box(0), v_getEnv_1194_, v___f_1196_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwIfHasDocString(lean_object* v_m_1198_, lean_object* v_inst_1199_, lean_object* v_inst_1200_, lean_object* v_inst_1201_, lean_object* v_declName_1202_){
_start:
{
lean_object* v___x_1203_; 
v___x_1203_ = l_Lean_throwIfHasDocString___redArg(v_inst_1199_, v_inst_1200_, v_inst_1201_, v_declName_1202_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__0(lean_object* v_docString_1204_, lean_object* v_declName_1205_, lean_object* v_env_1206_){
_start:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; uint8_t v___x_1209_; lean_object* v___x_1210_; 
v___x_1207_ = l_Lean_docStringExt;
v___x_1208_ = l_String_removeLeadingSpaces(v_docString_1204_);
v___x_1209_ = 1;
v___x_1210_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1207_, v_env_1206_, v_declName_1205_, v___x_1208_, v___x_1209_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__1(lean_object* v_modifyEnv_1211_, lean_object* v___f_1212_, lean_object* v_____r_1213_){
_start:
{
lean_object* v___x_1214_; 
v___x_1214_ = lean_apply_1(v_modifyEnv_1211_, v___f_1212_);
return v___x_1214_;
}
}
static lean_object* _init_l_Lean_addDocStringCore___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; 
v___x_1216_ = ((lean_object*)(l_Lean_addDocStringCore___redArg___lam__2___closed__0));
v___x_1217_ = l_Lean_stringToMessageData(v___x_1216_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__2(lean_object* v_declName_1218_, lean_object* v_modifyEnv_1219_, lean_object* v___f_1220_, lean_object* v_inst_1221_, lean_object* v_inst_1222_, lean_object* v_toBind_1223_, lean_object* v___f_1224_, lean_object* v_____do__lift_1225_){
_start:
{
lean_object* v___x_1226_; 
v___x_1226_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_1225_, v_declName_1218_);
if (lean_obj_tag(v___x_1226_) == 0)
{
lean_object* v___x_1227_; 
lean_dec(v___f_1224_);
lean_dec(v_toBind_1223_);
lean_dec_ref(v_inst_1222_);
lean_dec_ref(v_inst_1221_);
lean_dec(v_declName_1218_);
v___x_1227_ = lean_apply_1(v_modifyEnv_1219_, v___f_1220_);
return v___x_1227_;
}
else
{
lean_object* v___x_1228_; uint8_t v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
lean_dec_ref_known(v___x_1226_, 1);
lean_dec_ref(v___f_1220_);
lean_dec(v_modifyEnv_1219_);
v___x_1228_ = lean_obj_once(&l_Lean_throwIfHasDocString___redArg___lam__0___closed__1, &l_Lean_throwIfHasDocString___redArg___lam__0___closed__1_once, _init_l_Lean_throwIfHasDocString___redArg___lam__0___closed__1);
v___x_1229_ = 0;
v___x_1230_ = l_Lean_MessageData_ofConstName(v_declName_1218_, v___x_1229_);
v___x_1231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1228_);
lean_ctor_set(v___x_1231_, 1, v___x_1230_);
v___x_1232_ = lean_obj_once(&l_Lean_addDocStringCore___redArg___lam__2___closed__1, &l_Lean_addDocStringCore___redArg___lam__2___closed__1_once, _init_l_Lean_addDocStringCore___redArg___lam__2___closed__1);
v___x_1233_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1233_, 0, v___x_1231_);
lean_ctor_set(v___x_1233_, 1, v___x_1232_);
v___x_1234_ = l_Lean_throwError___redArg(v_inst_1221_, v_inst_1222_, v___x_1233_);
v___x_1235_ = lean_apply_4(v_toBind_1223_, lean_box(0), lean_box(0), v___x_1234_, v___f_1224_);
return v___x_1235_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg___lam__2___boxed(lean_object* v_declName_1236_, lean_object* v_modifyEnv_1237_, lean_object* v___f_1238_, lean_object* v_inst_1239_, lean_object* v_inst_1240_, lean_object* v_toBind_1241_, lean_object* v___f_1242_, lean_object* v_____do__lift_1243_){
_start:
{
lean_object* v_res_1244_; 
v_res_1244_ = l_Lean_addDocStringCore___redArg___lam__2(v_declName_1236_, v_modifyEnv_1237_, v___f_1238_, v_inst_1239_, v_inst_1240_, v_toBind_1241_, v___f_1242_, v_____do__lift_1243_);
lean_dec_ref(v_____do__lift_1243_);
return v_res_1244_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___redArg(lean_object* v_inst_1245_, lean_object* v_inst_1246_, lean_object* v_inst_1247_, lean_object* v_declName_1248_, lean_object* v_docString_1249_){
_start:
{
lean_object* v_toBind_1250_; lean_object* v_getEnv_1251_; lean_object* v_modifyEnv_1252_; lean_object* v___f_1253_; lean_object* v___f_1254_; lean_object* v___f_1255_; lean_object* v___x_1256_; 
v_toBind_1250_ = lean_ctor_get(v_inst_1245_, 1);
lean_inc_n(v_toBind_1250_, 2);
v_getEnv_1251_ = lean_ctor_get(v_inst_1247_, 0);
lean_inc(v_getEnv_1251_);
v_modifyEnv_1252_ = lean_ctor_get(v_inst_1247_, 1);
lean_inc_n(v_modifyEnv_1252_, 2);
lean_dec_ref(v_inst_1247_);
lean_inc(v_declName_1248_);
v___f_1253_ = lean_alloc_closure((void*)(l_Lean_addDocStringCore___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1253_, 0, v_docString_1249_);
lean_closure_set(v___f_1253_, 1, v_declName_1248_);
lean_inc_ref(v___f_1253_);
v___f_1254_ = lean_alloc_closure((void*)(l_Lean_addDocStringCore___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1254_, 0, v_modifyEnv_1252_);
lean_closure_set(v___f_1254_, 1, v___f_1253_);
v___f_1255_ = lean_alloc_closure((void*)(l_Lean_addDocStringCore___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_1255_, 0, v_declName_1248_);
lean_closure_set(v___f_1255_, 1, v_modifyEnv_1252_);
lean_closure_set(v___f_1255_, 2, v___f_1253_);
lean_closure_set(v___f_1255_, 3, v_inst_1245_);
lean_closure_set(v___f_1255_, 4, v_inst_1246_);
lean_closure_set(v___f_1255_, 5, v_toBind_1250_);
lean_closure_set(v___f_1255_, 6, v___f_1254_);
v___x_1256_ = lean_apply_4(v_toBind_1250_, lean_box(0), lean_box(0), v_getEnv_1251_, v___f_1255_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore(lean_object* v_m_1257_, lean_object* v_inst_1258_, lean_object* v_inst_1259_, lean_object* v_inst_1260_, lean_object* v_inst_1261_, lean_object* v_declName_1262_, lean_object* v_docString_1263_){
_start:
{
lean_object* v___x_1264_; 
v___x_1264_ = l_Lean_addDocStringCore___redArg(v_inst_1258_, v_inst_1259_, v_inst_1260_, v_declName_1262_, v_docString_1263_);
return v___x_1264_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore___boxed(lean_object* v_m_1265_, lean_object* v_inst_1266_, lean_object* v_inst_1267_, lean_object* v_inst_1268_, lean_object* v_inst_1269_, lean_object* v_declName_1270_, lean_object* v_docString_1271_){
_start:
{
lean_object* v_res_1272_; 
v_res_1272_ = l_Lean_addDocStringCore(v_m_1265_, v_inst_1266_, v_inst_1267_, v_inst_1268_, v_inst_1269_, v_declName_1270_, v_docString_1271_);
lean_dec(v_inst_1269_);
return v_res_1272_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__0(lean_object* v_declName_1274_, lean_object* v_ps_1275_){
_start:
{
lean_object* v_importedEntries_1276_; lean_object* v_state_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1286_; 
v_importedEntries_1276_ = lean_ctor_get(v_ps_1275_, 0);
v_state_1277_ = lean_ctor_get(v_ps_1275_, 1);
v_isSharedCheck_1286_ = !lean_is_exclusive(v_ps_1275_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1279_ = v_ps_1275_;
v_isShared_1280_ = v_isSharedCheck_1286_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_state_1277_);
lean_inc(v_importedEntries_1276_);
lean_dec(v_ps_1275_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1286_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1284_; 
v___x_1281_ = ((lean_object*)(l_Lean_removeDocStringCore___redArg___lam__0___closed__0));
v___x_1282_ = l_Std_DTreeMap_Internal_Impl_erase___redArg(v___x_1281_, v_declName_1274_, v_state_1277_);
if (v_isShared_1280_ == 0)
{
lean_ctor_set(v___x_1279_, 1, v___x_1282_);
v___x_1284_ = v___x_1279_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v_importedEntries_1276_);
lean_ctor_set(v_reuseFailAlloc_1285_, 1, v___x_1282_);
v___x_1284_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
return v___x_1284_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__1(lean_object* v___f_1287_, lean_object* v_env_1288_){
_start:
{
lean_object* v___x_1289_; lean_object* v_toEnvExtension_1290_; uint8_t v_logWrites_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; uint8_t v___x_1294_; 
v___x_1289_ = l_Lean_docStringExt;
v_toEnvExtension_1290_ = lean_ctor_get(v___x_1289_, 0);
v_logWrites_1291_ = lean_ctor_get_uint8(v_toEnvExtension_1290_, sizeof(void*)*6);
v___x_1292_ = lean_box(2);
v___x_1293_ = lean_box(0);
v___x_1294_ = 1;
if (v_logWrites_1291_ == 0)
{
lean_object* v___x_1295_; 
lean_inc_ref(v_toEnvExtension_1290_);
v___x_1295_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1290_, v_env_1288_, v___f_1287_, v___x_1292_, v___x_1293_, v___x_1294_);
return v___x_1295_;
}
else
{
lean_object* v___x_1296_; lean_object* v___x_1297_; 
lean_inc_ref_n(v_toEnvExtension_1290_, 2);
v___x_1296_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1290_, v_env_1288_);
lean_dec_ref(v_env_1288_);
v___x_1297_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1290_, v___x_1296_, v___f_1287_, v___x_1292_, v___x_1293_, v___x_1294_);
return v___x_1297_;
}
}
}
static lean_object* _init_l_Lean_removeDocStringCore___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1299_; lean_object* v___x_1300_; 
v___x_1299_ = ((lean_object*)(l_Lean_removeDocStringCore___redArg___lam__3___closed__0));
v___x_1300_ = l_Lean_stringToMessageData(v___x_1299_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__3(lean_object* v_declName_1301_, lean_object* v_modifyEnv_1302_, lean_object* v___f_1303_, lean_object* v_inst_1304_, lean_object* v_inst_1305_, lean_object* v_toBind_1306_, lean_object* v___f_1307_, lean_object* v_____do__lift_1308_){
_start:
{
lean_object* v___x_1309_; 
v___x_1309_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_1308_, v_declName_1301_);
if (lean_obj_tag(v___x_1309_) == 0)
{
lean_object* v___x_1310_; 
lean_dec(v___f_1307_);
lean_dec(v_toBind_1306_);
lean_dec_ref(v_inst_1305_);
lean_dec_ref(v_inst_1304_);
lean_dec(v_declName_1301_);
v___x_1310_ = lean_apply_1(v_modifyEnv_1302_, v___f_1303_);
return v___x_1310_;
}
else
{
lean_object* v___x_1311_; uint8_t v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
lean_dec_ref_known(v___x_1309_, 1);
lean_dec_ref(v___f_1303_);
lean_dec(v_modifyEnv_1302_);
v___x_1311_ = lean_obj_once(&l_Lean_removeDocStringCore___redArg___lam__3___closed__1, &l_Lean_removeDocStringCore___redArg___lam__3___closed__1_once, _init_l_Lean_removeDocStringCore___redArg___lam__3___closed__1);
v___x_1312_ = 0;
v___x_1313_ = l_Lean_MessageData_ofConstName(v_declName_1301_, v___x_1312_);
v___x_1314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1311_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
v___x_1315_ = lean_obj_once(&l_Lean_addDocStringCore___redArg___lam__2___closed__1, &l_Lean_addDocStringCore___redArg___lam__2___closed__1_once, _init_l_Lean_addDocStringCore___redArg___lam__2___closed__1);
v___x_1316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1314_);
lean_ctor_set(v___x_1316_, 1, v___x_1315_);
v___x_1317_ = l_Lean_throwError___redArg(v_inst_1304_, v_inst_1305_, v___x_1316_);
v___x_1318_ = lean_apply_4(v_toBind_1306_, lean_box(0), lean_box(0), v___x_1317_, v___f_1307_);
return v___x_1318_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg___lam__3___boxed(lean_object* v_declName_1319_, lean_object* v_modifyEnv_1320_, lean_object* v___f_1321_, lean_object* v_inst_1322_, lean_object* v_inst_1323_, lean_object* v_toBind_1324_, lean_object* v___f_1325_, lean_object* v_____do__lift_1326_){
_start:
{
lean_object* v_res_1327_; 
v_res_1327_ = l_Lean_removeDocStringCore___redArg___lam__3(v_declName_1319_, v_modifyEnv_1320_, v___f_1321_, v_inst_1322_, v_inst_1323_, v_toBind_1324_, v___f_1325_, v_____do__lift_1326_);
lean_dec_ref(v_____do__lift_1326_);
return v_res_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___redArg(lean_object* v_inst_1328_, lean_object* v_inst_1329_, lean_object* v_inst_1330_, lean_object* v_declName_1331_){
_start:
{
lean_object* v_toBind_1332_; lean_object* v_getEnv_1333_; lean_object* v_modifyEnv_1334_; lean_object* v___f_1335_; lean_object* v___f_1336_; lean_object* v___f_1337_; lean_object* v___f_1338_; lean_object* v___x_1339_; 
v_toBind_1332_ = lean_ctor_get(v_inst_1328_, 1);
lean_inc_n(v_toBind_1332_, 2);
v_getEnv_1333_ = lean_ctor_get(v_inst_1330_, 0);
lean_inc(v_getEnv_1333_);
v_modifyEnv_1334_ = lean_ctor_get(v_inst_1330_, 1);
lean_inc_n(v_modifyEnv_1334_, 2);
lean_dec_ref(v_inst_1330_);
lean_inc(v_declName_1331_);
v___f_1335_ = lean_alloc_closure((void*)(l_Lean_removeDocStringCore___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1335_, 0, v_declName_1331_);
v___f_1336_ = lean_alloc_closure((void*)(l_Lean_removeDocStringCore___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1336_, 0, v___f_1335_);
lean_inc_ref(v___f_1336_);
v___f_1337_ = lean_alloc_closure((void*)(l_Lean_addDocStringCore___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1337_, 0, v_modifyEnv_1334_);
lean_closure_set(v___f_1337_, 1, v___f_1336_);
v___f_1338_ = lean_alloc_closure((void*)(l_Lean_removeDocStringCore___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_1338_, 0, v_declName_1331_);
lean_closure_set(v___f_1338_, 1, v_modifyEnv_1334_);
lean_closure_set(v___f_1338_, 2, v___f_1336_);
lean_closure_set(v___f_1338_, 3, v_inst_1328_);
lean_closure_set(v___f_1338_, 4, v_inst_1329_);
lean_closure_set(v___f_1338_, 5, v_toBind_1332_);
lean_closure_set(v___f_1338_, 6, v___f_1337_);
v___x_1339_ = lean_apply_4(v_toBind_1332_, lean_box(0), lean_box(0), v_getEnv_1333_, v___f_1338_);
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore(lean_object* v_m_1340_, lean_object* v_inst_1341_, lean_object* v_inst_1342_, lean_object* v_inst_1343_, lean_object* v_inst_1344_, lean_object* v_declName_1345_){
_start:
{
lean_object* v___x_1346_; 
v___x_1346_ = l_Lean_removeDocStringCore___redArg(v_inst_1341_, v_inst_1342_, v_inst_1343_, v_declName_1345_);
return v___x_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___boxed(lean_object* v_m_1347_, lean_object* v_inst_1348_, lean_object* v_inst_1349_, lean_object* v_inst_1350_, lean_object* v_inst_1351_, lean_object* v_declName_1352_){
_start:
{
lean_object* v_res_1353_; 
v_res_1353_ = l_Lean_removeDocStringCore(v_m_1347_, v_inst_1348_, v_inst_1349_, v_inst_1350_, v_inst_1351_, v_declName_1352_);
lean_dec(v_inst_1351_);
return v_res_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore_x27___redArg(lean_object* v_inst_1354_, lean_object* v_inst_1355_, lean_object* v_inst_1356_, lean_object* v_declName_1357_, lean_object* v_docString_x3f_1358_){
_start:
{
if (lean_obj_tag(v_docString_x3f_1358_) == 0)
{
lean_object* v_toApplicative_1359_; lean_object* v_toPure_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v_toApplicative_1359_ = lean_ctor_get(v_inst_1354_, 0);
lean_inc_ref(v_toApplicative_1359_);
lean_dec(v_declName_1357_);
lean_dec_ref(v_inst_1356_);
lean_dec_ref(v_inst_1355_);
lean_dec_ref(v_inst_1354_);
v_toPure_1360_ = lean_ctor_get(v_toApplicative_1359_, 1);
lean_inc(v_toPure_1360_);
lean_dec_ref(v_toApplicative_1359_);
v___x_1361_ = lean_box(0);
v___x_1362_ = lean_apply_2(v_toPure_1360_, lean_box(0), v___x_1361_);
return v___x_1362_;
}
else
{
lean_object* v_val_1363_; lean_object* v___x_1364_; 
v_val_1363_ = lean_ctor_get(v_docString_x3f_1358_, 0);
lean_inc(v_val_1363_);
lean_dec_ref_known(v_docString_x3f_1358_, 1);
v___x_1364_ = l_Lean_addDocStringCore___redArg(v_inst_1354_, v_inst_1355_, v_inst_1356_, v_declName_1357_, v_val_1363_);
return v___x_1364_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore_x27(lean_object* v_m_1365_, lean_object* v_inst_1366_, lean_object* v_inst_1367_, lean_object* v_inst_1368_, lean_object* v_inst_1369_, lean_object* v_declName_1370_, lean_object* v_docString_x3f_1371_){
_start:
{
lean_object* v___x_1372_; 
v___x_1372_ = l_Lean_addDocStringCore_x27___redArg(v_inst_1366_, v_inst_1367_, v_inst_1368_, v_declName_1370_, v_docString_x3f_1371_);
return v___x_1372_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringCore_x27___boxed(lean_object* v_m_1373_, lean_object* v_inst_1374_, lean_object* v_inst_1375_, lean_object* v_inst_1376_, lean_object* v_inst_1377_, lean_object* v_declName_1378_, lean_object* v_docString_x3f_1379_){
_start:
{
lean_object* v_res_1380_; 
v_res_1380_ = l_Lean_addDocStringCore_x27(v_m_1373_, v_inst_1374_, v_inst_1375_, v_inst_1376_, v_inst_1377_, v_declName_1378_, v_docString_x3f_1379_);
lean_dec(v_inst_1377_);
return v_res_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_findInternalDocString_x3f(lean_object* v_env_1381_, lean_object* v_declName_1382_, uint8_t v_includeBuiltin_1383_){
_start:
{
lean_object* v_md_1386_; lean_object* v_v_1391_; lean_object* v___x_1398_; lean_object* v_toEnvExtension_1399_; lean_object* v_asyncMode_1400_; uint8_t v___x_1401_; lean_object* v___x_1402_; 
v___x_1398_ = l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt;
v_toEnvExtension_1399_ = lean_ctor_get(v___x_1398_, 0);
v_asyncMode_1400_ = lean_ctor_get(v_toEnvExtension_1399_, 2);
v___x_1401_ = 1;
lean_inc(v_declName_1382_);
lean_inc_ref(v_env_1381_);
v___x_1402_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1398_, v_env_1381_, v_declName_1382_, v_asyncMode_1400_, v___x_1401_);
if (lean_obj_tag(v___x_1402_) == 1)
{
lean_object* v_val_1403_; 
lean_dec(v_declName_1382_);
v_val_1403_ = lean_ctor_get(v___x_1402_, 0);
lean_inc(v_val_1403_);
lean_dec_ref_known(v___x_1402_, 1);
v_declName_1382_ = v_val_1403_;
goto _start;
}
else
{
lean_object* v___x_1405_; lean_object* v_toEnvExtension_1406_; lean_object* v_asyncMode_1407_; lean_object* v___x_1408_; 
lean_dec(v___x_1402_);
v___x_1405_ = l_Lean_docStringExt;
v_toEnvExtension_1406_ = lean_ctor_get(v___x_1405_, 0);
v_asyncMode_1407_ = lean_ctor_get(v_toEnvExtension_1406_, 2);
lean_inc(v_declName_1382_);
lean_inc_ref(v_env_1381_);
v___x_1408_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1405_, v_env_1381_, v_declName_1382_, v_asyncMode_1407_, v___x_1401_);
if (lean_obj_tag(v___x_1408_) == 0)
{
lean_object* v___x_1409_; lean_object* v_toEnvExtension_1410_; lean_object* v_asyncMode_1411_; lean_object* v___x_1412_; 
v___x_1409_ = l_Lean_versoDocStringExt;
v_toEnvExtension_1410_ = lean_ctor_get(v___x_1409_, 0);
v_asyncMode_1411_ = lean_ctor_get(v_toEnvExtension_1410_, 2);
lean_inc(v_declName_1382_);
v___x_1412_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1409_, v_env_1381_, v_declName_1382_, v_asyncMode_1411_, v___x_1401_);
if (lean_obj_tag(v___x_1412_) == 0)
{
if (v_includeBuiltin_1383_ == 0)
{
lean_dec(v_declName_1382_);
goto v___jp_1395_;
}
else
{
lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1413_ = l___private_Lean_DocString_Extension_0__Lean_builtinDocStrings;
v___x_1414_ = lean_st_ref_get(v___x_1413_);
v___x_1415_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1414_, v_declName_1382_);
lean_dec(v___x_1414_);
if (lean_obj_tag(v___x_1415_) == 1)
{
lean_object* v_val_1416_; 
lean_dec(v_declName_1382_);
v_val_1416_ = lean_ctor_get(v___x_1415_, 0);
lean_inc(v_val_1416_);
lean_dec_ref_known(v___x_1415_, 1);
v_md_1386_ = v_val_1416_;
goto v___jp_1385_;
}
else
{
lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; 
lean_dec(v___x_1415_);
v___x_1417_ = l___private_Lean_DocString_Extension_0__Lean_builtinVersoDocStrings;
v___x_1418_ = lean_st_ref_get(v___x_1417_);
v___x_1419_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1418_, v_declName_1382_);
lean_dec(v_declName_1382_);
lean_dec(v___x_1418_);
if (lean_obj_tag(v___x_1419_) == 1)
{
lean_object* v_val_1420_; 
v_val_1420_ = lean_ctor_get(v___x_1419_, 0);
lean_inc(v_val_1420_);
lean_dec_ref_known(v___x_1419_, 1);
v_v_1391_ = v_val_1420_;
goto v___jp_1390_;
}
else
{
lean_dec(v___x_1419_);
goto v___jp_1395_;
}
}
}
}
else
{
lean_object* v_val_1421_; 
lean_dec(v_declName_1382_);
v_val_1421_ = lean_ctor_get(v___x_1412_, 0);
lean_inc(v_val_1421_);
lean_dec_ref_known(v___x_1412_, 1);
v_v_1391_ = v_val_1421_;
goto v___jp_1390_;
}
}
else
{
lean_object* v_val_1422_; 
lean_dec(v_declName_1382_);
lean_dec_ref(v_env_1381_);
v_val_1422_ = lean_ctor_get(v___x_1408_, 0);
lean_inc(v_val_1422_);
lean_dec_ref_known(v___x_1408_, 1);
v_md_1386_ = v_val_1422_;
goto v___jp_1385_;
}
}
v___jp_1385_:
{
lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1387_, 0, v_md_1386_);
v___x_1388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1387_);
v___x_1389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1389_, 0, v___x_1388_);
return v___x_1389_;
}
v___jp_1390_:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1392_, 0, v_v_1391_);
v___x_1393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1392_);
v___x_1394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1394_, 0, v___x_1393_);
return v___x_1394_;
}
v___jp_1395_:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1396_ = lean_box(0);
v___x_1397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1397_, 0, v___x_1396_);
return v___x_1397_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_findInternalDocString_x3f___boxed(lean_object* v_env_1423_, lean_object* v_declName_1424_, lean_object* v_includeBuiltin_1425_, lean_object* v_a_1426_){
_start:
{
uint8_t v_includeBuiltin_boxed_1427_; lean_object* v_res_1428_; 
v_includeBuiltin_boxed_1427_ = lean_unbox(v_includeBuiltin_1425_);
v_res_1428_ = l_Lean_findInternalDocString_x3f(v_env_1423_, v_declName_1424_, v_includeBuiltin_boxed_1427_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__0(lean_object* v_declName_1429_, lean_object* v_target_1430_, lean_object* v_x_1431_){
_start:
{
lean_object* v___x_1432_; uint8_t v___x_1433_; lean_object* v___x_1434_; 
v___x_1432_ = l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt;
v___x_1433_ = 0;
v___x_1434_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1432_, v_x_1431_, v_declName_1429_, v_target_1430_, v___x_1433_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__1(lean_object* v_declName_1435_, lean_object* v_val_1436_, lean_object* v_x_1437_){
_start:
{
lean_object* v___x_1438_; uint8_t v___x_1439_; lean_object* v___x_1440_; 
v___x_1438_ = l_Lean_docStringExt;
v___x_1439_ = 0;
v___x_1440_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1438_, v_x_1437_, v_declName_1435_, v_val_1436_, v___x_1439_);
return v___x_1440_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__2(lean_object* v_declName_1441_, lean_object* v_val_1442_, lean_object* v_x_1443_){
_start:
{
lean_object* v___x_1444_; uint8_t v___x_1445_; lean_object* v___x_1446_; 
v___x_1444_ = l_Lean_versoDocStringExt;
v___x_1445_ = 0;
v___x_1446_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_1444_, v_x_1443_, v_declName_1441_, v_val_1442_, v___x_1445_);
return v___x_1446_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__3(lean_object* v_modifyEnv_1447_, lean_object* v___f_1448_, lean_object* v_declName_1449_, lean_object* v_____do__lift_1450_){
_start:
{
if (lean_obj_tag(v_____do__lift_1450_) == 0)
{
lean_object* v___x_1451_; 
lean_dec(v_declName_1449_);
v___x_1451_ = lean_apply_1(v_modifyEnv_1447_, v___f_1448_);
return v___x_1451_;
}
else
{
lean_object* v_val_1452_; 
lean_dec_ref(v___f_1448_);
v_val_1452_ = lean_ctor_get(v_____do__lift_1450_, 0);
lean_inc(v_val_1452_);
lean_dec_ref_known(v_____do__lift_1450_, 1);
if (lean_obj_tag(v_val_1452_) == 0)
{
lean_object* v_val_1453_; lean_object* v___f_1454_; lean_object* v___x_1455_; 
v_val_1453_ = lean_ctor_get(v_val_1452_, 0);
lean_inc(v_val_1453_);
lean_dec_ref_known(v_val_1452_, 1);
v___f_1454_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1454_, 0, v_declName_1449_);
lean_closure_set(v___f_1454_, 1, v_val_1453_);
v___x_1455_ = lean_apply_1(v_modifyEnv_1447_, v___f_1454_);
return v___x_1455_;
}
else
{
lean_object* v_val_1456_; lean_object* v___f_1457_; lean_object* v___x_1458_; 
v_val_1456_ = lean_ctor_get(v_val_1452_, 0);
lean_inc(v_val_1456_);
lean_dec_ref_known(v_val_1452_, 1);
v___f_1457_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__2), 3, 2);
lean_closure_set(v___f_1457_, 0, v_declName_1449_);
lean_closure_set(v___f_1457_, 1, v_val_1456_);
v___x_1458_ = lean_apply_1(v_modifyEnv_1447_, v___f_1457_);
return v___x_1458_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__5(lean_object* v_target_1459_, uint8_t v___x_1460_, lean_object* v_inst_1461_, lean_object* v_toBind_1462_, lean_object* v___f_1463_, lean_object* v_____do__lift_1464_){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1465_ = lean_box(v___x_1460_);
v___x_1466_ = lean_alloc_closure((void*)(l_Lean_findInternalDocString_x3f___boxed), 4, 3);
lean_closure_set(v___x_1466_, 0, v_____do__lift_1464_);
lean_closure_set(v___x_1466_, 1, v_target_1459_);
lean_closure_set(v___x_1466_, 2, v___x_1465_);
v___x_1467_ = lean_apply_2(v_inst_1461_, lean_box(0), v___x_1466_);
v___x_1468_ = lean_apply_4(v_toBind_1462_, lean_box(0), lean_box(0), v___x_1467_, v___f_1463_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__5___boxed(lean_object* v_target_1469_, lean_object* v___x_1470_, lean_object* v_inst_1471_, lean_object* v_toBind_1472_, lean_object* v___f_1473_, lean_object* v_____do__lift_1474_){
_start:
{
uint8_t v___x_692__boxed_1475_; lean_object* v_res_1476_; 
v___x_692__boxed_1475_ = lean_unbox(v___x_1470_);
v_res_1476_ = l_Lean_addInheritedDocString___redArg___lam__5(v_target_1469_, v___x_692__boxed_1475_, v_inst_1471_, v_toBind_1472_, v___f_1473_, v_____do__lift_1474_);
return v_res_1476_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__4(lean_object* v_declName_1477_, lean_object* v_target_1478_, lean_object* v_modifyEnv_1479_, lean_object* v___f_1480_, lean_object* v_inst_1481_, lean_object* v_toBind_1482_, lean_object* v___f_1483_, lean_object* v_getEnv_1484_, lean_object* v_____r_1485_){
_start:
{
uint8_t v___x_1486_; 
v___x_1486_ = l_Lean_isPrivateName(v_declName_1477_);
if (v___x_1486_ == 0)
{
uint8_t v___x_1487_; 
v___x_1487_ = l_Lean_isPrivateName(v_target_1478_);
if (v___x_1487_ == 0)
{
lean_object* v___x_1488_; 
lean_dec(v_getEnv_1484_);
lean_dec(v___f_1483_);
lean_dec(v_toBind_1482_);
lean_dec(v_inst_1481_);
lean_dec(v_target_1478_);
v___x_1488_ = lean_apply_1(v_modifyEnv_1479_, v___f_1480_);
return v___x_1488_;
}
else
{
lean_object* v___x_1489_; lean_object* v___f_1490_; lean_object* v___x_1491_; 
lean_dec_ref(v___f_1480_);
lean_dec(v_modifyEnv_1479_);
v___x_1489_ = lean_box(v___x_1487_);
lean_inc(v_toBind_1482_);
v___f_1490_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__5___boxed), 6, 5);
lean_closure_set(v___f_1490_, 0, v_target_1478_);
lean_closure_set(v___f_1490_, 1, v___x_1489_);
lean_closure_set(v___f_1490_, 2, v_inst_1481_);
lean_closure_set(v___f_1490_, 3, v_toBind_1482_);
lean_closure_set(v___f_1490_, 4, v___f_1483_);
v___x_1491_ = lean_apply_4(v_toBind_1482_, lean_box(0), lean_box(0), v_getEnv_1484_, v___f_1490_);
return v___x_1491_;
}
}
else
{
lean_object* v___x_1492_; 
lean_dec(v_getEnv_1484_);
lean_dec(v___f_1483_);
lean_dec(v_toBind_1482_);
lean_dec(v_inst_1481_);
lean_dec(v_target_1478_);
v___x_1492_ = lean_apply_1(v_modifyEnv_1479_, v___f_1480_);
return v___x_1492_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__4___boxed(lean_object* v_declName_1493_, lean_object* v_target_1494_, lean_object* v_modifyEnv_1495_, lean_object* v___f_1496_, lean_object* v_inst_1497_, lean_object* v_toBind_1498_, lean_object* v___f_1499_, lean_object* v_getEnv_1500_, lean_object* v_____r_1501_){
_start:
{
lean_object* v_res_1502_; 
v_res_1502_ = l_Lean_addInheritedDocString___redArg___lam__4(v_declName_1493_, v_target_1494_, v_modifyEnv_1495_, v___f_1496_, v_inst_1497_, v_toBind_1498_, v___f_1499_, v_getEnv_1500_, v_____r_1501_);
lean_dec(v_declName_1493_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__6(lean_object* v___f_1503_, lean_object* v_____r_1504_){
_start:
{
lean_object* v___x_1505_; 
v___x_1505_ = lean_apply_1(v___f_1503_, v_____r_1504_);
return v___x_1505_;
}
}
static lean_object* _init_l_Lean_addInheritedDocString___redArg___lam__7___closed__1(void){
_start:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1507_ = ((lean_object*)(l_Lean_addInheritedDocString___redArg___lam__7___closed__0));
v___x_1508_ = l_Lean_stringToMessageData(v___x_1507_);
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__7(lean_object* v_target_1509_, lean_object* v_declName_1510_, lean_object* v___x_1511_, lean_object* v___f_1512_, lean_object* v_inst_1513_, lean_object* v_inst_1514_, lean_object* v_toBind_1515_, lean_object* v___f_1516_, lean_object* v_____do__lift_1517_){
_start:
{
lean_object* v___x_1518_; lean_object* v_toEnvExtension_1519_; lean_object* v_asyncMode_1520_; uint8_t v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; uint8_t v___x_1524_; 
v___x_1518_ = l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt;
v_toEnvExtension_1519_ = lean_ctor_get(v___x_1518_, 0);
v_asyncMode_1520_ = lean_ctor_get(v_toEnvExtension_1519_, 2);
v___x_1521_ = 1;
v___x_1522_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1518_, v_____do__lift_1517_, v_target_1509_, v_asyncMode_1520_, v___x_1521_);
v___x_1523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1523_, 0, v_declName_1510_);
v___x_1524_ = l_instBEqOption_beq___redArg(v___x_1511_, v___x_1522_, v___x_1523_);
if (v___x_1524_ == 0)
{
lean_object* v___x_1525_; lean_object* v___x_1526_; 
lean_dec(v___f_1516_);
lean_dec(v_toBind_1515_);
lean_dec_ref(v_inst_1514_);
lean_dec_ref(v_inst_1513_);
v___x_1525_ = lean_box(0);
v___x_1526_ = lean_apply_1(v___f_1512_, v___x_1525_);
return v___x_1526_;
}
else
{
lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; 
lean_dec(v___f_1512_);
v___x_1527_ = lean_obj_once(&l_Lean_addInheritedDocString___redArg___lam__7___closed__1, &l_Lean_addInheritedDocString___redArg___lam__7___closed__1_once, _init_l_Lean_addInheritedDocString___redArg___lam__7___closed__1);
v___x_1528_ = l_Lean_throwError___redArg(v_inst_1513_, v_inst_1514_, v___x_1527_);
v___x_1529_ = lean_apply_4(v_toBind_1515_, lean_box(0), lean_box(0), v___x_1528_, v___f_1516_);
return v___x_1529_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__8(lean_object* v_toBind_1530_, lean_object* v_getEnv_1531_, lean_object* v___f_1532_, lean_object* v_____r_1533_){
_start:
{
lean_object* v___x_1534_; 
v___x_1534_ = lean_apply_4(v_toBind_1530_, lean_box(0), lean_box(0), v_getEnv_1531_, v___f_1532_);
return v___x_1534_;
}
}
static lean_object* _init_l_Lean_addInheritedDocString___redArg___lam__9___closed__1(void){
_start:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1536_ = ((lean_object*)(l_Lean_addInheritedDocString___redArg___lam__9___closed__0));
v___x_1537_ = l_Lean_stringToMessageData(v___x_1536_);
return v___x_1537_;
}
}
static lean_object* _init_l_Lean_addInheritedDocString___redArg___lam__9___closed__3(void){
_start:
{
lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1539_ = ((lean_object*)(l_Lean_addInheritedDocString___redArg___lam__9___closed__2));
v___x_1540_ = l_Lean_stringToMessageData(v___x_1539_);
return v___x_1540_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__9(lean_object* v_declName_1541_, lean_object* v_toBind_1542_, lean_object* v_getEnv_1543_, lean_object* v___f_1544_, lean_object* v_inst_1545_, lean_object* v_inst_1546_, lean_object* v___f_1547_, lean_object* v_____do__lift_1548_){
_start:
{
lean_object* v___x_1549_; lean_object* v_toEnvExtension_1550_; lean_object* v_asyncMode_1551_; uint8_t v___x_1552_; lean_object* v___x_1553_; 
v___x_1549_ = l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt;
v_toEnvExtension_1550_ = lean_ctor_get(v___x_1549_, 0);
v_asyncMode_1551_ = lean_ctor_get(v_toEnvExtension_1550_, 2);
v___x_1552_ = 1;
lean_inc(v_declName_1541_);
v___x_1553_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_1549_, v_____do__lift_1548_, v_declName_1541_, v_asyncMode_1551_, v___x_1552_);
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_object* v___x_1554_; 
lean_dec(v___f_1547_);
lean_dec_ref(v_inst_1546_);
lean_dec_ref(v_inst_1545_);
lean_dec(v_declName_1541_);
v___x_1554_ = lean_apply_4(v_toBind_1542_, lean_box(0), lean_box(0), v_getEnv_1543_, v___f_1544_);
return v___x_1554_;
}
else
{
lean_object* v___x_1555_; uint8_t v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
lean_dec_ref_known(v___x_1553_, 1);
lean_dec(v___f_1544_);
lean_dec(v_getEnv_1543_);
v___x_1555_ = lean_obj_once(&l_Lean_addInheritedDocString___redArg___lam__9___closed__1, &l_Lean_addInheritedDocString___redArg___lam__9___closed__1_once, _init_l_Lean_addInheritedDocString___redArg___lam__9___closed__1);
v___x_1556_ = 0;
v___x_1557_ = l_Lean_MessageData_ofConstName(v_declName_1541_, v___x_1556_);
v___x_1558_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1555_);
lean_ctor_set(v___x_1558_, 1, v___x_1557_);
v___x_1559_ = lean_obj_once(&l_Lean_addInheritedDocString___redArg___lam__9___closed__3, &l_Lean_addInheritedDocString___redArg___lam__9___closed__3_once, _init_l_Lean_addInheritedDocString___redArg___lam__9___closed__3);
v___x_1560_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1558_);
lean_ctor_set(v___x_1560_, 1, v___x_1559_);
v___x_1561_ = l_Lean_throwError___redArg(v_inst_1545_, v_inst_1546_, v___x_1560_);
v___x_1562_ = lean_apply_4(v_toBind_1542_, lean_box(0), lean_box(0), v___x_1561_, v___f_1547_);
return v___x_1562_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__11(lean_object* v_declName_1563_, lean_object* v_toBind_1564_, lean_object* v_getEnv_1565_, lean_object* v___f_1566_, lean_object* v_inst_1567_, lean_object* v_inst_1568_, lean_object* v___f_1569_, lean_object* v_____do__lift_1570_){
_start:
{
lean_object* v___x_1571_; 
v___x_1571_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_1570_, v_declName_1563_);
if (lean_obj_tag(v___x_1571_) == 0)
{
lean_object* v___x_1572_; 
lean_dec(v___f_1569_);
lean_dec_ref(v_inst_1568_);
lean_dec_ref(v_inst_1567_);
lean_dec(v_declName_1563_);
v___x_1572_ = lean_apply_4(v_toBind_1564_, lean_box(0), lean_box(0), v_getEnv_1565_, v___f_1566_);
return v___x_1572_;
}
else
{
lean_object* v___x_1573_; uint8_t v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
lean_dec_ref_known(v___x_1571_, 1);
lean_dec(v___f_1566_);
lean_dec(v_getEnv_1565_);
v___x_1573_ = lean_obj_once(&l_Lean_addInheritedDocString___redArg___lam__9___closed__1, &l_Lean_addInheritedDocString___redArg___lam__9___closed__1_once, _init_l_Lean_addInheritedDocString___redArg___lam__9___closed__1);
v___x_1574_ = 0;
v___x_1575_ = l_Lean_MessageData_ofConstName(v_declName_1563_, v___x_1574_);
v___x_1576_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1573_);
lean_ctor_set(v___x_1576_, 1, v___x_1575_);
v___x_1577_ = lean_obj_once(&l_Lean_addDocStringCore___redArg___lam__2___closed__1, &l_Lean_addDocStringCore___redArg___lam__2___closed__1_once, _init_l_Lean_addDocStringCore___redArg___lam__2___closed__1);
v___x_1578_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1576_);
lean_ctor_set(v___x_1578_, 1, v___x_1577_);
v___x_1579_ = l_Lean_throwError___redArg(v_inst_1567_, v_inst_1568_, v___x_1578_);
v___x_1580_ = lean_apply_4(v_toBind_1564_, lean_box(0), lean_box(0), v___x_1579_, v___f_1569_);
return v___x_1580_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg___lam__11___boxed(lean_object* v_declName_1581_, lean_object* v_toBind_1582_, lean_object* v_getEnv_1583_, lean_object* v___f_1584_, lean_object* v_inst_1585_, lean_object* v_inst_1586_, lean_object* v___f_1587_, lean_object* v_____do__lift_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l_Lean_addInheritedDocString___redArg___lam__11(v_declName_1581_, v_toBind_1582_, v_getEnv_1583_, v___f_1584_, v_inst_1585_, v_inst_1586_, v___f_1587_, v_____do__lift_1588_);
lean_dec_ref(v_____do__lift_1588_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString___redArg(lean_object* v_inst_1591_, lean_object* v_inst_1592_, lean_object* v_inst_1593_, lean_object* v_inst_1594_, lean_object* v_declName_1595_, lean_object* v_target_1596_){
_start:
{
lean_object* v_toBind_1597_; lean_object* v_getEnv_1598_; lean_object* v_modifyEnv_1599_; lean_object* v___f_1600_; lean_object* v___f_1601_; lean_object* v___x_1602_; lean_object* v___f_1603_; lean_object* v___f_1604_; lean_object* v___f_1605_; lean_object* v___f_1606_; lean_object* v___f_1607_; lean_object* v___f_1608_; lean_object* v___f_1609_; lean_object* v___x_1610_; 
v_toBind_1597_ = lean_ctor_get(v_inst_1591_, 1);
lean_inc_n(v_toBind_1597_, 7);
v_getEnv_1598_ = lean_ctor_get(v_inst_1593_, 0);
lean_inc_n(v_getEnv_1598_, 6);
v_modifyEnv_1599_ = lean_ctor_get(v_inst_1593_, 1);
lean_inc_n(v_modifyEnv_1599_, 2);
lean_dec_ref(v_inst_1593_);
lean_inc_n(v_target_1596_, 2);
lean_inc_n(v_declName_1595_, 5);
v___f_1600_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1600_, 0, v_declName_1595_);
lean_closure_set(v___f_1600_, 1, v_target_1596_);
lean_inc_ref(v___f_1600_);
v___f_1601_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__3), 4, 3);
lean_closure_set(v___f_1601_, 0, v_modifyEnv_1599_);
lean_closure_set(v___f_1601_, 1, v___f_1600_);
lean_closure_set(v___f_1601_, 2, v_declName_1595_);
v___x_1602_ = ((lean_object*)(l_Lean_addInheritedDocString___redArg___closed__0));
v___f_1603_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__4___boxed), 9, 8);
lean_closure_set(v___f_1603_, 0, v_declName_1595_);
lean_closure_set(v___f_1603_, 1, v_target_1596_);
lean_closure_set(v___f_1603_, 2, v_modifyEnv_1599_);
lean_closure_set(v___f_1603_, 3, v___f_1600_);
lean_closure_set(v___f_1603_, 4, v_inst_1594_);
lean_closure_set(v___f_1603_, 5, v_toBind_1597_);
lean_closure_set(v___f_1603_, 6, v___f_1601_);
lean_closure_set(v___f_1603_, 7, v_getEnv_1598_);
lean_inc_ref(v___f_1603_);
v___f_1604_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__6), 2, 1);
lean_closure_set(v___f_1604_, 0, v___f_1603_);
lean_inc_ref_n(v_inst_1592_, 2);
lean_inc_ref_n(v_inst_1591_, 2);
v___f_1605_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__7), 9, 8);
lean_closure_set(v___f_1605_, 0, v_target_1596_);
lean_closure_set(v___f_1605_, 1, v_declName_1595_);
lean_closure_set(v___f_1605_, 2, v___x_1602_);
lean_closure_set(v___f_1605_, 3, v___f_1603_);
lean_closure_set(v___f_1605_, 4, v_inst_1591_);
lean_closure_set(v___f_1605_, 5, v_inst_1592_);
lean_closure_set(v___f_1605_, 6, v_toBind_1597_);
lean_closure_set(v___f_1605_, 7, v___f_1604_);
lean_inc_ref(v___f_1605_);
v___f_1606_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__8), 4, 3);
lean_closure_set(v___f_1606_, 0, v_toBind_1597_);
lean_closure_set(v___f_1606_, 1, v_getEnv_1598_);
lean_closure_set(v___f_1606_, 2, v___f_1605_);
v___f_1607_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__9), 8, 7);
lean_closure_set(v___f_1607_, 0, v_declName_1595_);
lean_closure_set(v___f_1607_, 1, v_toBind_1597_);
lean_closure_set(v___f_1607_, 2, v_getEnv_1598_);
lean_closure_set(v___f_1607_, 3, v___f_1605_);
lean_closure_set(v___f_1607_, 4, v_inst_1591_);
lean_closure_set(v___f_1607_, 5, v_inst_1592_);
lean_closure_set(v___f_1607_, 6, v___f_1606_);
lean_inc_ref(v___f_1607_);
v___f_1608_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__8), 4, 3);
lean_closure_set(v___f_1608_, 0, v_toBind_1597_);
lean_closure_set(v___f_1608_, 1, v_getEnv_1598_);
lean_closure_set(v___f_1608_, 2, v___f_1607_);
v___f_1609_ = lean_alloc_closure((void*)(l_Lean_addInheritedDocString___redArg___lam__11___boxed), 8, 7);
lean_closure_set(v___f_1609_, 0, v_declName_1595_);
lean_closure_set(v___f_1609_, 1, v_toBind_1597_);
lean_closure_set(v___f_1609_, 2, v_getEnv_1598_);
lean_closure_set(v___f_1609_, 3, v___f_1607_);
lean_closure_set(v___f_1609_, 4, v_inst_1591_);
lean_closure_set(v___f_1609_, 5, v_inst_1592_);
lean_closure_set(v___f_1609_, 6, v___f_1608_);
v___x_1610_ = lean_apply_4(v_toBind_1597_, lean_box(0), lean_box(0), v_getEnv_1598_, v___f_1609_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l_Lean_addInheritedDocString(lean_object* v_m_1611_, lean_object* v_inst_1612_, lean_object* v_inst_1613_, lean_object* v_inst_1614_, lean_object* v_inst_1615_, lean_object* v_declName_1616_, lean_object* v_target_1617_){
_start:
{
lean_object* v___x_1618_; 
v___x_1618_ = l_Lean_addInheritedDocString___redArg(v_inst_1612_, v_inst_1613_, v_inst_1614_, v_inst_1615_, v_declName_1616_, v_target_1617_);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(lean_object* v_es_1619_){
_start:
{
lean_object* v___x_1620_; 
v___x_1620_ = lean_array_mk(v_es_1619_);
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(lean_object* v_x_1623_, lean_object* v_x_1624_, lean_object* v_es_1625_){
_start:
{
lean_object* v_ents_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; 
v_ents_1626_ = lean_array_mk(v_es_1625_);
v___x_1627_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_));
lean_inc_ref(v_ents_1626_);
v___x_1628_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1627_);
lean_ctor_set(v___x_1628_, 1, v_ents_1626_);
lean_ctor_set(v___x_1628_, 2, v_ents_1626_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2____boxed(lean_object* v_x_1629_, lean_object* v_x_1630_, lean_object* v_es_1631_){
_start:
{
lean_object* v_res_1632_; 
v_res_1632_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(v_x_1629_, v_x_1630_, v_es_1631_);
lean_dec_ref(v_x_1630_);
lean_dec_ref(v_x_1629_);
return v_res_1632_;
}
}
static lean_object* _init_l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1633_ = lean_unsigned_to_nat(32u);
v___x_1634_ = lean_mk_empty_array_with_capacity(v___x_1633_);
v___x_1635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1634_);
return v___x_1635_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(lean_object* v___x_1636_, lean_object* v_x_1637_){
_start:
{
lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; size_t v___x_1641_; lean_object* v___x_1642_; 
v___x_1638_ = lean_unsigned_to_nat(32u);
v___x_1639_ = lean_mk_empty_array_with_capacity(v___x_1638_);
v___x_1640_ = lean_obj_once(&l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_, &l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2__once, _init_l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2___closed__0_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_);
v___x_1641_ = ((size_t)5ULL);
lean_inc(v___x_1636_);
v___x_1642_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1642_, 0, v___x_1640_);
lean_ctor_set(v___x_1642_, 1, v___x_1639_);
lean_ctor_set(v___x_1642_, 2, v___x_1636_);
lean_ctor_set(v___x_1642_, 3, v___x_1636_);
lean_ctor_set_usize(v___x_1642_, 4, v___x_1641_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2____boxed(lean_object* v___x_1643_, lean_object* v_x_1644_){
_start:
{
lean_object* v_res_1645_; 
v_res_1645_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(v___x_1643_, v_x_1644_);
lean_dec_ref(v_x_1644_);
return v_res_1645_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1667_; lean_object* v___x_1668_; 
v___x_1667_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_));
v___x_1668_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_1667_);
return v___x_1668_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2____boxed(lean_object* v_a_1669_){
_start:
{
lean_object* v_res_1670_; 
v_res_1670_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_();
return v_res_1670_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMainModuleDoc___lam__0(lean_object* v_addEntryFn_1671_, lean_object* v_doc_1672_, lean_object* v_s_1673_){
_start:
{
lean_object* v_importedEntries_1674_; lean_object* v_state_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1683_; 
v_importedEntries_1674_ = lean_ctor_get(v_s_1673_, 0);
v_state_1675_ = lean_ctor_get(v_s_1673_, 1);
v_isSharedCheck_1683_ = !lean_is_exclusive(v_s_1673_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1677_ = v_s_1673_;
v_isShared_1678_ = v_isSharedCheck_1683_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_state_1675_);
lean_inc(v_importedEntries_1674_);
lean_dec(v_s_1673_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1683_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v_state_1679_; lean_object* v___x_1681_; 
v_state_1679_ = lean_apply_2(v_addEntryFn_1671_, v_state_1675_, v_doc_1672_);
if (v_isShared_1678_ == 0)
{
lean_ctor_set(v___x_1677_, 1, v_state_1679_);
v___x_1681_ = v___x_1677_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v_importedEntries_1674_);
lean_ctor_set(v_reuseFailAlloc_1682_, 1, v_state_1679_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMainModuleDoc(lean_object* v_env_1684_, lean_object* v_doc_1685_){
_start:
{
lean_object* v___x_1686_; lean_object* v_toEnvExtension_1687_; lean_object* v_addEntryFn_1688_; lean_object* v_asyncMode_1689_; uint8_t v_logWrites_1690_; lean_object* v___f_1691_; lean_object* v___x_1692_; uint8_t v___x_1693_; 
v___x_1686_ = l___private_Lean_DocString_Extension_0__Lean_moduleDocExt;
v_toEnvExtension_1687_ = lean_ctor_get(v___x_1686_, 0);
v_addEntryFn_1688_ = lean_ctor_get(v___x_1686_, 3);
v_asyncMode_1689_ = lean_ctor_get(v_toEnvExtension_1687_, 2);
v_logWrites_1690_ = lean_ctor_get_uint8(v_toEnvExtension_1687_, sizeof(void*)*6);
lean_inc(v_addEntryFn_1688_);
v___f_1691_ = lean_alloc_closure((void*)(l_Lean_addMainModuleDoc___lam__0), 3, 2);
lean_closure_set(v___f_1691_, 0, v_addEntryFn_1688_);
lean_closure_set(v___f_1691_, 1, v_doc_1685_);
v___x_1692_ = lean_box(0);
v___x_1693_ = 1;
if (v_logWrites_1690_ == 0)
{
lean_object* v___x_1694_; 
lean_inc_ref(v_toEnvExtension_1687_);
v___x_1694_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1687_, v_env_1684_, v___f_1691_, v_asyncMode_1689_, v___x_1692_, v___x_1693_);
return v___x_1694_;
}
else
{
lean_object* v___x_1695_; lean_object* v___x_1696_; 
lean_inc_ref_n(v_toEnvExtension_1687_, 2);
v___x_1695_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1687_, v_env_1684_);
lean_dec_ref(v_env_1684_);
v___x_1696_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1687_, v___x_1695_, v___f_1691_, v_asyncMode_1689_, v___x_1692_, v___x_1693_);
return v___x_1696_;
}
}
}
static lean_object* _init_l_Lean_getMainModuleDoc___closed__0(void){
_start:
{
lean_object* v___x_1697_; 
v___x_1697_ = l_Lean_instInhabitedPersistentArray_default___redArg();
return v___x_1697_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModuleDoc(lean_object* v_env_1698_){
_start:
{
lean_object* v___x_1699_; lean_object* v_toEnvExtension_1700_; lean_object* v_asyncMode_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; 
v___x_1699_ = l___private_Lean_DocString_Extension_0__Lean_moduleDocExt;
v_toEnvExtension_1700_ = lean_ctor_get(v___x_1699_, 0);
v_asyncMode_1701_ = lean_ctor_get(v_toEnvExtension_1700_, 2);
v___x_1702_ = lean_obj_once(&l_Lean_getMainModuleDoc___closed__0, &l_Lean_getMainModuleDoc___closed__0_once, _init_l_Lean_getMainModuleDoc___closed__0);
v___x_1703_ = lean_box(0);
v___x_1704_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1702_, v___x_1699_, v_env_1698_, v_asyncMode_1701_, v___x_1703_);
return v___x_1704_;
}
}
static lean_object* _init_l_Lean_getModuleDoc_x3f___closed__0(void){
_start:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; 
v___x_1705_ = lean_obj_once(&l_Lean_getMainModuleDoc___closed__0, &l_Lean_getMainModuleDoc___closed__0_once, _init_l_Lean_getMainModuleDoc___closed__0);
v___x_1706_ = lean_box(0);
v___x_1707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1707_, 0, v___x_1706_);
lean_ctor_set(v___x_1707_, 1, v___x_1705_);
return v___x_1707_;
}
}
LEAN_EXPORT lean_object* l_Lean_getModuleDoc_x3f(lean_object* v_env_1708_, lean_object* v_moduleName_1709_){
_start:
{
lean_object* v___x_1710_; 
v___x_1710_ = l_Lean_Environment_getModuleIdx_x3f(v_env_1708_, v_moduleName_1709_);
if (lean_obj_tag(v___x_1710_) == 0)
{
lean_object* v___x_1711_; 
v___x_1711_ = lean_box(0);
return v___x_1711_;
}
else
{
lean_object* v_val_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1723_; 
v_val_1712_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1723_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1714_ = v___x_1710_;
v_isShared_1715_ = v_isSharedCheck_1723_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_val_1712_);
lean_dec(v___x_1710_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1723_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v___x_1716_; lean_object* v___x_1717_; uint8_t v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1721_; 
v___x_1716_ = lean_obj_once(&l_Lean_getModuleDoc_x3f___closed__0, &l_Lean_getModuleDoc_x3f___closed__0_once, _init_l_Lean_getModuleDoc_x3f___closed__0);
v___x_1717_ = l___private_Lean_DocString_Extension_0__Lean_moduleDocExt;
v___x_1718_ = 1;
v___x_1719_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1716_, v___x_1717_, v_env_1708_, v_val_1712_, v___x_1718_);
lean_dec(v_val_1712_);
if (v_isShared_1715_ == 0)
{
lean_ctor_set(v___x_1714_, 0, v___x_1719_);
v___x_1721_ = v___x_1714_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v___x_1719_);
v___x_1721_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
return v___x_1721_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getModuleDoc_x3f___boxed(lean_object* v_env_1724_, lean_object* v_moduleName_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l_Lean_getModuleDoc_x3f(v_env_1724_, v_moduleName_1725_);
lean_dec(v_moduleName_1725_);
lean_dec_ref(v_env_1724_);
return v_res_1726_;
}
}
static lean_object* _init_l_Lean_getDocStringText___redArg___closed__1(void){
_start:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; 
v___x_1728_ = ((lean_object*)(l_Lean_getDocStringText___redArg___closed__0));
v___x_1729_ = l_Lean_stringToMessageData(v___x_1728_);
return v___x_1729_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___redArg(lean_object* v_inst_1733_, lean_object* v_inst_1734_, lean_object* v_stx_1735_){
_start:
{
lean_object* v_toApplicative_1742_; lean_object* v_toPure_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v_toApplicative_1742_ = lean_ctor_get(v_inst_1733_, 0);
v_toPure_1743_ = lean_ctor_get(v_toApplicative_1742_, 1);
v___x_1744_ = lean_unsigned_to_nat(1u);
v___x_1745_ = l_Lean_Syntax_getArg(v_stx_1735_, v___x_1744_);
if (lean_obj_tag(v___x_1745_) == 1)
{
lean_object* v_kind_1746_; 
v_kind_1746_ = lean_ctor_get(v___x_1745_, 1);
lean_inc(v_kind_1746_);
if (lean_obj_tag(v_kind_1746_) == 1)
{
lean_object* v_pre_1747_; 
v_pre_1747_ = lean_ctor_get(v_kind_1746_, 0);
lean_inc(v_pre_1747_);
if (lean_obj_tag(v_pre_1747_) == 1)
{
lean_object* v_pre_1748_; 
v_pre_1748_ = lean_ctor_get(v_pre_1747_, 0);
lean_inc(v_pre_1748_);
if (lean_obj_tag(v_pre_1748_) == 1)
{
lean_object* v_pre_1749_; 
v_pre_1749_ = lean_ctor_get(v_pre_1748_, 0);
lean_inc(v_pre_1749_);
if (lean_obj_tag(v_pre_1749_) == 1)
{
lean_object* v_pre_1750_; 
v_pre_1750_ = lean_ctor_get(v_pre_1749_, 0);
if (lean_obj_tag(v_pre_1750_) == 0)
{
lean_object* v_args_1751_; lean_object* v_str_1752_; lean_object* v_str_1753_; lean_object* v_str_1754_; lean_object* v_str_1755_; lean_object* v___x_1756_; uint8_t v___x_1757_; 
v_args_1751_ = lean_ctor_get(v___x_1745_, 2);
lean_inc_ref(v_args_1751_);
lean_dec_ref_known(v___x_1745_, 3);
v_str_1752_ = lean_ctor_get(v_kind_1746_, 1);
lean_inc_ref(v_str_1752_);
lean_dec_ref_known(v_kind_1746_, 2);
v_str_1753_ = lean_ctor_get(v_pre_1747_, 1);
lean_inc_ref(v_str_1753_);
lean_dec_ref_known(v_pre_1747_, 2);
v_str_1754_ = lean_ctor_get(v_pre_1748_, 1);
lean_inc_ref(v_str_1754_);
lean_dec_ref_known(v_pre_1748_, 2);
v_str_1755_ = lean_ctor_get(v_pre_1749_, 1);
lean_inc_ref(v_str_1755_);
lean_dec_ref_known(v_pre_1749_, 2);
v___x_1756_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__5_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_));
v___x_1757_ = lean_string_dec_eq(v_str_1755_, v___x_1756_);
lean_dec_ref(v_str_1755_);
if (v___x_1757_ == 0)
{
lean_dec_ref(v_str_1754_);
lean_dec_ref(v_str_1753_);
lean_dec_ref(v_str_1752_);
lean_dec_ref(v_args_1751_);
goto v___jp_1736_;
}
else
{
lean_object* v___x_1758_; uint8_t v___x_1759_; 
v___x_1758_ = ((lean_object*)(l_Lean_getDocStringText___redArg___closed__2));
v___x_1759_ = lean_string_dec_eq(v_str_1754_, v___x_1758_);
lean_dec_ref(v_str_1754_);
if (v___x_1759_ == 0)
{
lean_dec_ref(v_str_1753_);
lean_dec_ref(v_str_1752_);
lean_dec_ref(v_args_1751_);
goto v___jp_1736_;
}
else
{
lean_object* v___x_1760_; uint8_t v___x_1761_; 
v___x_1760_ = ((lean_object*)(l_Lean_getDocStringText___redArg___closed__3));
v___x_1761_ = lean_string_dec_eq(v_str_1753_, v___x_1760_);
lean_dec_ref(v_str_1753_);
if (v___x_1761_ == 0)
{
lean_dec_ref(v_str_1752_);
lean_dec_ref(v_args_1751_);
goto v___jp_1736_;
}
else
{
lean_object* v___x_1762_; uint8_t v___x_1763_; 
v___x_1762_ = ((lean_object*)(l_Lean_getDocStringText___redArg___closed__4));
v___x_1763_ = lean_string_dec_eq(v_str_1752_, v___x_1762_);
lean_dec_ref(v_str_1752_);
if (v___x_1763_ == 0)
{
lean_dec_ref(v_args_1751_);
goto v___jp_1736_;
}
else
{
lean_object* v___x_1764_; lean_object* v___x_1765_; uint8_t v___x_1766_; 
v___x_1764_ = lean_array_get_size(v_args_1751_);
v___x_1765_ = lean_unsigned_to_nat(2u);
v___x_1766_ = lean_nat_dec_eq(v___x_1764_, v___x_1765_);
if (v___x_1766_ == 0)
{
lean_dec_ref(v_args_1751_);
goto v___jp_1736_;
}
else
{
lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1767_ = lean_unsigned_to_nat(0u);
v___x_1768_ = lean_array_fget(v_args_1751_, v___x_1767_);
lean_dec_ref(v_args_1751_);
if (lean_obj_tag(v___x_1768_) == 2)
{
lean_object* v_val_1769_; lean_object* v___x_1770_; 
lean_inc(v_toPure_1743_);
lean_dec(v_stx_1735_);
lean_dec_ref(v_inst_1734_);
lean_dec_ref(v_inst_1733_);
v_val_1769_ = lean_ctor_get(v___x_1768_, 1);
lean_inc_ref(v_val_1769_);
lean_dec_ref_known(v___x_1768_, 2);
v___x_1770_ = lean_apply_2(v_toPure_1743_, lean_box(0), v_val_1769_);
return v___x_1770_;
}
else
{
lean_dec(v___x_1768_);
goto v___jp_1736_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1749_, 2);
lean_dec_ref_known(v_pre_1748_, 2);
lean_dec_ref_known(v_pre_1747_, 2);
lean_dec_ref_known(v_kind_1746_, 2);
lean_dec_ref_known(v___x_1745_, 3);
goto v___jp_1736_;
}
}
else
{
lean_dec_ref_known(v_pre_1748_, 2);
lean_dec(v_pre_1749_);
lean_dec_ref_known(v_pre_1747_, 2);
lean_dec_ref_known(v_kind_1746_, 2);
lean_dec_ref_known(v___x_1745_, 3);
goto v___jp_1736_;
}
}
else
{
lean_dec(v_pre_1748_);
lean_dec_ref_known(v_pre_1747_, 2);
lean_dec_ref_known(v_kind_1746_, 2);
lean_dec_ref_known(v___x_1745_, 3);
goto v___jp_1736_;
}
}
else
{
lean_dec_ref_known(v_kind_1746_, 2);
lean_dec(v_pre_1747_);
lean_dec_ref_known(v___x_1745_, 3);
goto v___jp_1736_;
}
}
else
{
lean_dec(v_kind_1746_);
lean_dec_ref_known(v___x_1745_, 3);
goto v___jp_1736_;
}
}
else
{
lean_dec(v___x_1745_);
goto v___jp_1736_;
}
v___jp_1736_:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; 
v___x_1737_ = lean_obj_once(&l_Lean_getDocStringText___redArg___closed__1, &l_Lean_getDocStringText___redArg___closed__1_once, _init_l_Lean_getDocStringText___redArg___closed__1);
lean_inc(v_stx_1735_);
v___x_1738_ = l_Lean_MessageData_ofSyntax(v_stx_1735_);
v___x_1739_ = l_Lean_indentD(v___x_1738_);
v___x_1740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1740_, 0, v___x_1737_);
lean_ctor_set(v___x_1740_, 1, v___x_1739_);
v___x_1741_ = l_Lean_throwErrorAt___redArg(v_inst_1733_, v_inst_1734_, v_stx_1735_, v___x_1740_);
return v___x_1741_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText(lean_object* v_m_1771_, lean_object* v_inst_1772_, lean_object* v_inst_1773_, lean_object* v_stx_1774_){
_start:
{
lean_object* v___x_1775_; 
v___x_1775_ = l_Lean_getDocStringText___redArg(v_inst_1772_, v_inst_1773_, v_stx_1774_);
return v___x_1775_;
}
}
LEAN_EXPORT uint8_t l_Lean_isVersoDocComment(lean_object* v_stx_1782_){
_start:
{
lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; uint8_t v___x_1786_; 
v___x_1783_ = lean_unsigned_to_nat(1u);
v___x_1784_ = l_Lean_Syntax_getArg(v_stx_1782_, v___x_1783_);
v___x_1785_ = ((lean_object*)(l_Lean_isVersoDocComment___closed__1));
v___x_1786_ = l_Lean_Syntax_isOfKind(v___x_1784_, v___x_1785_);
return v___x_1786_;
}
}
LEAN_EXPORT lean_object* l_Lean_isVersoDocComment___boxed(lean_object* v_stx_1787_){
_start:
{
uint8_t v_res_1788_; lean_object* v_r_1789_; 
v_res_1788_ = l_Lean_isVersoDocComment(v_stx_1787_);
lean_dec(v_stx_1787_);
v_r_1789_ = lean_box(v_res_1788_);
return v_r_1789_;
}
}
static lean_object* _init_l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__1(void){
_start:
{
lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; 
v___x_1792_ = l_Lean_instInhabitedDeclarationRange_default;
v___x_1793_ = ((lean_object*)(l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__0));
v___x_1794_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1794_, 0, v___x_1793_);
lean_ctor_set(v___x_1794_, 1, v___x_1793_);
lean_ctor_set(v___x_1794_, 2, v___x_1792_);
return v___x_1794_;
}
}
static lean_object* _init_l_Lean_VersoModuleDocs_instInhabitedSnippet_default(void){
_start:
{
lean_object* v___x_1795_; 
v___x_1795_ = lean_obj_once(&l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__1, &l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__1_once, _init_l_Lean_VersoModuleDocs_instInhabitedSnippet_default___closed__1);
return v___x_1795_;
}
}
static lean_object* _init_l_Lean_VersoModuleDocs_instInhabitedSnippet(void){
_start:
{
lean_object* v___x_1796_; 
v___x_1796_ = l_Lean_VersoModuleDocs_instInhabitedSnippet_default;
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__2(lean_object* v_a_1797_){
_start:
{
lean_object* v___x_1798_; 
v___x_1798_ = lean_nat_to_int(v_a_1797_);
return v___x_1798_;
}
}
static lean_object* _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3(void){
_start:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1805_ = lean_unsigned_to_nat(2u);
v___x_1806_ = lean_nat_to_int(v___x_1805_);
return v___x_1806_;
}
}
static lean_object* _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4(void){
_start:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___x_1807_ = lean_unsigned_to_nat(1u);
v___x_1808_ = lean_nat_to_int(v___x_1807_);
return v___x_1808_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5_spec__10_spec__18(lean_object* v_x_1821_, lean_object* v_x_1822_, lean_object* v_x_1823_){
_start:
{
if (lean_obj_tag(v_x_1823_) == 0)
{
lean_dec(v_x_1821_);
return v_x_1822_;
}
else
{
lean_object* v_head_1824_; lean_object* v_tail_1825_; lean_object* v___x_1827_; uint8_t v_isShared_1828_; uint8_t v_isSharedCheck_1836_; 
v_head_1824_ = lean_ctor_get(v_x_1823_, 0);
v_tail_1825_ = lean_ctor_get(v_x_1823_, 1);
v_isSharedCheck_1836_ = !lean_is_exclusive(v_x_1823_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1827_ = v_x_1823_;
v_isShared_1828_ = v_isSharedCheck_1836_;
goto v_resetjp_1826_;
}
else
{
lean_inc(v_tail_1825_);
lean_inc(v_head_1824_);
lean_dec(v_x_1823_);
v___x_1827_ = lean_box(0);
v_isShared_1828_ = v_isSharedCheck_1836_;
goto v_resetjp_1826_;
}
v_resetjp_1826_:
{
lean_object* v___x_1830_; 
lean_inc(v_x_1821_);
if (v_isShared_1828_ == 0)
{
lean_ctor_set_tag(v___x_1827_, 5);
lean_ctor_set(v___x_1827_, 1, v_x_1821_);
lean_ctor_set(v___x_1827_, 0, v_x_1822_);
v___x_1830_ = v___x_1827_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_x_1822_);
lean_ctor_set(v_reuseFailAlloc_1835_, 1, v_x_1821_);
v___x_1830_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; 
v___x_1831_ = lean_unsigned_to_nat(0u);
v___x_1832_ = l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4(v_head_1824_, v___x_1831_);
v___x_1833_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1833_, 0, v___x_1830_);
lean_ctor_set(v___x_1833_, 1, v___x_1832_);
v_x_1822_ = v___x_1833_;
v_x_1823_ = v_tail_1825_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5_spec__10(lean_object* v_x_1837_, lean_object* v_x_1838_, lean_object* v_x_1839_){
_start:
{
if (lean_obj_tag(v_x_1839_) == 0)
{
lean_dec(v_x_1837_);
return v_x_1838_;
}
else
{
lean_object* v_head_1840_; lean_object* v_tail_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1852_; 
v_head_1840_ = lean_ctor_get(v_x_1839_, 0);
v_tail_1841_ = lean_ctor_get(v_x_1839_, 1);
v_isSharedCheck_1852_ = !lean_is_exclusive(v_x_1839_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1843_ = v_x_1839_;
v_isShared_1844_ = v_isSharedCheck_1852_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_tail_1841_);
lean_inc(v_head_1840_);
lean_dec(v_x_1839_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1852_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1846_; 
lean_inc(v_x_1837_);
if (v_isShared_1844_ == 0)
{
lean_ctor_set_tag(v___x_1843_, 5);
lean_ctor_set(v___x_1843_, 1, v_x_1837_);
lean_ctor_set(v___x_1843_, 0, v_x_1838_);
v___x_1846_ = v___x_1843_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v_x_1838_);
lean_ctor_set(v_reuseFailAlloc_1851_, 1, v_x_1837_);
v___x_1846_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1847_ = lean_unsigned_to_nat(0u);
v___x_1848_ = l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4(v_head_1840_, v___x_1847_);
v___x_1849_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1846_);
lean_ctor_set(v___x_1849_, 1, v___x_1848_);
v___x_1850_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5_spec__10_spec__18(v_x_1837_, v___x_1849_, v_tail_1841_);
return v___x_1850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5(lean_object* v_x_1853_, lean_object* v_x_1854_){
_start:
{
if (lean_obj_tag(v_x_1853_) == 0)
{
lean_object* v___x_1855_; 
lean_dec(v_x_1854_);
v___x_1855_ = lean_box(0);
return v___x_1855_;
}
else
{
lean_object* v_tail_1856_; 
v_tail_1856_ = lean_ctor_get(v_x_1853_, 1);
if (lean_obj_tag(v_tail_1856_) == 0)
{
lean_object* v_head_1857_; lean_object* v___x_1858_; 
lean_dec(v_x_1854_);
v_head_1857_ = lean_ctor_get(v_x_1853_, 0);
lean_inc(v_head_1857_);
lean_dec_ref_known(v_x_1853_, 2);
v___x_1858_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5___lam__0(v_head_1857_);
return v___x_1858_;
}
else
{
lean_object* v_head_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; 
lean_inc(v_tail_1856_);
v_head_1859_ = lean_ctor_get(v_x_1853_, 0);
lean_inc(v_head_1859_);
lean_dec_ref_known(v_x_1853_, 2);
v___x_1860_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5___lam__0(v_head_1859_);
v___x_1861_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5_spec__10(v_x_1854_, v___x_1860_, v_tail_1856_);
return v___x_1861_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5(void){
_start:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1863_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__0));
v___x_1864_ = lean_string_length(v___x_1863_);
return v___x_1864_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6(void){
_start:
{
lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1865_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__5);
v___x_1866_ = lean_nat_to_int(v___x_1865_);
return v___x_1866_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object* v_xs_1875_){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; uint8_t v___x_1878_; 
v___x_1876_ = lean_array_get_size(v_xs_1875_);
v___x_1877_ = lean_unsigned_to_nat(0u);
v___x_1878_ = lean_nat_dec_eq(v___x_1876_, v___x_1877_);
if (v___x_1878_ == 0)
{
lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1879_ = lean_array_to_list(v_xs_1875_);
v___x_1880_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_1881_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5(v___x_1879_, v___x_1880_);
v___x_1882_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6);
v___x_1883_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_1884_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1884_, 0, v___x_1883_);
lean_ctor_set(v___x_1884_, 1, v___x_1881_);
v___x_1885_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8));
v___x_1886_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1886_, 0, v___x_1884_);
lean_ctor_set(v___x_1886_, 1, v___x_1885_);
v___x_1887_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1887_, 0, v___x_1882_);
lean_ctor_set(v___x_1887_, 1, v___x_1886_);
v___x_1888_ = l_Std_Format_fill(v___x_1887_);
return v___x_1888_;
}
else
{
lean_object* v___x_1889_; 
lean_dec_ref(v_xs_1875_);
v___x_1889_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10));
return v___x_1889_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4(lean_object* v_x_1944_, lean_object* v_prec_1945_){
_start:
{
switch(lean_obj_tag(v_x_1944_))
{
case 0:
{
lean_object* v_string_1946_; lean_object* v___x_1948_; uint8_t v_isShared_1949_; uint8_t v_isSharedCheck_1966_; 
v_string_1946_ = lean_ctor_get(v_x_1944_, 0);
v_isSharedCheck_1966_ = !lean_is_exclusive(v_x_1944_);
if (v_isSharedCheck_1966_ == 0)
{
v___x_1948_ = v_x_1944_;
v_isShared_1949_ = v_isSharedCheck_1966_;
goto v_resetjp_1947_;
}
else
{
lean_inc(v_string_1946_);
lean_dec(v_x_1944_);
v___x_1948_ = lean_box(0);
v_isShared_1949_ = v_isSharedCheck_1966_;
goto v_resetjp_1947_;
}
v_resetjp_1947_:
{
lean_object* v___y_1951_; lean_object* v___x_1962_; uint8_t v___x_1963_; 
v___x_1962_ = lean_unsigned_to_nat(1024u);
v___x_1963_ = lean_nat_dec_le(v___x_1962_, v_prec_1945_);
if (v___x_1963_ == 0)
{
lean_object* v___x_1964_; 
v___x_1964_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_1951_ = v___x_1964_;
goto v___jp_1950_;
}
else
{
lean_object* v___x_1965_; 
v___x_1965_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_1951_ = v___x_1965_;
goto v___jp_1950_;
}
v___jp_1950_:
{
lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1955_; 
v___x_1952_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__2));
v___x_1953_ = l_String_quote(v_string_1946_);
if (v_isShared_1949_ == 0)
{
lean_ctor_set_tag(v___x_1948_, 3);
lean_ctor_set(v___x_1948_, 0, v___x_1953_);
v___x_1955_ = v___x_1948_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v___x_1953_);
v___x_1955_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
lean_object* v___x_1956_; lean_object* v___x_1957_; uint8_t v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; 
v___x_1956_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1956_, 0, v___x_1952_);
lean_ctor_set(v___x_1956_, 1, v___x_1955_);
lean_inc(v___y_1951_);
v___x_1957_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1957_, 0, v___y_1951_);
lean_ctor_set(v___x_1957_, 1, v___x_1956_);
v___x_1958_ = 0;
v___x_1959_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1959_, 0, v___x_1957_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*1, v___x_1958_);
v___x_1960_ = l_Repr_addAppParen(v___x_1959_, v_prec_1945_);
return v___x_1960_;
}
}
}
}
case 1:
{
lean_object* v_content_1967_; lean_object* v___y_1969_; lean_object* v___x_1977_; uint8_t v___x_1978_; 
v_content_1967_ = lean_ctor_get(v_x_1944_, 0);
lean_inc_ref(v_content_1967_);
lean_dec_ref_known(v_x_1944_, 1);
v___x_1977_ = lean_unsigned_to_nat(1024u);
v___x_1978_ = lean_nat_dec_le(v___x_1977_, v_prec_1945_);
if (v___x_1978_ == 0)
{
lean_object* v___x_1979_; 
v___x_1979_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_1969_ = v___x_1979_;
goto v___jp_1968_;
}
else
{
lean_object* v___x_1980_; 
v___x_1980_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_1969_ = v___x_1980_;
goto v___jp_1968_;
}
v___jp_1968_:
{
lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; uint8_t v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1970_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__7));
v___x_1971_ = l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_content_1967_);
v___x_1972_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1972_, 0, v___x_1970_);
lean_ctor_set(v___x_1972_, 1, v___x_1971_);
lean_inc(v___y_1969_);
v___x_1973_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1973_, 0, v___y_1969_);
lean_ctor_set(v___x_1973_, 1, v___x_1972_);
v___x_1974_ = 0;
v___x_1975_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1975_, 0, v___x_1973_);
lean_ctor_set_uint8(v___x_1975_, sizeof(void*)*1, v___x_1974_);
v___x_1976_ = l_Repr_addAppParen(v___x_1975_, v_prec_1945_);
return v___x_1976_;
}
}
case 2:
{
lean_object* v_content_1981_; lean_object* v___y_1983_; lean_object* v___x_1991_; uint8_t v___x_1992_; 
v_content_1981_ = lean_ctor_get(v_x_1944_, 0);
lean_inc_ref(v_content_1981_);
lean_dec_ref_known(v_x_1944_, 1);
v___x_1991_ = lean_unsigned_to_nat(1024u);
v___x_1992_ = lean_nat_dec_le(v___x_1991_, v_prec_1945_);
if (v___x_1992_ == 0)
{
lean_object* v___x_1993_; 
v___x_1993_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_1983_ = v___x_1993_;
goto v___jp_1982_;
}
else
{
lean_object* v___x_1994_; 
v___x_1994_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_1983_ = v___x_1994_;
goto v___jp_1982_;
}
v___jp_1982_:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; uint8_t v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; 
v___x_1984_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__10));
v___x_1985_ = l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_content_1981_);
v___x_1986_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1986_, 0, v___x_1984_);
lean_ctor_set(v___x_1986_, 1, v___x_1985_);
lean_inc(v___y_1983_);
v___x_1987_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1987_, 0, v___y_1983_);
lean_ctor_set(v___x_1987_, 1, v___x_1986_);
v___x_1988_ = 0;
v___x_1989_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1989_, 0, v___x_1987_);
lean_ctor_set_uint8(v___x_1989_, sizeof(void*)*1, v___x_1988_);
v___x_1990_ = l_Repr_addAppParen(v___x_1989_, v_prec_1945_);
return v___x_1990_;
}
}
case 3:
{
lean_object* v_string_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2015_; 
v_string_1995_ = lean_ctor_get(v_x_1944_, 0);
v_isSharedCheck_2015_ = !lean_is_exclusive(v_x_1944_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_1997_ = v_x_1944_;
v_isShared_1998_ = v_isSharedCheck_2015_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_string_1995_);
lean_dec(v_x_1944_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2015_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___y_2000_; lean_object* v___x_2011_; uint8_t v___x_2012_; 
v___x_2011_ = lean_unsigned_to_nat(1024u);
v___x_2012_ = lean_nat_dec_le(v___x_2011_, v_prec_1945_);
if (v___x_2012_ == 0)
{
lean_object* v___x_2013_; 
v___x_2013_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2000_ = v___x_2013_;
goto v___jp_1999_;
}
else
{
lean_object* v___x_2014_; 
v___x_2014_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2000_ = v___x_2014_;
goto v___jp_1999_;
}
v___jp_1999_:
{
lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2004_; 
v___x_2001_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__13));
v___x_2002_ = l_String_quote(v_string_1995_);
if (v_isShared_1998_ == 0)
{
lean_ctor_set(v___x_1997_, 0, v___x_2002_);
v___x_2004_ = v___x_1997_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v___x_2002_);
v___x_2004_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; uint8_t v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___x_2005_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2005_, 0, v___x_2001_);
lean_ctor_set(v___x_2005_, 1, v___x_2004_);
lean_inc(v___y_2000_);
v___x_2006_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2006_, 0, v___y_2000_);
lean_ctor_set(v___x_2006_, 1, v___x_2005_);
v___x_2007_ = 0;
v___x_2008_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2008_, 0, v___x_2006_);
lean_ctor_set_uint8(v___x_2008_, sizeof(void*)*1, v___x_2007_);
v___x_2009_ = l_Repr_addAppParen(v___x_2008_, v_prec_1945_);
return v___x_2009_;
}
}
}
}
case 4:
{
uint8_t v_mode_2016_; lean_object* v_string_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2042_; 
v_mode_2016_ = lean_ctor_get_uint8(v_x_1944_, sizeof(void*)*1);
v_string_2017_ = lean_ctor_get(v_x_1944_, 0);
v_isSharedCheck_2042_ = !lean_is_exclusive(v_x_1944_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2019_ = v_x_1944_;
v_isShared_2020_ = v_isSharedCheck_2042_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_string_2017_);
lean_dec(v_x_1944_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2042_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___y_2022_; lean_object* v___x_2038_; uint8_t v___x_2039_; 
v___x_2038_ = lean_unsigned_to_nat(1024u);
v___x_2039_ = lean_nat_dec_le(v___x_2038_, v_prec_1945_);
if (v___x_2039_ == 0)
{
lean_object* v___x_2040_; 
v___x_2040_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2022_ = v___x_2040_;
goto v___jp_2021_;
}
else
{
lean_object* v___x_2041_; 
v___x_2041_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2022_ = v___x_2041_;
goto v___jp_2021_;
}
v___jp_2021_:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; uint8_t v___x_2033_; lean_object* v___x_2035_; 
v___x_2023_ = lean_box(1);
v___x_2024_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__16));
v___x_2025_ = lean_unsigned_to_nat(1024u);
v___x_2026_ = l_Lean_Doc_instReprMathMode_repr(v_mode_2016_, v___x_2025_);
v___x_2027_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2024_);
lean_ctor_set(v___x_2027_, 1, v___x_2026_);
v___x_2028_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2028_, 0, v___x_2027_);
lean_ctor_set(v___x_2028_, 1, v___x_2023_);
v___x_2029_ = l_String_quote(v_string_2017_);
v___x_2030_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2030_, 0, v___x_2029_);
v___x_2031_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2031_, 0, v___x_2028_);
lean_ctor_set(v___x_2031_, 1, v___x_2030_);
lean_inc(v___y_2022_);
v___x_2032_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2032_, 0, v___y_2022_);
lean_ctor_set(v___x_2032_, 1, v___x_2031_);
v___x_2033_ = 0;
if (v_isShared_2020_ == 0)
{
lean_ctor_set_tag(v___x_2019_, 6);
lean_ctor_set(v___x_2019_, 0, v___x_2032_);
v___x_2035_ = v___x_2019_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v___x_2032_);
v___x_2035_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
lean_object* v___x_2036_; 
lean_ctor_set_uint8(v___x_2035_, sizeof(void*)*1, v___x_2033_);
v___x_2036_ = l_Repr_addAppParen(v___x_2035_, v_prec_1945_);
return v___x_2036_;
}
}
}
}
case 5:
{
lean_object* v_string_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2063_; 
v_string_2043_ = lean_ctor_get(v_x_1944_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v_x_1944_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2045_ = v_x_1944_;
v_isShared_2046_ = v_isSharedCheck_2063_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_string_2043_);
lean_dec(v_x_1944_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2063_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___y_2048_; lean_object* v___x_2059_; uint8_t v___x_2060_; 
v___x_2059_ = lean_unsigned_to_nat(1024u);
v___x_2060_ = lean_nat_dec_le(v___x_2059_, v_prec_1945_);
if (v___x_2060_ == 0)
{
lean_object* v___x_2061_; 
v___x_2061_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2048_ = v___x_2061_;
goto v___jp_2047_;
}
else
{
lean_object* v___x_2062_; 
v___x_2062_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2048_ = v___x_2062_;
goto v___jp_2047_;
}
v___jp_2047_:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2052_; 
v___x_2049_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__19));
v___x_2050_ = l_String_quote(v_string_2043_);
if (v_isShared_2046_ == 0)
{
lean_ctor_set_tag(v___x_2045_, 3);
lean_ctor_set(v___x_2045_, 0, v___x_2050_);
v___x_2052_ = v___x_2045_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v___x_2050_);
v___x_2052_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
lean_object* v___x_2053_; lean_object* v___x_2054_; uint8_t v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2053_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2053_, 0, v___x_2049_);
lean_ctor_set(v___x_2053_, 1, v___x_2052_);
lean_inc(v___y_2048_);
v___x_2054_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2054_, 0, v___y_2048_);
lean_ctor_set(v___x_2054_, 1, v___x_2053_);
v___x_2055_ = 0;
v___x_2056_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2056_, 0, v___x_2054_);
lean_ctor_set_uint8(v___x_2056_, sizeof(void*)*1, v___x_2055_);
v___x_2057_ = l_Repr_addAppParen(v___x_2056_, v_prec_1945_);
return v___x_2057_;
}
}
}
}
case 6:
{
lean_object* v_content_2064_; lean_object* v_url_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2089_; 
v_content_2064_ = lean_ctor_get(v_x_1944_, 0);
v_url_2065_ = lean_ctor_get(v_x_1944_, 1);
v_isSharedCheck_2089_ = !lean_is_exclusive(v_x_1944_);
if (v_isSharedCheck_2089_ == 0)
{
v___x_2067_ = v_x_1944_;
v_isShared_2068_ = v_isSharedCheck_2089_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_url_2065_);
lean_inc(v_content_2064_);
lean_dec(v_x_1944_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2089_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
lean_object* v___y_2070_; lean_object* v___x_2085_; uint8_t v___x_2086_; 
v___x_2085_ = lean_unsigned_to_nat(1024u);
v___x_2086_ = lean_nat_dec_le(v___x_2085_, v_prec_1945_);
if (v___x_2086_ == 0)
{
lean_object* v___x_2087_; 
v___x_2087_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2070_ = v___x_2087_;
goto v___jp_2069_;
}
else
{
lean_object* v___x_2088_; 
v___x_2088_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2070_ = v___x_2088_;
goto v___jp_2069_;
}
v___jp_2069_:
{
lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2075_; 
v___x_2071_ = lean_box(1);
v___x_2072_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__22));
v___x_2073_ = l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_content_2064_);
if (v_isShared_2068_ == 0)
{
lean_ctor_set_tag(v___x_2067_, 5);
lean_ctor_set(v___x_2067_, 1, v___x_2073_);
lean_ctor_set(v___x_2067_, 0, v___x_2072_);
v___x_2075_ = v___x_2067_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v___x_2072_);
lean_ctor_set(v_reuseFailAlloc_2084_, 1, v___x_2073_);
v___x_2075_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; uint8_t v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; 
v___x_2076_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2076_, 0, v___x_2075_);
lean_ctor_set(v___x_2076_, 1, v___x_2071_);
v___x_2077_ = l_String_quote(v_url_2065_);
v___x_2078_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2078_, 0, v___x_2077_);
v___x_2079_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2079_, 0, v___x_2076_);
lean_ctor_set(v___x_2079_, 1, v___x_2078_);
lean_inc(v___y_2070_);
v___x_2080_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2080_, 0, v___y_2070_);
lean_ctor_set(v___x_2080_, 1, v___x_2079_);
v___x_2081_ = 0;
v___x_2082_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2082_, 0, v___x_2080_);
lean_ctor_set_uint8(v___x_2082_, sizeof(void*)*1, v___x_2081_);
v___x_2083_ = l_Repr_addAppParen(v___x_2082_, v_prec_1945_);
return v___x_2083_;
}
}
}
}
case 7:
{
lean_object* v_name_2090_; lean_object* v_content_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2115_; 
v_name_2090_ = lean_ctor_get(v_x_1944_, 0);
v_content_2091_ = lean_ctor_get(v_x_1944_, 1);
v_isSharedCheck_2115_ = !lean_is_exclusive(v_x_1944_);
if (v_isSharedCheck_2115_ == 0)
{
v___x_2093_ = v_x_1944_;
v_isShared_2094_ = v_isSharedCheck_2115_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_content_2091_);
lean_inc(v_name_2090_);
lean_dec(v_x_1944_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2115_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___y_2096_; lean_object* v___x_2111_; uint8_t v___x_2112_; 
v___x_2111_ = lean_unsigned_to_nat(1024u);
v___x_2112_ = lean_nat_dec_le(v___x_2111_, v_prec_1945_);
if (v___x_2112_ == 0)
{
lean_object* v___x_2113_; 
v___x_2113_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2096_ = v___x_2113_;
goto v___jp_2095_;
}
else
{
lean_object* v___x_2114_; 
v___x_2114_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2096_ = v___x_2114_;
goto v___jp_2095_;
}
v___jp_2095_:
{
lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2102_; 
v___x_2097_ = lean_box(1);
v___x_2098_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__25));
v___x_2099_ = l_String_quote(v_name_2090_);
v___x_2100_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2099_);
if (v_isShared_2094_ == 0)
{
lean_ctor_set_tag(v___x_2093_, 5);
lean_ctor_set(v___x_2093_, 1, v___x_2100_);
lean_ctor_set(v___x_2093_, 0, v___x_2098_);
v___x_2102_ = v___x_2093_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v___x_2098_);
lean_ctor_set(v_reuseFailAlloc_2110_, 1, v___x_2100_);
v___x_2102_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; uint8_t v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
v___x_2103_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2102_);
lean_ctor_set(v___x_2103_, 1, v___x_2097_);
v___x_2104_ = l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_content_2091_);
v___x_2105_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2105_, 0, v___x_2103_);
lean_ctor_set(v___x_2105_, 1, v___x_2104_);
lean_inc(v___y_2096_);
v___x_2106_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2106_, 0, v___y_2096_);
lean_ctor_set(v___x_2106_, 1, v___x_2105_);
v___x_2107_ = 0;
v___x_2108_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2108_, 0, v___x_2106_);
lean_ctor_set_uint8(v___x_2108_, sizeof(void*)*1, v___x_2107_);
v___x_2109_ = l_Repr_addAppParen(v___x_2108_, v_prec_1945_);
return v___x_2109_;
}
}
}
}
case 8:
{
lean_object* v_alt_2116_; lean_object* v_url_2117_; lean_object* v___x_2119_; uint8_t v_isShared_2120_; uint8_t v_isSharedCheck_2142_; 
v_alt_2116_ = lean_ctor_get(v_x_1944_, 0);
v_url_2117_ = lean_ctor_get(v_x_1944_, 1);
v_isSharedCheck_2142_ = !lean_is_exclusive(v_x_1944_);
if (v_isSharedCheck_2142_ == 0)
{
v___x_2119_ = v_x_1944_;
v_isShared_2120_ = v_isSharedCheck_2142_;
goto v_resetjp_2118_;
}
else
{
lean_inc(v_url_2117_);
lean_inc(v_alt_2116_);
lean_dec(v_x_1944_);
v___x_2119_ = lean_box(0);
v_isShared_2120_ = v_isSharedCheck_2142_;
goto v_resetjp_2118_;
}
v_resetjp_2118_:
{
lean_object* v___y_2122_; lean_object* v___x_2138_; uint8_t v___x_2139_; 
v___x_2138_ = lean_unsigned_to_nat(1024u);
v___x_2139_ = lean_nat_dec_le(v___x_2138_, v_prec_1945_);
if (v___x_2139_ == 0)
{
lean_object* v___x_2140_; 
v___x_2140_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2122_ = v___x_2140_;
goto v___jp_2121_;
}
else
{
lean_object* v___x_2141_; 
v___x_2141_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2122_ = v___x_2141_;
goto v___jp_2121_;
}
v___jp_2121_:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2128_; 
v___x_2123_ = lean_box(1);
v___x_2124_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__28));
v___x_2125_ = l_String_quote(v_alt_2116_);
v___x_2126_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2126_, 0, v___x_2125_);
if (v_isShared_2120_ == 0)
{
lean_ctor_set_tag(v___x_2119_, 5);
lean_ctor_set(v___x_2119_, 1, v___x_2126_);
lean_ctor_set(v___x_2119_, 0, v___x_2124_);
v___x_2128_ = v___x_2119_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v___x_2124_);
lean_ctor_set(v_reuseFailAlloc_2137_, 1, v___x_2126_);
v___x_2128_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; uint8_t v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; 
v___x_2129_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2128_);
lean_ctor_set(v___x_2129_, 1, v___x_2123_);
v___x_2130_ = l_String_quote(v_url_2117_);
v___x_2131_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2130_);
v___x_2132_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2129_);
lean_ctor_set(v___x_2132_, 1, v___x_2131_);
lean_inc(v___y_2122_);
v___x_2133_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___y_2122_);
lean_ctor_set(v___x_2133_, 1, v___x_2132_);
v___x_2134_ = 0;
v___x_2135_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2135_, 0, v___x_2133_);
lean_ctor_set_uint8(v___x_2135_, sizeof(void*)*1, v___x_2134_);
v___x_2136_ = l_Repr_addAppParen(v___x_2135_, v_prec_1945_);
return v___x_2136_;
}
}
}
}
case 9:
{
lean_object* v_content_2143_; lean_object* v___y_2145_; lean_object* v___x_2153_; uint8_t v___x_2154_; 
v_content_2143_ = lean_ctor_get(v_x_1944_, 0);
lean_inc_ref(v_content_2143_);
lean_dec_ref_known(v_x_1944_, 1);
v___x_2153_ = lean_unsigned_to_nat(1024u);
v___x_2154_ = lean_nat_dec_le(v___x_2153_, v_prec_1945_);
if (v___x_2154_ == 0)
{
lean_object* v___x_2155_; 
v___x_2155_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2145_ = v___x_2155_;
goto v___jp_2144_;
}
else
{
lean_object* v___x_2156_; 
v___x_2156_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2145_ = v___x_2156_;
goto v___jp_2144_;
}
v___jp_2144_:
{
lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; uint8_t v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; 
v___x_2146_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__31));
v___x_2147_ = l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_content_2143_);
v___x_2148_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2148_, 0, v___x_2146_);
lean_ctor_set(v___x_2148_, 1, v___x_2147_);
lean_inc(v___y_2145_);
v___x_2149_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2149_, 0, v___y_2145_);
lean_ctor_set(v___x_2149_, 1, v___x_2148_);
v___x_2150_ = 0;
v___x_2151_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2151_, 0, v___x_2149_);
lean_ctor_set_uint8(v___x_2151_, sizeof(void*)*1, v___x_2150_);
v___x_2152_ = l_Repr_addAppParen(v___x_2151_, v_prec_1945_);
return v___x_2152_;
}
}
default: 
{
lean_object* v_container_2157_; lean_object* v_content_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2208_; 
v_container_2157_ = lean_ctor_get(v_x_1944_, 0);
v_content_2158_ = lean_ctor_get(v_x_1944_, 1);
v_isSharedCheck_2208_ = !lean_is_exclusive(v_x_1944_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2160_ = v_x_1944_;
v_isShared_2161_ = v_isSharedCheck_2208_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_content_2158_);
lean_inc(v_container_2157_);
lean_dec(v_x_1944_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2208_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v___y_2163_; lean_object* v___y_2164_; lean_object* v___y_2165_; lean_object* v___y_2166_; lean_object* v___y_2178_; lean_object* v___x_2204_; uint8_t v___x_2205_; 
v___x_2204_ = lean_unsigned_to_nat(1024u);
v___x_2205_ = lean_nat_dec_le(v___x_2204_, v_prec_1945_);
if (v___x_2205_ == 0)
{
lean_object* v___x_2206_; 
v___x_2206_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2178_ = v___x_2206_;
goto v___jp_2177_;
}
else
{
lean_object* v___x_2207_; 
v___x_2207_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2178_ = v___x_2207_;
goto v___jp_2177_;
}
v___jp_2162_:
{
lean_object* v___x_2168_; 
lean_inc(v___y_2165_);
if (v_isShared_2161_ == 0)
{
lean_ctor_set_tag(v___x_2160_, 5);
lean_ctor_set(v___x_2160_, 1, v___y_2166_);
lean_ctor_set(v___x_2160_, 0, v___y_2165_);
v___x_2168_ = v___x_2160_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v___y_2165_);
lean_ctor_set(v_reuseFailAlloc_2176_, 1, v___y_2166_);
v___x_2168_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2167_;
}
v_reusejp_2167_:
{
lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; uint8_t v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
lean_inc(v___y_2164_);
v___x_2169_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2169_, 0, v___x_2168_);
lean_ctor_set(v___x_2169_, 1, v___y_2164_);
v___x_2170_ = l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_content_2158_);
v___x_2171_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2171_, 0, v___x_2169_);
lean_ctor_set(v___x_2171_, 1, v___x_2170_);
lean_inc(v___y_2163_);
v___x_2172_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2172_, 0, v___y_2163_);
lean_ctor_set(v___x_2172_, 1, v___x_2171_);
v___x_2173_ = 0;
v___x_2174_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2174_, 0, v___x_2172_);
lean_ctor_set_uint8(v___x_2174_, sizeof(void*)*1, v___x_2173_);
v___x_2175_ = l_Repr_addAppParen(v___x_2174_, v_prec_1945_);
return v___x_2175_;
}
}
v___jp_2177_:
{
lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2179_ = lean_box(1);
v___x_2180_ = ((lean_object*)(l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__34));
if (lean_obj_tag(v_container_2157_) == 0)
{
lean_object* v_val_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; uint8_t v___x_2189_; lean_object* v___x_2190_; 
v_val_2181_ = lean_ctor_get(v_container_2157_, 0);
lean_inc(v_val_2181_);
lean_dec_ref_known(v_container_2157_, 1);
v___x_2182_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__5));
v___x_2183_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_2181_);
lean_dec(v_val_2181_);
v___x_2184_ = lean_unsigned_to_nat(0u);
v___x_2185_ = l_Lean_Name_reprPrec(v___x_2183_, v___x_2184_);
v___x_2186_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2186_, 0, v___x_2182_);
lean_ctor_set(v___x_2186_, 1, v___x_2185_);
v___x_2187_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__7));
v___x_2188_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2188_, 0, v___x_2186_);
lean_ctor_set(v___x_2188_, 1, v___x_2187_);
v___x_2189_ = 0;
v___x_2190_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2190_, 0, v___x_2188_);
lean_ctor_set_uint8(v___x_2190_, sizeof(void*)*1, v___x_2189_);
v___y_2163_ = v___y_2178_;
v___y_2164_ = v___x_2179_;
v___y_2165_ = v___x_2180_;
v___y_2166_ = v___x_2190_;
goto v___jp_2162_;
}
else
{
lean_object* v_index_2191_; lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2203_; 
v_index_2191_ = lean_ctor_get(v_container_2157_, 0);
v_isSharedCheck_2203_ = !lean_is_exclusive(v_container_2157_);
if (v_isSharedCheck_2203_ == 0)
{
v___x_2193_ = v_container_2157_;
v_isShared_2194_ = v_isSharedCheck_2203_;
goto v_resetjp_2192_;
}
else
{
lean_inc(v_index_2191_);
lean_dec(v_container_2157_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2203_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2198_; 
v___x_2195_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__10));
v___x_2196_ = l_Nat_reprFast(v_index_2191_);
if (v_isShared_2194_ == 0)
{
lean_ctor_set_tag(v___x_2193_, 3);
lean_ctor_set(v___x_2193_, 0, v___x_2196_);
v___x_2198_ = v___x_2193_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v___x_2196_);
v___x_2198_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
lean_object* v___x_2199_; uint8_t v___x_2200_; lean_object* v___x_2201_; 
v___x_2199_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2199_, 0, v___x_2195_);
lean_ctor_set(v___x_2199_, 1, v___x_2198_);
v___x_2200_ = 0;
v___x_2201_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2201_, 0, v___x_2199_);
lean_ctor_set_uint8(v___x_2201_, sizeof(void*)*1, v___x_2200_);
v___y_2163_ = v___y_2178_;
v___y_2164_ = v___x_2179_;
v___y_2165_ = v___x_2180_;
v___y_2166_ = v___x_2201_;
goto v___jp_2162_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5___lam__0(lean_object* v___y_2209_){
_start:
{
lean_object* v___x_2210_; lean_object* v___x_2211_; 
v___x_2210_ = lean_unsigned_to_nat(0u);
v___x_2211_ = l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4(v___y_2209_, v___x_2210_);
return v___x_2211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_x_2212_, lean_object* v_prec_2213_){
_start:
{
lean_object* v_res_2214_; 
v_res_2214_ = l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4(v_x_2212_, v_prec_2213_);
lean_dec(v_prec_2213_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2(lean_object* v_xs_2215_){
_start:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; uint8_t v___x_2218_; 
v___x_2216_ = lean_array_get_size(v_xs_2215_);
v___x_2217_ = lean_unsigned_to_nat(0u);
v___x_2218_ = lean_nat_dec_eq(v___x_2216_, v___x_2217_);
if (v___x_2218_ == 0)
{
lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2219_ = lean_array_to_list(v_xs_2215_);
v___x_2220_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_2221_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__5(v___x_2219_, v___x_2220_);
v___x_2222_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6);
v___x_2223_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_2224_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2224_, 0, v___x_2223_);
lean_ctor_set(v___x_2224_, 1, v___x_2221_);
v___x_2225_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8));
v___x_2226_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2224_);
lean_ctor_set(v___x_2226_, 1, v___x_2225_);
v___x_2227_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2222_);
lean_ctor_set(v___x_2227_, 1, v___x_2226_);
v___x_2228_ = l_Std_Format_fill(v___x_2227_);
return v___x_2228_;
}
else
{
lean_object* v___x_2229_; 
lean_dec_ref(v_xs_2215_);
v___x_2229_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10));
return v___x_2229_;
}
}
}
static lean_object* _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7(void){
_start:
{
lean_object* v___x_2260_; lean_object* v___x_2261_; 
v___x_2260_ = lean_unsigned_to_nat(12u);
v___x_2261_ = lean_nat_to_int(v___x_2260_);
return v___x_2261_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1_spec__7_spec__15(lean_object* v_x_2262_, lean_object* v_x_2263_, lean_object* v_x_2264_){
_start:
{
if (lean_obj_tag(v_x_2264_) == 0)
{
lean_dec(v_x_2262_);
return v_x_2263_;
}
else
{
lean_object* v_head_2265_; lean_object* v_tail_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2277_; 
v_head_2265_ = lean_ctor_get(v_x_2264_, 0);
v_tail_2266_ = lean_ctor_get(v_x_2264_, 1);
v_isSharedCheck_2277_ = !lean_is_exclusive(v_x_2264_);
if (v_isSharedCheck_2277_ == 0)
{
v___x_2268_ = v_x_2264_;
v_isShared_2269_ = v_isSharedCheck_2277_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_tail_2266_);
lean_inc(v_head_2265_);
lean_dec(v_x_2264_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2277_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___x_2271_; 
lean_inc(v_x_2262_);
if (v_isShared_2269_ == 0)
{
lean_ctor_set_tag(v___x_2268_, 5);
lean_ctor_set(v___x_2268_, 1, v_x_2262_);
lean_ctor_set(v___x_2268_, 0, v_x_2263_);
v___x_2271_ = v___x_2268_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2276_; 
v_reuseFailAlloc_2276_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2276_, 0, v_x_2263_);
lean_ctor_set(v_reuseFailAlloc_2276_, 1, v_x_2262_);
v___x_2271_ = v_reuseFailAlloc_2276_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; 
v___x_2272_ = lean_unsigned_to_nat(0u);
v___x_2273_ = l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0(v_head_2265_, v___x_2272_);
v___x_2274_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2274_, 0, v___x_2271_);
lean_ctor_set(v___x_2274_, 1, v___x_2273_);
v_x_2263_ = v___x_2274_;
v_x_2264_ = v_tail_2266_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1_spec__7(lean_object* v_x_2278_, lean_object* v_x_2279_, lean_object* v_x_2280_){
_start:
{
if (lean_obj_tag(v_x_2280_) == 0)
{
lean_dec(v_x_2278_);
return v_x_2279_;
}
else
{
lean_object* v_head_2281_; lean_object* v_tail_2282_; lean_object* v___x_2284_; uint8_t v_isShared_2285_; uint8_t v_isSharedCheck_2293_; 
v_head_2281_ = lean_ctor_get(v_x_2280_, 0);
v_tail_2282_ = lean_ctor_get(v_x_2280_, 1);
v_isSharedCheck_2293_ = !lean_is_exclusive(v_x_2280_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2284_ = v_x_2280_;
v_isShared_2285_ = v_isSharedCheck_2293_;
goto v_resetjp_2283_;
}
else
{
lean_inc(v_tail_2282_);
lean_inc(v_head_2281_);
lean_dec(v_x_2280_);
v___x_2284_ = lean_box(0);
v_isShared_2285_ = v_isSharedCheck_2293_;
goto v_resetjp_2283_;
}
v_resetjp_2283_:
{
lean_object* v___x_2287_; 
lean_inc(v_x_2278_);
if (v_isShared_2285_ == 0)
{
lean_ctor_set_tag(v___x_2284_, 5);
lean_ctor_set(v___x_2284_, 1, v_x_2278_);
lean_ctor_set(v___x_2284_, 0, v_x_2279_);
v___x_2287_ = v___x_2284_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_x_2279_);
lean_ctor_set(v_reuseFailAlloc_2292_, 1, v_x_2278_);
v___x_2287_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; 
v___x_2288_ = lean_unsigned_to_nat(0u);
v___x_2289_ = l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0(v_head_2281_, v___x_2288_);
v___x_2290_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2290_, 0, v___x_2287_);
lean_ctor_set(v___x_2290_, 1, v___x_2289_);
v___x_2291_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1_spec__7_spec__15(v_x_2278_, v___x_2290_, v_tail_2282_);
return v___x_2291_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1(lean_object* v_x_2294_, lean_object* v_x_2295_){
_start:
{
if (lean_obj_tag(v_x_2294_) == 0)
{
lean_object* v___x_2296_; 
lean_dec(v_x_2295_);
v___x_2296_ = lean_box(0);
return v___x_2296_;
}
else
{
lean_object* v_tail_2297_; 
v_tail_2297_ = lean_ctor_get(v_x_2294_, 1);
if (lean_obj_tag(v_tail_2297_) == 0)
{
lean_object* v_head_2298_; lean_object* v___x_2299_; 
lean_dec(v_x_2295_);
v_head_2298_ = lean_ctor_get(v_x_2294_, 0);
lean_inc(v_head_2298_);
lean_dec_ref_known(v_x_2294_, 2);
v___x_2299_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1___lam__0(v_head_2298_);
return v___x_2299_;
}
else
{
lean_object* v_head_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; 
lean_inc(v_tail_2297_);
v_head_2300_ = lean_ctor_get(v_x_2294_, 0);
lean_inc(v_head_2300_);
lean_dec_ref_known(v_x_2294_, 2);
v___x_2301_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1___lam__0(v_head_2300_);
v___x_2302_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1_spec__7(v_x_2295_, v___x_2301_, v_tail_2297_);
return v___x_2302_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(lean_object* v_xs_2303_){
_start:
{
lean_object* v___x_2304_; lean_object* v___x_2305_; uint8_t v___x_2306_; 
v___x_2304_ = lean_array_get_size(v_xs_2303_);
v___x_2305_ = lean_unsigned_to_nat(0u);
v___x_2306_ = lean_nat_dec_eq(v___x_2304_, v___x_2305_);
if (v___x_2306_ == 0)
{
lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2307_ = lean_array_to_list(v_xs_2303_);
v___x_2308_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_2309_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1(v___x_2307_, v___x_2308_);
v___x_2310_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6);
v___x_2311_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_2312_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2311_);
lean_ctor_set(v___x_2312_, 1, v___x_2309_);
v___x_2313_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8));
v___x_2314_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2312_);
lean_ctor_set(v___x_2314_, 1, v___x_2313_);
v___x_2315_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2315_, 0, v___x_2310_);
lean_ctor_set(v___x_2315_, 1, v___x_2314_);
v___x_2316_ = l_Std_Format_fill(v___x_2315_);
return v___x_2316_;
}
else
{
lean_object* v___x_2317_; 
lean_dec_ref(v_xs_2303_);
v___x_2317_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10));
return v___x_2317_;
}
}
}
static lean_object* _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__9(void){
_start:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2319_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__0));
v___x_2320_ = lean_string_length(v___x_2319_);
return v___x_2320_;
}
}
static lean_object* _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10(void){
_start:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2321_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__9, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__9_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__9);
v___x_2322_ = lean_nat_to_int(v___x_2321_);
return v___x_2322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(lean_object* v_x_2328_){
_start:
{
lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; uint8_t v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; 
v___x_2329_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__6));
v___x_2330_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7);
v___x_2331_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(v_x_2328_);
v___x_2332_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2332_, 0, v___x_2330_);
lean_ctor_set(v___x_2332_, 1, v___x_2331_);
v___x_2333_ = 0;
v___x_2334_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2334_, 0, v___x_2332_);
lean_ctor_set_uint8(v___x_2334_, sizeof(void*)*1, v___x_2333_);
v___x_2335_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2329_);
lean_ctor_set(v___x_2335_, 1, v___x_2334_);
v___x_2336_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10);
v___x_2337_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11));
v___x_2338_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2337_);
lean_ctor_set(v___x_2338_, 1, v___x_2335_);
v___x_2339_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12));
v___x_2340_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2340_, 0, v___x_2338_);
lean_ctor_set(v___x_2340_, 1, v___x_2339_);
v___x_2341_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2341_, 0, v___x_2336_);
lean_ctor_set(v___x_2341_, 1, v___x_2340_);
v___x_2342_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2342_, 0, v___x_2341_);
lean_ctor_set_uint8(v___x_2342_, sizeof(void*)*1, v___x_2333_);
return v___x_2342_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8_spec__14_spec__22(lean_object* v_x_2343_, lean_object* v_x_2344_, lean_object* v_x_2345_){
_start:
{
if (lean_obj_tag(v_x_2345_) == 0)
{
lean_dec(v_x_2343_);
return v_x_2344_;
}
else
{
lean_object* v_head_2346_; lean_object* v_tail_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2357_; 
v_head_2346_ = lean_ctor_get(v_x_2345_, 0);
v_tail_2347_ = lean_ctor_get(v_x_2345_, 1);
v_isSharedCheck_2357_ = !lean_is_exclusive(v_x_2345_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2349_ = v_x_2345_;
v_isShared_2350_ = v_isSharedCheck_2357_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_tail_2347_);
lean_inc(v_head_2346_);
lean_dec(v_x_2345_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2357_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2352_; 
lean_inc(v_x_2343_);
if (v_isShared_2350_ == 0)
{
lean_ctor_set_tag(v___x_2349_, 5);
lean_ctor_set(v___x_2349_, 1, v_x_2343_);
lean_ctor_set(v___x_2349_, 0, v_x_2344_);
v___x_2352_ = v___x_2349_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_x_2344_);
lean_ctor_set(v_reuseFailAlloc_2356_, 1, v_x_2343_);
v___x_2352_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
lean_object* v___x_2353_; lean_object* v___x_2354_; 
v___x_2353_ = l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(v_head_2346_);
v___x_2354_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2354_, 0, v___x_2352_);
lean_ctor_set(v___x_2354_, 1, v___x_2353_);
v_x_2344_ = v___x_2354_;
v_x_2345_ = v_tail_2347_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8_spec__14(lean_object* v_x_2358_, lean_object* v_x_2359_, lean_object* v_x_2360_){
_start:
{
if (lean_obj_tag(v_x_2360_) == 0)
{
lean_dec(v_x_2358_);
return v_x_2359_;
}
else
{
lean_object* v_head_2361_; lean_object* v_tail_2362_; lean_object* v___x_2364_; uint8_t v_isShared_2365_; uint8_t v_isSharedCheck_2372_; 
v_head_2361_ = lean_ctor_get(v_x_2360_, 0);
v_tail_2362_ = lean_ctor_get(v_x_2360_, 1);
v_isSharedCheck_2372_ = !lean_is_exclusive(v_x_2360_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2364_ = v_x_2360_;
v_isShared_2365_ = v_isSharedCheck_2372_;
goto v_resetjp_2363_;
}
else
{
lean_inc(v_tail_2362_);
lean_inc(v_head_2361_);
lean_dec(v_x_2360_);
v___x_2364_ = lean_box(0);
v_isShared_2365_ = v_isSharedCheck_2372_;
goto v_resetjp_2363_;
}
v_resetjp_2363_:
{
lean_object* v___x_2367_; 
lean_inc(v_x_2358_);
if (v_isShared_2365_ == 0)
{
lean_ctor_set_tag(v___x_2364_, 5);
lean_ctor_set(v___x_2364_, 1, v_x_2358_);
lean_ctor_set(v___x_2364_, 0, v_x_2359_);
v___x_2367_ = v___x_2364_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_x_2359_);
lean_ctor_set(v_reuseFailAlloc_2371_, 1, v_x_2358_);
v___x_2367_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; 
v___x_2368_ = l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(v_head_2361_);
v___x_2369_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2369_, 0, v___x_2367_);
lean_ctor_set(v___x_2369_, 1, v___x_2368_);
v___x_2370_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8_spec__14_spec__22(v_x_2358_, v___x_2369_, v_tail_2362_);
return v___x_2370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8(lean_object* v_x_2373_, lean_object* v_x_2374_){
_start:
{
if (lean_obj_tag(v_x_2373_) == 0)
{
lean_object* v___x_2375_; 
lean_dec(v_x_2374_);
v___x_2375_ = lean_box(0);
return v___x_2375_;
}
else
{
lean_object* v_tail_2376_; 
v_tail_2376_ = lean_ctor_get(v_x_2373_, 1);
if (lean_obj_tag(v_tail_2376_) == 0)
{
lean_object* v_head_2377_; lean_object* v___x_2378_; 
lean_dec(v_x_2374_);
v_head_2377_ = lean_ctor_get(v_x_2373_, 0);
lean_inc(v_head_2377_);
lean_dec_ref_known(v_x_2373_, 2);
v___x_2378_ = l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(v_head_2377_);
return v___x_2378_;
}
else
{
lean_object* v_head_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; 
lean_inc(v_tail_2376_);
v_head_2379_ = lean_ctor_get(v_x_2373_, 0);
lean_inc(v_head_2379_);
lean_dec_ref_known(v_x_2373_, 2);
v___x_2380_ = l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(v_head_2379_);
v___x_2381_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8_spec__14(v_x_2374_, v___x_2380_, v_tail_2376_);
return v___x_2381_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3(lean_object* v_xs_2382_){
_start:
{
lean_object* v___x_2383_; lean_object* v___x_2384_; uint8_t v___x_2385_; 
v___x_2383_ = lean_array_get_size(v_xs_2382_);
v___x_2384_ = lean_unsigned_to_nat(0u);
v___x_2385_ = lean_nat_dec_eq(v___x_2383_, v___x_2384_);
if (v___x_2385_ == 0)
{
lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2386_ = lean_array_to_list(v_xs_2382_);
v___x_2387_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_2388_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__8(v___x_2386_, v___x_2387_);
v___x_2389_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6);
v___x_2390_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_2391_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2391_, 0, v___x_2390_);
lean_ctor_set(v___x_2391_, 1, v___x_2388_);
v___x_2392_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8));
v___x_2393_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2393_, 0, v___x_2391_);
lean_ctor_set(v___x_2393_, 1, v___x_2392_);
v___x_2394_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2394_, 0, v___x_2389_);
lean_ctor_set(v___x_2394_, 1, v___x_2393_);
v___x_2395_ = l_Std_Format_fill(v___x_2394_);
return v___x_2395_;
}
else
{
lean_object* v___x_2396_; 
lean_dec_ref(v_xs_2382_);
v___x_2396_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10));
return v___x_2396_;
}
}
}
static lean_object* _init_l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__12(void){
_start:
{
lean_object* v___x_2403_; lean_object* v___x_2404_; 
v___x_2403_ = lean_unsigned_to_nat(0u);
v___x_2404_ = lean_nat_to_int(v___x_2403_);
return v___x_2404_;
}
}
static lean_object* _init_l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4(void){
_start:
{
lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2420_ = lean_unsigned_to_nat(8u);
v___x_2421_ = lean_nat_to_int(v___x_2420_);
return v___x_2421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(lean_object* v_x_2425_){
_start:
{
lean_object* v_term_2426_; lean_object* v_desc_2427_; lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2459_; 
v_term_2426_ = lean_ctor_get(v_x_2425_, 0);
v_desc_2427_ = lean_ctor_get(v_x_2425_, 1);
v_isSharedCheck_2459_ = !lean_is_exclusive(v_x_2425_);
if (v_isSharedCheck_2459_ == 0)
{
v___x_2429_ = v_x_2425_;
v_isShared_2430_ = v_isSharedCheck_2459_;
goto v_resetjp_2428_;
}
else
{
lean_inc(v_desc_2427_);
lean_inc(v_term_2426_);
lean_dec(v_x_2425_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2459_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2436_; 
v___x_2431_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5));
v___x_2432_ = ((lean_object*)(l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__3));
v___x_2433_ = lean_obj_once(&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4, &l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4_once, _init_l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4);
v___x_2434_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2(v_term_2426_);
if (v_isShared_2430_ == 0)
{
lean_ctor_set_tag(v___x_2429_, 4);
lean_ctor_set(v___x_2429_, 1, v___x_2434_);
lean_ctor_set(v___x_2429_, 0, v___x_2433_);
v___x_2436_ = v___x_2429_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v___x_2433_);
lean_ctor_set(v_reuseFailAlloc_2458_, 1, v___x_2434_);
v___x_2436_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
uint8_t v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; 
v___x_2437_ = 0;
v___x_2438_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2438_, 0, v___x_2436_);
lean_ctor_set_uint8(v___x_2438_, sizeof(void*)*1, v___x_2437_);
v___x_2439_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2439_, 0, v___x_2432_);
lean_ctor_set(v___x_2439_, 1, v___x_2438_);
v___x_2440_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2));
v___x_2441_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2441_, 0, v___x_2439_);
lean_ctor_set(v___x_2441_, 1, v___x_2440_);
v___x_2442_ = lean_box(1);
v___x_2443_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2443_, 0, v___x_2441_);
lean_ctor_set(v___x_2443_, 1, v___x_2442_);
v___x_2444_ = ((lean_object*)(l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__6));
v___x_2445_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2443_);
lean_ctor_set(v___x_2445_, 1, v___x_2444_);
v___x_2446_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2446_, 0, v___x_2445_);
lean_ctor_set(v___x_2446_, 1, v___x_2431_);
v___x_2447_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(v_desc_2427_);
v___x_2448_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2433_);
lean_ctor_set(v___x_2448_, 1, v___x_2447_);
v___x_2449_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2449_, 0, v___x_2448_);
lean_ctor_set_uint8(v___x_2449_, sizeof(void*)*1, v___x_2437_);
v___x_2450_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2450_, 0, v___x_2446_);
lean_ctor_set(v___x_2450_, 1, v___x_2449_);
v___x_2451_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10);
v___x_2452_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11));
v___x_2453_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2453_, 0, v___x_2452_);
lean_ctor_set(v___x_2453_, 1, v___x_2450_);
v___x_2454_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12));
v___x_2455_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2455_, 0, v___x_2453_);
lean_ctor_set(v___x_2455_, 1, v___x_2454_);
v___x_2456_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2456_, 0, v___x_2451_);
lean_ctor_set(v___x_2456_, 1, v___x_2455_);
v___x_2457_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2457_, 0, v___x_2456_);
lean_ctor_set_uint8(v___x_2457_, sizeof(void*)*1, v___x_2437_);
return v___x_2457_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11_spec__18_spec__26(lean_object* v_x_2460_, lean_object* v_x_2461_, lean_object* v_x_2462_){
_start:
{
if (lean_obj_tag(v_x_2462_) == 0)
{
lean_dec(v_x_2460_);
return v_x_2461_;
}
else
{
lean_object* v_head_2463_; lean_object* v_tail_2464_; lean_object* v___x_2466_; uint8_t v_isShared_2467_; uint8_t v_isSharedCheck_2474_; 
v_head_2463_ = lean_ctor_get(v_x_2462_, 0);
v_tail_2464_ = lean_ctor_get(v_x_2462_, 1);
v_isSharedCheck_2474_ = !lean_is_exclusive(v_x_2462_);
if (v_isSharedCheck_2474_ == 0)
{
v___x_2466_ = v_x_2462_;
v_isShared_2467_ = v_isSharedCheck_2474_;
goto v_resetjp_2465_;
}
else
{
lean_inc(v_tail_2464_);
lean_inc(v_head_2463_);
lean_dec(v_x_2462_);
v___x_2466_ = lean_box(0);
v_isShared_2467_ = v_isSharedCheck_2474_;
goto v_resetjp_2465_;
}
v_resetjp_2465_:
{
lean_object* v___x_2469_; 
lean_inc(v_x_2460_);
if (v_isShared_2467_ == 0)
{
lean_ctor_set_tag(v___x_2466_, 5);
lean_ctor_set(v___x_2466_, 1, v_x_2460_);
lean_ctor_set(v___x_2466_, 0, v_x_2461_);
v___x_2469_ = v___x_2466_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v_x_2461_);
lean_ctor_set(v_reuseFailAlloc_2473_, 1, v_x_2460_);
v___x_2469_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2470_ = l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(v_head_2463_);
v___x_2471_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2471_, 0, v___x_2469_);
lean_ctor_set(v___x_2471_, 1, v___x_2470_);
v_x_2461_ = v___x_2471_;
v_x_2462_ = v_tail_2464_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11_spec__18(lean_object* v_x_2475_, lean_object* v_x_2476_, lean_object* v_x_2477_){
_start:
{
if (lean_obj_tag(v_x_2477_) == 0)
{
lean_dec(v_x_2475_);
return v_x_2476_;
}
else
{
lean_object* v_head_2478_; lean_object* v_tail_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2489_; 
v_head_2478_ = lean_ctor_get(v_x_2477_, 0);
v_tail_2479_ = lean_ctor_get(v_x_2477_, 1);
v_isSharedCheck_2489_ = !lean_is_exclusive(v_x_2477_);
if (v_isSharedCheck_2489_ == 0)
{
v___x_2481_ = v_x_2477_;
v_isShared_2482_ = v_isSharedCheck_2489_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_tail_2479_);
lean_inc(v_head_2478_);
lean_dec(v_x_2477_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2489_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2484_; 
lean_inc(v_x_2475_);
if (v_isShared_2482_ == 0)
{
lean_ctor_set_tag(v___x_2481_, 5);
lean_ctor_set(v___x_2481_, 1, v_x_2475_);
lean_ctor_set(v___x_2481_, 0, v_x_2476_);
v___x_2484_ = v___x_2481_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2488_; 
v_reuseFailAlloc_2488_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2488_, 0, v_x_2476_);
lean_ctor_set(v_reuseFailAlloc_2488_, 1, v_x_2475_);
v___x_2484_ = v_reuseFailAlloc_2488_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
v___x_2485_ = l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(v_head_2478_);
v___x_2486_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2486_, 0, v___x_2484_);
lean_ctor_set(v___x_2486_, 1, v___x_2485_);
v___x_2487_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11_spec__18_spec__26(v_x_2475_, v___x_2486_, v_tail_2479_);
return v___x_2487_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11(lean_object* v_x_2490_, lean_object* v_x_2491_){
_start:
{
if (lean_obj_tag(v_x_2490_) == 0)
{
lean_object* v___x_2492_; 
lean_dec(v_x_2491_);
v___x_2492_ = lean_box(0);
return v___x_2492_;
}
else
{
lean_object* v_tail_2493_; 
v_tail_2493_ = lean_ctor_get(v_x_2490_, 1);
if (lean_obj_tag(v_tail_2493_) == 0)
{
lean_object* v_head_2494_; lean_object* v___x_2495_; 
lean_dec(v_x_2491_);
v_head_2494_ = lean_ctor_get(v_x_2490_, 0);
lean_inc(v_head_2494_);
lean_dec_ref_known(v_x_2490_, 2);
v___x_2495_ = l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(v_head_2494_);
return v___x_2495_;
}
else
{
lean_object* v_head_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; 
lean_inc(v_tail_2493_);
v_head_2496_ = lean_ctor_get(v_x_2490_, 0);
lean_inc(v_head_2496_);
lean_dec_ref_known(v_x_2490_, 2);
v___x_2497_ = l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(v_head_2496_);
v___x_2498_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11_spec__18(v_x_2491_, v___x_2497_, v_tail_2493_);
return v___x_2498_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4(lean_object* v_xs_2499_){
_start:
{
lean_object* v___x_2500_; lean_object* v___x_2501_; uint8_t v___x_2502_; 
v___x_2500_ = lean_array_get_size(v_xs_2499_);
v___x_2501_ = lean_unsigned_to_nat(0u);
v___x_2502_ = lean_nat_dec_eq(v___x_2500_, v___x_2501_);
if (v___x_2502_ == 0)
{
lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; 
v___x_2503_ = lean_array_to_list(v_xs_2499_);
v___x_2504_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_2505_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__11(v___x_2503_, v___x_2504_);
v___x_2506_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6);
v___x_2507_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_2508_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2508_, 0, v___x_2507_);
lean_ctor_set(v___x_2508_, 1, v___x_2505_);
v___x_2509_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8));
v___x_2510_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2510_, 0, v___x_2508_);
lean_ctor_set(v___x_2510_, 1, v___x_2509_);
v___x_2511_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2511_, 0, v___x_2506_);
lean_ctor_set(v___x_2511_, 1, v___x_2510_);
v___x_2512_ = l_Std_Format_fill(v___x_2511_);
return v___x_2512_;
}
else
{
lean_object* v___x_2513_; 
lean_dec_ref(v_xs_2499_);
v___x_2513_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10));
return v___x_2513_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0(lean_object* v_x_2532_, lean_object* v_prec_2533_){
_start:
{
switch(lean_obj_tag(v_x_2532_))
{
case 0:
{
lean_object* v_contents_2534_; lean_object* v___y_2536_; lean_object* v___x_2544_; uint8_t v___x_2545_; 
v_contents_2534_ = lean_ctor_get(v_x_2532_, 0);
lean_inc_ref(v_contents_2534_);
lean_dec_ref_known(v_x_2532_, 1);
v___x_2544_ = lean_unsigned_to_nat(1024u);
v___x_2545_ = lean_nat_dec_le(v___x_2544_, v_prec_2533_);
if (v___x_2545_ == 0)
{
lean_object* v___x_2546_; 
v___x_2546_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2536_ = v___x_2546_;
goto v___jp_2535_;
}
else
{
lean_object* v___x_2547_; 
v___x_2547_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2536_ = v___x_2547_;
goto v___jp_2535_;
}
v___jp_2535_:
{
lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; uint8_t v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2537_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__2));
v___x_2538_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2(v_contents_2534_);
v___x_2539_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2539_, 0, v___x_2537_);
lean_ctor_set(v___x_2539_, 1, v___x_2538_);
lean_inc(v___y_2536_);
v___x_2540_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2540_, 0, v___y_2536_);
lean_ctor_set(v___x_2540_, 1, v___x_2539_);
v___x_2541_ = 0;
v___x_2542_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2542_, 0, v___x_2540_);
lean_ctor_set_uint8(v___x_2542_, sizeof(void*)*1, v___x_2541_);
v___x_2543_ = l_Repr_addAppParen(v___x_2542_, v_prec_2533_);
return v___x_2543_;
}
}
case 1:
{
lean_object* v_content_2548_; lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2568_; 
v_content_2548_ = lean_ctor_get(v_x_2532_, 0);
v_isSharedCheck_2568_ = !lean_is_exclusive(v_x_2532_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2550_ = v_x_2532_;
v_isShared_2551_ = v_isSharedCheck_2568_;
goto v_resetjp_2549_;
}
else
{
lean_inc(v_content_2548_);
lean_dec(v_x_2532_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2568_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
lean_object* v___y_2553_; lean_object* v___x_2564_; uint8_t v___x_2565_; 
v___x_2564_ = lean_unsigned_to_nat(1024u);
v___x_2565_ = lean_nat_dec_le(v___x_2564_, v_prec_2533_);
if (v___x_2565_ == 0)
{
lean_object* v___x_2566_; 
v___x_2566_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2553_ = v___x_2566_;
goto v___jp_2552_;
}
else
{
lean_object* v___x_2567_; 
v___x_2567_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2553_ = v___x_2567_;
goto v___jp_2552_;
}
v___jp_2552_:
{
lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2557_; 
v___x_2554_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__5));
v___x_2555_ = l_String_quote(v_content_2548_);
if (v_isShared_2551_ == 0)
{
lean_ctor_set_tag(v___x_2550_, 3);
lean_ctor_set(v___x_2550_, 0, v___x_2555_);
v___x_2557_ = v___x_2550_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2563_; 
v_reuseFailAlloc_2563_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2563_, 0, v___x_2555_);
v___x_2557_ = v_reuseFailAlloc_2563_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; uint8_t v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; 
v___x_2558_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2554_);
lean_ctor_set(v___x_2558_, 1, v___x_2557_);
lean_inc(v___y_2553_);
v___x_2559_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2559_, 0, v___y_2553_);
lean_ctor_set(v___x_2559_, 1, v___x_2558_);
v___x_2560_ = 0;
v___x_2561_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2561_, 0, v___x_2559_);
lean_ctor_set_uint8(v___x_2561_, sizeof(void*)*1, v___x_2560_);
v___x_2562_ = l_Repr_addAppParen(v___x_2561_, v_prec_2533_);
return v___x_2562_;
}
}
}
}
case 2:
{
lean_object* v_items_2569_; lean_object* v___y_2571_; lean_object* v___x_2579_; uint8_t v___x_2580_; 
v_items_2569_ = lean_ctor_get(v_x_2532_, 0);
lean_inc_ref(v_items_2569_);
lean_dec_ref_known(v_x_2532_, 1);
v___x_2579_ = lean_unsigned_to_nat(1024u);
v___x_2580_ = lean_nat_dec_le(v___x_2579_, v_prec_2533_);
if (v___x_2580_ == 0)
{
lean_object* v___x_2581_; 
v___x_2581_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2571_ = v___x_2581_;
goto v___jp_2570_;
}
else
{
lean_object* v___x_2582_; 
v___x_2582_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2571_ = v___x_2582_;
goto v___jp_2570_;
}
v___jp_2570_:
{
lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; uint8_t v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; 
v___x_2572_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__8));
v___x_2573_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3(v_items_2569_);
v___x_2574_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2574_, 0, v___x_2572_);
lean_ctor_set(v___x_2574_, 1, v___x_2573_);
lean_inc(v___y_2571_);
v___x_2575_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2575_, 0, v___y_2571_);
lean_ctor_set(v___x_2575_, 1, v___x_2574_);
v___x_2576_ = 0;
v___x_2577_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2577_, 0, v___x_2575_);
lean_ctor_set_uint8(v___x_2577_, sizeof(void*)*1, v___x_2576_);
v___x_2578_ = l_Repr_addAppParen(v___x_2577_, v_prec_2533_);
return v___x_2578_;
}
}
case 3:
{
lean_object* v_start_2583_; lean_object* v_items_2584_; lean_object* v___x_2586_; uint8_t v_isShared_2587_; uint8_t v_isSharedCheck_2619_; 
v_start_2583_ = lean_ctor_get(v_x_2532_, 0);
v_items_2584_ = lean_ctor_get(v_x_2532_, 1);
v_isSharedCheck_2619_ = !lean_is_exclusive(v_x_2532_);
if (v_isSharedCheck_2619_ == 0)
{
v___x_2586_ = v_x_2532_;
v_isShared_2587_ = v_isSharedCheck_2619_;
goto v_resetjp_2585_;
}
else
{
lean_inc(v_items_2584_);
lean_inc(v_start_2583_);
lean_dec(v_x_2532_);
v___x_2586_ = lean_box(0);
v_isShared_2587_ = v_isSharedCheck_2619_;
goto v_resetjp_2585_;
}
v_resetjp_2585_:
{
lean_object* v___y_2589_; lean_object* v___y_2590_; lean_object* v___y_2591_; lean_object* v___y_2592_; lean_object* v___y_2604_; lean_object* v___x_2615_; uint8_t v___x_2616_; 
v___x_2615_ = lean_unsigned_to_nat(1024u);
v___x_2616_ = lean_nat_dec_le(v___x_2615_, v_prec_2533_);
if (v___x_2616_ == 0)
{
lean_object* v___x_2617_; 
v___x_2617_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2604_ = v___x_2617_;
goto v___jp_2603_;
}
else
{
lean_object* v___x_2618_; 
v___x_2618_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2604_ = v___x_2618_;
goto v___jp_2603_;
}
v___jp_2588_:
{
lean_object* v___x_2594_; 
lean_inc(v___y_2590_);
if (v_isShared_2587_ == 0)
{
lean_ctor_set_tag(v___x_2586_, 5);
lean_ctor_set(v___x_2586_, 1, v___y_2592_);
lean_ctor_set(v___x_2586_, 0, v___y_2590_);
v___x_2594_ = v___x_2586_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v___y_2590_);
lean_ctor_set(v_reuseFailAlloc_2602_, 1, v___y_2592_);
v___x_2594_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; uint8_t v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; 
lean_inc(v___y_2591_);
v___x_2595_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2595_, 0, v___x_2594_);
lean_ctor_set(v___x_2595_, 1, v___y_2591_);
v___x_2596_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3(v_items_2584_);
v___x_2597_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2597_, 0, v___x_2595_);
lean_ctor_set(v___x_2597_, 1, v___x_2596_);
lean_inc(v___y_2589_);
v___x_2598_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2598_, 0, v___y_2589_);
lean_ctor_set(v___x_2598_, 1, v___x_2597_);
v___x_2599_ = 0;
v___x_2600_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2600_, 0, v___x_2598_);
lean_ctor_set_uint8(v___x_2600_, sizeof(void*)*1, v___x_2599_);
v___x_2601_ = l_Repr_addAppParen(v___x_2600_, v_prec_2533_);
return v___x_2601_;
}
}
v___jp_2603_:
{
lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; uint8_t v___x_2608_; 
v___x_2605_ = lean_box(1);
v___x_2606_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__11));
v___x_2607_ = lean_obj_once(&l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__12, &l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__12_once, _init_l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__12);
v___x_2608_ = lean_int_dec_lt(v_start_2583_, v___x_2607_);
if (v___x_2608_ == 0)
{
lean_object* v___x_2609_; lean_object* v___x_2610_; 
v___x_2609_ = l_Int_repr(v_start_2583_);
lean_dec(v_start_2583_);
v___x_2610_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2609_);
v___y_2589_ = v___y_2604_;
v___y_2590_ = v___x_2606_;
v___y_2591_ = v___x_2605_;
v___y_2592_ = v___x_2610_;
goto v___jp_2588_;
}
else
{
lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; 
v___x_2611_ = lean_unsigned_to_nat(1024u);
v___x_2612_ = l_Int_repr(v_start_2583_);
lean_dec(v_start_2583_);
v___x_2613_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2613_, 0, v___x_2612_);
v___x_2614_ = l_Repr_addAppParen(v___x_2613_, v___x_2611_);
v___y_2589_ = v___y_2604_;
v___y_2590_ = v___x_2606_;
v___y_2591_ = v___x_2605_;
v___y_2592_ = v___x_2614_;
goto v___jp_2588_;
}
}
}
}
case 4:
{
lean_object* v_items_2620_; lean_object* v___y_2622_; lean_object* v___x_2630_; uint8_t v___x_2631_; 
v_items_2620_ = lean_ctor_get(v_x_2532_, 0);
lean_inc_ref(v_items_2620_);
lean_dec_ref_known(v_x_2532_, 1);
v___x_2630_ = lean_unsigned_to_nat(1024u);
v___x_2631_ = lean_nat_dec_le(v___x_2630_, v_prec_2533_);
if (v___x_2631_ == 0)
{
lean_object* v___x_2632_; 
v___x_2632_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2622_ = v___x_2632_;
goto v___jp_2621_;
}
else
{
lean_object* v___x_2633_; 
v___x_2633_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2622_ = v___x_2633_;
goto v___jp_2621_;
}
v___jp_2621_:
{
lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; uint8_t v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; 
v___x_2623_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__15));
v___x_2624_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4(v_items_2620_);
v___x_2625_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2623_);
lean_ctor_set(v___x_2625_, 1, v___x_2624_);
lean_inc(v___y_2622_);
v___x_2626_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2626_, 0, v___y_2622_);
lean_ctor_set(v___x_2626_, 1, v___x_2625_);
v___x_2627_ = 0;
v___x_2628_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2628_, 0, v___x_2626_);
lean_ctor_set_uint8(v___x_2628_, sizeof(void*)*1, v___x_2627_);
v___x_2629_ = l_Repr_addAppParen(v___x_2628_, v_prec_2533_);
return v___x_2629_;
}
}
case 5:
{
lean_object* v_items_2634_; lean_object* v___y_2636_; lean_object* v___x_2644_; uint8_t v___x_2645_; 
v_items_2634_ = lean_ctor_get(v_x_2532_, 0);
lean_inc_ref(v_items_2634_);
lean_dec_ref_known(v_x_2532_, 1);
v___x_2644_ = lean_unsigned_to_nat(1024u);
v___x_2645_ = lean_nat_dec_le(v___x_2644_, v_prec_2533_);
if (v___x_2645_ == 0)
{
lean_object* v___x_2646_; 
v___x_2646_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2636_ = v___x_2646_;
goto v___jp_2635_;
}
else
{
lean_object* v___x_2647_; 
v___x_2647_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2636_ = v___x_2647_;
goto v___jp_2635_;
}
v___jp_2635_:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; uint8_t v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; 
v___x_2637_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__18));
v___x_2638_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(v_items_2634_);
v___x_2639_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2639_, 0, v___x_2637_);
lean_ctor_set(v___x_2639_, 1, v___x_2638_);
lean_inc(v___y_2636_);
v___x_2640_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2640_, 0, v___y_2636_);
lean_ctor_set(v___x_2640_, 1, v___x_2639_);
v___x_2641_ = 0;
v___x_2642_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2642_, 0, v___x_2640_);
lean_ctor_set_uint8(v___x_2642_, sizeof(void*)*1, v___x_2641_);
v___x_2643_ = l_Repr_addAppParen(v___x_2642_, v_prec_2533_);
return v___x_2643_;
}
}
case 6:
{
lean_object* v_content_2648_; lean_object* v___y_2650_; lean_object* v___x_2658_; uint8_t v___x_2659_; 
v_content_2648_ = lean_ctor_get(v_x_2532_, 0);
lean_inc_ref(v_content_2648_);
lean_dec_ref_known(v_x_2532_, 1);
v___x_2658_ = lean_unsigned_to_nat(1024u);
v___x_2659_ = lean_nat_dec_le(v___x_2658_, v_prec_2533_);
if (v___x_2659_ == 0)
{
lean_object* v___x_2660_; 
v___x_2660_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2650_ = v___x_2660_;
goto v___jp_2649_;
}
else
{
lean_object* v___x_2661_; 
v___x_2661_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2650_ = v___x_2661_;
goto v___jp_2649_;
}
v___jp_2649_:
{
lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; uint8_t v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2651_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__21));
v___x_2652_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(v_content_2648_);
v___x_2653_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2653_, 0, v___x_2651_);
lean_ctor_set(v___x_2653_, 1, v___x_2652_);
lean_inc(v___y_2650_);
v___x_2654_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2654_, 0, v___y_2650_);
lean_ctor_set(v___x_2654_, 1, v___x_2653_);
v___x_2655_ = 0;
v___x_2656_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2656_, 0, v___x_2654_);
lean_ctor_set_uint8(v___x_2656_, sizeof(void*)*1, v___x_2655_);
v___x_2657_ = l_Repr_addAppParen(v___x_2656_, v_prec_2533_);
return v___x_2657_;
}
}
default: 
{
lean_object* v_container_2662_; lean_object* v_content_2663_; lean_object* v___x_2665_; uint8_t v_isShared_2666_; uint8_t v_isSharedCheck_2713_; 
v_container_2662_ = lean_ctor_get(v_x_2532_, 0);
v_content_2663_ = lean_ctor_get(v_x_2532_, 1);
v_isSharedCheck_2713_ = !lean_is_exclusive(v_x_2532_);
if (v_isSharedCheck_2713_ == 0)
{
v___x_2665_ = v_x_2532_;
v_isShared_2666_ = v_isSharedCheck_2713_;
goto v_resetjp_2664_;
}
else
{
lean_inc(v_content_2663_);
lean_inc(v_container_2662_);
lean_dec(v_x_2532_);
v___x_2665_ = lean_box(0);
v_isShared_2666_ = v_isSharedCheck_2713_;
goto v_resetjp_2664_;
}
v_resetjp_2664_:
{
lean_object* v___y_2668_; lean_object* v___y_2669_; lean_object* v___y_2670_; lean_object* v___y_2671_; lean_object* v___y_2683_; lean_object* v___x_2709_; uint8_t v___x_2710_; 
v___x_2709_ = lean_unsigned_to_nat(1024u);
v___x_2710_ = lean_nat_dec_le(v___x_2709_, v_prec_2533_);
if (v___x_2710_ == 0)
{
lean_object* v___x_2711_; 
v___x_2711_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___y_2683_ = v___x_2711_;
goto v___jp_2682_;
}
else
{
lean_object* v___x_2712_; 
v___x_2712_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__4);
v___y_2683_ = v___x_2712_;
goto v___jp_2682_;
}
v___jp_2667_:
{
lean_object* v___x_2673_; 
lean_inc(v___y_2669_);
if (v_isShared_2666_ == 0)
{
lean_ctor_set_tag(v___x_2665_, 5);
lean_ctor_set(v___x_2665_, 1, v___y_2671_);
lean_ctor_set(v___x_2665_, 0, v___y_2669_);
v___x_2673_ = v___x_2665_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2681_; 
v_reuseFailAlloc_2681_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2681_, 0, v___y_2669_);
lean_ctor_set(v_reuseFailAlloc_2681_, 1, v___y_2671_);
v___x_2673_ = v_reuseFailAlloc_2681_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; uint8_t v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; 
lean_inc(v___y_2668_);
v___x_2674_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2674_, 0, v___x_2673_);
lean_ctor_set(v___x_2674_, 1, v___y_2668_);
v___x_2675_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__5(v_content_2663_);
v___x_2676_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2674_);
lean_ctor_set(v___x_2676_, 1, v___x_2675_);
lean_inc(v___y_2670_);
v___x_2677_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2677_, 0, v___y_2670_);
lean_ctor_set(v___x_2677_, 1, v___x_2676_);
v___x_2678_ = 0;
v___x_2679_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2679_, 0, v___x_2677_);
lean_ctor_set_uint8(v___x_2679_, sizeof(void*)*1, v___x_2678_);
v___x_2680_ = l_Repr_addAppParen(v___x_2679_, v_prec_2533_);
return v___x_2680_;
}
}
v___jp_2682_:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; 
v___x_2684_ = lean_box(1);
v___x_2685_ = ((lean_object*)(l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___closed__24));
if (lean_obj_tag(v_container_2662_) == 0)
{
lean_object* v_val_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; uint8_t v___x_2694_; lean_object* v___x_2695_; 
v_val_2686_ = lean_ctor_get(v_container_2662_, 0);
lean_inc(v_val_2686_);
lean_dec_ref_known(v_container_2662_, 1);
v___x_2687_ = ((lean_object*)(l_Lean_instReprElabBlock___lam__0___closed__3));
v___x_2688_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_2686_);
lean_dec(v_val_2686_);
v___x_2689_ = lean_unsigned_to_nat(0u);
v___x_2690_ = l_Lean_Name_reprPrec(v___x_2688_, v___x_2689_);
v___x_2691_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2687_);
lean_ctor_set(v___x_2691_, 1, v___x_2690_);
v___x_2692_ = ((lean_object*)(l_Lean_instReprElabInline___lam__0___closed__7));
v___x_2693_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2693_, 0, v___x_2691_);
lean_ctor_set(v___x_2693_, 1, v___x_2692_);
v___x_2694_ = 0;
v___x_2695_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2695_, 0, v___x_2693_);
lean_ctor_set_uint8(v___x_2695_, sizeof(void*)*1, v___x_2694_);
v___y_2668_ = v___x_2684_;
v___y_2669_ = v___x_2685_;
v___y_2670_ = v___y_2683_;
v___y_2671_ = v___x_2695_;
goto v___jp_2667_;
}
else
{
lean_object* v_index_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2708_; 
v_index_2696_ = lean_ctor_get(v_container_2662_, 0);
v_isSharedCheck_2708_ = !lean_is_exclusive(v_container_2662_);
if (v_isSharedCheck_2708_ == 0)
{
v___x_2698_ = v_container_2662_;
v_isShared_2699_ = v_isSharedCheck_2708_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_index_2696_);
lean_dec(v_container_2662_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2708_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2703_; 
v___x_2700_ = ((lean_object*)(l_Lean_instReprElabBlock___lam__0___closed__6));
v___x_2701_ = l_Nat_reprFast(v_index_2696_);
if (v_isShared_2699_ == 0)
{
lean_ctor_set_tag(v___x_2698_, 3);
lean_ctor_set(v___x_2698_, 0, v___x_2701_);
v___x_2703_ = v___x_2698_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2707_; 
v_reuseFailAlloc_2707_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2707_, 0, v___x_2701_);
v___x_2703_ = v_reuseFailAlloc_2707_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
lean_object* v___x_2704_; uint8_t v___x_2705_; lean_object* v___x_2706_; 
v___x_2704_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2704_, 0, v___x_2700_);
lean_ctor_set(v___x_2704_, 1, v___x_2703_);
v___x_2705_ = 0;
v___x_2706_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2706_, 0, v___x_2704_);
lean_ctor_set_uint8(v___x_2706_, sizeof(void*)*1, v___x_2705_);
v___y_2668_ = v___x_2684_;
v___y_2669_ = v___x_2685_;
v___y_2670_ = v___y_2683_;
v___y_2671_ = v___x_2706_;
goto v___jp_2667_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1___lam__0(lean_object* v___y_2714_){
_start:
{
lean_object* v___x_2715_; lean_object* v___x_2716_; 
v___x_2715_ = lean_unsigned_to_nat(0u);
v___x_2716_ = l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0(v___y_2714_, v___x_2715_);
return v___x_2716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0___boxed(lean_object* v_x_2717_, lean_object* v_prec_2718_){
_start:
{
lean_object* v_res_2719_; 
v_res_2719_ = l_Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0(v_x_2717_, v_prec_2718_);
lean_dec(v_prec_2718_);
return v_res_2719_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0(lean_object* v_xs_2720_){
_start:
{
lean_object* v___x_2721_; lean_object* v___x_2722_; uint8_t v___x_2723_; 
v___x_2721_ = lean_array_get_size(v_xs_2720_);
v___x_2722_ = lean_unsigned_to_nat(0u);
v___x_2723_ = lean_nat_dec_eq(v___x_2721_, v___x_2722_);
if (v___x_2723_ == 0)
{
lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; 
v___x_2724_ = lean_array_to_list(v_xs_2720_);
v___x_2725_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_2726_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__1(v___x_2724_, v___x_2725_);
v___x_2727_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6);
v___x_2728_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_2729_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2729_, 0, v___x_2728_);
lean_ctor_set(v___x_2729_, 1, v___x_2726_);
v___x_2730_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8));
v___x_2731_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2729_);
lean_ctor_set(v___x_2731_, 1, v___x_2730_);
v___x_2732_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2732_, 0, v___x_2727_);
lean_ctor_set(v___x_2732_, 1, v___x_2731_);
v___x_2733_ = l_Std_Format_fill(v___x_2732_);
return v___x_2733_;
}
else
{
lean_object* v___x_2734_; 
lean_dec_ref(v_xs_2720_);
v___x_2734_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10));
return v___x_2734_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg(lean_object* v_x_2738_){
_start:
{
lean_object* v___x_2739_; 
v___x_2739_ = ((lean_object*)(l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___closed__1));
return v___x_2739_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg___boxed(lean_object* v_x_2740_){
_start:
{
lean_object* v_res_2741_; 
v_res_2741_ = l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg(v_x_2740_);
lean_dec(v_x_2740_);
return v_res_2741_;
}
}
static lean_object* _init_l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__4(void){
_start:
{
lean_object* v___x_2751_; lean_object* v___x_2752_; 
v___x_2751_ = lean_unsigned_to_nat(9u);
v___x_2752_ = lean_nat_to_int(v___x_2751_);
return v___x_2752_;
}
}
static lean_object* _init_l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__7(void){
_start:
{
lean_object* v___x_2756_; lean_object* v___x_2757_; 
v___x_2756_ = lean_unsigned_to_nat(15u);
v___x_2757_ = lean_nat_to_int(v___x_2756_);
return v___x_2757_;
}
}
static lean_object* _init_l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__12(void){
_start:
{
lean_object* v___x_2764_; lean_object* v___x_2765_; 
v___x_2764_ = lean_unsigned_to_nat(11u);
v___x_2765_ = lean_nat_to_int(v___x_2764_);
return v___x_2765_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31_spec__34(lean_object* v_x_2769_, lean_object* v_x_2770_, lean_object* v_x_2771_){
_start:
{
if (lean_obj_tag(v_x_2771_) == 0)
{
lean_dec(v_x_2769_);
return v_x_2770_;
}
else
{
lean_object* v_head_2772_; lean_object* v_tail_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2783_; 
v_head_2772_ = lean_ctor_get(v_x_2771_, 0);
v_tail_2773_ = lean_ctor_get(v_x_2771_, 1);
v_isSharedCheck_2783_ = !lean_is_exclusive(v_x_2771_);
if (v_isSharedCheck_2783_ == 0)
{
v___x_2775_ = v_x_2771_;
v_isShared_2776_ = v_isSharedCheck_2783_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_tail_2773_);
lean_inc(v_head_2772_);
lean_dec(v_x_2771_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2783_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2778_; 
lean_inc(v_x_2769_);
if (v_isShared_2776_ == 0)
{
lean_ctor_set_tag(v___x_2775_, 5);
lean_ctor_set(v___x_2775_, 1, v_x_2769_);
lean_ctor_set(v___x_2775_, 0, v_x_2770_);
v___x_2778_ = v___x_2775_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v_x_2770_);
lean_ctor_set(v_reuseFailAlloc_2782_, 1, v_x_2769_);
v___x_2778_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; 
v___x_2779_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(v_head_2772_);
v___x_2780_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2780_, 0, v___x_2778_);
lean_ctor_set(v___x_2780_, 1, v___x_2779_);
v___x_2781_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31_spec__34_spec__35(v_x_2769_, v___x_2780_, v_tail_2773_);
return v___x_2781_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31(lean_object* v_x_2784_, lean_object* v_x_2785_){
_start:
{
if (lean_obj_tag(v_x_2784_) == 0)
{
lean_object* v___x_2786_; 
lean_dec(v_x_2785_);
v___x_2786_ = lean_box(0);
return v___x_2786_;
}
else
{
lean_object* v_tail_2787_; 
v_tail_2787_ = lean_ctor_get(v_x_2784_, 1);
if (lean_obj_tag(v_tail_2787_) == 0)
{
lean_object* v_head_2788_; lean_object* v___x_2789_; 
lean_dec(v_x_2785_);
v_head_2788_ = lean_ctor_get(v_x_2784_, 0);
lean_inc(v_head_2788_);
lean_dec_ref_known(v_x_2784_, 2);
v___x_2789_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(v_head_2788_);
return v___x_2789_;
}
else
{
lean_object* v_head_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; 
lean_inc(v_tail_2787_);
v_head_2790_ = lean_ctor_get(v_x_2784_, 0);
lean_inc(v_head_2790_);
lean_dec_ref_known(v_x_2784_, 2);
v___x_2791_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(v_head_2790_);
v___x_2792_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31_spec__34(v_x_2785_, v___x_2791_, v_tail_2787_);
return v___x_2792_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25(lean_object* v_xs_2793_){
_start:
{
lean_object* v___x_2794_; lean_object* v___x_2795_; uint8_t v___x_2796_; 
v___x_2794_ = lean_array_get_size(v_xs_2793_);
v___x_2795_ = lean_unsigned_to_nat(0u);
v___x_2796_ = lean_nat_dec_eq(v___x_2794_, v___x_2795_);
if (v___x_2796_ == 0)
{
lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; 
v___x_2797_ = lean_array_to_list(v_xs_2793_);
v___x_2798_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_2799_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31(v___x_2797_, v___x_2798_);
v___x_2800_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6);
v___x_2801_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_2802_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2802_, 0, v___x_2801_);
lean_ctor_set(v___x_2802_, 1, v___x_2799_);
v___x_2803_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8));
v___x_2804_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2804_, 0, v___x_2802_);
lean_ctor_set(v___x_2804_, 1, v___x_2803_);
v___x_2805_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2805_, 0, v___x_2800_);
lean_ctor_set(v___x_2805_, 1, v___x_2804_);
v___x_2806_ = l_Std_Format_fill(v___x_2805_);
return v___x_2806_;
}
else
{
lean_object* v___x_2807_; 
lean_dec_ref(v_xs_2793_);
v___x_2807_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10));
return v___x_2807_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(lean_object* v_x_2808_){
_start:
{
lean_object* v_title_2809_; lean_object* v_titleString_2810_; lean_object* v_metadata_2811_; lean_object* v_content_2812_; lean_object* v_subParts_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; uint8_t v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; 
v_title_2809_ = lean_ctor_get(v_x_2808_, 0);
lean_inc_ref(v_title_2809_);
v_titleString_2810_ = lean_ctor_get(v_x_2808_, 1);
lean_inc_ref(v_titleString_2810_);
v_metadata_2811_ = lean_ctor_get(v_x_2808_, 2);
lean_inc(v_metadata_2811_);
v_content_2812_ = lean_ctor_get(v_x_2808_, 3);
lean_inc_ref(v_content_2812_);
v_subParts_2813_ = lean_ctor_get(v_x_2808_, 4);
lean_inc_ref(v_subParts_2813_);
lean_dec_ref(v_x_2808_);
v___x_2814_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5));
v___x_2815_ = ((lean_object*)(l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__3));
v___x_2816_ = lean_obj_once(&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__4, &l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__4_once, _init_l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__4);
v___x_2817_ = l_Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2(v_title_2809_);
v___x_2818_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2818_, 0, v___x_2816_);
lean_ctor_set(v___x_2818_, 1, v___x_2817_);
v___x_2819_ = 0;
v___x_2820_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2820_, 0, v___x_2818_);
lean_ctor_set_uint8(v___x_2820_, sizeof(void*)*1, v___x_2819_);
v___x_2821_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2821_, 0, v___x_2815_);
lean_ctor_set(v___x_2821_, 1, v___x_2820_);
v___x_2822_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2));
v___x_2823_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2821_);
lean_ctor_set(v___x_2823_, 1, v___x_2822_);
v___x_2824_ = lean_box(1);
v___x_2825_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2825_, 0, v___x_2823_);
lean_ctor_set(v___x_2825_, 1, v___x_2824_);
v___x_2826_ = ((lean_object*)(l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__6));
v___x_2827_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2827_, 0, v___x_2825_);
lean_ctor_set(v___x_2827_, 1, v___x_2826_);
v___x_2828_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2828_, 0, v___x_2827_);
lean_ctor_set(v___x_2828_, 1, v___x_2814_);
v___x_2829_ = lean_obj_once(&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__7, &l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__7_once, _init_l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__7);
v___x_2830_ = l_String_quote(v_titleString_2810_);
v___x_2831_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2831_, 0, v___x_2830_);
v___x_2832_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2832_, 0, v___x_2829_);
lean_ctor_set(v___x_2832_, 1, v___x_2831_);
v___x_2833_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2833_, 0, v___x_2832_);
lean_ctor_set_uint8(v___x_2833_, sizeof(void*)*1, v___x_2819_);
v___x_2834_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2834_, 0, v___x_2828_);
lean_ctor_set(v___x_2834_, 1, v___x_2833_);
v___x_2835_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2834_);
lean_ctor_set(v___x_2835_, 1, v___x_2822_);
v___x_2836_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2836_, 0, v___x_2835_);
lean_ctor_set(v___x_2836_, 1, v___x_2824_);
v___x_2837_ = ((lean_object*)(l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__9));
v___x_2838_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2838_, 0, v___x_2836_);
lean_ctor_set(v___x_2838_, 1, v___x_2837_);
v___x_2839_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2838_);
lean_ctor_set(v___x_2839_, 1, v___x_2814_);
v___x_2840_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7);
v___x_2841_ = l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg(v_metadata_2811_);
lean_dec(v_metadata_2811_);
v___x_2842_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2842_, 0, v___x_2840_);
lean_ctor_set(v___x_2842_, 1, v___x_2841_);
v___x_2843_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2843_, 0, v___x_2842_);
lean_ctor_set_uint8(v___x_2843_, sizeof(void*)*1, v___x_2819_);
v___x_2844_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2844_, 0, v___x_2839_);
lean_ctor_set(v___x_2844_, 1, v___x_2843_);
v___x_2845_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2845_, 0, v___x_2844_);
lean_ctor_set(v___x_2845_, 1, v___x_2822_);
v___x_2846_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2846_, 0, v___x_2845_);
lean_ctor_set(v___x_2846_, 1, v___x_2824_);
v___x_2847_ = ((lean_object*)(l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__11));
v___x_2848_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2846_);
lean_ctor_set(v___x_2848_, 1, v___x_2847_);
v___x_2849_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2849_, 0, v___x_2848_);
lean_ctor_set(v___x_2849_, 1, v___x_2814_);
v___x_2850_ = lean_obj_once(&l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__12, &l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__12_once, _init_l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__12);
v___x_2851_ = l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0(v_content_2812_);
v___x_2852_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2850_);
lean_ctor_set(v___x_2852_, 1, v___x_2851_);
v___x_2853_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2853_, 0, v___x_2852_);
lean_ctor_set_uint8(v___x_2853_, sizeof(void*)*1, v___x_2819_);
v___x_2854_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2854_, 0, v___x_2849_);
lean_ctor_set(v___x_2854_, 1, v___x_2853_);
v___x_2855_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2855_, 0, v___x_2854_);
lean_ctor_set(v___x_2855_, 1, v___x_2822_);
v___x_2856_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2856_, 0, v___x_2855_);
lean_ctor_set(v___x_2856_, 1, v___x_2824_);
v___x_2857_ = ((lean_object*)(l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg___closed__14));
v___x_2858_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2856_);
lean_ctor_set(v___x_2858_, 1, v___x_2857_);
v___x_2859_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2859_, 0, v___x_2858_);
lean_ctor_set(v___x_2859_, 1, v___x_2814_);
v___x_2860_ = l_Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25(v_subParts_2813_);
v___x_2861_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2861_, 0, v___x_2840_);
lean_ctor_set(v___x_2861_, 1, v___x_2860_);
v___x_2862_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2862_, 0, v___x_2861_);
lean_ctor_set_uint8(v___x_2862_, sizeof(void*)*1, v___x_2819_);
v___x_2863_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2863_, 0, v___x_2859_);
lean_ctor_set(v___x_2863_, 1, v___x_2862_);
v___x_2864_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10);
v___x_2865_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11));
v___x_2866_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2866_, 0, v___x_2865_);
lean_ctor_set(v___x_2866_, 1, v___x_2863_);
v___x_2867_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12));
v___x_2868_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2868_, 0, v___x_2866_);
lean_ctor_set(v___x_2868_, 1, v___x_2867_);
v___x_2869_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2869_, 0, v___x_2864_);
lean_ctor_set(v___x_2869_, 1, v___x_2868_);
v___x_2870_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2870_, 0, v___x_2869_);
lean_ctor_set_uint8(v___x_2870_, sizeof(void*)*1, v___x_2819_);
return v___x_2870_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__25_spec__31_spec__34_spec__35(lean_object* v_x_2871_, lean_object* v_x_2872_, lean_object* v_x_2873_){
_start:
{
if (lean_obj_tag(v_x_2873_) == 0)
{
lean_dec(v_x_2871_);
return v_x_2872_;
}
else
{
lean_object* v_head_2874_; lean_object* v_tail_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2885_; 
v_head_2874_ = lean_ctor_get(v_x_2873_, 0);
v_tail_2875_ = lean_ctor_get(v_x_2873_, 1);
v_isSharedCheck_2885_ = !lean_is_exclusive(v_x_2873_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2877_ = v_x_2873_;
v_isShared_2878_ = v_isSharedCheck_2885_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_tail_2875_);
lean_inc(v_head_2874_);
lean_dec(v_x_2873_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2885_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2880_; 
lean_inc(v_x_2871_);
if (v_isShared_2878_ == 0)
{
lean_ctor_set_tag(v___x_2877_, 5);
lean_ctor_set(v___x_2877_, 1, v_x_2871_);
lean_ctor_set(v___x_2877_, 0, v_x_2872_);
v___x_2880_ = v___x_2877_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v_x_2872_);
lean_ctor_set(v_reuseFailAlloc_2884_, 1, v_x_2871_);
v___x_2880_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
lean_object* v___x_2881_; lean_object* v___x_2882_; 
v___x_2881_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(v_head_2874_);
v___x_2882_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2882_, 0, v___x_2880_);
lean_ctor_set(v___x_2882_, 1, v___x_2881_);
v_x_2872_ = v___x_2882_;
v_x_2873_ = v_tail_2875_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10(lean_object* v_x_2886_, lean_object* v_x_2887_){
_start:
{
lean_object* v_fst_2888_; lean_object* v_snd_2889_; lean_object* v___x_2891_; uint8_t v_isShared_2892_; uint8_t v_isSharedCheck_2899_; 
v_fst_2888_ = lean_ctor_get(v_x_2886_, 0);
v_snd_2889_ = lean_ctor_get(v_x_2886_, 1);
v_isSharedCheck_2899_ = !lean_is_exclusive(v_x_2886_);
if (v_isSharedCheck_2899_ == 0)
{
v___x_2891_ = v_x_2886_;
v_isShared_2892_ = v_isSharedCheck_2899_;
goto v_resetjp_2890_;
}
else
{
lean_inc(v_snd_2889_);
lean_inc(v_fst_2888_);
lean_dec(v_x_2886_);
v___x_2891_ = lean_box(0);
v_isShared_2892_ = v_isSharedCheck_2899_;
goto v_resetjp_2890_;
}
v_resetjp_2890_:
{
lean_object* v___x_2893_; lean_object* v___x_2895_; 
v___x_2893_ = l_Lean_instReprDeclarationRange_repr___redArg(v_fst_2888_);
if (v_isShared_2892_ == 0)
{
lean_ctor_set_tag(v___x_2891_, 1);
lean_ctor_set(v___x_2891_, 1, v_x_2887_);
lean_ctor_set(v___x_2891_, 0, v___x_2893_);
v___x_2895_ = v___x_2891_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v___x_2893_);
lean_ctor_set(v_reuseFailAlloc_2898_, 1, v_x_2887_);
v___x_2895_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
lean_object* v___x_2896_; lean_object* v___x_2897_; 
v___x_2896_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(v_snd_2889_);
v___x_2897_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2897_, 0, v___x_2896_);
lean_ctor_set(v___x_2897_, 1, v___x_2895_);
return v___x_2897_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__11_spec__20(lean_object* v_x_2900_, lean_object* v_x_2901_, lean_object* v_x_2902_){
_start:
{
if (lean_obj_tag(v_x_2902_) == 0)
{
lean_dec(v_x_2900_);
return v_x_2901_;
}
else
{
lean_object* v_head_2903_; lean_object* v_tail_2904_; lean_object* v___x_2906_; uint8_t v_isShared_2907_; uint8_t v_isSharedCheck_2913_; 
v_head_2903_ = lean_ctor_get(v_x_2902_, 0);
v_tail_2904_ = lean_ctor_get(v_x_2902_, 1);
v_isSharedCheck_2913_ = !lean_is_exclusive(v_x_2902_);
if (v_isSharedCheck_2913_ == 0)
{
v___x_2906_ = v_x_2902_;
v_isShared_2907_ = v_isSharedCheck_2913_;
goto v_resetjp_2905_;
}
else
{
lean_inc(v_tail_2904_);
lean_inc(v_head_2903_);
lean_dec(v_x_2902_);
v___x_2906_ = lean_box(0);
v_isShared_2907_ = v_isSharedCheck_2913_;
goto v_resetjp_2905_;
}
v_resetjp_2905_:
{
lean_object* v___x_2909_; 
lean_inc(v_x_2900_);
if (v_isShared_2907_ == 0)
{
lean_ctor_set_tag(v___x_2906_, 5);
lean_ctor_set(v___x_2906_, 1, v_x_2900_);
lean_ctor_set(v___x_2906_, 0, v_x_2901_);
v___x_2909_ = v___x_2906_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v_x_2901_);
lean_ctor_set(v_reuseFailAlloc_2912_, 1, v_x_2900_);
v___x_2909_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
lean_object* v___x_2910_; 
v___x_2910_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2910_, 0, v___x_2909_);
lean_ctor_set(v___x_2910_, 1, v_head_2903_);
v_x_2901_ = v___x_2910_;
v_x_2902_ = v_tail_2904_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__11(lean_object* v_x_2914_, lean_object* v_x_2915_){
_start:
{
if (lean_obj_tag(v_x_2914_) == 0)
{
lean_object* v___x_2916_; 
lean_dec(v_x_2915_);
v___x_2916_ = lean_box(0);
return v___x_2916_;
}
else
{
lean_object* v_tail_2917_; 
v_tail_2917_ = lean_ctor_get(v_x_2914_, 1);
if (lean_obj_tag(v_tail_2917_) == 0)
{
lean_object* v_head_2918_; 
lean_dec(v_x_2915_);
v_head_2918_ = lean_ctor_get(v_x_2914_, 0);
lean_inc(v_head_2918_);
lean_dec_ref_known(v_x_2914_, 2);
return v_head_2918_;
}
else
{
lean_object* v_head_2919_; lean_object* v___x_2920_; 
lean_inc(v_tail_2917_);
v_head_2919_ = lean_ctor_get(v_x_2914_, 0);
lean_inc(v_head_2919_);
lean_dec_ref_known(v_x_2914_, 2);
v___x_2920_ = l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__11_spec__20(v_x_2915_, v_head_2919_, v_tail_2917_);
return v___x_2920_;
}
}
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_2923_; lean_object* v___x_2924_; 
v___x_2923_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__0));
v___x_2924_ = lean_string_length(v___x_2923_);
return v___x_2924_;
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_2925_; lean_object* v___x_2926_; 
v___x_2925_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__2, &l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__2_once, _init_l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__2);
v___x_2926_ = lean_nat_to_int(v___x_2925_);
return v___x_2926_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(lean_object* v_x_2931_){
_start:
{
lean_object* v_fst_2932_; lean_object* v_snd_2933_; lean_object* v___x_2935_; uint8_t v_isShared_2936_; uint8_t v_isSharedCheck_2955_; 
v_fst_2932_ = lean_ctor_get(v_x_2931_, 0);
v_snd_2933_ = lean_ctor_get(v_x_2931_, 1);
v_isSharedCheck_2955_ = !lean_is_exclusive(v_x_2931_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2935_ = v_x_2931_;
v_isShared_2936_ = v_isSharedCheck_2955_;
goto v_resetjp_2934_;
}
else
{
lean_inc(v_snd_2933_);
lean_inc(v_fst_2932_);
lean_dec(v_x_2931_);
v___x_2935_ = lean_box(0);
v_isShared_2936_ = v_isSharedCheck_2955_;
goto v_resetjp_2934_;
}
v_resetjp_2934_:
{
lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2941_; 
v___x_2937_ = l_Nat_reprFast(v_fst_2932_);
v___x_2938_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2938_, 0, v___x_2937_);
v___x_2939_ = lean_box(0);
if (v_isShared_2936_ == 0)
{
lean_ctor_set_tag(v___x_2935_, 1);
lean_ctor_set(v___x_2935_, 1, v___x_2939_);
lean_ctor_set(v___x_2935_, 0, v___x_2938_);
v___x_2941_ = v___x_2935_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v___x_2938_);
lean_ctor_set(v_reuseFailAlloc_2954_, 1, v___x_2939_);
v___x_2941_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; uint8_t v___x_2952_; lean_object* v___x_2953_; 
v___x_2942_ = l_Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10(v_snd_2933_, v___x_2941_);
v___x_2943_ = l_List_reverse___redArg(v___x_2942_);
v___x_2944_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_2945_ = l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__11(v___x_2943_, v___x_2944_);
v___x_2946_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__3, &l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__3_once, _init_l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__3);
v___x_2947_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__4));
v___x_2948_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2948_, 0, v___x_2947_);
lean_ctor_set(v___x_2948_, 1, v___x_2945_);
v___x_2949_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__5));
v___x_2950_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2948_);
lean_ctor_set(v___x_2950_, 1, v___x_2949_);
v___x_2951_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2946_);
lean_ctor_set(v___x_2951_, 1, v___x_2950_);
v___x_2952_ = 0;
v___x_2953_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2953_, 0, v___x_2951_);
lean_ctor_set_uint8(v___x_2953_, sizeof(void*)*1, v___x_2952_);
return v___x_2953_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4_spec__13_spec__23(lean_object* v_x_2956_, lean_object* v_x_2957_, lean_object* v_x_2958_){
_start:
{
if (lean_obj_tag(v_x_2958_) == 0)
{
lean_dec(v_x_2956_);
return v_x_2957_;
}
else
{
lean_object* v_head_2959_; lean_object* v_tail_2960_; lean_object* v___x_2962_; uint8_t v_isShared_2963_; uint8_t v_isSharedCheck_2970_; 
v_head_2959_ = lean_ctor_get(v_x_2958_, 0);
v_tail_2960_ = lean_ctor_get(v_x_2958_, 1);
v_isSharedCheck_2970_ = !lean_is_exclusive(v_x_2958_);
if (v_isSharedCheck_2970_ == 0)
{
v___x_2962_ = v_x_2958_;
v_isShared_2963_ = v_isSharedCheck_2970_;
goto v_resetjp_2961_;
}
else
{
lean_inc(v_tail_2960_);
lean_inc(v_head_2959_);
lean_dec(v_x_2958_);
v___x_2962_ = lean_box(0);
v_isShared_2963_ = v_isSharedCheck_2970_;
goto v_resetjp_2961_;
}
v_resetjp_2961_:
{
lean_object* v___x_2965_; 
lean_inc(v_x_2956_);
if (v_isShared_2963_ == 0)
{
lean_ctor_set_tag(v___x_2962_, 5);
lean_ctor_set(v___x_2962_, 1, v_x_2956_);
lean_ctor_set(v___x_2962_, 0, v_x_2957_);
v___x_2965_ = v___x_2962_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v_x_2957_);
lean_ctor_set(v_reuseFailAlloc_2969_, 1, v_x_2956_);
v___x_2965_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
lean_object* v___x_2966_; lean_object* v___x_2967_; 
v___x_2966_ = l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(v_head_2959_);
v___x_2967_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2967_, 0, v___x_2965_);
lean_ctor_set(v___x_2967_, 1, v___x_2966_);
v_x_2957_ = v___x_2967_;
v_x_2958_ = v_tail_2960_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4_spec__13(lean_object* v_x_2971_, lean_object* v_x_2972_, lean_object* v_x_2973_){
_start:
{
if (lean_obj_tag(v_x_2973_) == 0)
{
lean_dec(v_x_2971_);
return v_x_2972_;
}
else
{
lean_object* v_head_2974_; lean_object* v_tail_2975_; lean_object* v___x_2977_; uint8_t v_isShared_2978_; uint8_t v_isSharedCheck_2985_; 
v_head_2974_ = lean_ctor_get(v_x_2973_, 0);
v_tail_2975_ = lean_ctor_get(v_x_2973_, 1);
v_isSharedCheck_2985_ = !lean_is_exclusive(v_x_2973_);
if (v_isSharedCheck_2985_ == 0)
{
v___x_2977_ = v_x_2973_;
v_isShared_2978_ = v_isSharedCheck_2985_;
goto v_resetjp_2976_;
}
else
{
lean_inc(v_tail_2975_);
lean_inc(v_head_2974_);
lean_dec(v_x_2973_);
v___x_2977_ = lean_box(0);
v_isShared_2978_ = v_isSharedCheck_2985_;
goto v_resetjp_2976_;
}
v_resetjp_2976_:
{
lean_object* v___x_2980_; 
lean_inc(v_x_2971_);
if (v_isShared_2978_ == 0)
{
lean_ctor_set_tag(v___x_2977_, 5);
lean_ctor_set(v___x_2977_, 1, v_x_2971_);
lean_ctor_set(v___x_2977_, 0, v_x_2972_);
v___x_2980_ = v___x_2977_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_2984_; 
v_reuseFailAlloc_2984_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2984_, 0, v_x_2972_);
lean_ctor_set(v_reuseFailAlloc_2984_, 1, v_x_2971_);
v___x_2980_ = v_reuseFailAlloc_2984_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; 
v___x_2981_ = l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(v_head_2974_);
v___x_2982_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2982_, 0, v___x_2980_);
lean_ctor_set(v___x_2982_, 1, v___x_2981_);
v___x_2983_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4_spec__13_spec__23(v_x_2971_, v___x_2982_, v_tail_2975_);
return v___x_2983_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4(lean_object* v_x_2986_, lean_object* v_x_2987_){
_start:
{
if (lean_obj_tag(v_x_2986_) == 0)
{
lean_object* v___x_2988_; 
lean_dec(v_x_2987_);
v___x_2988_ = lean_box(0);
return v___x_2988_;
}
else
{
lean_object* v_tail_2989_; 
v_tail_2989_ = lean_ctor_get(v_x_2986_, 1);
if (lean_obj_tag(v_tail_2989_) == 0)
{
lean_object* v_head_2990_; lean_object* v___x_2991_; 
lean_dec(v_x_2987_);
v_head_2990_ = lean_ctor_get(v_x_2986_, 0);
lean_inc(v_head_2990_);
lean_dec_ref_known(v_x_2986_, 2);
v___x_2991_ = l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(v_head_2990_);
return v___x_2991_;
}
else
{
lean_object* v_head_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; 
lean_inc(v_tail_2989_);
v_head_2992_ = lean_ctor_get(v_x_2986_, 0);
lean_inc(v_head_2992_);
lean_dec_ref_known(v_x_2986_, 2);
v___x_2993_ = l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(v_head_2992_);
v___x_2994_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4_spec__13(v_x_2987_, v___x_2993_, v_tail_2989_);
return v___x_2994_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1(lean_object* v_xs_2995_){
_start:
{
lean_object* v___x_2996_; lean_object* v___x_2997_; uint8_t v___x_2998_; 
v___x_2996_ = lean_array_get_size(v_xs_2995_);
v___x_2997_ = lean_unsigned_to_nat(0u);
v___x_2998_ = lean_nat_dec_eq(v___x_2996_, v___x_2997_);
if (v___x_2998_ == 0)
{
lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; 
v___x_2999_ = lean_array_to_list(v_xs_2995_);
v___x_3000_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__3));
v___x_3001_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__4(v___x_2999_, v___x_3000_);
v___x_3002_ = lean_obj_once(&l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6, &l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6_once, _init_l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__6);
v___x_3003_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__7));
v___x_3004_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3004_, 0, v___x_3003_);
lean_ctor_set(v___x_3004_, 1, v___x_3001_);
v___x_3005_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__8));
v___x_3006_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3006_, 0, v___x_3004_);
lean_ctor_set(v___x_3006_, 1, v___x_3005_);
v___x_3007_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3007_, 0, v___x_3002_);
lean_ctor_set(v___x_3007_, 1, v___x_3006_);
v___x_3008_ = l_Std_Format_fill(v___x_3007_);
return v___x_3008_;
}
else
{
lean_object* v___x_3009_; 
lean_dec_ref(v_xs_2995_);
v___x_3009_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__10));
return v___x_3009_;
}
}
}
static lean_object* _init_l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; 
v___x_3025_ = lean_unsigned_to_nat(20u);
v___x_3026_ = lean_nat_to_int(v___x_3025_);
return v___x_3026_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg(lean_object* v_x_3027_){
_start:
{
lean_object* v_text_3028_; lean_object* v_sections_3029_; lean_object* v_declarationRange_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; uint8_t v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; 
v_text_3028_ = lean_ctor_get(v_x_3027_, 0);
lean_inc_ref(v_text_3028_);
v_sections_3029_ = lean_ctor_get(v_x_3027_, 1);
lean_inc_ref(v_sections_3029_);
v_declarationRange_3030_ = lean_ctor_get(v_x_3027_, 2);
lean_inc_ref(v_declarationRange_3030_);
lean_dec_ref(v_x_3027_);
v___x_3031_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__5));
v___x_3032_ = ((lean_object*)(l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__3));
v___x_3033_ = lean_obj_once(&l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4, &l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4_once, _init_l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg___closed__4);
v___x_3034_ = l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0(v_text_3028_);
v___x_3035_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3033_);
lean_ctor_set(v___x_3035_, 1, v___x_3034_);
v___x_3036_ = 0;
v___x_3037_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3037_, 0, v___x_3035_);
lean_ctor_set_uint8(v___x_3037_, sizeof(void*)*1, v___x_3036_);
v___x_3038_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3038_, 0, v___x_3032_);
lean_ctor_set(v___x_3038_, 1, v___x_3037_);
v___x_3039_ = ((lean_object*)(l_Array_repr___at___00Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4_spec__8___closed__2));
v___x_3040_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3040_, 0, v___x_3038_);
lean_ctor_set(v___x_3040_, 1, v___x_3039_);
v___x_3041_ = lean_box(1);
v___x_3042_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3042_, 0, v___x_3040_);
lean_ctor_set(v___x_3042_, 1, v___x_3041_);
v___x_3043_ = ((lean_object*)(l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__5));
v___x_3044_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3044_, 0, v___x_3042_);
lean_ctor_set(v___x_3044_, 1, v___x_3043_);
v___x_3045_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3045_, 0, v___x_3044_);
lean_ctor_set(v___x_3045_, 1, v___x_3031_);
v___x_3046_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__7);
v___x_3047_ = l_Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1(v_sections_3029_);
v___x_3048_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3048_, 0, v___x_3046_);
lean_ctor_set(v___x_3048_, 1, v___x_3047_);
v___x_3049_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3049_, 0, v___x_3048_);
lean_ctor_set_uint8(v___x_3049_, sizeof(void*)*1, v___x_3036_);
v___x_3050_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3050_, 0, v___x_3045_);
lean_ctor_set(v___x_3050_, 1, v___x_3049_);
v___x_3051_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3051_, 0, v___x_3050_);
lean_ctor_set(v___x_3051_, 1, v___x_3039_);
v___x_3052_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3052_, 0, v___x_3051_);
lean_ctor_set(v___x_3052_, 1, v___x_3041_);
v___x_3053_ = ((lean_object*)(l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__7));
v___x_3054_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3054_, 0, v___x_3052_);
lean_ctor_set(v___x_3054_, 1, v___x_3053_);
v___x_3055_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3055_, 0, v___x_3054_);
lean_ctor_set(v___x_3055_, 1, v___x_3031_);
v___x_3056_ = lean_obj_once(&l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__8, &l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__8_once, _init_l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg___closed__8);
v___x_3057_ = l_Lean_instReprDeclarationRange_repr___redArg(v_declarationRange_3030_);
v___x_3058_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3058_, 0, v___x_3056_);
lean_ctor_set(v___x_3058_, 1, v___x_3057_);
v___x_3059_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3059_, 0, v___x_3058_);
lean_ctor_set_uint8(v___x_3059_, sizeof(void*)*1, v___x_3036_);
v___x_3060_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3060_, 0, v___x_3055_);
lean_ctor_set(v___x_3060_, 1, v___x_3059_);
v___x_3061_ = lean_obj_once(&l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10, &l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10_once, _init_l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__10);
v___x_3062_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11));
v___x_3063_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3063_, 0, v___x_3062_);
lean_ctor_set(v___x_3063_, 1, v___x_3060_);
v___x_3064_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12));
v___x_3065_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3065_, 0, v___x_3063_);
lean_ctor_set(v___x_3065_, 1, v___x_3064_);
v___x_3066_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3066_, 0, v___x_3061_);
lean_ctor_set(v___x_3066_, 1, v___x_3065_);
v___x_3067_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3067_, 0, v___x_3066_);
lean_ctor_set_uint8(v___x_3067_, sizeof(void*)*1, v___x_3036_);
return v___x_3067_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr(lean_object* v_x_3068_, lean_object* v_prec_3069_){
_start:
{
lean_object* v___x_3070_; 
v___x_3070_ = l_Lean_VersoModuleDocs_instReprSnippet_repr___redArg(v_x_3068_);
return v___x_3070_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_instReprSnippet_repr___boxed(lean_object* v_x_3071_, lean_object* v_prec_3072_){
_start:
{
lean_object* v_res_3073_; 
v_res_3073_ = l_Lean_VersoModuleDocs_instReprSnippet_repr(v_x_3071_, v_prec_3072_);
lean_dec(v_prec_3072_);
return v_res_3073_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3(lean_object* v_x_3074_, lean_object* v_x_3075_){
_start:
{
lean_object* v___x_3076_; 
v___x_3076_ = l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg(v_x_3074_);
return v___x_3076_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___boxed(lean_object* v_x_3077_, lean_object* v_x_3078_){
_start:
{
lean_object* v_res_3079_; 
v_res_3079_ = l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3(v_x_3077_, v_x_3078_);
lean_dec(v_x_3078_);
return v_res_3079_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7(lean_object* v_x_3080_, lean_object* v_prec_3081_){
_start:
{
lean_object* v___x_3082_; 
v___x_3082_ = l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg(v_x_3080_);
return v___x_3082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___boxed(lean_object* v_x_3083_, lean_object* v_prec_3084_){
_start:
{
lean_object* v_res_3085_; 
v_res_3085_ = l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7(v_x_3083_, v_prec_3084_);
lean_dec(v_prec_3084_);
return v_res_3085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10(lean_object* v_x_3086_, lean_object* v_prec_3087_){
_start:
{
lean_object* v___x_3088_; 
v___x_3088_ = l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___redArg(v_x_3086_);
return v___x_3088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10___boxed(lean_object* v_x_3089_, lean_object* v_prec_3090_){
_start:
{
lean_object* v_res_3091_; 
v_res_3091_ = l_Lean_Doc_instReprDescItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__4_spec__10(v_x_3089_, v_prec_3090_);
lean_dec(v_prec_3090_);
return v_res_3091_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24(lean_object* v_x_3092_, lean_object* v_x_3093_){
_start:
{
lean_object* v___x_3094_; 
v___x_3094_ = l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___redArg(v_x_3092_);
return v___x_3094_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24___boxed(lean_object* v_x_3095_, lean_object* v_x_3096_){
_start:
{
lean_object* v_res_3097_; 
v_res_3097_ = l_Option_repr___at___00Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18_spec__24(v_x_3095_, v_x_3096_);
lean_dec(v_x_3096_);
lean_dec(v_x_3095_);
return v_res_3097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18(lean_object* v_x_3098_, lean_object* v_prec_3099_){
_start:
{
lean_object* v___x_3100_; 
v___x_3100_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___redArg(v_x_3098_);
return v___x_3100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18___boxed(lean_object* v_x_3101_, lean_object* v_prec_3102_){
_start:
{
lean_object* v_res_3103_; 
v_res_3103_ = l_Lean_Doc_instReprPart_repr___at___00Prod_reprTuple___at___00Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3_spec__10_spec__18(v_x_3101_, v_prec_3102_);
lean_dec(v_prec_3102_);
return v_res_3103_;
}
}
LEAN_EXPORT uint8_t l_Lean_VersoModuleDocs_Snippet_canNestIn(lean_object* v_level_3106_, lean_object* v_snippet_3107_){
_start:
{
lean_object* v_sections_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; uint8_t v___x_3111_; 
v_sections_3108_ = lean_ctor_get(v_snippet_3107_, 1);
v___x_3109_ = lean_unsigned_to_nat(0u);
v___x_3110_ = lean_array_get_size(v_sections_3108_);
v___x_3111_ = lean_nat_dec_lt(v___x_3109_, v___x_3110_);
if (v___x_3111_ == 0)
{
uint8_t v___x_3112_; 
v___x_3112_ = 1;
return v___x_3112_;
}
else
{
lean_object* v___x_3113_; lean_object* v_fst_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; uint8_t v___x_3117_; 
v___x_3113_ = lean_array_fget_borrowed(v_sections_3108_, v___x_3109_);
v_fst_3114_ = lean_ctor_get(v___x_3113_, 0);
v___x_3115_ = lean_unsigned_to_nat(1u);
v___x_3116_ = lean_nat_add(v_level_3106_, v___x_3115_);
v___x_3117_ = lean_nat_dec_le(v_fst_3114_, v___x_3116_);
lean_dec(v___x_3116_);
return v___x_3117_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_canNestIn___boxed(lean_object* v_level_3118_, lean_object* v_snippet_3119_){
_start:
{
uint8_t v_res_3120_; lean_object* v_r_3121_; 
v_res_3120_ = l_Lean_VersoModuleDocs_Snippet_canNestIn(v_level_3118_, v_snippet_3119_);
lean_dec_ref(v_snippet_3119_);
lean_dec(v_level_3118_);
v_r_3121_ = lean_box(v_res_3120_);
return v_r_3121_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_terminalNesting(lean_object* v_snippet_3122_){
_start:
{
lean_object* v_sections_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; uint8_t v___x_3127_; 
v_sections_3123_ = lean_ctor_get(v_snippet_3122_, 1);
v___x_3124_ = lean_array_get_size(v_sections_3123_);
v___x_3125_ = lean_unsigned_to_nat(1u);
v___x_3126_ = lean_nat_sub(v___x_3124_, v___x_3125_);
v___x_3127_ = lean_nat_dec_lt(v___x_3126_, v___x_3124_);
if (v___x_3127_ == 0)
{
lean_object* v___x_3128_; 
lean_dec(v___x_3126_);
v___x_3128_ = lean_box(0);
return v___x_3128_;
}
else
{
lean_object* v___x_3129_; lean_object* v_fst_3130_; lean_object* v___x_3131_; 
v___x_3129_ = lean_array_fget_borrowed(v_sections_3123_, v___x_3126_);
lean_dec(v___x_3126_);
v_fst_3130_ = lean_ctor_get(v___x_3129_, 0);
lean_inc(v_fst_3130_);
v___x_3131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3131_, 0, v_fst_3130_);
return v___x_3131_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_terminalNesting___boxed(lean_object* v_snippet_3132_){
_start:
{
lean_object* v_res_3133_; 
v_res_3133_ = l_Lean_VersoModuleDocs_Snippet_terminalNesting(v_snippet_3132_);
lean_dec_ref(v_snippet_3132_);
return v_res_3133_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_addBlock(lean_object* v_snippet_3134_, lean_object* v_block_3135_){
_start:
{
lean_object* v_text_3136_; lean_object* v_sections_3137_; lean_object* v_declarationRange_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; uint8_t v___x_3141_; 
v_text_3136_ = lean_ctor_get(v_snippet_3134_, 0);
v_sections_3137_ = lean_ctor_get(v_snippet_3134_, 1);
v_declarationRange_3138_ = lean_ctor_get(v_snippet_3134_, 2);
v___x_3139_ = lean_array_get_size(v_sections_3137_);
v___x_3140_ = lean_unsigned_to_nat(0u);
v___x_3141_ = lean_nat_dec_eq(v___x_3139_, v___x_3140_);
if (v___x_3141_ == 0)
{
lean_object* v___x_3142_; lean_object* v___x_3143_; uint8_t v___x_3144_; 
v___x_3142_ = lean_unsigned_to_nat(1u);
v___x_3143_ = lean_nat_sub(v___x_3139_, v___x_3142_);
v___x_3144_ = lean_nat_dec_lt(v___x_3143_, v___x_3139_);
if (v___x_3144_ == 0)
{
lean_dec(v___x_3143_);
lean_dec_ref(v_block_3135_);
return v_snippet_3134_;
}
else
{
lean_object* v___x_3146_; uint8_t v_isShared_3147_; uint8_t v_isSharedCheck_3188_; 
lean_inc_ref(v_declarationRange_3138_);
lean_inc_ref(v_sections_3137_);
lean_inc_ref(v_text_3136_);
v_isSharedCheck_3188_ = !lean_is_exclusive(v_snippet_3134_);
if (v_isSharedCheck_3188_ == 0)
{
lean_object* v_unused_3189_; lean_object* v_unused_3190_; lean_object* v_unused_3191_; 
v_unused_3189_ = lean_ctor_get(v_snippet_3134_, 2);
lean_dec(v_unused_3189_);
v_unused_3190_ = lean_ctor_get(v_snippet_3134_, 1);
lean_dec(v_unused_3190_);
v_unused_3191_ = lean_ctor_get(v_snippet_3134_, 0);
lean_dec(v_unused_3191_);
v___x_3146_ = v_snippet_3134_;
v_isShared_3147_ = v_isSharedCheck_3188_;
goto v_resetjp_3145_;
}
else
{
lean_dec(v_snippet_3134_);
v___x_3146_ = lean_box(0);
v_isShared_3147_ = v_isSharedCheck_3188_;
goto v_resetjp_3145_;
}
v_resetjp_3145_:
{
lean_object* v_v_3148_; lean_object* v_snd_3149_; lean_object* v_snd_3150_; lean_object* v_fst_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3186_; 
v_v_3148_ = lean_array_fget(v_sections_3137_, v___x_3143_);
v_snd_3149_ = lean_ctor_get(v_v_3148_, 1);
lean_inc(v_snd_3149_);
v_snd_3150_ = lean_ctor_get(v_snd_3149_, 1);
lean_inc(v_snd_3150_);
v_fst_3151_ = lean_ctor_get(v_v_3148_, 0);
v_isSharedCheck_3186_ = !lean_is_exclusive(v_v_3148_);
if (v_isSharedCheck_3186_ == 0)
{
lean_object* v_unused_3187_; 
v_unused_3187_ = lean_ctor_get(v_v_3148_, 1);
lean_dec(v_unused_3187_);
v___x_3153_ = v_v_3148_;
v_isShared_3154_ = v_isSharedCheck_3186_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_fst_3151_);
lean_dec(v_v_3148_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3186_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
lean_object* v_fst_3155_; lean_object* v___x_3157_; uint8_t v_isShared_3158_; uint8_t v_isSharedCheck_3184_; 
v_fst_3155_ = lean_ctor_get(v_snd_3149_, 0);
v_isSharedCheck_3184_ = !lean_is_exclusive(v_snd_3149_);
if (v_isSharedCheck_3184_ == 0)
{
lean_object* v_unused_3185_; 
v_unused_3185_ = lean_ctor_get(v_snd_3149_, 1);
lean_dec(v_unused_3185_);
v___x_3157_ = v_snd_3149_;
v_isShared_3158_ = v_isSharedCheck_3184_;
goto v_resetjp_3156_;
}
else
{
lean_inc(v_fst_3155_);
lean_dec(v_snd_3149_);
v___x_3157_ = lean_box(0);
v_isShared_3158_ = v_isSharedCheck_3184_;
goto v_resetjp_3156_;
}
v_resetjp_3156_:
{
lean_object* v_title_3159_; lean_object* v_titleString_3160_; lean_object* v_metadata_3161_; lean_object* v_content_3162_; lean_object* v_subParts_3163_; lean_object* v___x_3165_; uint8_t v_isShared_3166_; uint8_t v_isSharedCheck_3183_; 
v_title_3159_ = lean_ctor_get(v_snd_3150_, 0);
v_titleString_3160_ = lean_ctor_get(v_snd_3150_, 1);
v_metadata_3161_ = lean_ctor_get(v_snd_3150_, 2);
v_content_3162_ = lean_ctor_get(v_snd_3150_, 3);
v_subParts_3163_ = lean_ctor_get(v_snd_3150_, 4);
v_isSharedCheck_3183_ = !lean_is_exclusive(v_snd_3150_);
if (v_isSharedCheck_3183_ == 0)
{
v___x_3165_ = v_snd_3150_;
v_isShared_3166_ = v_isSharedCheck_3183_;
goto v_resetjp_3164_;
}
else
{
lean_inc(v_subParts_3163_);
lean_inc(v_content_3162_);
lean_inc(v_metadata_3161_);
lean_inc(v_titleString_3160_);
lean_inc(v_title_3159_);
lean_dec(v_snd_3150_);
v___x_3165_ = lean_box(0);
v_isShared_3166_ = v_isSharedCheck_3183_;
goto v_resetjp_3164_;
}
v_resetjp_3164_:
{
lean_object* v___x_3167_; lean_object* v_xs_x27_3168_; lean_object* v___x_3169_; lean_object* v___x_3171_; 
v___x_3167_ = lean_box(0);
v_xs_x27_3168_ = lean_array_fset(v_sections_3137_, v___x_3143_, v___x_3167_);
v___x_3169_ = lean_array_push(v_content_3162_, v_block_3135_);
if (v_isShared_3166_ == 0)
{
lean_ctor_set(v___x_3165_, 3, v___x_3169_);
v___x_3171_ = v___x_3165_;
goto v_reusejp_3170_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v_title_3159_);
lean_ctor_set(v_reuseFailAlloc_3182_, 1, v_titleString_3160_);
lean_ctor_set(v_reuseFailAlloc_3182_, 2, v_metadata_3161_);
lean_ctor_set(v_reuseFailAlloc_3182_, 3, v___x_3169_);
lean_ctor_set(v_reuseFailAlloc_3182_, 4, v_subParts_3163_);
v___x_3171_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3170_;
}
v_reusejp_3170_:
{
lean_object* v___x_3173_; 
if (v_isShared_3158_ == 0)
{
lean_ctor_set(v___x_3157_, 1, v___x_3171_);
v___x_3173_ = v___x_3157_;
goto v_reusejp_3172_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v_fst_3155_);
lean_ctor_set(v_reuseFailAlloc_3181_, 1, v___x_3171_);
v___x_3173_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3172_;
}
v_reusejp_3172_:
{
lean_object* v___x_3175_; 
if (v_isShared_3154_ == 0)
{
lean_ctor_set(v___x_3153_, 1, v___x_3173_);
v___x_3175_ = v___x_3153_;
goto v_reusejp_3174_;
}
else
{
lean_object* v_reuseFailAlloc_3180_; 
v_reuseFailAlloc_3180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3180_, 0, v_fst_3151_);
lean_ctor_set(v_reuseFailAlloc_3180_, 1, v___x_3173_);
v___x_3175_ = v_reuseFailAlloc_3180_;
goto v_reusejp_3174_;
}
v_reusejp_3174_:
{
lean_object* v___x_3176_; lean_object* v___x_3178_; 
v___x_3176_ = lean_array_fset(v_xs_x27_3168_, v___x_3143_, v___x_3175_);
lean_dec(v___x_3143_);
if (v_isShared_3147_ == 0)
{
lean_ctor_set(v___x_3146_, 1, v___x_3176_);
v___x_3178_ = v___x_3146_;
goto v_reusejp_3177_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v_text_3136_);
lean_ctor_set(v_reuseFailAlloc_3179_, 1, v___x_3176_);
lean_ctor_set(v_reuseFailAlloc_3179_, 2, v_declarationRange_3138_);
v___x_3178_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3177_;
}
v_reusejp_3177_:
{
return v___x_3178_;
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
else
{
lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3199_; 
lean_inc_ref(v_declarationRange_3138_);
lean_inc_ref(v_sections_3137_);
lean_inc_ref(v_text_3136_);
v_isSharedCheck_3199_ = !lean_is_exclusive(v_snippet_3134_);
if (v_isSharedCheck_3199_ == 0)
{
lean_object* v_unused_3200_; lean_object* v_unused_3201_; lean_object* v_unused_3202_; 
v_unused_3200_ = lean_ctor_get(v_snippet_3134_, 2);
lean_dec(v_unused_3200_);
v_unused_3201_ = lean_ctor_get(v_snippet_3134_, 1);
lean_dec(v_unused_3201_);
v_unused_3202_ = lean_ctor_get(v_snippet_3134_, 0);
lean_dec(v_unused_3202_);
v___x_3193_ = v_snippet_3134_;
v_isShared_3194_ = v_isSharedCheck_3199_;
goto v_resetjp_3192_;
}
else
{
lean_dec(v_snippet_3134_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3199_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v___x_3195_; lean_object* v___x_3197_; 
v___x_3195_ = lean_array_push(v_text_3136_, v_block_3135_);
if (v_isShared_3194_ == 0)
{
lean_ctor_set(v___x_3193_, 0, v___x_3195_);
v___x_3197_ = v___x_3193_;
goto v_reusejp_3196_;
}
else
{
lean_object* v_reuseFailAlloc_3198_; 
v_reuseFailAlloc_3198_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3198_, 0, v___x_3195_);
lean_ctor_set(v_reuseFailAlloc_3198_, 1, v_sections_3137_);
lean_ctor_set(v_reuseFailAlloc_3198_, 2, v_declarationRange_3138_);
v___x_3197_ = v_reuseFailAlloc_3198_;
goto v_reusejp_3196_;
}
v_reusejp_3196_:
{
return v___x_3197_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_Snippet_addPart(lean_object* v_snippet_3203_, lean_object* v_level_3204_, lean_object* v_range_3205_, lean_object* v_part_3206_){
_start:
{
lean_object* v_text_3207_; lean_object* v_sections_3208_; lean_object* v_declarationRange_3209_; lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3219_; 
v_text_3207_ = lean_ctor_get(v_snippet_3203_, 0);
v_sections_3208_ = lean_ctor_get(v_snippet_3203_, 1);
v_declarationRange_3209_ = lean_ctor_get(v_snippet_3203_, 2);
v_isSharedCheck_3219_ = !lean_is_exclusive(v_snippet_3203_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3211_ = v_snippet_3203_;
v_isShared_3212_ = v_isSharedCheck_3219_;
goto v_resetjp_3210_;
}
else
{
lean_inc(v_declarationRange_3209_);
lean_inc(v_sections_3208_);
lean_inc(v_text_3207_);
lean_dec(v_snippet_3203_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3219_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3217_; 
v___x_3213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3213_, 0, v_range_3205_);
lean_ctor_set(v___x_3213_, 1, v_part_3206_);
v___x_3214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3214_, 0, v_level_3204_);
lean_ctor_set(v___x_3214_, 1, v___x_3213_);
v___x_3215_ = lean_array_push(v_sections_3208_, v___x_3214_);
if (v_isShared_3212_ == 0)
{
lean_ctor_set(v___x_3211_, 1, v___x_3215_);
v___x_3217_ = v___x_3211_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v_text_3207_);
lean_ctor_set(v_reuseFailAlloc_3218_, 1, v___x_3215_);
lean_ctor_set(v_reuseFailAlloc_3218_, 2, v_declarationRange_3209_);
v___x_3217_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
return v___x_3217_;
}
}
}
}
static lean_object* _init_l_Lean_instInhabitedVersoModuleDocs_default___closed__0(void){
_start:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3220_ = lean_unsigned_to_nat(32u);
v___x_3221_ = lean_mk_empty_array_with_capacity(v___x_3220_);
v___x_3222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3221_);
return v___x_3222_;
}
}
static lean_object* _init_l_Lean_instInhabitedVersoModuleDocs_default___closed__1(void){
_start:
{
size_t v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; 
v___x_3223_ = ((size_t)5ULL);
v___x_3224_ = lean_unsigned_to_nat(0u);
v___x_3225_ = lean_unsigned_to_nat(32u);
v___x_3226_ = lean_mk_empty_array_with_capacity(v___x_3225_);
v___x_3227_ = lean_obj_once(&l_Lean_instInhabitedVersoModuleDocs_default___closed__0, &l_Lean_instInhabitedVersoModuleDocs_default___closed__0_once, _init_l_Lean_instInhabitedVersoModuleDocs_default___closed__0);
v___x_3228_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3228_, 0, v___x_3227_);
lean_ctor_set(v___x_3228_, 1, v___x_3226_);
lean_ctor_set(v___x_3228_, 2, v___x_3224_);
lean_ctor_set(v___x_3228_, 3, v___x_3224_);
lean_ctor_set_usize(v___x_3228_, 4, v___x_3223_);
return v___x_3228_;
}
}
static lean_object* _init_l_Lean_instInhabitedVersoModuleDocs_default(void){
_start:
{
lean_object* v___x_3229_; 
v___x_3229_ = lean_obj_once(&l_Lean_instInhabitedVersoModuleDocs_default___closed__1, &l_Lean_instInhabitedVersoModuleDocs_default___closed__1_once, _init_l_Lean_instInhabitedVersoModuleDocs_default___closed__1);
return v___x_3229_;
}
}
static lean_object* _init_l_Lean_instInhabitedVersoModuleDocs(void){
_start:
{
lean_object* v___x_3230_; 
v___x_3230_ = l_Lean_instInhabitedVersoModuleDocs_default;
return v___x_3230_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___redArg(lean_object* v_as_3231_, lean_object* v_i_3232_){
_start:
{
lean_object* v_zero_3233_; uint8_t v_isZero_3234_; 
v_zero_3233_ = lean_unsigned_to_nat(0u);
v_isZero_3234_ = lean_nat_dec_eq(v_i_3232_, v_zero_3233_);
if (v_isZero_3234_ == 1)
{
lean_object* v___x_3235_; 
lean_dec(v_i_3232_);
v___x_3235_ = lean_box(0);
return v___x_3235_;
}
else
{
lean_object* v_one_3236_; lean_object* v_n_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; 
v_one_3236_ = lean_unsigned_to_nat(1u);
v_n_3237_ = lean_nat_sub(v_i_3232_, v_one_3236_);
lean_dec(v_i_3232_);
v___x_3238_ = lean_array_fget_borrowed(v_as_3231_, v_n_3237_);
v___x_3239_ = l_Lean_VersoModuleDocs_Snippet_terminalNesting(v___x_3238_);
if (lean_obj_tag(v___x_3239_) == 0)
{
v_i_3232_ = v_n_3237_;
goto _start;
}
else
{
lean_dec(v_n_3237_);
return v___x_3239_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___redArg___boxed(lean_object* v_as_3241_, lean_object* v_i_3242_){
_start:
{
lean_object* v_res_3243_; 
v_res_3243_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___redArg(v_as_3241_, v_i_3242_);
lean_dec_ref(v_as_3241_);
return v_res_3243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2___redArg(lean_object* v_as_3244_, lean_object* v_i_3245_){
_start:
{
lean_object* v_zero_3246_; uint8_t v_isZero_3247_; 
v_zero_3246_ = lean_unsigned_to_nat(0u);
v_isZero_3247_ = lean_nat_dec_eq(v_i_3245_, v_zero_3246_);
if (v_isZero_3247_ == 1)
{
lean_object* v___x_3248_; 
lean_dec(v_i_3245_);
v___x_3248_ = lean_box(0);
return v___x_3248_;
}
else
{
lean_object* v_one_3249_; lean_object* v_n_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; 
v_one_3249_ = lean_unsigned_to_nat(1u);
v_n_3250_ = lean_nat_sub(v_i_3245_, v_one_3249_);
lean_dec(v_i_3245_);
v___x_3251_ = lean_array_fget_borrowed(v_as_3244_, v_n_3250_);
v___x_3252_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1(v___x_3251_);
if (lean_obj_tag(v___x_3252_) == 0)
{
v_i_3245_ = v_n_3250_;
goto _start;
}
else
{
lean_dec(v_n_3250_);
return v___x_3252_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1(lean_object* v_x_3254_){
_start:
{
if (lean_obj_tag(v_x_3254_) == 0)
{
lean_object* v_cs_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; 
v_cs_3255_ = lean_ctor_get(v_x_3254_, 0);
v___x_3256_ = lean_array_get_size(v_cs_3255_);
v___x_3257_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2___redArg(v_cs_3255_, v___x_3256_);
return v___x_3257_;
}
else
{
lean_object* v_vs_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; 
v_vs_3258_ = lean_ctor_get(v_x_3254_, 0);
v___x_3259_ = lean_array_get_size(v_vs_3258_);
v___x_3260_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___redArg(v_vs_3258_, v___x_3259_);
return v___x_3260_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1___boxed(lean_object* v_x_3261_){
_start:
{
lean_object* v_res_3262_; 
v_res_3262_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1(v_x_3261_);
lean_dec_ref(v_x_3261_);
return v_res_3262_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_as_3263_, lean_object* v_i_3264_){
_start:
{
lean_object* v_res_3265_; 
v_res_3265_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2___redArg(v_as_3263_, v_i_3264_);
lean_dec_ref(v_as_3263_);
return v_res_3265_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0(lean_object* v_t_3266_){
_start:
{
lean_object* v_root_3267_; lean_object* v_tail_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; 
v_root_3267_ = lean_ctor_get(v_t_3266_, 0);
v_tail_3268_ = lean_ctor_get(v_t_3266_, 1);
v___x_3269_ = lean_array_get_size(v_tail_3268_);
v___x_3270_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___redArg(v_tail_3268_, v___x_3269_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_object* v___x_3271_; 
v___x_3271_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1(v_root_3267_);
return v___x_3271_;
}
else
{
return v___x_3270_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0___boxed(lean_object* v_t_3272_){
_start:
{
lean_object* v_res_3273_; 
v_res_3273_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0(v_t_3272_);
lean_dec_ref(v_t_3272_);
return v_res_3273_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_terminalNesting(lean_object* v_x_3274_){
_start:
{
lean_object* v___x_3275_; 
v___x_3275_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0(v_x_3274_);
return v___x_3275_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_terminalNesting___boxed(lean_object* v_x_3276_){
_start:
{
lean_object* v_res_3277_; 
v_res_3277_ = l_Lean_VersoModuleDocs_terminalNesting(v_x_3276_);
lean_dec_ref(v_x_3276_);
return v_res_3277_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0(lean_object* v_as_3278_, lean_object* v_i_3279_, lean_object* v_a_3280_){
_start:
{
lean_object* v___x_3281_; 
v___x_3281_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___redArg(v_as_3278_, v_i_3279_);
return v___x_3281_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0___boxed(lean_object* v_as_3282_, lean_object* v_i_3283_, lean_object* v_a_3284_){
_start:
{
lean_object* v_res_3285_; 
v_res_3285_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__0(v_as_3282_, v_i_3283_, v_a_3284_);
lean_dec_ref(v_as_3282_);
return v_res_3285_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2(lean_object* v_as_3286_, lean_object* v_i_3287_, lean_object* v_a_3288_){
_start:
{
lean_object* v___x_3289_; 
v___x_3289_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2___redArg(v_as_3286_, v_i_3287_);
return v___x_3289_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2___boxed(lean_object* v_as_3290_, lean_object* v_i_3291_, lean_object* v_a_3292_){
_start:
{
lean_object* v_res_3293_; 
v_res_3293_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0_spec__1_spec__2(v_as_3290_, v_i_3291_, v_a_3292_);
lean_dec_ref(v_as_3290_);
return v_res_3293_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprVersoModuleDocs___lam__0(lean_object* v___x_3300_, lean_object* v_v_3301_, lean_object* v_x_3302_){
_start:
{
lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; uint8_t v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; 
v___x_3303_ = lean_obj_once(&l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3, &l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3_once, _init_l_Lean_Doc_instReprInline_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__2_spec__4___closed__3);
v___x_3304_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__11));
v___x_3305_ = lean_box(1);
v___x_3306_ = ((lean_object*)(l_Lean_instReprVersoModuleDocs___lam__0___closed__2));
v___x_3307_ = l_Lean_PersistentArray_toArray___redArg(v_v_3301_);
v___x_3308_ = l_Array_repr___redArg(v___x_3300_, v___x_3307_);
v___x_3309_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3309_, 0, v___x_3306_);
lean_ctor_set(v___x_3309_, 1, v___x_3308_);
v___x_3310_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3310_, 0, v___x_3303_);
lean_ctor_set(v___x_3310_, 1, v___x_3309_);
v___x_3311_ = 0;
v___x_3312_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3312_, 0, v___x_3310_);
lean_ctor_set_uint8(v___x_3312_, sizeof(void*)*1, v___x_3311_);
lean_inc_ref(v___x_3312_);
v___x_3313_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3313_, 0, v___x_3304_);
lean_ctor_set(v___x_3313_, 1, v___x_3312_);
v___x_3314_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3314_, 0, v___x_3313_);
lean_ctor_set(v___x_3314_, 1, v___x_3305_);
v___x_3315_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3315_, 0, v___x_3314_);
lean_ctor_set(v___x_3315_, 1, v___x_3312_);
v___x_3316_ = ((lean_object*)(l_Lean_Doc_instReprListItem_repr___at___00Array_repr___at___00Lean_Doc_instReprBlock_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__0_spec__0_spec__3_spec__7___redArg___closed__12));
v___x_3317_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3315_);
lean_ctor_set(v___x_3317_, 1, v___x_3316_);
v___x_3318_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3303_);
lean_ctor_set(v___x_3318_, 1, v___x_3317_);
v___x_3319_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3319_, 0, v___x_3318_);
lean_ctor_set_uint8(v___x_3319_, sizeof(void*)*1, v___x_3311_);
return v___x_3319_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprVersoModuleDocs___lam__0___boxed(lean_object* v___x_3320_, lean_object* v_v_3321_, lean_object* v_x_3322_){
_start:
{
lean_object* v_res_3323_; 
v_res_3323_ = l_Lean_instReprVersoModuleDocs___lam__0(v___x_3320_, v_v_3321_, v_x_3322_);
lean_dec(v_x_3322_);
lean_dec_ref(v_v_3321_);
return v_res_3323_;
}
}
LEAN_EXPORT uint8_t l_Lean_VersoModuleDocs_isEmpty(lean_object* v_docs_3327_){
_start:
{
uint8_t v___x_3328_; 
v___x_3328_ = l_Lean_PersistentArray_isEmpty___redArg(v_docs_3327_);
return v___x_3328_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_isEmpty___boxed(lean_object* v_docs_3329_){
_start:
{
uint8_t v_res_3330_; lean_object* v_r_3331_; 
v_res_3330_ = l_Lean_VersoModuleDocs_isEmpty(v_docs_3329_);
lean_dec_ref(v_docs_3329_);
v_r_3331_ = lean_box(v_res_3330_);
return v_r_3331_;
}
}
LEAN_EXPORT uint8_t l_Lean_VersoModuleDocs_canAdd(lean_object* v_docs_3332_, lean_object* v_snippet_3333_){
_start:
{
lean_object* v___x_3334_; 
v___x_3334_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0(v_docs_3332_);
if (lean_obj_tag(v___x_3334_) == 1)
{
lean_object* v_val_3335_; uint8_t v___x_3336_; 
v_val_3335_ = lean_ctor_get(v___x_3334_, 0);
lean_inc(v_val_3335_);
lean_dec_ref_known(v___x_3334_, 1);
v___x_3336_ = l_Lean_VersoModuleDocs_Snippet_canNestIn(v_val_3335_, v_snippet_3333_);
lean_dec(v_val_3335_);
return v___x_3336_;
}
else
{
uint8_t v___x_3337_; 
lean_dec(v___x_3334_);
v___x_3337_ = 1;
return v___x_3337_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_canAdd___boxed(lean_object* v_docs_3338_, lean_object* v_snippet_3339_){
_start:
{
uint8_t v_res_3340_; lean_object* v_r_3341_; 
v_res_3340_ = l_Lean_VersoModuleDocs_canAdd(v_docs_3338_, v_snippet_3339_);
lean_dec_ref(v_snippet_3339_);
lean_dec_ref(v_docs_3338_);
v_r_3341_ = lean_box(v_res_3340_);
return v_r_3341_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_add(lean_object* v_docs_3345_, lean_object* v_snippet_3346_){
_start:
{
uint8_t v___x_3347_; 
v___x_3347_ = l_Lean_VersoModuleDocs_canAdd(v_docs_3345_, v_snippet_3346_);
if (v___x_3347_ == 0)
{
lean_object* v___x_3348_; 
lean_dec_ref(v_snippet_3346_);
lean_dec_ref(v_docs_3345_);
v___x_3348_ = ((lean_object*)(l_Lean_VersoModuleDocs_add___closed__1));
return v___x_3348_;
}
else
{
lean_object* v___x_3349_; lean_object* v___x_3350_; 
v___x_3349_ = l_Lean_PersistentArray_push___redArg(v_docs_3345_, v_snippet_3346_);
v___x_3350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3350_, 0, v___x_3349_);
return v___x_3350_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_VersoModuleDocs_add_x21_spec__0(lean_object* v_msg_3351_){
_start:
{
lean_object* v___x_3352_; lean_object* v___x_3353_; 
v___x_3352_ = l_Lean_instInhabitedVersoModuleDocs_default;
v___x_3353_ = lean_panic_fn_borrowed(v___x_3352_, v_msg_3351_);
return v___x_3353_;
}
}
static lean_object* _init_l_Lean_VersoModuleDocs_add_x21___closed__2(void){
_start:
{
lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; 
v___x_3356_ = ((lean_object*)(l_Lean_VersoModuleDocs_add___closed__0));
v___x_3357_ = lean_unsigned_to_nat(4u);
v___x_3358_ = lean_unsigned_to_nat(367u);
v___x_3359_ = ((lean_object*)(l_Lean_VersoModuleDocs_add_x21___closed__1));
v___x_3360_ = ((lean_object*)(l_Lean_VersoModuleDocs_add_x21___closed__0));
v___x_3361_ = l_mkPanicMessageWithDecl(v___x_3360_, v___x_3359_, v___x_3358_, v___x_3357_, v___x_3356_);
return v___x_3361_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_add_x21(lean_object* v_docs_3362_, lean_object* v_snippet_3363_){
_start:
{
lean_object* v___x_3364_; 
v___x_3364_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0(v_docs_3362_);
if (lean_obj_tag(v___x_3364_) == 1)
{
lean_object* v_val_3365_; uint8_t v___x_3366_; 
v_val_3365_ = lean_ctor_get(v___x_3364_, 0);
lean_inc(v_val_3365_);
lean_dec_ref_known(v___x_3364_, 1);
v___x_3366_ = l_Lean_VersoModuleDocs_Snippet_canNestIn(v_val_3365_, v_snippet_3363_);
lean_dec(v_val_3365_);
if (v___x_3366_ == 0)
{
lean_object* v___x_3367_; lean_object* v___x_3368_; 
lean_dec_ref(v_snippet_3363_);
lean_dec_ref(v_docs_3362_);
v___x_3367_ = lean_obj_once(&l_Lean_VersoModuleDocs_add_x21___closed__2, &l_Lean_VersoModuleDocs_add_x21___closed__2_once, _init_l_Lean_VersoModuleDocs_add_x21___closed__2);
v___x_3368_ = l_panic___at___00Lean_VersoModuleDocs_add_x21_spec__0(v___x_3367_);
return v___x_3368_;
}
else
{
lean_object* v___x_3369_; 
v___x_3369_ = l_Lean_PersistentArray_push___redArg(v_docs_3362_, v_snippet_3363_);
return v___x_3369_;
}
}
else
{
lean_object* v___x_3370_; 
lean_dec(v___x_3364_);
v___x_3370_ = l_Lean_PersistentArray_push___redArg(v_docs_3362_, v_snippet_3363_);
return v___x_3370_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_level(lean_object* v_ctx_3371_){
_start:
{
lean_object* v_context_3372_; lean_object* v___x_3373_; 
v_context_3372_ = lean_ctor_get(v_ctx_3371_, 2);
v___x_3373_ = lean_array_get_size(v_context_3372_);
return v___x_3373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_level___boxed(lean_object* v_ctx_3374_){
_start:
{
lean_object* v_res_3375_; 
v_res_3375_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_level(v_ctx_3374_);
lean_dec_ref(v_ctx_3374_);
return v_res_3375_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close(lean_object* v_ctx_3379_){
_start:
{
lean_object* v_content_3380_; lean_object* v_priorParts_3381_; lean_object* v_context_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3405_; 
v_content_3380_ = lean_ctor_get(v_ctx_3379_, 0);
v_priorParts_3381_ = lean_ctor_get(v_ctx_3379_, 1);
v_context_3382_ = lean_ctor_get(v_ctx_3379_, 2);
v_isSharedCheck_3405_ = !lean_is_exclusive(v_ctx_3379_);
if (v_isSharedCheck_3405_ == 0)
{
v___x_3384_ = v_ctx_3379_;
v_isShared_3385_ = v_isSharedCheck_3405_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_context_3382_);
lean_inc(v_priorParts_3381_);
lean_inc(v_content_3380_);
lean_dec(v_ctx_3379_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3405_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
lean_object* v___x_3386_; lean_object* v___x_3387_; uint8_t v___x_3388_; 
v___x_3386_ = lean_array_get_size(v_context_3382_);
v___x_3387_ = lean_unsigned_to_nat(0u);
v___x_3388_ = lean_nat_dec_eq(v___x_3386_, v___x_3387_);
if (v___x_3388_ == 0)
{
lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v_last_3391_; lean_object* v_content_3392_; lean_object* v_priorParts_3393_; lean_object* v_titleString_3394_; lean_object* v_title_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3401_; 
v___x_3389_ = lean_unsigned_to_nat(1u);
v___x_3390_ = lean_nat_sub(v___x_3386_, v___x_3389_);
v_last_3391_ = lean_array_fget_borrowed(v_context_3382_, v___x_3390_);
lean_dec(v___x_3390_);
v_content_3392_ = lean_ctor_get(v_last_3391_, 0);
lean_inc_ref(v_content_3392_);
v_priorParts_3393_ = lean_ctor_get(v_last_3391_, 1);
v_titleString_3394_ = lean_ctor_get(v_last_3391_, 2);
v_title_3395_ = lean_ctor_get(v_last_3391_, 3);
v___x_3396_ = lean_box(0);
lean_inc_ref(v_titleString_3394_);
lean_inc_ref(v_title_3395_);
v___x_3397_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3397_, 0, v_title_3395_);
lean_ctor_set(v___x_3397_, 1, v_titleString_3394_);
lean_ctor_set(v___x_3397_, 2, v___x_3396_);
lean_ctor_set(v___x_3397_, 3, v_content_3380_);
lean_ctor_set(v___x_3397_, 4, v_priorParts_3381_);
lean_inc_ref(v_priorParts_3393_);
v___x_3398_ = lean_array_push(v_priorParts_3393_, v___x_3397_);
v___x_3399_ = lean_array_pop(v_context_3382_);
if (v_isShared_3385_ == 0)
{
lean_ctor_set(v___x_3384_, 2, v___x_3399_);
lean_ctor_set(v___x_3384_, 1, v___x_3398_);
lean_ctor_set(v___x_3384_, 0, v_content_3392_);
v___x_3401_ = v___x_3384_;
goto v_reusejp_3400_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v_content_3392_);
lean_ctor_set(v_reuseFailAlloc_3403_, 1, v___x_3398_);
lean_ctor_set(v_reuseFailAlloc_3403_, 2, v___x_3399_);
v___x_3401_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3400_;
}
v_reusejp_3400_:
{
lean_object* v___x_3402_; 
v___x_3402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3402_, 0, v___x_3401_);
return v___x_3402_;
}
}
else
{
lean_object* v___x_3404_; 
lean_del_object(v___x_3384_);
lean_dec_ref(v_context_3382_);
lean_dec_ref(v_priorParts_3381_);
lean_dec_ref(v_content_3380_);
v___x_3404_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close___closed__1));
return v___x_3404_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_closeAll(lean_object* v_ctx_3406_){
_start:
{
lean_object* v_context_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; uint8_t v___x_3410_; 
v_context_3407_ = lean_ctor_get(v_ctx_3406_, 2);
v___x_3408_ = lean_array_get_size(v_context_3407_);
v___x_3409_ = lean_unsigned_to_nat(0u);
v___x_3410_ = lean_nat_dec_eq(v___x_3408_, v___x_3409_);
if (v___x_3410_ == 0)
{
lean_object* v___x_3411_; 
v___x_3411_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close(v_ctx_3406_);
if (lean_obj_tag(v___x_3411_) == 0)
{
return v___x_3411_;
}
else
{
lean_object* v_a_3412_; 
v_a_3412_ = lean_ctor_get(v___x_3411_, 0);
lean_inc(v_a_3412_);
lean_dec_ref_known(v___x_3411_, 1);
v_ctx_3406_ = v_a_3412_;
goto _start;
}
}
else
{
lean_object* v___x_3414_; 
v___x_3414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3414_, 0, v_ctx_3406_);
return v___x_3414_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart(lean_object* v_ctx_3417_, lean_object* v_partLevel_3418_, lean_object* v_part_3419_){
_start:
{
lean_object* v___x_3420_; uint8_t v___x_3421_; 
v___x_3420_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_level(v_ctx_3417_);
v___x_3421_ = lean_nat_dec_lt(v___x_3420_, v_partLevel_3418_);
if (v___x_3421_ == 0)
{
uint8_t v___x_3422_; 
v___x_3422_ = lean_nat_dec_eq(v_partLevel_3418_, v___x_3420_);
lean_dec(v___x_3420_);
if (v___x_3422_ == 0)
{
lean_object* v___x_3423_; 
v___x_3423_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_close(v_ctx_3417_);
if (lean_obj_tag(v___x_3423_) == 0)
{
lean_dec_ref(v_part_3419_);
lean_dec(v_partLevel_3418_);
return v___x_3423_;
}
else
{
lean_object* v_a_3424_; 
v_a_3424_ = lean_ctor_get(v___x_3423_, 0);
lean_inc(v_a_3424_);
lean_dec_ref_known(v___x_3423_, 1);
v_ctx_3417_ = v_a_3424_;
goto _start;
}
}
else
{
lean_object* v_content_3426_; lean_object* v_priorParts_3427_; lean_object* v_context_3428_; lean_object* v___x_3430_; uint8_t v_isShared_3431_; uint8_t v_isSharedCheck_3437_; 
lean_dec(v_partLevel_3418_);
v_content_3426_ = lean_ctor_get(v_ctx_3417_, 0);
v_priorParts_3427_ = lean_ctor_get(v_ctx_3417_, 1);
v_context_3428_ = lean_ctor_get(v_ctx_3417_, 2);
v_isSharedCheck_3437_ = !lean_is_exclusive(v_ctx_3417_);
if (v_isSharedCheck_3437_ == 0)
{
v___x_3430_ = v_ctx_3417_;
v_isShared_3431_ = v_isSharedCheck_3437_;
goto v_resetjp_3429_;
}
else
{
lean_inc(v_context_3428_);
lean_inc(v_priorParts_3427_);
lean_inc(v_content_3426_);
lean_dec(v_ctx_3417_);
v___x_3430_ = lean_box(0);
v_isShared_3431_ = v_isSharedCheck_3437_;
goto v_resetjp_3429_;
}
v_resetjp_3429_:
{
lean_object* v___x_3432_; lean_object* v___x_3434_; 
v___x_3432_ = lean_array_push(v_priorParts_3427_, v_part_3419_);
if (v_isShared_3431_ == 0)
{
lean_ctor_set(v___x_3430_, 1, v___x_3432_);
v___x_3434_ = v___x_3430_;
goto v_reusejp_3433_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v_content_3426_);
lean_ctor_set(v_reuseFailAlloc_3436_, 1, v___x_3432_);
lean_ctor_set(v_reuseFailAlloc_3436_, 2, v_context_3428_);
v___x_3434_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3433_;
}
v_reusejp_3433_:
{
lean_object* v___x_3435_; 
v___x_3435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3435_, 0, v___x_3434_);
return v___x_3435_;
}
}
}
}
else
{
lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
lean_dec_ref(v_part_3419_);
lean_dec_ref(v_ctx_3417_);
v___x_3438_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__0));
v___x_3439_ = l_Nat_reprFast(v___x_3420_);
v___x_3440_ = lean_string_append(v___x_3438_, v___x_3439_);
lean_dec_ref(v___x_3439_);
v___x_3441_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart___closed__1));
v___x_3442_ = lean_string_append(v___x_3440_, v___x_3441_);
v___x_3443_ = l_Nat_reprFast(v_partLevel_3418_);
v___x_3444_ = lean_string_append(v___x_3442_, v___x_3443_);
lean_dec_ref(v___x_3443_);
v___x_3445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3445_, 0, v___x_3444_);
return v___x_3445_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks(lean_object* v_ctx_3449_, lean_object* v_blocks_3450_){
_start:
{
lean_object* v_content_3451_; lean_object* v_priorParts_3452_; lean_object* v_context_3453_; lean_object* v___x_3455_; uint8_t v_isShared_3456_; uint8_t v_isSharedCheck_3466_; 
v_content_3451_ = lean_ctor_get(v_ctx_3449_, 0);
v_priorParts_3452_ = lean_ctor_get(v_ctx_3449_, 1);
v_context_3453_ = lean_ctor_get(v_ctx_3449_, 2);
v_isSharedCheck_3466_ = !lean_is_exclusive(v_ctx_3449_);
if (v_isSharedCheck_3466_ == 0)
{
v___x_3455_ = v_ctx_3449_;
v_isShared_3456_ = v_isSharedCheck_3466_;
goto v_resetjp_3454_;
}
else
{
lean_inc(v_context_3453_);
lean_inc(v_priorParts_3452_);
lean_inc(v_content_3451_);
lean_dec(v_ctx_3449_);
v___x_3455_ = lean_box(0);
v_isShared_3456_ = v_isSharedCheck_3466_;
goto v_resetjp_3454_;
}
v_resetjp_3454_:
{
lean_object* v___x_3457_; lean_object* v___x_3458_; uint8_t v___x_3459_; 
v___x_3457_ = lean_array_get_size(v_priorParts_3452_);
v___x_3458_ = lean_unsigned_to_nat(0u);
v___x_3459_ = lean_nat_dec_eq(v___x_3457_, v___x_3458_);
if (v___x_3459_ == 0)
{
lean_object* v___x_3460_; 
lean_del_object(v___x_3455_);
lean_dec_ref(v_context_3453_);
lean_dec_ref(v_priorParts_3452_);
lean_dec_ref(v_content_3451_);
v___x_3460_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___closed__1));
return v___x_3460_;
}
else
{
lean_object* v___x_3461_; lean_object* v___x_3463_; 
v___x_3461_ = l_Array_append___redArg(v_content_3451_, v_blocks_3450_);
if (v_isShared_3456_ == 0)
{
lean_ctor_set(v___x_3455_, 0, v___x_3461_);
v___x_3463_ = v___x_3455_;
goto v_reusejp_3462_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v___x_3461_);
lean_ctor_set(v_reuseFailAlloc_3465_, 1, v_priorParts_3452_);
lean_ctor_set(v_reuseFailAlloc_3465_, 2, v_context_3453_);
v___x_3463_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3462_;
}
v_reusejp_3462_:
{
lean_object* v___x_3464_; 
v___x_3464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3464_, 0, v___x_3463_);
return v___x_3464_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks___boxed(lean_object* v_ctx_3467_, lean_object* v_blocks_3468_){
_start:
{
lean_object* v_res_3469_; 
v_res_3469_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks(v_ctx_3467_, v_blocks_3468_);
lean_dec_ref(v_blocks_3468_);
return v_res_3469_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet_spec__0(lean_object* v_as_3470_, size_t v_sz_3471_, size_t v_i_3472_, lean_object* v_b_3473_){
_start:
{
uint8_t v___x_3474_; 
v___x_3474_ = lean_usize_dec_lt(v_i_3472_, v_sz_3471_);
if (v___x_3474_ == 0)
{
lean_object* v___x_3475_; 
v___x_3475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3475_, 0, v_b_3473_);
return v___x_3475_;
}
else
{
lean_object* v_a_3476_; lean_object* v_snd_3477_; lean_object* v_fst_3478_; lean_object* v_snd_3479_; lean_object* v___x_3480_; 
v_a_3476_ = lean_array_uget_borrowed(v_as_3470_, v_i_3472_);
v_snd_3477_ = lean_ctor_get(v_a_3476_, 1);
v_fst_3478_ = lean_ctor_get(v_a_3476_, 0);
v_snd_3479_ = lean_ctor_get(v_snd_3477_, 1);
lean_inc(v_snd_3479_);
lean_inc(v_fst_3478_);
v___x_3480_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addPart(v_b_3473_, v_fst_3478_, v_snd_3479_);
if (lean_obj_tag(v___x_3480_) == 0)
{
return v___x_3480_;
}
else
{
lean_object* v_a_3481_; size_t v___x_3482_; size_t v___x_3483_; 
v_a_3481_ = lean_ctor_get(v___x_3480_, 0);
lean_inc(v_a_3481_);
lean_dec_ref_known(v___x_3480_, 1);
v___x_3482_ = ((size_t)1ULL);
v___x_3483_ = lean_usize_add(v_i_3472_, v___x_3482_);
v_i_3472_ = v___x_3483_;
v_b_3473_ = v_a_3481_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet_spec__0___boxed(lean_object* v_as_3485_, lean_object* v_sz_3486_, lean_object* v_i_3487_, lean_object* v_b_3488_){
_start:
{
size_t v_sz_boxed_3489_; size_t v_i_boxed_3490_; lean_object* v_res_3491_; 
v_sz_boxed_3489_ = lean_unbox_usize(v_sz_3486_);
lean_dec(v_sz_3486_);
v_i_boxed_3490_ = lean_unbox_usize(v_i_3487_);
lean_dec(v_i_3487_);
v_res_3491_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet_spec__0(v_as_3485_, v_sz_boxed_3489_, v_i_boxed_3490_, v_b_3488_);
lean_dec_ref(v_as_3485_);
return v_res_3491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(lean_object* v_ctx_3492_, lean_object* v_snippet_3493_){
_start:
{
lean_object* v_text_3494_; lean_object* v_sections_3495_; lean_object* v___x_3496_; 
v_text_3494_ = lean_ctor_get(v_snippet_3493_, 0);
v_sections_3495_ = lean_ctor_get(v_snippet_3493_, 1);
v___x_3496_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addBlocks(v_ctx_3492_, v_text_3494_);
if (lean_obj_tag(v___x_3496_) == 0)
{
return v___x_3496_;
}
else
{
lean_object* v_a_3497_; size_t v_sz_3498_; size_t v___x_3499_; lean_object* v___x_3500_; 
v_a_3497_ = lean_ctor_get(v___x_3496_, 0);
lean_inc(v_a_3497_);
lean_dec_ref_known(v___x_3496_, 1);
v_sz_3498_ = lean_array_size(v_sections_3495_);
v___x_3499_ = ((size_t)0ULL);
v___x_3500_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet_spec__0(v_sections_3495_, v_sz_3498_, v___x_3499_, v_a_3497_);
return v___x_3500_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet___boxed(lean_object* v_ctx_3501_, lean_object* v_snippet_3502_){
_start:
{
lean_object* v_res_3503_; 
v_res_3503_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(v_ctx_3501_, v_snippet_3502_);
lean_dec_ref(v_snippet_3502_);
return v_res_3503_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1_spec__4(lean_object* v_as_3504_, size_t v_sz_3505_, size_t v_i_3506_, lean_object* v_b_3507_){
_start:
{
uint8_t v___x_3508_; 
v___x_3508_ = lean_usize_dec_lt(v_i_3506_, v_sz_3505_);
if (v___x_3508_ == 0)
{
lean_object* v___x_3509_; 
v___x_3509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3509_, 0, v_b_3507_);
return v___x_3509_;
}
else
{
lean_object* v_snd_3510_; lean_object* v___x_3512_; uint8_t v_isShared_3513_; uint8_t v_isSharedCheck_3532_; 
v_snd_3510_ = lean_ctor_get(v_b_3507_, 1);
v_isSharedCheck_3532_ = !lean_is_exclusive(v_b_3507_);
if (v_isSharedCheck_3532_ == 0)
{
lean_object* v_unused_3533_; 
v_unused_3533_ = lean_ctor_get(v_b_3507_, 0);
lean_dec(v_unused_3533_);
v___x_3512_ = v_b_3507_;
v_isShared_3513_ = v_isSharedCheck_3532_;
goto v_resetjp_3511_;
}
else
{
lean_inc(v_snd_3510_);
lean_dec(v_b_3507_);
v___x_3512_ = lean_box(0);
v_isShared_3513_ = v_isSharedCheck_3532_;
goto v_resetjp_3511_;
}
v_resetjp_3511_:
{
lean_object* v_a_3514_; lean_object* v___x_3515_; 
v_a_3514_ = lean_array_uget_borrowed(v_as_3504_, v_i_3506_);
v___x_3515_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(v_snd_3510_, v_a_3514_);
if (lean_obj_tag(v___x_3515_) == 0)
{
lean_object* v_a_3516_; lean_object* v___x_3518_; uint8_t v_isShared_3519_; uint8_t v_isSharedCheck_3523_; 
lean_del_object(v___x_3512_);
v_a_3516_ = lean_ctor_get(v___x_3515_, 0);
v_isSharedCheck_3523_ = !lean_is_exclusive(v___x_3515_);
if (v_isSharedCheck_3523_ == 0)
{
v___x_3518_ = v___x_3515_;
v_isShared_3519_ = v_isSharedCheck_3523_;
goto v_resetjp_3517_;
}
else
{
lean_inc(v_a_3516_);
lean_dec(v___x_3515_);
v___x_3518_ = lean_box(0);
v_isShared_3519_ = v_isSharedCheck_3523_;
goto v_resetjp_3517_;
}
v_resetjp_3517_:
{
lean_object* v___x_3521_; 
if (v_isShared_3519_ == 0)
{
v___x_3521_ = v___x_3518_;
goto v_reusejp_3520_;
}
else
{
lean_object* v_reuseFailAlloc_3522_; 
v_reuseFailAlloc_3522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3522_, 0, v_a_3516_);
v___x_3521_ = v_reuseFailAlloc_3522_;
goto v_reusejp_3520_;
}
v_reusejp_3520_:
{
return v___x_3521_;
}
}
}
else
{
lean_object* v_a_3524_; lean_object* v___x_3525_; lean_object* v___x_3527_; 
v_a_3524_ = lean_ctor_get(v___x_3515_, 0);
lean_inc(v_a_3524_);
lean_dec_ref_known(v___x_3515_, 1);
v___x_3525_ = lean_box(0);
if (v_isShared_3513_ == 0)
{
lean_ctor_set(v___x_3512_, 1, v_a_3524_);
lean_ctor_set(v___x_3512_, 0, v___x_3525_);
v___x_3527_ = v___x_3512_;
goto v_reusejp_3526_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v___x_3525_);
lean_ctor_set(v_reuseFailAlloc_3531_, 1, v_a_3524_);
v___x_3527_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3526_;
}
v_reusejp_3526_:
{
size_t v___x_3528_; size_t v___x_3529_; 
v___x_3528_ = ((size_t)1ULL);
v___x_3529_ = lean_usize_add(v_i_3506_, v___x_3528_);
v_i_3506_ = v___x_3529_;
v_b_3507_ = v___x_3527_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1_spec__4___boxed(lean_object* v_as_3534_, lean_object* v_sz_3535_, lean_object* v_i_3536_, lean_object* v_b_3537_){
_start:
{
size_t v_sz_boxed_3538_; size_t v_i_boxed_3539_; lean_object* v_res_3540_; 
v_sz_boxed_3538_ = lean_unbox_usize(v_sz_3535_);
lean_dec(v_sz_3535_);
v_i_boxed_3539_ = lean_unbox_usize(v_i_3536_);
lean_dec(v_i_3536_);
v_res_3540_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1_spec__4(v_as_3534_, v_sz_boxed_3538_, v_i_boxed_3539_, v_b_3537_);
lean_dec_ref(v_as_3534_);
return v_res_3540_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1(lean_object* v_as_3541_, size_t v_sz_3542_, size_t v_i_3543_, lean_object* v_b_3544_){
_start:
{
uint8_t v___x_3545_; 
v___x_3545_ = lean_usize_dec_lt(v_i_3543_, v_sz_3542_);
if (v___x_3545_ == 0)
{
lean_object* v___x_3546_; 
v___x_3546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3546_, 0, v_b_3544_);
return v___x_3546_;
}
else
{
lean_object* v_snd_3547_; lean_object* v___x_3549_; uint8_t v_isShared_3550_; uint8_t v_isSharedCheck_3569_; 
v_snd_3547_ = lean_ctor_get(v_b_3544_, 1);
v_isSharedCheck_3569_ = !lean_is_exclusive(v_b_3544_);
if (v_isSharedCheck_3569_ == 0)
{
lean_object* v_unused_3570_; 
v_unused_3570_ = lean_ctor_get(v_b_3544_, 0);
lean_dec(v_unused_3570_);
v___x_3549_ = v_b_3544_;
v_isShared_3550_ = v_isSharedCheck_3569_;
goto v_resetjp_3548_;
}
else
{
lean_inc(v_snd_3547_);
lean_dec(v_b_3544_);
v___x_3549_ = lean_box(0);
v_isShared_3550_ = v_isSharedCheck_3569_;
goto v_resetjp_3548_;
}
v_resetjp_3548_:
{
lean_object* v_a_3551_; lean_object* v___x_3552_; 
v_a_3551_ = lean_array_uget_borrowed(v_as_3541_, v_i_3543_);
v___x_3552_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(v_snd_3547_, v_a_3551_);
if (lean_obj_tag(v___x_3552_) == 0)
{
lean_object* v_a_3553_; lean_object* v___x_3555_; uint8_t v_isShared_3556_; uint8_t v_isSharedCheck_3560_; 
lean_del_object(v___x_3549_);
v_a_3553_ = lean_ctor_get(v___x_3552_, 0);
v_isSharedCheck_3560_ = !lean_is_exclusive(v___x_3552_);
if (v_isSharedCheck_3560_ == 0)
{
v___x_3555_ = v___x_3552_;
v_isShared_3556_ = v_isSharedCheck_3560_;
goto v_resetjp_3554_;
}
else
{
lean_inc(v_a_3553_);
lean_dec(v___x_3552_);
v___x_3555_ = lean_box(0);
v_isShared_3556_ = v_isSharedCheck_3560_;
goto v_resetjp_3554_;
}
v_resetjp_3554_:
{
lean_object* v___x_3558_; 
if (v_isShared_3556_ == 0)
{
v___x_3558_ = v___x_3555_;
goto v_reusejp_3557_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v_a_3553_);
v___x_3558_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3557_;
}
v_reusejp_3557_:
{
return v___x_3558_;
}
}
}
else
{
lean_object* v_a_3561_; lean_object* v___x_3562_; lean_object* v___x_3564_; 
v_a_3561_ = lean_ctor_get(v___x_3552_, 0);
lean_inc(v_a_3561_);
lean_dec_ref_known(v___x_3552_, 1);
v___x_3562_ = lean_box(0);
if (v_isShared_3550_ == 0)
{
lean_ctor_set(v___x_3549_, 1, v_a_3561_);
lean_ctor_set(v___x_3549_, 0, v___x_3562_);
v___x_3564_ = v___x_3549_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3568_; 
v_reuseFailAlloc_3568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3568_, 0, v___x_3562_);
lean_ctor_set(v_reuseFailAlloc_3568_, 1, v_a_3561_);
v___x_3564_ = v_reuseFailAlloc_3568_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
size_t v___x_3565_; size_t v___x_3566_; lean_object* v___x_3567_; 
v___x_3565_ = ((size_t)1ULL);
v___x_3566_ = lean_usize_add(v_i_3543_, v___x_3565_);
v___x_3567_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1_spec__4(v_as_3541_, v_sz_3542_, v___x_3566_, v___x_3564_);
return v___x_3567_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1___boxed(lean_object* v_as_3571_, lean_object* v_sz_3572_, lean_object* v_i_3573_, lean_object* v_b_3574_){
_start:
{
size_t v_sz_boxed_3575_; size_t v_i_boxed_3576_; lean_object* v_res_3577_; 
v_sz_boxed_3575_ = lean_unbox_usize(v_sz_3572_);
lean_dec(v_sz_3572_);
v_i_boxed_3576_ = lean_unbox_usize(v_i_3573_);
lean_dec(v_i_3573_);
v_res_3577_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1(v_as_3571_, v_sz_boxed_3575_, v_i_boxed_3576_, v_b_3574_);
lean_dec_ref(v_as_3571_);
return v_res_3577_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2_spec__3(lean_object* v_as_3578_, size_t v_sz_3579_, size_t v_i_3580_, lean_object* v_b_3581_){
_start:
{
uint8_t v___x_3582_; 
v___x_3582_ = lean_usize_dec_lt(v_i_3580_, v_sz_3579_);
if (v___x_3582_ == 0)
{
lean_object* v___x_3583_; 
v___x_3583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3583_, 0, v_b_3581_);
return v___x_3583_;
}
else
{
lean_object* v_snd_3584_; lean_object* v___x_3586_; uint8_t v_isShared_3587_; uint8_t v_isSharedCheck_3606_; 
v_snd_3584_ = lean_ctor_get(v_b_3581_, 1);
v_isSharedCheck_3606_ = !lean_is_exclusive(v_b_3581_);
if (v_isSharedCheck_3606_ == 0)
{
lean_object* v_unused_3607_; 
v_unused_3607_ = lean_ctor_get(v_b_3581_, 0);
lean_dec(v_unused_3607_);
v___x_3586_ = v_b_3581_;
v_isShared_3587_ = v_isSharedCheck_3606_;
goto v_resetjp_3585_;
}
else
{
lean_inc(v_snd_3584_);
lean_dec(v_b_3581_);
v___x_3586_ = lean_box(0);
v_isShared_3587_ = v_isSharedCheck_3606_;
goto v_resetjp_3585_;
}
v_resetjp_3585_:
{
lean_object* v_a_3588_; lean_object* v___x_3589_; 
v_a_3588_ = lean_array_uget_borrowed(v_as_3578_, v_i_3580_);
v___x_3589_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(v_snd_3584_, v_a_3588_);
if (lean_obj_tag(v___x_3589_) == 0)
{
lean_object* v_a_3590_; lean_object* v___x_3592_; uint8_t v_isShared_3593_; uint8_t v_isSharedCheck_3597_; 
lean_del_object(v___x_3586_);
v_a_3590_ = lean_ctor_get(v___x_3589_, 0);
v_isSharedCheck_3597_ = !lean_is_exclusive(v___x_3589_);
if (v_isSharedCheck_3597_ == 0)
{
v___x_3592_ = v___x_3589_;
v_isShared_3593_ = v_isSharedCheck_3597_;
goto v_resetjp_3591_;
}
else
{
lean_inc(v_a_3590_);
lean_dec(v___x_3589_);
v___x_3592_ = lean_box(0);
v_isShared_3593_ = v_isSharedCheck_3597_;
goto v_resetjp_3591_;
}
v_resetjp_3591_:
{
lean_object* v___x_3595_; 
if (v_isShared_3593_ == 0)
{
v___x_3595_ = v___x_3592_;
goto v_reusejp_3594_;
}
else
{
lean_object* v_reuseFailAlloc_3596_; 
v_reuseFailAlloc_3596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3596_, 0, v_a_3590_);
v___x_3595_ = v_reuseFailAlloc_3596_;
goto v_reusejp_3594_;
}
v_reusejp_3594_:
{
return v___x_3595_;
}
}
}
else
{
lean_object* v_a_3598_; lean_object* v___x_3599_; lean_object* v___x_3601_; 
v_a_3598_ = lean_ctor_get(v___x_3589_, 0);
lean_inc(v_a_3598_);
lean_dec_ref_known(v___x_3589_, 1);
v___x_3599_ = lean_box(0);
if (v_isShared_3587_ == 0)
{
lean_ctor_set(v___x_3586_, 1, v_a_3598_);
lean_ctor_set(v___x_3586_, 0, v___x_3599_);
v___x_3601_ = v___x_3586_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3605_; 
v_reuseFailAlloc_3605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3605_, 0, v___x_3599_);
lean_ctor_set(v_reuseFailAlloc_3605_, 1, v_a_3598_);
v___x_3601_ = v_reuseFailAlloc_3605_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
size_t v___x_3602_; size_t v___x_3603_; 
v___x_3602_ = ((size_t)1ULL);
v___x_3603_ = lean_usize_add(v_i_3580_, v___x_3602_);
v_i_3580_ = v___x_3603_;
v_b_3581_ = v___x_3601_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_as_3608_, lean_object* v_sz_3609_, lean_object* v_i_3610_, lean_object* v_b_3611_){
_start:
{
size_t v_sz_boxed_3612_; size_t v_i_boxed_3613_; lean_object* v_res_3614_; 
v_sz_boxed_3612_ = lean_unbox_usize(v_sz_3609_);
lean_dec(v_sz_3609_);
v_i_boxed_3613_ = lean_unbox_usize(v_i_3610_);
lean_dec(v_i_3610_);
v_res_3614_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2_spec__3(v_as_3608_, v_sz_boxed_3612_, v_i_boxed_3613_, v_b_3611_);
lean_dec_ref(v_as_3608_);
return v_res_3614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2(lean_object* v_as_3615_, size_t v_sz_3616_, size_t v_i_3617_, lean_object* v_b_3618_){
_start:
{
uint8_t v___x_3619_; 
v___x_3619_ = lean_usize_dec_lt(v_i_3617_, v_sz_3616_);
if (v___x_3619_ == 0)
{
lean_object* v___x_3620_; 
v___x_3620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3620_, 0, v_b_3618_);
return v___x_3620_;
}
else
{
lean_object* v_snd_3621_; lean_object* v___x_3623_; uint8_t v_isShared_3624_; uint8_t v_isSharedCheck_3643_; 
v_snd_3621_ = lean_ctor_get(v_b_3618_, 1);
v_isSharedCheck_3643_ = !lean_is_exclusive(v_b_3618_);
if (v_isSharedCheck_3643_ == 0)
{
lean_object* v_unused_3644_; 
v_unused_3644_ = lean_ctor_get(v_b_3618_, 0);
lean_dec(v_unused_3644_);
v___x_3623_ = v_b_3618_;
v_isShared_3624_ = v_isSharedCheck_3643_;
goto v_resetjp_3622_;
}
else
{
lean_inc(v_snd_3621_);
lean_dec(v_b_3618_);
v___x_3623_ = lean_box(0);
v_isShared_3624_ = v_isSharedCheck_3643_;
goto v_resetjp_3622_;
}
v_resetjp_3622_:
{
lean_object* v_a_3625_; lean_object* v___x_3626_; 
v_a_3625_ = lean_array_uget_borrowed(v_as_3615_, v_i_3617_);
v___x_3626_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_addSnippet(v_snd_3621_, v_a_3625_);
if (lean_obj_tag(v___x_3626_) == 0)
{
lean_object* v_a_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3634_; 
lean_del_object(v___x_3623_);
v_a_3627_ = lean_ctor_get(v___x_3626_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3626_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3629_ = v___x_3626_;
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_a_3627_);
lean_dec(v___x_3626_);
v___x_3629_ = lean_box(0);
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
v_resetjp_3628_:
{
lean_object* v___x_3632_; 
if (v_isShared_3630_ == 0)
{
v___x_3632_ = v___x_3629_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v_a_3627_);
v___x_3632_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
return v___x_3632_;
}
}
}
else
{
lean_object* v_a_3635_; lean_object* v___x_3636_; lean_object* v___x_3638_; 
v_a_3635_ = lean_ctor_get(v___x_3626_, 0);
lean_inc(v_a_3635_);
lean_dec_ref_known(v___x_3626_, 1);
v___x_3636_ = lean_box(0);
if (v_isShared_3624_ == 0)
{
lean_ctor_set(v___x_3623_, 1, v_a_3635_);
lean_ctor_set(v___x_3623_, 0, v___x_3636_);
v___x_3638_ = v___x_3623_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3642_; 
v_reuseFailAlloc_3642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3642_, 0, v___x_3636_);
lean_ctor_set(v_reuseFailAlloc_3642_, 1, v_a_3635_);
v___x_3638_ = v_reuseFailAlloc_3642_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
size_t v___x_3639_; size_t v___x_3640_; lean_object* v___x_3641_; 
v___x_3639_ = ((size_t)1ULL);
v___x_3640_ = lean_usize_add(v_i_3617_, v___x_3639_);
v___x_3641_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2_spec__3(v_as_3615_, v_sz_3616_, v___x_3640_, v___x_3638_);
return v___x_3641_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2___boxed(lean_object* v_as_3645_, lean_object* v_sz_3646_, lean_object* v_i_3647_, lean_object* v_b_3648_){
_start:
{
size_t v_sz_boxed_3649_; size_t v_i_boxed_3650_; lean_object* v_res_3651_; 
v_sz_boxed_3649_ = lean_unbox_usize(v_sz_3646_);
lean_dec(v_sz_3646_);
v_i_boxed_3650_ = lean_unbox_usize(v_i_3647_);
lean_dec(v_i_3647_);
v_res_3651_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2(v_as_3645_, v_sz_boxed_3649_, v_i_boxed_3650_, v_b_3648_);
lean_dec_ref(v_as_3645_);
return v_res_3651_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0(lean_object* v_init_3652_, lean_object* v_n_3653_, lean_object* v_b_3654_){
_start:
{
if (lean_obj_tag(v_n_3653_) == 0)
{
lean_object* v_cs_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; size_t v_sz_3658_; size_t v___x_3659_; lean_object* v___x_3660_; 
v_cs_3655_ = lean_ctor_get(v_n_3653_, 0);
v___x_3656_ = lean_box(0);
v___x_3657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3657_, 0, v___x_3656_);
lean_ctor_set(v___x_3657_, 1, v_b_3654_);
v_sz_3658_ = lean_array_size(v_cs_3655_);
v___x_3659_ = ((size_t)0ULL);
v___x_3660_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__1(v_init_3652_, v_cs_3655_, v_sz_3658_, v___x_3659_, v___x_3657_);
if (lean_obj_tag(v___x_3660_) == 0)
{
lean_object* v_a_3661_; lean_object* v___x_3663_; uint8_t v_isShared_3664_; uint8_t v_isSharedCheck_3668_; 
v_a_3661_ = lean_ctor_get(v___x_3660_, 0);
v_isSharedCheck_3668_ = !lean_is_exclusive(v___x_3660_);
if (v_isSharedCheck_3668_ == 0)
{
v___x_3663_ = v___x_3660_;
v_isShared_3664_ = v_isSharedCheck_3668_;
goto v_resetjp_3662_;
}
else
{
lean_inc(v_a_3661_);
lean_dec(v___x_3660_);
v___x_3663_ = lean_box(0);
v_isShared_3664_ = v_isSharedCheck_3668_;
goto v_resetjp_3662_;
}
v_resetjp_3662_:
{
lean_object* v___x_3666_; 
if (v_isShared_3664_ == 0)
{
v___x_3666_ = v___x_3663_;
goto v_reusejp_3665_;
}
else
{
lean_object* v_reuseFailAlloc_3667_; 
v_reuseFailAlloc_3667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3667_, 0, v_a_3661_);
v___x_3666_ = v_reuseFailAlloc_3667_;
goto v_reusejp_3665_;
}
v_reusejp_3665_:
{
return v___x_3666_;
}
}
}
else
{
lean_object* v_a_3669_; lean_object* v___x_3671_; uint8_t v_isShared_3672_; uint8_t v_isSharedCheck_3683_; 
v_a_3669_ = lean_ctor_get(v___x_3660_, 0);
v_isSharedCheck_3683_ = !lean_is_exclusive(v___x_3660_);
if (v_isSharedCheck_3683_ == 0)
{
v___x_3671_ = v___x_3660_;
v_isShared_3672_ = v_isSharedCheck_3683_;
goto v_resetjp_3670_;
}
else
{
lean_inc(v_a_3669_);
lean_dec(v___x_3660_);
v___x_3671_ = lean_box(0);
v_isShared_3672_ = v_isSharedCheck_3683_;
goto v_resetjp_3670_;
}
v_resetjp_3670_:
{
lean_object* v_fst_3673_; 
v_fst_3673_ = lean_ctor_get(v_a_3669_, 0);
if (lean_obj_tag(v_fst_3673_) == 0)
{
lean_object* v_snd_3674_; lean_object* v___x_3675_; lean_object* v___x_3677_; 
v_snd_3674_ = lean_ctor_get(v_a_3669_, 1);
lean_inc(v_snd_3674_);
lean_dec(v_a_3669_);
v___x_3675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3675_, 0, v_snd_3674_);
if (v_isShared_3672_ == 0)
{
lean_ctor_set(v___x_3671_, 0, v___x_3675_);
v___x_3677_ = v___x_3671_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v___x_3675_);
v___x_3677_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
return v___x_3677_;
}
}
else
{
lean_object* v_val_3679_; lean_object* v___x_3681_; 
lean_inc_ref(v_fst_3673_);
lean_dec(v_a_3669_);
v_val_3679_ = lean_ctor_get(v_fst_3673_, 0);
lean_inc(v_val_3679_);
lean_dec_ref_known(v_fst_3673_, 1);
if (v_isShared_3672_ == 0)
{
lean_ctor_set(v___x_3671_, 0, v_val_3679_);
v___x_3681_ = v___x_3671_;
goto v_reusejp_3680_;
}
else
{
lean_object* v_reuseFailAlloc_3682_; 
v_reuseFailAlloc_3682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3682_, 0, v_val_3679_);
v___x_3681_ = v_reuseFailAlloc_3682_;
goto v_reusejp_3680_;
}
v_reusejp_3680_:
{
return v___x_3681_;
}
}
}
}
}
else
{
lean_object* v_vs_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; size_t v_sz_3687_; size_t v___x_3688_; lean_object* v___x_3689_; 
v_vs_3684_ = lean_ctor_get(v_n_3653_, 0);
v___x_3685_ = lean_box(0);
v___x_3686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3686_, 0, v___x_3685_);
lean_ctor_set(v___x_3686_, 1, v_b_3654_);
v_sz_3687_ = lean_array_size(v_vs_3684_);
v___x_3688_ = ((size_t)0ULL);
v___x_3689_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__2(v_vs_3684_, v_sz_3687_, v___x_3688_, v___x_3686_);
if (lean_obj_tag(v___x_3689_) == 0)
{
lean_object* v_a_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3697_; 
v_a_3690_ = lean_ctor_get(v___x_3689_, 0);
v_isSharedCheck_3697_ = !lean_is_exclusive(v___x_3689_);
if (v_isSharedCheck_3697_ == 0)
{
v___x_3692_ = v___x_3689_;
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
else
{
lean_inc(v_a_3690_);
lean_dec(v___x_3689_);
v___x_3692_ = lean_box(0);
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
v_resetjp_3691_:
{
lean_object* v___x_3695_; 
if (v_isShared_3693_ == 0)
{
v___x_3695_ = v___x_3692_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v_a_3690_);
v___x_3695_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
return v___x_3695_;
}
}
}
else
{
lean_object* v_a_3698_; lean_object* v___x_3700_; uint8_t v_isShared_3701_; uint8_t v_isSharedCheck_3712_; 
v_a_3698_ = lean_ctor_get(v___x_3689_, 0);
v_isSharedCheck_3712_ = !lean_is_exclusive(v___x_3689_);
if (v_isSharedCheck_3712_ == 0)
{
v___x_3700_ = v___x_3689_;
v_isShared_3701_ = v_isSharedCheck_3712_;
goto v_resetjp_3699_;
}
else
{
lean_inc(v_a_3698_);
lean_dec(v___x_3689_);
v___x_3700_ = lean_box(0);
v_isShared_3701_ = v_isSharedCheck_3712_;
goto v_resetjp_3699_;
}
v_resetjp_3699_:
{
lean_object* v_fst_3702_; 
v_fst_3702_ = lean_ctor_get(v_a_3698_, 0);
if (lean_obj_tag(v_fst_3702_) == 0)
{
lean_object* v_snd_3703_; lean_object* v___x_3704_; lean_object* v___x_3706_; 
v_snd_3703_ = lean_ctor_get(v_a_3698_, 1);
lean_inc(v_snd_3703_);
lean_dec(v_a_3698_);
v___x_3704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3704_, 0, v_snd_3703_);
if (v_isShared_3701_ == 0)
{
lean_ctor_set(v___x_3700_, 0, v___x_3704_);
v___x_3706_ = v___x_3700_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v___x_3704_);
v___x_3706_ = v_reuseFailAlloc_3707_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
return v___x_3706_;
}
}
else
{
lean_object* v_val_3708_; lean_object* v___x_3710_; 
lean_inc_ref(v_fst_3702_);
lean_dec(v_a_3698_);
v_val_3708_ = lean_ctor_get(v_fst_3702_, 0);
lean_inc(v_val_3708_);
lean_dec_ref_known(v_fst_3702_, 1);
if (v_isShared_3701_ == 0)
{
lean_ctor_set(v___x_3700_, 0, v_val_3708_);
v___x_3710_ = v___x_3700_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v_val_3708_);
v___x_3710_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
return v___x_3710_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__1(lean_object* v_init_3713_, lean_object* v_as_3714_, size_t v_sz_3715_, size_t v_i_3716_, lean_object* v_b_3717_){
_start:
{
uint8_t v___x_3718_; 
v___x_3718_ = lean_usize_dec_lt(v_i_3716_, v_sz_3715_);
if (v___x_3718_ == 0)
{
lean_object* v___x_3719_; 
v___x_3719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3719_, 0, v_b_3717_);
return v___x_3719_;
}
else
{
lean_object* v_snd_3720_; lean_object* v___x_3722_; uint8_t v_isShared_3723_; uint8_t v_isSharedCheck_3754_; 
v_snd_3720_ = lean_ctor_get(v_b_3717_, 1);
v_isSharedCheck_3754_ = !lean_is_exclusive(v_b_3717_);
if (v_isSharedCheck_3754_ == 0)
{
lean_object* v_unused_3755_; 
v_unused_3755_ = lean_ctor_get(v_b_3717_, 0);
lean_dec(v_unused_3755_);
v___x_3722_ = v_b_3717_;
v_isShared_3723_ = v_isSharedCheck_3754_;
goto v_resetjp_3721_;
}
else
{
lean_inc(v_snd_3720_);
lean_dec(v_b_3717_);
v___x_3722_ = lean_box(0);
v_isShared_3723_ = v_isSharedCheck_3754_;
goto v_resetjp_3721_;
}
v_resetjp_3721_:
{
lean_object* v_a_3724_; lean_object* v___x_3725_; 
v_a_3724_ = lean_array_uget_borrowed(v_as_3714_, v_i_3716_);
lean_inc(v_snd_3720_);
v___x_3725_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0(v_init_3713_, v_a_3724_, v_snd_3720_);
if (lean_obj_tag(v___x_3725_) == 0)
{
lean_object* v_a_3726_; lean_object* v___x_3728_; uint8_t v_isShared_3729_; uint8_t v_isSharedCheck_3733_; 
lean_del_object(v___x_3722_);
lean_dec(v_snd_3720_);
v_a_3726_ = lean_ctor_get(v___x_3725_, 0);
v_isSharedCheck_3733_ = !lean_is_exclusive(v___x_3725_);
if (v_isSharedCheck_3733_ == 0)
{
v___x_3728_ = v___x_3725_;
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
else
{
lean_inc(v_a_3726_);
lean_dec(v___x_3725_);
v___x_3728_ = lean_box(0);
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
v_resetjp_3727_:
{
lean_object* v___x_3731_; 
if (v_isShared_3729_ == 0)
{
v___x_3731_ = v___x_3728_;
goto v_reusejp_3730_;
}
else
{
lean_object* v_reuseFailAlloc_3732_; 
v_reuseFailAlloc_3732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3732_, 0, v_a_3726_);
v___x_3731_ = v_reuseFailAlloc_3732_;
goto v_reusejp_3730_;
}
v_reusejp_3730_:
{
return v___x_3731_;
}
}
}
else
{
lean_object* v_a_3734_; lean_object* v___x_3736_; uint8_t v_isShared_3737_; uint8_t v_isSharedCheck_3753_; 
v_a_3734_ = lean_ctor_get(v___x_3725_, 0);
v_isSharedCheck_3753_ = !lean_is_exclusive(v___x_3725_);
if (v_isSharedCheck_3753_ == 0)
{
v___x_3736_ = v___x_3725_;
v_isShared_3737_ = v_isSharedCheck_3753_;
goto v_resetjp_3735_;
}
else
{
lean_inc(v_a_3734_);
lean_dec(v___x_3725_);
v___x_3736_ = lean_box(0);
v_isShared_3737_ = v_isSharedCheck_3753_;
goto v_resetjp_3735_;
}
v_resetjp_3735_:
{
if (lean_obj_tag(v_a_3734_) == 0)
{
lean_object* v___x_3738_; lean_object* v___x_3740_; 
v___x_3738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3738_, 0, v_a_3734_);
if (v_isShared_3723_ == 0)
{
lean_ctor_set(v___x_3722_, 0, v___x_3738_);
v___x_3740_ = v___x_3722_;
goto v_reusejp_3739_;
}
else
{
lean_object* v_reuseFailAlloc_3744_; 
v_reuseFailAlloc_3744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3744_, 0, v___x_3738_);
lean_ctor_set(v_reuseFailAlloc_3744_, 1, v_snd_3720_);
v___x_3740_ = v_reuseFailAlloc_3744_;
goto v_reusejp_3739_;
}
v_reusejp_3739_:
{
lean_object* v___x_3742_; 
if (v_isShared_3737_ == 0)
{
lean_ctor_set(v___x_3736_, 0, v___x_3740_);
v___x_3742_ = v___x_3736_;
goto v_reusejp_3741_;
}
else
{
lean_object* v_reuseFailAlloc_3743_; 
v_reuseFailAlloc_3743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3743_, 0, v___x_3740_);
v___x_3742_ = v_reuseFailAlloc_3743_;
goto v_reusejp_3741_;
}
v_reusejp_3741_:
{
return v___x_3742_;
}
}
}
else
{
lean_object* v_a_3745_; lean_object* v___x_3746_; lean_object* v___x_3748_; 
lean_del_object(v___x_3736_);
lean_dec(v_snd_3720_);
v_a_3745_ = lean_ctor_get(v_a_3734_, 0);
lean_inc(v_a_3745_);
lean_dec_ref_known(v_a_3734_, 1);
v___x_3746_ = lean_box(0);
if (v_isShared_3723_ == 0)
{
lean_ctor_set(v___x_3722_, 1, v_a_3745_);
lean_ctor_set(v___x_3722_, 0, v___x_3746_);
v___x_3748_ = v___x_3722_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v___x_3746_);
lean_ctor_set(v_reuseFailAlloc_3752_, 1, v_a_3745_);
v___x_3748_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
size_t v___x_3749_; size_t v___x_3750_; 
v___x_3749_ = ((size_t)1ULL);
v___x_3750_ = lean_usize_add(v_i_3716_, v___x_3749_);
v_i_3716_ = v___x_3750_;
v_b_3717_ = v___x_3748_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__1___boxed(lean_object* v_init_3756_, lean_object* v_as_3757_, lean_object* v_sz_3758_, lean_object* v_i_3759_, lean_object* v_b_3760_){
_start:
{
size_t v_sz_boxed_3761_; size_t v_i_boxed_3762_; lean_object* v_res_3763_; 
v_sz_boxed_3761_ = lean_unbox_usize(v_sz_3758_);
lean_dec(v_sz_3758_);
v_i_boxed_3762_ = lean_unbox_usize(v_i_3759_);
lean_dec(v_i_3759_);
v_res_3763_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0_spec__1(v_init_3756_, v_as_3757_, v_sz_boxed_3761_, v_i_boxed_3762_, v_b_3760_);
lean_dec_ref(v_as_3757_);
lean_dec_ref(v_init_3756_);
return v_res_3763_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0___boxed(lean_object* v_init_3764_, lean_object* v_n_3765_, lean_object* v_b_3766_){
_start:
{
lean_object* v_res_3767_; 
v_res_3767_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0(v_init_3764_, v_n_3765_, v_b_3766_);
lean_dec_ref(v_n_3765_);
lean_dec_ref(v_init_3764_);
return v_res_3767_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0(lean_object* v_t_3768_, lean_object* v_init_3769_){
_start:
{
lean_object* v_root_3770_; lean_object* v_tail_3771_; lean_object* v___x_3772_; 
v_root_3770_ = lean_ctor_get(v_t_3768_, 0);
v_tail_3771_ = lean_ctor_get(v_t_3768_, 1);
lean_inc_ref(v_init_3769_);
v___x_3772_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__0(v_init_3769_, v_root_3770_, v_init_3769_);
lean_dec_ref(v_init_3769_);
if (lean_obj_tag(v___x_3772_) == 0)
{
lean_object* v_a_3773_; lean_object* v___x_3775_; uint8_t v_isShared_3776_; uint8_t v_isSharedCheck_3780_; 
v_a_3773_ = lean_ctor_get(v___x_3772_, 0);
v_isSharedCheck_3780_ = !lean_is_exclusive(v___x_3772_);
if (v_isSharedCheck_3780_ == 0)
{
v___x_3775_ = v___x_3772_;
v_isShared_3776_ = v_isSharedCheck_3780_;
goto v_resetjp_3774_;
}
else
{
lean_inc(v_a_3773_);
lean_dec(v___x_3772_);
v___x_3775_ = lean_box(0);
v_isShared_3776_ = v_isSharedCheck_3780_;
goto v_resetjp_3774_;
}
v_resetjp_3774_:
{
lean_object* v___x_3778_; 
if (v_isShared_3776_ == 0)
{
v___x_3778_ = v___x_3775_;
goto v_reusejp_3777_;
}
else
{
lean_object* v_reuseFailAlloc_3779_; 
v_reuseFailAlloc_3779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3779_, 0, v_a_3773_);
v___x_3778_ = v_reuseFailAlloc_3779_;
goto v_reusejp_3777_;
}
v_reusejp_3777_:
{
return v___x_3778_;
}
}
}
else
{
lean_object* v_a_3781_; lean_object* v___x_3783_; uint8_t v_isShared_3784_; uint8_t v_isSharedCheck_3817_; 
v_a_3781_ = lean_ctor_get(v___x_3772_, 0);
v_isSharedCheck_3817_ = !lean_is_exclusive(v___x_3772_);
if (v_isSharedCheck_3817_ == 0)
{
v___x_3783_ = v___x_3772_;
v_isShared_3784_ = v_isSharedCheck_3817_;
goto v_resetjp_3782_;
}
else
{
lean_inc(v_a_3781_);
lean_dec(v___x_3772_);
v___x_3783_ = lean_box(0);
v_isShared_3784_ = v_isSharedCheck_3817_;
goto v_resetjp_3782_;
}
v_resetjp_3782_:
{
if (lean_obj_tag(v_a_3781_) == 0)
{
lean_object* v_a_3785_; lean_object* v___x_3787_; 
v_a_3785_ = lean_ctor_get(v_a_3781_, 0);
lean_inc(v_a_3785_);
lean_dec_ref_known(v_a_3781_, 1);
if (v_isShared_3784_ == 0)
{
lean_ctor_set(v___x_3783_, 0, v_a_3785_);
v___x_3787_ = v___x_3783_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3788_; 
v_reuseFailAlloc_3788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3788_, 0, v_a_3785_);
v___x_3787_ = v_reuseFailAlloc_3788_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
return v___x_3787_;
}
}
else
{
lean_object* v_a_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; size_t v_sz_3792_; size_t v___x_3793_; lean_object* v___x_3794_; 
lean_del_object(v___x_3783_);
v_a_3789_ = lean_ctor_get(v_a_3781_, 0);
lean_inc(v_a_3789_);
lean_dec_ref_known(v_a_3781_, 1);
v___x_3790_ = lean_box(0);
v___x_3791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3791_, 0, v___x_3790_);
lean_ctor_set(v___x_3791_, 1, v_a_3789_);
v_sz_3792_ = lean_array_size(v_tail_3771_);
v___x_3793_ = ((size_t)0ULL);
v___x_3794_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0_spec__1(v_tail_3771_, v_sz_3792_, v___x_3793_, v___x_3791_);
if (lean_obj_tag(v___x_3794_) == 0)
{
lean_object* v_a_3795_; lean_object* v___x_3797_; uint8_t v_isShared_3798_; uint8_t v_isSharedCheck_3802_; 
v_a_3795_ = lean_ctor_get(v___x_3794_, 0);
v_isSharedCheck_3802_ = !lean_is_exclusive(v___x_3794_);
if (v_isSharedCheck_3802_ == 0)
{
v___x_3797_ = v___x_3794_;
v_isShared_3798_ = v_isSharedCheck_3802_;
goto v_resetjp_3796_;
}
else
{
lean_inc(v_a_3795_);
lean_dec(v___x_3794_);
v___x_3797_ = lean_box(0);
v_isShared_3798_ = v_isSharedCheck_3802_;
goto v_resetjp_3796_;
}
v_resetjp_3796_:
{
lean_object* v___x_3800_; 
if (v_isShared_3798_ == 0)
{
v___x_3800_ = v___x_3797_;
goto v_reusejp_3799_;
}
else
{
lean_object* v_reuseFailAlloc_3801_; 
v_reuseFailAlloc_3801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3801_, 0, v_a_3795_);
v___x_3800_ = v_reuseFailAlloc_3801_;
goto v_reusejp_3799_;
}
v_reusejp_3799_:
{
return v___x_3800_;
}
}
}
else
{
lean_object* v_a_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3816_; 
v_a_3803_ = lean_ctor_get(v___x_3794_, 0);
v_isSharedCheck_3816_ = !lean_is_exclusive(v___x_3794_);
if (v_isSharedCheck_3816_ == 0)
{
v___x_3805_ = v___x_3794_;
v_isShared_3806_ = v_isSharedCheck_3816_;
goto v_resetjp_3804_;
}
else
{
lean_inc(v_a_3803_);
lean_dec(v___x_3794_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3816_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
lean_object* v_fst_3807_; 
v_fst_3807_ = lean_ctor_get(v_a_3803_, 0);
if (lean_obj_tag(v_fst_3807_) == 0)
{
lean_object* v_snd_3808_; lean_object* v___x_3810_; 
v_snd_3808_ = lean_ctor_get(v_a_3803_, 1);
lean_inc(v_snd_3808_);
lean_dec(v_a_3803_);
if (v_isShared_3806_ == 0)
{
lean_ctor_set(v___x_3805_, 0, v_snd_3808_);
v___x_3810_ = v___x_3805_;
goto v_reusejp_3809_;
}
else
{
lean_object* v_reuseFailAlloc_3811_; 
v_reuseFailAlloc_3811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3811_, 0, v_snd_3808_);
v___x_3810_ = v_reuseFailAlloc_3811_;
goto v_reusejp_3809_;
}
v_reusejp_3809_:
{
return v___x_3810_;
}
}
else
{
lean_object* v_val_3812_; lean_object* v___x_3814_; 
lean_inc_ref(v_fst_3807_);
lean_dec(v_a_3803_);
v_val_3812_ = lean_ctor_get(v_fst_3807_, 0);
lean_inc(v_val_3812_);
lean_dec_ref_known(v_fst_3807_, 1);
if (v_isShared_3806_ == 0)
{
lean_ctor_set(v___x_3805_, 0, v_val_3812_);
v___x_3814_ = v___x_3805_;
goto v_reusejp_3813_;
}
else
{
lean_object* v_reuseFailAlloc_3815_; 
v_reuseFailAlloc_3815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3815_, 0, v_val_3812_);
v___x_3814_ = v_reuseFailAlloc_3815_;
goto v_reusejp_3813_;
}
v_reusejp_3813_:
{
return v___x_3814_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0___boxed(lean_object* v_t_3818_, lean_object* v_init_3819_){
_start:
{
lean_object* v_res_3820_; 
v_res_3820_ = l_Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0(v_t_3818_, v_init_3819_);
lean_dec_ref(v_t_3818_);
return v_res_3820_;
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_assemble(lean_object* v_docs_3823_){
_start:
{
lean_object* v_ctx_3824_; lean_object* v___x_3825_; 
v_ctx_3824_ = ((lean_object*)(l_Lean_VersoModuleDocs_assemble___closed__0));
v___x_3825_ = l_Lean_PersistentArray_forIn___at___00Lean_VersoModuleDocs_assemble_spec__0(v_docs_3823_, v_ctx_3824_);
if (lean_obj_tag(v___x_3825_) == 0)
{
lean_object* v_a_3826_; lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3833_; 
v_a_3826_ = lean_ctor_get(v___x_3825_, 0);
v_isSharedCheck_3833_ = !lean_is_exclusive(v___x_3825_);
if (v_isSharedCheck_3833_ == 0)
{
v___x_3828_ = v___x_3825_;
v_isShared_3829_ = v_isSharedCheck_3833_;
goto v_resetjp_3827_;
}
else
{
lean_inc(v_a_3826_);
lean_dec(v___x_3825_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3833_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
lean_object* v___x_3831_; 
if (v_isShared_3829_ == 0)
{
v___x_3831_ = v___x_3828_;
goto v_reusejp_3830_;
}
else
{
lean_object* v_reuseFailAlloc_3832_; 
v_reuseFailAlloc_3832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3832_, 0, v_a_3826_);
v___x_3831_ = v_reuseFailAlloc_3832_;
goto v_reusejp_3830_;
}
v_reusejp_3830_:
{
return v___x_3831_;
}
}
}
else
{
lean_object* v_a_3834_; lean_object* v___x_3835_; 
v_a_3834_ = lean_ctor_get(v___x_3825_, 0);
lean_inc(v_a_3834_);
lean_dec_ref_known(v___x_3825_, 1);
v___x_3835_ = l___private_Lean_DocString_Extension_0__Lean_VersoModuleDocs_DocContext_closeAll(v_a_3834_);
if (lean_obj_tag(v___x_3835_) == 0)
{
lean_object* v_a_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3843_; 
v_a_3836_ = lean_ctor_get(v___x_3835_, 0);
v_isSharedCheck_3843_ = !lean_is_exclusive(v___x_3835_);
if (v_isSharedCheck_3843_ == 0)
{
v___x_3838_ = v___x_3835_;
v_isShared_3839_ = v_isSharedCheck_3843_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_a_3836_);
lean_dec(v___x_3835_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3843_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
lean_object* v___x_3841_; 
if (v_isShared_3839_ == 0)
{
v___x_3841_ = v___x_3838_;
goto v_reusejp_3840_;
}
else
{
lean_object* v_reuseFailAlloc_3842_; 
v_reuseFailAlloc_3842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3842_, 0, v_a_3836_);
v___x_3841_ = v_reuseFailAlloc_3842_;
goto v_reusejp_3840_;
}
v_reusejp_3840_:
{
return v___x_3841_;
}
}
}
else
{
lean_object* v_a_3844_; lean_object* v___x_3846_; uint8_t v_isShared_3847_; uint8_t v_isSharedCheck_3854_; 
v_a_3844_ = lean_ctor_get(v___x_3835_, 0);
v_isSharedCheck_3854_ = !lean_is_exclusive(v___x_3835_);
if (v_isSharedCheck_3854_ == 0)
{
v___x_3846_ = v___x_3835_;
v_isShared_3847_ = v_isSharedCheck_3854_;
goto v_resetjp_3845_;
}
else
{
lean_inc(v_a_3844_);
lean_dec(v___x_3835_);
v___x_3846_ = lean_box(0);
v_isShared_3847_ = v_isSharedCheck_3854_;
goto v_resetjp_3845_;
}
v_resetjp_3845_:
{
lean_object* v_content_3848_; lean_object* v_priorParts_3849_; lean_object* v___x_3850_; lean_object* v___x_3852_; 
v_content_3848_ = lean_ctor_get(v_a_3844_, 0);
lean_inc_ref(v_content_3848_);
v_priorParts_3849_ = lean_ctor_get(v_a_3844_, 1);
lean_inc_ref(v_priorParts_3849_);
lean_dec(v_a_3844_);
v___x_3850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3850_, 0, v_content_3848_);
lean_ctor_set(v___x_3850_, 1, v_priorParts_3849_);
if (v_isShared_3847_ == 0)
{
lean_ctor_set(v___x_3846_, 0, v___x_3850_);
v___x_3852_ = v___x_3846_;
goto v_reusejp_3851_;
}
else
{
lean_object* v_reuseFailAlloc_3853_; 
v_reuseFailAlloc_3853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3853_, 0, v___x_3850_);
v___x_3852_ = v_reuseFailAlloc_3853_;
goto v_reusejp_3851_;
}
v_reusejp_3851_:
{
return v___x_3852_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_VersoModuleDocs_assemble___boxed(lean_object* v_docs_3855_){
_start:
{
lean_object* v_res_3856_; 
v_res_3856_ = l_Lean_VersoModuleDocs_assemble(v_docs_3855_);
lean_dec_ref(v_docs_3855_);
return v_res_3856_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(lean_object* v_es_3857_){
_start:
{
lean_object* v___x_3858_; 
v___x_3858_ = lean_array_mk(v_es_3857_);
return v___x_3858_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(lean_object* v_x_3861_, lean_object* v_x_3862_, lean_object* v_es_3863_){
_start:
{
lean_object* v_ents_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; 
v_ents_3864_ = lean_array_mk(v_es_3863_);
v___x_3865_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_));
lean_inc_ref(v_ents_3864_);
v___x_3866_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3866_, 0, v___x_3865_);
lean_ctor_set(v___x_3866_, 1, v_ents_3864_);
lean_ctor_set(v___x_3866_, 2, v_ents_3864_);
return v___x_3866_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2____boxed(lean_object* v_x_3867_, lean_object* v_x_3868_, lean_object* v_es_3869_){
_start:
{
lean_object* v_res_3870_; 
v_res_3870_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__1_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(v_x_3867_, v_x_3868_, v_es_3869_);
lean_dec_ref(v_x_3868_);
lean_dec_ref(v_x_3867_);
return v_res_3870_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(lean_object* v___x_3871_, lean_object* v_x_3872_){
_start:
{
lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; size_t v___x_3876_; lean_object* v___x_3877_; 
v___x_3873_ = lean_unsigned_to_nat(32u);
v___x_3874_ = lean_mk_empty_array_with_capacity(v___x_3873_);
v___x_3875_ = lean_obj_once(&l_Lean_instInhabitedVersoModuleDocs_default___closed__0, &l_Lean_instInhabitedVersoModuleDocs_default___closed__0_once, _init_l_Lean_instInhabitedVersoModuleDocs_default___closed__0);
v___x_3876_ = ((size_t)5ULL);
lean_inc(v___x_3871_);
v___x_3877_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3877_, 0, v___x_3875_);
lean_ctor_set(v___x_3877_, 1, v___x_3874_);
lean_ctor_set(v___x_3877_, 2, v___x_3871_);
lean_ctor_set(v___x_3877_, 3, v___x_3871_);
lean_ctor_set_usize(v___x_3877_, 4, v___x_3876_);
return v___x_3877_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2____boxed(lean_object* v___x_3878_, lean_object* v_x_3879_){
_start:
{
lean_object* v_res_3880_; 
v_res_3880_ = l___private_Lean_DocString_Extension_0__Lean_initFn___lam__2_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(v___x_3878_, v_x_3879_);
lean_dec_ref(v_x_3879_);
return v_res_3880_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3902_; lean_object* v___x_3903_; 
v___x_3902_ = ((lean_object*)(l___private_Lean_DocString_Extension_0__Lean_initFn___closed__7_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_));
v___x_3903_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_3902_);
return v___x_3903_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2____boxed(lean_object* v_a_3904_){
_start:
{
lean_object* v_res_3905_; 
v_res_3905_ = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_();
return v_res_3905_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainVersoModuleDocs(lean_object* v_env_3906_){
_start:
{
lean_object* v___x_3907_; lean_object* v_toEnvExtension_3908_; lean_object* v_asyncMode_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; 
v___x_3907_ = l___private_Lean_DocString_Extension_0__Lean_versoModuleDocExt;
v_toEnvExtension_3908_ = lean_ctor_get(v___x_3907_, 0);
v_asyncMode_3909_ = lean_ctor_get(v_toEnvExtension_3908_, 2);
v___x_3910_ = l_Lean_instInhabitedVersoModuleDocs_default;
v___x_3911_ = lean_box(0);
v___x_3912_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3910_, v___x_3907_, v_env_3906_, v_asyncMode_3909_, v___x_3911_);
return v___x_3912_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVersoModuleDocs(lean_object* v_env_3913_){
_start:
{
lean_object* v___x_3914_; 
v___x_3914_ = l_Lean_getMainVersoModuleDocs(v_env_3913_);
return v___x_3914_;
}
}
static lean_object* _init_l_Lean_getVersoModuleDoc_x3f___closed__0(void){
_start:
{
lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; 
v___x_3915_ = l_Lean_instInhabitedVersoModuleDocs_default;
v___x_3916_ = lean_box(0);
v___x_3917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3917_, 0, v___x_3916_);
lean_ctor_set(v___x_3917_, 1, v___x_3915_);
return v___x_3917_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVersoModuleDoc_x3f(lean_object* v_env_3918_, lean_object* v_moduleName_3919_){
_start:
{
lean_object* v___x_3920_; 
v___x_3920_ = l_Lean_Environment_getModuleIdx_x3f(v_env_3918_, v_moduleName_3919_);
if (lean_obj_tag(v___x_3920_) == 0)
{
lean_object* v___x_3921_; 
v___x_3921_ = lean_box(0);
return v___x_3921_;
}
else
{
lean_object* v_val_3922_; lean_object* v___x_3924_; uint8_t v_isShared_3925_; uint8_t v_isSharedCheck_3933_; 
v_val_3922_ = lean_ctor_get(v___x_3920_, 0);
v_isSharedCheck_3933_ = !lean_is_exclusive(v___x_3920_);
if (v_isSharedCheck_3933_ == 0)
{
v___x_3924_ = v___x_3920_;
v_isShared_3925_ = v_isSharedCheck_3933_;
goto v_resetjp_3923_;
}
else
{
lean_inc(v_val_3922_);
lean_dec(v___x_3920_);
v___x_3924_ = lean_box(0);
v_isShared_3925_ = v_isSharedCheck_3933_;
goto v_resetjp_3923_;
}
v_resetjp_3923_:
{
lean_object* v___x_3926_; lean_object* v___x_3927_; uint8_t v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3931_; 
v___x_3926_ = lean_obj_once(&l_Lean_getVersoModuleDoc_x3f___closed__0, &l_Lean_getVersoModuleDoc_x3f___closed__0_once, _init_l_Lean_getVersoModuleDoc_x3f___closed__0);
v___x_3927_ = l___private_Lean_DocString_Extension_0__Lean_versoModuleDocExt;
v___x_3928_ = 1;
v___x_3929_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_3926_, v___x_3927_, v_env_3918_, v_val_3922_, v___x_3928_);
lean_dec(v_val_3922_);
if (v_isShared_3925_ == 0)
{
lean_ctor_set(v___x_3924_, 0, v___x_3929_);
v___x_3931_ = v___x_3924_;
goto v_reusejp_3930_;
}
else
{
lean_object* v_reuseFailAlloc_3932_; 
v_reuseFailAlloc_3932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3932_, 0, v___x_3929_);
v___x_3931_ = v_reuseFailAlloc_3932_;
goto v_reusejp_3930_;
}
v_reusejp_3930_:
{
return v___x_3931_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getVersoModuleDoc_x3f___boxed(lean_object* v_env_3934_, lean_object* v_moduleName_3935_){
_start:
{
lean_object* v_res_3936_; 
v_res_3936_ = l_Lean_getVersoModuleDoc_x3f(v_env_3934_, v_moduleName_3935_);
lean_dec(v_moduleName_3935_);
lean_dec_ref(v_env_3934_);
return v_res_3936_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModuleDocSnippet___lam__0(lean_object* v_addEntryFn_3937_, lean_object* v_snippet_3938_, lean_object* v_s_3939_){
_start:
{
lean_object* v_importedEntries_3940_; lean_object* v_state_3941_; lean_object* v___x_3943_; uint8_t v_isShared_3944_; uint8_t v_isSharedCheck_3949_; 
v_importedEntries_3940_ = lean_ctor_get(v_s_3939_, 0);
v_state_3941_ = lean_ctor_get(v_s_3939_, 1);
v_isSharedCheck_3949_ = !lean_is_exclusive(v_s_3939_);
if (v_isSharedCheck_3949_ == 0)
{
v___x_3943_ = v_s_3939_;
v_isShared_3944_ = v_isSharedCheck_3949_;
goto v_resetjp_3942_;
}
else
{
lean_inc(v_state_3941_);
lean_inc(v_importedEntries_3940_);
lean_dec(v_s_3939_);
v___x_3943_ = lean_box(0);
v_isShared_3944_ = v_isSharedCheck_3949_;
goto v_resetjp_3942_;
}
v_resetjp_3942_:
{
lean_object* v_state_3945_; lean_object* v___x_3947_; 
v_state_3945_ = lean_apply_2(v_addEntryFn_3937_, v_state_3941_, v_snippet_3938_);
if (v_isShared_3944_ == 0)
{
lean_ctor_set(v___x_3943_, 1, v_state_3945_);
v___x_3947_ = v___x_3943_;
goto v_reusejp_3946_;
}
else
{
lean_object* v_reuseFailAlloc_3948_; 
v_reuseFailAlloc_3948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3948_, 0, v_importedEntries_3940_);
lean_ctor_set(v_reuseFailAlloc_3948_, 1, v_state_3945_);
v___x_3947_ = v_reuseFailAlloc_3948_;
goto v_reusejp_3946_;
}
v_reusejp_3946_:
{
return v___x_3947_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModuleDocSnippet(lean_object* v_env_3953_, lean_object* v_snippet_3954_){
_start:
{
lean_object* v_docs_3955_; uint8_t v___x_3956_; 
lean_inc_ref(v_env_3953_);
v_docs_3955_ = l_Lean_getMainVersoModuleDocs(v_env_3953_);
v___x_3956_ = l_Lean_VersoModuleDocs_canAdd(v_docs_3955_, v_snippet_3954_);
if (v___x_3956_ == 0)
{
lean_object* v___x_3957_; lean_object* v___y_3959_; lean_object* v___x_3964_; 
lean_dec_ref(v_snippet_3954_);
lean_dec_ref(v_env_3953_);
v___x_3957_ = ((lean_object*)(l_Lean_addVersoModuleDocSnippet___closed__0));
v___x_3964_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_VersoModuleDocs_terminalNesting_spec__0(v_docs_3955_);
lean_dec_ref(v_docs_3955_);
if (lean_obj_tag(v___x_3964_) == 0)
{
lean_object* v___x_3965_; 
v___x_3965_ = ((lean_object*)(l_Lean_addVersoModuleDocSnippet___closed__1));
v___y_3959_ = v___x_3965_;
goto v___jp_3958_;
}
else
{
lean_object* v_val_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; 
v_val_3966_ = lean_ctor_get(v___x_3964_, 0);
lean_inc(v_val_3966_);
lean_dec_ref_known(v___x_3964_, 1);
v___x_3967_ = ((lean_object*)(l_Lean_addVersoModuleDocSnippet___closed__2));
v___x_3968_ = l_Nat_reprFast(v_val_3966_);
v___x_3969_ = lean_string_append(v___x_3967_, v___x_3968_);
lean_dec_ref(v___x_3968_);
v___x_3970_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__1));
v___x_3971_ = lean_string_append(v___x_3969_, v___x_3970_);
v___y_3959_ = v___x_3971_;
goto v___jp_3958_;
}
v___jp_3958_:
{
lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; 
v___x_3960_ = lean_string_append(v___x_3957_, v___y_3959_);
lean_dec_ref(v___y_3959_);
v___x_3961_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lean_VersoModuleDocs_instReprSnippet_repr_spec__1_spec__3___redArg___closed__1));
v___x_3962_ = lean_string_append(v___x_3960_, v___x_3961_);
v___x_3963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3963_, 0, v___x_3962_);
return v___x_3963_;
}
}
else
{
lean_object* v___x_3972_; lean_object* v_toEnvExtension_3973_; lean_object* v_addEntryFn_3974_; lean_object* v_asyncMode_3975_; uint8_t v_logWrites_3976_; lean_object* v___f_3977_; lean_object* v___x_3978_; 
lean_dec_ref(v_docs_3955_);
v___x_3972_ = l___private_Lean_DocString_Extension_0__Lean_versoModuleDocExt;
v_toEnvExtension_3973_ = lean_ctor_get(v___x_3972_, 0);
v_addEntryFn_3974_ = lean_ctor_get(v___x_3972_, 3);
v_asyncMode_3975_ = lean_ctor_get(v_toEnvExtension_3973_, 2);
v_logWrites_3976_ = lean_ctor_get_uint8(v_toEnvExtension_3973_, sizeof(void*)*6);
lean_inc(v_addEntryFn_3974_);
v___f_3977_ = lean_alloc_closure((void*)(l_Lean_addVersoModuleDocSnippet___lam__0), 3, 2);
lean_closure_set(v___f_3977_, 0, v_addEntryFn_3974_);
lean_closure_set(v___f_3977_, 1, v_snippet_3954_);
v___x_3978_ = lean_box(0);
if (v_logWrites_3976_ == 0)
{
lean_object* v___x_3979_; lean_object* v___x_3980_; 
lean_inc_ref(v_toEnvExtension_3973_);
v___x_3979_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3973_, v_env_3953_, v___f_3977_, v_asyncMode_3975_, v___x_3978_, v___x_3956_);
v___x_3980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3980_, 0, v___x_3979_);
return v___x_3980_;
}
else
{
lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; 
lean_inc_ref_n(v_toEnvExtension_3973_, 2);
v___x_3981_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_3973_, v_env_3953_);
lean_dec_ref(v_env_3953_);
v___x_3982_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3973_, v___x_3981_, v___f_3977_, v_asyncMode_3975_, v___x_3978_, v___x_3956_);
v___x_3983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3983_, 0, v___x_3982_);
return v___x_3983_;
}
}
}
}
lean_object* runtime_initialize_Lean_DeclarationRange(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_DeferredCheck(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Extra(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrivateName(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_DocString_Extension(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_DeferredCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrivateName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1462683259____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_doc_verso = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_doc_verso);
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2096677768____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_doc_verso_module = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_doc_verso_module);
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1174734686____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Extension_0__Lean_builtinDocStrings = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Extension_0__Lean_builtinDocStrings);
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_101684723____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_docStringExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_docStringExt);
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2763720193____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Extension_0__Lean_inheritDocStringExt);
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_797151674____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Extension_0__Lean_builtinVersoDocStrings = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Extension_0__Lean_builtinVersoDocStrings);
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_2538023809____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_versoDocStringExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_versoDocStringExt);
lean_dec_ref(res);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1709132598____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Extension_0__Lean_moduleDocExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Extension_0__Lean_moduleDocExt);
lean_dec_ref(res);
l_Lean_VersoModuleDocs_instInhabitedSnippet_default = _init_l_Lean_VersoModuleDocs_instInhabitedSnippet_default();
lean_mark_persistent(l_Lean_VersoModuleDocs_instInhabitedSnippet_default);
l_Lean_VersoModuleDocs_instInhabitedSnippet = _init_l_Lean_VersoModuleDocs_instInhabitedSnippet();
lean_mark_persistent(l_Lean_VersoModuleDocs_instInhabitedSnippet);
l_Lean_instInhabitedVersoModuleDocs_default = _init_l_Lean_instInhabitedVersoModuleDocs_default();
lean_mark_persistent(l_Lean_instInhabitedVersoModuleDocs_default);
l_Lean_instInhabitedVersoModuleDocs = _init_l_Lean_instInhabitedVersoModuleDocs();
lean_mark_persistent(l_Lean_instInhabitedVersoModuleDocs);
res = l___private_Lean_DocString_Extension_0__Lean_initFn_00___x40_Lean_DocString_Extension_1795461544____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Extension_0__Lean_versoModuleDocExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Extension_0__Lean_versoModuleDocExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_DocString_Extension(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_DeclarationRange(uint8_t builtin);
lean_object* initialize_Lean_DocString_Types(uint8_t builtin);
lean_object* initialize_Lean_DocString_DeferredCheck(uint8_t builtin);
lean_object* initialize_Init_Data_String_Extra(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Lean_PrivateName(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_DocString_Extension(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_DeferredCheck(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrivateName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_DocString_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_DocString_Extension(builtin);
}
#ifdef __cplusplus
}
#endif
