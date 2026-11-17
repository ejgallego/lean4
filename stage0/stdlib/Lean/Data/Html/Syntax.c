// Lean compiler output
// Module: Lean.Data.Html.Syntax
// Imports: import Init.Prelude public meta import Init.Data.Sum.Basic public meta import Lean.Meta.Hint public meta import Lean.Data.Html.Spec public meta import Lean.Data.Html.CharRef
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
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___redArg(lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_ParserState_mkEOIError(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
lean_object* l_Lean_Parser_rawFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Html_isAsciiWhitespace(uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_instDecidableEqChar___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* l_Lean_Parser_ParserState_next_x27___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeWhileFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthenFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkNodeToken(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_termParser(lean_object*);
lean_object* l_Lean_Parser_andthen(lean_object*, lean_object*);
lean_object* l_Lean_Parser_node(lean_object*, lean_object*);
lean_object* l_Lean_Parser_orelse(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_strLit;
lean_object* l_Lean_Parser_optional(lean_object*);
uint8_t l_Lean_Html_isControl(uint32_t);
uint8_t l_Lean_Html_isNonCharacter(uint32_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
extern lean_object* l_Lean_Parser_skip;
lean_object* l_Lean_Parser_many(lean_object*);
uint8_t l_Lean_Syntax_structEq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_pushLine___redArg(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkKind___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_visitArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_mkAntiquot_parenthesizer_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_termParser_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppSpace_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_resetLeadWord___redArg(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_termParser_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_node_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_visitAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* l_Lean_Html_characterReference_x3f(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_hint(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkKind___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_visitArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_mkAntiquot_formatter_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Parser_takeWhile1Fn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Parser_ParserState_mkError(lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_manyAux(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Parser_withAntiquotFn(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthenInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_noFirstTokenInfo(lean_object*);
lean_object* l_Lean_Parser_orelseInfo(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Parser_symbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_Lean_Syntax_instRepr_repr(lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
lean_object* l_Lean_Parser_withCache(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Sum_elim___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_prevn(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "unexpected character '"};
static const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__0 = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__0_value;
static const lean_string_object l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__1 = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__1_value;
static const lean_string_object l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__2 = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___lam__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___lam__2___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___closed__0 = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___closed__0_value;
static const lean_closure_object l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___closed__1 = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___closed__1_value;
static const lean_ctor_object l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___closed__0_value),((lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___closed__2 = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_parenthesizer___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_parenthesizer___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_subsyntaxNodeAtom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_subsyntaxNodeAtom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_decodeCharacterReferenceAt_skipAlphanum(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_decodeCharacterReferenceAt_skipAlphanum___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Invalid HTML "};
static const lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__0_value;
static lean_once_cell_t l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__1;
static const lean_string_object l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = " character reference `"};
static const lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__2_value;
static lean_once_cell_t l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__3;
static const lean_string_object l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__4 = (const lean_object*)&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__4_value;
static lean_once_cell_t l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__5;
static const lean_string_object l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "named"};
static const lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__6 = (const lean_object*)&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__6_value;
static const lean_string_object l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "numeric"};
static const lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__7 = (const lean_object*)&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__7_value;
static const lean_string_object l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Escape the ampersand"};
static const lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__8 = (const lean_object*)&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__8_value;
static lean_once_cell_t l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__9;
static const lean_string_object l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "&amp;"};
static const lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__10 = (const lean_object*)&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__10_value;
static const lean_ctor_object l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__10_value)}};
static const lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__11 = (const lean_object*)&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__11_value;
static const lean_ctor_object l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 0, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__12 = (const lean_object*)&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__12_value;
static const lean_ctor_object l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__13 = (const lean_object*)&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__13_value;
static const lean_array_object l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__13_value)}};
static const lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__14 = (const lean_object*)&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__14_value;
static const lean_string_object l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Unterminated HTML character reference '"};
static const lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__15 = (const lean_object*)&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__15_value;
static lean_once_cell_t l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__16;
static lean_once_cell_t l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__17;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_decodeCharacterReferences_go___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_decodeCharacterReferences_go___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_decodeCharacterReferences_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_decodeCharacterReferences_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_decodeCharacterReferences(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_decodeCharacterReferences___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol_parenthesizer(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol_formatter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_interpWith_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_termParser_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Html_Syntax_interpWith_formatter___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_interpWith_formatter___closed__0_value;
static const lean_string_object l_Lean_Html_Syntax_interpWith_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lean_Html_Syntax_interpWith_formatter___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_interpWith_formatter___closed__1_value;
static const lean_string_object l_Lean_Html_Syntax_interpWith_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "'}'"};
static const lean_object* l_Lean_Html_Syntax_interpWith_formatter___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_interpWith_formatter___closed__2_value;
static const lean_ctor_object l_Lean_Html_Syntax_interpWith_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_interpWith_formatter___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_interpWith_formatter___closed__3 = (const lean_object*)&l_Lean_Html_Syntax_interpWith_formatter___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_formatter(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_termParser_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___closed__0_value;
static const lean_closure_object l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_interpWith_formatter___closed__1_value)} };
static const lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___closed__1_value;
static const lean_closure_object l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___closed__0_value),((lean_object*)&l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___closed__1_value)} };
static const lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Html_Syntax_interpWith___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_interpWith___closed__0;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Html_Syntax_interp_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Html_Syntax_interp_formatter___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__0_value;
static const lean_string_object l_Lean_Html_Syntax_interp_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Html"};
static const lean_object* l_Lean_Html_Syntax_interp_formatter___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__1_value;
static const lean_string_object l_Lean_Html_Syntax_interp_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Syntax"};
static const lean_object* l_Lean_Html_Syntax_interp_formatter___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__2_value;
static const lean_string_object l_Lean_Html_Syntax_interp_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "interp"};
static const lean_object* l_Lean_Html_Syntax_interp_formatter___closed__3 = (const lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__3_value;
static const lean_ctor_object l_Lean_Html_Syntax_interp_formatter___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Html_Syntax_interp_formatter___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__4_value_aux_0),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(63, 204, 11, 254, 52, 252, 208, 28)}};
static const lean_ctor_object l_Lean_Html_Syntax_interp_formatter___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__4_value_aux_1),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__2_value),LEAN_SCALAR_PTR_LITERAL(64, 220, 71, 125, 15, 201, 233, 195)}};
static const lean_ctor_object l_Lean_Html_Syntax_interp_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__4_value_aux_2),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__3_value),LEAN_SCALAR_PTR_LITERAL(84, 205, 174, 42, 121, 171, 225, 181)}};
static const lean_object* l_Lean_Html_Syntax_interp_formatter___closed__4 = (const lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__4_value;
static const lean_string_object l_Lean_Html_Syntax_interp_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_Lean_Html_Syntax_interp_formatter___closed__5 = (const lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interp_formatter(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interp_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interp_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interp_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interp_parenthesizer(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interp_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interp(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interp___boxed(lean_object*);
static const lean_string_object l_Lean_Html_Syntax_interpMany_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "interpMany"};
static const lean_object* l_Lean_Html_Syntax_interpMany_formatter___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_interpMany_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_interpMany_formatter___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Html_Syntax_interpMany_formatter___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_interpMany_formatter___closed__1_value_aux_0),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(63, 204, 11, 254, 52, 252, 208, 28)}};
static const lean_ctor_object l_Lean_Html_Syntax_interpMany_formatter___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_interpMany_formatter___closed__1_value_aux_1),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__2_value),LEAN_SCALAR_PTR_LITERAL(64, 220, 71, 125, 15, 201, 233, 195)}};
static const lean_ctor_object l_Lean_Html_Syntax_interpMany_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_interpMany_formatter___closed__1_value_aux_2),((lean_object*)&l_Lean_Html_Syntax_interpMany_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 8, 45, 111, 253, 122, 157, 183)}};
static const lean_object* l_Lean_Html_Syntax_interpMany_formatter___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_interpMany_formatter___closed__1_value;
static const lean_string_object l_Lean_Html_Syntax_interpMany_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "{..."};
static const lean_object* l_Lean_Html_Syntax_interpMany_formatter___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_interpMany_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpMany_formatter(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpMany_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpMany_parenthesizer___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpMany_parenthesizer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpMany_parenthesizer(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpMany_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpMany(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpMany___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpKind(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpKind___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Html_Syntax_instReprInterpView_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "openBrace"};
static const lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__7;
static const lean_string_object l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__9_value;
static const lean_string_object l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__10 = (const lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__10_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__12;
static const lean_string_object l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "closeBrace"};
static const lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__13 = (const lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__13_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__13_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__15;
static const lean_string_object l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__16 = (const lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__16_value;
static lean_once_cell_t l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__17;
static lean_once_cell_t l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__18;
static const lean_ctor_object l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__19 = (const lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__19_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__16_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__20 = (const lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__20_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprInterpView_repr(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprInterpView(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprInterpView___boxed(lean_object*);
static const lean_ctor_object l_Lean_Html_Syntax_instInhabitedInterpView_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_instInhabitedInterpView_default___redArg___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedInterpView_default___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instInhabitedInterpView_default___redArg();
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instInhabitedInterpView_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Html_Syntax_instInhabitedInterpView_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_instInhabitedInterpView_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instInhabitedInterpView_default(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instInhabitedInterpView_default___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instInhabitedInterpView___redArg();
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instInhabitedInterpView___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instInhabitedInterpView(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instInhabitedInterpView___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_instBEqInterpView_beq___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqInterpView_beq___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_instBEqInterpView_beq(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqInterpView_beq___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqInterpView(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqInterpView___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Interp_view___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Interp_view___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Interp_view(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Interp_view___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_InterpView_of___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_InterpView_of___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_InterpView_of(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_InterpView_of___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__1___boxed__const__1;
static lean_once_cell_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__2___boxed__const__1;
static lean_once_cell_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__3___boxed__const__1;
static lean_once_cell_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__3;
LEAN_EXPORT uint8_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___boxed(lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_text___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_text___lam__2___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_text___lam__2___closed__0_value;
static const lean_string_object l_Lean_Html_Syntax_text___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected HTML text"};
static const lean_object* l_Lean_Html_Syntax_text___lam__2___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_text___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_text___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Html_Syntax_text___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l_Lean_Html_Syntax_text___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_text___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_text___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Html_Syntax_text___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_text___closed__1_value_aux_0),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(63, 204, 11, 254, 52, 252, 208, 28)}};
static const lean_ctor_object l_Lean_Html_Syntax_text___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_text___closed__1_value_aux_1),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__2_value),LEAN_SCALAR_PTR_LITERAL(64, 220, 71, 125, 15, 201, 233, 195)}};
static const lean_ctor_object l_Lean_Html_Syntax_text___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_text___closed__1_value_aux_2),((lean_object*)&l_Lean_Html_Syntax_text___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 216, 1, 122, 187, 158, 244, 211)}};
static const lean_object* l_Lean_Html_Syntax_text___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_text___closed__1_value;
static const lean_closure_object l_Lean_Html_Syntax_text___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_text___lam__2, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_text___closed__1_value)} };
static const lean_object* l_Lean_Html_Syntax_text___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_text___closed__2_value;
static lean_once_cell_t l_Lean_Html_Syntax_text___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_text___closed__3;
static lean_once_cell_t l_Lean_Html_Syntax_text___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_text___closed__4;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_text;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_textKind = (const lean_object*)&l_Lean_Html_Syntax_text___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_text_parenthesizer___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_text_parenthesizer___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_text_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_text_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_text_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_text_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_flushWs(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_finish(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_go___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_go___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "HTML comment may not contain '<!--'"};
static const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn___closed__0 = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn___closed__0_value;
static const lean_string_object l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "HTML comment may not contain '--!>'"};
static const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn___closed__1 = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn___closed__1_value;
static const lean_string_object l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "'-->' (end of HTML comment)"};
static const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn___closed__2 = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn___closed__2_value;
static const lean_ctor_object l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn___closed__3 = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "<!--"};
static const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentFn___closed__0 = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentFn___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Html_Syntax_comment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "comment"};
static const lean_object* l_Lean_Html_Syntax_comment___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_comment___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_comment___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Html_Syntax_comment___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_comment___closed__1_value_aux_0),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(63, 204, 11, 254, 52, 252, 208, 28)}};
static const lean_ctor_object l_Lean_Html_Syntax_comment___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_comment___closed__1_value_aux_1),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__2_value),LEAN_SCALAR_PTR_LITERAL(64, 220, 71, 125, 15, 201, 233, 195)}};
static const lean_ctor_object l_Lean_Html_Syntax_comment___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_comment___closed__1_value_aux_2),((lean_object*)&l_Lean_Html_Syntax_comment___closed__0_value),LEAN_SCALAR_PTR_LITERAL(242, 54, 202, 118, 199, 75, 185, 39)}};
static const lean_object* l_Lean_Html_Syntax_comment___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_comment___closed__1_value;
static lean_once_cell_t l_Lean_Html_Syntax_comment___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_comment___closed__2;
static lean_once_cell_t l_Lean_Html_Syntax_comment___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_comment___closed__3;
static lean_once_cell_t l_Lean_Html_Syntax_comment___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_comment___closed__4;
static lean_once_cell_t l_Lean_Html_Syntax_comment___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_comment___closed__5;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_comment;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_commentKind = (const lean_object*)&l_Lean_Html_Syntax_comment___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_comment_parenthesizer___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_comment_parenthesizer___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_comment_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_comment_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_comment_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_comment_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Comment_view___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Comment_view(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__1___boxed__const__1;
static lean_once_cell_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__1;
LEAN_EXPORT uint8_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___boxed(lean_object*);
static const lean_string_object l_Lean_Html_Syntax_tagName_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "tagName"};
static const lean_object* l_Lean_Html_Syntax_tagName_formatter___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_tagName_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_tagName_formatter___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Html_Syntax_tagName_formatter___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_tagName_formatter___closed__1_value_aux_0),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(63, 204, 11, 254, 52, 252, 208, 28)}};
static const lean_ctor_object l_Lean_Html_Syntax_tagName_formatter___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_tagName_formatter___closed__1_value_aux_1),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__2_value),LEAN_SCALAR_PTR_LITERAL(64, 220, 71, 125, 15, 201, 233, 195)}};
static const lean_ctor_object l_Lean_Html_Syntax_tagName_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_tagName_formatter___closed__1_value_aux_2),((lean_object*)&l_Lean_Html_Syntax_tagName_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(151, 67, 220, 247, 194, 57, 77, 138)}};
static const lean_object* l_Lean_Html_Syntax_tagName_formatter___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_tagName_formatter___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_tagName_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_tagName_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_tagName_parenthesizer___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_tagName_parenthesizer___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_tagName_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_tagName_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_tagName___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_tagName___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_tagName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_tagName___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_tagName___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_tagName___closed__0_value;
static const lean_string_object l_Lean_Html_Syntax_tagName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "tag name"};
static const lean_object* l_Lean_Html_Syntax_tagName___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_tagName___closed__1_value;
static const lean_closure_object l_Lean_Html_Syntax_tagName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_tagName___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_tagName___closed__2_value;
static lean_once_cell_t l_Lean_Html_Syntax_tagName___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_tagName___closed__3;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_tagName;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_tagNameKind = (const lean_object*)&l_Lean_Html_Syntax_tagName_formatter___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_TagName_view___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_TagName_view___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_TagName_view(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_TagName_view___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__0;
static lean_once_cell_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__1;
static lean_once_cell_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__3___boxed__const__1;
static lean_once_cell_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__4___boxed__const__1;
static lean_once_cell_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__5___boxed__const__1;
static lean_once_cell_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__5;
LEAN_EXPORT uint8_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameFirstChar(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameFirstChar___boxed(lean_object*);
static const lean_string_object l_Lean_Html_Syntax_attrName_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrName"};
static const lean_object* l_Lean_Html_Syntax_attrName_formatter___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_attrName_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_attrName_formatter___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Html_Syntax_attrName_formatter___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_attrName_formatter___closed__1_value_aux_0),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(63, 204, 11, 254, 52, 252, 208, 28)}};
static const lean_ctor_object l_Lean_Html_Syntax_attrName_formatter___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_attrName_formatter___closed__1_value_aux_1),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__2_value),LEAN_SCALAR_PTR_LITERAL(64, 220, 71, 125, 15, 201, 233, 195)}};
static const lean_ctor_object l_Lean_Html_Syntax_attrName_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_attrName_formatter___closed__1_value_aux_2),((lean_object*)&l_Lean_Html_Syntax_attrName_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(45, 74, 103, 252, 182, 26, 187, 163)}};
static const lean_object* l_Lean_Html_Syntax_attrName_formatter___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_attrName_formatter___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrName_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrName_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrName_parenthesizer___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrName_parenthesizer___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrName_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrName_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Html_Syntax_attrName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "attribute name"};
static const lean_object* l_Lean_Html_Syntax_attrName___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_attrName___closed__0_value;
static const lean_closure_object l_Lean_Html_Syntax_attrName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameFirstChar___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_attrName___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_attrName___closed__1_value;
static const lean_closure_object l_Lean_Html_Syntax_attrName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_attrName___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_attrName___closed__2_value;
static lean_once_cell_t l_Lean_Html_Syntax_attrName___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attrName___closed__3;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrName;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_attrNameKind = (const lean_object*)&l_Lean_Html_Syntax_attrName_formatter___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrName_view___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrName_view___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrName_view(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrName_view___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Html_Syntax_attrVal_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "attrVal"};
static const lean_object* l_Lean_Html_Syntax_attrVal_formatter___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_attrVal_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_attrVal_formatter___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Html_Syntax_attrVal_formatter___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_attrVal_formatter___closed__1_value_aux_0),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(63, 204, 11, 254, 52, 252, 208, 28)}};
static const lean_ctor_object l_Lean_Html_Syntax_attrVal_formatter___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_attrVal_formatter___closed__1_value_aux_1),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__2_value),LEAN_SCALAR_PTR_LITERAL(64, 220, 71, 125, 15, 201, 233, 195)}};
static const lean_ctor_object l_Lean_Html_Syntax_attrVal_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_attrVal_formatter___closed__1_value_aux_2),((lean_object*)&l_Lean_Html_Syntax_attrVal_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(98, 11, 113, 204, 240, 246, 95, 23)}};
static const lean_object* l_Lean_Html_Syntax_attrVal_formatter___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_attrVal_formatter___closed__1_value;
static const lean_closure_object l_Lean_Html_Syntax_attrVal_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_strLit_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_attrVal_formatter___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_attrVal_formatter___closed__2_value;
static const lean_closure_object l_Lean_Html_Syntax_attrVal_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_interp_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Html_Syntax_attrVal_formatter___closed__3 = (const lean_object*)&l_Lean_Html_Syntax_attrVal_formatter___closed__3_value;
static const lean_closure_object l_Lean_Html_Syntax_attrVal_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_attrVal_formatter___closed__2_value),((lean_object*)&l_Lean_Html_Syntax_attrVal_formatter___closed__3_value)} };
static const lean_object* l_Lean_Html_Syntax_attrVal_formatter___closed__4 = (const lean_object*)&l_Lean_Html_Syntax_attrVal_formatter___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrVal_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrVal_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_attrVal_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_strLit_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_attrVal_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_attrVal_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Html_Syntax_attrVal_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_interp_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Html_Syntax_attrVal_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_attrVal_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Html_Syntax_attrVal_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_attrVal_parenthesizer___closed__0_value),((lean_object*)&l_Lean_Html_Syntax_attrVal_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Html_Syntax_attrVal_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_attrVal_parenthesizer___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrVal_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrVal_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Html_Syntax_attrVal___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attrVal___closed__0;
static lean_once_cell_t l_Lean_Html_Syntax_attrVal___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attrVal___closed__1;
static lean_once_cell_t l_Lean_Html_Syntax_attrVal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attrVal___closed__2;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrVal;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_attrValKind = (const lean_object*)&l_Lean_Html_Syntax_attrVal_formatter___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_str_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_str_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_interp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_interp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Html_Syntax_instReprAttrValView_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Html.Syntax.AttrValView.str"};
static const lean_object* l_Lean_Html_Syntax_instReprAttrValView_repr___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprAttrValView_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__0_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprAttrValView_repr___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__1_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprAttrValView_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_instReprAttrValView_repr___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__2_value;
static lean_once_cell_t l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3;
static lean_once_cell_t l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4;
static const lean_string_object l_Lean_Html_Syntax_instReprAttrValView_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Html.Syntax.AttrValView.interp"};
static const lean_object* l_Lean_Html_Syntax_instReprAttrValView_repr___closed__5 = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__5_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprAttrValView_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__5_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprAttrValView_repr___closed__6 = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__6_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprAttrValView_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_instReprAttrValView_repr___closed__7 = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprAttrValView_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprAttrValView_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_instReprAttrValView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_instReprAttrValView_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_instReprAttrValView___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrValView___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instReprAttrValView = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrValView___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_instInhabitedAttrValView_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_instInhabitedAttrValView_default___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedAttrValView_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instInhabitedAttrValView_default = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedAttrValView_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instInhabitedAttrValView = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedAttrValView_default___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_instBEqAttrValView_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqAttrValView_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_instBEqAttrValView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_instBEqAttrValView_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_instBEqAttrValView___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instBEqAttrValView___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instBEqAttrValView = (const lean_object*)&l_Lean_Html_Syntax_instBEqAttrValView___closed__0_value;
static const lean_string_object l_Lean_Html_Syntax_AttrVal_view___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_Html_Syntax_AttrVal_view___redArg___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_AttrVal_view___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_AttrVal_view___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_AttrVal_view___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_Html_Syntax_AttrVal_view___redArg___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_AttrVal_view___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrVal_view___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrVal_view___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrVal_view(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrVal_view___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_of___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_of___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_of(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_of___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Html_Syntax_attr_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "attr"};
static const lean_object* l_Lean_Html_Syntax_attr_formatter___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_attr_formatter___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_attr_formatter___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Html_Syntax_attr_formatter___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_attr_formatter___closed__1_value_aux_0),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(63, 204, 11, 254, 52, 252, 208, 28)}};
static const lean_ctor_object l_Lean_Html_Syntax_attr_formatter___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_attr_formatter___closed__1_value_aux_1),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__2_value),LEAN_SCALAR_PTR_LITERAL(64, 220, 71, 125, 15, 201, 233, 195)}};
static const lean_ctor_object l_Lean_Html_Syntax_attr_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_attr_formatter___closed__1_value_aux_2),((lean_object*)&l_Lean_Html_Syntax_attr_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(210, 85, 121, 220, 59, 241, 0, 150)}};
static const lean_object* l_Lean_Html_Syntax_attr_formatter___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_attr_formatter___closed__1_value;
static const lean_string_object l_Lean_Html_Syntax_attr_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l_Lean_Html_Syntax_attr_formatter___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_attr_formatter___closed__2_value;
static const lean_string_object l_Lean_Html_Syntax_attr_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "'='"};
static const lean_object* l_Lean_Html_Syntax_attr_formatter___closed__3 = (const lean_object*)&l_Lean_Html_Syntax_attr_formatter___closed__3_value;
static const lean_ctor_object l_Lean_Html_Syntax_attr_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_attr_formatter___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_attr_formatter___closed__4 = (const lean_object*)&l_Lean_Html_Syntax_attr_formatter___closed__4_value;
static const lean_closure_object l_Lean_Html_Syntax_attr_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_rawSymbol_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_attr_formatter___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_attr_formatter___closed__4_value)} };
static const lean_object* l_Lean_Html_Syntax_attr_formatter___closed__5 = (const lean_object*)&l_Lean_Html_Syntax_attr_formatter___closed__5_value;
static lean_once_cell_t l_Lean_Html_Syntax_attr_formatter___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attr_formatter___closed__6;
static lean_once_cell_t l_Lean_Html_Syntax_attr_formatter___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attr_formatter___closed__7;
static lean_once_cell_t l_Lean_Html_Syntax_attr_formatter___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attr_formatter___closed__8;
static const lean_closure_object l_Lean_Html_Syntax_attr_formatter___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_interpMany_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Html_Syntax_attr_formatter___closed__9 = (const lean_object*)&l_Lean_Html_Syntax_attr_formatter___closed__9_value;
static const lean_closure_object l_Lean_Html_Syntax_attr_formatter___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_attr_formatter___closed__9_value),((lean_object*)&l_Lean_Html_Syntax_attrVal_formatter___closed__3_value)} };
static const lean_object* l_Lean_Html_Syntax_attr_formatter___closed__10 = (const lean_object*)&l_Lean_Html_Syntax_attr_formatter___closed__10_value;
static lean_once_cell_t l_Lean_Html_Syntax_attr_formatter___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attr_formatter___closed__11;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attr_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attr_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attr_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attr_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_attr_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_attr_parenthesizer___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_attr_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_attr_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Html_Syntax_attr_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_attr_formatter___closed__2_value)} };
static const lean_object* l_Lean_Html_Syntax_attr_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_attr_parenthesizer___closed__1_value;
static lean_once_cell_t l_Lean_Html_Syntax_attr_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attr_parenthesizer___closed__2;
static lean_once_cell_t l_Lean_Html_Syntax_attr_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attr_parenthesizer___closed__3;
static lean_once_cell_t l_Lean_Html_Syntax_attr_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attr_parenthesizer___closed__4;
static const lean_closure_object l_Lean_Html_Syntax_attr_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_interpMany_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Html_Syntax_attr_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Html_Syntax_attr_parenthesizer___closed__5_value;
static const lean_closure_object l_Lean_Html_Syntax_attr_parenthesizer___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_attr_parenthesizer___closed__5_value),((lean_object*)&l_Lean_Html_Syntax_attrVal_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Html_Syntax_attr_parenthesizer___closed__6 = (const lean_object*)&l_Lean_Html_Syntax_attr_parenthesizer___closed__6_value;
static lean_once_cell_t l_Lean_Html_Syntax_attr_parenthesizer___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attr_parenthesizer___closed__7;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attr_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attr_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Html_Syntax_attr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attr___closed__0;
static lean_once_cell_t l_Lean_Html_Syntax_attr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attr___closed__1;
static lean_once_cell_t l_Lean_Html_Syntax_attr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attr___closed__2;
static lean_once_cell_t l_Lean_Html_Syntax_attr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attr___closed__3;
static lean_once_cell_t l_Lean_Html_Syntax_attr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attr___closed__4;
static lean_once_cell_t l_Lean_Html_Syntax_attr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attr___closed__5;
static lean_once_cell_t l_Lean_Html_Syntax_attr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attr___closed__6;
static lean_once_cell_t l_Lean_Html_Syntax_attr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_attr___closed__7;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attr;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_attrKind = (const lean_object*)&l_Lean_Html_Syntax_attr_formatter___closed__1_value;
static const lean_string_object l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__2_value),((lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eq"};
static const lean_object* l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__6;
static const lean_string_object l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "val"};
static const lean_object* l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__7 = (const lean_object*)&l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__7_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__8_value;
static lean_once_cell_t l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__9;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprValAttrView_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprValAttrView_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprValAttrView_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_instReprValAttrView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_instReprValAttrView_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_instReprValAttrView___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instReprValAttrView___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instReprValAttrView = (const lean_object*)&l_Lean_Html_Syntax_instReprValAttrView___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_instInhabitedValAttrView_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_instInhabitedValAttrView_default___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedValAttrView_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instInhabitedValAttrView_default = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedValAttrView_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instInhabitedValAttrView = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedValAttrView_default___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_instBEqValAttrView_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqValAttrView_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_instBEqValAttrView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_instBEqValAttrView_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_instBEqValAttrView___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instBEqValAttrView___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instBEqValAttrView = (const lean_object*)&l_Lean_Html_Syntax_instBEqValAttrView___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_val_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_val_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_bool_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_bool_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_interp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_interp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Html_Syntax_instReprAttrView_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.Html.Syntax.AttrView.val"};
static const lean_object* l_Lean_Html_Syntax_instReprAttrView_repr___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrView_repr___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprAttrView_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprAttrView_repr___closed__0_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprAttrView_repr___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrView_repr___closed__1_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprAttrView_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprAttrView_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_instReprAttrView_repr___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrView_repr___closed__2_value;
static const lean_string_object l_Lean_Html_Syntax_instReprAttrView_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Html.Syntax.AttrView.bool"};
static const lean_object* l_Lean_Html_Syntax_instReprAttrView_repr___closed__3 = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrView_repr___closed__3_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprAttrView_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprAttrView_repr___closed__3_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprAttrView_repr___closed__4 = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrView_repr___closed__4_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprAttrView_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprAttrView_repr___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_instReprAttrView_repr___closed__5 = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrView_repr___closed__5_value;
static const lean_string_object l_Lean_Html_Syntax_instReprAttrView_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Html.Syntax.AttrView.interp"};
static const lean_object* l_Lean_Html_Syntax_instReprAttrView_repr___closed__6 = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrView_repr___closed__6_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprAttrView_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprAttrView_repr___closed__6_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprAttrView_repr___closed__7 = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrView_repr___closed__7_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprAttrView_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprAttrView_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_instReprAttrView_repr___closed__8 = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrView_repr___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprAttrView_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprAttrView_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_instReprAttrView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_instReprAttrView_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_instReprAttrView___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrView___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instReprAttrView = (const lean_object*)&l_Lean_Html_Syntax_instReprAttrView___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_instInhabitedAttrView_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instInhabitedValAttrView_default___closed__0_value)}};
static const lean_object* l_Lean_Html_Syntax_instInhabitedAttrView_default___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedAttrView_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instInhabitedAttrView_default = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedAttrView_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instInhabitedAttrView = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedAttrView_default___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_instBEqAttrView_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqAttrView_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_instBEqAttrView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_instBEqAttrView_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_instBEqAttrView___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instBEqAttrView___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instBEqAttrView = (const lean_object*)&l_Lean_Html_Syntax_instBEqAttrView___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Attr_view___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Attr_view___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Attr_view(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Attr_view___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_of___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_of___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_of(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_of___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Html_Syntax_elementKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "element"};
static const lean_object* l_Lean_Html_Syntax_elementKind___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_elementKind___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_elementKind___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Html_Syntax_elementKind___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_elementKind___closed__1_value_aux_0),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(63, 204, 11, 254, 52, 252, 208, 28)}};
static const lean_ctor_object l_Lean_Html_Syntax_elementKind___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_elementKind___closed__1_value_aux_1),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__2_value),LEAN_SCALAR_PTR_LITERAL(64, 220, 71, 125, 15, 201, 233, 195)}};
static const lean_ctor_object l_Lean_Html_Syntax_elementKind___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_elementKind___closed__1_value_aux_2),((lean_object*)&l_Lean_Html_Syntax_elementKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 57, 84, 135, 110, 77, 53, 20)}};
static const lean_object* l_Lean_Html_Syntax_elementKind___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_elementKind___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_elementKind = (const lean_object*)&l_Lean_Html_Syntax_elementKind___closed__1_value;
static const lean_string_object l_Lean_Html_Syntax_contentKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "content"};
static const lean_object* l_Lean_Html_Syntax_contentKind___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_contentKind___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_contentKind___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Html_Syntax_contentKind___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_contentKind___closed__1_value_aux_0),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(63, 204, 11, 254, 52, 252, 208, 28)}};
static const lean_ctor_object l_Lean_Html_Syntax_contentKind___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_contentKind___closed__1_value_aux_1),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__2_value),LEAN_SCALAR_PTR_LITERAL(64, 220, 71, 125, 15, 201, 233, 195)}};
static const lean_ctor_object l_Lean_Html_Syntax_contentKind___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_contentKind___closed__1_value_aux_2),((lean_object*)&l_Lean_Html_Syntax_contentKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 105, 154, 121, 168, 129, 109, 37)}};
static const lean_object* l_Lean_Html_Syntax_contentKind___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_contentKind___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_contentKind = (const lean_object*)&l_Lean_Html_Syntax_contentKind___closed__1_value;
static const lean_string_object l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "attribute"};
static const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__0 = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__0_value;
static const lean_string_object l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "'/>'"};
static const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__1 = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__1_value;
static const lean_string_object l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "'>'"};
static const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__2 = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__2_value;
static const lean_ctor_object l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__3 = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__3_value;
static const lean_ctor_object l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__1_value),((lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__3_value)}};
static const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__4 = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__4_value;
static const lean_ctor_object l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__0_value),((lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__4_value)}};
static const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__5 = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__5_value;
LEAN_EXPORT const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_elementWith_formatter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_elementWith_formatter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_elementWith_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_elementWith_formatter___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_elementWith_formatter___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__0_value;
static const lean_string_object l_Lean_Html_Syntax_elementWith_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "<"};
static const lean_object* l_Lean_Html_Syntax_elementWith_formatter___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__1_value;
static const lean_string_object l_Lean_Html_Syntax_elementWith_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "'<'"};
static const lean_object* l_Lean_Html_Syntax_elementWith_formatter___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__2_value;
static const lean_ctor_object l_Lean_Html_Syntax_elementWith_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_elementWith_formatter___closed__3 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__3_value;
static const lean_closure_object l_Lean_Html_Syntax_elementWith_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_rawSymbol_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__3_value)} };
static const lean_object* l_Lean_Html_Syntax_elementWith_formatter___closed__4 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__4_value;
static lean_once_cell_t l_Lean_Html_Syntax_elementWith_formatter___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_elementWith_formatter___closed__5;
static lean_once_cell_t l_Lean_Html_Syntax_elementWith_formatter___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_elementWith_formatter___closed__6;
static const lean_string_object l_Lean_Html_Syntax_elementWith_formatter___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "/>"};
static const lean_object* l_Lean_Html_Syntax_elementWith_formatter___closed__7 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__7_value;
static const lean_closure_object l_Lean_Html_Syntax_elementWith_formatter___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_rawSymbol_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__5_value)} };
static const lean_object* l_Lean_Html_Syntax_elementWith_formatter___closed__8 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__8_value;
static const lean_string_object l_Lean_Html_Syntax_elementWith_formatter___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ">"};
static const lean_object* l_Lean_Html_Syntax_elementWith_formatter___closed__9 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__9_value;
static const lean_closure_object l_Lean_Html_Syntax_elementWith_formatter___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_rawSymbol_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__5_value)} };
static const lean_object* l_Lean_Html_Syntax_elementWith_formatter___closed__10 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__10_value;
static const lean_string_object l_Lean_Html_Syntax_elementWith_formatter___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "</"};
static const lean_object* l_Lean_Html_Syntax_elementWith_formatter___closed__11 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__11_value;
static const lean_string_object l_Lean_Html_Syntax_elementWith_formatter___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "'</'"};
static const lean_object* l_Lean_Html_Syntax_elementWith_formatter___closed__12 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__12_value;
static const lean_ctor_object l_Lean_Html_Syntax_elementWith_formatter___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_elementWith_formatter___closed__13 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__13_value;
static const lean_closure_object l_Lean_Html_Syntax_elementWith_formatter___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_rawSymbol_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__13_value)} };
static const lean_object* l_Lean_Html_Syntax_elementWith_formatter___closed__14 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__14_value;
static const lean_closure_object l_Lean_Html_Syntax_elementWith_formatter___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_rawSymbol_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__3_value)} };
static const lean_object* l_Lean_Html_Syntax_elementWith_formatter___closed__15 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__15_value;
static lean_once_cell_t l_Lean_Html_Syntax_elementWith_formatter___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_elementWith_formatter___closed__16;
static lean_once_cell_t l_Lean_Html_Syntax_elementWith_formatter___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_elementWith_formatter___closed__17;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_elementWith_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_elementWith_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_elementWith_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__1_value)} };
static const lean_object* l_Lean_Html_Syntax_elementWith_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Html_Syntax_elementWith_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ppSpace_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_elementWith_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_parenthesizer___closed__1_value;
static lean_once_cell_t l_Lean_Html_Syntax_elementWith_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_elementWith_parenthesizer___closed__2;
static lean_once_cell_t l_Lean_Html_Syntax_elementWith_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_elementWith_parenthesizer___closed__3;
static const lean_closure_object l_Lean_Html_Syntax_elementWith_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__7_value)} };
static const lean_object* l_Lean_Html_Syntax_elementWith_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Html_Syntax_elementWith_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__9_value)} };
static const lean_object* l_Lean_Html_Syntax_elementWith_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_parenthesizer___closed__5_value;
static const lean_closure_object l_Lean_Html_Syntax_elementWith_parenthesizer___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_elementWith_formatter___closed__11_value)} };
static const lean_object* l_Lean_Html_Syntax_elementWith_parenthesizer___closed__6 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_parenthesizer___closed__6_value;
static const lean_closure_object l_Lean_Html_Syntax_elementWith_parenthesizer___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_attr_parenthesizer___closed__0_value),((lean_object*)&l_Lean_Html_Syntax_elementWith_parenthesizer___closed__5_value)} };
static const lean_object* l_Lean_Html_Syntax_elementWith_parenthesizer___closed__7 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_parenthesizer___closed__7_value;
static const lean_closure_object l_Lean_Html_Syntax_elementWith_parenthesizer___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_elementWith_parenthesizer___closed__6_value),((lean_object*)&l_Lean_Html_Syntax_elementWith_parenthesizer___closed__7_value)} };
static const lean_object* l_Lean_Html_Syntax_elementWith_parenthesizer___closed__8 = (const lean_object*)&l_Lean_Html_Syntax_elementWith_parenthesizer___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_elementWith_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_elementWith_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Html_Syntax_elementWith___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_elementWith___closed__0;
static lean_once_cell_t l_Lean_Html_Syntax_elementWith___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_elementWith___closed__1;
static lean_once_cell_t l_Lean_Html_Syntax_elementWith___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_elementWith___closed__2;
static lean_once_cell_t l_Lean_Html_Syntax_elementWith___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_elementWith___closed__3;
static lean_once_cell_t l_Lean_Html_Syntax_elementWith___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_elementWith___closed__4;
static lean_once_cell_t l_Lean_Html_Syntax_elementWith___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_elementWith___closed__5;
static lean_once_cell_t l_Lean_Html_Syntax_elementWith___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_elementWith___closed__6;
static lean_once_cell_t l_Lean_Html_Syntax_elementWith___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_elementWith___closed__7;
static lean_once_cell_t l_Lean_Html_Syntax_elementWith___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_elementWith___closed__8;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_elementWith(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__1_value;
static const lean_string_object l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__2_value;
static lean_once_cell_t l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__3;
static lean_once_cell_t l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__4;
static const lean_ctor_object l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__5 = (const lean_object*)&l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__5_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__2_value)}};
static const lean_object* l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__6 = (const lean_object*)&l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__6_value;
static const lean_string_object l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__7_value)}};
static const lean_object* l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__8_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__2_value),((lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "attrs"};
static const lean_object* l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__6;
static const lean_string_object l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "gt"};
static const lean_object* l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__7 = (const lean_object*)&l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__7_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprTagView_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprTagView_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprTagView_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_instReprTagView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_instReprTagView_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_instReprTagView___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instReprTagView___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instReprTagView = (const lean_object*)&l_Lean_Html_Syntax_instReprTagView___closed__0_value;
static const lean_array_object l_Lean_Html_Syntax_instInhabitedTagView_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Html_Syntax_instInhabitedTagView_default___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedTagView_default___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_instInhabitedTagView_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_instInhabitedTagView_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_instInhabitedTagView_default___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedTagView_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instInhabitedTagView_default = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedTagView_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instInhabitedTagView = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedTagView_default___closed__1_value;
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTagView_beq_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTagView_beq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_instBEqTagView_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqTagView_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTagView_beq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTagView_beq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_instBEqTagView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_instBEqTagView_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_instBEqTagView___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instBEqTagView___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instBEqTagView = (const lean_object*)&l_Lean_Html_Syntax_instBEqTagView___closed__0_value;
static const lean_string_object l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "startTag"};
static const lean_object* l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__2_value),((lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__4;
static const lean_string_object l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "children\?"};
static const lean_object* l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__6_value;
static const lean_string_object l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "endTag\?"};
static const lean_object* l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__7 = (const lean_object*)&l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__7_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__8_value;
static lean_once_cell_t l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__9;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprElementView_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprElementView_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprElementView_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_instReprElementView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_instReprElementView_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_instReprElementView___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instReprElementView___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instReprElementView = (const lean_object*)&l_Lean_Html_Syntax_instReprElementView___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_instInhabitedElementView_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instInhabitedTagView_default___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_instInhabitedElementView_default___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedElementView_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instInhabitedElementView_default = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedElementView_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instInhabitedElementView = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedElementView_default___closed__0_value;
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Html_Syntax_instBEqElementView_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Html_Syntax_instBEqElementView_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Html_Syntax_instBEqElementView_beq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Html_Syntax_instBEqElementView_beq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_instBEqElementView_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqElementView_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_instBEqElementView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_instBEqElementView_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_instBEqElementView___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instBEqElementView___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instBEqElementView = (const lean_object*)&l_Lean_Html_Syntax_instBEqElementView___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Element_view___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Element_view___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_Element_view___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_Element_view___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_Element_view___redArg___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__0_value;
static const lean_closure_object l_Lean_Html_Syntax_Element_view___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_Element_view___redArg___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__1_value;
static const lean_closure_object l_Lean_Html_Syntax_Element_view___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_Element_view___redArg___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__2_value;
static const lean_closure_object l_Lean_Html_Syntax_Element_view___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_Element_view___redArg___closed__3 = (const lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__3_value;
static const lean_closure_object l_Lean_Html_Syntax_Element_view___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_Element_view___redArg___closed__4 = (const lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__4_value;
static const lean_closure_object l_Lean_Html_Syntax_Element_view___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_Element_view___redArg___closed__5 = (const lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__5_value;
static const lean_closure_object l_Lean_Html_Syntax_Element_view___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_Element_view___redArg___closed__6 = (const lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__6_value;
static const lean_closure_object l_Lean_Html_Syntax_Element_view___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_Element_view___redArg___closed__7 = (const lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Html_Syntax_Element_view___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__1_value),((lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__2_value)}};
static const lean_object* l_Lean_Html_Syntax_Element_view___redArg___closed__8 = (const lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Html_Syntax_Element_view___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__8_value),((lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__3_value),((lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__4_value),((lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__5_value),((lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__6_value)}};
static const lean_object* l_Lean_Html_Syntax_Element_view___redArg___closed__9 = (const lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Html_Syntax_Element_view___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__9_value),((lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__7_value)}};
static const lean_object* l_Lean_Html_Syntax_Element_view___redArg___closed__10 = (const lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__10_value;
static const lean_array_object l_Lean_Html_Syntax_Element_view___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Html_Syntax_Element_view___redArg___closed__11 = (const lean_object*)&l_Lean_Html_Syntax_Element_view___redArg___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Element_view___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Element_view(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ElementView_of___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ElementView_of(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_contentWith___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Html_Syntax_contentWith___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_contentWith___closed__0;
static lean_once_cell_t l_Lean_Html_Syntax_contentWith___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_contentWith___closed__1;
static lean_once_cell_t l_Lean_Html_Syntax_contentWith___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_contentWith___closed__2;
static lean_once_cell_t l_Lean_Html_Syntax_contentWith___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_contentWith___closed__3;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_contentWith(lean_object*);
static const lean_string_object l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_contentItemFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "HTML content"};
static const lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_contentItemFn___closed__0 = (const lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_contentItemFn___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_contentItemFn(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_content___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_contentItemFn, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_content___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_content___closed__0_value;
static lean_once_cell_t l_Lean_Html_Syntax_content___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_content___closed__1;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_content;
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_parenthesizer_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_parenthesizer_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_parenthesizer_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_parenthesizer_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_parenthesizer_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_parenthesizer_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Html_Syntax_contentItem_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Unexpected syntax node kind `"};
static const lean_object* l_Lean_Html_Syntax_contentItem_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_contentItem_parenthesizer___closed__0_value;
static lean_once_cell_t l_Lean_Html_Syntax_contentItem_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_contentItem_parenthesizer___closed__1;
static const lean_string_object l_Lean_Html_Syntax_contentItem_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "` in HTML content"};
static const lean_object* l_Lean_Html_Syntax_contentItem_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_contentItem_parenthesizer___closed__2_value;
static lean_once_cell_t l_Lean_Html_Syntax_contentItem_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_contentItem_parenthesizer___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_parenthesizer_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_content_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_content_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_content_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_mkAntiquot_parenthesizer_x27___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_contentKind___closed__0_value),((lean_object*)&l_Lean_Html_Syntax_contentKind___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Html_Syntax_content_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_content_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_content_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_content_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_contentItem_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_parenthesizer_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_parenthesizer_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_parenthesizer_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_contentItem_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_parenthesizer_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_parenthesizer_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_formatter_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_formatter_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_formatter_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_formatter_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_formatter_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_formatter_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_formatter_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_content_formatter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_content_formatter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_content_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_mkAntiquot_formatter_x27___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_contentKind___closed__0_value),((lean_object*)&l_Lean_Html_Syntax_contentKind___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Html_Syntax_content_formatter___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_content_formatter___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_content_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_content_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_contentItem_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_formatter_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_formatter_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_formatter_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_contentItem_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_formatter_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_formatter_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_element_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_content_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_element_formatter___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_element_formatter___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_element_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_element_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_element_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_content_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_element_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_element_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_element_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_element_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Html_Syntax_element___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_element___closed__0;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_element;
static const lean_string_object l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Sum.inl "};
static const lean_object* l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0___closed__0 = (const lean_object*)&l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0___closed__0_value;
static const lean_ctor_object l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0___closed__0_value)}};
static const lean_object* l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0___closed__1 = (const lean_object*)&l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Sum.inr "};
static const lean_object* l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0___closed__2 = (const lean_object*)&l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0___closed__2_value;
static const lean_ctor_object l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0___closed__2_value)}};
static const lean_object* l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0___closed__3 = (const lean_object*)&l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__1___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "stxs"};
static const lean_object* l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg___closed__2_value),((lean_object*)&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprTextCommentsView_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprTextCommentsView_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_instReprTextCommentsView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_instReprTextCommentsView_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_instReprTextCommentsView___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instReprTextCommentsView___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instReprTextCommentsView = (const lean_object*)&l_Lean_Html_Syntax_instReprTextCommentsView___closed__0_value;
static const lean_array_object l_Lean_Html_Syntax_instInhabitedTextCommentsView_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Html_Syntax_instInhabitedTextCommentsView_default___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedTextCommentsView_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instInhabitedTextCommentsView_default = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedTextCommentsView_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instInhabitedTextCommentsView = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedTextCommentsView_default___closed__0_value;
LEAN_EXPORT uint8_t l_Sum_instBEq_beq___at___00Lean_Html_Syntax_instBEqTextCommentsView_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Sum_instBEq_beq___at___00Lean_Html_Syntax_instBEqTextCommentsView_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTextCommentsView_beq_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTextCommentsView_beq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_instBEqTextCommentsView_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqTextCommentsView_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTextCommentsView_beq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTextCommentsView_beq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_instBEqTextCommentsView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_instBEqTextCommentsView_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_instBEqTextCommentsView___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instBEqTextCommentsView___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instBEqTextCommentsView = (const lean_object*)&l_Lean_Html_Syntax_instBEqTextCommentsView___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Html_Syntax_TextCommentsView_getText_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Html_Syntax_TextCommentsView_getText_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Html_Syntax_TextCommentsView_getText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Html_Syntax_TextCommentsView_getText___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_TextCommentsView_getText___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_TextCommentsView_getText(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_TextCommentsView_getText___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Html_Syntax_TextCommentsView_getSyntax_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Html_Syntax_TextCommentsView_getSyntax_spec__0___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Html_Syntax_TextCommentsView_getSyntax_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Html_Syntax_TextCommentsView_getSyntax_spec__0___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Html_Syntax_TextCommentsView_getSyntax_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Html_Syntax_TextCommentsView_getSyntax_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Html_Syntax_TextCommentsView_getSyntax_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Html_Syntax_TextCommentsView_getSyntax_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Html_Syntax_TextCommentsView_getSyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Html_Syntax_TextCommentsView_getSyntax___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_TextCommentsView_getSyntax___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_TextCommentsView_getSyntax___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_TextCommentsView_getSyntax___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Html_Syntax_TextCommentsView_getSyntax___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_TextCommentsView_getSyntax___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_TextCommentsView_getSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_element_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_element_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_textComments_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_textComments_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_interp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_interp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Html_Syntax_instReprContentItemView_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Html.Syntax.ContentItemView.element"};
static const lean_object* l_Lean_Html_Syntax_instReprContentItemView_repr___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instReprContentItemView_repr___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprContentItemView_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprContentItemView_repr___closed__0_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprContentItemView_repr___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_instReprContentItemView_repr___closed__1_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprContentItemView_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprContentItemView_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_instReprContentItemView_repr___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_instReprContentItemView_repr___closed__2_value;
static const lean_string_object l_Lean_Html_Syntax_instReprContentItemView_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Lean.Html.Syntax.ContentItemView.textComments"};
static const lean_object* l_Lean_Html_Syntax_instReprContentItemView_repr___closed__3 = (const lean_object*)&l_Lean_Html_Syntax_instReprContentItemView_repr___closed__3_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprContentItemView_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprContentItemView_repr___closed__3_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprContentItemView_repr___closed__4 = (const lean_object*)&l_Lean_Html_Syntax_instReprContentItemView_repr___closed__4_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprContentItemView_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprContentItemView_repr___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_instReprContentItemView_repr___closed__5 = (const lean_object*)&l_Lean_Html_Syntax_instReprContentItemView_repr___closed__5_value;
static const lean_string_object l_Lean_Html_Syntax_instReprContentItemView_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Html.Syntax.ContentItemView.interp"};
static const lean_object* l_Lean_Html_Syntax_instReprContentItemView_repr___closed__6 = (const lean_object*)&l_Lean_Html_Syntax_instReprContentItemView_repr___closed__6_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprContentItemView_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprContentItemView_repr___closed__6_value)}};
static const lean_object* l_Lean_Html_Syntax_instReprContentItemView_repr___closed__7 = (const lean_object*)&l_Lean_Html_Syntax_instReprContentItemView_repr___closed__7_value;
static const lean_ctor_object l_Lean_Html_Syntax_instReprContentItemView_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_instReprContentItemView_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_instReprContentItemView_repr___closed__8 = (const lean_object*)&l_Lean_Html_Syntax_instReprContentItemView_repr___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprContentItemView_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprContentItemView_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_instReprContentItemView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_instReprContentItemView_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_instReprContentItemView___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instReprContentItemView___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instReprContentItemView = (const lean_object*)&l_Lean_Html_Syntax_instReprContentItemView___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_instInhabitedContentItemView_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_instInhabitedContentItemView_default___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedContentItemView_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instInhabitedContentItemView_default = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedContentItemView_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instInhabitedContentItemView = (const lean_object*)&l_Lean_Html_Syntax_instInhabitedContentItemView_default___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_instBEqContentItemView_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqContentItemView_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_instBEqContentItemView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_instBEqContentItemView_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Html_Syntax_instBEqContentItemView___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_instBEqContentItemView___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Html_Syntax_instBEqContentItemView = (const lean_object*)&l_Lean_Html_Syntax_instBEqContentItemView___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_Content_view_viewItem___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_Content_view_viewItem___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_Content_view_viewItem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_Content_view_viewItem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Content_view___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Content_view___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Content_view___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Content_view___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Html_Syntax_Content_view___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Html_Syntax_Content_view___redArg___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_Content_view___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_Content_view___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_Content_view___redArg___closed__0_value),((lean_object*)&l_Lean_Html_Syntax_Content_view___redArg___closed__0_value)}};
static const lean_object* l_Lean_Html_Syntax_Content_view___redArg___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_Content_view___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Content_view___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Content_view___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Content_view(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Content_view___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Html_Syntax_html_x25___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "html%"};
static const lean_object* l_Lean_Html_Syntax_html_x25___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_html_x25___closed__0_value;
static const lean_ctor_object l_Lean_Html_Syntax_html_x25___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Html_Syntax_html_x25___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_html_x25___closed__1_value_aux_0),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__1_value),LEAN_SCALAR_PTR_LITERAL(63, 204, 11, 254, 52, 252, 208, 28)}};
static const lean_ctor_object l_Lean_Html_Syntax_html_x25___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_html_x25___closed__1_value_aux_1),((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__2_value),LEAN_SCALAR_PTR_LITERAL(64, 220, 71, 125, 15, 201, 233, 195)}};
static const lean_ctor_object l_Lean_Html_Syntax_html_x25___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_html_x25___closed__1_value_aux_2),((lean_object*)&l_Lean_Html_Syntax_html_x25___closed__0_value),LEAN_SCALAR_PTR_LITERAL(229, 150, 207, 200, 122, 44, 247, 128)}};
static const lean_object* l_Lean_Html_Syntax_html_x25___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_html_x25___closed__1_value;
static lean_once_cell_t l_Lean_Html_Syntax_html_x25___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_html_x25___closed__2;
static lean_once_cell_t l_Lean_Html_Syntax_html_x25___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_html_x25___closed__3;
static const lean_string_object l_Lean_Html_Syntax_html_x25___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "'{'"};
static const lean_object* l_Lean_Html_Syntax_html_x25___closed__4 = (const lean_object*)&l_Lean_Html_Syntax_html_x25___closed__4_value;
static const lean_ctor_object l_Lean_Html_Syntax_html_x25___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_html_x25___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Html_Syntax_html_x25___closed__5 = (const lean_object*)&l_Lean_Html_Syntax_html_x25___closed__5_value;
static lean_once_cell_t l_Lean_Html_Syntax_html_x25___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_html_x25___closed__6;
static lean_once_cell_t l_Lean_Html_Syntax_html_x25___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_html_x25___closed__7;
static lean_once_cell_t l_Lean_Html_Syntax_html_x25___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_html_x25___closed__8;
static lean_once_cell_t l_Lean_Html_Syntax_html_x25___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_html_x25___closed__9;
static lean_once_cell_t l_Lean_Html_Syntax_html_x25___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_html_x25___closed__10;
static lean_once_cell_t l_Lean_Html_Syntax_html_x25___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_html_x25___closed__11;
static lean_once_cell_t l_Lean_Html_Syntax_html_x25___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_html_x25___closed__12;
static lean_once_cell_t l_Lean_Html_Syntax_html_x25___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Html_Syntax_html_x25___closed__13;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_html_x25;
static const lean_closure_object l_Lean_Html_Syntax_html_x25_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_html_x25___closed__0_value),((lean_object*)&l_Lean_Html_Syntax_html_x25___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Html_Syntax_html_x25_formatter___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_html_x25_formatter___closed__0_value;
static const lean_closure_object l_Lean_Html_Syntax_html_x25_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_html_x25___closed__0_value)} };
static const lean_object* l_Lean_Html_Syntax_html_x25_formatter___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_html_x25_formatter___closed__1_value;
static const lean_closure_object l_Lean_Html_Syntax_html_x25_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_rawSymbol_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_html_x25___closed__5_value)} };
static const lean_object* l_Lean_Html_Syntax_html_x25_formatter___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_html_x25_formatter___closed__2_value;
static const lean_closure_object l_Lean_Html_Syntax_html_x25_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_interpWith_formatter___closed__1_value)} };
static const lean_object* l_Lean_Html_Syntax_html_x25_formatter___closed__3 = (const lean_object*)&l_Lean_Html_Syntax_html_x25_formatter___closed__3_value;
static const lean_closure_object l_Lean_Html_Syntax_html_x25_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_element_formatter___closed__0_value),((lean_object*)&l_Lean_Html_Syntax_html_x25_formatter___closed__3_value)} };
static const lean_object* l_Lean_Html_Syntax_html_x25_formatter___closed__4 = (const lean_object*)&l_Lean_Html_Syntax_html_x25_formatter___closed__4_value;
static const lean_closure_object l_Lean_Html_Syntax_html_x25_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_html_x25_formatter___closed__2_value),((lean_object*)&l_Lean_Html_Syntax_html_x25_formatter___closed__4_value)} };
static const lean_object* l_Lean_Html_Syntax_html_x25_formatter___closed__5 = (const lean_object*)&l_Lean_Html_Syntax_html_x25_formatter___closed__5_value;
static const lean_closure_object l_Lean_Html_Syntax_html_x25_formatter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_html_x25_formatter___closed__1_value),((lean_object*)&l_Lean_Html_Syntax_html_x25_formatter___closed__5_value)} };
static const lean_object* l_Lean_Html_Syntax_html_x25_formatter___closed__6 = (const lean_object*)&l_Lean_Html_Syntax_html_x25_formatter___closed__6_value;
static const lean_closure_object l_Lean_Html_Syntax_html_x25_formatter___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_html_x25___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_html_x25_formatter___closed__6_value)} };
static const lean_object* l_Lean_Html_Syntax_html_x25_formatter___closed__7 = (const lean_object*)&l_Lean_Html_Syntax_html_x25_formatter___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_html_x25_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_html_x25_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Html_Syntax_html_x25_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_html_x25___closed__0_value),((lean_object*)&l_Lean_Html_Syntax_html_x25___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Html_Syntax_html_x25_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Html_Syntax_html_x25_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Html_Syntax_html_x25_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_html_x25___closed__0_value)} };
static const lean_object* l_Lean_Html_Syntax_html_x25_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Html_Syntax_html_x25_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Html_Syntax_html_x25_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_interp_formatter___closed__5_value)} };
static const lean_object* l_Lean_Html_Syntax_html_x25_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Html_Syntax_html_x25_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Html_Syntax_html_x25_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_interpWith_formatter___closed__1_value)} };
static const lean_object* l_Lean_Html_Syntax_html_x25_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Html_Syntax_html_x25_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Html_Syntax_html_x25_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_element_parenthesizer___closed__0_value),((lean_object*)&l_Lean_Html_Syntax_html_x25_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Html_Syntax_html_x25_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Html_Syntax_html_x25_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Html_Syntax_html_x25_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_html_x25_parenthesizer___closed__2_value),((lean_object*)&l_Lean_Html_Syntax_html_x25_parenthesizer___closed__4_value)} };
static const lean_object* l_Lean_Html_Syntax_html_x25_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Html_Syntax_html_x25_parenthesizer___closed__5_value;
static const lean_closure_object l_Lean_Html_Syntax_html_x25_parenthesizer___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_html_x25_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Html_Syntax_html_x25_parenthesizer___closed__5_value)} };
static const lean_object* l_Lean_Html_Syntax_html_x25_parenthesizer___closed__6 = (const lean_object*)&l_Lean_Html_Syntax_html_x25_parenthesizer___closed__6_value;
static const lean_closure_object l_Lean_Html_Syntax_html_x25_parenthesizer___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Html_Syntax_html_x25___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Html_Syntax_html_x25_parenthesizer___closed__6_value)} };
static const lean_object* l_Lean_Html_Syntax_html_x25_parenthesizer___closed__7 = (const lean_object*)&l_Lean_Html_Syntax_html_x25_parenthesizer___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_html_x25_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_html_x25_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn(lean_object* v_p_4_, lean_object* v_expected_5_, lean_object* v_c_6_, lean_object* v_s_7_){
_start:
{
lean_object* v_pos_8_; lean_object* v_toInputContext_9_; uint8_t v___x_10_; 
v_pos_8_ = lean_ctor_get(v_s_7_, 2);
v_toInputContext_9_ = lean_ctor_get(v_c_6_, 0);
v___x_10_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_9_, v_pos_8_);
if (v___x_10_ == 0)
{
lean_object* v_inputString_11_; uint32_t v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; uint8_t v___x_15_; 
v_inputString_11_ = lean_ctor_get(v_toInputContext_9_, 0);
v___x_12_ = lean_string_utf8_get_fast(v_inputString_11_, v_pos_8_);
v___x_13_ = lean_box_uint32(v___x_12_);
v___x_14_ = lean_apply_1(v_p_4_, v___x_13_);
v___x_15_ = lean_unbox(v___x_14_);
if (v___x_15_ == 0)
{
uint8_t v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_16_ = 1;
v___x_17_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__0));
v___x_18_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__1));
v___x_19_ = lean_string_push(v___x_18_, v___x_12_);
v___x_20_ = lean_string_append(v___x_17_, v___x_19_);
lean_dec_ref(v___x_19_);
v___x_21_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__2));
v___x_22_ = lean_string_append(v___x_20_, v___x_21_);
v___x_23_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_7_, v___x_22_, v_expected_5_, v___x_16_);
return v___x_23_;
}
else
{
lean_object* v___x_24_; 
lean_inc(v_pos_8_);
lean_dec(v_expected_5_);
v___x_24_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_7_, v_c_6_, v_pos_8_);
lean_dec(v_pos_8_);
return v___x_24_;
}
}
else
{
lean_object* v___x_25_; 
lean_dec_ref(v_p_4_);
v___x_25_ = l_Lean_Parser_ParserState_mkEOIError(v_s_7_, v_expected_5_);
return v___x_25_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___boxed(lean_object* v_p_26_, lean_object* v_expected_27_, lean_object* v_c_28_, lean_object* v_s_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn(v_p_26_, v_expected_27_, v_c_28_, v_s_29_);
lean_dec_ref(v_c_28_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___lam__0(lean_object* v_expected_31_, lean_object* v_firstP_32_, lean_object* v_manyP_33_, lean_object* v_kind_34_, lean_object* v_c_35_, lean_object* v_s_36_){
_start:
{
lean_object* v_pos_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v_s_42_; uint8_t v___x_43_; lean_object* v___x_44_; 
v_pos_37_ = lean_ctor_get(v_s_36_, 2);
lean_inc(v_pos_37_);
v___x_38_ = lean_box(0);
v___x_39_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_39_, 0, v_expected_31_);
lean_ctor_set(v___x_39_, 1, v___x_38_);
v___x_40_ = lean_alloc_closure((void*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___boxed), 4, 2);
lean_closure_set(v___x_40_, 0, v_firstP_32_);
lean_closure_set(v___x_40_, 1, v___x_39_);
v___x_41_ = lean_alloc_closure((void*)(l_Lean_Parser_takeWhileFn___boxed), 3, 1);
lean_closure_set(v___x_41_, 0, v_manyP_33_);
lean_inc_ref(v_c_35_);
v_s_42_ = l_Lean_Parser_andthenFn(v___x_40_, v___x_41_, v_c_35_, v_s_36_);
v___x_43_ = 1;
v___x_44_ = l_Lean_Parser_mkNodeToken(v_kind_34_, v_pos_37_, v___x_43_, v_c_35_, v_s_42_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___lam__1(lean_object* v___y_45_){
_start:
{
lean_inc(v___y_45_);
return v___y_45_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___lam__1___boxed(lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___lam__1(v___y_46_);
lean_dec(v___y_46_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___lam__2(lean_object* v___y_48_){
_start:
{
lean_inc_ref(v___y_48_);
return v___y_48_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___lam__2___boxed(lean_object* v___y_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___lam__2(v___y_49_);
lean_dec_ref(v___y_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany(lean_object* v_kind_57_, lean_object* v_expected_58_, lean_object* v_firstP_59_, lean_object* v_manyP_60_){
_start:
{
lean_object* v___f_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
lean_inc(v_kind_57_);
v___f_61_ = lean_alloc_closure((void*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___lam__0), 6, 4);
lean_closure_set(v___f_61_, 0, v_expected_58_);
lean_closure_set(v___f_61_, 1, v_firstP_59_);
lean_closure_set(v___f_61_, 2, v_manyP_60_);
lean_closure_set(v___f_61_, 3, v_kind_57_);
v___x_62_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___closed__2));
v___x_63_ = l_Lean_Parser_nodeInfo(v_kind_57_, v___x_62_);
v___x_64_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
lean_ctor_set(v___x_64_, 1, v___f_61_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_parenthesizer___redArg(lean_object* v_a_65_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_65_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_parenthesizer___redArg___boxed(lean_object* v_a_68_, lean_object* v_a_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_parenthesizer___redArg(v_a_68_);
lean_dec(v_a_68_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_parenthesizer(lean_object* v_x_71_, lean_object* v_x_72_, lean_object* v_x_73_, lean_object* v_x_74_, lean_object* v_a_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_76_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_parenthesizer___boxed(lean_object* v_x_81_, lean_object* v_x_82_, lean_object* v_x_83_, lean_object* v_x_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_parenthesizer(v_x_81_, v_x_82_, v_x_83_, v_x_84_, v_a_85_, v_a_86_, v_a_87_, v_a_88_);
lean_dec(v_a_88_);
lean_dec_ref(v_a_87_);
lean_dec(v_a_86_);
lean_dec_ref(v_a_85_);
lean_dec_ref(v_x_84_);
lean_dec_ref(v_x_83_);
lean_dec_ref(v_x_82_);
lean_dec(v_x_81_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_formatter___redArg(lean_object* v_kind_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = l_Lean_PrettyPrinter_Formatter_visitAtom(v_kind_91_, v_a_92_, v_a_93_, v_a_94_, v_a_95_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_formatter___redArg___boxed(lean_object* v_kind_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_formatter___redArg(v_kind_98_, v_a_99_, v_a_100_, v_a_101_, v_a_102_);
lean_dec(v_a_102_);
lean_dec_ref(v_a_101_);
lean_dec(v_a_100_);
lean_dec_ref(v_a_99_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_formatter(lean_object* v_kind_105_, lean_object* v_x_106_, lean_object* v_x_107_, lean_object* v_x_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lean_PrettyPrinter_Formatter_visitAtom(v_kind_105_, v_a_109_, v_a_110_, v_a_111_, v_a_112_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_formatter___boxed(lean_object* v_kind_115_, lean_object* v_x_116_, lean_object* v_x_117_, lean_object* v_x_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany_formatter(v_kind_115_, v_x_116_, v_x_117_, v_x_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_);
lean_dec(v_a_122_);
lean_dec_ref(v_a_121_);
lean_dec(v_a_120_);
lean_dec_ref(v_a_119_);
lean_dec_ref(v_x_118_);
lean_dec_ref(v_x_117_);
lean_dec_ref(v_x_116_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___redArg(lean_object* v_inst_125_, lean_object* v_inst_126_, lean_object* v_x_127_){
_start:
{
lean_object* v_toApplicative_128_; 
v_toApplicative_128_ = lean_ctor_get(v_inst_125_, 0);
lean_inc_ref(v_toApplicative_128_);
lean_dec_ref(v_inst_125_);
if (lean_obj_tag(v_x_127_) == 1)
{
lean_object* v_toPure_129_; lean_object* v_toMonadExceptOf_130_; lean_object* v_args_131_; lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; 
v_toPure_129_ = lean_ctor_get(v_toApplicative_128_, 1);
lean_inc(v_toPure_129_);
lean_dec_ref(v_toApplicative_128_);
v_toMonadExceptOf_130_ = lean_ctor_get(v_inst_126_, 0);
lean_inc_ref(v_toMonadExceptOf_130_);
lean_dec_ref(v_inst_126_);
v_args_131_ = lean_ctor_get(v_x_127_, 2);
v___x_132_ = lean_array_get_size(v_args_131_);
v___x_133_ = lean_unsigned_to_nat(1u);
v___x_134_ = lean_nat_dec_eq(v___x_132_, v___x_133_);
if (v___x_134_ == 0)
{
lean_object* v___x_135_; 
lean_dec(v_toPure_129_);
v___x_135_ = l_Lean_Elab_throwUnsupportedSyntax___redArg(v_toMonadExceptOf_130_);
return v___x_135_;
}
else
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = lean_unsigned_to_nat(0u);
v___x_137_ = lean_array_fget_borrowed(v_args_131_, v___x_136_);
if (lean_obj_tag(v___x_137_) == 2)
{
lean_object* v_val_138_; lean_object* v___x_139_; 
lean_dec_ref(v_toMonadExceptOf_130_);
v_val_138_ = lean_ctor_get(v___x_137_, 1);
lean_inc_ref(v_val_138_);
v___x_139_ = lean_apply_2(v_toPure_129_, lean_box(0), v_val_138_);
return v___x_139_;
}
else
{
lean_object* v___x_140_; 
lean_dec(v_toPure_129_);
v___x_140_ = l_Lean_Elab_throwUnsupportedSyntax___redArg(v_toMonadExceptOf_130_);
return v___x_140_;
}
}
}
else
{
lean_object* v_toMonadExceptOf_141_; lean_object* v___x_142_; 
lean_dec_ref(v_toApplicative_128_);
v_toMonadExceptOf_141_ = lean_ctor_get(v_inst_126_, 0);
lean_inc_ref(v_toMonadExceptOf_141_);
lean_dec_ref(v_inst_126_);
v___x_142_ = l_Lean_Elab_throwUnsupportedSyntax___redArg(v_toMonadExceptOf_141_);
return v___x_142_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___redArg___boxed(lean_object* v_inst_143_, lean_object* v_inst_144_, lean_object* v_x_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___redArg(v_inst_143_, v_inst_144_, v_x_145_);
lean_dec(v_x_145_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom(lean_object* v_m_147_, lean_object* v_k_148_, lean_object* v_inst_149_, lean_object* v_inst_150_, lean_object* v_x_151_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___redArg(v_inst_149_, v_inst_150_, v_x_151_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___boxed(lean_object* v_m_153_, lean_object* v_k_154_, lean_object* v_inst_155_, lean_object* v_inst_156_, lean_object* v_x_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom(v_m_153_, v_k_154_, v_inst_155_, v_inst_156_, v_x_157_);
lean_dec(v_x_157_);
lean_dec(v_k_154_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_subsyntaxNodeAtom(lean_object* v_s_159_, lean_object* v_b_160_, lean_object* v_e_161_){
_start:
{
if (lean_obj_tag(v_s_159_) == 1)
{
lean_object* v_args_162_; lean_object* v___x_163_; lean_object* v___x_164_; uint8_t v___x_165_; 
v_args_162_ = lean_ctor_get(v_s_159_, 2);
v___x_163_ = lean_array_get_size(v_args_162_);
v___x_164_ = lean_unsigned_to_nat(1u);
v___x_165_ = lean_nat_dec_eq(v___x_163_, v___x_164_);
if (v___x_165_ == 0)
{
lean_inc_ref(v_s_159_);
return v_s_159_;
}
else
{
lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_166_ = lean_unsigned_to_nat(0u);
v___x_167_ = lean_array_fget(v_args_162_, v___x_166_);
if (lean_obj_tag(v___x_167_) == 2)
{
lean_object* v_info_168_; 
v_info_168_ = lean_ctor_get(v___x_167_, 0);
lean_inc(v_info_168_);
if (lean_obj_tag(v_info_168_) == 0)
{
lean_object* v_val_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_181_; 
v_val_169_ = lean_ctor_get(v___x_167_, 1);
v_isSharedCheck_181_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_181_ == 0)
{
lean_object* v_unused_182_; 
v_unused_182_ = lean_ctor_get(v___x_167_, 0);
lean_dec(v_unused_182_);
v___x_171_ = v___x_167_;
v_isShared_172_ = v_isSharedCheck_181_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_val_169_);
lean_dec(v___x_167_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_181_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v_pos_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_179_; 
v_pos_173_ = lean_ctor_get(v_info_168_, 1);
lean_inc(v_pos_173_);
lean_dec_ref_known(v_info_168_, 4);
v___x_174_ = lean_nat_add(v_pos_173_, v_b_160_);
v___x_175_ = lean_nat_add(v_pos_173_, v_e_161_);
lean_dec(v_pos_173_);
v___x_176_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_176_, 0, v___x_174_);
lean_ctor_set(v___x_176_, 1, v___x_175_);
lean_ctor_set_uint8(v___x_176_, sizeof(void*)*2, v___x_165_);
v___x_177_ = lean_string_utf8_extract(v_val_169_, v_b_160_, v_e_161_);
lean_dec_ref(v_val_169_);
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 1, v___x_177_);
lean_ctor_set(v___x_171_, 0, v___x_176_);
v___x_179_ = v___x_171_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v___x_176_);
lean_ctor_set(v_reuseFailAlloc_180_, 1, v___x_177_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
return v___x_179_;
}
}
}
else
{
lean_dec(v_info_168_);
lean_dec_ref_known(v___x_167_, 2);
lean_inc_ref(v_s_159_);
return v_s_159_;
}
}
else
{
lean_dec(v___x_167_);
lean_inc_ref(v_s_159_);
return v_s_159_;
}
}
}
else
{
lean_inc(v_s_159_);
return v_s_159_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_subsyntaxNodeAtom___boxed(lean_object* v_s_183_, lean_object* v_b_184_, lean_object* v_e_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_subsyntaxNodeAtom(v_s_183_, v_b_184_, v_e_185_);
lean_dec(v_e_185_);
lean_dec(v_b_184_);
lean_dec(v_s_183_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_decodeCharacterReferenceAt_skipAlphanum(lean_object* v_s_187_, lean_object* v_i_188_){
_start:
{
uint8_t v___x_192_; 
v___x_192_ = lean_string_utf8_at_end(v_s_187_, v_i_188_);
if (v___x_192_ == 0)
{
uint32_t v___x_193_; uint32_t v___x_204_; uint8_t v___x_205_; 
v___x_193_ = lean_string_utf8_get_fast(v_s_187_, v_i_188_);
v___x_204_ = 65;
v___x_205_ = lean_uint32_dec_le(v___x_204_, v___x_193_);
if (v___x_205_ == 0)
{
goto v___jp_199_;
}
else
{
uint32_t v___x_206_; uint8_t v___x_207_; 
v___x_206_ = 90;
v___x_207_ = lean_uint32_dec_le(v___x_193_, v___x_206_);
if (v___x_207_ == 0)
{
goto v___jp_199_;
}
else
{
goto v___jp_189_;
}
}
v___jp_194_:
{
uint32_t v___x_195_; uint8_t v___x_196_; 
v___x_195_ = 48;
v___x_196_ = lean_uint32_dec_le(v___x_195_, v___x_193_);
if (v___x_196_ == 0)
{
return v_i_188_;
}
else
{
uint32_t v___x_197_; uint8_t v___x_198_; 
v___x_197_ = 57;
v___x_198_ = lean_uint32_dec_le(v___x_193_, v___x_197_);
if (v___x_198_ == 0)
{
return v_i_188_;
}
else
{
goto v___jp_189_;
}
}
}
v___jp_199_:
{
uint32_t v___x_200_; uint8_t v___x_201_; 
v___x_200_ = 97;
v___x_201_ = lean_uint32_dec_le(v___x_200_, v___x_193_);
if (v___x_201_ == 0)
{
goto v___jp_194_;
}
else
{
uint32_t v___x_202_; uint8_t v___x_203_; 
v___x_202_ = 122;
v___x_203_ = lean_uint32_dec_le(v___x_193_, v___x_202_);
if (v___x_203_ == 0)
{
goto v___jp_194_;
}
else
{
goto v___jp_189_;
}
}
}
}
else
{
return v_i_188_;
}
v___jp_189_:
{
lean_object* v___x_190_; 
v___x_190_ = lean_string_utf8_next_fast(v_s_187_, v_i_188_);
lean_dec(v_i_188_);
v_i_188_ = v___x_190_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_decodeCharacterReferenceAt_skipAlphanum___boxed(lean_object* v_s_208_, lean_object* v_i_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_decodeCharacterReferenceAt_skipAlphanum(v_s_208_, v_i_209_);
lean_dec_ref(v_s_208_);
return v_res_210_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_211_; 
v___x_211_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_211_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__0);
v___x_213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_213_, 0, v___x_212_);
return v___x_213_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__2(void){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_214_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__1);
v___x_215_ = lean_unsigned_to_nat(0u);
v___x_216_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
lean_ctor_set(v___x_216_, 1, v___x_215_);
lean_ctor_set(v___x_216_, 2, v___x_215_);
lean_ctor_set(v___x_216_, 3, v___x_215_);
lean_ctor_set(v___x_216_, 4, v___x_214_);
lean_ctor_set(v___x_216_, 5, v___x_214_);
lean_ctor_set(v___x_216_, 6, v___x_214_);
lean_ctor_set(v___x_216_, 7, v___x_214_);
lean_ctor_set(v___x_216_, 8, v___x_214_);
lean_ctor_set(v___x_216_, 9, v___x_214_);
lean_ctor_set(v___x_216_, 10, v___x_214_);
return v___x_216_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_217_ = lean_unsigned_to_nat(32u);
v___x_218_ = lean_mk_empty_array_with_capacity(v___x_217_);
v___x_219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
return v___x_219_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__4(void){
_start:
{
size_t v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_220_ = ((size_t)5ULL);
v___x_221_ = lean_unsigned_to_nat(0u);
v___x_222_ = lean_unsigned_to_nat(32u);
v___x_223_ = lean_mk_empty_array_with_capacity(v___x_222_);
v___x_224_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__3);
v___x_225_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_225_, 0, v___x_224_);
lean_ctor_set(v___x_225_, 1, v___x_223_);
lean_ctor_set(v___x_225_, 2, v___x_221_);
lean_ctor_set(v___x_225_, 3, v___x_221_);
lean_ctor_set_usize(v___x_225_, 4, v___x_220_);
return v___x_225_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__5(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_226_ = lean_box(1);
v___x_227_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__4);
v___x_228_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__1);
v___x_229_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
lean_ctor_set(v___x_229_, 1, v___x_227_);
lean_ctor_set(v___x_229_, 2, v___x_226_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1(lean_object* v_msgData_230_, lean_object* v___y_231_, lean_object* v___y_232_){
_start:
{
lean_object* v___x_234_; lean_object* v_toCold_235_; lean_object* v_env_236_; lean_object* v_options_237_; uint8_t v___x_238_; lean_object* v_env_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_234_ = lean_st_ref_get(v___y_232_);
v_toCold_235_ = lean_ctor_get(v___y_231_, 0);
v_env_236_ = lean_ctor_get(v___x_234_, 0);
lean_inc_ref(v_env_236_);
lean_dec(v___x_234_);
v_options_237_ = lean_ctor_get(v_toCold_235_, 2);
v___x_238_ = 0;
v_env_239_ = l_Lean_Environment_setRecordingDeps(v_env_236_, v___x_238_);
v___x_240_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__2);
v___x_241_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___closed__5);
lean_inc_ref(v_options_237_);
v___x_242_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_242_, 0, v_env_239_);
lean_ctor_set(v___x_242_, 1, v___x_240_);
lean_ctor_set(v___x_242_, 2, v___x_241_);
lean_ctor_set(v___x_242_, 3, v_options_237_);
v___x_243_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
lean_ctor_set(v___x_243_, 1, v_msgData_230_);
v___x_244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1(v_msgData_245_, v___y_246_, v___y_247_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0___redArg(lean_object* v_msg_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
lean_object* v_ref_254_; lean_object* v___x_255_; lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_264_; 
v_ref_254_ = lean_ctor_get(v___y_251_, 2);
v___x_255_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1(v_msg_250_, v___y_251_, v___y_252_);
v_a_256_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_264_ == 0)
{
v___x_258_ = v___x_255_;
v_isShared_259_ = v_isSharedCheck_264_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___x_255_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_264_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_260_; lean_object* v___x_262_; 
lean_inc(v_ref_254_);
v___x_260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_260_, 0, v_ref_254_);
lean_ctor_set(v___x_260_, 1, v_a_256_);
if (v_isShared_259_ == 0)
{
lean_ctor_set_tag(v___x_258_, 1);
lean_ctor_set(v___x_258_, 0, v___x_260_);
v___x_262_ = v___x_258_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v___x_260_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0___redArg___boxed(lean_object* v_msg_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0___redArg(v_msg_265_, v___y_266_, v___y_267_);
lean_dec(v___y_267_);
lean_dec_ref(v___y_266_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0___redArg(lean_object* v_ref_270_, lean_object* v_msg_271_, lean_object* v___y_272_, lean_object* v___y_273_){
_start:
{
lean_object* v_toCold_275_; lean_object* v_currRecDepth_276_; lean_object* v_ref_277_; uint16_t v_optionFlags_278_; uint8_t v_suppressElabErrors_279_; uint8_t v_checkDeprecated_280_; uint8_t v_isRecordingDeps_281_; lean_object* v_ref_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v_toCold_275_ = lean_ctor_get(v___y_272_, 0);
v_currRecDepth_276_ = lean_ctor_get(v___y_272_, 1);
v_ref_277_ = lean_ctor_get(v___y_272_, 2);
v_optionFlags_278_ = lean_ctor_get_uint16(v___y_272_, sizeof(void*)*3);
v_suppressElabErrors_279_ = lean_ctor_get_uint8(v___y_272_, sizeof(void*)*3 + 2);
v_checkDeprecated_280_ = lean_ctor_get_uint8(v___y_272_, sizeof(void*)*3 + 3);
v_isRecordingDeps_281_ = lean_ctor_get_uint8(v___y_272_, sizeof(void*)*3 + 4);
v_ref_282_ = l_Lean_replaceRef(v_ref_270_, v_ref_277_);
lean_inc(v_currRecDepth_276_);
lean_inc_ref(v_toCold_275_);
v___x_283_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_283_, 0, v_toCold_275_);
lean_ctor_set(v___x_283_, 1, v_currRecDepth_276_);
lean_ctor_set(v___x_283_, 2, v_ref_282_);
lean_ctor_set_uint16(v___x_283_, sizeof(void*)*3, v_optionFlags_278_);
lean_ctor_set_uint8(v___x_283_, sizeof(void*)*3 + 2, v_suppressElabErrors_279_);
lean_ctor_set_uint8(v___x_283_, sizeof(void*)*3 + 3, v_checkDeprecated_280_);
lean_ctor_set_uint8(v___x_283_, sizeof(void*)*3 + 4, v_isRecordingDeps_281_);
v___x_284_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0___redArg(v_msg_271_, v___x_283_, v___y_273_);
lean_dec_ref_known(v___x_283_, 3);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0___redArg___boxed(lean_object* v_ref_285_, lean_object* v_msg_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0___redArg(v_ref_285_, v_msg_286_, v___y_287_, v___y_288_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
lean_dec(v_ref_285_);
return v_res_290_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__1(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = ((lean_object*)(l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__0));
v___x_293_ = l_Lean_stringToMessageData(v___x_292_);
return v___x_293_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__3(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = ((lean_object*)(l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__2));
v___x_296_ = l_Lean_stringToMessageData(v___x_295_);
return v___x_296_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__5(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = ((lean_object*)(l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__4));
v___x_299_ = l_Lean_stringToMessageData(v___x_298_);
return v___x_299_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__9(void){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = ((lean_object*)(l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__8));
v___x_304_ = l_Lean_stringToMessageData(v___x_303_);
return v___x_304_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__16(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = ((lean_object*)(l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__15));
v___x_321_ = l_Lean_stringToMessageData(v___x_320_);
return v___x_321_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__17(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__2));
v___x_323_ = l_Lean_stringToMessageData(v___x_322_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt(lean_object* v_s_324_, lean_object* v_i_325_, lean_object* v_refAt_326_, lean_object* v_a_327_, lean_object* v_a_328_){
_start:
{
lean_object* v___y_331_; lean_object* v___y_332_; lean_object* v___y_333_; lean_object* v___y_334_; lean_object* v_j_347_; uint32_t v___x_348_; uint32_t v___x_349_; uint8_t v___x_350_; lean_object* v___y_352_; lean_object* v___y_353_; lean_object* v___y_354_; lean_object* v___y_370_; 
v_j_347_ = lean_string_utf8_next(v_s_324_, v_i_325_);
v___x_348_ = lean_string_utf8_get(v_s_324_, v_j_347_);
v___x_349_ = 35;
v___x_350_ = lean_uint32_dec_eq(v___x_348_, v___x_349_);
if (v___x_350_ == 0)
{
lean_inc(v_j_347_);
v___y_370_ = v_j_347_;
goto v___jp_369_;
}
else
{
lean_object* v___x_407_; 
v___x_407_ = lean_string_utf8_next(v_s_324_, v_j_347_);
v___y_370_ = v___x_407_;
goto v___jp_369_;
}
v___jp_330_:
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
lean_inc(v___y_333_);
lean_inc(v_i_325_);
v___x_335_ = lean_apply_2(v_refAt_326_, v_i_325_, v___y_333_);
v___x_336_ = lean_obj_once(&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__1, &l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__1_once, _init_l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__1);
lean_inc_ref(v___y_334_);
v___x_337_ = l_Lean_stringToMessageData(v___y_334_);
v___x_338_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_338_, 0, v___x_336_);
lean_ctor_set(v___x_338_, 1, v___x_337_);
v___x_339_ = lean_obj_once(&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__3, &l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__3_once, _init_l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__3);
v___x_340_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_340_, 0, v___x_338_);
lean_ctor_set(v___x_340_, 1, v___x_339_);
v___x_341_ = lean_string_utf8_extract(v_s_324_, v_i_325_, v___y_333_);
lean_dec(v___y_333_);
lean_dec(v_i_325_);
v___x_342_ = l_Lean_stringToMessageData(v___x_341_);
v___x_343_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_343_, 0, v___x_340_);
lean_ctor_set(v___x_343_, 1, v___x_342_);
v___x_344_ = lean_obj_once(&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__5, &l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__5_once, _init_l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__5);
v___x_345_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_345_, 0, v___x_343_);
lean_ctor_set(v___x_345_, 1, v___x_344_);
v___x_346_ = l_Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0___redArg(v___x_335_, v___x_345_, v___y_331_, v___y_332_);
lean_dec(v___x_335_);
return v___x_346_;
}
v___jp_351_:
{
lean_object* v_refEnd_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v_refEnd_355_ = lean_string_utf8_next(v_s_324_, v___y_352_);
v___x_356_ = lean_string_utf8_extract(v_s_324_, v_j_347_, v___y_352_);
lean_dec(v___y_352_);
lean_dec(v_j_347_);
v___x_357_ = l_Lean_Html_characterReference_x3f(v___x_356_);
if (lean_obj_tag(v___x_357_) == 0)
{
if (v___x_350_ == 0)
{
lean_object* v___x_358_; 
v___x_358_ = ((lean_object*)(l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__6));
v___y_331_ = v___y_353_;
v___y_332_ = v___y_354_;
v___y_333_ = v_refEnd_355_;
v___y_334_ = v___x_358_;
goto v___jp_330_;
}
else
{
lean_object* v___x_359_; 
v___x_359_ = ((lean_object*)(l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__7));
v___y_331_ = v___y_353_;
v___y_332_ = v___y_354_;
v___y_333_ = v_refEnd_355_;
v___y_334_ = v___x_359_;
goto v___jp_330_;
}
}
else
{
lean_object* v_val_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_368_; 
lean_dec_ref(v_refAt_326_);
lean_dec(v_i_325_);
v_val_360_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_368_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_368_ == 0)
{
v___x_362_ = v___x_357_;
v_isShared_363_ = v_isSharedCheck_368_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_val_360_);
lean_dec(v___x_357_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_368_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_364_; lean_object* v___x_366_; 
v___x_364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_364_, 0, v_val_360_);
lean_ctor_set(v___x_364_, 1, v_refEnd_355_);
if (v_isShared_363_ == 0)
{
lean_ctor_set_tag(v___x_362_, 0);
lean_ctor_set(v___x_362_, 0, v___x_364_);
v___x_366_ = v___x_362_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v___x_364_);
v___x_366_ = v_reuseFailAlloc_367_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
return v___x_366_;
}
}
}
}
v___jp_369_:
{
lean_object* v_bodyEnd_371_; uint32_t v___x_372_; uint32_t v___x_373_; uint8_t v___x_374_; 
v_bodyEnd_371_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_decodeCharacterReferenceAt_skipAlphanum(v_s_324_, v___y_370_);
v___x_372_ = lean_string_utf8_get(v_s_324_, v_bodyEnd_371_);
v___x_373_ = 59;
v___x_374_ = lean_uint32_dec_eq(v___x_372_, v___x_373_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_375_ = lean_obj_once(&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__9, &l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__9_once, _init_l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__9);
v___x_376_ = lean_box(0);
v___x_377_ = ((lean_object*)(l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__14));
lean_inc_ref(v_refAt_326_);
lean_inc(v_i_325_);
v___x_378_ = lean_apply_2(v_refAt_326_, v_i_325_, v_j_347_);
v___x_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_379_, 0, v___x_378_);
v___x_380_ = l_Lean_MessageData_hint(v___x_375_, v___x_377_, v___x_379_, v___x_376_, v___x_374_, v_a_327_, v_a_328_);
if (lean_obj_tag(v___x_380_) == 0)
{
lean_object* v_a_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v_a_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_398_; 
v_a_381_ = lean_ctor_get(v___x_380_, 0);
lean_inc(v_a_381_);
lean_dec_ref_known(v___x_380_, 1);
lean_inc(v_bodyEnd_371_);
lean_inc(v_i_325_);
v___x_382_ = lean_apply_2(v_refAt_326_, v_i_325_, v_bodyEnd_371_);
v___x_383_ = lean_obj_once(&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__16, &l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__16_once, _init_l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__16);
v___x_384_ = lean_string_utf8_extract(v_s_324_, v_i_325_, v_bodyEnd_371_);
lean_dec(v_bodyEnd_371_);
lean_dec(v_i_325_);
v___x_385_ = l_Lean_stringToMessageData(v___x_384_);
v___x_386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_383_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = lean_obj_once(&l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__17, &l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__17_once, _init_l_Lean_Html_Syntax_decodeCharacterReferenceAt___closed__17);
v___x_388_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_386_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
v___x_389_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_389_, 0, v___x_388_);
lean_ctor_set(v___x_389_, 1, v_a_381_);
v___x_390_ = l_Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0___redArg(v___x_382_, v___x_389_, v_a_327_, v_a_328_);
lean_dec(v___x_382_);
v_a_391_ = lean_ctor_get(v___x_390_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_398_ == 0)
{
v___x_393_ = v___x_390_;
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_a_391_);
lean_dec(v___x_390_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_396_; 
if (v_isShared_394_ == 0)
{
v___x_396_ = v___x_393_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_a_391_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
else
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_406_; 
lean_dec(v_bodyEnd_371_);
lean_dec_ref(v_refAt_326_);
lean_dec(v_i_325_);
v_a_399_ = lean_ctor_get(v___x_380_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_380_);
if (v_isSharedCheck_406_ == 0)
{
v___x_401_ = v___x_380_;
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_380_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_402_ == 0)
{
v___x_404_ = v___x_401_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_a_399_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
}
else
{
v___y_352_ = v_bodyEnd_371_;
v___y_353_ = v_a_327_;
v___y_354_ = v_a_328_;
goto v___jp_351_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_decodeCharacterReferenceAt___boxed(lean_object* v_s_408_, lean_object* v_i_409_, lean_object* v_refAt_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Lean_Html_Syntax_decodeCharacterReferenceAt(v_s_408_, v_i_409_, v_refAt_410_, v_a_411_, v_a_412_);
lean_dec(v_a_412_);
lean_dec_ref(v_a_411_);
lean_dec_ref(v_s_408_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0(lean_object* v_00_u03b1_415_, lean_object* v_ref_416_, lean_object* v_msg_417_, lean_object* v___y_418_, lean_object* v___y_419_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l_Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0___redArg(v_ref_416_, v_msg_417_, v___y_418_, v___y_419_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0___boxed(lean_object* v_00_u03b1_422_, lean_object* v_ref_423_, lean_object* v_msg_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0(v_00_u03b1_422_, v_ref_423_, v_msg_424_, v___y_425_, v___y_426_);
lean_dec(v___y_426_);
lean_dec_ref(v___y_425_);
lean_dec(v_ref_423_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0(lean_object* v_00_u03b1_429_, lean_object* v_msg_430_, lean_object* v___y_431_, lean_object* v___y_432_){
_start:
{
lean_object* v___x_434_; 
v___x_434_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0___redArg(v_msg_430_, v___y_431_, v___y_432_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0___boxed(lean_object* v_00_u03b1_435_, lean_object* v_msg_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0(v_00_u03b1_435_, v_msg_436_, v___y_437_, v___y_438_);
lean_dec(v___y_438_);
lean_dec_ref(v___y_437_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_decodeCharacterReferences_go___lam__0(lean_object* v_ref_441_, lean_object* v_s_442_, lean_object* v_e_443_){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_444_ = lean_unsigned_to_nat(1u);
v___x_445_ = lean_nat_add(v_s_442_, v___x_444_);
v___x_446_ = lean_nat_add(v_e_443_, v___x_444_);
v___x_447_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_subsyntaxNodeAtom(v_ref_441_, v___x_445_, v___x_446_);
lean_dec(v___x_446_);
lean_dec(v___x_445_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_decodeCharacterReferences_go___lam__0___boxed(lean_object* v_ref_448_, lean_object* v_s_449_, lean_object* v_e_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_decodeCharacterReferences_go___lam__0(v_ref_448_, v_s_449_, v_e_450_);
lean_dec(v_e_450_);
lean_dec(v_s_449_);
lean_dec(v_ref_448_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_decodeCharacterReferences_go(lean_object* v_ref_452_, lean_object* v_s_453_, lean_object* v_i_454_, lean_object* v_out_455_, lean_object* v_a_456_, lean_object* v_a_457_){
_start:
{
uint8_t v___x_459_; 
v___x_459_ = lean_string_utf8_at_end(v_s_453_, v_i_454_);
if (v___x_459_ == 0)
{
uint32_t v_c_460_; uint32_t v___x_461_; uint8_t v___x_462_; 
v_c_460_ = lean_string_utf8_get_fast(v_s_453_, v_i_454_);
v___x_461_ = 38;
v___x_462_ = lean_uint32_dec_eq(v_c_460_, v___x_461_);
if (v___x_462_ == 0)
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = lean_string_utf8_next_fast(v_s_453_, v_i_454_);
lean_dec(v_i_454_);
v___x_464_ = lean_string_push(v_out_455_, v_c_460_);
v_i_454_ = v___x_463_;
v_out_455_ = v___x_464_;
goto _start;
}
else
{
lean_object* v___f_466_; lean_object* v___x_467_; 
lean_inc(v_ref_452_);
v___f_466_ = lean_alloc_closure((void*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_decodeCharacterReferences_go___lam__0___boxed), 3, 1);
lean_closure_set(v___f_466_, 0, v_ref_452_);
v___x_467_ = l_Lean_Html_Syntax_decodeCharacterReferenceAt(v_s_453_, v_i_454_, v___f_466_, v_a_456_, v_a_457_);
if (lean_obj_tag(v___x_467_) == 0)
{
lean_object* v_a_468_; lean_object* v_fst_469_; lean_object* v_snd_470_; lean_object* v___x_471_; 
v_a_468_ = lean_ctor_get(v___x_467_, 0);
lean_inc(v_a_468_);
lean_dec_ref_known(v___x_467_, 1);
v_fst_469_ = lean_ctor_get(v_a_468_, 0);
lean_inc(v_fst_469_);
v_snd_470_ = lean_ctor_get(v_a_468_, 1);
lean_inc(v_snd_470_);
lean_dec(v_a_468_);
v___x_471_ = lean_string_append(v_out_455_, v_fst_469_);
lean_dec(v_fst_469_);
v_i_454_ = v_snd_470_;
v_out_455_ = v___x_471_;
goto _start;
}
else
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_480_; 
lean_dec_ref(v_out_455_);
lean_dec(v_ref_452_);
v_a_473_ = lean_ctor_get(v___x_467_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_467_);
if (v_isSharedCheck_480_ == 0)
{
v___x_475_ = v___x_467_;
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_467_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
}
}
else
{
lean_object* v___x_481_; 
lean_dec(v_i_454_);
lean_dec(v_ref_452_);
v___x_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_481_, 0, v_out_455_);
return v___x_481_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_decodeCharacterReferences_go___boxed(lean_object* v_ref_482_, lean_object* v_s_483_, lean_object* v_i_484_, lean_object* v_out_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_decodeCharacterReferences_go(v_ref_482_, v_s_483_, v_i_484_, v_out_485_, v_a_486_, v_a_487_);
lean_dec(v_a_487_);
lean_dec_ref(v_a_486_);
lean_dec_ref(v_s_483_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_decodeCharacterReferences(lean_object* v_ref_490_, lean_object* v_a_491_, lean_object* v_a_492_){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_494_ = l_Lean_TSyntax_getString(v_ref_490_);
v___x_495_ = lean_unsigned_to_nat(0u);
v___x_496_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__1));
v___x_497_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_decodeCharacterReferences_go(v_ref_490_, v___x_494_, v___x_495_, v___x_496_, v_a_491_, v_a_492_);
lean_dec_ref(v___x_494_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_decodeCharacterReferences___boxed(lean_object* v_ref_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_Lean_Html_Syntax_decodeCharacterReferences(v_ref_498_, v_a_499_, v_a_500_);
lean_dec(v_a_500_);
lean_dec_ref(v_a_499_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol___lam__0(lean_object* v_expected_503_, lean_object* v_sym_504_, lean_object* v_c_505_, lean_object* v_s_506_){
_start:
{
lean_object* v_toInputContext_507_; lean_object* v_pos_508_; lean_object* v_inputString_509_; lean_object* v_endPos_510_; lean_object* v___x_523_; lean_object* v_j_524_; uint8_t v___x_525_; 
v_toInputContext_507_ = lean_ctor_get(v_c_505_, 0);
v_pos_508_ = lean_ctor_get(v_s_506_, 2);
v_inputString_509_ = lean_ctor_get(v_toInputContext_507_, 0);
v_endPos_510_ = lean_ctor_get(v_toInputContext_507_, 3);
v___x_523_ = lean_string_utf8_byte_size(v_sym_504_);
v_j_524_ = lean_nat_add(v_pos_508_, v___x_523_);
v___x_525_ = lean_nat_dec_le(v_j_524_, v_endPos_510_);
if (v___x_525_ == 0)
{
lean_dec(v_j_524_);
goto v___jp_511_;
}
else
{
lean_object* v___x_526_; uint8_t v___x_527_; 
v___x_526_ = lean_string_utf8_extract(v_inputString_509_, v_pos_508_, v_j_524_);
v___x_527_ = lean_string_dec_eq(v___x_526_, v_sym_504_);
lean_dec_ref(v___x_526_);
if (v___x_527_ == 0)
{
lean_dec(v_j_524_);
goto v___jp_511_;
}
else
{
lean_object* v___x_528_; 
lean_dec(v_expected_503_);
v___x_528_ = l_Lean_Parser_ParserState_setPos(v_s_506_, v_j_524_);
return v___x_528_;
}
}
v___jp_511_:
{
uint8_t v___x_512_; 
v___x_512_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_507_, v_pos_508_);
if (v___x_512_ == 0)
{
uint8_t v___x_513_; lean_object* v___x_514_; uint32_t v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_513_ = 1;
v___x_514_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__0));
v___x_515_ = lean_string_utf8_get_fast(v_inputString_509_, v_pos_508_);
v___x_516_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__1));
v___x_517_ = lean_string_push(v___x_516_, v___x_515_);
v___x_518_ = lean_string_append(v___x_514_, v___x_517_);
lean_dec_ref(v___x_517_);
v___x_519_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__2));
v___x_520_ = lean_string_append(v___x_518_, v___x_519_);
v___x_521_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_506_, v___x_520_, v_expected_503_, v___x_513_);
return v___x_521_;
}
else
{
lean_object* v___x_522_; 
v___x_522_ = l_Lean_Parser_ParserState_mkEOIError(v_s_506_, v_expected_503_);
return v___x_522_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol___lam__0___boxed(lean_object* v_expected_529_, lean_object* v_sym_530_, lean_object* v_c_531_, lean_object* v_s_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_Lean_Html_Syntax_rawSymbol___lam__0(v_expected_529_, v_sym_530_, v_c_531_, v_s_532_);
lean_dec_ref(v_c_531_);
lean_dec_ref(v_sym_530_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol(lean_object* v_sym_534_, uint8_t v_trailingWs_535_, lean_object* v_expected_536_){
_start:
{
lean_object* v___f_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v___f_537_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_rawSymbol___lam__0___boxed), 4, 2);
lean_closure_set(v___f_537_, 0, v_expected_536_);
lean_closure_set(v___f_537_, 1, v_sym_534_);
v___x_538_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___closed__2));
v___x_539_ = lean_box(v_trailingWs_535_);
v___x_540_ = lean_alloc_closure((void*)(l_Lean_Parser_rawFn___boxed), 4, 2);
lean_closure_set(v___x_540_, 0, v___f_537_);
lean_closure_set(v___x_540_, 1, v___x_539_);
v___x_541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_541_, 0, v___x_538_);
lean_ctor_set(v___x_541_, 1, v___x_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol___boxed(lean_object* v_sym_542_, lean_object* v_trailingWs_543_, lean_object* v_expected_544_){
_start:
{
uint8_t v_trailingWs_boxed_545_; lean_object* v_res_546_; 
v_trailingWs_boxed_545_ = lean_unbox(v_trailingWs_543_);
v_res_546_ = l_Lean_Html_Syntax_rawSymbol(v_sym_542_, v_trailingWs_boxed_545_, v_expected_544_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol_parenthesizer___redArg(lean_object* v_sym_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___redArg(v_sym_547_, v_a_548_, v_a_549_, v_a_550_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol_parenthesizer___redArg___boxed(lean_object* v_sym_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lean_Html_Syntax_rawSymbol_parenthesizer___redArg(v_sym_553_, v_a_554_, v_a_555_, v_a_556_);
lean_dec(v_a_556_);
lean_dec_ref(v_a_555_);
lean_dec(v_a_554_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol_parenthesizer(lean_object* v_sym_559_, uint8_t v_x_560_, lean_object* v_x_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_){
_start:
{
lean_object* v___x_567_; 
v___x_567_ = l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___redArg(v_sym_559_, v_a_563_, v_a_564_, v_a_565_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol_parenthesizer___boxed(lean_object* v_sym_568_, lean_object* v_x_569_, lean_object* v_x_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_){
_start:
{
uint8_t v_x_17__boxed_576_; lean_object* v_res_577_; 
v_x_17__boxed_576_ = lean_unbox(v_x_569_);
v_res_577_ = l_Lean_Html_Syntax_rawSymbol_parenthesizer(v_sym_568_, v_x_17__boxed_576_, v_x_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_);
lean_dec(v_a_574_);
lean_dec_ref(v_a_573_);
lean_dec(v_a_572_);
lean_dec_ref(v_a_571_);
lean_dec(v_x_570_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol_formatter___redArg(lean_object* v_sym_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_){
_start:
{
lean_object* v___x_584_; 
v___x_584_ = l_Lean_PrettyPrinter_Formatter_resetLeadWord___redArg(v_a_580_);
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v___x_585_; 
lean_dec_ref_known(v___x_584_, 1);
v___x_585_ = l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter(v_sym_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_);
return v___x_585_;
}
else
{
lean_dec_ref(v_sym_578_);
return v___x_584_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol_formatter___redArg___boxed(lean_object* v_sym_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lean_Html_Syntax_rawSymbol_formatter___redArg(v_sym_586_, v_a_587_, v_a_588_, v_a_589_, v_a_590_);
lean_dec(v_a_590_);
lean_dec_ref(v_a_589_);
lean_dec(v_a_588_);
lean_dec_ref(v_a_587_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol_formatter(lean_object* v_sym_593_, uint8_t v_x_594_, lean_object* v_x_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = l_Lean_Html_Syntax_rawSymbol_formatter___redArg(v_sym_593_, v_a_596_, v_a_597_, v_a_598_, v_a_599_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_rawSymbol_formatter___boxed(lean_object* v_sym_602_, lean_object* v_x_603_, lean_object* v_x_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_){
_start:
{
uint8_t v_x_141__boxed_610_; lean_object* v_res_611_; 
v_x_141__boxed_610_ = lean_unbox(v_x_603_);
v_res_611_ = l_Lean_Html_Syntax_rawSymbol_formatter(v_sym_602_, v_x_141__boxed_610_, v_x_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_);
lean_dec(v_a_608_);
lean_dec_ref(v_a_607_);
lean_dec(v_a_606_);
lean_dec_ref(v_a_605_);
lean_dec(v_x_604_);
return v_res_611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_formatter(lean_object* v_kind_619_, lean_object* v_openSym_620_, uint8_t v_trailingWs_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_){
_start:
{
uint8_t v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_627_ = 1;
v___x_628_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__2));
v___x_629_ = lean_string_append(v___x_628_, v_openSym_620_);
v___x_630_ = lean_string_append(v___x_629_, v___x_628_);
v___x_631_ = lean_box(0);
v___x_632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_632_, 0, v___x_630_);
lean_ctor_set(v___x_632_, 1, v___x_631_);
v___x_633_ = lean_box(v___x_627_);
v___x_634_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_rawSymbol_formatter___boxed), 8, 3);
lean_closure_set(v___x_634_, 0, v_openSym_620_);
lean_closure_set(v___x_634_, 1, v___x_633_);
lean_closure_set(v___x_634_, 2, v___x_632_);
v___x_635_ = ((lean_object*)(l_Lean_Html_Syntax_interpWith_formatter___closed__0));
v___x_636_ = ((lean_object*)(l_Lean_Html_Syntax_interpWith_formatter___closed__1));
v___x_637_ = ((lean_object*)(l_Lean_Html_Syntax_interpWith_formatter___closed__3));
v___x_638_ = lean_box(v_trailingWs_621_);
v___x_639_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_rawSymbol_formatter___boxed), 8, 3);
lean_closure_set(v___x_639_, 0, v___x_636_);
lean_closure_set(v___x_639_, 1, v___x_638_);
lean_closure_set(v___x_639_, 2, v___x_637_);
v___x_640_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_640_, 0, v___x_635_);
lean_closure_set(v___x_640_, 1, v___x_639_);
v___x_641_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_641_, 0, v___x_634_);
lean_closure_set(v___x_641_, 1, v___x_640_);
v___x_642_ = l_Lean_PrettyPrinter_Formatter_node_formatter(v_kind_619_, v___x_641_, v_a_622_, v_a_623_, v_a_624_, v_a_625_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_formatter___boxed(lean_object* v_kind_643_, lean_object* v_openSym_644_, lean_object* v_trailingWs_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_){
_start:
{
uint8_t v_trailingWs_boxed_651_; lean_object* v_res_652_; 
v_trailingWs_boxed_651_ = lean_unbox(v_trailingWs_645_);
v_res_652_ = l_Lean_Html_Syntax_interpWith_formatter(v_kind_643_, v_openSym_644_, v_trailingWs_boxed_651_, v_a_646_, v_a_647_, v_a_648_, v_a_649_);
lean_dec(v_a_649_);
lean_dec_ref(v_a_648_);
lean_dec(v_a_647_);
lean_dec_ref(v_a_646_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___lam__0(lean_object* v_openSym_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_){
_start:
{
lean_object* v___x_659_; 
v___x_659_ = l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___redArg(v_openSym_653_, v___y_655_, v___y_656_, v___y_657_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___lam__0___boxed(lean_object* v_openSym_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___lam__0(v_openSym_660_, v___y_661_, v___y_662_, v___y_663_, v___y_664_);
lean_dec(v___y_664_);
lean_dec_ref(v___y_663_);
lean_dec(v___y_662_);
lean_dec_ref(v___y_661_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___lam__1(lean_object* v___x_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_){
_start:
{
lean_object* v___x_673_; 
v___x_673_ = l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___redArg(v___x_667_, v___y_669_, v___y_670_, v___y_671_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___lam__1___boxed(lean_object* v___x_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___lam__1(v___x_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_);
lean_dec(v___y_678_);
lean_dec_ref(v___y_677_);
lean_dec(v___y_676_);
lean_dec_ref(v___y_675_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer___redArg(lean_object* v_kind_688_, lean_object* v_openSym_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_){
_start:
{
lean_object* v___f_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___f_695_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_695_, 0, v_openSym_689_);
v___x_696_ = ((lean_object*)(l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___closed__2));
v___x_697_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_697_, 0, v___f_695_);
lean_closure_set(v___x_697_, 1, v___x_696_);
v___x_698_ = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(v_kind_688_, v___x_697_, v_a_690_, v_a_691_, v_a_692_, v_a_693_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer___redArg___boxed(lean_object* v_kind_699_, lean_object* v_openSym_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l_Lean_Html_Syntax_interpWith_parenthesizer___redArg(v_kind_699_, v_openSym_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_);
lean_dec(v_a_704_);
lean_dec_ref(v_a_703_);
lean_dec(v_a_702_);
lean_dec_ref(v_a_701_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer(lean_object* v_kind_707_, lean_object* v_openSym_708_, uint8_t v_trailingWs_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l_Lean_Html_Syntax_interpWith_parenthesizer___redArg(v_kind_707_, v_openSym_708_, v_a_710_, v_a_711_, v_a_712_, v_a_713_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith_parenthesizer___boxed(lean_object* v_kind_716_, lean_object* v_openSym_717_, lean_object* v_trailingWs_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_){
_start:
{
uint8_t v_trailingWs_boxed_724_; lean_object* v_res_725_; 
v_trailingWs_boxed_724_ = lean_unbox(v_trailingWs_718_);
v_res_725_ = l_Lean_Html_Syntax_interpWith_parenthesizer(v_kind_716_, v_openSym_717_, v_trailingWs_boxed_724_, v_a_719_, v_a_720_, v_a_721_, v_a_722_);
lean_dec(v_a_722_);
lean_dec_ref(v_a_721_);
lean_dec(v_a_720_);
lean_dec_ref(v_a_719_);
return v_res_725_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_interpWith___closed__0(void){
_start:
{
lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_726_ = lean_unsigned_to_nat(0u);
v___x_727_ = l_Lean_Parser_termParser(v___x_726_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith(lean_object* v_kind_728_, lean_object* v_openSym_729_, uint8_t v_trailingWs_730_){
_start:
{
uint8_t v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_731_ = 1;
v___x_732_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_satisfyCharFn___closed__2));
v___x_733_ = lean_string_append(v___x_732_, v_openSym_729_);
v___x_734_ = lean_string_append(v___x_733_, v___x_732_);
v___x_735_ = lean_box(0);
v___x_736_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_736_, 0, v___x_734_);
lean_ctor_set(v___x_736_, 1, v___x_735_);
v___x_737_ = l_Lean_Html_Syntax_rawSymbol(v_openSym_729_, v___x_731_, v___x_736_);
v___x_738_ = lean_obj_once(&l_Lean_Html_Syntax_interpWith___closed__0, &l_Lean_Html_Syntax_interpWith___closed__0_once, _init_l_Lean_Html_Syntax_interpWith___closed__0);
v___x_739_ = ((lean_object*)(l_Lean_Html_Syntax_interpWith_formatter___closed__1));
v___x_740_ = ((lean_object*)(l_Lean_Html_Syntax_interpWith_formatter___closed__3));
v___x_741_ = l_Lean_Html_Syntax_rawSymbol(v___x_739_, v_trailingWs_730_, v___x_740_);
v___x_742_ = l_Lean_Parser_andthen(v___x_738_, v___x_741_);
v___x_743_ = l_Lean_Parser_andthen(v___x_737_, v___x_742_);
v___x_744_ = l_Lean_Parser_node(v_kind_728_, v___x_743_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpWith___boxed(lean_object* v_kind_745_, lean_object* v_openSym_746_, lean_object* v_trailingWs_747_){
_start:
{
uint8_t v_trailingWs_boxed_748_; lean_object* v_res_749_; 
v_trailingWs_boxed_748_ = lean_unbox(v_trailingWs_747_);
v_res_749_ = l_Lean_Html_Syntax_interpWith(v_kind_745_, v_openSym_746_, v_trailingWs_boxed_748_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interp_formatter(uint8_t v_trailingWs_760_, lean_object* v_a_761_, lean_object* v_a_762_, lean_object* v_a_763_, lean_object* v_a_764_){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_766_ = ((lean_object*)(l_Lean_Html_Syntax_interp_formatter___closed__4));
v___x_767_ = ((lean_object*)(l_Lean_Html_Syntax_interp_formatter___closed__5));
v___x_768_ = l_Lean_Html_Syntax_interpWith_formatter(v___x_766_, v___x_767_, v_trailingWs_760_, v_a_761_, v_a_762_, v_a_763_, v_a_764_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interp_formatter___boxed(lean_object* v_trailingWs_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_){
_start:
{
uint8_t v_trailingWs_boxed_775_; lean_object* v_res_776_; 
v_trailingWs_boxed_775_ = lean_unbox(v_trailingWs_769_);
v_res_776_ = l_Lean_Html_Syntax_interp_formatter(v_trailingWs_boxed_775_, v_a_770_, v_a_771_, v_a_772_, v_a_773_);
lean_dec(v_a_773_);
lean_dec_ref(v_a_772_);
lean_dec(v_a_771_);
lean_dec_ref(v_a_770_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interp_parenthesizer___redArg(lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_){
_start:
{
lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_782_ = ((lean_object*)(l_Lean_Html_Syntax_interp_formatter___closed__4));
v___x_783_ = ((lean_object*)(l_Lean_Html_Syntax_interp_formatter___closed__5));
v___x_784_ = l_Lean_Html_Syntax_interpWith_parenthesizer___redArg(v___x_782_, v___x_783_, v_a_777_, v_a_778_, v_a_779_, v_a_780_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interp_parenthesizer___redArg___boxed(lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_Lean_Html_Syntax_interp_parenthesizer___redArg(v_a_785_, v_a_786_, v_a_787_, v_a_788_);
lean_dec(v_a_788_);
lean_dec_ref(v_a_787_);
lean_dec(v_a_786_);
lean_dec_ref(v_a_785_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interp_parenthesizer(uint8_t v_trailingWs_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_){
_start:
{
lean_object* v___x_797_; 
v___x_797_ = l_Lean_Html_Syntax_interp_parenthesizer___redArg(v_a_792_, v_a_793_, v_a_794_, v_a_795_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interp_parenthesizer___boxed(lean_object* v_trailingWs_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_, lean_object* v_a_802_, lean_object* v_a_803_){
_start:
{
uint8_t v_trailingWs_boxed_804_; lean_object* v_res_805_; 
v_trailingWs_boxed_804_ = lean_unbox(v_trailingWs_798_);
v_res_805_ = l_Lean_Html_Syntax_interp_parenthesizer(v_trailingWs_boxed_804_, v_a_799_, v_a_800_, v_a_801_, v_a_802_);
lean_dec(v_a_802_);
lean_dec_ref(v_a_801_);
lean_dec(v_a_800_);
lean_dec_ref(v_a_799_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interp(uint8_t v_trailingWs_806_){
_start:
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_807_ = ((lean_object*)(l_Lean_Html_Syntax_interp_formatter___closed__4));
v___x_808_ = ((lean_object*)(l_Lean_Html_Syntax_interp_formatter___closed__5));
v___x_809_ = l_Lean_Html_Syntax_interpWith(v___x_807_, v___x_808_, v_trailingWs_806_);
return v___x_809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interp___boxed(lean_object* v_trailingWs_810_){
_start:
{
uint8_t v_trailingWs_boxed_811_; lean_object* v_res_812_; 
v_trailingWs_boxed_811_ = lean_unbox(v_trailingWs_810_);
v_res_812_ = l_Lean_Html_Syntax_interp(v_trailingWs_boxed_811_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpMany_formatter(uint8_t v_trailingWs_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_826_ = ((lean_object*)(l_Lean_Html_Syntax_interpMany_formatter___closed__1));
v___x_827_ = ((lean_object*)(l_Lean_Html_Syntax_interpMany_formatter___closed__2));
v___x_828_ = l_Lean_Html_Syntax_interpWith_formatter(v___x_826_, v___x_827_, v_trailingWs_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpMany_formatter___boxed(lean_object* v_trailingWs_829_, lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_){
_start:
{
uint8_t v_trailingWs_boxed_835_; lean_object* v_res_836_; 
v_trailingWs_boxed_835_ = lean_unbox(v_trailingWs_829_);
v_res_836_ = l_Lean_Html_Syntax_interpMany_formatter(v_trailingWs_boxed_835_, v_a_830_, v_a_831_, v_a_832_, v_a_833_);
lean_dec(v_a_833_);
lean_dec_ref(v_a_832_);
lean_dec(v_a_831_);
lean_dec_ref(v_a_830_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpMany_parenthesizer___redArg(lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_842_ = ((lean_object*)(l_Lean_Html_Syntax_interpMany_formatter___closed__1));
v___x_843_ = ((lean_object*)(l_Lean_Html_Syntax_interpMany_formatter___closed__2));
v___x_844_ = l_Lean_Html_Syntax_interpWith_parenthesizer___redArg(v___x_842_, v___x_843_, v_a_837_, v_a_838_, v_a_839_, v_a_840_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpMany_parenthesizer___redArg___boxed(lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = l_Lean_Html_Syntax_interpMany_parenthesizer___redArg(v_a_845_, v_a_846_, v_a_847_, v_a_848_);
lean_dec(v_a_848_);
lean_dec_ref(v_a_847_);
lean_dec(v_a_846_);
lean_dec_ref(v_a_845_);
return v_res_850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpMany_parenthesizer(uint8_t v_trailingWs_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_){
_start:
{
lean_object* v___x_857_; 
v___x_857_ = l_Lean_Html_Syntax_interpMany_parenthesizer___redArg(v_a_852_, v_a_853_, v_a_854_, v_a_855_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpMany_parenthesizer___boxed(lean_object* v_trailingWs_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_){
_start:
{
uint8_t v_trailingWs_boxed_864_; lean_object* v_res_865_; 
v_trailingWs_boxed_864_ = lean_unbox(v_trailingWs_858_);
v_res_865_ = l_Lean_Html_Syntax_interpMany_parenthesizer(v_trailingWs_boxed_864_, v_a_859_, v_a_860_, v_a_861_, v_a_862_);
lean_dec(v_a_862_);
lean_dec_ref(v_a_861_);
lean_dec(v_a_860_);
lean_dec_ref(v_a_859_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpMany(uint8_t v_trailingWs_866_){
_start:
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_867_ = ((lean_object*)(l_Lean_Html_Syntax_interpMany_formatter___closed__1));
v___x_868_ = ((lean_object*)(l_Lean_Html_Syntax_interpMany_formatter___closed__2));
v___x_869_ = l_Lean_Html_Syntax_interpWith(v___x_867_, v___x_868_, v_trailingWs_866_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpMany___boxed(lean_object* v_trailingWs_870_){
_start:
{
uint8_t v_trailingWs_boxed_871_; lean_object* v_res_872_; 
v_trailingWs_boxed_871_ = lean_unbox(v_trailingWs_870_);
v_res_872_ = l_Lean_Html_Syntax_interpMany(v_trailingWs_boxed_871_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpKind(uint8_t v_isMany_873_){
_start:
{
if (v_isMany_873_ == 0)
{
lean_object* v___x_874_; 
v___x_874_ = ((lean_object*)(l_Lean_Html_Syntax_interp_formatter___closed__4));
return v___x_874_;
}
else
{
lean_object* v___x_875_; 
v___x_875_ = ((lean_object*)(l_Lean_Html_Syntax_interpMany_formatter___closed__1));
return v___x_875_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_interpKind___boxed(lean_object* v_isMany_876_){
_start:
{
uint8_t v_isMany_boxed_877_; lean_object* v_res_878_; 
v_isMany_boxed_877_ = lean_unbox(v_isMany_876_);
v_res_878_ = l_Lean_Html_Syntax_interpKind(v_isMany_boxed_877_);
return v_res_878_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Html_Syntax_instReprInterpView_repr_spec__0(lean_object* v_a_879_){
_start:
{
lean_object* v___x_880_; 
v___x_880_ = lean_nat_to_int(v_a_879_);
return v___x_880_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_894_ = lean_unsigned_to_nat(13u);
v___x_895_ = lean_nat_to_int(v___x_894_);
return v___x_895_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_902_ = lean_unsigned_to_nat(8u);
v___x_903_ = lean_nat_to_int(v___x_902_);
return v___x_903_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_907_ = lean_unsigned_to_nat(14u);
v___x_908_ = lean_nat_to_int(v___x_907_);
return v___x_908_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_910_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__0));
v___x_911_ = lean_string_length(v___x_910_);
return v___x_911_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = lean_obj_once(&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__17, &l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__17_once, _init_l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__17);
v___x_913_ = lean_nat_to_int(v___x_912_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___redArg(lean_object* v_x_918_){
_start:
{
lean_object* v_openBrace_919_; lean_object* v_term_920_; lean_object* v_closeBrace_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; uint8_t v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v_openBrace_919_ = lean_ctor_get(v_x_918_, 0);
lean_inc(v_openBrace_919_);
v_term_920_ = lean_ctor_get(v_x_918_, 1);
lean_inc(v_term_920_);
v_closeBrace_921_ = lean_ctor_get(v_x_918_, 2);
lean_inc(v_closeBrace_921_);
lean_dec_ref(v_x_918_);
v___x_922_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__5));
v___x_923_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__6));
v___x_924_ = lean_obj_once(&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__7, &l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__7_once, _init_l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__7);
v___x_925_ = lean_unsigned_to_nat(0u);
v___x_926_ = l_Lean_Syntax_instRepr_repr(v_openBrace_919_, v___x_925_);
v___x_927_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_927_, 0, v___x_924_);
lean_ctor_set(v___x_927_, 1, v___x_926_);
v___x_928_ = 0;
v___x_929_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_929_, 0, v___x_927_);
lean_ctor_set_uint8(v___x_929_, sizeof(void*)*1, v___x_928_);
v___x_930_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_930_, 0, v___x_923_);
lean_ctor_set(v___x_930_, 1, v___x_929_);
v___x_931_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__9));
v___x_932_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_932_, 0, v___x_930_);
lean_ctor_set(v___x_932_, 1, v___x_931_);
v___x_933_ = lean_box(1);
v___x_934_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_934_, 0, v___x_932_);
lean_ctor_set(v___x_934_, 1, v___x_933_);
v___x_935_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__11));
v___x_936_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_936_, 0, v___x_934_);
lean_ctor_set(v___x_936_, 1, v___x_935_);
v___x_937_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_937_, 0, v___x_936_);
lean_ctor_set(v___x_937_, 1, v___x_922_);
v___x_938_ = lean_obj_once(&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__12, &l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__12_once, _init_l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__12);
v___x_939_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_term_920_);
v___x_940_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_940_, 0, v___x_938_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
v___x_941_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_941_, 0, v___x_940_);
lean_ctor_set_uint8(v___x_941_, sizeof(void*)*1, v___x_928_);
v___x_942_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_937_);
lean_ctor_set(v___x_942_, 1, v___x_941_);
v___x_943_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_943_, 0, v___x_942_);
lean_ctor_set(v___x_943_, 1, v___x_931_);
v___x_944_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_944_, 0, v___x_943_);
lean_ctor_set(v___x_944_, 1, v___x_933_);
v___x_945_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__14));
v___x_946_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_946_, 0, v___x_944_);
lean_ctor_set(v___x_946_, 1, v___x_945_);
v___x_947_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_947_, 0, v___x_946_);
lean_ctor_set(v___x_947_, 1, v___x_922_);
v___x_948_ = lean_obj_once(&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__15, &l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__15_once, _init_l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__15);
v___x_949_ = l_Lean_Syntax_instRepr_repr(v_closeBrace_921_, v___x_925_);
v___x_950_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_950_, 0, v___x_948_);
lean_ctor_set(v___x_950_, 1, v___x_949_);
v___x_951_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_951_, 0, v___x_950_);
lean_ctor_set_uint8(v___x_951_, sizeof(void*)*1, v___x_928_);
v___x_952_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_952_, 0, v___x_947_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
v___x_953_ = lean_obj_once(&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__18, &l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__18_once, _init_l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__18);
v___x_954_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__19));
v___x_955_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_955_, 0, v___x_954_);
lean_ctor_set(v___x_955_, 1, v___x_952_);
v___x_956_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__20));
v___x_957_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_955_);
lean_ctor_set(v___x_957_, 1, v___x_956_);
v___x_958_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_958_, 0, v___x_953_);
lean_ctor_set(v___x_958_, 1, v___x_957_);
v___x_959_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_959_, 0, v___x_958_);
lean_ctor_set_uint8(v___x_959_, sizeof(void*)*1, v___x_928_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprInterpView_repr(uint8_t v_isMany_960_, lean_object* v_x_961_, lean_object* v_prec_962_){
_start:
{
lean_object* v___x_963_; 
v___x_963_ = l_Lean_Html_Syntax_instReprInterpView_repr___redArg(v_x_961_);
return v___x_963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprInterpView_repr___boxed(lean_object* v_isMany_964_, lean_object* v_x_965_, lean_object* v_prec_966_){
_start:
{
uint8_t v_isMany_413__boxed_967_; lean_object* v_res_968_; 
v_isMany_413__boxed_967_ = lean_unbox(v_isMany_964_);
v_res_968_ = l_Lean_Html_Syntax_instReprInterpView_repr(v_isMany_413__boxed_967_, v_x_965_, v_prec_966_);
lean_dec(v_prec_966_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprInterpView(uint8_t v_isMany_969_){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = lean_box(v_isMany_969_);
v___x_971_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_instReprInterpView_repr___boxed), 3, 1);
lean_closure_set(v___x_971_, 0, v___x_970_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprInterpView___boxed(lean_object* v_isMany_972_){
_start:
{
uint8_t v_isMany_5__boxed_973_; lean_object* v_res_974_; 
v_isMany_5__boxed_973_ = lean_unbox(v_isMany_972_);
v_res_974_ = l_Lean_Html_Syntax_instReprInterpView(v_isMany_5__boxed_973_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instInhabitedInterpView_default___redArg(){
_start:
{
lean_object* v___x_978_; 
v___x_978_ = ((lean_object*)(l_Lean_Html_Syntax_instInhabitedInterpView_default___redArg___closed__0));
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instInhabitedInterpView_default___redArg___boxed(lean_object* v___dummy_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l_Lean_Html_Syntax_instInhabitedInterpView_default___redArg();
return v_res_980_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_instInhabitedInterpView_default___closed__0(void){
_start:
{
lean_object* v___x_981_; 
v___x_981_ = l_Lean_Html_Syntax_instInhabitedInterpView_default___redArg();
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instInhabitedInterpView_default(uint8_t v_isMany_982_){
_start:
{
lean_object* v___x_983_; 
v___x_983_ = lean_obj_once(&l_Lean_Html_Syntax_instInhabitedInterpView_default___closed__0, &l_Lean_Html_Syntax_instInhabitedInterpView_default___closed__0_once, _init_l_Lean_Html_Syntax_instInhabitedInterpView_default___closed__0);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instInhabitedInterpView_default___boxed(lean_object* v_isMany_984_){
_start:
{
uint8_t v_isMany_boxed_985_; lean_object* v_res_986_; 
v_isMany_boxed_985_ = lean_unbox(v_isMany_984_);
v_res_986_ = l_Lean_Html_Syntax_instInhabitedInterpView_default(v_isMany_boxed_985_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instInhabitedInterpView___redArg(){
_start:
{
lean_object* v___x_988_; 
v___x_988_ = lean_obj_once(&l_Lean_Html_Syntax_instInhabitedInterpView_default___closed__0, &l_Lean_Html_Syntax_instInhabitedInterpView_default___closed__0_once, _init_l_Lean_Html_Syntax_instInhabitedInterpView_default___closed__0);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instInhabitedInterpView___redArg___boxed(lean_object* v___dummy_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_Lean_Html_Syntax_instInhabitedInterpView___redArg();
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instInhabitedInterpView(uint8_t v_a_991_){
_start:
{
lean_object* v___x_992_; 
v___x_992_ = lean_obj_once(&l_Lean_Html_Syntax_instInhabitedInterpView_default___closed__0, &l_Lean_Html_Syntax_instInhabitedInterpView_default___closed__0_once, _init_l_Lean_Html_Syntax_instInhabitedInterpView_default___closed__0);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instInhabitedInterpView___boxed(lean_object* v_a_993_){
_start:
{
uint8_t v_a_13__boxed_994_; lean_object* v_res_995_; 
v_a_13__boxed_994_ = lean_unbox(v_a_993_);
v_res_995_ = l_Lean_Html_Syntax_instInhabitedInterpView(v_a_13__boxed_994_);
return v_res_995_;
}
}
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_instBEqInterpView_beq___redArg(lean_object* v_x_996_, lean_object* v_x_997_){
_start:
{
lean_object* v_openBrace_998_; lean_object* v_term_999_; lean_object* v_closeBrace_1000_; lean_object* v_openBrace_1001_; lean_object* v_term_1002_; lean_object* v_closeBrace_1003_; uint8_t v___x_1004_; 
v_openBrace_998_ = lean_ctor_get(v_x_996_, 0);
v_term_999_ = lean_ctor_get(v_x_996_, 1);
v_closeBrace_1000_ = lean_ctor_get(v_x_996_, 2);
v_openBrace_1001_ = lean_ctor_get(v_x_997_, 0);
v_term_1002_ = lean_ctor_get(v_x_997_, 1);
v_closeBrace_1003_ = lean_ctor_get(v_x_997_, 2);
v___x_1004_ = l_Lean_Syntax_structEq(v_openBrace_998_, v_openBrace_1001_);
if (v___x_1004_ == 0)
{
return v___x_1004_;
}
else
{
uint8_t v___x_1005_; 
v___x_1005_ = l_Lean_Syntax_structEq(v_term_999_, v_term_1002_);
if (v___x_1005_ == 0)
{
return v___x_1005_;
}
else
{
uint8_t v___x_1006_; 
v___x_1006_ = l_Lean_Syntax_structEq(v_closeBrace_1000_, v_closeBrace_1003_);
return v___x_1006_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqInterpView_beq___redArg___boxed(lean_object* v_x_1007_, lean_object* v_x_1008_){
_start:
{
uint8_t v_res_1009_; lean_object* v_r_1010_; 
v_res_1009_ = l_Lean_Html_Syntax_instBEqInterpView_beq___redArg(v_x_1007_, v_x_1008_);
lean_dec_ref(v_x_1008_);
lean_dec_ref(v_x_1007_);
v_r_1010_ = lean_box(v_res_1009_);
return v_r_1010_;
}
}
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_instBEqInterpView_beq(uint8_t v_isMany_1011_, lean_object* v_x_1012_, lean_object* v_x_1013_){
_start:
{
uint8_t v___x_1014_; 
v___x_1014_ = l_Lean_Html_Syntax_instBEqInterpView_beq___redArg(v_x_1012_, v_x_1013_);
return v___x_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqInterpView_beq___boxed(lean_object* v_isMany_1015_, lean_object* v_x_1016_, lean_object* v_x_1017_){
_start:
{
uint8_t v_isMany_119__boxed_1018_; uint8_t v_res_1019_; lean_object* v_r_1020_; 
v_isMany_119__boxed_1018_ = lean_unbox(v_isMany_1015_);
v_res_1019_ = l_Lean_Html_Syntax_instBEqInterpView_beq(v_isMany_119__boxed_1018_, v_x_1016_, v_x_1017_);
lean_dec_ref(v_x_1017_);
lean_dec_ref(v_x_1016_);
v_r_1020_ = lean_box(v_res_1019_);
return v_r_1020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqInterpView(uint8_t v_isMany_1021_){
_start:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1022_ = lean_box(v_isMany_1021_);
v___x_1023_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_instBEqInterpView_beq___boxed), 3, 1);
lean_closure_set(v___x_1023_, 0, v___x_1022_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqInterpView___boxed(lean_object* v_isMany_1024_){
_start:
{
uint8_t v_isMany_5__boxed_1025_; lean_object* v_res_1026_; 
v_isMany_5__boxed_1025_ = lean_unbox(v_isMany_1024_);
v_res_1026_ = l_Lean_Html_Syntax_instBEqInterpView(v_isMany_5__boxed_1025_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Interp_view___redArg(uint8_t v_isMany_1027_, lean_object* v_inst_1028_, lean_object* v_inst_1029_, lean_object* v_stx_1030_){
_start:
{
lean_object* v_toApplicative_1031_; lean_object* v_toPure_1032_; lean_object* v_toMonadExceptOf_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1054_; 
v_toApplicative_1031_ = lean_ctor_get(v_inst_1028_, 0);
lean_inc_ref(v_toApplicative_1031_);
lean_dec_ref(v_inst_1028_);
v_toPure_1032_ = lean_ctor_get(v_toApplicative_1031_, 1);
lean_inc(v_toPure_1032_);
lean_dec_ref(v_toApplicative_1031_);
v_toMonadExceptOf_1033_ = lean_ctor_get(v_inst_1029_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v_inst_1029_);
if (v_isSharedCheck_1054_ == 0)
{
lean_object* v_unused_1055_; lean_object* v_unused_1056_; 
v_unused_1055_ = lean_ctor_get(v_inst_1029_, 2);
lean_dec(v_unused_1055_);
v_unused_1056_ = lean_ctor_get(v_inst_1029_, 1);
lean_dec(v_unused_1056_);
v___x_1035_ = v_inst_1029_;
v_isShared_1036_ = v_isSharedCheck_1054_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_toMonadExceptOf_1033_);
lean_dec(v_inst_1029_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1054_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1037_; lean_object* v___y_1039_; 
lean_inc(v_stx_1030_);
v___x_1037_ = l_Lean_Syntax_getKind(v_stx_1030_);
if (v_isMany_1027_ == 0)
{
lean_object* v___x_1052_; 
v___x_1052_ = ((lean_object*)(l_Lean_Html_Syntax_interp_formatter___closed__4));
v___y_1039_ = v___x_1052_;
goto v___jp_1038_;
}
else
{
lean_object* v___x_1053_; 
v___x_1053_ = ((lean_object*)(l_Lean_Html_Syntax_interpMany_formatter___closed__1));
v___y_1039_ = v___x_1053_;
goto v___jp_1038_;
}
v___jp_1038_:
{
uint8_t v___x_1040_; 
v___x_1040_ = lean_name_eq(v___x_1037_, v___y_1039_);
lean_dec(v___x_1037_);
if (v___x_1040_ == 0)
{
lean_object* v___x_1041_; 
lean_del_object(v___x_1035_);
lean_dec(v_toPure_1032_);
lean_dec(v_stx_1030_);
v___x_1041_ = l_Lean_Elab_throwUnsupportedSyntax___redArg(v_toMonadExceptOf_1033_);
return v___x_1041_;
}
else
{
lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1049_; 
lean_dec_ref(v_toMonadExceptOf_1033_);
v___x_1042_ = lean_unsigned_to_nat(0u);
v___x_1043_ = l_Lean_Syntax_getArg(v_stx_1030_, v___x_1042_);
v___x_1044_ = lean_unsigned_to_nat(1u);
v___x_1045_ = l_Lean_Syntax_getArg(v_stx_1030_, v___x_1044_);
v___x_1046_ = lean_unsigned_to_nat(2u);
v___x_1047_ = l_Lean_Syntax_getArg(v_stx_1030_, v___x_1046_);
lean_dec(v_stx_1030_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 2, v___x_1047_);
lean_ctor_set(v___x_1035_, 1, v___x_1045_);
lean_ctor_set(v___x_1035_, 0, v___x_1043_);
v___x_1049_ = v___x_1035_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v___x_1043_);
lean_ctor_set(v_reuseFailAlloc_1051_, 1, v___x_1045_);
lean_ctor_set(v_reuseFailAlloc_1051_, 2, v___x_1047_);
v___x_1049_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
lean_object* v___x_1050_; 
v___x_1050_ = lean_apply_2(v_toPure_1032_, lean_box(0), v___x_1049_);
return v___x_1050_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Interp_view___redArg___boxed(lean_object* v_isMany_1057_, lean_object* v_inst_1058_, lean_object* v_inst_1059_, lean_object* v_stx_1060_){
_start:
{
uint8_t v_isMany_boxed_1061_; lean_object* v_res_1062_; 
v_isMany_boxed_1061_ = lean_unbox(v_isMany_1057_);
v_res_1062_ = l_Lean_Html_Syntax_Interp_view___redArg(v_isMany_boxed_1061_, v_inst_1058_, v_inst_1059_, v_stx_1060_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Interp_view(lean_object* v_m_1063_, uint8_t v_isMany_1064_, lean_object* v_inst_1065_, lean_object* v_inst_1066_, lean_object* v_stx_1067_){
_start:
{
lean_object* v___x_1068_; 
v___x_1068_ = l_Lean_Html_Syntax_Interp_view___redArg(v_isMany_1064_, v_inst_1065_, v_inst_1066_, v_stx_1067_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Interp_view___boxed(lean_object* v_m_1069_, lean_object* v_isMany_1070_, lean_object* v_inst_1071_, lean_object* v_inst_1072_, lean_object* v_stx_1073_){
_start:
{
uint8_t v_isMany_boxed_1074_; lean_object* v_res_1075_; 
v_isMany_boxed_1074_ = lean_unbox(v_isMany_1070_);
v_res_1075_ = l_Lean_Html_Syntax_Interp_view(v_m_1069_, v_isMany_boxed_1074_, v_inst_1071_, v_inst_1072_, v_stx_1073_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_InterpView_of___redArg(uint8_t v_isMany_1076_, lean_object* v_inst_1077_, lean_object* v_inst_1078_, lean_object* v_stx_1079_){
_start:
{
lean_object* v___x_1080_; 
v___x_1080_ = l_Lean_Html_Syntax_Interp_view___redArg(v_isMany_1076_, v_inst_1077_, v_inst_1078_, v_stx_1079_);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_InterpView_of___redArg___boxed(lean_object* v_isMany_1081_, lean_object* v_inst_1082_, lean_object* v_inst_1083_, lean_object* v_stx_1084_){
_start:
{
uint8_t v_isMany_boxed_1085_; lean_object* v_res_1086_; 
v_isMany_boxed_1085_ = lean_unbox(v_isMany_1081_);
v_res_1086_ = l_Lean_Html_Syntax_InterpView_of___redArg(v_isMany_boxed_1085_, v_inst_1082_, v_inst_1083_, v_stx_1084_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_InterpView_of(lean_object* v_m_1087_, uint8_t v_isMany_1088_, lean_object* v_inst_1089_, lean_object* v_inst_1090_, lean_object* v_stx_1091_){
_start:
{
lean_object* v___x_1092_; 
v___x_1092_ = l_Lean_Html_Syntax_Interp_view___redArg(v_isMany_1088_, v_inst_1089_, v_inst_1090_, v_stx_1091_);
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_InterpView_of___boxed(lean_object* v_m_1093_, lean_object* v_isMany_1094_, lean_object* v_inst_1095_, lean_object* v_inst_1096_, lean_object* v_stx_1097_){
_start:
{
uint8_t v_isMany_boxed_1098_; lean_object* v_res_1099_; 
v_isMany_boxed_1098_ = lean_unbox(v_isMany_1094_);
v_res_1099_ = l_Lean_Html_Syntax_InterpView_of(v_m_1093_, v_isMany_boxed_1098_, v_inst_1095_, v_inst_1096_, v_stx_1097_);
return v_res_1099_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__0(void){
_start:
{
lean_object* v___x_1100_; lean_object* v___f_1101_; 
v___x_1100_ = lean_alloc_closure((void*)(l_instDecidableEqChar___boxed), 2, 0);
v___f_1101_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1101_, 0, v___x_1100_);
return v___f_1101_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_1102_; lean_object* v___x_1103_; 
v___x_1102_ = 60;
v___x_1103_ = lean_box_uint32(v___x_1102_);
return v___x_1103_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__1(void){
_start:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1104_ = lean_box(0);
v___x_1105_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__1___boxed__const__1;
v___x_1106_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1105_);
lean_ctor_set(v___x_1106_, 1, v___x_1104_);
return v___x_1106_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__2___boxed__const__1(void){
_start:
{
uint32_t v___x_1107_; lean_object* v___x_1108_; 
v___x_1107_ = 125;
v___x_1108_ = lean_box_uint32(v___x_1107_);
return v___x_1108_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__2(void){
_start:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1109_ = lean_obj_once(&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__1, &l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__1_once, _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__1);
v___x_1110_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__2___boxed__const__1;
v___x_1111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1110_);
lean_ctor_set(v___x_1111_, 1, v___x_1109_);
return v___x_1111_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__3___boxed__const__1(void){
_start:
{
uint32_t v___x_1112_; lean_object* v___x_1113_; 
v___x_1112_ = 123;
v___x_1113_ = lean_box_uint32(v___x_1112_);
return v___x_1113_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__3(void){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1114_ = lean_obj_once(&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__2, &l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__2_once, _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__2);
v___x_1115_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__3___boxed__const__1;
v___x_1116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1115_);
lean_ctor_set(v___x_1116_, 1, v___x_1114_);
return v___x_1116_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar(uint32_t v_c_1117_){
_start:
{
uint8_t v___x_1126_; 
v___x_1126_ = l_Lean_Html_isControl(v_c_1117_);
if (v___x_1126_ == 0)
{
goto v___jp_1118_;
}
else
{
uint8_t v___x_1127_; 
v___x_1127_ = l_Lean_Html_isAsciiWhitespace(v_c_1117_);
if (v___x_1127_ == 0)
{
return v___x_1127_;
}
else
{
goto v___jp_1118_;
}
}
v___jp_1118_:
{
uint8_t v___x_1119_; 
v___x_1119_ = l_Lean_Html_isNonCharacter(v_c_1117_);
if (v___x_1119_ == 0)
{
lean_object* v___f_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; uint8_t v___x_1123_; 
v___f_1120_ = lean_obj_once(&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__0, &l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__0_once, _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__0);
v___x_1121_ = lean_obj_once(&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__3, &l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__3_once, _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__3);
v___x_1122_ = lean_box_uint32(v_c_1117_);
v___x_1123_ = l_List_elem___redArg(v___f_1120_, v___x_1122_, v___x_1121_);
if (v___x_1123_ == 0)
{
uint8_t v___x_1124_; 
v___x_1124_ = 1;
return v___x_1124_;
}
else
{
return v___x_1119_;
}
}
else
{
uint8_t v___x_1125_; 
v___x_1125_ = 0;
return v___x_1125_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___boxed(lean_object* v_c_1128_){
_start:
{
uint32_t v_c_boxed_1129_; uint8_t v_res_1130_; lean_object* v_r_1131_; 
v_c_boxed_1129_ = lean_unbox_uint32(v_c_1128_);
lean_dec(v_c_1128_);
v_res_1130_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar(v_c_boxed_1129_);
v_r_1131_ = lean_box(v_res_1130_);
return v_r_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_text___lam__2(lean_object* v___x_1134_, lean_object* v_c_1135_, lean_object* v_s_1136_){
_start:
{
lean_object* v_pos_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v_s_1140_; uint8_t v___x_1141_; lean_object* v___x_1142_; 
v_pos_1137_ = lean_ctor_get(v_s_1136_, 2);
lean_inc(v_pos_1137_);
v___x_1138_ = ((lean_object*)(l_Lean_Html_Syntax_text___lam__2___closed__0));
v___x_1139_ = ((lean_object*)(l_Lean_Html_Syntax_text___lam__2___closed__1));
lean_inc_ref(v_c_1135_);
v_s_1140_ = l_Lean_Parser_takeWhile1Fn(v___x_1138_, v___x_1139_, v_c_1135_, v_s_1136_);
v___x_1141_ = 0;
v___x_1142_ = l_Lean_Parser_mkNodeToken(v___x_1134_, v_pos_1137_, v___x_1141_, v_c_1135_, v_s_1140_);
return v___x_1142_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_text___closed__3(void){
_start:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1151_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___closed__2));
v___x_1152_ = ((lean_object*)(l_Lean_Html_Syntax_text___closed__1));
v___x_1153_ = l_Lean_Parser_nodeInfo(v___x_1152_, v___x_1151_);
return v___x_1153_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_text___closed__4(void){
_start:
{
lean_object* v___f_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___f_1154_ = ((lean_object*)(l_Lean_Html_Syntax_text___closed__2));
v___x_1155_ = lean_obj_once(&l_Lean_Html_Syntax_text___closed__3, &l_Lean_Html_Syntax_text___closed__3_once, _init_l_Lean_Html_Syntax_text___closed__3);
v___x_1156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
lean_ctor_set(v___x_1156_, 1, v___f_1154_);
return v___x_1156_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_text(void){
_start:
{
lean_object* v___x_1157_; 
v___x_1157_ = lean_obj_once(&l_Lean_Html_Syntax_text___closed__4, &l_Lean_Html_Syntax_text___closed__4_once, _init_l_Lean_Html_Syntax_text___closed__4);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_text_parenthesizer___redArg(lean_object* v_a_1159_){
_start:
{
lean_object* v___x_1161_; 
v___x_1161_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_1159_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_text_parenthesizer___redArg___boxed(lean_object* v_a_1162_, lean_object* v_a_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l_Lean_Html_Syntax_text_parenthesizer___redArg(v_a_1162_);
lean_dec(v_a_1162_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_text_parenthesizer(lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_){
_start:
{
lean_object* v___x_1170_; 
v___x_1170_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_1166_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_text_parenthesizer___boxed(lean_object* v_a_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_){
_start:
{
lean_object* v_res_1176_; 
v_res_1176_ = l_Lean_Html_Syntax_text_parenthesizer(v_a_1171_, v_a_1172_, v_a_1173_, v_a_1174_);
lean_dec(v_a_1174_);
lean_dec_ref(v_a_1173_);
lean_dec(v_a_1172_);
lean_dec_ref(v_a_1171_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_text_formatter(lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_){
_start:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1182_ = ((lean_object*)(l_Lean_Html_Syntax_text___closed__1));
v___x_1183_ = l_Lean_PrettyPrinter_Formatter_visitAtom(v___x_1182_, v_a_1177_, v_a_1178_, v_a_1179_, v_a_1180_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_text_formatter___boxed(lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_){
_start:
{
lean_object* v_res_1189_; 
v_res_1189_ = l_Lean_Html_Syntax_text_formatter(v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_);
lean_dec(v_a_1187_);
lean_dec_ref(v_a_1186_);
lean_dec(v_a_1185_);
lean_dec_ref(v_a_1184_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_flushWs(lean_object* v_acc_1190_){
_start:
{
lean_object* v___y_1192_; lean_object* v_out_1195_; uint8_t v_pendingWs_1196_; uint8_t v_pendingNewline_1197_; 
v_out_1195_ = lean_ctor_get(v_acc_1190_, 0);
lean_inc_ref(v_out_1195_);
v_pendingWs_1196_ = lean_ctor_get_uint8(v_acc_1190_, sizeof(void*)*1);
v_pendingNewline_1197_ = lean_ctor_get_uint8(v_acc_1190_, sizeof(void*)*1 + 1);
lean_dec_ref(v_acc_1190_);
if (v_pendingWs_1196_ == 0)
{
v___y_1192_ = v_out_1195_;
goto v___jp_1191_;
}
else
{
lean_object* v___x_1201_; lean_object* v___x_1202_; uint8_t v___x_1203_; 
v___x_1201_ = lean_string_utf8_byte_size(v_out_1195_);
v___x_1202_ = lean_unsigned_to_nat(0u);
v___x_1203_ = lean_nat_dec_eq(v___x_1201_, v___x_1202_);
if (v___x_1203_ == 0)
{
goto v___jp_1198_;
}
else
{
if (v_pendingNewline_1197_ == 0)
{
goto v___jp_1198_;
}
else
{
v___y_1192_ = v_out_1195_;
goto v___jp_1191_;
}
}
}
v___jp_1191_:
{
uint8_t v___x_1193_; lean_object* v___x_1194_; 
v___x_1193_ = 0;
v___x_1194_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_1194_, 0, v___y_1192_);
lean_ctor_set_uint8(v___x_1194_, sizeof(void*)*1, v___x_1193_);
lean_ctor_set_uint8(v___x_1194_, sizeof(void*)*1 + 1, v___x_1193_);
return v___x_1194_;
}
v___jp_1198_:
{
uint32_t v___x_1199_; lean_object* v___x_1200_; 
v___x_1199_ = 32;
v___x_1200_ = lean_string_push(v_out_1195_, v___x_1199_);
v___y_1192_ = v___x_1200_;
goto v___jp_1191_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_finish(lean_object* v_acc_1204_){
_start:
{
uint8_t v_pendingNewline_1205_; 
v_pendingNewline_1205_ = lean_ctor_get_uint8(v_acc_1204_, sizeof(void*)*1 + 1);
if (v_pendingNewline_1205_ == 0)
{
lean_object* v___x_1206_; lean_object* v_out_1207_; 
v___x_1206_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_flushWs(v_acc_1204_);
v_out_1207_ = lean_ctor_get(v___x_1206_, 0);
lean_inc_ref(v_out_1207_);
lean_dec_ref(v___x_1206_);
return v_out_1207_;
}
else
{
lean_object* v_out_1208_; 
v_out_1208_ = lean_ctor_get(v_acc_1204_, 0);
lean_inc_ref(v_out_1208_);
lean_dec_ref(v_acc_1204_);
return v_out_1208_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_go___lam__0(lean_object* v_t_1209_, lean_object* v_s_1210_, lean_object* v_e_1211_){
_start:
{
lean_object* v___x_1212_; 
v___x_1212_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_subsyntaxNodeAtom(v_t_1209_, v_s_1210_, v_e_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_go___lam__0___boxed(lean_object* v_t_1213_, lean_object* v_s_1214_, lean_object* v_e_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_go___lam__0(v_t_1213_, v_s_1214_, v_e_1215_);
lean_dec(v_e_1215_);
lean_dec(v_s_1214_);
lean_dec(v_t_1213_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_go(lean_object* v_t_1217_, lean_object* v_s_1218_, lean_object* v_i_1219_, lean_object* v_acc_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_){
_start:
{
uint8_t v___x_1224_; 
v___x_1224_ = lean_string_utf8_at_end(v_s_1218_, v_i_1219_);
if (v___x_1224_ == 0)
{
uint32_t v_c_1225_; lean_object* v_j_1226_; uint32_t v___x_1238_; uint8_t v___x_1239_; 
v_c_1225_ = lean_string_utf8_get(v_s_1218_, v_i_1219_);
v_j_1226_ = lean_string_utf8_next(v_s_1218_, v_i_1219_);
v___x_1238_ = 10;
v___x_1239_ = lean_uint32_dec_eq(v_c_1225_, v___x_1238_);
if (v___x_1239_ == 0)
{
uint32_t v___x_1240_; uint8_t v___x_1241_; 
v___x_1240_ = 13;
v___x_1241_ = lean_uint32_dec_eq(v_c_1225_, v___x_1240_);
if (v___x_1241_ == 0)
{
uint8_t v___x_1242_; 
v___x_1242_ = l_Lean_Html_isAsciiWhitespace(v_c_1225_);
if (v___x_1242_ == 0)
{
lean_object* v_acc_1243_; uint32_t v___x_1244_; uint8_t v___x_1245_; 
v_acc_1243_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_flushWs(v_acc_1220_);
v___x_1244_ = 38;
v___x_1245_ = lean_uint32_dec_eq(v_c_1225_, v___x_1244_);
if (v___x_1245_ == 0)
{
lean_object* v_out_1246_; uint8_t v_pendingWs_1247_; uint8_t v_pendingNewline_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1257_; 
lean_dec(v_i_1219_);
v_out_1246_ = lean_ctor_get(v_acc_1243_, 0);
v_pendingWs_1247_ = lean_ctor_get_uint8(v_acc_1243_, sizeof(void*)*1);
v_pendingNewline_1248_ = lean_ctor_get_uint8(v_acc_1243_, sizeof(void*)*1 + 1);
v_isSharedCheck_1257_ = !lean_is_exclusive(v_acc_1243_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1250_ = v_acc_1243_;
v_isShared_1251_ = v_isSharedCheck_1257_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_out_1246_);
lean_dec(v_acc_1243_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1257_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v___x_1252_; lean_object* v___x_1254_; 
v___x_1252_ = lean_string_push(v_out_1246_, v_c_1225_);
if (v_isShared_1251_ == 0)
{
lean_ctor_set(v___x_1250_, 0, v___x_1252_);
v___x_1254_ = v___x_1250_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v___x_1252_);
lean_ctor_set_uint8(v_reuseFailAlloc_1256_, sizeof(void*)*1, v_pendingWs_1247_);
lean_ctor_set_uint8(v_reuseFailAlloc_1256_, sizeof(void*)*1 + 1, v_pendingNewline_1248_);
v___x_1254_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
v_i_1219_ = v_j_1226_;
v_acc_1220_ = v___x_1254_;
goto _start;
}
}
}
else
{
lean_object* v___f_1258_; lean_object* v___x_1259_; 
lean_dec(v_j_1226_);
lean_inc(v_t_1217_);
v___f_1258_ = lean_alloc_closure((void*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_go___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1258_, 0, v_t_1217_);
v___x_1259_ = l_Lean_Html_Syntax_decodeCharacterReferenceAt(v_s_1218_, v_i_1219_, v___f_1258_, v_a_1221_, v_a_1222_);
if (lean_obj_tag(v___x_1259_) == 0)
{
lean_object* v_a_1260_; lean_object* v_fst_1261_; lean_object* v_snd_1262_; lean_object* v_out_1263_; uint8_t v_pendingWs_1264_; uint8_t v_pendingNewline_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1274_; 
v_a_1260_ = lean_ctor_get(v___x_1259_, 0);
lean_inc(v_a_1260_);
lean_dec_ref_known(v___x_1259_, 1);
v_fst_1261_ = lean_ctor_get(v_a_1260_, 0);
lean_inc(v_fst_1261_);
v_snd_1262_ = lean_ctor_get(v_a_1260_, 1);
lean_inc(v_snd_1262_);
lean_dec(v_a_1260_);
v_out_1263_ = lean_ctor_get(v_acc_1243_, 0);
v_pendingWs_1264_ = lean_ctor_get_uint8(v_acc_1243_, sizeof(void*)*1);
v_pendingNewline_1265_ = lean_ctor_get_uint8(v_acc_1243_, sizeof(void*)*1 + 1);
v_isSharedCheck_1274_ = !lean_is_exclusive(v_acc_1243_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1267_ = v_acc_1243_;
v_isShared_1268_ = v_isSharedCheck_1274_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_out_1263_);
lean_dec(v_acc_1243_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1274_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v___x_1269_; lean_object* v___x_1271_; 
v___x_1269_ = lean_string_append(v_out_1263_, v_fst_1261_);
lean_dec(v_fst_1261_);
if (v_isShared_1268_ == 0)
{
lean_ctor_set(v___x_1267_, 0, v___x_1269_);
v___x_1271_ = v___x_1267_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v___x_1269_);
lean_ctor_set_uint8(v_reuseFailAlloc_1273_, sizeof(void*)*1, v_pendingWs_1264_);
lean_ctor_set_uint8(v_reuseFailAlloc_1273_, sizeof(void*)*1 + 1, v_pendingNewline_1265_);
v___x_1271_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
v_i_1219_ = v_snd_1262_;
v_acc_1220_ = v___x_1271_;
goto _start;
}
}
}
else
{
lean_object* v_a_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1282_; 
lean_dec_ref(v_acc_1243_);
lean_dec(v_t_1217_);
v_a_1275_ = lean_ctor_get(v___x_1259_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v___x_1259_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1277_ = v___x_1259_;
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_a_1275_);
lean_dec(v___x_1259_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1280_; 
if (v_isShared_1278_ == 0)
{
v___x_1280_ = v___x_1277_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v_a_1275_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
}
}
else
{
lean_object* v_out_1283_; uint8_t v_pendingNewline_1284_; lean_object* v___x_1286_; uint8_t v_isShared_1287_; uint8_t v_isSharedCheck_1292_; 
lean_dec(v_i_1219_);
v_out_1283_ = lean_ctor_get(v_acc_1220_, 0);
v_pendingNewline_1284_ = lean_ctor_get_uint8(v_acc_1220_, sizeof(void*)*1 + 1);
v_isSharedCheck_1292_ = !lean_is_exclusive(v_acc_1220_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1286_ = v_acc_1220_;
v_isShared_1287_ = v_isSharedCheck_1292_;
goto v_resetjp_1285_;
}
else
{
lean_inc(v_out_1283_);
lean_dec(v_acc_1220_);
v___x_1286_ = lean_box(0);
v_isShared_1287_ = v_isSharedCheck_1292_;
goto v_resetjp_1285_;
}
v_resetjp_1285_:
{
lean_object* v___x_1289_; 
if (v_isShared_1287_ == 0)
{
v___x_1289_ = v___x_1286_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v_out_1283_);
lean_ctor_set_uint8(v_reuseFailAlloc_1291_, sizeof(void*)*1 + 1, v_pendingNewline_1284_);
v___x_1289_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
lean_ctor_set_uint8(v___x_1289_, sizeof(void*)*1, v___x_1242_);
v_i_1219_ = v_j_1226_;
v_acc_1220_ = v___x_1289_;
goto _start;
}
}
}
}
else
{
lean_dec(v_i_1219_);
goto v___jp_1227_;
}
}
else
{
lean_dec(v_i_1219_);
goto v___jp_1227_;
}
v___jp_1227_:
{
lean_object* v_out_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1237_; 
v_out_1228_ = lean_ctor_get(v_acc_1220_, 0);
v_isSharedCheck_1237_ = !lean_is_exclusive(v_acc_1220_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1230_ = v_acc_1220_;
v_isShared_1231_ = v_isSharedCheck_1237_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_out_1228_);
lean_dec(v_acc_1220_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1237_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
uint8_t v___x_1232_; lean_object* v___x_1234_; 
v___x_1232_ = 1;
if (v_isShared_1231_ == 0)
{
v___x_1234_ = v___x_1230_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_out_1228_);
v___x_1234_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
lean_ctor_set_uint8(v___x_1234_, sizeof(void*)*1, v___x_1232_);
lean_ctor_set_uint8(v___x_1234_, sizeof(void*)*1 + 1, v___x_1232_);
v_i_1219_ = v_j_1226_;
v_acc_1220_ = v___x_1234_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1293_; 
lean_dec(v_i_1219_);
lean_dec(v_t_1217_);
v___x_1293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1293_, 0, v_acc_1220_);
return v___x_1293_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_go___boxed(lean_object* v_t_1294_, lean_object* v_s_1295_, lean_object* v_i_1296_, lean_object* v_acc_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_go(v_t_1294_, v_s_1295_, v_i_1296_, v_acc_1297_, v_a_1298_, v_a_1299_);
lean_dec(v_a_1299_);
lean_dec_ref(v_a_1298_);
lean_dec_ref(v_s_1295_);
return v_res_1301_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1302_ = lean_box(0);
v___x_1303_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_1304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
lean_ctor_set(v___x_1304_, 1, v___x_1302_);
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1306_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0___redArg___closed__0);
v___x_1307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1306_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0___redArg___boxed(lean_object* v___y_1308_){
_start:
{
lean_object* v_res_1309_; 
v_res_1309_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0___redArg();
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0___redArg(lean_object* v_x_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
if (lean_obj_tag(v_x_1310_) == 1)
{
lean_object* v_args_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; uint8_t v___x_1317_; 
v_args_1314_ = lean_ctor_get(v_x_1310_, 2);
v___x_1315_ = lean_array_get_size(v_args_1314_);
v___x_1316_ = lean_unsigned_to_nat(1u);
v___x_1317_ = lean_nat_dec_eq(v___x_1315_, v___x_1316_);
if (v___x_1317_ == 0)
{
lean_object* v___x_1318_; 
v___x_1318_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0___redArg();
return v___x_1318_;
}
else
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1319_ = lean_unsigned_to_nat(0u);
v___x_1320_ = lean_array_fget_borrowed(v_args_1314_, v___x_1319_);
if (lean_obj_tag(v___x_1320_) == 2)
{
lean_object* v_val_1321_; lean_object* v___x_1322_; 
v_val_1321_ = lean_ctor_get(v___x_1320_, 1);
lean_inc_ref(v_val_1321_);
v___x_1322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1322_, 0, v_val_1321_);
return v___x_1322_;
}
else
{
lean_object* v___x_1323_; 
v___x_1323_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0___redArg();
return v___x_1323_;
}
}
}
else
{
lean_object* v___x_1324_; 
v___x_1324_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0___redArg();
return v___x_1324_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0___redArg___boxed(lean_object* v_x_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_){
_start:
{
lean_object* v_res_1329_; 
v_res_1329_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0___redArg(v_x_1325_, v___y_1326_, v___y_1327_);
lean_dec(v___y_1327_);
lean_dec_ref(v___y_1326_);
lean_dec(v_x_1325_);
return v_res_1329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push(lean_object* v_acc_1330_, lean_object* v_t_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_){
_start:
{
lean_object* v___x_1335_; 
v___x_1335_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0___redArg(v_t_1331_, v_a_1332_, v_a_1333_);
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v_a_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; 
v_a_1336_ = lean_ctor_get(v___x_1335_, 0);
lean_inc(v_a_1336_);
lean_dec_ref_known(v___x_1335_, 1);
v___x_1337_ = lean_unsigned_to_nat(0u);
v___x_1338_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_go(v_t_1331_, v_a_1336_, v___x_1337_, v_acc_1330_, v_a_1332_, v_a_1333_);
lean_dec(v_a_1336_);
return v___x_1338_;
}
else
{
lean_object* v_a_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1346_; 
lean_dec(v_t_1331_);
lean_dec_ref(v_acc_1330_);
v_a_1339_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1346_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1346_ == 0)
{
v___x_1341_ = v___x_1335_;
v_isShared_1342_ = v_isSharedCheck_1346_;
goto v_resetjp_1340_;
}
else
{
lean_inc(v_a_1339_);
lean_dec(v___x_1335_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1346_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v___x_1344_; 
if (v_isShared_1342_ == 0)
{
v___x_1344_ = v___x_1341_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v_a_1339_);
v___x_1344_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
return v___x_1344_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push___boxed(lean_object* v_acc_1347_, lean_object* v_t_1348_, lean_object* v_a_1349_, lean_object* v_a_1350_, lean_object* v_a_1351_){
_start:
{
lean_object* v_res_1352_; 
v_res_1352_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push(v_acc_1347_, v_t_1348_, v_a_1349_, v_a_1350_);
lean_dec(v_a_1350_);
lean_dec_ref(v_a_1349_);
return v_res_1352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0(lean_object* v_00_u03b1_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
lean_object* v___x_1357_; 
v___x_1357_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0___redArg();
return v___x_1357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0_spec__0(v_00_u03b1_1358_, v___y_1359_, v___y_1360_);
lean_dec(v___y_1360_);
lean_dec_ref(v___y_1359_);
return v_res_1362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0(lean_object* v_k_1363_, lean_object* v_x_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_){
_start:
{
lean_object* v___x_1368_; 
v___x_1368_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0___redArg(v_x_1364_, v___y_1365_, v___y_1366_);
return v___x_1368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0___boxed(lean_object* v_k_1369_, lean_object* v_x_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_){
_start:
{
lean_object* v_res_1374_; 
v_res_1374_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___at___00__private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push_spec__0(v_k_1369_, v_x_1370_, v___y_1371_, v___y_1372_);
lean_dec(v___y_1372_);
lean_dec_ref(v___y_1371_);
lean_dec(v_x_1370_);
lean_dec(v_k_1369_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn(lean_object* v_c_1381_, lean_object* v_s_1382_){
_start:
{
lean_object* v_pos_1383_; lean_object* v_toInputContext_1384_; uint8_t v___x_1385_; 
v_pos_1383_ = lean_ctor_get(v_s_1382_, 2);
v_toInputContext_1384_ = lean_ctor_get(v_c_1381_, 0);
v___x_1385_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1384_, v_pos_1383_);
if (v___x_1385_ == 0)
{
lean_object* v_inputString_1386_; uint8_t v___x_1395_; uint32_t v___x_1417_; uint32_t v___x_1418_; uint8_t v___x_1419_; 
v_inputString_1386_ = lean_ctor_get(v_toInputContext_1384_, 0);
v___x_1395_ = 1;
v___x_1417_ = lean_string_utf8_get_fast(v_inputString_1386_, v_pos_1383_);
v___x_1418_ = 45;
v___x_1419_ = lean_uint32_dec_eq(v___x_1417_, v___x_1418_);
if (v___x_1419_ == 0)
{
goto v___jp_1396_;
}
else
{
lean_object* v___x_1420_; lean_object* v___x_1421_; uint32_t v___x_1422_; uint8_t v___x_1423_; 
v___x_1420_ = lean_unsigned_to_nat(1u);
v___x_1421_ = lean_nat_add(v_pos_1383_, v___x_1420_);
v___x_1422_ = lean_string_utf8_get(v_inputString_1386_, v___x_1421_);
lean_dec(v___x_1421_);
v___x_1423_ = lean_uint32_dec_eq(v___x_1422_, v___x_1418_);
if (v___x_1423_ == 0)
{
goto v___jp_1396_;
}
else
{
lean_object* v___x_1424_; lean_object* v___x_1425_; uint32_t v___x_1426_; uint32_t v___x_1427_; uint8_t v___x_1428_; 
v___x_1424_ = lean_unsigned_to_nat(2u);
v___x_1425_ = lean_nat_add(v_pos_1383_, v___x_1424_);
v___x_1426_ = lean_string_utf8_get(v_inputString_1386_, v___x_1425_);
lean_dec(v___x_1425_);
v___x_1427_ = 62;
v___x_1428_ = lean_uint32_dec_eq(v___x_1426_, v___x_1427_);
if (v___x_1428_ == 0)
{
uint32_t v___x_1429_; uint8_t v___x_1430_; 
v___x_1429_ = 33;
v___x_1430_ = lean_uint32_dec_eq(v___x_1426_, v___x_1429_);
if (v___x_1430_ == 0)
{
goto v___jp_1391_;
}
else
{
lean_object* v___x_1431_; lean_object* v___x_1432_; uint32_t v___x_1433_; uint8_t v___x_1434_; 
v___x_1431_ = lean_unsigned_to_nat(3u);
v___x_1432_ = lean_nat_add(v_pos_1383_, v___x_1431_);
v___x_1433_ = lean_string_utf8_get(v_inputString_1386_, v___x_1432_);
lean_dec(v___x_1432_);
v___x_1434_ = lean_uint32_dec_eq(v___x_1433_, v___x_1427_);
if (v___x_1434_ == 0)
{
goto v___jp_1391_;
}
else
{
lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1435_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn___closed__1));
v___x_1436_ = lean_box(0);
v___x_1437_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1382_, v___x_1435_, v___x_1436_, v___x_1395_);
return v___x_1437_;
}
}
}
else
{
lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1438_ = lean_unsigned_to_nat(3u);
v___x_1439_ = lean_nat_add(v_pos_1383_, v___x_1438_);
v___x_1440_ = l_Lean_Parser_ParserState_setPos(v_s_1382_, v___x_1439_);
return v___x_1440_;
}
}
}
v___jp_1387_:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1388_ = lean_string_utf8_next_fast(v_inputString_1386_, v_pos_1383_);
v___x_1389_ = l_Lean_Parser_ParserState_setPos(v_s_1382_, v___x_1388_);
v_s_1382_ = v___x_1389_;
goto _start;
}
v___jp_1391_:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1392_ = lean_string_utf8_next_fast(v_inputString_1386_, v_pos_1383_);
v___x_1393_ = l_Lean_Parser_ParserState_setPos(v_s_1382_, v___x_1392_);
v_s_1382_ = v___x_1393_;
goto _start;
}
v___jp_1396_:
{
uint32_t v___x_1397_; uint32_t v___x_1398_; uint8_t v___x_1399_; 
v___x_1397_ = lean_string_utf8_get_fast(v_inputString_1386_, v_pos_1383_);
v___x_1398_ = 60;
v___x_1399_ = lean_uint32_dec_eq(v___x_1397_, v___x_1398_);
if (v___x_1399_ == 0)
{
goto v___jp_1387_;
}
else
{
lean_object* v___x_1400_; lean_object* v___x_1401_; uint32_t v___x_1402_; uint32_t v___x_1403_; uint8_t v___x_1404_; 
v___x_1400_ = lean_unsigned_to_nat(1u);
v___x_1401_ = lean_nat_add(v_pos_1383_, v___x_1400_);
v___x_1402_ = lean_string_utf8_get(v_inputString_1386_, v___x_1401_);
lean_dec(v___x_1401_);
v___x_1403_ = 33;
v___x_1404_ = lean_uint32_dec_eq(v___x_1402_, v___x_1403_);
if (v___x_1404_ == 0)
{
goto v___jp_1387_;
}
else
{
lean_object* v___x_1405_; lean_object* v___x_1406_; uint32_t v___x_1407_; uint32_t v___x_1408_; uint8_t v___x_1409_; 
v___x_1405_ = lean_unsigned_to_nat(2u);
v___x_1406_ = lean_nat_add(v_pos_1383_, v___x_1405_);
v___x_1407_ = lean_string_utf8_get(v_inputString_1386_, v___x_1406_);
lean_dec(v___x_1406_);
v___x_1408_ = 45;
v___x_1409_ = lean_uint32_dec_eq(v___x_1407_, v___x_1408_);
if (v___x_1409_ == 0)
{
goto v___jp_1387_;
}
else
{
lean_object* v___x_1410_; lean_object* v___x_1411_; uint32_t v___x_1412_; uint8_t v___x_1413_; 
v___x_1410_ = lean_unsigned_to_nat(3u);
v___x_1411_ = lean_nat_add(v_pos_1383_, v___x_1410_);
v___x_1412_ = lean_string_utf8_get(v_inputString_1386_, v___x_1411_);
lean_dec(v___x_1411_);
v___x_1413_ = lean_uint32_dec_eq(v___x_1412_, v___x_1408_);
if (v___x_1413_ == 0)
{
goto v___jp_1387_;
}
else
{
lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; 
v___x_1414_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn___closed__0));
v___x_1415_ = lean_box(0);
v___x_1416_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1382_, v___x_1414_, v___x_1415_, v___x_1395_);
return v___x_1416_;
}
}
}
}
}
}
else
{
lean_object* v___x_1441_; lean_object* v___x_1442_; 
v___x_1441_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn___closed__3));
v___x_1442_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1382_, v___x_1441_);
return v___x_1442_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn___boxed(lean_object* v_c_1443_, lean_object* v_s_1444_){
_start:
{
lean_object* v_res_1445_; 
v_res_1445_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn(v_c_1443_, v_s_1444_);
lean_dec_ref(v_c_1443_);
return v_res_1445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentFn(lean_object* v_c_1447_, lean_object* v_s_1448_){
_start:
{
lean_object* v_toInputContext_1452_; lean_object* v_pos_1453_; lean_object* v_inputString_1454_; uint32_t v___x_1455_; uint32_t v___x_1456_; uint8_t v___x_1457_; 
v_toInputContext_1452_ = lean_ctor_get(v_c_1447_, 0);
v_pos_1453_ = lean_ctor_get(v_s_1448_, 2);
v_inputString_1454_ = lean_ctor_get(v_toInputContext_1452_, 0);
v___x_1455_ = lean_string_utf8_get(v_inputString_1454_, v_pos_1453_);
v___x_1456_ = 60;
v___x_1457_ = lean_uint32_dec_eq(v___x_1455_, v___x_1456_);
if (v___x_1457_ == 0)
{
goto v___jp_1449_;
}
else
{
lean_object* v___x_1458_; lean_object* v___x_1459_; uint32_t v___x_1460_; uint32_t v___x_1461_; uint8_t v___x_1462_; 
v___x_1458_ = lean_unsigned_to_nat(1u);
v___x_1459_ = lean_nat_add(v_pos_1453_, v___x_1458_);
v___x_1460_ = lean_string_utf8_get(v_inputString_1454_, v___x_1459_);
lean_dec(v___x_1459_);
v___x_1461_ = 33;
v___x_1462_ = lean_uint32_dec_eq(v___x_1460_, v___x_1461_);
if (v___x_1462_ == 0)
{
goto v___jp_1449_;
}
else
{
lean_object* v___x_1463_; lean_object* v___x_1464_; uint32_t v___x_1465_; uint32_t v___x_1466_; uint8_t v___x_1467_; 
v___x_1463_ = lean_unsigned_to_nat(2u);
v___x_1464_ = lean_nat_add(v_pos_1453_, v___x_1463_);
v___x_1465_ = lean_string_utf8_get(v_inputString_1454_, v___x_1464_);
lean_dec(v___x_1464_);
v___x_1466_ = 45;
v___x_1467_ = lean_uint32_dec_eq(v___x_1465_, v___x_1466_);
if (v___x_1467_ == 0)
{
goto v___jp_1449_;
}
else
{
lean_object* v___x_1468_; lean_object* v___x_1469_; uint32_t v___x_1470_; uint8_t v___x_1471_; 
v___x_1468_ = lean_unsigned_to_nat(3u);
v___x_1469_ = lean_nat_add(v_pos_1453_, v___x_1468_);
v___x_1470_ = lean_string_utf8_get(v_inputString_1454_, v___x_1469_);
lean_dec(v___x_1469_);
v___x_1471_ = lean_uint32_dec_eq(v___x_1470_, v___x_1466_);
if (v___x_1471_ == 0)
{
goto v___jp_1449_;
}
else
{
lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1472_ = lean_unsigned_to_nat(4u);
v___x_1473_ = lean_nat_add(v_pos_1453_, v___x_1472_);
v___x_1474_ = l_Lean_Parser_ParserState_setPos(v_s_1448_, v___x_1473_);
v___x_1475_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentContentsFn(v_c_1447_, v___x_1474_);
return v___x_1475_;
}
}
}
}
v___jp_1449_:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1450_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentFn___closed__0));
v___x_1451_ = l_Lean_Parser_ParserState_mkError(v_s_1448_, v___x_1450_);
return v___x_1451_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentFn___boxed(lean_object* v_c_1476_, lean_object* v_s_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentFn(v_c_1476_, v_s_1477_);
lean_dec_ref(v_c_1476_);
return v_res_1478_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_comment___closed__2(void){
_start:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v___x_1485_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany___closed__2));
v___x_1486_ = ((lean_object*)(l_Lean_Html_Syntax_comment___closed__1));
v___x_1487_ = l_Lean_Parser_nodeInfo(v___x_1486_, v___x_1485_);
return v___x_1487_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_comment___closed__3(void){
_start:
{
uint8_t v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___x_1488_ = 0;
v___x_1489_ = lean_alloc_closure((void*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_commentFn___boxed), 2, 0);
v___x_1490_ = lean_box(v___x_1488_);
v___x_1491_ = lean_alloc_closure((void*)(l_Lean_Parser_rawFn___boxed), 4, 2);
lean_closure_set(v___x_1491_, 0, v___x_1489_);
lean_closure_set(v___x_1491_, 1, v___x_1490_);
return v___x_1491_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_comment___closed__4(void){
_start:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1492_ = lean_obj_once(&l_Lean_Html_Syntax_comment___closed__3, &l_Lean_Html_Syntax_comment___closed__3_once, _init_l_Lean_Html_Syntax_comment___closed__3);
v___x_1493_ = ((lean_object*)(l_Lean_Html_Syntax_comment___closed__1));
v___x_1494_ = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(v___x_1494_, 0, v___x_1493_);
lean_closure_set(v___x_1494_, 1, v___x_1492_);
return v___x_1494_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_comment___closed__5(void){
_start:
{
lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1495_ = lean_obj_once(&l_Lean_Html_Syntax_comment___closed__4, &l_Lean_Html_Syntax_comment___closed__4_once, _init_l_Lean_Html_Syntax_comment___closed__4);
v___x_1496_ = lean_obj_once(&l_Lean_Html_Syntax_comment___closed__2, &l_Lean_Html_Syntax_comment___closed__2_once, _init_l_Lean_Html_Syntax_comment___closed__2);
v___x_1497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1497_, 0, v___x_1496_);
lean_ctor_set(v___x_1497_, 1, v___x_1495_);
return v___x_1497_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_comment(void){
_start:
{
lean_object* v___x_1498_; 
v___x_1498_ = lean_obj_once(&l_Lean_Html_Syntax_comment___closed__5, &l_Lean_Html_Syntax_comment___closed__5_once, _init_l_Lean_Html_Syntax_comment___closed__5);
return v___x_1498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_comment_parenthesizer___redArg(lean_object* v_a_1500_){
_start:
{
lean_object* v___x_1502_; 
v___x_1502_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_1500_);
return v___x_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_comment_parenthesizer___redArg___boxed(lean_object* v_a_1503_, lean_object* v_a_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l_Lean_Html_Syntax_comment_parenthesizer___redArg(v_a_1503_);
lean_dec(v_a_1503_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_comment_parenthesizer(lean_object* v_a_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_){
_start:
{
lean_object* v___x_1511_; 
v___x_1511_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_1507_);
return v___x_1511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_comment_parenthesizer___boxed(lean_object* v_a_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_Lean_Html_Syntax_comment_parenthesizer(v_a_1512_, v_a_1513_, v_a_1514_, v_a_1515_);
lean_dec(v_a_1515_);
lean_dec_ref(v_a_1514_);
lean_dec(v_a_1513_);
lean_dec_ref(v_a_1512_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_comment_formatter(lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_){
_start:
{
lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1523_ = ((lean_object*)(l_Lean_Html_Syntax_comment___closed__1));
v___x_1524_ = l_Lean_PrettyPrinter_Formatter_visitAtom(v___x_1523_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_);
return v___x_1524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_comment_formatter___boxed(lean_object* v_a_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_){
_start:
{
lean_object* v_res_1530_; 
v_res_1530_ = l_Lean_Html_Syntax_comment_formatter(v_a_1525_, v_a_1526_, v_a_1527_, v_a_1528_);
lean_dec(v_a_1528_);
lean_dec_ref(v_a_1527_);
lean_dec(v_a_1526_);
lean_dec_ref(v_a_1525_);
return v_res_1530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Comment_view___redArg(lean_object* v_inst_1531_, lean_object* v_inst_1532_, lean_object* v_x_1533_){
_start:
{
lean_object* v_toApplicative_1534_; 
v_toApplicative_1534_ = lean_ctor_get(v_inst_1531_, 0);
lean_inc_ref(v_toApplicative_1534_);
lean_dec_ref(v_inst_1531_);
if (lean_obj_tag(v_x_1533_) == 1)
{
lean_object* v_toPure_1535_; lean_object* v_toMonadExceptOf_1536_; lean_object* v___x_1538_; uint8_t v_isShared_1539_; uint8_t v_isSharedCheck_1571_; 
v_toPure_1535_ = lean_ctor_get(v_toApplicative_1534_, 1);
lean_inc(v_toPure_1535_);
lean_dec_ref(v_toApplicative_1534_);
v_toMonadExceptOf_1536_ = lean_ctor_get(v_inst_1532_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v_inst_1532_);
if (v_isSharedCheck_1571_ == 0)
{
lean_object* v_unused_1572_; lean_object* v_unused_1573_; 
v_unused_1572_ = lean_ctor_get(v_inst_1532_, 2);
lean_dec(v_unused_1572_);
v_unused_1573_ = lean_ctor_get(v_inst_1532_, 1);
lean_dec(v_unused_1573_);
v___x_1538_ = v_inst_1532_;
v_isShared_1539_ = v_isSharedCheck_1571_;
goto v_resetjp_1537_;
}
else
{
lean_inc(v_toMonadExceptOf_1536_);
lean_dec(v_inst_1532_);
v___x_1538_ = lean_box(0);
v_isShared_1539_ = v_isSharedCheck_1571_;
goto v_resetjp_1537_;
}
v_resetjp_1537_:
{
lean_object* v_args_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1568_; 
v_args_1540_ = lean_ctor_get(v_x_1533_, 2);
v_isSharedCheck_1568_ = !lean_is_exclusive(v_x_1533_);
if (v_isSharedCheck_1568_ == 0)
{
lean_object* v_unused_1569_; lean_object* v_unused_1570_; 
v_unused_1569_ = lean_ctor_get(v_x_1533_, 1);
lean_dec(v_unused_1569_);
v_unused_1570_ = lean_ctor_get(v_x_1533_, 0);
lean_dec(v_unused_1570_);
v___x_1542_ = v_x_1533_;
v_isShared_1543_ = v_isSharedCheck_1568_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_args_1540_);
lean_dec(v_x_1533_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1568_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; uint8_t v___x_1546_; 
v___x_1544_ = lean_array_get_size(v_args_1540_);
v___x_1545_ = lean_unsigned_to_nat(1u);
v___x_1546_ = lean_nat_dec_eq(v___x_1544_, v___x_1545_);
if (v___x_1546_ == 0)
{
lean_object* v___x_1547_; 
lean_del_object(v___x_1542_);
lean_dec_ref(v_args_1540_);
lean_del_object(v___x_1538_);
lean_dec(v_toPure_1535_);
v___x_1547_ = l_Lean_Elab_throwUnsupportedSyntax___redArg(v_toMonadExceptOf_1536_);
return v___x_1547_;
}
else
{
lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1548_ = lean_unsigned_to_nat(0u);
v___x_1549_ = lean_array_fget(v_args_1540_, v___x_1548_);
lean_dec_ref(v_args_1540_);
if (lean_obj_tag(v___x_1549_) == 2)
{
lean_object* v_val_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1554_; 
lean_dec_ref(v_toMonadExceptOf_1536_);
v_val_1550_ = lean_ctor_get(v___x_1549_, 1);
lean_inc_ref_n(v_val_1550_, 2);
lean_dec_ref_known(v___x_1549_, 2);
v___x_1551_ = lean_unsigned_to_nat(4u);
v___x_1552_ = lean_string_utf8_byte_size(v_val_1550_);
if (v_isShared_1543_ == 0)
{
lean_ctor_set_tag(v___x_1542_, 0);
lean_ctor_set(v___x_1542_, 2, v___x_1552_);
lean_ctor_set(v___x_1542_, 1, v___x_1548_);
lean_ctor_set(v___x_1542_, 0, v_val_1550_);
v___x_1554_ = v___x_1542_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v_val_1550_);
lean_ctor_set(v_reuseFailAlloc_1566_, 1, v___x_1548_);
lean_ctor_set(v_reuseFailAlloc_1566_, 2, v___x_1552_);
v___x_1554_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
lean_object* v___x_1555_; lean_object* v___x_1557_; 
v___x_1555_ = l_String_Slice_Pos_nextn(v___x_1554_, v___x_1548_, v___x_1551_);
lean_dec_ref(v___x_1554_);
lean_inc(v___x_1555_);
lean_inc_ref(v_val_1550_);
if (v_isShared_1539_ == 0)
{
lean_ctor_set(v___x_1538_, 2, v___x_1552_);
lean_ctor_set(v___x_1538_, 1, v___x_1555_);
lean_ctor_set(v___x_1538_, 0, v_val_1550_);
v___x_1557_ = v___x_1538_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1565_; 
v_reuseFailAlloc_1565_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1565_, 0, v_val_1550_);
lean_ctor_set(v_reuseFailAlloc_1565_, 1, v___x_1555_);
lean_ctor_set(v_reuseFailAlloc_1565_, 2, v___x_1552_);
v___x_1557_ = v_reuseFailAlloc_1565_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1558_ = lean_unsigned_to_nat(3u);
v___x_1559_ = lean_nat_sub(v___x_1552_, v___x_1555_);
v___x_1560_ = l_String_Slice_Pos_prevn(v___x_1557_, v___x_1559_, v___x_1558_);
lean_dec_ref(v___x_1557_);
v___x_1561_ = lean_nat_add(v___x_1555_, v___x_1560_);
lean_dec(v___x_1560_);
v___x_1562_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1562_, 0, v_val_1550_);
lean_ctor_set(v___x_1562_, 1, v___x_1555_);
lean_ctor_set(v___x_1562_, 2, v___x_1561_);
v___x_1563_ = l_String_Slice_toString(v___x_1562_);
lean_dec_ref_known(v___x_1562_, 3);
v___x_1564_ = lean_apply_2(v_toPure_1535_, lean_box(0), v___x_1563_);
return v___x_1564_;
}
}
}
else
{
lean_object* v___x_1567_; 
lean_dec(v___x_1549_);
lean_del_object(v___x_1542_);
lean_del_object(v___x_1538_);
lean_dec(v_toPure_1535_);
v___x_1567_ = l_Lean_Elab_throwUnsupportedSyntax___redArg(v_toMonadExceptOf_1536_);
return v___x_1567_;
}
}
}
}
}
else
{
lean_object* v_toMonadExceptOf_1574_; lean_object* v___x_1575_; 
lean_dec_ref(v_toApplicative_1534_);
lean_dec(v_x_1533_);
v_toMonadExceptOf_1574_ = lean_ctor_get(v_inst_1532_, 0);
lean_inc_ref(v_toMonadExceptOf_1574_);
lean_dec_ref(v_inst_1532_);
v___x_1575_ = l_Lean_Elab_throwUnsupportedSyntax___redArg(v_toMonadExceptOf_1574_);
return v___x_1575_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Comment_view(lean_object* v_m_1576_, lean_object* v_inst_1577_, lean_object* v_inst_1578_, lean_object* v_x_1579_){
_start:
{
lean_object* v___x_1580_; 
v___x_1580_ = l_Lean_Html_Syntax_Comment_view___redArg(v_inst_1577_, v_inst_1578_, v_x_1579_);
return v___x_1580_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_1581_; lean_object* v___x_1582_; 
v___x_1581_ = 62;
v___x_1582_ = lean_box_uint32(v___x_1581_);
return v___x_1582_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__0(void){
_start:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1583_ = lean_box(0);
v___x_1584_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__0___boxed__const__1;
v___x_1585_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
lean_ctor_set(v___x_1585_, 1, v___x_1583_);
return v___x_1585_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_1586_; lean_object* v___x_1587_; 
v___x_1586_ = 47;
v___x_1587_ = lean_box_uint32(v___x_1586_);
return v___x_1587_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__1(void){
_start:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1588_ = lean_obj_once(&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__0, &l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__0_once, _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__0);
v___x_1589_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__1___boxed__const__1;
v___x_1590_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1589_);
lean_ctor_set(v___x_1590_, 1, v___x_1588_);
return v___x_1590_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar(uint32_t v_c_1591_){
_start:
{
uint8_t v___x_1592_; 
v___x_1592_ = l_Lean_Html_isAsciiWhitespace(v_c_1591_);
if (v___x_1592_ == 0)
{
lean_object* v___x_1593_; lean_object* v___x_1594_; uint8_t v___x_1595_; 
v___x_1593_ = lean_uint32_to_nat(v_c_1591_);
v___x_1594_ = lean_unsigned_to_nat(0u);
v___x_1595_ = lean_nat_dec_eq(v___x_1593_, v___x_1594_);
lean_dec(v___x_1593_);
if (v___x_1595_ == 0)
{
lean_object* v___f_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; uint8_t v___x_1599_; 
v___f_1596_ = lean_obj_once(&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__0, &l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__0_once, _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__0);
v___x_1597_ = lean_obj_once(&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__1, &l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__1_once, _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__1);
v___x_1598_ = lean_box_uint32(v_c_1591_);
v___x_1599_ = l_List_elem___redArg(v___f_1596_, v___x_1598_, v___x_1597_);
if (v___x_1599_ == 0)
{
uint8_t v___x_1600_; 
v___x_1600_ = 1;
return v___x_1600_;
}
else
{
return v___x_1595_;
}
}
else
{
return v___x_1592_;
}
}
else
{
uint8_t v___x_1601_; 
v___x_1601_ = 0;
return v___x_1601_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___boxed(lean_object* v_c_1602_){
_start:
{
uint32_t v_c_boxed_1603_; uint8_t v_res_1604_; lean_object* v_r_1605_; 
v_c_boxed_1603_ = lean_unbox_uint32(v_c_1602_);
lean_dec(v_c_1602_);
v_res_1604_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar(v_c_boxed_1603_);
v_r_1605_ = lean_box(v_res_1604_);
return v_r_1605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_tagName_formatter(lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_){
_start:
{
lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___x_1617_ = ((lean_object*)(l_Lean_Html_Syntax_tagName_formatter___closed__1));
v___x_1618_ = l_Lean_PrettyPrinter_Formatter_visitAtom(v___x_1617_, v_a_1612_, v_a_1613_, v_a_1614_, v_a_1615_);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_tagName_formatter___boxed(lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_, lean_object* v_a_1622_, lean_object* v_a_1623_){
_start:
{
lean_object* v_res_1624_; 
v_res_1624_ = l_Lean_Html_Syntax_tagName_formatter(v_a_1619_, v_a_1620_, v_a_1621_, v_a_1622_);
lean_dec(v_a_1622_);
lean_dec_ref(v_a_1621_);
lean_dec(v_a_1620_);
lean_dec_ref(v_a_1619_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_tagName_parenthesizer___redArg(lean_object* v_a_1625_){
_start:
{
lean_object* v___x_1627_; 
v___x_1627_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_1625_);
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_tagName_parenthesizer___redArg___boxed(lean_object* v_a_1628_, lean_object* v_a_1629_){
_start:
{
lean_object* v_res_1630_; 
v_res_1630_ = l_Lean_Html_Syntax_tagName_parenthesizer___redArg(v_a_1628_);
lean_dec(v_a_1628_);
return v_res_1630_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_tagName_parenthesizer(lean_object* v_a_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_){
_start:
{
lean_object* v___x_1636_; 
v___x_1636_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_1632_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_tagName_parenthesizer___boxed(lean_object* v_a_1637_, lean_object* v_a_1638_, lean_object* v_a_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l_Lean_Html_Syntax_tagName_parenthesizer(v_a_1637_, v_a_1638_, v_a_1639_, v_a_1640_);
lean_dec(v_a_1640_);
lean_dec_ref(v_a_1639_);
lean_dec(v_a_1638_);
lean_dec_ref(v_a_1637_);
return v_res_1642_;
}
}
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_tagName___lam__0(uint32_t v___y_1643_){
_start:
{
uint32_t v___x_1649_; uint8_t v___x_1650_; 
v___x_1649_ = 65;
v___x_1650_ = lean_uint32_dec_le(v___x_1649_, v___y_1643_);
if (v___x_1650_ == 0)
{
goto v___jp_1644_;
}
else
{
uint32_t v___x_1651_; uint8_t v___x_1652_; 
v___x_1651_ = 90;
v___x_1652_ = lean_uint32_dec_le(v___y_1643_, v___x_1651_);
if (v___x_1652_ == 0)
{
goto v___jp_1644_;
}
else
{
return v___x_1652_;
}
}
v___jp_1644_:
{
uint32_t v___x_1645_; uint8_t v___x_1646_; 
v___x_1645_ = 97;
v___x_1646_ = lean_uint32_dec_le(v___x_1645_, v___y_1643_);
if (v___x_1646_ == 0)
{
return v___x_1646_;
}
else
{
uint32_t v___x_1647_; uint8_t v___x_1648_; 
v___x_1647_ = 122;
v___x_1648_ = lean_uint32_dec_le(v___y_1643_, v___x_1647_);
return v___x_1648_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_tagName___lam__0___boxed(lean_object* v___y_1653_){
_start:
{
uint32_t v___y_45__boxed_1654_; uint8_t v_res_1655_; lean_object* v_r_1656_; 
v___y_45__boxed_1654_ = lean_unbox_uint32(v___y_1653_);
lean_dec(v___y_1653_);
v_res_1655_ = l_Lean_Html_Syntax_tagName___lam__0(v___y_45__boxed_1654_);
v_r_1656_ = lean_box(v_res_1655_);
return v_r_1656_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_tagName___closed__3(void){
_start:
{
lean_object* v___x_1660_; lean_object* v___f_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1660_ = ((lean_object*)(l_Lean_Html_Syntax_tagName___closed__2));
v___f_1661_ = ((lean_object*)(l_Lean_Html_Syntax_tagName___closed__0));
v___x_1662_ = ((lean_object*)(l_Lean_Html_Syntax_tagName___closed__1));
v___x_1663_ = ((lean_object*)(l_Lean_Html_Syntax_tagName_formatter___closed__1));
v___x_1664_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany(v___x_1663_, v___x_1662_, v___f_1661_, v___x_1660_);
return v___x_1664_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_tagName(void){
_start:
{
lean_object* v___x_1665_; 
v___x_1665_ = lean_obj_once(&l_Lean_Html_Syntax_tagName___closed__3, &l_Lean_Html_Syntax_tagName___closed__3_once, _init_l_Lean_Html_Syntax_tagName___closed__3);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_TagName_view___redArg(lean_object* v_inst_1667_, lean_object* v_inst_1668_, lean_object* v_a_1669_){
_start:
{
lean_object* v___x_1670_; 
v___x_1670_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___redArg(v_inst_1667_, v_inst_1668_, v_a_1669_);
return v___x_1670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_TagName_view___redArg___boxed(lean_object* v_inst_1671_, lean_object* v_inst_1672_, lean_object* v_a_1673_){
_start:
{
lean_object* v_res_1674_; 
v_res_1674_ = l_Lean_Html_Syntax_TagName_view___redArg(v_inst_1671_, v_inst_1672_, v_a_1673_);
lean_dec(v_a_1673_);
return v_res_1674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_TagName_view(lean_object* v_m_1675_, lean_object* v_inst_1676_, lean_object* v_inst_1677_, lean_object* v_a_1678_){
_start:
{
lean_object* v___x_1679_; 
v___x_1679_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___redArg(v_inst_1676_, v_inst_1677_, v_a_1678_);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_TagName_view___boxed(lean_object* v_m_1680_, lean_object* v_inst_1681_, lean_object* v_inst_1682_, lean_object* v_a_1683_){
_start:
{
lean_object* v_res_1684_; 
v_res_1684_ = l_Lean_Html_Syntax_TagName_view(v_m_1680_, v_inst_1681_, v_inst_1682_, v_a_1683_);
lean_dec(v_a_1683_);
return v_res_1684_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_1685_; lean_object* v___x_1686_; 
v___x_1685_ = 61;
v___x_1686_ = lean_box_uint32(v___x_1685_);
return v___x_1686_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__0(void){
_start:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1687_ = lean_box(0);
v___x_1688_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__0___boxed__const__1;
v___x_1689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1688_);
lean_ctor_set(v___x_1689_, 1, v___x_1687_);
return v___x_1689_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__1(void){
_start:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
v___x_1690_ = lean_obj_once(&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__0, &l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__0_once, _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__0);
v___x_1691_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__1___boxed__const__1;
v___x_1692_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1691_);
lean_ctor_set(v___x_1692_, 1, v___x_1690_);
return v___x_1692_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__2(void){
_start:
{
lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1693_ = lean_obj_once(&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__1, &l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__1_once, _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__1);
v___x_1694_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__0___boxed__const__1;
v___x_1695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1695_, 0, v___x_1694_);
lean_ctor_set(v___x_1695_, 1, v___x_1693_);
return v___x_1695_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__3___boxed__const__1(void){
_start:
{
uint32_t v___x_1696_; lean_object* v___x_1697_; 
v___x_1696_ = 39;
v___x_1697_ = lean_box_uint32(v___x_1696_);
return v___x_1697_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__3(void){
_start:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; 
v___x_1698_ = lean_obj_once(&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__2, &l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__2_once, _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__2);
v___x_1699_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__3___boxed__const__1;
v___x_1700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1700_, 0, v___x_1699_);
lean_ctor_set(v___x_1700_, 1, v___x_1698_);
return v___x_1700_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__4___boxed__const__1(void){
_start:
{
uint32_t v___x_1701_; lean_object* v___x_1702_; 
v___x_1701_ = 34;
v___x_1702_ = lean_box_uint32(v___x_1701_);
return v___x_1702_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__4(void){
_start:
{
lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1703_ = lean_obj_once(&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__3, &l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__3_once, _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__3);
v___x_1704_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__4___boxed__const__1;
v___x_1705_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1704_);
lean_ctor_set(v___x_1705_, 1, v___x_1703_);
return v___x_1705_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__5___boxed__const__1(void){
_start:
{
uint32_t v___x_1706_; lean_object* v___x_1707_; 
v___x_1706_ = 32;
v___x_1707_ = lean_box_uint32(v___x_1706_);
return v___x_1707_;
}
}
static lean_object* _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__5(void){
_start:
{
lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1708_ = lean_obj_once(&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__4, &l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__4_once, _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__4);
v___x_1709_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__5___boxed__const__1;
v___x_1710_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1710_, 0, v___x_1709_);
lean_ctor_set(v___x_1710_, 1, v___x_1708_);
return v___x_1710_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar(uint32_t v_c_1711_){
_start:
{
uint8_t v___x_1712_; 
v___x_1712_ = l_Lean_Html_isControl(v_c_1711_);
if (v___x_1712_ == 0)
{
lean_object* v___f_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; uint8_t v___x_1716_; 
v___f_1713_ = lean_obj_once(&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__0, &l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__0_once, _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__0);
v___x_1714_ = lean_obj_once(&l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__5, &l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__5_once, _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__5);
v___x_1715_ = lean_box_uint32(v_c_1711_);
v___x_1716_ = l_List_elem___redArg(v___f_1713_, v___x_1715_, v___x_1714_);
if (v___x_1716_ == 0)
{
uint8_t v___x_1717_; 
v___x_1717_ = l_Lean_Html_isNonCharacter(v_c_1711_);
if (v___x_1717_ == 0)
{
uint8_t v___x_1718_; 
v___x_1718_ = 1;
return v___x_1718_;
}
else
{
return v___x_1712_;
}
}
else
{
return v___x_1712_;
}
}
else
{
uint8_t v___x_1719_; 
v___x_1719_ = 0;
return v___x_1719_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___boxed(lean_object* v_c_1720_){
_start:
{
uint32_t v_c_boxed_1721_; uint8_t v_res_1722_; lean_object* v_r_1723_; 
v_c_boxed_1721_ = lean_unbox_uint32(v_c_1720_);
lean_dec(v_c_1720_);
v_res_1722_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar(v_c_boxed_1721_);
v_r_1723_ = lean_box(v_res_1722_);
return v_r_1723_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameFirstChar(uint32_t v_c_1724_){
_start:
{
uint8_t v___x_1725_; 
v___x_1725_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar(v_c_1724_);
if (v___x_1725_ == 0)
{
return v___x_1725_;
}
else
{
uint32_t v___x_1726_; uint8_t v___x_1727_; 
v___x_1726_ = 123;
v___x_1727_ = lean_uint32_dec_eq(v_c_1724_, v___x_1726_);
if (v___x_1727_ == 0)
{
return v___x_1725_;
}
else
{
uint8_t v___x_1728_; 
v___x_1728_ = 0;
return v___x_1728_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameFirstChar___boxed(lean_object* v_c_1729_){
_start:
{
uint32_t v_c_boxed_1730_; uint8_t v_res_1731_; lean_object* v_r_1732_; 
v_c_boxed_1730_ = lean_unbox_uint32(v_c_1729_);
lean_dec(v_c_1729_);
v_res_1731_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameFirstChar(v_c_boxed_1730_);
v_r_1732_ = lean_box(v_res_1731_);
return v_r_1732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrName_formatter(lean_object* v_a_1739_, lean_object* v_a_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_){
_start:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; 
v___x_1744_ = ((lean_object*)(l_Lean_Html_Syntax_attrName_formatter___closed__1));
v___x_1745_ = l_Lean_PrettyPrinter_Formatter_visitAtom(v___x_1744_, v_a_1739_, v_a_1740_, v_a_1741_, v_a_1742_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrName_formatter___boxed(lean_object* v_a_1746_, lean_object* v_a_1747_, lean_object* v_a_1748_, lean_object* v_a_1749_, lean_object* v_a_1750_){
_start:
{
lean_object* v_res_1751_; 
v_res_1751_ = l_Lean_Html_Syntax_attrName_formatter(v_a_1746_, v_a_1747_, v_a_1748_, v_a_1749_);
lean_dec(v_a_1749_);
lean_dec_ref(v_a_1748_);
lean_dec(v_a_1747_);
lean_dec_ref(v_a_1746_);
return v_res_1751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrName_parenthesizer___redArg(lean_object* v_a_1752_){
_start:
{
lean_object* v___x_1754_; 
v___x_1754_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_1752_);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrName_parenthesizer___redArg___boxed(lean_object* v_a_1755_, lean_object* v_a_1756_){
_start:
{
lean_object* v_res_1757_; 
v_res_1757_ = l_Lean_Html_Syntax_attrName_parenthesizer___redArg(v_a_1755_);
lean_dec(v_a_1755_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrName_parenthesizer(lean_object* v_a_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_){
_start:
{
lean_object* v___x_1763_; 
v___x_1763_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_1759_);
return v___x_1763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrName_parenthesizer___boxed(lean_object* v_a_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l_Lean_Html_Syntax_attrName_parenthesizer(v_a_1764_, v_a_1765_, v_a_1766_, v_a_1767_);
lean_dec(v_a_1767_);
lean_dec_ref(v_a_1766_);
lean_dec(v_a_1765_);
lean_dec_ref(v_a_1764_);
return v_res_1769_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attrName___closed__3(void){
_start:
{
lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1773_ = ((lean_object*)(l_Lean_Html_Syntax_attrName___closed__2));
v___x_1774_ = ((lean_object*)(l_Lean_Html_Syntax_attrName___closed__1));
v___x_1775_ = ((lean_object*)(l_Lean_Html_Syntax_attrName___closed__0));
v___x_1776_ = ((lean_object*)(l_Lean_Html_Syntax_attrName_formatter___closed__1));
v___x_1777_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_parseFirstMany(v___x_1776_, v___x_1775_, v___x_1774_, v___x_1773_);
return v___x_1777_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attrName(void){
_start:
{
lean_object* v___x_1778_; 
v___x_1778_ = lean_obj_once(&l_Lean_Html_Syntax_attrName___closed__3, &l_Lean_Html_Syntax_attrName___closed__3_once, _init_l_Lean_Html_Syntax_attrName___closed__3);
return v___x_1778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrName_view___redArg(lean_object* v_inst_1780_, lean_object* v_inst_1781_, lean_object* v_a_1782_){
_start:
{
lean_object* v___x_1783_; 
v___x_1783_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___redArg(v_inst_1780_, v_inst_1781_, v_a_1782_);
return v___x_1783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrName_view___redArg___boxed(lean_object* v_inst_1784_, lean_object* v_inst_1785_, lean_object* v_a_1786_){
_start:
{
lean_object* v_res_1787_; 
v_res_1787_ = l_Lean_Html_Syntax_AttrName_view___redArg(v_inst_1784_, v_inst_1785_, v_a_1786_);
lean_dec(v_a_1786_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrName_view(lean_object* v_m_1788_, lean_object* v_inst_1789_, lean_object* v_inst_1790_, lean_object* v_a_1791_){
_start:
{
lean_object* v___x_1792_; 
v___x_1792_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_viewNodeAtom___redArg(v_inst_1789_, v_inst_1790_, v_a_1791_);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrName_view___boxed(lean_object* v_m_1793_, lean_object* v_inst_1794_, lean_object* v_inst_1795_, lean_object* v_a_1796_){
_start:
{
lean_object* v_res_1797_; 
v_res_1797_ = l_Lean_Html_Syntax_AttrName_view(v_m_1793_, v_inst_1794_, v_inst_1795_, v_a_1796_);
lean_dec(v_a_1796_);
return v_res_1797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrVal_formatter(lean_object* v_a_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_){
_start:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1816_ = ((lean_object*)(l_Lean_Html_Syntax_attrVal_formatter___closed__1));
v___x_1817_ = ((lean_object*)(l_Lean_Html_Syntax_attrVal_formatter___closed__4));
v___x_1818_ = l_Lean_PrettyPrinter_Formatter_node_formatter(v___x_1816_, v___x_1817_, v_a_1811_, v_a_1812_, v_a_1813_, v_a_1814_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrVal_formatter___boxed(lean_object* v_a_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_){
_start:
{
lean_object* v_res_1824_; 
v_res_1824_ = l_Lean_Html_Syntax_attrVal_formatter(v_a_1819_, v_a_1820_, v_a_1821_, v_a_1822_);
lean_dec(v_a_1822_);
lean_dec_ref(v_a_1821_);
lean_dec(v_a_1820_);
lean_dec_ref(v_a_1819_);
return v_res_1824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrVal_parenthesizer(lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_, lean_object* v_a_1835_){
_start:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1837_ = ((lean_object*)(l_Lean_Html_Syntax_attrVal_formatter___closed__1));
v___x_1838_ = ((lean_object*)(l_Lean_Html_Syntax_attrVal_parenthesizer___closed__2));
v___x_1839_ = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(v___x_1837_, v___x_1838_, v_a_1832_, v_a_1833_, v_a_1834_, v_a_1835_);
return v___x_1839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attrVal_parenthesizer___boxed(lean_object* v_a_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_){
_start:
{
lean_object* v_res_1845_; 
v_res_1845_ = l_Lean_Html_Syntax_attrVal_parenthesizer(v_a_1840_, v_a_1841_, v_a_1842_, v_a_1843_);
lean_dec(v_a_1843_);
lean_dec_ref(v_a_1842_);
lean_dec(v_a_1841_);
lean_dec_ref(v_a_1840_);
return v_res_1845_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attrVal___closed__0(void){
_start:
{
uint8_t v___x_1846_; lean_object* v___x_1847_; 
v___x_1846_ = 1;
v___x_1847_ = l_Lean_Html_Syntax_interp(v___x_1846_);
return v___x_1847_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attrVal___closed__1(void){
_start:
{
lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1848_ = lean_obj_once(&l_Lean_Html_Syntax_attrVal___closed__0, &l_Lean_Html_Syntax_attrVal___closed__0_once, _init_l_Lean_Html_Syntax_attrVal___closed__0);
v___x_1849_ = l_Lean_Parser_strLit;
v___x_1850_ = l_Lean_Parser_orelse(v___x_1849_, v___x_1848_);
return v___x_1850_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attrVal___closed__2(void){
_start:
{
lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; 
v___x_1851_ = lean_obj_once(&l_Lean_Html_Syntax_attrVal___closed__1, &l_Lean_Html_Syntax_attrVal___closed__1_once, _init_l_Lean_Html_Syntax_attrVal___closed__1);
v___x_1852_ = ((lean_object*)(l_Lean_Html_Syntax_attrVal_formatter___closed__1));
v___x_1853_ = l_Lean_Parser_node(v___x_1852_, v___x_1851_);
return v___x_1853_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attrVal(void){
_start:
{
lean_object* v___x_1854_; 
v___x_1854_ = lean_obj_once(&l_Lean_Html_Syntax_attrVal___closed__2, &l_Lean_Html_Syntax_attrVal___closed__2_once, _init_l_Lean_Html_Syntax_attrVal___closed__2);
return v___x_1854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_ctorIdx___impl(lean_object* v_x_1856_){
_start:
{
lean_object* v___x_1857_; 
v___x_1857_ = lean_obj_tag_nat(v_x_1856_);
return v___x_1857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_ctorIdx___impl___boxed(lean_object* v_x_1858_){
_start:
{
lean_object* v_res_1859_; 
v_res_1859_ = l_Lean_Html_Syntax_AttrValView_ctorIdx___impl(v_x_1858_);
lean_dec_ref(v_x_1858_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_ctorElim___redArg(lean_object* v_t_1860_, lean_object* v_k_1861_){
_start:
{
lean_object* v_stx_1862_; lean_object* v___x_1863_; 
v_stx_1862_ = lean_ctor_get(v_t_1860_, 0);
lean_inc(v_stx_1862_);
lean_dec_ref(v_t_1860_);
v___x_1863_ = lean_apply_1(v_k_1861_, v_stx_1862_);
return v___x_1863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_ctorElim(lean_object* v_motive_1864_, lean_object* v_ctorIdx_1865_, lean_object* v_t_1866_, lean_object* v_h_1867_, lean_object* v_k_1868_){
_start:
{
lean_object* v___x_1869_; 
v___x_1869_ = l_Lean_Html_Syntax_AttrValView_ctorElim___redArg(v_t_1866_, v_k_1868_);
return v___x_1869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_ctorElim___boxed(lean_object* v_motive_1870_, lean_object* v_ctorIdx_1871_, lean_object* v_t_1872_, lean_object* v_h_1873_, lean_object* v_k_1874_){
_start:
{
lean_object* v_res_1875_; 
v_res_1875_ = l_Lean_Html_Syntax_AttrValView_ctorElim(v_motive_1870_, v_ctorIdx_1871_, v_t_1872_, v_h_1873_, v_k_1874_);
lean_dec(v_ctorIdx_1871_);
return v_res_1875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_str_elim___redArg(lean_object* v_t_1876_, lean_object* v_str_1877_){
_start:
{
lean_object* v___x_1878_; 
v___x_1878_ = l_Lean_Html_Syntax_AttrValView_ctorElim___redArg(v_t_1876_, v_str_1877_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_str_elim(lean_object* v_motive_1879_, lean_object* v_t_1880_, lean_object* v_h_1881_, lean_object* v_str_1882_){
_start:
{
lean_object* v___x_1883_; 
v___x_1883_ = l_Lean_Html_Syntax_AttrValView_ctorElim___redArg(v_t_1880_, v_str_1882_);
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_interp_elim___redArg(lean_object* v_t_1884_, lean_object* v_interp_1885_){
_start:
{
lean_object* v___x_1886_; 
v___x_1886_ = l_Lean_Html_Syntax_AttrValView_ctorElim___redArg(v_t_1884_, v_interp_1885_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_interp_elim(lean_object* v_motive_1887_, lean_object* v_t_1888_, lean_object* v_h_1889_, lean_object* v_interp_1890_){
_start:
{
lean_object* v___x_1891_; 
v___x_1891_ = l_Lean_Html_Syntax_AttrValView_ctorElim___redArg(v_t_1888_, v_interp_1890_);
return v___x_1891_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3(void){
_start:
{
lean_object* v___x_1898_; lean_object* v___x_1899_; 
v___x_1898_ = lean_unsigned_to_nat(2u);
v___x_1899_ = lean_nat_to_int(v___x_1898_);
return v___x_1899_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4(void){
_start:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; 
v___x_1900_ = lean_unsigned_to_nat(1u);
v___x_1901_ = lean_nat_to_int(v___x_1900_);
return v___x_1901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprAttrValView_repr(lean_object* v_x_1908_, lean_object* v_prec_1909_){
_start:
{
if (lean_obj_tag(v_x_1908_) == 0)
{
lean_object* v_stx_1910_; lean_object* v___y_1912_; lean_object* v___x_1920_; uint8_t v___x_1921_; 
v_stx_1910_ = lean_ctor_get(v_x_1908_, 0);
lean_inc(v_stx_1910_);
lean_dec_ref_known(v_x_1908_, 1);
v___x_1920_ = lean_unsigned_to_nat(1024u);
v___x_1921_ = lean_nat_dec_le(v___x_1920_, v_prec_1909_);
if (v___x_1921_ == 0)
{
lean_object* v___x_1922_; 
v___x_1922_ = lean_obj_once(&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3, &l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3_once, _init_l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3);
v___y_1912_ = v___x_1922_;
goto v___jp_1911_;
}
else
{
lean_object* v___x_1923_; 
v___x_1923_ = lean_obj_once(&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4, &l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4_once, _init_l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4);
v___y_1912_ = v___x_1923_;
goto v___jp_1911_;
}
v___jp_1911_:
{
lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; uint8_t v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1913_ = ((lean_object*)(l_Lean_Html_Syntax_instReprAttrValView_repr___closed__2));
v___x_1914_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_stx_1910_);
v___x_1915_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1915_, 0, v___x_1913_);
lean_ctor_set(v___x_1915_, 1, v___x_1914_);
lean_inc(v___y_1912_);
v___x_1916_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1916_, 0, v___y_1912_);
lean_ctor_set(v___x_1916_, 1, v___x_1915_);
v___x_1917_ = 0;
v___x_1918_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1918_, 0, v___x_1916_);
lean_ctor_set_uint8(v___x_1918_, sizeof(void*)*1, v___x_1917_);
v___x_1919_ = l_Repr_addAppParen(v___x_1918_, v_prec_1909_);
return v___x_1919_;
}
}
else
{
lean_object* v_stx_1924_; lean_object* v___y_1926_; lean_object* v___x_1934_; uint8_t v___x_1935_; 
v_stx_1924_ = lean_ctor_get(v_x_1908_, 0);
lean_inc(v_stx_1924_);
lean_dec_ref_known(v_x_1908_, 1);
v___x_1934_ = lean_unsigned_to_nat(1024u);
v___x_1935_ = lean_nat_dec_le(v___x_1934_, v_prec_1909_);
if (v___x_1935_ == 0)
{
lean_object* v___x_1936_; 
v___x_1936_ = lean_obj_once(&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3, &l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3_once, _init_l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3);
v___y_1926_ = v___x_1936_;
goto v___jp_1925_;
}
else
{
lean_object* v___x_1937_; 
v___x_1937_ = lean_obj_once(&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4, &l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4_once, _init_l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4);
v___y_1926_ = v___x_1937_;
goto v___jp_1925_;
}
v___jp_1925_:
{
lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; uint8_t v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; 
v___x_1927_ = ((lean_object*)(l_Lean_Html_Syntax_instReprAttrValView_repr___closed__7));
v___x_1928_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_stx_1924_);
v___x_1929_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1927_);
lean_ctor_set(v___x_1929_, 1, v___x_1928_);
lean_inc(v___y_1926_);
v___x_1930_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1930_, 0, v___y_1926_);
lean_ctor_set(v___x_1930_, 1, v___x_1929_);
v___x_1931_ = 0;
v___x_1932_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1932_, 0, v___x_1930_);
lean_ctor_set_uint8(v___x_1932_, sizeof(void*)*1, v___x_1931_);
v___x_1933_ = l_Repr_addAppParen(v___x_1932_, v_prec_1909_);
return v___x_1933_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprAttrValView_repr___boxed(lean_object* v_x_1938_, lean_object* v_prec_1939_){
_start:
{
lean_object* v_res_1940_; 
v_res_1940_ = l_Lean_Html_Syntax_instReprAttrValView_repr(v_x_1938_, v_prec_1939_);
lean_dec(v_prec_1939_);
return v_res_1940_;
}
}
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_instBEqAttrValView_beq(lean_object* v_x_1947_, lean_object* v_x_1948_){
_start:
{
if (lean_obj_tag(v_x_1947_) == 0)
{
if (lean_obj_tag(v_x_1948_) == 0)
{
lean_object* v_stx_1949_; lean_object* v_stx_1950_; uint8_t v___x_1951_; 
v_stx_1949_ = lean_ctor_get(v_x_1947_, 0);
v_stx_1950_ = lean_ctor_get(v_x_1948_, 0);
v___x_1951_ = l_Lean_Syntax_structEq(v_stx_1949_, v_stx_1950_);
return v___x_1951_;
}
else
{
uint8_t v___x_1952_; 
v___x_1952_ = 0;
return v___x_1952_;
}
}
else
{
if (lean_obj_tag(v_x_1948_) == 1)
{
lean_object* v_stx_1953_; lean_object* v_stx_1954_; uint8_t v___x_1955_; 
v_stx_1953_ = lean_ctor_get(v_x_1947_, 0);
v_stx_1954_ = lean_ctor_get(v_x_1948_, 0);
v___x_1955_ = l_Lean_Syntax_structEq(v_stx_1953_, v_stx_1954_);
return v___x_1955_;
}
else
{
uint8_t v___x_1956_; 
v___x_1956_ = 0;
return v___x_1956_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqAttrValView_beq___boxed(lean_object* v_x_1957_, lean_object* v_x_1958_){
_start:
{
uint8_t v_res_1959_; lean_object* v_r_1960_; 
v_res_1959_ = l_Lean_Html_Syntax_instBEqAttrValView_beq(v_x_1957_, v_x_1958_);
lean_dec_ref(v_x_1958_);
lean_dec_ref(v_x_1957_);
v_r_1960_ = lean_box(v_res_1959_);
return v_r_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrVal_view___redArg(lean_object* v_inst_1966_, lean_object* v_inst_1967_, lean_object* v_stx_1968_){
_start:
{
lean_object* v_toApplicative_1969_; lean_object* v_toPure_1970_; lean_object* v_toMonadExceptOf_1971_; lean_object* v___x_1972_; lean_object* v_c_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; uint8_t v___x_1976_; 
v_toApplicative_1969_ = lean_ctor_get(v_inst_1966_, 0);
lean_inc_ref(v_toApplicative_1969_);
lean_dec_ref(v_inst_1966_);
v_toPure_1970_ = lean_ctor_get(v_toApplicative_1969_, 1);
lean_inc(v_toPure_1970_);
lean_dec_ref(v_toApplicative_1969_);
v_toMonadExceptOf_1971_ = lean_ctor_get(v_inst_1967_, 0);
lean_inc_ref(v_toMonadExceptOf_1971_);
lean_dec_ref(v_inst_1967_);
v___x_1972_ = lean_unsigned_to_nat(0u);
v_c_1973_ = l_Lean_Syntax_getArg(v_stx_1968_, v___x_1972_);
lean_inc(v_c_1973_);
v___x_1974_ = l_Lean_Syntax_getKind(v_c_1973_);
v___x_1975_ = ((lean_object*)(l_Lean_Html_Syntax_AttrVal_view___redArg___closed__1));
v___x_1976_ = lean_name_eq(v___x_1974_, v___x_1975_);
if (v___x_1976_ == 0)
{
lean_object* v___x_1977_; uint8_t v___x_1978_; 
v___x_1977_ = ((lean_object*)(l_Lean_Html_Syntax_interp_formatter___closed__4));
v___x_1978_ = lean_name_eq(v___x_1974_, v___x_1977_);
lean_dec(v___x_1974_);
if (v___x_1978_ == 0)
{
lean_object* v___x_1979_; 
lean_dec(v_c_1973_);
lean_dec(v_toPure_1970_);
v___x_1979_ = l_Lean_Elab_throwUnsupportedSyntax___redArg(v_toMonadExceptOf_1971_);
return v___x_1979_;
}
else
{
lean_object* v___x_1980_; lean_object* v___x_1981_; 
lean_dec_ref(v_toMonadExceptOf_1971_);
v___x_1980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1980_, 0, v_c_1973_);
v___x_1981_ = lean_apply_2(v_toPure_1970_, lean_box(0), v___x_1980_);
return v___x_1981_;
}
}
else
{
lean_object* v___x_1982_; lean_object* v___x_1983_; 
lean_dec(v___x_1974_);
lean_dec_ref(v_toMonadExceptOf_1971_);
v___x_1982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1982_, 0, v_c_1973_);
v___x_1983_ = lean_apply_2(v_toPure_1970_, lean_box(0), v___x_1982_);
return v___x_1983_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrVal_view___redArg___boxed(lean_object* v_inst_1984_, lean_object* v_inst_1985_, lean_object* v_stx_1986_){
_start:
{
lean_object* v_res_1987_; 
v_res_1987_ = l_Lean_Html_Syntax_AttrVal_view___redArg(v_inst_1984_, v_inst_1985_, v_stx_1986_);
lean_dec(v_stx_1986_);
return v_res_1987_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrVal_view(lean_object* v_m_1988_, lean_object* v_inst_1989_, lean_object* v_inst_1990_, lean_object* v_stx_1991_){
_start:
{
lean_object* v___x_1992_; 
v___x_1992_ = l_Lean_Html_Syntax_AttrVal_view___redArg(v_inst_1989_, v_inst_1990_, v_stx_1991_);
return v___x_1992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrVal_view___boxed(lean_object* v_m_1993_, lean_object* v_inst_1994_, lean_object* v_inst_1995_, lean_object* v_stx_1996_){
_start:
{
lean_object* v_res_1997_; 
v_res_1997_ = l_Lean_Html_Syntax_AttrVal_view(v_m_1993_, v_inst_1994_, v_inst_1995_, v_stx_1996_);
lean_dec(v_stx_1996_);
return v_res_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_of___redArg(lean_object* v_inst_1998_, lean_object* v_inst_1999_, lean_object* v_stx_2000_){
_start:
{
lean_object* v___x_2001_; 
v___x_2001_ = l_Lean_Html_Syntax_AttrVal_view___redArg(v_inst_1998_, v_inst_1999_, v_stx_2000_);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_of___redArg___boxed(lean_object* v_inst_2002_, lean_object* v_inst_2003_, lean_object* v_stx_2004_){
_start:
{
lean_object* v_res_2005_; 
v_res_2005_ = l_Lean_Html_Syntax_AttrValView_of___redArg(v_inst_2002_, v_inst_2003_, v_stx_2004_);
lean_dec(v_stx_2004_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_of(lean_object* v_m_2006_, lean_object* v_inst_2007_, lean_object* v_inst_2008_, lean_object* v_stx_2009_){
_start:
{
lean_object* v___x_2010_; 
v___x_2010_ = l_Lean_Html_Syntax_AttrVal_view___redArg(v_inst_2007_, v_inst_2008_, v_stx_2009_);
return v___x_2010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrValView_of___boxed(lean_object* v_m_2011_, lean_object* v_inst_2012_, lean_object* v_inst_2013_, lean_object* v_stx_2014_){
_start:
{
lean_object* v_res_2015_; 
v_res_2015_ = l_Lean_Html_Syntax_AttrValView_of(v_m_2011_, v_inst_2012_, v_inst_2013_, v_stx_2014_);
lean_dec(v_stx_2014_);
return v_res_2015_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attr_formatter___closed__6(void){
_start:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; 
v___x_2032_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_attrVal_formatter___boxed), 5, 0);
v___x_2033_ = ((lean_object*)(l_Lean_Html_Syntax_attr_formatter___closed__5));
v___x_2034_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2034_, 0, v___x_2033_);
lean_closure_set(v___x_2034_, 1, v___x_2032_);
return v___x_2034_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attr_formatter___closed__7(void){
_start:
{
lean_object* v___x_2035_; lean_object* v___x_2036_; 
v___x_2035_ = lean_obj_once(&l_Lean_Html_Syntax_attr_formatter___closed__6, &l_Lean_Html_Syntax_attr_formatter___closed__6_once, _init_l_Lean_Html_Syntax_attr_formatter___closed__6);
v___x_2036_ = lean_alloc_closure((void*)(l_Lean_Parser_optional_formatter___boxed), 6, 1);
lean_closure_set(v___x_2036_, 0, v___x_2035_);
return v___x_2036_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attr_formatter___closed__8(void){
_start:
{
lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2037_ = lean_obj_once(&l_Lean_Html_Syntax_attr_formatter___closed__7, &l_Lean_Html_Syntax_attr_formatter___closed__7_once, _init_l_Lean_Html_Syntax_attr_formatter___closed__7);
v___x_2038_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_attrName_formatter___boxed), 5, 0);
v___x_2039_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2039_, 0, v___x_2038_);
lean_closure_set(v___x_2039_, 1, v___x_2037_);
return v___x_2039_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attr_formatter___closed__11(void){
_start:
{
lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; 
v___x_2046_ = ((lean_object*)(l_Lean_Html_Syntax_attr_formatter___closed__10));
v___x_2047_ = lean_obj_once(&l_Lean_Html_Syntax_attr_formatter___closed__8, &l_Lean_Html_Syntax_attr_formatter___closed__8_once, _init_l_Lean_Html_Syntax_attr_formatter___closed__8);
v___x_2048_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_2048_, 0, v___x_2047_);
lean_closure_set(v___x_2048_, 1, v___x_2046_);
return v___x_2048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attr_formatter(lean_object* v_a_2049_, lean_object* v_a_2050_, lean_object* v_a_2051_, lean_object* v_a_2052_){
_start:
{
lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; 
v___x_2054_ = ((lean_object*)(l_Lean_Html_Syntax_attr_formatter___closed__1));
v___x_2055_ = lean_obj_once(&l_Lean_Html_Syntax_attr_formatter___closed__11, &l_Lean_Html_Syntax_attr_formatter___closed__11_once, _init_l_Lean_Html_Syntax_attr_formatter___closed__11);
v___x_2056_ = l_Lean_PrettyPrinter_Formatter_node_formatter(v___x_2054_, v___x_2055_, v_a_2049_, v_a_2050_, v_a_2051_, v_a_2052_);
return v___x_2056_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attr_formatter___boxed(lean_object* v_a_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_, lean_object* v_a_2060_, lean_object* v_a_2061_){
_start:
{
lean_object* v_res_2062_; 
v_res_2062_ = l_Lean_Html_Syntax_attr_formatter(v_a_2057_, v_a_2058_, v_a_2059_, v_a_2060_);
lean_dec(v_a_2060_);
lean_dec_ref(v_a_2059_);
lean_dec(v_a_2058_);
lean_dec_ref(v_a_2057_);
return v_res_2062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attr_parenthesizer___lam__0(lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_){
_start:
{
lean_object* v___x_2068_; 
v___x_2068_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v___y_2064_);
return v___x_2068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attr_parenthesizer___lam__0___boxed(lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_){
_start:
{
lean_object* v_res_2074_; 
v_res_2074_ = l_Lean_Html_Syntax_attr_parenthesizer___lam__0(v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_);
lean_dec(v___y_2072_);
lean_dec_ref(v___y_2071_);
lean_dec(v___y_2070_);
lean_dec_ref(v___y_2069_);
return v_res_2074_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attr_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_2078_; lean_object* v___f_2079_; lean_object* v___x_2080_; 
v___x_2078_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_attrVal_parenthesizer___boxed), 5, 0);
v___f_2079_ = ((lean_object*)(l_Lean_Html_Syntax_attr_parenthesizer___closed__1));
v___x_2080_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2080_, 0, v___f_2079_);
lean_closure_set(v___x_2080_, 1, v___x_2078_);
return v___x_2080_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attr_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2081_ = lean_obj_once(&l_Lean_Html_Syntax_attr_parenthesizer___closed__2, &l_Lean_Html_Syntax_attr_parenthesizer___closed__2_once, _init_l_Lean_Html_Syntax_attr_parenthesizer___closed__2);
v___x_2082_ = lean_alloc_closure((void*)(l_Lean_Parser_optional_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2082_, 0, v___x_2081_);
return v___x_2082_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attr_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_2083_; lean_object* v___f_2084_; lean_object* v___x_2085_; 
v___x_2083_ = lean_obj_once(&l_Lean_Html_Syntax_attr_parenthesizer___closed__3, &l_Lean_Html_Syntax_attr_parenthesizer___closed__3_once, _init_l_Lean_Html_Syntax_attr_parenthesizer___closed__3);
v___f_2084_ = ((lean_object*)(l_Lean_Html_Syntax_attr_parenthesizer___closed__0));
v___x_2085_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2085_, 0, v___f_2084_);
lean_closure_set(v___x_2085_, 1, v___x_2083_);
return v___x_2085_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attr_parenthesizer___closed__7(void){
_start:
{
lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2092_ = ((lean_object*)(l_Lean_Html_Syntax_attr_parenthesizer___closed__6));
v___x_2093_ = lean_obj_once(&l_Lean_Html_Syntax_attr_parenthesizer___closed__4, &l_Lean_Html_Syntax_attr_parenthesizer___closed__4_once, _init_l_Lean_Html_Syntax_attr_parenthesizer___closed__4);
v___x_2094_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2094_, 0, v___x_2093_);
lean_closure_set(v___x_2094_, 1, v___x_2092_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attr_parenthesizer(lean_object* v_a_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_){
_start:
{
lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; 
v___x_2100_ = ((lean_object*)(l_Lean_Html_Syntax_attr_formatter___closed__1));
v___x_2101_ = lean_obj_once(&l_Lean_Html_Syntax_attr_parenthesizer___closed__7, &l_Lean_Html_Syntax_attr_parenthesizer___closed__7_once, _init_l_Lean_Html_Syntax_attr_parenthesizer___closed__7);
v___x_2102_ = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(v___x_2100_, v___x_2101_, v_a_2095_, v_a_2096_, v_a_2097_, v_a_2098_);
return v___x_2102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_attr_parenthesizer___boxed(lean_object* v_a_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_, lean_object* v_a_2106_, lean_object* v_a_2107_){
_start:
{
lean_object* v_res_2108_; 
v_res_2108_ = l_Lean_Html_Syntax_attr_parenthesizer(v_a_2103_, v_a_2104_, v_a_2105_, v_a_2106_);
lean_dec(v_a_2106_);
lean_dec_ref(v_a_2105_);
lean_dec(v_a_2104_);
lean_dec_ref(v_a_2103_);
return v_res_2108_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attr___closed__0(void){
_start:
{
lean_object* v___x_2109_; uint8_t v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
v___x_2109_ = ((lean_object*)(l_Lean_Html_Syntax_attr_formatter___closed__4));
v___x_2110_ = 1;
v___x_2111_ = ((lean_object*)(l_Lean_Html_Syntax_attr_formatter___closed__2));
v___x_2112_ = l_Lean_Html_Syntax_rawSymbol(v___x_2111_, v___x_2110_, v___x_2109_);
return v___x_2112_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attr___closed__1(void){
_start:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; 
v___x_2113_ = l_Lean_Html_Syntax_attrVal;
v___x_2114_ = lean_obj_once(&l_Lean_Html_Syntax_attr___closed__0, &l_Lean_Html_Syntax_attr___closed__0_once, _init_l_Lean_Html_Syntax_attr___closed__0);
v___x_2115_ = l_Lean_Parser_andthen(v___x_2114_, v___x_2113_);
return v___x_2115_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attr___closed__2(void){
_start:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; 
v___x_2116_ = lean_obj_once(&l_Lean_Html_Syntax_attr___closed__1, &l_Lean_Html_Syntax_attr___closed__1_once, _init_l_Lean_Html_Syntax_attr___closed__1);
v___x_2117_ = l_Lean_Parser_optional(v___x_2116_);
return v___x_2117_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attr___closed__3(void){
_start:
{
lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; 
v___x_2118_ = lean_obj_once(&l_Lean_Html_Syntax_attr___closed__2, &l_Lean_Html_Syntax_attr___closed__2_once, _init_l_Lean_Html_Syntax_attr___closed__2);
v___x_2119_ = l_Lean_Html_Syntax_attrName;
v___x_2120_ = l_Lean_Parser_andthen(v___x_2119_, v___x_2118_);
return v___x_2120_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attr___closed__4(void){
_start:
{
uint8_t v___x_2121_; lean_object* v___x_2122_; 
v___x_2121_ = 1;
v___x_2122_ = l_Lean_Html_Syntax_interpMany(v___x_2121_);
return v___x_2122_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attr___closed__5(void){
_start:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; 
v___x_2123_ = lean_obj_once(&l_Lean_Html_Syntax_attrVal___closed__0, &l_Lean_Html_Syntax_attrVal___closed__0_once, _init_l_Lean_Html_Syntax_attrVal___closed__0);
v___x_2124_ = lean_obj_once(&l_Lean_Html_Syntax_attr___closed__4, &l_Lean_Html_Syntax_attr___closed__4_once, _init_l_Lean_Html_Syntax_attr___closed__4);
v___x_2125_ = l_Lean_Parser_orelse(v___x_2124_, v___x_2123_);
return v___x_2125_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attr___closed__6(void){
_start:
{
lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___x_2126_ = lean_obj_once(&l_Lean_Html_Syntax_attr___closed__5, &l_Lean_Html_Syntax_attr___closed__5_once, _init_l_Lean_Html_Syntax_attr___closed__5);
v___x_2127_ = lean_obj_once(&l_Lean_Html_Syntax_attr___closed__3, &l_Lean_Html_Syntax_attr___closed__3_once, _init_l_Lean_Html_Syntax_attr___closed__3);
v___x_2128_ = l_Lean_Parser_orelse(v___x_2127_, v___x_2126_);
return v___x_2128_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attr___closed__7(void){
_start:
{
lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; 
v___x_2129_ = lean_obj_once(&l_Lean_Html_Syntax_attr___closed__6, &l_Lean_Html_Syntax_attr___closed__6_once, _init_l_Lean_Html_Syntax_attr___closed__6);
v___x_2130_ = ((lean_object*)(l_Lean_Html_Syntax_attr_formatter___closed__1));
v___x_2131_ = l_Lean_Parser_node(v___x_2130_, v___x_2129_);
return v___x_2131_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_attr(void){
_start:
{
lean_object* v___x_2132_; 
v___x_2132_ = lean_obj_once(&l_Lean_Html_Syntax_attr___closed__7, &l_Lean_Html_Syntax_attr___closed__7_once, _init_l_Lean_Html_Syntax_attr___closed__7);
return v___x_2132_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_2146_; lean_object* v___x_2147_; 
v___x_2146_ = lean_unsigned_to_nat(6u);
v___x_2147_ = lean_nat_to_int(v___x_2146_);
return v___x_2147_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_2151_; lean_object* v___x_2152_; 
v___x_2151_ = lean_unsigned_to_nat(7u);
v___x_2152_ = lean_nat_to_int(v___x_2151_);
return v___x_2152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprValAttrView_repr___redArg(lean_object* v_x_2153_){
_start:
{
lean_object* v_name_2154_; lean_object* v_eq_2155_; lean_object* v_val_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; uint8_t v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; 
v_name_2154_ = lean_ctor_get(v_x_2153_, 0);
lean_inc(v_name_2154_);
v_eq_2155_ = lean_ctor_get(v_x_2153_, 1);
lean_inc(v_eq_2155_);
v_val_2156_ = lean_ctor_get(v_x_2153_, 2);
lean_inc(v_val_2156_);
lean_dec_ref(v_x_2153_);
v___x_2157_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__5));
v___x_2158_ = ((lean_object*)(l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__3));
v___x_2159_ = lean_obj_once(&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__12, &l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__12_once, _init_l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__12);
v___x_2160_ = lean_unsigned_to_nat(0u);
v___x_2161_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_name_2154_);
v___x_2162_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2162_, 0, v___x_2159_);
lean_ctor_set(v___x_2162_, 1, v___x_2161_);
v___x_2163_ = 0;
v___x_2164_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2164_, 0, v___x_2162_);
lean_ctor_set_uint8(v___x_2164_, sizeof(void*)*1, v___x_2163_);
v___x_2165_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2165_, 0, v___x_2158_);
lean_ctor_set(v___x_2165_, 1, v___x_2164_);
v___x_2166_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__9));
v___x_2167_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2165_);
lean_ctor_set(v___x_2167_, 1, v___x_2166_);
v___x_2168_ = lean_box(1);
v___x_2169_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2169_, 0, v___x_2167_);
lean_ctor_set(v___x_2169_, 1, v___x_2168_);
v___x_2170_ = ((lean_object*)(l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__5));
v___x_2171_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2171_, 0, v___x_2169_);
lean_ctor_set(v___x_2171_, 1, v___x_2170_);
v___x_2172_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2172_, 0, v___x_2171_);
lean_ctor_set(v___x_2172_, 1, v___x_2157_);
v___x_2173_ = lean_obj_once(&l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__6, &l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__6_once, _init_l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__6);
v___x_2174_ = l_Lean_Syntax_instRepr_repr(v_eq_2155_, v___x_2160_);
v___x_2175_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2175_, 0, v___x_2173_);
lean_ctor_set(v___x_2175_, 1, v___x_2174_);
v___x_2176_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2176_, 0, v___x_2175_);
lean_ctor_set_uint8(v___x_2176_, sizeof(void*)*1, v___x_2163_);
v___x_2177_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2177_, 0, v___x_2172_);
lean_ctor_set(v___x_2177_, 1, v___x_2176_);
v___x_2178_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2178_, 0, v___x_2177_);
lean_ctor_set(v___x_2178_, 1, v___x_2166_);
v___x_2179_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2179_, 0, v___x_2178_);
lean_ctor_set(v___x_2179_, 1, v___x_2168_);
v___x_2180_ = ((lean_object*)(l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__8));
v___x_2181_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2181_, 0, v___x_2179_);
lean_ctor_set(v___x_2181_, 1, v___x_2180_);
v___x_2182_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2181_);
lean_ctor_set(v___x_2182_, 1, v___x_2157_);
v___x_2183_ = lean_obj_once(&l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__9, &l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__9_once, _init_l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__9);
v___x_2184_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_val_2156_);
v___x_2185_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2183_);
lean_ctor_set(v___x_2185_, 1, v___x_2184_);
v___x_2186_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2186_, 0, v___x_2185_);
lean_ctor_set_uint8(v___x_2186_, sizeof(void*)*1, v___x_2163_);
v___x_2187_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2182_);
lean_ctor_set(v___x_2187_, 1, v___x_2186_);
v___x_2188_ = lean_obj_once(&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__18, &l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__18_once, _init_l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__18);
v___x_2189_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__19));
v___x_2190_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2190_, 0, v___x_2189_);
lean_ctor_set(v___x_2190_, 1, v___x_2187_);
v___x_2191_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__20));
v___x_2192_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2192_, 0, v___x_2190_);
lean_ctor_set(v___x_2192_, 1, v___x_2191_);
v___x_2193_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2193_, 0, v___x_2188_);
lean_ctor_set(v___x_2193_, 1, v___x_2192_);
v___x_2194_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2194_, 0, v___x_2193_);
lean_ctor_set_uint8(v___x_2194_, sizeof(void*)*1, v___x_2163_);
return v___x_2194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprValAttrView_repr(lean_object* v_x_2195_, lean_object* v_prec_2196_){
_start:
{
lean_object* v___x_2197_; 
v___x_2197_ = l_Lean_Html_Syntax_instReprValAttrView_repr___redArg(v_x_2195_);
return v___x_2197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprValAttrView_repr___boxed(lean_object* v_x_2198_, lean_object* v_prec_2199_){
_start:
{
lean_object* v_res_2200_; 
v_res_2200_ = l_Lean_Html_Syntax_instReprValAttrView_repr(v_x_2198_, v_prec_2199_);
lean_dec(v_prec_2199_);
return v_res_2200_;
}
}
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_instBEqValAttrView_beq(lean_object* v_x_2207_, lean_object* v_x_2208_){
_start:
{
lean_object* v_name_2209_; lean_object* v_eq_2210_; lean_object* v_val_2211_; lean_object* v_name_2212_; lean_object* v_eq_2213_; lean_object* v_val_2214_; uint8_t v___x_2215_; 
v_name_2209_ = lean_ctor_get(v_x_2207_, 0);
v_eq_2210_ = lean_ctor_get(v_x_2207_, 1);
v_val_2211_ = lean_ctor_get(v_x_2207_, 2);
v_name_2212_ = lean_ctor_get(v_x_2208_, 0);
v_eq_2213_ = lean_ctor_get(v_x_2208_, 1);
v_val_2214_ = lean_ctor_get(v_x_2208_, 2);
v___x_2215_ = l_Lean_Syntax_structEq(v_name_2209_, v_name_2212_);
if (v___x_2215_ == 0)
{
return v___x_2215_;
}
else
{
uint8_t v___x_2216_; 
v___x_2216_ = l_Lean_Syntax_structEq(v_eq_2210_, v_eq_2213_);
if (v___x_2216_ == 0)
{
return v___x_2216_;
}
else
{
uint8_t v___x_2217_; 
v___x_2217_ = l_Lean_Syntax_structEq(v_val_2211_, v_val_2214_);
return v___x_2217_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqValAttrView_beq___boxed(lean_object* v_x_2218_, lean_object* v_x_2219_){
_start:
{
uint8_t v_res_2220_; lean_object* v_r_2221_; 
v_res_2220_ = l_Lean_Html_Syntax_instBEqValAttrView_beq(v_x_2218_, v_x_2219_);
lean_dec_ref(v_x_2219_);
lean_dec_ref(v_x_2218_);
v_r_2221_ = lean_box(v_res_2220_);
return v_r_2221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_ctorIdx___impl(lean_object* v_x_2224_){
_start:
{
lean_object* v___x_2225_; 
v___x_2225_ = lean_obj_tag_nat(v_x_2224_);
return v___x_2225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_ctorIdx___impl___boxed(lean_object* v_x_2226_){
_start:
{
lean_object* v_res_2227_; 
v_res_2227_ = l_Lean_Html_Syntax_AttrView_ctorIdx___impl(v_x_2226_);
lean_dec_ref(v_x_2226_);
return v_res_2227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_ctorElim___redArg(lean_object* v_t_2228_, lean_object* v_k_2229_){
_start:
{
switch(lean_obj_tag(v_t_2228_))
{
case 0:
{
lean_object* v_stx_2230_; lean_object* v___x_2231_; 
v_stx_2230_ = lean_ctor_get(v_t_2228_, 0);
lean_inc_ref(v_stx_2230_);
lean_dec_ref_known(v_t_2228_, 1);
v___x_2231_ = lean_apply_1(v_k_2229_, v_stx_2230_);
return v___x_2231_;
}
case 1:
{
lean_object* v_stx_2232_; lean_object* v___x_2233_; 
v_stx_2232_ = lean_ctor_get(v_t_2228_, 0);
lean_inc(v_stx_2232_);
lean_dec_ref_known(v_t_2228_, 1);
v___x_2233_ = lean_apply_1(v_k_2229_, v_stx_2232_);
return v___x_2233_;
}
default: 
{
uint8_t v_isMany_2234_; lean_object* v_stx_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v_isMany_2234_ = lean_ctor_get_uint8(v_t_2228_, sizeof(void*)*1);
v_stx_2235_ = lean_ctor_get(v_t_2228_, 0);
lean_inc(v_stx_2235_);
lean_dec_ref_known(v_t_2228_, 1);
v___x_2236_ = lean_box(v_isMany_2234_);
v___x_2237_ = lean_apply_2(v_k_2229_, v___x_2236_, v_stx_2235_);
return v___x_2237_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_ctorElim(lean_object* v_motive_2238_, lean_object* v_ctorIdx_2239_, lean_object* v_t_2240_, lean_object* v_h_2241_, lean_object* v_k_2242_){
_start:
{
lean_object* v___x_2243_; 
v___x_2243_ = l_Lean_Html_Syntax_AttrView_ctorElim___redArg(v_t_2240_, v_k_2242_);
return v___x_2243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_ctorElim___boxed(lean_object* v_motive_2244_, lean_object* v_ctorIdx_2245_, lean_object* v_t_2246_, lean_object* v_h_2247_, lean_object* v_k_2248_){
_start:
{
lean_object* v_res_2249_; 
v_res_2249_ = l_Lean_Html_Syntax_AttrView_ctorElim(v_motive_2244_, v_ctorIdx_2245_, v_t_2246_, v_h_2247_, v_k_2248_);
lean_dec(v_ctorIdx_2245_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_val_elim___redArg(lean_object* v_t_2250_, lean_object* v_val_2251_){
_start:
{
lean_object* v___x_2252_; 
v___x_2252_ = l_Lean_Html_Syntax_AttrView_ctorElim___redArg(v_t_2250_, v_val_2251_);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_val_elim(lean_object* v_motive_2253_, lean_object* v_t_2254_, lean_object* v_h_2255_, lean_object* v_val_2256_){
_start:
{
lean_object* v___x_2257_; 
v___x_2257_ = l_Lean_Html_Syntax_AttrView_ctorElim___redArg(v_t_2254_, v_val_2256_);
return v___x_2257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_bool_elim___redArg(lean_object* v_t_2258_, lean_object* v_bool_2259_){
_start:
{
lean_object* v___x_2260_; 
v___x_2260_ = l_Lean_Html_Syntax_AttrView_ctorElim___redArg(v_t_2258_, v_bool_2259_);
return v___x_2260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_bool_elim(lean_object* v_motive_2261_, lean_object* v_t_2262_, lean_object* v_h_2263_, lean_object* v_bool_2264_){
_start:
{
lean_object* v___x_2265_; 
v___x_2265_ = l_Lean_Html_Syntax_AttrView_ctorElim___redArg(v_t_2262_, v_bool_2264_);
return v___x_2265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_interp_elim___redArg(lean_object* v_t_2266_, lean_object* v_interp_2267_){
_start:
{
lean_object* v___x_2268_; 
v___x_2268_ = l_Lean_Html_Syntax_AttrView_ctorElim___redArg(v_t_2266_, v_interp_2267_);
return v___x_2268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_interp_elim(lean_object* v_motive_2269_, lean_object* v_t_2270_, lean_object* v_h_2271_, lean_object* v_interp_2272_){
_start:
{
lean_object* v___x_2273_; 
v___x_2273_ = l_Lean_Html_Syntax_AttrView_ctorElim___redArg(v_t_2270_, v_interp_2272_);
return v___x_2273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprAttrView_repr(lean_object* v_x_2292_, lean_object* v_prec_2293_){
_start:
{
switch(lean_obj_tag(v_x_2292_))
{
case 0:
{
lean_object* v_stx_2294_; lean_object* v___y_2296_; lean_object* v___x_2304_; uint8_t v___x_2305_; 
v_stx_2294_ = lean_ctor_get(v_x_2292_, 0);
lean_inc_ref(v_stx_2294_);
lean_dec_ref_known(v_x_2292_, 1);
v___x_2304_ = lean_unsigned_to_nat(1024u);
v___x_2305_ = lean_nat_dec_le(v___x_2304_, v_prec_2293_);
if (v___x_2305_ == 0)
{
lean_object* v___x_2306_; 
v___x_2306_ = lean_obj_once(&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3, &l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3_once, _init_l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3);
v___y_2296_ = v___x_2306_;
goto v___jp_2295_;
}
else
{
lean_object* v___x_2307_; 
v___x_2307_ = lean_obj_once(&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4, &l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4_once, _init_l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4);
v___y_2296_ = v___x_2307_;
goto v___jp_2295_;
}
v___jp_2295_:
{
lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; uint8_t v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v___x_2297_ = ((lean_object*)(l_Lean_Html_Syntax_instReprAttrView_repr___closed__2));
v___x_2298_ = l_Lean_Html_Syntax_instReprValAttrView_repr___redArg(v_stx_2294_);
v___x_2299_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2297_);
lean_ctor_set(v___x_2299_, 1, v___x_2298_);
lean_inc(v___y_2296_);
v___x_2300_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2300_, 0, v___y_2296_);
lean_ctor_set(v___x_2300_, 1, v___x_2299_);
v___x_2301_ = 0;
v___x_2302_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2302_, 0, v___x_2300_);
lean_ctor_set_uint8(v___x_2302_, sizeof(void*)*1, v___x_2301_);
v___x_2303_ = l_Repr_addAppParen(v___x_2302_, v_prec_2293_);
return v___x_2303_;
}
}
case 1:
{
lean_object* v_stx_2308_; lean_object* v___y_2310_; lean_object* v___x_2318_; uint8_t v___x_2319_; 
v_stx_2308_ = lean_ctor_get(v_x_2292_, 0);
lean_inc(v_stx_2308_);
lean_dec_ref_known(v_x_2292_, 1);
v___x_2318_ = lean_unsigned_to_nat(1024u);
v___x_2319_ = lean_nat_dec_le(v___x_2318_, v_prec_2293_);
if (v___x_2319_ == 0)
{
lean_object* v___x_2320_; 
v___x_2320_ = lean_obj_once(&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3, &l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3_once, _init_l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3);
v___y_2310_ = v___x_2320_;
goto v___jp_2309_;
}
else
{
lean_object* v___x_2321_; 
v___x_2321_ = lean_obj_once(&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4, &l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4_once, _init_l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4);
v___y_2310_ = v___x_2321_;
goto v___jp_2309_;
}
v___jp_2309_:
{
lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; uint8_t v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; 
v___x_2311_ = ((lean_object*)(l_Lean_Html_Syntax_instReprAttrView_repr___closed__5));
v___x_2312_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_stx_2308_);
v___x_2313_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2313_, 0, v___x_2311_);
lean_ctor_set(v___x_2313_, 1, v___x_2312_);
lean_inc(v___y_2310_);
v___x_2314_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2314_, 0, v___y_2310_);
lean_ctor_set(v___x_2314_, 1, v___x_2313_);
v___x_2315_ = 0;
v___x_2316_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2316_, 0, v___x_2314_);
lean_ctor_set_uint8(v___x_2316_, sizeof(void*)*1, v___x_2315_);
v___x_2317_ = l_Repr_addAppParen(v___x_2316_, v_prec_2293_);
return v___x_2317_;
}
}
default: 
{
uint8_t v_isMany_2322_; lean_object* v_stx_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2346_; 
v_isMany_2322_ = lean_ctor_get_uint8(v_x_2292_, sizeof(void*)*1);
v_stx_2323_ = lean_ctor_get(v_x_2292_, 0);
v_isSharedCheck_2346_ = !lean_is_exclusive(v_x_2292_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2325_ = v_x_2292_;
v_isShared_2326_ = v_isSharedCheck_2346_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_stx_2323_);
lean_dec(v_x_2292_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2346_;
goto v_resetjp_2324_;
}
v_resetjp_2324_:
{
lean_object* v___y_2328_; lean_object* v___x_2342_; uint8_t v___x_2343_; 
v___x_2342_ = lean_unsigned_to_nat(1024u);
v___x_2343_ = lean_nat_dec_le(v___x_2342_, v_prec_2293_);
if (v___x_2343_ == 0)
{
lean_object* v___x_2344_; 
v___x_2344_ = lean_obj_once(&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3, &l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3_once, _init_l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3);
v___y_2328_ = v___x_2344_;
goto v___jp_2327_;
}
else
{
lean_object* v___x_2345_; 
v___x_2345_ = lean_obj_once(&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4, &l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4_once, _init_l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4);
v___y_2328_ = v___x_2345_;
goto v___jp_2327_;
}
v___jp_2327_:
{
lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; uint8_t v___x_2337_; lean_object* v___x_2339_; 
v___x_2329_ = lean_box(1);
v___x_2330_ = ((lean_object*)(l_Lean_Html_Syntax_instReprAttrView_repr___closed__8));
v___x_2331_ = l_Bool_repr___redArg(v_isMany_2322_);
v___x_2332_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2332_, 0, v___x_2330_);
lean_ctor_set(v___x_2332_, 1, v___x_2331_);
v___x_2333_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2332_);
lean_ctor_set(v___x_2333_, 1, v___x_2329_);
v___x_2334_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_stx_2323_);
v___x_2335_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2333_);
lean_ctor_set(v___x_2335_, 1, v___x_2334_);
lean_inc(v___y_2328_);
v___x_2336_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2336_, 0, v___y_2328_);
lean_ctor_set(v___x_2336_, 1, v___x_2335_);
v___x_2337_ = 0;
if (v_isShared_2326_ == 0)
{
lean_ctor_set_tag(v___x_2325_, 6);
lean_ctor_set(v___x_2325_, 0, v___x_2336_);
v___x_2339_ = v___x_2325_;
goto v_reusejp_2338_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v___x_2336_);
v___x_2339_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2338_;
}
v_reusejp_2338_:
{
lean_object* v___x_2340_; 
lean_ctor_set_uint8(v___x_2339_, sizeof(void*)*1, v___x_2337_);
v___x_2340_ = l_Repr_addAppParen(v___x_2339_, v_prec_2293_);
return v___x_2340_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprAttrView_repr___boxed(lean_object* v_x_2347_, lean_object* v_prec_2348_){
_start:
{
lean_object* v_res_2349_; 
v_res_2349_ = l_Lean_Html_Syntax_instReprAttrView_repr(v_x_2347_, v_prec_2348_);
lean_dec(v_prec_2348_);
return v_res_2349_;
}
}
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_instBEqAttrView_beq(lean_object* v_x_2356_, lean_object* v_x_2357_){
_start:
{
switch(lean_obj_tag(v_x_2356_))
{
case 0:
{
if (lean_obj_tag(v_x_2357_) == 0)
{
lean_object* v_stx_2358_; lean_object* v_stx_2359_; uint8_t v___x_2360_; 
v_stx_2358_ = lean_ctor_get(v_x_2356_, 0);
v_stx_2359_ = lean_ctor_get(v_x_2357_, 0);
v___x_2360_ = l_Lean_Html_Syntax_instBEqValAttrView_beq(v_stx_2358_, v_stx_2359_);
return v___x_2360_;
}
else
{
uint8_t v___x_2361_; 
v___x_2361_ = 0;
return v___x_2361_;
}
}
case 1:
{
if (lean_obj_tag(v_x_2357_) == 1)
{
lean_object* v_stx_2362_; lean_object* v_stx_2363_; uint8_t v___x_2364_; 
v_stx_2362_ = lean_ctor_get(v_x_2356_, 0);
v_stx_2363_ = lean_ctor_get(v_x_2357_, 0);
v___x_2364_ = l_Lean_Syntax_structEq(v_stx_2362_, v_stx_2363_);
return v___x_2364_;
}
else
{
uint8_t v___x_2365_; 
v___x_2365_ = 0;
return v___x_2365_;
}
}
default: 
{
if (lean_obj_tag(v_x_2357_) == 2)
{
uint8_t v_isMany_2366_; 
v_isMany_2366_ = lean_ctor_get_uint8(v_x_2357_, sizeof(void*)*1);
if (v_isMany_2366_ == 0)
{
uint8_t v_isMany_2367_; 
v_isMany_2367_ = lean_ctor_get_uint8(v_x_2356_, sizeof(void*)*1);
if (v_isMany_2367_ == 0)
{
lean_object* v_stx_2368_; lean_object* v_stx_2369_; uint8_t v___x_2370_; 
v_stx_2368_ = lean_ctor_get(v_x_2356_, 0);
v_stx_2369_ = lean_ctor_get(v_x_2357_, 0);
v___x_2370_ = l_Lean_Syntax_structEq(v_stx_2368_, v_stx_2369_);
return v___x_2370_;
}
else
{
return v_isMany_2366_;
}
}
else
{
uint8_t v_isMany_2371_; 
v_isMany_2371_ = lean_ctor_get_uint8(v_x_2356_, sizeof(void*)*1);
if (v_isMany_2371_ == 0)
{
return v_isMany_2371_;
}
else
{
lean_object* v_stx_2372_; lean_object* v_stx_2373_; uint8_t v___x_2374_; 
v_stx_2372_ = lean_ctor_get(v_x_2356_, 0);
v_stx_2373_ = lean_ctor_get(v_x_2357_, 0);
v___x_2374_ = l_Lean_Syntax_structEq(v_stx_2372_, v_stx_2373_);
return v___x_2374_;
}
}
}
else
{
uint8_t v___x_2375_; 
v___x_2375_ = 0;
return v___x_2375_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqAttrView_beq___boxed(lean_object* v_x_2376_, lean_object* v_x_2377_){
_start:
{
uint8_t v_res_2378_; lean_object* v_r_2379_; 
v_res_2378_ = l_Lean_Html_Syntax_instBEqAttrView_beq(v_x_2376_, v_x_2377_);
lean_dec_ref(v_x_2377_);
lean_dec_ref(v_x_2376_);
v_r_2379_ = lean_box(v_res_2378_);
return v_r_2379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Attr_view___redArg(lean_object* v_inst_2382_, lean_object* v_inst_2383_, lean_object* v_stx_2384_){
_start:
{
lean_object* v_toApplicative_2385_; lean_object* v_toPure_2386_; lean_object* v_toMonadExceptOf_2387_; lean_object* v___x_2389_; uint8_t v_isShared_2390_; uint8_t v_isSharedCheck_2418_; 
v_toApplicative_2385_ = lean_ctor_get(v_inst_2382_, 0);
lean_inc_ref(v_toApplicative_2385_);
lean_dec_ref(v_inst_2382_);
v_toPure_2386_ = lean_ctor_get(v_toApplicative_2385_, 1);
lean_inc(v_toPure_2386_);
lean_dec_ref(v_toApplicative_2385_);
v_toMonadExceptOf_2387_ = lean_ctor_get(v_inst_2383_, 0);
v_isSharedCheck_2418_ = !lean_is_exclusive(v_inst_2383_);
if (v_isSharedCheck_2418_ == 0)
{
lean_object* v_unused_2419_; lean_object* v_unused_2420_; 
v_unused_2419_ = lean_ctor_get(v_inst_2383_, 2);
lean_dec(v_unused_2419_);
v_unused_2420_ = lean_ctor_get(v_inst_2383_, 1);
lean_dec(v_unused_2420_);
v___x_2389_ = v_inst_2383_;
v_isShared_2390_ = v_isSharedCheck_2418_;
goto v_resetjp_2388_;
}
else
{
lean_inc(v_toMonadExceptOf_2387_);
lean_dec(v_inst_2383_);
v___x_2389_ = lean_box(0);
v_isShared_2390_ = v_isSharedCheck_2418_;
goto v_resetjp_2388_;
}
v_resetjp_2388_:
{
lean_object* v___x_2391_; lean_object* v_c_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; uint8_t v___x_2395_; 
v___x_2391_ = lean_unsigned_to_nat(0u);
v_c_2392_ = l_Lean_Syntax_getArg(v_stx_2384_, v___x_2391_);
lean_inc(v_c_2392_);
v___x_2393_ = l_Lean_Syntax_getKind(v_c_2392_);
v___x_2394_ = ((lean_object*)(l_Lean_Html_Syntax_attrName_formatter___closed__1));
v___x_2395_ = lean_name_eq(v___x_2393_, v___x_2394_);
if (v___x_2395_ == 0)
{
lean_object* v___x_2396_; uint8_t v___x_2397_; 
lean_del_object(v___x_2389_);
v___x_2396_ = ((lean_object*)(l_Lean_Html_Syntax_interpMany_formatter___closed__1));
v___x_2397_ = lean_name_eq(v___x_2393_, v___x_2396_);
if (v___x_2397_ == 0)
{
lean_object* v___x_2398_; uint8_t v___x_2399_; 
v___x_2398_ = ((lean_object*)(l_Lean_Html_Syntax_interp_formatter___closed__4));
v___x_2399_ = lean_name_eq(v___x_2393_, v___x_2398_);
lean_dec(v___x_2393_);
if (v___x_2399_ == 0)
{
lean_object* v___x_2400_; 
lean_dec(v_c_2392_);
lean_dec(v_toPure_2386_);
v___x_2400_ = l_Lean_Elab_throwUnsupportedSyntax___redArg(v_toMonadExceptOf_2387_);
return v___x_2400_;
}
else
{
lean_object* v___x_2401_; lean_object* v___x_2402_; 
lean_dec_ref(v_toMonadExceptOf_2387_);
v___x_2401_ = lean_alloc_ctor(2, 1, 1);
lean_ctor_set(v___x_2401_, 0, v_c_2392_);
lean_ctor_set_uint8(v___x_2401_, sizeof(void*)*1, v___x_2397_);
v___x_2402_ = lean_apply_2(v_toPure_2386_, lean_box(0), v___x_2401_);
return v___x_2402_;
}
}
else
{
lean_object* v___x_2403_; lean_object* v___x_2404_; 
lean_dec(v___x_2393_);
lean_dec_ref(v_toMonadExceptOf_2387_);
v___x_2403_ = lean_alloc_ctor(2, 1, 1);
lean_ctor_set(v___x_2403_, 0, v_c_2392_);
lean_ctor_set_uint8(v___x_2403_, sizeof(void*)*1, v___x_2397_);
v___x_2404_ = lean_apply_2(v_toPure_2386_, lean_box(0), v___x_2403_);
return v___x_2404_;
}
}
else
{
lean_object* v___x_2405_; lean_object* v_val_x3f_2406_; lean_object* v___x_2407_; uint8_t v___x_2408_; 
lean_dec(v___x_2393_);
lean_dec_ref(v_toMonadExceptOf_2387_);
v___x_2405_ = lean_unsigned_to_nat(1u);
v_val_x3f_2406_ = l_Lean_Syntax_getArg(v_stx_2384_, v___x_2405_);
v___x_2407_ = l_Lean_Syntax_getNumArgs(v_val_x3f_2406_);
v___x_2408_ = lean_nat_dec_eq(v___x_2407_, v___x_2391_);
lean_dec(v___x_2407_);
if (v___x_2408_ == 0)
{
lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2412_; 
v___x_2409_ = l_Lean_Syntax_getArg(v_val_x3f_2406_, v___x_2391_);
v___x_2410_ = l_Lean_Syntax_getArg(v_val_x3f_2406_, v___x_2405_);
lean_dec(v_val_x3f_2406_);
if (v_isShared_2390_ == 0)
{
lean_ctor_set(v___x_2389_, 2, v___x_2410_);
lean_ctor_set(v___x_2389_, 1, v___x_2409_);
lean_ctor_set(v___x_2389_, 0, v_c_2392_);
v___x_2412_ = v___x_2389_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v_c_2392_);
lean_ctor_set(v_reuseFailAlloc_2415_, 1, v___x_2409_);
lean_ctor_set(v_reuseFailAlloc_2415_, 2, v___x_2410_);
v___x_2412_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
lean_object* v___x_2413_; lean_object* v___x_2414_; 
v___x_2413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2413_, 0, v___x_2412_);
v___x_2414_ = lean_apply_2(v_toPure_2386_, lean_box(0), v___x_2413_);
return v___x_2414_;
}
}
else
{
lean_object* v___x_2416_; lean_object* v___x_2417_; 
lean_dec(v_val_x3f_2406_);
lean_del_object(v___x_2389_);
v___x_2416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2416_, 0, v_c_2392_);
v___x_2417_ = lean_apply_2(v_toPure_2386_, lean_box(0), v___x_2416_);
return v___x_2417_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Attr_view___redArg___boxed(lean_object* v_inst_2421_, lean_object* v_inst_2422_, lean_object* v_stx_2423_){
_start:
{
lean_object* v_res_2424_; 
v_res_2424_ = l_Lean_Html_Syntax_Attr_view___redArg(v_inst_2421_, v_inst_2422_, v_stx_2423_);
lean_dec(v_stx_2423_);
return v_res_2424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Attr_view(lean_object* v_m_2425_, lean_object* v_inst_2426_, lean_object* v_inst_2427_, lean_object* v_stx_2428_){
_start:
{
lean_object* v___x_2429_; 
v___x_2429_ = l_Lean_Html_Syntax_Attr_view___redArg(v_inst_2426_, v_inst_2427_, v_stx_2428_);
return v___x_2429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Attr_view___boxed(lean_object* v_m_2430_, lean_object* v_inst_2431_, lean_object* v_inst_2432_, lean_object* v_stx_2433_){
_start:
{
lean_object* v_res_2434_; 
v_res_2434_ = l_Lean_Html_Syntax_Attr_view(v_m_2430_, v_inst_2431_, v_inst_2432_, v_stx_2433_);
lean_dec(v_stx_2433_);
return v_res_2434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_of___redArg(lean_object* v_inst_2435_, lean_object* v_inst_2436_, lean_object* v_stx_2437_){
_start:
{
lean_object* v___x_2438_; 
v___x_2438_ = l_Lean_Html_Syntax_Attr_view___redArg(v_inst_2435_, v_inst_2436_, v_stx_2437_);
return v___x_2438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_of___redArg___boxed(lean_object* v_inst_2439_, lean_object* v_inst_2440_, lean_object* v_stx_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = l_Lean_Html_Syntax_AttrView_of___redArg(v_inst_2439_, v_inst_2440_, v_stx_2441_);
lean_dec(v_stx_2441_);
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_of(lean_object* v_m_2443_, lean_object* v_inst_2444_, lean_object* v_inst_2445_, lean_object* v_stx_2446_){
_start:
{
lean_object* v___x_2447_; 
v___x_2447_ = l_Lean_Html_Syntax_Attr_view___redArg(v_inst_2444_, v_inst_2445_, v_stx_2446_);
return v___x_2447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_AttrView_of___boxed(lean_object* v_m_2448_, lean_object* v_inst_2449_, lean_object* v_inst_2450_, lean_object* v_stx_2451_){
_start:
{
lean_object* v_res_2452_; 
v_res_2452_ = l_Lean_Html_Syntax_AttrView_of(v_m_2448_, v_inst_2449_, v_inst_2450_, v_stx_2451_);
lean_dec(v_stx_2451_);
return v_res_2452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_elementWith_formatter___lam__0(lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_){
_start:
{
lean_object* v___x_2485_; 
v___x_2485_ = l_Lean_PrettyPrinter_Formatter_pushLine___redArg(v___y_2481_);
return v___x_2485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_elementWith_formatter___lam__0___boxed(lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_){
_start:
{
lean_object* v_res_2491_; 
v_res_2491_ = l_Lean_Html_Syntax_elementWith_formatter___lam__0(v___y_2486_, v___y_2487_, v___y_2488_, v___y_2489_);
lean_dec(v___y_2489_);
lean_dec_ref(v___y_2488_);
lean_dec(v___y_2487_);
lean_dec_ref(v___y_2486_);
return v_res_2491_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_elementWith_formatter___closed__5(void){
_start:
{
lean_object* v___x_2503_; lean_object* v___f_2504_; lean_object* v___x_2505_; 
v___x_2503_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_attr_formatter___boxed), 5, 0);
v___f_2504_ = ((lean_object*)(l_Lean_Html_Syntax_elementWith_formatter___closed__0));
v___x_2505_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2505_, 0, v___f_2504_);
lean_closure_set(v___x_2505_, 1, v___x_2503_);
return v___x_2505_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_elementWith_formatter___closed__6(void){
_start:
{
lean_object* v___x_2506_; lean_object* v___x_2507_; 
v___x_2506_ = lean_obj_once(&l_Lean_Html_Syntax_elementWith_formatter___closed__5, &l_Lean_Html_Syntax_elementWith_formatter___closed__5_once, _init_l_Lean_Html_Syntax_elementWith_formatter___closed__5);
v___x_2507_ = lean_alloc_closure((void*)(l_Lean_Parser_many_formatter___boxed), 6, 1);
lean_closure_set(v___x_2507_, 0, v___x_2506_);
return v___x_2507_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_elementWith_formatter___closed__16(void){
_start:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2535_ = ((lean_object*)(l_Lean_Html_Syntax_elementWith_formatter___closed__15));
v___x_2536_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_tagName_formatter___boxed), 5, 0);
v___x_2537_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2537_, 0, v___x_2536_);
lean_closure_set(v___x_2537_, 1, v___x_2535_);
return v___x_2537_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_elementWith_formatter___closed__17(void){
_start:
{
lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; 
v___x_2538_ = lean_obj_once(&l_Lean_Html_Syntax_elementWith_formatter___closed__16, &l_Lean_Html_Syntax_elementWith_formatter___closed__16_once, _init_l_Lean_Html_Syntax_elementWith_formatter___closed__16);
v___x_2539_ = ((lean_object*)(l_Lean_Html_Syntax_elementWith_formatter___closed__14));
v___x_2540_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2540_, 0, v___x_2539_);
lean_closure_set(v___x_2540_, 1, v___x_2538_);
return v___x_2540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_elementWith_formatter(lean_object* v_content_2541_, lean_object* v_a_2542_, lean_object* v_a_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_){
_start:
{
lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2547_ = ((lean_object*)(l_Lean_Html_Syntax_elementKind___closed__1));
v___x_2548_ = ((lean_object*)(l_Lean_Html_Syntax_elementWith_formatter___closed__4));
v___x_2549_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_tagName_formatter___boxed), 5, 0);
v___x_2550_ = lean_obj_once(&l_Lean_Html_Syntax_elementWith_formatter___closed__6, &l_Lean_Html_Syntax_elementWith_formatter___closed__6_once, _init_l_Lean_Html_Syntax_elementWith_formatter___closed__6);
v___x_2551_ = ((lean_object*)(l_Lean_Html_Syntax_elementWith_formatter___closed__8));
v___x_2552_ = ((lean_object*)(l_Lean_Html_Syntax_elementWith_formatter___closed__10));
v___x_2553_ = lean_obj_once(&l_Lean_Html_Syntax_elementWith_formatter___closed__17, &l_Lean_Html_Syntax_elementWith_formatter___closed__17_once, _init_l_Lean_Html_Syntax_elementWith_formatter___closed__17);
v___x_2554_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2554_, 0, v_content_2541_);
lean_closure_set(v___x_2554_, 1, v___x_2553_);
v___x_2555_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2555_, 0, v___x_2552_);
lean_closure_set(v___x_2555_, 1, v___x_2554_);
v___x_2556_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_2556_, 0, v___x_2551_);
lean_closure_set(v___x_2556_, 1, v___x_2555_);
v___x_2557_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2557_, 0, v___x_2550_);
lean_closure_set(v___x_2557_, 1, v___x_2556_);
v___x_2558_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2558_, 0, v___x_2549_);
lean_closure_set(v___x_2558_, 1, v___x_2557_);
v___x_2559_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2559_, 0, v___x_2548_);
lean_closure_set(v___x_2559_, 1, v___x_2558_);
v___x_2560_ = l_Lean_PrettyPrinter_Formatter_node_formatter(v___x_2547_, v___x_2559_, v_a_2542_, v_a_2543_, v_a_2544_, v_a_2545_);
return v___x_2560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_elementWith_formatter___boxed(lean_object* v_content_2561_, lean_object* v_a_2562_, lean_object* v_a_2563_, lean_object* v_a_2564_, lean_object* v_a_2565_, lean_object* v_a_2566_){
_start:
{
lean_object* v_res_2567_; 
v_res_2567_ = l_Lean_Html_Syntax_elementWith_formatter(v_content_2561_, v_a_2562_, v_a_2563_, v_a_2564_, v_a_2565_);
lean_dec(v_a_2565_);
lean_dec_ref(v_a_2564_);
lean_dec(v_a_2563_);
lean_dec_ref(v_a_2562_);
return v_res_2567_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_elementWith_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
v___x_2571_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_attr_parenthesizer___boxed), 5, 0);
v___x_2572_ = ((lean_object*)(l_Lean_Html_Syntax_elementWith_parenthesizer___closed__1));
v___x_2573_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2573_, 0, v___x_2572_);
lean_closure_set(v___x_2573_, 1, v___x_2571_);
return v___x_2573_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_elementWith_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2574_ = lean_obj_once(&l_Lean_Html_Syntax_elementWith_parenthesizer___closed__2, &l_Lean_Html_Syntax_elementWith_parenthesizer___closed__2_once, _init_l_Lean_Html_Syntax_elementWith_parenthesizer___closed__2);
v___x_2575_ = lean_alloc_closure((void*)(l_Lean_Parser_many_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2575_, 0, v___x_2574_);
return v___x_2575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_elementWith_parenthesizer(lean_object* v_content_2588_, lean_object* v_a_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_, lean_object* v_a_2592_){
_start:
{
lean_object* v___f_2594_; lean_object* v___x_2595_; lean_object* v___f_2596_; lean_object* v___x_2597_; lean_object* v___f_2598_; lean_object* v___f_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; 
v___f_2594_ = ((lean_object*)(l_Lean_Html_Syntax_attr_parenthesizer___closed__0));
v___x_2595_ = ((lean_object*)(l_Lean_Html_Syntax_elementKind___closed__1));
v___f_2596_ = ((lean_object*)(l_Lean_Html_Syntax_elementWith_parenthesizer___closed__0));
v___x_2597_ = lean_obj_once(&l_Lean_Html_Syntax_elementWith_parenthesizer___closed__3, &l_Lean_Html_Syntax_elementWith_parenthesizer___closed__3_once, _init_l_Lean_Html_Syntax_elementWith_parenthesizer___closed__3);
v___f_2598_ = ((lean_object*)(l_Lean_Html_Syntax_elementWith_parenthesizer___closed__4));
v___f_2599_ = ((lean_object*)(l_Lean_Html_Syntax_elementWith_parenthesizer___closed__5));
v___x_2600_ = ((lean_object*)(l_Lean_Html_Syntax_elementWith_parenthesizer___closed__8));
v___x_2601_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2601_, 0, v_content_2588_);
lean_closure_set(v___x_2601_, 1, v___x_2600_);
v___x_2602_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2602_, 0, v___f_2599_);
lean_closure_set(v___x_2602_, 1, v___x_2601_);
v___x_2603_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2603_, 0, v___f_2598_);
lean_closure_set(v___x_2603_, 1, v___x_2602_);
v___x_2604_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2604_, 0, v___x_2597_);
lean_closure_set(v___x_2604_, 1, v___x_2603_);
v___x_2605_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2605_, 0, v___f_2594_);
lean_closure_set(v___x_2605_, 1, v___x_2604_);
v___x_2606_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2606_, 0, v___f_2596_);
lean_closure_set(v___x_2606_, 1, v___x_2605_);
v___x_2607_ = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(v___x_2595_, v___x_2606_, v_a_2589_, v_a_2590_, v_a_2591_, v_a_2592_);
return v___x_2607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_elementWith_parenthesizer___boxed(lean_object* v_content_2608_, lean_object* v_a_2609_, lean_object* v_a_2610_, lean_object* v_a_2611_, lean_object* v_a_2612_, lean_object* v_a_2613_){
_start:
{
lean_object* v_res_2614_; 
v_res_2614_ = l_Lean_Html_Syntax_elementWith_parenthesizer(v_content_2608_, v_a_2609_, v_a_2610_, v_a_2611_, v_a_2612_);
lean_dec(v_a_2612_);
lean_dec_ref(v_a_2611_);
lean_dec(v_a_2610_);
lean_dec_ref(v_a_2609_);
return v_res_2614_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_elementWith___closed__0(void){
_start:
{
lean_object* v___x_2615_; uint8_t v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2615_ = ((lean_object*)(l_Lean_Html_Syntax_elementWith_formatter___closed__3));
v___x_2616_ = 0;
v___x_2617_ = ((lean_object*)(l_Lean_Html_Syntax_elementWith_formatter___closed__1));
v___x_2618_ = l_Lean_Html_Syntax_rawSymbol(v___x_2617_, v___x_2616_, v___x_2615_);
return v___x_2618_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_elementWith___closed__1(void){
_start:
{
lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; 
v___x_2619_ = l_Lean_Html_Syntax_attr;
v___x_2620_ = l_Lean_Parser_skip;
v___x_2621_ = l_Lean_Parser_andthen(v___x_2620_, v___x_2619_);
return v___x_2621_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_elementWith___closed__2(void){
_start:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2622_ = lean_obj_once(&l_Lean_Html_Syntax_elementWith___closed__1, &l_Lean_Html_Syntax_elementWith___closed__1_once, _init_l_Lean_Html_Syntax_elementWith___closed__1);
v___x_2623_ = l_Lean_Parser_many(v___x_2622_);
return v___x_2623_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_elementWith___closed__3(void){
_start:
{
lean_object* v___x_2624_; uint8_t v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
v___x_2624_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected));
v___x_2625_ = 0;
v___x_2626_ = ((lean_object*)(l_Lean_Html_Syntax_elementWith_formatter___closed__7));
v___x_2627_ = l_Lean_Html_Syntax_rawSymbol(v___x_2626_, v___x_2625_, v___x_2624_);
return v___x_2627_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_elementWith___closed__4(void){
_start:
{
lean_object* v___x_2628_; uint8_t v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
v___x_2628_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected));
v___x_2629_ = 0;
v___x_2630_ = ((lean_object*)(l_Lean_Html_Syntax_elementWith_formatter___closed__9));
v___x_2631_ = l_Lean_Html_Syntax_rawSymbol(v___x_2630_, v___x_2629_, v___x_2628_);
return v___x_2631_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_elementWith___closed__5(void){
_start:
{
lean_object* v___x_2632_; uint8_t v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; 
v___x_2632_ = ((lean_object*)(l_Lean_Html_Syntax_elementWith_formatter___closed__13));
v___x_2633_ = 0;
v___x_2634_ = ((lean_object*)(l_Lean_Html_Syntax_elementWith_formatter___closed__11));
v___x_2635_ = l_Lean_Html_Syntax_rawSymbol(v___x_2634_, v___x_2633_, v___x_2632_);
return v___x_2635_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_elementWith___closed__6(void){
_start:
{
lean_object* v___x_2636_; uint8_t v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2636_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_elementWith_expected___closed__3));
v___x_2637_ = 0;
v___x_2638_ = ((lean_object*)(l_Lean_Html_Syntax_elementWith_formatter___closed__9));
v___x_2639_ = l_Lean_Html_Syntax_rawSymbol(v___x_2638_, v___x_2637_, v___x_2636_);
return v___x_2639_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_elementWith___closed__7(void){
_start:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; 
v___x_2640_ = lean_obj_once(&l_Lean_Html_Syntax_elementWith___closed__6, &l_Lean_Html_Syntax_elementWith___closed__6_once, _init_l_Lean_Html_Syntax_elementWith___closed__6);
v___x_2641_ = l_Lean_Html_Syntax_tagName;
v___x_2642_ = l_Lean_Parser_andthen(v___x_2641_, v___x_2640_);
return v___x_2642_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_elementWith___closed__8(void){
_start:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; 
v___x_2643_ = lean_obj_once(&l_Lean_Html_Syntax_elementWith___closed__7, &l_Lean_Html_Syntax_elementWith___closed__7_once, _init_l_Lean_Html_Syntax_elementWith___closed__7);
v___x_2644_ = lean_obj_once(&l_Lean_Html_Syntax_elementWith___closed__5, &l_Lean_Html_Syntax_elementWith___closed__5_once, _init_l_Lean_Html_Syntax_elementWith___closed__5);
v___x_2645_ = l_Lean_Parser_andthen(v___x_2644_, v___x_2643_);
return v___x_2645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_elementWith(lean_object* v_content_2646_){
_start:
{
lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; 
v___x_2647_ = ((lean_object*)(l_Lean_Html_Syntax_elementKind___closed__1));
v___x_2648_ = lean_obj_once(&l_Lean_Html_Syntax_elementWith___closed__0, &l_Lean_Html_Syntax_elementWith___closed__0_once, _init_l_Lean_Html_Syntax_elementWith___closed__0);
v___x_2649_ = l_Lean_Html_Syntax_tagName;
v___x_2650_ = lean_obj_once(&l_Lean_Html_Syntax_elementWith___closed__2, &l_Lean_Html_Syntax_elementWith___closed__2_once, _init_l_Lean_Html_Syntax_elementWith___closed__2);
v___x_2651_ = lean_obj_once(&l_Lean_Html_Syntax_elementWith___closed__3, &l_Lean_Html_Syntax_elementWith___closed__3_once, _init_l_Lean_Html_Syntax_elementWith___closed__3);
v___x_2652_ = lean_obj_once(&l_Lean_Html_Syntax_elementWith___closed__4, &l_Lean_Html_Syntax_elementWith___closed__4_once, _init_l_Lean_Html_Syntax_elementWith___closed__4);
v___x_2653_ = lean_obj_once(&l_Lean_Html_Syntax_elementWith___closed__8, &l_Lean_Html_Syntax_elementWith___closed__8_once, _init_l_Lean_Html_Syntax_elementWith___closed__8);
v___x_2654_ = l_Lean_Parser_andthen(v_content_2646_, v___x_2653_);
v___x_2655_ = l_Lean_Parser_andthen(v___x_2652_, v___x_2654_);
v___x_2656_ = l_Lean_Parser_orelse(v___x_2651_, v___x_2655_);
v___x_2657_ = l_Lean_Parser_andthen(v___x_2650_, v___x_2656_);
v___x_2658_ = l_Lean_Parser_andthen(v___x_2649_, v___x_2657_);
v___x_2659_ = l_Lean_Parser_andthen(v___x_2648_, v___x_2658_);
v___x_2660_ = l_Lean_Parser_node(v___x_2647_, v___x_2659_);
return v___x_2660_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_2661_, lean_object* v_x_2662_, lean_object* v_x_2663_){
_start:
{
if (lean_obj_tag(v_x_2663_) == 0)
{
lean_dec(v_x_2661_);
return v_x_2662_;
}
else
{
lean_object* v_head_2664_; lean_object* v_tail_2665_; lean_object* v___x_2667_; uint8_t v_isShared_2668_; uint8_t v_isSharedCheck_2675_; 
v_head_2664_ = lean_ctor_get(v_x_2663_, 0);
v_tail_2665_ = lean_ctor_get(v_x_2663_, 1);
v_isSharedCheck_2675_ = !lean_is_exclusive(v_x_2663_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2667_ = v_x_2663_;
v_isShared_2668_ = v_isSharedCheck_2675_;
goto v_resetjp_2666_;
}
else
{
lean_inc(v_tail_2665_);
lean_inc(v_head_2664_);
lean_dec(v_x_2663_);
v___x_2667_ = lean_box(0);
v_isShared_2668_ = v_isSharedCheck_2675_;
goto v_resetjp_2666_;
}
v_resetjp_2666_:
{
lean_object* v___x_2670_; 
lean_inc(v_x_2661_);
if (v_isShared_2668_ == 0)
{
lean_ctor_set_tag(v___x_2667_, 5);
lean_ctor_set(v___x_2667_, 1, v_x_2661_);
lean_ctor_set(v___x_2667_, 0, v_x_2662_);
v___x_2670_ = v___x_2667_;
goto v_reusejp_2669_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v_x_2662_);
lean_ctor_set(v_reuseFailAlloc_2674_, 1, v_x_2661_);
v___x_2670_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2669_;
}
v_reusejp_2669_:
{
lean_object* v___x_2671_; lean_object* v___x_2672_; 
v___x_2671_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_head_2664_);
v___x_2672_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2672_, 0, v___x_2670_);
lean_ctor_set(v___x_2672_, 1, v___x_2671_);
v_x_2662_ = v___x_2672_;
v_x_2663_ = v_tail_2665_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0_spec__0_spec__1(lean_object* v_x_2676_, lean_object* v_x_2677_, lean_object* v_x_2678_){
_start:
{
if (lean_obj_tag(v_x_2678_) == 0)
{
lean_dec(v_x_2676_);
return v_x_2677_;
}
else
{
lean_object* v_head_2679_; lean_object* v_tail_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2690_; 
v_head_2679_ = lean_ctor_get(v_x_2678_, 0);
v_tail_2680_ = lean_ctor_get(v_x_2678_, 1);
v_isSharedCheck_2690_ = !lean_is_exclusive(v_x_2678_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2682_ = v_x_2678_;
v_isShared_2683_ = v_isSharedCheck_2690_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_tail_2680_);
lean_inc(v_head_2679_);
lean_dec(v_x_2678_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2690_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2685_; 
lean_inc(v_x_2676_);
if (v_isShared_2683_ == 0)
{
lean_ctor_set_tag(v___x_2682_, 5);
lean_ctor_set(v___x_2682_, 1, v_x_2676_);
lean_ctor_set(v___x_2682_, 0, v_x_2677_);
v___x_2685_ = v___x_2682_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v_x_2677_);
lean_ctor_set(v_reuseFailAlloc_2689_, 1, v_x_2676_);
v___x_2685_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; 
v___x_2686_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_head_2679_);
v___x_2687_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2687_, 0, v___x_2685_);
lean_ctor_set(v___x_2687_, 1, v___x_2686_);
v___x_2688_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0_spec__0_spec__1_spec__2(v_x_2676_, v___x_2687_, v_tail_2680_);
return v___x_2688_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0_spec__0(lean_object* v_x_2691_, lean_object* v_x_2692_){
_start:
{
if (lean_obj_tag(v_x_2691_) == 0)
{
lean_object* v___x_2693_; 
lean_dec(v_x_2692_);
v___x_2693_ = lean_box(0);
return v___x_2693_;
}
else
{
lean_object* v_tail_2694_; 
v_tail_2694_ = lean_ctor_get(v_x_2691_, 1);
if (lean_obj_tag(v_tail_2694_) == 0)
{
lean_object* v_head_2695_; lean_object* v___x_2696_; 
lean_dec(v_x_2692_);
v_head_2695_ = lean_ctor_get(v_x_2691_, 0);
lean_inc(v_head_2695_);
lean_dec_ref_known(v_x_2691_, 2);
v___x_2696_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_head_2695_);
return v___x_2696_;
}
else
{
lean_object* v_head_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; 
lean_inc(v_tail_2694_);
v_head_2697_ = lean_ctor_get(v_x_2691_, 0);
lean_inc(v_head_2697_);
lean_dec_ref_known(v_x_2691_, 2);
v___x_2698_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_head_2697_);
v___x_2699_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0_spec__0_spec__1(v_x_2692_, v___x_2698_, v_tail_2694_);
return v___x_2699_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2705_; lean_object* v___x_2706_; 
v___x_2705_ = ((lean_object*)(l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__0));
v___x_2706_ = lean_string_length(v___x_2705_);
return v___x_2706_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__4(void){
_start:
{
lean_object* v___x_2707_; lean_object* v___x_2708_; 
v___x_2707_ = lean_obj_once(&l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__3, &l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__3_once, _init_l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__3);
v___x_2708_ = lean_nat_to_int(v___x_2707_);
return v___x_2708_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0(lean_object* v_xs_2716_){
_start:
{
lean_object* v___x_2717_; lean_object* v___x_2718_; uint8_t v___x_2719_; 
v___x_2717_ = lean_array_get_size(v_xs_2716_);
v___x_2718_ = lean_unsigned_to_nat(0u);
v___x_2719_ = lean_nat_dec_eq(v___x_2717_, v___x_2718_);
if (v___x_2719_ == 0)
{
lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; 
v___x_2720_ = lean_array_to_list(v_xs_2716_);
v___x_2721_ = ((lean_object*)(l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__1));
v___x_2722_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0_spec__0(v___x_2720_, v___x_2721_);
v___x_2723_ = lean_obj_once(&l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__4, &l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__4_once, _init_l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__4);
v___x_2724_ = ((lean_object*)(l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__5));
v___x_2725_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2725_, 0, v___x_2724_);
lean_ctor_set(v___x_2725_, 1, v___x_2722_);
v___x_2726_ = ((lean_object*)(l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__6));
v___x_2727_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2727_, 0, v___x_2725_);
lean_ctor_set(v___x_2727_, 1, v___x_2726_);
v___x_2728_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2728_, 0, v___x_2723_);
lean_ctor_set(v___x_2728_, 1, v___x_2727_);
v___x_2729_ = l_Std_Format_fill(v___x_2728_);
return v___x_2729_;
}
else
{
lean_object* v___x_2730_; 
lean_dec_ref(v_xs_2716_);
v___x_2730_ = ((lean_object*)(l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__8));
return v___x_2730_;
}
}
}
static lean_object* _init_l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_2743_; lean_object* v___x_2744_; 
v___x_2743_ = lean_unsigned_to_nat(9u);
v___x_2744_ = lean_nat_to_int(v___x_2743_);
return v___x_2744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprTagView_repr___redArg(lean_object* v_x_2748_){
_start:
{
lean_object* v_lt_2749_; lean_object* v_name_2750_; lean_object* v_attrs_2751_; lean_object* v_gt_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; uint8_t v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; 
v_lt_2749_ = lean_ctor_get(v_x_2748_, 0);
lean_inc(v_lt_2749_);
v_name_2750_ = lean_ctor_get(v_x_2748_, 1);
lean_inc(v_name_2750_);
v_attrs_2751_ = lean_ctor_get(v_x_2748_, 2);
lean_inc_ref(v_attrs_2751_);
v_gt_2752_ = lean_ctor_get(v_x_2748_, 3);
lean_inc(v_gt_2752_);
lean_dec_ref(v_x_2748_);
v___x_2753_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__5));
v___x_2754_ = ((lean_object*)(l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__3));
v___x_2755_ = lean_obj_once(&l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__6, &l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__6_once, _init_l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__6);
v___x_2756_ = lean_unsigned_to_nat(0u);
v___x_2757_ = l_Lean_Syntax_instRepr_repr(v_lt_2749_, v___x_2756_);
v___x_2758_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2758_, 0, v___x_2755_);
lean_ctor_set(v___x_2758_, 1, v___x_2757_);
v___x_2759_ = 0;
v___x_2760_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2760_, 0, v___x_2758_);
lean_ctor_set_uint8(v___x_2760_, sizeof(void*)*1, v___x_2759_);
v___x_2761_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2761_, 0, v___x_2754_);
lean_ctor_set(v___x_2761_, 1, v___x_2760_);
v___x_2762_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__9));
v___x_2763_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2763_, 0, v___x_2761_);
lean_ctor_set(v___x_2763_, 1, v___x_2762_);
v___x_2764_ = lean_box(1);
v___x_2765_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2763_);
lean_ctor_set(v___x_2765_, 1, v___x_2764_);
v___x_2766_ = ((lean_object*)(l_Lean_Html_Syntax_instReprValAttrView_repr___redArg___closed__1));
v___x_2767_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2767_, 0, v___x_2765_);
lean_ctor_set(v___x_2767_, 1, v___x_2766_);
v___x_2768_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2768_, 0, v___x_2767_);
lean_ctor_set(v___x_2768_, 1, v___x_2753_);
v___x_2769_ = lean_obj_once(&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__12, &l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__12_once, _init_l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__12);
v___x_2770_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_name_2750_);
v___x_2771_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2771_, 0, v___x_2769_);
lean_ctor_set(v___x_2771_, 1, v___x_2770_);
v___x_2772_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2772_, 0, v___x_2771_);
lean_ctor_set_uint8(v___x_2772_, sizeof(void*)*1, v___x_2759_);
v___x_2773_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2773_, 0, v___x_2768_);
lean_ctor_set(v___x_2773_, 1, v___x_2772_);
v___x_2774_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2774_, 0, v___x_2773_);
lean_ctor_set(v___x_2774_, 1, v___x_2762_);
v___x_2775_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2774_);
lean_ctor_set(v___x_2775_, 1, v___x_2764_);
v___x_2776_ = ((lean_object*)(l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__5));
v___x_2777_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2777_, 0, v___x_2775_);
lean_ctor_set(v___x_2777_, 1, v___x_2776_);
v___x_2778_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2777_);
lean_ctor_set(v___x_2778_, 1, v___x_2753_);
v___x_2779_ = lean_obj_once(&l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__6, &l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__6_once, _init_l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__6);
v___x_2780_ = l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0(v_attrs_2751_);
v___x_2781_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2781_, 0, v___x_2779_);
lean_ctor_set(v___x_2781_, 1, v___x_2780_);
v___x_2782_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2782_, 0, v___x_2781_);
lean_ctor_set_uint8(v___x_2782_, sizeof(void*)*1, v___x_2759_);
v___x_2783_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2783_, 0, v___x_2778_);
lean_ctor_set(v___x_2783_, 1, v___x_2782_);
v___x_2784_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2784_, 0, v___x_2783_);
lean_ctor_set(v___x_2784_, 1, v___x_2762_);
v___x_2785_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2785_, 0, v___x_2784_);
lean_ctor_set(v___x_2785_, 1, v___x_2764_);
v___x_2786_ = ((lean_object*)(l_Lean_Html_Syntax_instReprTagView_repr___redArg___closed__8));
v___x_2787_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2787_, 0, v___x_2785_);
lean_ctor_set(v___x_2787_, 1, v___x_2786_);
v___x_2788_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2788_, 0, v___x_2787_);
lean_ctor_set(v___x_2788_, 1, v___x_2753_);
v___x_2789_ = l_Lean_Syntax_instRepr_repr(v_gt_2752_, v___x_2756_);
v___x_2790_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2790_, 0, v___x_2755_);
lean_ctor_set(v___x_2790_, 1, v___x_2789_);
v___x_2791_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2791_, 0, v___x_2790_);
lean_ctor_set_uint8(v___x_2791_, sizeof(void*)*1, v___x_2759_);
v___x_2792_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2792_, 0, v___x_2788_);
lean_ctor_set(v___x_2792_, 1, v___x_2791_);
v___x_2793_ = lean_obj_once(&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__18, &l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__18_once, _init_l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__18);
v___x_2794_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__19));
v___x_2795_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2795_, 0, v___x_2794_);
lean_ctor_set(v___x_2795_, 1, v___x_2792_);
v___x_2796_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__20));
v___x_2797_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2797_, 0, v___x_2795_);
lean_ctor_set(v___x_2797_, 1, v___x_2796_);
v___x_2798_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2798_, 0, v___x_2793_);
lean_ctor_set(v___x_2798_, 1, v___x_2797_);
v___x_2799_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2799_, 0, v___x_2798_);
lean_ctor_set_uint8(v___x_2799_, sizeof(void*)*1, v___x_2759_);
return v___x_2799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprTagView_repr(lean_object* v_x_2800_, lean_object* v_prec_2801_){
_start:
{
lean_object* v___x_2802_; 
v___x_2802_ = l_Lean_Html_Syntax_instReprTagView_repr___redArg(v_x_2800_);
return v___x_2802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprTagView_repr___boxed(lean_object* v_x_2803_, lean_object* v_prec_2804_){
_start:
{
lean_object* v_res_2805_; 
v_res_2805_ = l_Lean_Html_Syntax_instReprTagView_repr(v_x_2803_, v_prec_2804_);
lean_dec(v_prec_2804_);
return v_res_2805_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTagView_beq_spec__0___redArg(lean_object* v_xs_2815_, lean_object* v_ys_2816_, lean_object* v_x_2817_){
_start:
{
lean_object* v_zero_2818_; uint8_t v_isZero_2819_; 
v_zero_2818_ = lean_unsigned_to_nat(0u);
v_isZero_2819_ = lean_nat_dec_eq(v_x_2817_, v_zero_2818_);
if (v_isZero_2819_ == 1)
{
lean_dec(v_x_2817_);
return v_isZero_2819_;
}
else
{
lean_object* v_one_2820_; lean_object* v_n_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; uint8_t v___x_2824_; 
v_one_2820_ = lean_unsigned_to_nat(1u);
v_n_2821_ = lean_nat_sub(v_x_2817_, v_one_2820_);
lean_dec(v_x_2817_);
v___x_2822_ = lean_array_fget_borrowed(v_xs_2815_, v_n_2821_);
v___x_2823_ = lean_array_fget_borrowed(v_ys_2816_, v_n_2821_);
v___x_2824_ = l_Lean_Syntax_structEq(v___x_2822_, v___x_2823_);
if (v___x_2824_ == 0)
{
lean_dec(v_n_2821_);
return v___x_2824_;
}
else
{
v_x_2817_ = v_n_2821_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTagView_beq_spec__0___redArg___boxed(lean_object* v_xs_2826_, lean_object* v_ys_2827_, lean_object* v_x_2828_){
_start:
{
uint8_t v_res_2829_; lean_object* v_r_2830_; 
v_res_2829_ = l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTagView_beq_spec__0___redArg(v_xs_2826_, v_ys_2827_, v_x_2828_);
lean_dec_ref(v_ys_2827_);
lean_dec_ref(v_xs_2826_);
v_r_2830_ = lean_box(v_res_2829_);
return v_r_2830_;
}
}
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_instBEqTagView_beq(lean_object* v_x_2831_, lean_object* v_x_2832_){
_start:
{
lean_object* v_lt_2833_; lean_object* v_name_2834_; lean_object* v_attrs_2835_; lean_object* v_gt_2836_; lean_object* v_lt_2837_; lean_object* v_name_2838_; lean_object* v_attrs_2839_; lean_object* v_gt_2840_; uint8_t v___x_2841_; 
v_lt_2833_ = lean_ctor_get(v_x_2831_, 0);
v_name_2834_ = lean_ctor_get(v_x_2831_, 1);
v_attrs_2835_ = lean_ctor_get(v_x_2831_, 2);
v_gt_2836_ = lean_ctor_get(v_x_2831_, 3);
v_lt_2837_ = lean_ctor_get(v_x_2832_, 0);
v_name_2838_ = lean_ctor_get(v_x_2832_, 1);
v_attrs_2839_ = lean_ctor_get(v_x_2832_, 2);
v_gt_2840_ = lean_ctor_get(v_x_2832_, 3);
v___x_2841_ = l_Lean_Syntax_structEq(v_lt_2833_, v_lt_2837_);
if (v___x_2841_ == 0)
{
return v___x_2841_;
}
else
{
uint8_t v___x_2842_; 
v___x_2842_ = l_Lean_Syntax_structEq(v_name_2834_, v_name_2838_);
if (v___x_2842_ == 0)
{
return v___x_2842_;
}
else
{
lean_object* v___x_2843_; lean_object* v___x_2844_; uint8_t v___x_2845_; 
v___x_2843_ = lean_array_get_size(v_attrs_2835_);
v___x_2844_ = lean_array_get_size(v_attrs_2839_);
v___x_2845_ = lean_nat_dec_eq(v___x_2843_, v___x_2844_);
if (v___x_2845_ == 0)
{
return v___x_2845_;
}
else
{
uint8_t v___x_2846_; 
v___x_2846_ = l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTagView_beq_spec__0___redArg(v_attrs_2835_, v_attrs_2839_, v___x_2843_);
if (v___x_2846_ == 0)
{
return v___x_2846_;
}
else
{
uint8_t v___x_2847_; 
v___x_2847_ = l_Lean_Syntax_structEq(v_gt_2836_, v_gt_2840_);
return v___x_2847_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqTagView_beq___boxed(lean_object* v_x_2848_, lean_object* v_x_2849_){
_start:
{
uint8_t v_res_2850_; lean_object* v_r_2851_; 
v_res_2850_ = l_Lean_Html_Syntax_instBEqTagView_beq(v_x_2848_, v_x_2849_);
lean_dec_ref(v_x_2849_);
lean_dec_ref(v_x_2848_);
v_r_2851_ = lean_box(v_res_2850_);
return v_r_2851_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTagView_beq_spec__0(lean_object* v_xs_2852_, lean_object* v_ys_2853_, lean_object* v_hsz_2854_, lean_object* v_x_2855_, lean_object* v_x_2856_){
_start:
{
uint8_t v___x_2857_; 
v___x_2857_ = l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTagView_beq_spec__0___redArg(v_xs_2852_, v_ys_2853_, v_x_2855_);
return v___x_2857_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTagView_beq_spec__0___boxed(lean_object* v_xs_2858_, lean_object* v_ys_2859_, lean_object* v_hsz_2860_, lean_object* v_x_2861_, lean_object* v_x_2862_){
_start:
{
uint8_t v_res_2863_; lean_object* v_r_2864_; 
v_res_2863_ = l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTagView_beq_spec__0(v_xs_2858_, v_ys_2859_, v_hsz_2860_, v_x_2861_, v_x_2862_);
lean_dec_ref(v_ys_2859_);
lean_dec_ref(v_xs_2858_);
v_r_2864_ = lean_box(v_res_2863_);
return v_r_2864_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0(lean_object* v_x_2873_, lean_object* v_x_2874_){
_start:
{
if (lean_obj_tag(v_x_2873_) == 0)
{
lean_object* v___x_2875_; 
v___x_2875_ = ((lean_object*)(l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___closed__1));
return v___x_2875_;
}
else
{
lean_object* v_val_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v_val_2876_ = lean_ctor_get(v_x_2873_, 0);
lean_inc(v_val_2876_);
lean_dec_ref_known(v_x_2873_, 1);
v___x_2877_ = ((lean_object*)(l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___closed__3));
v___x_2878_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_val_2876_);
v___x_2879_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2879_, 0, v___x_2877_);
lean_ctor_set(v___x_2879_, 1, v___x_2878_);
v___x_2880_ = l_Repr_addAppParen(v___x_2879_, v_x_2874_);
return v___x_2880_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___boxed(lean_object* v_x_2881_, lean_object* v_x_2882_){
_start:
{
lean_object* v_res_2883_; 
v_res_2883_ = l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0(v_x_2881_, v_x_2882_);
lean_dec(v_x_2882_);
return v_res_2883_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__1(lean_object* v_x_2884_, lean_object* v_x_2885_){
_start:
{
if (lean_obj_tag(v_x_2884_) == 0)
{
lean_object* v___x_2886_; 
v___x_2886_ = ((lean_object*)(l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___closed__1));
return v___x_2886_;
}
else
{
lean_object* v_val_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
v_val_2887_ = lean_ctor_get(v_x_2884_, 0);
lean_inc(v_val_2887_);
lean_dec_ref_known(v_x_2884_, 1);
v___x_2888_ = ((lean_object*)(l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0___closed__3));
v___x_2889_ = l_Lean_Html_Syntax_instReprTagView_repr___redArg(v_val_2887_);
v___x_2890_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2890_, 0, v___x_2888_);
lean_ctor_set(v___x_2890_, 1, v___x_2889_);
v___x_2891_ = l_Repr_addAppParen(v___x_2890_, v_x_2885_);
return v___x_2891_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__1___boxed(lean_object* v_x_2892_, lean_object* v_x_2893_){
_start:
{
lean_object* v_res_2894_; 
v_res_2894_ = l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__1(v_x_2892_, v_x_2893_);
lean_dec(v_x_2893_);
return v_res_2894_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_2904_; lean_object* v___x_2905_; 
v___x_2904_ = lean_unsigned_to_nat(12u);
v___x_2905_ = lean_nat_to_int(v___x_2904_);
return v___x_2905_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_2912_; lean_object* v___x_2913_; 
v___x_2912_ = lean_unsigned_to_nat(11u);
v___x_2913_ = lean_nat_to_int(v___x_2912_);
return v___x_2913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprElementView_repr___redArg(lean_object* v_x_2914_){
_start:
{
lean_object* v_startTag_2915_; lean_object* v_children_x3f_2916_; lean_object* v_endTag_x3f_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; uint8_t v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; 
v_startTag_2915_ = lean_ctor_get(v_x_2914_, 0);
lean_inc_ref(v_startTag_2915_);
v_children_x3f_2916_ = lean_ctor_get(v_x_2914_, 1);
lean_inc(v_children_x3f_2916_);
v_endTag_x3f_2917_ = lean_ctor_get(v_x_2914_, 2);
lean_inc(v_endTag_x3f_2917_);
lean_dec_ref(v_x_2914_);
v___x_2918_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__5));
v___x_2919_ = ((lean_object*)(l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__3));
v___x_2920_ = lean_obj_once(&l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__4, &l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__4_once, _init_l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__4);
v___x_2921_ = lean_unsigned_to_nat(0u);
v___x_2922_ = l_Lean_Html_Syntax_instReprTagView_repr___redArg(v_startTag_2915_);
v___x_2923_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2923_, 0, v___x_2920_);
lean_ctor_set(v___x_2923_, 1, v___x_2922_);
v___x_2924_ = 0;
v___x_2925_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2925_, 0, v___x_2923_);
lean_ctor_set_uint8(v___x_2925_, sizeof(void*)*1, v___x_2924_);
v___x_2926_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2926_, 0, v___x_2919_);
lean_ctor_set(v___x_2926_, 1, v___x_2925_);
v___x_2927_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__9));
v___x_2928_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2928_, 0, v___x_2926_);
lean_ctor_set(v___x_2928_, 1, v___x_2927_);
v___x_2929_ = lean_box(1);
v___x_2930_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2930_, 0, v___x_2928_);
lean_ctor_set(v___x_2930_, 1, v___x_2929_);
v___x_2931_ = ((lean_object*)(l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__6));
v___x_2932_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2932_, 0, v___x_2930_);
lean_ctor_set(v___x_2932_, 1, v___x_2931_);
v___x_2933_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2933_, 0, v___x_2932_);
lean_ctor_set(v___x_2933_, 1, v___x_2918_);
v___x_2934_ = lean_obj_once(&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__7, &l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__7_once, _init_l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__7);
v___x_2935_ = l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__0(v_children_x3f_2916_, v___x_2921_);
v___x_2936_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2936_, 0, v___x_2934_);
lean_ctor_set(v___x_2936_, 1, v___x_2935_);
v___x_2937_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2937_, 0, v___x_2936_);
lean_ctor_set_uint8(v___x_2937_, sizeof(void*)*1, v___x_2924_);
v___x_2938_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2938_, 0, v___x_2933_);
lean_ctor_set(v___x_2938_, 1, v___x_2937_);
v___x_2939_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2939_, 0, v___x_2938_);
lean_ctor_set(v___x_2939_, 1, v___x_2927_);
v___x_2940_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2940_, 0, v___x_2939_);
lean_ctor_set(v___x_2940_, 1, v___x_2929_);
v___x_2941_ = ((lean_object*)(l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__8));
v___x_2942_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2942_, 0, v___x_2940_);
lean_ctor_set(v___x_2942_, 1, v___x_2941_);
v___x_2943_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2943_, 0, v___x_2942_);
lean_ctor_set(v___x_2943_, 1, v___x_2918_);
v___x_2944_ = lean_obj_once(&l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__9, &l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__9_once, _init_l_Lean_Html_Syntax_instReprElementView_repr___redArg___closed__9);
v___x_2945_ = l_Option_repr___at___00Lean_Html_Syntax_instReprElementView_repr_spec__1(v_endTag_x3f_2917_, v___x_2921_);
v___x_2946_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2946_, 0, v___x_2944_);
lean_ctor_set(v___x_2946_, 1, v___x_2945_);
v___x_2947_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2947_, 0, v___x_2946_);
lean_ctor_set_uint8(v___x_2947_, sizeof(void*)*1, v___x_2924_);
v___x_2948_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2948_, 0, v___x_2943_);
lean_ctor_set(v___x_2948_, 1, v___x_2947_);
v___x_2949_ = lean_obj_once(&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__18, &l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__18_once, _init_l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__18);
v___x_2950_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__19));
v___x_2951_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2950_);
lean_ctor_set(v___x_2951_, 1, v___x_2948_);
v___x_2952_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__20));
v___x_2953_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2953_, 0, v___x_2951_);
lean_ctor_set(v___x_2953_, 1, v___x_2952_);
v___x_2954_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2954_, 0, v___x_2949_);
lean_ctor_set(v___x_2954_, 1, v___x_2953_);
v___x_2955_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2955_, 0, v___x_2954_);
lean_ctor_set_uint8(v___x_2955_, sizeof(void*)*1, v___x_2924_);
return v___x_2955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprElementView_repr(lean_object* v_x_2956_, lean_object* v_prec_2957_){
_start:
{
lean_object* v___x_2958_; 
v___x_2958_ = l_Lean_Html_Syntax_instReprElementView_repr___redArg(v_x_2956_);
return v___x_2958_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprElementView_repr___boxed(lean_object* v_x_2959_, lean_object* v_prec_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l_Lean_Html_Syntax_instReprElementView_repr(v_x_2959_, v_prec_2960_);
lean_dec(v_prec_2960_);
return v_res_2961_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Html_Syntax_instBEqElementView_beq_spec__0(lean_object* v_x_2969_, lean_object* v_x_2970_){
_start:
{
if (lean_obj_tag(v_x_2969_) == 0)
{
if (lean_obj_tag(v_x_2970_) == 0)
{
uint8_t v___x_2971_; 
v___x_2971_ = 1;
return v___x_2971_;
}
else
{
uint8_t v___x_2972_; 
v___x_2972_ = 0;
return v___x_2972_;
}
}
else
{
if (lean_obj_tag(v_x_2970_) == 0)
{
uint8_t v___x_2973_; 
v___x_2973_ = 0;
return v___x_2973_;
}
else
{
lean_object* v_val_2974_; lean_object* v_val_2975_; uint8_t v___x_2976_; 
v_val_2974_ = lean_ctor_get(v_x_2969_, 0);
v_val_2975_ = lean_ctor_get(v_x_2970_, 0);
v___x_2976_ = l_Lean_Syntax_structEq(v_val_2974_, v_val_2975_);
return v___x_2976_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Html_Syntax_instBEqElementView_beq_spec__0___boxed(lean_object* v_x_2977_, lean_object* v_x_2978_){
_start:
{
uint8_t v_res_2979_; lean_object* v_r_2980_; 
v_res_2979_ = l_instBEqOption_beq___at___00Lean_Html_Syntax_instBEqElementView_beq_spec__0(v_x_2977_, v_x_2978_);
lean_dec(v_x_2978_);
lean_dec(v_x_2977_);
v_r_2980_ = lean_box(v_res_2979_);
return v_r_2980_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lean_Html_Syntax_instBEqElementView_beq_spec__1(lean_object* v_x_2981_, lean_object* v_x_2982_){
_start:
{
if (lean_obj_tag(v_x_2981_) == 0)
{
if (lean_obj_tag(v_x_2982_) == 0)
{
uint8_t v___x_2983_; 
v___x_2983_ = 1;
return v___x_2983_;
}
else
{
uint8_t v___x_2984_; 
v___x_2984_ = 0;
return v___x_2984_;
}
}
else
{
if (lean_obj_tag(v_x_2982_) == 0)
{
uint8_t v___x_2985_; 
v___x_2985_ = 0;
return v___x_2985_;
}
else
{
lean_object* v_val_2986_; lean_object* v_val_2987_; uint8_t v___x_2988_; 
v_val_2986_ = lean_ctor_get(v_x_2981_, 0);
v_val_2987_ = lean_ctor_get(v_x_2982_, 0);
v___x_2988_ = l_Lean_Html_Syntax_instBEqTagView_beq(v_val_2986_, v_val_2987_);
return v___x_2988_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lean_Html_Syntax_instBEqElementView_beq_spec__1___boxed(lean_object* v_x_2989_, lean_object* v_x_2990_){
_start:
{
uint8_t v_res_2991_; lean_object* v_r_2992_; 
v_res_2991_ = l_instBEqOption_beq___at___00Lean_Html_Syntax_instBEqElementView_beq_spec__1(v_x_2989_, v_x_2990_);
lean_dec(v_x_2990_);
lean_dec(v_x_2989_);
v_r_2992_ = lean_box(v_res_2991_);
return v_r_2992_;
}
}
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_instBEqElementView_beq(lean_object* v_x_2993_, lean_object* v_x_2994_){
_start:
{
lean_object* v_startTag_2995_; lean_object* v_children_x3f_2996_; lean_object* v_endTag_x3f_2997_; lean_object* v_startTag_2998_; lean_object* v_children_x3f_2999_; lean_object* v_endTag_x3f_3000_; uint8_t v___x_3001_; 
v_startTag_2995_ = lean_ctor_get(v_x_2993_, 0);
v_children_x3f_2996_ = lean_ctor_get(v_x_2993_, 1);
v_endTag_x3f_2997_ = lean_ctor_get(v_x_2993_, 2);
v_startTag_2998_ = lean_ctor_get(v_x_2994_, 0);
v_children_x3f_2999_ = lean_ctor_get(v_x_2994_, 1);
v_endTag_x3f_3000_ = lean_ctor_get(v_x_2994_, 2);
v___x_3001_ = l_Lean_Html_Syntax_instBEqTagView_beq(v_startTag_2995_, v_startTag_2998_);
if (v___x_3001_ == 0)
{
return v___x_3001_;
}
else
{
uint8_t v___x_3002_; 
v___x_3002_ = l_instBEqOption_beq___at___00Lean_Html_Syntax_instBEqElementView_beq_spec__0(v_children_x3f_2996_, v_children_x3f_2999_);
if (v___x_3002_ == 0)
{
return v___x_3002_;
}
else
{
uint8_t v___x_3003_; 
v___x_3003_ = l_instBEqOption_beq___at___00Lean_Html_Syntax_instBEqElementView_beq_spec__1(v_endTag_x3f_2997_, v_endTag_x3f_3000_);
return v___x_3003_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqElementView_beq___boxed(lean_object* v_x_3004_, lean_object* v_x_3005_){
_start:
{
uint8_t v_res_3006_; lean_object* v_r_3007_; 
v_res_3006_ = l_Lean_Html_Syntax_instBEqElementView_beq(v_x_3004_, v_x_3005_);
lean_dec_ref(v_x_3005_);
lean_dec_ref(v_x_3004_);
v_r_3007_ = lean_box(v_res_3006_);
return v_r_3007_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Element_view___redArg___lam__0(lean_object* v_x_3010_){
_start:
{
lean_inc(v_x_3010_);
return v_x_3010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Element_view___redArg___lam__0___boxed(lean_object* v_x_3011_){
_start:
{
lean_object* v_res_3012_; 
v_res_3012_ = l_Lean_Html_Syntax_Element_view___redArg___lam__0(v_x_3011_);
lean_dec(v_x_3011_);
return v_res_3012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Element_view___redArg(lean_object* v_inst_3035_, lean_object* v_inst_3036_, lean_object* v_stx_3037_){
_start:
{
lean_object* v_toApplicative_3038_; lean_object* v_toPure_3039_; lean_object* v_toMonadExceptOf_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3086_; 
v_toApplicative_3038_ = lean_ctor_get(v_inst_3035_, 0);
lean_inc_ref(v_toApplicative_3038_);
lean_dec_ref(v_inst_3035_);
v_toPure_3039_ = lean_ctor_get(v_toApplicative_3038_, 1);
lean_inc(v_toPure_3039_);
lean_dec_ref(v_toApplicative_3038_);
v_toMonadExceptOf_3040_ = lean_ctor_get(v_inst_3036_, 0);
v_isSharedCheck_3086_ = !lean_is_exclusive(v_inst_3036_);
if (v_isSharedCheck_3086_ == 0)
{
lean_object* v_unused_3087_; lean_object* v_unused_3088_; 
v_unused_3087_ = lean_ctor_get(v_inst_3036_, 2);
lean_dec(v_unused_3087_);
v_unused_3088_ = lean_ctor_get(v_inst_3036_, 1);
lean_dec(v_unused_3088_);
v___x_3042_ = v_inst_3036_;
v_isShared_3043_ = v_isSharedCheck_3086_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_toMonadExceptOf_3040_);
lean_dec(v_inst_3036_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3086_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
lean_object* v___x_3044_; lean_object* v___x_3045_; uint8_t v___x_3046_; 
lean_inc(v_stx_3037_);
v___x_3044_ = l_Lean_Syntax_getKind(v_stx_3037_);
v___x_3045_ = ((lean_object*)(l_Lean_Html_Syntax_elementKind___closed__1));
v___x_3046_ = lean_name_eq(v___x_3044_, v___x_3045_);
lean_dec(v___x_3044_);
if (v___x_3046_ == 0)
{
lean_object* v___x_3047_; 
lean_del_object(v___x_3042_);
lean_dec(v_toPure_3039_);
lean_dec(v_stx_3037_);
v___x_3047_ = l_Lean_Elab_throwUnsupportedSyntax___redArg(v_toMonadExceptOf_3040_);
return v___x_3047_;
}
else
{
lean_object* v___f_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; size_t v_sz_3053_; size_t v___x_3054_; lean_object* v_attrs_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v_startTag_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; uint8_t v___x_3065_; 
lean_dec_ref(v_toMonadExceptOf_3040_);
v___f_3048_ = ((lean_object*)(l_Lean_Html_Syntax_Element_view___redArg___closed__0));
v___x_3049_ = lean_unsigned_to_nat(2u);
v___x_3050_ = l_Lean_Syntax_getArg(v_stx_3037_, v___x_3049_);
v___x_3051_ = l_Lean_Syntax_getArgs(v___x_3050_);
lean_dec(v___x_3050_);
v___x_3052_ = ((lean_object*)(l_Lean_Html_Syntax_Element_view___redArg___closed__10));
v_sz_3053_ = lean_array_size(v___x_3051_);
v___x_3054_ = ((size_t)0ULL);
v_attrs_3055_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3052_, v___f_3048_, v_sz_3053_, v___x_3054_, v___x_3051_);
v___x_3056_ = lean_unsigned_to_nat(0u);
v___x_3057_ = l_Lean_Syntax_getArg(v_stx_3037_, v___x_3056_);
v___x_3058_ = lean_unsigned_to_nat(1u);
v___x_3059_ = l_Lean_Syntax_getArg(v_stx_3037_, v___x_3058_);
v___x_3060_ = lean_unsigned_to_nat(3u);
v___x_3061_ = l_Lean_Syntax_getArg(v_stx_3037_, v___x_3060_);
v_startTag_3062_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_startTag_3062_, 0, v___x_3057_);
lean_ctor_set(v_startTag_3062_, 1, v___x_3059_);
lean_ctor_set(v_startTag_3062_, 2, v_attrs_3055_);
lean_ctor_set(v_startTag_3062_, 3, v___x_3061_);
v___x_3063_ = l_Lean_Syntax_getNumArgs(v_stx_3037_);
v___x_3064_ = lean_unsigned_to_nat(4u);
v___x_3065_ = lean_nat_dec_eq(v___x_3063_, v___x_3064_);
lean_dec(v___x_3063_);
if (v___x_3065_ == 0)
{
lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v_endTag_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3078_; 
v___x_3066_ = lean_unsigned_to_nat(5u);
v___x_3067_ = l_Lean_Syntax_getArg(v_stx_3037_, v___x_3066_);
v___x_3068_ = lean_unsigned_to_nat(6u);
v___x_3069_ = l_Lean_Syntax_getArg(v_stx_3037_, v___x_3068_);
v___x_3070_ = ((lean_object*)(l_Lean_Html_Syntax_Element_view___redArg___closed__11));
v___x_3071_ = lean_unsigned_to_nat(7u);
v___x_3072_ = l_Lean_Syntax_getArg(v_stx_3037_, v___x_3071_);
v_endTag_3073_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_endTag_3073_, 0, v___x_3067_);
lean_ctor_set(v_endTag_3073_, 1, v___x_3069_);
lean_ctor_set(v_endTag_3073_, 2, v___x_3070_);
lean_ctor_set(v_endTag_3073_, 3, v___x_3072_);
v___x_3074_ = l_Lean_Syntax_getArg(v_stx_3037_, v___x_3064_);
lean_dec(v_stx_3037_);
v___x_3075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3075_, 0, v___x_3074_);
v___x_3076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3076_, 0, v_endTag_3073_);
if (v_isShared_3043_ == 0)
{
lean_ctor_set(v___x_3042_, 2, v___x_3076_);
lean_ctor_set(v___x_3042_, 1, v___x_3075_);
lean_ctor_set(v___x_3042_, 0, v_startTag_3062_);
v___x_3078_ = v___x_3042_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v_startTag_3062_);
lean_ctor_set(v_reuseFailAlloc_3080_, 1, v___x_3075_);
lean_ctor_set(v_reuseFailAlloc_3080_, 2, v___x_3076_);
v___x_3078_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
lean_object* v___x_3079_; 
v___x_3079_ = lean_apply_2(v_toPure_3039_, lean_box(0), v___x_3078_);
return v___x_3079_;
}
}
else
{
lean_object* v___x_3081_; lean_object* v___x_3083_; 
lean_dec(v_stx_3037_);
v___x_3081_ = lean_box(0);
if (v_isShared_3043_ == 0)
{
lean_ctor_set(v___x_3042_, 2, v___x_3081_);
lean_ctor_set(v___x_3042_, 1, v___x_3081_);
lean_ctor_set(v___x_3042_, 0, v_startTag_3062_);
v___x_3083_ = v___x_3042_;
goto v_reusejp_3082_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v_startTag_3062_);
lean_ctor_set(v_reuseFailAlloc_3085_, 1, v___x_3081_);
lean_ctor_set(v_reuseFailAlloc_3085_, 2, v___x_3081_);
v___x_3083_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3082_;
}
v_reusejp_3082_:
{
lean_object* v___x_3084_; 
v___x_3084_ = lean_apply_2(v_toPure_3039_, lean_box(0), v___x_3083_);
return v___x_3084_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Element_view(lean_object* v_m_3089_, lean_object* v_inst_3090_, lean_object* v_inst_3091_, lean_object* v_stx_3092_){
_start:
{
lean_object* v___x_3093_; 
v___x_3093_ = l_Lean_Html_Syntax_Element_view___redArg(v_inst_3090_, v_inst_3091_, v_stx_3092_);
return v___x_3093_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ElementView_of___redArg(lean_object* v_inst_3094_, lean_object* v_inst_3095_, lean_object* v_stx_3096_){
_start:
{
lean_object* v___x_3097_; 
v___x_3097_ = l_Lean_Html_Syntax_Element_view___redArg(v_inst_3094_, v_inst_3095_, v_stx_3096_);
return v___x_3097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ElementView_of(lean_object* v_m_3098_, lean_object* v_inst_3099_, lean_object* v_inst_3100_, lean_object* v_stx_3101_){
_start:
{
lean_object* v___x_3102_; 
v___x_3102_ = l_Lean_Html_Syntax_Element_view___redArg(v_inst_3099_, v_inst_3100_, v_stx_3101_);
return v___x_3102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_contentWith___lam__0(lean_object* v___x_3103_, lean_object* v___x_3104_, lean_object* v_fn_3105_, lean_object* v_contentFn_3106_, lean_object* v_c_3107_, lean_object* v_s_3108_){
_start:
{
lean_object* v_toCacheableParserContext_3109_; lean_object* v_quotDepth_3110_; lean_object* v___x_3111_; uint8_t v___x_3112_; 
v_toCacheableParserContext_3109_ = lean_ctor_get(v_c_3107_, 2);
v_quotDepth_3110_ = lean_ctor_get(v_toCacheableParserContext_3109_, 1);
v___x_3111_ = lean_unsigned_to_nat(0u);
v___x_3112_ = lean_nat_dec_lt(v___x_3111_, v_quotDepth_3110_);
if (v___x_3112_ == 0)
{
lean_object* v___x_3113_; 
lean_dec_ref(v_contentFn_3106_);
lean_dec_ref(v_fn_3105_);
v___x_3113_ = l_Lean_Parser_nodeFn(v___x_3103_, v___x_3104_, v_c_3107_, v_s_3108_);
return v___x_3113_;
}
else
{
uint8_t v___x_3114_; lean_object* v___x_3115_; 
lean_dec_ref(v___x_3104_);
lean_dec(v___x_3103_);
v___x_3114_ = 1;
v___x_3115_ = l_Lean_Parser_withAntiquotFn(v_fn_3105_, v_contentFn_3106_, v___x_3114_, v_c_3107_, v_s_3108_);
return v___x_3115_;
}
}
}
static lean_object* _init_l_Lean_Html_Syntax_contentWith___closed__0(void){
_start:
{
uint8_t v___x_3116_; uint8_t v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v_antiquotP_3120_; 
v___x_3116_ = 0;
v___x_3117_ = 1;
v___x_3118_ = ((lean_object*)(l_Lean_Html_Syntax_contentKind___closed__1));
v___x_3119_ = ((lean_object*)(l_Lean_Html_Syntax_contentKind___closed__0));
v_antiquotP_3120_ = l_Lean_Parser_mkAntiquot(v___x_3119_, v___x_3118_, v___x_3117_, v___x_3116_);
return v_antiquotP_3120_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_contentWith___closed__1(void){
_start:
{
lean_object* v___x_3121_; lean_object* v___x_3122_; 
v___x_3121_ = l_Lean_Parser_skip;
v___x_3122_ = l_Lean_Html_Syntax_elementWith(v___x_3121_);
return v___x_3122_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_contentWith___closed__2(void){
_start:
{
uint8_t v___x_3123_; lean_object* v___x_3124_; 
v___x_3123_ = 0;
v___x_3124_ = l_Lean_Html_Syntax_interpMany(v___x_3123_);
return v___x_3124_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_contentWith___closed__3(void){
_start:
{
uint8_t v___x_3125_; lean_object* v___x_3126_; 
v___x_3125_ = 0;
v___x_3126_ = l_Lean_Html_Syntax_interp(v___x_3125_);
return v___x_3126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_contentWith(lean_object* v_itemFn_3127_){
_start:
{
lean_object* v___x_3128_; lean_object* v_antiquotP_3129_; lean_object* v_info_3130_; lean_object* v_fn_3131_; lean_object* v___x_3132_; lean_object* v_info_3133_; lean_object* v___x_3134_; lean_object* v_info_3135_; lean_object* v___x_3136_; lean_object* v_info_3137_; lean_object* v___x_3138_; lean_object* v_info_3139_; lean_object* v___x_3140_; lean_object* v_info_3141_; lean_object* v___x_3142_; lean_object* v_contentFn_3143_; lean_object* v___f_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; 
v___x_3128_ = ((lean_object*)(l_Lean_Html_Syntax_contentKind___closed__1));
v_antiquotP_3129_ = lean_obj_once(&l_Lean_Html_Syntax_contentWith___closed__0, &l_Lean_Html_Syntax_contentWith___closed__0_once, _init_l_Lean_Html_Syntax_contentWith___closed__0);
v_info_3130_ = lean_ctor_get(v_antiquotP_3129_, 0);
v_fn_3131_ = lean_ctor_get(v_antiquotP_3129_, 1);
v___x_3132_ = lean_obj_once(&l_Lean_Html_Syntax_contentWith___closed__1, &l_Lean_Html_Syntax_contentWith___closed__1_once, _init_l_Lean_Html_Syntax_contentWith___closed__1);
v_info_3133_ = lean_ctor_get(v___x_3132_, 0);
v___x_3134_ = lean_obj_once(&l_Lean_Html_Syntax_contentWith___closed__2, &l_Lean_Html_Syntax_contentWith___closed__2_once, _init_l_Lean_Html_Syntax_contentWith___closed__2);
v_info_3135_ = lean_ctor_get(v___x_3134_, 0);
v___x_3136_ = lean_obj_once(&l_Lean_Html_Syntax_contentWith___closed__3, &l_Lean_Html_Syntax_contentWith___closed__3_once, _init_l_Lean_Html_Syntax_contentWith___closed__3);
v_info_3137_ = lean_ctor_get(v___x_3136_, 0);
v___x_3138_ = l_Lean_Html_Syntax_comment;
v_info_3139_ = lean_ctor_get(v___x_3138_, 0);
v___x_3140_ = l_Lean_Html_Syntax_text;
v_info_3141_ = lean_ctor_get(v___x_3140_, 0);
v___x_3142_ = lean_alloc_closure((void*)(l_Lean_Parser_manyAux), 3, 1);
lean_closure_set(v___x_3142_, 0, v_itemFn_3127_);
lean_inc_ref(v___x_3142_);
v_contentFn_3143_ = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(v_contentFn_3143_, 0, v___x_3128_);
lean_closure_set(v_contentFn_3143_, 1, v___x_3142_);
lean_inc_ref(v_fn_3131_);
v___f_3144_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_contentWith___lam__0), 6, 4);
lean_closure_set(v___f_3144_, 0, v___x_3128_);
lean_closure_set(v___f_3144_, 1, v___x_3142_);
lean_closure_set(v___f_3144_, 2, v_fn_3131_);
lean_closure_set(v___f_3144_, 3, v_contentFn_3143_);
lean_inc_ref(v_info_3141_);
lean_inc_ref(v_info_3139_);
v___x_3145_ = l_Lean_Parser_andthenInfo(v_info_3139_, v_info_3141_);
lean_inc_ref(v_info_3137_);
v___x_3146_ = l_Lean_Parser_andthenInfo(v_info_3137_, v___x_3145_);
lean_inc_ref(v_info_3135_);
v___x_3147_ = l_Lean_Parser_andthenInfo(v_info_3135_, v___x_3146_);
lean_inc_ref(v_info_3133_);
v___x_3148_ = l_Lean_Parser_andthenInfo(v_info_3133_, v___x_3147_);
v___x_3149_ = l_Lean_Parser_noFirstTokenInfo(v___x_3148_);
v___x_3150_ = l_Lean_Parser_nodeInfo(v___x_3128_, v___x_3149_);
lean_inc_ref(v_info_3130_);
v___x_3151_ = l_Lean_Parser_orelseInfo(v_info_3130_, v___x_3150_);
v___x_3152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3152_, 0, v___x_3151_);
lean_ctor_set(v___x_3152_, 1, v___f_3144_);
return v___x_3152_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_contentItemFn(lean_object* v_c_3154_, lean_object* v_s_3155_){
_start:
{
lean_object* v_toInputContext_3156_; lean_object* v_pos_3157_; lean_object* v_inputString_3158_; uint32_t v___x_3159_; uint32_t v___x_3160_; uint8_t v___x_3161_; 
v_toInputContext_3156_ = lean_ctor_get(v_c_3154_, 0);
v_pos_3157_ = lean_ctor_get(v_s_3155_, 2);
v_inputString_3158_ = lean_ctor_get(v_toInputContext_3156_, 0);
v___x_3159_ = lean_string_utf8_get(v_inputString_3158_, v_pos_3157_);
v___x_3160_ = 60;
v___x_3161_ = lean_uint32_dec_eq(v___x_3159_, v___x_3160_);
if (v___x_3161_ == 0)
{
uint32_t v___x_3162_; uint8_t v___x_3163_; 
v___x_3162_ = 123;
v___x_3163_ = lean_uint32_dec_eq(v___x_3159_, v___x_3162_);
if (v___x_3163_ == 0)
{
lean_object* v___x_3164_; lean_object* v_fn_3165_; lean_object* v___x_3166_; 
v___x_3164_ = l_Lean_Html_Syntax_text;
v_fn_3165_ = lean_ctor_get(v___x_3164_, 1);
lean_inc_ref(v_fn_3165_);
v___x_3166_ = lean_apply_2(v_fn_3165_, v_c_3154_, v_s_3155_);
return v___x_3166_;
}
else
{
lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v_fn_3170_; lean_object* v___x_3171_; 
v___x_3167_ = l_Lean_Html_Syntax_interpMany(v___x_3161_);
v___x_3168_ = l_Lean_Html_Syntax_interp(v___x_3161_);
v___x_3169_ = l_Lean_Parser_orelse(v___x_3167_, v___x_3168_);
v_fn_3170_ = lean_ctor_get(v___x_3169_, 1);
lean_inc_ref(v_fn_3170_);
lean_dec_ref(v___x_3169_);
v___x_3171_ = lean_apply_2(v_fn_3170_, v_c_3154_, v_s_3155_);
return v___x_3171_;
}
}
else
{
lean_object* v___x_3172_; lean_object* v___x_3173_; uint32_t v___x_3174_; uint32_t v___x_3175_; uint8_t v___x_3176_; 
v___x_3172_ = lean_unsigned_to_nat(1u);
v___x_3173_ = lean_nat_add(v_pos_3157_, v___x_3172_);
v___x_3174_ = lean_string_utf8_get(v_inputString_3158_, v___x_3173_);
lean_dec(v___x_3173_);
v___x_3175_ = 33;
v___x_3176_ = lean_uint32_dec_eq(v___x_3174_, v___x_3175_);
if (v___x_3176_ == 0)
{
uint32_t v___x_3177_; uint8_t v___x_3178_; 
v___x_3177_ = 47;
v___x_3178_ = lean_uint32_dec_eq(v___x_3174_, v___x_3177_);
if (v___x_3178_ == 0)
{
lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v_fn_3182_; lean_object* v___x_3183_; 
v___x_3179_ = lean_alloc_closure((void*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_contentItemFn), 2, 0);
v___x_3180_ = l_Lean_Html_Syntax_contentWith(v___x_3179_);
v___x_3181_ = l_Lean_Html_Syntax_elementWith(v___x_3180_);
v_fn_3182_ = lean_ctor_get(v___x_3181_, 1);
lean_inc_ref(v_fn_3182_);
lean_dec_ref(v___x_3181_);
v___x_3183_ = lean_apply_2(v_fn_3182_, v_c_3154_, v_s_3155_);
return v___x_3183_;
}
else
{
lean_object* v___x_3184_; lean_object* v___x_3185_; 
lean_dec_ref(v_c_3154_);
v___x_3184_ = ((lean_object*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_contentItemFn___closed__0));
v___x_3185_ = l_Lean_Parser_ParserState_mkError(v_s_3155_, v___x_3184_);
return v___x_3185_;
}
}
else
{
lean_object* v___x_3186_; lean_object* v_fn_3187_; lean_object* v___x_3188_; 
v___x_3186_ = l_Lean_Html_Syntax_comment;
v_fn_3187_ = lean_ctor_get(v___x_3186_, 1);
lean_inc_ref(v_fn_3187_);
v___x_3188_ = lean_apply_2(v_fn_3187_, v_c_3154_, v_s_3155_);
return v___x_3188_;
}
}
}
}
static lean_object* _init_l_Lean_Html_Syntax_content___closed__1(void){
_start:
{
lean_object* v___x_3190_; lean_object* v___x_3191_; 
v___x_3190_ = ((lean_object*)(l_Lean_Html_Syntax_content___closed__0));
v___x_3191_ = l_Lean_Html_Syntax_contentWith(v___x_3190_);
return v___x_3191_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_content(void){
_start:
{
lean_object* v___x_3192_; 
v___x_3192_ = lean_obj_once(&l_Lean_Html_Syntax_content___closed__1, &l_Lean_Html_Syntax_content___closed__1_once, _init_l_Lean_Html_Syntax_content___closed__1);
return v___x_3192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_parenthesizer_spec__0___redArg(lean_object* v___y_3193_){
_start:
{
lean_object* v___x_3195_; lean_object* v_stxTrav_3196_; lean_object* v_cur_3197_; lean_object* v___x_3198_; 
v___x_3195_ = lean_st_ref_get(v___y_3193_);
v_stxTrav_3196_ = lean_ctor_get(v___x_3195_, 0);
lean_inc_ref(v_stxTrav_3196_);
lean_dec(v___x_3195_);
v_cur_3197_ = lean_ctor_get(v_stxTrav_3196_, 0);
lean_inc(v_cur_3197_);
lean_dec_ref(v_stxTrav_3196_);
v___x_3198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3198_, 0, v_cur_3197_);
return v___x_3198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_parenthesizer_spec__0___redArg___boxed(lean_object* v___y_3199_, lean_object* v___y_3200_){
_start:
{
lean_object* v_res_3201_; 
v_res_3201_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_parenthesizer_spec__0___redArg(v___y_3199_);
lean_dec(v___y_3199_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_parenthesizer_spec__0(lean_object* v___y_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_){
_start:
{
lean_object* v___x_3207_; 
v___x_3207_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_parenthesizer_spec__0___redArg(v___y_3203_);
return v___x_3207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_parenthesizer_spec__0___boxed(lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_){
_start:
{
lean_object* v_res_3213_; 
v_res_3213_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_parenthesizer_spec__0(v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_);
lean_dec(v___y_3211_);
lean_dec_ref(v___y_3210_);
lean_dec(v___y_3209_);
lean_dec_ref(v___y_3208_);
return v_res_3213_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_parenthesizer_spec__3___redArg(lean_object* v_msg_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_){
_start:
{
lean_object* v_ref_3218_; lean_object* v___x_3219_; lean_object* v_a_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3228_; 
v_ref_3218_ = lean_ctor_get(v___y_3215_, 2);
v___x_3219_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1(v_msg_3214_, v___y_3215_, v___y_3216_);
v_a_3220_ = lean_ctor_get(v___x_3219_, 0);
v_isSharedCheck_3228_ = !lean_is_exclusive(v___x_3219_);
if (v_isSharedCheck_3228_ == 0)
{
v___x_3222_ = v___x_3219_;
v_isShared_3223_ = v_isSharedCheck_3228_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_a_3220_);
lean_dec(v___x_3219_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3228_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
lean_object* v___x_3224_; lean_object* v___x_3226_; 
lean_inc(v_ref_3218_);
v___x_3224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3224_, 0, v_ref_3218_);
lean_ctor_set(v___x_3224_, 1, v_a_3220_);
if (v_isShared_3223_ == 0)
{
lean_ctor_set_tag(v___x_3222_, 1);
lean_ctor_set(v___x_3222_, 0, v___x_3224_);
v___x_3226_ = v___x_3222_;
goto v_reusejp_3225_;
}
else
{
lean_object* v_reuseFailAlloc_3227_; 
v_reuseFailAlloc_3227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3227_, 0, v___x_3224_);
v___x_3226_ = v_reuseFailAlloc_3227_;
goto v_reusejp_3225_;
}
v_reusejp_3225_:
{
return v___x_3226_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_parenthesizer_spec__3___redArg___boxed(lean_object* v_msg_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_){
_start:
{
lean_object* v_res_3233_; 
v_res_3233_ = l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_parenthesizer_spec__3___redArg(v_msg_3229_, v___y_3230_, v___y_3231_);
lean_dec(v___y_3231_);
lean_dec_ref(v___y_3230_);
return v_res_3233_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_contentItem_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_3235_; lean_object* v___x_3236_; 
v___x_3235_ = ((lean_object*)(l_Lean_Html_Syntax_contentItem_parenthesizer___closed__0));
v___x_3236_ = l_Lean_stringToMessageData(v___x_3235_);
return v___x_3236_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_contentItem_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_3238_; lean_object* v___x_3239_; 
v___x_3238_ = ((lean_object*)(l_Lean_Html_Syntax_contentItem_parenthesizer___closed__2));
v___x_3239_ = l_Lean_stringToMessageData(v___x_3238_);
return v___x_3239_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_parenthesizer_spec__1___boxed(lean_object* v_n_3240_, lean_object* v_i_3241_, lean_object* v_a_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_){
_start:
{
lean_object* v_res_3248_; 
v_res_3248_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_parenthesizer_spec__1(v_n_3240_, v_i_3241_, v_a_3242_, v___y_3243_, v___y_3244_, v___y_3245_, v___y_3246_);
lean_dec(v___y_3246_);
lean_dec_ref(v___y_3245_);
lean_dec(v___y_3244_);
lean_dec_ref(v___y_3243_);
lean_dec(v_n_3240_);
return v_res_3248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_content_parenthesizer___lam__0(lean_object* v___x_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_){
_start:
{
lean_object* v___x_3255_; 
v___x_3255_ = l_Lean_PrettyPrinter_Parenthesizer_checkKind___redArg(v___x_3249_, v___y_3251_, v___y_3252_, v___y_3253_);
if (lean_obj_tag(v___x_3255_) == 0)
{
lean_object* v___x_3256_; 
lean_dec_ref_known(v___x_3255_, 1);
v___x_3256_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_parenthesizer_spec__0___redArg(v___y_3251_);
if (lean_obj_tag(v___x_3256_) == 0)
{
lean_object* v_a_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; 
v_a_3257_ = lean_ctor_get(v___x_3256_, 0);
lean_inc(v_a_3257_);
lean_dec_ref_known(v___x_3256_, 1);
v___x_3258_ = l_Lean_Syntax_getArgs(v_a_3257_);
lean_dec(v_a_3257_);
v___x_3259_ = lean_array_get_size(v___x_3258_);
lean_dec_ref(v___x_3258_);
v___x_3260_ = lean_alloc_closure((void*)(l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_parenthesizer_spec__1___boxed), 8, 3);
lean_closure_set(v___x_3260_, 0, v___x_3259_);
lean_closure_set(v___x_3260_, 1, v___x_3259_);
lean_closure_set(v___x_3260_, 2, lean_box(0));
v___x_3261_ = l_Lean_PrettyPrinter_Parenthesizer_visitArgs(v___x_3260_, v___y_3250_, v___y_3251_, v___y_3252_, v___y_3253_);
return v___x_3261_;
}
else
{
lean_object* v_a_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3269_; 
v_a_3262_ = lean_ctor_get(v___x_3256_, 0);
v_isSharedCheck_3269_ = !lean_is_exclusive(v___x_3256_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3264_ = v___x_3256_;
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_a_3262_);
lean_dec(v___x_3256_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3267_; 
if (v_isShared_3265_ == 0)
{
v___x_3267_ = v___x_3264_;
goto v_reusejp_3266_;
}
else
{
lean_object* v_reuseFailAlloc_3268_; 
v_reuseFailAlloc_3268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3268_, 0, v_a_3262_);
v___x_3267_ = v_reuseFailAlloc_3268_;
goto v_reusejp_3266_;
}
v_reusejp_3266_:
{
return v___x_3267_;
}
}
}
}
else
{
return v___x_3255_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_content_parenthesizer___lam__0___boxed(lean_object* v___x_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_){
_start:
{
lean_object* v_res_3276_; 
v_res_3276_ = l_Lean_Html_Syntax_content_parenthesizer___lam__0(v___x_3270_, v___y_3271_, v___y_3272_, v___y_3273_, v___y_3274_);
lean_dec(v___y_3274_);
lean_dec_ref(v___y_3273_);
lean_dec(v___y_3272_);
lean_dec_ref(v___y_3271_);
return v_res_3276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_content_parenthesizer(lean_object* v_a_3284_, lean_object* v_a_3285_, lean_object* v_a_3286_, lean_object* v_a_3287_){
_start:
{
lean_object* v___x_3289_; lean_object* v___f_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; 
v___x_3289_ = ((lean_object*)(l_Lean_Html_Syntax_contentKind___closed__1));
v___f_3290_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_content_parenthesizer___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3290_, 0, v___x_3289_);
v___x_3291_ = ((lean_object*)(l_Lean_Html_Syntax_content_parenthesizer___closed__0));
v___x_3292_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_3291_, v___f_3290_, v_a_3284_, v_a_3285_, v_a_3286_, v_a_3287_);
return v___x_3292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_content_parenthesizer___boxed(lean_object* v_a_3293_, lean_object* v_a_3294_, lean_object* v_a_3295_, lean_object* v_a_3296_, lean_object* v_a_3297_){
_start:
{
lean_object* v_res_3298_; 
v_res_3298_ = l_Lean_Html_Syntax_content_parenthesizer(v_a_3293_, v_a_3294_, v_a_3295_, v_a_3296_);
lean_dec(v_a_3296_);
lean_dec_ref(v_a_3295_);
lean_dec(v_a_3294_);
lean_dec_ref(v_a_3293_);
return v_res_3298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_contentItem_parenthesizer(lean_object* v_a_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_, lean_object* v_a_3302_){
_start:
{
lean_object* v___x_3304_; 
v___x_3304_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_parenthesizer_spec__0___redArg(v_a_3300_);
if (lean_obj_tag(v___x_3304_) == 0)
{
lean_object* v_a_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; uint8_t v___x_3308_; 
v_a_3305_ = lean_ctor_get(v___x_3304_, 0);
lean_inc(v_a_3305_);
lean_dec_ref_known(v___x_3304_, 1);
v___x_3306_ = l_Lean_Syntax_getKind(v_a_3305_);
v___x_3307_ = ((lean_object*)(l_Lean_Html_Syntax_text___closed__1));
v___x_3308_ = lean_name_eq(v___x_3306_, v___x_3307_);
if (v___x_3308_ == 0)
{
lean_object* v___x_3309_; uint8_t v___x_3310_; 
v___x_3309_ = ((lean_object*)(l_Lean_Html_Syntax_comment___closed__1));
v___x_3310_ = lean_name_eq(v___x_3306_, v___x_3309_);
if (v___x_3310_ == 0)
{
lean_object* v___x_3311_; uint8_t v___x_3312_; 
v___x_3311_ = ((lean_object*)(l_Lean_Html_Syntax_interp_formatter___closed__4));
v___x_3312_ = lean_name_eq(v___x_3306_, v___x_3311_);
if (v___x_3312_ == 0)
{
lean_object* v___x_3313_; uint8_t v___x_3314_; 
v___x_3313_ = ((lean_object*)(l_Lean_Html_Syntax_interpMany_formatter___closed__1));
v___x_3314_ = lean_name_eq(v___x_3306_, v___x_3313_);
if (v___x_3314_ == 0)
{
lean_object* v___x_3315_; uint8_t v___x_3316_; 
v___x_3315_ = ((lean_object*)(l_Lean_Html_Syntax_elementKind___closed__1));
v___x_3316_ = lean_name_eq(v___x_3306_, v___x_3315_);
if (v___x_3316_ == 0)
{
lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; 
v___x_3317_ = lean_obj_once(&l_Lean_Html_Syntax_contentItem_parenthesizer___closed__1, &l_Lean_Html_Syntax_contentItem_parenthesizer___closed__1_once, _init_l_Lean_Html_Syntax_contentItem_parenthesizer___closed__1);
v___x_3318_ = l_Lean_MessageData_ofName(v___x_3306_);
v___x_3319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3319_, 0, v___x_3317_);
lean_ctor_set(v___x_3319_, 1, v___x_3318_);
v___x_3320_ = lean_obj_once(&l_Lean_Html_Syntax_contentItem_parenthesizer___closed__3, &l_Lean_Html_Syntax_contentItem_parenthesizer___closed__3_once, _init_l_Lean_Html_Syntax_contentItem_parenthesizer___closed__3);
v___x_3321_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3321_, 0, v___x_3319_);
lean_ctor_set(v___x_3321_, 1, v___x_3320_);
v___x_3322_ = l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_parenthesizer_spec__3___redArg(v___x_3321_, v_a_3301_, v_a_3302_);
return v___x_3322_;
}
else
{
lean_object* v___x_3323_; lean_object* v___x_3324_; 
lean_dec(v___x_3306_);
v___x_3323_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_content_parenthesizer___boxed), 5, 0);
v___x_3324_ = l_Lean_Html_Syntax_elementWith_parenthesizer(v___x_3323_, v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_);
return v___x_3324_;
}
}
else
{
lean_object* v___x_3325_; 
lean_dec(v___x_3306_);
v___x_3325_ = l_Lean_Html_Syntax_interpMany_parenthesizer___redArg(v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_);
return v___x_3325_;
}
}
else
{
lean_object* v___x_3326_; 
lean_dec(v___x_3306_);
v___x_3326_ = l_Lean_Html_Syntax_interp_parenthesizer___redArg(v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_);
return v___x_3326_;
}
}
else
{
lean_object* v___x_3327_; 
lean_dec(v___x_3306_);
v___x_3327_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_3300_);
return v___x_3327_;
}
}
else
{
lean_object* v___x_3328_; 
lean_dec(v___x_3306_);
v___x_3328_ = l_Lean_PrettyPrinter_Parenthesizer_visitToken___redArg(v_a_3300_);
return v___x_3328_;
}
}
else
{
lean_object* v_a_3329_; lean_object* v___x_3331_; uint8_t v_isShared_3332_; uint8_t v_isSharedCheck_3336_; 
v_a_3329_ = lean_ctor_get(v___x_3304_, 0);
v_isSharedCheck_3336_ = !lean_is_exclusive(v___x_3304_);
if (v_isSharedCheck_3336_ == 0)
{
v___x_3331_ = v___x_3304_;
v_isShared_3332_ = v_isSharedCheck_3336_;
goto v_resetjp_3330_;
}
else
{
lean_inc(v_a_3329_);
lean_dec(v___x_3304_);
v___x_3331_ = lean_box(0);
v_isShared_3332_ = v_isSharedCheck_3336_;
goto v_resetjp_3330_;
}
v_resetjp_3330_:
{
lean_object* v___x_3334_; 
if (v_isShared_3332_ == 0)
{
v___x_3334_ = v___x_3331_;
goto v_reusejp_3333_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v_a_3329_);
v___x_3334_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3333_;
}
v_reusejp_3333_:
{
return v___x_3334_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_parenthesizer_spec__1___redArg(lean_object* v_i_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_){
_start:
{
lean_object* v_zero_3343_; uint8_t v_isZero_3344_; 
v_zero_3343_ = lean_unsigned_to_nat(0u);
v_isZero_3344_ = lean_nat_dec_eq(v_i_3337_, v_zero_3343_);
if (v_isZero_3344_ == 1)
{
lean_object* v___x_3345_; lean_object* v___x_3346_; 
lean_dec(v_i_3337_);
v___x_3345_ = lean_box(0);
v___x_3346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3346_, 0, v___x_3345_);
return v___x_3346_;
}
else
{
lean_object* v_one_3347_; lean_object* v_n_3348_; lean_object* v___x_3349_; 
v_one_3347_ = lean_unsigned_to_nat(1u);
v_n_3348_ = lean_nat_sub(v_i_3337_, v_one_3347_);
lean_dec(v_i_3337_);
v___x_3349_ = l_Lean_Html_Syntax_contentItem_parenthesizer(v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_);
if (lean_obj_tag(v___x_3349_) == 0)
{
lean_dec_ref_known(v___x_3349_, 1);
v_i_3337_ = v_n_3348_;
goto _start;
}
else
{
lean_dec(v_n_3348_);
return v___x_3349_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_parenthesizer_spec__1(lean_object* v_n_3351_, lean_object* v_i_3352_, lean_object* v_a_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_){
_start:
{
lean_object* v___x_3359_; 
v___x_3359_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_parenthesizer_spec__1___redArg(v_i_3352_, v___y_3354_, v___y_3355_, v___y_3356_, v___y_3357_);
return v___x_3359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_parenthesizer_spec__1___redArg___boxed(lean_object* v_i_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_){
_start:
{
lean_object* v_res_3366_; 
v_res_3366_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_parenthesizer_spec__1___redArg(v_i_3360_, v___y_3361_, v___y_3362_, v___y_3363_, v___y_3364_);
lean_dec(v___y_3364_);
lean_dec_ref(v___y_3363_);
lean_dec(v___y_3362_);
lean_dec_ref(v___y_3361_);
return v_res_3366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_contentItem_parenthesizer___boxed(lean_object* v_a_3367_, lean_object* v_a_3368_, lean_object* v_a_3369_, lean_object* v_a_3370_, lean_object* v_a_3371_){
_start:
{
lean_object* v_res_3372_; 
v_res_3372_ = l_Lean_Html_Syntax_contentItem_parenthesizer(v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_);
lean_dec(v_a_3370_);
lean_dec_ref(v_a_3369_);
lean_dec(v_a_3368_);
lean_dec_ref(v_a_3367_);
return v_res_3372_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_parenthesizer_spec__3(lean_object* v_00_u03b1_3373_, lean_object* v_msg_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_){
_start:
{
lean_object* v___x_3380_; 
v___x_3380_ = l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_parenthesizer_spec__3___redArg(v_msg_3374_, v___y_3377_, v___y_3378_);
return v___x_3380_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_parenthesizer_spec__3___boxed(lean_object* v_00_u03b1_3381_, lean_object* v_msg_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_){
_start:
{
lean_object* v_res_3388_; 
v_res_3388_ = l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_parenthesizer_spec__3(v_00_u03b1_3381_, v_msg_3382_, v___y_3383_, v___y_3384_, v___y_3385_, v___y_3386_);
lean_dec(v___y_3386_);
lean_dec_ref(v___y_3385_);
lean_dec(v___y_3384_);
lean_dec_ref(v___y_3383_);
return v_res_3388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_formatter_spec__0___redArg(lean_object* v___y_3389_){
_start:
{
lean_object* v___x_3391_; lean_object* v_stxTrav_3392_; lean_object* v_cur_3393_; lean_object* v___x_3394_; 
v___x_3391_ = lean_st_ref_get(v___y_3389_);
v_stxTrav_3392_ = lean_ctor_get(v___x_3391_, 0);
lean_inc_ref(v_stxTrav_3392_);
lean_dec(v___x_3391_);
v_cur_3393_ = lean_ctor_get(v_stxTrav_3392_, 0);
lean_inc(v_cur_3393_);
lean_dec_ref(v_stxTrav_3392_);
v___x_3394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3394_, 0, v_cur_3393_);
return v___x_3394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_formatter_spec__0___redArg___boxed(lean_object* v___y_3395_, lean_object* v___y_3396_){
_start:
{
lean_object* v_res_3397_; 
v_res_3397_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_formatter_spec__0___redArg(v___y_3395_);
lean_dec(v___y_3395_);
return v_res_3397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_formatter_spec__0(lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_){
_start:
{
lean_object* v___x_3403_; 
v___x_3403_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_formatter_spec__0___redArg(v___y_3399_);
return v___x_3403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_formatter_spec__0___boxed(lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_){
_start:
{
lean_object* v_res_3409_; 
v_res_3409_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_formatter_spec__0(v___y_3404_, v___y_3405_, v___y_3406_, v___y_3407_);
lean_dec(v___y_3407_);
lean_dec_ref(v___y_3406_);
lean_dec(v___y_3405_);
lean_dec_ref(v___y_3404_);
return v_res_3409_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_formatter_spec__3___redArg(lean_object* v_msg_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_){
_start:
{
lean_object* v_ref_3414_; lean_object* v___x_3415_; lean_object* v_a_3416_; lean_object* v___x_3418_; uint8_t v_isShared_3419_; uint8_t v_isSharedCheck_3424_; 
v_ref_3414_ = lean_ctor_get(v___y_3411_, 2);
v___x_3415_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Html_Syntax_decodeCharacterReferenceAt_spec__0_spec__0_spec__1(v_msg_3410_, v___y_3411_, v___y_3412_);
v_a_3416_ = lean_ctor_get(v___x_3415_, 0);
v_isSharedCheck_3424_ = !lean_is_exclusive(v___x_3415_);
if (v_isSharedCheck_3424_ == 0)
{
v___x_3418_ = v___x_3415_;
v_isShared_3419_ = v_isSharedCheck_3424_;
goto v_resetjp_3417_;
}
else
{
lean_inc(v_a_3416_);
lean_dec(v___x_3415_);
v___x_3418_ = lean_box(0);
v_isShared_3419_ = v_isSharedCheck_3424_;
goto v_resetjp_3417_;
}
v_resetjp_3417_:
{
lean_object* v___x_3420_; lean_object* v___x_3422_; 
lean_inc(v_ref_3414_);
v___x_3420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3420_, 0, v_ref_3414_);
lean_ctor_set(v___x_3420_, 1, v_a_3416_);
if (v_isShared_3419_ == 0)
{
lean_ctor_set_tag(v___x_3418_, 1);
lean_ctor_set(v___x_3418_, 0, v___x_3420_);
v___x_3422_ = v___x_3418_;
goto v_reusejp_3421_;
}
else
{
lean_object* v_reuseFailAlloc_3423_; 
v_reuseFailAlloc_3423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3423_, 0, v___x_3420_);
v___x_3422_ = v_reuseFailAlloc_3423_;
goto v_reusejp_3421_;
}
v_reusejp_3421_:
{
return v___x_3422_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_formatter_spec__3___redArg___boxed(lean_object* v_msg_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_){
_start:
{
lean_object* v_res_3429_; 
v_res_3429_ = l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_formatter_spec__3___redArg(v_msg_3425_, v___y_3426_, v___y_3427_);
lean_dec(v___y_3427_);
lean_dec_ref(v___y_3426_);
return v_res_3429_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_formatter_spec__1___boxed(lean_object* v_n_3430_, lean_object* v_i_3431_, lean_object* v_a_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_){
_start:
{
lean_object* v_res_3438_; 
v_res_3438_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_formatter_spec__1(v_n_3430_, v_i_3431_, v_a_3432_, v___y_3433_, v___y_3434_, v___y_3435_, v___y_3436_);
lean_dec(v___y_3436_);
lean_dec_ref(v___y_3435_);
lean_dec(v___y_3434_);
lean_dec_ref(v___y_3433_);
lean_dec(v_n_3430_);
return v_res_3438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_content_formatter___lam__0(lean_object* v___x_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_){
_start:
{
lean_object* v___x_3445_; 
v___x_3445_ = l_Lean_PrettyPrinter_Formatter_checkKind___redArg(v___x_3439_, v___y_3441_, v___y_3442_, v___y_3443_);
if (lean_obj_tag(v___x_3445_) == 0)
{
lean_object* v___x_3446_; 
lean_dec_ref_known(v___x_3445_, 1);
v___x_3446_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_formatter_spec__0___redArg(v___y_3441_);
if (lean_obj_tag(v___x_3446_) == 0)
{
lean_object* v_a_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; 
v_a_3447_ = lean_ctor_get(v___x_3446_, 0);
lean_inc(v_a_3447_);
lean_dec_ref_known(v___x_3446_, 1);
v___x_3448_ = l_Lean_Syntax_getArgs(v_a_3447_);
lean_dec(v_a_3447_);
v___x_3449_ = lean_array_get_size(v___x_3448_);
lean_dec_ref(v___x_3448_);
v___x_3450_ = lean_alloc_closure((void*)(l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_formatter_spec__1___boxed), 8, 3);
lean_closure_set(v___x_3450_, 0, v___x_3449_);
lean_closure_set(v___x_3450_, 1, v___x_3449_);
lean_closure_set(v___x_3450_, 2, lean_box(0));
v___x_3451_ = l_Lean_PrettyPrinter_Formatter_visitArgs(v___x_3450_, v___y_3440_, v___y_3441_, v___y_3442_, v___y_3443_);
return v___x_3451_;
}
else
{
lean_object* v_a_3452_; lean_object* v___x_3454_; uint8_t v_isShared_3455_; uint8_t v_isSharedCheck_3459_; 
v_a_3452_ = lean_ctor_get(v___x_3446_, 0);
v_isSharedCheck_3459_ = !lean_is_exclusive(v___x_3446_);
if (v_isSharedCheck_3459_ == 0)
{
v___x_3454_ = v___x_3446_;
v_isShared_3455_ = v_isSharedCheck_3459_;
goto v_resetjp_3453_;
}
else
{
lean_inc(v_a_3452_);
lean_dec(v___x_3446_);
v___x_3454_ = lean_box(0);
v_isShared_3455_ = v_isSharedCheck_3459_;
goto v_resetjp_3453_;
}
v_resetjp_3453_:
{
lean_object* v___x_3457_; 
if (v_isShared_3455_ == 0)
{
v___x_3457_ = v___x_3454_;
goto v_reusejp_3456_;
}
else
{
lean_object* v_reuseFailAlloc_3458_; 
v_reuseFailAlloc_3458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3458_, 0, v_a_3452_);
v___x_3457_ = v_reuseFailAlloc_3458_;
goto v_reusejp_3456_;
}
v_reusejp_3456_:
{
return v___x_3457_;
}
}
}
}
else
{
return v___x_3445_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_content_formatter___lam__0___boxed(lean_object* v___x_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_){
_start:
{
lean_object* v_res_3466_; 
v_res_3466_ = l_Lean_Html_Syntax_content_formatter___lam__0(v___x_3460_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_);
lean_dec(v___y_3464_);
lean_dec_ref(v___y_3463_);
lean_dec(v___y_3462_);
lean_dec_ref(v___y_3461_);
return v_res_3466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_content_formatter(lean_object* v_a_3474_, lean_object* v_a_3475_, lean_object* v_a_3476_, lean_object* v_a_3477_){
_start:
{
lean_object* v___x_3479_; lean_object* v___f_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; 
v___x_3479_ = ((lean_object*)(l_Lean_Html_Syntax_contentKind___closed__1));
v___f_3480_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_content_formatter___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3480_, 0, v___x_3479_);
v___x_3481_ = ((lean_object*)(l_Lean_Html_Syntax_content_formatter___closed__0));
v___x_3482_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_3481_, v___f_3480_, v_a_3474_, v_a_3475_, v_a_3476_, v_a_3477_);
return v___x_3482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_content_formatter___boxed(lean_object* v_a_3483_, lean_object* v_a_3484_, lean_object* v_a_3485_, lean_object* v_a_3486_, lean_object* v_a_3487_){
_start:
{
lean_object* v_res_3488_; 
v_res_3488_ = l_Lean_Html_Syntax_content_formatter(v_a_3483_, v_a_3484_, v_a_3485_, v_a_3486_);
lean_dec(v_a_3486_);
lean_dec_ref(v_a_3485_);
lean_dec(v_a_3484_);
lean_dec_ref(v_a_3483_);
return v_res_3488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_contentItem_formatter(lean_object* v_a_3489_, lean_object* v_a_3490_, lean_object* v_a_3491_, lean_object* v_a_3492_){
_start:
{
lean_object* v___x_3494_; 
v___x_3494_ = l_Lean_Syntax_MonadTraverser_getCur___at___00Lean_Html_Syntax_content_formatter_spec__0___redArg(v_a_3490_);
if (lean_obj_tag(v___x_3494_) == 0)
{
lean_object* v_a_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; uint8_t v___x_3498_; 
v_a_3495_ = lean_ctor_get(v___x_3494_, 0);
lean_inc(v_a_3495_);
lean_dec_ref_known(v___x_3494_, 1);
v___x_3496_ = l_Lean_Syntax_getKind(v_a_3495_);
v___x_3497_ = ((lean_object*)(l_Lean_Html_Syntax_text___closed__1));
v___x_3498_ = lean_name_eq(v___x_3496_, v___x_3497_);
if (v___x_3498_ == 0)
{
lean_object* v___x_3499_; uint8_t v___x_3500_; 
v___x_3499_ = ((lean_object*)(l_Lean_Html_Syntax_comment___closed__1));
v___x_3500_ = lean_name_eq(v___x_3496_, v___x_3499_);
if (v___x_3500_ == 0)
{
lean_object* v___x_3501_; uint8_t v___x_3502_; 
v___x_3501_ = ((lean_object*)(l_Lean_Html_Syntax_interp_formatter___closed__4));
v___x_3502_ = lean_name_eq(v___x_3496_, v___x_3501_);
if (v___x_3502_ == 0)
{
lean_object* v___x_3503_; uint8_t v___x_3504_; 
v___x_3503_ = ((lean_object*)(l_Lean_Html_Syntax_interpMany_formatter___closed__1));
v___x_3504_ = lean_name_eq(v___x_3496_, v___x_3503_);
if (v___x_3504_ == 0)
{
lean_object* v___x_3505_; uint8_t v___x_3506_; 
v___x_3505_ = ((lean_object*)(l_Lean_Html_Syntax_elementKind___closed__1));
v___x_3506_ = lean_name_eq(v___x_3496_, v___x_3505_);
if (v___x_3506_ == 0)
{
lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; 
v___x_3507_ = lean_obj_once(&l_Lean_Html_Syntax_contentItem_parenthesizer___closed__1, &l_Lean_Html_Syntax_contentItem_parenthesizer___closed__1_once, _init_l_Lean_Html_Syntax_contentItem_parenthesizer___closed__1);
v___x_3508_ = l_Lean_MessageData_ofName(v___x_3496_);
v___x_3509_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3509_, 0, v___x_3507_);
lean_ctor_set(v___x_3509_, 1, v___x_3508_);
v___x_3510_ = lean_obj_once(&l_Lean_Html_Syntax_contentItem_parenthesizer___closed__3, &l_Lean_Html_Syntax_contentItem_parenthesizer___closed__3_once, _init_l_Lean_Html_Syntax_contentItem_parenthesizer___closed__3);
v___x_3511_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3511_, 0, v___x_3509_);
lean_ctor_set(v___x_3511_, 1, v___x_3510_);
v___x_3512_ = l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_formatter_spec__3___redArg(v___x_3511_, v_a_3491_, v_a_3492_);
return v___x_3512_;
}
else
{
lean_object* v___x_3513_; lean_object* v___x_3514_; 
lean_dec(v___x_3496_);
v___x_3513_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_content_formatter___boxed), 5, 0);
v___x_3514_ = l_Lean_Html_Syntax_elementWith_formatter(v___x_3513_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3514_;
}
}
else
{
lean_object* v___x_3515_; 
lean_dec(v___x_3496_);
v___x_3515_ = l_Lean_Html_Syntax_interpMany_formatter(v___x_3502_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3515_;
}
}
else
{
lean_object* v___x_3516_; 
lean_dec(v___x_3496_);
v___x_3516_ = l_Lean_Html_Syntax_interp_formatter(v___x_3500_, v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3516_;
}
}
else
{
lean_object* v___x_3517_; 
lean_dec(v___x_3496_);
v___x_3517_ = l_Lean_Html_Syntax_comment_formatter(v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3517_;
}
}
else
{
lean_object* v___x_3518_; 
lean_dec(v___x_3496_);
v___x_3518_ = l_Lean_Html_Syntax_text_formatter(v_a_3489_, v_a_3490_, v_a_3491_, v_a_3492_);
return v___x_3518_;
}
}
else
{
lean_object* v_a_3519_; lean_object* v___x_3521_; uint8_t v_isShared_3522_; uint8_t v_isSharedCheck_3526_; 
v_a_3519_ = lean_ctor_get(v___x_3494_, 0);
v_isSharedCheck_3526_ = !lean_is_exclusive(v___x_3494_);
if (v_isSharedCheck_3526_ == 0)
{
v___x_3521_ = v___x_3494_;
v_isShared_3522_ = v_isSharedCheck_3526_;
goto v_resetjp_3520_;
}
else
{
lean_inc(v_a_3519_);
lean_dec(v___x_3494_);
v___x_3521_ = lean_box(0);
v_isShared_3522_ = v_isSharedCheck_3526_;
goto v_resetjp_3520_;
}
v_resetjp_3520_:
{
lean_object* v___x_3524_; 
if (v_isShared_3522_ == 0)
{
v___x_3524_ = v___x_3521_;
goto v_reusejp_3523_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v_a_3519_);
v___x_3524_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3523_;
}
v_reusejp_3523_:
{
return v___x_3524_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_formatter_spec__1___redArg(lean_object* v_i_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_){
_start:
{
lean_object* v_zero_3533_; uint8_t v_isZero_3534_; 
v_zero_3533_ = lean_unsigned_to_nat(0u);
v_isZero_3534_ = lean_nat_dec_eq(v_i_3527_, v_zero_3533_);
if (v_isZero_3534_ == 1)
{
lean_object* v___x_3535_; lean_object* v___x_3536_; 
lean_dec(v_i_3527_);
v___x_3535_ = lean_box(0);
v___x_3536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3535_);
return v___x_3536_;
}
else
{
lean_object* v_one_3537_; lean_object* v_n_3538_; lean_object* v___x_3539_; 
v_one_3537_ = lean_unsigned_to_nat(1u);
v_n_3538_ = lean_nat_sub(v_i_3527_, v_one_3537_);
lean_dec(v_i_3527_);
v___x_3539_ = l_Lean_Html_Syntax_contentItem_formatter(v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_);
if (lean_obj_tag(v___x_3539_) == 0)
{
lean_dec_ref_known(v___x_3539_, 1);
v_i_3527_ = v_n_3538_;
goto _start;
}
else
{
lean_dec(v_n_3538_);
return v___x_3539_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_formatter_spec__1(lean_object* v_n_3541_, lean_object* v_i_3542_, lean_object* v_a_3543_, lean_object* v___y_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_){
_start:
{
lean_object* v___x_3549_; 
v___x_3549_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_formatter_spec__1___redArg(v_i_3542_, v___y_3544_, v___y_3545_, v___y_3546_, v___y_3547_);
return v___x_3549_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_formatter_spec__1___redArg___boxed(lean_object* v_i_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_){
_start:
{
lean_object* v_res_3556_; 
v_res_3556_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Html_Syntax_content_formatter_spec__1___redArg(v_i_3550_, v___y_3551_, v___y_3552_, v___y_3553_, v___y_3554_);
lean_dec(v___y_3554_);
lean_dec_ref(v___y_3553_);
lean_dec(v___y_3552_);
lean_dec_ref(v___y_3551_);
return v_res_3556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_contentItem_formatter___boxed(lean_object* v_a_3557_, lean_object* v_a_3558_, lean_object* v_a_3559_, lean_object* v_a_3560_, lean_object* v_a_3561_){
_start:
{
lean_object* v_res_3562_; 
v_res_3562_ = l_Lean_Html_Syntax_contentItem_formatter(v_a_3557_, v_a_3558_, v_a_3559_, v_a_3560_);
lean_dec(v_a_3560_);
lean_dec_ref(v_a_3559_);
lean_dec(v_a_3558_);
lean_dec_ref(v_a_3557_);
return v_res_3562_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_formatter_spec__3(lean_object* v_00_u03b1_3563_, lean_object* v_msg_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_, lean_object* v___y_3568_){
_start:
{
lean_object* v___x_3570_; 
v___x_3570_ = l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_formatter_spec__3___redArg(v_msg_3564_, v___y_3567_, v___y_3568_);
return v___x_3570_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_formatter_spec__3___boxed(lean_object* v_00_u03b1_3571_, lean_object* v_msg_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_){
_start:
{
lean_object* v_res_3578_; 
v_res_3578_ = l_Lean_throwError___at___00Lean_Html_Syntax_contentItem_formatter_spec__3(v_00_u03b1_3571_, v_msg_3572_, v___y_3573_, v___y_3574_, v___y_3575_, v___y_3576_);
lean_dec(v___y_3576_);
lean_dec_ref(v___y_3575_);
lean_dec(v___y_3574_);
lean_dec_ref(v___y_3573_);
return v_res_3578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_element_formatter(lean_object* v_a_3580_, lean_object* v_a_3581_, lean_object* v_a_3582_, lean_object* v_a_3583_){
_start:
{
lean_object* v___x_3585_; lean_object* v___x_3586_; 
v___x_3585_ = ((lean_object*)(l_Lean_Html_Syntax_element_formatter___closed__0));
v___x_3586_ = l_Lean_Html_Syntax_elementWith_formatter(v___x_3585_, v_a_3580_, v_a_3581_, v_a_3582_, v_a_3583_);
return v___x_3586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_element_formatter___boxed(lean_object* v_a_3587_, lean_object* v_a_3588_, lean_object* v_a_3589_, lean_object* v_a_3590_, lean_object* v_a_3591_){
_start:
{
lean_object* v_res_3592_; 
v_res_3592_ = l_Lean_Html_Syntax_element_formatter(v_a_3587_, v_a_3588_, v_a_3589_, v_a_3590_);
lean_dec(v_a_3590_);
lean_dec_ref(v_a_3589_);
lean_dec(v_a_3588_);
lean_dec_ref(v_a_3587_);
return v_res_3592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_element_parenthesizer(lean_object* v_a_3594_, lean_object* v_a_3595_, lean_object* v_a_3596_, lean_object* v_a_3597_){
_start:
{
lean_object* v___x_3599_; lean_object* v___x_3600_; 
v___x_3599_ = ((lean_object*)(l_Lean_Html_Syntax_element_parenthesizer___closed__0));
v___x_3600_ = l_Lean_Html_Syntax_elementWith_parenthesizer(v___x_3599_, v_a_3594_, v_a_3595_, v_a_3596_, v_a_3597_);
return v___x_3600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_element_parenthesizer___boxed(lean_object* v_a_3601_, lean_object* v_a_3602_, lean_object* v_a_3603_, lean_object* v_a_3604_, lean_object* v_a_3605_){
_start:
{
lean_object* v_res_3606_; 
v_res_3606_ = l_Lean_Html_Syntax_element_parenthesizer(v_a_3601_, v_a_3602_, v_a_3603_, v_a_3604_);
lean_dec(v_a_3604_);
lean_dec_ref(v_a_3603_);
lean_dec(v_a_3602_);
lean_dec_ref(v_a_3601_);
return v_res_3606_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_element___closed__0(void){
_start:
{
lean_object* v___x_3607_; lean_object* v___x_3608_; 
v___x_3607_ = l_Lean_Html_Syntax_content;
v___x_3608_ = l_Lean_Html_Syntax_elementWith(v___x_3607_);
return v___x_3608_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_element(void){
_start:
{
lean_object* v___x_3609_; 
v___x_3609_ = lean_obj_once(&l_Lean_Html_Syntax_element___closed__0, &l_Lean_Html_Syntax_element___closed__0_once, _init_l_Lean_Html_Syntax_element___closed__0);
return v___x_3609_;
}
}
LEAN_EXPORT lean_object* l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0(lean_object* v_x_3616_, lean_object* v_x_3617_){
_start:
{
if (lean_obj_tag(v_x_3616_) == 0)
{
lean_object* v_val_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; 
v_val_3618_ = lean_ctor_get(v_x_3616_, 0);
lean_inc(v_val_3618_);
lean_dec_ref_known(v_x_3616_, 1);
v___x_3619_ = ((lean_object*)(l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0___closed__1));
v___x_3620_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_val_3618_);
v___x_3621_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3621_, 0, v___x_3619_);
lean_ctor_set(v___x_3621_, 1, v___x_3620_);
v___x_3622_ = l_Repr_addAppParen(v___x_3621_, v_x_3617_);
return v___x_3622_;
}
else
{
lean_object* v_val_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; 
v_val_3623_ = lean_ctor_get(v_x_3616_, 0);
lean_inc(v_val_3623_);
lean_dec_ref_known(v_x_3616_, 1);
v___x_3624_ = ((lean_object*)(l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0___closed__3));
v___x_3625_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_val_3623_);
v___x_3626_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3626_, 0, v___x_3624_);
lean_ctor_set(v___x_3626_, 1, v___x_3625_);
v___x_3627_ = l_Repr_addAppParen(v___x_3626_, v_x_3617_);
return v___x_3627_;
}
}
}
LEAN_EXPORT lean_object* l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0___boxed(lean_object* v_x_3628_, lean_object* v_x_3629_){
_start:
{
lean_object* v_res_3630_; 
v_res_3630_ = l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0(v_x_3628_, v_x_3629_);
lean_dec(v_x_3629_);
return v_res_3630_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__1___lam__0(lean_object* v___y_3631_){
_start:
{
lean_object* v___x_3632_; lean_object* v___x_3633_; 
v___x_3632_ = lean_unsigned_to_nat(0u);
v___x_3633_ = l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0(v___y_3631_, v___x_3632_);
return v___x_3633_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__1_spec__2_spec__3(lean_object* v_x_3634_, lean_object* v_x_3635_, lean_object* v_x_3636_){
_start:
{
if (lean_obj_tag(v_x_3636_) == 0)
{
lean_dec(v_x_3634_);
return v_x_3635_;
}
else
{
lean_object* v_head_3637_; lean_object* v_tail_3638_; lean_object* v___x_3640_; uint8_t v_isShared_3641_; uint8_t v_isSharedCheck_3649_; 
v_head_3637_ = lean_ctor_get(v_x_3636_, 0);
v_tail_3638_ = lean_ctor_get(v_x_3636_, 1);
v_isSharedCheck_3649_ = !lean_is_exclusive(v_x_3636_);
if (v_isSharedCheck_3649_ == 0)
{
v___x_3640_ = v_x_3636_;
v_isShared_3641_ = v_isSharedCheck_3649_;
goto v_resetjp_3639_;
}
else
{
lean_inc(v_tail_3638_);
lean_inc(v_head_3637_);
lean_dec(v_x_3636_);
v___x_3640_ = lean_box(0);
v_isShared_3641_ = v_isSharedCheck_3649_;
goto v_resetjp_3639_;
}
v_resetjp_3639_:
{
lean_object* v___x_3643_; 
lean_inc(v_x_3634_);
if (v_isShared_3641_ == 0)
{
lean_ctor_set_tag(v___x_3640_, 5);
lean_ctor_set(v___x_3640_, 1, v_x_3634_);
lean_ctor_set(v___x_3640_, 0, v_x_3635_);
v___x_3643_ = v___x_3640_;
goto v_reusejp_3642_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v_x_3635_);
lean_ctor_set(v_reuseFailAlloc_3648_, 1, v_x_3634_);
v___x_3643_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3642_;
}
v_reusejp_3642_:
{
lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; 
v___x_3644_ = lean_unsigned_to_nat(0u);
v___x_3645_ = l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0(v_head_3637_, v___x_3644_);
v___x_3646_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3646_, 0, v___x_3643_);
lean_ctor_set(v___x_3646_, 1, v___x_3645_);
v_x_3635_ = v___x_3646_;
v_x_3636_ = v_tail_3638_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__1_spec__2(lean_object* v_x_3650_, lean_object* v_x_3651_, lean_object* v_x_3652_){
_start:
{
if (lean_obj_tag(v_x_3652_) == 0)
{
lean_dec(v_x_3650_);
return v_x_3651_;
}
else
{
lean_object* v_head_3653_; lean_object* v_tail_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3665_; 
v_head_3653_ = lean_ctor_get(v_x_3652_, 0);
v_tail_3654_ = lean_ctor_get(v_x_3652_, 1);
v_isSharedCheck_3665_ = !lean_is_exclusive(v_x_3652_);
if (v_isSharedCheck_3665_ == 0)
{
v___x_3656_ = v_x_3652_;
v_isShared_3657_ = v_isSharedCheck_3665_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_tail_3654_);
lean_inc(v_head_3653_);
lean_dec(v_x_3652_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3665_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v___x_3659_; 
lean_inc(v_x_3650_);
if (v_isShared_3657_ == 0)
{
lean_ctor_set_tag(v___x_3656_, 5);
lean_ctor_set(v___x_3656_, 1, v_x_3650_);
lean_ctor_set(v___x_3656_, 0, v_x_3651_);
v___x_3659_ = v___x_3656_;
goto v_reusejp_3658_;
}
else
{
lean_object* v_reuseFailAlloc_3664_; 
v_reuseFailAlloc_3664_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3664_, 0, v_x_3651_);
lean_ctor_set(v_reuseFailAlloc_3664_, 1, v_x_3650_);
v___x_3659_ = v_reuseFailAlloc_3664_;
goto v_reusejp_3658_;
}
v_reusejp_3658_:
{
lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
v___x_3660_ = lean_unsigned_to_nat(0u);
v___x_3661_ = l_Sum_repr___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__0(v_head_3653_, v___x_3660_);
v___x_3662_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3662_, 0, v___x_3659_);
lean_ctor_set(v___x_3662_, 1, v___x_3661_);
v___x_3663_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__1_spec__2_spec__3(v_x_3650_, v___x_3662_, v_tail_3654_);
return v___x_3663_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__1(lean_object* v_x_3666_, lean_object* v_x_3667_){
_start:
{
if (lean_obj_tag(v_x_3666_) == 0)
{
lean_object* v___x_3668_; 
lean_dec(v_x_3667_);
v___x_3668_ = lean_box(0);
return v___x_3668_;
}
else
{
lean_object* v_tail_3669_; 
v_tail_3669_ = lean_ctor_get(v_x_3666_, 1);
if (lean_obj_tag(v_tail_3669_) == 0)
{
lean_object* v_head_3670_; lean_object* v___x_3671_; 
lean_dec(v_x_3667_);
v_head_3670_ = lean_ctor_get(v_x_3666_, 0);
lean_inc(v_head_3670_);
lean_dec_ref_known(v_x_3666_, 2);
v___x_3671_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__1___lam__0(v_head_3670_);
return v___x_3671_;
}
else
{
lean_object* v_head_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; 
lean_inc(v_tail_3669_);
v_head_3672_ = lean_ctor_get(v_x_3666_, 0);
lean_inc(v_head_3672_);
lean_dec_ref_known(v_x_3666_, 2);
v___x_3673_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__1___lam__0(v_head_3672_);
v___x_3674_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__1_spec__2(v_x_3667_, v___x_3673_, v_tail_3669_);
return v___x_3674_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0(lean_object* v_xs_3675_){
_start:
{
lean_object* v___x_3676_; lean_object* v___x_3677_; uint8_t v___x_3678_; 
v___x_3676_ = lean_array_get_size(v_xs_3675_);
v___x_3677_ = lean_unsigned_to_nat(0u);
v___x_3678_ = lean_nat_dec_eq(v___x_3676_, v___x_3677_);
if (v___x_3678_ == 0)
{
lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; 
v___x_3679_ = lean_array_to_list(v_xs_3675_);
v___x_3680_ = ((lean_object*)(l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__1));
v___x_3681_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0_spec__1(v___x_3679_, v___x_3680_);
v___x_3682_ = lean_obj_once(&l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__4, &l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__4_once, _init_l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__4);
v___x_3683_ = ((lean_object*)(l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__5));
v___x_3684_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3684_, 0, v___x_3683_);
lean_ctor_set(v___x_3684_, 1, v___x_3681_);
v___x_3685_ = ((lean_object*)(l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__6));
v___x_3686_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3686_, 0, v___x_3684_);
lean_ctor_set(v___x_3686_, 1, v___x_3685_);
v___x_3687_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3687_, 0, v___x_3682_);
lean_ctor_set(v___x_3687_, 1, v___x_3686_);
v___x_3688_ = l_Std_Format_fill(v___x_3687_);
return v___x_3688_;
}
else
{
lean_object* v___x_3689_; 
lean_dec_ref(v_xs_3675_);
v___x_3689_ = ((lean_object*)(l_Array_repr___at___00Lean_Html_Syntax_instReprTagView_repr_spec__0___closed__8));
return v___x_3689_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg(lean_object* v_x_3699_){
_start:
{
lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; uint8_t v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; 
v___x_3700_ = ((lean_object*)(l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg___closed__3));
v___x_3701_ = lean_obj_once(&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__12, &l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__12_once, _init_l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__12);
v___x_3702_ = l_Array_repr___at___00Lean_Html_Syntax_instReprTextCommentsView_repr_spec__0(v_x_3699_);
v___x_3703_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3703_, 0, v___x_3701_);
lean_ctor_set(v___x_3703_, 1, v___x_3702_);
v___x_3704_ = 0;
v___x_3705_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3705_, 0, v___x_3703_);
lean_ctor_set_uint8(v___x_3705_, sizeof(void*)*1, v___x_3704_);
v___x_3706_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3706_, 0, v___x_3700_);
lean_ctor_set(v___x_3706_, 1, v___x_3705_);
v___x_3707_ = lean_obj_once(&l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__18, &l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__18_once, _init_l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__18);
v___x_3708_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__19));
v___x_3709_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3709_, 0, v___x_3708_);
lean_ctor_set(v___x_3709_, 1, v___x_3706_);
v___x_3710_ = ((lean_object*)(l_Lean_Html_Syntax_instReprInterpView_repr___redArg___closed__20));
v___x_3711_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3711_, 0, v___x_3709_);
lean_ctor_set(v___x_3711_, 1, v___x_3710_);
v___x_3712_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3712_, 0, v___x_3707_);
lean_ctor_set(v___x_3712_, 1, v___x_3711_);
v___x_3713_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3713_, 0, v___x_3712_);
lean_ctor_set_uint8(v___x_3713_, sizeof(void*)*1, v___x_3704_);
return v___x_3713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprTextCommentsView_repr(lean_object* v_x_3714_, lean_object* v_prec_3715_){
_start:
{
lean_object* v___x_3716_; 
v___x_3716_ = l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg(v_x_3714_);
return v___x_3716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprTextCommentsView_repr___boxed(lean_object* v_x_3717_, lean_object* v_prec_3718_){
_start:
{
lean_object* v_res_3719_; 
v_res_3719_ = l_Lean_Html_Syntax_instReprTextCommentsView_repr(v_x_3717_, v_prec_3718_);
lean_dec(v_prec_3718_);
return v_res_3719_;
}
}
LEAN_EXPORT uint8_t l_Sum_instBEq_beq___at___00Lean_Html_Syntax_instBEqTextCommentsView_beq_spec__0(lean_object* v_x_3726_, lean_object* v_x_3727_){
_start:
{
if (lean_obj_tag(v_x_3726_) == 0)
{
if (lean_obj_tag(v_x_3727_) == 0)
{
lean_object* v_val_3728_; lean_object* v_val_3729_; uint8_t v___x_3730_; 
v_val_3728_ = lean_ctor_get(v_x_3726_, 0);
v_val_3729_ = lean_ctor_get(v_x_3727_, 0);
v___x_3730_ = l_Lean_Syntax_structEq(v_val_3728_, v_val_3729_);
return v___x_3730_;
}
else
{
uint8_t v___x_3731_; 
v___x_3731_ = 0;
return v___x_3731_;
}
}
else
{
if (lean_obj_tag(v_x_3727_) == 1)
{
lean_object* v_val_3732_; lean_object* v_val_3733_; uint8_t v___x_3734_; 
v_val_3732_ = lean_ctor_get(v_x_3726_, 0);
v_val_3733_ = lean_ctor_get(v_x_3727_, 0);
v___x_3734_ = l_Lean_Syntax_structEq(v_val_3732_, v_val_3733_);
return v___x_3734_;
}
else
{
uint8_t v___x_3735_; 
v___x_3735_ = 0;
return v___x_3735_;
}
}
}
}
LEAN_EXPORT lean_object* l_Sum_instBEq_beq___at___00Lean_Html_Syntax_instBEqTextCommentsView_beq_spec__0___boxed(lean_object* v_x_3736_, lean_object* v_x_3737_){
_start:
{
uint8_t v_res_3738_; lean_object* v_r_3739_; 
v_res_3738_ = l_Sum_instBEq_beq___at___00Lean_Html_Syntax_instBEqTextCommentsView_beq_spec__0(v_x_3736_, v_x_3737_);
lean_dec_ref(v_x_3737_);
lean_dec_ref(v_x_3736_);
v_r_3739_ = lean_box(v_res_3738_);
return v_r_3739_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTextCommentsView_beq_spec__1___redArg(lean_object* v_xs_3740_, lean_object* v_ys_3741_, lean_object* v_x_3742_){
_start:
{
lean_object* v_zero_3743_; uint8_t v_isZero_3744_; 
v_zero_3743_ = lean_unsigned_to_nat(0u);
v_isZero_3744_ = lean_nat_dec_eq(v_x_3742_, v_zero_3743_);
if (v_isZero_3744_ == 1)
{
lean_dec(v_x_3742_);
return v_isZero_3744_;
}
else
{
lean_object* v_one_3745_; lean_object* v_n_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; uint8_t v___x_3749_; 
v_one_3745_ = lean_unsigned_to_nat(1u);
v_n_3746_ = lean_nat_sub(v_x_3742_, v_one_3745_);
lean_dec(v_x_3742_);
v___x_3747_ = lean_array_fget_borrowed(v_xs_3740_, v_n_3746_);
v___x_3748_ = lean_array_fget_borrowed(v_ys_3741_, v_n_3746_);
v___x_3749_ = l_Sum_instBEq_beq___at___00Lean_Html_Syntax_instBEqTextCommentsView_beq_spec__0(v___x_3747_, v___x_3748_);
if (v___x_3749_ == 0)
{
lean_dec(v_n_3746_);
return v___x_3749_;
}
else
{
v_x_3742_ = v_n_3746_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTextCommentsView_beq_spec__1___redArg___boxed(lean_object* v_xs_3751_, lean_object* v_ys_3752_, lean_object* v_x_3753_){
_start:
{
uint8_t v_res_3754_; lean_object* v_r_3755_; 
v_res_3754_ = l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTextCommentsView_beq_spec__1___redArg(v_xs_3751_, v_ys_3752_, v_x_3753_);
lean_dec_ref(v_ys_3752_);
lean_dec_ref(v_xs_3751_);
v_r_3755_ = lean_box(v_res_3754_);
return v_r_3755_;
}
}
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_instBEqTextCommentsView_beq(lean_object* v_x_3756_, lean_object* v_x_3757_){
_start:
{
lean_object* v___x_3758_; lean_object* v___x_3759_; uint8_t v___x_3760_; 
v___x_3758_ = lean_array_get_size(v_x_3756_);
v___x_3759_ = lean_array_get_size(v_x_3757_);
v___x_3760_ = lean_nat_dec_eq(v___x_3758_, v___x_3759_);
if (v___x_3760_ == 0)
{
return v___x_3760_;
}
else
{
uint8_t v___x_3761_; 
v___x_3761_ = l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTextCommentsView_beq_spec__1___redArg(v_x_3756_, v_x_3757_, v___x_3758_);
return v___x_3761_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqTextCommentsView_beq___boxed(lean_object* v_x_3762_, lean_object* v_x_3763_){
_start:
{
uint8_t v_res_3764_; lean_object* v_r_3765_; 
v_res_3764_ = l_Lean_Html_Syntax_instBEqTextCommentsView_beq(v_x_3762_, v_x_3763_);
lean_dec_ref(v_x_3763_);
lean_dec_ref(v_x_3762_);
v_r_3765_ = lean_box(v_res_3764_);
return v_r_3765_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTextCommentsView_beq_spec__1(lean_object* v_xs_3766_, lean_object* v_ys_3767_, lean_object* v_hsz_3768_, lean_object* v_x_3769_, lean_object* v_x_3770_){
_start:
{
uint8_t v___x_3771_; 
v___x_3771_ = l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTextCommentsView_beq_spec__1___redArg(v_xs_3766_, v_ys_3767_, v_x_3769_);
return v___x_3771_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTextCommentsView_beq_spec__1___boxed(lean_object* v_xs_3772_, lean_object* v_ys_3773_, lean_object* v_hsz_3774_, lean_object* v_x_3775_, lean_object* v_x_3776_){
_start:
{
uint8_t v_res_3777_; lean_object* v_r_3778_; 
v_res_3777_ = l_Array_isEqvAux___at___00Lean_Html_Syntax_instBEqTextCommentsView_beq_spec__1(v_xs_3772_, v_ys_3773_, v_hsz_3774_, v_x_3775_, v_x_3776_);
lean_dec_ref(v_ys_3773_);
lean_dec_ref(v_xs_3772_);
v_r_3778_ = lean_box(v_res_3777_);
return v_r_3778_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Html_Syntax_TextCommentsView_getText_spec__0(lean_object* v_as_3781_, size_t v_sz_3782_, size_t v_i_3783_, lean_object* v_b_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_){
_start:
{
lean_object* v_a_3789_; uint8_t v___x_3793_; 
v___x_3793_ = lean_usize_dec_lt(v_i_3783_, v_sz_3782_);
if (v___x_3793_ == 0)
{
lean_object* v___x_3794_; 
v___x_3794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3794_, 0, v_b_3784_);
return v___x_3794_;
}
else
{
lean_object* v_a_3795_; 
v_a_3795_ = lean_array_uget_borrowed(v_as_3781_, v_i_3783_);
if (lean_obj_tag(v_a_3795_) == 0)
{
lean_object* v_val_3796_; lean_object* v_toCold_3797_; lean_object* v_currRecDepth_3798_; lean_object* v_ref_3799_; uint16_t v_optionFlags_3800_; uint8_t v_suppressElabErrors_3801_; uint8_t v_checkDeprecated_3802_; uint8_t v_isRecordingDeps_3803_; lean_object* v_ref_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; 
v_val_3796_ = lean_ctor_get(v_a_3795_, 0);
v_toCold_3797_ = lean_ctor_get(v___y_3785_, 0);
v_currRecDepth_3798_ = lean_ctor_get(v___y_3785_, 1);
v_ref_3799_ = lean_ctor_get(v___y_3785_, 2);
v_optionFlags_3800_ = lean_ctor_get_uint16(v___y_3785_, sizeof(void*)*3);
v_suppressElabErrors_3801_ = lean_ctor_get_uint8(v___y_3785_, sizeof(void*)*3 + 2);
v_checkDeprecated_3802_ = lean_ctor_get_uint8(v___y_3785_, sizeof(void*)*3 + 3);
v_isRecordingDeps_3803_ = lean_ctor_get_uint8(v___y_3785_, sizeof(void*)*3 + 4);
v_ref_3804_ = l_Lean_replaceRef(v_val_3796_, v_ref_3799_);
lean_inc(v_currRecDepth_3798_);
lean_inc_ref(v_toCold_3797_);
v___x_3805_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_3805_, 0, v_toCold_3797_);
lean_ctor_set(v___x_3805_, 1, v_currRecDepth_3798_);
lean_ctor_set(v___x_3805_, 2, v_ref_3804_);
lean_ctor_set_uint16(v___x_3805_, sizeof(void*)*3, v_optionFlags_3800_);
lean_ctor_set_uint8(v___x_3805_, sizeof(void*)*3 + 2, v_suppressElabErrors_3801_);
lean_ctor_set_uint8(v___x_3805_, sizeof(void*)*3 + 3, v_checkDeprecated_3802_);
lean_ctor_set_uint8(v___x_3805_, sizeof(void*)*3 + 4, v_isRecordingDeps_3803_);
lean_inc(v_val_3796_);
v___x_3806_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_push(v_b_3784_, v_val_3796_, v___x_3805_, v___y_3786_);
lean_dec_ref_known(v___x_3805_, 3);
if (lean_obj_tag(v___x_3806_) == 0)
{
lean_object* v_a_3807_; 
v_a_3807_ = lean_ctor_get(v___x_3806_, 0);
lean_inc(v_a_3807_);
lean_dec_ref_known(v___x_3806_, 1);
v_a_3789_ = v_a_3807_;
goto v___jp_3788_;
}
else
{
return v___x_3806_;
}
}
else
{
v_a_3789_ = v_b_3784_;
goto v___jp_3788_;
}
}
v___jp_3788_:
{
size_t v___x_3790_; size_t v___x_3791_; 
v___x_3790_ = ((size_t)1ULL);
v___x_3791_ = lean_usize_add(v_i_3783_, v___x_3790_);
v_i_3783_ = v___x_3791_;
v_b_3784_ = v_a_3789_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Html_Syntax_TextCommentsView_getText_spec__0___boxed(lean_object* v_as_3808_, lean_object* v_sz_3809_, lean_object* v_i_3810_, lean_object* v_b_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_){
_start:
{
size_t v_sz_boxed_3815_; size_t v_i_boxed_3816_; lean_object* v_res_3817_; 
v_sz_boxed_3815_ = lean_unbox_usize(v_sz_3809_);
lean_dec(v_sz_3809_);
v_i_boxed_3816_ = lean_unbox_usize(v_i_3810_);
lean_dec(v_i_3810_);
v_res_3817_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Html_Syntax_TextCommentsView_getText_spec__0(v_as_3808_, v_sz_boxed_3815_, v_i_boxed_3816_, v_b_3811_, v___y_3812_, v___y_3813_);
lean_dec(v___y_3813_);
lean_dec_ref(v___y_3812_);
lean_dec_ref(v_as_3808_);
return v_res_3817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_TextCommentsView_getText(lean_object* v_v_3821_, lean_object* v_a_3822_, lean_object* v_a_3823_){
_start:
{
lean_object* v_acc_3825_; size_t v_sz_3826_; size_t v___x_3827_; lean_object* v___x_3828_; 
v_acc_3825_ = ((lean_object*)(l_Lean_Html_Syntax_TextCommentsView_getText___closed__0));
v_sz_3826_ = lean_array_size(v_v_3821_);
v___x_3827_ = ((size_t)0ULL);
v___x_3828_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Html_Syntax_TextCommentsView_getText_spec__0(v_v_3821_, v_sz_3826_, v___x_3827_, v_acc_3825_, v_a_3822_, v_a_3823_);
if (lean_obj_tag(v___x_3828_) == 0)
{
lean_object* v_a_3829_; lean_object* v___x_3831_; uint8_t v_isShared_3832_; uint8_t v_isSharedCheck_3837_; 
v_a_3829_ = lean_ctor_get(v___x_3828_, 0);
v_isSharedCheck_3837_ = !lean_is_exclusive(v___x_3828_);
if (v_isSharedCheck_3837_ == 0)
{
v___x_3831_ = v___x_3828_;
v_isShared_3832_ = v_isSharedCheck_3837_;
goto v_resetjp_3830_;
}
else
{
lean_inc(v_a_3829_);
lean_dec(v___x_3828_);
v___x_3831_ = lean_box(0);
v_isShared_3832_ = v_isSharedCheck_3837_;
goto v_resetjp_3830_;
}
v_resetjp_3830_:
{
lean_object* v___x_3833_; lean_object* v___x_3835_; 
v___x_3833_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_TextAcc_finish(v_a_3829_);
if (v_isShared_3832_ == 0)
{
lean_ctor_set(v___x_3831_, 0, v___x_3833_);
v___x_3835_ = v___x_3831_;
goto v_reusejp_3834_;
}
else
{
lean_object* v_reuseFailAlloc_3836_; 
v_reuseFailAlloc_3836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3836_, 0, v___x_3833_);
v___x_3835_ = v_reuseFailAlloc_3836_;
goto v_reusejp_3834_;
}
v_reusejp_3834_:
{
return v___x_3835_;
}
}
}
else
{
lean_object* v_a_3838_; lean_object* v___x_3840_; uint8_t v_isShared_3841_; uint8_t v_isSharedCheck_3845_; 
v_a_3838_ = lean_ctor_get(v___x_3828_, 0);
v_isSharedCheck_3845_ = !lean_is_exclusive(v___x_3828_);
if (v_isSharedCheck_3845_ == 0)
{
v___x_3840_ = v___x_3828_;
v_isShared_3841_ = v_isSharedCheck_3845_;
goto v_resetjp_3839_;
}
else
{
lean_inc(v_a_3838_);
lean_dec(v___x_3828_);
v___x_3840_ = lean_box(0);
v_isShared_3841_ = v_isSharedCheck_3845_;
goto v_resetjp_3839_;
}
v_resetjp_3839_:
{
lean_object* v___x_3843_; 
if (v_isShared_3841_ == 0)
{
v___x_3843_ = v___x_3840_;
goto v_reusejp_3842_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v_a_3838_);
v___x_3843_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3842_;
}
v_reusejp_3842_:
{
return v___x_3843_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_TextCommentsView_getText___boxed(lean_object* v_v_3846_, lean_object* v_a_3847_, lean_object* v_a_3848_, lean_object* v_a_3849_){
_start:
{
lean_object* v_res_3850_; 
v_res_3850_ = l_Lean_Html_Syntax_TextCommentsView_getText(v_v_3846_, v_a_3847_, v_a_3848_);
lean_dec(v_a_3848_);
lean_dec_ref(v_a_3847_);
lean_dec_ref(v_v_3846_);
return v_res_3850_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Html_Syntax_TextCommentsView_getSyntax_spec__0___lam__0(lean_object* v_self_3851_){
_start:
{
lean_inc(v_self_3851_);
return v_self_3851_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Html_Syntax_TextCommentsView_getSyntax_spec__0___lam__0___boxed(lean_object* v_self_3852_){
_start:
{
lean_object* v_res_3853_; 
v_res_3853_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Html_Syntax_TextCommentsView_getSyntax_spec__0___lam__0(v_self_3852_);
lean_dec(v_self_3852_);
return v_res_3853_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Html_Syntax_TextCommentsView_getSyntax_spec__0(size_t v_sz_3855_, size_t v_i_3856_, lean_object* v_bs_3857_){
_start:
{
uint8_t v___x_3858_; 
v___x_3858_ = lean_usize_dec_lt(v_i_3856_, v_sz_3855_);
if (v___x_3858_ == 0)
{
return v_bs_3857_;
}
else
{
lean_object* v___f_3859_; lean_object* v_v_3860_; lean_object* v___x_3861_; lean_object* v_bs_x27_3862_; lean_object* v___x_3863_; size_t v___x_3864_; size_t v___x_3865_; lean_object* v___x_3866_; 
v___f_3859_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Html_Syntax_TextCommentsView_getSyntax_spec__0___closed__0));
v_v_3860_ = lean_array_uget(v_bs_3857_, v_i_3856_);
v___x_3861_ = lean_unsigned_to_nat(0u);
v_bs_x27_3862_ = lean_array_uset(v_bs_3857_, v_i_3856_, v___x_3861_);
v___x_3863_ = l_Sum_elim___redArg(v___f_3859_, v___f_3859_, v_v_3860_);
v___x_3864_ = ((size_t)1ULL);
v___x_3865_ = lean_usize_add(v_i_3856_, v___x_3864_);
v___x_3866_ = lean_array_uset(v_bs_x27_3862_, v_i_3856_, v___x_3863_);
v_i_3856_ = v___x_3865_;
v_bs_3857_ = v___x_3866_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Html_Syntax_TextCommentsView_getSyntax_spec__0___boxed(lean_object* v_sz_3868_, lean_object* v_i_3869_, lean_object* v_bs_3870_){
_start:
{
size_t v_sz_boxed_3871_; size_t v_i_boxed_3872_; lean_object* v_res_3873_; 
v_sz_boxed_3871_ = lean_unbox_usize(v_sz_3868_);
lean_dec(v_sz_3868_);
v_i_boxed_3872_ = lean_unbox_usize(v_i_3869_);
lean_dec(v_i_3869_);
v_res_3873_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Html_Syntax_TextCommentsView_getSyntax_spec__0(v_sz_boxed_3871_, v_i_boxed_3872_, v_bs_3870_);
return v_res_3873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_TextCommentsView_getSyntax(lean_object* v_v_3877_){
_start:
{
size_t v_sz_3878_; size_t v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; 
v_sz_3878_ = lean_array_size(v_v_3877_);
v___x_3879_ = ((size_t)0ULL);
v___x_3880_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Html_Syntax_TextCommentsView_getSyntax_spec__0(v_sz_3878_, v___x_3879_, v_v_3877_);
v___x_3881_ = ((lean_object*)(l_Lean_Html_Syntax_TextCommentsView_getSyntax___closed__1));
v___x_3882_ = lean_box(2);
v___x_3883_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3883_, 0, v___x_3882_);
lean_ctor_set(v___x_3883_, 1, v___x_3881_);
lean_ctor_set(v___x_3883_, 2, v___x_3880_);
return v___x_3883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_ctorIdx___impl(lean_object* v_x_3884_){
_start:
{
lean_object* v___x_3885_; 
v___x_3885_ = lean_obj_tag_nat(v_x_3884_);
return v___x_3885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_ctorIdx___impl___boxed(lean_object* v_x_3886_){
_start:
{
lean_object* v_res_3887_; 
v_res_3887_ = l_Lean_Html_Syntax_ContentItemView_ctorIdx___impl(v_x_3886_);
lean_dec_ref(v_x_3886_);
return v_res_3887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_ctorElim___redArg(lean_object* v_t_3888_, lean_object* v_k_3889_){
_start:
{
switch(lean_obj_tag(v_t_3888_))
{
case 0:
{
lean_object* v_stx_3890_; lean_object* v___x_3891_; 
v_stx_3890_ = lean_ctor_get(v_t_3888_, 0);
lean_inc(v_stx_3890_);
lean_dec_ref_known(v_t_3888_, 1);
v___x_3891_ = lean_apply_1(v_k_3889_, v_stx_3890_);
return v___x_3891_;
}
case 1:
{
lean_object* v_stx_3892_; lean_object* v___x_3893_; 
v_stx_3892_ = lean_ctor_get(v_t_3888_, 0);
lean_inc_ref(v_stx_3892_);
lean_dec_ref_known(v_t_3888_, 1);
v___x_3893_ = lean_apply_1(v_k_3889_, v_stx_3892_);
return v___x_3893_;
}
default: 
{
uint8_t v_isMany_3894_; lean_object* v_stx_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; 
v_isMany_3894_ = lean_ctor_get_uint8(v_t_3888_, sizeof(void*)*1);
v_stx_3895_ = lean_ctor_get(v_t_3888_, 0);
lean_inc(v_stx_3895_);
lean_dec_ref_known(v_t_3888_, 1);
v___x_3896_ = lean_box(v_isMany_3894_);
v___x_3897_ = lean_apply_2(v_k_3889_, v___x_3896_, v_stx_3895_);
return v___x_3897_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_ctorElim(lean_object* v_motive_3898_, lean_object* v_ctorIdx_3899_, lean_object* v_t_3900_, lean_object* v_h_3901_, lean_object* v_k_3902_){
_start:
{
lean_object* v___x_3903_; 
v___x_3903_ = l_Lean_Html_Syntax_ContentItemView_ctorElim___redArg(v_t_3900_, v_k_3902_);
return v___x_3903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_ctorElim___boxed(lean_object* v_motive_3904_, lean_object* v_ctorIdx_3905_, lean_object* v_t_3906_, lean_object* v_h_3907_, lean_object* v_k_3908_){
_start:
{
lean_object* v_res_3909_; 
v_res_3909_ = l_Lean_Html_Syntax_ContentItemView_ctorElim(v_motive_3904_, v_ctorIdx_3905_, v_t_3906_, v_h_3907_, v_k_3908_);
lean_dec(v_ctorIdx_3905_);
return v_res_3909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_element_elim___redArg(lean_object* v_t_3910_, lean_object* v_element_3911_){
_start:
{
lean_object* v___x_3912_; 
v___x_3912_ = l_Lean_Html_Syntax_ContentItemView_ctorElim___redArg(v_t_3910_, v_element_3911_);
return v___x_3912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_element_elim(lean_object* v_motive_3913_, lean_object* v_t_3914_, lean_object* v_h_3915_, lean_object* v_element_3916_){
_start:
{
lean_object* v___x_3917_; 
v___x_3917_ = l_Lean_Html_Syntax_ContentItemView_ctorElim___redArg(v_t_3914_, v_element_3916_);
return v___x_3917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_textComments_elim___redArg(lean_object* v_t_3918_, lean_object* v_textComments_3919_){
_start:
{
lean_object* v___x_3920_; 
v___x_3920_ = l_Lean_Html_Syntax_ContentItemView_ctorElim___redArg(v_t_3918_, v_textComments_3919_);
return v___x_3920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_textComments_elim(lean_object* v_motive_3921_, lean_object* v_t_3922_, lean_object* v_h_3923_, lean_object* v_textComments_3924_){
_start:
{
lean_object* v___x_3925_; 
v___x_3925_ = l_Lean_Html_Syntax_ContentItemView_ctorElim___redArg(v_t_3922_, v_textComments_3924_);
return v___x_3925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_interp_elim___redArg(lean_object* v_t_3926_, lean_object* v_interp_3927_){
_start:
{
lean_object* v___x_3928_; 
v___x_3928_ = l_Lean_Html_Syntax_ContentItemView_ctorElim___redArg(v_t_3926_, v_interp_3927_);
return v___x_3928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_ContentItemView_interp_elim(lean_object* v_motive_3929_, lean_object* v_t_3930_, lean_object* v_h_3931_, lean_object* v_interp_3932_){
_start:
{
lean_object* v___x_3933_; 
v___x_3933_ = l_Lean_Html_Syntax_ContentItemView_ctorElim___redArg(v_t_3930_, v_interp_3932_);
return v___x_3933_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprContentItemView_repr(lean_object* v_x_3952_, lean_object* v_prec_3953_){
_start:
{
switch(lean_obj_tag(v_x_3952_))
{
case 0:
{
lean_object* v_stx_3954_; lean_object* v___y_3956_; lean_object* v___x_3964_; uint8_t v___x_3965_; 
v_stx_3954_ = lean_ctor_get(v_x_3952_, 0);
lean_inc(v_stx_3954_);
lean_dec_ref_known(v_x_3952_, 1);
v___x_3964_ = lean_unsigned_to_nat(1024u);
v___x_3965_ = lean_nat_dec_le(v___x_3964_, v_prec_3953_);
if (v___x_3965_ == 0)
{
lean_object* v___x_3966_; 
v___x_3966_ = lean_obj_once(&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3, &l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3_once, _init_l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3);
v___y_3956_ = v___x_3966_;
goto v___jp_3955_;
}
else
{
lean_object* v___x_3967_; 
v___x_3967_ = lean_obj_once(&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4, &l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4_once, _init_l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4);
v___y_3956_ = v___x_3967_;
goto v___jp_3955_;
}
v___jp_3955_:
{
lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; uint8_t v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; 
v___x_3957_ = ((lean_object*)(l_Lean_Html_Syntax_instReprContentItemView_repr___closed__2));
v___x_3958_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_stx_3954_);
v___x_3959_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3957_);
lean_ctor_set(v___x_3959_, 1, v___x_3958_);
lean_inc(v___y_3956_);
v___x_3960_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3960_, 0, v___y_3956_);
lean_ctor_set(v___x_3960_, 1, v___x_3959_);
v___x_3961_ = 0;
v___x_3962_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3962_, 0, v___x_3960_);
lean_ctor_set_uint8(v___x_3962_, sizeof(void*)*1, v___x_3961_);
v___x_3963_ = l_Repr_addAppParen(v___x_3962_, v_prec_3953_);
return v___x_3963_;
}
}
case 1:
{
lean_object* v_stx_3968_; lean_object* v___y_3970_; lean_object* v___x_3978_; uint8_t v___x_3979_; 
v_stx_3968_ = lean_ctor_get(v_x_3952_, 0);
lean_inc_ref(v_stx_3968_);
lean_dec_ref_known(v_x_3952_, 1);
v___x_3978_ = lean_unsigned_to_nat(1024u);
v___x_3979_ = lean_nat_dec_le(v___x_3978_, v_prec_3953_);
if (v___x_3979_ == 0)
{
lean_object* v___x_3980_; 
v___x_3980_ = lean_obj_once(&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3, &l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3_once, _init_l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3);
v___y_3970_ = v___x_3980_;
goto v___jp_3969_;
}
else
{
lean_object* v___x_3981_; 
v___x_3981_ = lean_obj_once(&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4, &l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4_once, _init_l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4);
v___y_3970_ = v___x_3981_;
goto v___jp_3969_;
}
v___jp_3969_:
{
lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; uint8_t v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; 
v___x_3971_ = ((lean_object*)(l_Lean_Html_Syntax_instReprContentItemView_repr___closed__5));
v___x_3972_ = l_Lean_Html_Syntax_instReprTextCommentsView_repr___redArg(v_stx_3968_);
v___x_3973_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3973_, 0, v___x_3971_);
lean_ctor_set(v___x_3973_, 1, v___x_3972_);
lean_inc(v___y_3970_);
v___x_3974_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3974_, 0, v___y_3970_);
lean_ctor_set(v___x_3974_, 1, v___x_3973_);
v___x_3975_ = 0;
v___x_3976_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3976_, 0, v___x_3974_);
lean_ctor_set_uint8(v___x_3976_, sizeof(void*)*1, v___x_3975_);
v___x_3977_ = l_Repr_addAppParen(v___x_3976_, v_prec_3953_);
return v___x_3977_;
}
}
default: 
{
uint8_t v_isMany_3982_; lean_object* v_stx_3983_; lean_object* v___x_3985_; uint8_t v_isShared_3986_; uint8_t v_isSharedCheck_4006_; 
v_isMany_3982_ = lean_ctor_get_uint8(v_x_3952_, sizeof(void*)*1);
v_stx_3983_ = lean_ctor_get(v_x_3952_, 0);
v_isSharedCheck_4006_ = !lean_is_exclusive(v_x_3952_);
if (v_isSharedCheck_4006_ == 0)
{
v___x_3985_ = v_x_3952_;
v_isShared_3986_ = v_isSharedCheck_4006_;
goto v_resetjp_3984_;
}
else
{
lean_inc(v_stx_3983_);
lean_dec(v_x_3952_);
v___x_3985_ = lean_box(0);
v_isShared_3986_ = v_isSharedCheck_4006_;
goto v_resetjp_3984_;
}
v_resetjp_3984_:
{
lean_object* v___y_3988_; lean_object* v___x_4002_; uint8_t v___x_4003_; 
v___x_4002_ = lean_unsigned_to_nat(1024u);
v___x_4003_ = lean_nat_dec_le(v___x_4002_, v_prec_3953_);
if (v___x_4003_ == 0)
{
lean_object* v___x_4004_; 
v___x_4004_ = lean_obj_once(&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3, &l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3_once, _init_l_Lean_Html_Syntax_instReprAttrValView_repr___closed__3);
v___y_3988_ = v___x_4004_;
goto v___jp_3987_;
}
else
{
lean_object* v___x_4005_; 
v___x_4005_ = lean_obj_once(&l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4, &l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4_once, _init_l_Lean_Html_Syntax_instReprAttrValView_repr___closed__4);
v___y_3988_ = v___x_4005_;
goto v___jp_3987_;
}
v___jp_3987_:
{
lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; uint8_t v___x_3997_; lean_object* v___x_3999_; 
v___x_3989_ = lean_box(1);
v___x_3990_ = ((lean_object*)(l_Lean_Html_Syntax_instReprContentItemView_repr___closed__8));
v___x_3991_ = l_Bool_repr___redArg(v_isMany_3982_);
v___x_3992_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3992_, 0, v___x_3990_);
lean_ctor_set(v___x_3992_, 1, v___x_3991_);
v___x_3993_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3993_, 0, v___x_3992_);
lean_ctor_set(v___x_3993_, 1, v___x_3989_);
v___x_3994_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_stx_3983_);
v___x_3995_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3995_, 0, v___x_3993_);
lean_ctor_set(v___x_3995_, 1, v___x_3994_);
lean_inc(v___y_3988_);
v___x_3996_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3996_, 0, v___y_3988_);
lean_ctor_set(v___x_3996_, 1, v___x_3995_);
v___x_3997_ = 0;
if (v_isShared_3986_ == 0)
{
lean_ctor_set_tag(v___x_3985_, 6);
lean_ctor_set(v___x_3985_, 0, v___x_3996_);
v___x_3999_ = v___x_3985_;
goto v_reusejp_3998_;
}
else
{
lean_object* v_reuseFailAlloc_4001_; 
v_reuseFailAlloc_4001_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4001_, 0, v___x_3996_);
v___x_3999_ = v_reuseFailAlloc_4001_;
goto v_reusejp_3998_;
}
v_reusejp_3998_:
{
lean_object* v___x_4000_; 
lean_ctor_set_uint8(v___x_3999_, sizeof(void*)*1, v___x_3997_);
v___x_4000_ = l_Repr_addAppParen(v___x_3999_, v_prec_3953_);
return v___x_4000_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instReprContentItemView_repr___boxed(lean_object* v_x_4007_, lean_object* v_prec_4008_){
_start:
{
lean_object* v_res_4009_; 
v_res_4009_ = l_Lean_Html_Syntax_instReprContentItemView_repr(v_x_4007_, v_prec_4008_);
lean_dec(v_prec_4008_);
return v_res_4009_;
}
}
LEAN_EXPORT uint8_t l_Lean_Html_Syntax_instBEqContentItemView_beq(lean_object* v_x_4016_, lean_object* v_x_4017_){
_start:
{
switch(lean_obj_tag(v_x_4016_))
{
case 0:
{
if (lean_obj_tag(v_x_4017_) == 0)
{
lean_object* v_stx_4018_; lean_object* v_stx_4019_; uint8_t v___x_4020_; 
v_stx_4018_ = lean_ctor_get(v_x_4016_, 0);
v_stx_4019_ = lean_ctor_get(v_x_4017_, 0);
v___x_4020_ = l_Lean_Syntax_structEq(v_stx_4018_, v_stx_4019_);
return v___x_4020_;
}
else
{
uint8_t v___x_4021_; 
v___x_4021_ = 0;
return v___x_4021_;
}
}
case 1:
{
if (lean_obj_tag(v_x_4017_) == 1)
{
lean_object* v_stx_4022_; lean_object* v_stx_4023_; uint8_t v___x_4024_; 
v_stx_4022_ = lean_ctor_get(v_x_4016_, 0);
v_stx_4023_ = lean_ctor_get(v_x_4017_, 0);
v___x_4024_ = l_Lean_Html_Syntax_instBEqTextCommentsView_beq(v_stx_4022_, v_stx_4023_);
return v___x_4024_;
}
else
{
uint8_t v___x_4025_; 
v___x_4025_ = 0;
return v___x_4025_;
}
}
default: 
{
if (lean_obj_tag(v_x_4017_) == 2)
{
uint8_t v_isMany_4026_; 
v_isMany_4026_ = lean_ctor_get_uint8(v_x_4017_, sizeof(void*)*1);
if (v_isMany_4026_ == 0)
{
uint8_t v_isMany_4027_; 
v_isMany_4027_ = lean_ctor_get_uint8(v_x_4016_, sizeof(void*)*1);
if (v_isMany_4027_ == 0)
{
lean_object* v_stx_4028_; lean_object* v_stx_4029_; uint8_t v___x_4030_; 
v_stx_4028_ = lean_ctor_get(v_x_4016_, 0);
v_stx_4029_ = lean_ctor_get(v_x_4017_, 0);
v___x_4030_ = l_Lean_Syntax_structEq(v_stx_4028_, v_stx_4029_);
return v___x_4030_;
}
else
{
return v_isMany_4026_;
}
}
else
{
uint8_t v_isMany_4031_; 
v_isMany_4031_ = lean_ctor_get_uint8(v_x_4016_, sizeof(void*)*1);
if (v_isMany_4031_ == 0)
{
return v_isMany_4031_;
}
else
{
lean_object* v_stx_4032_; lean_object* v_stx_4033_; uint8_t v___x_4034_; 
v_stx_4032_ = lean_ctor_get(v_x_4016_, 0);
v_stx_4033_ = lean_ctor_get(v_x_4017_, 0);
v___x_4034_ = l_Lean_Syntax_structEq(v_stx_4032_, v_stx_4033_);
return v___x_4034_;
}
}
}
else
{
uint8_t v___x_4035_; 
v___x_4035_ = 0;
return v___x_4035_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_instBEqContentItemView_beq___boxed(lean_object* v_x_4036_, lean_object* v_x_4037_){
_start:
{
uint8_t v_res_4038_; lean_object* v_r_4039_; 
v_res_4038_ = l_Lean_Html_Syntax_instBEqContentItemView_beq(v_x_4036_, v_x_4037_);
lean_dec_ref(v_x_4037_);
lean_dec_ref(v_x_4036_);
v_r_4039_ = lean_box(v_res_4038_);
return v_r_4039_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_Content_view_viewItem___redArg___lam__0(lean_object* v_stx_4042_, lean_object* v_withRef_4043_, lean_object* v___y_4044_, lean_object* v_oldRef_4045_){
_start:
{
lean_object* v_ref_4046_; lean_object* v___x_4047_; 
v_ref_4046_ = l_Lean_replaceRef(v_stx_4042_, v_oldRef_4045_);
v___x_4047_ = lean_apply_3(v_withRef_4043_, lean_box(0), v_ref_4046_, v___y_4044_);
return v___x_4047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_Content_view_viewItem___redArg___lam__0___boxed(lean_object* v_stx_4048_, lean_object* v_withRef_4049_, lean_object* v___y_4050_, lean_object* v_oldRef_4051_){
_start:
{
lean_object* v_res_4052_; 
v_res_4052_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_Content_view_viewItem___redArg___lam__0(v_stx_4048_, v_withRef_4049_, v___y_4050_, v_oldRef_4051_);
lean_dec(v_oldRef_4051_);
lean_dec(v_stx_4048_);
return v_res_4052_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_Content_view_viewItem___redArg(lean_object* v_inst_4053_, lean_object* v_inst_4054_, lean_object* v_stx_4055_){
_start:
{
lean_object* v_toMonadExceptOf_4056_; lean_object* v_toMonadRef_4057_; lean_object* v_toApplicative_4058_; lean_object* v_toBind_4059_; lean_object* v___y_4061_; lean_object* v_toPure_4066_; lean_object* v_k_4067_; lean_object* v___x_4068_; uint8_t v___x_4069_; 
v_toMonadExceptOf_4056_ = lean_ctor_get(v_inst_4054_, 0);
lean_inc_ref(v_toMonadExceptOf_4056_);
v_toMonadRef_4057_ = lean_ctor_get(v_inst_4054_, 1);
lean_inc_ref(v_toMonadRef_4057_);
lean_dec_ref(v_inst_4054_);
v_toApplicative_4058_ = lean_ctor_get(v_inst_4053_, 0);
lean_inc_ref(v_toApplicative_4058_);
v_toBind_4059_ = lean_ctor_get(v_inst_4053_, 1);
lean_inc(v_toBind_4059_);
lean_dec_ref(v_inst_4053_);
v_toPure_4066_ = lean_ctor_get(v_toApplicative_4058_, 1);
lean_inc(v_toPure_4066_);
lean_dec_ref(v_toApplicative_4058_);
lean_inc(v_stx_4055_);
v_k_4067_ = l_Lean_Syntax_getKind(v_stx_4055_);
v___x_4068_ = ((lean_object*)(l_Lean_Html_Syntax_interp_formatter___closed__4));
v___x_4069_ = lean_name_eq(v_k_4067_, v___x_4068_);
if (v___x_4069_ == 0)
{
lean_object* v___x_4070_; uint8_t v___x_4071_; 
v___x_4070_ = ((lean_object*)(l_Lean_Html_Syntax_interpMany_formatter___closed__1));
v___x_4071_ = lean_name_eq(v_k_4067_, v___x_4070_);
if (v___x_4071_ == 0)
{
lean_object* v___x_4072_; uint8_t v___x_4073_; 
v___x_4072_ = ((lean_object*)(l_Lean_Html_Syntax_elementKind___closed__1));
v___x_4073_ = lean_name_eq(v_k_4067_, v___x_4072_);
lean_dec(v_k_4067_);
if (v___x_4073_ == 0)
{
lean_object* v___x_4074_; 
lean_dec(v_toPure_4066_);
v___x_4074_ = l_Lean_Elab_throwUnsupportedSyntax___redArg(v_toMonadExceptOf_4056_);
v___y_4061_ = v___x_4074_;
goto v___jp_4060_;
}
else
{
lean_object* v___x_4075_; lean_object* v___x_4076_; 
lean_dec_ref(v_toMonadExceptOf_4056_);
lean_inc(v_stx_4055_);
v___x_4075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4075_, 0, v_stx_4055_);
v___x_4076_ = lean_apply_2(v_toPure_4066_, lean_box(0), v___x_4075_);
v___y_4061_ = v___x_4076_;
goto v___jp_4060_;
}
}
else
{
lean_object* v___x_4077_; lean_object* v___x_4078_; 
lean_dec(v_k_4067_);
lean_dec_ref(v_toMonadExceptOf_4056_);
lean_inc(v_stx_4055_);
v___x_4077_ = lean_alloc_ctor(2, 1, 1);
lean_ctor_set(v___x_4077_, 0, v_stx_4055_);
lean_ctor_set_uint8(v___x_4077_, sizeof(void*)*1, v___x_4071_);
v___x_4078_ = lean_apply_2(v_toPure_4066_, lean_box(0), v___x_4077_);
v___y_4061_ = v___x_4078_;
goto v___jp_4060_;
}
}
else
{
uint8_t v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; 
lean_dec(v_k_4067_);
lean_dec_ref(v_toMonadExceptOf_4056_);
v___x_4079_ = 0;
lean_inc(v_stx_4055_);
v___x_4080_ = lean_alloc_ctor(2, 1, 1);
lean_ctor_set(v___x_4080_, 0, v_stx_4055_);
lean_ctor_set_uint8(v___x_4080_, sizeof(void*)*1, v___x_4079_);
v___x_4081_ = lean_apply_2(v_toPure_4066_, lean_box(0), v___x_4080_);
v___y_4061_ = v___x_4081_;
goto v___jp_4060_;
}
v___jp_4060_:
{
lean_object* v_getRef_4062_; lean_object* v_withRef_4063_; lean_object* v___f_4064_; lean_object* v___x_4065_; 
v_getRef_4062_ = lean_ctor_get(v_toMonadRef_4057_, 0);
lean_inc(v_getRef_4062_);
v_withRef_4063_ = lean_ctor_get(v_toMonadRef_4057_, 1);
lean_inc(v_withRef_4063_);
lean_dec_ref(v_toMonadRef_4057_);
v___f_4064_ = lean_alloc_closure((void*)(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_Content_view_viewItem___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_4064_, 0, v_stx_4055_);
lean_closure_set(v___f_4064_, 1, v_withRef_4063_);
lean_closure_set(v___f_4064_, 2, v___y_4061_);
v___x_4065_ = lean_apply_4(v_toBind_4059_, lean_box(0), lean_box(0), v_getRef_4062_, v___f_4064_);
return v___x_4065_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_Content_view_viewItem(lean_object* v_m_4082_, lean_object* v_inst_4083_, lean_object* v_inst_4084_, lean_object* v_stx_4085_){
_start:
{
lean_object* v___x_4086_; 
v___x_4086_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_Content_view_viewItem___redArg(v_inst_4083_, v_inst_4084_, v_stx_4085_);
return v___x_4086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Content_view___redArg___lam__0(lean_object* v___x_4087_, lean_object* v_tcs_4088_, lean_object* v_toPure_4089_, lean_object* v_____do__lift_4090_){
_start:
{
lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; 
v___x_4091_ = lean_array_push(v___x_4087_, v_____do__lift_4090_);
v___x_4092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4092_, 0, v___x_4091_);
lean_ctor_set(v___x_4092_, 1, v_tcs_4088_);
v___x_4093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4093_, 0, v___x_4092_);
v___x_4094_ = lean_apply_2(v_toPure_4089_, lean_box(0), v___x_4093_);
return v___x_4094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Content_view___redArg___lam__1(lean_object* v_tcs_4095_, lean_object* v_toPure_4096_, lean_object* v_inst_4097_, lean_object* v_inst_4098_, lean_object* v_toBind_4099_, lean_object* v_a_4100_, lean_object* v_x_4101_, lean_object* v___y_4102_){
_start:
{
lean_object* v_fst_4103_; lean_object* v_snd_4104_; lean_object* v___x_4106_; uint8_t v_isShared_4107_; uint8_t v_isSharedCheck_4132_; 
v_fst_4103_ = lean_ctor_get(v___y_4102_, 0);
v_snd_4104_ = lean_ctor_get(v___y_4102_, 1);
v_isSharedCheck_4132_ = !lean_is_exclusive(v___y_4102_);
if (v_isSharedCheck_4132_ == 0)
{
v___x_4106_ = v___y_4102_;
v_isShared_4107_ = v_isSharedCheck_4132_;
goto v_resetjp_4105_;
}
else
{
lean_inc(v_snd_4104_);
lean_inc(v_fst_4103_);
lean_dec(v___y_4102_);
v___x_4106_ = lean_box(0);
v_isShared_4107_ = v_isSharedCheck_4132_;
goto v_resetjp_4105_;
}
v_resetjp_4105_:
{
lean_object* v___x_4108_; lean_object* v___x_4109_; uint8_t v___x_4110_; 
lean_inc(v_a_4100_);
v___x_4108_ = l_Lean_Syntax_getKind(v_a_4100_);
v___x_4109_ = ((lean_object*)(l_Lean_Html_Syntax_text___closed__1));
v___x_4110_ = lean_name_eq(v___x_4108_, v___x_4109_);
if (v___x_4110_ == 0)
{
lean_object* v___x_4111_; uint8_t v___x_4112_; 
v___x_4111_ = ((lean_object*)(l_Lean_Html_Syntax_comment___closed__1));
v___x_4112_ = lean_name_eq(v___x_4108_, v___x_4111_);
lean_dec(v___x_4108_);
if (v___x_4112_ == 0)
{
lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___f_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; 
lean_del_object(v___x_4106_);
v___x_4113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4113_, 0, v_snd_4104_);
v___x_4114_ = lean_array_push(v_fst_4103_, v___x_4113_);
v___f_4115_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_Content_view___redArg___lam__0), 4, 3);
lean_closure_set(v___f_4115_, 0, v___x_4114_);
lean_closure_set(v___f_4115_, 1, v_tcs_4095_);
lean_closure_set(v___f_4115_, 2, v_toPure_4096_);
v___x_4116_ = l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_Content_view_viewItem___redArg(v_inst_4097_, v_inst_4098_, v_a_4100_);
v___x_4117_ = lean_apply_4(v_toBind_4099_, lean_box(0), lean_box(0), v___x_4116_, v___f_4115_);
return v___x_4117_;
}
else
{
lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4121_; 
lean_dec(v_toBind_4099_);
lean_dec_ref(v_inst_4098_);
lean_dec_ref(v_inst_4097_);
lean_dec_ref(v_tcs_4095_);
v___x_4118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4118_, 0, v_a_4100_);
v___x_4119_ = lean_array_push(v_snd_4104_, v___x_4118_);
if (v_isShared_4107_ == 0)
{
lean_ctor_set(v___x_4106_, 1, v___x_4119_);
v___x_4121_ = v___x_4106_;
goto v_reusejp_4120_;
}
else
{
lean_object* v_reuseFailAlloc_4124_; 
v_reuseFailAlloc_4124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4124_, 0, v_fst_4103_);
lean_ctor_set(v_reuseFailAlloc_4124_, 1, v___x_4119_);
v___x_4121_ = v_reuseFailAlloc_4124_;
goto v_reusejp_4120_;
}
v_reusejp_4120_:
{
lean_object* v___x_4122_; lean_object* v___x_4123_; 
v___x_4122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4122_, 0, v___x_4121_);
v___x_4123_ = lean_apply_2(v_toPure_4096_, lean_box(0), v___x_4122_);
return v___x_4123_;
}
}
}
else
{
lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4128_; 
lean_dec(v___x_4108_);
lean_dec(v_toBind_4099_);
lean_dec_ref(v_inst_4098_);
lean_dec_ref(v_inst_4097_);
lean_dec_ref(v_tcs_4095_);
v___x_4125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4125_, 0, v_a_4100_);
v___x_4126_ = lean_array_push(v_snd_4104_, v___x_4125_);
if (v_isShared_4107_ == 0)
{
lean_ctor_set(v___x_4106_, 1, v___x_4126_);
v___x_4128_ = v___x_4106_;
goto v_reusejp_4127_;
}
else
{
lean_object* v_reuseFailAlloc_4131_; 
v_reuseFailAlloc_4131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4131_, 0, v_fst_4103_);
lean_ctor_set(v_reuseFailAlloc_4131_, 1, v___x_4126_);
v___x_4128_ = v_reuseFailAlloc_4131_;
goto v_reusejp_4127_;
}
v_reusejp_4127_:
{
lean_object* v___x_4129_; lean_object* v___x_4130_; 
v___x_4129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4129_, 0, v___x_4128_);
v___x_4130_ = lean_apply_2(v_toPure_4096_, lean_box(0), v___x_4129_);
return v___x_4130_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Content_view___redArg___lam__2(lean_object* v___x_4133_, lean_object* v_toPure_4134_, lean_object* v_____s_4135_){
_start:
{
lean_object* v_fst_4136_; lean_object* v_snd_4137_; lean_object* v___x_4138_; uint8_t v___x_4139_; 
v_fst_4136_ = lean_ctor_get(v_____s_4135_, 0);
lean_inc(v_fst_4136_);
v_snd_4137_ = lean_ctor_get(v_____s_4135_, 1);
lean_inc(v_snd_4137_);
lean_dec_ref(v_____s_4135_);
v___x_4138_ = lean_array_get_size(v_snd_4137_);
v___x_4139_ = lean_nat_dec_eq(v___x_4138_, v___x_4133_);
if (v___x_4139_ == 0)
{
lean_object* v___x_4140_; lean_object* v_items_4141_; lean_object* v___x_4142_; 
v___x_4140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4140_, 0, v_snd_4137_);
v_items_4141_ = lean_array_push(v_fst_4136_, v___x_4140_);
v___x_4142_ = lean_apply_2(v_toPure_4134_, lean_box(0), v_items_4141_);
return v___x_4142_;
}
else
{
lean_object* v___x_4143_; 
lean_dec(v_snd_4137_);
v___x_4143_ = lean_apply_2(v_toPure_4134_, lean_box(0), v_fst_4136_);
return v___x_4143_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Content_view___redArg___lam__2___boxed(lean_object* v___x_4144_, lean_object* v_toPure_4145_, lean_object* v_____s_4146_){
_start:
{
lean_object* v_res_4147_; 
v_res_4147_ = l_Lean_Html_Syntax_Content_view___redArg___lam__2(v___x_4144_, v_toPure_4145_, v_____s_4146_);
lean_dec(v___x_4144_);
return v_res_4147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Content_view___redArg(lean_object* v_inst_4152_, lean_object* v_inst_4153_, lean_object* v_c_4154_){
_start:
{
lean_object* v_toApplicative_4155_; lean_object* v_toBind_4156_; lean_object* v_toPure_4157_; lean_object* v___x_4158_; lean_object* v_items_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___f_4162_; lean_object* v___f_4163_; size_t v_sz_4164_; size_t v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; 
v_toApplicative_4155_ = lean_ctor_get(v_inst_4152_, 0);
v_toBind_4156_ = lean_ctor_get(v_inst_4152_, 1);
lean_inc_n(v_toBind_4156_, 2);
v_toPure_4157_ = lean_ctor_get(v_toApplicative_4155_, 1);
v___x_4158_ = lean_unsigned_to_nat(0u);
v_items_4159_ = ((lean_object*)(l_Lean_Html_Syntax_Content_view___redArg___closed__0));
v___x_4160_ = l_Lean_Syntax_getArgs(v_c_4154_);
v___x_4161_ = ((lean_object*)(l_Lean_Html_Syntax_Content_view___redArg___closed__1));
lean_inc_ref(v_inst_4152_);
lean_inc_n(v_toPure_4157_, 2);
v___f_4162_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_Content_view___redArg___lam__1), 8, 5);
lean_closure_set(v___f_4162_, 0, v_items_4159_);
lean_closure_set(v___f_4162_, 1, v_toPure_4157_);
lean_closure_set(v___f_4162_, 2, v_inst_4152_);
lean_closure_set(v___f_4162_, 3, v_inst_4153_);
lean_closure_set(v___f_4162_, 4, v_toBind_4156_);
v___f_4163_ = lean_alloc_closure((void*)(l_Lean_Html_Syntax_Content_view___redArg___lam__2___boxed), 3, 2);
lean_closure_set(v___f_4163_, 0, v___x_4158_);
lean_closure_set(v___f_4163_, 1, v_toPure_4157_);
v_sz_4164_ = lean_array_size(v___x_4160_);
v___x_4165_ = ((size_t)0ULL);
v___x_4166_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_4152_, v___x_4160_, v___f_4162_, v_sz_4164_, v___x_4165_, v___x_4161_);
v___x_4167_ = lean_apply_4(v_toBind_4156_, lean_box(0), lean_box(0), v___x_4166_, v___f_4163_);
return v___x_4167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Content_view___redArg___boxed(lean_object* v_inst_4168_, lean_object* v_inst_4169_, lean_object* v_c_4170_){
_start:
{
lean_object* v_res_4171_; 
v_res_4171_ = l_Lean_Html_Syntax_Content_view___redArg(v_inst_4168_, v_inst_4169_, v_c_4170_);
lean_dec(v_c_4170_);
return v_res_4171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Content_view(lean_object* v_m_4172_, lean_object* v_inst_4173_, lean_object* v_inst_4174_, lean_object* v_c_4175_){
_start:
{
lean_object* v___x_4176_; 
v___x_4176_ = l_Lean_Html_Syntax_Content_view___redArg(v_inst_4173_, v_inst_4174_, v_c_4175_);
return v___x_4176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_Content_view___boxed(lean_object* v_m_4177_, lean_object* v_inst_4178_, lean_object* v_inst_4179_, lean_object* v_c_4180_){
_start:
{
lean_object* v_res_4181_; 
v_res_4181_ = l_Lean_Html_Syntax_Content_view(v_m_4177_, v_inst_4178_, v_inst_4179_, v_c_4180_);
lean_dec(v_c_4180_);
return v_res_4181_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_html_x25___closed__2(void){
_start:
{
uint8_t v___x_4188_; uint8_t v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; 
v___x_4188_ = 0;
v___x_4189_ = 1;
v___x_4190_ = ((lean_object*)(l_Lean_Html_Syntax_html_x25___closed__1));
v___x_4191_ = ((lean_object*)(l_Lean_Html_Syntax_html_x25___closed__0));
v___x_4192_ = l_Lean_Parser_mkAntiquot(v___x_4191_, v___x_4190_, v___x_4189_, v___x_4188_);
return v___x_4192_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_html_x25___closed__3(void){
_start:
{
lean_object* v___x_4193_; lean_object* v___x_4194_; 
v___x_4193_ = ((lean_object*)(l_Lean_Html_Syntax_html_x25___closed__0));
v___x_4194_ = l_Lean_Parser_symbol(v___x_4193_);
return v___x_4194_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_html_x25___closed__6(void){
_start:
{
lean_object* v___x_4199_; uint8_t v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; 
v___x_4199_ = ((lean_object*)(l_Lean_Html_Syntax_html_x25___closed__5));
v___x_4200_ = 0;
v___x_4201_ = ((lean_object*)(l_Lean_Html_Syntax_interp_formatter___closed__5));
v___x_4202_ = l_Lean_Html_Syntax_rawSymbol(v___x_4201_, v___x_4200_, v___x_4199_);
return v___x_4202_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_html_x25___closed__7(void){
_start:
{
lean_object* v___x_4203_; lean_object* v___x_4204_; 
v___x_4203_ = ((lean_object*)(l_Lean_Html_Syntax_interpWith_formatter___closed__1));
v___x_4204_ = l_Lean_Parser_symbol(v___x_4203_);
return v___x_4204_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_html_x25___closed__8(void){
_start:
{
lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; 
v___x_4205_ = lean_obj_once(&l_Lean_Html_Syntax_html_x25___closed__7, &l_Lean_Html_Syntax_html_x25___closed__7_once, _init_l_Lean_Html_Syntax_html_x25___closed__7);
v___x_4206_ = l_Lean_Html_Syntax_content;
v___x_4207_ = l_Lean_Parser_andthen(v___x_4206_, v___x_4205_);
return v___x_4207_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_html_x25___closed__9(void){
_start:
{
lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; 
v___x_4208_ = lean_obj_once(&l_Lean_Html_Syntax_html_x25___closed__8, &l_Lean_Html_Syntax_html_x25___closed__8_once, _init_l_Lean_Html_Syntax_html_x25___closed__8);
v___x_4209_ = lean_obj_once(&l_Lean_Html_Syntax_html_x25___closed__6, &l_Lean_Html_Syntax_html_x25___closed__6_once, _init_l_Lean_Html_Syntax_html_x25___closed__6);
v___x_4210_ = l_Lean_Parser_andthen(v___x_4209_, v___x_4208_);
return v___x_4210_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_html_x25___closed__10(void){
_start:
{
lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; 
v___x_4211_ = lean_obj_once(&l_Lean_Html_Syntax_html_x25___closed__9, &l_Lean_Html_Syntax_html_x25___closed__9_once, _init_l_Lean_Html_Syntax_html_x25___closed__9);
v___x_4212_ = lean_obj_once(&l_Lean_Html_Syntax_html_x25___closed__3, &l_Lean_Html_Syntax_html_x25___closed__3_once, _init_l_Lean_Html_Syntax_html_x25___closed__3);
v___x_4213_ = l_Lean_Parser_andthen(v___x_4212_, v___x_4211_);
return v___x_4213_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_html_x25___closed__11(void){
_start:
{
lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; 
v___x_4214_ = lean_obj_once(&l_Lean_Html_Syntax_html_x25___closed__10, &l_Lean_Html_Syntax_html_x25___closed__10_once, _init_l_Lean_Html_Syntax_html_x25___closed__10);
v___x_4215_ = lean_unsigned_to_nat(1024u);
v___x_4216_ = ((lean_object*)(l_Lean_Html_Syntax_html_x25___closed__1));
v___x_4217_ = l_Lean_Parser_leadingNode(v___x_4216_, v___x_4215_, v___x_4214_);
return v___x_4217_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_html_x25___closed__12(void){
_start:
{
lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; 
v___x_4218_ = lean_obj_once(&l_Lean_Html_Syntax_html_x25___closed__11, &l_Lean_Html_Syntax_html_x25___closed__11_once, _init_l_Lean_Html_Syntax_html_x25___closed__11);
v___x_4219_ = lean_obj_once(&l_Lean_Html_Syntax_html_x25___closed__2, &l_Lean_Html_Syntax_html_x25___closed__2_once, _init_l_Lean_Html_Syntax_html_x25___closed__2);
v___x_4220_ = l_Lean_Parser_withAntiquot(v___x_4219_, v___x_4218_);
return v___x_4220_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_html_x25___closed__13(void){
_start:
{
lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; 
v___x_4221_ = lean_obj_once(&l_Lean_Html_Syntax_html_x25___closed__12, &l_Lean_Html_Syntax_html_x25___closed__12_once, _init_l_Lean_Html_Syntax_html_x25___closed__12);
v___x_4222_ = ((lean_object*)(l_Lean_Html_Syntax_html_x25___closed__1));
v___x_4223_ = l_Lean_Parser_withCache(v___x_4222_, v___x_4221_);
return v___x_4223_;
}
}
static lean_object* _init_l_Lean_Html_Syntax_html_x25(void){
_start:
{
lean_object* v___x_4224_; 
v___x_4224_ = lean_obj_once(&l_Lean_Html_Syntax_html_x25___closed__13, &l_Lean_Html_Syntax_html_x25___closed__13_once, _init_l_Lean_Html_Syntax_html_x25___closed__13);
return v___x_4224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_html_x25_formatter(lean_object* v_a_4254_, lean_object* v_a_4255_, lean_object* v_a_4256_, lean_object* v_a_4257_){
_start:
{
lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; 
v___x_4259_ = ((lean_object*)(l_Lean_Html_Syntax_html_x25_formatter___closed__0));
v___x_4260_ = ((lean_object*)(l_Lean_Html_Syntax_html_x25_formatter___closed__7));
v___x_4261_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_4259_, v___x_4260_, v_a_4254_, v_a_4255_, v_a_4256_, v_a_4257_);
return v___x_4261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_html_x25_formatter___boxed(lean_object* v_a_4262_, lean_object* v_a_4263_, lean_object* v_a_4264_, lean_object* v_a_4265_, lean_object* v_a_4266_){
_start:
{
lean_object* v_res_4267_; 
v_res_4267_ = l_Lean_Html_Syntax_html_x25_formatter(v_a_4262_, v_a_4263_, v_a_4264_, v_a_4265_);
lean_dec(v_a_4265_);
lean_dec_ref(v_a_4264_);
lean_dec(v_a_4263_);
lean_dec_ref(v_a_4262_);
return v_res_4267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_html_x25_parenthesizer(lean_object* v_a_4294_, lean_object* v_a_4295_, lean_object* v_a_4296_, lean_object* v_a_4297_){
_start:
{
lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; 
v___x_4299_ = ((lean_object*)(l_Lean_Html_Syntax_html_x25_parenthesizer___closed__0));
v___x_4300_ = ((lean_object*)(l_Lean_Html_Syntax_html_x25_parenthesizer___closed__7));
v___x_4301_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_4299_, v___x_4300_, v_a_4294_, v_a_4295_, v_a_4296_, v_a_4297_);
return v___x_4301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Html_Syntax_html_x25_parenthesizer___boxed(lean_object* v_a_4302_, lean_object* v_a_4303_, lean_object* v_a_4304_, lean_object* v_a_4305_, lean_object* v_a_4306_){
_start:
{
lean_object* v_res_4307_; 
v_res_4307_ = l_Lean_Html_Syntax_html_x25_parenthesizer(v_a_4302_, v_a_4303_, v_a_4304_, v_a_4305_);
lean_dec(v_a_4305_);
lean_dec_ref(v_a_4304_);
lean_dec(v_a_4303_);
lean_dec_ref(v_a_4302_);
return v_res_4307_;
}
}
lean_object* runtime_initialize_Init_Prelude(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Html_Syntax(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__1___boxed__const__1 = _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__1___boxed__const__1();
lean_mark_persistent(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__1___boxed__const__1);
l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__2___boxed__const__1 = _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__2___boxed__const__1();
lean_mark_persistent(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__2___boxed__const__1);
l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__3___boxed__const__1 = _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__3___boxed__const__1();
lean_mark_persistent(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_text_isTextChar___closed__3___boxed__const__1);
l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__0___boxed__const__1 = _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__0___boxed__const__1);
l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__1___boxed__const__1 = _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__1___boxed__const__1();
lean_mark_persistent(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_tagName_isTagNameChar___closed__1___boxed__const__1);
l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__0___boxed__const__1 = _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__0___boxed__const__1);
l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__3___boxed__const__1 = _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__3___boxed__const__1();
lean_mark_persistent(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__3___boxed__const__1);
l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__4___boxed__const__1 = _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__4___boxed__const__1();
lean_mark_persistent(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__4___boxed__const__1);
l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__5___boxed__const__1 = _init_l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__5___boxed__const__1();
lean_mark_persistent(l___private_Lean_Data_Html_Syntax_0__Lean_Html_Syntax_attrName_isAttrNameChar___closed__5___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_Data_Sum_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Hint(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Html_Spec(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Html_CharRef(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Html_Syntax(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Data_Sum_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Hint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Html_Spec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Html_CharRef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Html_Syntax_text = _init_l_Lean_Html_Syntax_text();
lean_mark_persistent(l_Lean_Html_Syntax_text);
l_Lean_Html_Syntax_comment = _init_l_Lean_Html_Syntax_comment();
lean_mark_persistent(l_Lean_Html_Syntax_comment);
l_Lean_Html_Syntax_tagName = _init_l_Lean_Html_Syntax_tagName();
lean_mark_persistent(l_Lean_Html_Syntax_tagName);
l_Lean_Html_Syntax_attrName = _init_l_Lean_Html_Syntax_attrName();
lean_mark_persistent(l_Lean_Html_Syntax_attrName);
l_Lean_Html_Syntax_attrVal = _init_l_Lean_Html_Syntax_attrVal();
lean_mark_persistent(l_Lean_Html_Syntax_attrVal);
l_Lean_Html_Syntax_attr = _init_l_Lean_Html_Syntax_attr();
lean_mark_persistent(l_Lean_Html_Syntax_attr);
l_Lean_Html_Syntax_content = _init_l_Lean_Html_Syntax_content();
lean_mark_persistent(l_Lean_Html_Syntax_content);
l_Lean_Html_Syntax_element = _init_l_Lean_Html_Syntax_element();
lean_mark_persistent(l_Lean_Html_Syntax_element);
l_Lean_Html_Syntax_html_x25 = _init_l_Lean_Html_Syntax_html_x25();
lean_mark_persistent(l_Lean_Html_Syntax_html_x25);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Prelude(uint8_t builtin);
lean_object* initialize_Init_Data_Sum_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Hint(uint8_t builtin);
lean_object* initialize_Lean_Data_Html_Spec(uint8_t builtin);
lean_object* initialize_Lean_Data_Html_CharRef(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Html_Syntax(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Sum_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Hint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Html_Spec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Html_CharRef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Html_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Html_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Html_Syntax(builtin);
}
#ifdef __cplusplus
}
#endif
