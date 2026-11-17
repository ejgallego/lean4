// Lean compiler output
// Module: Lean.Linter.AmbiguousOpen
// Imports: public import Lean.ResolveName public import Lean.Linter.Init
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
uint8_t l_List_any___redArg(lean_object*, lean_object*);
lean_object* l_List_eraseDups___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Linter_logLint___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_rootNamespace;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l_List_elem___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Environment_isNamespace(lean_object*, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterTR_loop___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Linter_getLinterOptions___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "ambiguousOpen"};
static const lean_object* l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(55, 219, 89, 241, 127, 128, 208, 200)}};
static const lean_object* l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 212, .m_capacity = 212, .m_length = 211, .m_data = "if true, warn when the namespace of an `open` declaration could also refer to a namespace that is silently not opened, e.g. `open B` inside `namespace A` only opens `A.B` even if the namespace `B` exists as well"};
static const lean_object* l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(53, 243, 121, 207, 53, 172, 203, 87)}};
static const lean_ctor_object l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(164, 74, 3, 36, 226, 77, 50, 136)}};
static const lean_object* l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_linter_ambiguousOpen;
LEAN_EXPORT lean_object* l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_scopeCandidates(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_checkAmbiguousOpen___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__0(lean_object*);
static const lean_string_object l_Lean_Linter_checkAmbiguousOpen___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Linter_checkAmbiguousOpen___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__1___closed__0_value)}};
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__1___closed__1_value;
static lean_once_cell_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__3(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__4(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Ambiguous namespace `"};
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__0 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__0_value;
static lean_once_cell_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__1;
static const lean_string_object l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "`: this `open` refers to all of "};
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__2 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__2_value;
static lean_once_cell_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__3;
static const lean_string_object l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ", while "};
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__4 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__4_value;
static lean_once_cell_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__5;
static const lean_string_object l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = " because the `open` occurs inside `namespace "};
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__6 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__6_value;
static lean_once_cell_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__7;
static const lean_string_object l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__8 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__8_value;
static lean_once_cell_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__9;
static const lean_string_object l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = " Specify the namespace unambiguously, e.g. `"};
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__10 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__10_value;
static lean_once_cell_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__11;
static const lean_string_object l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 108, .m_capacity = 108, .m_length = 107, .m_data = "`. The warning can sometimes also be addressed by moving the `open` outside of the surrounding `namespace`."};
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__12 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__12_value;
static lean_once_cell_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__13;
static const lean_string_object l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "`: it is interpreted as "};
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__14 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__14_value;
static lean_once_cell_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__15;
static const lean_string_object l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = " because this `open` occurs inside `namespace "};
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__16 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__16_value;
static lean_once_cell_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__17;
static const lean_string_object l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "`, while "};
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__18 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__18_value;
static lean_once_cell_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__19;
static const lean_string_object l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__20 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__20_value;
static lean_once_cell_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__21;
static const lean_string_object l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = " are silently not opened"};
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__22 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__22_value;
static lean_once_cell_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__23;
static const lean_string_object l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = " is silently not opened"};
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__24 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__24_value;
static lean_once_cell_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__25;
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__7(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__8(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Linter_checkAmbiguousOpen___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Linter_checkAmbiguousOpen___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___closed__0 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___closed__0_value;
static const lean_closure_object l_Lean_Linter_checkAmbiguousOpen___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Linter_checkAmbiguousOpen___redArg___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___closed__0_value)} };
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___closed__1 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___closed__1_value;
static const lean_closure_object l_Lean_Linter_checkAmbiguousOpen___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___closed__2 = (const lean_object*)&l_Lean_Linter_checkAmbiguousOpen___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4_));
v___x_54_ = ((lean_object*)(l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4_));
v___x_55_ = ((lean_object*)(l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4_));
v___x_56_ = l_Lean_Option_register___at___00__private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4__spec__0(v___x_53_, v___x_54_, v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4____boxed(lean_object* v_a_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4_();
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_scopeCandidates(lean_object* v_env_59_, lean_object* v_id_60_, lean_object* v_x_61_){
_start:
{
if (lean_obj_tag(v_x_61_) == 1)
{
lean_object* v_pre_62_; lean_object* v_rest_63_; lean_object* v___x_64_; uint8_t v___x_65_; 
v_pre_62_ = lean_ctor_get(v_x_61_, 0);
lean_inc(v_pre_62_);
lean_inc(v_id_60_);
lean_inc_ref(v_env_59_);
v_rest_63_ = l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_scopeCandidates(v_env_59_, v_id_60_, v_pre_62_);
v___x_64_ = l_Lean_Name_append(v_x_61_, v_id_60_);
v___x_65_ = l_Lean_Environment_isNamespace(v_env_59_, v___x_64_);
if (v___x_65_ == 0)
{
lean_dec(v___x_64_);
return v_rest_63_;
}
else
{
lean_object* v___x_66_; 
v___x_66_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_64_);
lean_ctor_set(v___x_66_, 1, v_rest_63_);
return v___x_66_;
}
}
else
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v_id_69_; uint8_t v___x_70_; 
lean_dec(v_x_61_);
v___x_67_ = l_Lean_rootNamespace;
v___x_68_ = lean_box(0);
v_id_69_ = l_Lean_Name_replacePrefix(v_id_60_, v___x_67_, v___x_68_);
v___x_70_ = l_Lean_Environment_isNamespace(v_env_59_, v_id_69_);
if (v___x_70_ == 0)
{
lean_object* v___x_71_; 
lean_dec(v_id_69_);
v___x_71_ = lean_box(0);
return v___x_71_;
}
else
{
lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_72_ = lean_box(0);
v___x_73_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_73_, 0, v_id_69_);
lean_ctor_set(v___x_73_, 1, v___x_72_);
return v___x_73_;
}
}
}
}
static lean_object* _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = ((lean_object*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__0___closed__0));
v___x_76_ = l_Lean_stringToMessageData(v___x_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__0(lean_object* v_n_77_){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_78_ = lean_obj_once(&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__0___closed__1, &l_Lean_Linter_checkAmbiguousOpen___redArg___lam__0___closed__1_once, _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__0___closed__1);
v___x_79_ = l_Lean_rootNamespace;
v___x_80_ = l_Lean_Name_append(v___x_79_, v_n_77_);
v___x_81_ = l_Lean_MessageData_ofName(v___x_80_);
v___x_82_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_78_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
v___x_83_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
lean_ctor_set(v___x_83_, 1, v___x_78_);
return v___x_83_;
}
}
static lean_object* _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__1___closed__2(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_87_ = ((lean_object*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__1___closed__1));
v___x_88_ = l_Lean_MessageData_ofFormat(v___x_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__1(lean_object* v_display_89_, lean_object* v_ns_90_){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_91_ = lean_box(0);
v___x_92_ = l_List_mapTR_loop___redArg(v_display_89_, v_ns_90_, v___x_91_);
v___x_93_ = lean_obj_once(&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__1___closed__2, &l_Lean_Linter_checkAmbiguousOpen___redArg___lam__1___closed__2_once, _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__1___closed__2);
v___x_94_ = l_Lean_MessageData_joinSep(v___x_92_, v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__2(lean_object* v_toPure_95_, lean_object* v_00___96_){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = lean_box(0);
v___x_98_ = lean_apply_2(v_toPure_95_, lean_box(0), v___x_97_);
return v___x_98_;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__3(uint8_t v___x_99_, lean_object* v_x_100_){
_start:
{
if (lean_obj_tag(v_x_100_) == 0)
{
return v___x_99_;
}
else
{
uint8_t v___x_101_; 
v___x_101_ = 0;
return v___x_101_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__3___boxed(lean_object* v___x_102_, lean_object* v_x_103_){
_start:
{
uint8_t v___x_1759__boxed_104_; uint8_t v_res_105_; lean_object* v_r_106_; 
v___x_1759__boxed_104_ = lean_unbox(v___x_102_);
v_res_105_ = l_Lean_Linter_checkAmbiguousOpen___redArg___lam__3(v___x_1759__boxed_104_, v_x_103_);
lean_dec_ref(v_x_103_);
v_r_106_ = lean_box(v_res_105_);
return v_r_106_;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__4(lean_object* v_n_107_, uint8_t v___x_108_, lean_object* v_x_109_){
_start:
{
if (lean_obj_tag(v_x_109_) == 0)
{
lean_object* v_except_110_; 
v_except_110_ = lean_ctor_get(v_x_109_, 1);
if (lean_obj_tag(v_except_110_) == 0)
{
lean_object* v_ns_111_; uint8_t v___x_112_; 
v_ns_111_ = lean_ctor_get(v_x_109_, 0);
v___x_112_ = lean_name_eq(v_ns_111_, v_n_107_);
return v___x_112_;
}
else
{
return v___x_108_;
}
}
else
{
return v___x_108_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__4___boxed(lean_object* v_n_113_, lean_object* v___x_114_, lean_object* v_x_115_){
_start:
{
uint8_t v___x_1768__boxed_116_; uint8_t v_res_117_; lean_object* v_r_118_; 
v___x_1768__boxed_116_ = lean_unbox(v___x_114_);
v_res_117_ = l_Lean_Linter_checkAmbiguousOpen___redArg___lam__4(v_n_113_, v___x_1768__boxed_116_, v_x_115_);
lean_dec_ref(v_x_115_);
lean_dec(v_n_113_);
v_r_118_ = lean_box(v_res_117_);
return v_r_118_;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_checkAmbiguousOpen___redArg___lam__5(lean_object* v___x_119_, lean_object* v_resolved_120_, lean_object* v_currNamespace_121_, lean_object* v_openDecls_122_, uint8_t v___x_123_, uint8_t v___x_124_, lean_object* v_n_125_){
_start:
{
uint8_t v___x_126_; 
lean_inc(v_n_125_);
v___x_126_ = l_List_elem___redArg(v___x_119_, v_n_125_, v_resolved_120_);
if (v___x_126_ == 0)
{
uint8_t v___x_127_; 
v___x_127_ = l_Lean_Name_isPrefixOf(v_n_125_, v_currNamespace_121_);
if (v___x_127_ == 0)
{
lean_object* v___x_128_; lean_object* v___f_129_; uint8_t v___x_130_; 
v___x_128_ = lean_box(v___x_127_);
v___f_129_ = lean_alloc_closure((void*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__4___boxed), 3, 2);
lean_closure_set(v___f_129_, 0, v_n_125_);
lean_closure_set(v___f_129_, 1, v___x_128_);
v___x_130_ = l_List_any___redArg(v_openDecls_122_, v___f_129_);
if (v___x_130_ == 0)
{
return v___x_123_;
}
else
{
return v___x_124_;
}
}
else
{
lean_dec(v_n_125_);
lean_dec(v_openDecls_122_);
return v___x_124_;
}
}
else
{
lean_dec(v_n_125_);
lean_dec(v_openDecls_122_);
return v___x_124_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__5___boxed(lean_object* v___x_131_, lean_object* v_resolved_132_, lean_object* v_currNamespace_133_, lean_object* v_openDecls_134_, lean_object* v___x_135_, lean_object* v___x_136_, lean_object* v_n_137_){
_start:
{
uint8_t v___x_1781__boxed_138_; uint8_t v___x_1782__boxed_139_; uint8_t v_res_140_; lean_object* v_r_141_; 
v___x_1781__boxed_138_ = lean_unbox(v___x_135_);
v___x_1782__boxed_139_ = lean_unbox(v___x_136_);
v_res_140_ = l_Lean_Linter_checkAmbiguousOpen___redArg___lam__5(v___x_131_, v_resolved_132_, v_currNamespace_133_, v_openDecls_134_, v___x_1781__boxed_138_, v___x_1782__boxed_139_, v_n_137_);
lean_dec(v_currNamespace_133_);
v_r_141_ = lean_box(v_res_140_);
return v_r_141_;
}
}
static lean_object* _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__1(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = ((lean_object*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__0));
v___x_144_ = l_Lean_stringToMessageData(v___x_143_);
return v___x_144_;
}
}
static lean_object* _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__3(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = ((lean_object*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__2));
v___x_147_ = l_Lean_stringToMessageData(v___x_146_);
return v___x_147_;
}
}
static lean_object* _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__5(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_149_ = ((lean_object*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__4));
v___x_150_ = l_Lean_stringToMessageData(v___x_149_);
return v___x_150_;
}
}
static lean_object* _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__7(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_152_ = ((lean_object*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__6));
v___x_153_ = l_Lean_stringToMessageData(v___x_152_);
return v___x_153_;
}
}
static lean_object* _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__9(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = ((lean_object*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__8));
v___x_156_ = l_Lean_stringToMessageData(v___x_155_);
return v___x_156_;
}
}
static lean_object* _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__11(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_158_ = ((lean_object*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__10));
v___x_159_ = l_Lean_stringToMessageData(v___x_158_);
return v___x_159_;
}
}
static lean_object* _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__13(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_161_ = ((lean_object*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__12));
v___x_162_ = l_Lean_stringToMessageData(v___x_161_);
return v___x_162_;
}
}
static lean_object* _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__15(void){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = ((lean_object*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__14));
v___x_165_ = l_Lean_stringToMessageData(v___x_164_);
return v___x_165_;
}
}
static lean_object* _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__17(void){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_167_ = ((lean_object*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__16));
v___x_168_ = l_Lean_stringToMessageData(v___x_167_);
return v___x_168_;
}
}
static lean_object* _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__19(void){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = ((lean_object*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__18));
v___x_171_ = l_Lean_stringToMessageData(v___x_170_);
return v___x_171_;
}
}
static lean_object* _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__21(void){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_173_ = ((lean_object*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__20));
v___x_174_ = l_Lean_stringToMessageData(v___x_173_);
return v___x_174_;
}
}
static lean_object* _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__23(void){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_176_ = ((lean_object*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__22));
v___x_177_ = l_Lean_stringToMessageData(v___x_176_);
return v___x_177_;
}
}
static lean_object* _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__25(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = ((lean_object*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__24));
v___x_180_ = l_Lean_stringToMessageData(v___x_179_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6(lean_object* v___x_181_, lean_object* v_resolved_182_, lean_object* v_currNamespace_183_, uint8_t v___x_184_, uint8_t v___x_185_, lean_object* v_env_186_, lean_object* v_val_187_, lean_object* v_displayAll_188_, lean_object* v_inst_189_, lean_object* v_inst_190_, lean_object* v_inst_191_, lean_object* v_inst_192_, lean_object* v___x_193_, lean_object* v_nsStx_194_, lean_object* v___x_195_, lean_object* v_display_196_, lean_object* v___f_197_, lean_object* v_openDecls_198_){
_start:
{
lean_object* v___y_200_; lean_object* v___y_201_; lean_object* v___y_221_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___f_259_; lean_object* v_candidates_260_; lean_object* v___x_261_; lean_object* v_shadowed_262_; uint8_t v___x_263_; 
v___x_257_ = lean_box(v___x_184_);
v___x_258_ = lean_box(v___x_185_);
lean_inc_n(v_currNamespace_183_, 2);
lean_inc(v_resolved_182_);
v___f_259_ = lean_alloc_closure((void*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__5___boxed), 7, 6);
lean_closure_set(v___f_259_, 0, v___x_181_);
lean_closure_set(v___f_259_, 1, v_resolved_182_);
lean_closure_set(v___f_259_, 2, v_currNamespace_183_);
lean_closure_set(v___f_259_, 3, v_openDecls_198_);
lean_closure_set(v___f_259_, 4, v___x_257_);
lean_closure_set(v___f_259_, 5, v___x_258_);
lean_inc(v_val_187_);
v_candidates_260_ = l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_scopeCandidates(v_env_186_, v_val_187_, v_currNamespace_183_);
v___x_261_ = lean_box(0);
v_shadowed_262_ = l_List_filterTR_loop___redArg(v___f_259_, v_candidates_260_, v___x_261_);
v___x_263_ = l_List_isEmpty___redArg(v_shadowed_262_);
if (v___x_263_ == 0)
{
lean_object* v___x_264_; lean_object* v___x_265_; uint8_t v___x_266_; 
lean_dec(v___f_197_);
v___x_264_ = l_List_lengthTR___redArg(v_shadowed_262_);
v___x_265_ = lean_unsigned_to_nat(1u);
v___x_266_ = lean_nat_dec_eq(v___x_264_, v___x_265_);
lean_dec(v___x_264_);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
lean_inc_ref(v_displayAll_188_);
v___x_267_ = lean_apply_1(v_displayAll_188_, v_shadowed_262_);
v___x_268_ = lean_obj_once(&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__23, &l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__23_once, _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__23);
v___x_269_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_267_);
lean_ctor_set(v___x_269_, 1, v___x_268_);
v___y_221_ = v___x_269_;
goto v___jp_220_;
}
else
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
lean_inc_ref(v_displayAll_188_);
v___x_270_ = lean_apply_1(v_displayAll_188_, v_shadowed_262_);
v___x_271_ = lean_obj_once(&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__25, &l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__25_once, _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__25);
v___x_272_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_270_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___y_221_ = v___x_272_;
goto v___jp_220_;
}
}
else
{
lean_object* v___x_273_; lean_object* v___x_274_; 
lean_dec(v_shadowed_262_);
lean_dec_ref(v_display_196_);
lean_dec(v_nsStx_194_);
lean_dec_ref(v___x_193_);
lean_dec_ref(v_inst_192_);
lean_dec(v_inst_191_);
lean_dec_ref(v_inst_190_);
lean_dec_ref(v_inst_189_);
lean_dec_ref(v_displayAll_188_);
lean_dec(v_val_187_);
lean_dec(v_currNamespace_183_);
lean_dec(v_resolved_182_);
v___x_273_ = lean_box(0);
v___x_274_ = lean_apply_1(v___f_197_, v___x_273_);
return v___x_274_;
}
v___jp_199_:
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_202_ = lean_obj_once(&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__1, &l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__1_once, _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__1);
v___x_203_ = l_Lean_MessageData_ofName(v_val_187_);
v___x_204_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_204_, 0, v___x_202_);
lean_ctor_set(v___x_204_, 1, v___x_203_);
v___x_205_ = lean_obj_once(&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__3, &l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__3_once, _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__3);
v___x_206_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_204_);
lean_ctor_set(v___x_206_, 1, v___x_205_);
v___x_207_ = lean_apply_1(v_displayAll_188_, v_resolved_182_);
v___x_208_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_206_);
lean_ctor_set(v___x_208_, 1, v___x_207_);
v___x_209_ = lean_obj_once(&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__5, &l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__5_once, _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__5);
v___x_210_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_208_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
v___x_211_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_210_);
lean_ctor_set(v___x_211_, 1, v___y_201_);
v___x_212_ = lean_obj_once(&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__7, &l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__7_once, _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__7);
v___x_213_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_213_, 0, v___x_211_);
lean_ctor_set(v___x_213_, 1, v___x_212_);
v___x_214_ = l_Lean_MessageData_ofName(v_currNamespace_183_);
v___x_215_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_213_);
lean_ctor_set(v___x_215_, 1, v___x_214_);
v___x_216_ = lean_obj_once(&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__9, &l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__9_once, _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__9);
v___x_217_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_215_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
lean_ctor_set(v___x_218_, 1, v___y_200_);
v___x_219_ = l_Lean_Linter_logLint___redArg(v_inst_189_, v_inst_190_, v_inst_191_, v_inst_192_, v___x_193_, v_nsStx_194_, v___x_218_);
return v___x_219_;
}
v___jp_220_:
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v_hint_229_; 
v___x_222_ = lean_obj_once(&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__11, &l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__11_once, _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__11);
v___x_223_ = l_Lean_rootNamespace;
v___x_224_ = l_List_head_x21___redArg(v___x_195_, v_resolved_182_);
v___x_225_ = l_Lean_Name_append(v___x_223_, v___x_224_);
v___x_226_ = l_Lean_MessageData_ofName(v___x_225_);
v___x_227_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_222_);
lean_ctor_set(v___x_227_, 1, v___x_226_);
v___x_228_ = lean_obj_once(&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__13, &l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__13_once, _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__13);
v_hint_229_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_hint_229_, 0, v___x_227_);
lean_ctor_set(v_hint_229_, 1, v___x_228_);
if (lean_obj_tag(v_resolved_182_) == 1)
{
lean_object* v_tail_230_; 
v_tail_230_ = lean_ctor_get(v_resolved_182_, 1);
if (lean_obj_tag(v_tail_230_) == 0)
{
lean_object* v_head_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_255_; 
lean_dec_ref(v_displayAll_188_);
v_head_231_ = lean_ctor_get(v_resolved_182_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v_resolved_182_);
if (v_isSharedCheck_255_ == 0)
{
lean_object* v_unused_256_; 
v_unused_256_ = lean_ctor_get(v_resolved_182_, 1);
lean_dec(v_unused_256_);
v___x_233_ = v_resolved_182_;
v_isShared_234_ = v_isSharedCheck_255_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_head_231_);
lean_dec(v_resolved_182_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_255_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_238_; 
v___x_235_ = lean_obj_once(&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__1, &l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__1_once, _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__1);
v___x_236_ = l_Lean_MessageData_ofName(v_val_187_);
if (v_isShared_234_ == 0)
{
lean_ctor_set_tag(v___x_233_, 7);
lean_ctor_set(v___x_233_, 1, v___x_236_);
lean_ctor_set(v___x_233_, 0, v___x_235_);
v___x_238_ = v___x_233_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v___x_235_);
lean_ctor_set(v_reuseFailAlloc_254_, 1, v___x_236_);
v___x_238_ = v_reuseFailAlloc_254_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_239_ = lean_obj_once(&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__15, &l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__15_once, _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__15);
v___x_240_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_238_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = lean_apply_1(v_display_196_, v_head_231_);
v___x_242_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_240_);
lean_ctor_set(v___x_242_, 1, v___x_241_);
v___x_243_ = lean_obj_once(&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__17, &l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__17_once, _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__17);
v___x_244_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_242_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = l_Lean_MessageData_ofName(v_currNamespace_183_);
v___x_246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_244_);
lean_ctor_set(v___x_246_, 1, v___x_245_);
v___x_247_ = lean_obj_once(&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__19, &l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__19_once, _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__19);
v___x_248_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_246_);
lean_ctor_set(v___x_248_, 1, v___x_247_);
v___x_249_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
lean_ctor_set(v___x_249_, 1, v___y_221_);
v___x_250_ = lean_obj_once(&l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__21, &l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__21_once, _init_l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___closed__21);
v___x_251_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_249_);
lean_ctor_set(v___x_251_, 1, v___x_250_);
v___x_252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
lean_ctor_set(v___x_252_, 1, v_hint_229_);
v___x_253_ = l_Lean_Linter_logLint___redArg(v_inst_189_, v_inst_190_, v_inst_191_, v_inst_192_, v___x_193_, v_nsStx_194_, v___x_252_);
return v___x_253_;
}
}
}
else
{
lean_dec_ref(v_display_196_);
v___y_200_ = v_hint_229_;
v___y_201_ = v___y_221_;
goto v___jp_199_;
}
}
else
{
lean_dec_ref(v_display_196_);
v___y_200_ = v_hint_229_;
v___y_201_ = v___y_221_;
goto v___jp_199_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___boxed(lean_object** _args){
lean_object* v___x_275_ = _args[0];
lean_object* v_resolved_276_ = _args[1];
lean_object* v_currNamespace_277_ = _args[2];
lean_object* v___x_278_ = _args[3];
lean_object* v___x_279_ = _args[4];
lean_object* v_env_280_ = _args[5];
lean_object* v_val_281_ = _args[6];
lean_object* v_displayAll_282_ = _args[7];
lean_object* v_inst_283_ = _args[8];
lean_object* v_inst_284_ = _args[9];
lean_object* v_inst_285_ = _args[10];
lean_object* v_inst_286_ = _args[11];
lean_object* v___x_287_ = _args[12];
lean_object* v_nsStx_288_ = _args[13];
lean_object* v___x_289_ = _args[14];
lean_object* v_display_290_ = _args[15];
lean_object* v___f_291_ = _args[16];
lean_object* v_openDecls_292_ = _args[17];
_start:
{
uint8_t v___x_1881__boxed_293_; uint8_t v___x_1882__boxed_294_; lean_object* v_res_295_; 
v___x_1881__boxed_293_ = lean_unbox(v___x_278_);
v___x_1882__boxed_294_ = lean_unbox(v___x_279_);
v_res_295_ = l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6(v___x_275_, v_resolved_276_, v_currNamespace_277_, v___x_1881__boxed_293_, v___x_1882__boxed_294_, v_env_280_, v_val_281_, v_displayAll_282_, v_inst_283_, v_inst_284_, v_inst_285_, v_inst_286_, v___x_287_, v_nsStx_288_, v___x_289_, v_display_290_, v___f_291_, v_openDecls_292_);
lean_dec(v___x_289_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__7(lean_object* v___x_296_, lean_object* v_resolved_297_, uint8_t v___x_298_, uint8_t v___x_299_, lean_object* v_env_300_, lean_object* v_val_301_, lean_object* v_displayAll_302_, lean_object* v_inst_303_, lean_object* v_inst_304_, lean_object* v_inst_305_, lean_object* v_inst_306_, lean_object* v___x_307_, lean_object* v_nsStx_308_, lean_object* v___x_309_, lean_object* v_display_310_, lean_object* v___f_311_, lean_object* v_toBind_312_, lean_object* v_getOpenDecls_313_, lean_object* v_currNamespace_314_){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___f_317_; lean_object* v___x_318_; 
v___x_315_ = lean_box(v___x_298_);
v___x_316_ = lean_box(v___x_299_);
v___f_317_ = lean_alloc_closure((void*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__6___boxed), 18, 17);
lean_closure_set(v___f_317_, 0, v___x_296_);
lean_closure_set(v___f_317_, 1, v_resolved_297_);
lean_closure_set(v___f_317_, 2, v_currNamespace_314_);
lean_closure_set(v___f_317_, 3, v___x_315_);
lean_closure_set(v___f_317_, 4, v___x_316_);
lean_closure_set(v___f_317_, 5, v_env_300_);
lean_closure_set(v___f_317_, 6, v_val_301_);
lean_closure_set(v___f_317_, 7, v_displayAll_302_);
lean_closure_set(v___f_317_, 8, v_inst_303_);
lean_closure_set(v___f_317_, 9, v_inst_304_);
lean_closure_set(v___f_317_, 10, v_inst_305_);
lean_closure_set(v___f_317_, 11, v_inst_306_);
lean_closure_set(v___f_317_, 12, v___x_307_);
lean_closure_set(v___f_317_, 13, v_nsStx_308_);
lean_closure_set(v___f_317_, 14, v___x_309_);
lean_closure_set(v___f_317_, 15, v_display_310_);
lean_closure_set(v___f_317_, 16, v___f_311_);
v___x_318_ = lean_apply_4(v_toBind_312_, lean_box(0), lean_box(0), v_getOpenDecls_313_, v___f_317_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__7___boxed(lean_object** _args){
lean_object* v___x_319_ = _args[0];
lean_object* v_resolved_320_ = _args[1];
lean_object* v___x_321_ = _args[2];
lean_object* v___x_322_ = _args[3];
lean_object* v_env_323_ = _args[4];
lean_object* v_val_324_ = _args[5];
lean_object* v_displayAll_325_ = _args[6];
lean_object* v_inst_326_ = _args[7];
lean_object* v_inst_327_ = _args[8];
lean_object* v_inst_328_ = _args[9];
lean_object* v_inst_329_ = _args[10];
lean_object* v___x_330_ = _args[11];
lean_object* v_nsStx_331_ = _args[12];
lean_object* v___x_332_ = _args[13];
lean_object* v_display_333_ = _args[14];
lean_object* v___f_334_ = _args[15];
lean_object* v_toBind_335_ = _args[16];
lean_object* v_getOpenDecls_336_ = _args[17];
lean_object* v_currNamespace_337_ = _args[18];
_start:
{
uint8_t v___x_2099__boxed_338_; uint8_t v___x_2100__boxed_339_; lean_object* v_res_340_; 
v___x_2099__boxed_338_ = lean_unbox(v___x_321_);
v___x_2100__boxed_339_ = lean_unbox(v___x_322_);
v_res_340_ = l_Lean_Linter_checkAmbiguousOpen___redArg___lam__7(v___x_319_, v_resolved_320_, v___x_2099__boxed_338_, v___x_2100__boxed_339_, v_env_323_, v_val_324_, v_displayAll_325_, v_inst_326_, v_inst_327_, v_inst_328_, v_inst_329_, v___x_330_, v_nsStx_331_, v___x_332_, v_display_333_, v___f_334_, v_toBind_335_, v_getOpenDecls_336_, v_currNamespace_337_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__8(lean_object* v_inst_341_, lean_object* v___x_342_, lean_object* v_resolved_343_, uint8_t v___x_344_, uint8_t v___x_345_, lean_object* v_val_346_, lean_object* v_displayAll_347_, lean_object* v_inst_348_, lean_object* v_inst_349_, lean_object* v_inst_350_, lean_object* v_inst_351_, lean_object* v___x_352_, lean_object* v_nsStx_353_, lean_object* v___x_354_, lean_object* v_display_355_, lean_object* v___f_356_, lean_object* v_toBind_357_, lean_object* v_env_358_){
_start:
{
lean_object* v_getCurrNamespace_359_; lean_object* v_getOpenDecls_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___f_363_; lean_object* v___x_364_; 
v_getCurrNamespace_359_ = lean_ctor_get(v_inst_341_, 0);
lean_inc(v_getCurrNamespace_359_);
v_getOpenDecls_360_ = lean_ctor_get(v_inst_341_, 1);
lean_inc(v_getOpenDecls_360_);
lean_dec_ref(v_inst_341_);
v___x_361_ = lean_box(v___x_344_);
v___x_362_ = lean_box(v___x_345_);
lean_inc(v_toBind_357_);
v___f_363_ = lean_alloc_closure((void*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__7___boxed), 19, 18);
lean_closure_set(v___f_363_, 0, v___x_342_);
lean_closure_set(v___f_363_, 1, v_resolved_343_);
lean_closure_set(v___f_363_, 2, v___x_361_);
lean_closure_set(v___f_363_, 3, v___x_362_);
lean_closure_set(v___f_363_, 4, v_env_358_);
lean_closure_set(v___f_363_, 5, v_val_346_);
lean_closure_set(v___f_363_, 6, v_displayAll_347_);
lean_closure_set(v___f_363_, 7, v_inst_348_);
lean_closure_set(v___f_363_, 8, v_inst_349_);
lean_closure_set(v___f_363_, 9, v_inst_350_);
lean_closure_set(v___f_363_, 10, v_inst_351_);
lean_closure_set(v___f_363_, 11, v___x_352_);
lean_closure_set(v___f_363_, 12, v_nsStx_353_);
lean_closure_set(v___f_363_, 13, v___x_354_);
lean_closure_set(v___f_363_, 14, v_display_355_);
lean_closure_set(v___f_363_, 15, v___f_356_);
lean_closure_set(v___f_363_, 16, v_toBind_357_);
lean_closure_set(v___f_363_, 17, v_getOpenDecls_360_);
v___x_364_ = lean_apply_4(v_toBind_357_, lean_box(0), lean_box(0), v_getCurrNamespace_359_, v___f_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__8___boxed(lean_object** _args){
lean_object* v_inst_365_ = _args[0];
lean_object* v___x_366_ = _args[1];
lean_object* v_resolved_367_ = _args[2];
lean_object* v___x_368_ = _args[3];
lean_object* v___x_369_ = _args[4];
lean_object* v_val_370_ = _args[5];
lean_object* v_displayAll_371_ = _args[6];
lean_object* v_inst_372_ = _args[7];
lean_object* v_inst_373_ = _args[8];
lean_object* v_inst_374_ = _args[9];
lean_object* v_inst_375_ = _args[10];
lean_object* v___x_376_ = _args[11];
lean_object* v_nsStx_377_ = _args[12];
lean_object* v___x_378_ = _args[13];
lean_object* v_display_379_ = _args[14];
lean_object* v___f_380_ = _args[15];
lean_object* v_toBind_381_ = _args[16];
lean_object* v_env_382_ = _args[17];
_start:
{
uint8_t v___x_2141__boxed_383_; uint8_t v___x_2142__boxed_384_; lean_object* v_res_385_; 
v___x_2141__boxed_383_ = lean_unbox(v___x_368_);
v___x_2142__boxed_384_ = lean_unbox(v___x_369_);
v_res_385_ = l_Lean_Linter_checkAmbiguousOpen___redArg___lam__8(v_inst_365_, v___x_366_, v_resolved_367_, v___x_2141__boxed_383_, v___x_2142__boxed_384_, v_val_370_, v_displayAll_371_, v_inst_372_, v_inst_373_, v_inst_374_, v_inst_375_, v___x_376_, v_nsStx_377_, v___x_378_, v_display_379_, v___f_380_, v_toBind_381_, v_env_382_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__9(lean_object* v_toPure_386_, lean_object* v_nsStx_387_, lean_object* v_inst_388_, lean_object* v___x_389_, lean_object* v_resolved_390_, lean_object* v_inst_391_, lean_object* v_displayAll_392_, lean_object* v_inst_393_, lean_object* v_inst_394_, lean_object* v_inst_395_, lean_object* v_inst_396_, lean_object* v___x_397_, lean_object* v_display_398_, lean_object* v___f_399_, lean_object* v_toBind_400_, lean_object* v_____do__lift_401_){
_start:
{
lean_object* v___x_402_; uint8_t v___x_403_; 
v___x_402_ = l_Lean_Linter_linter_ambiguousOpen;
v___x_403_ = l_Lean_Linter_getLinterValue(v___x_402_, v_____do__lift_401_);
if (v___x_403_ == 0)
{
lean_object* v___x_404_; lean_object* v___x_405_; 
lean_dec(v_toBind_400_);
lean_dec(v___f_399_);
lean_dec_ref(v_display_398_);
lean_dec(v___x_397_);
lean_dec_ref(v_inst_396_);
lean_dec(v_inst_395_);
lean_dec_ref(v_inst_394_);
lean_dec_ref(v_inst_393_);
lean_dec_ref(v_displayAll_392_);
lean_dec_ref(v_inst_391_);
lean_dec(v_resolved_390_);
lean_dec_ref(v___x_389_);
lean_dec_ref(v_inst_388_);
lean_dec(v_nsStx_387_);
v___x_404_ = lean_box(0);
v___x_405_ = lean_apply_2(v_toPure_386_, lean_box(0), v___x_404_);
return v___x_405_;
}
else
{
if (lean_obj_tag(v_nsStx_387_) == 3)
{
lean_object* v_info_406_; 
v_info_406_ = lean_ctor_get(v_nsStx_387_, 0);
if (lean_obj_tag(v_info_406_) == 0)
{
lean_object* v_val_407_; lean_object* v_preresolved_408_; lean_object* v___x_409_; lean_object* v___f_410_; uint8_t v___x_411_; 
lean_dec(v_toPure_386_);
v_val_407_ = lean_ctor_get(v_nsStx_387_, 2);
lean_inc(v_val_407_);
v_preresolved_408_ = lean_ctor_get(v_nsStx_387_, 3);
v___x_409_ = lean_box(v___x_403_);
v___f_410_ = lean_alloc_closure((void*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__3___boxed), 2, 1);
lean_closure_set(v___f_410_, 0, v___x_409_);
lean_inc(v_preresolved_408_);
v___x_411_ = l_List_any___redArg(v_preresolved_408_, v___f_410_);
if (v___x_411_ == 0)
{
lean_object* v_getEnv_412_; lean_object* v_resolved_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___f_416_; lean_object* v___x_417_; 
v_getEnv_412_ = lean_ctor_get(v_inst_388_, 0);
lean_inc(v_getEnv_412_);
lean_dec_ref(v_inst_388_);
lean_inc_ref(v___x_389_);
v_resolved_413_ = l_List_eraseDups___redArg(v___x_389_, v_resolved_390_);
v___x_414_ = lean_box(v___x_403_);
v___x_415_ = lean_box(v___x_411_);
lean_inc(v_toBind_400_);
v___f_416_ = lean_alloc_closure((void*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__8___boxed), 18, 17);
lean_closure_set(v___f_416_, 0, v_inst_391_);
lean_closure_set(v___f_416_, 1, v___x_389_);
lean_closure_set(v___f_416_, 2, v_resolved_413_);
lean_closure_set(v___f_416_, 3, v___x_414_);
lean_closure_set(v___f_416_, 4, v___x_415_);
lean_closure_set(v___f_416_, 5, v_val_407_);
lean_closure_set(v___f_416_, 6, v_displayAll_392_);
lean_closure_set(v___f_416_, 7, v_inst_393_);
lean_closure_set(v___f_416_, 8, v_inst_394_);
lean_closure_set(v___f_416_, 9, v_inst_395_);
lean_closure_set(v___f_416_, 10, v_inst_396_);
lean_closure_set(v___f_416_, 11, v___x_402_);
lean_closure_set(v___f_416_, 12, v_nsStx_387_);
lean_closure_set(v___f_416_, 13, v___x_397_);
lean_closure_set(v___f_416_, 14, v_display_398_);
lean_closure_set(v___f_416_, 15, v___f_399_);
lean_closure_set(v___f_416_, 16, v_toBind_400_);
v___x_417_ = lean_apply_4(v_toBind_400_, lean_box(0), lean_box(0), v_getEnv_412_, v___f_416_);
return v___x_417_;
}
else
{
lean_object* v___x_418_; lean_object* v___x_419_; 
lean_dec(v_val_407_);
lean_dec_ref_known(v_nsStx_387_, 4);
lean_dec(v_toBind_400_);
lean_dec_ref(v_display_398_);
lean_dec(v___x_397_);
lean_dec_ref(v_inst_396_);
lean_dec(v_inst_395_);
lean_dec_ref(v_inst_394_);
lean_dec_ref(v_inst_393_);
lean_dec_ref(v_displayAll_392_);
lean_dec_ref(v_inst_391_);
lean_dec(v_resolved_390_);
lean_dec_ref(v___x_389_);
lean_dec_ref(v_inst_388_);
v___x_418_ = lean_box(0);
v___x_419_ = lean_apply_1(v___f_399_, v___x_418_);
return v___x_419_;
}
}
else
{
lean_object* v___x_420_; lean_object* v___x_421_; 
lean_dec_ref_known(v_nsStx_387_, 4);
lean_dec(v_toBind_400_);
lean_dec(v___f_399_);
lean_dec_ref(v_display_398_);
lean_dec(v___x_397_);
lean_dec_ref(v_inst_396_);
lean_dec(v_inst_395_);
lean_dec_ref(v_inst_394_);
lean_dec_ref(v_inst_393_);
lean_dec_ref(v_displayAll_392_);
lean_dec_ref(v_inst_391_);
lean_dec(v_resolved_390_);
lean_dec_ref(v___x_389_);
lean_dec_ref(v_inst_388_);
v___x_420_ = lean_box(0);
v___x_421_ = lean_apply_2(v_toPure_386_, lean_box(0), v___x_420_);
return v___x_421_;
}
}
else
{
lean_object* v___x_422_; lean_object* v___x_423_; 
lean_dec(v_toBind_400_);
lean_dec(v___f_399_);
lean_dec_ref(v_display_398_);
lean_dec(v___x_397_);
lean_dec_ref(v_inst_396_);
lean_dec(v_inst_395_);
lean_dec_ref(v_inst_394_);
lean_dec_ref(v_inst_393_);
lean_dec_ref(v_displayAll_392_);
lean_dec_ref(v_inst_391_);
lean_dec(v_resolved_390_);
lean_dec_ref(v___x_389_);
lean_dec_ref(v_inst_388_);
lean_dec(v_nsStx_387_);
v___x_422_ = lean_box(0);
v___x_423_ = lean_apply_2(v_toPure_386_, lean_box(0), v___x_422_);
return v___x_423_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg___lam__9___boxed(lean_object* v_toPure_424_, lean_object* v_nsStx_425_, lean_object* v_inst_426_, lean_object* v___x_427_, lean_object* v_resolved_428_, lean_object* v_inst_429_, lean_object* v_displayAll_430_, lean_object* v_inst_431_, lean_object* v_inst_432_, lean_object* v_inst_433_, lean_object* v_inst_434_, lean_object* v___x_435_, lean_object* v_display_436_, lean_object* v___f_437_, lean_object* v_toBind_438_, lean_object* v_____do__lift_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_Lean_Linter_checkAmbiguousOpen___redArg___lam__9(v_toPure_424_, v_nsStx_425_, v_inst_426_, v___x_427_, v_resolved_428_, v_inst_429_, v_displayAll_430_, v_inst_431_, v_inst_432_, v_inst_433_, v_inst_434_, v___x_435_, v_display_436_, v___f_437_, v_toBind_438_, v_____do__lift_439_);
lean_dec_ref(v_____do__lift_439_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen___redArg(lean_object* v_inst_445_, lean_object* v_inst_446_, lean_object* v_inst_447_, lean_object* v_inst_448_, lean_object* v_inst_449_, lean_object* v_inst_450_, lean_object* v_nsStx_451_, lean_object* v_resolved_452_){
_start:
{
lean_object* v_toApplicative_453_; lean_object* v_toBind_454_; lean_object* v_toPure_455_; lean_object* v_display_456_; lean_object* v_displayAll_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___f_461_; lean_object* v___f_462_; lean_object* v___x_463_; 
v_toApplicative_453_ = lean_ctor_get(v_inst_445_, 0);
v_toBind_454_ = lean_ctor_get(v_inst_445_, 1);
lean_inc_n(v_toBind_454_, 2);
v_toPure_455_ = lean_ctor_get(v_toApplicative_453_, 1);
lean_inc_n(v_toPure_455_, 2);
v_display_456_ = ((lean_object*)(l_Lean_Linter_checkAmbiguousOpen___redArg___closed__0));
v_displayAll_457_ = ((lean_object*)(l_Lean_Linter_checkAmbiguousOpen___redArg___closed__1));
v___x_458_ = ((lean_object*)(l_Lean_Linter_checkAmbiguousOpen___redArg___closed__2));
v___x_459_ = lean_box(0);
lean_inc_ref(v_inst_446_);
lean_inc_ref(v_inst_447_);
lean_inc_ref(v_inst_445_);
v___x_460_ = l_Lean_Linter_getLinterOptions___redArg(v_inst_445_, v_inst_447_, v_inst_446_);
v___f_461_ = lean_alloc_closure((void*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__2), 2, 1);
lean_closure_set(v___f_461_, 0, v_toPure_455_);
v___f_462_ = lean_alloc_closure((void*)(l_Lean_Linter_checkAmbiguousOpen___redArg___lam__9___boxed), 16, 15);
lean_closure_set(v___f_462_, 0, v_toPure_455_);
lean_closure_set(v___f_462_, 1, v_nsStx_451_);
lean_closure_set(v___f_462_, 2, v_inst_446_);
lean_closure_set(v___f_462_, 3, v___x_458_);
lean_closure_set(v___f_462_, 4, v_resolved_452_);
lean_closure_set(v___f_462_, 5, v_inst_450_);
lean_closure_set(v___f_462_, 6, v_displayAll_457_);
lean_closure_set(v___f_462_, 7, v_inst_445_);
lean_closure_set(v___f_462_, 8, v_inst_448_);
lean_closure_set(v___f_462_, 9, v_inst_449_);
lean_closure_set(v___f_462_, 10, v_inst_447_);
lean_closure_set(v___f_462_, 11, v___x_459_);
lean_closure_set(v___f_462_, 12, v_display_456_);
lean_closure_set(v___f_462_, 13, v___f_461_);
lean_closure_set(v___f_462_, 14, v_toBind_454_);
v___x_463_ = lean_apply_4(v_toBind_454_, lean_box(0), lean_box(0), v___x_460_, v___f_462_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_checkAmbiguousOpen(lean_object* v_m_464_, lean_object* v_inst_465_, lean_object* v_inst_466_, lean_object* v_inst_467_, lean_object* v_inst_468_, lean_object* v_inst_469_, lean_object* v_inst_470_, lean_object* v_nsStx_471_, lean_object* v_resolved_472_){
_start:
{
lean_object* v___x_473_; 
v___x_473_ = l_Lean_Linter_checkAmbiguousOpen___redArg(v_inst_465_, v_inst_466_, v_inst_467_, v_inst_468_, v_inst_469_, v_inst_470_, v_nsStx_471_, v_resolved_472_);
return v___x_473_;
}
}
lean_object* runtime_initialize_Lean_ResolveName(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Init(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_AmbiguousOpen(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_ResolveName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_AmbiguousOpen_0__Lean_Linter_initFn_00___x40_Lean_Linter_AmbiguousOpen_603296505____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_linter_ambiguousOpen = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_linter_ambiguousOpen);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_AmbiguousOpen(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_ResolveName(uint8_t builtin);
lean_object* initialize_Lean_Linter_Init(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_AmbiguousOpen(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_ResolveName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_AmbiguousOpen(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_AmbiguousOpen(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_AmbiguousOpen(builtin);
}
#ifdef __cplusplus
}
#endif
