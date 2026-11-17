// Lean compiler output
// Module: Lake.Toml.Elab.Value
// Imports: public import Lake.Toml.Data.Value public import Lake.Toml.Grammar meta import all Lake.Toml.Grammar
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_prevn(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_substring_tostring(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint32_t lean_uint32_sub(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_String_instInhabitedSlice;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_string_is_valid_pos(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* l_Substring_Raw_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isLit_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t l_Lake_Toml_RBDict_contains___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_RBDict_push___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lake_Toml_RBDict_findEntry_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lake_Toml_DateTime_ofString_x3f(lean_object*);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Int_negOfNat(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
double lean_float_negate(double);
double lean_float_of_nat(lean_object*);
double lean_float_div(double, double);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instMonadExceptOfExceptionCoreM;
extern lean_object* l_Lean_Core_instMonadRefCoreM;
extern lean_object* l_Lean_Core_instAddMessageContextCoreM;
lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_RBDict_empty___redArg();
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__0;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__1;
static const lean_closure_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__2_value;
static const lean_closure_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__3 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__3_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ill-formed "};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__4 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__4_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__5 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Toml"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "boolean"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__3_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__3_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__2_value),LEAN_SCALAR_PTR_LITERAL(76, 74, 28, 167, 158, 175, 30, 0)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__3 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__3_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "invalid boolean"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__4 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__4_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__5;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__6 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__6_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__7_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__7_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__6_value),LEAN_SCALAR_PTR_LITERAL(94, 186, 129, 3, 94, 77, 39, 82)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__7 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__7_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__8 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__8_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__9_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__9_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__8_value),LEAN_SCALAR_PTR_LITERAL(45, 94, 147, 128, 103, 18, 162, 55)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__9 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeSign(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecInt(lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decInt"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(146, 5, 249, 175, 125, 238, 54, 100)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "ill-formed decimal integer syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__2_value)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__3 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__3_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__0;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__1;
static const lean_array_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inf"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__0_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nan"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__1_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__2;
LEAN_EXPORT double l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___boxed(lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "float"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__0_value),LEAN_SCALAR_PTR_LITERAL(104, 154, 151, 104, 68, 255, 246, 246)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "ill-formed float syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__2_value)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__3 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__3_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "binNum"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 60, 170, 39, 77, 137, 193, 6)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "ill-formed binary number syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__2_value)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__3 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__3_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "octNum"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 70, 221, 168, 145, 119, 144, 197)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "ill-formed octal number syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__2_value)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__3 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__3_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigit(uint32_t);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hexNum"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 174, 95, 211, 123, 63, 171, 252)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "ill-formed hexadecimal number syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__2_value)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__3 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__3_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "invalid date-time"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__0_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__1;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dateTime"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__3_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__3_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__2_value),LEAN_SCALAR_PTR_LITERAL(100, 234, 1, 129, 172, 254, 231, 202)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__3 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__3_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "ill-formed date-time syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__4 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__4_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__4_value)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__5 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__5_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__6;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "literalString"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__0_value),LEAN_SCALAR_PTR_LITERAL(241, 168, 165, 209, 230, 255, 154, 83)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "ill-formed literalString syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__2_value)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__3 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__3_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits___closed__0_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits___closed__2_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits___closed__3;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "invalid unicode escape `"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__0_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__1;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__2_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__3;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__0_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "basicString"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__1_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__2_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__2_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__1_value),LEAN_SCALAR_PTR_LITERAL(164, 34, 208, 112, 75, 114, 213, 233)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__2_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "ill-formed basic string syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__3 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__3_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__3_value)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__4 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__4_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__5;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_dropInitialNewline(lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "mlLiteralString"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 215, 18, 247, 52, 33, 2, 54)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "ill-formed multi-line literal string syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__2_value)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__3 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__3_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "mlBasicString"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 27, 188, 79, 217, 46, 221, 25)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "ill-formed multi-line basic string syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__2_value)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__3 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__3_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "string"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__0_value),LEAN_SCALAR_PTR_LITERAL(79, 134, 223, 178, 21, 25, 142, 203)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "ill-formed string syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__2_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__3;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "unquotedKey"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__0_value),LEAN_SCALAR_PTR_LITERAL(56, 43, 232, 206, 44, 188, 39, 241)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "ill-formed unquoted key syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__2_value)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__3 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__3_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_elabSimpleKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpleKey"};
static const lean_object* l_Lake_Toml_elabSimpleKey___closed__0 = (const lean_object*)&l_Lake_Toml_elabSimpleKey___closed__0_value;
static const lean_ctor_object l_Lake_Toml_elabSimpleKey___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_elabSimpleKey___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_elabSimpleKey___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_elabSimpleKey___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_elabSimpleKey___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_elabSimpleKey___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 51, 117, 190, 121, 223, 170, 220)}};
static const lean_object* l_Lake_Toml_elabSimpleKey___closed__1 = (const lean_object*)&l_Lake_Toml_elabSimpleKey___closed__1_value;
static const lean_string_object l_Lake_Toml_elabSimpleKey___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "ill-formed simple key syntax"};
static const lean_object* l_Lake_Toml_elabSimpleKey___closed__2 = (const lean_object*)&l_Lake_Toml_elabSimpleKey___closed__2_value;
static lean_once_cell_t l_Lake_Toml_elabSimpleKey___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_elabSimpleKey___closed__3;
LEAN_EXPORT lean_object* l_Lake_Toml_elabSimpleKey(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_elabSimpleKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "array"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 212, 239, 77, 14, 34, 57, 134)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "ill-formed array syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__2_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "cannot redefine key `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__3(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "keyval"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(105, 46, 78, 232, 161, 211, 209, 25)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "ill-formed key-value pair syntax"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__5_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__5_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__4_value),LEAN_SCALAR_PTR_LITERAL(44, 24, 166, 18, 184, 133, 165, 53)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "ill-formed key syntax"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__7;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__8_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "inlineTable"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__0 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(160, 125, 46, 131, 161, 142, 50, 23)}};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__1 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "ill-formed inline table syntax"};
static const lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__2 = (const lean_object*)&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__2_value;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__3;
static lean_once_cell_t l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_elabVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "ill-formed value syntax"};
static const lean_object* l_Lake_Toml_elabVal___closed__0 = (const lean_object*)&l_Lake_Toml_elabVal___closed__0_value;
static lean_once_cell_t l_Lake_Toml_elabVal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_elabVal___closed__1;
LEAN_EXPORT lean_object* l_Lake_Toml_elabVal___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_elabVal(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_instMonadEIO___redArg();
return v___x_1_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__0, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__0_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__0);
v___x_3_ = l_StateRefT_x27_instMonad___redArg(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit(lean_object* v_k_8_, lean_object* v_x_9_, lean_object* v_name_10_, lean_object* v_a_11_, lean_object* v_a_12_){
_start:
{
lean_object* v___x_14_; lean_object* v_toApplicative_15_; lean_object* v_toFunctor_16_; lean_object* v_toSeq_17_; lean_object* v_toSeqLeft_18_; lean_object* v_toSeqRight_19_; lean_object* v___f_20_; lean_object* v___f_21_; lean_object* v___f_22_; lean_object* v___f_23_; lean_object* v___x_24_; lean_object* v___f_25_; lean_object* v___f_26_; lean_object* v___f_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_14_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__1, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__1_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__1);
v_toApplicative_15_ = lean_ctor_get(v___x_14_, 0);
v_toFunctor_16_ = lean_ctor_get(v_toApplicative_15_, 0);
v_toSeq_17_ = lean_ctor_get(v_toApplicative_15_, 2);
v_toSeqLeft_18_ = lean_ctor_get(v_toApplicative_15_, 3);
v_toSeqRight_19_ = lean_ctor_get(v_toApplicative_15_, 4);
v___f_20_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__2));
v___f_21_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__3));
lean_inc_ref_n(v_toFunctor_16_, 2);
v___f_22_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_22_, 0, v_toFunctor_16_);
v___f_23_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_23_, 0, v_toFunctor_16_);
v___x_24_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_24_, 0, v___f_22_);
lean_ctor_set(v___x_24_, 1, v___f_23_);
lean_inc(v_toSeqRight_19_);
v___f_25_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_25_, 0, v_toSeqRight_19_);
lean_inc(v_toSeqLeft_18_);
v___f_26_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_26_, 0, v_toSeqLeft_18_);
lean_inc(v_toSeq_17_);
v___f_27_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_27_, 0, v_toSeq_17_);
v___x_28_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_28_, 0, v___x_24_);
lean_ctor_set(v___x_28_, 1, v___f_20_);
lean_ctor_set(v___x_28_, 2, v___f_27_);
lean_ctor_set(v___x_28_, 3, v___f_26_);
lean_ctor_set(v___x_28_, 4, v___f_25_);
v___x_29_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
lean_ctor_set(v___x_29_, 1, v___f_21_);
v___x_30_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___x_31_ = l_Lean_Core_instMonadRefCoreM;
v___x_32_ = l_Lean_Core_instAddMessageContextCoreM;
lean_inc_ref(v___x_29_);
v___x_33_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_32_, v___x_29_);
v___x_34_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_34_, 0, v___x_30_);
lean_ctor_set(v___x_34_, 1, v___x_31_);
lean_ctor_set(v___x_34_, 2, v___x_33_);
v___x_35_ = l_Lean_Syntax_isLit_x3f(v_k_8_, v_x_9_);
if (lean_obj_tag(v___x_35_) == 1)
{
lean_object* v_val_36_; lean_object* v___x_38_; uint8_t v_isShared_39_; uint8_t v_isSharedCheck_43_; 
lean_dec_ref_known(v___x_34_, 3);
lean_dec_ref_known(v___x_29_, 2);
lean_dec(v_x_9_);
v_val_36_ = lean_ctor_get(v___x_35_, 0);
v_isSharedCheck_43_ = !lean_is_exclusive(v___x_35_);
if (v_isSharedCheck_43_ == 0)
{
v___x_38_ = v___x_35_;
v_isShared_39_ = v_isSharedCheck_43_;
goto v_resetjp_37_;
}
else
{
lean_inc(v_val_36_);
lean_dec(v___x_35_);
v___x_38_ = lean_box(0);
v_isShared_39_ = v_isSharedCheck_43_;
goto v_resetjp_37_;
}
v_resetjp_37_:
{
lean_object* v___x_41_; 
if (v_isShared_39_ == 0)
{
lean_ctor_set_tag(v___x_38_, 0);
v___x_41_ = v___x_38_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_42_; 
v_reuseFailAlloc_42_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_42_, 0, v_val_36_);
v___x_41_ = v_reuseFailAlloc_42_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
return v___x_41_;
}
}
}
else
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_194__overap_50_; lean_object* v___x_51_; 
lean_dec(v___x_35_);
v___x_44_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__4));
v___x_45_ = lean_string_append(v___x_44_, v_name_10_);
v___x_46_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__5));
v___x_47_ = lean_string_append(v___x_45_, v___x_46_);
v___x_48_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
v___x_49_ = l_Lean_MessageData_ofFormat(v___x_48_);
v___x_194__overap_50_ = l_Lean_throwErrorAt___redArg(v___x_29_, v___x_34_, v_x_9_, v___x_49_);
lean_inc(v_a_12_);
lean_inc_ref(v_a_11_);
v___x_51_ = lean_apply_3(v___x_194__overap_50_, v_a_11_, v_a_12_, lean_box(0));
return v___x_51_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___boxed(lean_object* v_k_52_, lean_object* v_x_53_, lean_object* v_name_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit(v_k_52_, v_x_53_, v_name_54_, v_a_55_, v_a_56_);
lean_dec(v_a_56_);
lean_dec_ref(v_a_55_);
lean_dec_ref(v_name_54_);
lean_dec(v_k_52_);
return v_res_58_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_59_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__0);
v___x_61_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
return v___x_61_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__2(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_62_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__1);
v___x_63_ = lean_unsigned_to_nat(0u);
v___x_64_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
lean_ctor_set(v___x_64_, 1, v___x_63_);
lean_ctor_set(v___x_64_, 2, v___x_63_);
lean_ctor_set(v___x_64_, 3, v___x_63_);
lean_ctor_set(v___x_64_, 4, v___x_62_);
lean_ctor_set(v___x_64_, 5, v___x_62_);
lean_ctor_set(v___x_64_, 6, v___x_62_);
lean_ctor_set(v___x_64_, 7, v___x_62_);
lean_ctor_set(v___x_64_, 8, v___x_62_);
lean_ctor_set(v___x_64_, 9, v___x_62_);
lean_ctor_set(v___x_64_, 10, v___x_62_);
return v___x_64_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_65_ = lean_unsigned_to_nat(32u);
v___x_66_ = lean_mk_empty_array_with_capacity(v___x_65_);
v___x_67_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
return v___x_67_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__4(void){
_start:
{
size_t v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_68_ = ((size_t)5ULL);
v___x_69_ = lean_unsigned_to_nat(0u);
v___x_70_ = lean_unsigned_to_nat(32u);
v___x_71_ = lean_mk_empty_array_with_capacity(v___x_70_);
v___x_72_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__3);
v___x_73_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_73_, 0, v___x_72_);
lean_ctor_set(v___x_73_, 1, v___x_71_);
lean_ctor_set(v___x_73_, 2, v___x_69_);
lean_ctor_set(v___x_73_, 3, v___x_69_);
lean_ctor_set_usize(v___x_73_, 4, v___x_68_);
return v___x_73_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__5(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_74_ = lean_box(1);
v___x_75_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__4);
v___x_76_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__1);
v___x_77_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
lean_ctor_set(v___x_77_, 1, v___x_75_);
lean_ctor_set(v___x_77_, 2, v___x_74_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1(lean_object* v_msgData_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v___x_82_; lean_object* v_toCold_83_; lean_object* v_env_84_; lean_object* v_options_85_; uint8_t v___x_86_; lean_object* v_env_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_82_ = lean_st_ref_get(v___y_80_);
v_toCold_83_ = lean_ctor_get(v___y_79_, 0);
v_env_84_ = lean_ctor_get(v___x_82_, 0);
lean_inc_ref(v_env_84_);
lean_dec(v___x_82_);
v_options_85_ = lean_ctor_get(v_toCold_83_, 2);
v___x_86_ = 0;
v_env_87_ = l_Lean_Environment_setRecordingDeps(v_env_84_, v___x_86_);
v___x_88_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__2);
v___x_89_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___closed__5);
lean_inc_ref(v_options_85_);
v___x_90_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_90_, 0, v_env_87_);
lean_ctor_set(v___x_90_, 1, v___x_88_);
lean_ctor_set(v___x_90_, 2, v___x_89_);
lean_ctor_set(v___x_90_, 3, v_options_85_);
v___x_91_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
lean_ctor_set(v___x_91_, 1, v_msgData_78_);
v___x_92_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1(v_msgData_93_, v___y_94_, v___y_95_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0___redArg(lean_object* v_msg_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v_ref_102_; lean_object* v___x_103_; lean_object* v_a_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_112_; 
v_ref_102_ = lean_ctor_get(v___y_99_, 2);
v___x_103_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1(v_msg_98_, v___y_99_, v___y_100_);
v_a_104_ = lean_ctor_get(v___x_103_, 0);
v_isSharedCheck_112_ = !lean_is_exclusive(v___x_103_);
if (v_isSharedCheck_112_ == 0)
{
v___x_106_ = v___x_103_;
v_isShared_107_ = v_isSharedCheck_112_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_a_104_);
lean_dec(v___x_103_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_112_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_108_; lean_object* v___x_110_; 
lean_inc(v_ref_102_);
v___x_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_108_, 0, v_ref_102_);
lean_ctor_set(v___x_108_, 1, v_a_104_);
if (v_isShared_107_ == 0)
{
lean_ctor_set_tag(v___x_106_, 1);
lean_ctor_set(v___x_106_, 0, v___x_108_);
v___x_110_ = v___x_106_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v___x_108_);
v___x_110_ = v_reuseFailAlloc_111_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
return v___x_110_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0___redArg___boxed(lean_object* v_msg_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0___redArg(v_msg_113_, v___y_114_, v___y_115_);
lean_dec(v___y_115_);
lean_dec_ref(v___y_114_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(lean_object* v_ref_118_, lean_object* v_msg_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v_toCold_123_; lean_object* v_currRecDepth_124_; lean_object* v_ref_125_; uint16_t v_optionFlags_126_; uint8_t v_suppressElabErrors_127_; uint8_t v_checkDeprecated_128_; uint8_t v_isRecordingDeps_129_; lean_object* v_ref_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v_toCold_123_ = lean_ctor_get(v___y_120_, 0);
v_currRecDepth_124_ = lean_ctor_get(v___y_120_, 1);
v_ref_125_ = lean_ctor_get(v___y_120_, 2);
v_optionFlags_126_ = lean_ctor_get_uint16(v___y_120_, sizeof(void*)*3);
v_suppressElabErrors_127_ = lean_ctor_get_uint8(v___y_120_, sizeof(void*)*3 + 2);
v_checkDeprecated_128_ = lean_ctor_get_uint8(v___y_120_, sizeof(void*)*3 + 3);
v_isRecordingDeps_129_ = lean_ctor_get_uint8(v___y_120_, sizeof(void*)*3 + 4);
v_ref_130_ = l_Lean_replaceRef(v_ref_118_, v_ref_125_);
lean_inc(v_currRecDepth_124_);
lean_inc_ref(v_toCold_123_);
v___x_131_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_131_, 0, v_toCold_123_);
lean_ctor_set(v___x_131_, 1, v_currRecDepth_124_);
lean_ctor_set(v___x_131_, 2, v_ref_130_);
lean_ctor_set_uint16(v___x_131_, sizeof(void*)*3, v_optionFlags_126_);
lean_ctor_set_uint8(v___x_131_, sizeof(void*)*3 + 2, v_suppressElabErrors_127_);
lean_ctor_set_uint8(v___x_131_, sizeof(void*)*3 + 3, v_checkDeprecated_128_);
lean_ctor_set_uint8(v___x_131_, sizeof(void*)*3 + 4, v_isRecordingDeps_129_);
v___x_132_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0___redArg(v_msg_119_, v___x_131_, v___y_121_);
lean_dec_ref_known(v___x_131_, 3);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg___boxed(lean_object* v_ref_133_, lean_object* v_msg_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_ref_133_, v_msg_134_, v___y_135_, v___y_136_);
lean_dec(v___y_136_);
lean_dec_ref(v___y_135_);
lean_dec(v_ref_133_);
return v_res_138_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__5(void){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__4));
v___x_148_ = l_Lean_stringToMessageData(v___x_147_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean(lean_object* v_x_159_, lean_object* v_a_160_, lean_object* v_a_161_){
_start:
{
lean_object* v___x_163_; uint8_t v___x_164_; 
v___x_163_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__3));
lean_inc(v_x_159_);
v___x_164_ = l_Lean_Syntax_isOfKind(v_x_159_, v___x_163_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__5, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__5_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__5);
v___x_166_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_159_, v___x_165_, v_a_160_, v_a_161_);
lean_dec(v_x_159_);
return v___x_166_;
}
else
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; uint8_t v___x_170_; 
v___x_167_ = lean_unsigned_to_nat(0u);
v___x_168_ = l_Lean_Syntax_getArg(v_x_159_, v___x_167_);
v___x_169_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__7));
lean_inc(v___x_168_);
v___x_170_ = l_Lean_Syntax_isOfKind(v___x_168_, v___x_169_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_171_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__9));
v___x_172_ = l_Lean_Syntax_isOfKind(v___x_168_, v___x_171_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_173_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__5, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__5_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__5);
v___x_174_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_159_, v___x_173_, v_a_160_, v_a_161_);
lean_dec(v_x_159_);
return v___x_174_;
}
else
{
lean_object* v___x_175_; lean_object* v___x_176_; 
lean_dec(v_x_159_);
v___x_175_ = lean_box(v___x_170_);
v___x_176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
return v___x_176_;
}
}
else
{
lean_object* v___x_177_; lean_object* v___x_178_; 
lean_dec(v___x_168_);
lean_dec(v_x_159_);
v___x_177_ = lean_box(v___x_170_);
v___x_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
return v___x_178_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___boxed(lean_object* v_x_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean(v_x_179_, v_a_180_, v_a_181_);
lean_dec(v_a_181_);
lean_dec_ref(v_a_180_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0(lean_object* v_00_u03b1_184_, lean_object* v_ref_185_, lean_object* v_msg_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_ref_185_, v_msg_186_, v___y_187_, v___y_188_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___boxed(lean_object* v_00_u03b1_191_, lean_object* v_ref_192_, lean_object* v_msg_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0(v_00_u03b1_191_, v_ref_192_, v_msg_193_, v___y_194_, v___y_195_);
lean_dec(v___y_195_);
lean_dec_ref(v___y_194_);
lean_dec(v_ref_192_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0(lean_object* v_00_u03b1_198_, lean_object* v_msg_199_, lean_object* v___y_200_, lean_object* v___y_201_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0___redArg(v_msg_199_, v___y_200_, v___y_201_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0___boxed(lean_object* v_00_u03b1_204_, lean_object* v_msg_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0(v_00_u03b1_204_, v_msg_205_, v___y_206_, v___y_207_);
lean_dec(v___y_207_);
lean_dec_ref(v___y_206_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum_spec__0___redArg(lean_object* v___x_210_, lean_object* v_s_211_, lean_object* v_a_212_, lean_object* v_b_213_){
_start:
{
uint8_t v_decide_214_; 
v_decide_214_ = lean_nat_dec_eq(v_a_212_, v___x_210_);
if (v_decide_214_ == 0)
{
uint32_t v___x_215_; lean_object* v___x_216_; uint32_t v___x_217_; uint8_t v___x_218_; 
v___x_215_ = lean_string_utf8_get_fast(v_s_211_, v_a_212_);
v___x_216_ = lean_string_utf8_next_fast(v_s_211_, v_a_212_);
lean_dec(v_a_212_);
v___x_217_ = 95;
v___x_218_ = lean_uint32_dec_eq(v___x_215_, v___x_217_);
if (v___x_218_ == 0)
{
lean_object* v___x_219_; lean_object* v___x_220_; uint32_t v___x_221_; uint32_t v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_219_ = lean_unsigned_to_nat(10u);
v___x_220_ = lean_nat_mul(v_b_213_, v___x_219_);
lean_dec(v_b_213_);
v___x_221_ = 48;
v___x_222_ = lean_uint32_sub(v___x_215_, v___x_221_);
v___x_223_ = lean_uint32_to_nat(v___x_222_);
v___x_224_ = lean_nat_add(v___x_220_, v___x_223_);
lean_dec(v___x_223_);
lean_dec(v___x_220_);
v_a_212_ = v___x_216_;
v_b_213_ = v___x_224_;
goto _start;
}
else
{
v_a_212_ = v___x_216_;
goto _start;
}
}
else
{
lean_dec(v_a_212_);
return v_b_213_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum_spec__0___redArg___boxed(lean_object* v___x_227_, lean_object* v_s_228_, lean_object* v_a_229_, lean_object* v_b_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum_spec__0___redArg(v___x_227_, v_s_228_, v_a_229_, v_b_230_);
lean_dec_ref(v_s_228_);
lean_dec(v___x_227_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum(lean_object* v_s_232_){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_233_ = lean_unsigned_to_nat(0u);
v___x_234_ = lean_string_utf8_byte_size(v_s_232_);
v___x_235_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum_spec__0___redArg(v___x_234_, v_s_232_, v___x_233_, v___x_233_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum___boxed(lean_object* v_s_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum(v_s_236_);
lean_dec_ref(v_s_236_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum_spec__0(lean_object* v___x_238_, lean_object* v___x_239_, lean_object* v_s_240_, lean_object* v_inst_241_, lean_object* v_R_242_, lean_object* v_a_243_, lean_object* v_b_244_, lean_object* v_c_245_){
_start:
{
lean_object* v___x_246_; 
v___x_246_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum_spec__0___redArg(v___x_239_, v_s_240_, v_a_243_, v_b_244_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum_spec__0___boxed(lean_object* v___x_247_, lean_object* v___x_248_, lean_object* v_s_249_, lean_object* v_inst_250_, lean_object* v_R_251_, lean_object* v_a_252_, lean_object* v_b_253_, lean_object* v_c_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum_spec__0(v___x_247_, v___x_248_, v_s_249_, v_inst_250_, v_R_251_, v_a_252_, v_b_253_, v_c_254_);
lean_dec_ref(v_s_249_);
lean_dec(v___x_248_);
lean_dec_ref(v___x_247_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeSign(lean_object* v_s_256_){
_start:
{
uint8_t v___y_258_; uint32_t v___y_259_; uint32_t v___y_273_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_291_ = lean_unsigned_to_nat(0u);
v___x_292_ = lean_string_utf8_byte_size(v_s_256_);
lean_inc_ref(v_s_256_);
v___x_293_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_293_, 0, v_s_256_);
lean_ctor_set(v___x_293_, 1, v___x_291_);
lean_ctor_set(v___x_293_, 2, v___x_292_);
v___x_294_ = l_String_Slice_Pos_get_x3f(v___x_293_, v___x_291_);
lean_dec_ref_known(v___x_293_, 3);
if (lean_obj_tag(v___x_294_) == 0)
{
uint32_t v___x_295_; 
v___x_295_ = 65;
v___y_273_ = v___x_295_;
goto v___jp_272_;
}
else
{
lean_object* v_val_296_; uint32_t v___x_297_; 
v_val_296_ = lean_ctor_get(v___x_294_, 0);
lean_inc(v_val_296_);
lean_dec_ref_known(v___x_294_, 1);
v___x_297_ = lean_unbox_uint32(v_val_296_);
lean_dec(v_val_296_);
v___y_273_ = v___x_297_;
goto v___jp_272_;
}
v___jp_257_:
{
uint32_t v___x_260_; uint8_t v___x_261_; 
v___x_260_ = 43;
v___x_261_ = lean_uint32_dec_eq(v___y_259_, v___x_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_262_ = lean_box(v___x_261_);
v___x_263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
lean_ctor_set(v___x_263_, 1, v_s_256_);
return v___x_263_;
}
else
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_264_ = lean_unsigned_to_nat(1u);
v___x_265_ = lean_unsigned_to_nat(0u);
v___x_266_ = lean_string_utf8_byte_size(v_s_256_);
lean_inc_ref(v_s_256_);
v___x_267_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_267_, 0, v_s_256_);
lean_ctor_set(v___x_267_, 1, v___x_265_);
lean_ctor_set(v___x_267_, 2, v___x_266_);
v___x_268_ = l_String_Slice_Pos_nextn(v___x_267_, v___x_265_, v___x_264_);
lean_dec_ref_known(v___x_267_, 3);
v___x_269_ = lean_string_utf8_extract_fast(v_s_256_, v___x_268_, v___x_266_);
lean_dec(v___x_268_);
lean_dec_ref(v_s_256_);
v___x_270_ = lean_box(v___y_258_);
v___x_271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
lean_ctor_set(v___x_271_, 1, v___x_269_);
return v___x_271_;
}
}
v___jp_272_:
{
uint32_t v___x_274_; uint8_t v___x_275_; 
v___x_274_ = 45;
v___x_275_ = lean_uint32_dec_eq(v___y_273_, v___x_274_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_276_ = lean_unsigned_to_nat(0u);
v___x_277_ = lean_string_utf8_byte_size(v_s_256_);
lean_inc_ref(v_s_256_);
v___x_278_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_278_, 0, v_s_256_);
lean_ctor_set(v___x_278_, 1, v___x_276_);
lean_ctor_set(v___x_278_, 2, v___x_277_);
v___x_279_ = l_String_Slice_Pos_get_x3f(v___x_278_, v___x_276_);
lean_dec_ref_known(v___x_278_, 3);
if (lean_obj_tag(v___x_279_) == 0)
{
uint32_t v___x_280_; 
v___x_280_ = 65;
v___y_258_ = v___x_275_;
v___y_259_ = v___x_280_;
goto v___jp_257_;
}
else
{
lean_object* v_val_281_; uint32_t v___x_282_; 
v_val_281_ = lean_ctor_get(v___x_279_, 0);
lean_inc(v_val_281_);
lean_dec_ref_known(v___x_279_, 1);
v___x_282_ = lean_unbox_uint32(v_val_281_);
lean_dec(v_val_281_);
v___y_258_ = v___x_275_;
v___y_259_ = v___x_282_;
goto v___jp_257_;
}
}
else
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_283_ = lean_unsigned_to_nat(1u);
v___x_284_ = lean_unsigned_to_nat(0u);
v___x_285_ = lean_string_utf8_byte_size(v_s_256_);
lean_inc_ref(v_s_256_);
v___x_286_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_286_, 0, v_s_256_);
lean_ctor_set(v___x_286_, 1, v___x_284_);
lean_ctor_set(v___x_286_, 2, v___x_285_);
v___x_287_ = l_String_Slice_Pos_nextn(v___x_286_, v___x_284_, v___x_283_);
lean_dec_ref_known(v___x_286_, 3);
v___x_288_ = lean_string_utf8_extract_fast(v_s_256_, v___x_287_, v___x_285_);
lean_dec(v___x_287_);
lean_dec_ref(v_s_256_);
v___x_289_ = lean_box(v___x_275_);
v___x_290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set(v___x_290_, 1, v___x_288_);
return v___x_290_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecInt(lean_object* v_s_298_){
_start:
{
lean_object* v_snd_300_; lean_object* v_snd_304_; uint8_t v___y_308_; uint32_t v___y_309_; uint32_t v___y_319_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_335_ = lean_unsigned_to_nat(0u);
v___x_336_ = lean_string_utf8_byte_size(v_s_298_);
lean_inc_ref(v_s_298_);
v___x_337_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_337_, 0, v_s_298_);
lean_ctor_set(v___x_337_, 1, v___x_335_);
lean_ctor_set(v___x_337_, 2, v___x_336_);
v___x_338_ = l_String_Slice_Pos_get_x3f(v___x_337_, v___x_335_);
lean_dec_ref_known(v___x_337_, 3);
if (lean_obj_tag(v___x_338_) == 0)
{
uint32_t v___x_339_; 
v___x_339_ = 65;
v___y_319_ = v___x_339_;
goto v___jp_318_;
}
else
{
lean_object* v_val_340_; uint32_t v___x_341_; 
v_val_340_ = lean_ctor_get(v___x_338_, 0);
lean_inc(v_val_340_);
lean_dec_ref_known(v___x_338_, 1);
v___x_341_ = lean_unbox_uint32(v_val_340_);
lean_dec(v_val_340_);
v___y_319_ = v___x_341_;
goto v___jp_318_;
}
v___jp_299_:
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum(v_snd_300_);
lean_dec_ref(v_snd_300_);
v___x_302_ = lean_nat_to_int(v___x_301_);
return v___x_302_;
}
v___jp_303_:
{
lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_305_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecNum(v_snd_304_);
lean_dec_ref(v_snd_304_);
v___x_306_ = l_Int_negOfNat(v___x_305_);
lean_dec(v___x_305_);
return v___x_306_;
}
v___jp_307_:
{
uint32_t v___x_310_; uint8_t v___x_311_; 
v___x_310_ = 43;
v___x_311_ = lean_uint32_dec_eq(v___y_309_, v___x_310_);
if (v___x_311_ == 0)
{
v_snd_300_ = v_s_298_;
goto v___jp_299_;
}
else
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_312_ = lean_unsigned_to_nat(1u);
v___x_313_ = lean_unsigned_to_nat(0u);
v___x_314_ = lean_string_utf8_byte_size(v_s_298_);
lean_inc_ref(v_s_298_);
v___x_315_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_315_, 0, v_s_298_);
lean_ctor_set(v___x_315_, 1, v___x_313_);
lean_ctor_set(v___x_315_, 2, v___x_314_);
v___x_316_ = l_String_Slice_Pos_nextn(v___x_315_, v___x_313_, v___x_312_);
lean_dec_ref_known(v___x_315_, 3);
v___x_317_ = lean_string_utf8_extract_fast(v_s_298_, v___x_316_, v___x_314_);
lean_dec(v___x_316_);
lean_dec_ref(v_s_298_);
if (v___y_308_ == 0)
{
v_snd_300_ = v___x_317_;
goto v___jp_299_;
}
else
{
v_snd_304_ = v___x_317_;
goto v___jp_303_;
}
}
}
v___jp_318_:
{
uint32_t v___x_320_; uint8_t v___x_321_; 
v___x_320_ = 45;
v___x_321_ = lean_uint32_dec_eq(v___y_319_, v___x_320_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_322_ = lean_unsigned_to_nat(0u);
v___x_323_ = lean_string_utf8_byte_size(v_s_298_);
lean_inc_ref(v_s_298_);
v___x_324_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_324_, 0, v_s_298_);
lean_ctor_set(v___x_324_, 1, v___x_322_);
lean_ctor_set(v___x_324_, 2, v___x_323_);
v___x_325_ = l_String_Slice_Pos_get_x3f(v___x_324_, v___x_322_);
lean_dec_ref_known(v___x_324_, 3);
if (lean_obj_tag(v___x_325_) == 0)
{
uint32_t v___x_326_; 
v___x_326_ = 65;
v___y_308_ = v___x_321_;
v___y_309_ = v___x_326_;
goto v___jp_307_;
}
else
{
lean_object* v_val_327_; uint32_t v___x_328_; 
v_val_327_ = lean_ctor_get(v___x_325_, 0);
lean_inc(v_val_327_);
lean_dec_ref_known(v___x_325_, 1);
v___x_328_ = lean_unbox_uint32(v_val_327_);
lean_dec(v_val_327_);
v___y_308_ = v___x_321_;
v___y_309_ = v___x_328_;
goto v___jp_307_;
}
}
else
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_329_ = lean_unsigned_to_nat(1u);
v___x_330_ = lean_unsigned_to_nat(0u);
v___x_331_ = lean_string_utf8_byte_size(v_s_298_);
lean_inc_ref(v_s_298_);
v___x_332_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_332_, 0, v_s_298_);
lean_ctor_set(v___x_332_, 1, v___x_330_);
lean_ctor_set(v___x_332_, 2, v___x_331_);
v___x_333_ = l_String_Slice_Pos_nextn(v___x_332_, v___x_330_, v___x_329_);
lean_dec_ref_known(v___x_332_, 3);
v___x_334_ = lean_string_utf8_extract_fast(v_s_298_, v___x_333_, v___x_331_);
lean_dec(v___x_333_);
lean_dec_ref(v_s_298_);
v_snd_304_ = v___x_334_;
goto v___jp_303_;
}
}
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__4(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__3));
v___x_351_ = l_Lean_MessageData_ofFormat(v___x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt(lean_object* v_x_352_, lean_object* v_a_353_, lean_object* v_a_354_){
_start:
{
lean_object* v_a_357_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_360_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__1));
v___x_361_ = l_Lean_Syntax_isLit_x3f(v___x_360_, v_x_352_);
if (lean_obj_tag(v___x_361_) == 1)
{
lean_object* v_val_362_; 
v_val_362_ = lean_ctor_get(v___x_361_, 0);
lean_inc(v_val_362_);
lean_dec_ref_known(v___x_361_, 1);
v_a_357_ = v_val_362_;
goto v___jp_356_;
}
else
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_372_; 
lean_dec(v___x_361_);
v___x_363_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__4, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__4_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__4);
v___x_364_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_352_, v___x_363_, v_a_353_, v_a_354_);
v_a_365_ = lean_ctor_get(v___x_364_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_372_ == 0)
{
v___x_367_ = v___x_364_;
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_364_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_370_; 
if (v_isShared_368_ == 0)
{
v___x_370_ = v___x_367_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_a_365_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
v___jp_356_:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecInt(v_a_357_);
v___x_359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
return v___x_359_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___boxed(lean_object* v_x_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt(v_x_373_, v_a_374_, v_a_375_);
lean_dec(v_a_375_);
lean_dec_ref(v_a_374_);
lean_dec(v_x_373_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa_spec__0___redArg(lean_object* v___x_378_, lean_object* v_s_379_, lean_object* v_a_380_, lean_object* v_b_381_){
_start:
{
uint8_t v_decide_382_; 
v_decide_382_ = lean_nat_dec_eq(v_a_380_, v___x_378_);
if (v_decide_382_ == 0)
{
lean_object* v_fst_383_; lean_object* v_snd_384_; uint32_t v___x_385_; lean_object* v___x_386_; uint32_t v___x_387_; uint8_t v___x_388_; 
v_fst_383_ = lean_ctor_get(v_b_381_, 0);
v_snd_384_ = lean_ctor_get(v_b_381_, 1);
v___x_385_ = lean_string_utf8_get_fast(v_s_379_, v_a_380_);
v___x_386_ = lean_string_utf8_next_fast(v_s_379_, v_a_380_);
lean_dec(v_a_380_);
v___x_387_ = 95;
v___x_388_ = lean_uint32_dec_eq(v___x_385_, v___x_387_);
if (v___x_388_ == 0)
{
lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_411_; 
lean_inc(v_snd_384_);
lean_inc(v_fst_383_);
v_isSharedCheck_411_ = !lean_is_exclusive(v_b_381_);
if (v_isSharedCheck_411_ == 0)
{
lean_object* v_unused_412_; lean_object* v_unused_413_; 
v_unused_412_ = lean_ctor_get(v_b_381_, 1);
lean_dec(v_unused_412_);
v_unused_413_ = lean_ctor_get(v_b_381_, 0);
lean_dec(v_unused_413_);
v___x_390_ = v_b_381_;
v_isShared_391_ = v_isSharedCheck_411_;
goto v_resetjp_389_;
}
else
{
lean_dec(v_b_381_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_411_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
uint32_t v___x_392_; uint8_t v___x_393_; 
v___x_392_ = 46;
v___x_393_ = lean_uint32_dec_eq(v___x_385_, v___x_392_);
if (v___x_393_ == 0)
{
lean_object* v___x_394_; lean_object* v___x_395_; uint32_t v___x_396_; uint32_t v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_403_; 
v___x_394_ = lean_unsigned_to_nat(10u);
v___x_395_ = lean_nat_mul(v_fst_383_, v___x_394_);
lean_dec(v_fst_383_);
v___x_396_ = 48;
v___x_397_ = lean_uint32_sub(v___x_385_, v___x_396_);
v___x_398_ = lean_uint32_to_nat(v___x_397_);
v___x_399_ = lean_nat_add(v___x_395_, v___x_398_);
lean_dec(v___x_398_);
lean_dec(v___x_395_);
v___x_400_ = lean_unsigned_to_nat(1u);
v___x_401_ = lean_nat_add(v_snd_384_, v___x_400_);
lean_dec(v_snd_384_);
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 1, v___x_401_);
lean_ctor_set(v___x_390_, 0, v___x_399_);
v___x_403_ = v___x_390_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v___x_399_);
lean_ctor_set(v_reuseFailAlloc_405_, 1, v___x_401_);
v___x_403_ = v_reuseFailAlloc_405_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
v_a_380_ = v___x_386_;
v_b_381_ = v___x_403_;
goto _start;
}
}
else
{
lean_object* v___x_406_; lean_object* v___x_408_; 
lean_dec(v_snd_384_);
v___x_406_ = lean_unsigned_to_nat(0u);
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 1, v___x_406_);
v___x_408_ = v___x_390_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_fst_383_);
lean_ctor_set(v_reuseFailAlloc_410_, 1, v___x_406_);
v___x_408_ = v_reuseFailAlloc_410_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
v_a_380_ = v___x_386_;
v_b_381_ = v___x_408_;
goto _start;
}
}
}
}
else
{
v_a_380_ = v___x_386_;
goto _start;
}
}
else
{
lean_dec(v_a_380_);
return v_b_381_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa_spec__0___redArg___boxed(lean_object* v___x_415_, lean_object* v_s_416_, lean_object* v_a_417_, lean_object* v_b_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa_spec__0___redArg(v___x_415_, v_s_416_, v_a_417_, v_b_418_);
lean_dec_ref(v_s_416_);
lean_dec(v___x_415_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa(lean_object* v_s_420_){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v_fst_425_; lean_object* v_snd_426_; lean_object* v___x_427_; uint8_t v___x_428_; 
v___x_421_ = lean_unsigned_to_nat(0u);
v___x_422_ = lean_string_utf8_byte_size(v_s_420_);
v___x_423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_423_, 0, v___x_421_);
lean_ctor_set(v___x_423_, 1, v___x_422_);
v___x_424_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa_spec__0___redArg(v___x_422_, v_s_420_, v___x_421_, v___x_423_);
v_fst_425_ = lean_ctor_get(v___x_424_, 0);
v_snd_426_ = lean_ctor_get(v___x_424_, 1);
v___x_427_ = lean_string_length(v_s_420_);
v___x_428_ = lean_nat_dec_le(v___x_427_, v_snd_426_);
if (v___x_428_ == 0)
{
return v___x_424_;
}
else
{
lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_435_; 
lean_inc(v_fst_425_);
v_isSharedCheck_435_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_435_ == 0)
{
lean_object* v_unused_436_; lean_object* v_unused_437_; 
v_unused_436_ = lean_ctor_get(v___x_424_, 1);
lean_dec(v_unused_436_);
v_unused_437_ = lean_ctor_get(v___x_424_, 0);
lean_dec(v_unused_437_);
v___x_430_ = v___x_424_;
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
else
{
lean_dec(v___x_424_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_433_; 
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 1, v___x_421_);
v___x_433_ = v___x_430_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_fst_425_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v___x_421_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa___boxed(lean_object* v_s_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa(v_s_438_);
lean_dec_ref(v_s_438_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa_spec__0(lean_object* v___x_440_, lean_object* v___x_441_, lean_object* v_s_442_, lean_object* v_inst_443_, lean_object* v_R_444_, lean_object* v_a_445_, lean_object* v_b_446_, lean_object* v_c_447_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa_spec__0___redArg(v___x_441_, v_s_442_, v_a_445_, v_b_446_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa_spec__0___boxed(lean_object* v___x_449_, lean_object* v___x_450_, lean_object* v_s_451_, lean_object* v_inst_452_, lean_object* v_R_453_, lean_object* v_a_454_, lean_object* v_b_455_, lean_object* v_c_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa_spec__0(v___x_449_, v___x_450_, v_s_451_, v_inst_452_, v_R_453_, v_a_454_, v_b_455_, v_c_456_);
lean_dec_ref(v_s_451_);
lean_dec(v___x_450_);
lean_dec_ref(v___x_449_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___redArg(){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___redArg___closed__0));
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___redArg___boxed(lean_object* v___dummy_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___redArg();
return v_res_463_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___closed__0(void){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___redArg();
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0(lean_object* v_s_465_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___closed__0);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___boxed(lean_object* v_s_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0(v_s_467_);
lean_dec_ref(v_s_467_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__1___redArg(lean_object* v_s_469_, lean_object* v___x_470_, lean_object* v___x_471_, lean_object* v_a_472_, lean_object* v_b_473_){
_start:
{
lean_object* v_it_475_; lean_object* v_startInclusive_476_; lean_object* v_endExclusive_477_; 
if (lean_obj_tag(v_a_472_) == 0)
{
lean_object* v_currPos_482_; lean_object* v_searcher_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_507_; 
v_currPos_482_ = lean_ctor_get(v_a_472_, 0);
v_searcher_483_ = lean_ctor_get(v_a_472_, 1);
v_isSharedCheck_507_ = !lean_is_exclusive(v_a_472_);
if (v_isSharedCheck_507_ == 0)
{
v___x_485_ = v_a_472_;
v_isShared_486_ = v_isSharedCheck_507_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_searcher_483_);
lean_inc(v_currPos_482_);
lean_dec(v_a_472_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_507_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
uint8_t v_decide_497_; 
v_decide_497_ = lean_nat_dec_eq(v_searcher_483_, v___x_471_);
if (v_decide_497_ == 0)
{
uint32_t v___x_498_; uint32_t v___x_499_; uint8_t v___x_500_; 
v___x_498_ = lean_string_utf8_get_fast(v_s_469_, v_searcher_483_);
v___x_499_ = 69;
v___x_500_ = lean_uint32_dec_eq(v___x_498_, v___x_499_);
if (v___x_500_ == 0)
{
uint32_t v___x_501_; uint8_t v___x_502_; 
v___x_501_ = 101;
v___x_502_ = lean_uint32_dec_eq(v___x_498_, v___x_501_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; lean_object* v___x_504_; 
lean_del_object(v___x_485_);
v___x_503_ = lean_string_utf8_next_fast(v_s_469_, v_searcher_483_);
lean_dec(v_searcher_483_);
v___x_504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_504_, 0, v_currPos_482_);
lean_ctor_set(v___x_504_, 1, v___x_503_);
v_a_472_ = v___x_504_;
goto _start;
}
else
{
goto v___jp_487_;
}
}
else
{
goto v___jp_487_;
}
}
else
{
lean_object* v___x_506_; 
lean_del_object(v___x_485_);
lean_dec(v_searcher_483_);
v___x_506_ = lean_box(1);
lean_inc(v___x_471_);
v_it_475_ = v___x_506_;
v_startInclusive_476_ = v_currPos_482_;
v_endExclusive_477_ = v___x_471_;
goto v___jp_474_;
}
v___jp_487_:
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v_slice_491_; lean_object* v_nextIt_493_; 
v___x_488_ = lean_string_utf8_next_fast(v_s_469_, v_searcher_483_);
v___x_489_ = lean_nat_sub(v___x_488_, v_searcher_483_);
v___x_490_ = lean_nat_add(v_searcher_483_, v___x_489_);
lean_dec(v___x_489_);
v_slice_491_ = l_String_Slice_subslice_x21(v___x_470_, v_currPos_482_, v_searcher_483_);
lean_inc(v___x_490_);
if (v_isShared_486_ == 0)
{
lean_ctor_set(v___x_485_, 1, v___x_490_);
lean_ctor_set(v___x_485_, 0, v___x_490_);
v_nextIt_493_ = v___x_485_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_490_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v___x_490_);
v_nextIt_493_ = v_reuseFailAlloc_496_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
lean_object* v_startInclusive_494_; lean_object* v_endExclusive_495_; 
v_startInclusive_494_ = lean_ctor_get(v_slice_491_, 0);
lean_inc(v_startInclusive_494_);
v_endExclusive_495_ = lean_ctor_get(v_slice_491_, 1);
lean_inc(v_endExclusive_495_);
lean_dec_ref(v_slice_491_);
v_it_475_ = v_nextIt_493_;
v_startInclusive_476_ = v_startInclusive_494_;
v_endExclusive_477_ = v_endExclusive_495_;
goto v___jp_474_;
}
}
}
}
else
{
lean_dec(v___x_471_);
lean_dec_ref(v_s_469_);
return v_b_473_;
}
v___jp_474_:
{
lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
lean_inc_ref(v_s_469_);
v___x_478_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_478_, 0, v_s_469_);
lean_ctor_set(v___x_478_, 1, v_startInclusive_476_);
lean_ctor_set(v___x_478_, 2, v_endExclusive_477_);
v___x_479_ = l_String_Slice_toString(v___x_478_);
lean_dec_ref_known(v___x_478_, 3);
v___x_480_ = lean_array_push(v_b_473_, v___x_479_);
v_a_472_ = v_it_475_;
v_b_473_ = v___x_480_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__1___redArg___boxed(lean_object* v_s_508_, lean_object* v___x_509_, lean_object* v___x_510_, lean_object* v_a_511_, lean_object* v_b_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__1___redArg(v_s_508_, v___x_509_, v___x_510_, v_a_511_, v_b_512_);
lean_dec_ref(v___x_509_);
return v_res_513_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__0(void){
_start:
{
lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_514_ = lean_unsigned_to_nat(0u);
v___x_515_ = lean_nat_to_int(v___x_514_);
return v___x_515_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__1(void){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_516_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__0, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__0_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__0);
v___x_517_ = lean_unsigned_to_nat(0u);
v___x_518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_518_, 0, v___x_517_);
lean_ctor_set(v___x_518_, 1, v___x_516_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp(lean_object* v_s_521_){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_524_ = lean_unsigned_to_nat(0u);
v___x_525_ = lean_string_utf8_byte_size(v_s_521_);
lean_inc_ref(v_s_521_);
v___x_526_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_526_, 0, v_s_521_);
lean_ctor_set(v___x_526_, 1, v___x_524_);
lean_ctor_set(v___x_526_, 2, v___x_525_);
v___x_527_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__0___closed__0);
v___x_528_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__2));
v___x_529_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__1___redArg(v_s_521_, v___x_526_, v___x_525_, v___x_527_, v___x_528_);
lean_dec_ref_known(v___x_526_, 3);
v___x_530_ = lean_array_to_list(v___x_529_);
if (lean_obj_tag(v___x_530_) == 1)
{
lean_object* v_tail_531_; 
v_tail_531_ = lean_ctor_get(v___x_530_, 1);
if (lean_obj_tag(v_tail_531_) == 0)
{
lean_object* v_head_532_; lean_object* v___x_533_; lean_object* v_fst_534_; lean_object* v_snd_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_543_; 
v_head_532_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_head_532_);
lean_dec_ref_known(v___x_530_, 2);
v___x_533_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa(v_head_532_);
lean_dec(v_head_532_);
v_fst_534_ = lean_ctor_get(v___x_533_, 0);
v_snd_535_ = lean_ctor_get(v___x_533_, 1);
v_isSharedCheck_543_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_543_ == 0)
{
v___x_537_ = v___x_533_;
v_isShared_538_ = v_isSharedCheck_543_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_snd_535_);
lean_inc(v_fst_534_);
lean_dec(v___x_533_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_543_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_539_; lean_object* v___x_541_; 
v___x_539_ = l_Int_negOfNat(v_snd_535_);
lean_dec(v_snd_535_);
if (v_isShared_538_ == 0)
{
lean_ctor_set(v___x_537_, 1, v___x_539_);
v___x_541_ = v___x_537_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_fst_534_);
lean_ctor_set(v_reuseFailAlloc_542_, 1, v___x_539_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
}
else
{
lean_object* v_tail_544_; 
lean_inc_ref(v_tail_531_);
v_tail_544_ = lean_ctor_get(v_tail_531_, 1);
if (lean_obj_tag(v_tail_544_) == 0)
{
lean_object* v_head_545_; lean_object* v_head_546_; lean_object* v___x_547_; lean_object* v_fst_548_; lean_object* v_snd_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_559_; 
v_head_545_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_head_545_);
lean_dec_ref_known(v___x_530_, 2);
v_head_546_ = lean_ctor_get(v_tail_531_, 0);
lean_inc(v_head_546_);
lean_dec_ref_known(v_tail_531_, 2);
v___x_547_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeMantissa(v_head_545_);
lean_dec(v_head_545_);
v_fst_548_ = lean_ctor_get(v___x_547_, 0);
v_snd_549_ = lean_ctor_get(v___x_547_, 1);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_547_);
if (v_isSharedCheck_559_ == 0)
{
v___x_551_ = v___x_547_;
v_isShared_552_ = v_isSharedCheck_559_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_snd_549_);
lean_inc(v_fst_548_);
lean_dec(v___x_547_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_559_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v_exp_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_557_; 
v_exp_553_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeDecInt(v_head_546_);
v___x_554_ = l_Int_negOfNat(v_snd_549_);
lean_dec(v_snd_549_);
v___x_555_ = lean_int_add(v___x_554_, v_exp_553_);
lean_dec(v_exp_553_);
lean_dec(v___x_554_);
if (v_isShared_552_ == 0)
{
lean_ctor_set(v___x_551_, 1, v___x_555_);
v___x_557_ = v___x_551_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_fst_548_);
lean_ctor_set(v_reuseFailAlloc_558_, 1, v___x_555_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
}
else
{
lean_dec_ref_known(v_tail_531_, 2);
lean_dec_ref_known(v___x_530_, 2);
goto v___jp_522_;
}
}
}
else
{
lean_dec(v___x_530_);
goto v___jp_522_;
}
v___jp_522_:
{
lean_object* v___x_523_; 
v___x_523_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__1, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__1_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__1);
return v___x_523_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__1(lean_object* v_s_560_, lean_object* v___x_561_, lean_object* v___x_562_, lean_object* v_inst_563_, lean_object* v_R_564_, lean_object* v_a_565_, lean_object* v_b_566_){
_start:
{
lean_object* v___x_567_; 
v___x_567_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__1___redArg(v_s_560_, v___x_561_, v___x_562_, v_a_565_, v_b_566_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__1___boxed(lean_object* v_s_568_, lean_object* v___x_569_, lean_object* v___x_570_, lean_object* v_inst_571_, lean_object* v_R_572_, lean_object* v_a_573_, lean_object* v_b_574_){
_start:
{
lean_object* v_res_575_; 
v_res_575_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp_spec__1(v_s_568_, v___x_569_, v___x_570_, v_inst_571_, v_R_572_, v_a_573_, v_b_574_);
lean_dec_ref(v___x_569_);
return v_res_575_;
}
}
static double _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__2(void){
_start:
{
lean_object* v___x_578_; double v___x_579_; 
v___x_578_ = lean_unsigned_to_nat(0u);
v___x_579_ = lean_float_of_nat(v___x_578_);
return v___x_579_;
}
}
LEAN_EXPORT double l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat(lean_object* v_s_580_){
_start:
{
lean_object* v___x_581_; lean_object* v_fst_582_; lean_object* v_snd_583_; lean_object* v___x_584_; uint8_t v___x_585_; 
v___x_581_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeSign(v_s_580_);
v_fst_582_ = lean_ctor_get(v___x_581_, 0);
lean_inc(v_fst_582_);
v_snd_583_ = lean_ctor_get(v___x_581_, 1);
lean_inc(v_snd_583_);
lean_dec_ref(v___x_581_);
v___x_584_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__0));
v___x_585_ = lean_string_dec_eq(v_snd_583_, v___x_584_);
if (v___x_585_ == 0)
{
lean_object* v___x_586_; uint8_t v___x_587_; 
v___x_586_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__1));
v___x_587_ = lean_string_dec_eq(v_snd_583_, v___x_586_);
if (v___x_587_ == 0)
{
lean_object* v___x_588_; lean_object* v_fst_589_; lean_object* v_snd_590_; lean_object* v___x_591_; uint8_t v___x_592_; lean_object* v___x_593_; double v_flt_594_; uint8_t v___x_595_; 
v___x_588_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp(v_snd_583_);
v_fst_589_ = lean_ctor_get(v___x_588_, 0);
lean_inc(v_fst_589_);
v_snd_590_ = lean_ctor_get(v___x_588_, 1);
lean_inc(v_snd_590_);
lean_dec_ref(v___x_588_);
v___x_591_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__0, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__0_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFrExp___closed__0);
v___x_592_ = lean_int_dec_lt(v_snd_590_, v___x_591_);
v___x_593_ = lean_nat_abs(v_snd_590_);
lean_dec(v_snd_590_);
v_flt_594_ = l_Float_ofScientific(v_fst_589_, v___x_592_, v___x_593_);
v___x_595_ = lean_unbox(v_fst_582_);
lean_dec(v_fst_582_);
if (v___x_595_ == 0)
{
return v_flt_594_;
}
else
{
double v___x_596_; 
v___x_596_ = lean_float_negate(v_flt_594_);
return v___x_596_;
}
}
else
{
uint8_t v___x_597_; 
lean_dec(v_snd_583_);
v___x_597_ = lean_unbox(v_fst_582_);
if (v___x_597_ == 0)
{
lean_object* v___x_598_; lean_object* v___x_599_; double v___x_600_; double v___x_601_; double v___x_602_; 
lean_dec(v_fst_582_);
v___x_598_ = lean_unsigned_to_nat(0u);
v___x_599_ = lean_unsigned_to_nat(1u);
v___x_600_ = l_Float_ofScientific(v___x_598_, v___x_587_, v___x_599_);
v___x_601_ = lean_float_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__2, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__2_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__2);
v___x_602_ = lean_float_div(v___x_600_, v___x_601_);
return v___x_602_;
}
else
{
lean_object* v___x_603_; lean_object* v___x_604_; uint8_t v___x_605_; double v___x_606_; double v___x_607_; double v___x_608_; double v___x_609_; 
v___x_603_ = lean_unsigned_to_nat(0u);
v___x_604_ = lean_unsigned_to_nat(1u);
v___x_605_ = lean_unbox(v_fst_582_);
lean_dec(v_fst_582_);
v___x_606_ = l_Float_ofScientific(v___x_603_, v___x_605_, v___x_604_);
v___x_607_ = lean_float_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__2, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__2_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__2);
v___x_608_ = lean_float_div(v___x_606_, v___x_607_);
v___x_609_ = lean_float_negate(v___x_608_);
return v___x_609_;
}
}
}
else
{
uint8_t v___x_610_; 
lean_dec(v_snd_583_);
v___x_610_ = lean_unbox(v_fst_582_);
if (v___x_610_ == 0)
{
lean_object* v___x_611_; lean_object* v___x_612_; double v___x_613_; double v___x_614_; double v___x_615_; 
lean_dec(v_fst_582_);
v___x_611_ = lean_unsigned_to_nat(10u);
v___x_612_ = lean_unsigned_to_nat(1u);
v___x_613_ = l_Float_ofScientific(v___x_611_, v___x_585_, v___x_612_);
v___x_614_ = lean_float_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__2, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__2_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__2);
v___x_615_ = lean_float_div(v___x_613_, v___x_614_);
return v___x_615_;
}
else
{
lean_object* v___x_616_; lean_object* v___x_617_; uint8_t v___x_618_; double v___x_619_; double v___x_620_; double v___x_621_; double v___x_622_; 
v___x_616_ = lean_unsigned_to_nat(10u);
v___x_617_ = lean_unsigned_to_nat(1u);
v___x_618_ = lean_unbox(v_fst_582_);
lean_dec(v_fst_582_);
v___x_619_ = l_Float_ofScientific(v___x_616_, v___x_618_, v___x_617_);
v___x_620_ = lean_float_negate(v___x_619_);
v___x_621_ = lean_float_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__2, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__2_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___closed__2);
v___x_622_ = lean_float_div(v___x_620_, v___x_621_);
return v___x_622_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat___boxed(lean_object* v_s_623_){
_start:
{
double v_res_624_; lean_object* v_r_625_; 
v_res_624_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat(v_s_623_);
v_r_625_ = lean_box_float(v_res_624_);
return v_r_625_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__4(void){
_start:
{
lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_634_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__3));
v___x_635_ = l_Lean_MessageData_ofFormat(v___x_634_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat(lean_object* v_x_636_, lean_object* v_a_637_, lean_object* v_a_638_){
_start:
{
lean_object* v_a_641_; lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_645_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__1));
v___x_646_ = l_Lean_Syntax_isLit_x3f(v___x_645_, v_x_636_);
if (lean_obj_tag(v___x_646_) == 1)
{
lean_object* v_val_647_; 
v_val_647_ = lean_ctor_get(v___x_646_, 0);
lean_inc(v_val_647_);
lean_dec_ref_known(v___x_646_, 1);
v_a_641_ = v_val_647_;
goto v___jp_640_;
}
else
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_657_; 
lean_dec(v___x_646_);
v___x_648_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__4, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__4_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__4);
v___x_649_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_636_, v___x_648_, v_a_637_, v_a_638_);
v_a_650_ = lean_ctor_get(v___x_649_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_657_ == 0)
{
v___x_652_ = v___x_649_;
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_649_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_a_650_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
v___jp_640_:
{
double v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_642_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeFloat(v_a_641_);
v___x_643_ = lean_box_float(v___x_642_);
v___x_644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_644_, 0, v___x_643_);
return v___x_644_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___boxed(lean_object* v_x_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat(v_x_658_, v_a_659_, v_a_660_);
lean_dec(v_a_660_);
lean_dec_ref(v_a_659_);
lean_dec(v_x_658_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum_spec__0___redArg(lean_object* v___x_663_, lean_object* v___x_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_b_667_){
_start:
{
lean_object* v___x_668_; uint8_t v_decide_669_; 
v___x_668_ = lean_nat_sub(v___x_663_, v___x_664_);
v_decide_669_ = lean_nat_dec_eq(v_a_666_, v___x_668_);
lean_dec(v___x_668_);
if (v_decide_669_ == 0)
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; uint32_t v___x_673_; uint32_t v___x_674_; uint8_t v___x_675_; 
v___x_670_ = lean_nat_add(v___x_664_, v_a_666_);
lean_dec(v_a_666_);
v___x_671_ = lean_string_utf8_next_fast(v_a_665_, v___x_670_);
v___x_672_ = lean_nat_sub(v___x_671_, v___x_664_);
v___x_673_ = lean_string_utf8_get_fast(v_a_665_, v___x_670_);
lean_dec(v___x_670_);
v___x_674_ = 95;
v___x_675_ = lean_uint32_dec_eq(v___x_673_, v___x_674_);
if (v___x_675_ == 0)
{
lean_object* v___x_676_; lean_object* v___x_677_; uint32_t v___x_678_; uint32_t v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_676_ = lean_unsigned_to_nat(2u);
v___x_677_ = lean_nat_mul(v_b_667_, v___x_676_);
lean_dec(v_b_667_);
v___x_678_ = 48;
v___x_679_ = lean_uint32_sub(v___x_673_, v___x_678_);
v___x_680_ = lean_uint32_to_nat(v___x_679_);
v___x_681_ = lean_nat_add(v___x_677_, v___x_680_);
lean_dec(v___x_680_);
lean_dec(v___x_677_);
v_a_666_ = v___x_672_;
v_b_667_ = v___x_681_;
goto _start;
}
else
{
v_a_666_ = v___x_672_;
goto _start;
}
}
else
{
lean_dec(v_a_666_);
return v_b_667_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum_spec__0___redArg___boxed(lean_object* v___x_684_, lean_object* v___x_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_b_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum_spec__0___redArg(v___x_684_, v___x_685_, v_a_686_, v_a_687_, v_b_688_);
lean_dec_ref(v_a_686_);
lean_dec(v___x_685_);
lean_dec(v___x_684_);
return v_res_689_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__4(void){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_698_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__3));
v___x_699_ = l_Lean_MessageData_ofFormat(v___x_698_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum(lean_object* v_x_700_, lean_object* v_a_701_, lean_object* v_a_702_){
_start:
{
lean_object* v_a_705_; lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_713_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__1));
v___x_714_ = l_Lean_Syntax_isLit_x3f(v___x_713_, v_x_700_);
if (lean_obj_tag(v___x_714_) == 1)
{
lean_object* v_val_715_; 
v_val_715_ = lean_ctor_get(v___x_714_, 0);
lean_inc(v_val_715_);
lean_dec_ref_known(v___x_714_, 1);
v_a_705_ = v_val_715_;
goto v___jp_704_;
}
else
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v_a_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_725_; 
lean_dec(v___x_714_);
v___x_716_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__4, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__4_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__4);
v___x_717_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_700_, v___x_716_, v_a_701_, v_a_702_);
v_a_718_ = lean_ctor_get(v___x_717_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_717_);
if (v_isSharedCheck_725_ == 0)
{
v___x_720_ = v___x_717_;
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_a_718_);
lean_dec(v___x_717_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_723_; 
if (v_isShared_721_ == 0)
{
v___x_723_ = v___x_720_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_a_718_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
v___jp_704_:
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_706_ = lean_unsigned_to_nat(0u);
v___x_707_ = lean_unsigned_to_nat(2u);
v___x_708_ = lean_string_utf8_byte_size(v_a_705_);
lean_inc_ref(v_a_705_);
v___x_709_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_709_, 0, v_a_705_);
lean_ctor_set(v___x_709_, 1, v___x_706_);
lean_ctor_set(v___x_709_, 2, v___x_708_);
v___x_710_ = l_String_Slice_Pos_nextn(v___x_709_, v___x_706_, v___x_707_);
lean_dec_ref_known(v___x_709_, 3);
v___x_711_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum_spec__0___redArg(v___x_708_, v___x_710_, v_a_705_, v___x_706_, v___x_706_);
lean_dec_ref(v_a_705_);
lean_dec(v___x_710_);
v___x_712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_712_, 0, v___x_711_);
return v___x_712_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___boxed(lean_object* v_x_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_){
_start:
{
lean_object* v_res_730_; 
v_res_730_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum(v_x_726_, v_a_727_, v_a_728_);
lean_dec(v_a_728_);
lean_dec_ref(v_a_727_);
lean_dec(v_x_726_);
return v_res_730_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum_spec__0(lean_object* v___x_731_, lean_object* v___x_732_, lean_object* v___x_733_, lean_object* v_a_734_, lean_object* v_inst_735_, lean_object* v_R_736_, lean_object* v_a_737_, lean_object* v_b_738_, lean_object* v_c_739_){
_start:
{
lean_object* v___x_740_; 
v___x_740_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum_spec__0___redArg(v___x_731_, v___x_732_, v_a_734_, v_a_737_, v_b_738_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum_spec__0___boxed(lean_object* v___x_741_, lean_object* v___x_742_, lean_object* v___x_743_, lean_object* v_a_744_, lean_object* v_inst_745_, lean_object* v_R_746_, lean_object* v_a_747_, lean_object* v_b_748_, lean_object* v_c_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum_spec__0(v___x_741_, v___x_742_, v___x_743_, v_a_744_, v_inst_745_, v_R_746_, v_a_747_, v_b_748_, v_c_749_);
lean_dec_ref(v_a_744_);
lean_dec_ref(v___x_743_);
lean_dec(v___x_742_);
lean_dec(v___x_741_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum_spec__0___redArg(lean_object* v___x_751_, lean_object* v___x_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_b_755_){
_start:
{
lean_object* v___x_756_; uint8_t v_decide_757_; 
v___x_756_ = lean_nat_sub(v___x_751_, v___x_752_);
v_decide_757_ = lean_nat_dec_eq(v_a_754_, v___x_756_);
lean_dec(v___x_756_);
if (v_decide_757_ == 0)
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; uint32_t v___x_761_; uint32_t v___x_762_; uint8_t v___x_763_; 
v___x_758_ = lean_nat_add(v___x_752_, v_a_754_);
lean_dec(v_a_754_);
v___x_759_ = lean_string_utf8_next_fast(v_a_753_, v___x_758_);
v___x_760_ = lean_nat_sub(v___x_759_, v___x_752_);
v___x_761_ = lean_string_utf8_get_fast(v_a_753_, v___x_758_);
lean_dec(v___x_758_);
v___x_762_ = 95;
v___x_763_ = lean_uint32_dec_eq(v___x_761_, v___x_762_);
if (v___x_763_ == 0)
{
lean_object* v___x_764_; lean_object* v___x_765_; uint32_t v___x_766_; uint32_t v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_764_ = lean_unsigned_to_nat(8u);
v___x_765_ = lean_nat_mul(v_b_755_, v___x_764_);
lean_dec(v_b_755_);
v___x_766_ = 48;
v___x_767_ = lean_uint32_sub(v___x_761_, v___x_766_);
v___x_768_ = lean_uint32_to_nat(v___x_767_);
v___x_769_ = lean_nat_add(v___x_765_, v___x_768_);
lean_dec(v___x_768_);
lean_dec(v___x_765_);
v_a_754_ = v___x_760_;
v_b_755_ = v___x_769_;
goto _start;
}
else
{
v_a_754_ = v___x_760_;
goto _start;
}
}
else
{
lean_dec(v_a_754_);
return v_b_755_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum_spec__0___redArg___boxed(lean_object* v___x_772_, lean_object* v___x_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_b_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum_spec__0___redArg(v___x_772_, v___x_773_, v_a_774_, v_a_775_, v_b_776_);
lean_dec_ref(v_a_774_);
lean_dec(v___x_773_);
lean_dec(v___x_772_);
return v_res_777_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__4(void){
_start:
{
lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_786_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__3));
v___x_787_ = l_Lean_MessageData_ofFormat(v___x_786_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum(lean_object* v_x_788_, lean_object* v_a_789_, lean_object* v_a_790_){
_start:
{
lean_object* v_a_793_; lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__1));
v___x_802_ = l_Lean_Syntax_isLit_x3f(v___x_801_, v_x_788_);
if (lean_obj_tag(v___x_802_) == 1)
{
lean_object* v_val_803_; 
v_val_803_ = lean_ctor_get(v___x_802_, 0);
lean_inc(v_val_803_);
lean_dec_ref_known(v___x_802_, 1);
v_a_793_ = v_val_803_;
goto v___jp_792_;
}
else
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v_a_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_813_; 
lean_dec(v___x_802_);
v___x_804_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__4, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__4_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__4);
v___x_805_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_788_, v___x_804_, v_a_789_, v_a_790_);
v_a_806_ = lean_ctor_get(v___x_805_, 0);
v_isSharedCheck_813_ = !lean_is_exclusive(v___x_805_);
if (v_isSharedCheck_813_ == 0)
{
v___x_808_ = v___x_805_;
v_isShared_809_ = v_isSharedCheck_813_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_a_806_);
lean_dec(v___x_805_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_813_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v___x_811_; 
if (v_isShared_809_ == 0)
{
v___x_811_ = v___x_808_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_a_806_);
v___x_811_ = v_reuseFailAlloc_812_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
return v___x_811_;
}
}
}
v___jp_792_:
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_794_ = lean_unsigned_to_nat(0u);
v___x_795_ = lean_unsigned_to_nat(2u);
v___x_796_ = lean_string_utf8_byte_size(v_a_793_);
lean_inc_ref(v_a_793_);
v___x_797_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_797_, 0, v_a_793_);
lean_ctor_set(v___x_797_, 1, v___x_794_);
lean_ctor_set(v___x_797_, 2, v___x_796_);
v___x_798_ = l_String_Slice_Pos_nextn(v___x_797_, v___x_794_, v___x_795_);
lean_dec_ref_known(v___x_797_, 3);
v___x_799_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum_spec__0___redArg(v___x_796_, v___x_798_, v_a_793_, v___x_794_, v___x_794_);
lean_dec_ref(v_a_793_);
lean_dec(v___x_798_);
v___x_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_800_, 0, v___x_799_);
return v___x_800_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___boxed(lean_object* v_x_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum(v_x_814_, v_a_815_, v_a_816_);
lean_dec(v_a_816_);
lean_dec_ref(v_a_815_);
lean_dec(v_x_814_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum_spec__0(lean_object* v___x_819_, lean_object* v___x_820_, lean_object* v___x_821_, lean_object* v_a_822_, lean_object* v_inst_823_, lean_object* v_R_824_, lean_object* v_a_825_, lean_object* v_b_826_, lean_object* v_c_827_){
_start:
{
lean_object* v___x_828_; 
v___x_828_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum_spec__0___redArg(v___x_819_, v___x_820_, v_a_822_, v_a_825_, v_b_826_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum_spec__0___boxed(lean_object* v___x_829_, lean_object* v___x_830_, lean_object* v___x_831_, lean_object* v_a_832_, lean_object* v_inst_833_, lean_object* v_R_834_, lean_object* v_a_835_, lean_object* v_b_836_, lean_object* v_c_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum_spec__0(v___x_829_, v___x_830_, v___x_831_, v_a_832_, v_inst_833_, v_R_834_, v_a_835_, v_b_836_, v_c_837_);
lean_dec_ref(v_a_832_);
lean_dec_ref(v___x_831_);
lean_dec(v___x_830_);
lean_dec(v___x_829_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigit(uint32_t v_c_839_){
_start:
{
uint32_t v___x_840_; uint8_t v___x_841_; 
v___x_840_ = 57;
v___x_841_ = lean_uint32_dec_le(v_c_839_, v___x_840_);
if (v___x_841_ == 0)
{
uint32_t v___x_842_; uint8_t v___x_843_; 
v___x_842_ = 70;
v___x_843_ = lean_uint32_dec_le(v_c_839_, v___x_842_);
if (v___x_843_ == 0)
{
lean_object* v___x_844_; uint32_t v___x_845_; uint32_t v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_844_ = lean_unsigned_to_nat(10u);
v___x_845_ = 97;
v___x_846_ = lean_uint32_sub(v_c_839_, v___x_845_);
v___x_847_ = lean_uint32_to_nat(v___x_846_);
v___x_848_ = lean_nat_add(v___x_844_, v___x_847_);
lean_dec(v___x_847_);
return v___x_848_;
}
else
{
lean_object* v___x_849_; uint32_t v___x_850_; uint32_t v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_849_ = lean_unsigned_to_nat(10u);
v___x_850_ = 65;
v___x_851_ = lean_uint32_sub(v_c_839_, v___x_850_);
v___x_852_ = lean_uint32_to_nat(v___x_851_);
v___x_853_ = lean_nat_add(v___x_849_, v___x_852_);
lean_dec(v___x_852_);
return v___x_853_;
}
}
else
{
uint32_t v___x_854_; uint32_t v___x_855_; lean_object* v___x_856_; 
v___x_854_ = 48;
v___x_855_ = lean_uint32_sub(v_c_839_, v___x_854_);
v___x_856_ = lean_uint32_to_nat(v___x_855_);
return v___x_856_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigit___boxed(lean_object* v_c_857_){
_start:
{
uint32_t v_c_boxed_858_; lean_object* v_res_859_; 
v_c_boxed_858_ = lean_unbox_uint32(v_c_857_);
lean_dec(v_c_857_);
v_res_859_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigit(v_c_boxed_858_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum_spec__0___redArg(lean_object* v___x_860_, lean_object* v___x_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_b_864_){
_start:
{
lean_object* v___x_865_; uint8_t v_decide_866_; 
v___x_865_ = lean_nat_sub(v___x_860_, v___x_861_);
v_decide_866_ = lean_nat_dec_eq(v_a_863_, v___x_865_);
lean_dec(v___x_865_);
if (v_decide_866_ == 0)
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; uint32_t v___x_870_; uint32_t v___x_871_; uint8_t v___x_872_; 
v___x_867_ = lean_nat_add(v___x_861_, v_a_863_);
lean_dec(v_a_863_);
v___x_868_ = lean_string_utf8_next_fast(v_a_862_, v___x_867_);
v___x_869_ = lean_nat_sub(v___x_868_, v___x_861_);
v___x_870_ = lean_string_utf8_get_fast(v_a_862_, v___x_867_);
lean_dec(v___x_867_);
v___x_871_ = 95;
v___x_872_ = lean_uint32_dec_eq(v___x_870_, v___x_871_);
if (v___x_872_ == 0)
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_873_ = lean_unsigned_to_nat(16u);
v___x_874_ = lean_nat_mul(v_b_864_, v___x_873_);
lean_dec(v_b_864_);
v___x_875_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigit(v___x_870_);
v___x_876_ = lean_nat_add(v___x_874_, v___x_875_);
lean_dec(v___x_875_);
lean_dec(v___x_874_);
v_a_863_ = v___x_869_;
v_b_864_ = v___x_876_;
goto _start;
}
else
{
v_a_863_ = v___x_869_;
goto _start;
}
}
else
{
lean_dec(v_a_863_);
return v_b_864_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum_spec__0___redArg___boxed(lean_object* v___x_879_, lean_object* v___x_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_b_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum_spec__0___redArg(v___x_879_, v___x_880_, v_a_881_, v_a_882_, v_b_883_);
lean_dec_ref(v_a_881_);
lean_dec(v___x_880_);
lean_dec(v___x_879_);
return v_res_884_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__4(void){
_start:
{
lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_893_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__3));
v___x_894_ = l_Lean_MessageData_ofFormat(v___x_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum(lean_object* v_x_895_, lean_object* v_a_896_, lean_object* v_a_897_){
_start:
{
lean_object* v_a_900_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_908_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__1));
v___x_909_ = l_Lean_Syntax_isLit_x3f(v___x_908_, v_x_895_);
if (lean_obj_tag(v___x_909_) == 1)
{
lean_object* v_val_910_; 
v_val_910_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_val_910_);
lean_dec_ref_known(v___x_909_, 1);
v_a_900_ = v_val_910_;
goto v___jp_899_;
}
else
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_920_; 
lean_dec(v___x_909_);
v___x_911_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__4, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__4_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__4);
v___x_912_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_895_, v___x_911_, v_a_896_, v_a_897_);
v_a_913_ = lean_ctor_get(v___x_912_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_912_);
if (v_isSharedCheck_920_ == 0)
{
v___x_915_ = v___x_912_;
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_912_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_918_; 
if (v_isShared_916_ == 0)
{
v___x_918_ = v___x_915_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_913_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
v___jp_899_:
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_901_ = lean_unsigned_to_nat(0u);
v___x_902_ = lean_unsigned_to_nat(2u);
v___x_903_ = lean_string_utf8_byte_size(v_a_900_);
lean_inc_ref(v_a_900_);
v___x_904_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_904_, 0, v_a_900_);
lean_ctor_set(v___x_904_, 1, v___x_901_);
lean_ctor_set(v___x_904_, 2, v___x_903_);
v___x_905_ = l_String_Slice_Pos_nextn(v___x_904_, v___x_901_, v___x_902_);
lean_dec_ref_known(v___x_904_, 3);
v___x_906_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum_spec__0___redArg(v___x_903_, v___x_905_, v_a_900_, v___x_901_, v___x_901_);
lean_dec_ref(v_a_900_);
lean_dec(v___x_905_);
v___x_907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_907_, 0, v___x_906_);
return v___x_907_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___boxed(lean_object* v_x_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum(v_x_921_, v_a_922_, v_a_923_);
lean_dec(v_a_923_);
lean_dec_ref(v_a_922_);
lean_dec(v_x_921_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum_spec__0(lean_object* v___x_926_, lean_object* v___x_927_, lean_object* v___x_928_, lean_object* v_a_929_, lean_object* v_inst_930_, lean_object* v_R_931_, lean_object* v_a_932_, lean_object* v_b_933_, lean_object* v_c_934_){
_start:
{
lean_object* v___x_935_; 
v___x_935_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum_spec__0___redArg(v___x_926_, v___x_927_, v_a_929_, v_a_932_, v_b_933_);
return v___x_935_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum_spec__0___boxed(lean_object* v___x_936_, lean_object* v___x_937_, lean_object* v___x_938_, lean_object* v_a_939_, lean_object* v_inst_940_, lean_object* v_R_941_, lean_object* v_a_942_, lean_object* v_b_943_, lean_object* v_c_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum_spec__0(v___x_936_, v___x_937_, v___x_938_, v_a_939_, v_inst_940_, v_R_941_, v_a_942_, v_b_943_, v_c_944_);
lean_dec_ref(v_a_939_);
lean_dec_ref(v___x_938_);
lean_dec(v___x_937_);
lean_dec(v___x_936_);
return v_res_945_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__1(void){
_start:
{
lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_947_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__0));
v___x_948_ = l_Lean_stringToMessageData(v___x_947_);
return v___x_948_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__6(void){
_start:
{
lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_957_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__5));
v___x_958_ = l_Lean_MessageData_ofFormat(v___x_957_);
return v___x_958_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime(lean_object* v_x_959_, lean_object* v_a_960_, lean_object* v_a_961_){
_start:
{
lean_object* v_a_964_; lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_976_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__3));
v___x_977_ = l_Lean_Syntax_isLit_x3f(v___x_976_, v_x_959_);
if (lean_obj_tag(v___x_977_) == 1)
{
lean_object* v_val_978_; 
v_val_978_ = lean_ctor_get(v___x_977_, 0);
lean_inc(v_val_978_);
lean_dec_ref_known(v___x_977_, 1);
v_a_964_ = v_val_978_;
goto v___jp_963_;
}
else
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_988_; 
lean_dec(v___x_977_);
v___x_979_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__6, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__6_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__6);
v___x_980_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_959_, v___x_979_, v_a_960_, v_a_961_);
v_a_981_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_988_ == 0)
{
v___x_983_ = v___x_980_;
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v___x_980_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_986_; 
if (v_isShared_984_ == 0)
{
v___x_986_ = v___x_983_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_a_981_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
v___jp_963_:
{
lean_object* v___x_965_; 
v___x_965_ = l_Lake_Toml_DateTime_ofString_x3f(v_a_964_);
if (lean_obj_tag(v___x_965_) == 1)
{
lean_object* v_val_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_973_; 
v_val_966_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_973_ == 0)
{
v___x_968_ = v___x_965_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_val_966_);
lean_dec(v___x_965_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_971_; 
if (v_isShared_969_ == 0)
{
lean_ctor_set_tag(v___x_968_, 0);
v___x_971_ = v___x_968_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_val_966_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
else
{
lean_object* v___x_974_; lean_object* v___x_975_; 
lean_dec(v___x_965_);
v___x_974_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__1, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__1_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__1);
v___x_975_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_959_, v___x_974_, v_a_960_, v_a_961_);
return v___x_975_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___boxed(lean_object* v_x_989_, lean_object* v_a_990_, lean_object* v_a_991_, lean_object* v_a_992_){
_start:
{
lean_object* v_res_993_; 
v_res_993_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime(v_x_989_, v_a_990_, v_a_991_);
lean_dec(v_a_991_);
lean_dec_ref(v_a_990_);
lean_dec(v_x_989_);
return v_res_993_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__4(void){
_start:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_1002_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__3));
v___x_1003_ = l_Lean_MessageData_ofFormat(v___x_1002_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString(lean_object* v_x_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_){
_start:
{
lean_object* v_a_1009_; lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__1));
v___x_1022_ = l_Lean_Syntax_isLit_x3f(v___x_1021_, v_x_1004_);
if (lean_obj_tag(v___x_1022_) == 1)
{
lean_object* v_val_1023_; 
v_val_1023_ = lean_ctor_get(v___x_1022_, 0);
lean_inc(v_val_1023_);
lean_dec_ref_known(v___x_1022_, 1);
v_a_1009_ = v_val_1023_;
goto v___jp_1008_;
}
else
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
lean_dec(v___x_1022_);
v___x_1024_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__4, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__4_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__4);
v___x_1025_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_1004_, v___x_1024_, v_a_1005_, v_a_1006_);
return v___x_1025_;
}
v___jp_1008_:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1010_ = lean_unsigned_to_nat(1u);
v___x_1011_ = lean_unsigned_to_nat(0u);
v___x_1012_ = lean_string_utf8_byte_size(v_a_1009_);
lean_inc_ref_n(v_a_1009_, 2);
v___x_1013_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1013_, 0, v_a_1009_);
lean_ctor_set(v___x_1013_, 1, v___x_1011_);
lean_ctor_set(v___x_1013_, 2, v___x_1012_);
v___x_1014_ = l_String_Slice_Pos_nextn(v___x_1013_, v___x_1011_, v___x_1010_);
lean_dec_ref_known(v___x_1013_, 3);
lean_inc(v___x_1014_);
v___x_1015_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1015_, 0, v_a_1009_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
lean_ctor_set(v___x_1015_, 2, v___x_1012_);
v___x_1016_ = lean_nat_sub(v___x_1012_, v___x_1014_);
v___x_1017_ = l_String_Slice_Pos_prevn(v___x_1015_, v___x_1016_, v___x_1010_);
lean_dec_ref_known(v___x_1015_, 3);
v___x_1018_ = lean_nat_add(v___x_1014_, v___x_1017_);
lean_dec(v___x_1017_);
v___x_1019_ = lean_string_utf8_extract_fast(v_a_1009_, v___x_1014_, v___x_1018_);
lean_dec(v___x_1018_);
lean_dec(v___x_1014_);
lean_dec_ref(v_a_1009_);
v___x_1020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1019_);
return v___x_1020_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___boxed(lean_object* v_x_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString(v_x_1026_, v_a_1027_, v_a_1028_);
lean_dec(v_a_1028_);
lean_dec_ref(v_a_1027_);
lean_dec(v_x_1026_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits_spec__1(lean_object* v_msg_1031_){
_start:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; 
v___x_1032_ = l_String_instInhabitedSlice;
v___x_1033_ = lean_panic_fn_borrowed(v___x_1032_, v_msg_1031_);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits_spec__0___redArg(lean_object* v___y_1034_, lean_object* v_a_1035_, lean_object* v_b_1036_){
_start:
{
lean_object* v_str_1037_; lean_object* v_startInclusive_1038_; lean_object* v_endExclusive_1039_; lean_object* v___x_1040_; uint8_t v_decide_1041_; 
v_str_1037_ = lean_ctor_get(v___y_1034_, 0);
v_startInclusive_1038_ = lean_ctor_get(v___y_1034_, 1);
v_endExclusive_1039_ = lean_ctor_get(v___y_1034_, 2);
v___x_1040_ = lean_nat_sub(v_endExclusive_1039_, v_startInclusive_1038_);
v_decide_1041_ = lean_nat_dec_eq(v_a_1035_, v___x_1040_);
lean_dec(v___x_1040_);
if (v_decide_1041_ == 0)
{
lean_object* v___x_1042_; uint32_t v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1042_ = lean_nat_add(v_startInclusive_1038_, v_a_1035_);
lean_dec(v_a_1035_);
v___x_1043_ = lean_string_utf8_get_fast(v_str_1037_, v___x_1042_);
v___x_1044_ = lean_string_utf8_next_fast(v_str_1037_, v___x_1042_);
lean_dec(v___x_1042_);
v___x_1045_ = lean_nat_sub(v___x_1044_, v_startInclusive_1038_);
v___x_1046_ = lean_unsigned_to_nat(16u);
v___x_1047_ = lean_nat_mul(v_b_1036_, v___x_1046_);
lean_dec(v_b_1036_);
v___x_1048_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigit(v___x_1043_);
v___x_1049_ = lean_nat_add(v___x_1047_, v___x_1048_);
lean_dec(v___x_1048_);
lean_dec(v___x_1047_);
v_a_1035_ = v___x_1045_;
v_b_1036_ = v___x_1049_;
goto _start;
}
else
{
lean_dec(v_a_1035_);
return v_b_1036_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits_spec__0___redArg___boxed(lean_object* v___y_1051_, lean_object* v_a_1052_, lean_object* v_b_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits_spec__0___redArg(v___y_1051_, v_a_1052_, v_b_1053_);
lean_dec_ref(v___y_1051_);
return v_res_1054_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits___closed__3(void){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1058_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits___closed__2));
v___x_1059_ = lean_unsigned_to_nat(14u);
v___x_1060_ = lean_unsigned_to_nat(22u);
v___x_1061_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits___closed__1));
v___x_1062_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits___closed__0));
v___x_1063_ = l_mkPanicMessageWithDecl(v___x_1062_, v___x_1061_, v___x_1060_, v___x_1059_, v___x_1058_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits(lean_object* v_s_1064_){
_start:
{
lean_object* v_str_1065_; lean_object* v_startPos_1066_; lean_object* v_stopPos_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1084_; 
v_str_1065_ = lean_ctor_get(v_s_1064_, 0);
v_startPos_1066_ = lean_ctor_get(v_s_1064_, 1);
v_stopPos_1067_ = lean_ctor_get(v_s_1064_, 2);
v_isSharedCheck_1084_ = !lean_is_exclusive(v_s_1064_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1069_ = v_s_1064_;
v_isShared_1070_ = v_isSharedCheck_1084_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_stopPos_1067_);
lean_inc(v_startPos_1066_);
lean_inc(v_str_1065_);
lean_dec(v_s_1064_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1084_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
lean_object* v___x_1071_; lean_object* v___y_1073_; uint8_t v___x_1078_; 
v___x_1071_ = lean_unsigned_to_nat(0u);
v___x_1078_ = lean_string_is_valid_pos(v_str_1065_, v_startPos_1066_);
if (v___x_1078_ == 0)
{
lean_del_object(v___x_1069_);
lean_dec(v_stopPos_1067_);
lean_dec(v_startPos_1066_);
lean_dec_ref(v_str_1065_);
goto v___jp_1075_;
}
else
{
uint8_t v___x_1079_; 
v___x_1079_ = lean_string_is_valid_pos(v_str_1065_, v_stopPos_1067_);
if (v___x_1079_ == 0)
{
lean_del_object(v___x_1069_);
lean_dec(v_stopPos_1067_);
lean_dec(v_startPos_1066_);
lean_dec_ref(v_str_1065_);
goto v___jp_1075_;
}
else
{
uint8_t v___x_1080_; 
v___x_1080_ = lean_nat_dec_le(v_startPos_1066_, v_stopPos_1067_);
if (v___x_1080_ == 0)
{
lean_del_object(v___x_1069_);
lean_dec(v_stopPos_1067_);
lean_dec(v_startPos_1066_);
lean_dec_ref(v_str_1065_);
goto v___jp_1075_;
}
else
{
lean_object* v___x_1082_; 
if (v_isShared_1070_ == 0)
{
v___x_1082_ = v___x_1069_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_str_1065_);
lean_ctor_set(v_reuseFailAlloc_1083_, 1, v_startPos_1066_);
lean_ctor_set(v_reuseFailAlloc_1083_, 2, v_stopPos_1067_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
v___y_1073_ = v___x_1082_;
goto v___jp_1072_;
}
}
}
}
v___jp_1072_:
{
lean_object* v___x_1074_; 
v___x_1074_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits_spec__0___redArg(v___y_1073_, v___x_1071_, v___x_1071_);
lean_dec_ref(v___y_1073_);
return v___x_1074_;
}
v___jp_1075_:
{
lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1076_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits___closed__3, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits___closed__3_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits___closed__3);
v___x_1077_ = l_panic___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits_spec__1(v___x_1076_);
v___y_1073_ = v___x_1077_;
goto v___jp_1072_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits_spec__0(lean_object* v___y_1085_, lean_object* v_inst_1086_, lean_object* v_R_1087_, lean_object* v_a_1088_, lean_object* v_b_1089_, lean_object* v_c_1090_){
_start:
{
lean_object* v___x_1091_; 
v___x_1091_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits_spec__0___redArg(v___y_1085_, v_a_1088_, v_b_1089_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits_spec__0___boxed(lean_object* v___y_1092_, lean_object* v_inst_1093_, lean_object* v_R_1094_, lean_object* v_a_1095_, lean_object* v_b_1096_, lean_object* v_c_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits_spec__0(v___y_1092_, v_inst_1093_, v_R_1094_, v_a_1095_, v_b_1096_, v_c_1097_);
lean_dec_ref(v___y_1092_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore_spec__0(lean_object* v_s_1099_, lean_object* v_stopPos_1100_, lean_object* v_i_1101_){
_start:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; uint8_t v___x_1107_; 
v___x_1105_ = lean_unsigned_to_nat(1u);
v___x_1106_ = lean_nat_add(v_i_1101_, v___x_1105_);
v___x_1107_ = lean_nat_dec_le(v___x_1106_, v_stopPos_1100_);
lean_dec(v___x_1106_);
if (v___x_1107_ == 0)
{
return v_i_1101_;
}
else
{
uint32_t v___x_1108_; uint32_t v___x_1109_; uint8_t v___x_1110_; 
v___x_1108_ = lean_string_utf8_get(v_s_1099_, v_i_1101_);
v___x_1109_ = 32;
v___x_1110_ = lean_uint32_dec_eq(v___x_1108_, v___x_1109_);
if (v___x_1110_ == 0)
{
uint32_t v___x_1111_; uint8_t v___x_1112_; 
v___x_1111_ = 9;
v___x_1112_ = lean_uint32_dec_eq(v___x_1108_, v___x_1111_);
if (v___x_1112_ == 0)
{
uint32_t v___x_1113_; uint8_t v___x_1114_; 
v___x_1113_ = 13;
v___x_1114_ = lean_uint32_dec_eq(v___x_1108_, v___x_1113_);
if (v___x_1114_ == 0)
{
uint32_t v___x_1115_; uint8_t v___x_1116_; 
v___x_1115_ = 10;
v___x_1116_ = lean_uint32_dec_eq(v___x_1108_, v___x_1115_);
if (v___x_1116_ == 0)
{
return v_i_1101_;
}
else
{
goto v___jp_1102_;
}
}
else
{
goto v___jp_1102_;
}
}
else
{
goto v___jp_1102_;
}
}
else
{
goto v___jp_1102_;
}
}
v___jp_1102_:
{
lean_object* v___x_1103_; 
v___x_1103_ = lean_string_utf8_next(v_s_1099_, v_i_1101_);
lean_dec(v_i_1101_);
v_i_1101_ = v___x_1103_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_takeWhileAux___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore_spec__0___boxed(lean_object* v_s_1117_, lean_object* v_stopPos_1118_, lean_object* v_i_1119_){
_start:
{
lean_object* v_res_1120_; 
v_res_1120_ = l_Substring_Raw_takeWhileAux___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore_spec__0(v_s_1117_, v_stopPos_1118_, v_i_1119_);
lean_dec(v_stopPos_1118_);
lean_dec_ref(v_s_1117_);
return v_res_1120_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__1(void){
_start:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; 
v___x_1122_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__0));
v___x_1123_ = l_Lean_stringToMessageData(v___x_1122_);
return v___x_1123_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__3(void){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1125_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__2));
v___x_1126_ = l_Lean_stringToMessageData(v___x_1125_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore(lean_object* v_lit_1127_, lean_object* v_i_1128_, lean_object* v_out_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_){
_start:
{
lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1146_; lean_object* v___y_1147_; lean_object* v___y_1148_; lean_object* v___y_1149_; lean_object* v_escape_1155_; lean_object* v___y_1156_; lean_object* v___y_1157_; uint8_t v___x_1165_; 
v___x_1165_ = lean_string_utf8_at_end(v_lit_1127_, v_i_1128_);
if (v___x_1165_ == 0)
{
uint32_t v_curr_1166_; lean_object* v_i_1167_; uint32_t v___x_1168_; uint8_t v___x_1169_; 
v_curr_1166_ = lean_string_utf8_get_fast(v_lit_1127_, v_i_1128_);
v_i_1167_ = lean_string_utf8_next_fast(v_lit_1127_, v_i_1128_);
lean_dec(v_i_1128_);
v___x_1168_ = 92;
v___x_1169_ = lean_uint32_dec_eq(v_curr_1166_, v___x_1168_);
if (v___x_1169_ == 0)
{
lean_object* v___x_1170_; 
v___x_1170_ = lean_string_push(v_out_1129_, v_curr_1166_);
v_i_1128_ = v_i_1167_;
v_out_1129_ = v___x_1170_;
goto _start;
}
else
{
uint8_t v___x_1172_; 
v___x_1172_ = lean_string_utf8_at_end(v_lit_1127_, v_i_1167_);
if (v___x_1172_ == 0)
{
uint32_t v_curr_1173_; lean_object* v_next_1174_; uint32_t v___x_1175_; uint8_t v___x_1176_; 
v_curr_1173_ = lean_string_utf8_get_fast(v_lit_1127_, v_i_1167_);
v_next_1174_ = lean_string_utf8_next_fast(v_lit_1127_, v_i_1167_);
v___x_1175_ = 98;
v___x_1176_ = lean_uint32_dec_eq(v_curr_1173_, v___x_1175_);
if (v___x_1176_ == 0)
{
uint32_t v___x_1177_; uint8_t v___x_1178_; 
v___x_1177_ = 116;
v___x_1178_ = lean_uint32_dec_eq(v_curr_1173_, v___x_1177_);
if (v___x_1178_ == 0)
{
uint32_t v___x_1179_; uint8_t v___x_1180_; 
v___x_1179_ = 110;
v___x_1180_ = lean_uint32_dec_eq(v_curr_1173_, v___x_1179_);
if (v___x_1180_ == 0)
{
uint32_t v___x_1181_; uint8_t v___x_1182_; 
v___x_1181_ = 102;
v___x_1182_ = lean_uint32_dec_eq(v_curr_1173_, v___x_1181_);
if (v___x_1182_ == 0)
{
uint32_t v___x_1183_; uint8_t v___x_1184_; 
v___x_1183_ = 114;
v___x_1184_ = lean_uint32_dec_eq(v_curr_1173_, v___x_1183_);
if (v___x_1184_ == 0)
{
uint32_t v___x_1185_; uint8_t v___x_1186_; 
v___x_1185_ = 34;
v___x_1186_ = lean_uint32_dec_eq(v_curr_1173_, v___x_1185_);
if (v___x_1186_ == 0)
{
uint8_t v___x_1187_; 
v___x_1187_ = lean_uint32_dec_eq(v_curr_1173_, v___x_1168_);
if (v___x_1187_ == 0)
{
uint32_t v___x_1188_; uint8_t v___x_1189_; 
v___x_1188_ = 117;
v___x_1189_ = lean_uint32_dec_eq(v_curr_1173_, v___x_1188_);
if (v___x_1189_ == 0)
{
uint32_t v___x_1190_; uint8_t v___x_1191_; 
v___x_1190_ = 85;
v___x_1191_ = lean_uint32_dec_eq(v_curr_1173_, v___x_1190_);
if (v___x_1191_ == 0)
{
lean_object* v___x_1192_; lean_object* v_b_1193_; 
v___x_1192_ = lean_string_utf8_byte_size(v_lit_1127_);
v_b_1193_ = l_Substring_Raw_takeWhileAux___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore_spec__0(v_lit_1127_, v___x_1192_, v_i_1167_);
v_i_1128_ = v_b_1193_;
goto _start;
}
else
{
lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1195_ = lean_string_utf8_byte_size(v_lit_1127_);
lean_inc_ref_n(v_lit_1127_, 2);
v___x_1196_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1196_, 0, v_lit_1127_);
lean_ctor_set(v___x_1196_, 1, v_next_1174_);
lean_ctor_set(v___x_1196_, 2, v___x_1195_);
v___x_1197_ = lean_unsigned_to_nat(8u);
v___x_1198_ = lean_unsigned_to_nat(0u);
v___x_1199_ = l_Substring_Raw_nextn(v___x_1196_, v___x_1197_, v___x_1198_);
lean_dec_ref_known(v___x_1196_, 3);
v___x_1200_ = lean_nat_add(v_next_1174_, v___x_1199_);
lean_dec(v___x_1199_);
v___x_1201_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1201_, 0, v_lit_1127_);
lean_ctor_set(v___x_1201_, 1, v_next_1174_);
lean_ctor_set(v___x_1201_, 2, v___x_1200_);
v_escape_1155_ = v___x_1201_;
v___y_1156_ = v_a_1130_;
v___y_1157_ = v_a_1131_;
goto v___jp_1154_;
}
}
else
{
lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1202_ = lean_string_utf8_byte_size(v_lit_1127_);
lean_inc_ref_n(v_lit_1127_, 2);
v___x_1203_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1203_, 0, v_lit_1127_);
lean_ctor_set(v___x_1203_, 1, v_next_1174_);
lean_ctor_set(v___x_1203_, 2, v___x_1202_);
v___x_1204_ = lean_unsigned_to_nat(4u);
v___x_1205_ = lean_unsigned_to_nat(0u);
v___x_1206_ = l_Substring_Raw_nextn(v___x_1203_, v___x_1204_, v___x_1205_);
lean_dec_ref_known(v___x_1203_, 3);
v___x_1207_ = lean_nat_add(v_next_1174_, v___x_1206_);
lean_dec(v___x_1206_);
v___x_1208_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1208_, 0, v_lit_1127_);
lean_ctor_set(v___x_1208_, 1, v_next_1174_);
lean_ctor_set(v___x_1208_, 2, v___x_1207_);
v_escape_1155_ = v___x_1208_;
v___y_1156_ = v_a_1130_;
v___y_1157_ = v_a_1131_;
goto v___jp_1154_;
}
}
else
{
lean_object* v___x_1209_; 
v___x_1209_ = lean_string_push(v_out_1129_, v___x_1168_);
v_i_1128_ = v_next_1174_;
v_out_1129_ = v___x_1209_;
goto _start;
}
}
else
{
lean_object* v___x_1211_; 
v___x_1211_ = lean_string_push(v_out_1129_, v___x_1185_);
v_i_1128_ = v_next_1174_;
v_out_1129_ = v___x_1211_;
goto _start;
}
}
else
{
uint32_t v___x_1213_; lean_object* v___x_1214_; 
v___x_1213_ = 13;
v___x_1214_ = lean_string_push(v_out_1129_, v___x_1213_);
v_i_1128_ = v_next_1174_;
v_out_1129_ = v___x_1214_;
goto _start;
}
}
else
{
uint32_t v___x_1216_; lean_object* v___x_1217_; 
v___x_1216_ = 12;
v___x_1217_ = lean_string_push(v_out_1129_, v___x_1216_);
v_i_1128_ = v_next_1174_;
v_out_1129_ = v___x_1217_;
goto _start;
}
}
else
{
uint32_t v___x_1219_; lean_object* v___x_1220_; 
v___x_1219_ = 10;
v___x_1220_ = lean_string_push(v_out_1129_, v___x_1219_);
v_i_1128_ = v_next_1174_;
v_out_1129_ = v___x_1220_;
goto _start;
}
}
else
{
uint32_t v___x_1222_; lean_object* v___x_1223_; 
v___x_1222_ = 9;
v___x_1223_ = lean_string_push(v_out_1129_, v___x_1222_);
v_i_1128_ = v_next_1174_;
v_out_1129_ = v___x_1223_;
goto _start;
}
}
else
{
uint32_t v___x_1225_; lean_object* v___x_1226_; 
v___x_1225_ = 8;
v___x_1226_ = lean_string_push(v_out_1129_, v___x_1225_);
v_i_1128_ = v_next_1174_;
v_out_1129_ = v___x_1226_;
goto _start;
}
}
else
{
lean_object* v___x_1228_; 
lean_dec_ref(v_lit_1127_);
v___x_1228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1228_, 0, v_out_1129_);
return v___x_1228_;
}
}
}
else
{
lean_object* v___x_1229_; 
lean_dec(v_i_1128_);
lean_dec_ref(v_lit_1127_);
v___x_1229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1229_, 0, v_out_1129_);
return v___x_1229_;
}
v___jp_1133_:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1137_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__1, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__1_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__1);
v___x_1138_ = lean_substring_tostring(v___y_1134_);
v___x_1139_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1138_);
v___x_1140_ = l_Lean_MessageData_ofFormat(v___x_1139_);
v___x_1141_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1137_);
lean_ctor_set(v___x_1141_, 1, v___x_1140_);
v___x_1142_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__3, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__3_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__3);
v___x_1143_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1141_);
lean_ctor_set(v___x_1143_, 1, v___x_1142_);
v___x_1144_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0___redArg(v___x_1143_, v___y_1136_, v___y_1135_);
return v___x_1144_;
}
v___jp_1145_:
{
lean_object* v_stopPos_1150_; uint32_t v_ch_1151_; lean_object* v___x_1152_; 
v_stopPos_1150_ = lean_ctor_get(v___y_1147_, 2);
lean_inc(v_stopPos_1150_);
lean_dec_ref(v___y_1147_);
v_ch_1151_ = lean_uint32_of_nat(v___y_1146_);
lean_dec(v___y_1146_);
v___x_1152_ = lean_string_push(v_out_1129_, v_ch_1151_);
v_i_1128_ = v_stopPos_1150_;
v_out_1129_ = v___x_1152_;
v_a_1130_ = v___y_1149_;
v_a_1131_ = v___y_1148_;
goto _start;
}
v___jp_1154_:
{
lean_object* v_val_1158_; lean_object* v___x_1159_; uint8_t v___x_1160_; 
lean_inc_ref(v_escape_1155_);
v_val_1158_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_decodeHexDigits(v_escape_1155_);
v___x_1159_ = lean_unsigned_to_nat(55296u);
v___x_1160_ = lean_nat_dec_lt(v_val_1158_, v___x_1159_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; uint8_t v___x_1162_; 
v___x_1161_ = lean_unsigned_to_nat(57343u);
v___x_1162_ = lean_nat_dec_lt(v___x_1161_, v_val_1158_);
if (v___x_1162_ == 0)
{
lean_dec(v_val_1158_);
lean_dec_ref(v_out_1129_);
lean_dec_ref(v_lit_1127_);
v___y_1134_ = v_escape_1155_;
v___y_1135_ = v___y_1157_;
v___y_1136_ = v___y_1156_;
goto v___jp_1133_;
}
else
{
lean_object* v___x_1163_; uint8_t v___x_1164_; 
v___x_1163_ = lean_unsigned_to_nat(1114112u);
v___x_1164_ = lean_nat_dec_lt(v_val_1158_, v___x_1163_);
if (v___x_1164_ == 0)
{
lean_dec(v_val_1158_);
lean_dec_ref(v_out_1129_);
lean_dec_ref(v_lit_1127_);
v___y_1134_ = v_escape_1155_;
v___y_1135_ = v___y_1157_;
v___y_1136_ = v___y_1156_;
goto v___jp_1133_;
}
else
{
v___y_1146_ = v_val_1158_;
v___y_1147_ = v_escape_1155_;
v___y_1148_ = v___y_1157_;
v___y_1149_ = v___y_1156_;
goto v___jp_1145_;
}
}
}
else
{
v___y_1146_ = v_val_1158_;
v___y_1147_ = v_escape_1155_;
v___y_1148_ = v___y_1157_;
v___y_1149_ = v___y_1156_;
goto v___jp_1145_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___boxed(lean_object* v_lit_1230_, lean_object* v_i_1231_, lean_object* v_out_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore(v_lit_1230_, v_i_1231_, v_out_1232_, v_a_1233_, v_a_1234_);
lean_dec(v_a_1234_);
lean_dec_ref(v_a_1233_);
return v_res_1236_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__5(void){
_start:
{
lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1246_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__4));
v___x_1247_ = l_Lean_MessageData_ofFormat(v___x_1246_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString(lean_object* v_x_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_){
_start:
{
lean_object* v_a_1253_; lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1275_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__2));
v___x_1276_ = l_Lean_Syntax_isLit_x3f(v___x_1275_, v_x_1248_);
if (lean_obj_tag(v___x_1276_) == 1)
{
lean_object* v_val_1277_; 
v_val_1277_ = lean_ctor_get(v___x_1276_, 0);
lean_inc(v_val_1277_);
lean_dec_ref_known(v___x_1276_, 1);
v_a_1253_ = v_val_1277_;
goto v___jp_1252_;
}
else
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
lean_dec(v___x_1276_);
v___x_1278_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__5, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__5_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__5);
v___x_1279_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_1248_, v___x_1278_, v_a_1249_, v_a_1250_);
return v___x_1279_;
}
v___jp_1252_:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v_toCold_1257_; lean_object* v_currRecDepth_1258_; lean_object* v_ref_1259_; uint16_t v_optionFlags_1260_; uint8_t v_suppressElabErrors_1261_; uint8_t v_checkDeprecated_1262_; uint8_t v_isRecordingDeps_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v_ref_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1254_ = lean_unsigned_to_nat(0u);
v___x_1255_ = lean_string_utf8_byte_size(v_a_1253_);
lean_inc_ref_n(v_a_1253_, 2);
v___x_1256_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1256_, 0, v_a_1253_);
lean_ctor_set(v___x_1256_, 1, v___x_1254_);
lean_ctor_set(v___x_1256_, 2, v___x_1255_);
v_toCold_1257_ = lean_ctor_get(v_a_1249_, 0);
v_currRecDepth_1258_ = lean_ctor_get(v_a_1249_, 1);
v_ref_1259_ = lean_ctor_get(v_a_1249_, 2);
v_optionFlags_1260_ = lean_ctor_get_uint16(v_a_1249_, sizeof(void*)*3);
v_suppressElabErrors_1261_ = lean_ctor_get_uint8(v_a_1249_, sizeof(void*)*3 + 2);
v_checkDeprecated_1262_ = lean_ctor_get_uint8(v_a_1249_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1263_ = lean_ctor_get_uint8(v_a_1249_, sizeof(void*)*3 + 4);
v___x_1264_ = lean_unsigned_to_nat(1u);
v___x_1265_ = l_String_Slice_Pos_nextn(v___x_1256_, v___x_1254_, v___x_1264_);
lean_dec_ref_known(v___x_1256_, 3);
lean_inc(v___x_1265_);
v___x_1266_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1266_, 0, v_a_1253_);
lean_ctor_set(v___x_1266_, 1, v___x_1265_);
lean_ctor_set(v___x_1266_, 2, v___x_1255_);
v___x_1267_ = lean_nat_sub(v___x_1255_, v___x_1265_);
v___x_1268_ = l_String_Slice_Pos_prevn(v___x_1266_, v___x_1267_, v___x_1264_);
lean_dec_ref_known(v___x_1266_, 3);
v___x_1269_ = lean_nat_add(v___x_1265_, v___x_1268_);
lean_dec(v___x_1268_);
v___x_1270_ = lean_string_utf8_extract_fast(v_a_1253_, v___x_1265_, v___x_1269_);
lean_dec(v___x_1269_);
lean_dec(v___x_1265_);
lean_dec_ref(v_a_1253_);
v___x_1271_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__0));
v_ref_1272_ = l_Lean_replaceRef(v_x_1248_, v_ref_1259_);
lean_inc(v_currRecDepth_1258_);
lean_inc_ref(v_toCold_1257_);
v___x_1273_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1273_, 0, v_toCold_1257_);
lean_ctor_set(v___x_1273_, 1, v_currRecDepth_1258_);
lean_ctor_set(v___x_1273_, 2, v_ref_1272_);
lean_ctor_set_uint16(v___x_1273_, sizeof(void*)*3, v_optionFlags_1260_);
lean_ctor_set_uint8(v___x_1273_, sizeof(void*)*3 + 2, v_suppressElabErrors_1261_);
lean_ctor_set_uint8(v___x_1273_, sizeof(void*)*3 + 3, v_checkDeprecated_1262_);
lean_ctor_set_uint8(v___x_1273_, sizeof(void*)*3 + 4, v_isRecordingDeps_1263_);
v___x_1274_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore(v___x_1270_, v___x_1254_, v___x_1271_, v___x_1273_, v_a_1250_);
lean_dec_ref_known(v___x_1273_, 3);
return v___x_1274_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___boxed(lean_object* v_x_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString(v_x_1280_, v_a_1281_, v_a_1282_);
lean_dec(v_a_1282_);
lean_dec_ref(v_a_1281_);
lean_dec(v_x_1280_);
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_dropInitialNewline(lean_object* v_s_1285_){
_start:
{
uint32_t v___y_1287_; uint32_t v___y_1297_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1313_ = lean_unsigned_to_nat(0u);
v___x_1314_ = lean_string_utf8_byte_size(v_s_1285_);
lean_inc_ref(v_s_1285_);
v___x_1315_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1315_, 0, v_s_1285_);
lean_ctor_set(v___x_1315_, 1, v___x_1313_);
lean_ctor_set(v___x_1315_, 2, v___x_1314_);
v___x_1316_ = l_String_Slice_Pos_get_x3f(v___x_1315_, v___x_1313_);
lean_dec_ref_known(v___x_1315_, 3);
if (lean_obj_tag(v___x_1316_) == 0)
{
uint32_t v___x_1317_; 
v___x_1317_ = 65;
v___y_1297_ = v___x_1317_;
goto v___jp_1296_;
}
else
{
lean_object* v_val_1318_; uint32_t v___x_1319_; 
v_val_1318_ = lean_ctor_get(v___x_1316_, 0);
lean_inc(v_val_1318_);
lean_dec_ref_known(v___x_1316_, 1);
v___x_1319_ = lean_unbox_uint32(v_val_1318_);
lean_dec(v_val_1318_);
v___y_1297_ = v___x_1319_;
goto v___jp_1296_;
}
v___jp_1286_:
{
uint32_t v___x_1288_; uint8_t v___x_1289_; 
v___x_1288_ = 10;
v___x_1289_ = lean_uint32_dec_eq(v___y_1287_, v___x_1288_);
if (v___x_1289_ == 0)
{
return v_s_1285_;
}
else
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1290_ = lean_unsigned_to_nat(1u);
v___x_1291_ = lean_unsigned_to_nat(0u);
v___x_1292_ = lean_string_utf8_byte_size(v_s_1285_);
lean_inc_ref(v_s_1285_);
v___x_1293_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1293_, 0, v_s_1285_);
lean_ctor_set(v___x_1293_, 1, v___x_1291_);
lean_ctor_set(v___x_1293_, 2, v___x_1292_);
v___x_1294_ = l_String_Slice_Pos_nextn(v___x_1293_, v___x_1291_, v___x_1290_);
lean_dec_ref_known(v___x_1293_, 3);
v___x_1295_ = lean_string_utf8_extract_fast(v_s_1285_, v___x_1294_, v___x_1292_);
lean_dec(v___x_1294_);
lean_dec_ref(v_s_1285_);
return v___x_1295_;
}
}
v___jp_1296_:
{
uint32_t v___x_1298_; uint8_t v___x_1299_; 
v___x_1298_ = 13;
v___x_1299_ = lean_uint32_dec_eq(v___y_1297_, v___x_1298_);
if (v___x_1299_ == 0)
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1300_ = lean_unsigned_to_nat(0u);
v___x_1301_ = lean_string_utf8_byte_size(v_s_1285_);
lean_inc_ref(v_s_1285_);
v___x_1302_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1302_, 0, v_s_1285_);
lean_ctor_set(v___x_1302_, 1, v___x_1300_);
lean_ctor_set(v___x_1302_, 2, v___x_1301_);
v___x_1303_ = l_String_Slice_Pos_get_x3f(v___x_1302_, v___x_1300_);
lean_dec_ref_known(v___x_1302_, 3);
if (lean_obj_tag(v___x_1303_) == 0)
{
uint32_t v___x_1304_; 
v___x_1304_ = 65;
v___y_1287_ = v___x_1304_;
goto v___jp_1286_;
}
else
{
lean_object* v_val_1305_; uint32_t v___x_1306_; 
v_val_1305_ = lean_ctor_get(v___x_1303_, 0);
lean_inc(v_val_1305_);
lean_dec_ref_known(v___x_1303_, 1);
v___x_1306_ = lean_unbox_uint32(v_val_1305_);
lean_dec(v_val_1305_);
v___y_1287_ = v___x_1306_;
goto v___jp_1286_;
}
}
else
{
lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1307_ = lean_unsigned_to_nat(2u);
v___x_1308_ = lean_unsigned_to_nat(0u);
v___x_1309_ = lean_string_utf8_byte_size(v_s_1285_);
lean_inc_ref(v_s_1285_);
v___x_1310_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1310_, 0, v_s_1285_);
lean_ctor_set(v___x_1310_, 1, v___x_1308_);
lean_ctor_set(v___x_1310_, 2, v___x_1309_);
v___x_1311_ = l_String_Slice_Pos_nextn(v___x_1310_, v___x_1308_, v___x_1307_);
lean_dec_ref_known(v___x_1310_, 3);
v___x_1312_ = lean_string_utf8_extract_fast(v_s_1285_, v___x_1311_, v___x_1309_);
lean_dec(v___x_1311_);
lean_dec_ref(v_s_1285_);
return v___x_1312_;
}
}
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__4(void){
_start:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1328_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__3));
v___x_1329_ = l_Lean_MessageData_ofFormat(v___x_1328_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString(lean_object* v_x_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_){
_start:
{
lean_object* v_a_1335_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1348_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__1));
v___x_1349_ = l_Lean_Syntax_isLit_x3f(v___x_1348_, v_x_1330_);
if (lean_obj_tag(v___x_1349_) == 1)
{
lean_object* v_val_1350_; 
v_val_1350_ = lean_ctor_get(v___x_1349_, 0);
lean_inc(v_val_1350_);
lean_dec_ref_known(v___x_1349_, 1);
v_a_1335_ = v_val_1350_;
goto v___jp_1334_;
}
else
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
lean_dec(v___x_1349_);
v___x_1351_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__4, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__4_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__4);
v___x_1352_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_1330_, v___x_1351_, v_a_1331_, v_a_1332_);
return v___x_1352_;
}
v___jp_1334_:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; 
v___x_1336_ = lean_unsigned_to_nat(3u);
v___x_1337_ = lean_unsigned_to_nat(0u);
v___x_1338_ = lean_string_utf8_byte_size(v_a_1335_);
lean_inc_ref_n(v_a_1335_, 2);
v___x_1339_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1339_, 0, v_a_1335_);
lean_ctor_set(v___x_1339_, 1, v___x_1337_);
lean_ctor_set(v___x_1339_, 2, v___x_1338_);
v___x_1340_ = l_String_Slice_Pos_nextn(v___x_1339_, v___x_1337_, v___x_1336_);
lean_dec_ref_known(v___x_1339_, 3);
lean_inc(v___x_1340_);
v___x_1341_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1341_, 0, v_a_1335_);
lean_ctor_set(v___x_1341_, 1, v___x_1340_);
lean_ctor_set(v___x_1341_, 2, v___x_1338_);
v___x_1342_ = lean_nat_sub(v___x_1338_, v___x_1340_);
v___x_1343_ = l_String_Slice_Pos_prevn(v___x_1341_, v___x_1342_, v___x_1336_);
lean_dec_ref_known(v___x_1341_, 3);
v___x_1344_ = lean_nat_add(v___x_1340_, v___x_1343_);
lean_dec(v___x_1343_);
v___x_1345_ = lean_string_utf8_extract_fast(v_a_1335_, v___x_1340_, v___x_1344_);
lean_dec(v___x_1344_);
lean_dec(v___x_1340_);
lean_dec_ref(v_a_1335_);
v___x_1346_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_dropInitialNewline(v___x_1345_);
v___x_1347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1346_);
return v___x_1347_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___boxed(lean_object* v_x_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_){
_start:
{
lean_object* v_res_1357_; 
v_res_1357_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString(v_x_1353_, v_a_1354_, v_a_1355_);
lean_dec(v_a_1355_);
lean_dec_ref(v_a_1354_);
lean_dec(v_x_1353_);
return v_res_1357_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__4(void){
_start:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; 
v___x_1366_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__3));
v___x_1367_ = l_Lean_MessageData_ofFormat(v___x_1366_);
return v___x_1367_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString(lean_object* v_x_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_){
_start:
{
lean_object* v_a_1373_; lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1396_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__1));
v___x_1397_ = l_Lean_Syntax_isLit_x3f(v___x_1396_, v_x_1368_);
if (lean_obj_tag(v___x_1397_) == 1)
{
lean_object* v_val_1398_; 
v_val_1398_ = lean_ctor_get(v___x_1397_, 0);
lean_inc(v_val_1398_);
lean_dec_ref_known(v___x_1397_, 1);
v_a_1373_ = v_val_1398_;
goto v___jp_1372_;
}
else
{
lean_object* v___x_1399_; lean_object* v___x_1400_; 
lean_dec(v___x_1397_);
v___x_1399_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__4, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__4_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__4);
v___x_1400_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_1368_, v___x_1399_, v_a_1369_, v_a_1370_);
return v___x_1400_;
}
v___jp_1372_:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v_toCold_1377_; lean_object* v_currRecDepth_1378_; lean_object* v_ref_1379_; uint16_t v_optionFlags_1380_; uint8_t v_suppressElabErrors_1381_; uint8_t v_checkDeprecated_1382_; uint8_t v_isRecordingDeps_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v_ref_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1374_ = lean_unsigned_to_nat(0u);
v___x_1375_ = lean_string_utf8_byte_size(v_a_1373_);
lean_inc_ref_n(v_a_1373_, 2);
v___x_1376_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1376_, 0, v_a_1373_);
lean_ctor_set(v___x_1376_, 1, v___x_1374_);
lean_ctor_set(v___x_1376_, 2, v___x_1375_);
v_toCold_1377_ = lean_ctor_get(v_a_1369_, 0);
v_currRecDepth_1378_ = lean_ctor_get(v_a_1369_, 1);
v_ref_1379_ = lean_ctor_get(v_a_1369_, 2);
v_optionFlags_1380_ = lean_ctor_get_uint16(v_a_1369_, sizeof(void*)*3);
v_suppressElabErrors_1381_ = lean_ctor_get_uint8(v_a_1369_, sizeof(void*)*3 + 2);
v_checkDeprecated_1382_ = lean_ctor_get_uint8(v_a_1369_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1383_ = lean_ctor_get_uint8(v_a_1369_, sizeof(void*)*3 + 4);
v___x_1384_ = lean_unsigned_to_nat(3u);
v___x_1385_ = l_String_Slice_Pos_nextn(v___x_1376_, v___x_1374_, v___x_1384_);
lean_dec_ref_known(v___x_1376_, 3);
lean_inc(v___x_1385_);
v___x_1386_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1386_, 0, v_a_1373_);
lean_ctor_set(v___x_1386_, 1, v___x_1385_);
lean_ctor_set(v___x_1386_, 2, v___x_1375_);
v___x_1387_ = lean_nat_sub(v___x_1375_, v___x_1385_);
v___x_1388_ = l_String_Slice_Pos_prevn(v___x_1386_, v___x_1387_, v___x_1384_);
lean_dec_ref_known(v___x_1386_, 3);
v___x_1389_ = lean_nat_add(v___x_1385_, v___x_1388_);
lean_dec(v___x_1388_);
v___x_1390_ = lean_string_utf8_extract_fast(v_a_1373_, v___x_1385_, v___x_1389_);
lean_dec(v___x_1389_);
lean_dec(v___x_1385_);
lean_dec_ref(v_a_1373_);
v___x_1391_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_dropInitialNewline(v___x_1390_);
v___x_1392_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__0));
v_ref_1393_ = l_Lean_replaceRef(v_x_1368_, v_ref_1379_);
lean_inc(v_currRecDepth_1378_);
lean_inc_ref(v_toCold_1377_);
v___x_1394_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1394_, 0, v_toCold_1377_);
lean_ctor_set(v___x_1394_, 1, v_currRecDepth_1378_);
lean_ctor_set(v___x_1394_, 2, v_ref_1393_);
lean_ctor_set_uint16(v___x_1394_, sizeof(void*)*3, v_optionFlags_1380_);
lean_ctor_set_uint8(v___x_1394_, sizeof(void*)*3 + 2, v_suppressElabErrors_1381_);
lean_ctor_set_uint8(v___x_1394_, sizeof(void*)*3 + 3, v_checkDeprecated_1382_);
lean_ctor_set_uint8(v___x_1394_, sizeof(void*)*3 + 4, v_isRecordingDeps_1383_);
v___x_1395_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore(v___x_1391_, v___x_1374_, v___x_1392_, v___x_1394_, v_a_1370_);
lean_dec_ref_known(v___x_1394_, 3);
return v___x_1395_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___boxed(lean_object* v_x_1401_, lean_object* v_a_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString(v_x_1401_, v_a_1402_, v_a_1403_);
lean_dec(v_a_1403_);
lean_dec_ref(v_a_1402_);
lean_dec(v_x_1401_);
return v_res_1405_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__3(void){
_start:
{
lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1412_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__2));
v___x_1413_ = l_Lean_stringToMessageData(v___x_1412_);
return v___x_1413_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString(lean_object* v_x_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_){
_start:
{
lean_object* v___x_1418_; uint8_t v___x_1419_; 
v___x_1418_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__1));
lean_inc(v_x_1414_);
v___x_1419_ = l_Lean_Syntax_isOfKind(v_x_1414_, v___x_1418_);
if (v___x_1419_ == 0)
{
lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1420_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__3, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__3_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__3);
v___x_1421_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_1414_, v___x_1420_, v_a_1415_, v_a_1416_);
lean_dec(v_x_1414_);
return v___x_1421_;
}
else
{
lean_object* v___x_1422_; lean_object* v_x_1423_; lean_object* v___x_1424_; uint8_t v___x_1425_; 
v___x_1422_ = lean_unsigned_to_nat(0u);
v_x_1423_ = l_Lean_Syntax_getArg(v_x_1414_, v___x_1422_);
v___x_1424_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__1));
lean_inc(v_x_1423_);
v___x_1425_ = l_Lean_Syntax_isOfKind(v_x_1423_, v___x_1424_);
if (v___x_1425_ == 0)
{
lean_object* v___x_1426_; uint8_t v___x_1427_; 
v___x_1426_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__2));
lean_inc(v_x_1423_);
v___x_1427_ = l_Lean_Syntax_isOfKind(v_x_1423_, v___x_1426_);
if (v___x_1427_ == 0)
{
lean_object* v___x_1428_; uint8_t v___x_1429_; 
v___x_1428_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString___closed__1));
lean_inc(v_x_1423_);
v___x_1429_ = l_Lean_Syntax_isOfKind(v_x_1423_, v___x_1428_);
if (v___x_1429_ == 0)
{
lean_object* v___x_1430_; uint8_t v___x_1431_; 
v___x_1430_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString___closed__1));
lean_inc(v_x_1423_);
v___x_1431_ = l_Lean_Syntax_isOfKind(v_x_1423_, v___x_1430_);
if (v___x_1431_ == 0)
{
lean_object* v___x_1432_; lean_object* v___x_1433_; 
lean_dec(v_x_1423_);
v___x_1432_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__3, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__3_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__3);
v___x_1433_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_1414_, v___x_1432_, v_a_1415_, v_a_1416_);
lean_dec(v_x_1414_);
return v___x_1433_;
}
else
{
lean_object* v___x_1434_; 
lean_dec(v_x_1414_);
v___x_1434_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlBasicString(v_x_1423_, v_a_1415_, v_a_1416_);
lean_dec(v_x_1423_);
return v___x_1434_;
}
}
else
{
lean_object* v___x_1435_; 
lean_dec(v_x_1414_);
v___x_1435_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabMlLiteralString(v_x_1423_, v_a_1415_, v_a_1416_);
lean_dec(v_x_1423_);
return v___x_1435_;
}
}
else
{
lean_object* v___x_1436_; 
lean_dec(v_x_1414_);
v___x_1436_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString(v_x_1423_, v_a_1415_, v_a_1416_);
lean_dec(v_x_1423_);
return v___x_1436_;
}
}
else
{
lean_object* v___x_1437_; 
lean_dec(v_x_1414_);
v___x_1437_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString(v_x_1423_, v_a_1415_, v_a_1416_);
lean_dec(v_x_1423_);
return v___x_1437_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___boxed(lean_object* v_x_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_){
_start:
{
lean_object* v_res_1442_; 
v_res_1442_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString(v_x_1438_, v_a_1439_, v_a_1440_);
lean_dec(v_a_1440_);
lean_dec_ref(v_a_1439_);
return v_res_1442_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__4(void){
_start:
{
lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1451_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__3));
v___x_1452_ = l_Lean_MessageData_ofFormat(v___x_1451_);
return v___x_1452_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey(lean_object* v_x_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_){
_start:
{
lean_object* v___x_1457_; lean_object* v_toApplicative_1458_; lean_object* v_toFunctor_1459_; lean_object* v_toSeq_1460_; lean_object* v_toSeqLeft_1461_; lean_object* v_toSeqRight_1462_; lean_object* v___x_1463_; lean_object* v___f_1464_; lean_object* v___f_1465_; lean_object* v___f_1466_; lean_object* v___f_1467_; lean_object* v___x_1468_; lean_object* v___f_1469_; lean_object* v___f_1470_; lean_object* v___f_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; 
v___x_1457_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__1, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__1_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__1);
v_toApplicative_1458_ = lean_ctor_get(v___x_1457_, 0);
v_toFunctor_1459_ = lean_ctor_get(v_toApplicative_1458_, 0);
v_toSeq_1460_ = lean_ctor_get(v_toApplicative_1458_, 2);
v_toSeqLeft_1461_ = lean_ctor_get(v_toApplicative_1458_, 3);
v_toSeqRight_1462_ = lean_ctor_get(v_toApplicative_1458_, 4);
v___x_1463_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__1));
v___f_1464_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__2));
v___f_1465_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLit___closed__3));
lean_inc_ref_n(v_toFunctor_1459_, 2);
v___f_1466_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1466_, 0, v_toFunctor_1459_);
v___f_1467_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1467_, 0, v_toFunctor_1459_);
v___x_1468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1468_, 0, v___f_1466_);
lean_ctor_set(v___x_1468_, 1, v___f_1467_);
lean_inc(v_toSeqRight_1462_);
v___f_1469_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1469_, 0, v_toSeqRight_1462_);
lean_inc(v_toSeqLeft_1461_);
v___f_1470_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1470_, 0, v_toSeqLeft_1461_);
lean_inc(v_toSeq_1460_);
v___f_1471_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1471_, 0, v_toSeq_1460_);
v___x_1472_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1472_, 0, v___x_1468_);
lean_ctor_set(v___x_1472_, 1, v___f_1464_);
lean_ctor_set(v___x_1472_, 2, v___f_1471_);
lean_ctor_set(v___x_1472_, 3, v___f_1470_);
lean_ctor_set(v___x_1472_, 4, v___f_1469_);
v___x_1473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1473_, 0, v___x_1472_);
lean_ctor_set(v___x_1473_, 1, v___f_1465_);
v___x_1474_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___x_1475_ = l_Lean_Core_instMonadRefCoreM;
v___x_1476_ = l_Lean_Core_instAddMessageContextCoreM;
lean_inc_ref(v___x_1473_);
v___x_1477_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_1476_, v___x_1473_);
v___x_1478_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1474_);
lean_ctor_set(v___x_1478_, 1, v___x_1475_);
lean_ctor_set(v___x_1478_, 2, v___x_1477_);
v___x_1479_ = l_Lean_Syntax_isLit_x3f(v___x_1463_, v_x_1453_);
if (lean_obj_tag(v___x_1479_) == 1)
{
lean_object* v_val_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1487_; 
lean_dec_ref_known(v___x_1478_, 3);
lean_dec_ref_known(v___x_1473_, 2);
lean_dec(v_x_1453_);
v_val_1480_ = lean_ctor_get(v___x_1479_, 0);
v_isSharedCheck_1487_ = !lean_is_exclusive(v___x_1479_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1482_ = v___x_1479_;
v_isShared_1483_ = v_isSharedCheck_1487_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_val_1480_);
lean_dec(v___x_1479_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1487_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v___x_1485_; 
if (v_isShared_1483_ == 0)
{
lean_ctor_set_tag(v___x_1482_, 0);
v___x_1485_ = v___x_1482_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v_val_1480_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
}
else
{
lean_object* v___x_1488_; lean_object* v___x_40__overap_1489_; lean_object* v___x_1490_; 
lean_dec(v___x_1479_);
v___x_1488_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__4, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__4_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__4);
v___x_40__overap_1489_ = l_Lean_throwErrorAt___redArg(v___x_1473_, v___x_1478_, v_x_1453_, v___x_1488_);
lean_inc(v_a_1455_);
lean_inc_ref(v_a_1454_);
v___x_1490_ = lean_apply_3(v___x_40__overap_1489_, v_a_1454_, v_a_1455_, lean_box(0));
return v___x_1490_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___boxed(lean_object* v_x_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_){
_start:
{
lean_object* v_res_1495_; 
v_res_1495_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey(v_x_1491_, v_a_1492_, v_a_1493_);
lean_dec(v_a_1493_);
lean_dec_ref(v_a_1492_);
return v_res_1495_;
}
}
static lean_object* _init_l_Lake_Toml_elabSimpleKey___closed__3(void){
_start:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1502_ = ((lean_object*)(l_Lake_Toml_elabSimpleKey___closed__2));
v___x_1503_ = l_Lean_stringToMessageData(v___x_1502_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_elabSimpleKey(lean_object* v_x_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_){
_start:
{
lean_object* v___x_1508_; uint8_t v___x_1509_; 
v___x_1508_ = ((lean_object*)(l_Lake_Toml_elabSimpleKey___closed__1));
lean_inc(v_x_1504_);
v___x_1509_ = l_Lean_Syntax_isOfKind(v_x_1504_, v___x_1508_);
if (v___x_1509_ == 0)
{
lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1510_ = lean_obj_once(&l_Lake_Toml_elabSimpleKey___closed__3, &l_Lake_Toml_elabSimpleKey___closed__3_once, _init_l_Lake_Toml_elabSimpleKey___closed__3);
v___x_1511_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_1504_, v___x_1510_, v_a_1505_, v_a_1506_);
lean_dec(v_x_1504_);
return v___x_1511_;
}
else
{
lean_object* v___x_1512_; lean_object* v_x_1513_; lean_object* v___x_1514_; uint8_t v___x_1515_; 
v___x_1512_ = lean_unsigned_to_nat(0u);
v_x_1513_ = l_Lean_Syntax_getArg(v_x_1504_, v___x_1512_);
v___x_1514_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__1));
lean_inc(v_x_1513_);
v___x_1515_ = l_Lean_Syntax_isOfKind(v_x_1513_, v___x_1514_);
if (v___x_1515_ == 0)
{
lean_object* v___x_1516_; uint8_t v___x_1517_; 
v___x_1516_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString___closed__1));
lean_inc(v_x_1513_);
v___x_1517_ = l_Lean_Syntax_isOfKind(v_x_1513_, v___x_1516_);
if (v___x_1517_ == 0)
{
lean_object* v___x_1518_; uint8_t v___x_1519_; 
v___x_1518_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString___closed__2));
lean_inc(v_x_1513_);
v___x_1519_ = l_Lean_Syntax_isOfKind(v_x_1513_, v___x_1518_);
if (v___x_1519_ == 0)
{
lean_object* v___x_1520_; lean_object* v___x_1521_; 
lean_dec(v_x_1513_);
v___x_1520_ = lean_obj_once(&l_Lake_Toml_elabSimpleKey___closed__3, &l_Lake_Toml_elabSimpleKey___closed__3_once, _init_l_Lake_Toml_elabSimpleKey___closed__3);
v___x_1521_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_1504_, v___x_1520_, v_a_1505_, v_a_1506_);
lean_dec(v_x_1504_);
return v___x_1521_;
}
else
{
lean_object* v___x_1522_; 
lean_dec(v_x_1504_);
v___x_1522_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicString(v_x_1513_, v_a_1505_, v_a_1506_);
lean_dec(v_x_1513_);
return v___x_1522_;
}
}
else
{
lean_object* v___x_1523_; 
lean_dec(v_x_1504_);
v___x_1523_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabLiteralString(v_x_1513_, v_a_1505_, v_a_1506_);
lean_dec(v_x_1513_);
return v___x_1523_;
}
}
else
{
lean_object* v___x_1524_; 
lean_dec(v_x_1504_);
v___x_1524_ = l_Lean_Syntax_isLit_x3f(v___x_1514_, v_x_1513_);
if (lean_obj_tag(v___x_1524_) == 1)
{
lean_object* v_val_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1532_; 
lean_dec(v_x_1513_);
v_val_1525_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1527_ = v___x_1524_;
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_val_1525_);
lean_dec(v___x_1524_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1530_; 
if (v_isShared_1528_ == 0)
{
lean_ctor_set_tag(v___x_1527_, 0);
v___x_1530_ = v___x_1527_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_val_1525_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
return v___x_1530_;
}
}
}
else
{
lean_object* v___x_1533_; lean_object* v___x_1534_; 
lean_dec(v___x_1524_);
v___x_1533_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__4, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__4_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabUnquotedKey___closed__4);
v___x_1534_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_1513_, v___x_1533_, v_a_1505_, v_a_1506_);
lean_dec(v_x_1513_);
return v___x_1534_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_elabSimpleKey___boxed(lean_object* v_x_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = l_Lake_Toml_elabSimpleKey(v_x_1535_, v_a_1536_, v_a_1537_);
lean_dec(v_a_1537_);
lean_dec_ref(v_a_1536_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray_spec__0___redArg(lean_object* v_elabVal_1540_, size_t v_sz_1541_, size_t v_i_1542_, lean_object* v_bs_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_){
_start:
{
uint8_t v___x_1547_; 
v___x_1547_ = lean_usize_dec_lt(v_i_1542_, v_sz_1541_);
if (v___x_1547_ == 0)
{
lean_object* v___x_1548_; 
lean_dec_ref(v_elabVal_1540_);
v___x_1548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1548_, 0, v_bs_1543_);
return v___x_1548_;
}
else
{
lean_object* v_v_1549_; lean_object* v___x_1550_; lean_object* v_bs_x27_1551_; lean_object* v___x_1552_; 
v_v_1549_ = lean_array_uget(v_bs_1543_, v_i_1542_);
v___x_1550_ = lean_unsigned_to_nat(0u);
v_bs_x27_1551_ = lean_array_uset(v_bs_1543_, v_i_1542_, v___x_1550_);
lean_inc_ref(v_elabVal_1540_);
lean_inc(v___y_1545_);
lean_inc_ref(v___y_1544_);
v___x_1552_ = lean_apply_4(v_elabVal_1540_, v_v_1549_, v___y_1544_, v___y_1545_, lean_box(0));
if (lean_obj_tag(v___x_1552_) == 0)
{
lean_object* v_a_1553_; size_t v___x_1554_; size_t v___x_1555_; lean_object* v___x_1556_; 
v_a_1553_ = lean_ctor_get(v___x_1552_, 0);
lean_inc(v_a_1553_);
lean_dec_ref_known(v___x_1552_, 1);
v___x_1554_ = ((size_t)1ULL);
v___x_1555_ = lean_usize_add(v_i_1542_, v___x_1554_);
v___x_1556_ = lean_array_uset(v_bs_x27_1551_, v_i_1542_, v_a_1553_);
v_i_1542_ = v___x_1555_;
v_bs_1543_ = v___x_1556_;
goto _start;
}
else
{
lean_object* v_a_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1565_; 
lean_dec_ref(v_bs_x27_1551_);
lean_dec_ref(v_elabVal_1540_);
v_a_1558_ = lean_ctor_get(v___x_1552_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1552_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1560_ = v___x_1552_;
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_a_1558_);
lean_dec(v___x_1552_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1563_; 
if (v_isShared_1561_ == 0)
{
v___x_1563_ = v___x_1560_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_a_1558_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray_spec__0___redArg___boxed(lean_object* v_elabVal_1566_, lean_object* v_sz_1567_, lean_object* v_i_1568_, lean_object* v_bs_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_){
_start:
{
size_t v_sz_boxed_1573_; size_t v_i_boxed_1574_; lean_object* v_res_1575_; 
v_sz_boxed_1573_ = lean_unbox_usize(v_sz_1567_);
lean_dec(v_sz_1567_);
v_i_boxed_1574_ = lean_unbox_usize(v_i_1568_);
lean_dec(v_i_1568_);
v_res_1575_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray_spec__0___redArg(v_elabVal_1566_, v_sz_boxed_1573_, v_i_boxed_1574_, v_bs_1569_, v___y_1570_, v___y_1571_);
lean_dec(v___y_1571_);
lean_dec_ref(v___y_1570_);
return v_res_1575_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__3(void){
_start:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1582_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__2));
v___x_1583_ = l_Lean_stringToMessageData(v___x_1582_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg(lean_object* v_x_1584_, lean_object* v_elabVal_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_){
_start:
{
lean_object* v___x_1589_; uint8_t v___x_1590_; 
v___x_1589_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__1));
lean_inc(v_x_1584_);
v___x_1590_ = l_Lean_Syntax_isOfKind(v_x_1584_, v___x_1589_);
if (v___x_1590_ == 0)
{
lean_object* v___x_1591_; lean_object* v___x_1592_; 
lean_dec_ref(v_elabVal_1585_);
v___x_1591_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__3, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__3_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__3);
v___x_1592_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_1584_, v___x_1591_, v_a_1586_, v_a_1587_);
lean_dec(v_x_1584_);
return v___x_1592_;
}
else
{
lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v_xs_1595_; lean_object* v___x_1596_; size_t v_sz_1597_; size_t v___x_1598_; lean_object* v___x_1599_; 
v___x_1593_ = lean_unsigned_to_nat(1u);
v___x_1594_ = l_Lean_Syntax_getArg(v_x_1584_, v___x_1593_);
lean_dec(v_x_1584_);
v_xs_1595_ = l_Lean_Syntax_getArgs(v___x_1594_);
lean_dec(v___x_1594_);
v___x_1596_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_xs_1595_);
lean_dec_ref(v_xs_1595_);
v_sz_1597_ = lean_array_size(v___x_1596_);
v___x_1598_ = ((size_t)0ULL);
v___x_1599_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray_spec__0___redArg(v_elabVal_1585_, v_sz_1597_, v___x_1598_, v___x_1596_, v_a_1586_, v_a_1587_);
return v___x_1599_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___boxed(lean_object* v_x_1600_, lean_object* v_elabVal_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_){
_start:
{
lean_object* v_res_1605_; 
v_res_1605_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg(v_x_1600_, v_elabVal_1601_, v_a_1602_, v_a_1603_);
lean_dec(v_a_1603_);
lean_dec_ref(v_a_1602_);
return v_res_1605_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray(lean_object* v_00_u03b1_1606_, lean_object* v_x_1607_, lean_object* v_elabVal_1608_, lean_object* v_a_1609_, lean_object* v_a_1610_){
_start:
{
lean_object* v___x_1612_; 
v___x_1612_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg(v_x_1607_, v_elabVal_1608_, v_a_1609_, v_a_1610_);
return v___x_1612_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___boxed(lean_object* v_00_u03b1_1613_, lean_object* v_x_1614_, lean_object* v_elabVal_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray(v_00_u03b1_1613_, v_x_1614_, v_elabVal_1615_, v_a_1616_, v_a_1617_);
lean_dec(v_a_1617_);
lean_dec_ref(v_a_1616_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray_spec__0(lean_object* v_00_u03b1_1620_, lean_object* v_elabVal_1621_, size_t v_sz_1622_, size_t v_i_1623_, lean_object* v_bs_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_){
_start:
{
lean_object* v___x_1628_; 
v___x_1628_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray_spec__0___redArg(v_elabVal_1621_, v_sz_1622_, v_i_1623_, v_bs_1624_, v___y_1625_, v___y_1626_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray_spec__0___boxed(lean_object* v_00_u03b1_1629_, lean_object* v_elabVal_1630_, lean_object* v_sz_1631_, lean_object* v_i_1632_, lean_object* v_bs_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_){
_start:
{
size_t v_sz_boxed_1637_; size_t v_i_boxed_1638_; lean_object* v_res_1639_; 
v_sz_boxed_1637_ = lean_unbox_usize(v_sz_1631_);
lean_dec(v_sz_1631_);
v_i_boxed_1638_ = lean_unbox_usize(v_i_1632_);
lean_dec(v_i_1632_);
v_res_1639_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray_spec__0(v_00_u03b1_1629_, v_elabVal_1630_, v_sz_boxed_1637_, v_i_boxed_1638_, v_bs_1633_, v___y_1634_, v___y_1635_);
lean_dec(v___y_1635_);
lean_dec_ref(v___y_1634_);
return v_res_1639_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__1(size_t v_sz_1640_, size_t v_i_1641_, lean_object* v_bs_1642_){
_start:
{
uint8_t v___x_1643_; 
v___x_1643_ = lean_usize_dec_lt(v_i_1641_, v_sz_1640_);
if (v___x_1643_ == 0)
{
lean_object* v___x_1644_; 
v___x_1644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1644_, 0, v_bs_1642_);
return v___x_1644_;
}
else
{
lean_object* v_v_1645_; lean_object* v___x_1646_; lean_object* v_bs_x27_1647_; size_t v___x_1648_; size_t v___x_1649_; lean_object* v___x_1650_; 
v_v_1645_ = lean_array_uget(v_bs_1642_, v_i_1641_);
v___x_1646_ = lean_unsigned_to_nat(0u);
v_bs_x27_1647_ = lean_array_uset(v_bs_1642_, v_i_1641_, v___x_1646_);
v___x_1648_ = ((size_t)1ULL);
v___x_1649_ = lean_usize_add(v_i_1641_, v___x_1648_);
v___x_1650_ = lean_array_uset(v_bs_x27_1647_, v_i_1641_, v_v_1645_);
v_i_1641_ = v___x_1649_;
v_bs_1642_ = v___x_1650_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__1___boxed(lean_object* v_sz_1652_, lean_object* v_i_1653_, lean_object* v_bs_1654_){
_start:
{
size_t v_sz_boxed_1655_; size_t v_i_boxed_1656_; lean_object* v_res_1657_; 
v_sz_boxed_1655_ = lean_unbox_usize(v_sz_1652_);
lean_dec(v_sz_1652_);
v_i_boxed_1656_ = lean_unbox_usize(v_i_1653_);
lean_dec(v_i_1653_);
v_res_1657_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__1(v_sz_boxed_1655_, v_i_boxed_1656_, v_bs_1654_);
return v_res_1657_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0_spec__0___redArg(lean_object* v_msg_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_){
_start:
{
lean_object* v_ref_1662_; lean_object* v___x_1663_; lean_object* v_a_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1672_; 
v_ref_1662_ = lean_ctor_get(v___y_1659_, 2);
v___x_1663_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0_spec__0_spec__1(v_msg_1658_, v___y_1659_, v___y_1660_);
v_a_1664_ = lean_ctor_get(v___x_1663_, 0);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___x_1663_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1666_ = v___x_1663_;
v_isShared_1667_ = v_isSharedCheck_1672_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_a_1664_);
lean_dec(v___x_1663_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1672_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1668_; lean_object* v___x_1670_; 
lean_inc(v_ref_1662_);
v___x_1668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1668_, 0, v_ref_1662_);
lean_ctor_set(v___x_1668_, 1, v_a_1664_);
if (v_isShared_1667_ == 0)
{
lean_ctor_set_tag(v___x_1666_, 1);
lean_ctor_set(v___x_1666_, 0, v___x_1668_);
v___x_1670_ = v___x_1666_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v___x_1668_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0_spec__0___redArg___boxed(lean_object* v_msg_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
lean_object* v_res_1677_; 
v_res_1677_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0_spec__0___redArg(v_msg_1673_, v___y_1674_, v___y_1675_);
lean_dec(v___y_1675_);
lean_dec_ref(v___y_1674_);
return v_res_1677_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0___redArg(lean_object* v_ref_1678_, lean_object* v_msg_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
lean_object* v_toCold_1684_; lean_object* v_currRecDepth_1685_; lean_object* v_ref_1686_; uint16_t v_optionFlags_1687_; uint8_t v_suppressElabErrors_1688_; uint8_t v_checkDeprecated_1689_; uint8_t v_isRecordingDeps_1690_; lean_object* v_ref_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; 
v_toCold_1684_ = lean_ctor_get(v___y_1681_, 0);
v_currRecDepth_1685_ = lean_ctor_get(v___y_1681_, 1);
v_ref_1686_ = lean_ctor_get(v___y_1681_, 2);
v_optionFlags_1687_ = lean_ctor_get_uint16(v___y_1681_, sizeof(void*)*3);
v_suppressElabErrors_1688_ = lean_ctor_get_uint8(v___y_1681_, sizeof(void*)*3 + 2);
v_checkDeprecated_1689_ = lean_ctor_get_uint8(v___y_1681_, sizeof(void*)*3 + 3);
v_isRecordingDeps_1690_ = lean_ctor_get_uint8(v___y_1681_, sizeof(void*)*3 + 4);
v_ref_1691_ = l_Lean_replaceRef(v_ref_1678_, v_ref_1686_);
lean_inc(v_currRecDepth_1685_);
lean_inc_ref(v_toCold_1684_);
v___x_1692_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1692_, 0, v_toCold_1684_);
lean_ctor_set(v___x_1692_, 1, v_currRecDepth_1685_);
lean_ctor_set(v___x_1692_, 2, v_ref_1691_);
lean_ctor_set_uint16(v___x_1692_, sizeof(void*)*3, v_optionFlags_1687_);
lean_ctor_set_uint8(v___x_1692_, sizeof(void*)*3 + 2, v_suppressElabErrors_1688_);
lean_ctor_set_uint8(v___x_1692_, sizeof(void*)*3 + 3, v_checkDeprecated_1689_);
lean_ctor_set_uint8(v___x_1692_, sizeof(void*)*3 + 4, v_isRecordingDeps_1690_);
v___x_1693_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0_spec__0___redArg(v_msg_1679_, v___x_1692_, v___y_1682_);
lean_dec_ref_known(v___x_1692_, 3);
return v___x_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0___redArg___boxed(lean_object* v_ref_1694_, lean_object* v_msg_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_){
_start:
{
lean_object* v_res_1700_; 
v_res_1700_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0___redArg(v_ref_1694_, v_msg_1695_, v___y_1696_, v___y_1697_, v___y_1698_);
lean_dec(v___y_1698_);
lean_dec_ref(v___y_1697_);
lean_dec_ref(v___y_1696_);
lean_dec(v_ref_1694_);
return v_res_1700_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__2(void){
_start:
{
lean_object* v___x_1703_; lean_object* v___x_1704_; 
v___x_1703_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__1));
v___x_1704_ = l_Lean_stringToMessageData(v___x_1703_);
return v___x_1704_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2(lean_object* v_t_1705_, lean_object* v_as_1706_, size_t v_i_1707_, size_t v_stop_1708_, lean_object* v_b_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_){
_start:
{
lean_object* v_fst_1715_; lean_object* v_snd_1716_; uint8_t v___x_1720_; 
v___x_1720_ = lean_usize_dec_eq(v_i_1707_, v_stop_1708_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1721_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__0));
v___x_1722_ = lean_array_uget_borrowed(v_as_1706_, v_i_1707_);
lean_inc(v___x_1722_);
v___x_1723_ = l_Lake_Toml_elabSimpleKey(v___x_1722_, v___y_1711_, v___y_1712_);
if (lean_obj_tag(v___x_1723_) == 0)
{
lean_object* v_a_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v_a_1724_ = lean_ctor_get(v___x_1723_, 0);
lean_inc(v_a_1724_);
lean_dec_ref_known(v___x_1723_, 1);
v___x_1725_ = l_Lean_Name_str___override(v_b_1709_, v_a_1724_);
lean_inc_ref(v_t_1705_);
lean_inc(v___x_1725_);
v___x_1726_ = l_Lake_Toml_RBDict_findEntry_x3f___redArg(v___x_1721_, v___x_1725_, v_t_1705_);
if (lean_obj_tag(v___x_1726_) == 0)
{
lean_object* v___x_1727_; lean_object* v___x_1728_; 
v___x_1727_ = lean_box(0);
lean_inc(v___x_1725_);
v___x_1728_ = l_Lake_Toml_RBDict_push___redArg(v___x_1721_, v___x_1725_, v___x_1727_, v___y_1710_);
v_fst_1715_ = v___x_1725_;
v_snd_1716_ = v___x_1728_;
goto v___jp_1714_;
}
else
{
lean_object* v_val_1729_; lean_object* v_snd_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1752_; 
v_val_1729_ = lean_ctor_get(v___x_1726_, 0);
lean_inc(v_val_1729_);
lean_dec_ref_known(v___x_1726_, 1);
v_snd_1730_ = lean_ctor_get(v_val_1729_, 1);
v_isSharedCheck_1752_ = !lean_is_exclusive(v_val_1729_);
if (v_isSharedCheck_1752_ == 0)
{
lean_object* v_unused_1753_; 
v_unused_1753_ = lean_ctor_get(v_val_1729_, 0);
lean_dec(v_unused_1753_);
v___x_1732_ = v_val_1729_;
v_isShared_1733_ = v_isSharedCheck_1752_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_snd_1730_);
lean_dec(v_val_1729_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1752_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
if (lean_obj_tag(v_snd_1730_) == 0)
{
lean_del_object(v___x_1732_);
v_fst_1715_ = v___x_1725_;
v_snd_1716_ = v___y_1710_;
goto v___jp_1714_;
}
else
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1737_; 
lean_dec_ref_known(v_snd_1730_, 1);
v___x_1734_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__2);
lean_inc(v___x_1725_);
v___x_1735_ = l_Lean_MessageData_ofName(v___x_1725_);
if (v_isShared_1733_ == 0)
{
lean_ctor_set_tag(v___x_1732_, 7);
lean_ctor_set(v___x_1732_, 1, v___x_1735_);
lean_ctor_set(v___x_1732_, 0, v___x_1734_);
v___x_1737_ = v___x_1732_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v___x_1734_);
lean_ctor_set(v_reuseFailAlloc_1751_, 1, v___x_1735_);
v___x_1737_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1738_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__3, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__3_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__3);
v___x_1739_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1737_);
lean_ctor_set(v___x_1739_, 1, v___x_1738_);
v___x_1740_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0___redArg(v___x_1722_, v___x_1739_, v___y_1710_, v___y_1711_, v___y_1712_);
lean_dec_ref(v___y_1710_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v_a_1741_; lean_object* v_snd_1742_; 
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
lean_inc(v_a_1741_);
lean_dec_ref_known(v___x_1740_, 1);
v_snd_1742_ = lean_ctor_get(v_a_1741_, 1);
lean_inc(v_snd_1742_);
lean_dec(v_a_1741_);
v_fst_1715_ = v___x_1725_;
v_snd_1716_ = v_snd_1742_;
goto v___jp_1714_;
}
else
{
lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1750_; 
lean_dec(v___x_1725_);
lean_dec_ref(v_t_1705_);
v_a_1743_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1745_ = v___x_1740_;
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_dec(v___x_1740_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1748_; 
if (v_isShared_1746_ == 0)
{
v___x_1748_ = v___x_1745_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_a_1743_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
return v___x_1748_;
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
lean_object* v_a_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1761_; 
lean_dec_ref(v___y_1710_);
lean_dec(v_b_1709_);
lean_dec_ref(v_t_1705_);
v_a_1754_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1756_ = v___x_1723_;
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v___x_1723_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v___x_1759_; 
if (v_isShared_1757_ == 0)
{
v___x_1759_ = v___x_1756_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v_a_1754_);
v___x_1759_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
return v___x_1759_;
}
}
}
}
else
{
lean_object* v___x_1762_; lean_object* v___x_1763_; 
lean_dec_ref(v_t_1705_);
v___x_1762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1762_, 0, v_b_1709_);
lean_ctor_set(v___x_1762_, 1, v___y_1710_);
v___x_1763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1763_, 0, v___x_1762_);
return v___x_1763_;
}
v___jp_1714_:
{
size_t v___x_1717_; size_t v___x_1718_; 
v___x_1717_ = ((size_t)1ULL);
v___x_1718_ = lean_usize_add(v_i_1707_, v___x_1717_);
v_i_1707_ = v___x_1718_;
v_b_1709_ = v_fst_1715_;
v___y_1710_ = v_snd_1716_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___boxed(lean_object* v_t_1764_, lean_object* v_as_1765_, lean_object* v_i_1766_, lean_object* v_stop_1767_, lean_object* v_b_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_){
_start:
{
size_t v_i_boxed_1773_; size_t v_stop_boxed_1774_; lean_object* v_res_1775_; 
v_i_boxed_1773_ = lean_unbox_usize(v_i_1766_);
lean_dec(v_i_1766_);
v_stop_boxed_1774_ = lean_unbox_usize(v_stop_1767_);
lean_dec(v_stop_1767_);
v_res_1775_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2(v_t_1764_, v_as_1765_, v_i_boxed_1773_, v_stop_boxed_1774_, v_b_1768_, v___y_1769_, v___y_1770_, v___y_1771_);
lean_dec(v___y_1771_);
lean_dec_ref(v___y_1770_);
lean_dec_ref(v_as_1765_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__3(uint8_t v___x_1776_, lean_object* v_as_1777_, size_t v_i_1778_, size_t v_stop_1779_, lean_object* v_b_1780_){
_start:
{
lean_object* v___y_1782_; uint8_t v___x_1786_; 
v___x_1786_ = lean_usize_dec_eq(v_i_1778_, v_stop_1779_);
if (v___x_1786_ == 0)
{
lean_object* v_fst_1787_; uint8_t v___x_1788_; 
v_fst_1787_ = lean_ctor_get(v_b_1780_, 0);
v___x_1788_ = lean_unbox(v_fst_1787_);
if (v___x_1788_ == 0)
{
lean_object* v_snd_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1797_; 
v_snd_1789_ = lean_ctor_get(v_b_1780_, 1);
v_isSharedCheck_1797_ = !lean_is_exclusive(v_b_1780_);
if (v_isSharedCheck_1797_ == 0)
{
lean_object* v_unused_1798_; 
v_unused_1798_ = lean_ctor_get(v_b_1780_, 0);
lean_dec(v_unused_1798_);
v___x_1791_ = v_b_1780_;
v_isShared_1792_ = v_isSharedCheck_1797_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_snd_1789_);
lean_dec(v_b_1780_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1797_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v___x_1793_; lean_object* v___x_1795_; 
v___x_1793_ = lean_box(v___x_1776_);
if (v_isShared_1792_ == 0)
{
lean_ctor_set(v___x_1791_, 0, v___x_1793_);
v___x_1795_ = v___x_1791_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v___x_1793_);
lean_ctor_set(v_reuseFailAlloc_1796_, 1, v_snd_1789_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
v___y_1782_ = v___x_1795_;
goto v___jp_1781_;
}
}
}
else
{
lean_object* v_snd_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1809_; 
v_snd_1799_ = lean_ctor_get(v_b_1780_, 1);
v_isSharedCheck_1809_ = !lean_is_exclusive(v_b_1780_);
if (v_isSharedCheck_1809_ == 0)
{
lean_object* v_unused_1810_; 
v_unused_1810_ = lean_ctor_get(v_b_1780_, 0);
lean_dec(v_unused_1810_);
v___x_1801_ = v_b_1780_;
v_isShared_1802_ = v_isSharedCheck_1809_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_snd_1799_);
lean_dec(v_b_1780_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1809_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1807_; 
v___x_1803_ = lean_array_uget_borrowed(v_as_1777_, v_i_1778_);
lean_inc(v___x_1803_);
v___x_1804_ = lean_array_push(v_snd_1799_, v___x_1803_);
v___x_1805_ = lean_box(v___x_1786_);
if (v_isShared_1802_ == 0)
{
lean_ctor_set(v___x_1801_, 1, v___x_1804_);
lean_ctor_set(v___x_1801_, 0, v___x_1805_);
v___x_1807_ = v___x_1801_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v___x_1805_);
lean_ctor_set(v_reuseFailAlloc_1808_, 1, v___x_1804_);
v___x_1807_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
v___y_1782_ = v___x_1807_;
goto v___jp_1781_;
}
}
}
}
else
{
return v_b_1780_;
}
v___jp_1781_:
{
size_t v___x_1783_; size_t v___x_1784_; 
v___x_1783_ = ((size_t)1ULL);
v___x_1784_ = lean_usize_add(v_i_1778_, v___x_1783_);
v_i_1778_ = v___x_1784_;
v_b_1780_ = v___y_1782_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__3___boxed(lean_object* v___x_1811_, lean_object* v_as_1812_, lean_object* v_i_1813_, lean_object* v_stop_1814_, lean_object* v_b_1815_){
_start:
{
uint8_t v___x_8041__boxed_1816_; size_t v_i_boxed_1817_; size_t v_stop_boxed_1818_; lean_object* v_res_1819_; 
v___x_8041__boxed_1816_ = lean_unbox(v___x_1811_);
v_i_boxed_1817_ = lean_unbox_usize(v_i_1813_);
lean_dec(v_i_1813_);
v_stop_boxed_1818_ = lean_unbox_usize(v_stop_1814_);
lean_dec(v_stop_1814_);
v_res_1819_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__3(v___x_8041__boxed_1816_, v_as_1812_, v_i_boxed_1817_, v_stop_boxed_1818_, v_b_1815_);
lean_dec_ref(v_as_1812_);
return v_res_1819_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__3(void){
_start:
{
lean_object* v___x_1826_; lean_object* v___x_1827_; 
v___x_1826_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__2));
v___x_1827_ = l_Lean_stringToMessageData(v___x_1826_);
return v___x_1827_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__7(void){
_start:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1834_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__6));
v___x_1835_ = l_Lean_stringToMessageData(v___x_1834_);
return v___x_1835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5(lean_object* v_elabVal_1838_, lean_object* v_as_1839_, size_t v_i_1840_, size_t v_stop_1841_, lean_object* v_b_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_){
_start:
{
lean_object* v_a_1847_; lean_object* v___y_1852_; uint8_t v___x_1854_; 
v___x_1854_ = lean_usize_dec_eq(v_i_1840_, v_stop_1841_);
if (v___x_1854_ == 0)
{
lean_object* v___x_1855_; lean_object* v___x_1856_; uint8_t v___x_1857_; 
v___x_1855_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__1));
v___x_1856_ = lean_array_uget_borrowed(v_as_1839_, v_i_1840_);
lean_inc(v___x_1856_);
v___x_1857_ = l_Lean_Syntax_isOfKind(v___x_1856_, v___x_1855_);
if (v___x_1857_ == 0)
{
lean_object* v___x_1858_; lean_object* v___x_1859_; 
lean_dec_ref(v_b_1842_);
v___x_1858_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__3);
v___x_1859_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v___x_1856_, v___x_1858_, v___y_1843_, v___y_1844_);
v___y_1852_ = v___x_1859_;
goto v___jp_1851_;
}
else
{
lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; uint8_t v___x_1863_; 
v___x_1860_ = lean_unsigned_to_nat(0u);
v___x_1861_ = l_Lean_Syntax_getArg(v___x_1856_, v___x_1860_);
v___x_1862_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__5));
lean_inc(v___x_1861_);
v___x_1863_ = l_Lean_Syntax_isOfKind(v___x_1861_, v___x_1862_);
if (v___x_1863_ == 0)
{
lean_object* v___x_1864_; lean_object* v___x_1865_; 
lean_dec_ref(v_b_1842_);
v___x_1864_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__7);
v___x_1865_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v___x_1861_, v___x_1864_, v___y_1843_, v___y_1844_);
lean_dec(v___x_1861_);
v___y_1852_ = v___x_1865_;
goto v___jp_1851_;
}
else
{
lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v_v_1868_; lean_object* v___y_1870_; lean_object* v_fst_1871_; lean_object* v_snd_1872_; lean_object* v___y_1904_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; uint8_t v___x_1937_; 
v___x_1866_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__0));
v___x_1867_ = lean_unsigned_to_nat(2u);
v_v_1868_ = l_Lean_Syntax_getArg(v___x_1856_, v___x_1867_);
v___x_1933_ = l_Lean_Syntax_getArg(v___x_1861_, v___x_1860_);
v___x_1934_ = l_Lean_Syntax_getArgs(v___x_1933_);
lean_dec(v___x_1933_);
v___x_1935_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__8));
v___x_1936_ = lean_array_get_size(v___x_1934_);
v___x_1937_ = lean_nat_dec_lt(v___x_1860_, v___x_1936_);
if (v___x_1937_ == 0)
{
lean_dec_ref(v___x_1934_);
v___y_1904_ = v___x_1935_;
goto v___jp_1903_;
}
else
{
lean_object* v___x_1938_; lean_object* v___x_1939_; size_t v___x_1940_; size_t v___x_1941_; lean_object* v___x_1942_; lean_object* v_snd_1943_; 
v___x_1938_ = lean_box(v___x_1937_);
v___x_1939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1939_, 0, v___x_1938_);
lean_ctor_set(v___x_1939_, 1, v___x_1935_);
v___x_1940_ = ((size_t)0ULL);
v___x_1941_ = lean_usize_of_nat(v___x_1936_);
v___x_1942_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__3(v___x_1863_, v___x_1934_, v___x_1940_, v___x_1941_, v___x_1939_);
lean_dec_ref(v___x_1934_);
v_snd_1943_ = lean_ctor_get(v___x_1942_, 1);
lean_inc(v_snd_1943_);
lean_dec_ref(v___x_1942_);
v___y_1904_ = v_snd_1943_;
goto v___jp_1903_;
}
v___jp_1869_:
{
lean_object* v___x_1873_; 
lean_inc(v___y_1870_);
v___x_1873_ = l_Lake_Toml_elabSimpleKey(v___y_1870_, v___y_1843_, v___y_1844_);
if (lean_obj_tag(v___x_1873_) == 0)
{
lean_object* v_a_1874_; lean_object* v___x_1875_; uint8_t v___x_1876_; 
v_a_1874_ = lean_ctor_get(v___x_1873_, 0);
lean_inc(v_a_1874_);
lean_dec_ref_known(v___x_1873_, 1);
v___x_1875_ = l_Lean_Name_str___override(v_fst_1871_, v_a_1874_);
lean_inc_ref(v_snd_1872_);
lean_inc(v___x_1875_);
v___x_1876_ = l_Lake_Toml_RBDict_contains___redArg(v___x_1866_, v___x_1875_, v_snd_1872_);
if (v___x_1876_ == 0)
{
lean_object* v___x_1877_; 
lean_dec(v___y_1870_);
lean_inc_ref(v_elabVal_1838_);
lean_inc(v___y_1844_);
lean_inc_ref(v___y_1843_);
v___x_1877_ = lean_apply_4(v_elabVal_1838_, v_v_1868_, v___y_1843_, v___y_1844_, lean_box(0));
if (lean_obj_tag(v___x_1877_) == 0)
{
lean_object* v_a_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; 
v_a_1878_ = lean_ctor_get(v___x_1877_, 0);
lean_inc(v_a_1878_);
lean_dec_ref_known(v___x_1877_, 1);
v___x_1879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1879_, 0, v_a_1878_);
v___x_1880_ = l_Lake_Toml_RBDict_push___redArg(v___x_1866_, v___x_1875_, v___x_1879_, v_snd_1872_);
v_a_1847_ = v___x_1880_;
goto v___jp_1846_;
}
else
{
lean_object* v_a_1881_; lean_object* v___x_1883_; uint8_t v_isShared_1884_; uint8_t v_isSharedCheck_1888_; 
lean_dec(v___x_1875_);
lean_dec_ref(v_snd_1872_);
lean_dec_ref(v_elabVal_1838_);
v_a_1881_ = lean_ctor_get(v___x_1877_, 0);
v_isSharedCheck_1888_ = !lean_is_exclusive(v___x_1877_);
if (v_isSharedCheck_1888_ == 0)
{
v___x_1883_ = v___x_1877_;
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
else
{
lean_inc(v_a_1881_);
lean_dec(v___x_1877_);
v___x_1883_ = lean_box(0);
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
v_resetjp_1882_:
{
lean_object* v___x_1886_; 
if (v_isShared_1884_ == 0)
{
v___x_1886_ = v___x_1883_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v_a_1881_);
v___x_1886_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
return v___x_1886_;
}
}
}
}
else
{
lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; 
lean_dec_ref(v_snd_1872_);
lean_dec(v_v_1868_);
v___x_1889_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__2);
v___x_1890_ = l_Lean_MessageData_ofName(v___x_1875_);
v___x_1891_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1891_, 0, v___x_1889_);
lean_ctor_set(v___x_1891_, 1, v___x_1890_);
v___x_1892_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__3, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__3_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBasicStringCore___closed__3);
v___x_1893_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1893_, 0, v___x_1891_);
lean_ctor_set(v___x_1893_, 1, v___x_1892_);
v___x_1894_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v___y_1870_, v___x_1893_, v___y_1843_, v___y_1844_);
lean_dec(v___y_1870_);
v___y_1852_ = v___x_1894_;
goto v___jp_1851_;
}
}
else
{
lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1902_; 
lean_dec_ref(v_snd_1872_);
lean_dec(v_fst_1871_);
lean_dec(v___y_1870_);
lean_dec(v_v_1868_);
lean_dec_ref(v_elabVal_1838_);
v_a_1895_ = lean_ctor_get(v___x_1873_, 0);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1897_ = v___x_1873_;
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1873_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v___x_1900_; 
if (v_isShared_1898_ == 0)
{
v___x_1900_ = v___x_1897_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_a_1895_);
v___x_1900_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
return v___x_1900_;
}
}
}
}
v___jp_1903_:
{
size_t v_sz_1905_; size_t v___x_1906_; lean_object* v___x_1907_; 
v_sz_1905_ = lean_array_size(v___y_1904_);
v___x_1906_ = ((size_t)0ULL);
v___x_1907_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__1(v_sz_1905_, v___x_1906_, v___y_1904_);
if (lean_obj_tag(v___x_1907_) == 0)
{
lean_object* v___x_1908_; lean_object* v___x_1909_; 
lean_dec(v_v_1868_);
lean_dec_ref(v_b_1842_);
v___x_1908_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___closed__7);
v___x_1909_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v___x_1861_, v___x_1908_, v___y_1843_, v___y_1844_);
lean_dec(v___x_1861_);
v___y_1852_ = v___x_1909_;
goto v___jp_1851_;
}
else
{
lean_object* v_val_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v_tailKey_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; uint8_t v___x_1919_; 
lean_dec(v___x_1861_);
v_val_1910_ = lean_ctor_get(v___x_1907_, 0);
lean_inc(v_val_1910_);
lean_dec_ref_known(v___x_1907_, 1);
v___x_1911_ = lean_box(0);
v___x_1912_ = lean_array_get_size(v_val_1910_);
v___x_1913_ = lean_unsigned_to_nat(1u);
v___x_1914_ = lean_nat_sub(v___x_1912_, v___x_1913_);
v_tailKey_1915_ = lean_array_get(v___x_1911_, v_val_1910_, v___x_1914_);
lean_dec(v___x_1914_);
v___x_1916_ = lean_box(0);
v___x_1917_ = lean_array_pop(v_val_1910_);
v___x_1918_ = lean_array_get_size(v___x_1917_);
v___x_1919_ = lean_nat_dec_lt(v___x_1860_, v___x_1918_);
if (v___x_1919_ == 0)
{
lean_dec_ref(v___x_1917_);
v___y_1870_ = v_tailKey_1915_;
v_fst_1871_ = v___x_1916_;
v_snd_1872_ = v_b_1842_;
goto v___jp_1869_;
}
else
{
size_t v___x_1920_; lean_object* v___x_1921_; 
v___x_1920_ = lean_usize_of_nat(v___x_1918_);
lean_inc_ref(v_b_1842_);
v___x_1921_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2(v_b_1842_, v___x_1917_, v___x_1906_, v___x_1920_, v___x_1916_, v_b_1842_, v___y_1843_, v___y_1844_);
lean_dec_ref(v___x_1917_);
if (lean_obj_tag(v___x_1921_) == 0)
{
lean_object* v_a_1922_; lean_object* v_fst_1923_; lean_object* v_snd_1924_; 
v_a_1922_ = lean_ctor_get(v___x_1921_, 0);
lean_inc(v_a_1922_);
lean_dec_ref_known(v___x_1921_, 1);
v_fst_1923_ = lean_ctor_get(v_a_1922_, 0);
lean_inc(v_fst_1923_);
v_snd_1924_ = lean_ctor_get(v_a_1922_, 1);
lean_inc(v_snd_1924_);
lean_dec(v_a_1922_);
v___y_1870_ = v_tailKey_1915_;
v_fst_1871_ = v_fst_1923_;
v_snd_1872_ = v_snd_1924_;
goto v___jp_1869_;
}
else
{
lean_object* v_a_1925_; lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1932_; 
lean_dec(v_tailKey_1915_);
lean_dec(v_v_1868_);
lean_dec_ref(v_elabVal_1838_);
v_a_1925_ = lean_ctor_get(v___x_1921_, 0);
v_isSharedCheck_1932_ = !lean_is_exclusive(v___x_1921_);
if (v_isSharedCheck_1932_ == 0)
{
v___x_1927_ = v___x_1921_;
v_isShared_1928_ = v_isSharedCheck_1932_;
goto v_resetjp_1926_;
}
else
{
lean_inc(v_a_1925_);
lean_dec(v___x_1921_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1932_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v___x_1930_; 
if (v_isShared_1928_ == 0)
{
v___x_1930_ = v___x_1927_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1931_; 
v_reuseFailAlloc_1931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1931_, 0, v_a_1925_);
v___x_1930_ = v_reuseFailAlloc_1931_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
return v___x_1930_;
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
lean_object* v___x_1944_; 
lean_dec_ref(v_elabVal_1838_);
v___x_1944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1944_, 0, v_b_1842_);
return v___x_1944_;
}
v___jp_1846_:
{
size_t v___x_1848_; size_t v___x_1849_; 
v___x_1848_ = ((size_t)1ULL);
v___x_1849_ = lean_usize_add(v_i_1840_, v___x_1848_);
v_i_1840_ = v___x_1849_;
v_b_1842_ = v_a_1847_;
goto _start;
}
v___jp_1851_:
{
if (lean_obj_tag(v___y_1852_) == 0)
{
lean_object* v_a_1853_; 
v_a_1853_ = lean_ctor_get(v___y_1852_, 0);
lean_inc(v_a_1853_);
lean_dec_ref_known(v___y_1852_, 1);
v_a_1847_ = v_a_1853_;
goto v___jp_1846_;
}
else
{
lean_dec_ref(v_elabVal_1838_);
return v___y_1852_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5___boxed(lean_object* v_elabVal_1945_, lean_object* v_as_1946_, lean_object* v_i_1947_, lean_object* v_stop_1948_, lean_object* v_b_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_){
_start:
{
size_t v_i_boxed_1953_; size_t v_stop_boxed_1954_; lean_object* v_res_1955_; 
v_i_boxed_1953_ = lean_unbox_usize(v_i_1947_);
lean_dec(v_i_1947_);
v_stop_boxed_1954_ = lean_unbox_usize(v_stop_1948_);
lean_dec(v_stop_1948_);
v_res_1955_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5(v_elabVal_1945_, v_as_1946_, v_i_boxed_1953_, v_stop_boxed_1954_, v_b_1949_, v___y_1950_, v___y_1951_);
lean_dec(v___y_1951_);
lean_dec_ref(v___y_1950_);
lean_dec_ref(v_as_1946_);
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__4(lean_object* v_as_1956_, size_t v_i_1957_, size_t v_stop_1958_, lean_object* v_b_1959_){
_start:
{
lean_object* v___y_1961_; uint8_t v___x_1965_; 
v___x_1965_ = lean_usize_dec_eq(v_i_1957_, v_stop_1958_);
if (v___x_1965_ == 0)
{
lean_object* v___x_1966_; lean_object* v_snd_1967_; 
v___x_1966_ = lean_array_uget_borrowed(v_as_1956_, v_i_1957_);
v_snd_1967_ = lean_ctor_get(v___x_1966_, 1);
if (lean_obj_tag(v_snd_1967_) == 1)
{
lean_object* v_fst_1968_; lean_object* v_val_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v_fst_1968_ = lean_ctor_get(v___x_1966_, 0);
v_val_1969_ = lean_ctor_get(v_snd_1967_, 0);
v___x_1970_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__2___closed__0));
lean_inc(v_val_1969_);
lean_inc(v_fst_1968_);
v___x_1971_ = l_Lake_Toml_RBDict_push___redArg(v___x_1970_, v_fst_1968_, v_val_1969_, v_b_1959_);
v___y_1961_ = v___x_1971_;
goto v___jp_1960_;
}
else
{
v___y_1961_ = v_b_1959_;
goto v___jp_1960_;
}
}
else
{
return v_b_1959_;
}
v___jp_1960_:
{
size_t v___x_1962_; size_t v___x_1963_; 
v___x_1962_ = ((size_t)1ULL);
v___x_1963_ = lean_usize_add(v_i_1957_, v___x_1962_);
v_i_1957_ = v___x_1963_;
v_b_1959_ = v___y_1961_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__4___boxed(lean_object* v_as_1972_, lean_object* v_i_1973_, lean_object* v_stop_1974_, lean_object* v_b_1975_){
_start:
{
size_t v_i_boxed_1976_; size_t v_stop_boxed_1977_; lean_object* v_res_1978_; 
v_i_boxed_1976_ = lean_unbox_usize(v_i_1973_);
lean_dec(v_i_1973_);
v_stop_boxed_1977_ = lean_unbox_usize(v_stop_1974_);
lean_dec(v_stop_1974_);
v_res_1978_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__4(v_as_1972_, v_i_boxed_1976_, v_stop_boxed_1977_, v_b_1975_);
lean_dec_ref(v_as_1972_);
return v_res_1978_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__3(void){
_start:
{
lean_object* v___x_1985_; lean_object* v___x_1986_; 
v___x_1985_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__2));
v___x_1986_ = l_Lean_stringToMessageData(v___x_1985_);
return v___x_1986_;
}
}
static lean_object* _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__4(void){
_start:
{
lean_object* v___x_1987_; 
v___x_1987_ = l_Lake_Toml_RBDict_empty___redArg();
return v___x_1987_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable(lean_object* v_x_1988_, lean_object* v_elabVal_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_){
_start:
{
lean_object* v___x_1993_; uint8_t v___x_1994_; 
v___x_1993_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__1));
lean_inc(v_x_1988_);
v___x_1994_ = l_Lean_Syntax_isOfKind(v_x_1988_, v___x_1993_);
if (v___x_1994_ == 0)
{
lean_object* v___x_1995_; lean_object* v___x_1996_; 
lean_dec_ref(v_elabVal_1989_);
v___x_1995_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__3, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__3_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__3);
v___x_1996_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_1988_, v___x_1995_, v_a_1990_, v_a_1991_);
lean_dec(v_x_1988_);
return v___x_1996_;
}
else
{
lean_object* v___x_1997_; lean_object* v_a_1999_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v_kvs_2011_; lean_object* v_t_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; uint8_t v___x_2015_; 
v___x_1997_ = lean_unsigned_to_nat(0u);
v___x_2009_ = lean_unsigned_to_nat(1u);
v___x_2010_ = l_Lean_Syntax_getArg(v_x_1988_, v___x_2009_);
lean_dec(v_x_1988_);
v_kvs_2011_ = l_Lean_Syntax_getArgs(v___x_2010_);
lean_dec(v___x_2010_);
v_t_2012_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__4, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__4_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__4);
v___x_2013_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_kvs_2011_);
lean_dec_ref(v_kvs_2011_);
v___x_2014_ = lean_array_get_size(v___x_2013_);
v___x_2015_ = lean_nat_dec_lt(v___x_1997_, v___x_2014_);
if (v___x_2015_ == 0)
{
lean_dec_ref(v___x_2013_);
lean_dec_ref(v_elabVal_1989_);
v_a_1999_ = v_t_2012_;
goto v___jp_1998_;
}
else
{
size_t v___x_2016_; size_t v___x_2017_; lean_object* v___x_2018_; 
v___x_2016_ = ((size_t)0ULL);
v___x_2017_ = lean_usize_of_nat(v___x_2014_);
v___x_2018_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__5(v_elabVal_1989_, v___x_2013_, v___x_2016_, v___x_2017_, v_t_2012_, v_a_1990_, v_a_1991_);
lean_dec_ref(v___x_2013_);
if (lean_obj_tag(v___x_2018_) == 0)
{
lean_object* v_a_2019_; 
v_a_2019_ = lean_ctor_get(v___x_2018_, 0);
lean_inc(v_a_2019_);
lean_dec_ref_known(v___x_2018_, 1);
v_a_1999_ = v_a_2019_;
goto v___jp_1998_;
}
else
{
lean_object* v_a_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2027_; 
v_a_2020_ = lean_ctor_get(v___x_2018_, 0);
v_isSharedCheck_2027_ = !lean_is_exclusive(v___x_2018_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2022_ = v___x_2018_;
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_a_2020_);
lean_dec(v___x_2018_);
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
v___jp_1998_:
{
lean_object* v_items_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; uint8_t v___x_2003_; 
v_items_2000_ = lean_ctor_get(v_a_1999_, 0);
lean_inc_ref(v_items_2000_);
lean_dec_ref(v_a_1999_);
v___x_2001_ = lean_obj_once(&l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__4, &l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__4_once, _init_l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__4);
v___x_2002_ = lean_array_get_size(v_items_2000_);
v___x_2003_ = lean_nat_dec_lt(v___x_1997_, v___x_2002_);
if (v___x_2003_ == 0)
{
lean_object* v___x_2004_; 
lean_dec_ref(v_items_2000_);
v___x_2004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2004_, 0, v___x_2001_);
return v___x_2004_;
}
else
{
size_t v___x_2005_; size_t v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; 
v___x_2005_ = ((size_t)0ULL);
v___x_2006_ = lean_usize_of_nat(v___x_2002_);
v___x_2007_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__4(v_items_2000_, v___x_2005_, v___x_2006_, v___x_2001_);
lean_dec_ref(v_items_2000_);
v___x_2008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2008_, 0, v___x_2007_);
return v___x_2008_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___boxed(lean_object* v_x_2028_, lean_object* v_elabVal_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_, lean_object* v_a_2032_){
_start:
{
lean_object* v_res_2033_; 
v_res_2033_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable(v_x_2028_, v_elabVal_2029_, v_a_2030_, v_a_2031_);
lean_dec(v_a_2031_);
lean_dec_ref(v_a_2030_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0(lean_object* v_00_u03b1_2034_, lean_object* v_ref_2035_, lean_object* v_msg_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_){
_start:
{
lean_object* v___x_2041_; 
v___x_2041_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0___redArg(v_ref_2035_, v_msg_2036_, v___y_2037_, v___y_2038_, v___y_2039_);
return v___x_2041_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0___boxed(lean_object* v_00_u03b1_2042_, lean_object* v_ref_2043_, lean_object* v_msg_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_){
_start:
{
lean_object* v_res_2049_; 
v_res_2049_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0(v_00_u03b1_2042_, v_ref_2043_, v_msg_2044_, v___y_2045_, v___y_2046_, v___y_2047_);
lean_dec(v___y_2047_);
lean_dec_ref(v___y_2046_);
lean_dec_ref(v___y_2045_);
lean_dec(v_ref_2043_);
return v_res_2049_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0_spec__0(lean_object* v_00_u03b1_2050_, lean_object* v_msg_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_){
_start:
{
lean_object* v___x_2056_; 
v___x_2056_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0_spec__0___redArg(v_msg_2051_, v___y_2053_, v___y_2054_);
return v___x_2056_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2057_, lean_object* v_msg_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_){
_start:
{
lean_object* v_res_2063_; 
v_res_2063_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable_spec__0_spec__0(v_00_u03b1_2057_, v_msg_2058_, v___y_2059_, v___y_2060_, v___y_2061_);
lean_dec(v___y_2061_);
lean_dec_ref(v___y_2060_);
lean_dec_ref(v___y_2059_);
return v_res_2063_;
}
}
static lean_object* _init_l_Lake_Toml_elabVal___closed__1(void){
_start:
{
lean_object* v___x_2065_; lean_object* v___x_2066_; 
v___x_2065_ = ((lean_object*)(l_Lake_Toml_elabVal___closed__0));
v___x_2066_ = l_Lean_stringToMessageData(v___x_2065_);
return v___x_2066_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_elabVal___boxed(lean_object* v_x_2067_, lean_object* v_a_2068_, lean_object* v_a_2069_, lean_object* v_a_2070_){
_start:
{
lean_object* v_res_2071_; 
v_res_2071_ = l_Lake_Toml_elabVal(v_x_2067_, v_a_2068_, v_a_2069_);
lean_dec(v_a_2069_);
lean_dec_ref(v_a_2068_);
return v_res_2071_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_elabVal(lean_object* v_x_2072_, lean_object* v_a_2073_, lean_object* v_a_2074_){
_start:
{
lean_object* v___x_2076_; uint8_t v___x_2077_; 
v___x_2076_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat___closed__1));
lean_inc(v_x_2072_);
v___x_2077_ = l_Lean_Syntax_isOfKind(v_x_2072_, v___x_2076_);
if (v___x_2077_ == 0)
{
lean_object* v___x_2078_; uint8_t v___x_2079_; 
v___x_2078_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt___closed__1));
lean_inc(v_x_2072_);
v___x_2079_ = l_Lean_Syntax_isOfKind(v_x_2072_, v___x_2078_);
if (v___x_2079_ == 0)
{
lean_object* v___x_2080_; uint8_t v___x_2081_; 
v___x_2080_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum___closed__1));
lean_inc(v_x_2072_);
v___x_2081_ = l_Lean_Syntax_isOfKind(v_x_2072_, v___x_2080_);
if (v___x_2081_ == 0)
{
lean_object* v___x_2082_; uint8_t v___x_2083_; 
v___x_2082_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum___closed__1));
lean_inc(v_x_2072_);
v___x_2083_ = l_Lean_Syntax_isOfKind(v_x_2072_, v___x_2082_);
if (v___x_2083_ == 0)
{
lean_object* v___x_2084_; uint8_t v___x_2085_; 
v___x_2084_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum___closed__1));
lean_inc(v_x_2072_);
v___x_2085_ = l_Lean_Syntax_isOfKind(v_x_2072_, v___x_2084_);
if (v___x_2085_ == 0)
{
lean_object* v___x_2086_; uint8_t v___x_2087_; 
v___x_2086_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime___closed__3));
lean_inc(v_x_2072_);
v___x_2087_ = l_Lean_Syntax_isOfKind(v_x_2072_, v___x_2086_);
if (v___x_2087_ == 0)
{
lean_object* v___x_2088_; uint8_t v___x_2089_; 
v___x_2088_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString___closed__1));
lean_inc(v_x_2072_);
v___x_2089_ = l_Lean_Syntax_isOfKind(v_x_2072_, v___x_2088_);
if (v___x_2089_ == 0)
{
lean_object* v___x_2090_; uint8_t v___x_2091_; 
v___x_2090_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean___closed__3));
lean_inc(v_x_2072_);
v___x_2091_ = l_Lean_Syntax_isOfKind(v_x_2072_, v___x_2090_);
if (v___x_2091_ == 0)
{
lean_object* v___x_2092_; uint8_t v___x_2093_; 
v___x_2092_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg___closed__1));
lean_inc(v_x_2072_);
v___x_2093_ = l_Lean_Syntax_isOfKind(v_x_2072_, v___x_2092_);
if (v___x_2093_ == 0)
{
lean_object* v___x_2094_; uint8_t v___x_2095_; 
v___x_2094_ = ((lean_object*)(l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable___closed__1));
lean_inc(v_x_2072_);
v___x_2095_ = l_Lean_Syntax_isOfKind(v_x_2072_, v___x_2094_);
if (v___x_2095_ == 0)
{
lean_object* v___x_2096_; lean_object* v___x_2097_; 
v___x_2096_ = lean_obj_once(&l_Lake_Toml_elabVal___closed__1, &l_Lake_Toml_elabVal___closed__1_once, _init_l_Lake_Toml_elabVal___closed__1);
v___x_2097_ = l_Lean_throwErrorAt___at___00__private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean_spec__0___redArg(v_x_2072_, v___x_2096_, v_a_2073_, v_a_2074_);
lean_dec(v_x_2072_);
return v___x_2097_;
}
else
{
lean_object* v___x_2098_; lean_object* v___x_2099_; 
v___x_2098_ = lean_alloc_closure((void*)(l_Lake_Toml_elabVal___boxed), 4, 0);
lean_inc(v_x_2072_);
v___x_2099_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabInlineTable(v_x_2072_, v___x_2098_, v_a_2073_, v_a_2074_);
if (lean_obj_tag(v___x_2099_) == 0)
{
lean_object* v_a_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2108_; 
v_a_2100_ = lean_ctor_get(v___x_2099_, 0);
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2102_ = v___x_2099_;
v_isShared_2103_ = v_isSharedCheck_2108_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_a_2100_);
lean_dec(v___x_2099_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2108_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
lean_object* v___x_2104_; lean_object* v___x_2106_; 
v___x_2104_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_2104_, 0, v_x_2072_);
lean_ctor_set(v___x_2104_, 1, v_a_2100_);
if (v_isShared_2103_ == 0)
{
lean_ctor_set(v___x_2102_, 0, v___x_2104_);
v___x_2106_ = v___x_2102_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v___x_2104_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
}
else
{
lean_object* v_a_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2116_; 
lean_dec(v_x_2072_);
v_a_2109_ = lean_ctor_get(v___x_2099_, 0);
v_isSharedCheck_2116_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2111_ = v___x_2099_;
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_a_2109_);
lean_dec(v___x_2099_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v___x_2114_; 
if (v_isShared_2112_ == 0)
{
v___x_2114_ = v___x_2111_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_a_2109_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
return v___x_2114_;
}
}
}
}
}
else
{
lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2117_ = lean_alloc_closure((void*)(l_Lake_Toml_elabVal___boxed), 4, 0);
lean_inc(v_x_2072_);
v___x_2118_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabArray___redArg(v_x_2072_, v___x_2117_, v_a_2073_, v_a_2074_);
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v_a_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2127_; 
v_a_2119_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2127_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2127_ == 0)
{
v___x_2121_ = v___x_2118_;
v_isShared_2122_ = v_isSharedCheck_2127_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_a_2119_);
lean_dec(v___x_2118_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2127_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2123_; lean_object* v___x_2125_; 
v___x_2123_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2123_, 0, v_x_2072_);
lean_ctor_set(v___x_2123_, 1, v_a_2119_);
if (v_isShared_2122_ == 0)
{
lean_ctor_set(v___x_2121_, 0, v___x_2123_);
v___x_2125_ = v___x_2121_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v___x_2123_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
return v___x_2125_;
}
}
}
else
{
lean_object* v_a_2128_; lean_object* v___x_2130_; uint8_t v_isShared_2131_; uint8_t v_isSharedCheck_2135_; 
lean_dec(v_x_2072_);
v_a_2128_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2135_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_2130_ = v___x_2118_;
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
else
{
lean_inc(v_a_2128_);
lean_dec(v___x_2118_);
v___x_2130_ = lean_box(0);
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
v_resetjp_2129_:
{
lean_object* v___x_2133_; 
if (v_isShared_2131_ == 0)
{
v___x_2133_ = v___x_2130_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v_a_2128_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
}
}
}
}
}
else
{
lean_object* v___x_2136_; 
lean_inc(v_x_2072_);
v___x_2136_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBoolean(v_x_2072_, v_a_2073_, v_a_2074_);
if (lean_obj_tag(v___x_2136_) == 0)
{
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2146_; 
v_a_2137_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2146_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2139_ = v___x_2136_;
v_isShared_2140_ = v_isSharedCheck_2146_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2136_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2146_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2141_; uint8_t v___x_2142_; lean_object* v___x_2144_; 
v___x_2141_ = lean_alloc_ctor(3, 1, 1);
lean_ctor_set(v___x_2141_, 0, v_x_2072_);
v___x_2142_ = lean_unbox(v_a_2137_);
lean_dec(v_a_2137_);
lean_ctor_set_uint8(v___x_2141_, sizeof(void*)*1, v___x_2142_);
if (v_isShared_2140_ == 0)
{
lean_ctor_set(v___x_2139_, 0, v___x_2141_);
v___x_2144_ = v___x_2139_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v___x_2141_);
v___x_2144_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
return v___x_2144_;
}
}
}
else
{
lean_object* v_a_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2154_; 
lean_dec(v_x_2072_);
v_a_2147_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2154_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2149_ = v___x_2136_;
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_a_2147_);
lean_dec(v___x_2136_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v___x_2152_; 
if (v_isShared_2150_ == 0)
{
v___x_2152_ = v___x_2149_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v_a_2147_);
v___x_2152_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
return v___x_2152_;
}
}
}
}
}
else
{
lean_object* v___x_2155_; 
lean_inc(v_x_2072_);
v___x_2155_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabString(v_x_2072_, v_a_2073_, v_a_2074_);
if (lean_obj_tag(v___x_2155_) == 0)
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2164_; 
v_a_2156_ = lean_ctor_get(v___x_2155_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2158_ = v___x_2155_;
v_isShared_2159_ = v_isSharedCheck_2164_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2155_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2164_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2160_; lean_object* v___x_2162_; 
v___x_2160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2160_, 0, v_x_2072_);
lean_ctor_set(v___x_2160_, 1, v_a_2156_);
if (v_isShared_2159_ == 0)
{
lean_ctor_set(v___x_2158_, 0, v___x_2160_);
v___x_2162_ = v___x_2158_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v___x_2160_);
v___x_2162_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
return v___x_2162_;
}
}
}
else
{
lean_object* v_a_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2172_; 
lean_dec(v_x_2072_);
v_a_2165_ = lean_ctor_get(v___x_2155_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2167_ = v___x_2155_;
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_a_2165_);
lean_dec(v___x_2155_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2170_; 
if (v_isShared_2168_ == 0)
{
v___x_2170_ = v___x_2167_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_a_2165_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
}
}
else
{
lean_object* v___x_2173_; 
v___x_2173_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDateTime(v_x_2072_, v_a_2073_, v_a_2074_);
if (lean_obj_tag(v___x_2173_) == 0)
{
lean_object* v_a_2174_; lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2182_; 
v_a_2174_ = lean_ctor_get(v___x_2173_, 0);
v_isSharedCheck_2182_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2182_ == 0)
{
v___x_2176_ = v___x_2173_;
v_isShared_2177_ = v_isSharedCheck_2182_;
goto v_resetjp_2175_;
}
else
{
lean_inc(v_a_2174_);
lean_dec(v___x_2173_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2182_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
lean_object* v___x_2178_; lean_object* v___x_2180_; 
v___x_2178_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2178_, 0, v_x_2072_);
lean_ctor_set(v___x_2178_, 1, v_a_2174_);
if (v_isShared_2177_ == 0)
{
lean_ctor_set(v___x_2176_, 0, v___x_2178_);
v___x_2180_ = v___x_2176_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v___x_2178_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
return v___x_2180_;
}
}
}
else
{
lean_object* v_a_2183_; lean_object* v___x_2185_; uint8_t v_isShared_2186_; uint8_t v_isSharedCheck_2190_; 
lean_dec(v_x_2072_);
v_a_2183_ = lean_ctor_get(v___x_2173_, 0);
v_isSharedCheck_2190_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2185_ = v___x_2173_;
v_isShared_2186_ = v_isSharedCheck_2190_;
goto v_resetjp_2184_;
}
else
{
lean_inc(v_a_2183_);
lean_dec(v___x_2173_);
v___x_2185_ = lean_box(0);
v_isShared_2186_ = v_isSharedCheck_2190_;
goto v_resetjp_2184_;
}
v_resetjp_2184_:
{
lean_object* v___x_2188_; 
if (v_isShared_2186_ == 0)
{
v___x_2188_ = v___x_2185_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v_a_2183_);
v___x_2188_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
return v___x_2188_;
}
}
}
}
}
else
{
lean_object* v___x_2191_; 
v___x_2191_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabHexNum(v_x_2072_, v_a_2073_, v_a_2074_);
if (lean_obj_tag(v___x_2191_) == 0)
{
lean_object* v_a_2192_; lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2201_; 
v_a_2192_ = lean_ctor_get(v___x_2191_, 0);
v_isSharedCheck_2201_ = !lean_is_exclusive(v___x_2191_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2194_ = v___x_2191_;
v_isShared_2195_ = v_isSharedCheck_2201_;
goto v_resetjp_2193_;
}
else
{
lean_inc(v_a_2192_);
lean_dec(v___x_2191_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2201_;
goto v_resetjp_2193_;
}
v_resetjp_2193_:
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2199_; 
v___x_2196_ = lean_nat_to_int(v_a_2192_);
v___x_2197_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2197_, 0, v_x_2072_);
lean_ctor_set(v___x_2197_, 1, v___x_2196_);
if (v_isShared_2195_ == 0)
{
lean_ctor_set(v___x_2194_, 0, v___x_2197_);
v___x_2199_ = v___x_2194_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v___x_2197_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
return v___x_2199_;
}
}
}
else
{
lean_object* v_a_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2209_; 
lean_dec(v_x_2072_);
v_a_2202_ = lean_ctor_get(v___x_2191_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2191_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2204_ = v___x_2191_;
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_a_2202_);
lean_dec(v___x_2191_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v___x_2207_; 
if (v_isShared_2205_ == 0)
{
v___x_2207_ = v___x_2204_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v_a_2202_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
}
}
}
else
{
lean_object* v___x_2210_; 
v___x_2210_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabOctNum(v_x_2072_, v_a_2073_, v_a_2074_);
if (lean_obj_tag(v___x_2210_) == 0)
{
lean_object* v_a_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2220_; 
v_a_2211_ = lean_ctor_get(v___x_2210_, 0);
v_isSharedCheck_2220_ = !lean_is_exclusive(v___x_2210_);
if (v_isSharedCheck_2220_ == 0)
{
v___x_2213_ = v___x_2210_;
v_isShared_2214_ = v_isSharedCheck_2220_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_a_2211_);
lean_dec(v___x_2210_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2220_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2218_; 
v___x_2215_ = lean_nat_to_int(v_a_2211_);
v___x_2216_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2216_, 0, v_x_2072_);
lean_ctor_set(v___x_2216_, 1, v___x_2215_);
if (v_isShared_2214_ == 0)
{
lean_ctor_set(v___x_2213_, 0, v___x_2216_);
v___x_2218_ = v___x_2213_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v___x_2216_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
}
else
{
lean_object* v_a_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2228_; 
lean_dec(v_x_2072_);
v_a_2221_ = lean_ctor_get(v___x_2210_, 0);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2210_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2223_ = v___x_2210_;
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_a_2221_);
lean_dec(v___x_2210_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
lean_object* v___x_2226_; 
if (v_isShared_2224_ == 0)
{
v___x_2226_ = v___x_2223_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_a_2221_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
}
}
else
{
lean_object* v___x_2229_; 
v___x_2229_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabBinNum(v_x_2072_, v_a_2073_, v_a_2074_);
if (lean_obj_tag(v___x_2229_) == 0)
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2239_; 
v_a_2230_ = lean_ctor_get(v___x_2229_, 0);
v_isSharedCheck_2239_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2239_ == 0)
{
v___x_2232_ = v___x_2229_;
v_isShared_2233_ = v_isSharedCheck_2239_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2229_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2239_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2237_; 
v___x_2234_ = lean_nat_to_int(v_a_2230_);
v___x_2235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2235_, 0, v_x_2072_);
lean_ctor_set(v___x_2235_, 1, v___x_2234_);
if (v_isShared_2233_ == 0)
{
lean_ctor_set(v___x_2232_, 0, v___x_2235_);
v___x_2237_ = v___x_2232_;
goto v_reusejp_2236_;
}
else
{
lean_object* v_reuseFailAlloc_2238_; 
v_reuseFailAlloc_2238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2238_, 0, v___x_2235_);
v___x_2237_ = v_reuseFailAlloc_2238_;
goto v_reusejp_2236_;
}
v_reusejp_2236_:
{
return v___x_2237_;
}
}
}
else
{
lean_object* v_a_2240_; lean_object* v___x_2242_; uint8_t v_isShared_2243_; uint8_t v_isSharedCheck_2247_; 
lean_dec(v_x_2072_);
v_a_2240_ = lean_ctor_get(v___x_2229_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2242_ = v___x_2229_;
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
else
{
lean_inc(v_a_2240_);
lean_dec(v___x_2229_);
v___x_2242_ = lean_box(0);
v_isShared_2243_ = v_isSharedCheck_2247_;
goto v_resetjp_2241_;
}
v_resetjp_2241_:
{
lean_object* v___x_2245_; 
if (v_isShared_2243_ == 0)
{
v___x_2245_ = v___x_2242_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v_a_2240_);
v___x_2245_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
return v___x_2245_;
}
}
}
}
}
else
{
lean_object* v___x_2248_; 
v___x_2248_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabDecInt(v_x_2072_, v_a_2073_, v_a_2074_);
if (lean_obj_tag(v___x_2248_) == 0)
{
lean_object* v_a_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2257_; 
v_a_2249_ = lean_ctor_get(v___x_2248_, 0);
v_isSharedCheck_2257_ = !lean_is_exclusive(v___x_2248_);
if (v_isSharedCheck_2257_ == 0)
{
v___x_2251_ = v___x_2248_;
v_isShared_2252_ = v_isSharedCheck_2257_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_a_2249_);
lean_dec(v___x_2248_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2257_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
lean_object* v___x_2253_; lean_object* v___x_2255_; 
v___x_2253_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2253_, 0, v_x_2072_);
lean_ctor_set(v___x_2253_, 1, v_a_2249_);
if (v_isShared_2252_ == 0)
{
lean_ctor_set(v___x_2251_, 0, v___x_2253_);
v___x_2255_ = v___x_2251_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v___x_2253_);
v___x_2255_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
return v___x_2255_;
}
}
}
else
{
lean_object* v_a_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2265_; 
lean_dec(v_x_2072_);
v_a_2258_ = lean_ctor_get(v___x_2248_, 0);
v_isSharedCheck_2265_ = !lean_is_exclusive(v___x_2248_);
if (v_isSharedCheck_2265_ == 0)
{
v___x_2260_ = v___x_2248_;
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_a_2258_);
lean_dec(v___x_2248_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2263_; 
if (v_isShared_2261_ == 0)
{
v___x_2263_ = v___x_2260_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v_a_2258_);
v___x_2263_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
return v___x_2263_;
}
}
}
}
}
else
{
lean_object* v___x_2266_; 
v___x_2266_ = l___private_Lake_Toml_Elab_Value_0__Lake_Toml_elabFloat(v_x_2072_, v_a_2073_, v_a_2074_);
if (lean_obj_tag(v___x_2266_) == 0)
{
lean_object* v_a_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2276_; 
v_a_2267_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2276_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2276_ == 0)
{
v___x_2269_ = v___x_2266_;
v_isShared_2270_ = v_isSharedCheck_2276_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_a_2267_);
lean_dec(v___x_2266_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2276_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2271_; double v___x_2272_; lean_object* v___x_2274_; 
v___x_2271_ = lean_alloc_ctor(2, 1, 8);
lean_ctor_set(v___x_2271_, 0, v_x_2072_);
v___x_2272_ = lean_unbox_float(v_a_2267_);
lean_dec(v_a_2267_);
lean_ctor_set_float(v___x_2271_, sizeof(void*)*1, v___x_2272_);
if (v_isShared_2270_ == 0)
{
lean_ctor_set(v___x_2269_, 0, v___x_2271_);
v___x_2274_ = v___x_2269_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v___x_2271_);
v___x_2274_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
return v___x_2274_;
}
}
}
else
{
lean_object* v_a_2277_; lean_object* v___x_2279_; uint8_t v_isShared_2280_; uint8_t v_isSharedCheck_2284_; 
lean_dec(v_x_2072_);
v_a_2277_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2284_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2284_ == 0)
{
v___x_2279_ = v___x_2266_;
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
else
{
lean_inc(v_a_2277_);
lean_dec(v___x_2266_);
v___x_2279_ = lean_box(0);
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
v_resetjp_2278_:
{
lean_object* v___x_2282_; 
if (v_isShared_2280_ == 0)
{
v___x_2282_ = v___x_2279_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v_a_2277_);
v___x_2282_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
return v___x_2282_;
}
}
}
}
}
}
lean_object* runtime_initialize_Lake_Toml_Data_Value(uint8_t builtin);
lean_object* runtime_initialize_Lake_Toml_Grammar(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Toml_Elab_Value(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Toml_Data_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Toml_Grammar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lake_Toml_Grammar(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Toml_Elab_Value(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lake_Toml_Grammar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Toml_Data_Value(uint8_t builtin);
lean_object* initialize_Lake_Toml_Grammar(uint8_t builtin);
lean_object* initialize_Lake_Toml_Grammar(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Toml_Elab_Value(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Toml_Data_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Toml_Grammar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Toml_Grammar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Toml_Elab_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Toml_Elab_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Toml_Elab_Value(builtin);
}
#ifdef __cplusplus
}
#endif
