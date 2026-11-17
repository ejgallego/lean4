// Lean compiler output
// Module: Lake.Toml.Grammar
// Imports: import Lake.Toml.ParserUtil import Lean.Parser public import Lean.PrettyPrinter.Formatter public import Lean.PrettyPrinter.Parenthesizer
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
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Lean_Parser_takeWhileFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_trailing(lean_object*);
lean_object* l_Lake_Toml_skipFn___boxed(lean_object*, lean_object*);
lean_object* l_Lake_Toml_chAtom(uint32_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthen(lean_object*, lean_object*);
lean_object* l_Lake_Toml_chFn(uint32_t, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_instBEqError_beq(lean_object*, lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_lt(uint32_t, uint32_t);
lean_object* l_Lean_Parser_ParserState_next_x27___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_mkUnexpectedCharError(lean_object*, uint32_t, lean_object*, uint8_t);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedErrorAt(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_litWithAntiquot(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_ParserState_mkEOIError(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_hexDigitFn(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Parser_orelse(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* l_Lake_Toml_takeWhile1Fn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeWithAntiquot(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_sepBy1(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_atomicFn(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Parser_setExpected(lean_object*, lean_object*);
lean_object* l_Lake_Toml_strFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_lit(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_pushLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
lean_object* l_Lake_Toml_sepByChar1Fn(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_sepByChar1AuxFn(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lake_Toml_digitPairFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_stackSize(lean_object*);
lean_object* l_Lean_Parser_ParserState_restore(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_isHexDigit___boxed(lean_object*);
lean_object* l_Lake_Toml_isOctDigit___boxed(lean_object*);
lean_object* l_Lake_Toml_isBinDigit___boxed(lean_object*);
lean_object* l_Lake_Toml_dynamicNode(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeUntilFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lake_Toml_recNodeWithAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_chAtom_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_recNodeWithAntiquot(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_epsilon_parenthesizer___redArg();
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_setExpected_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_notFollowedBy_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_epsilon_formatter___redArg();
lean_object* l_Lean_Parser_notFollowedBy(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkStackTop(lean_object*, lean_object*);
lean_object* l_Lake_Toml_digitFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_chAtom_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_litWithAntiquot_formatter___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeWithAntiquot_formatter(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_setExpected_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_atomic(lean_object*);
lean_object* l_Lean_Parser_atomic_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_recNodeWithAntiquot_formatter(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_notFollowedBy_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_sepByLinebreak_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Parser_symbol(lean_object*);
lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_pushNone;
lean_object* l_Lean_Parser_checkLinebreakBefore(lean_object*);
lean_object* l_Lean_Parser_sepByNoAntiquot(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_withCache(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_isControlChar(uint32_t);
LEAN_EXPORT lean_object* l_Lake_Toml_isControlChar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_wsFn___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lake_Toml_wsFn___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_Toml_wsFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_wsFn___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_wsFn___closed__0 = (const lean_object*)&l_Lake_Toml_wsFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_wsFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_wsFn___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "invalid newline; no LF after CR"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_newlineFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "newline"};
static const lean_object* l_Lake_Toml_newlineFn___closed__0 = (const lean_object*)&l_Lake_Toml_newlineFn___closed__0_value;
static const lean_ctor_object l_Lake_Toml_newlineFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_newlineFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_newlineFn___closed__1 = (const lean_object*)&l_Lake_Toml_newlineFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Toml_newlineFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_newlineFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_isControlChar___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_commentFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "comment"};
static const lean_object* l_Lake_Toml_commentFn___closed__0 = (const lean_object*)&l_Lake_Toml_commentFn___closed__0_value;
static const lean_ctor_object l_Lake_Toml_commentFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_commentFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_commentFn___closed__1 = (const lean_object*)&l_Lake_Toml_commentFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Toml_commentFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_commentFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_wsNewlineFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_wsNewlineFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_isEscapeChar(uint32_t);
LEAN_EXPORT lean_object* l_Lake_Toml_isEscapeChar___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00__private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00__private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "escape sequence"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__1_value;
static const lean_closure_object l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__2_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "string gap is forbidden here"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__3 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__3_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "invalid escape sequence"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__4 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__4_value;
static const lean_closure_object l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__5 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__5_value;
static const lean_closure_object l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_wsNewlineFn___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__6 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_basicStringAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "unterminated basic string"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_basicStringAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_basicStringAuxFn___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_basicStringAuxFn(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_basicStringFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "basic string"};
static const lean_object* l_Lake_Toml_basicStringFn___closed__0 = (const lean_object*)&l_Lake_Toml_basicStringFn___closed__0_value;
static const lean_ctor_object l_Lake_Toml_basicStringFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_basicStringFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_basicStringFn___closed__1 = (const lean_object*)&l_Lake_Toml_basicStringFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Toml_basicStringFn(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_literalStringAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "unterminated literal string"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_literalStringAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_literalStringAuxFn___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_literalStringAuxFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_literalStringAuxFn___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_literalStringFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "literal string"};
static const lean_object* l_Lake_Toml_literalStringFn___closed__0 = (const lean_object*)&l_Lake_Toml_literalStringFn___closed__0_value;
static const lean_ctor_object l_Lake_Toml_literalStringFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_literalStringFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_literalStringFn___closed__1 = (const lean_object*)&l_Lake_Toml_literalStringFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Toml_literalStringFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_literalStringFn___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "too many quotes"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___closed__0_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "unterminated multi-line literal string"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "multi-line literal string"};
static const lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0___closed__0 = (const lean_object*)&l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0___closed__1 = (const lean_object*)&l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_mlLiteralStringFn___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_mlLiteralStringFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_mlLiteralStringFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_mlLiteralStringFn___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))} };
static const lean_object* l_Lake_Toml_mlLiteralStringFn___closed__0 = (const lean_object*)&l_Lake_Toml_mlLiteralStringFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_mlLiteralStringFn(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_mlBasicStringAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "unterminated multi-line basic string"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_mlBasicStringAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_mlBasicStringAuxFn___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_mlBasicStringAuxFn(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "multi-line basic string"};
static const lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0___closed__0 = (const lean_object*)&l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0___closed__1 = (const lean_object*)&l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_mlBasicStringFn___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_mlBasicStringFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_mlBasicStringFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_mlBasicStringFn___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))} };
static const lean_object* l_Lake_Toml_mlBasicStringFn___closed__0 = (const lean_object*)&l_Lake_Toml_mlBasicStringFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_mlBasicStringFn(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "hour digit"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "':'"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__3 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__3_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "minute digit"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__4 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__4_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__5 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "time offset is forbidden here"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn(uint8_t, uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___lam__0(uint32_t);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__0_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "millisecond"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__1_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "second digit"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_timeFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hour"};
static const lean_object* l_Lake_Toml_timeFn___closed__0 = (const lean_object*)&l_Lake_Toml_timeFn___closed__0_value;
static const lean_ctor_object l_Lake_Toml_timeFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_timeFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_timeFn___closed__1 = (const lean_object*)&l_Lake_Toml_timeFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Toml_timeFn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_timeFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_optTimeFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_optTimeFn___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "month digit"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "'-'"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__3 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__3_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "day digit"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__4 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__4_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__5 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "year digit"};
static const lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0___closed__0 = (const lean_object*)&l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0___closed__1 = (const lean_object*)&l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dateTimeFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dateTimeFn___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "decimal exponent"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_optDecExpFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_optDecExpFn___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Toml"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "float"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3_value_aux_1),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(104, 154, 151, 104, 68, 255, 246, 246)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3_value;
static const lean_closure_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_skipFn___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decInt"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__5 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__5_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6_value_aux_1),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__5_value),LEAN_SCALAR_PTR_LITERAL(146, 5, 249, 175, 125, 238, 54, 100)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "decimal fraction"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__7 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__7_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__8 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailFn(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "decimal integer"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__0_value),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__1_value)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberAuxFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "nf"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__0_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "'inf'"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__1_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "an"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__0_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "'nan'"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__1_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decimalFn(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dateTime"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(100, 234, 1, 129, 172, 254, 231, 202)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "date-time"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__3 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__3_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__2_value),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__3_value)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__4 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__4_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__0_value),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__4_value)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__5 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "integer"};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__0 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__0_value;
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__0_value),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__4_value)}};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__1 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__1_value;
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "unexpected '"};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__2 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__2_value;
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__3 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__3_value;
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__4 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__4_value;
static const lean_closure_object l_Lake_Toml_numeralFn___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_isHexDigit___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__5 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__5_value;
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "hexadecimal integer"};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__6 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__6_value;
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__7 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__7_value;
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hexNum"};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__8 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__8_value;
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__9_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__9_value_aux_1),((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(93, 174, 95, 211, 123, 63, 171, 252)}};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__9 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__9_value;
static const lean_closure_object l_Lake_Toml_numeralFn___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_isOctDigit___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__10 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__10_value;
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "octal integer"};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__11 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__11_value;
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__12 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__12_value;
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "octNum"};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__13 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__13_value;
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__14_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__14_value_aux_1),((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(93, 70, 221, 168, 145, 119, 144, 197)}};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__14 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__14_value;
static const lean_closure_object l_Lake_Toml_numeralFn___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_isBinDigit___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__15 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__15_value;
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "binary integer"};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__16 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__16_value;
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__17 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__17_value;
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "binNum"};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__18 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__18_value;
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__19_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__19_value_aux_1),((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(59, 60, 170, 39, 77, 137, 193, 6)}};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__19 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__19_value;
LEAN_EXPORT lean_object* l_Lake_Toml_numeralFn___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_numeralFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_numeralFn___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_numeralFn___closed__0 = (const lean_object*)&l_Lake_Toml_numeralFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_numeralFn(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_trailingWs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_trailingWs___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs;
static const lean_closure_object l_Lake_Toml_trailingSep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_trailingFn___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_trailingSep___closed__0 = (const lean_object*)&l_Lake_Toml_trailingSep___closed__0_value;
static lean_once_cell_t l_Lake_Toml_trailingSep___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_trailingSep___closed__1;
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep;
LEAN_EXPORT uint8_t l_Lake_Toml_unquotedKeyFn___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKeyFn___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_Toml_unquotedKeyFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_unquotedKeyFn___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_unquotedKeyFn___closed__0 = (const lean_object*)&l_Lake_Toml_unquotedKeyFn___closed__0_value;
static const lean_string_object l_Lake_Toml_unquotedKeyFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "unquoted key"};
static const lean_object* l_Lake_Toml_unquotedKeyFn___closed__1 = (const lean_object*)&l_Lake_Toml_unquotedKeyFn___closed__1_value;
static const lean_ctor_object l_Lake_Toml_unquotedKeyFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_unquotedKeyFn___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_unquotedKeyFn___closed__2 = (const lean_object*)&l_Lake_Toml_unquotedKeyFn___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKeyFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKeyFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_unquotedKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "unquotedKey"};
static const lean_object* l_Lake_Toml_unquotedKey___closed__0 = (const lean_object*)&l_Lake_Toml_unquotedKey___closed__0_value;
static const lean_ctor_object l_Lake_Toml_unquotedKey___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_unquotedKey___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_unquotedKey___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_unquotedKey___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_unquotedKey___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_unquotedKey___closed__0_value),LEAN_SCALAR_PTR_LITERAL(56, 43, 232, 206, 44, 188, 39, 241)}};
static const lean_object* l_Lake_Toml_unquotedKey___closed__1 = (const lean_object*)&l_Lake_Toml_unquotedKey___closed__1_value;
static lean_once_cell_t l_Lake_Toml_unquotedKey___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_unquotedKey___closed__2;
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKey;
static const lean_string_object l_Lake_Toml_basicString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "basicString"};
static const lean_object* l_Lake_Toml_basicString___closed__0 = (const lean_object*)&l_Lake_Toml_basicString___closed__0_value;
static const lean_ctor_object l_Lake_Toml_basicString___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_basicString___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_basicString___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_basicString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_basicString___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_basicString___closed__0_value),LEAN_SCALAR_PTR_LITERAL(164, 34, 208, 112, 75, 114, 213, 233)}};
static const lean_object* l_Lake_Toml_basicString___closed__1 = (const lean_object*)&l_Lake_Toml_basicString___closed__1_value;
static lean_once_cell_t l_Lake_Toml_basicString___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_basicString___closed__2;
LEAN_EXPORT lean_object* l_Lake_Toml_basicString;
static const lean_string_object l_Lake_Toml_literalString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "literalString"};
static const lean_object* l_Lake_Toml_literalString___closed__0 = (const lean_object*)&l_Lake_Toml_literalString___closed__0_value;
static const lean_ctor_object l_Lake_Toml_literalString___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_literalString___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_literalString___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_literalString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_literalString___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_literalString___closed__0_value),LEAN_SCALAR_PTR_LITERAL(241, 168, 165, 209, 230, 255, 154, 83)}};
static const lean_object* l_Lake_Toml_literalString___closed__1 = (const lean_object*)&l_Lake_Toml_literalString___closed__1_value;
static lean_once_cell_t l_Lake_Toml_literalString___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_literalString___closed__2;
LEAN_EXPORT lean_object* l_Lake_Toml_literalString;
static const lean_string_object l_Lake_Toml_mlBasicString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "mlBasicString"};
static const lean_object* l_Lake_Toml_mlBasicString___closed__0 = (const lean_object*)&l_Lake_Toml_mlBasicString___closed__0_value;
static const lean_ctor_object l_Lake_Toml_mlBasicString___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_mlBasicString___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_mlBasicString___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_mlBasicString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_mlBasicString___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_mlBasicString___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 27, 188, 79, 217, 46, 221, 25)}};
static const lean_object* l_Lake_Toml_mlBasicString___closed__1 = (const lean_object*)&l_Lake_Toml_mlBasicString___closed__1_value;
static lean_once_cell_t l_Lake_Toml_mlBasicString___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_mlBasicString___closed__2;
LEAN_EXPORT lean_object* l_Lake_Toml_mlBasicString;
static const lean_string_object l_Lake_Toml_mlLiteralString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "mlLiteralString"};
static const lean_object* l_Lake_Toml_mlLiteralString___closed__0 = (const lean_object*)&l_Lake_Toml_mlLiteralString___closed__0_value;
static const lean_ctor_object l_Lake_Toml_mlLiteralString___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_mlLiteralString___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_mlLiteralString___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_mlLiteralString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_mlLiteralString___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_mlLiteralString___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 215, 18, 247, 52, 33, 2, 54)}};
static const lean_object* l_Lake_Toml_mlLiteralString___closed__1 = (const lean_object*)&l_Lake_Toml_mlLiteralString___closed__1_value;
static lean_once_cell_t l_Lake_Toml_mlLiteralString___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_mlLiteralString___closed__2;
LEAN_EXPORT lean_object* l_Lake_Toml_mlLiteralString;
static lean_once_cell_t l_Lake_Toml_quotedKey___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_quotedKey___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_quotedKey;
static const lean_string_object l_Lake_Toml_simpleKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpleKey"};
static const lean_object* l_Lake_Toml_simpleKey___closed__0 = (const lean_object*)&l_Lake_Toml_simpleKey___closed__0_value;
static const lean_ctor_object l_Lake_Toml_simpleKey___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_simpleKey___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_simpleKey___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_simpleKey___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_simpleKey___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_simpleKey___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 51, 117, 190, 121, 223, 170, 220)}};
static const lean_object* l_Lake_Toml_simpleKey___closed__1 = (const lean_object*)&l_Lake_Toml_simpleKey___closed__1_value;
static lean_once_cell_t l_Lake_Toml_simpleKey___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_simpleKey___closed__2;
static lean_once_cell_t l_Lake_Toml_simpleKey___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_simpleKey___closed__3;
LEAN_EXPORT lean_object* l_Lake_Toml_simpleKey;
static const lean_string_object l_Lake_Toml_key___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l_Lake_Toml_key___closed__0 = (const lean_object*)&l_Lake_Toml_key___closed__0_value;
static const lean_ctor_object l_Lake_Toml_key___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_key___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_key___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_key___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_key___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_key___closed__0_value),LEAN_SCALAR_PTR_LITERAL(44, 24, 166, 18, 184, 133, 165, 53)}};
static const lean_object* l_Lake_Toml_key___closed__1 = (const lean_object*)&l_Lake_Toml_key___closed__1_value;
static const lean_ctor_object l_Lake_Toml_key___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_key___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_key___closed__2 = (const lean_object*)&l_Lake_Toml_key___closed__2_value;
static const lean_string_object l_Lake_Toml_key___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_Toml_key___closed__3 = (const lean_object*)&l_Lake_Toml_key___closed__3_value;
static const lean_string_object l_Lake_Toml_key___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "'.'"};
static const lean_object* l_Lake_Toml_key___closed__4 = (const lean_object*)&l_Lake_Toml_key___closed__4_value;
static const lean_ctor_object l_Lake_Toml_key___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_key___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_key___closed__5 = (const lean_object*)&l_Lake_Toml_key___closed__5_value;
static lean_once_cell_t l_Lake_Toml_key___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key___closed__6;
static lean_once_cell_t l_Lake_Toml_key___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key___closed__7;
static lean_once_cell_t l_Lake_Toml_key___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key___closed__8;
static lean_once_cell_t l_Lake_Toml_key___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key___closed__9;
static lean_once_cell_t l_Lake_Toml_key___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key___closed__10;
static lean_once_cell_t l_Lake_Toml_key___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key___closed__11;
LEAN_EXPORT lean_object* l_Lake_Toml_key;
static const lean_string_object l_Lake_Toml_stdTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "stdTable"};
static const lean_object* l_Lake_Toml_stdTable___closed__0 = (const lean_object*)&l_Lake_Toml_stdTable___closed__0_value;
static const lean_ctor_object l_Lake_Toml_stdTable___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_stdTable___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_stdTable___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_stdTable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_stdTable___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_stdTable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(204, 45, 156, 80, 41, 178, 181, 196)}};
static const lean_object* l_Lake_Toml_stdTable___closed__1 = (const lean_object*)&l_Lake_Toml_stdTable___closed__1_value;
static const lean_string_object l_Lake_Toml_stdTable___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "table"};
static const lean_object* l_Lake_Toml_stdTable___closed__2 = (const lean_object*)&l_Lake_Toml_stdTable___closed__2_value;
static const lean_ctor_object l_Lake_Toml_stdTable___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_stdTable___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_stdTable___closed__3 = (const lean_object*)&l_Lake_Toml_stdTable___closed__3_value;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__4;
static const lean_string_object l_Lake_Toml_stdTable___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "'['"};
static const lean_object* l_Lake_Toml_stdTable___closed__5 = (const lean_object*)&l_Lake_Toml_stdTable___closed__5_value;
static const lean_ctor_object l_Lake_Toml_stdTable___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_stdTable___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_stdTable___closed__6 = (const lean_object*)&l_Lake_Toml_stdTable___closed__6_value;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__7;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__8;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__9;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__10;
static const lean_string_object l_Lake_Toml_stdTable___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "']'"};
static const lean_object* l_Lake_Toml_stdTable___closed__11 = (const lean_object*)&l_Lake_Toml_stdTable___closed__11_value;
static const lean_ctor_object l_Lake_Toml_stdTable___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_stdTable___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_stdTable___closed__12 = (const lean_object*)&l_Lake_Toml_stdTable___closed__12_value;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__13;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__14;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__15;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__16;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__17;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__18;
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable;
static const lean_string_object l_Lake_Toml_arrayTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "arrayTable"};
static const lean_object* l_Lake_Toml_arrayTable___closed__0 = (const lean_object*)&l_Lake_Toml_arrayTable___closed__0_value;
static const lean_ctor_object l_Lake_Toml_arrayTable___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_arrayTable___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_arrayTable___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_arrayTable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_arrayTable___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_arrayTable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(199, 220, 56, 86, 146, 203, 81, 19)}};
static const lean_object* l_Lake_Toml_arrayTable___closed__1 = (const lean_object*)&l_Lake_Toml_arrayTable___closed__1_value;
static lean_once_cell_t l_Lake_Toml_arrayTable___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable___closed__2;
static lean_once_cell_t l_Lake_Toml_arrayTable___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable___closed__3;
static lean_once_cell_t l_Lake_Toml_arrayTable___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable___closed__4;
static lean_once_cell_t l_Lake_Toml_arrayTable___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable___closed__5;
static lean_once_cell_t l_Lake_Toml_arrayTable___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable___closed__6;
static lean_once_cell_t l_Lake_Toml_arrayTable___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable___closed__7;
static lean_once_cell_t l_Lake_Toml_arrayTable___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable___closed__8;
static lean_once_cell_t l_Lake_Toml_arrayTable___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable___closed__9;
LEAN_EXPORT lean_object* l_Lake_Toml_arrayTable;
static lean_once_cell_t l_Lake_Toml_table___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_table___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_table;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "keyval"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(105, 46, 78, 232, 161, 211, 209, 25)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "'='"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__3 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__3_value;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore(lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "expression"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(106, 203, 126, 0, 105, 98, 19, 240)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1_value;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__2;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore(lean_object*);
static const lean_string_object l_Lake_Toml_header___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l_Lake_Toml_header___closed__0 = (const lean_object*)&l_Lake_Toml_header___closed__0_value;
static const lean_ctor_object l_Lake_Toml_header___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_header___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_header___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_header___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_header___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_header___closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 19, 11, 35, 86, 242, 57, 11)}};
static const lean_object* l_Lake_Toml_header___closed__1 = (const lean_object*)&l_Lake_Toml_header___closed__1_value;
static lean_once_cell_t l_Lake_Toml_header___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_header___closed__2;
LEAN_EXPORT lean_object* l_Lake_Toml_header;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "toml"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(241, 110, 132, 157, 201, 185, 149, 61)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sepBy"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(196, 56, 254, 223, 11, 70, 55, 147)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__3 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__3_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__4 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__4_value;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__5;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "line break"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__6 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__6_value;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__7;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__8;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore(lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "inlineTable"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(160, 125, 46, 131, 161, 142, 50, 23)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "inline-table"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__3 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__3_value;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__4;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__5 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__5_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "','"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__6 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__6_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__7 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__7_value;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__8;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "'}'"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__9 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__9_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__10 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__10_value;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__11;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore(lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "array"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 212, 239, 77, 14, 34, 57, 134)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__1_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__2_value;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__3;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore(lean_object*);
static const lean_string_object l_Lake_Toml_string___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "string"};
static const lean_object* l_Lake_Toml_string___closed__0 = (const lean_object*)&l_Lake_Toml_string___closed__0_value;
static const lean_ctor_object l_Lake_Toml_string___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_string___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_string___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_string___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_string___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_string___closed__0_value),LEAN_SCALAR_PTR_LITERAL(79, 134, 223, 178, 21, 25, 142, 203)}};
static const lean_object* l_Lake_Toml_string___closed__1 = (const lean_object*)&l_Lake_Toml_string___closed__1_value;
static const lean_ctor_object l_Lake_Toml_string___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_string___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_string___closed__2 = (const lean_object*)&l_Lake_Toml_string___closed__2_value;
static lean_once_cell_t l_Lake_Toml_string___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_string___closed__3;
static lean_once_cell_t l_Lake_Toml_string___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_string___closed__4;
static lean_once_cell_t l_Lake_Toml_string___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_string___closed__5;
static lean_once_cell_t l_Lake_Toml_string___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_string___closed__6;
static lean_once_cell_t l_Lake_Toml_string___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_string___closed__7;
LEAN_EXPORT lean_object* l_Lake_Toml_string;
static const lean_string_object l_Lake_Toml_true___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lake_Toml_true___closed__0 = (const lean_object*)&l_Lake_Toml_true___closed__0_value;
static const lean_ctor_object l_Lake_Toml_true___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_true___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_true___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_true___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_true___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_true___closed__0_value),LEAN_SCALAR_PTR_LITERAL(94, 186, 129, 3, 94, 77, 39, 82)}};
static const lean_object* l_Lake_Toml_true___closed__1 = (const lean_object*)&l_Lake_Toml_true___closed__1_value;
static const lean_string_object l_Lake_Toml_true___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "'true'"};
static const lean_object* l_Lake_Toml_true___closed__2 = (const lean_object*)&l_Lake_Toml_true___closed__2_value;
static const lean_ctor_object l_Lake_Toml_true___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_true___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_true___closed__3 = (const lean_object*)&l_Lake_Toml_true___closed__3_value;
static const lean_closure_object l_Lake_Toml_true___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_strFn, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lake_Toml_true___closed__0_value),((lean_object*)&l_Lake_Toml_true___closed__3_value)} };
static const lean_object* l_Lake_Toml_true___closed__4 = (const lean_object*)&l_Lake_Toml_true___closed__4_value;
static lean_once_cell_t l_Lake_Toml_true___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_true___closed__5;
LEAN_EXPORT lean_object* l_Lake_Toml_true;
static const lean_string_object l_Lake_Toml_false___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lake_Toml_false___closed__0 = (const lean_object*)&l_Lake_Toml_false___closed__0_value;
static const lean_ctor_object l_Lake_Toml_false___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_false___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_false___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_false___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_false___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_false___closed__0_value),LEAN_SCALAR_PTR_LITERAL(45, 94, 147, 128, 103, 18, 162, 55)}};
static const lean_object* l_Lake_Toml_false___closed__1 = (const lean_object*)&l_Lake_Toml_false___closed__1_value;
static const lean_string_object l_Lake_Toml_false___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "'false'"};
static const lean_object* l_Lake_Toml_false___closed__2 = (const lean_object*)&l_Lake_Toml_false___closed__2_value;
static const lean_ctor_object l_Lake_Toml_false___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_false___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_false___closed__3 = (const lean_object*)&l_Lake_Toml_false___closed__3_value;
static const lean_closure_object l_Lake_Toml_false___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_strFn, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lake_Toml_false___closed__0_value),((lean_object*)&l_Lake_Toml_false___closed__3_value)} };
static const lean_object* l_Lake_Toml_false___closed__4 = (const lean_object*)&l_Lake_Toml_false___closed__4_value;
static lean_once_cell_t l_Lake_Toml_false___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_false___closed__5;
LEAN_EXPORT lean_object* l_Lake_Toml_false;
static const lean_string_object l_Lake_Toml_boolean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "boolean"};
static const lean_object* l_Lake_Toml_boolean___closed__0 = (const lean_object*)&l_Lake_Toml_boolean___closed__0_value;
static const lean_ctor_object l_Lake_Toml_boolean___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_boolean___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_boolean___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_boolean___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_boolean___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_boolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 74, 28, 167, 158, 175, 30, 0)}};
static const lean_object* l_Lake_Toml_boolean___closed__1 = (const lean_object*)&l_Lake_Toml_boolean___closed__1_value;
static lean_once_cell_t l_Lake_Toml_boolean___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_boolean___closed__2;
static lean_once_cell_t l_Lake_Toml_boolean___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_boolean___closed__3;
LEAN_EXPORT lean_object* l_Lake_Toml_boolean;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__0;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__1;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__2;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__3;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__4;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__5;
static const lean_string_object l_Lake_Toml_numeralAntiquot___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "numeral"};
static const lean_object* l_Lake_Toml_numeralAntiquot___closed__6 = (const lean_object*)&l_Lake_Toml_numeralAntiquot___closed__6_value;
static const lean_ctor_object l_Lake_Toml_numeralAntiquot___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_numeralAntiquot___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralAntiquot___closed__7_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_numeralAntiquot___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralAntiquot___closed__7_value_aux_1),((lean_object*)&l_Lake_Toml_numeralAntiquot___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 24, 202, 101, 169, 12, 111, 38)}};
static const lean_object* l_Lake_Toml_numeralAntiquot___closed__7 = (const lean_object*)&l_Lake_Toml_numeralAntiquot___closed__7_value;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__8;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__9;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__10;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__11;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__12;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__13;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__14;
LEAN_EXPORT lean_object* l_Lake_Toml_numeralAntiquot;
static lean_once_cell_t l_Lake_Toml_numeral___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeral___closed__0;
static lean_once_cell_t l_Lake_Toml_numeral___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeral___closed__1;
LEAN_EXPORT lean_object* l_Lake_Toml_numeral;
LEAN_EXPORT uint8_t l_Lake_Toml_numeralOfKind___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_numeralOfKind___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_numeralOfKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "illegal numeral kind"};
static const lean_object* l_Lake_Toml_numeralOfKind___closed__0 = (const lean_object*)&l_Lake_Toml_numeralOfKind___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_numeralOfKind(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_float___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_float___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_float;
static lean_once_cell_t l_Lake_Toml_decInt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_decInt___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_decInt;
static const lean_string_object l_Lake_Toml_binNum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "binary number"};
static const lean_object* l_Lake_Toml_binNum___closed__0 = (const lean_object*)&l_Lake_Toml_binNum___closed__0_value;
static lean_once_cell_t l_Lake_Toml_binNum___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_binNum___closed__1;
LEAN_EXPORT lean_object* l_Lake_Toml_binNum;
static const lean_string_object l_Lake_Toml_octNum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "octal number"};
static const lean_object* l_Lake_Toml_octNum___closed__0 = (const lean_object*)&l_Lake_Toml_octNum___closed__0_value;
static lean_once_cell_t l_Lake_Toml_octNum___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_octNum___closed__1;
LEAN_EXPORT lean_object* l_Lake_Toml_octNum;
static const lean_string_object l_Lake_Toml_hexNum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "hexadecimal number"};
static const lean_object* l_Lake_Toml_hexNum___closed__0 = (const lean_object*)&l_Lake_Toml_hexNum___closed__0_value;
static lean_once_cell_t l_Lake_Toml_hexNum___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_hexNum___closed__1;
LEAN_EXPORT lean_object* l_Lake_Toml_hexNum;
static lean_once_cell_t l_Lake_Toml_dateTime___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_dateTime___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_dateTime;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_valCore(lean_object*);
static const lean_string_object l_Lake_Toml_val___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "val"};
static const lean_object* l_Lake_Toml_val___closed__0 = (const lean_object*)&l_Lake_Toml_val___closed__0_value;
static const lean_ctor_object l_Lake_Toml_val___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_val___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_val___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_val___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_val___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_val___closed__0_value),LEAN_SCALAR_PTR_LITERAL(209, 33, 214, 61, 136, 139, 92, 226)}};
static const lean_object* l_Lake_Toml_val___closed__1 = (const lean_object*)&l_Lake_Toml_val___closed__1_value;
static const lean_closure_object l_Lake_Toml_val___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Toml_Grammar_0__Lake_Toml_valCore, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_val___closed__2 = (const lean_object*)&l_Lake_Toml_val___closed__2_value;
static lean_once_cell_t l_Lake_Toml_val___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_val___closed__3;
LEAN_EXPORT lean_object* l_Lake_Toml_val;
static lean_once_cell_t l_Lake_Toml_array___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_array___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_array;
static lean_once_cell_t l_Lake_Toml_inlineTable___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_inlineTable___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_inlineTable;
static lean_once_cell_t l_Lake_Toml_keyval___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_keyval___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_keyval;
static lean_once_cell_t l_Lake_Toml_expression___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_expression___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_expression;
LEAN_EXPORT lean_object* l_Lake_Toml_header_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_header_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKey_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKey_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_basicString_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_basicString_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_literalString_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_literalString_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_quotedKey_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_quotedKey_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_simpleKey_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_simpleKey_formatter___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_simpleKey_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_simpleKey_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_formatter___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_formatter___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_key_formatter___closed__0___boxed__const__1;
static lean_once_cell_t l_Lake_Toml_key_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_formatter___closed__0;
static lean_once_cell_t l_Lake_Toml_key_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_formatter___closed__1;
static lean_once_cell_t l_Lake_Toml_key_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_formatter___closed__2;
static lean_once_cell_t l_Lake_Toml_key_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_formatter___closed__3;
static lean_once_cell_t l_Lake_Toml_key_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_formatter___closed__4;
LEAN_EXPORT lean_object* l_Lake_Toml_key_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_key_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_formatter___closed__0___boxed__const__1;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__0;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__1;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__2;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__3;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__4;
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_formatter___closed__5___boxed__const__1;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__5;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__6;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__7;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__8;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__9;
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_arrayTable_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_formatter___closed__0;
static lean_once_cell_t l_Lake_Toml_arrayTable_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_formatter___closed__1;
static lean_once_cell_t l_Lake_Toml_arrayTable_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_formatter___closed__2;
static lean_once_cell_t l_Lake_Toml_arrayTable_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_formatter___closed__3;
static lean_once_cell_t l_Lake_Toml_arrayTable_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_formatter___closed__4;
static lean_once_cell_t l_Lake_Toml_arrayTable_formatter___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_formatter___closed__5;
static lean_once_cell_t l_Lake_Toml_arrayTable_formatter___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_formatter___closed__6;
LEAN_EXPORT lean_object* l_Lake_Toml_arrayTable_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_arrayTable_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_table_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_table_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__0_value),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_formatter___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_formatter___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_val_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_val_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_toml_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_toml_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_header_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_header_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKey_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKey_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_basicString_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_basicString_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_literalString_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_literalString_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_quotedKey_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_quotedKey_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_simpleKey_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_simpleKey_parenthesizer___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_simpleKey_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_simpleKey_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_key_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_parenthesizer___closed__0;
static lean_once_cell_t l_Lake_Toml_key_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_parenthesizer___closed__1;
static lean_once_cell_t l_Lake_Toml_key_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_parenthesizer___closed__2;
static lean_once_cell_t l_Lake_Toml_key_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_parenthesizer___closed__3;
static lean_once_cell_t l_Lake_Toml_key_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_parenthesizer___closed__4;
LEAN_EXPORT lean_object* l_Lake_Toml_key_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_key_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_stdTable_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_parenthesizer___closed__0;
static lean_once_cell_t l_Lake_Toml_stdTable_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_parenthesizer___closed__1;
static lean_once_cell_t l_Lake_Toml_stdTable_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_parenthesizer___closed__2;
static lean_once_cell_t l_Lake_Toml_stdTable_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_parenthesizer___closed__3;
static lean_once_cell_t l_Lake_Toml_stdTable_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_parenthesizer___closed__4;
static lean_once_cell_t l_Lake_Toml_stdTable_parenthesizer___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_parenthesizer___closed__5;
static lean_once_cell_t l_Lake_Toml_stdTable_parenthesizer___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_parenthesizer___closed__6;
static lean_once_cell_t l_Lake_Toml_stdTable_parenthesizer___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_parenthesizer___closed__7;
static lean_once_cell_t l_Lake_Toml_stdTable_parenthesizer___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_parenthesizer___closed__8;
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_arrayTable_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_parenthesizer___closed__0;
static lean_once_cell_t l_Lake_Toml_arrayTable_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_parenthesizer___closed__1;
static lean_once_cell_t l_Lake_Toml_arrayTable_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_parenthesizer___closed__2;
static lean_once_cell_t l_Lake_Toml_arrayTable_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_parenthesizer___closed__3;
static lean_once_cell_t l_Lake_Toml_arrayTable_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_parenthesizer___closed__4;
static lean_once_cell_t l_Lake_Toml_arrayTable_parenthesizer___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_parenthesizer___closed__5;
LEAN_EXPORT lean_object* l_Lake_Toml_arrayTable_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_arrayTable_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_table_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_table_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__0_value),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_val_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_val_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_toml_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_toml_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_toml___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_toml___closed__0;
static lean_once_cell_t l_Lake_Toml_toml___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_toml___closed__1;
LEAN_EXPORT lean_object* l_Lake_Toml_toml;
LEAN_EXPORT uint8_t l_Lake_Toml_isControlChar(uint32_t v_c_1_){
_start:
{
uint32_t v___x_2_; uint8_t v___x_3_; 
v___x_2_ = 127;
v___x_3_ = lean_uint32_dec_eq(v_c_1_, v___x_2_);
if (v___x_3_ == 0)
{
uint32_t v___x_4_; uint8_t v___x_5_; 
v___x_4_ = 32;
v___x_5_ = lean_uint32_dec_lt(v_c_1_, v___x_4_);
if (v___x_5_ == 0)
{
return v___x_5_;
}
else
{
uint32_t v___x_6_; uint8_t v___x_7_; 
v___x_6_ = 9;
v___x_7_ = lean_uint32_dec_eq(v_c_1_, v___x_6_);
if (v___x_7_ == 0)
{
return v___x_5_;
}
else
{
return v___x_3_;
}
}
}
else
{
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_isControlChar___boxed(lean_object* v_c_8_){
_start:
{
uint32_t v_c_boxed_9_; uint8_t v_res_10_; lean_object* v_r_11_; 
v_c_boxed_9_ = lean_unbox_uint32(v_c_8_);
lean_dec(v_c_8_);
v_res_10_ = l_Lake_Toml_isControlChar(v_c_boxed_9_);
v_r_11_ = lean_box(v_res_10_);
return v_r_11_;
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_wsFn___lam__0(uint32_t v_c_12_){
_start:
{
uint32_t v___x_13_; uint8_t v___x_14_; 
v___x_13_ = 32;
v___x_14_ = lean_uint32_dec_eq(v_c_12_, v___x_13_);
if (v___x_14_ == 0)
{
uint32_t v___x_15_; uint8_t v___x_16_; 
v___x_15_ = 9;
v___x_16_ = lean_uint32_dec_eq(v_c_12_, v___x_15_);
return v___x_16_;
}
else
{
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_wsFn___lam__0___boxed(lean_object* v_c_17_){
_start:
{
uint32_t v_c_boxed_18_; uint8_t v_res_19_; lean_object* v_r_20_; 
v_c_boxed_18_ = lean_unbox_uint32(v_c_17_);
lean_dec(v_c_17_);
v_res_19_ = l_Lake_Toml_wsFn___lam__0(v_c_boxed_18_);
v_r_20_ = lean_box(v_res_19_);
return v_r_20_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_wsFn(lean_object* v_a_22_, lean_object* v_a_23_){
_start:
{
lean_object* v___f_24_; lean_object* v___x_25_; 
v___f_24_ = ((lean_object*)(l_Lake_Toml_wsFn___closed__0));
v___x_25_ = l_Lean_Parser_takeWhileFn(v___f_24_, v_a_22_, v_a_23_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_wsFn___boxed(lean_object* v_a_26_, lean_object* v_a_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lake_Toml_wsFn(v_a_26_, v_a_27_);
lean_dec_ref(v_a_26_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn(lean_object* v_c_30_, lean_object* v_s_31_){
_start:
{
lean_object* v_toInputContext_32_; lean_object* v_pos_33_; lean_object* v_errMsg_34_; uint8_t v___x_35_; uint8_t v___x_36_; 
v_toInputContext_32_ = lean_ctor_get(v_c_30_, 0);
v_pos_33_ = lean_ctor_get(v_s_31_, 2);
v_errMsg_34_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn___closed__0));
v___x_35_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_32_, v_pos_33_);
v___x_36_ = 1;
if (v___x_35_ == 0)
{
lean_object* v_inputString_37_; uint32_t v_curr_38_; uint32_t v___x_39_; uint8_t v___x_40_; 
v_inputString_37_ = lean_ctor_get(v_toInputContext_32_, 0);
v_curr_38_ = lean_string_utf8_get_fast(v_inputString_37_, v_pos_33_);
v___x_39_ = 10;
v___x_40_ = lean_uint32_dec_eq(v_curr_38_, v___x_39_);
if (v___x_40_ == 0)
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_box(0);
v___x_42_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_31_, v_errMsg_34_, v___x_41_, v___x_36_);
return v___x_42_;
}
else
{
lean_object* v___x_43_; 
lean_inc(v_pos_33_);
v___x_43_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_31_, v_c_30_, v_pos_33_);
lean_dec(v_pos_33_);
return v___x_43_;
}
}
else
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = lean_box(0);
v___x_45_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_31_, v_errMsg_34_, v___x_44_, v___x_36_);
return v___x_45_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn___boxed(lean_object* v_c_46_, lean_object* v_s_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn(v_c_46_, v_s_47_);
lean_dec_ref(v_c_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_newlineFn(lean_object* v_c_53_, lean_object* v_s_54_){
_start:
{
lean_object* v_toInputContext_55_; lean_object* v_pos_56_; uint8_t v___x_57_; 
v_toInputContext_55_ = lean_ctor_get(v_c_53_, 0);
v_pos_56_ = lean_ctor_get(v_s_54_, 2);
v___x_57_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_55_, v_pos_56_);
if (v___x_57_ == 0)
{
lean_object* v_inputString_58_; uint32_t v_curr_59_; uint32_t v___x_60_; uint8_t v___x_61_; 
v_inputString_58_ = lean_ctor_get(v_toInputContext_55_, 0);
v_curr_59_ = lean_string_utf8_get_fast(v_inputString_58_, v_pos_56_);
v___x_60_ = 10;
v___x_61_ = lean_uint32_dec_eq(v_curr_59_, v___x_60_);
if (v___x_61_ == 0)
{
uint32_t v___x_62_; uint8_t v___x_63_; 
v___x_62_ = 13;
v___x_63_ = lean_uint32_dec_eq(v_curr_59_, v___x_62_);
if (v___x_63_ == 0)
{
uint8_t v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = 1;
v___x_65_ = ((lean_object*)(l_Lake_Toml_newlineFn___closed__1));
v___x_66_ = l_Lake_Toml_mkUnexpectedCharError(v_s_54_, v_curr_59_, v___x_65_, v___x_64_);
return v___x_66_;
}
else
{
lean_object* v___x_67_; lean_object* v___x_68_; 
lean_inc(v_pos_56_);
v___x_67_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_54_, v_c_53_, v_pos_56_);
lean_dec(v_pos_56_);
v___x_68_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn(v_c_53_, v___x_67_);
return v___x_68_;
}
}
else
{
lean_object* v___x_69_; 
lean_inc(v_pos_56_);
v___x_69_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_54_, v_c_53_, v_pos_56_);
lean_dec(v_pos_56_);
return v___x_69_;
}
}
else
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = ((lean_object*)(l_Lake_Toml_newlineFn___closed__1));
v___x_71_ = l_Lean_Parser_ParserState_mkEOIError(v_s_54_, v___x_70_);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_newlineFn___boxed(lean_object* v_c_72_, lean_object* v_s_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lake_Toml_newlineFn(v_c_72_, v_s_73_);
lean_dec_ref(v_c_72_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn(lean_object* v_a_76_, lean_object* v_a_77_){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_78_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn___closed__0));
v___x_79_ = l_Lean_Parser_takeUntilFn(v___x_78_, v_a_76_, v_a_77_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn___boxed(lean_object* v_a_80_, lean_object* v_a_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn(v_a_80_, v_a_81_);
lean_dec_ref(v_a_80_);
return v_res_82_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(lean_object* v_x_83_, lean_object* v_x_84_){
_start:
{
if (lean_obj_tag(v_x_83_) == 0)
{
if (lean_obj_tag(v_x_84_) == 0)
{
uint8_t v___x_85_; 
v___x_85_ = 1;
return v___x_85_;
}
else
{
uint8_t v___x_86_; 
v___x_86_ = 0;
return v___x_86_;
}
}
else
{
if (lean_obj_tag(v_x_84_) == 0)
{
uint8_t v___x_87_; 
v___x_87_ = 0;
return v___x_87_;
}
else
{
lean_object* v_val_88_; lean_object* v_val_89_; uint8_t v___x_90_; 
v_val_88_ = lean_ctor_get(v_x_83_, 0);
v_val_89_ = lean_ctor_get(v_x_84_, 0);
v___x_90_ = l_Lean_Parser_instBEqError_beq(v_val_88_, v_val_89_);
return v___x_90_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0___boxed(lean_object* v_x_91_, lean_object* v_x_92_){
_start:
{
uint8_t v_res_93_; lean_object* v_r_94_; 
v_res_93_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_x_91_, v_x_92_);
lean_dec(v_x_92_);
lean_dec(v_x_91_);
v_r_94_ = lean_box(v_res_93_);
return v_r_94_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_commentFn(lean_object* v_a_99_, lean_object* v_a_100_){
_start:
{
uint32_t v___x_101_; lean_object* v___x_102_; lean_object* v_s_103_; lean_object* v_errorMsg_104_; lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_101_ = 35;
v___x_102_ = ((lean_object*)(l_Lake_Toml_commentFn___closed__1));
v_s_103_ = l_Lake_Toml_chFn(v___x_101_, v___x_102_, v_a_99_, v_a_100_);
v_errorMsg_104_ = lean_ctor_get(v_s_103_, 4);
v___x_105_ = lean_box(0);
v___x_106_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_104_, v___x_105_);
if (v___x_106_ == 0)
{
return v_s_103_;
}
else
{
lean_object* v___x_107_; 
v___x_107_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn(v_a_99_, v_s_103_);
return v___x_107_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_commentFn___boxed(lean_object* v_a_108_, lean_object* v_a_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lake_Toml_commentFn(v_a_108_, v_a_109_);
lean_dec_ref(v_a_108_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_wsNewlineFn(lean_object* v_c_111_, lean_object* v_s_112_){
_start:
{
lean_object* v_toInputContext_113_; lean_object* v_pos_114_; uint8_t v___x_118_; 
v_toInputContext_113_ = lean_ctor_get(v_c_111_, 0);
v_pos_114_ = lean_ctor_get(v_s_112_, 2);
v___x_118_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_113_, v_pos_114_);
if (v___x_118_ == 0)
{
lean_object* v_inputString_119_; uint32_t v_curr_120_; uint32_t v___x_121_; uint8_t v___x_122_; 
v_inputString_119_ = lean_ctor_get(v_toInputContext_113_, 0);
v_curr_120_ = lean_string_utf8_get_fast(v_inputString_119_, v_pos_114_);
v___x_121_ = 32;
v___x_122_ = lean_uint32_dec_eq(v_curr_120_, v___x_121_);
if (v___x_122_ == 0)
{
uint32_t v___x_123_; uint8_t v___x_124_; 
v___x_123_ = 9;
v___x_124_ = lean_uint32_dec_eq(v_curr_120_, v___x_123_);
if (v___x_124_ == 0)
{
uint32_t v___x_125_; uint8_t v___x_126_; 
v___x_125_ = 10;
v___x_126_ = lean_uint32_dec_eq(v_curr_120_, v___x_125_);
if (v___x_126_ == 0)
{
uint32_t v___x_127_; uint8_t v___x_128_; 
v___x_127_ = 13;
v___x_128_ = lean_uint32_dec_eq(v_curr_120_, v___x_127_);
if (v___x_128_ == 0)
{
return v_s_112_;
}
else
{
lean_object* v___x_129_; lean_object* v_s_130_; lean_object* v_errorMsg_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
lean_inc(v_pos_114_);
v___x_129_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_112_, v_c_111_, v_pos_114_);
lean_dec(v_pos_114_);
v_s_130_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn(v_c_111_, v___x_129_);
v_errorMsg_131_ = lean_ctor_get(v_s_130_, 4);
v___x_132_ = lean_box(0);
v___x_133_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_131_, v___x_132_);
if (v___x_133_ == 0)
{
return v_s_130_;
}
else
{
v_s_112_ = v_s_130_;
goto _start;
}
}
}
else
{
lean_inc(v_pos_114_);
goto v___jp_115_;
}
}
else
{
lean_inc(v_pos_114_);
goto v___jp_115_;
}
}
else
{
lean_inc(v_pos_114_);
goto v___jp_115_;
}
}
else
{
return v_s_112_;
}
v___jp_115_:
{
lean_object* v___x_116_; 
v___x_116_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_112_, v_c_111_, v_pos_114_);
lean_dec(v_pos_114_);
v_s_112_ = v___x_116_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_wsNewlineFn___boxed(lean_object* v_c_135_, lean_object* v_s_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Lake_Toml_wsNewlineFn(v_c_135_, v_s_136_);
lean_dec_ref(v_c_135_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingFn(lean_object* v_c_138_, lean_object* v_s_139_){
_start:
{
lean_object* v_toInputContext_140_; lean_object* v_pos_141_; uint8_t v___x_145_; 
v_toInputContext_140_ = lean_ctor_get(v_c_138_, 0);
v_pos_141_ = lean_ctor_get(v_s_139_, 2);
v___x_145_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_140_, v_pos_141_);
if (v___x_145_ == 0)
{
lean_object* v_inputString_146_; uint32_t v_curr_147_; uint32_t v___x_148_; uint8_t v___x_149_; 
v_inputString_146_ = lean_ctor_get(v_toInputContext_140_, 0);
v_curr_147_ = lean_string_utf8_get_fast(v_inputString_146_, v_pos_141_);
v___x_148_ = 32;
v___x_149_ = lean_uint32_dec_eq(v_curr_147_, v___x_148_);
if (v___x_149_ == 0)
{
uint32_t v___x_150_; uint8_t v___x_151_; 
v___x_150_ = 9;
v___x_151_ = lean_uint32_dec_eq(v_curr_147_, v___x_150_);
if (v___x_151_ == 0)
{
uint32_t v___x_152_; uint8_t v___x_153_; 
v___x_152_ = 10;
v___x_153_ = lean_uint32_dec_eq(v_curr_147_, v___x_152_);
if (v___x_153_ == 0)
{
uint32_t v___x_154_; uint8_t v___x_155_; 
v___x_154_ = 13;
v___x_155_ = lean_uint32_dec_eq(v_curr_147_, v___x_154_);
if (v___x_155_ == 0)
{
uint32_t v___x_156_; uint8_t v___x_157_; 
v___x_156_ = 35;
v___x_157_ = lean_uint32_dec_eq(v_curr_147_, v___x_156_);
if (v___x_157_ == 0)
{
return v_s_139_;
}
else
{
lean_object* v___x_158_; lean_object* v_s_159_; lean_object* v_errorMsg_160_; lean_object* v___x_161_; uint8_t v___x_162_; 
lean_inc(v_pos_141_);
v___x_158_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_139_, v_c_138_, v_pos_141_);
lean_dec(v_pos_141_);
v_s_159_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn(v_c_138_, v___x_158_);
v_errorMsg_160_ = lean_ctor_get(v_s_159_, 4);
v___x_161_ = lean_box(0);
v___x_162_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_160_, v___x_161_);
if (v___x_162_ == 0)
{
return v_s_159_;
}
else
{
v_s_139_ = v_s_159_;
goto _start;
}
}
}
else
{
lean_object* v___x_164_; lean_object* v_s_165_; lean_object* v_errorMsg_166_; lean_object* v___x_167_; uint8_t v___x_168_; 
lean_inc(v_pos_141_);
v___x_164_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_139_, v_c_138_, v_pos_141_);
lean_dec(v_pos_141_);
v_s_165_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn(v_c_138_, v___x_164_);
v_errorMsg_166_ = lean_ctor_get(v_s_165_, 4);
v___x_167_ = lean_box(0);
v___x_168_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_166_, v___x_167_);
if (v___x_168_ == 0)
{
return v_s_165_;
}
else
{
v_s_139_ = v_s_165_;
goto _start;
}
}
}
else
{
lean_inc(v_pos_141_);
goto v___jp_142_;
}
}
else
{
lean_inc(v_pos_141_);
goto v___jp_142_;
}
}
else
{
lean_inc(v_pos_141_);
goto v___jp_142_;
}
}
else
{
return v_s_139_;
}
v___jp_142_:
{
lean_object* v___x_143_; 
v___x_143_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_139_, v_c_138_, v_pos_141_);
lean_dec(v_pos_141_);
v_s_139_ = v___x_143_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingFn___boxed(lean_object* v_c_170_, lean_object* v_s_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Lake_Toml_trailingFn(v_c_170_, v_s_171_);
lean_dec_ref(v_c_170_);
return v_res_172_;
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_isEscapeChar(uint32_t v_c_173_){
_start:
{
uint32_t v___x_174_; uint8_t v___x_175_; 
v___x_174_ = 98;
v___x_175_ = lean_uint32_dec_eq(v_c_173_, v___x_174_);
if (v___x_175_ == 0)
{
uint32_t v___x_176_; uint8_t v___x_177_; 
v___x_176_ = 116;
v___x_177_ = lean_uint32_dec_eq(v_c_173_, v___x_176_);
if (v___x_177_ == 0)
{
uint32_t v___x_178_; uint8_t v___x_179_; 
v___x_178_ = 110;
v___x_179_ = lean_uint32_dec_eq(v_c_173_, v___x_178_);
if (v___x_179_ == 0)
{
uint32_t v___x_180_; uint8_t v___x_181_; 
v___x_180_ = 102;
v___x_181_ = lean_uint32_dec_eq(v_c_173_, v___x_180_);
if (v___x_181_ == 0)
{
uint32_t v___x_182_; uint8_t v___x_183_; 
v___x_182_ = 114;
v___x_183_ = lean_uint32_dec_eq(v_c_173_, v___x_182_);
if (v___x_183_ == 0)
{
uint32_t v___x_184_; uint8_t v___x_185_; 
v___x_184_ = 34;
v___x_185_ = lean_uint32_dec_eq(v_c_173_, v___x_184_);
if (v___x_185_ == 0)
{
uint32_t v___x_186_; uint8_t v___x_187_; 
v___x_186_ = 92;
v___x_187_ = lean_uint32_dec_eq(v_c_173_, v___x_186_);
return v___x_187_;
}
else
{
return v___x_185_;
}
}
else
{
return v___x_183_;
}
}
else
{
return v___x_181_;
}
}
else
{
return v___x_179_;
}
}
else
{
return v___x_177_;
}
}
else
{
return v___x_175_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_isEscapeChar___boxed(lean_object* v_c_188_){
_start:
{
uint32_t v_c_boxed_189_; uint8_t v_res_190_; lean_object* v_r_191_; 
v_c_boxed_189_ = lean_unbox_uint32(v_c_188_);
lean_dec(v_c_188_);
v_res_190_ = l_Lake_Toml_isEscapeChar(v_c_boxed_189_);
v_r_191_ = lean_box(v_res_190_);
return v_r_191_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___lam__0(lean_object* v___y_192_, lean_object* v___y_193_){
_start:
{
lean_object* v_s_194_; lean_object* v_errorMsg_195_; lean_object* v___x_196_; uint8_t v___x_197_; 
v_s_194_ = l_Lake_Toml_wsFn(v___y_192_, v___y_193_);
v_errorMsg_195_ = lean_ctor_get(v_s_194_, 4);
v___x_196_ = lean_box(0);
v___x_197_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_195_, v___x_196_);
if (v___x_197_ == 0)
{
return v_s_194_;
}
else
{
lean_object* v_s_198_; lean_object* v_errorMsg_199_; uint8_t v___x_200_; 
v_s_198_ = l_Lake_Toml_newlineFn(v___y_192_, v_s_194_);
v_errorMsg_199_ = lean_ctor_get(v_s_198_, 4);
v___x_200_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_199_, v___x_196_);
if (v___x_200_ == 0)
{
return v_s_198_;
}
else
{
lean_object* v___x_201_; 
v___x_201_ = l_Lake_Toml_wsNewlineFn(v___y_192_, v_s_198_);
return v___x_201_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___lam__0___boxed(lean_object* v___y_202_, lean_object* v___y_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___lam__0(v___y_202_, v___y_203_);
lean_dec_ref(v___y_202_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___lam__1(lean_object* v___y_205_, lean_object* v___y_206_){
_start:
{
lean_object* v_s_207_; lean_object* v_errorMsg_208_; lean_object* v___x_209_; uint8_t v___x_210_; 
v_s_207_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn(v___y_205_, v___y_206_);
v_errorMsg_208_ = lean_ctor_get(v_s_207_, 4);
v___x_209_ = lean_box(0);
v___x_210_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_208_, v___x_209_);
if (v___x_210_ == 0)
{
return v_s_207_;
}
else
{
lean_object* v___x_211_; 
v___x_211_ = l_Lake_Toml_wsNewlineFn(v___y_205_, v_s_207_);
return v___x_211_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___lam__1___boxed(lean_object* v___y_212_, lean_object* v___y_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___lam__1(v___y_212_, v___y_213_);
lean_dec_ref(v___y_212_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00__private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn_spec__0(lean_object* v_c_215_, lean_object* v_x_216_, lean_object* v_x_217_){
_start:
{
lean_object* v_zero_218_; uint8_t v_isZero_219_; 
v_zero_218_ = lean_unsigned_to_nat(0u);
v_isZero_219_ = lean_nat_dec_eq(v_x_216_, v_zero_218_);
if (v_isZero_219_ == 1)
{
lean_dec(v_x_216_);
return v_x_217_;
}
else
{
lean_object* v_s_220_; lean_object* v_errorMsg_221_; lean_object* v___x_222_; uint8_t v___x_223_; 
v_s_220_ = l_Lean_Parser_hexDigitFn(v_c_215_, v_x_217_);
v_errorMsg_221_ = lean_ctor_get(v_s_220_, 4);
v___x_222_ = lean_box(0);
v___x_223_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_221_, v___x_222_);
if (v___x_223_ == 0)
{
lean_dec(v_x_216_);
return v_s_220_;
}
else
{
lean_object* v_one_224_; lean_object* v_n_225_; 
v_one_224_ = lean_unsigned_to_nat(1u);
v_n_225_ = lean_nat_sub(v_x_216_, v_one_224_);
lean_dec(v_x_216_);
v_x_216_ = v_n_225_;
v_x_217_ = v_s_220_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00__private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn_spec__0___boxed(lean_object* v_c_227_, lean_object* v_x_228_, lean_object* v_x_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00__private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn_spec__0(v_c_227_, v_x_228_, v_x_229_);
lean_dec_ref(v_c_227_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn(uint8_t v_stringGap_240_, lean_object* v_c_241_, lean_object* v_s_242_){
_start:
{
lean_object* v_toInputContext_243_; lean_object* v_pos_244_; lean_object* v___x_245_; lean_object* v_expected_246_; uint8_t v___x_247_; 
v_toInputContext_243_ = lean_ctor_get(v_c_241_, 0);
v_pos_244_ = lean_ctor_get(v_s_242_, 2);
v___x_245_ = lean_box(0);
v_expected_246_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__1));
v___x_247_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_243_, v_pos_244_);
if (v___x_247_ == 0)
{
lean_object* v_inputString_248_; uint32_t v_curr_249_; uint8_t v___x_250_; 
v_inputString_248_ = lean_ctor_get(v_toInputContext_243_, 0);
v_curr_249_ = lean_string_utf8_get_fast(v_inputString_248_, v_pos_244_);
v___x_250_ = l_Lake_Toml_isEscapeChar(v_curr_249_);
if (v___x_250_ == 0)
{
uint32_t v___x_251_; uint8_t v___x_252_; 
v___x_251_ = 117;
v___x_252_ = lean_uint32_dec_eq(v_curr_249_, v___x_251_);
if (v___x_252_ == 0)
{
uint32_t v___x_253_; uint8_t v___x_254_; 
v___x_253_ = 85;
v___x_254_ = lean_uint32_dec_eq(v_curr_249_, v___x_253_);
if (v___x_254_ == 0)
{
lean_object* v___f_255_; uint8_t v___x_256_; lean_object* v_p_258_; uint32_t v___x_263_; uint8_t v___x_264_; 
v___f_255_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__2));
v___x_256_ = 1;
v___x_263_ = 32;
v___x_264_ = lean_uint32_dec_eq(v_curr_249_, v___x_263_);
if (v___x_264_ == 0)
{
uint32_t v___x_265_; uint8_t v___x_266_; 
v___x_265_ = 9;
v___x_266_ = lean_uint32_dec_eq(v_curr_249_, v___x_265_);
if (v___x_266_ == 0)
{
uint32_t v___x_267_; uint8_t v___x_268_; 
v___x_267_ = 10;
v___x_268_ = lean_uint32_dec_eq(v_curr_249_, v___x_267_);
if (v___x_268_ == 0)
{
uint32_t v___x_269_; uint8_t v___x_270_; 
v___x_269_ = 13;
v___x_270_ = lean_uint32_dec_eq(v_curr_249_, v___x_269_);
if (v___x_270_ == 0)
{
lean_object* v___x_271_; lean_object* v___x_272_; 
lean_dec_ref(v_c_241_);
v___x_271_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__4));
v___x_272_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_242_, v___x_271_, v___x_245_, v___x_256_);
return v___x_272_;
}
else
{
lean_object* v___f_273_; 
v___f_273_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__5));
v_p_258_ = v___f_273_;
goto v___jp_257_;
}
}
else
{
lean_object* v___x_274_; 
v___x_274_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__6));
v_p_258_ = v___x_274_;
goto v___jp_257_;
}
}
else
{
v_p_258_ = v___f_255_;
goto v___jp_257_;
}
}
else
{
v_p_258_ = v___f_255_;
goto v___jp_257_;
}
v___jp_257_:
{
if (v_stringGap_240_ == 0)
{
lean_object* v___x_259_; lean_object* v___x_260_; 
lean_dec_ref(v_c_241_);
v___x_259_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__3));
v___x_260_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_242_, v___x_259_, v_expected_246_, v___x_256_);
return v___x_260_;
}
else
{
lean_object* v___x_261_; lean_object* v___x_262_; 
lean_inc(v_pos_244_);
v___x_261_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_242_, v_c_241_, v_pos_244_);
lean_dec(v_pos_244_);
lean_inc_ref(v_p_258_);
v___x_262_ = lean_apply_2(v_p_258_, v_c_241_, v___x_261_);
return v___x_262_;
}
}
}
else
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
lean_inc(v_pos_244_);
v___x_275_ = lean_unsigned_to_nat(8u);
v___x_276_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_242_, v_c_241_, v_pos_244_);
lean_dec(v_pos_244_);
v___x_277_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00__private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn_spec__0(v_c_241_, v___x_275_, v___x_276_);
lean_dec_ref(v_c_241_);
return v___x_277_;
}
}
else
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
lean_inc(v_pos_244_);
v___x_278_ = lean_unsigned_to_nat(4u);
v___x_279_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_242_, v_c_241_, v_pos_244_);
lean_dec(v_pos_244_);
v___x_280_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00__private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn_spec__0(v_c_241_, v___x_278_, v___x_279_);
lean_dec_ref(v_c_241_);
return v___x_280_;
}
}
else
{
lean_object* v___x_281_; 
lean_inc(v_pos_244_);
v___x_281_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_242_, v_c_241_, v_pos_244_);
lean_dec(v_pos_244_);
lean_dec_ref(v_c_241_);
return v___x_281_;
}
}
else
{
lean_object* v___x_282_; 
lean_dec_ref(v_c_241_);
v___x_282_ = l_Lean_Parser_ParserState_mkEOIError(v_s_242_, v_expected_246_);
return v___x_282_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___boxed(lean_object* v_stringGap_283_, lean_object* v_c_284_, lean_object* v_s_285_){
_start:
{
uint8_t v_stringGap_boxed_286_; lean_object* v_res_287_; 
v_stringGap_boxed_286_ = lean_unbox(v_stringGap_283_);
v_res_287_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn(v_stringGap_boxed_286_, v_c_284_, v_s_285_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_basicStringAuxFn(lean_object* v_startPos_289_, lean_object* v_c_290_, lean_object* v_s_291_){
_start:
{
lean_object* v_toInputContext_292_; lean_object* v_pos_293_; uint8_t v___x_294_; 
v_toInputContext_292_ = lean_ctor_get(v_c_290_, 0);
v_pos_293_ = lean_ctor_get(v_s_291_, 2);
v___x_294_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_292_, v_pos_293_);
if (v___x_294_ == 0)
{
lean_object* v_inputString_295_; uint32_t v_curr_296_; uint32_t v___x_297_; uint8_t v___x_298_; 
v_inputString_295_ = lean_ctor_get(v_toInputContext_292_, 0);
v_curr_296_ = lean_string_utf8_get_fast(v_inputString_295_, v_pos_293_);
v___x_297_ = 34;
v___x_298_ = lean_uint32_dec_eq(v_curr_296_, v___x_297_);
if (v___x_298_ == 0)
{
uint32_t v___x_299_; uint8_t v___x_300_; 
v___x_299_ = 92;
v___x_300_ = lean_uint32_dec_eq(v_curr_296_, v___x_299_);
if (v___x_300_ == 0)
{
uint8_t v___x_301_; 
v___x_301_ = l_Lake_Toml_isControlChar(v_curr_296_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; 
lean_inc(v_pos_293_);
v___x_302_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_291_, v_c_290_, v_pos_293_);
lean_dec(v_pos_293_);
v_s_291_ = v___x_302_;
goto _start;
}
else
{
lean_object* v___x_304_; lean_object* v___x_305_; 
lean_dec_ref(v_c_290_);
lean_dec(v_startPos_289_);
v___x_304_ = lean_box(0);
v___x_305_ = l_Lake_Toml_mkUnexpectedCharError(v_s_291_, v_curr_296_, v___x_304_, v___x_301_);
return v___x_305_;
}
}
else
{
lean_object* v___x_306_; lean_object* v_s_307_; lean_object* v_errorMsg_308_; lean_object* v___x_309_; uint8_t v___x_310_; 
lean_inc(v_pos_293_);
v___x_306_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_291_, v_c_290_, v_pos_293_);
lean_dec(v_pos_293_);
lean_inc_ref(v_c_290_);
v_s_307_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn(v___x_294_, v_c_290_, v___x_306_);
v_errorMsg_308_ = lean_ctor_get(v_s_307_, 4);
v___x_309_ = lean_box(0);
v___x_310_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_308_, v___x_309_);
if (v___x_310_ == 0)
{
lean_dec_ref(v_c_290_);
lean_dec(v_startPos_289_);
return v_s_307_;
}
else
{
v_s_291_ = v_s_307_;
goto _start;
}
}
}
else
{
lean_object* v___x_312_; 
lean_inc(v_pos_293_);
lean_dec(v_startPos_289_);
v___x_312_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_291_, v_c_290_, v_pos_293_);
lean_dec(v_pos_293_);
lean_dec_ref(v_c_290_);
return v___x_312_;
}
}
else
{
lean_object* v___x_313_; lean_object* v___x_314_; 
lean_dec_ref(v_c_290_);
v___x_313_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_basicStringAuxFn___closed__0));
v___x_314_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_291_, v___x_313_, v_startPos_289_);
return v___x_314_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_basicStringFn(lean_object* v_a_319_, lean_object* v_a_320_){
_start:
{
lean_object* v_pos_321_; uint32_t v___x_322_; lean_object* v___x_323_; lean_object* v_s_324_; lean_object* v_errorMsg_325_; lean_object* v___x_326_; uint8_t v___x_327_; 
v_pos_321_ = lean_ctor_get(v_a_320_, 2);
lean_inc(v_pos_321_);
v___x_322_ = 34;
v___x_323_ = ((lean_object*)(l_Lake_Toml_basicStringFn___closed__1));
v_s_324_ = l_Lake_Toml_chFn(v___x_322_, v___x_323_, v_a_319_, v_a_320_);
v_errorMsg_325_ = lean_ctor_get(v_s_324_, 4);
v___x_326_ = lean_box(0);
v___x_327_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_325_, v___x_326_);
if (v___x_327_ == 0)
{
lean_dec(v_pos_321_);
lean_dec_ref(v_a_319_);
return v_s_324_;
}
else
{
lean_object* v___x_328_; 
v___x_328_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_basicStringAuxFn(v_pos_321_, v_a_319_, v_s_324_);
return v___x_328_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_literalStringAuxFn(lean_object* v_startPos_330_, lean_object* v_c_331_, lean_object* v_s_332_){
_start:
{
lean_object* v_toInputContext_333_; lean_object* v_pos_334_; uint8_t v___x_335_; 
v_toInputContext_333_ = lean_ctor_get(v_c_331_, 0);
v_pos_334_ = lean_ctor_get(v_s_332_, 2);
v___x_335_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_333_, v_pos_334_);
if (v___x_335_ == 0)
{
lean_object* v_inputString_336_; uint32_t v_curr_337_; uint32_t v___x_338_; uint8_t v___x_339_; 
v_inputString_336_ = lean_ctor_get(v_toInputContext_333_, 0);
v_curr_337_ = lean_string_utf8_get_fast(v_inputString_336_, v_pos_334_);
v___x_338_ = 39;
v___x_339_ = lean_uint32_dec_eq(v_curr_337_, v___x_338_);
if (v___x_339_ == 0)
{
uint8_t v___x_340_; 
v___x_340_ = l_Lake_Toml_isControlChar(v_curr_337_);
if (v___x_340_ == 0)
{
lean_object* v___x_341_; 
lean_inc(v_pos_334_);
v___x_341_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_332_, v_c_331_, v_pos_334_);
lean_dec(v_pos_334_);
v_s_332_ = v___x_341_;
goto _start;
}
else
{
lean_object* v___x_343_; lean_object* v___x_344_; 
lean_dec(v_startPos_330_);
v___x_343_ = lean_box(0);
v___x_344_ = l_Lake_Toml_mkUnexpectedCharError(v_s_332_, v_curr_337_, v___x_343_, v___x_340_);
return v___x_344_;
}
}
else
{
lean_object* v___x_345_; 
lean_inc(v_pos_334_);
lean_dec(v_startPos_330_);
v___x_345_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_332_, v_c_331_, v_pos_334_);
lean_dec(v_pos_334_);
return v___x_345_;
}
}
else
{
lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_346_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_literalStringAuxFn___closed__0));
v___x_347_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_332_, v___x_346_, v_startPos_330_);
return v___x_347_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_literalStringAuxFn___boxed(lean_object* v_startPos_348_, lean_object* v_c_349_, lean_object* v_s_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_literalStringAuxFn(v_startPos_348_, v_c_349_, v_s_350_);
lean_dec_ref(v_c_349_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_literalStringFn(lean_object* v_a_356_, lean_object* v_a_357_){
_start:
{
lean_object* v_pos_358_; uint32_t v___x_359_; lean_object* v___x_360_; lean_object* v_s_361_; lean_object* v_errorMsg_362_; lean_object* v___x_363_; uint8_t v___x_364_; 
v_pos_358_ = lean_ctor_get(v_a_357_, 2);
lean_inc(v_pos_358_);
v___x_359_ = 39;
v___x_360_ = ((lean_object*)(l_Lake_Toml_literalStringFn___closed__1));
v_s_361_ = l_Lake_Toml_chFn(v___x_359_, v___x_360_, v_a_356_, v_a_357_);
v_errorMsg_362_ = lean_ctor_get(v_s_361_, 4);
v___x_363_ = lean_box(0);
v___x_364_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_362_, v___x_363_);
if (v___x_364_ == 0)
{
lean_dec(v_pos_358_);
return v_s_361_;
}
else
{
lean_object* v___x_365_; 
v___x_365_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_literalStringAuxFn(v_pos_358_, v_a_356_, v_s_361_);
return v___x_365_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_literalStringFn___boxed(lean_object* v_a_366_, lean_object* v_a_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l_Lake_Toml_literalStringFn(v_a_366_, v_a_367_);
lean_dec_ref(v_a_366_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn(lean_object* v_startPos_371_, lean_object* v_quoteDepth_372_, lean_object* v_c_373_, lean_object* v_s_374_){
_start:
{
lean_object* v_toInputContext_375_; lean_object* v_pos_376_; uint8_t v___x_381_; 
v_toInputContext_375_ = lean_ctor_get(v_c_373_, 0);
v_pos_376_ = lean_ctor_get(v_s_374_, 2);
v___x_381_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_375_, v_pos_376_);
if (v___x_381_ == 0)
{
lean_object* v_inputString_382_; uint8_t v___x_383_; uint32_t v_curr_384_; uint32_t v___x_385_; uint8_t v___x_386_; 
v_inputString_382_ = lean_ctor_get(v_toInputContext_375_, 0);
v___x_383_ = 1;
v_curr_384_ = lean_string_utf8_get_fast(v_inputString_382_, v_pos_376_);
v___x_385_ = 39;
v___x_386_ = lean_uint32_dec_eq(v_curr_384_, v___x_385_);
if (v___x_386_ == 0)
{
lean_object* v___x_387_; uint8_t v___x_388_; 
v___x_387_ = lean_unsigned_to_nat(3u);
v___x_388_ = lean_nat_dec_le(v___x_387_, v_quoteDepth_372_);
lean_dec(v_quoteDepth_372_);
if (v___x_388_ == 0)
{
uint32_t v___x_389_; uint8_t v___x_390_; 
v___x_389_ = 10;
v___x_390_ = lean_uint32_dec_eq(v_curr_384_, v___x_389_);
if (v___x_390_ == 0)
{
uint32_t v___x_391_; uint8_t v___x_392_; 
v___x_391_ = 13;
v___x_392_ = lean_uint32_dec_eq(v_curr_384_, v___x_391_);
if (v___x_392_ == 0)
{
uint8_t v___x_393_; 
v___x_393_ = l_Lake_Toml_isControlChar(v_curr_384_);
if (v___x_393_ == 0)
{
lean_inc(v_pos_376_);
goto v___jp_377_;
}
else
{
lean_object* v___x_394_; lean_object* v___x_395_; 
lean_dec(v_startPos_371_);
v___x_394_ = lean_box(0);
v___x_395_ = l_Lake_Toml_mkUnexpectedCharError(v_s_374_, v_curr_384_, v___x_394_, v___x_383_);
return v___x_395_;
}
}
else
{
lean_object* v___x_396_; lean_object* v_s_397_; lean_object* v_errorMsg_398_; lean_object* v___x_399_; uint8_t v___x_400_; 
lean_inc(v_pos_376_);
v___x_396_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_374_, v_c_373_, v_pos_376_);
lean_dec(v_pos_376_);
v_s_397_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn(v_c_373_, v___x_396_);
v_errorMsg_398_ = lean_ctor_get(v_s_397_, 4);
v___x_399_ = lean_box(0);
v___x_400_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_398_, v___x_399_);
if (v___x_400_ == 0)
{
lean_dec(v_startPos_371_);
return v_s_397_;
}
else
{
lean_object* v___x_401_; 
v___x_401_ = lean_unsigned_to_nat(0u);
v_quoteDepth_372_ = v___x_401_;
v_s_374_ = v_s_397_;
goto _start;
}
}
}
else
{
lean_inc(v_pos_376_);
goto v___jp_377_;
}
}
else
{
lean_dec(v_startPos_371_);
return v_s_374_;
}
}
else
{
lean_object* v_s_403_; lean_object* v___x_404_; uint8_t v___x_405_; 
lean_inc(v_pos_376_);
v_s_403_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_374_, v_c_373_, v_pos_376_);
lean_dec(v_pos_376_);
v___x_404_ = lean_unsigned_to_nat(5u);
v___x_405_ = lean_nat_dec_le(v___x_404_, v_quoteDepth_372_);
if (v___x_405_ == 0)
{
lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_406_ = lean_unsigned_to_nat(1u);
v___x_407_ = lean_nat_add(v_quoteDepth_372_, v___x_406_);
lean_dec(v_quoteDepth_372_);
v_quoteDepth_372_ = v___x_407_;
v_s_374_ = v_s_403_;
goto _start;
}
else
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
lean_dec(v_quoteDepth_372_);
lean_dec(v_startPos_371_);
v___x_409_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___closed__0));
v___x_410_ = lean_box(0);
v___x_411_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_403_, v___x_409_, v___x_410_, v___x_383_);
return v___x_411_;
}
}
}
else
{
lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_412_ = lean_unsigned_to_nat(3u);
v___x_413_ = lean_nat_dec_le(v___x_412_, v_quoteDepth_372_);
lean_dec(v_quoteDepth_372_);
if (v___x_413_ == 0)
{
lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_414_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___closed__1));
v___x_415_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_374_, v___x_414_, v_startPos_371_);
return v___x_415_;
}
else
{
lean_dec(v_startPos_371_);
return v_s_374_;
}
}
v___jp_377_:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = lean_unsigned_to_nat(0u);
v___x_379_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_374_, v_c_373_, v_pos_376_);
lean_dec(v_pos_376_);
v_quoteDepth_372_ = v___x_378_;
v_s_374_ = v___x_379_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___boxed(lean_object* v_startPos_416_, lean_object* v_quoteDepth_417_, lean_object* v_c_418_, lean_object* v_s_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn(v_startPos_416_, v_quoteDepth_417_, v_c_418_, v_s_419_);
lean_dec_ref(v_c_418_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0(lean_object* v_c_425_, lean_object* v_x_426_, lean_object* v_x_427_){
_start:
{
lean_object* v_zero_428_; uint8_t v_isZero_429_; 
v_zero_428_ = lean_unsigned_to_nat(0u);
v_isZero_429_ = lean_nat_dec_eq(v_x_426_, v_zero_428_);
if (v_isZero_429_ == 1)
{
lean_dec(v_x_426_);
return v_x_427_;
}
else
{
uint32_t v___x_430_; lean_object* v___x_431_; lean_object* v_s_432_; lean_object* v_errorMsg_433_; lean_object* v___x_434_; uint8_t v___x_435_; 
v___x_430_ = 39;
v___x_431_ = ((lean_object*)(l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0___closed__1));
v_s_432_ = l_Lake_Toml_chFn(v___x_430_, v___x_431_, v_c_425_, v_x_427_);
v_errorMsg_433_ = lean_ctor_get(v_s_432_, 4);
v___x_434_ = lean_box(0);
v___x_435_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_433_, v___x_434_);
if (v___x_435_ == 0)
{
lean_dec(v_x_426_);
return v_s_432_;
}
else
{
lean_object* v_one_436_; lean_object* v_n_437_; 
v_one_436_ = lean_unsigned_to_nat(1u);
v_n_437_ = lean_nat_sub(v_x_426_, v_one_436_);
lean_dec(v_x_426_);
v_x_426_ = v_n_437_;
v_x_427_ = v_s_432_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0___boxed(lean_object* v_c_439_, lean_object* v_x_440_, lean_object* v_x_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0(v_c_439_, v_x_440_, v_x_441_);
lean_dec_ref(v_c_439_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_mlLiteralStringFn___lam__0(lean_object* v___x_443_, lean_object* v___y_444_, lean_object* v___y_445_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0(v___y_444_, v___x_443_, v___y_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_mlLiteralStringFn___lam__0___boxed(lean_object* v___x_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Lake_Toml_mlLiteralStringFn___lam__0(v___x_447_, v___y_448_, v___y_449_);
lean_dec_ref(v___y_448_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_mlLiteralStringFn(lean_object* v_a_453_, lean_object* v_a_454_){
_start:
{
lean_object* v_pos_455_; lean_object* v___f_456_; lean_object* v_s_457_; lean_object* v_errorMsg_458_; lean_object* v___x_459_; uint8_t v___x_460_; 
v_pos_455_ = lean_ctor_get(v_a_454_, 2);
lean_inc(v_pos_455_);
v___f_456_ = ((lean_object*)(l_Lake_Toml_mlLiteralStringFn___closed__0));
lean_inc_ref(v_a_453_);
v_s_457_ = l_Lean_Parser_atomicFn(v___f_456_, v_a_453_, v_a_454_);
v_errorMsg_458_ = lean_ctor_get(v_s_457_, 4);
v___x_459_ = lean_box(0);
v___x_460_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_458_, v___x_459_);
if (v___x_460_ == 0)
{
lean_dec(v_pos_455_);
lean_dec_ref(v_a_453_);
return v_s_457_;
}
else
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = lean_unsigned_to_nat(0u);
v___x_462_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn(v_pos_455_, v___x_461_, v_a_453_, v_s_457_);
lean_dec_ref(v_a_453_);
return v___x_462_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_mlBasicStringAuxFn(lean_object* v_startPos_464_, lean_object* v_quoteDepth_465_, lean_object* v_c_466_, lean_object* v_s_467_){
_start:
{
lean_object* v_toInputContext_468_; lean_object* v_pos_469_; uint8_t v___x_474_; 
v_toInputContext_468_ = lean_ctor_get(v_c_466_, 0);
v_pos_469_ = lean_ctor_get(v_s_467_, 2);
v___x_474_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_468_, v_pos_469_);
if (v___x_474_ == 0)
{
lean_object* v_inputString_475_; uint8_t v___x_476_; uint32_t v_curr_477_; uint32_t v___x_478_; uint8_t v___x_479_; 
v_inputString_475_ = lean_ctor_get(v_toInputContext_468_, 0);
v___x_476_ = 1;
v_curr_477_ = lean_string_utf8_get_fast(v_inputString_475_, v_pos_469_);
v___x_478_ = 34;
v___x_479_ = lean_uint32_dec_eq(v_curr_477_, v___x_478_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; uint8_t v___x_481_; 
v___x_480_ = lean_unsigned_to_nat(3u);
v___x_481_ = lean_nat_dec_le(v___x_480_, v_quoteDepth_465_);
lean_dec(v_quoteDepth_465_);
if (v___x_481_ == 0)
{
uint32_t v___x_482_; uint8_t v___x_483_; 
v___x_482_ = 10;
v___x_483_ = lean_uint32_dec_eq(v_curr_477_, v___x_482_);
if (v___x_483_ == 0)
{
uint32_t v___x_484_; uint8_t v___x_485_; 
v___x_484_ = 13;
v___x_485_ = lean_uint32_dec_eq(v_curr_477_, v___x_484_);
if (v___x_485_ == 0)
{
uint32_t v___x_486_; uint8_t v___x_487_; 
v___x_486_ = 92;
v___x_487_ = lean_uint32_dec_eq(v_curr_477_, v___x_486_);
if (v___x_487_ == 0)
{
uint8_t v___x_488_; 
v___x_488_ = l_Lake_Toml_isControlChar(v_curr_477_);
if (v___x_488_ == 0)
{
lean_inc(v_pos_469_);
goto v___jp_470_;
}
else
{
lean_object* v___x_489_; lean_object* v___x_490_; 
lean_dec_ref(v_c_466_);
lean_dec(v_startPos_464_);
v___x_489_ = lean_box(0);
v___x_490_ = l_Lake_Toml_mkUnexpectedCharError(v_s_467_, v_curr_477_, v___x_489_, v___x_476_);
return v___x_490_;
}
}
else
{
lean_object* v___x_491_; lean_object* v_s_492_; lean_object* v_errorMsg_493_; lean_object* v___x_494_; uint8_t v___x_495_; 
lean_inc(v_pos_469_);
v___x_491_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_467_, v_c_466_, v_pos_469_);
lean_dec(v_pos_469_);
lean_inc_ref(v_c_466_);
v_s_492_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn(v___x_476_, v_c_466_, v___x_491_);
v_errorMsg_493_ = lean_ctor_get(v_s_492_, 4);
v___x_494_ = lean_box(0);
v___x_495_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_493_, v___x_494_);
if (v___x_495_ == 0)
{
lean_dec_ref(v_c_466_);
lean_dec(v_startPos_464_);
return v_s_492_;
}
else
{
lean_object* v___x_496_; 
v___x_496_ = lean_unsigned_to_nat(0u);
v_quoteDepth_465_ = v___x_496_;
v_s_467_ = v_s_492_;
goto _start;
}
}
}
else
{
lean_object* v___x_498_; lean_object* v_s_499_; lean_object* v_errorMsg_500_; lean_object* v___x_501_; uint8_t v___x_502_; 
lean_inc(v_pos_469_);
v___x_498_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_467_, v_c_466_, v_pos_469_);
lean_dec(v_pos_469_);
v_s_499_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn(v_c_466_, v___x_498_);
v_errorMsg_500_ = lean_ctor_get(v_s_499_, 4);
v___x_501_ = lean_box(0);
v___x_502_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_500_, v___x_501_);
if (v___x_502_ == 0)
{
lean_dec_ref(v_c_466_);
lean_dec(v_startPos_464_);
return v_s_499_;
}
else
{
lean_object* v___x_503_; 
v___x_503_ = lean_unsigned_to_nat(0u);
v_quoteDepth_465_ = v___x_503_;
v_s_467_ = v_s_499_;
goto _start;
}
}
}
else
{
lean_inc(v_pos_469_);
goto v___jp_470_;
}
}
else
{
lean_dec_ref(v_c_466_);
lean_dec(v_startPos_464_);
return v_s_467_;
}
}
else
{
lean_object* v_s_505_; lean_object* v___x_506_; uint8_t v___x_507_; 
lean_inc(v_pos_469_);
v_s_505_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_467_, v_c_466_, v_pos_469_);
lean_dec(v_pos_469_);
v___x_506_ = lean_unsigned_to_nat(5u);
v___x_507_ = lean_nat_dec_le(v___x_506_, v_quoteDepth_465_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = lean_unsigned_to_nat(1u);
v___x_509_ = lean_nat_add(v_quoteDepth_465_, v___x_508_);
lean_dec(v_quoteDepth_465_);
v_quoteDepth_465_ = v___x_509_;
v_s_467_ = v_s_505_;
goto _start;
}
else
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
lean_dec_ref(v_c_466_);
lean_dec(v_quoteDepth_465_);
lean_dec(v_startPos_464_);
v___x_511_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___closed__0));
v___x_512_ = lean_box(0);
v___x_513_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_505_, v___x_511_, v___x_512_, v___x_476_);
return v___x_513_;
}
}
}
else
{
lean_object* v___x_514_; uint8_t v___x_515_; 
lean_dec_ref(v_c_466_);
v___x_514_ = lean_unsigned_to_nat(3u);
v___x_515_ = lean_nat_dec_le(v___x_514_, v_quoteDepth_465_);
lean_dec(v_quoteDepth_465_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_mlBasicStringAuxFn___closed__0));
v___x_517_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_467_, v___x_516_, v_startPos_464_);
return v___x_517_;
}
else
{
lean_dec(v_startPos_464_);
return v_s_467_;
}
}
v___jp_470_:
{
lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_471_ = lean_unsigned_to_nat(0u);
v___x_472_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_467_, v_c_466_, v_pos_469_);
lean_dec(v_pos_469_);
v_quoteDepth_465_ = v___x_471_;
v_s_467_ = v___x_472_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0(lean_object* v_c_522_, lean_object* v_x_523_, lean_object* v_x_524_){
_start:
{
lean_object* v_zero_525_; uint8_t v_isZero_526_; 
v_zero_525_ = lean_unsigned_to_nat(0u);
v_isZero_526_ = lean_nat_dec_eq(v_x_523_, v_zero_525_);
if (v_isZero_526_ == 1)
{
lean_dec(v_x_523_);
return v_x_524_;
}
else
{
uint32_t v___x_527_; lean_object* v___x_528_; lean_object* v_s_529_; lean_object* v_errorMsg_530_; lean_object* v___x_531_; uint8_t v___x_532_; 
v___x_527_ = 34;
v___x_528_ = ((lean_object*)(l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0___closed__1));
v_s_529_ = l_Lake_Toml_chFn(v___x_527_, v___x_528_, v_c_522_, v_x_524_);
v_errorMsg_530_ = lean_ctor_get(v_s_529_, 4);
v___x_531_ = lean_box(0);
v___x_532_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_530_, v___x_531_);
if (v___x_532_ == 0)
{
lean_dec(v_x_523_);
return v_s_529_;
}
else
{
lean_object* v_one_533_; lean_object* v_n_534_; 
v_one_533_ = lean_unsigned_to_nat(1u);
v_n_534_ = lean_nat_sub(v_x_523_, v_one_533_);
lean_dec(v_x_523_);
v_x_523_ = v_n_534_;
v_x_524_ = v_s_529_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0___boxed(lean_object* v_c_536_, lean_object* v_x_537_, lean_object* v_x_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0(v_c_536_, v_x_537_, v_x_538_);
lean_dec_ref(v_c_536_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_mlBasicStringFn___lam__0(lean_object* v___x_540_, lean_object* v___y_541_, lean_object* v___y_542_){
_start:
{
lean_object* v___x_543_; 
v___x_543_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0(v___y_541_, v___x_540_, v___y_542_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_mlBasicStringFn___lam__0___boxed(lean_object* v___x_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Lake_Toml_mlBasicStringFn___lam__0(v___x_544_, v___y_545_, v___y_546_);
lean_dec_ref(v___y_545_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_mlBasicStringFn(lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
lean_object* v_pos_552_; lean_object* v___f_553_; lean_object* v_s_554_; lean_object* v_errorMsg_555_; lean_object* v___x_556_; uint8_t v___x_557_; 
v_pos_552_ = lean_ctor_get(v_a_551_, 2);
lean_inc(v_pos_552_);
v___f_553_ = ((lean_object*)(l_Lake_Toml_mlBasicStringFn___closed__0));
lean_inc_ref(v_a_550_);
v_s_554_ = l_Lean_Parser_atomicFn(v___f_553_, v_a_550_, v_a_551_);
v_errorMsg_555_ = lean_ctor_get(v_s_554_, 4);
v___x_556_ = lean_box(0);
v___x_557_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_555_, v___x_556_);
if (v___x_557_ == 0)
{
lean_dec(v_pos_552_);
lean_dec_ref(v_a_550_);
return v_s_554_;
}
else
{
lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_558_ = lean_unsigned_to_nat(0u);
v___x_559_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_mlBasicStringAuxFn(v_pos_552_, v___x_558_, v_a_550_, v_s_554_);
return v___x_559_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn(lean_object* v_a_572_, lean_object* v_a_573_){
_start:
{
lean_object* v___x_574_; lean_object* v_s_575_; lean_object* v_errorMsg_576_; lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_574_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__1));
v_s_575_ = l_Lake_Toml_digitPairFn(v___x_574_, v_a_572_, v_a_573_);
v_errorMsg_576_ = lean_ctor_get(v_s_575_, 4);
v___x_577_ = lean_box(0);
v___x_578_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_576_, v___x_577_);
if (v___x_578_ == 0)
{
return v_s_575_;
}
else
{
uint32_t v___x_579_; lean_object* v___x_580_; lean_object* v_s_581_; lean_object* v_errorMsg_582_; uint8_t v___x_583_; 
v___x_579_ = 58;
v___x_580_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__3));
v_s_581_ = l_Lake_Toml_chFn(v___x_579_, v___x_580_, v_a_572_, v_s_575_);
v_errorMsg_582_ = lean_ctor_get(v_s_581_, 4);
v___x_583_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_582_, v___x_577_);
if (v___x_583_ == 0)
{
return v_s_581_;
}
else
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__5));
v___x_585_ = l_Lake_Toml_digitPairFn(v___x_584_, v_a_572_, v_s_581_);
return v___x_585_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___boxed(lean_object* v_a_586_, lean_object* v_a_587_){
_start:
{
lean_object* v_res_588_; 
v_res_588_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn(v_a_586_, v_a_587_);
lean_dec_ref(v_a_586_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn(uint8_t v_allowOffset_590_, uint32_t v_curr_591_, lean_object* v_nextPos_592_, lean_object* v_c_593_, lean_object* v_s_594_){
_start:
{
uint32_t v___x_608_; uint8_t v___x_609_; 
v___x_608_ = 90;
v___x_609_ = lean_uint32_dec_eq(v_curr_591_, v___x_608_);
if (v___x_609_ == 0)
{
uint32_t v___x_610_; uint8_t v___x_611_; 
v___x_610_ = 122;
v___x_611_ = lean_uint32_dec_eq(v_curr_591_, v___x_610_);
if (v___x_611_ == 0)
{
uint32_t v___x_612_; uint8_t v___x_613_; 
v___x_612_ = 43;
v___x_613_ = lean_uint32_dec_eq(v_curr_591_, v___x_612_);
if (v___x_613_ == 0)
{
uint32_t v___x_614_; uint8_t v___x_615_; 
v___x_614_ = 45;
v___x_615_ = lean_uint32_dec_eq(v_curr_591_, v___x_614_);
if (v___x_615_ == 0)
{
lean_dec(v_nextPos_592_);
return v_s_594_;
}
else
{
goto v___jp_601_;
}
}
else
{
goto v___jp_601_;
}
}
else
{
goto v___jp_595_;
}
}
else
{
goto v___jp_595_;
}
v___jp_595_:
{
if (v_allowOffset_590_ == 0)
{
lean_object* v___x_596_; lean_object* v___x_597_; uint8_t v___x_598_; lean_object* v___x_599_; 
lean_dec(v_nextPos_592_);
v___x_596_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___closed__0));
v___x_597_ = lean_box(0);
v___x_598_ = 1;
v___x_599_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_594_, v___x_596_, v___x_597_, v___x_598_);
return v___x_599_;
}
else
{
lean_object* v___x_600_; 
v___x_600_ = l_Lean_Parser_ParserState_setPos(v_s_594_, v_nextPos_592_);
return v___x_600_;
}
}
v___jp_601_:
{
if (v_allowOffset_590_ == 0)
{
lean_object* v___x_602_; lean_object* v___x_603_; uint8_t v___x_604_; lean_object* v___x_605_; 
lean_dec(v_nextPos_592_);
v___x_602_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___closed__0));
v___x_603_ = lean_box(0);
v___x_604_ = 1;
v___x_605_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_594_, v___x_602_, v___x_603_, v___x_604_);
return v___x_605_;
}
else
{
lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_606_ = l_Lean_Parser_ParserState_setPos(v_s_594_, v_nextPos_592_);
v___x_607_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn(v_c_593_, v___x_606_);
return v___x_607_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___boxed(lean_object* v_allowOffset_616_, lean_object* v_curr_617_, lean_object* v_nextPos_618_, lean_object* v_c_619_, lean_object* v_s_620_){
_start:
{
uint8_t v_allowOffset_boxed_621_; uint32_t v_curr_boxed_622_; lean_object* v_res_623_; 
v_allowOffset_boxed_621_ = lean_unbox(v_allowOffset_616_);
v_curr_boxed_622_ = lean_unbox_uint32(v_curr_617_);
lean_dec(v_curr_617_);
v_res_623_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn(v_allowOffset_boxed_621_, v_curr_boxed_622_, v_nextPos_618_, v_c_619_, v_s_620_);
lean_dec_ref(v_c_619_);
return v_res_623_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___lam__0(uint32_t v_x_624_){
_start:
{
uint32_t v___x_625_; uint8_t v___x_626_; 
v___x_625_ = 48;
v___x_626_ = lean_uint32_dec_le(v___x_625_, v_x_624_);
if (v___x_626_ == 0)
{
return v___x_626_;
}
else
{
uint32_t v___x_627_; uint8_t v___x_628_; 
v___x_627_ = 57;
v___x_628_ = lean_uint32_dec_le(v_x_624_, v___x_627_);
return v___x_628_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___lam__0___boxed(lean_object* v_x_629_){
_start:
{
uint32_t v_x_455__boxed_630_; uint8_t v_res_631_; lean_object* v_r_632_; 
v_x_455__boxed_630_ = lean_unbox_uint32(v_x_629_);
lean_dec(v_x_629_);
v_res_631_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___lam__0(v_x_455__boxed_630_);
v_r_632_ = lean_box(v_res_631_);
return v_r_632_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn(uint8_t v_allowOffset_638_, lean_object* v_c_639_, lean_object* v_s_640_){
_start:
{
lean_object* v_toInputContext_641_; lean_object* v_pos_642_; uint8_t v___x_643_; 
v_toInputContext_641_ = lean_ctor_get(v_c_639_, 0);
v_pos_642_ = lean_ctor_get(v_s_640_, 2);
v___x_643_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_641_, v_pos_642_);
if (v___x_643_ == 0)
{
lean_object* v_inputString_644_; uint32_t v_curr_645_; uint32_t v___x_646_; uint8_t v___x_647_; 
v_inputString_644_ = lean_ctor_get(v_toInputContext_641_, 0);
v_curr_645_ = lean_string_utf8_get_fast(v_inputString_644_, v_pos_642_);
v___x_646_ = 46;
v___x_647_ = lean_uint32_dec_eq(v_curr_645_, v___x_646_);
if (v___x_647_ == 0)
{
lean_object* v___x_648_; uint32_t v___x_662_; uint8_t v___x_663_; 
v___x_648_ = lean_string_utf8_next_fast(v_inputString_644_, v_pos_642_);
v___x_662_ = 90;
v___x_663_ = lean_uint32_dec_eq(v_curr_645_, v___x_662_);
if (v___x_663_ == 0)
{
uint32_t v___x_664_; uint8_t v___x_665_; 
v___x_664_ = 122;
v___x_665_ = lean_uint32_dec_eq(v_curr_645_, v___x_664_);
if (v___x_665_ == 0)
{
uint32_t v___x_666_; uint8_t v___x_667_; 
v___x_666_ = 43;
v___x_667_ = lean_uint32_dec_eq(v_curr_645_, v___x_666_);
if (v___x_667_ == 0)
{
uint32_t v___x_668_; uint8_t v___x_669_; 
v___x_668_ = 45;
v___x_669_ = lean_uint32_dec_eq(v_curr_645_, v___x_668_);
if (v___x_669_ == 0)
{
return v_s_640_;
}
else
{
goto v___jp_649_;
}
}
else
{
goto v___jp_649_;
}
}
else
{
goto v___jp_656_;
}
}
else
{
goto v___jp_656_;
}
v___jp_649_:
{
if (v_allowOffset_638_ == 0)
{
lean_object* v___x_650_; lean_object* v___x_651_; uint8_t v___x_652_; lean_object* v___x_653_; 
v___x_650_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___closed__0));
v___x_651_ = lean_box(0);
v___x_652_ = 1;
v___x_653_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_640_, v___x_650_, v___x_651_, v___x_652_);
return v___x_653_;
}
else
{
lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_654_ = l_Lean_Parser_ParserState_setPos(v_s_640_, v___x_648_);
v___x_655_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn(v_c_639_, v___x_654_);
return v___x_655_;
}
}
v___jp_656_:
{
if (v_allowOffset_638_ == 0)
{
lean_object* v___x_657_; lean_object* v___x_658_; uint8_t v___x_659_; lean_object* v___x_660_; 
v___x_657_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___closed__0));
v___x_658_ = lean_box(0);
v___x_659_ = 1;
v___x_660_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_640_, v___x_657_, v___x_658_, v___x_659_);
return v___x_660_;
}
else
{
lean_object* v___x_661_; 
v___x_661_ = l_Lean_Parser_ParserState_setPos(v_s_640_, v___x_648_);
return v___x_661_;
}
}
}
else
{
lean_object* v___f_670_; lean_object* v_s_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v_s_674_; lean_object* v_pos_675_; lean_object* v_errorMsg_676_; lean_object* v___x_677_; uint8_t v___x_678_; 
lean_inc(v_pos_642_);
v___f_670_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__0));
v_s_671_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_640_, v_c_639_, v_pos_642_);
lean_dec(v_pos_642_);
v___x_672_ = lean_box(0);
v___x_673_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__2));
v_s_674_ = l_Lake_Toml_takeWhile1Fn(v___f_670_, v___x_673_, v_c_639_, v_s_671_);
v_pos_675_ = lean_ctor_get(v_s_674_, 2);
v_errorMsg_676_ = lean_ctor_get(v_s_674_, 4);
v___x_677_ = lean_box(0);
v___x_678_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_676_, v___x_677_);
if (v___x_678_ == 0)
{
return v_s_674_;
}
else
{
uint8_t v___x_679_; 
v___x_679_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_641_, v_pos_675_);
if (v___x_679_ == 0)
{
uint32_t v___x_680_; lean_object* v___x_681_; uint32_t v___x_691_; uint8_t v___x_692_; 
v___x_680_ = lean_string_utf8_get_fast(v_inputString_644_, v_pos_675_);
v___x_681_ = lean_string_utf8_next_fast(v_inputString_644_, v_pos_675_);
v___x_691_ = 90;
v___x_692_ = lean_uint32_dec_eq(v___x_680_, v___x_691_);
if (v___x_692_ == 0)
{
uint32_t v___x_693_; uint8_t v___x_694_; 
v___x_693_ = 122;
v___x_694_ = lean_uint32_dec_eq(v___x_680_, v___x_693_);
if (v___x_694_ == 0)
{
uint32_t v___x_695_; uint8_t v___x_696_; 
v___x_695_ = 43;
v___x_696_ = lean_uint32_dec_eq(v___x_680_, v___x_695_);
if (v___x_696_ == 0)
{
uint32_t v___x_697_; uint8_t v___x_698_; 
v___x_697_ = 45;
v___x_698_ = lean_uint32_dec_eq(v___x_680_, v___x_697_);
if (v___x_698_ == 0)
{
return v_s_674_;
}
else
{
goto v___jp_682_;
}
}
else
{
goto v___jp_682_;
}
}
else
{
goto v___jp_687_;
}
}
else
{
goto v___jp_687_;
}
v___jp_682_:
{
if (v_allowOffset_638_ == 0)
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___closed__0));
v___x_684_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_674_, v___x_683_, v___x_672_, v___x_647_);
return v___x_684_;
}
else
{
lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_685_ = l_Lean_Parser_ParserState_setPos(v_s_674_, v___x_681_);
v___x_686_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn(v_c_639_, v___x_685_);
return v___x_686_;
}
}
v___jp_687_:
{
if (v_allowOffset_638_ == 0)
{
lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_688_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___closed__0));
v___x_689_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_674_, v___x_688_, v___x_672_, v___x_647_);
return v___x_689_;
}
else
{
lean_object* v___x_690_; 
v___x_690_ = l_Lean_Parser_ParserState_setPos(v_s_674_, v___x_681_);
return v___x_690_;
}
}
}
else
{
return v_s_674_;
}
}
}
}
else
{
return v_s_640_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___boxed(lean_object* v_allowOffset_699_, lean_object* v_c_700_, lean_object* v_s_701_){
_start:
{
uint8_t v_allowOffset_boxed_702_; lean_object* v_res_703_; 
v_allowOffset_boxed_702_ = lean_unbox(v_allowOffset_699_);
v_res_703_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn(v_allowOffset_boxed_702_, v_c_700_, v_s_701_);
lean_dec_ref(v_c_700_);
return v_res_703_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn(uint8_t v_allowOffset_708_, lean_object* v_a_709_, lean_object* v_a_710_){
_start:
{
lean_object* v___x_711_; lean_object* v_s_712_; lean_object* v_errorMsg_713_; lean_object* v___x_714_; uint8_t v___x_715_; 
v___x_711_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__5));
v_s_712_ = l_Lake_Toml_digitPairFn(v___x_711_, v_a_709_, v_a_710_);
v_errorMsg_713_ = lean_ctor_get(v_s_712_, 4);
v___x_714_ = lean_box(0);
v___x_715_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_713_, v___x_714_);
if (v___x_715_ == 0)
{
return v_s_712_;
}
else
{
uint32_t v___x_716_; lean_object* v___x_717_; lean_object* v_s_718_; lean_object* v_errorMsg_719_; uint8_t v___x_720_; 
v___x_716_ = 58;
v___x_717_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__3));
v_s_718_ = l_Lake_Toml_chFn(v___x_716_, v___x_717_, v_a_709_, v_s_712_);
v_errorMsg_719_ = lean_ctor_get(v_s_718_, 4);
v___x_720_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_719_, v___x_714_);
if (v___x_720_ == 0)
{
return v_s_718_;
}
else
{
lean_object* v___x_721_; lean_object* v_s_722_; lean_object* v_errorMsg_723_; uint8_t v___x_724_; 
v___x_721_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___closed__1));
v_s_722_ = l_Lake_Toml_digitPairFn(v___x_721_, v_a_709_, v_s_718_);
v_errorMsg_723_ = lean_ctor_get(v_s_722_, 4);
v___x_724_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_723_, v___x_714_);
if (v___x_724_ == 0)
{
return v_s_722_;
}
else
{
lean_object* v___x_725_; 
v___x_725_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn(v_allowOffset_708_, v_a_709_, v_s_722_);
return v___x_725_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___boxed(lean_object* v_allowOffset_726_, lean_object* v_a_727_, lean_object* v_a_728_){
_start:
{
uint8_t v_allowOffset_boxed_729_; lean_object* v_res_730_; 
v_allowOffset_boxed_729_ = lean_unbox(v_allowOffset_726_);
v_res_730_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn(v_allowOffset_boxed_729_, v_a_727_, v_a_728_);
lean_dec_ref(v_a_727_);
return v_res_730_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_timeFn(uint8_t v_allowOffset_735_, lean_object* v_a_736_, lean_object* v_a_737_){
_start:
{
lean_object* v___x_738_; lean_object* v_s_739_; lean_object* v_errorMsg_740_; lean_object* v___x_741_; uint8_t v___x_742_; 
v___x_738_ = ((lean_object*)(l_Lake_Toml_timeFn___closed__1));
v_s_739_ = l_Lake_Toml_digitPairFn(v___x_738_, v_a_736_, v_a_737_);
v_errorMsg_740_ = lean_ctor_get(v_s_739_, 4);
v___x_741_ = lean_box(0);
v___x_742_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_740_, v___x_741_);
if (v___x_742_ == 0)
{
return v_s_739_;
}
else
{
uint32_t v___x_743_; lean_object* v___x_744_; lean_object* v_s_745_; lean_object* v_errorMsg_746_; uint8_t v___x_747_; 
v___x_743_ = 58;
v___x_744_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__3));
v_s_745_ = l_Lake_Toml_chFn(v___x_743_, v___x_744_, v_a_736_, v_s_739_);
v_errorMsg_746_ = lean_ctor_get(v_s_745_, 4);
v___x_747_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_746_, v___x_741_);
if (v___x_747_ == 0)
{
return v_s_745_;
}
else
{
lean_object* v___x_748_; 
v___x_748_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn(v_allowOffset_735_, v_a_736_, v_s_745_);
return v___x_748_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_timeFn___boxed(lean_object* v_allowOffset_749_, lean_object* v_a_750_, lean_object* v_a_751_){
_start:
{
uint8_t v_allowOffset_boxed_752_; lean_object* v_res_753_; 
v_allowOffset_boxed_752_ = lean_unbox(v_allowOffset_749_);
v_res_753_ = l_Lake_Toml_timeFn(v_allowOffset_boxed_752_, v_a_750_, v_a_751_);
lean_dec_ref(v_a_750_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_optTimeFn(lean_object* v_c_754_, lean_object* v_s_755_){
_start:
{
lean_object* v_pos_756_; lean_object* v_toInputContext_757_; uint8_t v___x_758_; 
v_pos_756_ = lean_ctor_get(v_s_755_, 2);
v_toInputContext_757_ = lean_ctor_get(v_c_754_, 0);
v___x_758_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_757_, v_pos_756_);
if (v___x_758_ == 0)
{
lean_object* v_inputString_759_; uint8_t v___x_760_; uint32_t v_curr_764_; uint32_t v___x_765_; uint8_t v___x_766_; 
v_inputString_759_ = lean_ctor_get(v_toInputContext_757_, 0);
v___x_760_ = 1;
v_curr_764_ = lean_string_utf8_get_fast(v_inputString_759_, v_pos_756_);
v___x_765_ = 84;
v___x_766_ = lean_uint32_dec_eq(v_curr_764_, v___x_765_);
if (v___x_766_ == 0)
{
uint32_t v___x_767_; uint8_t v___x_768_; 
v___x_767_ = 116;
v___x_768_ = lean_uint32_dec_eq(v_curr_764_, v___x_767_);
if (v___x_768_ == 0)
{
uint32_t v___x_769_; uint8_t v___x_770_; 
v___x_769_ = 32;
v___x_770_ = lean_uint32_dec_eq(v_curr_764_, v___x_769_);
if (v___x_770_ == 0)
{
return v_s_755_;
}
else
{
lean_object* v_tPos_771_; lean_object* v___x_772_; lean_object* v_s_773_; lean_object* v_pos_774_; lean_object* v_errorMsg_775_; lean_object* v___x_776_; uint8_t v___x_777_; 
lean_inc(v_pos_756_);
v_tPos_771_ = lean_string_utf8_next_fast(v_inputString_759_, v_pos_756_);
v___x_772_ = l_Lean_Parser_ParserState_setPos(v_s_755_, v_tPos_771_);
v_s_773_ = l_Lake_Toml_timeFn(v___x_760_, v_c_754_, v___x_772_);
v_pos_774_ = lean_ctor_get(v_s_773_, 2);
v_errorMsg_775_ = lean_ctor_get(v_s_773_, 4);
v___x_776_ = lean_box(0);
v___x_777_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_775_, v___x_776_);
if (v___x_777_ == 0)
{
uint8_t v_decide_778_; 
v_decide_778_ = lean_nat_dec_eq(v_pos_774_, v_tPos_771_);
if (v_decide_778_ == 0)
{
lean_dec(v_pos_756_);
return v_s_773_;
}
else
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_779_ = l_Lean_Parser_ParserState_stackSize(v_s_773_);
v___x_780_ = lean_unsigned_to_nat(1u);
v___x_781_ = lean_nat_sub(v___x_779_, v___x_780_);
lean_dec(v___x_779_);
v___x_782_ = l_Lean_Parser_ParserState_restore(v_s_773_, v___x_781_, v_pos_756_);
lean_dec(v___x_781_);
return v___x_782_;
}
}
else
{
lean_dec(v_pos_756_);
return v_s_773_;
}
}
}
else
{
lean_inc(v_pos_756_);
goto v___jp_761_;
}
}
else
{
lean_inc(v_pos_756_);
goto v___jp_761_;
}
v___jp_761_:
{
lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_762_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_755_, v_c_754_, v_pos_756_);
lean_dec(v_pos_756_);
v___x_763_ = l_Lake_Toml_timeFn(v___x_760_, v_c_754_, v___x_762_);
return v___x_763_;
}
}
else
{
return v_s_755_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_optTimeFn___boxed(lean_object* v_c_783_, lean_object* v_s_784_){
_start:
{
lean_object* v_res_785_; 
v_res_785_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_optTimeFn(v_c_783_, v_s_784_);
lean_dec_ref(v_c_783_);
return v_res_785_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn(lean_object* v_a_798_, lean_object* v_a_799_){
_start:
{
lean_object* v___x_800_; lean_object* v_s_801_; lean_object* v_errorMsg_802_; lean_object* v___x_803_; uint8_t v___x_804_; 
v___x_800_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__1));
v_s_801_ = l_Lake_Toml_digitPairFn(v___x_800_, v_a_798_, v_a_799_);
v_errorMsg_802_ = lean_ctor_get(v_s_801_, 4);
v___x_803_ = lean_box(0);
v___x_804_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_802_, v___x_803_);
if (v___x_804_ == 0)
{
return v_s_801_;
}
else
{
uint32_t v___x_805_; lean_object* v___x_806_; lean_object* v_s_807_; lean_object* v_errorMsg_808_; uint8_t v___x_809_; 
v___x_805_ = 45;
v___x_806_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__3));
v_s_807_ = l_Lake_Toml_chFn(v___x_805_, v___x_806_, v_a_798_, v_s_801_);
v_errorMsg_808_ = lean_ctor_get(v_s_807_, 4);
v___x_809_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_808_, v___x_803_);
if (v___x_809_ == 0)
{
return v_s_807_;
}
else
{
lean_object* v___x_810_; lean_object* v_s_811_; lean_object* v_errorMsg_812_; uint8_t v___x_813_; 
v___x_810_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__5));
v_s_811_ = l_Lake_Toml_digitPairFn(v___x_810_, v_a_798_, v_s_807_);
v_errorMsg_812_ = lean_ctor_get(v_s_811_, 4);
v___x_813_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_812_, v___x_803_);
if (v___x_813_ == 0)
{
return v_s_811_;
}
else
{
lean_object* v___x_814_; 
v___x_814_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_optTimeFn(v_a_798_, v_s_811_);
return v___x_814_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___boxed(lean_object* v_a_815_, lean_object* v_a_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn(v_a_815_, v_a_816_);
lean_dec_ref(v_a_815_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0(lean_object* v_c_822_, lean_object* v_x_823_, lean_object* v_x_824_){
_start:
{
lean_object* v_zero_825_; uint8_t v_isZero_826_; 
v_zero_825_ = lean_unsigned_to_nat(0u);
v_isZero_826_ = lean_nat_dec_eq(v_x_823_, v_zero_825_);
if (v_isZero_826_ == 1)
{
lean_dec(v_x_823_);
return v_x_824_;
}
else
{
lean_object* v___x_827_; lean_object* v_s_828_; lean_object* v_errorMsg_829_; lean_object* v___x_830_; uint8_t v___x_831_; 
v___x_827_ = ((lean_object*)(l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0___closed__1));
v_s_828_ = l_Lake_Toml_digitFn(v___x_827_, v_c_822_, v_x_824_);
v_errorMsg_829_ = lean_ctor_get(v_s_828_, 4);
v___x_830_ = lean_box(0);
v___x_831_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_829_, v___x_830_);
if (v___x_831_ == 0)
{
lean_dec(v_x_823_);
return v_s_828_;
}
else
{
lean_object* v_one_832_; lean_object* v_n_833_; 
v_one_832_ = lean_unsigned_to_nat(1u);
v_n_833_ = lean_nat_sub(v_x_823_, v_one_832_);
lean_dec(v_x_823_);
v_x_823_ = v_n_833_;
v_x_824_ = v_s_828_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0___boxed(lean_object* v_c_835_, lean_object* v_x_836_, lean_object* v_x_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0(v_c_835_, v_x_836_, v_x_837_);
lean_dec_ref(v_c_835_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dateTimeFn(lean_object* v_a_839_, lean_object* v_a_840_){
_start:
{
lean_object* v___x_841_; lean_object* v_s_842_; lean_object* v_errorMsg_843_; lean_object* v___x_844_; uint8_t v___x_845_; 
v___x_841_ = lean_unsigned_to_nat(4u);
v_s_842_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0(v_a_839_, v___x_841_, v_a_840_);
v_errorMsg_843_ = lean_ctor_get(v_s_842_, 4);
v___x_844_ = lean_box(0);
v___x_845_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_843_, v___x_844_);
if (v___x_845_ == 0)
{
return v_s_842_;
}
else
{
uint32_t v___x_846_; lean_object* v___x_847_; lean_object* v_s_848_; lean_object* v_errorMsg_849_; uint8_t v___x_850_; 
v___x_846_ = 45;
v___x_847_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__3));
v_s_848_ = l_Lake_Toml_chFn(v___x_846_, v___x_847_, v_a_839_, v_s_842_);
v_errorMsg_849_ = lean_ctor_get(v_s_848_, 4);
v___x_850_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_849_, v___x_844_);
if (v___x_850_ == 0)
{
return v_s_848_;
}
else
{
lean_object* v___x_851_; 
v___x_851_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn(v_a_839_, v_s_848_);
return v___x_851_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dateTimeFn___boxed(lean_object* v_a_852_, lean_object* v_a_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = l_Lake_Toml_dateTimeFn(v_a_852_, v_a_853_);
lean_dec_ref(v_a_852_);
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn(lean_object* v_c_859_, lean_object* v_s_860_){
_start:
{
lean_object* v_toInputContext_861_; lean_object* v_pos_862_; lean_object* v_expected_863_; uint8_t v___x_864_; 
v_toInputContext_861_ = lean_ctor_get(v_c_859_, 0);
v_pos_862_ = lean_ctor_get(v_s_860_, 2);
v_expected_863_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn___closed__1));
v___x_864_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_861_, v_pos_862_);
if (v___x_864_ == 0)
{
lean_object* v_inputString_865_; lean_object* v___f_866_; uint32_t v_curr_871_; uint32_t v___x_872_; uint8_t v___x_873_; 
v_inputString_865_ = lean_ctor_get(v_toInputContext_861_, 0);
v___f_866_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__0));
v_curr_871_ = lean_string_utf8_get_fast(v_inputString_865_, v_pos_862_);
v___x_872_ = 45;
v___x_873_ = lean_uint32_dec_eq(v_curr_871_, v___x_872_);
if (v___x_873_ == 0)
{
uint32_t v___x_874_; uint8_t v___x_875_; 
v___x_874_ = 43;
v___x_875_ = lean_uint32_dec_eq(v_curr_871_, v___x_874_);
if (v___x_875_ == 0)
{
uint8_t v___x_876_; uint32_t v___x_877_; uint8_t v___x_878_; 
v___x_876_ = 1;
v___x_877_ = 48;
v___x_878_ = lean_uint32_dec_le(v___x_877_, v_curr_871_);
if (v___x_878_ == 0)
{
lean_object* v___x_879_; 
v___x_879_ = l_Lake_Toml_mkUnexpectedCharError(v_s_860_, v_curr_871_, v_expected_863_, v___x_876_);
return v___x_879_;
}
else
{
uint32_t v___x_880_; uint8_t v___x_881_; 
v___x_880_ = 57;
v___x_881_ = lean_uint32_dec_le(v_curr_871_, v___x_880_);
if (v___x_881_ == 0)
{
lean_object* v___x_882_; 
v___x_882_ = l_Lake_Toml_mkUnexpectedCharError(v_s_860_, v_curr_871_, v_expected_863_, v___x_876_);
return v___x_882_;
}
else
{
lean_object* v_s_883_; uint32_t v___x_884_; lean_object* v___x_885_; 
lean_inc(v_pos_862_);
v_s_883_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_860_, v_c_859_, v_pos_862_);
lean_dec(v_pos_862_);
v___x_884_ = 95;
v___x_885_ = l_Lake_Toml_sepByChar1AuxFn(v___f_866_, v___x_884_, v_expected_863_, v_c_859_, v_s_883_);
return v___x_885_;
}
}
}
else
{
lean_inc(v_pos_862_);
goto v___jp_867_;
}
}
else
{
lean_inc(v_pos_862_);
goto v___jp_867_;
}
v___jp_867_:
{
lean_object* v_s_868_; uint32_t v___x_869_; lean_object* v___x_870_; 
v_s_868_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_860_, v_c_859_, v_pos_862_);
lean_dec(v_pos_862_);
v___x_869_ = 95;
v___x_870_ = l_Lake_Toml_sepByChar1Fn(v___f_866_, v___x_869_, v_expected_863_, v_c_859_, v_s_868_);
return v___x_870_;
}
}
else
{
lean_object* v___x_886_; 
v___x_886_ = l_Lean_Parser_ParserState_mkEOIError(v_s_860_, v_expected_863_);
return v___x_886_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn___boxed(lean_object* v_c_887_, lean_object* v_s_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn(v_c_887_, v_s_888_);
lean_dec_ref(v_c_887_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_optDecExpFn(lean_object* v_c_890_, lean_object* v_s_891_){
_start:
{
lean_object* v_toInputContext_892_; lean_object* v_pos_893_; uint8_t v___x_897_; 
v_toInputContext_892_ = lean_ctor_get(v_c_890_, 0);
v_pos_893_ = lean_ctor_get(v_s_891_, 2);
v___x_897_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_892_, v_pos_893_);
if (v___x_897_ == 0)
{
lean_object* v_inputString_898_; uint32_t v_curr_899_; uint32_t v___x_900_; uint8_t v___x_901_; 
v_inputString_898_ = lean_ctor_get(v_toInputContext_892_, 0);
v_curr_899_ = lean_string_utf8_get_fast(v_inputString_898_, v_pos_893_);
v___x_900_ = 101;
v___x_901_ = lean_uint32_dec_eq(v_curr_899_, v___x_900_);
if (v___x_901_ == 0)
{
uint32_t v___x_902_; uint8_t v___x_903_; 
v___x_902_ = 69;
v___x_903_ = lean_uint32_dec_eq(v_curr_899_, v___x_902_);
if (v___x_903_ == 0)
{
return v_s_891_;
}
else
{
lean_inc(v_pos_893_);
goto v___jp_894_;
}
}
else
{
lean_inc(v_pos_893_);
goto v___jp_894_;
}
}
else
{
return v_s_891_;
}
v___jp_894_:
{
lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_895_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_891_, v_c_890_, v_pos_893_);
lean_dec(v_pos_893_);
v___x_896_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn(v_c_890_, v___x_895_);
return v___x_896_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_optDecExpFn___boxed(lean_object* v_c_904_, lean_object* v_s_905_){
_start:
{
lean_object* v_res_906_; 
v_res_906_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_optDecExpFn(v_c_904_, v_s_905_);
lean_dec_ref(v_c_904_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn(lean_object* v_startPos_924_, uint32_t v_curr_925_, lean_object* v_nextPos_926_, lean_object* v_c_927_, lean_object* v_s_928_){
_start:
{
uint32_t v___x_938_; uint8_t v___x_939_; 
v___x_938_ = 46;
v___x_939_ = lean_uint32_dec_eq(v_curr_925_, v___x_938_);
if (v___x_939_ == 0)
{
uint32_t v___x_940_; uint8_t v___x_941_; 
v___x_940_ = 101;
v___x_941_ = lean_uint32_dec_eq(v_curr_925_, v___x_940_);
if (v___x_941_ == 0)
{
uint32_t v___x_942_; uint8_t v___x_943_; 
v___x_942_ = 69;
v___x_943_ = lean_uint32_dec_eq(v_curr_925_, v___x_942_);
if (v___x_943_ == 0)
{
lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
lean_dec(v_nextPos_926_);
v___x_944_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6));
v___x_945_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_946_ = l_Lake_Toml_pushLit(v___x_944_, v_startPos_924_, v___x_945_, v_c_927_, v_s_928_);
return v___x_946_;
}
else
{
goto v___jp_929_;
}
}
else
{
goto v___jp_929_;
}
}
else
{
lean_object* v___f_947_; lean_object* v_s_948_; uint32_t v___x_949_; lean_object* v___x_950_; lean_object* v_s_951_; lean_object* v_errorMsg_952_; lean_object* v___x_953_; uint8_t v___x_954_; 
v___f_947_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__0));
v_s_948_ = l_Lean_Parser_ParserState_setPos(v_s_928_, v_nextPos_926_);
v___x_949_ = 95;
v___x_950_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__8));
v_s_951_ = l_Lake_Toml_sepByChar1Fn(v___f_947_, v___x_949_, v___x_950_, v_c_927_, v_s_948_);
v_errorMsg_952_ = lean_ctor_get(v_s_951_, 4);
v___x_953_ = lean_box(0);
v___x_954_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_952_, v___x_953_);
if (v___x_954_ == 0)
{
lean_dec_ref(v_c_927_);
lean_dec(v_startPos_924_);
return v_s_951_;
}
else
{
lean_object* v_s_955_; lean_object* v_errorMsg_956_; uint8_t v___x_957_; 
v_s_955_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_optDecExpFn(v_c_927_, v_s_951_);
v_errorMsg_956_ = lean_ctor_get(v_s_955_, 4);
v___x_957_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_956_, v___x_953_);
if (v___x_957_ == 0)
{
lean_dec_ref(v_c_927_);
lean_dec(v_startPos_924_);
return v_s_955_;
}
else
{
lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
v___x_958_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3));
v___x_959_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_960_ = l_Lake_Toml_pushLit(v___x_958_, v_startPos_924_, v___x_959_, v_c_927_, v_s_955_);
return v___x_960_;
}
}
}
v___jp_929_:
{
lean_object* v_s_930_; lean_object* v_s_931_; lean_object* v_errorMsg_932_; lean_object* v___x_933_; uint8_t v___x_934_; 
v_s_930_ = l_Lean_Parser_ParserState_setPos(v_s_928_, v_nextPos_926_);
v_s_931_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn(v_c_927_, v_s_930_);
v_errorMsg_932_ = lean_ctor_get(v_s_931_, 4);
v___x_933_ = lean_box(0);
v___x_934_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_932_, v___x_933_);
if (v___x_934_ == 0)
{
lean_dec_ref(v_c_927_);
lean_dec(v_startPos_924_);
return v_s_931_;
}
else
{
lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_935_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3));
v___x_936_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_937_ = l_Lake_Toml_pushLit(v___x_935_, v_startPos_924_, v___x_936_, v_c_927_, v_s_931_);
return v___x_937_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___boxed(lean_object* v_startPos_961_, lean_object* v_curr_962_, lean_object* v_nextPos_963_, lean_object* v_c_964_, lean_object* v_s_965_){
_start:
{
uint32_t v_curr_boxed_966_; lean_object* v_res_967_; 
v_curr_boxed_966_ = lean_unbox_uint32(v_curr_962_);
lean_dec(v_curr_962_);
v_res_967_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn(v_startPos_961_, v_curr_boxed_966_, v_nextPos_963_, v_c_964_, v_s_965_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailFn(lean_object* v_startPos_968_, lean_object* v_c_969_, lean_object* v_s_970_){
_start:
{
lean_object* v_toInputContext_971_; lean_object* v_pos_972_; uint8_t v___x_973_; 
v_toInputContext_971_ = lean_ctor_get(v_c_969_, 0);
v_pos_972_ = lean_ctor_get(v_s_970_, 2);
v___x_973_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_971_, v_pos_972_);
if (v___x_973_ == 0)
{
lean_object* v_inputString_974_; uint32_t v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v_inputString_974_ = lean_ctor_get(v_toInputContext_971_, 0);
v___x_975_ = lean_string_utf8_get_fast(v_inputString_974_, v_pos_972_);
v___x_976_ = lean_string_utf8_next_fast(v_inputString_974_, v_pos_972_);
v___x_977_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn(v_startPos_968_, v___x_975_, v___x_976_, v_c_969_, v_s_970_);
return v___x_977_;
}
else
{
lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
v___x_978_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6));
v___x_979_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_980_ = l_Lake_Toml_pushLit(v___x_978_, v_startPos_968_, v___x_979_, v_c_969_, v_s_970_);
return v___x_980_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberAuxFn(lean_object* v_startPos_988_, lean_object* v_c_989_, lean_object* v_s_990_){
_start:
{
lean_object* v_toInputContext_991_; lean_object* v_pos_992_; uint8_t v___x_993_; 
v_toInputContext_991_ = lean_ctor_get(v_c_989_, 0);
v_pos_992_ = lean_ctor_get(v_s_990_, 2);
v___x_993_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_991_, v_pos_992_);
if (v___x_993_ == 0)
{
lean_object* v_inputString_994_; uint32_t v_curr_995_; uint32_t v___x_999_; uint8_t v___x_1000_; 
v_inputString_994_ = lean_ctor_get(v_toInputContext_991_, 0);
v_curr_995_ = lean_string_utf8_get_fast(v_inputString_994_, v_pos_992_);
v___x_999_ = 48;
v___x_1000_ = lean_uint32_dec_le(v___x_999_, v_curr_995_);
if (v___x_1000_ == 0)
{
goto v___jp_996_;
}
else
{
uint32_t v___x_1001_; uint8_t v___x_1002_; 
v___x_1001_ = 57;
v___x_1002_ = lean_uint32_dec_le(v_curr_995_, v___x_1001_);
if (v___x_1002_ == 0)
{
goto v___jp_996_;
}
else
{
lean_object* v_s_1003_; 
lean_inc(v_pos_992_);
v_s_1003_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_990_, v_c_989_, v_pos_992_);
lean_dec(v_pos_992_);
v_s_990_ = v_s_1003_;
goto _start;
}
}
v___jp_996_:
{
lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_997_ = lean_string_utf8_next_fast(v_inputString_994_, v_pos_992_);
v___x_998_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_988_, v_curr_995_, v___x_997_, v_c_989_, v_s_990_);
return v___x_998_;
}
}
else
{
lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1005_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6));
v___x_1006_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1007_ = l_Lake_Toml_pushLit(v___x_1005_, v_startPos_988_, v___x_1006_, v_c_989_, v_s_990_);
return v___x_1007_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn(lean_object* v_startPos_1008_, lean_object* v_c_1009_, lean_object* v_s_1010_){
_start:
{
lean_object* v_pos_1011_; lean_object* v_toInputContext_1012_; lean_object* v_expected_1013_; uint8_t v___x_1014_; 
v_pos_1011_ = lean_ctor_get(v_s_1010_, 2);
v_toInputContext_1012_ = lean_ctor_get(v_c_1009_, 0);
v_expected_1013_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__2));
v___x_1014_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1012_, v_pos_1011_);
if (v___x_1014_ == 0)
{
lean_object* v_inputString_1015_; uint8_t v___x_1016_; uint32_t v_curr_1017_; uint32_t v___x_1018_; uint8_t v___x_1019_; 
v_inputString_1015_ = lean_ctor_get(v_toInputContext_1012_, 0);
v___x_1016_ = 1;
v_curr_1017_ = lean_string_utf8_get_fast(v_inputString_1015_, v_pos_1011_);
v___x_1018_ = 48;
v___x_1019_ = lean_uint32_dec_le(v___x_1018_, v_curr_1017_);
if (v___x_1019_ == 0)
{
lean_object* v___x_1020_; 
lean_dec_ref(v_c_1009_);
lean_dec(v_startPos_1008_);
v___x_1020_ = l_Lake_Toml_mkUnexpectedCharError(v_s_1010_, v_curr_1017_, v_expected_1013_, v___x_1016_);
return v___x_1020_;
}
else
{
uint32_t v___x_1021_; uint8_t v___x_1022_; 
v___x_1021_ = 57;
v___x_1022_ = lean_uint32_dec_le(v_curr_1017_, v___x_1021_);
if (v___x_1022_ == 0)
{
lean_object* v___x_1023_; 
lean_dec_ref(v_c_1009_);
lean_dec(v_startPos_1008_);
v___x_1023_ = l_Lake_Toml_mkUnexpectedCharError(v_s_1010_, v_curr_1017_, v_expected_1013_, v___x_1016_);
return v___x_1023_;
}
else
{
lean_object* v_s_1024_; lean_object* v___x_1025_; 
lean_inc(v_pos_1011_);
v_s_1024_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1010_, v_c_1009_, v_pos_1011_);
lean_dec(v_pos_1011_);
v___x_1025_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberAuxFn(v_startPos_1008_, v_c_1009_, v_s_1024_);
return v___x_1025_;
}
}
}
else
{
lean_object* v___x_1026_; 
lean_dec_ref(v_c_1009_);
lean_dec(v_startPos_1008_);
v___x_1026_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1010_, v_expected_1013_);
return v___x_1026_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(lean_object* v_startPos_1027_, uint32_t v_curr_1028_, lean_object* v_nextPos_1029_, lean_object* v_c_1030_, lean_object* v_s_1031_){
_start:
{
uint32_t v___x_1032_; uint8_t v___x_1033_; 
v___x_1032_ = 95;
v___x_1033_ = lean_uint32_dec_eq(v_curr_1028_, v___x_1032_);
if (v___x_1033_ == 0)
{
lean_object* v___x_1034_; 
v___x_1034_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn(v_startPos_1027_, v_curr_1028_, v_nextPos_1029_, v_c_1030_, v_s_1031_);
return v___x_1034_;
}
else
{
lean_object* v_s_1035_; lean_object* v___x_1036_; 
v_s_1035_ = l_Lean_Parser_ParserState_setPos(v_s_1031_, v_nextPos_1029_);
v___x_1036_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn(v_startPos_1027_, v_c_1030_, v_s_1035_);
return v___x_1036_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn___boxed(lean_object* v_startPos_1037_, lean_object* v_curr_1038_, lean_object* v_nextPos_1039_, lean_object* v_c_1040_, lean_object* v_s_1041_){
_start:
{
uint32_t v_curr_boxed_1042_; lean_object* v_res_1043_; 
v_curr_boxed_1042_ = lean_unbox_uint32(v_curr_1038_);
lean_dec(v_curr_1038_);
v_res_1043_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_1037_, v_curr_boxed_1042_, v_nextPos_1039_, v_c_1040_, v_s_1041_);
return v_res_1043_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn(lean_object* v_startPos_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_){
_start:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v_s_1054_; lean_object* v_errorMsg_1055_; lean_object* v___x_1056_; uint8_t v___x_1057_; 
v___x_1052_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__0));
v___x_1053_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__2));
lean_inc_ref(v_a_1050_);
v_s_1054_ = l_Lake_Toml_strFn(v___x_1052_, v___x_1053_, v_a_1050_, v_a_1051_);
v_errorMsg_1055_ = lean_ctor_get(v_s_1054_, 4);
v___x_1056_ = lean_box(0);
v___x_1057_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_1055_, v___x_1056_);
if (v___x_1057_ == 0)
{
lean_dec_ref(v_a_1050_);
lean_dec(v_startPos_1049_);
return v_s_1054_;
}
else
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1058_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3));
v___x_1059_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1060_ = l_Lake_Toml_pushLit(v___x_1058_, v_startPos_1049_, v___x_1059_, v_a_1050_, v_s_1054_);
return v___x_1060_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn(lean_object* v_startPos_1066_, lean_object* v_a_1067_, lean_object* v_a_1068_){
_start:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v_s_1071_; lean_object* v_errorMsg_1072_; lean_object* v___x_1073_; uint8_t v___x_1074_; 
v___x_1069_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__0));
v___x_1070_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__2));
lean_inc_ref(v_a_1067_);
v_s_1071_ = l_Lake_Toml_strFn(v___x_1069_, v___x_1070_, v_a_1067_, v_a_1068_);
v_errorMsg_1072_ = lean_ctor_get(v_s_1071_, 4);
v___x_1073_ = lean_box(0);
v___x_1074_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_1072_, v___x_1073_);
if (v___x_1074_ == 0)
{
lean_dec_ref(v_a_1067_);
lean_dec(v_startPos_1066_);
return v_s_1071_;
}
else
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1075_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3));
v___x_1076_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1077_ = l_Lake_Toml_pushLit(v___x_1075_, v_startPos_1066_, v___x_1076_, v_a_1067_, v_s_1071_);
return v___x_1077_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decimalFn(lean_object* v_startPos_1078_, lean_object* v_c_1079_, lean_object* v_s_1080_){
_start:
{
lean_object* v_toInputContext_1081_; lean_object* v_pos_1082_; lean_object* v_expected_1083_; uint8_t v___x_1084_; 
v_toInputContext_1081_ = lean_ctor_get(v_c_1079_, 0);
v_pos_1082_ = lean_ctor_get(v_s_1080_, 2);
v_expected_1083_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__2));
v___x_1084_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1081_, v_pos_1082_);
if (v___x_1084_ == 0)
{
lean_object* v_inputString_1085_; uint32_t v_curr_1086_; uint32_t v___x_1087_; uint8_t v___x_1088_; 
v_inputString_1085_ = lean_ctor_get(v_toInputContext_1081_, 0);
v_curr_1086_ = lean_string_utf8_get_fast(v_inputString_1085_, v_pos_1082_);
v___x_1087_ = 48;
v___x_1088_ = lean_uint32_dec_eq(v_curr_1086_, v___x_1087_);
if (v___x_1088_ == 0)
{
uint8_t v___x_1089_; uint8_t v___x_1100_; 
v___x_1089_ = 1;
v___x_1100_ = lean_uint32_dec_le(v___x_1087_, v_curr_1086_);
if (v___x_1100_ == 0)
{
goto v___jp_1090_;
}
else
{
uint32_t v___x_1101_; uint8_t v___x_1102_; 
v___x_1101_ = 57;
v___x_1102_ = lean_uint32_dec_le(v_curr_1086_, v___x_1101_);
if (v___x_1102_ == 0)
{
goto v___jp_1090_;
}
else
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
lean_inc(v_pos_1082_);
v___x_1103_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1080_, v_c_1079_, v_pos_1082_);
lean_dec(v_pos_1082_);
v___x_1104_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberAuxFn(v_startPos_1078_, v_c_1079_, v___x_1103_);
return v___x_1104_;
}
}
v___jp_1090_:
{
uint32_t v___x_1091_; uint8_t v___x_1092_; 
v___x_1091_ = 105;
v___x_1092_ = lean_uint32_dec_eq(v_curr_1086_, v___x_1091_);
if (v___x_1092_ == 0)
{
uint32_t v___x_1093_; uint8_t v___x_1094_; 
v___x_1093_ = 110;
v___x_1094_ = lean_uint32_dec_eq(v_curr_1086_, v___x_1093_);
if (v___x_1094_ == 0)
{
lean_object* v___x_1095_; 
lean_dec_ref(v_c_1079_);
lean_dec(v_startPos_1078_);
v___x_1095_ = l_Lake_Toml_mkUnexpectedCharError(v_s_1080_, v_curr_1086_, v_expected_1083_, v___x_1089_);
return v___x_1095_;
}
else
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
lean_inc(v_pos_1082_);
v___x_1096_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1080_, v_c_1079_, v_pos_1082_);
lean_dec(v_pos_1082_);
v___x_1097_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn(v_startPos_1078_, v_c_1079_, v___x_1096_);
return v___x_1097_;
}
}
else
{
lean_object* v___x_1098_; lean_object* v___x_1099_; 
lean_inc(v_pos_1082_);
v___x_1098_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1080_, v_c_1079_, v_pos_1082_);
lean_dec(v_pos_1082_);
v___x_1099_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn(v_startPos_1078_, v_c_1079_, v___x_1098_);
return v___x_1099_;
}
}
}
else
{
lean_object* v___x_1105_; lean_object* v___x_1106_; 
lean_inc(v_pos_1082_);
v___x_1105_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1080_, v_c_1079_, v_pos_1082_);
lean_dec(v_pos_1082_);
v___x_1106_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailFn(v_startPos_1078_, v_c_1079_, v___x_1105_);
return v___x_1106_;
}
}
else
{
lean_object* v___x_1107_; 
lean_dec_ref(v_c_1079_);
lean_dec(v_startPos_1078_);
v___x_1107_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1080_, v_expected_1083_);
return v___x_1107_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn(lean_object* v_startPos_1123_, lean_object* v_c_1124_, lean_object* v_s_1125_){
_start:
{
lean_object* v_toInputContext_1126_; lean_object* v_pos_1127_; uint8_t v___x_1128_; 
v_toInputContext_1126_ = lean_ctor_get(v_c_1124_, 0);
v_pos_1127_ = lean_ctor_get(v_s_1125_, 2);
v___x_1128_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1126_, v_pos_1127_);
if (v___x_1128_ == 0)
{
lean_object* v_inputString_1129_; uint32_t v_curr_1130_; lean_object* v_nextPos_1131_; uint32_t v___x_1132_; uint8_t v___x_1133_; 
v_inputString_1129_ = lean_ctor_get(v_toInputContext_1126_, 0);
v_curr_1130_ = lean_string_utf8_get_fast(v_inputString_1129_, v_pos_1127_);
v_nextPos_1131_ = lean_string_utf8_next_fast(v_inputString_1129_, v_pos_1127_);
v___x_1132_ = 48;
v___x_1133_ = lean_uint32_dec_le(v___x_1132_, v_curr_1130_);
if (v___x_1133_ == 0)
{
lean_object* v___x_1134_; 
v___x_1134_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_1123_, v_curr_1130_, v_nextPos_1131_, v_c_1124_, v_s_1125_);
return v___x_1134_;
}
else
{
uint32_t v___x_1135_; uint8_t v___x_1136_; 
v___x_1135_ = 57;
v___x_1136_ = lean_uint32_dec_le(v_curr_1130_, v___x_1135_);
if (v___x_1136_ == 0)
{
lean_object* v___x_1137_; 
v___x_1137_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_1123_, v_curr_1130_, v_nextPos_1131_, v_c_1124_, v_s_1125_);
return v___x_1137_;
}
else
{
lean_object* v_s_1138_; lean_object* v_pos_1139_; uint8_t v___x_1140_; 
v_s_1138_ = l_Lean_Parser_ParserState_setPos(v_s_1125_, v_nextPos_1131_);
v_pos_1139_ = lean_ctor_get(v_s_1138_, 2);
v___x_1140_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1126_, v_pos_1139_);
if (v___x_1140_ == 0)
{
uint32_t v_curr_1141_; lean_object* v_nextPos_1142_; uint32_t v___x_1143_; uint8_t v___x_1144_; 
v_curr_1141_ = lean_string_utf8_get_fast(v_inputString_1129_, v_pos_1139_);
v_nextPos_1142_ = lean_string_utf8_next_fast(v_inputString_1129_, v_pos_1139_);
v___x_1143_ = 58;
v___x_1144_ = lean_uint32_dec_eq(v_curr_1141_, v___x_1143_);
if (v___x_1144_ == 0)
{
uint8_t v___x_1145_; 
v___x_1145_ = lean_uint32_dec_le(v___x_1132_, v_curr_1141_);
if (v___x_1145_ == 0)
{
lean_object* v___x_1146_; 
v___x_1146_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_1123_, v_curr_1141_, v_nextPos_1142_, v_c_1124_, v_s_1138_);
return v___x_1146_;
}
else
{
uint8_t v___x_1147_; 
v___x_1147_ = lean_uint32_dec_le(v_curr_1141_, v___x_1135_);
if (v___x_1147_ == 0)
{
lean_object* v___x_1148_; 
v___x_1148_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_1123_, v_curr_1141_, v_nextPos_1142_, v_c_1124_, v_s_1138_);
return v___x_1148_;
}
else
{
lean_object* v_s_1149_; lean_object* v_pos_1150_; uint8_t v___x_1151_; 
v_s_1149_ = l_Lean_Parser_ParserState_setPos(v_s_1138_, v_nextPos_1142_);
v_pos_1150_ = lean_ctor_get(v_s_1149_, 2);
v___x_1151_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1126_, v_pos_1150_);
if (v___x_1151_ == 0)
{
uint32_t v_curr_1152_; lean_object* v_nextPos_1153_; uint8_t v___x_1154_; 
v_curr_1152_ = lean_string_utf8_get_fast(v_inputString_1129_, v_pos_1150_);
v_nextPos_1153_ = lean_string_utf8_next_fast(v_inputString_1129_, v_pos_1150_);
v___x_1154_ = lean_uint32_dec_le(v___x_1132_, v_curr_1152_);
if (v___x_1154_ == 0)
{
lean_object* v___x_1155_; 
v___x_1155_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_1123_, v_curr_1152_, v_nextPos_1153_, v_c_1124_, v_s_1149_);
return v___x_1155_;
}
else
{
uint8_t v___x_1156_; 
v___x_1156_ = lean_uint32_dec_le(v_curr_1152_, v___x_1135_);
if (v___x_1156_ == 0)
{
lean_object* v___x_1157_; 
v___x_1157_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_1123_, v_curr_1152_, v_nextPos_1153_, v_c_1124_, v_s_1149_);
return v___x_1157_;
}
else
{
lean_object* v_s_1158_; uint8_t v___x_1159_; 
v_s_1158_ = l_Lean_Parser_ParserState_setPos(v_s_1149_, v_nextPos_1153_);
v___x_1159_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1126_, v_nextPos_1153_);
if (v___x_1159_ == 0)
{
lean_object* v_pos_1160_; uint32_t v_curr_1161_; lean_object* v_nextPos_1162_; uint32_t v___x_1163_; uint8_t v___x_1164_; 
v_pos_1160_ = lean_ctor_get(v_s_1158_, 2);
v_curr_1161_ = lean_string_utf8_get_fast(v_inputString_1129_, v_pos_1160_);
v_nextPos_1162_ = lean_string_utf8_next_fast(v_inputString_1129_, v_pos_1160_);
v___x_1163_ = 45;
v___x_1164_ = lean_uint32_dec_eq(v_curr_1161_, v___x_1163_);
if (v___x_1164_ == 0)
{
uint8_t v___x_1165_; 
v___x_1165_ = lean_uint32_dec_le(v___x_1132_, v_curr_1161_);
if (v___x_1165_ == 0)
{
lean_object* v___x_1166_; 
v___x_1166_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_1123_, v_curr_1161_, v_nextPos_1162_, v_c_1124_, v_s_1158_);
return v___x_1166_;
}
else
{
uint8_t v___x_1167_; 
v___x_1167_ = lean_uint32_dec_le(v_curr_1161_, v___x_1135_);
if (v___x_1167_ == 0)
{
lean_object* v___x_1168_; 
v___x_1168_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_1123_, v_curr_1161_, v_nextPos_1162_, v_c_1124_, v_s_1158_);
return v___x_1168_;
}
else
{
lean_object* v_s_1169_; lean_object* v___x_1170_; 
v_s_1169_ = l_Lean_Parser_ParserState_setPos(v_s_1158_, v_nextPos_1162_);
v___x_1170_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberAuxFn(v_startPos_1123_, v_c_1124_, v_s_1169_);
return v___x_1170_;
}
}
}
else
{
lean_object* v_s_1171_; lean_object* v_s_1172_; lean_object* v_errorMsg_1173_; lean_object* v___x_1174_; uint8_t v___x_1175_; 
v_s_1171_ = l_Lean_Parser_ParserState_setPos(v_s_1158_, v_nextPos_1162_);
v_s_1172_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn(v_c_1124_, v_s_1171_);
v_errorMsg_1173_ = lean_ctor_get(v_s_1172_, 4);
v___x_1174_ = lean_box(0);
v___x_1175_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_1173_, v___x_1174_);
if (v___x_1175_ == 0)
{
lean_dec_ref(v_c_1124_);
lean_dec(v_startPos_1123_);
return v_s_1172_;
}
else
{
lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1176_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1));
v___x_1177_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1178_ = l_Lake_Toml_pushLit(v___x_1176_, v_startPos_1123_, v___x_1177_, v_c_1124_, v_s_1172_);
return v___x_1178_;
}
}
}
else
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; 
v___x_1179_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6));
v___x_1180_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1181_ = l_Lake_Toml_pushLit(v___x_1179_, v_startPos_1123_, v___x_1180_, v_c_1124_, v_s_1158_);
return v___x_1181_;
}
}
}
}
else
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1182_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6));
v___x_1183_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1184_ = l_Lake_Toml_pushLit(v___x_1182_, v_startPos_1123_, v___x_1183_, v_c_1124_, v_s_1149_);
return v___x_1184_;
}
}
}
}
else
{
lean_object* v_s_1185_; lean_object* v_s_1186_; lean_object* v_errorMsg_1187_; lean_object* v___x_1188_; uint8_t v___x_1189_; 
v_s_1185_ = l_Lean_Parser_ParserState_setPos(v_s_1138_, v_nextPos_1142_);
v_s_1186_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn(v___x_1140_, v_c_1124_, v_s_1185_);
v_errorMsg_1187_ = lean_ctor_get(v_s_1186_, 4);
v___x_1188_ = lean_box(0);
v___x_1189_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_1187_, v___x_1188_);
if (v___x_1189_ == 0)
{
lean_dec_ref(v_c_1124_);
lean_dec(v_startPos_1123_);
return v_s_1186_;
}
else
{
lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1190_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1));
v___x_1191_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1192_ = l_Lake_Toml_pushLit(v___x_1190_, v_startPos_1123_, v___x_1191_, v_c_1124_, v_s_1186_);
return v___x_1192_;
}
}
}
else
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1193_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6));
v___x_1194_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1195_ = l_Lake_Toml_pushLit(v___x_1193_, v_startPos_1123_, v___x_1194_, v_c_1124_, v_s_1138_);
return v___x_1195_;
}
}
}
}
else
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
lean_dec_ref(v_c_1124_);
lean_dec(v_startPos_1123_);
v___x_1196_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__5));
v___x_1197_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1125_, v___x_1196_);
return v___x_1197_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_numeralFn___lam__0(lean_object* v_c_1235_, lean_object* v_s_1236_){
_start:
{
lean_object* v_pos_1237_; lean_object* v___y_1242_; lean_object* v_errorMsg_1243_; lean_object* v_toInputContext_1249_; lean_object* v_expected_1250_; uint8_t v___x_1251_; 
v_pos_1237_ = lean_ctor_get(v_s_1236_, 2);
v_toInputContext_1249_ = lean_ctor_get(v_c_1235_, 0);
v_expected_1250_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__1));
v___x_1251_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1249_, v_pos_1237_);
if (v___x_1251_ == 0)
{
lean_object* v_inputString_1252_; uint32_t v_curr_1253_; uint32_t v___x_1254_; uint8_t v___x_1255_; 
v_inputString_1252_ = lean_ctor_get(v_toInputContext_1249_, 0);
v_curr_1253_ = lean_string_utf8_get_fast(v_inputString_1252_, v_pos_1237_);
v___x_1254_ = 48;
v___x_1255_ = lean_uint32_dec_eq(v_curr_1253_, v___x_1254_);
if (v___x_1255_ == 0)
{
uint8_t v___x_1256_; uint8_t v___x_1277_; 
v___x_1256_ = 1;
v___x_1277_ = lean_uint32_dec_le(v___x_1254_, v_curr_1253_);
if (v___x_1277_ == 0)
{
goto v___jp_1257_;
}
else
{
uint32_t v___x_1278_; uint8_t v___x_1279_; 
v___x_1278_ = 57;
v___x_1279_ = lean_uint32_dec_le(v_curr_1253_, v___x_1278_);
if (v___x_1279_ == 0)
{
goto v___jp_1257_;
}
else
{
lean_object* v___x_1280_; lean_object* v___x_1281_; 
lean_inc(v_pos_1237_);
v___x_1280_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1236_, v_c_1235_, v_pos_1237_);
v___x_1281_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn(v_pos_1237_, v_c_1235_, v___x_1280_);
return v___x_1281_;
}
}
v___jp_1257_:
{
uint32_t v___x_1258_; uint8_t v___x_1259_; 
v___x_1258_ = 43;
v___x_1259_ = lean_uint32_dec_eq(v_curr_1253_, v___x_1258_);
if (v___x_1259_ == 0)
{
uint32_t v___x_1260_; uint8_t v___x_1261_; 
v___x_1260_ = 45;
v___x_1261_ = lean_uint32_dec_eq(v_curr_1253_, v___x_1260_);
if (v___x_1261_ == 0)
{
uint32_t v___x_1262_; uint8_t v___x_1263_; 
v___x_1262_ = 105;
v___x_1263_ = lean_uint32_dec_eq(v_curr_1253_, v___x_1262_);
if (v___x_1263_ == 0)
{
uint32_t v___x_1264_; uint8_t v___x_1265_; 
v___x_1264_ = 110;
v___x_1265_ = lean_uint32_dec_eq(v_curr_1253_, v___x_1264_);
if (v___x_1265_ == 0)
{
lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
lean_dec_ref(v_c_1235_);
v___x_1266_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__2));
v___x_1267_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__3));
v___x_1268_ = lean_string_push(v___x_1267_, v_curr_1253_);
v___x_1269_ = lean_string_append(v___x_1266_, v___x_1268_);
lean_dec_ref(v___x_1268_);
v___x_1270_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__4));
v___x_1271_ = lean_string_append(v___x_1269_, v___x_1270_);
v___x_1272_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1236_, v___x_1271_, v_expected_1250_, v___x_1256_);
return v___x_1272_;
}
else
{
lean_object* v___x_1273_; lean_object* v___x_1274_; 
lean_inc(v_pos_1237_);
v___x_1273_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1236_, v_c_1235_, v_pos_1237_);
v___x_1274_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn(v_pos_1237_, v_c_1235_, v___x_1273_);
return v___x_1274_;
}
}
else
{
lean_object* v___x_1275_; lean_object* v___x_1276_; 
lean_inc(v_pos_1237_);
v___x_1275_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1236_, v_c_1235_, v_pos_1237_);
v___x_1276_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn(v_pos_1237_, v_c_1235_, v___x_1275_);
return v___x_1276_;
}
}
else
{
lean_inc(v_pos_1237_);
goto v___jp_1238_;
}
}
else
{
lean_inc(v_pos_1237_);
goto v___jp_1238_;
}
}
}
else
{
lean_object* v_s_1282_; lean_object* v_pos_1283_; uint8_t v___x_1284_; 
lean_inc(v_pos_1237_);
v_s_1282_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1236_, v_c_1235_, v_pos_1237_);
v_pos_1283_ = lean_ctor_get(v_s_1282_, 2);
v___x_1284_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1249_, v_pos_1283_);
if (v___x_1284_ == 0)
{
uint32_t v_curr_1285_; uint32_t v___x_1289_; uint8_t v___x_1290_; 
v_curr_1285_ = lean_string_utf8_get_fast(v_inputString_1252_, v_pos_1283_);
v___x_1289_ = 98;
v___x_1290_ = lean_uint32_dec_eq(v_curr_1285_, v___x_1289_);
if (v___x_1290_ == 0)
{
uint32_t v___x_1291_; uint8_t v___x_1292_; 
v___x_1291_ = 111;
v___x_1292_ = lean_uint32_dec_eq(v_curr_1285_, v___x_1291_);
if (v___x_1292_ == 0)
{
uint32_t v___x_1293_; uint8_t v___x_1294_; 
v___x_1293_ = 120;
v___x_1294_ = lean_uint32_dec_eq(v_curr_1285_, v___x_1293_);
if (v___x_1294_ == 0)
{
uint8_t v___x_1295_; 
v___x_1295_ = lean_uint32_dec_le(v___x_1254_, v_curr_1285_);
if (v___x_1295_ == 0)
{
goto v___jp_1286_;
}
else
{
uint32_t v___x_1296_; uint8_t v___x_1297_; 
v___x_1296_ = 57;
v___x_1297_ = lean_uint32_dec_le(v_curr_1285_, v___x_1296_);
if (v___x_1297_ == 0)
{
goto v___jp_1286_;
}
else
{
lean_object* v_s_1298_; uint32_t v___x_1299_; lean_object* v___x_1300_; lean_object* v_s_1301_; lean_object* v_errorMsg_1302_; lean_object* v___x_1303_; uint8_t v___x_1304_; 
lean_inc(v_pos_1283_);
v_s_1298_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1282_, v_c_1235_, v_pos_1283_);
lean_dec(v_pos_1283_);
v___x_1299_ = 58;
v___x_1300_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__3));
v_s_1301_ = l_Lake_Toml_chFn(v___x_1299_, v___x_1300_, v_c_1235_, v_s_1298_);
v_errorMsg_1302_ = lean_ctor_get(v_s_1301_, 4);
v___x_1303_ = lean_box(0);
v___x_1304_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_1302_, v___x_1303_);
if (v___x_1304_ == 0)
{
lean_inc(v_errorMsg_1302_);
v___y_1242_ = v_s_1301_;
v_errorMsg_1243_ = v_errorMsg_1302_;
goto v___jp_1241_;
}
else
{
lean_object* v___x_1305_; lean_object* v_errorMsg_1306_; 
v___x_1305_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn(v___x_1284_, v_c_1235_, v_s_1301_);
v_errorMsg_1306_ = lean_ctor_get(v___x_1305_, 4);
lean_inc(v_errorMsg_1306_);
v___y_1242_ = v___x_1305_;
v_errorMsg_1243_ = v_errorMsg_1306_;
goto v___jp_1241_;
}
}
}
}
else
{
lean_object* v_s_1307_; lean_object* v___x_1308_; uint32_t v___x_1309_; lean_object* v___x_1310_; lean_object* v_s_1311_; lean_object* v_errorMsg_1312_; lean_object* v___x_1313_; uint8_t v___x_1314_; 
lean_inc(v_pos_1283_);
v_s_1307_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1282_, v_c_1235_, v_pos_1283_);
lean_dec(v_pos_1283_);
v___x_1308_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__5));
v___x_1309_ = 95;
v___x_1310_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__7));
v_s_1311_ = l_Lake_Toml_sepByChar1Fn(v___x_1308_, v___x_1309_, v___x_1310_, v_c_1235_, v_s_1307_);
v_errorMsg_1312_ = lean_ctor_get(v_s_1311_, 4);
v___x_1313_ = lean_box(0);
v___x_1314_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_1312_, v___x_1313_);
if (v___x_1314_ == 0)
{
lean_dec(v_pos_1237_);
lean_dec_ref(v_c_1235_);
return v_s_1311_;
}
else
{
lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1315_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__9));
v___x_1316_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1317_ = l_Lake_Toml_pushLit(v___x_1315_, v_pos_1237_, v___x_1316_, v_c_1235_, v_s_1311_);
return v___x_1317_;
}
}
}
else
{
lean_object* v_s_1318_; lean_object* v___x_1319_; uint32_t v___x_1320_; lean_object* v___x_1321_; lean_object* v_s_1322_; lean_object* v_errorMsg_1323_; lean_object* v___x_1324_; uint8_t v___x_1325_; 
lean_inc(v_pos_1283_);
v_s_1318_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1282_, v_c_1235_, v_pos_1283_);
lean_dec(v_pos_1283_);
v___x_1319_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__10));
v___x_1320_ = 95;
v___x_1321_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__12));
v_s_1322_ = l_Lake_Toml_sepByChar1Fn(v___x_1319_, v___x_1320_, v___x_1321_, v_c_1235_, v_s_1318_);
v_errorMsg_1323_ = lean_ctor_get(v_s_1322_, 4);
v___x_1324_ = lean_box(0);
v___x_1325_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_1323_, v___x_1324_);
if (v___x_1325_ == 0)
{
lean_dec(v_pos_1237_);
lean_dec_ref(v_c_1235_);
return v_s_1322_;
}
else
{
lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1326_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__14));
v___x_1327_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1328_ = l_Lake_Toml_pushLit(v___x_1326_, v_pos_1237_, v___x_1327_, v_c_1235_, v_s_1322_);
return v___x_1328_;
}
}
}
else
{
lean_object* v_s_1329_; lean_object* v___x_1330_; uint32_t v___x_1331_; lean_object* v___x_1332_; lean_object* v_s_1333_; lean_object* v_errorMsg_1334_; lean_object* v___x_1335_; uint8_t v___x_1336_; 
lean_inc(v_pos_1283_);
v_s_1329_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1282_, v_c_1235_, v_pos_1283_);
lean_dec(v_pos_1283_);
v___x_1330_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__15));
v___x_1331_ = 95;
v___x_1332_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__17));
v_s_1333_ = l_Lake_Toml_sepByChar1Fn(v___x_1330_, v___x_1331_, v___x_1332_, v_c_1235_, v_s_1329_);
v_errorMsg_1334_ = lean_ctor_get(v_s_1333_, 4);
v___x_1335_ = lean_box(0);
v___x_1336_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_1334_, v___x_1335_);
if (v___x_1336_ == 0)
{
lean_dec(v_pos_1237_);
lean_dec_ref(v_c_1235_);
return v_s_1333_;
}
else
{
lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; 
v___x_1337_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__19));
v___x_1338_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1339_ = l_Lake_Toml_pushLit(v___x_1337_, v_pos_1237_, v___x_1338_, v_c_1235_, v_s_1333_);
return v___x_1339_;
}
}
v___jp_1286_:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1287_ = lean_string_utf8_next_fast(v_inputString_1252_, v_pos_1283_);
v___x_1288_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn(v_pos_1237_, v_curr_1285_, v___x_1287_, v_c_1235_, v_s_1282_);
return v___x_1288_;
}
}
else
{
lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; 
v___x_1340_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6));
v___x_1341_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1342_ = l_Lake_Toml_pushLit(v___x_1340_, v_pos_1237_, v___x_1341_, v_c_1235_, v_s_1282_);
return v___x_1342_;
}
}
}
else
{
lean_object* v___x_1343_; 
lean_dec_ref(v_c_1235_);
v___x_1343_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1236_, v_expected_1250_);
return v___x_1343_;
}
v___jp_1238_:
{
lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1239_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1236_, v_c_1235_, v_pos_1237_);
v___x_1240_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decimalFn(v_pos_1237_, v_c_1235_, v___x_1239_);
return v___x_1240_;
}
v___jp_1241_:
{
lean_object* v___x_1244_; uint8_t v___x_1245_; 
v___x_1244_ = lean_box(0);
v___x_1245_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_1243_, v___x_1244_);
lean_dec(v_errorMsg_1243_);
if (v___x_1245_ == 0)
{
lean_dec(v_pos_1237_);
lean_dec_ref(v_c_1235_);
return v___y_1242_;
}
else
{
lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; 
v___x_1246_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1));
v___x_1247_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1248_ = l_Lake_Toml_pushLit(v___x_1246_, v_pos_1237_, v___x_1247_, v_c_1235_, v___y_1242_);
return v___x_1248_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_numeralFn(lean_object* v_a_1345_, lean_object* v_a_1346_){
_start:
{
lean_object* v___f_1347_; lean_object* v___x_1348_; 
v___f_1347_ = ((lean_object*)(l_Lake_Toml_numeralFn___closed__0));
v___x_1348_ = l_Lean_Parser_atomicFn(v___f_1347_, v_a_1345_, v_a_1346_);
return v___x_1348_;
}
}
static lean_object* _init_l_Lake_Toml_trailingWs___closed__0(void){
_start:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1349_ = lean_alloc_closure((void*)(l_Lake_Toml_wsFn___boxed), 2, 0);
v___x_1350_ = l_Lake_Toml_trailing(v___x_1349_);
return v___x_1350_;
}
}
static lean_object* _init_l_Lake_Toml_trailingWs(void){
_start:
{
lean_object* v___x_1351_; 
v___x_1351_ = lean_obj_once(&l_Lake_Toml_trailingWs___closed__0, &l_Lake_Toml_trailingWs___closed__0_once, _init_l_Lake_Toml_trailingWs___closed__0);
return v___x_1351_;
}
}
static lean_object* _init_l_Lake_Toml_trailingSep___closed__1(void){
_start:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1353_ = ((lean_object*)(l_Lake_Toml_trailingSep___closed__0));
v___x_1354_ = l_Lake_Toml_trailing(v___x_1353_);
return v___x_1354_;
}
}
static lean_object* _init_l_Lake_Toml_trailingSep(void){
_start:
{
lean_object* v___x_1355_; 
v___x_1355_ = lean_obj_once(&l_Lake_Toml_trailingSep___closed__1, &l_Lake_Toml_trailingSep___closed__1_once, _init_l_Lake_Toml_trailingSep___closed__1);
return v___x_1355_;
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_unquotedKeyFn___lam__0(uint32_t v_c_1356_){
_start:
{
uint32_t v___x_1372_; uint8_t v___x_1373_; 
v___x_1372_ = 65;
v___x_1373_ = lean_uint32_dec_le(v___x_1372_, v_c_1356_);
if (v___x_1373_ == 0)
{
goto v___jp_1367_;
}
else
{
uint32_t v___x_1374_; uint8_t v___x_1375_; 
v___x_1374_ = 90;
v___x_1375_ = lean_uint32_dec_le(v_c_1356_, v___x_1374_);
if (v___x_1375_ == 0)
{
goto v___jp_1367_;
}
else
{
return v___x_1375_;
}
}
v___jp_1357_:
{
uint32_t v___x_1358_; uint8_t v___x_1359_; 
v___x_1358_ = 95;
v___x_1359_ = lean_uint32_dec_eq(v_c_1356_, v___x_1358_);
if (v___x_1359_ == 0)
{
uint32_t v___x_1360_; uint8_t v___x_1361_; 
v___x_1360_ = 45;
v___x_1361_ = lean_uint32_dec_eq(v_c_1356_, v___x_1360_);
return v___x_1361_;
}
else
{
return v___x_1359_;
}
}
v___jp_1362_:
{
uint32_t v___x_1363_; uint8_t v___x_1364_; 
v___x_1363_ = 48;
v___x_1364_ = lean_uint32_dec_le(v___x_1363_, v_c_1356_);
if (v___x_1364_ == 0)
{
goto v___jp_1357_;
}
else
{
uint32_t v___x_1365_; uint8_t v___x_1366_; 
v___x_1365_ = 57;
v___x_1366_ = lean_uint32_dec_le(v_c_1356_, v___x_1365_);
if (v___x_1366_ == 0)
{
goto v___jp_1357_;
}
else
{
return v___x_1366_;
}
}
}
v___jp_1367_:
{
uint32_t v___x_1368_; uint8_t v___x_1369_; 
v___x_1368_ = 97;
v___x_1369_ = lean_uint32_dec_le(v___x_1368_, v_c_1356_);
if (v___x_1369_ == 0)
{
goto v___jp_1362_;
}
else
{
uint32_t v___x_1370_; uint8_t v___x_1371_; 
v___x_1370_ = 122;
v___x_1371_ = lean_uint32_dec_le(v_c_1356_, v___x_1370_);
if (v___x_1371_ == 0)
{
goto v___jp_1362_;
}
else
{
return v___x_1371_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKeyFn___lam__0___boxed(lean_object* v_c_1376_){
_start:
{
uint32_t v_c_boxed_1377_; uint8_t v_res_1378_; lean_object* v_r_1379_; 
v_c_boxed_1377_ = lean_unbox_uint32(v_c_1376_);
lean_dec(v_c_1376_);
v_res_1378_ = l_Lake_Toml_unquotedKeyFn___lam__0(v_c_boxed_1377_);
v_r_1379_ = lean_box(v_res_1378_);
return v_r_1379_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKeyFn(lean_object* v_a_1385_, lean_object* v_a_1386_){
_start:
{
lean_object* v___f_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___f_1387_ = ((lean_object*)(l_Lake_Toml_unquotedKeyFn___closed__0));
v___x_1388_ = ((lean_object*)(l_Lake_Toml_unquotedKeyFn___closed__2));
v___x_1389_ = l_Lake_Toml_takeWhile1Fn(v___f_1387_, v___x_1388_, v_a_1385_, v_a_1386_);
return v___x_1389_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKeyFn___boxed(lean_object* v_a_1390_, lean_object* v_a_1391_){
_start:
{
lean_object* v_res_1392_; 
v_res_1392_ = l_Lake_Toml_unquotedKeyFn(v_a_1390_, v_a_1391_);
lean_dec_ref(v_a_1390_);
return v_res_1392_;
}
}
static lean_object* _init_l_Lake_Toml_unquotedKey___closed__2(void){
_start:
{
uint8_t v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; 
v___x_1398_ = 0;
v___x_1399_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1400_ = lean_alloc_closure((void*)(l_Lake_Toml_unquotedKeyFn___boxed), 2, 0);
v___x_1401_ = ((lean_object*)(l_Lake_Toml_unquotedKey___closed__1));
v___x_1402_ = ((lean_object*)(l_Lake_Toml_unquotedKey___closed__0));
v___x_1403_ = l_Lake_Toml_litWithAntiquot(v___x_1402_, v___x_1401_, v___x_1400_, v___x_1399_, v___x_1398_);
return v___x_1403_;
}
}
static lean_object* _init_l_Lake_Toml_unquotedKey(void){
_start:
{
lean_object* v___x_1404_; 
v___x_1404_ = lean_obj_once(&l_Lake_Toml_unquotedKey___closed__2, &l_Lake_Toml_unquotedKey___closed__2_once, _init_l_Lake_Toml_unquotedKey___closed__2);
return v___x_1404_;
}
}
static lean_object* _init_l_Lake_Toml_basicString___closed__2(void){
_start:
{
uint8_t v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1410_ = 0;
v___x_1411_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1412_ = lean_alloc_closure((void*)(l_Lake_Toml_basicStringFn), 2, 0);
v___x_1413_ = ((lean_object*)(l_Lake_Toml_basicString___closed__1));
v___x_1414_ = ((lean_object*)(l_Lake_Toml_basicString___closed__0));
v___x_1415_ = l_Lake_Toml_litWithAntiquot(v___x_1414_, v___x_1413_, v___x_1412_, v___x_1411_, v___x_1410_);
return v___x_1415_;
}
}
static lean_object* _init_l_Lake_Toml_basicString(void){
_start:
{
lean_object* v___x_1416_; 
v___x_1416_ = lean_obj_once(&l_Lake_Toml_basicString___closed__2, &l_Lake_Toml_basicString___closed__2_once, _init_l_Lake_Toml_basicString___closed__2);
return v___x_1416_;
}
}
static lean_object* _init_l_Lake_Toml_literalString___closed__2(void){
_start:
{
uint8_t v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1422_ = 0;
v___x_1423_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1424_ = lean_alloc_closure((void*)(l_Lake_Toml_literalStringFn___boxed), 2, 0);
v___x_1425_ = ((lean_object*)(l_Lake_Toml_literalString___closed__1));
v___x_1426_ = ((lean_object*)(l_Lake_Toml_literalString___closed__0));
v___x_1427_ = l_Lake_Toml_litWithAntiquot(v___x_1426_, v___x_1425_, v___x_1424_, v___x_1423_, v___x_1422_);
return v___x_1427_;
}
}
static lean_object* _init_l_Lake_Toml_literalString(void){
_start:
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_obj_once(&l_Lake_Toml_literalString___closed__2, &l_Lake_Toml_literalString___closed__2_once, _init_l_Lake_Toml_literalString___closed__2);
return v___x_1428_;
}
}
static lean_object* _init_l_Lake_Toml_mlBasicString___closed__2(void){
_start:
{
uint8_t v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1434_ = 0;
v___x_1435_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1436_ = lean_alloc_closure((void*)(l_Lake_Toml_mlBasicStringFn), 2, 0);
v___x_1437_ = ((lean_object*)(l_Lake_Toml_mlBasicString___closed__1));
v___x_1438_ = ((lean_object*)(l_Lake_Toml_mlBasicString___closed__0));
v___x_1439_ = l_Lake_Toml_litWithAntiquot(v___x_1438_, v___x_1437_, v___x_1436_, v___x_1435_, v___x_1434_);
return v___x_1439_;
}
}
static lean_object* _init_l_Lake_Toml_mlBasicString(void){
_start:
{
lean_object* v___x_1440_; 
v___x_1440_ = lean_obj_once(&l_Lake_Toml_mlBasicString___closed__2, &l_Lake_Toml_mlBasicString___closed__2_once, _init_l_Lake_Toml_mlBasicString___closed__2);
return v___x_1440_;
}
}
static lean_object* _init_l_Lake_Toml_mlLiteralString___closed__2(void){
_start:
{
uint8_t v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1446_ = 0;
v___x_1447_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1448_ = lean_alloc_closure((void*)(l_Lake_Toml_mlLiteralStringFn), 2, 0);
v___x_1449_ = ((lean_object*)(l_Lake_Toml_mlLiteralString___closed__1));
v___x_1450_ = ((lean_object*)(l_Lake_Toml_mlLiteralString___closed__0));
v___x_1451_ = l_Lake_Toml_litWithAntiquot(v___x_1450_, v___x_1449_, v___x_1448_, v___x_1447_, v___x_1446_);
return v___x_1451_;
}
}
static lean_object* _init_l_Lake_Toml_mlLiteralString(void){
_start:
{
lean_object* v___x_1452_; 
v___x_1452_ = lean_obj_once(&l_Lake_Toml_mlLiteralString___closed__2, &l_Lake_Toml_mlLiteralString___closed__2_once, _init_l_Lake_Toml_mlLiteralString___closed__2);
return v___x_1452_;
}
}
static lean_object* _init_l_Lake_Toml_quotedKey___closed__0(void){
_start:
{
lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1453_ = l_Lake_Toml_literalString;
v___x_1454_ = l_Lake_Toml_basicString;
v___x_1455_ = l_Lean_Parser_orelse(v___x_1454_, v___x_1453_);
return v___x_1455_;
}
}
static lean_object* _init_l_Lake_Toml_quotedKey(void){
_start:
{
lean_object* v___x_1456_; 
v___x_1456_ = lean_obj_once(&l_Lake_Toml_quotedKey___closed__0, &l_Lake_Toml_quotedKey___closed__0_once, _init_l_Lake_Toml_quotedKey___closed__0);
return v___x_1456_;
}
}
static lean_object* _init_l_Lake_Toml_simpleKey___closed__2(void){
_start:
{
lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; 
v___x_1462_ = l_Lake_Toml_quotedKey;
v___x_1463_ = l_Lake_Toml_unquotedKey;
v___x_1464_ = l_Lean_Parser_orelse(v___x_1463_, v___x_1462_);
return v___x_1464_;
}
}
static lean_object* _init_l_Lake_Toml_simpleKey___closed__3(void){
_start:
{
uint8_t v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___x_1465_ = 1;
v___x_1466_ = lean_obj_once(&l_Lake_Toml_simpleKey___closed__2, &l_Lake_Toml_simpleKey___closed__2_once, _init_l_Lake_Toml_simpleKey___closed__2);
v___x_1467_ = ((lean_object*)(l_Lake_Toml_simpleKey___closed__1));
v___x_1468_ = ((lean_object*)(l_Lake_Toml_simpleKey___closed__0));
v___x_1469_ = l_Lean_Parser_nodeWithAntiquot(v___x_1468_, v___x_1467_, v___x_1466_, v___x_1465_);
return v___x_1469_;
}
}
static lean_object* _init_l_Lake_Toml_simpleKey(void){
_start:
{
lean_object* v___x_1470_; 
v___x_1470_ = lean_obj_once(&l_Lake_Toml_simpleKey___closed__3, &l_Lake_Toml_simpleKey___closed__3_once, _init_l_Lake_Toml_simpleKey___closed__3);
return v___x_1470_;
}
}
static lean_object* _init_l_Lake_Toml_key___closed__6(void){
_start:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; uint32_t v___x_1486_; lean_object* v___x_1487_; 
v___x_1484_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1485_ = ((lean_object*)(l_Lake_Toml_key___closed__5));
v___x_1486_ = 46;
v___x_1487_ = l_Lake_Toml_chAtom(v___x_1486_, v___x_1485_, v___x_1484_);
return v___x_1487_;
}
}
static lean_object* _init_l_Lake_Toml_key___closed__7(void){
_start:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1488_ = l_Lake_Toml_trailingWs;
v___x_1489_ = lean_obj_once(&l_Lake_Toml_key___closed__6, &l_Lake_Toml_key___closed__6_once, _init_l_Lake_Toml_key___closed__6);
v___x_1490_ = l_Lean_Parser_andthen(v___x_1489_, v___x_1488_);
return v___x_1490_;
}
}
static lean_object* _init_l_Lake_Toml_key___closed__8(void){
_start:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1491_ = lean_obj_once(&l_Lake_Toml_key___closed__7, &l_Lake_Toml_key___closed__7_once, _init_l_Lake_Toml_key___closed__7);
v___x_1492_ = l_Lake_Toml_trailingWs;
v___x_1493_ = l_Lean_Parser_andthen(v___x_1492_, v___x_1491_);
return v___x_1493_;
}
}
static lean_object* _init_l_Lake_Toml_key___closed__9(void){
_start:
{
uint8_t v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; 
v___x_1494_ = 0;
v___x_1495_ = lean_obj_once(&l_Lake_Toml_key___closed__8, &l_Lake_Toml_key___closed__8_once, _init_l_Lake_Toml_key___closed__8);
v___x_1496_ = ((lean_object*)(l_Lake_Toml_key___closed__3));
v___x_1497_ = l_Lake_Toml_simpleKey;
v___x_1498_ = l_Lean_Parser_sepBy1(v___x_1497_, v___x_1496_, v___x_1495_, v___x_1494_);
return v___x_1498_;
}
}
static lean_object* _init_l_Lake_Toml_key___closed__10(void){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1499_ = lean_obj_once(&l_Lake_Toml_key___closed__9, &l_Lake_Toml_key___closed__9_once, _init_l_Lake_Toml_key___closed__9);
v___x_1500_ = ((lean_object*)(l_Lake_Toml_key___closed__2));
v___x_1501_ = l_Lean_Parser_setExpected(v___x_1500_, v___x_1499_);
return v___x_1501_;
}
}
static lean_object* _init_l_Lake_Toml_key___closed__11(void){
_start:
{
uint8_t v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1502_ = 1;
v___x_1503_ = lean_obj_once(&l_Lake_Toml_key___closed__10, &l_Lake_Toml_key___closed__10_once, _init_l_Lake_Toml_key___closed__10);
v___x_1504_ = ((lean_object*)(l_Lake_Toml_key___closed__1));
v___x_1505_ = ((lean_object*)(l_Lake_Toml_key___closed__0));
v___x_1506_ = l_Lean_Parser_nodeWithAntiquot(v___x_1505_, v___x_1504_, v___x_1503_, v___x_1502_);
return v___x_1506_;
}
}
static lean_object* _init_l_Lake_Toml_key(void){
_start:
{
lean_object* v___x_1507_; 
v___x_1507_ = lean_obj_once(&l_Lake_Toml_key___closed__11, &l_Lake_Toml_key___closed__11_once, _init_l_Lake_Toml_key___closed__11);
return v___x_1507_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__4(void){
_start:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; uint32_t v___x_1519_; lean_object* v___x_1520_; 
v___x_1517_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1518_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__3));
v___x_1519_ = 91;
v___x_1520_ = l_Lake_Toml_chAtom(v___x_1519_, v___x_1518_, v___x_1517_);
return v___x_1520_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__7(void){
_start:
{
lean_object* v___x_1525_; lean_object* v___x_1526_; uint32_t v___x_1527_; lean_object* v___x_1528_; 
v___x_1525_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1526_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__6));
v___x_1527_ = 91;
v___x_1528_ = l_Lake_Toml_chAtom(v___x_1527_, v___x_1526_, v___x_1525_);
return v___x_1528_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__8(void){
_start:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; 
v___x_1529_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__5));
v___x_1530_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__7, &l_Lake_Toml_stdTable___closed__7_once, _init_l_Lake_Toml_stdTable___closed__7);
v___x_1531_ = l_Lean_Parser_notFollowedBy(v___x_1530_, v___x_1529_);
return v___x_1531_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__9(void){
_start:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; 
v___x_1532_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__8, &l_Lake_Toml_stdTable___closed__8_once, _init_l_Lake_Toml_stdTable___closed__8);
v___x_1533_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__4, &l_Lake_Toml_stdTable___closed__4_once, _init_l_Lake_Toml_stdTable___closed__4);
v___x_1534_ = l_Lean_Parser_andthen(v___x_1533_, v___x_1532_);
return v___x_1534_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__10(void){
_start:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1535_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__9, &l_Lake_Toml_stdTable___closed__9_once, _init_l_Lake_Toml_stdTable___closed__9);
v___x_1536_ = l_Lean_Parser_atomic(v___x_1535_);
return v___x_1536_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__13(void){
_start:
{
lean_object* v___x_1541_; lean_object* v___x_1542_; uint32_t v___x_1543_; lean_object* v___x_1544_; 
v___x_1541_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1542_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__12));
v___x_1543_ = 93;
v___x_1544_ = l_Lake_Toml_chAtom(v___x_1543_, v___x_1542_, v___x_1541_);
return v___x_1544_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__14(void){
_start:
{
lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v___x_1545_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__13, &l_Lake_Toml_stdTable___closed__13_once, _init_l_Lake_Toml_stdTable___closed__13);
v___x_1546_ = l_Lake_Toml_trailingWs;
v___x_1547_ = l_Lean_Parser_andthen(v___x_1546_, v___x_1545_);
return v___x_1547_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__15(void){
_start:
{
lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; 
v___x_1548_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__14, &l_Lake_Toml_stdTable___closed__14_once, _init_l_Lake_Toml_stdTable___closed__14);
v___x_1549_ = l_Lake_Toml_key;
v___x_1550_ = l_Lean_Parser_andthen(v___x_1549_, v___x_1548_);
return v___x_1550_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__16(void){
_start:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1551_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__15, &l_Lake_Toml_stdTable___closed__15_once, _init_l_Lake_Toml_stdTable___closed__15);
v___x_1552_ = l_Lake_Toml_trailingWs;
v___x_1553_ = l_Lean_Parser_andthen(v___x_1552_, v___x_1551_);
return v___x_1553_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__17(void){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1554_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__16, &l_Lake_Toml_stdTable___closed__16_once, _init_l_Lake_Toml_stdTable___closed__16);
v___x_1555_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__10, &l_Lake_Toml_stdTable___closed__10_once, _init_l_Lake_Toml_stdTable___closed__10);
v___x_1556_ = l_Lean_Parser_andthen(v___x_1555_, v___x_1554_);
return v___x_1556_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__18(void){
_start:
{
uint8_t v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1557_ = 0;
v___x_1558_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__17, &l_Lake_Toml_stdTable___closed__17_once, _init_l_Lake_Toml_stdTable___closed__17);
v___x_1559_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__1));
v___x_1560_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__0));
v___x_1561_ = l_Lean_Parser_nodeWithAntiquot(v___x_1560_, v___x_1559_, v___x_1558_, v___x_1557_);
return v___x_1561_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable(void){
_start:
{
lean_object* v___x_1562_; 
v___x_1562_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__18, &l_Lake_Toml_stdTable___closed__18_once, _init_l_Lake_Toml_stdTable___closed__18);
return v___x_1562_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable___closed__2(void){
_start:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1568_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__7, &l_Lake_Toml_stdTable___closed__7_once, _init_l_Lake_Toml_stdTable___closed__7);
v___x_1569_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__4, &l_Lake_Toml_stdTable___closed__4_once, _init_l_Lake_Toml_stdTable___closed__4);
v___x_1570_ = l_Lean_Parser_andthen(v___x_1569_, v___x_1568_);
return v___x_1570_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable___closed__3(void){
_start:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1571_ = lean_obj_once(&l_Lake_Toml_arrayTable___closed__2, &l_Lake_Toml_arrayTable___closed__2_once, _init_l_Lake_Toml_arrayTable___closed__2);
v___x_1572_ = l_Lean_Parser_atomic(v___x_1571_);
return v___x_1572_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable___closed__4(void){
_start:
{
lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___x_1573_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__13, &l_Lake_Toml_stdTable___closed__13_once, _init_l_Lake_Toml_stdTable___closed__13);
v___x_1574_ = l_Lean_Parser_andthen(v___x_1573_, v___x_1573_);
return v___x_1574_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable___closed__5(void){
_start:
{
lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1575_ = lean_obj_once(&l_Lake_Toml_arrayTable___closed__4, &l_Lake_Toml_arrayTable___closed__4_once, _init_l_Lake_Toml_arrayTable___closed__4);
v___x_1576_ = l_Lake_Toml_trailingWs;
v___x_1577_ = l_Lean_Parser_andthen(v___x_1576_, v___x_1575_);
return v___x_1577_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable___closed__6(void){
_start:
{
lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1578_ = lean_obj_once(&l_Lake_Toml_arrayTable___closed__5, &l_Lake_Toml_arrayTable___closed__5_once, _init_l_Lake_Toml_arrayTable___closed__5);
v___x_1579_ = l_Lake_Toml_key;
v___x_1580_ = l_Lean_Parser_andthen(v___x_1579_, v___x_1578_);
return v___x_1580_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable___closed__7(void){
_start:
{
lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1581_ = lean_obj_once(&l_Lake_Toml_arrayTable___closed__6, &l_Lake_Toml_arrayTable___closed__6_once, _init_l_Lake_Toml_arrayTable___closed__6);
v___x_1582_ = l_Lake_Toml_trailingWs;
v___x_1583_ = l_Lean_Parser_andthen(v___x_1582_, v___x_1581_);
return v___x_1583_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable___closed__8(void){
_start:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1584_ = lean_obj_once(&l_Lake_Toml_arrayTable___closed__7, &l_Lake_Toml_arrayTable___closed__7_once, _init_l_Lake_Toml_arrayTable___closed__7);
v___x_1585_ = lean_obj_once(&l_Lake_Toml_arrayTable___closed__3, &l_Lake_Toml_arrayTable___closed__3_once, _init_l_Lake_Toml_arrayTable___closed__3);
v___x_1586_ = l_Lean_Parser_andthen(v___x_1585_, v___x_1584_);
return v___x_1586_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable___closed__9(void){
_start:
{
uint8_t v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1587_ = 0;
v___x_1588_ = lean_obj_once(&l_Lake_Toml_arrayTable___closed__8, &l_Lake_Toml_arrayTable___closed__8_once, _init_l_Lake_Toml_arrayTable___closed__8);
v___x_1589_ = ((lean_object*)(l_Lake_Toml_arrayTable___closed__1));
v___x_1590_ = ((lean_object*)(l_Lake_Toml_arrayTable___closed__0));
v___x_1591_ = l_Lean_Parser_nodeWithAntiquot(v___x_1590_, v___x_1589_, v___x_1588_, v___x_1587_);
return v___x_1591_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable(void){
_start:
{
lean_object* v___x_1592_; 
v___x_1592_ = lean_obj_once(&l_Lake_Toml_arrayTable___closed__9, &l_Lake_Toml_arrayTable___closed__9_once, _init_l_Lake_Toml_arrayTable___closed__9);
return v___x_1592_;
}
}
static lean_object* _init_l_Lake_Toml_table___closed__0(void){
_start:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1593_ = l_Lake_Toml_arrayTable;
v___x_1594_ = l_Lake_Toml_stdTable;
v___x_1595_ = l_Lean_Parser_orelse(v___x_1594_, v___x_1593_);
return v___x_1595_;
}
}
static lean_object* _init_l_Lake_Toml_table(void){
_start:
{
lean_object* v___x_1596_; 
v___x_1596_ = lean_obj_once(&l_Lake_Toml_table___closed__0, &l_Lake_Toml_table___closed__0_once, _init_l_Lake_Toml_table___closed__0);
return v___x_1596_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__4(void){
_start:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; uint32_t v___x_1608_; lean_object* v___x_1609_; 
v___x_1606_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1607_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__3));
v___x_1608_ = 61;
v___x_1609_ = l_Lake_Toml_chAtom(v___x_1608_, v___x_1607_, v___x_1606_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore(lean_object* v_val_1610_){
_start:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; uint8_t v___x_1620_; lean_object* v___x_1621_; 
v___x_1611_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__0));
v___x_1612_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1));
v___x_1613_ = l_Lake_Toml_key;
v___x_1614_ = l_Lake_Toml_trailingWs;
v___x_1615_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__4, &l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__4_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__4);
v___x_1616_ = l_Lean_Parser_andthen(v___x_1614_, v_val_1610_);
v___x_1617_ = l_Lean_Parser_andthen(v___x_1615_, v___x_1616_);
v___x_1618_ = l_Lean_Parser_andthen(v___x_1614_, v___x_1617_);
v___x_1619_ = l_Lean_Parser_andthen(v___x_1613_, v___x_1618_);
v___x_1620_ = 1;
v___x_1621_ = l_Lean_Parser_nodeWithAntiquot(v___x_1611_, v___x_1612_, v___x_1619_, v___x_1620_);
return v___x_1621_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__2(void){
_start:
{
uint8_t v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; 
v___x_1627_ = 1;
v___x_1628_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1));
v___x_1629_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__0));
v___x_1630_ = l_Lean_Parser_mkAntiquot(v___x_1629_, v___x_1628_, v___x_1627_, v___x_1627_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore(lean_object* v_val_1631_){
_start:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1632_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__2, &l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__2_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__2);
v___x_1633_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore(v_val_1631_);
v___x_1634_ = l_Lake_Toml_table;
v___x_1635_ = l_Lean_Parser_orelse(v___x_1633_, v___x_1634_);
v___x_1636_ = l_Lean_Parser_withAntiquot(v___x_1632_, v___x_1635_);
return v___x_1636_;
}
}
static lean_object* _init_l_Lake_Toml_header___closed__2(void){
_start:
{
uint8_t v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1642_ = 0;
v___x_1643_ = ((lean_object*)(l_Lake_Toml_trailingSep___closed__0));
v___x_1644_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1645_ = ((lean_object*)(l_Lake_Toml_header___closed__1));
v___x_1646_ = ((lean_object*)(l_Lake_Toml_header___closed__0));
v___x_1647_ = l_Lake_Toml_litWithAntiquot(v___x_1646_, v___x_1645_, v___x_1644_, v___x_1643_, v___x_1642_);
return v___x_1647_;
}
}
static lean_object* _init_l_Lake_Toml_header(void){
_start:
{
lean_object* v___x_1648_; 
v___x_1648_ = lean_obj_once(&l_Lake_Toml_header___closed__2, &l_Lake_Toml_header___closed__2_once, _init_l_Lake_Toml_header___closed__2);
return v___x_1648_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__5(void){
_start:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___x_1658_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__4));
v___x_1659_ = l_Lean_Parser_symbol(v___x_1658_);
return v___x_1659_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__7(void){
_start:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1661_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__6));
v___x_1662_ = l_Lean_Parser_checkLinebreakBefore(v___x_1661_);
return v___x_1662_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__8(void){
_start:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1663_ = l_Lean_Parser_pushNone;
v___x_1664_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__7, &l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__7_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__7);
v___x_1665_ = l_Lean_Parser_andthen(v___x_1664_, v___x_1663_);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore(lean_object* v_val_1666_){
_start:
{
lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; uint8_t v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v_p_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; 
v___x_1667_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__0));
v___x_1668_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1));
v___x_1669_ = l_Lake_Toml_header;
v___x_1670_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore(v_val_1666_);
v___x_1671_ = l_Lake_Toml_trailingSep;
v___x_1672_ = l_Lean_Parser_andthen(v___x_1670_, v___x_1671_);
v___x_1673_ = 1;
v___x_1674_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__3));
v___x_1675_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__5, &l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__5_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__5);
v_p_1676_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_1674_, v___x_1672_, v___x_1675_);
v___x_1677_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__8, &l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__8_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__8);
v___x_1678_ = l_Lean_Parser_sepByNoAntiquot(v_p_1676_, v___x_1677_, v___x_1673_);
v___x_1679_ = l_Lean_Parser_andthen(v___x_1669_, v___x_1678_);
v___x_1680_ = l_Lean_Parser_nodeWithAntiquot(v___x_1667_, v___x_1668_, v___x_1679_, v___x_1673_);
return v___x_1680_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__4(void){
_start:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; uint32_t v___x_1692_; lean_object* v___x_1693_; 
v___x_1690_ = ((lean_object*)(l_Lake_Toml_trailingSep___closed__0));
v___x_1691_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__3));
v___x_1692_ = 123;
v___x_1693_ = l_Lake_Toml_chAtom(v___x_1692_, v___x_1691_, v___x_1690_);
return v___x_1693_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__8(void){
_start:
{
lean_object* v___x_1699_; lean_object* v___x_1700_; uint32_t v___x_1701_; lean_object* v___x_1702_; 
v___x_1699_ = lean_alloc_closure((void*)(l_Lake_Toml_wsFn___boxed), 2, 0);
v___x_1700_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__7));
v___x_1701_ = 44;
v___x_1702_ = l_Lake_Toml_chAtom(v___x_1701_, v___x_1700_, v___x_1699_);
return v___x_1702_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__11(void){
_start:
{
lean_object* v___x_1707_; lean_object* v___x_1708_; uint32_t v___x_1709_; lean_object* v___x_1710_; 
v___x_1707_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1708_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__10));
v___x_1709_ = 125;
v___x_1710_ = l_Lake_Toml_chAtom(v___x_1709_, v___x_1708_, v___x_1707_);
return v___x_1710_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore(lean_object* v_val_1711_){
_start:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; uint8_t v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1712_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__0));
v___x_1713_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__1));
v___x_1714_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__4, &l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__4_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__4);
v___x_1715_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore(v_val_1711_);
v___x_1716_ = l_Lake_Toml_trailingWs;
v___x_1717_ = l_Lean_Parser_andthen(v___x_1715_, v___x_1716_);
v___x_1718_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__5));
v___x_1719_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__8, &l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__8_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__8);
v___x_1720_ = 0;
v___x_1721_ = l_Lean_Parser_sepBy(v___x_1717_, v___x_1718_, v___x_1719_, v___x_1720_);
v___x_1722_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__11, &l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__11_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__11);
v___x_1723_ = l_Lean_Parser_andthen(v___x_1721_, v___x_1722_);
v___x_1724_ = l_Lean_Parser_andthen(v___x_1714_, v___x_1723_);
v___x_1725_ = l_Lean_Parser_nodeWithAntiquot(v___x_1712_, v___x_1713_, v___x_1724_, v___x_1720_);
return v___x_1725_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__3(void){
_start:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; uint32_t v___x_1736_; lean_object* v___x_1737_; 
v___x_1734_ = ((lean_object*)(l_Lake_Toml_trailingSep___closed__0));
v___x_1735_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__2));
v___x_1736_ = 91;
v___x_1737_ = l_Lake_Toml_chAtom(v___x_1736_, v___x_1735_, v___x_1734_);
return v___x_1737_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__4(void){
_start:
{
lean_object* v___x_1738_; lean_object* v___x_1739_; uint32_t v___x_1740_; lean_object* v___x_1741_; 
v___x_1738_ = ((lean_object*)(l_Lake_Toml_trailingSep___closed__0));
v___x_1739_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__7));
v___x_1740_ = 44;
v___x_1741_ = l_Lake_Toml_chAtom(v___x_1740_, v___x_1739_, v___x_1738_);
return v___x_1741_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore(lean_object* v_val_1742_){
_start:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; uint8_t v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; uint8_t v___x_1755_; lean_object* v___x_1756_; 
v___x_1743_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__0));
v___x_1744_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__1));
v___x_1745_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__3, &l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__3_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__3);
v___x_1746_ = l_Lake_Toml_trailingSep;
v___x_1747_ = l_Lean_Parser_andthen(v_val_1742_, v___x_1746_);
v___x_1748_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__5));
v___x_1749_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__4, &l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__4_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__4);
v___x_1750_ = 1;
v___x_1751_ = l_Lean_Parser_sepBy(v___x_1747_, v___x_1748_, v___x_1749_, v___x_1750_);
v___x_1752_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__13, &l_Lake_Toml_stdTable___closed__13_once, _init_l_Lake_Toml_stdTable___closed__13);
v___x_1753_ = l_Lean_Parser_andthen(v___x_1751_, v___x_1752_);
v___x_1754_ = l_Lean_Parser_andthen(v___x_1745_, v___x_1753_);
v___x_1755_ = 0;
v___x_1756_ = l_Lean_Parser_nodeWithAntiquot(v___x_1743_, v___x_1744_, v___x_1754_, v___x_1755_);
return v___x_1756_;
}
}
static lean_object* _init_l_Lake_Toml_string___closed__3(void){
_start:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
v___x_1765_ = l_Lake_Toml_literalString;
v___x_1766_ = l_Lake_Toml_mlLiteralString;
v___x_1767_ = l_Lean_Parser_orelse(v___x_1766_, v___x_1765_);
return v___x_1767_;
}
}
static lean_object* _init_l_Lake_Toml_string___closed__4(void){
_start:
{
lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1768_ = lean_obj_once(&l_Lake_Toml_string___closed__3, &l_Lake_Toml_string___closed__3_once, _init_l_Lake_Toml_string___closed__3);
v___x_1769_ = l_Lake_Toml_basicString;
v___x_1770_ = l_Lean_Parser_orelse(v___x_1769_, v___x_1768_);
return v___x_1770_;
}
}
static lean_object* _init_l_Lake_Toml_string___closed__5(void){
_start:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1771_ = lean_obj_once(&l_Lake_Toml_string___closed__4, &l_Lake_Toml_string___closed__4_once, _init_l_Lake_Toml_string___closed__4);
v___x_1772_ = l_Lake_Toml_mlBasicString;
v___x_1773_ = l_Lean_Parser_orelse(v___x_1772_, v___x_1771_);
return v___x_1773_;
}
}
static lean_object* _init_l_Lake_Toml_string___closed__6(void){
_start:
{
lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___x_1774_ = lean_obj_once(&l_Lake_Toml_string___closed__5, &l_Lake_Toml_string___closed__5_once, _init_l_Lake_Toml_string___closed__5);
v___x_1775_ = ((lean_object*)(l_Lake_Toml_string___closed__2));
v___x_1776_ = l_Lean_Parser_setExpected(v___x_1775_, v___x_1774_);
return v___x_1776_;
}
}
static lean_object* _init_l_Lake_Toml_string___closed__7(void){
_start:
{
uint8_t v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; 
v___x_1777_ = 0;
v___x_1778_ = lean_obj_once(&l_Lake_Toml_string___closed__6, &l_Lake_Toml_string___closed__6_once, _init_l_Lake_Toml_string___closed__6);
v___x_1779_ = ((lean_object*)(l_Lake_Toml_string___closed__1));
v___x_1780_ = ((lean_object*)(l_Lake_Toml_string___closed__0));
v___x_1781_ = l_Lean_Parser_nodeWithAntiquot(v___x_1780_, v___x_1779_, v___x_1778_, v___x_1777_);
return v___x_1781_;
}
}
static lean_object* _init_l_Lake_Toml_string(void){
_start:
{
lean_object* v___x_1782_; 
v___x_1782_ = lean_obj_once(&l_Lake_Toml_string___closed__7, &l_Lake_Toml_string___closed__7_once, _init_l_Lake_Toml_string___closed__7);
return v___x_1782_;
}
}
static lean_object* _init_l_Lake_Toml_true___closed__5(void){
_start:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1795_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1796_ = ((lean_object*)(l_Lake_Toml_true___closed__4));
v___x_1797_ = ((lean_object*)(l_Lake_Toml_true___closed__1));
v___x_1798_ = l_Lake_Toml_lit(v___x_1797_, v___x_1796_, v___x_1795_);
return v___x_1798_;
}
}
static lean_object* _init_l_Lake_Toml_true(void){
_start:
{
lean_object* v___x_1799_; 
v___x_1799_ = lean_obj_once(&l_Lake_Toml_true___closed__5, &l_Lake_Toml_true___closed__5_once, _init_l_Lake_Toml_true___closed__5);
return v___x_1799_;
}
}
static lean_object* _init_l_Lake_Toml_false___closed__5(void){
_start:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1812_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1813_ = ((lean_object*)(l_Lake_Toml_false___closed__4));
v___x_1814_ = ((lean_object*)(l_Lake_Toml_false___closed__1));
v___x_1815_ = l_Lake_Toml_lit(v___x_1814_, v___x_1813_, v___x_1812_);
return v___x_1815_;
}
}
static lean_object* _init_l_Lake_Toml_false(void){
_start:
{
lean_object* v___x_1816_; 
v___x_1816_ = lean_obj_once(&l_Lake_Toml_false___closed__5, &l_Lake_Toml_false___closed__5_once, _init_l_Lake_Toml_false___closed__5);
return v___x_1816_;
}
}
static lean_object* _init_l_Lake_Toml_boolean___closed__2(void){
_start:
{
lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; 
v___x_1822_ = l_Lake_Toml_false;
v___x_1823_ = l_Lake_Toml_true;
v___x_1824_ = l_Lean_Parser_orelse(v___x_1823_, v___x_1822_);
return v___x_1824_;
}
}
static lean_object* _init_l_Lake_Toml_boolean___closed__3(void){
_start:
{
uint8_t v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1825_ = 0;
v___x_1826_ = lean_obj_once(&l_Lake_Toml_boolean___closed__2, &l_Lake_Toml_boolean___closed__2_once, _init_l_Lake_Toml_boolean___closed__2);
v___x_1827_ = ((lean_object*)(l_Lake_Toml_boolean___closed__1));
v___x_1828_ = ((lean_object*)(l_Lake_Toml_boolean___closed__0));
v___x_1829_ = l_Lean_Parser_nodeWithAntiquot(v___x_1828_, v___x_1827_, v___x_1826_, v___x_1825_);
return v___x_1829_;
}
}
static lean_object* _init_l_Lake_Toml_boolean(void){
_start:
{
lean_object* v___x_1830_; 
v___x_1830_ = lean_obj_once(&l_Lake_Toml_boolean___closed__3, &l_Lake_Toml_boolean___closed__3_once, _init_l_Lake_Toml_boolean___closed__3);
return v___x_1830_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__0(void){
_start:
{
uint8_t v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1831_ = 0;
v___x_1832_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3));
v___x_1833_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__2));
v___x_1834_ = l_Lean_Parser_mkAntiquot(v___x_1833_, v___x_1832_, v___x_1831_, v___x_1831_);
return v___x_1834_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__1(void){
_start:
{
uint8_t v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1835_ = 0;
v___x_1836_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6));
v___x_1837_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__5));
v___x_1838_ = l_Lean_Parser_mkAntiquot(v___x_1837_, v___x_1836_, v___x_1835_, v___x_1835_);
return v___x_1838_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__2(void){
_start:
{
uint8_t v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1839_ = 0;
v___x_1840_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__19));
v___x_1841_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__18));
v___x_1842_ = l_Lean_Parser_mkAntiquot(v___x_1841_, v___x_1840_, v___x_1839_, v___x_1839_);
return v___x_1842_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__3(void){
_start:
{
uint8_t v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; 
v___x_1843_ = 0;
v___x_1844_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__14));
v___x_1845_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__13));
v___x_1846_ = l_Lean_Parser_mkAntiquot(v___x_1845_, v___x_1844_, v___x_1843_, v___x_1843_);
return v___x_1846_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__4(void){
_start:
{
uint8_t v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1847_ = 0;
v___x_1848_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__9));
v___x_1849_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__8));
v___x_1850_ = l_Lean_Parser_mkAntiquot(v___x_1849_, v___x_1848_, v___x_1847_, v___x_1847_);
return v___x_1850_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__5(void){
_start:
{
uint8_t v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; 
v___x_1851_ = 0;
v___x_1852_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1));
v___x_1853_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__0));
v___x_1854_ = l_Lean_Parser_mkAntiquot(v___x_1853_, v___x_1852_, v___x_1851_, v___x_1851_);
return v___x_1854_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__8(void){
_start:
{
uint8_t v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; 
v___x_1860_ = 1;
v___x_1861_ = ((lean_object*)(l_Lake_Toml_numeralAntiquot___closed__7));
v___x_1862_ = ((lean_object*)(l_Lake_Toml_numeralAntiquot___closed__6));
v___x_1863_ = l_Lean_Parser_mkAntiquot(v___x_1862_, v___x_1861_, v___x_1860_, v___x_1860_);
return v___x_1863_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__9(void){
_start:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1864_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__8, &l_Lake_Toml_numeralAntiquot___closed__8_once, _init_l_Lake_Toml_numeralAntiquot___closed__8);
v___x_1865_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__5, &l_Lake_Toml_numeralAntiquot___closed__5_once, _init_l_Lake_Toml_numeralAntiquot___closed__5);
v___x_1866_ = l_Lean_Parser_orelse(v___x_1865_, v___x_1864_);
return v___x_1866_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__10(void){
_start:
{
lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1867_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__9, &l_Lake_Toml_numeralAntiquot___closed__9_once, _init_l_Lake_Toml_numeralAntiquot___closed__9);
v___x_1868_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__4, &l_Lake_Toml_numeralAntiquot___closed__4_once, _init_l_Lake_Toml_numeralAntiquot___closed__4);
v___x_1869_ = l_Lean_Parser_orelse(v___x_1868_, v___x_1867_);
return v___x_1869_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__11(void){
_start:
{
lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; 
v___x_1870_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__10, &l_Lake_Toml_numeralAntiquot___closed__10_once, _init_l_Lake_Toml_numeralAntiquot___closed__10);
v___x_1871_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__3, &l_Lake_Toml_numeralAntiquot___closed__3_once, _init_l_Lake_Toml_numeralAntiquot___closed__3);
v___x_1872_ = l_Lean_Parser_orelse(v___x_1871_, v___x_1870_);
return v___x_1872_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__12(void){
_start:
{
lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1873_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__11, &l_Lake_Toml_numeralAntiquot___closed__11_once, _init_l_Lake_Toml_numeralAntiquot___closed__11);
v___x_1874_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__2, &l_Lake_Toml_numeralAntiquot___closed__2_once, _init_l_Lake_Toml_numeralAntiquot___closed__2);
v___x_1875_ = l_Lean_Parser_orelse(v___x_1874_, v___x_1873_);
return v___x_1875_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__13(void){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; 
v___x_1876_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__12, &l_Lake_Toml_numeralAntiquot___closed__12_once, _init_l_Lake_Toml_numeralAntiquot___closed__12);
v___x_1877_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__1, &l_Lake_Toml_numeralAntiquot___closed__1_once, _init_l_Lake_Toml_numeralAntiquot___closed__1);
v___x_1878_ = l_Lean_Parser_orelse(v___x_1877_, v___x_1876_);
return v___x_1878_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__14(void){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1879_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__13, &l_Lake_Toml_numeralAntiquot___closed__13_once, _init_l_Lake_Toml_numeralAntiquot___closed__13);
v___x_1880_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__0, &l_Lake_Toml_numeralAntiquot___closed__0_once, _init_l_Lake_Toml_numeralAntiquot___closed__0);
v___x_1881_ = l_Lean_Parser_orelse(v___x_1880_, v___x_1879_);
return v___x_1881_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot(void){
_start:
{
lean_object* v___x_1882_; 
v___x_1882_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__14, &l_Lake_Toml_numeralAntiquot___closed__14_once, _init_l_Lake_Toml_numeralAntiquot___closed__14);
return v___x_1882_;
}
}
static lean_object* _init_l_Lake_Toml_numeral___closed__0(void){
_start:
{
lean_object* v___x_1883_; lean_object* v___x_1884_; 
v___x_1883_ = lean_alloc_closure((void*)(l_Lake_Toml_numeralFn), 2, 0);
v___x_1884_ = l_Lake_Toml_dynamicNode(v___x_1883_);
return v___x_1884_;
}
}
static lean_object* _init_l_Lake_Toml_numeral___closed__1(void){
_start:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; 
v___x_1885_ = lean_obj_once(&l_Lake_Toml_numeral___closed__0, &l_Lake_Toml_numeral___closed__0_once, _init_l_Lake_Toml_numeral___closed__0);
v___x_1886_ = l_Lake_Toml_numeralAntiquot;
v___x_1887_ = l_Lean_Parser_withAntiquot(v___x_1886_, v___x_1885_);
return v___x_1887_;
}
}
static lean_object* _init_l_Lake_Toml_numeral(void){
_start:
{
lean_object* v___x_1888_; 
v___x_1888_ = lean_obj_once(&l_Lake_Toml_numeral___closed__1, &l_Lake_Toml_numeral___closed__1_once, _init_l_Lake_Toml_numeral___closed__1);
return v___x_1888_;
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_numeralOfKind___lam__0(lean_object* v_kind_1889_, lean_object* v_x_1890_){
_start:
{
uint8_t v___x_1891_; 
v___x_1891_ = l_Lean_Syntax_isOfKind(v_x_1890_, v_kind_1889_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_numeralOfKind___lam__0___boxed(lean_object* v_kind_1892_, lean_object* v_x_1893_){
_start:
{
uint8_t v_res_1894_; lean_object* v_r_1895_; 
v_res_1894_ = l_Lake_Toml_numeralOfKind___lam__0(v_kind_1892_, v_x_1893_);
lean_dec(v_kind_1892_);
v_r_1895_ = lean_box(v_res_1894_);
return v_r_1895_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_numeralOfKind(lean_object* v_name_1897_, lean_object* v_kind_1898_){
_start:
{
lean_object* v___f_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; 
v___f_1899_ = lean_alloc_closure((void*)(l_Lake_Toml_numeralOfKind___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1899_, 0, v_kind_1898_);
v___x_1900_ = l_Lake_Toml_numeral;
v___x_1901_ = lean_box(0);
v___x_1902_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1902_, 0, v_name_1897_);
lean_ctor_set(v___x_1902_, 1, v___x_1901_);
v___x_1903_ = ((lean_object*)(l_Lake_Toml_numeralOfKind___closed__0));
v___x_1904_ = l_Lean_Parser_checkStackTop(v___f_1899_, v___x_1903_);
v___x_1905_ = l_Lean_Parser_setExpected(v___x_1902_, v___x_1904_);
v___x_1906_ = l_Lean_Parser_andthen(v___x_1900_, v___x_1905_);
return v___x_1906_;
}
}
static lean_object* _init_l_Lake_Toml_float___closed__0(void){
_start:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; 
v___x_1907_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3));
v___x_1908_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__2));
v___x_1909_ = l_Lake_Toml_numeralOfKind(v___x_1908_, v___x_1907_);
return v___x_1909_;
}
}
static lean_object* _init_l_Lake_Toml_float(void){
_start:
{
lean_object* v___x_1910_; 
v___x_1910_ = lean_obj_once(&l_Lake_Toml_float___closed__0, &l_Lake_Toml_float___closed__0_once, _init_l_Lake_Toml_float___closed__0);
return v___x_1910_;
}
}
static lean_object* _init_l_Lake_Toml_decInt___closed__0(void){
_start:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; 
v___x_1911_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6));
v___x_1912_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__0));
v___x_1913_ = l_Lake_Toml_numeralOfKind(v___x_1912_, v___x_1911_);
return v___x_1913_;
}
}
static lean_object* _init_l_Lake_Toml_decInt(void){
_start:
{
lean_object* v___x_1914_; 
v___x_1914_ = lean_obj_once(&l_Lake_Toml_decInt___closed__0, &l_Lake_Toml_decInt___closed__0_once, _init_l_Lake_Toml_decInt___closed__0);
return v___x_1914_;
}
}
static lean_object* _init_l_Lake_Toml_binNum___closed__1(void){
_start:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; 
v___x_1916_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__19));
v___x_1917_ = ((lean_object*)(l_Lake_Toml_binNum___closed__0));
v___x_1918_ = l_Lake_Toml_numeralOfKind(v___x_1917_, v___x_1916_);
return v___x_1918_;
}
}
static lean_object* _init_l_Lake_Toml_binNum(void){
_start:
{
lean_object* v___x_1919_; 
v___x_1919_ = lean_obj_once(&l_Lake_Toml_binNum___closed__1, &l_Lake_Toml_binNum___closed__1_once, _init_l_Lake_Toml_binNum___closed__1);
return v___x_1919_;
}
}
static lean_object* _init_l_Lake_Toml_octNum___closed__1(void){
_start:
{
lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; 
v___x_1921_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__14));
v___x_1922_ = ((lean_object*)(l_Lake_Toml_octNum___closed__0));
v___x_1923_ = l_Lake_Toml_numeralOfKind(v___x_1922_, v___x_1921_);
return v___x_1923_;
}
}
static lean_object* _init_l_Lake_Toml_octNum(void){
_start:
{
lean_object* v___x_1924_; 
v___x_1924_ = lean_obj_once(&l_Lake_Toml_octNum___closed__1, &l_Lake_Toml_octNum___closed__1_once, _init_l_Lake_Toml_octNum___closed__1);
return v___x_1924_;
}
}
static lean_object* _init_l_Lake_Toml_hexNum___closed__1(void){
_start:
{
lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1926_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__9));
v___x_1927_ = ((lean_object*)(l_Lake_Toml_hexNum___closed__0));
v___x_1928_ = l_Lake_Toml_numeralOfKind(v___x_1927_, v___x_1926_);
return v___x_1928_;
}
}
static lean_object* _init_l_Lake_Toml_hexNum(void){
_start:
{
lean_object* v___x_1929_; 
v___x_1929_ = lean_obj_once(&l_Lake_Toml_hexNum___closed__1, &l_Lake_Toml_hexNum___closed__1_once, _init_l_Lake_Toml_hexNum___closed__1);
return v___x_1929_;
}
}
static lean_object* _init_l_Lake_Toml_dateTime___closed__0(void){
_start:
{
lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; 
v___x_1930_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1));
v___x_1931_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__2));
v___x_1932_ = l_Lake_Toml_numeralOfKind(v___x_1931_, v___x_1930_);
return v___x_1932_;
}
}
static lean_object* _init_l_Lake_Toml_dateTime(void){
_start:
{
lean_object* v___x_1933_; 
v___x_1933_ = lean_obj_once(&l_Lake_Toml_dateTime___closed__0, &l_Lake_Toml_dateTime___closed__0_once, _init_l_Lake_Toml_dateTime___closed__0);
return v___x_1933_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_valCore(lean_object* v_val_1934_){
_start:
{
lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1935_ = l_Lake_Toml_string;
v___x_1936_ = l_Lake_Toml_boolean;
v___x_1937_ = l_Lake_Toml_numeral;
lean_inc_ref(v_val_1934_);
v___x_1938_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore(v_val_1934_);
v___x_1939_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore(v_val_1934_);
v___x_1940_ = l_Lean_Parser_orelse(v___x_1938_, v___x_1939_);
v___x_1941_ = l_Lean_Parser_orelse(v___x_1937_, v___x_1940_);
v___x_1942_ = l_Lean_Parser_orelse(v___x_1936_, v___x_1941_);
v___x_1943_ = l_Lean_Parser_orelse(v___x_1935_, v___x_1942_);
return v___x_1943_;
}
}
static lean_object* _init_l_Lake_Toml_val___closed__3(void){
_start:
{
uint8_t v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; 
v___x_1950_ = 1;
v___x_1951_ = ((lean_object*)(l_Lake_Toml_val___closed__2));
v___x_1952_ = ((lean_object*)(l_Lake_Toml_val___closed__1));
v___x_1953_ = ((lean_object*)(l_Lake_Toml_val___closed__0));
v___x_1954_ = l_Lake_Toml_recNodeWithAntiquot(v___x_1953_, v___x_1952_, v___x_1951_, v___x_1950_);
return v___x_1954_;
}
}
static lean_object* _init_l_Lake_Toml_val(void){
_start:
{
lean_object* v___x_1955_; 
v___x_1955_ = lean_obj_once(&l_Lake_Toml_val___closed__3, &l_Lake_Toml_val___closed__3_once, _init_l_Lake_Toml_val___closed__3);
return v___x_1955_;
}
}
static lean_object* _init_l_Lake_Toml_array___closed__0(void){
_start:
{
lean_object* v___x_1956_; lean_object* v___x_1957_; 
v___x_1956_ = l_Lake_Toml_val;
v___x_1957_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore(v___x_1956_);
return v___x_1957_;
}
}
static lean_object* _init_l_Lake_Toml_array(void){
_start:
{
lean_object* v___x_1958_; 
v___x_1958_ = lean_obj_once(&l_Lake_Toml_array___closed__0, &l_Lake_Toml_array___closed__0_once, _init_l_Lake_Toml_array___closed__0);
return v___x_1958_;
}
}
static lean_object* _init_l_Lake_Toml_inlineTable___closed__0(void){
_start:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; 
v___x_1959_ = l_Lake_Toml_val;
v___x_1960_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore(v___x_1959_);
return v___x_1960_;
}
}
static lean_object* _init_l_Lake_Toml_inlineTable(void){
_start:
{
lean_object* v___x_1961_; 
v___x_1961_ = lean_obj_once(&l_Lake_Toml_inlineTable___closed__0, &l_Lake_Toml_inlineTable___closed__0_once, _init_l_Lake_Toml_inlineTable___closed__0);
return v___x_1961_;
}
}
static lean_object* _init_l_Lake_Toml_keyval___closed__0(void){
_start:
{
lean_object* v___x_1962_; lean_object* v___x_1963_; 
v___x_1962_ = l_Lake_Toml_val;
v___x_1963_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore(v___x_1962_);
return v___x_1963_;
}
}
static lean_object* _init_l_Lake_Toml_keyval(void){
_start:
{
lean_object* v___x_1964_; 
v___x_1964_ = lean_obj_once(&l_Lake_Toml_keyval___closed__0, &l_Lake_Toml_keyval___closed__0_once, _init_l_Lake_Toml_keyval___closed__0);
return v___x_1964_;
}
}
static lean_object* _init_l_Lake_Toml_expression___closed__0(void){
_start:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; 
v___x_1965_ = l_Lake_Toml_val;
v___x_1966_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore(v___x_1965_);
return v___x_1966_;
}
}
static lean_object* _init_l_Lake_Toml_expression(void){
_start:
{
lean_object* v___x_1967_; 
v___x_1967_ = lean_obj_once(&l_Lake_Toml_expression___closed__0, &l_Lake_Toml_expression___closed__0_once, _init_l_Lake_Toml_expression___closed__0);
return v___x_1967_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_header_formatter(lean_object* v_a_1968_, lean_object* v_a_1969_, lean_object* v_a_1970_, lean_object* v_a_1971_){
_start:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; uint8_t v___x_1975_; lean_object* v___x_1976_; 
v___x_1973_ = ((lean_object*)(l_Lake_Toml_header___closed__0));
v___x_1974_ = ((lean_object*)(l_Lake_Toml_header___closed__1));
v___x_1975_ = 0;
v___x_1976_ = l_Lake_Toml_litWithAntiquot_formatter___redArg(v___x_1973_, v___x_1974_, v___x_1975_, v_a_1968_, v_a_1969_, v_a_1970_, v_a_1971_);
return v___x_1976_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_header_formatter___boxed(lean_object* v_a_1977_, lean_object* v_a_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_, lean_object* v_a_1981_){
_start:
{
lean_object* v_res_1982_; 
v_res_1982_ = l_Lake_Toml_header_formatter(v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_);
lean_dec(v_a_1980_);
lean_dec_ref(v_a_1979_);
lean_dec(v_a_1978_);
lean_dec_ref(v_a_1977_);
return v_res_1982_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKey_formatter(lean_object* v_a_1983_, lean_object* v_a_1984_, lean_object* v_a_1985_, lean_object* v_a_1986_){
_start:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; uint8_t v___x_1990_; lean_object* v___x_1991_; 
v___x_1988_ = ((lean_object*)(l_Lake_Toml_unquotedKey___closed__0));
v___x_1989_ = ((lean_object*)(l_Lake_Toml_unquotedKey___closed__1));
v___x_1990_ = 0;
v___x_1991_ = l_Lake_Toml_litWithAntiquot_formatter___redArg(v___x_1988_, v___x_1989_, v___x_1990_, v_a_1983_, v_a_1984_, v_a_1985_, v_a_1986_);
return v___x_1991_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKey_formatter___boxed(lean_object* v_a_1992_, lean_object* v_a_1993_, lean_object* v_a_1994_, lean_object* v_a_1995_, lean_object* v_a_1996_){
_start:
{
lean_object* v_res_1997_; 
v_res_1997_ = l_Lake_Toml_unquotedKey_formatter(v_a_1992_, v_a_1993_, v_a_1994_, v_a_1995_);
lean_dec(v_a_1995_);
lean_dec_ref(v_a_1994_);
lean_dec(v_a_1993_);
lean_dec_ref(v_a_1992_);
return v_res_1997_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_basicString_formatter(lean_object* v_a_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_, lean_object* v_a_2001_){
_start:
{
lean_object* v___x_2003_; lean_object* v___x_2004_; uint8_t v___x_2005_; lean_object* v___x_2006_; 
v___x_2003_ = ((lean_object*)(l_Lake_Toml_basicString___closed__0));
v___x_2004_ = ((lean_object*)(l_Lake_Toml_basicString___closed__1));
v___x_2005_ = 0;
v___x_2006_ = l_Lake_Toml_litWithAntiquot_formatter___redArg(v___x_2003_, v___x_2004_, v___x_2005_, v_a_1998_, v_a_1999_, v_a_2000_, v_a_2001_);
return v___x_2006_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_basicString_formatter___boxed(lean_object* v_a_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_){
_start:
{
lean_object* v_res_2012_; 
v_res_2012_ = l_Lake_Toml_basicString_formatter(v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_);
lean_dec(v_a_2010_);
lean_dec_ref(v_a_2009_);
lean_dec(v_a_2008_);
lean_dec_ref(v_a_2007_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_literalString_formatter(lean_object* v_a_2013_, lean_object* v_a_2014_, lean_object* v_a_2015_, lean_object* v_a_2016_){
_start:
{
lean_object* v___x_2018_; lean_object* v___x_2019_; uint8_t v___x_2020_; lean_object* v___x_2021_; 
v___x_2018_ = ((lean_object*)(l_Lake_Toml_literalString___closed__0));
v___x_2019_ = ((lean_object*)(l_Lake_Toml_literalString___closed__1));
v___x_2020_ = 0;
v___x_2021_ = l_Lake_Toml_litWithAntiquot_formatter___redArg(v___x_2018_, v___x_2019_, v___x_2020_, v_a_2013_, v_a_2014_, v_a_2015_, v_a_2016_);
return v___x_2021_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_literalString_formatter___boxed(lean_object* v_a_2022_, lean_object* v_a_2023_, lean_object* v_a_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_){
_start:
{
lean_object* v_res_2027_; 
v_res_2027_ = l_Lake_Toml_literalString_formatter(v_a_2022_, v_a_2023_, v_a_2024_, v_a_2025_);
lean_dec(v_a_2025_);
lean_dec_ref(v_a_2024_);
lean_dec(v_a_2023_);
lean_dec_ref(v_a_2022_);
return v_res_2027_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_quotedKey_formatter(lean_object* v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_){
_start:
{
lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; 
v___x_2033_ = lean_alloc_closure((void*)(l_Lake_Toml_basicString_formatter___boxed), 5, 0);
v___x_2034_ = lean_alloc_closure((void*)(l_Lake_Toml_literalString_formatter___boxed), 5, 0);
v___x_2035_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2033_, v___x_2034_, v_a_2028_, v_a_2029_, v_a_2030_, v_a_2031_);
return v___x_2035_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_quotedKey_formatter___boxed(lean_object* v_a_2036_, lean_object* v_a_2037_, lean_object* v_a_2038_, lean_object* v_a_2039_, lean_object* v_a_2040_){
_start:
{
lean_object* v_res_2041_; 
v_res_2041_ = l_Lake_Toml_quotedKey_formatter(v_a_2036_, v_a_2037_, v_a_2038_, v_a_2039_);
lean_dec(v_a_2039_);
lean_dec_ref(v_a_2038_);
lean_dec(v_a_2037_);
lean_dec_ref(v_a_2036_);
return v_res_2041_;
}
}
static lean_object* _init_l_Lake_Toml_simpleKey_formatter___closed__0(void){
_start:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; 
v___x_2042_ = lean_alloc_closure((void*)(l_Lake_Toml_quotedKey_formatter___boxed), 5, 0);
v___x_2043_ = lean_alloc_closure((void*)(l_Lake_Toml_unquotedKey_formatter___boxed), 5, 0);
v___x_2044_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_2044_, 0, v___x_2043_);
lean_closure_set(v___x_2044_, 1, v___x_2042_);
return v___x_2044_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_simpleKey_formatter(lean_object* v_a_2045_, lean_object* v_a_2046_, lean_object* v_a_2047_, lean_object* v_a_2048_){
_start:
{
lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; uint8_t v___x_2053_; lean_object* v___x_2054_; 
v___x_2050_ = ((lean_object*)(l_Lake_Toml_simpleKey___closed__0));
v___x_2051_ = ((lean_object*)(l_Lake_Toml_simpleKey___closed__1));
v___x_2052_ = lean_obj_once(&l_Lake_Toml_simpleKey_formatter___closed__0, &l_Lake_Toml_simpleKey_formatter___closed__0_once, _init_l_Lake_Toml_simpleKey_formatter___closed__0);
v___x_2053_ = 1;
v___x_2054_ = l_Lean_Parser_nodeWithAntiquot_formatter(v___x_2050_, v___x_2051_, v___x_2052_, v___x_2053_, v_a_2045_, v_a_2046_, v_a_2047_, v_a_2048_);
return v___x_2054_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_simpleKey_formatter___boxed(lean_object* v_a_2055_, lean_object* v_a_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_){
_start:
{
lean_object* v_res_2060_; 
v_res_2060_ = l_Lake_Toml_simpleKey_formatter(v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_);
lean_dec(v_a_2058_);
lean_dec_ref(v_a_2057_);
lean_dec(v_a_2056_);
lean_dec_ref(v_a_2055_);
return v_res_2060_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_formatter___redArg(){
_start:
{
lean_object* v___x_2062_; 
v___x_2062_ = l_Lake_Toml_epsilon_formatter___redArg();
return v___x_2062_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_formatter___redArg___boxed(lean_object* v_a_2063_){
_start:
{
lean_object* v_res_2064_; 
v_res_2064_ = l_Lake_Toml_trailingWs_formatter___redArg();
return v_res_2064_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_formatter(lean_object* v_a_2065_, lean_object* v_a_2066_, lean_object* v_a_2067_, lean_object* v_a_2068_){
_start:
{
lean_object* v___x_2070_; 
v___x_2070_ = l_Lake_Toml_epsilon_formatter___redArg();
return v___x_2070_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_formatter___boxed(lean_object* v_a_2071_, lean_object* v_a_2072_, lean_object* v_a_2073_, lean_object* v_a_2074_, lean_object* v_a_2075_){
_start:
{
lean_object* v_res_2076_; 
v_res_2076_ = l_Lake_Toml_trailingWs_formatter(v_a_2071_, v_a_2072_, v_a_2073_, v_a_2074_);
lean_dec(v_a_2074_);
lean_dec_ref(v_a_2073_);
lean_dec(v_a_2072_);
lean_dec_ref(v_a_2071_);
return v_res_2076_;
}
}
static lean_object* _init_l_Lake_Toml_key_formatter___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_2077_; lean_object* v___x_2078_; 
v___x_2077_ = 46;
v___x_2078_ = lean_box_uint32(v___x_2077_);
return v___x_2078_;
}
}
static lean_object* _init_l_Lake_Toml_key_formatter___closed__0(void){
_start:
{
lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2079_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2080_ = ((lean_object*)(l_Lake_Toml_key___closed__5));
v___x_2081_ = l_Lake_Toml_key_formatter___closed__0___boxed__const__1;
v___x_2082_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_formatter___boxed), 8, 3);
lean_closure_set(v___x_2082_, 0, v___x_2081_);
lean_closure_set(v___x_2082_, 1, v___x_2080_);
lean_closure_set(v___x_2082_, 2, v___x_2079_);
return v___x_2082_;
}
}
static lean_object* _init_l_Lake_Toml_key_formatter___closed__1(void){
_start:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; 
v___x_2083_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_formatter___boxed), 5, 0);
v___x_2084_ = lean_obj_once(&l_Lake_Toml_key_formatter___closed__0, &l_Lake_Toml_key_formatter___closed__0_once, _init_l_Lake_Toml_key_formatter___closed__0);
v___x_2085_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2085_, 0, v___x_2084_);
lean_closure_set(v___x_2085_, 1, v___x_2083_);
return v___x_2085_;
}
}
static lean_object* _init_l_Lake_Toml_key_formatter___closed__2(void){
_start:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; 
v___x_2086_ = lean_obj_once(&l_Lake_Toml_key_formatter___closed__1, &l_Lake_Toml_key_formatter___closed__1_once, _init_l_Lake_Toml_key_formatter___closed__1);
v___x_2087_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_formatter___boxed), 5, 0);
v___x_2088_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2088_, 0, v___x_2087_);
lean_closure_set(v___x_2088_, 1, v___x_2086_);
return v___x_2088_;
}
}
static lean_object* _init_l_Lake_Toml_key_formatter___closed__3(void){
_start:
{
uint8_t v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2089_ = 0;
v___x_2090_ = lean_obj_once(&l_Lake_Toml_key_formatter___closed__2, &l_Lake_Toml_key_formatter___closed__2_once, _init_l_Lake_Toml_key_formatter___closed__2);
v___x_2091_ = ((lean_object*)(l_Lake_Toml_key___closed__3));
v___x_2092_ = lean_alloc_closure((void*)(l_Lake_Toml_simpleKey_formatter___boxed), 5, 0);
v___x_2093_ = lean_box(v___x_2089_);
v___x_2094_ = lean_alloc_closure((void*)(l_Lean_Parser_sepBy1_formatter___boxed), 9, 4);
lean_closure_set(v___x_2094_, 0, v___x_2092_);
lean_closure_set(v___x_2094_, 1, v___x_2091_);
lean_closure_set(v___x_2094_, 2, v___x_2090_);
lean_closure_set(v___x_2094_, 3, v___x_2093_);
return v___x_2094_;
}
}
static lean_object* _init_l_Lake_Toml_key_formatter___closed__4(void){
_start:
{
lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; 
v___x_2095_ = lean_obj_once(&l_Lake_Toml_key_formatter___closed__3, &l_Lake_Toml_key_formatter___closed__3_once, _init_l_Lake_Toml_key_formatter___closed__3);
v___x_2096_ = ((lean_object*)(l_Lake_Toml_key___closed__2));
v___x_2097_ = lean_alloc_closure((void*)(l_Lean_Parser_setExpected_formatter___boxed), 7, 2);
lean_closure_set(v___x_2097_, 0, v___x_2096_);
lean_closure_set(v___x_2097_, 1, v___x_2095_);
return v___x_2097_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_key_formatter(lean_object* v_a_2098_, lean_object* v_a_2099_, lean_object* v_a_2100_, lean_object* v_a_2101_){
_start:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; uint8_t v___x_2106_; lean_object* v___x_2107_; 
v___x_2103_ = ((lean_object*)(l_Lake_Toml_key___closed__0));
v___x_2104_ = ((lean_object*)(l_Lake_Toml_key___closed__1));
v___x_2105_ = lean_obj_once(&l_Lake_Toml_key_formatter___closed__4, &l_Lake_Toml_key_formatter___closed__4_once, _init_l_Lake_Toml_key_formatter___closed__4);
v___x_2106_ = 1;
v___x_2107_ = l_Lean_Parser_nodeWithAntiquot_formatter(v___x_2103_, v___x_2104_, v___x_2105_, v___x_2106_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_);
return v___x_2107_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_key_formatter___boxed(lean_object* v_a_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_){
_start:
{
lean_object* v_res_2113_; 
v_res_2113_ = l_Lake_Toml_key_formatter(v_a_2108_, v_a_2109_, v_a_2110_, v_a_2111_);
lean_dec(v_a_2111_);
lean_dec_ref(v_a_2110_);
lean_dec(v_a_2109_);
lean_dec_ref(v_a_2108_);
return v_res_2113_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_2114_; lean_object* v___x_2115_; 
v___x_2114_ = 61;
v___x_2115_ = lean_box_uint32(v___x_2114_);
return v___x_2115_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0(void){
_start:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; 
v___x_2116_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2117_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__3));
v___x_2118_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0___boxed__const__1;
v___x_2119_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_formatter___boxed), 8, 3);
lean_closure_set(v___x_2119_, 0, v___x_2118_);
lean_closure_set(v___x_2119_, 1, v___x_2117_);
lean_closure_set(v___x_2119_, 2, v___x_2116_);
return v___x_2119_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter(lean_object* v_val_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_, lean_object* v_a_2124_){
_start:
{
lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; uint8_t v___x_2135_; lean_object* v___x_2136_; 
v___x_2126_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__0));
v___x_2127_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1));
v___x_2128_ = lean_alloc_closure((void*)(l_Lake_Toml_key_formatter___boxed), 5, 0);
v___x_2129_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_formatter___boxed), 5, 0);
v___x_2130_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0, &l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0);
lean_inc_ref(v___x_2129_);
v___x_2131_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2131_, 0, v___x_2129_);
lean_closure_set(v___x_2131_, 1, v_val_2120_);
v___x_2132_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2132_, 0, v___x_2130_);
lean_closure_set(v___x_2132_, 1, v___x_2131_);
v___x_2133_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2133_, 0, v___x_2129_);
lean_closure_set(v___x_2133_, 1, v___x_2132_);
v___x_2134_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2134_, 0, v___x_2128_);
lean_closure_set(v___x_2134_, 1, v___x_2133_);
v___x_2135_ = 1;
v___x_2136_ = l_Lean_Parser_nodeWithAntiquot_formatter(v___x_2126_, v___x_2127_, v___x_2134_, v___x_2135_, v_a_2121_, v_a_2122_, v_a_2123_, v_a_2124_);
return v___x_2136_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___boxed(lean_object* v_val_2137_, lean_object* v_a_2138_, lean_object* v_a_2139_, lean_object* v_a_2140_, lean_object* v_a_2141_, lean_object* v_a_2142_){
_start:
{
lean_object* v_res_2143_; 
v_res_2143_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter(v_val_2137_, v_a_2138_, v_a_2139_, v_a_2140_, v_a_2141_);
lean_dec(v_a_2141_);
lean_dec_ref(v_a_2140_);
lean_dec(v_a_2139_);
lean_dec_ref(v_a_2138_);
return v_res_2143_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_2144_; lean_object* v___x_2145_; 
v___x_2144_ = 91;
v___x_2145_ = lean_box_uint32(v___x_2144_);
return v___x_2145_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__0(void){
_start:
{
lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2146_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2147_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__3));
v___x_2148_ = l_Lake_Toml_stdTable_formatter___closed__0___boxed__const__1;
v___x_2149_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_formatter___boxed), 8, 3);
lean_closure_set(v___x_2149_, 0, v___x_2148_);
lean_closure_set(v___x_2149_, 1, v___x_2147_);
lean_closure_set(v___x_2149_, 2, v___x_2146_);
return v___x_2149_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__1(void){
_start:
{
lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; 
v___x_2150_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2151_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__6));
v___x_2152_ = l_Lake_Toml_stdTable_formatter___closed__0___boxed__const__1;
v___x_2153_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_formatter___boxed), 8, 3);
lean_closure_set(v___x_2153_, 0, v___x_2152_);
lean_closure_set(v___x_2153_, 1, v___x_2151_);
lean_closure_set(v___x_2153_, 2, v___x_2150_);
return v___x_2153_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__2(void){
_start:
{
lean_object* v___x_2154_; lean_object* v___x_2155_; 
v___x_2154_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__1, &l_Lake_Toml_stdTable_formatter___closed__1_once, _init_l_Lake_Toml_stdTable_formatter___closed__1);
v___x_2155_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_notFollowedBy_formatter___boxed), 6, 1);
lean_closure_set(v___x_2155_, 0, v___x_2154_);
return v___x_2155_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__3(void){
_start:
{
lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; 
v___x_2156_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__2, &l_Lake_Toml_stdTable_formatter___closed__2_once, _init_l_Lake_Toml_stdTable_formatter___closed__2);
v___x_2157_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__0, &l_Lake_Toml_stdTable_formatter___closed__0_once, _init_l_Lake_Toml_stdTable_formatter___closed__0);
v___x_2158_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2158_, 0, v___x_2157_);
lean_closure_set(v___x_2158_, 1, v___x_2156_);
return v___x_2158_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__4(void){
_start:
{
lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2159_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__3, &l_Lake_Toml_stdTable_formatter___closed__3_once, _init_l_Lake_Toml_stdTable_formatter___closed__3);
v___x_2160_ = lean_alloc_closure((void*)(l_Lean_Parser_atomic_formatter___boxed), 6, 1);
lean_closure_set(v___x_2160_, 0, v___x_2159_);
return v___x_2160_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__5___boxed__const__1(void){
_start:
{
uint32_t v___x_2161_; lean_object* v___x_2162_; 
v___x_2161_ = 93;
v___x_2162_ = lean_box_uint32(v___x_2161_);
return v___x_2162_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__5(void){
_start:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; 
v___x_2163_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2164_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__12));
v___x_2165_ = l_Lake_Toml_stdTable_formatter___closed__5___boxed__const__1;
v___x_2166_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_formatter___boxed), 8, 3);
lean_closure_set(v___x_2166_, 0, v___x_2165_);
lean_closure_set(v___x_2166_, 1, v___x_2164_);
lean_closure_set(v___x_2166_, 2, v___x_2163_);
return v___x_2166_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__6(void){
_start:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
v___x_2167_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__5, &l_Lake_Toml_stdTable_formatter___closed__5_once, _init_l_Lake_Toml_stdTable_formatter___closed__5);
v___x_2168_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_formatter___boxed), 5, 0);
v___x_2169_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2169_, 0, v___x_2168_);
lean_closure_set(v___x_2169_, 1, v___x_2167_);
return v___x_2169_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__7(void){
_start:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
v___x_2170_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__6, &l_Lake_Toml_stdTable_formatter___closed__6_once, _init_l_Lake_Toml_stdTable_formatter___closed__6);
v___x_2171_ = lean_alloc_closure((void*)(l_Lake_Toml_key_formatter___boxed), 5, 0);
v___x_2172_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2172_, 0, v___x_2171_);
lean_closure_set(v___x_2172_, 1, v___x_2170_);
return v___x_2172_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__8(void){
_start:
{
lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2173_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__7, &l_Lake_Toml_stdTable_formatter___closed__7_once, _init_l_Lake_Toml_stdTable_formatter___closed__7);
v___x_2174_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_formatter___boxed), 5, 0);
v___x_2175_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2175_, 0, v___x_2174_);
lean_closure_set(v___x_2175_, 1, v___x_2173_);
return v___x_2175_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__9(void){
_start:
{
lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; 
v___x_2176_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__8, &l_Lake_Toml_stdTable_formatter___closed__8_once, _init_l_Lake_Toml_stdTable_formatter___closed__8);
v___x_2177_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__4, &l_Lake_Toml_stdTable_formatter___closed__4_once, _init_l_Lake_Toml_stdTable_formatter___closed__4);
v___x_2178_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2178_, 0, v___x_2177_);
lean_closure_set(v___x_2178_, 1, v___x_2176_);
return v___x_2178_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_formatter(lean_object* v_a_2179_, lean_object* v_a_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_){
_start:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; uint8_t v___x_2187_; lean_object* v___x_2188_; 
v___x_2184_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__0));
v___x_2185_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__1));
v___x_2186_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__9, &l_Lake_Toml_stdTable_formatter___closed__9_once, _init_l_Lake_Toml_stdTable_formatter___closed__9);
v___x_2187_ = 0;
v___x_2188_ = l_Lean_Parser_nodeWithAntiquot_formatter(v___x_2184_, v___x_2185_, v___x_2186_, v___x_2187_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_);
return v___x_2188_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_formatter___boxed(lean_object* v_a_2189_, lean_object* v_a_2190_, lean_object* v_a_2191_, lean_object* v_a_2192_, lean_object* v_a_2193_){
_start:
{
lean_object* v_res_2194_; 
v_res_2194_ = l_Lake_Toml_stdTable_formatter(v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_);
lean_dec(v_a_2192_);
lean_dec_ref(v_a_2191_);
lean_dec(v_a_2190_);
lean_dec_ref(v_a_2189_);
return v_res_2194_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_formatter___closed__0(void){
_start:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2195_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__1, &l_Lake_Toml_stdTable_formatter___closed__1_once, _init_l_Lake_Toml_stdTable_formatter___closed__1);
v___x_2196_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__0, &l_Lake_Toml_stdTable_formatter___closed__0_once, _init_l_Lake_Toml_stdTable_formatter___closed__0);
v___x_2197_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2197_, 0, v___x_2196_);
lean_closure_set(v___x_2197_, 1, v___x_2195_);
return v___x_2197_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_formatter___closed__1(void){
_start:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; 
v___x_2198_ = lean_obj_once(&l_Lake_Toml_arrayTable_formatter___closed__0, &l_Lake_Toml_arrayTable_formatter___closed__0_once, _init_l_Lake_Toml_arrayTable_formatter___closed__0);
v___x_2199_ = lean_alloc_closure((void*)(l_Lean_Parser_atomic_formatter___boxed), 6, 1);
lean_closure_set(v___x_2199_, 0, v___x_2198_);
return v___x_2199_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_formatter___closed__2(void){
_start:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; 
v___x_2200_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__5, &l_Lake_Toml_stdTable_formatter___closed__5_once, _init_l_Lake_Toml_stdTable_formatter___closed__5);
v___x_2201_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2201_, 0, v___x_2200_);
lean_closure_set(v___x_2201_, 1, v___x_2200_);
return v___x_2201_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_formatter___closed__3(void){
_start:
{
lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2202_ = lean_obj_once(&l_Lake_Toml_arrayTable_formatter___closed__2, &l_Lake_Toml_arrayTable_formatter___closed__2_once, _init_l_Lake_Toml_arrayTable_formatter___closed__2);
v___x_2203_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_formatter___boxed), 5, 0);
v___x_2204_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2204_, 0, v___x_2203_);
lean_closure_set(v___x_2204_, 1, v___x_2202_);
return v___x_2204_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_formatter___closed__4(void){
_start:
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2205_ = lean_obj_once(&l_Lake_Toml_arrayTable_formatter___closed__3, &l_Lake_Toml_arrayTable_formatter___closed__3_once, _init_l_Lake_Toml_arrayTable_formatter___closed__3);
v___x_2206_ = lean_alloc_closure((void*)(l_Lake_Toml_key_formatter___boxed), 5, 0);
v___x_2207_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2207_, 0, v___x_2206_);
lean_closure_set(v___x_2207_, 1, v___x_2205_);
return v___x_2207_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_formatter___closed__5(void){
_start:
{
lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2208_ = lean_obj_once(&l_Lake_Toml_arrayTable_formatter___closed__4, &l_Lake_Toml_arrayTable_formatter___closed__4_once, _init_l_Lake_Toml_arrayTable_formatter___closed__4);
v___x_2209_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_formatter___boxed), 5, 0);
v___x_2210_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2210_, 0, v___x_2209_);
lean_closure_set(v___x_2210_, 1, v___x_2208_);
return v___x_2210_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_formatter___closed__6(void){
_start:
{
lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2211_ = lean_obj_once(&l_Lake_Toml_arrayTable_formatter___closed__5, &l_Lake_Toml_arrayTable_formatter___closed__5_once, _init_l_Lake_Toml_arrayTable_formatter___closed__5);
v___x_2212_ = lean_obj_once(&l_Lake_Toml_arrayTable_formatter___closed__1, &l_Lake_Toml_arrayTable_formatter___closed__1_once, _init_l_Lake_Toml_arrayTable_formatter___closed__1);
v___x_2213_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2213_, 0, v___x_2212_);
lean_closure_set(v___x_2213_, 1, v___x_2211_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_arrayTable_formatter(lean_object* v_a_2214_, lean_object* v_a_2215_, lean_object* v_a_2216_, lean_object* v_a_2217_){
_start:
{
lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; uint8_t v___x_2222_; lean_object* v___x_2223_; 
v___x_2219_ = ((lean_object*)(l_Lake_Toml_arrayTable___closed__0));
v___x_2220_ = ((lean_object*)(l_Lake_Toml_arrayTable___closed__1));
v___x_2221_ = lean_obj_once(&l_Lake_Toml_arrayTable_formatter___closed__6, &l_Lake_Toml_arrayTable_formatter___closed__6_once, _init_l_Lake_Toml_arrayTable_formatter___closed__6);
v___x_2222_ = 0;
v___x_2223_ = l_Lean_Parser_nodeWithAntiquot_formatter(v___x_2219_, v___x_2220_, v___x_2221_, v___x_2222_, v_a_2214_, v_a_2215_, v_a_2216_, v_a_2217_);
return v___x_2223_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_arrayTable_formatter___boxed(lean_object* v_a_2224_, lean_object* v_a_2225_, lean_object* v_a_2226_, lean_object* v_a_2227_, lean_object* v_a_2228_){
_start:
{
lean_object* v_res_2229_; 
v_res_2229_ = l_Lake_Toml_arrayTable_formatter(v_a_2224_, v_a_2225_, v_a_2226_, v_a_2227_);
lean_dec(v_a_2227_);
lean_dec_ref(v_a_2226_);
lean_dec(v_a_2225_);
lean_dec_ref(v_a_2224_);
return v_res_2229_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_table_formatter(lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_){
_start:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___x_2235_ = lean_alloc_closure((void*)(l_Lake_Toml_stdTable_formatter___boxed), 5, 0);
v___x_2236_ = lean_alloc_closure((void*)(l_Lake_Toml_arrayTable_formatter___boxed), 5, 0);
v___x_2237_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2235_, v___x_2236_, v_a_2230_, v_a_2231_, v_a_2232_, v_a_2233_);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_table_formatter___boxed(lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_){
_start:
{
lean_object* v_res_2243_; 
v_res_2243_ = l_Lake_Toml_table_formatter(v_a_2238_, v_a_2239_, v_a_2240_, v_a_2241_);
lean_dec(v_a_2241_);
lean_dec_ref(v_a_2240_);
lean_dec(v_a_2239_);
lean_dec_ref(v_a_2238_);
return v_res_2243_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter(lean_object* v_val_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_, lean_object* v_a_2253_, lean_object* v_a_2254_){
_start:
{
lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; 
v___x_2256_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter___closed__0));
v___x_2257_ = lean_alloc_closure((void*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___boxed), 6, 1);
lean_closure_set(v___x_2257_, 0, v_val_2250_);
v___x_2258_ = lean_alloc_closure((void*)(l_Lake_Toml_table_formatter___boxed), 5, 0);
v___x_2259_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_2259_, 0, v___x_2257_);
lean_closure_set(v___x_2259_, 1, v___x_2258_);
v___x_2260_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2256_, v___x_2259_, v_a_2251_, v_a_2252_, v_a_2253_, v_a_2254_);
return v___x_2260_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter___boxed(lean_object* v_val_2261_, lean_object* v_a_2262_, lean_object* v_a_2263_, lean_object* v_a_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_){
_start:
{
lean_object* v_res_2267_; 
v_res_2267_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter(v_val_2261_, v_a_2262_, v_a_2263_, v_a_2264_, v_a_2265_);
lean_dec(v_a_2265_);
lean_dec_ref(v_a_2264_);
lean_dec(v_a_2263_);
lean_dec_ref(v_a_2262_);
return v_res_2267_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_formatter___redArg(){
_start:
{
lean_object* v___x_2269_; 
v___x_2269_ = l_Lake_Toml_epsilon_formatter___redArg();
return v___x_2269_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_formatter___redArg___boxed(lean_object* v_a_2270_){
_start:
{
lean_object* v_res_2271_; 
v_res_2271_ = l_Lake_Toml_trailingSep_formatter___redArg();
return v_res_2271_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_formatter(lean_object* v_a_2272_, lean_object* v_a_2273_, lean_object* v_a_2274_, lean_object* v_a_2275_){
_start:
{
lean_object* v___x_2277_; 
v___x_2277_ = l_Lake_Toml_epsilon_formatter___redArg();
return v___x_2277_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_formatter___boxed(lean_object* v_a_2278_, lean_object* v_a_2279_, lean_object* v_a_2280_, lean_object* v_a_2281_, lean_object* v_a_2282_){
_start:
{
lean_object* v_res_2283_; 
v_res_2283_ = l_Lake_Toml_trailingSep_formatter(v_a_2278_, v_a_2279_, v_a_2280_, v_a_2281_);
lean_dec(v_a_2281_);
lean_dec_ref(v_a_2280_);
lean_dec(v_a_2279_);
lean_dec_ref(v_a_2278_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_formatter(lean_object* v_val_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_){
_start:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; uint8_t v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2290_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__0));
v___x_2291_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1));
v___x_2292_ = lean_alloc_closure((void*)(l_Lake_Toml_header_formatter___boxed), 5, 0);
v___x_2293_ = lean_alloc_closure((void*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter___boxed), 6, 1);
lean_closure_set(v___x_2293_, 0, v_val_2284_);
v___x_2294_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingSep_formatter___boxed), 5, 0);
v___x_2295_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2295_, 0, v___x_2293_);
lean_closure_set(v___x_2295_, 1, v___x_2294_);
v___x_2296_ = 1;
v___x_2297_ = lean_box(v___x_2296_);
v___x_2298_ = lean_alloc_closure((void*)(l_Lake_Toml_sepByLinebreak_formatter___boxed), 7, 2);
lean_closure_set(v___x_2298_, 0, v___x_2295_);
lean_closure_set(v___x_2298_, 1, v___x_2297_);
v___x_2299_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2299_, 0, v___x_2292_);
lean_closure_set(v___x_2299_, 1, v___x_2298_);
v___x_2300_ = l_Lean_Parser_nodeWithAntiquot_formatter(v___x_2290_, v___x_2291_, v___x_2299_, v___x_2296_, v_a_2285_, v_a_2286_, v_a_2287_, v_a_2288_);
return v___x_2300_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_formatter___boxed(lean_object* v_val_2301_, lean_object* v_a_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_, lean_object* v_a_2306_){
_start:
{
lean_object* v_res_2307_; 
v_res_2307_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_formatter(v_val_2301_, v_a_2302_, v_a_2303_, v_a_2304_, v_a_2305_);
lean_dec(v_a_2305_);
lean_dec_ref(v_a_2304_);
lean_dec(v_a_2303_);
lean_dec_ref(v_a_2302_);
return v_res_2307_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_val_formatter(lean_object* v_a_2308_, lean_object* v_a_2309_, lean_object* v_a_2310_, lean_object* v_a_2311_){
_start:
{
lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; uint8_t v___x_2316_; lean_object* v___x_2317_; 
v___x_2313_ = ((lean_object*)(l_Lake_Toml_val___closed__0));
v___x_2314_ = ((lean_object*)(l_Lake_Toml_val___closed__1));
v___x_2315_ = ((lean_object*)(l_Lake_Toml_val___closed__2));
v___x_2316_ = 1;
v___x_2317_ = l_Lake_Toml_recNodeWithAntiquot_formatter(v___x_2313_, v___x_2314_, v___x_2315_, v___x_2316_, v_a_2308_, v_a_2309_, v_a_2310_, v_a_2311_);
return v___x_2317_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_val_formatter___boxed(lean_object* v_a_2318_, lean_object* v_a_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l_Lake_Toml_val_formatter(v_a_2318_, v_a_2319_, v_a_2320_, v_a_2321_);
lean_dec(v_a_2321_);
lean_dec_ref(v_a_2320_);
lean_dec(v_a_2319_);
lean_dec_ref(v_a_2318_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_toml_formatter(lean_object* v_a_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_){
_start:
{
lean_object* v___x_2329_; lean_object* v___x_2330_; 
v___x_2329_ = lean_alloc_closure((void*)(l_Lake_Toml_val_formatter___boxed), 5, 0);
v___x_2330_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_formatter(v___x_2329_, v_a_2324_, v_a_2325_, v_a_2326_, v_a_2327_);
return v___x_2330_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_toml_formatter___boxed(lean_object* v_a_2331_, lean_object* v_a_2332_, lean_object* v_a_2333_, lean_object* v_a_2334_, lean_object* v_a_2335_){
_start:
{
lean_object* v_res_2336_; 
v_res_2336_ = l_Lake_Toml_toml_formatter(v_a_2331_, v_a_2332_, v_a_2333_, v_a_2334_);
lean_dec(v_a_2334_);
lean_dec_ref(v_a_2333_);
lean_dec(v_a_2332_);
lean_dec_ref(v_a_2331_);
return v_res_2336_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_header_parenthesizer(lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_){
_start:
{
lean_object* v___x_2342_; lean_object* v___x_2343_; uint8_t v___x_2344_; lean_object* v___x_2345_; 
v___x_2342_ = ((lean_object*)(l_Lake_Toml_header___closed__0));
v___x_2343_ = ((lean_object*)(l_Lake_Toml_header___closed__1));
v___x_2344_ = 0;
v___x_2345_ = l_Lake_Toml_litWithAntiquot_parenthesizer___redArg(v___x_2342_, v___x_2343_, v___x_2344_, v_a_2337_, v_a_2338_, v_a_2339_, v_a_2340_);
return v___x_2345_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_header_parenthesizer___boxed(lean_object* v_a_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_){
_start:
{
lean_object* v_res_2351_; 
v_res_2351_ = l_Lake_Toml_header_parenthesizer(v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_);
lean_dec(v_a_2349_);
lean_dec_ref(v_a_2348_);
lean_dec(v_a_2347_);
lean_dec_ref(v_a_2346_);
return v_res_2351_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKey_parenthesizer(lean_object* v_a_2352_, lean_object* v_a_2353_, lean_object* v_a_2354_, lean_object* v_a_2355_){
_start:
{
lean_object* v___x_2357_; lean_object* v___x_2358_; uint8_t v___x_2359_; lean_object* v___x_2360_; 
v___x_2357_ = ((lean_object*)(l_Lake_Toml_unquotedKey___closed__0));
v___x_2358_ = ((lean_object*)(l_Lake_Toml_unquotedKey___closed__1));
v___x_2359_ = 0;
v___x_2360_ = l_Lake_Toml_litWithAntiquot_parenthesizer___redArg(v___x_2357_, v___x_2358_, v___x_2359_, v_a_2352_, v_a_2353_, v_a_2354_, v_a_2355_);
return v___x_2360_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKey_parenthesizer___boxed(lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_){
_start:
{
lean_object* v_res_2366_; 
v_res_2366_ = l_Lake_Toml_unquotedKey_parenthesizer(v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_);
lean_dec(v_a_2364_);
lean_dec_ref(v_a_2363_);
lean_dec(v_a_2362_);
lean_dec_ref(v_a_2361_);
return v_res_2366_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_basicString_parenthesizer(lean_object* v_a_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_, lean_object* v_a_2370_){
_start:
{
lean_object* v___x_2372_; lean_object* v___x_2373_; uint8_t v___x_2374_; lean_object* v___x_2375_; 
v___x_2372_ = ((lean_object*)(l_Lake_Toml_basicString___closed__0));
v___x_2373_ = ((lean_object*)(l_Lake_Toml_basicString___closed__1));
v___x_2374_ = 0;
v___x_2375_ = l_Lake_Toml_litWithAntiquot_parenthesizer___redArg(v___x_2372_, v___x_2373_, v___x_2374_, v_a_2367_, v_a_2368_, v_a_2369_, v_a_2370_);
return v___x_2375_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_basicString_parenthesizer___boxed(lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_){
_start:
{
lean_object* v_res_2381_; 
v_res_2381_ = l_Lake_Toml_basicString_parenthesizer(v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_);
lean_dec(v_a_2379_);
lean_dec_ref(v_a_2378_);
lean_dec(v_a_2377_);
lean_dec_ref(v_a_2376_);
return v_res_2381_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_literalString_parenthesizer(lean_object* v_a_2382_, lean_object* v_a_2383_, lean_object* v_a_2384_, lean_object* v_a_2385_){
_start:
{
lean_object* v___x_2387_; lean_object* v___x_2388_; uint8_t v___x_2389_; lean_object* v___x_2390_; 
v___x_2387_ = ((lean_object*)(l_Lake_Toml_literalString___closed__0));
v___x_2388_ = ((lean_object*)(l_Lake_Toml_literalString___closed__1));
v___x_2389_ = 0;
v___x_2390_ = l_Lake_Toml_litWithAntiquot_parenthesizer___redArg(v___x_2387_, v___x_2388_, v___x_2389_, v_a_2382_, v_a_2383_, v_a_2384_, v_a_2385_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_literalString_parenthesizer___boxed(lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_){
_start:
{
lean_object* v_res_2396_; 
v_res_2396_ = l_Lake_Toml_literalString_parenthesizer(v_a_2391_, v_a_2392_, v_a_2393_, v_a_2394_);
lean_dec(v_a_2394_);
lean_dec_ref(v_a_2393_);
lean_dec(v_a_2392_);
lean_dec_ref(v_a_2391_);
return v_res_2396_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_quotedKey_parenthesizer(lean_object* v_a_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_){
_start:
{
lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; 
v___x_2402_ = lean_alloc_closure((void*)(l_Lake_Toml_basicString_parenthesizer___boxed), 5, 0);
v___x_2403_ = lean_alloc_closure((void*)(l_Lake_Toml_literalString_parenthesizer___boxed), 5, 0);
v___x_2404_ = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(v___x_2402_, v___x_2403_, v_a_2397_, v_a_2398_, v_a_2399_, v_a_2400_);
return v___x_2404_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_quotedKey_parenthesizer___boxed(lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l_Lake_Toml_quotedKey_parenthesizer(v_a_2405_, v_a_2406_, v_a_2407_, v_a_2408_);
lean_dec(v_a_2408_);
lean_dec_ref(v_a_2407_);
lean_dec(v_a_2406_);
lean_dec_ref(v_a_2405_);
return v_res_2410_;
}
}
static lean_object* _init_l_Lake_Toml_simpleKey_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; 
v___x_2411_ = lean_alloc_closure((void*)(l_Lake_Toml_quotedKey_parenthesizer___boxed), 5, 0);
v___x_2412_ = lean_alloc_closure((void*)(l_Lake_Toml_unquotedKey_parenthesizer___boxed), 5, 0);
v___x_2413_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2413_, 0, v___x_2412_);
lean_closure_set(v___x_2413_, 1, v___x_2411_);
return v___x_2413_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_simpleKey_parenthesizer(lean_object* v_a_2414_, lean_object* v_a_2415_, lean_object* v_a_2416_, lean_object* v_a_2417_){
_start:
{
lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; uint8_t v___x_2422_; lean_object* v___x_2423_; 
v___x_2419_ = ((lean_object*)(l_Lake_Toml_simpleKey___closed__0));
v___x_2420_ = ((lean_object*)(l_Lake_Toml_simpleKey___closed__1));
v___x_2421_ = lean_obj_once(&l_Lake_Toml_simpleKey_parenthesizer___closed__0, &l_Lake_Toml_simpleKey_parenthesizer___closed__0_once, _init_l_Lake_Toml_simpleKey_parenthesizer___closed__0);
v___x_2422_ = 1;
v___x_2423_ = l_Lean_Parser_nodeWithAntiquot_parenthesizer(v___x_2419_, v___x_2420_, v___x_2421_, v___x_2422_, v_a_2414_, v_a_2415_, v_a_2416_, v_a_2417_);
return v___x_2423_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_simpleKey_parenthesizer___boxed(lean_object* v_a_2424_, lean_object* v_a_2425_, lean_object* v_a_2426_, lean_object* v_a_2427_, lean_object* v_a_2428_){
_start:
{
lean_object* v_res_2429_; 
v_res_2429_ = l_Lake_Toml_simpleKey_parenthesizer(v_a_2424_, v_a_2425_, v_a_2426_, v_a_2427_);
lean_dec(v_a_2427_);
lean_dec_ref(v_a_2426_);
lean_dec(v_a_2425_);
lean_dec_ref(v_a_2424_);
return v_res_2429_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_parenthesizer___redArg(){
_start:
{
lean_object* v___x_2431_; 
v___x_2431_ = l_Lake_Toml_epsilon_parenthesizer___redArg();
return v___x_2431_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_parenthesizer___redArg___boxed(lean_object* v_a_2432_){
_start:
{
lean_object* v_res_2433_; 
v_res_2433_ = l_Lake_Toml_trailingWs_parenthesizer___redArg();
return v_res_2433_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_parenthesizer(lean_object* v_a_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_){
_start:
{
lean_object* v___x_2439_; 
v___x_2439_ = l_Lake_Toml_epsilon_parenthesizer___redArg();
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_parenthesizer___boxed(lean_object* v_a_2440_, lean_object* v_a_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_, lean_object* v_a_2444_){
_start:
{
lean_object* v_res_2445_; 
v_res_2445_ = l_Lake_Toml_trailingWs_parenthesizer(v_a_2440_, v_a_2441_, v_a_2442_, v_a_2443_);
lean_dec(v_a_2443_);
lean_dec_ref(v_a_2442_);
lean_dec(v_a_2441_);
lean_dec_ref(v_a_2440_);
return v_res_2445_;
}
}
static lean_object* _init_l_Lake_Toml_key_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2446_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2447_ = ((lean_object*)(l_Lake_Toml_key___closed__5));
v___x_2448_ = l_Lake_Toml_key_formatter___closed__0___boxed__const__1;
v___x_2449_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_2449_, 0, v___x_2448_);
lean_closure_set(v___x_2449_, 1, v___x_2447_);
lean_closure_set(v___x_2449_, 2, v___x_2446_);
return v___x_2449_;
}
}
static lean_object* _init_l_Lake_Toml_key_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2450_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_parenthesizer___boxed), 5, 0);
v___x_2451_ = lean_obj_once(&l_Lake_Toml_key_parenthesizer___closed__0, &l_Lake_Toml_key_parenthesizer___closed__0_once, _init_l_Lake_Toml_key_parenthesizer___closed__0);
v___x_2452_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2452_, 0, v___x_2451_);
lean_closure_set(v___x_2452_, 1, v___x_2450_);
return v___x_2452_;
}
}
static lean_object* _init_l_Lake_Toml_key_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2453_ = lean_obj_once(&l_Lake_Toml_key_parenthesizer___closed__1, &l_Lake_Toml_key_parenthesizer___closed__1_once, _init_l_Lake_Toml_key_parenthesizer___closed__1);
v___x_2454_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_parenthesizer___boxed), 5, 0);
v___x_2455_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2455_, 0, v___x_2454_);
lean_closure_set(v___x_2455_, 1, v___x_2453_);
return v___x_2455_;
}
}
static lean_object* _init_l_Lake_Toml_key_parenthesizer___closed__3(void){
_start:
{
uint8_t v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
v___x_2456_ = 0;
v___x_2457_ = lean_obj_once(&l_Lake_Toml_key_parenthesizer___closed__2, &l_Lake_Toml_key_parenthesizer___closed__2_once, _init_l_Lake_Toml_key_parenthesizer___closed__2);
v___x_2458_ = ((lean_object*)(l_Lake_Toml_key___closed__3));
v___x_2459_ = lean_alloc_closure((void*)(l_Lake_Toml_simpleKey_parenthesizer___boxed), 5, 0);
v___x_2460_ = lean_box(v___x_2456_);
v___x_2461_ = lean_alloc_closure((void*)(l_Lean_Parser_sepBy1_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_2461_, 0, v___x_2459_);
lean_closure_set(v___x_2461_, 1, v___x_2458_);
lean_closure_set(v___x_2461_, 2, v___x_2457_);
lean_closure_set(v___x_2461_, 3, v___x_2460_);
return v___x_2461_;
}
}
static lean_object* _init_l_Lake_Toml_key_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; 
v___x_2462_ = lean_obj_once(&l_Lake_Toml_key_parenthesizer___closed__3, &l_Lake_Toml_key_parenthesizer___closed__3_once, _init_l_Lake_Toml_key_parenthesizer___closed__3);
v___x_2463_ = ((lean_object*)(l_Lake_Toml_key___closed__2));
v___x_2464_ = lean_alloc_closure((void*)(l_Lean_Parser_setExpected_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2464_, 0, v___x_2463_);
lean_closure_set(v___x_2464_, 1, v___x_2462_);
return v___x_2464_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_key_parenthesizer(lean_object* v_a_2465_, lean_object* v_a_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_){
_start:
{
lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; uint8_t v___x_2473_; lean_object* v___x_2474_; 
v___x_2470_ = ((lean_object*)(l_Lake_Toml_key___closed__0));
v___x_2471_ = ((lean_object*)(l_Lake_Toml_key___closed__1));
v___x_2472_ = lean_obj_once(&l_Lake_Toml_key_parenthesizer___closed__4, &l_Lake_Toml_key_parenthesizer___closed__4_once, _init_l_Lake_Toml_key_parenthesizer___closed__4);
v___x_2473_ = 1;
v___x_2474_ = l_Lean_Parser_nodeWithAntiquot_parenthesizer(v___x_2470_, v___x_2471_, v___x_2472_, v___x_2473_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_);
return v___x_2474_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_key_parenthesizer___boxed(lean_object* v_a_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_){
_start:
{
lean_object* v_res_2480_; 
v_res_2480_ = l_Lake_Toml_key_parenthesizer(v_a_2475_, v_a_2476_, v_a_2477_, v_a_2478_);
lean_dec(v_a_2478_);
lean_dec_ref(v_a_2477_);
lean_dec(v_a_2476_);
lean_dec_ref(v_a_2475_);
return v_res_2480_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; 
v___x_2481_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2482_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__3));
v___x_2483_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0___boxed__const__1;
v___x_2484_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_2484_, 0, v___x_2483_);
lean_closure_set(v___x_2484_, 1, v___x_2482_);
lean_closure_set(v___x_2484_, 2, v___x_2481_);
return v___x_2484_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer(lean_object* v_val_2485_, lean_object* v_a_2486_, lean_object* v_a_2487_, lean_object* v_a_2488_, lean_object* v_a_2489_){
_start:
{
lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; uint8_t v___x_2500_; lean_object* v___x_2501_; 
v___x_2491_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__0));
v___x_2492_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1));
v___x_2493_ = lean_alloc_closure((void*)(l_Lake_Toml_key_parenthesizer___boxed), 5, 0);
v___x_2494_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_parenthesizer___boxed), 5, 0);
v___x_2495_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer___closed__0, &l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer___closed__0_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer___closed__0);
lean_inc_ref(v___x_2494_);
v___x_2496_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2496_, 0, v___x_2494_);
lean_closure_set(v___x_2496_, 1, v_val_2485_);
v___x_2497_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2497_, 0, v___x_2495_);
lean_closure_set(v___x_2497_, 1, v___x_2496_);
v___x_2498_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2498_, 0, v___x_2494_);
lean_closure_set(v___x_2498_, 1, v___x_2497_);
v___x_2499_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2499_, 0, v___x_2493_);
lean_closure_set(v___x_2499_, 1, v___x_2498_);
v___x_2500_ = 1;
v___x_2501_ = l_Lean_Parser_nodeWithAntiquot_parenthesizer(v___x_2491_, v___x_2492_, v___x_2499_, v___x_2500_, v_a_2486_, v_a_2487_, v_a_2488_, v_a_2489_);
return v___x_2501_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer___boxed(lean_object* v_val_2502_, lean_object* v_a_2503_, lean_object* v_a_2504_, lean_object* v_a_2505_, lean_object* v_a_2506_, lean_object* v_a_2507_){
_start:
{
lean_object* v_res_2508_; 
v_res_2508_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer(v_val_2502_, v_a_2503_, v_a_2504_, v_a_2505_, v_a_2506_);
lean_dec(v_a_2506_);
lean_dec_ref(v_a_2505_);
lean_dec(v_a_2504_);
lean_dec_ref(v_a_2503_);
return v_res_2508_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_parenthesizer___lam__0(lean_object* v___x_2509_, lean_object* v___x_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_){
_start:
{
lean_object* v___x_2516_; 
v___x_2516_ = l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(v___x_2509_, v___x_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_);
return v___x_2516_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_parenthesizer___lam__0___boxed(lean_object* v___x_2517_, lean_object* v___x_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_){
_start:
{
lean_object* v_res_2524_; 
v_res_2524_ = l_Lake_Toml_stdTable_parenthesizer___lam__0(v___x_2517_, v___x_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_);
lean_dec(v___y_2522_);
lean_dec_ref(v___y_2521_);
lean_dec(v___y_2520_);
lean_dec_ref(v___y_2519_);
return v_res_2524_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2525_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2526_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__3));
v___x_2527_ = l_Lake_Toml_stdTable_formatter___closed__0___boxed__const__1;
v___x_2528_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_2528_, 0, v___x_2527_);
lean_closure_set(v___x_2528_, 1, v___x_2526_);
lean_closure_set(v___x_2528_, 2, v___x_2525_);
return v___x_2528_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; 
v___x_2529_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2530_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__6));
v___x_2531_ = l_Lake_Toml_stdTable_formatter___closed__0___boxed__const__1;
v___x_2532_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_2532_, 0, v___x_2531_);
lean_closure_set(v___x_2532_, 1, v___x_2530_);
lean_closure_set(v___x_2532_, 2, v___x_2529_);
return v___x_2532_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2533_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__1, &l_Lake_Toml_stdTable_parenthesizer___closed__1_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__1);
v___x_2534_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_notFollowedBy_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2534_, 0, v___x_2533_);
return v___x_2534_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___f_2537_; 
v___x_2535_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__2, &l_Lake_Toml_stdTable_parenthesizer___closed__2_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__2);
v___x_2536_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__0, &l_Lake_Toml_stdTable_parenthesizer___closed__0_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__0);
v___f_2537_ = lean_alloc_closure((void*)(l_Lake_Toml_stdTable_parenthesizer___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2537_, 0, v___x_2536_);
lean_closure_set(v___f_2537_, 1, v___x_2535_);
return v___f_2537_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; 
v___x_2538_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2539_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__12));
v___x_2540_ = l_Lake_Toml_stdTable_formatter___closed__5___boxed__const__1;
v___x_2541_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_2541_, 0, v___x_2540_);
lean_closure_set(v___x_2541_, 1, v___x_2539_);
lean_closure_set(v___x_2541_, 2, v___x_2538_);
return v___x_2541_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_parenthesizer___closed__5(void){
_start:
{
lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2542_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__4, &l_Lake_Toml_stdTable_parenthesizer___closed__4_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__4);
v___x_2543_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_parenthesizer___boxed), 5, 0);
v___x_2544_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2544_, 0, v___x_2543_);
lean_closure_set(v___x_2544_, 1, v___x_2542_);
return v___x_2544_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_parenthesizer___closed__6(void){
_start:
{
lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; 
v___x_2545_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__5, &l_Lake_Toml_stdTable_parenthesizer___closed__5_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__5);
v___x_2546_ = lean_alloc_closure((void*)(l_Lake_Toml_key_parenthesizer___boxed), 5, 0);
v___x_2547_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2547_, 0, v___x_2546_);
lean_closure_set(v___x_2547_, 1, v___x_2545_);
return v___x_2547_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_parenthesizer___closed__7(void){
_start:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; 
v___x_2548_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__6, &l_Lake_Toml_stdTable_parenthesizer___closed__6_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__6);
v___x_2549_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_parenthesizer___boxed), 5, 0);
v___x_2550_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2550_, 0, v___x_2549_);
lean_closure_set(v___x_2550_, 1, v___x_2548_);
return v___x_2550_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_parenthesizer___closed__8(void){
_start:
{
lean_object* v___x_2551_; lean_object* v___f_2552_; lean_object* v___x_2553_; 
v___x_2551_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__7, &l_Lake_Toml_stdTable_parenthesizer___closed__7_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__7);
v___f_2552_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__3, &l_Lake_Toml_stdTable_parenthesizer___closed__3_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__3);
v___x_2553_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2553_, 0, v___f_2552_);
lean_closure_set(v___x_2553_, 1, v___x_2551_);
return v___x_2553_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_parenthesizer(lean_object* v_a_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_){
_start:
{
lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; uint8_t v___x_2562_; lean_object* v___x_2563_; 
v___x_2559_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__0));
v___x_2560_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__1));
v___x_2561_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__8, &l_Lake_Toml_stdTable_parenthesizer___closed__8_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__8);
v___x_2562_ = 0;
v___x_2563_ = l_Lean_Parser_nodeWithAntiquot_parenthesizer(v___x_2559_, v___x_2560_, v___x_2561_, v___x_2562_, v_a_2554_, v_a_2555_, v_a_2556_, v_a_2557_);
return v___x_2563_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_parenthesizer___boxed(lean_object* v_a_2564_, lean_object* v_a_2565_, lean_object* v_a_2566_, lean_object* v_a_2567_, lean_object* v_a_2568_){
_start:
{
lean_object* v_res_2569_; 
v_res_2569_ = l_Lake_Toml_stdTable_parenthesizer(v_a_2564_, v_a_2565_, v_a_2566_, v_a_2567_);
lean_dec(v_a_2567_);
lean_dec_ref(v_a_2566_);
lean_dec(v_a_2565_);
lean_dec_ref(v_a_2564_);
return v_res_2569_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___f_2572_; 
v___x_2570_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__1, &l_Lake_Toml_stdTable_parenthesizer___closed__1_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__1);
v___x_2571_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__0, &l_Lake_Toml_stdTable_parenthesizer___closed__0_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__0);
v___f_2572_ = lean_alloc_closure((void*)(l_Lake_Toml_stdTable_parenthesizer___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2572_, 0, v___x_2571_);
lean_closure_set(v___f_2572_, 1, v___x_2570_);
return v___f_2572_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_2573_; lean_object* v___x_2574_; 
v___x_2573_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__4, &l_Lake_Toml_stdTable_parenthesizer___closed__4_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__4);
v___x_2574_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2574_, 0, v___x_2573_);
lean_closure_set(v___x_2574_, 1, v___x_2573_);
return v___x_2574_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; 
v___x_2575_ = lean_obj_once(&l_Lake_Toml_arrayTable_parenthesizer___closed__1, &l_Lake_Toml_arrayTable_parenthesizer___closed__1_once, _init_l_Lake_Toml_arrayTable_parenthesizer___closed__1);
v___x_2576_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_parenthesizer___boxed), 5, 0);
v___x_2577_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2577_, 0, v___x_2576_);
lean_closure_set(v___x_2577_, 1, v___x_2575_);
return v___x_2577_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; 
v___x_2578_ = lean_obj_once(&l_Lake_Toml_arrayTable_parenthesizer___closed__2, &l_Lake_Toml_arrayTable_parenthesizer___closed__2_once, _init_l_Lake_Toml_arrayTable_parenthesizer___closed__2);
v___x_2579_ = lean_alloc_closure((void*)(l_Lake_Toml_key_parenthesizer___boxed), 5, 0);
v___x_2580_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2580_, 0, v___x_2579_);
lean_closure_set(v___x_2580_, 1, v___x_2578_);
return v___x_2580_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; 
v___x_2581_ = lean_obj_once(&l_Lake_Toml_arrayTable_parenthesizer___closed__3, &l_Lake_Toml_arrayTable_parenthesizer___closed__3_once, _init_l_Lake_Toml_arrayTable_parenthesizer___closed__3);
v___x_2582_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_parenthesizer___boxed), 5, 0);
v___x_2583_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2583_, 0, v___x_2582_);
lean_closure_set(v___x_2583_, 1, v___x_2581_);
return v___x_2583_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_parenthesizer___closed__5(void){
_start:
{
lean_object* v___x_2584_; lean_object* v___f_2585_; lean_object* v___x_2586_; 
v___x_2584_ = lean_obj_once(&l_Lake_Toml_arrayTable_parenthesizer___closed__4, &l_Lake_Toml_arrayTable_parenthesizer___closed__4_once, _init_l_Lake_Toml_arrayTable_parenthesizer___closed__4);
v___f_2585_ = lean_obj_once(&l_Lake_Toml_arrayTable_parenthesizer___closed__0, &l_Lake_Toml_arrayTable_parenthesizer___closed__0_once, _init_l_Lake_Toml_arrayTable_parenthesizer___closed__0);
v___x_2586_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2586_, 0, v___f_2585_);
lean_closure_set(v___x_2586_, 1, v___x_2584_);
return v___x_2586_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_arrayTable_parenthesizer(lean_object* v_a_2587_, lean_object* v_a_2588_, lean_object* v_a_2589_, lean_object* v_a_2590_){
_start:
{
lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; uint8_t v___x_2595_; lean_object* v___x_2596_; 
v___x_2592_ = ((lean_object*)(l_Lake_Toml_arrayTable___closed__0));
v___x_2593_ = ((lean_object*)(l_Lake_Toml_arrayTable___closed__1));
v___x_2594_ = lean_obj_once(&l_Lake_Toml_arrayTable_parenthesizer___closed__5, &l_Lake_Toml_arrayTable_parenthesizer___closed__5_once, _init_l_Lake_Toml_arrayTable_parenthesizer___closed__5);
v___x_2595_ = 0;
v___x_2596_ = l_Lean_Parser_nodeWithAntiquot_parenthesizer(v___x_2592_, v___x_2593_, v___x_2594_, v___x_2595_, v_a_2587_, v_a_2588_, v_a_2589_, v_a_2590_);
return v___x_2596_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_arrayTable_parenthesizer___boxed(lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_){
_start:
{
lean_object* v_res_2602_; 
v_res_2602_ = l_Lake_Toml_arrayTable_parenthesizer(v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_);
lean_dec(v_a_2600_);
lean_dec_ref(v_a_2599_);
lean_dec(v_a_2598_);
lean_dec_ref(v_a_2597_);
return v_res_2602_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_table_parenthesizer(lean_object* v_a_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_, lean_object* v_a_2606_){
_start:
{
lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; 
v___x_2608_ = lean_alloc_closure((void*)(l_Lake_Toml_stdTable_parenthesizer___boxed), 5, 0);
v___x_2609_ = lean_alloc_closure((void*)(l_Lake_Toml_arrayTable_parenthesizer___boxed), 5, 0);
v___x_2610_ = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(v___x_2608_, v___x_2609_, v_a_2603_, v_a_2604_, v_a_2605_, v_a_2606_);
return v___x_2610_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_table_parenthesizer___boxed(lean_object* v_a_2611_, lean_object* v_a_2612_, lean_object* v_a_2613_, lean_object* v_a_2614_, lean_object* v_a_2615_){
_start:
{
lean_object* v_res_2616_; 
v_res_2616_ = l_Lake_Toml_table_parenthesizer(v_a_2611_, v_a_2612_, v_a_2613_, v_a_2614_);
lean_dec(v_a_2614_);
lean_dec_ref(v_a_2613_);
lean_dec(v_a_2612_);
lean_dec_ref(v_a_2611_);
return v_res_2616_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer(lean_object* v_val_2623_, lean_object* v_a_2624_, lean_object* v_a_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_){
_start:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
v___x_2629_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer___closed__0));
v___x_2630_ = lean_alloc_closure((void*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2630_, 0, v_val_2623_);
v___x_2631_ = lean_alloc_closure((void*)(l_Lake_Toml_table_parenthesizer___boxed), 5, 0);
v___x_2632_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2632_, 0, v___x_2630_);
lean_closure_set(v___x_2632_, 1, v___x_2631_);
v___x_2633_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2629_, v___x_2632_, v_a_2624_, v_a_2625_, v_a_2626_, v_a_2627_);
return v___x_2633_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer___boxed(lean_object* v_val_2634_, lean_object* v_a_2635_, lean_object* v_a_2636_, lean_object* v_a_2637_, lean_object* v_a_2638_, lean_object* v_a_2639_){
_start:
{
lean_object* v_res_2640_; 
v_res_2640_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer(v_val_2634_, v_a_2635_, v_a_2636_, v_a_2637_, v_a_2638_);
lean_dec(v_a_2638_);
lean_dec_ref(v_a_2637_);
lean_dec(v_a_2636_);
lean_dec_ref(v_a_2635_);
return v_res_2640_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_parenthesizer___redArg(){
_start:
{
lean_object* v___x_2642_; 
v___x_2642_ = l_Lake_Toml_epsilon_parenthesizer___redArg();
return v___x_2642_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_parenthesizer___redArg___boxed(lean_object* v_a_2643_){
_start:
{
lean_object* v_res_2644_; 
v_res_2644_ = l_Lake_Toml_trailingSep_parenthesizer___redArg();
return v_res_2644_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_parenthesizer(lean_object* v_a_2645_, lean_object* v_a_2646_, lean_object* v_a_2647_, lean_object* v_a_2648_){
_start:
{
lean_object* v___x_2650_; 
v___x_2650_ = l_Lake_Toml_epsilon_parenthesizer___redArg();
return v___x_2650_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_parenthesizer___boxed(lean_object* v_a_2651_, lean_object* v_a_2652_, lean_object* v_a_2653_, lean_object* v_a_2654_, lean_object* v_a_2655_){
_start:
{
lean_object* v_res_2656_; 
v_res_2656_ = l_Lake_Toml_trailingSep_parenthesizer(v_a_2651_, v_a_2652_, v_a_2653_, v_a_2654_);
lean_dec(v_a_2654_);
lean_dec_ref(v_a_2653_);
lean_dec(v_a_2652_);
lean_dec_ref(v_a_2651_);
return v_res_2656_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_parenthesizer(lean_object* v_val_2657_, lean_object* v_a_2658_, lean_object* v_a_2659_, lean_object* v_a_2660_, lean_object* v_a_2661_){
_start:
{
lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; uint8_t v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; 
v___x_2663_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__0));
v___x_2664_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1));
v___x_2665_ = lean_alloc_closure((void*)(l_Lake_Toml_header_parenthesizer___boxed), 5, 0);
v___x_2666_ = lean_alloc_closure((void*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2666_, 0, v_val_2657_);
v___x_2667_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingSep_parenthesizer___boxed), 5, 0);
v___x_2668_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2668_, 0, v___x_2666_);
lean_closure_set(v___x_2668_, 1, v___x_2667_);
v___x_2669_ = 1;
v___x_2670_ = lean_box(v___x_2669_);
v___x_2671_ = lean_alloc_closure((void*)(l_Lake_Toml_sepByLinebreak_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2671_, 0, v___x_2668_);
lean_closure_set(v___x_2671_, 1, v___x_2670_);
v___x_2672_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2672_, 0, v___x_2665_);
lean_closure_set(v___x_2672_, 1, v___x_2671_);
v___x_2673_ = l_Lean_Parser_nodeWithAntiquot_parenthesizer(v___x_2663_, v___x_2664_, v___x_2672_, v___x_2669_, v_a_2658_, v_a_2659_, v_a_2660_, v_a_2661_);
return v___x_2673_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_parenthesizer___boxed(lean_object* v_val_2674_, lean_object* v_a_2675_, lean_object* v_a_2676_, lean_object* v_a_2677_, lean_object* v_a_2678_, lean_object* v_a_2679_){
_start:
{
lean_object* v_res_2680_; 
v_res_2680_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_parenthesizer(v_val_2674_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
lean_dec(v_a_2678_);
lean_dec_ref(v_a_2677_);
lean_dec(v_a_2676_);
lean_dec_ref(v_a_2675_);
return v_res_2680_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_val_parenthesizer(lean_object* v_a_2681_, lean_object* v_a_2682_, lean_object* v_a_2683_, lean_object* v_a_2684_){
_start:
{
lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; uint8_t v___x_2689_; lean_object* v___x_2690_; 
v___x_2686_ = ((lean_object*)(l_Lake_Toml_val___closed__0));
v___x_2687_ = ((lean_object*)(l_Lake_Toml_val___closed__1));
v___x_2688_ = ((lean_object*)(l_Lake_Toml_val___closed__2));
v___x_2689_ = 1;
v___x_2690_ = l_Lake_Toml_recNodeWithAntiquot_parenthesizer(v___x_2686_, v___x_2687_, v___x_2688_, v___x_2689_, v_a_2681_, v_a_2682_, v_a_2683_, v_a_2684_);
return v___x_2690_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_val_parenthesizer___boxed(lean_object* v_a_2691_, lean_object* v_a_2692_, lean_object* v_a_2693_, lean_object* v_a_2694_, lean_object* v_a_2695_){
_start:
{
lean_object* v_res_2696_; 
v_res_2696_ = l_Lake_Toml_val_parenthesizer(v_a_2691_, v_a_2692_, v_a_2693_, v_a_2694_);
lean_dec(v_a_2694_);
lean_dec_ref(v_a_2693_);
lean_dec(v_a_2692_);
lean_dec_ref(v_a_2691_);
return v_res_2696_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_toml_parenthesizer(lean_object* v_a_2697_, lean_object* v_a_2698_, lean_object* v_a_2699_, lean_object* v_a_2700_){
_start:
{
lean_object* v___x_2702_; lean_object* v___x_2703_; 
v___x_2702_ = lean_alloc_closure((void*)(l_Lake_Toml_val_parenthesizer___boxed), 5, 0);
v___x_2703_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_parenthesizer(v___x_2702_, v_a_2697_, v_a_2698_, v_a_2699_, v_a_2700_);
return v___x_2703_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_toml_parenthesizer___boxed(lean_object* v_a_2704_, lean_object* v_a_2705_, lean_object* v_a_2706_, lean_object* v_a_2707_, lean_object* v_a_2708_){
_start:
{
lean_object* v_res_2709_; 
v_res_2709_ = l_Lake_Toml_toml_parenthesizer(v_a_2704_, v_a_2705_, v_a_2706_, v_a_2707_);
lean_dec(v_a_2707_);
lean_dec_ref(v_a_2706_);
lean_dec(v_a_2705_);
lean_dec_ref(v_a_2704_);
return v_res_2709_;
}
}
static lean_object* _init_l_Lake_Toml_toml___closed__0(void){
_start:
{
lean_object* v___x_2710_; lean_object* v___x_2711_; 
v___x_2710_ = l_Lake_Toml_val;
v___x_2711_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore(v___x_2710_);
return v___x_2711_;
}
}
static lean_object* _init_l_Lake_Toml_toml___closed__1(void){
_start:
{
lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; 
v___x_2712_ = lean_obj_once(&l_Lake_Toml_toml___closed__0, &l_Lake_Toml_toml___closed__0_once, _init_l_Lake_Toml_toml___closed__0);
v___x_2713_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1));
v___x_2714_ = l_Lean_Parser_withCache(v___x_2713_, v___x_2712_);
return v___x_2714_;
}
}
static lean_object* _init_l_Lake_Toml_toml(void){
_start:
{
lean_object* v___x_2715_; 
v___x_2715_ = lean_obj_once(&l_Lake_Toml_toml___closed__1, &l_Lake_Toml_toml___closed__1_once, _init_l_Lake_Toml_toml___closed__1);
return v___x_2715_;
}
}
lean_object* runtime_initialize_Lake_Toml_ParserUtil(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter_Parenthesizer(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Toml_Grammar(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Toml_ParserUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter_Parenthesizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_Toml_trailingWs = _init_l_Lake_Toml_trailingWs();
lean_mark_persistent(l_Lake_Toml_trailingWs);
l_Lake_Toml_trailingSep = _init_l_Lake_Toml_trailingSep();
lean_mark_persistent(l_Lake_Toml_trailingSep);
l_Lake_Toml_unquotedKey = _init_l_Lake_Toml_unquotedKey();
lean_mark_persistent(l_Lake_Toml_unquotedKey);
l_Lake_Toml_basicString = _init_l_Lake_Toml_basicString();
lean_mark_persistent(l_Lake_Toml_basicString);
l_Lake_Toml_literalString = _init_l_Lake_Toml_literalString();
lean_mark_persistent(l_Lake_Toml_literalString);
l_Lake_Toml_mlBasicString = _init_l_Lake_Toml_mlBasicString();
lean_mark_persistent(l_Lake_Toml_mlBasicString);
l_Lake_Toml_mlLiteralString = _init_l_Lake_Toml_mlLiteralString();
lean_mark_persistent(l_Lake_Toml_mlLiteralString);
l_Lake_Toml_quotedKey = _init_l_Lake_Toml_quotedKey();
lean_mark_persistent(l_Lake_Toml_quotedKey);
l_Lake_Toml_simpleKey = _init_l_Lake_Toml_simpleKey();
lean_mark_persistent(l_Lake_Toml_simpleKey);
l_Lake_Toml_key = _init_l_Lake_Toml_key();
lean_mark_persistent(l_Lake_Toml_key);
l_Lake_Toml_stdTable = _init_l_Lake_Toml_stdTable();
lean_mark_persistent(l_Lake_Toml_stdTable);
l_Lake_Toml_arrayTable = _init_l_Lake_Toml_arrayTable();
lean_mark_persistent(l_Lake_Toml_arrayTable);
l_Lake_Toml_table = _init_l_Lake_Toml_table();
lean_mark_persistent(l_Lake_Toml_table);
l_Lake_Toml_header = _init_l_Lake_Toml_header();
lean_mark_persistent(l_Lake_Toml_header);
l_Lake_Toml_string = _init_l_Lake_Toml_string();
lean_mark_persistent(l_Lake_Toml_string);
l_Lake_Toml_true = _init_l_Lake_Toml_true();
lean_mark_persistent(l_Lake_Toml_true);
l_Lake_Toml_false = _init_l_Lake_Toml_false();
lean_mark_persistent(l_Lake_Toml_false);
l_Lake_Toml_boolean = _init_l_Lake_Toml_boolean();
lean_mark_persistent(l_Lake_Toml_boolean);
l_Lake_Toml_numeralAntiquot = _init_l_Lake_Toml_numeralAntiquot();
lean_mark_persistent(l_Lake_Toml_numeralAntiquot);
l_Lake_Toml_numeral = _init_l_Lake_Toml_numeral();
lean_mark_persistent(l_Lake_Toml_numeral);
l_Lake_Toml_float = _init_l_Lake_Toml_float();
lean_mark_persistent(l_Lake_Toml_float);
l_Lake_Toml_decInt = _init_l_Lake_Toml_decInt();
lean_mark_persistent(l_Lake_Toml_decInt);
l_Lake_Toml_binNum = _init_l_Lake_Toml_binNum();
lean_mark_persistent(l_Lake_Toml_binNum);
l_Lake_Toml_octNum = _init_l_Lake_Toml_octNum();
lean_mark_persistent(l_Lake_Toml_octNum);
l_Lake_Toml_hexNum = _init_l_Lake_Toml_hexNum();
lean_mark_persistent(l_Lake_Toml_hexNum);
l_Lake_Toml_dateTime = _init_l_Lake_Toml_dateTime();
lean_mark_persistent(l_Lake_Toml_dateTime);
l_Lake_Toml_val = _init_l_Lake_Toml_val();
lean_mark_persistent(l_Lake_Toml_val);
l_Lake_Toml_array = _init_l_Lake_Toml_array();
lean_mark_persistent(l_Lake_Toml_array);
l_Lake_Toml_inlineTable = _init_l_Lake_Toml_inlineTable();
lean_mark_persistent(l_Lake_Toml_inlineTable);
l_Lake_Toml_keyval = _init_l_Lake_Toml_keyval();
lean_mark_persistent(l_Lake_Toml_keyval);
l_Lake_Toml_expression = _init_l_Lake_Toml_expression();
lean_mark_persistent(l_Lake_Toml_expression);
l_Lake_Toml_key_formatter___closed__0___boxed__const__1 = _init_l_Lake_Toml_key_formatter___closed__0___boxed__const__1();
lean_mark_persistent(l_Lake_Toml_key_formatter___closed__0___boxed__const__1);
l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0___boxed__const__1 = _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0___boxed__const__1);
l_Lake_Toml_stdTable_formatter___closed__0___boxed__const__1 = _init_l_Lake_Toml_stdTable_formatter___closed__0___boxed__const__1();
lean_mark_persistent(l_Lake_Toml_stdTable_formatter___closed__0___boxed__const__1);
l_Lake_Toml_stdTable_formatter___closed__5___boxed__const__1 = _init_l_Lake_Toml_stdTable_formatter___closed__5___boxed__const__1();
lean_mark_persistent(l_Lake_Toml_stdTable_formatter___closed__5___boxed__const__1);
l_Lake_Toml_toml = _init_l_Lake_Toml_toml();
lean_mark_persistent(l_Lake_Toml_toml);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Toml_Grammar(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Toml_ParserUtil(uint8_t builtin);
lean_object* initialize_Lean_Parser(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter_Parenthesizer(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Toml_Grammar(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Toml_ParserUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Parenthesizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Toml_Grammar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Toml_Grammar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Toml_Grammar(builtin);
}
#ifdef __cplusplus
}
#endif
