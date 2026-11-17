// Lean compiler output
// Module: Lean.Parser.Types
// Imports: public import Lean.Data.Trie public import Lean.DocString.Extension import Init.Data.String.OrderInstances
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
uint8_t l_Lean_Syntax_structEq(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint64_t l_String_instHashableRaw_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_shrink___redArg(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_instDecidableEqRaw___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_decEq___boxed(lean_object*, lean_object*);
lean_object* l_List_eraseRepsBy___redArg(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedFileMap_default;
uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_instBEqOption_beq___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_mkErrorStringWithPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAtom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkIdent(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lean_Parser_getNext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getNext___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_maxPrec;
LEAN_EXPORT lean_object* l_Lean_Parser_argPrec;
LEAN_EXPORT lean_object* l_Lean_Parser_leadPrec;
LEAN_EXPORT lean_object* l_Lean_Parser_minPrec;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxNodeKindSet_insert(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2_value;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__3 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__3_value;
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value_aux_0),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value_aux_1),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value_aux_2),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value;
static const lean_array_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5_value;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__6 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__6_value;
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value_aux_0),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value_aux_1),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value_aux_2),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__8 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__8_value;
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__9 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__9_value;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__10 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__10_value;
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value_aux_0),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value_aux_1),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value_aux_2),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__10_value),LEAN_SCALAR_PTR_LITERAL(50, 13, 241, 145, 67, 153, 105, 177)}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__12;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__13;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__14 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__14_value;
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value_aux_0),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value_aux_1),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value_aux_2),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value;
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__9_value),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5_value)}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16_value;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__17;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__18;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__19;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__20;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__21;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__22;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__23;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__24;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__25;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__26;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__27;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__28;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__29;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30;
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam;
static const lean_string_object l_Lean_Parser_instInhabitedInputContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Parser_instInhabitedInputContext___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedInputContext___closed__0_value;
static lean_once_cell_t l_Lean_Parser_instInhabitedInputContext___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instInhabitedInputContext___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedInputContext;
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_mk___auto__1;
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_mk___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_input(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_input___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_atEnd___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_get_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_get_x27___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_get_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_get_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_extract___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_substring(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_substring___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_getNext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_getNext___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_prev(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_prev___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instBEqCacheableParserContext_unsafe__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_decEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instBEqCacheableParserContext_unsafe__2___closed__0 = (const lean_object*)&l_Lean_Parser_instBEqCacheableParserContext_unsafe__2___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqCacheableParserContext_unsafe__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqCacheableParserContext_unsafe__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_instBEqCacheableParserContext___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instBEqCacheableParserContext___lam__0___closed__0;
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqCacheableParserContext___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqCacheableParserContext___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instBEqCacheableParserContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instBEqCacheableParserContext___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_instBEqCacheableParserContext_unsafe__2___closed__0_value)} };
static const lean_object* l_Lean_Parser_instBEqCacheableParserContext___closed__0 = (const lean_object*)&l_Lean_Parser_instBEqCacheableParserContext___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instBEqCacheableParserContext = (const lean_object*)&l_Lean_Parser_instBEqCacheableParserContext___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_instCoeParserContextInputContext___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instCoeParserContextInputContext___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_instCoeParserContextInputContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instCoeParserContextInputContext___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instCoeParserContextInputContext___closed__0 = (const lean_object*)&l_Lean_Parser_instCoeParserContextInputContext___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instCoeParserContextInputContext = (const lean_object*)&l_Lean_Parser_instCoeParserContextInputContext___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_setEndPos___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_setEndPos(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Parser_instInhabitedError_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_instInhabitedInputContext___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_instInhabitedError_default___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedError_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedError_default = (const lean_object*)&l_Lean_Parser_instInhabitedError_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedError = (const lean_object*)&l_Lean_Parser_instInhabitedError_default___closed__0_value;
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqError_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqError_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instBEqError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instBEqError_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instBEqError___closed__0 = (const lean_object*)&l_Lean_Parser_instBEqError___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instBEqError = (const lean_object*)&l_Lean_Parser_instBEqError___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " or "};
static const lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__0 = (const lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__1 = (const lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString(lean_object*);
LEAN_EXPORT lean_object* l_List_eraseReps___at___00Lean_Parser_Error_toString_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Error_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "; "};
static const lean_object* l_Lean_Parser_Error_toString___closed__0 = (const lean_object*)&l_Lean_Parser_Error_toString___closed__0_value;
static const lean_string_object l_Lean_Parser_Error_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "expected "};
static const lean_object* l_Lean_Parser_Error_toString___closed__1 = (const lean_object*)&l_Lean_Parser_Error_toString___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Error_toString(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Error_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Error_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Error_instToString___closed__0 = (const lean_object*)&l_Lean_Parser_Error_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Error_instToString = (const lean_object*)&l_Lean_Parser_Error_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Error_merge(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqParserCacheKey_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqParserCacheKey_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instBEqParserCacheKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instBEqParserCacheKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instBEqParserCacheKey___closed__0 = (const lean_object*)&l_Lean_Parser_instBEqParserCacheKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instBEqParserCacheKey = (const lean_object*)&l_Lean_Parser_instBEqParserCacheKey___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Parser_instHashableParserCacheKey___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instHashableParserCacheKey___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_instHashableParserCacheKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instHashableParserCacheKey___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instHashableParserCacheKey___closed__0 = (const lean_object*)&l_Lean_Parser_instHashableParserCacheKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instHashableParserCacheKey = (const lean_object*)&l_Lean_Parser_instHashableParserCacheKey___closed__0_value;
static lean_once_cell_t l_Lean_Parser_initCacheForInput___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_initCacheForInput___closed__0;
static lean_once_cell_t l_Lean_Parser_initCacheForInput___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_initCacheForInput___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_initCacheForInput(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_initCacheForInput___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_toSubarray(lean_object*);
static const lean_array_object l_Lean_Parser_SyntaxStack_empty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_SyntaxStack_empty___closed__0 = (const lean_object*)&l_Lean_Parser_SyntaxStack_empty___closed__0_value;
static const lean_ctor_object l_Lean_Parser_SyntaxStack_empty___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_SyntaxStack_empty___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_SyntaxStack_empty___closed__1 = (const lean_object*)&l_Lean_Parser_SyntaxStack_empty___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_SyntaxStack_empty = (const lean_object*)&l_Lean_Parser_SyntaxStack_empty___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_size___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_SyntaxStack_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_shrink(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_shrink___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_pop(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_SyntaxStack_back_spec__0(lean_object*);
static const lean_string_object l_Lean_Parser_SyntaxStack_back___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Parser.Types"};
static const lean_object* l_Lean_Parser_SyntaxStack_back___closed__0 = (const lean_object*)&l_Lean_Parser_SyntaxStack_back___closed__0_value;
static const lean_string_object l_Lean_Parser_SyntaxStack_back___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Parser.SyntaxStack.back"};
static const lean_object* l_Lean_Parser_SyntaxStack_back___closed__1 = (const lean_object*)&l_Lean_Parser_SyntaxStack_back___closed__1_value;
static const lean_string_object l_Lean_Parser_SyntaxStack_back___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "SyntaxStack.back: element is inaccessible"};
static const lean_object* l_Lean_Parser_SyntaxStack_back___closed__2 = (const lean_object*)&l_Lean_Parser_SyntaxStack_back___closed__2_value;
static lean_once_cell_t l_Lean_Parser_SyntaxStack_back___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_SyntaxStack_back___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_back___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_SyntaxStack_get_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Parser.SyntaxStack.get!"};
static const lean_object* l_Lean_Parser_SyntaxStack_get_x21___closed__0 = (const lean_object*)&l_Lean_Parser_SyntaxStack_get_x21___closed__0_value;
static const lean_string_object l_Lean_Parser_SyntaxStack_get_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "SyntaxStack.get!: element is inaccessible"};
static const lean_object* l_Lean_Parser_SyntaxStack_get_x21___closed__1 = (const lean_object*)&l_Lean_Parser_SyntaxStack_get_x21___closed__1_value;
static lean_once_cell_t l_Lean_Parser_SyntaxStack_get_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_SyntaxStack_get_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_get_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_get_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_extract___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___private__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___private__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___closed__0 = (const lean_object*)&l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax = (const lean_object*)&l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Parser_ParserState_hasError(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_hasError___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_stackSize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_stackSize___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_restore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_restore___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_setCache(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_pushSyntax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_popSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_shrinkStack(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_shrinkStack___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Parser_ParserState_mkNode_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Parser_ParserState_mkNode_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkNode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkNode___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkTrailingNode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkTrailingNode___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Parser_ParserState_allErrors___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_ParserState_allErrors___closed__0 = (const lean_object*)&l_Lean_Parser_ParserState_allErrors___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_allErrors(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_setError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedError___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_ParserState_mkEOIError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "unexpected end of input"};
static const lean_object* l_Lean_Parser_ParserState_mkEOIError___closed__0 = (const lean_object*)&l_Lean_Parser_ParserState_mkEOIError___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkEOIError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorsAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorsAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_ParserState_mkUnexpectedTokenErrors_spec__0(lean_object*);
static const lean_string_object l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__0 = (const lean_object*)&l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__0_value;
static const lean_string_object l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__1 = (const lean_object*)&l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__1_value;
static const lean_string_object l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__2 = (const lean_object*)&l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__2_value;
static lean_once_cell_t l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenError(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedErrorAt(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_toErrorMsg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserFn___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instInhabitedParserFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instInhabitedParserFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instInhabitedParserFn___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedParserFn___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedParserFn = (const lean_object*)&l_Lean_Parser_instInhabitedParserFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_epsilon_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_epsilon_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_unknown_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_unknown_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_tokens_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_tokens_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_optTokens_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_optTokens_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedFirstTokens_default;
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedFirstTokens;
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_seq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_toOptional(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_merge(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__0 = (const lean_object*)&l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__0_value;
static const lean_string_object l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__1 = (const lean_object*)&l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__1_value;
static const lean_string_object l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__2 = (const lean_object*)&l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_FirstTokens_toStr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "epsilon"};
static const lean_object* l_Lean_Parser_FirstTokens_toStr___closed__0 = (const lean_object*)&l_Lean_Parser_FirstTokens_toStr___closed__0_value;
static const lean_string_object l_Lean_Parser_FirstTokens_toStr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "unknown"};
static const lean_object* l_Lean_Parser_FirstTokens_toStr___closed__1 = (const lean_object*)&l_Lean_Parser_FirstTokens_toStr___closed__1_value;
static const lean_string_object l_Lean_Parser_FirstTokens_toStr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lean_Parser_FirstTokens_toStr___closed__2 = (const lean_object*)&l_Lean_Parser_FirstTokens_toStr___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_toStr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_toStr___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_FirstTokens_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_FirstTokens_toStr___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_FirstTokens_instToString___closed__0 = (const lean_object*)&l_Lean_Parser_FirstTokens_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_FirstTokens_instToString = (const lean_object*)&l_Lean_Parser_FirstTokens_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_instInhabitedParserInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instInhabitedParserInfo_default___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instInhabitedParserInfo_default___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__0_value;
static const lean_closure_object l_Lean_Parser_instInhabitedParserInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instInhabitedParserInfo_default___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instInhabitedParserInfo_default___closed__1 = (const lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__1_value;
static const lean_ctor_object l_Lean_Parser_instInhabitedParserInfo_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__0_value),((lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Parser_instInhabitedParserInfo_default___closed__2 = (const lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedParserInfo_default = (const lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedParserInfo = (const lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__2_value;
static const lean_ctor_object l_Lean_Parser_instInhabitedParser_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__2_value),((lean_object*)&l_Lean_Parser_instInhabitedParserFn___closed__0_value)}};
static const lean_object* l_Lean_Parser_instInhabitedParser_default___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedParser_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedParser_default = (const lean_object*)&l_Lean_Parser_instInhabitedParser_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedParser = (const lean_object*)&l_Lean_Parser_instInhabitedParser_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_withFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContextFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withStackDrop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCacheFn___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCacheFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptUncacheableContextFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptUncacheableContextFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCacheFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "withCache"};
static const lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(25, 241, 193, 7, 69, 147, 159, 180)}};
static const lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 541, .m_capacity = 541, .m_length = 540, .m_data = "Run `p` and record result in parser cache for any further invocation with this `parserName`, parser context, and parser state.\n`p` cannot access syntax stack elements pushed before the invocation in order to make caching independent of parser history.\nAs this excludes trailing parsers from being cached, we also reset `lhsPrec`, which is not read but set by leading parsers, to 0\nin order to increase cache hits. Finally, `errorMsg` is also reset to `none` as a leading parser should not be called in the first\nplace if there was an error."};
static const lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___boxed(lean_object*);
static const lean_array_object l_Lean_Parser_ParserFn_run___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_ParserFn_run___closed__0 = (const lean_object*)&l_Lean_Parser_ParserFn_run___closed__0_value;
static const lean_ctor_object l_Lean_Parser_ParserFn_run___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_ParserFn_run___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_ParserFn_run___closed__1 = (const lean_object*)&l_Lean_Parser_ParserFn_run___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserFn_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAtom(lean_object* v_info_1_, lean_object* v_val_2_){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3_, 0, v_info_1_);
lean_ctor_set(v___x_3_, 1, v_val_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkIdent(lean_object* v_info_4_, lean_object* v_rawVal_5_, lean_object* v_val_6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_box(0);
v___x_8_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_8_, 0, v_info_4_);
lean_ctor_set(v___x_8_, 1, v_rawVal_5_);
lean_ctor_set(v___x_8_, 2, v_val_6_);
lean_ctor_set(v___x_8_, 3, v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT uint32_t l_Lean_Parser_getNext(lean_object* v_input_9_, lean_object* v_pos_10_){
_start:
{
lean_object* v___x_11_; uint32_t v___x_12_; 
v___x_11_ = lean_string_utf8_next(v_input_9_, v_pos_10_);
v___x_12_ = lean_string_utf8_get(v_input_9_, v___x_11_);
lean_dec(v___x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getNext___boxed(lean_object* v_input_13_, lean_object* v_pos_14_){
_start:
{
uint32_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l_Lean_Parser_getNext(v_input_13_, v_pos_14_);
lean_dec(v_pos_14_);
lean_dec_ref(v_input_13_);
v_r_16_ = lean_box_uint32(v_res_15_);
return v_r_16_;
}
}
static lean_object* _init_l_Lean_Parser_maxPrec(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_unsigned_to_nat(1024u);
return v___x_17_;
}
}
static lean_object* _init_l_Lean_Parser_argPrec(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_unsigned_to_nat(1023u);
return v___x_18_;
}
}
static lean_object* _init_l_Lean_Parser_leadPrec(void){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = lean_unsigned_to_nat(1022u);
return v___x_19_;
}
}
static lean_object* _init_l_Lean_Parser_minPrec(void){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_unsigned_to_nat(10u);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_21_, lean_object* v_x_22_, lean_object* v_x_23_, lean_object* v_x_24_){
_start:
{
lean_object* v_ks_25_; lean_object* v_vs_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_50_; 
v_ks_25_ = lean_ctor_get(v_x_21_, 0);
v_vs_26_ = lean_ctor_get(v_x_21_, 1);
v_isSharedCheck_50_ = !lean_is_exclusive(v_x_21_);
if (v_isSharedCheck_50_ == 0)
{
v___x_28_ = v_x_21_;
v_isShared_29_ = v_isSharedCheck_50_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_vs_26_);
lean_inc(v_ks_25_);
lean_dec(v_x_21_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_50_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_30_ = lean_array_get_size(v_ks_25_);
v___x_31_ = lean_nat_dec_lt(v_x_22_, v___x_30_);
if (v___x_31_ == 0)
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_35_; 
lean_dec(v_x_22_);
v___x_32_ = lean_array_push(v_ks_25_, v_x_23_);
v___x_33_ = lean_array_push(v_vs_26_, v_x_24_);
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 1, v___x_33_);
lean_ctor_set(v___x_28_, 0, v___x_32_);
v___x_35_ = v___x_28_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v___x_32_);
lean_ctor_set(v_reuseFailAlloc_36_, 1, v___x_33_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
else
{
lean_object* v_k_x27_37_; uint8_t v___x_38_; 
v_k_x27_37_ = lean_array_fget_borrowed(v_ks_25_, v_x_22_);
v___x_38_ = lean_name_eq(v_x_23_, v_k_x27_37_);
if (v___x_38_ == 0)
{
lean_object* v___x_40_; 
if (v_isShared_29_ == 0)
{
v___x_40_ = v___x_28_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_ks_25_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v_vs_26_);
v___x_40_ = v_reuseFailAlloc_44_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_unsigned_to_nat(1u);
v___x_42_ = lean_nat_add(v_x_22_, v___x_41_);
lean_dec(v_x_22_);
v_x_21_ = v___x_40_;
v_x_22_ = v___x_42_;
goto _start;
}
}
else
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_48_; 
v___x_45_ = lean_array_fset(v_ks_25_, v_x_22_, v_x_23_);
v___x_46_ = lean_array_fset(v_vs_26_, v_x_22_, v_x_24_);
lean_dec(v_x_22_);
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 1, v___x_46_);
lean_ctor_set(v___x_28_, 0, v___x_45_);
v___x_48_ = v___x_28_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v___x_45_);
lean_ctor_set(v_reuseFailAlloc_49_, 1, v___x_46_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1___redArg(lean_object* v_n_51_, lean_object* v_k_52_, lean_object* v_v_53_){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_unsigned_to_nat(0u);
v___x_55_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_n_51_, v___x_54_, v_k_52_, v_v_53_);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(lean_object* v_x_57_, size_t v_x_58_, size_t v_x_59_, lean_object* v_x_60_, lean_object* v_x_61_){
_start:
{
if (lean_obj_tag(v_x_57_) == 0)
{
lean_object* v_es_62_; size_t v___x_63_; size_t v___x_64_; lean_object* v_j_65_; lean_object* v___x_66_; uint8_t v___x_67_; 
v_es_62_ = lean_ctor_get(v_x_57_, 0);
v___x_63_ = ((size_t)31ULL);
v___x_64_ = lean_usize_land(v_x_58_, v___x_63_);
v_j_65_ = lean_usize_to_nat(v___x_64_);
v___x_66_ = lean_array_get_size(v_es_62_);
v___x_67_ = lean_nat_dec_lt(v_j_65_, v___x_66_);
if (v___x_67_ == 0)
{
lean_dec(v_j_65_);
lean_dec(v_x_61_);
lean_dec(v_x_60_);
return v_x_57_;
}
else
{
lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_106_; 
lean_inc_ref(v_es_62_);
v_isSharedCheck_106_ = !lean_is_exclusive(v_x_57_);
if (v_isSharedCheck_106_ == 0)
{
lean_object* v_unused_107_; 
v_unused_107_ = lean_ctor_get(v_x_57_, 0);
lean_dec(v_unused_107_);
v___x_69_ = v_x_57_;
v_isShared_70_ = v_isSharedCheck_106_;
goto v_resetjp_68_;
}
else
{
lean_dec(v_x_57_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_106_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
lean_object* v_v_71_; lean_object* v___x_72_; lean_object* v_xs_x27_73_; lean_object* v___y_75_; 
v_v_71_ = lean_array_fget(v_es_62_, v_j_65_);
v___x_72_ = lean_box(0);
v_xs_x27_73_ = lean_array_fset(v_es_62_, v_j_65_, v___x_72_);
switch(lean_obj_tag(v_v_71_))
{
case 0:
{
lean_object* v_key_80_; lean_object* v_val_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_91_; 
v_key_80_ = lean_ctor_get(v_v_71_, 0);
v_val_81_ = lean_ctor_get(v_v_71_, 1);
v_isSharedCheck_91_ = !lean_is_exclusive(v_v_71_);
if (v_isSharedCheck_91_ == 0)
{
v___x_83_ = v_v_71_;
v_isShared_84_ = v_isSharedCheck_91_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_val_81_);
lean_inc(v_key_80_);
lean_dec(v_v_71_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_91_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
uint8_t v___x_85_; 
v___x_85_ = lean_name_eq(v_x_60_, v_key_80_);
if (v___x_85_ == 0)
{
lean_object* v___x_86_; lean_object* v___x_87_; 
lean_del_object(v___x_83_);
v___x_86_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_80_, v_val_81_, v_x_60_, v_x_61_);
v___x_87_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
v___y_75_ = v___x_87_;
goto v___jp_74_;
}
else
{
lean_object* v___x_89_; 
lean_dec(v_val_81_);
lean_dec(v_key_80_);
if (v_isShared_84_ == 0)
{
lean_ctor_set(v___x_83_, 1, v_x_61_);
lean_ctor_set(v___x_83_, 0, v_x_60_);
v___x_89_ = v___x_83_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v_x_60_);
lean_ctor_set(v_reuseFailAlloc_90_, 1, v_x_61_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
v___y_75_ = v___x_89_;
goto v___jp_74_;
}
}
}
}
case 1:
{
lean_object* v_node_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_104_; 
v_node_92_ = lean_ctor_get(v_v_71_, 0);
v_isSharedCheck_104_ = !lean_is_exclusive(v_v_71_);
if (v_isSharedCheck_104_ == 0)
{
v___x_94_ = v_v_71_;
v_isShared_95_ = v_isSharedCheck_104_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_node_92_);
lean_dec(v_v_71_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_104_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
size_t v___x_96_; size_t v___x_97_; size_t v___x_98_; size_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_102_; 
v___x_96_ = ((size_t)5ULL);
v___x_97_ = lean_usize_shift_right(v_x_58_, v___x_96_);
v___x_98_ = ((size_t)1ULL);
v___x_99_ = lean_usize_add(v_x_59_, v___x_98_);
v___x_100_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(v_node_92_, v___x_97_, v___x_99_, v_x_60_, v_x_61_);
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 0, v___x_100_);
v___x_102_ = v___x_94_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_100_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
v___y_75_ = v___x_102_;
goto v___jp_74_;
}
}
}
default: 
{
lean_object* v___x_105_; 
v___x_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_105_, 0, v_x_60_);
lean_ctor_set(v___x_105_, 1, v_x_61_);
v___y_75_ = v___x_105_;
goto v___jp_74_;
}
}
v___jp_74_:
{
lean_object* v___x_76_; lean_object* v___x_78_; 
v___x_76_ = lean_array_fset(v_xs_x27_73_, v_j_65_, v___y_75_);
lean_dec(v_j_65_);
if (v_isShared_70_ == 0)
{
lean_ctor_set(v___x_69_, 0, v___x_76_);
v___x_78_ = v___x_69_;
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
}
else
{
lean_object* v_ks_108_; lean_object* v_vs_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_127_; 
v_ks_108_ = lean_ctor_get(v_x_57_, 0);
v_vs_109_ = lean_ctor_get(v_x_57_, 1);
v_isSharedCheck_127_ = !lean_is_exclusive(v_x_57_);
if (v_isSharedCheck_127_ == 0)
{
v___x_111_ = v_x_57_;
v_isShared_112_ = v_isSharedCheck_127_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_vs_109_);
lean_inc(v_ks_108_);
lean_dec(v_x_57_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_127_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_114_; 
if (v_isShared_112_ == 0)
{
v___x_114_ = v___x_111_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_ks_108_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v_vs_109_);
v___x_114_ = v_reuseFailAlloc_126_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
lean_object* v_newNode_115_; size_t v___x_116_; uint8_t v___x_117_; 
v_newNode_115_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1___redArg(v___x_114_, v_x_60_, v_x_61_);
v___x_116_ = ((size_t)7ULL);
v___x_117_ = lean_usize_dec_le(v___x_116_, v_x_59_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_118_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_115_);
v___x_119_ = lean_unsigned_to_nat(4u);
v___x_120_ = lean_nat_dec_lt(v___x_118_, v___x_119_);
lean_dec(v___x_118_);
if (v___x_120_ == 0)
{
lean_object* v_ks_121_; lean_object* v_vs_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v_ks_121_ = lean_ctor_get(v_newNode_115_, 0);
lean_inc_ref(v_ks_121_);
v_vs_122_ = lean_ctor_get(v_newNode_115_, 1);
lean_inc_ref(v_vs_122_);
lean_dec_ref(v_newNode_115_);
v___x_123_ = lean_unsigned_to_nat(0u);
v___x_124_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___closed__0);
v___x_125_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg(v_x_59_, v_ks_121_, v_vs_122_, v___x_123_, v___x_124_);
lean_dec_ref(v_vs_122_);
lean_dec_ref(v_ks_121_);
return v___x_125_;
}
else
{
return v_newNode_115_;
}
}
else
{
return v_newNode_115_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg(size_t v_depth_128_, lean_object* v_keys_129_, lean_object* v_vals_130_, lean_object* v_i_131_, lean_object* v_entries_132_){
_start:
{
lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_133_ = lean_array_get_size(v_keys_129_);
v___x_134_ = lean_nat_dec_lt(v_i_131_, v___x_133_);
if (v___x_134_ == 0)
{
lean_dec(v_i_131_);
return v_entries_132_;
}
else
{
lean_object* v_k_135_; lean_object* v_v_136_; uint64_t v___y_138_; 
v_k_135_ = lean_array_fget_borrowed(v_keys_129_, v_i_131_);
v_v_136_ = lean_array_fget_borrowed(v_vals_130_, v_i_131_);
if (lean_obj_tag(v_k_135_) == 0)
{
uint64_t v___x_149_; 
v___x_149_ = 1723ULL;
v___y_138_ = v___x_149_;
goto v___jp_137_;
}
else
{
uint64_t v_hash_150_; 
v_hash_150_ = lean_ctor_get_uint64(v_k_135_, sizeof(void*)*2);
v___y_138_ = v_hash_150_;
goto v___jp_137_;
}
v___jp_137_:
{
size_t v_h_139_; size_t v___x_140_; lean_object* v___x_141_; size_t v___x_142_; size_t v___x_143_; size_t v___x_144_; size_t v_h_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v_h_139_ = lean_uint64_to_usize(v___y_138_);
v___x_140_ = ((size_t)5ULL);
v___x_141_ = lean_unsigned_to_nat(1u);
v___x_142_ = ((size_t)1ULL);
v___x_143_ = lean_usize_sub(v_depth_128_, v___x_142_);
v___x_144_ = lean_usize_mul(v___x_140_, v___x_143_);
v_h_145_ = lean_usize_shift_right(v_h_139_, v___x_144_);
v___x_146_ = lean_nat_add(v_i_131_, v___x_141_);
lean_dec(v_i_131_);
lean_inc(v_v_136_);
lean_inc(v_k_135_);
v___x_147_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(v_entries_132_, v_h_145_, v_depth_128_, v_k_135_, v_v_136_);
v_i_131_ = v___x_146_;
v_entries_132_ = v___x_147_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_151_, lean_object* v_keys_152_, lean_object* v_vals_153_, lean_object* v_i_154_, lean_object* v_entries_155_){
_start:
{
size_t v_depth_boxed_156_; lean_object* v_res_157_; 
v_depth_boxed_156_ = lean_unbox_usize(v_depth_151_);
lean_dec(v_depth_151_);
v_res_157_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg(v_depth_boxed_156_, v_keys_152_, v_vals_153_, v_i_154_, v_entries_155_);
lean_dec_ref(v_vals_153_);
lean_dec_ref(v_keys_152_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___boxed(lean_object* v_x_158_, lean_object* v_x_159_, lean_object* v_x_160_, lean_object* v_x_161_, lean_object* v_x_162_){
_start:
{
size_t v_x_358__boxed_163_; size_t v_x_359__boxed_164_; lean_object* v_res_165_; 
v_x_358__boxed_163_ = lean_unbox_usize(v_x_159_);
lean_dec(v_x_159_);
v_x_359__boxed_164_ = lean_unbox_usize(v_x_160_);
lean_dec(v_x_160_);
v_res_165_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(v_x_158_, v_x_358__boxed_163_, v_x_359__boxed_164_, v_x_161_, v_x_162_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0___redArg(lean_object* v_x_166_, lean_object* v_x_167_, lean_object* v_x_168_){
_start:
{
uint64_t v___y_170_; 
if (lean_obj_tag(v_x_167_) == 0)
{
uint64_t v___x_174_; 
v___x_174_ = 1723ULL;
v___y_170_ = v___x_174_;
goto v___jp_169_;
}
else
{
uint64_t v_hash_175_; 
v_hash_175_ = lean_ctor_get_uint64(v_x_167_, sizeof(void*)*2);
v___y_170_ = v_hash_175_;
goto v___jp_169_;
}
v___jp_169_:
{
size_t v___x_171_; size_t v___x_172_; lean_object* v___x_173_; 
v___x_171_ = lean_uint64_to_usize(v___y_170_);
v___x_172_ = ((size_t)1ULL);
v___x_173_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(v_x_166_, v___x_171_, v___x_172_, v_x_167_, v_x_168_);
return v___x_173_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxNodeKindSet_insert(lean_object* v_s_176_, lean_object* v_k_177_){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = lean_box(0);
v___x_179_ = l_Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0___redArg(v_s_176_, v_k_177_, v___x_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0(lean_object* v_00_u03b2_180_, lean_object* v_x_181_, lean_object* v_x_182_, lean_object* v_x_183_){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = l_Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0___redArg(v_x_181_, v_x_182_, v_x_183_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0(lean_object* v_00_u03b2_185_, lean_object* v_x_186_, size_t v_x_187_, size_t v_x_188_, lean_object* v_x_189_, lean_object* v_x_190_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(v_x_186_, v_x_187_, v_x_188_, v_x_189_, v_x_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___boxed(lean_object* v_00_u03b2_192_, lean_object* v_x_193_, lean_object* v_x_194_, lean_object* v_x_195_, lean_object* v_x_196_, lean_object* v_x_197_){
_start:
{
size_t v_x_542__boxed_198_; size_t v_x_543__boxed_199_; lean_object* v_res_200_; 
v_x_542__boxed_198_ = lean_unbox_usize(v_x_194_);
lean_dec(v_x_194_);
v_x_543__boxed_199_ = lean_unbox_usize(v_x_195_);
lean_dec(v_x_195_);
v_res_200_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0(v_00_u03b2_192_, v_x_193_, v_x_542__boxed_198_, v_x_543__boxed_199_, v_x_196_, v_x_197_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_201_, lean_object* v_n_202_, lean_object* v_k_203_, lean_object* v_v_204_){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1___redArg(v_n_202_, v_k_203_, v_v_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_206_, size_t v_depth_207_, lean_object* v_keys_208_, lean_object* v_vals_209_, lean_object* v_heq_210_, lean_object* v_i_211_, lean_object* v_entries_212_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg(v_depth_207_, v_keys_208_, v_vals_209_, v_i_211_, v_entries_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_214_, lean_object* v_depth_215_, lean_object* v_keys_216_, lean_object* v_vals_217_, lean_object* v_heq_218_, lean_object* v_i_219_, lean_object* v_entries_220_){
_start:
{
size_t v_depth_boxed_221_; lean_object* v_res_222_; 
v_depth_boxed_221_ = lean_unbox_usize(v_depth_215_);
lean_dec(v_depth_215_);
v_res_222_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2(v_00_u03b2_214_, v_depth_boxed_221_, v_keys_216_, v_vals_217_, v_heq_218_, v_i_219_, v_entries_220_);
lean_dec_ref(v_vals_217_);
lean_dec_ref(v_keys_216_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_223_, lean_object* v_x_224_, lean_object* v_x_225_, lean_object* v_x_226_, lean_object* v_x_227_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_x_224_, v_x_225_, v_x_226_, v_x_227_);
return v___x_228_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__12(void){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_255_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__10));
v___x_256_ = l_Lean_mkAtom(v___x_255_);
return v___x_256_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__13(void){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_257_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__12, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__12_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__12);
v___x_258_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5));
v___x_259_ = lean_array_push(v___x_258_, v___x_257_);
return v___x_259_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__17(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_270_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16));
v___x_271_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5));
v___x_272_ = lean_array_push(v___x_271_, v___x_270_);
return v___x_272_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__18(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_273_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__17, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__17_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__17);
v___x_274_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15));
v___x_275_ = lean_box(2);
v___x_276_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
lean_ctor_set(v___x_276_, 1, v___x_274_);
lean_ctor_set(v___x_276_, 2, v___x_273_);
return v___x_276_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__19(void){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_277_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__18, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__18_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__18);
v___x_278_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__13, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__13_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__13);
v___x_279_ = lean_array_push(v___x_278_, v___x_277_);
return v___x_279_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__20(void){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_280_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16));
v___x_281_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__19, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__19_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__19);
v___x_282_ = lean_array_push(v___x_281_, v___x_280_);
return v___x_282_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__21(void){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_283_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16));
v___x_284_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__20, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__20_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__20);
v___x_285_ = lean_array_push(v___x_284_, v___x_283_);
return v___x_285_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__22(void){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_286_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16));
v___x_287_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__21, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__21_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__21);
v___x_288_ = lean_array_push(v___x_287_, v___x_286_);
return v___x_288_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__23(void){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_289_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16));
v___x_290_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__22, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__22_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__22);
v___x_291_ = lean_array_push(v___x_290_, v___x_289_);
return v___x_291_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__24(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_292_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__23, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__23_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__23);
v___x_293_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11));
v___x_294_ = lean_box(2);
v___x_295_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
lean_ctor_set(v___x_295_, 1, v___x_293_);
lean_ctor_set(v___x_295_, 2, v___x_292_);
return v___x_295_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__25(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_296_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__24, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__24_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__24);
v___x_297_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5));
v___x_298_ = lean_array_push(v___x_297_, v___x_296_);
return v___x_298_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__26(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_299_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__25, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__25_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__25);
v___x_300_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__9));
v___x_301_ = lean_box(2);
v___x_302_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_302_, 0, v___x_301_);
lean_ctor_set(v___x_302_, 1, v___x_300_);
lean_ctor_set(v___x_302_, 2, v___x_299_);
return v___x_302_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__27(void){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_303_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__26, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__26_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__26);
v___x_304_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5));
v___x_305_ = lean_array_push(v___x_304_, v___x_303_);
return v___x_305_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__28(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_306_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__27, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__27_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__27);
v___x_307_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7));
v___x_308_ = lean_box(2);
v___x_309_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
lean_ctor_set(v___x_309_, 1, v___x_307_);
lean_ctor_set(v___x_309_, 2, v___x_306_);
return v___x_309_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__29(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_310_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__28, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__28_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__28);
v___x_311_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5));
v___x_312_ = lean_array_push(v___x_311_, v___x_310_);
return v___x_312_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_313_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__29, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__29_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__29);
v___x_314_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4));
v___x_315_ = lean_box(2);
v___x_316_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
lean_ctor_set(v___x_316_, 1, v___x_314_);
lean_ctor_set(v___x_316_, 2, v___x_313_);
return v___x_316_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam(void){
_start:
{
lean_object* v___x_317_; 
v___x_317_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30);
return v___x_317_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedInputContext___closed__1(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_319_ = lean_unsigned_to_nat(0u);
v___x_320_ = l_Lean_instInhabitedFileMap_default;
v___x_321_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_322_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_322_, 0, v___x_321_);
lean_ctor_set(v___x_322_, 1, v___x_321_);
lean_ctor_set(v___x_322_, 2, v___x_320_);
lean_ctor_set(v___x_322_, 3, v___x_319_);
return v___x_322_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedInputContext(void){
_start:
{
lean_object* v___x_323_; 
v___x_323_ = lean_obj_once(&l_Lean_Parser_instInhabitedInputContext___closed__1, &l_Lean_Parser_instInhabitedInputContext___closed__1_once, _init_l_Lean_Parser_instInhabitedInputContext___closed__1);
return v___x_323_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_mk___auto__1(void){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_mk___redArg(lean_object* v_input_325_, lean_object* v_fileName_326_, lean_object* v_endPos_327_, lean_object* v_fileMap_328_){
_start:
{
lean_object* v___x_329_; 
v___x_329_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_329_, 0, v_input_325_);
lean_ctor_set(v___x_329_, 1, v_fileName_326_);
lean_ctor_set(v___x_329_, 2, v_fileMap_328_);
lean_ctor_set(v___x_329_, 3, v_endPos_327_);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_mk(lean_object* v_input_330_, lean_object* v_fileName_331_, lean_object* v_endPos_332_, lean_object* v_endPos__valid_333_, lean_object* v_fileMap_334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_335_, 0, v_input_330_);
lean_ctor_set(v___x_335_, 1, v_fileName_331_);
lean_ctor_set(v___x_335_, 2, v_fileMap_334_);
lean_ctor_set(v___x_335_, 3, v_endPos_332_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_input(lean_object* v_c_336_){
_start:
{
lean_object* v_inputString_337_; lean_object* v_endPos_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v_inputString_337_ = lean_ctor_get(v_c_336_, 0);
v_endPos_338_ = lean_ctor_get(v_c_336_, 3);
v___x_339_ = lean_unsigned_to_nat(0u);
v___x_340_ = lean_string_utf8_extract(v_inputString_337_, v___x_339_, v_endPos_338_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_input___boxed(lean_object* v_c_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Lean_Parser_InputContext_input(v_c_341_);
lean_dec_ref(v_c_341_);
return v_res_342_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_InputContext_atEnd(lean_object* v_c_343_, lean_object* v_p_344_){
_start:
{
lean_object* v_endPos_345_; uint8_t v___x_346_; 
v_endPos_345_ = lean_ctor_get(v_c_343_, 3);
v___x_346_ = lean_nat_dec_le(v_endPos_345_, v_p_344_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_atEnd___boxed(lean_object* v_c_347_, lean_object* v_p_348_){
_start:
{
uint8_t v_res_349_; lean_object* v_r_350_; 
v_res_349_ = l_Lean_Parser_InputContext_atEnd(v_c_347_, v_p_348_);
lean_dec(v_p_348_);
lean_dec_ref(v_c_347_);
v_r_350_ = lean_box(v_res_349_);
return v_r_350_;
}
}
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_get(lean_object* v_c_351_, lean_object* v_p_352_){
_start:
{
lean_object* v_inputString_353_; uint32_t v___x_354_; 
v_inputString_353_ = lean_ctor_get(v_c_351_, 0);
v___x_354_ = lean_string_utf8_get(v_inputString_353_, v_p_352_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_get___boxed(lean_object* v_c_355_, lean_object* v_p_356_){
_start:
{
uint32_t v_res_357_; lean_object* v_r_358_; 
v_res_357_ = l_Lean_Parser_InputContext_get(v_c_355_, v_p_356_);
lean_dec(v_p_356_);
lean_dec_ref(v_c_355_);
v_r_358_ = lean_box_uint32(v_res_357_);
return v_r_358_;
}
}
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_get_x27___redArg(lean_object* v_c_359_, lean_object* v_p_360_){
_start:
{
lean_object* v_inputString_361_; uint32_t v___x_362_; 
v_inputString_361_ = lean_ctor_get(v_c_359_, 0);
v___x_362_ = lean_string_utf8_get_fast(v_inputString_361_, v_p_360_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_get_x27___redArg___boxed(lean_object* v_c_363_, lean_object* v_p_364_){
_start:
{
uint32_t v_res_365_; lean_object* v_r_366_; 
v_res_365_ = l_Lean_Parser_InputContext_get_x27___redArg(v_c_363_, v_p_364_);
lean_dec(v_p_364_);
lean_dec_ref(v_c_363_);
v_r_366_ = lean_box_uint32(v_res_365_);
return v_r_366_;
}
}
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_get_x27(lean_object* v_c_367_, lean_object* v_p_368_, lean_object* v_h_369_){
_start:
{
lean_object* v_inputString_370_; uint32_t v___x_371_; 
v_inputString_370_ = lean_ctor_get(v_c_367_, 0);
v___x_371_ = lean_string_utf8_get_fast(v_inputString_370_, v_p_368_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_get_x27___boxed(lean_object* v_c_372_, lean_object* v_p_373_, lean_object* v_h_374_){
_start:
{
uint32_t v_res_375_; lean_object* v_r_376_; 
v_res_375_ = l_Lean_Parser_InputContext_get_x27(v_c_372_, v_p_373_, v_h_374_);
lean_dec(v_p_373_);
lean_dec_ref(v_c_372_);
v_r_376_ = lean_box_uint32(v_res_375_);
return v_r_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next(lean_object* v_c_377_, lean_object* v_p_378_){
_start:
{
lean_object* v_inputString_379_; lean_object* v___x_380_; 
v_inputString_379_ = lean_ctor_get(v_c_377_, 0);
v___x_380_ = lean_string_utf8_next(v_inputString_379_, v_p_378_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next___boxed(lean_object* v_c_381_, lean_object* v_p_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lean_Parser_InputContext_next(v_c_381_, v_p_382_);
lean_dec(v_p_382_);
lean_dec_ref(v_c_381_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27___redArg(lean_object* v_c_384_, lean_object* v_p_385_){
_start:
{
lean_object* v_inputString_386_; lean_object* v___x_387_; 
v_inputString_386_ = lean_ctor_get(v_c_384_, 0);
v___x_387_ = lean_string_utf8_next_fast(v_inputString_386_, v_p_385_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27___redArg___boxed(lean_object* v_c_388_, lean_object* v_p_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l_Lean_Parser_InputContext_next_x27___redArg(v_c_388_, v_p_389_);
lean_dec(v_p_389_);
lean_dec_ref(v_c_388_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27(lean_object* v_c_391_, lean_object* v_p_392_, lean_object* v_h_393_){
_start:
{
lean_object* v_inputString_394_; lean_object* v___x_395_; 
v_inputString_394_ = lean_ctor_get(v_c_391_, 0);
v___x_395_ = lean_string_utf8_next_fast(v_inputString_394_, v_p_392_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27___boxed(lean_object* v_c_396_, lean_object* v_p_397_, lean_object* v_h_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Lean_Parser_InputContext_next_x27(v_c_396_, v_p_397_, v_h_398_);
lean_dec(v_p_397_);
lean_dec_ref(v_c_396_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_extract(lean_object* v_c_400_, lean_object* v_a_401_, lean_object* v_a_402_){
_start:
{
lean_object* v_inputString_403_; lean_object* v___x_404_; 
v_inputString_403_ = lean_ctor_get(v_c_400_, 0);
v___x_404_ = lean_string_utf8_extract(v_inputString_403_, v_a_401_, v_a_402_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_extract___boxed(lean_object* v_c_405_, lean_object* v_a_406_, lean_object* v_a_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Lean_Parser_InputContext_extract(v_c_405_, v_a_406_, v_a_407_);
lean_dec(v_a_407_);
lean_dec(v_a_406_);
lean_dec_ref(v_c_405_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_substring(lean_object* v_c_409_, lean_object* v_startPos_410_, lean_object* v_stopPos_411_){
_start:
{
lean_object* v_inputString_412_; lean_object* v_endPos_413_; uint8_t v___x_414_; 
v_inputString_412_ = lean_ctor_get(v_c_409_, 0);
v_endPos_413_ = lean_ctor_get(v_c_409_, 3);
v___x_414_ = lean_nat_dec_le(v_stopPos_411_, v_endPos_413_);
if (v___x_414_ == 0)
{
lean_object* v___x_415_; 
lean_dec(v_stopPos_411_);
lean_inc(v_endPos_413_);
lean_inc_ref(v_inputString_412_);
v___x_415_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_415_, 0, v_inputString_412_);
lean_ctor_set(v___x_415_, 1, v_startPos_410_);
lean_ctor_set(v___x_415_, 2, v_endPos_413_);
return v___x_415_;
}
else
{
lean_object* v___x_416_; 
lean_inc_ref(v_inputString_412_);
v___x_416_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_416_, 0, v_inputString_412_);
lean_ctor_set(v___x_416_, 1, v_startPos_410_);
lean_ctor_set(v___x_416_, 2, v_stopPos_411_);
return v___x_416_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_substring___boxed(lean_object* v_c_417_, lean_object* v_startPos_418_, lean_object* v_stopPos_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Lean_Parser_InputContext_substring(v_c_417_, v_startPos_418_, v_stopPos_419_);
lean_dec_ref(v_c_417_);
return v_res_420_;
}
}
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_getNext(lean_object* v_input_421_, lean_object* v_pos_422_){
_start:
{
lean_object* v_inputString_423_; lean_object* v___x_424_; uint32_t v___x_425_; 
v_inputString_423_ = lean_ctor_get(v_input_421_, 0);
v___x_424_ = lean_string_utf8_next(v_inputString_423_, v_pos_422_);
v___x_425_ = lean_string_utf8_get(v_inputString_423_, v___x_424_);
lean_dec(v___x_424_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_getNext___boxed(lean_object* v_input_426_, lean_object* v_pos_427_){
_start:
{
uint32_t v_res_428_; lean_object* v_r_429_; 
v_res_428_ = l_Lean_Parser_InputContext_getNext(v_input_426_, v_pos_427_);
lean_dec(v_pos_427_);
lean_dec_ref(v_input_426_);
v_r_429_ = lean_box_uint32(v_res_428_);
return v_r_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_prev(lean_object* v_c_430_, lean_object* v_pos_431_){
_start:
{
lean_object* v_inputString_432_; lean_object* v___x_433_; 
v_inputString_432_ = lean_ctor_get(v_c_430_, 0);
v___x_433_ = lean_string_utf8_prev(v_inputString_432_, v_pos_431_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_prev___boxed(lean_object* v_c_434_, lean_object* v_pos_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l_Lean_Parser_InputContext_prev(v_c_434_, v_pos_435_);
lean_dec(v_pos_435_);
lean_dec_ref(v_c_434_);
return v_res_436_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqCacheableParserContext_unsafe__2(lean_object* v_a_438_, lean_object* v_b_439_){
_start:
{
lean_object* v_forbiddenTks_440_; lean_object* v_forbiddenTks_441_; size_t v___x_442_; size_t v___x_443_; uint8_t v___x_444_; 
v_forbiddenTks_440_ = lean_ctor_get(v_a_438_, 3);
v_forbiddenTks_441_ = lean_ctor_get(v_b_439_, 3);
v___x_442_ = lean_ptr_addr(v_forbiddenTks_440_);
v___x_443_ = lean_ptr_addr(v_forbiddenTks_441_);
v___x_444_ = lean_usize_dec_eq(v___x_442_, v___x_443_);
if (v___x_444_ == 0)
{
lean_object* v___x_445_; lean_object* v___x_446_; uint8_t v___x_447_; 
v___x_445_ = lean_array_get_size(v_forbiddenTks_440_);
v___x_446_ = lean_array_get_size(v_forbiddenTks_441_);
v___x_447_ = lean_nat_dec_eq(v___x_445_, v___x_446_);
if (v___x_447_ == 0)
{
return v___x_447_;
}
else
{
lean_object* v___f_448_; uint8_t v___x_449_; 
v___f_448_ = ((lean_object*)(l_Lean_Parser_instBEqCacheableParserContext_unsafe__2___closed__0));
v___x_449_ = l_Array_isEqvAux___redArg(v_forbiddenTks_440_, v_forbiddenTks_441_, v___f_448_, v___x_445_);
return v___x_449_;
}
}
else
{
return v___x_444_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqCacheableParserContext_unsafe__2___boxed(lean_object* v_a_450_, lean_object* v_b_451_){
_start:
{
uint8_t v_res_452_; lean_object* v_r_453_; 
v_res_452_ = l_Lean_Parser_instBEqCacheableParserContext_unsafe__2(v_a_450_, v_b_451_);
lean_dec_ref(v_b_451_);
lean_dec_ref(v_a_450_);
v_r_453_ = lean_box(v_res_452_);
return v_r_453_;
}
}
static lean_object* _init_l_Lean_Parser_instBEqCacheableParserContext___lam__0___closed__0(void){
_start:
{
lean_object* v___x_454_; lean_object* v___f_455_; 
v___x_454_ = lean_alloc_closure((void*)(l_instDecidableEqRaw___boxed), 2, 0);
v___f_455_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_455_, 0, v___x_454_);
return v___f_455_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqCacheableParserContext___lam__0(lean_object* v___f_456_, lean_object* v_a_457_, lean_object* v_b_458_){
_start:
{
lean_object* v_prec_459_; lean_object* v_quotDepth_460_; uint8_t v_suppressInsideQuot_461_; lean_object* v_savedPos_x3f_462_; lean_object* v_forbiddenTks_463_; lean_object* v_prec_464_; lean_object* v_quotDepth_465_; uint8_t v_suppressInsideQuot_466_; lean_object* v_savedPos_x3f_467_; lean_object* v_forbiddenTks_468_; uint8_t v___x_479_; 
v_prec_459_ = lean_ctor_get(v_a_457_, 0);
lean_inc(v_prec_459_);
v_quotDepth_460_ = lean_ctor_get(v_a_457_, 1);
lean_inc(v_quotDepth_460_);
v_suppressInsideQuot_461_ = lean_ctor_get_uint8(v_a_457_, sizeof(void*)*4);
v_savedPos_x3f_462_ = lean_ctor_get(v_a_457_, 2);
lean_inc(v_savedPos_x3f_462_);
v_forbiddenTks_463_ = lean_ctor_get(v_a_457_, 3);
lean_inc_ref(v_forbiddenTks_463_);
lean_dec_ref(v_a_457_);
v_prec_464_ = lean_ctor_get(v_b_458_, 0);
lean_inc(v_prec_464_);
v_quotDepth_465_ = lean_ctor_get(v_b_458_, 1);
lean_inc(v_quotDepth_465_);
v_suppressInsideQuot_466_ = lean_ctor_get_uint8(v_b_458_, sizeof(void*)*4);
v_savedPos_x3f_467_ = lean_ctor_get(v_b_458_, 2);
lean_inc(v_savedPos_x3f_467_);
v_forbiddenTks_468_ = lean_ctor_get(v_b_458_, 3);
lean_inc_ref(v_forbiddenTks_468_);
lean_dec_ref(v_b_458_);
v___x_479_ = lean_nat_dec_eq(v_prec_459_, v_prec_464_);
lean_dec(v_prec_464_);
lean_dec(v_prec_459_);
if (v___x_479_ == 0)
{
lean_dec_ref(v_forbiddenTks_468_);
lean_dec(v_savedPos_x3f_467_);
lean_dec(v_quotDepth_465_);
lean_dec_ref(v_forbiddenTks_463_);
lean_dec(v_savedPos_x3f_462_);
lean_dec(v_quotDepth_460_);
lean_dec_ref(v___f_456_);
return v___x_479_;
}
else
{
uint8_t v___x_480_; 
v___x_480_ = lean_nat_dec_eq(v_quotDepth_460_, v_quotDepth_465_);
lean_dec(v_quotDepth_465_);
lean_dec(v_quotDepth_460_);
if (v___x_480_ == 0)
{
lean_dec_ref(v_forbiddenTks_468_);
lean_dec(v_savedPos_x3f_467_);
lean_dec_ref(v_forbiddenTks_463_);
lean_dec(v_savedPos_x3f_462_);
lean_dec_ref(v___f_456_);
return v___x_480_;
}
else
{
if (v_suppressInsideQuot_466_ == 0)
{
if (v_suppressInsideQuot_461_ == 0)
{
goto v___jp_469_;
}
else
{
lean_dec_ref(v_forbiddenTks_468_);
lean_dec(v_savedPos_x3f_467_);
lean_dec_ref(v_forbiddenTks_463_);
lean_dec(v_savedPos_x3f_462_);
lean_dec_ref(v___f_456_);
return v_suppressInsideQuot_466_;
}
}
else
{
if (v_suppressInsideQuot_461_ == 0)
{
lean_dec_ref(v_forbiddenTks_468_);
lean_dec(v_savedPos_x3f_467_);
lean_dec_ref(v_forbiddenTks_463_);
lean_dec(v_savedPos_x3f_462_);
lean_dec_ref(v___f_456_);
return v_suppressInsideQuot_461_;
}
else
{
goto v___jp_469_;
}
}
}
}
v___jp_469_:
{
lean_object* v___f_470_; uint8_t v___x_471_; 
v___f_470_ = lean_obj_once(&l_Lean_Parser_instBEqCacheableParserContext___lam__0___closed__0, &l_Lean_Parser_instBEqCacheableParserContext___lam__0___closed__0_once, _init_l_Lean_Parser_instBEqCacheableParserContext___lam__0___closed__0);
v___x_471_ = l_instBEqOption_beq___redArg(v___f_470_, v_savedPos_x3f_462_, v_savedPos_x3f_467_);
if (v___x_471_ == 0)
{
lean_dec_ref(v_forbiddenTks_468_);
lean_dec_ref(v_forbiddenTks_463_);
lean_dec_ref(v___f_456_);
return v___x_471_;
}
else
{
size_t v___x_472_; size_t v___x_473_; uint8_t v___x_474_; 
v___x_472_ = lean_ptr_addr(v_forbiddenTks_463_);
v___x_473_ = lean_ptr_addr(v_forbiddenTks_468_);
v___x_474_ = lean_usize_dec_eq(v___x_472_, v___x_473_);
if (v___x_474_ == 0)
{
lean_object* v___x_475_; lean_object* v___x_476_; uint8_t v___x_477_; 
v___x_475_ = lean_array_get_size(v_forbiddenTks_463_);
v___x_476_ = lean_array_get_size(v_forbiddenTks_468_);
v___x_477_ = lean_nat_dec_eq(v___x_475_, v___x_476_);
if (v___x_477_ == 0)
{
lean_dec_ref(v_forbiddenTks_468_);
lean_dec_ref(v_forbiddenTks_463_);
lean_dec_ref(v___f_456_);
return v___x_477_;
}
else
{
uint8_t v___x_478_; 
v___x_478_ = l_Array_isEqvAux___redArg(v_forbiddenTks_463_, v_forbiddenTks_468_, v___f_456_, v___x_475_);
lean_dec_ref(v_forbiddenTks_468_);
lean_dec_ref(v_forbiddenTks_463_);
return v___x_478_;
}
}
else
{
lean_dec_ref(v_forbiddenTks_468_);
lean_dec_ref(v_forbiddenTks_463_);
lean_dec_ref(v___f_456_);
return v___x_474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqCacheableParserContext___lam__0___boxed(lean_object* v___f_481_, lean_object* v_a_482_, lean_object* v_b_483_){
_start:
{
uint8_t v_res_484_; lean_object* v_r_485_; 
v_res_484_ = l_Lean_Parser_instBEqCacheableParserContext___lam__0(v___f_481_, v_a_482_, v_b_483_);
v_r_485_ = lean_box(v_res_484_);
return v_r_485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instCoeParserContextInputContext___lam__0(lean_object* v_x_489_){
_start:
{
lean_object* v_toInputContext_490_; 
v_toInputContext_490_ = lean_ctor_get(v_x_489_, 0);
lean_inc_ref(v_toInputContext_490_);
return v_toInputContext_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instCoeParserContextInputContext___lam__0___boxed(lean_object* v_x_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_Lean_Parser_instCoeParserContextInputContext___lam__0(v_x_491_);
lean_dec_ref(v_x_491_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_setEndPos___redArg(lean_object* v_c_495_, lean_object* v_endPos_496_){
_start:
{
lean_object* v_toInputContext_497_; lean_object* v_toParserModuleContext_498_; lean_object* v_toCacheableParserContext_499_; lean_object* v_tokens_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_518_; 
v_toInputContext_497_ = lean_ctor_get(v_c_495_, 0);
v_toParserModuleContext_498_ = lean_ctor_get(v_c_495_, 1);
v_toCacheableParserContext_499_ = lean_ctor_get(v_c_495_, 2);
v_tokens_500_ = lean_ctor_get(v_c_495_, 3);
v_isSharedCheck_518_ = !lean_is_exclusive(v_c_495_);
if (v_isSharedCheck_518_ == 0)
{
v___x_502_ = v_c_495_;
v_isShared_503_ = v_isSharedCheck_518_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_tokens_500_);
lean_inc(v_toCacheableParserContext_499_);
lean_inc(v_toParserModuleContext_498_);
lean_inc(v_toInputContext_497_);
lean_dec(v_c_495_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_518_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v_inputString_504_; lean_object* v_fileName_505_; lean_object* v_fileMap_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_516_; 
v_inputString_504_ = lean_ctor_get(v_toInputContext_497_, 0);
v_fileName_505_ = lean_ctor_get(v_toInputContext_497_, 1);
v_fileMap_506_ = lean_ctor_get(v_toInputContext_497_, 2);
v_isSharedCheck_516_ = !lean_is_exclusive(v_toInputContext_497_);
if (v_isSharedCheck_516_ == 0)
{
lean_object* v_unused_517_; 
v_unused_517_ = lean_ctor_get(v_toInputContext_497_, 3);
lean_dec(v_unused_517_);
v___x_508_ = v_toInputContext_497_;
v_isShared_509_ = v_isSharedCheck_516_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_fileMap_506_);
lean_inc(v_fileName_505_);
lean_inc(v_inputString_504_);
lean_dec(v_toInputContext_497_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_516_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_511_; 
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 3, v_endPos_496_);
v___x_511_ = v___x_508_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v_inputString_504_);
lean_ctor_set(v_reuseFailAlloc_515_, 1, v_fileName_505_);
lean_ctor_set(v_reuseFailAlloc_515_, 2, v_fileMap_506_);
lean_ctor_set(v_reuseFailAlloc_515_, 3, v_endPos_496_);
v___x_511_ = v_reuseFailAlloc_515_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
lean_object* v___x_513_; 
if (v_isShared_503_ == 0)
{
lean_ctor_set(v___x_502_, 0, v___x_511_);
v___x_513_ = v___x_502_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v___x_511_);
lean_ctor_set(v_reuseFailAlloc_514_, 1, v_toParserModuleContext_498_);
lean_ctor_set(v_reuseFailAlloc_514_, 2, v_toCacheableParserContext_499_);
lean_ctor_set(v_reuseFailAlloc_514_, 3, v_tokens_500_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_setEndPos(lean_object* v_c_519_, lean_object* v_endPos_520_, lean_object* v_endPos__valid_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = l_Lean_Parser_ParserContext_setEndPos___redArg(v_c_519_, v_endPos_520_);
return v___x_522_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0(lean_object* v_x_529_, lean_object* v_x_530_){
_start:
{
if (lean_obj_tag(v_x_529_) == 0)
{
if (lean_obj_tag(v_x_530_) == 0)
{
uint8_t v___x_531_; 
v___x_531_ = 1;
return v___x_531_;
}
else
{
uint8_t v___x_532_; 
v___x_532_ = 0;
return v___x_532_;
}
}
else
{
if (lean_obj_tag(v_x_530_) == 0)
{
uint8_t v___x_533_; 
v___x_533_ = 0;
return v___x_533_;
}
else
{
lean_object* v_head_534_; lean_object* v_tail_535_; lean_object* v_head_536_; lean_object* v_tail_537_; uint8_t v___x_538_; 
v_head_534_ = lean_ctor_get(v_x_529_, 0);
v_tail_535_ = lean_ctor_get(v_x_529_, 1);
v_head_536_ = lean_ctor_get(v_x_530_, 0);
v_tail_537_ = lean_ctor_get(v_x_530_, 1);
v___x_538_ = lean_string_dec_eq(v_head_534_, v_head_536_);
if (v___x_538_ == 0)
{
return v___x_538_;
}
else
{
v_x_529_ = v_tail_535_;
v_x_530_ = v_tail_537_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0___boxed(lean_object* v_x_540_, lean_object* v_x_541_){
_start:
{
uint8_t v_res_542_; lean_object* v_r_543_; 
v_res_542_ = l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0(v_x_540_, v_x_541_);
lean_dec(v_x_541_);
lean_dec(v_x_540_);
v_r_543_ = lean_box(v_res_542_);
return v_r_543_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqError_beq(lean_object* v_x_544_, lean_object* v_x_545_){
_start:
{
lean_object* v_unexpectedTk_546_; lean_object* v_unexpected_547_; lean_object* v_expected_548_; lean_object* v_unexpectedTk_549_; lean_object* v_unexpected_550_; lean_object* v_expected_551_; uint8_t v___x_552_; 
v_unexpectedTk_546_ = lean_ctor_get(v_x_544_, 0);
v_unexpected_547_ = lean_ctor_get(v_x_544_, 1);
v_expected_548_ = lean_ctor_get(v_x_544_, 2);
v_unexpectedTk_549_ = lean_ctor_get(v_x_545_, 0);
v_unexpected_550_ = lean_ctor_get(v_x_545_, 1);
v_expected_551_ = lean_ctor_get(v_x_545_, 2);
v___x_552_ = l_Lean_Syntax_structEq(v_unexpectedTk_546_, v_unexpectedTk_549_);
if (v___x_552_ == 0)
{
return v___x_552_;
}
else
{
uint8_t v___x_553_; 
v___x_553_ = lean_string_dec_eq(v_unexpected_547_, v_unexpected_550_);
if (v___x_553_ == 0)
{
return v___x_553_;
}
else
{
uint8_t v___x_554_; 
v___x_554_ = l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0(v_expected_548_, v_expected_551_);
return v___x_554_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqError_beq___boxed(lean_object* v_x_555_, lean_object* v_x_556_){
_start:
{
uint8_t v_res_557_; lean_object* v_r_558_; 
v_res_557_ = l_Lean_Parser_instBEqError_beq(v_x_555_, v_x_556_);
lean_dec_ref(v_x_556_);
lean_dec_ref(v_x_555_);
v_r_558_ = lean_box(v_res_557_);
return v_r_558_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString(lean_object* v_x_563_){
_start:
{
if (lean_obj_tag(v_x_563_) == 0)
{
lean_object* v___x_564_; 
v___x_564_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
return v___x_564_;
}
else
{
lean_object* v_tail_565_; 
v_tail_565_ = lean_ctor_get(v_x_563_, 1);
if (lean_obj_tag(v_tail_565_) == 0)
{
lean_object* v_head_566_; 
v_head_566_ = lean_ctor_get(v_x_563_, 0);
lean_inc(v_head_566_);
lean_dec_ref_known(v_x_563_, 2);
return v_head_566_;
}
else
{
lean_object* v_tail_567_; 
lean_inc_ref(v_tail_565_);
v_tail_567_ = lean_ctor_get(v_tail_565_, 1);
if (lean_obj_tag(v_tail_567_) == 0)
{
lean_object* v_head_568_; lean_object* v_head_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v_head_568_ = lean_ctor_get(v_x_563_, 0);
lean_inc(v_head_568_);
lean_dec_ref_known(v_x_563_, 2);
v_head_569_ = lean_ctor_get(v_tail_565_, 0);
lean_inc(v_head_569_);
lean_dec_ref_known(v_tail_565_, 2);
v___x_570_ = ((lean_object*)(l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__0));
v___x_571_ = lean_string_append(v_head_568_, v___x_570_);
v___x_572_ = lean_string_append(v___x_571_, v_head_569_);
lean_dec(v_head_569_);
return v___x_572_;
}
else
{
lean_object* v_head_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v_head_573_ = lean_ctor_get(v_x_563_, 0);
lean_inc(v_head_573_);
lean_dec_ref_known(v_x_563_, 2);
v___x_574_ = ((lean_object*)(l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__1));
v___x_575_ = lean_string_append(v_head_573_, v___x_574_);
v___x_576_ = l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString(v_tail_565_);
v___x_577_ = lean_string_append(v___x_575_, v___x_576_);
lean_dec_ref(v___x_576_);
return v___x_577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_eraseReps___at___00Lean_Parser_Error_toString_spec__0(lean_object* v_as_578_){
_start:
{
lean_object* v___f_579_; lean_object* v___x_580_; 
v___f_579_ = ((lean_object*)(l_Lean_Parser_instBEqCacheableParserContext_unsafe__2___closed__0));
v___x_580_ = l_List_eraseRepsBy___redArg(v___f_579_, v_as_578_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg(lean_object* v_hi_581_, lean_object* v_pivot_582_, lean_object* v_as_583_, lean_object* v_i_584_, lean_object* v_k_585_){
_start:
{
uint8_t v___x_586_; 
v___x_586_ = lean_nat_dec_lt(v_k_585_, v_hi_581_);
if (v___x_586_ == 0)
{
lean_object* v___x_587_; lean_object* v___x_588_; 
lean_dec(v_k_585_);
v___x_587_ = lean_array_fswap(v_as_583_, v_i_584_, v_hi_581_);
v___x_588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_588_, 0, v_i_584_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
return v___x_588_;
}
else
{
lean_object* v___x_589_; uint8_t v___x_590_; 
v___x_589_ = lean_array_fget_borrowed(v_as_583_, v_k_585_);
v___x_590_ = lean_string_dec_lt(v___x_589_, v_pivot_582_);
if (v___x_590_ == 0)
{
lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_591_ = lean_unsigned_to_nat(1u);
v___x_592_ = lean_nat_add(v_k_585_, v___x_591_);
lean_dec(v_k_585_);
v_k_585_ = v___x_592_;
goto _start;
}
else
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_594_ = lean_array_fswap(v_as_583_, v_i_584_, v_k_585_);
v___x_595_ = lean_unsigned_to_nat(1u);
v___x_596_ = lean_nat_add(v_i_584_, v___x_595_);
lean_dec(v_i_584_);
v___x_597_ = lean_nat_add(v_k_585_, v___x_595_);
lean_dec(v_k_585_);
v_as_583_ = v___x_594_;
v_i_584_ = v___x_596_;
v_k_585_ = v___x_597_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg___boxed(lean_object* v_hi_599_, lean_object* v_pivot_600_, lean_object* v_as_601_, lean_object* v_i_602_, lean_object* v_k_603_){
_start:
{
lean_object* v_res_604_; 
v_res_604_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg(v_hi_599_, v_pivot_600_, v_as_601_, v_i_602_, v_k_603_);
lean_dec_ref(v_pivot_600_);
lean_dec(v_hi_599_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(lean_object* v_n_605_, lean_object* v_as_606_, lean_object* v_lo_607_, lean_object* v_hi_608_){
_start:
{
lean_object* v___y_610_; uint8_t v___x_620_; 
v___x_620_ = lean_nat_dec_lt(v_lo_607_, v_hi_608_);
if (v___x_620_ == 0)
{
lean_dec(v_lo_607_);
return v_as_606_;
}
else
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v_mid_623_; lean_object* v___y_625_; lean_object* v___y_631_; lean_object* v___x_636_; lean_object* v___x_637_; uint8_t v___x_638_; 
v___x_621_ = lean_nat_add(v_lo_607_, v_hi_608_);
v___x_622_ = lean_unsigned_to_nat(1u);
v_mid_623_ = lean_nat_shiftr(v___x_621_, v___x_622_);
lean_dec(v___x_621_);
v___x_636_ = lean_array_fget_borrowed(v_as_606_, v_mid_623_);
v___x_637_ = lean_array_fget_borrowed(v_as_606_, v_lo_607_);
v___x_638_ = lean_string_dec_lt(v___x_636_, v___x_637_);
if (v___x_638_ == 0)
{
v___y_631_ = v_as_606_;
goto v___jp_630_;
}
else
{
lean_object* v___x_639_; 
v___x_639_ = lean_array_fswap(v_as_606_, v_lo_607_, v_mid_623_);
v___y_631_ = v___x_639_;
goto v___jp_630_;
}
v___jp_624_:
{
lean_object* v___x_626_; lean_object* v___x_627_; uint8_t v___x_628_; 
v___x_626_ = lean_array_fget_borrowed(v___y_625_, v_mid_623_);
v___x_627_ = lean_array_fget_borrowed(v___y_625_, v_hi_608_);
v___x_628_ = lean_string_dec_lt(v___x_626_, v___x_627_);
if (v___x_628_ == 0)
{
lean_dec(v_mid_623_);
v___y_610_ = v___y_625_;
goto v___jp_609_;
}
else
{
lean_object* v___x_629_; 
v___x_629_ = lean_array_fswap(v___y_625_, v_mid_623_, v_hi_608_);
lean_dec(v_mid_623_);
v___y_610_ = v___x_629_;
goto v___jp_609_;
}
}
v___jp_630_:
{
lean_object* v___x_632_; lean_object* v___x_633_; uint8_t v___x_634_; 
v___x_632_ = lean_array_fget_borrowed(v___y_631_, v_hi_608_);
v___x_633_ = lean_array_fget_borrowed(v___y_631_, v_lo_607_);
v___x_634_ = lean_string_dec_lt(v___x_632_, v___x_633_);
if (v___x_634_ == 0)
{
v___y_625_ = v___y_631_;
goto v___jp_624_;
}
else
{
lean_object* v___x_635_; 
v___x_635_ = lean_array_fswap(v___y_631_, v_lo_607_, v_hi_608_);
v___y_625_ = v___x_635_;
goto v___jp_624_;
}
}
}
v___jp_609_:
{
lean_object* v_pivot_611_; lean_object* v___x_612_; lean_object* v_fst_613_; lean_object* v_snd_614_; uint8_t v___x_615_; 
v_pivot_611_ = lean_array_fget(v___y_610_, v_hi_608_);
lean_inc_n(v_lo_607_, 2);
v___x_612_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg(v_hi_608_, v_pivot_611_, v___y_610_, v_lo_607_, v_lo_607_);
lean_dec(v_pivot_611_);
v_fst_613_ = lean_ctor_get(v___x_612_, 0);
lean_inc(v_fst_613_);
v_snd_614_ = lean_ctor_get(v___x_612_, 1);
lean_inc(v_snd_614_);
lean_dec_ref(v___x_612_);
v___x_615_ = lean_nat_dec_le(v_hi_608_, v_fst_613_);
if (v___x_615_ == 0)
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_616_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(v_n_605_, v_snd_614_, v_lo_607_, v_fst_613_);
v___x_617_ = lean_unsigned_to_nat(1u);
v___x_618_ = lean_nat_add(v_fst_613_, v___x_617_);
lean_dec(v_fst_613_);
v_as_606_ = v___x_616_;
v_lo_607_ = v___x_618_;
goto _start;
}
else
{
lean_dec(v_fst_613_);
lean_dec(v_lo_607_);
return v_snd_614_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg___boxed(lean_object* v_n_640_, lean_object* v_as_641_, lean_object* v_lo_642_, lean_object* v_hi_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(v_n_640_, v_as_641_, v_lo_642_, v_hi_643_);
lean_dec(v_hi_643_);
lean_dec(v_n_640_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Error_toString(lean_object* v_e_647_){
_start:
{
lean_object* v___y_649_; lean_object* v___y_650_; lean_object* v___y_655_; lean_object* v___y_656_; lean_object* v___y_665_; lean_object* v___y_666_; lean_object* v___y_667_; lean_object* v___y_668_; lean_object* v___y_669_; lean_object* v___y_672_; lean_object* v___y_673_; lean_object* v___y_674_; lean_object* v___y_675_; lean_object* v___y_676_; lean_object* v_unexpected_678_; lean_object* v_expected_679_; lean_object* v___y_681_; lean_object* v___x_691_; uint8_t v___x_692_; 
v_unexpected_678_ = lean_ctor_get(v_e_647_, 1);
lean_inc_ref(v_unexpected_678_);
v_expected_679_ = lean_ctor_get(v_e_647_, 2);
lean_inc(v_expected_679_);
lean_dec_ref(v_e_647_);
v___x_691_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_692_ = lean_string_dec_eq(v_unexpected_678_, v___x_691_);
if (v___x_692_ == 0)
{
lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_693_ = lean_box(0);
v___x_694_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_694_, 0, v_unexpected_678_);
lean_ctor_set(v___x_694_, 1, v___x_693_);
v___y_681_ = v___x_694_;
goto v___jp_680_;
}
else
{
lean_object* v___x_695_; 
lean_dec_ref(v_unexpected_678_);
v___x_695_ = lean_box(0);
v___y_681_ = v___x_695_;
goto v___jp_680_;
}
v___jp_648_:
{
lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_651_ = ((lean_object*)(l_Lean_Parser_Error_toString___closed__0));
v___x_652_ = l_List_appendTR___redArg(v___y_649_, v___y_650_);
v___x_653_ = l_String_intercalate(v___x_651_, v___x_652_);
return v___x_653_;
}
v___jp_654_:
{
lean_object* v___x_657_; lean_object* v_expected_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_657_ = lean_array_to_list(v___y_656_);
v_expected_658_ = l_List_eraseReps___at___00Lean_Parser_Error_toString_spec__0(v___x_657_);
v___x_659_ = ((lean_object*)(l_Lean_Parser_Error_toString___closed__1));
v___x_660_ = l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString(v_expected_658_);
v___x_661_ = lean_string_append(v___x_659_, v___x_660_);
lean_dec_ref(v___x_660_);
v___x_662_ = lean_box(0);
v___x_663_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_663_, 0, v___x_661_);
lean_ctor_set(v___x_663_, 1, v___x_662_);
v___y_649_ = v___y_655_;
v___y_650_ = v___x_663_;
goto v___jp_648_;
}
v___jp_664_:
{
lean_object* v___x_670_; 
v___x_670_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(v___y_667_, v___y_668_, v___y_666_, v___y_669_);
lean_dec(v___y_669_);
lean_dec(v___y_667_);
v___y_655_ = v___y_665_;
v___y_656_ = v___x_670_;
goto v___jp_654_;
}
v___jp_671_:
{
uint8_t v___x_677_; 
v___x_677_ = lean_nat_dec_le(v___y_676_, v___y_675_);
if (v___x_677_ == 0)
{
lean_dec(v___y_675_);
lean_inc(v___y_676_);
v___y_665_ = v___y_672_;
v___y_666_ = v___y_676_;
v___y_667_ = v___y_673_;
v___y_668_ = v___y_674_;
v___y_669_ = v___y_676_;
goto v___jp_664_;
}
else
{
v___y_665_ = v___y_672_;
v___y_666_ = v___y_676_;
v___y_667_ = v___y_673_;
v___y_668_ = v___y_674_;
v___y_669_ = v___y_675_;
goto v___jp_664_;
}
}
v___jp_680_:
{
lean_object* v___x_682_; uint8_t v___x_683_; 
v___x_682_ = lean_box(0);
v___x_683_ = l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0(v_expected_679_, v___x_682_);
if (v___x_683_ == 0)
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; uint8_t v___x_687_; 
v___x_684_ = lean_array_mk(v_expected_679_);
v___x_685_ = lean_array_get_size(v___x_684_);
v___x_686_ = lean_unsigned_to_nat(0u);
v___x_687_ = lean_nat_dec_eq(v___x_685_, v___x_686_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; lean_object* v___x_689_; uint8_t v___x_690_; 
v___x_688_ = lean_unsigned_to_nat(1u);
v___x_689_ = lean_nat_sub(v___x_685_, v___x_688_);
v___x_690_ = lean_nat_dec_le(v___x_686_, v___x_689_);
if (v___x_690_ == 0)
{
lean_inc(v___x_689_);
v___y_672_ = v___y_681_;
v___y_673_ = v___x_685_;
v___y_674_ = v___x_684_;
v___y_675_ = v___x_689_;
v___y_676_ = v___x_689_;
goto v___jp_671_;
}
else
{
v___y_672_ = v___y_681_;
v___y_673_ = v___x_685_;
v___y_674_ = v___x_684_;
v___y_675_ = v___x_689_;
v___y_676_ = v___x_686_;
goto v___jp_671_;
}
}
else
{
v___y_655_ = v___y_681_;
v___y_656_ = v___x_684_;
goto v___jp_654_;
}
}
else
{
lean_dec(v_expected_679_);
v___y_649_ = v___y_681_;
v___y_650_ = v___x_682_;
goto v___jp_648_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1(lean_object* v_n_696_, lean_object* v_as_697_, lean_object* v_lo_698_, lean_object* v_hi_699_, lean_object* v_w_700_, lean_object* v_hlo_701_, lean_object* v_hhi_702_){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(v_n_696_, v_as_697_, v_lo_698_, v_hi_699_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___boxed(lean_object* v_n_704_, lean_object* v_as_705_, lean_object* v_lo_706_, lean_object* v_hi_707_, lean_object* v_w_708_, lean_object* v_hlo_709_, lean_object* v_hhi_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1(v_n_704_, v_as_705_, v_lo_706_, v_hi_707_, v_w_708_, v_hlo_709_, v_hhi_710_);
lean_dec(v_hi_707_);
lean_dec(v_n_704_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1(lean_object* v_n_712_, lean_object* v_lo_713_, lean_object* v_hi_714_, lean_object* v_hhi_715_, lean_object* v_pivot_716_, lean_object* v_as_717_, lean_object* v_i_718_, lean_object* v_k_719_, lean_object* v_ilo_720_, lean_object* v_ik_721_, lean_object* v_w_722_){
_start:
{
lean_object* v___x_723_; 
v___x_723_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg(v_hi_714_, v_pivot_716_, v_as_717_, v_i_718_, v_k_719_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___boxed(lean_object* v_n_724_, lean_object* v_lo_725_, lean_object* v_hi_726_, lean_object* v_hhi_727_, lean_object* v_pivot_728_, lean_object* v_as_729_, lean_object* v_i_730_, lean_object* v_k_731_, lean_object* v_ilo_732_, lean_object* v_ik_733_, lean_object* v_w_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1(v_n_724_, v_lo_725_, v_hi_726_, v_hhi_727_, v_pivot_728_, v_as_729_, v_i_730_, v_k_731_, v_ilo_732_, v_ik_733_, v_w_734_);
lean_dec_ref(v_pivot_728_);
lean_dec(v_hi_726_);
lean_dec(v_lo_725_);
lean_dec(v_n_724_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Error_merge(lean_object* v_e_u2081_738_, lean_object* v_e_u2082_739_){
_start:
{
lean_object* v_unexpectedTk_740_; lean_object* v_unexpected_741_; lean_object* v_expected_742_; lean_object* v___y_744_; lean_object* v___x_756_; uint8_t v___x_757_; 
v_unexpectedTk_740_ = lean_ctor_get(v_e_u2082_739_, 0);
lean_inc(v_unexpectedTk_740_);
v_unexpected_741_ = lean_ctor_get(v_e_u2082_739_, 1);
lean_inc_ref(v_unexpected_741_);
v_expected_742_ = lean_ctor_get(v_e_u2082_739_, 2);
lean_inc(v_expected_742_);
lean_dec_ref(v_e_u2082_739_);
v___x_756_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_757_ = lean_string_dec_eq(v_unexpected_741_, v___x_756_);
if (v___x_757_ == 0)
{
v___y_744_ = v_unexpected_741_;
goto v___jp_743_;
}
else
{
lean_object* v_unexpected_758_; 
lean_dec_ref(v_unexpected_741_);
v_unexpected_758_ = lean_ctor_get(v_e_u2081_738_, 1);
lean_inc_ref(v_unexpected_758_);
v___y_744_ = v_unexpected_758_;
goto v___jp_743_;
}
v___jp_743_:
{
lean_object* v_expected_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_753_; 
v_expected_745_ = lean_ctor_get(v_e_u2081_738_, 2);
v_isSharedCheck_753_ = !lean_is_exclusive(v_e_u2081_738_);
if (v_isSharedCheck_753_ == 0)
{
lean_object* v_unused_754_; lean_object* v_unused_755_; 
v_unused_754_ = lean_ctor_get(v_e_u2081_738_, 1);
lean_dec(v_unused_754_);
v_unused_755_ = lean_ctor_get(v_e_u2081_738_, 0);
lean_dec(v_unused_755_);
v___x_747_ = v_e_u2081_738_;
v_isShared_748_ = v_isSharedCheck_753_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_expected_745_);
lean_dec(v_e_u2081_738_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_753_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_749_; lean_object* v___x_751_; 
v___x_749_ = l_List_appendTR___redArg(v_expected_745_, v_expected_742_);
if (v_isShared_748_ == 0)
{
lean_ctor_set(v___x_747_, 2, v___x_749_);
lean_ctor_set(v___x_747_, 1, v___y_744_);
lean_ctor_set(v___x_747_, 0, v_unexpectedTk_740_);
v___x_751_ = v___x_747_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_unexpectedTk_740_);
lean_ctor_set(v_reuseFailAlloc_752_, 1, v___y_744_);
lean_ctor_set(v_reuseFailAlloc_752_, 2, v___x_749_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__0(lean_object* v_x_759_, lean_object* v_x_760_){
_start:
{
if (lean_obj_tag(v_x_759_) == 0)
{
if (lean_obj_tag(v_x_760_) == 0)
{
uint8_t v___x_761_; 
v___x_761_ = 1;
return v___x_761_;
}
else
{
uint8_t v___x_762_; 
v___x_762_ = 0;
return v___x_762_;
}
}
else
{
if (lean_obj_tag(v_x_760_) == 0)
{
uint8_t v___x_763_; 
v___x_763_ = 0;
return v___x_763_;
}
else
{
lean_object* v_val_764_; lean_object* v_val_765_; uint8_t v_decide_766_; 
v_val_764_ = lean_ctor_get(v_x_759_, 0);
v_val_765_ = lean_ctor_get(v_x_760_, 0);
v_decide_766_ = lean_nat_dec_eq(v_val_764_, v_val_765_);
return v_decide_766_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__0___boxed(lean_object* v_x_767_, lean_object* v_x_768_){
_start:
{
uint8_t v_res_769_; lean_object* v_r_770_; 
v_res_769_ = l_instBEqOption_beq___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__0(v_x_767_, v_x_768_);
lean_dec(v_x_768_);
lean_dec(v_x_767_);
v_r_770_ = lean_box(v_res_769_);
return v_r_770_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1___redArg(lean_object* v_xs_771_, lean_object* v_ys_772_, lean_object* v_x_773_){
_start:
{
lean_object* v_zero_774_; uint8_t v_isZero_775_; 
v_zero_774_ = lean_unsigned_to_nat(0u);
v_isZero_775_ = lean_nat_dec_eq(v_x_773_, v_zero_774_);
if (v_isZero_775_ == 1)
{
lean_dec(v_x_773_);
return v_isZero_775_;
}
else
{
lean_object* v_one_776_; lean_object* v_n_777_; lean_object* v___x_778_; lean_object* v___x_779_; uint8_t v___x_780_; 
v_one_776_ = lean_unsigned_to_nat(1u);
v_n_777_ = lean_nat_sub(v_x_773_, v_one_776_);
lean_dec(v_x_773_);
v___x_778_ = lean_array_fget_borrowed(v_xs_771_, v_n_777_);
v___x_779_ = lean_array_fget_borrowed(v_ys_772_, v_n_777_);
v___x_780_ = lean_string_dec_eq(v___x_778_, v___x_779_);
if (v___x_780_ == 0)
{
lean_dec(v_n_777_);
return v___x_780_;
}
else
{
v_x_773_ = v_n_777_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1___redArg___boxed(lean_object* v_xs_782_, lean_object* v_ys_783_, lean_object* v_x_784_){
_start:
{
uint8_t v_res_785_; lean_object* v_r_786_; 
v_res_785_ = l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1___redArg(v_xs_782_, v_ys_783_, v_x_784_);
lean_dec_ref(v_ys_783_);
lean_dec_ref(v_xs_782_);
v_r_786_ = lean_box(v_res_785_);
return v_r_786_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqParserCacheKey_beq(lean_object* v_x_787_, lean_object* v_x_788_){
_start:
{
lean_object* v_toCacheableParserContext_789_; lean_object* v_parserName_790_; lean_object* v_pos_791_; lean_object* v_toCacheableParserContext_792_; lean_object* v_parserName_793_; lean_object* v_pos_794_; lean_object* v_prec_798_; lean_object* v_quotDepth_799_; uint8_t v_suppressInsideQuot_800_; lean_object* v_savedPos_x3f_801_; lean_object* v_forbiddenTks_802_; lean_object* v_prec_803_; lean_object* v_quotDepth_804_; uint8_t v_suppressInsideQuot_805_; lean_object* v_savedPos_x3f_806_; lean_object* v_forbiddenTks_807_; uint8_t v___x_817_; 
v_toCacheableParserContext_789_ = lean_ctor_get(v_x_787_, 0);
v_parserName_790_ = lean_ctor_get(v_x_787_, 1);
v_pos_791_ = lean_ctor_get(v_x_787_, 2);
v_toCacheableParserContext_792_ = lean_ctor_get(v_x_788_, 0);
v_parserName_793_ = lean_ctor_get(v_x_788_, 1);
v_pos_794_ = lean_ctor_get(v_x_788_, 2);
v_prec_798_ = lean_ctor_get(v_toCacheableParserContext_789_, 0);
v_quotDepth_799_ = lean_ctor_get(v_toCacheableParserContext_789_, 1);
v_suppressInsideQuot_800_ = lean_ctor_get_uint8(v_toCacheableParserContext_789_, sizeof(void*)*4);
v_savedPos_x3f_801_ = lean_ctor_get(v_toCacheableParserContext_789_, 2);
v_forbiddenTks_802_ = lean_ctor_get(v_toCacheableParserContext_789_, 3);
v_prec_803_ = lean_ctor_get(v_toCacheableParserContext_792_, 0);
v_quotDepth_804_ = lean_ctor_get(v_toCacheableParserContext_792_, 1);
v_suppressInsideQuot_805_ = lean_ctor_get_uint8(v_toCacheableParserContext_792_, sizeof(void*)*4);
v_savedPos_x3f_806_ = lean_ctor_get(v_toCacheableParserContext_792_, 2);
v_forbiddenTks_807_ = lean_ctor_get(v_toCacheableParserContext_792_, 3);
v___x_817_ = lean_nat_dec_eq(v_prec_798_, v_prec_803_);
if (v___x_817_ == 0)
{
return v___x_817_;
}
else
{
uint8_t v___x_818_; 
v___x_818_ = lean_nat_dec_eq(v_quotDepth_799_, v_quotDepth_804_);
if (v___x_818_ == 0)
{
return v___x_818_;
}
else
{
if (v_suppressInsideQuot_805_ == 0)
{
if (v_suppressInsideQuot_800_ == 0)
{
goto v___jp_808_;
}
else
{
return v_suppressInsideQuot_805_;
}
}
else
{
if (v_suppressInsideQuot_800_ == 0)
{
return v_suppressInsideQuot_800_;
}
else
{
goto v___jp_808_;
}
}
}
}
v___jp_795_:
{
uint8_t v___x_796_; 
v___x_796_ = lean_name_eq(v_parserName_790_, v_parserName_793_);
if (v___x_796_ == 0)
{
return v___x_796_;
}
else
{
uint8_t v_decide_797_; 
v_decide_797_ = lean_nat_dec_eq(v_pos_791_, v_pos_794_);
return v_decide_797_;
}
}
v___jp_808_:
{
uint8_t v___x_809_; 
v___x_809_ = l_instBEqOption_beq___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__0(v_savedPos_x3f_801_, v_savedPos_x3f_806_);
if (v___x_809_ == 0)
{
return v___x_809_;
}
else
{
size_t v___x_810_; size_t v___x_811_; uint8_t v___x_812_; 
v___x_810_ = lean_ptr_addr(v_forbiddenTks_802_);
v___x_811_ = lean_ptr_addr(v_forbiddenTks_807_);
v___x_812_ = lean_usize_dec_eq(v___x_810_, v___x_811_);
if (v___x_812_ == 0)
{
lean_object* v___x_813_; lean_object* v___x_814_; uint8_t v___x_815_; 
v___x_813_ = lean_array_get_size(v_forbiddenTks_802_);
v___x_814_ = lean_array_get_size(v_forbiddenTks_807_);
v___x_815_ = lean_nat_dec_eq(v___x_813_, v___x_814_);
if (v___x_815_ == 0)
{
return v___x_815_;
}
else
{
uint8_t v___x_816_; 
v___x_816_ = l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1___redArg(v_forbiddenTks_802_, v_forbiddenTks_807_, v___x_813_);
if (v___x_816_ == 0)
{
return v___x_816_;
}
else
{
goto v___jp_795_;
}
}
}
else
{
goto v___jp_795_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqParserCacheKey_beq___boxed(lean_object* v_x_819_, lean_object* v_x_820_){
_start:
{
uint8_t v_res_821_; lean_object* v_r_822_; 
v_res_821_ = l_Lean_Parser_instBEqParserCacheKey_beq(v_x_819_, v_x_820_);
lean_dec_ref(v_x_820_);
lean_dec_ref(v_x_819_);
v_r_822_ = lean_box(v_res_821_);
return v_r_822_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1(lean_object* v_xs_823_, lean_object* v_ys_824_, lean_object* v_hsz_825_, lean_object* v_x_826_, lean_object* v_x_827_){
_start:
{
uint8_t v___x_828_; 
v___x_828_ = l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1___redArg(v_xs_823_, v_ys_824_, v_x_826_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1___boxed(lean_object* v_xs_829_, lean_object* v_ys_830_, lean_object* v_hsz_831_, lean_object* v_x_832_, lean_object* v_x_833_){
_start:
{
uint8_t v_res_834_; lean_object* v_r_835_; 
v_res_834_ = l_Array_isEqvAux___at___00Lean_Parser_instBEqParserCacheKey_beq_spec__1(v_xs_829_, v_ys_830_, v_hsz_831_, v_x_832_, v_x_833_);
lean_dec_ref(v_ys_830_);
lean_dec_ref(v_xs_829_);
v_r_835_ = lean_box(v_res_834_);
return v_r_835_;
}
}
LEAN_EXPORT uint64_t l_Lean_Parser_instHashableParserCacheKey___lam__0(lean_object* v_k_838_){
_start:
{
lean_object* v_parserName_839_; lean_object* v_pos_840_; uint64_t v___x_841_; 
v_parserName_839_ = lean_ctor_get(v_k_838_, 1);
v_pos_840_ = lean_ctor_get(v_k_838_, 2);
v___x_841_ = l_String_instHashableRaw_hash(v_pos_840_);
if (lean_obj_tag(v_parserName_839_) == 0)
{
uint64_t v___x_842_; uint64_t v___x_843_; 
v___x_842_ = 1723ULL;
v___x_843_ = lean_uint64_mix_hash(v___x_841_, v___x_842_);
return v___x_843_;
}
else
{
uint64_t v_hash_844_; uint64_t v___x_845_; 
v_hash_844_ = lean_ctor_get_uint64(v_parserName_839_, sizeof(void*)*2);
v___x_845_ = lean_uint64_mix_hash(v___x_841_, v_hash_844_);
return v___x_845_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instHashableParserCacheKey___lam__0___boxed(lean_object* v_k_846_){
_start:
{
uint64_t v_res_847_; lean_object* v_r_848_; 
v_res_847_ = l_Lean_Parser_instHashableParserCacheKey___lam__0(v_k_846_);
lean_dec_ref(v_k_846_);
v_r_848_ = lean_box_uint64(v_res_847_);
return v_r_848_;
}
}
static lean_object* _init_l_Lean_Parser_initCacheForInput___closed__0(void){
_start:
{
lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_851_ = lean_box(0);
v___x_852_ = lean_unsigned_to_nat(16u);
v___x_853_ = lean_mk_array(v___x_852_, v___x_851_);
return v___x_853_;
}
}
static lean_object* _init_l_Lean_Parser_initCacheForInput___closed__1(void){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_854_ = lean_obj_once(&l_Lean_Parser_initCacheForInput___closed__0, &l_Lean_Parser_initCacheForInput___closed__0_once, _init_l_Lean_Parser_initCacheForInput___closed__0);
v___x_855_ = lean_unsigned_to_nat(0u);
v___x_856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_856_, 0, v___x_855_);
lean_ctor_set(v___x_856_, 1, v___x_854_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_initCacheForInput(lean_object* v_input_857_){
_start:
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_858_ = lean_string_utf8_byte_size(v_input_857_);
v___x_859_ = lean_unsigned_to_nat(1u);
v___x_860_ = lean_nat_add(v___x_858_, v___x_859_);
v___x_861_ = lean_unsigned_to_nat(0u);
v___x_862_ = lean_box(0);
v___x_863_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_863_, 0, v___x_860_);
lean_ctor_set(v___x_863_, 1, v___x_861_);
lean_ctor_set(v___x_863_, 2, v___x_862_);
v___x_864_ = lean_obj_once(&l_Lean_Parser_initCacheForInput___closed__1, &l_Lean_Parser_initCacheForInput___closed__1_once, _init_l_Lean_Parser_initCacheForInput___closed__1);
v___x_865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_865_, 0, v___x_863_);
lean_ctor_set(v___x_865_, 1, v___x_864_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_initCacheForInput___boxed(lean_object* v_input_866_){
_start:
{
lean_object* v_res_867_; 
v_res_867_ = l_Lean_Parser_initCacheForInput(v_input_866_);
lean_dec_ref(v_input_866_);
return v_res_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_toSubarray(lean_object* v_stack_868_){
_start:
{
lean_object* v_raw_869_; lean_object* v_drop_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v_raw_869_ = lean_ctor_get(v_stack_868_, 0);
lean_inc_ref(v_raw_869_);
v_drop_870_ = lean_ctor_get(v_stack_868_, 1);
lean_inc(v_drop_870_);
lean_dec_ref(v_stack_868_);
v___x_871_ = lean_array_get_size(v_raw_869_);
v___x_872_ = l_Array_toSubarray___redArg(v_raw_869_, v_drop_870_, v___x_871_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_size(lean_object* v_stack_879_){
_start:
{
lean_object* v_raw_880_; lean_object* v_drop_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v_raw_880_ = lean_ctor_get(v_stack_879_, 0);
v_drop_881_ = lean_ctor_get(v_stack_879_, 1);
v___x_882_ = lean_array_get_size(v_raw_880_);
v___x_883_ = lean_nat_sub(v___x_882_, v_drop_881_);
return v___x_883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_size___boxed(lean_object* v_stack_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l_Lean_Parser_SyntaxStack_size(v_stack_884_);
lean_dec_ref(v_stack_884_);
return v_res_885_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_SyntaxStack_isEmpty(lean_object* v_stack_886_){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; uint8_t v___x_889_; 
v___x_887_ = l_Lean_Parser_SyntaxStack_size(v_stack_886_);
v___x_888_ = lean_unsigned_to_nat(0u);
v___x_889_ = lean_nat_dec_eq(v___x_887_, v___x_888_);
lean_dec(v___x_887_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_isEmpty___boxed(lean_object* v_stack_890_){
_start:
{
uint8_t v_res_891_; lean_object* v_r_892_; 
v_res_891_ = l_Lean_Parser_SyntaxStack_isEmpty(v_stack_890_);
lean_dec_ref(v_stack_890_);
v_r_892_ = lean_box(v_res_891_);
return v_r_892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_shrink(lean_object* v_stack_893_, lean_object* v_n_894_){
_start:
{
lean_object* v_raw_895_; lean_object* v_drop_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_905_; 
v_raw_895_ = lean_ctor_get(v_stack_893_, 0);
v_drop_896_ = lean_ctor_get(v_stack_893_, 1);
v_isSharedCheck_905_ = !lean_is_exclusive(v_stack_893_);
if (v_isSharedCheck_905_ == 0)
{
v___x_898_ = v_stack_893_;
v_isShared_899_ = v_isSharedCheck_905_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_drop_896_);
lean_inc(v_raw_895_);
lean_dec(v_stack_893_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_905_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_903_; 
v___x_900_ = lean_nat_add(v_drop_896_, v_n_894_);
v___x_901_ = l_Array_shrink___redArg(v_raw_895_, v___x_900_);
lean_dec(v___x_900_);
if (v_isShared_899_ == 0)
{
lean_ctor_set(v___x_898_, 0, v___x_901_);
v___x_903_ = v___x_898_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v___x_901_);
lean_ctor_set(v_reuseFailAlloc_904_, 1, v_drop_896_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_shrink___boxed(lean_object* v_stack_906_, lean_object* v_n_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l_Lean_Parser_SyntaxStack_shrink(v_stack_906_, v_n_907_);
lean_dec(v_n_907_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_push(lean_object* v_stack_909_, lean_object* v_a_910_){
_start:
{
lean_object* v_raw_911_; lean_object* v_drop_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_920_; 
v_raw_911_ = lean_ctor_get(v_stack_909_, 0);
v_drop_912_ = lean_ctor_get(v_stack_909_, 1);
v_isSharedCheck_920_ = !lean_is_exclusive(v_stack_909_);
if (v_isSharedCheck_920_ == 0)
{
v___x_914_ = v_stack_909_;
v_isShared_915_ = v_isSharedCheck_920_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_drop_912_);
lean_inc(v_raw_911_);
lean_dec(v_stack_909_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_920_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_916_; lean_object* v___x_918_; 
v___x_916_ = lean_array_push(v_raw_911_, v_a_910_);
if (v_isShared_915_ == 0)
{
lean_ctor_set(v___x_914_, 0, v___x_916_);
v___x_918_ = v___x_914_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v___x_916_);
lean_ctor_set(v_reuseFailAlloc_919_, 1, v_drop_912_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_pop(lean_object* v_stack_921_){
_start:
{
lean_object* v___x_922_; lean_object* v___x_923_; uint8_t v___x_924_; 
v___x_922_ = lean_unsigned_to_nat(0u);
v___x_923_ = l_Lean_Parser_SyntaxStack_size(v_stack_921_);
v___x_924_ = lean_nat_dec_lt(v___x_922_, v___x_923_);
lean_dec(v___x_923_);
if (v___x_924_ == 0)
{
return v_stack_921_;
}
else
{
lean_object* v_raw_925_; lean_object* v_drop_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_934_; 
v_raw_925_ = lean_ctor_get(v_stack_921_, 0);
v_drop_926_ = lean_ctor_get(v_stack_921_, 1);
v_isSharedCheck_934_ = !lean_is_exclusive(v_stack_921_);
if (v_isSharedCheck_934_ == 0)
{
v___x_928_ = v_stack_921_;
v_isShared_929_ = v_isSharedCheck_934_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_drop_926_);
lean_inc(v_raw_925_);
lean_dec(v_stack_921_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_934_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_930_; lean_object* v___x_932_; 
v___x_930_ = lean_array_pop(v_raw_925_);
if (v_isShared_929_ == 0)
{
lean_ctor_set(v___x_928_, 0, v___x_930_);
v___x_932_ = v___x_928_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v___x_930_);
lean_ctor_set(v_reuseFailAlloc_933_, 1, v_drop_926_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_SyntaxStack_back_spec__0(lean_object* v_msg_935_){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_936_ = lean_box(0);
v___x_937_ = lean_panic_fn_borrowed(v___x_936_, v_msg_935_);
return v___x_937_;
}
}
static lean_object* _init_l_Lean_Parser_SyntaxStack_back___closed__3(void){
_start:
{
lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_941_ = ((lean_object*)(l_Lean_Parser_SyntaxStack_back___closed__2));
v___x_942_ = lean_unsigned_to_nat(4u);
v___x_943_ = lean_unsigned_to_nat(315u);
v___x_944_ = ((lean_object*)(l_Lean_Parser_SyntaxStack_back___closed__1));
v___x_945_ = ((lean_object*)(l_Lean_Parser_SyntaxStack_back___closed__0));
v___x_946_ = l_mkPanicMessageWithDecl(v___x_945_, v___x_944_, v___x_943_, v___x_942_, v___x_941_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_back(lean_object* v_stack_947_){
_start:
{
lean_object* v___x_948_; lean_object* v___x_949_; uint8_t v___x_950_; 
v___x_948_ = lean_unsigned_to_nat(0u);
v___x_949_ = l_Lean_Parser_SyntaxStack_size(v_stack_947_);
v___x_950_ = lean_nat_dec_lt(v___x_948_, v___x_949_);
lean_dec(v___x_949_);
if (v___x_950_ == 0)
{
lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_951_ = lean_obj_once(&l_Lean_Parser_SyntaxStack_back___closed__3, &l_Lean_Parser_SyntaxStack_back___closed__3_once, _init_l_Lean_Parser_SyntaxStack_back___closed__3);
v___x_952_ = l_panic___at___00Lean_Parser_SyntaxStack_back_spec__0(v___x_951_);
return v___x_952_;
}
else
{
lean_object* v_raw_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v_raw_953_ = lean_ctor_get(v_stack_947_, 0);
v___x_954_ = lean_box(0);
v___x_955_ = lean_array_get_size(v_raw_953_);
v___x_956_ = lean_unsigned_to_nat(1u);
v___x_957_ = lean_nat_sub(v___x_955_, v___x_956_);
v___x_958_ = lean_array_get_borrowed(v___x_954_, v_raw_953_, v___x_957_);
lean_dec(v___x_957_);
lean_inc(v___x_958_);
return v___x_958_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_back___boxed(lean_object* v_stack_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_Lean_Parser_SyntaxStack_back(v_stack_959_);
lean_dec_ref(v_stack_959_);
return v_res_960_;
}
}
static lean_object* _init_l_Lean_Parser_SyntaxStack_get_x21___closed__2(void){
_start:
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_963_ = ((lean_object*)(l_Lean_Parser_SyntaxStack_get_x21___closed__1));
v___x_964_ = lean_unsigned_to_nat(4u);
v___x_965_ = lean_unsigned_to_nat(321u);
v___x_966_ = ((lean_object*)(l_Lean_Parser_SyntaxStack_get_x21___closed__0));
v___x_967_ = ((lean_object*)(l_Lean_Parser_SyntaxStack_back___closed__0));
v___x_968_ = l_mkPanicMessageWithDecl(v___x_967_, v___x_966_, v___x_965_, v___x_964_, v___x_963_);
return v___x_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_get_x21(lean_object* v_stack_969_, lean_object* v_i_970_){
_start:
{
lean_object* v___x_971_; uint8_t v___x_972_; 
v___x_971_ = l_Lean_Parser_SyntaxStack_size(v_stack_969_);
v___x_972_ = lean_nat_dec_lt(v_i_970_, v___x_971_);
lean_dec(v___x_971_);
if (v___x_972_ == 0)
{
lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_973_ = lean_obj_once(&l_Lean_Parser_SyntaxStack_get_x21___closed__2, &l_Lean_Parser_SyntaxStack_get_x21___closed__2_once, _init_l_Lean_Parser_SyntaxStack_get_x21___closed__2);
v___x_974_ = l_panic___at___00Lean_Parser_SyntaxStack_back_spec__0(v___x_973_);
return v___x_974_;
}
else
{
lean_object* v_raw_975_; lean_object* v_drop_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v_raw_975_ = lean_ctor_get(v_stack_969_, 0);
v_drop_976_ = lean_ctor_get(v_stack_969_, 1);
v___x_977_ = lean_box(0);
v___x_978_ = lean_nat_add(v_drop_976_, v_i_970_);
v___x_979_ = lean_array_get_borrowed(v___x_977_, v_raw_975_, v___x_978_);
lean_dec(v___x_978_);
lean_inc(v___x_979_);
return v___x_979_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_get_x21___boxed(lean_object* v_stack_980_, lean_object* v_i_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lean_Parser_SyntaxStack_get_x21(v_stack_980_, v_i_981_);
lean_dec(v_i_981_);
lean_dec_ref(v_stack_980_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_extract(lean_object* v_stack_983_, lean_object* v_start_984_, lean_object* v_stop_985_){
_start:
{
lean_object* v_raw_986_; lean_object* v_drop_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v_raw_986_ = lean_ctor_get(v_stack_983_, 0);
v_drop_987_ = lean_ctor_get(v_stack_983_, 1);
v___x_988_ = lean_nat_add(v_drop_987_, v_start_984_);
v___x_989_ = lean_nat_add(v_drop_987_, v_stop_985_);
v___x_990_ = l_Array_extract___redArg(v_raw_986_, v___x_988_, v___x_989_);
return v___x_990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_extract___boxed(lean_object* v_stack_991_, lean_object* v_start_992_, lean_object* v_stop_993_){
_start:
{
lean_object* v_res_994_; 
v_res_994_ = l_Lean_Parser_SyntaxStack_extract(v_stack_991_, v_start_992_, v_stop_993_);
lean_dec(v_stop_993_);
lean_dec(v_start_992_);
lean_dec_ref(v_stack_991_);
return v_res_994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___private__1(lean_object* v_stack_995_, lean_object* v_stxs_996_){
_start:
{
lean_object* v_raw_997_; lean_object* v_drop_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1006_; 
v_raw_997_ = lean_ctor_get(v_stack_995_, 0);
v_drop_998_ = lean_ctor_get(v_stack_995_, 1);
v_isSharedCheck_1006_ = !lean_is_exclusive(v_stack_995_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_1000_ = v_stack_995_;
v_isShared_1001_ = v_isSharedCheck_1006_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_drop_998_);
lean_inc(v_raw_997_);
lean_dec(v_stack_995_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1006_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1002_; lean_object* v___x_1004_; 
v___x_1002_ = l_Array_append___redArg(v_raw_997_, v_stxs_996_);
if (v_isShared_1001_ == 0)
{
lean_ctor_set(v___x_1000_, 0, v___x_1002_);
v___x_1004_ = v___x_1000_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v___x_1002_);
lean_ctor_set(v_reuseFailAlloc_1005_, 1, v_drop_998_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___private__1___boxed(lean_object* v_stack_1007_, lean_object* v_stxs_1008_){
_start:
{
lean_object* v_res_1009_; 
v_res_1009_ = l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___private__1(v_stack_1007_, v_stxs_1008_);
lean_dec_ref(v_stxs_1008_);
return v_res_1009_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___lam__0(lean_object* v_stack_1010_, lean_object* v_stxs_1011_){
_start:
{
lean_object* v_raw_1012_; lean_object* v_drop_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1021_; 
v_raw_1012_ = lean_ctor_get(v_stack_1010_, 0);
v_drop_1013_ = lean_ctor_get(v_stack_1010_, 1);
v_isSharedCheck_1021_ = !lean_is_exclusive(v_stack_1010_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1015_ = v_stack_1010_;
v_isShared_1016_ = v_isSharedCheck_1021_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_drop_1013_);
lean_inc(v_raw_1012_);
lean_dec(v_stack_1010_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1021_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1017_; lean_object* v___x_1019_; 
v___x_1017_ = l_Array_append___redArg(v_raw_1012_, v_stxs_1011_);
if (v_isShared_1016_ == 0)
{
lean_ctor_set(v___x_1015_, 0, v___x_1017_);
v___x_1019_ = v___x_1015_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v___x_1017_);
lean_ctor_set(v_reuseFailAlloc_1020_, 1, v_drop_1013_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___lam__0___boxed(lean_object* v_stack_1022_, lean_object* v_stxs_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___lam__0(v_stack_1022_, v_stxs_1023_);
lean_dec_ref(v_stxs_1023_);
return v_res_1024_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_ParserState_hasError(lean_object* v_s_1027_){
_start:
{
lean_object* v_errorMsg_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; uint8_t v___x_1031_; 
v_errorMsg_1028_ = lean_ctor_get(v_s_1027_, 4);
lean_inc(v_errorMsg_1028_);
lean_dec_ref(v_s_1027_);
v___x_1029_ = ((lean_object*)(l_Lean_Parser_instBEqError___closed__0));
v___x_1030_ = lean_box(0);
v___x_1031_ = l_instBEqOption_beq___redArg(v___x_1029_, v_errorMsg_1028_, v___x_1030_);
if (v___x_1031_ == 0)
{
uint8_t v___x_1032_; 
v___x_1032_ = 1;
return v___x_1032_;
}
else
{
uint8_t v___x_1033_; 
v___x_1033_ = 0;
return v___x_1033_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_hasError___boxed(lean_object* v_s_1034_){
_start:
{
uint8_t v_res_1035_; lean_object* v_r_1036_; 
v_res_1035_ = l_Lean_Parser_ParserState_hasError(v_s_1034_);
v_r_1036_ = lean_box(v_res_1035_);
return v_r_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_stackSize(lean_object* v_s_1037_){
_start:
{
lean_object* v_stxStack_1038_; lean_object* v___x_1039_; 
v_stxStack_1038_ = lean_ctor_get(v_s_1037_, 0);
v___x_1039_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_1038_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_stackSize___boxed(lean_object* v_s_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Lean_Parser_ParserState_stackSize(v_s_1040_);
lean_dec_ref(v_s_1040_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_restore(lean_object* v_s_1042_, lean_object* v_iniStackSz_1043_, lean_object* v_iniPos_1044_){
_start:
{
lean_object* v_stxStack_1045_; lean_object* v_lhsPrec_1046_; lean_object* v_cache_1047_; lean_object* v_recoveredErrors_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1057_; 
v_stxStack_1045_ = lean_ctor_get(v_s_1042_, 0);
v_lhsPrec_1046_ = lean_ctor_get(v_s_1042_, 1);
v_cache_1047_ = lean_ctor_get(v_s_1042_, 3);
v_recoveredErrors_1048_ = lean_ctor_get(v_s_1042_, 5);
v_isSharedCheck_1057_ = !lean_is_exclusive(v_s_1042_);
if (v_isSharedCheck_1057_ == 0)
{
lean_object* v_unused_1058_; lean_object* v_unused_1059_; 
v_unused_1058_ = lean_ctor_get(v_s_1042_, 4);
lean_dec(v_unused_1058_);
v_unused_1059_ = lean_ctor_get(v_s_1042_, 2);
lean_dec(v_unused_1059_);
v___x_1050_ = v_s_1042_;
v_isShared_1051_ = v_isSharedCheck_1057_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_recoveredErrors_1048_);
lean_inc(v_cache_1047_);
lean_inc(v_lhsPrec_1046_);
lean_inc(v_stxStack_1045_);
lean_dec(v_s_1042_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1057_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1055_; 
v___x_1052_ = l_Lean_Parser_SyntaxStack_shrink(v_stxStack_1045_, v_iniStackSz_1043_);
v___x_1053_ = lean_box(0);
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 4, v___x_1053_);
lean_ctor_set(v___x_1050_, 2, v_iniPos_1044_);
lean_ctor_set(v___x_1050_, 0, v___x_1052_);
v___x_1055_ = v___x_1050_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v___x_1052_);
lean_ctor_set(v_reuseFailAlloc_1056_, 1, v_lhsPrec_1046_);
lean_ctor_set(v_reuseFailAlloc_1056_, 2, v_iniPos_1044_);
lean_ctor_set(v_reuseFailAlloc_1056_, 3, v_cache_1047_);
lean_ctor_set(v_reuseFailAlloc_1056_, 4, v___x_1053_);
lean_ctor_set(v_reuseFailAlloc_1056_, 5, v_recoveredErrors_1048_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_restore___boxed(lean_object* v_s_1060_, lean_object* v_iniStackSz_1061_, lean_object* v_iniPos_1062_){
_start:
{
lean_object* v_res_1063_; 
v_res_1063_ = l_Lean_Parser_ParserState_restore(v_s_1060_, v_iniStackSz_1061_, v_iniPos_1062_);
lean_dec(v_iniStackSz_1061_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_setPos(lean_object* v_s_1064_, lean_object* v_pos_1065_){
_start:
{
lean_object* v_stxStack_1066_; lean_object* v_lhsPrec_1067_; lean_object* v_cache_1068_; lean_object* v_errorMsg_1069_; lean_object* v_recoveredErrors_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1077_; 
v_stxStack_1066_ = lean_ctor_get(v_s_1064_, 0);
v_lhsPrec_1067_ = lean_ctor_get(v_s_1064_, 1);
v_cache_1068_ = lean_ctor_get(v_s_1064_, 3);
v_errorMsg_1069_ = lean_ctor_get(v_s_1064_, 4);
v_recoveredErrors_1070_ = lean_ctor_get(v_s_1064_, 5);
v_isSharedCheck_1077_ = !lean_is_exclusive(v_s_1064_);
if (v_isSharedCheck_1077_ == 0)
{
lean_object* v_unused_1078_; 
v_unused_1078_ = lean_ctor_get(v_s_1064_, 2);
lean_dec(v_unused_1078_);
v___x_1072_ = v_s_1064_;
v_isShared_1073_ = v_isSharedCheck_1077_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_recoveredErrors_1070_);
lean_inc(v_errorMsg_1069_);
lean_inc(v_cache_1068_);
lean_inc(v_lhsPrec_1067_);
lean_inc(v_stxStack_1066_);
lean_dec(v_s_1064_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1077_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
lean_object* v___x_1075_; 
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 2, v_pos_1065_);
v___x_1075_ = v___x_1072_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v_stxStack_1066_);
lean_ctor_set(v_reuseFailAlloc_1076_, 1, v_lhsPrec_1067_);
lean_ctor_set(v_reuseFailAlloc_1076_, 2, v_pos_1065_);
lean_ctor_set(v_reuseFailAlloc_1076_, 3, v_cache_1068_);
lean_ctor_set(v_reuseFailAlloc_1076_, 4, v_errorMsg_1069_);
lean_ctor_set(v_reuseFailAlloc_1076_, 5, v_recoveredErrors_1070_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_setCache(lean_object* v_s_1079_, lean_object* v_cache_1080_){
_start:
{
lean_object* v_stxStack_1081_; lean_object* v_lhsPrec_1082_; lean_object* v_pos_1083_; lean_object* v_errorMsg_1084_; lean_object* v_recoveredErrors_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1092_; 
v_stxStack_1081_ = lean_ctor_get(v_s_1079_, 0);
v_lhsPrec_1082_ = lean_ctor_get(v_s_1079_, 1);
v_pos_1083_ = lean_ctor_get(v_s_1079_, 2);
v_errorMsg_1084_ = lean_ctor_get(v_s_1079_, 4);
v_recoveredErrors_1085_ = lean_ctor_get(v_s_1079_, 5);
v_isSharedCheck_1092_ = !lean_is_exclusive(v_s_1079_);
if (v_isSharedCheck_1092_ == 0)
{
lean_object* v_unused_1093_; 
v_unused_1093_ = lean_ctor_get(v_s_1079_, 3);
lean_dec(v_unused_1093_);
v___x_1087_ = v_s_1079_;
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_recoveredErrors_1085_);
lean_inc(v_errorMsg_1084_);
lean_inc(v_pos_1083_);
lean_inc(v_lhsPrec_1082_);
lean_inc(v_stxStack_1081_);
lean_dec(v_s_1079_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1090_; 
if (v_isShared_1088_ == 0)
{
lean_ctor_set(v___x_1087_, 3, v_cache_1080_);
v___x_1090_ = v___x_1087_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v_stxStack_1081_);
lean_ctor_set(v_reuseFailAlloc_1091_, 1, v_lhsPrec_1082_);
lean_ctor_set(v_reuseFailAlloc_1091_, 2, v_pos_1083_);
lean_ctor_set(v_reuseFailAlloc_1091_, 3, v_cache_1080_);
lean_ctor_set(v_reuseFailAlloc_1091_, 4, v_errorMsg_1084_);
lean_ctor_set(v_reuseFailAlloc_1091_, 5, v_recoveredErrors_1085_);
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
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_pushSyntax(lean_object* v_s_1094_, lean_object* v_n_1095_){
_start:
{
lean_object* v_stxStack_1096_; lean_object* v_lhsPrec_1097_; lean_object* v_pos_1098_; lean_object* v_cache_1099_; lean_object* v_errorMsg_1100_; lean_object* v_recoveredErrors_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1109_; 
v_stxStack_1096_ = lean_ctor_get(v_s_1094_, 0);
v_lhsPrec_1097_ = lean_ctor_get(v_s_1094_, 1);
v_pos_1098_ = lean_ctor_get(v_s_1094_, 2);
v_cache_1099_ = lean_ctor_get(v_s_1094_, 3);
v_errorMsg_1100_ = lean_ctor_get(v_s_1094_, 4);
v_recoveredErrors_1101_ = lean_ctor_get(v_s_1094_, 5);
v_isSharedCheck_1109_ = !lean_is_exclusive(v_s_1094_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1103_ = v_s_1094_;
v_isShared_1104_ = v_isSharedCheck_1109_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_recoveredErrors_1101_);
lean_inc(v_errorMsg_1100_);
lean_inc(v_cache_1099_);
lean_inc(v_pos_1098_);
lean_inc(v_lhsPrec_1097_);
lean_inc(v_stxStack_1096_);
lean_dec(v_s_1094_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1109_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v___x_1105_; lean_object* v___x_1107_; 
v___x_1105_ = l_Lean_Parser_SyntaxStack_push(v_stxStack_1096_, v_n_1095_);
if (v_isShared_1104_ == 0)
{
lean_ctor_set(v___x_1103_, 0, v___x_1105_);
v___x_1107_ = v___x_1103_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v___x_1105_);
lean_ctor_set(v_reuseFailAlloc_1108_, 1, v_lhsPrec_1097_);
lean_ctor_set(v_reuseFailAlloc_1108_, 2, v_pos_1098_);
lean_ctor_set(v_reuseFailAlloc_1108_, 3, v_cache_1099_);
lean_ctor_set(v_reuseFailAlloc_1108_, 4, v_errorMsg_1100_);
lean_ctor_set(v_reuseFailAlloc_1108_, 5, v_recoveredErrors_1101_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_popSyntax(lean_object* v_s_1110_){
_start:
{
lean_object* v_stxStack_1111_; lean_object* v_lhsPrec_1112_; lean_object* v_pos_1113_; lean_object* v_cache_1114_; lean_object* v_errorMsg_1115_; lean_object* v_recoveredErrors_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1124_; 
v_stxStack_1111_ = lean_ctor_get(v_s_1110_, 0);
v_lhsPrec_1112_ = lean_ctor_get(v_s_1110_, 1);
v_pos_1113_ = lean_ctor_get(v_s_1110_, 2);
v_cache_1114_ = lean_ctor_get(v_s_1110_, 3);
v_errorMsg_1115_ = lean_ctor_get(v_s_1110_, 4);
v_recoveredErrors_1116_ = lean_ctor_get(v_s_1110_, 5);
v_isSharedCheck_1124_ = !lean_is_exclusive(v_s_1110_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1118_ = v_s_1110_;
v_isShared_1119_ = v_isSharedCheck_1124_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_recoveredErrors_1116_);
lean_inc(v_errorMsg_1115_);
lean_inc(v_cache_1114_);
lean_inc(v_pos_1113_);
lean_inc(v_lhsPrec_1112_);
lean_inc(v_stxStack_1111_);
lean_dec(v_s_1110_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1124_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1120_; lean_object* v___x_1122_; 
v___x_1120_ = l_Lean_Parser_SyntaxStack_pop(v_stxStack_1111_);
if (v_isShared_1119_ == 0)
{
lean_ctor_set(v___x_1118_, 0, v___x_1120_);
v___x_1122_ = v___x_1118_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v___x_1120_);
lean_ctor_set(v_reuseFailAlloc_1123_, 1, v_lhsPrec_1112_);
lean_ctor_set(v_reuseFailAlloc_1123_, 2, v_pos_1113_);
lean_ctor_set(v_reuseFailAlloc_1123_, 3, v_cache_1114_);
lean_ctor_set(v_reuseFailAlloc_1123_, 4, v_errorMsg_1115_);
lean_ctor_set(v_reuseFailAlloc_1123_, 5, v_recoveredErrors_1116_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_shrinkStack(lean_object* v_s_1125_, lean_object* v_iniStackSz_1126_){
_start:
{
lean_object* v_stxStack_1127_; lean_object* v_lhsPrec_1128_; lean_object* v_pos_1129_; lean_object* v_cache_1130_; lean_object* v_errorMsg_1131_; lean_object* v_recoveredErrors_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1140_; 
v_stxStack_1127_ = lean_ctor_get(v_s_1125_, 0);
v_lhsPrec_1128_ = lean_ctor_get(v_s_1125_, 1);
v_pos_1129_ = lean_ctor_get(v_s_1125_, 2);
v_cache_1130_ = lean_ctor_get(v_s_1125_, 3);
v_errorMsg_1131_ = lean_ctor_get(v_s_1125_, 4);
v_recoveredErrors_1132_ = lean_ctor_get(v_s_1125_, 5);
v_isSharedCheck_1140_ = !lean_is_exclusive(v_s_1125_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1134_ = v_s_1125_;
v_isShared_1135_ = v_isSharedCheck_1140_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_recoveredErrors_1132_);
lean_inc(v_errorMsg_1131_);
lean_inc(v_cache_1130_);
lean_inc(v_pos_1129_);
lean_inc(v_lhsPrec_1128_);
lean_inc(v_stxStack_1127_);
lean_dec(v_s_1125_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1140_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___x_1136_; lean_object* v___x_1138_; 
v___x_1136_ = l_Lean_Parser_SyntaxStack_shrink(v_stxStack_1127_, v_iniStackSz_1126_);
if (v_isShared_1135_ == 0)
{
lean_ctor_set(v___x_1134_, 0, v___x_1136_);
v___x_1138_ = v___x_1134_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1136_);
lean_ctor_set(v_reuseFailAlloc_1139_, 1, v_lhsPrec_1128_);
lean_ctor_set(v_reuseFailAlloc_1139_, 2, v_pos_1129_);
lean_ctor_set(v_reuseFailAlloc_1139_, 3, v_cache_1130_);
lean_ctor_set(v_reuseFailAlloc_1139_, 4, v_errorMsg_1131_);
lean_ctor_set(v_reuseFailAlloc_1139_, 5, v_recoveredErrors_1132_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_shrinkStack___boxed(lean_object* v_s_1141_, lean_object* v_iniStackSz_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l_Lean_Parser_ParserState_shrinkStack(v_s_1141_, v_iniStackSz_1142_);
lean_dec(v_iniStackSz_1142_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next(lean_object* v_s_1144_, lean_object* v_c_1145_, lean_object* v_pos_1146_){
_start:
{
lean_object* v_toInputContext_1147_; lean_object* v_stxStack_1148_; lean_object* v_lhsPrec_1149_; lean_object* v_cache_1150_; lean_object* v_errorMsg_1151_; lean_object* v_recoveredErrors_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1161_; 
v_toInputContext_1147_ = lean_ctor_get(v_c_1145_, 0);
v_stxStack_1148_ = lean_ctor_get(v_s_1144_, 0);
v_lhsPrec_1149_ = lean_ctor_get(v_s_1144_, 1);
v_cache_1150_ = lean_ctor_get(v_s_1144_, 3);
v_errorMsg_1151_ = lean_ctor_get(v_s_1144_, 4);
v_recoveredErrors_1152_ = lean_ctor_get(v_s_1144_, 5);
v_isSharedCheck_1161_ = !lean_is_exclusive(v_s_1144_);
if (v_isSharedCheck_1161_ == 0)
{
lean_object* v_unused_1162_; 
v_unused_1162_ = lean_ctor_get(v_s_1144_, 2);
lean_dec(v_unused_1162_);
v___x_1154_ = v_s_1144_;
v_isShared_1155_ = v_isSharedCheck_1161_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_recoveredErrors_1152_);
lean_inc(v_errorMsg_1151_);
lean_inc(v_cache_1150_);
lean_inc(v_lhsPrec_1149_);
lean_inc(v_stxStack_1148_);
lean_dec(v_s_1144_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1161_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v_inputString_1156_; lean_object* v___x_1157_; lean_object* v___x_1159_; 
v_inputString_1156_ = lean_ctor_get(v_toInputContext_1147_, 0);
v___x_1157_ = lean_string_utf8_next(v_inputString_1156_, v_pos_1146_);
if (v_isShared_1155_ == 0)
{
lean_ctor_set(v___x_1154_, 2, v___x_1157_);
v___x_1159_ = v___x_1154_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_stxStack_1148_);
lean_ctor_set(v_reuseFailAlloc_1160_, 1, v_lhsPrec_1149_);
lean_ctor_set(v_reuseFailAlloc_1160_, 2, v___x_1157_);
lean_ctor_set(v_reuseFailAlloc_1160_, 3, v_cache_1150_);
lean_ctor_set(v_reuseFailAlloc_1160_, 4, v_errorMsg_1151_);
lean_ctor_set(v_reuseFailAlloc_1160_, 5, v_recoveredErrors_1152_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next___boxed(lean_object* v_s_1163_, lean_object* v_c_1164_, lean_object* v_pos_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_Lean_Parser_ParserState_next(v_s_1163_, v_c_1164_, v_pos_1165_);
lean_dec(v_pos_1165_);
lean_dec_ref(v_c_1164_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27___redArg(lean_object* v_s_1167_, lean_object* v_c_1168_, lean_object* v_pos_1169_){
_start:
{
lean_object* v_toInputContext_1170_; lean_object* v_stxStack_1171_; lean_object* v_lhsPrec_1172_; lean_object* v_cache_1173_; lean_object* v_errorMsg_1174_; lean_object* v_recoveredErrors_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1184_; 
v_toInputContext_1170_ = lean_ctor_get(v_c_1168_, 0);
v_stxStack_1171_ = lean_ctor_get(v_s_1167_, 0);
v_lhsPrec_1172_ = lean_ctor_get(v_s_1167_, 1);
v_cache_1173_ = lean_ctor_get(v_s_1167_, 3);
v_errorMsg_1174_ = lean_ctor_get(v_s_1167_, 4);
v_recoveredErrors_1175_ = lean_ctor_get(v_s_1167_, 5);
v_isSharedCheck_1184_ = !lean_is_exclusive(v_s_1167_);
if (v_isSharedCheck_1184_ == 0)
{
lean_object* v_unused_1185_; 
v_unused_1185_ = lean_ctor_get(v_s_1167_, 2);
lean_dec(v_unused_1185_);
v___x_1177_ = v_s_1167_;
v_isShared_1178_ = v_isSharedCheck_1184_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_recoveredErrors_1175_);
lean_inc(v_errorMsg_1174_);
lean_inc(v_cache_1173_);
lean_inc(v_lhsPrec_1172_);
lean_inc(v_stxStack_1171_);
lean_dec(v_s_1167_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1184_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v_inputString_1179_; lean_object* v___x_1180_; lean_object* v___x_1182_; 
v_inputString_1179_ = lean_ctor_get(v_toInputContext_1170_, 0);
v___x_1180_ = lean_string_utf8_next_fast(v_inputString_1179_, v_pos_1169_);
if (v_isShared_1178_ == 0)
{
lean_ctor_set(v___x_1177_, 2, v___x_1180_);
v___x_1182_ = v___x_1177_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v_stxStack_1171_);
lean_ctor_set(v_reuseFailAlloc_1183_, 1, v_lhsPrec_1172_);
lean_ctor_set(v_reuseFailAlloc_1183_, 2, v___x_1180_);
lean_ctor_set(v_reuseFailAlloc_1183_, 3, v_cache_1173_);
lean_ctor_set(v_reuseFailAlloc_1183_, 4, v_errorMsg_1174_);
lean_ctor_set(v_reuseFailAlloc_1183_, 5, v_recoveredErrors_1175_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27___redArg___boxed(lean_object* v_s_1186_, lean_object* v_c_1187_, lean_object* v_pos_1188_){
_start:
{
lean_object* v_res_1189_; 
v_res_1189_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1186_, v_c_1187_, v_pos_1188_);
lean_dec(v_pos_1188_);
lean_dec_ref(v_c_1187_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27(lean_object* v_s_1190_, lean_object* v_c_1191_, lean_object* v_pos_1192_, lean_object* v_h_1193_){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1190_, v_c_1191_, v_pos_1192_);
return v___x_1194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27___boxed(lean_object* v_s_1195_, lean_object* v_c_1196_, lean_object* v_pos_1197_, lean_object* v_h_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l_Lean_Parser_ParserState_next_x27(v_s_1195_, v_c_1196_, v_pos_1197_, v_h_1198_);
lean_dec(v_pos_1197_);
lean_dec_ref(v_c_1196_);
return v_res_1199_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Parser_ParserState_mkNode_spec__0(lean_object* v_x_1200_, lean_object* v_x_1201_){
_start:
{
if (lean_obj_tag(v_x_1200_) == 0)
{
if (lean_obj_tag(v_x_1201_) == 0)
{
uint8_t v___x_1202_; 
v___x_1202_ = 1;
return v___x_1202_;
}
else
{
uint8_t v___x_1203_; 
v___x_1203_ = 0;
return v___x_1203_;
}
}
else
{
if (lean_obj_tag(v_x_1201_) == 0)
{
uint8_t v___x_1204_; 
v___x_1204_ = 0;
return v___x_1204_;
}
else
{
lean_object* v_val_1205_; lean_object* v_val_1206_; uint8_t v___x_1207_; 
v_val_1205_ = lean_ctor_get(v_x_1200_, 0);
v_val_1206_ = lean_ctor_get(v_x_1201_, 0);
v___x_1207_ = l_Lean_Parser_instBEqError_beq(v_val_1205_, v_val_1206_);
return v___x_1207_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Parser_ParserState_mkNode_spec__0___boxed(lean_object* v_x_1208_, lean_object* v_x_1209_){
_start:
{
uint8_t v_res_1210_; lean_object* v_r_1211_; 
v_res_1210_ = l_instBEqOption_beq___at___00Lean_Parser_ParserState_mkNode_spec__0(v_x_1208_, v_x_1209_);
lean_dec(v_x_1209_);
lean_dec(v_x_1208_);
v_r_1211_ = lean_box(v_res_1210_);
return v_r_1211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkNode(lean_object* v_s_1212_, lean_object* v_k_1213_, lean_object* v_iniStackSz_1214_){
_start:
{
lean_object* v_stxStack_1215_; lean_object* v_lhsPrec_1216_; lean_object* v_pos_1217_; lean_object* v_cache_1218_; lean_object* v_errorMsg_1219_; lean_object* v_recoveredErrors_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1241_; 
v_stxStack_1215_ = lean_ctor_get(v_s_1212_, 0);
v_lhsPrec_1216_ = lean_ctor_get(v_s_1212_, 1);
v_pos_1217_ = lean_ctor_get(v_s_1212_, 2);
v_cache_1218_ = lean_ctor_get(v_s_1212_, 3);
v_errorMsg_1219_ = lean_ctor_get(v_s_1212_, 4);
v_recoveredErrors_1220_ = lean_ctor_get(v_s_1212_, 5);
v_isSharedCheck_1241_ = !lean_is_exclusive(v_s_1212_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1222_ = v_s_1212_;
v_isShared_1223_ = v_isSharedCheck_1241_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_recoveredErrors_1220_);
lean_inc(v_errorMsg_1219_);
lean_inc(v_cache_1218_);
lean_inc(v_pos_1217_);
lean_inc(v_lhsPrec_1216_);
lean_inc(v_stxStack_1215_);
lean_dec(v_s_1212_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1241_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1234_; uint8_t v___x_1235_; 
v___x_1234_ = lean_box(0);
v___x_1235_ = l_instBEqOption_beq___at___00Lean_Parser_ParserState_mkNode_spec__0(v_errorMsg_1219_, v___x_1234_);
if (v___x_1235_ == 0)
{
lean_object* v___x_1236_; uint8_t v___x_1237_; 
v___x_1236_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_1215_);
v___x_1237_ = lean_nat_dec_eq(v___x_1236_, v_iniStackSz_1214_);
lean_dec(v___x_1236_);
if (v___x_1237_ == 0)
{
goto v___jp_1224_;
}
else
{
lean_object* v___x_1238_; lean_object* v_stack_1239_; lean_object* v___x_1240_; 
lean_del_object(v___x_1222_);
lean_dec(v_k_1213_);
v___x_1238_ = lean_box(0);
v_stack_1239_ = l_Lean_Parser_SyntaxStack_push(v_stxStack_1215_, v___x_1238_);
v___x_1240_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1240_, 0, v_stack_1239_);
lean_ctor_set(v___x_1240_, 1, v_lhsPrec_1216_);
lean_ctor_set(v___x_1240_, 2, v_pos_1217_);
lean_ctor_set(v___x_1240_, 3, v_cache_1218_);
lean_ctor_set(v___x_1240_, 4, v_errorMsg_1219_);
lean_ctor_set(v___x_1240_, 5, v_recoveredErrors_1220_);
return v___x_1240_;
}
}
else
{
goto v___jp_1224_;
}
v___jp_1224_:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v_newNode_1228_; lean_object* v_stack_1229_; lean_object* v_stack_1230_; lean_object* v___x_1232_; 
v___x_1225_ = lean_box(2);
v___x_1226_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_1215_);
v___x_1227_ = l_Lean_Parser_SyntaxStack_extract(v_stxStack_1215_, v_iniStackSz_1214_, v___x_1226_);
lean_dec(v___x_1226_);
v_newNode_1228_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_newNode_1228_, 0, v___x_1225_);
lean_ctor_set(v_newNode_1228_, 1, v_k_1213_);
lean_ctor_set(v_newNode_1228_, 2, v___x_1227_);
v_stack_1229_ = l_Lean_Parser_SyntaxStack_shrink(v_stxStack_1215_, v_iniStackSz_1214_);
v_stack_1230_ = l_Lean_Parser_SyntaxStack_push(v_stack_1229_, v_newNode_1228_);
if (v_isShared_1223_ == 0)
{
lean_ctor_set(v___x_1222_, 0, v_stack_1230_);
v___x_1232_ = v___x_1222_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v_stack_1230_);
lean_ctor_set(v_reuseFailAlloc_1233_, 1, v_lhsPrec_1216_);
lean_ctor_set(v_reuseFailAlloc_1233_, 2, v_pos_1217_);
lean_ctor_set(v_reuseFailAlloc_1233_, 3, v_cache_1218_);
lean_ctor_set(v_reuseFailAlloc_1233_, 4, v_errorMsg_1219_);
lean_ctor_set(v_reuseFailAlloc_1233_, 5, v_recoveredErrors_1220_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
return v___x_1232_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkNode___boxed(lean_object* v_s_1242_, lean_object* v_k_1243_, lean_object* v_iniStackSz_1244_){
_start:
{
lean_object* v_res_1245_; 
v_res_1245_ = l_Lean_Parser_ParserState_mkNode(v_s_1242_, v_k_1243_, v_iniStackSz_1244_);
lean_dec(v_iniStackSz_1244_);
return v_res_1245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkTrailingNode(lean_object* v_s_1246_, lean_object* v_k_1247_, lean_object* v_iniStackSz_1248_){
_start:
{
lean_object* v_stxStack_1249_; lean_object* v_lhsPrec_1250_; lean_object* v_pos_1251_; lean_object* v_cache_1252_; lean_object* v_errorMsg_1253_; lean_object* v_recoveredErrors_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1269_; 
v_stxStack_1249_ = lean_ctor_get(v_s_1246_, 0);
v_lhsPrec_1250_ = lean_ctor_get(v_s_1246_, 1);
v_pos_1251_ = lean_ctor_get(v_s_1246_, 2);
v_cache_1252_ = lean_ctor_get(v_s_1246_, 3);
v_errorMsg_1253_ = lean_ctor_get(v_s_1246_, 4);
v_recoveredErrors_1254_ = lean_ctor_get(v_s_1246_, 5);
v_isSharedCheck_1269_ = !lean_is_exclusive(v_s_1246_);
if (v_isSharedCheck_1269_ == 0)
{
v___x_1256_ = v_s_1246_;
v_isShared_1257_ = v_isSharedCheck_1269_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_recoveredErrors_1254_);
lean_inc(v_errorMsg_1253_);
lean_inc(v_cache_1252_);
lean_inc(v_pos_1251_);
lean_inc(v_lhsPrec_1250_);
lean_inc(v_stxStack_1249_);
lean_dec(v_s_1246_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1269_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v_newNode_1263_; lean_object* v_stack_1264_; lean_object* v_stack_1265_; lean_object* v___x_1267_; 
v___x_1258_ = lean_box(2);
v___x_1259_ = lean_unsigned_to_nat(1u);
v___x_1260_ = lean_nat_sub(v_iniStackSz_1248_, v___x_1259_);
v___x_1261_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_1249_);
v___x_1262_ = l_Lean_Parser_SyntaxStack_extract(v_stxStack_1249_, v___x_1260_, v___x_1261_);
lean_dec(v___x_1261_);
v_newNode_1263_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_newNode_1263_, 0, v___x_1258_);
lean_ctor_set(v_newNode_1263_, 1, v_k_1247_);
lean_ctor_set(v_newNode_1263_, 2, v___x_1262_);
v_stack_1264_ = l_Lean_Parser_SyntaxStack_shrink(v_stxStack_1249_, v___x_1260_);
lean_dec(v___x_1260_);
v_stack_1265_ = l_Lean_Parser_SyntaxStack_push(v_stack_1264_, v_newNode_1263_);
if (v_isShared_1257_ == 0)
{
lean_ctor_set(v___x_1256_, 0, v_stack_1265_);
v___x_1267_ = v___x_1256_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v_stack_1265_);
lean_ctor_set(v_reuseFailAlloc_1268_, 1, v_lhsPrec_1250_);
lean_ctor_set(v_reuseFailAlloc_1268_, 2, v_pos_1251_);
lean_ctor_set(v_reuseFailAlloc_1268_, 3, v_cache_1252_);
lean_ctor_set(v_reuseFailAlloc_1268_, 4, v_errorMsg_1253_);
lean_ctor_set(v_reuseFailAlloc_1268_, 5, v_recoveredErrors_1254_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
return v___x_1267_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkTrailingNode___boxed(lean_object* v_s_1270_, lean_object* v_k_1271_, lean_object* v_iniStackSz_1272_){
_start:
{
lean_object* v_res_1273_; 
v_res_1273_ = l_Lean_Parser_ParserState_mkTrailingNode(v_s_1270_, v_k_1271_, v_iniStackSz_1272_);
lean_dec(v_iniStackSz_1272_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_allErrors(lean_object* v_s_1276_){
_start:
{
lean_object* v_errorMsg_1277_; 
v_errorMsg_1277_ = lean_ctor_get(v_s_1276_, 4);
if (lean_obj_tag(v_errorMsg_1277_) == 0)
{
lean_object* v_recoveredErrors_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v_recoveredErrors_1278_ = lean_ctor_get(v_s_1276_, 5);
lean_inc_ref(v_recoveredErrors_1278_);
lean_dec_ref(v_s_1276_);
v___x_1279_ = ((lean_object*)(l_Lean_Parser_ParserState_allErrors___closed__0));
v___x_1280_ = l_Array_append___redArg(v_recoveredErrors_1278_, v___x_1279_);
return v___x_1280_;
}
else
{
lean_object* v_stxStack_1281_; lean_object* v_pos_1282_; lean_object* v_recoveredErrors_1283_; lean_object* v_val_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; 
lean_inc_ref(v_errorMsg_1277_);
v_stxStack_1281_ = lean_ctor_get(v_s_1276_, 0);
lean_inc_ref(v_stxStack_1281_);
v_pos_1282_ = lean_ctor_get(v_s_1276_, 2);
lean_inc(v_pos_1282_);
v_recoveredErrors_1283_ = lean_ctor_get(v_s_1276_, 5);
lean_inc_ref(v_recoveredErrors_1283_);
lean_dec_ref(v_s_1276_);
v_val_1284_ = lean_ctor_get(v_errorMsg_1277_, 0);
lean_inc(v_val_1284_);
lean_dec_ref_known(v_errorMsg_1277_, 1);
v___x_1285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1285_, 0, v_stxStack_1281_);
lean_ctor_set(v___x_1285_, 1, v_val_1284_);
v___x_1286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1286_, 0, v_pos_1282_);
lean_ctor_set(v___x_1286_, 1, v___x_1285_);
v___x_1287_ = lean_unsigned_to_nat(1u);
v___x_1288_ = lean_mk_empty_array_with_capacity(v___x_1287_);
v___x_1289_ = lean_array_push(v___x_1288_, v___x_1286_);
v___x_1290_ = l_Array_append___redArg(v_recoveredErrors_1283_, v___x_1289_);
lean_dec_ref(v___x_1289_);
return v___x_1290_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_setError(lean_object* v_s_1291_, lean_object* v_e_1292_){
_start:
{
lean_object* v_stxStack_1293_; lean_object* v_lhsPrec_1294_; lean_object* v_pos_1295_; lean_object* v_cache_1296_; lean_object* v_recoveredErrors_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1305_; 
v_stxStack_1293_ = lean_ctor_get(v_s_1291_, 0);
v_lhsPrec_1294_ = lean_ctor_get(v_s_1291_, 1);
v_pos_1295_ = lean_ctor_get(v_s_1291_, 2);
v_cache_1296_ = lean_ctor_get(v_s_1291_, 3);
v_recoveredErrors_1297_ = lean_ctor_get(v_s_1291_, 5);
v_isSharedCheck_1305_ = !lean_is_exclusive(v_s_1291_);
if (v_isSharedCheck_1305_ == 0)
{
lean_object* v_unused_1306_; 
v_unused_1306_ = lean_ctor_get(v_s_1291_, 4);
lean_dec(v_unused_1306_);
v___x_1299_ = v_s_1291_;
v_isShared_1300_ = v_isSharedCheck_1305_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_recoveredErrors_1297_);
lean_inc(v_cache_1296_);
lean_inc(v_pos_1295_);
lean_inc(v_lhsPrec_1294_);
lean_inc(v_stxStack_1293_);
lean_dec(v_s_1291_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1305_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1301_; lean_object* v___x_1303_; 
v___x_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1301_, 0, v_e_1292_);
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 4, v___x_1301_);
v___x_1303_ = v___x_1299_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v_stxStack_1293_);
lean_ctor_set(v_reuseFailAlloc_1304_, 1, v_lhsPrec_1294_);
lean_ctor_set(v_reuseFailAlloc_1304_, 2, v_pos_1295_);
lean_ctor_set(v_reuseFailAlloc_1304_, 3, v_cache_1296_);
lean_ctor_set(v_reuseFailAlloc_1304_, 4, v___x_1301_);
lean_ctor_set(v_reuseFailAlloc_1304_, 5, v_recoveredErrors_1297_);
v___x_1303_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
return v___x_1303_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkError(lean_object* v_s_1307_, lean_object* v_msg_1308_){
_start:
{
lean_object* v_stxStack_1309_; lean_object* v_lhsPrec_1310_; lean_object* v_pos_1311_; lean_object* v_cache_1312_; lean_object* v_recoveredErrors_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1327_; 
v_stxStack_1309_ = lean_ctor_get(v_s_1307_, 0);
v_lhsPrec_1310_ = lean_ctor_get(v_s_1307_, 1);
v_pos_1311_ = lean_ctor_get(v_s_1307_, 2);
v_cache_1312_ = lean_ctor_get(v_s_1307_, 3);
v_recoveredErrors_1313_ = lean_ctor_get(v_s_1307_, 5);
v_isSharedCheck_1327_ = !lean_is_exclusive(v_s_1307_);
if (v_isSharedCheck_1327_ == 0)
{
lean_object* v_unused_1328_; 
v_unused_1328_ = lean_ctor_get(v_s_1307_, 4);
lean_dec(v_unused_1328_);
v___x_1315_ = v_s_1307_;
v_isShared_1316_ = v_isSharedCheck_1327_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_recoveredErrors_1313_);
lean_inc(v_cache_1312_);
lean_inc(v_pos_1311_);
lean_inc(v_lhsPrec_1310_);
lean_inc(v_stxStack_1309_);
lean_dec(v_s_1307_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1327_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1324_; 
v___x_1317_ = lean_box(0);
v___x_1318_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_1319_ = lean_box(0);
v___x_1320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1320_, 0, v_msg_1308_);
lean_ctor_set(v___x_1320_, 1, v___x_1319_);
v___x_1321_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1317_);
lean_ctor_set(v___x_1321_, 1, v___x_1318_);
lean_ctor_set(v___x_1321_, 2, v___x_1320_);
v___x_1322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1322_, 0, v___x_1321_);
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 4, v___x_1322_);
v___x_1324_ = v___x_1315_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v_stxStack_1309_);
lean_ctor_set(v_reuseFailAlloc_1326_, 1, v_lhsPrec_1310_);
lean_ctor_set(v_reuseFailAlloc_1326_, 2, v_pos_1311_);
lean_ctor_set(v_reuseFailAlloc_1326_, 3, v_cache_1312_);
lean_ctor_set(v_reuseFailAlloc_1326_, 4, v___x_1322_);
lean_ctor_set(v_reuseFailAlloc_1326_, 5, v_recoveredErrors_1313_);
v___x_1324_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
lean_object* v___x_1325_; 
v___x_1325_ = l_Lean_Parser_ParserState_pushSyntax(v___x_1324_, v___x_1317_);
return v___x_1325_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object* v_s_1329_, lean_object* v_msg_1330_, lean_object* v_expected_1331_, uint8_t v_pushMissing_1332_){
_start:
{
lean_object* v_stxStack_1333_; lean_object* v_lhsPrec_1334_; lean_object* v_pos_1335_; lean_object* v_cache_1336_; lean_object* v_recoveredErrors_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1348_; 
v_stxStack_1333_ = lean_ctor_get(v_s_1329_, 0);
v_lhsPrec_1334_ = lean_ctor_get(v_s_1329_, 1);
v_pos_1335_ = lean_ctor_get(v_s_1329_, 2);
v_cache_1336_ = lean_ctor_get(v_s_1329_, 3);
v_recoveredErrors_1337_ = lean_ctor_get(v_s_1329_, 5);
v_isSharedCheck_1348_ = !lean_is_exclusive(v_s_1329_);
if (v_isSharedCheck_1348_ == 0)
{
lean_object* v_unused_1349_; 
v_unused_1349_ = lean_ctor_get(v_s_1329_, 4);
lean_dec(v_unused_1349_);
v___x_1339_ = v_s_1329_;
v_isShared_1340_ = v_isSharedCheck_1348_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_recoveredErrors_1337_);
lean_inc(v_cache_1336_);
lean_inc(v_pos_1335_);
lean_inc(v_lhsPrec_1334_);
lean_inc(v_stxStack_1333_);
lean_dec(v_s_1329_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1348_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v_s_1345_; 
v___x_1341_ = lean_box(0);
v___x_1342_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1342_, 0, v___x_1341_);
lean_ctor_set(v___x_1342_, 1, v_msg_1330_);
lean_ctor_set(v___x_1342_, 2, v_expected_1331_);
v___x_1343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1342_);
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 4, v___x_1343_);
v_s_1345_ = v___x_1339_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v_stxStack_1333_);
lean_ctor_set(v_reuseFailAlloc_1347_, 1, v_lhsPrec_1334_);
lean_ctor_set(v_reuseFailAlloc_1347_, 2, v_pos_1335_);
lean_ctor_set(v_reuseFailAlloc_1347_, 3, v_cache_1336_);
lean_ctor_set(v_reuseFailAlloc_1347_, 4, v___x_1343_);
lean_ctor_set(v_reuseFailAlloc_1347_, 5, v_recoveredErrors_1337_);
v_s_1345_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
if (v_pushMissing_1332_ == 0)
{
return v_s_1345_;
}
else
{
lean_object* v___x_1346_; 
v___x_1346_ = l_Lean_Parser_ParserState_pushSyntax(v_s_1345_, v___x_1341_);
return v___x_1346_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedError___boxed(lean_object* v_s_1350_, lean_object* v_msg_1351_, lean_object* v_expected_1352_, lean_object* v_pushMissing_1353_){
_start:
{
uint8_t v_pushMissing_boxed_1354_; lean_object* v_res_1355_; 
v_pushMissing_boxed_1354_ = lean_unbox(v_pushMissing_1353_);
v_res_1355_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1350_, v_msg_1351_, v_expected_1352_, v_pushMissing_boxed_1354_);
return v_res_1355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkEOIError(lean_object* v_s_1357_, lean_object* v_expected_1358_){
_start:
{
lean_object* v___x_1359_; uint8_t v___x_1360_; lean_object* v___x_1361_; 
v___x_1359_ = ((lean_object*)(l_Lean_Parser_ParserState_mkEOIError___closed__0));
v___x_1360_ = 1;
v___x_1361_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1357_, v___x_1359_, v_expected_1358_, v___x_1360_);
return v___x_1361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorsAt(lean_object* v_s_1362_, lean_object* v_ex_1363_, lean_object* v_pos_1364_, lean_object* v_initStackSz_x3f_1365_){
_start:
{
lean_object* v_s_1367_; lean_object* v_s_1386_; 
v_s_1386_ = l_Lean_Parser_ParserState_setPos(v_s_1362_, v_pos_1364_);
if (lean_obj_tag(v_initStackSz_x3f_1365_) == 1)
{
lean_object* v_val_1387_; lean_object* v_s_1388_; 
v_val_1387_ = lean_ctor_get(v_initStackSz_x3f_1365_, 0);
v_s_1388_ = l_Lean_Parser_ParserState_shrinkStack(v_s_1386_, v_val_1387_);
v_s_1367_ = v_s_1388_;
goto v___jp_1366_;
}
else
{
v_s_1367_ = v_s_1386_;
goto v___jp_1366_;
}
v___jp_1366_:
{
lean_object* v_stxStack_1368_; lean_object* v_lhsPrec_1369_; lean_object* v_pos_1370_; lean_object* v_cache_1371_; lean_object* v_recoveredErrors_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1384_; 
v_stxStack_1368_ = lean_ctor_get(v_s_1367_, 0);
v_lhsPrec_1369_ = lean_ctor_get(v_s_1367_, 1);
v_pos_1370_ = lean_ctor_get(v_s_1367_, 2);
v_cache_1371_ = lean_ctor_get(v_s_1367_, 3);
v_recoveredErrors_1372_ = lean_ctor_get(v_s_1367_, 5);
v_isSharedCheck_1384_ = !lean_is_exclusive(v_s_1367_);
if (v_isSharedCheck_1384_ == 0)
{
lean_object* v_unused_1385_; 
v_unused_1385_ = lean_ctor_get(v_s_1367_, 4);
lean_dec(v_unused_1385_);
v___x_1374_ = v_s_1367_;
v_isShared_1375_ = v_isSharedCheck_1384_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_recoveredErrors_1372_);
lean_inc(v_cache_1371_);
lean_inc(v_pos_1370_);
lean_inc(v_lhsPrec_1369_);
lean_inc(v_stxStack_1368_);
lean_dec(v_s_1367_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1384_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v_s_1381_; 
v___x_1376_ = lean_box(0);
v___x_1377_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_1378_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1376_);
lean_ctor_set(v___x_1378_, 1, v___x_1377_);
lean_ctor_set(v___x_1378_, 2, v_ex_1363_);
v___x_1379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1379_, 0, v___x_1378_);
if (v_isShared_1375_ == 0)
{
lean_ctor_set(v___x_1374_, 4, v___x_1379_);
v_s_1381_ = v___x_1374_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v_stxStack_1368_);
lean_ctor_set(v_reuseFailAlloc_1383_, 1, v_lhsPrec_1369_);
lean_ctor_set(v_reuseFailAlloc_1383_, 2, v_pos_1370_);
lean_ctor_set(v_reuseFailAlloc_1383_, 3, v_cache_1371_);
lean_ctor_set(v_reuseFailAlloc_1383_, 4, v___x_1379_);
lean_ctor_set(v_reuseFailAlloc_1383_, 5, v_recoveredErrors_1372_);
v_s_1381_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
lean_object* v___x_1382_; 
v___x_1382_ = l_Lean_Parser_ParserState_pushSyntax(v_s_1381_, v___x_1376_);
return v___x_1382_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorsAt___boxed(lean_object* v_s_1389_, lean_object* v_ex_1390_, lean_object* v_pos_1391_, lean_object* v_initStackSz_x3f_1392_){
_start:
{
lean_object* v_res_1393_; 
v_res_1393_ = l_Lean_Parser_ParserState_mkErrorsAt(v_s_1389_, v_ex_1390_, v_pos_1391_, v_initStackSz_x3f_1392_);
lean_dec(v_initStackSz_x3f_1392_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorAt(lean_object* v_s_1394_, lean_object* v_msg_1395_, lean_object* v_pos_1396_, lean_object* v_initStackSz_x3f_1397_){
_start:
{
lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1398_ = lean_box(0);
v___x_1399_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1399_, 0, v_msg_1395_);
lean_ctor_set(v___x_1399_, 1, v___x_1398_);
v___x_1400_ = l_Lean_Parser_ParserState_mkErrorsAt(v_s_1394_, v___x_1399_, v_pos_1396_, v_initStackSz_x3f_1397_);
return v___x_1400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorAt___boxed(lean_object* v_s_1401_, lean_object* v_msg_1402_, lean_object* v_pos_1403_, lean_object* v_initStackSz_x3f_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l_Lean_Parser_ParserState_mkErrorAt(v_s_1401_, v_msg_1402_, v_pos_1403_, v_initStackSz_x3f_1404_);
lean_dec(v_initStackSz_x3f_1404_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_ParserState_mkUnexpectedTokenErrors_spec__0(lean_object* v_msg_1406_){
_start:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___x_1407_ = lean_unsigned_to_nat(0u);
v___x_1408_ = lean_panic_fn_borrowed(v___x_1407_, v_msg_1406_);
return v___x_1408_;
}
}
static lean_object* _init_l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__3(void){
_start:
{
lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; 
v___x_1412_ = ((lean_object*)(l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__2));
v___x_1413_ = lean_unsigned_to_nat(14u);
v___x_1414_ = lean_unsigned_to_nat(22u);
v___x_1415_ = ((lean_object*)(l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__1));
v___x_1416_ = ((lean_object*)(l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__0));
v___x_1417_ = l_mkPanicMessageWithDecl(v___x_1416_, v___x_1415_, v___x_1414_, v___x_1413_, v___x_1412_);
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors(lean_object* v_s_1418_, lean_object* v_ex_1419_, lean_object* v_iniPos_1420_){
_start:
{
lean_object* v_stxStack_1421_; lean_object* v_tk_1422_; lean_object* v___y_1424_; lean_object* v___x_1445_; uint8_t v___x_1446_; 
v_stxStack_1421_ = lean_ctor_get(v_s_1418_, 0);
v_tk_1422_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1421_);
v___x_1445_ = lean_unsigned_to_nat(1u);
v___x_1446_ = lean_nat_dec_le(v___x_1445_, v_iniPos_1420_);
if (v___x_1446_ == 0)
{
lean_object* v___x_1447_; 
lean_dec(v_iniPos_1420_);
v___x_1447_ = l_Lean_Syntax_getPos_x3f(v_tk_1422_, v___x_1446_);
if (lean_obj_tag(v___x_1447_) == 0)
{
lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1448_ = lean_obj_once(&l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__3, &l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__3_once, _init_l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__3);
v___x_1449_ = l_panic___at___00Lean_Parser_ParserState_mkUnexpectedTokenErrors_spec__0(v___x_1448_);
v___y_1424_ = v___x_1449_;
goto v___jp_1423_;
}
else
{
lean_object* v_val_1450_; 
v_val_1450_ = lean_ctor_get(v___x_1447_, 0);
lean_inc(v_val_1450_);
lean_dec_ref_known(v___x_1447_, 1);
v___y_1424_ = v_val_1450_;
goto v___jp_1423_;
}
}
else
{
v___y_1424_ = v_iniPos_1420_;
goto v___jp_1423_;
}
v___jp_1423_:
{
lean_object* v_s_1425_; lean_object* v_stxStack_1426_; lean_object* v_lhsPrec_1427_; lean_object* v_pos_1428_; lean_object* v_cache_1429_; lean_object* v_recoveredErrors_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1443_; 
v_s_1425_ = l_Lean_Parser_ParserState_setPos(v_s_1418_, v___y_1424_);
v_stxStack_1426_ = lean_ctor_get(v_s_1425_, 0);
v_lhsPrec_1427_ = lean_ctor_get(v_s_1425_, 1);
v_pos_1428_ = lean_ctor_get(v_s_1425_, 2);
v_cache_1429_ = lean_ctor_get(v_s_1425_, 3);
v_recoveredErrors_1430_ = lean_ctor_get(v_s_1425_, 5);
v_isSharedCheck_1443_ = !lean_is_exclusive(v_s_1425_);
if (v_isSharedCheck_1443_ == 0)
{
lean_object* v_unused_1444_; 
v_unused_1444_ = lean_ctor_get(v_s_1425_, 4);
lean_dec(v_unused_1444_);
v___x_1432_ = v_s_1425_;
v_isShared_1433_ = v_isSharedCheck_1443_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_recoveredErrors_1430_);
lean_inc(v_cache_1429_);
lean_inc(v_pos_1428_);
lean_inc(v_lhsPrec_1427_);
lean_inc(v_stxStack_1426_);
lean_dec(v_s_1425_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1443_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v_s_1438_; 
v___x_1434_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_1435_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1435_, 0, v_tk_1422_);
lean_ctor_set(v___x_1435_, 1, v___x_1434_);
lean_ctor_set(v___x_1435_, 2, v_ex_1419_);
v___x_1436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1436_, 0, v___x_1435_);
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 4, v___x_1436_);
v_s_1438_ = v___x_1432_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_stxStack_1426_);
lean_ctor_set(v_reuseFailAlloc_1442_, 1, v_lhsPrec_1427_);
lean_ctor_set(v_reuseFailAlloc_1442_, 2, v_pos_1428_);
lean_ctor_set(v_reuseFailAlloc_1442_, 3, v_cache_1429_);
lean_ctor_set(v_reuseFailAlloc_1442_, 4, v___x_1436_);
lean_ctor_set(v_reuseFailAlloc_1442_, 5, v_recoveredErrors_1430_);
v_s_1438_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; 
v___x_1439_ = l_Lean_Parser_ParserState_popSyntax(v_s_1438_);
v___x_1440_ = lean_box(0);
v___x_1441_ = l_Lean_Parser_ParserState_pushSyntax(v___x_1439_, v___x_1440_);
return v___x_1441_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenError(lean_object* v_s_1451_, lean_object* v_msg_1452_, lean_object* v_iniPos_1453_){
_start:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1454_ = lean_box(0);
v___x_1455_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1455_, 0, v_msg_1452_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
v___x_1456_ = l_Lean_Parser_ParserState_mkUnexpectedTokenErrors(v_s_1451_, v___x_1455_, v_iniPos_1453_);
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedErrorAt(lean_object* v_s_1457_, lean_object* v_msg_1458_, lean_object* v_pos_1459_){
_start:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; uint8_t v___x_1462_; lean_object* v___x_1463_; 
v___x_1460_ = l_Lean_Parser_ParserState_setPos(v_s_1457_, v_pos_1459_);
v___x_1461_ = lean_box(0);
v___x_1462_ = 1;
v___x_1463_ = l_Lean_Parser_ParserState_mkUnexpectedError(v___x_1460_, v_msg_1458_, v___x_1461_, v___x_1462_);
return v___x_1463_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0(lean_object* v_ctx_1465_, lean_object* v_as_1466_, size_t v_sz_1467_, size_t v_i_1468_, lean_object* v_b_1469_){
_start:
{
uint8_t v___x_1470_; 
v___x_1470_ = lean_usize_dec_lt(v_i_1468_, v_sz_1467_);
if (v___x_1470_ == 0)
{
lean_dec_ref(v_ctx_1465_);
return v_b_1469_;
}
else
{
lean_object* v_a_1471_; lean_object* v_snd_1472_; lean_object* v_fst_1473_; lean_object* v_snd_1474_; lean_object* v_errStr_1476_; lean_object* v_errStr_1487_; uint8_t v___x_1488_; 
v_a_1471_ = lean_array_uget_borrowed(v_as_1466_, v_i_1468_);
v_snd_1472_ = lean_ctor_get(v_a_1471_, 1);
v_fst_1473_ = lean_ctor_get(v_a_1471_, 0);
v_snd_1474_ = lean_ctor_get(v_snd_1472_, 1);
v_errStr_1487_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_1488_ = lean_string_dec_eq(v_b_1469_, v_errStr_1487_);
if (v___x_1488_ == 0)
{
lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1489_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0___closed__0));
v___x_1490_ = lean_string_append(v_b_1469_, v___x_1489_);
v_errStr_1476_ = v___x_1490_;
goto v___jp_1475_;
}
else
{
v_errStr_1476_ = v_b_1469_;
goto v___jp_1475_;
}
v___jp_1475_:
{
lean_object* v_fileName_1477_; lean_object* v_fileMap_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; size_t v___x_1484_; size_t v___x_1485_; 
v_fileName_1477_ = lean_ctor_get(v_ctx_1465_, 1);
v_fileMap_1478_ = lean_ctor_get(v_ctx_1465_, 2);
lean_inc_ref(v_fileMap_1478_);
v___x_1479_ = l_Lean_FileMap_toPosition(v_fileMap_1478_, v_fst_1473_);
lean_inc(v_snd_1474_);
v___x_1480_ = l_Lean_Parser_Error_toString(v_snd_1474_);
v___x_1481_ = lean_box(0);
lean_inc_ref(v_fileName_1477_);
v___x_1482_ = l_Lean_mkErrorStringWithPos(v_fileName_1477_, v___x_1479_, v___x_1480_, v___x_1481_, v___x_1481_, v___x_1481_);
lean_dec_ref(v___x_1480_);
v___x_1483_ = lean_string_append(v_errStr_1476_, v___x_1482_);
lean_dec_ref(v___x_1482_);
v___x_1484_ = ((size_t)1ULL);
v___x_1485_ = lean_usize_add(v_i_1468_, v___x_1484_);
v_i_1468_ = v___x_1485_;
v_b_1469_ = v___x_1483_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0___boxed(lean_object* v_ctx_1491_, lean_object* v_as_1492_, lean_object* v_sz_1493_, lean_object* v_i_1494_, lean_object* v_b_1495_){
_start:
{
size_t v_sz_boxed_1496_; size_t v_i_boxed_1497_; lean_object* v_res_1498_; 
v_sz_boxed_1496_ = lean_unbox_usize(v_sz_1493_);
lean_dec(v_sz_1493_);
v_i_boxed_1497_ = lean_unbox_usize(v_i_1494_);
lean_dec(v_i_1494_);
v_res_1498_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0(v_ctx_1491_, v_as_1492_, v_sz_boxed_1496_, v_i_boxed_1497_, v_b_1495_);
lean_dec_ref(v_as_1492_);
return v_res_1498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_toErrorMsg(lean_object* v_ctx_1499_, lean_object* v_s_1500_){
_start:
{
lean_object* v_errStr_1501_; lean_object* v___x_1502_; size_t v_sz_1503_; size_t v___x_1504_; lean_object* v___x_1505_; 
v_errStr_1501_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_1502_ = l_Lean_Parser_ParserState_allErrors(v_s_1500_);
v_sz_1503_ = lean_array_size(v___x_1502_);
v___x_1504_ = ((size_t)0ULL);
v___x_1505_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0(v_ctx_1499_, v___x_1502_, v_sz_1503_, v___x_1504_, v_errStr_1501_);
lean_dec_ref(v___x_1502_);
return v___x_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserFn___lam__0(lean_object* v_x_1506_, lean_object* v_s_1507_){
_start:
{
lean_inc_ref(v_s_1507_);
return v_s_1507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserFn___lam__0___boxed(lean_object* v_x_1508_, lean_object* v_s_1509_){
_start:
{
lean_object* v_res_1510_; 
v_res_1510_ = l_Lean_Parser_instInhabitedParserFn___lam__0(v_x_1508_, v_s_1509_);
lean_dec_ref(v_s_1509_);
lean_dec_ref(v_x_1508_);
return v_res_1510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorIdx___impl(lean_object* v_x_1513_){
_start:
{
lean_object* v___x_1514_; 
v___x_1514_ = lean_obj_tag_nat(v_x_1513_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorIdx___impl___boxed(lean_object* v_x_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l_Lean_Parser_FirstTokens_ctorIdx___impl(v_x_1515_);
lean_dec(v_x_1515_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorElim___redArg(lean_object* v_t_1517_, lean_object* v_k_1518_){
_start:
{
switch(lean_obj_tag(v_t_1517_))
{
case 2:
{
lean_object* v_a_1519_; lean_object* v___x_1520_; 
v_a_1519_ = lean_ctor_get(v_t_1517_, 0);
lean_inc(v_a_1519_);
lean_dec_ref_known(v_t_1517_, 1);
v___x_1520_ = lean_apply_1(v_k_1518_, v_a_1519_);
return v___x_1520_;
}
case 3:
{
lean_object* v_a_1521_; lean_object* v___x_1522_; 
v_a_1521_ = lean_ctor_get(v_t_1517_, 0);
lean_inc(v_a_1521_);
lean_dec_ref_known(v_t_1517_, 1);
v___x_1522_ = lean_apply_1(v_k_1518_, v_a_1521_);
return v___x_1522_;
}
default: 
{
lean_dec(v_t_1517_);
return v_k_1518_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorElim(lean_object* v_motive_1523_, lean_object* v_ctorIdx_1524_, lean_object* v_t_1525_, lean_object* v_h_1526_, lean_object* v_k_1527_){
_start:
{
lean_object* v___x_1528_; 
v___x_1528_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1525_, v_k_1527_);
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorElim___boxed(lean_object* v_motive_1529_, lean_object* v_ctorIdx_1530_, lean_object* v_t_1531_, lean_object* v_h_1532_, lean_object* v_k_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = l_Lean_Parser_FirstTokens_ctorElim(v_motive_1529_, v_ctorIdx_1530_, v_t_1531_, v_h_1532_, v_k_1533_);
lean_dec(v_ctorIdx_1530_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_epsilon_elim___redArg(lean_object* v_t_1535_, lean_object* v_epsilon_1536_){
_start:
{
lean_object* v___x_1537_; 
v___x_1537_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1535_, v_epsilon_1536_);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_epsilon_elim(lean_object* v_motive_1538_, lean_object* v_t_1539_, lean_object* v_h_1540_, lean_object* v_epsilon_1541_){
_start:
{
lean_object* v___x_1542_; 
v___x_1542_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1539_, v_epsilon_1541_);
return v___x_1542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_unknown_elim___redArg(lean_object* v_t_1543_, lean_object* v_unknown_1544_){
_start:
{
lean_object* v___x_1545_; 
v___x_1545_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1543_, v_unknown_1544_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_unknown_elim(lean_object* v_motive_1546_, lean_object* v_t_1547_, lean_object* v_h_1548_, lean_object* v_unknown_1549_){
_start:
{
lean_object* v___x_1550_; 
v___x_1550_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1547_, v_unknown_1549_);
return v___x_1550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_tokens_elim___redArg(lean_object* v_t_1551_, lean_object* v_tokens_1552_){
_start:
{
lean_object* v___x_1553_; 
v___x_1553_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1551_, v_tokens_1552_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_tokens_elim(lean_object* v_motive_1554_, lean_object* v_t_1555_, lean_object* v_h_1556_, lean_object* v_tokens_1557_){
_start:
{
lean_object* v___x_1558_; 
v___x_1558_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1555_, v_tokens_1557_);
return v___x_1558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_optTokens_elim___redArg(lean_object* v_t_1559_, lean_object* v_optTokens_1560_){
_start:
{
lean_object* v___x_1561_; 
v___x_1561_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1559_, v_optTokens_1560_);
return v___x_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_optTokens_elim(lean_object* v_motive_1562_, lean_object* v_t_1563_, lean_object* v_h_1564_, lean_object* v_optTokens_1565_){
_start:
{
lean_object* v___x_1566_; 
v___x_1566_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1563_, v_optTokens_1565_);
return v___x_1566_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedFirstTokens_default(void){
_start:
{
lean_object* v___x_1567_; 
v___x_1567_ = lean_box(0);
return v___x_1567_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedFirstTokens(void){
_start:
{
lean_object* v___x_1568_; 
v___x_1568_ = lean_box(0);
return v___x_1568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_seq(lean_object* v_x_1569_, lean_object* v_x_1570_){
_start:
{
switch(lean_obj_tag(v_x_1569_))
{
case 0:
{
return v_x_1570_;
}
case 3:
{
switch(lean_obj_tag(v_x_1570_))
{
case 3:
{
lean_object* v_a_1571_; lean_object* v_a_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1580_; 
v_a_1571_ = lean_ctor_get(v_x_1569_, 0);
lean_inc(v_a_1571_);
lean_dec_ref_known(v_x_1569_, 1);
v_a_1572_ = lean_ctor_get(v_x_1570_, 0);
v_isSharedCheck_1580_ = !lean_is_exclusive(v_x_1570_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1574_ = v_x_1570_;
v_isShared_1575_ = v_isSharedCheck_1580_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_a_1572_);
lean_dec(v_x_1570_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1580_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1576_; lean_object* v___x_1578_; 
v___x_1576_ = l_List_appendTR___redArg(v_a_1571_, v_a_1572_);
if (v_isShared_1575_ == 0)
{
lean_ctor_set(v___x_1574_, 0, v___x_1576_);
v___x_1578_ = v___x_1574_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v___x_1576_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
}
case 2:
{
lean_object* v_a_1581_; lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1590_; 
v_a_1581_ = lean_ctor_get(v_x_1569_, 0);
lean_inc(v_a_1581_);
lean_dec_ref_known(v_x_1569_, 1);
v_a_1582_ = lean_ctor_get(v_x_1570_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v_x_1570_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1584_ = v_x_1570_;
v_isShared_1585_ = v_isSharedCheck_1590_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v_x_1570_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1590_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1586_; lean_object* v___x_1588_; 
v___x_1586_ = l_List_appendTR___redArg(v_a_1581_, v_a_1582_);
if (v_isShared_1585_ == 0)
{
lean_ctor_set(v___x_1584_, 0, v___x_1586_);
v___x_1588_ = v___x_1584_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v___x_1586_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
}
case 1:
{
lean_dec_ref_known(v_x_1569_, 1);
return v_x_1570_;
}
default: 
{
lean_dec(v_x_1570_);
return v_x_1569_;
}
}
}
default: 
{
lean_dec(v_x_1570_);
return v_x_1569_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_toOptional(lean_object* v_x_1591_){
_start:
{
if (lean_obj_tag(v_x_1591_) == 2)
{
lean_object* v_a_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1599_; 
v_a_1592_ = lean_ctor_get(v_x_1591_, 0);
v_isSharedCheck_1599_ = !lean_is_exclusive(v_x_1591_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1594_ = v_x_1591_;
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_a_1592_);
lean_dec(v_x_1591_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1597_; 
if (v_isShared_1595_ == 0)
{
lean_ctor_set_tag(v___x_1594_, 3);
v___x_1597_ = v___x_1594_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v_a_1592_);
v___x_1597_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
return v___x_1597_;
}
}
}
else
{
return v_x_1591_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_merge(lean_object* v_x_1600_, lean_object* v_x_1601_){
_start:
{
lean_object* v_s_u2081_1603_; lean_object* v_s_u2082_1604_; 
switch(lean_obj_tag(v_x_1600_))
{
case 0:
{
lean_object* v___x_1607_; 
v___x_1607_ = l_Lean_Parser_FirstTokens_toOptional(v_x_1601_);
return v___x_1607_;
}
case 2:
{
switch(lean_obj_tag(v_x_1601_))
{
case 0:
{
lean_object* v___x_1608_; 
v___x_1608_ = l_Lean_Parser_FirstTokens_toOptional(v_x_1600_);
return v___x_1608_;
}
case 2:
{
lean_object* v_a_1609_; lean_object* v_a_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1618_; 
v_a_1609_ = lean_ctor_get(v_x_1600_, 0);
lean_inc(v_a_1609_);
lean_dec_ref_known(v_x_1600_, 1);
v_a_1610_ = lean_ctor_get(v_x_1601_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v_x_1601_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1612_ = v_x_1601_;
v_isShared_1613_ = v_isSharedCheck_1618_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_a_1610_);
lean_dec(v_x_1601_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1618_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v___x_1614_; lean_object* v___x_1616_; 
v___x_1614_ = l_List_appendTR___redArg(v_a_1609_, v_a_1610_);
if (v_isShared_1613_ == 0)
{
lean_ctor_set(v___x_1612_, 0, v___x_1614_);
v___x_1616_ = v___x_1612_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v___x_1614_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
case 3:
{
lean_object* v_a_1619_; lean_object* v_a_1620_; 
v_a_1619_ = lean_ctor_get(v_x_1600_, 0);
lean_inc(v_a_1619_);
lean_dec_ref_known(v_x_1600_, 1);
v_a_1620_ = lean_ctor_get(v_x_1601_, 0);
lean_inc(v_a_1620_);
lean_dec_ref_known(v_x_1601_, 1);
v_s_u2081_1603_ = v_a_1619_;
v_s_u2082_1604_ = v_a_1620_;
goto v___jp_1602_;
}
default: 
{
lean_object* v___x_1621_; 
lean_dec_ref_known(v_x_1600_, 1);
lean_dec(v_x_1601_);
v___x_1621_ = lean_box(1);
return v___x_1621_;
}
}
}
case 3:
{
switch(lean_obj_tag(v_x_1601_))
{
case 0:
{
lean_object* v___x_1622_; 
v___x_1622_ = l_Lean_Parser_FirstTokens_toOptional(v_x_1600_);
return v___x_1622_;
}
case 3:
{
lean_object* v_a_1623_; lean_object* v_a_1624_; 
v_a_1623_ = lean_ctor_get(v_x_1600_, 0);
lean_inc(v_a_1623_);
lean_dec_ref_known(v_x_1600_, 1);
v_a_1624_ = lean_ctor_get(v_x_1601_, 0);
lean_inc(v_a_1624_);
lean_dec_ref_known(v_x_1601_, 1);
v_s_u2081_1603_ = v_a_1623_;
v_s_u2082_1604_ = v_a_1624_;
goto v___jp_1602_;
}
case 2:
{
lean_object* v_a_1625_; lean_object* v_a_1626_; 
v_a_1625_ = lean_ctor_get(v_x_1600_, 0);
lean_inc(v_a_1625_);
lean_dec_ref_known(v_x_1600_, 1);
v_a_1626_ = lean_ctor_get(v_x_1601_, 0);
lean_inc(v_a_1626_);
lean_dec_ref_known(v_x_1601_, 1);
v_s_u2081_1603_ = v_a_1625_;
v_s_u2082_1604_ = v_a_1626_;
goto v___jp_1602_;
}
default: 
{
lean_object* v___x_1627_; 
lean_dec_ref_known(v_x_1600_, 1);
lean_dec(v_x_1601_);
v___x_1627_ = lean_box(1);
return v___x_1627_;
}
}
}
default: 
{
if (lean_obj_tag(v_x_1601_) == 0)
{
lean_object* v___x_1628_; 
v___x_1628_ = l_Lean_Parser_FirstTokens_toOptional(v_x_1600_);
return v___x_1628_;
}
else
{
lean_object* v___x_1629_; 
lean_dec(v_x_1601_);
lean_dec(v_x_1600_);
v___x_1629_ = lean_box(1);
return v___x_1629_;
}
}
}
v___jp_1602_:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1605_ = l_List_appendTR___redArg(v_s_u2081_1603_, v_s_u2082_1604_);
v___x_1606_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1606_, 0, v___x_1605_);
return v___x_1606_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0_spec__0(lean_object* v_x_1630_, lean_object* v_x_1631_){
_start:
{
if (lean_obj_tag(v_x_1631_) == 0)
{
return v_x_1630_;
}
else
{
lean_object* v_head_1632_; lean_object* v_tail_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; 
v_head_1632_ = lean_ctor_get(v_x_1631_, 0);
v_tail_1633_ = lean_ctor_get(v_x_1631_, 1);
v___x_1634_ = ((lean_object*)(l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__1));
v___x_1635_ = lean_string_append(v_x_1630_, v___x_1634_);
v___x_1636_ = lean_string_append(v___x_1635_, v_head_1632_);
v_x_1630_ = v___x_1636_;
v_x_1631_ = v_tail_1633_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0_spec__0___boxed(lean_object* v_x_1638_, lean_object* v_x_1639_){
_start:
{
lean_object* v_res_1640_; 
v_res_1640_ = l_List_foldl___at___00List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0_spec__0(v_x_1638_, v_x_1639_);
lean_dec(v_x_1639_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0(lean_object* v_x_1644_){
_start:
{
if (lean_obj_tag(v_x_1644_) == 0)
{
lean_object* v___x_1645_; 
v___x_1645_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__0));
return v___x_1645_;
}
else
{
lean_object* v_tail_1646_; 
v_tail_1646_ = lean_ctor_get(v_x_1644_, 1);
if (lean_obj_tag(v_tail_1646_) == 0)
{
lean_object* v_head_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; 
v_head_1647_ = lean_ctor_get(v_x_1644_, 0);
v___x_1648_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__1));
v___x_1649_ = lean_string_append(v___x_1648_, v_head_1647_);
v___x_1650_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__2));
v___x_1651_ = lean_string_append(v___x_1649_, v___x_1650_);
return v___x_1651_;
}
else
{
lean_object* v_head_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; uint32_t v___x_1656_; lean_object* v___x_1657_; 
v_head_1652_ = lean_ctor_get(v_x_1644_, 0);
v___x_1653_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__1));
v___x_1654_ = lean_string_append(v___x_1653_, v_head_1652_);
v___x_1655_ = l_List_foldl___at___00List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0_spec__0(v___x_1654_, v_tail_1646_);
v___x_1656_ = 93;
v___x_1657_ = lean_string_push(v___x_1655_, v___x_1656_);
return v___x_1657_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___boxed(lean_object* v_x_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0(v_x_1658_);
lean_dec(v_x_1658_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_toStr(lean_object* v_x_1663_){
_start:
{
switch(lean_obj_tag(v_x_1663_))
{
case 0:
{
lean_object* v___x_1664_; 
v___x_1664_ = ((lean_object*)(l_Lean_Parser_FirstTokens_toStr___closed__0));
return v___x_1664_;
}
case 1:
{
lean_object* v___x_1665_; 
v___x_1665_ = ((lean_object*)(l_Lean_Parser_FirstTokens_toStr___closed__1));
return v___x_1665_;
}
case 2:
{
lean_object* v_a_1666_; lean_object* v___x_1667_; 
v_a_1666_ = lean_ctor_get(v_x_1663_, 0);
v___x_1667_ = l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0(v_a_1666_);
return v___x_1667_;
}
default: 
{
lean_object* v_a_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; 
v_a_1668_ = lean_ctor_get(v_x_1663_, 0);
v___x_1669_ = ((lean_object*)(l_Lean_Parser_FirstTokens_toStr___closed__2));
v___x_1670_ = l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0(v_a_1668_);
v___x_1671_ = lean_string_append(v___x_1669_, v___x_1670_);
lean_dec_ref(v___x_1670_);
return v___x_1671_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_toStr___boxed(lean_object* v_x_1672_){
_start:
{
lean_object* v_res_1673_; 
v_res_1673_ = l_Lean_Parser_FirstTokens_toStr(v_x_1672_);
lean_dec(v_x_1672_);
return v_res_1673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__0(lean_object* v___y_1676_){
_start:
{
lean_inc(v___y_1676_);
return v___y_1676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__0___boxed(lean_object* v___y_1677_){
_start:
{
lean_object* v_res_1678_; 
v_res_1678_ = l_Lean_Parser_instInhabitedParserInfo_default___lam__0(v___y_1677_);
lean_dec(v___y_1677_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__1(lean_object* v___y_1679_){
_start:
{
lean_inc_ref(v___y_1679_);
return v___y_1679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__1___boxed(lean_object* v___y_1680_){
_start:
{
lean_object* v_res_1681_; 
v_res_1681_ = l_Lean_Parser_instInhabitedParserInfo_default___lam__1(v___y_1680_);
lean_dec_ref(v___y_1680_);
return v_res_1681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withFn(lean_object* v_f_1695_, lean_object* v_p_1696_){
_start:
{
lean_object* v_info_1697_; lean_object* v_fn_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1706_; 
v_info_1697_ = lean_ctor_get(v_p_1696_, 0);
v_fn_1698_ = lean_ctor_get(v_p_1696_, 1);
v_isSharedCheck_1706_ = !lean_is_exclusive(v_p_1696_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1700_ = v_p_1696_;
v_isShared_1701_ = v_isSharedCheck_1706_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_fn_1698_);
lean_inc(v_info_1697_);
lean_dec(v_p_1696_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1706_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1702_; lean_object* v___x_1704_; 
v___x_1702_ = lean_apply_1(v_f_1695_, v_fn_1698_);
if (v_isShared_1701_ == 0)
{
lean_ctor_set(v___x_1700_, 1, v___x_1702_);
v___x_1704_ = v___x_1700_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_info_1697_);
lean_ctor_set(v_reuseFailAlloc_1705_, 1, v___x_1702_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
return v___x_1704_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContextFn(lean_object* v_f_1707_, lean_object* v_p_1708_, lean_object* v_c_1709_, lean_object* v_s_1710_){
_start:
{
lean_object* v_toInputContext_1711_; lean_object* v_toParserModuleContext_1712_; lean_object* v_toCacheableParserContext_1713_; lean_object* v_tokens_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1723_; 
v_toInputContext_1711_ = lean_ctor_get(v_c_1709_, 0);
v_toParserModuleContext_1712_ = lean_ctor_get(v_c_1709_, 1);
v_toCacheableParserContext_1713_ = lean_ctor_get(v_c_1709_, 2);
v_tokens_1714_ = lean_ctor_get(v_c_1709_, 3);
v_isSharedCheck_1723_ = !lean_is_exclusive(v_c_1709_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1716_ = v_c_1709_;
v_isShared_1717_ = v_isSharedCheck_1723_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_tokens_1714_);
lean_inc(v_toCacheableParserContext_1713_);
lean_inc(v_toParserModuleContext_1712_);
lean_inc(v_toInputContext_1711_);
lean_dec(v_c_1709_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1723_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1718_; lean_object* v___x_1720_; 
v___x_1718_ = lean_apply_1(v_f_1707_, v_toCacheableParserContext_1713_);
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 2, v___x_1718_);
v___x_1720_ = v___x_1716_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v_toInputContext_1711_);
lean_ctor_set(v_reuseFailAlloc_1722_, 1, v_toParserModuleContext_1712_);
lean_ctor_set(v_reuseFailAlloc_1722_, 2, v___x_1718_);
lean_ctor_set(v_reuseFailAlloc_1722_, 3, v_tokens_1714_);
v___x_1720_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
lean_object* v___x_1721_; 
v___x_1721_ = lean_apply_2(v_p_1708_, v___x_1720_, v_s_1710_);
return v___x_1721_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext(lean_object* v_f_1724_, lean_object* v_p_1725_){
_start:
{
lean_object* v_info_1726_; lean_object* v_fn_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1735_; 
v_info_1726_ = lean_ctor_get(v_p_1725_, 0);
v_fn_1727_ = lean_ctor_get(v_p_1725_, 1);
v_isSharedCheck_1735_ = !lean_is_exclusive(v_p_1725_);
if (v_isSharedCheck_1735_ == 0)
{
v___x_1729_ = v_p_1725_;
v_isShared_1730_ = v_isSharedCheck_1735_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_fn_1727_);
lean_inc(v_info_1726_);
lean_dec(v_p_1725_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1735_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v___x_1731_; lean_object* v___x_1733_; 
v___x_1731_ = lean_alloc_closure((void*)(l_Lean_Parser_adaptCacheableContextFn), 4, 2);
lean_closure_set(v___x_1731_, 0, v_f_1724_);
lean_closure_set(v___x_1731_, 1, v_fn_1727_);
if (v_isShared_1730_ == 0)
{
lean_ctor_set(v___x_1729_, 1, v___x_1731_);
v___x_1733_ = v___x_1729_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v_info_1726_);
lean_ctor_set(v_reuseFailAlloc_1734_, 1, v___x_1731_);
v___x_1733_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
return v___x_1733_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withStackDrop(lean_object* v_drop_1736_, lean_object* v_p_1737_, lean_object* v_c_1738_, lean_object* v_s_1739_){
_start:
{
lean_object* v_stxStack_1740_; lean_object* v_lhsPrec_1741_; lean_object* v_pos_1742_; lean_object* v_cache_1743_; lean_object* v_errorMsg_1744_; lean_object* v_recoveredErrors_1745_; lean_object* v___x_1747_; uint8_t v_isShared_1748_; uint8_t v_isSharedCheck_1784_; 
v_stxStack_1740_ = lean_ctor_get(v_s_1739_, 0);
v_lhsPrec_1741_ = lean_ctor_get(v_s_1739_, 1);
v_pos_1742_ = lean_ctor_get(v_s_1739_, 2);
v_cache_1743_ = lean_ctor_get(v_s_1739_, 3);
v_errorMsg_1744_ = lean_ctor_get(v_s_1739_, 4);
v_recoveredErrors_1745_ = lean_ctor_get(v_s_1739_, 5);
v_isSharedCheck_1784_ = !lean_is_exclusive(v_s_1739_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1747_ = v_s_1739_;
v_isShared_1748_ = v_isSharedCheck_1784_;
goto v_resetjp_1746_;
}
else
{
lean_inc(v_recoveredErrors_1745_);
lean_inc(v_errorMsg_1744_);
lean_inc(v_cache_1743_);
lean_inc(v_pos_1742_);
lean_inc(v_lhsPrec_1741_);
lean_inc(v_stxStack_1740_);
lean_dec(v_s_1739_);
v___x_1747_ = lean_box(0);
v_isShared_1748_ = v_isSharedCheck_1784_;
goto v_resetjp_1746_;
}
v_resetjp_1746_:
{
lean_object* v_raw_1749_; lean_object* v_drop_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1783_; 
v_raw_1749_ = lean_ctor_get(v_stxStack_1740_, 0);
v_drop_1750_ = lean_ctor_get(v_stxStack_1740_, 1);
v_isSharedCheck_1783_ = !lean_is_exclusive(v_stxStack_1740_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1752_ = v_stxStack_1740_;
v_isShared_1753_ = v_isSharedCheck_1783_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_drop_1750_);
lean_inc(v_raw_1749_);
lean_dec(v_stxStack_1740_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1783_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
lean_ctor_set(v___x_1752_, 1, v_drop_1736_);
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_raw_1749_);
lean_ctor_set(v_reuseFailAlloc_1782_, 1, v_drop_1736_);
v___x_1755_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
lean_object* v___x_1757_; 
if (v_isShared_1748_ == 0)
{
lean_ctor_set(v___x_1747_, 0, v___x_1755_);
v___x_1757_ = v___x_1747_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v___x_1755_);
lean_ctor_set(v_reuseFailAlloc_1781_, 1, v_lhsPrec_1741_);
lean_ctor_set(v_reuseFailAlloc_1781_, 2, v_pos_1742_);
lean_ctor_set(v_reuseFailAlloc_1781_, 3, v_cache_1743_);
lean_ctor_set(v_reuseFailAlloc_1781_, 4, v_errorMsg_1744_);
lean_ctor_set(v_reuseFailAlloc_1781_, 5, v_recoveredErrors_1745_);
v___x_1757_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
lean_object* v_s_1758_; lean_object* v_stxStack_1759_; lean_object* v_lhsPrec_1760_; lean_object* v_pos_1761_; lean_object* v_cache_1762_; lean_object* v_errorMsg_1763_; lean_object* v_recoveredErrors_1764_; lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1780_; 
v_s_1758_ = lean_apply_2(v_p_1737_, v_c_1738_, v___x_1757_);
v_stxStack_1759_ = lean_ctor_get(v_s_1758_, 0);
v_lhsPrec_1760_ = lean_ctor_get(v_s_1758_, 1);
v_pos_1761_ = lean_ctor_get(v_s_1758_, 2);
v_cache_1762_ = lean_ctor_get(v_s_1758_, 3);
v_errorMsg_1763_ = lean_ctor_get(v_s_1758_, 4);
v_recoveredErrors_1764_ = lean_ctor_get(v_s_1758_, 5);
v_isSharedCheck_1780_ = !lean_is_exclusive(v_s_1758_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1766_ = v_s_1758_;
v_isShared_1767_ = v_isSharedCheck_1780_;
goto v_resetjp_1765_;
}
else
{
lean_inc(v_recoveredErrors_1764_);
lean_inc(v_errorMsg_1763_);
lean_inc(v_cache_1762_);
lean_inc(v_pos_1761_);
lean_inc(v_lhsPrec_1760_);
lean_inc(v_stxStack_1759_);
lean_dec(v_s_1758_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1780_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v_raw_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1778_; 
v_raw_1768_ = lean_ctor_get(v_stxStack_1759_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v_stxStack_1759_);
if (v_isSharedCheck_1778_ == 0)
{
lean_object* v_unused_1779_; 
v_unused_1779_ = lean_ctor_get(v_stxStack_1759_, 1);
lean_dec(v_unused_1779_);
v___x_1770_ = v_stxStack_1759_;
v_isShared_1771_ = v_isSharedCheck_1778_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_raw_1768_);
lean_dec(v_stxStack_1759_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1778_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1773_; 
if (v_isShared_1771_ == 0)
{
lean_ctor_set(v___x_1770_, 1, v_drop_1750_);
v___x_1773_ = v___x_1770_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_raw_1768_);
lean_ctor_set(v_reuseFailAlloc_1777_, 1, v_drop_1750_);
v___x_1773_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
lean_object* v___x_1775_; 
if (v_isShared_1767_ == 0)
{
lean_ctor_set(v___x_1766_, 0, v___x_1773_);
v___x_1775_ = v___x_1766_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v___x_1773_);
lean_ctor_set(v_reuseFailAlloc_1776_, 1, v_lhsPrec_1760_);
lean_ctor_set(v_reuseFailAlloc_1776_, 2, v_pos_1761_);
lean_ctor_set(v_reuseFailAlloc_1776_, 3, v_cache_1762_);
lean_ctor_set(v_reuseFailAlloc_1776_, 4, v_errorMsg_1763_);
lean_ctor_set(v_reuseFailAlloc_1776_, 5, v_recoveredErrors_1764_);
v___x_1775_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
return v___x_1775_;
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
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCacheFn___lam__0(lean_object* v_p_1785_, lean_object* v_c_1786_, lean_object* v_s_1787_){
_start:
{
lean_object* v_cache_1788_; lean_object* v_stxStack_1789_; lean_object* v_lhsPrec_1790_; lean_object* v_pos_1791_; lean_object* v_errorMsg_1792_; lean_object* v_recoveredErrors_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1833_; 
v_cache_1788_ = lean_ctor_get(v_s_1787_, 3);
v_stxStack_1789_ = lean_ctor_get(v_s_1787_, 0);
v_lhsPrec_1790_ = lean_ctor_get(v_s_1787_, 1);
v_pos_1791_ = lean_ctor_get(v_s_1787_, 2);
v_errorMsg_1792_ = lean_ctor_get(v_s_1787_, 4);
v_recoveredErrors_1793_ = lean_ctor_get(v_s_1787_, 5);
v_isSharedCheck_1833_ = !lean_is_exclusive(v_s_1787_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1795_ = v_s_1787_;
v_isShared_1796_ = v_isSharedCheck_1833_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_recoveredErrors_1793_);
lean_inc(v_errorMsg_1792_);
lean_inc(v_cache_1788_);
lean_inc(v_pos_1791_);
lean_inc(v_lhsPrec_1790_);
lean_inc(v_stxStack_1789_);
lean_dec(v_s_1787_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1833_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v_tokenCache_1797_; lean_object* v_parserCache_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1832_; 
v_tokenCache_1797_ = lean_ctor_get(v_cache_1788_, 0);
v_parserCache_1798_ = lean_ctor_get(v_cache_1788_, 1);
v_isSharedCheck_1832_ = !lean_is_exclusive(v_cache_1788_);
if (v_isSharedCheck_1832_ == 0)
{
v___x_1800_ = v_cache_1788_;
v_isShared_1801_ = v_isSharedCheck_1832_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_parserCache_1798_);
lean_inc(v_tokenCache_1797_);
lean_dec(v_cache_1788_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1832_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1802_; lean_object* v___x_1804_; 
v___x_1802_ = lean_obj_once(&l_Lean_Parser_initCacheForInput___closed__1, &l_Lean_Parser_initCacheForInput___closed__1_once, _init_l_Lean_Parser_initCacheForInput___closed__1);
if (v_isShared_1801_ == 0)
{
lean_ctor_set(v___x_1800_, 1, v___x_1802_);
v___x_1804_ = v___x_1800_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v_tokenCache_1797_);
lean_ctor_set(v_reuseFailAlloc_1831_, 1, v___x_1802_);
v___x_1804_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
lean_object* v___x_1806_; 
if (v_isShared_1796_ == 0)
{
lean_ctor_set(v___x_1795_, 3, v___x_1804_);
v___x_1806_ = v___x_1795_;
goto v_reusejp_1805_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v_stxStack_1789_);
lean_ctor_set(v_reuseFailAlloc_1830_, 1, v_lhsPrec_1790_);
lean_ctor_set(v_reuseFailAlloc_1830_, 2, v_pos_1791_);
lean_ctor_set(v_reuseFailAlloc_1830_, 3, v___x_1804_);
lean_ctor_set(v_reuseFailAlloc_1830_, 4, v_errorMsg_1792_);
lean_ctor_set(v_reuseFailAlloc_1830_, 5, v_recoveredErrors_1793_);
v___x_1806_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1805_;
}
v_reusejp_1805_:
{
lean_object* v_s_x27_1807_; lean_object* v_cache_1808_; lean_object* v_stxStack_1809_; lean_object* v_lhsPrec_1810_; lean_object* v_pos_1811_; lean_object* v_errorMsg_1812_; lean_object* v_recoveredErrors_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1829_; 
v_s_x27_1807_ = lean_apply_2(v_p_1785_, v_c_1786_, v___x_1806_);
v_cache_1808_ = lean_ctor_get(v_s_x27_1807_, 3);
v_stxStack_1809_ = lean_ctor_get(v_s_x27_1807_, 0);
v_lhsPrec_1810_ = lean_ctor_get(v_s_x27_1807_, 1);
v_pos_1811_ = lean_ctor_get(v_s_x27_1807_, 2);
v_errorMsg_1812_ = lean_ctor_get(v_s_x27_1807_, 4);
v_recoveredErrors_1813_ = lean_ctor_get(v_s_x27_1807_, 5);
v_isSharedCheck_1829_ = !lean_is_exclusive(v_s_x27_1807_);
if (v_isSharedCheck_1829_ == 0)
{
v___x_1815_ = v_s_x27_1807_;
v_isShared_1816_ = v_isSharedCheck_1829_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_recoveredErrors_1813_);
lean_inc(v_errorMsg_1812_);
lean_inc(v_cache_1808_);
lean_inc(v_pos_1811_);
lean_inc(v_lhsPrec_1810_);
lean_inc(v_stxStack_1809_);
lean_dec(v_s_x27_1807_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1829_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v_tokenCache_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1827_; 
v_tokenCache_1817_ = lean_ctor_get(v_cache_1808_, 0);
v_isSharedCheck_1827_ = !lean_is_exclusive(v_cache_1808_);
if (v_isSharedCheck_1827_ == 0)
{
lean_object* v_unused_1828_; 
v_unused_1828_ = lean_ctor_get(v_cache_1808_, 1);
lean_dec(v_unused_1828_);
v___x_1819_ = v_cache_1808_;
v_isShared_1820_ = v_isSharedCheck_1827_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_tokenCache_1817_);
lean_dec(v_cache_1808_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1827_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
lean_object* v___x_1822_; 
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 1, v_parserCache_1798_);
v___x_1822_ = v___x_1819_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_tokenCache_1817_);
lean_ctor_set(v_reuseFailAlloc_1826_, 1, v_parserCache_1798_);
v___x_1822_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
lean_object* v___x_1824_; 
if (v_isShared_1816_ == 0)
{
lean_ctor_set(v___x_1815_, 3, v___x_1822_);
v___x_1824_ = v___x_1815_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v_stxStack_1809_);
lean_ctor_set(v_reuseFailAlloc_1825_, 1, v_lhsPrec_1810_);
lean_ctor_set(v_reuseFailAlloc_1825_, 2, v_pos_1811_);
lean_ctor_set(v_reuseFailAlloc_1825_, 3, v___x_1822_);
lean_ctor_set(v_reuseFailAlloc_1825_, 4, v_errorMsg_1812_);
lean_ctor_set(v_reuseFailAlloc_1825_, 5, v_recoveredErrors_1813_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
return v___x_1824_;
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
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCacheFn(lean_object* v_p_1834_, lean_object* v_a_1835_, lean_object* v_a_1836_){
_start:
{
lean_object* v___f_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___f_1837_ = lean_alloc_closure((void*)(l_Lean_Parser_withResetCacheFn___lam__0), 3, 1);
lean_closure_set(v___f_1837_, 0, v_p_1834_);
v___x_1838_ = lean_unsigned_to_nat(0u);
v___x_1839_ = l___private_Lean_Parser_Types_0__Lean_Parser_withStackDrop(v___x_1838_, v___f_1837_, v_a_1835_, v_a_1836_);
return v___x_1839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache(lean_object* v_p_1840_){
_start:
{
lean_object* v_info_1841_; lean_object* v_fn_1842_; lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1850_; 
v_info_1841_ = lean_ctor_get(v_p_1840_, 0);
v_fn_1842_ = lean_ctor_get(v_p_1840_, 1);
v_isSharedCheck_1850_ = !lean_is_exclusive(v_p_1840_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1844_ = v_p_1840_;
v_isShared_1845_ = v_isSharedCheck_1850_;
goto v_resetjp_1843_;
}
else
{
lean_inc(v_fn_1842_);
lean_inc(v_info_1841_);
lean_dec(v_p_1840_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1850_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v___x_1846_; lean_object* v___x_1848_; 
v___x_1846_ = lean_alloc_closure((void*)(l_Lean_Parser_withResetCacheFn), 3, 1);
lean_closure_set(v___x_1846_, 0, v_fn_1842_);
if (v_isShared_1845_ == 0)
{
lean_ctor_set(v___x_1844_, 1, v___x_1846_);
v___x_1848_ = v___x_1844_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_info_1841_);
lean_ctor_set(v_reuseFailAlloc_1849_, 1, v___x_1846_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
return v___x_1848_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptUncacheableContextFn___lam__0(lean_object* v_f_1851_, lean_object* v_p_1852_, lean_object* v_c_1853_, lean_object* v_s_1854_){
_start:
{
lean_object* v___x_1855_; lean_object* v___x_1856_; 
v___x_1855_ = lean_apply_1(v_f_1851_, v_c_1853_);
v___x_1856_ = lean_apply_2(v_p_1852_, v___x_1855_, v_s_1854_);
return v___x_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptUncacheableContextFn(lean_object* v_f_1857_, lean_object* v_p_1858_, lean_object* v_a_1859_, lean_object* v_a_1860_){
_start:
{
lean_object* v___f_1861_; lean_object* v___x_1862_; 
v___f_1861_ = lean_alloc_closure((void*)(l_Lean_Parser_adaptUncacheableContextFn___lam__0), 4, 2);
lean_closure_set(v___f_1861_, 0, v_f_1857_);
lean_closure_set(v___f_1861_, 1, v_p_1858_);
v___x_1862_ = l_Lean_Parser_withResetCacheFn(v___f_1861_, v_a_1859_, v_a_1860_);
return v___x_1862_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg(lean_object* v_a_1863_, lean_object* v_x_1864_){
_start:
{
if (lean_obj_tag(v_x_1864_) == 0)
{
uint8_t v___x_1865_; 
v___x_1865_ = 0;
return v___x_1865_;
}
else
{
lean_object* v_key_1866_; lean_object* v_tail_1867_; uint8_t v___x_1868_; 
v_key_1866_ = lean_ctor_get(v_x_1864_, 0);
v_tail_1867_ = lean_ctor_get(v_x_1864_, 2);
v___x_1868_ = l_Lean_Parser_instBEqParserCacheKey_beq(v_key_1866_, v_a_1863_);
if (v___x_1868_ == 0)
{
v_x_1864_ = v_tail_1867_;
goto _start;
}
else
{
return v___x_1868_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg___boxed(lean_object* v_a_1870_, lean_object* v_x_1871_){
_start:
{
uint8_t v_res_1872_; lean_object* v_r_1873_; 
v_res_1872_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg(v_a_1870_, v_x_1871_);
lean_dec(v_x_1871_);
lean_dec_ref(v_a_1870_);
v_r_1873_ = lean_box(v_res_1872_);
return v_r_1873_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_1874_, lean_object* v_x_1875_){
_start:
{
if (lean_obj_tag(v_x_1875_) == 0)
{
return v_x_1874_;
}
else
{
lean_object* v_key_1876_; lean_object* v_value_1877_; lean_object* v_tail_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1908_; 
v_key_1876_ = lean_ctor_get(v_x_1875_, 0);
v_value_1877_ = lean_ctor_get(v_x_1875_, 1);
v_tail_1878_ = lean_ctor_get(v_x_1875_, 2);
v_isSharedCheck_1908_ = !lean_is_exclusive(v_x_1875_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1880_ = v_x_1875_;
v_isShared_1881_ = v_isSharedCheck_1908_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_tail_1878_);
lean_inc(v_value_1877_);
lean_inc(v_key_1876_);
lean_dec(v_x_1875_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1908_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v_parserName_1882_; lean_object* v_pos_1883_; lean_object* v___x_1884_; uint64_t v___x_1885_; uint64_t v___y_1887_; 
v_parserName_1882_ = lean_ctor_get(v_key_1876_, 1);
v_pos_1883_ = lean_ctor_get(v_key_1876_, 2);
v___x_1884_ = lean_array_get_size(v_x_1874_);
v___x_1885_ = l_String_instHashableRaw_hash(v_pos_1883_);
if (lean_obj_tag(v_parserName_1882_) == 0)
{
uint64_t v___x_1906_; 
v___x_1906_ = 1723ULL;
v___y_1887_ = v___x_1906_;
goto v___jp_1886_;
}
else
{
uint64_t v_hash_1907_; 
v_hash_1907_ = lean_ctor_get_uint64(v_parserName_1882_, sizeof(void*)*2);
v___y_1887_ = v_hash_1907_;
goto v___jp_1886_;
}
v___jp_1886_:
{
uint64_t v___x_1888_; uint64_t v___x_1889_; uint64_t v___x_1890_; uint64_t v_fold_1891_; uint64_t v___x_1892_; uint64_t v___x_1893_; uint64_t v___x_1894_; size_t v___x_1895_; size_t v___x_1896_; size_t v___x_1897_; size_t v___x_1898_; size_t v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1902_; 
v___x_1888_ = lean_uint64_mix_hash(v___x_1885_, v___y_1887_);
v___x_1889_ = 32ULL;
v___x_1890_ = lean_uint64_shift_right(v___x_1888_, v___x_1889_);
v_fold_1891_ = lean_uint64_xor(v___x_1888_, v___x_1890_);
v___x_1892_ = 16ULL;
v___x_1893_ = lean_uint64_shift_right(v_fold_1891_, v___x_1892_);
v___x_1894_ = lean_uint64_xor(v_fold_1891_, v___x_1893_);
v___x_1895_ = lean_uint64_to_usize(v___x_1894_);
v___x_1896_ = lean_usize_of_nat(v___x_1884_);
v___x_1897_ = ((size_t)1ULL);
v___x_1898_ = lean_usize_sub(v___x_1896_, v___x_1897_);
v___x_1899_ = lean_usize_land(v___x_1895_, v___x_1898_);
v___x_1900_ = lean_array_uget_borrowed(v_x_1874_, v___x_1899_);
lean_inc(v___x_1900_);
if (v_isShared_1881_ == 0)
{
lean_ctor_set(v___x_1880_, 2, v___x_1900_);
v___x_1902_ = v___x_1880_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v_key_1876_);
lean_ctor_set(v_reuseFailAlloc_1905_, 1, v_value_1877_);
lean_ctor_set(v_reuseFailAlloc_1905_, 2, v___x_1900_);
v___x_1902_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
lean_object* v___x_1903_; 
v___x_1903_ = lean_array_uset(v_x_1874_, v___x_1899_, v___x_1902_);
v_x_1874_ = v___x_1903_;
v_x_1875_ = v_tail_1878_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4___redArg(lean_object* v_i_1909_, lean_object* v_source_1910_, lean_object* v_target_1911_){
_start:
{
lean_object* v___x_1912_; uint8_t v___x_1913_; 
v___x_1912_ = lean_array_get_size(v_source_1910_);
v___x_1913_ = lean_nat_dec_lt(v_i_1909_, v___x_1912_);
if (v___x_1913_ == 0)
{
lean_dec_ref(v_source_1910_);
lean_dec(v_i_1909_);
return v_target_1911_;
}
else
{
lean_object* v_es_1914_; lean_object* v___x_1915_; lean_object* v_source_1916_; lean_object* v_target_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v_es_1914_ = lean_array_fget(v_source_1910_, v_i_1909_);
v___x_1915_ = lean_box(0);
v_source_1916_ = lean_array_fset(v_source_1910_, v_i_1909_, v___x_1915_);
v_target_1917_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4_spec__5___redArg(v_target_1911_, v_es_1914_);
v___x_1918_ = lean_unsigned_to_nat(1u);
v___x_1919_ = lean_nat_add(v_i_1909_, v___x_1918_);
lean_dec(v_i_1909_);
v_i_1909_ = v___x_1919_;
v_source_1910_ = v_source_1916_;
v_target_1911_ = v_target_1917_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3___redArg(lean_object* v_data_1921_){
_start:
{
lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v_nbuckets_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1922_ = lean_array_get_size(v_data_1921_);
v___x_1923_ = lean_unsigned_to_nat(2u);
v_nbuckets_1924_ = lean_nat_mul(v___x_1922_, v___x_1923_);
v___x_1925_ = lean_unsigned_to_nat(0u);
v___x_1926_ = lean_box(0);
v___x_1927_ = lean_mk_array(v_nbuckets_1924_, v___x_1926_);
v___x_1928_ = lean_array_propagate_mark(v_data_1921_, v___x_1927_);
v___x_1929_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4___redArg(v___x_1925_, v_data_1921_, v___x_1928_);
return v___x_1929_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4___redArg(lean_object* v_a_1930_, lean_object* v_b_1931_, lean_object* v_x_1932_){
_start:
{
if (lean_obj_tag(v_x_1932_) == 0)
{
lean_dec(v_b_1931_);
lean_dec_ref(v_a_1930_);
return v_x_1932_;
}
else
{
lean_object* v_key_1933_; lean_object* v_value_1934_; lean_object* v_tail_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1947_; 
v_key_1933_ = lean_ctor_get(v_x_1932_, 0);
v_value_1934_ = lean_ctor_get(v_x_1932_, 1);
v_tail_1935_ = lean_ctor_get(v_x_1932_, 2);
v_isSharedCheck_1947_ = !lean_is_exclusive(v_x_1932_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1937_ = v_x_1932_;
v_isShared_1938_ = v_isSharedCheck_1947_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_tail_1935_);
lean_inc(v_value_1934_);
lean_inc(v_key_1933_);
lean_dec(v_x_1932_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1947_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
uint8_t v___x_1939_; 
v___x_1939_ = l_Lean_Parser_instBEqParserCacheKey_beq(v_key_1933_, v_a_1930_);
if (v___x_1939_ == 0)
{
lean_object* v___x_1940_; lean_object* v___x_1942_; 
v___x_1940_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4___redArg(v_a_1930_, v_b_1931_, v_tail_1935_);
if (v_isShared_1938_ == 0)
{
lean_ctor_set(v___x_1937_, 2, v___x_1940_);
v___x_1942_ = v___x_1937_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v_key_1933_);
lean_ctor_set(v_reuseFailAlloc_1943_, 1, v_value_1934_);
lean_ctor_set(v_reuseFailAlloc_1943_, 2, v___x_1940_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
else
{
lean_object* v___x_1945_; 
lean_dec(v_value_1934_);
lean_dec(v_key_1933_);
if (v_isShared_1938_ == 0)
{
lean_ctor_set(v___x_1937_, 1, v_b_1931_);
lean_ctor_set(v___x_1937_, 0, v_a_1930_);
v___x_1945_ = v___x_1937_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v_a_1930_);
lean_ctor_set(v_reuseFailAlloc_1946_, 1, v_b_1931_);
lean_ctor_set(v_reuseFailAlloc_1946_, 2, v_tail_1935_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1___redArg(lean_object* v_m_1948_, lean_object* v_a_1949_, lean_object* v_b_1950_){
_start:
{
lean_object* v_size_1951_; lean_object* v_buckets_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_2002_; 
v_size_1951_ = lean_ctor_get(v_m_1948_, 0);
v_buckets_1952_ = lean_ctor_get(v_m_1948_, 1);
v_isSharedCheck_2002_ = !lean_is_exclusive(v_m_1948_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1954_ = v_m_1948_;
v_isShared_1955_ = v_isSharedCheck_2002_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_buckets_1952_);
lean_inc(v_size_1951_);
lean_dec(v_m_1948_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_2002_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v_parserName_1956_; lean_object* v_pos_1957_; lean_object* v___x_1958_; uint64_t v___x_1959_; uint64_t v___y_1961_; 
v_parserName_1956_ = lean_ctor_get(v_a_1949_, 1);
v_pos_1957_ = lean_ctor_get(v_a_1949_, 2);
v___x_1958_ = lean_array_get_size(v_buckets_1952_);
v___x_1959_ = l_String_instHashableRaw_hash(v_pos_1957_);
if (lean_obj_tag(v_parserName_1956_) == 0)
{
uint64_t v___x_2000_; 
v___x_2000_ = 1723ULL;
v___y_1961_ = v___x_2000_;
goto v___jp_1960_;
}
else
{
uint64_t v_hash_2001_; 
v_hash_2001_ = lean_ctor_get_uint64(v_parserName_1956_, sizeof(void*)*2);
v___y_1961_ = v_hash_2001_;
goto v___jp_1960_;
}
v___jp_1960_:
{
uint64_t v___x_1962_; uint64_t v___x_1963_; uint64_t v___x_1964_; uint64_t v_fold_1965_; uint64_t v___x_1966_; uint64_t v___x_1967_; uint64_t v___x_1968_; size_t v___x_1969_; size_t v___x_1970_; size_t v___x_1971_; size_t v___x_1972_; size_t v___x_1973_; lean_object* v_bkt_1974_; uint8_t v___x_1975_; 
v___x_1962_ = lean_uint64_mix_hash(v___x_1959_, v___y_1961_);
v___x_1963_ = 32ULL;
v___x_1964_ = lean_uint64_shift_right(v___x_1962_, v___x_1963_);
v_fold_1965_ = lean_uint64_xor(v___x_1962_, v___x_1964_);
v___x_1966_ = 16ULL;
v___x_1967_ = lean_uint64_shift_right(v_fold_1965_, v___x_1966_);
v___x_1968_ = lean_uint64_xor(v_fold_1965_, v___x_1967_);
v___x_1969_ = lean_uint64_to_usize(v___x_1968_);
v___x_1970_ = lean_usize_of_nat(v___x_1958_);
v___x_1971_ = ((size_t)1ULL);
v___x_1972_ = lean_usize_sub(v___x_1970_, v___x_1971_);
v___x_1973_ = lean_usize_land(v___x_1969_, v___x_1972_);
v_bkt_1974_ = lean_array_uget_borrowed(v_buckets_1952_, v___x_1973_);
v___x_1975_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg(v_a_1949_, v_bkt_1974_);
if (v___x_1975_ == 0)
{
lean_object* v___x_1976_; lean_object* v_size_x27_1977_; lean_object* v___x_1978_; lean_object* v_buckets_x27_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; uint8_t v___x_1985_; 
v___x_1976_ = lean_unsigned_to_nat(1u);
v_size_x27_1977_ = lean_nat_add(v_size_1951_, v___x_1976_);
lean_dec(v_size_1951_);
lean_inc(v_bkt_1974_);
v___x_1978_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1978_, 0, v_a_1949_);
lean_ctor_set(v___x_1978_, 1, v_b_1950_);
lean_ctor_set(v___x_1978_, 2, v_bkt_1974_);
v_buckets_x27_1979_ = lean_array_uset(v_buckets_1952_, v___x_1973_, v___x_1978_);
v___x_1980_ = lean_unsigned_to_nat(4u);
v___x_1981_ = lean_nat_mul(v_size_x27_1977_, v___x_1980_);
v___x_1982_ = lean_unsigned_to_nat(3u);
v___x_1983_ = lean_nat_div(v___x_1981_, v___x_1982_);
lean_dec(v___x_1981_);
v___x_1984_ = lean_array_get_size(v_buckets_x27_1979_);
v___x_1985_ = lean_nat_dec_le(v___x_1983_, v___x_1984_);
lean_dec(v___x_1983_);
if (v___x_1985_ == 0)
{
lean_object* v_val_1986_; lean_object* v___x_1988_; 
v_val_1986_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3___redArg(v_buckets_x27_1979_);
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 1, v_val_1986_);
lean_ctor_set(v___x_1954_, 0, v_size_x27_1977_);
v___x_1988_ = v___x_1954_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v_size_x27_1977_);
lean_ctor_set(v_reuseFailAlloc_1989_, 1, v_val_1986_);
v___x_1988_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
return v___x_1988_;
}
}
else
{
lean_object* v___x_1991_; 
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 1, v_buckets_x27_1979_);
lean_ctor_set(v___x_1954_, 0, v_size_x27_1977_);
v___x_1991_ = v___x_1954_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_size_x27_1977_);
lean_ctor_set(v_reuseFailAlloc_1992_, 1, v_buckets_x27_1979_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
return v___x_1991_;
}
}
}
else
{
lean_object* v___x_1993_; lean_object* v_buckets_x27_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1998_; 
lean_inc(v_bkt_1974_);
v___x_1993_ = lean_box(0);
v_buckets_x27_1994_ = lean_array_uset(v_buckets_1952_, v___x_1973_, v___x_1993_);
v___x_1995_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4___redArg(v_a_1949_, v_b_1950_, v_bkt_1974_);
v___x_1996_ = lean_array_uset(v_buckets_x27_1994_, v___x_1973_, v___x_1995_);
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 1, v___x_1996_);
v___x_1998_ = v___x_1954_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v_size_1951_);
lean_ctor_set(v_reuseFailAlloc_1999_, 1, v___x_1996_);
v___x_1998_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
return v___x_1998_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg(lean_object* v_a_2003_, lean_object* v_x_2004_){
_start:
{
if (lean_obj_tag(v_x_2004_) == 0)
{
lean_object* v___x_2005_; 
v___x_2005_ = lean_box(0);
return v___x_2005_;
}
else
{
lean_object* v_key_2006_; lean_object* v_value_2007_; lean_object* v_tail_2008_; uint8_t v___x_2009_; 
v_key_2006_ = lean_ctor_get(v_x_2004_, 0);
v_value_2007_ = lean_ctor_get(v_x_2004_, 1);
v_tail_2008_ = lean_ctor_get(v_x_2004_, 2);
v___x_2009_ = l_Lean_Parser_instBEqParserCacheKey_beq(v_key_2006_, v_a_2003_);
if (v___x_2009_ == 0)
{
v_x_2004_ = v_tail_2008_;
goto _start;
}
else
{
lean_object* v___x_2011_; 
lean_inc(v_value_2007_);
v___x_2011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2011_, 0, v_value_2007_);
return v___x_2011_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg___boxed(lean_object* v_a_2012_, lean_object* v_x_2013_){
_start:
{
lean_object* v_res_2014_; 
v_res_2014_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg(v_a_2012_, v_x_2013_);
lean_dec(v_x_2013_);
lean_dec_ref(v_a_2012_);
return v_res_2014_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg(lean_object* v_m_2015_, lean_object* v_a_2016_){
_start:
{
lean_object* v_buckets_2017_; lean_object* v_parserName_2018_; lean_object* v_pos_2019_; lean_object* v___x_2020_; uint64_t v___x_2021_; uint64_t v___y_2023_; 
v_buckets_2017_ = lean_ctor_get(v_m_2015_, 1);
v_parserName_2018_ = lean_ctor_get(v_a_2016_, 1);
v_pos_2019_ = lean_ctor_get(v_a_2016_, 2);
v___x_2020_ = lean_array_get_size(v_buckets_2017_);
v___x_2021_ = l_String_instHashableRaw_hash(v_pos_2019_);
if (lean_obj_tag(v_parserName_2018_) == 0)
{
uint64_t v___x_2038_; 
v___x_2038_ = 1723ULL;
v___y_2023_ = v___x_2038_;
goto v___jp_2022_;
}
else
{
uint64_t v_hash_2039_; 
v_hash_2039_ = lean_ctor_get_uint64(v_parserName_2018_, sizeof(void*)*2);
v___y_2023_ = v_hash_2039_;
goto v___jp_2022_;
}
v___jp_2022_:
{
uint64_t v___x_2024_; uint64_t v___x_2025_; uint64_t v___x_2026_; uint64_t v_fold_2027_; uint64_t v___x_2028_; uint64_t v___x_2029_; uint64_t v___x_2030_; size_t v___x_2031_; size_t v___x_2032_; size_t v___x_2033_; size_t v___x_2034_; size_t v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; 
v___x_2024_ = lean_uint64_mix_hash(v___x_2021_, v___y_2023_);
v___x_2025_ = 32ULL;
v___x_2026_ = lean_uint64_shift_right(v___x_2024_, v___x_2025_);
v_fold_2027_ = lean_uint64_xor(v___x_2024_, v___x_2026_);
v___x_2028_ = 16ULL;
v___x_2029_ = lean_uint64_shift_right(v_fold_2027_, v___x_2028_);
v___x_2030_ = lean_uint64_xor(v_fold_2027_, v___x_2029_);
v___x_2031_ = lean_uint64_to_usize(v___x_2030_);
v___x_2032_ = lean_usize_of_nat(v___x_2020_);
v___x_2033_ = ((size_t)1ULL);
v___x_2034_ = lean_usize_sub(v___x_2032_, v___x_2033_);
v___x_2035_ = lean_usize_land(v___x_2031_, v___x_2034_);
v___x_2036_ = lean_array_uget_borrowed(v_buckets_2017_, v___x_2035_);
v___x_2037_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg(v_a_2016_, v___x_2036_);
return v___x_2037_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg___boxed(lean_object* v_m_2040_, lean_object* v_a_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg(v_m_2040_, v_a_2041_);
lean_dec_ref(v_a_2041_);
lean_dec_ref(v_m_2040_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCacheFn(lean_object* v_parserName_2043_, lean_object* v_p_2044_, lean_object* v_c_2045_, lean_object* v_s_2046_){
_start:
{
lean_object* v_cache_2047_; lean_object* v_toCacheableParserContext_2048_; lean_object* v_stxStack_2049_; lean_object* v_pos_2050_; lean_object* v_recoveredErrors_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2100_; 
v_cache_2047_ = lean_ctor_get(v_s_2046_, 3);
lean_inc_ref(v_cache_2047_);
v_toCacheableParserContext_2048_ = lean_ctor_get(v_c_2045_, 2);
v_stxStack_2049_ = lean_ctor_get(v_s_2046_, 0);
v_pos_2050_ = lean_ctor_get(v_s_2046_, 2);
v_recoveredErrors_2051_ = lean_ctor_get(v_s_2046_, 5);
v_isSharedCheck_2100_ = !lean_is_exclusive(v_s_2046_);
if (v_isSharedCheck_2100_ == 0)
{
lean_object* v_unused_2101_; lean_object* v_unused_2102_; lean_object* v_unused_2103_; 
v_unused_2101_ = lean_ctor_get(v_s_2046_, 4);
lean_dec(v_unused_2101_);
v_unused_2102_ = lean_ctor_get(v_s_2046_, 3);
lean_dec(v_unused_2102_);
v_unused_2103_ = lean_ctor_get(v_s_2046_, 1);
lean_dec(v_unused_2103_);
v___x_2053_ = v_s_2046_;
v_isShared_2054_ = v_isSharedCheck_2100_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_recoveredErrors_2051_);
lean_inc(v_pos_2050_);
lean_inc(v_stxStack_2049_);
lean_dec(v_s_2046_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2100_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v_parserCache_2055_; lean_object* v_key_2056_; lean_object* v___x_2057_; 
v_parserCache_2055_ = lean_ctor_get(v_cache_2047_, 1);
lean_inc(v_pos_2050_);
lean_inc_ref(v_toCacheableParserContext_2048_);
v_key_2056_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_key_2056_, 0, v_toCacheableParserContext_2048_);
lean_ctor_set(v_key_2056_, 1, v_parserName_2043_);
lean_ctor_set(v_key_2056_, 2, v_pos_2050_);
v___x_2057_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg(v_parserCache_2055_, v_key_2056_);
if (lean_obj_tag(v___x_2057_) == 1)
{
lean_object* v_val_2058_; lean_object* v_stx_2059_; lean_object* v_lhsPrec_2060_; lean_object* v_newPos_2061_; lean_object* v_errorMsg_2062_; lean_object* v___x_2063_; lean_object* v___x_2065_; 
lean_dec_ref_known(v_key_2056_, 3);
lean_dec(v_pos_2050_);
lean_dec_ref(v_c_2045_);
lean_dec_ref(v_p_2044_);
v_val_2058_ = lean_ctor_get(v___x_2057_, 0);
lean_inc(v_val_2058_);
lean_dec_ref_known(v___x_2057_, 1);
v_stx_2059_ = lean_ctor_get(v_val_2058_, 0);
lean_inc(v_stx_2059_);
v_lhsPrec_2060_ = lean_ctor_get(v_val_2058_, 1);
lean_inc(v_lhsPrec_2060_);
v_newPos_2061_ = lean_ctor_get(v_val_2058_, 2);
lean_inc(v_newPos_2061_);
v_errorMsg_2062_ = lean_ctor_get(v_val_2058_, 3);
lean_inc(v_errorMsg_2062_);
lean_dec(v_val_2058_);
v___x_2063_ = l_Lean_Parser_SyntaxStack_push(v_stxStack_2049_, v_stx_2059_);
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 4, v_errorMsg_2062_);
lean_ctor_set(v___x_2053_, 2, v_newPos_2061_);
lean_ctor_set(v___x_2053_, 1, v_lhsPrec_2060_);
lean_ctor_set(v___x_2053_, 0, v___x_2063_);
v___x_2065_ = v___x_2053_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v___x_2063_);
lean_ctor_set(v_reuseFailAlloc_2066_, 1, v_lhsPrec_2060_);
lean_ctor_set(v_reuseFailAlloc_2066_, 2, v_newPos_2061_);
lean_ctor_set(v_reuseFailAlloc_2066_, 3, v_cache_2047_);
lean_ctor_set(v_reuseFailAlloc_2066_, 4, v_errorMsg_2062_);
lean_ctor_set(v_reuseFailAlloc_2066_, 5, v_recoveredErrors_2051_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
}
}
else
{
lean_object* v_raw_2067_; lean_object* v_initStackSz_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2072_; 
lean_dec(v___x_2057_);
v_raw_2067_ = lean_ctor_get(v_stxStack_2049_, 0);
v_initStackSz_2068_ = lean_array_get_size(v_raw_2067_);
v___x_2069_ = lean_unsigned_to_nat(0u);
v___x_2070_ = lean_box(0);
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 4, v___x_2070_);
lean_ctor_set(v___x_2053_, 1, v___x_2069_);
v___x_2072_ = v___x_2053_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_stxStack_2049_);
lean_ctor_set(v_reuseFailAlloc_2099_, 1, v___x_2069_);
lean_ctor_set(v_reuseFailAlloc_2099_, 2, v_pos_2050_);
lean_ctor_set(v_reuseFailAlloc_2099_, 3, v_cache_2047_);
lean_ctor_set(v_reuseFailAlloc_2099_, 4, v___x_2070_);
lean_ctor_set(v_reuseFailAlloc_2099_, 5, v_recoveredErrors_2051_);
v___x_2072_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
lean_object* v_s_2073_; lean_object* v_cache_2074_; lean_object* v_stxStack_2075_; lean_object* v_lhsPrec_2076_; lean_object* v_pos_2077_; lean_object* v_errorMsg_2078_; lean_object* v_recoveredErrors_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2098_; 
v_s_2073_ = l___private_Lean_Parser_Types_0__Lean_Parser_withStackDrop(v_initStackSz_2068_, v_p_2044_, v_c_2045_, v___x_2072_);
v_cache_2074_ = lean_ctor_get(v_s_2073_, 3);
v_stxStack_2075_ = lean_ctor_get(v_s_2073_, 0);
v_lhsPrec_2076_ = lean_ctor_get(v_s_2073_, 1);
v_pos_2077_ = lean_ctor_get(v_s_2073_, 2);
v_errorMsg_2078_ = lean_ctor_get(v_s_2073_, 4);
v_recoveredErrors_2079_ = lean_ctor_get(v_s_2073_, 5);
v_isSharedCheck_2098_ = !lean_is_exclusive(v_s_2073_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2081_ = v_s_2073_;
v_isShared_2082_ = v_isSharedCheck_2098_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_recoveredErrors_2079_);
lean_inc(v_errorMsg_2078_);
lean_inc(v_cache_2074_);
lean_inc(v_pos_2077_);
lean_inc(v_lhsPrec_2076_);
lean_inc(v_stxStack_2075_);
lean_dec(v_s_2073_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2098_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
lean_object* v_tokenCache_2083_; lean_object* v_parserCache_2084_; lean_object* v___x_2086_; uint8_t v_isShared_2087_; uint8_t v_isSharedCheck_2097_; 
v_tokenCache_2083_ = lean_ctor_get(v_cache_2074_, 0);
v_parserCache_2084_ = lean_ctor_get(v_cache_2074_, 1);
v_isSharedCheck_2097_ = !lean_is_exclusive(v_cache_2074_);
if (v_isSharedCheck_2097_ == 0)
{
v___x_2086_ = v_cache_2074_;
v_isShared_2087_ = v_isSharedCheck_2097_;
goto v_resetjp_2085_;
}
else
{
lean_inc(v_parserCache_2084_);
lean_inc(v_tokenCache_2083_);
lean_dec(v_cache_2074_);
v___x_2086_ = lean_box(0);
v_isShared_2087_ = v_isSharedCheck_2097_;
goto v_resetjp_2085_;
}
v_resetjp_2085_:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2092_; 
v___x_2088_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_2075_);
lean_inc(v_errorMsg_2078_);
lean_inc(v_pos_2077_);
lean_inc(v_lhsPrec_2076_);
v___x_2089_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2089_, 0, v___x_2088_);
lean_ctor_set(v___x_2089_, 1, v_lhsPrec_2076_);
lean_ctor_set(v___x_2089_, 2, v_pos_2077_);
lean_ctor_set(v___x_2089_, 3, v_errorMsg_2078_);
v___x_2090_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1___redArg(v_parserCache_2084_, v_key_2056_, v___x_2089_);
if (v_isShared_2087_ == 0)
{
lean_ctor_set(v___x_2086_, 1, v___x_2090_);
v___x_2092_ = v___x_2086_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v_tokenCache_2083_);
lean_ctor_set(v_reuseFailAlloc_2096_, 1, v___x_2090_);
v___x_2092_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
lean_object* v___x_2094_; 
if (v_isShared_2082_ == 0)
{
lean_ctor_set(v___x_2081_, 3, v___x_2092_);
v___x_2094_ = v___x_2081_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v_stxStack_2075_);
lean_ctor_set(v_reuseFailAlloc_2095_, 1, v_lhsPrec_2076_);
lean_ctor_set(v_reuseFailAlloc_2095_, 2, v_pos_2077_);
lean_ctor_set(v_reuseFailAlloc_2095_, 3, v___x_2092_);
lean_ctor_set(v_reuseFailAlloc_2095_, 4, v_errorMsg_2078_);
lean_ctor_set(v_reuseFailAlloc_2095_, 5, v_recoveredErrors_2079_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0(lean_object* v_00_u03b2_2104_, lean_object* v_m_2105_, lean_object* v_a_2106_){
_start:
{
lean_object* v___x_2107_; 
v___x_2107_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg(v_m_2105_, v_a_2106_);
return v___x_2107_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___boxed(lean_object* v_00_u03b2_2108_, lean_object* v_m_2109_, lean_object* v_a_2110_){
_start:
{
lean_object* v_res_2111_; 
v_res_2111_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0(v_00_u03b2_2108_, v_m_2109_, v_a_2110_);
lean_dec_ref(v_a_2110_);
lean_dec_ref(v_m_2109_);
return v_res_2111_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1(lean_object* v_00_u03b2_2112_, lean_object* v_m_2113_, lean_object* v_a_2114_, lean_object* v_b_2115_){
_start:
{
lean_object* v___x_2116_; 
v___x_2116_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1___redArg(v_m_2113_, v_a_2114_, v_b_2115_);
return v___x_2116_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0(lean_object* v_00_u03b2_2117_, lean_object* v_a_2118_, lean_object* v_x_2119_){
_start:
{
lean_object* v___x_2120_; 
v___x_2120_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg(v_a_2118_, v_x_2119_);
return v___x_2120_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2121_, lean_object* v_a_2122_, lean_object* v_x_2123_){
_start:
{
lean_object* v_res_2124_; 
v_res_2124_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0(v_00_u03b2_2121_, v_a_2122_, v_x_2123_);
lean_dec(v_x_2123_);
lean_dec_ref(v_a_2122_);
return v_res_2124_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2(lean_object* v_00_u03b2_2125_, lean_object* v_a_2126_, lean_object* v_x_2127_){
_start:
{
uint8_t v___x_2128_; 
v___x_2128_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg(v_a_2126_, v_x_2127_);
return v___x_2128_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2129_, lean_object* v_a_2130_, lean_object* v_x_2131_){
_start:
{
uint8_t v_res_2132_; lean_object* v_r_2133_; 
v_res_2132_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2(v_00_u03b2_2129_, v_a_2130_, v_x_2131_);
lean_dec(v_x_2131_);
lean_dec_ref(v_a_2130_);
v_r_2133_ = lean_box(v_res_2132_);
return v_r_2133_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3(lean_object* v_00_u03b2_2134_, lean_object* v_data_2135_){
_start:
{
lean_object* v___x_2136_; 
v___x_2136_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3___redArg(v_data_2135_);
return v___x_2136_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4(lean_object* v_00_u03b2_2137_, lean_object* v_a_2138_, lean_object* v_b_2139_, lean_object* v_x_2140_){
_start:
{
lean_object* v___x_2141_; 
v___x_2141_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4___redArg(v_a_2138_, v_b_2139_, v_x_2140_);
return v___x_2141_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_2142_, lean_object* v_i_2143_, lean_object* v_source_2144_, lean_object* v_target_2145_){
_start:
{
lean_object* v___x_2146_; 
v___x_2146_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4___redArg(v_i_2143_, v_source_2144_, v_target_2145_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_2147_, lean_object* v_x_2148_, lean_object* v_x_2149_){
_start:
{
lean_object* v___x_2150_; 
v___x_2150_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4_spec__5___redArg(v_x_2148_, v_x_2149_);
return v___x_2150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache(lean_object* v_parserName_2151_, lean_object* v_p_2152_){
_start:
{
lean_object* v_info_2153_; lean_object* v_fn_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2162_; 
v_info_2153_ = lean_ctor_get(v_p_2152_, 0);
v_fn_2154_ = lean_ctor_get(v_p_2152_, 1);
v_isSharedCheck_2162_ = !lean_is_exclusive(v_p_2152_);
if (v_isSharedCheck_2162_ == 0)
{
v___x_2156_ = v_p_2152_;
v_isShared_2157_ = v_isSharedCheck_2162_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_fn_2154_);
lean_inc(v_info_2153_);
lean_dec(v_p_2152_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2162_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2158_; lean_object* v___x_2160_; 
v___x_2158_ = lean_alloc_closure((void*)(l_Lean_Parser_withCacheFn), 4, 2);
lean_closure_set(v___x_2158_, 0, v_parserName_2151_);
lean_closure_set(v___x_2158_, 1, v_fn_2154_);
if (v_isShared_2157_ == 0)
{
lean_ctor_set(v___x_2156_, 1, v___x_2158_);
v___x_2160_ = v___x_2156_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v_info_2153_);
lean_ctor_set(v_reuseFailAlloc_2161_, 1, v___x_2158_);
v___x_2160_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
return v___x_2160_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1(){
_start:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
v___x_2170_ = ((lean_object*)(l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1));
v___x_2171_ = ((lean_object*)(l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__2));
v___x_2172_ = l_Lean_addBuiltinDocString(v___x_2170_, v___x_2171_);
return v___x_2172_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___boxed(lean_object* v_a_2173_){
_start:
{
lean_object* v_res_2174_; 
v_res_2174_ = l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1();
return v_res_2174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserFn_run(lean_object* v_p_2182_, lean_object* v_ictx_2183_, lean_object* v_pmctx_2184_, lean_object* v_tokens_2185_, lean_object* v_s_2186_){
_start:
{
lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; 
v___x_2187_ = ((lean_object*)(l_Lean_Parser_ParserFn_run___closed__1));
v___x_2188_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2188_, 0, v_ictx_2183_);
lean_ctor_set(v___x_2188_, 1, v_pmctx_2184_);
lean_ctor_set(v___x_2188_, 2, v___x_2187_);
lean_ctor_set(v___x_2188_, 3, v_tokens_2185_);
v___x_2189_ = lean_apply_2(v_p_2182_, v___x_2188_, v_s_2186_);
return v___x_2189_;
}
}
lean_object* runtime_initialize_Lean_Data_Trie(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Extension(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_OrderInstances(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_Types(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Trie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_OrderInstances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_maxPrec = _init_l_Lean_Parser_maxPrec();
lean_mark_persistent(l_Lean_Parser_maxPrec);
l_Lean_Parser_argPrec = _init_l_Lean_Parser_argPrec();
lean_mark_persistent(l_Lean_Parser_argPrec);
l_Lean_Parser_leadPrec = _init_l_Lean_Parser_leadPrec();
lean_mark_persistent(l_Lean_Parser_leadPrec);
l_Lean_Parser_minPrec = _init_l_Lean_Parser_minPrec();
lean_mark_persistent(l_Lean_Parser_minPrec);
l_Lean_Parser_instInhabitedInputContext = _init_l_Lean_Parser_instInhabitedInputContext();
lean_mark_persistent(l_Lean_Parser_instInhabitedInputContext);
l_Lean_Parser_instInhabitedFirstTokens_default = _init_l_Lean_Parser_instInhabitedFirstTokens_default();
lean_mark_persistent(l_Lean_Parser_instInhabitedFirstTokens_default);
l_Lean_Parser_instInhabitedFirstTokens = _init_l_Lean_Parser_instInhabitedFirstTokens();
lean_mark_persistent(l_Lean_Parser_instInhabitedFirstTokens);
res = l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_Types(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Parser_InputContext_endPos__valid___autoParam = _init_l_Lean_Parser_InputContext_endPos__valid___autoParam();
lean_mark_persistent(l_Lean_Parser_InputContext_endPos__valid___autoParam);
l_Lean_Parser_InputContext_mk___auto__1 = _init_l_Lean_Parser_InputContext_mk___auto__1();
lean_mark_persistent(l_Lean_Parser_InputContext_mk___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Trie(uint8_t builtin);
lean_object* initialize_Lean_DocString_Extension(uint8_t builtin);
lean_object* initialize_Init_Data_String_OrderInstances(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_Types(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Trie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_OrderInstances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_Types(builtin);
}
#ifdef __cplusplus
}
#endif
