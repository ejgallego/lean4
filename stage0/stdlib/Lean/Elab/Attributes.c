// Lean compiler output
// Module: Lean.Elab.Attributes
// Imports: public import Lean.Elab.Util public import Lean.Compiler.InitAttr import Lean.Parser.Term public import Init.Data.Format.Macro
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
extern lean_object* l_Lean_regularInitAttr;
lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Macro_getCurrNamespace(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Elab_liftMacroM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getAttributeImpl(lean_object*, lean_object*);
lean_object* l_Lean_recordExtraModUseFromDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_expandMacros(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_withoutExporting___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_logException___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
static const lean_ctor_object l_Lean_Elab_instInhabitedAttribute_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_instInhabitedAttribute_default___closed__0 = (const lean_object*)&l_Lean_Elab_instInhabitedAttribute_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedAttribute_default = (const lean_object*)&l_Lean_Elab_instInhabitedAttribute_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedAttribute = (const lean_object*)&l_Lean_Elab_instInhabitedAttribute_default___closed__0_value;
static const lean_string_object l_Lean_Elab_instToFormatAttribute___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lean_Elab_instToFormatAttribute___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_instToFormatAttribute___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_instToFormatAttribute___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_instToFormatAttribute___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_instToFormatAttribute___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Elab_instToFormatAttribute___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToFormatAttribute___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_instToFormatAttribute___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToFormatAttribute___lam__0___closed__3;
static const lean_ctor_object l_Lean_Elab_instToFormatAttribute___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatAttribute___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Elab_instToFormatAttribute___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_instToFormatAttribute___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Elab_instToFormatAttribute___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatAttribute___lam__0___closed__1_value)}};
static const lean_object* l_Lean_Elab_instToFormatAttribute___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_instToFormatAttribute___lam__0___closed__5_value;
static const lean_string_object l_Lean_Elab_instToFormatAttribute___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Elab_instToFormatAttribute___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_instToFormatAttribute___lam__0___closed__6_value;
static const lean_string_object l_Lean_Elab_instToFormatAttribute___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "local "};
static const lean_object* l_Lean_Elab_instToFormatAttribute___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_instToFormatAttribute___lam__0___closed__7_value;
static const lean_string_object l_Lean_Elab_instToFormatAttribute___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "scoped "};
static const lean_object* l_Lean_Elab_instToFormatAttribute___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_instToFormatAttribute___lam__0___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instToFormatAttribute___lam__0(lean_object*);
static const lean_closure_object l_Lean_Elab_instToFormatAttribute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instToFormatAttribute___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToFormatAttribute___closed__0 = (const lean_object*)&l_Lean_Elab_instToFormatAttribute___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instToFormatAttribute = (const lean_object*)&l_Lean_Elab_instToFormatAttribute___closed__0_value;
static const lean_string_object l_Lean_Elab_toAttributeKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_toAttributeKind___closed__0 = (const lean_object*)&l_Lean_Elab_toAttributeKind___closed__0_value;
static const lean_string_object l_Lean_Elab_toAttributeKind___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_toAttributeKind___closed__1 = (const lean_object*)&l_Lean_Elab_toAttributeKind___closed__1_value;
static const lean_string_object l_Lean_Elab_toAttributeKind___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_toAttributeKind___closed__2 = (const lean_object*)&l_Lean_Elab_toAttributeKind___closed__2_value;
static const lean_string_object l_Lean_Elab_toAttributeKind___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scoped"};
static const lean_object* l_Lean_Elab_toAttributeKind___closed__3 = (const lean_object*)&l_Lean_Elab_toAttributeKind___closed__3_value;
static const lean_ctor_object l_Lean_Elab_toAttributeKind___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_toAttributeKind___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_toAttributeKind___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_toAttributeKind___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_toAttributeKind___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_toAttributeKind___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_toAttributeKind___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__3_value),LEAN_SCALAR_PTR_LITERAL(199, 36, 31, 135, 78, 131, 139, 152)}};
static const lean_object* l_Lean_Elab_toAttributeKind___closed__4 = (const lean_object*)&l_Lean_Elab_toAttributeKind___closed__4_value;
static const lean_string_object l_Lean_Elab_toAttributeKind___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Scoped attributes must be used inside namespaces"};
static const lean_object* l_Lean_Elab_toAttributeKind___closed__5 = (const lean_object*)&l_Lean_Elab_toAttributeKind___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_toAttributeKind(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_toAttributeKind___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_mkAttrKindGlobal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lean_Elab_mkAttrKindGlobal___closed__0 = (const lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__0_value;
static const lean_ctor_object l_Lean_Elab_mkAttrKindGlobal___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_mkAttrKindGlobal___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_mkAttrKindGlobal___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_mkAttrKindGlobal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_Lean_Elab_mkAttrKindGlobal___closed__1 = (const lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__1_value;
static const lean_array_object l_Lean_Elab_mkAttrKindGlobal___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_mkAttrKindGlobal___closed__2 = (const lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__2_value;
static const lean_string_object l_Lean_Elab_mkAttrKindGlobal___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_mkAttrKindGlobal___closed__3 = (const lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__3_value;
static const lean_ctor_object l_Lean_Elab_mkAttrKindGlobal___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__3_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_mkAttrKindGlobal___closed__4 = (const lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__4_value;
static const lean_ctor_object l_Lean_Elab_mkAttrKindGlobal___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__4_value),((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__2_value)}};
static const lean_object* l_Lean_Elab_mkAttrKindGlobal___closed__5 = (const lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__5_value;
static const lean_array_object l_Lean_Elab_mkAttrKindGlobal___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__5_value)}};
static const lean_object* l_Lean_Elab_mkAttrKindGlobal___closed__6 = (const lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__6_value;
static const lean_ctor_object l_Lean_Elab_mkAttrKindGlobal___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__1_value),((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__6_value)}};
static const lean_object* l_Lean_Elab_mkAttrKindGlobal___closed__7 = (const lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__7_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_mkAttrKindGlobal = (const lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__7_value;
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_elabAttr___redArg___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___redArg___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___redArg___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__0___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Elab_elabAttr___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Cannot use attribute `["};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__5___closed__0_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___closed__1;
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "]`: module `"};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___closed__2 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__5___closed__2_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___redArg___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___closed__3;
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "` is loaded for IR only (reached as a private `meta` dependency). Add an import of `"};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___closed__4 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__5___closed__4_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___redArg___lam__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___closed__5;
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___closed__6 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__5___closed__6_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___redArg___lam__5___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Unknown attribute `["};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__8___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__8___closed__0_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___redArg___lam__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___redArg___lam__8___closed__1;
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]`"};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__8___closed__2 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__8___closed__2_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___redArg___lam__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___redArg___lam__8___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__10(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__13___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__13___closed__0_value;
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__13___closed__1 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__13___closed__1_value;
static const lean_ctor_object l_Lean_Elab_elabAttr___redArg___lam__13___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___redArg___lam__13___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__13___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___redArg___lam__13___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__13___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__13___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___redArg___lam__13___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__13___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__13___closed__1_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__13___closed__2 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__13___closed__2_value;
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__13___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Unknown attribute"};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__13___closed__3 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__13___closed__3_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___redArg___lam__13___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___redArg___lam__13___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__13(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__11___boxed(lean_object**);
static const lean_closure_object l_Lean_Elab_elabAttr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_elabAttr___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_elabAttr___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__6(lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_elabAttrs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_elabAttrs___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttrs___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_instToFormatAttribute___lam__0___closed__2(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = ((lean_object*)(l_Lean_Elab_instToFormatAttribute___lam__0___closed__0));
v___x_10_ = lean_string_length(v___x_9_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Elab_instToFormatAttribute___lam__0___closed__3(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = lean_obj_once(&l_Lean_Elab_instToFormatAttribute___lam__0___closed__2, &l_Lean_Elab_instToFormatAttribute___lam__0___closed__2_once, _init_l_Lean_Elab_instToFormatAttribute___lam__0___closed__2);
v___x_12_ = lean_nat_to_int(v___x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToFormatAttribute___lam__0(lean_object* v_attr_20_){
_start:
{
uint8_t v_kind_21_; lean_object* v_name_22_; lean_object* v_stx_23_; lean_object* v___y_25_; 
v_kind_21_ = lean_ctor_get_uint8(v_attr_20_, sizeof(void*)*2);
v_name_22_ = lean_ctor_get(v_attr_20_, 0);
lean_inc(v_name_22_);
v_stx_23_ = lean_ctor_get(v_attr_20_, 1);
lean_inc(v_stx_23_);
lean_dec_ref(v_attr_20_);
switch(v_kind_21_)
{
case 0:
{
lean_object* v___x_47_; 
v___x_47_ = ((lean_object*)(l_Lean_Elab_instToFormatAttribute___lam__0___closed__6));
v___y_25_ = v___x_47_;
goto v___jp_24_;
}
case 1:
{
lean_object* v___x_48_; 
v___x_48_ = ((lean_object*)(l_Lean_Elab_instToFormatAttribute___lam__0___closed__7));
v___y_25_ = v___x_48_;
goto v___jp_24_;
}
default: 
{
lean_object* v___x_49_; 
v___x_49_ = ((lean_object*)(l_Lean_Elab_instToFormatAttribute___lam__0___closed__8));
v___y_25_ = v___x_49_;
goto v___jp_24_;
}
}
v___jp_24_:
{
lean_object* v___x_26_; uint8_t v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; uint8_t v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; uint8_t v___x_45_; lean_object* v___x_46_; 
lean_inc_ref(v___y_25_);
v___x_26_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_26_, 0, v___y_25_);
v___x_27_ = 1;
v___x_28_ = l_Lean_Name_toString(v_name_22_, v___x_27_);
v___x_29_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
v___x_30_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_26_);
lean_ctor_set(v___x_30_, 1, v___x_29_);
v___x_31_ = lean_box(0);
v___x_32_ = 0;
v___x_33_ = l_Lean_Syntax_formatStx(v_stx_23_, v___x_31_, v___x_32_);
v___x_34_ = l_Std_Format_defWidth;
v___x_35_ = lean_unsigned_to_nat(0u);
v___x_36_ = l_Std_Format_pretty(v___x_33_, v___x_34_, v___x_35_, v___x_35_);
v___x_37_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_37_, 0, v___x_36_);
v___x_38_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_30_);
lean_ctor_set(v___x_38_, 1, v___x_37_);
v___x_39_ = lean_obj_once(&l_Lean_Elab_instToFormatAttribute___lam__0___closed__3, &l_Lean_Elab_instToFormatAttribute___lam__0___closed__3_once, _init_l_Lean_Elab_instToFormatAttribute___lam__0___closed__3);
v___x_40_ = ((lean_object*)(l_Lean_Elab_instToFormatAttribute___lam__0___closed__4));
v___x_41_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
lean_ctor_set(v___x_41_, 1, v___x_38_);
v___x_42_ = ((lean_object*)(l_Lean_Elab_instToFormatAttribute___lam__0___closed__5));
v___x_43_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_43_, 0, v___x_41_);
lean_ctor_set(v___x_43_, 1, v___x_42_);
v___x_44_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_39_);
lean_ctor_set(v___x_44_, 1, v___x_43_);
v___x_45_ = 0;
v___x_46_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_46_, 0, v___x_44_);
lean_ctor_set_uint8(v___x_46_, sizeof(void*)*1, v___x_45_);
return v___x_46_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_toAttributeKind(lean_object* v_attrKindStx_62_, lean_object* v_a_63_, lean_object* v_a_64_){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_65_ = lean_unsigned_to_nat(0u);
v___x_66_ = l_Lean_Syntax_getArg(v_attrKindStx_62_, v___x_65_);
v___x_67_ = l_Lean_Syntax_isNone(v___x_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; uint8_t v___x_71_; 
v___x_68_ = l_Lean_Syntax_getArg(v___x_66_, v___x_65_);
lean_dec(v___x_66_);
v___x_69_ = l_Lean_Syntax_getKind(v___x_68_);
v___x_70_ = ((lean_object*)(l_Lean_Elab_toAttributeKind___closed__4));
v___x_71_ = lean_name_eq(v___x_69_, v___x_70_);
lean_dec(v___x_69_);
if (v___x_71_ == 0)
{
uint8_t v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_72_ = 1;
v___x_73_ = lean_box(v___x_72_);
v___x_74_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v_a_64_);
return v___x_74_;
}
else
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_Macro_getCurrNamespace(v_a_63_, v_a_64_);
if (lean_obj_tag(v___x_75_) == 0)
{
lean_object* v_a_76_; lean_object* v_a_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_93_; 
v_a_76_ = lean_ctor_get(v___x_75_, 0);
v_a_77_ = lean_ctor_get(v___x_75_, 1);
v_isSharedCheck_93_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_93_ == 0)
{
v___x_79_ = v___x_75_;
v_isShared_80_ = v_isSharedCheck_93_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_a_77_);
lean_inc(v_a_76_);
lean_dec(v___x_75_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_93_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
uint8_t v___x_81_; 
v___x_81_ = l_Lean_Name_isAnonymous(v_a_76_);
lean_dec(v_a_76_);
if (v___x_81_ == 0)
{
uint8_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_85_; 
v___x_82_ = 2;
v___x_83_ = lean_box(v___x_82_);
if (v_isShared_80_ == 0)
{
lean_ctor_set(v___x_79_, 0, v___x_83_);
v___x_85_ = v___x_79_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v___x_83_);
lean_ctor_set(v_reuseFailAlloc_86_, 1, v_a_77_);
v___x_85_ = v_reuseFailAlloc_86_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
return v___x_85_;
}
}
else
{
lean_object* v_ref_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_91_; 
v_ref_87_ = lean_ctor_get(v_a_63_, 5);
v___x_88_ = ((lean_object*)(l_Lean_Elab_toAttributeKind___closed__5));
lean_inc(v_ref_87_);
v___x_89_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_89_, 0, v_ref_87_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
if (v_isShared_80_ == 0)
{
lean_ctor_set_tag(v___x_79_, 1);
lean_ctor_set(v___x_79_, 0, v___x_89_);
v___x_91_ = v___x_79_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v___x_89_);
lean_ctor_set(v_reuseFailAlloc_92_, 1, v_a_77_);
v___x_91_ = v_reuseFailAlloc_92_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
return v___x_91_;
}
}
}
}
else
{
lean_object* v_a_94_; lean_object* v_a_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_102_; 
v_a_94_ = lean_ctor_get(v___x_75_, 0);
v_a_95_ = lean_ctor_get(v___x_75_, 1);
v_isSharedCheck_102_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_102_ == 0)
{
v___x_97_ = v___x_75_;
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_a_95_);
lean_inc(v_a_94_);
lean_dec(v___x_75_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_100_; 
if (v_isShared_98_ == 0)
{
v___x_100_ = v___x_97_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_a_94_);
lean_ctor_set(v_reuseFailAlloc_101_, 1, v_a_95_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
return v___x_100_;
}
}
}
}
}
else
{
uint8_t v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
lean_dec(v___x_66_);
v___x_103_ = 0;
v___x_104_ = lean_box(v___x_103_);
v___x_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v_a_64_);
return v___x_105_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_toAttributeKind___boxed(lean_object* v_attrKindStx_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l_Lean_Elab_toAttributeKind(v_attrKindStx_106_, v_a_107_, v_a_108_);
lean_dec_ref(v_a_107_);
lean_dec(v_attrKindStx_106_);
return v_res_109_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_elabAttr___redArg___lam__0(lean_object* v_k_140_){
_start:
{
lean_object* v___x_141_; uint8_t v___x_142_; 
v___x_141_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___lam__0___closed__1));
v___x_142_ = lean_name_eq(v_k_140_, v___x_141_);
if (v___x_142_ == 0)
{
uint8_t v___x_143_; 
v___x_143_ = 1;
return v___x_143_;
}
else
{
uint8_t v___x_144_; 
v___x_144_ = 0;
return v___x_144_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__0___boxed(lean_object* v_k_145_){
_start:
{
uint8_t v_res_146_; lean_object* v_r_147_; 
v_res_146_ = l_Lean_Elab_elabAttr___redArg___lam__0(v_k_145_);
lean_dec(v_k_145_);
v_r_147_ = lean_box(v_res_146_);
return v_r_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__1(uint8_t v_attrKind_148_, lean_object* v_attrName_149_, lean_object* v_attr_150_, lean_object* v_toPure_151_, lean_object* v_____r_152_){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_153_, 0, v_attrName_149_);
lean_ctor_set(v___x_153_, 1, v_attr_150_);
lean_ctor_set_uint8(v___x_153_, sizeof(void*)*2, v_attrKind_148_);
v___x_154_ = lean_apply_2(v_toPure_151_, lean_box(0), v___x_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__1___boxed(lean_object* v_attrKind_155_, lean_object* v_attrName_156_, lean_object* v_attr_157_, lean_object* v_toPure_158_, lean_object* v_____r_159_){
_start:
{
uint8_t v_attrKind_boxed_160_; lean_object* v_res_161_; 
v_attrKind_boxed_160_ = lean_unbox(v_attrKind_155_);
v_res_161_ = l_Lean_Elab_elabAttr___redArg___lam__1(v_attrKind_boxed_160_, v_attrName_156_, v_attr_157_, v_toPure_158_, v_____r_159_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__2(lean_object* v___f_162_, lean_object* v_____r_163_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = lean_apply_1(v___f_162_, v_____r_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__3(lean_object* v_a_165_, lean_object* v_inst_166_, lean_object* v_inst_167_, lean_object* v_inst_168_, lean_object* v_inst_169_, lean_object* v_toMonadRef_170_, lean_object* v_inst_171_, lean_object* v_toBind_172_, lean_object* v___f_173_, lean_object* v_____r_174_){
_start:
{
lean_object* v_toAttributeImplCore_175_; lean_object* v_ref_176_; uint8_t v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v_toAttributeImplCore_175_ = lean_ctor_get(v_a_165_, 0);
lean_inc_ref(v_toAttributeImplCore_175_);
lean_dec_ref(v_a_165_);
v_ref_176_ = lean_ctor_get(v_toAttributeImplCore_175_, 0);
lean_inc(v_ref_176_);
lean_dec_ref(v_toAttributeImplCore_175_);
v___x_177_ = 1;
v___x_178_ = l_Lean_recordExtraModUseFromDecl___redArg(v_inst_166_, v_inst_167_, v_inst_168_, v_inst_169_, v_toMonadRef_170_, v_inst_171_, v_ref_176_, v___x_177_);
v___x_179_ = lean_apply_4(v_toBind_172_, lean_box(0), lean_box(0), v___x_178_, v___f_173_);
return v___x_179_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___lam__5___closed__0));
v___x_182_ = l_Lean_stringToMessageData(v___x_181_);
return v___x_182_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___lam__5___closed__2));
v___x_185_ = l_Lean_stringToMessageData(v___x_184_);
return v___x_185_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___redArg___lam__5___closed__5(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___lam__5___closed__4));
v___x_188_ = l_Lean_stringToMessageData(v___x_187_);
return v___x_188_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___redArg___lam__5___closed__7(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___lam__5___closed__6));
v___x_191_ = l_Lean_stringToMessageData(v___x_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__5(lean_object* v___f_192_, lean_object* v_val_193_, lean_object* v___x_194_, lean_object* v_attrName_195_, lean_object* v_inst_196_, lean_object* v_inst_197_, lean_object* v_toBind_198_, lean_object* v___f_199_, lean_object* v_env_200_){
_start:
{
lean_object* v___x_204_; lean_object* v_modules_205_; lean_object* v___x_206_; uint8_t v___x_207_; 
v___x_204_ = l_Lean_Environment_header(v_env_200_);
v_modules_205_ = lean_ctor_get(v___x_204_, 3);
lean_inc_ref(v_modules_205_);
lean_dec_ref(v___x_204_);
v___x_206_ = lean_array_get_size(v_modules_205_);
v___x_207_ = lean_nat_dec_lt(v_val_193_, v___x_206_);
if (v___x_207_ == 0)
{
lean_dec_ref(v_modules_205_);
lean_dec(v___f_199_);
lean_dec(v_toBind_198_);
lean_dec_ref(v_inst_197_);
lean_dec_ref(v_inst_196_);
lean_dec(v_attrName_195_);
goto v___jp_201_;
}
else
{
lean_object* v___x_208_; uint8_t v_hasData_209_; 
v___x_208_ = lean_array_fget_borrowed(v_modules_205_, v_val_193_);
v_hasData_209_ = lean_ctor_get_uint8(v___x_208_, sizeof(void*)*1 + 1);
if (v_hasData_209_ == 0)
{
lean_object* v___x_210_; lean_object* v_toImport_211_; lean_object* v_module_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
lean_dec(v___f_192_);
v___x_210_ = lean_array_get(v___x_194_, v_modules_205_, v_val_193_);
lean_dec_ref(v_modules_205_);
v_toImport_211_ = lean_ctor_get(v___x_210_, 0);
lean_inc_ref(v_toImport_211_);
lean_dec(v___x_210_);
v_module_212_ = lean_ctor_get(v_toImport_211_, 0);
lean_inc(v_module_212_);
lean_dec_ref(v_toImport_211_);
v___x_213_ = lean_obj_once(&l_Lean_Elab_elabAttr___redArg___lam__5___closed__1, &l_Lean_Elab_elabAttr___redArg___lam__5___closed__1_once, _init_l_Lean_Elab_elabAttr___redArg___lam__5___closed__1);
v___x_214_ = l_Lean_MessageData_ofName(v_attrName_195_);
v___x_215_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_213_);
lean_ctor_set(v___x_215_, 1, v___x_214_);
v___x_216_ = lean_obj_once(&l_Lean_Elab_elabAttr___redArg___lam__5___closed__3, &l_Lean_Elab_elabAttr___redArg___lam__5___closed__3_once, _init_l_Lean_Elab_elabAttr___redArg___lam__5___closed__3);
v___x_217_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_215_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = l_Lean_MessageData_ofName(v_module_212_);
lean_inc_ref(v___x_218_);
v___x_219_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_217_);
lean_ctor_set(v___x_219_, 1, v___x_218_);
v___x_220_ = lean_obj_once(&l_Lean_Elab_elabAttr___redArg___lam__5___closed__5, &l_Lean_Elab_elabAttr___redArg___lam__5___closed__5_once, _init_l_Lean_Elab_elabAttr___redArg___lam__5___closed__5);
v___x_221_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_219_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
v___x_222_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
lean_ctor_set(v___x_222_, 1, v___x_218_);
v___x_223_ = lean_obj_once(&l_Lean_Elab_elabAttr___redArg___lam__5___closed__7, &l_Lean_Elab_elabAttr___redArg___lam__5___closed__7_once, _init_l_Lean_Elab_elabAttr___redArg___lam__5___closed__7);
v___x_224_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_222_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = l_Lean_throwError___redArg(v_inst_196_, v_inst_197_, v___x_224_);
v___x_226_ = lean_apply_4(v_toBind_198_, lean_box(0), lean_box(0), v___x_225_, v___f_199_);
return v___x_226_;
}
else
{
lean_dec_ref(v_modules_205_);
lean_dec(v___f_199_);
lean_dec(v_toBind_198_);
lean_dec_ref(v_inst_197_);
lean_dec_ref(v_inst_196_);
lean_dec(v_attrName_195_);
goto v___jp_201_;
}
}
v___jp_201_:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = lean_box(0);
v___x_203_ = lean_apply_1(v___f_192_, v___x_202_);
return v___x_203_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___boxed(lean_object* v___f_227_, lean_object* v_val_228_, lean_object* v___x_229_, lean_object* v_attrName_230_, lean_object* v_inst_231_, lean_object* v_inst_232_, lean_object* v_toBind_233_, lean_object* v___f_234_, lean_object* v_env_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Lean_Elab_elabAttr___redArg___lam__5(v___f_227_, v_val_228_, v___x_229_, v_attrName_230_, v_inst_231_, v_inst_232_, v_toBind_233_, v___f_234_, v_env_235_);
lean_dec_ref(v_env_235_);
lean_dec_ref(v___x_229_);
lean_dec(v_val_228_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__4(lean_object* v_a_237_, lean_object* v___f_238_, lean_object* v___x_239_, lean_object* v_attrName_240_, lean_object* v_inst_241_, lean_object* v_inst_242_, lean_object* v_toBind_243_, lean_object* v___f_244_, lean_object* v_getEnv_245_, lean_object* v_____do__lift_246_){
_start:
{
lean_object* v_toAttributeImplCore_247_; lean_object* v_ref_248_; lean_object* v___x_249_; 
v_toAttributeImplCore_247_ = lean_ctor_get(v_a_237_, 0);
v_ref_248_ = lean_ctor_get(v_toAttributeImplCore_247_, 0);
v___x_249_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_246_, v_ref_248_);
if (lean_obj_tag(v___x_249_) == 1)
{
lean_object* v_val_250_; lean_object* v___f_251_; lean_object* v___x_252_; 
v_val_250_ = lean_ctor_get(v___x_249_, 0);
lean_inc(v_val_250_);
lean_dec_ref_known(v___x_249_, 1);
lean_inc(v_toBind_243_);
v___f_251_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__5___boxed), 9, 8);
lean_closure_set(v___f_251_, 0, v___f_238_);
lean_closure_set(v___f_251_, 1, v_val_250_);
lean_closure_set(v___f_251_, 2, v___x_239_);
lean_closure_set(v___f_251_, 3, v_attrName_240_);
lean_closure_set(v___f_251_, 4, v_inst_241_);
lean_closure_set(v___f_251_, 5, v_inst_242_);
lean_closure_set(v___f_251_, 6, v_toBind_243_);
lean_closure_set(v___f_251_, 7, v___f_244_);
v___x_252_ = lean_apply_4(v_toBind_243_, lean_box(0), lean_box(0), v_getEnv_245_, v___f_251_);
return v___x_252_;
}
else
{
lean_object* v___x_253_; lean_object* v___x_254_; 
lean_dec(v___x_249_);
lean_dec(v_getEnv_245_);
lean_dec(v___f_244_);
lean_dec(v_toBind_243_);
lean_dec_ref(v_inst_242_);
lean_dec_ref(v_inst_241_);
lean_dec(v_attrName_240_);
lean_dec_ref(v___x_239_);
v___x_253_ = lean_box(0);
v___x_254_ = lean_apply_1(v___f_238_, v___x_253_);
return v___x_254_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__4___boxed(lean_object* v_a_255_, lean_object* v___f_256_, lean_object* v___x_257_, lean_object* v_attrName_258_, lean_object* v_inst_259_, lean_object* v_inst_260_, lean_object* v_toBind_261_, lean_object* v___f_262_, lean_object* v_getEnv_263_, lean_object* v_____do__lift_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = l_Lean_Elab_elabAttr___redArg___lam__4(v_a_255_, v___f_256_, v___x_257_, v_attrName_258_, v_inst_259_, v_inst_260_, v_toBind_261_, v___f_262_, v_getEnv_263_, v_____do__lift_264_);
lean_dec_ref(v_____do__lift_264_);
lean_dec_ref(v_a_255_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__6(lean_object* v_a_266_, lean_object* v___x_267_, lean_object* v___f_268_, lean_object* v_toBind_269_, lean_object* v_getEnv_270_, lean_object* v___f_271_, lean_object* v_____do__lift_272_){
_start:
{
lean_object* v_toAttributeImplCore_273_; lean_object* v_ref_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v_toAttributeImplCore_273_ = lean_ctor_get(v_a_266_, 0);
lean_inc_ref(v_toAttributeImplCore_273_);
lean_dec_ref(v_a_266_);
v_ref_274_ = lean_ctor_get(v_toAttributeImplCore_273_, 0);
lean_inc(v_ref_274_);
lean_dec_ref(v_toAttributeImplCore_273_);
v___x_275_ = l_Lean_regularInitAttr;
v___x_276_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_267_, v___x_275_, v_____do__lift_272_, v_ref_274_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v___x_277_; lean_object* v___x_278_; 
lean_dec(v___f_271_);
lean_dec(v_getEnv_270_);
lean_dec(v_toBind_269_);
v___x_277_ = lean_box(0);
v___x_278_ = lean_apply_1(v___f_268_, v___x_277_);
return v___x_278_;
}
else
{
lean_object* v___x_279_; 
lean_dec_ref_known(v___x_276_, 1);
lean_dec(v___f_268_);
v___x_279_ = lean_apply_4(v_toBind_269_, lean_box(0), lean_box(0), v_getEnv_270_, v___f_271_);
return v___x_279_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__7(lean_object* v_attrName_280_, lean_object* v_inst_281_, lean_object* v_inst_282_, lean_object* v_inst_283_, lean_object* v_inst_284_, lean_object* v_toMonadRef_285_, lean_object* v_inst_286_, lean_object* v_toBind_287_, lean_object* v___f_288_, lean_object* v___x_289_, lean_object* v_inst_290_, lean_object* v_getEnv_291_, lean_object* v___x_292_, lean_object* v___f_293_, lean_object* v_____do__lift_294_){
_start:
{
lean_object* v___x_295_; 
lean_inc(v_attrName_280_);
v___x_295_ = l_Lean_getAttributeImpl(v_____do__lift_294_, v_attrName_280_);
if (lean_obj_tag(v___x_295_) == 1)
{
lean_object* v_a_296_; lean_object* v___f_297_; lean_object* v___f_298_; lean_object* v___f_299_; lean_object* v___f_300_; lean_object* v___x_301_; 
v_a_296_ = lean_ctor_get(v___x_295_, 0);
lean_inc_n(v_a_296_, 3);
lean_dec_ref_known(v___x_295_, 1);
lean_inc_n(v_toBind_287_, 3);
lean_inc_ref(v_inst_281_);
v___f_297_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__3), 10, 9);
lean_closure_set(v___f_297_, 0, v_a_296_);
lean_closure_set(v___f_297_, 1, v_inst_281_);
lean_closure_set(v___f_297_, 2, v_inst_282_);
lean_closure_set(v___f_297_, 3, v_inst_283_);
lean_closure_set(v___f_297_, 4, v_inst_284_);
lean_closure_set(v___f_297_, 5, v_toMonadRef_285_);
lean_closure_set(v___f_297_, 6, v_inst_286_);
lean_closure_set(v___f_297_, 7, v_toBind_287_);
lean_closure_set(v___f_297_, 8, v___f_288_);
lean_inc_ref(v___f_297_);
v___f_298_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__2), 2, 1);
lean_closure_set(v___f_298_, 0, v___f_297_);
lean_inc_n(v_getEnv_291_, 2);
v___f_299_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__4___boxed), 10, 9);
lean_closure_set(v___f_299_, 0, v_a_296_);
lean_closure_set(v___f_299_, 1, v___f_297_);
lean_closure_set(v___f_299_, 2, v___x_289_);
lean_closure_set(v___f_299_, 3, v_attrName_280_);
lean_closure_set(v___f_299_, 4, v_inst_281_);
lean_closure_set(v___f_299_, 5, v_inst_290_);
lean_closure_set(v___f_299_, 6, v_toBind_287_);
lean_closure_set(v___f_299_, 7, v___f_298_);
lean_closure_set(v___f_299_, 8, v_getEnv_291_);
v___f_300_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__6), 7, 6);
lean_closure_set(v___f_300_, 0, v_a_296_);
lean_closure_set(v___f_300_, 1, v___x_292_);
lean_closure_set(v___f_300_, 2, v___f_293_);
lean_closure_set(v___f_300_, 3, v_toBind_287_);
lean_closure_set(v___f_300_, 4, v_getEnv_291_);
lean_closure_set(v___f_300_, 5, v___f_299_);
v___x_301_ = lean_apply_4(v_toBind_287_, lean_box(0), lean_box(0), v_getEnv_291_, v___f_300_);
return v___x_301_;
}
else
{
lean_object* v___x_302_; lean_object* v___x_303_; 
lean_dec_ref(v___x_295_);
lean_dec(v___x_292_);
lean_dec(v_getEnv_291_);
lean_dec_ref(v_inst_290_);
lean_dec_ref(v___x_289_);
lean_dec(v___f_288_);
lean_dec(v_toBind_287_);
lean_dec(v_inst_286_);
lean_dec_ref(v_toMonadRef_285_);
lean_dec_ref(v_inst_284_);
lean_dec_ref(v_inst_283_);
lean_dec_ref(v_inst_282_);
lean_dec_ref(v_inst_281_);
lean_dec(v_attrName_280_);
v___x_302_ = lean_box(0);
v___x_303_ = lean_apply_1(v___f_293_, v___x_302_);
return v___x_303_;
}
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___redArg___lam__8___closed__1(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_305_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___lam__8___closed__0));
v___x_306_ = l_Lean_stringToMessageData(v___x_305_);
return v___x_306_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___redArg___lam__8___closed__3(void){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_308_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___lam__8___closed__2));
v___x_309_ = l_Lean_stringToMessageData(v___x_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__8(lean_object* v_attrName_310_, lean_object* v_toBind_311_, lean_object* v_getEnv_312_, lean_object* v___f_313_, lean_object* v_inst_314_, lean_object* v_inst_315_, lean_object* v_____do__lift_316_){
_start:
{
lean_object* v___x_317_; 
lean_inc(v_attrName_310_);
v___x_317_ = l_Lean_getAttributeImpl(v_____do__lift_316_, v_attrName_310_);
if (lean_obj_tag(v___x_317_) == 1)
{
lean_object* v___x_318_; 
lean_dec_ref_known(v___x_317_, 1);
lean_dec_ref(v_inst_315_);
lean_dec_ref(v_inst_314_);
lean_dec(v_attrName_310_);
v___x_318_ = lean_apply_4(v_toBind_311_, lean_box(0), lean_box(0), v_getEnv_312_, v___f_313_);
return v___x_318_;
}
else
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
lean_dec_ref(v___x_317_);
lean_dec(v___f_313_);
lean_dec(v_getEnv_312_);
lean_dec(v_toBind_311_);
v___x_319_ = lean_obj_once(&l_Lean_Elab_elabAttr___redArg___lam__8___closed__1, &l_Lean_Elab_elabAttr___redArg___lam__8___closed__1_once, _init_l_Lean_Elab_elabAttr___redArg___lam__8___closed__1);
v___x_320_ = l_Lean_MessageData_ofName(v_attrName_310_);
v___x_321_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_321_, 0, v___x_319_);
lean_ctor_set(v___x_321_, 1, v___x_320_);
v___x_322_ = lean_obj_once(&l_Lean_Elab_elabAttr___redArg___lam__8___closed__3, &l_Lean_Elab_elabAttr___redArg___lam__8___closed__3_once, _init_l_Lean_Elab_elabAttr___redArg___lam__8___closed__3);
v___x_323_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_321_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
v___x_324_ = l_Lean_throwError___redArg(v_inst_314_, v_inst_315_, v___x_323_);
return v___x_324_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__9(lean_object* v_inst_325_, uint8_t v_attrKind_326_, lean_object* v_attr_327_, lean_object* v_toPure_328_, lean_object* v_inst_329_, lean_object* v_inst_330_, lean_object* v_inst_331_, lean_object* v_toMonadRef_332_, lean_object* v_inst_333_, lean_object* v_toBind_334_, lean_object* v___x_335_, lean_object* v_inst_336_, lean_object* v___x_337_, lean_object* v_attrName_338_){
_start:
{
lean_object* v_getEnv_339_; lean_object* v___x_340_; lean_object* v___f_341_; lean_object* v___f_342_; lean_object* v___f_343_; lean_object* v___f_344_; lean_object* v___x_345_; 
v_getEnv_339_ = lean_ctor_get(v_inst_325_, 0);
lean_inc_n(v_getEnv_339_, 3);
v___x_340_ = lean_box(v_attrKind_326_);
lean_inc_n(v_attrName_338_, 2);
v___f_341_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_341_, 0, v___x_340_);
lean_closure_set(v___f_341_, 1, v_attrName_338_);
lean_closure_set(v___f_341_, 2, v_attr_327_);
lean_closure_set(v___f_341_, 3, v_toPure_328_);
lean_inc_ref(v___f_341_);
v___f_342_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__2), 2, 1);
lean_closure_set(v___f_342_, 0, v___f_341_);
lean_inc_ref(v_inst_336_);
lean_inc_n(v_toBind_334_, 2);
lean_inc_ref(v_inst_329_);
v___f_343_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__7), 15, 14);
lean_closure_set(v___f_343_, 0, v_attrName_338_);
lean_closure_set(v___f_343_, 1, v_inst_329_);
lean_closure_set(v___f_343_, 2, v_inst_325_);
lean_closure_set(v___f_343_, 3, v_inst_330_);
lean_closure_set(v___f_343_, 4, v_inst_331_);
lean_closure_set(v___f_343_, 5, v_toMonadRef_332_);
lean_closure_set(v___f_343_, 6, v_inst_333_);
lean_closure_set(v___f_343_, 7, v_toBind_334_);
lean_closure_set(v___f_343_, 8, v___f_342_);
lean_closure_set(v___f_343_, 9, v___x_335_);
lean_closure_set(v___f_343_, 10, v_inst_336_);
lean_closure_set(v___f_343_, 11, v_getEnv_339_);
lean_closure_set(v___f_343_, 12, v___x_337_);
lean_closure_set(v___f_343_, 13, v___f_341_);
v___f_344_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__8), 7, 6);
lean_closure_set(v___f_344_, 0, v_attrName_338_);
lean_closure_set(v___f_344_, 1, v_toBind_334_);
lean_closure_set(v___f_344_, 2, v_getEnv_339_);
lean_closure_set(v___f_344_, 3, v___f_343_);
lean_closure_set(v___f_344_, 4, v_inst_329_);
lean_closure_set(v___f_344_, 5, v_inst_336_);
v___x_345_ = lean_apply_4(v_toBind_334_, lean_box(0), lean_box(0), v_getEnv_339_, v___f_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__9___boxed(lean_object* v_inst_346_, lean_object* v_attrKind_347_, lean_object* v_attr_348_, lean_object* v_toPure_349_, lean_object* v_inst_350_, lean_object* v_inst_351_, lean_object* v_inst_352_, lean_object* v_toMonadRef_353_, lean_object* v_inst_354_, lean_object* v_toBind_355_, lean_object* v___x_356_, lean_object* v_inst_357_, lean_object* v___x_358_, lean_object* v_attrName_359_){
_start:
{
uint8_t v_attrKind_boxed_360_; lean_object* v_res_361_; 
v_attrKind_boxed_360_ = lean_unbox(v_attrKind_347_);
v_res_361_ = l_Lean_Elab_elabAttr___redArg___lam__9(v_inst_346_, v_attrKind_boxed_360_, v_attr_348_, v_toPure_349_, v_inst_350_, v_inst_351_, v_inst_352_, v_toMonadRef_353_, v_inst_354_, v_toBind_355_, v___x_356_, v_inst_357_, v___x_358_, v_attrName_359_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__10(lean_object* v___f_362_, lean_object* v_attrName_363_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = lean_apply_1(v___f_362_, v_attrName_363_);
return v___x_364_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___redArg___lam__13___closed__4(void){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___lam__13___closed__3));
v___x_374_ = l_Lean_stringToMessageData(v___x_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__13(lean_object* v_inst_375_, uint8_t v_attrKind_376_, lean_object* v_toPure_377_, lean_object* v_inst_378_, lean_object* v_inst_379_, lean_object* v_inst_380_, lean_object* v_toMonadRef_381_, lean_object* v_inst_382_, lean_object* v_toBind_383_, lean_object* v___x_384_, lean_object* v_inst_385_, lean_object* v___x_386_, lean_object* v___x_387_, lean_object* v_attr_388_){
_start:
{
lean_object* v___x_389_; lean_object* v___f_390_; lean_object* v___x_391_; lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_389_ = lean_box(v_attrKind_376_);
lean_inc_ref(v_inst_385_);
lean_inc(v_toBind_383_);
lean_inc_ref(v_inst_378_);
lean_inc(v_toPure_377_);
lean_inc_n(v_attr_388_, 2);
v___f_390_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__9___boxed), 14, 13);
lean_closure_set(v___f_390_, 0, v_inst_375_);
lean_closure_set(v___f_390_, 1, v___x_389_);
lean_closure_set(v___f_390_, 2, v_attr_388_);
lean_closure_set(v___f_390_, 3, v_toPure_377_);
lean_closure_set(v___f_390_, 4, v_inst_378_);
lean_closure_set(v___f_390_, 5, v_inst_379_);
lean_closure_set(v___f_390_, 6, v_inst_380_);
lean_closure_set(v___f_390_, 7, v_toMonadRef_381_);
lean_closure_set(v___f_390_, 8, v_inst_382_);
lean_closure_set(v___f_390_, 9, v_toBind_383_);
lean_closure_set(v___f_390_, 10, v___x_384_);
lean_closure_set(v___f_390_, 11, v_inst_385_);
lean_closure_set(v___f_390_, 12, v___x_386_);
v___x_391_ = l_Lean_Syntax_getKind(v_attr_388_);
v___x_392_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___lam__13___closed__2));
v___x_393_ = lean_name_eq(v___x_391_, v___x_392_);
if (v___x_393_ == 0)
{
if (lean_obj_tag(v___x_391_) == 1)
{
lean_object* v_str_394_; lean_object* v___f_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
lean_dec(v_attr_388_);
lean_dec_ref(v_inst_385_);
lean_dec_ref(v_inst_378_);
v_str_394_ = lean_ctor_get(v___x_391_, 1);
lean_inc_ref(v_str_394_);
lean_dec_ref_known(v___x_391_, 2);
v___f_395_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__10), 2, 1);
lean_closure_set(v___f_395_, 0, v___f_390_);
v___x_396_ = lean_box(0);
v___x_397_ = l_Lean_Name_str___override(v___x_396_, v_str_394_);
v___x_398_ = lean_apply_2(v_toPure_377_, lean_box(0), v___x_397_);
v___x_399_ = lean_apply_4(v_toBind_383_, lean_box(0), lean_box(0), v___x_398_, v___f_395_);
return v___x_399_;
}
else
{
lean_object* v___f_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
lean_dec(v___x_391_);
lean_dec(v_toPure_377_);
v___f_400_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__10), 2, 1);
lean_closure_set(v___f_400_, 0, v___f_390_);
v___x_401_ = lean_obj_once(&l_Lean_Elab_elabAttr___redArg___lam__13___closed__4, &l_Lean_Elab_elabAttr___redArg___lam__13___closed__4_once, _init_l_Lean_Elab_elabAttr___redArg___lam__13___closed__4);
v___x_402_ = l_Lean_throwErrorAt___redArg(v_inst_378_, v_inst_385_, v_attr_388_, v___x_401_);
v___x_403_ = lean_apply_4(v_toBind_383_, lean_box(0), lean_box(0), v___x_402_, v___f_400_);
return v___x_403_;
}
}
else
{
lean_object* v___f_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
lean_dec(v___x_391_);
lean_dec_ref(v_inst_385_);
lean_dec_ref(v_inst_378_);
v___f_404_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__10), 2, 1);
lean_closure_set(v___f_404_, 0, v___f_390_);
v___x_405_ = l_Lean_Syntax_getArg(v_attr_388_, v___x_387_);
lean_dec(v_attr_388_);
v___x_406_ = l_Lean_Syntax_getId(v___x_405_);
lean_dec(v___x_405_);
v___x_407_ = l_Lean_Name_eraseMacroScopes(v___x_406_);
lean_dec(v___x_406_);
v___x_408_ = lean_apply_2(v_toPure_377_, lean_box(0), v___x_407_);
v___x_409_ = lean_apply_4(v_toBind_383_, lean_box(0), lean_box(0), v___x_408_, v___f_404_);
return v___x_409_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__13___boxed(lean_object* v_inst_410_, lean_object* v_attrKind_411_, lean_object* v_toPure_412_, lean_object* v_inst_413_, lean_object* v_inst_414_, lean_object* v_inst_415_, lean_object* v_toMonadRef_416_, lean_object* v_inst_417_, lean_object* v_toBind_418_, lean_object* v___x_419_, lean_object* v_inst_420_, lean_object* v___x_421_, lean_object* v___x_422_, lean_object* v_attr_423_){
_start:
{
uint8_t v_attrKind_boxed_424_; lean_object* v_res_425_; 
v_attrKind_boxed_424_ = lean_unbox(v_attrKind_411_);
v_res_425_ = l_Lean_Elab_elabAttr___redArg___lam__13(v_inst_410_, v_attrKind_boxed_424_, v_toPure_412_, v_inst_413_, v_inst_414_, v_inst_415_, v_toMonadRef_416_, v_inst_417_, v_toBind_418_, v___x_419_, v_inst_420_, v___x_421_, v___x_422_, v_attr_423_);
lean_dec(v___x_422_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__11(lean_object* v_inst_426_, lean_object* v_toPure_427_, lean_object* v_inst_428_, lean_object* v_inst_429_, lean_object* v_inst_430_, lean_object* v_toMonadRef_431_, lean_object* v_inst_432_, lean_object* v_toBind_433_, lean_object* v___x_434_, lean_object* v_inst_435_, lean_object* v___x_436_, lean_object* v___x_437_, lean_object* v_attrInstance_438_, lean_object* v___f_439_, lean_object* v_inst_440_, lean_object* v_inst_441_, lean_object* v_inst_442_, uint8_t v_attrKind_443_){
_start:
{
lean_object* v___x_444_; lean_object* v___f_445_; lean_object* v___x_446_; lean_object* v_attr_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_444_ = lean_box(v_attrKind_443_);
lean_inc_ref(v_inst_435_);
lean_inc(v_toBind_433_);
lean_inc(v_inst_432_);
lean_inc_ref(v_inst_430_);
lean_inc_ref(v_inst_429_);
lean_inc_ref(v_inst_428_);
lean_inc_ref(v_inst_426_);
v___f_445_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__13___boxed), 14, 13);
lean_closure_set(v___f_445_, 0, v_inst_426_);
lean_closure_set(v___f_445_, 1, v___x_444_);
lean_closure_set(v___f_445_, 2, v_toPure_427_);
lean_closure_set(v___f_445_, 3, v_inst_428_);
lean_closure_set(v___f_445_, 4, v_inst_429_);
lean_closure_set(v___f_445_, 5, v_inst_430_);
lean_closure_set(v___f_445_, 6, v_toMonadRef_431_);
lean_closure_set(v___f_445_, 7, v_inst_432_);
lean_closure_set(v___f_445_, 8, v_toBind_433_);
lean_closure_set(v___f_445_, 9, v___x_434_);
lean_closure_set(v___f_445_, 10, v_inst_435_);
lean_closure_set(v___f_445_, 11, v___x_436_);
lean_closure_set(v___f_445_, 12, v___x_437_);
v___x_446_ = lean_unsigned_to_nat(1u);
v_attr_447_ = l_Lean_Syntax_getArg(v_attrInstance_438_, v___x_446_);
v___x_448_ = lean_alloc_closure((void*)(l_Lean_expandMacros), 4, 2);
lean_closure_set(v___x_448_, 0, v_attr_447_);
lean_closure_set(v___x_448_, 1, v___f_439_);
v___x_449_ = l_Lean_Elab_liftMacroM___redArg(v_inst_428_, v_inst_440_, v_inst_426_, v_inst_441_, v_inst_435_, v_inst_442_, v_inst_429_, v_inst_430_, v_inst_432_, v___x_448_);
v___x_450_ = lean_apply_4(v_toBind_433_, lean_box(0), lean_box(0), v___x_449_, v___f_445_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__11___boxed(lean_object** _args){
lean_object* v_inst_451_ = _args[0];
lean_object* v_toPure_452_ = _args[1];
lean_object* v_inst_453_ = _args[2];
lean_object* v_inst_454_ = _args[3];
lean_object* v_inst_455_ = _args[4];
lean_object* v_toMonadRef_456_ = _args[5];
lean_object* v_inst_457_ = _args[6];
lean_object* v_toBind_458_ = _args[7];
lean_object* v___x_459_ = _args[8];
lean_object* v_inst_460_ = _args[9];
lean_object* v___x_461_ = _args[10];
lean_object* v___x_462_ = _args[11];
lean_object* v_attrInstance_463_ = _args[12];
lean_object* v___f_464_ = _args[13];
lean_object* v_inst_465_ = _args[14];
lean_object* v_inst_466_ = _args[15];
lean_object* v_inst_467_ = _args[16];
lean_object* v_attrKind_468_ = _args[17];
_start:
{
uint8_t v_attrKind_boxed_469_; lean_object* v_res_470_; 
v_attrKind_boxed_469_ = lean_unbox(v_attrKind_468_);
v_res_470_ = l_Lean_Elab_elabAttr___redArg___lam__11(v_inst_451_, v_toPure_452_, v_inst_453_, v_inst_454_, v_inst_455_, v_toMonadRef_456_, v_inst_457_, v_toBind_458_, v___x_459_, v_inst_460_, v___x_461_, v___x_462_, v_attrInstance_463_, v___f_464_, v_inst_465_, v_inst_466_, v_inst_467_, v_attrKind_boxed_469_);
lean_dec(v_attrInstance_463_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg(lean_object* v_inst_472_, lean_object* v_inst_473_, lean_object* v_inst_474_, lean_object* v_inst_475_, lean_object* v_inst_476_, lean_object* v_inst_477_, lean_object* v_inst_478_, lean_object* v_inst_479_, lean_object* v_inst_480_, lean_object* v_inst_481_, lean_object* v_attrInstance_482_){
_start:
{
lean_object* v_toApplicative_483_; lean_object* v_toBind_484_; lean_object* v_toPure_485_; lean_object* v_toMonadRef_486_; lean_object* v___f_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___f_494_; lean_object* v___x_495_; uint8_t v___x_496_; lean_object* v___x_497_; 
v_toApplicative_483_ = lean_ctor_get(v_inst_472_, 0);
v_toBind_484_ = lean_ctor_get(v_inst_472_, 1);
v_toPure_485_ = lean_ctor_get(v_toApplicative_483_, 1);
v_toMonadRef_486_ = lean_ctor_get(v_inst_475_, 1);
lean_inc_ref(v_toMonadRef_486_);
v___f_487_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___closed__0));
v___x_488_ = l_Lean_instInhabitedEffectiveImport_default;
v___x_489_ = lean_box(0);
v___x_490_ = lean_unsigned_to_nat(0u);
v___x_491_ = l_Lean_Syntax_getArg(v_attrInstance_482_, v___x_490_);
v___x_492_ = lean_alloc_closure((void*)(l_Lean_Elab_toAttributeKind___boxed), 3, 1);
lean_closure_set(v___x_492_, 0, v___x_491_);
lean_inc(v_inst_480_);
lean_inc_ref(v_inst_479_);
lean_inc_ref(v_inst_478_);
lean_inc_ref(v_inst_474_);
lean_inc_ref(v_inst_475_);
lean_inc_ref(v_inst_477_);
lean_inc_ref_n(v_inst_473_, 2);
lean_inc_ref(v_inst_476_);
lean_inc_ref_n(v_inst_472_, 2);
v___x_493_ = l_Lean_Elab_liftMacroM___redArg(v_inst_472_, v_inst_476_, v_inst_473_, v_inst_477_, v_inst_475_, v_inst_474_, v_inst_478_, v_inst_479_, v_inst_480_, v___x_492_);
lean_inc_n(v_toBind_484_, 2);
lean_inc(v_toPure_485_);
v___f_494_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__11___boxed), 18, 17);
lean_closure_set(v___f_494_, 0, v_inst_473_);
lean_closure_set(v___f_494_, 1, v_toPure_485_);
lean_closure_set(v___f_494_, 2, v_inst_472_);
lean_closure_set(v___f_494_, 3, v_inst_478_);
lean_closure_set(v___f_494_, 4, v_inst_479_);
lean_closure_set(v___f_494_, 5, v_toMonadRef_486_);
lean_closure_set(v___f_494_, 6, v_inst_480_);
lean_closure_set(v___f_494_, 7, v_toBind_484_);
lean_closure_set(v___f_494_, 8, v___x_488_);
lean_closure_set(v___f_494_, 9, v_inst_475_);
lean_closure_set(v___f_494_, 10, v___x_489_);
lean_closure_set(v___f_494_, 11, v___x_490_);
lean_closure_set(v___f_494_, 12, v_attrInstance_482_);
lean_closure_set(v___f_494_, 13, v___f_487_);
lean_closure_set(v___f_494_, 14, v_inst_476_);
lean_closure_set(v___f_494_, 15, v_inst_477_);
lean_closure_set(v___f_494_, 16, v_inst_474_);
v___x_495_ = lean_apply_4(v_toBind_484_, lean_box(0), lean_box(0), v___x_493_, v___f_494_);
v___x_496_ = 1;
v___x_497_ = l_Lean_withoutExporting___redArg(v_inst_472_, v_inst_473_, v_inst_481_, v___x_495_, v___x_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr(lean_object* v_m_498_, lean_object* v_inst_499_, lean_object* v_inst_500_, lean_object* v_inst_501_, lean_object* v_inst_502_, lean_object* v_inst_503_, lean_object* v_inst_504_, lean_object* v_inst_505_, lean_object* v_inst_506_, lean_object* v_inst_507_, lean_object* v_inst_508_, lean_object* v_inst_509_, lean_object* v_attrInstance_510_){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = l_Lean_Elab_elabAttr___redArg(v_inst_499_, v_inst_500_, v_inst_501_, v_inst_502_, v_inst_503_, v_inst_504_, v_inst_505_, v_inst_506_, v_inst_507_, v_inst_509_, v_attrInstance_510_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___boxed(lean_object* v_m_512_, lean_object* v_inst_513_, lean_object* v_inst_514_, lean_object* v_inst_515_, lean_object* v_inst_516_, lean_object* v_inst_517_, lean_object* v_inst_518_, lean_object* v_inst_519_, lean_object* v_inst_520_, lean_object* v_inst_521_, lean_object* v_inst_522_, lean_object* v_inst_523_, lean_object* v_attrInstance_524_){
_start:
{
lean_object* v_res_525_; 
v_res_525_ = l_Lean_Elab_elabAttr(v_m_512_, v_inst_513_, v_inst_514_, v_inst_515_, v_inst_516_, v_inst_517_, v_inst_518_, v_inst_519_, v_inst_520_, v_inst_521_, v_inst_522_, v_inst_523_, v_attrInstance_524_);
lean_dec(v_inst_522_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__0(lean_object* v_toPure_526_, lean_object* v_p_527_){
_start:
{
lean_object* v_snd_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v_snd_528_ = lean_ctor_get(v_p_527_, 1);
lean_inc(v_snd_528_);
v___x_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_529_, 0, v_snd_528_);
v___x_530_ = lean_apply_2(v_toPure_526_, lean_box(0), v___x_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__0___boxed(lean_object* v_toPure_531_, lean_object* v_p_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_Lean_Elab_elabAttrs___redArg___lam__0(v_toPure_531_, v_p_532_);
lean_dec_ref(v_p_532_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__1(lean_object* v_a_534_, lean_object* v_withRef_535_, lean_object* v___x_536_, lean_object* v_oldRef_537_){
_start:
{
lean_object* v_ref_538_; lean_object* v___x_539_; 
v_ref_538_ = l_Lean_replaceRef(v_a_534_, v_oldRef_537_);
v___x_539_ = lean_apply_3(v_withRef_535_, lean_box(0), v_ref_538_, v___x_536_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__1___boxed(lean_object* v_a_540_, lean_object* v_withRef_541_, lean_object* v___x_542_, lean_object* v_oldRef_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_Lean_Elab_elabAttrs___redArg___lam__1(v_a_540_, v_withRef_541_, v___x_542_, v_oldRef_543_);
lean_dec(v_oldRef_543_);
lean_dec(v_a_540_);
return v_res_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__2(lean_object* v___y_545_, lean_object* v_toPure_546_, lean_object* v_____do__lift_547_){
_start:
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_548_ = lean_array_push(v___y_545_, v_____do__lift_547_);
v___x_549_ = lean_box(0);
v___x_550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
lean_ctor_set(v___x_550_, 1, v___x_548_);
v___x_551_ = lean_apply_2(v_toPure_546_, lean_box(0), v___x_550_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__3(lean_object* v___y_552_, lean_object* v_toPure_553_, lean_object* v_____r_554_){
_start:
{
lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_555_, 0, v_____r_554_);
lean_ctor_set(v___x_555_, 1, v___y_552_);
v___x_556_ = lean_apply_2(v_toPure_553_, lean_box(0), v___x_555_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__4(lean_object* v_inst_557_, lean_object* v_inst_558_, lean_object* v_inst_559_, lean_object* v_inst_560_, lean_object* v_inst_561_, lean_object* v_toBind_562_, lean_object* v___f_563_, lean_object* v_ex_564_){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_565_ = l_Lean_Elab_logException___redArg(v_inst_557_, v_inst_558_, v_inst_559_, v_inst_560_, v_inst_561_, v_ex_564_);
v___x_566_ = lean_apply_4(v_toBind_562_, lean_box(0), lean_box(0), v___x_565_, v___f_563_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__5(lean_object* v_toMonadRef_567_, lean_object* v_toMonadExceptOf_568_, lean_object* v_inst_569_, lean_object* v_inst_570_, lean_object* v_inst_571_, lean_object* v_inst_572_, lean_object* v_inst_573_, lean_object* v_inst_574_, lean_object* v_inst_575_, lean_object* v_inst_576_, lean_object* v_inst_577_, lean_object* v_inst_578_, lean_object* v_toBind_579_, lean_object* v_toPure_580_, lean_object* v_inst_581_, lean_object* v_inst_582_, lean_object* v___f_583_, lean_object* v_a_584_, lean_object* v_x_585_, lean_object* v___y_586_){
_start:
{
lean_object* v_getRef_587_; lean_object* v_withRef_588_; lean_object* v_tryCatch_589_; lean_object* v___x_590_; lean_object* v___f_591_; lean_object* v___x_592_; lean_object* v___f_593_; lean_object* v___f_594_; lean_object* v___f_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v_getRef_587_ = lean_ctor_get(v_toMonadRef_567_, 0);
lean_inc(v_getRef_587_);
v_withRef_588_ = lean_ctor_get(v_toMonadRef_567_, 1);
lean_inc(v_withRef_588_);
lean_dec_ref(v_toMonadRef_567_);
v_tryCatch_589_ = lean_ctor_get(v_toMonadExceptOf_568_, 1);
lean_inc(v_tryCatch_589_);
lean_dec_ref(v_toMonadExceptOf_568_);
lean_inc(v_a_584_);
lean_inc(v_inst_577_);
lean_inc_ref(v_inst_576_);
lean_inc_ref(v_inst_569_);
v___x_590_ = l_Lean_Elab_elabAttr___redArg(v_inst_569_, v_inst_570_, v_inst_571_, v_inst_572_, v_inst_573_, v_inst_574_, v_inst_575_, v_inst_576_, v_inst_577_, v_inst_578_, v_a_584_);
v___f_591_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttrs___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_591_, 0, v_a_584_);
lean_closure_set(v___f_591_, 1, v_withRef_588_);
lean_closure_set(v___f_591_, 2, v___x_590_);
lean_inc_n(v_toBind_579_, 3);
v___x_592_ = lean_apply_4(v_toBind_579_, lean_box(0), lean_box(0), v_getRef_587_, v___f_591_);
lean_inc(v_toPure_580_);
lean_inc_ref(v___y_586_);
v___f_593_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttrs___redArg___lam__2), 3, 2);
lean_closure_set(v___f_593_, 0, v___y_586_);
lean_closure_set(v___f_593_, 1, v_toPure_580_);
v___f_594_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttrs___redArg___lam__3), 3, 2);
lean_closure_set(v___f_594_, 0, v___y_586_);
lean_closure_set(v___f_594_, 1, v_toPure_580_);
v___f_595_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttrs___redArg___lam__4), 8, 7);
lean_closure_set(v___f_595_, 0, v_inst_569_);
lean_closure_set(v___f_595_, 1, v_inst_581_);
lean_closure_set(v___f_595_, 2, v_inst_577_);
lean_closure_set(v___f_595_, 3, v_inst_576_);
lean_closure_set(v___f_595_, 4, v_inst_582_);
lean_closure_set(v___f_595_, 5, v_toBind_579_);
lean_closure_set(v___f_595_, 6, v___f_594_);
v___x_596_ = lean_apply_4(v_toBind_579_, lean_box(0), lean_box(0), v___x_592_, v___f_593_);
v___x_597_ = lean_apply_3(v_tryCatch_589_, lean_box(0), v___x_596_, v___f_595_);
v___x_598_ = lean_apply_4(v_toBind_579_, lean_box(0), lean_box(0), v___x_597_, v___f_583_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__5___boxed(lean_object** _args){
lean_object* v_toMonadRef_599_ = _args[0];
lean_object* v_toMonadExceptOf_600_ = _args[1];
lean_object* v_inst_601_ = _args[2];
lean_object* v_inst_602_ = _args[3];
lean_object* v_inst_603_ = _args[4];
lean_object* v_inst_604_ = _args[5];
lean_object* v_inst_605_ = _args[6];
lean_object* v_inst_606_ = _args[7];
lean_object* v_inst_607_ = _args[8];
lean_object* v_inst_608_ = _args[9];
lean_object* v_inst_609_ = _args[10];
lean_object* v_inst_610_ = _args[11];
lean_object* v_toBind_611_ = _args[12];
lean_object* v_toPure_612_ = _args[13];
lean_object* v_inst_613_ = _args[14];
lean_object* v_inst_614_ = _args[15];
lean_object* v___f_615_ = _args[16];
lean_object* v_a_616_ = _args[17];
lean_object* v_x_617_ = _args[18];
lean_object* v___y_618_ = _args[19];
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l_Lean_Elab_elabAttrs___redArg___lam__5(v_toMonadRef_599_, v_toMonadExceptOf_600_, v_inst_601_, v_inst_602_, v_inst_603_, v_inst_604_, v_inst_605_, v_inst_606_, v_inst_607_, v_inst_608_, v_inst_609_, v_inst_610_, v_toBind_611_, v_toPure_612_, v_inst_613_, v_inst_614_, v___f_615_, v_a_616_, v_x_617_, v___y_618_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__6(lean_object* v_toPure_620_, lean_object* v_____s_621_){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = lean_apply_2(v_toPure_620_, lean_box(0), v_____s_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg(lean_object* v_inst_625_, lean_object* v_inst_626_, lean_object* v_inst_627_, lean_object* v_inst_628_, lean_object* v_inst_629_, lean_object* v_inst_630_, lean_object* v_inst_631_, lean_object* v_inst_632_, lean_object* v_inst_633_, lean_object* v_inst_634_, lean_object* v_inst_635_, lean_object* v_inst_636_, lean_object* v_attrInstances_637_){
_start:
{
lean_object* v_toApplicative_638_; lean_object* v_toBind_639_; lean_object* v_toMonadExceptOf_640_; lean_object* v_toMonadRef_641_; lean_object* v_toPure_642_; lean_object* v_attrs_643_; lean_object* v___f_644_; lean_object* v___f_645_; lean_object* v___f_646_; size_t v_sz_647_; size_t v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
v_toApplicative_638_ = lean_ctor_get(v_inst_625_, 0);
v_toBind_639_ = lean_ctor_get(v_inst_625_, 1);
lean_inc_n(v_toBind_639_, 2);
v_toMonadExceptOf_640_ = lean_ctor_get(v_inst_628_, 0);
lean_inc_ref(v_toMonadExceptOf_640_);
v_toMonadRef_641_ = lean_ctor_get(v_inst_628_, 1);
lean_inc_ref(v_toMonadRef_641_);
v_toPure_642_ = lean_ctor_get(v_toApplicative_638_, 1);
v_attrs_643_ = ((lean_object*)(l_Lean_Elab_elabAttrs___redArg___closed__0));
lean_inc_n(v_toPure_642_, 3);
v___f_644_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttrs___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_644_, 0, v_toPure_642_);
lean_inc_ref(v_inst_625_);
v___f_645_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttrs___redArg___lam__5___boxed), 20, 17);
lean_closure_set(v___f_645_, 0, v_toMonadRef_641_);
lean_closure_set(v___f_645_, 1, v_toMonadExceptOf_640_);
lean_closure_set(v___f_645_, 2, v_inst_625_);
lean_closure_set(v___f_645_, 3, v_inst_626_);
lean_closure_set(v___f_645_, 4, v_inst_627_);
lean_closure_set(v___f_645_, 5, v_inst_628_);
lean_closure_set(v___f_645_, 6, v_inst_629_);
lean_closure_set(v___f_645_, 7, v_inst_630_);
lean_closure_set(v___f_645_, 8, v_inst_631_);
lean_closure_set(v___f_645_, 9, v_inst_632_);
lean_closure_set(v___f_645_, 10, v_inst_633_);
lean_closure_set(v___f_645_, 11, v_inst_636_);
lean_closure_set(v___f_645_, 12, v_toBind_639_);
lean_closure_set(v___f_645_, 13, v_toPure_642_);
lean_closure_set(v___f_645_, 14, v_inst_634_);
lean_closure_set(v___f_645_, 15, v_inst_635_);
lean_closure_set(v___f_645_, 16, v___f_644_);
v___f_646_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttrs___redArg___lam__6), 2, 1);
lean_closure_set(v___f_646_, 0, v_toPure_642_);
v_sz_647_ = lean_array_size(v_attrInstances_637_);
v___x_648_ = ((size_t)0ULL);
v___x_649_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_625_, v_attrInstances_637_, v___f_645_, v_sz_647_, v___x_648_, v_attrs_643_);
v___x_650_ = lean_apply_4(v_toBind_639_, lean_box(0), lean_box(0), v___x_649_, v___f_646_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs(lean_object* v_m_651_, lean_object* v_inst_652_, lean_object* v_inst_653_, lean_object* v_inst_654_, lean_object* v_inst_655_, lean_object* v_inst_656_, lean_object* v_inst_657_, lean_object* v_inst_658_, lean_object* v_inst_659_, lean_object* v_inst_660_, lean_object* v_inst_661_, lean_object* v_inst_662_, lean_object* v_inst_663_, lean_object* v_attrInstances_664_){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = l_Lean_Elab_elabAttrs___redArg(v_inst_652_, v_inst_653_, v_inst_654_, v_inst_655_, v_inst_656_, v_inst_657_, v_inst_658_, v_inst_659_, v_inst_660_, v_inst_661_, v_inst_662_, v_inst_663_, v_attrInstances_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___redArg(lean_object* v_inst_666_, lean_object* v_inst_667_, lean_object* v_inst_668_, lean_object* v_inst_669_, lean_object* v_inst_670_, lean_object* v_inst_671_, lean_object* v_inst_672_, lean_object* v_inst_673_, lean_object* v_inst_674_, lean_object* v_inst_675_, lean_object* v_inst_676_, lean_object* v_inst_677_, lean_object* v_stx_678_){
_start:
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_679_ = lean_unsigned_to_nat(1u);
v___x_680_ = l_Lean_Syntax_getArg(v_stx_678_, v___x_679_);
v___x_681_ = l_Lean_Syntax_getSepArgs(v___x_680_);
lean_dec(v___x_680_);
v___x_682_ = l_Lean_Elab_elabAttrs___redArg(v_inst_666_, v_inst_667_, v_inst_668_, v_inst_669_, v_inst_670_, v_inst_671_, v_inst_672_, v_inst_673_, v_inst_674_, v_inst_675_, v_inst_676_, v_inst_677_, v___x_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___redArg___boxed(lean_object* v_inst_683_, lean_object* v_inst_684_, lean_object* v_inst_685_, lean_object* v_inst_686_, lean_object* v_inst_687_, lean_object* v_inst_688_, lean_object* v_inst_689_, lean_object* v_inst_690_, lean_object* v_inst_691_, lean_object* v_inst_692_, lean_object* v_inst_693_, lean_object* v_inst_694_, lean_object* v_stx_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l_Lean_Elab_elabDeclAttrs___redArg(v_inst_683_, v_inst_684_, v_inst_685_, v_inst_686_, v_inst_687_, v_inst_688_, v_inst_689_, v_inst_690_, v_inst_691_, v_inst_692_, v_inst_693_, v_inst_694_, v_stx_695_);
lean_dec(v_stx_695_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs(lean_object* v_m_697_, lean_object* v_inst_698_, lean_object* v_inst_699_, lean_object* v_inst_700_, lean_object* v_inst_701_, lean_object* v_inst_702_, lean_object* v_inst_703_, lean_object* v_inst_704_, lean_object* v_inst_705_, lean_object* v_inst_706_, lean_object* v_inst_707_, lean_object* v_inst_708_, lean_object* v_inst_709_, lean_object* v_stx_710_){
_start:
{
lean_object* v___x_711_; 
v___x_711_ = l_Lean_Elab_elabDeclAttrs___redArg(v_inst_698_, v_inst_699_, v_inst_700_, v_inst_701_, v_inst_702_, v_inst_703_, v_inst_704_, v_inst_705_, v_inst_706_, v_inst_707_, v_inst_708_, v_inst_709_, v_stx_710_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___boxed(lean_object* v_m_712_, lean_object* v_inst_713_, lean_object* v_inst_714_, lean_object* v_inst_715_, lean_object* v_inst_716_, lean_object* v_inst_717_, lean_object* v_inst_718_, lean_object* v_inst_719_, lean_object* v_inst_720_, lean_object* v_inst_721_, lean_object* v_inst_722_, lean_object* v_inst_723_, lean_object* v_inst_724_, lean_object* v_stx_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_Lean_Elab_elabDeclAttrs(v_m_712_, v_inst_713_, v_inst_714_, v_inst_715_, v_inst_716_, v_inst_717_, v_inst_718_, v_inst_719_, v_inst_720_, v_inst_721_, v_inst_722_, v_inst_723_, v_inst_724_, v_stx_725_);
lean_dec(v_stx_725_);
return v_res_726_;
}
}
lean_object* runtime_initialize_Lean_Elab_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Term(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Format_Macro(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Attributes(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Attributes(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Util(uint8_t builtin);
lean_object* initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* initialize_Lean_Parser_Term(uint8_t builtin);
lean_object* initialize_Init_Data_Format_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Attributes(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Attributes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Attributes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Attributes(builtin);
}
#ifdef __cplusplus
}
#endif
