// Lean compiler output
// Module: Lean.Data.Markdown.Parser.Block
// Imports: public import Init.While import Init.Data.String.Iterate import Init.Data.Range.Polymorphic.Iterators import Init.Data.Range.Polymorphic.Nat import Init.Data.Array.QSort.Basic import Init.Data.String.Compare public import Lean.Data.Markdown.Block public import Lean.Data.Markdown.InlineCursor public import Lean.Data.Markdown.Parser.RefDef import Lean.Data.Markdown.Parser.Cursor import Lean.Data.Markdown.Parser.BlockZipper import Lean.Data.Markdown.Parser.Html
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Markdown_LinkLabel_ofString(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Markdown_instHashableLinkLabel_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_Markdown_instBEqLinkLabel_beq(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Markdown_BlockZipper_empty___redArg();
lean_object* l_Lean_Markdown_BlockZipper_closeContainer(lean_object*, lean_object*);
lean_object* l_Lean_Markdown_subsliceClamped___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Markdown_trimTrailing(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Markdown_BlockZipper_addBlock(lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_String_Slice_Pos_prev_x3f(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Markdown_parseLineEnding_x3f(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Markdown_normalizeLabel(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Markdown_Lines_singleton___redArg(lean_object*);
lean_object* l_Lean_Markdown_BlockZipper_openLeaf(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Markdown_BlockZipper_extendParagraph___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Markdown_FenceChar_ofChar_x3f(uint32_t);
uint32_t l_Lean_Markdown_FenceChar_toChar(uint8_t);
uint8_t l_Lean_Markdown_instBEqFenceChar_beq(uint8_t, uint8_t);
lean_object* l_Lean_Markdown_BlockZipper_closeLeaf(lean_object*, lean_object*);
lean_object* l_Lean_Markdown_BlockZipper_recordBlankLine(lean_object*, lean_object*);
uint8_t l_Lean_Markdown_Children_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Markdown_BlockZipper_recordContentLine___redArg(lean_object*);
lean_object* l_Lean_Markdown_Cursor_verbatimLine(lean_object*, lean_object*);
uint8_t l_Lean_Markdown_HtmlBlockKind_endConditionMet(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Markdown_BlockZipper_openBlockquote(lean_object*, lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Lean_Markdown_BlockZipper_openItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Markdown_Cursor_isBlank(lean_object*, lean_object*);
lean_object* l_Lean_Markdown_InlineSource_ofLines(lean_object*, lean_object*);
lean_object* l_Lean_Markdown_InlineSource_startPos___redArg(lean_object*);
lean_object* l_Lean_Markdown_InlineSource_stopPos___redArg(lean_object*);
lean_object* l_Lean_Markdown_InlineSource_cursor___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Markdown_parseCompleteTagLine_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Markdown_isBlockTagName(lean_object*, lean_object*);
uint8_t l_Lean_Markdown_startsWithAscii(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Markdown_isRawTextTagName(lean_object*, lean_object*);
uint8_t l_Lean_Markdown_HtmlBlockKind_interruptsParagraph(uint8_t);
lean_object* l_Lean_Markdown_BlockZipper_indentedCodeAddLine___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Markdown_BlockZipper_indentedCodeAddBlank___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Markdown_HtmlBlockKind_endsAtBlankLine(uint8_t);
lean_object* l_Lean_Markdown_BlockZipper_extendHtml___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Markdown_BlockZipper_extendFencedCode___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Markdown_BlockZipper_closeFencedCode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Markdown_BlockZipper_pushBlockquoteMarker___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Markdown_extractRefDefs(lean_object*, lean_object*);
lean_object* l_Lean_Markdown_BlockZipper_finalize(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_indentedCodeLine(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_indentedCodeLine___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs___lam__0(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs___closed__0 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_dropIndent_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_dropIndent_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_dropIndent(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_dropIndent___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_dropIndent_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_dropIndent_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_splitLines_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_splitLines_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_splitLines___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_splitLines___closed__0 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_splitLines___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_splitLines(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_splitLines___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__1___boxed__const__1;
static lean_once_cell_t l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorIdx___impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorIdx___impl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_isBreak_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_isBreak_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_isBreak_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_failsAt_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_failsAt_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_failsAt_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_notCandidate_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_notCandidate_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_notCandidate_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak_spec__0___redArg(lean_object*, uint32_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak_spec__0(lean_object*, uint32_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_isThematicBreak(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_isThematicBreak___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__0___redArg(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__0(lean_object*, uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__0___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceClose_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceClose_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f_spec__0___redArg(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f___closed__0 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f_spec__0(lean_object*, uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__0 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__1 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__2 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "/>"};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__3 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__4 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__5___boxed__const__1;
static lean_once_cell_t l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__5;
static const lean_ctor_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__6 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__6_value;
static const lean_string_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "--"};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__7 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__7_value;
static const lean_string_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "[CDATA["};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__8 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__8_value;
static const lean_ctor_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__9 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__9_value;
static const lean_ctor_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__10 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__10_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__11___boxed__const__1;
static lean_once_cell_t l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_listMarkerInterruptsParagraph(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_listMarkerInterruptsParagraph___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_isInterrupt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_isInterrupt___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ContainerM_takeState___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ContainerM_takeState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ContainerM_takeState___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishLine___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishLine(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishLine___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishLineWith___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishLineWith(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishLineWith___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ContainerM_finishLineWith___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ContainerM_finishLineWith(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ContainerM_finishLineWith___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_runContainerM___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_runContainerM(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_runContainerM___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_continueContainers_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_continueContainers_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_continueContainers(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_continueContainers___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_continueContainers_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_continueContainers_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__0 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__0_value;
static const lean_closure_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__1 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__1_value;
static const lean_closure_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__2 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__2_value;
static const lean_closure_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__3 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__3_value;
static const lean_closure_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__4 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__4_value;
static const lean_closure_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__5 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__5_value;
static const lean_closure_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__6 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__6_value;
static const lean_ctor_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__0_value),((lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__1_value)}};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__7 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__7_value;
static const lean_ctor_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__7_value),((lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__2_value),((lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__3_value),((lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__4_value),((lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__5_value)}};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__8 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__8_value;
static const lean_ctor_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__8_value),((lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__6_value)}};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__9 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryLazyContinuation(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryLazyContinuation___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeFencedCode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeFencedCode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeHtmlBlock(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeHtmlBlock___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentedCode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentedCode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes___closed__0 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishThematicBreak(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishThematicBreak___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishBlankLine___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishBlankLine___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishBlankLine(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishBlankLine___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryAtxHeading(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryAtxHeading___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryFencedCodeOpener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryFencedCodeOpener___closed__0 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryFencedCodeOpener___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryFencedCodeOpener(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryFencedCodeOpener___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryHtmlBlockOpener(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryHtmlBlockOpener___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryIndentedCodeOpener(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryIndentedCodeOpener___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_emitParagraph(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_emitParagraph___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openLeafBlock(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openLeafBlock___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_processLine_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_processLine_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_processLine(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlocksRaw_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlocksRaw_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlocksRaw(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlocksRaw___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs___closed__0 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs___closed__0_value;
static const lean_ctor_object l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs___closed__1 = (const lean_object*)&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Markdown_buildRefTable_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Markdown_buildRefTable_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Markdown_buildRefTable_spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Markdown_buildRefTable_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Markdown_buildRefTable_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Markdown_buildRefTable_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Markdown_buildRefTable_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Markdown_buildRefTable_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Markdown_buildRefTable_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Markdown_buildRefTable_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Markdown_buildRefTable_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Markdown_buildRefTable___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Markdown_buildRefTable___closed__0;
static lean_once_cell_t l_Lean_Markdown_buildRefTable___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Markdown_buildRefTable___closed__1;
LEAN_EXPORT lean_object* l_Lean_Markdown_buildRefTable(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Markdown_buildRefTable___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Markdown_buildRefTable_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Markdown_buildRefTable_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Markdown_buildRefTable_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Markdown_buildRefTable_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Markdown_parseBlocks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Markdown_parseBlocks___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols_spec__0___redArg(lean_object* v_s_1_, lean_object* v_a_2_){
_start:
{
lean_object* v_fst_3_; lean_object* v_snd_4_; lean_object* v___x_6_; uint8_t v_isShared_7_; uint8_t v_isSharedCheck_68_; 
v_fst_3_ = lean_ctor_get(v_a_2_, 0);
v_snd_4_ = lean_ctor_get(v_a_2_, 1);
v_isSharedCheck_68_ = !lean_is_exclusive(v_a_2_);
if (v_isSharedCheck_68_ == 0)
{
v___x_6_ = v_a_2_;
v_isShared_7_ = v_isSharedCheck_68_;
goto v_resetjp_5_;
}
else
{
lean_inc(v_snd_4_);
lean_inc(v_fst_3_);
lean_dec(v_a_2_);
v___x_6_ = lean_box(0);
v_isShared_7_ = v_isSharedCheck_68_;
goto v_resetjp_5_;
}
v_resetjp_5_:
{
lean_object* v_pos_8_; lean_object* v_stop_9_; lean_object* v_col_10_; lean_object* v___x_11_; lean_object* v___x_12_; uint8_t v___x_13_; 
v_pos_8_ = lean_ctor_get(v_fst_3_, 0);
v_stop_9_ = lean_ctor_get(v_fst_3_, 1);
v_col_10_ = lean_ctor_get(v_fst_3_, 2);
v___x_11_ = lean_unsigned_to_nat(1u);
v___x_12_ = lean_nat_add(v_pos_8_, v___x_11_);
v___x_13_ = lean_nat_dec_le(v___x_12_, v_stop_9_);
lean_dec(v___x_12_);
if (v___x_13_ == 0)
{
lean_object* v___x_15_; 
if (v_isShared_7_ == 0)
{
v___x_15_ = v___x_6_;
goto v_reusejp_14_;
}
else
{
lean_object* v_reuseFailAlloc_16_; 
v_reuseFailAlloc_16_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_16_, 0, v_fst_3_);
lean_ctor_set(v_reuseFailAlloc_16_, 1, v_snd_4_);
v___x_15_ = v_reuseFailAlloc_16_;
goto v_reusejp_14_;
}
v_reusejp_14_:
{
return v___x_15_;
}
}
else
{
lean_object* v_str_17_; lean_object* v_startInclusive_18_; lean_object* v___x_19_; uint32_t v___x_20_; uint32_t v___x_21_; uint8_t v___x_22_; 
v_str_17_ = lean_ctor_get(v_s_1_, 0);
v_startInclusive_18_ = lean_ctor_get(v_s_1_, 1);
v___x_19_ = lean_nat_add(v_startInclusive_18_, v_pos_8_);
v___x_20_ = lean_string_utf8_get_fast(v_str_17_, v___x_19_);
v___x_21_ = 32;
v___x_22_ = lean_uint32_dec_eq(v___x_20_, v___x_21_);
if (v___x_22_ == 0)
{
uint32_t v___x_23_; uint8_t v___x_24_; 
v___x_23_ = 9;
v___x_24_ = lean_uint32_dec_eq(v___x_20_, v___x_23_);
if (v___x_24_ == 0)
{
lean_object* v___x_26_; 
lean_dec(v___x_19_);
if (v_isShared_7_ == 0)
{
v___x_26_ = v___x_6_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_fst_3_);
lean_ctor_set(v_reuseFailAlloc_27_, 1, v_snd_4_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
else
{
lean_object* v___x_29_; uint8_t v_isShared_30_; uint8_t v_isSharedCheck_45_; 
lean_inc(v_col_10_);
lean_inc(v_stop_9_);
v_isSharedCheck_45_ = !lean_is_exclusive(v_fst_3_);
if (v_isSharedCheck_45_ == 0)
{
lean_object* v_unused_46_; lean_object* v_unused_47_; lean_object* v_unused_48_; 
v_unused_46_ = lean_ctor_get(v_fst_3_, 2);
lean_dec(v_unused_46_);
v_unused_47_ = lean_ctor_get(v_fst_3_, 1);
lean_dec(v_unused_47_);
v_unused_48_ = lean_ctor_get(v_fst_3_, 0);
lean_dec(v_unused_48_);
v___x_29_ = v_fst_3_;
v_isShared_30_ = v_isSharedCheck_45_;
goto v_resetjp_28_;
}
else
{
lean_dec(v_fst_3_);
v___x_29_ = lean_box(0);
v_isShared_30_ = v_isSharedCheck_45_;
goto v_resetjp_28_;
}
v_resetjp_28_:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_39_; 
v___x_31_ = lean_unsigned_to_nat(4u);
v___x_32_ = lean_nat_mod(v_col_10_, v___x_31_);
v___x_33_ = lean_nat_sub(v___x_31_, v___x_32_);
lean_dec(v___x_32_);
v___x_34_ = lean_nat_add(v_snd_4_, v___x_33_);
lean_dec(v_snd_4_);
v___x_35_ = lean_string_utf8_next_fast(v_str_17_, v___x_19_);
lean_dec(v___x_19_);
v___x_36_ = lean_nat_sub(v___x_35_, v_startInclusive_18_);
v___x_37_ = lean_nat_add(v_col_10_, v___x_33_);
lean_dec(v___x_33_);
lean_dec(v_col_10_);
if (v_isShared_30_ == 0)
{
lean_ctor_set(v___x_29_, 2, v___x_37_);
lean_ctor_set(v___x_29_, 0, v___x_36_);
v___x_39_ = v___x_29_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v___x_36_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v_stop_9_);
lean_ctor_set(v_reuseFailAlloc_44_, 2, v___x_37_);
v___x_39_ = v_reuseFailAlloc_44_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
lean_object* v___x_41_; 
lean_ctor_set_uint8(v___x_39_, sizeof(void*)*3, v___x_22_);
if (v_isShared_7_ == 0)
{
lean_ctor_set(v___x_6_, 1, v___x_34_);
lean_ctor_set(v___x_6_, 0, v___x_39_);
v___x_41_ = v___x_6_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v___x_39_);
lean_ctor_set(v_reuseFailAlloc_43_, 1, v___x_34_);
v___x_41_ = v_reuseFailAlloc_43_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
v_a_2_ = v___x_41_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_64_; 
lean_inc(v_col_10_);
lean_inc(v_stop_9_);
v_isSharedCheck_64_ = !lean_is_exclusive(v_fst_3_);
if (v_isSharedCheck_64_ == 0)
{
lean_object* v_unused_65_; lean_object* v_unused_66_; lean_object* v_unused_67_; 
v_unused_65_ = lean_ctor_get(v_fst_3_, 2);
lean_dec(v_unused_65_);
v_unused_66_ = lean_ctor_get(v_fst_3_, 1);
lean_dec(v_unused_66_);
v_unused_67_ = lean_ctor_get(v_fst_3_, 0);
lean_dec(v_unused_67_);
v___x_50_ = v_fst_3_;
v_isShared_51_ = v_isSharedCheck_64_;
goto v_resetjp_49_;
}
else
{
lean_dec(v_fst_3_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_64_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; uint8_t v___x_56_; lean_object* v___x_58_; 
v___x_52_ = lean_nat_add(v_snd_4_, v___x_11_);
lean_dec(v_snd_4_);
v___x_53_ = lean_string_utf8_next_fast(v_str_17_, v___x_19_);
lean_dec(v___x_19_);
v___x_54_ = lean_nat_sub(v___x_53_, v_startInclusive_18_);
v___x_55_ = lean_nat_add(v_col_10_, v___x_11_);
lean_dec(v_col_10_);
v___x_56_ = 0;
if (v_isShared_51_ == 0)
{
lean_ctor_set(v___x_50_, 2, v___x_55_);
lean_ctor_set(v___x_50_, 0, v___x_54_);
v___x_58_ = v___x_50_;
goto v_reusejp_57_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v___x_54_);
lean_ctor_set(v_reuseFailAlloc_63_, 1, v_stop_9_);
lean_ctor_set(v_reuseFailAlloc_63_, 2, v___x_55_);
v___x_58_ = v_reuseFailAlloc_63_;
goto v_reusejp_57_;
}
v_reusejp_57_:
{
lean_object* v___x_60_; 
lean_ctor_set_uint8(v___x_58_, sizeof(void*)*3, v___x_56_);
if (v_isShared_7_ == 0)
{
lean_ctor_set(v___x_6_, 1, v___x_52_);
lean_ctor_set(v___x_6_, 0, v___x_58_);
v___x_60_ = v___x_6_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v___x_58_);
lean_ctor_set(v_reuseFailAlloc_62_, 1, v___x_52_);
v___x_60_ = v_reuseFailAlloc_62_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
v_a_2_ = v___x_60_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols_spec__0___redArg___boxed(lean_object* v_s_69_, lean_object* v_a_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols_spec__0___redArg(v_s_69_, v_a_70_);
lean_dec_ref(v_s_69_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols(lean_object* v_s_72_, lean_object* v_c_73_){
_start:
{
lean_object* v_cols_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v_fst_77_; lean_object* v_snd_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_85_; 
v_cols_74_ = lean_unsigned_to_nat(0u);
v___x_75_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_75_, 0, v_c_73_);
lean_ctor_set(v___x_75_, 1, v_cols_74_);
v___x_76_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols_spec__0___redArg(v_s_72_, v___x_75_);
v_fst_77_ = lean_ctor_get(v___x_76_, 0);
v_snd_78_ = lean_ctor_get(v___x_76_, 1);
v_isSharedCheck_85_ = !lean_is_exclusive(v___x_76_);
if (v_isSharedCheck_85_ == 0)
{
v___x_80_ = v___x_76_;
v_isShared_81_ = v_isSharedCheck_85_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_snd_78_);
lean_inc(v_fst_77_);
lean_dec(v___x_76_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_85_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_83_; 
if (v_isShared_81_ == 0)
{
v___x_83_ = v___x_80_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v_fst_77_);
lean_ctor_set(v_reuseFailAlloc_84_, 1, v_snd_78_);
v___x_83_ = v_reuseFailAlloc_84_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
return v___x_83_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols___boxed(lean_object* v_s_86_, lean_object* v_c_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols(v_s_86_, v_c_87_);
lean_dec_ref(v_s_86_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols_spec__0(lean_object* v_s_89_, lean_object* v_inst_90_, lean_object* v_a_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols_spec__0___redArg(v_s_89_, v_a_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols_spec__0___boxed(lean_object* v_s_93_, lean_object* v_inst_94_, lean_object* v_a_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols_spec__0(v_s_93_, v_inst_94_, v_a_95_);
lean_dec_ref(v_s_93_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent(lean_object* v_s_97_, lean_object* v_c_98_){
_start:
{
lean_object* v___x_99_; lean_object* v_fst_100_; lean_object* v_snd_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_108_; 
v___x_99_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols(v_s_97_, v_c_98_);
v_fst_100_ = lean_ctor_get(v___x_99_, 0);
v_snd_101_ = lean_ctor_get(v___x_99_, 1);
v_isSharedCheck_108_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_108_ == 0)
{
v___x_103_ = v___x_99_;
v_isShared_104_ = v_isSharedCheck_108_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_snd_101_);
lean_inc(v_fst_100_);
lean_dec(v___x_99_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_108_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_106_; 
if (v_isShared_104_ == 0)
{
v___x_106_ = v___x_103_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v_fst_100_);
lean_ctor_set(v_reuseFailAlloc_107_, 1, v_snd_101_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent___boxed(lean_object* v_s_109_, lean_object* v_c_110_){
_start:
{
lean_object* v_res_111_; 
v_res_111_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent(v_s_109_, v_c_110_);
lean_dec_ref(v_s_109_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped_spec__0___redArg___lam__0(lean_object* v_fst_112_, lean_object* v_snd_113_, lean_object* v_00___114_){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_115_, 0, v_fst_112_);
lean_ctor_set(v___x_115_, 1, v_snd_113_);
v___x_116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped_spec__0___redArg(lean_object* v_maxCols_117_, lean_object* v_s_118_, lean_object* v_a_119_){
_start:
{
lean_object* v___y_121_; lean_object* v_fst_125_; lean_object* v_snd_126_; lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_202_; 
v_fst_125_ = lean_ctor_get(v_a_119_, 0);
v_snd_126_ = lean_ctor_get(v_a_119_, 1);
v_isSharedCheck_202_ = !lean_is_exclusive(v_a_119_);
if (v_isSharedCheck_202_ == 0)
{
v___x_128_ = v_a_119_;
v_isShared_129_ = v_isSharedCheck_202_;
goto v_resetjp_127_;
}
else
{
lean_inc(v_snd_126_);
lean_inc(v_fst_125_);
lean_dec(v_a_119_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_202_;
goto v_resetjp_127_;
}
v___jp_120_:
{
if (lean_obj_tag(v___y_121_) == 0)
{
lean_object* v_a_122_; 
lean_dec(v_maxCols_117_);
v_a_122_ = lean_ctor_get(v___y_121_, 0);
lean_inc(v_a_122_);
lean_dec_ref_known(v___y_121_, 1);
return v_a_122_;
}
else
{
lean_object* v_a_123_; 
v_a_123_ = lean_ctor_get(v___y_121_, 0);
lean_inc(v_a_123_);
lean_dec_ref_known(v___y_121_, 1);
v_a_119_ = v_a_123_;
goto _start;
}
}
v_resetjp_127_:
{
lean_object* v_pos_130_; lean_object* v_stop_131_; lean_object* v_col_132_; lean_object* v___x_133_; lean_object* v___x_134_; uint8_t v___x_135_; 
v_pos_130_ = lean_ctor_get(v_fst_125_, 0);
v_stop_131_ = lean_ctor_get(v_fst_125_, 1);
v_col_132_ = lean_ctor_get(v_fst_125_, 2);
v___x_133_ = lean_unsigned_to_nat(1u);
v___x_134_ = lean_nat_add(v_pos_130_, v___x_133_);
v___x_135_ = lean_nat_dec_le(v___x_134_, v_stop_131_);
lean_dec(v___x_134_);
if (v___x_135_ == 0)
{
lean_object* v___x_137_; 
lean_dec(v_maxCols_117_);
if (v_isShared_129_ == 0)
{
v___x_137_ = v___x_128_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_fst_125_);
lean_ctor_set(v_reuseFailAlloc_138_, 1, v_snd_126_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
else
{
uint8_t v___x_139_; 
v___x_139_ = lean_nat_dec_le(v_maxCols_117_, v_snd_126_);
if (v___x_139_ == 0)
{
lean_object* v_str_140_; lean_object* v_startInclusive_141_; lean_object* v___x_142_; uint32_t v___x_143_; uint32_t v___x_144_; uint8_t v___x_145_; 
v_str_140_ = lean_ctor_get(v_s_118_, 0);
v_startInclusive_141_ = lean_ctor_get(v_s_118_, 1);
v___x_142_ = lean_nat_add(v_startInclusive_141_, v_pos_130_);
v___x_143_ = lean_string_utf8_get_fast(v_str_140_, v___x_142_);
v___x_144_ = 32;
v___x_145_ = lean_uint32_dec_eq(v___x_143_, v___x_144_);
if (v___x_145_ == 0)
{
uint32_t v___x_146_; uint8_t v___x_147_; 
v___x_146_ = 9;
v___x_147_ = lean_uint32_dec_eq(v___x_143_, v___x_146_);
if (v___x_147_ == 0)
{
lean_object* v___x_148_; lean_object* v___x_149_; 
lean_dec(v___x_142_);
lean_del_object(v___x_128_);
v___x_148_ = lean_box(0);
v___x_149_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped_spec__0___redArg___lam__0(v_fst_125_, v_snd_126_, v___x_148_);
v___y_121_ = v___x_149_;
goto v___jp_120_;
}
else
{
lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_178_; 
lean_inc(v_col_132_);
lean_inc(v_stop_131_);
lean_inc(v_pos_130_);
v_isSharedCheck_178_ = !lean_is_exclusive(v_fst_125_);
if (v_isSharedCheck_178_ == 0)
{
lean_object* v_unused_179_; lean_object* v_unused_180_; lean_object* v_unused_181_; 
v_unused_179_ = lean_ctor_get(v_fst_125_, 2);
lean_dec(v_unused_179_);
v_unused_180_ = lean_ctor_get(v_fst_125_, 1);
lean_dec(v_unused_180_);
v_unused_181_ = lean_ctor_get(v_fst_125_, 0);
lean_dec(v_unused_181_);
v___x_151_ = v_fst_125_;
v_isShared_152_ = v_isSharedCheck_178_;
goto v_resetjp_150_;
}
else
{
lean_dec(v_fst_125_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_178_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_153_ = lean_unsigned_to_nat(4u);
v___x_154_ = lean_nat_mod(v_col_132_, v___x_153_);
v___x_155_ = lean_nat_sub(v___x_153_, v___x_154_);
lean_dec(v___x_154_);
v___x_156_ = lean_nat_add(v_snd_126_, v___x_155_);
v___x_157_ = lean_nat_add(v_maxCols_117_, v___x_133_);
v___x_158_ = lean_nat_dec_le(v___x_157_, v___x_156_);
lean_dec(v___x_157_);
if (v___x_158_ == 0)
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_163_; 
lean_dec(v_pos_130_);
lean_dec(v_snd_126_);
v___x_159_ = lean_string_utf8_next_fast(v_str_140_, v___x_142_);
lean_dec(v___x_142_);
v___x_160_ = lean_nat_sub(v___x_159_, v_startInclusive_141_);
v___x_161_ = lean_nat_add(v_col_132_, v___x_155_);
lean_dec(v___x_155_);
lean_dec(v_col_132_);
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 2, v___x_161_);
lean_ctor_set(v___x_151_, 0, v___x_160_);
v___x_163_ = v___x_151_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v___x_160_);
lean_ctor_set(v_reuseFailAlloc_168_, 1, v_stop_131_);
lean_ctor_set(v_reuseFailAlloc_168_, 2, v___x_161_);
v___x_163_ = v_reuseFailAlloc_168_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
lean_object* v___x_165_; 
lean_ctor_set_uint8(v___x_163_, sizeof(void*)*3, v___x_158_);
if (v_isShared_129_ == 0)
{
lean_ctor_set(v___x_128_, 1, v___x_156_);
lean_ctor_set(v___x_128_, 0, v___x_163_);
v___x_165_ = v___x_128_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v___x_163_);
lean_ctor_set(v_reuseFailAlloc_167_, 1, v___x_156_);
v___x_165_ = v_reuseFailAlloc_167_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
v_a_119_ = v___x_165_;
goto _start;
}
}
}
else
{
lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_172_; 
lean_dec(v___x_156_);
lean_dec(v___x_155_);
lean_dec(v___x_142_);
v___x_169_ = lean_nat_sub(v_maxCols_117_, v_snd_126_);
lean_dec(v_snd_126_);
v___x_170_ = lean_nat_add(v_col_132_, v___x_169_);
lean_dec(v___x_169_);
lean_dec(v_col_132_);
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 2, v___x_170_);
v___x_172_ = v___x_151_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v_pos_130_);
lean_ctor_set(v_reuseFailAlloc_177_, 1, v_stop_131_);
lean_ctor_set(v_reuseFailAlloc_177_, 2, v___x_170_);
v___x_172_ = v_reuseFailAlloc_177_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
lean_object* v___x_174_; 
lean_ctor_set_uint8(v___x_172_, sizeof(void*)*3, v___x_135_);
lean_inc(v_maxCols_117_);
if (v_isShared_129_ == 0)
{
lean_ctor_set(v___x_128_, 1, v_maxCols_117_);
lean_ctor_set(v___x_128_, 0, v___x_172_);
v___x_174_ = v___x_128_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v___x_172_);
lean_ctor_set(v_reuseFailAlloc_176_, 1, v_maxCols_117_);
v___x_174_ = v_reuseFailAlloc_176_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
v_a_119_ = v___x_174_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_196_; 
lean_inc(v_col_132_);
lean_inc(v_stop_131_);
v_isSharedCheck_196_ = !lean_is_exclusive(v_fst_125_);
if (v_isSharedCheck_196_ == 0)
{
lean_object* v_unused_197_; lean_object* v_unused_198_; lean_object* v_unused_199_; 
v_unused_197_ = lean_ctor_get(v_fst_125_, 2);
lean_dec(v_unused_197_);
v_unused_198_ = lean_ctor_get(v_fst_125_, 1);
lean_dec(v_unused_198_);
v_unused_199_ = lean_ctor_get(v_fst_125_, 0);
lean_dec(v_unused_199_);
v___x_183_ = v_fst_125_;
v_isShared_184_ = v_isSharedCheck_196_;
goto v_resetjp_182_;
}
else
{
lean_dec(v_fst_125_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_196_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_190_; 
v___x_185_ = lean_nat_add(v_snd_126_, v___x_133_);
lean_dec(v_snd_126_);
v___x_186_ = lean_string_utf8_next_fast(v_str_140_, v___x_142_);
lean_dec(v___x_142_);
v___x_187_ = lean_nat_sub(v___x_186_, v_startInclusive_141_);
v___x_188_ = lean_nat_add(v_col_132_, v___x_133_);
lean_dec(v_col_132_);
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 2, v___x_188_);
lean_ctor_set(v___x_183_, 0, v___x_187_);
v___x_190_ = v___x_183_;
goto v_reusejp_189_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___x_187_);
lean_ctor_set(v_reuseFailAlloc_195_, 1, v_stop_131_);
lean_ctor_set(v_reuseFailAlloc_195_, 2, v___x_188_);
v___x_190_ = v_reuseFailAlloc_195_;
goto v_reusejp_189_;
}
v_reusejp_189_:
{
lean_object* v___x_192_; 
lean_ctor_set_uint8(v___x_190_, sizeof(void*)*3, v___x_139_);
if (v_isShared_129_ == 0)
{
lean_ctor_set(v___x_128_, 1, v___x_185_);
lean_ctor_set(v___x_128_, 0, v___x_190_);
v___x_192_ = v___x_128_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v___x_190_);
lean_ctor_set(v_reuseFailAlloc_194_, 1, v___x_185_);
v___x_192_ = v_reuseFailAlloc_194_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
v_a_119_ = v___x_192_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_200_; lean_object* v___x_201_; 
lean_del_object(v___x_128_);
v___x_200_ = lean_box(0);
v___x_201_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped_spec__0___redArg___lam__0(v_fst_125_, v_snd_126_, v___x_200_);
v___y_121_ = v___x_201_;
goto v___jp_120_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped_spec__0___redArg___boxed(lean_object* v_maxCols_203_, lean_object* v_s_204_, lean_object* v_a_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped_spec__0___redArg(v_maxCols_203_, v_s_204_, v_a_205_);
lean_dec_ref(v_s_204_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped(lean_object* v_s_207_, lean_object* v_c_208_, lean_object* v_maxCols_209_){
_start:
{
lean_object* v_cols_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v_fst_213_; lean_object* v_snd_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_221_; 
v_cols_210_ = lean_unsigned_to_nat(0u);
v___x_211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_211_, 0, v_c_208_);
lean_ctor_set(v___x_211_, 1, v_cols_210_);
v___x_212_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped_spec__0___redArg(v_maxCols_209_, v_s_207_, v___x_211_);
v_fst_213_ = lean_ctor_get(v___x_212_, 0);
v_snd_214_ = lean_ctor_get(v___x_212_, 1);
v_isSharedCheck_221_ = !lean_is_exclusive(v___x_212_);
if (v_isSharedCheck_221_ == 0)
{
v___x_216_ = v___x_212_;
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_snd_214_);
lean_inc(v_fst_213_);
lean_dec(v___x_212_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_219_; 
if (v_isShared_217_ == 0)
{
v___x_219_ = v___x_216_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v_fst_213_);
lean_ctor_set(v_reuseFailAlloc_220_, 1, v_snd_214_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped___boxed(lean_object* v_s_222_, lean_object* v_c_223_, lean_object* v_maxCols_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped(v_s_222_, v_c_223_, v_maxCols_224_);
lean_dec_ref(v_s_222_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped_spec__0(lean_object* v_maxCols_226_, lean_object* v_s_227_, lean_object* v_inst_228_, lean_object* v_a_229_){
_start:
{
lean_object* v___x_230_; 
v___x_230_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped_spec__0___redArg(v_maxCols_226_, v_s_227_, v_a_229_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped_spec__0___boxed(lean_object* v_maxCols_231_, lean_object* v_s_232_, lean_object* v_inst_233_, lean_object* v_a_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped_spec__0(v_maxCols_231_, v_s_232_, v_inst_233_, v_a_234_);
lean_dec_ref(v_s_232_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_indentedCodeLine(lean_object* v_s_236_, lean_object* v_c_237_){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v_fst_240_; lean_object* v___x_241_; 
v___x_238_ = lean_unsigned_to_nat(4u);
v___x_239_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped(v_s_236_, v_c_237_, v___x_238_);
v_fst_240_ = lean_ctor_get(v___x_239_, 0);
lean_inc(v_fst_240_);
lean_dec_ref(v___x_239_);
v___x_241_ = l_Lean_Markdown_Cursor_verbatimLine(v_s_236_, v_fst_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_indentedCodeLine___boxed(lean_object* v_s_242_, lean_object* v_c_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_indentedCodeLine(v_s_242_, v_c_243_);
lean_dec_ref(v_s_242_);
return v_res_244_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs___lam__0(uint32_t v_c_245_){
_start:
{
uint32_t v___x_246_; uint8_t v___x_247_; 
v___x_246_ = 32;
v___x_247_ = lean_uint32_dec_eq(v_c_245_, v___x_246_);
if (v___x_247_ == 0)
{
uint32_t v___x_248_; uint8_t v___x_249_; 
v___x_248_ = 9;
v___x_249_ = lean_uint32_dec_eq(v_c_245_, v___x_248_);
return v___x_249_;
}
else
{
return v___x_247_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs___lam__0___boxed(lean_object* v_c_250_){
_start:
{
uint32_t v_c_boxed_251_; uint8_t v_res_252_; lean_object* v_r_253_; 
v_c_boxed_251_ = lean_unbox_uint32(v_c_250_);
lean_dec(v_c_250_);
v_res_252_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs___lam__0(v_c_boxed_251_);
v_r_253_ = lean_box(v_res_252_);
return v_r_253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs(lean_object* v_s_255_, lean_object* v_text_256_){
_start:
{
lean_object* v___f_257_; lean_object* v___x_258_; 
v___f_257_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs___closed__0));
v___x_258_ = l_Lean_Markdown_trimTrailing(v_s_255_, v_text_256_, v___f_257_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs___boxed(lean_object* v_s_259_, lean_object* v_text_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs(v_s_259_, v_text_260_);
lean_dec_ref(v_s_259_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_dropIndent_spec__0___redArg(lean_object* v_upperBound_262_, lean_object* v_line_263_, lean_object* v_s_264_, lean_object* v_a_265_, lean_object* v_b_266_){
_start:
{
uint8_t v___x_267_; 
v___x_267_ = lean_nat_dec_lt(v_a_265_, v_upperBound_262_);
if (v___x_267_ == 0)
{
lean_dec(v_a_265_);
return v_b_266_;
}
else
{
lean_object* v_endExclusive_268_; lean_object* v___x_269_; lean_object* v___x_270_; uint8_t v___x_271_; 
v_endExclusive_268_ = lean_ctor_get(v_line_263_, 1);
v___x_269_ = lean_unsigned_to_nat(1u);
v___x_270_ = lean_nat_add(v_b_266_, v___x_269_);
v___x_271_ = lean_nat_dec_le(v___x_270_, v_endExclusive_268_);
lean_dec(v___x_270_);
if (v___x_271_ == 0)
{
lean_dec(v_a_265_);
return v_b_266_;
}
else
{
lean_object* v_str_272_; lean_object* v_startInclusive_273_; lean_object* v___x_274_; uint32_t v___x_275_; uint32_t v___x_276_; uint8_t v___x_277_; 
v_str_272_ = lean_ctor_get(v_s_264_, 0);
v_startInclusive_273_ = lean_ctor_get(v_s_264_, 1);
v___x_274_ = lean_nat_add(v_startInclusive_273_, v_b_266_);
v___x_275_ = lean_string_utf8_get_fast(v_str_272_, v___x_274_);
v___x_276_ = 32;
v___x_277_ = lean_uint32_dec_eq(v___x_275_, v___x_276_);
if (v___x_277_ == 0)
{
lean_dec(v___x_274_);
lean_dec(v_a_265_);
return v_b_266_;
}
else
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
lean_dec(v_b_266_);
v___x_278_ = lean_string_utf8_next_fast(v_str_272_, v___x_274_);
lean_dec(v___x_274_);
v___x_279_ = lean_nat_sub(v___x_278_, v_startInclusive_273_);
v___x_280_ = lean_nat_add(v_a_265_, v___x_269_);
lean_dec(v_a_265_);
v_a_265_ = v___x_280_;
v_b_266_ = v___x_279_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_dropIndent_spec__0___redArg___boxed(lean_object* v_upperBound_282_, lean_object* v_line_283_, lean_object* v_s_284_, lean_object* v_a_285_, lean_object* v_b_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_dropIndent_spec__0___redArg(v_upperBound_282_, v_line_283_, v_s_284_, v_a_285_, v_b_286_);
lean_dec_ref(v_s_284_);
lean_dec_ref(v_line_283_);
lean_dec(v_upperBound_282_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_dropIndent(lean_object* v_s_288_, lean_object* v_line_289_, lean_object* v_indent_290_){
_start:
{
lean_object* v_startInclusive_291_; lean_object* v_endExclusive_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v_startInclusive_291_ = lean_ctor_get(v_line_289_, 0);
lean_inc(v_startInclusive_291_);
v_endExclusive_292_ = lean_ctor_get(v_line_289_, 1);
lean_inc(v_endExclusive_292_);
v___x_293_ = lean_unsigned_to_nat(0u);
v___x_294_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_dropIndent_spec__0___redArg(v_indent_290_, v_line_289_, v_s_288_, v___x_293_, v_startInclusive_291_);
lean_dec_ref(v_line_289_);
v___x_295_ = l_Lean_Markdown_subsliceClamped___redArg(v___x_294_, v_endExclusive_292_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_dropIndent___boxed(lean_object* v_s_296_, lean_object* v_line_297_, lean_object* v_indent_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_dropIndent(v_s_296_, v_line_297_, v_indent_298_);
lean_dec(v_indent_298_);
lean_dec_ref(v_s_296_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_dropIndent_spec__0(lean_object* v_upperBound_300_, lean_object* v_line_301_, lean_object* v_s_302_, lean_object* v_inst_303_, lean_object* v_R_304_, lean_object* v_a_305_, lean_object* v_b_306_, lean_object* v_c_307_){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_dropIndent_spec__0___redArg(v_upperBound_300_, v_line_301_, v_s_302_, v_a_305_, v_b_306_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_dropIndent_spec__0___boxed(lean_object* v_upperBound_309_, lean_object* v_line_310_, lean_object* v_s_311_, lean_object* v_inst_312_, lean_object* v_R_313_, lean_object* v_a_314_, lean_object* v_b_315_, lean_object* v_c_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_dropIndent_spec__0(v_upperBound_309_, v_line_310_, v_s_311_, v_inst_312_, v_R_313_, v_a_314_, v_b_315_, v_c_316_);
lean_dec_ref(v_s_311_);
lean_dec_ref(v_line_310_);
lean_dec(v_upperBound_309_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_splitLines_go(lean_object* v_s_318_, lean_object* v_text_319_, lean_object* v_p_320_, lean_object* v_lineStart_321_, lean_object* v_lines_322_){
_start:
{
lean_object* v___y_324_; lean_object* v_endExclusive_328_; lean_object* v___x_329_; lean_object* v___x_330_; uint8_t v___x_331_; 
v_endExclusive_328_ = lean_ctor_get(v_text_319_, 1);
v___x_329_ = lean_unsigned_to_nat(1u);
v___x_330_ = lean_nat_add(v_p_320_, v___x_329_);
v___x_331_ = lean_nat_dec_le(v___x_330_, v_endExclusive_328_);
lean_dec(v___x_330_);
if (v___x_331_ == 0)
{
lean_object* v___x_332_; uint8_t v___x_333_; 
v___x_332_ = lean_nat_add(v_lineStart_321_, v___x_329_);
v___x_333_ = lean_nat_dec_le(v___x_332_, v_p_320_);
lean_dec(v___x_332_);
if (v___x_333_ == 0)
{
lean_dec(v_lineStart_321_);
lean_dec(v_p_320_);
return v_lines_322_;
}
else
{
lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_334_ = l_Lean_Markdown_subsliceClamped___redArg(v_lineStart_321_, v_p_320_);
v___x_335_ = lean_array_push(v_lines_322_, v___x_334_);
return v___x_335_;
}
}
else
{
lean_object* v_str_336_; lean_object* v_startInclusive_337_; lean_object* v___x_344_; uint32_t v_c_345_; uint32_t v___x_346_; uint8_t v___x_347_; 
v_str_336_ = lean_ctor_get(v_s_318_, 0);
v_startInclusive_337_ = lean_ctor_get(v_s_318_, 1);
v___x_344_ = lean_nat_add(v_startInclusive_337_, v_p_320_);
v_c_345_ = lean_string_utf8_get_fast(v_str_336_, v___x_344_);
v___x_346_ = 10;
v___x_347_ = lean_uint32_dec_eq(v_c_345_, v___x_346_);
if (v___x_347_ == 0)
{
uint32_t v___x_348_; uint8_t v___x_349_; 
v___x_348_ = 13;
v___x_349_ = lean_uint32_dec_eq(v_c_345_, v___x_348_);
if (v___x_349_ == 0)
{
lean_object* v___x_350_; lean_object* v___x_351_; 
lean_dec(v_p_320_);
v___x_350_ = lean_string_utf8_next_fast(v_str_336_, v___x_344_);
lean_dec(v___x_344_);
v___x_351_ = lean_nat_sub(v___x_350_, v_startInclusive_337_);
v_p_320_ = v___x_351_;
goto _start;
}
else
{
lean_dec(v___x_344_);
goto v___jp_338_;
}
}
else
{
lean_dec(v___x_344_);
goto v___jp_338_;
}
v___jp_338_:
{
lean_object* v___x_339_; 
v___x_339_ = l_Lean_Markdown_parseLineEnding_x3f(v_s_318_, v_text_319_, v_p_320_);
if (lean_obj_tag(v___x_339_) == 0)
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_340_ = lean_nat_add(v_startInclusive_337_, v_p_320_);
v___x_341_ = lean_string_utf8_next_fast(v_str_336_, v___x_340_);
lean_dec(v___x_340_);
v___x_342_ = lean_nat_sub(v___x_341_, v_startInclusive_337_);
v___y_324_ = v___x_342_;
goto v___jp_323_;
}
else
{
lean_object* v_val_343_; 
v_val_343_ = lean_ctor_get(v___x_339_, 0);
lean_inc(v_val_343_);
lean_dec_ref_known(v___x_339_, 1);
v___y_324_ = v_val_343_;
goto v___jp_323_;
}
}
}
v___jp_323_:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = l_Lean_Markdown_subsliceClamped___redArg(v_lineStart_321_, v_p_320_);
v___x_326_ = lean_array_push(v_lines_322_, v___x_325_);
lean_inc(v___y_324_);
v_p_320_ = v___y_324_;
v_lineStart_321_ = v___y_324_;
v_lines_322_ = v___x_326_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_splitLines_go___boxed(lean_object* v_s_353_, lean_object* v_text_354_, lean_object* v_p_355_, lean_object* v_lineStart_356_, lean_object* v_lines_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_splitLines_go(v_s_353_, v_text_354_, v_p_355_, v_lineStart_356_, v_lines_357_);
lean_dec_ref(v_text_354_);
lean_dec_ref(v_s_353_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_splitLines(lean_object* v_s_361_, lean_object* v_text_362_){
_start:
{
lean_object* v_startInclusive_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v_startInclusive_363_ = lean_ctor_get(v_text_362_, 0);
lean_inc_n(v_startInclusive_363_, 2);
v___x_364_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_splitLines___closed__0));
v___x_365_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_splitLines_go(v_s_361_, v_text_362_, v_startInclusive_363_, v_startInclusive_363_, v___x_364_);
lean_dec_ref(v_text_362_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_splitLines___boxed(lean_object* v_s_366_, lean_object* v_text_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_splitLines(v_s_366_, v_text_367_);
lean_dec_ref(v_s_366_);
return v_res_368_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__0(lean_object* v_x_369_, lean_object* v_x_370_){
_start:
{
if (lean_obj_tag(v_x_369_) == 0)
{
if (lean_obj_tag(v_x_370_) == 0)
{
uint8_t v___x_371_; 
v___x_371_ = 1;
return v___x_371_;
}
else
{
uint8_t v___x_372_; 
v___x_372_ = 0;
return v___x_372_;
}
}
else
{
if (lean_obj_tag(v_x_370_) == 0)
{
uint8_t v___x_373_; 
v___x_373_ = 0;
return v___x_373_;
}
else
{
lean_object* v_val_374_; lean_object* v_val_375_; uint32_t v___x_376_; uint32_t v___x_377_; uint8_t v___x_378_; 
v_val_374_ = lean_ctor_get(v_x_369_, 0);
v_val_375_ = lean_ctor_get(v_x_370_, 0);
v___x_376_ = lean_unbox_uint32(v_val_374_);
v___x_377_ = lean_unbox_uint32(v_val_375_);
v___x_378_ = lean_uint32_dec_eq(v___x_376_, v___x_377_);
return v___x_378_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__0___boxed(lean_object* v_x_379_, lean_object* v_x_380_){
_start:
{
uint8_t v_res_381_; lean_object* v_r_382_; 
v_res_381_ = l_instBEqOption_beq___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__0(v_x_379_, v_x_380_);
lean_dec(v_x_380_);
lean_dec(v_x_379_);
v_r_382_ = lean_box(v_res_381_);
return v_r_382_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_383_; lean_object* v___x_384_; 
v___x_383_ = 35;
v___x_384_ = lean_box_uint32(v___x_383_);
return v___x_384_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg___closed__0___boxed__const__1;
v___x_386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg(lean_object* v_s_387_, lean_object* v_a_388_){
_start:
{
lean_object* v___y_390_; lean_object* v___y_391_; lean_object* v_fst_394_; lean_object* v_snd_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_439_; 
v_fst_394_ = lean_ctor_get(v_a_388_, 0);
v_snd_395_ = lean_ctor_get(v_a_388_, 1);
v_isSharedCheck_439_ = !lean_is_exclusive(v_a_388_);
if (v_isSharedCheck_439_ == 0)
{
v___x_397_ = v_a_388_;
v_isShared_398_ = v_isSharedCheck_439_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_snd_395_);
lean_inc(v_fst_394_);
lean_dec(v_a_388_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_439_;
goto v_resetjp_396_;
}
v___jp_389_:
{
lean_object* v___x_392_; 
v___x_392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_392_, 0, v___y_391_);
lean_ctor_set(v___x_392_, 1, v___y_390_);
v_a_388_ = v___x_392_;
goto _start;
}
v_resetjp_396_:
{
lean_object* v_pos_404_; lean_object* v_stop_405_; lean_object* v_col_406_; lean_object* v___y_408_; lean_object* v___x_434_; lean_object* v___x_435_; uint8_t v___x_436_; 
v_pos_404_ = lean_ctor_get(v_fst_394_, 0);
v_stop_405_ = lean_ctor_get(v_fst_394_, 1);
v_col_406_ = lean_ctor_get(v_fst_394_, 2);
v___x_434_ = lean_unsigned_to_nat(1u);
v___x_435_ = lean_nat_add(v_pos_404_, v___x_434_);
v___x_436_ = lean_nat_dec_le(v___x_435_, v_stop_405_);
lean_dec(v___x_435_);
if (v___x_436_ == 0)
{
lean_object* v___x_437_; 
v___x_437_ = lean_box(0);
v___y_408_ = v___x_437_;
goto v___jp_407_;
}
else
{
lean_object* v___x_438_; 
v___x_438_ = l_String_Slice_Pos_get_x3f(v_s_387_, v_pos_404_);
v___y_408_ = v___x_438_;
goto v___jp_407_;
}
v___jp_399_:
{
lean_object* v___x_401_; 
if (v_isShared_398_ == 0)
{
v___x_401_ = v___x_397_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_fst_394_);
lean_ctor_set(v_reuseFailAlloc_403_, 1, v_snd_395_);
v___x_401_ = v_reuseFailAlloc_403_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
lean_object* v___x_402_; 
v___x_402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
return v___x_402_;
}
}
v___jp_407_:
{
lean_object* v___x_409_; uint8_t v___x_410_; 
v___x_409_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg___closed__0);
v___x_410_ = l_instBEqOption_beq___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__0(v___y_408_, v___x_409_);
lean_dec(v___y_408_);
if (v___x_410_ == 0)
{
goto v___jp_399_;
}
else
{
lean_object* v___x_411_; uint8_t v___x_412_; 
v___x_411_ = lean_unsigned_to_nat(7u);
v___x_412_ = lean_nat_dec_lt(v_snd_395_, v___x_411_);
if (v___x_412_ == 0)
{
goto v___jp_399_;
}
else
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; uint8_t v___x_416_; 
lean_del_object(v___x_397_);
v___x_413_ = lean_unsigned_to_nat(1u);
v___x_414_ = lean_nat_add(v_snd_395_, v___x_413_);
lean_dec(v_snd_395_);
v___x_415_ = lean_nat_add(v_pos_404_, v___x_413_);
v___x_416_ = lean_nat_dec_le(v___x_415_, v_stop_405_);
lean_dec(v___x_415_);
if (v___x_416_ == 0)
{
v___y_390_ = v___x_414_;
v___y_391_ = v_fst_394_;
goto v___jp_389_;
}
else
{
lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_430_; 
lean_inc(v_col_406_);
lean_inc(v_stop_405_);
lean_inc(v_pos_404_);
v_isSharedCheck_430_ = !lean_is_exclusive(v_fst_394_);
if (v_isSharedCheck_430_ == 0)
{
lean_object* v_unused_431_; lean_object* v_unused_432_; lean_object* v_unused_433_; 
v_unused_431_ = lean_ctor_get(v_fst_394_, 2);
lean_dec(v_unused_431_);
v_unused_432_ = lean_ctor_get(v_fst_394_, 1);
lean_dec(v_unused_432_);
v_unused_433_ = lean_ctor_get(v_fst_394_, 0);
lean_dec(v_unused_433_);
v___x_418_ = v_fst_394_;
v_isShared_419_ = v_isSharedCheck_430_;
goto v_resetjp_417_;
}
else
{
lean_dec(v_fst_394_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_430_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v_str_420_; lean_object* v_startInclusive_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; uint8_t v___x_426_; lean_object* v___x_428_; 
v_str_420_ = lean_ctor_get(v_s_387_, 0);
v_startInclusive_421_ = lean_ctor_get(v_s_387_, 1);
v___x_422_ = lean_nat_add(v_startInclusive_421_, v_pos_404_);
lean_dec(v_pos_404_);
v___x_423_ = lean_string_utf8_next_fast(v_str_420_, v___x_422_);
lean_dec(v___x_422_);
v___x_424_ = lean_nat_sub(v___x_423_, v_startInclusive_421_);
v___x_425_ = lean_nat_add(v_col_406_, v___x_413_);
lean_dec(v_col_406_);
v___x_426_ = 0;
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 2, v___x_425_);
lean_ctor_set(v___x_418_, 0, v___x_424_);
v___x_428_ = v___x_418_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v___x_424_);
lean_ctor_set(v_reuseFailAlloc_429_, 1, v_stop_405_);
lean_ctor_set(v_reuseFailAlloc_429_, 2, v___x_425_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*3, v___x_426_);
v___y_390_ = v___x_414_;
v___y_391_ = v___x_428_;
goto v___jp_389_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg___boxed(lean_object* v_s_440_, lean_object* v_a_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg(v_s_440_, v_a_441_);
lean_dec_ref(v_s_440_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__2___redArg(lean_object* v___x_443_, lean_object* v_s_444_, lean_object* v_a_445_){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; uint8_t v___x_448_; 
v___x_446_ = lean_unsigned_to_nat(1u);
v___x_447_ = lean_nat_add(v___x_443_, v___x_446_);
v___x_448_ = lean_nat_dec_le(v___x_447_, v_a_445_);
lean_dec(v___x_447_);
if (v___x_448_ == 0)
{
lean_object* v___x_449_; 
v___x_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_449_, 0, v_a_445_);
return v___x_449_;
}
else
{
lean_object* v___x_450_; 
v___x_450_ = l_String_Slice_Pos_prev_x3f(v_s_444_, v_a_445_);
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v___x_451_; 
v___x_451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_451_, 0, v_a_445_);
return v___x_451_;
}
else
{
lean_object* v_val_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_463_; 
v_val_452_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_463_ == 0)
{
v___x_454_ = v___x_450_;
v_isShared_455_ = v_isSharedCheck_463_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_val_452_);
lean_dec(v___x_450_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_463_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_456_; lean_object* v___x_457_; uint8_t v___x_458_; 
v___x_456_ = l_String_Slice_Pos_get_x3f(v_s_444_, v_val_452_);
v___x_457_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg___closed__0);
v___x_458_ = l_instBEqOption_beq___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__0(v___x_456_, v___x_457_);
lean_dec(v___x_456_);
if (v___x_458_ == 0)
{
lean_object* v___x_460_; 
lean_dec(v_val_452_);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 0, v_a_445_);
v___x_460_ = v___x_454_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_a_445_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
else
{
lean_del_object(v___x_454_);
lean_dec(v_a_445_);
v_a_445_ = v_val_452_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__2___redArg___boxed(lean_object* v___x_464_, lean_object* v_s_465_, lean_object* v_a_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__2___redArg(v___x_464_, v_s_465_, v_a_466_);
lean_dec_ref(v_s_465_);
lean_dec(v___x_464_);
return v_res_467_;
}
}
static lean_object* _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_468_; lean_object* v___x_469_; 
v___x_468_ = 32;
v___x_469_ = lean_box_uint32(v___x_468_);
return v___x_469_;
}
}
static lean_object* _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__0(void){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_470_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__0___boxed__const__1;
v___x_471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
return v___x_471_;
}
}
static lean_object* _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_472_; lean_object* v___x_473_; 
v___x_472_ = 9;
v___x_473_ = lean_box_uint32(v___x_472_);
return v___x_473_;
}
}
static lean_object* _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__1(void){
_start:
{
lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_474_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__1___boxed__const__1;
v___x_475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_475_, 0, v___x_474_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f(lean_object* v_s_476_, lean_object* v_line_477_){
_start:
{
lean_object* v_after_478_; lean_object* v_indent_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_569_; 
v_after_478_ = lean_ctor_get(v_line_477_, 0);
v_indent_479_ = lean_ctor_get(v_line_477_, 1);
v_isSharedCheck_569_ = !lean_is_exclusive(v_line_477_);
if (v_isSharedCheck_569_ == 0)
{
v___x_481_ = v_line_477_;
v_isShared_482_ = v_isSharedCheck_569_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_indent_479_);
lean_inc(v_after_478_);
lean_dec(v_line_477_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_569_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_483_; uint8_t v___x_484_; 
v___x_483_ = lean_unsigned_to_nat(3u);
v___x_484_ = lean_nat_dec_le(v_indent_479_, v___x_483_);
lean_dec(v_indent_479_);
if (v___x_484_ == 0)
{
lean_object* v___x_485_; 
lean_del_object(v___x_481_);
lean_dec_ref(v_after_478_);
v___x_485_ = lean_box(0);
return v___x_485_;
}
else
{
lean_object* v_pos_486_; lean_object* v___x_487_; lean_object* v___x_489_; 
v_pos_486_ = lean_ctor_get(v_after_478_, 0);
lean_inc(v_pos_486_);
v___x_487_ = lean_unsigned_to_nat(0u);
if (v_isShared_482_ == 0)
{
lean_ctor_set(v___x_481_, 1, v___x_487_);
v___x_489_ = v___x_481_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_after_478_);
lean_ctor_set(v_reuseFailAlloc_568_, 1, v___x_487_);
v___x_489_ = v_reuseFailAlloc_568_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
lean_object* v___x_490_; 
v___x_490_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg(v_s_476_, v___x_489_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v___x_491_; 
lean_dec(v_pos_486_);
v___x_491_ = lean_box(0);
return v___x_491_;
}
else
{
lean_object* v_val_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_567_; 
v_val_492_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_567_ == 0)
{
v___x_494_ = v___x_490_;
v_isShared_495_ = v_isSharedCheck_567_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_val_492_);
lean_dec(v___x_490_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_567_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v_fst_496_; lean_object* v_snd_497_; lean_object* v___y_499_; lean_object* v_content_500_; lean_object* v_closeHashes_x3f_501_; lean_object* v___y_507_; lean_object* v___y_508_; lean_object* v___y_509_; lean_object* v___y_510_; uint8_t v___x_515_; 
v_fst_496_ = lean_ctor_get(v_val_492_, 0);
lean_inc(v_fst_496_);
v_snd_497_ = lean_ctor_get(v_val_492_, 1);
lean_inc(v_snd_497_);
lean_dec(v_val_492_);
v___x_515_ = lean_nat_dec_lt(v___x_487_, v_snd_497_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; 
lean_dec(v_snd_497_);
lean_dec(v_fst_496_);
lean_del_object(v___x_494_);
lean_dec(v_pos_486_);
v___x_516_ = lean_box(0);
return v___x_516_;
}
else
{
lean_object* v___x_517_; uint8_t v___x_518_; 
v___x_517_ = lean_unsigned_to_nat(6u);
v___x_518_ = lean_nat_dec_le(v_snd_497_, v___x_517_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; 
lean_dec(v_snd_497_);
lean_dec(v_fst_496_);
lean_del_object(v___x_494_);
lean_dec(v_pos_486_);
v___x_519_ = lean_box(0);
return v___x_519_;
}
else
{
lean_object* v_pos_520_; lean_object* v_stop_521_; lean_object* v___x_555_; lean_object* v___x_556_; uint8_t v___x_557_; 
v_pos_520_ = lean_ctor_get(v_fst_496_, 0);
lean_inc(v_pos_520_);
v_stop_521_ = lean_ctor_get(v_fst_496_, 1);
v___x_555_ = lean_unsigned_to_nat(1u);
v___x_556_ = lean_nat_add(v_pos_520_, v___x_555_);
v___x_557_ = lean_nat_dec_le(v___x_556_, v_stop_521_);
lean_dec(v___x_556_);
if (v___x_557_ == 0)
{
goto v___jp_522_;
}
else
{
lean_object* v___x_558_; 
v___x_558_ = l_String_Slice_Pos_get_x3f(v_s_476_, v_pos_520_);
if (lean_obj_tag(v___x_558_) == 1)
{
lean_object* v_val_559_; uint32_t v___x_560_; uint32_t v___x_561_; uint8_t v___x_562_; 
v_val_559_ = lean_ctor_get(v___x_558_, 0);
lean_inc(v_val_559_);
lean_dec_ref_known(v___x_558_, 1);
v___x_560_ = 32;
v___x_561_ = lean_unbox_uint32(v_val_559_);
v___x_562_ = lean_uint32_dec_eq(v___x_561_, v___x_560_);
if (v___x_562_ == 0)
{
uint32_t v___x_563_; uint32_t v___x_564_; uint8_t v___x_565_; 
v___x_563_ = 9;
v___x_564_ = lean_unbox_uint32(v_val_559_);
lean_dec(v_val_559_);
v___x_565_ = lean_uint32_dec_eq(v___x_564_, v___x_563_);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; 
lean_dec(v_pos_520_);
lean_dec(v_snd_497_);
lean_dec(v_fst_496_);
lean_del_object(v___x_494_);
lean_dec(v_pos_486_);
v___x_566_ = lean_box(0);
return v___x_566_;
}
else
{
goto v___jp_522_;
}
}
else
{
lean_dec(v_val_559_);
goto v___jp_522_;
}
}
else
{
lean_dec(v___x_558_);
goto v___jp_522_;
}
}
v___jp_522_:
{
lean_object* v___x_523_; lean_object* v_fst_524_; lean_object* v_pos_525_; lean_object* v_stop_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v_endExclusive_529_; lean_object* v___x_530_; 
v___x_523_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols(v_s_476_, v_fst_496_);
v_fst_524_ = lean_ctor_get(v___x_523_, 0);
lean_inc(v_fst_524_);
lean_dec_ref(v___x_523_);
v_pos_525_ = lean_ctor_get(v_fst_524_, 0);
lean_inc_n(v_pos_525_, 2);
v_stop_526_ = lean_ctor_get(v_fst_524_, 1);
lean_inc(v_stop_526_);
lean_dec(v_fst_524_);
v___x_527_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_525_, v_stop_526_);
v___x_528_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs(v_s_476_, v___x_527_);
v_endExclusive_529_ = lean_ctor_get(v___x_528_, 1);
lean_inc(v_endExclusive_529_);
v___x_530_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__2___redArg(v_pos_525_, v_s_476_, v_endExclusive_529_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v___x_531_; 
lean_dec_ref(v___x_528_);
lean_dec(v_pos_525_);
lean_dec(v_pos_520_);
lean_dec(v_snd_497_);
lean_del_object(v___x_494_);
lean_dec(v_pos_486_);
v___x_531_ = lean_box(0);
return v___x_531_;
}
else
{
lean_object* v_val_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_554_; 
v_val_532_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_554_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_554_ == 0)
{
v___x_534_ = v___x_530_;
v_isShared_535_ = v_isSharedCheck_554_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_val_532_);
lean_dec(v___x_530_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_554_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; uint8_t v___x_540_; 
v___x_536_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_486_, v_pos_520_);
v___x_537_ = lean_box(0);
v___x_538_ = lean_unsigned_to_nat(1u);
v___x_539_ = lean_nat_add(v_val_532_, v___x_538_);
v___x_540_ = lean_nat_dec_le(v___x_539_, v_endExclusive_529_);
lean_dec(v___x_539_);
if (v___x_540_ == 0)
{
lean_del_object(v___x_534_);
lean_dec(v_val_532_);
lean_dec(v_pos_525_);
v___y_499_ = v___x_536_;
v_content_500_ = v___x_528_;
v_closeHashes_x3f_501_ = v___x_537_;
goto v___jp_498_;
}
else
{
uint8_t v_decide_541_; 
v_decide_541_ = lean_nat_dec_eq(v_val_532_, v_pos_525_);
if (v_decide_541_ == 0)
{
lean_object* v___x_542_; 
lean_del_object(v___x_534_);
v___x_542_ = l_String_Slice_Pos_prev_x3f(v_s_476_, v_val_532_);
if (lean_obj_tag(v___x_542_) == 1)
{
lean_object* v_val_543_; lean_object* v___x_544_; lean_object* v___x_545_; uint8_t v___x_546_; 
v_val_543_ = lean_ctor_get(v___x_542_, 0);
lean_inc(v_val_543_);
lean_dec_ref_known(v___x_542_, 1);
v___x_544_ = l_String_Slice_Pos_get_x3f(v_s_476_, v_val_543_);
lean_dec(v_val_543_);
v___x_545_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__0);
v___x_546_ = l_instBEqOption_beq___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__0(v___x_544_, v___x_545_);
if (v___x_546_ == 0)
{
lean_object* v___x_547_; uint8_t v___x_548_; 
v___x_547_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__1, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__1_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__1);
v___x_548_ = l_instBEqOption_beq___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__0(v___x_544_, v___x_547_);
lean_dec(v___x_544_);
if (v___x_548_ == 0)
{
lean_dec(v_val_532_);
lean_dec(v_pos_525_);
v___y_499_ = v___x_536_;
v_content_500_ = v___x_528_;
v_closeHashes_x3f_501_ = v___x_537_;
goto v___jp_498_;
}
else
{
lean_inc(v_endExclusive_529_);
lean_dec_ref(v___x_528_);
v___y_507_ = v_endExclusive_529_;
v___y_508_ = v___x_536_;
v___y_509_ = v_val_532_;
v___y_510_ = v_pos_525_;
goto v___jp_506_;
}
}
else
{
lean_inc(v_endExclusive_529_);
lean_dec(v___x_544_);
lean_dec_ref(v___x_528_);
v___y_507_ = v_endExclusive_529_;
v___y_508_ = v___x_536_;
v___y_509_ = v_val_532_;
v___y_510_ = v_pos_525_;
goto v___jp_506_;
}
}
else
{
lean_dec(v___x_542_);
lean_dec(v_val_532_);
lean_dec(v_pos_525_);
v___y_499_ = v___x_536_;
v_content_500_ = v___x_528_;
v_closeHashes_x3f_501_ = v___x_537_;
goto v___jp_498_;
}
}
else
{
lean_object* v___x_549_; lean_object* v___x_551_; 
lean_inc(v_endExclusive_529_);
lean_dec_ref(v___x_528_);
lean_inc(v_val_532_);
v___x_549_ = l_Lean_Markdown_subsliceClamped___redArg(v_val_532_, v_endExclusive_529_);
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 0, v___x_549_);
v___x_551_ = v___x_534_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v___x_549_);
v___x_551_ = v_reuseFailAlloc_553_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
lean_object* v___x_552_; 
v___x_552_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_525_, v_val_532_);
v___y_499_ = v___x_536_;
v_content_500_ = v___x_552_;
v_closeHashes_x3f_501_ = v___x_551_;
goto v___jp_498_;
}
}
}
}
}
}
}
}
v___jp_498_:
{
lean_object* v___x_502_; lean_object* v___x_504_; 
v___x_502_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_502_, 0, v_snd_497_);
lean_ctor_set(v___x_502_, 1, v___y_499_);
lean_ctor_set(v___x_502_, 2, v_content_500_);
lean_ctor_set(v___x_502_, 3, v_closeHashes_x3f_501_);
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 0, v___x_502_);
v___x_504_ = v___x_494_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_502_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
v___jp_506_:
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
lean_inc(v___y_509_);
v___x_511_ = l_Lean_Markdown_subsliceClamped___redArg(v___y_509_, v___y_507_);
v___x_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_512_, 0, v___x_511_);
v___x_513_ = l_Lean_Markdown_subsliceClamped___redArg(v___y_510_, v___y_509_);
v___x_514_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs(v_s_476_, v___x_513_);
v___y_499_ = v___y_508_;
v_content_500_ = v___x_514_;
v_closeHashes_x3f_501_ = v___x_512_;
goto v___jp_498_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___boxed(lean_object* v_s_570_, lean_object* v_line_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f(v_s_570_, v_line_571_);
lean_dec_ref(v_s_570_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1(lean_object* v_s_573_, lean_object* v_inst_574_, lean_object* v_a_575_){
_start:
{
lean_object* v___x_576_; 
v___x_576_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg(v_s_573_, v_a_575_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___boxed(lean_object* v_s_577_, lean_object* v_inst_578_, lean_object* v_a_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1(v_s_577_, v_inst_578_, v_a_579_);
lean_dec_ref(v_s_577_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__2(lean_object* v___x_581_, lean_object* v_s_582_, lean_object* v_inst_583_, lean_object* v_a_584_){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__2___redArg(v___x_581_, v_s_582_, v_a_584_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__2___boxed(lean_object* v___x_586_, lean_object* v_s_587_, lean_object* v_inst_588_, lean_object* v_a_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__2(v___x_586_, v_s_587_, v_inst_588_, v_a_589_);
lean_dec_ref(v_s_587_);
lean_dec(v___x_586_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorIdx___impl___redArg(lean_object* v_x_591_){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = lean_obj_tag_nat(v_x_591_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorIdx___impl___redArg___boxed(lean_object* v_x_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorIdx___impl___redArg(v_x_593_);
lean_dec(v_x_593_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorIdx___impl(lean_object* v_s_595_, lean_object* v_x_596_){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = lean_obj_tag_nat(v_x_596_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorIdx___impl___boxed(lean_object* v_s_598_, lean_object* v_x_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorIdx___impl(v_s_598_, v_x_599_);
lean_dec(v_x_599_);
lean_dec_ref(v_s_598_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorElim___redArg(lean_object* v_t_601_, lean_object* v_k_602_){
_start:
{
if (lean_obj_tag(v_t_601_) == 1)
{
lean_object* v_pos_603_; lean_object* v___x_604_; 
v_pos_603_ = lean_ctor_get(v_t_601_, 0);
lean_inc(v_pos_603_);
lean_dec_ref_known(v_t_601_, 1);
v___x_604_ = lean_apply_1(v_k_602_, v_pos_603_);
return v___x_604_;
}
else
{
lean_dec(v_t_601_);
return v_k_602_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorElim(lean_object* v_s_605_, lean_object* v_motive_606_, lean_object* v_ctorIdx_607_, lean_object* v_t_608_, lean_object* v_h_609_, lean_object* v_k_610_){
_start:
{
lean_object* v___x_611_; 
v___x_611_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorElim___redArg(v_t_608_, v_k_610_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorElim___boxed(lean_object* v_s_612_, lean_object* v_motive_613_, lean_object* v_ctorIdx_614_, lean_object* v_t_615_, lean_object* v_h_616_, lean_object* v_k_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorElim(v_s_612_, v_motive_613_, v_ctorIdx_614_, v_t_615_, v_h_616_, v_k_617_);
lean_dec(v_ctorIdx_614_);
lean_dec_ref(v_s_612_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_isBreak_elim___redArg(lean_object* v_t_619_, lean_object* v_isBreak_620_){
_start:
{
lean_object* v___x_621_; 
v___x_621_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorElim___redArg(v_t_619_, v_isBreak_620_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_isBreak_elim(lean_object* v_s_622_, lean_object* v_motive_623_, lean_object* v_t_624_, lean_object* v_h_625_, lean_object* v_isBreak_626_){
_start:
{
lean_object* v___x_627_; 
v___x_627_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorElim___redArg(v_t_624_, v_isBreak_626_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_isBreak_elim___boxed(lean_object* v_s_628_, lean_object* v_motive_629_, lean_object* v_t_630_, lean_object* v_h_631_, lean_object* v_isBreak_632_){
_start:
{
lean_object* v_res_633_; 
v_res_633_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_isBreak_elim(v_s_628_, v_motive_629_, v_t_630_, v_h_631_, v_isBreak_632_);
lean_dec_ref(v_s_628_);
return v_res_633_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_failsAt_elim___redArg(lean_object* v_t_634_, lean_object* v_failsAt_635_){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorElim___redArg(v_t_634_, v_failsAt_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_failsAt_elim(lean_object* v_s_637_, lean_object* v_motive_638_, lean_object* v_t_639_, lean_object* v_h_640_, lean_object* v_failsAt_641_){
_start:
{
lean_object* v___x_642_; 
v___x_642_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorElim___redArg(v_t_639_, v_failsAt_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_failsAt_elim___boxed(lean_object* v_s_643_, lean_object* v_motive_644_, lean_object* v_t_645_, lean_object* v_h_646_, lean_object* v_failsAt_647_){
_start:
{
lean_object* v_res_648_; 
v_res_648_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_failsAt_elim(v_s_643_, v_motive_644_, v_t_645_, v_h_646_, v_failsAt_647_);
lean_dec_ref(v_s_643_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_notCandidate_elim___redArg(lean_object* v_t_649_, lean_object* v_notCandidate_650_){
_start:
{
lean_object* v___x_651_; 
v___x_651_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorElim___redArg(v_t_649_, v_notCandidate_650_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_notCandidate_elim(lean_object* v_s_652_, lean_object* v_motive_653_, lean_object* v_t_654_, lean_object* v_h_655_, lean_object* v_notCandidate_656_){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_ctorElim___redArg(v_t_654_, v_notCandidate_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_notCandidate_elim___boxed(lean_object* v_s_658_, lean_object* v_motive_659_, lean_object* v_t_660_, lean_object* v_h_661_, lean_object* v_notCandidate_662_){
_start:
{
lean_object* v_res_663_; 
v_res_663_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ThematicBreakCheck_notCandidate_elim(v_s_658_, v_motive_659_, v_t_660_, v_h_661_, v_notCandidate_662_);
lean_dec_ref(v_s_658_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak_spec__0___redArg(lean_object* v_s_664_, uint32_t v_val_665_, uint8_t v___x_666_, lean_object* v_a_667_){
_start:
{
lean_object* v_snd_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_743_; 
v_snd_668_ = lean_ctor_get(v_a_667_, 1);
v_isSharedCheck_743_ = !lean_is_exclusive(v_a_667_);
if (v_isSharedCheck_743_ == 0)
{
lean_object* v_unused_744_; 
v_unused_744_ = lean_ctor_get(v_a_667_, 0);
lean_dec(v_unused_744_);
v___x_670_ = v_a_667_;
v_isShared_671_ = v_isSharedCheck_743_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_snd_668_);
lean_dec(v_a_667_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_743_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v_fst_672_; lean_object* v_snd_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_742_; 
v_fst_672_ = lean_ctor_get(v_snd_668_, 0);
v_snd_673_ = lean_ctor_get(v_snd_668_, 1);
v_isSharedCheck_742_ = !lean_is_exclusive(v_snd_668_);
if (v_isSharedCheck_742_ == 0)
{
v___x_675_ = v_snd_668_;
v_isShared_676_ = v_isSharedCheck_742_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_snd_673_);
lean_inc(v_fst_672_);
lean_dec(v_snd_668_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_742_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v_pos_677_; lean_object* v_stop_678_; lean_object* v_col_679_; lean_object* v___x_680_; lean_object* v___x_688_; lean_object* v___x_689_; uint8_t v___x_690_; 
v_pos_677_ = lean_ctor_get(v_fst_672_, 0);
v_stop_678_ = lean_ctor_get(v_fst_672_, 1);
v_col_679_ = lean_ctor_get(v_fst_672_, 2);
v___x_680_ = lean_box(0);
v___x_688_ = lean_unsigned_to_nat(1u);
v___x_689_ = lean_nat_add(v_pos_677_, v___x_688_);
v___x_690_ = lean_nat_dec_le(v___x_689_, v_stop_678_);
lean_dec(v___x_689_);
if (v___x_690_ == 0)
{
goto v___jp_681_;
}
else
{
lean_object* v___x_691_; 
v___x_691_ = l_String_Slice_Pos_get_x3f(v_s_664_, v_pos_677_);
if (lean_obj_tag(v___x_691_) == 1)
{
lean_object* v_val_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_741_; 
lean_del_object(v___x_675_);
lean_del_object(v___x_670_);
v_val_692_ = lean_ctor_get(v___x_691_, 0);
v_isSharedCheck_741_ = !lean_is_exclusive(v___x_691_);
if (v_isSharedCheck_741_ == 0)
{
v___x_694_ = v___x_691_;
v_isShared_695_ = v_isSharedCheck_741_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_val_692_);
lean_dec(v___x_691_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_741_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
uint32_t v___x_696_; uint8_t v___x_697_; 
v___x_696_ = lean_unbox_uint32(v_val_692_);
v___x_697_ = lean_uint32_dec_eq(v___x_696_, v_val_665_);
if (v___x_697_ == 0)
{
uint32_t v___x_709_; uint32_t v___x_710_; uint8_t v___x_711_; 
v___x_709_ = 32;
v___x_710_ = lean_unbox_uint32(v_val_692_);
v___x_711_ = lean_uint32_dec_eq(v___x_710_, v___x_709_);
if (v___x_711_ == 0)
{
uint32_t v___x_712_; uint32_t v___x_713_; uint8_t v___x_714_; 
v___x_712_ = 9;
v___x_713_ = lean_unbox_uint32(v_val_692_);
lean_dec(v_val_692_);
v___x_714_ = lean_uint32_dec_eq(v___x_713_, v___x_712_);
if (v___x_714_ == 0)
{
lean_object* v___x_715_; lean_object* v___x_717_; 
lean_inc(v_pos_677_);
v___x_715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_715_, 0, v_pos_677_);
if (v_isShared_695_ == 0)
{
lean_ctor_set(v___x_694_, 0, v___x_715_);
v___x_717_ = v___x_694_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v___x_715_);
v___x_717_ = v_reuseFailAlloc_720_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_718_, 0, v_fst_672_);
lean_ctor_set(v___x_718_, 1, v_snd_673_);
v___x_719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_719_, 0, v___x_717_);
lean_ctor_set(v___x_719_, 1, v___x_718_);
return v___x_719_;
}
}
else
{
lean_inc(v_col_679_);
lean_inc(v_stop_678_);
lean_inc(v_pos_677_);
lean_del_object(v___x_694_);
lean_dec(v_fst_672_);
goto v___jp_698_;
}
}
else
{
lean_inc(v_col_679_);
lean_inc(v_stop_678_);
lean_inc(v_pos_677_);
lean_del_object(v___x_694_);
lean_dec(v_val_692_);
lean_dec(v_fst_672_);
goto v___jp_698_;
}
}
else
{
lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_737_; 
lean_inc(v_col_679_);
lean_inc(v_stop_678_);
lean_inc(v_pos_677_);
lean_del_object(v___x_694_);
lean_dec(v_val_692_);
v_isSharedCheck_737_ = !lean_is_exclusive(v_fst_672_);
if (v_isSharedCheck_737_ == 0)
{
lean_object* v_unused_738_; lean_object* v_unused_739_; lean_object* v_unused_740_; 
v_unused_738_ = lean_ctor_get(v_fst_672_, 2);
lean_dec(v_unused_738_);
v_unused_739_ = lean_ctor_get(v_fst_672_, 1);
lean_dec(v_unused_739_);
v_unused_740_ = lean_ctor_get(v_fst_672_, 0);
lean_dec(v_unused_740_);
v___x_722_ = v_fst_672_;
v_isShared_723_ = v_isSharedCheck_737_;
goto v_resetjp_721_;
}
else
{
lean_dec(v_fst_672_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_737_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v_str_724_; lean_object* v_startInclusive_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_732_; 
v_str_724_ = lean_ctor_get(v_s_664_, 0);
v_startInclusive_725_ = lean_ctor_get(v_s_664_, 1);
v___x_726_ = lean_nat_add(v_snd_673_, v___x_688_);
lean_dec(v_snd_673_);
v___x_727_ = lean_nat_add(v_startInclusive_725_, v_pos_677_);
lean_dec(v_pos_677_);
v___x_728_ = lean_string_utf8_next_fast(v_str_724_, v___x_727_);
lean_dec(v___x_727_);
v___x_729_ = lean_nat_sub(v___x_728_, v_startInclusive_725_);
v___x_730_ = lean_nat_add(v_col_679_, v___x_688_);
lean_dec(v_col_679_);
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 2, v___x_730_);
lean_ctor_set(v___x_722_, 0, v___x_729_);
v___x_732_ = v___x_722_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v___x_729_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v_stop_678_);
lean_ctor_set(v_reuseFailAlloc_736_, 2, v___x_730_);
v___x_732_ = v_reuseFailAlloc_736_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
lean_object* v___x_733_; lean_object* v___x_734_; 
lean_ctor_set_uint8(v___x_732_, sizeof(void*)*3, v___x_666_);
v___x_733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_733_, 0, v___x_732_);
lean_ctor_set(v___x_733_, 1, v___x_726_);
v___x_734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_734_, 0, v___x_680_);
lean_ctor_set(v___x_734_, 1, v___x_733_);
v_a_667_ = v___x_734_;
goto _start;
}
}
}
v___jp_698_:
{
lean_object* v_str_699_; lean_object* v_startInclusive_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v_str_699_ = lean_ctor_get(v_s_664_, 0);
v_startInclusive_700_ = lean_ctor_get(v_s_664_, 1);
v___x_701_ = lean_nat_add(v_startInclusive_700_, v_pos_677_);
lean_dec(v_pos_677_);
v___x_702_ = lean_string_utf8_next_fast(v_str_699_, v___x_701_);
lean_dec(v___x_701_);
v___x_703_ = lean_nat_sub(v___x_702_, v_startInclusive_700_);
v___x_704_ = lean_nat_add(v_col_679_, v___x_688_);
lean_dec(v_col_679_);
v___x_705_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_705_, 0, v___x_703_);
lean_ctor_set(v___x_705_, 1, v_stop_678_);
lean_ctor_set(v___x_705_, 2, v___x_704_);
lean_ctor_set_uint8(v___x_705_, sizeof(void*)*3, v___x_697_);
v___x_706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_706_, 0, v___x_705_);
lean_ctor_set(v___x_706_, 1, v_snd_673_);
v___x_707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_707_, 0, v___x_680_);
lean_ctor_set(v___x_707_, 1, v___x_706_);
v_a_667_ = v___x_707_;
goto _start;
}
}
}
else
{
lean_dec(v___x_691_);
goto v___jp_681_;
}
}
v___jp_681_:
{
lean_object* v___x_683_; 
if (v_isShared_676_ == 0)
{
v___x_683_ = v___x_675_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_fst_672_);
lean_ctor_set(v_reuseFailAlloc_687_, 1, v_snd_673_);
v___x_683_ = v_reuseFailAlloc_687_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
lean_object* v___x_685_; 
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 1, v___x_683_);
lean_ctor_set(v___x_670_, 0, v___x_680_);
v___x_685_ = v___x_670_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v___x_680_);
lean_ctor_set(v_reuseFailAlloc_686_, 1, v___x_683_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak_spec__0___redArg___boxed(lean_object* v_s_745_, lean_object* v_val_746_, lean_object* v___x_747_, lean_object* v_a_748_){
_start:
{
uint32_t v_val_2786__boxed_749_; uint8_t v___x_2787__boxed_750_; lean_object* v_res_751_; 
v_val_2786__boxed_749_ = lean_unbox_uint32(v_val_746_);
lean_dec(v_val_746_);
v___x_2787__boxed_750_ = lean_unbox(v___x_747_);
v_res_751_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak_spec__0___redArg(v_s_745_, v_val_2786__boxed_749_, v___x_2787__boxed_750_, v_a_748_);
lean_dec_ref(v_s_745_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak(lean_object* v_s_752_, lean_object* v_line_753_){
_start:
{
lean_object* v_after_754_; lean_object* v_indent_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_806_; 
v_after_754_ = lean_ctor_get(v_line_753_, 0);
v_indent_755_ = lean_ctor_get(v_line_753_, 1);
v_isSharedCheck_806_ = !lean_is_exclusive(v_line_753_);
if (v_isSharedCheck_806_ == 0)
{
v___x_757_ = v_line_753_;
v_isShared_758_ = v_isSharedCheck_806_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_indent_755_);
lean_inc(v_after_754_);
lean_dec(v_line_753_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_806_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_759_; uint8_t v___x_760_; 
v___x_759_ = lean_unsigned_to_nat(4u);
v___x_760_ = lean_nat_dec_le(v___x_759_, v_indent_755_);
lean_dec(v_indent_755_);
if (v___x_760_ == 0)
{
lean_object* v_pos_761_; lean_object* v_stop_762_; lean_object* v___x_763_; lean_object* v___x_764_; uint8_t v___x_765_; 
v_pos_761_ = lean_ctor_get(v_after_754_, 0);
v_stop_762_ = lean_ctor_get(v_after_754_, 1);
v___x_763_ = lean_unsigned_to_nat(1u);
v___x_764_ = lean_nat_add(v_pos_761_, v___x_763_);
v___x_765_ = lean_nat_dec_le(v___x_764_, v_stop_762_);
lean_dec(v___x_764_);
if (v___x_765_ == 0)
{
lean_object* v___x_766_; 
lean_del_object(v___x_757_);
lean_dec_ref(v_after_754_);
v___x_766_ = lean_box(2);
return v___x_766_;
}
else
{
lean_object* v___x_767_; 
v___x_767_ = l_String_Slice_Pos_get_x3f(v_s_752_, v_pos_761_);
if (lean_obj_tag(v___x_767_) == 1)
{
lean_object* v_val_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_803_; 
v_val_768_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_803_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_803_ == 0)
{
v___x_770_ = v___x_767_;
v_isShared_771_ = v_isSharedCheck_803_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_val_768_);
lean_dec(v___x_767_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_803_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
uint32_t v___x_793_; uint32_t v___x_794_; uint8_t v___x_795_; 
v___x_793_ = 42;
v___x_794_ = lean_unbox_uint32(v_val_768_);
v___x_795_ = lean_uint32_dec_eq(v___x_794_, v___x_793_);
if (v___x_795_ == 0)
{
uint32_t v___x_796_; uint32_t v___x_797_; uint8_t v___x_798_; 
v___x_796_ = 45;
v___x_797_ = lean_unbox_uint32(v_val_768_);
v___x_798_ = lean_uint32_dec_eq(v___x_797_, v___x_796_);
if (v___x_798_ == 0)
{
uint32_t v___x_799_; uint32_t v___x_800_; uint8_t v___x_801_; 
v___x_799_ = 95;
v___x_800_ = lean_unbox_uint32(v_val_768_);
v___x_801_ = lean_uint32_dec_eq(v___x_800_, v___x_799_);
if (v___x_801_ == 0)
{
lean_object* v___x_802_; 
lean_del_object(v___x_770_);
lean_dec(v_val_768_);
lean_del_object(v___x_757_);
lean_dec_ref(v_after_754_);
v___x_802_ = lean_box(2);
return v___x_802_;
}
else
{
goto v___jp_772_;
}
}
else
{
goto v___jp_772_;
}
}
else
{
goto v___jp_772_;
}
v___jp_772_:
{
lean_object* v_markerCount_773_; lean_object* v___x_774_; lean_object* v___x_776_; 
v_markerCount_773_ = lean_unsigned_to_nat(0u);
v___x_774_ = lean_box(0);
if (v_isShared_758_ == 0)
{
lean_ctor_set(v___x_757_, 1, v_markerCount_773_);
v___x_776_ = v___x_757_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_after_754_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v_markerCount_773_);
v___x_776_ = v_reuseFailAlloc_792_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
lean_object* v___x_777_; uint32_t v___x_778_; lean_object* v___x_779_; lean_object* v_fst_780_; 
v___x_777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_777_, 0, v___x_774_);
lean_ctor_set(v___x_777_, 1, v___x_776_);
v___x_778_ = lean_unbox_uint32(v_val_768_);
lean_dec(v_val_768_);
v___x_779_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak_spec__0___redArg(v_s_752_, v___x_778_, v___x_760_, v___x_777_);
v_fst_780_ = lean_ctor_get(v___x_779_, 0);
if (lean_obj_tag(v_fst_780_) == 0)
{
lean_object* v_snd_781_; lean_object* v_fst_782_; lean_object* v_snd_783_; lean_object* v___x_784_; uint8_t v___x_785_; 
v_snd_781_ = lean_ctor_get(v___x_779_, 1);
lean_inc(v_snd_781_);
lean_dec_ref(v___x_779_);
v_fst_782_ = lean_ctor_get(v_snd_781_, 0);
lean_inc(v_fst_782_);
v_snd_783_ = lean_ctor_get(v_snd_781_, 1);
lean_inc(v_snd_783_);
lean_dec(v_snd_781_);
v___x_784_ = lean_unsigned_to_nat(3u);
v___x_785_ = lean_nat_dec_le(v___x_784_, v_snd_783_);
lean_dec(v_snd_783_);
if (v___x_785_ == 0)
{
lean_object* v_pos_786_; lean_object* v___x_788_; 
v_pos_786_ = lean_ctor_get(v_fst_782_, 0);
lean_inc(v_pos_786_);
lean_dec(v_fst_782_);
if (v_isShared_771_ == 0)
{
lean_ctor_set(v___x_770_, 0, v_pos_786_);
v___x_788_ = v___x_770_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_pos_786_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
else
{
lean_object* v___x_790_; 
lean_dec(v_fst_782_);
lean_del_object(v___x_770_);
v___x_790_ = lean_box(0);
return v___x_790_;
}
}
else
{
lean_object* v_val_791_; 
lean_inc_ref(v_fst_780_);
lean_dec_ref(v___x_779_);
lean_del_object(v___x_770_);
v_val_791_ = lean_ctor_get(v_fst_780_, 0);
lean_inc(v_val_791_);
lean_dec_ref_known(v_fst_780_, 1);
return v_val_791_;
}
}
}
}
}
else
{
lean_object* v___x_804_; 
lean_dec(v___x_767_);
lean_del_object(v___x_757_);
lean_dec_ref(v_after_754_);
v___x_804_ = lean_box(2);
return v___x_804_;
}
}
}
else
{
lean_object* v___x_805_; 
lean_del_object(v___x_757_);
lean_dec_ref(v_after_754_);
v___x_805_ = lean_box(2);
return v___x_805_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak___boxed(lean_object* v_s_807_, lean_object* v_line_808_){
_start:
{
lean_object* v_res_809_; 
v_res_809_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak(v_s_807_, v_line_808_);
lean_dec_ref(v_s_807_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak_spec__0(lean_object* v_s_810_, uint32_t v_val_811_, uint8_t v___x_812_, lean_object* v_inst_813_, lean_object* v_a_814_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak_spec__0___redArg(v_s_810_, v_val_811_, v___x_812_, v_a_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak_spec__0___boxed(lean_object* v_s_816_, lean_object* v_val_817_, lean_object* v___x_818_, lean_object* v_inst_819_, lean_object* v_a_820_){
_start:
{
uint32_t v_val_3016__boxed_821_; uint8_t v___x_3017__boxed_822_; lean_object* v_res_823_; 
v_val_3016__boxed_821_ = lean_unbox_uint32(v_val_817_);
lean_dec(v_val_817_);
v___x_3017__boxed_822_ = lean_unbox(v___x_818_);
v_res_823_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak_spec__0(v_s_816_, v_val_3016__boxed_821_, v___x_3017__boxed_822_, v_inst_819_, v_a_820_);
lean_dec_ref(v_s_816_);
return v_res_823_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_isThematicBreak(lean_object* v_s_824_, lean_object* v_line_825_){
_start:
{
lean_object* v___x_826_; 
v___x_826_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak(v_s_824_, v_line_825_);
if (lean_obj_tag(v___x_826_) == 0)
{
uint8_t v___x_827_; 
v___x_827_ = 1;
return v___x_827_;
}
else
{
uint8_t v___x_828_; 
lean_dec(v___x_826_);
v___x_828_ = 0;
return v___x_828_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_isThematicBreak___boxed(lean_object* v_s_829_, lean_object* v_line_830_){
_start:
{
uint8_t v_res_831_; lean_object* v_r_832_; 
v_res_831_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_isThematicBreak(v_s_829_, v_line_830_);
lean_dec_ref(v_s_829_);
v_r_832_ = lean_box(v_res_831_);
return v_r_832_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__0___redArg(lean_object* v_s_833_, uint32_t v_val_834_, lean_object* v_a_835_){
_start:
{
lean_object* v_fst_836_; lean_object* v_snd_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_877_; 
v_fst_836_ = lean_ctor_get(v_a_835_, 0);
v_snd_837_ = lean_ctor_get(v_a_835_, 1);
v_isSharedCheck_877_ = !lean_is_exclusive(v_a_835_);
if (v_isSharedCheck_877_ == 0)
{
v___x_839_ = v_a_835_;
v_isShared_840_ = v_isSharedCheck_877_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_snd_837_);
lean_inc(v_fst_836_);
lean_dec(v_a_835_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_877_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v_pos_841_; lean_object* v_stop_842_; lean_object* v_col_843_; lean_object* v___x_844_; lean_object* v___x_845_; uint8_t v___x_846_; 
v_pos_841_ = lean_ctor_get(v_fst_836_, 0);
v_stop_842_ = lean_ctor_get(v_fst_836_, 1);
v_col_843_ = lean_ctor_get(v_fst_836_, 2);
v___x_844_ = lean_unsigned_to_nat(1u);
v___x_845_ = lean_nat_add(v_pos_841_, v___x_844_);
v___x_846_ = lean_nat_dec_le(v___x_845_, v_stop_842_);
lean_dec(v___x_845_);
if (v___x_846_ == 0)
{
lean_object* v___x_848_; 
if (v_isShared_840_ == 0)
{
v___x_848_ = v___x_839_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v_fst_836_);
lean_ctor_set(v_reuseFailAlloc_849_, 1, v_snd_837_);
v___x_848_ = v_reuseFailAlloc_849_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
return v___x_848_;
}
}
else
{
lean_object* v_str_850_; lean_object* v_startInclusive_851_; lean_object* v___x_852_; uint32_t v___x_853_; uint8_t v___x_854_; 
v_str_850_ = lean_ctor_get(v_s_833_, 0);
v_startInclusive_851_ = lean_ctor_get(v_s_833_, 1);
v___x_852_ = lean_nat_add(v_startInclusive_851_, v_pos_841_);
v___x_853_ = lean_string_utf8_get_fast(v_str_850_, v___x_852_);
v___x_854_ = lean_uint32_dec_eq(v___x_853_, v_val_834_);
if (v___x_854_ == 0)
{
lean_object* v___x_856_; 
lean_dec(v___x_852_);
if (v_isShared_840_ == 0)
{
v___x_856_ = v___x_839_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_fst_836_);
lean_ctor_set(v_reuseFailAlloc_857_, 1, v_snd_837_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
else
{
lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_873_; 
lean_inc(v_col_843_);
lean_inc(v_stop_842_);
v_isSharedCheck_873_ = !lean_is_exclusive(v_fst_836_);
if (v_isSharedCheck_873_ == 0)
{
lean_object* v_unused_874_; lean_object* v_unused_875_; lean_object* v_unused_876_; 
v_unused_874_ = lean_ctor_get(v_fst_836_, 2);
lean_dec(v_unused_874_);
v_unused_875_ = lean_ctor_get(v_fst_836_, 1);
lean_dec(v_unused_875_);
v_unused_876_ = lean_ctor_get(v_fst_836_, 0);
lean_dec(v_unused_876_);
v___x_859_ = v_fst_836_;
v_isShared_860_ = v_isSharedCheck_873_;
goto v_resetjp_858_;
}
else
{
lean_dec(v_fst_836_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_873_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
uint8_t v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_867_; 
v___x_861_ = 0;
v___x_862_ = lean_nat_add(v_snd_837_, v___x_844_);
lean_dec(v_snd_837_);
v___x_863_ = lean_string_utf8_next_fast(v_str_850_, v___x_852_);
lean_dec(v___x_852_);
v___x_864_ = lean_nat_sub(v___x_863_, v_startInclusive_851_);
v___x_865_ = lean_nat_add(v_col_843_, v___x_844_);
lean_dec(v_col_843_);
if (v_isShared_860_ == 0)
{
lean_ctor_set(v___x_859_, 2, v___x_865_);
lean_ctor_set(v___x_859_, 0, v___x_864_);
v___x_867_ = v___x_859_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v___x_864_);
lean_ctor_set(v_reuseFailAlloc_872_, 1, v_stop_842_);
lean_ctor_set(v_reuseFailAlloc_872_, 2, v___x_865_);
v___x_867_ = v_reuseFailAlloc_872_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
lean_object* v___x_869_; 
lean_ctor_set_uint8(v___x_867_, sizeof(void*)*3, v___x_861_);
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 1, v___x_862_);
lean_ctor_set(v___x_839_, 0, v___x_867_);
v___x_869_ = v___x_839_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v___x_867_);
lean_ctor_set(v_reuseFailAlloc_871_, 1, v___x_862_);
v___x_869_ = v_reuseFailAlloc_871_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
v_a_835_ = v___x_869_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__0___redArg___boxed(lean_object* v_s_878_, lean_object* v_val_879_, lean_object* v_a_880_){
_start:
{
uint32_t v_val_2857__boxed_881_; lean_object* v_res_882_; 
v_val_2857__boxed_881_ = lean_unbox_uint32(v_val_879_);
lean_dec(v_val_879_);
v_res_882_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__0___redArg(v_s_878_, v_val_2857__boxed_881_, v_a_880_);
lean_dec_ref(v_s_878_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__1___redArg(lean_object* v_s_883_, lean_object* v_a_884_){
_start:
{
lean_object* v_fst_885_; lean_object* v_snd_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_919_; 
v_fst_885_ = lean_ctor_get(v_a_884_, 0);
v_snd_886_ = lean_ctor_get(v_a_884_, 1);
v_isSharedCheck_919_ = !lean_is_exclusive(v_a_884_);
if (v_isSharedCheck_919_ == 0)
{
v___x_888_ = v_a_884_;
v_isShared_889_ = v_isSharedCheck_919_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_snd_886_);
lean_inc(v_fst_885_);
lean_dec(v_a_884_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_919_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v_pos_890_; lean_object* v_stop_891_; lean_object* v_col_892_; lean_object* v___x_893_; lean_object* v___x_894_; uint8_t v___x_895_; 
v_pos_890_ = lean_ctor_get(v_fst_885_, 0);
v_stop_891_ = lean_ctor_get(v_fst_885_, 1);
v_col_892_ = lean_ctor_get(v_fst_885_, 2);
v___x_893_ = lean_unsigned_to_nat(1u);
v___x_894_ = lean_nat_add(v_pos_890_, v___x_893_);
v___x_895_ = lean_nat_dec_le(v___x_894_, v_stop_891_);
lean_dec(v___x_894_);
if (v___x_895_ == 0)
{
lean_object* v___x_897_; 
if (v_isShared_889_ == 0)
{
v___x_897_ = v___x_888_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_fst_885_);
lean_ctor_set(v_reuseFailAlloc_898_, 1, v_snd_886_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
else
{
lean_object* v_str_899_; lean_object* v_startInclusive_900_; lean_object* v___x_901_; uint32_t v___x_913_; uint32_t v___x_914_; uint8_t v___x_915_; 
v_str_899_ = lean_ctor_get(v_s_883_, 0);
v_startInclusive_900_ = lean_ctor_get(v_s_883_, 1);
v___x_901_ = lean_nat_add(v_startInclusive_900_, v_pos_890_);
v___x_913_ = lean_string_utf8_get_fast(v_str_899_, v___x_901_);
v___x_914_ = 32;
v___x_915_ = lean_uint32_dec_eq(v___x_913_, v___x_914_);
if (v___x_915_ == 0)
{
uint32_t v___x_916_; uint8_t v___x_917_; 
v___x_916_ = 9;
v___x_917_ = lean_uint32_dec_eq(v___x_913_, v___x_916_);
if (v___x_917_ == 0)
{
lean_object* v___x_918_; 
lean_dec(v___x_901_);
lean_del_object(v___x_888_);
v___x_918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_918_, 0, v_fst_885_);
lean_ctor_set(v___x_918_, 1, v_snd_886_);
return v___x_918_;
}
else
{
lean_inc(v_col_892_);
lean_inc(v_stop_891_);
lean_dec(v_fst_885_);
goto v___jp_902_;
}
}
else
{
lean_inc(v_col_892_);
lean_inc(v_stop_891_);
lean_dec(v_fst_885_);
goto v___jp_902_;
}
v___jp_902_:
{
uint8_t v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_910_; 
v___x_903_ = 0;
v___x_904_ = lean_nat_add(v_snd_886_, v___x_893_);
lean_dec(v_snd_886_);
v___x_905_ = lean_string_utf8_next_fast(v_str_899_, v___x_901_);
lean_dec(v___x_901_);
v___x_906_ = lean_nat_sub(v___x_905_, v_startInclusive_900_);
v___x_907_ = lean_nat_add(v_col_892_, v___x_893_);
lean_dec(v_col_892_);
v___x_908_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_908_, 0, v___x_906_);
lean_ctor_set(v___x_908_, 1, v_stop_891_);
lean_ctor_set(v___x_908_, 2, v___x_907_);
lean_ctor_set_uint8(v___x_908_, sizeof(void*)*3, v___x_903_);
if (v_isShared_889_ == 0)
{
lean_ctor_set(v___x_888_, 1, v___x_904_);
lean_ctor_set(v___x_888_, 0, v___x_908_);
v___x_910_ = v___x_888_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v___x_908_);
lean_ctor_set(v_reuseFailAlloc_912_, 1, v___x_904_);
v___x_910_ = v_reuseFailAlloc_912_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
v_a_884_ = v___x_910_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__1___redArg___boxed(lean_object* v_s_920_, lean_object* v_a_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__1___redArg(v_s_920_, v_a_921_);
lean_dec_ref(v_s_920_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f(lean_object* v_s_923_, lean_object* v_line_924_){
_start:
{
lean_object* v_after_925_; lean_object* v_indent_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_979_; 
v_after_925_ = lean_ctor_get(v_line_924_, 0);
v_indent_926_ = lean_ctor_get(v_line_924_, 1);
v_isSharedCheck_979_ = !lean_is_exclusive(v_line_924_);
if (v_isSharedCheck_979_ == 0)
{
v___x_928_ = v_line_924_;
v_isShared_929_ = v_isSharedCheck_979_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_indent_926_);
lean_inc(v_after_925_);
lean_dec(v_line_924_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_979_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_930_; uint8_t v___x_931_; 
v___x_930_ = lean_unsigned_to_nat(3u);
v___x_931_ = lean_nat_dec_le(v_indent_926_, v___x_930_);
lean_dec(v_indent_926_);
if (v___x_931_ == 0)
{
lean_object* v___x_932_; 
lean_del_object(v___x_928_);
lean_dec_ref(v_after_925_);
v___x_932_ = lean_box(0);
return v___x_932_;
}
else
{
lean_object* v_pos_933_; lean_object* v_stop_934_; lean_object* v___y_936_; lean_object* v___y_937_; lean_object* v___x_944_; lean_object* v___x_945_; uint8_t v___x_946_; 
v_pos_933_ = lean_ctor_get(v_after_925_, 0);
lean_inc(v_pos_933_);
v_stop_934_ = lean_ctor_get(v_after_925_, 1);
v___x_944_ = lean_unsigned_to_nat(1u);
v___x_945_ = lean_nat_add(v_pos_933_, v___x_944_);
v___x_946_ = lean_nat_dec_le(v___x_945_, v_stop_934_);
lean_dec(v___x_945_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; 
lean_dec(v_pos_933_);
lean_del_object(v___x_928_);
lean_dec_ref(v_after_925_);
v___x_947_ = lean_box(0);
return v___x_947_;
}
else
{
lean_object* v___x_948_; 
v___x_948_ = l_String_Slice_Pos_get_x3f(v_s_923_, v_pos_933_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v___x_949_; 
lean_dec(v_pos_933_);
lean_del_object(v___x_928_);
lean_dec_ref(v_after_925_);
v___x_949_ = lean_box(0);
return v___x_949_;
}
else
{
lean_object* v_val_950_; uint32_t v___x_951_; uint32_t v___x_952_; uint8_t v___x_953_; 
v_val_950_ = lean_ctor_get(v___x_948_, 0);
lean_inc(v_val_950_);
lean_dec_ref_known(v___x_948_, 1);
v___x_951_ = 61;
v___x_952_ = lean_unbox_uint32(v_val_950_);
v___x_953_ = lean_uint32_dec_eq(v___x_952_, v___x_951_);
if (v___x_953_ == 0)
{
uint32_t v___x_975_; uint32_t v___x_976_; uint8_t v___x_977_; 
v___x_975_ = 45;
v___x_976_ = lean_unbox_uint32(v_val_950_);
v___x_977_ = lean_uint32_dec_eq(v___x_976_, v___x_975_);
if (v___x_977_ == 0)
{
lean_object* v___x_978_; 
lean_dec(v_val_950_);
lean_dec(v_pos_933_);
lean_del_object(v___x_928_);
lean_dec_ref(v_after_925_);
v___x_978_ = lean_box(0);
return v___x_978_;
}
else
{
goto v___jp_954_;
}
}
else
{
goto v___jp_954_;
}
v___jp_954_:
{
lean_object* v_count_955_; lean_object* v___x_956_; uint32_t v___x_957_; lean_object* v___x_958_; lean_object* v_fst_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_973_; 
v_count_955_ = lean_unsigned_to_nat(0u);
v___x_956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_956_, 0, v_after_925_);
lean_ctor_set(v___x_956_, 1, v_count_955_);
v___x_957_ = lean_unbox_uint32(v_val_950_);
lean_dec(v_val_950_);
v___x_958_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__0___redArg(v_s_923_, v___x_957_, v___x_956_);
v_fst_959_ = lean_ctor_get(v___x_958_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_958_);
if (v_isSharedCheck_973_ == 0)
{
lean_object* v_unused_974_; 
v_unused_974_ = lean_ctor_get(v___x_958_, 1);
lean_dec(v_unused_974_);
v___x_961_ = v___x_958_;
v_isShared_962_ = v_isSharedCheck_973_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_fst_959_);
lean_dec(v___x_958_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_973_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_964_; 
lean_inc(v_fst_959_);
if (v_isShared_962_ == 0)
{
lean_ctor_set(v___x_961_, 1, v_count_955_);
v___x_964_ = v___x_961_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_fst_959_);
lean_ctor_set(v_reuseFailAlloc_972_, 1, v_count_955_);
v___x_964_ = v_reuseFailAlloc_972_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
lean_object* v___x_965_; lean_object* v_fst_966_; lean_object* v_pos_967_; lean_object* v_stop_968_; uint8_t v___x_969_; 
v___x_965_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__1___redArg(v_s_923_, v___x_964_);
v_fst_966_ = lean_ctor_get(v___x_965_, 0);
lean_inc(v_fst_966_);
lean_dec_ref(v___x_965_);
v_pos_967_ = lean_ctor_get(v_fst_966_, 0);
lean_inc(v_pos_967_);
v_stop_968_ = lean_ctor_get(v_fst_966_, 1);
lean_inc(v_stop_968_);
lean_dec(v_fst_966_);
v___x_969_ = lean_nat_dec_le(v_stop_968_, v_pos_967_);
lean_dec(v_pos_967_);
lean_dec(v_stop_968_);
if (v___x_969_ == 0)
{
lean_object* v___x_970_; 
lean_dec(v_fst_959_);
lean_dec(v_pos_933_);
lean_del_object(v___x_928_);
v___x_970_ = lean_box(0);
return v___x_970_;
}
else
{
if (v___x_953_ == 0)
{
lean_object* v___x_971_; 
v___x_971_ = lean_unsigned_to_nat(2u);
v___y_936_ = v_fst_959_;
v___y_937_ = v___x_971_;
goto v___jp_935_;
}
else
{
v___y_936_ = v_fst_959_;
v___y_937_ = v___x_944_;
goto v___jp_935_;
}
}
}
}
}
}
}
v___jp_935_:
{
lean_object* v_pos_938_; lean_object* v___x_939_; lean_object* v___x_941_; 
v_pos_938_ = lean_ctor_get(v___y_936_, 0);
lean_inc(v_pos_938_);
lean_dec(v___y_936_);
v___x_939_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_933_, v_pos_938_);
if (v_isShared_929_ == 0)
{
lean_ctor_set(v___x_928_, 1, v___x_939_);
lean_ctor_set(v___x_928_, 0, v___y_937_);
v___x_941_ = v___x_928_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v___y_937_);
lean_ctor_set(v_reuseFailAlloc_943_, 1, v___x_939_);
v___x_941_ = v_reuseFailAlloc_943_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
lean_object* v___x_942_; 
v___x_942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_942_, 0, v___x_941_);
return v___x_942_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f___boxed(lean_object* v_s_980_, lean_object* v_line_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f(v_s_980_, v_line_981_);
lean_dec_ref(v_s_980_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__0(lean_object* v_s_983_, uint32_t v_val_984_, lean_object* v_inst_985_, lean_object* v_a_986_){
_start:
{
lean_object* v___x_987_; 
v___x_987_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__0___redArg(v_s_983_, v_val_984_, v_a_986_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__0___boxed(lean_object* v_s_988_, lean_object* v_val_989_, lean_object* v_inst_990_, lean_object* v_a_991_){
_start:
{
uint32_t v_val_3080__boxed_992_; lean_object* v_res_993_; 
v_val_3080__boxed_992_ = lean_unbox_uint32(v_val_989_);
lean_dec(v_val_989_);
v_res_993_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__0(v_s_988_, v_val_3080__boxed_992_, v_inst_990_, v_a_991_);
lean_dec_ref(v_s_988_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__1(lean_object* v_s_994_, lean_object* v_inst_995_, lean_object* v_a_996_){
_start:
{
lean_object* v___x_997_; 
v___x_997_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__1___redArg(v_s_994_, v_a_996_);
return v___x_997_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__1___boxed(lean_object* v_s_998_, lean_object* v_inst_999_, lean_object* v_a_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__1(v_s_998_, v_inst_999_, v_a_1000_);
lean_dec_ref(v_s_998_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__0___redArg(lean_object* v_s_1002_, uint8_t v_val_1003_, lean_object* v_a_1004_){
_start:
{
lean_object* v_fst_1005_; lean_object* v_snd_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1047_; 
v_fst_1005_ = lean_ctor_get(v_a_1004_, 0);
v_snd_1006_ = lean_ctor_get(v_a_1004_, 1);
v_isSharedCheck_1047_ = !lean_is_exclusive(v_a_1004_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1008_ = v_a_1004_;
v_isShared_1009_ = v_isSharedCheck_1047_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_snd_1006_);
lean_inc(v_fst_1005_);
lean_dec(v_a_1004_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1047_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v_pos_1010_; lean_object* v_stop_1011_; lean_object* v_col_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; uint8_t v___x_1015_; 
v_pos_1010_ = lean_ctor_get(v_fst_1005_, 0);
v_stop_1011_ = lean_ctor_get(v_fst_1005_, 1);
v_col_1012_ = lean_ctor_get(v_fst_1005_, 2);
v___x_1013_ = lean_unsigned_to_nat(1u);
v___x_1014_ = lean_nat_add(v_pos_1010_, v___x_1013_);
v___x_1015_ = lean_nat_dec_le(v___x_1014_, v_stop_1011_);
lean_dec(v___x_1014_);
if (v___x_1015_ == 0)
{
lean_object* v___x_1017_; 
if (v_isShared_1009_ == 0)
{
v___x_1017_ = v___x_1008_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_fst_1005_);
lean_ctor_set(v_reuseFailAlloc_1018_, 1, v_snd_1006_);
v___x_1017_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
return v___x_1017_;
}
}
else
{
lean_object* v_str_1019_; lean_object* v_startInclusive_1020_; lean_object* v___x_1021_; uint32_t v___x_1022_; uint32_t v___x_1023_; uint8_t v___x_1024_; 
v_str_1019_ = lean_ctor_get(v_s_1002_, 0);
v_startInclusive_1020_ = lean_ctor_get(v_s_1002_, 1);
v___x_1021_ = lean_nat_add(v_startInclusive_1020_, v_pos_1010_);
v___x_1022_ = lean_string_utf8_get_fast(v_str_1019_, v___x_1021_);
v___x_1023_ = l_Lean_Markdown_FenceChar_toChar(v_val_1003_);
v___x_1024_ = lean_uint32_dec_eq(v___x_1022_, v___x_1023_);
if (v___x_1024_ == 0)
{
lean_object* v___x_1026_; 
lean_dec(v___x_1021_);
if (v_isShared_1009_ == 0)
{
v___x_1026_ = v___x_1008_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_fst_1005_);
lean_ctor_set(v_reuseFailAlloc_1027_, 1, v_snd_1006_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
else
{
lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1043_; 
lean_inc(v_col_1012_);
lean_inc(v_stop_1011_);
v_isSharedCheck_1043_ = !lean_is_exclusive(v_fst_1005_);
if (v_isSharedCheck_1043_ == 0)
{
lean_object* v_unused_1044_; lean_object* v_unused_1045_; lean_object* v_unused_1046_; 
v_unused_1044_ = lean_ctor_get(v_fst_1005_, 2);
lean_dec(v_unused_1044_);
v_unused_1045_ = lean_ctor_get(v_fst_1005_, 1);
lean_dec(v_unused_1045_);
v_unused_1046_ = lean_ctor_get(v_fst_1005_, 0);
lean_dec(v_unused_1046_);
v___x_1029_ = v_fst_1005_;
v_isShared_1030_ = v_isSharedCheck_1043_;
goto v_resetjp_1028_;
}
else
{
lean_dec(v_fst_1005_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1043_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
uint8_t v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1037_; 
v___x_1031_ = 0;
v___x_1032_ = lean_nat_add(v_snd_1006_, v___x_1013_);
lean_dec(v_snd_1006_);
v___x_1033_ = lean_string_utf8_next_fast(v_str_1019_, v___x_1021_);
lean_dec(v___x_1021_);
v___x_1034_ = lean_nat_sub(v___x_1033_, v_startInclusive_1020_);
v___x_1035_ = lean_nat_add(v_col_1012_, v___x_1013_);
lean_dec(v_col_1012_);
if (v_isShared_1030_ == 0)
{
lean_ctor_set(v___x_1029_, 2, v___x_1035_);
lean_ctor_set(v___x_1029_, 0, v___x_1034_);
v___x_1037_ = v___x_1029_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v___x_1034_);
lean_ctor_set(v_reuseFailAlloc_1042_, 1, v_stop_1011_);
lean_ctor_set(v_reuseFailAlloc_1042_, 2, v___x_1035_);
v___x_1037_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
lean_object* v___x_1039_; 
lean_ctor_set_uint8(v___x_1037_, sizeof(void*)*3, v___x_1031_);
if (v_isShared_1009_ == 0)
{
lean_ctor_set(v___x_1008_, 1, v___x_1032_);
lean_ctor_set(v___x_1008_, 0, v___x_1037_);
v___x_1039_ = v___x_1008_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v___x_1037_);
lean_ctor_set(v_reuseFailAlloc_1041_, 1, v___x_1032_);
v___x_1039_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
v_a_1004_ = v___x_1039_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__0___redArg___boxed(lean_object* v_s_1048_, lean_object* v_val_1049_, lean_object* v_a_1050_){
_start:
{
uint8_t v_val_5194__boxed_1051_; lean_object* v_res_1052_; 
v_val_5194__boxed_1051_ = lean_unbox(v_val_1049_);
v_res_1052_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__0___redArg(v_s_1048_, v_val_5194__boxed_1051_, v_a_1050_);
lean_dec_ref(v_s_1048_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__1___redArg(lean_object* v___x_1053_, lean_object* v___x_1054_, lean_object* v___x_1055_, lean_object* v_a_1056_, lean_object* v_b_1057_){
_start:
{
lean_object* v___x_1058_; uint8_t v_decide_1059_; 
v___x_1058_ = lean_nat_sub(v___x_1053_, v___x_1054_);
v_decide_1059_ = lean_nat_dec_eq(v_a_1056_, v___x_1058_);
lean_dec(v___x_1058_);
if (v_decide_1059_ == 0)
{
lean_object* v___x_1060_; uint32_t v___x_1061_; uint32_t v___x_1062_; uint8_t v___x_1063_; 
v___x_1060_ = lean_nat_add(v___x_1054_, v_a_1056_);
lean_dec(v_a_1056_);
v___x_1061_ = lean_string_utf8_get_fast(v___x_1055_, v___x_1060_);
v___x_1062_ = 96;
v___x_1063_ = lean_uint32_dec_eq(v___x_1061_, v___x_1062_);
if (v___x_1063_ == 0)
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1064_ = lean_box(0);
v___x_1065_ = lean_string_utf8_next_fast(v___x_1055_, v___x_1060_);
lean_dec(v___x_1060_);
v___x_1066_ = lean_nat_sub(v___x_1065_, v___x_1054_);
v_a_1056_ = v___x_1066_;
v_b_1057_ = v___x_1064_;
goto _start;
}
else
{
lean_object* v___x_1068_; 
lean_dec(v___x_1060_);
v___x_1068_ = lean_box(0);
return v___x_1068_;
}
}
else
{
lean_object* v___x_1069_; 
lean_dec(v_a_1056_);
v___x_1069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1069_, 0, v_b_1057_);
return v___x_1069_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__1___redArg___boxed(lean_object* v___x_1070_, lean_object* v___x_1071_, lean_object* v___x_1072_, lean_object* v_a_1073_, lean_object* v_b_1074_){
_start:
{
lean_object* v_res_1075_; 
v_res_1075_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__1___redArg(v___x_1070_, v___x_1071_, v___x_1072_, v_a_1073_, v_b_1074_);
lean_dec_ref(v___x_1072_);
lean_dec(v___x_1071_);
lean_dec(v___x_1070_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f(lean_object* v_s_1076_, lean_object* v_line_1077_){
_start:
{
lean_object* v_after_1078_; lean_object* v_indent_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1178_; 
v_after_1078_ = lean_ctor_get(v_line_1077_, 0);
v_indent_1079_ = lean_ctor_get(v_line_1077_, 1);
v_isSharedCheck_1178_ = !lean_is_exclusive(v_line_1077_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1081_ = v_line_1077_;
v_isShared_1082_ = v_isSharedCheck_1178_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_indent_1079_);
lean_inc(v_after_1078_);
lean_dec(v_line_1077_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1178_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1083_; uint8_t v___x_1084_; 
v___x_1083_ = lean_unsigned_to_nat(3u);
v___x_1084_ = lean_nat_dec_le(v_indent_1079_, v___x_1083_);
if (v___x_1084_ == 0)
{
lean_object* v___x_1085_; 
lean_del_object(v___x_1081_);
lean_dec(v_indent_1079_);
lean_dec_ref(v_after_1078_);
v___x_1085_ = lean_box(0);
return v___x_1085_;
}
else
{
lean_object* v_pos_1086_; lean_object* v_stop_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; uint8_t v___x_1090_; 
v_pos_1086_ = lean_ctor_get(v_after_1078_, 0);
lean_inc(v_pos_1086_);
v_stop_1087_ = lean_ctor_get(v_after_1078_, 1);
v___x_1088_ = lean_unsigned_to_nat(1u);
v___x_1089_ = lean_nat_add(v_pos_1086_, v___x_1088_);
v___x_1090_ = lean_nat_dec_le(v___x_1089_, v_stop_1087_);
lean_dec(v___x_1089_);
if (v___x_1090_ == 0)
{
lean_object* v___x_1091_; 
lean_dec(v_pos_1086_);
lean_del_object(v___x_1081_);
lean_dec(v_indent_1079_);
lean_dec_ref(v_after_1078_);
v___x_1091_ = lean_box(0);
return v___x_1091_;
}
else
{
lean_object* v___x_1092_; 
v___x_1092_ = l_String_Slice_Pos_get_x3f(v_s_1076_, v_pos_1086_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v___x_1093_; 
lean_dec(v_pos_1086_);
lean_del_object(v___x_1081_);
lean_dec(v_indent_1079_);
lean_dec_ref(v_after_1078_);
v___x_1093_ = lean_box(0);
return v___x_1093_;
}
else
{
lean_object* v_val_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1177_; 
v_val_1094_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1177_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1177_ == 0)
{
v___x_1096_ = v___x_1092_;
v_isShared_1097_ = v_isSharedCheck_1177_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_val_1094_);
lean_dec(v___x_1092_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1177_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
uint32_t v___x_1098_; lean_object* v___x_1099_; 
v___x_1098_ = lean_unbox_uint32(v_val_1094_);
lean_dec(v_val_1094_);
v___x_1099_ = l_Lean_Markdown_FenceChar_ofChar_x3f(v___x_1098_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v___x_1100_; 
lean_del_object(v___x_1096_);
lean_dec(v_pos_1086_);
lean_del_object(v___x_1081_);
lean_dec(v_indent_1079_);
lean_dec_ref(v_after_1078_);
v___x_1100_ = lean_box(0);
return v___x_1100_;
}
else
{
lean_object* v_val_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1176_; 
v_val_1101_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1103_ = v___x_1099_;
v_isShared_1104_ = v_isSharedCheck_1176_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_val_1101_);
lean_dec(v___x_1099_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1176_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v_count_1105_; lean_object* v___x_1107_; 
v_count_1105_ = lean_unsigned_to_nat(0u);
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 1, v_count_1105_);
v___x_1107_ = v___x_1081_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_after_1078_);
lean_ctor_set(v_reuseFailAlloc_1175_, 1, v_count_1105_);
v___x_1107_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
uint8_t v___x_1108_; lean_object* v___x_1109_; lean_object* v_fst_1110_; lean_object* v_snd_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1174_; 
v___x_1108_ = lean_unbox(v_val_1101_);
v___x_1109_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__0___redArg(v_s_1076_, v___x_1108_, v___x_1107_);
v_fst_1110_ = lean_ctor_get(v___x_1109_, 0);
v_snd_1111_ = lean_ctor_get(v___x_1109_, 1);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1109_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1113_ = v___x_1109_;
v_isShared_1114_ = v_isSharedCheck_1174_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_snd_1111_);
lean_inc(v_fst_1110_);
lean_dec(v___x_1109_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1174_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
uint8_t v___x_1115_; 
v___x_1115_ = lean_nat_dec_le(v___x_1083_, v_snd_1111_);
if (v___x_1115_ == 0)
{
lean_object* v___x_1116_; 
lean_del_object(v___x_1113_);
lean_dec(v_snd_1111_);
lean_dec(v_fst_1110_);
lean_del_object(v___x_1103_);
lean_dec(v_val_1101_);
lean_del_object(v___x_1096_);
lean_dec(v_pos_1086_);
lean_dec(v_indent_1079_);
v___x_1116_ = lean_box(0);
return v___x_1116_;
}
else
{
lean_object* v_pos_1117_; lean_object* v___x_1119_; 
v_pos_1117_ = lean_ctor_get(v_fst_1110_, 0);
lean_inc(v_pos_1117_);
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 1, v_count_1105_);
v___x_1119_ = v___x_1113_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_fst_1110_);
lean_ctor_set(v_reuseFailAlloc_1173_, 1, v_count_1105_);
v___x_1119_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
lean_object* v___x_1120_; lean_object* v_fst_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1171_; 
v___x_1120_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__1___redArg(v_s_1076_, v___x_1119_);
v_fst_1121_ = lean_ctor_get(v___x_1120_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1171_ == 0)
{
lean_object* v_unused_1172_; 
v_unused_1172_ = lean_ctor_get(v___x_1120_, 1);
lean_dec(v_unused_1172_);
v___x_1123_ = v___x_1120_;
v_isShared_1124_ = v_isSharedCheck_1171_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_fst_1121_);
lean_dec(v___x_1120_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1171_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v_pos_1125_; lean_object* v_stop_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1169_; 
v_pos_1125_ = lean_ctor_get(v_fst_1121_, 0);
v_stop_1126_ = lean_ctor_get(v_fst_1121_, 1);
v_isSharedCheck_1169_ = !lean_is_exclusive(v_fst_1121_);
if (v_isSharedCheck_1169_ == 0)
{
lean_object* v_unused_1170_; 
v_unused_1170_ = lean_ctor_get(v_fst_1121_, 2);
lean_dec(v_unused_1170_);
v___x_1128_ = v_fst_1121_;
v_isShared_1129_ = v_isSharedCheck_1169_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_stop_1126_);
lean_inc(v_pos_1125_);
lean_dec(v_fst_1121_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1169_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1130_; lean_object* v___y_1132_; lean_object* v___x_1143_; lean_object* v___x_1144_; uint8_t v___x_1157_; uint8_t v___x_1158_; uint8_t v___x_1159_; 
v___x_1130_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_1086_, v_pos_1117_);
v___x_1143_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_1125_, v_stop_1126_);
v___x_1144_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs(v_s_1076_, v___x_1143_);
v___x_1157_ = 0;
v___x_1158_ = lean_unbox(v_val_1101_);
v___x_1159_ = l_Lean_Markdown_instBEqFenceChar_beq(v___x_1158_, v___x_1157_);
if (v___x_1159_ == 0)
{
goto v___jp_1145_;
}
else
{
lean_object* v_startInclusive_1160_; lean_object* v_endExclusive_1161_; lean_object* v_str_1162_; lean_object* v_startInclusive_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
v_startInclusive_1160_ = lean_ctor_get(v___x_1144_, 0);
v_endExclusive_1161_ = lean_ctor_get(v___x_1144_, 1);
v_str_1162_ = lean_ctor_get(v_s_1076_, 0);
v_startInclusive_1163_ = lean_ctor_get(v_s_1076_, 1);
v___x_1164_ = lean_nat_add(v_startInclusive_1163_, v_startInclusive_1160_);
v___x_1165_ = lean_nat_add(v_startInclusive_1163_, v_endExclusive_1161_);
v___x_1166_ = lean_box(0);
v___x_1167_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__1___redArg(v___x_1165_, v___x_1164_, v_str_1162_, v_count_1105_, v___x_1166_);
lean_dec(v___x_1164_);
lean_dec(v___x_1165_);
if (lean_obj_tag(v___x_1167_) == 0)
{
lean_object* v___x_1168_; 
lean_dec_ref(v___x_1144_);
lean_dec_ref(v___x_1130_);
lean_del_object(v___x_1128_);
lean_del_object(v___x_1123_);
lean_dec(v_snd_1111_);
lean_del_object(v___x_1103_);
lean_dec(v_val_1101_);
lean_del_object(v___x_1096_);
lean_dec(v_indent_1079_);
v___x_1168_ = lean_box(0);
return v___x_1168_;
}
else
{
lean_dec_ref_known(v___x_1167_, 1);
goto v___jp_1145_;
}
}
v___jp_1131_:
{
lean_object* v___x_1134_; 
if (v_isShared_1129_ == 0)
{
lean_ctor_set(v___x_1128_, 2, v___y_1132_);
lean_ctor_set(v___x_1128_, 1, v_indent_1079_);
lean_ctor_set(v___x_1128_, 0, v_snd_1111_);
v___x_1134_ = v___x_1128_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_snd_1111_);
lean_ctor_set(v_reuseFailAlloc_1142_, 1, v_indent_1079_);
lean_ctor_set(v_reuseFailAlloc_1142_, 2, v___y_1132_);
v___x_1134_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
uint8_t v___x_1135_; lean_object* v___x_1137_; 
v___x_1135_ = lean_unbox(v_val_1101_);
lean_dec(v_val_1101_);
lean_ctor_set_uint8(v___x_1134_, sizeof(void*)*3, v___x_1135_);
if (v_isShared_1124_ == 0)
{
lean_ctor_set(v___x_1123_, 1, v___x_1130_);
lean_ctor_set(v___x_1123_, 0, v___x_1134_);
v___x_1137_ = v___x_1123_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v___x_1134_);
lean_ctor_set(v_reuseFailAlloc_1141_, 1, v___x_1130_);
v___x_1137_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
lean_object* v___x_1139_; 
if (v_isShared_1104_ == 0)
{
lean_ctor_set(v___x_1103_, 0, v___x_1137_);
v___x_1139_ = v___x_1103_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v___x_1137_);
v___x_1139_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
return v___x_1139_;
}
}
}
}
v___jp_1145_:
{
lean_object* v_startInclusive_1146_; lean_object* v_endExclusive_1147_; lean_object* v_startInclusive_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; uint8_t v___x_1152_; 
v_startInclusive_1146_ = lean_ctor_get(v___x_1144_, 0);
v_endExclusive_1147_ = lean_ctor_get(v___x_1144_, 1);
v_startInclusive_1148_ = lean_ctor_get(v_s_1076_, 1);
v___x_1149_ = lean_nat_add(v_startInclusive_1148_, v_startInclusive_1146_);
v___x_1150_ = lean_nat_add(v_startInclusive_1148_, v_endExclusive_1147_);
v___x_1151_ = lean_nat_sub(v___x_1150_, v___x_1149_);
lean_dec(v___x_1149_);
lean_dec(v___x_1150_);
v___x_1152_ = lean_nat_dec_eq(v___x_1151_, v_count_1105_);
lean_dec(v___x_1151_);
if (v___x_1152_ == 0)
{
lean_object* v___x_1154_; 
if (v_isShared_1097_ == 0)
{
lean_ctor_set(v___x_1096_, 0, v___x_1144_);
v___x_1154_ = v___x_1096_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v___x_1144_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
v___y_1132_ = v___x_1154_;
goto v___jp_1131_;
}
}
else
{
lean_object* v___x_1156_; 
lean_dec_ref(v___x_1144_);
lean_del_object(v___x_1096_);
v___x_1156_ = lean_box(0);
v___y_1132_ = v___x_1156_;
goto v___jp_1131_;
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
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f___boxed(lean_object* v_s_1179_, lean_object* v_line_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f(v_s_1179_, v_line_1180_);
lean_dec_ref(v_s_1179_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__0(lean_object* v_s_1182_, uint8_t v_val_1183_, lean_object* v_inst_1184_, lean_object* v_a_1185_){
_start:
{
lean_object* v___x_1186_; 
v___x_1186_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__0___redArg(v_s_1182_, v_val_1183_, v_a_1185_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__0___boxed(lean_object* v_s_1187_, lean_object* v_val_1188_, lean_object* v_inst_1189_, lean_object* v_a_1190_){
_start:
{
uint8_t v_val_5473__boxed_1191_; lean_object* v_res_1192_; 
v_val_5473__boxed_1191_ = lean_unbox(v_val_1188_);
v_res_1192_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__0(v_s_1187_, v_val_5473__boxed_1191_, v_inst_1189_, v_a_1190_);
lean_dec_ref(v_s_1187_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__1(lean_object* v___x_1193_, lean_object* v___x_1194_, lean_object* v___x_1195_, lean_object* v___x_1196_, lean_object* v_inst_1197_, lean_object* v_R_1198_, lean_object* v_a_1199_, lean_object* v_b_1200_, lean_object* v_c_1201_){
_start:
{
lean_object* v___x_1202_; 
v___x_1202_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__1___redArg(v___x_1193_, v___x_1194_, v___x_1196_, v_a_1199_, v_b_1200_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__1___boxed(lean_object* v___x_1203_, lean_object* v___x_1204_, lean_object* v___x_1205_, lean_object* v___x_1206_, lean_object* v_inst_1207_, lean_object* v_R_1208_, lean_object* v_a_1209_, lean_object* v_b_1210_, lean_object* v_c_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f_spec__1(v___x_1203_, v___x_1204_, v___x_1205_, v___x_1206_, v_inst_1207_, v_R_1208_, v_a_1209_, v_b_1210_, v_c_1211_);
lean_dec_ref(v___x_1206_);
lean_dec_ref(v___x_1205_);
lean_dec(v___x_1204_);
lean_dec(v___x_1203_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceClose_x3f(lean_object* v_s_1213_, lean_object* v_line_1214_, lean_object* v_info_1215_){
_start:
{
lean_object* v_after_1216_; lean_object* v_indent_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1254_; 
v_after_1216_ = lean_ctor_get(v_line_1214_, 0);
v_indent_1217_ = lean_ctor_get(v_line_1214_, 1);
v_isSharedCheck_1254_ = !lean_is_exclusive(v_line_1214_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1219_ = v_line_1214_;
v_isShared_1220_ = v_isSharedCheck_1254_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_indent_1217_);
lean_inc(v_after_1216_);
lean_dec(v_line_1214_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1254_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1221_; uint8_t v___x_1222_; 
v___x_1221_ = lean_unsigned_to_nat(3u);
v___x_1222_ = lean_nat_dec_le(v_indent_1217_, v___x_1221_);
lean_dec(v_indent_1217_);
if (v___x_1222_ == 0)
{
lean_object* v___x_1223_; 
lean_del_object(v___x_1219_);
lean_dec_ref(v_after_1216_);
v___x_1223_ = lean_box(0);
return v___x_1223_;
}
else
{
lean_object* v_pos_1224_; lean_object* v_stop_1225_; lean_object* v___y_1227_; lean_object* v___x_1249_; lean_object* v___x_1250_; uint8_t v___x_1251_; 
v_pos_1224_ = lean_ctor_get(v_after_1216_, 0);
lean_inc(v_pos_1224_);
v_stop_1225_ = lean_ctor_get(v_after_1216_, 1);
v___x_1249_ = lean_unsigned_to_nat(1u);
v___x_1250_ = lean_nat_add(v_pos_1224_, v___x_1249_);
v___x_1251_ = lean_nat_dec_le(v___x_1250_, v_stop_1225_);
lean_dec(v___x_1250_);
if (v___x_1251_ == 0)
{
lean_object* v___x_1252_; 
v___x_1252_ = lean_box(0);
v___y_1227_ = v___x_1252_;
goto v___jp_1226_;
}
else
{
lean_object* v___x_1253_; 
v___x_1253_ = l_String_Slice_Pos_get_x3f(v_s_1213_, v_pos_1224_);
v___y_1227_ = v___x_1253_;
goto v___jp_1226_;
}
v___jp_1226_:
{
uint8_t v_fenceChar_1228_; lean_object* v_fenceLen_1229_; uint32_t v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; uint8_t v___x_1233_; 
v_fenceChar_1228_ = lean_ctor_get_uint8(v_info_1215_, sizeof(void*)*3);
v_fenceLen_1229_ = lean_ctor_get(v_info_1215_, 0);
v___x_1230_ = l_Lean_Markdown_FenceChar_toChar(v_fenceChar_1228_);
v___x_1231_ = lean_box_uint32(v___x_1230_);
v___x_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
v___x_1233_ = l_instBEqOption_beq___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__0(v___y_1227_, v___x_1232_);
lean_dec_ref_known(v___x_1232_, 1);
lean_dec(v___y_1227_);
if (v___x_1233_ == 0)
{
lean_object* v___x_1234_; 
lean_dec(v_pos_1224_);
lean_del_object(v___x_1219_);
lean_dec_ref(v_after_1216_);
v___x_1234_ = lean_box(0);
return v___x_1234_;
}
else
{
lean_object* v_count_1235_; lean_object* v___x_1237_; 
v_count_1235_ = lean_unsigned_to_nat(0u);
if (v_isShared_1220_ == 0)
{
lean_ctor_set(v___x_1219_, 1, v_count_1235_);
v___x_1237_ = v___x_1219_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v_after_1216_);
lean_ctor_set(v_reuseFailAlloc_1248_, 1, v_count_1235_);
v___x_1237_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
lean_object* v___x_1238_; lean_object* v_fst_1239_; lean_object* v_snd_1240_; uint8_t v___x_1241_; 
v___x_1238_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f_spec__0___redArg(v_s_1213_, v___x_1230_, v___x_1237_);
v_fst_1239_ = lean_ctor_get(v___x_1238_, 0);
lean_inc(v_fst_1239_);
v_snd_1240_ = lean_ctor_get(v___x_1238_, 1);
lean_inc(v_snd_1240_);
lean_dec_ref(v___x_1238_);
v___x_1241_ = lean_nat_dec_le(v_fenceLen_1229_, v_snd_1240_);
lean_dec(v_snd_1240_);
if (v___x_1241_ == 0)
{
lean_object* v___x_1242_; 
lean_dec(v_fst_1239_);
lean_dec(v_pos_1224_);
v___x_1242_ = lean_box(0);
return v___x_1242_;
}
else
{
uint8_t v___x_1243_; 
lean_inc(v_fst_1239_);
v___x_1243_ = l_Lean_Markdown_Cursor_isBlank(v_s_1213_, v_fst_1239_);
if (v___x_1243_ == 0)
{
lean_object* v___x_1244_; 
lean_dec(v_fst_1239_);
lean_dec(v_pos_1224_);
v___x_1244_ = lean_box(0);
return v___x_1244_;
}
else
{
lean_object* v_pos_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; 
v_pos_1245_ = lean_ctor_get(v_fst_1239_, 0);
lean_inc(v_pos_1245_);
lean_dec(v_fst_1239_);
v___x_1246_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_1224_, v_pos_1245_);
v___x_1247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1247_, 0, v___x_1246_);
return v___x_1247_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceClose_x3f___boxed(lean_object* v_s_1255_, lean_object* v_line_1256_, lean_object* v_info_1257_){
_start:
{
lean_object* v_res_1258_; 
v_res_1258_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceClose_x3f(v_s_1255_, v_line_1256_, v_info_1257_);
lean_dec_ref(v_info_1257_);
lean_dec_ref(v_s_1255_);
return v_res_1258_;
}
}
static lean_object* _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_1259_; lean_object* v___x_1260_; 
v___x_1259_ = 62;
v___x_1260_ = lean_box_uint32(v___x_1259_);
return v___x_1260_;
}
}
static lean_object* _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f___closed__0(void){
_start:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1261_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f___closed__0___boxed__const__1;
v___x_1262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1261_);
return v___x_1262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f(lean_object* v_s_1263_, lean_object* v_line_1264_){
_start:
{
lean_object* v___y_1266_; lean_object* v___y_1267_; lean_object* v___y_1271_; lean_object* v___y_1272_; lean_object* v___y_1273_; lean_object* v___y_1274_; lean_object* v___y_1275_; lean_object* v___y_1288_; lean_object* v___y_1289_; lean_object* v_after_1292_; lean_object* v_indent_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1366_; 
v_after_1292_ = lean_ctor_get(v_line_1264_, 0);
v_indent_1293_ = lean_ctor_get(v_line_1264_, 1);
v_isSharedCheck_1366_ = !lean_is_exclusive(v_line_1264_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1295_ = v_line_1264_;
v_isShared_1296_ = v_isSharedCheck_1366_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_indent_1293_);
lean_inc(v_after_1292_);
lean_dec(v_line_1264_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1366_;
goto v_resetjp_1294_;
}
v___jp_1265_:
{
lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1268_, 0, v___y_1266_);
lean_ctor_set(v___x_1268_, 1, v___y_1267_);
v___x_1269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1268_);
return v___x_1269_;
}
v___jp_1270_:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; uint8_t v___x_1278_; 
v___x_1276_ = lean_unsigned_to_nat(1u);
v___x_1277_ = lean_nat_add(v___y_1271_, v___x_1276_);
v___x_1278_ = lean_nat_dec_le(v___x_1277_, v___y_1273_);
lean_dec(v___x_1277_);
if (v___x_1278_ == 0)
{
lean_dec(v___y_1273_);
lean_dec(v___y_1272_);
lean_dec(v___y_1271_);
v___y_1266_ = v___y_1275_;
v___y_1267_ = v___y_1274_;
goto v___jp_1265_;
}
else
{
lean_object* v_str_1279_; lean_object* v_startInclusive_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; uint8_t v___x_1285_; lean_object* v___x_1286_; 
lean_dec_ref(v___y_1274_);
v_str_1279_ = lean_ctor_get(v_s_1263_, 0);
v_startInclusive_1280_ = lean_ctor_get(v_s_1263_, 1);
v___x_1281_ = lean_nat_add(v_startInclusive_1280_, v___y_1271_);
lean_dec(v___y_1271_);
v___x_1282_ = lean_string_utf8_next_fast(v_str_1279_, v___x_1281_);
lean_dec(v___x_1281_);
v___x_1283_ = lean_nat_sub(v___x_1282_, v_startInclusive_1280_);
v___x_1284_ = lean_nat_add(v___y_1272_, v___x_1276_);
lean_dec(v___y_1272_);
v___x_1285_ = 0;
v___x_1286_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1286_, 0, v___x_1283_);
lean_ctor_set(v___x_1286_, 1, v___y_1273_);
lean_ctor_set(v___x_1286_, 2, v___x_1284_);
lean_ctor_set_uint8(v___x_1286_, sizeof(void*)*3, v___x_1285_);
v___y_1266_ = v___y_1275_;
v___y_1267_ = v___x_1286_;
goto v___jp_1265_;
}
}
v___jp_1287_:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___y_1289_);
lean_ctor_set(v___x_1290_, 1, v___y_1288_);
v___x_1291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1290_);
return v___x_1291_;
}
v_resetjp_1294_:
{
lean_object* v___x_1297_; uint8_t v___x_1298_; 
v___x_1297_ = lean_unsigned_to_nat(3u);
v___x_1298_ = lean_nat_dec_le(v_indent_1293_, v___x_1297_);
lean_dec(v_indent_1293_);
if (v___x_1298_ == 0)
{
lean_object* v___x_1299_; 
lean_del_object(v___x_1295_);
lean_dec_ref(v_after_1292_);
v___x_1299_ = lean_box(0);
return v___x_1299_;
}
else
{
lean_object* v_pos_1300_; lean_object* v_stop_1301_; lean_object* v_col_1302_; lean_object* v___y_1304_; lean_object* v_pos_1305_; lean_object* v_stop_1306_; lean_object* v_col_1307_; lean_object* v___y_1337_; lean_object* v___x_1361_; lean_object* v___x_1362_; uint8_t v___x_1363_; 
v_pos_1300_ = lean_ctor_get(v_after_1292_, 0);
lean_inc(v_pos_1300_);
v_stop_1301_ = lean_ctor_get(v_after_1292_, 1);
lean_inc(v_stop_1301_);
v_col_1302_ = lean_ctor_get(v_after_1292_, 2);
lean_inc(v_col_1302_);
v___x_1361_ = lean_unsigned_to_nat(1u);
v___x_1362_ = lean_nat_add(v_pos_1300_, v___x_1361_);
v___x_1363_ = lean_nat_dec_le(v___x_1362_, v_stop_1301_);
lean_dec(v___x_1362_);
if (v___x_1363_ == 0)
{
lean_object* v___x_1364_; 
v___x_1364_ = lean_box(0);
v___y_1337_ = v___x_1364_;
goto v___jp_1336_;
}
else
{
lean_object* v___x_1365_; 
v___x_1365_ = l_String_Slice_Pos_get_x3f(v_s_1263_, v_pos_1300_);
v___y_1337_ = v___x_1365_;
goto v___jp_1336_;
}
v___jp_1303_:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; uint8_t v___x_1311_; 
lean_inc(v_pos_1305_);
v___x_1308_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_1300_, v_pos_1305_);
v___x_1309_ = lean_unsigned_to_nat(1u);
v___x_1310_ = lean_nat_add(v_pos_1305_, v___x_1309_);
v___x_1311_ = lean_nat_dec_le(v___x_1310_, v_stop_1306_);
lean_dec(v___x_1310_);
if (v___x_1311_ == 0)
{
lean_dec(v_col_1307_);
lean_dec(v_stop_1306_);
lean_dec(v_pos_1305_);
lean_del_object(v___x_1295_);
v___y_1288_ = v___y_1304_;
v___y_1289_ = v___x_1308_;
goto v___jp_1287_;
}
else
{
lean_object* v___x_1312_; 
v___x_1312_ = l_String_Slice_Pos_get_x3f(v_s_1263_, v_pos_1305_);
if (lean_obj_tag(v___x_1312_) == 1)
{
lean_object* v_val_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1335_; 
v_val_1313_ = lean_ctor_get(v___x_1312_, 0);
v_isSharedCheck_1335_ = !lean_is_exclusive(v___x_1312_);
if (v_isSharedCheck_1335_ == 0)
{
v___x_1315_ = v___x_1312_;
v_isShared_1316_ = v_isSharedCheck_1335_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_val_1313_);
lean_dec(v___x_1312_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1335_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
uint32_t v___x_1317_; uint32_t v___x_1318_; uint8_t v___x_1319_; 
v___x_1317_ = 32;
v___x_1318_ = lean_unbox_uint32(v_val_1313_);
v___x_1319_ = lean_uint32_dec_eq(v___x_1318_, v___x_1317_);
if (v___x_1319_ == 0)
{
uint32_t v___x_1320_; uint32_t v___x_1321_; uint8_t v___x_1322_; 
v___x_1320_ = 9;
v___x_1321_ = lean_unbox_uint32(v_val_1313_);
lean_dec(v_val_1313_);
v___x_1322_ = lean_uint32_dec_eq(v___x_1321_, v___x_1320_);
if (v___x_1322_ == 0)
{
lean_del_object(v___x_1315_);
lean_dec(v_col_1307_);
lean_dec(v_stop_1306_);
lean_dec(v_pos_1305_);
lean_del_object(v___x_1295_);
v___y_1288_ = v___y_1304_;
v___y_1289_ = v___x_1308_;
goto v___jp_1287_;
}
else
{
lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; uint8_t v___x_1326_; 
v___x_1323_ = lean_unsigned_to_nat(4u);
v___x_1324_ = lean_nat_mod(v_col_1307_, v___x_1323_);
v___x_1325_ = lean_nat_sub(v___x_1323_, v___x_1324_);
lean_dec(v___x_1324_);
v___x_1326_ = lean_nat_dec_eq(v___x_1325_, v___x_1309_);
lean_dec(v___x_1325_);
if (v___x_1326_ == 0)
{
lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1330_; 
lean_dec_ref(v___y_1304_);
v___x_1327_ = lean_nat_add(v_col_1307_, v___x_1309_);
lean_dec(v_col_1307_);
v___x_1328_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1328_, 0, v_pos_1305_);
lean_ctor_set(v___x_1328_, 1, v_stop_1306_);
lean_ctor_set(v___x_1328_, 2, v___x_1327_);
lean_ctor_set_uint8(v___x_1328_, sizeof(void*)*3, v___x_1322_);
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 1, v___x_1328_);
lean_ctor_set(v___x_1295_, 0, v___x_1308_);
v___x_1330_ = v___x_1295_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v___x_1308_);
lean_ctor_set(v_reuseFailAlloc_1334_, 1, v___x_1328_);
v___x_1330_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
lean_object* v___x_1332_; 
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 0, v___x_1330_);
v___x_1332_ = v___x_1315_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v___x_1330_);
v___x_1332_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
return v___x_1332_;
}
}
}
else
{
lean_del_object(v___x_1315_);
lean_del_object(v___x_1295_);
v___y_1271_ = v_pos_1305_;
v___y_1272_ = v_col_1307_;
v___y_1273_ = v_stop_1306_;
v___y_1274_ = v___y_1304_;
v___y_1275_ = v___x_1308_;
goto v___jp_1270_;
}
}
}
else
{
lean_del_object(v___x_1315_);
lean_dec(v_val_1313_);
lean_del_object(v___x_1295_);
v___y_1271_ = v_pos_1305_;
v___y_1272_ = v_col_1307_;
v___y_1273_ = v_stop_1306_;
v___y_1274_ = v___y_1304_;
v___y_1275_ = v___x_1308_;
goto v___jp_1270_;
}
}
}
else
{
lean_dec(v___x_1312_);
lean_dec(v_col_1307_);
lean_dec(v_stop_1306_);
lean_dec(v_pos_1305_);
lean_del_object(v___x_1295_);
v___y_1288_ = v___y_1304_;
v___y_1289_ = v___x_1308_;
goto v___jp_1287_;
}
}
}
v___jp_1336_:
{
lean_object* v___x_1338_; uint8_t v___x_1339_; 
v___x_1338_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f___closed__0);
v___x_1339_ = l_instBEqOption_beq___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__0(v___y_1337_, v___x_1338_);
lean_dec(v___y_1337_);
if (v___x_1339_ == 0)
{
lean_object* v___x_1340_; 
lean_dec(v_col_1302_);
lean_dec(v_stop_1301_);
lean_dec(v_pos_1300_);
lean_del_object(v___x_1295_);
lean_dec_ref(v_after_1292_);
v___x_1340_ = lean_box(0);
return v___x_1340_;
}
else
{
lean_object* v___x_1341_; lean_object* v___x_1342_; uint8_t v___x_1343_; 
v___x_1341_ = lean_unsigned_to_nat(1u);
v___x_1342_ = lean_nat_add(v_pos_1300_, v___x_1341_);
v___x_1343_ = lean_nat_dec_le(v___x_1342_, v_stop_1301_);
lean_dec(v___x_1342_);
if (v___x_1343_ == 0)
{
lean_inc(v_pos_1300_);
v___y_1304_ = v_after_1292_;
v_pos_1305_ = v_pos_1300_;
v_stop_1306_ = v_stop_1301_;
v_col_1307_ = v_col_1302_;
goto v___jp_1303_;
}
else
{
lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1357_; 
v_isSharedCheck_1357_ = !lean_is_exclusive(v_after_1292_);
if (v_isSharedCheck_1357_ == 0)
{
lean_object* v_unused_1358_; lean_object* v_unused_1359_; lean_object* v_unused_1360_; 
v_unused_1358_ = lean_ctor_get(v_after_1292_, 2);
lean_dec(v_unused_1358_);
v_unused_1359_ = lean_ctor_get(v_after_1292_, 1);
lean_dec(v_unused_1359_);
v_unused_1360_ = lean_ctor_get(v_after_1292_, 0);
lean_dec(v_unused_1360_);
v___x_1345_ = v_after_1292_;
v_isShared_1346_ = v_isSharedCheck_1357_;
goto v_resetjp_1344_;
}
else
{
lean_dec(v_after_1292_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1357_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v_str_1347_; lean_object* v_startInclusive_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; uint8_t v___x_1353_; lean_object* v___x_1355_; 
v_str_1347_ = lean_ctor_get(v_s_1263_, 0);
v_startInclusive_1348_ = lean_ctor_get(v_s_1263_, 1);
v___x_1349_ = lean_nat_add(v_startInclusive_1348_, v_pos_1300_);
v___x_1350_ = lean_string_utf8_next_fast(v_str_1347_, v___x_1349_);
lean_dec(v___x_1349_);
v___x_1351_ = lean_nat_sub(v___x_1350_, v_startInclusive_1348_);
v___x_1352_ = lean_nat_add(v_col_1302_, v___x_1341_);
lean_dec(v_col_1302_);
v___x_1353_ = 0;
lean_inc(v___x_1352_);
lean_inc(v_stop_1301_);
lean_inc(v___x_1351_);
if (v_isShared_1346_ == 0)
{
lean_ctor_set(v___x_1345_, 2, v___x_1352_);
lean_ctor_set(v___x_1345_, 0, v___x_1351_);
v___x_1355_ = v___x_1345_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v___x_1351_);
lean_ctor_set(v_reuseFailAlloc_1356_, 1, v_stop_1301_);
lean_ctor_set(v_reuseFailAlloc_1356_, 2, v___x_1352_);
v___x_1355_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
lean_ctor_set_uint8(v___x_1355_, sizeof(void*)*3, v___x_1353_);
v___y_1304_ = v___x_1355_;
v_pos_1305_ = v___x_1351_;
v_stop_1306_ = v_stop_1301_;
v_col_1307_ = v___x_1352_;
goto v___jp_1303_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f___boxed(lean_object* v_s_1367_, lean_object* v_line_1368_){
_start:
{
lean_object* v_res_1369_; 
v_res_1369_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f(v_s_1367_, v_line_1368_);
lean_dec_ref(v_s_1367_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f___lam__0(lean_object* v_s_1370_, lean_object* v_afterMarker_1371_){
_start:
{
lean_object* v___y_1373_; lean_object* v_pos_1388_; lean_object* v_stop_1389_; lean_object* v_col_1390_; uint8_t v_partialTab_1391_; uint8_t v___x_1392_; 
v_pos_1388_ = lean_ctor_get(v_afterMarker_1371_, 0);
v_stop_1389_ = lean_ctor_get(v_afterMarker_1371_, 1);
v_col_1390_ = lean_ctor_get(v_afterMarker_1371_, 2);
v_partialTab_1391_ = lean_ctor_get_uint8(v_afterMarker_1371_, sizeof(void*)*3);
v___x_1392_ = lean_nat_dec_le(v_stop_1389_, v_pos_1388_);
if (v___x_1392_ == 0)
{
lean_object* v___x_1393_; lean_object* v___x_1394_; uint8_t v___x_1395_; 
v___x_1393_ = lean_unsigned_to_nat(1u);
v___x_1394_ = lean_nat_add(v_pos_1388_, v___x_1393_);
v___x_1395_ = lean_nat_dec_le(v___x_1394_, v_stop_1389_);
lean_dec(v___x_1394_);
if (v___x_1395_ == 0)
{
lean_object* v___x_1396_; 
lean_dec_ref(v_afterMarker_1371_);
v___x_1396_ = lean_box(0);
return v___x_1396_;
}
else
{
lean_object* v___x_1397_; 
v___x_1397_ = l_String_Slice_Pos_get_x3f(v_s_1370_, v_pos_1388_);
if (lean_obj_tag(v___x_1397_) == 0)
{
lean_object* v___x_1398_; 
lean_dec_ref(v_afterMarker_1371_);
v___x_1398_ = lean_box(0);
return v___x_1398_;
}
else
{
lean_object* v_val_1399_; uint32_t v___x_1400_; uint32_t v___x_1401_; uint8_t v___x_1402_; 
v_val_1399_ = lean_ctor_get(v___x_1397_, 0);
lean_inc(v_val_1399_);
lean_dec_ref_known(v___x_1397_, 1);
v___x_1400_ = 32;
v___x_1401_ = lean_unbox_uint32(v_val_1399_);
v___x_1402_ = lean_uint32_dec_eq(v___x_1401_, v___x_1400_);
if (v___x_1402_ == 0)
{
uint32_t v___x_1403_; uint32_t v___x_1404_; uint8_t v___x_1405_; 
v___x_1403_ = 9;
v___x_1404_ = lean_unbox_uint32(v_val_1399_);
lean_dec(v_val_1399_);
v___x_1405_ = lean_uint32_dec_eq(v___x_1404_, v___x_1403_);
if (v___x_1405_ == 0)
{
lean_object* v___x_1406_; 
lean_dec_ref(v_afterMarker_1371_);
v___x_1406_ = lean_box(0);
return v___x_1406_;
}
else
{
goto v___jp_1379_;
}
}
else
{
lean_dec(v_val_1399_);
goto v___jp_1379_;
}
}
}
}
else
{
lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1416_; 
lean_inc(v_col_1390_);
lean_inc(v_stop_1389_);
lean_inc(v_pos_1388_);
v_isSharedCheck_1416_ = !lean_is_exclusive(v_afterMarker_1371_);
if (v_isSharedCheck_1416_ == 0)
{
lean_object* v_unused_1417_; lean_object* v_unused_1418_; lean_object* v_unused_1419_; 
v_unused_1417_ = lean_ctor_get(v_afterMarker_1371_, 2);
lean_dec(v_unused_1417_);
v_unused_1418_ = lean_ctor_get(v_afterMarker_1371_, 1);
lean_dec(v_unused_1418_);
v_unused_1419_ = lean_ctor_get(v_afterMarker_1371_, 0);
lean_dec(v_unused_1419_);
v___x_1408_ = v_afterMarker_1371_;
v_isShared_1409_ = v_isSharedCheck_1416_;
goto v_resetjp_1407_;
}
else
{
lean_dec(v_afterMarker_1371_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1416_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1413_; 
v___x_1410_ = lean_unsigned_to_nat(1u);
v___x_1411_ = lean_nat_add(v_col_1390_, v___x_1410_);
lean_dec(v_col_1390_);
if (v_isShared_1409_ == 0)
{
lean_ctor_set(v___x_1408_, 2, v___x_1411_);
v___x_1413_ = v___x_1408_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_pos_1388_);
lean_ctor_set(v_reuseFailAlloc_1415_, 1, v_stop_1389_);
lean_ctor_set(v_reuseFailAlloc_1415_, 2, v___x_1411_);
lean_ctor_set_uint8(v_reuseFailAlloc_1415_, sizeof(void*)*3, v_partialTab_1391_);
v___x_1413_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
lean_object* v___x_1414_; 
v___x_1414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1413_);
return v___x_1414_;
}
}
}
v___jp_1372_:
{
lean_object* v___x_1374_; lean_object* v_fst_1375_; lean_object* v___x_1376_; 
v___x_1374_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped(v_s_1370_, v_afterMarker_1371_, v___y_1373_);
v_fst_1375_ = lean_ctor_get(v___x_1374_, 0);
lean_inc(v_fst_1375_);
lean_dec_ref(v___x_1374_);
v___x_1376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1376_, 0, v_fst_1375_);
return v___x_1376_;
}
v___jp_1377_:
{
lean_object* v___x_1378_; 
v___x_1378_ = lean_unsigned_to_nat(1u);
v___y_1373_ = v___x_1378_;
goto v___jp_1372_;
}
v___jp_1379_:
{
lean_object* v___x_1380_; lean_object* v_fst_1381_; lean_object* v_snd_1382_; lean_object* v_pos_1383_; lean_object* v_stop_1384_; uint8_t v___x_1385_; 
lean_inc_ref(v_afterMarker_1371_);
v___x_1380_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols(v_s_1370_, v_afterMarker_1371_);
v_fst_1381_ = lean_ctor_get(v___x_1380_, 0);
lean_inc(v_fst_1381_);
v_snd_1382_ = lean_ctor_get(v___x_1380_, 1);
lean_inc(v_snd_1382_);
lean_dec_ref(v___x_1380_);
v_pos_1383_ = lean_ctor_get(v_fst_1381_, 0);
lean_inc(v_pos_1383_);
v_stop_1384_ = lean_ctor_get(v_fst_1381_, 1);
lean_inc(v_stop_1384_);
lean_dec(v_fst_1381_);
v___x_1385_ = lean_nat_dec_le(v_stop_1384_, v_pos_1383_);
lean_dec(v_pos_1383_);
lean_dec(v_stop_1384_);
if (v___x_1385_ == 0)
{
lean_object* v___x_1386_; uint8_t v___x_1387_; 
v___x_1386_ = lean_unsigned_to_nat(5u);
v___x_1387_ = lean_nat_dec_le(v___x_1386_, v_snd_1382_);
if (v___x_1387_ == 0)
{
v___y_1373_ = v_snd_1382_;
goto v___jp_1372_;
}
else
{
lean_dec(v_snd_1382_);
goto v___jp_1377_;
}
}
else
{
lean_dec(v_snd_1382_);
goto v___jp_1377_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f___lam__0___boxed(lean_object* v_s_1420_, lean_object* v_afterMarker_1421_){
_start:
{
lean_object* v_res_1422_; 
v_res_1422_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f___lam__0(v_s_1420_, v_afterMarker_1421_);
lean_dec_ref(v_s_1420_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f_spec__0___redArg(lean_object* v_s_1423_, uint32_t v___x_1424_, lean_object* v_a_1425_){
_start:
{
lean_object* v_snd_1426_; lean_object* v_fst_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1496_; 
v_snd_1426_ = lean_ctor_get(v_a_1425_, 1);
v_fst_1427_ = lean_ctor_get(v_a_1425_, 0);
v_isSharedCheck_1496_ = !lean_is_exclusive(v_a_1425_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1429_ = v_a_1425_;
v_isShared_1430_ = v_isSharedCheck_1496_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_snd_1426_);
lean_inc(v_fst_1427_);
lean_dec(v_a_1425_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1496_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v_fst_1431_; lean_object* v_snd_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1495_; 
v_fst_1431_ = lean_ctor_get(v_snd_1426_, 0);
v_snd_1432_ = lean_ctor_get(v_snd_1426_, 1);
v_isSharedCheck_1495_ = !lean_is_exclusive(v_snd_1426_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1434_ = v_snd_1426_;
v_isShared_1435_ = v_isSharedCheck_1495_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_snd_1432_);
lean_inc(v_fst_1431_);
lean_dec(v_snd_1426_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1495_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1448_; uint8_t v___x_1449_; 
v___x_1448_ = lean_unsigned_to_nat(10u);
v___x_1449_ = lean_nat_dec_lt(v_fst_1431_, v___x_1448_);
if (v___x_1449_ == 0)
{
lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
lean_del_object(v___x_1434_);
lean_del_object(v___x_1429_);
v___x_1450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1450_, 0, v_fst_1431_);
lean_ctor_set(v___x_1450_, 1, v_snd_1432_);
v___x_1451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1451_, 0, v_fst_1427_);
lean_ctor_set(v___x_1451_, 1, v___x_1450_);
v___x_1452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
return v___x_1452_;
}
else
{
lean_object* v_pos_1453_; lean_object* v_stop_1454_; lean_object* v_col_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; uint8_t v___x_1458_; 
v_pos_1453_ = lean_ctor_get(v_fst_1427_, 0);
v_stop_1454_ = lean_ctor_get(v_fst_1427_, 1);
v_col_1455_ = lean_ctor_get(v_fst_1427_, 2);
v___x_1456_ = lean_unsigned_to_nat(1u);
v___x_1457_ = lean_nat_add(v_pos_1453_, v___x_1456_);
v___x_1458_ = lean_nat_dec_le(v___x_1457_, v_stop_1454_);
lean_dec(v___x_1457_);
if (v___x_1458_ == 0)
{
lean_del_object(v___x_1434_);
lean_del_object(v___x_1429_);
goto v___jp_1444_;
}
else
{
lean_object* v___x_1459_; 
v___x_1459_ = l_String_Slice_Pos_get_x3f(v_s_1423_, v_pos_1453_);
if (lean_obj_tag(v___x_1459_) == 1)
{
lean_object* v_val_1460_; uint32_t v___x_1461_; uint32_t v___x_1462_; uint8_t v___x_1463_; 
v_val_1460_ = lean_ctor_get(v___x_1459_, 0);
lean_inc(v_val_1460_);
lean_dec_ref_known(v___x_1459_, 1);
v___x_1461_ = 48;
v___x_1462_ = lean_unbox_uint32(v_val_1460_);
v___x_1463_ = lean_uint32_dec_le(v___x_1461_, v___x_1462_);
if (v___x_1463_ == 0)
{
lean_dec(v_val_1460_);
goto v___jp_1436_;
}
else
{
uint32_t v___x_1464_; uint32_t v___x_1465_; uint8_t v___x_1466_; 
v___x_1464_ = 57;
v___x_1465_ = lean_unbox_uint32(v_val_1460_);
v___x_1466_ = lean_uint32_dec_le(v___x_1465_, v___x_1464_);
if (v___x_1466_ == 0)
{
lean_dec(v_val_1460_);
goto v___jp_1436_;
}
else
{
lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1491_; 
lean_inc(v_col_1455_);
lean_inc(v_stop_1454_);
lean_inc(v_pos_1453_);
lean_del_object(v___x_1434_);
lean_del_object(v___x_1429_);
v_isSharedCheck_1491_ = !lean_is_exclusive(v_fst_1427_);
if (v_isSharedCheck_1491_ == 0)
{
lean_object* v_unused_1492_; lean_object* v_unused_1493_; lean_object* v_unused_1494_; 
v_unused_1492_ = lean_ctor_get(v_fst_1427_, 2);
lean_dec(v_unused_1492_);
v_unused_1493_ = lean_ctor_get(v_fst_1427_, 1);
lean_dec(v_unused_1493_);
v_unused_1494_ = lean_ctor_get(v_fst_1427_, 0);
lean_dec(v_unused_1494_);
v___x_1468_ = v_fst_1427_;
v_isShared_1469_ = v_isSharedCheck_1491_;
goto v_resetjp_1467_;
}
else
{
lean_dec(v_fst_1427_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1491_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v_str_1470_; lean_object* v_startInclusive_1471_; uint32_t v___x_1472_; uint8_t v___x_1473_; lean_object* v___x_1474_; uint32_t v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1486_; 
v_str_1470_ = lean_ctor_get(v_s_1423_, 0);
v_startInclusive_1471_ = lean_ctor_get(v_s_1423_, 1);
v___x_1472_ = 43;
v___x_1473_ = lean_uint32_dec_eq(v___x_1424_, v___x_1472_);
v___x_1474_ = lean_nat_mul(v_snd_1432_, v___x_1448_);
lean_dec(v_snd_1432_);
v___x_1475_ = lean_unbox_uint32(v_val_1460_);
lean_dec(v_val_1460_);
v___x_1476_ = lean_uint32_to_nat(v___x_1475_);
v___x_1477_ = lean_unsigned_to_nat(48u);
v___x_1478_ = lean_nat_sub(v___x_1476_, v___x_1477_);
lean_dec(v___x_1476_);
v___x_1479_ = lean_nat_add(v___x_1474_, v___x_1478_);
lean_dec(v___x_1478_);
lean_dec(v___x_1474_);
v___x_1480_ = lean_nat_add(v_fst_1431_, v___x_1456_);
lean_dec(v_fst_1431_);
v___x_1481_ = lean_nat_add(v_startInclusive_1471_, v_pos_1453_);
lean_dec(v_pos_1453_);
v___x_1482_ = lean_string_utf8_next_fast(v_str_1470_, v___x_1481_);
lean_dec(v___x_1481_);
v___x_1483_ = lean_nat_sub(v___x_1482_, v_startInclusive_1471_);
v___x_1484_ = lean_nat_add(v_col_1455_, v___x_1456_);
lean_dec(v_col_1455_);
if (v_isShared_1469_ == 0)
{
lean_ctor_set(v___x_1468_, 2, v___x_1484_);
lean_ctor_set(v___x_1468_, 0, v___x_1483_);
v___x_1486_ = v___x_1468_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v___x_1483_);
lean_ctor_set(v_reuseFailAlloc_1490_, 1, v_stop_1454_);
lean_ctor_set(v_reuseFailAlloc_1490_, 2, v___x_1484_);
v___x_1486_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; 
lean_ctor_set_uint8(v___x_1486_, sizeof(void*)*3, v___x_1473_);
v___x_1487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1487_, 0, v___x_1480_);
lean_ctor_set(v___x_1487_, 1, v___x_1479_);
v___x_1488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1488_, 0, v___x_1486_);
lean_ctor_set(v___x_1488_, 1, v___x_1487_);
v_a_1425_ = v___x_1488_;
goto _start;
}
}
}
}
}
else
{
lean_dec(v___x_1459_);
lean_del_object(v___x_1434_);
lean_del_object(v___x_1429_);
goto v___jp_1444_;
}
}
}
v___jp_1436_:
{
lean_object* v___x_1438_; 
if (v_isShared_1435_ == 0)
{
v___x_1438_ = v___x_1434_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v_fst_1431_);
lean_ctor_set(v_reuseFailAlloc_1443_, 1, v_snd_1432_);
v___x_1438_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
lean_object* v___x_1440_; 
if (v_isShared_1430_ == 0)
{
lean_ctor_set(v___x_1429_, 1, v___x_1438_);
v___x_1440_ = v___x_1429_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_fst_1427_);
lean_ctor_set(v_reuseFailAlloc_1442_, 1, v___x_1438_);
v___x_1440_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
lean_object* v___x_1441_; 
v___x_1441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1440_);
return v___x_1441_;
}
}
}
v___jp_1444_:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; 
v___x_1445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1445_, 0, v_fst_1431_);
lean_ctor_set(v___x_1445_, 1, v_snd_1432_);
v___x_1446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1446_, 0, v_fst_1427_);
lean_ctor_set(v___x_1446_, 1, v___x_1445_);
v___x_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1446_);
return v___x_1447_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f_spec__0___redArg___boxed(lean_object* v_s_1497_, lean_object* v___x_1498_, lean_object* v_a_1499_){
_start:
{
uint32_t v___x_8479__boxed_1500_; lean_object* v_res_1501_; 
v___x_8479__boxed_1500_ = lean_unbox_uint32(v___x_1498_);
lean_dec(v___x_1498_);
v_res_1501_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f_spec__0___redArg(v_s_1497_, v___x_8479__boxed_1500_, v_a_1499_);
lean_dec_ref(v_s_1497_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f(lean_object* v_s_1504_, lean_object* v_line_1505_){
_start:
{
lean_object* v_after_1506_; lean_object* v_indent_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1648_; 
v_after_1506_ = lean_ctor_get(v_line_1505_, 0);
v_indent_1507_ = lean_ctor_get(v_line_1505_, 1);
v_isSharedCheck_1648_ = !lean_is_exclusive(v_line_1505_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1509_ = v_line_1505_;
v_isShared_1510_ = v_isSharedCheck_1648_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_indent_1507_);
lean_inc(v_after_1506_);
lean_dec(v_line_1505_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1648_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1511_; uint8_t v___x_1512_; 
v___x_1511_ = lean_unsigned_to_nat(3u);
v___x_1512_ = lean_nat_dec_le(v_indent_1507_, v___x_1511_);
if (v___x_1512_ == 0)
{
lean_object* v___x_1513_; 
lean_del_object(v___x_1509_);
lean_dec(v_indent_1507_);
lean_dec_ref(v_after_1506_);
v___x_1513_ = lean_box(0);
return v___x_1513_;
}
else
{
lean_object* v_pos_1514_; lean_object* v_stop_1515_; lean_object* v_col_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; uint8_t v___x_1519_; 
v_pos_1514_ = lean_ctor_get(v_after_1506_, 0);
lean_inc(v_pos_1514_);
v_stop_1515_ = lean_ctor_get(v_after_1506_, 1);
v_col_1516_ = lean_ctor_get(v_after_1506_, 2);
v___x_1517_ = lean_unsigned_to_nat(1u);
v___x_1518_ = lean_nat_add(v_pos_1514_, v___x_1517_);
v___x_1519_ = lean_nat_dec_le(v___x_1518_, v_stop_1515_);
lean_dec(v___x_1518_);
if (v___x_1519_ == 0)
{
lean_object* v___x_1520_; 
lean_dec(v_pos_1514_);
lean_del_object(v___x_1509_);
lean_dec(v_indent_1507_);
lean_dec_ref(v_after_1506_);
v___x_1520_ = lean_box(0);
return v___x_1520_;
}
else
{
lean_object* v___x_1521_; 
v___x_1521_ = l_String_Slice_Pos_get_x3f(v_s_1504_, v_pos_1514_);
if (lean_obj_tag(v___x_1521_) == 0)
{
lean_object* v___x_1522_; 
lean_dec(v_pos_1514_);
lean_del_object(v___x_1509_);
lean_dec(v_indent_1507_);
lean_dec_ref(v_after_1506_);
v___x_1522_ = lean_box(0);
return v___x_1522_;
}
else
{
lean_object* v_val_1523_; lean_object* v___x_1524_; lean_object* v___y_1526_; lean_object* v___y_1527_; uint8_t v___y_1528_; uint32_t v___x_1562_; uint32_t v___x_1563_; uint8_t v___x_1564_; 
v_val_1523_ = lean_ctor_get(v___x_1521_, 0);
lean_inc(v_val_1523_);
lean_dec_ref_known(v___x_1521_, 1);
v___x_1524_ = lean_nat_sub(v_col_1516_, v_indent_1507_);
lean_dec(v_indent_1507_);
v___x_1562_ = 42;
v___x_1563_ = lean_unbox_uint32(v_val_1523_);
v___x_1564_ = lean_uint32_dec_eq(v___x_1563_, v___x_1562_);
if (v___x_1564_ == 0)
{
uint32_t v___x_1565_; uint32_t v___x_1566_; uint8_t v___x_1567_; 
v___x_1565_ = 45;
v___x_1566_ = lean_unbox_uint32(v_val_1523_);
v___x_1567_ = lean_uint32_dec_eq(v___x_1566_, v___x_1565_);
if (v___x_1567_ == 0)
{
uint32_t v___x_1568_; uint32_t v___x_1569_; uint8_t v___x_1570_; 
v___x_1568_ = 43;
v___x_1569_ = lean_unbox_uint32(v_val_1523_);
v___x_1570_ = lean_uint32_dec_eq(v___x_1569_, v___x_1568_);
if (v___x_1570_ == 0)
{
uint32_t v___x_1571_; uint32_t v___x_1572_; uint8_t v___x_1573_; 
v___x_1571_ = 48;
v___x_1572_ = lean_unbox_uint32(v_val_1523_);
v___x_1573_ = lean_uint32_dec_le(v___x_1571_, v___x_1572_);
if (v___x_1573_ == 0)
{
lean_object* v___x_1574_; 
lean_dec(v___x_1524_);
lean_dec(v_val_1523_);
lean_dec(v_pos_1514_);
lean_del_object(v___x_1509_);
lean_dec_ref(v_after_1506_);
v___x_1574_ = lean_box(0);
return v___x_1574_;
}
else
{
uint32_t v___x_1575_; uint32_t v___x_1576_; uint8_t v___x_1577_; 
v___x_1575_ = 57;
v___x_1576_ = lean_unbox_uint32(v_val_1523_);
v___x_1577_ = lean_uint32_dec_le(v___x_1576_, v___x_1575_);
if (v___x_1577_ == 0)
{
lean_object* v___x_1578_; 
lean_dec(v___x_1524_);
lean_dec(v_val_1523_);
lean_dec(v_pos_1514_);
lean_del_object(v___x_1509_);
lean_dec_ref(v_after_1506_);
v___x_1578_ = lean_box(0);
return v___x_1578_;
}
else
{
lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1582_; 
v___x_1579_ = lean_unsigned_to_nat(0u);
v___x_1580_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f___closed__0));
if (v_isShared_1510_ == 0)
{
lean_ctor_set(v___x_1509_, 1, v___x_1580_);
v___x_1582_ = v___x_1509_;
goto v_reusejp_1581_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_after_1506_);
lean_ctor_set(v_reuseFailAlloc_1647_, 1, v___x_1580_);
v___x_1582_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1581_;
}
v_reusejp_1581_:
{
uint32_t v___x_1583_; lean_object* v___x_1584_; 
v___x_1583_ = lean_unbox_uint32(v_val_1523_);
lean_dec(v_val_1523_);
v___x_1584_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f_spec__0___redArg(v_s_1504_, v___x_1583_, v___x_1582_);
if (lean_obj_tag(v___x_1584_) == 0)
{
lean_object* v___x_1585_; 
lean_dec(v___x_1524_);
lean_dec(v_pos_1514_);
v___x_1585_ = lean_box(0);
return v___x_1585_;
}
else
{
lean_object* v_val_1586_; lean_object* v_snd_1587_; lean_object* v_fst_1588_; lean_object* v_fst_1589_; lean_object* v_snd_1590_; lean_object* v___y_1592_; lean_object* v___y_1593_; uint8_t v___y_1594_; uint8_t v___x_1610_; 
v_val_1586_ = lean_ctor_get(v___x_1584_, 0);
lean_inc(v_val_1586_);
lean_dec_ref_known(v___x_1584_, 1);
v_snd_1587_ = lean_ctor_get(v_val_1586_, 1);
lean_inc(v_snd_1587_);
v_fst_1588_ = lean_ctor_get(v_val_1586_, 0);
lean_inc(v_fst_1588_);
lean_dec(v_val_1586_);
v_fst_1589_ = lean_ctor_get(v_snd_1587_, 0);
lean_inc(v_fst_1589_);
v_snd_1590_ = lean_ctor_get(v_snd_1587_, 1);
lean_inc(v_snd_1590_);
lean_dec(v_snd_1587_);
v___x_1610_ = lean_nat_dec_eq(v_fst_1589_, v___x_1579_);
if (v___x_1610_ == 0)
{
lean_object* v___x_1611_; uint8_t v___x_1612_; 
v___x_1611_ = lean_unsigned_to_nat(9u);
v___x_1612_ = lean_nat_dec_le(v_fst_1589_, v___x_1611_);
lean_dec(v_fst_1589_);
if (v___x_1612_ == 0)
{
lean_object* v___x_1613_; 
lean_dec(v_snd_1590_);
lean_dec(v_fst_1588_);
lean_dec(v___x_1524_);
lean_dec(v_pos_1514_);
v___x_1613_ = lean_box(0);
return v___x_1613_;
}
else
{
lean_object* v_pos_1614_; lean_object* v_stop_1615_; lean_object* v_col_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1645_; 
v_pos_1614_ = lean_ctor_get(v_fst_1588_, 0);
v_stop_1615_ = lean_ctor_get(v_fst_1588_, 1);
v_col_1616_ = lean_ctor_get(v_fst_1588_, 2);
v_isSharedCheck_1645_ = !lean_is_exclusive(v_fst_1588_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1618_ = v_fst_1588_;
v_isShared_1619_ = v_isSharedCheck_1645_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_col_1616_);
lean_inc(v_stop_1615_);
lean_inc(v_pos_1614_);
lean_dec(v_fst_1588_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1645_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1620_; uint8_t v___x_1621_; 
v___x_1620_ = lean_nat_add(v_pos_1614_, v___x_1517_);
v___x_1621_ = lean_nat_dec_le(v___x_1620_, v_stop_1615_);
lean_dec(v___x_1620_);
if (v___x_1621_ == 0)
{
lean_object* v___x_1622_; 
lean_del_object(v___x_1618_);
lean_dec(v_col_1616_);
lean_dec(v_stop_1615_);
lean_dec(v_pos_1614_);
lean_dec(v_snd_1590_);
lean_dec(v___x_1524_);
lean_dec(v_pos_1514_);
v___x_1622_ = lean_box(0);
return v___x_1622_;
}
else
{
lean_object* v___x_1623_; 
v___x_1623_ = l_String_Slice_Pos_get_x3f(v_s_1504_, v_pos_1614_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v___x_1624_; 
lean_del_object(v___x_1618_);
lean_dec(v_col_1616_);
lean_dec(v_stop_1615_);
lean_dec(v_pos_1614_);
lean_dec(v_snd_1590_);
lean_dec(v___x_1524_);
lean_dec(v_pos_1514_);
v___x_1624_ = lean_box(0);
return v___x_1624_;
}
else
{
lean_object* v_val_1625_; uint32_t v___x_1626_; uint32_t v___x_1627_; uint8_t v___x_1628_; 
v_val_1625_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_val_1625_);
lean_dec_ref_known(v___x_1623_, 1);
v___x_1626_ = 46;
v___x_1627_ = lean_unbox_uint32(v_val_1625_);
v___x_1628_ = lean_uint32_dec_eq(v___x_1627_, v___x_1626_);
if (v___x_1628_ == 0)
{
uint32_t v___x_1641_; uint32_t v___x_1642_; uint8_t v___x_1643_; 
v___x_1641_ = 41;
v___x_1642_ = lean_unbox_uint32(v_val_1625_);
lean_dec(v_val_1625_);
v___x_1643_ = lean_uint32_dec_eq(v___x_1642_, v___x_1641_);
if (v___x_1643_ == 0)
{
lean_object* v___x_1644_; 
lean_del_object(v___x_1618_);
lean_dec(v_col_1616_);
lean_dec(v_stop_1615_);
lean_dec(v_pos_1614_);
lean_dec(v_snd_1590_);
lean_dec(v___x_1524_);
lean_dec(v_pos_1514_);
v___x_1644_ = lean_box(0);
return v___x_1644_;
}
else
{
goto v___jp_1629_;
}
}
else
{
lean_dec(v_val_1625_);
goto v___jp_1629_;
}
v___jp_1629_:
{
lean_object* v_str_1630_; lean_object* v_startInclusive_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1637_; 
v_str_1630_ = lean_ctor_get(v_s_1504_, 0);
v_startInclusive_1631_ = lean_ctor_get(v_s_1504_, 1);
v___x_1632_ = lean_nat_add(v_startInclusive_1631_, v_pos_1614_);
lean_dec(v_pos_1614_);
v___x_1633_ = lean_string_utf8_next_fast(v_str_1630_, v___x_1632_);
lean_dec(v___x_1632_);
v___x_1634_ = lean_nat_sub(v___x_1633_, v_startInclusive_1631_);
v___x_1635_ = lean_nat_add(v_col_1616_, v___x_1517_);
lean_dec(v_col_1616_);
lean_inc(v___x_1634_);
if (v_isShared_1619_ == 0)
{
lean_ctor_set(v___x_1618_, 2, v___x_1635_);
lean_ctor_set(v___x_1618_, 0, v___x_1634_);
v___x_1637_ = v___x_1618_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v___x_1634_);
lean_ctor_set(v_reuseFailAlloc_1640_, 1, v_stop_1615_);
lean_ctor_set(v_reuseFailAlloc_1640_, 2, v___x_1635_);
v___x_1637_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
lean_ctor_set_uint8(v___x_1637_, sizeof(void*)*3, v___x_1570_);
if (v___x_1628_ == 0)
{
uint8_t v___x_1638_; 
v___x_1638_ = 1;
v___y_1592_ = v___x_1637_;
v___y_1593_ = v___x_1634_;
v___y_1594_ = v___x_1638_;
goto v___jp_1591_;
}
else
{
uint8_t v___x_1639_; 
v___x_1639_ = 0;
v___y_1592_ = v___x_1637_;
v___y_1593_ = v___x_1634_;
v___y_1594_ = v___x_1639_;
goto v___jp_1591_;
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
lean_object* v___x_1646_; 
lean_dec(v_snd_1590_);
lean_dec(v_fst_1589_);
lean_dec(v_fst_1588_);
lean_dec(v___x_1524_);
lean_dec(v_pos_1514_);
v___x_1646_ = lean_box(0);
return v___x_1646_;
}
v___jp_1591_:
{
lean_object* v___x_1595_; 
v___x_1595_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f___lam__0(v_s_1504_, v___y_1592_);
if (lean_obj_tag(v___x_1595_) == 0)
{
lean_object* v___x_1596_; 
lean_dec(v___y_1593_);
lean_dec(v_snd_1590_);
lean_dec(v___x_1524_);
lean_dec(v_pos_1514_);
v___x_1596_ = lean_box(0);
return v___x_1596_;
}
else
{
lean_object* v_val_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1609_; 
v_val_1597_ = lean_ctor_get(v___x_1595_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1595_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1599_ = v___x_1595_;
v_isShared_1600_ = v_isSharedCheck_1609_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_val_1597_);
lean_dec(v___x_1595_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1609_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
lean_object* v_col_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1607_; 
v_col_1601_ = lean_ctor_get(v_val_1597_, 2);
v___x_1602_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_1514_, v___y_1593_);
v___x_1603_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_1603_, 0, v_snd_1590_);
lean_ctor_set_uint8(v___x_1603_, sizeof(void*)*1, v___y_1594_);
v___x_1604_ = lean_nat_sub(v_col_1601_, v___x_1524_);
lean_dec(v___x_1524_);
v___x_1605_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1602_);
lean_ctor_set(v___x_1605_, 1, v_val_1597_);
lean_ctor_set(v___x_1605_, 2, v___x_1603_);
lean_ctor_set(v___x_1605_, 3, v___x_1604_);
if (v_isShared_1600_ == 0)
{
lean_ctor_set(v___x_1599_, 0, v___x_1605_);
v___x_1607_ = v___x_1599_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v___x_1605_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
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
lean_inc(v_col_1516_);
lean_inc(v_stop_1515_);
lean_del_object(v___x_1509_);
lean_dec_ref(v_after_1506_);
goto v___jp_1544_;
}
}
else
{
lean_inc(v_col_1516_);
lean_inc(v_stop_1515_);
lean_del_object(v___x_1509_);
lean_dec_ref(v_after_1506_);
goto v___jp_1544_;
}
}
else
{
lean_inc(v_col_1516_);
lean_inc(v_stop_1515_);
lean_del_object(v___x_1509_);
lean_dec_ref(v_after_1506_);
goto v___jp_1544_;
}
v___jp_1525_:
{
lean_object* v___x_1529_; 
v___x_1529_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f___lam__0(v_s_1504_, v___y_1526_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v___x_1530_; 
lean_dec(v___y_1527_);
lean_dec(v___x_1524_);
lean_dec(v_pos_1514_);
v___x_1530_ = lean_box(0);
return v___x_1530_;
}
else
{
lean_object* v_val_1531_; lean_object* v___x_1533_; uint8_t v_isShared_1534_; uint8_t v_isSharedCheck_1543_; 
v_val_1531_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1543_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1543_ == 0)
{
v___x_1533_ = v___x_1529_;
v_isShared_1534_ = v_isSharedCheck_1543_;
goto v_resetjp_1532_;
}
else
{
lean_inc(v_val_1531_);
lean_dec(v___x_1529_);
v___x_1533_ = lean_box(0);
v_isShared_1534_ = v_isSharedCheck_1543_;
goto v_resetjp_1532_;
}
v_resetjp_1532_:
{
lean_object* v_col_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1541_; 
v_col_1535_ = lean_ctor_get(v_val_1531_, 2);
v___x_1536_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_1514_, v___y_1527_);
v___x_1537_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_1537_, 0, v___y_1528_);
v___x_1538_ = lean_nat_sub(v_col_1535_, v___x_1524_);
lean_dec(v___x_1524_);
v___x_1539_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1539_, 0, v___x_1536_);
lean_ctor_set(v___x_1539_, 1, v_val_1531_);
lean_ctor_set(v___x_1539_, 2, v___x_1537_);
lean_ctor_set(v___x_1539_, 3, v___x_1538_);
if (v_isShared_1534_ == 0)
{
lean_ctor_set(v___x_1533_, 0, v___x_1539_);
v___x_1541_ = v___x_1533_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v___x_1539_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
return v___x_1541_;
}
}
}
}
v___jp_1544_:
{
lean_object* v_str_1545_; lean_object* v_startInclusive_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; uint8_t v___x_1551_; lean_object* v___x_1552_; uint32_t v___x_1553_; uint32_t v___x_1554_; uint8_t v___x_1555_; 
v_str_1545_ = lean_ctor_get(v_s_1504_, 0);
v_startInclusive_1546_ = lean_ctor_get(v_s_1504_, 1);
v___x_1547_ = lean_nat_add(v_startInclusive_1546_, v_pos_1514_);
v___x_1548_ = lean_string_utf8_next_fast(v_str_1545_, v___x_1547_);
lean_dec(v___x_1547_);
v___x_1549_ = lean_nat_sub(v___x_1548_, v_startInclusive_1546_);
v___x_1550_ = lean_nat_add(v_col_1516_, v___x_1517_);
lean_dec(v_col_1516_);
v___x_1551_ = 0;
lean_inc(v___x_1549_);
v___x_1552_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1552_, 0, v___x_1549_);
lean_ctor_set(v___x_1552_, 1, v_stop_1515_);
lean_ctor_set(v___x_1552_, 2, v___x_1550_);
lean_ctor_set_uint8(v___x_1552_, sizeof(void*)*3, v___x_1551_);
v___x_1553_ = 42;
v___x_1554_ = lean_unbox_uint32(v_val_1523_);
v___x_1555_ = lean_uint32_dec_eq(v___x_1554_, v___x_1553_);
if (v___x_1555_ == 0)
{
uint32_t v___x_1556_; uint32_t v___x_1557_; uint8_t v___x_1558_; 
v___x_1556_ = 45;
v___x_1557_ = lean_unbox_uint32(v_val_1523_);
lean_dec(v_val_1523_);
v___x_1558_ = lean_uint32_dec_eq(v___x_1557_, v___x_1556_);
if (v___x_1558_ == 0)
{
uint8_t v___x_1559_; 
v___x_1559_ = 2;
v___y_1526_ = v___x_1552_;
v___y_1527_ = v___x_1549_;
v___y_1528_ = v___x_1559_;
goto v___jp_1525_;
}
else
{
uint8_t v___x_1560_; 
v___x_1560_ = 1;
v___y_1526_ = v___x_1552_;
v___y_1527_ = v___x_1549_;
v___y_1528_ = v___x_1560_;
goto v___jp_1525_;
}
}
else
{
uint8_t v___x_1561_; 
lean_dec(v_val_1523_);
v___x_1561_ = 0;
v___y_1526_ = v___x_1552_;
v___y_1527_ = v___x_1549_;
v___y_1528_ = v___x_1561_;
goto v___jp_1525_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f___boxed(lean_object* v_s_1649_, lean_object* v_line_1650_){
_start:
{
lean_object* v_res_1651_; 
v_res_1651_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f(v_s_1649_, v_line_1650_);
lean_dec_ref(v_s_1649_);
return v_res_1651_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f_spec__0(lean_object* v_s_1652_, uint32_t v___x_1653_, lean_object* v_inst_1654_, lean_object* v_a_1655_){
_start:
{
lean_object* v___x_1656_; 
v___x_1656_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f_spec__0___redArg(v_s_1652_, v___x_1653_, v_a_1655_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f_spec__0___boxed(lean_object* v_s_1657_, lean_object* v___x_1658_, lean_object* v_inst_1659_, lean_object* v_a_1660_){
_start:
{
uint32_t v___x_8868__boxed_1661_; lean_object* v_res_1662_; 
v___x_8868__boxed_1661_ = lean_unbox_uint32(v___x_1658_);
lean_dec(v___x_1658_);
v_res_1662_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f_spec__0(v_s_1657_, v___x_8868__boxed_1661_, v_inst_1659_, v_a_1660_);
lean_dec_ref(v_s_1657_);
return v_res_1662_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f_spec__0___redArg(lean_object* v_s_1663_, lean_object* v_a_1664_){
_start:
{
lean_object* v_fst_1665_; lean_object* v_snd_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1710_; 
v_fst_1665_ = lean_ctor_get(v_a_1664_, 0);
v_snd_1666_ = lean_ctor_get(v_a_1664_, 1);
v_isSharedCheck_1710_ = !lean_is_exclusive(v_a_1664_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1668_ = v_a_1664_;
v_isShared_1669_ = v_isSharedCheck_1710_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_snd_1666_);
lean_inc(v_fst_1665_);
lean_dec(v_a_1664_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1710_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v_pos_1670_; lean_object* v_stop_1671_; lean_object* v_col_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; uint8_t v___x_1675_; 
v_pos_1670_ = lean_ctor_get(v_fst_1665_, 0);
v_stop_1671_ = lean_ctor_get(v_fst_1665_, 1);
v_col_1672_ = lean_ctor_get(v_fst_1665_, 2);
v___x_1673_ = lean_unsigned_to_nat(1u);
v___x_1674_ = lean_nat_add(v_pos_1670_, v___x_1673_);
v___x_1675_ = lean_nat_dec_le(v___x_1674_, v_stop_1671_);
lean_dec(v___x_1674_);
if (v___x_1675_ == 0)
{
lean_object* v___x_1677_; 
if (v_isShared_1669_ == 0)
{
v___x_1677_ = v___x_1668_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v_fst_1665_);
lean_ctor_set(v_reuseFailAlloc_1678_, 1, v_snd_1666_);
v___x_1677_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
return v___x_1677_;
}
}
else
{
lean_object* v_str_1679_; lean_object* v_startInclusive_1680_; lean_object* v___x_1681_; uint32_t v___x_1693_; uint32_t v___x_1706_; uint8_t v___x_1707_; 
v_str_1679_ = lean_ctor_get(v_s_1663_, 0);
v_startInclusive_1680_ = lean_ctor_get(v_s_1663_, 1);
v___x_1681_ = lean_nat_add(v_startInclusive_1680_, v_pos_1670_);
v___x_1693_ = lean_string_utf8_get_fast(v_str_1679_, v___x_1681_);
v___x_1706_ = 65;
v___x_1707_ = lean_uint32_dec_le(v___x_1706_, v___x_1693_);
if (v___x_1707_ == 0)
{
goto v___jp_1701_;
}
else
{
uint32_t v___x_1708_; uint8_t v___x_1709_; 
v___x_1708_ = 90;
v___x_1709_ = lean_uint32_dec_le(v___x_1693_, v___x_1708_);
if (v___x_1709_ == 0)
{
goto v___jp_1701_;
}
else
{
lean_inc(v_col_1672_);
lean_inc(v_stop_1671_);
lean_dec(v_fst_1665_);
goto v___jp_1682_;
}
}
v___jp_1682_:
{
uint8_t v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1690_; 
v___x_1683_ = 0;
v___x_1684_ = lean_nat_add(v_snd_1666_, v___x_1673_);
lean_dec(v_snd_1666_);
v___x_1685_ = lean_string_utf8_next_fast(v_str_1679_, v___x_1681_);
lean_dec(v___x_1681_);
v___x_1686_ = lean_nat_sub(v___x_1685_, v_startInclusive_1680_);
v___x_1687_ = lean_nat_add(v_col_1672_, v___x_1673_);
lean_dec(v_col_1672_);
v___x_1688_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1688_, 0, v___x_1686_);
lean_ctor_set(v___x_1688_, 1, v_stop_1671_);
lean_ctor_set(v___x_1688_, 2, v___x_1687_);
lean_ctor_set_uint8(v___x_1688_, sizeof(void*)*3, v___x_1683_);
if (v_isShared_1669_ == 0)
{
lean_ctor_set(v___x_1668_, 1, v___x_1684_);
lean_ctor_set(v___x_1668_, 0, v___x_1688_);
v___x_1690_ = v___x_1668_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v___x_1688_);
lean_ctor_set(v_reuseFailAlloc_1692_, 1, v___x_1684_);
v___x_1690_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
v_a_1664_ = v___x_1690_;
goto _start;
}
}
v___jp_1694_:
{
uint32_t v___x_1695_; uint8_t v___x_1696_; 
v___x_1695_ = 48;
v___x_1696_ = lean_uint32_dec_le(v___x_1695_, v___x_1693_);
if (v___x_1696_ == 0)
{
lean_object* v___x_1697_; 
lean_dec(v___x_1681_);
lean_del_object(v___x_1668_);
v___x_1697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1697_, 0, v_fst_1665_);
lean_ctor_set(v___x_1697_, 1, v_snd_1666_);
return v___x_1697_;
}
else
{
uint32_t v___x_1698_; uint8_t v___x_1699_; 
v___x_1698_ = 57;
v___x_1699_ = lean_uint32_dec_le(v___x_1693_, v___x_1698_);
if (v___x_1699_ == 0)
{
lean_object* v___x_1700_; 
lean_dec(v___x_1681_);
lean_del_object(v___x_1668_);
v___x_1700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1700_, 0, v_fst_1665_);
lean_ctor_set(v___x_1700_, 1, v_snd_1666_);
return v___x_1700_;
}
else
{
lean_inc(v_col_1672_);
lean_inc(v_stop_1671_);
lean_dec(v_fst_1665_);
goto v___jp_1682_;
}
}
}
v___jp_1701_:
{
uint32_t v___x_1702_; uint8_t v___x_1703_; 
v___x_1702_ = 97;
v___x_1703_ = lean_uint32_dec_le(v___x_1702_, v___x_1693_);
if (v___x_1703_ == 0)
{
goto v___jp_1694_;
}
else
{
uint32_t v___x_1704_; uint8_t v___x_1705_; 
v___x_1704_ = 122;
v___x_1705_ = lean_uint32_dec_le(v___x_1693_, v___x_1704_);
if (v___x_1705_ == 0)
{
goto v___jp_1694_;
}
else
{
lean_inc(v_col_1672_);
lean_inc(v_stop_1671_);
lean_dec(v_fst_1665_);
goto v___jp_1682_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f_spec__0___redArg___boxed(lean_object* v_s_1711_, lean_object* v_a_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f_spec__0___redArg(v_s_1711_, v_a_1712_);
lean_dec_ref(v_s_1711_);
return v_res_1713_;
}
}
static lean_object* _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__5___boxed__const__1(void){
_start:
{
uint32_t v___x_1727_; lean_object* v___x_1728_; 
v___x_1727_ = 47;
v___x_1728_ = lean_box_uint32(v___x_1727_);
return v___x_1728_;
}
}
static lean_object* _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__5(void){
_start:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1729_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__5___boxed__const__1;
v___x_1730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1730_, 0, v___x_1729_);
return v___x_1730_;
}
}
static lean_object* _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__11___boxed__const__1(void){
_start:
{
uint32_t v___x_1742_; lean_object* v___x_1743_; 
v___x_1742_ = 60;
v___x_1743_ = lean_box_uint32(v___x_1742_);
return v___x_1743_;
}
}
static lean_object* _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__11(void){
_start:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; 
v___x_1744_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__11___boxed__const__1;
v___x_1745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1744_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f(lean_object* v_s_1746_, lean_object* v_line_1747_){
_start:
{
uint32_t v___y_1755_; lean_object* v_after_1762_; lean_object* v_indent_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1969_; 
v_after_1762_ = lean_ctor_get(v_line_1747_, 0);
v_indent_1763_ = lean_ctor_get(v_line_1747_, 1);
v_isSharedCheck_1969_ = !lean_is_exclusive(v_line_1747_);
if (v_isSharedCheck_1969_ == 0)
{
v___x_1765_ = v_line_1747_;
v_isShared_1766_ = v_isSharedCheck_1969_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_indent_1763_);
lean_inc(v_after_1762_);
lean_dec(v_line_1747_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1969_;
goto v_resetjp_1764_;
}
v___jp_1748_:
{
lean_object* v___x_1749_; 
v___x_1749_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__0));
return v___x_1749_;
}
v___jp_1750_:
{
lean_object* v___x_1751_; 
v___x_1751_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__1));
return v___x_1751_;
}
v___jp_1752_:
{
lean_object* v___x_1753_; 
v___x_1753_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__2));
return v___x_1753_;
}
v___jp_1754_:
{
uint32_t v___x_1756_; uint8_t v___x_1757_; 
v___x_1756_ = 97;
v___x_1757_ = lean_uint32_dec_le(v___x_1756_, v___y_1755_);
if (v___x_1757_ == 0)
{
lean_object* v___x_1758_; 
v___x_1758_ = lean_box(0);
return v___x_1758_;
}
else
{
uint32_t v___x_1759_; uint8_t v___x_1760_; 
v___x_1759_ = 122;
v___x_1760_ = lean_uint32_dec_le(v___y_1755_, v___x_1759_);
if (v___x_1760_ == 0)
{
lean_object* v___x_1761_; 
v___x_1761_ = lean_box(0);
return v___x_1761_;
}
else
{
goto v___jp_1752_;
}
}
}
v_resetjp_1764_:
{
lean_object* v___x_1767_; uint8_t v___x_1768_; 
v___x_1767_ = lean_unsigned_to_nat(3u);
v___x_1768_ = lean_nat_dec_le(v_indent_1763_, v___x_1767_);
lean_dec(v_indent_1763_);
if (v___x_1768_ == 0)
{
lean_object* v___x_1769_; 
lean_del_object(v___x_1765_);
lean_dec_ref(v_after_1762_);
v___x_1769_ = lean_box(0);
return v___x_1769_;
}
else
{
lean_object* v_pos_1770_; lean_object* v_stop_1771_; lean_object* v_col_1772_; lean_object* v___y_1774_; uint8_t v___y_1775_; lean_object* v___y_1786_; lean_object* v___y_1787_; lean_object* v___y_1788_; uint8_t v___y_1789_; lean_object* v___y_1790_; lean_object* v___y_1796_; uint8_t v___y_1797_; lean_object* v___y_1798_; lean_object* v___y_1799_; uint8_t v___y_1800_; lean_object* v___y_1801_; uint8_t v___y_1802_; lean_object* v___y_1806_; lean_object* v___y_1807_; uint8_t v___y_1808_; uint8_t v___y_1809_; lean_object* v___y_1835_; uint32_t v___y_1836_; uint8_t v___y_1837_; lean_object* v___y_1838_; uint8_t v___y_1846_; lean_object* v___y_1847_; lean_object* v___y_1848_; lean_object* v_pos_1849_; lean_object* v_stop_1850_; lean_object* v___y_1867_; lean_object* v___y_1868_; lean_object* v___y_1888_; lean_object* v_pos_1889_; lean_object* v_stop_1890_; lean_object* v___y_1897_; lean_object* v_pos_1898_; lean_object* v_stop_1899_; lean_object* v___y_1940_; lean_object* v___x_1964_; lean_object* v___x_1965_; uint8_t v___x_1966_; 
v_pos_1770_ = lean_ctor_get(v_after_1762_, 0);
lean_inc(v_pos_1770_);
v_stop_1771_ = lean_ctor_get(v_after_1762_, 1);
lean_inc(v_stop_1771_);
v_col_1772_ = lean_ctor_get(v_after_1762_, 2);
v___x_1964_ = lean_unsigned_to_nat(1u);
v___x_1965_ = lean_nat_add(v_pos_1770_, v___x_1964_);
v___x_1966_ = lean_nat_dec_le(v___x_1965_, v_stop_1771_);
lean_dec(v___x_1965_);
if (v___x_1966_ == 0)
{
lean_object* v___x_1967_; 
v___x_1967_ = lean_box(0);
v___y_1940_ = v___x_1967_;
goto v___jp_1939_;
}
else
{
lean_object* v___x_1968_; 
v___x_1968_ = l_String_Slice_Pos_get_x3f(v_s_1746_, v_pos_1770_);
v___y_1940_ = v___x_1968_;
goto v___jp_1939_;
}
v___jp_1773_:
{
lean_object* v_pos_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
v_pos_1776_ = lean_ctor_get(v___y_1774_, 0);
lean_inc(v_pos_1776_);
lean_dec_ref(v___y_1774_);
v___x_1777_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_1776_, v_stop_1771_);
v___x_1778_ = l_Lean_Markdown_Lines_singleton___redArg(v___x_1777_);
v___x_1779_ = l_Lean_Markdown_InlineSource_ofLines(v_s_1746_, v___x_1778_);
v___x_1780_ = l_Lean_Markdown_InlineSource_startPos___redArg(v___x_1779_);
v___x_1781_ = l_Lean_Markdown_InlineSource_stopPos___redArg(v___x_1779_);
v___x_1782_ = l_Lean_Markdown_InlineSource_cursor___redArg(v___x_1779_, v___x_1780_, v___x_1781_);
v___x_1783_ = l_Lean_Markdown_parseCompleteTagLine_x3f(v_s_1746_, v___x_1782_);
if (lean_obj_tag(v___x_1783_) == 0)
{
if (v___y_1775_ == 0)
{
lean_object* v___x_1784_; 
v___x_1784_ = lean_box(0);
return v___x_1784_;
}
else
{
goto v___jp_1748_;
}
}
else
{
lean_dec_ref_known(v___x_1783_, 1);
goto v___jp_1748_;
}
}
v___jp_1785_:
{
uint8_t v___x_1791_; 
v___x_1791_ = l_Lean_Markdown_isBlockTagName(v_s_1746_, v___y_1788_);
if (v___x_1791_ == 0)
{
lean_dec(v___y_1787_);
lean_dec(v___y_1786_);
v___y_1774_ = v___y_1790_;
v___y_1775_ = v___x_1791_;
goto v___jp_1773_;
}
else
{
if (v___y_1789_ == 0)
{
lean_object* v___x_1792_; lean_object* v___x_1793_; uint8_t v___x_1794_; 
v___x_1792_ = l_Lean_Markdown_subsliceClamped___redArg(v___y_1786_, v___y_1787_);
v___x_1793_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__3));
v___x_1794_ = l_Lean_Markdown_startsWithAscii(v_s_1746_, v___x_1792_, v___x_1793_, v___y_1789_);
if (v___x_1794_ == 0)
{
v___y_1774_ = v___y_1790_;
v___y_1775_ = v___x_1794_;
goto v___jp_1773_;
}
else
{
lean_dec_ref(v___y_1790_);
lean_dec(v_stop_1771_);
goto v___jp_1750_;
}
}
else
{
lean_dec_ref(v___y_1790_);
lean_dec(v___y_1787_);
lean_dec(v___y_1786_);
lean_dec(v_stop_1771_);
goto v___jp_1750_;
}
}
}
v___jp_1795_:
{
if (v___y_1800_ == 0)
{
if (v___y_1797_ == 0)
{
v___y_1786_ = v___y_1796_;
v___y_1787_ = v___y_1798_;
v___y_1788_ = v___y_1799_;
v___y_1789_ = v___y_1802_;
v___y_1790_ = v___y_1801_;
goto v___jp_1785_;
}
else
{
if (v___y_1802_ == 0)
{
v___y_1786_ = v___y_1796_;
v___y_1787_ = v___y_1798_;
v___y_1788_ = v___y_1799_;
v___y_1789_ = v___y_1802_;
v___y_1790_ = v___y_1801_;
goto v___jp_1785_;
}
else
{
uint8_t v___x_1803_; 
lean_inc_ref(v___y_1799_);
v___x_1803_ = l_Lean_Markdown_isRawTextTagName(v_s_1746_, v___y_1799_);
if (v___x_1803_ == 0)
{
v___y_1786_ = v___y_1796_;
v___y_1787_ = v___y_1798_;
v___y_1788_ = v___y_1799_;
v___y_1789_ = v___y_1802_;
v___y_1790_ = v___y_1801_;
goto v___jp_1785_;
}
else
{
lean_object* v___x_1804_; 
lean_dec_ref(v___y_1801_);
lean_dec_ref(v___y_1799_);
lean_dec(v___y_1798_);
lean_dec(v___y_1796_);
lean_dec(v_stop_1771_);
v___x_1804_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__4));
return v___x_1804_;
}
}
}
}
else
{
v___y_1786_ = v___y_1796_;
v___y_1787_ = v___y_1798_;
v___y_1788_ = v___y_1799_;
v___y_1789_ = v___y_1802_;
v___y_1790_ = v___y_1801_;
goto v___jp_1785_;
}
}
v___jp_1805_:
{
lean_object* v_count_1810_; lean_object* v___x_1812_; 
v_count_1810_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v___y_1806_);
if (v_isShared_1766_ == 0)
{
lean_ctor_set(v___x_1765_, 1, v_count_1810_);
lean_ctor_set(v___x_1765_, 0, v___y_1806_);
v___x_1812_ = v___x_1765_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v___y_1806_);
lean_ctor_set(v_reuseFailAlloc_1833_, 1, v_count_1810_);
v___x_1812_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
lean_object* v___x_1813_; lean_object* v_fst_1814_; lean_object* v_pos_1815_; lean_object* v_pos_1816_; lean_object* v_stop_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; uint8_t v___x_1821_; 
v___x_1813_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f_spec__0___redArg(v_s_1746_, v___x_1812_);
v_fst_1814_ = lean_ctor_get(v___x_1813_, 0);
lean_inc(v_fst_1814_);
lean_dec_ref(v___x_1813_);
v_pos_1815_ = lean_ctor_get(v___y_1806_, 0);
lean_inc(v_pos_1815_);
lean_dec_ref(v___y_1806_);
v_pos_1816_ = lean_ctor_get(v_fst_1814_, 0);
lean_inc_n(v_pos_1816_, 2);
v_stop_1817_ = lean_ctor_get(v_fst_1814_, 1);
lean_inc(v_stop_1817_);
lean_dec(v_fst_1814_);
v___x_1818_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_1815_, v_pos_1816_);
v___x_1819_ = lean_unsigned_to_nat(1u);
v___x_1820_ = lean_nat_add(v_pos_1816_, v___x_1819_);
v___x_1821_ = lean_nat_dec_le(v___x_1820_, v_stop_1817_);
lean_dec(v___x_1820_);
if (v___x_1821_ == 0)
{
v___y_1796_ = v_pos_1816_;
v___y_1797_ = v___y_1809_;
v___y_1798_ = v_stop_1817_;
v___y_1799_ = v___x_1818_;
v___y_1800_ = v___y_1808_;
v___y_1801_ = v___y_1807_;
v___y_1802_ = v___x_1768_;
goto v___jp_1795_;
}
else
{
lean_object* v___x_1822_; 
v___x_1822_ = l_String_Slice_Pos_get_x3f(v_s_1746_, v_pos_1816_);
if (lean_obj_tag(v___x_1822_) == 0)
{
v___y_1796_ = v_pos_1816_;
v___y_1797_ = v___y_1809_;
v___y_1798_ = v_stop_1817_;
v___y_1799_ = v___x_1818_;
v___y_1800_ = v___y_1808_;
v___y_1801_ = v___y_1807_;
v___y_1802_ = v___x_1768_;
goto v___jp_1795_;
}
else
{
lean_object* v_val_1823_; uint32_t v___x_1824_; uint32_t v___x_1825_; uint8_t v___x_1826_; 
v_val_1823_ = lean_ctor_get(v___x_1822_, 0);
lean_inc(v_val_1823_);
lean_dec_ref_known(v___x_1822_, 1);
v___x_1824_ = 32;
v___x_1825_ = lean_unbox_uint32(v_val_1823_);
v___x_1826_ = lean_uint32_dec_eq(v___x_1825_, v___x_1824_);
if (v___x_1826_ == 0)
{
uint32_t v___x_1827_; uint32_t v___x_1828_; uint8_t v___x_1829_; 
v___x_1827_ = 9;
v___x_1828_ = lean_unbox_uint32(v_val_1823_);
v___x_1829_ = lean_uint32_dec_eq(v___x_1828_, v___x_1827_);
if (v___x_1829_ == 0)
{
uint32_t v___x_1830_; uint32_t v___x_1831_; uint8_t v___x_1832_; 
v___x_1830_ = 62;
v___x_1831_ = lean_unbox_uint32(v_val_1823_);
lean_dec(v_val_1823_);
v___x_1832_ = lean_uint32_dec_eq(v___x_1831_, v___x_1830_);
if (v___x_1832_ == 0)
{
v___y_1796_ = v_pos_1816_;
v___y_1797_ = v___y_1809_;
v___y_1798_ = v_stop_1817_;
v___y_1799_ = v___x_1818_;
v___y_1800_ = v___y_1808_;
v___y_1801_ = v___y_1807_;
v___y_1802_ = v___x_1832_;
goto v___jp_1795_;
}
else
{
v___y_1796_ = v_pos_1816_;
v___y_1797_ = v___y_1809_;
v___y_1798_ = v_stop_1817_;
v___y_1799_ = v___x_1818_;
v___y_1800_ = v___y_1808_;
v___y_1801_ = v___y_1807_;
v___y_1802_ = v___x_1768_;
goto v___jp_1795_;
}
}
else
{
lean_dec(v_val_1823_);
v___y_1796_ = v_pos_1816_;
v___y_1797_ = v___y_1809_;
v___y_1798_ = v_stop_1817_;
v___y_1799_ = v___x_1818_;
v___y_1800_ = v___y_1808_;
v___y_1801_ = v___y_1807_;
v___y_1802_ = v___x_1768_;
goto v___jp_1795_;
}
}
else
{
lean_dec(v_val_1823_);
v___y_1796_ = v_pos_1816_;
v___y_1797_ = v___y_1809_;
v___y_1798_ = v_stop_1817_;
v___y_1799_ = v___x_1818_;
v___y_1800_ = v___y_1808_;
v___y_1801_ = v___y_1807_;
v___y_1802_ = v___x_1768_;
goto v___jp_1795_;
}
}
}
}
}
v___jp_1834_:
{
uint32_t v___x_1839_; uint8_t v___x_1840_; 
v___x_1839_ = 97;
v___x_1840_ = lean_uint32_dec_le(v___x_1839_, v___y_1836_);
if (v___x_1840_ == 0)
{
lean_object* v___x_1841_; 
lean_dec_ref(v___y_1838_);
lean_dec_ref(v___y_1835_);
lean_dec(v_stop_1771_);
lean_del_object(v___x_1765_);
v___x_1841_ = lean_box(0);
return v___x_1841_;
}
else
{
uint32_t v___x_1842_; uint8_t v___x_1843_; 
v___x_1842_ = 122;
v___x_1843_ = lean_uint32_dec_le(v___y_1836_, v___x_1842_);
if (v___x_1843_ == 0)
{
lean_object* v___x_1844_; 
lean_dec_ref(v___y_1838_);
lean_dec_ref(v___y_1835_);
lean_dec(v_stop_1771_);
lean_del_object(v___x_1765_);
v___x_1844_ = lean_box(0);
return v___x_1844_;
}
else
{
v___y_1806_ = v___y_1835_;
v___y_1807_ = v___y_1838_;
v___y_1808_ = v___y_1837_;
v___y_1809_ = v___x_1843_;
goto v___jp_1805_;
}
}
}
v___jp_1845_:
{
lean_object* v___x_1851_; lean_object* v___x_1852_; uint8_t v___x_1853_; 
v___x_1851_ = lean_unsigned_to_nat(1u);
v___x_1852_ = lean_nat_add(v_pos_1849_, v___x_1851_);
v___x_1853_ = lean_nat_dec_le(v___x_1852_, v_stop_1850_);
lean_dec(v_stop_1850_);
lean_dec(v___x_1852_);
if (v___x_1853_ == 0)
{
lean_object* v___x_1854_; 
lean_dec(v_pos_1849_);
lean_dec_ref(v___y_1848_);
lean_dec_ref(v___y_1847_);
lean_dec(v_stop_1771_);
lean_del_object(v___x_1765_);
v___x_1854_ = lean_box(0);
return v___x_1854_;
}
else
{
lean_object* v___x_1855_; 
v___x_1855_ = l_String_Slice_Pos_get_x3f(v_s_1746_, v_pos_1849_);
lean_dec(v_pos_1849_);
if (lean_obj_tag(v___x_1855_) == 0)
{
lean_object* v___x_1856_; 
lean_dec_ref(v___y_1848_);
lean_dec_ref(v___y_1847_);
lean_dec(v_stop_1771_);
lean_del_object(v___x_1765_);
v___x_1856_ = lean_box(0);
return v___x_1856_;
}
else
{
lean_object* v_val_1857_; uint32_t v___x_1858_; uint32_t v___x_1859_; uint8_t v___x_1860_; 
v_val_1857_ = lean_ctor_get(v___x_1855_, 0);
lean_inc(v_val_1857_);
lean_dec_ref_known(v___x_1855_, 1);
v___x_1858_ = 65;
v___x_1859_ = lean_unbox_uint32(v_val_1857_);
v___x_1860_ = lean_uint32_dec_le(v___x_1858_, v___x_1859_);
if (v___x_1860_ == 0)
{
uint32_t v___x_1861_; 
v___x_1861_ = lean_unbox_uint32(v_val_1857_);
lean_dec(v_val_1857_);
v___y_1835_ = v___y_1848_;
v___y_1836_ = v___x_1861_;
v___y_1837_ = v___y_1846_;
v___y_1838_ = v___y_1847_;
goto v___jp_1834_;
}
else
{
uint32_t v___x_1862_; uint32_t v___x_1863_; uint8_t v___x_1864_; 
v___x_1862_ = 90;
v___x_1863_ = lean_unbox_uint32(v_val_1857_);
v___x_1864_ = lean_uint32_dec_le(v___x_1863_, v___x_1862_);
if (v___x_1864_ == 0)
{
uint32_t v___x_1865_; 
v___x_1865_ = lean_unbox_uint32(v_val_1857_);
lean_dec(v_val_1857_);
v___y_1835_ = v___y_1848_;
v___y_1836_ = v___x_1865_;
v___y_1837_ = v___y_1846_;
v___y_1838_ = v___y_1847_;
goto v___jp_1834_;
}
else
{
lean_dec(v_val_1857_);
v___y_1806_ = v___y_1848_;
v___y_1807_ = v___y_1847_;
v___y_1808_ = v___y_1846_;
v___y_1809_ = v___x_1864_;
goto v___jp_1805_;
}
}
}
}
}
v___jp_1866_:
{
lean_object* v___x_1869_; uint8_t v___x_1870_; 
v___x_1869_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__5, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__5_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__5);
v___x_1870_ = l_instBEqOption_beq___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__0(v___y_1868_, v___x_1869_);
lean_dec(v___y_1868_);
if (v___x_1870_ == 0)
{
lean_object* v_pos_1871_; lean_object* v_stop_1872_; 
v_pos_1871_ = lean_ctor_get(v___y_1867_, 0);
lean_inc(v_pos_1871_);
v_stop_1872_ = lean_ctor_get(v___y_1867_, 1);
lean_inc(v_stop_1872_);
lean_inc_ref(v___y_1867_);
v___y_1846_ = v___x_1870_;
v___y_1847_ = v___y_1867_;
v___y_1848_ = v___y_1867_;
v_pos_1849_ = v_pos_1871_;
v_stop_1850_ = v_stop_1872_;
goto v___jp_1845_;
}
else
{
lean_object* v_pos_1873_; lean_object* v_stop_1874_; lean_object* v_col_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; uint8_t v___x_1878_; 
v_pos_1873_ = lean_ctor_get(v___y_1867_, 0);
v_stop_1874_ = lean_ctor_get(v___y_1867_, 1);
lean_inc(v_stop_1874_);
v_col_1875_ = lean_ctor_get(v___y_1867_, 2);
v___x_1876_ = lean_unsigned_to_nat(1u);
v___x_1877_ = lean_nat_add(v_pos_1873_, v___x_1876_);
v___x_1878_ = lean_nat_dec_le(v___x_1877_, v_stop_1874_);
lean_dec(v___x_1877_);
if (v___x_1878_ == 0)
{
lean_inc(v_pos_1873_);
lean_inc_ref(v___y_1867_);
v___y_1846_ = v___x_1870_;
v___y_1847_ = v___y_1867_;
v___y_1848_ = v___y_1867_;
v_pos_1849_ = v_pos_1873_;
v_stop_1850_ = v_stop_1874_;
goto v___jp_1845_;
}
else
{
lean_object* v_str_1879_; lean_object* v_startInclusive_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; uint8_t v___x_1885_; lean_object* v___x_1886_; 
v_str_1879_ = lean_ctor_get(v_s_1746_, 0);
v_startInclusive_1880_ = lean_ctor_get(v_s_1746_, 1);
v___x_1881_ = lean_nat_add(v_startInclusive_1880_, v_pos_1873_);
v___x_1882_ = lean_string_utf8_next_fast(v_str_1879_, v___x_1881_);
lean_dec(v___x_1881_);
v___x_1883_ = lean_nat_sub(v___x_1882_, v_startInclusive_1880_);
v___x_1884_ = lean_nat_add(v_col_1875_, v___x_1876_);
v___x_1885_ = 0;
lean_inc(v_stop_1874_);
lean_inc(v___x_1883_);
v___x_1886_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1886_, 0, v___x_1883_);
lean_ctor_set(v___x_1886_, 1, v_stop_1874_);
lean_ctor_set(v___x_1886_, 2, v___x_1884_);
lean_ctor_set_uint8(v___x_1886_, sizeof(void*)*3, v___x_1885_);
v___y_1846_ = v___x_1870_;
v___y_1847_ = v___y_1867_;
v___y_1848_ = v___x_1886_;
v_pos_1849_ = v___x_1883_;
v_stop_1850_ = v_stop_1874_;
goto v___jp_1845_;
}
}
}
v___jp_1887_:
{
lean_object* v___x_1891_; lean_object* v___x_1892_; uint8_t v___x_1893_; 
v___x_1891_ = lean_unsigned_to_nat(1u);
v___x_1892_ = lean_nat_add(v_pos_1889_, v___x_1891_);
v___x_1893_ = lean_nat_dec_le(v___x_1892_, v_stop_1890_);
lean_dec(v_stop_1890_);
lean_dec(v___x_1892_);
if (v___x_1893_ == 0)
{
lean_object* v___x_1894_; 
lean_dec(v_pos_1889_);
v___x_1894_ = lean_box(0);
v___y_1867_ = v___y_1888_;
v___y_1868_ = v___x_1894_;
goto v___jp_1866_;
}
else
{
lean_object* v___x_1895_; 
v___x_1895_ = l_String_Slice_Pos_get_x3f(v_s_1746_, v_pos_1889_);
lean_dec(v_pos_1889_);
v___y_1867_ = v___y_1888_;
v___y_1868_ = v___x_1895_;
goto v___jp_1866_;
}
}
v___jp_1896_:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; uint8_t v___x_1902_; 
v___x_1900_ = lean_unsigned_to_nat(1u);
v___x_1901_ = lean_nat_add(v_pos_1898_, v___x_1900_);
v___x_1902_ = lean_nat_dec_le(v___x_1901_, v_stop_1899_);
lean_dec(v___x_1901_);
if (v___x_1902_ == 0)
{
v___y_1888_ = v___y_1897_;
v_pos_1889_ = v_pos_1898_;
v_stop_1890_ = v_stop_1899_;
goto v___jp_1887_;
}
else
{
lean_object* v___x_1903_; 
v___x_1903_ = l_String_Slice_Pos_get_x3f(v_s_1746_, v_pos_1898_);
if (lean_obj_tag(v___x_1903_) == 1)
{
lean_object* v_val_1904_; uint32_t v___x_1905_; uint32_t v___x_1906_; uint8_t v___x_1907_; 
v_val_1904_ = lean_ctor_get(v___x_1903_, 0);
lean_inc(v_val_1904_);
lean_dec_ref_known(v___x_1903_, 1);
v___x_1905_ = 33;
v___x_1906_ = lean_unbox_uint32(v_val_1904_);
v___x_1907_ = lean_uint32_dec_eq(v___x_1906_, v___x_1905_);
if (v___x_1907_ == 0)
{
uint32_t v___x_1908_; uint32_t v___x_1909_; uint8_t v___x_1910_; 
v___x_1908_ = 63;
v___x_1909_ = lean_unbox_uint32(v_val_1904_);
lean_dec(v_val_1904_);
v___x_1910_ = lean_uint32_dec_eq(v___x_1909_, v___x_1908_);
if (v___x_1910_ == 0)
{
v___y_1888_ = v___y_1897_;
v_pos_1889_ = v_pos_1898_;
v_stop_1890_ = v_stop_1899_;
goto v___jp_1887_;
}
else
{
lean_object* v___x_1911_; 
lean_dec(v_stop_1899_);
lean_dec(v_pos_1898_);
lean_dec_ref(v___y_1897_);
lean_dec(v_stop_1771_);
lean_del_object(v___x_1765_);
v___x_1911_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__6));
return v___x_1911_;
}
}
else
{
lean_object* v_str_1912_; lean_object* v_startInclusive_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; uint8_t v___x_1919_; uint8_t v___x_1920_; 
lean_dec(v_val_1904_);
lean_dec_ref(v___y_1897_);
lean_dec(v_stop_1771_);
lean_del_object(v___x_1765_);
v_str_1912_ = lean_ctor_get(v_s_1746_, 0);
v_startInclusive_1913_ = lean_ctor_get(v_s_1746_, 1);
v___x_1914_ = lean_nat_add(v_startInclusive_1913_, v_pos_1898_);
lean_dec(v_pos_1898_);
v___x_1915_ = lean_string_utf8_next_fast(v_str_1912_, v___x_1914_);
lean_dec(v___x_1914_);
v___x_1916_ = lean_nat_sub(v___x_1915_, v_startInclusive_1913_);
lean_inc(v_stop_1899_);
lean_inc(v___x_1916_);
v___x_1917_ = l_Lean_Markdown_subsliceClamped___redArg(v___x_1916_, v_stop_1899_);
v___x_1918_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__7));
v___x_1919_ = 0;
lean_inc_ref(v___x_1917_);
v___x_1920_ = l_Lean_Markdown_startsWithAscii(v_s_1746_, v___x_1917_, v___x_1918_, v___x_1919_);
if (v___x_1920_ == 0)
{
lean_object* v___x_1921_; uint8_t v___x_1922_; 
v___x_1921_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__8));
v___x_1922_ = l_Lean_Markdown_startsWithAscii(v_s_1746_, v___x_1917_, v___x_1921_, v___x_1920_);
if (v___x_1922_ == 0)
{
lean_object* v___x_1923_; uint8_t v___x_1924_; 
v___x_1923_ = lean_nat_add(v___x_1916_, v___x_1900_);
v___x_1924_ = lean_nat_dec_le(v___x_1923_, v_stop_1899_);
lean_dec(v_stop_1899_);
lean_dec(v___x_1923_);
if (v___x_1924_ == 0)
{
lean_object* v___x_1925_; 
lean_dec(v___x_1916_);
v___x_1925_ = lean_box(0);
return v___x_1925_;
}
else
{
lean_object* v___x_1926_; 
v___x_1926_ = l_String_Slice_Pos_get_x3f(v_s_1746_, v___x_1916_);
lean_dec(v___x_1916_);
if (lean_obj_tag(v___x_1926_) == 0)
{
lean_object* v___x_1927_; 
v___x_1927_ = lean_box(0);
return v___x_1927_;
}
else
{
lean_object* v_val_1928_; uint32_t v___x_1929_; uint32_t v___x_1930_; uint8_t v___x_1931_; 
v_val_1928_ = lean_ctor_get(v___x_1926_, 0);
lean_inc(v_val_1928_);
lean_dec_ref_known(v___x_1926_, 1);
v___x_1929_ = 65;
v___x_1930_ = lean_unbox_uint32(v_val_1928_);
v___x_1931_ = lean_uint32_dec_le(v___x_1929_, v___x_1930_);
if (v___x_1931_ == 0)
{
uint32_t v___x_1932_; 
v___x_1932_ = lean_unbox_uint32(v_val_1928_);
lean_dec(v_val_1928_);
v___y_1755_ = v___x_1932_;
goto v___jp_1754_;
}
else
{
uint32_t v___x_1933_; uint32_t v___x_1934_; uint8_t v___x_1935_; 
v___x_1933_ = 90;
v___x_1934_ = lean_unbox_uint32(v_val_1928_);
v___x_1935_ = lean_uint32_dec_le(v___x_1934_, v___x_1933_);
if (v___x_1935_ == 0)
{
uint32_t v___x_1936_; 
v___x_1936_ = lean_unbox_uint32(v_val_1928_);
lean_dec(v_val_1928_);
v___y_1755_ = v___x_1936_;
goto v___jp_1754_;
}
else
{
lean_dec(v_val_1928_);
goto v___jp_1752_;
}
}
}
}
}
else
{
lean_object* v___x_1937_; 
lean_dec(v___x_1916_);
lean_dec(v_stop_1899_);
v___x_1937_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__9));
return v___x_1937_;
}
}
else
{
lean_object* v___x_1938_; 
lean_dec_ref(v___x_1917_);
lean_dec(v___x_1916_);
lean_dec(v_stop_1899_);
v___x_1938_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__10));
return v___x_1938_;
}
}
}
else
{
lean_dec(v___x_1903_);
v___y_1888_ = v___y_1897_;
v_pos_1889_ = v_pos_1898_;
v_stop_1890_ = v_stop_1899_;
goto v___jp_1887_;
}
}
}
v___jp_1939_:
{
lean_object* v___x_1941_; uint8_t v___x_1942_; 
v___x_1941_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__11, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__11_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__11);
v___x_1942_ = l_instBEqOption_beq___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__0(v___y_1940_, v___x_1941_);
lean_dec(v___y_1940_);
if (v___x_1942_ == 0)
{
lean_object* v___x_1943_; 
lean_dec(v_stop_1771_);
lean_dec(v_pos_1770_);
lean_del_object(v___x_1765_);
lean_dec_ref(v_after_1762_);
v___x_1943_ = lean_box(0);
return v___x_1943_;
}
else
{
lean_object* v___x_1944_; lean_object* v___x_1945_; uint8_t v___x_1946_; 
v___x_1944_ = lean_unsigned_to_nat(1u);
v___x_1945_ = lean_nat_add(v_pos_1770_, v___x_1944_);
v___x_1946_ = lean_nat_dec_le(v___x_1945_, v_stop_1771_);
lean_dec(v___x_1945_);
if (v___x_1946_ == 0)
{
lean_inc(v_stop_1771_);
v___y_1897_ = v_after_1762_;
v_pos_1898_ = v_pos_1770_;
v_stop_1899_ = v_stop_1771_;
goto v___jp_1896_;
}
else
{
lean_object* v___x_1948_; uint8_t v_isShared_1949_; uint8_t v_isSharedCheck_1960_; 
lean_inc(v_col_1772_);
v_isSharedCheck_1960_ = !lean_is_exclusive(v_after_1762_);
if (v_isSharedCheck_1960_ == 0)
{
lean_object* v_unused_1961_; lean_object* v_unused_1962_; lean_object* v_unused_1963_; 
v_unused_1961_ = lean_ctor_get(v_after_1762_, 2);
lean_dec(v_unused_1961_);
v_unused_1962_ = lean_ctor_get(v_after_1762_, 1);
lean_dec(v_unused_1962_);
v_unused_1963_ = lean_ctor_get(v_after_1762_, 0);
lean_dec(v_unused_1963_);
v___x_1948_ = v_after_1762_;
v_isShared_1949_ = v_isSharedCheck_1960_;
goto v_resetjp_1947_;
}
else
{
lean_dec(v_after_1762_);
v___x_1948_ = lean_box(0);
v_isShared_1949_ = v_isSharedCheck_1960_;
goto v_resetjp_1947_;
}
v_resetjp_1947_:
{
lean_object* v_str_1950_; lean_object* v_startInclusive_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; uint8_t v___x_1956_; lean_object* v___x_1958_; 
v_str_1950_ = lean_ctor_get(v_s_1746_, 0);
v_startInclusive_1951_ = lean_ctor_get(v_s_1746_, 1);
v___x_1952_ = lean_nat_add(v_startInclusive_1951_, v_pos_1770_);
lean_dec(v_pos_1770_);
v___x_1953_ = lean_string_utf8_next_fast(v_str_1950_, v___x_1952_);
lean_dec(v___x_1952_);
v___x_1954_ = lean_nat_sub(v___x_1953_, v_startInclusive_1951_);
v___x_1955_ = lean_nat_add(v_col_1772_, v___x_1944_);
lean_dec(v_col_1772_);
v___x_1956_ = 0;
lean_inc(v_stop_1771_);
lean_inc(v___x_1954_);
if (v_isShared_1949_ == 0)
{
lean_ctor_set(v___x_1948_, 2, v___x_1955_);
lean_ctor_set(v___x_1948_, 0, v___x_1954_);
v___x_1958_ = v___x_1948_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v___x_1954_);
lean_ctor_set(v_reuseFailAlloc_1959_, 1, v_stop_1771_);
lean_ctor_set(v_reuseFailAlloc_1959_, 2, v___x_1955_);
v___x_1958_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
lean_ctor_set_uint8(v___x_1958_, sizeof(void*)*3, v___x_1956_);
lean_inc(v_stop_1771_);
v___y_1897_ = v___x_1958_;
v_pos_1898_ = v___x_1954_;
v_stop_1899_ = v_stop_1771_;
goto v___jp_1896_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___boxed(lean_object* v_s_1970_, lean_object* v_line_1971_){
_start:
{
lean_object* v_res_1972_; 
v_res_1972_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f(v_s_1970_, v_line_1971_);
lean_dec_ref(v_s_1970_);
return v_res_1972_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f_spec__0(lean_object* v_s_1973_, lean_object* v_inst_1974_, lean_object* v_a_1975_){
_start:
{
lean_object* v___x_1976_; 
v___x_1976_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f_spec__0___redArg(v_s_1973_, v_a_1975_);
return v___x_1976_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f_spec__0___boxed(lean_object* v_s_1977_, lean_object* v_inst_1978_, lean_object* v_a_1979_){
_start:
{
lean_object* v_res_1980_; 
v_res_1980_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f_spec__0(v_s_1977_, v_inst_1978_, v_a_1979_);
lean_dec_ref(v_s_1977_);
return v_res_1980_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_listMarkerInterruptsParagraph(lean_object* v_s_1981_, lean_object* v_after_1982_, lean_object* v_kind_1983_){
_start:
{
uint8_t v___x_1984_; 
v___x_1984_ = l_Lean_Markdown_Cursor_isBlank(v_s_1981_, v_after_1982_);
if (v___x_1984_ == 0)
{
if (lean_obj_tag(v_kind_1983_) == 0)
{
uint8_t v___x_1985_; 
v___x_1985_ = 1;
return v___x_1985_;
}
else
{
lean_object* v_start_1986_; lean_object* v___x_1987_; uint8_t v___x_1988_; 
v_start_1986_ = lean_ctor_get(v_kind_1983_, 0);
v___x_1987_ = lean_unsigned_to_nat(1u);
v___x_1988_ = lean_nat_dec_eq(v_start_1986_, v___x_1987_);
return v___x_1988_;
}
}
else
{
uint8_t v___x_1989_; 
v___x_1989_ = 0;
return v___x_1989_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_listMarkerInterruptsParagraph___boxed(lean_object* v_s_1990_, lean_object* v_after_1991_, lean_object* v_kind_1992_){
_start:
{
uint8_t v_res_1993_; lean_object* v_r_1994_; 
v_res_1993_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_listMarkerInterruptsParagraph(v_s_1990_, v_after_1991_, v_kind_1992_);
lean_dec_ref(v_kind_1992_);
lean_dec_ref(v_s_1990_);
v_r_1994_ = lean_box(v_res_1993_);
return v_r_1994_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_isInterrupt(lean_object* v_s_1995_, lean_object* v_line_1996_){
_start:
{
lean_object* v_after_1997_; lean_object* v_pos_1998_; lean_object* v_stop_1999_; uint8_t v___x_2000_; 
v_after_1997_ = lean_ctor_get(v_line_1996_, 0);
v_pos_1998_ = lean_ctor_get(v_after_1997_, 0);
v_stop_1999_ = lean_ctor_get(v_after_1997_, 1);
v___x_2000_ = lean_nat_dec_le(v_stop_1999_, v_pos_1998_);
if (v___x_2000_ == 0)
{
lean_object* v___x_2001_; 
lean_inc_ref(v_line_1996_);
v___x_2001_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f(v_s_1995_, v_line_1996_);
if (lean_obj_tag(v___x_2001_) == 0)
{
lean_object* v___x_2002_; 
lean_inc_ref(v_line_1996_);
v___x_2002_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f(v_s_1995_, v_line_1996_);
if (lean_obj_tag(v___x_2002_) == 0)
{
lean_object* v___x_2003_; 
lean_inc_ref(v_line_1996_);
v___x_2003_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f(v_s_1995_, v_line_1996_);
if (lean_obj_tag(v___x_2003_) == 0)
{
lean_object* v___x_2004_; 
lean_inc_ref(v_line_1996_);
v___x_2004_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f(v_s_1995_, v_line_1996_);
if (lean_obj_tag(v___x_2004_) == 0)
{
lean_object* v___x_2005_; 
lean_inc_ref(v_line_1996_);
v___x_2005_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f(v_s_1995_, v_line_1996_);
if (lean_obj_tag(v___x_2005_) == 0)
{
uint8_t v___x_2006_; 
v___x_2006_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_isThematicBreak(v_s_1995_, v_line_1996_);
return v___x_2006_;
}
else
{
lean_object* v_val_2007_; uint8_t v___x_2008_; uint8_t v___x_2009_; 
v_val_2007_ = lean_ctor_get(v___x_2005_, 0);
lean_inc(v_val_2007_);
lean_dec_ref_known(v___x_2005_, 1);
v___x_2008_ = lean_unbox(v_val_2007_);
lean_dec(v_val_2007_);
v___x_2009_ = l_Lean_Markdown_HtmlBlockKind_interruptsParagraph(v___x_2008_);
if (v___x_2009_ == 0)
{
uint8_t v___x_2010_; 
v___x_2010_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_isThematicBreak(v_s_1995_, v_line_1996_);
return v___x_2010_;
}
else
{
lean_dec_ref(v_line_1996_);
return v___x_2009_;
}
}
}
else
{
uint8_t v___x_2011_; 
lean_dec_ref_known(v___x_2004_, 1);
lean_dec_ref(v_line_1996_);
v___x_2011_ = 1;
return v___x_2011_;
}
}
else
{
uint8_t v___x_2012_; 
lean_dec_ref_known(v___x_2003_, 1);
lean_dec_ref(v_line_1996_);
v___x_2012_ = 1;
return v___x_2012_;
}
}
else
{
uint8_t v___x_2013_; 
lean_dec_ref_known(v___x_2002_, 1);
lean_dec_ref(v_line_1996_);
v___x_2013_ = 1;
return v___x_2013_;
}
}
else
{
uint8_t v___x_2014_; 
lean_dec_ref_known(v___x_2001_, 1);
lean_dec_ref(v_line_1996_);
v___x_2014_ = 1;
return v___x_2014_;
}
}
else
{
lean_dec_ref(v_line_1996_);
return v___x_2000_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_isInterrupt___boxed(lean_object* v_s_2015_, lean_object* v_line_2016_){
_start:
{
uint8_t v_res_2017_; lean_object* v_r_2018_; 
v_res_2017_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_isInterrupt(v_s_2015_, v_line_2016_);
lean_dec_ref(v_s_2015_);
v_r_2018_ = lean_box(v_res_2017_);
return v_r_2018_;
}
}
static lean_object* _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0(void){
_start:
{
lean_object* v___x_2019_; 
v___x_2019_ = l_Lean_Markdown_BlockZipper_empty___redArg();
return v___x_2019_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg(lean_object* v_a_2020_){
_start:
{
lean_object* v_cursor_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; 
v_cursor_2021_ = lean_ctor_get(v_a_2020_, 1);
v___x_2022_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
lean_inc_ref(v_cursor_2021_);
v___x_2023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2022_);
lean_ctor_set(v___x_2023_, 1, v_cursor_2021_);
v___x_2024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2024_, 0, v_a_2020_);
lean_ctor_set(v___x_2024_, 1, v___x_2023_);
return v___x_2024_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState(lean_object* v_s_2025_, lean_object* v_a_2026_){
_start:
{
lean_object* v_cursor_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
v_cursor_2027_ = lean_ctor_get(v_a_2026_, 1);
v___x_2028_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
lean_inc_ref(v_cursor_2027_);
v___x_2029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2029_, 0, v___x_2028_);
lean_ctor_set(v___x_2029_, 1, v_cursor_2027_);
v___x_2030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2030_, 0, v_a_2026_);
lean_ctor_set(v___x_2030_, 1, v___x_2029_);
return v___x_2030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___boxed(lean_object* v_s_2031_, lean_object* v_a_2032_){
_start:
{
lean_object* v_res_2033_; 
v_res_2033_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState(v_s_2031_, v_a_2032_);
lean_dec_ref(v_s_2031_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ContainerM_takeState___redArg(lean_object* v_a_2034_){
_start:
{
lean_object* v_toLineState_2035_; lean_object* v_cursor_2036_; lean_object* v___x_2038_; uint8_t v_isShared_2039_; uint8_t v_isSharedCheck_2047_; 
v_toLineState_2035_ = lean_ctor_get(v_a_2034_, 0);
lean_inc_ref(v_toLineState_2035_);
v_cursor_2036_ = lean_ctor_get(v_toLineState_2035_, 1);
v_isSharedCheck_2047_ = !lean_is_exclusive(v_toLineState_2035_);
if (v_isSharedCheck_2047_ == 0)
{
lean_object* v_unused_2048_; 
v_unused_2048_ = lean_ctor_get(v_toLineState_2035_, 0);
lean_dec(v_unused_2048_);
v___x_2038_ = v_toLineState_2035_;
v_isShared_2039_ = v_isSharedCheck_2047_;
goto v_resetjp_2037_;
}
else
{
lean_inc(v_cursor_2036_);
lean_dec(v_toLineState_2035_);
v___x_2038_ = lean_box(0);
v_isShared_2039_ = v_isSharedCheck_2047_;
goto v_resetjp_2037_;
}
v_resetjp_2037_:
{
lean_object* v___x_2040_; lean_object* v___x_2042_; 
v___x_2040_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_2039_ == 0)
{
lean_ctor_set(v___x_2038_, 0, v___x_2040_);
v___x_2042_ = v___x_2038_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2040_);
lean_ctor_set(v_reuseFailAlloc_2046_, 1, v_cursor_2036_);
v___x_2042_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2043_ = lean_unsigned_to_nat(0u);
v___x_2044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2044_, 0, v___x_2042_);
lean_ctor_set(v___x_2044_, 1, v___x_2043_);
v___x_2045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2045_, 0, v_a_2034_);
lean_ctor_set(v___x_2045_, 1, v___x_2044_);
return v___x_2045_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ContainerM_takeState(lean_object* v_s_2049_, lean_object* v_a_2050_){
_start:
{
lean_object* v_toLineState_2051_; lean_object* v_cursor_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2063_; 
v_toLineState_2051_ = lean_ctor_get(v_a_2050_, 0);
lean_inc_ref(v_toLineState_2051_);
v_cursor_2052_ = lean_ctor_get(v_toLineState_2051_, 1);
v_isSharedCheck_2063_ = !lean_is_exclusive(v_toLineState_2051_);
if (v_isSharedCheck_2063_ == 0)
{
lean_object* v_unused_2064_; 
v_unused_2064_ = lean_ctor_get(v_toLineState_2051_, 0);
lean_dec(v_unused_2064_);
v___x_2054_ = v_toLineState_2051_;
v_isShared_2055_ = v_isSharedCheck_2063_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_cursor_2052_);
lean_dec(v_toLineState_2051_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2063_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v___x_2056_; lean_object* v___x_2058_; 
v___x_2056_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_2055_ == 0)
{
lean_ctor_set(v___x_2054_, 0, v___x_2056_);
v___x_2058_ = v___x_2054_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v___x_2056_);
lean_ctor_set(v_reuseFailAlloc_2062_, 1, v_cursor_2052_);
v___x_2058_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; 
v___x_2059_ = lean_unsigned_to_nat(0u);
v___x_2060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2060_, 0, v___x_2058_);
lean_ctor_set(v___x_2060_, 1, v___x_2059_);
v___x_2061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2061_, 0, v_a_2050_);
lean_ctor_set(v___x_2061_, 1, v___x_2060_);
return v___x_2061_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ContainerM_takeState___boxed(lean_object* v_s_2065_, lean_object* v_a_2066_){
_start:
{
lean_object* v_res_2067_; 
v_res_2067_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ContainerM_takeState(v_s_2065_, v_a_2066_);
lean_dec_ref(v_s_2065_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishLine___redArg(lean_object* v_inst_2068_, lean_object* v_z_2069_){
_start:
{
lean_object* v_throw_2070_; lean_object* v___x_2071_; 
v_throw_2070_ = lean_ctor_get(v_inst_2068_, 0);
lean_inc(v_throw_2070_);
lean_dec_ref(v_inst_2068_);
v___x_2071_ = lean_apply_2(v_throw_2070_, lean_box(0), v_z_2069_);
return v___x_2071_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishLine(lean_object* v_s_2072_, lean_object* v_m_2073_, lean_object* v_00_u03b1_2074_, lean_object* v_inst_2075_, lean_object* v_z_2076_){
_start:
{
lean_object* v_throw_2077_; lean_object* v___x_2078_; 
v_throw_2077_ = lean_ctor_get(v_inst_2075_, 0);
lean_inc(v_throw_2077_);
lean_dec_ref(v_inst_2075_);
v___x_2078_ = lean_apply_2(v_throw_2077_, lean_box(0), v_z_2076_);
return v___x_2078_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishLine___boxed(lean_object* v_s_2079_, lean_object* v_m_2080_, lean_object* v_00_u03b1_2081_, lean_object* v_inst_2082_, lean_object* v_z_2083_){
_start:
{
lean_object* v_res_2084_; 
v_res_2084_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishLine(v_s_2079_, v_m_2080_, v_00_u03b1_2081_, v_inst_2082_, v_z_2083_);
lean_dec_ref(v_s_2079_);
return v_res_2084_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishLineWith___redArg(lean_object* v_f_2085_, lean_object* v_a_2086_){
_start:
{
lean_object* v_zipper_2087_; lean_object* v_cursor_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2098_; 
v_zipper_2087_ = lean_ctor_get(v_a_2086_, 0);
v_cursor_2088_ = lean_ctor_get(v_a_2086_, 1);
v_isSharedCheck_2098_ = !lean_is_exclusive(v_a_2086_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2090_ = v_a_2086_;
v_isShared_2091_ = v_isSharedCheck_2098_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_cursor_2088_);
lean_inc(v_zipper_2087_);
lean_dec(v_a_2086_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2098_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v___x_2092_; lean_object* v___x_2094_; 
v___x_2092_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_2091_ == 0)
{
lean_ctor_set(v___x_2090_, 0, v___x_2092_);
v___x_2094_ = v___x_2090_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v___x_2092_);
lean_ctor_set(v_reuseFailAlloc_2097_, 1, v_cursor_2088_);
v___x_2094_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
lean_object* v___x_2095_; lean_object* v___x_2096_; 
v___x_2095_ = lean_apply_1(v_f_2085_, v_zipper_2087_);
v___x_2096_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2095_);
lean_ctor_set(v___x_2096_, 1, v___x_2094_);
return v___x_2096_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishLineWith(lean_object* v_s_2099_, lean_object* v_f_2100_, lean_object* v_a_2101_){
_start:
{
lean_object* v_zipper_2102_; lean_object* v_cursor_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2113_; 
v_zipper_2102_ = lean_ctor_get(v_a_2101_, 0);
v_cursor_2103_ = lean_ctor_get(v_a_2101_, 1);
v_isSharedCheck_2113_ = !lean_is_exclusive(v_a_2101_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2105_ = v_a_2101_;
v_isShared_2106_ = v_isSharedCheck_2113_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_cursor_2103_);
lean_inc(v_zipper_2102_);
lean_dec(v_a_2101_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2113_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2107_; lean_object* v___x_2109_; 
v___x_2107_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_2106_ == 0)
{
lean_ctor_set(v___x_2105_, 0, v___x_2107_);
v___x_2109_ = v___x_2105_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v___x_2107_);
lean_ctor_set(v_reuseFailAlloc_2112_, 1, v_cursor_2103_);
v___x_2109_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2110_ = lean_apply_1(v_f_2100_, v_zipper_2102_);
v___x_2111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2110_);
lean_ctor_set(v___x_2111_, 1, v___x_2109_);
return v___x_2111_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishLineWith___boxed(lean_object* v_s_2114_, lean_object* v_f_2115_, lean_object* v_a_2116_){
_start:
{
lean_object* v_res_2117_; 
v_res_2117_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishLineWith(v_s_2114_, v_f_2115_, v_a_2116_);
lean_dec_ref(v_s_2114_);
return v_res_2117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ContainerM_finishLineWith___redArg(lean_object* v_f_2118_, lean_object* v_a_2119_){
_start:
{
lean_object* v_toLineState_2120_; lean_object* v___x_2122_; uint8_t v_isShared_2123_; uint8_t v_isSharedCheck_2140_; 
v_toLineState_2120_ = lean_ctor_get(v_a_2119_, 0);
v_isSharedCheck_2140_ = !lean_is_exclusive(v_a_2119_);
if (v_isSharedCheck_2140_ == 0)
{
lean_object* v_unused_2141_; 
v_unused_2141_ = lean_ctor_get(v_a_2119_, 1);
lean_dec(v_unused_2141_);
v___x_2122_ = v_a_2119_;
v_isShared_2123_ = v_isSharedCheck_2140_;
goto v_resetjp_2121_;
}
else
{
lean_inc(v_toLineState_2120_);
lean_dec(v_a_2119_);
v___x_2122_ = lean_box(0);
v_isShared_2123_ = v_isSharedCheck_2140_;
goto v_resetjp_2121_;
}
v_resetjp_2121_:
{
lean_object* v_zipper_2124_; lean_object* v_cursor_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2139_; 
v_zipper_2124_ = lean_ctor_get(v_toLineState_2120_, 0);
v_cursor_2125_ = lean_ctor_get(v_toLineState_2120_, 1);
v_isSharedCheck_2139_ = !lean_is_exclusive(v_toLineState_2120_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2127_ = v_toLineState_2120_;
v_isShared_2128_ = v_isSharedCheck_2139_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_cursor_2125_);
lean_inc(v_zipper_2124_);
lean_dec(v_toLineState_2120_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2139_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
lean_object* v___x_2129_; lean_object* v___x_2131_; 
v___x_2129_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_2128_ == 0)
{
lean_ctor_set(v___x_2127_, 0, v___x_2129_);
v___x_2131_ = v___x_2127_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v___x_2129_);
lean_ctor_set(v_reuseFailAlloc_2138_, 1, v_cursor_2125_);
v___x_2131_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
lean_object* v___x_2132_; lean_object* v___x_2134_; 
v___x_2132_ = lean_unsigned_to_nat(0u);
if (v_isShared_2123_ == 0)
{
lean_ctor_set(v___x_2122_, 1, v___x_2132_);
lean_ctor_set(v___x_2122_, 0, v___x_2131_);
v___x_2134_ = v___x_2122_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v___x_2131_);
lean_ctor_set(v_reuseFailAlloc_2137_, 1, v___x_2132_);
v___x_2134_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
lean_object* v___x_2135_; lean_object* v___x_2136_; 
v___x_2135_ = lean_apply_1(v_f_2118_, v_zipper_2124_);
v___x_2136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2135_);
lean_ctor_set(v___x_2136_, 1, v___x_2134_);
return v___x_2136_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ContainerM_finishLineWith(lean_object* v_s_2142_, lean_object* v_f_2143_, lean_object* v_a_2144_){
_start:
{
lean_object* v_toLineState_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2165_; 
v_toLineState_2145_ = lean_ctor_get(v_a_2144_, 0);
v_isSharedCheck_2165_ = !lean_is_exclusive(v_a_2144_);
if (v_isSharedCheck_2165_ == 0)
{
lean_object* v_unused_2166_; 
v_unused_2166_ = lean_ctor_get(v_a_2144_, 1);
lean_dec(v_unused_2166_);
v___x_2147_ = v_a_2144_;
v_isShared_2148_ = v_isSharedCheck_2165_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_toLineState_2145_);
lean_dec(v_a_2144_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2165_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v_zipper_2149_; lean_object* v_cursor_2150_; lean_object* v___x_2152_; uint8_t v_isShared_2153_; uint8_t v_isSharedCheck_2164_; 
v_zipper_2149_ = lean_ctor_get(v_toLineState_2145_, 0);
v_cursor_2150_ = lean_ctor_get(v_toLineState_2145_, 1);
v_isSharedCheck_2164_ = !lean_is_exclusive(v_toLineState_2145_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2152_ = v_toLineState_2145_;
v_isShared_2153_ = v_isSharedCheck_2164_;
goto v_resetjp_2151_;
}
else
{
lean_inc(v_cursor_2150_);
lean_inc(v_zipper_2149_);
lean_dec(v_toLineState_2145_);
v___x_2152_ = lean_box(0);
v_isShared_2153_ = v_isSharedCheck_2164_;
goto v_resetjp_2151_;
}
v_resetjp_2151_:
{
lean_object* v___x_2154_; lean_object* v___x_2156_; 
v___x_2154_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_2153_ == 0)
{
lean_ctor_set(v___x_2152_, 0, v___x_2154_);
v___x_2156_ = v___x_2152_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v___x_2154_);
lean_ctor_set(v_reuseFailAlloc_2163_, 1, v_cursor_2150_);
v___x_2156_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
lean_object* v___x_2157_; lean_object* v___x_2159_; 
v___x_2157_ = lean_unsigned_to_nat(0u);
if (v_isShared_2148_ == 0)
{
lean_ctor_set(v___x_2147_, 1, v___x_2157_);
lean_ctor_set(v___x_2147_, 0, v___x_2156_);
v___x_2159_ = v___x_2147_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v___x_2156_);
lean_ctor_set(v_reuseFailAlloc_2162_, 1, v___x_2157_);
v___x_2159_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2160_ = lean_apply_1(v_f_2143_, v_zipper_2149_);
v___x_2161_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2160_);
lean_ctor_set(v___x_2161_, 1, v___x_2159_);
return v___x_2161_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ContainerM_finishLineWith___boxed(lean_object* v_s_2167_, lean_object* v_f_2168_, lean_object* v_a_2169_){
_start:
{
lean_object* v_res_2170_; 
v_res_2170_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_ContainerM_finishLineWith(v_s_2167_, v_f_2168_, v_a_2169_);
lean_dec_ref(v_s_2167_);
return v_res_2170_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_runContainerM___redArg(lean_object* v_act_2171_, lean_object* v_a_2172_){
_start:
{
lean_object* v_cursor_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; 
v_cursor_2173_ = lean_ctor_get(v_a_2172_, 1);
lean_inc_ref(v_cursor_2173_);
v___x_2174_ = lean_unsigned_to_nat(0u);
v___x_2175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2175_, 0, v_a_2172_);
lean_ctor_set(v___x_2175_, 1, v___x_2174_);
v___x_2176_ = lean_apply_1(v_act_2171_, v___x_2175_);
if (lean_obj_tag(v___x_2176_) == 0)
{
lean_object* v_a_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2186_; 
lean_dec_ref(v_cursor_2173_);
v_a_2177_ = lean_ctor_get(v___x_2176_, 1);
v_isSharedCheck_2186_ = !lean_is_exclusive(v___x_2176_);
if (v_isSharedCheck_2186_ == 0)
{
lean_object* v_unused_2187_; 
v_unused_2187_ = lean_ctor_get(v___x_2176_, 0);
lean_dec(v_unused_2187_);
v___x_2179_ = v___x_2176_;
v_isShared_2180_ = v_isSharedCheck_2186_;
goto v_resetjp_2178_;
}
else
{
lean_inc(v_a_2177_);
lean_dec(v___x_2176_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2186_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v_toLineState_2181_; lean_object* v_matched_2182_; lean_object* v___x_2184_; 
v_toLineState_2181_ = lean_ctor_get(v_a_2177_, 0);
lean_inc_ref(v_toLineState_2181_);
v_matched_2182_ = lean_ctor_get(v_a_2177_, 1);
lean_inc(v_matched_2182_);
lean_dec(v_a_2177_);
if (v_isShared_2180_ == 0)
{
lean_ctor_set(v___x_2179_, 1, v_toLineState_2181_);
lean_ctor_set(v___x_2179_, 0, v_matched_2182_);
v___x_2184_ = v___x_2179_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v_matched_2182_);
lean_ctor_set(v_reuseFailAlloc_2185_, 1, v_toLineState_2181_);
v___x_2184_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
return v___x_2184_;
}
}
}
else
{
lean_object* v_a_2188_; lean_object* v___x_2190_; uint8_t v_isShared_2191_; uint8_t v_isSharedCheck_2197_; 
v_a_2188_ = lean_ctor_get(v___x_2176_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2176_);
if (v_isSharedCheck_2197_ == 0)
{
lean_object* v_unused_2198_; 
v_unused_2198_ = lean_ctor_get(v___x_2176_, 1);
lean_dec(v_unused_2198_);
v___x_2190_ = v___x_2176_;
v_isShared_2191_ = v_isSharedCheck_2197_;
goto v_resetjp_2189_;
}
else
{
lean_inc(v_a_2188_);
lean_dec(v___x_2176_);
v___x_2190_ = lean_box(0);
v_isShared_2191_ = v_isSharedCheck_2197_;
goto v_resetjp_2189_;
}
v_resetjp_2189_:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2195_; 
v___x_2192_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
v___x_2193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2193_, 0, v___x_2192_);
lean_ctor_set(v___x_2193_, 1, v_cursor_2173_);
if (v_isShared_2191_ == 0)
{
lean_ctor_set(v___x_2190_, 1, v___x_2193_);
v___x_2195_ = v___x_2190_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_a_2188_);
lean_ctor_set(v_reuseFailAlloc_2196_, 1, v___x_2193_);
v___x_2195_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
return v___x_2195_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_runContainerM(lean_object* v_s_2199_, lean_object* v_act_2200_, lean_object* v_a_2201_){
_start:
{
lean_object* v_cursor_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v_cursor_2202_ = lean_ctor_get(v_a_2201_, 1);
lean_inc_ref(v_cursor_2202_);
v___x_2203_ = lean_unsigned_to_nat(0u);
v___x_2204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2204_, 0, v_a_2201_);
lean_ctor_set(v___x_2204_, 1, v___x_2203_);
v___x_2205_ = lean_apply_1(v_act_2200_, v___x_2204_);
if (lean_obj_tag(v___x_2205_) == 0)
{
lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2215_; 
lean_dec_ref(v_cursor_2202_);
v_a_2206_ = lean_ctor_get(v___x_2205_, 1);
v_isSharedCheck_2215_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2215_ == 0)
{
lean_object* v_unused_2216_; 
v_unused_2216_ = lean_ctor_get(v___x_2205_, 0);
lean_dec(v_unused_2216_);
v___x_2208_ = v___x_2205_;
v_isShared_2209_ = v_isSharedCheck_2215_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_dec(v___x_2205_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2215_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v_toLineState_2210_; lean_object* v_matched_2211_; lean_object* v___x_2213_; 
v_toLineState_2210_ = lean_ctor_get(v_a_2206_, 0);
lean_inc_ref(v_toLineState_2210_);
v_matched_2211_ = lean_ctor_get(v_a_2206_, 1);
lean_inc(v_matched_2211_);
lean_dec(v_a_2206_);
if (v_isShared_2209_ == 0)
{
lean_ctor_set(v___x_2208_, 1, v_toLineState_2210_);
lean_ctor_set(v___x_2208_, 0, v_matched_2211_);
v___x_2213_ = v___x_2208_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v_matched_2211_);
lean_ctor_set(v_reuseFailAlloc_2214_, 1, v_toLineState_2210_);
v___x_2213_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
return v___x_2213_;
}
}
}
else
{
lean_object* v_a_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2226_; 
v_a_2217_ = lean_ctor_get(v___x_2205_, 0);
v_isSharedCheck_2226_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2226_ == 0)
{
lean_object* v_unused_2227_; 
v_unused_2227_ = lean_ctor_get(v___x_2205_, 1);
lean_dec(v_unused_2227_);
v___x_2219_ = v___x_2205_;
v_isShared_2220_ = v_isSharedCheck_2226_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_a_2217_);
lean_dec(v___x_2205_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2226_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2224_; 
v___x_2221_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
v___x_2222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2222_, 0, v___x_2221_);
lean_ctor_set(v___x_2222_, 1, v_cursor_2202_);
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 1, v___x_2222_);
v___x_2224_ = v___x_2219_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_a_2217_);
lean_ctor_set(v_reuseFailAlloc_2225_, 1, v___x_2222_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_runContainerM___boxed(lean_object* v_s_2228_, lean_object* v_act_2229_, lean_object* v_a_2230_){
_start:
{
lean_object* v_res_2231_; 
v_res_2231_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_runContainerM(v_s_2228_, v_act_2229_, v_a_2230_);
lean_dec_ref(v_s_2228_);
return v_res_2231_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_continueContainers_spec__0___redArg(lean_object* v_s_2232_, lean_object* v_a_2233_, lean_object* v___y_2234_){
_start:
{
lean_object* v_toLineState_2235_; lean_object* v_zipper_2236_; lean_object* v_matched_2237_; lean_object* v_cursor_2238_; lean_object* v___x_2240_; uint8_t v_isShared_2241_; uint8_t v_isSharedCheck_2322_; 
v_toLineState_2235_ = lean_ctor_get(v_a_2233_, 0);
lean_inc_ref(v_toLineState_2235_);
v_zipper_2236_ = lean_ctor_get(v_toLineState_2235_, 0);
lean_inc_ref(v_zipper_2236_);
v_matched_2237_ = lean_ctor_get(v_a_2233_, 1);
v_cursor_2238_ = lean_ctor_get(v_toLineState_2235_, 1);
v_isSharedCheck_2322_ = !lean_is_exclusive(v_toLineState_2235_);
if (v_isSharedCheck_2322_ == 0)
{
lean_object* v_unused_2323_; 
v_unused_2323_ = lean_ctor_get(v_toLineState_2235_, 0);
lean_dec(v_unused_2323_);
v___x_2240_ = v_toLineState_2235_;
v_isShared_2241_ = v_isSharedCheck_2322_;
goto v_resetjp_2239_;
}
else
{
lean_inc(v_cursor_2238_);
lean_dec(v_toLineState_2235_);
v___x_2240_ = lean_box(0);
v_isShared_2241_ = v_isSharedCheck_2322_;
goto v_resetjp_2239_;
}
v_resetjp_2239_:
{
lean_object* v_spine_2242_; lean_object* v___x_2243_; uint8_t v___x_2244_; 
v_spine_2242_ = lean_ctor_get(v_zipper_2236_, 1);
v___x_2243_ = lean_array_get_size(v_spine_2242_);
v___x_2244_ = lean_nat_dec_lt(v_matched_2237_, v___x_2243_);
if (v___x_2244_ == 0)
{
lean_object* v___x_2245_; 
lean_del_object(v___x_2240_);
lean_dec_ref(v_cursor_2238_);
lean_dec_ref(v_zipper_2236_);
v___x_2245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2245_, 0, v_a_2233_);
lean_ctor_set(v___x_2245_, 1, v___y_2234_);
return v___x_2245_;
}
else
{
lean_object* v___x_2246_; lean_object* v_container_2247_; lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2320_; 
v___x_2246_ = lean_array_fget(v_spine_2242_, v_matched_2237_);
v_container_2247_ = lean_ctor_get(v___x_2246_, 0);
v_isSharedCheck_2320_ = !lean_is_exclusive(v___x_2246_);
if (v_isSharedCheck_2320_ == 0)
{
lean_object* v_unused_2321_; 
v_unused_2321_ = lean_ctor_get(v___x_2246_, 1);
lean_dec(v_unused_2321_);
v___x_2249_ = v___x_2246_;
v_isShared_2250_ = v_isSharedCheck_2320_;
goto v_resetjp_2248_;
}
else
{
lean_inc(v_container_2247_);
lean_dec(v___x_2246_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2320_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
if (lean_obj_tag(v_container_2247_) == 0)
{
lean_object* v___x_2251_; lean_object* v___x_2252_; 
lean_dec_ref_known(v_container_2247_, 1);
v___x_2251_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent(v_s_2232_, v_cursor_2238_);
v___x_2252_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f(v_s_2232_, v___x_2251_);
if (lean_obj_tag(v___x_2252_) == 1)
{
lean_object* v___x_2254_; uint8_t v_isShared_2255_; uint8_t v_isSharedCheck_2269_; 
lean_inc(v_matched_2237_);
lean_del_object(v___x_2249_);
v_isSharedCheck_2269_ = !lean_is_exclusive(v_a_2233_);
if (v_isSharedCheck_2269_ == 0)
{
lean_object* v_unused_2270_; lean_object* v_unused_2271_; 
v_unused_2270_ = lean_ctor_get(v_a_2233_, 1);
lean_dec(v_unused_2270_);
v_unused_2271_ = lean_ctor_get(v_a_2233_, 0);
lean_dec(v_unused_2271_);
v___x_2254_ = v_a_2233_;
v_isShared_2255_ = v_isSharedCheck_2269_;
goto v_resetjp_2253_;
}
else
{
lean_dec(v_a_2233_);
v___x_2254_ = lean_box(0);
v_isShared_2255_ = v_isSharedCheck_2269_;
goto v_resetjp_2253_;
}
v_resetjp_2253_:
{
lean_object* v_val_2256_; lean_object* v_fst_2257_; lean_object* v_snd_2258_; lean_object* v___x_2259_; lean_object* v___x_2261_; 
v_val_2256_ = lean_ctor_get(v___x_2252_, 0);
lean_inc(v_val_2256_);
lean_dec_ref_known(v___x_2252_, 1);
v_fst_2257_ = lean_ctor_get(v_val_2256_, 0);
lean_inc(v_fst_2257_);
v_snd_2258_ = lean_ctor_get(v_val_2256_, 1);
lean_inc(v_snd_2258_);
lean_dec(v_val_2256_);
v___x_2259_ = l_Lean_Markdown_BlockZipper_pushBlockquoteMarker___redArg(v_zipper_2236_, v_matched_2237_, v_fst_2257_);
if (v_isShared_2241_ == 0)
{
lean_ctor_set(v___x_2240_, 1, v_snd_2258_);
lean_ctor_set(v___x_2240_, 0, v___x_2259_);
v___x_2261_ = v___x_2240_;
goto v_reusejp_2260_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v___x_2259_);
lean_ctor_set(v_reuseFailAlloc_2268_, 1, v_snd_2258_);
v___x_2261_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2260_;
}
v_reusejp_2260_:
{
lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2265_; 
v___x_2262_ = lean_unsigned_to_nat(1u);
v___x_2263_ = lean_nat_add(v_matched_2237_, v___x_2262_);
lean_dec(v_matched_2237_);
if (v_isShared_2255_ == 0)
{
lean_ctor_set(v___x_2254_, 1, v___x_2263_);
lean_ctor_set(v___x_2254_, 0, v___x_2261_);
v___x_2265_ = v___x_2254_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v___x_2261_);
lean_ctor_set(v_reuseFailAlloc_2267_, 1, v___x_2263_);
v___x_2265_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
v_a_2233_ = v___x_2265_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_2273_; 
lean_dec(v___x_2252_);
lean_del_object(v___x_2240_);
lean_dec_ref(v_zipper_2236_);
if (v_isShared_2250_ == 0)
{
lean_ctor_set(v___x_2249_, 1, v___y_2234_);
lean_ctor_set(v___x_2249_, 0, v_a_2233_);
v___x_2273_ = v___x_2249_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v_a_2233_);
lean_ctor_set(v_reuseFailAlloc_2274_, 1, v___y_2234_);
v___x_2273_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
return v___x_2273_;
}
}
}
else
{
lean_object* v_contentColumn_2275_; lean_object* v___x_2276_; lean_object* v_fst_2277_; lean_object* v_snd_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2319_; 
lean_del_object(v___x_2249_);
v_contentColumn_2275_ = lean_ctor_get(v_container_2247_, 2);
lean_inc_n(v_contentColumn_2275_, 2);
lean_dec_ref_known(v_container_2247_, 3);
lean_inc_ref(v_cursor_2238_);
v___x_2276_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped(v_s_2232_, v_cursor_2238_, v_contentColumn_2275_);
v_fst_2277_ = lean_ctor_get(v___x_2276_, 0);
v_snd_2278_ = lean_ctor_get(v___x_2276_, 1);
v_isSharedCheck_2319_ = !lean_is_exclusive(v___x_2276_);
if (v_isSharedCheck_2319_ == 0)
{
v___x_2280_ = v___x_2276_;
v_isShared_2281_ = v_isSharedCheck_2319_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_snd_2278_);
lean_inc(v_fst_2277_);
lean_dec(v___x_2276_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2319_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
uint8_t v___x_2282_; 
v___x_2282_ = lean_nat_dec_le(v_contentColumn_2275_, v_snd_2278_);
lean_dec(v_snd_2278_);
lean_dec(v_contentColumn_2275_);
if (v___x_2282_ == 0)
{
uint8_t v___x_2283_; 
lean_dec(v_fst_2277_);
lean_inc_ref(v_cursor_2238_);
v___x_2283_ = l_Lean_Markdown_Cursor_isBlank(v_s_2232_, v_cursor_2238_);
if (v___x_2283_ == 0)
{
lean_object* v___x_2285_; 
lean_del_object(v___x_2240_);
lean_dec_ref(v_cursor_2238_);
lean_dec_ref(v_zipper_2236_);
if (v_isShared_2281_ == 0)
{
lean_ctor_set(v___x_2280_, 1, v___y_2234_);
lean_ctor_set(v___x_2280_, 0, v_a_2233_);
v___x_2285_ = v___x_2280_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_a_2233_);
lean_ctor_set(v_reuseFailAlloc_2286_, 1, v___y_2234_);
v___x_2285_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
return v___x_2285_;
}
}
else
{
lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2301_; 
lean_inc(v_matched_2237_);
lean_del_object(v___x_2280_);
v_isSharedCheck_2301_ = !lean_is_exclusive(v_a_2233_);
if (v_isSharedCheck_2301_ == 0)
{
lean_object* v_unused_2302_; lean_object* v_unused_2303_; 
v_unused_2302_ = lean_ctor_get(v_a_2233_, 1);
lean_dec(v_unused_2302_);
v_unused_2303_ = lean_ctor_get(v_a_2233_, 0);
lean_dec(v_unused_2303_);
v___x_2288_ = v_a_2233_;
v_isShared_2289_ = v_isSharedCheck_2301_;
goto v_resetjp_2287_;
}
else
{
lean_dec(v_a_2233_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2301_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
lean_object* v___x_2290_; lean_object* v_fst_2291_; lean_object* v___x_2293_; 
v___x_2290_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_countIndentCols(v_s_2232_, v_cursor_2238_);
v_fst_2291_ = lean_ctor_get(v___x_2290_, 0);
lean_inc(v_fst_2291_);
lean_dec_ref(v___x_2290_);
if (v_isShared_2241_ == 0)
{
lean_ctor_set(v___x_2240_, 1, v_fst_2291_);
v___x_2293_ = v___x_2240_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2300_; 
v_reuseFailAlloc_2300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2300_, 0, v_zipper_2236_);
lean_ctor_set(v_reuseFailAlloc_2300_, 1, v_fst_2291_);
v___x_2293_ = v_reuseFailAlloc_2300_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2297_; 
v___x_2294_ = lean_unsigned_to_nat(1u);
v___x_2295_ = lean_nat_add(v_matched_2237_, v___x_2294_);
lean_dec(v_matched_2237_);
if (v_isShared_2289_ == 0)
{
lean_ctor_set(v___x_2288_, 1, v___x_2295_);
lean_ctor_set(v___x_2288_, 0, v___x_2293_);
v___x_2297_ = v___x_2288_;
goto v_reusejp_2296_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v___x_2293_);
lean_ctor_set(v_reuseFailAlloc_2299_, 1, v___x_2295_);
v___x_2297_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2296_;
}
v_reusejp_2296_:
{
v_a_2233_ = v___x_2297_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2316_; 
lean_inc(v_matched_2237_);
lean_del_object(v___x_2280_);
lean_dec_ref(v_cursor_2238_);
v_isSharedCheck_2316_ = !lean_is_exclusive(v_a_2233_);
if (v_isSharedCheck_2316_ == 0)
{
lean_object* v_unused_2317_; lean_object* v_unused_2318_; 
v_unused_2317_ = lean_ctor_get(v_a_2233_, 1);
lean_dec(v_unused_2317_);
v_unused_2318_ = lean_ctor_get(v_a_2233_, 0);
lean_dec(v_unused_2318_);
v___x_2305_ = v_a_2233_;
v_isShared_2306_ = v_isSharedCheck_2316_;
goto v_resetjp_2304_;
}
else
{
lean_dec(v_a_2233_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2316_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2308_; 
if (v_isShared_2241_ == 0)
{
lean_ctor_set(v___x_2240_, 1, v_fst_2277_);
v___x_2308_ = v___x_2240_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v_zipper_2236_);
lean_ctor_set(v_reuseFailAlloc_2315_, 1, v_fst_2277_);
v___x_2308_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2312_; 
v___x_2309_ = lean_unsigned_to_nat(1u);
v___x_2310_ = lean_nat_add(v_matched_2237_, v___x_2309_);
lean_dec(v_matched_2237_);
if (v_isShared_2306_ == 0)
{
lean_ctor_set(v___x_2305_, 1, v___x_2310_);
lean_ctor_set(v___x_2305_, 0, v___x_2308_);
v___x_2312_ = v___x_2305_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v___x_2308_);
lean_ctor_set(v_reuseFailAlloc_2314_, 1, v___x_2310_);
v___x_2312_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
v_a_2233_ = v___x_2312_;
goto _start;
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
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_continueContainers_spec__0___redArg___boxed(lean_object* v_s_2324_, lean_object* v_a_2325_, lean_object* v___y_2326_){
_start:
{
lean_object* v_res_2327_; 
v_res_2327_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_continueContainers_spec__0___redArg(v_s_2324_, v_a_2325_, v___y_2326_);
lean_dec_ref(v_s_2324_);
return v_res_2327_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_continueContainers(lean_object* v_s_2328_, lean_object* v_a_2329_){
_start:
{
lean_object* v_toLineState_2330_; lean_object* v_cursor_2331_; lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2361_; 
v_toLineState_2330_ = lean_ctor_get(v_a_2329_, 0);
lean_inc_ref(v_toLineState_2330_);
v_cursor_2331_ = lean_ctor_get(v_toLineState_2330_, 1);
v_isSharedCheck_2361_ = !lean_is_exclusive(v_toLineState_2330_);
if (v_isSharedCheck_2361_ == 0)
{
lean_object* v_unused_2362_; 
v_unused_2362_ = lean_ctor_get(v_toLineState_2330_, 0);
lean_dec(v_unused_2362_);
v___x_2333_ = v_toLineState_2330_;
v_isShared_2334_ = v_isSharedCheck_2361_;
goto v_resetjp_2332_;
}
else
{
lean_inc(v_cursor_2331_);
lean_dec(v_toLineState_2330_);
v___x_2333_ = lean_box(0);
v_isShared_2334_ = v_isSharedCheck_2361_;
goto v_resetjp_2332_;
}
v_resetjp_2332_:
{
lean_object* v___x_2335_; lean_object* v___x_2337_; 
v___x_2335_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 0, v___x_2335_);
v___x_2337_ = v___x_2333_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v___x_2335_);
lean_ctor_set(v_reuseFailAlloc_2360_, 1, v_cursor_2331_);
v___x_2337_ = v_reuseFailAlloc_2360_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; 
v___x_2338_ = lean_unsigned_to_nat(0u);
v___x_2339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2339_, 0, v___x_2337_);
lean_ctor_set(v___x_2339_, 1, v___x_2338_);
v___x_2340_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_continueContainers_spec__0___redArg(v_s_2328_, v_a_2329_, v___x_2339_);
if (lean_obj_tag(v___x_2340_) == 0)
{
lean_object* v_a_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2349_; 
v_a_2341_ = lean_ctor_get(v___x_2340_, 0);
v_isSharedCheck_2349_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2349_ == 0)
{
lean_object* v_unused_2350_; 
v_unused_2350_ = lean_ctor_get(v___x_2340_, 1);
lean_dec(v_unused_2350_);
v___x_2343_ = v___x_2340_;
v_isShared_2344_ = v_isSharedCheck_2349_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_a_2341_);
lean_dec(v___x_2340_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2349_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
lean_object* v___x_2345_; lean_object* v___x_2347_; 
v___x_2345_ = lean_box(0);
if (v_isShared_2344_ == 0)
{
lean_ctor_set(v___x_2343_, 1, v_a_2341_);
lean_ctor_set(v___x_2343_, 0, v___x_2345_);
v___x_2347_ = v___x_2343_;
goto v_reusejp_2346_;
}
else
{
lean_object* v_reuseFailAlloc_2348_; 
v_reuseFailAlloc_2348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2348_, 0, v___x_2345_);
lean_ctor_set(v_reuseFailAlloc_2348_, 1, v_a_2341_);
v___x_2347_ = v_reuseFailAlloc_2348_;
goto v_reusejp_2346_;
}
v_reusejp_2346_:
{
return v___x_2347_;
}
}
}
else
{
lean_object* v_a_2351_; lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2359_; 
v_a_2351_ = lean_ctor_get(v___x_2340_, 0);
v_a_2352_ = lean_ctor_get(v___x_2340_, 1);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2354_ = v___x_2340_;
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_inc(v_a_2351_);
lean_dec(v___x_2340_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2357_; 
if (v_isShared_2355_ == 0)
{
v___x_2357_ = v___x_2354_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_a_2351_);
lean_ctor_set(v_reuseFailAlloc_2358_, 1, v_a_2352_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_continueContainers___boxed(lean_object* v_s_2363_, lean_object* v_a_2364_){
_start:
{
lean_object* v_res_2365_; 
v_res_2365_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_continueContainers(v_s_2363_, v_a_2364_);
lean_dec_ref(v_s_2363_);
return v_res_2365_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_continueContainers_spec__0(lean_object* v_s_2366_, lean_object* v_inst_2367_, lean_object* v_a_2368_, lean_object* v___y_2369_){
_start:
{
lean_object* v___x_2370_; 
v___x_2370_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_continueContainers_spec__0___redArg(v_s_2366_, v_a_2368_, v___y_2369_);
return v___x_2370_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_continueContainers_spec__0___boxed(lean_object* v_s_2371_, lean_object* v_inst_2372_, lean_object* v_a_2373_, lean_object* v___y_2374_){
_start:
{
lean_object* v_res_2375_; 
v_res_2375_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_continueContainers_spec__0(v_s_2371_, v_inst_2372_, v_a_2373_, v___y_2374_);
lean_dec_ref(v_s_2371_);
return v_res_2375_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___lam__0(lean_object* v_s_2376_, lean_object* v_x1_2377_, lean_object* v_x2_2378_){
_start:
{
lean_object* v___x_2379_; 
v___x_2379_ = l_Lean_Markdown_BlockZipper_addBlock(v_s_2376_, v_x1_2377_, v_x2_2378_);
return v___x_2379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___lam__0___boxed(lean_object* v_s_2380_, lean_object* v_x1_2381_, lean_object* v_x2_2382_){
_start:
{
lean_object* v_res_2383_; 
v_res_2383_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___lam__0(v_s_2380_, v_x1_2381_, v_x2_2382_);
lean_dec_ref(v_s_2380_);
return v_res_2383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading(lean_object* v_s_2403_, lean_object* v_a_2404_){
_start:
{
lean_object* v___y_2406_; lean_object* v_toLineState_2409_; lean_object* v_zipper_2410_; lean_object* v_matched_2411_; lean_object* v_cursor_2412_; lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2493_; 
v_toLineState_2409_ = lean_ctor_get(v_a_2404_, 0);
lean_inc_ref(v_toLineState_2409_);
v_zipper_2410_ = lean_ctor_get(v_toLineState_2409_, 0);
lean_inc_ref(v_zipper_2410_);
v_matched_2411_ = lean_ctor_get(v_a_2404_, 1);
v_cursor_2412_ = lean_ctor_get(v_toLineState_2409_, 1);
v_isSharedCheck_2493_ = !lean_is_exclusive(v_toLineState_2409_);
if (v_isSharedCheck_2493_ == 0)
{
lean_object* v_unused_2494_; 
v_unused_2494_ = lean_ctor_get(v_toLineState_2409_, 0);
lean_dec(v_unused_2494_);
v___x_2414_ = v_toLineState_2409_;
v_isShared_2415_ = v_isSharedCheck_2493_;
goto v_resetjp_2413_;
}
else
{
lean_inc(v_cursor_2412_);
lean_dec(v_toLineState_2409_);
v___x_2414_ = lean_box(0);
v_isShared_2415_ = v_isSharedCheck_2493_;
goto v_resetjp_2413_;
}
v___jp_2405_:
{
lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2407_ = lean_box(0);
v___x_2408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2408_, 0, v___x_2407_);
lean_ctor_set(v___x_2408_, 1, v___y_2406_);
return v___x_2408_;
}
v_resetjp_2413_:
{
lean_object* v_document_2416_; lean_object* v_spine_2417_; lean_object* v_openLeaf_x3f_2418_; lean_object* v_blankLineFloor_x3f_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2492_; 
v_document_2416_ = lean_ctor_get(v_zipper_2410_, 0);
v_spine_2417_ = lean_ctor_get(v_zipper_2410_, 1);
v_openLeaf_x3f_2418_ = lean_ctor_get(v_zipper_2410_, 2);
v_blankLineFloor_x3f_2419_ = lean_ctor_get(v_zipper_2410_, 3);
v_isSharedCheck_2492_ = !lean_is_exclusive(v_zipper_2410_);
if (v_isSharedCheck_2492_ == 0)
{
v___x_2421_ = v_zipper_2410_;
v_isShared_2422_ = v_isSharedCheck_2492_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_blankLineFloor_x3f_2419_);
lean_inc(v_openLeaf_x3f_2418_);
lean_inc(v_spine_2417_);
lean_inc(v_document_2416_);
lean_dec(v_zipper_2410_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2492_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___x_2423_; uint8_t v___x_2424_; 
v___x_2423_ = lean_array_get_size(v_spine_2417_);
v___x_2424_ = lean_nat_dec_eq(v___x_2423_, v_matched_2411_);
if (v___x_2424_ == 0)
{
lean_object* v___x_2425_; lean_object* v___x_2426_; 
lean_del_object(v___x_2421_);
lean_dec(v_blankLineFloor_x3f_2419_);
lean_dec(v_openLeaf_x3f_2418_);
lean_dec_ref(v_spine_2417_);
lean_dec_ref(v_document_2416_);
lean_del_object(v___x_2414_);
lean_dec_ref(v_cursor_2412_);
lean_dec_ref(v_s_2403_);
v___x_2425_ = lean_box(0);
v___x_2426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2426_, 0, v___x_2425_);
lean_ctor_set(v___x_2426_, 1, v_a_2404_);
return v___x_2426_;
}
else
{
if (lean_obj_tag(v_openLeaf_x3f_2418_) == 1)
{
lean_object* v_val_2427_; 
v_val_2427_ = lean_ctor_get(v_openLeaf_x3f_2418_, 0);
lean_inc(v_val_2427_);
lean_dec_ref_known(v_openLeaf_x3f_2418_, 1);
if (lean_obj_tag(v_val_2427_) == 0)
{
lean_object* v_lines_2428_; lean_object* v___x_2430_; uint8_t v_isShared_2431_; uint8_t v_isSharedCheck_2491_; 
v_lines_2428_ = lean_ctor_get(v_val_2427_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v_val_2427_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2430_ = v_val_2427_;
v_isShared_2431_ = v_isSharedCheck_2491_;
goto v_resetjp_2429_;
}
else
{
lean_inc(v_lines_2428_);
lean_dec(v_val_2427_);
v___x_2430_ = lean_box(0);
v_isShared_2431_ = v_isSharedCheck_2491_;
goto v_resetjp_2429_;
}
v_resetjp_2429_:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; 
lean_inc_ref(v_cursor_2412_);
v___x_2432_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent(v_s_2403_, v_cursor_2412_);
v___x_2433_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f(v_s_2403_, v___x_2432_);
if (lean_obj_tag(v___x_2433_) == 1)
{
lean_object* v___x_2435_; uint8_t v_isShared_2436_; uint8_t v_isSharedCheck_2486_; 
v_isSharedCheck_2486_ = !lean_is_exclusive(v_a_2404_);
if (v_isSharedCheck_2486_ == 0)
{
lean_object* v_unused_2487_; lean_object* v_unused_2488_; 
v_unused_2487_ = lean_ctor_get(v_a_2404_, 1);
lean_dec(v_unused_2487_);
v_unused_2488_ = lean_ctor_get(v_a_2404_, 0);
lean_dec(v_unused_2488_);
v___x_2435_ = v_a_2404_;
v_isShared_2436_ = v_isSharedCheck_2486_;
goto v_resetjp_2434_;
}
else
{
lean_dec(v_a_2404_);
v___x_2435_ = lean_box(0);
v_isShared_2436_ = v_isSharedCheck_2486_;
goto v_resetjp_2434_;
}
v_resetjp_2434_:
{
lean_object* v_val_2437_; lean_object* v_fst_2438_; lean_object* v_snd_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v_fst_2442_; lean_object* v_snd_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2485_; 
v_val_2437_ = lean_ctor_get(v___x_2433_, 0);
lean_inc(v_val_2437_);
lean_dec_ref_known(v___x_2433_, 1);
v_fst_2438_ = lean_ctor_get(v_val_2437_, 0);
lean_inc(v_fst_2438_);
v_snd_2439_ = lean_ctor_get(v_val_2437_, 1);
lean_inc(v_snd_2439_);
lean_dec(v_val_2437_);
v___x_2440_ = l_Lean_Markdown_InlineSource_ofLines(v_s_2403_, v_lines_2428_);
v___x_2441_ = l_Lean_Markdown_extractRefDefs(v_s_2403_, v___x_2440_);
v_fst_2442_ = lean_ctor_get(v___x_2441_, 0);
v_snd_2443_ = lean_ctor_get(v___x_2441_, 1);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___x_2441_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2445_ = v___x_2441_;
v_isShared_2446_ = v_isSharedCheck_2485_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_snd_2443_);
lean_inc(v_fst_2442_);
lean_dec(v___x_2441_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2485_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
lean_object* v_pos_2447_; lean_object* v_stop_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2452_; 
v_pos_2447_ = lean_ctor_get(v_cursor_2412_, 0);
v_stop_2448_ = lean_ctor_get(v_cursor_2412_, 1);
lean_inc(v_stop_2448_);
lean_inc(v_pos_2447_);
v___x_2449_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_2447_, v_stop_2448_);
v___x_2450_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_2415_ == 0)
{
lean_ctor_set(v___x_2414_, 0, v___x_2450_);
v___x_2452_ = v___x_2414_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v___x_2450_);
lean_ctor_set(v_reuseFailAlloc_2484_, 1, v_cursor_2412_);
v___x_2452_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2451_;
}
v_reusejp_2451_:
{
lean_object* v___x_2453_; lean_object* v___x_2455_; 
v___x_2453_ = lean_unsigned_to_nat(0u);
if (v_isShared_2436_ == 0)
{
lean_ctor_set(v___x_2435_, 1, v___x_2453_);
lean_ctor_set(v___x_2435_, 0, v___x_2452_);
v___x_2455_ = v___x_2435_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v___x_2452_);
lean_ctor_set(v_reuseFailAlloc_2483_, 1, v___x_2453_);
v___x_2455_ = v_reuseFailAlloc_2483_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
lean_object* v___y_2457_; lean_object* v___x_2472_; lean_object* v___x_2474_; 
v___x_2472_ = lean_box(0);
if (v_isShared_2422_ == 0)
{
lean_ctor_set(v___x_2421_, 2, v___x_2472_);
v___x_2474_ = v___x_2421_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2482_; 
v_reuseFailAlloc_2482_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2482_, 0, v_document_2416_);
lean_ctor_set(v_reuseFailAlloc_2482_, 1, v_spine_2417_);
lean_ctor_set(v_reuseFailAlloc_2482_, 2, v___x_2472_);
lean_ctor_set(v_reuseFailAlloc_2482_, 3, v_blankLineFloor_x3f_2419_);
v___x_2474_ = v_reuseFailAlloc_2482_;
goto v_reusejp_2473_;
}
v___jp_2456_:
{
if (lean_obj_tag(v_snd_2443_) == 0)
{
lean_object* v___x_2458_; lean_object* v___x_2460_; 
lean_dec(v_snd_2439_);
lean_dec(v_fst_2438_);
v___x_2458_ = l_Lean_Markdown_Lines_singleton___redArg(v___x_2449_);
if (v_isShared_2431_ == 0)
{
lean_ctor_set(v___x_2430_, 0, v___x_2458_);
v___x_2460_ = v___x_2430_;
goto v_reusejp_2459_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v___x_2458_);
v___x_2460_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2459_;
}
v_reusejp_2459_:
{
lean_object* v___x_2461_; lean_object* v___x_2463_; 
v___x_2461_ = l_Lean_Markdown_BlockZipper_openLeaf(v_s_2403_, v___y_2457_, v___x_2460_);
lean_dec_ref(v_s_2403_);
if (v_isShared_2446_ == 0)
{
lean_ctor_set_tag(v___x_2445_, 1);
lean_ctor_set(v___x_2445_, 1, v___x_2455_);
lean_ctor_set(v___x_2445_, 0, v___x_2461_);
v___x_2463_ = v___x_2445_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v___x_2461_);
lean_ctor_set(v_reuseFailAlloc_2464_, 1, v___x_2455_);
v___x_2463_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
return v___x_2463_;
}
}
}
else
{
lean_object* v_val_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2470_; 
lean_dec_ref(v___x_2449_);
lean_del_object(v___x_2430_);
v_val_2466_ = lean_ctor_get(v_snd_2443_, 0);
lean_inc(v_val_2466_);
lean_dec_ref_known(v_snd_2443_, 1);
v___x_2467_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_2467_, 0, v_fst_2438_);
lean_ctor_set(v___x_2467_, 1, v_val_2466_);
lean_ctor_set(v___x_2467_, 2, v_snd_2439_);
v___x_2468_ = l_Lean_Markdown_BlockZipper_addBlock(v_s_2403_, v___y_2457_, v___x_2467_);
lean_dec_ref(v_s_2403_);
if (v_isShared_2446_ == 0)
{
lean_ctor_set_tag(v___x_2445_, 1);
lean_ctor_set(v___x_2445_, 1, v___x_2455_);
lean_ctor_set(v___x_2445_, 0, v___x_2468_);
v___x_2470_ = v___x_2445_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v___x_2468_);
lean_ctor_set(v_reuseFailAlloc_2471_, 1, v___x_2455_);
v___x_2470_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
return v___x_2470_;
}
}
}
v_reusejp_2473_:
{
lean_object* v___x_2475_; lean_object* v___x_2476_; uint8_t v___x_2477_; 
v___x_2475_ = lean_array_get_size(v_fst_2442_);
v___x_2476_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___closed__9));
v___x_2477_ = lean_nat_dec_lt(v___x_2453_, v___x_2475_);
if (v___x_2477_ == 0)
{
lean_dec(v_fst_2442_);
v___y_2457_ = v___x_2474_;
goto v___jp_2456_;
}
else
{
lean_object* v___f_2478_; size_t v___x_2479_; size_t v___x_2480_; lean_object* v___x_2481_; 
lean_inc_ref(v_s_2403_);
v___f_2478_ = lean_alloc_closure((void*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trySetextHeading___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2478_, 0, v_s_2403_);
v___x_2479_ = ((size_t)0ULL);
v___x_2480_ = lean_usize_of_nat(v___x_2475_);
v___x_2481_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2476_, v___f_2478_, v_fst_2442_, v___x_2479_, v___x_2480_, v___x_2474_);
v___y_2457_ = v___x_2481_;
goto v___jp_2456_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2489_; lean_object* v___x_2490_; 
lean_dec(v___x_2433_);
lean_del_object(v___x_2430_);
lean_dec_ref(v_lines_2428_);
lean_del_object(v___x_2421_);
lean_dec(v_blankLineFloor_x3f_2419_);
lean_dec_ref(v_spine_2417_);
lean_dec_ref(v_document_2416_);
lean_del_object(v___x_2414_);
lean_dec_ref(v_cursor_2412_);
lean_dec_ref(v_s_2403_);
v___x_2489_ = lean_box(0);
v___x_2490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2490_, 0, v___x_2489_);
lean_ctor_set(v___x_2490_, 1, v_a_2404_);
return v___x_2490_;
}
}
}
else
{
lean_dec(v_val_2427_);
lean_del_object(v___x_2421_);
lean_dec(v_blankLineFloor_x3f_2419_);
lean_dec_ref(v_spine_2417_);
lean_dec_ref(v_document_2416_);
lean_del_object(v___x_2414_);
lean_dec_ref(v_cursor_2412_);
lean_dec_ref(v_s_2403_);
v___y_2406_ = v_a_2404_;
goto v___jp_2405_;
}
}
else
{
lean_del_object(v___x_2421_);
lean_dec(v_blankLineFloor_x3f_2419_);
lean_dec(v_openLeaf_x3f_2418_);
lean_dec_ref(v_spine_2417_);
lean_dec_ref(v_document_2416_);
lean_del_object(v___x_2414_);
lean_dec_ref(v_cursor_2412_);
lean_dec_ref(v_s_2403_);
v___y_2406_ = v_a_2404_;
goto v___jp_2405_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryLazyContinuation(lean_object* v_s_2495_, lean_object* v_a_2496_){
_start:
{
lean_object* v___y_2498_; lean_object* v_toLineState_2501_; lean_object* v_zipper_2502_; lean_object* v_matched_2503_; lean_object* v_cursor_2504_; lean_object* v___x_2506_; uint8_t v_isShared_2507_; uint8_t v_isSharedCheck_2538_; 
v_toLineState_2501_ = lean_ctor_get(v_a_2496_, 0);
lean_inc_ref(v_toLineState_2501_);
v_zipper_2502_ = lean_ctor_get(v_toLineState_2501_, 0);
lean_inc_ref(v_zipper_2502_);
v_matched_2503_ = lean_ctor_get(v_a_2496_, 1);
v_cursor_2504_ = lean_ctor_get(v_toLineState_2501_, 1);
v_isSharedCheck_2538_ = !lean_is_exclusive(v_toLineState_2501_);
if (v_isSharedCheck_2538_ == 0)
{
lean_object* v_unused_2539_; 
v_unused_2539_ = lean_ctor_get(v_toLineState_2501_, 0);
lean_dec(v_unused_2539_);
v___x_2506_ = v_toLineState_2501_;
v_isShared_2507_ = v_isSharedCheck_2538_;
goto v_resetjp_2505_;
}
else
{
lean_inc(v_cursor_2504_);
lean_dec(v_toLineState_2501_);
v___x_2506_ = lean_box(0);
v_isShared_2507_ = v_isSharedCheck_2538_;
goto v_resetjp_2505_;
}
v___jp_2497_:
{
lean_object* v___x_2499_; lean_object* v___x_2500_; 
v___x_2499_ = lean_box(0);
v___x_2500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2500_, 0, v___x_2499_);
lean_ctor_set(v___x_2500_, 1, v___y_2498_);
return v___x_2500_;
}
v_resetjp_2505_:
{
lean_object* v_spine_2508_; lean_object* v_openLeaf_x3f_2509_; lean_object* v___x_2510_; uint8_t v___x_2511_; 
v_spine_2508_ = lean_ctor_get(v_zipper_2502_, 1);
v_openLeaf_x3f_2509_ = lean_ctor_get(v_zipper_2502_, 2);
v___x_2510_ = lean_array_get_size(v_spine_2508_);
v___x_2511_ = lean_nat_dec_lt(v_matched_2503_, v___x_2510_);
if (v___x_2511_ == 0)
{
lean_object* v___x_2512_; lean_object* v___x_2513_; 
lean_del_object(v___x_2506_);
lean_dec_ref(v_cursor_2504_);
lean_dec_ref(v_zipper_2502_);
v___x_2512_ = lean_box(0);
v___x_2513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2513_, 0, v___x_2512_);
lean_ctor_set(v___x_2513_, 1, v_a_2496_);
return v___x_2513_;
}
else
{
if (lean_obj_tag(v_openLeaf_x3f_2509_) == 1)
{
lean_object* v_val_2514_; 
v_val_2514_ = lean_ctor_get(v_openLeaf_x3f_2509_, 0);
if (lean_obj_tag(v_val_2514_) == 0)
{
lean_object* v___x_2515_; uint8_t v___x_2516_; 
lean_inc_ref(v_cursor_2504_);
v___x_2515_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent(v_s_2495_, v_cursor_2504_);
v___x_2516_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_isInterrupt(v_s_2495_, v___x_2515_);
if (v___x_2516_ == 0)
{
lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2533_; 
v_isSharedCheck_2533_ = !lean_is_exclusive(v_a_2496_);
if (v_isSharedCheck_2533_ == 0)
{
lean_object* v_unused_2534_; lean_object* v_unused_2535_; 
v_unused_2534_ = lean_ctor_get(v_a_2496_, 1);
lean_dec(v_unused_2534_);
v_unused_2535_ = lean_ctor_get(v_a_2496_, 0);
lean_dec(v_unused_2535_);
v___x_2518_ = v_a_2496_;
v_isShared_2519_ = v_isSharedCheck_2533_;
goto v_resetjp_2517_;
}
else
{
lean_dec(v_a_2496_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2533_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v_pos_2520_; lean_object* v_stop_2521_; lean_object* v___x_2522_; lean_object* v___x_2524_; 
v_pos_2520_ = lean_ctor_get(v_cursor_2504_, 0);
lean_inc(v_pos_2520_);
v_stop_2521_ = lean_ctor_get(v_cursor_2504_, 1);
lean_inc(v_stop_2521_);
v___x_2522_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_2507_ == 0)
{
lean_ctor_set(v___x_2506_, 0, v___x_2522_);
v___x_2524_ = v___x_2506_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v___x_2522_);
lean_ctor_set(v_reuseFailAlloc_2532_, 1, v_cursor_2504_);
v___x_2524_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
lean_object* v___x_2525_; lean_object* v___x_2527_; 
v___x_2525_ = lean_unsigned_to_nat(0u);
if (v_isShared_2519_ == 0)
{
lean_ctor_set(v___x_2518_, 1, v___x_2525_);
lean_ctor_set(v___x_2518_, 0, v___x_2524_);
v___x_2527_ = v___x_2518_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v___x_2524_);
lean_ctor_set(v_reuseFailAlloc_2531_, 1, v___x_2525_);
v___x_2527_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2528_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_2520_, v_stop_2521_);
v___x_2529_ = l_Lean_Markdown_BlockZipper_extendParagraph___redArg(v_zipper_2502_, v___x_2528_);
v___x_2530_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2530_, 0, v___x_2529_);
lean_ctor_set(v___x_2530_, 1, v___x_2527_);
return v___x_2530_;
}
}
}
}
else
{
lean_object* v___x_2536_; lean_object* v___x_2537_; 
lean_del_object(v___x_2506_);
lean_dec_ref(v_cursor_2504_);
lean_dec_ref(v_zipper_2502_);
v___x_2536_ = lean_box(0);
v___x_2537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2537_, 0, v___x_2536_);
lean_ctor_set(v___x_2537_, 1, v_a_2496_);
return v___x_2537_;
}
}
else
{
lean_del_object(v___x_2506_);
lean_dec_ref(v_cursor_2504_);
lean_dec_ref(v_zipper_2502_);
v___y_2498_ = v_a_2496_;
goto v___jp_2497_;
}
}
else
{
lean_del_object(v___x_2506_);
lean_dec_ref(v_cursor_2504_);
lean_dec_ref(v_zipper_2502_);
v___y_2498_ = v_a_2496_;
goto v___jp_2497_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryLazyContinuation___boxed(lean_object* v_s_2540_, lean_object* v_a_2541_){
_start:
{
lean_object* v_res_2542_; 
v_res_2542_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryLazyContinuation(v_s_2540_, v_a_2541_);
lean_dec_ref(v_s_2540_);
return v_res_2542_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove_spec__0___redArg(lean_object* v_matched_2543_, lean_object* v_s_2544_, lean_object* v_a_2545_){
_start:
{
lean_object* v_spine_2546_; lean_object* v___x_2547_; uint8_t v___x_2548_; 
v_spine_2546_ = lean_ctor_get(v_a_2545_, 1);
v___x_2547_ = lean_array_get_size(v_spine_2546_);
v___x_2548_ = lean_nat_dec_lt(v_matched_2543_, v___x_2547_);
if (v___x_2548_ == 0)
{
return v_a_2545_;
}
else
{
lean_object* v___x_2549_; 
v___x_2549_ = l_Lean_Markdown_BlockZipper_closeContainer(v_s_2544_, v_a_2545_);
v_a_2545_ = v___x_2549_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove_spec__0___redArg___boxed(lean_object* v_matched_2551_, lean_object* v_s_2552_, lean_object* v_a_2553_){
_start:
{
lean_object* v_res_2554_; 
v_res_2554_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove_spec__0___redArg(v_matched_2551_, v_s_2552_, v_a_2553_);
lean_dec_ref(v_s_2552_);
lean_dec(v_matched_2551_);
return v_res_2554_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove(lean_object* v_s_2555_, lean_object* v_matched_2556_, lean_object* v_z_2557_){
_start:
{
lean_object* v___x_2558_; 
v___x_2558_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove_spec__0___redArg(v_matched_2556_, v_s_2555_, v_z_2557_);
return v___x_2558_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove___boxed(lean_object* v_s_2559_, lean_object* v_matched_2560_, lean_object* v_z_2561_){
_start:
{
lean_object* v_res_2562_; 
v_res_2562_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove(v_s_2559_, v_matched_2560_, v_z_2561_);
lean_dec(v_matched_2560_);
lean_dec_ref(v_s_2559_);
return v_res_2562_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove_spec__0(lean_object* v_matched_2563_, lean_object* v_s_2564_, lean_object* v_inst_2565_, lean_object* v_a_2566_){
_start:
{
lean_object* v___x_2567_; 
v___x_2567_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove_spec__0___redArg(v_matched_2563_, v_s_2564_, v_a_2566_);
return v___x_2567_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove_spec__0___boxed(lean_object* v_matched_2568_, lean_object* v_s_2569_, lean_object* v_inst_2570_, lean_object* v_a_2571_){
_start:
{
lean_object* v_res_2572_; 
v_res_2572_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove_spec__0(v_matched_2568_, v_s_2569_, v_inst_2570_, v_a_2571_);
lean_dec_ref(v_s_2569_);
lean_dec(v_matched_2568_);
return v_res_2572_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers(lean_object* v_s_2573_, lean_object* v_matched_2574_, lean_object* v_a_2575_){
_start:
{
lean_object* v_zipper_2576_; lean_object* v_cursor_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2587_; 
v_zipper_2576_ = lean_ctor_get(v_a_2575_, 0);
v_cursor_2577_ = lean_ctor_get(v_a_2575_, 1);
v_isSharedCheck_2587_ = !lean_is_exclusive(v_a_2575_);
if (v_isSharedCheck_2587_ == 0)
{
v___x_2579_ = v_a_2575_;
v_isShared_2580_ = v_isSharedCheck_2587_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_cursor_2577_);
lean_inc(v_zipper_2576_);
lean_dec(v_a_2575_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2587_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2584_; 
v___x_2581_ = lean_box(0);
v___x_2582_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove_spec__0___redArg(v_matched_2574_, v_s_2573_, v_zipper_2576_);
if (v_isShared_2580_ == 0)
{
lean_ctor_set(v___x_2579_, 0, v___x_2582_);
v___x_2584_ = v___x_2579_;
goto v_reusejp_2583_;
}
else
{
lean_object* v_reuseFailAlloc_2586_; 
v_reuseFailAlloc_2586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2586_, 0, v___x_2582_);
lean_ctor_set(v_reuseFailAlloc_2586_, 1, v_cursor_2577_);
v___x_2584_ = v_reuseFailAlloc_2586_;
goto v_reusejp_2583_;
}
v_reusejp_2583_:
{
lean_object* v___x_2585_; 
v___x_2585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2585_, 0, v___x_2581_);
lean_ctor_set(v___x_2585_, 1, v___x_2584_);
return v___x_2585_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers___boxed(lean_object* v_s_2588_, lean_object* v_matched_2589_, lean_object* v_a_2590_){
_start:
{
lean_object* v_res_2591_; 
v_res_2591_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers(v_s_2588_, v_matched_2589_, v_a_2590_);
lean_dec(v_matched_2589_);
lean_dec_ref(v_s_2588_);
return v_res_2591_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeFencedCode(lean_object* v_s_2592_, lean_object* v_a_2593_){
_start:
{
lean_object* v___y_2595_; lean_object* v_zipper_2598_; lean_object* v_openLeaf_x3f_2599_; 
v_zipper_2598_ = lean_ctor_get(v_a_2593_, 0);
v_openLeaf_x3f_2599_ = lean_ctor_get(v_zipper_2598_, 2);
if (lean_obj_tag(v_openLeaf_x3f_2599_) == 1)
{
lean_object* v_val_2600_; 
v_val_2600_ = lean_ctor_get(v_openLeaf_x3f_2599_, 0);
if (lean_obj_tag(v_val_2600_) == 1)
{
lean_object* v_cursor_2601_; lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2634_; 
lean_inc_ref(v_zipper_2598_);
v_cursor_2601_ = lean_ctor_get(v_a_2593_, 1);
v_isSharedCheck_2634_ = !lean_is_exclusive(v_a_2593_);
if (v_isSharedCheck_2634_ == 0)
{
lean_object* v_unused_2635_; 
v_unused_2635_ = lean_ctor_get(v_a_2593_, 0);
lean_dec(v_unused_2635_);
v___x_2603_ = v_a_2593_;
v_isShared_2604_ = v_isSharedCheck_2634_;
goto v_resetjp_2602_;
}
else
{
lean_inc(v_cursor_2601_);
lean_dec(v_a_2593_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2634_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
lean_object* v_info_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; 
v_info_2605_ = lean_ctor_get(v_val_2600_, 0);
lean_inc_ref(v_cursor_2601_);
v___x_2606_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent(v_s_2592_, v_cursor_2601_);
v___x_2607_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceClose_x3f(v_s_2592_, v___x_2606_, v_info_2605_);
if (lean_obj_tag(v___x_2607_) == 0)
{
lean_object* v_openIndent_2608_; lean_object* v___x_2609_; lean_object* v_fst_2610_; lean_object* v___x_2612_; uint8_t v_isShared_2613_; uint8_t v_isSharedCheck_2624_; 
v_openIndent_2608_ = lean_ctor_get(v_info_2605_, 1);
lean_inc(v_openIndent_2608_);
lean_inc_ref(v_cursor_2601_);
v___x_2609_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped(v_s_2592_, v_cursor_2601_, v_openIndent_2608_);
v_fst_2610_ = lean_ctor_get(v___x_2609_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___x_2609_);
if (v_isSharedCheck_2624_ == 0)
{
lean_object* v_unused_2625_; 
v_unused_2625_ = lean_ctor_get(v___x_2609_, 1);
lean_dec(v_unused_2625_);
v___x_2612_ = v___x_2609_;
v_isShared_2613_ = v_isSharedCheck_2624_;
goto v_resetjp_2611_;
}
else
{
lean_inc(v_fst_2610_);
lean_dec(v___x_2609_);
v___x_2612_ = lean_box(0);
v_isShared_2613_ = v_isSharedCheck_2624_;
goto v_resetjp_2611_;
}
v_resetjp_2611_:
{
lean_object* v___x_2614_; lean_object* v___x_2616_; 
v___x_2614_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_2604_ == 0)
{
lean_ctor_set(v___x_2603_, 0, v___x_2614_);
v___x_2616_ = v___x_2603_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v___x_2614_);
lean_ctor_set(v_reuseFailAlloc_2623_, 1, v_cursor_2601_);
v___x_2616_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2621_; 
v___x_2617_ = l_Lean_Markdown_Cursor_verbatimLine(v_s_2592_, v_fst_2610_);
v___x_2618_ = l_Lean_Markdown_BlockZipper_extendFencedCode___redArg(v_zipper_2598_, v___x_2617_);
v___x_2619_ = l_Lean_Markdown_BlockZipper_recordContentLine___redArg(v___x_2618_);
if (v_isShared_2613_ == 0)
{
lean_ctor_set_tag(v___x_2612_, 1);
lean_ctor_set(v___x_2612_, 1, v___x_2616_);
lean_ctor_set(v___x_2612_, 0, v___x_2619_);
v___x_2621_ = v___x_2612_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v___x_2619_);
lean_ctor_set(v_reuseFailAlloc_2622_, 1, v___x_2616_);
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
else
{
lean_object* v_val_2626_; lean_object* v___x_2627_; lean_object* v___x_2629_; 
v_val_2626_ = lean_ctor_get(v___x_2607_, 0);
lean_inc(v_val_2626_);
lean_dec_ref_known(v___x_2607_, 1);
v___x_2627_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_2604_ == 0)
{
lean_ctor_set(v___x_2603_, 0, v___x_2627_);
v___x_2629_ = v___x_2603_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v___x_2627_);
lean_ctor_set(v_reuseFailAlloc_2633_, 1, v_cursor_2601_);
v___x_2629_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; 
v___x_2630_ = l_Lean_Markdown_BlockZipper_closeFencedCode(v_s_2592_, v_zipper_2598_, v_val_2626_);
v___x_2631_ = l_Lean_Markdown_BlockZipper_recordContentLine___redArg(v___x_2630_);
v___x_2632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2632_, 0, v___x_2631_);
lean_ctor_set(v___x_2632_, 1, v___x_2629_);
return v___x_2632_;
}
}
}
}
else
{
v___y_2595_ = v_a_2593_;
goto v___jp_2594_;
}
}
else
{
v___y_2595_ = v_a_2593_;
goto v___jp_2594_;
}
v___jp_2594_:
{
lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___x_2596_ = lean_box(0);
v___x_2597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2597_, 0, v___x_2596_);
lean_ctor_set(v___x_2597_, 1, v___y_2595_);
return v___x_2597_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeFencedCode___boxed(lean_object* v_s_2636_, lean_object* v_a_2637_){
_start:
{
lean_object* v_res_2638_; 
v_res_2638_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeFencedCode(v_s_2636_, v_a_2637_);
lean_dec_ref(v_s_2636_);
return v_res_2638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeHtmlBlock(lean_object* v_s_2639_, lean_object* v_a_2640_){
_start:
{
lean_object* v___y_2642_; lean_object* v_zipper_2645_; lean_object* v_openLeaf_x3f_2646_; 
v_zipper_2645_ = lean_ctor_get(v_a_2640_, 0);
v_openLeaf_x3f_2646_ = lean_ctor_get(v_zipper_2645_, 2);
if (lean_obj_tag(v_openLeaf_x3f_2646_) == 1)
{
lean_object* v_val_2647_; 
v_val_2647_ = lean_ctor_get(v_openLeaf_x3f_2646_, 0);
if (lean_obj_tag(v_val_2647_) == 3)
{
lean_object* v_cursor_2648_; lean_object* v___x_2650_; uint8_t v_isShared_2651_; uint8_t v_isSharedCheck_2695_; 
lean_inc_ref(v_zipper_2645_);
v_cursor_2648_ = lean_ctor_get(v_a_2640_, 1);
v_isSharedCheck_2695_ = !lean_is_exclusive(v_a_2640_);
if (v_isSharedCheck_2695_ == 0)
{
lean_object* v_unused_2696_; 
v_unused_2696_ = lean_ctor_get(v_a_2640_, 0);
lean_dec(v_unused_2696_);
v___x_2650_ = v_a_2640_;
v_isShared_2651_ = v_isSharedCheck_2695_;
goto v_resetjp_2649_;
}
else
{
lean_inc(v_cursor_2648_);
lean_dec(v_a_2640_);
v___x_2650_ = lean_box(0);
v_isShared_2651_ = v_isSharedCheck_2695_;
goto v_resetjp_2649_;
}
v_resetjp_2649_:
{
uint8_t v_kind_2652_; uint8_t v___x_2653_; 
v_kind_2652_ = lean_ctor_get_uint8(v_val_2647_, sizeof(void*)*1);
v___x_2653_ = l_Lean_Markdown_HtmlBlockKind_endsAtBlankLine(v_kind_2652_);
if (v___x_2653_ == 0)
{
lean_object* v___x_2654_; lean_object* v_source_2655_; uint8_t v___x_2656_; 
lean_inc_ref(v_cursor_2648_);
v___x_2654_ = l_Lean_Markdown_Cursor_verbatimLine(v_s_2639_, v_cursor_2648_);
v_source_2655_ = lean_ctor_get(v___x_2654_, 0);
v___x_2656_ = l_Lean_Markdown_HtmlBlockKind_endConditionMet(v_s_2639_, v_kind_2652_, v_source_2655_);
if (v___x_2656_ == 0)
{
uint8_t v___x_2657_; 
lean_inc_ref(v_cursor_2648_);
v___x_2657_ = l_Lean_Markdown_Cursor_isBlank(v_s_2639_, v_cursor_2648_);
if (v___x_2657_ == 0)
{
lean_object* v___x_2658_; lean_object* v___x_2660_; 
v___x_2658_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_2651_ == 0)
{
lean_ctor_set(v___x_2650_, 0, v___x_2658_);
v___x_2660_ = v___x_2650_;
goto v_reusejp_2659_;
}
else
{
lean_object* v_reuseFailAlloc_2664_; 
v_reuseFailAlloc_2664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2664_, 0, v___x_2658_);
lean_ctor_set(v_reuseFailAlloc_2664_, 1, v_cursor_2648_);
v___x_2660_ = v_reuseFailAlloc_2664_;
goto v_reusejp_2659_;
}
v_reusejp_2659_:
{
lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; 
v___x_2661_ = l_Lean_Markdown_BlockZipper_extendHtml___redArg(v_zipper_2645_, v___x_2654_);
v___x_2662_ = l_Lean_Markdown_BlockZipper_recordContentLine___redArg(v___x_2661_);
v___x_2663_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2663_, 0, v___x_2662_);
lean_ctor_set(v___x_2663_, 1, v___x_2660_);
return v___x_2663_;
}
}
else
{
lean_object* v___x_2665_; lean_object* v___x_2667_; 
v___x_2665_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_2651_ == 0)
{
lean_ctor_set(v___x_2650_, 0, v___x_2665_);
v___x_2667_ = v___x_2650_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2671_; 
v_reuseFailAlloc_2671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2671_, 0, v___x_2665_);
lean_ctor_set(v_reuseFailAlloc_2671_, 1, v_cursor_2648_);
v___x_2667_ = v_reuseFailAlloc_2671_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
v___x_2668_ = l_Lean_Markdown_BlockZipper_extendHtml___redArg(v_zipper_2645_, v___x_2654_);
v___x_2669_ = l_Lean_Markdown_BlockZipper_recordBlankLine(v_s_2639_, v___x_2668_);
v___x_2670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2669_);
lean_ctor_set(v___x_2670_, 1, v___x_2667_);
return v___x_2670_;
}
}
}
else
{
lean_object* v___x_2672_; lean_object* v___x_2674_; 
v___x_2672_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_2651_ == 0)
{
lean_ctor_set(v___x_2650_, 0, v___x_2672_);
v___x_2674_ = v___x_2650_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2679_; 
v_reuseFailAlloc_2679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2679_, 0, v___x_2672_);
lean_ctor_set(v_reuseFailAlloc_2679_, 1, v_cursor_2648_);
v___x_2674_ = v_reuseFailAlloc_2679_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___x_2675_ = l_Lean_Markdown_BlockZipper_extendHtml___redArg(v_zipper_2645_, v___x_2654_);
v___x_2676_ = l_Lean_Markdown_BlockZipper_closeLeaf(v_s_2639_, v___x_2675_);
v___x_2677_ = l_Lean_Markdown_BlockZipper_recordContentLine___redArg(v___x_2676_);
v___x_2678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2678_, 0, v___x_2677_);
lean_ctor_set(v___x_2678_, 1, v___x_2674_);
return v___x_2678_;
}
}
}
else
{
uint8_t v___x_2680_; 
lean_inc_ref(v_cursor_2648_);
v___x_2680_ = l_Lean_Markdown_Cursor_isBlank(v_s_2639_, v_cursor_2648_);
if (v___x_2680_ == 0)
{
lean_object* v___x_2681_; lean_object* v___x_2683_; 
v___x_2681_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
lean_inc_ref(v_cursor_2648_);
if (v_isShared_2651_ == 0)
{
lean_ctor_set(v___x_2650_, 0, v___x_2681_);
v___x_2683_ = v___x_2650_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v___x_2681_);
lean_ctor_set(v_reuseFailAlloc_2688_, 1, v_cursor_2648_);
v___x_2683_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; 
v___x_2684_ = l_Lean_Markdown_Cursor_verbatimLine(v_s_2639_, v_cursor_2648_);
v___x_2685_ = l_Lean_Markdown_BlockZipper_extendHtml___redArg(v_zipper_2645_, v___x_2684_);
v___x_2686_ = l_Lean_Markdown_BlockZipper_recordContentLine___redArg(v___x_2685_);
v___x_2687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2687_, 0, v___x_2686_);
lean_ctor_set(v___x_2687_, 1, v___x_2683_);
return v___x_2687_;
}
}
else
{
lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2692_; 
v___x_2689_ = lean_box(0);
v___x_2690_ = l_Lean_Markdown_BlockZipper_closeLeaf(v_s_2639_, v_zipper_2645_);
if (v_isShared_2651_ == 0)
{
lean_ctor_set(v___x_2650_, 0, v___x_2690_);
v___x_2692_ = v___x_2650_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v___x_2690_);
lean_ctor_set(v_reuseFailAlloc_2694_, 1, v_cursor_2648_);
v___x_2692_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
lean_object* v___x_2693_; 
v___x_2693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2693_, 0, v___x_2689_);
lean_ctor_set(v___x_2693_, 1, v___x_2692_);
return v___x_2693_;
}
}
}
}
}
else
{
v___y_2642_ = v_a_2640_;
goto v___jp_2641_;
}
}
else
{
v___y_2642_ = v_a_2640_;
goto v___jp_2641_;
}
v___jp_2641_:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; 
v___x_2643_ = lean_box(0);
v___x_2644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2644_, 0, v___x_2643_);
lean_ctor_set(v___x_2644_, 1, v___y_2642_);
return v___x_2644_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeHtmlBlock___boxed(lean_object* v_s_2697_, lean_object* v_a_2698_){
_start:
{
lean_object* v_res_2699_; 
v_res_2699_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeHtmlBlock(v_s_2697_, v_a_2698_);
lean_dec_ref(v_s_2697_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentedCode(lean_object* v_s_2700_, lean_object* v_a_2701_){
_start:
{
lean_object* v___y_2703_; lean_object* v_zipper_2706_; lean_object* v_openLeaf_x3f_2707_; 
v_zipper_2706_ = lean_ctor_get(v_a_2701_, 0);
v_openLeaf_x3f_2707_ = lean_ctor_get(v_zipper_2706_, 2);
if (lean_obj_tag(v_openLeaf_x3f_2707_) == 1)
{
lean_object* v_val_2708_; 
v_val_2708_ = lean_ctor_get(v_openLeaf_x3f_2707_, 0);
if (lean_obj_tag(v_val_2708_) == 2)
{
lean_object* v_cursor_2709_; lean_object* v___x_2711_; uint8_t v_isShared_2712_; uint8_t v_isSharedCheck_2753_; 
lean_inc_ref(v_zipper_2706_);
v_cursor_2709_ = lean_ctor_get(v_a_2701_, 1);
v_isSharedCheck_2753_ = !lean_is_exclusive(v_a_2701_);
if (v_isSharedCheck_2753_ == 0)
{
lean_object* v_unused_2754_; 
v_unused_2754_ = lean_ctor_get(v_a_2701_, 0);
lean_dec(v_unused_2754_);
v___x_2711_ = v_a_2701_;
v_isShared_2712_ = v_isSharedCheck_2753_;
goto v_resetjp_2710_;
}
else
{
lean_inc(v_cursor_2709_);
lean_dec(v_a_2701_);
v___x_2711_ = lean_box(0);
v_isShared_2712_ = v_isSharedCheck_2753_;
goto v_resetjp_2710_;
}
v_resetjp_2710_:
{
lean_object* v___x_2713_; lean_object* v_after_2714_; lean_object* v_indent_2715_; lean_object* v___x_2717_; uint8_t v_isShared_2718_; uint8_t v_isSharedCheck_2752_; 
lean_inc_ref(v_cursor_2709_);
v___x_2713_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent(v_s_2700_, v_cursor_2709_);
v_after_2714_ = lean_ctor_get(v___x_2713_, 0);
v_indent_2715_ = lean_ctor_get(v___x_2713_, 1);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2713_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2717_ = v___x_2713_;
v_isShared_2718_ = v_isSharedCheck_2752_;
goto v_resetjp_2716_;
}
else
{
lean_inc(v_indent_2715_);
lean_inc(v_after_2714_);
lean_dec(v___x_2713_);
v___x_2717_ = lean_box(0);
v_isShared_2718_ = v_isSharedCheck_2752_;
goto v_resetjp_2716_;
}
v_resetjp_2716_:
{
lean_object* v_pos_2719_; lean_object* v_stop_2720_; uint8_t v___x_2721_; 
v_pos_2719_ = lean_ctor_get(v_after_2714_, 0);
lean_inc(v_pos_2719_);
v_stop_2720_ = lean_ctor_get(v_after_2714_, 1);
lean_inc(v_stop_2720_);
lean_dec_ref(v_after_2714_);
v___x_2721_ = lean_nat_dec_le(v_stop_2720_, v_pos_2719_);
lean_dec(v_pos_2719_);
lean_dec(v_stop_2720_);
if (v___x_2721_ == 0)
{
lean_object* v___x_2722_; uint8_t v___x_2723_; 
v___x_2722_ = lean_unsigned_to_nat(4u);
v___x_2723_ = lean_nat_dec_le(v___x_2722_, v_indent_2715_);
lean_dec(v_indent_2715_);
if (v___x_2723_ == 0)
{
lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2727_; 
v___x_2724_ = lean_box(0);
v___x_2725_ = l_Lean_Markdown_BlockZipper_closeLeaf(v_s_2700_, v_zipper_2706_);
if (v_isShared_2712_ == 0)
{
lean_ctor_set(v___x_2711_, 0, v___x_2725_);
v___x_2727_ = v___x_2711_;
goto v_reusejp_2726_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v___x_2725_);
lean_ctor_set(v_reuseFailAlloc_2731_, 1, v_cursor_2709_);
v___x_2727_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2726_;
}
v_reusejp_2726_:
{
lean_object* v___x_2729_; 
if (v_isShared_2718_ == 0)
{
lean_ctor_set(v___x_2717_, 1, v___x_2727_);
lean_ctor_set(v___x_2717_, 0, v___x_2724_);
v___x_2729_ = v___x_2717_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v___x_2724_);
lean_ctor_set(v_reuseFailAlloc_2730_, 1, v___x_2727_);
v___x_2729_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
return v___x_2729_;
}
}
}
else
{
lean_object* v___x_2732_; lean_object* v___x_2734_; 
v___x_2732_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
lean_inc_ref(v_cursor_2709_);
if (v_isShared_2712_ == 0)
{
lean_ctor_set(v___x_2711_, 0, v___x_2732_);
v___x_2734_ = v___x_2711_;
goto v_reusejp_2733_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v___x_2732_);
lean_ctor_set(v_reuseFailAlloc_2741_, 1, v_cursor_2709_);
v___x_2734_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2733_;
}
v_reusejp_2733_:
{
lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2739_; 
v___x_2735_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_indentedCodeLine(v_s_2700_, v_cursor_2709_);
v___x_2736_ = l_Lean_Markdown_BlockZipper_indentedCodeAddLine___redArg(v_zipper_2706_, v___x_2735_);
v___x_2737_ = l_Lean_Markdown_BlockZipper_recordContentLine___redArg(v___x_2736_);
if (v_isShared_2718_ == 0)
{
lean_ctor_set_tag(v___x_2717_, 1);
lean_ctor_set(v___x_2717_, 1, v___x_2734_);
lean_ctor_set(v___x_2717_, 0, v___x_2737_);
v___x_2739_ = v___x_2717_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v___x_2737_);
lean_ctor_set(v_reuseFailAlloc_2740_, 1, v___x_2734_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
}
}
else
{
lean_object* v___x_2742_; lean_object* v___x_2744_; 
lean_dec(v_indent_2715_);
v___x_2742_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
lean_inc_ref(v_cursor_2709_);
if (v_isShared_2712_ == 0)
{
lean_ctor_set(v___x_2711_, 0, v___x_2742_);
v___x_2744_ = v___x_2711_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v___x_2742_);
lean_ctor_set(v_reuseFailAlloc_2751_, 1, v_cursor_2709_);
v___x_2744_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2749_; 
v___x_2745_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_indentedCodeLine(v_s_2700_, v_cursor_2709_);
v___x_2746_ = l_Lean_Markdown_BlockZipper_indentedCodeAddBlank___redArg(v_zipper_2706_, v___x_2745_);
v___x_2747_ = l_Lean_Markdown_BlockZipper_recordBlankLine(v_s_2700_, v___x_2746_);
if (v_isShared_2718_ == 0)
{
lean_ctor_set_tag(v___x_2717_, 1);
lean_ctor_set(v___x_2717_, 1, v___x_2744_);
lean_ctor_set(v___x_2717_, 0, v___x_2747_);
v___x_2749_ = v___x_2717_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v___x_2747_);
lean_ctor_set(v_reuseFailAlloc_2750_, 1, v___x_2744_);
v___x_2749_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
return v___x_2749_;
}
}
}
}
}
}
else
{
v___y_2703_ = v_a_2701_;
goto v___jp_2702_;
}
}
else
{
v___y_2703_ = v_a_2701_;
goto v___jp_2702_;
}
v___jp_2702_:
{
lean_object* v___x_2704_; lean_object* v___x_2705_; 
v___x_2704_ = lean_box(0);
v___x_2705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2705_, 0, v___x_2704_);
lean_ctor_set(v___x_2705_, 1, v___y_2703_);
return v___x_2705_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentedCode___boxed(lean_object* v_s_2755_, lean_object* v_a_2756_){
_start:
{
lean_object* v_res_2757_; 
v_res_2757_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentedCode(v_s_2755_, v_a_2756_);
lean_dec_ref(v_s_2755_);
return v_res_2757_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes_spec__0___redArg___lam__1(lean_object* v___f_2758_, lean_object* v_snd_2759_, lean_object* v_00___2760_, lean_object* v___y_2761_){
_start:
{
lean_object* v___x_2762_; lean_object* v___x_2763_; 
v___x_2762_ = lean_box(0);
v___x_2763_ = lean_apply_3(v___f_2758_, v___x_2762_, v_snd_2759_, v___y_2761_);
return v___x_2763_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes_spec__0___redArg___lam__0(lean_object* v_s_2764_, lean_object* v_fst_2765_, lean_object* v_fst_2766_, lean_object* v_____r_2767_, lean_object* v_breakScanFailedAt_x3f_2768_, lean_object* v___y_2769_){
_start:
{
lean_object* v___x_2770_; 
lean_inc(v_fst_2765_);
v___x_2770_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f(v_s_2764_, v_fst_2765_);
if (lean_obj_tag(v___x_2770_) == 1)
{
lean_object* v_val_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2803_; 
lean_dec(v_fst_2765_);
v_val_2771_ = lean_ctor_get(v___x_2770_, 0);
v_isSharedCheck_2803_ = !lean_is_exclusive(v___x_2770_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2773_ = v___x_2770_;
v_isShared_2774_ = v_isSharedCheck_2803_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_val_2771_);
lean_dec(v___x_2770_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2803_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
lean_object* v_fst_2775_; lean_object* v_snd_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2802_; 
v_fst_2775_ = lean_ctor_get(v_val_2771_, 0);
v_snd_2776_ = lean_ctor_get(v_val_2771_, 1);
v_isSharedCheck_2802_ = !lean_is_exclusive(v_val_2771_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2778_ = v_val_2771_;
v_isShared_2779_ = v_isSharedCheck_2802_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_snd_2776_);
lean_inc(v_fst_2775_);
lean_dec(v_val_2771_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2802_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v_zipper_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2800_; 
v_zipper_2780_ = lean_ctor_get(v___y_2769_, 0);
v_isSharedCheck_2800_ = !lean_is_exclusive(v___y_2769_);
if (v_isSharedCheck_2800_ == 0)
{
lean_object* v_unused_2801_; 
v_unused_2801_ = lean_ctor_get(v___y_2769_, 1);
lean_dec(v_unused_2801_);
v___x_2782_ = v___y_2769_;
v_isShared_2783_ = v_isSharedCheck_2800_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_zipper_2780_);
lean_dec(v___y_2769_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2800_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2789_; 
v___x_2784_ = lean_unsigned_to_nat(1u);
v___x_2785_ = lean_mk_empty_array_with_capacity(v___x_2784_);
v___x_2786_ = lean_array_push(v___x_2785_, v_fst_2775_);
v___x_2787_ = l_Lean_Markdown_BlockZipper_openBlockquote(v_s_2764_, v_zipper_2780_, v___x_2786_);
lean_inc(v_snd_2776_);
if (v_isShared_2783_ == 0)
{
lean_ctor_set(v___x_2782_, 1, v_snd_2776_);
lean_ctor_set(v___x_2782_, 0, v___x_2787_);
v___x_2789_ = v___x_2782_;
goto v_reusejp_2788_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v___x_2787_);
lean_ctor_set(v_reuseFailAlloc_2799_, 1, v_snd_2776_);
v___x_2789_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2788_;
}
v_reusejp_2788_:
{
lean_object* v___x_2790_; lean_object* v___x_2792_; 
v___x_2790_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent(v_s_2764_, v_snd_2776_);
if (v_isShared_2779_ == 0)
{
lean_ctor_set(v___x_2778_, 1, v_breakScanFailedAt_x3f_2768_);
lean_ctor_set(v___x_2778_, 0, v_fst_2766_);
v___x_2792_ = v___x_2778_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v_fst_2766_);
lean_ctor_set(v_reuseFailAlloc_2798_, 1, v_breakScanFailedAt_x3f_2768_);
v___x_2792_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
lean_object* v___x_2793_; lean_object* v___x_2795_; 
v___x_2793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2793_, 0, v___x_2790_);
lean_ctor_set(v___x_2793_, 1, v___x_2792_);
if (v_isShared_2774_ == 0)
{
lean_ctor_set(v___x_2773_, 0, v___x_2793_);
v___x_2795_ = v___x_2773_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2797_; 
v_reuseFailAlloc_2797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2797_, 0, v___x_2793_);
v___x_2795_ = v_reuseFailAlloc_2797_;
goto v_reusejp_2794_;
}
v_reusejp_2794_:
{
lean_object* v___x_2796_; 
v___x_2796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2796_, 0, v___x_2795_);
lean_ctor_set(v___x_2796_, 1, v___x_2789_);
return v___x_2796_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2804_; 
lean_dec(v___x_2770_);
lean_inc(v_fst_2765_);
v___x_2804_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseListMarker_x3f(v_s_2764_, v_fst_2765_);
if (lean_obj_tag(v___x_2804_) == 1)
{
lean_object* v_val_2805_; lean_object* v___x_2807_; uint8_t v_isShared_2808_; uint8_t v_isSharedCheck_2842_; 
v_val_2805_ = lean_ctor_get(v___x_2804_, 0);
v_isSharedCheck_2842_ = !lean_is_exclusive(v___x_2804_);
if (v_isSharedCheck_2842_ == 0)
{
v___x_2807_ = v___x_2804_;
v_isShared_2808_ = v_isSharedCheck_2842_;
goto v_resetjp_2806_;
}
else
{
lean_inc(v_val_2805_);
lean_dec(v___x_2804_);
v___x_2807_ = lean_box(0);
v_isShared_2808_ = v_isSharedCheck_2842_;
goto v_resetjp_2806_;
}
v_resetjp_2806_:
{
lean_object* v_zipper_2809_; lean_object* v_openLeaf_x3f_2826_; 
v_zipper_2809_ = lean_ctor_get(v___y_2769_, 0);
v_openLeaf_x3f_2826_ = lean_ctor_get(v_zipper_2809_, 2);
if (lean_obj_tag(v_openLeaf_x3f_2826_) == 1)
{
lean_object* v_val_2827_; 
v_val_2827_ = lean_ctor_get(v_openLeaf_x3f_2826_, 0);
lean_inc(v_val_2827_);
if (lean_obj_tag(v_val_2827_) == 0)
{
lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2840_; 
v_isSharedCheck_2840_ = !lean_is_exclusive(v_val_2827_);
if (v_isSharedCheck_2840_ == 0)
{
lean_object* v_unused_2841_; 
v_unused_2841_ = lean_ctor_get(v_val_2827_, 0);
lean_dec(v_unused_2841_);
v___x_2829_ = v_val_2827_;
v_isShared_2830_ = v_isSharedCheck_2840_;
goto v_resetjp_2828_;
}
else
{
lean_dec(v_val_2827_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2840_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v_after_2831_; lean_object* v_kind_2832_; uint8_t v___x_2833_; 
v_after_2831_ = lean_ctor_get(v_val_2805_, 1);
v_kind_2832_ = lean_ctor_get(v_val_2805_, 2);
lean_inc_ref(v_after_2831_);
v___x_2833_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_listMarkerInterruptsParagraph(v_s_2764_, v_after_2831_, v_kind_2832_);
if (v___x_2833_ == 0)
{
lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2837_; 
lean_del_object(v___x_2807_);
lean_dec(v_val_2805_);
v___x_2834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2834_, 0, v_fst_2766_);
lean_ctor_set(v___x_2834_, 1, v_breakScanFailedAt_x3f_2768_);
v___x_2835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2835_, 0, v_fst_2765_);
lean_ctor_set(v___x_2835_, 1, v___x_2834_);
if (v_isShared_2830_ == 0)
{
lean_ctor_set(v___x_2829_, 0, v___x_2835_);
v___x_2837_ = v___x_2829_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v___x_2835_);
v___x_2837_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
lean_object* v___x_2838_; 
v___x_2838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2838_, 0, v___x_2837_);
lean_ctor_set(v___x_2838_, 1, v___y_2769_);
return v___x_2838_;
}
}
else
{
lean_inc_ref(v_zipper_2809_);
lean_del_object(v___x_2829_);
lean_dec_ref(v___y_2769_);
lean_dec(v_fst_2766_);
lean_dec(v_fst_2765_);
goto v___jp_2810_;
}
}
}
else
{
lean_inc_ref(v_zipper_2809_);
lean_dec(v_val_2827_);
lean_dec_ref(v___y_2769_);
lean_dec(v_fst_2766_);
lean_dec(v_fst_2765_);
goto v___jp_2810_;
}
}
else
{
lean_inc_ref(v_zipper_2809_);
lean_dec_ref(v___y_2769_);
lean_dec(v_fst_2766_);
lean_dec(v_fst_2765_);
goto v___jp_2810_;
}
v___jp_2810_:
{
lean_object* v_marker_2811_; lean_object* v_after_2812_; lean_object* v_kind_2813_; lean_object* v_contentColumn_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; uint8_t v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2823_; 
v_marker_2811_ = lean_ctor_get(v_val_2805_, 0);
lean_inc_ref(v_marker_2811_);
v_after_2812_ = lean_ctor_get(v_val_2805_, 1);
lean_inc_ref_n(v_after_2812_, 2);
v_kind_2813_ = lean_ctor_get(v_val_2805_, 2);
lean_inc_ref(v_kind_2813_);
v_contentColumn_2814_ = lean_ctor_get(v_val_2805_, 3);
lean_inc(v_contentColumn_2814_);
lean_dec(v_val_2805_);
v___x_2815_ = l_Lean_Markdown_BlockZipper_openItem(v_s_2764_, v_zipper_2809_, v_kind_2813_, v_marker_2811_, v_contentColumn_2814_);
v___x_2816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2816_, 0, v___x_2815_);
lean_ctor_set(v___x_2816_, 1, v_after_2812_);
v___x_2817_ = 1;
v___x_2818_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent(v_s_2764_, v_after_2812_);
v___x_2819_ = lean_box(v___x_2817_);
v___x_2820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2820_, 0, v___x_2819_);
lean_ctor_set(v___x_2820_, 1, v_breakScanFailedAt_x3f_2768_);
v___x_2821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2821_, 0, v___x_2818_);
lean_ctor_set(v___x_2821_, 1, v___x_2820_);
if (v_isShared_2808_ == 0)
{
lean_ctor_set(v___x_2807_, 0, v___x_2821_);
v___x_2823_ = v___x_2807_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v___x_2821_);
v___x_2823_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
lean_object* v___x_2824_; 
v___x_2824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2824_, 0, v___x_2823_);
lean_ctor_set(v___x_2824_, 1, v___x_2816_);
return v___x_2824_;
}
}
}
}
else
{
lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; 
lean_dec(v___x_2804_);
v___x_2843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2843_, 0, v_fst_2766_);
lean_ctor_set(v___x_2843_, 1, v_breakScanFailedAt_x3f_2768_);
v___x_2844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2844_, 0, v_fst_2765_);
lean_ctor_set(v___x_2844_, 1, v___x_2843_);
v___x_2845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2845_, 0, v___x_2844_);
v___x_2846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2846_, 0, v___x_2845_);
lean_ctor_set(v___x_2846_, 1, v___y_2769_);
return v___x_2846_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes_spec__0___redArg___lam__0___boxed(lean_object* v_s_2847_, lean_object* v_fst_2848_, lean_object* v_fst_2849_, lean_object* v_____r_2850_, lean_object* v_breakScanFailedAt_x3f_2851_, lean_object* v___y_2852_){
_start:
{
lean_object* v_res_2853_; 
v_res_2853_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes_spec__0___redArg___lam__0(v_s_2847_, v_fst_2848_, v_fst_2849_, v_____r_2850_, v_breakScanFailedAt_x3f_2851_, v___y_2852_);
lean_dec_ref(v_s_2847_);
return v_res_2853_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes_spec__0___redArg(lean_object* v_s_2854_, lean_object* v_a_2855_, lean_object* v___y_2856_){
_start:
{
lean_object* v___y_2858_; lean_object* v_snd_2882_; lean_object* v_fst_2883_; lean_object* v___x_2885_; uint8_t v_isShared_2886_; uint8_t v_isSharedCheck_2923_; 
v_snd_2882_ = lean_ctor_get(v_a_2855_, 1);
v_fst_2883_ = lean_ctor_get(v_a_2855_, 0);
v_isSharedCheck_2923_ = !lean_is_exclusive(v_a_2855_);
if (v_isSharedCheck_2923_ == 0)
{
v___x_2885_ = v_a_2855_;
v_isShared_2886_ = v_isSharedCheck_2923_;
goto v_resetjp_2884_;
}
else
{
lean_inc(v_snd_2882_);
lean_inc(v_fst_2883_);
lean_dec(v_a_2855_);
v___x_2885_ = lean_box(0);
v_isShared_2886_ = v_isSharedCheck_2923_;
goto v_resetjp_2884_;
}
v___jp_2857_:
{
if (lean_obj_tag(v___y_2858_) == 0)
{
lean_object* v_a_2859_; 
v_a_2859_ = lean_ctor_get(v___y_2858_, 0);
lean_inc(v_a_2859_);
if (lean_obj_tag(v_a_2859_) == 0)
{
lean_object* v_a_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2868_; 
lean_dec_ref(v_s_2854_);
v_a_2860_ = lean_ctor_get(v___y_2858_, 1);
v_isSharedCheck_2868_ = !lean_is_exclusive(v___y_2858_);
if (v_isSharedCheck_2868_ == 0)
{
lean_object* v_unused_2869_; 
v_unused_2869_ = lean_ctor_get(v___y_2858_, 0);
lean_dec(v_unused_2869_);
v___x_2862_ = v___y_2858_;
v_isShared_2863_ = v_isSharedCheck_2868_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_a_2860_);
lean_dec(v___y_2858_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2868_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v_a_2864_; lean_object* v___x_2866_; 
v_a_2864_ = lean_ctor_get(v_a_2859_, 0);
lean_inc(v_a_2864_);
lean_dec_ref_known(v_a_2859_, 1);
if (v_isShared_2863_ == 0)
{
lean_ctor_set(v___x_2862_, 0, v_a_2864_);
v___x_2866_ = v___x_2862_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v_a_2864_);
lean_ctor_set(v_reuseFailAlloc_2867_, 1, v_a_2860_);
v___x_2866_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
return v___x_2866_;
}
}
}
else
{
lean_object* v_a_2870_; lean_object* v_a_2871_; 
v_a_2870_ = lean_ctor_get(v___y_2858_, 1);
lean_inc(v_a_2870_);
lean_dec_ref_known(v___y_2858_, 2);
v_a_2871_ = lean_ctor_get(v_a_2859_, 0);
lean_inc(v_a_2871_);
lean_dec_ref_known(v_a_2859_, 1);
v_a_2855_ = v_a_2871_;
v___y_2856_ = v_a_2870_;
goto _start;
}
}
else
{
lean_object* v_a_2873_; lean_object* v_a_2874_; lean_object* v___x_2876_; uint8_t v_isShared_2877_; uint8_t v_isSharedCheck_2881_; 
lean_dec_ref(v_s_2854_);
v_a_2873_ = lean_ctor_get(v___y_2858_, 0);
v_a_2874_ = lean_ctor_get(v___y_2858_, 1);
v_isSharedCheck_2881_ = !lean_is_exclusive(v___y_2858_);
if (v_isSharedCheck_2881_ == 0)
{
v___x_2876_ = v___y_2858_;
v_isShared_2877_ = v_isSharedCheck_2881_;
goto v_resetjp_2875_;
}
else
{
lean_inc(v_a_2874_);
lean_inc(v_a_2873_);
lean_dec(v___y_2858_);
v___x_2876_ = lean_box(0);
v_isShared_2877_ = v_isSharedCheck_2881_;
goto v_resetjp_2875_;
}
v_resetjp_2875_:
{
lean_object* v___x_2879_; 
if (v_isShared_2877_ == 0)
{
v___x_2879_ = v___x_2876_;
goto v_reusejp_2878_;
}
else
{
lean_object* v_reuseFailAlloc_2880_; 
v_reuseFailAlloc_2880_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2880_, 0, v_a_2873_);
lean_ctor_set(v_reuseFailAlloc_2880_, 1, v_a_2874_);
v___x_2879_ = v_reuseFailAlloc_2880_;
goto v_reusejp_2878_;
}
v_reusejp_2878_:
{
return v___x_2879_;
}
}
}
}
v_resetjp_2884_:
{
lean_object* v_fst_2887_; lean_object* v_snd_2888_; lean_object* v___x_2890_; uint8_t v_isShared_2891_; uint8_t v_isSharedCheck_2922_; 
v_fst_2887_ = lean_ctor_get(v_snd_2882_, 0);
v_snd_2888_ = lean_ctor_get(v_snd_2882_, 1);
v_isSharedCheck_2922_ = !lean_is_exclusive(v_snd_2882_);
if (v_isSharedCheck_2922_ == 0)
{
v___x_2890_ = v_snd_2882_;
v_isShared_2891_ = v_isSharedCheck_2922_;
goto v_resetjp_2889_;
}
else
{
lean_inc(v_snd_2888_);
lean_inc(v_fst_2887_);
lean_dec(v_snd_2882_);
v___x_2890_ = lean_box(0);
v_isShared_2891_ = v_isSharedCheck_2922_;
goto v_resetjp_2889_;
}
v_resetjp_2889_:
{
lean_object* v___f_2892_; 
lean_inc(v_fst_2887_);
lean_inc(v_fst_2883_);
lean_inc_ref(v_s_2854_);
v___f_2892_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes_spec__0___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_2892_, 0, v_s_2854_);
lean_closure_set(v___f_2892_, 1, v_fst_2883_);
lean_closure_set(v___f_2892_, 2, v_fst_2887_);
if (lean_obj_tag(v_snd_2888_) == 0)
{
goto v___jp_2893_;
}
else
{
lean_object* v_after_2914_; lean_object* v_val_2915_; lean_object* v_pos_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; uint8_t v___x_2919_; 
v_after_2914_ = lean_ctor_get(v_fst_2883_, 0);
v_val_2915_ = lean_ctor_get(v_snd_2888_, 0);
v_pos_2916_ = lean_ctor_get(v_after_2914_, 0);
v___x_2917_ = lean_unsigned_to_nat(1u);
v___x_2918_ = lean_nat_add(v_pos_2916_, v___x_2917_);
v___x_2919_ = lean_nat_dec_le(v___x_2918_, v_val_2915_);
lean_dec(v___x_2918_);
if (v___x_2919_ == 0)
{
goto v___jp_2893_;
}
else
{
lean_object* v___x_2920_; lean_object* v___x_2921_; 
lean_del_object(v___x_2890_);
lean_dec(v_fst_2887_);
lean_del_object(v___x_2885_);
lean_dec(v_fst_2883_);
v___x_2920_ = lean_box(0);
v___x_2921_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes_spec__0___redArg___lam__1(v___f_2892_, v_snd_2888_, v___x_2920_, v___y_2856_);
v___y_2858_ = v___x_2921_;
goto v___jp_2857_;
}
}
v___jp_2893_:
{
lean_object* v___x_2894_; 
lean_inc(v_fst_2883_);
v___x_2894_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_checkThematicBreak(v_s_2854_, v_fst_2883_);
switch(lean_obj_tag(v___x_2894_))
{
case 0:
{
lean_object* v___x_2896_; 
lean_dec_ref(v___f_2892_);
lean_dec_ref(v_s_2854_);
if (v_isShared_2891_ == 0)
{
v___x_2896_ = v___x_2890_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v_fst_2887_);
lean_ctor_set(v_reuseFailAlloc_2901_, 1, v_snd_2888_);
v___x_2896_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
lean_object* v___x_2898_; 
if (v_isShared_2886_ == 0)
{
lean_ctor_set(v___x_2885_, 1, v___x_2896_);
v___x_2898_ = v___x_2885_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2900_; 
v_reuseFailAlloc_2900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2900_, 0, v_fst_2883_);
lean_ctor_set(v_reuseFailAlloc_2900_, 1, v___x_2896_);
v___x_2898_ = v_reuseFailAlloc_2900_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
lean_object* v___x_2899_; 
v___x_2899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2899_, 0, v___x_2898_);
lean_ctor_set(v___x_2899_, 1, v___y_2856_);
return v___x_2899_;
}
}
}
case 1:
{
lean_object* v_pos_2902_; lean_object* v___x_2904_; uint8_t v_isShared_2905_; uint8_t v_isSharedCheck_2911_; 
lean_dec_ref(v___f_2892_);
lean_del_object(v___x_2890_);
lean_dec(v_snd_2888_);
lean_del_object(v___x_2885_);
v_pos_2902_ = lean_ctor_get(v___x_2894_, 0);
v_isSharedCheck_2911_ = !lean_is_exclusive(v___x_2894_);
if (v_isSharedCheck_2911_ == 0)
{
v___x_2904_ = v___x_2894_;
v_isShared_2905_ = v_isSharedCheck_2911_;
goto v_resetjp_2903_;
}
else
{
lean_inc(v_pos_2902_);
lean_dec(v___x_2894_);
v___x_2904_ = lean_box(0);
v_isShared_2905_ = v_isSharedCheck_2911_;
goto v_resetjp_2903_;
}
v_resetjp_2903_:
{
lean_object* v___x_2907_; 
if (v_isShared_2905_ == 0)
{
v___x_2907_ = v___x_2904_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v_pos_2902_);
v___x_2907_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
lean_object* v___x_2908_; lean_object* v___x_2909_; 
v___x_2908_ = lean_box(0);
v___x_2909_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes_spec__0___redArg___lam__0(v_s_2854_, v_fst_2883_, v_fst_2887_, v___x_2908_, v___x_2907_, v___y_2856_);
v___y_2858_ = v___x_2909_;
goto v___jp_2857_;
}
}
}
default: 
{
lean_object* v___x_2912_; lean_object* v___x_2913_; 
lean_del_object(v___x_2890_);
lean_dec(v_fst_2887_);
lean_del_object(v___x_2885_);
lean_dec(v_fst_2883_);
v___x_2912_ = lean_box(0);
v___x_2913_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes_spec__0___redArg___lam__1(v___f_2892_, v_snd_2888_, v___x_2912_, v___y_2856_);
v___y_2858_ = v___x_2913_;
goto v___jp_2857_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes(lean_object* v_s_2928_, lean_object* v_line_2929_, lean_object* v_a_2930_){
_start:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; 
v___x_2931_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes___closed__0));
v___x_2932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2932_, 0, v_line_2929_);
lean_ctor_set(v___x_2932_, 1, v___x_2931_);
v___x_2933_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes_spec__0___redArg(v_s_2928_, v___x_2932_, v_a_2930_);
if (lean_obj_tag(v___x_2933_) == 0)
{
lean_object* v_a_2934_; lean_object* v_snd_2935_; lean_object* v_a_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_2953_; 
v_a_2934_ = lean_ctor_get(v___x_2933_, 0);
lean_inc(v_a_2934_);
v_snd_2935_ = lean_ctor_get(v_a_2934_, 1);
lean_inc(v_snd_2935_);
v_a_2936_ = lean_ctor_get(v___x_2933_, 1);
v_isSharedCheck_2953_ = !lean_is_exclusive(v___x_2933_);
if (v_isSharedCheck_2953_ == 0)
{
lean_object* v_unused_2954_; 
v_unused_2954_ = lean_ctor_get(v___x_2933_, 0);
lean_dec(v_unused_2954_);
v___x_2938_ = v___x_2933_;
v_isShared_2939_ = v_isSharedCheck_2953_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_a_2936_);
lean_dec(v___x_2933_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_2953_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
lean_object* v_fst_2940_; lean_object* v_fst_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2951_; 
v_fst_2940_ = lean_ctor_get(v_a_2934_, 0);
lean_inc(v_fst_2940_);
lean_dec(v_a_2934_);
v_fst_2941_ = lean_ctor_get(v_snd_2935_, 0);
v_isSharedCheck_2951_ = !lean_is_exclusive(v_snd_2935_);
if (v_isSharedCheck_2951_ == 0)
{
lean_object* v_unused_2952_; 
v_unused_2952_ = lean_ctor_get(v_snd_2935_, 1);
lean_dec(v_unused_2952_);
v___x_2943_ = v_snd_2935_;
v_isShared_2944_ = v_isSharedCheck_2951_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_fst_2941_);
lean_dec(v_snd_2935_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2951_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v___x_2946_; 
if (v_isShared_2944_ == 0)
{
lean_ctor_set(v___x_2943_, 1, v_fst_2940_);
v___x_2946_ = v___x_2943_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v_fst_2941_);
lean_ctor_set(v_reuseFailAlloc_2950_, 1, v_fst_2940_);
v___x_2946_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
lean_object* v___x_2948_; 
if (v_isShared_2939_ == 0)
{
lean_ctor_set(v___x_2938_, 0, v___x_2946_);
v___x_2948_ = v___x_2938_;
goto v_reusejp_2947_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v___x_2946_);
lean_ctor_set(v_reuseFailAlloc_2949_, 1, v_a_2936_);
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
}
else
{
lean_object* v_a_2955_; lean_object* v_a_2956_; lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_2963_; 
v_a_2955_ = lean_ctor_get(v___x_2933_, 0);
v_a_2956_ = lean_ctor_get(v___x_2933_, 1);
v_isSharedCheck_2963_ = !lean_is_exclusive(v___x_2933_);
if (v_isSharedCheck_2963_ == 0)
{
v___x_2958_ = v___x_2933_;
v_isShared_2959_ = v_isSharedCheck_2963_;
goto v_resetjp_2957_;
}
else
{
lean_inc(v_a_2956_);
lean_inc(v_a_2955_);
lean_dec(v___x_2933_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_2963_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
lean_object* v___x_2961_; 
if (v_isShared_2959_ == 0)
{
v___x_2961_ = v___x_2958_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2962_; 
v_reuseFailAlloc_2962_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2962_, 0, v_a_2955_);
lean_ctor_set(v_reuseFailAlloc_2962_, 1, v_a_2956_);
v___x_2961_ = v_reuseFailAlloc_2962_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
return v___x_2961_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes_spec__0(lean_object* v_s_2964_, lean_object* v_inst_2965_, lean_object* v_a_2966_, lean_object* v___y_2967_){
_start:
{
lean_object* v___x_2968_; 
v___x_2968_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes_spec__0___redArg(v_s_2964_, v_a_2966_, v___y_2967_);
return v___x_2968_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishThematicBreak(lean_object* v_s_2969_, lean_object* v_a_2970_){
_start:
{
lean_object* v_zipper_2971_; lean_object* v_cursor_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_2996_; 
v_zipper_2971_ = lean_ctor_get(v_a_2970_, 0);
v_cursor_2972_ = lean_ctor_get(v_a_2970_, 1);
v_isSharedCheck_2996_ = !lean_is_exclusive(v_a_2970_);
if (v_isSharedCheck_2996_ == 0)
{
v___x_2974_ = v_a_2970_;
v_isShared_2975_ = v_isSharedCheck_2996_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_cursor_2972_);
lean_inc(v_zipper_2971_);
lean_dec(v_a_2970_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_2996_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
lean_object* v___x_2976_; lean_object* v_after_2977_; lean_object* v___x_2979_; uint8_t v_isShared_2980_; uint8_t v_isSharedCheck_2994_; 
lean_inc_ref(v_cursor_2972_);
v___x_2976_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent(v_s_2969_, v_cursor_2972_);
v_after_2977_ = lean_ctor_get(v___x_2976_, 0);
v_isSharedCheck_2994_ = !lean_is_exclusive(v___x_2976_);
if (v_isSharedCheck_2994_ == 0)
{
lean_object* v_unused_2995_; 
v_unused_2995_ = lean_ctor_get(v___x_2976_, 1);
lean_dec(v_unused_2995_);
v___x_2979_ = v___x_2976_;
v_isShared_2980_ = v_isSharedCheck_2994_;
goto v_resetjp_2978_;
}
else
{
lean_inc(v_after_2977_);
lean_dec(v___x_2976_);
v___x_2979_ = lean_box(0);
v_isShared_2980_ = v_isSharedCheck_2994_;
goto v_resetjp_2978_;
}
v_resetjp_2978_:
{
lean_object* v_pos_2981_; lean_object* v_stop_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2987_; 
v_pos_2981_ = lean_ctor_get(v_after_2977_, 0);
lean_inc(v_pos_2981_);
v_stop_2982_ = lean_ctor_get(v_after_2977_, 1);
lean_inc(v_stop_2982_);
lean_dec_ref(v_after_2977_);
v___x_2983_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_2981_, v_stop_2982_);
v___x_2984_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs(v_s_2969_, v___x_2983_);
v___x_2985_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_2975_ == 0)
{
lean_ctor_set(v___x_2974_, 0, v___x_2985_);
v___x_2987_ = v___x_2974_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v___x_2985_);
lean_ctor_set(v_reuseFailAlloc_2993_, 1, v_cursor_2972_);
v___x_2987_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2991_; 
v___x_2988_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v___x_2988_, 0, v___x_2984_);
v___x_2989_ = l_Lean_Markdown_BlockZipper_addBlock(v_s_2969_, v_zipper_2971_, v___x_2988_);
if (v_isShared_2980_ == 0)
{
lean_ctor_set_tag(v___x_2979_, 1);
lean_ctor_set(v___x_2979_, 1, v___x_2987_);
lean_ctor_set(v___x_2979_, 0, v___x_2989_);
v___x_2991_ = v___x_2979_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v___x_2989_);
lean_ctor_set(v_reuseFailAlloc_2992_, 1, v___x_2987_);
v___x_2991_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
return v___x_2991_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishThematicBreak___boxed(lean_object* v_s_2997_, lean_object* v_a_2998_){
_start:
{
lean_object* v_res_2999_; 
v_res_2999_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishThematicBreak(v_s_2997_, v_a_2998_);
lean_dec_ref(v_s_2997_);
return v_res_2999_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishBlankLine___lam__0(uint8_t v_openedListItemThisLine_3000_, lean_object* v_s_3001_, lean_object* v_____r_3002_, lean_object* v_z_3003_){
_start:
{
if (v_openedListItemThisLine_3000_ == 0)
{
lean_object* v___x_3004_; 
v___x_3004_ = l_Lean_Markdown_BlockZipper_recordBlankLine(v_s_3001_, v_z_3003_);
return v___x_3004_;
}
else
{
lean_object* v___x_3005_; 
v___x_3005_ = l_Lean_Markdown_BlockZipper_recordContentLine___redArg(v_z_3003_);
return v___x_3005_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishBlankLine___lam__0___boxed(lean_object* v_openedListItemThisLine_3006_, lean_object* v_s_3007_, lean_object* v_____r_3008_, lean_object* v_z_3009_){
_start:
{
uint8_t v_openedListItemThisLine_boxed_3010_; lean_object* v_res_3011_; 
v_openedListItemThisLine_boxed_3010_ = lean_unbox(v_openedListItemThisLine_3006_);
v_res_3011_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishBlankLine___lam__0(v_openedListItemThisLine_boxed_3010_, v_s_3007_, v_____r_3008_, v_z_3009_);
lean_dec_ref(v_s_3007_);
return v_res_3011_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishBlankLine(lean_object* v_s_3012_, uint8_t v_openedListItemThisLine_3013_, lean_object* v_a_3014_){
_start:
{
lean_object* v_zipper_3015_; lean_object* v_cursor_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3052_; 
v_zipper_3015_ = lean_ctor_get(v_a_3014_, 0);
v_cursor_3016_ = lean_ctor_get(v_a_3014_, 1);
v_isSharedCheck_3052_ = !lean_is_exclusive(v_a_3014_);
if (v_isSharedCheck_3052_ == 0)
{
v___x_3018_ = v_a_3014_;
v_isShared_3019_ = v_isSharedCheck_3052_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_cursor_3016_);
lean_inc(v_zipper_3015_);
lean_dec(v_a_3014_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3052_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
lean_object* v___x_3020_; lean_object* v___x_3022_; 
v___x_3020_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_3019_ == 0)
{
lean_ctor_set(v___x_3018_, 0, v___x_3020_);
v___x_3022_ = v___x_3018_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v___x_3020_);
lean_ctor_set(v_reuseFailAlloc_3051_, 1, v_cursor_3016_);
v___x_3022_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
lean_object* v_z_3023_; 
v_z_3023_ = l_Lean_Markdown_BlockZipper_closeLeaf(v_s_3012_, v_zipper_3015_);
if (v_openedListItemThisLine_3013_ == 0)
{
lean_object* v_spine_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; uint8_t v___x_3032_; 
v_spine_3028_ = lean_ctor_get(v_z_3023_, 1);
v___x_3029_ = lean_array_get_size(v_spine_3028_);
v___x_3030_ = lean_unsigned_to_nat(1u);
v___x_3031_ = lean_nat_sub(v___x_3029_, v___x_3030_);
v___x_3032_ = lean_nat_dec_lt(v___x_3031_, v___x_3029_);
if (v___x_3032_ == 0)
{
lean_dec(v___x_3031_);
goto v___jp_3024_;
}
else
{
lean_object* v___x_3033_; lean_object* v_container_3034_; 
v___x_3033_ = lean_array_fget(v_spine_3028_, v___x_3031_);
lean_dec(v___x_3031_);
v_container_3034_ = lean_ctor_get(v___x_3033_, 0);
if (lean_obj_tag(v_container_3034_) == 1)
{
lean_object* v_children_3035_; lean_object* v___x_3037_; uint8_t v_isShared_3038_; uint8_t v_isSharedCheck_3046_; 
v_children_3035_ = lean_ctor_get(v___x_3033_, 1);
v_isSharedCheck_3046_ = !lean_is_exclusive(v___x_3033_);
if (v_isSharedCheck_3046_ == 0)
{
lean_object* v_unused_3047_; 
v_unused_3047_ = lean_ctor_get(v___x_3033_, 0);
lean_dec(v_unused_3047_);
v___x_3037_ = v___x_3033_;
v_isShared_3038_ = v_isSharedCheck_3046_;
goto v_resetjp_3036_;
}
else
{
lean_inc(v_children_3035_);
lean_dec(v___x_3033_);
v___x_3037_ = lean_box(0);
v_isShared_3038_ = v_isSharedCheck_3046_;
goto v_resetjp_3036_;
}
v_resetjp_3036_:
{
uint8_t v___x_3039_; 
v___x_3039_ = l_Lean_Markdown_Children_isEmpty___redArg(v_children_3035_);
lean_dec_ref(v_children_3035_);
if (v___x_3039_ == 0)
{
lean_del_object(v___x_3037_);
goto v___jp_3024_;
}
else
{
lean_object* v_z_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3044_; 
v_z_3040_ = l_Lean_Markdown_BlockZipper_closeContainer(v_s_3012_, v_z_3023_);
v___x_3041_ = lean_box(0);
v___x_3042_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishBlankLine___lam__0(v_openedListItemThisLine_3013_, v_s_3012_, v___x_3041_, v_z_3040_);
if (v_isShared_3038_ == 0)
{
lean_ctor_set_tag(v___x_3037_, 1);
lean_ctor_set(v___x_3037_, 1, v___x_3022_);
lean_ctor_set(v___x_3037_, 0, v___x_3042_);
v___x_3044_ = v___x_3037_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v___x_3042_);
lean_ctor_set(v_reuseFailAlloc_3045_, 1, v___x_3022_);
v___x_3044_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
return v___x_3044_;
}
}
}
}
else
{
lean_dec(v___x_3033_);
goto v___jp_3024_;
}
}
}
else
{
lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; 
v___x_3048_ = lean_box(0);
v___x_3049_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishBlankLine___lam__0(v_openedListItemThisLine_3013_, v_s_3012_, v___x_3048_, v_z_3023_);
v___x_3050_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3050_, 0, v___x_3049_);
lean_ctor_set(v___x_3050_, 1, v___x_3022_);
return v___x_3050_;
}
v___jp_3024_:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; 
v___x_3025_ = lean_box(0);
v___x_3026_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishBlankLine___lam__0(v_openedListItemThisLine_3013_, v_s_3012_, v___x_3025_, v_z_3023_);
v___x_3027_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3026_);
lean_ctor_set(v___x_3027_, 1, v___x_3022_);
return v___x_3027_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishBlankLine___boxed(lean_object* v_s_3053_, lean_object* v_openedListItemThisLine_3054_, lean_object* v_a_3055_){
_start:
{
uint8_t v_openedListItemThisLine_boxed_3056_; lean_object* v_res_3057_; 
v_openedListItemThisLine_boxed_3056_ = lean_unbox(v_openedListItemThisLine_3054_);
v_res_3057_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishBlankLine(v_s_3053_, v_openedListItemThisLine_boxed_3056_, v_a_3055_);
lean_dec_ref(v_s_3053_);
return v_res_3057_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryAtxHeading(lean_object* v_s_3058_, lean_object* v_line_3059_, lean_object* v_a_3060_){
_start:
{
lean_object* v___x_3061_; 
v___x_3061_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f(v_s_3058_, v_line_3059_);
if (lean_obj_tag(v___x_3061_) == 1)
{
lean_object* v_val_3062_; lean_object* v_level_3063_; lean_object* v_hashes_3064_; lean_object* v_content_3065_; lean_object* v_closeHashes_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3087_; 
v_val_3062_ = lean_ctor_get(v___x_3061_, 0);
lean_inc(v_val_3062_);
lean_dec_ref_known(v___x_3061_, 1);
v_level_3063_ = lean_ctor_get(v_val_3062_, 0);
v_hashes_3064_ = lean_ctor_get(v_val_3062_, 1);
v_content_3065_ = lean_ctor_get(v_val_3062_, 2);
v_closeHashes_3066_ = lean_ctor_get(v_val_3062_, 3);
v_isSharedCheck_3087_ = !lean_is_exclusive(v_val_3062_);
if (v_isSharedCheck_3087_ == 0)
{
v___x_3068_ = v_val_3062_;
v_isShared_3069_ = v_isSharedCheck_3087_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_closeHashes_3066_);
lean_inc(v_content_3065_);
lean_inc(v_hashes_3064_);
lean_inc(v_level_3063_);
lean_dec(v_val_3062_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3087_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v_zipper_3070_; lean_object* v_cursor_3071_; lean_object* v___x_3073_; uint8_t v_isShared_3074_; uint8_t v_isSharedCheck_3086_; 
v_zipper_3070_ = lean_ctor_get(v_a_3060_, 0);
v_cursor_3071_ = lean_ctor_get(v_a_3060_, 1);
v_isSharedCheck_3086_ = !lean_is_exclusive(v_a_3060_);
if (v_isSharedCheck_3086_ == 0)
{
v___x_3073_ = v_a_3060_;
v_isShared_3074_ = v_isSharedCheck_3086_;
goto v_resetjp_3072_;
}
else
{
lean_inc(v_cursor_3071_);
lean_inc(v_zipper_3070_);
lean_dec(v_a_3060_);
v___x_3073_ = lean_box(0);
v_isShared_3074_ = v_isSharedCheck_3086_;
goto v_resetjp_3072_;
}
v_resetjp_3072_:
{
lean_object* v___x_3075_; lean_object* v_content_3076_; lean_object* v___x_3077_; lean_object* v___x_3079_; 
v___x_3075_ = l_Lean_Markdown_Lines_singleton___redArg(v_content_3065_);
v_content_3076_ = l_Lean_Markdown_InlineSource_ofLines(v_s_3058_, v___x_3075_);
v___x_3077_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_3074_ == 0)
{
lean_ctor_set(v___x_3073_, 0, v___x_3077_);
v___x_3079_ = v___x_3073_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v___x_3077_);
lean_ctor_set(v_reuseFailAlloc_3085_, 1, v_cursor_3071_);
v___x_3079_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
lean_object* v___x_3081_; 
if (v_isShared_3069_ == 0)
{
lean_ctor_set_tag(v___x_3068_, 1);
lean_ctor_set(v___x_3068_, 2, v_content_3076_);
v___x_3081_ = v___x_3068_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3084_; 
v_reuseFailAlloc_3084_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3084_, 0, v_level_3063_);
lean_ctor_set(v_reuseFailAlloc_3084_, 1, v_hashes_3064_);
lean_ctor_set(v_reuseFailAlloc_3084_, 2, v_content_3076_);
lean_ctor_set(v_reuseFailAlloc_3084_, 3, v_closeHashes_3066_);
v___x_3081_ = v_reuseFailAlloc_3084_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
lean_object* v___x_3082_; lean_object* v___x_3083_; 
v___x_3082_ = l_Lean_Markdown_BlockZipper_addBlock(v_s_3058_, v_zipper_3070_, v___x_3081_);
v___x_3083_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3083_, 0, v___x_3082_);
lean_ctor_set(v___x_3083_, 1, v___x_3079_);
return v___x_3083_;
}
}
}
}
}
else
{
lean_object* v___x_3088_; lean_object* v___x_3089_; 
lean_dec(v___x_3061_);
v___x_3088_ = lean_box(0);
v___x_3089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3088_);
lean_ctor_set(v___x_3089_, 1, v_a_3060_);
return v___x_3089_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryAtxHeading___boxed(lean_object* v_s_3090_, lean_object* v_line_3091_, lean_object* v_a_3092_){
_start:
{
lean_object* v_res_3093_; 
v_res_3093_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryAtxHeading(v_s_3090_, v_line_3091_, v_a_3092_);
lean_dec_ref(v_s_3090_);
return v_res_3093_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryFencedCodeOpener(lean_object* v_s_3096_, lean_object* v_line_3097_, lean_object* v_a_3098_){
_start:
{
lean_object* v___x_3099_; 
v___x_3099_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f(v_s_3096_, v_line_3097_);
if (lean_obj_tag(v___x_3099_) == 1)
{
lean_object* v_val_3100_; lean_object* v_fst_3101_; lean_object* v_snd_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3122_; 
v_val_3100_ = lean_ctor_get(v___x_3099_, 0);
lean_inc(v_val_3100_);
lean_dec_ref_known(v___x_3099_, 1);
v_fst_3101_ = lean_ctor_get(v_val_3100_, 0);
v_snd_3102_ = lean_ctor_get(v_val_3100_, 1);
v_isSharedCheck_3122_ = !lean_is_exclusive(v_val_3100_);
if (v_isSharedCheck_3122_ == 0)
{
v___x_3104_ = v_val_3100_;
v_isShared_3105_ = v_isSharedCheck_3122_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_snd_3102_);
lean_inc(v_fst_3101_);
lean_dec(v_val_3100_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3122_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v_zipper_3106_; lean_object* v_cursor_3107_; lean_object* v___x_3109_; uint8_t v_isShared_3110_; uint8_t v_isSharedCheck_3121_; 
v_zipper_3106_ = lean_ctor_get(v_a_3098_, 0);
v_cursor_3107_ = lean_ctor_get(v_a_3098_, 1);
v_isSharedCheck_3121_ = !lean_is_exclusive(v_a_3098_);
if (v_isSharedCheck_3121_ == 0)
{
v___x_3109_ = v_a_3098_;
v_isShared_3110_ = v_isSharedCheck_3121_;
goto v_resetjp_3108_;
}
else
{
lean_inc(v_cursor_3107_);
lean_inc(v_zipper_3106_);
lean_dec(v_a_3098_);
v___x_3109_ = lean_box(0);
v_isShared_3110_ = v_isSharedCheck_3121_;
goto v_resetjp_3108_;
}
v_resetjp_3108_:
{
lean_object* v___x_3111_; lean_object* v___x_3113_; 
v___x_3111_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_3110_ == 0)
{
lean_ctor_set(v___x_3109_, 0, v___x_3111_);
v___x_3113_ = v___x_3109_;
goto v_reusejp_3112_;
}
else
{
lean_object* v_reuseFailAlloc_3120_; 
v_reuseFailAlloc_3120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3120_, 0, v___x_3111_);
lean_ctor_set(v_reuseFailAlloc_3120_, 1, v_cursor_3107_);
v___x_3113_ = v_reuseFailAlloc_3120_;
goto v_reusejp_3112_;
}
v_reusejp_3112_:
{
lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3118_; 
v___x_3114_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryFencedCodeOpener___closed__0));
v___x_3115_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3115_, 0, v_fst_3101_);
lean_ctor_set(v___x_3115_, 1, v_snd_3102_);
lean_ctor_set(v___x_3115_, 2, v___x_3114_);
v___x_3116_ = l_Lean_Markdown_BlockZipper_openLeaf(v_s_3096_, v_zipper_3106_, v___x_3115_);
if (v_isShared_3105_ == 0)
{
lean_ctor_set_tag(v___x_3104_, 1);
lean_ctor_set(v___x_3104_, 1, v___x_3113_);
lean_ctor_set(v___x_3104_, 0, v___x_3116_);
v___x_3118_ = v___x_3104_;
goto v_reusejp_3117_;
}
else
{
lean_object* v_reuseFailAlloc_3119_; 
v_reuseFailAlloc_3119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3119_, 0, v___x_3116_);
lean_ctor_set(v_reuseFailAlloc_3119_, 1, v___x_3113_);
v___x_3118_ = v_reuseFailAlloc_3119_;
goto v_reusejp_3117_;
}
v_reusejp_3117_:
{
return v___x_3118_;
}
}
}
}
}
else
{
lean_object* v___x_3123_; lean_object* v___x_3124_; 
lean_dec(v___x_3099_);
v___x_3123_ = lean_box(0);
v___x_3124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3124_, 0, v___x_3123_);
lean_ctor_set(v___x_3124_, 1, v_a_3098_);
return v___x_3124_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryFencedCodeOpener___boxed(lean_object* v_s_3125_, lean_object* v_line_3126_, lean_object* v_a_3127_){
_start:
{
lean_object* v_res_3128_; 
v_res_3128_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryFencedCodeOpener(v_s_3125_, v_line_3126_, v_a_3127_);
lean_dec_ref(v_s_3125_);
return v_res_3128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryHtmlBlockOpener(lean_object* v_s_3129_, lean_object* v_line_3130_, lean_object* v_a_3131_){
_start:
{
lean_object* v___x_3132_; 
v___x_3132_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f(v_s_3129_, v_line_3130_);
if (lean_obj_tag(v___x_3132_) == 1)
{
lean_object* v_val_3133_; lean_object* v___x_3135_; uint8_t v_isShared_3136_; uint8_t v_isSharedCheck_3186_; 
v_val_3133_ = lean_ctor_get(v___x_3132_, 0);
v_isSharedCheck_3186_ = !lean_is_exclusive(v___x_3132_);
if (v_isSharedCheck_3186_ == 0)
{
v___x_3135_ = v___x_3132_;
v_isShared_3136_ = v_isSharedCheck_3186_;
goto v_resetjp_3134_;
}
else
{
lean_inc(v_val_3133_);
lean_dec(v___x_3132_);
v___x_3135_ = lean_box(0);
v_isShared_3136_ = v_isSharedCheck_3186_;
goto v_resetjp_3134_;
}
v_resetjp_3134_:
{
lean_object* v_zipper_3137_; lean_object* v_cursor_3138_; lean_object* v___y_3140_; lean_object* v_openLeaf_x3f_3180_; 
v_zipper_3137_ = lean_ctor_get(v_a_3131_, 0);
v_cursor_3138_ = lean_ctor_get(v_a_3131_, 1);
v_openLeaf_x3f_3180_ = lean_ctor_get(v_zipper_3137_, 2);
if (lean_obj_tag(v_openLeaf_x3f_3180_) == 1)
{
lean_object* v_val_3181_; 
v_val_3181_ = lean_ctor_get(v_openLeaf_x3f_3180_, 0);
if (lean_obj_tag(v_val_3181_) == 0)
{
uint8_t v___x_3182_; uint8_t v___x_3183_; 
v___x_3182_ = lean_unbox(v_val_3133_);
v___x_3183_ = l_Lean_Markdown_HtmlBlockKind_interruptsParagraph(v___x_3182_);
if (v___x_3183_ == 0)
{
lean_object* v___x_3184_; lean_object* v___x_3185_; 
lean_del_object(v___x_3135_);
lean_dec(v_val_3133_);
v___x_3184_ = lean_box(0);
v___x_3185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3185_, 0, v___x_3184_);
lean_ctor_set(v___x_3185_, 1, v_a_3131_);
return v___x_3185_;
}
else
{
lean_inc_ref(v_cursor_3138_);
v___y_3140_ = v_a_3131_;
goto v___jp_3139_;
}
}
else
{
lean_inc_ref(v_cursor_3138_);
v___y_3140_ = v_a_3131_;
goto v___jp_3139_;
}
}
else
{
lean_inc_ref(v_cursor_3138_);
v___y_3140_ = v_a_3131_;
goto v___jp_3139_;
}
v___jp_3139_:
{
lean_object* v___x_3141_; lean_object* v_source_3142_; uint8_t v___x_3143_; uint8_t v___x_3144_; 
v___x_3141_ = l_Lean_Markdown_Cursor_verbatimLine(v_s_3129_, v_cursor_3138_);
v_source_3142_ = lean_ctor_get(v___x_3141_, 0);
v___x_3143_ = lean_unbox(v_val_3133_);
v___x_3144_ = l_Lean_Markdown_HtmlBlockKind_endConditionMet(v_s_3129_, v___x_3143_, v_source_3142_);
if (v___x_3144_ == 0)
{
lean_object* v_zipper_3145_; lean_object* v_cursor_3146_; lean_object* v___x_3148_; uint8_t v_isShared_3149_; uint8_t v_isSharedCheck_3161_; 
lean_del_object(v___x_3135_);
v_zipper_3145_ = lean_ctor_get(v___y_3140_, 0);
v_cursor_3146_ = lean_ctor_get(v___y_3140_, 1);
v_isSharedCheck_3161_ = !lean_is_exclusive(v___y_3140_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3148_ = v___y_3140_;
v_isShared_3149_ = v_isSharedCheck_3161_;
goto v_resetjp_3147_;
}
else
{
lean_inc(v_cursor_3146_);
lean_inc(v_zipper_3145_);
lean_dec(v___y_3140_);
v___x_3148_ = lean_box(0);
v_isShared_3149_ = v_isSharedCheck_3161_;
goto v_resetjp_3147_;
}
v_resetjp_3147_:
{
lean_object* v___x_3150_; lean_object* v___x_3152_; 
v___x_3150_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_3149_ == 0)
{
lean_ctor_set(v___x_3148_, 0, v___x_3150_);
v___x_3152_ = v___x_3148_;
goto v_reusejp_3151_;
}
else
{
lean_object* v_reuseFailAlloc_3160_; 
v_reuseFailAlloc_3160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3160_, 0, v___x_3150_);
lean_ctor_set(v_reuseFailAlloc_3160_, 1, v_cursor_3146_);
v___x_3152_ = v_reuseFailAlloc_3160_;
goto v_reusejp_3151_;
}
v_reusejp_3151_:
{
lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; uint8_t v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; 
v___x_3153_ = lean_unsigned_to_nat(1u);
v___x_3154_ = lean_mk_empty_array_with_capacity(v___x_3153_);
v___x_3155_ = lean_array_push(v___x_3154_, v___x_3141_);
v___x_3156_ = lean_alloc_ctor(3, 1, 1);
lean_ctor_set(v___x_3156_, 0, v___x_3155_);
v___x_3157_ = lean_unbox(v_val_3133_);
lean_dec(v_val_3133_);
lean_ctor_set_uint8(v___x_3156_, sizeof(void*)*1, v___x_3157_);
v___x_3158_ = l_Lean_Markdown_BlockZipper_openLeaf(v_s_3129_, v_zipper_3145_, v___x_3156_);
v___x_3159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3159_, 0, v___x_3158_);
lean_ctor_set(v___x_3159_, 1, v___x_3152_);
return v___x_3159_;
}
}
}
else
{
lean_object* v_zipper_3162_; lean_object* v_cursor_3163_; lean_object* v___x_3165_; uint8_t v_isShared_3166_; uint8_t v_isSharedCheck_3179_; 
lean_dec(v_val_3133_);
v_zipper_3162_ = lean_ctor_get(v___y_3140_, 0);
v_cursor_3163_ = lean_ctor_get(v___y_3140_, 1);
v_isSharedCheck_3179_ = !lean_is_exclusive(v___y_3140_);
if (v_isSharedCheck_3179_ == 0)
{
v___x_3165_ = v___y_3140_;
v_isShared_3166_ = v_isSharedCheck_3179_;
goto v_resetjp_3164_;
}
else
{
lean_inc(v_cursor_3163_);
lean_inc(v_zipper_3162_);
lean_dec(v___y_3140_);
v___x_3165_ = lean_box(0);
v_isShared_3166_ = v_isSharedCheck_3179_;
goto v_resetjp_3164_;
}
v_resetjp_3164_:
{
lean_object* v___x_3167_; lean_object* v___x_3169_; 
v___x_3167_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_3166_ == 0)
{
lean_ctor_set(v___x_3165_, 0, v___x_3167_);
v___x_3169_ = v___x_3165_;
goto v_reusejp_3168_;
}
else
{
lean_object* v_reuseFailAlloc_3178_; 
v_reuseFailAlloc_3178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3178_, 0, v___x_3167_);
lean_ctor_set(v_reuseFailAlloc_3178_, 1, v_cursor_3163_);
v___x_3169_ = v_reuseFailAlloc_3178_;
goto v_reusejp_3168_;
}
v_reusejp_3168_:
{
lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3174_; 
v___x_3170_ = lean_unsigned_to_nat(1u);
v___x_3171_ = lean_mk_empty_array_with_capacity(v___x_3170_);
v___x_3172_ = lean_array_push(v___x_3171_, v___x_3141_);
if (v_isShared_3136_ == 0)
{
lean_ctor_set_tag(v___x_3135_, 5);
lean_ctor_set(v___x_3135_, 0, v___x_3172_);
v___x_3174_ = v___x_3135_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v___x_3172_);
v___x_3174_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
lean_object* v___x_3175_; lean_object* v___x_3176_; 
v___x_3175_ = l_Lean_Markdown_BlockZipper_addBlock(v_s_3129_, v_zipper_3162_, v___x_3174_);
v___x_3176_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3176_, 0, v___x_3175_);
lean_ctor_set(v___x_3176_, 1, v___x_3169_);
return v___x_3176_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3187_; lean_object* v___x_3188_; 
lean_dec(v___x_3132_);
v___x_3187_ = lean_box(0);
v___x_3188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3188_, 0, v___x_3187_);
lean_ctor_set(v___x_3188_, 1, v_a_3131_);
return v___x_3188_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryHtmlBlockOpener___boxed(lean_object* v_s_3189_, lean_object* v_line_3190_, lean_object* v_a_3191_){
_start:
{
lean_object* v_res_3192_; 
v_res_3192_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryHtmlBlockOpener(v_s_3189_, v_line_3190_, v_a_3191_);
lean_dec_ref(v_s_3189_);
return v_res_3192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryIndentedCodeOpener(lean_object* v_s_3193_, lean_object* v_line_3194_, lean_object* v_a_3195_){
_start:
{
lean_object* v_indent_3199_; lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3227_; 
v_indent_3199_ = lean_ctor_get(v_line_3194_, 1);
v_isSharedCheck_3227_ = !lean_is_exclusive(v_line_3194_);
if (v_isSharedCheck_3227_ == 0)
{
lean_object* v_unused_3228_; 
v_unused_3228_ = lean_ctor_get(v_line_3194_, 0);
lean_dec(v_unused_3228_);
v___x_3201_ = v_line_3194_;
v_isShared_3202_ = v_isSharedCheck_3227_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_indent_3199_);
lean_dec(v_line_3194_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3227_;
goto v_resetjp_3200_;
}
v___jp_3196_:
{
lean_object* v___x_3197_; lean_object* v___x_3198_; 
v___x_3197_ = lean_box(0);
v___x_3198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3198_, 0, v___x_3197_);
lean_ctor_set(v___x_3198_, 1, v_a_3195_);
return v___x_3198_;
}
v_resetjp_3200_:
{
lean_object* v___x_3203_; uint8_t v___x_3204_; 
v___x_3203_ = lean_unsigned_to_nat(4u);
v___x_3204_ = lean_nat_dec_le(v___x_3203_, v_indent_3199_);
lean_dec(v_indent_3199_);
if (v___x_3204_ == 0)
{
lean_del_object(v___x_3201_);
goto v___jp_3196_;
}
else
{
lean_object* v_zipper_3205_; lean_object* v_openLeaf_x3f_3206_; 
v_zipper_3205_ = lean_ctor_get(v_a_3195_, 0);
v_openLeaf_x3f_3206_ = lean_ctor_get(v_zipper_3205_, 2);
if (lean_obj_tag(v_openLeaf_x3f_3206_) == 0)
{
lean_object* v_cursor_3207_; lean_object* v___x_3209_; uint8_t v_isShared_3210_; uint8_t v_isSharedCheck_3225_; 
lean_inc_ref(v_zipper_3205_);
v_cursor_3207_ = lean_ctor_get(v_a_3195_, 1);
v_isSharedCheck_3225_ = !lean_is_exclusive(v_a_3195_);
if (v_isSharedCheck_3225_ == 0)
{
lean_object* v_unused_3226_; 
v_unused_3226_ = lean_ctor_get(v_a_3195_, 0);
lean_dec(v_unused_3226_);
v___x_3209_ = v_a_3195_;
v_isShared_3210_ = v_isSharedCheck_3225_;
goto v_resetjp_3208_;
}
else
{
lean_inc(v_cursor_3207_);
lean_dec(v_a_3195_);
v___x_3209_ = lean_box(0);
v_isShared_3210_ = v_isSharedCheck_3225_;
goto v_resetjp_3208_;
}
v_resetjp_3208_:
{
lean_object* v___x_3211_; lean_object* v___x_3213_; 
v___x_3211_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
lean_inc_ref(v_cursor_3207_);
if (v_isShared_3210_ == 0)
{
lean_ctor_set(v___x_3209_, 0, v___x_3211_);
v___x_3213_ = v___x_3209_;
goto v_reusejp_3212_;
}
else
{
lean_object* v_reuseFailAlloc_3224_; 
v_reuseFailAlloc_3224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3224_, 0, v___x_3211_);
lean_ctor_set(v_reuseFailAlloc_3224_, 1, v_cursor_3207_);
v___x_3213_ = v_reuseFailAlloc_3224_;
goto v_reusejp_3212_;
}
v_reusejp_3212_:
{
lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3220_; 
v___x_3214_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_indentedCodeLine(v_s_3193_, v_cursor_3207_);
v___x_3215_ = lean_unsigned_to_nat(1u);
v___x_3216_ = lean_mk_empty_array_with_capacity(v___x_3215_);
v___x_3217_ = lean_array_push(v___x_3216_, v___x_3214_);
v___x_3218_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryFencedCodeOpener___closed__0));
if (v_isShared_3202_ == 0)
{
lean_ctor_set_tag(v___x_3201_, 2);
lean_ctor_set(v___x_3201_, 1, v___x_3218_);
lean_ctor_set(v___x_3201_, 0, v___x_3217_);
v___x_3220_ = v___x_3201_;
goto v_reusejp_3219_;
}
else
{
lean_object* v_reuseFailAlloc_3223_; 
v_reuseFailAlloc_3223_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3223_, 0, v___x_3217_);
lean_ctor_set(v_reuseFailAlloc_3223_, 1, v___x_3218_);
v___x_3220_ = v_reuseFailAlloc_3223_;
goto v_reusejp_3219_;
}
v_reusejp_3219_:
{
lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3221_ = l_Lean_Markdown_BlockZipper_openLeaf(v_s_3193_, v_zipper_3205_, v___x_3220_);
v___x_3222_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3221_);
lean_ctor_set(v___x_3222_, 1, v___x_3213_);
return v___x_3222_;
}
}
}
}
else
{
lean_del_object(v___x_3201_);
goto v___jp_3196_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryIndentedCodeOpener___boxed(lean_object* v_s_3229_, lean_object* v_line_3230_, lean_object* v_a_3231_){
_start:
{
lean_object* v_res_3232_; 
v_res_3232_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryIndentedCodeOpener(v_s_3229_, v_line_3230_, v_a_3231_);
lean_dec_ref(v_s_3229_);
return v_res_3232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_emitParagraph(lean_object* v_s_3233_, lean_object* v_a_3234_){
_start:
{
lean_object* v_cursor_3235_; lean_object* v_zipper_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3260_; 
v_cursor_3235_ = lean_ctor_get(v_a_3234_, 1);
v_zipper_3236_ = lean_ctor_get(v_a_3234_, 0);
v_isSharedCheck_3260_ = !lean_is_exclusive(v_a_3234_);
if (v_isSharedCheck_3260_ == 0)
{
v___x_3238_ = v_a_3234_;
v_isShared_3239_ = v_isSharedCheck_3260_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_cursor_3235_);
lean_inc(v_zipper_3236_);
lean_dec(v_a_3234_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3260_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v_pos_3240_; lean_object* v_stop_3241_; lean_object* v_openLeaf_x3f_3242_; lean_object* v___x_3243_; lean_object* v_zipper_3245_; lean_object* v_cursor_3246_; 
v_pos_3240_ = lean_ctor_get(v_cursor_3235_, 0);
v_stop_3241_ = lean_ctor_get(v_cursor_3235_, 1);
v_openLeaf_x3f_3242_ = lean_ctor_get(v_zipper_3236_, 2);
lean_inc(v_stop_3241_);
lean_inc(v_pos_3240_);
v___x_3243_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_3240_, v_stop_3241_);
if (lean_obj_tag(v_openLeaf_x3f_3242_) == 1)
{
lean_object* v_val_3255_; 
v_val_3255_ = lean_ctor_get(v_openLeaf_x3f_3242_, 0);
if (lean_obj_tag(v_val_3255_) == 0)
{
lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; 
lean_del_object(v___x_3238_);
v___x_3256_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
v___x_3257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3257_, 0, v___x_3256_);
lean_ctor_set(v___x_3257_, 1, v_cursor_3235_);
v___x_3258_ = l_Lean_Markdown_BlockZipper_extendParagraph___redArg(v_zipper_3236_, v___x_3243_);
v___x_3259_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3259_, 0, v___x_3258_);
lean_ctor_set(v___x_3259_, 1, v___x_3257_);
return v___x_3259_;
}
else
{
v_zipper_3245_ = v_zipper_3236_;
v_cursor_3246_ = v_cursor_3235_;
goto v___jp_3244_;
}
}
else
{
v_zipper_3245_ = v_zipper_3236_;
v_cursor_3246_ = v_cursor_3235_;
goto v___jp_3244_;
}
v___jp_3244_:
{
lean_object* v___x_3247_; lean_object* v___x_3249_; 
v___x_3247_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_3239_ == 0)
{
lean_ctor_set(v___x_3238_, 1, v_cursor_3246_);
lean_ctor_set(v___x_3238_, 0, v___x_3247_);
v___x_3249_ = v___x_3238_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3254_; 
v_reuseFailAlloc_3254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3254_, 0, v___x_3247_);
lean_ctor_set(v_reuseFailAlloc_3254_, 1, v_cursor_3246_);
v___x_3249_ = v_reuseFailAlloc_3254_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; 
v___x_3250_ = l_Lean_Markdown_Lines_singleton___redArg(v___x_3243_);
v___x_3251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3251_, 0, v___x_3250_);
v___x_3252_ = l_Lean_Markdown_BlockZipper_openLeaf(v_s_3233_, v_zipper_3245_, v___x_3251_);
v___x_3253_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3252_);
lean_ctor_set(v___x_3253_, 1, v___x_3249_);
return v___x_3253_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_emitParagraph___boxed(lean_object* v_s_3261_, lean_object* v_a_3262_){
_start:
{
lean_object* v_res_3263_; 
v_res_3263_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_emitParagraph(v_s_3261_, v_a_3262_);
lean_dec_ref(v_s_3261_);
return v_res_3263_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openLeafBlock(lean_object* v_s_3264_, uint8_t v_openedListItemThisLine_3265_, lean_object* v_line_3266_, lean_object* v_a_3267_){
_start:
{
lean_object* v___y_3269_; lean_object* v_zipper_3270_; lean_object* v_cursor_3271_; lean_object* v_zipper_3279_; lean_object* v_cursor_3280_; lean_object* v___y_3291_; lean_object* v_after_3347_; lean_object* v_indent_3348_; lean_object* v_pos_3349_; lean_object* v_stop_3350_; lean_object* v___y_3352_; lean_object* v___y_3353_; lean_object* v___x_3392_; lean_object* v___x_3393_; uint8_t v___x_3394_; 
v_after_3347_ = lean_ctor_get(v_line_3266_, 0);
v_indent_3348_ = lean_ctor_get(v_line_3266_, 1);
v_pos_3349_ = lean_ctor_get(v_after_3347_, 0);
v_stop_3350_ = lean_ctor_get(v_after_3347_, 1);
v___x_3392_ = lean_unsigned_to_nat(1u);
v___x_3393_ = lean_nat_add(v_pos_3349_, v___x_3392_);
v___x_3394_ = lean_nat_dec_le(v___x_3393_, v_stop_3350_);
lean_dec(v___x_3393_);
if (v___x_3394_ == 0)
{
lean_dec_ref(v_line_3266_);
goto v___jp_3357_;
}
else
{
lean_object* v___x_3395_; 
v___x_3395_ = l_String_Slice_Pos_get_x3f(v_s_3264_, v_pos_3349_);
if (lean_obj_tag(v___x_3395_) == 0)
{
lean_dec_ref(v_line_3266_);
goto v___jp_3357_;
}
else
{
lean_object* v_val_3396_; lean_object* v___x_3397_; uint8_t v___x_3398_; 
v_val_3396_ = lean_ctor_get(v___x_3395_, 0);
lean_inc(v_val_3396_);
lean_dec_ref_known(v___x_3395_, 1);
v___x_3397_ = lean_unsigned_to_nat(4u);
v___x_3398_ = lean_nat_dec_le(v___x_3397_, v_indent_3348_);
if (v___x_3398_ == 0)
{
uint32_t v___x_3399_; uint32_t v___x_3400_; uint8_t v___x_3401_; 
v___x_3399_ = 35;
v___x_3400_ = lean_unbox_uint32(v_val_3396_);
v___x_3401_ = lean_uint32_dec_eq(v___x_3400_, v___x_3399_);
if (v___x_3401_ == 0)
{
uint32_t v___x_3402_; uint32_t v___x_3403_; uint8_t v___x_3404_; 
v___x_3402_ = 96;
v___x_3403_ = lean_unbox_uint32(v_val_3396_);
v___x_3404_ = lean_uint32_dec_eq(v___x_3403_, v___x_3402_);
if (v___x_3404_ == 0)
{
uint32_t v___x_3405_; uint32_t v___x_3406_; uint8_t v___x_3407_; 
v___x_3405_ = 126;
v___x_3406_ = lean_unbox_uint32(v_val_3396_);
v___x_3407_ = lean_uint32_dec_eq(v___x_3406_, v___x_3405_);
if (v___x_3407_ == 0)
{
uint32_t v___x_3408_; uint32_t v___x_3409_; uint8_t v___x_3410_; 
v___x_3408_ = 60;
v___x_3409_ = lean_unbox_uint32(v_val_3396_);
v___x_3410_ = lean_uint32_dec_eq(v___x_3409_, v___x_3408_);
if (v___x_3410_ == 0)
{
uint32_t v___x_3411_; uint32_t v___x_3412_; uint8_t v___x_3413_; 
v___x_3411_ = 42;
v___x_3412_ = lean_unbox_uint32(v_val_3396_);
v___x_3413_ = lean_uint32_dec_eq(v___x_3412_, v___x_3411_);
if (v___x_3413_ == 0)
{
uint32_t v___x_3414_; uint32_t v___x_3415_; uint8_t v___x_3416_; 
v___x_3414_ = 45;
v___x_3415_ = lean_unbox_uint32(v_val_3396_);
v___x_3416_ = lean_uint32_dec_eq(v___x_3415_, v___x_3414_);
if (v___x_3416_ == 0)
{
uint32_t v___x_3417_; uint32_t v___x_3418_; uint8_t v___x_3419_; 
v___x_3417_ = 95;
v___x_3418_ = lean_unbox_uint32(v_val_3396_);
lean_dec(v_val_3396_);
v___x_3419_ = lean_uint32_dec_eq(v___x_3418_, v___x_3417_);
if (v___x_3419_ == 0)
{
lean_dec_ref(v_line_3266_);
v___y_3291_ = v_a_3267_;
goto v___jp_3290_;
}
else
{
goto v___jp_3319_;
}
}
else
{
lean_dec(v_val_3396_);
goto v___jp_3319_;
}
}
else
{
lean_dec(v_val_3396_);
goto v___jp_3319_;
}
}
else
{
lean_object* v___x_3420_; 
lean_dec(v_val_3396_);
v___x_3420_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f(v_s_3264_, v_line_3266_);
if (lean_obj_tag(v___x_3420_) == 1)
{
lean_object* v_val_3421_; lean_object* v___x_3423_; uint8_t v_isShared_3424_; uint8_t v_isSharedCheck_3470_; 
v_val_3421_ = lean_ctor_get(v___x_3420_, 0);
v_isSharedCheck_3470_ = !lean_is_exclusive(v___x_3420_);
if (v_isSharedCheck_3470_ == 0)
{
v___x_3423_ = v___x_3420_;
v_isShared_3424_ = v_isSharedCheck_3470_;
goto v_resetjp_3422_;
}
else
{
lean_inc(v_val_3421_);
lean_dec(v___x_3420_);
v___x_3423_ = lean_box(0);
v_isShared_3424_ = v_isSharedCheck_3470_;
goto v_resetjp_3422_;
}
v_resetjp_3422_:
{
lean_object* v_zipper_3425_; lean_object* v_cursor_3426_; lean_object* v___y_3428_; lean_object* v_openLeaf_x3f_3466_; 
v_zipper_3425_ = lean_ctor_get(v_a_3267_, 0);
v_cursor_3426_ = lean_ctor_get(v_a_3267_, 1);
lean_inc_ref(v_cursor_3426_);
v_openLeaf_x3f_3466_ = lean_ctor_get(v_zipper_3425_, 2);
if (lean_obj_tag(v_openLeaf_x3f_3466_) == 1)
{
lean_object* v_val_3467_; 
v_val_3467_ = lean_ctor_get(v_openLeaf_x3f_3466_, 0);
if (lean_obj_tag(v_val_3467_) == 0)
{
uint8_t v___x_3468_; uint8_t v___x_3469_; 
v___x_3468_ = lean_unbox(v_val_3421_);
v___x_3469_ = l_Lean_Markdown_HtmlBlockKind_interruptsParagraph(v___x_3468_);
if (v___x_3469_ == 0)
{
lean_inc_ref(v_zipper_3425_);
lean_del_object(v___x_3423_);
lean_dec(v_val_3421_);
lean_dec_ref(v_a_3267_);
v_zipper_3279_ = v_zipper_3425_;
v_cursor_3280_ = v_cursor_3426_;
goto v___jp_3278_;
}
else
{
v___y_3428_ = v_a_3267_;
goto v___jp_3427_;
}
}
else
{
v___y_3428_ = v_a_3267_;
goto v___jp_3427_;
}
}
else
{
v___y_3428_ = v_a_3267_;
goto v___jp_3427_;
}
v___jp_3427_:
{
lean_object* v___x_3429_; lean_object* v_source_3430_; uint8_t v___x_3431_; uint8_t v___x_3432_; 
v___x_3429_ = l_Lean_Markdown_Cursor_verbatimLine(v_s_3264_, v_cursor_3426_);
v_source_3430_ = lean_ctor_get(v___x_3429_, 0);
v___x_3431_ = lean_unbox(v_val_3421_);
v___x_3432_ = l_Lean_Markdown_HtmlBlockKind_endConditionMet(v_s_3264_, v___x_3431_, v_source_3430_);
if (v___x_3432_ == 0)
{
lean_object* v_zipper_3433_; lean_object* v_cursor_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3448_; 
lean_del_object(v___x_3423_);
v_zipper_3433_ = lean_ctor_get(v___y_3428_, 0);
v_cursor_3434_ = lean_ctor_get(v___y_3428_, 1);
v_isSharedCheck_3448_ = !lean_is_exclusive(v___y_3428_);
if (v_isSharedCheck_3448_ == 0)
{
v___x_3436_ = v___y_3428_;
v_isShared_3437_ = v_isSharedCheck_3448_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_cursor_3434_);
lean_inc(v_zipper_3433_);
lean_dec(v___y_3428_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3448_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
lean_object* v___x_3438_; lean_object* v___x_3440_; 
v___x_3438_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_3437_ == 0)
{
lean_ctor_set(v___x_3436_, 0, v___x_3438_);
v___x_3440_ = v___x_3436_;
goto v_reusejp_3439_;
}
else
{
lean_object* v_reuseFailAlloc_3447_; 
v_reuseFailAlloc_3447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3447_, 0, v___x_3438_);
lean_ctor_set(v_reuseFailAlloc_3447_, 1, v_cursor_3434_);
v___x_3440_ = v_reuseFailAlloc_3447_;
goto v_reusejp_3439_;
}
v_reusejp_3439_:
{
lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; uint8_t v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; 
v___x_3441_ = lean_mk_empty_array_with_capacity(v___x_3392_);
v___x_3442_ = lean_array_push(v___x_3441_, v___x_3429_);
v___x_3443_ = lean_alloc_ctor(3, 1, 1);
lean_ctor_set(v___x_3443_, 0, v___x_3442_);
v___x_3444_ = lean_unbox(v_val_3421_);
lean_dec(v_val_3421_);
lean_ctor_set_uint8(v___x_3443_, sizeof(void*)*1, v___x_3444_);
v___x_3445_ = l_Lean_Markdown_BlockZipper_openLeaf(v_s_3264_, v_zipper_3433_, v___x_3443_);
v___x_3446_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3446_, 0, v___x_3445_);
lean_ctor_set(v___x_3446_, 1, v___x_3440_);
return v___x_3446_;
}
}
}
else
{
lean_object* v_zipper_3449_; lean_object* v_cursor_3450_; lean_object* v___x_3452_; uint8_t v_isShared_3453_; uint8_t v_isSharedCheck_3465_; 
lean_dec(v_val_3421_);
v_zipper_3449_ = lean_ctor_get(v___y_3428_, 0);
v_cursor_3450_ = lean_ctor_get(v___y_3428_, 1);
v_isSharedCheck_3465_ = !lean_is_exclusive(v___y_3428_);
if (v_isSharedCheck_3465_ == 0)
{
v___x_3452_ = v___y_3428_;
v_isShared_3453_ = v_isSharedCheck_3465_;
goto v_resetjp_3451_;
}
else
{
lean_inc(v_cursor_3450_);
lean_inc(v_zipper_3449_);
lean_dec(v___y_3428_);
v___x_3452_ = lean_box(0);
v_isShared_3453_ = v_isSharedCheck_3465_;
goto v_resetjp_3451_;
}
v_resetjp_3451_:
{
lean_object* v___x_3454_; lean_object* v___x_3456_; 
v___x_3454_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_3453_ == 0)
{
lean_ctor_set(v___x_3452_, 0, v___x_3454_);
v___x_3456_ = v___x_3452_;
goto v_reusejp_3455_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v___x_3454_);
lean_ctor_set(v_reuseFailAlloc_3464_, 1, v_cursor_3450_);
v___x_3456_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3455_;
}
v_reusejp_3455_:
{
lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3460_; 
v___x_3457_ = lean_mk_empty_array_with_capacity(v___x_3392_);
v___x_3458_ = lean_array_push(v___x_3457_, v___x_3429_);
if (v_isShared_3424_ == 0)
{
lean_ctor_set_tag(v___x_3423_, 5);
lean_ctor_set(v___x_3423_, 0, v___x_3458_);
v___x_3460_ = v___x_3423_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v___x_3458_);
v___x_3460_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
lean_object* v___x_3461_; lean_object* v___x_3462_; 
v___x_3461_ = l_Lean_Markdown_BlockZipper_addBlock(v_s_3264_, v_zipper_3449_, v___x_3460_);
v___x_3462_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3462_, 0, v___x_3461_);
lean_ctor_set(v___x_3462_, 1, v___x_3456_);
return v___x_3462_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_3420_);
v___y_3291_ = v_a_3267_;
goto v___jp_3290_;
}
}
}
else
{
lean_dec(v_val_3396_);
goto v___jp_3294_;
}
}
else
{
lean_dec(v_val_3396_);
goto v___jp_3294_;
}
}
else
{
lean_object* v___x_3471_; 
lean_dec(v_val_3396_);
v___x_3471_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f(v_s_3264_, v_line_3266_);
if (lean_obj_tag(v___x_3471_) == 1)
{
lean_object* v_val_3472_; lean_object* v_level_3473_; lean_object* v_hashes_3474_; lean_object* v_content_3475_; lean_object* v_closeHashes_3476_; lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3497_; 
v_val_3472_ = lean_ctor_get(v___x_3471_, 0);
lean_inc(v_val_3472_);
lean_dec_ref_known(v___x_3471_, 1);
v_level_3473_ = lean_ctor_get(v_val_3472_, 0);
v_hashes_3474_ = lean_ctor_get(v_val_3472_, 1);
v_content_3475_ = lean_ctor_get(v_val_3472_, 2);
v_closeHashes_3476_ = lean_ctor_get(v_val_3472_, 3);
v_isSharedCheck_3497_ = !lean_is_exclusive(v_val_3472_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3478_ = v_val_3472_;
v_isShared_3479_ = v_isSharedCheck_3497_;
goto v_resetjp_3477_;
}
else
{
lean_inc(v_closeHashes_3476_);
lean_inc(v_content_3475_);
lean_inc(v_hashes_3474_);
lean_inc(v_level_3473_);
lean_dec(v_val_3472_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3497_;
goto v_resetjp_3477_;
}
v_resetjp_3477_:
{
lean_object* v_zipper_3480_; lean_object* v_cursor_3481_; lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3496_; 
v_zipper_3480_ = lean_ctor_get(v_a_3267_, 0);
v_cursor_3481_ = lean_ctor_get(v_a_3267_, 1);
v_isSharedCheck_3496_ = !lean_is_exclusive(v_a_3267_);
if (v_isSharedCheck_3496_ == 0)
{
v___x_3483_ = v_a_3267_;
v_isShared_3484_ = v_isSharedCheck_3496_;
goto v_resetjp_3482_;
}
else
{
lean_inc(v_cursor_3481_);
lean_inc(v_zipper_3480_);
lean_dec(v_a_3267_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3496_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
lean_object* v___x_3485_; lean_object* v_content_3486_; lean_object* v___x_3487_; lean_object* v___x_3489_; 
v___x_3485_ = l_Lean_Markdown_Lines_singleton___redArg(v_content_3475_);
v_content_3486_ = l_Lean_Markdown_InlineSource_ofLines(v_s_3264_, v___x_3485_);
v___x_3487_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_3484_ == 0)
{
lean_ctor_set(v___x_3483_, 0, v___x_3487_);
v___x_3489_ = v___x_3483_;
goto v_reusejp_3488_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v___x_3487_);
lean_ctor_set(v_reuseFailAlloc_3495_, 1, v_cursor_3481_);
v___x_3489_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3488_;
}
v_reusejp_3488_:
{
lean_object* v___x_3491_; 
if (v_isShared_3479_ == 0)
{
lean_ctor_set_tag(v___x_3478_, 1);
lean_ctor_set(v___x_3478_, 2, v_content_3486_);
v___x_3491_ = v___x_3478_;
goto v_reusejp_3490_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v_level_3473_);
lean_ctor_set(v_reuseFailAlloc_3494_, 1, v_hashes_3474_);
lean_ctor_set(v_reuseFailAlloc_3494_, 2, v_content_3486_);
lean_ctor_set(v_reuseFailAlloc_3494_, 3, v_closeHashes_3476_);
v___x_3491_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3490_;
}
v_reusejp_3490_:
{
lean_object* v___x_3492_; lean_object* v___x_3493_; 
v___x_3492_ = l_Lean_Markdown_BlockZipper_addBlock(v_s_3264_, v_zipper_3480_, v___x_3491_);
v___x_3493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3493_, 0, v___x_3492_);
lean_ctor_set(v___x_3493_, 1, v___x_3489_);
return v___x_3493_;
}
}
}
}
}
else
{
lean_dec(v___x_3471_);
v___y_3291_ = v_a_3267_;
goto v___jp_3290_;
}
}
}
else
{
lean_object* v___x_3499_; uint8_t v_isShared_3500_; uint8_t v_isSharedCheck_3523_; 
lean_dec(v_val_3396_);
v_isSharedCheck_3523_ = !lean_is_exclusive(v_line_3266_);
if (v_isSharedCheck_3523_ == 0)
{
lean_object* v_unused_3524_; lean_object* v_unused_3525_; 
v_unused_3524_ = lean_ctor_get(v_line_3266_, 1);
lean_dec(v_unused_3524_);
v_unused_3525_ = lean_ctor_get(v_line_3266_, 0);
lean_dec(v_unused_3525_);
v___x_3499_ = v_line_3266_;
v_isShared_3500_ = v_isSharedCheck_3523_;
goto v_resetjp_3498_;
}
else
{
lean_dec(v_line_3266_);
v___x_3499_ = lean_box(0);
v_isShared_3500_ = v_isSharedCheck_3523_;
goto v_resetjp_3498_;
}
v_resetjp_3498_:
{
lean_object* v_zipper_3501_; lean_object* v_openLeaf_x3f_3502_; 
v_zipper_3501_ = lean_ctor_get(v_a_3267_, 0);
lean_inc_ref(v_zipper_3501_);
v_openLeaf_x3f_3502_ = lean_ctor_get(v_zipper_3501_, 2);
if (lean_obj_tag(v_openLeaf_x3f_3502_) == 0)
{
lean_object* v_cursor_3503_; lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3520_; 
v_cursor_3503_ = lean_ctor_get(v_a_3267_, 1);
v_isSharedCheck_3520_ = !lean_is_exclusive(v_a_3267_);
if (v_isSharedCheck_3520_ == 0)
{
lean_object* v_unused_3521_; 
v_unused_3521_ = lean_ctor_get(v_a_3267_, 0);
lean_dec(v_unused_3521_);
v___x_3505_ = v_a_3267_;
v_isShared_3506_ = v_isSharedCheck_3520_;
goto v_resetjp_3504_;
}
else
{
lean_inc(v_cursor_3503_);
lean_dec(v_a_3267_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3520_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
lean_object* v___x_3507_; lean_object* v___x_3509_; 
v___x_3507_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
lean_inc_ref(v_cursor_3503_);
if (v_isShared_3506_ == 0)
{
lean_ctor_set(v___x_3505_, 0, v___x_3507_);
v___x_3509_ = v___x_3505_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3519_; 
v_reuseFailAlloc_3519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3519_, 0, v___x_3507_);
lean_ctor_set(v_reuseFailAlloc_3519_, 1, v_cursor_3503_);
v___x_3509_ = v_reuseFailAlloc_3519_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3515_; 
v___x_3510_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_indentedCodeLine(v_s_3264_, v_cursor_3503_);
v___x_3511_ = lean_mk_empty_array_with_capacity(v___x_3392_);
v___x_3512_ = lean_array_push(v___x_3511_, v___x_3510_);
v___x_3513_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryFencedCodeOpener___closed__0));
if (v_isShared_3500_ == 0)
{
lean_ctor_set_tag(v___x_3499_, 2);
lean_ctor_set(v___x_3499_, 1, v___x_3513_);
lean_ctor_set(v___x_3499_, 0, v___x_3512_);
v___x_3515_ = v___x_3499_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3518_; 
v_reuseFailAlloc_3518_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3518_, 0, v___x_3512_);
lean_ctor_set(v_reuseFailAlloc_3518_, 1, v___x_3513_);
v___x_3515_ = v_reuseFailAlloc_3518_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
lean_object* v___x_3516_; lean_object* v___x_3517_; 
v___x_3516_ = l_Lean_Markdown_BlockZipper_openLeaf(v_s_3264_, v_zipper_3501_, v___x_3515_);
v___x_3517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3517_, 0, v___x_3516_);
lean_ctor_set(v___x_3517_, 1, v___x_3509_);
return v___x_3517_;
}
}
}
}
else
{
lean_object* v_cursor_3522_; 
lean_del_object(v___x_3499_);
v_cursor_3522_ = lean_ctor_get(v_a_3267_, 1);
lean_inc_ref(v_cursor_3522_);
lean_dec_ref(v_a_3267_);
v_zipper_3279_ = v_zipper_3501_;
v_cursor_3280_ = v_cursor_3522_;
goto v___jp_3278_;
}
}
}
}
}
v___jp_3268_:
{
lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; 
v___x_3272_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
v___x_3273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3273_, 0, v___x_3272_);
lean_ctor_set(v___x_3273_, 1, v_cursor_3271_);
v___x_3274_ = l_Lean_Markdown_Lines_singleton___redArg(v___y_3269_);
v___x_3275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3274_);
v___x_3276_ = l_Lean_Markdown_BlockZipper_openLeaf(v_s_3264_, v_zipper_3270_, v___x_3275_);
v___x_3277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3277_, 0, v___x_3276_);
lean_ctor_set(v___x_3277_, 1, v___x_3273_);
return v___x_3277_;
}
v___jp_3278_:
{
lean_object* v_pos_3281_; lean_object* v_stop_3282_; lean_object* v_openLeaf_x3f_3283_; lean_object* v___x_3284_; 
v_pos_3281_ = lean_ctor_get(v_cursor_3280_, 0);
v_stop_3282_ = lean_ctor_get(v_cursor_3280_, 1);
v_openLeaf_x3f_3283_ = lean_ctor_get(v_zipper_3279_, 2);
lean_inc(v_stop_3282_);
lean_inc(v_pos_3281_);
v___x_3284_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_3281_, v_stop_3282_);
if (lean_obj_tag(v_openLeaf_x3f_3283_) == 1)
{
lean_object* v_val_3285_; 
v_val_3285_ = lean_ctor_get(v_openLeaf_x3f_3283_, 0);
if (lean_obj_tag(v_val_3285_) == 0)
{
lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; 
v___x_3286_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
v___x_3287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3287_, 0, v___x_3286_);
lean_ctor_set(v___x_3287_, 1, v_cursor_3280_);
v___x_3288_ = l_Lean_Markdown_BlockZipper_extendParagraph___redArg(v_zipper_3279_, v___x_3284_);
v___x_3289_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3289_, 0, v___x_3288_);
lean_ctor_set(v___x_3289_, 1, v___x_3287_);
return v___x_3289_;
}
else
{
v___y_3269_ = v___x_3284_;
v_zipper_3270_ = v_zipper_3279_;
v_cursor_3271_ = v_cursor_3280_;
goto v___jp_3268_;
}
}
else
{
v___y_3269_ = v___x_3284_;
v_zipper_3270_ = v_zipper_3279_;
v_cursor_3271_ = v_cursor_3280_;
goto v___jp_3268_;
}
}
v___jp_3290_:
{
lean_object* v_zipper_3292_; lean_object* v_cursor_3293_; 
v_zipper_3292_ = lean_ctor_get(v___y_3291_, 0);
lean_inc_ref(v_zipper_3292_);
v_cursor_3293_ = lean_ctor_get(v___y_3291_, 1);
lean_inc_ref(v_cursor_3293_);
lean_dec_ref(v___y_3291_);
v_zipper_3279_ = v_zipper_3292_;
v_cursor_3280_ = v_cursor_3293_;
goto v___jp_3278_;
}
v___jp_3294_:
{
lean_object* v___x_3295_; 
v___x_3295_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f(v_s_3264_, v_line_3266_);
if (lean_obj_tag(v___x_3295_) == 1)
{
lean_object* v_val_3296_; lean_object* v_fst_3297_; lean_object* v_snd_3298_; lean_object* v___x_3300_; uint8_t v_isShared_3301_; uint8_t v_isSharedCheck_3318_; 
v_val_3296_ = lean_ctor_get(v___x_3295_, 0);
lean_inc(v_val_3296_);
lean_dec_ref_known(v___x_3295_, 1);
v_fst_3297_ = lean_ctor_get(v_val_3296_, 0);
v_snd_3298_ = lean_ctor_get(v_val_3296_, 1);
v_isSharedCheck_3318_ = !lean_is_exclusive(v_val_3296_);
if (v_isSharedCheck_3318_ == 0)
{
v___x_3300_ = v_val_3296_;
v_isShared_3301_ = v_isSharedCheck_3318_;
goto v_resetjp_3299_;
}
else
{
lean_inc(v_snd_3298_);
lean_inc(v_fst_3297_);
lean_dec(v_val_3296_);
v___x_3300_ = lean_box(0);
v_isShared_3301_ = v_isSharedCheck_3318_;
goto v_resetjp_3299_;
}
v_resetjp_3299_:
{
lean_object* v_zipper_3302_; lean_object* v_cursor_3303_; lean_object* v___x_3305_; uint8_t v_isShared_3306_; uint8_t v_isSharedCheck_3317_; 
v_zipper_3302_ = lean_ctor_get(v_a_3267_, 0);
v_cursor_3303_ = lean_ctor_get(v_a_3267_, 1);
v_isSharedCheck_3317_ = !lean_is_exclusive(v_a_3267_);
if (v_isSharedCheck_3317_ == 0)
{
v___x_3305_ = v_a_3267_;
v_isShared_3306_ = v_isSharedCheck_3317_;
goto v_resetjp_3304_;
}
else
{
lean_inc(v_cursor_3303_);
lean_inc(v_zipper_3302_);
lean_dec(v_a_3267_);
v___x_3305_ = lean_box(0);
v_isShared_3306_ = v_isSharedCheck_3317_;
goto v_resetjp_3304_;
}
v_resetjp_3304_:
{
lean_object* v___x_3307_; lean_object* v___x_3309_; 
v___x_3307_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_3306_ == 0)
{
lean_ctor_set(v___x_3305_, 0, v___x_3307_);
v___x_3309_ = v___x_3305_;
goto v_reusejp_3308_;
}
else
{
lean_object* v_reuseFailAlloc_3316_; 
v_reuseFailAlloc_3316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3316_, 0, v___x_3307_);
lean_ctor_set(v_reuseFailAlloc_3316_, 1, v_cursor_3303_);
v___x_3309_ = v_reuseFailAlloc_3316_;
goto v_reusejp_3308_;
}
v_reusejp_3308_:
{
lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3314_; 
v___x_3310_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryFencedCodeOpener___closed__0));
v___x_3311_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3311_, 0, v_fst_3297_);
lean_ctor_set(v___x_3311_, 1, v_snd_3298_);
lean_ctor_set(v___x_3311_, 2, v___x_3310_);
v___x_3312_ = l_Lean_Markdown_BlockZipper_openLeaf(v_s_3264_, v_zipper_3302_, v___x_3311_);
if (v_isShared_3301_ == 0)
{
lean_ctor_set_tag(v___x_3300_, 1);
lean_ctor_set(v___x_3300_, 1, v___x_3309_);
lean_ctor_set(v___x_3300_, 0, v___x_3312_);
v___x_3314_ = v___x_3300_;
goto v_reusejp_3313_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v___x_3312_);
lean_ctor_set(v_reuseFailAlloc_3315_, 1, v___x_3309_);
v___x_3314_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3313_;
}
v_reusejp_3313_:
{
return v___x_3314_;
}
}
}
}
}
else
{
lean_dec(v___x_3295_);
v___y_3291_ = v_a_3267_;
goto v___jp_3290_;
}
}
v___jp_3319_:
{
uint8_t v___x_3320_; 
v___x_3320_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_isThematicBreak(v_s_3264_, v_line_3266_);
if (v___x_3320_ == 0)
{
v___y_3291_ = v_a_3267_;
goto v___jp_3290_;
}
else
{
lean_object* v_zipper_3321_; lean_object* v_cursor_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3346_; 
v_zipper_3321_ = lean_ctor_get(v_a_3267_, 0);
v_cursor_3322_ = lean_ctor_get(v_a_3267_, 1);
v_isSharedCheck_3346_ = !lean_is_exclusive(v_a_3267_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3324_ = v_a_3267_;
v_isShared_3325_ = v_isSharedCheck_3346_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_cursor_3322_);
lean_inc(v_zipper_3321_);
lean_dec(v_a_3267_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3346_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
lean_object* v___x_3326_; lean_object* v_after_3327_; lean_object* v___x_3329_; uint8_t v_isShared_3330_; uint8_t v_isSharedCheck_3344_; 
lean_inc_ref(v_cursor_3322_);
v___x_3326_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent(v_s_3264_, v_cursor_3322_);
v_after_3327_ = lean_ctor_get(v___x_3326_, 0);
v_isSharedCheck_3344_ = !lean_is_exclusive(v___x_3326_);
if (v_isSharedCheck_3344_ == 0)
{
lean_object* v_unused_3345_; 
v_unused_3345_ = lean_ctor_get(v___x_3326_, 1);
lean_dec(v_unused_3345_);
v___x_3329_ = v___x_3326_;
v_isShared_3330_ = v_isSharedCheck_3344_;
goto v_resetjp_3328_;
}
else
{
lean_inc(v_after_3327_);
lean_dec(v___x_3326_);
v___x_3329_ = lean_box(0);
v_isShared_3330_ = v_isSharedCheck_3344_;
goto v_resetjp_3328_;
}
v_resetjp_3328_:
{
lean_object* v_pos_3331_; lean_object* v_stop_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3337_; 
v_pos_3331_ = lean_ctor_get(v_after_3327_, 0);
lean_inc(v_pos_3331_);
v_stop_3332_ = lean_ctor_get(v_after_3327_, 1);
lean_inc(v_stop_3332_);
lean_dec_ref(v_after_3327_);
v___x_3333_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_3331_, v_stop_3332_);
v___x_3334_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs(v_s_3264_, v___x_3333_);
v___x_3335_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_3325_ == 0)
{
lean_ctor_set(v___x_3324_, 0, v___x_3335_);
v___x_3337_ = v___x_3324_;
goto v_reusejp_3336_;
}
else
{
lean_object* v_reuseFailAlloc_3343_; 
v_reuseFailAlloc_3343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3343_, 0, v___x_3335_);
lean_ctor_set(v_reuseFailAlloc_3343_, 1, v_cursor_3322_);
v___x_3337_ = v_reuseFailAlloc_3343_;
goto v_reusejp_3336_;
}
v_reusejp_3336_:
{
lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3341_; 
v___x_3338_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v___x_3338_, 0, v___x_3334_);
v___x_3339_ = l_Lean_Markdown_BlockZipper_addBlock(v_s_3264_, v_zipper_3321_, v___x_3338_);
if (v_isShared_3330_ == 0)
{
lean_ctor_set_tag(v___x_3329_, 1);
lean_ctor_set(v___x_3329_, 1, v___x_3337_);
lean_ctor_set(v___x_3329_, 0, v___x_3339_);
v___x_3341_ = v___x_3329_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3342_; 
v_reuseFailAlloc_3342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3342_, 0, v___x_3339_);
lean_ctor_set(v_reuseFailAlloc_3342_, 1, v___x_3337_);
v___x_3341_ = v_reuseFailAlloc_3342_;
goto v_reusejp_3340_;
}
v_reusejp_3340_:
{
return v___x_3341_;
}
}
}
}
}
}
v___jp_3351_:
{
lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; 
v___x_3354_ = lean_box(0);
v___x_3355_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishBlankLine___lam__0(v_openedListItemThisLine_3265_, v_s_3264_, v___x_3354_, v___y_3353_);
v___x_3356_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3356_, 0, v___x_3355_);
lean_ctor_set(v___x_3356_, 1, v___y_3352_);
return v___x_3356_;
}
v___jp_3357_:
{
lean_object* v_zipper_3358_; lean_object* v_cursor_3359_; lean_object* v___x_3361_; uint8_t v_isShared_3362_; uint8_t v_isSharedCheck_3391_; 
v_zipper_3358_ = lean_ctor_get(v_a_3267_, 0);
v_cursor_3359_ = lean_ctor_get(v_a_3267_, 1);
v_isSharedCheck_3391_ = !lean_is_exclusive(v_a_3267_);
if (v_isSharedCheck_3391_ == 0)
{
v___x_3361_ = v_a_3267_;
v_isShared_3362_ = v_isSharedCheck_3391_;
goto v_resetjp_3360_;
}
else
{
lean_inc(v_cursor_3359_);
lean_inc(v_zipper_3358_);
lean_dec(v_a_3267_);
v___x_3361_ = lean_box(0);
v_isShared_3362_ = v_isSharedCheck_3391_;
goto v_resetjp_3360_;
}
v_resetjp_3360_:
{
lean_object* v___x_3363_; lean_object* v___x_3365_; 
v___x_3363_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
if (v_isShared_3362_ == 0)
{
lean_ctor_set(v___x_3361_, 0, v___x_3363_);
v___x_3365_ = v___x_3361_;
goto v_reusejp_3364_;
}
else
{
lean_object* v_reuseFailAlloc_3390_; 
v_reuseFailAlloc_3390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3390_, 0, v___x_3363_);
lean_ctor_set(v_reuseFailAlloc_3390_, 1, v_cursor_3359_);
v___x_3365_ = v_reuseFailAlloc_3390_;
goto v_reusejp_3364_;
}
v_reusejp_3364_:
{
lean_object* v_z_3366_; 
v_z_3366_ = l_Lean_Markdown_BlockZipper_closeLeaf(v_s_3264_, v_zipper_3358_);
if (v_openedListItemThisLine_3265_ == 0)
{
lean_object* v_spine_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; uint8_t v___x_3371_; 
v_spine_3367_ = lean_ctor_get(v_z_3366_, 1);
v___x_3368_ = lean_array_get_size(v_spine_3367_);
v___x_3369_ = lean_unsigned_to_nat(1u);
v___x_3370_ = lean_nat_sub(v___x_3368_, v___x_3369_);
v___x_3371_ = lean_nat_dec_lt(v___x_3370_, v___x_3368_);
if (v___x_3371_ == 0)
{
lean_dec(v___x_3370_);
v___y_3352_ = v___x_3365_;
v___y_3353_ = v_z_3366_;
goto v___jp_3351_;
}
else
{
lean_object* v___x_3372_; lean_object* v_container_3373_; 
v___x_3372_ = lean_array_fget(v_spine_3367_, v___x_3370_);
lean_dec(v___x_3370_);
v_container_3373_ = lean_ctor_get(v___x_3372_, 0);
if (lean_obj_tag(v_container_3373_) == 1)
{
lean_object* v_children_3374_; lean_object* v___x_3376_; uint8_t v_isShared_3377_; uint8_t v_isSharedCheck_3385_; 
v_children_3374_ = lean_ctor_get(v___x_3372_, 1);
v_isSharedCheck_3385_ = !lean_is_exclusive(v___x_3372_);
if (v_isSharedCheck_3385_ == 0)
{
lean_object* v_unused_3386_; 
v_unused_3386_ = lean_ctor_get(v___x_3372_, 0);
lean_dec(v_unused_3386_);
v___x_3376_ = v___x_3372_;
v_isShared_3377_ = v_isSharedCheck_3385_;
goto v_resetjp_3375_;
}
else
{
lean_inc(v_children_3374_);
lean_dec(v___x_3372_);
v___x_3376_ = lean_box(0);
v_isShared_3377_ = v_isSharedCheck_3385_;
goto v_resetjp_3375_;
}
v_resetjp_3375_:
{
uint8_t v___x_3378_; 
v___x_3378_ = l_Lean_Markdown_Children_isEmpty___redArg(v_children_3374_);
lean_dec_ref(v_children_3374_);
if (v___x_3378_ == 0)
{
lean_del_object(v___x_3376_);
v___y_3352_ = v___x_3365_;
v___y_3353_ = v_z_3366_;
goto v___jp_3351_;
}
else
{
lean_object* v_z_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3383_; 
v_z_3379_ = l_Lean_Markdown_BlockZipper_closeContainer(v_s_3264_, v_z_3366_);
v___x_3380_ = lean_box(0);
v___x_3381_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishBlankLine___lam__0(v_openedListItemThisLine_3265_, v_s_3264_, v___x_3380_, v_z_3379_);
if (v_isShared_3377_ == 0)
{
lean_ctor_set_tag(v___x_3376_, 1);
lean_ctor_set(v___x_3376_, 1, v___x_3365_);
lean_ctor_set(v___x_3376_, 0, v___x_3381_);
v___x_3383_ = v___x_3376_;
goto v_reusejp_3382_;
}
else
{
lean_object* v_reuseFailAlloc_3384_; 
v_reuseFailAlloc_3384_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3384_, 0, v___x_3381_);
lean_ctor_set(v_reuseFailAlloc_3384_, 1, v___x_3365_);
v___x_3383_ = v_reuseFailAlloc_3384_;
goto v_reusejp_3382_;
}
v_reusejp_3382_:
{
return v___x_3383_;
}
}
}
}
else
{
lean_dec(v___x_3372_);
v___y_3352_ = v___x_3365_;
v___y_3353_ = v_z_3366_;
goto v___jp_3351_;
}
}
}
else
{
lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; 
v___x_3387_ = lean_box(0);
v___x_3388_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_finishBlankLine___lam__0(v_openedListItemThisLine_3265_, v_s_3264_, v___x_3387_, v_z_3366_);
v___x_3389_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3389_, 0, v___x_3388_);
lean_ctor_set(v___x_3389_, 1, v___x_3365_);
return v___x_3389_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openLeafBlock___boxed(lean_object* v_s_3526_, lean_object* v_openedListItemThisLine_3527_, lean_object* v_line_3528_, lean_object* v_a_3529_){
_start:
{
uint8_t v_openedListItemThisLine_boxed_3530_; lean_object* v_res_3531_; 
v_openedListItemThisLine_boxed_3530_ = lean_unbox(v_openedListItemThisLine_3527_);
v_res_3531_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openLeafBlock(v_s_3526_, v_openedListItemThisLine_boxed_3530_, v_line_3528_, v_a_3529_);
lean_dec_ref(v_s_3526_);
return v_res_3531_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_processLine_spec__0(lean_object* v_s_3532_, lean_object* v_as_3533_, size_t v_i_3534_, size_t v_stop_3535_, lean_object* v_b_3536_){
_start:
{
uint8_t v___x_3537_; 
v___x_3537_ = lean_usize_dec_eq(v_i_3534_, v_stop_3535_);
if (v___x_3537_ == 0)
{
lean_object* v___x_3538_; lean_object* v___x_3539_; size_t v___x_3540_; size_t v___x_3541_; 
v___x_3538_ = lean_array_uget_borrowed(v_as_3533_, v_i_3534_);
lean_inc(v___x_3538_);
v___x_3539_ = l_Lean_Markdown_BlockZipper_addBlock(v_s_3532_, v_b_3536_, v___x_3538_);
v___x_3540_ = ((size_t)1ULL);
v___x_3541_ = lean_usize_add(v_i_3534_, v___x_3540_);
v_i_3534_ = v___x_3541_;
v_b_3536_ = v___x_3539_;
goto _start;
}
else
{
return v_b_3536_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_processLine_spec__0___boxed(lean_object* v_s_3543_, lean_object* v_as_3544_, lean_object* v_i_3545_, lean_object* v_stop_3546_, lean_object* v_b_3547_){
_start:
{
size_t v_i_boxed_3548_; size_t v_stop_boxed_3549_; lean_object* v_res_3550_; 
v_i_boxed_3548_ = lean_unbox_usize(v_i_3545_);
lean_dec(v_i_3545_);
v_stop_boxed_3549_ = lean_unbox_usize(v_stop_3546_);
lean_dec(v_stop_3546_);
v_res_3550_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_processLine_spec__0(v_s_3543_, v_as_3544_, v_i_boxed_3548_, v_stop_boxed_3549_, v_b_3547_);
lean_dec_ref(v_as_3544_);
lean_dec_ref(v_s_3543_);
return v_res_3550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_processLine(lean_object* v_s_3551_, lean_object* v_z_3552_, lean_object* v_line_3553_){
_start:
{
lean_object* v___y_3555_; lean_object* v_zipper_3556_; lean_object* v_zipper_3561_; lean_object* v_cursor_3562_; lean_object* v___y_3570_; lean_object* v___y_3574_; lean_object* v___y_3575_; lean_object* v___y_3588_; lean_object* v___y_3589_; lean_object* v___y_3599_; uint8_t v___y_3600_; lean_object* v___y_3619_; uint8_t v___y_3620_; lean_object* v___y_3621_; lean_object* v_a_3638_; lean_object* v_cursor_3639_; lean_object* v_a_3731_; lean_object* v_zipper_3732_; lean_object* v_val_3733_; lean_object* v_cursor_3734_; lean_object* v_a_3758_; lean_object* v_zipper_3759_; lean_object* v_openLeaf_x3f_3760_; lean_object* v_cursor_3761_; lean_object* v_a_3764_; lean_object* v_zipper_3765_; lean_object* v_val_3766_; lean_object* v_cursor_3767_; lean_object* v_zipper_3789_; lean_object* v_cursor_3790_; lean_object* v_matched_3791_; lean_object* v_zipper_3810_; lean_object* v_spine_3811_; lean_object* v_openLeaf_x3f_3812_; lean_object* v_cursor_3813_; lean_object* v_matched_3814_; lean_object* v_startInclusive_3824_; lean_object* v_endExclusive_3825_; lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3894_; 
v_startInclusive_3824_ = lean_ctor_get(v_line_3553_, 0);
v_endExclusive_3825_ = lean_ctor_get(v_line_3553_, 1);
v_isSharedCheck_3894_ = !lean_is_exclusive(v_line_3553_);
if (v_isSharedCheck_3894_ == 0)
{
v___x_3827_ = v_line_3553_;
v_isShared_3828_ = v_isSharedCheck_3894_;
goto v_resetjp_3826_;
}
else
{
lean_inc(v_endExclusive_3825_);
lean_inc(v_startInclusive_3824_);
lean_dec(v_line_3553_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3894_;
goto v_resetjp_3826_;
}
v___jp_3554_:
{
lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; 
v___x_3557_ = l_Lean_Markdown_Lines_singleton___redArg(v___y_3555_);
v___x_3558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3558_, 0, v___x_3557_);
v___x_3559_ = l_Lean_Markdown_BlockZipper_openLeaf(v_s_3551_, v_zipper_3556_, v___x_3558_);
lean_dec_ref(v_s_3551_);
return v___x_3559_;
}
v___jp_3560_:
{
lean_object* v_pos_3563_; lean_object* v_stop_3564_; lean_object* v_openLeaf_x3f_3565_; lean_object* v___x_3566_; 
v_pos_3563_ = lean_ctor_get(v_cursor_3562_, 0);
lean_inc(v_pos_3563_);
v_stop_3564_ = lean_ctor_get(v_cursor_3562_, 1);
lean_inc(v_stop_3564_);
lean_dec_ref(v_cursor_3562_);
v_openLeaf_x3f_3565_ = lean_ctor_get(v_zipper_3561_, 2);
v___x_3566_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_3563_, v_stop_3564_);
if (lean_obj_tag(v_openLeaf_x3f_3565_) == 1)
{
lean_object* v_val_3567_; 
v_val_3567_ = lean_ctor_get(v_openLeaf_x3f_3565_, 0);
if (lean_obj_tag(v_val_3567_) == 0)
{
lean_object* v___x_3568_; 
lean_dec_ref(v_s_3551_);
v___x_3568_ = l_Lean_Markdown_BlockZipper_extendParagraph___redArg(v_zipper_3561_, v___x_3566_);
return v___x_3568_;
}
else
{
v___y_3555_ = v___x_3566_;
v_zipper_3556_ = v_zipper_3561_;
goto v___jp_3554_;
}
}
else
{
v___y_3555_ = v___x_3566_;
v_zipper_3556_ = v_zipper_3561_;
goto v___jp_3554_;
}
}
v___jp_3569_:
{
lean_object* v_zipper_3571_; lean_object* v_cursor_3572_; 
v_zipper_3571_ = lean_ctor_get(v___y_3570_, 0);
lean_inc_ref(v_zipper_3571_);
v_cursor_3572_ = lean_ctor_get(v___y_3570_, 1);
lean_inc_ref(v_cursor_3572_);
lean_dec_ref(v___y_3570_);
v_zipper_3561_ = v_zipper_3571_;
v_cursor_3562_ = v_cursor_3572_;
goto v___jp_3560_;
}
v___jp_3573_:
{
uint8_t v___x_3576_; 
v___x_3576_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_isThematicBreak(v_s_3551_, v___y_3574_);
if (v___x_3576_ == 0)
{
v___y_3570_ = v___y_3575_;
goto v___jp_3569_;
}
else
{
lean_object* v_zipper_3577_; lean_object* v_cursor_3578_; lean_object* v___x_3579_; lean_object* v_after_3580_; lean_object* v_pos_3581_; lean_object* v_stop_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; 
v_zipper_3577_ = lean_ctor_get(v___y_3575_, 0);
lean_inc_ref(v_zipper_3577_);
v_cursor_3578_ = lean_ctor_get(v___y_3575_, 1);
lean_inc_ref(v_cursor_3578_);
lean_dec_ref(v___y_3575_);
v___x_3579_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent(v_s_3551_, v_cursor_3578_);
v_after_3580_ = lean_ctor_get(v___x_3579_, 0);
lean_inc_ref(v_after_3580_);
lean_dec_ref(v___x_3579_);
v_pos_3581_ = lean_ctor_get(v_after_3580_, 0);
lean_inc(v_pos_3581_);
v_stop_3582_ = lean_ctor_get(v_after_3580_, 1);
lean_inc(v_stop_3582_);
lean_dec_ref(v_after_3580_);
v___x_3583_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_3581_, v_stop_3582_);
v___x_3584_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_trimTrailingWs(v_s_3551_, v___x_3583_);
v___x_3585_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v___x_3585_, 0, v___x_3584_);
v___x_3586_ = l_Lean_Markdown_BlockZipper_addBlock(v_s_3551_, v_zipper_3577_, v___x_3585_);
lean_dec_ref(v_s_3551_);
return v___x_3586_;
}
}
v___jp_3587_:
{
lean_object* v___x_3590_; 
v___x_3590_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceOpen_x3f(v_s_3551_, v___y_3588_);
if (lean_obj_tag(v___x_3590_) == 1)
{
lean_object* v_val_3591_; lean_object* v_fst_3592_; lean_object* v_snd_3593_; lean_object* v_zipper_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; 
v_val_3591_ = lean_ctor_get(v___x_3590_, 0);
lean_inc(v_val_3591_);
lean_dec_ref_known(v___x_3590_, 1);
v_fst_3592_ = lean_ctor_get(v_val_3591_, 0);
lean_inc(v_fst_3592_);
v_snd_3593_ = lean_ctor_get(v_val_3591_, 1);
lean_inc(v_snd_3593_);
lean_dec(v_val_3591_);
v_zipper_3594_ = lean_ctor_get(v___y_3589_, 0);
lean_inc_ref(v_zipper_3594_);
lean_dec_ref(v___y_3589_);
v___x_3595_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryFencedCodeOpener___closed__0));
v___x_3596_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3596_, 0, v_fst_3592_);
lean_ctor_set(v___x_3596_, 1, v_snd_3593_);
lean_ctor_set(v___x_3596_, 2, v___x_3595_);
v___x_3597_ = l_Lean_Markdown_BlockZipper_openLeaf(v_s_3551_, v_zipper_3594_, v___x_3596_);
lean_dec_ref(v_s_3551_);
return v___x_3597_;
}
else
{
lean_dec(v___x_3590_);
v___y_3570_ = v___y_3589_;
goto v___jp_3569_;
}
}
v___jp_3598_:
{
lean_object* v_zipper_3601_; lean_object* v_z_3602_; 
v_zipper_3601_ = lean_ctor_get(v___y_3599_, 0);
lean_inc_ref(v_zipper_3601_);
lean_dec_ref(v___y_3599_);
v_z_3602_ = l_Lean_Markdown_BlockZipper_closeLeaf(v_s_3551_, v_zipper_3601_);
if (v___y_3600_ == 0)
{
lean_object* v_spine_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; uint8_t v___x_3607_; 
v_spine_3603_ = lean_ctor_get(v_z_3602_, 1);
v___x_3604_ = lean_array_get_size(v_spine_3603_);
v___x_3605_ = lean_unsigned_to_nat(1u);
v___x_3606_ = lean_nat_sub(v___x_3604_, v___x_3605_);
v___x_3607_ = lean_nat_dec_lt(v___x_3606_, v___x_3604_);
if (v___x_3607_ == 0)
{
lean_object* v___x_3608_; 
lean_dec(v___x_3606_);
v___x_3608_ = l_Lean_Markdown_BlockZipper_recordBlankLine(v_s_3551_, v_z_3602_);
lean_dec_ref(v_s_3551_);
return v___x_3608_;
}
else
{
lean_object* v___x_3609_; lean_object* v_container_3610_; 
v___x_3609_ = lean_array_fget_borrowed(v_spine_3603_, v___x_3606_);
lean_dec(v___x_3606_);
v_container_3610_ = lean_ctor_get(v___x_3609_, 0);
if (lean_obj_tag(v_container_3610_) == 1)
{
lean_object* v_children_3611_; uint8_t v___x_3612_; 
v_children_3611_ = lean_ctor_get(v___x_3609_, 1);
v___x_3612_ = l_Lean_Markdown_Children_isEmpty___redArg(v_children_3611_);
if (v___x_3612_ == 0)
{
lean_object* v___x_3613_; 
v___x_3613_ = l_Lean_Markdown_BlockZipper_recordBlankLine(v_s_3551_, v_z_3602_);
lean_dec_ref(v_s_3551_);
return v___x_3613_;
}
else
{
lean_object* v_z_3614_; lean_object* v___x_3615_; 
v_z_3614_ = l_Lean_Markdown_BlockZipper_closeContainer(v_s_3551_, v_z_3602_);
v___x_3615_ = l_Lean_Markdown_BlockZipper_recordBlankLine(v_s_3551_, v_z_3614_);
lean_dec_ref(v_s_3551_);
return v___x_3615_;
}
}
else
{
lean_object* v___x_3616_; 
v___x_3616_ = l_Lean_Markdown_BlockZipper_recordBlankLine(v_s_3551_, v_z_3602_);
lean_dec_ref(v_s_3551_);
return v___x_3616_;
}
}
}
else
{
lean_object* v___x_3617_; 
lean_dec_ref(v_s_3551_);
v___x_3617_ = l_Lean_Markdown_BlockZipper_recordContentLine___redArg(v_z_3602_);
return v___x_3617_;
}
}
v___jp_3618_:
{
lean_object* v___x_3622_; lean_object* v_source_3623_; uint8_t v___x_3624_; 
v___x_3622_ = l_Lean_Markdown_Cursor_verbatimLine(v_s_3551_, v___y_3619_);
v_source_3623_ = lean_ctor_get(v___x_3622_, 0);
v___x_3624_ = l_Lean_Markdown_HtmlBlockKind_endConditionMet(v_s_3551_, v___y_3620_, v_source_3623_);
if (v___x_3624_ == 0)
{
lean_object* v_zipper_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; 
v_zipper_3625_ = lean_ctor_get(v___y_3621_, 0);
lean_inc_ref(v_zipper_3625_);
lean_dec_ref(v___y_3621_);
v___x_3626_ = lean_unsigned_to_nat(1u);
v___x_3627_ = lean_mk_empty_array_with_capacity(v___x_3626_);
v___x_3628_ = lean_array_push(v___x_3627_, v___x_3622_);
v___x_3629_ = lean_alloc_ctor(3, 1, 1);
lean_ctor_set(v___x_3629_, 0, v___x_3628_);
lean_ctor_set_uint8(v___x_3629_, sizeof(void*)*1, v___y_3620_);
v___x_3630_ = l_Lean_Markdown_BlockZipper_openLeaf(v_s_3551_, v_zipper_3625_, v___x_3629_);
lean_dec_ref(v_s_3551_);
return v___x_3630_;
}
else
{
lean_object* v_zipper_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
v_zipper_3631_ = lean_ctor_get(v___y_3621_, 0);
lean_inc_ref(v_zipper_3631_);
lean_dec_ref(v___y_3621_);
v___x_3632_ = lean_unsigned_to_nat(1u);
v___x_3633_ = lean_mk_empty_array_with_capacity(v___x_3632_);
v___x_3634_ = lean_array_push(v___x_3633_, v___x_3622_);
v___x_3635_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3635_, 0, v___x_3634_);
v___x_3636_ = l_Lean_Markdown_BlockZipper_addBlock(v_s_3551_, v_zipper_3631_, v___x_3635_);
lean_dec_ref(v_s_3551_);
return v___x_3636_;
}
}
v___jp_3637_:
{
lean_object* v___x_3640_; lean_object* v___x_3641_; 
v___x_3640_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent(v_s_3551_, v_cursor_3639_);
lean_inc_ref(v_s_3551_);
v___x_3641_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_openContainerPrefixes(v_s_3551_, v___x_3640_, v_a_3638_);
if (lean_obj_tag(v___x_3641_) == 0)
{
lean_object* v_a_3642_; lean_object* v_snd_3643_; lean_object* v_after_3644_; lean_object* v_a_3645_; lean_object* v_fst_3646_; lean_object* v_indent_3647_; lean_object* v_pos_3648_; lean_object* v_stop_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; uint8_t v___x_3652_; 
v_a_3642_ = lean_ctor_get(v___x_3641_, 0);
lean_inc(v_a_3642_);
v_snd_3643_ = lean_ctor_get(v_a_3642_, 1);
lean_inc(v_snd_3643_);
v_after_3644_ = lean_ctor_get(v_snd_3643_, 0);
v_a_3645_ = lean_ctor_get(v___x_3641_, 1);
lean_inc(v_a_3645_);
lean_dec_ref_known(v___x_3641_, 2);
v_fst_3646_ = lean_ctor_get(v_a_3642_, 0);
lean_inc(v_fst_3646_);
lean_dec(v_a_3642_);
v_indent_3647_ = lean_ctor_get(v_snd_3643_, 1);
v_pos_3648_ = lean_ctor_get(v_after_3644_, 0);
v_stop_3649_ = lean_ctor_get(v_after_3644_, 1);
v___x_3650_ = lean_unsigned_to_nat(1u);
v___x_3651_ = lean_nat_add(v_pos_3648_, v___x_3650_);
v___x_3652_ = lean_nat_dec_le(v___x_3651_, v_stop_3649_);
lean_dec(v___x_3651_);
if (v___x_3652_ == 0)
{
uint8_t v___x_3653_; 
lean_dec(v_snd_3643_);
v___x_3653_ = lean_unbox(v_fst_3646_);
lean_dec(v_fst_3646_);
v___y_3599_ = v_a_3645_;
v___y_3600_ = v___x_3653_;
goto v___jp_3598_;
}
else
{
lean_object* v___x_3654_; 
v___x_3654_ = l_String_Slice_Pos_get_x3f(v_s_3551_, v_pos_3648_);
if (lean_obj_tag(v___x_3654_) == 0)
{
uint8_t v___x_3655_; 
lean_dec(v_snd_3643_);
v___x_3655_ = lean_unbox(v_fst_3646_);
lean_dec(v_fst_3646_);
v___y_3599_ = v_a_3645_;
v___y_3600_ = v___x_3655_;
goto v___jp_3598_;
}
else
{
lean_object* v_val_3656_; lean_object* v___x_3657_; uint8_t v___x_3658_; 
lean_dec(v_fst_3646_);
v_val_3656_ = lean_ctor_get(v___x_3654_, 0);
lean_inc(v_val_3656_);
lean_dec_ref_known(v___x_3654_, 1);
v___x_3657_ = lean_unsigned_to_nat(4u);
v___x_3658_ = lean_nat_dec_le(v___x_3657_, v_indent_3647_);
if (v___x_3658_ == 0)
{
uint32_t v___x_3659_; uint32_t v___x_3660_; uint8_t v___x_3661_; 
v___x_3659_ = 35;
v___x_3660_ = lean_unbox_uint32(v_val_3656_);
v___x_3661_ = lean_uint32_dec_eq(v___x_3660_, v___x_3659_);
if (v___x_3661_ == 0)
{
uint32_t v___x_3662_; uint32_t v___x_3663_; uint8_t v___x_3664_; 
v___x_3662_ = 96;
v___x_3663_ = lean_unbox_uint32(v_val_3656_);
v___x_3664_ = lean_uint32_dec_eq(v___x_3663_, v___x_3662_);
if (v___x_3664_ == 0)
{
uint32_t v___x_3665_; uint32_t v___x_3666_; uint8_t v___x_3667_; 
v___x_3665_ = 126;
v___x_3666_ = lean_unbox_uint32(v_val_3656_);
v___x_3667_ = lean_uint32_dec_eq(v___x_3666_, v___x_3665_);
if (v___x_3667_ == 0)
{
uint32_t v___x_3668_; uint32_t v___x_3669_; uint8_t v___x_3670_; 
v___x_3668_ = 60;
v___x_3669_ = lean_unbox_uint32(v_val_3656_);
v___x_3670_ = lean_uint32_dec_eq(v___x_3669_, v___x_3668_);
if (v___x_3670_ == 0)
{
uint32_t v___x_3671_; uint32_t v___x_3672_; uint8_t v___x_3673_; 
v___x_3671_ = 42;
v___x_3672_ = lean_unbox_uint32(v_val_3656_);
v___x_3673_ = lean_uint32_dec_eq(v___x_3672_, v___x_3671_);
if (v___x_3673_ == 0)
{
uint32_t v___x_3674_; uint32_t v___x_3675_; uint8_t v___x_3676_; 
v___x_3674_ = 45;
v___x_3675_ = lean_unbox_uint32(v_val_3656_);
v___x_3676_ = lean_uint32_dec_eq(v___x_3675_, v___x_3674_);
if (v___x_3676_ == 0)
{
uint32_t v___x_3677_; uint32_t v___x_3678_; uint8_t v___x_3679_; 
v___x_3677_ = 95;
v___x_3678_ = lean_unbox_uint32(v_val_3656_);
lean_dec(v_val_3656_);
v___x_3679_ = lean_uint32_dec_eq(v___x_3678_, v___x_3677_);
if (v___x_3679_ == 0)
{
lean_dec(v_snd_3643_);
v___y_3570_ = v_a_3645_;
goto v___jp_3569_;
}
else
{
v___y_3574_ = v_snd_3643_;
v___y_3575_ = v_a_3645_;
goto v___jp_3573_;
}
}
else
{
lean_dec(v_val_3656_);
v___y_3574_ = v_snd_3643_;
v___y_3575_ = v_a_3645_;
goto v___jp_3573_;
}
}
else
{
lean_dec(v_val_3656_);
v___y_3574_ = v_snd_3643_;
v___y_3575_ = v_a_3645_;
goto v___jp_3573_;
}
}
else
{
lean_object* v___x_3680_; 
lean_dec(v_val_3656_);
v___x_3680_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f(v_s_3551_, v_snd_3643_);
if (lean_obj_tag(v___x_3680_) == 1)
{
lean_object* v_zipper_3681_; lean_object* v_openLeaf_x3f_3682_; 
v_zipper_3681_ = lean_ctor_get(v_a_3645_, 0);
v_openLeaf_x3f_3682_ = lean_ctor_get(v_zipper_3681_, 2);
if (lean_obj_tag(v_openLeaf_x3f_3682_) == 1)
{
lean_object* v_val_3683_; 
v_val_3683_ = lean_ctor_get(v_openLeaf_x3f_3682_, 0);
if (lean_obj_tag(v_val_3683_) == 0)
{
lean_object* v_val_3684_; lean_object* v_cursor_3685_; uint8_t v___x_3686_; uint8_t v___x_3687_; 
v_val_3684_ = lean_ctor_get(v___x_3680_, 0);
lean_inc(v_val_3684_);
lean_dec_ref_known(v___x_3680_, 1);
v_cursor_3685_ = lean_ctor_get(v_a_3645_, 1);
lean_inc_ref(v_cursor_3685_);
v___x_3686_ = lean_unbox(v_val_3684_);
v___x_3687_ = l_Lean_Markdown_HtmlBlockKind_interruptsParagraph(v___x_3686_);
if (v___x_3687_ == 0)
{
lean_inc_ref(v_zipper_3681_);
lean_dec(v_val_3684_);
lean_dec(v_a_3645_);
v_zipper_3561_ = v_zipper_3681_;
v_cursor_3562_ = v_cursor_3685_;
goto v___jp_3560_;
}
else
{
uint8_t v___x_3688_; 
v___x_3688_ = lean_unbox(v_val_3684_);
lean_dec(v_val_3684_);
v___y_3619_ = v_cursor_3685_;
v___y_3620_ = v___x_3688_;
v___y_3621_ = v_a_3645_;
goto v___jp_3618_;
}
}
else
{
lean_object* v_val_3689_; lean_object* v_cursor_3690_; uint8_t v___x_3691_; 
v_val_3689_ = lean_ctor_get(v___x_3680_, 0);
lean_inc(v_val_3689_);
lean_dec_ref_known(v___x_3680_, 1);
v_cursor_3690_ = lean_ctor_get(v_a_3645_, 1);
lean_inc_ref(v_cursor_3690_);
v___x_3691_ = lean_unbox(v_val_3689_);
lean_dec(v_val_3689_);
v___y_3619_ = v_cursor_3690_;
v___y_3620_ = v___x_3691_;
v___y_3621_ = v_a_3645_;
goto v___jp_3618_;
}
}
else
{
lean_object* v_val_3692_; lean_object* v_cursor_3693_; uint8_t v___x_3694_; 
v_val_3692_ = lean_ctor_get(v___x_3680_, 0);
lean_inc(v_val_3692_);
lean_dec_ref_known(v___x_3680_, 1);
v_cursor_3693_ = lean_ctor_get(v_a_3645_, 1);
lean_inc_ref(v_cursor_3693_);
v___x_3694_ = lean_unbox(v_val_3692_);
lean_dec(v_val_3692_);
v___y_3619_ = v_cursor_3693_;
v___y_3620_ = v___x_3694_;
v___y_3621_ = v_a_3645_;
goto v___jp_3618_;
}
}
else
{
lean_dec(v___x_3680_);
v___y_3570_ = v_a_3645_;
goto v___jp_3569_;
}
}
}
else
{
lean_dec(v_val_3656_);
v___y_3588_ = v_snd_3643_;
v___y_3589_ = v_a_3645_;
goto v___jp_3587_;
}
}
else
{
lean_dec(v_val_3656_);
v___y_3588_ = v_snd_3643_;
v___y_3589_ = v_a_3645_;
goto v___jp_3587_;
}
}
else
{
lean_object* v___x_3695_; 
lean_dec(v_val_3656_);
v___x_3695_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f(v_s_3551_, v_snd_3643_);
if (lean_obj_tag(v___x_3695_) == 1)
{
lean_object* v_val_3696_; lean_object* v_level_3697_; lean_object* v_hashes_3698_; lean_object* v_content_3699_; lean_object* v_closeHashes_3700_; lean_object* v___x_3702_; uint8_t v_isShared_3703_; uint8_t v_isSharedCheck_3711_; 
v_val_3696_ = lean_ctor_get(v___x_3695_, 0);
lean_inc(v_val_3696_);
lean_dec_ref_known(v___x_3695_, 1);
v_level_3697_ = lean_ctor_get(v_val_3696_, 0);
v_hashes_3698_ = lean_ctor_get(v_val_3696_, 1);
v_content_3699_ = lean_ctor_get(v_val_3696_, 2);
v_closeHashes_3700_ = lean_ctor_get(v_val_3696_, 3);
v_isSharedCheck_3711_ = !lean_is_exclusive(v_val_3696_);
if (v_isSharedCheck_3711_ == 0)
{
v___x_3702_ = v_val_3696_;
v_isShared_3703_ = v_isSharedCheck_3711_;
goto v_resetjp_3701_;
}
else
{
lean_inc(v_closeHashes_3700_);
lean_inc(v_content_3699_);
lean_inc(v_hashes_3698_);
lean_inc(v_level_3697_);
lean_dec(v_val_3696_);
v___x_3702_ = lean_box(0);
v_isShared_3703_ = v_isSharedCheck_3711_;
goto v_resetjp_3701_;
}
v_resetjp_3701_:
{
lean_object* v_zipper_3704_; lean_object* v___x_3705_; lean_object* v_content_3706_; lean_object* v___x_3708_; 
v_zipper_3704_ = lean_ctor_get(v_a_3645_, 0);
lean_inc_ref(v_zipper_3704_);
lean_dec(v_a_3645_);
v___x_3705_ = l_Lean_Markdown_Lines_singleton___redArg(v_content_3699_);
v_content_3706_ = l_Lean_Markdown_InlineSource_ofLines(v_s_3551_, v___x_3705_);
if (v_isShared_3703_ == 0)
{
lean_ctor_set_tag(v___x_3702_, 1);
lean_ctor_set(v___x_3702_, 2, v_content_3706_);
v___x_3708_ = v___x_3702_;
goto v_reusejp_3707_;
}
else
{
lean_object* v_reuseFailAlloc_3710_; 
v_reuseFailAlloc_3710_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3710_, 0, v_level_3697_);
lean_ctor_set(v_reuseFailAlloc_3710_, 1, v_hashes_3698_);
lean_ctor_set(v_reuseFailAlloc_3710_, 2, v_content_3706_);
lean_ctor_set(v_reuseFailAlloc_3710_, 3, v_closeHashes_3700_);
v___x_3708_ = v_reuseFailAlloc_3710_;
goto v_reusejp_3707_;
}
v_reusejp_3707_:
{
lean_object* v___x_3709_; 
v___x_3709_ = l_Lean_Markdown_BlockZipper_addBlock(v_s_3551_, v_zipper_3704_, v___x_3708_);
lean_dec_ref(v_s_3551_);
return v___x_3709_;
}
}
}
else
{
lean_dec(v___x_3695_);
v___y_3570_ = v_a_3645_;
goto v___jp_3569_;
}
}
}
else
{
lean_object* v_zipper_3712_; lean_object* v_openLeaf_x3f_3713_; 
lean_dec(v_val_3656_);
lean_dec(v_snd_3643_);
v_zipper_3712_ = lean_ctor_get(v_a_3645_, 0);
lean_inc_ref(v_zipper_3712_);
v_openLeaf_x3f_3713_ = lean_ctor_get(v_zipper_3712_, 2);
if (lean_obj_tag(v_openLeaf_x3f_3713_) == 0)
{
lean_object* v_cursor_3714_; lean_object* v___x_3716_; uint8_t v_isShared_3717_; uint8_t v_isSharedCheck_3726_; 
v_cursor_3714_ = lean_ctor_get(v_a_3645_, 1);
v_isSharedCheck_3726_ = !lean_is_exclusive(v_a_3645_);
if (v_isSharedCheck_3726_ == 0)
{
lean_object* v_unused_3727_; 
v_unused_3727_ = lean_ctor_get(v_a_3645_, 0);
lean_dec(v_unused_3727_);
v___x_3716_ = v_a_3645_;
v_isShared_3717_ = v_isSharedCheck_3726_;
goto v_resetjp_3715_;
}
else
{
lean_inc(v_cursor_3714_);
lean_dec(v_a_3645_);
v___x_3716_ = lean_box(0);
v_isShared_3717_ = v_isSharedCheck_3726_;
goto v_resetjp_3715_;
}
v_resetjp_3715_:
{
lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3723_; 
v___x_3718_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_indentedCodeLine(v_s_3551_, v_cursor_3714_);
v___x_3719_ = lean_mk_empty_array_with_capacity(v___x_3650_);
v___x_3720_ = lean_array_push(v___x_3719_, v___x_3718_);
v___x_3721_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_tryFencedCodeOpener___closed__0));
if (v_isShared_3717_ == 0)
{
lean_ctor_set_tag(v___x_3716_, 2);
lean_ctor_set(v___x_3716_, 1, v___x_3721_);
lean_ctor_set(v___x_3716_, 0, v___x_3720_);
v___x_3723_ = v___x_3716_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v___x_3720_);
lean_ctor_set(v_reuseFailAlloc_3725_, 1, v___x_3721_);
v___x_3723_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
lean_object* v___x_3724_; 
v___x_3724_ = l_Lean_Markdown_BlockZipper_openLeaf(v_s_3551_, v_zipper_3712_, v___x_3723_);
lean_dec_ref(v_s_3551_);
return v___x_3724_;
}
}
}
else
{
lean_object* v_cursor_3728_; 
v_cursor_3728_ = lean_ctor_get(v_a_3645_, 1);
lean_inc_ref(v_cursor_3728_);
lean_dec(v_a_3645_);
v_zipper_3561_ = v_zipper_3712_;
v_cursor_3562_ = v_cursor_3728_;
goto v___jp_3560_;
}
}
}
}
}
else
{
lean_object* v_a_3729_; 
lean_dec_ref(v_s_3551_);
v_a_3729_ = lean_ctor_get(v___x_3641_, 0);
lean_inc(v_a_3729_);
lean_dec_ref_known(v___x_3641_, 2);
return v_a_3729_;
}
}
v___jp_3730_:
{
if (lean_obj_tag(v_val_3733_) == 2)
{
lean_object* v___x_3735_; lean_object* v_after_3736_; lean_object* v_indent_3737_; lean_object* v___x_3739_; uint8_t v_isShared_3740_; uint8_t v_isSharedCheck_3756_; 
lean_dec_ref_known(v_val_3733_, 2);
lean_dec_ref(v_a_3731_);
lean_inc_ref(v_cursor_3734_);
v___x_3735_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent(v_s_3551_, v_cursor_3734_);
v_after_3736_ = lean_ctor_get(v___x_3735_, 0);
v_indent_3737_ = lean_ctor_get(v___x_3735_, 1);
v_isSharedCheck_3756_ = !lean_is_exclusive(v___x_3735_);
if (v_isSharedCheck_3756_ == 0)
{
v___x_3739_ = v___x_3735_;
v_isShared_3740_ = v_isSharedCheck_3756_;
goto v_resetjp_3738_;
}
else
{
lean_inc(v_indent_3737_);
lean_inc(v_after_3736_);
lean_dec(v___x_3735_);
v___x_3739_ = lean_box(0);
v_isShared_3740_ = v_isSharedCheck_3756_;
goto v_resetjp_3738_;
}
v_resetjp_3738_:
{
lean_object* v_pos_3741_; lean_object* v_stop_3742_; uint8_t v___x_3743_; 
v_pos_3741_ = lean_ctor_get(v_after_3736_, 0);
lean_inc(v_pos_3741_);
v_stop_3742_ = lean_ctor_get(v_after_3736_, 1);
lean_inc(v_stop_3742_);
lean_dec_ref(v_after_3736_);
v___x_3743_ = lean_nat_dec_le(v_stop_3742_, v_pos_3741_);
lean_dec(v_pos_3741_);
lean_dec(v_stop_3742_);
if (v___x_3743_ == 0)
{
lean_object* v___x_3744_; uint8_t v___x_3745_; 
v___x_3744_ = lean_unsigned_to_nat(4u);
v___x_3745_ = lean_nat_dec_le(v___x_3744_, v_indent_3737_);
lean_dec(v_indent_3737_);
if (v___x_3745_ == 0)
{
lean_object* v___x_3746_; lean_object* v___x_3748_; 
v___x_3746_ = l_Lean_Markdown_BlockZipper_closeLeaf(v_s_3551_, v_zipper_3732_);
lean_inc_ref(v_cursor_3734_);
if (v_isShared_3740_ == 0)
{
lean_ctor_set(v___x_3739_, 1, v_cursor_3734_);
lean_ctor_set(v___x_3739_, 0, v___x_3746_);
v___x_3748_ = v___x_3739_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v___x_3746_);
lean_ctor_set(v_reuseFailAlloc_3749_, 1, v_cursor_3734_);
v___x_3748_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
v_a_3638_ = v___x_3748_;
v_cursor_3639_ = v_cursor_3734_;
goto v___jp_3637_;
}
}
else
{
lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; 
lean_del_object(v___x_3739_);
v___x_3750_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_indentedCodeLine(v_s_3551_, v_cursor_3734_);
lean_dec_ref(v_s_3551_);
v___x_3751_ = l_Lean_Markdown_BlockZipper_indentedCodeAddLine___redArg(v_zipper_3732_, v___x_3750_);
v___x_3752_ = l_Lean_Markdown_BlockZipper_recordContentLine___redArg(v___x_3751_);
return v___x_3752_;
}
}
else
{
lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; 
lean_del_object(v___x_3739_);
lean_dec(v_indent_3737_);
v___x_3753_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_indentedCodeLine(v_s_3551_, v_cursor_3734_);
v___x_3754_ = l_Lean_Markdown_BlockZipper_indentedCodeAddBlank___redArg(v_zipper_3732_, v___x_3753_);
v___x_3755_ = l_Lean_Markdown_BlockZipper_recordBlankLine(v_s_3551_, v___x_3754_);
lean_dec_ref(v_s_3551_);
return v___x_3755_;
}
}
}
else
{
lean_dec_ref(v_val_3733_);
lean_dec_ref(v_zipper_3732_);
v_a_3638_ = v_a_3731_;
v_cursor_3639_ = v_cursor_3734_;
goto v___jp_3637_;
}
}
v___jp_3757_:
{
if (lean_obj_tag(v_openLeaf_x3f_3760_) == 1)
{
lean_object* v_val_3762_; 
v_val_3762_ = lean_ctor_get(v_openLeaf_x3f_3760_, 0);
lean_inc(v_val_3762_);
lean_dec_ref_known(v_openLeaf_x3f_3760_, 1);
v_a_3731_ = v_a_3758_;
v_zipper_3732_ = v_zipper_3759_;
v_val_3733_ = v_val_3762_;
v_cursor_3734_ = v_cursor_3761_;
goto v___jp_3730_;
}
else
{
lean_dec(v_openLeaf_x3f_3760_);
lean_dec_ref(v_zipper_3759_);
v_a_3638_ = v_a_3758_;
v_cursor_3639_ = v_cursor_3761_;
goto v___jp_3637_;
}
}
v___jp_3763_:
{
if (lean_obj_tag(v_val_3766_) == 3)
{
uint8_t v_kind_3768_; uint8_t v___x_3769_; 
lean_dec_ref(v_a_3764_);
v_kind_3768_ = lean_ctor_get_uint8(v_val_3766_, sizeof(void*)*1);
lean_dec_ref_known(v_val_3766_, 1);
v___x_3769_ = l_Lean_Markdown_HtmlBlockKind_endsAtBlankLine(v_kind_3768_);
if (v___x_3769_ == 0)
{
lean_object* v___x_3770_; lean_object* v_source_3771_; uint8_t v___x_3772_; 
lean_inc_ref(v_cursor_3767_);
v___x_3770_ = l_Lean_Markdown_Cursor_verbatimLine(v_s_3551_, v_cursor_3767_);
v_source_3771_ = lean_ctor_get(v___x_3770_, 0);
v___x_3772_ = l_Lean_Markdown_HtmlBlockKind_endConditionMet(v_s_3551_, v_kind_3768_, v_source_3771_);
if (v___x_3772_ == 0)
{
uint8_t v___x_3773_; 
v___x_3773_ = l_Lean_Markdown_Cursor_isBlank(v_s_3551_, v_cursor_3767_);
if (v___x_3773_ == 0)
{
lean_object* v___x_3774_; lean_object* v___x_3775_; 
lean_dec_ref(v_s_3551_);
v___x_3774_ = l_Lean_Markdown_BlockZipper_extendHtml___redArg(v_zipper_3765_, v___x_3770_);
v___x_3775_ = l_Lean_Markdown_BlockZipper_recordContentLine___redArg(v___x_3774_);
return v___x_3775_;
}
else
{
lean_object* v___x_3776_; lean_object* v___x_3777_; 
v___x_3776_ = l_Lean_Markdown_BlockZipper_extendHtml___redArg(v_zipper_3765_, v___x_3770_);
v___x_3777_ = l_Lean_Markdown_BlockZipper_recordBlankLine(v_s_3551_, v___x_3776_);
lean_dec_ref(v_s_3551_);
return v___x_3777_;
}
}
else
{
lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; 
lean_dec_ref(v_cursor_3767_);
v___x_3778_ = l_Lean_Markdown_BlockZipper_extendHtml___redArg(v_zipper_3765_, v___x_3770_);
v___x_3779_ = l_Lean_Markdown_BlockZipper_closeLeaf(v_s_3551_, v___x_3778_);
lean_dec_ref(v_s_3551_);
v___x_3780_ = l_Lean_Markdown_BlockZipper_recordContentLine___redArg(v___x_3779_);
return v___x_3780_;
}
}
else
{
uint8_t v___x_3781_; 
lean_inc_ref(v_cursor_3767_);
v___x_3781_ = l_Lean_Markdown_Cursor_isBlank(v_s_3551_, v_cursor_3767_);
if (v___x_3781_ == 0)
{
lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; 
v___x_3782_ = l_Lean_Markdown_Cursor_verbatimLine(v_s_3551_, v_cursor_3767_);
lean_dec_ref(v_s_3551_);
v___x_3783_ = l_Lean_Markdown_BlockZipper_extendHtml___redArg(v_zipper_3765_, v___x_3782_);
v___x_3784_ = l_Lean_Markdown_BlockZipper_recordContentLine___redArg(v___x_3783_);
return v___x_3784_;
}
else
{
lean_object* v___x_3785_; lean_object* v_openLeaf_x3f_3786_; lean_object* v___x_3787_; 
v___x_3785_ = l_Lean_Markdown_BlockZipper_closeLeaf(v_s_3551_, v_zipper_3765_);
v_openLeaf_x3f_3786_ = lean_ctor_get(v___x_3785_, 2);
lean_inc(v_openLeaf_x3f_3786_);
lean_inc_ref(v_cursor_3767_);
lean_inc_ref(v___x_3785_);
v___x_3787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3787_, 0, v___x_3785_);
lean_ctor_set(v___x_3787_, 1, v_cursor_3767_);
v_a_3758_ = v___x_3787_;
v_zipper_3759_ = v___x_3785_;
v_openLeaf_x3f_3760_ = v_openLeaf_x3f_3786_;
v_cursor_3761_ = v_cursor_3767_;
goto v___jp_3757_;
}
}
}
else
{
v_a_3731_ = v_a_3764_;
v_zipper_3732_ = v_zipper_3765_;
v_val_3733_ = v_val_3766_;
v_cursor_3734_ = v_cursor_3767_;
goto v___jp_3730_;
}
}
v___jp_3788_:
{
lean_object* v___x_3792_; lean_object* v_openLeaf_x3f_3793_; lean_object* v___x_3794_; 
v___x_3792_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_closeNonContinuingContainers_closeAbove_spec__0___redArg(v_matched_3791_, v_s_3551_, v_zipper_3789_);
lean_dec(v_matched_3791_);
v_openLeaf_x3f_3793_ = lean_ctor_get(v___x_3792_, 2);
lean_inc_ref(v_cursor_3790_);
lean_inc_ref(v___x_3792_);
v___x_3794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3794_, 0, v___x_3792_);
lean_ctor_set(v___x_3794_, 1, v_cursor_3790_);
if (lean_obj_tag(v_openLeaf_x3f_3793_) == 1)
{
lean_object* v_val_3795_; 
v_val_3795_ = lean_ctor_get(v_openLeaf_x3f_3793_, 0);
if (lean_obj_tag(v_val_3795_) == 1)
{
lean_object* v_info_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; 
lean_dec_ref_known(v___x_3794_, 2);
v_info_3796_ = lean_ctor_get(v_val_3795_, 0);
lean_inc_ref(v_cursor_3790_);
v___x_3797_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent(v_s_3551_, v_cursor_3790_);
v___x_3798_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseFenceClose_x3f(v_s_3551_, v___x_3797_, v_info_3796_);
if (lean_obj_tag(v___x_3798_) == 0)
{
lean_object* v_openIndent_3799_; lean_object* v___x_3800_; lean_object* v_fst_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; 
v_openIndent_3799_ = lean_ctor_get(v_info_3796_, 1);
lean_inc(v_openIndent_3799_);
v___x_3800_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_consumeIndentCapped(v_s_3551_, v_cursor_3790_, v_openIndent_3799_);
v_fst_3801_ = lean_ctor_get(v___x_3800_, 0);
lean_inc(v_fst_3801_);
lean_dec_ref(v___x_3800_);
v___x_3802_ = l_Lean_Markdown_Cursor_verbatimLine(v_s_3551_, v_fst_3801_);
lean_dec_ref(v_s_3551_);
v___x_3803_ = l_Lean_Markdown_BlockZipper_extendFencedCode___redArg(v___x_3792_, v___x_3802_);
v___x_3804_ = l_Lean_Markdown_BlockZipper_recordContentLine___redArg(v___x_3803_);
return v___x_3804_;
}
else
{
lean_object* v_val_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; 
lean_dec_ref(v_cursor_3790_);
v_val_3805_ = lean_ctor_get(v___x_3798_, 0);
lean_inc(v_val_3805_);
lean_dec_ref_known(v___x_3798_, 1);
v___x_3806_ = l_Lean_Markdown_BlockZipper_closeFencedCode(v_s_3551_, v___x_3792_, v_val_3805_);
lean_dec_ref(v_s_3551_);
v___x_3807_ = l_Lean_Markdown_BlockZipper_recordContentLine___redArg(v___x_3806_);
return v___x_3807_;
}
}
else
{
lean_inc(v_val_3795_);
v_a_3764_ = v___x_3794_;
v_zipper_3765_ = v___x_3792_;
v_val_3766_ = v_val_3795_;
v_cursor_3767_ = v_cursor_3790_;
goto v___jp_3763_;
}
}
else
{
if (lean_obj_tag(v_openLeaf_x3f_3793_) == 1)
{
lean_object* v_val_3808_; 
v_val_3808_ = lean_ctor_get(v_openLeaf_x3f_3793_, 0);
lean_inc(v_val_3808_);
v_a_3764_ = v___x_3794_;
v_zipper_3765_ = v___x_3792_;
v_val_3766_ = v_val_3808_;
v_cursor_3767_ = v_cursor_3790_;
goto v___jp_3763_;
}
else
{
lean_inc(v_openLeaf_x3f_3793_);
v_a_3758_ = v___x_3794_;
v_zipper_3759_ = v___x_3792_;
v_openLeaf_x3f_3760_ = v_openLeaf_x3f_3793_;
v_cursor_3761_ = v_cursor_3790_;
goto v___jp_3757_;
}
}
}
v___jp_3809_:
{
lean_object* v___x_3815_; uint8_t v___x_3816_; 
v___x_3815_ = lean_array_get_size(v_spine_3811_);
lean_dec_ref(v_spine_3811_);
v___x_3816_ = lean_nat_dec_lt(v_matched_3814_, v___x_3815_);
if (v___x_3816_ == 0)
{
lean_dec(v_openLeaf_x3f_3812_);
v_zipper_3789_ = v_zipper_3810_;
v_cursor_3790_ = v_cursor_3813_;
v_matched_3791_ = v_matched_3814_;
goto v___jp_3788_;
}
else
{
if (lean_obj_tag(v_openLeaf_x3f_3812_) == 1)
{
lean_object* v_val_3817_; 
v_val_3817_ = lean_ctor_get(v_openLeaf_x3f_3812_, 0);
lean_inc(v_val_3817_);
lean_dec_ref_known(v_openLeaf_x3f_3812_, 1);
if (lean_obj_tag(v_val_3817_) == 0)
{
lean_object* v___x_3818_; uint8_t v___x_3819_; 
lean_dec_ref_known(v_val_3817_, 1);
lean_inc_ref(v_cursor_3813_);
v___x_3818_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent(v_s_3551_, v_cursor_3813_);
v___x_3819_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_isInterrupt(v_s_3551_, v___x_3818_);
if (v___x_3819_ == 0)
{
lean_object* v_pos_3820_; lean_object* v_stop_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; 
lean_dec(v_matched_3814_);
lean_dec_ref(v_s_3551_);
v_pos_3820_ = lean_ctor_get(v_cursor_3813_, 0);
lean_inc(v_pos_3820_);
v_stop_3821_ = lean_ctor_get(v_cursor_3813_, 1);
lean_inc(v_stop_3821_);
lean_dec_ref(v_cursor_3813_);
v___x_3822_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_3820_, v_stop_3821_);
v___x_3823_ = l_Lean_Markdown_BlockZipper_extendParagraph___redArg(v_zipper_3810_, v___x_3822_);
return v___x_3823_;
}
else
{
v_zipper_3789_ = v_zipper_3810_;
v_cursor_3790_ = v_cursor_3813_;
v_matched_3791_ = v_matched_3814_;
goto v___jp_3788_;
}
}
else
{
lean_dec(v_val_3817_);
v_zipper_3789_ = v_zipper_3810_;
v_cursor_3790_ = v_cursor_3813_;
v_matched_3791_ = v_matched_3814_;
goto v___jp_3788_;
}
}
else
{
lean_dec(v_openLeaf_x3f_3812_);
v_zipper_3789_ = v_zipper_3810_;
v_cursor_3790_ = v_cursor_3813_;
v_matched_3791_ = v_matched_3814_;
goto v___jp_3788_;
}
}
}
v_resetjp_3826_:
{
lean_object* v___x_3829_; uint8_t v___x_3830_; lean_object* v___x_3831_; lean_object* v_init_3833_; 
v___x_3829_ = lean_unsigned_to_nat(0u);
v___x_3830_ = 0;
v___x_3831_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3831_, 0, v_startInclusive_3824_);
lean_ctor_set(v___x_3831_, 1, v_endExclusive_3825_);
lean_ctor_set(v___x_3831_, 2, v___x_3829_);
lean_ctor_set_uint8(v___x_3831_, sizeof(void*)*3, v___x_3830_);
if (v_isShared_3828_ == 0)
{
lean_ctor_set(v___x_3827_, 1, v___x_3831_);
lean_ctor_set(v___x_3827_, 0, v_z_3552_);
v_init_3833_ = v___x_3827_;
goto v_reusejp_3832_;
}
else
{
lean_object* v_reuseFailAlloc_3893_; 
v_reuseFailAlloc_3893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3893_, 0, v_z_3552_);
lean_ctor_set(v_reuseFailAlloc_3893_, 1, v___x_3831_);
v_init_3833_ = v_reuseFailAlloc_3893_;
goto v_reusejp_3832_;
}
v_reusejp_3832_:
{
lean_object* v___x_3834_; lean_object* v___x_3835_; 
v___x_3834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3834_, 0, v_init_3833_);
lean_ctor_set(v___x_3834_, 1, v___x_3829_);
v___x_3835_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_continueContainers(v_s_3551_, v___x_3834_);
if (lean_obj_tag(v___x_3835_) == 0)
{
lean_object* v_a_3836_; lean_object* v_toLineState_3837_; lean_object* v_zipper_3838_; lean_object* v_matched_3839_; lean_object* v_cursor_3840_; lean_object* v_document_3841_; lean_object* v_spine_3842_; lean_object* v_openLeaf_x3f_3843_; lean_object* v_blankLineFloor_x3f_3844_; lean_object* v___x_3845_; uint8_t v___x_3846_; 
v_a_3836_ = lean_ctor_get(v___x_3835_, 1);
lean_inc(v_a_3836_);
lean_dec_ref_known(v___x_3835_, 2);
v_toLineState_3837_ = lean_ctor_get(v_a_3836_, 0);
lean_inc_ref(v_toLineState_3837_);
v_zipper_3838_ = lean_ctor_get(v_toLineState_3837_, 0);
lean_inc_ref(v_zipper_3838_);
v_matched_3839_ = lean_ctor_get(v_a_3836_, 1);
lean_inc(v_matched_3839_);
lean_dec(v_a_3836_);
v_cursor_3840_ = lean_ctor_get(v_toLineState_3837_, 1);
lean_inc_ref(v_cursor_3840_);
lean_dec_ref(v_toLineState_3837_);
v_document_3841_ = lean_ctor_get(v_zipper_3838_, 0);
v_spine_3842_ = lean_ctor_get(v_zipper_3838_, 1);
lean_inc_ref(v_spine_3842_);
v_openLeaf_x3f_3843_ = lean_ctor_get(v_zipper_3838_, 2);
v_blankLineFloor_x3f_3844_ = lean_ctor_get(v_zipper_3838_, 3);
v___x_3845_ = lean_array_get_size(v_spine_3842_);
v___x_3846_ = lean_nat_dec_eq(v___x_3845_, v_matched_3839_);
if (v___x_3846_ == 0)
{
lean_inc(v_openLeaf_x3f_3843_);
v_zipper_3810_ = v_zipper_3838_;
v_spine_3811_ = v_spine_3842_;
v_openLeaf_x3f_3812_ = v_openLeaf_x3f_3843_;
v_cursor_3813_ = v_cursor_3840_;
v_matched_3814_ = v_matched_3839_;
goto v___jp_3809_;
}
else
{
if (lean_obj_tag(v_openLeaf_x3f_3843_) == 1)
{
lean_object* v_val_3847_; 
v_val_3847_ = lean_ctor_get(v_openLeaf_x3f_3843_, 0);
lean_inc(v_val_3847_);
if (lean_obj_tag(v_val_3847_) == 0)
{
lean_object* v_lines_3848_; lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3891_; 
v_lines_3848_ = lean_ctor_get(v_val_3847_, 0);
v_isSharedCheck_3891_ = !lean_is_exclusive(v_val_3847_);
if (v_isSharedCheck_3891_ == 0)
{
v___x_3850_ = v_val_3847_;
v_isShared_3851_ = v_isSharedCheck_3891_;
goto v_resetjp_3849_;
}
else
{
lean_inc(v_lines_3848_);
lean_dec(v_val_3847_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3891_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
lean_object* v___x_3852_; lean_object* v___x_3853_; 
lean_inc_ref(v_cursor_3840_);
v___x_3852_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_Cursor_skipIndent(v_s_3551_, v_cursor_3840_);
v___x_3853_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseSetextUnderline_x3f(v_s_3551_, v___x_3852_);
if (lean_obj_tag(v___x_3853_) == 1)
{
lean_object* v___x_3855_; uint8_t v_isShared_3856_; uint8_t v_isSharedCheck_3886_; 
lean_inc(v_blankLineFloor_x3f_3844_);
lean_inc_ref(v_document_3841_);
lean_dec(v_matched_3839_);
v_isSharedCheck_3886_ = !lean_is_exclusive(v_zipper_3838_);
if (v_isSharedCheck_3886_ == 0)
{
lean_object* v_unused_3887_; lean_object* v_unused_3888_; lean_object* v_unused_3889_; lean_object* v_unused_3890_; 
v_unused_3887_ = lean_ctor_get(v_zipper_3838_, 3);
lean_dec(v_unused_3887_);
v_unused_3888_ = lean_ctor_get(v_zipper_3838_, 2);
lean_dec(v_unused_3888_);
v_unused_3889_ = lean_ctor_get(v_zipper_3838_, 1);
lean_dec(v_unused_3889_);
v_unused_3890_ = lean_ctor_get(v_zipper_3838_, 0);
lean_dec(v_unused_3890_);
v___x_3855_ = v_zipper_3838_;
v_isShared_3856_ = v_isSharedCheck_3886_;
goto v_resetjp_3854_;
}
else
{
lean_dec(v_zipper_3838_);
v___x_3855_ = lean_box(0);
v_isShared_3856_ = v_isSharedCheck_3886_;
goto v_resetjp_3854_;
}
v_resetjp_3854_:
{
lean_object* v_val_3857_; lean_object* v_fst_3858_; lean_object* v_snd_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v_fst_3862_; lean_object* v_snd_3863_; lean_object* v_pos_3864_; lean_object* v_stop_3865_; lean_object* v___x_3866_; lean_object* v___y_3868_; lean_object* v___x_3877_; lean_object* v___x_3879_; 
v_val_3857_ = lean_ctor_get(v___x_3853_, 0);
lean_inc(v_val_3857_);
lean_dec_ref_known(v___x_3853_, 1);
v_fst_3858_ = lean_ctor_get(v_val_3857_, 0);
lean_inc(v_fst_3858_);
v_snd_3859_ = lean_ctor_get(v_val_3857_, 1);
lean_inc(v_snd_3859_);
lean_dec(v_val_3857_);
v___x_3860_ = l_Lean_Markdown_InlineSource_ofLines(v_s_3551_, v_lines_3848_);
v___x_3861_ = l_Lean_Markdown_extractRefDefs(v_s_3551_, v___x_3860_);
v_fst_3862_ = lean_ctor_get(v___x_3861_, 0);
lean_inc(v_fst_3862_);
v_snd_3863_ = lean_ctor_get(v___x_3861_, 1);
lean_inc(v_snd_3863_);
lean_dec_ref(v___x_3861_);
v_pos_3864_ = lean_ctor_get(v_cursor_3840_, 0);
lean_inc(v_pos_3864_);
v_stop_3865_ = lean_ctor_get(v_cursor_3840_, 1);
lean_inc(v_stop_3865_);
lean_dec_ref(v_cursor_3840_);
v___x_3866_ = l_Lean_Markdown_subsliceClamped___redArg(v_pos_3864_, v_stop_3865_);
v___x_3877_ = lean_box(0);
if (v_isShared_3856_ == 0)
{
lean_ctor_set(v___x_3855_, 2, v___x_3877_);
v___x_3879_ = v___x_3855_;
goto v_reusejp_3878_;
}
else
{
lean_object* v_reuseFailAlloc_3885_; 
v_reuseFailAlloc_3885_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3885_, 0, v_document_3841_);
lean_ctor_set(v_reuseFailAlloc_3885_, 1, v_spine_3842_);
lean_ctor_set(v_reuseFailAlloc_3885_, 2, v___x_3877_);
lean_ctor_set(v_reuseFailAlloc_3885_, 3, v_blankLineFloor_x3f_3844_);
v___x_3879_ = v_reuseFailAlloc_3885_;
goto v_reusejp_3878_;
}
v___jp_3867_:
{
if (lean_obj_tag(v_snd_3863_) == 0)
{
lean_object* v___x_3869_; lean_object* v___x_3871_; 
lean_dec(v_snd_3859_);
lean_dec(v_fst_3858_);
v___x_3869_ = l_Lean_Markdown_Lines_singleton___redArg(v___x_3866_);
if (v_isShared_3851_ == 0)
{
lean_ctor_set(v___x_3850_, 0, v___x_3869_);
v___x_3871_ = v___x_3850_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3873_; 
v_reuseFailAlloc_3873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3873_, 0, v___x_3869_);
v___x_3871_ = v_reuseFailAlloc_3873_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
lean_object* v___x_3872_; 
v___x_3872_ = l_Lean_Markdown_BlockZipper_openLeaf(v_s_3551_, v___y_3868_, v___x_3871_);
lean_dec_ref(v_s_3551_);
return v___x_3872_;
}
}
else
{
lean_object* v_val_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; 
lean_dec_ref(v___x_3866_);
lean_del_object(v___x_3850_);
v_val_3874_ = lean_ctor_get(v_snd_3863_, 0);
lean_inc(v_val_3874_);
lean_dec_ref_known(v_snd_3863_, 1);
v___x_3875_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3875_, 0, v_fst_3858_);
lean_ctor_set(v___x_3875_, 1, v_val_3874_);
lean_ctor_set(v___x_3875_, 2, v_snd_3859_);
v___x_3876_ = l_Lean_Markdown_BlockZipper_addBlock(v_s_3551_, v___y_3868_, v___x_3875_);
lean_dec_ref(v_s_3551_);
return v___x_3876_;
}
}
v_reusejp_3878_:
{
lean_object* v___x_3880_; uint8_t v___x_3881_; 
v___x_3880_ = lean_array_get_size(v_fst_3862_);
v___x_3881_ = lean_nat_dec_lt(v___x_3829_, v___x_3880_);
if (v___x_3881_ == 0)
{
lean_dec(v_fst_3862_);
v___y_3868_ = v___x_3879_;
goto v___jp_3867_;
}
else
{
size_t v___x_3882_; size_t v___x_3883_; lean_object* v___x_3884_; 
v___x_3882_ = ((size_t)0ULL);
v___x_3883_ = lean_usize_of_nat(v___x_3880_);
v___x_3884_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_processLine_spec__0(v_s_3551_, v_fst_3862_, v___x_3882_, v___x_3883_, v___x_3879_);
lean_dec(v_fst_3862_);
v___y_3868_ = v___x_3884_;
goto v___jp_3867_;
}
}
}
}
else
{
lean_inc_ref(v_openLeaf_x3f_3843_);
lean_dec(v___x_3853_);
lean_del_object(v___x_3850_);
lean_dec_ref(v_lines_3848_);
v_zipper_3810_ = v_zipper_3838_;
v_spine_3811_ = v_spine_3842_;
v_openLeaf_x3f_3812_ = v_openLeaf_x3f_3843_;
v_cursor_3813_ = v_cursor_3840_;
v_matched_3814_ = v_matched_3839_;
goto v___jp_3809_;
}
}
}
else
{
lean_inc_ref(v_openLeaf_x3f_3843_);
lean_dec(v_val_3847_);
v_zipper_3810_ = v_zipper_3838_;
v_spine_3811_ = v_spine_3842_;
v_openLeaf_x3f_3812_ = v_openLeaf_x3f_3843_;
v_cursor_3813_ = v_cursor_3840_;
v_matched_3814_ = v_matched_3839_;
goto v___jp_3809_;
}
}
else
{
lean_inc(v_openLeaf_x3f_3843_);
v_zipper_3810_ = v_zipper_3838_;
v_spine_3811_ = v_spine_3842_;
v_openLeaf_x3f_3812_ = v_openLeaf_x3f_3843_;
v_cursor_3813_ = v_cursor_3840_;
v_matched_3814_ = v_matched_3839_;
goto v___jp_3809_;
}
}
}
else
{
lean_object* v_a_3892_; 
lean_dec_ref(v_s_3551_);
v_a_3892_ = lean_ctor_get(v___x_3835_, 0);
lean_inc(v_a_3892_);
lean_dec_ref_known(v___x_3835_, 2);
return v_a_3892_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlocksRaw_spec__0(lean_object* v_s_3895_, lean_object* v_indent_3896_, lean_object* v_as_3897_, size_t v_sz_3898_, size_t v_i_3899_, lean_object* v_b_3900_){
_start:
{
uint8_t v___x_3901_; 
v___x_3901_ = lean_usize_dec_lt(v_i_3899_, v_sz_3898_);
if (v___x_3901_ == 0)
{
lean_dec_ref(v_s_3895_);
return v_b_3900_;
}
else
{
lean_object* v_a_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; size_t v___x_3905_; size_t v___x_3906_; 
v_a_3902_ = lean_array_uget_borrowed(v_as_3897_, v_i_3899_);
lean_inc(v_a_3902_);
v___x_3903_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_dropIndent(v_s_3895_, v_a_3902_, v_indent_3896_);
lean_inc_ref(v_s_3895_);
v___x_3904_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_processLine(v_s_3895_, v_b_3900_, v___x_3903_);
v___x_3905_ = ((size_t)1ULL);
v___x_3906_ = lean_usize_add(v_i_3899_, v___x_3905_);
v_i_3899_ = v___x_3906_;
v_b_3900_ = v___x_3904_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlocksRaw_spec__0___boxed(lean_object* v_s_3908_, lean_object* v_indent_3909_, lean_object* v_as_3910_, lean_object* v_sz_3911_, lean_object* v_i_3912_, lean_object* v_b_3913_){
_start:
{
size_t v_sz_boxed_3914_; size_t v_i_boxed_3915_; lean_object* v_res_3916_; 
v_sz_boxed_3914_ = lean_unbox_usize(v_sz_3911_);
lean_dec(v_sz_3911_);
v_i_boxed_3915_ = lean_unbox_usize(v_i_3912_);
lean_dec(v_i_3912_);
v_res_3916_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlocksRaw_spec__0(v_s_3908_, v_indent_3909_, v_as_3910_, v_sz_boxed_3914_, v_i_boxed_3915_, v_b_3913_);
lean_dec_ref(v_as_3910_);
lean_dec(v_indent_3909_);
return v_res_3916_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlocksRaw(lean_object* v_s_3917_, lean_object* v_indent_3918_){
_start:
{
lean_object* v_startInclusive_3919_; lean_object* v_endExclusive_3920_; lean_object* v_z_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; size_t v_sz_3926_; size_t v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; 
v_startInclusive_3919_ = lean_ctor_get(v_s_3917_, 1);
v_endExclusive_3920_ = lean_ctor_get(v_s_3917_, 2);
v_z_3921_ = lean_obj_once(&l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0, &l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0_once, _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_takeState___redArg___closed__0);
v___x_3922_ = lean_unsigned_to_nat(0u);
v___x_3923_ = lean_nat_sub(v_endExclusive_3920_, v_startInclusive_3919_);
v___x_3924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3924_, 0, v___x_3922_);
lean_ctor_set(v___x_3924_, 1, v___x_3923_);
v___x_3925_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_splitLines(v_s_3917_, v___x_3924_);
v_sz_3926_ = lean_array_size(v___x_3925_);
v___x_3927_ = ((size_t)0ULL);
lean_inc_ref(v_s_3917_);
v___x_3928_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlocksRaw_spec__0(v_s_3917_, v_indent_3918_, v___x_3925_, v_sz_3926_, v___x_3927_, v_z_3921_);
lean_dec_ref(v___x_3925_);
v___x_3929_ = l_Lean_Markdown_BlockZipper_finalize(v_s_3917_, v___x_3928_);
lean_dec_ref(v_s_3917_);
return v___x_3929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlocksRaw___boxed(lean_object* v_s_3930_, lean_object* v_indent_3931_){
_start:
{
lean_object* v_res_3932_; 
v_res_3932_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlocksRaw(v_s_3930_, v_indent_3931_);
lean_dec(v_indent_3931_);
return v_res_3932_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___redArg___lam__0(lean_object* v_snd_3933_, lean_object* v_____r_3934_, lean_object* v_out_3935_){
_start:
{
lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; 
v___x_3936_ = lean_unsigned_to_nat(1u);
v___x_3937_ = lean_nat_add(v_snd_3933_, v___x_3936_);
v___x_3938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3938_, 0, v_out_3935_);
lean_ctor_set(v___x_3938_, 1, v___x_3937_);
v___x_3939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3939_, 0, v___x_3938_);
return v___x_3939_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___redArg___lam__0___boxed(lean_object* v_snd_3940_, lean_object* v_____r_3941_, lean_object* v_out_3942_){
_start:
{
lean_object* v_res_3943_; 
v_res_3943_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___redArg___lam__0(v_snd_3940_, v_____r_3941_, v_out_3942_);
lean_dec(v_snd_3940_);
return v_res_3943_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___redArg(lean_object* v_blocks_3949_, lean_object* v_s_3950_, lean_object* v_a_3951_){
_start:
{
lean_object* v___y_3953_; lean_object* v_fst_3957_; lean_object* v_snd_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_4029_; 
v_fst_3957_ = lean_ctor_get(v_a_3951_, 0);
v_snd_3958_ = lean_ctor_get(v_a_3951_, 1);
v_isSharedCheck_4029_ = !lean_is_exclusive(v_a_3951_);
if (v_isSharedCheck_4029_ == 0)
{
v___x_3960_ = v_a_3951_;
v_isShared_3961_ = v_isSharedCheck_4029_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_snd_3958_);
lean_inc(v_fst_3957_);
lean_dec(v_a_3951_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_4029_;
goto v_resetjp_3959_;
}
v___jp_3952_:
{
if (lean_obj_tag(v___y_3953_) == 0)
{
lean_object* v_a_3954_; 
v_a_3954_ = lean_ctor_get(v___y_3953_, 0);
lean_inc(v_a_3954_);
lean_dec_ref_known(v___y_3953_, 1);
return v_a_3954_;
}
else
{
lean_object* v_a_3955_; 
v_a_3955_ = lean_ctor_get(v___y_3953_, 0);
lean_inc(v_a_3955_);
lean_dec_ref_known(v___y_3953_, 1);
v_a_3951_ = v_a_3955_;
goto _start;
}
}
v_resetjp_3959_:
{
lean_object* v___x_3962_; uint8_t v___x_3963_; 
v___x_3962_ = lean_array_get_size(v_blocks_3949_);
v___x_3963_ = lean_nat_dec_lt(v_snd_3958_, v___x_3962_);
if (v___x_3963_ == 0)
{
lean_object* v___x_3965_; 
if (v_isShared_3961_ == 0)
{
v___x_3965_ = v___x_3960_;
goto v_reusejp_3964_;
}
else
{
lean_object* v_reuseFailAlloc_3966_; 
v_reuseFailAlloc_3966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3966_, 0, v_fst_3957_);
lean_ctor_set(v_reuseFailAlloc_3966_, 1, v_snd_3958_);
v___x_3965_ = v_reuseFailAlloc_3966_;
goto v_reusejp_3964_;
}
v_reusejp_3964_:
{
return v___x_3965_;
}
}
else
{
lean_object* v___x_3967_; 
lean_del_object(v___x_3960_);
v___x_3967_ = lean_array_fget(v_blocks_3949_, v_snd_3958_);
switch(lean_obj_tag(v___x_3967_))
{
case 0:
{
lean_object* v_content_3968_; lean_object* v___x_3970_; uint8_t v_isShared_3971_; uint8_t v_isSharedCheck_3985_; 
v_content_3968_ = lean_ctor_get(v___x_3967_, 0);
v_isSharedCheck_3985_ = !lean_is_exclusive(v___x_3967_);
if (v_isSharedCheck_3985_ == 0)
{
v___x_3970_ = v___x_3967_;
v_isShared_3971_ = v_isSharedCheck_3985_;
goto v_resetjp_3969_;
}
else
{
lean_inc(v_content_3968_);
lean_dec(v___x_3967_);
v___x_3970_ = lean_box(0);
v_isShared_3971_ = v_isSharedCheck_3985_;
goto v_resetjp_3969_;
}
v_resetjp_3969_:
{
lean_object* v___x_3972_; lean_object* v_fst_3973_; lean_object* v_snd_3974_; lean_object* v___x_3975_; 
v___x_3972_ = l_Lean_Markdown_extractRefDefs(v_s_3950_, v_content_3968_);
v_fst_3973_ = lean_ctor_get(v___x_3972_, 0);
lean_inc(v_fst_3973_);
v_snd_3974_ = lean_ctor_get(v___x_3972_, 1);
lean_inc(v_snd_3974_);
lean_dec_ref(v___x_3972_);
v___x_3975_ = l_Array_append___redArg(v_fst_3957_, v_fst_3973_);
lean_dec(v_fst_3973_);
if (lean_obj_tag(v_snd_3974_) == 1)
{
lean_object* v_val_3976_; lean_object* v___x_3978_; 
v_val_3976_ = lean_ctor_get(v_snd_3974_, 0);
lean_inc(v_val_3976_);
lean_dec_ref_known(v_snd_3974_, 1);
if (v_isShared_3971_ == 0)
{
lean_ctor_set(v___x_3970_, 0, v_val_3976_);
v___x_3978_ = v___x_3970_;
goto v_reusejp_3977_;
}
else
{
lean_object* v_reuseFailAlloc_3982_; 
v_reuseFailAlloc_3982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3982_, 0, v_val_3976_);
v___x_3978_ = v_reuseFailAlloc_3982_;
goto v_reusejp_3977_;
}
v_reusejp_3977_:
{
lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; 
v___x_3979_ = lean_array_push(v___x_3975_, v___x_3978_);
v___x_3980_ = lean_box(0);
v___x_3981_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___redArg___lam__0(v_snd_3958_, v___x_3980_, v___x_3979_);
lean_dec(v_snd_3958_);
v___y_3953_ = v___x_3981_;
goto v___jp_3952_;
}
}
else
{
lean_object* v___x_3983_; lean_object* v___x_3984_; 
lean_dec(v_snd_3974_);
lean_del_object(v___x_3970_);
v___x_3983_ = lean_box(0);
v___x_3984_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___redArg___lam__0(v_snd_3958_, v___x_3983_, v___x_3975_);
lean_dec(v_snd_3958_);
v___y_3953_ = v___x_3984_;
goto v___jp_3952_;
}
}
}
case 6:
{
lean_object* v_markers_3986_; lean_object* v_children_3987_; lean_object* v___x_3989_; uint8_t v_isShared_3990_; uint8_t v_isSharedCheck_3998_; 
v_markers_3986_ = lean_ctor_get(v___x_3967_, 0);
v_children_3987_ = lean_ctor_get(v___x_3967_, 1);
v_isSharedCheck_3998_ = !lean_is_exclusive(v___x_3967_);
if (v_isSharedCheck_3998_ == 0)
{
v___x_3989_ = v___x_3967_;
v_isShared_3990_ = v_isSharedCheck_3998_;
goto v_resetjp_3988_;
}
else
{
lean_inc(v_children_3987_);
lean_inc(v_markers_3986_);
lean_dec(v___x_3967_);
v___x_3989_ = lean_box(0);
v_isShared_3990_ = v_isSharedCheck_3998_;
goto v_resetjp_3988_;
}
v_resetjp_3988_:
{
lean_object* v___x_3991_; lean_object* v___x_3993_; 
v___x_3991_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs(v_s_3950_, v_children_3987_);
lean_dec_ref(v_children_3987_);
if (v_isShared_3990_ == 0)
{
lean_ctor_set(v___x_3989_, 1, v___x_3991_);
v___x_3993_ = v___x_3989_;
goto v_reusejp_3992_;
}
else
{
lean_object* v_reuseFailAlloc_3997_; 
v_reuseFailAlloc_3997_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3997_, 0, v_markers_3986_);
lean_ctor_set(v_reuseFailAlloc_3997_, 1, v___x_3991_);
v___x_3993_ = v_reuseFailAlloc_3997_;
goto v_reusejp_3992_;
}
v_reusejp_3992_:
{
lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; 
v___x_3994_ = lean_array_push(v_fst_3957_, v___x_3993_);
v___x_3995_ = lean_box(0);
v___x_3996_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___redArg___lam__0(v_snd_3958_, v___x_3995_, v___x_3994_);
lean_dec(v_snd_3958_);
v___y_3953_ = v___x_3996_;
goto v___jp_3952_;
}
}
}
case 7:
{
lean_object* v_kind_3999_; uint8_t v_tight_4000_; lean_object* v_items_4001_; lean_object* v___x_4003_; uint8_t v_isShared_4004_; uint8_t v_isSharedCheck_4012_; 
v_kind_3999_ = lean_ctor_get(v___x_3967_, 0);
v_tight_4000_ = lean_ctor_get_uint8(v___x_3967_, sizeof(void*)*2);
v_items_4001_ = lean_ctor_get(v___x_3967_, 1);
v_isSharedCheck_4012_ = !lean_is_exclusive(v___x_3967_);
if (v_isSharedCheck_4012_ == 0)
{
v___x_4003_ = v___x_3967_;
v_isShared_4004_ = v_isSharedCheck_4012_;
goto v_resetjp_4002_;
}
else
{
lean_inc(v_items_4001_);
lean_inc(v_kind_3999_);
lean_dec(v___x_3967_);
v___x_4003_ = lean_box(0);
v_isShared_4004_ = v_isSharedCheck_4012_;
goto v_resetjp_4002_;
}
v_resetjp_4002_:
{
lean_object* v___x_4005_; lean_object* v___x_4007_; 
v___x_4005_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs(v_s_3950_, v_items_4001_);
lean_dec_ref(v_items_4001_);
if (v_isShared_4004_ == 0)
{
lean_ctor_set(v___x_4003_, 1, v___x_4005_);
v___x_4007_ = v___x_4003_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4011_; 
v_reuseFailAlloc_4011_ = lean_alloc_ctor(7, 2, 1);
lean_ctor_set(v_reuseFailAlloc_4011_, 0, v_kind_3999_);
lean_ctor_set(v_reuseFailAlloc_4011_, 1, v___x_4005_);
lean_ctor_set_uint8(v_reuseFailAlloc_4011_, sizeof(void*)*2, v_tight_4000_);
v___x_4007_ = v_reuseFailAlloc_4011_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; 
v___x_4008_ = lean_array_push(v_fst_3957_, v___x_4007_);
v___x_4009_ = lean_box(0);
v___x_4010_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___redArg___lam__0(v_snd_3958_, v___x_4009_, v___x_4008_);
lean_dec(v_snd_3958_);
v___y_3953_ = v___x_4010_;
goto v___jp_3952_;
}
}
}
case 8:
{
lean_object* v_marker_4013_; lean_object* v_children_4014_; lean_object* v___x_4016_; uint8_t v_isShared_4017_; uint8_t v_isSharedCheck_4025_; 
v_marker_4013_ = lean_ctor_get(v___x_3967_, 0);
v_children_4014_ = lean_ctor_get(v___x_3967_, 1);
v_isSharedCheck_4025_ = !lean_is_exclusive(v___x_3967_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_4016_ = v___x_3967_;
v_isShared_4017_ = v_isSharedCheck_4025_;
goto v_resetjp_4015_;
}
else
{
lean_inc(v_children_4014_);
lean_inc(v_marker_4013_);
lean_dec(v___x_3967_);
v___x_4016_ = lean_box(0);
v_isShared_4017_ = v_isSharedCheck_4025_;
goto v_resetjp_4015_;
}
v_resetjp_4015_:
{
lean_object* v___x_4018_; lean_object* v___x_4020_; 
v___x_4018_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs(v_s_3950_, v_children_4014_);
lean_dec_ref(v_children_4014_);
if (v_isShared_4017_ == 0)
{
lean_ctor_set(v___x_4016_, 1, v___x_4018_);
v___x_4020_ = v___x_4016_;
goto v_reusejp_4019_;
}
else
{
lean_object* v_reuseFailAlloc_4024_; 
v_reuseFailAlloc_4024_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4024_, 0, v_marker_4013_);
lean_ctor_set(v_reuseFailAlloc_4024_, 1, v___x_4018_);
v___x_4020_ = v_reuseFailAlloc_4024_;
goto v_reusejp_4019_;
}
v_reusejp_4019_:
{
lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; 
v___x_4021_ = lean_array_push(v_fst_3957_, v___x_4020_);
v___x_4022_ = lean_box(0);
v___x_4023_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___redArg___lam__0(v_snd_3958_, v___x_4022_, v___x_4021_);
lean_dec(v_snd_3958_);
v___y_3953_ = v___x_4023_;
goto v___jp_3952_;
}
}
}
default: 
{
lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; 
v___x_4026_ = lean_array_push(v_fst_3957_, v___x_3967_);
v___x_4027_ = lean_box(0);
v___x_4028_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___redArg___lam__0(v_snd_3958_, v___x_4027_, v___x_4026_);
lean_dec(v_snd_3958_);
v___y_3953_ = v___x_4028_;
goto v___jp_3952_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs(lean_object* v_s_4030_, lean_object* v_blocks_4031_){
_start:
{
lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v_fst_4034_; 
v___x_4032_ = ((lean_object*)(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs___closed__1));
v___x_4033_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___redArg(v_blocks_4031_, v_s_4030_, v___x_4032_);
v_fst_4034_ = lean_ctor_get(v___x_4033_, 0);
lean_inc(v_fst_4034_);
lean_dec_ref(v___x_4033_);
return v_fst_4034_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs___boxed(lean_object* v_s_4035_, lean_object* v_blocks_4036_){
_start:
{
lean_object* v_res_4037_; 
v_res_4037_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs(v_s_4035_, v_blocks_4036_);
lean_dec_ref(v_blocks_4036_);
lean_dec_ref(v_s_4035_);
return v_res_4037_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___redArg___boxed(lean_object* v_blocks_4038_, lean_object* v_s_4039_, lean_object* v_a_4040_){
_start:
{
lean_object* v_res_4041_; 
v_res_4041_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___redArg(v_blocks_4038_, v_s_4039_, v_a_4040_);
lean_dec_ref(v_s_4039_);
lean_dec_ref(v_blocks_4038_);
return v_res_4041_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0(lean_object* v_blocks_4042_, lean_object* v_s_4043_, lean_object* v_inst_4044_, lean_object* v_a_4045_){
_start:
{
lean_object* v___x_4046_; 
v___x_4046_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___redArg(v_blocks_4042_, v_s_4043_, v_a_4045_);
return v___x_4046_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0___boxed(lean_object* v_blocks_4047_, lean_object* v_s_4048_, lean_object* v_inst_4049_, lean_object* v_a_4050_){
_start:
{
lean_object* v_res_4051_; 
v_res_4051_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs_spec__0(v_blocks_4047_, v_s_4048_, v_inst_4049_, v_a_4050_);
lean_dec_ref(v_s_4048_);
lean_dec_ref(v_blocks_4047_);
return v_res_4051_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_4052_, lean_object* v_x_4053_){
_start:
{
if (lean_obj_tag(v_x_4053_) == 0)
{
return v_x_4052_;
}
else
{
lean_object* v_key_4054_; lean_object* v_value_4055_; lean_object* v_tail_4056_; lean_object* v___x_4058_; uint8_t v_isShared_4059_; uint8_t v_isSharedCheck_4079_; 
v_key_4054_ = lean_ctor_get(v_x_4053_, 0);
v_value_4055_ = lean_ctor_get(v_x_4053_, 1);
v_tail_4056_ = lean_ctor_get(v_x_4053_, 2);
v_isSharedCheck_4079_ = !lean_is_exclusive(v_x_4053_);
if (v_isSharedCheck_4079_ == 0)
{
v___x_4058_ = v_x_4053_;
v_isShared_4059_ = v_isSharedCheck_4079_;
goto v_resetjp_4057_;
}
else
{
lean_inc(v_tail_4056_);
lean_inc(v_value_4055_);
lean_inc(v_key_4054_);
lean_dec(v_x_4053_);
v___x_4058_ = lean_box(0);
v_isShared_4059_ = v_isSharedCheck_4079_;
goto v_resetjp_4057_;
}
v_resetjp_4057_:
{
lean_object* v___x_4060_; uint64_t v___x_4061_; uint64_t v___x_4062_; uint64_t v___x_4063_; uint64_t v_fold_4064_; uint64_t v___x_4065_; uint64_t v___x_4066_; uint64_t v___x_4067_; size_t v___x_4068_; size_t v___x_4069_; size_t v___x_4070_; size_t v___x_4071_; size_t v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4075_; 
v___x_4060_ = lean_array_get_size(v_x_4052_);
v___x_4061_ = l_Lean_Markdown_instHashableLinkLabel_hash(v_key_4054_);
v___x_4062_ = 32ULL;
v___x_4063_ = lean_uint64_shift_right(v___x_4061_, v___x_4062_);
v_fold_4064_ = lean_uint64_xor(v___x_4061_, v___x_4063_);
v___x_4065_ = 16ULL;
v___x_4066_ = lean_uint64_shift_right(v_fold_4064_, v___x_4065_);
v___x_4067_ = lean_uint64_xor(v_fold_4064_, v___x_4066_);
v___x_4068_ = lean_uint64_to_usize(v___x_4067_);
v___x_4069_ = lean_usize_of_nat(v___x_4060_);
v___x_4070_ = ((size_t)1ULL);
v___x_4071_ = lean_usize_sub(v___x_4069_, v___x_4070_);
v___x_4072_ = lean_usize_land(v___x_4068_, v___x_4071_);
v___x_4073_ = lean_array_uget_borrowed(v_x_4052_, v___x_4072_);
lean_inc(v___x_4073_);
if (v_isShared_4059_ == 0)
{
lean_ctor_set(v___x_4058_, 2, v___x_4073_);
v___x_4075_ = v___x_4058_;
goto v_reusejp_4074_;
}
else
{
lean_object* v_reuseFailAlloc_4078_; 
v_reuseFailAlloc_4078_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4078_, 0, v_key_4054_);
lean_ctor_set(v_reuseFailAlloc_4078_, 1, v_value_4055_);
lean_ctor_set(v_reuseFailAlloc_4078_, 2, v___x_4073_);
v___x_4075_ = v_reuseFailAlloc_4078_;
goto v_reusejp_4074_;
}
v_reusejp_4074_:
{
lean_object* v___x_4076_; 
v___x_4076_ = lean_array_uset(v_x_4052_, v___x_4072_, v___x_4075_);
v_x_4052_ = v___x_4076_;
v_x_4053_ = v_tail_4056_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1_spec__2___redArg(lean_object* v_i_4080_, lean_object* v_source_4081_, lean_object* v_target_4082_){
_start:
{
lean_object* v___x_4083_; uint8_t v___x_4084_; 
v___x_4083_ = lean_array_get_size(v_source_4081_);
v___x_4084_ = lean_nat_dec_lt(v_i_4080_, v___x_4083_);
if (v___x_4084_ == 0)
{
lean_dec_ref(v_source_4081_);
lean_dec(v_i_4080_);
return v_target_4082_;
}
else
{
lean_object* v_es_4085_; lean_object* v___x_4086_; lean_object* v_source_4087_; lean_object* v_target_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; 
v_es_4085_ = lean_array_fget(v_source_4081_, v_i_4080_);
v___x_4086_ = lean_box(0);
v_source_4087_ = lean_array_fset(v_source_4081_, v_i_4080_, v___x_4086_);
v_target_4088_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1_spec__2_spec__4___redArg(v_target_4082_, v_es_4085_);
v___x_4089_ = lean_unsigned_to_nat(1u);
v___x_4090_ = lean_nat_add(v_i_4080_, v___x_4089_);
lean_dec(v_i_4080_);
v_i_4080_ = v___x_4090_;
v_source_4081_ = v_source_4087_;
v_target_4082_ = v_target_4088_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1___redArg(lean_object* v_data_4092_){
_start:
{
lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v_nbuckets_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; 
v___x_4093_ = lean_array_get_size(v_data_4092_);
v___x_4094_ = lean_unsigned_to_nat(2u);
v_nbuckets_4095_ = lean_nat_mul(v___x_4093_, v___x_4094_);
v___x_4096_ = lean_unsigned_to_nat(0u);
v___x_4097_ = lean_box(0);
v___x_4098_ = lean_mk_array(v_nbuckets_4095_, v___x_4097_);
v___x_4099_ = lean_array_propagate_mark(v_data_4092_, v___x_4098_);
v___x_4100_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1_spec__2___redArg(v___x_4096_, v_data_4092_, v___x_4099_);
return v___x_4100_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__0___redArg(lean_object* v_a_4101_, lean_object* v_x_4102_){
_start:
{
if (lean_obj_tag(v_x_4102_) == 0)
{
uint8_t v___x_4103_; 
v___x_4103_ = 0;
return v___x_4103_;
}
else
{
lean_object* v_key_4104_; lean_object* v_tail_4105_; uint8_t v___x_4106_; 
v_key_4104_ = lean_ctor_get(v_x_4102_, 0);
v_tail_4105_ = lean_ctor_get(v_x_4102_, 2);
v___x_4106_ = l_Lean_Markdown_instBEqLinkLabel_beq(v_key_4104_, v_a_4101_);
if (v___x_4106_ == 0)
{
v_x_4102_ = v_tail_4105_;
goto _start;
}
else
{
return v___x_4106_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__0___redArg___boxed(lean_object* v_a_4108_, lean_object* v_x_4109_){
_start:
{
uint8_t v_res_4110_; lean_object* v_r_4111_; 
v_res_4110_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__0___redArg(v_a_4108_, v_x_4109_);
lean_dec(v_x_4109_);
lean_dec_ref(v_a_4108_);
v_r_4111_ = lean_box(v_res_4110_);
return v_r_4111_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0___redArg(lean_object* v_m_4112_, lean_object* v_a_4113_, lean_object* v_b_4114_){
_start:
{
lean_object* v_size_4115_; lean_object* v_buckets_4116_; lean_object* v___x_4117_; uint64_t v___x_4118_; uint64_t v___x_4119_; uint64_t v___x_4120_; uint64_t v_fold_4121_; uint64_t v___x_4122_; uint64_t v___x_4123_; uint64_t v___x_4124_; size_t v___x_4125_; size_t v___x_4126_; size_t v___x_4127_; size_t v___x_4128_; size_t v___x_4129_; lean_object* v_bkt_4130_; uint8_t v___x_4131_; 
v_size_4115_ = lean_ctor_get(v_m_4112_, 0);
v_buckets_4116_ = lean_ctor_get(v_m_4112_, 1);
v___x_4117_ = lean_array_get_size(v_buckets_4116_);
v___x_4118_ = l_Lean_Markdown_instHashableLinkLabel_hash(v_a_4113_);
v___x_4119_ = 32ULL;
v___x_4120_ = lean_uint64_shift_right(v___x_4118_, v___x_4119_);
v_fold_4121_ = lean_uint64_xor(v___x_4118_, v___x_4120_);
v___x_4122_ = 16ULL;
v___x_4123_ = lean_uint64_shift_right(v_fold_4121_, v___x_4122_);
v___x_4124_ = lean_uint64_xor(v_fold_4121_, v___x_4123_);
v___x_4125_ = lean_uint64_to_usize(v___x_4124_);
v___x_4126_ = lean_usize_of_nat(v___x_4117_);
v___x_4127_ = ((size_t)1ULL);
v___x_4128_ = lean_usize_sub(v___x_4126_, v___x_4127_);
v___x_4129_ = lean_usize_land(v___x_4125_, v___x_4128_);
v_bkt_4130_ = lean_array_uget_borrowed(v_buckets_4116_, v___x_4129_);
v___x_4131_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__0___redArg(v_a_4113_, v_bkt_4130_);
if (v___x_4131_ == 0)
{
lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4152_; 
lean_inc_ref(v_buckets_4116_);
lean_inc(v_size_4115_);
v_isSharedCheck_4152_ = !lean_is_exclusive(v_m_4112_);
if (v_isSharedCheck_4152_ == 0)
{
lean_object* v_unused_4153_; lean_object* v_unused_4154_; 
v_unused_4153_ = lean_ctor_get(v_m_4112_, 1);
lean_dec(v_unused_4153_);
v_unused_4154_ = lean_ctor_get(v_m_4112_, 0);
lean_dec(v_unused_4154_);
v___x_4133_ = v_m_4112_;
v_isShared_4134_ = v_isSharedCheck_4152_;
goto v_resetjp_4132_;
}
else
{
lean_dec(v_m_4112_);
v___x_4133_ = lean_box(0);
v_isShared_4134_ = v_isSharedCheck_4152_;
goto v_resetjp_4132_;
}
v_resetjp_4132_:
{
lean_object* v___x_4135_; lean_object* v_size_x27_4136_; lean_object* v___x_4137_; lean_object* v_buckets_x27_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; uint8_t v___x_4144_; 
v___x_4135_ = lean_unsigned_to_nat(1u);
v_size_x27_4136_ = lean_nat_add(v_size_4115_, v___x_4135_);
lean_dec(v_size_4115_);
lean_inc(v_bkt_4130_);
v___x_4137_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4137_, 0, v_a_4113_);
lean_ctor_set(v___x_4137_, 1, v_b_4114_);
lean_ctor_set(v___x_4137_, 2, v_bkt_4130_);
v_buckets_x27_4138_ = lean_array_uset(v_buckets_4116_, v___x_4129_, v___x_4137_);
v___x_4139_ = lean_unsigned_to_nat(4u);
v___x_4140_ = lean_nat_mul(v_size_x27_4136_, v___x_4139_);
v___x_4141_ = lean_unsigned_to_nat(3u);
v___x_4142_ = lean_nat_div(v___x_4140_, v___x_4141_);
lean_dec(v___x_4140_);
v___x_4143_ = lean_array_get_size(v_buckets_x27_4138_);
v___x_4144_ = lean_nat_dec_le(v___x_4142_, v___x_4143_);
lean_dec(v___x_4142_);
if (v___x_4144_ == 0)
{
lean_object* v_val_4145_; lean_object* v___x_4147_; 
v_val_4145_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1___redArg(v_buckets_x27_4138_);
if (v_isShared_4134_ == 0)
{
lean_ctor_set(v___x_4133_, 1, v_val_4145_);
lean_ctor_set(v___x_4133_, 0, v_size_x27_4136_);
v___x_4147_ = v___x_4133_;
goto v_reusejp_4146_;
}
else
{
lean_object* v_reuseFailAlloc_4148_; 
v_reuseFailAlloc_4148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4148_, 0, v_size_x27_4136_);
lean_ctor_set(v_reuseFailAlloc_4148_, 1, v_val_4145_);
v___x_4147_ = v_reuseFailAlloc_4148_;
goto v_reusejp_4146_;
}
v_reusejp_4146_:
{
return v___x_4147_;
}
}
else
{
lean_object* v___x_4150_; 
if (v_isShared_4134_ == 0)
{
lean_ctor_set(v___x_4133_, 1, v_buckets_x27_4138_);
lean_ctor_set(v___x_4133_, 0, v_size_x27_4136_);
v___x_4150_ = v___x_4133_;
goto v_reusejp_4149_;
}
else
{
lean_object* v_reuseFailAlloc_4151_; 
v_reuseFailAlloc_4151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4151_, 0, v_size_x27_4136_);
lean_ctor_set(v_reuseFailAlloc_4151_, 1, v_buckets_x27_4138_);
v___x_4150_ = v_reuseFailAlloc_4151_;
goto v_reusejp_4149_;
}
v_reusejp_4149_:
{
return v___x_4150_;
}
}
}
}
else
{
lean_dec(v_b_4114_);
lean_dec_ref(v_a_4113_);
return v_m_4112_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__1(lean_object* v_s_4155_, lean_object* v_as_4156_, size_t v_i_4157_, size_t v_stop_4158_, lean_object* v_b_4159_, lean_object* v___y_4160_){
_start:
{
lean_object* v_fst_4162_; lean_object* v_snd_4163_; lean_object* v___y_4168_; uint8_t v___x_4171_; 
v___x_4171_ = lean_usize_dec_eq(v_i_4157_, v_stop_4158_);
if (v___x_4171_ == 0)
{
lean_object* v___x_4172_; 
v___x_4172_ = lean_array_uget(v_as_4156_, v_i_4157_);
switch(lean_obj_tag(v___x_4172_))
{
case 9:
{
lean_object* v_m_4173_; lean_object* v___x_4175_; uint8_t v_isShared_4176_; uint8_t v_isSharedCheck_4184_; 
v_m_4173_ = lean_ctor_get(v___x_4172_, 0);
v_isSharedCheck_4184_ = !lean_is_exclusive(v___x_4172_);
if (v_isSharedCheck_4184_ == 0)
{
v___x_4175_ = v___x_4172_;
v_isShared_4176_ = v_isSharedCheck_4184_;
goto v_resetjp_4174_;
}
else
{
lean_inc(v_m_4173_);
lean_dec(v___x_4172_);
v___x_4175_ = lean_box(0);
v_isShared_4176_ = v_isSharedCheck_4184_;
goto v_resetjp_4174_;
}
v_resetjp_4174_:
{
lean_object* v_label_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4181_; 
v_label_4177_ = lean_ctor_get(v_m_4173_, 1);
v___x_4178_ = lean_box(0);
v___x_4179_ = l_Lean_Markdown_normalizeLabel(v_s_4155_, v_label_4177_);
if (v_isShared_4176_ == 0)
{
lean_ctor_set_tag(v___x_4175_, 0);
v___x_4181_ = v___x_4175_;
goto v_reusejp_4180_;
}
else
{
lean_object* v_reuseFailAlloc_4183_; 
v_reuseFailAlloc_4183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4183_, 0, v_m_4173_);
v___x_4181_ = v_reuseFailAlloc_4183_;
goto v_reusejp_4180_;
}
v_reusejp_4180_:
{
lean_object* v___x_4182_; 
v___x_4182_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0___redArg(v___y_4160_, v___x_4179_, v___x_4181_);
v_fst_4162_ = v___x_4178_;
v_snd_4163_ = v___x_4182_;
goto v___jp_4161_;
}
}
}
case 6:
{
lean_object* v_children_4185_; lean_object* v___x_4186_; 
v_children_4185_ = lean_ctor_get(v___x_4172_, 1);
lean_inc_ref(v_children_4185_);
lean_dec_ref_known(v___x_4172_, 2);
v___x_4186_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go(v_s_4155_, v_children_4185_, v___y_4160_);
lean_dec_ref(v_children_4185_);
v___y_4168_ = v___x_4186_;
goto v___jp_4167_;
}
case 7:
{
lean_object* v_items_4187_; lean_object* v___x_4188_; 
v_items_4187_ = lean_ctor_get(v___x_4172_, 1);
lean_inc_ref(v_items_4187_);
lean_dec_ref_known(v___x_4172_, 2);
v___x_4188_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go(v_s_4155_, v_items_4187_, v___y_4160_);
lean_dec_ref(v_items_4187_);
v___y_4168_ = v___x_4188_;
goto v___jp_4167_;
}
case 8:
{
lean_object* v_children_4189_; lean_object* v___x_4190_; 
v_children_4189_ = lean_ctor_get(v___x_4172_, 1);
lean_inc_ref(v_children_4189_);
lean_dec_ref_known(v___x_4172_, 2);
v___x_4190_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go(v_s_4155_, v_children_4189_, v___y_4160_);
lean_dec_ref(v_children_4189_);
v___y_4168_ = v___x_4190_;
goto v___jp_4167_;
}
default: 
{
lean_object* v___x_4191_; 
lean_dec(v___x_4172_);
v___x_4191_ = lean_box(0);
v_fst_4162_ = v___x_4191_;
v_snd_4163_ = v___y_4160_;
goto v___jp_4161_;
}
}
}
else
{
lean_object* v___x_4192_; 
v___x_4192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4192_, 0, v_b_4159_);
lean_ctor_set(v___x_4192_, 1, v___y_4160_);
return v___x_4192_;
}
v___jp_4161_:
{
size_t v___x_4164_; size_t v___x_4165_; 
v___x_4164_ = ((size_t)1ULL);
v___x_4165_ = lean_usize_add(v_i_4157_, v___x_4164_);
v_i_4157_ = v___x_4165_;
v_b_4159_ = v_fst_4162_;
v___y_4160_ = v_snd_4163_;
goto _start;
}
v___jp_4167_:
{
lean_object* v_fst_4169_; lean_object* v_snd_4170_; 
v_fst_4169_ = lean_ctor_get(v___y_4168_, 0);
lean_inc(v_fst_4169_);
v_snd_4170_ = lean_ctor_get(v___y_4168_, 1);
lean_inc(v_snd_4170_);
lean_dec_ref(v___y_4168_);
v_fst_4162_ = v_fst_4169_;
v_snd_4163_ = v_snd_4170_;
goto v___jp_4161_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go(lean_object* v_s_4193_, lean_object* v_bs_4194_, lean_object* v_a_4195_){
_start:
{
lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; uint8_t v___x_4199_; 
v___x_4196_ = lean_unsigned_to_nat(0u);
v___x_4197_ = lean_array_get_size(v_bs_4194_);
v___x_4198_ = lean_box(0);
v___x_4199_ = lean_nat_dec_lt(v___x_4196_, v___x_4197_);
if (v___x_4199_ == 0)
{
lean_object* v___x_4200_; 
v___x_4200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4200_, 0, v___x_4198_);
lean_ctor_set(v___x_4200_, 1, v_a_4195_);
return v___x_4200_;
}
else
{
size_t v___x_4201_; size_t v___x_4202_; lean_object* v___x_4203_; 
v___x_4201_ = ((size_t)0ULL);
v___x_4202_ = lean_usize_of_nat(v___x_4197_);
v___x_4203_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__1(v_s_4193_, v_bs_4194_, v___x_4201_, v___x_4202_, v___x_4198_, v_a_4195_);
return v___x_4203_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go___boxed(lean_object* v_s_4204_, lean_object* v_bs_4205_, lean_object* v_a_4206_){
_start:
{
lean_object* v_res_4207_; 
v_res_4207_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go(v_s_4204_, v_bs_4205_, v_a_4206_);
lean_dec_ref(v_bs_4205_);
lean_dec_ref(v_s_4204_);
return v_res_4207_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__1___boxed(lean_object* v_s_4208_, lean_object* v_as_4209_, lean_object* v_i_4210_, lean_object* v_stop_4211_, lean_object* v_b_4212_, lean_object* v___y_4213_){
_start:
{
size_t v_i_boxed_4214_; size_t v_stop_boxed_4215_; lean_object* v_res_4216_; 
v_i_boxed_4214_ = lean_unbox_usize(v_i_4210_);
lean_dec(v_i_4210_);
v_stop_boxed_4215_ = lean_unbox_usize(v_stop_4211_);
lean_dec(v_stop_4211_);
v_res_4216_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__1(v_s_4208_, v_as_4209_, v_i_boxed_4214_, v_stop_boxed_4215_, v_b_4212_, v___y_4213_);
lean_dec_ref(v_as_4209_);
lean_dec_ref(v_s_4208_);
return v_res_4216_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0(lean_object* v_00_u03b2_4217_, lean_object* v_m_4218_, lean_object* v_a_4219_, lean_object* v_b_4220_){
_start:
{
lean_object* v___x_4221_; 
v___x_4221_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0___redArg(v_m_4218_, v_a_4219_, v_b_4220_);
return v___x_4221_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__0(lean_object* v_00_u03b2_4222_, lean_object* v_a_4223_, lean_object* v_x_4224_){
_start:
{
uint8_t v___x_4225_; 
v___x_4225_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__0___redArg(v_a_4223_, v_x_4224_);
return v___x_4225_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4226_, lean_object* v_a_4227_, lean_object* v_x_4228_){
_start:
{
uint8_t v_res_4229_; lean_object* v_r_4230_; 
v_res_4229_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__0(v_00_u03b2_4226_, v_a_4227_, v_x_4228_);
lean_dec(v_x_4228_);
lean_dec_ref(v_a_4227_);
v_r_4230_ = lean_box(v_res_4229_);
return v_r_4230_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1(lean_object* v_00_u03b2_4231_, lean_object* v_data_4232_){
_start:
{
lean_object* v___x_4233_; 
v___x_4233_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1___redArg(v_data_4232_);
return v___x_4233_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_4234_, lean_object* v_i_4235_, lean_object* v_source_4236_, lean_object* v_target_4237_){
_start:
{
lean_object* v___x_4238_; 
v___x_4238_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1_spec__2___redArg(v_i_4235_, v_source_4236_, v_target_4237_);
return v___x_4238_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_4239_, lean_object* v_x_4240_, lean_object* v_x_4241_){
_start:
{
lean_object* v___x_4242_; 
v___x_4242_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1_spec__2_spec__4___redArg(v_x_4240_, v_x_4241_);
return v___x_4242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4_spec__5___redArg(lean_object* v_hi_4243_, lean_object* v_pivot_4244_, lean_object* v_as_4245_, lean_object* v_i_4246_, lean_object* v_k_4247_){
_start:
{
uint8_t v___x_4248_; 
v___x_4248_ = lean_nat_dec_lt(v_k_4247_, v_hi_4243_);
if (v___x_4248_ == 0)
{
lean_object* v___x_4249_; lean_object* v___x_4250_; 
lean_dec(v_k_4247_);
v___x_4249_ = lean_array_fswap(v_as_4245_, v_i_4246_, v_hi_4243_);
v___x_4250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4250_, 0, v_i_4246_);
lean_ctor_set(v___x_4250_, 1, v___x_4249_);
return v___x_4250_;
}
else
{
lean_object* v___x_4251_; lean_object* v_fst_4252_; lean_object* v_fst_4253_; uint8_t v___x_4254_; 
v___x_4251_ = lean_array_fget_borrowed(v_as_4245_, v_k_4247_);
v_fst_4252_ = lean_ctor_get(v___x_4251_, 0);
v_fst_4253_ = lean_ctor_get(v_pivot_4244_, 0);
v___x_4254_ = lean_string_dec_lt(v_fst_4252_, v_fst_4253_);
if (v___x_4254_ == 0)
{
lean_object* v___x_4255_; lean_object* v___x_4256_; 
v___x_4255_ = lean_unsigned_to_nat(1u);
v___x_4256_ = lean_nat_add(v_k_4247_, v___x_4255_);
lean_dec(v_k_4247_);
v_k_4247_ = v___x_4256_;
goto _start;
}
else
{
lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; 
v___x_4258_ = lean_array_fswap(v_as_4245_, v_i_4246_, v_k_4247_);
v___x_4259_ = lean_unsigned_to_nat(1u);
v___x_4260_ = lean_nat_add(v_i_4246_, v___x_4259_);
lean_dec(v_i_4246_);
v___x_4261_ = lean_nat_add(v_k_4247_, v___x_4259_);
lean_dec(v_k_4247_);
v_as_4245_ = v___x_4258_;
v_i_4246_ = v___x_4260_;
v_k_4247_ = v___x_4261_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4_spec__5___redArg___boxed(lean_object* v_hi_4263_, lean_object* v_pivot_4264_, lean_object* v_as_4265_, lean_object* v_i_4266_, lean_object* v_k_4267_){
_start:
{
lean_object* v_res_4268_; 
v_res_4268_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4_spec__5___redArg(v_hi_4263_, v_pivot_4264_, v_as_4265_, v_i_4266_, v_k_4267_);
lean_dec_ref(v_pivot_4264_);
lean_dec(v_hi_4263_);
return v_res_4268_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4___redArg___lam__0(lean_object* v_x1_4269_, lean_object* v_x2_4270_){
_start:
{
lean_object* v_fst_4271_; lean_object* v_fst_4272_; uint8_t v___x_4273_; 
v_fst_4271_ = lean_ctor_get(v_x1_4269_, 0);
v_fst_4272_ = lean_ctor_get(v_x2_4270_, 0);
v___x_4273_ = lean_string_dec_lt(v_fst_4271_, v_fst_4272_);
return v___x_4273_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4___redArg___lam__0___boxed(lean_object* v_x1_4274_, lean_object* v_x2_4275_){
_start:
{
uint8_t v_res_4276_; lean_object* v_r_4277_; 
v_res_4276_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4___redArg___lam__0(v_x1_4274_, v_x2_4275_);
lean_dec_ref(v_x2_4275_);
lean_dec_ref(v_x1_4274_);
v_r_4277_ = lean_box(v_res_4276_);
return v_r_4277_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4___redArg(lean_object* v_n_4278_, lean_object* v_as_4279_, lean_object* v_lo_4280_, lean_object* v_hi_4281_){
_start:
{
lean_object* v___y_4283_; uint8_t v___x_4293_; 
v___x_4293_ = lean_nat_dec_lt(v_lo_4280_, v_hi_4281_);
if (v___x_4293_ == 0)
{
lean_dec(v_lo_4280_);
return v_as_4279_;
}
else
{
lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v_mid_4296_; lean_object* v___y_4298_; lean_object* v___y_4304_; lean_object* v___x_4309_; lean_object* v___x_4310_; uint8_t v___x_4311_; 
v___x_4294_ = lean_nat_add(v_lo_4280_, v_hi_4281_);
v___x_4295_ = lean_unsigned_to_nat(1u);
v_mid_4296_ = lean_nat_shiftr(v___x_4294_, v___x_4295_);
lean_dec(v___x_4294_);
v___x_4309_ = lean_array_fget_borrowed(v_as_4279_, v_mid_4296_);
v___x_4310_ = lean_array_fget_borrowed(v_as_4279_, v_lo_4280_);
v___x_4311_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4___redArg___lam__0(v___x_4309_, v___x_4310_);
if (v___x_4311_ == 0)
{
v___y_4304_ = v_as_4279_;
goto v___jp_4303_;
}
else
{
lean_object* v___x_4312_; 
v___x_4312_ = lean_array_fswap(v_as_4279_, v_lo_4280_, v_mid_4296_);
v___y_4304_ = v___x_4312_;
goto v___jp_4303_;
}
v___jp_4297_:
{
lean_object* v___x_4299_; lean_object* v___x_4300_; uint8_t v___x_4301_; 
v___x_4299_ = lean_array_fget_borrowed(v___y_4298_, v_mid_4296_);
v___x_4300_ = lean_array_fget_borrowed(v___y_4298_, v_hi_4281_);
v___x_4301_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4___redArg___lam__0(v___x_4299_, v___x_4300_);
if (v___x_4301_ == 0)
{
lean_dec(v_mid_4296_);
v___y_4283_ = v___y_4298_;
goto v___jp_4282_;
}
else
{
lean_object* v___x_4302_; 
v___x_4302_ = lean_array_fswap(v___y_4298_, v_mid_4296_, v_hi_4281_);
lean_dec(v_mid_4296_);
v___y_4283_ = v___x_4302_;
goto v___jp_4282_;
}
}
v___jp_4303_:
{
lean_object* v___x_4305_; lean_object* v___x_4306_; uint8_t v___x_4307_; 
v___x_4305_ = lean_array_fget_borrowed(v___y_4304_, v_hi_4281_);
v___x_4306_ = lean_array_fget_borrowed(v___y_4304_, v_lo_4280_);
v___x_4307_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4___redArg___lam__0(v___x_4305_, v___x_4306_);
if (v___x_4307_ == 0)
{
v___y_4298_ = v___y_4304_;
goto v___jp_4297_;
}
else
{
lean_object* v___x_4308_; 
v___x_4308_ = lean_array_fswap(v___y_4304_, v_lo_4280_, v_hi_4281_);
v___y_4298_ = v___x_4308_;
goto v___jp_4297_;
}
}
}
v___jp_4282_:
{
lean_object* v_pivot_4284_; lean_object* v___x_4285_; lean_object* v_fst_4286_; lean_object* v_snd_4287_; uint8_t v___x_4288_; 
v_pivot_4284_ = lean_array_fget(v___y_4283_, v_hi_4281_);
lean_inc_n(v_lo_4280_, 2);
v___x_4285_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4_spec__5___redArg(v_hi_4281_, v_pivot_4284_, v___y_4283_, v_lo_4280_, v_lo_4280_);
lean_dec(v_pivot_4284_);
v_fst_4286_ = lean_ctor_get(v___x_4285_, 0);
lean_inc(v_fst_4286_);
v_snd_4287_ = lean_ctor_get(v___x_4285_, 1);
lean_inc(v_snd_4287_);
lean_dec_ref(v___x_4285_);
v___x_4288_ = lean_nat_dec_le(v_hi_4281_, v_fst_4286_);
if (v___x_4288_ == 0)
{
lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; 
v___x_4289_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4___redArg(v_n_4278_, v_snd_4287_, v_lo_4280_, v_fst_4286_);
v___x_4290_ = lean_unsigned_to_nat(1u);
v___x_4291_ = lean_nat_add(v_fst_4286_, v___x_4290_);
lean_dec(v_fst_4286_);
v_as_4279_ = v___x_4289_;
v_lo_4280_ = v___x_4291_;
goto _start;
}
else
{
lean_dec(v_fst_4286_);
lean_dec(v_lo_4280_);
return v_snd_4287_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4___redArg___boxed(lean_object* v_n_4313_, lean_object* v_as_4314_, lean_object* v_lo_4315_, lean_object* v_hi_4316_){
_start:
{
lean_object* v_res_4317_; 
v_res_4317_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4___redArg(v_n_4313_, v_as_4314_, v_lo_4315_, v_hi_4316_);
lean_dec(v_hi_4316_);
lean_dec(v_n_4313_);
return v_res_4317_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Markdown_buildRefTable_spec__5(lean_object* v_x_4318_, lean_object* v_x_4319_){
_start:
{
if (lean_obj_tag(v_x_4319_) == 0)
{
return v_x_4318_;
}
else
{
lean_object* v_key_4320_; lean_object* v_value_4321_; lean_object* v_tail_4322_; lean_object* v___x_4323_; lean_object* v___x_4324_; 
v_key_4320_ = lean_ctor_get(v_x_4319_, 0);
v_value_4321_ = lean_ctor_get(v_x_4319_, 1);
v_tail_4322_ = lean_ctor_get(v_x_4319_, 2);
lean_inc(v_value_4321_);
lean_inc(v_key_4320_);
v___x_4323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4323_, 0, v_key_4320_);
lean_ctor_set(v___x_4323_, 1, v_value_4321_);
v___x_4324_ = lean_array_push(v_x_4318_, v___x_4323_);
v_x_4318_ = v___x_4324_;
v_x_4319_ = v_tail_4322_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Markdown_buildRefTable_spec__5___boxed(lean_object* v_x_4326_, lean_object* v_x_4327_){
_start:
{
lean_object* v_res_4328_; 
v_res_4328_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Markdown_buildRefTable_spec__5(v_x_4326_, v_x_4327_);
lean_dec(v_x_4327_);
return v_res_4328_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Markdown_buildRefTable_spec__6(lean_object* v_as_4329_, size_t v_i_4330_, size_t v_stop_4331_, lean_object* v_b_4332_){
_start:
{
uint8_t v___x_4333_; 
v___x_4333_ = lean_usize_dec_eq(v_i_4330_, v_stop_4331_);
if (v___x_4333_ == 0)
{
lean_object* v___x_4334_; lean_object* v___x_4335_; size_t v___x_4336_; size_t v___x_4337_; 
v___x_4334_ = lean_array_uget_borrowed(v_as_4329_, v_i_4330_);
v___x_4335_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Markdown_buildRefTable_spec__5(v_b_4332_, v___x_4334_);
v___x_4336_ = ((size_t)1ULL);
v___x_4337_ = lean_usize_add(v_i_4330_, v___x_4336_);
v_i_4330_ = v___x_4337_;
v_b_4332_ = v___x_4335_;
goto _start;
}
else
{
return v_b_4332_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Markdown_buildRefTable_spec__6___boxed(lean_object* v_as_4339_, lean_object* v_i_4340_, lean_object* v_stop_4341_, lean_object* v_b_4342_){
_start:
{
size_t v_i_boxed_4343_; size_t v_stop_boxed_4344_; lean_object* v_res_4345_; 
v_i_boxed_4343_ = lean_unbox_usize(v_i_4340_);
lean_dec(v_i_4340_);
v_stop_boxed_4344_ = lean_unbox_usize(v_stop_4341_);
lean_dec(v_stop_4341_);
v_res_4345_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Markdown_buildRefTable_spec__6(v_as_4339_, v_i_boxed_4343_, v_stop_boxed_4344_, v_b_4342_);
lean_dec_ref(v_as_4339_);
return v_res_4345_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Markdown_buildRefTable_spec__3(lean_object* v_as_4346_, size_t v_i_4347_, size_t v_stop_4348_, lean_object* v_b_4349_){
_start:
{
uint8_t v___x_4350_; 
v___x_4350_ = lean_usize_dec_eq(v_i_4347_, v_stop_4348_);
if (v___x_4350_ == 0)
{
lean_object* v___x_4351_; lean_object* v_fst_4352_; lean_object* v_snd_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; size_t v___x_4356_; size_t v___x_4357_; 
v___x_4351_ = lean_array_uget_borrowed(v_as_4346_, v_i_4347_);
v_fst_4352_ = lean_ctor_get(v___x_4351_, 0);
v_snd_4353_ = lean_ctor_get(v___x_4351_, 1);
lean_inc(v_fst_4352_);
v___x_4354_ = l_Lean_Markdown_LinkLabel_ofString(v_fst_4352_);
lean_inc(v_snd_4353_);
v___x_4355_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0___redArg(v_b_4349_, v___x_4354_, v_snd_4353_);
v___x_4356_ = ((size_t)1ULL);
v___x_4357_ = lean_usize_add(v_i_4347_, v___x_4356_);
v_i_4347_ = v___x_4357_;
v_b_4349_ = v___x_4355_;
goto _start;
}
else
{
return v_b_4349_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Markdown_buildRefTable_spec__3___boxed(lean_object* v_as_4359_, lean_object* v_i_4360_, lean_object* v_stop_4361_, lean_object* v_b_4362_){
_start:
{
size_t v_i_boxed_4363_; size_t v_stop_boxed_4364_; lean_object* v_res_4365_; 
v_i_boxed_4363_ = lean_unbox_usize(v_i_4360_);
lean_dec(v_i_4360_);
v_stop_boxed_4364_ = lean_unbox_usize(v_stop_4361_);
lean_dec(v_stop_4361_);
v_res_4365_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Markdown_buildRefTable_spec__3(v_as_4359_, v_i_boxed_4363_, v_stop_boxed_4364_, v_b_4362_);
lean_dec_ref(v_as_4359_);
return v_res_4365_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Markdown_buildRefTable_spec__0_spec__0___redArg(lean_object* v_a_4366_, lean_object* v_b_4367_, lean_object* v_x_4368_){
_start:
{
if (lean_obj_tag(v_x_4368_) == 0)
{
lean_dec(v_b_4367_);
lean_dec_ref(v_a_4366_);
return v_x_4368_;
}
else
{
lean_object* v_key_4369_; lean_object* v_value_4370_; lean_object* v_tail_4371_; lean_object* v___x_4373_; uint8_t v_isShared_4374_; uint8_t v_isSharedCheck_4383_; 
v_key_4369_ = lean_ctor_get(v_x_4368_, 0);
v_value_4370_ = lean_ctor_get(v_x_4368_, 1);
v_tail_4371_ = lean_ctor_get(v_x_4368_, 2);
v_isSharedCheck_4383_ = !lean_is_exclusive(v_x_4368_);
if (v_isSharedCheck_4383_ == 0)
{
v___x_4373_ = v_x_4368_;
v_isShared_4374_ = v_isSharedCheck_4383_;
goto v_resetjp_4372_;
}
else
{
lean_inc(v_tail_4371_);
lean_inc(v_value_4370_);
lean_inc(v_key_4369_);
lean_dec(v_x_4368_);
v___x_4373_ = lean_box(0);
v_isShared_4374_ = v_isSharedCheck_4383_;
goto v_resetjp_4372_;
}
v_resetjp_4372_:
{
uint8_t v___x_4375_; 
v___x_4375_ = l_Lean_Markdown_instBEqLinkLabel_beq(v_key_4369_, v_a_4366_);
if (v___x_4375_ == 0)
{
lean_object* v___x_4376_; lean_object* v___x_4378_; 
v___x_4376_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Markdown_buildRefTable_spec__0_spec__0___redArg(v_a_4366_, v_b_4367_, v_tail_4371_);
if (v_isShared_4374_ == 0)
{
lean_ctor_set(v___x_4373_, 2, v___x_4376_);
v___x_4378_ = v___x_4373_;
goto v_reusejp_4377_;
}
else
{
lean_object* v_reuseFailAlloc_4379_; 
v_reuseFailAlloc_4379_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4379_, 0, v_key_4369_);
lean_ctor_set(v_reuseFailAlloc_4379_, 1, v_value_4370_);
lean_ctor_set(v_reuseFailAlloc_4379_, 2, v___x_4376_);
v___x_4378_ = v_reuseFailAlloc_4379_;
goto v_reusejp_4377_;
}
v_reusejp_4377_:
{
return v___x_4378_;
}
}
else
{
lean_object* v___x_4381_; 
lean_dec(v_value_4370_);
lean_dec(v_key_4369_);
if (v_isShared_4374_ == 0)
{
lean_ctor_set(v___x_4373_, 1, v_b_4367_);
lean_ctor_set(v___x_4373_, 0, v_a_4366_);
v___x_4381_ = v___x_4373_;
goto v_reusejp_4380_;
}
else
{
lean_object* v_reuseFailAlloc_4382_; 
v_reuseFailAlloc_4382_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4382_, 0, v_a_4366_);
lean_ctor_set(v_reuseFailAlloc_4382_, 1, v_b_4367_);
lean_ctor_set(v_reuseFailAlloc_4382_, 2, v_tail_4371_);
v___x_4381_ = v_reuseFailAlloc_4382_;
goto v_reusejp_4380_;
}
v_reusejp_4380_:
{
return v___x_4381_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Markdown_buildRefTable_spec__0___redArg(lean_object* v_m_4384_, lean_object* v_a_4385_, lean_object* v_b_4386_){
_start:
{
lean_object* v_size_4387_; lean_object* v_buckets_4388_; lean_object* v___x_4390_; uint8_t v_isShared_4391_; uint8_t v_isSharedCheck_4431_; 
v_size_4387_ = lean_ctor_get(v_m_4384_, 0);
v_buckets_4388_ = lean_ctor_get(v_m_4384_, 1);
v_isSharedCheck_4431_ = !lean_is_exclusive(v_m_4384_);
if (v_isSharedCheck_4431_ == 0)
{
v___x_4390_ = v_m_4384_;
v_isShared_4391_ = v_isSharedCheck_4431_;
goto v_resetjp_4389_;
}
else
{
lean_inc(v_buckets_4388_);
lean_inc(v_size_4387_);
lean_dec(v_m_4384_);
v___x_4390_ = lean_box(0);
v_isShared_4391_ = v_isSharedCheck_4431_;
goto v_resetjp_4389_;
}
v_resetjp_4389_:
{
lean_object* v___x_4392_; uint64_t v___x_4393_; uint64_t v___x_4394_; uint64_t v___x_4395_; uint64_t v_fold_4396_; uint64_t v___x_4397_; uint64_t v___x_4398_; uint64_t v___x_4399_; size_t v___x_4400_; size_t v___x_4401_; size_t v___x_4402_; size_t v___x_4403_; size_t v___x_4404_; lean_object* v_bkt_4405_; uint8_t v___x_4406_; 
v___x_4392_ = lean_array_get_size(v_buckets_4388_);
v___x_4393_ = l_Lean_Markdown_instHashableLinkLabel_hash(v_a_4385_);
v___x_4394_ = 32ULL;
v___x_4395_ = lean_uint64_shift_right(v___x_4393_, v___x_4394_);
v_fold_4396_ = lean_uint64_xor(v___x_4393_, v___x_4395_);
v___x_4397_ = 16ULL;
v___x_4398_ = lean_uint64_shift_right(v_fold_4396_, v___x_4397_);
v___x_4399_ = lean_uint64_xor(v_fold_4396_, v___x_4398_);
v___x_4400_ = lean_uint64_to_usize(v___x_4399_);
v___x_4401_ = lean_usize_of_nat(v___x_4392_);
v___x_4402_ = ((size_t)1ULL);
v___x_4403_ = lean_usize_sub(v___x_4401_, v___x_4402_);
v___x_4404_ = lean_usize_land(v___x_4400_, v___x_4403_);
v_bkt_4405_ = lean_array_uget_borrowed(v_buckets_4388_, v___x_4404_);
v___x_4406_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__0___redArg(v_a_4385_, v_bkt_4405_);
if (v___x_4406_ == 0)
{
lean_object* v___x_4407_; lean_object* v_size_x27_4408_; lean_object* v___x_4409_; lean_object* v_buckets_x27_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; uint8_t v___x_4416_; 
v___x_4407_ = lean_unsigned_to_nat(1u);
v_size_x27_4408_ = lean_nat_add(v_size_4387_, v___x_4407_);
lean_dec(v_size_4387_);
lean_inc(v_bkt_4405_);
v___x_4409_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4409_, 0, v_a_4385_);
lean_ctor_set(v___x_4409_, 1, v_b_4386_);
lean_ctor_set(v___x_4409_, 2, v_bkt_4405_);
v_buckets_x27_4410_ = lean_array_uset(v_buckets_4388_, v___x_4404_, v___x_4409_);
v___x_4411_ = lean_unsigned_to_nat(4u);
v___x_4412_ = lean_nat_mul(v_size_x27_4408_, v___x_4411_);
v___x_4413_ = lean_unsigned_to_nat(3u);
v___x_4414_ = lean_nat_div(v___x_4412_, v___x_4413_);
lean_dec(v___x_4412_);
v___x_4415_ = lean_array_get_size(v_buckets_x27_4410_);
v___x_4416_ = lean_nat_dec_le(v___x_4414_, v___x_4415_);
lean_dec(v___x_4414_);
if (v___x_4416_ == 0)
{
lean_object* v_val_4417_; lean_object* v___x_4419_; 
v_val_4417_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0_spec__1___redArg(v_buckets_x27_4410_);
if (v_isShared_4391_ == 0)
{
lean_ctor_set(v___x_4390_, 1, v_val_4417_);
lean_ctor_set(v___x_4390_, 0, v_size_x27_4408_);
v___x_4419_ = v___x_4390_;
goto v_reusejp_4418_;
}
else
{
lean_object* v_reuseFailAlloc_4420_; 
v_reuseFailAlloc_4420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4420_, 0, v_size_x27_4408_);
lean_ctor_set(v_reuseFailAlloc_4420_, 1, v_val_4417_);
v___x_4419_ = v_reuseFailAlloc_4420_;
goto v_reusejp_4418_;
}
v_reusejp_4418_:
{
return v___x_4419_;
}
}
else
{
lean_object* v___x_4422_; 
if (v_isShared_4391_ == 0)
{
lean_ctor_set(v___x_4390_, 1, v_buckets_x27_4410_);
lean_ctor_set(v___x_4390_, 0, v_size_x27_4408_);
v___x_4422_ = v___x_4390_;
goto v_reusejp_4421_;
}
else
{
lean_object* v_reuseFailAlloc_4423_; 
v_reuseFailAlloc_4423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4423_, 0, v_size_x27_4408_);
lean_ctor_set(v_reuseFailAlloc_4423_, 1, v_buckets_x27_4410_);
v___x_4422_ = v_reuseFailAlloc_4423_;
goto v_reusejp_4421_;
}
v_reusejp_4421_:
{
return v___x_4422_;
}
}
}
else
{
lean_object* v___x_4424_; lean_object* v_buckets_x27_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4429_; 
lean_inc(v_bkt_4405_);
v___x_4424_ = lean_box(0);
v_buckets_x27_4425_ = lean_array_uset(v_buckets_4388_, v___x_4404_, v___x_4424_);
v___x_4426_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Markdown_buildRefTable_spec__0_spec__0___redArg(v_a_4385_, v_b_4386_, v_bkt_4405_);
v___x_4427_ = lean_array_uset(v_buckets_x27_4425_, v___x_4404_, v___x_4426_);
if (v_isShared_4391_ == 0)
{
lean_ctor_set(v___x_4390_, 1, v___x_4427_);
v___x_4429_ = v___x_4390_;
goto v_reusejp_4428_;
}
else
{
lean_object* v_reuseFailAlloc_4430_; 
v_reuseFailAlloc_4430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4430_, 0, v_size_4387_);
lean_ctor_set(v_reuseFailAlloc_4430_, 1, v___x_4427_);
v___x_4429_ = v_reuseFailAlloc_4430_;
goto v_reusejp_4428_;
}
v_reusejp_4428_:
{
return v___x_4429_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Markdown_buildRefTable_spec__1___redArg(lean_object* v_x_4432_, lean_object* v_x_4433_){
_start:
{
if (lean_obj_tag(v_x_4433_) == 0)
{
return v_x_4432_;
}
else
{
lean_object* v_value_4434_; uint8_t v_overrideDocument_4435_; 
v_value_4434_ = lean_ctor_get(v_x_4433_, 1);
lean_inc(v_value_4434_);
v_overrideDocument_4435_ = lean_ctor_get_uint8(v_value_4434_, sizeof(void*)*2);
if (v_overrideDocument_4435_ == 0)
{
lean_object* v_key_4436_; lean_object* v_tail_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; 
v_key_4436_ = lean_ctor_get(v_x_4433_, 0);
lean_inc(v_key_4436_);
v_tail_4437_ = lean_ctor_get(v_x_4433_, 2);
lean_inc(v_tail_4437_);
lean_dec_ref_known(v_x_4433_, 3);
v___x_4438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4438_, 0, v_value_4434_);
v___x_4439_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go_spec__0___redArg(v_x_4432_, v_key_4436_, v___x_4438_);
v_x_4432_ = v___x_4439_;
v_x_4433_ = v_tail_4437_;
goto _start;
}
else
{
lean_object* v_key_4441_; lean_object* v_tail_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; 
v_key_4441_ = lean_ctor_get(v_x_4433_, 0);
lean_inc(v_key_4441_);
v_tail_4442_ = lean_ctor_get(v_x_4433_, 2);
lean_inc(v_tail_4442_);
lean_dec_ref_known(v_x_4433_, 3);
v___x_4443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4443_, 0, v_value_4434_);
v___x_4444_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Markdown_buildRefTable_spec__0___redArg(v_x_4432_, v_key_4441_, v___x_4443_);
v_x_4432_ = v___x_4444_;
v_x_4433_ = v_tail_4442_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Markdown_buildRefTable_spec__2(lean_object* v_s_4446_, lean_object* v_as_4447_, size_t v_i_4448_, size_t v_stop_4449_, lean_object* v_b_4450_){
_start:
{
uint8_t v___x_4451_; 
v___x_4451_ = lean_usize_dec_eq(v_i_4448_, v_stop_4449_);
if (v___x_4451_ == 0)
{
lean_object* v___x_4452_; lean_object* v___x_4453_; size_t v___x_4454_; size_t v___x_4455_; 
v___x_4452_ = lean_array_uget_borrowed(v_as_4447_, v_i_4448_);
lean_inc(v___x_4452_);
v___x_4453_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Markdown_buildRefTable_spec__1___redArg(v_b_4450_, v___x_4452_);
v___x_4454_ = ((size_t)1ULL);
v___x_4455_ = lean_usize_add(v_i_4448_, v___x_4454_);
v_i_4448_ = v___x_4455_;
v_b_4450_ = v___x_4453_;
goto _start;
}
else
{
return v_b_4450_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Markdown_buildRefTable_spec__2___boxed(lean_object* v_s_4457_, lean_object* v_as_4458_, lean_object* v_i_4459_, lean_object* v_stop_4460_, lean_object* v_b_4461_){
_start:
{
size_t v_i_boxed_4462_; size_t v_stop_boxed_4463_; lean_object* v_res_4464_; 
v_i_boxed_4462_ = lean_unbox_usize(v_i_4459_);
lean_dec(v_i_4459_);
v_stop_boxed_4463_ = lean_unbox_usize(v_stop_4460_);
lean_dec(v_stop_4460_);
v_res_4464_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Markdown_buildRefTable_spec__2(v_s_4457_, v_as_4458_, v_i_boxed_4462_, v_stop_boxed_4463_, v_b_4461_);
lean_dec_ref(v_as_4458_);
lean_dec_ref(v_s_4457_);
return v_res_4464_;
}
}
static lean_object* _init_l_Lean_Markdown_buildRefTable___closed__0(void){
_start:
{
lean_object* v___x_4465_; lean_object* v___x_4466_; lean_object* v___x_4467_; 
v___x_4465_ = lean_box(0);
v___x_4466_ = lean_unsigned_to_nat(16u);
v___x_4467_ = lean_mk_array(v___x_4466_, v___x_4465_);
return v___x_4467_;
}
}
static lean_object* _init_l_Lean_Markdown_buildRefTable___closed__1(void){
_start:
{
lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; 
v___x_4468_ = lean_obj_once(&l_Lean_Markdown_buildRefTable___closed__0, &l_Lean_Markdown_buildRefTable___closed__0_once, _init_l_Lean_Markdown_buildRefTable___closed__0);
v___x_4469_ = lean_unsigned_to_nat(0u);
v___x_4470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4470_, 0, v___x_4469_);
lean_ctor_set(v___x_4470_, 1, v___x_4468_);
return v___x_4470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Markdown_buildRefTable(lean_object* v_s_4471_, lean_object* v_blocks_4472_, lean_object* v_externalRefs_4473_){
_start:
{
lean_object* v___x_4474_; lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v_snd_4478_; lean_object* v_buckets_4480_; lean_object* v___y_4487_; lean_object* v___y_4495_; lean_object* v___y_4496_; lean_object* v___y_4497_; lean_object* v___y_4498_; lean_object* v___y_4501_; lean_object* v___y_4502_; lean_object* v___y_4503_; lean_object* v___y_4504_; lean_object* v___y_4507_; lean_object* v_size_4513_; lean_object* v_buckets_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; uint8_t v___x_4517_; 
v___x_4474_ = lean_unsigned_to_nat(0u);
v___x_4475_ = lean_obj_once(&l_Lean_Markdown_buildRefTable___closed__0, &l_Lean_Markdown_buildRefTable___closed__0_once, _init_l_Lean_Markdown_buildRefTable___closed__0);
v___x_4476_ = lean_obj_once(&l_Lean_Markdown_buildRefTable___closed__1, &l_Lean_Markdown_buildRefTable___closed__1_once, _init_l_Lean_Markdown_buildRefTable___closed__1);
v___x_4477_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_buildRefTable_go(v_s_4471_, v_blocks_4472_, v___x_4476_);
v_snd_4478_ = lean_ctor_get(v___x_4477_, 1);
lean_inc(v_snd_4478_);
lean_dec_ref(v___x_4477_);
v_size_4513_ = lean_ctor_get(v_externalRefs_4473_, 0);
v_buckets_4514_ = lean_ctor_get(v_externalRefs_4473_, 1);
v___x_4515_ = lean_mk_empty_array_with_capacity(v_size_4513_);
v___x_4516_ = lean_array_get_size(v_buckets_4514_);
v___x_4517_ = lean_nat_dec_lt(v___x_4474_, v___x_4516_);
if (v___x_4517_ == 0)
{
v___y_4507_ = v___x_4515_;
goto v___jp_4506_;
}
else
{
size_t v___x_4518_; size_t v___x_4519_; lean_object* v___x_4520_; 
v___x_4518_ = ((size_t)0ULL);
v___x_4519_ = lean_usize_of_nat(v___x_4516_);
v___x_4520_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Markdown_buildRefTable_spec__6(v_buckets_4514_, v___x_4518_, v___x_4519_, v___x_4515_);
v___y_4507_ = v___x_4520_;
goto v___jp_4506_;
}
v___jp_4479_:
{
lean_object* v___x_4481_; uint8_t v___x_4482_; 
v___x_4481_ = lean_array_get_size(v_buckets_4480_);
v___x_4482_ = lean_nat_dec_lt(v___x_4474_, v___x_4481_);
if (v___x_4482_ == 0)
{
lean_dec_ref(v_buckets_4480_);
return v_snd_4478_;
}
else
{
size_t v___x_4483_; size_t v___x_4484_; lean_object* v___x_4485_; 
v___x_4483_ = ((size_t)0ULL);
v___x_4484_ = lean_usize_of_nat(v___x_4481_);
v___x_4485_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Markdown_buildRefTable_spec__2(v_s_4471_, v_buckets_4480_, v___x_4483_, v___x_4484_, v_snd_4478_);
lean_dec_ref(v_buckets_4480_);
return v___x_4485_;
}
}
v___jp_4486_:
{
lean_object* v___x_4488_; uint8_t v___x_4489_; 
v___x_4488_ = lean_array_get_size(v___y_4487_);
v___x_4489_ = lean_nat_dec_lt(v___x_4474_, v___x_4488_);
if (v___x_4489_ == 0)
{
lean_dec_ref(v___y_4487_);
v_buckets_4480_ = v___x_4475_;
goto v___jp_4479_;
}
else
{
size_t v___x_4490_; size_t v___x_4491_; lean_object* v___x_4492_; lean_object* v_buckets_4493_; 
v___x_4490_ = ((size_t)0ULL);
v___x_4491_ = lean_usize_of_nat(v___x_4488_);
v___x_4492_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Markdown_buildRefTable_spec__3(v___y_4487_, v___x_4490_, v___x_4491_, v___x_4476_);
lean_dec_ref(v___y_4487_);
v_buckets_4493_ = lean_ctor_get(v___x_4492_, 1);
lean_inc_ref(v_buckets_4493_);
lean_dec_ref(v___x_4492_);
v_buckets_4480_ = v_buckets_4493_;
goto v___jp_4479_;
}
}
v___jp_4494_:
{
lean_object* v___x_4499_; 
v___x_4499_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4___redArg(v___y_4497_, v___y_4495_, v___y_4496_, v___y_4498_);
lean_dec(v___y_4498_);
lean_dec(v___y_4497_);
v___y_4487_ = v___x_4499_;
goto v___jp_4486_;
}
v___jp_4500_:
{
uint8_t v___x_4505_; 
v___x_4505_ = lean_nat_dec_le(v___y_4504_, v___y_4503_);
if (v___x_4505_ == 0)
{
lean_dec(v___y_4503_);
lean_inc(v___y_4504_);
v___y_4495_ = v___y_4501_;
v___y_4496_ = v___y_4504_;
v___y_4497_ = v___y_4502_;
v___y_4498_ = v___y_4504_;
goto v___jp_4494_;
}
else
{
v___y_4495_ = v___y_4501_;
v___y_4496_ = v___y_4504_;
v___y_4497_ = v___y_4502_;
v___y_4498_ = v___y_4503_;
goto v___jp_4494_;
}
}
v___jp_4506_:
{
lean_object* v___x_4508_; uint8_t v___x_4509_; 
v___x_4508_ = lean_array_get_size(v___y_4507_);
v___x_4509_ = lean_nat_dec_eq(v___x_4508_, v___x_4474_);
if (v___x_4509_ == 0)
{
lean_object* v___x_4510_; lean_object* v___x_4511_; uint8_t v___x_4512_; 
v___x_4510_ = lean_unsigned_to_nat(1u);
v___x_4511_ = lean_nat_sub(v___x_4508_, v___x_4510_);
v___x_4512_ = lean_nat_dec_le(v___x_4474_, v___x_4511_);
if (v___x_4512_ == 0)
{
lean_inc(v___x_4511_);
v___y_4501_ = v___y_4507_;
v___y_4502_ = v___x_4508_;
v___y_4503_ = v___x_4511_;
v___y_4504_ = v___x_4511_;
goto v___jp_4500_;
}
else
{
v___y_4501_ = v___y_4507_;
v___y_4502_ = v___x_4508_;
v___y_4503_ = v___x_4511_;
v___y_4504_ = v___x_4474_;
goto v___jp_4500_;
}
}
else
{
v___y_4487_ = v___y_4507_;
goto v___jp_4486_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Markdown_buildRefTable___boxed(lean_object* v_s_4521_, lean_object* v_blocks_4522_, lean_object* v_externalRefs_4523_){
_start:
{
lean_object* v_res_4524_; 
v_res_4524_ = l_Lean_Markdown_buildRefTable(v_s_4521_, v_blocks_4522_, v_externalRefs_4523_);
lean_dec_ref(v_externalRefs_4523_);
lean_dec_ref(v_blocks_4522_);
lean_dec_ref(v_s_4521_);
return v_res_4524_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Markdown_buildRefTable_spec__0(lean_object* v_00_u03b2_4525_, lean_object* v_m_4526_, lean_object* v_a_4527_, lean_object* v_b_4528_){
_start:
{
lean_object* v___x_4529_; 
v___x_4529_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Markdown_buildRefTable_spec__0___redArg(v_m_4526_, v_a_4527_, v_b_4528_);
return v___x_4529_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Markdown_buildRefTable_spec__1(lean_object* v_s_4530_, lean_object* v_x_4531_, lean_object* v_x_4532_){
_start:
{
lean_object* v___x_4533_; 
v___x_4533_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Markdown_buildRefTable_spec__1___redArg(v_x_4531_, v_x_4532_);
return v___x_4533_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Markdown_buildRefTable_spec__1___boxed(lean_object* v_s_4534_, lean_object* v_x_4535_, lean_object* v_x_4536_){
_start:
{
lean_object* v_res_4537_; 
v_res_4537_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Markdown_buildRefTable_spec__1(v_s_4534_, v_x_4535_, v_x_4536_);
lean_dec_ref(v_s_4534_);
return v_res_4537_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4(lean_object* v_n_4538_, lean_object* v_as_4539_, lean_object* v_lo_4540_, lean_object* v_hi_4541_, lean_object* v_w_4542_, lean_object* v_hlo_4543_, lean_object* v_hhi_4544_){
_start:
{
lean_object* v___x_4545_; 
v___x_4545_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4___redArg(v_n_4538_, v_as_4539_, v_lo_4540_, v_hi_4541_);
return v___x_4545_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4___boxed(lean_object* v_n_4546_, lean_object* v_as_4547_, lean_object* v_lo_4548_, lean_object* v_hi_4549_, lean_object* v_w_4550_, lean_object* v_hlo_4551_, lean_object* v_hhi_4552_){
_start:
{
lean_object* v_res_4553_; 
v_res_4553_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4(v_n_4546_, v_as_4547_, v_lo_4548_, v_hi_4549_, v_w_4550_, v_hlo_4551_, v_hhi_4552_);
lean_dec(v_hi_4549_);
lean_dec(v_n_4546_);
return v_res_4553_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Markdown_buildRefTable_spec__0_spec__0(lean_object* v_00_u03b2_4554_, lean_object* v_a_4555_, lean_object* v_b_4556_, lean_object* v_x_4557_){
_start:
{
lean_object* v___x_4558_; 
v___x_4558_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Markdown_buildRefTable_spec__0_spec__0___redArg(v_a_4555_, v_b_4556_, v_x_4557_);
return v___x_4558_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4_spec__5(lean_object* v_n_4559_, lean_object* v_lo_4560_, lean_object* v_hi_4561_, lean_object* v_hhi_4562_, lean_object* v_pivot_4563_, lean_object* v_as_4564_, lean_object* v_i_4565_, lean_object* v_k_4566_, lean_object* v_ilo_4567_, lean_object* v_ik_4568_, lean_object* v_w_4569_){
_start:
{
lean_object* v___x_4570_; 
v___x_4570_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4_spec__5___redArg(v_hi_4561_, v_pivot_4563_, v_as_4564_, v_i_4565_, v_k_4566_);
return v___x_4570_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4_spec__5___boxed(lean_object* v_n_4571_, lean_object* v_lo_4572_, lean_object* v_hi_4573_, lean_object* v_hhi_4574_, lean_object* v_pivot_4575_, lean_object* v_as_4576_, lean_object* v_i_4577_, lean_object* v_k_4578_, lean_object* v_ilo_4579_, lean_object* v_ik_4580_, lean_object* v_w_4581_){
_start:
{
lean_object* v_res_4582_; 
v_res_4582_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Markdown_buildRefTable_spec__4_spec__5(v_n_4571_, v_lo_4572_, v_hi_4573_, v_hhi_4574_, v_pivot_4575_, v_as_4576_, v_i_4577_, v_k_4578_, v_ilo_4579_, v_ik_4580_, v_w_4581_);
lean_dec_ref(v_pivot_4575_);
lean_dec(v_hi_4573_);
lean_dec(v_lo_4572_);
lean_dec(v_n_4571_);
return v_res_4582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Markdown_parseBlocks(lean_object* v_s_4583_, lean_object* v_indent_4584_){
_start:
{
lean_object* v___x_4585_; lean_object* v___x_4586_; 
lean_inc_ref(v_s_4583_);
v___x_4585_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlocksRaw(v_s_4583_, v_indent_4584_);
v___x_4586_ = l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_postProcessRefDefs(v_s_4583_, v___x_4585_);
lean_dec_ref(v___x_4585_);
lean_dec_ref(v_s_4583_);
return v___x_4586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Markdown_parseBlocks___boxed(lean_object* v_s_4587_, lean_object* v_indent_4588_){
_start:
{
lean_object* v_res_4589_; 
v_res_4589_ = l_Lean_Markdown_parseBlocks(v_s_4587_, v_indent_4588_);
lean_dec(v_indent_4588_);
return v_res_4589_;
}
}
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Iterate(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Nat(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_QSort_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Compare(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Markdown_Block(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Markdown_InlineCursor(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Markdown_Parser_RefDef(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Markdown_Parser_Cursor(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Markdown_Parser_BlockZipper(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Markdown_Parser_Html(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Markdown_Parser_Block(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Iterate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_QSort_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Compare(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Markdown_Block(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Markdown_InlineCursor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Markdown_Parser_RefDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Markdown_Parser_Cursor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Markdown_Parser_BlockZipper(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Markdown_Parser_Html(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg___closed__0___boxed__const__1 = _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f_spec__1___redArg___closed__0___boxed__const__1);
l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__0___boxed__const__1 = _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__0___boxed__const__1);
l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__1___boxed__const__1 = _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__1___boxed__const__1();
lean_mark_persistent(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseAtxHeading_x3f___closed__1___boxed__const__1);
l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f___closed__0___boxed__const__1 = _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseBlockquoteMarker_x3f___closed__0___boxed__const__1);
l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__5___boxed__const__1 = _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__5___boxed__const__1();
lean_mark_persistent(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__5___boxed__const__1);
l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__11___boxed__const__1 = _init_l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__11___boxed__const__1();
lean_mark_persistent(l___private_Lean_Data_Markdown_Parser_Block_0__Lean_Markdown_parseHtmlBlockStart_x3f___closed__11___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Markdown_Parser_Block(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Init_Data_String_Iterate(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Nat(uint8_t builtin);
lean_object* initialize_Init_Data_Array_QSort_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_String_Compare(uint8_t builtin);
lean_object* initialize_Lean_Data_Markdown_Block(uint8_t builtin);
lean_object* initialize_Lean_Data_Markdown_InlineCursor(uint8_t builtin);
lean_object* initialize_Lean_Data_Markdown_Parser_RefDef(uint8_t builtin);
lean_object* initialize_Lean_Data_Markdown_Parser_Cursor(uint8_t builtin);
lean_object* initialize_Lean_Data_Markdown_Parser_BlockZipper(uint8_t builtin);
lean_object* initialize_Lean_Data_Markdown_Parser_Html(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Markdown_Parser_Block(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Iterate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_QSort_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Compare(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Markdown_Block(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Markdown_InlineCursor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Markdown_Parser_RefDef(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Markdown_Parser_Cursor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Markdown_Parser_BlockZipper(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Markdown_Parser_Html(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Markdown_Parser_Block(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Markdown_Parser_Block(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Markdown_Parser_Block(builtin);
}
#ifdef __cplusplus
}
#endif
