// Lean compiler output
// Module: Lean.Elab.Deriving.Util
// Imports: public import Lean.Elab.Command import Lean.Elab.DeclNameGen
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_Elab_Command_withScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCIdent(lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_NameGen_mkBaseNameWithSuffix_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_instBinder;
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l_Lean_InductiveVal_isNested(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_implicitBinder(uint8_t);
lean_object* l_Lean_Parser_Term_explicitBinder(uint8_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedInductiveVal_default;
static lean_once_cell_t l_Lean_Elab_Deriving_implicitBinderF___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_implicitBinderF___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_implicitBinderF;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_instBinderF;
static lean_once_cell_t l_Lean_Elab_Deriving_explicitBinderF___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_explicitBinderF___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_explicitBinderF;
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Deriving_mkInductArgNames___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Deriving_mkInductArgNames___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductArgNames___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductArgNames___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductArgNames___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Deriving_mkInductArgNames___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Deriving_mkInductArgNames___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Deriving_mkInductArgNames___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductArgNames___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductArgNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductArgNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value;
static const lean_string_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4_value;
static const lean_string_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "explicit"};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6_value_aux_2),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(141, 201, 75, 195, 250, 223, 114, 184)}};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6_value;
static const lean_string_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__7_value;
static const lean_string_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductiveApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductiveApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "implicitBinder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(39, 181, 62, 102, 86, 14, 161, 96)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkImplicitBinders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkImplicitBinders___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instBinder"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 219, 89, 171, 221, 95, 22, 227)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__0 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__0_value;
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1_value_aux_2),((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1_value;
static const lean_string_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__2 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__2_value;
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3_value_aux_2),((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3_value;
static const lean_string_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__4 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__4_value;
static const lean_string_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__5 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__5_value;
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6_value_aux_1),((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__4_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6_value_aux_2),((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__5_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6_value;
static const lean_string_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "expose"};
static const lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__7 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__7_value;
static const lean_ctor_object l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__7_value),LEAN_SCALAR_PTR_LITERAL(170, 113, 233, 77, 243, 78, 243, 129)}};
static const lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__8 = (const lean_object*)&l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__8_value;
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__8___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1;
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__2 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__5___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__3(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "cannot use `deriving ... @[expose]` with `"};
static const lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__2;
static const lean_string_object l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "` as it has one or more private constructors"};
static const lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_withoutExposeFromCtorsAll_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_withoutExposeFromCtorsAll_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_withoutExposeFromCtorsAll_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_withoutExposeFromCtorsAll_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtorsAll___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtorsAll___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtorsAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtorsAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_withoutExposeFromCtorsAll_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_withoutExposeFromCtorsAll_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInstName_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInstName_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Deriving_mkInstName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "inst"};
static const lean_object* l_Lean_Elab_Deriving_mkInstName___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_mkInstName___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Deriving_mkContext_spec__1(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Deriving_mkContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Deriving_mkContext___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__0_value;
static const lean_string_object l_Lean_Elab_Deriving_mkContext___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Deriving"};
static const lean_object* l_Lean_Elab_Deriving_mkContext___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Deriving_mkContext___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkContext___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(195, 196, 35, 37, 101, 57, 52, 43)}};
static const lean_object* l_Lean_Elab_Deriving_mkContext___closed__2 = (const lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__2_value;
static const lean_string_object l_Lean_Elab_Deriving_mkContext___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_Deriving_mkContext___closed__3 = (const lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Deriving_mkContext___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Elab_Deriving_mkContext___closed__4 = (const lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Deriving_mkContext___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_mkContext___closed__5;
static const lean_string_object l_Lean_Elab_Deriving_mkContext___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instName: "};
static const lean_object* l_Lean_Elab_Deriving_mkContext___closed__6 = (const lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Deriving_mkContext___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_mkContext___closed__7;
static const lean_string_object l_Lean_Elab_Deriving_mkContext___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " auxFunNames: "};
static const lean_object* l_Lean_Elab_Deriving_mkContext___closed__8 = (const lean_object*)&l_Lean_Elab_Deriving_mkContext___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Deriving_mkContext___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Deriving_mkContext___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkContext(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "anonymousCtor"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(56, 53, 154, 97, 179, 232, 94, 186)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "localinst"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__4_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(49, 72, 186, 87, 62, 92, 205, 11)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__5_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__6_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letIdDecl"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__8_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(82, 96, 243, 36, 251, 209, 136, 237)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "letId"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__10 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__10_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(67, 92, 92, 51, 38, 250, 60, 190)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__12 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__12_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__14 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__14_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__15 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__15_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkLocalInstanceLetDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___boxed(lean_object**);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "let"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 166, 195, 152, 24, 103, 8, 2)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__4_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__5_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__6_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__7_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__8_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstanceCmds(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstanceCmds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Deriving_groupByMutualBlock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Deriving_groupByMutualBlock___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_groupByMutualBlock___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Deriving_groupByMutualBlock___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_groupByMutualBlock___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Deriving_groupByMutualBlock___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_groupByMutualBlock___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_groupByMutualBlock(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_groupByMutualBlock___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Deriving_mkDiscr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l_Lean_Elab_Deriving_mkDiscr___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Deriving_mkDiscr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Deriving_mkDiscr___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscr___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "explicitBinder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 119, 193, 23, 170, 93, 183, 238)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkHeader(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscrs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_Deriving_implicitBinderF___closed__0(void){
_start:
{
uint8_t v___x_1_; lean_object* v___x_2_; 
v___x_1_ = 0;
v___x_2_ = l_Lean_Parser_Term_implicitBinder(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_implicitBinderF(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_obj_once(&l_Lean_Elab_Deriving_implicitBinderF___closed__0, &l_Lean_Elab_Deriving_implicitBinderF___closed__0_once, _init_l_Lean_Elab_Deriving_implicitBinderF___closed__0);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_instBinderF(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = l_Lean_Parser_Term_instBinder;
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_explicitBinderF___closed__0(void){
_start:
{
uint8_t v___x_5_; lean_object* v___x_6_; 
v___x_5_ = 0;
v___x_6_ = l_Lean_Parser_Term_explicitBinder(v___x_5_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_explicitBinderF(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_once(&l_Lean_Elab_Deriving_explicitBinderF___closed__0, &l_Lean_Elab_Deriving_explicitBinderF___closed__0_once, _init_l_Lean_Elab_Deriving_explicitBinderF___closed__0);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg___lam__0(lean_object* v_k_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_){
_start:
{
lean_object* v___x_18_; 
lean_inc(v___y_16_);
lean_inc_ref(v___y_15_);
lean_inc(v___y_14_);
lean_inc_ref(v___y_13_);
lean_inc(v___y_10_);
lean_inc_ref(v___y_9_);
v___x_18_ = lean_apply_9(v_k_8_, v_b_11_, v_c_12_, v___y_9_, v___y_10_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, lean_box(0));
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg___lam__0___boxed(lean_object* v_k_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v_b_22_, lean_object* v_c_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg___lam__0(v_k_19_, v___y_20_, v___y_21_, v_b_22_, v_c_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_);
lean_dec(v___y_27_);
lean_dec_ref(v___y_26_);
lean_dec(v___y_25_);
lean_dec_ref(v___y_24_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg(lean_object* v_type_30_, lean_object* v_k_31_, uint8_t v_cleanupAnnotations_32_, uint8_t v_whnfType_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_){
_start:
{
lean_object* v___f_41_; lean_object* v___x_42_; 
lean_inc(v___y_35_);
lean_inc_ref(v___y_34_);
v___f_41_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_41_, 0, v_k_31_);
lean_closure_set(v___f_41_, 1, v___y_34_);
lean_closure_set(v___f_41_, 2, v___y_35_);
v___x_42_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_30_, v___f_41_, v_cleanupAnnotations_32_, v_whnfType_33_, v___y_36_, v___y_37_, v___y_38_, v___y_39_);
if (lean_obj_tag(v___x_42_) == 0)
{
return v___x_42_;
}
else
{
lean_object* v_a_43_; lean_object* v___x_45_; uint8_t v_isShared_46_; uint8_t v_isSharedCheck_50_; 
v_a_43_ = lean_ctor_get(v___x_42_, 0);
v_isSharedCheck_50_ = !lean_is_exclusive(v___x_42_);
if (v_isSharedCheck_50_ == 0)
{
v___x_45_ = v___x_42_;
v_isShared_46_ = v_isSharedCheck_50_;
goto v_resetjp_44_;
}
else
{
lean_inc(v_a_43_);
lean_dec(v___x_42_);
v___x_45_ = lean_box(0);
v_isShared_46_ = v_isSharedCheck_50_;
goto v_resetjp_44_;
}
v_resetjp_44_:
{
lean_object* v___x_48_; 
if (v_isShared_46_ == 0)
{
v___x_48_ = v___x_45_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v_a_43_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg___boxed(lean_object* v_type_51_, lean_object* v_k_52_, lean_object* v_cleanupAnnotations_53_, lean_object* v_whnfType_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_62_; uint8_t v_whnfType_boxed_63_; lean_object* v_res_64_; 
v_cleanupAnnotations_boxed_62_ = lean_unbox(v_cleanupAnnotations_53_);
v_whnfType_boxed_63_ = lean_unbox(v_whnfType_54_);
v_res_64_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg(v_type_51_, v_k_52_, v_cleanupAnnotations_boxed_62_, v_whnfType_boxed_63_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_);
lean_dec(v___y_60_);
lean_dec_ref(v___y_59_);
lean_dec(v___y_58_);
lean_dec_ref(v___y_57_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1(lean_object* v_00_u03b1_65_, lean_object* v_type_66_, lean_object* v_k_67_, uint8_t v_cleanupAnnotations_68_, uint8_t v_whnfType_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg(v_type_66_, v_k_67_, v_cleanupAnnotations_68_, v_whnfType_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___boxed(lean_object* v_00_u03b1_78_, lean_object* v_type_79_, lean_object* v_k_80_, lean_object* v_cleanupAnnotations_81_, lean_object* v_whnfType_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_90_; uint8_t v_whnfType_boxed_91_; lean_object* v_res_92_; 
v_cleanupAnnotations_boxed_90_ = lean_unbox(v_cleanupAnnotations_81_);
v_whnfType_boxed_91_ = lean_unbox(v_whnfType_82_);
v_res_92_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1(v_00_u03b1_78_, v_type_79_, v_k_80_, v_cleanupAnnotations_boxed_90_, v_whnfType_boxed_91_, v___y_83_, v___y_84_, v___y_85_, v___y_86_, v___y_87_, v___y_88_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
lean_dec(v___y_86_);
lean_dec_ref(v___y_85_);
lean_dec(v___y_84_);
lean_dec_ref(v___y_83_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0___redArg(lean_object* v_as_93_, size_t v_sz_94_, size_t v_i_95_, lean_object* v_b_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
uint8_t v___x_101_; 
v___x_101_ = lean_usize_dec_lt(v_i_95_, v_sz_94_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; 
v___x_102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_102_, 0, v_b_96_);
return v___x_102_;
}
else
{
lean_object* v_a_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v_a_103_ = lean_array_uget_borrowed(v_as_93_, v_i_95_);
v___x_104_ = l_Lean_Expr_fvarId_x21(v_a_103_);
v___x_105_ = l_Lean_FVarId_getDecl___redArg(v___x_104_, v___y_97_, v___y_98_, v___y_99_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
lean_inc(v_a_106_);
lean_dec_ref_known(v___x_105_, 1);
v___x_107_ = l_Lean_LocalDecl_userName(v_a_106_);
lean_dec(v_a_106_);
v___x_108_ = l_Lean_Name_eraseMacroScopes(v___x_107_);
lean_dec(v___x_107_);
v___x_109_ = l_Lean_Core_mkFreshUserName(v___x_108_, v___y_98_, v___y_99_);
if (lean_obj_tag(v___x_109_) == 0)
{
lean_object* v_a_110_; lean_object* v___x_111_; size_t v___x_112_; size_t v___x_113_; 
v_a_110_ = lean_ctor_get(v___x_109_, 0);
lean_inc(v_a_110_);
lean_dec_ref_known(v___x_109_, 1);
v___x_111_ = lean_array_push(v_b_96_, v_a_110_);
v___x_112_ = ((size_t)1ULL);
v___x_113_ = lean_usize_add(v_i_95_, v___x_112_);
v_i_95_ = v___x_113_;
v_b_96_ = v___x_111_;
goto _start;
}
else
{
lean_object* v_a_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_122_; 
lean_dec_ref(v_b_96_);
v_a_115_ = lean_ctor_get(v___x_109_, 0);
v_isSharedCheck_122_ = !lean_is_exclusive(v___x_109_);
if (v_isSharedCheck_122_ == 0)
{
v___x_117_ = v___x_109_;
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_a_115_);
lean_dec(v___x_109_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_120_; 
if (v_isShared_118_ == 0)
{
v___x_120_ = v___x_117_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_a_115_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
return v___x_120_;
}
}
}
}
else
{
lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_130_; 
lean_dec_ref(v_b_96_);
v_a_123_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_130_ == 0)
{
v___x_125_ = v___x_105_;
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v___x_105_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_128_; 
if (v_isShared_126_ == 0)
{
v___x_128_ = v___x_125_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_a_123_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0___redArg___boxed(lean_object* v_as_131_, lean_object* v_sz_132_, lean_object* v_i_133_, lean_object* v_b_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_){
_start:
{
size_t v_sz_boxed_139_; size_t v_i_boxed_140_; lean_object* v_res_141_; 
v_sz_boxed_139_ = lean_unbox_usize(v_sz_132_);
lean_dec(v_sz_132_);
v_i_boxed_140_ = lean_unbox_usize(v_i_133_);
lean_dec(v_i_133_);
v_res_141_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0___redArg(v_as_131_, v_sz_boxed_139_, v_i_boxed_140_, v_b_134_, v___y_135_, v___y_136_, v___y_137_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
lean_dec_ref(v___y_135_);
lean_dec_ref(v_as_131_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductArgNames___lam__0(lean_object* v_xs_144_, lean_object* v_x_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
lean_object* v_argNames_153_; size_t v_sz_154_; size_t v___x_155_; lean_object* v___x_156_; 
v_argNames_153_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductArgNames___lam__0___closed__0));
v_sz_154_ = lean_array_size(v_xs_144_);
v___x_155_ = ((size_t)0ULL);
v___x_156_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0___redArg(v_xs_144_, v_sz_154_, v___x_155_, v_argNames_153_, v___y_148_, v___y_150_, v___y_151_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductArgNames___lam__0___boxed(lean_object* v_xs_157_, lean_object* v_x_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Lean_Elab_Deriving_mkInductArgNames___lam__0(v_xs_157_, v_x_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
lean_dec(v___y_162_);
lean_dec_ref(v___y_161_);
lean_dec(v___y_160_);
lean_dec_ref(v___y_159_);
lean_dec_ref(v_x_158_);
lean_dec_ref(v_xs_157_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductArgNames(lean_object* v_indVal_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_){
_start:
{
lean_object* v_toConstantVal_176_; lean_object* v_type_177_; lean_object* v___f_178_; uint8_t v___x_179_; lean_object* v___x_180_; 
v_toConstantVal_176_ = lean_ctor_get(v_indVal_168_, 0);
lean_inc_ref(v_toConstantVal_176_);
lean_dec_ref(v_indVal_168_);
v_type_177_ = lean_ctor_get(v_toConstantVal_176_, 2);
lean_inc_ref(v_type_177_);
lean_dec_ref(v_toConstantVal_176_);
v___f_178_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductArgNames___closed__0));
v___x_179_ = 0;
v___x_180_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg(v_type_177_, v___f_178_, v___x_179_, v___x_179_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductArgNames___boxed(lean_object* v_indVal_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lean_Elab_Deriving_mkInductArgNames(v_indVal_181_, v_a_182_, v_a_183_, v_a_184_, v_a_185_, v_a_186_, v_a_187_);
lean_dec(v_a_187_);
lean_dec_ref(v_a_186_);
lean_dec(v_a_185_);
lean_dec_ref(v_a_184_);
lean_dec(v_a_183_);
lean_dec_ref(v_a_182_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0(lean_object* v_as_190_, size_t v_sz_191_, size_t v_i_192_, lean_object* v_b_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0___redArg(v_as_190_, v_sz_191_, v_i_192_, v_b_193_, v___y_196_, v___y_198_, v___y_199_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0___boxed(lean_object* v_as_202_, lean_object* v_sz_203_, lean_object* v_i_204_, lean_object* v_b_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
size_t v_sz_boxed_213_; size_t v_i_boxed_214_; lean_object* v_res_215_; 
v_sz_boxed_213_ = lean_unbox_usize(v_sz_203_);
lean_dec(v_sz_203_);
v_i_boxed_214_ = lean_unbox_usize(v_i_204_);
lean_dec(v_i_204_);
v_res_215_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_mkInductArgNames_spec__0(v_as_202_, v_sz_boxed_213_, v_i_boxed_214_, v_b_205_, v___y_206_, v___y_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_);
lean_dec(v___y_211_);
lean_dec_ref(v___y_210_);
lean_dec(v___y_209_);
lean_dec_ref(v___y_208_);
lean_dec(v___y_207_);
lean_dec_ref(v___y_206_);
lean_dec_ref(v_as_202_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__1(size_t v_sz_216_, size_t v_i_217_, lean_object* v_bs_218_){
_start:
{
uint8_t v___x_219_; 
v___x_219_ = lean_usize_dec_lt(v_i_217_, v_sz_216_);
if (v___x_219_ == 0)
{
return v_bs_218_;
}
else
{
lean_object* v_v_220_; lean_object* v___x_221_; lean_object* v_bs_x27_222_; size_t v___x_223_; size_t v___x_224_; lean_object* v___x_225_; 
v_v_220_ = lean_array_uget(v_bs_218_, v_i_217_);
v___x_221_ = lean_unsigned_to_nat(0u);
v_bs_x27_222_ = lean_array_uset(v_bs_218_, v_i_217_, v___x_221_);
v___x_223_ = ((size_t)1ULL);
v___x_224_ = lean_usize_add(v_i_217_, v___x_223_);
v___x_225_ = lean_array_uset(v_bs_x27_222_, v_i_217_, v_v_220_);
v_i_217_ = v___x_224_;
v_bs_218_ = v___x_225_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__1___boxed(lean_object* v_sz_227_, lean_object* v_i_228_, lean_object* v_bs_229_){
_start:
{
size_t v_sz_boxed_230_; size_t v_i_boxed_231_; lean_object* v_res_232_; 
v_sz_boxed_230_ = lean_unbox_usize(v_sz_227_);
lean_dec(v_sz_227_);
v_i_boxed_231_ = lean_unbox_usize(v_i_228_);
lean_dec(v_i_228_);
v_res_232_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__1(v_sz_boxed_230_, v_i_boxed_231_, v_bs_229_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__0(size_t v_sz_233_, size_t v_i_234_, lean_object* v_bs_235_){
_start:
{
uint8_t v___x_236_; 
v___x_236_ = lean_usize_dec_lt(v_i_234_, v_sz_233_);
if (v___x_236_ == 0)
{
return v_bs_235_;
}
else
{
lean_object* v_v_237_; lean_object* v___x_238_; lean_object* v_bs_x27_239_; lean_object* v___x_240_; size_t v___x_241_; size_t v___x_242_; lean_object* v___x_243_; 
v_v_237_ = lean_array_uget(v_bs_235_, v_i_234_);
v___x_238_ = lean_unsigned_to_nat(0u);
v_bs_x27_239_ = lean_array_uset(v_bs_235_, v_i_234_, v___x_238_);
v___x_240_ = l_Lean_mkIdent(v_v_237_);
v___x_241_ = ((size_t)1ULL);
v___x_242_ = lean_usize_add(v_i_234_, v___x_241_);
v___x_243_ = lean_array_uset(v_bs_x27_239_, v_i_234_, v___x_240_);
v_i_234_ = v___x_242_;
v_bs_235_ = v___x_243_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__0___boxed(lean_object* v_sz_245_, lean_object* v_i_246_, lean_object* v_bs_247_){
_start:
{
size_t v_sz_boxed_248_; size_t v_i_boxed_249_; lean_object* v_res_250_; 
v_sz_boxed_248_ = lean_unbox_usize(v_sz_245_);
lean_dec(v_sz_245_);
v_i_boxed_249_ = lean_unbox_usize(v_i_246_);
lean_dec(v_i_246_);
v_res_250_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__0(v_sz_boxed_248_, v_i_boxed_249_, v_bs_247_);
return v_res_250_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10(void){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = l_Array_mkArray0___redArg();
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg(lean_object* v_indVal_271_, lean_object* v_argNames_272_, lean_object* v_a_273_){
_start:
{
lean_object* v_toConstantVal_275_; lean_object* v_name_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_302_; 
v_toConstantVal_275_ = lean_ctor_get(v_indVal_271_, 0);
lean_inc_ref(v_toConstantVal_275_);
lean_dec_ref(v_indVal_271_);
v_name_276_ = lean_ctor_get(v_toConstantVal_275_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v_toConstantVal_275_);
if (v_isSharedCheck_302_ == 0)
{
lean_object* v_unused_303_; lean_object* v_unused_304_; 
v_unused_303_ = lean_ctor_get(v_toConstantVal_275_, 2);
lean_dec(v_unused_303_);
v_unused_304_ = lean_ctor_get(v_toConstantVal_275_, 1);
lean_dec(v_unused_304_);
v___x_278_ = v_toConstantVal_275_;
v_isShared_279_ = v_isSharedCheck_302_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_name_276_);
lean_dec(v_toConstantVal_275_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_302_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v_ref_280_; size_t v_sz_281_; lean_object* v_f_282_; size_t v___x_283_; lean_object* v_args_284_; uint8_t v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; size_t v_sz_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_298_; 
v_ref_280_ = lean_ctor_get(v_a_273_, 2);
v_sz_281_ = lean_array_size(v_argNames_272_);
v_f_282_ = l_Lean_mkCIdent(v_name_276_);
v___x_283_ = ((size_t)0ULL);
v_args_284_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__0(v_sz_281_, v___x_283_, v_argNames_272_);
v___x_285_ = 0;
v___x_286_ = l_Lean_SourceInfo_fromRef(v_ref_280_, v___x_285_);
v___x_287_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4));
v___x_288_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__6));
v___x_289_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__7));
lean_inc_n(v___x_286_, 3);
v___x_290_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_286_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
v___x_291_ = l_Lean_Syntax_node2(v___x_286_, v___x_288_, v___x_290_, v_f_282_);
v___x_292_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9));
v___x_293_ = lean_obj_once(&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10, &l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10_once, _init_l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10);
v_sz_294_ = lean_array_size(v_args_284_);
v___x_295_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInductiveApp_spec__1(v_sz_294_, v___x_283_, v_args_284_);
v___x_296_ = l_Array_append___redArg(v___x_293_, v___x_295_);
lean_dec_ref(v___x_295_);
if (v_isShared_279_ == 0)
{
lean_ctor_set_tag(v___x_278_, 1);
lean_ctor_set(v___x_278_, 2, v___x_296_);
lean_ctor_set(v___x_278_, 1, v___x_292_);
lean_ctor_set(v___x_278_, 0, v___x_286_);
v___x_298_ = v___x_278_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v___x_286_);
lean_ctor_set(v_reuseFailAlloc_301_, 1, v___x_292_);
lean_ctor_set(v_reuseFailAlloc_301_, 2, v___x_296_);
v___x_298_ = v_reuseFailAlloc_301_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_299_ = l_Lean_Syntax_node2(v___x_286_, v___x_287_, v___x_291_, v___x_298_);
v___x_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
return v___x_300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductiveApp___redArg___boxed(lean_object* v_indVal_305_, lean_object* v_argNames_306_, lean_object* v_a_307_, lean_object* v_a_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lean_Elab_Deriving_mkInductiveApp___redArg(v_indVal_305_, v_argNames_306_, v_a_307_);
lean_dec_ref(v_a_307_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductiveApp(lean_object* v_indVal_310_, lean_object* v_argNames_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v___x_319_; 
v___x_319_ = l_Lean_Elab_Deriving_mkInductiveApp___redArg(v_indVal_310_, v_argNames_311_, v_a_316_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInductiveApp___boxed(lean_object* v_indVal_320_, lean_object* v_argNames_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_){
_start:
{
lean_object* v_res_329_; 
v_res_329_ = l_Lean_Elab_Deriving_mkInductiveApp(v_indVal_320_, v_argNames_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_, v_a_327_);
lean_dec(v_a_327_);
lean_dec_ref(v_a_326_);
lean_dec(v_a_325_);
lean_dec_ref(v_a_324_);
lean_dec(v_a_323_);
lean_dec_ref(v_a_322_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg(size_t v_sz_338_, size_t v_i_339_, lean_object* v_bs_340_, lean_object* v___y_341_){
_start:
{
uint8_t v___x_343_; 
v___x_343_ = lean_usize_dec_lt(v_i_339_, v_sz_338_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; 
v___x_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_344_, 0, v_bs_340_);
return v___x_344_;
}
else
{
lean_object* v_ref_345_; lean_object* v_v_346_; lean_object* v___x_347_; lean_object* v_bs_x27_348_; uint8_t v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; size_t v___x_362_; size_t v___x_363_; lean_object* v___x_364_; 
v_ref_345_ = lean_ctor_get(v___y_341_, 2);
v_v_346_ = lean_array_uget(v_bs_340_, v_i_339_);
v___x_347_ = lean_unsigned_to_nat(0u);
v_bs_x27_348_ = lean_array_uset(v_bs_340_, v_i_339_, v___x_347_);
v___x_349_ = 0;
v___x_350_ = l_Lean_SourceInfo_fromRef(v_ref_345_, v___x_349_);
v___x_351_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__1));
v___x_352_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__2));
lean_inc_n(v___x_350_, 4);
v___x_353_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_353_, 0, v___x_350_);
lean_ctor_set(v___x_353_, 1, v___x_352_);
v___x_354_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9));
v___x_355_ = l_Lean_mkIdent(v_v_346_);
v___x_356_ = l_Lean_Syntax_node1(v___x_350_, v___x_354_, v___x_355_);
v___x_357_ = lean_obj_once(&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10, &l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10_once, _init_l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10);
v___x_358_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_358_, 0, v___x_350_);
lean_ctor_set(v___x_358_, 1, v___x_354_);
lean_ctor_set(v___x_358_, 2, v___x_357_);
v___x_359_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___closed__3));
v___x_360_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_360_, 0, v___x_350_);
lean_ctor_set(v___x_360_, 1, v___x_359_);
v___x_361_ = l_Lean_Syntax_node4(v___x_350_, v___x_351_, v___x_353_, v___x_356_, v___x_358_, v___x_360_);
v___x_362_ = ((size_t)1ULL);
v___x_363_ = lean_usize_add(v_i_339_, v___x_362_);
v___x_364_ = lean_array_uset(v_bs_x27_348_, v_i_339_, v___x_361_);
v_i_339_ = v___x_363_;
v_bs_340_ = v___x_364_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg___boxed(lean_object* v_sz_366_, lean_object* v_i_367_, lean_object* v_bs_368_, lean_object* v___y_369_, lean_object* v___y_370_){
_start:
{
size_t v_sz_boxed_371_; size_t v_i_boxed_372_; lean_object* v_res_373_; 
v_sz_boxed_371_ = lean_unbox_usize(v_sz_366_);
lean_dec(v_sz_366_);
v_i_boxed_372_ = lean_unbox_usize(v_i_367_);
lean_dec(v_i_367_);
v_res_373_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg(v_sz_boxed_371_, v_i_boxed_372_, v_bs_368_, v___y_369_);
lean_dec_ref(v___y_369_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkImplicitBinders(lean_object* v_argNames_374_, lean_object* v_a_375_, lean_object* v_a_376_, lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_){
_start:
{
size_t v_sz_382_; size_t v___x_383_; lean_object* v___x_384_; 
v_sz_382_ = lean_array_size(v_argNames_374_);
v___x_383_ = ((size_t)0ULL);
v___x_384_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg(v_sz_382_, v___x_383_, v_argNames_374_, v_a_379_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkImplicitBinders___boxed(lean_object* v_argNames_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lean_Elab_Deriving_mkImplicitBinders(v_argNames_385_, v_a_386_, v_a_387_, v_a_388_, v_a_389_, v_a_390_, v_a_391_);
lean_dec(v_a_391_);
lean_dec_ref(v_a_390_);
lean_dec(v_a_389_);
lean_dec_ref(v_a_388_);
lean_dec(v_a_387_);
lean_dec_ref(v_a_386_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0(size_t v_sz_394_, size_t v_i_395_, lean_object* v_bs_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v___x_404_; 
v___x_404_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___redArg(v_sz_394_, v_i_395_, v_bs_396_, v___y_401_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0___boxed(lean_object* v_sz_405_, lean_object* v_i_406_, lean_object* v_bs_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_){
_start:
{
size_t v_sz_boxed_415_; size_t v_i_boxed_416_; lean_object* v_res_417_; 
v_sz_boxed_415_ = lean_unbox_usize(v_sz_405_);
lean_dec(v_sz_405_);
v_i_boxed_416_ = lean_unbox_usize(v_i_406_);
lean_dec(v_i_406_);
v_res_417_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkImplicitBinders_spec__0(v_sz_boxed_415_, v_i_boxed_416_, v_bs_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
lean_dec(v___y_411_);
lean_dec_ref(v___y_410_);
lean_dec(v___y_409_);
lean_dec_ref(v___y_408_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1___redArg(lean_object* v_type_418_, lean_object* v_maxFVars_x3f_419_, lean_object* v_k_420_, uint8_t v_cleanupAnnotations_421_, uint8_t v_whnfType_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_){
_start:
{
lean_object* v___f_430_; lean_object* v___x_431_; 
lean_inc(v___y_424_);
lean_inc_ref(v___y_423_);
v___f_430_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_Deriving_mkInductArgNames_spec__1___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_430_, 0, v_k_420_);
lean_closure_set(v___f_430_, 1, v___y_423_);
lean_closure_set(v___f_430_, 2, v___y_424_);
v___x_431_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_418_, v_maxFVars_x3f_419_, v___f_430_, v_cleanupAnnotations_421_, v_whnfType_422_, v___y_425_, v___y_426_, v___y_427_, v___y_428_);
if (lean_obj_tag(v___x_431_) == 0)
{
return v___x_431_;
}
else
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
v_a_432_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v___x_431_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_431_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_a_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1___redArg___boxed(lean_object* v_type_440_, lean_object* v_maxFVars_x3f_441_, lean_object* v_k_442_, lean_object* v_cleanupAnnotations_443_, lean_object* v_whnfType_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_452_; uint8_t v_whnfType_boxed_453_; lean_object* v_res_454_; 
v_cleanupAnnotations_boxed_452_ = lean_unbox(v_cleanupAnnotations_443_);
v_whnfType_boxed_453_ = lean_unbox(v_whnfType_444_);
v_res_454_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1___redArg(v_type_440_, v_maxFVars_x3f_441_, v_k_442_, v_cleanupAnnotations_boxed_452_, v_whnfType_boxed_453_, v___y_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_, v___y_450_);
lean_dec(v___y_450_);
lean_dec_ref(v___y_449_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1(lean_object* v_00_u03b1_455_, lean_object* v_type_456_, lean_object* v_maxFVars_x3f_457_, lean_object* v_k_458_, uint8_t v_cleanupAnnotations_459_, uint8_t v_whnfType_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_){
_start:
{
lean_object* v___x_468_; 
v___x_468_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1___redArg(v_type_456_, v_maxFVars_x3f_457_, v_k_458_, v_cleanupAnnotations_459_, v_whnfType_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1___boxed(lean_object* v_00_u03b1_469_, lean_object* v_type_470_, lean_object* v_maxFVars_x3f_471_, lean_object* v_k_472_, lean_object* v_cleanupAnnotations_473_, lean_object* v_whnfType_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_482_; uint8_t v_whnfType_boxed_483_; lean_object* v_res_484_; 
v_cleanupAnnotations_boxed_482_ = lean_unbox(v_cleanupAnnotations_473_);
v_whnfType_boxed_483_ = lean_unbox(v_whnfType_474_);
v_res_484_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1(v_00_u03b1_469_, v_type_470_, v_maxFVars_x3f_471_, v_k_472_, v_cleanupAnnotations_boxed_482_, v_whnfType_boxed_483_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
lean_dec(v___y_478_);
lean_dec_ref(v___y_477_);
lean_dec(v___y_476_);
lean_dec_ref(v___y_475_);
return v_res_484_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg(lean_object* v_upperBound_493_, lean_object* v_xs_494_, lean_object* v_className_495_, lean_object* v_argNames_496_, lean_object* v_a_497_, lean_object* v_b_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_){
_start:
{
lean_object* v_snd_505_; lean_object* v_a_510_; uint8_t v___x_515_; 
v___x_515_ = lean_nat_dec_lt(v_a_497_, v_upperBound_493_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; 
lean_dec(v_a_497_);
lean_dec(v_className_495_);
v___x_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_516_, 0, v_b_498_);
return v___x_516_;
}
else
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_517_ = lean_box(0);
v___x_518_ = lean_array_fget_borrowed(v_xs_494_, v_a_497_);
v___x_519_ = lean_unsigned_to_nat(1u);
v___x_520_ = lean_mk_empty_array_with_capacity(v___x_519_);
lean_inc(v___x_518_);
v___x_521_ = lean_array_push(v___x_520_, v___x_518_);
lean_inc(v_className_495_);
v___x_522_ = l_Lean_Meta_mkAppM(v_className_495_, v___x_521_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
if (lean_obj_tag(v___x_522_) == 0)
{
lean_object* v_a_523_; lean_object* v___x_524_; 
v_a_523_ = lean_ctor_get(v___x_522_, 0);
lean_inc(v_a_523_);
lean_dec_ref_known(v___x_522_, 1);
v___x_524_ = l_Lean_Meta_isTypeCorrect(v_a_523_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
if (lean_obj_tag(v___x_524_) == 0)
{
lean_object* v_a_525_; uint8_t v___x_526_; 
v_a_525_ = lean_ctor_get(v___x_524_, 0);
lean_inc(v_a_525_);
lean_dec_ref_known(v___x_524_, 1);
v___x_526_ = lean_unbox(v_a_525_);
lean_dec(v_a_525_);
if (v___x_526_ == 0)
{
v_snd_505_ = v_b_498_;
goto v___jp_504_;
}
else
{
lean_object* v_ref_527_; lean_object* v___x_528_; uint8_t v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v_ref_527_ = lean_ctor_get(v___y_501_, 2);
v___x_528_ = lean_array_get_borrowed(v___x_517_, v_argNames_496_, v_a_497_);
v___x_529_ = 0;
v___x_530_ = l_Lean_SourceInfo_fromRef(v_ref_527_, v___x_529_);
v___x_531_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__1));
v___x_532_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__2));
lean_inc_n(v___x_530_, 5);
v___x_533_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_530_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
v___x_534_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9));
v___x_535_ = lean_obj_once(&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10, &l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10_once, _init_l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10);
v___x_536_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_536_, 0, v___x_530_);
lean_ctor_set(v___x_536_, 1, v___x_534_);
lean_ctor_set(v___x_536_, 2, v___x_535_);
v___x_537_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4));
lean_inc(v_className_495_);
v___x_538_ = l_Lean_mkCIdent(v_className_495_);
lean_inc(v___x_528_);
v___x_539_ = l_Lean_mkIdent(v___x_528_);
v___x_540_ = l_Lean_Syntax_node1(v___x_530_, v___x_534_, v___x_539_);
v___x_541_ = l_Lean_Syntax_node2(v___x_530_, v___x_537_, v___x_538_, v___x_540_);
v___x_542_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___closed__3));
v___x_543_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_543_, 0, v___x_530_);
lean_ctor_set(v___x_543_, 1, v___x_542_);
v___x_544_ = l_Lean_Syntax_node4(v___x_530_, v___x_531_, v___x_533_, v___x_536_, v___x_541_, v___x_543_);
v___x_545_ = lean_array_push(v_b_498_, v___x_544_);
v_snd_505_ = v___x_545_;
goto v___jp_504_;
}
}
else
{
lean_object* v_a_546_; 
v_a_546_ = lean_ctor_get(v___x_524_, 0);
lean_inc(v_a_546_);
lean_dec_ref_known(v___x_524_, 1);
v_a_510_ = v_a_546_;
goto v___jp_509_;
}
}
else
{
lean_object* v_a_547_; 
v_a_547_ = lean_ctor_get(v___x_522_, 0);
lean_inc(v_a_547_);
lean_dec_ref_known(v___x_522_, 1);
v_a_510_ = v_a_547_;
goto v___jp_509_;
}
}
v___jp_504_:
{
lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_506_ = lean_unsigned_to_nat(1u);
v___x_507_ = lean_nat_add(v_a_497_, v___x_506_);
lean_dec(v_a_497_);
v_a_497_ = v___x_507_;
v_b_498_ = v_snd_505_;
goto _start;
}
v___jp_509_:
{
uint8_t v___x_511_; 
v___x_511_ = l_Lean_Exception_isInterrupt(v_a_510_);
if (v___x_511_ == 0)
{
uint8_t v___x_512_; 
lean_inc_ref(v_a_510_);
v___x_512_ = l_Lean_Exception_isRuntime(v_a_510_);
if (v___x_512_ == 0)
{
lean_dec_ref(v_a_510_);
v_snd_505_ = v_b_498_;
goto v___jp_504_;
}
else
{
lean_object* v___x_513_; 
lean_dec_ref(v_b_498_);
lean_dec(v_a_497_);
lean_dec(v_className_495_);
v___x_513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_513_, 0, v_a_510_);
return v___x_513_;
}
}
else
{
lean_object* v___x_514_; 
lean_dec_ref(v_b_498_);
lean_dec(v_a_497_);
lean_dec(v_className_495_);
v___x_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_514_, 0, v_a_510_);
return v___x_514_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg___boxed(lean_object* v_upperBound_548_, lean_object* v_xs_549_, lean_object* v_className_550_, lean_object* v_argNames_551_, lean_object* v_a_552_, lean_object* v_b_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg(v_upperBound_548_, v_xs_549_, v_className_550_, v_argNames_551_, v_a_552_, v_b_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_);
lean_dec(v___y_557_);
lean_dec_ref(v___y_556_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
lean_dec_ref(v_argNames_551_);
lean_dec_ref(v_xs_549_);
lean_dec(v_upperBound_548_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0(lean_object* v_className_562_, lean_object* v_argNames_563_, lean_object* v_xs_564_, lean_object* v_x_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_){
_start:
{
lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v_binders_575_; lean_object* v___x_576_; 
v___x_573_ = lean_array_get_size(v_xs_564_);
v___x_574_ = lean_unsigned_to_nat(0u);
v_binders_575_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___closed__0));
v___x_576_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg(v___x_573_, v_xs_564_, v_className_562_, v_argNames_563_, v___x_574_, v_binders_575_, v___y_568_, v___y_569_, v___y_570_, v___y_571_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___boxed(lean_object* v_className_577_, lean_object* v_argNames_578_, lean_object* v_xs_579_, lean_object* v_x_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_){
_start:
{
lean_object* v_res_588_; 
v_res_588_ = l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0(v_className_577_, v_argNames_578_, v_xs_579_, v_x_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_);
lean_dec(v___y_586_);
lean_dec_ref(v___y_585_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
lean_dec_ref(v_x_580_);
lean_dec_ref(v_xs_579_);
lean_dec_ref(v_argNames_578_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders(lean_object* v_className_589_, lean_object* v_indVal_590_, lean_object* v_argNames_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_){
_start:
{
lean_object* v_toConstantVal_599_; lean_object* v_numParams_600_; lean_object* v_type_601_; lean_object* v___f_602_; lean_object* v___x_603_; uint8_t v___x_604_; lean_object* v___x_605_; 
v_toConstantVal_599_ = lean_ctor_get(v_indVal_590_, 0);
lean_inc_ref(v_toConstantVal_599_);
v_numParams_600_ = lean_ctor_get(v_indVal_590_, 1);
lean_inc(v_numParams_600_);
lean_dec_ref(v_indVal_590_);
v_type_601_ = lean_ctor_get(v_toConstantVal_599_, 2);
lean_inc_ref(v_type_601_);
lean_dec_ref(v_toConstantVal_599_);
v___f_602_ = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___boxed), 11, 2);
lean_closure_set(v___f_602_, 0, v_className_589_);
lean_closure_set(v___f_602_, 1, v_argNames_591_);
v___x_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_603_, 0, v_numParams_600_);
v___x_604_ = 0;
v___x_605_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__1___redArg(v_type_601_, v___x_603_, v___f_602_, v___x_604_, v___x_604_, v_a_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_, v_a_597_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders___boxed(lean_object* v_className_606_, lean_object* v_indVal_607_, lean_object* v_argNames_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_Lean_Elab_Deriving_mkInstImplicitBinders(v_className_606_, v_indVal_607_, v_argNames_608_, v_a_609_, v_a_610_, v_a_611_, v_a_612_, v_a_613_, v_a_614_);
lean_dec(v_a_614_);
lean_dec_ref(v_a_613_);
lean_dec(v_a_612_);
lean_dec_ref(v_a_611_);
lean_dec(v_a_610_);
lean_dec_ref(v_a_609_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0(lean_object* v_upperBound_617_, lean_object* v_xs_618_, lean_object* v_className_619_, lean_object* v_argNames_620_, lean_object* v_inst_621_, lean_object* v_R_622_, lean_object* v_a_623_, lean_object* v_b_624_, lean_object* v_c_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___redArg(v_upperBound_617_, v_xs_618_, v_className_619_, v_argNames_620_, v_a_623_, v_b_624_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0___boxed(lean_object* v_upperBound_634_, lean_object* v_xs_635_, lean_object* v_className_636_, lean_object* v_argNames_637_, lean_object* v_inst_638_, lean_object* v_R_639_, lean_object* v_a_640_, lean_object* v_b_641_, lean_object* v_c_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstImplicitBinders_spec__0(v_upperBound_634_, v_xs_635_, v_className_636_, v_argNames_637_, v_inst_638_, v_R_639_, v_a_640_, v_b_641_, v_c_642_, v___y_643_, v___y_644_, v___y_645_, v___y_646_, v___y_647_, v___y_648_);
lean_dec(v___y_648_);
lean_dec_ref(v___y_647_);
lean_dec(v___y_646_);
lean_dec_ref(v___y_645_);
lean_dec(v___y_644_);
lean_dec_ref(v___y_643_);
lean_dec_ref(v_argNames_637_);
lean_dec_ref(v_xs_635_);
lean_dec(v_upperBound_634_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4(uint8_t v___x_673_, lean_object* v_a_674_, lean_object* v_a_675_){
_start:
{
if (lean_obj_tag(v_a_674_) == 0)
{
lean_object* v___x_676_; 
v___x_676_ = l_List_reverse___redArg(v_a_675_);
return v___x_676_;
}
else
{
lean_object* v_head_677_; lean_object* v_tail_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_707_; 
v_head_677_ = lean_ctor_get(v_a_674_, 0);
v_tail_678_ = lean_ctor_get(v_a_674_, 1);
v_isSharedCheck_707_ = !lean_is_exclusive(v_a_674_);
if (v_isSharedCheck_707_ == 0)
{
v___x_680_ = v_a_674_;
v_isShared_681_ = v_isSharedCheck_707_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_tail_678_);
lean_inc(v_head_677_);
lean_dec(v_a_674_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_707_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
uint8_t v___y_683_; lean_object* v___x_689_; uint8_t v___x_690_; 
v___x_689_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1));
lean_inc(v_head_677_);
v___x_690_ = l_Lean_Syntax_isOfKind(v_head_677_, v___x_689_);
if (v___x_690_ == 0)
{
v___y_683_ = v___x_673_;
goto v___jp_682_;
}
else
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; uint8_t v___x_694_; 
v___x_691_ = lean_unsigned_to_nat(0u);
v___x_692_ = l_Lean_Syntax_getArg(v_head_677_, v___x_691_);
v___x_693_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3));
lean_inc(v___x_692_);
v___x_694_ = l_Lean_Syntax_isOfKind(v___x_692_, v___x_693_);
if (v___x_694_ == 0)
{
lean_dec(v___x_692_);
v___y_683_ = v___x_673_;
goto v___jp_682_;
}
else
{
lean_object* v___x_695_; uint8_t v___x_696_; 
v___x_695_ = l_Lean_Syntax_getArg(v___x_692_, v___x_691_);
lean_dec(v___x_692_);
v___x_696_ = l_Lean_Syntax_matchesNull(v___x_695_, v___x_691_);
if (v___x_696_ == 0)
{
v___y_683_ = v___x_673_;
goto v___jp_682_;
}
else
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; uint8_t v___x_700_; 
v___x_697_ = lean_unsigned_to_nat(1u);
v___x_698_ = l_Lean_Syntax_getArg(v_head_677_, v___x_697_);
v___x_699_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6));
lean_inc(v___x_698_);
v___x_700_ = l_Lean_Syntax_isOfKind(v___x_698_, v___x_699_);
if (v___x_700_ == 0)
{
lean_dec(v___x_698_);
v___y_683_ = v___x_673_;
goto v___jp_682_;
}
else
{
lean_object* v___x_701_; lean_object* v___x_702_; uint8_t v___x_703_; 
v___x_701_ = l_Lean_Syntax_getArg(v___x_698_, v___x_691_);
v___x_702_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__8));
v___x_703_ = l_Lean_Syntax_matchesIdent(v___x_701_, v___x_702_);
lean_dec(v___x_701_);
if (v___x_703_ == 0)
{
lean_dec(v___x_698_);
v___y_683_ = v___x_673_;
goto v___jp_682_;
}
else
{
lean_object* v___x_704_; uint8_t v___x_705_; 
v___x_704_ = l_Lean_Syntax_getArg(v___x_698_, v___x_697_);
lean_dec(v___x_698_);
v___x_705_ = l_Lean_Syntax_matchesNull(v___x_704_, v___x_691_);
if (v___x_705_ == 0)
{
v___y_683_ = v___x_673_;
goto v___jp_682_;
}
else
{
lean_del_object(v___x_680_);
lean_dec(v_head_677_);
v_a_674_ = v_tail_678_;
goto _start;
}
}
}
}
}
}
v___jp_682_:
{
if (v___y_683_ == 0)
{
lean_del_object(v___x_680_);
lean_dec(v_head_677_);
v_a_674_ = v_tail_678_;
goto _start;
}
else
{
lean_object* v___x_686_; 
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 1, v_a_675_);
v___x_686_ = v___x_680_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_head_677_);
lean_ctor_set(v_reuseFailAlloc_688_, 1, v_a_675_);
v___x_686_ = v_reuseFailAlloc_688_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
v_a_674_ = v_tail_678_;
v_a_675_ = v___x_686_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___boxed(lean_object* v___x_708_, lean_object* v_a_709_, lean_object* v_a_710_){
_start:
{
uint8_t v___x_4455__boxed_711_; lean_object* v_res_712_; 
v___x_4455__boxed_711_ = lean_unbox(v___x_708_);
v_res_712_ = l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4(v___x_4455__boxed_711_, v_a_709_, v_a_710_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___lam__0(uint8_t v___x_713_, lean_object* v_sc_714_){
_start:
{
lean_object* v_header_715_; lean_object* v_opts_716_; lean_object* v_currNamespace_717_; lean_object* v_openDecls_718_; lean_object* v_levelNames_719_; lean_object* v_varDecls_720_; lean_object* v_varUIds_721_; lean_object* v_includedVars_722_; lean_object* v_omittedVars_723_; uint8_t v_isNoncomputable_724_; uint8_t v_isPublic_725_; uint8_t v_isMeta_726_; lean_object* v_attrs_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_736_; 
v_header_715_ = lean_ctor_get(v_sc_714_, 0);
v_opts_716_ = lean_ctor_get(v_sc_714_, 1);
v_currNamespace_717_ = lean_ctor_get(v_sc_714_, 2);
v_openDecls_718_ = lean_ctor_get(v_sc_714_, 3);
v_levelNames_719_ = lean_ctor_get(v_sc_714_, 4);
v_varDecls_720_ = lean_ctor_get(v_sc_714_, 5);
v_varUIds_721_ = lean_ctor_get(v_sc_714_, 6);
v_includedVars_722_ = lean_ctor_get(v_sc_714_, 7);
v_omittedVars_723_ = lean_ctor_get(v_sc_714_, 8);
v_isNoncomputable_724_ = lean_ctor_get_uint8(v_sc_714_, sizeof(void*)*10);
v_isPublic_725_ = lean_ctor_get_uint8(v_sc_714_, sizeof(void*)*10 + 1);
v_isMeta_726_ = lean_ctor_get_uint8(v_sc_714_, sizeof(void*)*10 + 2);
v_attrs_727_ = lean_ctor_get(v_sc_714_, 9);
v_isSharedCheck_736_ = !lean_is_exclusive(v_sc_714_);
if (v_isSharedCheck_736_ == 0)
{
v___x_729_ = v_sc_714_;
v_isShared_730_ = v_isSharedCheck_736_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_attrs_727_);
lean_inc(v_omittedVars_723_);
lean_inc(v_includedVars_722_);
lean_inc(v_varUIds_721_);
lean_inc(v_varDecls_720_);
lean_inc(v_levelNames_719_);
lean_inc(v_openDecls_718_);
lean_inc(v_currNamespace_717_);
lean_inc(v_opts_716_);
lean_inc(v_header_715_);
lean_dec(v_sc_714_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_736_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_734_; 
v___x_731_ = lean_box(0);
v___x_732_ = l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4(v___x_713_, v_attrs_727_, v___x_731_);
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 9, v___x_732_);
v___x_734_ = v___x_729_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_header_715_);
lean_ctor_set(v_reuseFailAlloc_735_, 1, v_opts_716_);
lean_ctor_set(v_reuseFailAlloc_735_, 2, v_currNamespace_717_);
lean_ctor_set(v_reuseFailAlloc_735_, 3, v_openDecls_718_);
lean_ctor_set(v_reuseFailAlloc_735_, 4, v_levelNames_719_);
lean_ctor_set(v_reuseFailAlloc_735_, 5, v_varDecls_720_);
lean_ctor_set(v_reuseFailAlloc_735_, 6, v_varUIds_721_);
lean_ctor_set(v_reuseFailAlloc_735_, 7, v_includedVars_722_);
lean_ctor_set(v_reuseFailAlloc_735_, 8, v_omittedVars_723_);
lean_ctor_set(v_reuseFailAlloc_735_, 9, v___x_732_);
lean_ctor_set_uint8(v_reuseFailAlloc_735_, sizeof(void*)*10, v_isNoncomputable_724_);
lean_ctor_set_uint8(v_reuseFailAlloc_735_, sizeof(void*)*10 + 1, v_isPublic_725_);
lean_ctor_set_uint8(v_reuseFailAlloc_735_, sizeof(void*)*10 + 2, v_isMeta_726_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___lam__0___boxed(lean_object* v___x_737_, lean_object* v_sc_738_){
_start:
{
uint8_t v___x_4550__boxed_739_; lean_object* v_res_740_; 
v___x_4550__boxed_739_ = lean_unbox(v___x_737_);
v_res_740_ = l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___lam__0(v___x_4550__boxed_739_, v_sc_738_);
return v_res_740_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0(void){
_start:
{
lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_741_ = lean_box(1);
v___x_742_ = l_Lean_MessageData_ofFormat(v___x_741_);
return v___x_742_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__3(void){
_start:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__2));
v___x_747_ = l_Lean_MessageData_ofFormat(v___x_746_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9(lean_object* v_x_748_, lean_object* v_x_749_){
_start:
{
if (lean_obj_tag(v_x_749_) == 0)
{
return v_x_748_;
}
else
{
lean_object* v_head_750_; lean_object* v_tail_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_773_; 
v_head_750_ = lean_ctor_get(v_x_749_, 0);
v_tail_751_ = lean_ctor_get(v_x_749_, 1);
v_isSharedCheck_773_ = !lean_is_exclusive(v_x_749_);
if (v_isSharedCheck_773_ == 0)
{
v___x_753_ = v_x_749_;
v_isShared_754_ = v_isSharedCheck_773_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_tail_751_);
lean_inc(v_head_750_);
lean_dec(v_x_749_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_773_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v_before_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_771_; 
v_before_755_ = lean_ctor_get(v_head_750_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v_head_750_);
if (v_isSharedCheck_771_ == 0)
{
lean_object* v_unused_772_; 
v_unused_772_ = lean_ctor_get(v_head_750_, 1);
lean_dec(v_unused_772_);
v___x_757_ = v_head_750_;
v_isShared_758_ = v_isSharedCheck_771_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_before_755_);
lean_dec(v_head_750_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_771_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_759_; lean_object* v___x_761_; 
v___x_759_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0);
if (v_isShared_758_ == 0)
{
lean_ctor_set_tag(v___x_757_, 7);
lean_ctor_set(v___x_757_, 1, v___x_759_);
lean_ctor_set(v___x_757_, 0, v_x_748_);
v___x_761_ = v___x_757_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_x_748_);
lean_ctor_set(v_reuseFailAlloc_770_, 1, v___x_759_);
v___x_761_ = v_reuseFailAlloc_770_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
lean_object* v___x_762_; lean_object* v___x_764_; 
v___x_762_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__3);
if (v_isShared_754_ == 0)
{
lean_ctor_set_tag(v___x_753_, 7);
lean_ctor_set(v___x_753_, 1, v___x_762_);
lean_ctor_set(v___x_753_, 0, v___x_761_);
v___x_764_ = v___x_753_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v___x_761_);
lean_ctor_set(v_reuseFailAlloc_769_, 1, v___x_762_);
v___x_764_ = v_reuseFailAlloc_769_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_765_ = l_Lean_MessageData_ofSyntax(v_before_755_);
v___x_766_ = l_Lean_indentD(v___x_765_);
v___x_767_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_767_, 0, v___x_764_);
lean_ctor_set(v___x_767_, 1, v___x_766_);
v_x_748_ = v___x_767_;
v_x_749_ = v_tail_751_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__8(lean_object* v_opts_774_, lean_object* v_opt_775_){
_start:
{
lean_object* v_name_776_; lean_object* v_defValue_777_; lean_object* v_map_778_; lean_object* v___x_779_; 
v_name_776_ = lean_ctor_get(v_opt_775_, 0);
v_defValue_777_ = lean_ctor_get(v_opt_775_, 1);
v_map_778_ = lean_ctor_get(v_opts_774_, 0);
v___x_779_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_778_, v_name_776_);
if (lean_obj_tag(v___x_779_) == 0)
{
uint8_t v___x_780_; 
v___x_780_ = lean_unbox(v_defValue_777_);
return v___x_780_;
}
else
{
lean_object* v_val_781_; 
v_val_781_ = lean_ctor_get(v___x_779_, 0);
lean_inc(v_val_781_);
lean_dec_ref_known(v___x_779_, 1);
if (lean_obj_tag(v_val_781_) == 1)
{
uint8_t v_v_782_; 
v_v_782_ = lean_ctor_get_uint8(v_val_781_, 0);
lean_dec_ref_known(v_val_781_, 0);
return v_v_782_;
}
else
{
uint8_t v___x_783_; 
lean_dec(v_val_781_);
v___x_783_ = lean_unbox(v_defValue_777_);
return v___x_783_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__8___boxed(lean_object* v_opts_784_, lean_object* v_opt_785_){
_start:
{
uint8_t v_res_786_; lean_object* v_r_787_; 
v_res_786_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__8(v_opts_784_, v_opt_785_);
lean_dec_ref(v_opt_785_);
lean_dec_ref(v_opts_784_);
v_r_787_ = lean_box(v_res_786_);
return v_r_787_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__2(void){
_start:
{
lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_791_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__1));
v___x_792_ = l_Lean_MessageData_ofFormat(v___x_791_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg(lean_object* v_msgData_793_, lean_object* v_macroStack_794_, lean_object* v___y_795_){
_start:
{
lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v_scopes_799_; lean_object* v___x_800_; lean_object* v_opts_801_; lean_object* v___x_802_; uint8_t v___x_803_; 
v___x_797_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_798_ = lean_st_ref_get(v___y_795_);
v_scopes_799_ = lean_ctor_get(v___x_798_, 2);
lean_inc(v_scopes_799_);
lean_dec(v___x_798_);
v___x_800_ = l_List_head_x21___redArg(v___x_797_, v_scopes_799_);
lean_dec(v_scopes_799_);
v_opts_801_ = lean_ctor_get(v___x_800_, 1);
lean_inc_ref(v_opts_801_);
lean_dec(v___x_800_);
v___x_802_ = l_Lean_Elab_pp_macroStack;
v___x_803_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__8(v_opts_801_, v___x_802_);
lean_dec_ref(v_opts_801_);
if (v___x_803_ == 0)
{
lean_object* v___x_804_; 
lean_dec(v_macroStack_794_);
v___x_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_804_, 0, v_msgData_793_);
return v___x_804_;
}
else
{
if (lean_obj_tag(v_macroStack_794_) == 0)
{
lean_object* v___x_805_; 
v___x_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_805_, 0, v_msgData_793_);
return v___x_805_;
}
else
{
lean_object* v_head_806_; lean_object* v_after_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_822_; 
v_head_806_ = lean_ctor_get(v_macroStack_794_, 0);
lean_inc(v_head_806_);
v_after_807_ = lean_ctor_get(v_head_806_, 1);
v_isSharedCheck_822_ = !lean_is_exclusive(v_head_806_);
if (v_isSharedCheck_822_ == 0)
{
lean_object* v_unused_823_; 
v_unused_823_ = lean_ctor_get(v_head_806_, 0);
lean_dec(v_unused_823_);
v___x_809_ = v_head_806_;
v_isShared_810_ = v_isSharedCheck_822_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_after_807_);
lean_dec(v_head_806_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_822_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_811_; lean_object* v___x_813_; 
v___x_811_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0);
if (v_isShared_810_ == 0)
{
lean_ctor_set_tag(v___x_809_, 7);
lean_ctor_set(v___x_809_, 1, v___x_811_);
lean_ctor_set(v___x_809_, 0, v_msgData_793_);
v___x_813_ = v___x_809_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_msgData_793_);
lean_ctor_set(v_reuseFailAlloc_821_, 1, v___x_811_);
v___x_813_ = v_reuseFailAlloc_821_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v_msgData_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_814_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__2);
v___x_815_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_815_, 0, v___x_813_);
lean_ctor_set(v___x_815_, 1, v___x_814_);
v___x_816_ = l_Lean_MessageData_ofSyntax(v_after_807_);
v___x_817_ = l_Lean_indentD(v___x_816_);
v_msgData_818_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_818_, 0, v___x_815_);
lean_ctor_set(v_msgData_818_, 1, v___x_817_);
v___x_819_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9(v_msgData_818_, v_macroStack_794_);
v___x_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_820_, 0, v___x_819_);
return v___x_820_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___boxed(lean_object* v_msgData_824_, lean_object* v_macroStack_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg(v_msgData_824_, v_macroStack_825_, v___y_826_);
lean_dec(v___y_826_);
return v_res_828_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_829_; 
v___x_829_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_829_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_830_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__0);
v___x_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
return v___x_831_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_832_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__1);
v___x_833_ = lean_unsigned_to_nat(0u);
v___x_834_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_834_, 0, v___x_833_);
lean_ctor_set(v___x_834_, 1, v___x_833_);
lean_ctor_set(v___x_834_, 2, v___x_833_);
lean_ctor_set(v___x_834_, 3, v___x_833_);
lean_ctor_set(v___x_834_, 4, v___x_832_);
lean_ctor_set(v___x_834_, 5, v___x_832_);
lean_ctor_set(v___x_834_, 6, v___x_832_);
lean_ctor_set(v___x_834_, 7, v___x_832_);
lean_ctor_set(v___x_834_, 8, v___x_832_);
lean_ctor_set(v___x_834_, 9, v___x_832_);
lean_ctor_set(v___x_834_, 10, v___x_832_);
return v___x_834_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_835_ = lean_unsigned_to_nat(32u);
v___x_836_ = lean_mk_empty_array_with_capacity(v___x_835_);
v___x_837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
return v___x_837_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__4(void){
_start:
{
size_t v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_838_ = ((size_t)5ULL);
v___x_839_ = lean_unsigned_to_nat(0u);
v___x_840_ = lean_unsigned_to_nat(32u);
v___x_841_ = lean_mk_empty_array_with_capacity(v___x_840_);
v___x_842_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__3);
v___x_843_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_843_, 0, v___x_842_);
lean_ctor_set(v___x_843_, 1, v___x_841_);
lean_ctor_set(v___x_843_, 2, v___x_839_);
lean_ctor_set(v___x_843_, 3, v___x_839_);
lean_ctor_set_usize(v___x_843_, 4, v___x_838_);
return v___x_843_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_844_ = lean_box(1);
v___x_845_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__4);
v___x_846_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__1);
v___x_847_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_847_, 0, v___x_846_);
lean_ctor_set(v___x_847_, 1, v___x_845_);
lean_ctor_set(v___x_847_, 2, v___x_844_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg(lean_object* v_msgData_848_, lean_object* v___y_849_){
_start:
{
lean_object* v___x_851_; lean_object* v_env_852_; uint8_t v___x_853_; lean_object* v_env_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v_scopes_857_; lean_object* v___x_858_; lean_object* v_opts_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_851_ = lean_st_ref_get(v___y_849_);
v_env_852_ = lean_ctor_get(v___x_851_, 0);
lean_inc_ref(v_env_852_);
lean_dec(v___x_851_);
v___x_853_ = 0;
v_env_854_ = l_Lean_Environment_setRecordingDeps(v_env_852_, v___x_853_);
v___x_855_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_856_ = lean_st_ref_get(v___y_849_);
v_scopes_857_ = lean_ctor_get(v___x_856_, 2);
lean_inc(v_scopes_857_);
lean_dec(v___x_856_);
v___x_858_ = l_List_head_x21___redArg(v___x_855_, v_scopes_857_);
lean_dec(v_scopes_857_);
v_opts_859_ = lean_ctor_get(v___x_858_, 1);
lean_inc_ref(v_opts_859_);
lean_dec(v___x_858_);
v___x_860_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__2);
v___x_861_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__5);
v___x_862_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_862_, 0, v_env_854_);
lean_ctor_set(v___x_862_, 1, v___x_860_);
lean_ctor_set(v___x_862_, 2, v___x_861_);
lean_ctor_set(v___x_862_, 3, v_opts_859_);
v___x_863_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_863_, 0, v___x_862_);
lean_ctor_set(v___x_863_, 1, v_msgData_848_);
v___x_864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_864_, 0, v___x_863_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___boxed(lean_object* v_msgData_865_, lean_object* v___y_866_, lean_object* v___y_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg(v_msgData_865_, v___y_866_);
lean_dec(v___y_866_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___redArg(lean_object* v_msg_869_, lean_object* v___y_870_, lean_object* v___y_871_){
_start:
{
lean_object* v___x_873_; 
v___x_873_ = l_Lean_Elab_Command_getRef___redArg(v___y_870_);
if (lean_obj_tag(v___x_873_) == 0)
{
lean_object* v_a_874_; lean_object* v_macroStack_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v_a_878_; lean_object* v___x_879_; lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_888_; 
v_a_874_ = lean_ctor_get(v___x_873_, 0);
lean_inc(v_a_874_);
lean_dec_ref_known(v___x_873_, 1);
v_macroStack_875_ = lean_ctor_get(v___y_870_, 4);
v___x_876_ = l_Lean_Elab_getBetterRef(v_a_874_, v_macroStack_875_);
lean_dec(v_a_874_);
v___x_877_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg(v_msg_869_, v___y_871_);
v_a_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_a_878_);
lean_dec_ref(v___x_877_);
lean_inc(v_macroStack_875_);
v___x_879_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg(v_a_878_, v_macroStack_875_, v___y_871_);
v_a_880_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_888_ == 0)
{
v___x_882_ = v___x_879_;
v_isShared_883_ = v_isSharedCheck_888_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_879_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_888_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_884_; lean_object* v___x_886_; 
v___x_884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_884_, 0, v___x_876_);
lean_ctor_set(v___x_884_, 1, v_a_880_);
if (v_isShared_883_ == 0)
{
lean_ctor_set_tag(v___x_882_, 1);
lean_ctor_set(v___x_882_, 0, v___x_884_);
v___x_886_ = v___x_882_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_884_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
else
{
lean_object* v_a_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_896_; 
lean_dec_ref(v_msg_869_);
v_a_889_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_896_ == 0)
{
v___x_891_ = v___x_873_;
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_a_889_);
lean_dec(v___x_873_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_894_; 
if (v_isShared_892_ == 0)
{
v___x_894_ = v___x_891_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_a_889_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___redArg___boxed(lean_object* v_msg_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___redArg(v_msg_897_, v___y_898_, v___y_899_);
lean_dec(v___y_899_);
lean_dec_ref(v___y_898_);
return v_res_901_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1(void){
_start:
{
lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_903_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__0));
v___x_904_ = l_Lean_stringToMessageData(v___x_903_);
return v___x_904_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3(void){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_906_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__2));
v___x_907_ = l_Lean_stringToMessageData(v___x_906_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1(lean_object* v_constName_908_, lean_object* v___y_909_, lean_object* v___y_910_){
_start:
{
lean_object* v___x_912_; lean_object* v_env_913_; lean_object* v___x_914_; 
v___x_912_ = lean_st_ref_get(v___y_910_);
v_env_913_ = lean_ctor_get(v___x_912_, 0);
lean_inc_ref(v_env_913_);
lean_dec(v___x_912_);
lean_inc(v_constName_908_);
v___x_914_ = l_Lean_isInductiveCore_x3f(v_env_913_, v_constName_908_);
if (lean_obj_tag(v___x_914_) == 0)
{
lean_object* v___x_915_; uint8_t v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_915_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1);
v___x_916_ = 0;
v___x_917_ = l_Lean_MessageData_ofConstName(v_constName_908_, v___x_916_);
v___x_918_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_918_, 0, v___x_915_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
v___x_919_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3, &l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3);
v___x_920_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_920_, 0, v___x_918_);
lean_ctor_set(v___x_920_, 1, v___x_919_);
v___x_921_ = l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___redArg(v___x_920_, v___y_909_, v___y_910_);
return v___x_921_;
}
else
{
lean_object* v_val_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_929_; 
lean_dec(v_constName_908_);
v_val_922_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_929_ == 0)
{
v___x_924_ = v___x_914_;
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_val_922_);
lean_dec(v___x_914_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_927_; 
if (v_isShared_925_ == 0)
{
lean_ctor_set_tag(v___x_924_, 0);
v___x_927_ = v___x_924_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_val_922_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___boxed(lean_object* v_constName_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1(v_constName_930_, v___y_931_, v___y_932_);
lean_dec(v___y_932_);
lean_dec_ref(v___y_931_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2___redArg(lean_object* v_as_x27_935_, lean_object* v_b_936_, lean_object* v___y_937_, lean_object* v___y_938_){
_start:
{
if (lean_obj_tag(v_as_x27_935_) == 0)
{
lean_object* v___x_940_; 
v___x_940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_940_, 0, v_b_936_);
return v___x_940_;
}
else
{
lean_object* v_head_941_; lean_object* v_tail_942_; lean_object* v___x_943_; 
v_head_941_ = lean_ctor_get(v_as_x27_935_, 0);
v_tail_942_ = lean_ctor_get(v_as_x27_935_, 1);
lean_inc(v_head_941_);
v___x_943_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1(v_head_941_, v___y_937_, v___y_938_);
if (lean_obj_tag(v___x_943_) == 0)
{
lean_object* v_a_944_; lean_object* v___x_945_; 
v_a_944_ = lean_ctor_get(v___x_943_, 0);
lean_inc(v_a_944_);
lean_dec_ref_known(v___x_943_, 1);
v___x_945_ = lean_array_push(v_b_936_, v_a_944_);
v_as_x27_935_ = v_tail_942_;
v_b_936_ = v___x_945_;
goto _start;
}
else
{
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_954_; 
lean_dec_ref(v_b_936_);
v_a_947_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_954_ == 0)
{
v___x_949_ = v___x_943_;
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v___x_943_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_952_; 
if (v_isShared_950_ == 0)
{
v___x_952_ = v___x_949_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_a_947_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2___redArg___boxed(lean_object* v_as_x27_955_, lean_object* v_b_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2___redArg(v_as_x27_955_, v_b_956_, v___y_957_, v___y_958_);
lean_dec(v___y_958_);
lean_dec_ref(v___y_957_);
lean_dec(v_as_x27_955_);
return v_res_960_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__5(lean_object* v_x_961_){
_start:
{
if (lean_obj_tag(v_x_961_) == 0)
{
uint8_t v___x_962_; 
v___x_962_ = 0;
return v___x_962_;
}
else
{
lean_object* v_head_963_; lean_object* v_tail_964_; lean_object* v___x_965_; uint8_t v___x_966_; 
v_head_963_ = lean_ctor_get(v_x_961_, 0);
lean_inc_n(v_head_963_, 2);
v_tail_964_ = lean_ctor_get(v_x_961_, 1);
lean_inc(v_tail_964_);
lean_dec_ref_known(v_x_961_, 2);
v___x_965_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__1));
v___x_966_ = l_Lean_Syntax_isOfKind(v_head_963_, v___x_965_);
if (v___x_966_ == 0)
{
lean_dec(v_head_963_);
v_x_961_ = v_tail_964_;
goto _start;
}
else
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; uint8_t v___x_971_; 
v___x_968_ = lean_unsigned_to_nat(0u);
v___x_969_ = l_Lean_Syntax_getArg(v_head_963_, v___x_968_);
v___x_970_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__3));
lean_inc(v___x_969_);
v___x_971_ = l_Lean_Syntax_isOfKind(v___x_969_, v___x_970_);
if (v___x_971_ == 0)
{
lean_dec(v___x_969_);
lean_dec(v_head_963_);
v_x_961_ = v_tail_964_;
goto _start;
}
else
{
lean_object* v___x_973_; uint8_t v___x_974_; 
v___x_973_ = l_Lean_Syntax_getArg(v___x_969_, v___x_968_);
lean_dec(v___x_969_);
v___x_974_ = l_Lean_Syntax_matchesNull(v___x_973_, v___x_968_);
if (v___x_974_ == 0)
{
lean_dec(v_head_963_);
v_x_961_ = v_tail_964_;
goto _start;
}
else
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; uint8_t v___x_979_; 
v___x_976_ = lean_unsigned_to_nat(1u);
v___x_977_ = l_Lean_Syntax_getArg(v_head_963_, v___x_976_);
lean_dec(v_head_963_);
v___x_978_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__6));
lean_inc(v___x_977_);
v___x_979_ = l_Lean_Syntax_isOfKind(v___x_977_, v___x_978_);
if (v___x_979_ == 0)
{
lean_dec(v___x_977_);
v_x_961_ = v_tail_964_;
goto _start;
}
else
{
lean_object* v___x_981_; lean_object* v___x_982_; uint8_t v___x_983_; 
v___x_981_ = l_Lean_Syntax_getArg(v___x_977_, v___x_968_);
v___x_982_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__8));
v___x_983_ = l_Lean_Syntax_matchesIdent(v___x_981_, v___x_982_);
lean_dec(v___x_981_);
if (v___x_983_ == 0)
{
lean_dec(v___x_977_);
v_x_961_ = v_tail_964_;
goto _start;
}
else
{
lean_object* v___x_985_; uint8_t v___x_986_; 
v___x_985_ = l_Lean_Syntax_getArg(v___x_977_, v___x_976_);
lean_dec(v___x_977_);
v___x_986_ = l_Lean_Syntax_matchesNull(v___x_985_, v___x_968_);
if (v___x_986_ == 0)
{
v_x_961_ = v_tail_964_;
goto _start;
}
else
{
lean_dec(v_tail_964_);
return v___x_986_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__5___boxed(lean_object* v_x_988_){
_start:
{
uint8_t v_res_989_; lean_object* v_r_990_; 
v_res_989_ = l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__5(v_x_988_);
v_r_990_ = lean_box(v_res_989_);
return v_r_990_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__0(lean_object* v_x_991_){
_start:
{
if (lean_obj_tag(v_x_991_) == 0)
{
uint8_t v___x_992_; 
v___x_992_ = 0;
return v___x_992_;
}
else
{
lean_object* v_head_993_; lean_object* v_tail_994_; uint8_t v___x_995_; 
v_head_993_ = lean_ctor_get(v_x_991_, 0);
v_tail_994_ = lean_ctor_get(v_x_991_, 1);
v___x_995_ = l_Lean_isPrivateName(v_head_993_);
if (v___x_995_ == 0)
{
v_x_991_ = v_tail_994_;
goto _start;
}
else
{
return v___x_995_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__0___boxed(lean_object* v_x_997_){
_start:
{
uint8_t v_res_998_; lean_object* v_r_999_; 
v_res_998_ = l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__0(v_x_997_);
lean_dec(v_x_997_);
v_r_999_ = lean_box(v_res_998_);
return v_r_999_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__3(lean_object* v_as_1000_, size_t v_i_1001_, size_t v_stop_1002_){
_start:
{
uint8_t v___x_1003_; 
v___x_1003_ = lean_usize_dec_eq(v_i_1001_, v_stop_1002_);
if (v___x_1003_ == 0)
{
lean_object* v___x_1004_; lean_object* v_ctors_1005_; uint8_t v___x_1006_; 
v___x_1004_ = lean_array_uget_borrowed(v_as_1000_, v_i_1001_);
v_ctors_1005_ = lean_ctor_get(v___x_1004_, 4);
v___x_1006_ = l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__0(v_ctors_1005_);
if (v___x_1006_ == 0)
{
size_t v___x_1007_; size_t v___x_1008_; 
v___x_1007_ = ((size_t)1ULL);
v___x_1008_ = lean_usize_add(v_i_1001_, v___x_1007_);
v_i_1001_ = v___x_1008_;
goto _start;
}
else
{
return v___x_1006_;
}
}
else
{
uint8_t v___x_1010_; 
v___x_1010_ = 0;
return v___x_1010_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__3___boxed(lean_object* v_as_1011_, lean_object* v_i_1012_, lean_object* v_stop_1013_){
_start:
{
size_t v_i_boxed_1014_; size_t v_stop_boxed_1015_; uint8_t v_res_1016_; lean_object* v_r_1017_; 
v_i_boxed_1014_ = lean_unbox_usize(v_i_1012_);
lean_dec(v_i_1012_);
v_stop_boxed_1015_ = lean_unbox_usize(v_stop_1013_);
lean_dec(v_stop_1013_);
v_res_1016_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__3(v_as_1011_, v_i_boxed_1014_, v_stop_boxed_1015_);
lean_dec_ref(v_as_1011_);
v_r_1017_ = lean_box(v_res_1016_);
return v_r_1017_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__2(void){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = ((lean_object*)(l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__1));
v___x_1022_ = l_Lean_stringToMessageData(v___x_1021_);
return v___x_1022_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__4(void){
_start:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = ((lean_object*)(l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__3));
v___x_1025_ = l_Lean_stringToMessageData(v___x_1024_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg(lean_object* v_typeName_1026_, lean_object* v_cont_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_){
_start:
{
lean_object* v___x_1031_; 
lean_inc(v_typeName_1026_);
v___x_1031_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1(v_typeName_1026_, v_a_1028_, v_a_1029_);
if (lean_obj_tag(v___x_1031_) == 0)
{
lean_object* v_a_1032_; lean_object* v_all_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; 
v_a_1032_ = lean_ctor_get(v___x_1031_, 0);
lean_inc(v_a_1032_);
lean_dec_ref_known(v___x_1031_, 1);
v_all_1033_ = lean_ctor_get(v_a_1032_, 3);
lean_inc(v_all_1033_);
lean_dec(v_a_1032_);
v___x_1034_ = lean_unsigned_to_nat(0u);
v___x_1035_ = ((lean_object*)(l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__0));
v___x_1036_ = l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2___redArg(v_all_1033_, v___x_1035_, v_a_1028_, v_a_1029_);
lean_dec(v_all_1033_);
if (lean_obj_tag(v___x_1036_) == 0)
{
lean_object* v_a_1037_; lean_object* v___x_1038_; uint8_t v___x_1039_; 
v_a_1037_ = lean_ctor_get(v___x_1036_, 0);
lean_inc(v_a_1037_);
lean_dec_ref_known(v___x_1036_, 1);
v___x_1038_ = lean_array_get_size(v_a_1037_);
v___x_1039_ = lean_nat_dec_lt(v___x_1034_, v___x_1038_);
if (v___x_1039_ == 0)
{
lean_object* v___x_1040_; 
lean_dec(v_a_1037_);
lean_dec(v_typeName_1026_);
lean_inc(v_a_1029_);
lean_inc_ref(v_a_1028_);
v___x_1040_ = lean_apply_3(v_cont_1027_, v_a_1028_, v_a_1029_, lean_box(0));
return v___x_1040_;
}
else
{
if (v___x_1039_ == 0)
{
lean_object* v___x_1041_; 
lean_dec(v_a_1037_);
lean_dec(v_typeName_1026_);
lean_inc(v_a_1029_);
lean_inc_ref(v_a_1028_);
v___x_1041_ = lean_apply_3(v_cont_1027_, v_a_1028_, v_a_1029_, lean_box(0));
return v___x_1041_;
}
else
{
size_t v___x_1042_; size_t v___x_1043_; uint8_t v___x_1044_; 
v___x_1042_ = ((size_t)0ULL);
v___x_1043_ = lean_usize_of_nat(v___x_1038_);
v___x_1044_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__3(v_a_1037_, v___x_1042_, v___x_1043_);
lean_dec(v_a_1037_);
if (v___x_1044_ == 0)
{
lean_object* v___x_1045_; 
lean_dec(v_typeName_1026_);
lean_inc(v_a_1029_);
lean_inc_ref(v_a_1028_);
v___x_1045_ = lean_apply_3(v_cont_1027_, v_a_1028_, v_a_1029_, lean_box(0));
return v___x_1045_;
}
else
{
lean_object* v___x_1046_; lean_object* v___f_1047_; uint8_t v___x_1048_; 
v___x_1046_ = lean_box(v___x_1044_);
v___f_1047_ = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1047_, 0, v___x_1046_);
v___x_1048_ = l_Lean_isPrivateName(v_typeName_1026_);
if (v___x_1048_ == 0)
{
lean_object* v___x_1049_; 
v___x_1049_ = l_Lean_Elab_Command_getScope___redArg(v_a_1029_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; lean_object* v_attrs_1051_; uint8_t v___x_1052_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
lean_inc(v_a_1050_);
lean_dec_ref_known(v___x_1049_, 1);
v_attrs_1051_ = lean_ctor_get(v_a_1050_, 9);
lean_inc(v_attrs_1051_);
lean_dec(v_a_1050_);
v___x_1052_ = l_List_any___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__5(v_attrs_1051_);
if (v___x_1052_ == 0)
{
lean_object* v___x_1053_; 
lean_dec(v_typeName_1026_);
v___x_1053_ = l_Lean_Elab_Command_withScope___redArg(v___f_1047_, v_cont_1027_, v_a_1028_, v_a_1029_);
return v___x_1053_;
}
else
{
lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v_a_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1067_; 
lean_dec_ref(v___f_1047_);
lean_dec_ref(v_cont_1027_);
v___x_1054_ = lean_obj_once(&l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__2, &l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__2_once, _init_l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__2);
v___x_1055_ = l_Lean_MessageData_ofConstName(v_typeName_1026_, v___x_1048_);
v___x_1056_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1054_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
v___x_1057_ = lean_obj_once(&l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__4, &l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__4_once, _init_l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__4);
v___x_1058_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1056_);
lean_ctor_set(v___x_1058_, 1, v___x_1057_);
v___x_1059_ = l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___redArg(v___x_1058_, v_a_1028_, v_a_1029_);
v_a_1060_ = lean_ctor_get(v___x_1059_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1059_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1062_ = v___x_1059_;
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_a_1060_);
lean_dec(v___x_1059_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1065_; 
if (v_isShared_1063_ == 0)
{
v___x_1065_ = v___x_1062_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_a_1060_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
}
else
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
lean_dec_ref(v___f_1047_);
lean_dec_ref(v_cont_1027_);
lean_dec(v_typeName_1026_);
v_a_1068_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1070_ = v___x_1049_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1049_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_a_1068_);
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
lean_object* v___x_1076_; 
lean_dec(v_typeName_1026_);
v___x_1076_ = l_Lean_Elab_Command_withScope___redArg(v___f_1047_, v_cont_1027_, v_a_1028_, v_a_1029_);
return v___x_1076_;
}
}
}
}
}
else
{
lean_object* v_a_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1084_; 
lean_dec_ref(v_cont_1027_);
lean_dec(v_typeName_1026_);
v_a_1077_ = lean_ctor_get(v___x_1036_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v___x_1036_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1079_ = v___x_1036_;
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_a_1077_);
lean_dec(v___x_1036_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1082_; 
if (v_isShared_1080_ == 0)
{
v___x_1082_ = v___x_1079_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_a_1077_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
return v___x_1082_;
}
}
}
}
else
{
lean_object* v_a_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1092_; 
lean_dec_ref(v_cont_1027_);
lean_dec(v_typeName_1026_);
v_a_1085_ = lean_ctor_get(v___x_1031_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v___x_1031_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1087_ = v___x_1031_;
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_a_1085_);
lean_dec(v___x_1031_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1090_; 
if (v_isShared_1088_ == 0)
{
v___x_1090_ = v___x_1087_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v_a_1085_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___boxed(lean_object* v_typeName_1093_, lean_object* v_cont_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg(v_typeName_1093_, v_cont_1094_, v_a_1095_, v_a_1096_);
lean_dec(v_a_1096_);
lean_dec_ref(v_a_1095_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors(lean_object* v_00_u03b1_1099_, lean_object* v_typeName_1100_, lean_object* v_cont_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_){
_start:
{
lean_object* v___x_1105_; 
v___x_1105_ = l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg(v_typeName_1100_, v_cont_1101_, v_a_1102_, v_a_1103_);
return v___x_1105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtors___boxed(lean_object* v_00_u03b1_1106_, lean_object* v_typeName_1107_, lean_object* v_cont_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l_Lean_Elab_Deriving_withoutExposeFromCtors(v_00_u03b1_1106_, v_typeName_1107_, v_cont_1108_, v_a_1109_, v_a_1110_);
lean_dec(v_a_1110_);
lean_dec_ref(v_a_1109_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2(lean_object* v_as_1113_, lean_object* v_as_x27_1114_, lean_object* v_b_1115_, lean_object* v_a_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_){
_start:
{
lean_object* v___x_1120_; 
v___x_1120_ = l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2___redArg(v_as_x27_1114_, v_b_1115_, v___y_1117_, v___y_1118_);
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2___boxed(lean_object* v_as_1121_, lean_object* v_as_x27_1122_, lean_object* v_b_1123_, lean_object* v_a_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__2(v_as_1121_, v_as_x27_1122_, v_b_1123_, v_a_1124_, v___y_1125_, v___y_1126_);
lean_dec(v___y_1126_);
lean_dec_ref(v___y_1125_);
lean_dec(v_as_x27_1122_);
lean_dec(v_as_1121_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6(lean_object* v_msgData_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_){
_start:
{
lean_object* v___x_1133_; 
v___x_1133_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg(v_msgData_1129_, v___y_1131_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___boxed(lean_object* v_msgData_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_){
_start:
{
lean_object* v_res_1138_; 
v_res_1138_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6(v_msgData_1134_, v___y_1135_, v___y_1136_);
lean_dec(v___y_1136_);
lean_dec_ref(v___y_1135_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6(lean_object* v_00_u03b1_1139_, lean_object* v_msg_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_){
_start:
{
lean_object* v___x_1144_; 
v___x_1144_ = l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___redArg(v_msg_1140_, v___y_1141_, v___y_1142_);
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6___boxed(lean_object* v_00_u03b1_1145_, lean_object* v_msg_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6(v_00_u03b1_1145_, v_msg_1146_, v___y_1147_, v___y_1148_);
lean_dec(v___y_1148_);
lean_dec_ref(v___y_1147_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7(lean_object* v_msgData_1151_, lean_object* v_macroStack_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_){
_start:
{
lean_object* v___x_1156_; 
v___x_1156_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg(v_msgData_1151_, v_macroStack_1152_, v___y_1154_);
return v___x_1156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___boxed(lean_object* v_msgData_1157_, lean_object* v_macroStack_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_){
_start:
{
lean_object* v_res_1162_; 
v_res_1162_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7(v_msgData_1157_, v_macroStack_1158_, v___y_1159_, v___y_1160_);
lean_dec(v___y_1160_);
lean_dec_ref(v___y_1159_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_withoutExposeFromCtorsAll_spec__0___redArg___lam__0(lean_object* v___x_1163_, lean_object* v_b_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_){
_start:
{
lean_object* v___x_1168_; 
v___x_1168_ = l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg(v___x_1163_, v_b_1164_, v___y_1165_, v___y_1166_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_withoutExposeFromCtorsAll_spec__0___redArg___lam__0___boxed(lean_object* v___x_1169_, lean_object* v_b_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
lean_object* v_res_1174_; 
v_res_1174_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_withoutExposeFromCtorsAll_spec__0___redArg___lam__0(v___x_1169_, v_b_1170_, v___y_1171_, v___y_1172_);
lean_dec(v___y_1172_);
lean_dec_ref(v___y_1171_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_withoutExposeFromCtorsAll_spec__0___redArg(lean_object* v_as_1175_, size_t v_i_1176_, size_t v_stop_1177_, lean_object* v_b_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_){
_start:
{
uint8_t v___x_1182_; 
v___x_1182_ = lean_usize_dec_eq(v_i_1176_, v_stop_1177_);
if (v___x_1182_ == 0)
{
size_t v___x_1183_; size_t v___x_1184_; lean_object* v___x_1185_; lean_object* v___f_1186_; 
v___x_1183_ = ((size_t)1ULL);
v___x_1184_ = lean_usize_sub(v_i_1176_, v___x_1183_);
v___x_1185_ = lean_array_uget_borrowed(v_as_1175_, v___x_1184_);
lean_inc(v___x_1185_);
v___f_1186_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_withoutExposeFromCtorsAll_spec__0___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_1186_, 0, v___x_1185_);
lean_closure_set(v___f_1186_, 1, v_b_1178_);
v_i_1176_ = v___x_1184_;
v_b_1178_ = v___f_1186_;
goto _start;
}
else
{
lean_object* v___x_1188_; 
lean_inc(v___y_1180_);
lean_inc_ref(v___y_1179_);
v___x_1188_ = lean_apply_3(v_b_1178_, v___y_1179_, v___y_1180_, lean_box(0));
return v___x_1188_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_withoutExposeFromCtorsAll_spec__0___redArg___boxed(lean_object* v_as_1189_, lean_object* v_i_1190_, lean_object* v_stop_1191_, lean_object* v_b_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
size_t v_i_boxed_1196_; size_t v_stop_boxed_1197_; lean_object* v_res_1198_; 
v_i_boxed_1196_ = lean_unbox_usize(v_i_1190_);
lean_dec(v_i_1190_);
v_stop_boxed_1197_ = lean_unbox_usize(v_stop_1191_);
lean_dec(v_stop_1191_);
v_res_1198_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_withoutExposeFromCtorsAll_spec__0___redArg(v_as_1189_, v_i_boxed_1196_, v_stop_boxed_1197_, v_b_1192_, v___y_1193_, v___y_1194_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
lean_dec_ref(v_as_1189_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtorsAll___redArg(lean_object* v_typeNames_1199_, lean_object* v_cont_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_){
_start:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; uint8_t v___x_1206_; 
v___x_1204_ = lean_array_get_size(v_typeNames_1199_);
v___x_1205_ = lean_unsigned_to_nat(0u);
v___x_1206_ = lean_nat_dec_lt(v___x_1205_, v___x_1204_);
if (v___x_1206_ == 0)
{
lean_object* v___x_1207_; 
lean_inc(v_a_1202_);
lean_inc_ref(v_a_1201_);
v___x_1207_ = lean_apply_3(v_cont_1200_, v_a_1201_, v_a_1202_, lean_box(0));
return v___x_1207_;
}
else
{
size_t v___x_1208_; size_t v___x_1209_; lean_object* v___x_1210_; 
v___x_1208_ = lean_usize_of_nat(v___x_1204_);
v___x_1209_ = ((size_t)0ULL);
v___x_1210_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_withoutExposeFromCtorsAll_spec__0___redArg(v_typeNames_1199_, v___x_1208_, v___x_1209_, v_cont_1200_, v_a_1201_, v_a_1202_);
return v___x_1210_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtorsAll___redArg___boxed(lean_object* v_typeNames_1211_, lean_object* v_cont_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l_Lean_Elab_Deriving_withoutExposeFromCtorsAll___redArg(v_typeNames_1211_, v_cont_1212_, v_a_1213_, v_a_1214_);
lean_dec(v_a_1214_);
lean_dec_ref(v_a_1213_);
lean_dec_ref(v_typeNames_1211_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtorsAll(lean_object* v_00_u03b1_1217_, lean_object* v_typeNames_1218_, lean_object* v_cont_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_){
_start:
{
lean_object* v___x_1223_; 
v___x_1223_ = l_Lean_Elab_Deriving_withoutExposeFromCtorsAll___redArg(v_typeNames_1218_, v_cont_1219_, v_a_1220_, v_a_1221_);
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_withoutExposeFromCtorsAll___boxed(lean_object* v_00_u03b1_1224_, lean_object* v_typeNames_1225_, lean_object* v_cont_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_){
_start:
{
lean_object* v_res_1230_; 
v_res_1230_ = l_Lean_Elab_Deriving_withoutExposeFromCtorsAll(v_00_u03b1_1224_, v_typeNames_1225_, v_cont_1226_, v_a_1227_, v_a_1228_);
lean_dec(v_a_1228_);
lean_dec_ref(v_a_1227_);
lean_dec_ref(v_typeNames_1225_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_withoutExposeFromCtorsAll_spec__0(lean_object* v_00_u03b1_1231_, lean_object* v_as_1232_, size_t v_i_1233_, size_t v_stop_1234_, lean_object* v_b_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_){
_start:
{
lean_object* v___x_1239_; 
v___x_1239_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_withoutExposeFromCtorsAll_spec__0___redArg(v_as_1232_, v_i_1233_, v_stop_1234_, v_b_1235_, v___y_1236_, v___y_1237_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_withoutExposeFromCtorsAll_spec__0___boxed(lean_object* v_00_u03b1_1240_, lean_object* v_as_1241_, lean_object* v_i_1242_, lean_object* v_stop_1243_, lean_object* v_b_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_){
_start:
{
size_t v_i_boxed_1248_; size_t v_stop_boxed_1249_; lean_object* v_res_1250_; 
v_i_boxed_1248_ = lean_unbox_usize(v_i_1242_);
lean_dec(v_i_1242_);
v_stop_boxed_1249_ = lean_unbox_usize(v_stop_1243_);
lean_dec(v_stop_1243_);
v_res_1250_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_withoutExposeFromCtorsAll_spec__0(v_00_u03b1_1240_, v_as_1241_, v_i_boxed_1248_, v_stop_boxed_1249_, v_b_1244_, v___y_1245_, v___y_1246_);
lean_dec(v___y_1246_);
lean_dec_ref(v___y_1245_);
lean_dec_ref(v_as_1241_);
return v_res_1250_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInstName_spec__1(size_t v_sz_1251_, size_t v_i_1252_, lean_object* v_bs_1253_){
_start:
{
uint8_t v___x_1254_; 
v___x_1254_ = lean_usize_dec_lt(v_i_1252_, v_sz_1251_);
if (v___x_1254_ == 0)
{
return v_bs_1253_;
}
else
{
lean_object* v_v_1255_; lean_object* v___x_1256_; lean_object* v_bs_x27_1257_; size_t v___x_1258_; size_t v___x_1259_; lean_object* v___x_1260_; 
v_v_1255_ = lean_array_uget(v_bs_1253_, v_i_1252_);
v___x_1256_ = lean_unsigned_to_nat(0u);
v_bs_x27_1257_ = lean_array_uset(v_bs_1253_, v_i_1252_, v___x_1256_);
v___x_1258_ = ((size_t)1ULL);
v___x_1259_ = lean_usize_add(v_i_1252_, v___x_1258_);
v___x_1260_ = lean_array_uset(v_bs_x27_1257_, v_i_1252_, v_v_1255_);
v_i_1252_ = v___x_1259_;
v_bs_1253_ = v___x_1260_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInstName_spec__1___boxed(lean_object* v_sz_1262_, lean_object* v_i_1263_, lean_object* v_bs_1264_){
_start:
{
size_t v_sz_boxed_1265_; size_t v_i_boxed_1266_; lean_object* v_res_1267_; 
v_sz_boxed_1265_ = lean_unbox_usize(v_sz_1262_);
lean_dec(v_sz_1262_);
v_i_boxed_1266_ = lean_unbox_usize(v_i_1263_);
lean_dec(v_i_1263_);
v_res_1267_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInstName_spec__1(v_sz_boxed_1265_, v_i_boxed_1266_, v_bs_1264_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__1(lean_object* v_msgData_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
lean_object* v___x_1274_; lean_object* v_env_1275_; uint8_t v___x_1276_; lean_object* v_env_1277_; lean_object* v___x_1278_; lean_object* v_toCold_1279_; lean_object* v_mctx_1280_; lean_object* v_lctx_1281_; lean_object* v_options_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
v___x_1274_ = lean_st_ref_get(v___y_1272_);
v_env_1275_ = lean_ctor_get(v___x_1274_, 0);
lean_inc_ref(v_env_1275_);
lean_dec(v___x_1274_);
v___x_1276_ = 0;
v_env_1277_ = l_Lean_Environment_setRecordingDeps(v_env_1275_, v___x_1276_);
v___x_1278_ = lean_st_ref_get(v___y_1270_);
v_toCold_1279_ = lean_ctor_get(v___y_1271_, 0);
v_mctx_1280_ = lean_ctor_get(v___x_1278_, 0);
lean_inc_ref(v_mctx_1280_);
lean_dec(v___x_1278_);
v_lctx_1281_ = lean_ctor_get(v___y_1269_, 2);
v_options_1282_ = lean_ctor_get(v_toCold_1279_, 2);
lean_inc_ref(v_options_1282_);
lean_inc_ref(v_lctx_1281_);
v___x_1283_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1283_, 0, v_env_1277_);
lean_ctor_set(v___x_1283_, 1, v_mctx_1280_);
lean_ctor_set(v___x_1283_, 2, v_lctx_1281_);
lean_ctor_set(v___x_1283_, 3, v_options_1282_);
v___x_1284_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1284_, 0, v___x_1283_);
lean_ctor_set(v___x_1284_, 1, v_msgData_1268_);
v___x_1285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1284_);
return v___x_1285_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_){
_start:
{
lean_object* v_res_1292_; 
v_res_1292_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__1(v_msgData_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_);
lean_dec(v___y_1290_);
lean_dec_ref(v___y_1289_);
lean_dec(v___y_1288_);
lean_dec_ref(v___y_1287_);
return v_res_1292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2___redArg(lean_object* v_msgData_1293_, lean_object* v_macroStack_1294_, lean_object* v___y_1295_){
_start:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; uint8_t v___x_1299_; 
v___x_1297_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1295_);
v___x_1298_ = l_Lean_Elab_pp_macroStack;
v___x_1299_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__8(v___x_1297_, v___x_1298_);
lean_dec_ref(v___x_1297_);
if (v___x_1299_ == 0)
{
lean_object* v___x_1300_; 
lean_dec(v_macroStack_1294_);
v___x_1300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1300_, 0, v_msgData_1293_);
return v___x_1300_;
}
else
{
if (lean_obj_tag(v_macroStack_1294_) == 0)
{
lean_object* v___x_1301_; 
v___x_1301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1301_, 0, v_msgData_1293_);
return v___x_1301_;
}
else
{
lean_object* v_head_1302_; lean_object* v_after_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1318_; 
v_head_1302_ = lean_ctor_get(v_macroStack_1294_, 0);
lean_inc(v_head_1302_);
v_after_1303_ = lean_ctor_get(v_head_1302_, 1);
v_isSharedCheck_1318_ = !lean_is_exclusive(v_head_1302_);
if (v_isSharedCheck_1318_ == 0)
{
lean_object* v_unused_1319_; 
v_unused_1319_ = lean_ctor_get(v_head_1302_, 0);
lean_dec(v_unused_1319_);
v___x_1305_ = v_head_1302_;
v_isShared_1306_ = v_isSharedCheck_1318_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_after_1303_);
lean_dec(v_head_1302_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1318_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1307_; lean_object* v___x_1309_; 
v___x_1307_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9___closed__0);
if (v_isShared_1306_ == 0)
{
lean_ctor_set_tag(v___x_1305_, 7);
lean_ctor_set(v___x_1305_, 1, v___x_1307_);
lean_ctor_set(v___x_1305_, 0, v_msgData_1293_);
v___x_1309_ = v___x_1305_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_msgData_1293_);
lean_ctor_set(v_reuseFailAlloc_1317_, 1, v___x_1307_);
v___x_1309_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v_msgData_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1310_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7___redArg___closed__2);
v___x_1311_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1309_);
lean_ctor_set(v___x_1311_, 1, v___x_1310_);
v___x_1312_ = l_Lean_MessageData_ofSyntax(v_after_1303_);
v___x_1313_ = l_Lean_indentD(v___x_1312_);
v_msgData_1314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1314_, 0, v___x_1311_);
lean_ctor_set(v_msgData_1314_, 1, v___x_1313_);
v___x_1315_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__7_spec__9(v_msgData_1314_, v_macroStack_1294_);
v___x_1316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1315_);
return v___x_1316_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_msgData_1320_, lean_object* v_macroStack_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_){
_start:
{
lean_object* v_res_1324_; 
v_res_1324_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2___redArg(v_msgData_1320_, v_macroStack_1321_, v___y_1322_);
lean_dec_ref(v___y_1322_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0___redArg(lean_object* v_msg_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v_ref_1333_; lean_object* v_macroStack_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v_a_1337_; lean_object* v___x_1338_; lean_object* v_a_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1347_; 
v_ref_1333_ = lean_ctor_get(v___y_1330_, 2);
v_macroStack_1334_ = lean_ctor_get(v___y_1326_, 1);
v___x_1335_ = l_Lean_Elab_getBetterRef(v_ref_1333_, v_macroStack_1334_);
v___x_1336_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__1(v_msg_1325_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_);
v_a_1337_ = lean_ctor_get(v___x_1336_, 0);
lean_inc(v_a_1337_);
lean_dec_ref(v___x_1336_);
lean_inc(v_macroStack_1334_);
v___x_1338_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2___redArg(v_a_1337_, v_macroStack_1334_, v___y_1330_);
v_a_1339_ = lean_ctor_get(v___x_1338_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1338_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1341_ = v___x_1338_;
v_isShared_1342_ = v_isSharedCheck_1347_;
goto v_resetjp_1340_;
}
else
{
lean_inc(v_a_1339_);
lean_dec(v___x_1338_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1347_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v___x_1343_; lean_object* v___x_1345_; 
v___x_1343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1335_);
lean_ctor_set(v___x_1343_, 1, v_a_1339_);
if (v_isShared_1342_ == 0)
{
lean_ctor_set_tag(v___x_1341_, 1);
lean_ctor_set(v___x_1341_, 0, v___x_1343_);
v___x_1345_ = v___x_1341_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v___x_1343_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0___redArg___boxed(lean_object* v_msg_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
lean_object* v_res_1356_; 
v_res_1356_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0___redArg(v_msg_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
lean_dec(v___y_1350_);
lean_dec_ref(v___y_1349_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0(lean_object* v_constName_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_){
_start:
{
lean_object* v___x_1365_; lean_object* v_env_1366_; lean_object* v___x_1367_; 
v___x_1365_ = lean_st_ref_get(v___y_1363_);
v_env_1366_ = lean_ctor_get(v___x_1365_, 0);
lean_inc_ref(v_env_1366_);
lean_dec(v___x_1365_);
lean_inc(v_constName_1357_);
v___x_1367_ = l_Lean_isInductiveCore_x3f(v_env_1366_, v_constName_1357_);
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_object* v___x_1368_; uint8_t v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___x_1368_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1);
v___x_1369_ = 0;
v___x_1370_ = l_Lean_MessageData_ofConstName(v_constName_1357_, v___x_1369_);
v___x_1371_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1371_, 0, v___x_1368_);
lean_ctor_set(v___x_1371_, 1, v___x_1370_);
v___x_1372_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3, &l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3);
v___x_1373_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1373_, 0, v___x_1371_);
lean_ctor_set(v___x_1373_, 1, v___x_1372_);
v___x_1374_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0___redArg(v___x_1373_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_);
return v___x_1374_;
}
else
{
lean_object* v_val_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1382_; 
lean_dec(v_constName_1357_);
v_val_1375_ = lean_ctor_get(v___x_1367_, 0);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1377_ = v___x_1367_;
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_val_1375_);
lean_dec(v___x_1367_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1380_; 
if (v_isShared_1378_ == 0)
{
lean_ctor_set_tag(v___x_1377_, 0);
v___x_1380_ = v___x_1377_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v_val_1375_);
v___x_1380_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
return v___x_1380_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0___boxed(lean_object* v_constName_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_){
_start:
{
lean_object* v_res_1391_; 
v_res_1391_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0(v_constName_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_);
lean_dec(v___y_1389_);
lean_dec_ref(v___y_1388_);
lean_dec(v___y_1387_);
lean_dec_ref(v___y_1386_);
lean_dec(v___y_1385_);
lean_dec_ref(v___y_1384_);
return v_res_1391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstName(lean_object* v_className_1393_, lean_object* v_indName_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_, lean_object* v_a_1397_, lean_object* v_a_1398_, lean_object* v_a_1399_, lean_object* v_a_1400_){
_start:
{
lean_object* v___x_1402_; 
v___x_1402_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0(v_indName_1394_, v_a_1395_, v_a_1396_, v_a_1397_, v_a_1398_, v_a_1399_, v_a_1400_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_object* v_a_1403_; lean_object* v___x_1404_; 
v_a_1403_ = lean_ctor_get(v___x_1402_, 0);
lean_inc_n(v_a_1403_, 2);
lean_dec_ref_known(v___x_1402_, 1);
v___x_1404_ = l_Lean_Elab_Deriving_mkInductArgNames(v_a_1403_, v_a_1395_, v_a_1396_, v_a_1397_, v_a_1398_, v_a_1399_, v_a_1400_);
if (lean_obj_tag(v___x_1404_) == 0)
{
lean_object* v_a_1405_; lean_object* v___x_1406_; 
v_a_1405_ = lean_ctor_get(v___x_1404_, 0);
lean_inc_n(v_a_1405_, 2);
lean_dec_ref_known(v___x_1404_, 1);
v___x_1406_ = l_Lean_Elab_Deriving_mkImplicitBinders(v_a_1405_, v_a_1395_, v_a_1396_, v_a_1397_, v_a_1398_, v_a_1399_, v_a_1400_);
if (lean_obj_tag(v___x_1406_) == 0)
{
lean_object* v_a_1407_; lean_object* v___x_1408_; lean_object* v_a_1409_; lean_object* v_ref_1410_; uint8_t v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; size_t v_sz_1419_; size_t v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; 
v_a_1407_ = lean_ctor_get(v___x_1406_, 0);
lean_inc(v_a_1407_);
lean_dec_ref_known(v___x_1406_, 1);
v___x_1408_ = l_Lean_Elab_Deriving_mkInductiveApp___redArg(v_a_1403_, v_a_1405_, v_a_1399_);
v_a_1409_ = lean_ctor_get(v___x_1408_, 0);
lean_inc(v_a_1409_);
lean_dec_ref(v___x_1408_);
v_ref_1410_ = lean_ctor_get(v_a_1399_, 2);
v___x_1411_ = 0;
v___x_1412_ = l_Lean_SourceInfo_fromRef(v_ref_1410_, v___x_1411_);
v___x_1413_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4));
v___x_1414_ = l_Lean_mkCIdent(v_className_1393_);
v___x_1415_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9));
lean_inc(v___x_1412_);
v___x_1416_ = l_Lean_Syntax_node1(v___x_1412_, v___x_1415_, v_a_1409_);
v___x_1417_ = l_Lean_Syntax_node2(v___x_1412_, v___x_1413_, v___x_1414_, v___x_1416_);
v___x_1418_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInstName___closed__0));
v_sz_1419_ = lean_array_size(v_a_1407_);
v___x_1420_ = ((size_t)0ULL);
v___x_1421_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkInstName_spec__1(v_sz_1419_, v___x_1420_, v_a_1407_);
v___x_1422_ = l_Lean_Elab_Command_NameGen_mkBaseNameWithSuffix_x27(v___x_1418_, v___x_1421_, v___x_1417_, v_a_1395_, v_a_1396_, v_a_1397_, v_a_1398_, v_a_1399_, v_a_1400_);
return v___x_1422_;
}
else
{
lean_object* v_a_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1430_; 
lean_dec(v_a_1405_);
lean_dec(v_a_1403_);
lean_dec(v_className_1393_);
v_a_1423_ = lean_ctor_get(v___x_1406_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1406_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1425_ = v___x_1406_;
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_a_1423_);
lean_dec(v___x_1406_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1428_; 
if (v_isShared_1426_ == 0)
{
v___x_1428_ = v___x_1425_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_a_1423_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
}
}
else
{
lean_object* v_a_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1438_; 
lean_dec(v_a_1403_);
lean_dec(v_className_1393_);
v_a_1431_ = lean_ctor_get(v___x_1404_, 0);
v_isSharedCheck_1438_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1438_ == 0)
{
v___x_1433_ = v___x_1404_;
v_isShared_1434_ = v_isSharedCheck_1438_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_a_1431_);
lean_dec(v___x_1404_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1438_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1436_; 
if (v_isShared_1434_ == 0)
{
v___x_1436_ = v___x_1433_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v_a_1431_);
v___x_1436_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
return v___x_1436_;
}
}
}
}
else
{
lean_object* v_a_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1446_; 
lean_dec(v_className_1393_);
v_a_1439_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1446_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1441_ = v___x_1402_;
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_a_1439_);
lean_dec(v___x_1402_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
lean_object* v___x_1444_; 
if (v_isShared_1442_ == 0)
{
v___x_1444_ = v___x_1441_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v_a_1439_);
v___x_1444_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
return v___x_1444_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstName___boxed(lean_object* v_className_1447_, lean_object* v_indName_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_, lean_object* v_a_1452_, lean_object* v_a_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_){
_start:
{
lean_object* v_res_1456_; 
v_res_1456_ = l_Lean_Elab_Deriving_mkInstName(v_className_1447_, v_indName_1448_, v_a_1449_, v_a_1450_, v_a_1451_, v_a_1452_, v_a_1453_, v_a_1454_);
lean_dec(v_a_1454_);
lean_dec_ref(v_a_1453_);
lean_dec(v_a_1452_);
lean_dec_ref(v_a_1451_);
lean_dec(v_a_1450_);
lean_dec_ref(v_a_1449_);
return v_res_1456_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0(lean_object* v_00_u03b1_1457_, lean_object* v_msg_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_){
_start:
{
lean_object* v___x_1466_; 
v___x_1466_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0___redArg(v_msg_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1467_, lean_object* v_msg_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_){
_start:
{
lean_object* v_res_1476_; 
v_res_1476_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0(v_00_u03b1_1467_, v_msg_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_);
lean_dec(v___y_1474_);
lean_dec_ref(v___y_1473_);
lean_dec(v___y_1472_);
lean_dec_ref(v___y_1471_);
lean_dec(v___y_1470_);
lean_dec_ref(v___y_1469_);
return v_res_1476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2(lean_object* v_msgData_1477_, lean_object* v_macroStack_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_){
_start:
{
lean_object* v___x_1486_; 
v___x_1486_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2___redArg(v_msgData_1477_, v_macroStack_1478_, v___y_1483_);
return v___x_1486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2___boxed(lean_object* v_msgData_1487_, lean_object* v_macroStack_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__2(v_msgData_1487_, v_macroStack_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
lean_dec(v___y_1492_);
lean_dec_ref(v___y_1491_);
lean_dec(v___y_1490_);
lean_dec_ref(v___y_1489_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0___redArg(lean_object* v_as_x27_1497_, lean_object* v_b_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_){
_start:
{
if (lean_obj_tag(v_as_x27_1497_) == 0)
{
lean_object* v___x_1506_; 
v___x_1506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1506_, 0, v_b_1498_);
return v___x_1506_;
}
else
{
lean_object* v_head_1507_; lean_object* v_tail_1508_; lean_object* v___x_1509_; 
v_head_1507_ = lean_ctor_get(v_as_x27_1497_, 0);
v_tail_1508_ = lean_ctor_get(v_as_x27_1497_, 1);
lean_inc(v_head_1507_);
v___x_1509_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0(v_head_1507_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_);
if (lean_obj_tag(v___x_1509_) == 0)
{
lean_object* v_a_1510_; lean_object* v___x_1511_; 
v_a_1510_ = lean_ctor_get(v___x_1509_, 0);
lean_inc(v_a_1510_);
lean_dec_ref_known(v___x_1509_, 1);
v___x_1511_ = lean_array_push(v_b_1498_, v_a_1510_);
v_as_x27_1497_ = v_tail_1508_;
v_b_1498_ = v___x_1511_;
goto _start;
}
else
{
lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1520_; 
lean_dec_ref(v_b_1498_);
v_a_1513_ = lean_ctor_get(v___x_1509_, 0);
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1515_ = v___x_1509_;
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_dec(v___x_1509_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1518_; 
if (v_isShared_1516_ == 0)
{
v___x_1518_ = v___x_1515_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_a_1513_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0___redArg___boxed(lean_object* v_as_x27_1521_, lean_object* v_b_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_){
_start:
{
lean_object* v_res_1530_; 
v_res_1530_ = l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0___redArg(v_as_x27_1521_, v_b_1522_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_);
lean_dec(v___y_1528_);
lean_dec_ref(v___y_1527_);
lean_dec(v___y_1526_);
lean_dec_ref(v___y_1525_);
lean_dec(v___y_1524_);
lean_dec_ref(v___y_1523_);
lean_dec(v_as_x27_1521_);
return v_res_1530_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Deriving_mkContext_spec__1(lean_object* v_a_1531_, lean_object* v_a_1532_){
_start:
{
if (lean_obj_tag(v_a_1531_) == 0)
{
lean_object* v___x_1533_; 
v___x_1533_ = l_List_reverse___redArg(v_a_1532_);
return v___x_1533_;
}
else
{
lean_object* v_head_1534_; lean_object* v_tail_1535_; lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1544_; 
v_head_1534_ = lean_ctor_get(v_a_1531_, 0);
v_tail_1535_ = lean_ctor_get(v_a_1531_, 1);
v_isSharedCheck_1544_ = !lean_is_exclusive(v_a_1531_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1537_ = v_a_1531_;
v_isShared_1538_ = v_isSharedCheck_1544_;
goto v_resetjp_1536_;
}
else
{
lean_inc(v_tail_1535_);
lean_inc(v_head_1534_);
lean_dec(v_a_1531_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1544_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
lean_object* v___x_1539_; lean_object* v___x_1541_; 
v___x_1539_ = l_Lean_MessageData_ofName(v_head_1534_);
if (v_isShared_1538_ == 0)
{
lean_ctor_set(v___x_1537_, 1, v_a_1532_);
lean_ctor_set(v___x_1537_, 0, v___x_1539_);
v___x_1541_ = v___x_1537_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v___x_1539_);
lean_ctor_set(v_reuseFailAlloc_1543_, 1, v_a_1532_);
v___x_1541_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
v_a_1531_ = v_tail_1535_;
v_a_1532_ = v___x_1541_;
goto _start;
}
}
}
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1545_; double v___x_1546_; 
v___x_1545_ = lean_unsigned_to_nat(0u);
v___x_1546_ = lean_float_of_nat(v___x_1545_);
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg(lean_object* v_cls_1550_, lean_object* v_msg_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_){
_start:
{
lean_object* v_ref_1557_; lean_object* v___x_1558_; lean_object* v_a_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1604_; 
v_ref_1557_ = lean_ctor_get(v___y_1554_, 2);
v___x_1558_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0_spec__0_spec__1(v_msg_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_);
v_a_1559_ = lean_ctor_get(v___x_1558_, 0);
v_isSharedCheck_1604_ = !lean_is_exclusive(v___x_1558_);
if (v_isSharedCheck_1604_ == 0)
{
v___x_1561_ = v___x_1558_;
v_isShared_1562_ = v_isSharedCheck_1604_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_a_1559_);
lean_dec(v___x_1558_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1604_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v___x_1563_; lean_object* v_traceState_1564_; lean_object* v_env_1565_; lean_object* v_nextMacroScope_1566_; lean_object* v_ngen_1567_; lean_object* v_auxDeclNGen_1568_; lean_object* v_cache_1569_; lean_object* v_recordedDeps_1570_; lean_object* v_messages_1571_; lean_object* v_infoState_1572_; lean_object* v_snapshotTasks_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1603_; 
v___x_1563_ = lean_st_ref_take(v___y_1555_);
v_traceState_1564_ = lean_ctor_get(v___x_1563_, 4);
v_env_1565_ = lean_ctor_get(v___x_1563_, 0);
v_nextMacroScope_1566_ = lean_ctor_get(v___x_1563_, 1);
v_ngen_1567_ = lean_ctor_get(v___x_1563_, 2);
v_auxDeclNGen_1568_ = lean_ctor_get(v___x_1563_, 3);
v_cache_1569_ = lean_ctor_get(v___x_1563_, 5);
v_recordedDeps_1570_ = lean_ctor_get(v___x_1563_, 6);
v_messages_1571_ = lean_ctor_get(v___x_1563_, 7);
v_infoState_1572_ = lean_ctor_get(v___x_1563_, 8);
v_snapshotTasks_1573_ = lean_ctor_get(v___x_1563_, 9);
v_isSharedCheck_1603_ = !lean_is_exclusive(v___x_1563_);
if (v_isSharedCheck_1603_ == 0)
{
v___x_1575_ = v___x_1563_;
v_isShared_1576_ = v_isSharedCheck_1603_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_snapshotTasks_1573_);
lean_inc(v_infoState_1572_);
lean_inc(v_messages_1571_);
lean_inc(v_recordedDeps_1570_);
lean_inc(v_cache_1569_);
lean_inc(v_traceState_1564_);
lean_inc(v_auxDeclNGen_1568_);
lean_inc(v_ngen_1567_);
lean_inc(v_nextMacroScope_1566_);
lean_inc(v_env_1565_);
lean_dec(v___x_1563_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1603_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
uint64_t v_tid_1577_; lean_object* v_traces_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1602_; 
v_tid_1577_ = lean_ctor_get_uint64(v_traceState_1564_, sizeof(void*)*1);
v_traces_1578_ = lean_ctor_get(v_traceState_1564_, 0);
v_isSharedCheck_1602_ = !lean_is_exclusive(v_traceState_1564_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1580_ = v_traceState_1564_;
v_isShared_1581_ = v_isSharedCheck_1602_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_traces_1578_);
lean_dec(v_traceState_1564_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1602_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; double v___x_1584_; uint8_t v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1593_; 
v___x_1582_ = lean_box(0);
v___x_1583_ = lean_box(0);
v___x_1584_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__0);
v___x_1585_ = 0;
v___x_1586_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__1));
v___x_1587_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1587_, 0, v_cls_1550_);
lean_ctor_set(v___x_1587_, 1, v___x_1583_);
lean_ctor_set(v___x_1587_, 2, v___x_1586_);
lean_ctor_set_float(v___x_1587_, sizeof(void*)*3, v___x_1584_);
lean_ctor_set_float(v___x_1587_, sizeof(void*)*3 + 8, v___x_1584_);
lean_ctor_set_uint8(v___x_1587_, sizeof(void*)*3 + 16, v___x_1585_);
v___x_1588_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___closed__2));
v___x_1589_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1587_);
lean_ctor_set(v___x_1589_, 1, v_a_1559_);
lean_ctor_set(v___x_1589_, 2, v___x_1588_);
lean_inc(v_ref_1557_);
v___x_1590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1590_, 0, v_ref_1557_);
lean_ctor_set(v___x_1590_, 1, v___x_1589_);
v___x_1591_ = l_Lean_PersistentArray_push___redArg(v_traces_1578_, v___x_1590_);
if (v_isShared_1581_ == 0)
{
lean_ctor_set(v___x_1580_, 0, v___x_1591_);
v___x_1593_ = v___x_1580_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v___x_1591_);
lean_ctor_set_uint64(v_reuseFailAlloc_1601_, sizeof(void*)*1, v_tid_1577_);
v___x_1593_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
lean_object* v___x_1595_; 
if (v_isShared_1576_ == 0)
{
lean_ctor_set(v___x_1575_, 4, v___x_1593_);
v___x_1595_ = v___x_1575_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v_env_1565_);
lean_ctor_set(v_reuseFailAlloc_1600_, 1, v_nextMacroScope_1566_);
lean_ctor_set(v_reuseFailAlloc_1600_, 2, v_ngen_1567_);
lean_ctor_set(v_reuseFailAlloc_1600_, 3, v_auxDeclNGen_1568_);
lean_ctor_set(v_reuseFailAlloc_1600_, 4, v___x_1593_);
lean_ctor_set(v_reuseFailAlloc_1600_, 5, v_cache_1569_);
lean_ctor_set(v_reuseFailAlloc_1600_, 6, v_recordedDeps_1570_);
lean_ctor_set(v_reuseFailAlloc_1600_, 7, v_messages_1571_);
lean_ctor_set(v_reuseFailAlloc_1600_, 8, v_infoState_1572_);
lean_ctor_set(v_reuseFailAlloc_1600_, 9, v_snapshotTasks_1573_);
v___x_1595_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
lean_object* v___x_1596_; lean_object* v___x_1598_; 
v___x_1596_ = lean_st_ref_put(v___y_1555_, v___x_1595_);
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 0, v___x_1582_);
v___x_1598_ = v___x_1561_;
goto v_reusejp_1597_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v___x_1582_);
v___x_1598_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1597_;
}
v_reusejp_1597_:
{
return v___x_1598_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg___boxed(lean_object* v_cls_1605_, lean_object* v_msg_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_){
_start:
{
lean_object* v_res_1612_; 
v_res_1612_ = l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg(v_cls_1605_, v_msg_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_);
lean_dec(v___y_1610_);
lean_dec_ref(v___y_1609_);
lean_dec(v___y_1608_);
lean_dec_ref(v___y_1607_);
return v_res_1612_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg(lean_object* v_fnPrefix_1614_, lean_object* v_a_1615_, lean_object* v_range_1616_, lean_object* v_b_1617_, lean_object* v_i_1618_){
_start:
{
lean_object* v_stop_1620_; lean_object* v_step_1621_; uint8_t v___x_1622_; 
v_stop_1620_ = lean_ctor_get(v_range_1616_, 1);
v_step_1621_ = lean_ctor_get(v_range_1616_, 2);
v___x_1622_ = lean_nat_dec_lt(v_i_1618_, v_stop_1620_);
if (v___x_1622_ == 0)
{
lean_object* v___x_1623_; 
lean_dec(v_i_1618_);
lean_dec(v_a_1615_);
lean_dec_ref(v_fnPrefix_1614_);
v___x_1623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1623_, 0, v_b_1617_);
return v___x_1623_;
}
else
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; 
v___x_1624_ = lean_unsigned_to_nat(1u);
v___x_1625_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___closed__0));
lean_inc_ref(v_fnPrefix_1614_);
v___x_1626_ = lean_string_append(v_fnPrefix_1614_, v___x_1625_);
v___x_1627_ = lean_nat_add(v_i_1618_, v___x_1624_);
v___x_1628_ = l_Nat_reprFast(v___x_1627_);
v___x_1629_ = lean_string_append(v___x_1626_, v___x_1628_);
lean_dec_ref(v___x_1628_);
v___x_1630_ = lean_box(0);
v___x_1631_ = l_Lean_Name_str___override(v___x_1630_, v___x_1629_);
lean_inc(v_a_1615_);
v___x_1632_ = l_Lean_Name_append(v_a_1615_, v___x_1631_);
v___x_1633_ = lean_array_push(v_b_1617_, v___x_1632_);
v___x_1634_ = lean_nat_add(v_i_1618_, v_step_1621_);
lean_dec(v_i_1618_);
v_b_1617_ = v___x_1633_;
v_i_1618_ = v___x_1634_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg___boxed(lean_object* v_fnPrefix_1636_, lean_object* v_a_1637_, lean_object* v_range_1638_, lean_object* v_b_1639_, lean_object* v_i_1640_, lean_object* v___y_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg(v_fnPrefix_1636_, v_a_1637_, v_range_1638_, v_b_1639_, v_i_1640_);
lean_dec_ref(v_range_1638_);
return v_res_1642_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_mkContext___closed__5(void){
_start:
{
lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; 
v___x_1651_ = ((lean_object*)(l_Lean_Elab_Deriving_mkContext___closed__2));
v___x_1652_ = ((lean_object*)(l_Lean_Elab_Deriving_mkContext___closed__4));
v___x_1653_ = l_Lean_Name_append(v___x_1652_, v___x_1651_);
return v___x_1653_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_mkContext___closed__7(void){
_start:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; 
v___x_1655_ = ((lean_object*)(l_Lean_Elab_Deriving_mkContext___closed__6));
v___x_1656_ = l_Lean_stringToMessageData(v___x_1655_);
return v___x_1656_;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_mkContext___closed__9(void){
_start:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___x_1658_ = ((lean_object*)(l_Lean_Elab_Deriving_mkContext___closed__8));
v___x_1659_ = l_Lean_stringToMessageData(v___x_1658_);
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkContext(lean_object* v_className_1660_, lean_object* v_fnPrefix_1661_, lean_object* v_typeName_1662_, uint8_t v_supportsRec_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_){
_start:
{
lean_object* v___x_1671_; 
lean_inc(v_typeName_1662_);
v___x_1671_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_mkInstName_spec__0(v_typeName_1662_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_, v_a_1668_, v_a_1669_);
if (lean_obj_tag(v___x_1671_) == 0)
{
lean_object* v_a_1672_; lean_object* v_all_1673_; uint8_t v_isRec_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v_a_1672_ = lean_ctor_get(v___x_1671_, 0);
lean_inc(v_a_1672_);
lean_dec_ref_known(v___x_1671_, 1);
v_all_1673_ = lean_ctor_get(v_a_1672_, 3);
v_isRec_1674_ = lean_ctor_get_uint8(v_a_1672_, sizeof(void*)*6);
v___x_1675_ = lean_unsigned_to_nat(0u);
v___x_1676_ = ((lean_object*)(l_Lean_Elab_Deriving_withoutExposeFromCtors___redArg___closed__0));
v___x_1677_ = l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0___redArg(v_all_1673_, v___x_1676_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_, v_a_1668_, v_a_1669_);
if (lean_obj_tag(v___x_1677_) == 0)
{
lean_object* v_a_1678_; lean_object* v___x_1679_; 
v_a_1678_ = lean_ctor_get(v___x_1677_, 0);
lean_inc(v_a_1678_);
lean_dec_ref_known(v___x_1677_, 1);
v___x_1679_ = l_Lean_Elab_Deriving_mkInstName(v_className_1660_, v_typeName_1662_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_, v_a_1668_, v_a_1669_);
if (lean_obj_tag(v___x_1679_) == 0)
{
lean_object* v_a_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1741_; 
v_a_1680_ = lean_ctor_get(v___x_1679_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1679_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1682_ = v___x_1679_;
v_isShared_1683_ = v_isSharedCheck_1741_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_a_1680_);
lean_dec(v___x_1679_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1741_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
lean_object* v___y_1685_; uint8_t v___y_1686_; lean_object* v___y_1692_; lean_object* v_auxFunNames_1698_; lean_object* v___y_1699_; lean_object* v___y_1700_; lean_object* v___y_1701_; lean_object* v___y_1702_; lean_object* v___y_1703_; lean_object* v___y_1704_; lean_object* v___x_1731_; lean_object* v___x_1732_; uint8_t v___x_1733_; 
v___x_1731_ = l_List_lengthTR___redArg(v_all_1673_);
v___x_1732_ = lean_unsigned_to_nat(1u);
v___x_1733_ = lean_nat_dec_eq(v___x_1731_, v___x_1732_);
if (v___x_1733_ == 0)
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v_a_1736_; 
v___x_1734_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1734_, 0, v___x_1675_);
lean_ctor_set(v___x_1734_, 1, v___x_1731_);
lean_ctor_set(v___x_1734_, 2, v___x_1732_);
lean_inc(v_a_1680_);
v___x_1735_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg(v_fnPrefix_1661_, v_a_1680_, v___x_1734_, v___x_1676_, v___x_1675_);
lean_dec_ref_known(v___x_1734_, 3);
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_a_1736_);
lean_dec_ref(v___x_1735_);
v_auxFunNames_1698_ = v_a_1736_;
v___y_1699_ = v_a_1664_;
v___y_1700_ = v_a_1665_;
v___y_1701_ = v_a_1666_;
v___y_1702_ = v_a_1667_;
v___y_1703_ = v_a_1668_;
v___y_1704_ = v_a_1669_;
goto v___jp_1697_;
}
else
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
lean_dec(v___x_1731_);
v___x_1737_ = lean_box(0);
v___x_1738_ = l_Lean_Name_str___override(v___x_1737_, v_fnPrefix_1661_);
lean_inc(v_a_1680_);
v___x_1739_ = l_Lean_Name_append(v_a_1680_, v___x_1738_);
v___x_1740_ = lean_array_push(v___x_1676_, v___x_1739_);
v_auxFunNames_1698_ = v___x_1740_;
v___y_1699_ = v_a_1664_;
v___y_1700_ = v_a_1665_;
v___y_1701_ = v_a_1666_;
v___y_1702_ = v_a_1667_;
v___y_1703_ = v_a_1668_;
v___y_1704_ = v_a_1669_;
goto v___jp_1697_;
}
v___jp_1684_:
{
lean_object* v___x_1687_; lean_object* v___x_1689_; 
v___x_1687_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1687_, 0, v_a_1680_);
lean_ctor_set(v___x_1687_, 1, v_a_1678_);
lean_ctor_set(v___x_1687_, 2, v___y_1685_);
lean_ctor_set_uint8(v___x_1687_, sizeof(void*)*3, v___y_1686_);
if (v_isShared_1683_ == 0)
{
lean_ctor_set(v___x_1682_, 0, v___x_1687_);
v___x_1689_ = v___x_1682_;
goto v_reusejp_1688_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v___x_1687_);
v___x_1689_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1688_;
}
v_reusejp_1688_:
{
return v___x_1689_;
}
}
v___jp_1691_:
{
uint8_t v___x_1693_; 
v___x_1693_ = l_Lean_InductiveVal_isNested(v_a_1672_);
lean_dec(v_a_1672_);
if (v___x_1693_ == 0)
{
lean_object* v___x_1694_; lean_object* v___x_1695_; uint8_t v___x_1696_; 
v___x_1694_ = lean_unsigned_to_nat(1u);
v___x_1695_ = lean_array_get_size(v_a_1678_);
v___x_1696_ = lean_nat_dec_lt(v___x_1694_, v___x_1695_);
if (v___x_1696_ == 0)
{
if (v_isRec_1674_ == 0)
{
v___y_1685_ = v___y_1692_;
v___y_1686_ = v_isRec_1674_;
goto v___jp_1684_;
}
else
{
if (v_supportsRec_1663_ == 0)
{
v___y_1685_ = v___y_1692_;
v___y_1686_ = v_isRec_1674_;
goto v___jp_1684_;
}
else
{
v___y_1685_ = v___y_1692_;
v___y_1686_ = v___x_1696_;
goto v___jp_1684_;
}
}
}
else
{
v___y_1685_ = v___y_1692_;
v___y_1686_ = v___x_1696_;
goto v___jp_1684_;
}
}
else
{
v___y_1685_ = v___y_1692_;
v___y_1686_ = v___x_1693_;
goto v___jp_1684_;
}
}
v___jp_1697_:
{
lean_object* v_toCold_1705_; lean_object* v_options_1706_; uint8_t v_hasTrace_1707_; 
v_toCold_1705_ = lean_ctor_get(v___y_1703_, 0);
v_options_1706_ = lean_ctor_get(v_toCold_1705_, 2);
v_hasTrace_1707_ = lean_ctor_get_uint8(v_options_1706_, sizeof(void*)*1);
if (v_hasTrace_1707_ == 0)
{
v___y_1692_ = v_auxFunNames_1698_;
goto v___jp_1691_;
}
else
{
lean_object* v_inheritedTraceOptions_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; uint8_t v___x_1711_; 
v_inheritedTraceOptions_1708_ = lean_ctor_get(v_toCold_1705_, 11);
v___x_1709_ = ((lean_object*)(l_Lean_Elab_Deriving_mkContext___closed__2));
v___x_1710_ = lean_obj_once(&l_Lean_Elab_Deriving_mkContext___closed__5, &l_Lean_Elab_Deriving_mkContext___closed__5_once, _init_l_Lean_Elab_Deriving_mkContext___closed__5);
v___x_1711_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1708_, v_options_1706_, v___x_1710_);
if (v___x_1711_ == 0)
{
v___y_1692_ = v_auxFunNames_1698_;
goto v___jp_1691_;
}
else
{
lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; 
v___x_1712_ = lean_obj_once(&l_Lean_Elab_Deriving_mkContext___closed__7, &l_Lean_Elab_Deriving_mkContext___closed__7_once, _init_l_Lean_Elab_Deriving_mkContext___closed__7);
lean_inc(v_a_1680_);
v___x_1713_ = l_Lean_MessageData_ofName(v_a_1680_);
v___x_1714_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1714_, 0, v___x_1712_);
lean_ctor_set(v___x_1714_, 1, v___x_1713_);
v___x_1715_ = lean_obj_once(&l_Lean_Elab_Deriving_mkContext___closed__9, &l_Lean_Elab_Deriving_mkContext___closed__9_once, _init_l_Lean_Elab_Deriving_mkContext___closed__9);
v___x_1716_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1716_, 0, v___x_1714_);
lean_ctor_set(v___x_1716_, 1, v___x_1715_);
lean_inc_ref(v_auxFunNames_1698_);
v___x_1717_ = lean_array_to_list(v_auxFunNames_1698_);
v___x_1718_ = lean_box(0);
v___x_1719_ = l_List_mapTR_loop___at___00Lean_Elab_Deriving_mkContext_spec__1(v___x_1717_, v___x_1718_);
v___x_1720_ = l_Lean_MessageData_ofList(v___x_1719_);
v___x_1721_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1716_);
lean_ctor_set(v___x_1721_, 1, v___x_1720_);
v___x_1722_ = l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg(v___x_1709_, v___x_1721_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_);
if (lean_obj_tag(v___x_1722_) == 0)
{
lean_dec_ref_known(v___x_1722_, 1);
v___y_1692_ = v_auxFunNames_1698_;
goto v___jp_1691_;
}
else
{
lean_object* v_a_1723_; lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1730_; 
lean_dec_ref(v_auxFunNames_1698_);
lean_del_object(v___x_1682_);
lean_dec(v_a_1680_);
lean_dec(v_a_1678_);
lean_dec(v_a_1672_);
v_a_1723_ = lean_ctor_get(v___x_1722_, 0);
v_isSharedCheck_1730_ = !lean_is_exclusive(v___x_1722_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1725_ = v___x_1722_;
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
else
{
lean_inc(v_a_1723_);
lean_dec(v___x_1722_);
v___x_1725_ = lean_box(0);
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
v_resetjp_1724_:
{
lean_object* v___x_1728_; 
if (v_isShared_1726_ == 0)
{
v___x_1728_ = v___x_1725_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v_a_1723_);
v___x_1728_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
return v___x_1728_;
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
lean_object* v_a_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1749_; 
lean_dec(v_a_1678_);
lean_dec(v_a_1672_);
lean_dec_ref(v_fnPrefix_1661_);
v_a_1742_ = lean_ctor_get(v___x_1679_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1679_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1744_ = v___x_1679_;
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_a_1742_);
lean_dec(v___x_1679_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1747_; 
if (v_isShared_1745_ == 0)
{
v___x_1747_ = v___x_1744_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_a_1742_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
}
else
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
lean_dec(v_a_1672_);
lean_dec(v_typeName_1662_);
lean_dec_ref(v_fnPrefix_1661_);
lean_dec(v_className_1660_);
v_a_1750_ = lean_ctor_get(v___x_1677_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1677_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___x_1677_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___x_1677_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_a_1750_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
else
{
lean_object* v_a_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1765_; 
lean_dec(v_typeName_1662_);
lean_dec_ref(v_fnPrefix_1661_);
lean_dec(v_className_1660_);
v_a_1758_ = lean_ctor_get(v___x_1671_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1671_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1760_ = v___x_1671_;
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_a_1758_);
lean_dec(v___x_1671_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1763_; 
if (v_isShared_1761_ == 0)
{
v___x_1763_ = v___x_1760_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_a_1758_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkContext___boxed(lean_object* v_className_1766_, lean_object* v_fnPrefix_1767_, lean_object* v_typeName_1768_, lean_object* v_supportsRec_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_, lean_object* v_a_1776_){
_start:
{
uint8_t v_supportsRec_boxed_1777_; lean_object* v_res_1778_; 
v_supportsRec_boxed_1777_ = lean_unbox(v_supportsRec_1769_);
v_res_1778_ = l_Lean_Elab_Deriving_mkContext(v_className_1766_, v_fnPrefix_1767_, v_typeName_1768_, v_supportsRec_boxed_1777_, v_a_1770_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_, v_a_1775_);
lean_dec(v_a_1775_);
lean_dec_ref(v_a_1774_);
lean_dec(v_a_1773_);
lean_dec_ref(v_a_1772_);
lean_dec(v_a_1771_);
lean_dec_ref(v_a_1770_);
return v_res_1778_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0(lean_object* v_as_1779_, lean_object* v_as_x27_1780_, lean_object* v_b_1781_, lean_object* v_a_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_){
_start:
{
lean_object* v___x_1790_; 
v___x_1790_ = l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0___redArg(v_as_x27_1780_, v_b_1781_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_);
return v___x_1790_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0___boxed(lean_object* v_as_1791_, lean_object* v_as_x27_1792_, lean_object* v_b_1793_, lean_object* v_a_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_){
_start:
{
lean_object* v_res_1802_; 
v_res_1802_ = l_List_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__0(v_as_1791_, v_as_x27_1792_, v_b_1793_, v_a_1794_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_, v___y_1800_);
lean_dec(v___y_1800_);
lean_dec_ref(v___y_1799_);
lean_dec(v___y_1798_);
lean_dec_ref(v___y_1797_);
lean_dec(v___y_1796_);
lean_dec_ref(v___y_1795_);
lean_dec(v_as_x27_1792_);
lean_dec(v_as_1791_);
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2(lean_object* v_cls_1803_, lean_object* v_msg_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_){
_start:
{
lean_object* v___x_1812_; 
v___x_1812_ = l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___redArg(v_cls_1803_, v_msg_1804_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_);
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2___boxed(lean_object* v_cls_1813_, lean_object* v_msg_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_){
_start:
{
lean_object* v_res_1822_; 
v_res_1822_ = l_Lean_addTrace___at___00Lean_Elab_Deriving_mkContext_spec__2(v_cls_1813_, v_msg_1814_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_);
lean_dec(v___y_1820_);
lean_dec_ref(v___y_1819_);
lean_dec(v___y_1818_);
lean_dec_ref(v___y_1817_);
lean_dec(v___y_1816_);
lean_dec_ref(v___y_1815_);
return v_res_1822_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3(lean_object* v_fnPrefix_1823_, lean_object* v_a_1824_, lean_object* v_range_1825_, lean_object* v_b_1826_, lean_object* v_i_1827_, lean_object* v_hs_1828_, lean_object* v_hl_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_){
_start:
{
lean_object* v___x_1837_; 
v___x_1837_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___redArg(v_fnPrefix_1823_, v_a_1824_, v_range_1825_, v_b_1826_, v_i_1827_);
return v___x_1837_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3___boxed(lean_object* v_fnPrefix_1838_, lean_object* v_a_1839_, lean_object* v_range_1840_, lean_object* v_b_1841_, lean_object* v_i_1842_, lean_object* v_hs_1843_, lean_object* v_hl_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_){
_start:
{
lean_object* v_res_1852_; 
v_res_1852_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Elab_Deriving_mkContext_spec__3(v_fnPrefix_1838_, v_a_1839_, v_range_1840_, v_b_1841_, v_i_1842_, v_hs_1843_, v_hl_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_);
lean_dec(v___y_1850_);
lean_dec_ref(v___y_1849_);
lean_dec(v___y_1848_);
lean_dec_ref(v___y_1847_);
lean_dec(v___y_1846_);
lean_dec_ref(v___y_1845_);
lean_dec_ref(v_range_1840_);
return v_res_1852_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__0___redArg(lean_object* v_a_1853_, lean_object* v_b_1854_){
_start:
{
lean_object* v_array_1855_; lean_object* v_start_1856_; lean_object* v_stop_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1870_; 
v_array_1855_ = lean_ctor_get(v_a_1853_, 0);
v_start_1856_ = lean_ctor_get(v_a_1853_, 1);
v_stop_1857_ = lean_ctor_get(v_a_1853_, 2);
v_isSharedCheck_1870_ = !lean_is_exclusive(v_a_1853_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1859_ = v_a_1853_;
v_isShared_1860_ = v_isSharedCheck_1870_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_stop_1857_);
lean_inc(v_start_1856_);
lean_inc(v_array_1855_);
lean_dec(v_a_1853_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1870_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
uint8_t v___x_1861_; 
v___x_1861_ = lean_nat_dec_lt(v_start_1856_, v_stop_1857_);
if (v___x_1861_ == 0)
{
lean_del_object(v___x_1859_);
lean_dec(v_stop_1857_);
lean_dec(v_start_1856_);
lean_dec_ref(v_array_1855_);
return v_b_1854_;
}
else
{
lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1865_; 
v___x_1862_ = lean_unsigned_to_nat(1u);
v___x_1863_ = lean_nat_add(v_start_1856_, v___x_1862_);
lean_inc_ref(v_array_1855_);
if (v_isShared_1860_ == 0)
{
lean_ctor_set(v___x_1859_, 1, v___x_1863_);
v___x_1865_ = v___x_1859_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v_array_1855_);
lean_ctor_set(v_reuseFailAlloc_1869_, 1, v___x_1863_);
lean_ctor_set(v_reuseFailAlloc_1869_, 2, v_stop_1857_);
v___x_1865_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1866_ = lean_array_fget(v_array_1855_, v_start_1856_);
lean_dec(v_start_1856_);
lean_dec_ref(v_array_1855_);
v___x_1867_ = lean_array_push(v_b_1854_, v___x_1866_);
v_a_1853_ = v___x_1865_;
v_b_1854_ = v___x_1867_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___lam__0(lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_){
_start:
{
lean_object* v_ref_1878_; uint8_t v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
v_ref_1878_ = lean_ctor_get(v___y_1875_, 2);
v___x_1879_ = 0;
v___x_1880_ = l_Lean_SourceInfo_fromRef(v_ref_1878_, v___x_1879_);
v___x_1881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1881_, 0, v___x_1880_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___lam__0___boxed(lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___lam__0(v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_);
lean_dec(v___y_1887_);
lean_dec_ref(v___y_1886_);
lean_dec(v___y_1885_);
lean_dec_ref(v___y_1884_);
lean_dec(v___y_1883_);
lean_dec_ref(v___y_1882_);
return v_res_1889_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg(lean_object* v_upperBound_1927_, lean_object* v___x_1928_, lean_object* v_ctx_1929_, lean_object* v_argNames_1930_, lean_object* v_className_1931_, lean_object* v_a_1932_, lean_object* v_b_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_){
_start:
{
uint8_t v___x_1941_; 
v___x_1941_ = lean_nat_dec_lt(v_a_1932_, v_upperBound_1927_);
if (v___x_1941_ == 0)
{
lean_object* v___x_1942_; 
lean_dec(v_a_1932_);
lean_dec(v_className_1931_);
lean_dec_ref(v_argNames_1930_);
v___x_1942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1942_, 0, v_b_1933_);
return v___x_1942_;
}
else
{
lean_object* v_auxFunNames_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; 
v_auxFunNames_1943_ = lean_ctor_get(v_ctx_1929_, 2);
v___x_1944_ = lean_box(0);
v___x_1945_ = lean_array_fget_borrowed(v___x_1928_, v_a_1932_);
v___x_1946_ = lean_array_get_borrowed(v___x_1944_, v_auxFunNames_1943_, v_a_1932_);
lean_inc(v___x_1945_);
v___x_1947_ = l_Lean_Elab_Deriving_mkInductArgNames(v___x_1945_, v___y_1934_, v___y_1935_, v___y_1936_, v___y_1937_, v___y_1938_, v___y_1939_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v_a_1948_; lean_object* v_numParams_1949_; lean_object* v_lower_1951_; lean_object* v_upper_1952_; lean_object* v___x_2044_; lean_object* v___x_2045_; uint8_t v___x_2046_; 
v_a_1948_ = lean_ctor_get(v___x_1947_, 0);
lean_inc(v_a_1948_);
lean_dec_ref_known(v___x_1947_, 1);
v_numParams_1949_ = lean_ctor_get(v___x_1945_, 1);
v___x_2044_ = lean_unsigned_to_nat(0u);
v___x_2045_ = lean_array_get_size(v_a_1948_);
v___x_2046_ = lean_nat_dec_le(v_numParams_1949_, v___x_2044_);
if (v___x_2046_ == 0)
{
lean_inc(v_numParams_1949_);
v_lower_1951_ = v_numParams_1949_;
v_upper_1952_ = v___x_2045_;
goto v___jp_1950_;
}
else
{
v_lower_1951_ = v___x_2044_;
v_upper_1952_ = v___x_2045_;
goto v___jp_1950_;
}
v___jp_1950_:
{
lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; 
v___x_1953_ = l_Array_toSubarray___redArg(v_a_1948_, v_lower_1951_, v_upper_1952_);
lean_inc_ref(v___x_1953_);
v___x_1954_ = l_Subarray_copy___redArg(v___x_1953_);
v___x_1955_ = l_Lean_Elab_Deriving_mkImplicitBinders(v___x_1954_, v___y_1934_, v___y_1935_, v___y_1936_, v___y_1937_, v___y_1938_, v___y_1939_);
if (lean_obj_tag(v___x_1955_) == 0)
{
lean_object* v_a_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v_a_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; 
v_a_1956_ = lean_ctor_get(v___x_1955_, 0);
lean_inc(v_a_1956_);
lean_dec_ref_known(v___x_1955_, 1);
v___x_1957_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_1949_);
lean_inc_ref(v_argNames_1930_);
v___x_1958_ = l_Array_toSubarray___redArg(v_argNames_1930_, v___x_1957_, v_numParams_1949_);
v___x_1959_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductArgNames___lam__0___closed__0));
v___x_1960_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__0___redArg(v___x_1958_, v___x_1959_);
v___x_1961_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__0___redArg(v___x_1953_, v___x_1959_);
v_a_1962_ = l_Array_append___redArg(v___x_1960_, v___x_1961_);
lean_dec_ref(v___x_1961_);
v___x_1963_ = lean_array_get_size(v_a_1962_);
v___x_1964_ = l_Array_toSubarray___redArg(v_a_1962_, v___x_1957_, v___x_1963_);
v___x_1965_ = l_Subarray_copy___redArg(v___x_1964_);
lean_inc(v___x_1945_);
v___x_1966_ = l_Lean_Elab_Deriving_mkInductiveApp___redArg(v___x_1945_, v___x_1965_, v___y_1938_);
if (lean_obj_tag(v___x_1966_) == 0)
{
lean_object* v_a_1967_; lean_object* v_ref_1968_; uint8_t v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; 
v_a_1967_ = lean_ctor_get(v___x_1966_, 0);
lean_inc(v_a_1967_);
lean_dec_ref_known(v___x_1966_, 1);
v_ref_1968_ = lean_ctor_get(v___y_1938_, 2);
v___x_1969_ = 0;
v___x_1970_ = l_Lean_SourceInfo_fromRef(v_ref_1968_, v___x_1969_);
v___x_1971_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4));
lean_inc(v_className_1931_);
v___x_1972_ = l_Lean_mkCIdent(v_className_1931_);
v___x_1973_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9));
lean_inc(v___x_1970_);
v___x_1974_ = l_Lean_Syntax_node1(v___x_1970_, v___x_1973_, v_a_1967_);
v___x_1975_ = l_Lean_Syntax_node2(v___x_1970_, v___x_1971_, v___x_1972_, v___x_1974_);
v___x_1976_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___lam__0(v___y_1934_, v___y_1935_, v___y_1936_, v___y_1937_, v___y_1938_, v___y_1939_);
if (lean_obj_tag(v___x_1976_) == 0)
{
lean_object* v_a_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; 
v_a_1977_ = lean_ctor_get(v___x_1976_, 0);
lean_inc_n(v_a_1977_, 4);
lean_dec_ref_known(v___x_1976_, 1);
v___x_1978_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1));
v___x_1979_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__2));
v___x_1980_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1980_, 0, v_a_1977_);
lean_ctor_set(v___x_1980_, 1, v___x_1979_);
lean_inc(v___x_1946_);
v___x_1981_ = l_Lean_mkIdent(v___x_1946_);
v___x_1982_ = l_Lean_Syntax_node1(v_a_1977_, v___x_1973_, v___x_1981_);
v___x_1983_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__3));
v___x_1984_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1984_, 0, v_a_1977_);
lean_ctor_set(v___x_1984_, 1, v___x_1983_);
v___x_1985_ = l_Lean_Syntax_node3(v_a_1977_, v___x_1978_, v___x_1980_, v___x_1982_, v___x_1984_);
v___x_1986_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__5));
v___x_1987_ = l_Lean_Core_mkFreshUserName(v___x_1986_, v___y_1938_, v___y_1939_);
if (lean_obj_tag(v___x_1987_) == 0)
{
lean_object* v_a_1988_; lean_object* v___x_1989_; 
v_a_1988_ = lean_ctor_get(v___x_1987_, 0);
lean_inc(v_a_1988_);
lean_dec_ref_known(v___x_1987_, 1);
v___x_1989_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___lam__0(v___y_1934_, v___y_1935_, v___y_1936_, v___y_1937_, v___y_1938_, v___y_1939_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_a_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; 
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
lean_inc_n(v_a_1990_, 8);
lean_dec_ref_known(v___x_1989_, 1);
v___x_1991_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__7));
v___x_1992_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__9));
v___x_1993_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__11));
v___x_1994_ = l_Lean_mkIdent(v_a_1988_);
v___x_1995_ = l_Lean_Syntax_node1(v_a_1990_, v___x_1993_, v___x_1994_);
v___x_1996_ = lean_obj_once(&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10, &l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10_once, _init_l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10);
v___x_1997_ = l_Array_append___redArg(v___x_1996_, v_a_1956_);
lean_dec(v_a_1956_);
v___x_1998_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1998_, 0, v_a_1990_);
lean_ctor_set(v___x_1998_, 1, v___x_1973_);
lean_ctor_set(v___x_1998_, 2, v___x_1997_);
v___x_1999_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__13));
v___x_2000_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__14));
v___x_2001_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2001_, 0, v_a_1990_);
lean_ctor_set(v___x_2001_, 1, v___x_2000_);
v___x_2002_ = l_Lean_Syntax_node2(v_a_1990_, v___x_1999_, v___x_2001_, v___x_1975_);
v___x_2003_ = l_Lean_Syntax_node1(v_a_1990_, v___x_1973_, v___x_2002_);
v___x_2004_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__15));
v___x_2005_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2005_, 0, v_a_1990_);
lean_ctor_set(v___x_2005_, 1, v___x_2004_);
v___x_2006_ = l_Lean_Syntax_node5(v_a_1990_, v___x_1992_, v___x_1995_, v___x_1998_, v___x_2003_, v___x_2005_, v___x_1985_);
v___x_2007_ = l_Lean_Syntax_node1(v_a_1990_, v___x_1991_, v___x_2006_);
v___x_2008_ = lean_array_push(v_b_1933_, v___x_2007_);
v___x_2009_ = lean_unsigned_to_nat(1u);
v___x_2010_ = lean_nat_add(v_a_1932_, v___x_2009_);
lean_dec(v_a_1932_);
v_a_1932_ = v___x_2010_;
v_b_1933_ = v___x_2008_;
goto _start;
}
else
{
lean_object* v_a_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2019_; 
lean_dec(v_a_1988_);
lean_dec(v___x_1985_);
lean_dec(v___x_1975_);
lean_dec(v_a_1956_);
lean_dec_ref(v_b_1933_);
lean_dec(v_a_1932_);
lean_dec(v_className_1931_);
lean_dec_ref(v_argNames_1930_);
v_a_2012_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_2019_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2014_ = v___x_1989_;
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_a_2012_);
lean_dec(v___x_1989_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v___x_2017_; 
if (v_isShared_2015_ == 0)
{
v___x_2017_ = v___x_2014_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v_a_2012_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
}
}
else
{
lean_object* v_a_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2027_; 
lean_dec(v___x_1985_);
lean_dec(v___x_1975_);
lean_dec(v_a_1956_);
lean_dec_ref(v_b_1933_);
lean_dec(v_a_1932_);
lean_dec(v_className_1931_);
lean_dec_ref(v_argNames_1930_);
v_a_2020_ = lean_ctor_get(v___x_1987_, 0);
v_isSharedCheck_2027_ = !lean_is_exclusive(v___x_1987_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2022_ = v___x_1987_;
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_a_2020_);
lean_dec(v___x_1987_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2025_; 
if (v_isShared_2023_ == 0)
{
v___x_2025_ = v___x_2022_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_a_2020_);
v___x_2025_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
return v___x_2025_;
}
}
}
}
else
{
lean_object* v_a_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2035_; 
lean_dec(v___x_1975_);
lean_dec(v_a_1956_);
lean_dec_ref(v_b_1933_);
lean_dec(v_a_1932_);
lean_dec(v_className_1931_);
lean_dec_ref(v_argNames_1930_);
v_a_2028_ = lean_ctor_get(v___x_1976_, 0);
v_isSharedCheck_2035_ = !lean_is_exclusive(v___x_1976_);
if (v_isSharedCheck_2035_ == 0)
{
v___x_2030_ = v___x_1976_;
v_isShared_2031_ = v_isSharedCheck_2035_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_a_2028_);
lean_dec(v___x_1976_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2035_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v___x_2033_; 
if (v_isShared_2031_ == 0)
{
v___x_2033_ = v___x_2030_;
goto v_reusejp_2032_;
}
else
{
lean_object* v_reuseFailAlloc_2034_; 
v_reuseFailAlloc_2034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2034_, 0, v_a_2028_);
v___x_2033_ = v_reuseFailAlloc_2034_;
goto v_reusejp_2032_;
}
v_reusejp_2032_:
{
return v___x_2033_;
}
}
}
}
else
{
lean_object* v_a_2036_; lean_object* v___x_2038_; uint8_t v_isShared_2039_; uint8_t v_isSharedCheck_2043_; 
lean_dec(v_a_1956_);
lean_dec_ref(v_b_1933_);
lean_dec(v_a_1932_);
lean_dec(v_className_1931_);
lean_dec_ref(v_argNames_1930_);
v_a_2036_ = lean_ctor_get(v___x_1966_, 0);
v_isSharedCheck_2043_ = !lean_is_exclusive(v___x_1966_);
if (v_isSharedCheck_2043_ == 0)
{
v___x_2038_ = v___x_1966_;
v_isShared_2039_ = v_isSharedCheck_2043_;
goto v_resetjp_2037_;
}
else
{
lean_inc(v_a_2036_);
lean_dec(v___x_1966_);
v___x_2038_ = lean_box(0);
v_isShared_2039_ = v_isSharedCheck_2043_;
goto v_resetjp_2037_;
}
v_resetjp_2037_:
{
lean_object* v___x_2041_; 
if (v_isShared_2039_ == 0)
{
v___x_2041_ = v___x_2038_;
goto v_reusejp_2040_;
}
else
{
lean_object* v_reuseFailAlloc_2042_; 
v_reuseFailAlloc_2042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2042_, 0, v_a_2036_);
v___x_2041_ = v_reuseFailAlloc_2042_;
goto v_reusejp_2040_;
}
v_reusejp_2040_:
{
return v___x_2041_;
}
}
}
}
else
{
lean_dec_ref(v___x_1953_);
lean_dec_ref(v_b_1933_);
lean_dec(v_a_1932_);
lean_dec(v_className_1931_);
lean_dec_ref(v_argNames_1930_);
return v___x_1955_;
}
}
}
else
{
lean_object* v_a_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2054_; 
lean_dec_ref(v_b_1933_);
lean_dec(v_a_1932_);
lean_dec(v_className_1931_);
lean_dec_ref(v_argNames_1930_);
v_a_2047_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_2054_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_2054_ == 0)
{
v___x_2049_ = v___x_1947_;
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_a_2047_);
lean_dec(v___x_1947_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
lean_object* v___x_2052_; 
if (v_isShared_2050_ == 0)
{
v___x_2052_ = v___x_2049_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_a_2047_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___boxed(lean_object* v_upperBound_2055_, lean_object* v___x_2056_, lean_object* v_ctx_2057_, lean_object* v_argNames_2058_, lean_object* v_className_2059_, lean_object* v_a_2060_, lean_object* v_b_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_){
_start:
{
lean_object* v_res_2069_; 
v_res_2069_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg(v_upperBound_2055_, v___x_2056_, v_ctx_2057_, v_argNames_2058_, v_className_2059_, v_a_2060_, v_b_2061_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_);
lean_dec(v___y_2067_);
lean_dec_ref(v___y_2066_);
lean_dec(v___y_2065_);
lean_dec_ref(v___y_2064_);
lean_dec(v___y_2063_);
lean_dec_ref(v___y_2062_);
lean_dec_ref(v_ctx_2057_);
lean_dec_ref(v___x_2056_);
lean_dec(v_upperBound_2055_);
return v_res_2069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(lean_object* v_ctx_2070_, lean_object* v_className_2071_, lean_object* v_argNames_2072_, lean_object* v_a_2073_, lean_object* v_a_2074_, lean_object* v_a_2075_, lean_object* v_a_2076_, lean_object* v_a_2077_, lean_object* v_a_2078_){
_start:
{
lean_object* v_typeInfos_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v_letDecls_2083_; lean_object* v___x_2084_; 
v_typeInfos_2080_ = lean_ctor_get(v_ctx_2070_, 1);
v___x_2081_ = lean_array_get_size(v_typeInfos_2080_);
v___x_2082_ = lean_unsigned_to_nat(0u);
v_letDecls_2083_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___closed__0));
v___x_2084_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg(v___x_2081_, v_typeInfos_2080_, v_ctx_2070_, v_argNames_2072_, v_className_2071_, v___x_2082_, v_letDecls_2083_, v_a_2073_, v_a_2074_, v_a_2075_, v_a_2076_, v_a_2077_, v_a_2078_);
return v___x_2084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkLocalInstanceLetDecls___boxed(lean_object* v_ctx_2085_, lean_object* v_className_2086_, lean_object* v_argNames_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_){
_start:
{
lean_object* v_res_2095_; 
v_res_2095_ = l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(v_ctx_2085_, v_className_2086_, v_argNames_2087_, v_a_2088_, v_a_2089_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_);
lean_dec(v_a_2093_);
lean_dec_ref(v_a_2092_);
lean_dec(v_a_2091_);
lean_dec_ref(v_a_2090_);
lean_dec(v_a_2089_);
lean_dec_ref(v_a_2088_);
lean_dec_ref(v_ctx_2085_);
return v_res_2095_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__0(lean_object* v_inst_2096_, lean_object* v_R_2097_, lean_object* v_a_2098_, lean_object* v_b_2099_){
_start:
{
lean_object* v___x_2100_; 
v___x_2100_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__0___redArg(v_a_2098_, v_b_2099_);
return v___x_2100_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1(lean_object* v_upperBound_2101_, lean_object* v___x_2102_, lean_object* v_ctx_2103_, lean_object* v_argNames_2104_, lean_object* v_className_2105_, lean_object* v_inst_2106_, lean_object* v_R_2107_, lean_object* v_a_2108_, lean_object* v_b_2109_, lean_object* v_c_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_){
_start:
{
lean_object* v___x_2118_; 
v___x_2118_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg(v_upperBound_2101_, v___x_2102_, v_ctx_2103_, v_argNames_2104_, v_className_2105_, v_a_2108_, v_b_2109_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_2119_ = _args[0];
lean_object* v___x_2120_ = _args[1];
lean_object* v_ctx_2121_ = _args[2];
lean_object* v_argNames_2122_ = _args[3];
lean_object* v_className_2123_ = _args[4];
lean_object* v_inst_2124_ = _args[5];
lean_object* v_R_2125_ = _args[6];
lean_object* v_a_2126_ = _args[7];
lean_object* v_b_2127_ = _args[8];
lean_object* v_c_2128_ = _args[9];
lean_object* v___y_2129_ = _args[10];
lean_object* v___y_2130_ = _args[11];
lean_object* v___y_2131_ = _args[12];
lean_object* v___y_2132_ = _args[13];
lean_object* v___y_2133_ = _args[14];
lean_object* v___y_2134_ = _args[15];
lean_object* v___y_2135_ = _args[16];
_start:
{
lean_object* v_res_2136_; 
v_res_2136_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1(v_upperBound_2119_, v___x_2120_, v_ctx_2121_, v_argNames_2122_, v_className_2123_, v_inst_2124_, v_R_2125_, v_a_2126_, v_b_2127_, v_c_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_);
lean_dec(v___y_2134_);
lean_dec_ref(v___y_2133_);
lean_dec(v___y_2132_);
lean_dec_ref(v___y_2131_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec_ref(v_ctx_2121_);
lean_dec_ref(v___x_2120_);
lean_dec(v_upperBound_2119_);
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg(lean_object* v_as_2150_, size_t v_i_2151_, size_t v_stop_2152_, lean_object* v_b_2153_, lean_object* v___y_2154_){
_start:
{
uint8_t v___x_2156_; 
v___x_2156_ = lean_usize_dec_eq(v_i_2151_, v_stop_2152_);
if (v___x_2156_ == 0)
{
lean_object* v_ref_2157_; size_t v___x_2158_; size_t v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
v_ref_2157_ = lean_ctor_get(v___y_2154_, 2);
v___x_2158_ = ((size_t)1ULL);
v___x_2159_ = lean_usize_sub(v_i_2151_, v___x_2158_);
v___x_2160_ = lean_array_uget_borrowed(v_as_2150_, v___x_2159_);
v___x_2161_ = l_Lean_SourceInfo_fromRef(v_ref_2157_, v___x_2156_);
v___x_2162_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__0));
v___x_2163_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__1));
lean_inc_n(v___x_2161_, 4);
v___x_2164_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2164_, 0, v___x_2161_);
lean_ctor_set(v___x_2164_, 1, v___x_2162_);
v___x_2165_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__3));
v___x_2166_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9));
v___x_2167_ = lean_obj_once(&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10, &l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10_once, _init_l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10);
v___x_2168_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2168_, 0, v___x_2161_);
lean_ctor_set(v___x_2168_, 1, v___x_2166_);
lean_ctor_set(v___x_2168_, 2, v___x_2167_);
v___x_2169_ = l_Lean_Syntax_node1(v___x_2161_, v___x_2165_, v___x_2168_);
v___x_2170_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___closed__4));
v___x_2171_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2171_, 0, v___x_2161_);
lean_ctor_set(v___x_2171_, 1, v___x_2170_);
lean_inc(v___x_2160_);
v___x_2172_ = l_Lean_Syntax_node5(v___x_2161_, v___x_2163_, v___x_2164_, v___x_2169_, v___x_2160_, v___x_2171_, v_b_2153_);
v_i_2151_ = v___x_2159_;
v_b_2153_ = v___x_2172_;
goto _start;
}
else
{
lean_object* v___x_2174_; 
v___x_2174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2174_, 0, v_b_2153_);
return v___x_2174_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg___boxed(lean_object* v_as_2175_, lean_object* v_i_2176_, lean_object* v_stop_2177_, lean_object* v_b_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_){
_start:
{
size_t v_i_boxed_2181_; size_t v_stop_boxed_2182_; lean_object* v_res_2183_; 
v_i_boxed_2181_ = lean_unbox_usize(v_i_2176_);
lean_dec(v_i_2176_);
v_stop_boxed_2182_ = lean_unbox_usize(v_stop_2177_);
lean_dec(v_stop_2177_);
v_res_2183_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg(v_as_2175_, v_i_boxed_2181_, v_stop_boxed_2182_, v_b_2178_, v___y_2179_);
lean_dec_ref(v___y_2179_);
lean_dec_ref(v_as_2175_);
return v_res_2183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkLet(lean_object* v_letDecls_2184_, lean_object* v_body_2185_, lean_object* v_a_2186_, lean_object* v_a_2187_, lean_object* v_a_2188_, lean_object* v_a_2189_, lean_object* v_a_2190_, lean_object* v_a_2191_){
_start:
{
lean_object* v___x_2193_; lean_object* v___x_2194_; uint8_t v___x_2195_; 
v___x_2193_ = lean_array_get_size(v_letDecls_2184_);
v___x_2194_ = lean_unsigned_to_nat(0u);
v___x_2195_ = lean_nat_dec_lt(v___x_2194_, v___x_2193_);
if (v___x_2195_ == 0)
{
lean_object* v___x_2196_; 
v___x_2196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2196_, 0, v_body_2185_);
return v___x_2196_;
}
else
{
size_t v___x_2197_; size_t v___x_2198_; lean_object* v___x_2199_; 
v___x_2197_ = lean_usize_of_nat(v___x_2193_);
v___x_2198_ = ((size_t)0ULL);
v___x_2199_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg(v_letDecls_2184_, v___x_2197_, v___x_2198_, v_body_2185_, v_a_2190_);
return v___x_2199_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkLet___boxed(lean_object* v_letDecls_2200_, lean_object* v_body_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_, lean_object* v_a_2205_, lean_object* v_a_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_){
_start:
{
lean_object* v_res_2209_; 
v_res_2209_ = l_Lean_Elab_Deriving_mkLet(v_letDecls_2200_, v_body_2201_, v_a_2202_, v_a_2203_, v_a_2204_, v_a_2205_, v_a_2206_, v_a_2207_);
lean_dec(v_a_2207_);
lean_dec_ref(v_a_2206_);
lean_dec(v_a_2205_);
lean_dec_ref(v_a_2204_);
lean_dec(v_a_2203_);
lean_dec_ref(v_a_2202_);
lean_dec_ref(v_letDecls_2200_);
return v_res_2209_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0(lean_object* v_as_2210_, size_t v_i_2211_, size_t v_stop_2212_, lean_object* v_b_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_){
_start:
{
lean_object* v___x_2221_; 
v___x_2221_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___redArg(v_as_2210_, v_i_2211_, v_stop_2212_, v_b_2213_, v___y_2218_);
return v___x_2221_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0___boxed(lean_object* v_as_2222_, lean_object* v_i_2223_, lean_object* v_stop_2224_, lean_object* v_b_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_){
_start:
{
size_t v_i_boxed_2233_; size_t v_stop_boxed_2234_; lean_object* v_res_2235_; 
v_i_boxed_2233_ = lean_unbox_usize(v_i_2223_);
lean_dec(v_i_2223_);
v_stop_boxed_2234_ = lean_unbox_usize(v_stop_2224_);
lean_dec(v_stop_2224_);
v_res_2235_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Deriving_mkLet_spec__0(v_as_2222_, v_i_boxed_2233_, v_stop_boxed_2234_, v_b_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_);
lean_dec(v___y_2231_);
lean_dec_ref(v___y_2230_);
lean_dec(v___y_2229_);
lean_dec_ref(v___y_2228_);
lean_dec(v___y_2227_);
lean_dec_ref(v___y_2226_);
lean_dec_ref(v_as_2222_);
return v_res_2235_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1(lean_object* v_className_2245_, lean_object* v_name_2246_, lean_object* v___f_2247_, lean_object* v___x_2248_, lean_object* v___x_2249_, lean_object* v___x_2250_, lean_object* v___x_2251_, lean_object* v___x_2252_, lean_object* v___x_2253_, lean_object* v_b_2254_, lean_object* v_____r_2255_, lean_object* v_val_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_){
_start:
{
lean_object* v___x_2264_; 
v___x_2264_ = l_Lean_Elab_Deriving_mkInstName(v_className_2245_, v_name_2246_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_, v___y_2262_);
if (lean_obj_tag(v___x_2264_) == 0)
{
lean_object* v_a_2265_; lean_object* v___x_2266_; 
v_a_2265_ = lean_ctor_get(v___x_2264_, 0);
lean_inc(v_a_2265_);
lean_dec_ref_known(v___x_2264_, 1);
lean_inc(v___y_2262_);
lean_inc_ref(v___y_2261_);
lean_inc(v___y_2260_);
lean_inc_ref(v___y_2259_);
lean_inc(v___y_2258_);
lean_inc_ref(v___y_2257_);
v___x_2266_ = lean_apply_7(v___f_2247_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_, v___y_2262_, lean_box(0));
if (lean_obj_tag(v___x_2266_) == 0)
{
lean_object* v_a_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2316_; 
v_a_2267_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2316_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2316_ == 0)
{
v___x_2269_ = v___x_2266_;
v_isShared_2270_ = v_isSharedCheck_2316_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_a_2267_);
lean_dec(v___x_2266_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2316_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2314_; 
v___x_2271_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__0));
v___x_2272_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__1));
lean_inc_ref_n(v___x_2249_, 8);
lean_inc_ref_n(v___x_2248_, 8);
v___x_2273_ = l_Lean_Name_mkStr4(v___x_2248_, v___x_2249_, v___x_2271_, v___x_2272_);
v___x_2274_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__2));
v___x_2275_ = l_Lean_Name_mkStr4(v___x_2248_, v___x_2249_, v___x_2271_, v___x_2274_);
v___x_2276_ = lean_obj_once(&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10, &l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10_once, _init_l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10);
lean_inc_n(v___x_2250_, 2);
lean_inc_n(v_a_2267_, 14);
v___x_2277_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2277_, 0, v_a_2267_);
lean_ctor_set(v___x_2277_, 1, v___x_2250_);
lean_ctor_set(v___x_2277_, 2, v___x_2276_);
lean_inc_ref_n(v___x_2277_, 12);
v___x_2278_ = l_Lean_Syntax_node7(v_a_2267_, v___x_2275_, v___x_2277_, v___x_2277_, v___x_2277_, v___x_2277_, v___x_2277_, v___x_2277_, v___x_2277_);
v___x_2279_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__3));
v___x_2280_ = l_Lean_Name_mkStr4(v___x_2248_, v___x_2249_, v___x_2271_, v___x_2279_);
v___x_2281_ = ((lean_object*)(l_List_filterTR_loop___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__4___closed__2));
lean_inc_ref(v___x_2251_);
v___x_2282_ = l_Lean_Name_mkStr4(v___x_2248_, v___x_2249_, v___x_2251_, v___x_2281_);
v___x_2283_ = l_Lean_Syntax_node1(v_a_2267_, v___x_2282_, v___x_2277_);
v___x_2284_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2284_, 0, v_a_2267_);
lean_ctor_set(v___x_2284_, 1, v___x_2279_);
v___x_2285_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__4));
v___x_2286_ = l_Lean_Name_mkStr4(v___x_2248_, v___x_2249_, v___x_2271_, v___x_2285_);
v___x_2287_ = l_Lean_mkIdent(v_a_2265_);
v___x_2288_ = l_Lean_Syntax_node2(v_a_2267_, v___x_2286_, v___x_2287_, v___x_2277_);
v___x_2289_ = l_Lean_Syntax_node1(v_a_2267_, v___x_2250_, v___x_2288_);
v___x_2290_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__5));
v___x_2291_ = l_Lean_Name_mkStr4(v___x_2248_, v___x_2249_, v___x_2271_, v___x_2290_);
v___x_2292_ = l_Array_append___redArg(v___x_2276_, v___x_2252_);
v___x_2293_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2293_, 0, v_a_2267_);
lean_ctor_set(v___x_2293_, 1, v___x_2250_);
lean_ctor_set(v___x_2293_, 2, v___x_2292_);
v___x_2294_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__12));
v___x_2295_ = l_Lean_Name_mkStr4(v___x_2248_, v___x_2249_, v___x_2251_, v___x_2294_);
v___x_2296_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__14));
v___x_2297_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2297_, 0, v_a_2267_);
lean_ctor_set(v___x_2297_, 1, v___x_2296_);
v___x_2298_ = l_Lean_Syntax_node2(v_a_2267_, v___x_2295_, v___x_2297_, v___x_2253_);
v___x_2299_ = l_Lean_Syntax_node2(v_a_2267_, v___x_2291_, v___x_2293_, v___x_2298_);
v___x_2300_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__6));
v___x_2301_ = l_Lean_Name_mkStr4(v___x_2248_, v___x_2249_, v___x_2271_, v___x_2300_);
v___x_2302_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__15));
v___x_2303_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2303_, 0, v_a_2267_);
lean_ctor_set(v___x_2303_, 1, v___x_2302_);
v___x_2304_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__7));
v___x_2305_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___closed__8));
v___x_2306_ = l_Lean_Name_mkStr4(v___x_2248_, v___x_2249_, v___x_2304_, v___x_2305_);
v___x_2307_ = l_Lean_Syntax_node2(v_a_2267_, v___x_2306_, v___x_2277_, v___x_2277_);
v___x_2308_ = l_Lean_Syntax_node4(v_a_2267_, v___x_2301_, v___x_2303_, v_val_2256_, v___x_2307_, v___x_2277_);
v___x_2309_ = l_Lean_Syntax_node6(v_a_2267_, v___x_2280_, v___x_2283_, v___x_2284_, v___x_2277_, v___x_2289_, v___x_2299_, v___x_2308_);
v___x_2310_ = l_Lean_Syntax_node2(v_a_2267_, v___x_2273_, v___x_2278_, v___x_2309_);
v___x_2311_ = lean_array_push(v_b_2254_, v___x_2310_);
v___x_2312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2311_);
if (v_isShared_2270_ == 0)
{
lean_ctor_set(v___x_2269_, 0, v___x_2312_);
v___x_2314_ = v___x_2269_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v___x_2312_);
v___x_2314_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
return v___x_2314_;
}
}
}
else
{
lean_object* v_a_2317_; lean_object* v___x_2319_; uint8_t v_isShared_2320_; uint8_t v_isSharedCheck_2324_; 
lean_dec(v_a_2265_);
lean_dec(v_val_2256_);
lean_dec_ref(v_b_2254_);
lean_dec(v___x_2253_);
lean_dec_ref(v___x_2251_);
lean_dec(v___x_2250_);
lean_dec_ref(v___x_2249_);
lean_dec_ref(v___x_2248_);
v_a_2317_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2324_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2324_ == 0)
{
v___x_2319_ = v___x_2266_;
v_isShared_2320_ = v_isSharedCheck_2324_;
goto v_resetjp_2318_;
}
else
{
lean_inc(v_a_2317_);
lean_dec(v___x_2266_);
v___x_2319_ = lean_box(0);
v_isShared_2320_ = v_isSharedCheck_2324_;
goto v_resetjp_2318_;
}
v_resetjp_2318_:
{
lean_object* v___x_2322_; 
if (v_isShared_2320_ == 0)
{
v___x_2322_ = v___x_2319_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2323_; 
v_reuseFailAlloc_2323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2323_, 0, v_a_2317_);
v___x_2322_ = v_reuseFailAlloc_2323_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
return v___x_2322_;
}
}
}
}
else
{
lean_object* v_a_2325_; lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2332_; 
lean_dec(v_val_2256_);
lean_dec_ref(v_b_2254_);
lean_dec(v___x_2253_);
lean_dec_ref(v___x_2251_);
lean_dec(v___x_2250_);
lean_dec_ref(v___x_2249_);
lean_dec_ref(v___x_2248_);
lean_dec_ref(v___f_2247_);
v_a_2325_ = lean_ctor_get(v___x_2264_, 0);
v_isSharedCheck_2332_ = !lean_is_exclusive(v___x_2264_);
if (v_isSharedCheck_2332_ == 0)
{
v___x_2327_ = v___x_2264_;
v_isShared_2328_ = v_isSharedCheck_2332_;
goto v_resetjp_2326_;
}
else
{
lean_inc(v_a_2325_);
lean_dec(v___x_2264_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2332_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
lean_object* v___x_2330_; 
if (v_isShared_2328_ == 0)
{
v___x_2330_ = v___x_2327_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v_a_2325_);
v___x_2330_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
return v___x_2330_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1___boxed(lean_object** _args){
lean_object* v_className_2333_ = _args[0];
lean_object* v_name_2334_ = _args[1];
lean_object* v___f_2335_ = _args[2];
lean_object* v___x_2336_ = _args[3];
lean_object* v___x_2337_ = _args[4];
lean_object* v___x_2338_ = _args[5];
lean_object* v___x_2339_ = _args[6];
lean_object* v___x_2340_ = _args[7];
lean_object* v___x_2341_ = _args[8];
lean_object* v_b_2342_ = _args[9];
lean_object* v_____r_2343_ = _args[10];
lean_object* v_val_2344_ = _args[11];
lean_object* v___y_2345_ = _args[12];
lean_object* v___y_2346_ = _args[13];
lean_object* v___y_2347_ = _args[14];
lean_object* v___y_2348_ = _args[15];
lean_object* v___y_2349_ = _args[16];
lean_object* v___y_2350_ = _args[17];
lean_object* v___y_2351_ = _args[18];
_start:
{
lean_object* v_res_2352_; 
v_res_2352_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1(v_className_2333_, v_name_2334_, v___f_2335_, v___x_2336_, v___x_2337_, v___x_2338_, v___x_2339_, v___x_2340_, v___x_2341_, v_b_2342_, v_____r_2343_, v_val_2344_, v___y_2345_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_);
lean_dec(v___y_2350_);
lean_dec_ref(v___y_2349_);
lean_dec(v___y_2348_);
lean_dec_ref(v___y_2347_);
lean_dec(v___y_2346_);
lean_dec_ref(v___y_2345_);
lean_dec_ref(v___x_2340_);
return v_res_2352_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0_spec__0(lean_object* v_a_2353_, lean_object* v_as_2354_, size_t v_i_2355_, size_t v_stop_2356_){
_start:
{
uint8_t v___x_2357_; 
v___x_2357_ = lean_usize_dec_eq(v_i_2355_, v_stop_2356_);
if (v___x_2357_ == 0)
{
lean_object* v___x_2358_; uint8_t v___x_2359_; 
v___x_2358_ = lean_array_uget_borrowed(v_as_2354_, v_i_2355_);
v___x_2359_ = lean_name_eq(v_a_2353_, v___x_2358_);
if (v___x_2359_ == 0)
{
size_t v___x_2360_; size_t v___x_2361_; 
v___x_2360_ = ((size_t)1ULL);
v___x_2361_ = lean_usize_add(v_i_2355_, v___x_2360_);
v_i_2355_ = v___x_2361_;
goto _start;
}
else
{
return v___x_2359_;
}
}
else
{
uint8_t v___x_2363_; 
v___x_2363_ = 0;
return v___x_2363_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0_spec__0___boxed(lean_object* v_a_2364_, lean_object* v_as_2365_, lean_object* v_i_2366_, lean_object* v_stop_2367_){
_start:
{
size_t v_i_boxed_2368_; size_t v_stop_boxed_2369_; uint8_t v_res_2370_; lean_object* v_r_2371_; 
v_i_boxed_2368_ = lean_unbox_usize(v_i_2366_);
lean_dec(v_i_2366_);
v_stop_boxed_2369_ = lean_unbox_usize(v_stop_2367_);
lean_dec(v_stop_2367_);
v_res_2370_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0_spec__0(v_a_2364_, v_as_2365_, v_i_boxed_2368_, v_stop_boxed_2369_);
lean_dec_ref(v_as_2365_);
lean_dec(v_a_2364_);
v_r_2371_ = lean_box(v_res_2370_);
return v_r_2371_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0(lean_object* v_as_2372_, lean_object* v_a_2373_){
_start:
{
lean_object* v___x_2374_; lean_object* v___x_2375_; uint8_t v___x_2376_; 
v___x_2374_ = lean_unsigned_to_nat(0u);
v___x_2375_ = lean_array_get_size(v_as_2372_);
v___x_2376_ = lean_nat_dec_lt(v___x_2374_, v___x_2375_);
if (v___x_2376_ == 0)
{
return v___x_2376_;
}
else
{
size_t v___x_2377_; size_t v___x_2378_; uint8_t v___x_2379_; 
v___x_2377_ = ((size_t)0ULL);
v___x_2378_ = lean_usize_of_nat(v___x_2375_);
v___x_2379_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0_spec__0(v_a_2373_, v_as_2372_, v___x_2377_, v___x_2378_);
return v___x_2379_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0___boxed(lean_object* v_as_2380_, lean_object* v_a_2381_){
_start:
{
uint8_t v_res_2382_; lean_object* v_r_2383_; 
v_res_2382_ = l_Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0(v_as_2380_, v_a_2381_);
lean_dec(v_a_2381_);
lean_dec_ref(v_as_2380_);
v_r_2383_ = lean_box(v_res_2382_);
return v_r_2383_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg(lean_object* v_upperBound_2385_, lean_object* v___x_2386_, lean_object* v_typeNames_2387_, lean_object* v_ctx_2388_, lean_object* v_className_2389_, uint8_t v_useAnonCtor_2390_, lean_object* v_a_2391_, lean_object* v_b_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_){
_start:
{
lean_object* v_a_2401_; lean_object* v___y_2406_; uint8_t v___x_2425_; 
v___x_2425_ = lean_nat_dec_lt(v_a_2391_, v_upperBound_2385_);
if (v___x_2425_ == 0)
{
lean_object* v___x_2426_; 
lean_dec(v_a_2391_);
lean_dec(v_className_2389_);
v___x_2426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2426_, 0, v_b_2392_);
return v___x_2426_;
}
else
{
lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v_toConstantVal_2429_; lean_object* v_name_2430_; uint8_t v___x_2431_; 
v___x_2427_ = l_Lean_instInhabitedInductiveVal_default;
v___x_2428_ = lean_array_get_borrowed(v___x_2427_, v___x_2386_, v_a_2391_);
v_toConstantVal_2429_ = lean_ctor_get(v___x_2428_, 0);
v_name_2430_ = lean_ctor_get(v_toConstantVal_2429_, 0);
v___x_2431_ = l_Array_contains___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__0(v_typeNames_2387_, v_name_2430_);
if (v___x_2431_ == 0)
{
v_a_2401_ = v_b_2392_;
goto v___jp_2400_;
}
else
{
lean_object* v_auxFunNames_2432_; lean_object* v___f_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; 
v_auxFunNames_2432_ = lean_ctor_get(v_ctx_2388_, 2);
v___f_2433_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___closed__0));
v___x_2434_ = lean_box(0);
v___x_2435_ = lean_array_get_borrowed(v___x_2434_, v_auxFunNames_2432_, v_a_2391_);
lean_inc(v___x_2428_);
v___x_2436_ = l_Lean_Elab_Deriving_mkInductArgNames(v___x_2428_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
if (lean_obj_tag(v___x_2436_) == 0)
{
lean_object* v_a_2437_; lean_object* v___x_2438_; 
v_a_2437_ = lean_ctor_get(v___x_2436_, 0);
lean_inc_n(v_a_2437_, 2);
lean_dec_ref_known(v___x_2436_, 1);
v___x_2438_ = l_Lean_Elab_Deriving_mkImplicitBinders(v_a_2437_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
if (lean_obj_tag(v___x_2438_) == 0)
{
lean_object* v_a_2439_; lean_object* v___x_2440_; 
v_a_2439_ = lean_ctor_get(v___x_2438_, 0);
lean_inc(v_a_2439_);
lean_dec_ref_known(v___x_2438_, 1);
lean_inc(v_a_2437_);
lean_inc(v___x_2428_);
lean_inc(v_className_2389_);
v___x_2440_ = l_Lean_Elab_Deriving_mkInstImplicitBinders(v_className_2389_, v___x_2428_, v_a_2437_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
if (lean_obj_tag(v___x_2440_) == 0)
{
lean_object* v_a_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; 
v_a_2441_ = lean_ctor_get(v___x_2440_, 0);
lean_inc(v_a_2441_);
lean_dec_ref_known(v___x_2440_, 1);
v___x_2442_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__0));
v___x_2443_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__1));
v___x_2444_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__2));
v___x_2445_ = l_Array_append___redArg(v_a_2439_, v_a_2441_);
lean_dec(v_a_2441_);
lean_inc(v___x_2428_);
v___x_2446_ = l_Lean_Elab_Deriving_mkInductiveApp___redArg(v___x_2428_, v_a_2437_, v___y_2397_);
if (lean_obj_tag(v___x_2446_) == 0)
{
lean_object* v_a_2447_; lean_object* v_ref_2448_; uint8_t v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; 
v_a_2447_ = lean_ctor_get(v___x_2446_, 0);
lean_inc(v_a_2447_);
lean_dec_ref_known(v___x_2446_, 1);
v_ref_2448_ = lean_ctor_get(v___y_2397_, 2);
v___x_2449_ = 0;
v___x_2450_ = l_Lean_SourceInfo_fromRef(v_ref_2448_, v___x_2449_);
v___x_2451_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__4));
lean_inc(v_className_2389_);
v___x_2452_ = l_Lean_mkCIdent(v_className_2389_);
v___x_2453_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9));
lean_inc(v___x_2450_);
v___x_2454_ = l_Lean_Syntax_node1(v___x_2450_, v___x_2453_, v_a_2447_);
v___x_2455_ = l_Lean_Syntax_node2(v___x_2450_, v___x_2451_, v___x_2452_, v___x_2454_);
lean_inc(v___x_2435_);
v___x_2456_ = l_Lean_mkIdent(v___x_2435_);
if (v_useAnonCtor_2390_ == 0)
{
lean_object* v___x_2457_; lean_object* v___x_2458_; 
v___x_2457_ = lean_box(0);
lean_inc(v_name_2430_);
lean_inc(v_className_2389_);
v___x_2458_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1(v_className_2389_, v_name_2430_, v___f_2433_, v___x_2442_, v___x_2443_, v___x_2453_, v___x_2444_, v___x_2445_, v___x_2455_, v_b_2392_, v___x_2457_, v___x_2456_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
lean_dec_ref(v___x_2445_);
v___y_2406_ = v___x_2458_;
goto v___jp_2405_;
}
else
{
lean_object* v___x_2459_; 
v___x_2459_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___lam__0(v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
if (lean_obj_tag(v___x_2459_) == 0)
{
lean_object* v_a_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; 
v_a_2460_ = lean_ctor_get(v___x_2459_, 0);
lean_inc_n(v_a_2460_, 4);
lean_dec_ref_known(v___x_2459_, 1);
v___x_2461_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__1));
v___x_2462_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__2));
v___x_2463_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2463_, 0, v_a_2460_);
lean_ctor_set(v___x_2463_, 1, v___x_2462_);
v___x_2464_ = l_Lean_Syntax_node1(v_a_2460_, v___x_2453_, v___x_2456_);
v___x_2465_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__3));
v___x_2466_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2466_, 0, v_a_2460_);
lean_ctor_set(v___x_2466_, 1, v___x_2465_);
v___x_2467_ = l_Lean_Syntax_node3(v_a_2460_, v___x_2461_, v___x_2463_, v___x_2464_, v___x_2466_);
v___x_2468_ = lean_box(0);
lean_inc(v_name_2430_);
lean_inc(v_className_2389_);
v___x_2469_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___lam__1(v_className_2389_, v_name_2430_, v___f_2433_, v___x_2442_, v___x_2443_, v___x_2453_, v___x_2444_, v___x_2445_, v___x_2455_, v_b_2392_, v___x_2468_, v___x_2467_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
lean_dec_ref(v___x_2445_);
v___y_2406_ = v___x_2469_;
goto v___jp_2405_;
}
else
{
lean_object* v_a_2470_; lean_object* v___x_2472_; uint8_t v_isShared_2473_; uint8_t v_isSharedCheck_2477_; 
lean_dec(v___x_2456_);
lean_dec(v___x_2455_);
lean_dec_ref(v___x_2445_);
lean_dec_ref(v_b_2392_);
lean_dec(v_a_2391_);
lean_dec(v_className_2389_);
v_a_2470_ = lean_ctor_get(v___x_2459_, 0);
v_isSharedCheck_2477_ = !lean_is_exclusive(v___x_2459_);
if (v_isSharedCheck_2477_ == 0)
{
v___x_2472_ = v___x_2459_;
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
else
{
lean_inc(v_a_2470_);
lean_dec(v___x_2459_);
v___x_2472_ = lean_box(0);
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
v_resetjp_2471_:
{
lean_object* v___x_2475_; 
if (v_isShared_2473_ == 0)
{
v___x_2475_ = v___x_2472_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_a_2470_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
return v___x_2475_;
}
}
}
}
}
else
{
lean_object* v_a_2478_; lean_object* v___x_2480_; uint8_t v_isShared_2481_; uint8_t v_isSharedCheck_2485_; 
lean_dec_ref(v___x_2445_);
lean_dec_ref(v_b_2392_);
lean_dec(v_a_2391_);
lean_dec(v_className_2389_);
v_a_2478_ = lean_ctor_get(v___x_2446_, 0);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___x_2446_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2480_ = v___x_2446_;
v_isShared_2481_ = v_isSharedCheck_2485_;
goto v_resetjp_2479_;
}
else
{
lean_inc(v_a_2478_);
lean_dec(v___x_2446_);
v___x_2480_ = lean_box(0);
v_isShared_2481_ = v_isSharedCheck_2485_;
goto v_resetjp_2479_;
}
v_resetjp_2479_:
{
lean_object* v___x_2483_; 
if (v_isShared_2481_ == 0)
{
v___x_2483_ = v___x_2480_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v_a_2478_);
v___x_2483_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
return v___x_2483_;
}
}
}
}
else
{
lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2493_; 
lean_dec(v_a_2439_);
lean_dec(v_a_2437_);
lean_dec_ref(v_b_2392_);
lean_dec(v_a_2391_);
lean_dec(v_className_2389_);
v_a_2486_ = lean_ctor_get(v___x_2440_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2440_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2488_ = v___x_2440_;
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2440_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2493_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2491_; 
if (v_isShared_2489_ == 0)
{
v___x_2491_ = v___x_2488_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_a_2486_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
return v___x_2491_;
}
}
}
}
else
{
lean_dec(v_a_2437_);
lean_dec_ref(v_b_2392_);
lean_dec(v_a_2391_);
lean_dec(v_className_2389_);
return v___x_2438_;
}
}
else
{
lean_object* v_a_2494_; lean_object* v___x_2496_; uint8_t v_isShared_2497_; uint8_t v_isSharedCheck_2501_; 
lean_dec_ref(v_b_2392_);
lean_dec(v_a_2391_);
lean_dec(v_className_2389_);
v_a_2494_ = lean_ctor_get(v___x_2436_, 0);
v_isSharedCheck_2501_ = !lean_is_exclusive(v___x_2436_);
if (v_isSharedCheck_2501_ == 0)
{
v___x_2496_ = v___x_2436_;
v_isShared_2497_ = v_isSharedCheck_2501_;
goto v_resetjp_2495_;
}
else
{
lean_inc(v_a_2494_);
lean_dec(v___x_2436_);
v___x_2496_ = lean_box(0);
v_isShared_2497_ = v_isSharedCheck_2501_;
goto v_resetjp_2495_;
}
v_resetjp_2495_:
{
lean_object* v___x_2499_; 
if (v_isShared_2497_ == 0)
{
v___x_2499_ = v___x_2496_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2500_; 
v_reuseFailAlloc_2500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2500_, 0, v_a_2494_);
v___x_2499_ = v_reuseFailAlloc_2500_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
return v___x_2499_;
}
}
}
}
}
v___jp_2400_:
{
lean_object* v___x_2402_; lean_object* v___x_2403_; 
v___x_2402_ = lean_unsigned_to_nat(1u);
v___x_2403_ = lean_nat_add(v_a_2391_, v___x_2402_);
lean_dec(v_a_2391_);
v_a_2391_ = v___x_2403_;
v_b_2392_ = v_a_2401_;
goto _start;
}
v___jp_2405_:
{
if (lean_obj_tag(v___y_2406_) == 0)
{
lean_object* v_a_2407_; lean_object* v___x_2409_; uint8_t v_isShared_2410_; uint8_t v_isSharedCheck_2416_; 
v_a_2407_ = lean_ctor_get(v___y_2406_, 0);
v_isSharedCheck_2416_ = !lean_is_exclusive(v___y_2406_);
if (v_isSharedCheck_2416_ == 0)
{
v___x_2409_ = v___y_2406_;
v_isShared_2410_ = v_isSharedCheck_2416_;
goto v_resetjp_2408_;
}
else
{
lean_inc(v_a_2407_);
lean_dec(v___y_2406_);
v___x_2409_ = lean_box(0);
v_isShared_2410_ = v_isSharedCheck_2416_;
goto v_resetjp_2408_;
}
v_resetjp_2408_:
{
if (lean_obj_tag(v_a_2407_) == 0)
{
lean_object* v_a_2411_; lean_object* v___x_2413_; 
lean_dec(v_a_2391_);
lean_dec(v_className_2389_);
v_a_2411_ = lean_ctor_get(v_a_2407_, 0);
lean_inc(v_a_2411_);
lean_dec_ref_known(v_a_2407_, 1);
if (v_isShared_2410_ == 0)
{
lean_ctor_set(v___x_2409_, 0, v_a_2411_);
v___x_2413_ = v___x_2409_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v_a_2411_);
v___x_2413_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
return v___x_2413_;
}
}
else
{
lean_object* v_a_2415_; 
lean_del_object(v___x_2409_);
v_a_2415_ = lean_ctor_get(v_a_2407_, 0);
lean_inc(v_a_2415_);
lean_dec_ref_known(v_a_2407_, 1);
v_a_2401_ = v_a_2415_;
goto v___jp_2400_;
}
}
}
else
{
lean_object* v_a_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2424_; 
lean_dec(v_a_2391_);
lean_dec(v_className_2389_);
v_a_2417_ = lean_ctor_get(v___y_2406_, 0);
v_isSharedCheck_2424_ = !lean_is_exclusive(v___y_2406_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2419_ = v___y_2406_;
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_a_2417_);
lean_dec(v___y_2406_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2422_; 
if (v_isShared_2420_ == 0)
{
v___x_2422_ = v___x_2419_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2423_; 
v_reuseFailAlloc_2423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2423_, 0, v_a_2417_);
v___x_2422_ = v_reuseFailAlloc_2423_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
return v___x_2422_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg___boxed(lean_object* v_upperBound_2502_, lean_object* v___x_2503_, lean_object* v_typeNames_2504_, lean_object* v_ctx_2505_, lean_object* v_className_2506_, lean_object* v_useAnonCtor_2507_, lean_object* v_a_2508_, lean_object* v_b_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_){
_start:
{
uint8_t v_useAnonCtor_boxed_2517_; lean_object* v_res_2518_; 
v_useAnonCtor_boxed_2517_ = lean_unbox(v_useAnonCtor_2507_);
v_res_2518_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg(v_upperBound_2502_, v___x_2503_, v_typeNames_2504_, v_ctx_2505_, v_className_2506_, v_useAnonCtor_boxed_2517_, v_a_2508_, v_b_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_);
lean_dec(v___y_2515_);
lean_dec_ref(v___y_2514_);
lean_dec(v___y_2513_);
lean_dec_ref(v___y_2512_);
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec_ref(v_ctx_2505_);
lean_dec_ref(v_typeNames_2504_);
lean_dec_ref(v___x_2503_);
lean_dec(v_upperBound_2502_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstanceCmds(lean_object* v_ctx_2519_, lean_object* v_className_2520_, lean_object* v_typeNames_2521_, uint8_t v_useAnonCtor_2522_, lean_object* v_a_2523_, lean_object* v_a_2524_, lean_object* v_a_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_){
_start:
{
lean_object* v_typeInfos_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v_instances_2533_; lean_object* v___x_2534_; 
v_typeInfos_2530_ = lean_ctor_get(v_ctx_2519_, 1);
v___x_2531_ = lean_array_get_size(v_typeInfos_2530_);
v___x_2532_ = lean_unsigned_to_nat(0u);
v_instances_2533_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___closed__0));
v___x_2534_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg(v___x_2531_, v_typeInfos_2530_, v_typeNames_2521_, v_ctx_2519_, v_className_2520_, v_useAnonCtor_2522_, v___x_2532_, v_instances_2533_, v_a_2523_, v_a_2524_, v_a_2525_, v_a_2526_, v_a_2527_, v_a_2528_);
return v___x_2534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkInstanceCmds___boxed(lean_object* v_ctx_2535_, lean_object* v_className_2536_, lean_object* v_typeNames_2537_, lean_object* v_useAnonCtor_2538_, lean_object* v_a_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_, lean_object* v_a_2542_, lean_object* v_a_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_){
_start:
{
uint8_t v_useAnonCtor_boxed_2546_; lean_object* v_res_2547_; 
v_useAnonCtor_boxed_2546_ = lean_unbox(v_useAnonCtor_2538_);
v_res_2547_ = l_Lean_Elab_Deriving_mkInstanceCmds(v_ctx_2535_, v_className_2536_, v_typeNames_2537_, v_useAnonCtor_boxed_2546_, v_a_2539_, v_a_2540_, v_a_2541_, v_a_2542_, v_a_2543_, v_a_2544_);
lean_dec(v_a_2544_);
lean_dec_ref(v_a_2543_);
lean_dec(v_a_2542_);
lean_dec_ref(v_a_2541_);
lean_dec(v_a_2540_);
lean_dec_ref(v_a_2539_);
lean_dec_ref(v_typeNames_2537_);
lean_dec_ref(v_ctx_2535_);
return v_res_2547_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1(lean_object* v_upperBound_2548_, lean_object* v___x_2549_, lean_object* v_typeNames_2550_, lean_object* v_ctx_2551_, lean_object* v_className_2552_, uint8_t v_useAnonCtor_2553_, lean_object* v_inst_2554_, lean_object* v_R_2555_, lean_object* v_a_2556_, lean_object* v_b_2557_, lean_object* v_c_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_){
_start:
{
lean_object* v___x_2566_; 
v___x_2566_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___redArg(v_upperBound_2548_, v___x_2549_, v_typeNames_2550_, v_ctx_2551_, v_className_2552_, v_useAnonCtor_2553_, v_a_2556_, v_b_2557_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_);
return v___x_2566_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_2567_ = _args[0];
lean_object* v___x_2568_ = _args[1];
lean_object* v_typeNames_2569_ = _args[2];
lean_object* v_ctx_2570_ = _args[3];
lean_object* v_className_2571_ = _args[4];
lean_object* v_useAnonCtor_2572_ = _args[5];
lean_object* v_inst_2573_ = _args[6];
lean_object* v_R_2574_ = _args[7];
lean_object* v_a_2575_ = _args[8];
lean_object* v_b_2576_ = _args[9];
lean_object* v_c_2577_ = _args[10];
lean_object* v___y_2578_ = _args[11];
lean_object* v___y_2579_ = _args[12];
lean_object* v___y_2580_ = _args[13];
lean_object* v___y_2581_ = _args[14];
lean_object* v___y_2582_ = _args[15];
lean_object* v___y_2583_ = _args[16];
lean_object* v___y_2584_ = _args[17];
_start:
{
uint8_t v_useAnonCtor_boxed_2585_; lean_object* v_res_2586_; 
v_useAnonCtor_boxed_2585_ = lean_unbox(v_useAnonCtor_2572_);
v_res_2586_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkInstanceCmds_spec__1(v_upperBound_2567_, v___x_2568_, v_typeNames_2569_, v_ctx_2570_, v_className_2571_, v_useAnonCtor_boxed_2585_, v_inst_2573_, v_R_2574_, v_a_2575_, v_b_2576_, v_c_2577_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_);
lean_dec(v___y_2583_);
lean_dec_ref(v___y_2582_);
lean_dec(v___y_2581_);
lean_dec_ref(v___y_2580_);
lean_dec(v___y_2579_);
lean_dec_ref(v___y_2578_);
lean_dec_ref(v_ctx_2570_);
lean_dec_ref(v_typeNames_2569_);
lean_dec_ref(v___x_2568_);
lean_dec(v_upperBound_2567_);
return v_res_2586_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0_spec__0_spec__1(lean_object* v_msgData_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_){
_start:
{
lean_object* v___x_2591_; lean_object* v_toCold_2592_; lean_object* v_env_2593_; lean_object* v_options_2594_; uint8_t v___x_2595_; lean_object* v_env_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v___x_2591_ = lean_st_ref_get(v___y_2589_);
v_toCold_2592_ = lean_ctor_get(v___y_2588_, 0);
v_env_2593_ = lean_ctor_get(v___x_2591_, 0);
lean_inc_ref(v_env_2593_);
lean_dec(v___x_2591_);
v_options_2594_ = lean_ctor_get(v_toCold_2592_, 2);
v___x_2595_ = 0;
v_env_2596_ = l_Lean_Environment_setRecordingDeps(v_env_2593_, v___x_2595_);
v___x_2597_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__2);
v___x_2598_ = lean_unsigned_to_nat(32u);
v___x_2599_ = lean_mk_empty_array_with_capacity(v___x_2598_);
lean_dec_ref(v___x_2599_);
v___x_2600_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__6_spec__6___redArg___closed__5);
lean_inc_ref(v_options_2594_);
v___x_2601_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2601_, 0, v_env_2596_);
lean_ctor_set(v___x_2601_, 1, v___x_2597_);
lean_ctor_set(v___x_2601_, 2, v___x_2600_);
lean_ctor_set(v___x_2601_, 3, v_options_2594_);
v___x_2602_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2602_, 0, v___x_2601_);
lean_ctor_set(v___x_2602_, 1, v_msgData_2587_);
v___x_2603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2603_, 0, v___x_2602_);
return v___x_2603_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_){
_start:
{
lean_object* v_res_2608_; 
v_res_2608_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0_spec__0_spec__1(v_msgData_2604_, v___y_2605_, v___y_2606_);
lean_dec(v___y_2606_);
lean_dec_ref(v___y_2605_);
return v_res_2608_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0_spec__0___redArg(lean_object* v_msg_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_){
_start:
{
lean_object* v_ref_2613_; lean_object* v___x_2614_; lean_object* v_a_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2623_; 
v_ref_2613_ = lean_ctor_get(v___y_2610_, 2);
v___x_2614_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0_spec__0_spec__1(v_msg_2609_, v___y_2610_, v___y_2611_);
v_a_2615_ = lean_ctor_get(v___x_2614_, 0);
v_isSharedCheck_2623_ = !lean_is_exclusive(v___x_2614_);
if (v_isSharedCheck_2623_ == 0)
{
v___x_2617_ = v___x_2614_;
v_isShared_2618_ = v_isSharedCheck_2623_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_a_2615_);
lean_dec(v___x_2614_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2623_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
lean_object* v___x_2619_; lean_object* v___x_2621_; 
lean_inc(v_ref_2613_);
v___x_2619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2619_, 0, v_ref_2613_);
lean_ctor_set(v___x_2619_, 1, v_a_2615_);
if (v_isShared_2618_ == 0)
{
lean_ctor_set_tag(v___x_2617_, 1);
lean_ctor_set(v___x_2617_, 0, v___x_2619_);
v___x_2621_ = v___x_2617_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v___x_2619_);
v___x_2621_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
return v___x_2621_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0_spec__0___redArg___boxed(lean_object* v_msg_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_){
_start:
{
lean_object* v_res_2628_; 
v_res_2628_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0_spec__0___redArg(v_msg_2624_, v___y_2625_, v___y_2626_);
lean_dec(v___y_2626_);
lean_dec_ref(v___y_2625_);
return v_res_2628_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0(lean_object* v_constName_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_){
_start:
{
lean_object* v___x_2633_; lean_object* v_env_2634_; lean_object* v___x_2635_; 
v___x_2633_ = lean_st_ref_get(v___y_2631_);
v_env_2634_ = lean_ctor_get(v___x_2633_, 0);
lean_inc_ref(v_env_2634_);
lean_dec(v___x_2633_);
lean_inc(v_constName_2629_);
v___x_2635_ = l_Lean_isInductiveCore_x3f(v_env_2634_, v_constName_2629_);
if (lean_obj_tag(v___x_2635_) == 0)
{
lean_object* v___x_2636_; uint8_t v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; 
v___x_2636_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__1);
v___x_2637_ = 0;
v___x_2638_ = l_Lean_MessageData_ofConstName(v_constName_2629_, v___x_2637_);
v___x_2639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2639_, 0, v___x_2636_);
lean_ctor_set(v___x_2639_, 1, v___x_2638_);
v___x_2640_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3, &l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_withoutExposeFromCtors_spec__1___closed__3);
v___x_2641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2639_);
lean_ctor_set(v___x_2641_, 1, v___x_2640_);
v___x_2642_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0_spec__0___redArg(v___x_2641_, v___y_2630_, v___y_2631_);
return v___x_2642_;
}
else
{
lean_object* v_val_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2650_; 
lean_dec(v_constName_2629_);
v_val_2643_ = lean_ctor_get(v___x_2635_, 0);
v_isSharedCheck_2650_ = !lean_is_exclusive(v___x_2635_);
if (v_isSharedCheck_2650_ == 0)
{
v___x_2645_ = v___x_2635_;
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_val_2643_);
lean_dec(v___x_2635_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v___x_2648_; 
if (v_isShared_2646_ == 0)
{
lean_ctor_set_tag(v___x_2645_, 0);
v___x_2648_ = v___x_2645_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v_val_2643_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
return v___x_2648_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0___boxed(lean_object* v_constName_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_){
_start:
{
lean_object* v_res_2655_; 
v_res_2655_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0(v_constName_2651_, v___y_2652_, v___y_2653_);
lean_dec(v___y_2653_);
lean_dec_ref(v___y_2652_);
return v_res_2655_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__1(lean_object* v_as_2656_, size_t v_sz_2657_, size_t v_i_2658_, lean_object* v_b_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_){
_start:
{
lean_object* v_a_2664_; uint8_t v___x_2668_; 
v___x_2668_ = lean_usize_dec_lt(v_i_2658_, v_sz_2657_);
if (v___x_2668_ == 0)
{
lean_object* v___x_2669_; 
v___x_2669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2669_, 0, v_b_2659_);
return v___x_2669_;
}
else
{
lean_object* v_fst_2670_; lean_object* v_snd_2671_; lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2710_; 
v_fst_2670_ = lean_ctor_get(v_b_2659_, 0);
v_snd_2671_ = lean_ctor_get(v_b_2659_, 1);
v_isSharedCheck_2710_ = !lean_is_exclusive(v_b_2659_);
if (v_isSharedCheck_2710_ == 0)
{
v___x_2673_ = v_b_2659_;
v_isShared_2674_ = v_isSharedCheck_2710_;
goto v_resetjp_2672_;
}
else
{
lean_inc(v_snd_2671_);
lean_inc(v_fst_2670_);
lean_dec(v_b_2659_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2710_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
lean_object* v___x_2675_; lean_object* v_a_2676_; lean_object* v___x_2677_; 
v___x_2675_ = lean_box(0);
v_a_2676_ = lean_array_uget_borrowed(v_as_2656_, v_i_2658_);
lean_inc(v_a_2676_);
v___x_2677_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0(v_a_2676_, v___y_2660_, v___y_2661_);
if (lean_obj_tag(v___x_2677_) == 0)
{
lean_object* v_a_2678_; lean_object* v___y_2680_; lean_object* v_all_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; 
v_a_2678_ = lean_ctor_get(v___x_2677_, 0);
lean_inc(v_a_2678_);
lean_dec_ref_known(v___x_2677_, 1);
v_all_2684_ = lean_ctor_get(v_a_2678_, 3);
lean_inc(v_all_2684_);
lean_dec(v_a_2678_);
v___x_2685_ = l_List_head_x21___redArg(v___x_2675_, v_all_2684_);
lean_dec(v_all_2684_);
v___x_2686_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_snd_2671_, v___x_2685_);
if (lean_obj_tag(v___x_2686_) == 1)
{
lean_object* v_val_2687_; lean_object* v___x_2688_; uint8_t v___x_2689_; 
lean_dec(v___x_2685_);
v_val_2687_ = lean_ctor_get(v___x_2686_, 0);
lean_inc(v_val_2687_);
lean_dec_ref_known(v___x_2686_, 1);
v___x_2688_ = lean_array_get_size(v_fst_2670_);
v___x_2689_ = lean_nat_dec_lt(v_val_2687_, v___x_2688_);
if (v___x_2689_ == 0)
{
lean_dec(v_val_2687_);
v___y_2680_ = v_fst_2670_;
goto v___jp_2679_;
}
else
{
lean_object* v_v_2690_; lean_object* v___x_2691_; lean_object* v_xs_x27_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
v_v_2690_ = lean_array_fget(v_fst_2670_, v_val_2687_);
v___x_2691_ = lean_box(0);
v_xs_x27_2692_ = lean_array_fset(v_fst_2670_, v_val_2687_, v___x_2691_);
lean_inc(v_a_2676_);
v___x_2693_ = lean_array_push(v_v_2690_, v_a_2676_);
v___x_2694_ = lean_array_fset(v_xs_x27_2692_, v_val_2687_, v___x_2693_);
lean_dec(v_val_2687_);
v___y_2680_ = v___x_2694_;
goto v___jp_2679_;
}
}
else
{
lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; 
lean_dec(v___x_2686_);
lean_del_object(v___x_2673_);
v___x_2695_ = lean_array_get_size(v_fst_2670_);
v___x_2696_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_2685_, v___x_2695_, v_snd_2671_);
v___x_2697_ = lean_unsigned_to_nat(1u);
v___x_2698_ = lean_mk_empty_array_with_capacity(v___x_2697_);
lean_inc(v_a_2676_);
v___x_2699_ = lean_array_push(v___x_2698_, v_a_2676_);
v___x_2700_ = lean_array_push(v_fst_2670_, v___x_2699_);
v___x_2701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2701_, 0, v___x_2700_);
lean_ctor_set(v___x_2701_, 1, v___x_2696_);
v_a_2664_ = v___x_2701_;
goto v___jp_2663_;
}
v___jp_2679_:
{
lean_object* v___x_2682_; 
if (v_isShared_2674_ == 0)
{
lean_ctor_set(v___x_2673_, 0, v___y_2680_);
v___x_2682_ = v___x_2673_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v___y_2680_);
lean_ctor_set(v_reuseFailAlloc_2683_, 1, v_snd_2671_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
v_a_2664_ = v___x_2682_;
goto v___jp_2663_;
}
}
}
else
{
lean_object* v_a_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2709_; 
lean_del_object(v___x_2673_);
lean_dec(v_snd_2671_);
lean_dec(v_fst_2670_);
v_a_2702_ = lean_ctor_get(v___x_2677_, 0);
v_isSharedCheck_2709_ = !lean_is_exclusive(v___x_2677_);
if (v_isSharedCheck_2709_ == 0)
{
v___x_2704_ = v___x_2677_;
v_isShared_2705_ = v_isSharedCheck_2709_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_a_2702_);
lean_dec(v___x_2677_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2709_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v___x_2707_; 
if (v_isShared_2705_ == 0)
{
v___x_2707_ = v___x_2704_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2708_; 
v_reuseFailAlloc_2708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2708_, 0, v_a_2702_);
v___x_2707_ = v_reuseFailAlloc_2708_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
return v___x_2707_;
}
}
}
}
}
v___jp_2663_:
{
size_t v___x_2665_; size_t v___x_2666_; 
v___x_2665_ = ((size_t)1ULL);
v___x_2666_ = lean_usize_add(v_i_2658_, v___x_2665_);
v_i_2658_ = v___x_2666_;
v_b_2659_ = v_a_2664_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__1___boxed(lean_object* v_as_2711_, lean_object* v_sz_2712_, lean_object* v_i_2713_, lean_object* v_b_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_){
_start:
{
size_t v_sz_boxed_2718_; size_t v_i_boxed_2719_; lean_object* v_res_2720_; 
v_sz_boxed_2718_ = lean_unbox_usize(v_sz_2712_);
lean_dec(v_sz_2712_);
v_i_boxed_2719_ = lean_unbox_usize(v_i_2713_);
lean_dec(v_i_2713_);
v_res_2720_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__1(v_as_2711_, v_sz_boxed_2718_, v_i_boxed_2719_, v_b_2714_, v___y_2715_, v___y_2716_);
lean_dec(v___y_2716_);
lean_dec_ref(v___y_2715_);
lean_dec_ref(v_as_2711_);
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_groupByMutualBlock(lean_object* v_declNames_2726_, lean_object* v_a_2727_, lean_object* v_a_2728_){
_start:
{
lean_object* v___x_2730_; size_t v_sz_2731_; size_t v___x_2732_; lean_object* v___x_2733_; 
v___x_2730_ = ((lean_object*)(l_Lean_Elab_Deriving_groupByMutualBlock___closed__1));
v_sz_2731_ = lean_array_size(v_declNames_2726_);
v___x_2732_ = ((size_t)0ULL);
v___x_2733_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__1(v_declNames_2726_, v_sz_2731_, v___x_2732_, v___x_2730_, v_a_2727_, v_a_2728_);
if (lean_obj_tag(v___x_2733_) == 0)
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2742_; 
v_a_2734_ = lean_ctor_get(v___x_2733_, 0);
v_isSharedCheck_2742_ = !lean_is_exclusive(v___x_2733_);
if (v_isSharedCheck_2742_ == 0)
{
v___x_2736_ = v___x_2733_;
v_isShared_2737_ = v_isSharedCheck_2742_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v___x_2733_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2742_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v_fst_2738_; lean_object* v___x_2740_; 
v_fst_2738_ = lean_ctor_get(v_a_2734_, 0);
lean_inc(v_fst_2738_);
lean_dec(v_a_2734_);
if (v_isShared_2737_ == 0)
{
lean_ctor_set(v___x_2736_, 0, v_fst_2738_);
v___x_2740_ = v___x_2736_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v_fst_2738_);
v___x_2740_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
return v___x_2740_;
}
}
}
else
{
lean_object* v_a_2743_; lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2750_; 
v_a_2743_ = lean_ctor_get(v___x_2733_, 0);
v_isSharedCheck_2750_ = !lean_is_exclusive(v___x_2733_);
if (v_isSharedCheck_2750_ == 0)
{
v___x_2745_ = v___x_2733_;
v_isShared_2746_ = v_isSharedCheck_2750_;
goto v_resetjp_2744_;
}
else
{
lean_inc(v_a_2743_);
lean_dec(v___x_2733_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2750_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
lean_object* v___x_2748_; 
if (v_isShared_2746_ == 0)
{
v___x_2748_ = v___x_2745_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v_a_2743_);
v___x_2748_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2747_;
}
v_reusejp_2747_:
{
return v___x_2748_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_groupByMutualBlock___boxed(lean_object* v_declNames_2751_, lean_object* v_a_2752_, lean_object* v_a_2753_, lean_object* v_a_2754_){
_start:
{
lean_object* v_res_2755_; 
v_res_2755_ = l_Lean_Elab_Deriving_groupByMutualBlock(v_declNames_2751_, v_a_2752_, v_a_2753_);
lean_dec(v_a_2753_);
lean_dec_ref(v_a_2752_);
lean_dec_ref(v_declNames_2751_);
return v_res_2755_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0_spec__0(lean_object* v_00_u03b1_2756_, lean_object* v_msg_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_){
_start:
{
lean_object* v___x_2761_; 
v___x_2761_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0_spec__0___redArg(v_msg_2757_, v___y_2758_, v___y_2759_);
return v___x_2761_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2762_, lean_object* v_msg_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_){
_start:
{
lean_object* v_res_2767_; 
v_res_2767_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00Lean_Elab_Deriving_groupByMutualBlock_spec__0_spec__0(v_00_u03b1_2762_, v_msg_2763_, v___y_2764_, v___y_2765_);
lean_dec(v___y_2765_);
lean_dec_ref(v___y_2764_);
return v_res_2767_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscr___redArg(lean_object* v_varName_2774_, lean_object* v_a_2775_){
_start:
{
lean_object* v_ref_2777_; uint8_t v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
v_ref_2777_ = lean_ctor_get(v_a_2775_, 2);
v___x_2778_ = 0;
v___x_2779_ = l_Lean_SourceInfo_fromRef(v_ref_2777_, v___x_2778_);
v___x_2780_ = ((lean_object*)(l_Lean_Elab_Deriving_mkDiscr___redArg___closed__1));
v___x_2781_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9));
v___x_2782_ = lean_obj_once(&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10, &l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10_once, _init_l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10);
lean_inc(v___x_2779_);
v___x_2783_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2783_, 0, v___x_2779_);
lean_ctor_set(v___x_2783_, 1, v___x_2781_);
lean_ctor_set(v___x_2783_, 2, v___x_2782_);
v___x_2784_ = l_Lean_mkIdent(v_varName_2774_);
v___x_2785_ = l_Lean_Syntax_node2(v___x_2779_, v___x_2780_, v___x_2783_, v___x_2784_);
v___x_2786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2786_, 0, v___x_2785_);
return v___x_2786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscr___redArg___boxed(lean_object* v_varName_2787_, lean_object* v_a_2788_, lean_object* v_a_2789_){
_start:
{
lean_object* v_res_2790_; 
v_res_2790_ = l_Lean_Elab_Deriving_mkDiscr___redArg(v_varName_2787_, v_a_2788_);
lean_dec_ref(v_a_2788_);
return v_res_2790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscr(lean_object* v_varName_2791_, lean_object* v_a_2792_, lean_object* v_a_2793_, lean_object* v_a_2794_, lean_object* v_a_2795_, lean_object* v_a_2796_, lean_object* v_a_2797_){
_start:
{
lean_object* v___x_2799_; 
v___x_2799_ = l_Lean_Elab_Deriving_mkDiscr___redArg(v_varName_2791_, v_a_2796_);
return v___x_2799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscr___boxed(lean_object* v_varName_2800_, lean_object* v_a_2801_, lean_object* v_a_2802_, lean_object* v_a_2803_, lean_object* v_a_2804_, lean_object* v_a_2805_, lean_object* v_a_2806_, lean_object* v_a_2807_){
_start:
{
lean_object* v_res_2808_; 
v_res_2808_ = l_Lean_Elab_Deriving_mkDiscr(v_varName_2800_, v_a_2801_, v_a_2802_, v_a_2803_, v_a_2804_, v_a_2805_, v_a_2806_);
lean_dec(v_a_2806_);
lean_dec_ref(v_a_2805_);
lean_dec(v_a_2804_);
lean_dec_ref(v_a_2803_);
lean_dec(v_a_2802_);
lean_dec_ref(v_a_2801_);
return v_res_2808_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg(lean_object* v_upperBound_2812_, lean_object* v_a_2813_, lean_object* v_b_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_){
_start:
{
uint8_t v___x_2818_; 
v___x_2818_ = lean_nat_dec_lt(v_a_2813_, v_upperBound_2812_);
if (v___x_2818_ == 0)
{
lean_object* v___x_2819_; 
lean_dec(v_a_2813_);
v___x_2819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2819_, 0, v_b_2814_);
return v___x_2819_;
}
else
{
lean_object* v___x_2820_; lean_object* v___x_2821_; 
v___x_2820_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___closed__1));
v___x_2821_ = l_Lean_Core_mkFreshUserName(v___x_2820_, v___y_2815_, v___y_2816_);
if (lean_obj_tag(v___x_2821_) == 0)
{
lean_object* v_a_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; 
v_a_2822_ = lean_ctor_get(v___x_2821_, 0);
lean_inc(v_a_2822_);
lean_dec_ref_known(v___x_2821_, 1);
v___x_2823_ = lean_array_push(v_b_2814_, v_a_2822_);
v___x_2824_ = lean_unsigned_to_nat(1u);
v___x_2825_ = lean_nat_add(v_a_2813_, v___x_2824_);
lean_dec(v_a_2813_);
v_a_2813_ = v___x_2825_;
v_b_2814_ = v___x_2823_;
goto _start;
}
else
{
lean_object* v_a_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2834_; 
lean_dec_ref(v_b_2814_);
lean_dec(v_a_2813_);
v_a_2827_ = lean_ctor_get(v___x_2821_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2821_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2829_ = v___x_2821_;
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_a_2827_);
lean_dec(v___x_2821_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v___x_2832_; 
if (v_isShared_2830_ == 0)
{
v___x_2832_ = v___x_2829_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_a_2827_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg___boxed(lean_object* v_upperBound_2835_, lean_object* v_a_2836_, lean_object* v_b_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_){
_start:
{
lean_object* v_res_2841_; 
v_res_2841_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg(v_upperBound_2835_, v_a_2836_, v_b_2837_, v___y_2838_, v___y_2839_);
lean_dec(v___y_2839_);
lean_dec_ref(v___y_2838_);
lean_dec(v_upperBound_2835_);
return v_res_2841_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg(lean_object* v_a_2850_, size_t v_sz_2851_, size_t v_i_2852_, lean_object* v_bs_2853_, lean_object* v___y_2854_){
_start:
{
uint8_t v___x_2856_; 
v___x_2856_ = lean_usize_dec_lt(v_i_2852_, v_sz_2851_);
if (v___x_2856_ == 0)
{
lean_object* v___x_2857_; 
lean_dec(v_a_2850_);
v___x_2857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2857_, 0, v_bs_2853_);
return v___x_2857_;
}
else
{
lean_object* v_ref_2858_; lean_object* v_v_2859_; lean_object* v___x_2860_; lean_object* v_bs_x27_2861_; uint8_t v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; size_t v___x_2878_; size_t v___x_2879_; lean_object* v___x_2880_; 
v_ref_2858_ = lean_ctor_get(v___y_2854_, 2);
v_v_2859_ = lean_array_uget(v_bs_2853_, v_i_2852_);
v___x_2860_ = lean_unsigned_to_nat(0u);
v_bs_x27_2861_ = lean_array_uset(v_bs_2853_, v_i_2852_, v___x_2860_);
v___x_2862_ = 0;
v___x_2863_ = l_Lean_SourceInfo_fromRef(v_ref_2858_, v___x_2862_);
v___x_2864_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__1));
v___x_2865_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__2));
lean_inc_n(v___x_2863_, 6);
v___x_2866_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2866_, 0, v___x_2863_);
lean_ctor_set(v___x_2866_, 1, v___x_2865_);
v___x_2867_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__9));
v___x_2868_ = l_Lean_mkIdent(v_v_2859_);
v___x_2869_ = l_Lean_Syntax_node1(v___x_2863_, v___x_2867_, v___x_2868_);
v___x_2870_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkLocalInstanceLetDecls_spec__1___redArg___closed__14));
v___x_2871_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2863_);
lean_ctor_set(v___x_2871_, 1, v___x_2870_);
lean_inc(v_a_2850_);
v___x_2872_ = l_Lean_Syntax_node2(v___x_2863_, v___x_2867_, v___x_2871_, v_a_2850_);
v___x_2873_ = lean_obj_once(&l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10, &l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10_once, _init_l_Lean_Elab_Deriving_mkInductiveApp___redArg___closed__10);
v___x_2874_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2874_, 0, v___x_2863_);
lean_ctor_set(v___x_2874_, 1, v___x_2867_);
lean_ctor_set(v___x_2874_, 2, v___x_2873_);
v___x_2875_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___closed__3));
v___x_2876_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2876_, 0, v___x_2863_);
lean_ctor_set(v___x_2876_, 1, v___x_2875_);
v___x_2877_ = l_Lean_Syntax_node5(v___x_2863_, v___x_2864_, v___x_2866_, v___x_2869_, v___x_2872_, v___x_2874_, v___x_2876_);
v___x_2878_ = ((size_t)1ULL);
v___x_2879_ = lean_usize_add(v_i_2852_, v___x_2878_);
v___x_2880_ = lean_array_uset(v_bs_x27_2861_, v_i_2852_, v___x_2877_);
v_i_2852_ = v___x_2879_;
v_bs_2853_ = v___x_2880_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg___boxed(lean_object* v_a_2882_, lean_object* v_sz_2883_, lean_object* v_i_2884_, lean_object* v_bs_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_){
_start:
{
size_t v_sz_boxed_2888_; size_t v_i_boxed_2889_; lean_object* v_res_2890_; 
v_sz_boxed_2888_ = lean_unbox_usize(v_sz_2883_);
lean_dec(v_sz_2883_);
v_i_boxed_2889_ = lean_unbox_usize(v_i_2884_);
lean_dec(v_i_2884_);
v_res_2890_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg(v_a_2882_, v_sz_boxed_2888_, v_i_boxed_2889_, v_bs_2885_, v___y_2886_);
lean_dec_ref(v___y_2886_);
return v_res_2890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkHeader(lean_object* v_className_2891_, lean_object* v_arity_2892_, lean_object* v_indVal_2893_, lean_object* v_a_2894_, lean_object* v_a_2895_, lean_object* v_a_2896_, lean_object* v_a_2897_, lean_object* v_a_2898_, lean_object* v_a_2899_){
_start:
{
lean_object* v___x_2901_; 
lean_inc_ref(v_indVal_2893_);
v___x_2901_ = l_Lean_Elab_Deriving_mkInductArgNames(v_indVal_2893_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_, v_a_2899_);
if (lean_obj_tag(v___x_2901_) == 0)
{
lean_object* v_a_2902_; lean_object* v___x_2903_; 
v_a_2902_ = lean_ctor_get(v___x_2901_, 0);
lean_inc_n(v_a_2902_, 2);
lean_dec_ref_known(v___x_2901_, 1);
v___x_2903_ = l_Lean_Elab_Deriving_mkImplicitBinders(v_a_2902_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_, v_a_2899_);
if (lean_obj_tag(v___x_2903_) == 0)
{
lean_object* v_a_2904_; lean_object* v___x_2905_; lean_object* v_a_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; 
v_a_2904_ = lean_ctor_get(v___x_2903_, 0);
lean_inc(v_a_2904_);
lean_dec_ref_known(v___x_2903_, 1);
lean_inc(v_a_2902_);
lean_inc_ref(v_indVal_2893_);
v___x_2905_ = l_Lean_Elab_Deriving_mkInductiveApp___redArg(v_indVal_2893_, v_a_2902_, v_a_2898_);
v_a_2906_ = lean_ctor_get(v___x_2905_, 0);
lean_inc(v_a_2906_);
lean_dec_ref(v___x_2905_);
v___x_2907_ = lean_unsigned_to_nat(0u);
v___x_2908_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInductArgNames___lam__0___closed__0));
v___x_2909_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg(v_arity_2892_, v___x_2907_, v___x_2908_, v_a_2898_, v_a_2899_);
if (lean_obj_tag(v___x_2909_) == 0)
{
lean_object* v_a_2910_; lean_object* v___x_2911_; 
v_a_2910_ = lean_ctor_get(v___x_2909_, 0);
lean_inc(v_a_2910_);
lean_dec_ref_known(v___x_2909_, 1);
lean_inc(v_a_2902_);
v___x_2911_ = l_Lean_Elab_Deriving_mkInstImplicitBinders(v_className_2891_, v_indVal_2893_, v_a_2902_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_, v_a_2899_);
if (lean_obj_tag(v___x_2911_) == 0)
{
lean_object* v_a_2912_; lean_object* v___x_2913_; size_t v_sz_2914_; size_t v___x_2915_; lean_object* v___x_2916_; 
v_a_2912_ = lean_ctor_get(v___x_2911_, 0);
lean_inc(v_a_2912_);
lean_dec_ref_known(v___x_2911_, 1);
v___x_2913_ = l_Array_append___redArg(v_a_2904_, v_a_2912_);
lean_dec(v_a_2912_);
v_sz_2914_ = lean_array_size(v_a_2910_);
v___x_2915_ = ((size_t)0ULL);
lean_inc(v_a_2910_);
lean_inc(v_a_2906_);
v___x_2916_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg(v_a_2906_, v_sz_2914_, v___x_2915_, v_a_2910_, v_a_2898_);
if (lean_obj_tag(v___x_2916_) == 0)
{
lean_object* v_a_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_2926_; 
v_a_2917_ = lean_ctor_get(v___x_2916_, 0);
v_isSharedCheck_2926_ = !lean_is_exclusive(v___x_2916_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2919_ = v___x_2916_;
v_isShared_2920_ = v_isSharedCheck_2926_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_a_2917_);
lean_dec(v___x_2916_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_2926_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2924_; 
v___x_2921_ = l_Array_append___redArg(v___x_2913_, v_a_2917_);
lean_dec(v_a_2917_);
v___x_2922_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2922_, 0, v___x_2921_);
lean_ctor_set(v___x_2922_, 1, v_a_2902_);
lean_ctor_set(v___x_2922_, 2, v_a_2910_);
lean_ctor_set(v___x_2922_, 3, v_a_2906_);
if (v_isShared_2920_ == 0)
{
lean_ctor_set(v___x_2919_, 0, v___x_2922_);
v___x_2924_ = v___x_2919_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v___x_2922_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
return v___x_2924_;
}
}
}
else
{
lean_object* v_a_2927_; lean_object* v___x_2929_; uint8_t v_isShared_2930_; uint8_t v_isSharedCheck_2934_; 
lean_dec_ref(v___x_2913_);
lean_dec(v_a_2910_);
lean_dec(v_a_2906_);
lean_dec(v_a_2902_);
v_a_2927_ = lean_ctor_get(v___x_2916_, 0);
v_isSharedCheck_2934_ = !lean_is_exclusive(v___x_2916_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2929_ = v___x_2916_;
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
else
{
lean_inc(v_a_2927_);
lean_dec(v___x_2916_);
v___x_2929_ = lean_box(0);
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
v_resetjp_2928_:
{
lean_object* v___x_2932_; 
if (v_isShared_2930_ == 0)
{
v___x_2932_ = v___x_2929_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2933_; 
v_reuseFailAlloc_2933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2933_, 0, v_a_2927_);
v___x_2932_ = v_reuseFailAlloc_2933_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
return v___x_2932_;
}
}
}
}
else
{
lean_object* v_a_2935_; lean_object* v___x_2937_; uint8_t v_isShared_2938_; uint8_t v_isSharedCheck_2942_; 
lean_dec(v_a_2910_);
lean_dec(v_a_2906_);
lean_dec(v_a_2904_);
lean_dec(v_a_2902_);
v_a_2935_ = lean_ctor_get(v___x_2911_, 0);
v_isSharedCheck_2942_ = !lean_is_exclusive(v___x_2911_);
if (v_isSharedCheck_2942_ == 0)
{
v___x_2937_ = v___x_2911_;
v_isShared_2938_ = v_isSharedCheck_2942_;
goto v_resetjp_2936_;
}
else
{
lean_inc(v_a_2935_);
lean_dec(v___x_2911_);
v___x_2937_ = lean_box(0);
v_isShared_2938_ = v_isSharedCheck_2942_;
goto v_resetjp_2936_;
}
v_resetjp_2936_:
{
lean_object* v___x_2940_; 
if (v_isShared_2938_ == 0)
{
v___x_2940_ = v___x_2937_;
goto v_reusejp_2939_;
}
else
{
lean_object* v_reuseFailAlloc_2941_; 
v_reuseFailAlloc_2941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2941_, 0, v_a_2935_);
v___x_2940_ = v_reuseFailAlloc_2941_;
goto v_reusejp_2939_;
}
v_reusejp_2939_:
{
return v___x_2940_;
}
}
}
}
else
{
lean_object* v_a_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2950_; 
lean_dec(v_a_2906_);
lean_dec(v_a_2904_);
lean_dec(v_a_2902_);
lean_dec_ref(v_indVal_2893_);
lean_dec(v_className_2891_);
v_a_2943_ = lean_ctor_get(v___x_2909_, 0);
v_isSharedCheck_2950_ = !lean_is_exclusive(v___x_2909_);
if (v_isSharedCheck_2950_ == 0)
{
v___x_2945_ = v___x_2909_;
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_a_2943_);
lean_dec(v___x_2909_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2948_; 
if (v_isShared_2946_ == 0)
{
v___x_2948_ = v___x_2945_;
goto v_reusejp_2947_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v_a_2943_);
v___x_2948_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2947_;
}
v_reusejp_2947_:
{
return v___x_2948_;
}
}
}
}
else
{
lean_object* v_a_2951_; lean_object* v___x_2953_; uint8_t v_isShared_2954_; uint8_t v_isSharedCheck_2958_; 
lean_dec(v_a_2902_);
lean_dec_ref(v_indVal_2893_);
lean_dec(v_className_2891_);
v_a_2951_ = lean_ctor_get(v___x_2903_, 0);
v_isSharedCheck_2958_ = !lean_is_exclusive(v___x_2903_);
if (v_isSharedCheck_2958_ == 0)
{
v___x_2953_ = v___x_2903_;
v_isShared_2954_ = v_isSharedCheck_2958_;
goto v_resetjp_2952_;
}
else
{
lean_inc(v_a_2951_);
lean_dec(v___x_2903_);
v___x_2953_ = lean_box(0);
v_isShared_2954_ = v_isSharedCheck_2958_;
goto v_resetjp_2952_;
}
v_resetjp_2952_:
{
lean_object* v___x_2956_; 
if (v_isShared_2954_ == 0)
{
v___x_2956_ = v___x_2953_;
goto v_reusejp_2955_;
}
else
{
lean_object* v_reuseFailAlloc_2957_; 
v_reuseFailAlloc_2957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2957_, 0, v_a_2951_);
v___x_2956_ = v_reuseFailAlloc_2957_;
goto v_reusejp_2955_;
}
v_reusejp_2955_:
{
return v___x_2956_;
}
}
}
}
else
{
lean_object* v_a_2959_; lean_object* v___x_2961_; uint8_t v_isShared_2962_; uint8_t v_isSharedCheck_2966_; 
lean_dec_ref(v_indVal_2893_);
lean_dec(v_className_2891_);
v_a_2959_ = lean_ctor_get(v___x_2901_, 0);
v_isSharedCheck_2966_ = !lean_is_exclusive(v___x_2901_);
if (v_isSharedCheck_2966_ == 0)
{
v___x_2961_ = v___x_2901_;
v_isShared_2962_ = v_isSharedCheck_2966_;
goto v_resetjp_2960_;
}
else
{
lean_inc(v_a_2959_);
lean_dec(v___x_2901_);
v___x_2961_ = lean_box(0);
v_isShared_2962_ = v_isSharedCheck_2966_;
goto v_resetjp_2960_;
}
v_resetjp_2960_:
{
lean_object* v___x_2964_; 
if (v_isShared_2962_ == 0)
{
v___x_2964_ = v___x_2961_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2965_; 
v_reuseFailAlloc_2965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2965_, 0, v_a_2959_);
v___x_2964_ = v_reuseFailAlloc_2965_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
return v___x_2964_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkHeader___boxed(lean_object* v_className_2967_, lean_object* v_arity_2968_, lean_object* v_indVal_2969_, lean_object* v_a_2970_, lean_object* v_a_2971_, lean_object* v_a_2972_, lean_object* v_a_2973_, lean_object* v_a_2974_, lean_object* v_a_2975_, lean_object* v_a_2976_){
_start:
{
lean_object* v_res_2977_; 
v_res_2977_ = l_Lean_Elab_Deriving_mkHeader(v_className_2967_, v_arity_2968_, v_indVal_2969_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_, v_a_2974_, v_a_2975_);
lean_dec(v_a_2975_);
lean_dec_ref(v_a_2974_);
lean_dec(v_a_2973_);
lean_dec_ref(v_a_2972_);
lean_dec(v_a_2971_);
lean_dec_ref(v_a_2970_);
lean_dec(v_arity_2968_);
return v_res_2977_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0(lean_object* v_a_2978_, size_t v_sz_2979_, size_t v_i_2980_, lean_object* v_bs_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_){
_start:
{
lean_object* v___x_2989_; 
v___x_2989_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___redArg(v_a_2978_, v_sz_2979_, v_i_2980_, v_bs_2981_, v___y_2986_);
return v___x_2989_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0___boxed(lean_object* v_a_2990_, lean_object* v_sz_2991_, lean_object* v_i_2992_, lean_object* v_bs_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_){
_start:
{
size_t v_sz_boxed_3001_; size_t v_i_boxed_3002_; lean_object* v_res_3003_; 
v_sz_boxed_3001_ = lean_unbox_usize(v_sz_2991_);
lean_dec(v_sz_2991_);
v_i_boxed_3002_ = lean_unbox_usize(v_i_2992_);
lean_dec(v_i_2992_);
v_res_3003_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkHeader_spec__0(v_a_2990_, v_sz_boxed_3001_, v_i_boxed_3002_, v_bs_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_, v___y_2998_, v___y_2999_);
lean_dec(v___y_2999_);
lean_dec_ref(v___y_2998_);
lean_dec(v___y_2997_);
lean_dec_ref(v___y_2996_);
lean_dec(v___y_2995_);
lean_dec_ref(v___y_2994_);
return v_res_3003_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1(lean_object* v_upperBound_3004_, lean_object* v_inst_3005_, lean_object* v_R_3006_, lean_object* v_a_3007_, lean_object* v_b_3008_, lean_object* v_c_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_){
_start:
{
lean_object* v___x_3017_; 
v___x_3017_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___redArg(v_upperBound_3004_, v_a_3007_, v_b_3008_, v___y_3014_, v___y_3015_);
return v___x_3017_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1___boxed(lean_object* v_upperBound_3018_, lean_object* v_inst_3019_, lean_object* v_R_3020_, lean_object* v_a_3021_, lean_object* v_b_3022_, lean_object* v_c_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_){
_start:
{
lean_object* v_res_3031_; 
v_res_3031_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkHeader_spec__1(v_upperBound_3018_, v_inst_3019_, v_R_3020_, v_a_3021_, v_b_3022_, v_c_3023_, v___y_3024_, v___y_3025_, v___y_3026_, v___y_3027_, v___y_3028_, v___y_3029_);
lean_dec(v___y_3029_);
lean_dec_ref(v___y_3028_);
lean_dec(v___y_3027_);
lean_dec_ref(v___y_3026_);
lean_dec(v___y_3025_);
lean_dec_ref(v___y_3024_);
lean_dec(v_upperBound_3018_);
return v_res_3031_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0___redArg(lean_object* v_a_3032_, lean_object* v_b_3033_, lean_object* v___y_3034_){
_start:
{
lean_object* v_array_3036_; lean_object* v_start_3037_; lean_object* v_stop_3038_; lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3062_; 
v_array_3036_ = lean_ctor_get(v_a_3032_, 0);
v_start_3037_ = lean_ctor_get(v_a_3032_, 1);
v_stop_3038_ = lean_ctor_get(v_a_3032_, 2);
v_isSharedCheck_3062_ = !lean_is_exclusive(v_a_3032_);
if (v_isSharedCheck_3062_ == 0)
{
v___x_3040_ = v_a_3032_;
v_isShared_3041_ = v_isSharedCheck_3062_;
goto v_resetjp_3039_;
}
else
{
lean_inc(v_stop_3038_);
lean_inc(v_start_3037_);
lean_inc(v_array_3036_);
lean_dec(v_a_3032_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3062_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
uint8_t v___x_3042_; 
v___x_3042_ = lean_nat_dec_lt(v_start_3037_, v_stop_3038_);
if (v___x_3042_ == 0)
{
lean_object* v___x_3043_; 
lean_del_object(v___x_3040_);
lean_dec(v_stop_3038_);
lean_dec(v_start_3037_);
lean_dec_ref(v_array_3036_);
v___x_3043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3043_, 0, v_b_3033_);
return v___x_3043_;
}
else
{
lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3047_; 
v___x_3044_ = lean_unsigned_to_nat(1u);
v___x_3045_ = lean_nat_add(v_start_3037_, v___x_3044_);
lean_inc_ref(v_array_3036_);
if (v_isShared_3041_ == 0)
{
lean_ctor_set(v___x_3040_, 1, v___x_3045_);
v___x_3047_ = v___x_3040_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v_array_3036_);
lean_ctor_set(v_reuseFailAlloc_3061_, 1, v___x_3045_);
lean_ctor_set(v_reuseFailAlloc_3061_, 2, v_stop_3038_);
v___x_3047_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3048_ = lean_array_fget(v_array_3036_, v_start_3037_);
lean_dec(v_start_3037_);
lean_dec_ref(v_array_3036_);
v___x_3049_ = l_Lean_Elab_Deriving_mkDiscr___redArg(v___x_3048_, v___y_3034_);
if (lean_obj_tag(v___x_3049_) == 0)
{
lean_object* v_a_3050_; lean_object* v___x_3051_; 
v_a_3050_ = lean_ctor_get(v___x_3049_, 0);
lean_inc(v_a_3050_);
lean_dec_ref_known(v___x_3049_, 1);
v___x_3051_ = lean_array_push(v_b_3033_, v_a_3050_);
v_a_3032_ = v___x_3047_;
v_b_3033_ = v___x_3051_;
goto _start;
}
else
{
lean_object* v_a_3053_; lean_object* v___x_3055_; uint8_t v_isShared_3056_; uint8_t v_isSharedCheck_3060_; 
lean_dec_ref(v___x_3047_);
lean_dec_ref(v_b_3033_);
v_a_3053_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3060_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3060_ == 0)
{
v___x_3055_ = v___x_3049_;
v_isShared_3056_ = v_isSharedCheck_3060_;
goto v_resetjp_3054_;
}
else
{
lean_inc(v_a_3053_);
lean_dec(v___x_3049_);
v___x_3055_ = lean_box(0);
v_isShared_3056_ = v_isSharedCheck_3060_;
goto v_resetjp_3054_;
}
v_resetjp_3054_:
{
lean_object* v___x_3058_; 
if (v_isShared_3056_ == 0)
{
v___x_3058_ = v___x_3055_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v_a_3053_);
v___x_3058_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
return v___x_3058_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0___redArg___boxed(lean_object* v_a_3063_, lean_object* v_b_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_){
_start:
{
lean_object* v_res_3067_; 
v_res_3067_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0___redArg(v_a_3063_, v_b_3064_, v___y_3065_);
lean_dec_ref(v___y_3065_);
return v_res_3067_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1___redArg(size_t v_sz_3068_, size_t v_i_3069_, lean_object* v_bs_3070_, lean_object* v___y_3071_){
_start:
{
uint8_t v___x_3073_; 
v___x_3073_ = lean_usize_dec_lt(v_i_3069_, v_sz_3068_);
if (v___x_3073_ == 0)
{
lean_object* v___x_3074_; 
v___x_3074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3074_, 0, v_bs_3070_);
return v___x_3074_;
}
else
{
lean_object* v_v_3075_; lean_object* v___x_3076_; lean_object* v_bs_x27_3077_; lean_object* v___x_3078_; 
v_v_3075_ = lean_array_uget(v_bs_3070_, v_i_3069_);
v___x_3076_ = lean_unsigned_to_nat(0u);
v_bs_x27_3077_ = lean_array_uset(v_bs_3070_, v_i_3069_, v___x_3076_);
v___x_3078_ = l_Lean_Elab_Deriving_mkDiscr___redArg(v_v_3075_, v___y_3071_);
if (lean_obj_tag(v___x_3078_) == 0)
{
lean_object* v_a_3079_; size_t v___x_3080_; size_t v___x_3081_; lean_object* v___x_3082_; 
v_a_3079_ = lean_ctor_get(v___x_3078_, 0);
lean_inc(v_a_3079_);
lean_dec_ref_known(v___x_3078_, 1);
v___x_3080_ = ((size_t)1ULL);
v___x_3081_ = lean_usize_add(v_i_3069_, v___x_3080_);
v___x_3082_ = lean_array_uset(v_bs_x27_3077_, v_i_3069_, v_a_3079_);
v_i_3069_ = v___x_3081_;
v_bs_3070_ = v___x_3082_;
goto _start;
}
else
{
lean_object* v_a_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3091_; 
lean_dec_ref(v_bs_x27_3077_);
v_a_3084_ = lean_ctor_get(v___x_3078_, 0);
v_isSharedCheck_3091_ = !lean_is_exclusive(v___x_3078_);
if (v_isSharedCheck_3091_ == 0)
{
v___x_3086_ = v___x_3078_;
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_a_3084_);
lean_dec(v___x_3078_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3091_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3089_; 
if (v_isShared_3087_ == 0)
{
v___x_3089_ = v___x_3086_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_a_3084_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
return v___x_3089_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1___redArg___boxed(lean_object* v_sz_3092_, lean_object* v_i_3093_, lean_object* v_bs_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_){
_start:
{
size_t v_sz_boxed_3097_; size_t v_i_boxed_3098_; lean_object* v_res_3099_; 
v_sz_boxed_3097_ = lean_unbox_usize(v_sz_3092_);
lean_dec(v_sz_3092_);
v_i_boxed_3098_ = lean_unbox_usize(v_i_3093_);
lean_dec(v_i_3093_);
v_res_3099_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1___redArg(v_sz_boxed_3097_, v_i_boxed_3098_, v_bs_3094_, v___y_3095_);
lean_dec_ref(v___y_3095_);
return v_res_3099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscrs(lean_object* v_header_3100_, lean_object* v_indVal_3101_, lean_object* v_a_3102_, lean_object* v_a_3103_, lean_object* v_a_3104_, lean_object* v_a_3105_, lean_object* v_a_3106_, lean_object* v_a_3107_){
_start:
{
lean_object* v_argNames_3109_; lean_object* v_targetNames_3110_; lean_object* v_numParams_3111_; lean_object* v___x_3112_; lean_object* v_discrs_3113_; lean_object* v_lower_3115_; lean_object* v_upper_3116_; lean_object* v___x_3132_; uint8_t v___x_3133_; 
v_argNames_3109_ = lean_ctor_get(v_header_3100_, 1);
lean_inc_ref(v_argNames_3109_);
v_targetNames_3110_ = lean_ctor_get(v_header_3100_, 2);
lean_inc_ref(v_targetNames_3110_);
lean_dec_ref(v_header_3100_);
v_numParams_3111_ = lean_ctor_get(v_indVal_3101_, 1);
lean_inc(v_numParams_3111_);
lean_dec_ref(v_indVal_3101_);
v___x_3112_ = lean_unsigned_to_nat(0u);
v_discrs_3113_ = ((lean_object*)(l_Lean_Elab_Deriving_mkInstImplicitBinders___lam__0___closed__0));
v___x_3132_ = lean_array_get_size(v_argNames_3109_);
v___x_3133_ = lean_nat_dec_le(v_numParams_3111_, v___x_3112_);
if (v___x_3133_ == 0)
{
v_lower_3115_ = v_numParams_3111_;
v_upper_3116_ = v___x_3132_;
goto v___jp_3114_;
}
else
{
lean_dec(v_numParams_3111_);
v_lower_3115_ = v___x_3112_;
v_upper_3116_ = v___x_3132_;
goto v___jp_3114_;
}
v___jp_3114_:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; 
v___x_3117_ = l_Array_toSubarray___redArg(v_argNames_3109_, v_lower_3115_, v_upper_3116_);
v___x_3118_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0___redArg(v___x_3117_, v_discrs_3113_, v_a_3106_);
if (lean_obj_tag(v___x_3118_) == 0)
{
lean_object* v_a_3119_; size_t v_sz_3120_; size_t v___x_3121_; lean_object* v___x_3122_; 
v_a_3119_ = lean_ctor_get(v___x_3118_, 0);
lean_inc(v_a_3119_);
lean_dec_ref_known(v___x_3118_, 1);
v_sz_3120_ = lean_array_size(v_targetNames_3110_);
v___x_3121_ = ((size_t)0ULL);
v___x_3122_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1___redArg(v_sz_3120_, v___x_3121_, v_targetNames_3110_, v_a_3106_);
if (lean_obj_tag(v___x_3122_) == 0)
{
lean_object* v_a_3123_; lean_object* v___x_3125_; uint8_t v_isShared_3126_; uint8_t v_isSharedCheck_3131_; 
v_a_3123_ = lean_ctor_get(v___x_3122_, 0);
v_isSharedCheck_3131_ = !lean_is_exclusive(v___x_3122_);
if (v_isSharedCheck_3131_ == 0)
{
v___x_3125_ = v___x_3122_;
v_isShared_3126_ = v_isSharedCheck_3131_;
goto v_resetjp_3124_;
}
else
{
lean_inc(v_a_3123_);
lean_dec(v___x_3122_);
v___x_3125_ = lean_box(0);
v_isShared_3126_ = v_isSharedCheck_3131_;
goto v_resetjp_3124_;
}
v_resetjp_3124_:
{
lean_object* v___x_3127_; lean_object* v___x_3129_; 
v___x_3127_ = l_Array_append___redArg(v_a_3119_, v_a_3123_);
lean_dec(v_a_3123_);
if (v_isShared_3126_ == 0)
{
lean_ctor_set(v___x_3125_, 0, v___x_3127_);
v___x_3129_ = v___x_3125_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v___x_3127_);
v___x_3129_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
return v___x_3129_;
}
}
}
else
{
lean_dec(v_a_3119_);
return v___x_3122_;
}
}
else
{
lean_dec_ref(v_targetNames_3110_);
return v___x_3118_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Deriving_mkDiscrs___boxed(lean_object* v_header_3134_, lean_object* v_indVal_3135_, lean_object* v_a_3136_, lean_object* v_a_3137_, lean_object* v_a_3138_, lean_object* v_a_3139_, lean_object* v_a_3140_, lean_object* v_a_3141_, lean_object* v_a_3142_){
_start:
{
lean_object* v_res_3143_; 
v_res_3143_ = l_Lean_Elab_Deriving_mkDiscrs(v_header_3134_, v_indVal_3135_, v_a_3136_, v_a_3137_, v_a_3138_, v_a_3139_, v_a_3140_, v_a_3141_);
lean_dec(v_a_3141_);
lean_dec_ref(v_a_3140_);
lean_dec(v_a_3139_);
lean_dec_ref(v_a_3138_);
lean_dec(v_a_3137_);
lean_dec_ref(v_a_3136_);
return v_res_3143_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0(lean_object* v_inst_3144_, lean_object* v_R_3145_, lean_object* v_a_3146_, lean_object* v_b_3147_, lean_object* v_c_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_){
_start:
{
lean_object* v___x_3156_; 
v___x_3156_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0___redArg(v_a_3146_, v_b_3147_, v___y_3153_);
return v___x_3156_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0___boxed(lean_object* v_inst_3157_, lean_object* v_R_3158_, lean_object* v_a_3159_, lean_object* v_b_3160_, lean_object* v_c_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_){
_start:
{
lean_object* v_res_3169_; 
v_res_3169_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Deriving_mkDiscrs_spec__0(v_inst_3157_, v_R_3158_, v_a_3159_, v_b_3160_, v_c_3161_, v___y_3162_, v___y_3163_, v___y_3164_, v___y_3165_, v___y_3166_, v___y_3167_);
lean_dec(v___y_3167_);
lean_dec_ref(v___y_3166_);
lean_dec(v___y_3165_);
lean_dec_ref(v___y_3164_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3162_);
return v_res_3169_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1(size_t v_sz_3170_, size_t v_i_3171_, lean_object* v_bs_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_){
_start:
{
lean_object* v___x_3180_; 
v___x_3180_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1___redArg(v_sz_3170_, v_i_3171_, v_bs_3172_, v___y_3177_);
return v___x_3180_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1___boxed(lean_object* v_sz_3181_, lean_object* v_i_3182_, lean_object* v_bs_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_){
_start:
{
size_t v_sz_boxed_3191_; size_t v_i_boxed_3192_; lean_object* v_res_3193_; 
v_sz_boxed_3191_ = lean_unbox_usize(v_sz_3181_);
lean_dec(v_sz_3181_);
v_i_boxed_3192_ = lean_unbox_usize(v_i_3182_);
lean_dec(v_i_3182_);
v_res_3193_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Deriving_mkDiscrs_spec__1(v_sz_boxed_3191_, v_i_boxed_3192_, v_bs_3183_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_);
lean_dec(v___y_3189_);
lean_dec_ref(v___y_3188_);
lean_dec(v___y_3187_);
lean_dec_ref(v___y_3186_);
lean_dec(v___y_3185_);
lean_dec_ref(v___y_3184_);
return v_res_3193_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DeclNameGen(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Deriving_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DeclNameGen(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Deriving_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Elab_Deriving_implicitBinderF = _init_l_Lean_Elab_Deriving_implicitBinderF();
lean_mark_persistent(l_Lean_Elab_Deriving_implicitBinderF);
l_Lean_Elab_Deriving_instBinderF = _init_l_Lean_Elab_Deriving_instBinderF();
lean_mark_persistent(l_Lean_Elab_Deriving_instBinderF);
l_Lean_Elab_Deriving_explicitBinderF = _init_l_Lean_Elab_Deriving_explicitBinderF();
lean_mark_persistent(l_Lean_Elab_Deriving_explicitBinderF);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Elab_DeclNameGen(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Deriving_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclNameGen(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Deriving_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Deriving_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Deriving_Util(builtin);
}
#ifdef __cplusplus
}
#endif
