// Lean compiler output
// Module: Lean.Meta.GetUnfoldableConst
// Imports: public import Lean.Meta.Basic public import Lean.Meta.Match.MatchPatternAttr
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
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
uint8_t l_Lean_instBEqReducibilityStatus_beq(uint8_t, uint8_t);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
uint8_t l_Lean_hasMatchPatternAttribute(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_recordUnfoldAxiom___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_canUnfoldDefault_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_canUnfoldDefault_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_canUnfoldDefault_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_canUnfoldDefault_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isIrreducible___at___00Lean_Meta_canUnfoldDefault_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isIrreducible___at___00Lean_Meta_canUnfoldDefault_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_canUnfoldDefault(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_canUnfoldDefault___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__0 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__0_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__1 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__1_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__1_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__2 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__2_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "NatCast"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__3 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__3_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "natCast"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__4 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__4_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__3_value),LEAN_SCALAR_PTR_LITERAL(65, 128, 63, 191, 243, 154, 52, 80)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__4_value),LEAN_SCALAR_PTR_LITERAL(47, 224, 192, 179, 253, 143, 7, 98)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__5 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__5_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Zero"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__6 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__6_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__7 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__7_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__6_value),LEAN_SCALAR_PTR_LITERAL(192, 171, 244, 106, 217, 72, 118, 253)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__7_value),LEAN_SCALAR_PTR_LITERAL(172, 37, 33, 120, 251, 36, 203, 36)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__8 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__8_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "One"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__9 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__9_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "one"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__10 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__10_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__9_value),LEAN_SCALAR_PTR_LITERAL(19, 85, 184, 168, 121, 55, 74, 19)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__10_value),LEAN_SCALAR_PTR_LITERAL(31, 134, 200, 93, 163, 253, 252, 128)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__11 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__11_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "decEq"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__12 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__12_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__12_value),LEAN_SCALAR_PTR_LITERAL(173, 33, 189, 14, 17, 44, 93, 202)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__13 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__13_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__14 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__14_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__14_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__15_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__12_value),LEAN_SCALAR_PTR_LITERAL(13, 188, 70, 193, 211, 173, 121, 176)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__15 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__15_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Char"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__16 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__16_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__16_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__17_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 51, 10, 169, 25, 67, 44, 251)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__17 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__17_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ofNatAux"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__18 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__18_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__16_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__19_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__18_value),LEAN_SCALAR_PTR_LITERAL(116, 234, 215, 212, 41, 156, 42, 184)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__19 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__19_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__20 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__20_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__20_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__21_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__12_value),LEAN_SCALAR_PTR_LITERAL(84, 207, 54, 232, 73, 134, 242, 60)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__21 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__21_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__22 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__22_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hasDecEq"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__23 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__23_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__22_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__24_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__23_value),LEAN_SCALAR_PTR_LITERAL(159, 74, 159, 113, 169, 254, 60, 207)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__24 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__24_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Fin"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__25 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__25_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__25_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 162, 2, 110, 238, 123, 219)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__26_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__1_value),LEAN_SCALAR_PTR_LITERAL(127, 21, 77, 8, 216, 186, 116, 67)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__26 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__26_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "UInt8"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__27 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__27_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__27_value),LEAN_SCALAR_PTR_LITERAL(144, 254, 64, 72, 7, 99, 197, 218)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__28_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 212, 171, 80, 86, 90, 103, 206)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__28 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__28_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__27_value),LEAN_SCALAR_PTR_LITERAL(144, 254, 64, 72, 7, 99, 197, 218)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__29_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__12_value),LEAN_SCALAR_PTR_LITERAL(250, 99, 235, 10, 182, 21, 156, 243)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__29 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__29_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt16"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__30 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__30_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__30_value),LEAN_SCALAR_PTR_LITERAL(6, 214, 154, 233, 192, 74, 99, 135)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__31_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__1_value),LEAN_SCALAR_PTR_LITERAL(23, 109, 23, 47, 202, 202, 227, 131)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__31 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__31_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__30_value),LEAN_SCALAR_PTR_LITERAL(6, 214, 154, 233, 192, 74, 99, 135)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__32_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__12_value),LEAN_SCALAR_PTR_LITERAL(84, 139, 186, 14, 71, 124, 11, 146)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__32 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__32_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt32"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__33 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__33_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__33_value),LEAN_SCALAR_PTR_LITERAL(98, 192, 58, 241, 186, 14, 255, 186)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__34_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__1_value),LEAN_SCALAR_PTR_LITERAL(139, 73, 218, 73, 188, 181, 30, 93)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__34 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__34_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__33_value),LEAN_SCALAR_PTR_LITERAL(98, 192, 58, 241, 186, 14, 255, 186)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__35_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__12_value),LEAN_SCALAR_PTR_LITERAL(224, 170, 234, 202, 62, 31, 245, 181)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__35 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__35_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt64"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__36 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__36_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__36_value),LEAN_SCALAR_PTR_LITERAL(58, 113, 45, 150, 103, 228, 0, 41)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__37_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__1_value),LEAN_SCALAR_PTR_LITERAL(211, 45, 252, 130, 147, 16, 202, 24)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__37 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__37_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__36_value),LEAN_SCALAR_PTR_LITERAL(58, 113, 45, 150, 103, 228, 0, 41)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__38_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__12_value),LEAN_SCALAR_PTR_LITERAL(152, 6, 142, 135, 217, 150, 112, 208)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__38 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__38_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__39 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__39_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__40 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__40_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__39_value),LEAN_SCALAR_PTR_LITERAL(93, 4, 3, 35, 188, 254, 191, 190)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__41_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__40_value),LEAN_SCALAR_PTR_LITERAL(120, 199, 142, 238, 9, 44, 94, 134)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__41 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__41_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Mod"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__42 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__42_value;
static const lean_string_object l_Lean_Meta_canUnfoldAtMatcher___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mod"};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__43 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__43_value;
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__42_value),LEAN_SCALAR_PTR_LITERAL(141, 157, 192, 123, 66, 123, 34, 2)}};
static const lean_ctor_object l_Lean_Meta_canUnfoldAtMatcher___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__44_value_aux_0),((lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__43_value),LEAN_SCALAR_PTR_LITERAL(26, 140, 125, 94, 9, 215, 242, 2)}};
static const lean_object* l_Lean_Meta_canUnfoldAtMatcher___closed__44 = (const lean_object*)&l_Lean_Meta_canUnfoldAtMatcher___closed__44_value;
LEAN_EXPORT lean_object* l_Lean_Meta_canUnfoldAtMatcher(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_canUnfoldAtMatcher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_canUnfold___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_canUnfold___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_canUnfold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_canUnfold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldableConst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldableConst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldableConstNoEx_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldableConstNoEx_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_canUnfoldDefault_spec__1___redArg(lean_object* v_declName_1_, lean_object* v___y_2_){
_start:
{
lean_object* v___x_4_; lean_object* v_env_5_; uint8_t v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_4_ = lean_st_ref_get(v___y_2_);
v_env_5_ = lean_ctor_get(v___x_4_, 0);
lean_inc_ref(v_env_5_);
lean_dec(v___x_4_);
v___x_6_ = l_Lean_getReducibilityStatusCore(v_env_5_, v_declName_1_);
v___x_7_ = lean_box(v___x_6_);
v___x_8_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_canUnfoldDefault_spec__1___redArg___boxed(lean_object* v_declName_9_, lean_object* v___y_10_, lean_object* v___y_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_canUnfoldDefault_spec__1___redArg(v_declName_9_, v___y_10_);
lean_dec(v___y_10_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_canUnfoldDefault_spec__1(lean_object* v_declName_13_, lean_object* v___y_14_, lean_object* v___y_15_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_canUnfoldDefault_spec__1___redArg(v_declName_13_, v___y_15_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_Meta_canUnfoldDefault_spec__1___boxed(lean_object* v_declName_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_canUnfoldDefault_spec__1(v_declName_18_, v___y_19_, v___y_20_);
lean_dec(v___y_20_);
lean_dec_ref(v___y_19_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_isIrreducible___at___00Lean_Meta_canUnfoldDefault_spec__0(lean_object* v_declName_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v___x_27_; lean_object* v_a_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_43_; 
v___x_27_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_canUnfoldDefault_spec__1___redArg(v_declName_23_, v___y_25_);
v_a_28_ = lean_ctor_get(v___x_27_, 0);
v_isSharedCheck_43_ = !lean_is_exclusive(v___x_27_);
if (v_isSharedCheck_43_ == 0)
{
v___x_30_ = v___x_27_;
v_isShared_31_ = v_isSharedCheck_43_;
goto v_resetjp_29_;
}
else
{
lean_inc(v_a_28_);
lean_dec(v___x_27_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_43_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
uint8_t v___x_32_; 
v___x_32_ = lean_unbox(v_a_28_);
lean_dec(v_a_28_);
if (v___x_32_ == 2)
{
uint8_t v___x_33_; lean_object* v___x_34_; lean_object* v___x_36_; 
v___x_33_ = 1;
v___x_34_ = lean_box(v___x_33_);
if (v_isShared_31_ == 0)
{
lean_ctor_set(v___x_30_, 0, v___x_34_);
v___x_36_ = v___x_30_;
goto v_reusejp_35_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v___x_34_);
v___x_36_ = v_reuseFailAlloc_37_;
goto v_reusejp_35_;
}
v_reusejp_35_:
{
return v___x_36_;
}
}
else
{
uint8_t v___x_38_; lean_object* v___x_39_; lean_object* v___x_41_; 
v___x_38_ = 0;
v___x_39_ = lean_box(v___x_38_);
if (v_isShared_31_ == 0)
{
lean_ctor_set(v___x_30_, 0, v___x_39_);
v___x_41_ = v___x_30_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_42_; 
v_reuseFailAlloc_42_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_42_, 0, v___x_39_);
v___x_41_ = v_reuseFailAlloc_42_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
return v___x_41_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isIrreducible___at___00Lean_Meta_canUnfoldDefault_spec__0___boxed(lean_object* v_declName_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = l_Lean_isIrreducible___at___00Lean_Meta_canUnfoldDefault_spec__0(v_declName_44_, v___y_45_, v___y_46_);
lean_dec(v___y_46_);
lean_dec_ref(v___y_45_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_canUnfoldDefault(lean_object* v_cfg_49_, lean_object* v_info_50_, lean_object* v_a_51_, lean_object* v_a_52_){
_start:
{
uint8_t v_transparency_62_; 
v_transparency_62_ = lean_ctor_get_uint8(v_cfg_49_, 9);
switch(v_transparency_62_)
{
case 4:
{
goto v___jp_54_;
}
case 0:
{
goto v___jp_58_;
}
case 1:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = l_Lean_ConstantInfo_name(v_info_50_);
v___x_64_ = l_Lean_isIrreducible___at___00Lean_Meta_canUnfoldDefault_spec__0(v___x_63_, v_a_51_, v_a_52_);
if (lean_obj_tag(v___x_64_) == 0)
{
lean_object* v_a_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_80_; 
v_a_65_ = lean_ctor_get(v___x_64_, 0);
v_isSharedCheck_80_ = !lean_is_exclusive(v___x_64_);
if (v_isSharedCheck_80_ == 0)
{
v___x_67_ = v___x_64_;
v_isShared_68_ = v_isSharedCheck_80_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_a_65_);
lean_dec(v___x_64_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_80_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
uint8_t v___x_69_; 
v___x_69_ = lean_unbox(v_a_65_);
lean_dec(v_a_65_);
if (v___x_69_ == 0)
{
uint8_t v___x_70_; lean_object* v___x_71_; lean_object* v___x_73_; 
v___x_70_ = 1;
v___x_71_ = lean_box(v___x_70_);
if (v_isShared_68_ == 0)
{
lean_ctor_set(v___x_67_, 0, v___x_71_);
v___x_73_ = v___x_67_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v___x_71_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
else
{
uint8_t v___x_75_; lean_object* v___x_76_; lean_object* v___x_78_; 
v___x_75_ = 0;
v___x_76_ = lean_box(v___x_75_);
if (v_isShared_68_ == 0)
{
lean_ctor_set(v___x_67_, 0, v___x_76_);
v___x_78_ = v___x_67_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v___x_76_);
v___x_78_ = v_reuseFailAlloc_79_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
return v___x_78_;
}
}
}
}
else
{
return v___x_64_;
}
}
default: 
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v_a_83_; uint8_t v___x_90_; uint8_t v___x_91_; uint8_t v___x_92_; 
v___x_81_ = l_Lean_ConstantInfo_name(v_info_50_);
v___x_82_ = l_Lean_getReducibilityStatus___at___00Lean_Meta_canUnfoldDefault_spec__1___redArg(v___x_81_, v_a_52_);
v_a_83_ = lean_ctor_get(v___x_82_, 0);
lean_inc(v_a_83_);
lean_dec_ref(v___x_82_);
v___x_90_ = 0;
v___x_91_ = lean_unbox(v_a_83_);
v___x_92_ = l_Lean_instBEqReducibilityStatus_beq(v___x_91_, v___x_90_);
if (v___x_92_ == 0)
{
uint8_t v___x_93_; uint8_t v___x_94_; uint8_t v___x_95_; 
v___x_93_ = 4;
v___x_94_ = lean_unbox(v_a_83_);
v___x_95_ = l_Lean_instBEqReducibilityStatus_beq(v___x_94_, v___x_93_);
if (v___x_95_ == 0)
{
goto v___jp_84_;
}
else
{
uint8_t v___x_96_; uint8_t v___x_97_; 
v___x_96_ = 3;
v___x_97_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_62_, v___x_96_);
if (v___x_97_ == 0)
{
uint8_t v___x_98_; uint8_t v___x_99_; 
v___x_98_ = 5;
v___x_99_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_62_, v___x_98_);
if (v___x_99_ == 0)
{
goto v___jp_84_;
}
else
{
lean_dec(v_a_83_);
goto v___jp_58_;
}
}
else
{
lean_dec(v_a_83_);
goto v___jp_58_;
}
}
}
else
{
lean_dec(v_a_83_);
goto v___jp_58_;
}
v___jp_84_:
{
uint8_t v___x_85_; uint8_t v___x_86_; uint8_t v___x_87_; 
v___x_85_ = 3;
v___x_86_ = lean_unbox(v_a_83_);
lean_dec(v_a_83_);
v___x_87_ = l_Lean_instBEqReducibilityStatus_beq(v___x_86_, v___x_85_);
if (v___x_87_ == 0)
{
goto v___jp_54_;
}
else
{
uint8_t v___x_88_; uint8_t v___x_89_; 
v___x_88_ = 5;
v___x_89_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_62_, v___x_88_);
if (v___x_89_ == 0)
{
goto v___jp_54_;
}
else
{
goto v___jp_58_;
}
}
}
}
}
v___jp_54_:
{
uint8_t v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_55_ = 0;
v___x_56_ = lean_box(v___x_55_);
v___x_57_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_57_, 0, v___x_56_);
return v___x_57_;
}
v___jp_58_:
{
uint8_t v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_59_ = 1;
v___x_60_ = lean_box(v___x_59_);
v___x_61_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
return v___x_61_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_canUnfoldDefault___boxed(lean_object* v_cfg_100_, lean_object* v_info_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l_Lean_Meta_canUnfoldDefault(v_cfg_100_, v_info_101_, v_a_102_, v_a_103_);
lean_dec(v_a_103_);
lean_dec_ref(v_a_102_);
lean_dec_ref(v_info_101_);
lean_dec_ref(v_cfg_100_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_canUnfoldAtMatcher(lean_object* v_cfg_192_, lean_object* v_info_193_, lean_object* v_a_194_, lean_object* v_a_195_){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = l_Lean_Meta_canUnfoldDefault(v_cfg_192_, v_info_193_, v_a_194_, v_a_195_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v_a_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_337_; 
v_a_202_ = lean_ctor_get(v___x_201_, 0);
v_isSharedCheck_337_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_337_ == 0)
{
v___x_204_ = v___x_201_;
v_isShared_205_ = v_isSharedCheck_337_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_a_202_);
lean_dec(v___x_201_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_337_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
uint8_t v___x_206_; 
v___x_206_ = lean_unbox(v_a_202_);
lean_dec(v_a_202_);
if (v___x_206_ == 0)
{
lean_object* v___x_207_; lean_object* v_env_208_; lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_207_ = lean_st_ref_get(v_a_195_);
v_env_208_ = lean_ctor_get(v___x_207_, 0);
lean_inc_ref(v_env_208_);
lean_dec(v___x_207_);
v___x_209_ = l_Lean_ConstantInfo_name(v_info_193_);
lean_inc(v___x_209_);
v___x_210_ = l_Lean_hasMatchPatternAttribute(v_env_208_, v___x_209_);
if (v___x_210_ == 0)
{
lean_object* v___x_211_; uint8_t v___x_212_; 
v___x_211_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__2));
v___x_212_ = lean_name_eq(v___x_209_, v___x_211_);
if (v___x_212_ == 0)
{
lean_object* v___x_213_; uint8_t v___x_214_; 
v___x_213_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__5));
v___x_214_ = lean_name_eq(v___x_209_, v___x_213_);
if (v___x_214_ == 0)
{
lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_215_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__8));
v___x_216_ = lean_name_eq(v___x_209_, v___x_215_);
if (v___x_216_ == 0)
{
lean_object* v___x_217_; uint8_t v___x_218_; 
v___x_217_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__11));
v___x_218_ = lean_name_eq(v___x_209_, v___x_217_);
if (v___x_218_ == 0)
{
lean_object* v___x_219_; uint8_t v___x_220_; 
v___x_219_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__13));
v___x_220_ = lean_name_eq(v___x_209_, v___x_219_);
if (v___x_220_ == 0)
{
lean_object* v___x_221_; uint8_t v___x_222_; 
v___x_221_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__15));
v___x_222_ = lean_name_eq(v___x_209_, v___x_221_);
if (v___x_222_ == 0)
{
lean_object* v___x_223_; uint8_t v___x_224_; 
v___x_223_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__17));
v___x_224_ = lean_name_eq(v___x_209_, v___x_223_);
if (v___x_224_ == 0)
{
lean_object* v___x_225_; uint8_t v___x_226_; 
v___x_225_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__19));
v___x_226_ = lean_name_eq(v___x_209_, v___x_225_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; uint8_t v___x_228_; 
v___x_227_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__21));
v___x_228_ = lean_name_eq(v___x_209_, v___x_227_);
if (v___x_228_ == 0)
{
lean_object* v___x_229_; uint8_t v___x_230_; 
v___x_229_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__24));
v___x_230_ = lean_name_eq(v___x_209_, v___x_229_);
if (v___x_230_ == 0)
{
lean_object* v___x_231_; uint8_t v___x_232_; 
v___x_231_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__26));
v___x_232_ = lean_name_eq(v___x_209_, v___x_231_);
if (v___x_232_ == 0)
{
lean_object* v___x_233_; uint8_t v___x_234_; 
v___x_233_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__28));
v___x_234_ = lean_name_eq(v___x_209_, v___x_233_);
if (v___x_234_ == 0)
{
lean_object* v___x_235_; uint8_t v___x_236_; 
v___x_235_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__29));
v___x_236_ = lean_name_eq(v___x_209_, v___x_235_);
if (v___x_236_ == 0)
{
lean_object* v___x_237_; uint8_t v___x_238_; 
v___x_237_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__31));
v___x_238_ = lean_name_eq(v___x_209_, v___x_237_);
if (v___x_238_ == 0)
{
lean_object* v___x_239_; uint8_t v___x_240_; 
v___x_239_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__32));
v___x_240_ = lean_name_eq(v___x_209_, v___x_239_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; uint8_t v___x_242_; 
v___x_241_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__34));
v___x_242_ = lean_name_eq(v___x_209_, v___x_241_);
if (v___x_242_ == 0)
{
lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_243_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__35));
v___x_244_ = lean_name_eq(v___x_209_, v___x_243_);
if (v___x_244_ == 0)
{
lean_object* v___x_245_; uint8_t v___x_246_; 
v___x_245_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__37));
v___x_246_ = lean_name_eq(v___x_209_, v___x_245_);
if (v___x_246_ == 0)
{
lean_object* v___x_247_; uint8_t v___x_248_; 
v___x_247_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__38));
v___x_248_ = lean_name_eq(v___x_209_, v___x_247_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; uint8_t v___x_250_; 
v___x_249_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__41));
v___x_250_ = lean_name_eq(v___x_209_, v___x_249_);
if (v___x_250_ == 0)
{
lean_object* v___x_251_; uint8_t v___x_252_; lean_object* v___x_253_; lean_object* v___x_255_; 
v___x_251_ = ((lean_object*)(l_Lean_Meta_canUnfoldAtMatcher___closed__44));
v___x_252_ = lean_name_eq(v___x_209_, v___x_251_);
lean_dec(v___x_209_);
v___x_253_ = lean_box(v___x_252_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_253_);
v___x_255_ = v___x_204_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v___x_253_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
else
{
lean_object* v___x_257_; lean_object* v___x_259_; 
lean_dec(v___x_209_);
v___x_257_ = lean_box(v___x_250_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_257_);
v___x_259_ = v___x_204_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v___x_257_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
else
{
lean_object* v___x_261_; lean_object* v___x_263_; 
lean_dec(v___x_209_);
v___x_261_ = lean_box(v___x_248_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_261_);
v___x_263_ = v___x_204_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___x_261_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
else
{
lean_object* v___x_265_; lean_object* v___x_267_; 
lean_dec(v___x_209_);
v___x_265_ = lean_box(v___x_246_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_265_);
v___x_267_ = v___x_204_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v___x_265_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
else
{
lean_object* v___x_269_; lean_object* v___x_271_; 
lean_dec(v___x_209_);
v___x_269_ = lean_box(v___x_244_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_269_);
v___x_271_ = v___x_204_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v___x_269_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
else
{
lean_object* v___x_273_; lean_object* v___x_275_; 
lean_dec(v___x_209_);
v___x_273_ = lean_box(v___x_242_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_273_);
v___x_275_ = v___x_204_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v___x_273_);
v___x_275_ = v_reuseFailAlloc_276_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
return v___x_275_;
}
}
}
else
{
lean_object* v___x_277_; lean_object* v___x_279_; 
lean_dec(v___x_209_);
v___x_277_ = lean_box(v___x_240_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_277_);
v___x_279_ = v___x_204_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v___x_277_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
}
}
}
else
{
lean_object* v___x_281_; lean_object* v___x_283_; 
lean_dec(v___x_209_);
v___x_281_ = lean_box(v___x_238_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_281_);
v___x_283_ = v___x_204_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v___x_285_; lean_object* v___x_287_; 
lean_dec(v___x_209_);
v___x_285_ = lean_box(v___x_236_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_285_);
v___x_287_ = v___x_204_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v___x_285_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
else
{
lean_object* v___x_289_; lean_object* v___x_291_; 
lean_dec(v___x_209_);
v___x_289_ = lean_box(v___x_234_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_289_);
v___x_291_ = v___x_204_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v___x_289_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
else
{
lean_object* v___x_293_; lean_object* v___x_295_; 
lean_dec(v___x_209_);
v___x_293_ = lean_box(v___x_232_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_293_);
v___x_295_ = v___x_204_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v___x_293_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
else
{
lean_object* v___x_297_; lean_object* v___x_299_; 
lean_dec(v___x_209_);
v___x_297_ = lean_box(v___x_230_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_297_);
v___x_299_ = v___x_204_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v___x_297_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
}
else
{
lean_object* v___x_301_; lean_object* v___x_303_; 
lean_dec(v___x_209_);
v___x_301_ = lean_box(v___x_228_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_301_);
v___x_303_ = v___x_204_;
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
else
{
lean_object* v___x_305_; lean_object* v___x_307_; 
lean_dec(v___x_209_);
v___x_305_ = lean_box(v___x_226_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_305_);
v___x_307_ = v___x_204_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v___x_305_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
else
{
lean_object* v___x_309_; lean_object* v___x_311_; 
lean_dec(v___x_209_);
v___x_309_ = lean_box(v___x_224_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_309_);
v___x_311_ = v___x_204_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v___x_309_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
return v___x_311_;
}
}
}
else
{
lean_object* v___x_313_; lean_object* v___x_315_; 
lean_dec(v___x_209_);
v___x_313_ = lean_box(v___x_222_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_313_);
v___x_315_ = v___x_204_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v___x_313_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
}
else
{
lean_object* v___x_317_; lean_object* v___x_319_; 
lean_dec(v___x_209_);
v___x_317_ = lean_box(v___x_220_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_317_);
v___x_319_ = v___x_204_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_317_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
else
{
lean_object* v___x_321_; lean_object* v___x_323_; 
lean_dec(v___x_209_);
v___x_321_ = lean_box(v___x_218_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_321_);
v___x_323_ = v___x_204_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v___x_321_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
else
{
lean_object* v___x_325_; lean_object* v___x_327_; 
lean_dec(v___x_209_);
v___x_325_ = lean_box(v___x_216_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_325_);
v___x_327_ = v___x_204_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v___x_325_);
v___x_327_ = v_reuseFailAlloc_328_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
return v___x_327_;
}
}
}
else
{
lean_object* v___x_329_; lean_object* v___x_331_; 
lean_dec(v___x_209_);
v___x_329_ = lean_box(v___x_214_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_329_);
v___x_331_ = v___x_204_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v___x_329_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
}
else
{
lean_object* v___x_333_; lean_object* v___x_335_; 
lean_dec(v___x_209_);
v___x_333_ = lean_box(v___x_212_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_333_);
v___x_335_ = v___x_204_;
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
lean_dec(v___x_209_);
lean_del_object(v___x_204_);
goto v___jp_197_;
}
}
else
{
lean_del_object(v___x_204_);
goto v___jp_197_;
}
}
}
else
{
return v___x_201_;
}
v___jp_197_:
{
uint8_t v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_198_ = 1;
v___x_199_ = lean_box(v___x_198_);
v___x_200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
return v___x_200_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_canUnfoldAtMatcher___boxed(lean_object* v_cfg_338_, lean_object* v_info_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l_Lean_Meta_canUnfoldAtMatcher(v_cfg_338_, v_info_339_, v_a_340_, v_a_341_);
lean_dec(v_a_341_);
lean_dec_ref(v_a_340_);
lean_dec_ref(v_info_339_);
lean_dec_ref(v_cfg_338_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_canUnfold___redArg(lean_object* v_info_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_){
_start:
{
lean_object* v_customCanUnfoldPredicate_x3f_349_; lean_object* v___x_350_; 
v_customCanUnfoldPredicate_x3f_349_ = lean_ctor_get(v_a_345_, 6);
v___x_350_ = l_Lean_Meta_Context_config(v_a_345_);
if (lean_obj_tag(v_customCanUnfoldPredicate_x3f_349_) == 0)
{
uint8_t v_canUnfoldPredicateConfig_351_; 
v_canUnfoldPredicateConfig_351_ = lean_ctor_get_uint8(v___x_350_, 19);
if (v_canUnfoldPredicateConfig_351_ == 0)
{
lean_object* v___x_352_; 
v___x_352_ = l_Lean_Meta_canUnfoldDefault(v___x_350_, v_info_344_, v_a_346_, v_a_347_);
lean_dec_ref(v_info_344_);
lean_dec_ref(v___x_350_);
return v___x_352_;
}
else
{
lean_object* v___x_353_; 
v___x_353_ = l_Lean_Meta_canUnfoldAtMatcher(v___x_350_, v_info_344_, v_a_346_, v_a_347_);
lean_dec_ref(v_info_344_);
lean_dec_ref(v___x_350_);
return v___x_353_;
}
}
else
{
lean_object* v_val_354_; lean_object* v___x_355_; 
v_val_354_ = lean_ctor_get(v_customCanUnfoldPredicate_x3f_349_, 0);
lean_inc(v_val_354_);
lean_inc(v_a_347_);
lean_inc_ref(v_a_346_);
v___x_355_ = lean_apply_5(v_val_354_, v___x_350_, v_info_344_, v_a_346_, v_a_347_, lean_box(0));
return v___x_355_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_canUnfold___redArg___boxed(lean_object* v_info_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_Meta_canUnfold___redArg(v_info_356_, v_a_357_, v_a_358_, v_a_359_);
lean_dec(v_a_359_);
lean_dec_ref(v_a_358_);
lean_dec_ref(v_a_357_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_canUnfold(lean_object* v_info_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_){
_start:
{
lean_object* v___x_368_; 
v___x_368_ = l_Lean_Meta_canUnfold___redArg(v_info_362_, v_a_363_, v_a_365_, v_a_366_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_canUnfold___boxed(lean_object* v_info_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Lean_Meta_canUnfold(v_info_369_, v_a_370_, v_a_371_, v_a_372_, v_a_373_);
lean_dec(v_a_373_);
lean_dec_ref(v_a_372_);
lean_dec(v_a_371_);
lean_dec_ref(v_a_370_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object* v_msgData_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v___x_382_; lean_object* v_env_383_; uint8_t v___x_384_; lean_object* v_env_385_; lean_object* v___x_386_; lean_object* v_toCold_387_; lean_object* v_mctx_388_; lean_object* v_lctx_389_; lean_object* v_options_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_382_ = lean_st_ref_get(v___y_380_);
v_env_383_ = lean_ctor_get(v___x_382_, 0);
lean_inc_ref(v_env_383_);
lean_dec(v___x_382_);
v___x_384_ = 0;
v_env_385_ = l_Lean_Environment_setRecordingDeps(v_env_383_, v___x_384_);
v___x_386_ = lean_st_ref_get(v___y_378_);
v_toCold_387_ = lean_ctor_get(v___y_379_, 0);
v_mctx_388_ = lean_ctor_get(v___x_386_, 0);
lean_inc_ref(v_mctx_388_);
lean_dec(v___x_386_);
v_lctx_389_ = lean_ctor_get(v___y_377_, 2);
v_options_390_ = lean_ctor_get(v_toCold_387_, 2);
lean_inc_ref(v_options_390_);
lean_inc_ref(v_lctx_389_);
v___x_391_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_391_, 0, v_env_385_);
lean_ctor_set(v___x_391_, 1, v_mctx_388_);
lean_ctor_set(v___x_391_, 2, v_lctx_389_);
lean_ctor_set(v___x_391_, 3, v_options_390_);
v___x_392_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
lean_ctor_set(v___x_392_, 1, v_msgData_376_);
v___x_393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2_spec__4_spec__5___boxed(lean_object* v_msgData_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2_spec__4_spec__5(v_msgData_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_);
lean_dec(v___y_398_);
lean_dec_ref(v___y_397_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_msg_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v_ref_407_; lean_object* v___x_408_; lean_object* v_a_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_417_; 
v_ref_407_ = lean_ctor_get(v___y_404_, 2);
v___x_408_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2_spec__4_spec__5(v_msg_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
v_a_409_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_417_ == 0)
{
v___x_411_ = v___x_408_;
v_isShared_412_ = v_isSharedCheck_417_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_a_409_);
lean_dec(v___x_408_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_417_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_413_; lean_object* v___x_415_; 
lean_inc(v_ref_407_);
v___x_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_413_, 0, v_ref_407_);
lean_ctor_set(v___x_413_, 1, v_a_409_);
if (v_isShared_412_ == 0)
{
lean_ctor_set_tag(v___x_411_, 1);
lean_ctor_set(v___x_411_, 0, v___x_413_);
v___x_415_ = v___x_411_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v___x_413_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_msg_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2_spec__4___redArg(v_msg_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_);
lean_dec(v___y_422_);
lean_dec_ref(v___y_421_);
lean_dec(v___y_420_);
lean_dec_ref(v___y_419_);
return v_res_424_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2___redArg(lean_object* v_ref_425_, lean_object* v_msg_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
lean_object* v_toCold_432_; lean_object* v_currRecDepth_433_; lean_object* v_ref_434_; uint16_t v_optionFlags_435_; uint8_t v_suppressElabErrors_436_; uint8_t v_checkDeprecated_437_; uint8_t v_isRecordingDeps_438_; lean_object* v_ref_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v_toCold_432_ = lean_ctor_get(v___y_429_, 0);
v_currRecDepth_433_ = lean_ctor_get(v___y_429_, 1);
v_ref_434_ = lean_ctor_get(v___y_429_, 2);
v_optionFlags_435_ = lean_ctor_get_uint16(v___y_429_, sizeof(void*)*3);
v_suppressElabErrors_436_ = lean_ctor_get_uint8(v___y_429_, sizeof(void*)*3 + 2);
v_checkDeprecated_437_ = lean_ctor_get_uint8(v___y_429_, sizeof(void*)*3 + 3);
v_isRecordingDeps_438_ = lean_ctor_get_uint8(v___y_429_, sizeof(void*)*3 + 4);
v_ref_439_ = l_Lean_replaceRef(v_ref_425_, v_ref_434_);
lean_inc(v_currRecDepth_433_);
lean_inc_ref(v_toCold_432_);
v___x_440_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_440_, 0, v_toCold_432_);
lean_ctor_set(v___x_440_, 1, v_currRecDepth_433_);
lean_ctor_set(v___x_440_, 2, v_ref_439_);
lean_ctor_set_uint16(v___x_440_, sizeof(void*)*3, v_optionFlags_435_);
lean_ctor_set_uint8(v___x_440_, sizeof(void*)*3 + 2, v_suppressElabErrors_436_);
lean_ctor_set_uint8(v___x_440_, sizeof(void*)*3 + 3, v_checkDeprecated_437_);
lean_ctor_set_uint8(v___x_440_, sizeof(void*)*3 + 4, v_isRecordingDeps_438_);
v___x_441_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2_spec__4___redArg(v_msg_426_, v___y_427_, v___y_428_, v___x_440_, v___y_430_);
lean_dec_ref_known(v___x_440_, 3);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_ref_442_, lean_object* v_msg_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2___redArg(v_ref_442_, v_msg_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_);
lean_dec(v___y_447_);
lean_dec_ref(v___y_446_);
lean_dec(v___y_445_);
lean_dec_ref(v___y_444_);
lean_dec(v_ref_442_);
return v_res_449_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_450_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_451_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__0);
v___x_452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_452_, 0, v___x_451_);
return v___x_452_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_453_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__1);
v___x_454_ = lean_unsigned_to_nat(0u);
v___x_455_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___x_454_);
lean_ctor_set(v___x_455_, 2, v___x_454_);
lean_ctor_set(v___x_455_, 3, v___x_454_);
lean_ctor_set(v___x_455_, 4, v___x_453_);
lean_ctor_set(v___x_455_, 5, v___x_453_);
lean_ctor_set(v___x_455_, 6, v___x_453_);
lean_ctor_set(v___x_455_, 7, v___x_453_);
lean_ctor_set(v___x_455_, 8, v___x_453_);
lean_ctor_set(v___x_455_, 9, v___x_453_);
lean_ctor_set(v___x_455_, 10, v___x_453_);
return v___x_455_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_456_ = lean_unsigned_to_nat(32u);
v___x_457_ = lean_mk_empty_array_with_capacity(v___x_456_);
v___x_458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
return v___x_458_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__4(void){
_start:
{
size_t v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_459_ = ((size_t)5ULL);
v___x_460_ = lean_unsigned_to_nat(0u);
v___x_461_ = lean_unsigned_to_nat(32u);
v___x_462_ = lean_mk_empty_array_with_capacity(v___x_461_);
v___x_463_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__3);
v___x_464_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_464_, 0, v___x_463_);
lean_ctor_set(v___x_464_, 1, v___x_462_);
lean_ctor_set(v___x_464_, 2, v___x_460_);
lean_ctor_set(v___x_464_, 3, v___x_460_);
lean_ctor_set_usize(v___x_464_, 4, v___x_459_);
return v___x_464_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_465_ = lean_box(1);
v___x_466_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__4);
v___x_467_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__1);
v___x_468_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_468_, 0, v___x_467_);
lean_ctor_set(v___x_468_, 1, v___x_466_);
lean_ctor_set(v___x_468_, 2, v___x_465_);
return v___x_468_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__7(void){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_470_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__6));
v___x_471_ = l_Lean_stringToMessageData(v___x_470_);
return v___x_471_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__9(void){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__8));
v___x_474_ = l_Lean_stringToMessageData(v___x_473_);
return v___x_474_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__11(void){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_476_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__10));
v___x_477_ = l_Lean_stringToMessageData(v___x_476_);
return v___x_477_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__13(void){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_479_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__12));
v___x_480_ = l_Lean_stringToMessageData(v___x_479_);
return v___x_480_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__15(void){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_482_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__14));
v___x_483_ = l_Lean_stringToMessageData(v___x_482_);
return v___x_483_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__17(void){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__16));
v___x_486_ = l_Lean_stringToMessageData(v___x_485_);
return v___x_486_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__19(void){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__18));
v___x_489_ = l_Lean_stringToMessageData(v___x_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_msg_490_, lean_object* v_declHint_491_, lean_object* v___y_492_){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v_env_496_; uint8_t v___x_497_; 
v___x_494_ = lean_box(0);
v___x_495_ = lean_st_ref_get(v___y_492_);
v_env_496_ = lean_ctor_get(v___x_495_, 0);
lean_inc_ref(v_env_496_);
lean_dec(v___x_495_);
v___x_497_ = l_Lean_Name_isAnonymous(v_declHint_491_);
if (v___x_497_ == 0)
{
uint8_t v_isExporting_498_; 
v_isExporting_498_ = lean_ctor_get_uint8(v_env_496_, sizeof(void*)*13);
if (v_isExporting_498_ == 0)
{
lean_object* v___x_499_; 
lean_dec_ref(v_env_496_);
lean_dec(v_declHint_491_);
v___x_499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_499_, 0, v_msg_490_);
return v___x_499_;
}
else
{
lean_object* v___x_500_; uint8_t v___x_501_; 
lean_inc_ref(v_env_496_);
v___x_500_ = l_Lean_Environment_setExporting(v_env_496_, v___x_497_);
lean_inc(v_declHint_491_);
lean_inc_ref(v___x_500_);
v___x_501_ = l_Lean_Environment_contains(v___x_500_, v_declHint_491_, v_isExporting_498_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; 
lean_dec_ref(v___x_500_);
lean_dec_ref(v_env_496_);
lean_dec(v_declHint_491_);
v___x_502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_502_, 0, v_msg_490_);
return v___x_502_;
}
else
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v_c_508_; lean_object* v___x_509_; 
v___x_503_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__2);
v___x_504_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__5);
v___x_505_ = l_Lean_Options_empty;
lean_inc_ref(v___x_500_);
v___x_506_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_506_, 0, v___x_500_);
lean_ctor_set(v___x_506_, 1, v___x_503_);
lean_ctor_set(v___x_506_, 2, v___x_504_);
lean_ctor_set(v___x_506_, 3, v___x_505_);
lean_inc(v_declHint_491_);
v___x_507_ = l_Lean_MessageData_ofConstName(v_declHint_491_, v___x_497_);
v_c_508_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_508_, 0, v___x_506_);
lean_ctor_set(v_c_508_, 1, v___x_507_);
v___x_509_ = l_Lean_Environment_getModuleIdxFor_x3f(v___x_500_, v_declHint_491_);
lean_dec_ref(v___x_500_);
if (lean_obj_tag(v___x_509_) == 0)
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
lean_dec_ref(v_env_496_);
lean_dec(v_declHint_491_);
v___x_510_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__7);
v___x_511_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_511_, 0, v___x_510_);
lean_ctor_set(v___x_511_, 1, v_c_508_);
v___x_512_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__9);
v___x_513_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_513_, 0, v___x_511_);
lean_ctor_set(v___x_513_, 1, v___x_512_);
v___x_514_ = l_Lean_MessageData_note(v___x_513_);
v___x_515_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_515_, 0, v_msg_490_);
lean_ctor_set(v___x_515_, 1, v___x_514_);
v___x_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_516_, 0, v___x_515_);
return v___x_516_;
}
else
{
lean_object* v_val_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_551_; 
v_val_517_ = lean_ctor_get(v___x_509_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_509_);
if (v_isSharedCheck_551_ == 0)
{
v___x_519_ = v___x_509_;
v_isShared_520_ = v_isSharedCheck_551_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_val_517_);
lean_dec(v___x_509_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_551_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_521_; lean_object* v_moduleNames_522_; lean_object* v_mod_523_; uint8_t v___x_524_; 
v___x_521_ = l_Lean_Environment_header(v_env_496_);
lean_dec_ref(v_env_496_);
v_moduleNames_522_ = lean_ctor_get(v___x_521_, 4);
lean_inc_ref(v_moduleNames_522_);
lean_dec_ref(v___x_521_);
v_mod_523_ = lean_array_get(v___x_494_, v_moduleNames_522_, v_val_517_);
lean_dec(v_val_517_);
lean_dec_ref(v_moduleNames_522_);
v___x_524_ = l_Lean_isPrivateName(v_declHint_491_);
lean_dec(v_declHint_491_);
if (v___x_524_ == 0)
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_536_; 
v___x_525_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__11);
v___x_526_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
lean_ctor_set(v___x_526_, 1, v_c_508_);
v___x_527_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__13);
v___x_528_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_528_, 0, v___x_526_);
lean_ctor_set(v___x_528_, 1, v___x_527_);
v___x_529_ = l_Lean_MessageData_ofName(v_mod_523_);
v___x_530_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_530_, 0, v___x_528_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
v___x_531_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__15);
v___x_532_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_532_, 0, v___x_530_);
lean_ctor_set(v___x_532_, 1, v___x_531_);
v___x_533_ = l_Lean_MessageData_note(v___x_532_);
v___x_534_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_534_, 0, v_msg_490_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
if (v_isShared_520_ == 0)
{
lean_ctor_set_tag(v___x_519_, 0);
lean_ctor_set(v___x_519_, 0, v___x_534_);
v___x_536_ = v___x_519_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v___x_534_);
v___x_536_ = v_reuseFailAlloc_537_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
return v___x_536_;
}
}
else
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_549_; 
v___x_538_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__7);
v___x_539_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
lean_ctor_set(v___x_539_, 1, v_c_508_);
v___x_540_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__17);
v___x_541_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_541_, 0, v___x_539_);
lean_ctor_set(v___x_541_, 1, v___x_540_);
v___x_542_ = l_Lean_MessageData_ofName(v_mod_523_);
v___x_543_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_543_, 0, v___x_541_);
lean_ctor_set(v___x_543_, 1, v___x_542_);
v___x_544_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___closed__19);
v___x_545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_545_, 0, v___x_543_);
lean_ctor_set(v___x_545_, 1, v___x_544_);
v___x_546_ = l_Lean_MessageData_note(v___x_545_);
v___x_547_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_547_, 0, v_msg_490_);
lean_ctor_set(v___x_547_, 1, v___x_546_);
if (v_isShared_520_ == 0)
{
lean_ctor_set_tag(v___x_519_, 0);
lean_ctor_set(v___x_519_, 0, v___x_547_);
v___x_549_ = v___x_519_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_547_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_552_; 
lean_dec_ref(v_env_496_);
lean_dec(v_declHint_491_);
v___x_552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_552_, 0, v_msg_490_);
return v___x_552_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_msg_553_, lean_object* v_declHint_554_, lean_object* v___y_555_, lean_object* v___y_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg(v_msg_553_, v_declHint_554_, v___y_555_);
lean_dec(v___y_555_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1(lean_object* v_msg_558_, lean_object* v_declHint_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
lean_object* v___x_565_; lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_575_; 
v___x_565_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg(v_msg_558_, v_declHint_559_, v___y_563_);
v_a_566_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_575_ == 0)
{
v___x_568_ = v___x_565_;
v_isShared_569_ = v_isSharedCheck_575_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_dec(v___x_565_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_575_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_573_; 
v___x_570_ = l_Lean_unknownIdentifierMessageTag;
v___x_571_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_571_, 0, v___x_570_);
lean_ctor_set(v___x_571_, 1, v_a_566_);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 0, v___x_571_);
v___x_573_ = v___x_568_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v___x_571_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_msg_576_, lean_object* v_declHint_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1(v_msg_576_, v_declHint_577_, v___y_578_, v___y_579_, v___y_580_, v___y_581_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_580_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0___redArg(lean_object* v_ref_584_, lean_object* v_msg_585_, lean_object* v_declHint_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_){
_start:
{
lean_object* v___x_592_; lean_object* v_a_593_; lean_object* v___x_594_; 
v___x_592_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1(v_msg_585_, v_declHint_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
v_a_593_ = lean_ctor_get(v___x_592_, 0);
lean_inc(v_a_593_);
lean_dec_ref(v___x_592_);
v___x_594_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2___redArg(v_ref_584_, v_a_593_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_ref_595_, lean_object* v_msg_596_, lean_object* v_declHint_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0___redArg(v_ref_595_, v_msg_596_, v_declHint_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
lean_dec(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
lean_dec(v_ref_595_);
return v_res_603_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_605_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__0));
v___x_606_ = l_Lean_stringToMessageData(v___x_605_);
return v___x_606_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_608_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__2));
v___x_609_ = l_Lean_stringToMessageData(v___x_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg(lean_object* v_ref_610_, lean_object* v_constName_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_){
_start:
{
lean_object* v___x_617_; uint8_t v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_617_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__1);
v___x_618_ = 0;
lean_inc(v_constName_611_);
v___x_619_ = l_Lean_MessageData_ofConstName(v_constName_611_, v___x_618_);
v___x_620_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_620_, 0, v___x_617_);
lean_ctor_set(v___x_620_, 1, v___x_619_);
v___x_621_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___closed__3);
v___x_622_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_622_, 0, v___x_620_);
lean_ctor_set(v___x_622_, 1, v___x_621_);
v___x_623_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0___redArg(v_ref_610_, v___x_622_, v_constName_611_, v___y_612_, v___y_613_, v___y_614_, v___y_615_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg___boxed(lean_object* v_ref_624_, lean_object* v_constName_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg(v_ref_624_, v_constName_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_);
lean_dec(v___y_629_);
lean_dec_ref(v___y_628_);
lean_dec(v___y_627_);
lean_dec_ref(v___y_626_);
lean_dec(v_ref_624_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldableConst_x3f(lean_object* v_constName_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_){
_start:
{
lean_object* v___x_641_; lean_object* v_env_642_; uint8_t v___x_643_; lean_object* v___x_644_; 
v___x_641_ = lean_st_ref_get(v_a_636_);
v_env_642_ = lean_ctor_get(v___x_641_, 0);
lean_inc_ref(v_env_642_);
lean_dec(v___x_641_);
v___x_643_ = 0;
lean_inc(v_constName_632_);
v___x_644_ = l_Lean_Environment_findAsync_x3f(v_env_642_, v_constName_632_, v___x_643_);
if (lean_obj_tag(v___x_644_) == 1)
{
lean_object* v_val_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_674_; 
lean_dec(v_constName_632_);
v_val_645_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_674_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_674_ == 0)
{
v___x_647_ = v___x_644_;
v_isShared_648_ = v_isSharedCheck_674_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_val_645_);
lean_dec(v___x_644_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_674_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
uint8_t v_kind_649_; 
v_kind_649_ = lean_ctor_get_uint8(v_val_645_, sizeof(void*)*3);
switch(v_kind_649_)
{
case 1:
{
lean_del_object(v___x_647_);
lean_dec(v_val_645_);
goto v___jp_638_;
}
case 0:
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_645_);
lean_inc_ref(v___x_650_);
v___x_651_ = l_Lean_Meta_canUnfold___redArg(v___x_650_, v_a_633_, v_a_635_, v_a_636_);
if (lean_obj_tag(v___x_651_) == 0)
{
lean_object* v_a_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_663_; 
v_a_652_ = lean_ctor_get(v___x_651_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_663_ == 0)
{
v___x_654_ = v___x_651_;
v_isShared_655_ = v_isSharedCheck_663_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_a_652_);
lean_dec(v___x_651_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_663_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
uint8_t v___x_656_; 
v___x_656_ = lean_unbox(v_a_652_);
lean_dec(v_a_652_);
if (v___x_656_ == 0)
{
lean_del_object(v___x_654_);
lean_dec_ref(v___x_650_);
lean_del_object(v___x_647_);
goto v___jp_638_;
}
else
{
lean_object* v___x_658_; 
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 0, v___x_650_);
v___x_658_ = v___x_647_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v___x_650_);
v___x_658_ = v_reuseFailAlloc_662_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
lean_object* v___x_660_; 
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 0, v___x_658_);
v___x_660_ = v___x_654_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v___x_658_);
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
}
else
{
lean_object* v_a_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_671_; 
lean_dec_ref(v___x_650_);
lean_del_object(v___x_647_);
v_a_664_ = lean_ctor_get(v___x_651_, 0);
v_isSharedCheck_671_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_671_ == 0)
{
v___x_666_ = v___x_651_;
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_a_664_);
lean_dec(v___x_651_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_669_; 
if (v_isShared_667_ == 0)
{
v___x_669_ = v___x_666_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_a_664_);
v___x_669_ = v_reuseFailAlloc_670_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
return v___x_669_;
}
}
}
}
default: 
{
lean_object* v___x_672_; lean_object* v___x_673_; 
lean_del_object(v___x_647_);
lean_dec(v_val_645_);
v___x_672_ = lean_box(0);
v___x_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
return v___x_673_;
}
}
}
}
else
{
lean_object* v_ref_675_; lean_object* v___x_676_; 
lean_dec(v___x_644_);
v_ref_675_ = lean_ctor_get(v_a_635_, 2);
v___x_676_ = l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg(v_ref_675_, v_constName_632_, v_a_633_, v_a_634_, v_a_635_, v_a_636_);
return v___x_676_;
}
v___jp_638_:
{
lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_639_ = lean_box(0);
v___x_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
return v___x_640_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldableConst_x3f___boxed(lean_object* v_constName_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_Lean_Meta_getUnfoldableConst_x3f(v_constName_677_, v_a_678_, v_a_679_, v_a_680_, v_a_681_);
lean_dec(v_a_681_);
lean_dec_ref(v_a_680_);
lean_dec(v_a_679_);
lean_dec_ref(v_a_678_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0(lean_object* v_00_u03b1_684_, lean_object* v_ref_685_, lean_object* v_constName_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_){
_start:
{
lean_object* v___x_692_; 
v___x_692_ = l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___redArg(v_ref_685_, v_constName_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0___boxed(lean_object* v_00_u03b1_693_, lean_object* v_ref_694_, lean_object* v_constName_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0(v_00_u03b1_693_, v_ref_694_, v_constName_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
lean_dec(v___y_697_);
lean_dec_ref(v___y_696_);
lean_dec(v_ref_694_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0(lean_object* v_00_u03b1_702_, lean_object* v_ref_703_, lean_object* v_msg_704_, lean_object* v_declHint_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_){
_start:
{
lean_object* v___x_711_; 
v___x_711_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0___redArg(v_ref_703_, v_msg_704_, v_declHint_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b1_712_, lean_object* v_ref_713_, lean_object* v_msg_714_, lean_object* v_declHint_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_){
_start:
{
lean_object* v_res_721_; 
v_res_721_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0(v_00_u03b1_712_, v_ref_713_, v_msg_714_, v_declHint_715_, v___y_716_, v___y_717_, v___y_718_, v___y_719_);
lean_dec(v___y_719_);
lean_dec_ref(v___y_718_);
lean_dec(v___y_717_);
lean_dec_ref(v___y_716_);
lean_dec(v_ref_713_);
return v_res_721_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2(lean_object* v_msg_722_, lean_object* v_declHint_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_){
_start:
{
lean_object* v___x_729_; 
v___x_729_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___redArg(v_msg_722_, v_declHint_723_, v___y_727_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_msg_730_, lean_object* v_declHint_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_){
_start:
{
lean_object* v_res_737_; 
v_res_737_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__1_spec__2(v_msg_730_, v_declHint_731_, v___y_732_, v___y_733_, v___y_734_, v___y_735_);
lean_dec(v___y_735_);
lean_dec_ref(v___y_734_);
lean_dec(v___y_733_);
lean_dec_ref(v___y_732_);
return v_res_737_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_738_, lean_object* v_ref_739_, lean_object* v_msg_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_){
_start:
{
lean_object* v___x_746_; 
v___x_746_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2___redArg(v_ref_739_, v_msg_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_747_, lean_object* v_ref_748_, lean_object* v_msg_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
lean_object* v_res_755_; 
v_res_755_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2(v_00_u03b1_747_, v_ref_748_, v_msg_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
lean_dec(v_ref_748_);
return v_res_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b1_756_, lean_object* v_msg_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_){
_start:
{
lean_object* v___x_763_; 
v___x_763_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2_spec__4___redArg(v_msg_757_, v___y_758_, v___y_759_, v___y_760_, v___y_761_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_00_u03b1_764_, lean_object* v_msg_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_Meta_getUnfoldableConst_x3f_spec__0_spec__0_spec__2_spec__4(v_00_u03b1_764_, v_msg_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
lean_dec(v___y_767_);
lean_dec_ref(v___y_766_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldableConstNoEx_x3f(lean_object* v_constName_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_){
_start:
{
lean_object* v___x_781_; lean_object* v_env_782_; uint8_t v___x_783_; lean_object* v___x_784_; 
v___x_781_ = lean_st_ref_get(v_a_776_);
v_env_782_ = lean_ctor_get(v___x_781_, 0);
lean_inc_ref(v_env_782_);
lean_dec(v___x_781_);
v___x_783_ = 0;
lean_inc(v_constName_772_);
v___x_784_ = l_Lean_Environment_find_x3f(v_env_782_, v_constName_772_, v___x_783_);
if (lean_obj_tag(v___x_784_) == 1)
{
lean_object* v_val_785_; 
v_val_785_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_val_785_);
switch(lean_obj_tag(v_val_785_))
{
case 2:
{
lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_793_; 
lean_dec_ref_known(v___x_784_, 1);
lean_dec(v_constName_772_);
v_isSharedCheck_793_ = !lean_is_exclusive(v_val_785_);
if (v_isSharedCheck_793_ == 0)
{
lean_object* v_unused_794_; 
v_unused_794_ = lean_ctor_get(v_val_785_, 0);
lean_dec(v_unused_794_);
v___x_787_ = v_val_785_;
v_isShared_788_ = v_isSharedCheck_793_;
goto v_resetjp_786_;
}
else
{
lean_dec(v_val_785_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_793_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_789_; lean_object* v___x_791_; 
v___x_789_ = lean_box(0);
if (v_isShared_788_ == 0)
{
lean_ctor_set_tag(v___x_787_, 0);
lean_ctor_set(v___x_787_, 0, v___x_789_);
v___x_791_ = v___x_787_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_789_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
case 1:
{
lean_object* v___x_795_; 
lean_dec(v_constName_772_);
v___x_795_ = l_Lean_Meta_canUnfold___redArg(v_val_785_, v_a_773_, v_a_775_, v_a_776_);
if (lean_obj_tag(v___x_795_) == 0)
{
lean_object* v_a_796_; lean_object* v___x_798_; uint8_t v_isShared_799_; uint8_t v_isSharedCheck_808_; 
v_a_796_ = lean_ctor_get(v___x_795_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_795_);
if (v_isSharedCheck_808_ == 0)
{
v___x_798_ = v___x_795_;
v_isShared_799_ = v_isSharedCheck_808_;
goto v_resetjp_797_;
}
else
{
lean_inc(v_a_796_);
lean_dec(v___x_795_);
v___x_798_ = lean_box(0);
v_isShared_799_ = v_isSharedCheck_808_;
goto v_resetjp_797_;
}
v_resetjp_797_:
{
uint8_t v___x_800_; 
v___x_800_ = lean_unbox(v_a_796_);
lean_dec(v_a_796_);
if (v___x_800_ == 0)
{
lean_object* v___x_801_; lean_object* v___x_803_; 
lean_dec_ref_known(v___x_784_, 1);
v___x_801_ = lean_box(0);
if (v_isShared_799_ == 0)
{
lean_ctor_set(v___x_798_, 0, v___x_801_);
v___x_803_ = v___x_798_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v___x_801_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
else
{
lean_object* v___x_806_; 
if (v_isShared_799_ == 0)
{
lean_ctor_set(v___x_798_, 0, v___x_784_);
v___x_806_ = v___x_798_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v___x_784_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
}
else
{
lean_object* v_a_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_816_; 
lean_dec_ref_known(v___x_784_, 1);
v_a_809_ = lean_ctor_get(v___x_795_, 0);
v_isSharedCheck_816_ = !lean_is_exclusive(v___x_795_);
if (v_isSharedCheck_816_ == 0)
{
v___x_811_ = v___x_795_;
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_a_809_);
lean_dec(v___x_795_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v___x_814_; 
if (v_isShared_812_ == 0)
{
v___x_814_ = v___x_811_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_a_809_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
}
}
case 0:
{
lean_object* v___x_817_; 
lean_dec_ref_known(v_val_785_, 1);
lean_dec_ref_known(v___x_784_, 1);
v___x_817_ = l_Lean_Meta_recordUnfoldAxiom___redArg(v_constName_772_, v_a_774_, v_a_775_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_825_; 
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_825_ == 0)
{
lean_object* v_unused_826_; 
v_unused_826_ = lean_ctor_get(v___x_817_, 0);
lean_dec(v_unused_826_);
v___x_819_ = v___x_817_;
v_isShared_820_ = v_isSharedCheck_825_;
goto v_resetjp_818_;
}
else
{
lean_dec(v___x_817_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_825_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v___x_821_; lean_object* v___x_823_; 
v___x_821_ = lean_box(0);
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 0, v___x_821_);
v___x_823_ = v___x_819_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v___x_821_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
else
{
lean_object* v_a_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_834_; 
v_a_827_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_834_ == 0)
{
v___x_829_ = v___x_817_;
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_a_827_);
lean_dec(v___x_817_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_832_; 
if (v_isShared_830_ == 0)
{
v___x_832_ = v___x_829_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_a_827_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
default: 
{
lean_dec(v_val_785_);
lean_dec_ref_known(v___x_784_, 1);
lean_dec(v_constName_772_);
goto v___jp_778_;
}
}
}
else
{
lean_dec(v___x_784_);
lean_dec(v_constName_772_);
goto v___jp_778_;
}
v___jp_778_:
{
lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_779_ = lean_box(0);
v___x_780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_780_, 0, v___x_779_);
return v___x_780_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getUnfoldableConstNoEx_x3f___boxed(lean_object* v_constName_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_Lean_Meta_getUnfoldableConstNoEx_x3f(v_constName_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_);
lean_dec(v_a_839_);
lean_dec_ref(v_a_838_);
lean_dec(v_a_837_);
lean_dec_ref(v_a_836_);
return v_res_841_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatchPatternAttr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_GetUnfoldableConst(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatchPatternAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_GetUnfoldableConst(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatchPatternAttr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_GetUnfoldableConst(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatchPatternAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_GetUnfoldableConst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_GetUnfoldableConst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_GetUnfoldableConst(builtin);
}
#ifdef __cplusplus
}
#endif
