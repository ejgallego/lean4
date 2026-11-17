// Lean compiler output
// Module: Lean.ParserCompiler.Attribute
// Imports: public import Lean.Compiler.InitAttr import Lean.ExtraModUses
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_instInhabitedEnvExtension_default___redArg();
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t lean_has_compile_error(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Elab_abortCommandExceptionId;
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
lean_object* lean_st_ref_take(lean_object*);
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Attribute_Builtin_getIdent(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
extern lean_object* l_Lean_instInhabitedAttributeImpl_default;
static const lean_string_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "(`Inhabited.default` for `IO.Error`)"};
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__0_value)}};
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__1 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__0_value),((lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__0_value),((lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__0_value)}};
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__1 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__0_value;
static const lean_closure_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__1 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__1_value;
static const lean_closure_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__2 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__2_value;
static const lean_closure_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__3 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__3_value;
static lean_once_cell_t l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__4;
static lean_once_cell_t l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__5;
static lean_once_cell_t l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__6;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__2 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__2_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__3 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__3_value;
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value_aux_0),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value_aux_1),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value_aux_2),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value;
static const lean_array_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__6 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__6_value;
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value_aux_0),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value_aux_1),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value_aux_2),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__8 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__8_value;
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__9 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__9_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__10 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__10_value;
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value_aux_0),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value_aux_1),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value_aux_2),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__12;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__13;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__14 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__14_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__15 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__15_value;
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value_aux_0),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value_aux_1),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value_aux_2),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__17 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__17_value;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__18;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__19;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__20;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__21;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__22;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__23;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__24;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__25;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__26;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__27;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__28;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__1;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__2 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__3(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__0;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__1_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__2_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__3_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__6;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__7;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__8_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__8_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__13_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__15_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__16_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__17_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__18_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_ParserCompiler_registerCombinatorAttribute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParserCompiler_registerCombinatorAttribute___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___closed__0_value;
static const lean_closure_object l_Lean_ParserCompiler_registerCombinatorAttribute___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___closed__1 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___closed__1_value;
static const lean_closure_object l_Lean_ParserCompiler_registerCombinatorAttribute___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___closed__2 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_setDeclFor(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "no declaration of attribute ["};
static const lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__0_value;
static lean_once_cell_t l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__1;
static const lean_string_object l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "] found for `"};
static const lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__2 = (const lean_object*)&l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__2_value;
static lean_once_cell_t l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__3;
static const lean_string_object l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__4 = (const lean_object*)&l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__4_value;
static lean_once_cell_t l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0(lean_object* v_x_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = ((lean_object*)(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__1));
v___x_8_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___boxed(lean_object* v_x_9_, lean_object* v___y_10_, lean_object* v___y_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0(v_x_9_, v___y_10_);
lean_dec_ref(v___y_10_);
lean_dec_ref(v_x_9_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__1(lean_object* v_s_13_, lean_object* v_x_14_){
_start:
{
lean_inc_ref(v_s_13_);
return v_s_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__1___boxed(lean_object* v_s_15_, lean_object* v_x_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__1(v_s_15_, v_x_16_);
lean_dec_ref(v_x_16_);
lean_dec_ref(v_s_15_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2(lean_object* v_x_22_, lean_object* v_x_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = ((lean_object*)(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__1));
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___boxed(lean_object* v_x_25_, lean_object* v_x_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2(v_x_25_, v_x_26_);
lean_dec_ref(v_x_26_);
lean_dec_ref(v_x_25_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__3(lean_object* v_x_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lean_box(0);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__3___boxed(lean_object* v_x_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__3(v_x_30_);
lean_dec_ref(v_x_30_);
return v_res_31_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__4(void){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_instInhabitedEnvExtension_default___redArg();
return v___x_36_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__5(void){
_start:
{
lean_object* v___f_37_; lean_object* v___f_38_; lean_object* v___f_39_; lean_object* v___f_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___f_37_ = ((lean_object*)(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__3));
v___f_38_ = ((lean_object*)(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__2));
v___f_39_ = ((lean_object*)(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__1));
v___f_40_ = ((lean_object*)(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__0));
v___x_41_ = lean_box(0);
v___x_42_ = lean_obj_once(&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__4, &l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__4_once, _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__4);
v___x_43_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
lean_ctor_set(v___x_43_, 1, v___x_41_);
lean_ctor_set(v___x_43_, 2, v___f_40_);
lean_ctor_set(v___x_43_, 3, v___f_39_);
lean_ctor_set(v___x_43_, 4, v___f_38_);
lean_ctor_set(v___x_43_, 5, v___f_37_);
return v___x_43_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__6(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_44_ = lean_obj_once(&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__5, &l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__5_once, _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__5);
v___x_45_ = l_Lean_instInhabitedAttributeImpl_default;
v___x_46_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
lean_ctor_set(v___x_46_, 1, v___x_44_);
return v___x_46_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_obj_once(&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__6, &l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__6_once, _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__6);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default;
return v___x_48_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__12(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__10));
v___x_76_ = l_Lean_mkAtom(v___x_75_);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__13(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_77_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__12, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__12_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__12);
v___x_78_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5));
v___x_79_ = lean_array_push(v___x_78_, v___x_77_);
return v___x_79_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__18(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__17));
v___x_89_ = l_Lean_mkAtom(v___x_88_);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__19(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__18, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__18_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__18);
v___x_91_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5));
v___x_92_ = lean_array_push(v___x_91_, v___x_90_);
return v___x_92_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__20(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_93_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__19, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__19_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__19);
v___x_94_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16));
v___x_95_ = lean_box(2);
v___x_96_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
lean_ctor_set(v___x_96_, 1, v___x_94_);
lean_ctor_set(v___x_96_, 2, v___x_93_);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__21(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__20, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__20_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__20);
v___x_98_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__13, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__13_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__13);
v___x_99_ = lean_array_push(v___x_98_, v___x_97_);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__22(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_100_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__21, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__21_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__21);
v___x_101_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11));
v___x_102_ = lean_box(2);
v___x_103_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
lean_ctor_set(v___x_103_, 1, v___x_101_);
lean_ctor_set(v___x_103_, 2, v___x_100_);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__23(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_104_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__22, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__22_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__22);
v___x_105_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5));
v___x_106_ = lean_array_push(v___x_105_, v___x_104_);
return v___x_106_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__24(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_107_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__23, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__23_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__23);
v___x_108_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__9));
v___x_109_ = lean_box(2);
v___x_110_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
lean_ctor_set(v___x_110_, 1, v___x_108_);
lean_ctor_set(v___x_110_, 2, v___x_107_);
return v___x_110_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__25(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_111_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__24, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__24_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__24);
v___x_112_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5));
v___x_113_ = lean_array_push(v___x_112_, v___x_111_);
return v___x_113_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__26(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_114_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__25, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__25_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__25);
v___x_115_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7));
v___x_116_ = lean_box(2);
v___x_117_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v___x_115_);
lean_ctor_set(v___x_117_, 2, v___x_114_);
return v___x_117_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__27(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_118_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__26, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__26_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__26);
v___x_119_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5));
v___x_120_ = lean_array_push(v___x_119_, v___x_118_);
return v___x_120_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__28(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_121_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__27, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__27_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__27);
v___x_122_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4));
v___x_123_ = lean_box(2);
v___x_124_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
lean_ctor_set(v___x_124_, 1, v___x_122_);
lean_ctor_set(v___x_124_, 2, v___x_121_);
return v___x_124_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1(void){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__28, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__28_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__28);
return v___x_125_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_126_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0, &l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0);
v___x_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
return v___x_128_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__1, &l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__1);
v___x_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg(lean_object* v_env_131_, lean_object* v___y_132_){
_start:
{
lean_object* v___x_134_; lean_object* v_nextMacroScope_135_; lean_object* v_ngen_136_; lean_object* v_auxDeclNGen_137_; lean_object* v_traceState_138_; lean_object* v_recordedDeps_139_; lean_object* v_messages_140_; lean_object* v_infoState_141_; lean_object* v_snapshotTasks_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_153_; 
v___x_134_ = lean_st_ref_take(v___y_132_);
v_nextMacroScope_135_ = lean_ctor_get(v___x_134_, 1);
v_ngen_136_ = lean_ctor_get(v___x_134_, 2);
v_auxDeclNGen_137_ = lean_ctor_get(v___x_134_, 3);
v_traceState_138_ = lean_ctor_get(v___x_134_, 4);
v_recordedDeps_139_ = lean_ctor_get(v___x_134_, 6);
v_messages_140_ = lean_ctor_get(v___x_134_, 7);
v_infoState_141_ = lean_ctor_get(v___x_134_, 8);
v_snapshotTasks_142_ = lean_ctor_get(v___x_134_, 9);
v_isSharedCheck_153_ = !lean_is_exclusive(v___x_134_);
if (v_isSharedCheck_153_ == 0)
{
lean_object* v_unused_154_; lean_object* v_unused_155_; 
v_unused_154_ = lean_ctor_get(v___x_134_, 5);
lean_dec(v_unused_154_);
v_unused_155_ = lean_ctor_get(v___x_134_, 0);
lean_dec(v_unused_155_);
v___x_144_ = v___x_134_;
v_isShared_145_ = v_isSharedCheck_153_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_snapshotTasks_142_);
lean_inc(v_infoState_141_);
lean_inc(v_messages_140_);
lean_inc(v_recordedDeps_139_);
lean_inc(v_traceState_138_);
lean_inc(v_auxDeclNGen_137_);
lean_inc(v_ngen_136_);
lean_inc(v_nextMacroScope_135_);
lean_dec(v___x_134_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_153_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_149_; 
v___x_146_ = lean_box(0);
v___x_147_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2, &l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2);
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 5, v___x_147_);
lean_ctor_set(v___x_144_, 0, v_env_131_);
v___x_149_ = v___x_144_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_env_131_);
lean_ctor_set(v_reuseFailAlloc_152_, 1, v_nextMacroScope_135_);
lean_ctor_set(v_reuseFailAlloc_152_, 2, v_ngen_136_);
lean_ctor_set(v_reuseFailAlloc_152_, 3, v_auxDeclNGen_137_);
lean_ctor_set(v_reuseFailAlloc_152_, 4, v_traceState_138_);
lean_ctor_set(v_reuseFailAlloc_152_, 5, v___x_147_);
lean_ctor_set(v_reuseFailAlloc_152_, 6, v_recordedDeps_139_);
lean_ctor_set(v_reuseFailAlloc_152_, 7, v_messages_140_);
lean_ctor_set(v_reuseFailAlloc_152_, 8, v_infoState_141_);
lean_ctor_set(v_reuseFailAlloc_152_, 9, v_snapshotTasks_142_);
v___x_149_ = v_reuseFailAlloc_152_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = lean_st_ref_put(v___y_132_, v___x_149_);
v___x_151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_151_, 0, v___x_146_);
return v___x_151_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___boxed(lean_object* v_env_156_, lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg(v_env_156_, v___y_157_);
lean_dec(v___y_157_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3(lean_object* v_env_160_, lean_object* v___y_161_, lean_object* v___y_162_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg(v_env_160_, v___y_162_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___boxed(lean_object* v_env_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3(v_env_165_, v___y_166_, v___y_167_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
return v_res_169_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0, &l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0);
v___x_171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
return v___x_171_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_172_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0);
v___x_173_ = lean_unsigned_to_nat(0u);
v___x_174_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_174_, 0, v___x_173_);
lean_ctor_set(v___x_174_, 1, v___x_173_);
lean_ctor_set(v___x_174_, 2, v___x_173_);
lean_ctor_set(v___x_174_, 3, v___x_173_);
lean_ctor_set(v___x_174_, 4, v___x_172_);
lean_ctor_set(v___x_174_, 5, v___x_172_);
lean_ctor_set(v___x_174_, 6, v___x_172_);
lean_ctor_set(v___x_174_, 7, v___x_172_);
lean_ctor_set(v___x_174_, 8, v___x_172_);
lean_ctor_set(v___x_174_, 9, v___x_172_);
lean_ctor_set(v___x_174_, 10, v___x_172_);
return v___x_174_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_175_ = lean_unsigned_to_nat(32u);
v___x_176_ = lean_mk_empty_array_with_capacity(v___x_175_);
v___x_177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
return v___x_177_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__3(void){
_start:
{
size_t v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_178_ = ((size_t)5ULL);
v___x_179_ = lean_unsigned_to_nat(0u);
v___x_180_ = lean_unsigned_to_nat(32u);
v___x_181_ = lean_mk_empty_array_with_capacity(v___x_180_);
v___x_182_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__2);
v___x_183_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_183_, 0, v___x_182_);
lean_ctor_set(v___x_183_, 1, v___x_181_);
lean_ctor_set(v___x_183_, 2, v___x_179_);
lean_ctor_set(v___x_183_, 3, v___x_179_);
lean_ctor_set_usize(v___x_183_, 4, v___x_178_);
return v___x_183_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_184_ = lean_box(1);
v___x_185_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__3);
v___x_186_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0);
v___x_187_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
lean_ctor_set(v___x_187_, 1, v___x_185_);
lean_ctor_set(v___x_187_, 2, v___x_184_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0(lean_object* v_msgData_188_, lean_object* v___y_189_, lean_object* v___y_190_){
_start:
{
lean_object* v___x_192_; lean_object* v_toCold_193_; lean_object* v_env_194_; lean_object* v_options_195_; uint8_t v___x_196_; lean_object* v_env_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_192_ = lean_st_ref_get(v___y_190_);
v_toCold_193_ = lean_ctor_get(v___y_189_, 0);
v_env_194_ = lean_ctor_get(v___x_192_, 0);
lean_inc_ref(v_env_194_);
lean_dec(v___x_192_);
v_options_195_ = lean_ctor_get(v_toCold_193_, 2);
v___x_196_ = 0;
v_env_197_ = l_Lean_Environment_setRecordingDeps(v_env_194_, v___x_196_);
v___x_198_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1);
v___x_199_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__4);
lean_inc_ref(v_options_195_);
v___x_200_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_200_, 0, v_env_197_);
lean_ctor_set(v___x_200_, 1, v___x_198_);
lean_ctor_set(v___x_200_, 2, v___x_199_);
lean_ctor_set(v___x_200_, 3, v_options_195_);
v___x_201_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
lean_ctor_set(v___x_201_, 1, v_msgData_188_);
v___x_202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___boxed(lean_object* v_msgData_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0(v_msgData_203_, v___y_204_, v___y_205_);
lean_dec(v___y_205_);
lean_dec_ref(v___y_204_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(lean_object* v_msg_208_, lean_object* v___y_209_, lean_object* v___y_210_){
_start:
{
lean_object* v_ref_212_; lean_object* v___x_213_; lean_object* v_a_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_222_; 
v_ref_212_ = lean_ctor_get(v___y_209_, 2);
v___x_213_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0(v_msg_208_, v___y_209_, v___y_210_);
v_a_214_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_222_ == 0)
{
v___x_216_ = v___x_213_;
v_isShared_217_ = v_isSharedCheck_222_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_a_214_);
lean_dec(v___x_213_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_222_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_218_; lean_object* v___x_220_; 
lean_inc(v_ref_212_);
v___x_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_218_, 0, v_ref_212_);
lean_ctor_set(v___x_218_, 1, v_a_214_);
if (v_isShared_217_ == 0)
{
lean_ctor_set_tag(v___x_216_, 1);
lean_ctor_set(v___x_216_, 0, v___x_218_);
v___x_220_ = v___x_216_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v___x_218_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg___boxed(lean_object* v_msg_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(v_msg_223_, v___y_224_, v___y_225_);
lean_dec(v___y_225_);
lean_dec_ref(v___y_224_);
return v_res_227_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__1(void){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_229_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__0));
v___x_230_ = l_Lean_stringToMessageData(v___x_229_);
return v___x_230_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__3(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_232_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__2));
v___x_233_ = l_Lean_stringToMessageData(v___x_232_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0(lean_object* v_name_234_, lean_object* v_decl_235_, lean_object* v___y_236_, lean_object* v___y_237_){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_239_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__1, &l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__1_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__1);
v___x_240_ = l_Lean_MessageData_ofName(v_name_234_);
v___x_241_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_239_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
v___x_242_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__3, &l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__3_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__3);
v___x_243_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_241_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(v___x_243_, v___y_236_, v___y_237_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___boxed(lean_object* v_name_245_, lean_object* v_decl_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0(v_name_245_, v_decl_246_, v___y_247_, v___y_248_);
lean_dec(v___y_248_);
lean_dec_ref(v___y_247_);
lean_dec(v_decl_246_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__1(lean_object* v_es_251_){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = lean_array_mk(v_es_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2(lean_object* v_s_253_, lean_object* v_p_254_){
_start:
{
lean_object* v_fst_255_; lean_object* v_snd_256_; lean_object* v___x_257_; 
v_fst_255_ = lean_ctor_get(v_p_254_, 0);
lean_inc(v_fst_255_);
v_snd_256_ = lean_ctor_get(v_p_254_, 1);
lean_inc(v_snd_256_);
lean_dec_ref(v_p_254_);
v___x_257_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_255_, v_snd_256_, v_s_253_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__3(lean_object* v_addEntryFn_258_, lean_object* v___x_259_, lean_object* v_s_260_){
_start:
{
lean_object* v_importedEntries_261_; lean_object* v_state_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_270_; 
v_importedEntries_261_ = lean_ctor_get(v_s_260_, 0);
v_state_262_ = lean_ctor_get(v_s_260_, 1);
v_isSharedCheck_270_ = !lean_is_exclusive(v_s_260_);
if (v_isSharedCheck_270_ == 0)
{
v___x_264_ = v_s_260_;
v_isShared_265_ = v_isSharedCheck_270_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_state_262_);
lean_inc(v_importedEntries_261_);
lean_dec(v_s_260_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_270_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v_state_266_; lean_object* v___x_268_; 
v_state_266_ = lean_apply_2(v_addEntryFn_258_, v_state_262_, v___x_259_);
if (v_isShared_265_ == 0)
{
lean_ctor_set(v___x_264_, 1, v_state_266_);
v___x_268_ = v___x_264_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_importedEntries_261_);
lean_ctor_set(v_reuseFailAlloc_269_, 1, v_state_266_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___closed__0(void){
_start:
{
lean_object* v___x_271_; double v___x_272_; 
v___x_271_ = lean_unsigned_to_nat(0u);
v___x_272_ = lean_float_of_nat(v___x_271_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8(lean_object* v_cls_276_, lean_object* v_msg_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
lean_object* v_ref_281_; lean_object* v___x_282_; lean_object* v_a_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_328_; 
v_ref_281_ = lean_ctor_get(v___y_278_, 2);
v___x_282_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0(v_msg_277_, v___y_278_, v___y_279_);
v_a_283_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_328_ == 0)
{
v___x_285_ = v___x_282_;
v_isShared_286_ = v_isSharedCheck_328_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_a_283_);
lean_dec(v___x_282_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_328_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_287_; lean_object* v_traceState_288_; lean_object* v_env_289_; lean_object* v_nextMacroScope_290_; lean_object* v_ngen_291_; lean_object* v_auxDeclNGen_292_; lean_object* v_cache_293_; lean_object* v_recordedDeps_294_; lean_object* v_messages_295_; lean_object* v_infoState_296_; lean_object* v_snapshotTasks_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_327_; 
v___x_287_ = lean_st_ref_take(v___y_279_);
v_traceState_288_ = lean_ctor_get(v___x_287_, 4);
v_env_289_ = lean_ctor_get(v___x_287_, 0);
v_nextMacroScope_290_ = lean_ctor_get(v___x_287_, 1);
v_ngen_291_ = lean_ctor_get(v___x_287_, 2);
v_auxDeclNGen_292_ = lean_ctor_get(v___x_287_, 3);
v_cache_293_ = lean_ctor_get(v___x_287_, 5);
v_recordedDeps_294_ = lean_ctor_get(v___x_287_, 6);
v_messages_295_ = lean_ctor_get(v___x_287_, 7);
v_infoState_296_ = lean_ctor_get(v___x_287_, 8);
v_snapshotTasks_297_ = lean_ctor_get(v___x_287_, 9);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_327_ == 0)
{
v___x_299_ = v___x_287_;
v_isShared_300_ = v_isSharedCheck_327_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_snapshotTasks_297_);
lean_inc(v_infoState_296_);
lean_inc(v_messages_295_);
lean_inc(v_recordedDeps_294_);
lean_inc(v_cache_293_);
lean_inc(v_traceState_288_);
lean_inc(v_auxDeclNGen_292_);
lean_inc(v_ngen_291_);
lean_inc(v_nextMacroScope_290_);
lean_inc(v_env_289_);
lean_dec(v___x_287_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_327_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
uint64_t v_tid_301_; lean_object* v_traces_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_326_; 
v_tid_301_ = lean_ctor_get_uint64(v_traceState_288_, sizeof(void*)*1);
v_traces_302_ = lean_ctor_get(v_traceState_288_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v_traceState_288_);
if (v_isSharedCheck_326_ == 0)
{
v___x_304_ = v_traceState_288_;
v_isShared_305_ = v_isSharedCheck_326_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_traces_302_);
lean_dec(v_traceState_288_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_326_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_306_; lean_object* v___x_307_; double v___x_308_; uint8_t v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_317_; 
v___x_306_ = lean_box(0);
v___x_307_ = lean_box(0);
v___x_308_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___closed__0);
v___x_309_ = 0;
v___x_310_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___closed__1));
v___x_311_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_311_, 0, v_cls_276_);
lean_ctor_set(v___x_311_, 1, v___x_307_);
lean_ctor_set(v___x_311_, 2, v___x_310_);
lean_ctor_set_float(v___x_311_, sizeof(void*)*3, v___x_308_);
lean_ctor_set_float(v___x_311_, sizeof(void*)*3 + 8, v___x_308_);
lean_ctor_set_uint8(v___x_311_, sizeof(void*)*3 + 16, v___x_309_);
v___x_312_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___closed__2));
v___x_313_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_313_, 0, v___x_311_);
lean_ctor_set(v___x_313_, 1, v_a_283_);
lean_ctor_set(v___x_313_, 2, v___x_312_);
lean_inc(v_ref_281_);
v___x_314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_314_, 0, v_ref_281_);
lean_ctor_set(v___x_314_, 1, v___x_313_);
v___x_315_ = l_Lean_PersistentArray_push___redArg(v_traces_302_, v___x_314_);
if (v_isShared_305_ == 0)
{
lean_ctor_set(v___x_304_, 0, v___x_315_);
v___x_317_ = v___x_304_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_315_);
lean_ctor_set_uint64(v_reuseFailAlloc_325_, sizeof(void*)*1, v_tid_301_);
v___x_317_ = v_reuseFailAlloc_325_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
lean_object* v___x_319_; 
if (v_isShared_300_ == 0)
{
lean_ctor_set(v___x_299_, 4, v___x_317_);
v___x_319_ = v___x_299_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_env_289_);
lean_ctor_set(v_reuseFailAlloc_324_, 1, v_nextMacroScope_290_);
lean_ctor_set(v_reuseFailAlloc_324_, 2, v_ngen_291_);
lean_ctor_set(v_reuseFailAlloc_324_, 3, v_auxDeclNGen_292_);
lean_ctor_set(v_reuseFailAlloc_324_, 4, v___x_317_);
lean_ctor_set(v_reuseFailAlloc_324_, 5, v_cache_293_);
lean_ctor_set(v_reuseFailAlloc_324_, 6, v_recordedDeps_294_);
lean_ctor_set(v_reuseFailAlloc_324_, 7, v_messages_295_);
lean_ctor_set(v_reuseFailAlloc_324_, 8, v_infoState_296_);
lean_ctor_set(v_reuseFailAlloc_324_, 9, v_snapshotTasks_297_);
v___x_319_ = v_reuseFailAlloc_324_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
lean_object* v___x_320_; lean_object* v___x_322_; 
v___x_320_ = lean_st_ref_put(v___y_279_, v___x_319_);
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 0, v___x_306_);
v___x_322_ = v___x_285_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v___x_306_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___boxed(lean_object* v_cls_329_, lean_object* v_msg_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8(v_cls_329_, v_msg_330_, v___y_331_, v___y_332_);
lean_dec(v___y_332_);
lean_dec_ref(v___y_331_);
return v_res_334_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11___redArg(lean_object* v_keys_335_, lean_object* v_i_336_, lean_object* v_k_337_){
_start:
{
lean_object* v___x_338_; uint8_t v___x_339_; 
v___x_338_ = lean_array_get_size(v_keys_335_);
v___x_339_ = lean_nat_dec_lt(v_i_336_, v___x_338_);
if (v___x_339_ == 0)
{
lean_dec(v_i_336_);
return v___x_339_;
}
else
{
lean_object* v_k_x27_340_; uint8_t v___x_341_; 
v_k_x27_340_ = lean_array_fget_borrowed(v_keys_335_, v_i_336_);
v___x_341_ = l_Lean_instBEqExtraModUse_beq(v_k_337_, v_k_x27_340_);
if (v___x_341_ == 0)
{
lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_342_ = lean_unsigned_to_nat(1u);
v___x_343_ = lean_nat_add(v_i_336_, v___x_342_);
lean_dec(v_i_336_);
v_i_336_ = v___x_343_;
goto _start;
}
else
{
lean_dec(v_i_336_);
return v___x_339_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11___redArg___boxed(lean_object* v_keys_345_, lean_object* v_i_346_, lean_object* v_k_347_){
_start:
{
uint8_t v_res_348_; lean_object* v_r_349_; 
v_res_348_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11___redArg(v_keys_345_, v_i_346_, v_k_347_);
lean_dec_ref(v_k_347_);
lean_dec_ref(v_keys_345_);
v_r_349_ = lean_box(v_res_348_);
return v_r_349_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg(lean_object* v_x_350_, size_t v_x_351_, lean_object* v_x_352_){
_start:
{
if (lean_obj_tag(v_x_350_) == 0)
{
lean_object* v_es_353_; lean_object* v___x_354_; size_t v___x_355_; size_t v___x_356_; lean_object* v_j_357_; lean_object* v___x_358_; 
v_es_353_ = lean_ctor_get(v_x_350_, 0);
v___x_354_ = lean_box(2);
v___x_355_ = ((size_t)31ULL);
v___x_356_ = lean_usize_land(v_x_351_, v___x_355_);
v_j_357_ = lean_usize_to_nat(v___x_356_);
v___x_358_ = lean_array_get_borrowed(v___x_354_, v_es_353_, v_j_357_);
lean_dec(v_j_357_);
switch(lean_obj_tag(v___x_358_))
{
case 0:
{
lean_object* v_key_359_; uint8_t v___x_360_; 
v_key_359_ = lean_ctor_get(v___x_358_, 0);
v___x_360_ = l_Lean_instBEqExtraModUse_beq(v_x_352_, v_key_359_);
return v___x_360_;
}
case 1:
{
lean_object* v_node_361_; size_t v___x_362_; size_t v___x_363_; 
v_node_361_ = lean_ctor_get(v___x_358_, 0);
v___x_362_ = ((size_t)5ULL);
v___x_363_ = lean_usize_shift_right(v_x_351_, v___x_362_);
v_x_350_ = v_node_361_;
v_x_351_ = v___x_363_;
goto _start;
}
default: 
{
uint8_t v___x_365_; 
v___x_365_ = 0;
return v___x_365_;
}
}
}
else
{
lean_object* v_ks_366_; lean_object* v___x_367_; uint8_t v___x_368_; 
v_ks_366_ = lean_ctor_get(v_x_350_, 0);
v___x_367_ = lean_unsigned_to_nat(0u);
v___x_368_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11___redArg(v_ks_366_, v___x_367_, v_x_352_);
return v___x_368_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg___boxed(lean_object* v_x_369_, lean_object* v_x_370_, lean_object* v_x_371_){
_start:
{
size_t v_x_5424__boxed_372_; uint8_t v_res_373_; lean_object* v_r_374_; 
v_x_5424__boxed_372_ = lean_unbox_usize(v_x_370_);
lean_dec(v_x_370_);
v_res_373_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg(v_x_369_, v_x_5424__boxed_372_, v_x_371_);
lean_dec_ref(v_x_371_);
lean_dec_ref(v_x_369_);
v_r_374_ = lean_box(v_res_373_);
return v_r_374_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg(lean_object* v_x_375_, lean_object* v_x_376_){
_start:
{
uint64_t v___x_377_; size_t v___x_378_; uint8_t v___x_379_; 
v___x_377_ = l_Lean_instHashableExtraModUse_hash(v_x_376_);
v___x_378_ = lean_uint64_to_usize(v___x_377_);
v___x_379_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg(v_x_375_, v___x_378_, v_x_376_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg___boxed(lean_object* v_x_380_, lean_object* v_x_381_){
_start:
{
uint8_t v_res_382_; lean_object* v_r_383_; 
v_res_382_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg(v_x_380_, v_x_381_);
lean_dec_ref(v_x_381_);
lean_dec_ref(v_x_380_);
v_r_383_ = lean_box(v_res_382_);
return v_r_383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___lam__0(lean_object* v_addEntryFn_384_, lean_object* v_entry_385_, lean_object* v_s_386_){
_start:
{
lean_object* v_importedEntries_387_; lean_object* v_state_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_396_; 
v_importedEntries_387_ = lean_ctor_get(v_s_386_, 0);
v_state_388_ = lean_ctor_get(v_s_386_, 1);
v_isSharedCheck_396_ = !lean_is_exclusive(v_s_386_);
if (v_isSharedCheck_396_ == 0)
{
v___x_390_ = v_s_386_;
v_isShared_391_ = v_isSharedCheck_396_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_state_388_);
lean_inc(v_importedEntries_387_);
lean_dec(v_s_386_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_396_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v_state_392_; lean_object* v___x_394_; 
v_state_392_ = lean_apply_2(v_addEntryFn_384_, v_state_388_, v_entry_385_);
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 1, v_state_392_);
v___x_394_ = v___x_390_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v_importedEntries_387_);
lean_ctor_set(v_reuseFailAlloc_395_, 1, v_state_392_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__0(void){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_397_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__4(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_402_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__3));
v___x_403_ = l_Lean_stringToMessageData(v___x_402_);
return v___x_403_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__6(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__5));
v___x_406_ = l_Lean_stringToMessageData(v___x_405_);
return v___x_406_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__7(void){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___closed__1));
v___x_408_ = l_Lean_stringToMessageData(v___x_407_);
return v___x_408_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__10(void){
_start:
{
lean_object* v_cls_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v_cls_412_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__2));
v___x_413_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__9));
v___x_414_ = l_Lean_Name_append(v___x_413_, v_cls_412_);
return v___x_414_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__12(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__11));
v___x_417_ = l_Lean_stringToMessageData(v___x_416_);
return v___x_417_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__14(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__13));
v___x_420_ = l_Lean_stringToMessageData(v___x_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5(lean_object* v_mod_425_, uint8_t v_isMeta_426_, lean_object* v_hint_427_, lean_object* v___y_428_, lean_object* v___y_429_){
_start:
{
lean_object* v___y_432_; lean_object* v___y_433_; lean_object* v___y_434_; lean_object* v___y_435_; lean_object* v___y_436_; lean_object* v___y_437_; lean_object* v___y_438_; lean_object* v___y_439_; lean_object* v___y_440_; lean_object* v___y_441_; lean_object* v___y_442_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v_env_449_; uint8_t v_isExporting_450_; lean_object* v_entry_451_; lean_object* v___y_453_; lean_object* v___x_476_; lean_object* v_env_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; uint8_t v___x_482_; 
v___x_447_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__0);
v___x_448_ = lean_st_ref_get(v___y_429_);
v_env_449_ = lean_ctor_get(v___x_448_, 0);
lean_inc_ref(v_env_449_);
lean_dec(v___x_448_);
v_isExporting_450_ = lean_ctor_get_uint8(v_env_449_, sizeof(void*)*13);
lean_dec_ref(v_env_449_);
lean_inc(v_mod_425_);
v_entry_451_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_451_, 0, v_mod_425_);
lean_ctor_set_uint8(v_entry_451_, sizeof(void*)*1, v_isExporting_450_);
lean_ctor_set_uint8(v_entry_451_, sizeof(void*)*1 + 1, v_isMeta_426_);
v___x_476_ = lean_st_ref_get(v___y_429_);
v_env_477_ = lean_ctor_get(v___x_476_, 0);
lean_inc_ref(v_env_477_);
lean_dec(v___x_476_);
v___x_478_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_479_ = lean_box(1);
v___x_480_ = lean_box(0);
v___x_481_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_447_, v___x_478_, v_env_477_, v___x_479_, v___x_480_);
v___x_482_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg(v___x_481_, v_entry_451_);
lean_dec(v___x_481_);
if (v___x_482_ == 0)
{
lean_object* v_toCold_483_; lean_object* v_options_484_; uint8_t v_hasTrace_485_; 
v_toCold_483_ = lean_ctor_get(v___y_428_, 0);
v_options_484_ = lean_ctor_get(v_toCold_483_, 2);
v_hasTrace_485_ = lean_ctor_get_uint8(v_options_484_, sizeof(void*)*1);
if (v_hasTrace_485_ == 0)
{
lean_dec(v_hint_427_);
lean_dec(v_mod_425_);
v___y_453_ = v___y_429_;
goto v___jp_452_;
}
else
{
lean_object* v_inheritedTraceOptions_486_; lean_object* v_cls_487_; lean_object* v___y_489_; lean_object* v___y_490_; lean_object* v___y_494_; lean_object* v___y_495_; lean_object* v___x_507_; uint8_t v___x_508_; 
v_inheritedTraceOptions_486_ = lean_ctor_get(v_toCold_483_, 11);
v_cls_487_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__2));
v___x_507_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__10);
v___x_508_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_486_, v_options_484_, v___x_507_);
if (v___x_508_ == 0)
{
lean_dec(v_hint_427_);
lean_dec(v_mod_425_);
v___y_453_ = v___y_429_;
goto v___jp_452_;
}
else
{
lean_object* v___x_509_; lean_object* v___y_511_; 
v___x_509_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__12);
if (v_isExporting_450_ == 0)
{
lean_object* v___x_518_; 
v___x_518_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__17));
v___y_511_ = v___x_518_;
goto v___jp_510_;
}
else
{
lean_object* v___x_519_; 
v___x_519_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__18));
v___y_511_ = v___x_519_;
goto v___jp_510_;
}
v___jp_510_:
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
lean_inc_ref(v___y_511_);
v___x_512_ = l_Lean_stringToMessageData(v___y_511_);
v___x_513_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_513_, 0, v___x_509_);
lean_ctor_set(v___x_513_, 1, v___x_512_);
v___x_514_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__14);
v___x_515_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_515_, 0, v___x_513_);
lean_ctor_set(v___x_515_, 1, v___x_514_);
if (v_isMeta_426_ == 0)
{
lean_object* v___x_516_; 
v___x_516_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__15));
v___y_494_ = v___x_515_;
v___y_495_ = v___x_516_;
goto v___jp_493_;
}
else
{
lean_object* v___x_517_; 
v___x_517_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__16));
v___y_494_ = v___x_515_;
v___y_495_ = v___x_517_;
goto v___jp_493_;
}
}
}
v___jp_488_:
{
lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_491_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_491_, 0, v___y_489_);
lean_ctor_set(v___x_491_, 1, v___y_490_);
v___x_492_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8(v_cls_487_, v___x_491_, v___y_428_, v___y_429_);
if (lean_obj_tag(v___x_492_) == 0)
{
lean_dec_ref_known(v___x_492_, 1);
v___y_453_ = v___y_429_;
goto v___jp_452_;
}
else
{
lean_dec_ref_known(v_entry_451_, 1);
return v___x_492_;
}
}
v___jp_493_:
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; uint8_t v___x_502_; 
lean_inc_ref(v___y_495_);
v___x_496_ = l_Lean_stringToMessageData(v___y_495_);
v___x_497_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_497_, 0, v___y_494_);
lean_ctor_set(v___x_497_, 1, v___x_496_);
v___x_498_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__4);
v___x_499_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_499_, 0, v___x_497_);
lean_ctor_set(v___x_499_, 1, v___x_498_);
v___x_500_ = l_Lean_MessageData_ofName(v_mod_425_);
v___x_501_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_501_, 0, v___x_499_);
lean_ctor_set(v___x_501_, 1, v___x_500_);
v___x_502_ = l_Lean_Name_isAnonymous(v_hint_427_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_503_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__6);
v___x_504_ = l_Lean_MessageData_ofName(v_hint_427_);
v___x_505_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_505_, 0, v___x_503_);
lean_ctor_set(v___x_505_, 1, v___x_504_);
v___y_489_ = v___x_501_;
v___y_490_ = v___x_505_;
goto v___jp_488_;
}
else
{
lean_object* v___x_506_; 
lean_dec(v_hint_427_);
v___x_506_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__7);
v___y_489_ = v___x_501_;
v___y_490_ = v___x_506_;
goto v___jp_488_;
}
}
}
}
else
{
lean_object* v___x_520_; lean_object* v___x_521_; 
lean_dec_ref_known(v_entry_451_, 1);
lean_dec(v_hint_427_);
lean_dec(v_mod_425_);
v___x_520_ = lean_box(0);
v___x_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_521_, 0, v___x_520_);
return v___x_521_;
}
v___jp_431_:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_443_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2, &l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2);
v___x_444_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_444_, 0, v___y_442_);
lean_ctor_set(v___x_444_, 1, v___y_437_);
lean_ctor_set(v___x_444_, 2, v___y_440_);
lean_ctor_set(v___x_444_, 3, v___y_432_);
lean_ctor_set(v___x_444_, 4, v___y_433_);
lean_ctor_set(v___x_444_, 5, v___x_443_);
lean_ctor_set(v___x_444_, 6, v___y_439_);
lean_ctor_set(v___x_444_, 7, v___y_438_);
lean_ctor_set(v___x_444_, 8, v___y_434_);
lean_ctor_set(v___x_444_, 9, v___y_436_);
v___x_445_ = lean_st_ref_put(v___y_441_, v___x_444_);
v___x_446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_446_, 0, v___y_435_);
return v___x_446_;
}
v___jp_452_:
{
lean_object* v___x_454_; lean_object* v_env_455_; lean_object* v_nextMacroScope_456_; lean_object* v_ngen_457_; lean_object* v_auxDeclNGen_458_; lean_object* v_traceState_459_; lean_object* v_recordedDeps_460_; lean_object* v_messages_461_; lean_object* v_infoState_462_; lean_object* v_snapshotTasks_463_; lean_object* v___x_464_; lean_object* v_toEnvExtension_465_; lean_object* v_addEntryFn_466_; lean_object* v_asyncMode_467_; uint8_t v_logWrites_468_; lean_object* v___x_469_; lean_object* v___f_470_; lean_object* v___x_471_; uint8_t v___x_472_; 
v___x_454_ = lean_st_ref_take(v___y_453_);
v_env_455_ = lean_ctor_get(v___x_454_, 0);
lean_inc_ref(v_env_455_);
v_nextMacroScope_456_ = lean_ctor_get(v___x_454_, 1);
lean_inc(v_nextMacroScope_456_);
v_ngen_457_ = lean_ctor_get(v___x_454_, 2);
lean_inc_ref(v_ngen_457_);
v_auxDeclNGen_458_ = lean_ctor_get(v___x_454_, 3);
lean_inc_ref(v_auxDeclNGen_458_);
v_traceState_459_ = lean_ctor_get(v___x_454_, 4);
lean_inc_ref(v_traceState_459_);
v_recordedDeps_460_ = lean_ctor_get(v___x_454_, 6);
lean_inc_ref(v_recordedDeps_460_);
v_messages_461_ = lean_ctor_get(v___x_454_, 7);
lean_inc_ref(v_messages_461_);
v_infoState_462_ = lean_ctor_get(v___x_454_, 8);
lean_inc_ref(v_infoState_462_);
v_snapshotTasks_463_ = lean_ctor_get(v___x_454_, 9);
lean_inc_ref(v_snapshotTasks_463_);
lean_dec(v___x_454_);
v___x_464_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v_toEnvExtension_465_ = lean_ctor_get(v___x_464_, 0);
v_addEntryFn_466_ = lean_ctor_get(v___x_464_, 3);
v_asyncMode_467_ = lean_ctor_get(v_toEnvExtension_465_, 2);
v_logWrites_468_ = lean_ctor_get_uint8(v_toEnvExtension_465_, sizeof(void*)*6);
v___x_469_ = lean_box(0);
lean_inc(v_addEntryFn_466_);
v___f_470_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___lam__0), 3, 2);
lean_closure_set(v___f_470_, 0, v_addEntryFn_466_);
lean_closure_set(v___f_470_, 1, v_entry_451_);
v___x_471_ = lean_box(0);
v___x_472_ = 1;
if (v_logWrites_468_ == 0)
{
lean_object* v___x_473_; 
lean_inc_ref(v_toEnvExtension_465_);
v___x_473_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_465_, v_env_455_, v___f_470_, v_asyncMode_467_, v___x_471_, v___x_472_);
v___y_432_ = v_auxDeclNGen_458_;
v___y_433_ = v_traceState_459_;
v___y_434_ = v_infoState_462_;
v___y_435_ = v___x_469_;
v___y_436_ = v_snapshotTasks_463_;
v___y_437_ = v_nextMacroScope_456_;
v___y_438_ = v_messages_461_;
v___y_439_ = v_recordedDeps_460_;
v___y_440_ = v_ngen_457_;
v___y_441_ = v___y_453_;
v___y_442_ = v___x_473_;
goto v___jp_431_;
}
else
{
lean_object* v___x_474_; lean_object* v___x_475_; 
lean_inc_ref_n(v_toEnvExtension_465_, 2);
v___x_474_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_465_, v_env_455_);
lean_dec_ref(v_env_455_);
v___x_475_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_465_, v___x_474_, v___f_470_, v_asyncMode_467_, v___x_471_, v___x_472_);
v___y_432_ = v_auxDeclNGen_458_;
v___y_433_ = v_traceState_459_;
v___y_434_ = v_infoState_462_;
v___y_435_ = v___x_469_;
v___y_436_ = v_snapshotTasks_463_;
v___y_437_ = v_nextMacroScope_456_;
v___y_438_ = v_messages_461_;
v___y_439_ = v_recordedDeps_460_;
v___y_440_ = v_ngen_457_;
v___y_441_ = v___y_453_;
v___y_442_ = v___x_475_;
goto v___jp_431_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___boxed(lean_object* v_mod_522_, lean_object* v_isMeta_523_, lean_object* v_hint_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_){
_start:
{
uint8_t v_isMeta_boxed_528_; lean_object* v_res_529_; 
v_isMeta_boxed_528_ = lean_unbox(v_isMeta_523_);
v_res_529_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5(v_mod_522_, v_isMeta_boxed_528_, v_hint_524_, v___y_525_, v___y_526_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
return v_res_529_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__6(lean_object* v___x_530_, lean_object* v_declName_531_, lean_object* v_as_532_, size_t v_sz_533_, size_t v_i_534_, lean_object* v_b_535_, lean_object* v___y_536_, lean_object* v___y_537_){
_start:
{
uint8_t v___x_539_; 
v___x_539_ = lean_usize_dec_lt(v_i_534_, v_sz_533_);
if (v___x_539_ == 0)
{
lean_object* v___x_540_; 
lean_dec(v_declName_531_);
v___x_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_540_, 0, v_b_535_);
return v___x_540_;
}
else
{
lean_object* v___x_541_; lean_object* v_modules_542_; lean_object* v___x_543_; lean_object* v_a_544_; lean_object* v___x_545_; lean_object* v_toImport_546_; lean_object* v_module_547_; lean_object* v___x_548_; uint8_t v___x_549_; lean_object* v___x_550_; 
v___x_541_ = l_Lean_Environment_header(v___x_530_);
v_modules_542_ = lean_ctor_get(v___x_541_, 3);
lean_inc_ref(v_modules_542_);
lean_dec_ref(v___x_541_);
v___x_543_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_544_ = lean_array_uget_borrowed(v_as_532_, v_i_534_);
v___x_545_ = lean_array_get(v___x_543_, v_modules_542_, v_a_544_);
lean_dec_ref(v_modules_542_);
v_toImport_546_ = lean_ctor_get(v___x_545_, 0);
lean_inc_ref(v_toImport_546_);
lean_dec(v___x_545_);
v_module_547_ = lean_ctor_get(v_toImport_546_, 0);
lean_inc(v_module_547_);
lean_dec_ref(v_toImport_546_);
v___x_548_ = lean_box(0);
v___x_549_ = 0;
lean_inc(v_declName_531_);
v___x_550_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5(v_module_547_, v___x_549_, v_declName_531_, v___y_536_, v___y_537_);
if (lean_obj_tag(v___x_550_) == 0)
{
size_t v___x_551_; size_t v___x_552_; 
lean_dec_ref_known(v___x_550_, 1);
v___x_551_ = ((size_t)1ULL);
v___x_552_ = lean_usize_add(v_i_534_, v___x_551_);
v_i_534_ = v___x_552_;
v_b_535_ = v___x_548_;
goto _start;
}
else
{
lean_dec(v_declName_531_);
return v___x_550_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__6___boxed(lean_object* v___x_554_, lean_object* v_declName_555_, lean_object* v_as_556_, lean_object* v_sz_557_, lean_object* v_i_558_, lean_object* v_b_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_){
_start:
{
size_t v_sz_boxed_563_; size_t v_i_boxed_564_; lean_object* v_res_565_; 
v_sz_boxed_563_ = lean_unbox_usize(v_sz_557_);
lean_dec(v_sz_557_);
v_i_boxed_564_ = lean_unbox_usize(v_i_558_);
lean_dec(v_i_558_);
v_res_565_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__6(v___x_554_, v_declName_555_, v_as_556_, v_sz_boxed_563_, v_i_boxed_564_, v_b_559_, v___y_560_, v___y_561_);
lean_dec(v___y_561_);
lean_dec_ref(v___y_560_);
lean_dec_ref(v_as_556_);
lean_dec_ref(v___x_554_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__11___redArg(lean_object* v_a_566_, lean_object* v_x_567_){
_start:
{
if (lean_obj_tag(v_x_567_) == 0)
{
lean_object* v___x_568_; 
v___x_568_ = lean_box(0);
return v___x_568_;
}
else
{
lean_object* v_key_569_; lean_object* v_value_570_; lean_object* v_tail_571_; uint8_t v___x_572_; 
v_key_569_ = lean_ctor_get(v_x_567_, 0);
v_value_570_ = lean_ctor_get(v_x_567_, 1);
v_tail_571_ = lean_ctor_get(v_x_567_, 2);
v___x_572_ = lean_name_eq(v_key_569_, v_a_566_);
if (v___x_572_ == 0)
{
v_x_567_ = v_tail_571_;
goto _start;
}
else
{
lean_object* v___x_574_; 
lean_inc(v_value_570_);
v___x_574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_574_, 0, v_value_570_);
return v___x_574_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__11___redArg___boxed(lean_object* v_a_575_, lean_object* v_x_576_){
_start:
{
lean_object* v_res_577_; 
v_res_577_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__11___redArg(v_a_575_, v_x_576_);
lean_dec(v_x_576_);
lean_dec(v_a_575_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg(lean_object* v_m_578_, lean_object* v_a_579_){
_start:
{
lean_object* v_buckets_580_; lean_object* v___x_581_; uint64_t v___y_583_; 
v_buckets_580_ = lean_ctor_get(v_m_578_, 1);
v___x_581_ = lean_array_get_size(v_buckets_580_);
if (lean_obj_tag(v_a_579_) == 0)
{
uint64_t v___x_597_; 
v___x_597_ = 1723ULL;
v___y_583_ = v___x_597_;
goto v___jp_582_;
}
else
{
uint64_t v_hash_598_; 
v_hash_598_ = lean_ctor_get_uint64(v_a_579_, sizeof(void*)*2);
v___y_583_ = v_hash_598_;
goto v___jp_582_;
}
v___jp_582_:
{
uint64_t v___x_584_; uint64_t v___x_585_; uint64_t v_fold_586_; uint64_t v___x_587_; uint64_t v___x_588_; uint64_t v___x_589_; size_t v___x_590_; size_t v___x_591_; size_t v___x_592_; size_t v___x_593_; size_t v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_584_ = 32ULL;
v___x_585_ = lean_uint64_shift_right(v___y_583_, v___x_584_);
v_fold_586_ = lean_uint64_xor(v___y_583_, v___x_585_);
v___x_587_ = 16ULL;
v___x_588_ = lean_uint64_shift_right(v_fold_586_, v___x_587_);
v___x_589_ = lean_uint64_xor(v_fold_586_, v___x_588_);
v___x_590_ = lean_uint64_to_usize(v___x_589_);
v___x_591_ = lean_usize_of_nat(v___x_581_);
v___x_592_ = ((size_t)1ULL);
v___x_593_ = lean_usize_sub(v___x_591_, v___x_592_);
v___x_594_ = lean_usize_land(v___x_590_, v___x_593_);
v___x_595_ = lean_array_uget_borrowed(v_buckets_580_, v___x_594_);
v___x_596_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__11___redArg(v_a_579_, v___x_595_);
return v___x_596_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg___boxed(lean_object* v_m_599_, lean_object* v_a_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg(v_m_599_, v_a_600_);
lean_dec(v_a_600_);
lean_dec_ref(v_m_599_);
return v_res_601_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__0(void){
_start:
{
lean_object* v___x_602_; 
v___x_602_ = l_Std_HashMap_instInhabited___redArg();
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2(lean_object* v_declName_605_, uint8_t v_isMeta_606_, lean_object* v___y_607_, lean_object* v___y_608_){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v_env_615_; lean_object* v___y_617_; lean_object* v___x_630_; 
v___x_610_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__0);
v___x_611_ = lean_st_ref_get(v___y_608_);
v_env_615_ = lean_ctor_get(v___x_611_, 0);
lean_inc_ref(v_env_615_);
lean_dec(v___x_611_);
v___x_630_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_615_, v_declName_605_);
if (lean_obj_tag(v___x_630_) == 0)
{
lean_dec_ref(v_env_615_);
lean_dec(v_declName_605_);
goto v___jp_612_;
}
else
{
lean_object* v_val_631_; lean_object* v___x_632_; lean_object* v_modules_633_; lean_object* v___x_634_; uint8_t v___x_635_; 
v_val_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_val_631_);
lean_dec_ref_known(v___x_630_, 1);
v___x_632_ = l_Lean_Environment_header(v_env_615_);
v_modules_633_ = lean_ctor_get(v___x_632_, 3);
lean_inc_ref(v_modules_633_);
lean_dec_ref(v___x_632_);
v___x_634_ = lean_array_get_size(v_modules_633_);
v___x_635_ = lean_nat_dec_lt(v_val_631_, v___x_634_);
if (v___x_635_ == 0)
{
lean_dec_ref(v_modules_633_);
lean_dec(v_val_631_);
lean_dec_ref(v_env_615_);
lean_dec(v_declName_605_);
goto v___jp_612_;
}
else
{
lean_object* v___x_636_; lean_object* v___x_637_; uint8_t v___y_639_; 
v___x_636_ = lean_array_fget(v_modules_633_, v_val_631_);
lean_dec(v_val_631_);
lean_dec_ref(v_modules_633_);
v___x_637_ = lean_st_ref_get(v___y_608_);
if (v_isMeta_606_ == 0)
{
lean_dec(v___x_637_);
v___y_639_ = v_isMeta_606_;
goto v___jp_638_;
}
else
{
lean_object* v_env_650_; uint8_t v___x_651_; 
v_env_650_ = lean_ctor_get(v___x_637_, 0);
lean_inc_ref(v_env_650_);
lean_dec(v___x_637_);
lean_inc(v_declName_605_);
v___x_651_ = l_Lean_isMarkedMeta(v_env_650_, v_declName_605_);
if (v___x_651_ == 0)
{
v___y_639_ = v_isMeta_606_;
goto v___jp_638_;
}
else
{
uint8_t v___x_652_; 
v___x_652_ = 0;
v___y_639_ = v___x_652_;
goto v___jp_638_;
}
}
v___jp_638_:
{
lean_object* v_toImport_640_; lean_object* v_module_641_; lean_object* v___x_642_; 
v_toImport_640_ = lean_ctor_get(v___x_636_, 0);
lean_inc_ref(v_toImport_640_);
lean_dec(v___x_636_);
v_module_641_ = lean_ctor_get(v_toImport_640_, 0);
lean_inc(v_module_641_);
lean_dec_ref(v_toImport_640_);
lean_inc(v_declName_605_);
v___x_642_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5(v_module_641_, v___y_639_, v_declName_605_, v___y_607_, v___y_608_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
lean_dec_ref_known(v___x_642_, 1);
v___x_643_ = l_Lean_indirectModUseExt;
v___x_644_ = lean_box(1);
v___x_645_ = lean_box(0);
lean_inc_ref(v_env_615_);
v___x_646_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_610_, v___x_643_, v_env_615_, v___x_644_, v___x_645_);
v___x_647_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg(v___x_646_, v_declName_605_);
lean_dec(v___x_646_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_object* v___x_648_; 
v___x_648_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__1));
v___y_617_ = v___x_648_;
goto v___jp_616_;
}
else
{
lean_object* v_val_649_; 
v_val_649_ = lean_ctor_get(v___x_647_, 0);
lean_inc(v_val_649_);
lean_dec_ref_known(v___x_647_, 1);
v___y_617_ = v_val_649_;
goto v___jp_616_;
}
}
else
{
lean_dec_ref(v_env_615_);
lean_dec(v_declName_605_);
return v___x_642_;
}
}
}
}
v___jp_612_:
{
lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_613_ = lean_box(0);
v___x_614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
return v___x_614_;
}
v___jp_616_:
{
lean_object* v___x_618_; size_t v_sz_619_; size_t v___x_620_; lean_object* v___x_621_; 
v___x_618_ = lean_box(0);
v_sz_619_ = lean_array_size(v___y_617_);
v___x_620_ = ((size_t)0ULL);
v___x_621_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__6(v_env_615_, v_declName_605_, v___y_617_, v_sz_619_, v___x_620_, v___x_618_, v___y_607_, v___y_608_);
lean_dec_ref(v___y_617_);
lean_dec_ref(v_env_615_);
if (lean_obj_tag(v___x_621_) == 0)
{
lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_628_; 
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_621_);
if (v_isSharedCheck_628_ == 0)
{
lean_object* v_unused_629_; 
v_unused_629_ = lean_ctor_get(v___x_621_, 0);
lean_dec(v_unused_629_);
v___x_623_ = v___x_621_;
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
else
{
lean_dec(v___x_621_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_626_; 
if (v_isShared_624_ == 0)
{
lean_ctor_set(v___x_623_, 0, v___x_618_);
v___x_626_ = v___x_623_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v___x_618_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
else
{
return v___x_621_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___boxed(lean_object* v_declName_653_, lean_object* v_isMeta_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_){
_start:
{
uint8_t v_isMeta_boxed_658_; lean_object* v_res_659_; 
v_isMeta_boxed_658_ = lean_unbox(v_isMeta_654_);
v_res_659_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2(v_declName_653_, v_isMeta_boxed_658_, v___y_655_, v___y_656_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__4(uint8_t v___x_660_, lean_object* v_a_661_, lean_object* v_decl_662_, lean_object* v_stx_663_, uint8_t v_x_664_, lean_object* v___y_665_, lean_object* v___y_666_){
_start:
{
lean_object* v___x_668_; lean_object* v_env_669_; lean_object* v___x_670_; 
v___x_668_ = lean_st_ref_get(v___y_666_);
v_env_669_ = lean_ctor_get(v___x_668_, 0);
lean_inc_ref(v_env_669_);
lean_dec(v___x_668_);
v___x_670_ = l_Lean_Attribute_Builtin_getIdent(v_stx_663_, v___y_665_, v___y_666_);
if (lean_obj_tag(v___x_670_) == 0)
{
lean_object* v_a_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v_a_671_ = lean_ctor_get(v___x_670_, 0);
lean_inc(v_a_671_);
lean_dec_ref_known(v___x_670_, 1);
v___x_672_ = lean_box(0);
v___x_673_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v_a_671_, v___x_672_, v___y_665_, v___y_666_);
if (lean_obj_tag(v___x_673_) == 0)
{
lean_object* v_a_674_; lean_object* v___x_675_; 
v_a_674_ = lean_ctor_get(v___x_673_, 0);
lean_inc_n(v_a_674_, 2);
lean_dec_ref_known(v___x_673_, 1);
v___x_675_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2(v_a_674_, v___x_660_, v___y_665_, v___y_666_);
if (lean_obj_tag(v___x_675_) == 0)
{
lean_object* v_toEnvExtension_676_; lean_object* v_addEntryFn_677_; lean_object* v_asyncMode_678_; uint8_t v_logWrites_679_; lean_object* v___x_680_; lean_object* v___f_681_; lean_object* v___x_682_; uint8_t v___x_683_; 
lean_dec_ref_known(v___x_675_, 1);
v_toEnvExtension_676_ = lean_ctor_get(v_a_661_, 0);
lean_inc_ref(v_toEnvExtension_676_);
v_addEntryFn_677_ = lean_ctor_get(v_a_661_, 3);
lean_inc(v_addEntryFn_677_);
lean_dec_ref(v_a_661_);
v_asyncMode_678_ = lean_ctor_get(v_toEnvExtension_676_, 2);
lean_inc(v_asyncMode_678_);
v_logWrites_679_ = lean_ctor_get_uint8(v_toEnvExtension_676_, sizeof(void*)*6);
v___x_680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_680_, 0, v_a_674_);
lean_ctor_set(v___x_680_, 1, v_decl_662_);
v___f_681_ = lean_alloc_closure((void*)(l_Lean_ParserCompiler_registerCombinatorAttribute___lam__3), 3, 2);
lean_closure_set(v___f_681_, 0, v_addEntryFn_677_);
lean_closure_set(v___f_681_, 1, v___x_680_);
v___x_682_ = lean_box(0);
v___x_683_ = 1;
if (v_logWrites_679_ == 0)
{
lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_684_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_676_, v_env_669_, v___f_681_, v_asyncMode_678_, v___x_682_, v___x_683_);
lean_dec(v_asyncMode_678_);
v___x_685_ = l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg(v___x_684_, v___y_666_);
return v___x_685_;
}
else
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
lean_inc_ref(v_toEnvExtension_676_);
v___x_686_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_676_, v_env_669_);
lean_dec_ref(v_env_669_);
v___x_687_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_676_, v___x_686_, v___f_681_, v_asyncMode_678_, v___x_682_, v___x_683_);
lean_dec(v_asyncMode_678_);
v___x_688_ = l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg(v___x_687_, v___y_666_);
return v___x_688_;
}
}
else
{
lean_dec(v_a_674_);
lean_dec_ref(v_env_669_);
lean_dec(v_decl_662_);
lean_dec_ref(v_a_661_);
return v___x_675_;
}
}
else
{
lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_696_; 
lean_dec_ref(v_env_669_);
lean_dec(v_decl_662_);
lean_dec_ref(v_a_661_);
v_a_689_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_696_ == 0)
{
v___x_691_ = v___x_673_;
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_dec(v___x_673_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_694_; 
if (v_isShared_692_ == 0)
{
v___x_694_ = v___x_691_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_a_689_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
}
else
{
lean_object* v_a_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_704_; 
lean_dec_ref(v_env_669_);
lean_dec(v_decl_662_);
lean_dec_ref(v_a_661_);
v_a_697_ = lean_ctor_get(v___x_670_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v___x_670_);
if (v_isSharedCheck_704_ == 0)
{
v___x_699_ = v___x_670_;
v_isShared_700_ = v_isSharedCheck_704_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_a_697_);
lean_dec(v___x_670_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_704_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_702_; 
if (v_isShared_700_ == 0)
{
v___x_702_ = v___x_699_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v_a_697_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
return v___x_702_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__4___boxed(lean_object* v___x_705_, lean_object* v_a_706_, lean_object* v_decl_707_, lean_object* v_stx_708_, lean_object* v_x_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
uint8_t v___x_5916__boxed_713_; uint8_t v_x_5918__boxed_714_; lean_object* v_res_715_; 
v___x_5916__boxed_713_ = lean_unbox(v___x_705_);
v_x_5918__boxed_714_ = lean_unbox(v_x_709_);
v_res_715_ = l_Lean_ParserCompiler_registerCombinatorAttribute___lam__4(v___x_5916__boxed_713_, v_a_706_, v_decl_707_, v_stx_708_, v_x_5918__boxed_714_, v___y_710_, v___y_711_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2(lean_object* v_as_716_, size_t v_i_717_, size_t v_stop_718_, lean_object* v_b_719_){
_start:
{
uint8_t v___x_720_; 
v___x_720_ = lean_usize_dec_eq(v_i_717_, v_stop_718_);
if (v___x_720_ == 0)
{
lean_object* v___x_721_; lean_object* v_fst_722_; lean_object* v_snd_723_; lean_object* v___x_724_; size_t v___x_725_; size_t v___x_726_; 
v___x_721_ = lean_array_uget_borrowed(v_as_716_, v_i_717_);
v_fst_722_ = lean_ctor_get(v___x_721_, 0);
v_snd_723_ = lean_ctor_get(v___x_721_, 1);
lean_inc(v_snd_723_);
lean_inc(v_fst_722_);
v___x_724_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_722_, v_snd_723_, v_b_719_);
v___x_725_ = ((size_t)1ULL);
v___x_726_ = lean_usize_add(v_i_717_, v___x_725_);
v_i_717_ = v___x_726_;
v_b_719_ = v___x_724_;
goto _start;
}
else
{
return v_b_719_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2___boxed(lean_object* v_as_728_, lean_object* v_i_729_, lean_object* v_stop_730_, lean_object* v_b_731_){
_start:
{
size_t v_i_boxed_732_; size_t v_stop_boxed_733_; lean_object* v_res_734_; 
v_i_boxed_732_ = lean_unbox_usize(v_i_729_);
lean_dec(v_i_729_);
v_stop_boxed_733_ = lean_unbox_usize(v_stop_730_);
lean_dec(v_stop_730_);
v_res_734_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2(v_as_728_, v_i_boxed_732_, v_stop_boxed_733_, v_b_731_);
lean_dec_ref(v_as_728_);
return v_res_734_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3(lean_object* v_as_735_, size_t v_i_736_, size_t v_stop_737_, lean_object* v_b_738_){
_start:
{
lean_object* v___y_740_; uint8_t v___x_744_; 
v___x_744_ = lean_usize_dec_eq(v_i_736_, v_stop_737_);
if (v___x_744_ == 0)
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; uint8_t v___x_748_; 
v___x_745_ = lean_array_uget_borrowed(v_as_735_, v_i_736_);
v___x_746_ = lean_unsigned_to_nat(0u);
v___x_747_ = lean_array_get_size(v___x_745_);
v___x_748_ = lean_nat_dec_lt(v___x_746_, v___x_747_);
if (v___x_748_ == 0)
{
v___y_740_ = v_b_738_;
goto v___jp_739_;
}
else
{
size_t v___x_749_; size_t v___x_750_; lean_object* v___x_751_; 
v___x_749_ = ((size_t)0ULL);
v___x_750_ = lean_usize_of_nat(v___x_747_);
v___x_751_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2(v___x_745_, v___x_749_, v___x_750_, v_b_738_);
v___y_740_ = v___x_751_;
goto v___jp_739_;
}
}
else
{
return v_b_738_;
}
v___jp_739_:
{
size_t v___x_741_; size_t v___x_742_; 
v___x_741_ = ((size_t)1ULL);
v___x_742_ = lean_usize_add(v_i_736_, v___x_741_);
v_i_736_ = v___x_742_;
v_b_738_ = v___y_740_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3___boxed(lean_object* v_as_752_, lean_object* v_i_753_, lean_object* v_stop_754_, lean_object* v_b_755_){
_start:
{
size_t v_i_boxed_756_; size_t v_stop_boxed_757_; lean_object* v_res_758_; 
v_i_boxed_756_ = lean_unbox_usize(v_i_753_);
lean_dec(v_i_753_);
v_stop_boxed_757_ = lean_unbox_usize(v_stop_754_);
lean_dec(v_stop_754_);
v_res_758_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3(v_as_752_, v_i_boxed_756_, v_stop_boxed_757_, v_b_755_);
lean_dec_ref(v_as_752_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1(lean_object* v_initState_759_, lean_object* v_as_760_){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; uint8_t v___x_763_; 
v___x_761_ = lean_unsigned_to_nat(0u);
v___x_762_ = lean_array_get_size(v_as_760_);
v___x_763_ = lean_nat_dec_lt(v___x_761_, v___x_762_);
if (v___x_763_ == 0)
{
return v_initState_759_;
}
else
{
size_t v___x_764_; size_t v___x_765_; lean_object* v___x_766_; 
v___x_764_ = ((size_t)0ULL);
v___x_765_ = lean_usize_of_nat(v___x_762_);
v___x_766_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3(v_as_760_, v___x_764_, v___x_765_, v_initState_759_);
return v___x_766_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1___boxed(lean_object* v_initState_767_, lean_object* v_as_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l_Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1(v_initState_767_, v_as_768_);
lean_dec_ref(v_as_768_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute(lean_object* v_name_774_, lean_object* v_descr_775_, lean_object* v_ref_776_){
_start:
{
lean_object* v___f_778_; lean_object* v___f_779_; lean_object* v___f_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; uint8_t v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
lean_inc(v_name_774_);
v___f_778_ = lean_alloc_closure((void*)(l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___boxed), 5, 1);
lean_closure_set(v___f_778_, 0, v_name_774_);
v___f_779_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___closed__0));
v___f_780_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___closed__1));
v___x_781_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___closed__2));
v___x_782_ = lean_box(0);
v___x_783_ = lean_box(2);
v___x_784_ = 0;
lean_inc(v_ref_776_);
v___x_785_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_785_, 0, v_ref_776_);
lean_ctor_set(v___x_785_, 1, v___f_780_);
lean_ctor_set(v___x_785_, 2, v___x_781_);
lean_ctor_set(v___x_785_, 3, v___f_779_);
lean_ctor_set(v___x_785_, 4, v___x_782_);
lean_ctor_set(v___x_785_, 5, v___x_783_);
lean_ctor_set(v___x_785_, 6, v___x_782_);
lean_ctor_set_uint8(v___x_785_, sizeof(void*)*7, v___x_784_);
v___x_786_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_785_);
if (lean_obj_tag(v___x_786_) == 0)
{
lean_object* v_a_787_; lean_object* v___x_788_; lean_object* v___f_789_; uint8_t v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v_a_787_ = lean_ctor_get(v___x_786_, 0);
lean_inc_n(v_a_787_, 2);
lean_dec_ref_known(v___x_786_, 1);
v___x_788_ = lean_box(v___x_784_);
v___f_789_ = lean_alloc_closure((void*)(l_Lean_ParserCompiler_registerCombinatorAttribute___lam__4___boxed), 8, 2);
lean_closure_set(v___f_789_, 0, v___x_788_);
lean_closure_set(v___f_789_, 1, v_a_787_);
v___x_790_ = 0;
v___x_791_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_791_, 0, v_ref_776_);
lean_ctor_set(v___x_791_, 1, v_name_774_);
lean_ctor_set(v___x_791_, 2, v_descr_775_);
lean_ctor_set_uint8(v___x_791_, sizeof(void*)*3, v___x_790_);
v___x_792_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_792_, 0, v___x_791_);
lean_ctor_set(v___x_792_, 1, v___f_789_);
lean_ctor_set(v___x_792_, 2, v___f_778_);
lean_inc_ref(v___x_792_);
v___x_793_ = l_Lean_registerBuiltinAttribute(v___x_792_);
if (lean_obj_tag(v___x_793_) == 0)
{
lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_801_; 
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_801_ == 0)
{
lean_object* v_unused_802_; 
v_unused_802_ = lean_ctor_get(v___x_793_, 0);
lean_dec(v_unused_802_);
v___x_795_ = v___x_793_;
v_isShared_796_ = v_isSharedCheck_801_;
goto v_resetjp_794_;
}
else
{
lean_dec(v___x_793_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_801_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_797_; lean_object* v___x_799_; 
v___x_797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_797_, 0, v___x_792_);
lean_ctor_set(v___x_797_, 1, v_a_787_);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v___x_797_);
v___x_799_ = v___x_795_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v___x_797_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
else
{
lean_object* v_a_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_810_; 
lean_dec_ref_known(v___x_792_, 3);
lean_dec(v_a_787_);
v_a_803_ = lean_ctor_get(v___x_793_, 0);
v_isSharedCheck_810_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_810_ == 0)
{
v___x_805_ = v___x_793_;
v_isShared_806_ = v_isSharedCheck_810_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_a_803_);
lean_dec(v___x_793_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_810_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v___x_808_; 
if (v_isShared_806_ == 0)
{
v___x_808_ = v___x_805_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_a_803_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
return v___x_808_;
}
}
}
}
else
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_818_; 
lean_dec_ref(v___f_778_);
lean_dec(v_ref_776_);
lean_dec_ref(v_descr_775_);
lean_dec(v_name_774_);
v_a_811_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_818_ == 0)
{
v___x_813_ = v___x_786_;
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_786_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_816_; 
if (v_isShared_814_ == 0)
{
v___x_816_ = v___x_813_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_a_811_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___boxed(lean_object* v_name_819_, lean_object* v_descr_820_, lean_object* v_ref_821_, lean_object* v_a_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l_Lean_ParserCompiler_registerCombinatorAttribute(v_name_819_, v_descr_820_, v_ref_821_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0(lean_object* v_00_u03b1_824_, lean_object* v_msg_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
lean_object* v___x_829_; 
v___x_829_ = l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(v_msg_825_, v___y_826_, v___y_827_);
return v___x_829_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___boxed(lean_object* v_00_u03b1_830_, lean_object* v_msg_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0(v_00_u03b1_830_, v_msg_831_, v___y_832_, v___y_833_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7(lean_object* v_00_u03b2_836_, lean_object* v_m_837_, lean_object* v_a_838_){
_start:
{
lean_object* v___x_839_; 
v___x_839_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg(v_m_837_, v_a_838_);
return v___x_839_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___boxed(lean_object* v_00_u03b2_840_, lean_object* v_m_841_, lean_object* v_a_842_){
_start:
{
lean_object* v_res_843_; 
v_res_843_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7(v_00_u03b2_840_, v_m_841_, v_a_842_);
lean_dec(v_a_842_);
lean_dec_ref(v_m_841_);
return v_res_843_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7(lean_object* v_00_u03b2_844_, lean_object* v_x_845_, lean_object* v_x_846_){
_start:
{
uint8_t v___x_847_; 
v___x_847_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg(v_x_845_, v_x_846_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___boxed(lean_object* v_00_u03b2_848_, lean_object* v_x_849_, lean_object* v_x_850_){
_start:
{
uint8_t v_res_851_; lean_object* v_r_852_; 
v_res_851_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7(v_00_u03b2_848_, v_x_849_, v_x_850_);
lean_dec_ref(v_x_850_);
lean_dec_ref(v_x_849_);
v_r_852_ = lean_box(v_res_851_);
return v_r_852_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__11(lean_object* v_00_u03b2_853_, lean_object* v_a_854_, lean_object* v_x_855_){
_start:
{
lean_object* v___x_856_; 
v___x_856_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__11___redArg(v_a_854_, v_x_855_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__11___boxed(lean_object* v_00_u03b2_857_, lean_object* v_a_858_, lean_object* v_x_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__11(v_00_u03b2_857_, v_a_858_, v_x_859_);
lean_dec(v_x_859_);
lean_dec(v_a_858_);
return v_res_860_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8(lean_object* v_00_u03b2_861_, lean_object* v_x_862_, size_t v_x_863_, lean_object* v_x_864_){
_start:
{
uint8_t v___x_865_; 
v___x_865_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg(v_x_862_, v_x_863_, v_x_864_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___boxed(lean_object* v_00_u03b2_866_, lean_object* v_x_867_, lean_object* v_x_868_, lean_object* v_x_869_){
_start:
{
size_t v_x_6174__boxed_870_; uint8_t v_res_871_; lean_object* v_r_872_; 
v_x_6174__boxed_870_ = lean_unbox_usize(v_x_868_);
lean_dec(v_x_868_);
v_res_871_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8(v_00_u03b2_866_, v_x_867_, v_x_6174__boxed_870_, v_x_869_);
lean_dec_ref(v_x_869_);
lean_dec_ref(v_x_867_);
v_r_872_ = lean_box(v_res_871_);
return v_r_872_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11(lean_object* v_00_u03b2_873_, lean_object* v_keys_874_, lean_object* v_vals_875_, lean_object* v_heq_876_, lean_object* v_i_877_, lean_object* v_k_878_){
_start:
{
uint8_t v___x_879_; 
v___x_879_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11___redArg(v_keys_874_, v_i_877_, v_k_878_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11___boxed(lean_object* v_00_u03b2_880_, lean_object* v_keys_881_, lean_object* v_vals_882_, lean_object* v_heq_883_, lean_object* v_i_884_, lean_object* v_k_885_){
_start:
{
uint8_t v_res_886_; lean_object* v_r_887_; 
v_res_886_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11(v_00_u03b2_880_, v_keys_881_, v_vals_882_, v_heq_883_, v_i_884_, v_k_885_);
lean_dec_ref(v_k_885_);
lean_dec_ref(v_vals_882_);
lean_dec_ref(v_keys_881_);
v_r_887_ = lean_box(v_res_886_);
return v_r_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor_x3f(lean_object* v_attr_888_, lean_object* v_env_889_, lean_object* v_parserDecl_890_){
_start:
{
lean_object* v_ext_891_; lean_object* v_toEnvExtension_892_; lean_object* v_asyncMode_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v_ext_891_ = lean_ctor_get(v_attr_888_, 1);
v_toEnvExtension_892_ = lean_ctor_get(v_ext_891_, 0);
v_asyncMode_893_ = lean_ctor_get(v_toEnvExtension_892_, 2);
v___x_894_ = lean_box(1);
v___x_895_ = lean_box(0);
v___x_896_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_894_, v_ext_891_, v_env_889_, v_asyncMode_893_, v___x_895_);
v___x_897_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_896_, v_parserDecl_890_);
lean_dec(v___x_896_);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor_x3f___boxed(lean_object* v_attr_898_, lean_object* v_env_899_, lean_object* v_parserDecl_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor_x3f(v_attr_898_, v_env_899_, v_parserDecl_900_);
lean_dec(v_parserDecl_900_);
lean_dec_ref(v_attr_898_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_setDeclFor(lean_object* v_attr_902_, lean_object* v_env_903_, lean_object* v_parserDecl_904_, lean_object* v_decl_905_){
_start:
{
lean_object* v_ext_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_923_; 
v_ext_906_ = lean_ctor_get(v_attr_902_, 1);
v_isSharedCheck_923_ = !lean_is_exclusive(v_attr_902_);
if (v_isSharedCheck_923_ == 0)
{
lean_object* v_unused_924_; 
v_unused_924_ = lean_ctor_get(v_attr_902_, 0);
lean_dec(v_unused_924_);
v___x_908_ = v_attr_902_;
v_isShared_909_ = v_isSharedCheck_923_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_ext_906_);
lean_dec(v_attr_902_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_923_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v_toEnvExtension_910_; lean_object* v_addEntryFn_911_; lean_object* v_asyncMode_912_; uint8_t v_logWrites_913_; lean_object* v___x_915_; 
v_toEnvExtension_910_ = lean_ctor_get(v_ext_906_, 0);
lean_inc_ref(v_toEnvExtension_910_);
v_addEntryFn_911_ = lean_ctor_get(v_ext_906_, 3);
lean_inc(v_addEntryFn_911_);
lean_dec_ref(v_ext_906_);
v_asyncMode_912_ = lean_ctor_get(v_toEnvExtension_910_, 2);
lean_inc(v_asyncMode_912_);
v_logWrites_913_ = lean_ctor_get_uint8(v_toEnvExtension_910_, sizeof(void*)*6);
if (v_isShared_909_ == 0)
{
lean_ctor_set(v___x_908_, 1, v_decl_905_);
lean_ctor_set(v___x_908_, 0, v_parserDecl_904_);
v___x_915_ = v___x_908_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_parserDecl_904_);
lean_ctor_set(v_reuseFailAlloc_922_, 1, v_decl_905_);
v___x_915_ = v_reuseFailAlloc_922_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
lean_object* v___f_916_; lean_object* v___x_917_; uint8_t v___x_918_; 
v___f_916_ = lean_alloc_closure((void*)(l_Lean_ParserCompiler_registerCombinatorAttribute___lam__3), 3, 2);
lean_closure_set(v___f_916_, 0, v_addEntryFn_911_);
lean_closure_set(v___f_916_, 1, v___x_915_);
v___x_917_ = lean_box(0);
v___x_918_ = 1;
if (v_logWrites_913_ == 0)
{
lean_object* v___x_919_; 
v___x_919_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_910_, v_env_903_, v___f_916_, v_asyncMode_912_, v___x_917_, v___x_918_);
lean_dec(v_asyncMode_912_);
return v___x_919_;
}
else
{
lean_object* v___x_920_; lean_object* v___x_921_; 
lean_inc_ref(v_toEnvExtension_910_);
v___x_920_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_910_, v_env_903_);
lean_dec_ref(v_env_903_);
v___x_921_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_910_, v___x_920_, v___f_916_, v_asyncMode_912_, v___x_917_, v___x_918_);
lean_dec(v_asyncMode_912_);
return v___x_921_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg(lean_object* v_x_925_, lean_object* v___y_926_, lean_object* v___y_927_){
_start:
{
if (lean_obj_tag(v_x_925_) == 0)
{
lean_object* v_a_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v_a_929_ = lean_ctor_get(v_x_925_, 0);
lean_inc(v_a_929_);
lean_dec_ref_known(v_x_925_, 1);
v___x_930_ = l_Lean_stringToMessageData(v_a_929_);
v___x_931_ = l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(v___x_930_, v___y_926_, v___y_927_);
return v___x_931_;
}
else
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_939_; 
v_a_932_ = lean_ctor_get(v_x_925_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v_x_925_);
if (v_isSharedCheck_939_ == 0)
{
v___x_934_ = v_x_925_;
v_isShared_935_ = v_isSharedCheck_939_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v_x_925_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_939_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_937_; 
if (v_isShared_935_ == 0)
{
lean_ctor_set_tag(v___x_934_, 0);
v___x_937_ = v___x_934_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v_a_932_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg___boxed(lean_object* v_x_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg(v_x_940_, v___y_941_, v___y_942_);
lean_dec(v___y_942_);
lean_dec_ref(v___y_941_);
return v_res_944_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_945_ = lean_box(0);
v___x_946_ = l_Lean_Elab_abortCommandExceptionId;
v___x_947_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_947_, 0, v___x_946_);
lean_ctor_set(v___x_947_, 1, v___x_945_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg(){
_start:
{
lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_949_ = lean_obj_once(&l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___closed__0, &l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___closed__0);
v___x_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_950_, 0, v___x_949_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___boxed(lean_object* v___y_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg();
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg(lean_object* v_constName_953_, uint8_t v_checkMeta_954_, lean_object* v___y_955_, lean_object* v___y_956_){
_start:
{
lean_object* v___x_958_; lean_object* v_env_959_; uint8_t v___x_960_; 
v___x_958_ = lean_st_ref_get(v___y_956_);
v_env_959_ = lean_ctor_get(v___x_958_, 0);
lean_inc_ref(v_env_959_);
lean_dec(v___x_958_);
lean_inc(v_constName_953_);
v___x_960_ = lean_has_compile_error(v_env_959_, v_constName_953_);
if (v___x_960_ == 0)
{
lean_object* v___x_961_; lean_object* v_env_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_961_ = lean_st_ref_get(v___y_956_);
v_env_962_ = lean_ctor_get(v___x_961_, 0);
lean_inc_ref(v_env_962_);
lean_dec(v___x_961_);
v___x_963_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_955_);
v___x_964_ = l_Lean_Environment_evalConst___redArg(v_env_962_, v___x_963_, v_constName_953_, v_checkMeta_954_);
lean_dec(v_constName_953_);
lean_dec_ref(v___x_963_);
lean_dec_ref(v_env_962_);
v___x_965_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg(v___x_964_, v___y_955_, v___y_956_);
return v___x_965_;
}
else
{
lean_object* v___x_966_; 
v___x_966_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg();
if (lean_obj_tag(v___x_966_) == 0)
{
lean_object* v___x_967_; lean_object* v_env_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
lean_dec_ref_known(v___x_966_, 1);
v___x_967_ = lean_st_ref_get(v___y_956_);
v_env_968_ = lean_ctor_get(v___x_967_, 0);
lean_inc_ref(v_env_968_);
lean_dec(v___x_967_);
v___x_969_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_955_);
v___x_970_ = l_Lean_Environment_evalConst___redArg(v_env_968_, v___x_969_, v_constName_953_, v_checkMeta_954_);
lean_dec(v_constName_953_);
lean_dec_ref(v___x_969_);
lean_dec_ref(v_env_968_);
v___x_971_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg(v___x_970_, v___y_955_, v___y_956_);
return v___x_971_;
}
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
lean_dec(v_constName_953_);
v_a_972_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___x_966_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_966_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_977_; 
if (v_isShared_975_ == 0)
{
v___x_977_ = v___x_974_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_a_972_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg___boxed(lean_object* v_constName_980_, lean_object* v_checkMeta_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_){
_start:
{
uint8_t v_checkMeta_boxed_985_; lean_object* v_res_986_; 
v_checkMeta_boxed_985_ = lean_unbox(v_checkMeta_981_);
v_res_986_ = l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg(v_constName_980_, v_checkMeta_boxed_985_, v___y_982_, v___y_983_);
lean_dec(v___y_983_);
lean_dec_ref(v___y_982_);
return v_res_986_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__1(void){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_988_ = ((lean_object*)(l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__0));
v___x_989_ = l_Lean_stringToMessageData(v___x_988_);
return v___x_989_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__3(void){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = ((lean_object*)(l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__2));
v___x_992_ = l_Lean_stringToMessageData(v___x_991_);
return v___x_992_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__5(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_994_ = ((lean_object*)(l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__4));
v___x_995_ = l_Lean_stringToMessageData(v___x_994_);
return v___x_995_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg(lean_object* v_attr_996_, lean_object* v_parserDecl_997_, lean_object* v_a_998_, lean_object* v_a_999_){
_start:
{
lean_object* v___x_1001_; lean_object* v_env_1002_; lean_object* v___x_1003_; 
v___x_1001_ = lean_st_ref_get(v_a_999_);
v_env_1002_ = lean_ctor_get(v___x_1001_, 0);
lean_inc_ref(v_env_1002_);
lean_dec(v___x_1001_);
v___x_1003_ = l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor_x3f(v_attr_996_, v_env_1002_, v_parserDecl_997_);
if (lean_obj_tag(v___x_1003_) == 1)
{
lean_object* v_val_1004_; uint8_t v___x_1005_; lean_object* v___x_1006_; 
lean_dec(v_parserDecl_997_);
lean_dec_ref(v_attr_996_);
v_val_1004_ = lean_ctor_get(v___x_1003_, 0);
lean_inc(v_val_1004_);
lean_dec_ref_known(v___x_1003_, 1);
v___x_1005_ = 1;
v___x_1006_ = l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg(v_val_1004_, v___x_1005_, v_a_998_, v_a_999_);
return v___x_1006_;
}
else
{
lean_object* v_impl_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1025_; 
lean_dec(v___x_1003_);
v_impl_1007_ = lean_ctor_get(v_attr_996_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v_attr_996_);
if (v_isSharedCheck_1025_ == 0)
{
lean_object* v_unused_1026_; 
v_unused_1026_ = lean_ctor_get(v_attr_996_, 1);
lean_dec(v_unused_1026_);
v___x_1009_ = v_attr_996_;
v_isShared_1010_ = v_isSharedCheck_1025_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_impl_1007_);
lean_dec(v_attr_996_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1025_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v_toAttributeImplCore_1011_; lean_object* v_name_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1016_; 
v_toAttributeImplCore_1011_ = lean_ctor_get(v_impl_1007_, 0);
lean_inc_ref(v_toAttributeImplCore_1011_);
lean_dec_ref(v_impl_1007_);
v_name_1012_ = lean_ctor_get(v_toAttributeImplCore_1011_, 1);
lean_inc(v_name_1012_);
lean_dec_ref(v_toAttributeImplCore_1011_);
v___x_1013_ = lean_obj_once(&l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__1, &l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__1_once, _init_l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__1);
v___x_1014_ = l_Lean_MessageData_ofName(v_name_1012_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set_tag(v___x_1009_, 7);
lean_ctor_set(v___x_1009_, 1, v___x_1014_);
lean_ctor_set(v___x_1009_, 0, v___x_1013_);
v___x_1016_ = v___x_1009_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v___x_1013_);
lean_ctor_set(v_reuseFailAlloc_1024_, 1, v___x_1014_);
v___x_1016_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1017_ = lean_obj_once(&l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__3, &l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__3_once, _init_l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__3);
v___x_1018_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1016_);
lean_ctor_set(v___x_1018_, 1, v___x_1017_);
v___x_1019_ = l_Lean_MessageData_ofName(v_parserDecl_997_);
v___x_1020_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1018_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
v___x_1021_ = lean_obj_once(&l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__5, &l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__5_once, _init_l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__5);
v___x_1022_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1020_);
lean_ctor_set(v___x_1022_, 1, v___x_1021_);
v___x_1023_ = l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(v___x_1022_, v_a_998_, v_a_999_);
return v___x_1023_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___boxed(lean_object* v_attr_1027_, lean_object* v_parserDecl_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_){
_start:
{
lean_object* v_res_1032_; 
v_res_1032_ = l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg(v_attr_1027_, v_parserDecl_1028_, v_a_1029_, v_a_1030_);
lean_dec(v_a_1030_);
lean_dec_ref(v_a_1029_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor(lean_object* v_00_u03b1_1033_, lean_object* v_attr_1034_, lean_object* v_parserDecl_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_){
_start:
{
lean_object* v___x_1039_; 
v___x_1039_ = l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg(v_attr_1034_, v_parserDecl_1035_, v_a_1036_, v_a_1037_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___boxed(lean_object* v_00_u03b1_1040_, lean_object* v_attr_1041_, lean_object* v_parserDecl_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_){
_start:
{
lean_object* v_res_1046_; 
v_res_1046_ = l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor(v_00_u03b1_1040_, v_attr_1041_, v_parserDecl_1042_, v_a_1043_, v_a_1044_);
lean_dec(v_a_1044_);
lean_dec_ref(v_a_1043_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1(lean_object* v_00_u03b1_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_){
_start:
{
lean_object* v___x_1051_; 
v___x_1051_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg();
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_){
_start:
{
lean_object* v_res_1056_; 
v_res_1056_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1(v_00_u03b1_1052_, v___y_1053_, v___y_1054_);
lean_dec(v___y_1054_);
lean_dec_ref(v___y_1053_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0(lean_object* v_00_u03b1_1057_, lean_object* v_constName_1058_, uint8_t v_checkMeta_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_){
_start:
{
lean_object* v___x_1063_; 
v___x_1063_ = l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg(v_constName_1058_, v_checkMeta_1059_, v___y_1060_, v___y_1061_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___boxed(lean_object* v_00_u03b1_1064_, lean_object* v_constName_1065_, lean_object* v_checkMeta_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_){
_start:
{
uint8_t v_checkMeta_boxed_1070_; lean_object* v_res_1071_; 
v_checkMeta_boxed_1070_ = lean_unbox(v_checkMeta_1066_);
v_res_1071_ = l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0(v_00_u03b1_1064_, v_constName_1065_, v_checkMeta_boxed_1070_, v___y_1067_, v___y_1068_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0(lean_object* v_00_u03b1_1072_, lean_object* v_x_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_){
_start:
{
lean_object* v___x_1077_; 
v___x_1077_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg(v_x_1073_, v___y_1074_, v___y_1075_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1078_, lean_object* v_x_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_){
_start:
{
lean_object* v_res_1083_; 
v_res_1083_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0(v_00_u03b1_1078_, v_x_1079_, v___y_1080_, v___y_1081_);
lean_dec(v___y_1081_);
lean_dec_ref(v___y_1080_);
return v_res_1083_;
}
}
lean_object* runtime_initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ParserCompiler_Attribute(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default = _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default();
lean_mark_persistent(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default);
l_Lean_ParserCompiler_instInhabitedCombinatorAttribute = _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute();
lean_mark_persistent(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ParserCompiler_Attribute(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1 = _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1();
lean_mark_persistent(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ParserCompiler_Attribute(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ParserCompiler_Attribute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ParserCompiler_Attribute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ParserCompiler_Attribute(builtin);
}
#ifdef __cplusplus
}
#endif
