// Lean compiler output
// Module: Lean.AutoDecl
// Imports: public import Lean.Structure public import Lean.CoreM
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
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
uint8_t l_Lean_Name_isInternal(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t lean_is_reserved_name(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_casesOnSuffix;
uint8_t l_Lean_Environment_isConstructor(lean_object*, lean_object*);
extern lean_object* l_Lean_belowSuffix;
extern lean_object* l_Lean_brecOnSuffix;
extern lean_object* l_Lean_recOnSuffix;
lean_object* l_Lean_isSubobjectField_x3f(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_functor"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__0 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__0_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "functor_unfold"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__1 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__1_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mutual"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__2 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__2_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ndrec"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__3 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__3_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ndrecOn"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__4 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__4_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "noConfusionType"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__5 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__5_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "noConfusion"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__6 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__6_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__7 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__7_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "toCtorIdx"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__8 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__8_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ctorIdx"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__9 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__9_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ctorElim"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__10 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__10_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ctorElimType"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__11 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__11_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__12 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__12_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__10_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__12_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__13 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__13_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__9_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__13_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__14 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__14_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__8_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__14_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__15 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__15_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__7_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__15_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__16 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__16_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__6_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__16_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__17 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__17_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__5_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__17_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__18 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__18_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__4_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__18_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__19 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__19_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__3_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__19_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__20 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__20_value;
static lean_once_cell_t l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__21;
static lean_once_cell_t l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__22;
static lean_once_cell_t l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__23;
static lean_once_cell_t l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__24;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "below_"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__25 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__25_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "brecOn_"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__26 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__26_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "injEq"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__27 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__27_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inj"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__28 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__28_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "sizeOf_spec"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__29 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__29_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__30 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__30_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__31 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__31_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__30_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__31_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__32 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__32_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__29_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__32_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__33 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__33_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__28_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__33_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__34 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__34_value;
static const lean_ctor_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__27_value),((lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__34_value)}};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__35 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__35_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "grind_"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__36 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__36_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "unsafe_"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__37 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__37_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "match_"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__38 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__38_value;
static const lean_string_object l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "proof_"};
static const lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__39 = (const lean_object*)&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__39_value;
LEAN_EXPORT lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isAutoDeclOrPrivate__Internal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isAutoDeclOrPrivate__Internal___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(lean_object* v_a_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 0;
return v___x_3_;
}
else
{
lean_object* v_head_4_; lean_object* v_tail_5_; uint8_t v___x_6_; 
v_head_4_ = lean_ctor_get(v_x_2_, 0);
v_tail_5_ = lean_ctor_get(v_x_2_, 1);
v___x_6_ = lean_string_dec_eq(v_a_1_, v_head_4_);
if (v___x_6_ == 0)
{
v_x_2_ = v_tail_5_;
goto _start;
}
else
{
return v___x_6_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0___boxed(lean_object* v_a_8_, lean_object* v_x_9_){
_start:
{
uint8_t v_res_10_; lean_object* v_r_11_; 
v_res_10_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v_a_8_, v_x_9_);
lean_dec(v_x_9_);
lean_dec_ref(v_a_8_);
v_r_11_ = lean_box(v_res_10_);
return v_r_11_;
}
}
static lean_object* _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__21(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__20));
v___x_52_ = l_Lean_belowSuffix;
v___x_53_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
lean_ctor_set(v___x_53_, 1, v___x_51_);
return v___x_53_;
}
}
static lean_object* _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__22(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_54_ = lean_obj_once(&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__21, &l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__21_once, _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__21);
v___x_55_ = l_Lean_brecOnSuffix;
v___x_56_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
lean_ctor_set(v___x_56_, 1, v___x_54_);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__23(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_57_ = lean_obj_once(&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__22, &l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__22_once, _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__22);
v___x_58_ = l_Lean_recOnSuffix;
v___x_59_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
lean_ctor_set(v___x_59_, 1, v___x_57_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__24(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_obj_once(&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__23, &l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__23_once, _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__23);
v___x_61_ = l_Lean_casesOnSuffix;
v___x_62_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg(lean_object* v_decl_88_, lean_object* v_a_89_){
_start:
{
uint8_t v___x_95_; 
v___x_95_ = l_Lean_Name_hasMacroScopes(v_decl_88_);
if (v___x_95_ == 0)
{
uint8_t v___x_96_; 
v___x_96_ = l_Lean_Name_isInternal(v_decl_88_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; lean_object* v_env_98_; uint8_t v___x_99_; 
v___x_97_ = lean_st_ref_get(v_a_89_);
v_env_98_ = lean_ctor_get(v___x_97_, 0);
lean_inc_ref_n(v_env_98_, 2);
lean_dec(v___x_97_);
lean_inc(v_decl_88_);
v___x_99_ = lean_is_reserved_name(v_env_98_, v_decl_88_);
if (v___x_99_ == 0)
{
if (lean_obj_tag(v_decl_88_) == 1)
{
lean_object* v_pre_100_; lean_object* v_str_101_; uint8_t v___y_103_; lean_object* v___x_135_; lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_202_; 
v_pre_100_ = lean_ctor_get(v_decl_88_, 0);
lean_inc_n(v_pre_100_, 2);
v_str_101_ = lean_ctor_get(v_decl_88_, 1);
lean_inc_ref(v_str_101_);
lean_dec_ref_known(v_decl_88_, 2);
v___x_135_ = l_Lean_isAutoDeclOrPrivate__Internal___redArg(v_pre_100_, v_a_89_);
v_a_136_ = lean_ctor_get(v___x_135_, 0);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_135_);
if (v_isSharedCheck_202_ == 0)
{
v___x_138_ = v___x_135_;
v_isShared_139_ = v_isSharedCheck_202_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_135_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_202_;
goto v_resetjp_137_;
}
v___jp_102_:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_104_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__0));
v___x_105_ = l_Lean_Name_str___override(v_pre_100_, v___x_104_);
lean_inc(v___x_105_);
lean_inc_ref(v_env_98_);
v___x_106_ = l_Lean_Environment_find_x3f(v_env_98_, v___x_105_, v___y_103_);
if (lean_obj_tag(v___x_106_) == 1)
{
lean_object* v_val_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_132_; 
v_val_107_ = lean_ctor_get(v___x_106_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_106_);
if (v_isSharedCheck_132_ == 0)
{
v___x_109_ = v___x_106_;
v_isShared_110_ = v_isSharedCheck_132_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_val_107_);
lean_dec(v___x_106_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_132_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
if (lean_obj_tag(v_val_107_) == 5)
{
lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_126_; 
lean_del_object(v___x_109_);
v_isSharedCheck_126_ = !lean_is_exclusive(v_val_107_);
if (v_isSharedCheck_126_ == 0)
{
lean_object* v_unused_127_; 
v_unused_127_ = lean_ctor_get(v_val_107_, 0);
lean_dec(v_unused_127_);
v___x_112_ = v_val_107_;
v_isShared_113_ = v_isSharedCheck_126_;
goto v_resetjp_111_;
}
else
{
lean_dec(v_val_107_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_126_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_114_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__1));
v___x_115_ = lean_string_dec_eq(v_str_101_, v___x_114_);
if (v___x_115_ == 0)
{
lean_object* v___x_116_; uint8_t v___x_117_; 
v___x_116_ = l_Lean_casesOnSuffix;
v___x_117_ = lean_string_dec_eq(v_str_101_, v___x_116_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_118_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__2));
v___x_119_ = lean_string_dec_eq(v_str_101_, v___x_118_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_120_ = l_Lean_Name_str___override(v___x_105_, v_str_101_);
v___x_121_ = l_Lean_Environment_isConstructor(v_env_98_, v___x_120_);
if (v___x_121_ == 0)
{
lean_object* v___x_122_; lean_object* v___x_124_; 
v___x_122_ = lean_box(v___x_99_);
if (v_isShared_113_ == 0)
{
lean_ctor_set_tag(v___x_112_, 0);
lean_ctor_set(v___x_112_, 0, v___x_122_);
v___x_124_ = v___x_112_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v___x_122_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
else
{
lean_del_object(v___x_112_);
goto v___jp_91_;
}
}
else
{
lean_del_object(v___x_112_);
lean_dec(v___x_105_);
lean_dec_ref(v_str_101_);
lean_dec_ref(v_env_98_);
goto v___jp_91_;
}
}
else
{
lean_del_object(v___x_112_);
lean_dec(v___x_105_);
lean_dec_ref(v_str_101_);
lean_dec_ref(v_env_98_);
goto v___jp_91_;
}
}
else
{
lean_del_object(v___x_112_);
lean_dec(v___x_105_);
lean_dec_ref(v_str_101_);
lean_dec_ref(v_env_98_);
goto v___jp_91_;
}
}
}
else
{
lean_object* v___x_128_; lean_object* v___x_130_; 
lean_dec(v_val_107_);
lean_dec(v___x_105_);
lean_dec_ref(v_str_101_);
lean_dec_ref(v_env_98_);
v___x_128_ = lean_box(v___x_99_);
if (v_isShared_110_ == 0)
{
lean_ctor_set_tag(v___x_109_, 0);
lean_ctor_set(v___x_109_, 0, v___x_128_);
v___x_130_ = v___x_109_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v___x_128_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
return v___x_130_;
}
}
}
}
else
{
lean_object* v___x_133_; lean_object* v___x_134_; 
lean_dec(v___x_106_);
lean_dec(v___x_105_);
lean_dec_ref(v_str_101_);
lean_dec_ref(v_env_98_);
v___x_133_ = lean_box(v___x_99_);
v___x_134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
return v___x_134_;
}
}
v_resetjp_137_:
{
uint8_t v___y_141_; uint8_t v___y_153_; uint8_t v___y_161_; uint8_t v___x_195_; 
v___x_195_ = lean_unbox(v_a_136_);
lean_dec(v_a_136_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_196_ = lean_string_utf8_byte_size(v_str_101_);
v___x_197_ = lean_unsigned_to_nat(6u);
v___x_198_ = lean_nat_dec_le(v___x_197_, v___x_196_);
if (v___x_198_ == 0)
{
goto v___jp_188_;
}
else
{
lean_object* v___x_199_; lean_object* v___x_200_; uint8_t v___x_201_; 
v___x_199_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__39));
v___x_200_ = lean_unsigned_to_nat(0u);
v___x_201_ = lean_string_memcmp(v_str_101_, v___x_199_, v___x_200_, v___x_200_, v___x_197_);
if (v___x_201_ == 0)
{
goto v___jp_188_;
}
else
{
lean_del_object(v___x_138_);
lean_dec_ref(v_str_101_);
lean_dec(v_pre_100_);
lean_dec_ref(v_env_98_);
goto v___jp_91_;
}
}
}
else
{
lean_del_object(v___x_138_);
lean_dec_ref(v_str_101_);
lean_dec(v_pre_100_);
lean_dec_ref(v_env_98_);
goto v___jp_91_;
}
v___jp_140_:
{
lean_object* v___x_142_; uint8_t v___x_143_; 
v___x_142_ = lean_obj_once(&l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__24, &l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__24_once, _init_l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__24);
v___x_143_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v_str_101_, v___x_142_);
if (v___x_143_ == 0)
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_144_ = lean_box(0);
lean_inc_ref(v_str_101_);
v___x_145_ = l_Lean_Name_str___override(v___x_144_, v_str_101_);
lean_inc(v_pre_100_);
lean_inc_ref(v_env_98_);
v___x_146_ = l_Lean_isSubobjectField_x3f(v_env_98_, v_pre_100_, v___x_145_);
if (lean_obj_tag(v___x_146_) == 1)
{
uint8_t v___x_147_; lean_object* v___x_148_; lean_object* v___x_150_; 
lean_dec_ref_known(v___x_146_, 1);
lean_dec_ref(v_str_101_);
lean_dec(v_pre_100_);
lean_dec_ref(v_env_98_);
v___x_147_ = 1;
v___x_148_ = lean_box(v___x_147_);
if (v_isShared_139_ == 0)
{
lean_ctor_set(v___x_138_, 0, v___x_148_);
v___x_150_ = v___x_138_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v___x_148_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
else
{
lean_dec(v___x_146_);
lean_del_object(v___x_138_);
v___y_103_ = v___y_141_;
goto v___jp_102_;
}
}
else
{
lean_del_object(v___x_138_);
lean_dec_ref(v_str_101_);
lean_dec(v_pre_100_);
lean_dec_ref(v_env_98_);
goto v___jp_91_;
}
}
v___jp_152_:
{
lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_154_ = lean_string_utf8_byte_size(v_str_101_);
v___x_155_ = lean_unsigned_to_nat(6u);
v___x_156_ = lean_nat_dec_le(v___x_155_, v___x_154_);
if (v___x_156_ == 0)
{
v___y_141_ = v___y_153_;
goto v___jp_140_;
}
else
{
lean_object* v___x_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
v___x_157_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__25));
v___x_158_ = lean_unsigned_to_nat(0u);
v___x_159_ = lean_string_memcmp(v_str_101_, v___x_157_, v___x_158_, v___x_158_, v___x_155_);
if (v___x_159_ == 0)
{
v___y_141_ = v___y_153_;
goto v___jp_140_;
}
else
{
lean_del_object(v___x_138_);
lean_dec_ref(v_str_101_);
lean_dec(v_pre_100_);
lean_dec_ref(v_env_98_);
goto v___jp_91_;
}
}
}
v___jp_160_:
{
lean_object* v___x_162_; 
lean_inc(v_pre_100_);
lean_inc_ref(v_env_98_);
v___x_162_ = l_Lean_Environment_find_x3f(v_env_98_, v_pre_100_, v___y_161_);
if (lean_obj_tag(v___x_162_) == 1)
{
lean_object* v_val_163_; 
v_val_163_ = lean_ctor_get(v___x_162_, 0);
lean_inc(v_val_163_);
lean_dec_ref_known(v___x_162_, 1);
if (lean_obj_tag(v_val_163_) == 5)
{
lean_object* v___x_164_; lean_object* v___x_165_; uint8_t v___x_166_; 
lean_dec_ref_known(v_val_163_, 1);
v___x_164_ = lean_string_utf8_byte_size(v_str_101_);
v___x_165_ = lean_unsigned_to_nat(7u);
v___x_166_ = lean_nat_dec_le(v___x_165_, v___x_164_);
if (v___x_166_ == 0)
{
v___y_153_ = v___y_161_;
goto v___jp_152_;
}
else
{
lean_object* v___x_167_; lean_object* v___x_168_; uint8_t v___x_169_; 
v___x_167_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__26));
v___x_168_ = lean_unsigned_to_nat(0u);
v___x_169_ = lean_string_memcmp(v_str_101_, v___x_167_, v___x_168_, v___x_168_, v___x_165_);
if (v___x_169_ == 0)
{
v___y_153_ = v___y_161_;
goto v___jp_152_;
}
else
{
lean_del_object(v___x_138_);
lean_dec_ref(v_str_101_);
lean_dec(v_pre_100_);
lean_dec_ref(v_env_98_);
goto v___jp_91_;
}
}
}
else
{
lean_dec(v_val_163_);
lean_del_object(v___x_138_);
v___y_103_ = v___y_161_;
goto v___jp_102_;
}
}
else
{
lean_dec(v___x_162_);
lean_del_object(v___x_138_);
v___y_103_ = v___y_161_;
goto v___jp_102_;
}
}
v___jp_170_:
{
uint8_t v___x_171_; 
lean_inc(v_pre_100_);
lean_inc_ref(v_env_98_);
v___x_171_ = l_Lean_Environment_isConstructor(v_env_98_, v_pre_100_);
if (v___x_171_ == 0)
{
v___y_161_ = v___x_171_;
goto v___jp_160_;
}
else
{
lean_object* v___x_172_; uint8_t v___x_173_; 
v___x_172_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__35));
v___x_173_ = l_List_elem___at___00Lean_isAutoDeclOrPrivate__Internal_spec__0(v_str_101_, v___x_172_);
if (v___x_173_ == 0)
{
v___y_161_ = v___x_173_;
goto v___jp_160_;
}
else
{
lean_del_object(v___x_138_);
lean_dec_ref(v_str_101_);
lean_dec(v_pre_100_);
lean_dec_ref(v_env_98_);
goto v___jp_91_;
}
}
}
v___jp_174_:
{
lean_object* v___x_175_; lean_object* v___x_176_; uint8_t v___x_177_; 
v___x_175_ = lean_string_utf8_byte_size(v_str_101_);
v___x_176_ = lean_unsigned_to_nat(6u);
v___x_177_ = lean_nat_dec_le(v___x_176_, v___x_175_);
if (v___x_177_ == 0)
{
goto v___jp_170_;
}
else
{
lean_object* v___x_178_; lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_178_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__36));
v___x_179_ = lean_unsigned_to_nat(0u);
v___x_180_ = lean_string_memcmp(v_str_101_, v___x_178_, v___x_179_, v___x_179_, v___x_176_);
if (v___x_180_ == 0)
{
goto v___jp_170_;
}
else
{
lean_del_object(v___x_138_);
lean_dec_ref(v_str_101_);
lean_dec(v_pre_100_);
lean_dec_ref(v_env_98_);
goto v___jp_91_;
}
}
}
v___jp_181_:
{
lean_object* v___x_182_; lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_182_ = lean_string_utf8_byte_size(v_str_101_);
v___x_183_ = lean_unsigned_to_nat(7u);
v___x_184_ = lean_nat_dec_le(v___x_183_, v___x_182_);
if (v___x_184_ == 0)
{
goto v___jp_174_;
}
else
{
lean_object* v___x_185_; lean_object* v___x_186_; uint8_t v___x_187_; 
v___x_185_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__37));
v___x_186_ = lean_unsigned_to_nat(0u);
v___x_187_ = lean_string_memcmp(v_str_101_, v___x_185_, v___x_186_, v___x_186_, v___x_183_);
if (v___x_187_ == 0)
{
goto v___jp_174_;
}
else
{
lean_del_object(v___x_138_);
lean_dec_ref(v_str_101_);
lean_dec(v_pre_100_);
lean_dec_ref(v_env_98_);
goto v___jp_91_;
}
}
}
v___jp_188_:
{
lean_object* v___x_189_; lean_object* v___x_190_; uint8_t v___x_191_; 
v___x_189_ = lean_string_utf8_byte_size(v_str_101_);
v___x_190_ = lean_unsigned_to_nat(6u);
v___x_191_ = lean_nat_dec_le(v___x_190_, v___x_189_);
if (v___x_191_ == 0)
{
goto v___jp_181_;
}
else
{
lean_object* v___x_192_; lean_object* v___x_193_; uint8_t v___x_194_; 
v___x_192_ = ((lean_object*)(l_Lean_isAutoDeclOrPrivate__Internal___redArg___closed__38));
v___x_193_ = lean_unsigned_to_nat(0u);
v___x_194_ = lean_string_memcmp(v_str_101_, v___x_192_, v___x_193_, v___x_193_, v___x_190_);
if (v___x_194_ == 0)
{
goto v___jp_181_;
}
else
{
lean_del_object(v___x_138_);
lean_dec_ref(v_str_101_);
lean_dec(v_pre_100_);
lean_dec_ref(v_env_98_);
goto v___jp_91_;
}
}
}
}
}
else
{
lean_object* v___x_203_; lean_object* v___x_204_; 
lean_dec_ref(v_env_98_);
lean_dec(v_decl_88_);
v___x_203_ = lean_box(v___x_99_);
v___x_204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
return v___x_204_;
}
}
else
{
lean_dec_ref(v_env_98_);
lean_dec(v_decl_88_);
goto v___jp_91_;
}
}
else
{
lean_dec(v_decl_88_);
goto v___jp_91_;
}
}
else
{
lean_dec(v_decl_88_);
goto v___jp_91_;
}
v___jp_91_:
{
uint8_t v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_92_ = 1;
v___x_93_ = lean_box(v___x_92_);
v___x_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
return v___x_94_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isAutoDeclOrPrivate__Internal___redArg___boxed(lean_object* v_decl_205_, lean_object* v_a_206_, lean_object* v_a_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Lean_isAutoDeclOrPrivate__Internal___redArg(v_decl_205_, v_a_206_);
lean_dec(v_a_206_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_isAutoDeclOrPrivate__Internal(lean_object* v_decl_209_, lean_object* v_a_210_, lean_object* v_a_211_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lean_isAutoDeclOrPrivate__Internal___redArg(v_decl_209_, v_a_211_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_isAutoDeclOrPrivate__Internal___boxed(lean_object* v_decl_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l_Lean_isAutoDeclOrPrivate__Internal(v_decl_214_, v_a_215_, v_a_216_);
lean_dec(v_a_216_);
lean_dec_ref(v_a_215_);
return v_res_218_;
}
}
lean_object* runtime_initialize_Lean_Structure(uint8_t builtin);
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_AutoDecl(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_AutoDecl(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Structure(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_AutoDecl(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_AutoDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_AutoDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_AutoDecl(builtin);
}
#ifdef __cplusplus
}
#endif
